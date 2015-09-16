using UnityEngine;
using System;
using System.Collections.Generic;

/// <summary>
/// Game object pool.
/// Instantiates and stores pooled
/// game objects.
/// </summary>
public class GameObjectPool
{
	private List<GameObject> pool = null;
	private object takeSyncLock = new object ();
	private GameObject targetPreFabrication = null;
	
	/// <summary>
	/// Initializes a new instance of the <see cref="GameObjectPool"/> class.
	/// </summary>
	/// <param name="targetPreFabrication">Target pre fabrication.</param>
	/// <param name="initialSize">Initial size.</param>
	public GameObjectPool (GameObject targetPreFabrication, int initialSize)
	{
		this.targetPreFabrication = targetPreFabrication;
		pool = new List<GameObject> (initialSize);
		InitialisePool (initialSize);
	}
	
	/// <summary>
	/// Initialises the pool.
	/// </summary>
	/// <param name="initialSize">Initial size.</param>
	private void InitialisePool (int initialSize)
	{
		for (int i=0; i < initialSize; i++) {
			GameObject pooledObject = (GameObject)GameObject.Instantiate (targetPreFabrication);
			pooledObject.SetActive (false);
			pool.Add (pooledObject);
		}
	}
	
	/// <summary>
	/// Takes the next available pooled object or creates a new pooled object.
	/// </summary>
	public GameObject Take ()
	{
		lock (takeSyncLock) {
			for (int i=0; i < pool.Count; i++) {
				if (!pool [i].activeInHierarchy)
					return(pool [i]);
			}
			GameObject newPooledObject = (GameObject)GameObject.Instantiate (targetPreFabrication);
			newPooledObject.SetActive (false);
			pool.Add (newPooledObject);
			return(newPooledObject);
		}
	}
	
	/// <summary>
	/// Take the specified count.
	/// </summary>
	/// <param name="count">Count.</param>
	public List<GameObject> Take (int numToTake)
	{
		List<GameObject> result = new List<GameObject> ();
		for (int count=0; count < numToTake; count++) {
			for (int i=0; i < pool.Count; i++) {
				if (!pool [i].activeInHierarchy)
					result.Add (pool [i]);
			}
			GameObject newPooledObject = (GameObject)GameObject.Instantiate (targetPreFabrication);
			newPooledObject.SetActive (false);
			pool.Add (newPooledObject);
			result.Add (newPooledObject);
		}
		return(result);
	}
	
	/// <summary>
	/// Take the specified numToTake, position and rotation.
	/// </summary>
	/// <param name="numToTake">Number to take.</param>
	/// <param name="position">Position.</param>
	/// <param name="rotation">Rotation.</param>
	public List<GameObject> Take (int numToTake, Vector3 position, Quaternion rotation)
	{
		List<GameObject> result = Take (numToTake);
		result.ForEach(x => { x.transform.position = position; x.transform.rotation = rotation; });
		return(result);
	}
	
	/// <summary>
	/// Takes the next available pooled object or creates a new pooled object.
	/// Assigns the position and rotation to its transform.
	/// </summary>
	/// <param name="position">Position.</param>
	/// <param name="rotation">Rotation.</param>
	public GameObject Take (Vector3 position, Quaternion rotation)
	{
		GameObject result = Take ();
		result.transform.position = position;
		result.transform.rotation = rotation;
		return(result);
	}
	
	/// <summary>
	/// Actions the specified function on each element.
	/// </summary>
	/// <param name="f">F.</param>
	public void Action (Action<GameObject> f)
	{
		foreach (GameObject gameObject in pool) {
			f (gameObject);	
		}
	}
	
}
