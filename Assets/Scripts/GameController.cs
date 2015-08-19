using UnityEngine;
using System.Collections;
using System.Text;

public class GameController : MonoBehaviour {
	public EmaGrid emaGrid = null; 

	
	

	
	// Use this for initialization
	void Start () {
		// max rows = 8 at the moment
		// max columns = 15 at the moment
		emaGrid.LayoutEmaGrid(5, 15);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	
		
	
	
}
