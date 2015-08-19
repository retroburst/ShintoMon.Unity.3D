using UnityEngine;
using System;
using System.Collections.Generic;

/// <summary>
/// Manages game object pools.
/// </summary>
public class GameObjectPoolManager {
	private Dictionary<GameObject, GameObjectPool> pools = null;
	private int defaultSize = 0;
	
	/// <summary>
	/// Initializes a new instance of the <see cref="GameObjectPoolManager"/> class.
	/// </summary>
	/// <param name="defaultSize">Default size.</param>
	public GameObjectPoolManager(int defaultSize)
	{
		this.defaultSize = defaultSize;
		this.pools = new Dictionary<GameObject, GameObjectPool>();
	}
	
	/// <summary>
	/// Gets the pool.
	/// </summary>
	/// <returns>The pool.</returns>
	/// <param name="targetPreFabrication">Target pre fabrication.</param>
	public GameObjectPool GetPool(GameObject targetPreFabrication)
	{
		if(pools.ContainsKey(targetPreFabrication))
		{
			return(pools[targetPreFabrication]);
		}
		else
		{
			GameObjectPool pool = new GameObjectPool(targetPreFabrication, defaultSize);
			pools.Add(targetPreFabrication, pool);
			return(pool);
		}
	}
	
	/// <summary>
	/// Adds a pool. You only need to do this
	/// if you want to set a specific initial size or
	/// do intial instantiates up front.
	/// </summary>
	/// <param name="targetPreFabrication">Target pre fabrication.</param>
	/// <param name="initialSize">Initial size.</param>
	/// <typeparam name="T">The 1st type parameter.</typeparam>
	public void AddPool(GameObject targetPreFabrication, int initialSize)
	{
		GameObjectPool pool = new GameObjectPool(targetPreFabrication, initialSize);
		pools.Add(targetPreFabrication, pool);
	}
	
	/// <summary>
	/// Adds the pools.
	/// </summary>
	/// <param name="targetPreFabrications">Target pre fabrications.</param>
	/// <param name="initialSize">Initial size.</param>
	public void AddPools(IList<GameObject> targetPreFabrications, int initialSize)
	{
		foreach(GameObject preFab in targetPreFabrications)
		{
			AddPool(preFab, initialSize);
		}
	}

}
