using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// Detects and translates touch and swipe input.
/// </summary>
public class SwipeInput : MonoBehaviour
{
	private float fingerStartTime = 0.0f;
	private Vector2 leftFingerPos = Vector2.zero;
	private Vector2 leftFingerLastPos = Vector2.zero;
	private Vector2 leftFingerMovedBy = Vector2.zero;
	private float slideMagnitudeX = 0.0f;
	private float slideMagnitudeY = 0.0f;
	private float maxTapTime = 0.5f;
	private float maxTapDist = 20.0f;
	public float magnitudeFactor = 1.0f;
	
	public event Action<float> HorizontalMovementDetected;
	public event Action TapDetected;
	
	private void Update ()
	{
		if (Input.touchCount == 1) {
			Touch touch = Input.GetTouch (0);
			
			if (touch.phase == TouchPhase.Began) {
				fingerStartTime = Time.time;
				leftFingerPos = Vector2.zero;
				leftFingerLastPos = Vector2.zero;
				leftFingerMovedBy = Vector2.zero;
				
				slideMagnitudeX = 0.0f;
				//slideMagnitudeY = 0.0f;
				
				// record start position
				leftFingerPos = touch.position;
				
			} else if (touch.phase == TouchPhase.Moved) {
				leftFingerMovedBy = touch.position - leftFingerPos; // or Touch.deltaPosition : Vector2
				// The position delta since last change.
				leftFingerLastPos = leftFingerPos;
				leftFingerPos = touch.position;
				
				// slide horz
				slideMagnitudeX = leftFingerMovedBy.x / Screen.width;
				
				// slide vert
				//slideMagnitudeY = leftFingerMovedBy.y / Screen.height;
				
				if (HorizontalMovementDetected != null)
					HorizontalMovementDetected (slideMagnitudeX * magnitudeFactor);
					
			} else if (touch.phase == TouchPhase.Stationary) {
				leftFingerLastPos = leftFingerPos;
				leftFingerPos = touch.position;
				
				slideMagnitudeX = 0.0f;
				//slideMagnitudeY = 0.0f;
			} else if (touch.phase == TouchPhase.Ended) {
				slideMagnitudeX = 0.0f;
				//slideMagnitudeY = 0.0f;
				float tapTime = Time.time - fingerStartTime;
				float tapDist = (touch.position - leftFingerPos).magnitude;
				if (tapDist <= maxTapDist && tapTime < maxTapTime) {
					if (TapDetected != null)
						TapDetected ();
				}
				
			} else if (touch.phase == TouchPhase.Canceled) {
				slideMagnitudeX = 0.0f;
				//slideMagnitudeY = 0.0f;
			}
		}
	}
}