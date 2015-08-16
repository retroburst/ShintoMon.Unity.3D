using UnityEngine;
using System.Collections;

public class PaddleController : MonoBehaviour {
	public float paddleSpeed = 1;
	public float minHorizontalClamp = -8f;
	public float maxHorizontalClamp = 8f;
	private Vector3 playerPosition = Vector3.zero;
	
	// Update is called once per frame
	private void Update () {
		playerPosition = transform.position;
		float xPosition = transform.position.x + Input.GetAxis("Horizontal") * paddleSpeed;
		playerPosition = new Vector3(Mathf.Clamp(xPosition, minHorizontalClamp, maxHorizontalClamp), playerPosition.y, playerPosition.z);
		transform.position = playerPosition;
	}
}
