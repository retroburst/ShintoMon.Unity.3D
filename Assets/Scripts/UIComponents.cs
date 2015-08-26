using UnityEngine;
using UnityEngine.UI;
using System.Collections;

/// <summary>
/// User interface components.
/// </summary>
public class UIComponents : MonoBehaviour {
	public UnityEngine.UI.Text[] MessageSlots = null;
	public UnityEngine.UI.Text LevelText = null;
	public UnityEngine.UI.Text BallsText = null;
	public UnityEngine.UI.Text ScoreText = null;
	
	public GameObject GameStatePanel = null;
	public UnityEngine.UI.Text GameStateText = null;
	public UnityEngine.UI.Text GameStateSubtext = null;
}
