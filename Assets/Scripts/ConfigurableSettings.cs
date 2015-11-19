using UnityEngine;
using UnityEngine.UI;
using System.Collections;

/// <summary>
/// Configurable settings.
/// </summary>
public class ConfigurableSettings : MonoBehaviour {

	public string MessageLevelPattern = "Level//{0}";
	public string MessageScorePattern = "Ema//{0}:{1}";
	public string MessageBallPattern = "Orbs//{0}:{1}";
	
	public string MessagePausedText = "PAUSED";
	public string MessagePausedSubtext = "Press enter to continue...";
	
	public string MessageNotStartedText = "READY?";
	public string MessageNotStartedSubtext = "Press enter to play...";
	
	public string MessageGameOverText = "GAME OVER!";
	public string MessageGameOverSubtext = "Press enter to restart.";
	
	public string MessageGameWonText = "GAME WON! CONGRATS!";
	public string MessageGameWonSubtext = "Press enter to restart.";
	
	public string MessageGameRestarted = "Restarted";
	
	public string MessageSaveGamePattern = "Saved {0}";
	public string MessageLoadGamePattern = "Loaded from {0}";
	public string MessageSaveGameFailedMessagePattern = "Save failed [{0}]";
	public string MessageLoadGameFailedMessagePattern = "Loaded failed [{0}]";
	public string MessageLoadGameFailedNoFileMessagePattern = "Could not load game - no saved game exists";
	public string SavegameFilename = "Saved.Game.data";
	
	public float MessageVisibleTime = 2.0f;

	public string UserPrefKeySoundEffectsMuted = "ShintoMon.User.SoundEffectsMuted";
	public string UserPrefKeyBackgroundSoundMuted = "ShintoMon.User.BackgroundSoundMuted";

	public string MessageToggleBackgroundSoundPattern = "Background sounds {0}";
	public string MessageToggleSoundPattern = "Sound effects {0}";
		
	public int GameObjectPoolDefaultSize = 10;
	public int GameObjectPoolEmaParticlesSize = 10;
	public int GameObjectPoolEmaSize = 75;
	public int GameObjectPoolGoldEmaSize = 5;
	public int GameObjectPoolAudioSourceSize = 10;
	public int GameObjectPoolBallParticlesSize = 2;
	
	public string[] InscriptionKanji = null;
	
	public Vector2 EmaGridMaxPosition = new Vector2 (7.0f, 17.0f);
	public Vector2 EmaGridMinPosition = new Vector2 (-7.0f, 5.5f);
	public float EmaGridXAxisStep = 1f;
	public float EmaGridYAxisStep = 1.5f;
	
	public float PaddleClampXMin = -9.0f;
	public float PaddleClampXMax = 9.0f;

	public float BallAngularVelocity = 10000.0f;
	
	public float TouchStartedMarginInSeconds = 0.1f;
	public float TouchStaionaryTimeMultipler = 2.0f;
}
