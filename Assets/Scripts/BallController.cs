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
	
	/// <summary>
	/// Awake this instance.
	/// </summary>
	private void Awake ()
	{
		rb = GetComponent<Rigidbody> ();
		originalPosition = new Vector3(gameObject.transform.position.x, gameObject.transform.position.y, gameObject.transform.position.z);
		
	}
	
	/// <summary>
	/// Update this instance.
	/// </summary>
	void Update ()
	{
		if (Input.GetButtonDown ("Fire1") && !inPlay) {
			float initialVelocity = GameController.Instance.ConfigurableSettings.BallInitialVelocity;
			transform.parent = null;
			inPlay = true;
			rb.isKinematic = false;
			rb.AddForce (new Vector3 (Random.Range (-initialVelocity, initialVelocity), initialVelocity, 0f));
		}
	}
	
	/// <summary>
	/// Handles the collision enter event.
	/// </summary>
	/// <param name="collision">Collision.</param>
	private void OnCollisionEnter (Collision collision)
	{	
		if (collision.gameObject.tag == Constants.GAME_OBJECT_TAG_EMA) {
			collision.gameObject.SetActive (false);
			GameController.Instance.GameObjectPoolManager
			.GetPool (GameController.Instance.Prefabs.EmaParticlesPrefab)
			.Take (collision.gameObject.transform.position, Quaternion.identity).SetActive (true);
		} else if (collision.gameObject.tag == Constants.GAME_OBJECT_TAG_WATER) {
			GameController.Instance.GameObjectPoolManager
				.GetPool (GameController.Instance.Prefabs.EmaParticlesPrefab)
				.Take (gameObject.transform.position, Quaternion.identity).SetActive (true);
			gameObject.SetActive(false);
			gameObject.transform.parent = GameController.Instance.Components.Paddle.transform;
			gameObject.transform.position = originalPosition;
			rb.isKinematic = true;
			rb.velocity = Vector3.zero;
			inPlay = false;
			gameObject.SetActive(true);
		}
	}
	
}
