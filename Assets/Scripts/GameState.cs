using UnityEngine;
using System;
using System.Collections;

public class GameState
{
	public PlayState PlayState { get; set; }
	
	public PlayState PlayStateBeforePause { get; set; }
	
	public int LevelIndex { get; set; }
	
	public GameLevel Level { get; set; }

	public int BallsRemaining { get; set; }
	
	public int EmaCollected { get; set; }
	
	public EmaModel[,] EmaGrid { get; private set; }
	
	public GameState ()
	{
		EmaGrid = new EmaModel[Constants.EMA_MAX_ROWS, Constants.EMA_MAX_COLUMNS];
		PlayStateBeforePause = PlayState.NotStarted;
		PlayState = PlayState.NotStarted;
		LevelIndex = -1;
	}
	
	public void SetupLevel (GameLevel level)
	{
		Array.Clear(EmaGrid, 0, Constants.EMA_MAX_ROWS * Constants.EMA_MAX_COLUMNS);
		// TODO populate the EmaGrid from the level layout
		// when the view controller lays out the ema grid it
		// can add the gameobject
		// then need to keep track of what is 
		// collected - this is for save game
		BallsRemaining = level.BallCount;
		EmaCollected = 0;
		Level = level;
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