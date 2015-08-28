using UnityEngine;
using System.Collections;

/// <summary>
/// Random rotator.
/// Used for randomly rotating 
/// various game object e.g. Asteroids
/// </summary>
public class RandomRotator : MonoBehaviour
{
	private Rigidbody rb = null;
	public float tumble = 1.0f;

	/// <summary>
	/// Start this instance.
	/// </summary>
	private void Start ()
	{
		rb = GetComponent<Rigidbody> ();
		rb.angularVelocity = Random.insideUnitSphere * tumble;
	}
	
}
