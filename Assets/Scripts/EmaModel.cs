using UnityEngine;
using System;
using System.Collections;

/// <summary>
/// Ema model.
/// </summary>
[Serializable]
public class EmaModel
{
	/// <summary>
	/// Gets or sets the inscription.
	/// </summary>
	/// <value>The inscription.</value>
	public string Inscription { get; set; }
	
	/// <summary>
	/// Gets or sets the type.
	/// </summary>
	/// <value>The type.</value>
	public EmaType Type { get; set; }
	
	/// <summary>
	/// Gets or sets the position.
	/// </summary>
	/// <value>The position.</value>
	public SerializableVector3 Position { get; set; }
	
	/// <summary>
	/// Gets or sets the rotation.
	/// </summary>
	/// <value>The rotation.</value>
	public SerializableQuaternion Rotation { get; set; }
	
	/// <summary>
	/// The game object.
	/// </summary>
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
		Position = new SerializableVector3 (gameObject.transform.position);
		Rotation = new SerializableQuaternion (gameObject.transform.rotation);
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
