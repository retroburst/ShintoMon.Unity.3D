using UnityEngine;
using System.Collections;

public class Constants {
	public const string GAME_OBJECT_TAG_EMA = "Ema";
	public const string GAME_OBJECT_TAG_WATER_BOTTOM = "WaterBottom";
	public const string GAME_OBJECT_TAG_WATER_SURFACE = "WaterSurface";
	public const string GAME_OBJECT_TAG_GAME_CONTROLLER = "GameController";
	public const int EMA_MAX_COLUMNS = 15;
	public const int EMA_MAX_ROWS = 8;	
	
	public const int EMA_TYPE_NONE = 0;
	public const int EMA_TYPE_WOOD = 1;
	public const int EMA_TYPE_GOLD = 2;
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