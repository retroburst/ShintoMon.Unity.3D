using UnityEngine;
using System.Collections;

/// <summary>
/// Destroys the game object by time (lifetime).
/// </summary>
public class InactivateByTime : MonoBehaviour {
	public float lifetime;

	/// <summary>
	/// Handles the enable event.
	/// </summary>
	private void OnEnable () {
		Invoke("Inactivate", lifetime);
	}
	
	/// <summary>
	/// Handles the disable event.
	/// </summary>
	private void OnDisable() {
		CancelInvoke();
	}
	
	/// <summary>
	/// Inactivate this instance.
	/// </summary>
	private void Inactivate()
	{
		gameObject.SetActive(false);
	}
}
