using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// View controller is responsible
/// for drawing the game state.
/// </summary>
public class ViewController : MonoBehaviour
{	
	/// <summary>
	/// The context.
	/// </summary>
	private ViewControllerContext context = null;
	
	/// <summary>
	/// Gets the messages.
	/// </summary>
	/// <value>The messages.</value>
	public List<string> Messages { get; private set; }
	
	/// <summary>
	/// Gets a value indicating whether this <see cref="ViewController"/> options panel showing.
	/// </summary>
	/// <value><c>true</c> if options panel showing; otherwise, <c>false</c>.</value>
	public bool OptionsPanelShowing { get; private set; }
	
	/// <summary>
	/// Gets a value indicating whether this <see cref="ViewController"/> splash panel showing.
	/// </summary>
	/// <value><c>true</c> if splash panel showing; otherwise, <c>false</c>.</value>
	public bool SplashPanelShowing { get; private set; }
	
	private Coroutine layoutCoroutine = null;
	private bool splashNeverShown = true;
	
	/// <summary>
	/// Initializes a new instance of the <see cref="ViewController"/> class.
	/// </summary>
	/// <param name="viewControllerContext">View controller context.</param>
	public void Initialise (ViewControllerContext viewControllerContext)
	{
		Messages = new List<string> ();
		context = viewControllerContext;
		context.UIComponents.GameStatePanel.SetActive (false);
	}

	/// <summary>
	/// Updates the view for new level.
	/// </summary>
	/// <param name="level">Level.</param>
	public void UpdateViewForNewLevel (GameLevel level, GameState state)
	{
		ClearRemainingEma ();
		LayoutEmaGrid (level.Layout, state);
		context.UIComponents.LevelText.text = string.Format (context.ConfigurableSettings.MessageLevelPattern, level.LevelDesignation);
		context.UIComponents.ScoreText.text = string.Format (context.ConfigurableSettings.MessageScorePattern, 0, level.EmaCount);
		context.UIComponents.BallsText.text = string.Format (context.ConfigurableSettings.MessageBallPattern, level.BallCount, level.BallCount);
		UpdateAtmosphere (state);
	}
	
	/// <summary>
	/// Updates the view from saved game.
	/// </summary>
	/// <param name="state">State.</param>
	public void UpdateViewFromSavedGame (GameState state)
	{
		if (layoutCoroutine != null) {
			StopCoroutine (layoutCoroutine);
		}
		ClearRemainingEma ();
		layoutCoroutine = StartCoroutine (LayoutEmaGridFromSavedGame (state));
		context.UIComponents.LevelText.text = string.Format (context.ConfigurableSettings.MessageLevelPattern, state.Level.LevelDesignation);
		context.UIComponents.ScoreText.text = string.Format (context.ConfigurableSettings.MessageScorePattern, 0, state.Level.EmaCount);
		context.UIComponents.BallsText.text = string.Format (context.ConfigurableSettings.MessageBallPattern, state.Level.BallCount, state.Level.BallCount);
		UpdateAtmosphere (state);
	}
	
	/// <summary>
	/// Updates the atmosphere.
	/// </summary>
	/// <param name="state">State.</param>
	private void UpdateAtmosphere (GameState state)
	{
		context.AudioController.ChangeBackgroundSoundAtmosphere (state.Level.Atmosphere);
		Skybox skybox = Camera.main.GetComponent<Skybox> ();
		switch (state.Level.Atmosphere) {
		case Atmosphere.Day:
			if(skybox != null) skybox.material = context.Materials.DaySkybox;
				context.Lights.DayLights.ForEachAction (x => x.SetActive (true));
				context.Lights.NightLights.ForEachAction (x => x.SetActive (false));
				DynamicGI.UpdateEnvironment ();
			break;
		case Atmosphere.Night:
			if(skybox != null) skybox.material = context.Materials.NightSkybox;
				context.Lights.NightLights.ForEachAction (x => x.SetActive (true));
				context.Lights.DayLights.ForEachAction (x => x.SetActive (false));
				DynamicGI.UpdateEnvironment ();
			break;
		}
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
	/// Updates the view for messages.
	/// </summary>
	public void UpdateViewForMessages ()
	{
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
		if (state.PlayState != PlayState.Playing) {
			if (state.PlayState == PlayState.NotStarted) {
				// don't display the splash on web gl - the icon doesn't render well
				if (context.PlatformStrategyManager.ActiveStrategy.ShowSplash && splashNeverShown) {
					splashNeverShown = false;
					ShowSplashPanel (state);
				}
			}
			string stateText = string.Empty;
			string stateSubtext = string.Empty;
			GetGameStateText (state, out stateText, out stateSubtext);
			context.UIComponents.GameStateText.text = stateText;
			context.UIComponents.GameStateSubtext.text = stateSubtext;
			// don't show the state panel if the splash or the options menu are showing
			if (!SplashPanelShowing && !OptionsPanelShowing) {
				context.UIComponents.GameStatePanel.SetActive (true);
			}
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
	/// <param name="state">State.</param>
	private void LayoutEmaGrid (int rows, int columns, GameState state)
	{
		if (layoutCoroutine != null) {
			StopCoroutine (layoutCoroutine);
		}
		layoutCoroutine = StartCoroutine (PerformLayout (rows, columns, null, state));
	}
	
	/// <summary>
	/// Lays out the ema grid.
	/// </summary>
	/// <param name="layout">Layout.</param>
	/// <param name="state">State.</param>
	private void LayoutEmaGrid (int[,] layout, GameState state)
	{
		int rows = layout.GetLength (0);
		int columns = layout.GetLength (1);
		if (layoutCoroutine != null) {
			StopCoroutine (layoutCoroutine);
		}
		layoutCoroutine = StartCoroutine (PerformLayout (rows, columns, layout, state));
	}
	
	/// <summary>
	/// Layouts the ema grid from saved game.
	/// </summary>
	/// <param name="savedGame">Saved game.</param>
	/// <param name="state">State.</param>
	private IEnumerator LayoutEmaGridFromSavedGame (GameState state)
	{
		EmaModel[,] emaGrid = state.EmaGrid;
		for (int i=0; i < emaGrid.GetLength(0); i++) {
			for (int j=0; j < emaGrid.GetLength(1); j++) {
				if (emaGrid [i, j] != null) {
					GameObject pooledEma = GetPooledEmaByType (emaGrid [i, j].Type, emaGrid [i, j].Position.ToVector3 (), emaGrid [i, j].Rotation.ToQuaternion ());
					string inscription = emaGrid [i, j].Inscription;
					pooledEma.transform.FindChild ("Inscription").GetComponent<TextMesh> ().text = inscription;
					pooledEma.SetActive (true);
					emaGrid [i, j].GameObject = pooledEma;
					yield return new WaitForSeconds (0.01f);
				}
			}
		}
	}
	
	/// <summary>
	/// Performs the layout.
	/// </summary>
	/// <param name="rows">Rows.</param>
	/// <param name="columns">Columns.</param>
	/// <param name="layout">Layout.</param>
	/// <param name="state">State.</param>
	private IEnumerator PerformLayout (int rows, int columns, int[,] layout, GameState state)
	{
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
				
				if (layout == null || layout [row, column] == Constants.EMA_LAYOUT_WOOD_EMA || layout [row, column] == Constants.EMA_LAYOUT_GOLD_EMA) {
					GameObject pooledEma = GetPooledEmaByType (layout [row, column], new Vector3 (xPosition, yPosition, 0.0f), Quaternion.identity);
					string inscription = inscriptionGenerator.GenerateRandomInscription ();
					pooledEma.transform.FindChild ("Inscription").GetComponent<TextMesh> ().text = inscription;
					pooledEma.SetActive (true);
					state.EmaGrid [row, column] = new EmaModel (inscription, ConvertEmaTypeFromInteger (layout [row, column]), pooledEma);
					yield return new WaitForSeconds (0.01f);
				}
			}
		}
	}
	
	/// <summary>
	/// Gets a pooled ema object based on type.
	/// </summary>
	/// <returns>The pooled ema by type.</returns>
	/// <param name="type">Type.</param>
	/// <param name="position">Position.</param>
	/// <param name="rotation">Rotation.</param>
	private GameObject GetPooledEmaByType (EmaType type, Vector3 position, Quaternion rotation)
	{
		if (type == EmaType.Wood) {
			GameObjectPool emaGameObjectPool = context.GameController.GameObjectPoolManager.GetPool (context.GameController.Prefabs.EmaPrefab);
			return(emaGameObjectPool.Take (position, rotation));
		} else if (type == EmaType.Gold) {
			GameObjectPool goldEmaGameObjectPool = context.GameController.GameObjectPoolManager.GetPool (context.GameController.Prefabs.GoldEmaPrefab);
			return(goldEmaGameObjectPool.Take (position, rotation));
		} else {
			throw new UnityException (string.Format ("Unsupported ema type '{0}' passed as argument.", type));
		}
	}
	
	/// <summary>
	/// Gets a pooled ema object based on type.
	/// </summary>
	/// <returns>The pooled ema by type.</returns>
	/// <param name="type">Type.</param>
	/// <param name="position">Position.</param>
	/// <param name="rotation">Rotation.</param>
	private GameObject GetPooledEmaByType (int type, Vector3 position, Quaternion rotation)
	{
		return (GetPooledEmaByType (ConvertEmaTypeFromInteger (type), position, rotation));
	}
	
	/// <summary>
	/// Converts the ema type from integer.
	/// </summary>
	/// <returns>The ema type from integer.</returns>
	/// <param name="type">Type.</param>
	private EmaType ConvertEmaTypeFromInteger (int type)
	{
		if (type == Constants.EMA_LAYOUT_WOOD_EMA)
			return (EmaType.Wood);
		else if (type == Constants.EMA_LAYOUT_GOLD_EMA)
			return (EmaType.Gold);
		else {
			throw new UnityException (string.Format ("Unsupported ema type '{0}' passed as argument.", type));
		}
	}
	
	/// <summary>
	/// Clears the remaining ema.
	/// </summary>
	private void ClearRemainingEma ()
	{
		GameObject[] ema = GameObject.FindGameObjectsWithTag (Constants.GAME_OBJECT_TAG_EMA);
		//Logger.LogFormat ("Removing {0} remaining ema from previous game state.", ema.Length);
		ema.ForEachAction (x => x.SetActive (false));
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
		case PlayState.NotStarted:
			stateText = context.ConfigurableSettings.MessageNotStartedText;
			stateSubText = context.ConfigurableSettings.MessageNotStartedSubtext;
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
	public void ShowSplashPanel (GameState state)
	{
		if (state.PlayState == PlayState.NotStarted) {
			context.UIComponents.SplashPanelPlayButtonText.text = "Play";
		} else {
			context.UIComponents.SplashPanelPlayButtonText.text = "Resume";
		}
		SplashPanelShowing = true;
		context.UIComponents.SplashPanel.SetActive (true);
		context.UIComponents.PauseButton.interactable = false;
		context.UIComponents.OptionsButton.interactable = false;
	}
	
	/// <summary>
	/// Hides the splash panel.
	/// </summary>
	public void HideSplashPanel ()
	{
		context.UIComponents.PauseButton.interactable = true;
		context.UIComponents.OptionsButton.interactable = true;
		context.UIComponents.SplashPanel.SetActive (false);
		SplashPanelShowing = false;
	}

}
