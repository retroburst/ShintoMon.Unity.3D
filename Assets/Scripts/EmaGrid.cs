using UnityEngine;
using System.Collections;

public class EmaGrid : MonoBehaviour
{
	/// <summary>
	/// Hanles the awake event.
	/// </summary>
	private void Awake()
	{

	}
	
	/// <summary>
	/// Layouts the ema grid.
	/// </summary>
	/// <param name="rows">Rows.</param>
	/// <param name="columns">Columns.</param>
	public void LayoutEmaGrid (int rows, int columns)
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
				
				GameObject pooledEma = (GameObject)emaGameObjectPool.Take (new Vector3 (xPosition, yPosition, 0.0f), Quaternion.identity);
				pooledEma.transform.FindChild("Inscription").GetComponent<TextMesh> ().text = inscriptionGenerator.GenerateRandomInscription ();
				pooledEma.SetActive(true);
			}
		}
	}
	

}
