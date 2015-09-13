using UnityEngine;
using System;
using System.Collections;

[Serializable]
public class EmaModel {
	public Vector3 Position { get; set; }
	public Vector3 Rotation { get; set; }
	[NonSerialized]
	public GameObject GameObject { get; set; }
}
