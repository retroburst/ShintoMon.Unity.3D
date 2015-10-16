#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t669_TI;
#include "t669.h"
#include "t669MD.h"
extern MethodInfo m3103_MI;
extern TypeInfo t665_TI;
#include "t665.h"
#include "t665MD.h"
extern MethodInfo m3099_MI;
extern TypeInfo t668_TI;
#include "t668.h"
#include "t668MD.h"
extern MethodInfo m3102_MI;
extern TypeInfo t671_TI;
#include "t671.h"
#include "t671MD.h"
extern MethodInfo m3105_MI;
extern TypeInfo t1143_TI;
#include "t1143.h"
#include "t1143MD.h"
extern MethodInfo m4773_MI;
extern TypeInfo t667_TI;
#include "t667.h"
#include "t667MD.h"
extern MethodInfo m3101_MI;
extern TypeInfo t670_TI;
#include "t670.h"
#include "t670MD.h"
extern MethodInfo m3104_MI;
extern TypeInfo t198_TI;
#include "t198.h"
#include "t198MD.h"
extern MethodInfo m683_MI;
extern MethodInfo m684_MI;
extern TypeInfo t1072_TI;
#include "t1072.h"
#include "t1072MD.h"
extern MethodInfo m4662_MI;
extern TypeInfo t1141_TI;
#include "t1141.h"
#include "t1141MD.h"
extern MethodInfo m4771_MI;
extern TypeInfo t1142_TI;
#include "t1142.h"
#include "t1142MD.h"
extern MethodInfo m4772_MI;
extern TypeInfo t1144_TI;
#include "t1144.h"
#include "t1144MD.h"
extern MethodInfo m4774_MI;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t669 * tmp;
		tmp = (t669 *)il2cpp_codegen_object_new (&t669_TI);
		m3103(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), &m3103_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t665 * tmp;
		tmp = (t665 *)il2cpp_codegen_object_new (&t665_TI);
		m3099(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m3099_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t668 * tmp;
		tmp = (t668 *)il2cpp_codegen_object_new (&t668_TI);
		m3102(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), &m3102_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t671 * tmp;
		tmp = (t671 *)il2cpp_codegen_object_new (&t671_TI);
		m3105(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m3105_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1143 * tmp;
		tmp = (t1143 *)il2cpp_codegen_object_new (&t1143_TI);
		m4773(tmp, true, &m4773_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t667 * tmp;
		tmp = (t667 *)il2cpp_codegen_object_new (&t667_TI);
		m3101(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), &m3101_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
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
		t1072 * tmp;
		tmp = (t1072 *)il2cpp_codegen_object_new (&t1072_TI);
		m4662(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), &m4662_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t1141 * tmp;
		tmp = (t1141 *)il2cpp_codegen_object_new (&t1141_TI);
		m4771(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), &m4771_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t1142 * tmp;
		tmp = (t1142 *)il2cpp_codegen_object_new (&t1142_TI);
		m4772(tmp, true, &m4772_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t1144 * tmp;
		tmp = (t1144 *)il2cpp_codegen_object_new (&t1144_TI);
		m4774(tmp, il2cpp_codegen_string_new_wrapper("en-US"), &m4774_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_Mono_Security_Assembly__CustomAttributeCache = {
12,
NULL,
&g_Mono_Security_Assembly_CustomAttributesCacheGenerator
};
