#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t683_TI;
#include "t683.h"
#include "t683MD.h"
extern MethodInfo m3167_MI;
extern TypeInfo t679_TI;
#include "t679.h"
#include "t679MD.h"
extern MethodInfo m3163_MI;
extern TypeInfo t682_TI;
#include "t682.h"
#include "t682MD.h"
extern MethodInfo m3166_MI;
extern TypeInfo t685_TI;
#include "t685.h"
#include "t685MD.h"
extern MethodInfo m3169_MI;
extern TypeInfo t1158_TI;
#include "t1158.h"
#include "t1158MD.h"
extern MethodInfo m4843_MI;
extern TypeInfo t681_TI;
#include "t681.h"
#include "t681MD.h"
extern MethodInfo m3165_MI;
extern TypeInfo t684_TI;
#include "t684.h"
#include "t684MD.h"
extern MethodInfo m3168_MI;
extern TypeInfo t198_TI;
#include "t198.h"
#include "t198MD.h"
extern MethodInfo m683_MI;
extern MethodInfo m684_MI;
extern TypeInfo t1085_TI;
#include "t1085.h"
#include "t1085MD.h"
extern MethodInfo m4728_MI;
extern TypeInfo t1156_TI;
#include "t1156.h"
#include "t1156MD.h"
extern MethodInfo m4841_MI;
extern TypeInfo t1157_TI;
#include "t1157.h"
#include "t1157MD.h"
extern MethodInfo m4842_MI;
extern TypeInfo t1159_TI;
#include "t1159.h"
#include "t1159MD.h"
extern MethodInfo m4844_MI;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t683 * tmp;
		tmp = (t683 *)il2cpp_codegen_object_new (&t683_TI);
		m3167(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), &m3167_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t679 * tmp;
		tmp = (t679 *)il2cpp_codegen_object_new (&t679_TI);
		m3163(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m3163_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t682 * tmp;
		tmp = (t682 *)il2cpp_codegen_object_new (&t682_TI);
		m3166(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), &m3166_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t685 * tmp;
		tmp = (t685 *)il2cpp_codegen_object_new (&t685_TI);
		m3169(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m3169_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1158 * tmp;
		tmp = (t1158 *)il2cpp_codegen_object_new (&t1158_TI);
		m4843(tmp, true, &m4843_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t681 * tmp;
		tmp = (t681 *)il2cpp_codegen_object_new (&t681_TI);
		m3165(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), &m3165_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
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
		t1085 * tmp;
		tmp = (t1085 *)il2cpp_codegen_object_new (&t1085_TI);
		m4728(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), &m4728_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t1156 * tmp;
		tmp = (t1156 *)il2cpp_codegen_object_new (&t1156_TI);
		m4841(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), &m4841_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t1157 * tmp;
		tmp = (t1157 *)il2cpp_codegen_object_new (&t1157_TI);
		m4842(tmp, true, &m4842_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t1159 * tmp;
		tmp = (t1159 *)il2cpp_codegen_object_new (&t1159_TI);
		m4844(tmp, il2cpp_codegen_string_new_wrapper("en-US"), &m4844_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_Mono_Security_Assembly__CustomAttributeCache = {
12,
NULL,
&g_Mono_Security_Assembly_CustomAttributesCacheGenerator
};
