using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

/// <summary>
/// Handles simple touch input for the game.
/// </summary>
public class TouchInput : MonoBehaviour
{
	private GameController gameController = null;
	private Dictionary<int, float> activeTouches = null;
	public delegate void TouchDetectedHandler();
	public delegate void BallTouchDetectedHandler();
	public delegate void PaddleTouchDetectedHandler(Vector2 position, float timeTouchStarted);
	public event TouchDetectedHandler TouchDetected;
	public event BallTouchDetectedHandler BallTouchDetected;
	public event PaddleTouchDetectedHandler PaddleTouchDetected;
	
	/// <summary>
	/// Awakes this instance.
	/// </summary>
	private void Awake ()
	{
		gameController = GameController.FindGameController ();
		activeTouches = new Dictionary<int, float>();
	}

	// Update is called once per frame
	private void Update ()
	{
		// move based on touch
		foreach (Touch touch in Input.touches) {
			if (touch.phase == TouchPhase.Ended) {
				if (activeTouches.ContainsKey (touch.fingerId)) {
					activeTouches.Remove (touch.fingerId);
				}
			} else if (touch.phase == TouchPhase.Began) {
				// if touch hits the ball - process as ball touch
				Ray ray = Camera.main.ScreenPointToRay (touch.position);
				RaycastHit hit;
				Physics.Raycast (ray, out hit);
				if (hit.collider != null && hit.collider.gameObject.tag == Constants.GAME_OBJECT_TAG_BALL) {
					if (BallTouchDetected != null) {
						BallTouchDetected ();
					}
					if (TouchDetected != null) {
						TouchDetected ();
					}
					continue;
				} else {
					// take off the margin from time so we get instant movement for paddle
					activeTouches.Add (touch.fingerId, Time.time - gameController.ConfigurableSettings.TouchStartedMarginInSeconds);
					if (TouchDetected != null) {
						TouchDetected ();
					}
					if (PaddleTouchDetected != null) {
						PaddleTouchDetected (touch.position, activeTouches [touch.fingerId]);
					}
				}
			} else if (touch.phase == TouchPhase.Stationary) {
				if (PaddleTouchDetected != null) {
					if (activeTouches.ContainsKey (touch.fingerId)) {
						PaddleTouchDetected (touch.position, activeTouches [touch.fingerId]);
					}
					else {
						Logger.LogWarning("TouchInput->Update: Stationary touch was not in the activeTouches dictionary!");
					}
				}
			} else if (touch.phase == TouchPhase.Canceled) {
				if (activeTouches.ContainsKey (touch.fingerId)) {
					activeTouches.Remove (touch.fingerId);
				}
			}
		}
	}
}
