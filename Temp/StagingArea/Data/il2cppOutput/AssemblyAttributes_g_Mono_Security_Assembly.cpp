#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t676_TI;
#include "t676.h"
#include "t676MD.h"
extern MethodInfo m3128_MI;
extern TypeInfo t672_TI;
#include "t672.h"
#include "t672MD.h"
extern MethodInfo m3124_MI;
extern TypeInfo t675_TI;
#include "t675.h"
#include "t675MD.h"
extern MethodInfo m3127_MI;
extern TypeInfo t678_TI;
#include "t678.h"
#include "t678MD.h"
extern MethodInfo m3130_MI;
extern TypeInfo t1152_TI;
#include "t1152.h"
#include "t1152MD.h"
extern MethodInfo m4802_MI;
extern TypeInfo t674_TI;
#include "t674.h"
#include "t674MD.h"
extern MethodInfo m3126_MI;
extern TypeInfo t677_TI;
#include "t677.h"
#include "t677MD.h"
extern MethodInfo m3129_MI;
extern TypeInfo t198_TI;
#include "t198.h"
#include "t198MD.h"
extern MethodInfo m683_MI;
extern MethodInfo m684_MI;
extern TypeInfo t1079_TI;
#include "t1079.h"
#include "t1079MD.h"
extern MethodInfo m4687_MI;
extern TypeInfo t1150_TI;
#include "t1150.h"
#include "t1150MD.h"
extern MethodInfo m4800_MI;
extern TypeInfo t1151_TI;
#include "t1151.h"
#include "t1151MD.h"
extern MethodInfo m4801_MI;
extern TypeInfo t1153_TI;
#include "t1153.h"
#include "t1153MD.h"
extern MethodInfo m4803_MI;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t676 * tmp;
		tmp = (t676 *)il2cpp_codegen_object_new (&t676_TI);
		m3128(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t672 * tmp;
		tmp = (t672 *)il2cpp_codegen_object_new (&t672_TI);
		m3124(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m3124_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t675 * tmp;
		tmp = (t675 *)il2cpp_codegen_object_new (&t675_TI);
		m3127(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), &m3127_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t678 * tmp;
		tmp = (t678 *)il2cpp_codegen_object_new (&t678_TI);
		m3130(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m3130_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1152 * tmp;
		tmp = (t1152 *)il2cpp_codegen_object_new (&t1152_TI);
		m4802(tmp, true, &m4802_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t674 * tmp;
		tmp = (t674 *)il2cpp_codegen_object_new (&t674_TI);
		m3126(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), &m3126_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3129(tmp, false, &m3129_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t198 * tmp;
		tmp = (t198 *)il2cpp_codegen_object_new (&t198_TI);
		m683(tmp, &m683_MI);
		m684(tmp, true, &m684_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t1079 * tmp;
		tmp = (t1079 *)il2cpp_codegen_object_new (&t1079_TI);
		m4687(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), &m4687_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t1150 * tmp;
		tmp = (t1150 *)il2cpp_codegen_object_new (&t1150_TI);
		m4800(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), &m4800_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t1151 * tmp;
		tmp = (t1151 *)il2cpp_codegen_object_new (&t1151_TI);
		m4801(tmp, true, &m4801_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t1153 * tmp;
		tmp = (t1153 *)il2cpp_codegen_object_new (&t1153_TI);
		m4803(tmp, il2cpp_codegen_string_new_wrapper("en-US"), &m4803_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_Mono_Security_Assembly__CustomAttributeCache = {
12,
NULL,
&g_Mono_Security_Assembly_CustomAttributesCacheGenerator
};
