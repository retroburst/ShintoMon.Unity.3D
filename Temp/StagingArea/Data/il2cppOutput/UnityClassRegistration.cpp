struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

}

void RegisterAllClasses()
{
	//Total: 84 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//6. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//7. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//8. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//9. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//10. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//11. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//12. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//13. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//14. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//15. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//16. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//17. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//18. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//19. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//20. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//21. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//22. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//23. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//24. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//25. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//26. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//27. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//28. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//29. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//30. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//31. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//32. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//33. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//34. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//35. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//36. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//37. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//38. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//39. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//40. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//41. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//42. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//43. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//44. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//45. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//46. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//47. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//48. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//49. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//50. CloudServiceHandlerBehaviour
	void RegisterClass_CloudServiceHandlerBehaviour();
	RegisterClass_CloudServiceHandlerBehaviour();

	//51. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//52. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//53. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//54. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//55. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//56. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//57. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//58. HaloManager
	void RegisterClass_HaloManager();
	RegisterClass_HaloManager();

	//59. PhysicMaterial
	void RegisterClass_PhysicMaterial();
	RegisterClass_PhysicMaterial();

	//60. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//61. TerrainCollider
	void RegisterClass_TerrainCollider();
	RegisterClass_TerrainCollider();

	//62. TerrainData
	void RegisterClass_TerrainData();
	RegisterClass_TerrainData();

	//63. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//64. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//65. Terrain
	void RegisterClass_Terrain();
	RegisterClass_Terrain();

	//66. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//67. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//68. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//69. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//70. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//71. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//72. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//73. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//74. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//75. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//76. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//77. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//78. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//79. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//80. NetworkManager
	//Skipping

	//81. MasterServerInterface
	//Skipping

	//82. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//83. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

}
