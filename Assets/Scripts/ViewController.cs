using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ViewController
{	
	private ViewControllerContext context = null;

	public List<string> Messages { get; private set; }

	public bool OptionsPanelShowing { get; private set; }
	
	public bool SplashPanelShowing { get; private set; }
	
	/// <summary>
	/// Initializes a new instance of the <see cref="ViewController"/> class.
	/// </summary>
	/// <param name="viewControllerContext">View controller context.</param>
	public ViewController (ViewControllerContext viewControllerContext)
	{
		Messages = new List<string> ();
		context = viewControllerContext;
	}

	/// <summary>
	/// Updates the view for new level.
	/// </summary>
	/// <param name="level">Level.</param>
	public void UpdateViewForNewLevel (GameLevel level)
	{
		LayoutEmaGrid (level.Layout);
		context.UIComponents.LevelText.text = string.Format (context.ConfigurableSettings.MessageLevelPattern, level.LevelDesignation);
		context.UIComponents.ScoreText.text = string.Format (context.ConfigurableSettings.MessageScorePattern, 0, level.EmaCount);
		context.UIComponents.BallsText.text = string.Format (context.ConfigurableSettings.MessageBallPattern, level.BallCount, level.BallCount);
	}
	
	/// <summary>
	/// Updates the view.
	/// </summary>
	/// <param name="state">State.</param>
	public void UpdateView (GameState state)
	{
		ProcessProgress (state);
		ProcessGameState (state);
		ProcessMessages ();
	}
	
	/// <summary>
	/// Processes the progress.
	/// </summary>
	/// <param name="state">State.</param>
	private void ProcessProgress (GameState state)
	{
		context.UIComponents.ScoreText.text = string.Format (context.ConfigurableSettings.MessageScorePattern, state.EmaCollected, state.Level.EmaCount);
		context.UIComponents.BallsText.text = string.Format (context.ConfigurableSettings.MessageBallPattern, state.BallsRemaining, state.Level.BallCount);
	}

	/// <summary>
	/// Processes the state of the game.
	/// </summary>
	/// <param name="state">State.</param>
	private void ProcessGameState (GameState state)
	{
		if (state.PlayState == PlayState.Paused || state.PlayState == PlayState.GameOver || state.PlayState == PlayState.GameWon) {
			string stateText = string.Empty;
			string stateSubtext = string.Empty;
			GetGameStateText (state, out stateText, out stateSubtext);
			context.UIComponents.GameStateText.text = stateText;
			context.UIComponents.GameStateSubtext.text = stateSubtext;
			context.UIComponents.GameStatePanel.SetActive (true);
		} else {
			if (context.UIComponents.GameStatePanel.activeInHierarchy)
				context.UIComponents.GameStatePanel.SetActive (false);
		}
	}
	
	/// <summary>
	/// Processes the messages.
	/// </summary>
	private void ProcessMessages ()
	{
		context.GameMessageController.DisplayMessages (Messages);
		Messages.Clear ();
	}

	/// <summary>
	/// Layouts the ema grid.
	/// </summary>
	/// <param name="rows">Rows.</param>
	/// <param name="columns">Columns.</param>
	private void LayoutEmaGrid (int rows, int columns)
	{
		PerformLayout (rows, columns, null);
	}
	
	/// <summary>
	/// Lays out the ema grid.
	/// </summary>
	/// <param name="layout">Layout.</param>
	private void LayoutEmaGrid (int[,] layout)
	{
		int rows = layout.GetLength (0);
		int columns = layout.GetLength (1);
		PerformLayout (rows, columns, layout);
	}
	
	/// <summary>
	/// Lays out the ema grid.
	/// </summary>
	/// <param name="layout">Layout.</param>
	private void PerformLayout (int rows, int columns, int[,] layout)
	{
		GameObjectPool emaGameObjectPool = context.GameController.GameObjectPoolManager.GetPool (context.GameController.Prefabs.EmaPrefab);
		Vector2 emaGridMaxPosition = context.GameController.ConfigurableSettings.EmaGridMaxPosition;
		Vector2 emaGridMinPosition = context.GameController.ConfigurableSettings.EmaGridMinPosition;
		float emaGridXAxisStep = context.GameController.ConfigurableSettings.EmaGridXAxisStep;
		float emaGridYAxisStep = context.GameController.ConfigurableSettings.EmaGridYAxisStep;
		InscriptionGenerator inscriptionGenerator = context.GameController.InscriptionGenerator;

		Vector2 startPosition = new Vector2 (emaGridMinPosition.x, emaGridMaxPosition.y);
		for (int row=0; row < rows; row++) {
			for (int column=0; column < columns; column++) {
				float xPosition = startPosition.x + (emaGridXAxisStep * column);
				float yPosition = startPosition.y - (emaGridYAxisStep * row);
				
				if (xPosition > emaGridMaxPosition.x || xPosition < emaGridMinPosition.x) {
					Debug.LogWarningFormat ("GameController->LayoutemaGrid Calculated x position out of bounds, x calculated was [{0}].", xPosition);
					continue;
				}
				if (yPosition > emaGridMaxPosition.y || yPosition < emaGridMinPosition.y) {
					Debug.LogWarningFormat ("GameController->LayoutemaGrid Calculated y position out of bounds, y calculated was [{0}].", yPosition);
					continue;
				}
				
				if (layout == null || layout [row, column] == 1) {
					GameObject pooledEma = (GameObject)emaGameObjectPool.Take (new Vector3 (xPosition, yPosition, 0.0f), Quaternion.identity);
					pooledEma.transform.FindChild ("Inscription").GetComponent<TextMesh> ().text = inscriptionGenerator.GenerateRandomInscription ();
					pooledEma.SetActive (true);
				}
			}
		}
	}
	
	/// <summary>
	/// Gets the game state text.
	/// </summary>
	/// <param name="stateText">The state text.</param>
	/// <param name="stateSubText">The state sub text.</param>
	private void GetGameStateText (GameState state, out string stateText, out string stateSubText)
	{
		stateText = string.Empty;
		stateSubText = string.Empty;
		switch (state.PlayState) {
		case PlayState.GameOver:
			stateText = context.ConfigurableSettings.MessageGameOverText;
			stateSubText = context.ConfigurableSettings.MessageGameOverSubtext;
			break;
		case PlayState.GameWon:
			stateText = context.ConfigurableSettings.MessageGameWonText;
			stateSubText = context.ConfigurableSettings.MessageGameWonSubtext;
			break;
		case PlayState.Paused:
			stateText = context.ConfigurableSettings.MessagePausedText;
			stateSubText = context.ConfigurableSettings.MessagePausedSubtext;
			break;
		}
	}
	
	/// <summary>
	/// Shows the options panel.
	/// </summary>
	public void ShowOptionsPanel ()
	{
		OptionsPanelShowing = true;
		context.UIComponents.OptionsPanel.SetActive (true);
		context.UIComponents.PauseButton.interactable = false;
		context.UIComponents.OptionsButton.interactable = false;
	}
	
	/// <summary>
	/// Hides the options panel.
	/// </summary>
	public void HideOptionsPanel ()
	{
		OptionsPanelShowing = false;
		context.UIComponents.PauseButton.interactable = true;
		context.UIComponents.OptionsButton.interactable = true;
		context.UIComponents.OptionsPanel.SetActive (false);
	}
	
	/// <summary>
	/// Shows the splash panel.
	/// </summary>
	public void ShowSplashPanel ()
	{
		SplashPanelShowing = true;
		context.UIComponents.SplashPanel.SetActive (true);
		if (!context.UIComponents.GameStatePanel.activeInHierarchy)
			context.UIComponents.GameStatePanel.SetActive (true);
	}
	
	/// <summary>
	/// Hides the splash panel.
	/// </summary>
	public void HideSplashPanel ()
	{
		SplashPanelShowing = false;
		context.UIComponents.SplashPanel.SetActive (false);
		if (context.UIComponents.GameStatePanel.activeInHierarchy)
			context.UIComponents.GameStatePanel.SetActive (false);
	}

}
