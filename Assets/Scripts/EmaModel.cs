using UnityEngine;
using System;
using System.Collections;

[Serializable]
public class EmaModel
{
	public string Inscription { get; set; }

	public EmaType Type { get; set; }

	public SerializableVector3 Position { get; set; }

	public SerializableQuaternion Rotation { get; set; }

	[NonSerialized]
	private GameObject
		gameObject;
	
	/// <summary>
	/// Initializes a new instance of the <see cref="EmaModel"/> class.
	/// </summary>
	public EmaModel ()
	{
	}
	
	/// <summary>
	/// Initializes a new instance of the <see cref="EmaModel"/> class.
	/// </summary>
	/// <param name="inscription">Inscription.</param>
	/// <param name="type">Type.</param>
	/// <param name="gameObject">Game object.</param>
	public EmaModel (string inscription, EmaType type, GameObject gameObject)
	{
		Inscription = inscription;
		Type = type;
		GameObject = gameObject;
		Position = new SerializableVector3(gameObject.transform.position);
		Rotation = new SerializableQuaternion(gameObject.transform.rotation);
	}
	
	/// <summary>
	/// Gets or sets the game object.
	/// </summary>
	/// <value>The game object.</value>
	public GameObject GameObject { 
		get { return(gameObject); } 
		set { gameObject = value;}
	}
	
}
