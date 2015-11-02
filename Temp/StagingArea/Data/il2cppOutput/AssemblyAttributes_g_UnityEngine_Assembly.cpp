#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t1085_TI;
#include "t1085.h"
#include "t1085MD.h"
extern MethodInfo m4728_MI;
extern TypeInfo t198_TI;
#include "t198.h"
#include "t198MD.h"
extern MethodInfo m683_MI;
extern MethodInfo m684_MI;
extern TypeInfo t342_TI;
#include "t342.h"
#include "t342MD.h"
extern MethodInfo m1267_MI;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1085 * tmp;
		tmp = (t1085 *)il2cpp_codegen_object_new (&t1085_TI);
		m4728(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), &m4728_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1085 * tmp;
		tmp = (t1085 *)il2cpp_codegen_object_new (&t1085_TI);
		m4728(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), &m4728_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1085 * tmp;
		tmp = (t1085 *)il2cpp_codegen_object_new (&t1085_TI);
		m4728(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), &m4728_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1085 * tmp;
		tmp = (t1085 *)il2cpp_codegen_object_new (&t1085_TI);
		m4728(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), &m4728_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1085 * tmp;
		tmp = (t1085 *)il2cpp_codegen_object_new (&t1085_TI);
		m4728(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), &m4728_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t1085 * tmp;
		tmp = (t1085 *)il2cpp_codegen_object_new (&t1085_TI);
		m4728(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), &m4728_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t1085 * tmp;
		tmp = (t1085 *)il2cpp_codegen_object_new (&t1085_TI);
		m4728(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), &m4728_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t1085 * tmp;
		tmp = (t1085 *)il2cpp_codegen_object_new (&t1085_TI);
		m4728(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), &m4728_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t1085 * tmp;
		tmp = (t1085 *)il2cpp_codegen_object_new (&t1085_TI);
		m4728(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), &m4728_MI);
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
		t342 * tmp;
		tmp = (t342 *)il2cpp_codegen_object_new (&t342_TI);
		m1267(tmp, &m1267_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t1085 * tmp;
		tmp = (t1085 *)il2cpp_codegen_object_new (&t1085_TI);
		m4728(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), &m4728_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		t1085 * tmp;
		tmp = (t1085 *)il2cpp_codegen_object_new (&t1085_TI);
		m4728(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), &m4728_MI);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		t1085 * tmp;
		tmp = (t1085 *)il2cpp_codegen_object_new (&t1085_TI);
		m4728(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), &m4728_MI);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		t1085 * tmp;
		tmp = (t1085 *)il2cpp_codegen_object_new (&t1085_TI);
		m4728(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), &m4728_MI);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		t1085 * tmp;
		tmp = (t1085 *)il2cpp_codegen_object_new (&t1085_TI);
		m4728(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), &m4728_MI);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_Assembly__CustomAttributeCache = {
16,
NULL,
&g_UnityEngine_Assembly_CustomAttributesCacheGenerator
};
