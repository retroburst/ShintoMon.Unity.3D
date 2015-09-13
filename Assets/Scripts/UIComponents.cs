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
	
	public GameObject OptionsPanel = null;
	public GameObject SplashPanel = null;
	
	public UnityEngine.UI.Button OptionsButton = null;
	public UnityEngine.UI.Button PauseButton = null;
	public UnityEngine.UI.Button QuitButton = null;
	
}
