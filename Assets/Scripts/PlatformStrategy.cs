using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// Platform strategy contract.
/// </summary>
public interface IPlatformStrategy
{
	/// <summary>
	/// Setup the specified gameController.
	/// </summary>
	/// <param name="gameController">Game controller.</param>
	void Setup (GameController gameController);
	
	/// <summary>
	/// Gets the supported platforms.
	/// </summary>
	/// <value>The supported platforms.</value>
	RuntimePlatform[] SupportedPlatforms { get; }
	
	/// <summary>
	/// Gets a value indicating whether this <see cref="IPlatformSetupStrategy"/> show splash.
	/// </summary>
	/// <value><c>true</c> if show splash; otherwise, <c>false</c>.</value>
	bool ShowSplash { get; }
	
	/// <summary>
	/// Gets a value indicating whether this <see cref="IPlatformStrategy"/> change lights for atmosphere.
	/// </summary>
	/// <value><c>true</c> if change lights for atmosphere; otherwise, <c>false</c>.</value>
	bool ChangeLightsForAtmosphere { get; }
}

/// <summary>
/// Standard strategy.
/// </summary>
public class StandardStrategy : IPlatformStrategy
{	
	/// <summary>
	/// Setup the specified gameController.
	/// </summary>
	/// <param name="gameController">Game controller.</param>
	public void Setup (GameController gameController)
	{
	
	}
	
	/// <summary>
	/// Gets the supported platforms.
	/// </summary>
	/// <value>The supported platforms.</value>
	public RuntimePlatform[] SupportedPlatforms {
		get {
			return((RuntimePlatform[])Enum.GetValues (typeof(RuntimePlatform)));
		}
	}
	
	/// <summary>
	/// Gets a value indicating whether this <see cref="StandardStrategy"/> show splash.
	/// </summary>
	/// <value><c>true</c> if show splash; otherwise, <c>false</c>.</value>
	public bool ShowSplash { get { return(true); } }
	
	/// <summary>
	/// Gets a value indicating whether this <see cref="StandardStrategy"/> change lights for atmosphere.
	/// </summary>
	/// <value><c>true</c> if change lights for atmosphere; otherwise, <c>false</c>.</value>
	public bool ChangeLightsForAtmosphere { get { return(true); } }
}

/// <summary>
/// Web GL strategy.
/// </summary>
public class WebGLStrategy : IPlatformStrategy
{	
	/// <summary>
	/// Setup this instance.
	/// </summary>
	public void Setup (GameController gameController)
	{
		// web gl platform does not allow quitting - so remove buttons
		// or disable them
		gameController.UIComponents.QuitButton.gameObject.SetActive (false);
		gameController.UIComponents.SplashPanelQuitButton.gameObject.SetActive (false);
	}
	
	/// <summary>
	/// Gets a value indicating whether this <see cref="WebGLSetupStrategy"/> show splash.
	/// </summary>
	/// <value><c>true</c> if show splash; otherwise, <c>false</c>.</value>
	public bool ShowSplash { get { return(false); } }
	
	/// <summary>
	/// Gets a value indicating whether this <see cref="WebGLStrategy"/> change lights for atmosphere.
	/// </summary>
	/// <value><c>true</c> if change lights for atmosphere; otherwise, <c>false</c>.</value>
	public bool ChangeLightsForAtmosphere { get { return(false); } }
	
	/// <summary>
	/// Gets the supported platform.
	/// </summary>
	/// <value>The supported platform.</value>
	public RuntimePlatform[] SupportedPlatforms {
		get {
			return(new RuntimePlatform[] { RuntimePlatform.WebGLPlayer });
		}
	}
}
