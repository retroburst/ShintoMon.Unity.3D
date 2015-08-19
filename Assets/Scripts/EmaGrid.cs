using UnityEngine;
using System.Collections;

public class EmaGrid : MonoBehaviour
{
	public InscriptionGenerator InscriptionGenerator = null;
	public GameObject emaPrefab = null;
	public Vector2 emaGridMaxPosition = new Vector2 (7.0f, 17.0f);
	public Vector2 emaGridMinPosition = new Vector2 (-7.0f, 5.5f);
	public float emaGridXAxisStep = 1f;
	public float emaGridYAxisStep = 1.5f;
	private GameObjectPool emaGameObjectPool = null;

	private void Awake()
	{
		emaGameObjectPool = new GameObjectPool (emaPrefab, 75);
	}

	public void LayoutEmaGrid (int rows, int columns)
	{
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
				pooledEma.transform.FindChild("Inscription").GetComponent<TextMesh> ().text = InscriptionGenerator.GenerateRandomInscription ();
				pooledEma.SetActive(true);
			}
		}
	}
	

}
