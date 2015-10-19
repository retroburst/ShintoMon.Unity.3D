using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// Audio system controller.
/// </summary>
public class AudioController {
	private BackgroundSound backgroundSound = null;
	private SoundEffects soundEffects = null;
	private ConfigurableSettings configurableSettings = null;

	/// <summary>
	/// Initializes a new instance of the <see cref="AudioController"/> class.
	/// </summary>
	/// <param name="background">Background.</param>
	/// <param name="sound">Sound.</param>
	/// <param name="soundEffectsMuted">If set to <c>true</c> sound effects muted.</param>
	/// <param name="backgroundSoundMuted">If set to <c>true</c> background sounds muted.</param>
	/// <param name="configSettings">Config settings.</param>
	public AudioController(BackgroundSound background, SoundEffects sound, bool soundEffectsMuted, bool backgroundSoundMuted, ConfigurableSettings configSettings)
	{
		configurableSettings = configSettings;
		backgroundSound = background;
		soundEffects = sound;
		SoundEffectsMuted = soundEffectsMuted;
		BackgroundSoundMuted = backgroundSoundMuted;
		if(!BackgroundSoundMuted) backgroundSound.PlayOnStart = true;
	}
	
	/// <summary>
	/// Plays the ema collected sound effect.
	/// </summary>
	public void PlayEmaCollectedSoundEffect()
	{
		if(SoundEffectsMuted) return;
		soundEffects.PlayEmaCollected();
	}
	
	/// <summary>
	/// Plays the bounce sound effect.
	/// </summary>
	public void PlayBounceSoundEffect()
	{
		if(SoundEffectsMuted) return;
		soundEffects.PlayBounce();
	}
	
	/// <summary>
	/// Plays the ball explosion sound effect.
	/// </summary>
	public void PlayBallExplosionSoundEffect()
	{
		if(SoundEffectsMuted) return;
		soundEffects.PlayBallExplosion();
	}
	
	/// <summary>
	/// Plays the flute clip.
	/// </summary>
	public void PlayFluteClip()
	{
		if(BackgroundSoundMuted) return;
		backgroundSound.PlayFlute();
	}
	
	/// <summary>
	/// Plays the singing bowl clip.
	/// </summary>
	public void PlaySingingBowlClip()
	{
		if(BackgroundSoundMuted) return;
		backgroundSound.PlaySingingBowl();
	}
	
	/// <summary>
	/// Toggles the background sound.
	/// </summary>
	public void ToggleBackgroundSound()
	{
		BackgroundSoundMuted = !BackgroundSoundMuted;
		if(BackgroundSoundMuted) 
		{
			backgroundSound.StopBackgroundSounds();
		}
		else 
		{
			backgroundSound.StartBackgroundSounds();
		}
	}
	
	/// <summary>
	/// Changes the background sound atmosphere.
	/// </summary>
	/// <param name="target">Target.</param>
	public void ChangeBackgroundSoundAtmosphere(Atmosphere target)
	{
		backgroundSound.ChangeAtmosphere(target, BackgroundSoundMuted);
	}

	/// <summary>
	/// Toggles the sound effects.
	/// </summary>
	public void ToggleSoundEffects()
	{
		SoundEffectsMuted = !SoundEffectsMuted;
	}

	/// <summary>
	/// Gets a value indicating whether this <see cref="AudioSystem"/> sound effects muted.
	/// </summary>
	/// <value><c>true</c> if sound effects muted; otherwise, <c>false</c>.</value>
	public bool SoundEffectsMuted { get; private set; }

	/// <summary>
	/// Gets a value indicating whether this <see cref="AudioSystem"/> background music muted.
	/// </summary>
	/// <value><c>true</c> if background music muted; otherwise, <c>false</c>.</value>
	public bool BackgroundSoundMuted { get; private set; }

	/// <summary>
	/// Adds the background sound state message.
	/// </summary>
	/// <param name="addMessage">The add message.</param>
	public void AddBackgroundSoundStateMessage(Action<string> addMessage)
	{
		string message = string.Format(configurableSettings.MessageToggleBackgroundSoundPattern, GameHelpers.EncodeBooleanForDisplay(!BackgroundSoundMuted));
		addMessage(message);
	}
	
	/// <summary>
	/// Adds the sound effects state message.
	/// </summary>
	/// <param name="addMessage">The add message.</param>
	public void AddSoundEffectsStateMessage(Action<string> addMessage)
	{
		string message = string.Format(configurableSettings.MessageToggleSoundPattern, GameHelpers.EncodeBooleanForDisplay(!SoundEffectsMuted));
		addMessage(message);
	}
}
