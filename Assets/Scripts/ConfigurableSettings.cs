using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ConfigurableSettings : MonoBehaviour {
	public string MessageLevelPattern = "Level//{0}";
	public string MessageScorePattern = "Ema//{0}:{1}";
	public string MessageBallPattern = "Orbs//{0}:{1}";
	
	public string MessagePausedText = "PAUSED";
	public string MessagePausedSubtext = "Press submit to continue...";
	
	public string MessageGameOverText = "GAME OVER!";
	public string MessageGameOverSubtext = "Press submit to restart.";
	
	public string MessageGameWonText = "GAME WON! CONGRATS!";
	public string MessageGameWonSubtext = "Press submit to restart.";
	
	public string MessageGameRestarted = "Restared";
	
	public float MessageVisibleTime = 2.0f;

	public string UserPrefKeySoundEffectsMuted = "ShintoMon.User.SoundEffectsMuted";
	public string UserPrefKeyBackgroundSoundMuted = "ShintoMon.User.BackgroundSoundMuted";

	public string MessageToggleBackgroundSoundPattern = "Background sounds {0}";
	public string MessageToggleSoundPattern = "Sound effects {0}";
		
	public int GameObjectPoolDefaultSize = 10;
	public int GameObjectPoolEmaParticlesSize = 10;
	public int GameObjectPoolEmaSize = 75;
	public int GameObjectPoolAudioSourceSize = 10;
	public int GameObjectPoolBallSize = 2;
	
	public string[] InscriptionKanji = null;
	
	public Vector2 EmaGridMaxPosition = new Vector2 (7.0f, 17.0f);
	public Vector2 EmaGridMinPosition = new Vector2 (-7.0f, 5.5f);
	public float EmaGridXAxisStep = 1f;
	public float EmaGridYAxisStep = 1.5f;
	
	public float PaddleClampXMin = -9.0f;
	public float PaddleClampXMax = 9.0f;

	
}
