using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Text;

public class GameController : MonoBehaviour
{
	// designer supplied components
	public ConfigurableSettings ConfigurableSettings = null;
	public Prefabs Prefabs = null;
	public Components Components = null;
	public UIComponents UIComponents = null;
	// runtime components
	public AudioController AudioController { get; private set; }

	public GameMessageController GameMessageController { get; private set; }

	public GameObjectPoolManager GameObjectPoolManager { get; private set; }

	public InscriptionGenerator InscriptionGenerator { get; private set; }
	// sundry
	public static GameController Instance { get; private set; }

	public ViewController ViewController { get; private set; }

	public GameState State { get; private set; }

	private GameLevel[] Levels = null;
		
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
		SetupForNewLevel();
	}
	
	/// <summary>
	/// Performs setup for new level.
	/// </summary>
	private void SetupForNewLevel()
	{
		State.Reset(Levels [State.Level]);
		ViewController.UpdateViewForNewLevel (Levels [State.Level]);
	}
	
	private void MoveToNextLevel()
	{
		//TODO check for game won etc
		State.Level++;
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
		if(State.PlayState == PlayState.NotStarted) return;
		
		ViewController.UpdateView (State, Levels [State.Level]);
		
		
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
	
	public void BallInPlay()
	{
		State.PlayState = PlayState.Playing;
	}
	
	public void BallLost()
	{
		State.BallsRemaining--;
	}
	
	public void EmaCollected(GameObject ema)
	{
		State.EmaCollected++;
	}
	
}


