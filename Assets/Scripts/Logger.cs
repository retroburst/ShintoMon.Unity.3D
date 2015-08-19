using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// Wraps the Unity debug logger
/// and based on configuration
/// writes log messages conditionally.
/// </summary>
public static class Logger
{
	/// <summary>
	/// Log the specified message.
	/// </summary>
	/// <param name="message">Message.</param>
	public static void Log (object message)
	{
		if (Debug.isDebugBuild)
			Debug.Log (message);
	}
	
	/// <summary>
	/// Log the specified message and context.
	/// </summary>
	/// <param name="message">Message.</param>
	/// <param name="context">Context.</param>
	public static void Log (object message, UnityEngine.Object context)
	{
		if (Debug.isDebugBuild)
			Debug.Log (message, context);
	}
	
	/// <summary>
	/// Logs the error.
	/// </summary>
	/// <param name="message">Message.</param>
	/// <param name="context">Context.</param>
	public static void LogError (object message, UnityEngine.Object context)
	{
		if (Debug.isDebugBuild)
			Debug.LogError (message, context);
	}
	
	/// <summary>
	/// Logs the error.
	/// </summary>
	/// <param name="message">Message.</param>
	public static void LogError (object message)
	{
		if (Debug.isDebugBuild)
			Debug.LogError (message);
	}
	
	/// <summary>
	/// Logs the error in format.
	/// </summary>
	/// <param name="format">Format.</param>
	/// <param name="args">Arguments.</param>
	public static void LogErrorFormat (string format, params object[] args)
	{
		if (Debug.isDebugBuild)
			Debug.LogErrorFormat (format, args);
	}
	
	/// <summary>
	/// Logs the error format.
	/// </summary>
	/// <param name="context">Context.</param>
	/// <param name="format">Format.</param>
	/// <param name="args">Arguments.</param>
	public static void LogErrorFormat (UnityEngine.Object context, string format, params object[] args)
	{
		if (Debug.isDebugBuild)
			Debug.LogErrorFormat (context, format, args);
	}
	
	/// <summary>
	/// Logs the exception.
	/// </summary>
	/// <param name="exception">Exception.</param>
	/// <param name="context">Context.</param>
	public static void LogException (Exception exception, UnityEngine.Object context)
	{
		if (Debug.isDebugBuild)
			Debug.LogException (exception, context);
	}
	
	/// <summary>
	/// Logs the exception.
	/// </summary>
	/// <param name="exception">Exception.</param>
	public static void LogException (Exception exception)
	{
		if (Debug.isDebugBuild)
			Debug.LogException (exception);
	}
	
	/// <summary>
	/// Logs in the specified format.
	/// </summary>
	/// <param name="context">Context.</param>
	/// <param name="format">Format.</param>
	/// <param name="args">Arguments.</param>
	public static void LogFormat (UnityEngine.Object context, string format, params object[] args)
	{
		if (Debug.isDebugBuild)
			Debug.LogFormat (context, format, args);
	}
	
	/// <summary>
	/// Logs in the specified format.
	/// </summary>
	/// <param name="format">Format.</param>
	/// <param name="args">Arguments.</param>
	public static void LogFormat (string format, params object[] args)
	{
		if (Debug.isDebugBuild)
			Debug.LogFormat (format, args);
	}
	
	/// <summary>
	/// Logs the warning.
	/// </summary>
	/// <param name="message">Message.</param>
	public static void LogWarning (object message)
	{
		if (Debug.isDebugBuild)
			Debug.LogWarning (message);
	}
	
	/// <summary>
	/// Logs the warning.
	/// </summary>
	/// <param name="message">Message.</param>
	/// <param name="context">Context.</param>
	public static void LogWarning (object message, UnityEngine.Object context)
	{
		if (Debug.isDebugBuild)
			Debug.LogWarning (message, context);
	}
	
	/// <summary>
	/// Logs the warning in format.
	/// </summary>
	/// <param name="format">Format.</param>
	/// <param name="args">Arguments.</param>
	public static void LogWarningFormat (string format, params object[] args)
	{
		if (Debug.isDebugBuild)
			Debug.LogWarningFormat (format, args);
	}
	
	/// <summary>
	/// Logs the warning in format.
	/// </summary>
	/// <param name="context">Context.</param>
	/// <param name="format">Format.</param>
	/// <param name="args">Arguments.</param>
	public static void LogWarningFormat (UnityEngine.Object context, string format, params object[] args)
	{
		if (Debug.isDebugBuild)
			Debug.LogWarningFormat (context, format, args);
	}
	
}
