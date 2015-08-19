using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// Detects and translates touch and swipe input.
/// </summary>
public class SwipeInput : MonoBehaviour
{
	private float fingerStartTime = 0.0f;
	private Vector2 fingerStartPos = Vector2.zero;
	private bool isSwipe = false;
	private float minSwipeDist = 40.0f;
	private float maxSwipeTime = 2.0f;
	private float maxTapTime = 0.5f;
	private float maxTapDist = 20.0f;

	public event Action LeftSwipeDetected;
	public event Action RightSwipeDetected;
	public event Action DownSwipeDetected;
	public event Action TapDetected;
	
	/// <summary>
	/// Update this instance.
	/// </summary>
	private void Update ()
	{	
		if (Input.touchCount > 0) {		
			foreach (Touch touch in Input.touches) {
				switch (touch.phase) {
				case TouchPhase.Began:
					/* this is a new touch */
					isSwipe = true;
					fingerStartTime = Time.time;
					fingerStartPos = touch.position;
					break;
					
				case TouchPhase.Canceled:
					/* The touch is being canceled */
					isSwipe = false;
					break;
				
				case TouchPhase.Ended:
					float tapTime = Time.time - fingerStartTime;
					float tapDist = (touch.position - fingerStartPos).magnitude;
					if (tapDist <= maxTapDist && tapTime < maxTapTime) {
						if (TapDetected != null)
							TapDetected ();
					}
					break;
				
				case TouchPhase.Moved:
					
					float gestureTime = Time.time - fingerStartTime;
					float gestureDist = (touch.position - fingerStartPos).magnitude;
					
					if (isSwipe && gestureTime < maxSwipeTime && gestureDist > minSwipeDist) {
						Vector2 direction = touch.position - fingerStartPos;
						Vector2 swipeType = Vector2.zero;
						
						if (Mathf.Abs (direction.x) > Mathf.Abs (direction.y)) {
							// the swipe is horizontal:
							swipeType = Vector2.right * Mathf.Sign (direction.x);
						} else {
							// the swipe is vertical:
							swipeType = Vector2.up * Mathf.Sign (direction.y);
						}
						
						if (swipeType.x != 0.0f) {
							if (swipeType.x > 0.0f) {
								if (RightSwipeDetected != null)
									RightSwipeDetected ();
							} else {
								if (LeftSwipeDetected != null)
									LeftSwipeDetected ();
							}
						}
						
						if (swipeType.y != 0.0f) {
							if (swipeType.y > 0.0f) {
								// MOVE UP
								// do nothing
							} else {
								if (DownSwipeDetected != null)
									DownSwipeDetected ();
							}
						}
						
					}
					
					break;
				}
			}
		}
		
	}
}
