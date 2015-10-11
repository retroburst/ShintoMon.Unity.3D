using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// Fireworks controller manages
// the starting and stopping of
// fireworks display.
/// </summary>
public class FireworksController : MonoBehaviour {
	public List<GameObject> fireworks = new List<GameObject>();
	
	// Use this for initialization
	private void Awake () {
		fireworks.ForEachAction(x => x.SetActive(false));
	}
	
	/// <summary>
	/// Starts the fireworks.
	/// </summary>
	public void StartFireworks()
	{
		fireworks.ForEachAction(x => x.SetActive(true));
	}
	
	/// <summary>
	/// Stops the fireworks.
	/// </summary>
	public void StopFireworks()
	{
		fireworks.ForEachAction(x => x.SetActive(false));
	}
}
