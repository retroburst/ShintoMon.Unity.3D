using UnityEngine;
using System.Collections;
using System.Collections.Generic;

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
	private void Start ()
	{
		gameController = GameController.FindGameController ();
		gameController.GameLevelChanged += HandleGameLevelChanged;
		gameController.GameLevelWon += HandleGameLevelWon;
		rb = GetComponent<Rigidbody> ();
		originalPosition = gameObject.transform.position.Clone ();
		originalBallScale = gameObject.transform.localScale.Clone ();
		gameController.Components.TouchInput.TapDetected += HandleTap;
	}
	
	/// <summary>
	/// Handles the game level won event.
	/// </summary>
	private void HandleGameLevelWon ()
	{
		gameObject.SetActive (false);
		gameController.AudioController.PlayBallExplosionSoundEffect ();
		List<GameObject> particles = gameController.GameObjectPoolManager
			.GetPool (gameController.Prefabs.BallParticlesPrefab)
			.Take (2, gameObject.transform.position, Quaternion.identity);
		particles.ForEach (x => x.SetActive (true));
	}
	
	/// <summary>
	/// Handles the game level changed event.
	/// </summary>
	/// <param name="l">L.</param>
	private void HandleGameLevelChanged (GameLevel l)
	{
		ResetBall ();
	}
	
	/// <summary>
	/// Handles the tap.
	/// </summary>
	private void HandleTap (Vector2 position)
	{
		if (gameController.State == null)
			return;
		if ((gameController.State.PlayState == PlayState.NotStarted || gameController.State.PlayState == PlayState.Playing) && !inPlay) {
			LaunchBall ();
		}
	}
	
	/// <summary>
	/// Update this instance.
	/// </summary>
	private void Update ()
	{
		if (gameController.State != null && (gameController.State.PlayState == PlayState.NotStarted || gameController.State.PlayState == PlayState.Playing) 
		    && !inPlay && (Input.GetButtonDown (Constants.INPUT_FIRE_1) || TapDetected() )) {
			LaunchBall ();
		}
	}
	
	/// <summary>
	/// Detects a touch tap.
	/// </summary>
	private bool TapDetected()
	{
		return(Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Stationary);
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
		rb.angularVelocity = Random.insideUnitSphere * gameController.ConfigurableSettings.BallAngularVelocity;
	}
	
	/// <summary>
	/// Handles the collision enter event.
	/// </summary>
	/// <param name="collision">Collision.</param>
	private void OnCollisionEnter (Collision collision)
	{
		rb.angularVelocity = Random.insideUnitSphere * gameController.ConfigurableSettings.BallAngularVelocity;
		if (collision.gameObject.tag == Constants.GAME_OBJECT_TAG_EMA) {
			collision.gameObject.SetActive (false);
			gameController.EmaCollected (collision.gameObject);
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
			gameController.BallLost ();
			StartCoroutine (PerformBallHitsWater ());
		}
	}
	
	/// <summary>
	/// Performs the ball hits water.
	/// </summary>
	/// <returns>The ball hits water.</returns>
	private IEnumerator PerformBallHitsWater ()
	{
		gameController.AudioController.PlayBallExplosionSoundEffect ();
		List<GameObject> particles = gameController.GameObjectPoolManager
				.GetPool (gameController.Prefabs.BallParticlesPrefab)
				.Take (2, gameObject.transform.position, Quaternion.identity);
		particles.ForEach (x => x.SetActive (true));
		// move the ball off the screen, as disabling it here will stop
		// the coroutine running
		gameObject.transform.position = new Vector3 (0.0f, -1000.00f, 0.0f);
		yield return new WaitForSeconds (2);
		ResetBall ();
		yield return null;
	}
	
	/// <summary>
	/// Resets the ball.
	/// </summary>
	private void ResetBall ()
	{
		float heightDifference = ((gameController.State.Level.BallAdditiveScale.y + originalBallScale.y) - originalBallScale.y) / 2;
		gameObject.transform.position = new Vector3 (gameController.Components.Paddle.transform.position.x, originalPosition.y + heightDifference, originalPosition.z);
		gameObject.transform.localScale = originalBallScale;
		gameObject.transform.localScale += gameController.State.Level.BallAdditiveScale.ToVector3 ();
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
