using UnityEngine;
using System;
using System.Collections;

[Serializable]
public class GameState
{
	public PlayState PlayState { get; set; }
	
	public PlayState PlayStateBeforePause { get; set; }
	
	public int LevelIndex { get; set; }
	
	public GameLevel Level { get; set; }

	public int BallsRemaining { get; set; }
	
	public int EmaCollected { get; set; }
	
	public EmaModel[,] EmaGrid { get; private set; }
	
	//TODO: save the ball size if it can change based on special ema's
	
	public GameState ()
	{
		EmaGrid = new EmaModel[Constants.EMA_MAX_ROWS, Constants.EMA_MAX_COLUMNS];
		PlayStateBeforePause = PlayState.NotStarted;
		PlayState = PlayState.NotStarted;
		LevelIndex = -1;
	}
	
	public void SetupLevel (GameLevel level)
	{
		Array.Clear (EmaGrid, 0, Constants.EMA_MAX_ROWS * Constants.EMA_MAX_COLUMNS);
		BallsRemaining = level.BallCount;
		EmaCollected = 0;
		Level = level;
	}
	
	/// <summary>
	/// Removes the ema from the game state.
	/// </summary>
	/// <param name="emaGameObject">Ema game object.</param>
	public void RemoveEmaFromState (GameObject emaGameObject)
	{
		for (int i=0; i < EmaGrid.GetLength(0); i++) {
			for (int j=0; j < EmaGrid.GetLength(1); j++) {
				if (EmaGrid [i, j] != null && EmaGrid [i, j].GameObject == emaGameObject) {
					EmaGrid [i, j] = null;
					return;
				}
			}
		}
		Logger.LogWarning ("Could not find the collected ema in the EmaGrid of the GameState object.");
	}							
}


[Serializable]
public class SavedGameState
{
	public GameState State { get; set; }
	
	public DateTime SavedOn { get; set; }
}

