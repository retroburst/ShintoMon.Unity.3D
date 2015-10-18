#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t1079_TI;
#include "t1079.h"
#include "t1079MD.h"
extern MethodInfo m4687_MI;
extern TypeInfo t198_TI;
#include "t198.h"
#include "t198MD.h"
extern MethodInfo m683_MI;
extern MethodInfo m684_MI;
extern TypeInfo t335_TI;
#include "t335.h"
#include "t335MD.h"
extern MethodInfo m1228_MI;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1079 * tmp;
		tmp = (t1079 *)il2cpp_codegen_object_new (&t1079_TI);
		m4687(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), &m4687_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1079 * tmp;
		tmp = (t1079 *)il2cpp_codegen_object_new (&t1079_TI);
		m4687(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), &m4687_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1079 * tmp;
		tmp = (t1079 *)il2cpp_codegen_object_new (&t1079_TI);
		m4687(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), &m4687_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1079 * tmp;
		tmp = (t1079 *)il2cpp_codegen_object_new (&t1079_TI);
		m4687(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), &m4687_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1079 * tmp;
		tmp = (t1079 *)il2cpp_codegen_object_new (&t1079_TI);
		m4687(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), &m4687_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t1079 * tmp;
		tmp = (t1079 *)il2cpp_codegen_object_new (&t1079_TI);
		m4687(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), &m4687_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t1079 * tmp;
		tmp = (t1079 *)il2cpp_codegen_object_new (&t1079_TI);
		m4687(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), &m4687_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t1079 * tmp;
		tmp = (t1079 *)il2cpp_codegen_object_new (&t1079_TI);
		m4687(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), &m4687_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t1079 * tmp;
		tmp = (t1079 *)il2cpp_codegen_object_new (&t1079_TI);
		m4687(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), &m4687_MI);
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
		t335 * tmp;
		tmp = (t335 *)il2cpp_codegen_object_new (&t335_TI);
		m1228(tmp, &m1228_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t1079 * tmp;
		tmp = (t1079 *)il2cpp_codegen_object_new (&t1079_TI);
		m4687(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), &m4687_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		t1079 * tmp;
		tmp = (t1079 *)il2cpp_codegen_object_new (&t1079_TI);
		m4687(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), &m4687_MI);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		t1079 * tmp;
		tmp = (t1079 *)il2cpp_codegen_object_new (&t1079_TI);
		m4687(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), &m4687_MI);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		t1079 * tmp;
		tmp = (t1079 *)il2cpp_codegen_object_new (&t1079_TI);
		m4687(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), &m4687_MI);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		t1079 * tmp;
		tmp = (t1079 *)il2cpp_codegen_object_new (&t1079_TI);
		m4687(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), &m4687_MI);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_Assembly__CustomAttributeCache = {
16,
NULL,
&g_UnityEngine_Assembly_CustomAttributesCacheGenerator
};
