using UnityEngine;
using System.Collections;
using System.Text;

public class GameController : MonoBehaviour {
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
	
	/// <summary>
	/// Handles the awake event.
	/// </summary>
	private void Awake () {
		Instance = this;
		InitialiseRuntimeComponents();
		// max rows = 8 at the moment
		// max columns = 15 at the moment
	}
	
	/// <summary>
	/// Start this instance.
	/// </summary>
	private void Start(){
		Components.EmaGrid.LayoutEmaGrid(5, 15);
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
}
