using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/// <summary>
/// Helper methods for game logic and views.
/// </summary>
using System.Collections;


public static class GameHelpers
{
	private static HashSet<char> vowels = new HashSet<char> ("aeiou"); 

	/// <summary>
	/// Peforms a for each over an IEnumerable collection.
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="source">The source.</param>
	/// <param name="action">The action.</param>
	public static void ForEach<T> (this IEnumerable<T> source, Action<T> action)
	{
		if (source == null)
			return;
		for (int i = source.Count()-1; i >= 0; i--) {
			action (source.ElementAt (i));
		}
	}

	/// <summary>
	/// Shortens the name.
	/// </summary>
	/// <param name="name">The name.</param>
	/// <returns></returns>
	public static string ShortenName (string name)
	{
		if (string.IsNullOrEmpty (name))
			return (name);
		string result = new string (name.Where (x => !vowels.Contains (x)).ToArray ());
		return (result);
	}

	/// <summary>
	/// Encodes the boolean for display.
	/// </summary>
	/// <param name="target">if set to <c>true</c> [target].</param>
	/// <returns></returns>
	public static string EncodeBooleanForDisplay (bool target)
	{
		return (target ? "on" : "off");
	}

	/// <summary>
	/// Converts milliseconds to seconds.
	/// </summary>
	/// <returns>The milliseconds to seconds.</returns>
	/// <param name="source">Source.</param>
	public static double ConvertMillisecondsToSeconds (double source)
	{
		return (TimeSpan.FromMilliseconds (source).TotalSeconds);
	}

	/// <summary>
	/// Converts the milliseconds to seconds.
	/// </summary>
	/// <returns>The milliseconds to seconds.</returns>
	/// <param name="source">Source.</param>
	public static float ConvertMillisecondsToSeconds (float source)
	{
		return ((float)TimeSpan.FromMilliseconds (source).TotalSeconds);
	}
	
	/// <summary>
	/// Clone the specified target.
	/// </summary>
	/// <param name="target">Target.</param>
	public static Vector3 Clone (this Vector3 target)
	{
		return(new Vector3 (target.x, target.y, target.z));
	}
	
	/// <summary>
	/// Modify the specified target, x, y and z.
	/// </summary>
	/// <param name="target">Target.</param>
	/// <param name="x">The x coordinate.</param>
	/// <param name="y">The y coordinate.</param>
	/// <param name="z">The z coordinate.</param>
	public static Vector3 Modify(this Vector3 target, Nullable<float> x = null, Nullable<float> y = null, Nullable<float> z = null) 
	{
		return(new Vector3(x.HasValue ? x.Value : target.x, y.HasValue ? y.Value : target.y, z.HasValue ? z.Value : target.z));
	}
	
	/// <summary>
	/// Clone the specified target.
	/// </summary>
	/// <param name="target">Target.</param>
	public static Quaternion Clone(this Quaternion target)
	{
		return(new Quaternion(target.x, target.y, target.z, target.w));
	}
	
	/// <summary>
	/// Applies an action to each element.
	/// Uses a standard for loop for speed.
	/// </summary>
	/// <param name="target">Target.</param>
	/// <param name="action">Action.</param>
	/// <typeparam name="T">The 1st type parameter.</typeparam>
	public static void ForEachAction<T>(this IEnumerable<T> target, Action<T> action)
	{
		for(int i=0; i < target.Count(); i++)
		{
			action(target.ElementAt(i));
		}
	}
}

