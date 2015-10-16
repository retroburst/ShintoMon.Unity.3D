#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t1072_TI;
#include "t1072.h"
#include "t1072MD.h"
extern MethodInfo m4662_MI;
extern TypeInfo t198_TI;
#include "t198.h"
#include "t198MD.h"
extern MethodInfo m683_MI;
extern MethodInfo m684_MI;
extern TypeInfo t328_TI;
#include "t328.h"
#include "t328MD.h"
extern MethodInfo m1204_MI;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1072 * tmp;
		tmp = (t1072 *)il2cpp_codegen_object_new (&t1072_TI);
		m4662(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), &m4662_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1072 * tmp;
		tmp = (t1072 *)il2cpp_codegen_object_new (&t1072_TI);
		m4662(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), &m4662_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1072 * tmp;
		tmp = (t1072 *)il2cpp_codegen_object_new (&t1072_TI);
		m4662(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), &m4662_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1072 * tmp;
		tmp = (t1072 *)il2cpp_codegen_object_new (&t1072_TI);
		m4662(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), &m4662_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1072 * tmp;
		tmp = (t1072 *)il2cpp_codegen_object_new (&t1072_TI);
		m4662(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), &m4662_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t1072 * tmp;
		tmp = (t1072 *)il2cpp_codegen_object_new (&t1072_TI);
		m4662(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), &m4662_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t1072 * tmp;
		tmp = (t1072 *)il2cpp_codegen_object_new (&t1072_TI);
		m4662(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), &m4662_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t1072 * tmp;
		tmp = (t1072 *)il2cpp_codegen_object_new (&t1072_TI);
		m4662(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), &m4662_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t1072 * tmp;
		tmp = (t1072 *)il2cpp_codegen_object_new (&t1072_TI);
		m4662(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), &m4662_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t198 * tmp;
		tmp = (t198 *)il2cpp_codegen_object_new (&t198_TI);
		m683(tmp, &m683_MI);
		m684(tmp, true, &m684_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t328 * tmp;
		tmp = (t328 *)il2cpp_codegen_object_new (&t328_TI);
		m1204(tmp, &m1204_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t1072 * tmp;
		tmp = (t1072 *)il2cpp_codegen_object_new (&t1072_TI);
		m4662(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), &m4662_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		t1072 * tmp;
		tmp = (t1072 *)il2cpp_codegen_object_new (&t1072_TI);
		m4662(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), &m4662_MI);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		t1072 * tmp;
		tmp = (t1072 *)il2cpp_codegen_object_new (&t1072_TI);
		m4662(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), &m4662_MI);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		t1072 * tmp;
		tmp = (t1072 *)il2cpp_codegen_object_new (&t1072_TI);
		m4662(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), &m4662_MI);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		t1072 * tmp;
		tmp = (t1072 *)il2cpp_codegen_object_new (&t1072_TI);
		m4662(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), &m4662_MI);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_Assembly__CustomAttributeCache = {
16,
NULL,
&g_UnityEngine_Assembly_CustomAttributesCacheGenerator
};
