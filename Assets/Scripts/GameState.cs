using UnityEngine;
using System.Collections;

public class GameState
{
	public PlayState PlayState { get; set;}
	
	public int LevelIndex { get; set; }
	
	public GameLevel Level { get; set; }

	public int BallsRemaining { get; set; }
	
	public int EmaCollected { get; set; }
	
	
	public GameState()
	{
		PlayState = PlayState.NotStarted;
	}
	
	public void Reset(GameLevel level)
	{
		BallsRemaining = level.BallCount;
		EmaCollected = 0;
		Level = null;
	}
	
}

public enum PlayState
{
	Playing,
	Paused,
	GameOver,
	GameWon,
	NotStarted
}