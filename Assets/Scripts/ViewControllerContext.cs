using UnityEngine;
using System.Collections;

public class ViewControllerContext
{
	public ConfigurableSettings ConfigurableSettings { get; set; }

	public Prefabs Prefabs { get; set; }

	public Components Components { get; set; }

	public UIComponents UIComponents { get; set; }
	
	public GameMessageController GameMessageController { get; set; }
}
