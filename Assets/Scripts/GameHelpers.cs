using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/// <summary>
/// Helper methods for game logic and views.
/// </summary>
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

}

