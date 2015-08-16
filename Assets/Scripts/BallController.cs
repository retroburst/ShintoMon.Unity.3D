using UnityEngine;
using System.Collections;

public class BallController : MonoBehaviour {
	public float initialVelocity = 600f;
	private bool inPlay = false;
	private Rigidbody rb = null;
	
	// Use this for initialization
	private void Awake () {
		rb = GetComponent<Rigidbody>();
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetButtonDown("Fire1") && !inPlay){
			transform.parent = null;
			inPlay = true;
			rb.isKinematic = false;
			rb.AddForce(new Vector3(Random.Range(-initialVelocity, initialVelocity), initialVelocity, 0f));
		}
	}
	
	void OnCollisionEnter(Collision collision)
	{
		if(collision.gameObject.tag == Constants.GAME_OBJECT_TAG_EMA)
		{
			GameObject.Destroy(collision.gameObject);
		}
	}
}
