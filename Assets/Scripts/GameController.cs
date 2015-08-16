using UnityEngine;
using System.Collections;
using System.Text;

public class GameController : MonoBehaviour {
	public GameObject enaPrefab = null;
	public Vector2 enaGridMaxPosition = new Vector2(7.0f, 17.0f);
	public Vector2 enaGridMinPosition = new Vector2(-7.0f, 5.5f);
	public float enaGridXAxisStep = 1f;
	public float enaGridYAxisStep = 1.5f;
	public string[] inscriptionKanji = null;
	public int inscriptionRows = 3;
	public int inscriptionColumns = 2;
	
	// Use this for initialization
	void Start () {
		// max rows = 8 at the moment
		// max columns = 15 at the moment
		LayoutEnaGrid(5, 15);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	
	private void LayoutEnaGrid(int rows, int columns){
		Vector2 startPosition = new Vector2(enaGridMinPosition.x, enaGridMaxPosition.y);
		for(int row=0; row < rows; row++)
		{
			for(int column=0; column < columns; column++)
			{
				float xPosition = startPosition.x + (enaGridXAxisStep * column);
				float yPosition = startPosition.y - (enaGridYAxisStep * row);
				
				if(xPosition > enaGridMaxPosition.x || xPosition < enaGridMinPosition.x)
				{
					Debug.LogWarningFormat("GameController->LayoutEnaGrid Calculated x position out of bounds, x calculated was [{0}].", xPosition);
					continue;
				}
				if(yPosition > enaGridMaxPosition.y || yPosition < enaGridMinPosition.y)
				{
					Debug.LogWarningFormat("GameController->LayoutEnaGrid Calculated y position out of bounds, y calculated was [{0}].", yPosition);
					continue;
				}
				
				GameObject newEma = (GameObject)GameObject.Instantiate(enaPrefab, new Vector3(xPosition, yPosition, 0.0f), Quaternion.identity);
				newEma.GetComponentInChildren<TextMesh>().text = GenerateInscription(inscriptionRows, inscriptionColumns);
			}
		}
	}
	
	private string GenerateInscription(int inscriptionRows, int inscriptionColumns)
	{
		StringBuilder result = new StringBuilder();
		int maxKanji = inscriptionRows * inscriptionColumns;
		int numberOfKanji = Random.Range(maxKanji - 2, maxKanji);
		string[] randomKanji = new string[numberOfKanji];
		for(int i=0; i < randomKanji.Length; i++){ randomKanji[i] = inscriptionKanji[Random.Range(0, inscriptionKanji.Length)];  }
		for(int row=0; row < inscriptionRows; row++)
		{
			result.AppendLine(string.Format("{0}{1}", GetArrayElementSafe(randomKanji, row), GetArrayElementSafe(randomKanji, inscriptionRows + row)));
		}
		return(result.ToString());
	}
	
	private string GetArrayElementSafe(string[] target, int index)
	{
		if(index >= 0 && index < target.Length)
		{
			return(target[index]);
		}
		else
		{
			return(string.Empty);
		}
	}
	
}
