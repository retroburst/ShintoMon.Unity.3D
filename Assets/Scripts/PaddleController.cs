using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// Paddle controller.
/// </summary>
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
		gameController.Components.TouchInput.PaddleTouchDetected += HandlePaddleTouch;
		originalPaddleScale = gameObject.transform.localScale.Clone ();
		ball = gameController.Components.Ball;
	}
	
	/// <summary>
	/// Update this instance.
	/// </summary>
	private void Update ()
	{
		float horizontal = Input.GetAxis (Constants.INPUT_AXIS_HORIZONTAL);
		if (horizontal != 0.0f) {
			MovePaddle (horizontal);
		}
	}
	
	/// <summary>
	/// Handles the paddle touch.
	/// </summary>
	/// <param name="touchPosition">Touch position.</param>
	/// <param name="touchStartTime">Touch start time.</param>
	private void HandlePaddleTouch (Vector2 touchPosition, float touchStartTime)
	{
		double halfScreen = Screen.width / 2.0;
		float timeTouchStationary = Time.time - touchStartTime;
		if (touchPosition.x < halfScreen) {
			MovePaddle (Mathf.Lerp (0.0f, -1.0f, timeTouchStationary * gameController.ConfigurableSettings.TouchStaionaryTimeMultipler));
		} else
			if (touchPosition.x > halfScreen) {
			MovePaddle (Mathf.Lerp (0.0f, 1.0f, timeTouchStationary * gameController.ConfigurableSettings.TouchStaionaryTimeMultipler));
		}
	}
	
	/// <summary>
	/// Moves the paddle.
	/// </summary>
	/// <param name="x">The x coordinate.</param>
	private void MovePaddle (float x)
	{
		if (gameController.State == null || gameController.State.PlayState == PlayState.GameOver || gameController.State.PlayState == PlayState.GameWon)
			return;
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
		gameObject.transform.localScale += level.PaddleAdditiveScale.ToVector3 ();
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
