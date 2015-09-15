using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// Serializable quaternion.
/// </summary>
[Serializable]
public class SerializableQuaternion {
	public float x = 0.0f;
	public float y = 0.0f;
	public float z = 0.0f;
	public float w = 0.0f;
	
	/// <summary>
	/// Initializes a new instance of the <see cref="SerializableQuaternion"/> class.
	/// </summary>
	/// <param name="target">Target.</param>
	public SerializableQuaternion (Quaternion target)
	{
		x = target.x;
		y = target.y;
		z = target.z;
		w = target.w;
	}
	
	/// <summary>
	/// Initializes a new instance of the <see cref="SerializableQuaternion"/> class.
	/// </summary>
	/// <param name="x">The x coordinate.</param>
	/// <param name="y">The y coordinate.</param>
	/// <param name="z">The z coordinate.</param>
	/// <param name="w">The width.</param>
	public SerializableQuaternion (float x, float y, float z, float w)
	{
		this.x = x;
		this.y = y;
		this.z = z;
		this.w = w;
	}
	
	/// <summary>
	/// Converts to a UnityEngine Quaternion.
	/// </summary>
	/// <returns>The vector3.</returns>
	public Quaternion ToQuaternion ()
	{
		return(new Quaternion (x, y, z, w));
	}
}
