using UnityEngine;
using System;
using System.Collections;

/// <summary>
/// Represents a game level.
/// </summary>
[Serializable]
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
	/// Gets or sets the additive ball scale.
	/// </summary>
	/// <value>The ball scale.</value>
	public SerializableVector3 BallAdditiveScale { get; protected set; }
	
	/// <summary>
	/// Gets or sets the additive paddle scale.
	/// </summary>
	/// <value>The paddle scale.</value>
	public SerializableVector3 PaddleAdditiveScale { get; protected set; }
	
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
	[NonSerialized]
	public static readonly GameLevel[] GameLevels = new GameLevel[]{ 
														new GameLevel1(), 
														new GameLevel2(), 
														new GameLevel3(), 
														new GameLevel4(),
														new GameLevel5(),
														new GameLevel6(),
														new GameLevel7(),
														new GameLevel8(),
														new GameLevel9(),
														new GameLevel10()								
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
			if(emaInLayout != Constants.EMA_TYPE_NONE) result++;
		}
		return(result);
	}
}

// max rows = 8 at the moment
// max columns = 15 at the moment

/// <summary>
/// Game level 1.
/// </summary>
[Serializable]
public class GameLevel1 : GameLevel
{
	public GameLevel1()
	{
		LevelDesignation = 1;
		Layout	= new int[,]
		{ 
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 0 },
			{ 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }, 
			{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 }, 
			{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
		};
		BallVelocity = 500.00f;
		BallAdditiveScale = new SerializableVector3(1.0f, 1.0f, 1.0f);
		BallCount = 10;
		PaddleAdditiveScale = new SerializableVector3(3.0f, 0f, 0f);
		PaddleSpeed = 1.0f;
		EmaCount = CountEmaInLayout();
	}
}

/// <summary>
/// Game level 2.
/// </summary>
[Serializable]
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
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
		};
		BallVelocity = 600.00f;
		BallAdditiveScale = new SerializableVector3(0.5f, 0.5f, 0.5f);
		BallCount = 10;
		PaddleAdditiveScale = new SerializableVector3(2.0f, 0f, 0f);
		PaddleSpeed = 1.0f;
		EmaCount = CountEmaInLayout();
	}
}

/// <summary>
/// Game level 3.
/// </summary>
[Serializable]
public class GameLevel3 : GameLevel
{
	public GameLevel3()
	{
		LevelDesignation = 3;
		Layout	= new int[,]
		{ 
			{ 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, 
			{ 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0 },
			{ 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0 }, 
			{ 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0 }, 
			{ 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
		};
		BallVelocity = 610.00f;
		BallAdditiveScale = new SerializableVector3(0.25f, 0.25f, 0.25f);
		BallCount = 10;
		PaddleAdditiveScale = new SerializableVector3(1.0f, 0f, 0f);
		PaddleSpeed = 1.0f;
		EmaCount = CountEmaInLayout();
	}
}

/// <summary>
/// Game level 4.
/// </summary>
[Serializable]
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
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
		};
		BallVelocity = 615.00f;
		BallAdditiveScale = new SerializableVector3(0.0f, 0.0f, 0.0f);
		BallCount = 10;
		PaddleAdditiveScale = new SerializableVector3(0.0f, 0.0f, 0.0f);
		PaddleSpeed = 1.0f;
		EmaCount = CountEmaInLayout();
	}
}

/// <summary>
/// Game level 5.
/// </summary>
[Serializable]
public class GameLevel5 : GameLevel
{
	public GameLevel5()
	{
		LevelDesignation = 5;
		Layout	= new int[,]
		{ 
			{ 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, 
			{ 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0 },
			{ 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0 }, 
			{ 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0 }, 
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 },
			{ 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 },
			{ 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1 }
		};
		BallVelocity = 615.00f;
		BallAdditiveScale = new SerializableVector3(0.0f, 0.0f, 0.0f);
		BallCount = 10;
		PaddleAdditiveScale = new SerializableVector3(0.0f, 0.0f, 0.0f);
		PaddleSpeed = 1.0f;
		EmaCount = CountEmaInLayout();
	}
}

/// <summary>
/// Game level 6.
/// </summary>
[Serializable]
public class GameLevel6 : GameLevel
{
	public GameLevel6()
	{
		LevelDesignation = 6;
		Layout	= new int[,]
		{ 
			{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 },
			{ 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 },
			{ 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 },
			{ 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 },
			{ 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 }
		};
		BallVelocity = 615.00f;
		BallAdditiveScale = new SerializableVector3(-0.25f, -0.25f, -0.25f);
		BallCount = 10;
		PaddleAdditiveScale = new SerializableVector3(-0.5f, 0.0f, 0.0f);
		PaddleSpeed = 1.0f;
		EmaCount = CountEmaInLayout();
	}
}

/// <summary>
/// Game level 7.
/// </summary>
[Serializable]
public class GameLevel7 : GameLevel
{
	public GameLevel7()
	{
		LevelDesignation = 7;
		Layout	= new int[,]
		{ 
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 },
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 }, 
			{ 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0 },
			{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
			{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
			{ 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1 }
		};
		BallVelocity = 620.00f;
		BallAdditiveScale = new SerializableVector3(0.0f, 0.0f, 0.0f);
		BallCount = 10;
		PaddleAdditiveScale = new SerializableVector3(0.0f, 0.0f, 0.0f);
		PaddleSpeed = 1.0f;
		EmaCount = CountEmaInLayout();
	}
}


/// <summary>
/// Game level 8.
/// </summary>
[Serializable]
public class GameLevel8 : GameLevel
{
	public GameLevel8()
	{
		LevelDesignation = 8;
		Layout	= new int[,]
		{ 
			{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
		};
		BallVelocity = 620.00f;
		BallAdditiveScale = new SerializableVector3(0.0f, 0.0f, 0.0f);
		BallCount = 15;
		PaddleAdditiveScale = new SerializableVector3(0.0f, 0.0f, 0.0f);
		PaddleSpeed = 1.0f;
		EmaCount = CountEmaInLayout();
	}
}

/// <summary>
/// Game level 9.
/// </summary>
[Serializable]
public class GameLevel9 : GameLevel
{
	public GameLevel9()
	{
		LevelDesignation = 9;
		Layout	= new int[,]
		{ 
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 },  
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 }
		};
		BallVelocity = 620.00f;
		BallAdditiveScale = new SerializableVector3(0.0f, 0.0f, 0.0f);
		BallCount = 15;
		PaddleAdditiveScale = new SerializableVector3(0.0f, 0.0f, 0.0f);
		PaddleSpeed = 1.0f;
		EmaCount = CountEmaInLayout();
	}
}

/// <summary>
/// Game level 10.
/// </summary>
[Serializable]
public class GameLevel10 : GameLevel
{
	public GameLevel10()
	{
		LevelDesignation = 10;
		Layout	= new int[,]
		{ 
			{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, 
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },  
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, 
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 }, 
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 }, 
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
		};
		BallVelocity = 700.00f;
		BallAdditiveScale = new SerializableVector3(2.0f, 2.0f, 2.0f);
		BallCount = 25;
		PaddleAdditiveScale = new SerializableVector3(-1.0f, 0.0f, 0.0f);
		PaddleSpeed = 1.0f;
		EmaCount = CountEmaInLayout();
	}
}