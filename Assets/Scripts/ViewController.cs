using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ViewController
{	
	private ViewControllerContext context = null;
	private Vector3 originalBallScale = Vector3.zero;
	public List<string> Messages { get; private set; }
	
	/// <summary>
	/// Initializes a new instance of the <see cref="ViewController"/> class.
	/// </summary>
	/// <param name="viewControllerContext">View controller context.</param>
	public ViewController(ViewControllerContext viewControllerContext)
	{
		Messages = new List<string>();
		context = viewControllerContext;
		originalBallScale = context.Components.Ball.transform.localScale.Clone ();
	}

	/// <summary>
	/// Updates the view for new level.
	/// </summary>
	/// <param name="level">Level.</param>
	public void UpdateViewForNewLevel(GameLevel level)
	{
		LayoutEmaGrid(level.Layout);
		context.Components.Ball.transform.localScale = originalBallScale;
		context.Components.Ball.transform.localScale += level.BallScale;
		context.UIComponents.LevelText.text = string.Format(context.ConfigurableSettings.MessageLevelPattern, level.LevelDesignation);
		context.UIComponents.ScoreText.text = string.Format(context.ConfigurableSettings.MessageScorePattern, 0, level.EmaCount);
		context.UIComponents.BallsText.text = string.Format(context.ConfigurableSettings.MessageBallPattern, level.BallCount, level.BallCount);
	}
	
	/// <summary>
	/// Updates the view.
	/// </summary>
	/// <param name="state">State.</param>
	public void UpdateView(GameState state, GameLevel level)
	{
		context.GameMessageController.DisplayMessages(Messages);
		context.UIComponents.ScoreText.text = string.Format(context.ConfigurableSettings.MessageScorePattern, state.EmaCollected, level.EmaCount);
		context.UIComponents.BallsText.text = string.Format(context.ConfigurableSettings.MessageBallPattern, state.BallsRemaining, level.BallCount);
		
		Messages.Clear();
	}

	/// <summary>
	/// Layouts the ema grid.
	/// </summary>
	/// <param name="rows">Rows.</param>
	/// <param name="columns">Columns.</param>
	private void LayoutEmaGrid (int rows, int columns)
	{
		PerformLayout(rows, columns, null);
	}
	
	/// <summary>
	/// Lays out the ema grid.
	/// </summary>
	/// <param name="layout">Layout.</param>
	private void LayoutEmaGrid (bool[,] layout)
	{
		int rows = layout.GetLength(0);
		int columns = layout.GetLength(1);
		PerformLayout(rows, columns, layout);
	}
	
	/// <summary>
	/// Lays out the ema grid.
	/// </summary>
	/// <param name="layout">Layout.</param>
	private void PerformLayout (int rows, int columns, bool[,] layout)
	{
		GameObjectPool emaGameObjectPool = GameController.Instance.GameObjectPoolManager.GetPool(GameController.Instance.Prefabs.EmaPrefab);
		Vector2 emaGridMaxPosition = GameController.Instance.ConfigurableSettings.EmaGridMaxPosition;
		Vector2 emaGridMinPosition = GameController.Instance.ConfigurableSettings.EmaGridMinPosition;
		float emaGridXAxisStep = GameController.Instance.ConfigurableSettings.EmaGridXAxisStep;
		float emaGridYAxisStep = GameController.Instance.ConfigurableSettings.EmaGridYAxisStep;
		InscriptionGenerator inscriptionGenerator = GameController.Instance.InscriptionGenerator;

		Vector2 startPosition = new Vector2 (emaGridMinPosition.x, emaGridMaxPosition.y);
		for (int row=0; row < rows; row++) {
			for (int column=0; column < columns; column++) {
				float xPosition = startPosition.x + (emaGridXAxisStep * column);
				float yPosition = startPosition.y - (emaGridYAxisStep * row);
				
				if (xPosition > emaGridMaxPosition.x || xPosition < emaGridMinPosition.x) {
					Debug.LogWarningFormat ("GameController->LayoutemaGrid Calculated x position out of bounds, x calculated was [{0}].", xPosition);
					continue;
				}
				if (yPosition > emaGridMaxPosition.y || yPosition < emaGridMinPosition.y) {
					Debug.LogWarningFormat ("GameController->LayoutemaGrid Calculated y position out of bounds, y calculated was [{0}].", yPosition);
					continue;
				}
				
				if(layout == null || layout[row, column])
				{
					GameObject pooledEma = (GameObject)emaGameObjectPool.Take (new Vector3 (xPosition, yPosition, 0.0f), Quaternion.identity);
					pooledEma.transform.FindChild("Inscription").GetComponent<TextMesh> ().text = inscriptionGenerator.GenerateRandomInscription ();
					pooledEma.SetActive(true);
				}
			}
		}
	}

}
