using UnityEngine;
using System.Collections;
using System.Text;

/// <summary>
/// Inscription generator.
/// </summary>
public class InscriptionGenerator
{
	public string[] inscriptionKanjiCharacters = null;
	public int inscriptionRows = 3;
	public int inscriptionColumns = 2;
	
	/// <summary>
	/// Initializes a new instance of the <see cref="InscriptionGenerator"/> class.
	/// </summary>
	/// <param name="inscriptionKanji">Inscription kanji.</param>
	public InscriptionGenerator(string[] inscriptionKanji)
	{
		inscriptionKanjiCharacters = inscriptionKanji;
	}
	
	/// <summary>
	/// Generates a random inscription.
	/// </summary>
	/// <returns>The random inscription.</returns>
	public string GenerateRandomInscription ()
	{
		return(GenerateRandomInscription (inscriptionRows, inscriptionColumns));
	}
	
	/// <summary>
	/// Generates a random inscription.
	/// </summary>
	/// <returns>The random inscription.</returns>
	/// <param name="inscriptionRows">Inscription rows.</param>
	/// <param name="inscriptionColumns">Inscription columns.</param>
	public string GenerateRandomInscription (int inscriptionRows, int inscriptionColumns)
	{
		StringBuilder result = new StringBuilder ();
		
		int maxKanjiCharacters = inscriptionRows * inscriptionColumns;
		int targetNumberKanjiCharacters = Random.Range (maxKanjiCharacters - 2, maxKanjiCharacters);
		
		string[,] randomKanji = new string[inscriptionRows, inscriptionColumns];
		FillWithRandomKanji (randomKanji, targetNumberKanjiCharacters);
		
		for (int row=0; row < inscriptionRows; row++) {
			for (int column=0; column < inscriptionColumns; column++) {
				result.Append (randomKanji [row, column]);
			}
			result.AppendLine ();
		}
		return(result.ToString ());
	}
	
	/// <summary>
	/// Fills with random kanji.
	/// </summary>
	/// <param name="target">Target.</param>
	/// <param name="totalKanji">Total kanji.</param>
	private void FillWithRandomKanji (string[,] target, int totalKanji)
	{
		int count = 0;
		for (int column=0; column <= target.GetUpperBound(1); column++) {
			for (int row=0; row <= target.GetUpperBound(0); row++) {

				if (count >= totalKanji) {
					target [row, column] = string.Empty;
				} else {
					target [row, column] = inscriptionKanjiCharacters [Random.Range (0, inscriptionKanjiCharacters.Length)];
				}
				count++;
			}
		}
	}
	
}
