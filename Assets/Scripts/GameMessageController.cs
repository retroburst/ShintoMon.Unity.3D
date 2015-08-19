using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

/// <summary>
/// Game message controller.
/// </summary>
public class GameMessageController {
	private List<Text> gameMessageSlots = null;
	private List<GameMessage> gameMessages = null;
	private Queue<GameMessage> waitingGameMessages = null;
	private float gameMessageVisibleTime = 0.5f;

	/// <summary>
	/// Initializes a new instance of the <see cref="GameMessageController"/> class.
	/// </summary>
	/// <param name="gameMessageUISlots">Game message user interface slots.</param>
	/// <param name="messageVisibleTime">Message visible time.</param>
	public GameMessageController(List<Text> gameMessageUISlots, float messageVisibleTime)
	{
		gameMessageVisibleTime = messageVisibleTime;
		gameMessageSlots = gameMessageUISlots;
		gameMessages = new List<GameMessage>();
		waitingGameMessages = new Queue<GameMessage>();
	}

	/// <summary>
	/// Displaies the messages.
	/// </summary>
	/// <param name="messages">Messages.</param>
	public void DisplayMessages(List<string> messages)
	{
		ExpireOldMessages();
		AddNewMessagesToWaitingQueue(messages);
		AddWaitingMessages();
		DisplayMessages ();
	}

	/// <summary>
	/// Expires the old messages.
	/// </summary>
	private void ExpireOldMessages ()
	{
		// expire any old messages
		GameMessage[] expired = gameMessages.Where(x => x.MessageExpiresAt <= Time.time).ToArray();
		gameMessages.RemoveAll(x => expired.Contains(x));
	}

	/// <summary>
	/// Adds the new messages to waiting queue.
	/// </summary>
	/// <param name="messages">Messages.</param>
	private void AddNewMessagesToWaitingQueue (List<string> messages)
	{
		foreach(string message in messages)
		{
			GameMessage newMessage = new GameMessage();
			newMessage.Message = message;
			waitingGameMessages.Enqueue(newMessage);
		}
	}

	/// <summary>
	/// Adds any waiting messages.
	/// </summary>
	private void AddWaitingMessages ()
	{
		if(waitingGameMessages.Count > 0 && gameMessages.Count < gameMessageSlots.Count)
		{
			while(gameMessages.Count < gameMessageSlots.Count && waitingGameMessages.Count > 0)
			{
				GameMessage waitingMessage = waitingGameMessages.Dequeue();
				waitingMessage.MessageExpiresAt = Time.time + gameMessageVisibleTime;
				gameMessages.Add(waitingMessage);
			}
		}
	}

	/// <summary>
	/// Displays the messages.
	/// </summary>
	private void DisplayMessages()
	{
		for(int i=0; i < gameMessageSlots.Count; i++)
		{
			Text messageSlot = gameMessageSlots[i];
			if(i < gameMessages.Count)
			{
				messageSlot.text = gameMessages[i].Message;
			}
			else
			{
				messageSlot.text = string.Empty;
			}
		}
	}

}
