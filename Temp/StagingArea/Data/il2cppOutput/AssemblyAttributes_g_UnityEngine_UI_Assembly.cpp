#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t671_TI;
#include "t671.h"
#include "t671MD.h"
extern MethodInfo m3122_MI;
extern TypeInfo t672_TI;
#include "t672.h"
#include "t672MD.h"
extern MethodInfo m3123_MI;
extern TypeInfo t673_TI;
#include "t673.h"
#include "t673MD.h"
extern MethodInfo m3124_MI;
extern TypeInfo t674_TI;
#include "t674.h"
#include "t674MD.h"
extern MethodInfo m3125_MI;
extern TypeInfo t675_TI;
#include "t675.h"
#include "t675MD.h"
extern MethodInfo m3126_MI;
extern TypeInfo t676_TI;
#include "t676.h"
#include "t676MD.h"
extern MethodInfo m3127_MI;
extern TypeInfo t677_TI;
#include "t677.h"
#include "t677MD.h"
extern MethodInfo m3128_MI;
extern TypeInfo t678_TI;
#include "t678.h"
#include "t678MD.h"
extern MethodInfo m3129_MI;
extern TypeInfo t198_TI;
#include "t198.h"
#include "t198MD.h"
extern MethodInfo m683_MI;
extern MethodInfo m684_MI;
extern TypeInfo t679_TI;
#include "t679.h"
#include "t679MD.h"
extern MethodInfo m3130_MI;
extern TypeInfo t680_TI;
#include "t680.h"
#include "t680MD.h"
extern MethodInfo m3131_MI;
void g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t671 * tmp;
		tmp = (t671 *)il2cpp_codegen_object_new (&t671_TI);
		m3122(tmp, il2cpp_codegen_string_new_wrapper("d4f464c7-9b15-460d-b4bc-2cacd1c1df73"), &m3122_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t672 * tmp;
		tmp = (t672 *)il2cpp_codegen_object_new (&t672_TI);
		m3123(tmp, il2cpp_codegen_string_new_wrapper(""), &m3123_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t673 * tmp;
		tmp = (t673 *)il2cpp_codegen_object_new (&t673_TI);
		m3124(tmp, il2cpp_codegen_string_new_wrapper(""), &m3124_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t674 * tmp;
		tmp = (t674 *)il2cpp_codegen_object_new (&t674_TI);
		m3125(tmp, il2cpp_codegen_string_new_wrapper("Microsoft"), &m3125_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t675 * tmp;
		tmp = (t675 *)il2cpp_codegen_object_new (&t675_TI);
		m3126(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m3126_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t676 * tmp;
		tmp = (t676 *)il2cpp_codegen_object_new (&t676_TI);
		m3127(tmp, il2cpp_codegen_string_new_wrapper("Copyright © Microsoft 2013"), &m3127_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t678 * tmp;
		tmp = (t678 *)il2cpp_codegen_object_new (&t678_TI);
		m3129(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m3129_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t198 * tmp;
		tmp = (t198 *)il2cpp_codegen_object_new (&t198_TI);
		m683(tmp, &m683_MI);
		m684(tmp, true, &m684_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t679 * tmp;
		tmp = (t679 *)il2cpp_codegen_object_new (&t679_TI);
		m3130(tmp, il2cpp_codegen_string_new_wrapper("1.0.0.0"), &m3130_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t680 * tmp;
		tmp = (t680 *)il2cpp_codegen_object_new (&t680_TI);
		m3131(tmp, il2cpp_codegen_string_new_wrapper(""), &m3131_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_UI_Assembly__CustomAttributeCache = {
11,
NULL,
&g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator
};
