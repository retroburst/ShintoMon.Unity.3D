using UnityEngine;
using System.Collections;

public class BackgroundMusic : MonoBehaviour {
	public AudioClip backgroundMusicClip = null;
	private AudioSource audioPlayer = null;

	// Use this for initialization
	void Start () {
		audioPlayer = GetComponent<AudioSource>();
		audioPlayer.clip = backgroundMusicClip;
		audioPlayer.loop = true;
	}

	/// <summary>
	/// Starts the background music.
	/// </summary>
	public void StartBackgroundMusic()
	{
		audioPlayer.Play();	
	}

	/// <summary>
	/// Stops the background music.
	/// </summary>
	public void StopBackgroundMusic()
	{
		audioPlayer.Stop();
	}

}
