using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class BackgroundSound : MonoBehaviour
{
	public AudioClip InsectsSoundClip = null;
	public AudioClip FrogsSoundClip = null;
	public AudioClip LakeWaterSoundClip = null;
	public AudioClip SingingBowlClip = null;
	public AudioClip FluteClip = null;
	private GameController gameController = null;
	private List<AudioSource> backgroundSoundSources = null;
	private AudioSource singingBowlAudioSource = null;
	private AudioSource fluteAudioSource = null;

	/// <summary>
	/// Handles the awake event.
	/// </summary>
	private void Awake ()
	{
		gameController = GameController.FindGameController ();
		backgroundSoundSources = new List<AudioSource> ();
	}
	
	private void Start ()
	{
		SetupBackgroundSound (InsectsSoundClip, 0.40f);
		SetupBackgroundSound (FrogsSoundClip, 0.25f);
		SetupBackgroundSound (LakeWaterSoundClip, 1.0f);
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
		backgroundSoundSources.Add (audioSourceComponent);
	}

	/// <summary>
	/// Starts the background sounds.
	/// </summary>
	public void StartBackgroundSounds ()
	{
		backgroundSoundSources.ForEach (x => x.Play ());
	}

	/// <summary>
	/// Stops the background sounds.
	/// </summary>
	public void StopBackgroundSounds ()
	{
		backgroundSoundSources.ForEach (x => x.Stop ());
	}
	
	/// <summary>
	/// Plays the flute.
	/// </summary>
	public void PlayFlute()
	{
		if(fluteAudioSource == null)
		{
			GameObject audioSource = gameController.GameObjectPoolManager
				.GetPool(gameController.Prefabs.AudioSourcePrefab)
				.Take();
			AudioSource audioSourceComponent = audioSource.GetComponent<AudioSource> ();
			audioSourceComponent.clip = FluteClip;
			audioSourceComponent.volume = 1.0f;
			audioSourceComponent.loop = false;
			audioSource.SetActive(true);
			fluteAudioSource = audioSourceComponent;
		}
		fluteAudioSource.Play();
	}
	
	/// <summary>
	/// Plays the singing bowl.
	/// </summary>
	public void PlaySingingBowl()
	{
		if(singingBowlAudioSource == null)
		{
			GameObject audioSource = gameController.GameObjectPoolManager
				.GetPool(gameController.Prefabs.AudioSourcePrefab)
				.Take();
			AudioSource audioSourceComponent = audioSource.GetComponent<AudioSource> ();
			audioSourceComponent.clip = SingingBowlClip;
			audioSourceComponent.volume = 1.0f;
			audioSourceComponent.loop = false;
			audioSource.SetActive(true);
			singingBowlAudioSource = audioSourceComponent;
		}
		singingBowlAudioSource.Play();
	}
	
	/// <summary>
	/// Gets or sets a value indicating whether this <see cref="BackgroundSound"/> play on start.
	/// </summary>
	/// <value><c>true</c> if play on start; otherwise, <c>false</c>.</value>
	public bool PlayOnStart { get; set; }

}
