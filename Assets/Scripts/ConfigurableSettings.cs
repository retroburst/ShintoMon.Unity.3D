using UnityEngine;
using System.Collections;

public class ConfigurableSettings : MonoBehaviour {

	public string GameMessageLevelPattern = "Level//{0:N0}";
	public string GameMessageScorePattern = "Score//{0}";
	public string GameMessageScoreFormatString = "00000000";
	
	public string GameMessagePausedText = "PAUSED";
	public string GameMessagePausedSubtext = "Press submit to continue...";
	
	public string GameMessageGameOverText = "GAME OVER!";
	public string GameMessageGameOverSubtext = "Press submit to restart.";
	
	public string GameMessageGameWonText = "GAME WON! CONGRATS!";
	public string GameMessageGameWonSubtext = "Press submit to restart.";
	
	public float GameMessageVisibleTime = 2.0f;

	public string GameUserPrefKeySoundEffectsMuted = "JewelMine.User.SoundEffectsMuted";
	public string GameUserPrefKeyBackgroundMusicMuted = "JewelMine.User.MusicMuted";

	public string GameMessageToggleMusicPattern = "Music {0}";
	public string GameMessageToggleSoundPattern = "Sound {0}";
	
	
	
}
