using UnityEngine;
using System.Collections;
using System;

public class TouchInput : MonoBehaviour {
	/// <summary>
	/// Occurs when tap is detected.
	/// </summary>
	public event Action<Vector2> TapDetected;

	// Update is called once per frame
	private void Update () {
		// handle touch input
		if(Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Stationary)
		{
			Vector2 touchPosition = Input.GetTouch(0).position;
			if(TapDetected !=  null) TapDetected(touchPosition);
		}
	}
}
