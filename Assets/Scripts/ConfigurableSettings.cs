using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ConfigurableSettings : MonoBehaviour {
	public string MessageLevelPattern = "Level//{0}";
	public string MessageScorePattern = "Ema//{0} of {1}";
	public string MessageBallPattern = "Balls//{0} of {1}";
	
	public string MessagePausedText = "PAUSED";
	public string MessagePausedSubtext = "Press submit to continue...";
	
	public string MessageGameOverText = "GAME OVER!";
	public string MessageGameOverSubtext = "Press submit to restart.";
	
	public string MessageGameWonText = "GAME WON! CONGRATS!";
	public string MessageGameWonSubtext = "Press submit to restart.";
	
	public float MessageVisibleTime = 2.0f;

	public string UserPrefKeySoundEffectsMuted = "PaddleMon.User.SoundEffectsMuted";
	public string UserPrefKeyBackgroundMusicMuted = "PaddleMon.User.MusicMuted";

	public string MessageToggleMusicPattern = "Music {0}";
	public string MessageToggleSoundPattern = "Sound {0}";
	
	public float BallInitialVelocity = 600f;
		
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
}
