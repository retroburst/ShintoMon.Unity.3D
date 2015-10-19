using UnityEngine;
using System.Collections;

public class Constants {
	public const string GAME_OBJECT_TAG_EMA = "Ema";
	public const string GAME_OBJECT_TAG_WATER_SURFACE = "WaterSurface";
	public const string GAME_OBJECT_TAG_GAME_CONTROLLER = "GameController";
	public const int EMA_MAX_COLUMNS = 15;
	public const int EMA_MAX_ROWS = 8;	
	
	public const int EMA_LAYOUT_NOTHING = 0;
	public const int EMA_LAYOUT_WOOD_EMA = 1;
	public const int EMA_LAYOUT_GOLD_EMA = 2;
	
	public const string INPUT_FIRE_1 = "Fire1";
	public const string INPUT_PAUSE = "Pause";
	public const string INPUT_RESTART = "Restart";
	public const string INPUT_LOAD = "Load";
	public const string INPUT_SAVE = "Save";
	public const string INPUT_TOGGLE_BACKGROUND_SOUNDS = "ToggleBackgroundSounds";
	public const string INPUT_TOGGLE_SOUND_EFFECTS = "ToggleSoundEffects";
	public const string INPUT_SUBMIT = "Submit";
}

public enum EmaType
{
	Wood,
	Gold
}

public enum PlayState
{
	Playing,
	Paused,
	GameOver,
	GameWon,
	NotStarted
}

public enum Atmosphere
{
	Day,
	Night
}