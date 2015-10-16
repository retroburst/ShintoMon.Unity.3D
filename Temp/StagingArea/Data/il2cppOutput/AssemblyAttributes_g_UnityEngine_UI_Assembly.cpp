#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t664_TI;
#include "t664.h"
#include "t664MD.h"
extern MethodInfo m3098_MI;
extern TypeInfo t665_TI;
#include "t665.h"
#include "t665MD.h"
extern MethodInfo m3099_MI;
extern TypeInfo t666_TI;
#include "t666.h"
#include "t666MD.h"
extern MethodInfo m3100_MI;
extern TypeInfo t667_TI;
#include "t667.h"
#include "t667MD.h"
extern MethodInfo m3101_MI;
extern TypeInfo t668_TI;
#include "t668.h"
#include "t668MD.h"
extern MethodInfo m3102_MI;
extern TypeInfo t669_TI;
#include "t669.h"
#include "t669MD.h"
extern MethodInfo m3103_MI;
extern TypeInfo t670_TI;
#include "t670.h"
#include "t670MD.h"
extern MethodInfo m3104_MI;
extern TypeInfo t671_TI;
#include "t671.h"
#include "t671MD.h"
extern MethodInfo m3105_MI;
extern TypeInfo t198_TI;
#include "t198.h"
#include "t198MD.h"
extern MethodInfo m683_MI;
extern MethodInfo m684_MI;
extern TypeInfo t672_TI;
#include "t672.h"
#include "t672MD.h"
extern MethodInfo m3106_MI;
extern TypeInfo t673_TI;
#include "t673.h"
#include "t673MD.h"
extern MethodInfo m3107_MI;
void g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t664 * tmp;
		tmp = (t664 *)il2cpp_codegen_object_new (&t664_TI);
		m3098(tmp, il2cpp_codegen_string_new_wrapper("d4f464c7-9b15-460d-b4bc-2cacd1c1df73"), &m3098_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t665 * tmp;
		tmp = (t665 *)il2cpp_codegen_object_new (&t665_TI);
		m3099(tmp, il2cpp_codegen_string_new_wrapper(""), &m3099_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t666 * tmp;
		tmp = (t666 *)il2cpp_codegen_object_new (&t666_TI);
		m3100(tmp, il2cpp_codegen_string_new_wrapper(""), &m3100_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t667 * tmp;
		tmp = (t667 *)il2cpp_codegen_object_new (&t667_TI);
		m3101(tmp, il2cpp_codegen_string_new_wrapper("Microsoft"), &m3101_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t668 * tmp;
		tmp = (t668 *)il2cpp_codegen_object_new (&t668_TI);
		m3102(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m3102_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t669 * tmp;
		tmp = (t669 *)il2cpp_codegen_object_new (&t669_TI);
		m3103(tmp, il2cpp_codegen_string_new_wrapper("Copyright © Microsoft 2013"), &m3103_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t671 * tmp;
		tmp = (t671 *)il2cpp_codegen_object_new (&t671_TI);
		m3105(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m3105_MI);
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
		t672 * tmp;
		tmp = (t672 *)il2cpp_codegen_object_new (&t672_TI);
		m3106(tmp, il2cpp_codegen_string_new_wrapper("1.0.0.0"), &m3106_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t673 * tmp;
		tmp = (t673 *)il2cpp_codegen_object_new (&t673_TI);
		m3107(tmp, il2cpp_codegen_string_new_wrapper(""), &m3107_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_UI_Assembly__CustomAttributeCache = {
11,
NULL,
&g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator
};
