using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class BackgroundSound : MonoBehaviour
{
	public AudioClip NightInsectsSoundClip = null;
	public AudioClip NightCricketsSoundClip = null;
	public AudioClip DayInsectsSoundClip = null;
	public AudioClip LakeWaterSoundClip = null;
	public AudioClip SingingBowlClip = null;
	public AudioClip FluteClip = null;
	private GameController gameController = null;
	private List<AudioSource> backgroundSoundSources = null;
	private List<AudioSource> nightBackgroundSoundSources = null;
	private List<AudioSource> dayBackgroundSoundSources = null;
	private AudioSource singingBowlAudioSource = null;
	private AudioSource fluteAudioSource = null;
	

	/// <summary>
	/// Handles the awake event.
	/// </summary>
	private void Awake ()
	{
		gameController = GameController.FindGameController ();
		backgroundSoundSources = new List<AudioSource> ();
		nightBackgroundSoundSources = new List<AudioSource> ();
		dayBackgroundSoundSources = new List<AudioSource> ();
	}
	
	/// <summary>
	/// Start this instance.
	/// </summary>
	private void Start ()
	{
		SetupBackgroundSound (DayInsectsSoundClip, 0.25f, dayBackgroundSoundSources);
		SetupBackgroundSound (NightInsectsSoundClip, 0.40f, nightBackgroundSoundSources);
		SetupBackgroundSound (NightCricketsSoundClip, 0.25f, nightBackgroundSoundSources);
		SetupBackgroundSound (LakeWaterSoundClip, 1.25f, backgroundSoundSources);
		if (PlayOnStart)
			StartBackgroundSounds ();
	}
	
	/// <summary>
	/// Setups the background sound.
	/// </summary>
	/// <param name="audioClip">Audio clip.</param>
	/// <param name="volume">Volume.</param>
	/// <param name="store">Store.</param>
	private void SetupBackgroundSound (AudioClip audioClip, float volume, List<AudioSource> store)
	{
		GameObject audioSource = gameController.GameObjectPoolManager
			.GetPool (gameController.Prefabs.AudioSourcePrefab)
			.Take ();
		AudioSource audioSourceComponent = audioSource.GetComponent<AudioSource> ();
		audioSourceComponent.clip = audioClip;
		audioSourceComponent.loop = true;
		audioSourceComponent.volume = volume;
		audioSourceComponent.playOnAwake = false;
		audioSource.SetActive (true);
		store.Add (audioSourceComponent);
	}
	
	/// <summary>
	/// Changes the atmosphere.
	/// </summary>
	/// <param name="target">Target.</param>
	public void ChangeAtmosphere (Atmosphere target, bool backgroundSoundMuted)
	{
		switch (target) {
		case Atmosphere.Day:
			nightBackgroundSoundSources.ForEachAction (StopIfPlaying);
			if(!backgroundSoundMuted) dayBackgroundSoundSources.ForEachAction (PlayIfNotAlready);
			RemoveAudioSources(backgroundSoundSources, nightBackgroundSoundSources);
			backgroundSoundSources.AddRange(dayBackgroundSoundSources);
			break;
		case Atmosphere.Night:
			dayBackgroundSoundSources.ForEachAction (StopIfPlaying);
			if(!backgroundSoundMuted) nightBackgroundSoundSources.ForEachAction (PlayIfNotAlready);
			RemoveAudioSources(backgroundSoundSources, dayBackgroundSoundSources);
			backgroundSoundSources.AddRange(nightBackgroundSoundSources);
			break;
		}
	}

	/// <summary>
	/// Starts the background sounds.
	/// </summary>
	public void StartBackgroundSounds ()
	{
		backgroundSoundSources.ForEachAction (PlayIfNotAlready);
	}

	/// <summary>
	/// Stops the background sounds.
	/// </summary>
	public void StopBackgroundSounds ()
	{
		backgroundSoundSources.ForEachAction (StopIfPlaying);
	}
	
	/// <summary>
	/// Stops if playing.
	/// </summary>
	/// <param name="target">Target.</param>
	private void StopIfPlaying(AudioSource target)
	{
		if(target != null && target.isPlaying)
		{
			target.Stop();
		}
	}
	
	/// <summary>
	/// Plays if not already.
	/// </summary>
	/// <param name="target">Target.</param>
	private void PlayIfNotAlready(AudioSource target)
	{
		if(target != null && !target.isPlaying)
		{
			target.Play();
		}
	}
	
	/// <summary>
	/// Removes the audio sources.
	/// </summary>
	/// <param name="target">Target.</param>
	/// <param name="removeAudioSources">Remove audio sources.</param>
	private void RemoveAudioSources(List<AudioSource> target, List<AudioSource> removeAudioSources)
	{
		if(target != null && removeAudioSources != null)
		{
			foreach(AudioSource removeAudioSource in removeAudioSources)
			{
				if(target.Contains(removeAudioSource)) target.Remove(removeAudioSource);
			}
		}
	}
	
	/// <summary>
	/// Plays the flute.
	/// </summary>
	public void PlayFlute ()
	{
		if (fluteAudioSource == null) {
			GameObject audioSource = gameController.GameObjectPoolManager
				.GetPool (gameController.Prefabs.AudioSourcePrefab)
				.Take ();
			AudioSource audioSourceComponent = audioSource.GetComponent<AudioSource> ();
			audioSourceComponent.clip = FluteClip;
			audioSourceComponent.volume = 1.0f;
			audioSourceComponent.loop = false;
			audioSource.SetActive (true);
			fluteAudioSource = audioSourceComponent;
		}
		fluteAudioSource.Play ();
	}
	
	/// <summary>
	/// Plays the singing bowl.
	/// </summary>
	public void PlaySingingBowl ()
	{
		if (singingBowlAudioSource == null) {
			GameObject audioSource = gameController.GameObjectPoolManager
				.GetPool (gameController.Prefabs.AudioSourcePrefab)
				.Take ();
			AudioSource audioSourceComponent = audioSource.GetComponent<AudioSource> ();
			audioSourceComponent.clip = SingingBowlClip;
			audioSourceComponent.volume = 0.25f;
			audioSourceComponent.loop = false;
			audioSource.SetActive (true);
			singingBowlAudioSource = audioSourceComponent;
		}
		singingBowlAudioSource.Play ();
	}
	
	/// <summary>
	/// Gets or sets a value indicating whether this <see cref="BackgroundSound"/> play on start.
	/// </summary>
	/// <value><c>true</c> if play on start; otherwise, <c>false</c>.</value>
	public bool PlayOnStart { get; set; }

}
