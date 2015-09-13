using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

/// <summary>
/// Manages and plays sound effects.
/// </summary>
public class SoundEffects : MonoBehaviour
{
	private Dictionary<AudioClipType, AudioClip> audioClipTypeDictionary = null;
	private GameController gameController = null;
	public List<AudioClip> audioClips = null;
	public List<AudioClip> bounceClips = null;

	/// <summary>
	/// Handles awake event.
	/// </summary>
	private void Awake ()
	{
		gameController = GameController.FindGameController();
		audioClipTypeDictionary = new Dictionary<AudioClipType, AudioClip> ();
		BuildAudioClipDictionary ();
	}

	/// <summary>
	/// Builds the audio clip dictionary.
	/// </summary>
	private void BuildAudioClipDictionary ()
	{
		foreach (AudioClip clip in audioClips) {
			AudioClipType clipType = (AudioClipType)Enum.Parse (typeof(AudioClipType), clip.name);
			audioClipTypeDictionary.Add (clipType, clip);
		}
	}
	
	/// <summary>
	/// Plays the clip with callback.
	/// </summary>
	/// <param name="clip">Clip.</param>
	/// <param name="volume">Volume.</param>
	private void PlayClipWithCallback(AudioClip clip, float volume)
	{
		GameObject audioSource = gameController.GameObjectPoolManager
			.GetPool(gameController.Prefabs.AudioSourcePrefab)
			.Take();
		AudioSource audioSourceComponent = audioSource.GetComponent<AudioSource> ();
		audioSourceComponent.clip = clip;
		audioSourceComponent.volume = volume;
		audioSource.SetActive(true);
		audioSourceComponent.Play();
		StartCoroutine(DelayedCallback(audioSource, clip.length, ResetAudioSource));
	}
	
	/// <summary>
	/// Delayed callback.
	/// </summary>
	/// <returns>The callback.</returns>
	/// <param name="audioSource">Audio source.</param>
	/// <param name="time">Time.</param>
	/// <param name="callback">Callback.</param>
	private IEnumerator DelayedCallback(GameObject audioSource, float time, Action<GameObject> callback)
	{
		yield return new WaitForSeconds(time);
		callback(audioSource);
	}
	
	/// <summary>
	/// Resets the audio source.
	/// </summary>
	/// <param name="audioSource">Audio source.</param>
	private void ResetAudioSource(GameObject audioSource)
	{
		audioSource.SetActive(false);
	}

	/// <summary>
	/// Plays the stationary.
	/// </summary>
	public void PlayEmaCollected ()
	{
		PlayClipWithCallback(audioClipTypeDictionary[AudioClipType.EmaCollected], 1.0f);
	}

	/// <summary>
	/// Plays the bounce.
	/// </summary>
	public void PlayBounce ()
	{
		PlayClipWithCallback(bounceClips[UnityEngine.Random.Range(0, bounceClips.Count)], 1.0f);
	}
	
	/// <summary>
	/// Plays the splash.
	/// </summary>
	public void PlaySplash()
	{
		PlayClipWithCallback(audioClipTypeDictionary[AudioClipType.Splash], 1.0f);
	}
	
	private enum AudioClipType
	{
		EmaCollected,
		Splash
	}
}


