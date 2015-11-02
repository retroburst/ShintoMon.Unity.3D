#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t678_TI;
#include "t678.h"
#include "t678MD.h"
extern MethodInfo m3162_MI;
extern TypeInfo t679_TI;
#include "t679.h"
#include "t679MD.h"
extern MethodInfo m3163_MI;
extern TypeInfo t680_TI;
#include "t680.h"
#include "t680MD.h"
extern MethodInfo m3164_MI;
extern TypeInfo t681_TI;
#include "t681.h"
#include "t681MD.h"
extern MethodInfo m3165_MI;
extern TypeInfo t682_TI;
#include "t682.h"
#include "t682MD.h"
extern MethodInfo m3166_MI;
extern TypeInfo t683_TI;
#include "t683.h"
#include "t683MD.h"
extern MethodInfo m3167_MI;
extern TypeInfo t684_TI;
#include "t684.h"
#include "t684MD.h"
extern MethodInfo m3168_MI;
extern TypeInfo t685_TI;
#include "t685.h"
#include "t685MD.h"
extern MethodInfo m3169_MI;
extern TypeInfo t198_TI;
#include "t198.h"
#include "t198MD.h"
extern MethodInfo m683_MI;
extern MethodInfo m684_MI;
extern TypeInfo t686_TI;
#include "t686.h"
#include "t686MD.h"
extern MethodInfo m3170_MI;
extern TypeInfo t687_TI;
#include "t687.h"
#include "t687MD.h"
extern MethodInfo m3171_MI;
void g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t678 * tmp;
		tmp = (t678 *)il2cpp_codegen_object_new (&t678_TI);
		m3162(tmp, il2cpp_codegen_string_new_wrapper("d4f464c7-9b15-460d-b4bc-2cacd1c1df73"), &m3162_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t679 * tmp;
		tmp = (t679 *)il2cpp_codegen_object_new (&t679_TI);
		m3163(tmp, il2cpp_codegen_string_new_wrapper(""), &m3163_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t680 * tmp;
		tmp = (t680 *)il2cpp_codegen_object_new (&t680_TI);
		m3164(tmp, il2cpp_codegen_string_new_wrapper(""), &m3164_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t681 * tmp;
		tmp = (t681 *)il2cpp_codegen_object_new (&t681_TI);
		m3165(tmp, il2cpp_codegen_string_new_wrapper("Microsoft"), &m3165_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t682 * tmp;
		tmp = (t682 *)il2cpp_codegen_object_new (&t682_TI);
		m3166(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m3166_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t683 * tmp;
		tmp = (t683 *)il2cpp_codegen_object_new (&t683_TI);
		m3167(tmp, il2cpp_codegen_string_new_wrapper("Copyright © Microsoft 2013"), &m3167_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t685 * tmp;
		tmp = (t685 *)il2cpp_codegen_object_new (&t685_TI);
		m3169(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m3169_MI);
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
		t686 * tmp;
		tmp = (t686 *)il2cpp_codegen_object_new (&t686_TI);
		m3170(tmp, il2cpp_codegen_string_new_wrapper("1.0.0.0"), &m3170_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t687 * tmp;
		tmp = (t687 *)il2cpp_codegen_object_new (&t687_TI);
		m3171(tmp, il2cpp_codegen_string_new_wrapper(""), &m3171_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_UI_Assembly__CustomAttributeCache = {
11,
NULL,
&g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator
};
