using UnityEngine;
using System;
using System.Collections;

/// <summary>
/// Represents the game state.
/// </summary>
[Serializable]
public class GameState
{
	/// <summary>
	/// Gets or sets the state of the play.
	/// </summary>
	/// <value>The state of the play.</value>
	public PlayState PlayState { get; set; }
	
	/// <summary>
	/// Gets or sets the play state before pause.
	/// </summary>
	/// <value>The play state before pause.</value>
	public PlayState PlayStateBeforePause { get; set; }
	
	/// <summary>
	/// Gets or sets the index of the level.
	/// </summary>
	/// <value>The index of the level.</value>
	public int LevelIndex { get; set; }
	
	/// <summary>
	/// Gets or sets the level.
	/// </summary>
	/// <value>The level.</value>
	public GameLevel Level { get; set; }

	/// <summary>
	/// Gets or sets the balls remaining.
	/// </summary>
	/// <value>The balls remaining.</value>
	public int BallsRemaining { get; set; }
	
	/// <summary>
	/// Gets or sets the ema collected.
	/// </summary>
	/// <value>The ema collected.</value>
	public int EmaCollected { get; private set; }
	
	/// <summary>
	/// Gets the ema grid.
	/// </summary>
	/// <value>The ema grid.</value>
	public EmaModel[,] EmaGrid { get; private set; }

	/// <summary>
	/// Initializes a new instance of the <see cref="GameState"/> class.
	/// </summary>
	public GameState ()
	{
		EmaGrid = new EmaModel[Constants.EMA_MAX_ROWS, Constants.EMA_MAX_COLUMNS];
		PlayStateBeforePause = PlayState.NotStarted;
		PlayState = PlayState.NotStarted;
		LevelIndex = -1;
	}
	
	/// <summary>
	/// Setup the level.
	/// </summary>
	/// <param name="level">Level.</param>
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
		int x, y = 0;
		if (FindEmaInState (emaGameObject, out x, out y)) {
			EmaGrid [x, y] = null;
			EmaCollected++;
		} else {
			Logger.LogWarning ("Could not find the collected ema in the EmaGrid of the GameState object.");
		}
	}
	
	/// <summary>
	/// Gets the state of the ema from.
	/// </summary>
	/// <returns>The ema from state.</returns>
	/// <param name="emaGameObject">Ema game object.</param>
	public EmaModel GetEmaFromState (GameObject emaGameObject)
	{
		int x, y = 0;
		if (FindEmaInState (emaGameObject, out x, out y)) {
			return(EmaGrid [x, y]);
		} else {
			Logger.LogWarning ("Could not find the ema in the EmaGrid of the GameState object.");
			return(null);
		}
	}
	
	/// <summary>
	/// Finds ema model location in the state.
	/// </summary>
	/// <returns>The ema in state.</returns>
	/// <param name="emaGameObject">Ema game object.</param>
	private bool FindEmaInState (GameObject emaGameObject, out int x, out int y)
	{
		x = 0;
		y = 0;
		for (int i=0; i < EmaGrid.GetLength(0); i++) {
			for (int j=0; j < EmaGrid.GetLength(1); j++) {
				if (EmaGrid [i, j] != null && EmaGrid [i, j].GameObject == emaGameObject) {
					x = i;
					y = j;
					return(true);
				}
			}
		}
		return(false);		
	}
	
	/// <summary>
	/// Counts the state of the remaining ema in the game state.
	/// </summary>
	/// <returns>The remaining ema in state.</returns>
	public int CountRemainingEmaInState ()
	{
		int result = 0;
		for (int i=0; i < EmaGrid.GetLength(0); i++) {
			for (int j=0; j < EmaGrid.GetLength(1); j++) {
				if (EmaGrid [i, j] != null)
					result++;
			}
		}
		return(result);
	}			
}

/// <summary>
/// Represents a saved game state.
/// </summary>
[Serializable]
public class SavedGameState
{
	/// <summary>
	/// Gets or sets the state.
	/// </summary>
	/// <value>The state.</value>
	public GameState State { get; set; }
	
	/// <summary>
	/// Gets or sets the saved on date.
	/// </summary>
	/// <value>The saved on.</value>
	public DateTime SavedOn { get; set; }
}

