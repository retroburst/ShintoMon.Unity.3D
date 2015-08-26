using UnityEngine;
using System.Collections;

/// <summary>
/// Ball controller.
/// </summary>
public class BallController : MonoBehaviour
{
	private bool inPlay = false;
	private Rigidbody rb = null;
	private Vector3 originalPosition = Vector3.zero;
	private Vector3 originalBallScale = Vector3.zero;

	/// <summary>
	/// Start this instance.
	/// </summary>
	private void Start()
	{
		rb = GetComponent<Rigidbody> ();
		originalPosition = gameObject.transform.position.Clone();
		originalBallScale = gameObject.transform.localScale.Clone ();
		GameController.Instance.GameLevelChanged += (GameLevel l) => ResetBall();
	}
	
	/// <summary>
	/// Update this instance.
	/// </summary>
	void Update ()
	{
		if ((GameController.Instance.State.PlayState != PlayState.GameOver || GameController.Instance.State.PlayState != PlayState.GameWon) 
			&& Input.GetButtonDown ("Fire1") && !inPlay) {
			float initialVelocity = GameController.Instance.State.Level.BallVelocity;
			transform.parent = null;
			inPlay = true;
			rb.isKinematic = false;
			rb.AddForce (new Vector3 (Random.Range (-initialVelocity, initialVelocity), initialVelocity, 0f));
			GameController.Instance.BallInPlay();
		}
	}
	
	/// <summary>
	/// Handles the collision enter event.
	/// </summary>
	/// <param name="collision">Collision.</param>
	private void OnCollisionEnter (Collision collision)
	{
		if (collision.gameObject.tag == Constants.GAME_OBJECT_TAG_EMA) {
			GameController.Instance.EmaCollected(collision.gameObject);
			collision.gameObject.SetActive (false);
			GameController.Instance.GameObjectPoolManager
			.GetPool (GameController.Instance.Prefabs.EmaParticlesPrefab)
			.Take (collision.gameObject.transform.position, Quaternion.identity).SetActive (true);
		} else if (collision.gameObject.tag == Constants.GAME_OBJECT_TAG_WATER) {
			GameController.Instance.BallLost();
			GameController.Instance.GameObjectPoolManager
				.GetPool (GameController.Instance.Prefabs.EmaParticlesPrefab)
				.Take (gameObject.transform.position, Quaternion.identity).SetActive (true);
			gameObject.SetActive(false);
			Invoke("ResetBall", 2.0f);
		}
	}
	
	/// <summary>
	/// Resets the ball.
	/// </summary>
	private void ResetBall()
	{
		gameObject.transform.rotation = GameController.Instance.Components.Paddle.transform.rotation;
		gameObject.transform.parent = GameController.Instance.Components.Paddle.transform;
		gameObject.transform.position = new Vector3(GameController.Instance.Components.Paddle.transform.position.x, originalPosition.y, originalPosition.z);
		gameObject.transform.localScale = originalBallScale;
		gameObject.transform.localScale += GameController.Instance.State.Level.BallScale;
		rb.isKinematic = true;
		rb.velocity = Vector3.zero;
		inPlay = false;
		gameObject.SetActive(true);
	}
	
	
	
}
