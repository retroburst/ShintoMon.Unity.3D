using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

/// <summary>
/// Platform strategy manager.
/// Performs platform specific
/// setup and logic. 
/// </summary>
public class PlatformStrategyManager
{
	private GameController gameController = null;
	private IPlatformStrategy strategy = null;
	private Dictionary<RuntimePlatform, Func<IPlatformStrategy>> strategyMap = null;

	/// <summary>
	/// Initializes a new instance of the <see cref="PlatformStrategyManager"/> class.
	/// </summary>
	/// <param name="gameController">Game controller.</param>
	public PlatformStrategyManager (GameController gameController)
	{
		this.gameController = gameController;
		strategyMap = new Dictionary<RuntimePlatform, Func<IPlatformStrategy>> ();
		strategyMap.Add (RuntimePlatform.WebGLPlayer, () => new WebGLStrategy ());
	}
	
	/// <summary>
	/// Setup this instance.
	/// </summary>
	public void Setup ()
	{
		if (strategyMap.ContainsKey (Application.platform)) {
			strategy = strategyMap [Application.platform] ();
		} else {
			strategy = new StandardStrategy ();
		}
		strategy.Setup (gameController);
	}
	
	/// <summary>
	/// Gets the active strategy.
	/// </summary>
	/// <value>The active strategy.</value>
	public IPlatformStrategy ActiveStrategy {
		get {
			return(strategy);
		}
	}
}
