using UnityEngine;
using System.Collections;

/// <summary>
/// Represents a game level.
/// </summary>
public class GameLevel
{
	/// <summary>
	/// Gets or sets the level designation.
	/// </summary>
	/// <value>The level designation.</value>
	public int LevelDesignation { get; protected set; }
	
	/// <summary>
	/// Gets or sets the layout.
	/// </summary>
	/// <value>The layout.</value>
	public int[,] Layout { get; protected set; }

	/// <summary>
	/// Gets or sets the ball scale.
	/// </summary>
	/// <value>The ball scale.</value>
	public Vector3 BallScale { get; protected set; }
	
	/// <summary>
	/// Gets or sets the paddle scale.
	/// </summary>
	/// <value>The paddle scale.</value>
	public Vector3 PaddleScale { get; protected set; }
	
	/// <summary>
	/// Gets or sets the paddle speed.
	/// </summary>
	/// <value>The paddle speed.</value>
	public float PaddleSpeed { get; protected set; }
	
	/// <summary>
	/// Gets or sets the ball count.
	/// </summary>
	/// <value>The ball count.</value>
	public int BallCount { get; protected set; }
	
	/// <summary>
	/// Gets or sets the ema count.
	/// </summary>
	/// <value>The ema count.</value>
	public int EmaCount { get; protected set; }
	
	/// <summary>
	/// Gets or sets the ball velocity.
	/// </summary>
	/// <value>The ball velocity.</value>
	public float BallVelocity { get; protected set; }
	
	/// <summary>
	/// The game levels.
	/// </summary>
	public static readonly GameLevel[] GameLevels = new GameLevel[]{ 
														new GameLevel1(), 
														new GameLevel2(), 
														new GameLevel3(), 
														new GameLevel4(),
														
														};
	
	/// <summary>
	/// Counts the ema in layout.
	/// </summary>
	/// <returns>The ema in layout.</returns>
	protected int CountEmaInLayout()
	{
		int result = 0;
		foreach(int emaInLayout in Layout)
		{
			if(emaInLayout == 1) result++;
		}
		return(result);
	}
}

// max rows = 8 at the moment
// max columns = 15 at the moment

/// <summary>
/// Game level 1.
/// </summary>
public class GameLevel1 : GameLevel
{
	public GameLevel1()
	{
		LevelDesignation = 1;
		Layout	= new int[,]
		{ 
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
			{ 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }, 
			{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 }, 
			{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
		};
		BallVelocity = 500.00f;
		BallScale = new Vector3(1.0f, 1.0f, 1.0f);
		BallCount = 10;
		PaddleScale = new Vector3(3.0f, 0f, 0f);
		PaddleSpeed = 1.0f;
		EmaCount = CountEmaInLayout();
	}
}

/// <summary>
/// Game level 2.
/// </summary>
public class GameLevel2 : GameLevel
{
	public GameLevel2()
	{
		LevelDesignation = 2;
		Layout	= new int[,]
		{ 
			{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1 },
			{ 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 }, 
			{ 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 }, 
			{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		};
		BallVelocity = 600.00f;
		BallScale = new Vector3(0.5f, 0.5f, 0.5f);
		BallCount = 10;
		PaddleScale = new Vector3(2.0f, 0f, 0f);
		PaddleSpeed = 1.0f;
		EmaCount = CountEmaInLayout();
	}
}

/// <summary>
/// Game level 3.
/// </summary>
public class GameLevel3 : GameLevel
{
	public GameLevel3()
	{
		LevelDesignation = 3;
		Layout	= new int[,]
		{ 
			{ 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, 
			{ 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0 },
			{ 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0 }, 
			{ 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0 }, 
			{ 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 },
		};
		BallVelocity = 610.00f;
		BallScale = new Vector3(0.25f, 0.25f, 0.25f);
		BallCount = 10;
		PaddleScale = new Vector3(1.0f, 0f, 0f);
		PaddleSpeed = 1.0f;
		EmaCount = CountEmaInLayout();
	}
}

/// <summary>
/// Game level 4.
/// </summary>
public class GameLevel4 : GameLevel
{
	public GameLevel4()
	{
		LevelDesignation = 4;
		Layout	= new int[,]
		{ 
			{ 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, 
			{ 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0 },
			{ 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0 }, 
			{ 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0 }, 
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 },
		};
		BallVelocity = 615.00f;
		BallScale = new Vector3(0.0f, 0.0f, 0.0f);
		BallCount = 10;
		PaddleScale = new Vector3(0.0f, 0.0f, 0.0f);
		PaddleSpeed = 1.0f;
		EmaCount = CountEmaInLayout();
	}
}