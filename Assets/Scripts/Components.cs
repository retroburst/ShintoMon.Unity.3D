using UnityEngine;
using System.Collections;

/// <summary>
/// Game components set in the Unity designer.
/// </summary>
public class Components : MonoBehaviour {
	public SoundEffects SoundEffects = null;
	public BackgroundSound BackgroundSound = null;
	public PaddleController Paddle = null;
	public BallController Ball = null;
	public SwipeInput SwipeInput = null;
}
