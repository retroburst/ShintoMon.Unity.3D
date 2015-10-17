using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

public class GameController : MonoBehaviour
{
	// Music ideas:
	// https://soundcloud.com/skiqi/skiqi-without-delay
	//
	// Attribution contributions
	// Taira Komori - Freesound.org - various
	// jakobthiesen - Freesound.org - lake water
	// Setuniman - Freesound.org - splash
	// ryancacophony - singing bowl
	// percussionfiend - bamboo chime
	// JohnLaVine333 - shakahachi (flute)
	// jalastram - Freesound.org - FX118
	// http://www.freepik.com/ - splash and icon designed by freepik

	//BUGS
	// Loading while in game won state from the options menu causes issues at the moment

	// designer supplied components
	/// <summary>
	/// The configurable settings.
	/// </summary>
	public ConfigurableSettings ConfigurableSettings = null;
	
	/// <summary>
	/// The prefabs.
	/// </summary>
	public Prefabs Prefabs = null;
	
	/// <summary>
	/// The components.
	/// </summary>
	public Components Components = null;
	
	/// <summary>
	/// The user interface components.
	/// </summary>
	public UIComponents UIComponents = null;
	
	/// <summary>
	/// Gets the audio controller.
	/// </summary>
	/// <value>The audio controller.</value>
	public AudioController AudioController { get; private set; }

	/// <summary>
	/// Gets the game message controller.
	/// </summary>
	/// <value>The game message controller.</value>
	public GameMessageController GameMessageController { get; private set; }
	
	/// <summary>
	/// Gets the game object pool manager.
	/// </summary>
	/// <value>The game object pool manager.</value>
	public GameObjectPoolManager GameObjectPoolManager { get; private set; }
	
	/// <summary>
	/// Gets the inscription generator.
	/// </summary>
	/// <value>The inscription generator.</value>
	public InscriptionGenerator InscriptionGenerator { get; private set; }

	/// <summary>
	/// Gets the state.
	/// </summary>
	/// <value>The state.</value>
	public GameState State { get; private set; }
	
	/// <summary>
	/// The levels.
	/// </summary>
	private GameLevel[] Levels = null;
	
	public event Action<GameLevel> GameLevelChanged;
	public event Action GameLevelWon;
	public event Action GameOver;
	public event Action GameWon;
	public event Action GameRestarted;
	public event Action GamePaused;
	public event Action GameUnpaused;
	
	private object ballLostLock = new object ();
	private object emaCollectedLock = new object ();
	private object gameRestartLock = new object ();
	private object gameLoadLock = new object ();
	private object gameSaveLock = new object ();
	private static GameController gameInstance = null;
	private float savedTimeScale = 0.0f;
	private PlatformStrategyManager platformStrategyManager = null;
	
	/// <summary>
	/// Handles the awake event.
	/// </summary>
	private void Awake ()
	{
		InitialiseRuntimeComponents ();
		platformStrategyManager = new PlatformStrategyManager(this);
		platformStrategyManager.Setup();
		// max rows = 8 at the moment
		// max columns = 15 at the moment
		Levels = GameLevel.GameLevels;
		State = new GameState ();
		Components.ViewController.Initialise (CreateViewControllerContext ());
		Components.SwipeInput.TapDetected += HandleTap;
	}
	
	/// <summary>
	/// Creates the view controller context.
	/// </summary>
	/// <returns>The view controller context.</returns>
	private ViewControllerContext CreateViewControllerContext ()
	{
		ViewControllerContext result = new ViewControllerContext ();
		result.Components = Components;
		result.ConfigurableSettings = ConfigurableSettings;
		result.Prefabs = Prefabs;
		result.UIComponents = UIComponents;
		result.GameMessageController = GameMessageController;
		result.GameController = this;
		result.PlatformStrategyManager = platformStrategyManager;
		return(result);
	}
	
	/// <summary>
	/// Start this instance.
	/// </summary>
	private void Start ()
	{
		// move to the first level
		MoveToNextLevel ();
	}
	
	/// <summary>
	/// Performs setup for new level.
	/// </summary>
	private void SetupForNewLevel ()
	{
		State.SetupLevel (Levels [State.LevelIndex]);
		Components.ViewController.UpdateViewForNewLevel (Levels [State.LevelIndex], State);
		if (GameLevelChanged != null)
			GameLevelChanged (State.Level);
	}
	
	/// <summary>
	/// Setups for saved game.
	/// </summary>
	/// <param name="savedGame">Saved game.</param>
	private void SetupFromSavedGame (SavedGameState savedGame)
	{
		PlayState playState = State.PlayState;
		State = savedGame.State;
		State.PlayState = playState;
		Components.ViewController.UpdateViewFromSavedGame (State);
		if (GameLevelChanged != null)
			GameLevelChanged (State.Level);
	}
	
	/// <summary>
	/// Moves to next level.
	/// </summary>
	private void MoveToNextLevel ()
	{
		if (State.LevelIndex + 1 <= Levels.GetUpperBound (0)) {
			State.LevelIndex++;
			SetupForNewLevel ();
			AudioController.PlaySingingBowlClip ();
		} else {
			PerformGameWon ();
		}
	}
	
	/// <summary>
	/// Game won.
	/// </summary>
	private void PerformGameWon ()
	{
		State.PlayState = PlayState.GameWon;
		if (GameWon != null)
			GameWon ();
		StartCoroutine (AnimateGameWon ());
		AudioController.PlayFluteClip ();
	}
	
	/// <summary>
	/// Animates the game won.
	/// </summary>
	/// <returns>The game won.</returns>
	private IEnumerator AnimateGameWon ()
	{
		Components.Fireworks.StartFireworks ();
		while (State.PlayState == PlayState.GameWon) {
			yield return new WaitForSeconds (1);
		}
		Components.Fireworks.StopFireworks ();
	}
	
	/// <summary>
	/// Game over.
	/// </summary>
	private void PerformGameOver ()
	{
		State.PlayState = PlayState.GameOver;
		if (GameOver != null)
			GameOver ();
	}
	
	/// <summary>
	/// Initialises the runtime components.
	/// </summary>
	private void InitialiseRuntimeComponents ()
	{
		//TODO: input the saved user settings for mute etc
		AudioController = new AudioController (Components.BackgroundSound, Components.SoundEffects, false, false, ConfigurableSettings);
		GameMessageController = new GameMessageController (UIComponents.MessageSlots, ConfigurableSettings.MessageVisibleTime);
		InscriptionGenerator = new InscriptionGenerator (ConfigurableSettings.InscriptionKanji);
		InitialiseGameObjectPools ();
	}
	
	/// <summary>
	/// Initialises the game object pools.
	/// </summary>
	private void InitialiseGameObjectPools ()
	{
		GameObjectPoolManager = new GameObjectPoolManager (ConfigurableSettings.GameObjectPoolDefaultSize);
		GameObjectPoolManager.AddPool (Prefabs.EmaParticlesPrefab, ConfigurableSettings.GameObjectPoolEmaParticlesSize);
		GameObjectPoolManager.AddPool (Prefabs.EmaPrefab, ConfigurableSettings.GameObjectPoolEmaSize);
		GameObjectPoolManager.AddPool (Prefabs.GoldEmaPrefab, ConfigurableSettings.GameObjectPoolGoldEmaSize);
		GameObjectPoolManager.AddPool (Prefabs.AudioSourcePrefab, ConfigurableSettings.GameObjectPoolAudioSourceSize);
		GameObjectPoolManager.AddPool (Prefabs.BallParticlesPrefab, ConfigurableSettings.GameObjectPoolBallParticlesSize);
	}
	
	/// <summary>
	/// Performs the frame update.
	/// </summary>
	private void Update ()
	{		
		if (State.PlayState == PlayState.Paused 
			&& (!Components.ViewController.SplashPanelShowing && !Components.ViewController.OptionsPanelShowing)
			&& Input.GetButtonUp ("Submit")) {
			UnpauseGame ();
		} else if ((State.PlayState == PlayState.GameWon || State.PlayState == PlayState.GameOver)
			&& (!Components.ViewController.SplashPanelShowing && !Components.ViewController.OptionsPanelShowing)
			&& Input.GetButtonUp ("Submit")) {
			RestartGame ();
		} else if (State.PlayState == PlayState.NotStarted && Input.GetButtonUp("Submit")) {
			State.PlayState = PlayState.Playing;
		}
		// check user input
		if(Input.GetKeyUp(KeyCode.Escape))
			if(!Components.ViewController.SplashPanelShowing && platformStrategyManager.ActiveStrategy.ShowSplash) ShowSplashPanel();
		if (Input.GetButtonUp (Constants.INPUT_PAUSE))
			PauseGame ();
		if (Input.GetButtonUp (Constants.INPUT_RESTART))
			RestartGame ();
		if (Input.GetButtonUp (Constants.INPUT_LOAD))
			TryLoadGame ();
		if (Input.GetButtonUp (Constants.INPUT_SAVE))
			TrySaveGame ();
		if (Input.GetButtonUp (Constants.INPUT_TOGGLE_BACKGROUND_SOUNDS))
			ToggleBackgroundSound ();
		if (Input.GetButtonUp (Constants.INPUT_TOGGLE_SOUND_EFFECTS))
			ToggleSoundEffects ();
		// force a game win for debugging
		if (Input.GetKey (KeyCode.LeftControl) && Input.GetKey (KeyCode.LeftShift) && Input.GetKeyUp (KeyCode.W))
			PerformGameWon ();
		// force move to next level for debugging
		if (Input.GetKey (KeyCode.LeftControl) && Input.GetKey (KeyCode.LeftShift) && Input.GetKeyUp (KeyCode.E))
			MoveToNextLevel ();
		
		// update the view
		Components.ViewController.UpdateView (State);
	}
	
	/// <summary>
	/// Handles the tap.
	/// </summary>
	private void HandleTap ()
	{
		if (State.PlayState == PlayState.Paused 
			&& (!Components.ViewController.SplashPanelShowing && !Components.ViewController.OptionsPanelShowing)) {
			UnpauseGame ();
		} else if ((State.PlayState == PlayState.GameWon || State.PlayState == PlayState.GameOver)
			&& (!Components.ViewController.SplashPanelShowing && !Components.ViewController.OptionsPanelShowing)) {
			RestartGame ();
		}
	}
	
	/// <summary>
	/// Adds the game message.
	/// </summary>
	/// <param name="message">Message.</param>
	public void AddGameMessage (string message)
	{
		if (!string.IsNullOrEmpty (message))
			Components.ViewController.Messages.Add (message);
	}
	
	/// <summary>
	/// Ball in play.
	/// </summary>
	public void BallInPlay ()
	{
		State.PlayState = PlayState.Playing;
	}
	
	/// <summary>
	/// Ball lost.
	/// </summary>
	public void BallLost ()
	{
		lock (ballLostLock) {
			State.BallsRemaining--;
			if (!Debug.isDebugBuild && State.BallsRemaining <= 0) {
				PerformGameOver ();
			}
		}
	}
	
	/// <summary>
	/// Ema collected.
	/// </summary>
	/// <param name="ema">Ema.</param>
	public void EmaCollected (GameObject ema)
	{
		lock (emaCollectedLock) {
			// TODO: check if gold ema
			// get a special action at random
			// apply it
			State.RemoveEmaFromState (ema);
			if (State.CountRemainingEmaInState () == 0) {
				StartCoroutine (PerformLevelWon ());
			}
		}
	}
	
	private IEnumerator PerformLevelWon ()
	{
		//savedTimeScale = Time.timeScale;
		//Time.timeScale = 0.25f;
		if (GameLevelWon != null)
			GameLevelWon ();
		yield return new WaitForSeconds (1);
		//Time.timeScale = savedTimeScale;
		MoveToNextLevel ();
	}
	
	/// <summary>
	/// Finds the game controller.
	/// </summary>
	/// <returns>The game controller.</returns>
	public static GameController FindGameController ()
	{
		if (gameInstance == null) {
			gameInstance = GameObject.FindGameObjectWithTag (Constants.GAME_OBJECT_TAG_GAME_CONTROLLER).GetComponent<GameController> ();
		}
		return(gameInstance);
	}
	
	/// <summary>
	/// Pauses the game.
	/// </summary>
	public void PauseGame ()
	{
		if (State.PlayState != PlayState.Paused) {
			State.PlayStateBeforePause = State.PlayState;
			State.PlayState = PlayState.Paused;
			savedTimeScale = Time.timeScale;
			Time.timeScale = 0;
			if (GamePaused != null)
				GamePaused ();
		}
	}
	
	/// <summary>
	/// Unpauses the game.
	/// </summary>
	public void UnpauseGame ()
	{
		if (State.PlayState == PlayState.Paused) {
			State.PlayState = State.PlayStateBeforePause;
			Time.timeScale = savedTimeScale;
			if (GameUnpaused != null)
				GameUnpaused ();
		}
	}
	
	/// <summary>
	/// Shows the options panel.
	/// </summary>
	public void ShowOptionsPanel ()
	{
		PauseGame ();
		Components.ViewController.ShowOptionsPanel ();
	}
	
	/// <summary>
	/// Hides the options panel.
	/// </summary>
	public void HideOptionsPanel ()
	{
		Components.ViewController.HideOptionsPanel ();
		UnpauseGame ();
	}
	
	/// <summary>
	/// Shows the splash panel.
	/// </summary>
	public void ShowSplashPanel ()
	{
		PauseGame ();
		Components.ViewController.ShowSplashPanel (State);
	}
	
	/// <summary>
	/// Hides the splash panel.
	/// </summary>
	public void HideSplashPanel ()
	{
		UnpauseGame ();
		Components.ViewController.HideSplashPanel ();
	}
	
	/// <summary>
	/// Starts the game from splash.
	/// </summary>
	public void StartGameFromSplash()
	{
		UnpauseGame ();
		State.PlayState = PlayState.Playing;
		HideSplashPanel();
	}
	
	/// <summary>
	/// Toggles the sound effects.
	/// </summary>
	public void ToggleSoundEffects ()
	{
		AudioController.ToggleSoundEffects ();
		AudioController.AddSoundEffectsStateMessage (AddGameMessage);
	}
	
	/// <summary>
	/// Toggles the background sound.
	/// </summary>
	public void ToggleBackgroundSound ()
	{
		AudioController.ToggleBackgroundSound ();
		AudioController.AddBackgroundSoundStateMessage (AddGameMessage);
	}
	
	/// <summary>
	/// Restarts the game.
	/// </summary>
	public void RestartGame ()
	{
		lock (gameRestartLock) {
			//TODO: remove logging here
			Logger.LogFormat ("Start of restart: {0}", State.PlayState);
			PlayState playState = State.PlayState;
			State = new GameState ();
			MoveToNextLevel ();
			State.PlayState = playState;
			Logger.LogFormat ("Before hide panels of restart: {0}", State.PlayState);
			if (Components.ViewController.OptionsPanelShowing)
				HideOptionsPanel ();
			if (Components.ViewController.SplashPanelShowing)
				HideSplashPanel ();
			Logger.LogFormat ("Before setting to not started of restart: {0}", State.PlayState);
			State.PlayState = PlayState.NotStarted;
			AddGameMessage (ConfigurableSettings.MessageGameRestarted);
			if (GameRestarted != null)
				GameRestarted ();
			Logger.LogFormat ("End of restart: {0}", State.PlayState);
		}
	}
	
	/// <summary>
	/// Quits the game.
	/// </summary>
	public void QuitGame ()
	{
		Application.Quit ();
	}
	
	/// <summary>
	/// Tries to load the saved game.
	/// </summary>
	public void TryLoadGame ()
	{
		lock (gameLoadLock) {
			try {
				string savegameFilename = Path.Combine (Application.persistentDataPath, ConfigurableSettings.SavegameFilename);
				if (!File.Exists (savegameFilename)) {
					AddGameMessage (ConfigurableSettings.MessageLoadGameFailedNoFileMessagePattern);
					return;
				}
				SavedGameState saveGame = null;
				BinaryFormatter formatter = new BinaryFormatter ();
				using (FileStream fs = File.Open(savegameFilename, FileMode.Open)) {
					saveGame = (SavedGameState)formatter.Deserialize (fs);
					fs.Close ();
				}
				SetupFromSavedGame (saveGame);
				if (Components.ViewController.OptionsPanelShowing)
					HideOptionsPanel ();
				if (Components.ViewController.SplashPanelShowing)
					HideSplashPanel ();
				State.PlayState = PlayState.NotStarted;
				AddGameMessage (string.Format (ConfigurableSettings.MessageLoadGamePattern, saveGame.SavedOn.ToLongDateString ()));
			} catch (Exception ex) {
				AddGameMessage (string.Format (ConfigurableSettings.MessageLoadGameFailedMessagePattern, ex.Message));
			}
		}
	}
	
	/// <summary>
	/// Tries to save the game.
	/// </summary>
	public void TrySaveGame ()
	{
		lock (gameSaveLock) {
			try {
				string savegameFilename = Path.Combine (Application.persistentDataPath, ConfigurableSettings.SavegameFilename);
				SavedGameState saveGame = new SavedGameState ();
				saveGame.SavedOn = DateTime.Now;
				saveGame.State = State;
				BinaryFormatter formatter = new BinaryFormatter ();
				using (FileStream fs = File.Open(savegameFilename, FileMode.OpenOrCreate)) {
					fs.SetLength (0);
					formatter.Serialize (fs, saveGame);
					fs.Close ();
				}
				if (Components.ViewController.OptionsPanelShowing)
					HideOptionsPanel ();
				if (Components.ViewController.SplashPanelShowing)
					HideSplashPanel ();
				AddGameMessage (string.Format (ConfigurableSettings.MessageSaveGamePattern, DateTime.Now.ToLongDateString ()));
			} catch (Exception ex) {
				AddGameMessage (string.Format (ConfigurableSettings.MessageSaveGameFailedMessagePattern, ex.Message));
			}
		}
	}
	
	
	
}


