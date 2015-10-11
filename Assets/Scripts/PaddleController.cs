﻿using UnityEngine;
using System.Collections;

public class PaddleController : MonoBehaviour
{
	public float paddleSpeed = 0f;
	public float minClampX = 0f;
	public float maxClampX = 0f;
	private Vector3 originalPaddleScale = Vector3.zero;
	private GameController gameController = null;
	private BallController ball = null;
	
	/// <summary>
	/// Awakes this instance.
	/// </summary>
	private void Awake ()
	{
		gameController = GameController.FindGameController ();
		gameController.GameLevelChanged += SetPaddleForLevel;
		originalPaddleScale = gameObject.transform.localScale.Clone ();
		ball = gameController.Components.Ball;
		gameController.Components.SwipeInput.HorizontalMovementDetected += HandleHorizontalTouchMovement;
	}
	
	// Update is called once per frame
	private void Update ()
	{
		float horizontal = Input.GetAxis ("Horizontal");
		if (horizontal != 0.0f)
			MovePaddle (horizontal);
	}
	
	/// <summary>
	/// Handles the swipe.
	/// </summary>
	/// <param name="x">The x coordinate.</param>
	private void HandleHorizontalTouchMovement (float x)
	{
		if (x != 0.0f)
			MovePaddle (x);
	}
	
	/// <summary>
	/// Moves the paddle.
	/// </summary>
	/// <param name="x">The x coordinate.</param>
	private void MovePaddle (float x)
	{
		if(gameController.State.PlayState == PlayState.GameOver || gameController.State.PlayState == PlayState.GameWon) return;
		Vector3 playerPosition = transform.position;
		float xPosition = transform.position.x + x * paddleSpeed;
		playerPosition = new Vector3 (Mathf.Clamp (xPosition, minClampX, maxClampX), playerPosition.y, playerPosition.z);
		transform.position = playerPosition;
		PositionBall (playerPosition.x);
	}
	
	/// <summary>
	/// Positions the ball.
	/// </summary>
	/// <param name="x">The x coordinate.</param>
	private void PositionBall (float x)
	{
		if (!ball.InPlay) {
			Vector3 originalPosition = ball.gameObject.transform.position;
			ball.gameObject.transform.position = new Vector3 (x, originalPosition.y, originalPosition.z);
		}
	}
	
	/// <summary>
	/// Sets the paddle for level.
	/// </summary>
	/// <param name="level">Level.</param>
	private void SetPaddleForLevel (GameLevel level)
	{
		paddleSpeed = level.PaddleSpeed;
		minClampX = CalculateClamp (level.PaddleAdditiveScale.x + originalPaddleScale.x, gameController.ConfigurableSettings.PaddleClampXMin);
		maxClampX = CalculateClamp (level.PaddleAdditiveScale.x + originalPaddleScale.x, gameController.ConfigurableSettings.PaddleClampXMax);
		gameObject.transform.localScale = originalPaddleScale;
		gameObject.transform.localScale += level.PaddleAdditiveScale.ToVector3();
		PositionBall (gameObject.transform.position.x);
	}
	
	/// <summary>
	/// Calculates the clamp.
	/// </summary>
	/// <returns>The clamp.</returns>
	/// <param name="xScale">X scale.</param>
	/// <param name="normalClamp">Normal clamp.</param>
	private float CalculateClamp (float xScale, float normalClamp)
	{
		float halfScale = xScale / 2;
		if (normalClamp < 0) { 
			return(normalClamp + halfScale);
		} else { 
			return(normalClamp - halfScale);
		}
	}

}
