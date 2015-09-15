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
	private GameController gameController = null;
	
	/// <summary>
	/// Awakes this instance.
	/// </summary>
	private void Awake ()
	{
		gameController = GameController.FindGameController ();
		gameController.GameLevelChanged += (GameLevel l) => ResetBall ();
		gameController.GameLevelWon += () => gameObject.SetActive (false);
		rb = GetComponent<Rigidbody> ();
		originalPosition = gameObject.transform.position.Clone ();
		originalBallScale = gameObject.transform.localScale.Clone ();
		gameController.Components.SwipeInput.TapDetected += HandleTap;
	}
	
	/// <summary>
	/// Handles the tap.
	/// </summary>
	private void HandleTap ()
	{
		if ((gameController.State.PlayState == PlayState.NotStarted || gameController.State.PlayState == PlayState.Playing) && !inPlay) {
			LaunchBall ();
		}
	}
	
	/// <summary>
	/// Update this instance.
	/// </summary>
	private void Update ()
	{
		if ((gameController.State.PlayState == PlayState.NotStarted || gameController.State.PlayState == PlayState.Playing) 
			&& Input.GetButtonDown ("Fire1") && !inPlay) {
			LaunchBall ();
		}
	}
	
	/// <summary>
	/// Launchs the ball.
	/// </summary>
	private void LaunchBall ()
	{
		float initialVelocity = gameController.State.Level.BallVelocity;
		inPlay = true;
		rb.isKinematic = false;
		rb.AddForce (new Vector3 (Random.Range (-initialVelocity, initialVelocity), initialVelocity, 0f));
		gameController.BallInPlay ();
		rb.angularVelocity = Random.insideUnitSphere * 10000.0f;
	}
	
	/// <summary>
	/// Handles the collision enter event.
	/// </summary>
	/// <param name="collision">Collision.</param>
	private void OnCollisionEnter (Collision collision)
	{
		rb.angularVelocity = Random.insideUnitSphere * 10000.0f;
		if (collision.gameObject.tag == Constants.GAME_OBJECT_TAG_EMA) {
			gameController.EmaCollected (collision.gameObject);
			collision.gameObject.SetActive (false);
			gameController.GameObjectPoolManager
				.GetPool (gameController.Prefabs.EmaParticlesPrefab)
			.Take (collision.gameObject.transform.position, Quaternion.identity).SetActive (true);
		}
		gameController.AudioController.PlayBounceSoundEffect ();
	}
	
	/// <summary>
	/// Handles the trigger enter event.
	/// </summary>
	/// <param name="other">Other.</param>
	private void OnTriggerEnter (Collider other)
	{
		if (other.gameObject.tag == Constants.GAME_OBJECT_TAG_WATER_SURFACE) {
			gameController.AudioController.PlaySplashSoundEffect ();
		} else if (other.gameObject.tag == Constants.GAME_OBJECT_TAG_WATER_BOTTOM) {
			gameController.BallLost ();
			gameController.GameObjectPoolManager
			.GetPool (gameController.Prefabs.EmaParticlesPrefab)
				.Take (gameObject.transform.position, Quaternion.identity).SetActive (true);
			gameObject.SetActive (false);
			ResetBall ();
		}
	}
	
	/// <summary>
	/// Resets the ball.
	/// </summary>
	private void ResetBall ()
	{
		float heightDifference = ((gameController.State.Level.BallAdditiveScale.y + originalBallScale.y) - originalBallScale.y) / 2;
		gameObject.transform.position = new Vector3 (gameController.Components.Paddle.transform.position.x, originalPosition.y + heightDifference, originalPosition.z);
		gameObject.transform.localScale = originalBallScale;
		gameObject.transform.localScale += gameController.State.Level.BallAdditiveScale.ToVector3();
		rb.isKinematic = true;
		rb.velocity = Vector3.zero;
		inPlay = false; 
		gameObject.SetActive (true);
	}
	
	/// <summary>
	/// Gets a value indicating whether this <see cref="BallController"/> in play.
	/// </summary>
	/// <value><c>true</c> if in play; otherwise, <c>false</c>.</value>
	public bool InPlay { get { return (inPlay); } }
	
	
}
