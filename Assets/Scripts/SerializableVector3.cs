using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// Serializable Vector3.
/// </summary>
[Serializable]
public class SerializableVector3
{
	public float x = 0.0f;
	public float y = 0.0f;
	public float z = 0.0f;
	
	/// <summary>
	/// Initializes a new instance of the <see cref="SerializableVector3"/> class.
	/// </summary>
	/// <param name="target">Target.</param>
	public SerializableVector3 (Vector3 target)
	{
		x = target.x;
		y = target.y;
		z = target.z;
	}
	
	/// <summary>
	/// Initializes a new instance of the <see cref="SerializableVector3"/> class.
	/// </summary>
	/// <param name="x">The x coordinate.</param>
	/// <param name="y">The y coordinate.</param>
	/// <param name="z">The z coordinate.</param>
	public SerializableVector3 (float x, float y, float z)
	{
		this.x = x;
		this.y = y;
		this.z = z;
	}
	
	/// <summary>
	/// Converts to a UnityEngine Vector3.
	/// </summary>
	/// <returns>The vector3.</returns>
	public Vector3 ToVector3 ()
	{
		return(new Vector3 (x, y, z));
	}
}
