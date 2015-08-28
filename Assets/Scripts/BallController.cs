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
	private void Start ()
	{
		GameController.Instance.GameLevelChanged += (GameLevel l) => ResetBall ();
		rb = GetComponent<Rigidbody> ();
		originalPosition = gameObject.transform.position.Clone ();
		originalBallScale = gameObject.transform.localScale.Clone ();
	}
	
	/// <summary>
	/// Update this instance.
	/// </summary>
	void Update ()
	{
		if ((GameController.Instance.State.PlayState != PlayState.GameOver 
			&& GameController.Instance.State.PlayState != PlayState.GameWon) 
			&& Input.GetButtonDown ("Fire1") && !inPlay) {
			float initialVelocity = GameController.Instance.State.Level.BallVelocity;
			transform.parent = null;
			inPlay = true;
			rb.isKinematic = false;
			rb.AddForce (new Vector3 (Random.Range (-initialVelocity, initialVelocity), initialVelocity, 0f));
			GameController.Instance.BallInPlay ();
			rb.angularVelocity = Random.insideUnitSphere * 10000.0f;
		}
	}
	
	/// <summary>
	/// Handles the collision enter event.
	/// </summary>
	/// <param name="collision">Collision.</param>
	private void OnCollisionEnter (Collision collision)
	{
		rb.angularVelocity = Random.insideUnitSphere * 10000.0f;
		if (collision.gameObject.tag == Constants.GAME_OBJECT_TAG_EMA) {
			GameController.Instance.EmaCollected (collision.gameObject);
			collision.gameObject.SetActive (false);
			GameController.Instance.GameObjectPoolManager
			.GetPool (GameController.Instance.Prefabs.EmaParticlesPrefab)
			.Take (collision.gameObject.transform.position, Quaternion.identity).SetActive (true);
		} else if (collision.gameObject.tag == Constants.GAME_OBJECT_TAG_WATER) {
			GameController.Instance.BallLost ();
			GameController.Instance.GameObjectPoolManager
				.GetPool (GameController.Instance.Prefabs.EmaParticlesPrefab)
				.Take (gameObject.transform.position, Quaternion.identity).SetActive (true);
			gameObject.SetActive (false);
			//Invoke ("ResetBall", 0.5f);
			ResetBall();
		}
	}
	
	/// <summary>
	/// Resets the ball.
	/// </summary>
	private void ResetBall ()
	{
		float heightDifference = ((GameController.Instance.State.Level.BallScale.y + originalBallScale.y) - originalBallScale.y) / 2;
		gameObject.transform.position = new Vector3 (GameController.Instance.Components.Paddle.transform.position.x, originalPosition.y + heightDifference, originalPosition.z);
		gameObject.transform.localScale = originalBallScale;
		gameObject.transform.localScale += GameController.Instance.State.Level.BallScale;
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
