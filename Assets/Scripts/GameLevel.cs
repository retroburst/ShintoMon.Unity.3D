using UnityEngine;
using System.Collections;

public class GameLevel
{
	public int LevelDesignation { get; protected set; }
	
	public bool[,] Layout { get; protected set; }

	public Vector3 BallScale { get; protected set; }
	
	public int BallCount { get; protected set; }
	
	public int EmaCount { get; protected set; }
	
	public float BallVelocity {get; protected set; }
	
	public static readonly GameLevel[] GameLevels = new GameLevel[]{ new GameLevel1(), new GameLevel2() };
	
	/// <summary>
	/// Counts the ema in layout.
	/// </summary>
	/// <returns>The ema in layout.</returns>
	protected int CountEmaInLayout()
	{
		int result = 0;
		foreach(bool hasEma in Layout)
		{
			if(hasEma) result++;
		}
		return(result);
	}
}

// max rows = 8 at the moment
// max columns = 15 at the moment

public class GameLevel1 : GameLevel
{
	public GameLevel1()
	{
		LevelDesignation = 1;
		Layout	= new bool[,]
		{ 
			{ false, false, false, false, false, false, false, false, false, false, false, false, false, false, false },
			{ false, true, true, true, true, true, true, true, true, true, true, true, true, true, false },
			{ false, true, true, true, true, true, true, true, true, true, true, true, true, true, false }, 
			{ false, true, false, false, false, false, false, false, false, false, false, false, false, true, false }, 
			{ false, true, false, false, false, false, false, false, false, false, false, false, false, true, false },
		};
		BallVelocity = 500.00f;
		BallScale = Vector3.zero;
		BallCount = 10;
		EmaCount = CountEmaInLayout();
	}
}

public class GameLevel2 : GameLevel
{
	public GameLevel2()
	{
		LevelDesignation = 2;
		Layout	= new bool[,]
		{ 
			{ true, true, true, true, true, true, true, true, true, true, true, true, true, true, true }, 
			{ true, true, true, true, false, false, false, false, false, false, false, true, true, true, true },
			{ true, true, true, false, false, false, false, false, false, false, false, false, true, true, true }, 
			{ true, true, false, false, false, false, false, false, false, false, false, false, false, true, true }, 
			{ true, false, false, false, false, false, false, false, false, false, false, false, false, false, true },
		};
		BallVelocity = 600.00f;
		BallScale = new Vector3(0.1f, 0.6f, 0f);
		BallCount = 20;
		EmaCount = CountEmaInLayout();
	}
}