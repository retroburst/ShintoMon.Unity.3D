using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class BackgroundSound : MonoBehaviour
{
	public AudioClip insectsSoundClip = null;
	public AudioClip frogsSoundClip = null;
	public AudioClip lakeWaterSoundClip = null;
	private GameController gameController = null;
	private List<AudioSource> sources = null;

	/// <summary>
	/// Handles the awake event.
	/// </summary>
	private void Awake ()
	{
		gameController = GameController.FindGameController ();
		sources = new List<AudioSource> ();
	}
	
	private void Start ()
	{
		SetupBackgroundSound (insectsSoundClip, 0.25f);
		SetupBackgroundSound (frogsSoundClip, 0.15f);
		SetupBackgroundSound(lakeWaterSoundClip, 0.5f);
		if (PlayOnStart)
			StartBackgroundSounds ();
	}
	
	/// <summary>
	/// Sets up the background sound.
	/// </summary>
	/// <param name="audioClip">Audio clip.</param>
	/// <param name="volume">Volume.</param>
	private void SetupBackgroundSound (AudioClip audioClip, float volume)
	{
		GameObject audioSource = gameController.GameObjectPoolManager
			.GetPool (gameController.Prefabs.AudioSourcePrefab)
			.Take ();
		AudioSource audioSourceComponent = audioSource.GetComponent<AudioSource> ();
		audioSourceComponent.clip = audioClip;
		audioSourceComponent.loop = true;
		audioSourceComponent.volume = volume;
		audioSourceComponent.playOnAwake = false;
		audioSource.SetActive(true);
		sources.Add (audioSourceComponent);
	}

	/// <summary>
	/// Starts the background sounds.
	/// </summary>
	public void StartBackgroundSounds ()
	{
		sources.ForEach (x => x.Play ());
	}

	/// <summary>
	/// Stops the background sounds.
	/// </summary>
	public void StopBackgroundSounds ()
	{
		sources.ForEach (x => x.Stop ());
	}
	
	/// <summary>
	/// Gets or sets a value indicating whether this <see cref="BackgroundSound"/> play on start.
	/// </summary>
	/// <value><c>true</c> if play on start; otherwise, <c>false</c>.</value>
	public bool PlayOnStart { get; set; }

}
