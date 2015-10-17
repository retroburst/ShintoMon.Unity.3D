using UnityEngine;
using System.Collections;

/// <summary>
/// View controller context.
/// </summary>
public class ViewControllerContext
{
	/// <summary>
	/// Gets or sets the configurable settings.
	/// </summary>
	/// <value>The configurable settings.</value>
	public ConfigurableSettings ConfigurableSettings { get; set; }
	
	/// <summary>
	/// Gets or sets the prefabs.
	/// </summary>
	/// <value>The prefabs.</value>
	public Prefabs Prefabs { get; set; }
	
	/// <summary>
	/// Gets or sets the components.
	/// </summary>
	/// <value>The components.</value>
	public Components Components { get; set; }
	
	/// <summary>
	/// Gets or sets the user interface components.
	/// </summary>
	/// <value>The user interface components.</value>
	public UIComponents UIComponents { get; set; }
	
	/// <summary>
	/// Gets or sets the game message controller.
	/// </summary>
	/// <value>The game message controller.</value>
	public GameMessageController GameMessageController { get; set; }
	
	/// <summary>
	/// Gets or sets the game controller.
	/// </summary>
	/// <value>The game controller.</value>
	public GameController GameController { get; set; }
	
	/// <summary>
	/// Gets or sets the platform strategy manager.
	/// </summary>
	/// <value>The platform strategy manager.</value>
	public PlatformStrategyManager PlatformStrategyManager { get; set; }
}
