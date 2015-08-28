using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System;

public class GameController : MonoBehaviour
{
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
	/// Gets the instance.
	/// </summary>
	/// <value>The instance.</value>
	public static GameController Instance { get; private set; }
	
	/// <summary>
	/// Gets the view controller.
	/// </summary>
	/// <value>The view controller.</value>
	public ViewController ViewController { get; private set; }

	/// <summary>
	/// Gets the state.
	/// </summary>
	/// <value>The state.</value>
	public GameState State { get; private set; }
	
	/// <summary>
	/// The levels.
	/// </summary>
	private GameLevel[] Levels = null;
	
	public event Action InitialisationComplete;
	public event Action<GameLevel> GameLevelChanged;
	public event Action GameOver;
	public event Action GameWon;
	public event Action GameRestarted;
	public event Action GamePaused;
	public event Action GameUnpaused;
	
	public object ballLostLock = new object ();
	public object emaCollectedLock = new object ();
	
	/// <summary>
	/// Handles the awake event.
	/// </summary>
	private void Awake ()
	{
		Instance = this;
		InitialiseRuntimeComponents ();
		// max rows = 8 at the moment
		// max columns = 15 at the moment
		Levels = GameLevel.GameLevels;
		State = new GameState ();
		ViewController = new ViewController (CreateViewControllerContext ());
		if (InitialisationComplete != null)
			InitialisationComplete ();
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
		return(result);
	}
	
	/// <summary>
	/// Start this instance.
	/// </summary>
	private void Start ()
	{

	}
	
	/// <summary>
	/// Performs setup for new level.
	/// </summary>
	private void SetupForNewLevel ()
	{
		State.Reset (Levels [State.LevelIndex]);
		State.Level = Levels [State.LevelIndex];
		ViewController.UpdateViewForNewLevel (Levels [State.LevelIndex]);
	}
	
	/// <summary>
	/// Moves to next level.
	/// </summary>
	private void MoveToNextLevel ()
	{
		if (State.LevelIndex + 1 <= Levels.GetUpperBound (0)) {
			State.LevelIndex++;
			SetupForNewLevel ();
			if (GameLevelChanged != null)
				GameLevelChanged (State.Level);
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
		AudioController = new AudioController (Components.BackgroundMusic, Components.SoundEffects, true, true, ConfigurableSettings);
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
		GameObjectPoolManager.AddPool (Prefabs.AudioSourcePrefab, ConfigurableSettings.GameObjectPoolAudioSourceSize);
	}
	
	/// <summary>
	/// Performs the frame update.
	/// </summary>
	void Update ()
	{
		if (State.LevelIndex == -1) {
			// move to the first level
			MoveToNextLevel ();
			return;
		}
		
		if (State.PlayState == PlayState.NotStarted)
			return;

		// update the view
		ViewController.UpdateView (State);
	}
	
	/// <summary>
	/// Adds the game message.
	/// </summary>
	/// <param name="message">Message.</param>
	public void AddGameMessage (string message)
	{
		if (!string.IsNullOrEmpty (message))
			ViewController.Messages.Add (message);
	}
	
	public void BallInPlay ()
	{
		State.PlayState = PlayState.Playing;
	}
	
	public void BallLost ()
	{
		lock (ballLostLock) {
			State.BallsRemaining--;
			if (State.BallsRemaining <= 0) {
				PerformGameOver ();
			}
		}
	}
	
	public void EmaCollected (GameObject ema)
	{
		lock (emaCollectedLock) {
			State.EmaCollected++;
			if (State.EmaCollected == State.Level.EmaCount) {
				MoveToNextLevel ();
			}
		}
	}
	
}


