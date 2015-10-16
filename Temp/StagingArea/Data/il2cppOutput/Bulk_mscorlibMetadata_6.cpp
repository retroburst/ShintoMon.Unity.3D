#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1980.h"
// Metadata Definition System.Security.Cryptography.HMACSHA512
extern TypeInfo t1980_TI;
#include "t1980MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10410_MI = 
{
	".ctor", (methodPointerType)&m10410, &t1980_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4431, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1980_m10411_ParameterInfos[] = 
{
	{"key", 0, 134223089, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10411_MI = 
{
	".ctor", (methodPointerType)&m10411, &t1980_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1980_m10411_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4432, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10412_MI = 
{
	".cctor", (methodPointerType)&m10412, &t1980_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4433, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1980_m10413_ParameterInfos[] = 
{
	{"value", 0, 134223090, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10413_MI = 
{
	"set_ProduceLegacyHmacValues", (methodPointerType)&m10413, &t1980_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1980_m10413_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4434, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1980_MIs[] =
{
	&m10410_MI,
	&m10411_MI,
	&m10412_MI,
	&m10413_MI,
	NULL
};
extern Il2CppType t124_0_0_17;
FieldInfo t1980_f10_FieldInfo = 
{
	"legacy_mode", &t124_0_0_17, &t1980_TI, offsetof(t1980_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1980_f11_FieldInfo = 
{
	"legacy", &t124_0_0_1, &t1980_TI, offsetof(t1980, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1980_FIs[] =
{
	&t1980_f10_FieldInfo,
	&t1980_f11_FieldInfo,
	NULL
};
extern MethodInfo m10413_MI;
static PropertyInfo t1980____ProduceLegacyHmacValues_PropertyInfo = 
{
	&t1980_TI, "ProduceLegacyHmacValues", NULL, &m10413_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1980_PIs[] =
{
	&t1980____ProduceLegacyHmacValues_PropertyInfo,
	NULL
};
extern MethodInfo m671_MI;
extern MethodInfo m7026_MI;
extern MethodInfo m672_MI;
extern MethodInfo m673_MI;
extern MethodInfo m7019_MI;
extern MethodInfo m7020_MI;
extern MethodInfo m6885_MI;
extern MethodInfo m6886_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m10394_MI;
extern MethodInfo m10395_MI;
extern MethodInfo m6873_MI;
extern MethodInfo m10396_MI;
extern MethodInfo m10393_MI;
extern MethodInfo m10390_MI;
extern MethodInfo m6901_MI;
static Il2CppMethodReference t1980_VT[] =
{
	&m671_MI,
	&m7026_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	&m10394_MI,
	&m10395_MI,
	&m6873_MI,
	&m10396_MI,
	&m10393_MI,
	&m10390_MI,
	&m6901_MI,
};
static bool t1980_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t137_0_0_0;
extern Il2CppType t1416_0_0_0;
static Il2CppInterfaceOffsetPair t1980_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
extern TypeInfo t670_TI;
#include "t670.h"
#include "t670MD.h"
extern MethodInfo m3104_MI;
void t1980_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1980__CustomAttributeCache = {
1,
NULL,
&t1980_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1980_0_0_0;
extern Il2CppType t1980_1_0_0;
extern Il2CppType t1523_0_0_0;
struct t1980;
extern CustomAttributesCache t1980__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1980_DM = 
{
	NULL, NULL, NULL, t1980_IOs, &t1523_0_0_0, t1980_VT, t1980_VTIGM, NULL};
TypeInfo t1980_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACSHA512", "System.Security.Cryptography", t1980_MIs, t1980_PIs, t1980_FIs, NULL, &t1980_TI, NULL, &t1980__CustomAttributeCache, &t1980_0_0_0, &t1980_1_0_0, &t1980_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1980), sizeof (t1980), 0, -1, sizeof(t1980_SFs), 0, -1, 1, 0, 0, false, false, false, false, false, false, false, true, true, false, 4, 1, 2, 0, 0, 17, 0, 2};
#include "t1359.h"
// Metadata Definition System.Security.Cryptography.HashAlgorithm
extern TypeInfo t1359_TI;
#include "t1359MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6870_MI = 
{
	".ctor", (methodPointerType)&m6870, &t1359_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4435, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7019_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m7019, &t1359_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 4436, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m7020_MI = 
{
	"get_CanReuseTransform", (methodPointerType)&m7020, &t1359_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 4437, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1359_m5868_ParameterInfos[] = 
{
	{"buffer", 0, 134223091, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5868_MI = 
{
	"ComputeHash", (methodPointerType)&m5868, &t1359_TI, &t723_0_0_0, RuntimeInvoker_t9_t9, t1359_m5868_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4438, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1359_m6889_ParameterInfos[] = 
{
	{"buffer", 0, 134223092, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134223093, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223094, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6889_MI = 
{
	"ComputeHash", (methodPointerType)&m6889, &t1359_TI, &t723_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t1359_m6889_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4439, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1359_m6884_ParameterInfos[] = 
{
	{"hashName", 0, 134223095, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1359_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6884_MI = 
{
	"Create", (methodPointerType)&m6884, &t1359_TI, &t1359_0_0_0, RuntimeInvoker_t9_t9, t1359_m6884_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4440, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6887_MI = 
{
	"get_Hash", (methodPointerType)&m6887, &t1359_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 4441, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1359_m12071_ParameterInfos[] = 
{
	{"array", 0, 134223096, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ibStart", 1, 134223097, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223098, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12071_MI = 
{
	"HashCore", NULL, &t1359_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1359_m12071_ParameterInfos, &EmptyCustomAttributesCache, 1476, 0, 10, 3, false, false, 4442, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12072_MI = 
{
	"HashFinal", NULL, &t1359_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 1476, 0, 11, 0, false, false, 4443, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6873_MI = 
{
	"get_HashSize", (methodPointerType)&m6873, &t1359_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 12, 0, false, false, 4444, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6888_MI = 
{
	"Initialize", NULL, &t1359_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 1478, 0, 13, 0, false, false, 4445, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1359_m7021_ParameterInfos[] = 
{
	{"disposing", 0, 134223099, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m7021_MI = 
{
	"Dispose", (methodPointerType)&m7021, &t1359_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1359_m7021_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 14, 1, false, false, 4446, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1359_m6885_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223100, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 1, 134223101, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223102, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"outputBuffer", 3, 134223103, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"outputOffset", 4, 134223104, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6885_MI = 
{
	"TransformBlock", (methodPointerType)&m6885, &t1359_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t1359_m6885_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 5, false, false, 4447, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1359_m6886_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223105, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 1, 134223106, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223107, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6886_MI = 
{
	"TransformFinalBlock", (methodPointerType)&m6886, &t1359_TI, &t723_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t1359_m6886_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 3, false, false, 4448, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1359_MIs[] =
{
	&m6870_MI,
	&m7019_MI,
	&m7020_MI,
	&m5868_MI,
	&m6889_MI,
	&m6884_MI,
	&m6887_MI,
	&m12071_MI,
	&m12072_MI,
	&m6873_MI,
	&m6888_MI,
	&m7021_MI,
	&m6885_MI,
	&m6886_MI,
	NULL
};
extern Il2CppType t723_0_0_5;
FieldInfo t1359_f0_FieldInfo = 
{
	"HashValue", &t723_0_0_5, &t1359_TI, offsetof(t1359, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_4;
FieldInfo t1359_f1_FieldInfo = 
{
	"HashSizeValue", &t125_0_0_4, &t1359_TI, offsetof(t1359, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_4;
FieldInfo t1359_f2_FieldInfo = 
{
	"State", &t125_0_0_4, &t1359_TI, offsetof(t1359, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1359_f3_FieldInfo = 
{
	"disposed", &t124_0_0_1, &t1359_TI, offsetof(t1359, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1359_FIs[] =
{
	&t1359_f0_FieldInfo,
	&t1359_f1_FieldInfo,
	&t1359_f2_FieldInfo,
	&t1359_f3_FieldInfo,
	NULL
};
static PropertyInfo t1359____CanReuseTransform_PropertyInfo = 
{
	&t1359_TI, "CanReuseTransform", &m7020_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1359____Hash_PropertyInfo = 
{
	&t1359_TI, "Hash", &m6887_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1359____HashSize_PropertyInfo = 
{
	&t1359_TI, "HashSize", &m6873_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1359_PIs[] =
{
	&t1359____CanReuseTransform_PropertyInfo,
	&t1359____Hash_PropertyInfo,
	&t1359____HashSize_PropertyInfo,
	NULL
};
extern MethodInfo m646_MI;
extern MethodInfo m7021_MI;
static Il2CppMethodReference t1359_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	NULL,
	NULL,
	&m6873_MI,
	NULL,
	&m7021_MI,
};
static bool t1359_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1359_ITIs[] = 
{
	&t137_0_0_0,
	&t1416_0_0_0,
};
static Il2CppInterfaceOffsetPair t1359_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1359_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1359__CustomAttributeCache = {
1,
NULL,
&t1359_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1359_0_0_0;
extern Il2CppType t1359_1_0_0;
extern Il2CppType t9_0_0_0;
struct t1359;
extern CustomAttributesCache t1359__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1359_DM = 
{
	NULL, NULL, t1359_ITIs, t1359_IOs, &t9_0_0_0, t1359_VT, t1359_VTIGM, NULL};
TypeInfo t1359_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HashAlgorithm", "System.Security.Cryptography", t1359_MIs, t1359_PIs, t1359_FIs, NULL, &t1359_TI, NULL, &t1359__CustomAttributeCache, &t1359_0_0_0, &t1359_1_0_0, &t1359_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1359), sizeof (t1359), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 14, 3, 4, 0, 0, 15, 2, 2};
// Metadata Definition System.Security.Cryptography.ICryptoTransform
extern TypeInfo t1416_TI;
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m11957_MI = 
{
	"get_CanReuseTransform", NULL, &t1416_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 4449, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1416_m6929_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223108, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 1, 134223109, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223110, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"outputBuffer", 3, 134223111, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"outputOffset", 4, 134223112, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6929_MI = 
{
	"TransformBlock", NULL, &t1416_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t1416_m6929_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 5, false, false, 4450, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1416_m6898_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223113, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 1, 134223114, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223115, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6898_MI = 
{
	"TransformFinalBlock", NULL, &t1416_TI, &t723_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t1416_m6898_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 3, false, false, 4451, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1416_MIs[] =
{
	&m11957_MI,
	&m6929_MI,
	&m6898_MI,
	NULL
};
extern MethodInfo m11957_MI;
static PropertyInfo t1416____CanReuseTransform_PropertyInfo = 
{
	&t1416_TI, "CanReuseTransform", &m11957_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1416_PIs[] =
{
	&t1416____CanReuseTransform_PropertyInfo,
	NULL
};
static const Il2CppType* t1416_ITIs[] = 
{
	&t137_0_0_0,
};
void t1416_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1416__CustomAttributeCache = {
1,
NULL,
&t1416_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1416_1_0_0;
struct t1416;
extern CustomAttributesCache t1416__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1416_DM = 
{
	NULL, NULL, t1416_ITIs, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1416_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICryptoTransform", "System.Security.Cryptography", t1416_MIs, t1416_PIs, NULL, NULL, &t1416_TI, NULL, &t1416__CustomAttributeCache, &t1416_0_0_0, &t1416_1_0_0, &t1416_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 1, 0, 0, 0, 0, 1, 0};
// Metadata Definition System.Security.Cryptography.ICspAsymmetricAlgorithm
extern TypeInfo t2625_TI;
static MethodInfo* t2625_MIs[] =
{
	NULL
};
void t2625_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2625__CustomAttributeCache = {
1,
NULL,
&t2625_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2625_0_0_0;
extern Il2CppType t2625_1_0_0;
struct t2625;
extern CustomAttributesCache t2625__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2625_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2625_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICspAsymmetricAlgorithm", "System.Security.Cryptography", t2625_MIs, NULL, NULL, NULL, &t2625_TI, NULL, &t2625__CustomAttributeCache, &t2625_0_0_0, &t2625_1_0_0, &t2625_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t1520.h"
// Metadata Definition System.Security.Cryptography.KeySizes
extern TypeInfo t1520_TI;
#include "t1520MD.h"
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1520_m6880_ParameterInfos[] = 
{
	{"minSize", 0, 134223116, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"maxSize", 1, 134223117, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"skipSize", 2, 134223118, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6880_MI = 
{
	".ctor", (methodPointerType)&m6880, &t1520_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t125_t125, t1520_m6880_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4452, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10414_MI = 
{
	"get_MaxSize", (methodPointerType)&m10414, &t1520_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4453, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10415_MI = 
{
	"get_MinSize", (methodPointerType)&m10415, &t1520_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4454, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10416_MI = 
{
	"get_SkipSize", (methodPointerType)&m10416, &t1520_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4455, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1520_m10417_ParameterInfos[] = 
{
	{"keySize", 0, 134223119, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10417_MI = 
{
	"IsLegal", (methodPointerType)&m10417, &t1520_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t1520_m10417_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4456, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1424_0_0_0;
extern Il2CppType t1424_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1520_m10418_ParameterInfos[] = 
{
	{"legalKeys", 0, 134223120, &EmptyCustomAttributesCache, &t1424_0_0_0},
	{"size", 1, 134223121, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10418_MI = 
{
	"IsLegalKeySize", (methodPointerType)&m10418, &t1520_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t125, t1520_m10418_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4457, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1520_MIs[] =
{
	&m6880_MI,
	&m10414_MI,
	&m10415_MI,
	&m10416_MI,
	&m10417_MI,
	&m10418_MI,
	NULL
};
extern Il2CppType t125_0_0_1;
FieldInfo t1520_f0_FieldInfo = 
{
	"_maxSize", &t125_0_0_1, &t1520_TI, offsetof(t1520, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1520_f1_FieldInfo = 
{
	"_minSize", &t125_0_0_1, &t1520_TI, offsetof(t1520, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1520_f2_FieldInfo = 
{
	"_skipSize", &t125_0_0_1, &t1520_TI, offsetof(t1520, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1520_FIs[] =
{
	&t1520_f0_FieldInfo,
	&t1520_f1_FieldInfo,
	&t1520_f2_FieldInfo,
	NULL
};
extern MethodInfo m10414_MI;
static PropertyInfo t1520____MaxSize_PropertyInfo = 
{
	&t1520_TI, "MaxSize", &m10414_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10415_MI;
static PropertyInfo t1520____MinSize_PropertyInfo = 
{
	&t1520_TI, "MinSize", &m10415_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10416_MI;
static PropertyInfo t1520____SkipSize_PropertyInfo = 
{
	&t1520_TI, "SkipSize", &m10416_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1520_PIs[] =
{
	&t1520____MaxSize_PropertyInfo,
	&t1520____MinSize_PropertyInfo,
	&t1520____SkipSize_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1520_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1520_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1520_0_0_0;
extern Il2CppType t1520_1_0_0;
struct t1520;
const Il2CppTypeDefinitionMetadata t1520_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1520_VT, t1520_VTIGM, NULL};
TypeInfo t1520_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeySizes", "System.Security.Cryptography", t1520_MIs, t1520_PIs, t1520_FIs, NULL, &t1520_TI, NULL, &EmptyCustomAttributesCache, &t1520_0_0_0, &t1520_1_0_0, &t1520_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1520), sizeof (t1520), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 3, 3, 0, 0, 4, 0, 0};
#include "t1441.h"
// Metadata Definition System.Security.Cryptography.KeyedHashAlgorithm
extern TypeInfo t1441_TI;
#include "t1441MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6927_MI = 
{
	".ctor", (methodPointerType)&m6927, &t1441_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4458, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7026_MI = 
{
	"Finalize", (methodPointerType)&m7026, &t1441_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4459, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10419_MI = 
{
	"get_Key", (methodPointerType)&m10419, &t1441_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 15, 0, false, false, 4460, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1441_m10420_ParameterInfos[] = 
{
	{"value", 0, 134223122, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10420_MI = 
{
	"set_Key", (methodPointerType)&m10420, &t1441_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1441_m10420_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 16, 1, false, false, 4461, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1441_m7027_ParameterInfos[] = 
{
	{"disposing", 0, 134223123, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m7027_MI = 
{
	"Dispose", (methodPointerType)&m7027, &t1441_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1441_m7027_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 14, 1, false, false, 4462, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10421_MI = 
{
	"ZeroizeKey", (methodPointerType)&m10421, &t1441_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4463, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1441_MIs[] =
{
	&m6927_MI,
	&m7026_MI,
	&m10419_MI,
	&m10420_MI,
	&m7027_MI,
	&m10421_MI,
	NULL
};
extern Il2CppType t723_0_0_4;
FieldInfo t1441_f4_FieldInfo = 
{
	"KeyValue", &t723_0_0_4, &t1441_TI, offsetof(t1441, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1441_FIs[] =
{
	&t1441_f4_FieldInfo,
	NULL
};
extern MethodInfo m10419_MI;
extern MethodInfo m10420_MI;
static PropertyInfo t1441____Key_PropertyInfo = 
{
	&t1441_TI, "Key", &m10419_MI, &m10420_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1441_PIs[] =
{
	&t1441____Key_PropertyInfo,
	NULL
};
extern MethodInfo m7027_MI;
static Il2CppMethodReference t1441_VT[] =
{
	&m671_MI,
	&m7026_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	NULL,
	NULL,
	&m6873_MI,
	NULL,
	&m7027_MI,
	&m10419_MI,
	&m10420_MI,
};
static bool t1441_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1441_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1441_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1441__CustomAttributeCache = {
1,
NULL,
&t1441_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1441_0_0_0;
extern Il2CppType t1441_1_0_0;
struct t1441;
extern CustomAttributesCache t1441__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1441_DM = 
{
	NULL, NULL, NULL, t1441_IOs, &t1359_0_0_0, t1441_VT, t1441_VTIGM, NULL};
TypeInfo t1441_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyedHashAlgorithm", "System.Security.Cryptography", t1441_MIs, t1441_PIs, t1441_FIs, NULL, &t1441_TI, NULL, &t1441__CustomAttributeCache, &t1441_0_0_0, &t1441_1_0_0, &t1441_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1441), sizeof (t1441), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 1, 1, 0, 0, 17, 0, 2};
#include "t1981.h"
// Metadata Definition System.Security.Cryptography.MACTripleDES
extern TypeInfo t1981_TI;
#include "t1981MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10422_MI = 
{
	".ctor", (methodPointerType)&m10422, &t1981_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4464, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1981_m10423_ParameterInfos[] = 
{
	{"strTripleDES", 0, 134223124, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"rgbKey", 1, 134223125, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10423_MI = 
{
	"Setup", (methodPointerType)&m10423, &t1981_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1981_m10423_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4465, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10424_MI = 
{
	"Finalize", (methodPointerType)&m10424, &t1981_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4466, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1981_m10425_ParameterInfos[] = 
{
	{"disposing", 0, 134223126, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10425_MI = 
{
	"Dispose", (methodPointerType)&m10425, &t1981_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1981_m10425_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 14, 1, false, false, 4467, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10426_MI = 
{
	"Initialize", (methodPointerType)&m10426, &t1981_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4468, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1981_m10427_ParameterInfos[] = 
{
	{"rgbData", 0, 134223127, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ibStart", 1, 134223128, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223129, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10427_MI = 
{
	"HashCore", (methodPointerType)&m10427, &t1981_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1981_m10427_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4469, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10428_MI = 
{
	"HashFinal", (methodPointerType)&m10428, &t1981_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4470, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1981_MIs[] =
{
	&m10422_MI,
	&m10423_MI,
	&m10424_MI,
	&m10425_MI,
	&m10426_MI,
	&m10427_MI,
	&m10428_MI,
	NULL
};
extern Il2CppType t1533_0_0_1;
FieldInfo t1981_f5_FieldInfo = 
{
	"tdes", &t1533_0_0_1, &t1981_TI, offsetof(t1981, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1626_0_0_1;
FieldInfo t1981_f6_FieldInfo = 
{
	"mac", &t1626_0_0_1, &t1981_TI, offsetof(t1981, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1981_f7_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t1981_TI, offsetof(t1981, f7), &EmptyCustomAttributesCache};
static FieldInfo* t1981_FIs[] =
{
	&t1981_f5_FieldInfo,
	&t1981_f6_FieldInfo,
	&t1981_f7_FieldInfo,
	NULL
};
extern MethodInfo m10424_MI;
extern MethodInfo m10427_MI;
extern MethodInfo m10428_MI;
extern MethodInfo m10426_MI;
extern MethodInfo m10425_MI;
static Il2CppMethodReference t1981_VT[] =
{
	&m671_MI,
	&m10424_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	&m10427_MI,
	&m10428_MI,
	&m6873_MI,
	&m10426_MI,
	&m10425_MI,
	&m10419_MI,
	&m10420_MI,
};
static bool t1981_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1981_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1981_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1981__CustomAttributeCache = {
1,
NULL,
&t1981_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1981_0_0_0;
extern Il2CppType t1981_1_0_0;
struct t1981;
extern CustomAttributesCache t1981__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1981_DM = 
{
	NULL, NULL, NULL, t1981_IOs, &t1441_0_0_0, t1981_VT, t1981_VTIGM, NULL};
TypeInfo t1981_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MACTripleDES", "System.Security.Cryptography", t1981_MIs, NULL, t1981_FIs, NULL, &t1981_TI, NULL, &t1981__CustomAttributeCache, &t1981_0_0_0, &t1981_1_0_0, &t1981_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1981), sizeof (t1981), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 7, 0, 3, 0, 0, 17, 0, 2};
#include "t1524.h"
// Metadata Definition System.Security.Cryptography.MD5
extern TypeInfo t1524_TI;
#include "t1524MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10429_MI = 
{
	".ctor", (methodPointerType)&m10429, &t1524_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4471, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1524_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6904_MI = 
{
	"Create", (methodPointerType)&m6904, &t1524_TI, &t1524_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4472, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1524_m10430_ParameterInfos[] = 
{
	{"algName", 0, 134223130, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1524_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10430_MI = 
{
	"Create", (methodPointerType)&m10430, &t1524_TI, &t1524_0_0_0, RuntimeInvoker_t9_t9, t1524_m10430_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4473, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1524_MIs[] =
{
	&m10429_MI,
	&m6904_MI,
	&m10430_MI,
	NULL
};
static Il2CppMethodReference t1524_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	NULL,
	NULL,
	&m6873_MI,
	NULL,
	&m7021_MI,
};
static bool t1524_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1524_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1524_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1524__CustomAttributeCache = {
1,
NULL,
&t1524_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1524_0_0_0;
extern Il2CppType t1524_1_0_0;
struct t1524;
extern CustomAttributesCache t1524__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1524_DM = 
{
	NULL, NULL, NULL, t1524_IOs, &t1359_0_0_0, t1524_VT, t1524_VTIGM, NULL};
TypeInfo t1524_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MD5", "System.Security.Cryptography", t1524_MIs, NULL, NULL, NULL, &t1524_TI, NULL, &t1524__CustomAttributeCache, &t1524_0_0_0, &t1524_1_0_0, &t1524_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1524), sizeof (t1524), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 15, 0, 2};
#include "t1982.h"
// Metadata Definition System.Security.Cryptography.MD5CryptoServiceProvider
extern TypeInfo t1982_TI;
#include "t1982MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10431_MI = 
{
	".ctor", (methodPointerType)&m10431, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4474, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10432_MI = 
{
	".cctor", (methodPointerType)&m10432, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4475, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10433_MI = 
{
	"Finalize", (methodPointerType)&m10433, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4476, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1982_m10434_ParameterInfos[] = 
{
	{"disposing", 0, 134223131, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10434_MI = 
{
	"Dispose", (methodPointerType)&m10434, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1982_m10434_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 14, 1, false, false, 4477, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1982_m10435_ParameterInfos[] = 
{
	{"rgb", 0, 134223132, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ibStart", 1, 134223133, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223134, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10435_MI = 
{
	"HashCore", (methodPointerType)&m10435, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1982_m10435_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4478, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10436_MI = 
{
	"HashFinal", (methodPointerType)&m10436, &t1982_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4479, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10437_MI = 
{
	"Initialize", (methodPointerType)&m10437, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4480, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1982_m10438_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223135, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 1, 134223136, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10438_MI = 
{
	"ProcessBlock", (methodPointerType)&m10438, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1982_m10438_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4481, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1982_m10439_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223137, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 1, 134223138, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223139, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10439_MI = 
{
	"ProcessFinalBlock", (methodPointerType)&m10439, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1982_m10439_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4482, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
extern Il2CppType t882_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1982_m10440_ParameterInfos[] = 
{
	{"length", 0, 134223140, &EmptyCustomAttributesCache, &t882_0_0_0},
	{"buffer", 1, 134223141, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"position", 2, 134223142, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10440_MI = 
{
	"AddLength", (methodPointerType)&m10440, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122_t292_t9_t125, t1982_m10440_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 3, false, false, 4483, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1982_MIs[] =
{
	&m10431_MI,
	&m10432_MI,
	&m10433_MI,
	&m10434_MI,
	&m10435_MI,
	&m10436_MI,
	&m10437_MI,
	&m10438_MI,
	&m10439_MI,
	&m10440_MI,
	NULL
};
extern Il2CppType t1403_0_0_1;
FieldInfo t1982_f4_FieldInfo = 
{
	"_H", &t1403_0_0_1, &t1982_TI, offsetof(t1982, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_1;
FieldInfo t1982_f5_FieldInfo = 
{
	"buff", &t1403_0_0_1, &t1982_TI, offsetof(t1982, f5), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t1982_f6_FieldInfo = 
{
	"count", &t882_0_0_1, &t1982_TI, offsetof(t1982, f6), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t1982_f7_FieldInfo = 
{
	"_ProcessingBuffer", &t723_0_0_1, &t1982_TI, offsetof(t1982, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1982_f8_FieldInfo = 
{
	"_ProcessingBufferCount", &t125_0_0_1, &t1982_TI, offsetof(t1982, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_49;
FieldInfo t1982_f9_FieldInfo = 
{
	"K", &t1403_0_0_49, &t1982_TI, offsetof(t1982_SFs, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1982_FIs[] =
{
	&t1982_f4_FieldInfo,
	&t1982_f5_FieldInfo,
	&t1982_f6_FieldInfo,
	&t1982_f7_FieldInfo,
	&t1982_f8_FieldInfo,
	&t1982_f9_FieldInfo,
	NULL
};
extern MethodInfo m10433_MI;
extern MethodInfo m10435_MI;
extern MethodInfo m10436_MI;
extern MethodInfo m10437_MI;
extern MethodInfo m10434_MI;
static Il2CppMethodReference t1982_VT[] =
{
	&m671_MI,
	&m10433_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	&m10435_MI,
	&m10436_MI,
	&m6873_MI,
	&m10437_MI,
	&m10434_MI,
};
static bool t1982_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1982_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1982_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1982__CustomAttributeCache = {
1,
NULL,
&t1982_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1982_0_0_0;
extern Il2CppType t1982_1_0_0;
struct t1982;
extern CustomAttributesCache t1982__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1982_DM = 
{
	NULL, NULL, NULL, t1982_IOs, &t1524_0_0_0, t1982_VT, t1982_VTIGM, NULL};
TypeInfo t1982_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MD5CryptoServiceProvider", "System.Security.Cryptography", t1982_MIs, NULL, t1982_FIs, NULL, &t1982_TI, NULL, &t1982__CustomAttributeCache, &t1982_0_0_0, &t1982_1_0_0, &t1982_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1982), sizeof (t1982), 0, -1, sizeof(t1982_SFs), 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, true, false, 10, 0, 6, 0, 0, 15, 0, 2};
#include "t1535.h"
// Metadata Definition System.Security.Cryptography.PaddingMode
extern TypeInfo t1535_TI;
#include "t1535MD.h"
static MethodInfo* t1535_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1535_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1535_TI, offsetof(t1535, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1535_0_0_32854;
FieldInfo t1535_f2_FieldInfo = 
{
	"None", &t1535_0_0_32854, &t1535_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1535_0_0_32854;
FieldInfo t1535_f3_FieldInfo = 
{
	"PKCS7", &t1535_0_0_32854, &t1535_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1535_0_0_32854;
FieldInfo t1535_f4_FieldInfo = 
{
	"Zeros", &t1535_0_0_32854, &t1535_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1535_0_0_32854;
FieldInfo t1535_f5_FieldInfo = 
{
	"ANSIX923", &t1535_0_0_32854, &t1535_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1535_0_0_32854;
FieldInfo t1535_f6_FieldInfo = 
{
	"ISO10126", &t1535_0_0_32854, &t1535_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1535_FIs[] =
{
	&t1535_f1_FieldInfo,
	&t1535_f2_FieldInfo,
	&t1535_f3_FieldInfo,
	&t1535_f4_FieldInfo,
	&t1535_f5_FieldInfo,
	&t1535_f6_FieldInfo,
	NULL
};
static const int32_t t1535_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1535_f2_DefaultValue = 
{
	&t1535_f2_FieldInfo, { (char*)&t1535_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1535_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1535_f3_DefaultValue = 
{
	&t1535_f3_FieldInfo, { (char*)&t1535_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1535_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1535_f4_DefaultValue = 
{
	&t1535_f4_FieldInfo, { (char*)&t1535_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1535_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1535_f5_DefaultValue = 
{
	&t1535_f5_FieldInfo, { (char*)&t1535_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1535_f6_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1535_f6_DefaultValue = 
{
	&t1535_f6_FieldInfo, { (char*)&t1535_f6_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1535_FDVs[] = 
{
	&t1535_f2_DefaultValue,
	&t1535_f3_DefaultValue,
	&t1535_f4_DefaultValue,
	&t1535_f5_DefaultValue,
	&t1535_f6_DefaultValue,
	NULL
};
extern MethodInfo m649_MI;
extern MethodInfo m650_MI;
extern MethodInfo m651_MI;
extern MethodInfo m652_MI;
extern MethodInfo m653_MI;
extern MethodInfo m654_MI;
extern MethodInfo m655_MI;
extern MethodInfo m656_MI;
extern MethodInfo m657_MI;
extern MethodInfo m658_MI;
extern MethodInfo m659_MI;
extern MethodInfo m660_MI;
extern MethodInfo m661_MI;
extern MethodInfo m662_MI;
extern MethodInfo m663_MI;
extern MethodInfo m664_MI;
extern MethodInfo m665_MI;
extern MethodInfo m666_MI;
extern MethodInfo m667_MI;
extern MethodInfo m668_MI;
extern MethodInfo m669_MI;
extern MethodInfo m670_MI;
static Il2CppMethodReference t1535_VT[] =
{
	&m649_MI,
	&m646_MI,
	&m650_MI,
	&m651_MI,
	&m652_MI,
	&m653_MI,
	&m654_MI,
	&m655_MI,
	&m656_MI,
	&m657_MI,
	&m658_MI,
	&m659_MI,
	&m660_MI,
	&m661_MI,
	&m662_MI,
	&m663_MI,
	&m664_MI,
	&m665_MI,
	&m666_MI,
	&m667_MI,
	&m668_MI,
	&m669_MI,
	&m670_MI,
};
static bool t1535_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t183_0_0_0;
extern Il2CppType t184_0_0_0;
extern Il2CppType t185_0_0_0;
static Il2CppInterfaceOffsetPair t1535_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1535_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1535__CustomAttributeCache = {
1,
NULL,
&t1535_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1535_0_0_0;
extern Il2CppType t1535_1_0_0;
extern Il2CppType t8_0_0_0;
#include "t125.h"
extern TypeInfo t125_TI;
extern CustomAttributesCache t1535__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1535_DM = 
{
	NULL, NULL, NULL, t1535_IOs, &t8_0_0_0, t1535_VT, t1535_VTIGM, NULL};
TypeInfo t1535_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PaddingMode", "System.Security.Cryptography", t1535_MIs, NULL, t1535_FIs, NULL, &t125_TI, NULL, &t1535__CustomAttributeCache, &t1535_0_0_0, &t1535_1_0_0, &t1535_DM, NULL, NULL, NULL, t1535_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1535)+ sizeof (Il2CppObject), sizeof (t1535)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1532.h"
// Metadata Definition System.Security.Cryptography.RC2
extern TypeInfo t1532_TI;
#include "t1532MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10441_MI = 
{
	".ctor", (methodPointerType)&m10441, &t1532_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4484, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1532_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6931_MI = 
{
	"Create", (methodPointerType)&m6931, &t1532_TI, &t1532_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4485, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1532_m10442_ParameterInfos[] = 
{
	{"AlgName", 0, 134223143, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1532_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10442_MI = 
{
	"Create", (methodPointerType)&m10442, &t1532_TI, &t1532_0_0_0, RuntimeInvoker_t9_t9, t1532_m10442_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4486, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10443_MI = 
{
	"get_EffectiveKeySize", (methodPointerType)&m10443, &t1532_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 26, 0, false, false, 4487, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10444_MI = 
{
	"get_KeySize", (methodPointerType)&m10444, &t1532_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 13, 0, false, false, 4488, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1532_m10445_ParameterInfos[] = 
{
	{"value", 0, 134223144, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10445_MI = 
{
	"set_KeySize", (methodPointerType)&m10445, &t1532_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1532_m10445_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 14, 1, false, false, 4489, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1532_MIs[] =
{
	&m10441_MI,
	&m6931_MI,
	&m10442_MI,
	&m10443_MI,
	&m10444_MI,
	&m10445_MI,
	NULL
};
extern Il2CppType t125_0_0_4;
FieldInfo t1532_f10_FieldInfo = 
{
	"EffectiveKeySizeValue", &t125_0_0_4, &t1532_TI, offsetof(t1532, f10), &EmptyCustomAttributesCache};
static FieldInfo* t1532_FIs[] =
{
	&t1532_f10_FieldInfo,
	NULL
};
extern MethodInfo m10443_MI;
static PropertyInfo t1532____EffectiveKeySize_PropertyInfo = 
{
	&t1532_TI, "EffectiveKeySize", &m10443_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10444_MI;
extern MethodInfo m10445_MI;
static PropertyInfo t1532____KeySize_PropertyInfo = 
{
	&t1532_TI, "KeySize", &m10444_MI, &m10445_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1532_PIs[] =
{
	&t1532____EffectiveKeySize_PropertyInfo,
	&t1532____KeySize_PropertyInfo,
	NULL
};
extern MethodInfo m6866_MI;
extern MethodInfo m7012_MI;
extern MethodInfo m7022_MI;
extern MethodInfo m7013_MI;
extern MethodInfo m6936_MI;
extern MethodInfo m7014_MI;
extern MethodInfo m10605_MI;
extern MethodInfo m6895_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m6894_MI;
extern MethodInfo m7016_MI;
extern MethodInfo m7017_MI;
extern MethodInfo m6896_MI;
extern MethodInfo m7018_MI;
extern MethodInfo m6934_MI;
extern MethodInfo m6897_MI;
extern MethodInfo m6868_MI;
static Il2CppMethodReference t1532_VT[] =
{
	&m671_MI,
	&m6866_MI,
	&m672_MI,
	&m673_MI,
	&m7012_MI,
	&m7022_MI,
	&m7013_MI,
	&m6936_MI,
	&m7014_MI,
	&m10605_MI,
	&m6895_MI,
	&m7023_MI,
	&m6894_MI,
	&m10444_MI,
	&m10445_MI,
	&m7016_MI,
	&m7017_MI,
	&m6896_MI,
	&m7018_MI,
	&m6934_MI,
	&m6897_MI,
	NULL,
	&m6868_MI,
	NULL,
	NULL,
	NULL,
	&m10443_MI,
};
static bool t1532_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1532_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1532_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1532__CustomAttributeCache = {
1,
NULL,
&t1532_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1532_0_0_0;
extern Il2CppType t1532_1_0_0;
extern Il2CppType t1425_0_0_0;
struct t1532;
extern CustomAttributesCache t1532__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1532_DM = 
{
	NULL, NULL, NULL, t1532_IOs, &t1425_0_0_0, t1532_VT, t1532_VTIGM, NULL};
TypeInfo t1532_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RC2", "System.Security.Cryptography", t1532_MIs, t1532_PIs, t1532_FIs, NULL, &t1532_TI, NULL, &t1532__CustomAttributeCache, &t1532_0_0_0, &t1532_1_0_0, &t1532_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1532), sizeof (t1532), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 2, 1, 0, 0, 27, 0, 1};
#include "t1983.h"
// Metadata Definition System.Security.Cryptography.RC2CryptoServiceProvider
extern TypeInfo t1983_TI;
#include "t1983MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10446_MI = 
{
	".ctor", (methodPointerType)&m10446, &t1983_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4490, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10447_MI = 
{
	"get_EffectiveKeySize", (methodPointerType)&m10447, &t1983_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 26, 0, false, false, 4491, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1983_m10448_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223145, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"rgbIV", 1, 134223146, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t1416_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10448_MI = 
{
	"CreateDecryptor", (methodPointerType)&m10448, &t1983_TI, &t1416_0_0_0, RuntimeInvoker_t9_t9_t9, t1983_m10448_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 21, 2, false, false, 4492, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1983_m10449_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223147, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"rgbIV", 1, 134223148, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t1416_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10449_MI = 
{
	"CreateEncryptor", (methodPointerType)&m10449, &t1983_TI, &t1416_0_0_0, RuntimeInvoker_t9_t9_t9, t1983_m10449_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 2, false, false, 4493, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10450_MI = 
{
	"GenerateIV", (methodPointerType)&m10450, &t1983_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 24, 0, false, false, 4494, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10451_MI = 
{
	"GenerateKey", (methodPointerType)&m10451, &t1983_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 25, 0, false, false, 4495, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1983_MIs[] =
{
	&m10446_MI,
	&m10447_MI,
	&m10448_MI,
	&m10449_MI,
	&m10450_MI,
	&m10451_MI,
	NULL
};
extern MethodInfo m10447_MI;
static PropertyInfo t1983____EffectiveKeySize_PropertyInfo = 
{
	&t1983_TI, "EffectiveKeySize", &m10447_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1983_PIs[] =
{
	&t1983____EffectiveKeySize_PropertyInfo,
	NULL
};
extern MethodInfo m10448_MI;
extern MethodInfo m10449_MI;
extern MethodInfo m10450_MI;
extern MethodInfo m10451_MI;
static Il2CppMethodReference t1983_VT[] =
{
	&m671_MI,
	&m6866_MI,
	&m672_MI,
	&m673_MI,
	&m7012_MI,
	&m7022_MI,
	&m7013_MI,
	&m6936_MI,
	&m7014_MI,
	&m10605_MI,
	&m6895_MI,
	&m7023_MI,
	&m6894_MI,
	&m10444_MI,
	&m10445_MI,
	&m7016_MI,
	&m7017_MI,
	&m6896_MI,
	&m7018_MI,
	&m6934_MI,
	&m6897_MI,
	&m10448_MI,
	&m6868_MI,
	&m10449_MI,
	&m10450_MI,
	&m10451_MI,
	&m10447_MI,
};
static bool t1983_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1983_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1983_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1983__CustomAttributeCache = {
1,
NULL,
&t1983_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1983_0_0_0;
extern Il2CppType t1983_1_0_0;
struct t1983;
extern CustomAttributesCache t1983__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1983_DM = 
{
	NULL, NULL, NULL, t1983_IOs, &t1532_0_0_0, t1983_VT, t1983_VTIGM, NULL};
TypeInfo t1983_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RC2CryptoServiceProvider", "System.Security.Cryptography", t1983_MIs, t1983_PIs, NULL, NULL, &t1983_TI, NULL, &t1983__CustomAttributeCache, &t1983_0_0_0, &t1983_1_0_0, &t1983_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1983), sizeof (t1983), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 1, 0, 0, 0, 27, 0, 1};
#include "t1984.h"
// Metadata Definition System.Security.Cryptography.RC2Transform
extern TypeInfo t1984_TI;
#include "t1984MD.h"
extern Il2CppType t1532_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1984_m10452_ParameterInfos[] = 
{
	{"rc2Algo", 0, 134223149, &EmptyCustomAttributesCache, &t1532_0_0_0},
	{"encryption", 1, 134223150, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"key", 2, 134223151, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"iv", 3, 134223152, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10452_MI = 
{
	".ctor", (methodPointerType)&m10452, &t1984_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t9_t9, t1984_m10452_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 4496, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10453_MI = 
{
	".cctor", (methodPointerType)&m10453, &t1984_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4497, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1984_m10454_ParameterInfos[] = 
{
	{"input", 0, 134223153, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"output", 1, 134223154, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10454_MI = 
{
	"ECB", (methodPointerType)&m10454, &t1984_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1984_m10454_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 2, false, false, 4498, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1984_MIs[] =
{
	&m10452_MI,
	&m10453_MI,
	&m10454_MI,
	NULL
};
extern Il2CppType t302_0_0_1;
FieldInfo t1984_f12_FieldInfo = 
{
	"R0", &t302_0_0_1, &t1984_TI, offsetof(t1984, f12), &EmptyCustomAttributesCache};
extern Il2CppType t302_0_0_1;
FieldInfo t1984_f13_FieldInfo = 
{
	"R1", &t302_0_0_1, &t1984_TI, offsetof(t1984, f13), &EmptyCustomAttributesCache};
extern Il2CppType t302_0_0_1;
FieldInfo t1984_f14_FieldInfo = 
{
	"R2", &t302_0_0_1, &t1984_TI, offsetof(t1984, f14), &EmptyCustomAttributesCache};
extern Il2CppType t302_0_0_1;
FieldInfo t1984_f15_FieldInfo = 
{
	"R3", &t302_0_0_1, &t1984_TI, offsetof(t1984, f15), &EmptyCustomAttributesCache};
extern Il2CppType t304_0_0_1;
FieldInfo t1984_f16_FieldInfo = 
{
	"K", &t304_0_0_1, &t1984_TI, offsetof(t1984, f16), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1984_f17_FieldInfo = 
{
	"j", &t125_0_0_1, &t1984_TI, offsetof(t1984, f17), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_49;
FieldInfo t1984_f18_FieldInfo = 
{
	"pitable", &t723_0_0_49, &t1984_TI, offsetof(t1984_SFs, f18), &EmptyCustomAttributesCache};
static FieldInfo* t1984_FIs[] =
{
	&t1984_f12_FieldInfo,
	&t1984_f13_FieldInfo,
	&t1984_f14_FieldInfo,
	&t1984_f15_FieldInfo,
	&t1984_f16_FieldInfo,
	&t1984_f17_FieldInfo,
	&t1984_f18_FieldInfo,
	NULL
};
extern MethodInfo m8140_MI;
extern MethodInfo m8139_MI;
extern MethodInfo m8142_MI;
extern MethodInfo m8149_MI;
extern MethodInfo m8156_MI;
extern MethodInfo m8141_MI;
extern MethodInfo m8143_MI;
extern MethodInfo m10454_MI;
extern MethodInfo m8144_MI;
extern MethodInfo m8145_MI;
extern MethodInfo m8146_MI;
extern MethodInfo m8147_MI;
static Il2CppMethodReference t1984_VT[] =
{
	&m671_MI,
	&m8140_MI,
	&m672_MI,
	&m673_MI,
	&m8139_MI,
	&m8142_MI,
	&m8149_MI,
	&m8156_MI,
	&m8141_MI,
	&m8142_MI,
	&m8143_MI,
	&m10454_MI,
	&m8144_MI,
	&m8145_MI,
	&m8146_MI,
	&m8147_MI,
	&m8149_MI,
	&m8156_MI,
};
static bool t1984_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1984_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1984_0_0_0;
extern Il2CppType t1984_1_0_0;
extern Il2CppType t1633_0_0_0;
struct t1984;
const Il2CppTypeDefinitionMetadata t1984_DM = 
{
	NULL, NULL, NULL, t1984_IOs, &t1633_0_0_0, t1984_VT, t1984_VTIGM, NULL};
TypeInfo t1984_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RC2Transform", "System.Security.Cryptography", t1984_MIs, NULL, t1984_FIs, NULL, &t1984_TI, NULL, &EmptyCustomAttributesCache, &t1984_0_0_0, &t1984_1_0_0, &t1984_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1984), sizeof (t1984), 0, -1, sizeof(t1984_SFs), 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, true, true, false, 3, 0, 7, 0, 0, 18, 0, 2};
#include "t1985.h"
// Metadata Definition System.Security.Cryptography.RIPEMD160
extern TypeInfo t1985_TI;
#include "t1985MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10455_MI = 
{
	".ctor", (methodPointerType)&m10455, &t1985_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4499, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1985_MIs[] =
{
	&m10455_MI,
	NULL
};
static Il2CppMethodReference t1985_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	NULL,
	NULL,
	&m6873_MI,
	NULL,
	&m7021_MI,
};
static bool t1985_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1985_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1985_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1985__CustomAttributeCache = {
1,
NULL,
&t1985_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1985_0_0_0;
extern Il2CppType t1985_1_0_0;
struct t1985;
extern CustomAttributesCache t1985__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1985_DM = 
{
	NULL, NULL, NULL, t1985_IOs, &t1359_0_0_0, t1985_VT, t1985_VTIGM, NULL};
TypeInfo t1985_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RIPEMD160", "System.Security.Cryptography", t1985_MIs, NULL, NULL, NULL, &t1985_TI, NULL, &t1985__CustomAttributeCache, &t1985_0_0_0, &t1985_1_0_0, &t1985_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1985), sizeof (t1985), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 15, 0, 2};
#include "t1986.h"
// Metadata Definition System.Security.Cryptography.RIPEMD160Managed
extern TypeInfo t1986_TI;
#include "t1986MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10456_MI = 
{
	".ctor", (methodPointerType)&m10456, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4500, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10457_MI = 
{
	"Initialize", (methodPointerType)&m10457, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4501, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1986_m10458_ParameterInfos[] = 
{
	{"rgb", 0, 134223155, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ibStart", 1, 134223156, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223157, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10458_MI = 
{
	"HashCore", (methodPointerType)&m10458, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1986_m10458_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4502, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10459_MI = 
{
	"HashFinal", (methodPointerType)&m10459, &t1986_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4503, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10460_MI = 
{
	"Finalize", (methodPointerType)&m10460, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4504, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1986_m10461_ParameterInfos[] = 
{
	{"buffer", 0, 134223158, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134223159, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10461_MI = 
{
	"ProcessBlock", (methodPointerType)&m10461, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1986_m10461_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4505, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10462_MI = 
{
	"Compress", (methodPointerType)&m10462, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4506, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
static ParameterInfo t1986_m10463_ParameterInfos[] = 
{
	{"length", 0, 134223160, &EmptyCustomAttributesCache, &t882_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10463_MI = 
{
	"CompressFinal", (methodPointerType)&m10463, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122_t292, t1986_m10463_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4507, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1986_m10464_ParameterInfos[] = 
{
	{"x", 0, 134223161, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"n", 1, 134223162, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10464_MI = 
{
	"ROL", (methodPointerType)&m10464, &t1986_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125, t1986_m10464_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4508, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1986_m10465_ParameterInfos[] = 
{
	{"x", 0, 134223163, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"y", 1, 134223164, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"z", 2, 134223165, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10465_MI = 
{
	"F", (methodPointerType)&m10465, &t1986_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125_t125, t1986_m10465_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4509, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1986_m10466_ParameterInfos[] = 
{
	{"x", 0, 134223166, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"y", 1, 134223167, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"z", 2, 134223168, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10466_MI = 
{
	"G", (methodPointerType)&m10466, &t1986_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125_t125, t1986_m10466_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4510, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1986_m10467_ParameterInfos[] = 
{
	{"x", 0, 134223169, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"y", 1, 134223170, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"z", 2, 134223171, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10467_MI = 
{
	"H", (methodPointerType)&m10467, &t1986_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125_t125, t1986_m10467_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4511, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1986_m10468_ParameterInfos[] = 
{
	{"x", 0, 134223172, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"y", 1, 134223173, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"z", 2, 134223174, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10468_MI = 
{
	"I", (methodPointerType)&m10468, &t1986_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125_t125, t1986_m10468_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4512, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1986_m10469_ParameterInfos[] = 
{
	{"x", 0, 134223175, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"y", 1, 134223176, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"z", 2, 134223177, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10469_MI = 
{
	"J", (methodPointerType)&m10469, &t1986_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125_t125, t1986_m10469_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4513, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1986_m10470_ParameterInfos[] = 
{
	{"a", 0, 134223178, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223179, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223180, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223181, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223182, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223183, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223184, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10470_MI = 
{
	"FF", (methodPointerType)&m10470, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125, t1986_m10470_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4514, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1986_m10471_ParameterInfos[] = 
{
	{"a", 0, 134223185, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223186, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223187, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223188, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223189, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223190, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223191, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10471_MI = 
{
	"GG", (methodPointerType)&m10471, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125, t1986_m10471_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4515, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1986_m10472_ParameterInfos[] = 
{
	{"a", 0, 134223192, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223193, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223194, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223195, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223196, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223197, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223198, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10472_MI = 
{
	"HH", (methodPointerType)&m10472, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125, t1986_m10472_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4516, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1986_m10473_ParameterInfos[] = 
{
	{"a", 0, 134223199, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223200, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223201, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223202, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223203, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223204, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223205, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10473_MI = 
{
	"II", (methodPointerType)&m10473, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125, t1986_m10473_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4517, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1986_m10474_ParameterInfos[] = 
{
	{"a", 0, 134223206, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223207, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223208, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223209, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223210, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223211, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223212, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10474_MI = 
{
	"JJ", (methodPointerType)&m10474, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125, t1986_m10474_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4518, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1986_m10475_ParameterInfos[] = 
{
	{"a", 0, 134223213, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223214, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223215, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223216, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223217, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223218, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223219, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10475_MI = 
{
	"FFF", (methodPointerType)&m10475, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125, t1986_m10475_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4519, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1986_m10476_ParameterInfos[] = 
{
	{"a", 0, 134223220, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223221, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223222, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223223, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223224, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223225, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223226, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10476_MI = 
{
	"GGG", (methodPointerType)&m10476, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125, t1986_m10476_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4520, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1986_m10477_ParameterInfos[] = 
{
	{"a", 0, 134223227, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223228, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223229, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223230, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223231, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223232, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223233, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10477_MI = 
{
	"HHH", (methodPointerType)&m10477, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125, t1986_m10477_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4521, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1986_m10478_ParameterInfos[] = 
{
	{"a", 0, 134223234, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223235, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223236, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223237, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223238, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223239, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223240, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10478_MI = 
{
	"III", (methodPointerType)&m10478, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125, t1986_m10478_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4522, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1986_m10479_ParameterInfos[] = 
{
	{"a", 0, 134223241, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223242, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223243, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223244, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223245, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223246, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223247, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10479_MI = 
{
	"JJJ", (methodPointerType)&m10479, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122_t2203_t125_t2203_t125_t125_t125_t125, t1986_m10479_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4523, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1986_MIs[] =
{
	&m10456_MI,
	&m10457_MI,
	&m10458_MI,
	&m10459_MI,
	&m10460_MI,
	&m10461_MI,
	&m10462_MI,
	&m10463_MI,
	&m10464_MI,
	&m10465_MI,
	&m10466_MI,
	&m10467_MI,
	&m10468_MI,
	&m10469_MI,
	&m10470_MI,
	&m10471_MI,
	&m10472_MI,
	&m10473_MI,
	&m10474_MI,
	&m10475_MI,
	&m10476_MI,
	&m10477_MI,
	&m10478_MI,
	&m10479_MI,
	NULL
};
extern Il2CppType t723_0_0_1;
FieldInfo t1986_f4_FieldInfo = 
{
	"_ProcessingBuffer", &t723_0_0_1, &t1986_TI, offsetof(t1986, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_1;
FieldInfo t1986_f5_FieldInfo = 
{
	"_X", &t1403_0_0_1, &t1986_TI, offsetof(t1986, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_1;
FieldInfo t1986_f6_FieldInfo = 
{
	"_HashValue", &t1403_0_0_1, &t1986_TI, offsetof(t1986, f6), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t1986_f7_FieldInfo = 
{
	"_Length", &t882_0_0_1, &t1986_TI, offsetof(t1986, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1986_f8_FieldInfo = 
{
	"_ProcessingBufferCount", &t125_0_0_1, &t1986_TI, offsetof(t1986, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1986_FIs[] =
{
	&t1986_f4_FieldInfo,
	&t1986_f5_FieldInfo,
	&t1986_f6_FieldInfo,
	&t1986_f7_FieldInfo,
	&t1986_f8_FieldInfo,
	NULL
};
extern MethodInfo m10460_MI;
extern MethodInfo m10458_MI;
extern MethodInfo m10459_MI;
extern MethodInfo m10457_MI;
static Il2CppMethodReference t1986_VT[] =
{
	&m671_MI,
	&m10460_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	&m10458_MI,
	&m10459_MI,
	&m6873_MI,
	&m10457_MI,
	&m7021_MI,
};
static bool t1986_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1986_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1986_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1986__CustomAttributeCache = {
1,
NULL,
&t1986_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1986_0_0_0;
extern Il2CppType t1986_1_0_0;
struct t1986;
extern CustomAttributesCache t1986__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1986_DM = 
{
	NULL, NULL, NULL, t1986_IOs, &t1985_0_0_0, t1986_VT, t1986_VTIGM, NULL};
TypeInfo t1986_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RIPEMD160Managed", "System.Security.Cryptography", t1986_MIs, NULL, t1986_FIs, NULL, &t1986_TI, NULL, &t1986__CustomAttributeCache, &t1986_0_0_0, &t1986_1_0_0, &t1986_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1986), sizeof (t1986), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 24, 0, 5, 0, 0, 15, 0, 2};
#include "t1987.h"
// Metadata Definition System.Security.Cryptography.RNGCryptoServiceProvider
extern TypeInfo t1987_TI;
#include "t1987MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10480_MI = 
{
	".ctor", (methodPointerType)&m10480, &t1987_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4524, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10481_MI = 
{
	".cctor", (methodPointerType)&m10481, &t1987_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4525, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10482_MI = 
{
	"Check", (methodPointerType)&m10482, &t1987_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4526, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10483_MI = 
{
	"RngOpen", (methodPointerType)&m10483, &t1987_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 145, 4096, 255, 0, false, false, 4527, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1987_m10484_ParameterInfos[] = 
{
	{"seed", 0, 134223248, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10484_MI = 
{
	"RngInitialize", (methodPointerType)&m10484, &t1987_TI, &t58_0_0_0, RuntimeInvoker_t58_t9, t1987_m10484_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 4528, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t58_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1987_m10485_ParameterInfos[] = 
{
	{"handle", 0, 134223249, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"data", 1, 134223250, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58_t58_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10485_MI = 
{
	"RngGetBytes", (methodPointerType)&m10485, &t1987_TI, &t58_0_0_0, RuntimeInvoker_t58_t58_t9, t1987_m10485_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 2, false, false, 4529, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
static ParameterInfo t1987_m10486_ParameterInfos[] = 
{
	{"handle", 0, 134223251, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m10486_MI = 
{
	"RngClose", (methodPointerType)&m10486, &t1987_TI, &t122_0_0_0, RuntimeInvoker_t122_t58, t1987_m10486_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 4530, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1987_m10487_ParameterInfos[] = 
{
	{"data", 0, 134223252, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10487_MI = 
{
	"GetBytes", (methodPointerType)&m10487, &t1987_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1987_m10487_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4531, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1987_m10488_ParameterInfos[] = 
{
	{"data", 0, 134223253, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10488_MI = 
{
	"GetNonZeroBytes", (methodPointerType)&m10488, &t1987_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1987_m10488_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4532, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10489_MI = 
{
	"Finalize", (methodPointerType)&m10489, &t1987_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4533, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1987_MIs[] =
{
	&m10480_MI,
	&m10481_MI,
	&m10482_MI,
	&m10483_MI,
	&m10484_MI,
	&m10485_MI,
	&m10486_MI,
	&m10487_MI,
	&m10488_MI,
	&m10489_MI,
	NULL
};
extern Il2CppType t9_0_0_17;
FieldInfo t1987_f0_FieldInfo = 
{
	"_lock", &t9_0_0_17, &t1987_TI, offsetof(t1987_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_1;
FieldInfo t1987_f1_FieldInfo = 
{
	"_handle", &t58_0_0_1, &t1987_TI, offsetof(t1987, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1987_FIs[] =
{
	&t1987_f0_FieldInfo,
	&t1987_f1_FieldInfo,
	NULL
};
extern MethodInfo m10489_MI;
extern MethodInfo m10487_MI;
extern MethodInfo m10488_MI;
static Il2CppMethodReference t1987_VT[] =
{
	&m671_MI,
	&m10489_MI,
	&m672_MI,
	&m673_MI,
	&m10487_MI,
	&m10488_MI,
};
static bool t1987_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1987_0_0_0;
extern Il2CppType t1987_1_0_0;
extern Il2CppType t1404_0_0_0;
struct t1987;
const Il2CppTypeDefinitionMetadata t1987_DM = 
{
	NULL, NULL, NULL, NULL, &t1404_0_0_0, t1987_VT, t1987_VTIGM, NULL};
TypeInfo t1987_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RNGCryptoServiceProvider", "System.Security.Cryptography", t1987_MIs, NULL, t1987_FIs, NULL, &t1987_TI, NULL, &EmptyCustomAttributesCache, &t1987_0_0_0, &t1987_1_0_0, &t1987_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1987), sizeof (t1987), 0, -1, sizeof(t1987_SFs), 0, -1, 257, 0, 0, false, false, false, false, false, false, false, true, true, false, 10, 0, 2, 0, 0, 6, 0, 0};
#include "t1208.h"
// Metadata Definition System.Security.Cryptography.RSA
extern TypeInfo t1208_TI;
#include "t1208MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6881_MI = 
{
	".ctor", (methodPointerType)&m6881, &t1208_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4534, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1208_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5755_MI = 
{
	"Create", (methodPointerType)&m5755, &t1208_TI, &t1208_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4535, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1208_m10490_ParameterInfos[] = 
{
	{"algName", 0, 134223254, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1208_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10490_MI = 
{
	"Create", (methodPointerType)&m10490, &t1208_TI, &t1208_0_0_0, RuntimeInvoker_t9_t9, t1208_m10490_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4536, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1208_m6872_ParameterInfos[] = 
{
	{"rgb", 0, 134223255, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6872_MI = 
{
	"EncryptValue", NULL, &t1208_TI, &t723_0_0_0, RuntimeInvoker_t9_t9, t1208_m6872_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 10, 1, false, false, 4537, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1208_m6871_ParameterInfos[] = 
{
	{"rgb", 0, 134223256, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6871_MI = 
{
	"DecryptValue", NULL, &t1208_TI, &t723_0_0_0, RuntimeInvoker_t9_t9, t1208_m6871_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 11, 1, false, false, 4538, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1208_m5754_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223257, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1341_0_0_0;
extern void* RuntimeInvoker_t1341_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m5754_MI = 
{
	"ExportParameters", NULL, &t1208_TI, &t1341_0_0_0, RuntimeInvoker_t1341_t186, t1208_m5754_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 12, 1, false, false, 4539, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1341_0_0_0;
extern Il2CppType t1341_0_0_0;
static ParameterInfo t1208_m5756_ParameterInfos[] = 
{
	{"parameters", 0, 134223258, &EmptyCustomAttributesCache, &t1341_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1341 (MethodInfo* method, void* obj, void** args);
MethodInfo m5756_MI = 
{
	"ImportParameters", NULL, &t1208_TI, &t122_0_0_0, RuntimeInvoker_t122_t1341, t1208_m5756_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 13, 1, false, false, 4540, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1341_0_0_0;
static ParameterInfo t1208_m10491_ParameterInfos[] = 
{
	{"parameters", 0, 134223259, &EmptyCustomAttributesCache, &t1341_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1341 (MethodInfo* method, void* obj, void** args);
MethodInfo m10491_MI = 
{
	"ZeroizePrivateKey", (methodPointerType)&m10491, &t1208_TI, &t122_0_0_0, RuntimeInvoker_t122_t1341, t1208_m10491_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4541, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1208_m7025_ParameterInfos[] = 
{
	{"xmlString", 0, 134223260, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7025_MI = 
{
	"FromXmlString", (methodPointerType)&m7025, &t1208_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1208_m7025_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 4542, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1208_m10492_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223261, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10492_MI = 
{
	"ToXmlString", (methodPointerType)&m10492, &t1208_TI, &t2_0_0_0, RuntimeInvoker_t9_t186, t1208_m10492_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 4543, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1208_MIs[] =
{
	&m6881_MI,
	&m5755_MI,
	&m10490_MI,
	&m6872_MI,
	&m6871_MI,
	&m5754_MI,
	&m5756_MI,
	&m10491_MI,
	&m7025_MI,
	&m10492_MI,
	NULL
};
extern MethodInfo m7024_MI;
extern MethodInfo m5817_MI;
extern MethodInfo m6882_MI;
extern MethodInfo m7025_MI;
extern MethodInfo m10492_MI;
static Il2CppMethodReference t1208_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7024_MI,
	&m5817_MI,
	&m6882_MI,
	NULL,
	&m7025_MI,
	&m10492_MI,
	NULL,
	NULL,
	NULL,
	NULL,
};
static bool t1208_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1208_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1208_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1208__CustomAttributeCache = {
1,
NULL,
&t1208_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1208_0_0_0;
extern Il2CppType t1208_1_0_0;
extern Il2CppType t1203_0_0_0;
struct t1208;
extern CustomAttributesCache t1208__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1208_DM = 
{
	NULL, NULL, NULL, t1208_IOs, &t1203_0_0_0, t1208_VT, t1208_VTIGM, NULL};
TypeInfo t1208_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSA", "System.Security.Cryptography", t1208_MIs, NULL, NULL, NULL, &t1208_TI, NULL, &t1208__CustomAttributeCache, &t1208_0_0_0, &t1208_1_0_0, &t1208_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1208), sizeof (t1208), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 0, 0, 0, 0, 14, 0, 1};
#include "t1339.h"
// Metadata Definition System.Security.Cryptography.RSACryptoServiceProvider
extern TypeInfo t1339_TI;
#include "t1339MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10493_MI = 
{
	".ctor", (methodPointerType)&m10493, &t1339_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4544, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1518_0_0_0;
extern Il2CppType t1518_0_0_0;
static ParameterInfo t1339_m6878_ParameterInfos[] = 
{
	{"parameters", 0, 134223262, &EmptyCustomAttributesCache, &t1518_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6878_MI = 
{
	".ctor", (methodPointerType)&m6878, &t1339_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1339_m6878_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4545, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1339_m5773_ParameterInfos[] = 
{
	{"dwKeySize", 0, 134223263, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5773_MI = 
{
	".ctor", (methodPointerType)&m5773, &t1339_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1339_m5773_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4546, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10494_MI = 
{
	".cctor", (methodPointerType)&m10494, &t1339_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4547, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t1518_0_0_0;
static ParameterInfo t1339_m10495_ParameterInfos[] = 
{
	{"dwKeySize", 0, 134223264, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"p", 1, 134223265, &EmptyCustomAttributesCache, &t1518_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10495_MI = 
{
	"Common", (methodPointerType)&m10495, &t1339_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9, t1339_m10495_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4548, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10496_MI = 
{
	"Finalize", (methodPointerType)&m10496, &t1339_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4549, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10497_MI = 
{
	"get_KeySize", (methodPointerType)&m10497, &t1339_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 5, 0, false, false, 4550, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m5752_MI = 
{
	"get_PublicOnly", (methodPointerType)&m5752, &t1339_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4551, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1339_m10498_ParameterInfos[] = 
{
	{"rgb", 0, 134223266, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10498_MI = 
{
	"DecryptValue", (methodPointerType)&m10498, &t1339_TI, &t723_0_0_0, RuntimeInvoker_t9_t9, t1339_m10498_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 1, false, false, 4552, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1339_m10499_ParameterInfos[] = 
{
	{"rgb", 0, 134223267, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10499_MI = 
{
	"EncryptValue", (methodPointerType)&m10499, &t1339_TI, &t723_0_0_0, RuntimeInvoker_t9_t9, t1339_m10499_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 4553, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1339_m10500_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223268, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1341_0_0_0;
extern void* RuntimeInvoker_t1341_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10500_MI = 
{
	"ExportParameters", (methodPointerType)&m10500, &t1339_TI, &t1341_0_0_0, RuntimeInvoker_t1341_t186, t1339_m10500_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 4554, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1341_0_0_0;
static ParameterInfo t1339_m10501_ParameterInfos[] = 
{
	{"parameters", 0, 134223269, &EmptyCustomAttributesCache, &t1341_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1341 (MethodInfo* method, void* obj, void** args);
MethodInfo m10501_MI = 
{
	"ImportParameters", (methodPointerType)&m10501, &t1339_TI, &t122_0_0_0, RuntimeInvoker_t122_t1341, t1339_m10501_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 1, false, false, 4555, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1339_m10502_ParameterInfos[] = 
{
	{"disposing", 0, 134223270, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10502_MI = 
{
	"Dispose", (methodPointerType)&m10502, &t1339_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1339_m10502_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 7, 1, false, false, 4556, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1427_0_0_0;
extern Il2CppType t1427_0_0_0;
static ParameterInfo t1339_m10503_ParameterInfos[] = 
{
	{"sender", 0, 134223271, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"e", 1, 134223272, &EmptyCustomAttributesCache, &t1427_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10503_MI = 
{
	"OnKeyGenerated", (methodPointerType)&m10503, &t1339_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1339_m10503_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4557, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1339_MIs[] =
{
	&m10493_MI,
	&m6878_MI,
	&m5773_MI,
	&m10494_MI,
	&m10495_MI,
	&m10496_MI,
	&m10497_MI,
	&m5752_MI,
	&m10498_MI,
	&m10499_MI,
	&m10500_MI,
	&m10501_MI,
	&m10502_MI,
	&m10503_MI,
	NULL
};
extern Il2CppType t1625_0_0_1;
FieldInfo t1339_f2_FieldInfo = 
{
	"store", &t1625_0_0_1, &t1339_TI, offsetof(t1339, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1339_f3_FieldInfo = 
{
	"persistKey", &t124_0_0_1, &t1339_TI, offsetof(t1339, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1339_f4_FieldInfo = 
{
	"persisted", &t124_0_0_1, &t1339_TI, offsetof(t1339, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1339_f5_FieldInfo = 
{
	"privateKeyExportable", &t124_0_0_1, &t1339_TI, offsetof(t1339, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1339_f6_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t1339_TI, offsetof(t1339, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1632_0_0_1;
FieldInfo t1339_f7_FieldInfo = 
{
	"rsa", &t1632_0_0_1, &t1339_TI, offsetof(t1339, f7), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_17;
FieldInfo t1339_f8_FieldInfo = 
{
	"useMachineKeyStore", &t124_0_0_17, &t1339_TI, offsetof(t1339_SFs, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1339_FIs[] =
{
	&t1339_f2_FieldInfo,
	&t1339_f3_FieldInfo,
	&t1339_f4_FieldInfo,
	&t1339_f5_FieldInfo,
	&t1339_f6_FieldInfo,
	&t1339_f7_FieldInfo,
	&t1339_f8_FieldInfo,
	NULL
};
extern MethodInfo m10497_MI;
static PropertyInfo t1339____KeySize_PropertyInfo = 
{
	&t1339_TI, "KeySize", &m10497_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5752_MI;
extern CustomAttributesCache t1339__CustomAttributeCache_t1339____PublicOnly_PropertyInfo;
static PropertyInfo t1339____PublicOnly_PropertyInfo = 
{
	&t1339_TI, "PublicOnly", &m5752_MI, NULL, 0, &t1339__CustomAttributeCache_t1339____PublicOnly_PropertyInfo};
static PropertyInfo* t1339_PIs[] =
{
	&t1339____KeySize_PropertyInfo,
	&t1339____PublicOnly_PropertyInfo,
	NULL
};
extern MethodInfo m10496_MI;
extern MethodInfo m10502_MI;
extern MethodInfo m10499_MI;
extern MethodInfo m10498_MI;
extern MethodInfo m10500_MI;
extern MethodInfo m10501_MI;
static Il2CppMethodReference t1339_VT[] =
{
	&m671_MI,
	&m10496_MI,
	&m672_MI,
	&m673_MI,
	&m7024_MI,
	&m10497_MI,
	&m6882_MI,
	&m10502_MI,
	&m7025_MI,
	&m10492_MI,
	&m10499_MI,
	&m10498_MI,
	&m10500_MI,
	&m10501_MI,
};
static bool t1339_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1339_ITIs[] = 
{
	&t2625_0_0_0,
};
static Il2CppInterfaceOffsetPair t1339_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t2625_0_0_0, 14},
};
void t1339_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1339_CustomAttributesCacheGenerator_t1339____PublicOnly_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1339__CustomAttributeCache = {
1,
NULL,
&t1339_CustomAttributesCacheGenerator
};
CustomAttributesCache t1339__CustomAttributeCache_t1339____PublicOnly_PropertyInfo = {
1,
NULL,
&t1339_CustomAttributesCacheGenerator_t1339____PublicOnly_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1339_0_0_0;
extern Il2CppType t1339_1_0_0;
struct t1339;
extern CustomAttributesCache t1339__CustomAttributeCache;
extern CustomAttributesCache t1339__CustomAttributeCache_t1339____PublicOnly_PropertyInfo;
const Il2CppTypeDefinitionMetadata t1339_DM = 
{
	NULL, NULL, t1339_ITIs, t1339_IOs, &t1208_0_0_0, t1339_VT, t1339_VTIGM, NULL};
TypeInfo t1339_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSACryptoServiceProvider", "System.Security.Cryptography", t1339_MIs, t1339_PIs, t1339_FIs, NULL, &t1339_TI, NULL, &t1339__CustomAttributeCache, &t1339_0_0_0, &t1339_1_0_0, &t1339_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1339), sizeof (t1339), 0, -1, sizeof(t1339_SFs), 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, true, false, 14, 2, 7, 0, 0, 14, 1, 2};
#include "t1541.h"
// Metadata Definition System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
extern TypeInfo t1541_TI;
#include "t1541MD.h"
extern Il2CppType t1203_0_0_0;
static ParameterInfo t1541_m7006_ParameterInfos[] = 
{
	{"key", 0, 134223273, &EmptyCustomAttributesCache, &t1203_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7006_MI = 
{
	".ctor", (methodPointerType)&m7006, &t1541_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1541_m7006_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4558, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1541_m7007_ParameterInfos[] = 
{
	{"rgbData", 0, 134223274, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7007_MI = 
{
	"CreateKeyExchange", (methodPointerType)&m7007, &t1541_TI, &t723_0_0_0, RuntimeInvoker_t9_t9, t1541_m7007_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4559, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1203_0_0_0;
static ParameterInfo t1541_m10504_ParameterInfos[] = 
{
	{"key", 0, 134223275, &EmptyCustomAttributesCache, &t1203_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10504_MI = 
{
	"SetRSAKey", (methodPointerType)&m10504, &t1541_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1541_m10504_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4560, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1541_MIs[] =
{
	&m7006_MI,
	&m7007_MI,
	&m10504_MI,
	NULL
};
extern Il2CppType t1208_0_0_1;
FieldInfo t1541_f0_FieldInfo = 
{
	"rsa", &t1208_0_0_1, &t1541_TI, offsetof(t1541, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1404_0_0_1;
FieldInfo t1541_f1_FieldInfo = 
{
	"random", &t1404_0_0_1, &t1541_TI, offsetof(t1541, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1541_FIs[] =
{
	&t1541_f0_FieldInfo,
	&t1541_f1_FieldInfo,
	NULL
};
extern MethodInfo m7007_MI;
static Il2CppMethodReference t1541_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7007_MI,
};
static bool t1541_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
void t1541_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1541__CustomAttributeCache = {
1,
NULL,
&t1541_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1541_0_0_0;
extern Il2CppType t1541_1_0_0;
extern Il2CppType t1970_0_0_0;
struct t1541;
extern CustomAttributesCache t1541__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1541_DM = 
{
	NULL, NULL, NULL, NULL, &t1970_0_0_0, t1541_VT, t1541_VTIGM, NULL};
TypeInfo t1541_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSAPKCS1KeyExchangeFormatter", "System.Security.Cryptography", t1541_MIs, NULL, t1541_FIs, NULL, &t1541_TI, NULL, &t1541__CustomAttributeCache, &t1541_0_0_0, &t1541_1_0_0, &t1541_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1541), sizeof (t1541), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 2, 0, 0, 5, 0, 0};
#include "t1527.h"
// Metadata Definition System.Security.Cryptography.RSAPKCS1SignatureDeformatter
extern TypeInfo t1527_TI;
#include "t1527MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10505_MI = 
{
	".ctor", (methodPointerType)&m10505, &t1527_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4561, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1203_0_0_0;
static ParameterInfo t1527_m6911_ParameterInfos[] = 
{
	{"key", 0, 134223276, &EmptyCustomAttributesCache, &t1203_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6911_MI = 
{
	".ctor", (methodPointerType)&m6911, &t1527_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1527_m6911_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4562, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1527_m6912_ParameterInfos[] = 
{
	{"strName", 0, 134223277, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6912_MI = 
{
	"SetHashAlgorithm", (methodPointerType)&m6912, &t1527_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1527_m6912_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4563, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1203_0_0_0;
static ParameterInfo t1527_m10506_ParameterInfos[] = 
{
	{"key", 0, 134223278, &EmptyCustomAttributesCache, &t1203_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10506_MI = 
{
	"SetKey", (methodPointerType)&m10506, &t1527_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1527_m10506_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4564, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1527_m6913_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223279, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"rgbSignature", 1, 134223280, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6913_MI = 
{
	"VerifySignature", (methodPointerType)&m6913, &t1527_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1527_m6913_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, false, 4565, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1527_MIs[] =
{
	&m10505_MI,
	&m6911_MI,
	&m6912_MI,
	&m10506_MI,
	&m6913_MI,
	NULL
};
extern Il2CppType t1208_0_0_1;
FieldInfo t1527_f0_FieldInfo = 
{
	"rsa", &t1208_0_0_1, &t1527_TI, offsetof(t1527, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1527_f1_FieldInfo = 
{
	"hashName", &t2_0_0_1, &t1527_TI, offsetof(t1527, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1527_FIs[] =
{
	&t1527_f0_FieldInfo,
	&t1527_f1_FieldInfo,
	NULL
};
extern MethodInfo m6912_MI;
extern MethodInfo m10506_MI;
extern MethodInfo m6913_MI;
static Il2CppMethodReference t1527_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m6912_MI,
	&m10506_MI,
	&m6913_MI,
};
static bool t1527_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
void t1527_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1527__CustomAttributeCache = {
1,
NULL,
&t1527_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1527_0_0_0;
extern Il2CppType t1527_1_0_0;
extern Il2CppType t1480_0_0_0;
struct t1527;
extern CustomAttributesCache t1527__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1527_DM = 
{
	NULL, NULL, NULL, NULL, &t1480_0_0_0, t1527_VT, t1527_VTIGM, NULL};
TypeInfo t1527_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSAPKCS1SignatureDeformatter", "System.Security.Cryptography", t1527_MIs, NULL, t1527_FIs, NULL, &t1527_TI, NULL, &t1527__CustomAttributeCache, &t1527_0_0_0, &t1527_1_0_0, &t1527_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1527), sizeof (t1527), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 2, 0, 0, 7, 0, 0};
#include "t1988.h"
// Metadata Definition System.Security.Cryptography.RSAPKCS1SignatureFormatter
extern TypeInfo t1988_TI;
#include "t1988MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10507_MI = 
{
	".ctor", (methodPointerType)&m10507, &t1988_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4566, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1988_m10508_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223281, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10508_MI = 
{
	"CreateSignature", (methodPointerType)&m10508, &t1988_TI, &t723_0_0_0, RuntimeInvoker_t9_t9, t1988_m10508_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 1, false, false, 4567, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1988_m10509_ParameterInfos[] = 
{
	{"strName", 0, 134223282, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10509_MI = 
{
	"SetHashAlgorithm", (methodPointerType)&m10509, &t1988_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1988_m10509_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4568, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1203_0_0_0;
static ParameterInfo t1988_m10510_ParameterInfos[] = 
{
	{"key", 0, 134223283, &EmptyCustomAttributesCache, &t1203_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10510_MI = 
{
	"SetKey", (methodPointerType)&m10510, &t1988_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1988_m10510_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4569, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1988_MIs[] =
{
	&m10507_MI,
	&m10508_MI,
	&m10509_MI,
	&m10510_MI,
	NULL
};
extern Il2CppType t1208_0_0_1;
FieldInfo t1988_f0_FieldInfo = 
{
	"rsa", &t1208_0_0_1, &t1988_TI, offsetof(t1988, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1359_0_0_1;
FieldInfo t1988_f1_FieldInfo = 
{
	"hash", &t1359_0_0_1, &t1988_TI, offsetof(t1988, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1988_FIs[] =
{
	&t1988_f0_FieldInfo,
	&t1988_f1_FieldInfo,
	NULL
};
extern MethodInfo m10509_MI;
extern MethodInfo m10510_MI;
extern MethodInfo m10508_MI;
static Il2CppMethodReference t1988_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10509_MI,
	&m10510_MI,
	&m10508_MI,
};
static bool t1988_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
void t1988_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1988__CustomAttributeCache = {
1,
NULL,
&t1988_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1988_0_0_0;
extern Il2CppType t1988_1_0_0;
extern Il2CppType t1482_0_0_0;
struct t1988;
extern CustomAttributesCache t1988__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1988_DM = 
{
	NULL, NULL, NULL, NULL, &t1482_0_0_0, t1988_VT, t1988_VTIGM, NULL};
TypeInfo t1988_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSAPKCS1SignatureFormatter", "System.Security.Cryptography", t1988_MIs, NULL, t1988_FIs, NULL, &t1988_TI, NULL, &t1988__CustomAttributeCache, &t1988_0_0_0, &t1988_1_0_0, &t1988_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1988), sizeof (t1988), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 2, 0, 0, 7, 0, 0};
#include "t1341.h"
// Metadata Definition System.Security.Cryptography.RSAParameters
extern TypeInfo t1341_TI;
#include "t1341MD.h"
static MethodInfo* t1341_MIs[] =
{
	NULL
};
extern Il2CppType t723_0_0_134;
FieldInfo t1341_f0_FieldInfo = 
{
	"P", &t723_0_0_134, &t1341_TI, offsetof(t1341, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_134;
FieldInfo t1341_f1_FieldInfo = 
{
	"Q", &t723_0_0_134, &t1341_TI, offsetof(t1341, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_134;
FieldInfo t1341_f2_FieldInfo = 
{
	"D", &t723_0_0_134, &t1341_TI, offsetof(t1341, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_134;
FieldInfo t1341_f3_FieldInfo = 
{
	"DP", &t723_0_0_134, &t1341_TI, offsetof(t1341, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_134;
FieldInfo t1341_f4_FieldInfo = 
{
	"DQ", &t723_0_0_134, &t1341_TI, offsetof(t1341, f4) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_134;
FieldInfo t1341_f5_FieldInfo = 
{
	"InverseQ", &t723_0_0_134, &t1341_TI, offsetof(t1341, f5) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_6;
FieldInfo t1341_f6_FieldInfo = 
{
	"Modulus", &t723_0_0_6, &t1341_TI, offsetof(t1341, f6) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_6;
FieldInfo t1341_f7_FieldInfo = 
{
	"Exponent", &t723_0_0_6, &t1341_TI, offsetof(t1341, f7) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1341_FIs[] =
{
	&t1341_f0_FieldInfo,
	&t1341_f1_FieldInfo,
	&t1341_f2_FieldInfo,
	&t1341_f3_FieldInfo,
	&t1341_f4_FieldInfo,
	&t1341_f5_FieldInfo,
	&t1341_f6_FieldInfo,
	&t1341_f7_FieldInfo,
	NULL
};
extern MethodInfo m680_MI;
extern MethodInfo m681_MI;
extern MethodInfo m682_MI;
static Il2CppMethodReference t1341_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1341_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1341_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1341__CustomAttributeCache = {
1,
NULL,
&t1341_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1341_1_0_0;
extern Il2CppType t117_0_0_0;
extern CustomAttributesCache t1341__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1341_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1341_VT, t1341_VTIGM, NULL};
TypeInfo t1341_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSAParameters", "System.Security.Cryptography", t1341_MIs, NULL, t1341_FIs, NULL, &t1341_TI, NULL, &t1341__CustomAttributeCache, &t1341_0_0_0, &t1341_1_0_0, &t1341_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t1341_marshal, (methodPointerType)t1341_marshal_back, (methodPointerType)t1341_marshal_cleanup, sizeof (t1341)+ sizeof (Il2CppObject), sizeof (t1341)+ sizeof (Il2CppObject), 0, sizeof(t1341_marshaled), 0, 0, -1, 1057033, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 8, 0, 0, 4, 0, 0};
#include "t1404.h"
// Metadata Definition System.Security.Cryptography.RandomNumberGenerator
extern TypeInfo t1404_TI;
#include "t1404MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10511_MI = 
{
	".ctor", (methodPointerType)&m10511, &t1404_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4570, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1404_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6859_MI = 
{
	"Create", (methodPointerType)&m6859, &t1404_TI, &t1404_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4571, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1404_m10512_ParameterInfos[] = 
{
	{"rngName", 0, 134223284, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1404_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10512_MI = 
{
	"Create", (methodPointerType)&m10512, &t1404_TI, &t1404_0_0_0, RuntimeInvoker_t9_t9, t1404_m10512_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4572, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1404_m6860_ParameterInfos[] = 
{
	{"data", 0, 134223285, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6860_MI = 
{
	"GetBytes", NULL, &t1404_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1404_m6860_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4573, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1404_m6952_ParameterInfos[] = 
{
	{"data", 0, 134223286, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6952_MI = 
{
	"GetNonZeroBytes", NULL, &t1404_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1404_m6952_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 4574, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1404_MIs[] =
{
	&m10511_MI,
	&m6859_MI,
	&m10512_MI,
	&m6860_MI,
	&m6952_MI,
	NULL
};
static Il2CppMethodReference t1404_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
};
static bool t1404_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1404_1_0_0;
struct t1404;
const Il2CppTypeDefinitionMetadata t1404_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1404_VT, t1404_VTIGM, NULL};
TypeInfo t1404_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RandomNumberGenerator", "System.Security.Cryptography", t1404_MIs, NULL, NULL, NULL, &t1404_TI, NULL, &EmptyCustomAttributesCache, &t1404_0_0_0, &t1404_1_0_0, &t1404_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1404), sizeof (t1404), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 6, 0, 0};
#include "t1534.h"
// Metadata Definition System.Security.Cryptography.Rijndael
extern TypeInfo t1534_TI;
#include "t1534MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10513_MI = 
{
	".ctor", (methodPointerType)&m10513, &t1534_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4575, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1534_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6933_MI = 
{
	"Create", (methodPointerType)&m6933, &t1534_TI, &t1534_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4576, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1534_m10514_ParameterInfos[] = 
{
	{"algName", 0, 134223287, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1534_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10514_MI = 
{
	"Create", (methodPointerType)&m10514, &t1534_TI, &t1534_0_0_0, RuntimeInvoker_t9_t9, t1534_m10514_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4577, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1534_MIs[] =
{
	&m10513_MI,
	&m6933_MI,
	&m10514_MI,
	NULL
};
extern MethodInfo m7015_MI;
extern MethodInfo m6935_MI;
static Il2CppMethodReference t1534_VT[] =
{
	&m671_MI,
	&m6866_MI,
	&m672_MI,
	&m673_MI,
	&m7012_MI,
	&m7022_MI,
	&m7013_MI,
	&m6936_MI,
	&m7014_MI,
	&m10605_MI,
	&m6895_MI,
	&m7023_MI,
	&m6894_MI,
	&m7015_MI,
	&m6935_MI,
	&m7016_MI,
	&m7017_MI,
	&m6896_MI,
	&m7018_MI,
	&m6934_MI,
	&m6897_MI,
	NULL,
	&m6868_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1534_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1534_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1534_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1534__CustomAttributeCache = {
1,
NULL,
&t1534_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1534_0_0_0;
extern Il2CppType t1534_1_0_0;
struct t1534;
extern CustomAttributesCache t1534__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1534_DM = 
{
	NULL, NULL, NULL, t1534_IOs, &t1425_0_0_0, t1534_VT, t1534_VTIGM, NULL};
TypeInfo t1534_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Rijndael", "System.Security.Cryptography", t1534_MIs, NULL, NULL, NULL, &t1534_TI, NULL, &t1534__CustomAttributeCache, &t1534_0_0_0, &t1534_1_0_0, &t1534_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1534), sizeof (t1534), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 3, 0, 0, 0, 0, 26, 0, 1};
#include "t1989.h"
// Metadata Definition System.Security.Cryptography.RijndaelManaged
extern TypeInfo t1989_TI;
#include "t1989MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10515_MI = 
{
	".ctor", (methodPointerType)&m10515, &t1989_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4578, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10516_MI = 
{
	"GenerateIV", (methodPointerType)&m10516, &t1989_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 24, 0, false, false, 4579, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10517_MI = 
{
	"GenerateKey", (methodPointerType)&m10517, &t1989_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 25, 0, false, false, 4580, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1989_m10518_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223288, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"rgbIV", 1, 134223289, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t1416_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10518_MI = 
{
	"CreateDecryptor", (methodPointerType)&m10518, &t1989_TI, &t1416_0_0_0, RuntimeInvoker_t9_t9_t9, t1989_m10518_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 21, 2, false, false, 4581, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1989_m10519_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223290, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"rgbIV", 1, 134223291, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t1416_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10519_MI = 
{
	"CreateEncryptor", (methodPointerType)&m10519, &t1989_TI, &t1416_0_0_0, RuntimeInvoker_t9_t9_t9, t1989_m10519_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 2, false, false, 4582, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1989_MIs[] =
{
	&m10515_MI,
	&m10516_MI,
	&m10517_MI,
	&m10518_MI,
	&m10519_MI,
	NULL
};
extern MethodInfo m10518_MI;
extern MethodInfo m10519_MI;
extern MethodInfo m10516_MI;
extern MethodInfo m10517_MI;
static Il2CppMethodReference t1989_VT[] =
{
	&m671_MI,
	&m6866_MI,
	&m672_MI,
	&m673_MI,
	&m7012_MI,
	&m7022_MI,
	&m7013_MI,
	&m6936_MI,
	&m7014_MI,
	&m10605_MI,
	&m6895_MI,
	&m7023_MI,
	&m6894_MI,
	&m7015_MI,
	&m6935_MI,
	&m7016_MI,
	&m7017_MI,
	&m6896_MI,
	&m7018_MI,
	&m6934_MI,
	&m6897_MI,
	&m10518_MI,
	&m6868_MI,
	&m10519_MI,
	&m10516_MI,
	&m10517_MI,
};
static bool t1989_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1989_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1989_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1989__CustomAttributeCache = {
1,
NULL,
&t1989_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1989_0_0_0;
extern Il2CppType t1989_1_0_0;
struct t1989;
extern CustomAttributesCache t1989__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1989_DM = 
{
	NULL, NULL, NULL, t1989_IOs, &t1534_0_0_0, t1989_VT, t1989_VTIGM, NULL};
TypeInfo t1989_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RijndaelManaged", "System.Security.Cryptography", t1989_MIs, NULL, NULL, NULL, &t1989_TI, NULL, &t1989__CustomAttributeCache, &t1989_0_0_0, &t1989_1_0_0, &t1989_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1989), sizeof (t1989), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 5, 0, 0, 0, 0, 26, 0, 1};
#include "t1990.h"
// Metadata Definition System.Security.Cryptography.RijndaelTransform
extern TypeInfo t1990_TI;
#include "t1990MD.h"
extern Il2CppType t1534_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1990_m10520_ParameterInfos[] = 
{
	{"algo", 0, 134223292, &EmptyCustomAttributesCache, &t1534_0_0_0},
	{"encryption", 1, 134223293, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"key", 2, 134223294, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"iv", 3, 134223295, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10520_MI = 
{
	".ctor", (methodPointerType)&m10520, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t9_t9, t1990_m10520_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 4583, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10521_MI = 
{
	".cctor", (methodPointerType)&m10521, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4584, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10522_MI = 
{
	"Clear", (methodPointerType)&m10522, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4585, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1990_m10523_ParameterInfos[] = 
{
	{"input", 0, 134223296, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"output", 1, 134223297, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10523_MI = 
{
	"ECB", (methodPointerType)&m10523, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1990_m10523_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 2, false, false, 4586, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
static ParameterInfo t1990_m10524_ParameterInfos[] = 
{
	{"a", 0, 134223298, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10524_MI = 
{
	"SubByte", (methodPointerType)&m10524, &t1990_TI, &t168_0_0_0, RuntimeInvoker_t168_t125, t1990_m10524_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4587, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t1403_0_0_0;
extern Il2CppType t1403_0_0_0;
static ParameterInfo t1990_m10525_ParameterInfos[] = 
{
	{"indata", 0, 134223299, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"outdata", 1, 134223300, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ekey", 2, 134223301, &EmptyCustomAttributesCache, &t1403_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10525_MI = 
{
	"Encrypt128", (methodPointerType)&m10525, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1990_m10525_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4588, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t1403_0_0_0;
static ParameterInfo t1990_m10526_ParameterInfos[] = 
{
	{"indata", 0, 134223302, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"outdata", 1, 134223303, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ekey", 2, 134223304, &EmptyCustomAttributesCache, &t1403_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10526_MI = 
{
	"Encrypt192", (methodPointerType)&m10526, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1990_m10526_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4589, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t1403_0_0_0;
static ParameterInfo t1990_m10527_ParameterInfos[] = 
{
	{"indata", 0, 134223305, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"outdata", 1, 134223306, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ekey", 2, 134223307, &EmptyCustomAttributesCache, &t1403_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10527_MI = 
{
	"Encrypt256", (methodPointerType)&m10527, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1990_m10527_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4590, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t1403_0_0_0;
static ParameterInfo t1990_m10528_ParameterInfos[] = 
{
	{"indata", 0, 134223308, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"outdata", 1, 134223309, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ekey", 2, 134223310, &EmptyCustomAttributesCache, &t1403_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10528_MI = 
{
	"Decrypt128", (methodPointerType)&m10528, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1990_m10528_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4591, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t1403_0_0_0;
static ParameterInfo t1990_m10529_ParameterInfos[] = 
{
	{"indata", 0, 134223311, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"outdata", 1, 134223312, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ekey", 2, 134223313, &EmptyCustomAttributesCache, &t1403_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10529_MI = 
{
	"Decrypt192", (methodPointerType)&m10529, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1990_m10529_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4592, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t1403_0_0_0;
static ParameterInfo t1990_m10530_ParameterInfos[] = 
{
	{"indata", 0, 134223314, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"outdata", 1, 134223315, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ekey", 2, 134223316, &EmptyCustomAttributesCache, &t1403_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10530_MI = 
{
	"Decrypt256", (methodPointerType)&m10530, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1990_m10530_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4593, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1990_MIs[] =
{
	&m10520_MI,
	&m10521_MI,
	&m10522_MI,
	&m10523_MI,
	&m10524_MI,
	&m10525_MI,
	&m10526_MI,
	&m10527_MI,
	&m10528_MI,
	&m10529_MI,
	&m10530_MI,
	NULL
};
extern Il2CppType t1403_0_0_1;
FieldInfo t1990_f12_FieldInfo = 
{
	"expandedKey", &t1403_0_0_1, &t1990_TI, offsetof(t1990, f12), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1990_f13_FieldInfo = 
{
	"Nb", &t125_0_0_1, &t1990_TI, offsetof(t1990, f13), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1990_f14_FieldInfo = 
{
	"Nk", &t125_0_0_1, &t1990_TI, offsetof(t1990, f14), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1990_f15_FieldInfo = 
{
	"Nr", &t125_0_0_1, &t1990_TI, offsetof(t1990, f15), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_49;
FieldInfo t1990_f16_FieldInfo = 
{
	"Rcon", &t1403_0_0_49, &t1990_TI, offsetof(t1990_SFs, f16), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_49;
FieldInfo t1990_f17_FieldInfo = 
{
	"SBox", &t723_0_0_49, &t1990_TI, offsetof(t1990_SFs, f17), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_49;
FieldInfo t1990_f18_FieldInfo = 
{
	"iSBox", &t723_0_0_49, &t1990_TI, offsetof(t1990_SFs, f18), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_49;
FieldInfo t1990_f19_FieldInfo = 
{
	"T0", &t1403_0_0_49, &t1990_TI, offsetof(t1990_SFs, f19), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_49;
FieldInfo t1990_f20_FieldInfo = 
{
	"T1", &t1403_0_0_49, &t1990_TI, offsetof(t1990_SFs, f20), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_49;
FieldInfo t1990_f21_FieldInfo = 
{
	"T2", &t1403_0_0_49, &t1990_TI, offsetof(t1990_SFs, f21), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_49;
FieldInfo t1990_f22_FieldInfo = 
{
	"T3", &t1403_0_0_49, &t1990_TI, offsetof(t1990_SFs, f22), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_49;
FieldInfo t1990_f23_FieldInfo = 
{
	"iT0", &t1403_0_0_49, &t1990_TI, offsetof(t1990_SFs, f23), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_49;
FieldInfo t1990_f24_FieldInfo = 
{
	"iT1", &t1403_0_0_49, &t1990_TI, offsetof(t1990_SFs, f24), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_49;
FieldInfo t1990_f25_FieldInfo = 
{
	"iT2", &t1403_0_0_49, &t1990_TI, offsetof(t1990_SFs, f25), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_49;
FieldInfo t1990_f26_FieldInfo = 
{
	"iT3", &t1403_0_0_49, &t1990_TI, offsetof(t1990_SFs, f26), &EmptyCustomAttributesCache};
static FieldInfo* t1990_FIs[] =
{
	&t1990_f12_FieldInfo,
	&t1990_f13_FieldInfo,
	&t1990_f14_FieldInfo,
	&t1990_f15_FieldInfo,
	&t1990_f16_FieldInfo,
	&t1990_f17_FieldInfo,
	&t1990_f18_FieldInfo,
	&t1990_f19_FieldInfo,
	&t1990_f20_FieldInfo,
	&t1990_f21_FieldInfo,
	&t1990_f22_FieldInfo,
	&t1990_f23_FieldInfo,
	&t1990_f24_FieldInfo,
	&t1990_f25_FieldInfo,
	&t1990_f26_FieldInfo,
	NULL
};
extern MethodInfo m10523_MI;
static Il2CppMethodReference t1990_VT[] =
{
	&m671_MI,
	&m8140_MI,
	&m672_MI,
	&m673_MI,
	&m8139_MI,
	&m8142_MI,
	&m8149_MI,
	&m8156_MI,
	&m8141_MI,
	&m8142_MI,
	&m8143_MI,
	&m10523_MI,
	&m8144_MI,
	&m8145_MI,
	&m8146_MI,
	&m8147_MI,
	&m8149_MI,
	&m8156_MI,
};
static bool t1990_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1990_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1990_0_0_0;
extern Il2CppType t1990_1_0_0;
struct t1990;
const Il2CppTypeDefinitionMetadata t1990_DM = 
{
	NULL, NULL, NULL, t1990_IOs, &t1633_0_0_0, t1990_VT, t1990_VTIGM, NULL};
TypeInfo t1990_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RijndaelTransform", "System.Security.Cryptography", t1990_MIs, NULL, t1990_FIs, NULL, &t1990_TI, NULL, &EmptyCustomAttributesCache, &t1990_0_0_0, &t1990_1_0_0, &t1990_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1990), sizeof (t1990), 0, -1, sizeof(t1990_SFs), 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, true, true, false, 11, 0, 15, 0, 0, 18, 0, 2};
#include "t1991.h"
// Metadata Definition System.Security.Cryptography.RijndaelManagedTransform
extern TypeInfo t1991_TI;
#include "t1991MD.h"
extern Il2CppType t1534_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1991_m10531_ParameterInfos[] = 
{
	{"algo", 0, 134223317, &EmptyCustomAttributesCache, &t1534_0_0_0},
	{"encryption", 1, 134223318, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"key", 2, 134223319, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"iv", 3, 134223320, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10531_MI = 
{
	".ctor", (methodPointerType)&m10531, &t1991_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t9_t9, t1991_m10531_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 4594, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10532_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m10532, &t1991_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 4595, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10533_MI = 
{
	"get_CanReuseTransform", (methodPointerType)&m10533, &t1991_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 4596, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1991_m10534_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223321, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 1, 134223322, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223323, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"outputBuffer", 3, 134223324, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"outputOffset", 4, 134223325, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10534_MI = 
{
	"TransformBlock", (methodPointerType)&m10534, &t1991_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t1991_m10534_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 5, false, false, 4597, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1991_m10535_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223326, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 1, 134223327, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223328, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10535_MI = 
{
	"TransformFinalBlock", (methodPointerType)&m10535, &t1991_TI, &t723_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t1991_m10535_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 3, false, false, 4598, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1991_MIs[] =
{
	&m10531_MI,
	&m10532_MI,
	&m10533_MI,
	&m10534_MI,
	&m10535_MI,
	NULL
};
extern Il2CppType t1990_0_0_1;
FieldInfo t1991_f0_FieldInfo = 
{
	"_st", &t1990_0_0_1, &t1991_TI, offsetof(t1991, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1991_f1_FieldInfo = 
{
	"_bs", &t125_0_0_1, &t1991_TI, offsetof(t1991, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1991_FIs[] =
{
	&t1991_f0_FieldInfo,
	&t1991_f1_FieldInfo,
	NULL
};
extern MethodInfo m10533_MI;
static PropertyInfo t1991____CanReuseTransform_PropertyInfo = 
{
	&t1991_TI, "CanReuseTransform", &m10533_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1991_PIs[] =
{
	&t1991____CanReuseTransform_PropertyInfo,
	NULL
};
extern MethodInfo m10532_MI;
extern MethodInfo m10534_MI;
extern MethodInfo m10535_MI;
static Il2CppMethodReference t1991_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10532_MI,
	&m10533_MI,
	&m10534_MI,
	&m10535_MI,
};
static bool t1991_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1991_ITIs[] = 
{
	&t137_0_0_0,
	&t1416_0_0_0,
};
static Il2CppInterfaceOffsetPair t1991_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1991_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1991__CustomAttributeCache = {
1,
NULL,
&t1991_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1991_0_0_0;
extern Il2CppType t1991_1_0_0;
struct t1991;
extern CustomAttributesCache t1991__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1991_DM = 
{
	NULL, NULL, t1991_ITIs, t1991_IOs, &t9_0_0_0, t1991_VT, t1991_VTIGM, NULL};
TypeInfo t1991_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RijndaelManagedTransform", "System.Security.Cryptography", t1991_MIs, t1991_PIs, t1991_FIs, NULL, &t1991_TI, NULL, &t1991__CustomAttributeCache, &t1991_0_0_0, &t1991_1_0_0, &t1991_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1991), sizeof (t1991), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 1, 2, 0, 0, 8, 2, 2};
#include "t1357.h"
// Metadata Definition System.Security.Cryptography.SHA1
extern TypeInfo t1357_TI;
#include "t1357MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10536_MI = 
{
	".ctor", (methodPointerType)&m10536, &t1357_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4599, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1357_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5867_MI = 
{
	"Create", (methodPointerType)&m5867, &t1357_TI, &t1357_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4600, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1357_m10537_ParameterInfos[] = 
{
	{"hashName", 0, 134223329, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1357_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10537_MI = 
{
	"Create", (methodPointerType)&m10537, &t1357_TI, &t1357_0_0_0, RuntimeInvoker_t9_t9, t1357_m10537_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4601, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1357_MIs[] =
{
	&m10536_MI,
	&m5867_MI,
	&m10537_MI,
	NULL
};
static Il2CppMethodReference t1357_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	NULL,
	NULL,
	&m6873_MI,
	NULL,
	&m7021_MI,
};
static bool t1357_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1357_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1357_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1357__CustomAttributeCache = {
1,
NULL,
&t1357_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1357_0_0_0;
extern Il2CppType t1357_1_0_0;
struct t1357;
extern CustomAttributesCache t1357__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1357_DM = 
{
	NULL, NULL, NULL, t1357_IOs, &t1359_0_0_0, t1357_VT, t1357_VTIGM, NULL};
TypeInfo t1357_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA1", "System.Security.Cryptography", t1357_MIs, NULL, NULL, NULL, &t1357_TI, NULL, &t1357__CustomAttributeCache, &t1357_0_0_0, &t1357_1_0_0, &t1357_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1357), sizeof (t1357), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 15, 0, 2};
#include "t1992.h"
// Metadata Definition System.Security.Cryptography.SHA1Internal
extern TypeInfo t1992_TI;
#include "t1992MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10538_MI = 
{
	".ctor", (methodPointerType)&m10538, &t1992_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4602, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1992_m10539_ParameterInfos[] = 
{
	{"rgb", 0, 134223330, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ibStart", 1, 134223331, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223332, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10539_MI = 
{
	"HashCore", (methodPointerType)&m10539, &t1992_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1992_m10539_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4603, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10540_MI = 
{
	"HashFinal", (methodPointerType)&m10540, &t1992_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4604, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10541_MI = 
{
	"Initialize", (methodPointerType)&m10541, &t1992_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4605, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1992_m10542_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223333, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 1, 134223334, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10542_MI = 
{
	"ProcessBlock", (methodPointerType)&m10542, &t1992_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1992_m10542_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4606, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1403_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1992_m10543_ParameterInfos[] = 
{
	{"buff", 0, 134223335, &EmptyCustomAttributesCache, &t1403_0_0_0},
	{"input", 1, 134223336, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 2, 134223337, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10543_MI = 
{
	"InitialiseBuff", (methodPointerType)&m10543, &t1992_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1992_m10543_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4607, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1403_0_0_0;
static ParameterInfo t1992_m10544_ParameterInfos[] = 
{
	{"buff", 0, 134223338, &EmptyCustomAttributesCache, &t1403_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10544_MI = 
{
	"FillBuff", (methodPointerType)&m10544, &t1992_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1992_m10544_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4608, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1992_m10545_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223339, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 1, 134223340, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223341, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10545_MI = 
{
	"ProcessFinalBlock", (methodPointerType)&m10545, &t1992_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1992_m10545_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4609, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1992_m10546_ParameterInfos[] = 
{
	{"length", 0, 134223342, &EmptyCustomAttributesCache, &t882_0_0_0},
	{"buffer", 1, 134223343, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"position", 2, 134223344, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10546_MI = 
{
	"AddLength", (methodPointerType)&m10546, &t1992_TI, &t122_0_0_0, RuntimeInvoker_t122_t292_t9_t125, t1992_m10546_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 3, false, false, 4610, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1992_MIs[] =
{
	&m10538_MI,
	&m10539_MI,
	&m10540_MI,
	&m10541_MI,
	&m10542_MI,
	&m10543_MI,
	&m10544_MI,
	&m10545_MI,
	&m10546_MI,
	NULL
};
extern Il2CppType t1403_0_0_1;
FieldInfo t1992_f0_FieldInfo = 
{
	"_H", &t1403_0_0_1, &t1992_TI, offsetof(t1992, f0), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t1992_f1_FieldInfo = 
{
	"count", &t882_0_0_1, &t1992_TI, offsetof(t1992, f1), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t1992_f2_FieldInfo = 
{
	"_ProcessingBuffer", &t723_0_0_1, &t1992_TI, offsetof(t1992, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1992_f3_FieldInfo = 
{
	"_ProcessingBufferCount", &t125_0_0_1, &t1992_TI, offsetof(t1992, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_1;
FieldInfo t1992_f4_FieldInfo = 
{
	"buff", &t1403_0_0_1, &t1992_TI, offsetof(t1992, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1992_FIs[] =
{
	&t1992_f0_FieldInfo,
	&t1992_f1_FieldInfo,
	&t1992_f2_FieldInfo,
	&t1992_f3_FieldInfo,
	&t1992_f4_FieldInfo,
	NULL
};
static Il2CppMethodReference t1992_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1992_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1992_0_0_0;
extern Il2CppType t1992_1_0_0;
struct t1992;
const Il2CppTypeDefinitionMetadata t1992_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1992_VT, t1992_VTIGM, NULL};
TypeInfo t1992_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA1Internal", "System.Security.Cryptography", t1992_MIs, NULL, t1992_FIs, NULL, &t1992_TI, NULL, &EmptyCustomAttributesCache, &t1992_0_0_0, &t1992_1_0_0, &t1992_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1992), sizeof (t1992), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 0, 5, 0, 0, 4, 0, 0};
#include "t1993.h"
// Metadata Definition System.Security.Cryptography.SHA1CryptoServiceProvider
extern TypeInfo t1993_TI;
#include "t1993MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10547_MI = 
{
	".ctor", (methodPointerType)&m10547, &t1993_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4611, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10548_MI = 
{
	"Finalize", (methodPointerType)&m10548, &t1993_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4612, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1993_m10549_ParameterInfos[] = 
{
	{"disposing", 0, 134223345, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10549_MI = 
{
	"Dispose", (methodPointerType)&m10549, &t1993_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1993_m10549_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 14, 1, false, false, 4613, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1993_m10550_ParameterInfos[] = 
{
	{"rgb", 0, 134223346, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ibStart", 1, 134223347, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223348, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10550_MI = 
{
	"HashCore", (methodPointerType)&m10550, &t1993_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1993_m10550_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4614, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10551_MI = 
{
	"HashFinal", (methodPointerType)&m10551, &t1993_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4615, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10552_MI = 
{
	"Initialize", (methodPointerType)&m10552, &t1993_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4616, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1993_MIs[] =
{
	&m10547_MI,
	&m10548_MI,
	&m10549_MI,
	&m10550_MI,
	&m10551_MI,
	&m10552_MI,
	NULL
};
extern Il2CppType t1992_0_0_1;
FieldInfo t1993_f4_FieldInfo = 
{
	"sha", &t1992_0_0_1, &t1993_TI, offsetof(t1993, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1993_FIs[] =
{
	&t1993_f4_FieldInfo,
	NULL
};
extern MethodInfo m10548_MI;
extern MethodInfo m10550_MI;
extern MethodInfo m10551_MI;
extern MethodInfo m10552_MI;
extern MethodInfo m10549_MI;
static Il2CppMethodReference t1993_VT[] =
{
	&m671_MI,
	&m10548_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	&m10550_MI,
	&m10551_MI,
	&m6873_MI,
	&m10552_MI,
	&m10549_MI,
};
static bool t1993_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1993_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1993_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1993__CustomAttributeCache = {
1,
NULL,
&t1993_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1993_0_0_0;
extern Il2CppType t1993_1_0_0;
struct t1993;
extern CustomAttributesCache t1993__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1993_DM = 
{
	NULL, NULL, NULL, t1993_IOs, &t1357_0_0_0, t1993_VT, t1993_VTIGM, NULL};
TypeInfo t1993_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA1CryptoServiceProvider", "System.Security.Cryptography", t1993_MIs, NULL, t1993_FIs, NULL, &t1993_TI, NULL, &t1993__CustomAttributeCache, &t1993_0_0_0, &t1993_1_0_0, &t1993_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1993), sizeof (t1993), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 0, 1, 0, 0, 15, 0, 2};
#include "t1994.h"
// Metadata Definition System.Security.Cryptography.SHA1Managed
extern TypeInfo t1994_TI;
#include "t1994MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10553_MI = 
{
	".ctor", (methodPointerType)&m10553, &t1994_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4617, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1994_m10554_ParameterInfos[] = 
{
	{"rgb", 0, 134223349, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ibStart", 1, 134223350, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223351, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10554_MI = 
{
	"HashCore", (methodPointerType)&m10554, &t1994_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1994_m10554_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4618, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10555_MI = 
{
	"HashFinal", (methodPointerType)&m10555, &t1994_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4619, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10556_MI = 
{
	"Initialize", (methodPointerType)&m10556, &t1994_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4620, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1994_MIs[] =
{
	&m10553_MI,
	&m10554_MI,
	&m10555_MI,
	&m10556_MI,
	NULL
};
extern Il2CppType t1992_0_0_1;
FieldInfo t1994_f4_FieldInfo = 
{
	"sha", &t1992_0_0_1, &t1994_TI, offsetof(t1994, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1994_FIs[] =
{
	&t1994_f4_FieldInfo,
	NULL
};
extern MethodInfo m10554_MI;
extern MethodInfo m10555_MI;
extern MethodInfo m10556_MI;
static Il2CppMethodReference t1994_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	&m10554_MI,
	&m10555_MI,
	&m6873_MI,
	&m10556_MI,
	&m7021_MI,
};
static bool t1994_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1994_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1994_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1994__CustomAttributeCache = {
1,
NULL,
&t1994_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1994_0_0_0;
extern Il2CppType t1994_1_0_0;
struct t1994;
extern CustomAttributesCache t1994__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1994_DM = 
{
	NULL, NULL, NULL, t1994_IOs, &t1357_0_0_0, t1994_VT, t1994_VTIGM, NULL};
TypeInfo t1994_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA1Managed", "System.Security.Cryptography", t1994_MIs, NULL, t1994_FIs, NULL, &t1994_TI, NULL, &t1994__CustomAttributeCache, &t1994_0_0_0, &t1994_1_0_0, &t1994_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1994), sizeof (t1994), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 15, 0, 2};
#include "t1525.h"
// Metadata Definition System.Security.Cryptography.SHA256
extern TypeInfo t1525_TI;
#include "t1525MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10557_MI = 
{
	".ctor", (methodPointerType)&m10557, &t1525_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4621, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1525_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6905_MI = 
{
	"Create", (methodPointerType)&m6905, &t1525_TI, &t1525_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4622, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1525_m10558_ParameterInfos[] = 
{
	{"hashName", 0, 134223352, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1525_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10558_MI = 
{
	"Create", (methodPointerType)&m10558, &t1525_TI, &t1525_0_0_0, RuntimeInvoker_t9_t9, t1525_m10558_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4623, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1525_MIs[] =
{
	&m10557_MI,
	&m6905_MI,
	&m10558_MI,
	NULL
};
static Il2CppMethodReference t1525_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	NULL,
	NULL,
	&m6873_MI,
	NULL,
	&m7021_MI,
};
static bool t1525_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1525_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1525_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1525__CustomAttributeCache = {
1,
NULL,
&t1525_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1525_0_0_0;
extern Il2CppType t1525_1_0_0;
struct t1525;
extern CustomAttributesCache t1525__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1525_DM = 
{
	NULL, NULL, NULL, t1525_IOs, &t1359_0_0_0, t1525_VT, t1525_VTIGM, NULL};
TypeInfo t1525_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA256", "System.Security.Cryptography", t1525_MIs, NULL, NULL, NULL, &t1525_TI, NULL, &t1525__CustomAttributeCache, &t1525_0_0_0, &t1525_1_0_0, &t1525_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1525), sizeof (t1525), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 15, 0, 2};
#include "t1995.h"
// Metadata Definition System.Security.Cryptography.SHA256Managed
extern TypeInfo t1995_TI;
#include "t1995MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10559_MI = 
{
	".ctor", (methodPointerType)&m10559, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4624, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10560_ParameterInfos[] = 
{
	{"rgb", 0, 134223353, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ibStart", 1, 134223354, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223355, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10560_MI = 
{
	"HashCore", (methodPointerType)&m10560, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1995_m10560_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4625, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10561_MI = 
{
	"HashFinal", (methodPointerType)&m10561, &t1995_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4626, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10562_MI = 
{
	"Initialize", (methodPointerType)&m10562, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4627, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10563_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223356, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 1, 134223357, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10563_MI = 
{
	"ProcessBlock", (methodPointerType)&m10563, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1995_m10563_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4628, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10564_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223358, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 1, 134223359, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223360, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10564_MI = 
{
	"ProcessFinalBlock", (methodPointerType)&m10564, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1995_m10564_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4629, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10565_ParameterInfos[] = 
{
	{"length", 0, 134223361, &EmptyCustomAttributesCache, &t882_0_0_0},
	{"buffer", 1, 134223362, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"position", 2, 134223363, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10565_MI = 
{
	"AddLength", (methodPointerType)&m10565, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t292_t9_t125, t1995_m10565_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 3, false, false, 4630, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1995_MIs[] =
{
	&m10559_MI,
	&m10560_MI,
	&m10561_MI,
	&m10562_MI,
	&m10563_MI,
	&m10564_MI,
	&m10565_MI,
	NULL
};
extern Il2CppType t1403_0_0_1;
FieldInfo t1995_f4_FieldInfo = 
{
	"_H", &t1403_0_0_1, &t1995_TI, offsetof(t1995, f4), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t1995_f5_FieldInfo = 
{
	"count", &t882_0_0_1, &t1995_TI, offsetof(t1995, f5), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t1995_f6_FieldInfo = 
{
	"_ProcessingBuffer", &t723_0_0_1, &t1995_TI, offsetof(t1995, f6), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1995_f7_FieldInfo = 
{
	"_ProcessingBufferCount", &t125_0_0_1, &t1995_TI, offsetof(t1995, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_1;
FieldInfo t1995_f8_FieldInfo = 
{
	"buff", &t1403_0_0_1, &t1995_TI, offsetof(t1995, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1995_FIs[] =
{
	&t1995_f4_FieldInfo,
	&t1995_f5_FieldInfo,
	&t1995_f6_FieldInfo,
	&t1995_f7_FieldInfo,
	&t1995_f8_FieldInfo,
	NULL
};
extern MethodInfo m10560_MI;
extern MethodInfo m10561_MI;
extern MethodInfo m10562_MI;
static Il2CppMethodReference t1995_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	&m10560_MI,
	&m10561_MI,
	&m6873_MI,
	&m10562_MI,
	&m7021_MI,
};
static bool t1995_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1995_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1995_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1995__CustomAttributeCache = {
1,
NULL,
&t1995_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1995_0_0_0;
extern Il2CppType t1995_1_0_0;
struct t1995;
extern CustomAttributesCache t1995__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1995_DM = 
{
	NULL, NULL, NULL, t1995_IOs, &t1525_0_0_0, t1995_VT, t1995_VTIGM, NULL};
TypeInfo t1995_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA256Managed", "System.Security.Cryptography", t1995_MIs, NULL, t1995_FIs, NULL, &t1995_TI, NULL, &t1995__CustomAttributeCache, &t1995_0_0_0, &t1995_1_0_0, &t1995_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1995), sizeof (t1995), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 7, 0, 5, 0, 0, 15, 0, 2};
#include "t1996.h"
// Metadata Definition System.Security.Cryptography.SHA384
extern TypeInfo t1996_TI;
#include "t1996MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10566_MI = 
{
	".ctor", (methodPointerType)&m10566, &t1996_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4631, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1996_MIs[] =
{
	&m10566_MI,
	NULL
};
static Il2CppMethodReference t1996_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	NULL,
	NULL,
	&m6873_MI,
	NULL,
	&m7021_MI,
};
static bool t1996_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1996_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1996_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1996__CustomAttributeCache = {
1,
NULL,
&t1996_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1996_0_0_0;
extern Il2CppType t1996_1_0_0;
struct t1996;
extern CustomAttributesCache t1996__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1996_DM = 
{
	NULL, NULL, NULL, t1996_IOs, &t1359_0_0_0, t1996_VT, t1996_VTIGM, NULL};
TypeInfo t1996_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA384", "System.Security.Cryptography", t1996_MIs, NULL, NULL, NULL, &t1996_TI, NULL, &t1996__CustomAttributeCache, &t1996_0_0_0, &t1996_1_0_0, &t1996_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1996), sizeof (t1996), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 15, 0, 2};
#include "t1997.h"
// Metadata Definition System.Security.Cryptography.SHA384Managed
extern TypeInfo t1997_TI;
#include "t1997MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10567_MI = 
{
	".ctor", (methodPointerType)&m10567, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4632, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1997_m10568_ParameterInfos[] = 
{
	{"reuse", 0, 134223364, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10568_MI = 
{
	"Initialize", (methodPointerType)&m10568, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1997_m10568_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4633, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10569_MI = 
{
	"Initialize", (methodPointerType)&m10569, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4634, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1997_m10570_ParameterInfos[] = 
{
	{"rgb", 0, 134223365, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ibStart", 1, 134223366, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223367, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10570_MI = 
{
	"HashCore", (methodPointerType)&m10570, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1997_m10570_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4635, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10571_MI = 
{
	"HashFinal", (methodPointerType)&m10571, &t1997_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4636, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t568_0_0_0;
extern Il2CppType t568_0_0_0;
static ParameterInfo t1997_m10572_ParameterInfos[] = 
{
	{"input", 0, 134223368, &EmptyCustomAttributesCache, &t568_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10572_MI = 
{
	"update", (methodPointerType)&m10572, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1997_m10572_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4637, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1997_m10573_ParameterInfos[] = 
{
	{"input", 0, 134223369, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inOff", 1, 134223370, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10573_MI = 
{
	"processWord", (methodPointerType)&m10573, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1997_m10573_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4638, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1997_m10574_ParameterInfos[] = 
{
	{"word", 0, 134223371, &EmptyCustomAttributesCache, &t882_0_0_0},
	{"output", 1, 134223372, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"outOff", 2, 134223373, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10574_MI = 
{
	"unpackWord", (methodPointerType)&m10574, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122_t292_t9_t125, t1997_m10574_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4639, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10575_MI = 
{
	"adjustByteCounts", (methodPointerType)&m10575, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4640, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
extern Il2CppType t882_0_0_0;
static ParameterInfo t1997_m10576_ParameterInfos[] = 
{
	{"lowW", 0, 134223374, &EmptyCustomAttributesCache, &t882_0_0_0},
	{"hiW", 1, 134223375, &EmptyCustomAttributesCache, &t882_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10576_MI = 
{
	"processLength", (methodPointerType)&m10576, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122_t292_t292, t1997_m10576_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4641, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10577_MI = 
{
	"processBlock", (methodPointerType)&m10577, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4642, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1997_MIs[] =
{
	&m10567_MI,
	&m10568_MI,
	&m10569_MI,
	&m10570_MI,
	&m10571_MI,
	&m10572_MI,
	&m10573_MI,
	&m10574_MI,
	&m10575_MI,
	&m10576_MI,
	&m10577_MI,
	NULL
};
extern Il2CppType t723_0_0_1;
FieldInfo t1997_f4_FieldInfo = 
{
	"xBuf", &t723_0_0_1, &t1997_TI, offsetof(t1997, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1997_f5_FieldInfo = 
{
	"xBufOff", &t125_0_0_1, &t1997_TI, offsetof(t1997, f5), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t1997_f6_FieldInfo = 
{
	"byteCount1", &t882_0_0_1, &t1997_TI, offsetof(t1997, f6), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t1997_f7_FieldInfo = 
{
	"byteCount2", &t882_0_0_1, &t1997_TI, offsetof(t1997, f7), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t1997_f8_FieldInfo = 
{
	"H1", &t882_0_0_1, &t1997_TI, offsetof(t1997, f8), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t1997_f9_FieldInfo = 
{
	"H2", &t882_0_0_1, &t1997_TI, offsetof(t1997, f9), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t1997_f10_FieldInfo = 
{
	"H3", &t882_0_0_1, &t1997_TI, offsetof(t1997, f10), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t1997_f11_FieldInfo = 
{
	"H4", &t882_0_0_1, &t1997_TI, offsetof(t1997, f11), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t1997_f12_FieldInfo = 
{
	"H5", &t882_0_0_1, &t1997_TI, offsetof(t1997, f12), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t1997_f13_FieldInfo = 
{
	"H6", &t882_0_0_1, &t1997_TI, offsetof(t1997, f13), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t1997_f14_FieldInfo = 
{
	"H7", &t882_0_0_1, &t1997_TI, offsetof(t1997, f14), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t1997_f15_FieldInfo = 
{
	"H8", &t882_0_0_1, &t1997_TI, offsetof(t1997, f15), &EmptyCustomAttributesCache};
extern Il2CppType t1998_0_0_1;
FieldInfo t1997_f16_FieldInfo = 
{
	"W", &t1998_0_0_1, &t1997_TI, offsetof(t1997, f16), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1997_f17_FieldInfo = 
{
	"wOff", &t125_0_0_1, &t1997_TI, offsetof(t1997, f17), &EmptyCustomAttributesCache};
static FieldInfo* t1997_FIs[] =
{
	&t1997_f4_FieldInfo,
	&t1997_f5_FieldInfo,
	&t1997_f6_FieldInfo,
	&t1997_f7_FieldInfo,
	&t1997_f8_FieldInfo,
	&t1997_f9_FieldInfo,
	&t1997_f10_FieldInfo,
	&t1997_f11_FieldInfo,
	&t1997_f12_FieldInfo,
	&t1997_f13_FieldInfo,
	&t1997_f14_FieldInfo,
	&t1997_f15_FieldInfo,
	&t1997_f16_FieldInfo,
	&t1997_f17_FieldInfo,
	NULL
};
extern MethodInfo m10570_MI;
extern MethodInfo m10571_MI;
extern MethodInfo m10569_MI;
static Il2CppMethodReference t1997_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	&m10570_MI,
	&m10571_MI,
	&m6873_MI,
	&m10569_MI,
	&m7021_MI,
};
static bool t1997_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1997_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1997_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1997__CustomAttributeCache = {
1,
NULL,
&t1997_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1997_0_0_0;
extern Il2CppType t1997_1_0_0;
struct t1997;
extern CustomAttributesCache t1997__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1997_DM = 
{
	NULL, NULL, NULL, t1997_IOs, &t1996_0_0_0, t1997_VT, t1997_VTIGM, NULL};
TypeInfo t1997_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA384Managed", "System.Security.Cryptography", t1997_MIs, NULL, t1997_FIs, NULL, &t1997_TI, NULL, &t1997__CustomAttributeCache, &t1997_0_0_0, &t1997_1_0_0, &t1997_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1997), sizeof (t1997), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 11, 0, 14, 0, 0, 15, 0, 2};
#include "t1999.h"
// Metadata Definition System.Security.Cryptography.SHA512
extern TypeInfo t1999_TI;
#include "t1999MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10578_MI = 
{
	".ctor", (methodPointerType)&m10578, &t1999_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4643, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1999_MIs[] =
{
	&m10578_MI,
	NULL
};
static Il2CppMethodReference t1999_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	NULL,
	NULL,
	&m6873_MI,
	NULL,
	&m7021_MI,
};
static bool t1999_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1999_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1999_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1999__CustomAttributeCache = {
1,
NULL,
&t1999_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1999_0_0_0;
extern Il2CppType t1999_1_0_0;
struct t1999;
extern CustomAttributesCache t1999__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1999_DM = 
{
	NULL, NULL, NULL, t1999_IOs, &t1359_0_0_0, t1999_VT, t1999_VTIGM, NULL};
TypeInfo t1999_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA512", "System.Security.Cryptography", t1999_MIs, NULL, NULL, NULL, &t1999_TI, NULL, &t1999__CustomAttributeCache, &t1999_0_0_0, &t1999_1_0_0, &t1999_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1999), sizeof (t1999), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 15, 0, 2};
#include "t2000.h"
// Metadata Definition System.Security.Cryptography.SHA512Managed
extern TypeInfo t2000_TI;
#include "t2000MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10579_MI = 
{
	".ctor", (methodPointerType)&m10579, &t2000_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4644, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t2000_m10580_ParameterInfos[] = 
{
	{"reuse", 0, 134223376, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10580_MI = 
{
	"Initialize", (methodPointerType)&m10580, &t2000_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t2000_m10580_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4645, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10581_MI = 
{
	"Initialize", (methodPointerType)&m10581, &t2000_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4646, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2000_m10582_ParameterInfos[] = 
{
	{"rgb", 0, 134223377, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ibStart", 1, 134223378, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223379, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10582_MI = 
{
	"HashCore", (methodPointerType)&m10582, &t2000_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2000_m10582_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4647, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10583_MI = 
{
	"HashFinal", (methodPointerType)&m10583, &t2000_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4648, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t568_0_0_0;
static ParameterInfo t2000_m10584_ParameterInfos[] = 
{
	{"input", 0, 134223380, &EmptyCustomAttributesCache, &t568_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10584_MI = 
{
	"update", (methodPointerType)&m10584, &t2000_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t2000_m10584_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4649, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2000_m10585_ParameterInfos[] = 
{
	{"input", 0, 134223381, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inOff", 1, 134223382, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10585_MI = 
{
	"processWord", (methodPointerType)&m10585, &t2000_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t2000_m10585_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4650, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2000_m10586_ParameterInfos[] = 
{
	{"word", 0, 134223383, &EmptyCustomAttributesCache, &t882_0_0_0},
	{"output", 1, 134223384, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"outOff", 2, 134223385, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10586_MI = 
{
	"unpackWord", (methodPointerType)&m10586, &t2000_TI, &t122_0_0_0, RuntimeInvoker_t122_t292_t9_t125, t2000_m10586_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4651, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10587_MI = 
{
	"adjustByteCounts", (methodPointerType)&m10587, &t2000_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4652, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
extern Il2CppType t882_0_0_0;
static ParameterInfo t2000_m10588_ParameterInfos[] = 
{
	{"lowW", 0, 134223386, &EmptyCustomAttributesCache, &t882_0_0_0},
	{"hiW", 1, 134223387, &EmptyCustomAttributesCache, &t882_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10588_MI = 
{
	"processLength", (methodPointerType)&m10588, &t2000_TI, &t122_0_0_0, RuntimeInvoker_t122_t292_t292, t2000_m10588_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4653, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10589_MI = 
{
	"processBlock", (methodPointerType)&m10589, &t2000_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4654, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2000_m10590_ParameterInfos[] = 
{
	{"x", 0, 134223388, &EmptyCustomAttributesCache, &t882_0_0_0},
	{"n", 1, 134223389, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t882_0_0_0;
extern void* RuntimeInvoker_t882_t292_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10590_MI = 
{
	"rotateRight", (methodPointerType)&m10590, &t2000_TI, &t882_0_0_0, RuntimeInvoker_t882_t292_t125, t2000_m10590_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4655, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
extern Il2CppType t882_0_0_0;
extern Il2CppType t882_0_0_0;
static ParameterInfo t2000_m10591_ParameterInfos[] = 
{
	{"x", 0, 134223390, &EmptyCustomAttributesCache, &t882_0_0_0},
	{"y", 1, 134223391, &EmptyCustomAttributesCache, &t882_0_0_0},
	{"z", 2, 134223392, &EmptyCustomAttributesCache, &t882_0_0_0},
};
extern Il2CppType t882_0_0_0;
extern void* RuntimeInvoker_t882_t292_t292_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10591_MI = 
{
	"Ch", (methodPointerType)&m10591, &t2000_TI, &t882_0_0_0, RuntimeInvoker_t882_t292_t292_t292, t2000_m10591_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4656, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
extern Il2CppType t882_0_0_0;
extern Il2CppType t882_0_0_0;
static ParameterInfo t2000_m10592_ParameterInfos[] = 
{
	{"x", 0, 134223393, &EmptyCustomAttributesCache, &t882_0_0_0},
	{"y", 1, 134223394, &EmptyCustomAttributesCache, &t882_0_0_0},
	{"z", 2, 134223395, &EmptyCustomAttributesCache, &t882_0_0_0},
};
extern Il2CppType t882_0_0_0;
extern void* RuntimeInvoker_t882_t292_t292_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10592_MI = 
{
	"Maj", (methodPointerType)&m10592, &t2000_TI, &t882_0_0_0, RuntimeInvoker_t882_t292_t292_t292, t2000_m10592_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4657, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
static ParameterInfo t2000_m10593_ParameterInfos[] = 
{
	{"x", 0, 134223396, &EmptyCustomAttributesCache, &t882_0_0_0},
};
extern Il2CppType t882_0_0_0;
extern void* RuntimeInvoker_t882_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10593_MI = 
{
	"Sum0", (methodPointerType)&m10593, &t2000_TI, &t882_0_0_0, RuntimeInvoker_t882_t292, t2000_m10593_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4658, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
static ParameterInfo t2000_m10594_ParameterInfos[] = 
{
	{"x", 0, 134223397, &EmptyCustomAttributesCache, &t882_0_0_0},
};
extern Il2CppType t882_0_0_0;
extern void* RuntimeInvoker_t882_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10594_MI = 
{
	"Sum1", (methodPointerType)&m10594, &t2000_TI, &t882_0_0_0, RuntimeInvoker_t882_t292, t2000_m10594_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4659, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
static ParameterInfo t2000_m10595_ParameterInfos[] = 
{
	{"x", 0, 134223398, &EmptyCustomAttributesCache, &t882_0_0_0},
};
extern Il2CppType t882_0_0_0;
extern void* RuntimeInvoker_t882_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10595_MI = 
{
	"Sigma0", (methodPointerType)&m10595, &t2000_TI, &t882_0_0_0, RuntimeInvoker_t882_t292, t2000_m10595_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4660, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
static ParameterInfo t2000_m10596_ParameterInfos[] = 
{
	{"x", 0, 134223399, &EmptyCustomAttributesCache, &t882_0_0_0},
};
extern Il2CppType t882_0_0_0;
extern void* RuntimeInvoker_t882_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10596_MI = 
{
	"Sigma1", (methodPointerType)&m10596, &t2000_TI, &t882_0_0_0, RuntimeInvoker_t882_t292, t2000_m10596_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4661, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2000_MIs[] =
{
	&m10579_MI,
	&m10580_MI,
	&m10581_MI,
	&m10582_MI,
	&m10583_MI,
	&m10584_MI,
	&m10585_MI,
	&m10586_MI,
	&m10587_MI,
	&m10588_MI,
	&m10589_MI,
	&m10590_MI,
	&m10591_MI,
	&m10592_MI,
	&m10593_MI,
	&m10594_MI,
	&m10595_MI,
	&m10596_MI,
	NULL
};
extern Il2CppType t723_0_0_1;
FieldInfo t2000_f4_FieldInfo = 
{
	"xBuf", &t723_0_0_1, &t2000_TI, offsetof(t2000, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2000_f5_FieldInfo = 
{
	"xBufOff", &t125_0_0_1, &t2000_TI, offsetof(t2000, f5), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t2000_f6_FieldInfo = 
{
	"byteCount1", &t882_0_0_1, &t2000_TI, offsetof(t2000, f6), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t2000_f7_FieldInfo = 
{
	"byteCount2", &t882_0_0_1, &t2000_TI, offsetof(t2000, f7), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t2000_f8_FieldInfo = 
{
	"H1", &t882_0_0_1, &t2000_TI, offsetof(t2000, f8), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t2000_f9_FieldInfo = 
{
	"H2", &t882_0_0_1, &t2000_TI, offsetof(t2000, f9), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t2000_f10_FieldInfo = 
{
	"H3", &t882_0_0_1, &t2000_TI, offsetof(t2000, f10), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t2000_f11_FieldInfo = 
{
	"H4", &t882_0_0_1, &t2000_TI, offsetof(t2000, f11), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t2000_f12_FieldInfo = 
{
	"H5", &t882_0_0_1, &t2000_TI, offsetof(t2000, f12), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t2000_f13_FieldInfo = 
{
	"H6", &t882_0_0_1, &t2000_TI, offsetof(t2000, f13), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t2000_f14_FieldInfo = 
{
	"H7", &t882_0_0_1, &t2000_TI, offsetof(t2000, f14), &EmptyCustomAttributesCache};
extern Il2CppType t882_0_0_1;
FieldInfo t2000_f15_FieldInfo = 
{
	"H8", &t882_0_0_1, &t2000_TI, offsetof(t2000, f15), &EmptyCustomAttributesCache};
extern Il2CppType t1998_0_0_1;
FieldInfo t2000_f16_FieldInfo = 
{
	"W", &t1998_0_0_1, &t2000_TI, offsetof(t2000, f16), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2000_f17_FieldInfo = 
{
	"wOff", &t125_0_0_1, &t2000_TI, offsetof(t2000, f17), &EmptyCustomAttributesCache};
static FieldInfo* t2000_FIs[] =
{
	&t2000_f4_FieldInfo,
	&t2000_f5_FieldInfo,
	&t2000_f6_FieldInfo,
	&t2000_f7_FieldInfo,
	&t2000_f8_FieldInfo,
	&t2000_f9_FieldInfo,
	&t2000_f10_FieldInfo,
	&t2000_f11_FieldInfo,
	&t2000_f12_FieldInfo,
	&t2000_f13_FieldInfo,
	&t2000_f14_FieldInfo,
	&t2000_f15_FieldInfo,
	&t2000_f16_FieldInfo,
	&t2000_f17_FieldInfo,
	NULL
};
extern MethodInfo m10582_MI;
extern MethodInfo m10583_MI;
extern MethodInfo m10581_MI;
static Il2CppMethodReference t2000_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7019_MI,
	&m7020_MI,
	&m6885_MI,
	&m6886_MI,
	&m7020_MI,
	&m6887_MI,
	&m10582_MI,
	&m10583_MI,
	&m6873_MI,
	&m10581_MI,
	&m7021_MI,
};
static bool t2000_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2000_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t2000_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2000__CustomAttributeCache = {
1,
NULL,
&t2000_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2000_0_0_0;
extern Il2CppType t2000_1_0_0;
struct t2000;
extern CustomAttributesCache t2000__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2000_DM = 
{
	NULL, NULL, NULL, t2000_IOs, &t1999_0_0_0, t2000_VT, t2000_VTIGM, NULL};
TypeInfo t2000_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA512Managed", "System.Security.Cryptography", t2000_MIs, NULL, t2000_FIs, NULL, &t2000_TI, NULL, &t2000__CustomAttributeCache, &t2000_0_0_0, &t2000_1_0_0, &t2000_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2000), sizeof (t2000), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 18, 0, 14, 0, 0, 15, 0, 2};
#include "t2001.h"
// Metadata Definition System.Security.Cryptography.SHAConstants
extern TypeInfo t2001_TI;
#include "t2001MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10597_MI = 
{
	".cctor", (methodPointerType)&m10597, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4662, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2001_MIs[] =
{
	&m10597_MI,
	NULL
};
extern Il2CppType t1403_0_0_54;
FieldInfo t2001_f0_FieldInfo = 
{
	"K1", &t1403_0_0_54, &t2001_TI, offsetof(t2001_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1998_0_0_54;
FieldInfo t2001_f1_FieldInfo = 
{
	"K2", &t1998_0_0_54, &t2001_TI, offsetof(t2001_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2001_FIs[] =
{
	&t2001_f0_FieldInfo,
	&t2001_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t2001_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2001_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2001_0_0_0;
extern Il2CppType t2001_1_0_0;
struct t2001;
const Il2CppTypeDefinitionMetadata t2001_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2001_VT, t2001_VTIGM, NULL};
TypeInfo t2001_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHAConstants", "System.Security.Cryptography", t2001_MIs, NULL, t2001_FIs, NULL, &t2001_TI, NULL, &EmptyCustomAttributesCache, &t2001_0_0_0, &t2001_1_0_0, &t2001_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2001), sizeof (t2001), 0, -1, sizeof(t2001_SFs), 0, -1, 1048960, 0, 0, false, false, false, false, false, false, false, false, true, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t2002.h"
// Metadata Definition System.Security.Cryptography.SignatureDescription
extern TypeInfo t2002_TI;
#include "t2002MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10598_MI = 
{
	".ctor", (methodPointerType)&m10598, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4663, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2002_m10599_ParameterInfos[] = 
{
	{"value", 0, 134223400, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10599_MI = 
{
	"set_DeformatterAlgorithm", (methodPointerType)&m10599, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2002_m10599_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4664, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2002_m10600_ParameterInfos[] = 
{
	{"value", 0, 134223401, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10600_MI = 
{
	"set_DigestAlgorithm", (methodPointerType)&m10600, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2002_m10600_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4665, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2002_m10601_ParameterInfos[] = 
{
	{"value", 0, 134223402, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10601_MI = 
{
	"set_FormatterAlgorithm", (methodPointerType)&m10601, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2002_m10601_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4666, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2002_m10602_ParameterInfos[] = 
{
	{"value", 0, 134223403, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10602_MI = 
{
	"set_KeyAlgorithm", (methodPointerType)&m10602, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2002_m10602_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4667, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2002_MIs[] =
{
	&m10598_MI,
	&m10599_MI,
	&m10600_MI,
	&m10601_MI,
	&m10602_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2002_f0_FieldInfo = 
{
	"_DeformatterAlgorithm", &t2_0_0_1, &t2002_TI, offsetof(t2002, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2002_f1_FieldInfo = 
{
	"_DigestAlgorithm", &t2_0_0_1, &t2002_TI, offsetof(t2002, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2002_f2_FieldInfo = 
{
	"_FormatterAlgorithm", &t2_0_0_1, &t2002_TI, offsetof(t2002, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2002_f3_FieldInfo = 
{
	"_KeyAlgorithm", &t2_0_0_1, &t2002_TI, offsetof(t2002, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2002_FIs[] =
{
	&t2002_f0_FieldInfo,
	&t2002_f1_FieldInfo,
	&t2002_f2_FieldInfo,
	&t2002_f3_FieldInfo,
	NULL
};
extern MethodInfo m10599_MI;
static PropertyInfo t2002____DeformatterAlgorithm_PropertyInfo = 
{
	&t2002_TI, "DeformatterAlgorithm", NULL, &m10599_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10600_MI;
static PropertyInfo t2002____DigestAlgorithm_PropertyInfo = 
{
	&t2002_TI, "DigestAlgorithm", NULL, &m10600_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10601_MI;
static PropertyInfo t2002____FormatterAlgorithm_PropertyInfo = 
{
	&t2002_TI, "FormatterAlgorithm", NULL, &m10601_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10602_MI;
static PropertyInfo t2002____KeyAlgorithm_PropertyInfo = 
{
	&t2002_TI, "KeyAlgorithm", NULL, &m10602_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2002_PIs[] =
{
	&t2002____DeformatterAlgorithm_PropertyInfo,
	&t2002____DigestAlgorithm_PropertyInfo,
	&t2002____FormatterAlgorithm_PropertyInfo,
	&t2002____KeyAlgorithm_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2002_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2002_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t2002_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2002__CustomAttributeCache = {
1,
NULL,
&t2002_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2002_0_0_0;
extern Il2CppType t2002_1_0_0;
struct t2002;
extern CustomAttributesCache t2002__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2002_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2002_VT, t2002_VTIGM, NULL};
TypeInfo t2002_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SignatureDescription", "System.Security.Cryptography", t2002_MIs, t2002_PIs, t2002_FIs, NULL, &t2002_TI, NULL, &t2002__CustomAttributeCache, &t2002_0_0_0, &t2002_1_0_0, &t2002_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2002), sizeof (t2002), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 4, 4, 0, 0, 4, 0, 0};
#include "t2003.h"
// Metadata Definition System.Security.Cryptography.DSASignatureDescription
extern TypeInfo t2003_TI;
#include "t2003MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10603_MI = 
{
	".ctor", (methodPointerType)&m10603, &t2003_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4668, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2003_MIs[] =
{
	&m10603_MI,
	NULL
};
static Il2CppMethodReference t2003_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2003_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2003_0_0_0;
extern Il2CppType t2003_1_0_0;
struct t2003;
const Il2CppTypeDefinitionMetadata t2003_DM = 
{
	NULL, NULL, NULL, NULL, &t2002_0_0_0, t2003_VT, t2003_VTIGM, NULL};
TypeInfo t2003_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSASignatureDescription", "System.Security.Cryptography", t2003_MIs, NULL, NULL, NULL, &t2003_TI, NULL, &EmptyCustomAttributesCache, &t2003_0_0_0, &t2003_1_0_0, &t2003_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2003), sizeof (t2003), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t2004.h"
// Metadata Definition System.Security.Cryptography.RSAPKCS1SHA1SignatureDescription
extern TypeInfo t2004_TI;
#include "t2004MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10604_MI = 
{
	".ctor", (methodPointerType)&m10604, &t2004_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4669, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2004_MIs[] =
{
	&m10604_MI,
	NULL
};
static Il2CppMethodReference t2004_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2004_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2004_0_0_0;
extern Il2CppType t2004_1_0_0;
struct t2004;
const Il2CppTypeDefinitionMetadata t2004_DM = 
{
	NULL, NULL, NULL, NULL, &t2002_0_0_0, t2004_VT, t2004_VTIGM, NULL};
TypeInfo t2004_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSAPKCS1SHA1SignatureDescription", "System.Security.Cryptography", t2004_MIs, NULL, NULL, NULL, &t2004_TI, NULL, &EmptyCustomAttributesCache, &t2004_0_0_0, &t2004_1_0_0, &t2004_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2004), sizeof (t2004), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t1425.h"
// Metadata Definition System.Security.Cryptography.SymmetricAlgorithm
extern TypeInfo t1425_TI;
#include "t1425MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6879_MI = 
{
	".ctor", (methodPointerType)&m6879, &t1425_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4670, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7012_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m7012, &t1425_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 4671, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6866_MI = 
{
	"Finalize", (methodPointerType)&m6866, &t1425_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4672, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6899_MI = 
{
	"Clear", (methodPointerType)&m6899, &t1425_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4673, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1425_m7022_ParameterInfos[] = 
{
	{"disposing", 0, 134223404, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m7022_MI = 
{
	"Dispose", (methodPointerType)&m7022, &t1425_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1425_m7022_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 5, 1, false, false, 4674, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7013_MI = 
{
	"get_BlockSize", (methodPointerType)&m7013, &t1425_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 4675, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1425_m6936_ParameterInfos[] = 
{
	{"value", 0, 134223405, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6936_MI = 
{
	"set_BlockSize", (methodPointerType)&m6936, &t1425_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1425_m6936_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 7, 1, false, false, 4676, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7014_MI = 
{
	"get_FeedbackSize", (methodPointerType)&m7014, &t1425_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 4677, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10605_MI = 
{
	"get_IV", (methodPointerType)&m10605, &t1425_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 4678, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1425_m6895_ParameterInfos[] = 
{
	{"value", 0, 134223406, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6895_MI = 
{
	"set_IV", (methodPointerType)&m6895, &t1425_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1425_m6895_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 10, 1, false, false, 4679, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7023_MI = 
{
	"get_Key", (methodPointerType)&m7023, &t1425_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 4680, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1425_m6894_ParameterInfos[] = 
{
	{"value", 0, 134223407, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6894_MI = 
{
	"set_Key", (methodPointerType)&m6894, &t1425_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1425_m6894_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 12, 1, false, false, 4681, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7015_MI = 
{
	"get_KeySize", (methodPointerType)&m7015, &t1425_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 13, 0, false, false, 4682, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1425_m6935_ParameterInfos[] = 
{
	{"value", 0, 134223408, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6935_MI = 
{
	"set_KeySize", (methodPointerType)&m6935, &t1425_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1425_m6935_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 14, 1, false, false, 4683, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1424_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7016_MI = 
{
	"get_LegalKeySizes", (methodPointerType)&m7016, &t1425_TI, &t1424_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 15, 0, false, false, 4684, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1451_0_0_0;
extern void* RuntimeInvoker_t1451 (MethodInfo* method, void* obj, void** args);
MethodInfo m7017_MI = 
{
	"get_Mode", (methodPointerType)&m7017, &t1425_TI, &t1451_0_0_0, RuntimeInvoker_t1451, NULL, &EmptyCustomAttributesCache, 2502, 0, 16, 0, false, false, 4685, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1451_0_0_0;
extern Il2CppType t1451_0_0_0;
static ParameterInfo t1425_m6896_ParameterInfos[] = 
{
	{"value", 0, 134223409, &EmptyCustomAttributesCache, &t1451_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6896_MI = 
{
	"set_Mode", (methodPointerType)&m6896, &t1425_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1425_m6896_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 17, 1, false, false, 4686, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1535_0_0_0;
extern void* RuntimeInvoker_t1535 (MethodInfo* method, void* obj, void** args);
MethodInfo m7018_MI = 
{
	"get_Padding", (methodPointerType)&m7018, &t1425_TI, &t1535_0_0_0, RuntimeInvoker_t1535, NULL, &EmptyCustomAttributesCache, 2502, 0, 18, 0, false, false, 4687, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1535_0_0_0;
static ParameterInfo t1425_m6934_ParameterInfos[] = 
{
	{"value", 0, 134223410, &EmptyCustomAttributesCache, &t1535_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6934_MI = 
{
	"set_Padding", (methodPointerType)&m6934, &t1425_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1425_m6934_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 19, 1, false, false, 4688, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1416_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6897_MI = 
{
	"CreateDecryptor", (methodPointerType)&m6897, &t1425_TI, &t1416_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 20, 0, false, false, 4689, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1425_m12074_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223411, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"rgbIV", 1, 134223412, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t1416_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12074_MI = 
{
	"CreateDecryptor", NULL, &t1425_TI, &t1416_0_0_0, RuntimeInvoker_t9_t9_t9, t1425_m12074_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 21, 2, false, false, 4690, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1416_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6868_MI = 
{
	"CreateEncryptor", (methodPointerType)&m6868, &t1425_TI, &t1416_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 22, 0, false, false, 4691, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1425_m12075_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223413, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"rgbIV", 1, 134223414, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t1416_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12075_MI = 
{
	"CreateEncryptor", NULL, &t1425_TI, &t1416_0_0_0, RuntimeInvoker_t9_t9_t9, t1425_m12075_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 23, 2, false, false, 4692, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m12073_MI = 
{
	"GenerateIV", NULL, &t1425_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 1478, 0, 24, 0, false, false, 4693, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m12066_MI = 
{
	"GenerateKey", NULL, &t1425_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 1478, 0, 25, 0, false, false, 4694, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1425_m6893_ParameterInfos[] = 
{
	{"algName", 0, 134223415, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1425_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6893_MI = 
{
	"Create", (methodPointerType)&m6893, &t1425_TI, &t1425_0_0_0, RuntimeInvoker_t9_t9, t1425_m6893_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4695, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1425_MIs[] =
{
	&m6879_MI,
	&m7012_MI,
	&m6866_MI,
	&m6899_MI,
	&m7022_MI,
	&m7013_MI,
	&m6936_MI,
	&m7014_MI,
	&m10605_MI,
	&m6895_MI,
	&m7023_MI,
	&m6894_MI,
	&m7015_MI,
	&m6935_MI,
	&m7016_MI,
	&m7017_MI,
	&m6896_MI,
	&m7018_MI,
	&m6934_MI,
	&m6897_MI,
	&m12074_MI,
	&m6868_MI,
	&m12075_MI,
	&m12073_MI,
	&m12066_MI,
	&m6893_MI,
	NULL
};
extern Il2CppType t125_0_0_4;
FieldInfo t1425_f0_FieldInfo = 
{
	"BlockSizeValue", &t125_0_0_4, &t1425_TI, offsetof(t1425, f0), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_4;
FieldInfo t1425_f1_FieldInfo = 
{
	"IVValue", &t723_0_0_4, &t1425_TI, offsetof(t1425, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_4;
FieldInfo t1425_f2_FieldInfo = 
{
	"KeySizeValue", &t125_0_0_4, &t1425_TI, offsetof(t1425, f2), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_4;
FieldInfo t1425_f3_FieldInfo = 
{
	"KeyValue", &t723_0_0_4, &t1425_TI, offsetof(t1425, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1424_0_0_4;
FieldInfo t1425_f4_FieldInfo = 
{
	"LegalBlockSizesValue", &t1424_0_0_4, &t1425_TI, offsetof(t1425, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1424_0_0_4;
FieldInfo t1425_f5_FieldInfo = 
{
	"LegalKeySizesValue", &t1424_0_0_4, &t1425_TI, offsetof(t1425, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_4;
FieldInfo t1425_f6_FieldInfo = 
{
	"FeedbackSizeValue", &t125_0_0_4, &t1425_TI, offsetof(t1425, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1451_0_0_4;
FieldInfo t1425_f7_FieldInfo = 
{
	"ModeValue", &t1451_0_0_4, &t1425_TI, offsetof(t1425, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1535_0_0_4;
FieldInfo t1425_f8_FieldInfo = 
{
	"PaddingValue", &t1535_0_0_4, &t1425_TI, offsetof(t1425, f8), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1425_f9_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t1425_TI, offsetof(t1425, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1425_FIs[] =
{
	&t1425_f0_FieldInfo,
	&t1425_f1_FieldInfo,
	&t1425_f2_FieldInfo,
	&t1425_f3_FieldInfo,
	&t1425_f4_FieldInfo,
	&t1425_f5_FieldInfo,
	&t1425_f6_FieldInfo,
	&t1425_f7_FieldInfo,
	&t1425_f8_FieldInfo,
	&t1425_f9_FieldInfo,
	NULL
};
static PropertyInfo t1425____BlockSize_PropertyInfo = 
{
	&t1425_TI, "BlockSize", &m7013_MI, &m6936_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1425____FeedbackSize_PropertyInfo = 
{
	&t1425_TI, "FeedbackSize", &m7014_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1425____IV_PropertyInfo = 
{
	&t1425_TI, "IV", &m10605_MI, &m6895_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1425____Key_PropertyInfo = 
{
	&t1425_TI, "Key", &m7023_MI, &m6894_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1425____KeySize_PropertyInfo = 
{
	&t1425_TI, "KeySize", &m7015_MI, &m6935_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1425____LegalKeySizes_PropertyInfo = 
{
	&t1425_TI, "LegalKeySizes", &m7016_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1425____Mode_PropertyInfo = 
{
	&t1425_TI, "Mode", &m7017_MI, &m6896_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1425____Padding_PropertyInfo = 
{
	&t1425_TI, "Padding", &m7018_MI, &m6934_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1425_PIs[] =
{
	&t1425____BlockSize_PropertyInfo,
	&t1425____FeedbackSize_PropertyInfo,
	&t1425____IV_PropertyInfo,
	&t1425____Key_PropertyInfo,
	&t1425____KeySize_PropertyInfo,
	&t1425____LegalKeySizes_PropertyInfo,
	&t1425____Mode_PropertyInfo,
	&t1425____Padding_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1425_VT[] =
{
	&m671_MI,
	&m6866_MI,
	&m672_MI,
	&m673_MI,
	&m7012_MI,
	&m7022_MI,
	&m7013_MI,
	&m6936_MI,
	&m7014_MI,
	&m10605_MI,
	&m6895_MI,
	&m7023_MI,
	&m6894_MI,
	&m7015_MI,
	&m6935_MI,
	&m7016_MI,
	&m7017_MI,
	&m6896_MI,
	&m7018_MI,
	&m6934_MI,
	&m6897_MI,
	NULL,
	&m6868_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1425_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1425_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1425_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1425_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1425__CustomAttributeCache = {
1,
NULL,
&t1425_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1425_1_0_0;
struct t1425;
extern CustomAttributesCache t1425__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1425_DM = 
{
	NULL, NULL, t1425_ITIs, t1425_IOs, &t9_0_0_0, t1425_VT, t1425_VTIGM, NULL};
TypeInfo t1425_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SymmetricAlgorithm", "System.Security.Cryptography", t1425_MIs, t1425_PIs, t1425_FIs, NULL, &t1425_TI, NULL, &t1425__CustomAttributeCache, &t1425_0_0_0, &t1425_1_0_0, &t1425_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1425), sizeof (t1425), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 26, 8, 10, 0, 0, 26, 1, 1};
#include "t2005.h"
// Metadata Definition System.Security.Cryptography.ToBase64Transform
extern TypeInfo t2005_TI;
#include "t2005MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10606_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m10606, &t2005_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 4696, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10607_MI = 
{
	"Finalize", (methodPointerType)&m10607, &t2005_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4697, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10608_MI = 
{
	"get_CanReuseTransform", (methodPointerType)&m10608, &t2005_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 4698, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10609_MI = 
{
	"get_InputBlockSize", (methodPointerType)&m10609, &t2005_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, false, 4699, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10610_MI = 
{
	"get_OutputBlockSize", (methodPointerType)&m10610, &t2005_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, false, 4700, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t2005_m10611_ParameterInfos[] = 
{
	{"disposing", 0, 134223416, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10611_MI = 
{
	"Dispose", (methodPointerType)&m10611, &t2005_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t2005_m10611_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 11, 1, false, false, 4701, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2005_m10612_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223417, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 1, 134223418, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223419, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"outputBuffer", 3, 134223420, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"outputOffset", 4, 134223421, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10612_MI = 
{
	"TransformBlock", (methodPointerType)&m10612, &t2005_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2005_m10612_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 5, false, false, 4702, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2005_m10613_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223422, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 1, 134223423, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223424, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"outputBuffer", 3, 134223425, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"outputOffset", 4, 134223426, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10613_MI = 
{
	"InternalTransformBlock", (methodPointerType)&m10613, &t2005_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t9_t125, t2005_m10613_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 5, false, false, 4703, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2005_m10614_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223427, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 1, 134223428, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223429, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10614_MI = 
{
	"TransformFinalBlock", (methodPointerType)&m10614, &t2005_TI, &t723_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t2005_m10614_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 3, false, false, 4704, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2005_m10615_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223430, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"inputOffset", 1, 134223431, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223432, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10615_MI = 
{
	"InternalTransformFinalBlock", (methodPointerType)&m10615, &t2005_TI, &t723_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t2005_m10615_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 4705, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2005_MIs[] =
{
	&m10606_MI,
	&m10607_MI,
	&m10608_MI,
	&m10609_MI,
	&m10610_MI,
	&m10611_MI,
	&m10612_MI,
	&m10613_MI,
	&m10614_MI,
	&m10615_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t2005_f0_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t2005_TI, offsetof(t2005, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2005_FIs[] =
{
	&t2005_f0_FieldInfo,
	NULL
};
extern MethodInfo m10608_MI;
static PropertyInfo t2005____CanReuseTransform_PropertyInfo = 
{
	&t2005_TI, "CanReuseTransform", &m10608_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10609_MI;
static PropertyInfo t2005____InputBlockSize_PropertyInfo = 
{
	&t2005_TI, "InputBlockSize", &m10609_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10610_MI;
static PropertyInfo t2005____OutputBlockSize_PropertyInfo = 
{
	&t2005_TI, "OutputBlockSize", &m10610_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2005_PIs[] =
{
	&t2005____CanReuseTransform_PropertyInfo,
	&t2005____InputBlockSize_PropertyInfo,
	&t2005____OutputBlockSize_PropertyInfo,
	NULL
};
extern MethodInfo m10607_MI;
extern MethodInfo m10606_MI;
extern MethodInfo m10612_MI;
extern MethodInfo m10614_MI;
extern MethodInfo m10611_MI;
static Il2CppMethodReference t2005_VT[] =
{
	&m671_MI,
	&m10607_MI,
	&m672_MI,
	&m673_MI,
	&m10606_MI,
	&m10608_MI,
	&m10612_MI,
	&m10614_MI,
	&m10608_MI,
	&m10609_MI,
	&m10610_MI,
	&m10611_MI,
};
static bool t2005_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t2005_ITIs[] = 
{
	&t137_0_0_0,
	&t1416_0_0_0,
};
static Il2CppInterfaceOffsetPair t2005_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t2005_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2005__CustomAttributeCache = {
1,
NULL,
&t2005_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2005_0_0_0;
extern Il2CppType t2005_1_0_0;
struct t2005;
extern CustomAttributesCache t2005__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2005_DM = 
{
	NULL, NULL, t2005_ITIs, t2005_IOs, &t9_0_0_0, t2005_VT, t2005_VTIGM, NULL};
TypeInfo t2005_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ToBase64Transform", "System.Security.Cryptography", t2005_MIs, t2005_PIs, t2005_FIs, NULL, &t2005_TI, NULL, &t2005__CustomAttributeCache, &t2005_0_0_0, &t2005_1_0_0, &t2005_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2005), sizeof (t2005), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 10, 3, 1, 0, 0, 12, 2, 2};
#include "t1533.h"
// Metadata Definition System.Security.Cryptography.TripleDES
extern TypeInfo t1533_TI;
#include "t1533MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10616_MI = 
{
	".ctor", (methodPointerType)&m10616, &t1533_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4706, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10617_MI = 
{
	"get_Key", (methodPointerType)&m10617, &t1533_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 11, 0, false, false, 4707, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1533_m10618_ParameterInfos[] = 
{
	{"value", 0, 134223433, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10618_MI = 
{
	"set_Key", (methodPointerType)&m10618, &t1533_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1533_m10618_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 12, 1, false, false, 4708, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1533_m10619_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223434, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10619_MI = 
{
	"IsWeakKey", (methodPointerType)&m10619, &t1533_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1533_m10619_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4709, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1533_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6932_MI = 
{
	"Create", (methodPointerType)&m6932, &t1533_TI, &t1533_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4710, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1533_m10620_ParameterInfos[] = 
{
	{"str", 0, 134223435, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1533_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10620_MI = 
{
	"Create", (methodPointerType)&m10620, &t1533_TI, &t1533_0_0_0, RuntimeInvoker_t9_t9, t1533_m10620_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4711, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1533_MIs[] =
{
	&m10616_MI,
	&m10617_MI,
	&m10618_MI,
	&m10619_MI,
	&m6932_MI,
	&m10620_MI,
	NULL
};
extern MethodInfo m10617_MI;
extern MethodInfo m10618_MI;
static PropertyInfo t1533____Key_PropertyInfo = 
{
	&t1533_TI, "Key", &m10617_MI, &m10618_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1533_PIs[] =
{
	&t1533____Key_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1533_VT[] =
{
	&m671_MI,
	&m6866_MI,
	&m672_MI,
	&m673_MI,
	&m7012_MI,
	&m7022_MI,
	&m7013_MI,
	&m6936_MI,
	&m7014_MI,
	&m10605_MI,
	&m6895_MI,
	&m10617_MI,
	&m10618_MI,
	&m7015_MI,
	&m6935_MI,
	&m7016_MI,
	&m7017_MI,
	&m6896_MI,
	&m7018_MI,
	&m6934_MI,
	&m6897_MI,
	NULL,
	&m6868_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1533_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1533_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1533_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1533__CustomAttributeCache = {
1,
NULL,
&t1533_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1533_0_0_0;
extern Il2CppType t1533_1_0_0;
struct t1533;
extern CustomAttributesCache t1533__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1533_DM = 
{
	NULL, NULL, NULL, t1533_IOs, &t1425_0_0_0, t1533_VT, t1533_VTIGM, NULL};
TypeInfo t1533_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TripleDES", "System.Security.Cryptography", t1533_MIs, t1533_PIs, NULL, NULL, &t1533_TI, NULL, &t1533__CustomAttributeCache, &t1533_0_0_0, &t1533_1_0_0, &t1533_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1533), sizeof (t1533), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 1, 0, 0, 0, 26, 0, 1};
#include "t2006.h"
// Metadata Definition System.Security.Cryptography.TripleDESCryptoServiceProvider
extern TypeInfo t2006_TI;
#include "t2006MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10621_MI = 
{
	".ctor", (methodPointerType)&m10621, &t2006_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4712, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10622_MI = 
{
	"GenerateIV", (methodPointerType)&m10622, &t2006_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 24, 0, false, false, 4713, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10623_MI = 
{
	"GenerateKey", (methodPointerType)&m10623, &t2006_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 25, 0, false, false, 4714, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t2006_m10624_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223436, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"rgbIV", 1, 134223437, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t1416_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10624_MI = 
{
	"CreateDecryptor", (methodPointerType)&m10624, &t2006_TI, &t1416_0_0_0, RuntimeInvoker_t9_t9_t9, t2006_m10624_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 21, 2, false, false, 4715, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t2006_m10625_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223438, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"rgbIV", 1, 134223439, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t1416_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10625_MI = 
{
	"CreateEncryptor", (methodPointerType)&m10625, &t2006_TI, &t1416_0_0_0, RuntimeInvoker_t9_t9_t9, t2006_m10625_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 2, false, false, 4716, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2006_MIs[] =
{
	&m10621_MI,
	&m10622_MI,
	&m10623_MI,
	&m10624_MI,
	&m10625_MI,
	NULL
};
extern MethodInfo m10624_MI;
extern MethodInfo m10625_MI;
extern MethodInfo m10622_MI;
extern MethodInfo m10623_MI;
static Il2CppMethodReference t2006_VT[] =
{
	&m671_MI,
	&m6866_MI,
	&m672_MI,
	&m673_MI,
	&m7012_MI,
	&m7022_MI,
	&m7013_MI,
	&m6936_MI,
	&m7014_MI,
	&m10605_MI,
	&m6895_MI,
	&m10617_MI,
	&m10618_MI,
	&m7015_MI,
	&m6935_MI,
	&m7016_MI,
	&m7017_MI,
	&m6896_MI,
	&m7018_MI,
	&m6934_MI,
	&m6897_MI,
	&m10624_MI,
	&m6868_MI,
	&m10625_MI,
	&m10622_MI,
	&m10623_MI,
};
static bool t2006_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2006_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t2006_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2006__CustomAttributeCache = {
1,
NULL,
&t2006_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2006_0_0_0;
extern Il2CppType t2006_1_0_0;
struct t2006;
extern CustomAttributesCache t2006__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2006_DM = 
{
	NULL, NULL, NULL, t2006_IOs, &t1533_0_0_0, t2006_VT, t2006_VTIGM, NULL};
TypeInfo t2006_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TripleDESCryptoServiceProvider", "System.Security.Cryptography", t2006_MIs, NULL, NULL, NULL, &t2006_TI, NULL, &t2006__CustomAttributeCache, &t2006_0_0_0, &t2006_1_0_0, &t2006_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2006), sizeof (t2006), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 5, 0, 0, 0, 0, 26, 0, 1};
#include "t2007.h"
// Metadata Definition System.Security.Cryptography.TripleDESTransform
extern TypeInfo t2007_TI;
#include "t2007MD.h"
extern Il2CppType t1533_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t2007_m10626_ParameterInfos[] = 
{
	{"algo", 0, 134223440, &EmptyCustomAttributesCache, &t1533_0_0_0},
	{"encryption", 1, 134223441, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"key", 2, 134223442, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"iv", 3, 134223443, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10626_MI = 
{
	".ctor", (methodPointerType)&m10626, &t2007_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t9_t9, t2007_m10626_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 4717, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t2007_m10627_ParameterInfos[] = 
{
	{"input", 0, 134223444, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"output", 1, 134223445, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10627_MI = 
{
	"ECB", (methodPointerType)&m10627, &t2007_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2007_m10627_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 2, false, false, 4718, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10628_MI = 
{
	"GetStrongKey", (methodPointerType)&m10628, &t2007_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 4719, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2007_MIs[] =
{
	&m10626_MI,
	&m10627_MI,
	&m10628_MI,
	NULL
};
extern Il2CppType t1973_0_0_1;
FieldInfo t2007_f12_FieldInfo = 
{
	"E1", &t1973_0_0_1, &t2007_TI, offsetof(t2007, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1973_0_0_1;
FieldInfo t2007_f13_FieldInfo = 
{
	"D2", &t1973_0_0_1, &t2007_TI, offsetof(t2007, f13), &EmptyCustomAttributesCache};
extern Il2CppType t1973_0_0_1;
FieldInfo t2007_f14_FieldInfo = 
{
	"E3", &t1973_0_0_1, &t2007_TI, offsetof(t2007, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1973_0_0_1;
FieldInfo t2007_f15_FieldInfo = 
{
	"D1", &t1973_0_0_1, &t2007_TI, offsetof(t2007, f15), &EmptyCustomAttributesCache};
extern Il2CppType t1973_0_0_1;
FieldInfo t2007_f16_FieldInfo = 
{
	"E2", &t1973_0_0_1, &t2007_TI, offsetof(t2007, f16), &EmptyCustomAttributesCache};
extern Il2CppType t1973_0_0_1;
FieldInfo t2007_f17_FieldInfo = 
{
	"D3", &t1973_0_0_1, &t2007_TI, offsetof(t2007, f17), &EmptyCustomAttributesCache};
static FieldInfo* t2007_FIs[] =
{
	&t2007_f12_FieldInfo,
	&t2007_f13_FieldInfo,
	&t2007_f14_FieldInfo,
	&t2007_f15_FieldInfo,
	&t2007_f16_FieldInfo,
	&t2007_f17_FieldInfo,
	NULL
};
extern MethodInfo m10627_MI;
static Il2CppMethodReference t2007_VT[] =
{
	&m671_MI,
	&m8140_MI,
	&m672_MI,
	&m673_MI,
	&m8139_MI,
	&m8142_MI,
	&m8149_MI,
	&m8156_MI,
	&m8141_MI,
	&m8142_MI,
	&m8143_MI,
	&m10627_MI,
	&m8144_MI,
	&m8145_MI,
	&m8146_MI,
	&m8147_MI,
	&m8149_MI,
	&m8156_MI,
};
static bool t2007_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2007_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2007_0_0_0;
extern Il2CppType t2007_1_0_0;
struct t2007;
const Il2CppTypeDefinitionMetadata t2007_DM = 
{
	NULL, NULL, NULL, t2007_IOs, &t1633_0_0_0, t2007_VT, t2007_VTIGM, NULL};
TypeInfo t2007_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TripleDESTransform", "System.Security.Cryptography", t2007_MIs, NULL, t2007_FIs, NULL, &t2007_TI, NULL, &EmptyCustomAttributesCache, &t2007_0_0_0, &t2007_1_0_0, &t2007_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2007), sizeof (t2007), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, true, false, false, 3, 0, 6, 0, 0, 18, 0, 2};
// Metadata Definition System.Security.Permissions.IBuiltInPermission
extern TypeInfo t2626_TI;
static MethodInfo* t2626_MIs[] =
{
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2626_0_0_0;
extern Il2CppType t2626_1_0_0;
struct t2626;
const Il2CppTypeDefinitionMetadata t2626_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2626_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IBuiltInPermission", "System.Security.Permissions", t2626_MIs, NULL, NULL, NULL, &t2626_TI, NULL, &EmptyCustomAttributesCache, &t2626_0_0_0, &t2626_1_0_0, &t2626_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 160, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Security.Permissions.IUnrestrictedPermission
extern TypeInfo t2627_TI;
static MethodInfo* t2627_MIs[] =
{
	NULL
};
void t2627_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2627__CustomAttributeCache = {
1,
NULL,
&t2627_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2627_0_0_0;
extern Il2CppType t2627_1_0_0;
struct t2627;
extern CustomAttributesCache t2627__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2627_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2627_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IUnrestrictedPermission", "System.Security.Permissions", t2627_MIs, NULL, NULL, NULL, &t2627_TI, NULL, &t2627__CustomAttributeCache, &t2627_0_0_0, &t2627_1_0_0, &t2627_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t2008.h"
// Metadata Definition System.Security.Permissions.SecurityPermission
extern TypeInfo t2008_TI;
#include "t2008MD.h"
extern Il2CppType t2010_0_0_0;
extern Il2CppType t2010_0_0_0;
static ParameterInfo t2008_m10629_ParameterInfos[] = 
{
	{"flag", 0, 134223446, &EmptyCustomAttributesCache, &t2010_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10629_MI = 
{
	".ctor", (methodPointerType)&m10629, &t2008_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t2008_m10629_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4720, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2010_0_0_0;
static ParameterInfo t2008_m10630_ParameterInfos[] = 
{
	{"value", 0, 134223447, &EmptyCustomAttributesCache, &t2010_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10630_MI = 
{
	"set_Flags", (methodPointerType)&m10630, &t2008_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t2008_m10630_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4721, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10631_MI = 
{
	"IsUnrestricted", (methodPointerType)&m10631, &t2008_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 4722, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2011_0_0_0;
extern Il2CppType t2011_0_0_0;
static ParameterInfo t2008_m10632_ParameterInfos[] = 
{
	{"target", 0, 134223448, &EmptyCustomAttributesCache, &t2011_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10632_MI = 
{
	"IsSubsetOf", (methodPointerType)&m10632, &t2008_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2008_m10632_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4723, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1651_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10633_MI = 
{
	"ToXml", (methodPointerType)&m10633, &t2008_TI, &t1651_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 5, 0, false, false, 4724, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10634_MI = 
{
	"IsEmpty", (methodPointerType)&m10634, &t2008_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4725, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2011_0_0_0;
static ParameterInfo t2008_m10635_ParameterInfos[] = 
{
	{"target", 0, 134223449, &EmptyCustomAttributesCache, &t2011_0_0_0},
};
extern Il2CppType t2008_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10635_MI = 
{
	"Cast", (methodPointerType)&m10635, &t2008_TI, &t2008_0_0_0, RuntimeInvoker_t9_t9, t2008_m10635_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4726, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2008_MIs[] =
{
	&m10629_MI,
	&m10630_MI,
	&m10631_MI,
	&m10632_MI,
	&m10633_MI,
	&m10634_MI,
	&m10635_MI,
	NULL
};
extern Il2CppType t2010_0_0_1;
FieldInfo t2008_f0_FieldInfo = 
{
	"flags", &t2010_0_0_1, &t2008_TI, offsetof(t2008, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2008_FIs[] =
{
	&t2008_f0_FieldInfo,
	NULL
};
extern MethodInfo m10630_MI;
static PropertyInfo t2008____Flags_PropertyInfo = 
{
	&t2008_TI, "Flags", NULL, &m10630_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2008_PIs[] =
{
	&t2008____Flags_PropertyInfo,
	NULL
};
extern MethodInfo m10672_MI;
extern MethodInfo m10673_MI;
extern MethodInfo m10674_MI;
extern MethodInfo m10632_MI;
extern MethodInfo m10633_MI;
extern MethodInfo m10631_MI;
static Il2CppMethodReference t2008_VT[] =
{
	&m10672_MI,
	&m646_MI,
	&m10673_MI,
	&m10674_MI,
	&m10632_MI,
	&m10633_MI,
	&m10631_MI,
};
static bool t2008_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t2008_ITIs[] = 
{
	&t2626_0_0_0,
	&t2627_0_0_0,
};
extern Il2CppType t2628_0_0_0;
extern Il2CppType t2629_0_0_0;
static Il2CppInterfaceOffsetPair t2008_IOs[] = 
{
	{ &t2011_0_0_0, 4},
	{ &t2628_0_0_0, 4},
	{ &t2629_0_0_0, 4},
	{ &t2626_0_0_0, 6},
	{ &t2627_0_0_0, 6},
};
void t2008_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2008__CustomAttributeCache = {
1,
NULL,
&t2008_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2008_0_0_0;
extern Il2CppType t2008_1_0_0;
extern Il2CppType t2009_0_0_0;
struct t2008;
extern CustomAttributesCache t2008__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2008_DM = 
{
	NULL, NULL, t2008_ITIs, t2008_IOs, &t2009_0_0_0, t2008_VT, t2008_VTIGM, NULL};
TypeInfo t2008_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityPermission", "System.Security.Permissions", t2008_MIs, t2008_PIs, t2008_FIs, NULL, &t2008_TI, NULL, &t2008__CustomAttributeCache, &t2008_0_0_0, &t2008_1_0_0, &t2008_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2008), sizeof (t2008), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 7, 1, 1, 0, 0, 7, 2, 5};
#include "t2010.h"
// Metadata Definition System.Security.Permissions.SecurityPermissionFlag
extern TypeInfo t2010_TI;
#include "t2010MD.h"
static MethodInfo* t2010_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t2010_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t2010_TI, offsetof(t2010, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t2010_0_0_32854;
FieldInfo t2010_f2_FieldInfo = 
{
	"NoFlags", &t2010_0_0_32854, &t2010_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2010_0_0_32854;
FieldInfo t2010_f3_FieldInfo = 
{
	"Assertion", &t2010_0_0_32854, &t2010_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2010_0_0_32854;
FieldInfo t2010_f4_FieldInfo = 
{
	"UnmanagedCode", &t2010_0_0_32854, &t2010_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2010_0_0_32854;
FieldInfo t2010_f5_FieldInfo = 
{
	"SkipVerification", &t2010_0_0_32854, &t2010_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2010_0_0_32854;
FieldInfo t2010_f6_FieldInfo = 
{
	"Execution", &t2010_0_0_32854, &t2010_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2010_0_0_32854;
FieldInfo t2010_f7_FieldInfo = 
{
	"ControlThread", &t2010_0_0_32854, &t2010_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2010_0_0_32854;
FieldInfo t2010_f8_FieldInfo = 
{
	"ControlEvidence", &t2010_0_0_32854, &t2010_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2010_0_0_32854;
FieldInfo t2010_f9_FieldInfo = 
{
	"ControlPolicy", &t2010_0_0_32854, &t2010_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2010_0_0_32854;
FieldInfo t2010_f10_FieldInfo = 
{
	"SerializationFormatter", &t2010_0_0_32854, &t2010_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2010_0_0_32854;
FieldInfo t2010_f11_FieldInfo = 
{
	"ControlDomainPolicy", &t2010_0_0_32854, &t2010_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2010_0_0_32854;
FieldInfo t2010_f12_FieldInfo = 
{
	"ControlPrincipal", &t2010_0_0_32854, &t2010_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2010_0_0_32854;
FieldInfo t2010_f13_FieldInfo = 
{
	"ControlAppDomain", &t2010_0_0_32854, &t2010_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2010_0_0_32854;
FieldInfo t2010_f14_FieldInfo = 
{
	"RemotingConfiguration", &t2010_0_0_32854, &t2010_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2010_0_0_32854;
FieldInfo t2010_f15_FieldInfo = 
{
	"Infrastructure", &t2010_0_0_32854, &t2010_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2010_0_0_32854;
FieldInfo t2010_f16_FieldInfo = 
{
	"BindingRedirects", &t2010_0_0_32854, &t2010_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2010_0_0_32854;
FieldInfo t2010_f17_FieldInfo = 
{
	"AllFlags", &t2010_0_0_32854, &t2010_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t2010_FIs[] =
{
	&t2010_f1_FieldInfo,
	&t2010_f2_FieldInfo,
	&t2010_f3_FieldInfo,
	&t2010_f4_FieldInfo,
	&t2010_f5_FieldInfo,
	&t2010_f6_FieldInfo,
	&t2010_f7_FieldInfo,
	&t2010_f8_FieldInfo,
	&t2010_f9_FieldInfo,
	&t2010_f10_FieldInfo,
	&t2010_f11_FieldInfo,
	&t2010_f12_FieldInfo,
	&t2010_f13_FieldInfo,
	&t2010_f14_FieldInfo,
	&t2010_f15_FieldInfo,
	&t2010_f16_FieldInfo,
	&t2010_f17_FieldInfo,
	NULL
};
static const int32_t t2010_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t2010_f2_DefaultValue = 
{
	&t2010_f2_FieldInfo, { (char*)&t2010_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2010_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t2010_f3_DefaultValue = 
{
	&t2010_f3_FieldInfo, { (char*)&t2010_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2010_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t2010_f4_DefaultValue = 
{
	&t2010_f4_FieldInfo, { (char*)&t2010_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2010_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t2010_f5_DefaultValue = 
{
	&t2010_f5_FieldInfo, { (char*)&t2010_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2010_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t2010_f6_DefaultValue = 
{
	&t2010_f6_FieldInfo, { (char*)&t2010_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2010_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t2010_f7_DefaultValue = 
{
	&t2010_f7_FieldInfo, { (char*)&t2010_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2010_f8_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t2010_f8_DefaultValue = 
{
	&t2010_f8_FieldInfo, { (char*)&t2010_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2010_f9_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t2010_f9_DefaultValue = 
{
	&t2010_f9_FieldInfo, { (char*)&t2010_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2010_f10_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t2010_f10_DefaultValue = 
{
	&t2010_f10_FieldInfo, { (char*)&t2010_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2010_f11_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t2010_f11_DefaultValue = 
{
	&t2010_f11_FieldInfo, { (char*)&t2010_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2010_f12_DefaultValueData = 512;
static Il2CppFieldDefaultValueEntry t2010_f12_DefaultValue = 
{
	&t2010_f12_FieldInfo, { (char*)&t2010_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2010_f13_DefaultValueData = 1024;
static Il2CppFieldDefaultValueEntry t2010_f13_DefaultValue = 
{
	&t2010_f13_FieldInfo, { (char*)&t2010_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2010_f14_DefaultValueData = 2048;
static Il2CppFieldDefaultValueEntry t2010_f14_DefaultValue = 
{
	&t2010_f14_FieldInfo, { (char*)&t2010_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2010_f15_DefaultValueData = 4096;
static Il2CppFieldDefaultValueEntry t2010_f15_DefaultValue = 
{
	&t2010_f15_FieldInfo, { (char*)&t2010_f15_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2010_f16_DefaultValueData = 8192;
static Il2CppFieldDefaultValueEntry t2010_f16_DefaultValue = 
{
	&t2010_f16_FieldInfo, { (char*)&t2010_f16_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2010_f17_DefaultValueData = 16383;
static Il2CppFieldDefaultValueEntry t2010_f17_DefaultValue = 
{
	&t2010_f17_FieldInfo, { (char*)&t2010_f17_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2010_FDVs[] = 
{
	&t2010_f2_DefaultValue,
	&t2010_f3_DefaultValue,
	&t2010_f4_DefaultValue,
	&t2010_f5_DefaultValue,
	&t2010_f6_DefaultValue,
	&t2010_f7_DefaultValue,
	&t2010_f8_DefaultValue,
	&t2010_f9_DefaultValue,
	&t2010_f10_DefaultValue,
	&t2010_f11_DefaultValue,
	&t2010_f12_DefaultValue,
	&t2010_f13_DefaultValue,
	&t2010_f14_DefaultValue,
	&t2010_f15_DefaultValue,
	&t2010_f16_DefaultValue,
	&t2010_f17_DefaultValue,
	NULL
};
static Il2CppMethodReference t2010_VT[] =
{
	&m649_MI,
	&m646_MI,
	&m650_MI,
	&m651_MI,
	&m652_MI,
	&m653_MI,
	&m654_MI,
	&m655_MI,
	&m656_MI,
	&m657_MI,
	&m658_MI,
	&m659_MI,
	&m660_MI,
	&m661_MI,
	&m662_MI,
	&m663_MI,
	&m664_MI,
	&m665_MI,
	&m666_MI,
	&m667_MI,
	&m668_MI,
	&m669_MI,
	&m670_MI,
};
static bool t2010_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2010_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern TypeInfo t611_TI;
#include "t611.h"
#include "t611MD.h"
extern MethodInfo m2970_MI;
extern TypeInfo t608_TI;
#include "t608.h"
#include "t608MD.h"
extern MethodInfo m2967_MI;
void t2010_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t611 * tmp;
		tmp = (t611 *)il2cpp_codegen_object_new (&t611_TI);
		m2970(tmp, il2cpp_codegen_string_new_wrapper("CAS support is not available with Silverlight applications."), &m2970_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t608 * tmp;
		tmp = (t608 *)il2cpp_codegen_object_new (&t608_TI);
		m2967(tmp, &m2967_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2010__CustomAttributeCache = {
3,
NULL,
&t2010_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2010_1_0_0;
extern CustomAttributesCache t2010__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2010_DM = 
{
	NULL, NULL, NULL, t2010_IOs, &t8_0_0_0, t2010_VT, t2010_VTIGM, NULL};
TypeInfo t2010_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityPermissionFlag", "System.Security.Permissions", t2010_MIs, NULL, t2010_FIs, NULL, &t125_TI, NULL, &t2010__CustomAttributeCache, &t2010_0_0_0, &t2010_1_0_0, &t2010_DM, NULL, NULL, NULL, t2010_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2010)+ sizeof (Il2CppObject), sizeof (t2010)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 17, 0, 0, 23, 0, 3};
#include "t2012.h"
// Metadata Definition System.Security.Permissions.StrongNamePublicKeyBlob
extern TypeInfo t2012_TI;
#include "t2012MD.h"
extern Il2CppType t9_0_0_0;
static ParameterInfo t2012_m10636_ParameterInfos[] = 
{
	{"obj", 0, 134223450, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10636_MI = 
{
	"Equals", (methodPointerType)&m10636, &t2012_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2012_m10636_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4727, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10637_MI = 
{
	"GetHashCode", (methodPointerType)&m10637, &t2012_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4728, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10638_MI = 
{
	"ToString", (methodPointerType)&m10638, &t2012_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4729, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2012_MIs[] =
{
	&m10636_MI,
	&m10637_MI,
	&m10638_MI,
	NULL
};
extern Il2CppType t723_0_0_3;
FieldInfo t2012_f0_FieldInfo = 
{
	"pubkey", &t723_0_0_3, &t2012_TI, offsetof(t2012, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2012_FIs[] =
{
	&t2012_f0_FieldInfo,
	NULL
};
extern MethodInfo m10636_MI;
extern MethodInfo m10637_MI;
extern MethodInfo m10638_MI;
static Il2CppMethodReference t2012_VT[] =
{
	&m10636_MI,
	&m646_MI,
	&m10637_MI,
	&m10638_MI,
};
static bool t2012_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t2012_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2012__CustomAttributeCache = {
1,
NULL,
&t2012_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2012_0_0_0;
extern Il2CppType t2012_1_0_0;
struct t2012;
extern CustomAttributesCache t2012__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2012_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2012_VT, t2012_VTIGM, NULL};
TypeInfo t2012_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StrongNamePublicKeyBlob", "System.Security.Permissions", t2012_MIs, NULL, t2012_FIs, NULL, &t2012_TI, NULL, &t2012__CustomAttributeCache, &t2012_0_0_0, &t2012_1_0_0, &t2012_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2012), sizeof (t2012), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 4, 0, 0};
#include "t2013.h"
// Metadata Definition System.Security.Policy.ApplicationTrust
extern TypeInfo t2013_TI;
#include "t2013MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10639_MI = 
{
	".ctor", (methodPointerType)&m10639, &t2013_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4730, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2013_MIs[] =
{
	&m10639_MI,
	NULL
};
extern Il2CppType t2014_0_0_1;
FieldInfo t2013_f0_FieldInfo = 
{
	"fullTrustAssemblies", &t2014_0_0_1, &t2013_TI, offsetof(t2013, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2013_FIs[] =
{
	&t2013_f0_FieldInfo,
	NULL
};
static Il2CppMethodReference t2013_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2013_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static const Il2CppType* t2013_ITIs[] = 
{
	&t2628_0_0_0,
};
static Il2CppInterfaceOffsetPair t2013_IOs[] = 
{
	{ &t2628_0_0_0, 4},
};
void t2013_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2013__CustomAttributeCache = {
1,
NULL,
&t2013_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2013_0_0_0;
extern Il2CppType t2013_1_0_0;
struct t2013;
extern CustomAttributesCache t2013__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2013_DM = 
{
	NULL, NULL, t2013_ITIs, t2013_IOs, &t9_0_0_0, t2013_VT, t2013_VTIGM, NULL};
TypeInfo t2013_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ApplicationTrust", "System.Security.Policy", t2013_MIs, NULL, t2013_FIs, NULL, &t2013_TI, NULL, &t2013__CustomAttributeCache, &t2013_0_0_0, &t2013_1_0_0, &t2013_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2013), sizeof (t2013), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 1, 1};
#include "t2015.h"
// Metadata Definition System.Security.Policy.Evidence/EvidenceEnumerator
extern TypeInfo t2015_TI;
#include "t2015MD.h"
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
static ParameterInfo t2015_m10640_ParameterInfos[] = 
{
	{"hostenum", 0, 134223454, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"assemblyenum", 1, 134223455, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10640_MI = 
{
	".ctor", (methodPointerType)&m10640, &t2015_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2015_m10640_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4741, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10641_MI = 
{
	"MoveNext", (methodPointerType)&m10641, &t2015_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 4742, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10642_MI = 
{
	"get_Current", (methodPointerType)&m10642, &t2015_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 4743, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2015_MIs[] =
{
	&m10640_MI,
	&m10641_MI,
	&m10642_MI,
	NULL
};
extern Il2CppType t76_0_0_1;
FieldInfo t2015_f0_FieldInfo = 
{
	"currentEnum", &t76_0_0_1, &t2015_TI, offsetof(t2015, f0), &EmptyCustomAttributesCache};
extern Il2CppType t76_0_0_1;
FieldInfo t2015_f1_FieldInfo = 
{
	"hostEnum", &t76_0_0_1, &t2015_TI, offsetof(t2015, f1), &EmptyCustomAttributesCache};
extern Il2CppType t76_0_0_1;
FieldInfo t2015_f2_FieldInfo = 
{
	"assemblyEnum", &t76_0_0_1, &t2015_TI, offsetof(t2015, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2015_FIs[] =
{
	&t2015_f0_FieldInfo,
	&t2015_f1_FieldInfo,
	&t2015_f2_FieldInfo,
	NULL
};
extern MethodInfo m10642_MI;
static PropertyInfo t2015____Current_PropertyInfo = 
{
	&t2015_TI, "Current", &m10642_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2015_PIs[] =
{
	&t2015____Current_PropertyInfo,
	NULL
};
extern MethodInfo m10641_MI;
static Il2CppMethodReference t2015_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10642_MI,
	&m10641_MI,
};
static bool t2015_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t2015_ITIs[] = 
{
	&t76_0_0_0,
};
static Il2CppInterfaceOffsetPair t2015_IOs[] = 
{
	{ &t76_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2015_0_0_0;
extern Il2CppType t2015_1_0_0;
extern TypeInfo t1791_TI;
extern Il2CppType t1791_0_0_0;
struct t2015;
const Il2CppTypeDefinitionMetadata t2015_DM = 
{
	&t1791_0_0_0, NULL, t2015_ITIs, t2015_IOs, &t9_0_0_0, t2015_VT, t2015_VTIGM, NULL};
TypeInfo t2015_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EvidenceEnumerator", "", t2015_MIs, t2015_PIs, t2015_FIs, NULL, &t2015_TI, NULL, &EmptyCustomAttributesCache, &t2015_0_0_0, &t2015_1_0_0, &t2015_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2015), sizeof (t2015), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 1, 3, 0, 0, 6, 1, 1};
#include "t1791.h"
// Metadata Definition System.Security.Policy.Evidence
#include "t1791MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10643_MI = 
{
	".ctor", (methodPointerType)&m10643, &t1791_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4731, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10644_MI = 
{
	"get_Count", (methodPointerType)&m10644, &t1791_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 4732, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10645_MI = 
{
	"get_IsSynchronized", (methodPointerType)&m10645, &t1791_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 4733, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10646_MI = 
{
	"get_SyncRoot", (methodPointerType)&m10646, &t1791_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 4734, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1161_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10647_MI = 
{
	"get_HostEvidenceList", (methodPointerType)&m10647, &t1791_TI, &t1161_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4735, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1161_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10648_MI = 
{
	"get_AssemblyEvidenceList", (methodPointerType)&m10648, &t1791_TI, &t1161_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4736, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t121_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1791_m10649_ParameterInfos[] = 
{
	{"array", 0, 134223451, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"index", 1, 134223452, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10649_MI = 
{
	"CopyTo", (methodPointerType)&m10649, &t1791_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1791_m10649_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 8, 2, false, false, 4737, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1791_m10650_ParameterInfos[] = 
{
	{"obj", 0, 134223453, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1791__CustomAttributeCache_m10650;
MethodInfo m10650_MI = 
{
	"Equals", (methodPointerType)&m10650, &t1791_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1791_m10650_ParameterInfos, &t1791__CustomAttributeCache_m10650, 198, 0, 0, 1, false, false, 4738, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t76_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10651_MI = 
{
	"GetEnumerator", (methodPointerType)&m10651, &t1791_TI, &t76_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 486, 0, 4, 0, false, false, 4739, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1791__CustomAttributeCache_m10652;
MethodInfo m10652_MI = 
{
	"GetHashCode", (methodPointerType)&m10652, &t1791_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t1791__CustomAttributeCache_m10652, 198, 0, 2, 0, false, false, 4740, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1791_MIs[] =
{
	&m10643_MI,
	&m10644_MI,
	&m10645_MI,
	&m10646_MI,
	&m10647_MI,
	&m10648_MI,
	&m10649_MI,
	&m10650_MI,
	&m10651_MI,
	&m10652_MI,
	NULL
};
extern Il2CppType t1161_0_0_1;
FieldInfo t1791_f0_FieldInfo = 
{
	"hostEvidenceList", &t1161_0_0_1, &t1791_TI, offsetof(t1791, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1161_0_0_1;
FieldInfo t1791_f1_FieldInfo = 
{
	"assemblyEvidenceList", &t1161_0_0_1, &t1791_TI, offsetof(t1791, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1791_f2_FieldInfo = 
{
	"_hashCode", &t125_0_0_1, &t1791_TI, offsetof(t1791, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1791_FIs[] =
{
	&t1791_f0_FieldInfo,
	&t1791_f1_FieldInfo,
	&t1791_f2_FieldInfo,
	NULL
};
extern MethodInfo m10644_MI;
static PropertyInfo t1791____Count_PropertyInfo = 
{
	&t1791_TI, "Count", &m10644_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10645_MI;
static PropertyInfo t1791____IsSynchronized_PropertyInfo = 
{
	&t1791_TI, "IsSynchronized", &m10645_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10646_MI;
static PropertyInfo t1791____SyncRoot_PropertyInfo = 
{
	&t1791_TI, "SyncRoot", &m10646_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10647_MI;
static PropertyInfo t1791____HostEvidenceList_PropertyInfo = 
{
	&t1791_TI, "HostEvidenceList", &m10647_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10648_MI;
static PropertyInfo t1791____AssemblyEvidenceList_PropertyInfo = 
{
	&t1791_TI, "AssemblyEvidenceList", &m10648_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1791_PIs[] =
{
	&t1791____Count_PropertyInfo,
	&t1791____IsSynchronized_PropertyInfo,
	&t1791____SyncRoot_PropertyInfo,
	&t1791____HostEvidenceList_PropertyInfo,
	&t1791____AssemblyEvidenceList_PropertyInfo,
	NULL
};
static const Il2CppType* t1791_TI__nestedTypes[1] =
{
	&t2015_0_0_0,
};
extern MethodInfo m10650_MI;
extern MethodInfo m10652_MI;
extern MethodInfo m10651_MI;
extern MethodInfo m10649_MI;
static Il2CppMethodReference t1791_VT[] =
{
	&m10650_MI,
	&m646_MI,
	&m10652_MI,
	&m673_MI,
	&m10651_MI,
	&m10644_MI,
	&m10645_MI,
	&m10646_MI,
	&m10649_MI,
};
static bool t1791_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t658_0_0_0;
extern Il2CppType t991_0_0_0;
static const Il2CppType* t1791_ITIs[] = 
{
	&t658_0_0_0,
	&t991_0_0_0,
};
static Il2CppInterfaceOffsetPair t1791_IOs[] = 
{
	{ &t658_0_0_0, 4},
	{ &t991_0_0_0, 5},
};
extern TypeInfo t1583_TI;
#include "t1583.h"
#include "t1583MD.h"
extern MethodInfo m7821_MI;
void t1791_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7821(tmp, il2cpp_codegen_string_new_wrapper("Serialization format not compatible with .NET"), &m7821_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t1791_CustomAttributesCacheGenerator_m10650(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1791_CustomAttributesCacheGenerator_m10652(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1791__CustomAttributeCache = {
2,
NULL,
&t1791_CustomAttributesCacheGenerator
};
CustomAttributesCache t1791__CustomAttributeCache_m10650 = {
1,
NULL,
&t1791_CustomAttributesCacheGenerator_m10650
};
CustomAttributesCache t1791__CustomAttributeCache_m10652 = {
1,
NULL,
&t1791_CustomAttributesCacheGenerator_m10652
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1791_1_0_0;
struct t1791;
extern CustomAttributesCache t1791__CustomAttributeCache;
extern CustomAttributesCache t1791__CustomAttributeCache_m10650;
extern CustomAttributesCache t1791__CustomAttributeCache_m10652;
const Il2CppTypeDefinitionMetadata t1791_DM = 
{
	NULL, t1791_TI__nestedTypes, t1791_ITIs, t1791_IOs, &t9_0_0_0, t1791_VT, t1791_VTIGM, NULL};
TypeInfo t1791_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Evidence", "System.Security.Policy", t1791_MIs, t1791_PIs, t1791_FIs, NULL, &t1791_TI, NULL, &t1791__CustomAttributeCache, &t1791_0_0_0, &t1791_1_0_0, &t1791_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1791), sizeof (t1791), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 5, 3, 0, 1, 9, 2, 2};
#include "t2016.h"
// Metadata Definition System.Security.Policy.Hash
extern TypeInfo t2016_TI;
#include "t2016MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10653_MI = 
{
	".ctor", (methodPointerType)&m10653, &t2016_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 4744, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t2016_m10654_ParameterInfos[] = 
{
	{"info", 0, 134223456, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134223457, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10654_MI = 
{
	".ctor", (methodPointerType)&m10654, &t2016_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t2016_m10654_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 4745, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t2016_m10655_ParameterInfos[] = 
{
	{"info", 0, 134223458, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134223459, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10655_MI = 
{
	"GetObjectData", (methodPointerType)&m10655, &t2016_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t2016_m10655_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 2, false, false, 4746, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10656_MI = 
{
	"ToString", (methodPointerType)&m10656, &t2016_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4747, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10657_MI = 
{
	"GetData", (methodPointerType)&m10657, &t2016_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4748, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2016_MIs[] =
{
	&m10653_MI,
	&m10654_MI,
	&m10655_MI,
	&m10656_MI,
	&m10657_MI,
	NULL
};
extern Il2CppType t1336_0_0_1;
FieldInfo t2016_f0_FieldInfo = 
{
	"assembly", &t1336_0_0_1, &t2016_TI, offsetof(t2016, f0), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t2016_f1_FieldInfo = 
{
	"data", &t723_0_0_1, &t2016_TI, offsetof(t2016, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2016_FIs[] =
{
	&t2016_f0_FieldInfo,
	&t2016_f1_FieldInfo,
	NULL
};
extern MethodInfo m10656_MI;
extern MethodInfo m10655_MI;
static Il2CppMethodReference t2016_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m10656_MI,
	&m10655_MI,
};
static bool t2016_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t616_0_0_0;
extern Il2CppType t2630_0_0_0;
static const Il2CppType* t2016_ITIs[] = 
{
	&t616_0_0_0,
	&t2630_0_0_0,
};
static Il2CppInterfaceOffsetPair t2016_IOs[] = 
{
	{ &t616_0_0_0, 4},
	{ &t2630_0_0_0, 5},
};
void t2016_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2016__CustomAttributeCache = {
1,
NULL,
&t2016_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2016_0_0_0;
extern Il2CppType t2016_1_0_0;
struct t2016;
extern CustomAttributesCache t2016__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2016_DM = 
{
	NULL, NULL, t2016_ITIs, t2016_IOs, &t9_0_0_0, t2016_VT, t2016_VTIGM, NULL};
TypeInfo t2016_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Hash", "System.Security.Policy", t2016_MIs, NULL, t2016_FIs, NULL, &t2016_TI, NULL, &t2016__CustomAttributeCache, &t2016_0_0_0, &t2016_1_0_0, &t2016_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2016), sizeof (t2016), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 2, 0, 0, 5, 2, 2};
// Metadata Definition System.Security.Policy.IBuiltInEvidence
extern TypeInfo t2630_TI;
static MethodInfo* t2630_MIs[] =
{
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2630_1_0_0;
struct t2630;
const Il2CppTypeDefinitionMetadata t2630_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2630_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IBuiltInEvidence", "System.Security.Policy", t2630_MIs, NULL, NULL, NULL, &t2630_TI, NULL, &EmptyCustomAttributesCache, &t2630_0_0_0, &t2630_1_0_0, &t2630_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 160, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Security.Policy.IIdentityPermissionFactory
extern TypeInfo t2631_TI;
static MethodInfo* t2631_MIs[] =
{
	NULL
};
void t2631_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2631__CustomAttributeCache = {
1,
NULL,
&t2631_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2631_0_0_0;
extern Il2CppType t2631_1_0_0;
struct t2631;
extern CustomAttributesCache t2631__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2631_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2631_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IIdentityPermissionFactory", "System.Security.Policy", t2631_MIs, NULL, NULL, NULL, &t2631_TI, NULL, &t2631__CustomAttributeCache, &t2631_0_0_0, &t2631_1_0_0, &t2631_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t2017.h"
// Metadata Definition System.Security.Policy.StrongName
extern TypeInfo t2017_TI;
#include "t2017MD.h"
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10658_MI = 
{
	"get_Name", (methodPointerType)&m10658, &t2017_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4749, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2012_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10659_MI = 
{
	"get_PublicKey", (methodPointerType)&m10659, &t2017_TI, &t2012_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4750, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1187_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10660_MI = 
{
	"get_Version", (methodPointerType)&m10660, &t2017_TI, &t1187_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4751, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2017_m10661_ParameterInfos[] = 
{
	{"o", 0, 134223460, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10661_MI = 
{
	"Equals", (methodPointerType)&m10661, &t2017_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2017_m10661_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4752, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10662_MI = 
{
	"GetHashCode", (methodPointerType)&m10662, &t2017_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4753, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10663_MI = 
{
	"ToString", (methodPointerType)&m10663, &t2017_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4754, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2017_MIs[] =
{
	&m10658_MI,
	&m10659_MI,
	&m10660_MI,
	&m10661_MI,
	&m10662_MI,
	&m10663_MI,
	NULL
};
extern Il2CppType t2012_0_0_1;
FieldInfo t2017_f0_FieldInfo = 
{
	"publickey", &t2012_0_0_1, &t2017_TI, offsetof(t2017, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2017_f1_FieldInfo = 
{
	"name", &t2_0_0_1, &t2017_TI, offsetof(t2017, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1187_0_0_1;
FieldInfo t2017_f2_FieldInfo = 
{
	"version", &t1187_0_0_1, &t2017_TI, offsetof(t2017, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2017_FIs[] =
{
	&t2017_f0_FieldInfo,
	&t2017_f1_FieldInfo,
	&t2017_f2_FieldInfo,
	NULL
};
extern MethodInfo m10658_MI;
static PropertyInfo t2017____Name_PropertyInfo = 
{
	&t2017_TI, "Name", &m10658_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10659_MI;
static PropertyInfo t2017____PublicKey_PropertyInfo = 
{
	&t2017_TI, "PublicKey", &m10659_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10660_MI;
static PropertyInfo t2017____Version_PropertyInfo = 
{
	&t2017_TI, "Version", &m10660_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2017_PIs[] =
{
	&t2017____Name_PropertyInfo,
	&t2017____PublicKey_PropertyInfo,
	&t2017____Version_PropertyInfo,
	NULL
};
extern MethodInfo m10661_MI;
extern MethodInfo m10662_MI;
extern MethodInfo m10663_MI;
static Il2CppMethodReference t2017_VT[] =
{
	&m10661_MI,
	&m646_MI,
	&m10662_MI,
	&m10663_MI,
};
static bool t2017_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static const Il2CppType* t2017_ITIs[] = 
{
	&t2630_0_0_0,
	&t2631_0_0_0,
};
static Il2CppInterfaceOffsetPair t2017_IOs[] = 
{
	{ &t2630_0_0_0, 4},
	{ &t2631_0_0_0, 4},
};
void t2017_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2017__CustomAttributeCache = {
1,
NULL,
&t2017_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2017_0_0_0;
extern Il2CppType t2017_1_0_0;
struct t2017;
extern CustomAttributesCache t2017__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2017_DM = 
{
	NULL, NULL, t2017_ITIs, t2017_IOs, &t9_0_0_0, t2017_VT, t2017_VTIGM, NULL};
TypeInfo t2017_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StrongName", "System.Security.Policy", t2017_MIs, t2017_PIs, t2017_FIs, NULL, &t2017_TI, NULL, &t2017__CustomAttributeCache, &t2017_0_0_0, &t2017_1_0_0, &t2017_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2017), sizeof (t2017), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 3, 3, 0, 0, 4, 2, 2};
// Metadata Definition System.Security.Principal.IIdentity
extern TypeInfo t2632_TI;
static MethodInfo* t2632_MIs[] =
{
	NULL
};
void t2632_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2632__CustomAttributeCache = {
1,
NULL,
&t2632_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2632_0_0_0;
extern Il2CppType t2632_1_0_0;
struct t2632;
extern CustomAttributesCache t2632__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2632_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2632_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IIdentity", "System.Security.Principal", t2632_MIs, NULL, NULL, NULL, &t2632_TI, NULL, &t2632__CustomAttributeCache, &t2632_0_0_0, &t2632_1_0_0, &t2632_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Security.Principal.IPrincipal
extern TypeInfo t2064_TI;
static MethodInfo* t2064_MIs[] =
{
	NULL
};
void t2064_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2064__CustomAttributeCache = {
1,
NULL,
&t2064_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2064_0_0_0;
extern Il2CppType t2064_1_0_0;
struct t2064;
extern CustomAttributesCache t2064__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2064_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2064_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IPrincipal", "System.Security.Principal", t2064_MIs, NULL, NULL, NULL, &t2064_TI, NULL, &t2064__CustomAttributeCache, &t2064_0_0_0, &t2064_1_0_0, &t2064_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t2018.h"
// Metadata Definition System.Security.Principal.PrincipalPolicy
extern TypeInfo t2018_TI;
#include "t2018MD.h"
static MethodInfo* t2018_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t2018_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t2018_TI, offsetof(t2018, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t2018_0_0_32854;
FieldInfo t2018_f2_FieldInfo = 
{
	"UnauthenticatedPrincipal", &t2018_0_0_32854, &t2018_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2018_0_0_32854;
FieldInfo t2018_f3_FieldInfo = 
{
	"NoPrincipal", &t2018_0_0_32854, &t2018_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2018_0_0_32854;
FieldInfo t2018_f4_FieldInfo = 
{
	"WindowsPrincipal", &t2018_0_0_32854, &t2018_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t2018_FIs[] =
{
	&t2018_f1_FieldInfo,
	&t2018_f2_FieldInfo,
	&t2018_f3_FieldInfo,
	&t2018_f4_FieldInfo,
	NULL
};
static const int32_t t2018_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t2018_f2_DefaultValue = 
{
	&t2018_f2_FieldInfo, { (char*)&t2018_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2018_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t2018_f3_DefaultValue = 
{
	&t2018_f3_FieldInfo, { (char*)&t2018_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2018_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t2018_f4_DefaultValue = 
{
	&t2018_f4_FieldInfo, { (char*)&t2018_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2018_FDVs[] = 
{
	&t2018_f2_DefaultValue,
	&t2018_f3_DefaultValue,
	&t2018_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t2018_VT[] =
{
	&m649_MI,
	&m646_MI,
	&m650_MI,
	&m651_MI,
	&m652_MI,
	&m653_MI,
	&m654_MI,
	&m655_MI,
	&m656_MI,
	&m657_MI,
	&m658_MI,
	&m659_MI,
	&m660_MI,
	&m661_MI,
	&m662_MI,
	&m663_MI,
	&m664_MI,
	&m665_MI,
	&m666_MI,
	&m667_MI,
	&m668_MI,
	&m669_MI,
	&m670_MI,
};
static bool t2018_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2018_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t2018_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2018__CustomAttributeCache = {
1,
NULL,
&t2018_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2018_0_0_0;
extern Il2CppType t2018_1_0_0;
extern CustomAttributesCache t2018__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2018_DM = 
{
	NULL, NULL, NULL, t2018_IOs, &t8_0_0_0, t2018_VT, t2018_VTIGM, NULL};
TypeInfo t2018_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PrincipalPolicy", "System.Security.Principal", t2018_MIs, NULL, t2018_FIs, NULL, &t125_TI, NULL, &t2018__CustomAttributeCache, &t2018_0_0_0, &t2018_1_0_0, &t2018_DM, NULL, NULL, NULL, t2018_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2018)+ sizeof (Il2CppObject), sizeof (t2018)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t2019.h"
// Metadata Definition System.Security.Principal.WindowsAccountType
extern TypeInfo t2019_TI;
#include "t2019MD.h"
static MethodInfo* t2019_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t2019_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t2019_TI, offsetof(t2019, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f2_FieldInfo = 
{
	"Normal", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f3_FieldInfo = 
{
	"Guest", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f4_FieldInfo = 
{
	"System", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f5_FieldInfo = 
{
	"Anonymous", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t2019_FIs[] =
{
	&t2019_f1_FieldInfo,
	&t2019_f2_FieldInfo,
	&t2019_f3_FieldInfo,
	&t2019_f4_FieldInfo,
	&t2019_f5_FieldInfo,
	NULL
};
static const int32_t t2019_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t2019_f2_DefaultValue = 
{
	&t2019_f2_FieldInfo, { (char*)&t2019_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2019_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t2019_f3_DefaultValue = 
{
	&t2019_f3_FieldInfo, { (char*)&t2019_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2019_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t2019_f4_DefaultValue = 
{
	&t2019_f4_FieldInfo, { (char*)&t2019_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2019_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t2019_f5_DefaultValue = 
{
	&t2019_f5_FieldInfo, { (char*)&t2019_f5_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2019_FDVs[] = 
{
	&t2019_f2_DefaultValue,
	&t2019_f3_DefaultValue,
	&t2019_f4_DefaultValue,
	&t2019_f5_DefaultValue,
	NULL
};
static Il2CppMethodReference t2019_VT[] =
{
	&m649_MI,
	&m646_MI,
	&m650_MI,
	&m651_MI,
	&m652_MI,
	&m653_MI,
	&m654_MI,
	&m655_MI,
	&m656_MI,
	&m657_MI,
	&m658_MI,
	&m659_MI,
	&m660_MI,
	&m661_MI,
	&m662_MI,
	&m663_MI,
	&m664_MI,
	&m665_MI,
	&m666_MI,
	&m667_MI,
	&m668_MI,
	&m669_MI,
	&m670_MI,
};
static bool t2019_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2019_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t2019_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2019__CustomAttributeCache = {
1,
NULL,
&t2019_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2019_0_0_0;
extern Il2CppType t2019_1_0_0;
extern CustomAttributesCache t2019__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2019_DM = 
{
	NULL, NULL, NULL, t2019_IOs, &t8_0_0_0, t2019_VT, t2019_VTIGM, NULL};
TypeInfo t2019_TI = 
{
	&g_mscorlib_dll_Image, NULL, "WindowsAccountType", "System.Security.Principal", t2019_MIs, NULL, t2019_FIs, NULL, &t125_TI, NULL, &t2019__CustomAttributeCache, &t2019_0_0_0, &t2019_1_0_0, &t2019_DM, NULL, NULL, NULL, t2019_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2019)+ sizeof (Il2CppObject), sizeof (t2019)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t2020.h"
// Metadata Definition System.Security.Principal.WindowsIdentity
extern TypeInfo t2020_TI;
#include "t2020MD.h"
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t2020_m10664_ParameterInfos[] = 
{
	{"info", 0, 134223461, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134223462, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10664_MI = 
{
	".ctor", (methodPointerType)&m10664, &t2020_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t2020_m10664_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4755, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10665_MI = 
{
	".cctor", (methodPointerType)&m10665, &t2020_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4756, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2020_m10666_ParameterInfos[] = 
{
	{"sender", 0, 134223463, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10666_MI = 
{
	"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", (methodPointerType)&m10666, &t2020_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2020_m10666_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 1, false, false, 4757, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t2020_m10667_ParameterInfos[] = 
{
	{"info", 0, 134223464, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134223465, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10667_MI = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData", (methodPointerType)&m10667, &t2020_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t2020_m10667_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, false, 4758, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2020__CustomAttributeCache_m10668;
MethodInfo m10668_MI = 
{
	"Dispose", (methodPointerType)&m10668, &t2020_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t2020__CustomAttributeCache_m10668, 486, 0, 4, 0, false, false, 4759, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m10669_MI = 
{
	"GetCurrentToken", (methodPointerType)&m10669, &t2020_TI, &t58_0_0_0, RuntimeInvoker_t58, NULL, &EmptyCustomAttributesCache, 147, 4096, 255, 0, false, false, 4760, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
static ParameterInfo t2020_m10670_ParameterInfos[] = 
{
	{"token", 0, 134223466, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m10670_MI = 
{
	"GetTokenName", (methodPointerType)&m10670, &t2020_TI, &t2_0_0_0, RuntimeInvoker_t9_t58, t2020_m10670_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 4761, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2020_MIs[] =
{
	&m10664_MI,
	&m10665_MI,
	&m10666_MI,
	&m10667_MI,
	&m10668_MI,
	&m10669_MI,
	&m10670_MI,
	NULL
};
extern Il2CppType t58_0_0_1;
FieldInfo t2020_f0_FieldInfo = 
{
	"_token", &t58_0_0_1, &t2020_TI, offsetof(t2020, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2020_f1_FieldInfo = 
{
	"_type", &t2_0_0_1, &t2020_TI, offsetof(t2020, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_1;
FieldInfo t2020_f2_FieldInfo = 
{
	"_account", &t2019_0_0_1, &t2020_TI, offsetof(t2020, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t2020_f3_FieldInfo = 
{
	"_authenticated", &t124_0_0_1, &t2020_TI, offsetof(t2020, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2020_f4_FieldInfo = 
{
	"_name", &t2_0_0_1, &t2020_TI, offsetof(t2020, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1093_0_0_1;
FieldInfo t2020_f5_FieldInfo = 
{
	"_info", &t1093_0_0_1, &t2020_TI, offsetof(t2020, f5), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_17;
FieldInfo t2020_f6_FieldInfo = 
{
	"invalidWindows", &t58_0_0_17, &t2020_TI, offsetof(t2020_SFs, f6), &EmptyCustomAttributesCache};
static FieldInfo* t2020_FIs[] =
{
	&t2020_f0_FieldInfo,
	&t2020_f1_FieldInfo,
	&t2020_f2_FieldInfo,
	&t2020_f3_FieldInfo,
	&t2020_f4_FieldInfo,
	&t2020_f5_FieldInfo,
	&t2020_f6_FieldInfo,
	NULL
};
extern MethodInfo m10668_MI;
extern MethodInfo m10667_MI;
extern MethodInfo m10666_MI;
static Il2CppMethodReference t2020_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10668_MI,
	&m10667_MI,
	&m10666_MI,
};
static bool t2020_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t1099_0_0_0;
static const Il2CppType* t2020_ITIs[] = 
{
	&t137_0_0_0,
	&t616_0_0_0,
	&t1099_0_0_0,
	&t2632_0_0_0,
};
static Il2CppInterfaceOffsetPair t2020_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t616_0_0_0, 5},
	{ &t1099_0_0_0, 6},
	{ &t2632_0_0_0, 7},
};
void t2020_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t2020_CustomAttributesCacheGenerator_m10668(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2020__CustomAttributeCache = {
1,
NULL,
&t2020_CustomAttributesCacheGenerator
};
CustomAttributesCache t2020__CustomAttributeCache_m10668 = {
1,
NULL,
&t2020_CustomAttributesCacheGenerator_m10668
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2020_0_0_0;
extern Il2CppType t2020_1_0_0;
struct t2020;
extern CustomAttributesCache t2020__CustomAttributeCache;
extern CustomAttributesCache t2020__CustomAttributeCache_m10668;
const Il2CppTypeDefinitionMetadata t2020_DM = 
{
	NULL, NULL, t2020_ITIs, t2020_IOs, &t9_0_0_0, t2020_VT, t2020_VTIGM, NULL};
TypeInfo t2020_TI = 
{
	&g_mscorlib_dll_Image, NULL, "WindowsIdentity", "System.Security.Principal", t2020_MIs, NULL, t2020_FIs, NULL, &t2020_TI, NULL, &t2020__CustomAttributeCache, &t2020_0_0_0, &t2020_1_0_0, &t2020_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2020), sizeof (t2020), 0, -1, sizeof(t2020_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 7, 0, 7, 0, 0, 7, 4, 4};
#include "t2009.h"
// Metadata Definition System.Security.CodeAccessPermission
extern TypeInfo t2009_TI;
#include "t2009MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10671_MI = 
{
	".ctor", (methodPointerType)&m10671, &t2009_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4762, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2009_m10672_ParameterInfos[] = 
{
	{"obj", 0, 134223467, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2009__CustomAttributeCache_m10672;
MethodInfo m10672_MI = 
{
	"Equals", (methodPointerType)&m10672, &t2009_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2009_m10672_ParameterInfos, &t2009__CustomAttributeCache_m10672, 198, 0, 0, 1, false, false, 4763, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2009__CustomAttributeCache_m10673;
MethodInfo m10673_MI = 
{
	"GetHashCode", (methodPointerType)&m10673, &t2009_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t2009__CustomAttributeCache_m10673, 198, 0, 2, 0, false, false, 4764, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2011_0_0_0;
static ParameterInfo t2009_m12077_ParameterInfos[] = 
{
	{"target", 0, 134223468, &EmptyCustomAttributesCache, &t2011_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12077_MI = 
{
	"IsSubsetOf", NULL, &t2009_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2009_m12077_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4765, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10674_MI = 
{
	"ToString", (methodPointerType)&m10674, &t2009_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4766, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1651_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12078_MI = 
{
	"ToXml", NULL, &t2009_TI, &t1651_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 1478, 0, 5, 0, false, false, 4767, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2009_m10675_ParameterInfos[] = 
{
	{"version", 0, 134223469, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t1651_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10675_MI = 
{
	"Element", (methodPointerType)&m10675, &t2009_TI, &t1651_0_0_0, RuntimeInvoker_t9_t125, t2009_m10675_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4768, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2011_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t2009_m10676_ParameterInfos[] = 
{
	{"target", 0, 134223470, &EmptyCustomAttributesCache, &t2011_0_0_0},
	{"expected", 1, 134223471, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10676_MI = 
{
	"ThrowInvalidPermission", (methodPointerType)&m10676, &t2009_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2009_m10676_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4769, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2009_MIs[] =
{
	&m10671_MI,
	&m10672_MI,
	&m10673_MI,
	&m12077_MI,
	&m10674_MI,
	&m12078_MI,
	&m10675_MI,
	&m10676_MI,
	NULL
};
static Il2CppMethodReference t2009_VT[] =
{
	&m10672_MI,
	&m646_MI,
	&m10673_MI,
	&m10674_MI,
	NULL,
	NULL,
};
static bool t2009_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t2009_ITIs[] = 
{
	&t2011_0_0_0,
	&t2628_0_0_0,
	&t2629_0_0_0,
};
static Il2CppInterfaceOffsetPair t2009_IOs[] = 
{
	{ &t2011_0_0_0, 4},
	{ &t2628_0_0_0, 4},
	{ &t2629_0_0_0, 4},
};
void t2009_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7821(tmp, il2cpp_codegen_string_new_wrapper("CAS support is experimental (and unsupported)."), &m7821_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t2009_CustomAttributesCacheGenerator_m10672(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t2009_CustomAttributesCacheGenerator_m10673(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2009__CustomAttributeCache = {
2,
NULL,
&t2009_CustomAttributesCacheGenerator
};
CustomAttributesCache t2009__CustomAttributeCache_m10672 = {
1,
NULL,
&t2009_CustomAttributesCacheGenerator_m10672
};
CustomAttributesCache t2009__CustomAttributeCache_m10673 = {
1,
NULL,
&t2009_CustomAttributesCacheGenerator_m10673
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2009_1_0_0;
struct t2009;
extern CustomAttributesCache t2009__CustomAttributeCache;
extern CustomAttributesCache t2009__CustomAttributeCache_m10672;
extern CustomAttributesCache t2009__CustomAttributeCache_m10673;
const Il2CppTypeDefinitionMetadata t2009_DM = 
{
	NULL, NULL, t2009_ITIs, t2009_IOs, &t9_0_0_0, t2009_VT, t2009_VTIGM, NULL};
TypeInfo t2009_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CodeAccessPermission", "System.Security", t2009_MIs, NULL, NULL, NULL, &t2009_TI, NULL, &t2009__CustomAttributeCache, &t2009_0_0_0, &t2009_1_0_0, &t2009_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2009), sizeof (t2009), 0, -1, 0, 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 0, 0, 0, 0, 6, 3, 3};
// Metadata Definition System.Security.IPermission
extern TypeInfo t2011_TI;
static MethodInfo* t2011_MIs[] =
{
	NULL
};
static const Il2CppType* t2011_ITIs[] = 
{
	&t2628_0_0_0,
};
void t2011_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2011__CustomAttributeCache = {
1,
NULL,
&t2011_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2011_1_0_0;
struct t2011;
extern CustomAttributesCache t2011__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2011_DM = 
{
	NULL, NULL, t2011_ITIs, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2011_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IPermission", "System.Security", t2011_MIs, NULL, NULL, NULL, &t2011_TI, NULL, &t2011__CustomAttributeCache, &t2011_0_0_0, &t2011_1_0_0, &t2011_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 1, 0};
// Metadata Definition System.Security.ISecurityEncodable
extern TypeInfo t2628_TI;
static MethodInfo* t2628_MIs[] =
{
	NULL
};
void t2628_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2628__CustomAttributeCache = {
1,
NULL,
&t2628_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2628_1_0_0;
struct t2628;
extern CustomAttributesCache t2628__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2628_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2628_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISecurityEncodable", "System.Security", t2628_MIs, NULL, NULL, NULL, &t2628_TI, NULL, &t2628__CustomAttributeCache, &t2628_0_0_0, &t2628_1_0_0, &t2628_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Security.IStackWalk
extern TypeInfo t2629_TI;
static MethodInfo* t2629_MIs[] =
{
	NULL
};
void t2629_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2629__CustomAttributeCache = {
1,
NULL,
&t2629_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2629_1_0_0;
struct t2629;
extern CustomAttributesCache t2629__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2629_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2629_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IStackWalk", "System.Security", t2629_MIs, NULL, NULL, NULL, &t2629_TI, NULL, &t2629__CustomAttributeCache, &t2629_0_0_0, &t2629_1_0_0, &t2629_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t1792.h"
// Metadata Definition System.Security.PermissionSet
extern TypeInfo t1792_TI;
#include "t1792MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10677_MI = 
{
	".ctor", (methodPointerType)&m10677, &t1792_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4770, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1792_m10678_ParameterInfos[] = 
{
	{"xml", 0, 134223472, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10678_MI = 
{
	".ctor", (methodPointerType)&m10678, &t1792_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1792_m10678_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 4771, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1792_m10679_ParameterInfos[] = 
{
	{"value", 0, 134223473, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1792__CustomAttributeCache_m10679;
MethodInfo m10679_MI = 
{
	"set_DeclarativeSecurity", (methodPointerType)&m10679, &t1792_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1792_m10679_ParameterInfos, &t1792__CustomAttributeCache_m10679, 2179, 0, 255, 1, false, false, 4772, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1792_m10680_ParameterInfos[] = 
{
	{"data", 0, 134223474, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t1792_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10680_MI = 
{
	"CreateFromBinaryFormat", (methodPointerType)&m10680, &t1792_TI, &t1792_0_0_0, RuntimeInvoker_t9_t9, t1792_m10680_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 4773, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1792_MIs[] =
{
	&m10677_MI,
	&m10678_MI,
	&m10679_MI,
	&m10680_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t1792__CustomAttributeCache_U3CDeclarativeSecurityU3Ek__BackingField;
FieldInfo t1792_f0_FieldInfo = 
{
	"<DeclarativeSecurity>k__BackingField", &t124_0_0_1, &t1792_TI, offsetof(t1792, f0), &t1792__CustomAttributeCache_U3CDeclarativeSecurityU3Ek__BackingField};
static FieldInfo* t1792_FIs[] =
{
	&t1792_f0_FieldInfo,
	NULL
};
extern MethodInfo m10679_MI;
static PropertyInfo t1792____DeclarativeSecurity_PropertyInfo = 
{
	&t1792_TI, "DeclarativeSecurity", NULL, &m10679_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1792_PIs[] =
{
	&t1792____DeclarativeSecurity_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1792_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1792_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern TypeInfo t187_TI;
#include "t187.h"
#include "t187MD.h"
extern MethodInfo m674_MI;
void t1792_CustomAttributesCacheGenerator_U3CDeclarativeSecurityU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1792_CustomAttributesCacheGenerator_m10679(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1792__CustomAttributeCache_U3CDeclarativeSecurityU3Ek__BackingField = {
1,
NULL,
&t1792_CustomAttributesCacheGenerator_U3CDeclarativeSecurityU3Ek__BackingField
};
CustomAttributesCache t1792__CustomAttributeCache_m10679 = {
1,
NULL,
&t1792_CustomAttributesCacheGenerator_m10679
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1792_0_0_0;
extern Il2CppType t1792_1_0_0;
struct t1792;
extern CustomAttributesCache t1792__CustomAttributeCache_U3CDeclarativeSecurityU3Ek__BackingField;
extern CustomAttributesCache t1792__CustomAttributeCache_m10679;
const Il2CppTypeDefinitionMetadata t1792_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1792_VT, t1792_VTIGM, NULL};
TypeInfo t1792_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PermissionSet", "System.Security", t1792_MIs, t1792_PIs, t1792_FIs, NULL, &t1792_TI, NULL, &EmptyCustomAttributesCache, &t1792_0_0_0, &t1792_1_0_0, &t1792_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1792), sizeof (t1792), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 1, 1, 0, 0, 4, 0, 0};
#include "t2021.h"
// Metadata Definition System.Security.SecurityContext
extern TypeInfo t2021_TI;
#include "t2021MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10681_MI = 
{
	".ctor", (methodPointerType)&m10681, &t2021_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 4774, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2021_0_0_0;
extern Il2CppType t2021_0_0_0;
static ParameterInfo t2021_m10682_ParameterInfos[] = 
{
	{"sc", 0, 134223475, &EmptyCustomAttributesCache, &t2021_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10682_MI = 
{
	".ctor", (methodPointerType)&m10682, &t2021_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2021_m10682_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 4775, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2021_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10683_MI = 
{
	"Capture", (methodPointerType)&m10683, &t2021_TI, &t2021_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4776, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10684_MI = 
{
	"get_FlowSuppressed", (methodPointerType)&m10684, &t2021_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4777, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2022_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10685_MI = 
{
	"get_CompressedStack", (methodPointerType)&m10685, &t2021_TI, &t2022_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4778, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2021_MIs[] =
{
	&m10681_MI,
	&m10682_MI,
	&m10683_MI,
	&m10684_MI,
	&m10685_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t2021_f0_FieldInfo = 
{
	"_capture", &t124_0_0_1, &t2021_TI, offsetof(t2021, f0), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_1;
FieldInfo t2021_f1_FieldInfo = 
{
	"_winid", &t58_0_0_1, &t2021_TI, offsetof(t2021, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2022_0_0_1;
FieldInfo t2021_f2_FieldInfo = 
{
	"_stack", &t2022_0_0_1, &t2021_TI, offsetof(t2021, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t2021_f3_FieldInfo = 
{
	"_suppressFlow", &t124_0_0_1, &t2021_TI, offsetof(t2021, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2021_FIs[] =
{
	&t2021_f0_FieldInfo,
	&t2021_f1_FieldInfo,
	&t2021_f2_FieldInfo,
	&t2021_f3_FieldInfo,
	NULL
};
extern MethodInfo m10684_MI;
static PropertyInfo t2021____FlowSuppressed_PropertyInfo = 
{
	&t2021_TI, "FlowSuppressed", &m10684_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10685_MI;
static PropertyInfo t2021____CompressedStack_PropertyInfo = 
{
	&t2021_TI, "CompressedStack", &m10685_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2021_PIs[] =
{
	&t2021____FlowSuppressed_PropertyInfo,
	&t2021____CompressedStack_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2021_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2021_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2021_1_0_0;
struct t2021;
const Il2CppTypeDefinitionMetadata t2021_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2021_VT, t2021_VTIGM, NULL};
TypeInfo t2021_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityContext", "System.Security", t2021_MIs, t2021_PIs, t2021_FIs, NULL, &t2021_TI, NULL, &EmptyCustomAttributesCache, &t2021_0_0_0, &t2021_1_0_0, &t2021_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2021), sizeof (t2021), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 2, 4, 0, 0, 4, 0, 0};
#include "t949.h"
// Metadata Definition System.Security.SecurityCriticalAttribute
extern TypeInfo t949_TI;
#include "t949MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m4478_MI = 
{
	".ctor", (methodPointerType)&m4478, &t949_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4779, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t949_MIs[] =
{
	&m4478_MI,
	NULL
};
extern MethodInfo m4475_MI;
extern MethodInfo m4469_MI;
static Il2CppMethodReference t949_VT[] =
{
	&m4475_MI,
	&m646_MI,
	&m4469_MI,
	&m673_MI,
};
static bool t949_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppType t947_0_0_0;
static Il2CppInterfaceOffsetPair t949_IOs[] = 
{
	{ &t947_0_0_0, 4},
};
extern TypeInfo t1017_TI;
#include "t1017.h"
#include "t1017MD.h"
extern MethodInfo m4581_MI;
extern MethodInfo m4583_MI;
extern MethodInfo m4582_MI;
void t949_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1017 * tmp;
		tmp = (t1017 *)il2cpp_codegen_object_new (&t1017_TI);
		m4581(tmp, 6143, &m4581_MI);
		m4583(tmp, false, &m4583_MI);
		m4582(tmp, false, &m4582_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t949__CustomAttributeCache = {
1,
NULL,
&t949_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t949_0_0_0;
extern Il2CppType t949_1_0_0;
extern Il2CppType t718_0_0_0;
struct t949;
extern CustomAttributesCache t949__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t949_DM = 
{
	NULL, NULL, NULL, t949_IOs, &t718_0_0_0, t949_VT, t949_VTIGM, NULL};
TypeInfo t949_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityCriticalAttribute", "System.Security", t949_MIs, NULL, NULL, NULL, &t949_TI, NULL, &t949__CustomAttributeCache, &t949_0_0_0, &t949_1_0_0, &t949_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t949), sizeof (t949), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t2023.h"
// Metadata Definition System.Security.SecurityElement/SecurityAttribute
extern TypeInfo t2023_TI;
#include "t2023MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t2023_m10686_ParameterInfos[] = 
{
	{"name", 0, 134223493, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134223494, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10686_MI = 
{
	".ctor", (methodPointerType)&m10686, &t2023_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2023_m10686_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4798, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10687_MI = 
{
	"get_Name", (methodPointerType)&m10687, &t2023_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4799, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10688_MI = 
{
	"get_Value", (methodPointerType)&m10688, &t2023_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4800, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2023_MIs[] =
{
	&m10686_MI,
	&m10687_MI,
	&m10688_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2023_f0_FieldInfo = 
{
	"_name", &t2_0_0_1, &t2023_TI, offsetof(t2023, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2023_f1_FieldInfo = 
{
	"_value", &t2_0_0_1, &t2023_TI, offsetof(t2023, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2023_FIs[] =
{
	&t2023_f0_FieldInfo,
	&t2023_f1_FieldInfo,
	NULL
};
extern MethodInfo m10687_MI;
static PropertyInfo t2023____Name_PropertyInfo = 
{
	&t2023_TI, "Name", &m10687_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10688_MI;
static PropertyInfo t2023____Value_PropertyInfo = 
{
	&t2023_TI, "Value", &m10688_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2023_PIs[] =
{
	&t2023____Name_PropertyInfo,
	&t2023____Value_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2023_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2023_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2023_0_0_0;
extern Il2CppType t2023_1_0_0;
extern TypeInfo t1651_TI;
extern Il2CppType t1651_0_0_0;
struct t2023;
const Il2CppTypeDefinitionMetadata t2023_DM = 
{
	&t1651_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t2023_VT, t2023_VTIGM, NULL};
TypeInfo t2023_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityAttribute", "", t2023_MIs, t2023_PIs, t2023_FIs, NULL, &t2023_TI, NULL, &EmptyCustomAttributesCache, &t2023_0_0_0, &t2023_1_0_0, &t2023_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2023), sizeof (t2023), 0, -1, 0, 0, -1, 1048581, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 2, 2, 0, 0, 4, 0, 0};
#include "t1651.h"
// Metadata Definition System.Security.SecurityElement
#include "t1651MD.h"
extern Il2CppType t2_0_0_0;
static ParameterInfo t1651_m10689_ParameterInfos[] = 
{
	{"tag", 0, 134223476, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10689_MI = 
{
	".ctor", (methodPointerType)&m10689, &t1651_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1651_m10689_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4780, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1651_m10690_ParameterInfos[] = 
{
	{"tag", 0, 134223477, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"text", 1, 134223478, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10690_MI = 
{
	".ctor", (methodPointerType)&m10690, &t1651_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1651_m10690_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4781, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10691_MI = 
{
	".cctor", (methodPointerType)&m10691, &t1651_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4782, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1161_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10692_MI = 
{
	"get_Children", (methodPointerType)&m10692, &t1651_TI, &t1161_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4783, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10693_MI = 
{
	"get_Tag", (methodPointerType)&m10693, &t1651_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4784, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1651_m10694_ParameterInfos[] = 
{
	{"value", 0, 134223479, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10694_MI = 
{
	"set_Text", (methodPointerType)&m10694, &t1651_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1651_m10694_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4785, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1651_m10695_ParameterInfos[] = 
{
	{"name", 0, 134223480, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134223481, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10695_MI = 
{
	"AddAttribute", (methodPointerType)&m10695, &t1651_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1651_m10695_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4786, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1651_0_0_0;
static ParameterInfo t1651_m10696_ParameterInfos[] = 
{
	{"child", 0, 134223482, &EmptyCustomAttributesCache, &t1651_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10696_MI = 
{
	"AddChild", (methodPointerType)&m10696, &t1651_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1651_m10696_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4787, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1651_m10697_ParameterInfos[] = 
{
	{"str", 0, 134223483, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10697_MI = 
{
	"Escape", (methodPointerType)&m10697, &t1651_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1651_m10697_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4788, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1651_m10698_ParameterInfos[] = 
{
	{"str", 0, 134223484, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10698_MI = 
{
	"Unescape", (methodPointerType)&m10698, &t1651_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1651_m10698_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4789, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1651_m10699_ParameterInfos[] = 
{
	{"name", 0, 134223485, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10699_MI = 
{
	"IsValidAttributeName", (methodPointerType)&m10699, &t1651_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1651_m10699_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4790, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1651_m10700_ParameterInfos[] = 
{
	{"value", 0, 134223486, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10700_MI = 
{
	"IsValidAttributeValue", (methodPointerType)&m10700, &t1651_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1651_m10700_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4791, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1651_m10701_ParameterInfos[] = 
{
	{"tag", 0, 134223487, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10701_MI = 
{
	"IsValidTag", (methodPointerType)&m10701, &t1651_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1651_m10701_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4792, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1651_m10702_ParameterInfos[] = 
{
	{"text", 0, 134223488, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10702_MI = 
{
	"IsValidText", (methodPointerType)&m10702, &t1651_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1651_m10702_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4793, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1651_m10703_ParameterInfos[] = 
{
	{"tag", 0, 134223489, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1651_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10703_MI = 
{
	"SearchForChildByTag", (methodPointerType)&m10703, &t1651_TI, &t1651_0_0_0, RuntimeInvoker_t9_t9, t1651_m10703_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4794, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10704_MI = 
{
	"ToString", (methodPointerType)&m10704, &t1651_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4795, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t315_1_0_0;
extern Il2CppType t315_1_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1651_m10705_ParameterInfos[] = 
{
	{"s", 0, 134223490, &EmptyCustomAttributesCache, &t315_1_0_0},
	{"level", 1, 134223491, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2633_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10705_MI = 
{
	"ToXml", (methodPointerType)&m10705, &t1651_TI, &t122_0_0_0, RuntimeInvoker_t122_t2633_t125, t1651_m10705_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4796, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1651_m10706_ParameterInfos[] = 
{
	{"name", 0, 134223492, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2023_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10706_MI = 
{
	"GetAttribute", (methodPointerType)&m10706, &t1651_TI, &t2023_0_0_0, RuntimeInvoker_t9_t9, t1651_m10706_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4797, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1651_MIs[] =
{
	&m10689_MI,
	&m10690_MI,
	&m10691_MI,
	&m10692_MI,
	&m10693_MI,
	&m10694_MI,
	&m10695_MI,
	&m10696_MI,
	&m10697_MI,
	&m10698_MI,
	&m10699_MI,
	&m10700_MI,
	&m10701_MI,
	&m10702_MI,
	&m10703_MI,
	&m10704_MI,
	&m10705_MI,
	&m10706_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1651_f0_FieldInfo = 
{
	"text", &t2_0_0_1, &t1651_TI, offsetof(t1651, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1651_f1_FieldInfo = 
{
	"tag", &t2_0_0_1, &t1651_TI, offsetof(t1651, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1161_0_0_1;
FieldInfo t1651_f2_FieldInfo = 
{
	"attributes", &t1161_0_0_1, &t1651_TI, offsetof(t1651, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1161_0_0_1;
FieldInfo t1651_f3_FieldInfo = 
{
	"children", &t1161_0_0_1, &t1651_TI, offsetof(t1651, f3), &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_49;
FieldInfo t1651_f4_FieldInfo = 
{
	"invalid_tag_chars", &t305_0_0_49, &t1651_TI, offsetof(t1651_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_49;
FieldInfo t1651_f5_FieldInfo = 
{
	"invalid_text_chars", &t305_0_0_49, &t1651_TI, offsetof(t1651_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_49;
FieldInfo t1651_f6_FieldInfo = 
{
	"invalid_attr_name_chars", &t305_0_0_49, &t1651_TI, offsetof(t1651_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_49;
FieldInfo t1651_f7_FieldInfo = 
{
	"invalid_attr_value_chars", &t305_0_0_49, &t1651_TI, offsetof(t1651_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_49;
FieldInfo t1651_f8_FieldInfo = 
{
	"invalid_chars", &t305_0_0_49, &t1651_TI, offsetof(t1651_SFs, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1651_FIs[] =
{
	&t1651_f0_FieldInfo,
	&t1651_f1_FieldInfo,
	&t1651_f2_FieldInfo,
	&t1651_f3_FieldInfo,
	&t1651_f4_FieldInfo,
	&t1651_f5_FieldInfo,
	&t1651_f6_FieldInfo,
	&t1651_f7_FieldInfo,
	&t1651_f8_FieldInfo,
	NULL
};
extern MethodInfo m10692_MI;
static PropertyInfo t1651____Children_PropertyInfo = 
{
	&t1651_TI, "Children", &m10692_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10693_MI;
static PropertyInfo t1651____Tag_PropertyInfo = 
{
	&t1651_TI, "Tag", &m10693_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10694_MI;
static PropertyInfo t1651____Text_PropertyInfo = 
{
	&t1651_TI, "Text", NULL, &m10694_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1651_PIs[] =
{
	&t1651____Children_PropertyInfo,
	&t1651____Tag_PropertyInfo,
	&t1651____Text_PropertyInfo,
	NULL
};
static const Il2CppType* t1651_TI__nestedTypes[1] =
{
	&t2023_0_0_0,
};
extern MethodInfo m10704_MI;
static Il2CppMethodReference t1651_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m10704_MI,
};
static bool t1651_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1651_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1651__CustomAttributeCache = {
1,
NULL,
&t1651_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1651_1_0_0;
struct t1651;
extern CustomAttributesCache t1651__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1651_DM = 
{
	NULL, t1651_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t1651_VT, t1651_VTIGM, NULL};
TypeInfo t1651_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityElement", "System.Security", t1651_MIs, t1651_PIs, t1651_FIs, NULL, &t1651_TI, NULL, &t1651__CustomAttributeCache, &t1651_0_0_0, &t1651_1_0_0, &t1651_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1651), sizeof (t1651), 0, -1, sizeof(t1651_SFs), 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, true, false, 18, 3, 9, 0, 1, 4, 0, 0};
#include "t2024.h"
// Metadata Definition System.Security.SecurityException
extern TypeInfo t2024_TI;
#include "t2024MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10707_MI = 
{
	".ctor", (methodPointerType)&m10707, &t2024_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4801, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2024_m10708_ParameterInfos[] = 
{
	{"message", 0, 134223495, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10708_MI = 
{
	".ctor", (methodPointerType)&m10708, &t2024_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2024_m10708_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4802, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t2024_m10709_ParameterInfos[] = 
{
	{"info", 0, 134223496, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134223497, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10709_MI = 
{
	".ctor", (methodPointerType)&m10709, &t2024_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t2024_m10709_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 4803, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10710_MI = 
{
	"get_Demanded", (methodPointerType)&m10710, &t2024_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4804, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2011_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10711_MI = 
{
	"get_FirstPermissionThatFailed", (methodPointerType)&m10711, &t2024_TI, &t2011_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4805, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10712_MI = 
{
	"get_PermissionState", (methodPointerType)&m10712, &t2024_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4806, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10713_MI = 
{
	"get_PermissionType", (methodPointerType)&m10713, &t2024_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4807, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10714_MI = 
{
	"get_GrantedSet", (methodPointerType)&m10714, &t2024_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4808, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10715_MI = 
{
	"get_RefusedSet", (methodPointerType)&m10715, &t2024_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4809, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t2024_m10716_ParameterInfos[] = 
{
	{"info", 0, 134223498, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134223499, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10716_MI = 
{
	"GetObjectData", (methodPointerType)&m10716, &t2024_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t2024_m10716_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, false, 4810, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10717_MI = 
{
	"ToString", (methodPointerType)&m10717, &t2024_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4811, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2024_MIs[] =
{
	&m10707_MI,
	&m10708_MI,
	&m10709_MI,
	&m10710_MI,
	&m10711_MI,
	&m10712_MI,
	&m10713_MI,
	&m10714_MI,
	&m10715_MI,
	&m10716_MI,
	&m10717_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2024_f11_FieldInfo = 
{
	"permissionState", &t2_0_0_1, &t2024_TI, offsetof(t2024, f11), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t2024_f12_FieldInfo = 
{
	"permissionType", &t126_0_0_1, &t2024_TI, offsetof(t2024, f12), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2024_f13_FieldInfo = 
{
	"_granted", &t2_0_0_1, &t2024_TI, offsetof(t2024, f13), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2024_f14_FieldInfo = 
{
	"_refused", &t2_0_0_1, &t2024_TI, offsetof(t2024, f14), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t2024_f15_FieldInfo = 
{
	"_demanded", &t9_0_0_1, &t2024_TI, offsetof(t2024, f15), &EmptyCustomAttributesCache};
extern Il2CppType t2011_0_0_1;
FieldInfo t2024_f16_FieldInfo = 
{
	"_firstperm", &t2011_0_0_1, &t2024_TI, offsetof(t2024, f16), &EmptyCustomAttributesCache};
extern Il2CppType t821_0_0_1;
FieldInfo t2024_f17_FieldInfo = 
{
	"_method", &t821_0_0_1, &t2024_TI, offsetof(t2024, f17), &EmptyCustomAttributesCache};
extern Il2CppType t1791_0_0_1;
FieldInfo t2024_f18_FieldInfo = 
{
	"_evidence", &t1791_0_0_1, &t2024_TI, offsetof(t2024, f18), &EmptyCustomAttributesCache};
static FieldInfo* t2024_FIs[] =
{
	&t2024_f11_FieldInfo,
	&t2024_f12_FieldInfo,
	&t2024_f13_FieldInfo,
	&t2024_f14_FieldInfo,
	&t2024_f15_FieldInfo,
	&t2024_f16_FieldInfo,
	&t2024_f17_FieldInfo,
	&t2024_f18_FieldInfo,
	NULL
};
extern MethodInfo m10710_MI;
extern CustomAttributesCache t2024__CustomAttributeCache_t2024____Demanded_PropertyInfo;
static PropertyInfo t2024____Demanded_PropertyInfo = 
{
	&t2024_TI, "Demanded", &m10710_MI, NULL, 0, &t2024__CustomAttributeCache_t2024____Demanded_PropertyInfo};
extern MethodInfo m10711_MI;
static PropertyInfo t2024____FirstPermissionThatFailed_PropertyInfo = 
{
	&t2024_TI, "FirstPermissionThatFailed", &m10711_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10712_MI;
static PropertyInfo t2024____PermissionState_PropertyInfo = 
{
	&t2024_TI, "PermissionState", &m10712_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10713_MI;
static PropertyInfo t2024____PermissionType_PropertyInfo = 
{
	&t2024_TI, "PermissionType", &m10713_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10714_MI;
static PropertyInfo t2024____GrantedSet_PropertyInfo = 
{
	&t2024_TI, "GrantedSet", &m10714_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10715_MI;
static PropertyInfo t2024____RefusedSet_PropertyInfo = 
{
	&t2024_TI, "RefusedSet", &m10715_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2024_PIs[] =
{
	&t2024____Demanded_PropertyInfo,
	&t2024____FirstPermissionThatFailed_PropertyInfo,
	&t2024____PermissionState_PropertyInfo,
	&t2024____PermissionType_PropertyInfo,
	&t2024____GrantedSet_PropertyInfo,
	&t2024____RefusedSet_PropertyInfo,
	NULL
};
extern MethodInfo m10717_MI;
extern MethodInfo m10716_MI;
extern MethodInfo m4219_MI;
extern MethodInfo m1083_MI;
extern MethodInfo m4474_MI;
extern MethodInfo m4417_MI;
extern MethodInfo m4418_MI;
static Il2CppMethodReference t2024_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m10717_MI,
	&m10716_MI,
	&m4219_MI,
	&m1083_MI,
	&m4474_MI,
	&m4417_MI,
	&m10716_MI,
	&m4418_MI,
};
static bool t2024_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t941_0_0_0;
static Il2CppInterfaceOffsetPair t2024_IOs[] = 
{
	{ &t616_0_0_0, 4},
	{ &t941_0_0_0, 5},
};
void t2024_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t2024_CustomAttributesCacheGenerator_t2024____Demanded_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2024__CustomAttributeCache = {
1,
NULL,
&t2024_CustomAttributesCacheGenerator
};
CustomAttributesCache t2024__CustomAttributeCache_t2024____Demanded_PropertyInfo = {
1,
NULL,
&t2024_CustomAttributesCacheGenerator_t2024____Demanded_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2024_0_0_0;
extern Il2CppType t2024_1_0_0;
extern Il2CppType t1360_0_0_0;
struct t2024;
extern CustomAttributesCache t2024__CustomAttributeCache;
extern CustomAttributesCache t2024__CustomAttributeCache_t2024____Demanded_PropertyInfo;
const Il2CppTypeDefinitionMetadata t2024_DM = 
{
	NULL, NULL, NULL, t2024_IOs, &t1360_0_0_0, t2024_VT, t2024_VTIGM, NULL};
TypeInfo t2024_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityException", "System.Security", t2024_MIs, t2024_PIs, t2024_FIs, NULL, &t2024_TI, NULL, &t2024__CustomAttributeCache, &t2024_0_0_0, &t2024_1_0_0, &t2024_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2024), sizeof (t2024), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 11, 6, 8, 0, 0, 11, 0, 2};
#include "t2025.h"
// Metadata Definition System.Security.RuntimeDeclSecurityEntry
extern TypeInfo t2025_TI;
#include "t2025MD.h"
static MethodInfo* t2025_MIs[] =
{
	NULL
};
extern Il2CppType t58_0_0_6;
FieldInfo t2025_f0_FieldInfo = 
{
	"blob", &t58_0_0_6, &t2025_TI, offsetof(t2025, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t2025_f1_FieldInfo = 
{
	"size", &t125_0_0_6, &t2025_TI, offsetof(t2025, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t2025_f2_FieldInfo = 
{
	"index", &t125_0_0_6, &t2025_TI, offsetof(t2025, f2) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t2025_FIs[] =
{
	&t2025_f0_FieldInfo,
	&t2025_f1_FieldInfo,
	&t2025_f2_FieldInfo,
	NULL
};
static Il2CppMethodReference t2025_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t2025_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2025_0_0_0;
extern Il2CppType t2025_1_0_0;
const Il2CppTypeDefinitionMetadata t2025_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t2025_VT, t2025_VTIGM, NULL};
TypeInfo t2025_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RuntimeDeclSecurityEntry", "System.Security", t2025_MIs, NULL, t2025_FIs, NULL, &t2025_TI, NULL, &EmptyCustomAttributesCache, &t2025_0_0_0, &t2025_1_0_0, &t2025_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2025)+ sizeof (Il2CppObject), sizeof (t2025)+ sizeof (Il2CppObject), 0, sizeof(t2025 ), 0, 0, -1, 1048840, 0, 0, true, false, false, false, false, false, false, false, false, true, 0, 0, 3, 0, 0, 4, 0, 0};
#include "t2026.h"
// Metadata Definition System.Security.RuntimeSecurityFrame
extern TypeInfo t2026_TI;
#include "t2026MD.h"
static MethodInfo* t2026_MIs[] =
{
	NULL
};
extern Il2CppType t2027_0_0_6;
FieldInfo t2026_f0_FieldInfo = 
{
	"domain", &t2027_0_0_6, &t2026_TI, offsetof(t2026, f0), &EmptyCustomAttributesCache};
extern Il2CppType t821_0_0_6;
FieldInfo t2026_f1_FieldInfo = 
{
	"method", &t821_0_0_6, &t2026_TI, offsetof(t2026, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_6;
FieldInfo t2026_f2_FieldInfo = 
{
	"assert", &t2025_0_0_6, &t2026_TI, offsetof(t2026, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_6;
FieldInfo t2026_f3_FieldInfo = 
{
	"deny", &t2025_0_0_6, &t2026_TI, offsetof(t2026, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_6;
FieldInfo t2026_f4_FieldInfo = 
{
	"permitonly", &t2025_0_0_6, &t2026_TI, offsetof(t2026, f4), &EmptyCustomAttributesCache};
static FieldInfo* t2026_FIs[] =
{
	&t2026_f0_FieldInfo,
	&t2026_f1_FieldInfo,
	&t2026_f2_FieldInfo,
	&t2026_f3_FieldInfo,
	&t2026_f4_FieldInfo,
	NULL
};
static Il2CppMethodReference t2026_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2026_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2026_0_0_0;
extern Il2CppType t2026_1_0_0;
struct t2026;
const Il2CppTypeDefinitionMetadata t2026_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2026_VT, t2026_VTIGM, NULL};
TypeInfo t2026_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RuntimeSecurityFrame", "System.Security", t2026_MIs, NULL, t2026_FIs, NULL, &t2026_TI, NULL, &EmptyCustomAttributesCache, &t2026_0_0_0, &t2026_1_0_0, &t2026_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2026), sizeof (t2026), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 4, 0, 0};
#include "t2028.h"
// Metadata Definition System.Security.SecurityFrame
extern TypeInfo t2028_TI;
#include "t2028MD.h"
extern Il2CppType t2026_0_0_0;
static ParameterInfo t2028_m10718_ParameterInfos[] = 
{
	{"frame", 0, 134223500, &EmptyCustomAttributesCache, &t2026_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10718_MI = 
{
	".ctor", (methodPointerType)&m10718, &t2028_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2028_m10718_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 4812, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2028_m10719_ParameterInfos[] = 
{
	{"skip", 0, 134223501, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t121_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10719_MI = 
{
	"_GetSecurityStack", (methodPointerType)&m10719, &t2028_TI, &t121_0_0_0, RuntimeInvoker_t9_t125, t2028_m10719_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 4813, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2026_0_0_0;
static ParameterInfo t2028_m10720_ParameterInfos[] = 
{
	{"frame", 0, 134223502, &EmptyCustomAttributesCache, &t2026_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10720_MI = 
{
	"InitFromRuntimeFrame", (methodPointerType)&m10720, &t2028_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2028_m10720_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4814, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1336_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10721_MI = 
{
	"get_Assembly", (methodPointerType)&m10721, &t2028_TI, &t1336_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4815, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2027_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10722_MI = 
{
	"get_Domain", (methodPointerType)&m10722, &t2028_TI, &t2027_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4816, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10723_MI = 
{
	"ToString", (methodPointerType)&m10723, &t2028_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4817, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2028_m10724_ParameterInfos[] = 
{
	{"skipFrames", 0, 134223503, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t1161_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10724_MI = 
{
	"GetStack", (methodPointerType)&m10724, &t2028_TI, &t1161_0_0_0, RuntimeInvoker_t9_t125, t2028_m10724_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4818, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2028_MIs[] =
{
	&m10718_MI,
	&m10719_MI,
	&m10720_MI,
	&m10721_MI,
	&m10722_MI,
	&m10723_MI,
	&m10724_MI,
	NULL
};
extern Il2CppType t2027_0_0_1;
FieldInfo t2028_f0_FieldInfo = 
{
	"_domain", &t2027_0_0_1, &t2028_TI, offsetof(t2028, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t821_0_0_1;
FieldInfo t2028_f1_FieldInfo = 
{
	"_method", &t821_0_0_1, &t2028_TI, offsetof(t2028, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1792_0_0_1;
FieldInfo t2028_f2_FieldInfo = 
{
	"_assert", &t1792_0_0_1, &t2028_TI, offsetof(t2028, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1792_0_0_1;
FieldInfo t2028_f3_FieldInfo = 
{
	"_deny", &t1792_0_0_1, &t2028_TI, offsetof(t2028, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1792_0_0_1;
FieldInfo t2028_f4_FieldInfo = 
{
	"_permitonly", &t1792_0_0_1, &t2028_TI, offsetof(t2028, f4) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t2028_FIs[] =
{
	&t2028_f0_FieldInfo,
	&t2028_f1_FieldInfo,
	&t2028_f2_FieldInfo,
	&t2028_f3_FieldInfo,
	&t2028_f4_FieldInfo,
	NULL
};
extern MethodInfo m10721_MI;
static PropertyInfo t2028____Assembly_PropertyInfo = 
{
	&t2028_TI, "Assembly", &m10721_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10722_MI;
static PropertyInfo t2028____Domain_PropertyInfo = 
{
	&t2028_TI, "Domain", &m10722_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2028_PIs[] =
{
	&t2028____Assembly_PropertyInfo,
	&t2028____Domain_PropertyInfo,
	NULL
};
extern MethodInfo m10723_MI;
static Il2CppMethodReference t2028_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m10723_MI,
};
static bool t2028_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2028_0_0_0;
extern Il2CppType t2028_1_0_0;
const Il2CppTypeDefinitionMetadata t2028_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t2028_VT, t2028_VTIGM, NULL};
TypeInfo t2028_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityFrame", "System.Security", t2028_MIs, t2028_PIs, t2028_FIs, NULL, &t2028_TI, NULL, &EmptyCustomAttributesCache, &t2028_0_0_0, &t2028_1_0_0, &t2028_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2028)+ sizeof (Il2CppObject), sizeof (t2028)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048840, 0, 0, true, false, false, false, false, false, false, false, false, false, 7, 2, 5, 0, 0, 4, 0, 0};
#include "t2029.h"
// Metadata Definition System.Security.SecurityManager
extern TypeInfo t2029_TI;
#include "t2029MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10725_MI = 
{
	".cctor", (methodPointerType)&m10725, &t2029_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4819, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10726_MI = 
{
	"get_SecurityEnabled", (methodPointerType)&m10726, &t2029_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 4820, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2029_m10727_ParameterInfos[] = 
{
	{"permissions", 0, 134223504, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"length", 1, 134223505, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t1792_0_0_0;
extern void* RuntimeInvoker_t9_t58_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10727_MI = 
{
	"Decode", (methodPointerType)&m10727, &t2029_TI, &t1792_0_0_0, RuntimeInvoker_t9_t58_t125, t2029_m10727_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4821, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t2029_m10728_ParameterInfos[] = 
{
	{"encodedPermissions", 0, 134223506, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t1792_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10728_MI = 
{
	"Decode", (methodPointerType)&m10728, &t2029_TI, &t1792_0_0_0, RuntimeInvoker_t9_t9, t2029_m10728_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 4822, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2029_MIs[] =
{
	&m10725_MI,
	&m10726_MI,
	&m10727_MI,
	&m10728_MI,
	NULL
};
extern Il2CppType t9_0_0_17;
FieldInfo t2029_f0_FieldInfo = 
{
	"_lockObject", &t9_0_0_17, &t2029_TI, offsetof(t2029_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_17;
FieldInfo t2029_f1_FieldInfo = 
{
	"_declsecCache", &t1149_0_0_17, &t2029_TI, offsetof(t2029_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2008_0_0_17;
FieldInfo t2029_f2_FieldInfo = 
{
	"_execution", &t2008_0_0_17, &t2029_TI, offsetof(t2029_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2029_FIs[] =
{
	&t2029_f0_FieldInfo,
	&t2029_f1_FieldInfo,
	&t2029_f2_FieldInfo,
	NULL
};
extern MethodInfo m10726_MI;
extern CustomAttributesCache t2029__CustomAttributeCache_t2029____SecurityEnabled_PropertyInfo;
static PropertyInfo t2029____SecurityEnabled_PropertyInfo = 
{
	&t2029_TI, "SecurityEnabled", &m10726_MI, NULL, 0, &t2029__CustomAttributeCache_t2029____SecurityEnabled_PropertyInfo};
static PropertyInfo* t2029_PIs[] =
{
	&t2029____SecurityEnabled_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2029_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2029_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t2029_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t2029_CustomAttributesCacheGenerator_t2029____SecurityEnabled_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t611 * tmp;
		tmp = (t611 *)il2cpp_codegen_object_new (&t611_TI);
		m2970(tmp, il2cpp_codegen_string_new_wrapper("The security manager cannot be turned off on MS runtime"), &m2970_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2029__CustomAttributeCache = {
1,
NULL,
&t2029_CustomAttributesCacheGenerator
};
CustomAttributesCache t2029__CustomAttributeCache_t2029____SecurityEnabled_PropertyInfo = {
1,
NULL,
&t2029_CustomAttributesCacheGenerator_t2029____SecurityEnabled_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2029_0_0_0;
extern Il2CppType t2029_1_0_0;
struct t2029;
extern CustomAttributesCache t2029__CustomAttributeCache;
extern CustomAttributesCache t2029__CustomAttributeCache_t2029____SecurityEnabled_PropertyInfo;
const Il2CppTypeDefinitionMetadata t2029_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2029_VT, t2029_VTIGM, NULL};
TypeInfo t2029_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityManager", "System.Security", t2029_MIs, t2029_PIs, t2029_FIs, NULL, &t2029_TI, NULL, &t2029__CustomAttributeCache, &t2029_0_0_0, &t2029_1_0_0, &t2029_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2029), sizeof (t2029), 0, -1, sizeof(t2029_SFs), 0, -1, 385, 0, 0, false, false, false, false, false, false, false, false, true, false, 4, 1, 3, 0, 0, 4, 0, 0};
#include "t966.h"
// Metadata Definition System.Security.SecuritySafeCriticalAttribute
extern TypeInfo t966_TI;
#include "t966MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m4492_MI = 
{
	".ctor", (methodPointerType)&m4492, &t966_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4823, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t966_MIs[] =
{
	&m4492_MI,
	NULL
};
static Il2CppMethodReference t966_VT[] =
{
	&m4475_MI,
	&m646_MI,
	&m4469_MI,
	&m673_MI,
};
static bool t966_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t966_IOs[] = 
{
	{ &t947_0_0_0, 4},
};
void t966_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1017 * tmp;
		tmp = (t1017 *)il2cpp_codegen_object_new (&t1017_TI);
		m4581(tmp, 32767, &m4581_MI);
		m4583(tmp, false, &m4583_MI);
		m4582(tmp, false, &m4582_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7821(tmp, il2cpp_codegen_string_new_wrapper("Only supported by the runtime when CoreCLR is enabled"), &m7821_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t966__CustomAttributeCache = {
2,
NULL,
&t966_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t966_0_0_0;
extern Il2CppType t966_1_0_0;
struct t966;
extern CustomAttributesCache t966__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t966_DM = 
{
	NULL, NULL, NULL, t966_IOs, &t718_0_0_0, t966_VT, t966_VTIGM, NULL};
TypeInfo t966_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecuritySafeCriticalAttribute", "System.Security", t966_MIs, NULL, NULL, NULL, &t966_TI, NULL, &t966__CustomAttributeCache, &t966_0_0_0, &t966_1_0_0, &t966_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t966), sizeof (t966), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t2030.h"
// Metadata Definition System.Security.SuppressUnmanagedCodeSecurityAttribute
extern TypeInfo t2030_TI;
#include "t2030MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10729_MI = 
{
	".ctor", (methodPointerType)&m10729, &t2030_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4824, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2030_MIs[] =
{
	&m10729_MI,
	NULL
};
static Il2CppMethodReference t2030_VT[] =
{
	&m4475_MI,
	&m646_MI,
	&m4469_MI,
	&m673_MI,
};
static bool t2030_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2030_IOs[] = 
{
	{ &t947_0_0_0, 4},
};
void t2030_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1017 * tmp;
		tmp = (t1017 *)il2cpp_codegen_object_new (&t1017_TI);
		m4581(tmp, 5188, &m4581_MI);
		m4583(tmp, true, &m4583_MI);
		m4582(tmp, false, &m4582_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2030__CustomAttributeCache = {
2,
NULL,
&t2030_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2030_0_0_0;
extern Il2CppType t2030_1_0_0;
struct t2030;
extern CustomAttributesCache t2030__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2030_DM = 
{
	NULL, NULL, NULL, t2030_IOs, &t718_0_0_0, t2030_VT, t2030_VTIGM, NULL};
TypeInfo t2030_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SuppressUnmanagedCodeSecurityAttribute", "System.Security", t2030_MIs, NULL, NULL, NULL, &t2030_TI, NULL, &t2030__CustomAttributeCache, &t2030_0_0_0, &t2030_1_0_0, &t2030_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2030), sizeof (t2030), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t2031.h"
// Metadata Definition System.Security.UnverifiableCodeAttribute
extern TypeInfo t2031_TI;
#include "t2031MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10730_MI = 
{
	".ctor", (methodPointerType)&m10730, &t2031_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4825, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2031_MIs[] =
{
	&m10730_MI,
	NULL
};
static Il2CppMethodReference t2031_VT[] =
{
	&m4475_MI,
	&m646_MI,
	&m4469_MI,
	&m673_MI,
};
static bool t2031_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2031_IOs[] = 
{
	{ &t947_0_0_0, 4},
};
void t2031_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1017 * tmp;
		tmp = (t1017 *)il2cpp_codegen_object_new (&t1017_TI);
		m4581(tmp, 2, &m4581_MI);
		m4583(tmp, true, &m4583_MI);
		m4582(tmp, false, &m4582_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2031__CustomAttributeCache = {
2,
NULL,
&t2031_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2031_0_0_0;
extern Il2CppType t2031_1_0_0;
struct t2031;
extern CustomAttributesCache t2031__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2031_DM = 
{
	NULL, NULL, NULL, t2031_IOs, &t718_0_0_0, t2031_VT, t2031_VTIGM, NULL};
TypeInfo t2031_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UnverifiableCodeAttribute", "System.Security", t2031_MIs, NULL, NULL, NULL, &t2031_TI, NULL, &t2031__CustomAttributeCache, &t2031_0_0_0, &t2031_1_0_0, &t2031_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2031), sizeof (t2031), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t2032.h"
// Metadata Definition System.Text.ASCIIEncoding
extern TypeInfo t2032_TI;
#include "t2032MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10731_MI = 
{
	".ctor", (methodPointerType)&m10731, &t2032_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4826, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2032_m10732_ParameterInfos[] = 
{
	{"chars", 0, 134223507, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"index", 1, 134223508, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223509, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10732_MI = 
{
	"GetByteCount", (methodPointerType)&m10732, &t2032_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t2032_m10732_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 3, false, false, 4827, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2032_m10733_ParameterInfos[] = 
{
	{"chars", 0, 134223510, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10733_MI = 
{
	"GetByteCount", (methodPointerType)&m10733, &t2032_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t2032_m10733_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4828, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2032_m10734_ParameterInfos[] = 
{
	{"chars", 0, 134223511, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"charIndex", 1, 134223512, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223513, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223514, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 4, 134223515, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10734_MI = 
{
	"GetBytes", (methodPointerType)&m10734, &t2032_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2032_m10734_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 5, false, false, 4829, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2033_1_0_0;
extern Il2CppType t2033_1_0_0;
extern Il2CppType t305_1_0_0;
extern Il2CppType t305_1_0_0;
static ParameterInfo t2032_m10735_ParameterInfos[] = 
{
	{"chars", 0, 134223516, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"charIndex", 1, 134223517, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223518, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223519, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 4, 134223520, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"buffer", 5, 134223521, &EmptyCustomAttributesCache, &t2033_1_0_0},
	{"fallback_chars", 6, 134223522, &EmptyCustomAttributesCache, &t305_1_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2634_t2635 (MethodInfo* method, void* obj, void** args);
MethodInfo m10735_MI = 
{
	"GetBytes", (methodPointerType)&m10735, &t2032_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2634_t2635, t2032_m10735_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4830, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2032_m10736_ParameterInfos[] = 
{
	{"chars", 0, 134223523, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"charIndex", 1, 134223524, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223525, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223526, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 4, 134223527, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10736_MI = 
{
	"GetBytes", (methodPointerType)&m10736, &t2032_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2032_m10736_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 5, false, false, 4831, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2033_1_0_0;
extern Il2CppType t305_1_0_0;
static ParameterInfo t2032_m10737_ParameterInfos[] = 
{
	{"chars", 0, 134223528, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"charIndex", 1, 134223529, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223530, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223531, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 4, 134223532, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"buffer", 5, 134223533, &EmptyCustomAttributesCache, &t2033_1_0_0},
	{"fallback_chars", 6, 134223534, &EmptyCustomAttributesCache, &t305_1_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2634_t2635 (MethodInfo* method, void* obj, void** args);
MethodInfo m10737_MI = 
{
	"GetBytes", (methodPointerType)&m10737, &t2032_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2634_t2635, t2032_m10737_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4832, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2032_m10738_ParameterInfos[] = 
{
	{"bytes", 0, 134223535, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"index", 1, 134223536, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223537, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10738_MI = 
{
	"GetCharCount", (methodPointerType)&m10738, &t2032_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t2032_m10738_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 3, false, false, 4833, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2032_m10739_ParameterInfos[] = 
{
	{"bytes", 0, 134223538, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 1, 134223539, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223540, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223541, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"charIndex", 4, 134223542, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10739_MI = 
{
	"GetChars", (methodPointerType)&m10739, &t2032_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2032_m10739_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 5, false, false, 4834, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2034_1_0_0;
extern Il2CppType t2034_1_0_0;
static ParameterInfo t2032_m10740_ParameterInfos[] = 
{
	{"bytes", 0, 134223543, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 1, 134223544, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223545, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223546, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"charIndex", 4, 134223547, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"buffer", 5, 134223548, &EmptyCustomAttributesCache, &t2034_1_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2636 (MethodInfo* method, void* obj, void** args);
MethodInfo m10740_MI = 
{
	"GetChars", (methodPointerType)&m10740, &t2032_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2636, t2032_m10740_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 4835, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2032_m10741_ParameterInfos[] = 
{
	{"charCount", 0, 134223549, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10741_MI = 
{
	"GetMaxByteCount", (methodPointerType)&m10741, &t2032_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t2032_m10741_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 1, false, false, 4836, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2032_m10742_ParameterInfos[] = 
{
	{"byteCount", 0, 134223550, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10742_MI = 
{
	"GetMaxCharCount", (methodPointerType)&m10742, &t2032_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t2032_m10742_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 4837, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2032_m10743_ParameterInfos[] = 
{
	{"bytes", 0, 134223551, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 1, 134223552, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223553, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10743_MI = 
{
	"GetString", (methodPointerType)&m10743, &t2032_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t2032_m10743_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 19, 3, false, false, 4838, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2229_0_0_0;
extern Il2CppType t2229_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1544_0_0_0;
extern Il2CppType t1544_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2032_m10744_ParameterInfos[] = 
{
	{"chars", 0, 134223554, &EmptyCustomAttributesCache, &t2229_0_0_0},
	{"charCount", 1, 134223555, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 2, 134223556, &EmptyCustomAttributesCache, &t1544_0_0_0},
	{"byteCount", 3, 134223557, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2032__CustomAttributeCache_m10744;
MethodInfo m10744_MI = 
{
	"GetBytes", (methodPointerType)&m10744, &t2032_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t9_t125, t2032_m10744_ParameterInfos, &t2032__CustomAttributeCache_m10744, 198, 0, 24, 4, false, false, 4839, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2229_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2032_m10745_ParameterInfos[] = 
{
	{"chars", 0, 134223558, &EmptyCustomAttributesCache, &t2229_0_0_0},
	{"count", 1, 134223559, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2032__CustomAttributeCache_m10745;
MethodInfo m10745_MI = 
{
	"GetByteCount", (methodPointerType)&m10745, &t2032_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125, t2032_m10745_ParameterInfos, &t2032__CustomAttributeCache_m10745, 198, 0, 23, 2, false, false, 4840, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1704_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2032__CustomAttributeCache_m10746;
MethodInfo m10746_MI = 
{
	"GetDecoder", (methodPointerType)&m10746, &t2032_TI, &t1704_0_0_0, RuntimeInvoker_t9, NULL, &t2032__CustomAttributeCache_m10746, 198, 0, 15, 0, false, false, 4841, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2032_MIs[] =
{
	&m10731_MI,
	&m10732_MI,
	&m10733_MI,
	&m10734_MI,
	&m10735_MI,
	&m10736_MI,
	&m10737_MI,
	&m10738_MI,
	&m10739_MI,
	&m10740_MI,
	&m10741_MI,
	&m10742_MI,
	&m10743_MI,
	&m10744_MI,
	&m10745_MI,
	&m10746_MI,
	NULL
};
extern MethodInfo m10821_MI;
extern MethodInfo m10829_MI;
extern MethodInfo m10732_MI;
extern MethodInfo m10733_MI;
extern MethodInfo m10823_MI;
extern MethodInfo m10734_MI;
extern MethodInfo m10736_MI;
extern MethodInfo m4264_MI;
extern MethodInfo m10824_MI;
extern MethodInfo m5957_MI;
extern MethodInfo m10738_MI;
extern MethodInfo m10739_MI;
extern MethodInfo m10825_MI;
extern MethodInfo m10746_MI;
extern MethodInfo m10741_MI;
extern MethodInfo m10742_MI;
extern MethodInfo m10830_MI;
extern MethodInfo m10743_MI;
extern MethodInfo m5800_MI;
extern MethodInfo m4268_MI;
extern MethodInfo m4275_MI;
extern MethodInfo m10745_MI;
extern MethodInfo m10744_MI;
static Il2CppMethodReference t2032_VT[] =
{
	&m10821_MI,
	&m646_MI,
	&m10829_MI,
	&m673_MI,
	&m10732_MI,
	&m10733_MI,
	&m10823_MI,
	&m10734_MI,
	&m10736_MI,
	&m4264_MI,
	&m10824_MI,
	&m5957_MI,
	&m10738_MI,
	&m10739_MI,
	&m10825_MI,
	&m10746_MI,
	&m10741_MI,
	&m10742_MI,
	&m10830_MI,
	&m10743_MI,
	&m5800_MI,
	&m4268_MI,
	&m4275_MI,
	&m10745_MI,
	&m10744_MI,
};
static bool t2032_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t615_0_0_0;
static Il2CppInterfaceOffsetPair t2032_IOs[] = 
{
	{ &t615_0_0_0, 4},
};
void t2032_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7821(tmp, il2cpp_codegen_string_new_wrapper("Serialization format not compatible with .NET"), &m7821_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1143_TI;
#include "t1143.h"
#include "t1143MD.h"
extern MethodInfo m4773_MI;
void t2032_CustomAttributesCacheGenerator_m10744(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1143 * tmp;
		tmp = (t1143 *)il2cpp_codegen_object_new (&t1143_TI);
		m4773(tmp, false, &m4773_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t2032_CustomAttributesCacheGenerator_m10745(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1143 * tmp;
		tmp = (t1143 *)il2cpp_codegen_object_new (&t1143_TI);
		m4773(tmp, false, &m4773_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t2032_CustomAttributesCacheGenerator_m10746(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7821(tmp, il2cpp_codegen_string_new_wrapper("we have simple override to match method signature."), &m7821_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2032__CustomAttributeCache = {
2,
NULL,
&t2032_CustomAttributesCacheGenerator
};
CustomAttributesCache t2032__CustomAttributeCache_m10744 = {
2,
NULL,
&t2032_CustomAttributesCacheGenerator_m10744
};
CustomAttributesCache t2032__CustomAttributeCache_m10745 = {
2,
NULL,
&t2032_CustomAttributesCacheGenerator_m10745
};
CustomAttributesCache t2032__CustomAttributeCache_m10746 = {
2,
NULL,
&t2032_CustomAttributesCacheGenerator_m10746
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2032_0_0_0;
extern Il2CppType t2032_1_0_0;
extern Il2CppType t722_0_0_0;
struct t2032;
extern CustomAttributesCache t2032__CustomAttributeCache;
extern CustomAttributesCache t2032__CustomAttributeCache_m10744;
extern CustomAttributesCache t2032__CustomAttributeCache_m10745;
extern CustomAttributesCache t2032__CustomAttributeCache_m10746;
const Il2CppTypeDefinitionMetadata t2032_DM = 
{
	NULL, NULL, NULL, t2032_IOs, &t722_0_0_0, t2032_VT, t2032_VTIGM, NULL};
TypeInfo t2032_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ASCIIEncoding", "System.Text", t2032_MIs, NULL, NULL, NULL, &t2032_TI, NULL, &t2032__CustomAttributeCache, &t2032_0_0_0, &t2032_1_0_0, &t2032_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2032), sizeof (t2032), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 16, 0, 0, 0, 0, 25, 0, 1};
#include "t1704.h"
// Metadata Definition System.Text.Decoder
extern TypeInfo t1704_TI;
#include "t1704MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10747_MI = 
{
	".ctor", (methodPointerType)&m10747, &t1704_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4842, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2035_0_0_0;
extern Il2CppType t2035_0_0_0;
static ParameterInfo t1704_m10748_ParameterInfos[] = 
{
	{"value", 0, 134223560, &EmptyCustomAttributesCache, &t2035_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10748_MI = 
{
	"set_Fallback", (methodPointerType)&m10748, &t1704_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1704_m10748_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4843, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2034_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10749_MI = 
{
	"get_FallbackBuffer", (methodPointerType)&m10749, &t1704_TI, &t2034_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4844, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1704_m11978_ParameterInfos[] = 
{
	{"bytes", 0, 134223561, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 1, 134223562, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223563, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223564, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"charIndex", 4, 134223565, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m11978_MI = 
{
	"GetChars", NULL, &t1704_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t1704_m11978_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 5, false, false, 4845, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1704_MIs[] =
{
	&m10747_MI,
	&m10748_MI,
	&m10749_MI,
	&m11978_MI,
	NULL
};
extern Il2CppType t2035_0_0_1;
FieldInfo t1704_f0_FieldInfo = 
{
	"fallback", &t2035_0_0_1, &t1704_TI, offsetof(t1704, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2034_0_0_1;
FieldInfo t1704_f1_FieldInfo = 
{
	"fallback_buffer", &t2034_0_0_1, &t1704_TI, offsetof(t1704, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1704_FIs[] =
{
	&t1704_f0_FieldInfo,
	&t1704_f1_FieldInfo,
	NULL
};
extern MethodInfo m10748_MI;
extern CustomAttributesCache t1704__CustomAttributeCache_t1704____Fallback_PropertyInfo;
static PropertyInfo t1704____Fallback_PropertyInfo = 
{
	&t1704_TI, "Fallback", NULL, &m10748_MI, 0, &t1704__CustomAttributeCache_t1704____Fallback_PropertyInfo};
extern MethodInfo m10749_MI;
extern CustomAttributesCache t1704__CustomAttributeCache_t1704____FallbackBuffer_PropertyInfo;
static PropertyInfo t1704____FallbackBuffer_PropertyInfo = 
{
	&t1704_TI, "FallbackBuffer", &m10749_MI, NULL, 0, &t1704__CustomAttributeCache_t1704____FallbackBuffer_PropertyInfo};
static PropertyInfo* t1704_PIs[] =
{
	&t1704____Fallback_PropertyInfo,
	&t1704____FallbackBuffer_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1704_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t1704_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
void t1704_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1704_CustomAttributesCacheGenerator_t1704____Fallback_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1704_CustomAttributesCacheGenerator_t1704____FallbackBuffer_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1704__CustomAttributeCache = {
1,
NULL,
&t1704_CustomAttributesCacheGenerator
};
CustomAttributesCache t1704__CustomAttributeCache_t1704____Fallback_PropertyInfo = {
1,
NULL,
&t1704_CustomAttributesCacheGenerator_t1704____Fallback_PropertyInfo
};
CustomAttributesCache t1704__CustomAttributeCache_t1704____FallbackBuffer_PropertyInfo = {
1,
NULL,
&t1704_CustomAttributesCacheGenerator_t1704____FallbackBuffer_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1704_0_0_0;
extern Il2CppType t1704_1_0_0;
struct t1704;
extern CustomAttributesCache t1704__CustomAttributeCache;
extern CustomAttributesCache t1704__CustomAttributeCache_t1704____Fallback_PropertyInfo;
extern CustomAttributesCache t1704__CustomAttributeCache_t1704____FallbackBuffer_PropertyInfo;
const Il2CppTypeDefinitionMetadata t1704_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1704_VT, t1704_VTIGM, NULL};
TypeInfo t1704_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Decoder", "System.Text", t1704_MIs, t1704_PIs, t1704_FIs, NULL, &t1704_TI, NULL, &t1704__CustomAttributeCache, &t1704_0_0_0, &t1704_1_0_0, &t1704_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1704), sizeof (t1704), 0, -1, 0, 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 2, 2, 0, 0, 5, 0, 0};
#include "t2036.h"
// Metadata Definition System.Text.DecoderExceptionFallback
extern TypeInfo t2036_TI;
#include "t2036MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10750_MI = 
{
	".ctor", (methodPointerType)&m10750, &t2036_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4846, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2034_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10751_MI = 
{
	"CreateFallbackBuffer", (methodPointerType)&m10751, &t2036_TI, &t2034_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 4, 0, false, false, 4847, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2036_m10752_ParameterInfos[] = 
{
	{"value", 0, 134223566, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10752_MI = 
{
	"Equals", (methodPointerType)&m10752, &t2036_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2036_m10752_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4848, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10753_MI = 
{
	"GetHashCode", (methodPointerType)&m10753, &t2036_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4849, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2036_MIs[] =
{
	&m10750_MI,
	&m10751_MI,
	&m10752_MI,
	&m10753_MI,
	NULL
};
extern MethodInfo m10752_MI;
extern MethodInfo m10753_MI;
extern MethodInfo m10751_MI;
static Il2CppMethodReference t2036_VT[] =
{
	&m10752_MI,
	&m646_MI,
	&m10753_MI,
	&m673_MI,
	&m10751_MI,
};
static bool t2036_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2036_0_0_0;
extern Il2CppType t2036_1_0_0;
struct t2036;
const Il2CppTypeDefinitionMetadata t2036_DM = 
{
	NULL, NULL, NULL, NULL, &t2035_0_0_0, t2036_VT, t2036_VTIGM, NULL};
TypeInfo t2036_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderExceptionFallback", "System.Text", t2036_MIs, NULL, NULL, NULL, &t2036_TI, NULL, &EmptyCustomAttributesCache, &t2036_0_0_0, &t2036_1_0_0, &t2036_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2036), sizeof (t2036), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 5, 0, 0};
#include "t2037.h"
// Metadata Definition System.Text.DecoderExceptionFallbackBuffer
extern TypeInfo t2037_TI;
#include "t2037MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10754_MI = 
{
	".ctor", (methodPointerType)&m10754, &t2037_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4850, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10755_MI = 
{
	"get_Remaining", (methodPointerType)&m10755, &t2037_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 4851, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2037_m10756_ParameterInfos[] = 
{
	{"bytesUnknown", 0, 134223567, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"index", 1, 134223568, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10756_MI = 
{
	"Fallback", (methodPointerType)&m10756, &t2037_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t125, t2037_m10756_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 4852, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern void* RuntimeInvoker_t296 (MethodInfo* method, void* obj, void** args);
MethodInfo m10757_MI = 
{
	"GetNextChar", (methodPointerType)&m10757, &t2037_TI, &t296_0_0_0, RuntimeInvoker_t296, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 4853, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2037_MIs[] =
{
	&m10754_MI,
	&m10755_MI,
	&m10756_MI,
	&m10757_MI,
	NULL
};
extern MethodInfo m10755_MI;
static PropertyInfo t2037____Remaining_PropertyInfo = 
{
	&t2037_TI, "Remaining", &m10755_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2037_PIs[] =
{
	&t2037____Remaining_PropertyInfo,
	NULL
};
extern MethodInfo m10756_MI;
extern MethodInfo m10757_MI;
extern MethodInfo m10764_MI;
static Il2CppMethodReference t2037_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10755_MI,
	&m10756_MI,
	&m10757_MI,
	&m10764_MI,
};
static bool t2037_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2037_0_0_0;
extern Il2CppType t2037_1_0_0;
extern Il2CppType t2034_0_0_0;
struct t2037;
const Il2CppTypeDefinitionMetadata t2037_DM = 
{
	NULL, NULL, NULL, NULL, &t2034_0_0_0, t2037_VT, t2037_VTIGM, NULL};
TypeInfo t2037_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderExceptionFallbackBuffer", "System.Text", t2037_MIs, t2037_PIs, NULL, NULL, &t2037_TI, NULL, &EmptyCustomAttributesCache, &t2037_0_0_0, &t2037_1_0_0, &t2037_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2037), sizeof (t2037), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 1, 0, 0, 0, 8, 0, 0};
#include "t2035.h"
// Metadata Definition System.Text.DecoderFallback
extern TypeInfo t2035_TI;
#include "t2035MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10758_MI = 
{
	".ctor", (methodPointerType)&m10758, &t2035_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4854, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10759_MI = 
{
	".cctor", (methodPointerType)&m10759, &t2035_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4855, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2035_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10760_MI = 
{
	"get_ExceptionFallback", (methodPointerType)&m10760, &t2035_TI, &t2035_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4856, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2035_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10761_MI = 
{
	"get_ReplacementFallback", (methodPointerType)&m10761, &t2035_TI, &t2035_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4857, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2035_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10762_MI = 
{
	"get_StandardSafeFallback", (methodPointerType)&m10762, &t2035_TI, &t2035_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 4858, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2034_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12085_MI = 
{
	"CreateFallbackBuffer", NULL, &t2035_TI, &t2034_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 1478, 0, 4, 0, false, false, 4859, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2035_MIs[] =
{
	&m10758_MI,
	&m10759_MI,
	&m10760_MI,
	&m10761_MI,
	&m10762_MI,
	&m12085_MI,
	NULL
};
extern Il2CppType t2035_0_0_17;
FieldInfo t2035_f0_FieldInfo = 
{
	"exception_fallback", &t2035_0_0_17, &t2035_TI, offsetof(t2035_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2035_0_0_17;
FieldInfo t2035_f1_FieldInfo = 
{
	"replacement_fallback", &t2035_0_0_17, &t2035_TI, offsetof(t2035_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2035_0_0_17;
FieldInfo t2035_f2_FieldInfo = 
{
	"standard_safe_fallback", &t2035_0_0_17, &t2035_TI, offsetof(t2035_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2035_FIs[] =
{
	&t2035_f0_FieldInfo,
	&t2035_f1_FieldInfo,
	&t2035_f2_FieldInfo,
	NULL
};
extern MethodInfo m10760_MI;
static PropertyInfo t2035____ExceptionFallback_PropertyInfo = 
{
	&t2035_TI, "ExceptionFallback", &m10760_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10761_MI;
static PropertyInfo t2035____ReplacementFallback_PropertyInfo = 
{
	&t2035_TI, "ReplacementFallback", &m10761_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10762_MI;
static PropertyInfo t2035____StandardSafeFallback_PropertyInfo = 
{
	&t2035_TI, "StandardSafeFallback", &m10762_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2035_PIs[] =
{
	&t2035____ExceptionFallback_PropertyInfo,
	&t2035____ReplacementFallback_PropertyInfo,
	&t2035____StandardSafeFallback_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2035_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t2035_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2035_1_0_0;
struct t2035;
const Il2CppTypeDefinitionMetadata t2035_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2035_VT, t2035_VTIGM, NULL};
TypeInfo t2035_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderFallback", "System.Text", t2035_MIs, t2035_PIs, t2035_FIs, NULL, &t2035_TI, NULL, &EmptyCustomAttributesCache, &t2035_0_0_0, &t2035_1_0_0, &t2035_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2035), sizeof (t2035), 0, -1, sizeof(t2035_SFs), 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, true, false, 6, 3, 3, 0, 0, 5, 0, 0};
#include "t2034.h"
// Metadata Definition System.Text.DecoderFallbackBuffer
extern TypeInfo t2034_TI;
#include "t2034MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10763_MI = 
{
	".ctor", (methodPointerType)&m10763, &t2034_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4860, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12088_MI = 
{
	"get_Remaining", NULL, &t2034_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 4, 0, false, false, 4861, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2034_m12086_ParameterInfos[] = 
{
	{"bytesUnknown", 0, 134223569, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"index", 1, 134223570, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12086_MI = 
{
	"Fallback", NULL, &t2034_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t125, t2034_m12086_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, false, 4862, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern void* RuntimeInvoker_t296 (MethodInfo* method, void* obj, void** args);
MethodInfo m12087_MI = 
{
	"GetNextChar", NULL, &t2034_TI, &t296_0_0_0, RuntimeInvoker_t296, NULL, &EmptyCustomAttributesCache, 1478, 0, 6, 0, false, false, 4863, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10764_MI = 
{
	"Reset", (methodPointerType)&m10764, &t2034_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 4864, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2034_MIs[] =
{
	&m10763_MI,
	&m12088_MI,
	&m12086_MI,
	&m12087_MI,
	&m10764_MI,
	NULL
};
extern MethodInfo m12088_MI;
static PropertyInfo t2034____Remaining_PropertyInfo = 
{
	&t2034_TI, "Remaining", &m12088_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2034_PIs[] =
{
	&t2034____Remaining_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2034_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
	&m10764_MI,
};
static bool t2034_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
struct t2034;
const Il2CppTypeDefinitionMetadata t2034_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2034_VT, t2034_VTIGM, NULL};
TypeInfo t2034_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderFallbackBuffer", "System.Text", t2034_MIs, t2034_PIs, NULL, NULL, &t2034_TI, NULL, &EmptyCustomAttributesCache, &t2034_0_0_0, &t2034_1_0_0, &t2034_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2034), sizeof (t2034), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 8, 0, 0};
#include "t2038.h"
// Metadata Definition System.Text.DecoderFallbackException
extern TypeInfo t2038_TI;
#include "t2038MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10765_MI = 
{
	".ctor", (methodPointerType)&m10765, &t2038_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4865, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2038_m10766_ParameterInfos[] = 
{
	{"message", 0, 134223571, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10766_MI = 
{
	".ctor", (methodPointerType)&m10766, &t2038_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2038_m10766_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4866, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2038_m10767_ParameterInfos[] = 
{
	{"message", 0, 134223572, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bytesUnknown", 1, 134223573, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"index", 2, 134223574, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10767_MI = 
{
	".ctor", (methodPointerType)&m10767, &t2038_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t2038_m10767_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4867, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2038_MIs[] =
{
	&m10765_MI,
	&m10766_MI,
	&m10767_MI,
	NULL
};
extern Il2CppType t723_0_0_1;
FieldInfo t2038_f13_FieldInfo = 
{
	"bytes_unknown", &t723_0_0_1, &t2038_TI, offsetof(t2038, f13), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2038_f14_FieldInfo = 
{
	"index", &t125_0_0_1, &t2038_TI, offsetof(t2038, f14), &EmptyCustomAttributesCache};
static FieldInfo* t2038_FIs[] =
{
	&t2038_f13_FieldInfo,
	&t2038_f14_FieldInfo,
	NULL
};
extern MethodInfo m4472_MI;
extern MethodInfo m11114_MI;
extern MethodInfo m11113_MI;
extern MethodInfo m11112_MI;
static Il2CppMethodReference t2038_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4472_MI,
	&m11114_MI,
	&m4219_MI,
	&m11113_MI,
	&m4474_MI,
	&m4417_MI,
	&m11114_MI,
	&m4418_MI,
	&m11112_MI,
};
static bool t2038_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2038_IOs[] = 
{
	{ &t616_0_0_0, 4},
	{ &t941_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2038_0_0_0;
extern Il2CppType t2038_1_0_0;
extern Il2CppType t556_0_0_0;
struct t2038;
const Il2CppTypeDefinitionMetadata t2038_DM = 
{
	NULL, NULL, NULL, t2038_IOs, &t556_0_0_0, t2038_VT, t2038_VTIGM, NULL};
TypeInfo t2038_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderFallbackException", "System.Text", t2038_MIs, NULL, t2038_FIs, NULL, &t2038_TI, NULL, &EmptyCustomAttributesCache, &t2038_0_0_0, &t2038_1_0_0, &t2038_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2038), sizeof (t2038), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 2, 0, 0, 12, 0, 2};
#include "t2039.h"
// Metadata Definition System.Text.DecoderReplacementFallback
extern TypeInfo t2039_TI;
#include "t2039MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10768_MI = 
{
	".ctor", (methodPointerType)&m10768, &t2039_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4868, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2039_m10769_ParameterInfos[] = 
{
	{"replacement", 0, 134223575, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2039__CustomAttributeCache_m10769;
MethodInfo m10769_MI = 
{
	".ctor", (methodPointerType)&m10769, &t2039_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2039_m10769_ParameterInfos, &t2039__CustomAttributeCache_m10769, 6278, 0, 255, 1, false, false, 4869, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10770_MI = 
{
	"get_DefaultString", (methodPointerType)&m10770, &t2039_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4870, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2034_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10771_MI = 
{
	"CreateFallbackBuffer", (methodPointerType)&m10771, &t2039_TI, &t2034_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 4, 0, false, false, 4871, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2039_m10772_ParameterInfos[] = 
{
	{"value", 0, 134223576, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10772_MI = 
{
	"Equals", (methodPointerType)&m10772, &t2039_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2039_m10772_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4872, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10773_MI = 
{
	"GetHashCode", (methodPointerType)&m10773, &t2039_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4873, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2039_MIs[] =
{
	&m10768_MI,
	&m10769_MI,
	&m10770_MI,
	&m10771_MI,
	&m10772_MI,
	&m10773_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2039_f3_FieldInfo = 
{
	"replacement", &t2_0_0_1, &t2039_TI, offsetof(t2039, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2039_FIs[] =
{
	&t2039_f3_FieldInfo,
	NULL
};
extern MethodInfo m10770_MI;
static PropertyInfo t2039____DefaultString_PropertyInfo = 
{
	&t2039_TI, "DefaultString", &m10770_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2039_PIs[] =
{
	&t2039____DefaultString_PropertyInfo,
	NULL
};
extern MethodInfo m10772_MI;
extern MethodInfo m10773_MI;
extern MethodInfo m10771_MI;
static Il2CppMethodReference t2039_VT[] =
{
	&m10772_MI,
	&m646_MI,
	&m10773_MI,
	&m673_MI,
	&m10771_MI,
};
static bool t2039_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern MethodInfo m7820_MI;
void t2039_CustomAttributesCacheGenerator_m10769(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7820(tmp, &m7820_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2039__CustomAttributeCache_m10769 = {
1,
NULL,
&t2039_CustomAttributesCacheGenerator_m10769
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2039_0_0_0;
extern Il2CppType t2039_1_0_0;
struct t2039;
extern CustomAttributesCache t2039__CustomAttributeCache_m10769;
const Il2CppTypeDefinitionMetadata t2039_DM = 
{
	NULL, NULL, NULL, NULL, &t2035_0_0_0, t2039_VT, t2039_VTIGM, NULL};
TypeInfo t2039_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderReplacementFallback", "System.Text", t2039_MIs, t2039_PIs, t2039_FIs, NULL, &t2039_TI, NULL, &EmptyCustomAttributesCache, &t2039_0_0_0, &t2039_1_0_0, &t2039_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2039), sizeof (t2039), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 1, 0, 0, 5, 0, 0};
#include "t2040.h"
// Metadata Definition System.Text.DecoderReplacementFallbackBuffer
extern TypeInfo t2040_TI;
#include "t2040MD.h"
extern Il2CppType t2039_0_0_0;
static ParameterInfo t2040_m10774_ParameterInfos[] = 
{
	{"fallback", 0, 134223577, &EmptyCustomAttributesCache, &t2039_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10774_MI = 
{
	".ctor", (methodPointerType)&m10774, &t2040_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2040_m10774_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4874, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10775_MI = 
{
	"get_Remaining", (methodPointerType)&m10775, &t2040_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 4875, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2040_m10776_ParameterInfos[] = 
{
	{"bytesUnknown", 0, 134223578, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"index", 1, 134223579, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10776_MI = 
{
	"Fallback", (methodPointerType)&m10776, &t2040_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t125, t2040_m10776_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 4876, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern void* RuntimeInvoker_t296 (MethodInfo* method, void* obj, void** args);
MethodInfo m10777_MI = 
{
	"GetNextChar", (methodPointerType)&m10777, &t2040_TI, &t296_0_0_0, RuntimeInvoker_t296, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 4877, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10778_MI = 
{
	"Reset", (methodPointerType)&m10778, &t2040_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 4878, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2040_MIs[] =
{
	&m10774_MI,
	&m10775_MI,
	&m10776_MI,
	&m10777_MI,
	&m10778_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t2040_f0_FieldInfo = 
{
	"fallback_assigned", &t124_0_0_1, &t2040_TI, offsetof(t2040, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2040_f1_FieldInfo = 
{
	"current", &t125_0_0_1, &t2040_TI, offsetof(t2040, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2040_f2_FieldInfo = 
{
	"replacement", &t2_0_0_1, &t2040_TI, offsetof(t2040, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2040_FIs[] =
{
	&t2040_f0_FieldInfo,
	&t2040_f1_FieldInfo,
	&t2040_f2_FieldInfo,
	NULL
};
extern MethodInfo m10775_MI;
static PropertyInfo t2040____Remaining_PropertyInfo = 
{
	&t2040_TI, "Remaining", &m10775_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2040_PIs[] =
{
	&t2040____Remaining_PropertyInfo,
	NULL
};
extern MethodInfo m10776_MI;
extern MethodInfo m10777_MI;
extern MethodInfo m10778_MI;
static Il2CppMethodReference t2040_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10775_MI,
	&m10776_MI,
	&m10777_MI,
	&m10778_MI,
};
static bool t2040_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2040_0_0_0;
extern Il2CppType t2040_1_0_0;
struct t2040;
const Il2CppTypeDefinitionMetadata t2040_DM = 
{
	NULL, NULL, NULL, NULL, &t2034_0_0_0, t2040_VT, t2040_VTIGM, NULL};
TypeInfo t2040_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderReplacementFallbackBuffer", "System.Text", t2040_MIs, t2040_PIs, t2040_FIs, NULL, &t2040_TI, NULL, &EmptyCustomAttributesCache, &t2040_0_0_0, &t2040_1_0_0, &t2040_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2040), sizeof (t2040), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 1, 3, 0, 0, 8, 0, 0};
#include "t2041.h"
// Metadata Definition System.Text.EncoderExceptionFallback
extern TypeInfo t2041_TI;
#include "t2041MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10779_MI = 
{
	".ctor", (methodPointerType)&m10779, &t2041_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4879, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2033_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10780_MI = 
{
	"CreateFallbackBuffer", (methodPointerType)&m10780, &t2041_TI, &t2033_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 4, 0, false, false, 4880, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2041_m10781_ParameterInfos[] = 
{
	{"value", 0, 134223580, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10781_MI = 
{
	"Equals", (methodPointerType)&m10781, &t2041_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2041_m10781_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4881, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10782_MI = 
{
	"GetHashCode", (methodPointerType)&m10782, &t2041_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4882, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2041_MIs[] =
{
	&m10779_MI,
	&m10780_MI,
	&m10781_MI,
	&m10782_MI,
	NULL
};
extern MethodInfo m10781_MI;
extern MethodInfo m10782_MI;
extern MethodInfo m10780_MI;
static Il2CppMethodReference t2041_VT[] =
{
	&m10781_MI,
	&m646_MI,
	&m10782_MI,
	&m673_MI,
	&m10780_MI,
};
static bool t2041_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2041_0_0_0;
extern Il2CppType t2041_1_0_0;
extern Il2CppType t2042_0_0_0;
struct t2041;
const Il2CppTypeDefinitionMetadata t2041_DM = 
{
	NULL, NULL, NULL, NULL, &t2042_0_0_0, t2041_VT, t2041_VTIGM, NULL};
TypeInfo t2041_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderExceptionFallback", "System.Text", t2041_MIs, NULL, NULL, NULL, &t2041_TI, NULL, &EmptyCustomAttributesCache, &t2041_0_0_0, &t2041_1_0_0, &t2041_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2041), sizeof (t2041), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 5, 0, 0};
#include "t2043.h"
// Metadata Definition System.Text.EncoderExceptionFallbackBuffer
extern TypeInfo t2043_TI;
#include "t2043MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10783_MI = 
{
	".ctor", (methodPointerType)&m10783, &t2043_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4883, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10784_MI = 
{
	"get_Remaining", (methodPointerType)&m10784, &t2043_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 4884, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern Il2CppType t296_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2043_m10785_ParameterInfos[] = 
{
	{"charUnknown", 0, 134223581, &EmptyCustomAttributesCache, &t296_0_0_0},
	{"index", 1, 134223582, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t327_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10785_MI = 
{
	"Fallback", (methodPointerType)&m10785, &t2043_TI, &t124_0_0_0, RuntimeInvoker_t124_t327_t125, t2043_m10785_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 4885, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern Il2CppType t296_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2043_m10786_ParameterInfos[] = 
{
	{"charUnknownHigh", 0, 134223583, &EmptyCustomAttributesCache, &t296_0_0_0},
	{"charUnknownLow", 1, 134223584, &EmptyCustomAttributesCache, &t296_0_0_0},
	{"index", 2, 134223585, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t327_t327_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10786_MI = 
{
	"Fallback", (methodPointerType)&m10786, &t2043_TI, &t124_0_0_0, RuntimeInvoker_t124_t327_t327_t125, t2043_m10786_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 3, false, false, 4886, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern void* RuntimeInvoker_t296 (MethodInfo* method, void* obj, void** args);
MethodInfo m10787_MI = 
{
	"GetNextChar", (methodPointerType)&m10787, &t2043_TI, &t296_0_0_0, RuntimeInvoker_t296, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 4887, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2043_MIs[] =
{
	&m10783_MI,
	&m10784_MI,
	&m10785_MI,
	&m10786_MI,
	&m10787_MI,
	NULL
};
extern MethodInfo m10784_MI;
static PropertyInfo t2043____Remaining_PropertyInfo = 
{
	&t2043_TI, "Remaining", &m10784_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2043_PIs[] =
{
	&t2043____Remaining_PropertyInfo,
	NULL
};
extern MethodInfo m10785_MI;
extern MethodInfo m10786_MI;
extern MethodInfo m10787_MI;
static Il2CppMethodReference t2043_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10784_MI,
	&m10785_MI,
	&m10786_MI,
	&m10787_MI,
};
static bool t2043_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2043_0_0_0;
extern Il2CppType t2043_1_0_0;
extern Il2CppType t2033_0_0_0;
struct t2043;
const Il2CppTypeDefinitionMetadata t2043_DM = 
{
	NULL, NULL, NULL, NULL, &t2033_0_0_0, t2043_VT, t2043_VTIGM, NULL};
TypeInfo t2043_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderExceptionFallbackBuffer", "System.Text", t2043_MIs, t2043_PIs, NULL, NULL, &t2043_TI, NULL, &EmptyCustomAttributesCache, &t2043_0_0_0, &t2043_1_0_0, &t2043_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2043), sizeof (t2043), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 8, 0, 0};
#include "t2042.h"
// Metadata Definition System.Text.EncoderFallback
extern TypeInfo t2042_TI;
#include "t2042MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10788_MI = 
{
	".ctor", (methodPointerType)&m10788, &t2042_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4888, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10789_MI = 
{
	".cctor", (methodPointerType)&m10789, &t2042_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4889, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2042_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10790_MI = 
{
	"get_ExceptionFallback", (methodPointerType)&m10790, &t2042_TI, &t2042_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4890, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2042_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10791_MI = 
{
	"get_ReplacementFallback", (methodPointerType)&m10791, &t2042_TI, &t2042_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4891, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2042_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10792_MI = 
{
	"get_StandardSafeFallback", (methodPointerType)&m10792, &t2042_TI, &t2042_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 4892, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2033_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12080_MI = 
{
	"CreateFallbackBuffer", NULL, &t2042_TI, &t2033_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 1478, 0, 4, 0, false, false, 4893, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2042_MIs[] =
{
	&m10788_MI,
	&m10789_MI,
	&m10790_MI,
	&m10791_MI,
	&m10792_MI,
	&m12080_MI,
	NULL
};
extern Il2CppType t2042_0_0_17;
FieldInfo t2042_f0_FieldInfo = 
{
	"exception_fallback", &t2042_0_0_17, &t2042_TI, offsetof(t2042_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2042_0_0_17;
FieldInfo t2042_f1_FieldInfo = 
{
	"replacement_fallback", &t2042_0_0_17, &t2042_TI, offsetof(t2042_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2042_0_0_17;
FieldInfo t2042_f2_FieldInfo = 
{
	"standard_safe_fallback", &t2042_0_0_17, &t2042_TI, offsetof(t2042_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2042_FIs[] =
{
	&t2042_f0_FieldInfo,
	&t2042_f1_FieldInfo,
	&t2042_f2_FieldInfo,
	NULL
};
extern MethodInfo m10790_MI;
static PropertyInfo t2042____ExceptionFallback_PropertyInfo = 
{
	&t2042_TI, "ExceptionFallback", &m10790_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10791_MI;
static PropertyInfo t2042____ReplacementFallback_PropertyInfo = 
{
	&t2042_TI, "ReplacementFallback", &m10791_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10792_MI;
static PropertyInfo t2042____StandardSafeFallback_PropertyInfo = 
{
	&t2042_TI, "StandardSafeFallback", &m10792_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2042_PIs[] =
{
	&t2042____ExceptionFallback_PropertyInfo,
	&t2042____ReplacementFallback_PropertyInfo,
	&t2042____StandardSafeFallback_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2042_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t2042_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2042_1_0_0;
struct t2042;
const Il2CppTypeDefinitionMetadata t2042_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2042_VT, t2042_VTIGM, NULL};
TypeInfo t2042_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderFallback", "System.Text", t2042_MIs, t2042_PIs, t2042_FIs, NULL, &t2042_TI, NULL, &EmptyCustomAttributesCache, &t2042_0_0_0, &t2042_1_0_0, &t2042_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2042), sizeof (t2042), 0, -1, sizeof(t2042_SFs), 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, true, false, 6, 3, 3, 0, 0, 5, 0, 0};
#include "t2033.h"
// Metadata Definition System.Text.EncoderFallbackBuffer
extern TypeInfo t2033_TI;
#include "t2033MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10793_MI = 
{
	".ctor", (methodPointerType)&m10793, &t2033_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4894, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12083_MI = 
{
	"get_Remaining", NULL, &t2033_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 4, 0, false, false, 4895, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2033_m12082_ParameterInfos[] = 
{
	{"charUnknown", 0, 134223586, &EmptyCustomAttributesCache, &t296_0_0_0},
	{"index", 1, 134223587, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t327_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12082_MI = 
{
	"Fallback", NULL, &t2033_TI, &t124_0_0_0, RuntimeInvoker_t124_t327_t125, t2033_m12082_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, false, 4896, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern Il2CppType t296_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2033_m12081_ParameterInfos[] = 
{
	{"charUnknownHigh", 0, 134223588, &EmptyCustomAttributesCache, &t296_0_0_0},
	{"charUnknownLow", 1, 134223589, &EmptyCustomAttributesCache, &t296_0_0_0},
	{"index", 2, 134223590, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t327_t327_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12081_MI = 
{
	"Fallback", NULL, &t2033_TI, &t124_0_0_0, RuntimeInvoker_t124_t327_t327_t125, t2033_m12081_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 3, false, false, 4897, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern void* RuntimeInvoker_t296 (MethodInfo* method, void* obj, void** args);
MethodInfo m12084_MI = 
{
	"GetNextChar", NULL, &t2033_TI, &t296_0_0_0, RuntimeInvoker_t296, NULL, &EmptyCustomAttributesCache, 1478, 0, 7, 0, false, false, 4898, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2033_MIs[] =
{
	&m10793_MI,
	&m12083_MI,
	&m12082_MI,
	&m12081_MI,
	&m12084_MI,
	NULL
};
extern MethodInfo m12083_MI;
static PropertyInfo t2033____Remaining_PropertyInfo = 
{
	&t2033_TI, "Remaining", &m12083_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2033_PIs[] =
{
	&t2033____Remaining_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2033_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
	NULL,
};
static bool t2033_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
struct t2033;
const Il2CppTypeDefinitionMetadata t2033_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2033_VT, t2033_VTIGM, NULL};
TypeInfo t2033_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderFallbackBuffer", "System.Text", t2033_MIs, t2033_PIs, NULL, NULL, &t2033_TI, NULL, &EmptyCustomAttributesCache, &t2033_0_0_0, &t2033_1_0_0, &t2033_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2033), sizeof (t2033), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 8, 0, 0};
#include "t2044.h"
// Metadata Definition System.Text.EncoderFallbackException
extern TypeInfo t2044_TI;
#include "t2044MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10794_MI = 
{
	".ctor", (methodPointerType)&m10794, &t2044_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4899, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2044_m10795_ParameterInfos[] = 
{
	{"message", 0, 134223591, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10795_MI = 
{
	".ctor", (methodPointerType)&m10795, &t2044_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2044_m10795_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4900, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2044_m10796_ParameterInfos[] = 
{
	{"charUnknown", 0, 134223592, &EmptyCustomAttributesCache, &t296_0_0_0},
	{"index", 1, 134223593, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t327_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10796_MI = 
{
	".ctor", (methodPointerType)&m10796, &t2044_TI, &t122_0_0_0, RuntimeInvoker_t122_t327_t125, t2044_m10796_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 4901, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern Il2CppType t296_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2044_m10797_ParameterInfos[] = 
{
	{"charUnknownHigh", 0, 134223594, &EmptyCustomAttributesCache, &t296_0_0_0},
	{"charUnknownLow", 1, 134223595, &EmptyCustomAttributesCache, &t296_0_0_0},
	{"index", 2, 134223596, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t327_t327_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10797_MI = 
{
	".ctor", (methodPointerType)&m10797, &t2044_TI, &t122_0_0_0, RuntimeInvoker_t122_t327_t327_t125, t2044_m10797_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 3, false, false, 4902, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2044_MIs[] =
{
	&m10794_MI,
	&m10795_MI,
	&m10796_MI,
	&m10797_MI,
	NULL
};
extern Il2CppType t296_0_0_1;
FieldInfo t2044_f13_FieldInfo = 
{
	"char_unknown", &t296_0_0_1, &t2044_TI, offsetof(t2044, f13), &EmptyCustomAttributesCache};
extern Il2CppType t296_0_0_1;
FieldInfo t2044_f14_FieldInfo = 
{
	"char_unknown_high", &t296_0_0_1, &t2044_TI, offsetof(t2044, f14), &EmptyCustomAttributesCache};
extern Il2CppType t296_0_0_1;
FieldInfo t2044_f15_FieldInfo = 
{
	"char_unknown_low", &t296_0_0_1, &t2044_TI, offsetof(t2044, f15), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2044_f16_FieldInfo = 
{
	"index", &t125_0_0_1, &t2044_TI, offsetof(t2044, f16), &EmptyCustomAttributesCache};
static FieldInfo* t2044_FIs[] =
{
	&t2044_f13_FieldInfo,
	&t2044_f14_FieldInfo,
	&t2044_f15_FieldInfo,
	&t2044_f16_FieldInfo,
	NULL
};
static Il2CppMethodReference t2044_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4472_MI,
	&m11114_MI,
	&m4219_MI,
	&m11113_MI,
	&m4474_MI,
	&m4417_MI,
	&m11114_MI,
	&m4418_MI,
	&m11112_MI,
};
static bool t2044_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2044_IOs[] = 
{
	{ &t616_0_0_0, 4},
	{ &t941_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2044_0_0_0;
extern Il2CppType t2044_1_0_0;
struct t2044;
const Il2CppTypeDefinitionMetadata t2044_DM = 
{
	NULL, NULL, NULL, t2044_IOs, &t556_0_0_0, t2044_VT, t2044_VTIGM, NULL};
TypeInfo t2044_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderFallbackException", "System.Text", t2044_MIs, NULL, t2044_FIs, NULL, &t2044_TI, NULL, &EmptyCustomAttributesCache, &t2044_0_0_0, &t2044_1_0_0, &t2044_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2044), sizeof (t2044), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 4, 0, 0, 12, 0, 2};
#include "t2045.h"
// Metadata Definition System.Text.EncoderReplacementFallback
extern TypeInfo t2045_TI;
#include "t2045MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10798_MI = 
{
	".ctor", (methodPointerType)&m10798, &t2045_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4903, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2045_m10799_ParameterInfos[] = 
{
	{"replacement", 0, 134223597, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2045__CustomAttributeCache_m10799;
MethodInfo m10799_MI = 
{
	".ctor", (methodPointerType)&m10799, &t2045_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2045_m10799_ParameterInfos, &t2045__CustomAttributeCache_m10799, 6278, 0, 255, 1, false, false, 4904, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10800_MI = 
{
	"get_DefaultString", (methodPointerType)&m10800, &t2045_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4905, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2033_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10801_MI = 
{
	"CreateFallbackBuffer", (methodPointerType)&m10801, &t2045_TI, &t2033_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 4, 0, false, false, 4906, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2045_m10802_ParameterInfos[] = 
{
	{"value", 0, 134223598, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10802_MI = 
{
	"Equals", (methodPointerType)&m10802, &t2045_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2045_m10802_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4907, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10803_MI = 
{
	"GetHashCode", (methodPointerType)&m10803, &t2045_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4908, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2045_MIs[] =
{
	&m10798_MI,
	&m10799_MI,
	&m10800_MI,
	&m10801_MI,
	&m10802_MI,
	&m10803_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2045_f3_FieldInfo = 
{
	"replacement", &t2_0_0_1, &t2045_TI, offsetof(t2045, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2045_FIs[] =
{
	&t2045_f3_FieldInfo,
	NULL
};
extern MethodInfo m10800_MI;
static PropertyInfo t2045____DefaultString_PropertyInfo = 
{
	&t2045_TI, "DefaultString", &m10800_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2045_PIs[] =
{
	&t2045____DefaultString_PropertyInfo,
	NULL
};
extern MethodInfo m10802_MI;
extern MethodInfo m10803_MI;
extern MethodInfo m10801_MI;
static Il2CppMethodReference t2045_VT[] =
{
	&m10802_MI,
	&m646_MI,
	&m10803_MI,
	&m673_MI,
	&m10801_MI,
};
static bool t2045_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
void t2045_CustomAttributesCacheGenerator_m10799(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7820(tmp, &m7820_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2045__CustomAttributeCache_m10799 = {
1,
NULL,
&t2045_CustomAttributesCacheGenerator_m10799
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2045_0_0_0;
extern Il2CppType t2045_1_0_0;
struct t2045;
extern CustomAttributesCache t2045__CustomAttributeCache_m10799;
const Il2CppTypeDefinitionMetadata t2045_DM = 
{
	NULL, NULL, NULL, NULL, &t2042_0_0_0, t2045_VT, t2045_VTIGM, NULL};
TypeInfo t2045_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderReplacementFallback", "System.Text", t2045_MIs, t2045_PIs, t2045_FIs, NULL, &t2045_TI, NULL, &EmptyCustomAttributesCache, &t2045_0_0_0, &t2045_1_0_0, &t2045_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2045), sizeof (t2045), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 1, 0, 0, 5, 0, 0};
#include "t2046.h"
// Metadata Definition System.Text.EncoderReplacementFallbackBuffer
extern TypeInfo t2046_TI;
#include "t2046MD.h"
extern Il2CppType t2045_0_0_0;
static ParameterInfo t2046_m10804_ParameterInfos[] = 
{
	{"fallback", 0, 134223599, &EmptyCustomAttributesCache, &t2045_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10804_MI = 
{
	".ctor", (methodPointerType)&m10804, &t2046_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2046_m10804_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4909, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10805_MI = 
{
	"get_Remaining", (methodPointerType)&m10805, &t2046_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 4910, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2046_m10806_ParameterInfos[] = 
{
	{"charUnknown", 0, 134223600, &EmptyCustomAttributesCache, &t296_0_0_0},
	{"index", 1, 134223601, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t327_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10806_MI = 
{
	"Fallback", (methodPointerType)&m10806, &t2046_TI, &t124_0_0_0, RuntimeInvoker_t124_t327_t125, t2046_m10806_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 4911, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern Il2CppType t296_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2046_m10807_ParameterInfos[] = 
{
	{"charUnknownHigh", 0, 134223602, &EmptyCustomAttributesCache, &t296_0_0_0},
	{"charUnknownLow", 1, 134223603, &EmptyCustomAttributesCache, &t296_0_0_0},
	{"index", 2, 134223604, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t327_t327_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10807_MI = 
{
	"Fallback", (methodPointerType)&m10807, &t2046_TI, &t124_0_0_0, RuntimeInvoker_t124_t327_t327_t125, t2046_m10807_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 3, false, false, 4912, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2046_m10808_ParameterInfos[] = 
{
	{"index", 0, 134223605, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10808_MI = 
{
	"Fallback", (methodPointerType)&m10808, &t2046_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t2046_m10808_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4913, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern void* RuntimeInvoker_t296 (MethodInfo* method, void* obj, void** args);
MethodInfo m10809_MI = 
{
	"GetNextChar", (methodPointerType)&m10809, &t2046_TI, &t296_0_0_0, RuntimeInvoker_t296, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 4914, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2046_MIs[] =
{
	&m10804_MI,
	&m10805_MI,
	&m10806_MI,
	&m10807_MI,
	&m10808_MI,
	&m10809_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2046_f0_FieldInfo = 
{
	"replacement", &t2_0_0_1, &t2046_TI, offsetof(t2046, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2046_f1_FieldInfo = 
{
	"current", &t125_0_0_1, &t2046_TI, offsetof(t2046, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t2046_f2_FieldInfo = 
{
	"fallback_assigned", &t124_0_0_1, &t2046_TI, offsetof(t2046, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2046_FIs[] =
{
	&t2046_f0_FieldInfo,
	&t2046_f1_FieldInfo,
	&t2046_f2_FieldInfo,
	NULL
};
extern MethodInfo m10805_MI;
static PropertyInfo t2046____Remaining_PropertyInfo = 
{
	&t2046_TI, "Remaining", &m10805_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2046_PIs[] =
{
	&t2046____Remaining_PropertyInfo,
	NULL
};
extern MethodInfo m10806_MI;
extern MethodInfo m10807_MI;
extern MethodInfo m10809_MI;
static Il2CppMethodReference t2046_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10805_MI,
	&m10806_MI,
	&m10807_MI,
	&m10809_MI,
};
static bool t2046_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2046_0_0_0;
extern Il2CppType t2046_1_0_0;
struct t2046;
const Il2CppTypeDefinitionMetadata t2046_DM = 
{
	NULL, NULL, NULL, NULL, &t2033_0_0_0, t2046_VT, t2046_VTIGM, NULL};
TypeInfo t2046_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderReplacementFallbackBuffer", "System.Text", t2046_MIs, t2046_PIs, t2046_FIs, NULL, &t2046_TI, NULL, &EmptyCustomAttributesCache, &t2046_0_0_0, &t2046_1_0_0, &t2046_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2046), sizeof (t2046), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 3, 0, 0, 8, 0, 0};
#include "t2047.h"
// Metadata Definition System.Text.Encoding/ForwardingDecoder
extern TypeInfo t2047_TI;
#include "t2047MD.h"
extern Il2CppType t722_0_0_0;
static ParameterInfo t2047_m10810_ParameterInfos[] = 
{
	{"enc", 0, 134223660, &EmptyCustomAttributesCache, &t722_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10810_MI = 
{
	".ctor", (methodPointerType)&m10810, &t2047_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2047_m10810_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4962, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2047_m10811_ParameterInfos[] = 
{
	{"bytes", 0, 134223661, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 1, 134223662, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223663, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223664, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"charIndex", 4, 134223665, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10811_MI = 
{
	"GetChars", (methodPointerType)&m10811, &t2047_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2047_m10811_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 5, false, false, 4963, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2047_MIs[] =
{
	&m10810_MI,
	&m10811_MI,
	NULL
};
extern Il2CppType t722_0_0_1;
FieldInfo t2047_f2_FieldInfo = 
{
	"encoding", &t722_0_0_1, &t2047_TI, offsetof(t2047, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2047_FIs[] =
{
	&t2047_f2_FieldInfo,
	NULL
};
extern MethodInfo m10811_MI;
static Il2CppMethodReference t2047_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10811_MI,
};
static bool t2047_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2047_0_0_0;
extern Il2CppType t2047_1_0_0;
extern TypeInfo t722_TI;
struct t2047;
const Il2CppTypeDefinitionMetadata t2047_DM = 
{
	&t722_0_0_0, NULL, NULL, NULL, &t1704_0_0_0, t2047_VT, t2047_VTIGM, NULL};
TypeInfo t2047_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ForwardingDecoder", "", t2047_MIs, NULL, t2047_FIs, NULL, &t2047_TI, NULL, &EmptyCustomAttributesCache, &t2047_0_0_0, &t2047_1_0_0, &t2047_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2047), sizeof (t2047), 0, -1, 0, 0, -1, 1048835, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#include "t722.h"
// Metadata Definition System.Text.Encoding
#include "t722MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10812_MI = 
{
	".ctor", (methodPointerType)&m10812, &t722_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4915, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t722_m10813_ParameterInfos[] = 
{
	{"codePage", 0, 134223606, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10813_MI = 
{
	".ctor", (methodPointerType)&m10813, &t722_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t722_m10813_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 1, false, false, 4916, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10814_MI = 
{
	".cctor", (methodPointerType)&m10814, &t722_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4917, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t722_m10815_ParameterInfos[] = 
{
	{"arg", 0, 134223607, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10815_MI = 
{
	"_", (methodPointerType)&m10815, &t722_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t722_m10815_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 4918, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10816_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m10816, &t722_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4919, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2035_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10817_MI = 
{
	"get_DecoderFallback", (methodPointerType)&m10817, &t722_TI, &t2035_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4920, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2035_0_0_0;
static ParameterInfo t722_m10818_ParameterInfos[] = 
{
	{"value", 0, 134223608, &EmptyCustomAttributesCache, &t2035_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10818_MI = 
{
	"set_DecoderFallback", (methodPointerType)&m10818, &t722_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t722_m10818_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4921, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2042_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10819_MI = 
{
	"get_EncoderFallback", (methodPointerType)&m10819, &t722_TI, &t2042_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4922, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2042_0_0_0;
extern Il2CppType t2035_0_0_0;
static ParameterInfo t722_m10820_ParameterInfos[] = 
{
	{"e", 0, 134223609, &EmptyCustomAttributesCache, &t2042_0_0_0},
	{"d", 1, 134223610, &EmptyCustomAttributesCache, &t2035_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10820_MI = 
{
	"SetFallbackInternal", (methodPointerType)&m10820, &t722_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t722_m10820_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 2, false, false, 4923, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t722_m10821_ParameterInfos[] = 
{
	{"value", 0, 134223611, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10821_MI = 
{
	"Equals", (methodPointerType)&m10821, &t722_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t722_m10821_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4924, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t722_m12089_ParameterInfos[] = 
{
	{"chars", 0, 134223612, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"index", 1, 134223613, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223614, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12089_MI = 
{
	"GetByteCount", NULL, &t722_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t722_m12089_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 3, false, false, 4925, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t722_m10822_ParameterInfos[] = 
{
	{"s", 0, 134223615, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10822_MI = 
{
	"GetByteCount", (methodPointerType)&m10822, &t722_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t722_m10822_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 1, false, false, 4926, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t722_m10823_ParameterInfos[] = 
{
	{"chars", 0, 134223616, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10823_MI = 
{
	"GetByteCount", (methodPointerType)&m10823, &t722_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t722_m10823_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 1, false, false, 4927, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t722_m11982_ParameterInfos[] = 
{
	{"chars", 0, 134223617, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"charIndex", 1, 134223618, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223619, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223620, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 4, 134223621, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m11982_MI = 
{
	"GetBytes", NULL, &t722_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t722_m11982_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 7, 5, false, false, 4928, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t722_m6891_ParameterInfos[] = 
{
	{"s", 0, 134223622, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"charIndex", 1, 134223623, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223624, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223625, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 4, 134223626, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6891_MI = 
{
	"GetBytes", (methodPointerType)&m6891, &t722_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t722_m6891_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 5, false, false, 4929, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t722_m4264_ParameterInfos[] = 
{
	{"s", 0, 134223627, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4264_MI = 
{
	"GetBytes", (methodPointerType)&m4264, &t722_TI, &t723_0_0_0, RuntimeInvoker_t9_t9, t722_m4264_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 1, false, false, 4930, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t722_m10824_ParameterInfos[] = 
{
	{"chars", 0, 134223628, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"index", 1, 134223629, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223630, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10824_MI = 
{
	"GetBytes", (methodPointerType)&m10824, &t722_TI, &t723_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t722_m10824_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 3, false, false, 4931, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t722_m5957_ParameterInfos[] = 
{
	{"chars", 0, 134223631, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5957_MI = 
{
	"GetBytes", (methodPointerType)&m5957, &t722_TI, &t723_0_0_0, RuntimeInvoker_t9_t9, t722_m5957_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 1, false, false, 4932, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t722_m12090_ParameterInfos[] = 
{
	{"bytes", 0, 134223632, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"index", 1, 134223633, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223634, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12090_MI = 
{
	"GetCharCount", NULL, &t722_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t722_m12090_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 12, 3, false, false, 4933, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t722_m11977_ParameterInfos[] = 
{
	{"bytes", 0, 134223635, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 1, 134223636, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223637, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223638, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"charIndex", 4, 134223639, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m11977_MI = 
{
	"GetChars", NULL, &t722_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t722_m11977_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 13, 5, false, false, 4934, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t722_m10825_ParameterInfos[] = 
{
	{"bytes", 0, 134223640, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"index", 1, 134223641, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223642, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t305_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10825_MI = 
{
	"GetChars", (methodPointerType)&m10825, &t722_TI, &t305_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t722_m10825_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 3, false, false, 4935, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1704_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10826_MI = 
{
	"GetDecoder", (methodPointerType)&m10826, &t722_TI, &t1704_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 15, 0, false, false, 4936, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t158_0_0_0;
extern CustomAttributesCache t722__CustomAttributeCache_t722_m10827_Arg1_ParameterInfo;
static ParameterInfo t722_m10827_ParameterInfos[] = 
{
	{"name", 0, 134223643, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"args", 1, 134223644, &t722__CustomAttributeCache_t722_m10827_Arg1_ParameterInfo, &t158_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10827_MI = 
{
	"InvokeI18N", (methodPointerType)&m10827, &t722_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t722_m10827_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 4937, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t722_m10828_ParameterInfos[] = 
{
	{"codepage", 0, 134223645, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t722_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10828_MI = 
{
	"GetEncoding", (methodPointerType)&m10828, &t722_TI, &t722_0_0_0, RuntimeInvoker_t9_t125, t722_m10828_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4938, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t722_m4248_ParameterInfos[] = 
{
	{"name", 0, 134223646, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t722_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4248_MI = 
{
	"GetEncoding", (methodPointerType)&m4248, &t722_TI, &t722_0_0_0, RuntimeInvoker_t9_t9, t722_m4248_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4939, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10829_MI = 
{
	"GetHashCode", (methodPointerType)&m10829, &t722_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4940, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t722_m11979_ParameterInfos[] = 
{
	{"charCount", 0, 134223647, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m11979_MI = 
{
	"GetMaxByteCount", NULL, &t722_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t722_m11979_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 16, 1, false, false, 4941, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t722_m11980_ParameterInfos[] = 
{
	{"byteCount", 0, 134223648, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m11980_MI = 
{
	"GetMaxCharCount", NULL, &t722_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t722_m11980_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 17, 1, false, false, 4942, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10830_MI = 
{
	"GetPreamble", (methodPointerType)&m10830, &t722_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 18, 0, false, false, 4943, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t722_m4241_ParameterInfos[] = 
{
	{"bytes", 0, 134223649, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"index", 1, 134223650, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223651, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4241_MI = 
{
	"GetString", (methodPointerType)&m4241, &t722_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t722_m4241_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 19, 3, false, false, 4944, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t722_m5800_ParameterInfos[] = 
{
	{"bytes", 0, 134223652, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5800_MI = 
{
	"GetString", (methodPointerType)&m5800, &t722_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t722_m5800_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 20, 1, false, false, 4945, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4268_MI = 
{
	"get_HeaderName", (methodPointerType)&m4268, &t722_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 21, 0, false, false, 4946, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4275_MI = 
{
	"get_WebName", (methodPointerType)&m4275, &t722_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 22, 0, false, false, 4947, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t722_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4242_MI = 
{
	"get_ASCII", (methodPointerType)&m4242, &t722_TI, &t722_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4948, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t722_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6890_MI = 
{
	"get_BigEndianUnicode", (methodPointerType)&m6890, &t722_TI, &t722_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4949, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_1_0_0;
extern Il2CppType t125_1_0_0;
static ParameterInfo t722_m10831_ParameterInfos[] = 
{
	{"code_page", 0, 134223653, &EmptyCustomAttributesCache, &t125_1_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t329 (MethodInfo* method, void* obj, void** args);
MethodInfo m10831_MI = 
{
	"InternalCodePage", (methodPointerType)&m10831, &t722_TI, &t2_0_0_0, RuntimeInvoker_t9_t329, t722_m10831_ParameterInfos, &EmptyCustomAttributesCache, 147, 4096, 255, 1, false, false, 4950, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t722_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10832_MI = 
{
	"get_Default", (methodPointerType)&m10832, &t722_TI, &t722_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4951, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t722_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10833_MI = 
{
	"get_ISOLatin1", (methodPointerType)&m10833, &t722_TI, &t722_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2193, 0, 255, 0, false, false, 4952, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t722_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6902_MI = 
{
	"get_UTF7", (methodPointerType)&m6902, &t722_TI, &t722_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4953, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t722_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4249_MI = 
{
	"get_UTF8", (methodPointerType)&m4249, &t722_TI, &t722_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4954, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t722_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10834_MI = 
{
	"get_UTF8Unmarked", (methodPointerType)&m10834, &t722_TI, &t722_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 4955, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t722_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10835_MI = 
{
	"get_UTF8UnmarkedUnsafe", (methodPointerType)&m10835, &t722_TI, &t722_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 4956, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t722_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10836_MI = 
{
	"get_Unicode", (methodPointerType)&m10836, &t722_TI, &t722_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4957, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t722_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10837_MI = 
{
	"get_UTF32", (methodPointerType)&m10837, &t722_TI, &t722_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4958, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t722_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10838_MI = 
{
	"get_BigEndianUTF32", (methodPointerType)&m10838, &t722_TI, &t722_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 4959, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2229_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t722_m10839_ParameterInfos[] = 
{
	{"chars", 0, 134223654, &EmptyCustomAttributesCache, &t2229_0_0_0},
	{"count", 1, 134223655, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t722__CustomAttributeCache_m10839;
MethodInfo m10839_MI = 
{
	"GetByteCount", (methodPointerType)&m10839, &t722_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125, t722_m10839_ParameterInfos, &t722__CustomAttributeCache_m10839, 454, 0, 23, 2, false, false, 4960, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2229_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1544_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t722_m10840_ParameterInfos[] = 
{
	{"chars", 0, 134223656, &EmptyCustomAttributesCache, &t2229_0_0_0},
	{"charCount", 1, 134223657, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 2, 134223658, &EmptyCustomAttributesCache, &t1544_0_0_0},
	{"byteCount", 3, 134223659, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t722__CustomAttributeCache_m10840;
MethodInfo m10840_MI = 
{
	"GetBytes", (methodPointerType)&m10840, &t722_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t9_t125, t722_m10840_ParameterInfos, &t722__CustomAttributeCache_m10840, 454, 0, 24, 4, false, false, 4961, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t722_MIs[] =
{
	&m10812_MI,
	&m10813_MI,
	&m10814_MI,
	&m10815_MI,
	&m10816_MI,
	&m10817_MI,
	&m10818_MI,
	&m10819_MI,
	&m10820_MI,
	&m10821_MI,
	&m12089_MI,
	&m10822_MI,
	&m10823_MI,
	&m11982_MI,
	&m6891_MI,
	&m4264_MI,
	&m10824_MI,
	&m5957_MI,
	&m12090_MI,
	&m11977_MI,
	&m10825_MI,
	&m10826_MI,
	&m10827_MI,
	&m10828_MI,
	&m4248_MI,
	&m10829_MI,
	&m11979_MI,
	&m11980_MI,
	&m10830_MI,
	&m4241_MI,
	&m5800_MI,
	&m4268_MI,
	&m4275_MI,
	&m4242_MI,
	&m6890_MI,
	&m10831_MI,
	&m10832_MI,
	&m10833_MI,
	&m6902_MI,
	&m4249_MI,
	&m10834_MI,
	&m10835_MI,
	&m10836_MI,
	&m10837_MI,
	&m10838_MI,
	&m10839_MI,
	&m10840_MI,
	NULL
};
extern Il2CppType t125_0_0_3;
FieldInfo t722_f0_FieldInfo = 
{
	"codePage", &t125_0_0_3, &t722_TI, offsetof(t722, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_3;
FieldInfo t722_f1_FieldInfo = 
{
	"windows_code_page", &t125_0_0_3, &t722_TI, offsetof(t722, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t722_f2_FieldInfo = 
{
	"is_readonly", &t124_0_0_1, &t722_TI, offsetof(t722, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2035_0_0_1;
FieldInfo t722_f3_FieldInfo = 
{
	"decoder_fallback", &t2035_0_0_1, &t722_TI, offsetof(t722, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2042_0_0_1;
FieldInfo t722_f4_FieldInfo = 
{
	"encoder_fallback", &t2042_0_0_1, &t722_TI, offsetof(t722, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1336_0_0_17;
FieldInfo t722_f5_FieldInfo = 
{
	"i18nAssembly", &t1336_0_0_17, &t722_TI, offsetof(t722_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_17;
FieldInfo t722_f6_FieldInfo = 
{
	"i18nDisabled", &t124_0_0_17, &t722_TI, offsetof(t722_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t158_0_0_49;
FieldInfo t722_f7_FieldInfo = 
{
	"encodings", &t158_0_0_49, &t722_TI, offsetof(t722_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_3;
FieldInfo t722_f8_FieldInfo = 
{
	"body_name", &t2_0_0_3, &t722_TI, offsetof(t722, f8), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_3;
FieldInfo t722_f9_FieldInfo = 
{
	"encoding_name", &t2_0_0_3, &t722_TI, offsetof(t722, f9), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_3;
FieldInfo t722_f10_FieldInfo = 
{
	"header_name", &t2_0_0_3, &t722_TI, offsetof(t722, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t722_f11_FieldInfo = 
{
	"is_mail_news_display", &t124_0_0_3, &t722_TI, offsetof(t722, f11), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t722_f12_FieldInfo = 
{
	"is_mail_news_save", &t124_0_0_3, &t722_TI, offsetof(t722, f12), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t722_f13_FieldInfo = 
{
	"is_browser_save", &t124_0_0_3, &t722_TI, offsetof(t722, f13), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t722_f14_FieldInfo = 
{
	"is_browser_display", &t124_0_0_3, &t722_TI, offsetof(t722, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_3;
FieldInfo t722_f15_FieldInfo = 
{
	"web_name", &t2_0_0_3, &t722_TI, offsetof(t722, f15), &EmptyCustomAttributesCache};
extern Il2CppType t722_0_0_17;
FieldInfo t722_f16_FieldInfo = 
{
	"asciiEncoding", &t722_0_0_17, &t722_TI, offsetof(t722_SFs, f16), &EmptyCustomAttributesCache};
extern Il2CppType t722_0_0_17;
FieldInfo t722_f17_FieldInfo = 
{
	"bigEndianEncoding", &t722_0_0_17, &t722_TI, offsetof(t722_SFs, f17), &EmptyCustomAttributesCache};
extern Il2CppType t722_0_0_17;
FieldInfo t722_f18_FieldInfo = 
{
	"defaultEncoding", &t722_0_0_17, &t722_TI, offsetof(t722_SFs, f18), &EmptyCustomAttributesCache};
extern Il2CppType t722_0_0_17;
FieldInfo t722_f19_FieldInfo = 
{
	"utf7Encoding", &t722_0_0_17, &t722_TI, offsetof(t722_SFs, f19), &EmptyCustomAttributesCache};
extern Il2CppType t722_0_0_17;
FieldInfo t722_f20_FieldInfo = 
{
	"utf8EncodingWithMarkers", &t722_0_0_17, &t722_TI, offsetof(t722_SFs, f20), &EmptyCustomAttributesCache};
extern Il2CppType t722_0_0_17;
FieldInfo t722_f21_FieldInfo = 
{
	"utf8EncodingWithoutMarkers", &t722_0_0_17, &t722_TI, offsetof(t722_SFs, f21), &EmptyCustomAttributesCache};
extern Il2CppType t722_0_0_17;
FieldInfo t722_f22_FieldInfo = 
{
	"unicodeEncoding", &t722_0_0_17, &t722_TI, offsetof(t722_SFs, f22), &EmptyCustomAttributesCache};
extern Il2CppType t722_0_0_17;
FieldInfo t722_f23_FieldInfo = 
{
	"isoLatin1Encoding", &t722_0_0_17, &t722_TI, offsetof(t722_SFs, f23), &EmptyCustomAttributesCache};
extern Il2CppType t722_0_0_17;
FieldInfo t722_f24_FieldInfo = 
{
	"utf8EncodingUnsafe", &t722_0_0_17, &t722_TI, offsetof(t722_SFs, f24), &EmptyCustomAttributesCache};
extern Il2CppType t722_0_0_17;
FieldInfo t722_f25_FieldInfo = 
{
	"utf32Encoding", &t722_0_0_17, &t722_TI, offsetof(t722_SFs, f25), &EmptyCustomAttributesCache};
extern Il2CppType t722_0_0_17;
FieldInfo t722_f26_FieldInfo = 
{
	"bigEndianUTF32Encoding", &t722_0_0_17, &t722_TI, offsetof(t722_SFs, f26), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_49;
FieldInfo t722_f27_FieldInfo = 
{
	"lockobj", &t9_0_0_49, &t722_TI, offsetof(t722_SFs, f27), &EmptyCustomAttributesCache};
static FieldInfo* t722_FIs[] =
{
	&t722_f0_FieldInfo,
	&t722_f1_FieldInfo,
	&t722_f2_FieldInfo,
	&t722_f3_FieldInfo,
	&t722_f4_FieldInfo,
	&t722_f5_FieldInfo,
	&t722_f6_FieldInfo,
	&t722_f7_FieldInfo,
	&t722_f8_FieldInfo,
	&t722_f9_FieldInfo,
	&t722_f10_FieldInfo,
	&t722_f11_FieldInfo,
	&t722_f12_FieldInfo,
	&t722_f13_FieldInfo,
	&t722_f14_FieldInfo,
	&t722_f15_FieldInfo,
	&t722_f16_FieldInfo,
	&t722_f17_FieldInfo,
	&t722_f18_FieldInfo,
	&t722_f19_FieldInfo,
	&t722_f20_FieldInfo,
	&t722_f21_FieldInfo,
	&t722_f22_FieldInfo,
	&t722_f23_FieldInfo,
	&t722_f24_FieldInfo,
	&t722_f25_FieldInfo,
	&t722_f26_FieldInfo,
	&t722_f27_FieldInfo,
	NULL
};
extern MethodInfo m10816_MI;
extern CustomAttributesCache t722__CustomAttributeCache_t722____IsReadOnly_PropertyInfo;
static PropertyInfo t722____IsReadOnly_PropertyInfo = 
{
	&t722_TI, "IsReadOnly", &m10816_MI, NULL, 0, &t722__CustomAttributeCache_t722____IsReadOnly_PropertyInfo};
extern MethodInfo m10817_MI;
extern MethodInfo m10818_MI;
extern CustomAttributesCache t722__CustomAttributeCache_t722____DecoderFallback_PropertyInfo;
static PropertyInfo t722____DecoderFallback_PropertyInfo = 
{
	&t722_TI, "DecoderFallback", &m10817_MI, &m10818_MI, 0, &t722__CustomAttributeCache_t722____DecoderFallback_PropertyInfo};
extern MethodInfo m10819_MI;
extern CustomAttributesCache t722__CustomAttributeCache_t722____EncoderFallback_PropertyInfo;
static PropertyInfo t722____EncoderFallback_PropertyInfo = 
{
	&t722_TI, "EncoderFallback", &m10819_MI, NULL, 0, &t722__CustomAttributeCache_t722____EncoderFallback_PropertyInfo};
static PropertyInfo t722____HeaderName_PropertyInfo = 
{
	&t722_TI, "HeaderName", &m4268_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t722____WebName_PropertyInfo = 
{
	&t722_TI, "WebName", &m4275_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m4242_MI;
static PropertyInfo t722____ASCII_PropertyInfo = 
{
	&t722_TI, "ASCII", &m4242_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6890_MI;
static PropertyInfo t722____BigEndianUnicode_PropertyInfo = 
{
	&t722_TI, "BigEndianUnicode", &m6890_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10832_MI;
static PropertyInfo t722____Default_PropertyInfo = 
{
	&t722_TI, "Default", &m10832_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10833_MI;
static PropertyInfo t722____ISOLatin1_PropertyInfo = 
{
	&t722_TI, "ISOLatin1", &m10833_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6902_MI;
static PropertyInfo t722____UTF7_PropertyInfo = 
{
	&t722_TI, "UTF7", &m6902_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m4249_MI;
static PropertyInfo t722____UTF8_PropertyInfo = 
{
	&t722_TI, "UTF8", &m4249_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10834_MI;
static PropertyInfo t722____UTF8Unmarked_PropertyInfo = 
{
	&t722_TI, "UTF8Unmarked", &m10834_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10835_MI;
static PropertyInfo t722____UTF8UnmarkedUnsafe_PropertyInfo = 
{
	&t722_TI, "UTF8UnmarkedUnsafe", &m10835_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10836_MI;
static PropertyInfo t722____Unicode_PropertyInfo = 
{
	&t722_TI, "Unicode", &m10836_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10837_MI;
static PropertyInfo t722____UTF32_PropertyInfo = 
{
	&t722_TI, "UTF32", &m10837_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10838_MI;
static PropertyInfo t722____BigEndianUTF32_PropertyInfo = 
{
	&t722_TI, "BigEndianUTF32", &m10838_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t722_PIs[] =
{
	&t722____IsReadOnly_PropertyInfo,
	&t722____DecoderFallback_PropertyInfo,
	&t722____EncoderFallback_PropertyInfo,
	&t722____HeaderName_PropertyInfo,
	&t722____WebName_PropertyInfo,
	&t722____ASCII_PropertyInfo,
	&t722____BigEndianUnicode_PropertyInfo,
	&t722____Default_PropertyInfo,
	&t722____ISOLatin1_PropertyInfo,
	&t722____UTF7_PropertyInfo,
	&t722____UTF8_PropertyInfo,
	&t722____UTF8Unmarked_PropertyInfo,
	&t722____UTF8UnmarkedUnsafe_PropertyInfo,
	&t722____Unicode_PropertyInfo,
	&t722____UTF32_PropertyInfo,
	&t722____BigEndianUTF32_PropertyInfo,
	NULL
};
static const Il2CppType* t722_TI__nestedTypes[1] =
{
	&t2047_0_0_0,
};
extern MethodInfo m10822_MI;
extern MethodInfo m6891_MI;
extern MethodInfo m10826_MI;
extern MethodInfo m4241_MI;
extern MethodInfo m10839_MI;
extern MethodInfo m10840_MI;
static Il2CppMethodReference t722_VT[] =
{
	&m10821_MI,
	&m646_MI,
	&m10829_MI,
	&m673_MI,
	NULL,
	&m10822_MI,
	&m10823_MI,
	NULL,
	&m6891_MI,
	&m4264_MI,
	&m10824_MI,
	&m5957_MI,
	NULL,
	NULL,
	&m10825_MI,
	&m10826_MI,
	NULL,
	NULL,
	&m10830_MI,
	&m4241_MI,
	&m5800_MI,
	&m4268_MI,
	&m4275_MI,
	&m10839_MI,
	&m10840_MI,
};
static bool t722_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t722_ITIs[] = 
{
	&t615_0_0_0,
};
static Il2CppInterfaceOffsetPair t722_IOs[] = 
{
	{ &t615_0_0_0, 4},
};
void t722_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t330_TI;
#include "t330.h"
#include "t330MD.h"
extern MethodInfo m1205_MI;
void t722_CustomAttributesCacheGenerator_t722_m10827_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t330 * tmp;
		tmp = (t330 *)il2cpp_codegen_object_new (&t330_TI);
		m1205(tmp, &m1205_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t722_CustomAttributesCacheGenerator_m10839(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1143 * tmp;
		tmp = (t1143 *)il2cpp_codegen_object_new (&t1143_TI);
		m4773(tmp, false, &m4773_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t722_CustomAttributesCacheGenerator_m10840(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1143 * tmp;
		tmp = (t1143 *)il2cpp_codegen_object_new (&t1143_TI);
		m4773(tmp, false, &m4773_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t722_CustomAttributesCacheGenerator_t722____IsReadOnly_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t722_CustomAttributesCacheGenerator_t722____DecoderFallback_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t722_CustomAttributesCacheGenerator_t722____EncoderFallback_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t722__CustomAttributeCache = {
1,
NULL,
&t722_CustomAttributesCacheGenerator
};
CustomAttributesCache t722__CustomAttributeCache_t722_m10827_Arg1_ParameterInfo = {
1,
NULL,
&t722_CustomAttributesCacheGenerator_t722_m10827_Arg1_ParameterInfo
};
CustomAttributesCache t722__CustomAttributeCache_m10839 = {
2,
NULL,
&t722_CustomAttributesCacheGenerator_m10839
};
CustomAttributesCache t722__CustomAttributeCache_m10840 = {
2,
NULL,
&t722_CustomAttributesCacheGenerator_m10840
};
CustomAttributesCache t722__CustomAttributeCache_t722____IsReadOnly_PropertyInfo = {
1,
NULL,
&t722_CustomAttributesCacheGenerator_t722____IsReadOnly_PropertyInfo
};
CustomAttributesCache t722__CustomAttributeCache_t722____DecoderFallback_PropertyInfo = {
1,
NULL,
&t722_CustomAttributesCacheGenerator_t722____DecoderFallback_PropertyInfo
};
CustomAttributesCache t722__CustomAttributeCache_t722____EncoderFallback_PropertyInfo = {
1,
NULL,
&t722_CustomAttributesCacheGenerator_t722____EncoderFallback_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t722_1_0_0;
struct t722;
extern CustomAttributesCache t722__CustomAttributeCache;
extern CustomAttributesCache t722__CustomAttributeCache_m10839;
extern CustomAttributesCache t722__CustomAttributeCache_m10840;
extern CustomAttributesCache t722__CustomAttributeCache_t722____IsReadOnly_PropertyInfo;
extern CustomAttributesCache t722__CustomAttributeCache_t722____DecoderFallback_PropertyInfo;
extern CustomAttributesCache t722__CustomAttributeCache_t722____EncoderFallback_PropertyInfo;
const Il2CppTypeDefinitionMetadata t722_DM = 
{
	NULL, t722_TI__nestedTypes, t722_ITIs, t722_IOs, &t9_0_0_0, t722_VT, t722_VTIGM, NULL};
TypeInfo t722_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Encoding", "System.Text", t722_MIs, t722_PIs, t722_FIs, NULL, &t722_TI, NULL, &t722__CustomAttributeCache, &t722_0_0_0, &t722_1_0_0, &t722_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t722), sizeof (t722), 0, -1, sizeof(t722_SFs), 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, true, false, 47, 16, 28, 0, 1, 25, 1, 1};
#include "t2048.h"
// Metadata Definition System.Text.Latin1Encoding
extern TypeInfo t2048_TI;
#include "t2048MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10841_MI = 
{
	".ctor", (methodPointerType)&m10841, &t2048_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4964, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2048_m10842_ParameterInfos[] = 
{
	{"chars", 0, 134223666, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"index", 1, 134223667, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223668, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10842_MI = 
{
	"GetByteCount", (methodPointerType)&m10842, &t2048_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t2048_m10842_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 3, false, false, 4965, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2048_m10843_ParameterInfos[] = 
{
	{"s", 0, 134223669, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10843_MI = 
{
	"GetByteCount", (methodPointerType)&m10843, &t2048_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t2048_m10843_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4966, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2048_m10844_ParameterInfos[] = 
{
	{"chars", 0, 134223670, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"charIndex", 1, 134223671, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223672, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223673, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 4, 134223674, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10844_MI = 
{
	"GetBytes", (methodPointerType)&m10844, &t2048_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2048_m10844_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 5, false, false, 4967, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2033_1_0_0;
extern Il2CppType t305_1_0_0;
static ParameterInfo t2048_m10845_ParameterInfos[] = 
{
	{"chars", 0, 134223675, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"charIndex", 1, 134223676, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223677, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223678, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 4, 134223679, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"buffer", 5, 134223680, &EmptyCustomAttributesCache, &t2033_1_0_0},
	{"fallback_chars", 6, 134223681, &EmptyCustomAttributesCache, &t305_1_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2634_t2635 (MethodInfo* method, void* obj, void** args);
MethodInfo m10845_MI = 
{
	"GetBytes", (methodPointerType)&m10845, &t2048_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2634_t2635, t2048_m10845_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4968, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2048_m10846_ParameterInfos[] = 
{
	{"s", 0, 134223682, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"charIndex", 1, 134223683, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223684, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223685, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 4, 134223686, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10846_MI = 
{
	"GetBytes", (methodPointerType)&m10846, &t2048_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2048_m10846_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 5, false, false, 4969, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2033_1_0_0;
extern Il2CppType t305_1_0_0;
static ParameterInfo t2048_m10847_ParameterInfos[] = 
{
	{"s", 0, 134223687, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"charIndex", 1, 134223688, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223689, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223690, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 4, 134223691, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"buffer", 5, 134223692, &EmptyCustomAttributesCache, &t2033_1_0_0},
	{"fallback_chars", 6, 134223693, &EmptyCustomAttributesCache, &t305_1_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2634_t2635 (MethodInfo* method, void* obj, void** args);
MethodInfo m10847_MI = 
{
	"GetBytes", (methodPointerType)&m10847, &t2048_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2634_t2635, t2048_m10847_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4970, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2048_m10848_ParameterInfos[] = 
{
	{"bytes", 0, 134223694, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"index", 1, 134223695, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223696, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10848_MI = 
{
	"GetCharCount", (methodPointerType)&m10848, &t2048_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t2048_m10848_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 3, false, false, 4971, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2048_m10849_ParameterInfos[] = 
{
	{"bytes", 0, 134223697, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"byteIndex", 1, 134223698, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223699, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223700, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"charIndex", 4, 134223701, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10849_MI = 
{
	"GetChars", (methodPointerType)&m10849, &t2048_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2048_m10849_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 5, false, false, 4972, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2048_m10850_ParameterInfos[] = 
{
	{"charCount", 0, 134223702, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10850_MI = 
{
	"GetMaxByteCount", (methodPointerType)&m10850, &t2048_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t2048_m10850_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 1, false, false, 4973, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2048_m10851_ParameterInfos[] = 
{
	{"byteCount", 0, 134223703, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10851_MI = 
{
	"GetMaxCharCount", (methodPointerType)&m10851, &t2048_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t2048_m10851_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 4974, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2048_m10852_ParameterInfos[] = 
{
	{"bytes", 0, 134223704, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"index", 1, 134223705, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223706, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10852_MI = 
{
	"GetString", (methodPointerType)&m10852, &t2048_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t2048_m10852_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 19, 3, false, false, 4975, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t2048_m10853_ParameterInfos[] = 
{
	{"bytes", 0, 134223707, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10853_MI = 
{
	"GetString", (methodPointerType)&m10853, &t2048_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t2048_m10853_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 20, 1, false, false, 4976, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10854_MI = 
{
	"get_HeaderName", (methodPointerType)&m10854, &t2048_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 21, 0, false, false, 4977, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10855_MI = 
{
	"get_WebName", (methodPointerType)&m10855, &t2048_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 22, 0, false, false, 4978, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2048_MIs[] =
{
	&m10841_MI,
	&m10842_MI,
	&m10843_MI,
	&m10844_MI,
	&m10845_MI,
	&m10846_MI,
	&m10847_MI,
	&m10848_MI,
	&m10849_MI,
	&m10850_MI,
	&m10851_MI,
	&m10852_MI,
	&m10853_MI,
	&m10854_MI,
	&m10855_MI,
	NULL
};
extern MethodInfo m10854_MI;
static PropertyInfo t2048____HeaderName_PropertyInfo = 
{
	&t2048_TI, "HeaderName", &m10854_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10855_MI;
static PropertyInfo t2048____WebName_PropertyInfo = 
{
	&t2048_TI, "WebName", &m10855_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2048_PIs[] =
{
	&t2048____HeaderName_PropertyInfo,
	&t2048____WebName_PropertyInfo,
	NULL
};
extern MethodInfo m10842_MI;
extern MethodInfo m10843_MI;
extern MethodInfo m10844_MI;
extern MethodInfo m10846_MI;
extern MethodInfo m10848_MI;
extern MethodInfo m10849_MI;
extern MethodInfo m10850_MI;
extern MethodInfo m10851_MI;
extern MethodInfo m10852_MI;
extern MethodInfo m10853_MI;
static Il2CppMethodReference t2048_VT[] =
{
	&m10821_MI,
	&m646_MI,
	&m10829_MI,
	&m673_MI,
	&m10842_MI,
	&m10843_MI,
	&m10823_MI,
	&m10844_MI,
	&m10846_MI,
	&m4264_MI,
	&m10824_MI,
	&m5957_MI,
	&m10848_MI,
	&m10849_MI,
	&m10825_MI,
	&m10826_MI,
	&m10850_MI,
	&m10851_MI,
	&m10830_MI,
	&m10852_MI,
	&m10853_MI,
	&m10854_MI,
	&m10855_MI,
	&m10839_MI,
	&m10840_MI,
};
static bool t2048_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2048_IOs[] = 
{
	{ &t615_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2048_0_0_0;
extern Il2CppType t2048_1_0_0;
struct t2048;
const Il2CppTypeDefinitionMetadata t2048_DM = 
{
	NULL, NULL, NULL, t2048_IOs, &t722_0_0_0, t2048_VT, t2048_VTIGM, NULL};
TypeInfo t2048_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Latin1Encoding", "System.Text", t2048_MIs, t2048_PIs, NULL, NULL, &t2048_TI, NULL, &EmptyCustomAttributesCache, &t2048_0_0_0, &t2048_1_0_0, &t2048_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2048), sizeof (t2048), 0, -1, 0, 0, -1, 1056768, 0, 0, false, false, false, false, false, false, false, false, false, false, 15, 2, 0, 0, 0, 25, 0, 1};
#include "t315.h"
// Metadata Definition System.Text.StringBuilder
extern TypeInfo t315_TI;
#include "t315MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t315_m10856_ParameterInfos[] = 
{
	{"value", 0, 134223708, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 1, 134223709, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length", 2, 134223710, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"capacity", 3, 134223711, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10856_MI = 
{
	".ctor", (methodPointerType)&m10856, &t315_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t125, t315_m10856_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 4979, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t315_m10857_ParameterInfos[] = 
{
	{"value", 0, 134223712, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 1, 134223713, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length", 2, 134223714, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"capacity", 3, 134223715, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"maxCapacity", 4, 134223716, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10857_MI = 
{
	".ctor", (methodPointerType)&m10857, &t315_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t125_t125, t315_m10857_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 5, false, false, 4980, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m1150_MI = 
{
	".ctor", (methodPointerType)&m1150, &t315_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4981, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t315_m4330_ParameterInfos[] = 
{
	{"capacity", 0, 134223717, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4330_MI = 
{
	".ctor", (methodPointerType)&m4330, &t315_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t315_m4330_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4982, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t315_m2487_ParameterInfos[] = 
{
	{"value", 0, 134223718, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m2487_MI = 
{
	".ctor", (methodPointerType)&m2487, &t315_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t315_m2487_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4983, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t315_m5710_ParameterInfos[] = 
{
	{"value", 0, 134223719, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"capacity", 1, 134223720, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5710_MI = 
{
	".ctor", (methodPointerType)&m5710, &t315_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t315_m5710_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4984, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t315_m10858_ParameterInfos[] = 
{
	{"info", 0, 134223721, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134223722, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10858_MI = 
{
	".ctor", (methodPointerType)&m10858, &t315_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t315_m10858_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 2, false, false, 4985, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t315_m10859_ParameterInfos[] = 
{
	{"info", 0, 134223723, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134223724, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10859_MI = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData", (methodPointerType)&m10859, &t315_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t315_m10859_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 2, false, false, 4986, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10860_MI = 
{
	"get_Capacity", (methodPointerType)&m10860, &t315_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4987, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t315_m10861_ParameterInfos[] = 
{
	{"value", 0, 134223725, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10861_MI = 
{
	"set_Capacity", (methodPointerType)&m10861, &t315_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t315_m10861_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4988, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5856_MI = 
{
	"get_Length", (methodPointerType)&m5856, &t315_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4989, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t315_m5961_ParameterInfos[] = 
{
	{"value", 0, 134223726, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5961_MI = 
{
	"set_Length", (methodPointerType)&m5961, &t315_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t315_m5961_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4990, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t315_m10862_ParameterInfos[] = 
{
	{"index", 0, 134223727, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t296_0_0_0;
extern void* RuntimeInvoker_t296_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10862_MI = 
{
	"get_Chars", (methodPointerType)&m10862, &t315_TI, &t296_0_0_0, RuntimeInvoker_t296_t125, t315_m10862_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4991, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t296_0_0_0;
static ParameterInfo t315_m10863_ParameterInfos[] = 
{
	{"index", 0, 134223728, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134223729, &EmptyCustomAttributesCache, &t296_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m10863_MI = 
{
	"set_Chars", (methodPointerType)&m10863, &t315_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t327, t315_m10863_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 2, false, false, 4992, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1156_MI = 
{
	"ToString", (methodPointerType)&m1156, &t315_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4993, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t315_m10864_ParameterInfos[] = 
{
	{"startIndex", 0, 134223730, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length", 1, 134223731, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10864_MI = 
{
	"ToString", (methodPointerType)&m10864, &t315_TI, &t2_0_0_0, RuntimeInvoker_t9_t125_t125, t315_m10864_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4994, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t315_m10865_ParameterInfos[] = 
{
	{"startIndex", 0, 134223732, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length", 1, 134223733, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10865_MI = 
{
	"Remove", (methodPointerType)&m10865, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t125_t125, t315_m10865_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4995, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t315_m10866_ParameterInfos[] = 
{
	{"oldValue", 0, 134223734, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"newValue", 1, 134223735, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10866_MI = 
{
	"Replace", (methodPointerType)&m10866, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t9_t9, t315_m10866_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4996, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t315_m10867_ParameterInfos[] = 
{
	{"oldValue", 0, 134223736, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"newValue", 1, 134223737, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 2, 134223738, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134223739, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10867_MI = 
{
	"Replace", (methodPointerType)&m10867, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t9_t9_t125_t125, t315_m10867_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 4, false, false, 4997, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t315_m1154_ParameterInfos[] = 
{
	{"value", 0, 134223740, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1154_MI = 
{
	"Append", (methodPointerType)&m1154, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t9, t315_m1154_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4998, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t315_m5786_ParameterInfos[] = 
{
	{"value", 0, 134223741, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5786_MI = 
{
	"Append", (methodPointerType)&m5786, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t125, t315_m5786_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4999, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern Il2CppType t292_0_0_0;
static ParameterInfo t315_m5723_ParameterInfos[] = 
{
	{"value", 0, 134223742, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m5723_MI = 
{
	"Append", (methodPointerType)&m5723, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t292, t315_m5723_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 5000, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t315_m5711_ParameterInfos[] = 
{
	{"value", 0, 134223743, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5711_MI = 
{
	"Append", (methodPointerType)&m5711, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t9, t315_m5711_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 5001, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
static ParameterInfo t315_m2733_ParameterInfos[] = 
{
	{"value", 0, 134223744, &EmptyCustomAttributesCache, &t296_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m2733_MI = 
{
	"Append", (methodPointerType)&m2733, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t327, t315_m2733_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 5002, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t315_m10868_ParameterInfos[] = 
{
	{"value", 0, 134223745, &EmptyCustomAttributesCache, &t296_0_0_0},
	{"repeatCount", 1, 134223746, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t327_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10868_MI = 
{
	"Append", (methodPointerType)&m10868, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t327_t125, t315_m10868_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 5003, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t315_m10869_ParameterInfos[] = 
{
	{"value", 0, 134223747, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"startIndex", 1, 134223748, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223749, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10869_MI = 
{
	"Append", (methodPointerType)&m10869, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t315_m10869_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 5004, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t315_m5871_ParameterInfos[] = 
{
	{"value", 0, 134223750, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 1, 134223751, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223752, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5871_MI = 
{
	"Append", (methodPointerType)&m5871, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t315_m5871_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 5005, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t315__CustomAttributeCache_m1155;
MethodInfo m1155_MI = 
{
	"AppendLine", (methodPointerType)&m1155, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9, NULL, &t315__CustomAttributeCache_m1155, 134, 0, 255, 0, false, false, 5006, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t315_m2405_ParameterInfos[] = 
{
	{"value", 0, 134223753, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t315__CustomAttributeCache_m2405;
MethodInfo m2405_MI = 
{
	"AppendLine", (methodPointerType)&m2405, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t9, t315_m2405_ParameterInfos, &t315__CustomAttributeCache_m2405, 134, 0, 255, 1, false, false, 5007, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t158_0_0_0;
extern CustomAttributesCache t315__CustomAttributeCache_t315_m6861_Arg1_ParameterInfo;
static ParameterInfo t315_m6861_ParameterInfos[] = 
{
	{"format", 0, 134223754, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"args", 1, 134223755, &t315__CustomAttributeCache_t315_m6861_Arg1_ParameterInfo, &t158_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6861_MI = 
{
	"AppendFormat", (methodPointerType)&m6861, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t9_t9, t315_m6861_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 5008, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t899_0_0_0;
extern Il2CppType t899_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t158_0_0_0;
extern CustomAttributesCache t315__CustomAttributeCache_t315_m10870_Arg2_ParameterInfo;
static ParameterInfo t315_m10870_ParameterInfos[] = 
{
	{"provider", 0, 134223756, &EmptyCustomAttributesCache, &t899_0_0_0},
	{"format", 1, 134223757, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"args", 2, 134223758, &t315__CustomAttributeCache_t315_m10870_Arg2_ParameterInfo, &t158_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10870_MI = 
{
	"AppendFormat", (methodPointerType)&m10870, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t315_m10870_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 5009, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t315_m5722_ParameterInfos[] = 
{
	{"format", 0, 134223759, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"arg0", 1, 134223760, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5722_MI = 
{
	"AppendFormat", (methodPointerType)&m5722, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t9_t9, t315_m5722_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 5010, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t315_m5813_ParameterInfos[] = 
{
	{"format", 0, 134223761, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"arg0", 1, 134223762, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"arg1", 2, 134223763, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5813_MI = 
{
	"AppendFormat", (methodPointerType)&m5813, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t315_m5813_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 5011, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t315_m5816_ParameterInfos[] = 
{
	{"format", 0, 134223764, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"arg0", 1, 134223765, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"arg1", 2, 134223766, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"arg2", 3, 134223767, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5816_MI = 
{
	"AppendFormat", (methodPointerType)&m5816, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t9_t9_t9_t9, t315_m5816_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 4, false, false, 5012, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t315_m10871_ParameterInfos[] = 
{
	{"index", 0, 134223768, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134223769, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10871_MI = 
{
	"Insert", (methodPointerType)&m10871, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t125_t9, t315_m10871_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 5013, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t296_0_0_0;
static ParameterInfo t315_m10872_ParameterInfos[] = 
{
	{"index", 0, 134223770, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134223771, &EmptyCustomAttributesCache, &t296_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t125_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m10872_MI = 
{
	"Insert", (methodPointerType)&m10872, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t125_t327, t315_m10872_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 5014, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t315_m10873_ParameterInfos[] = 
{
	{"index", 0, 134223772, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134223773, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"count", 2, 134223774, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t9_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10873_MI = 
{
	"Insert", (methodPointerType)&m10873, &t315_TI, &t315_0_0_0, RuntimeInvoker_t9_t125_t9_t125, t315_m10873_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 5015, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t315_m10874_ParameterInfos[] = 
{
	{"size", 0, 134223775, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10874_MI = 
{
	"InternalEnsureCapacity", (methodPointerType)&m10874, &t315_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t315_m10874_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 5016, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t315_MIs[] =
{
	&m10856_MI,
	&m10857_MI,
	&m1150_MI,
	&m4330_MI,
	&m2487_MI,
	&m5710_MI,
	&m10858_MI,
	&m10859_MI,
	&m10860_MI,
	&m10861_MI,
	&m5856_MI,
	&m5961_MI,
	&m10862_MI,
	&m10863_MI,
	&m1156_MI,
	&m10864_MI,
	&m10865_MI,
	&m10866_MI,
	&m10867_MI,
	&m1154_MI,
	&m5786_MI,
	&m5723_MI,
	&m5711_MI,
	&m2733_MI,
	&m10868_MI,
	&m10869_MI,
	&m5871_MI,
	&m1155_MI,
	&m2405_MI,
	&m6861_MI,
	&m10870_MI,
	&m5722_MI,
	&m5813_MI,
	&m5816_MI,
	&m10871_MI,
	&m10872_MI,
	&m10873_MI,
	&m10874_MI,
	NULL
};
extern Il2CppType t125_0_0_32849;
FieldInfo t315_f0_FieldInfo = 
{
	"constDefaultCapacity", &t125_0_0_32849, &t315_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t315_f1_FieldInfo = 
{
	"_length", &t125_0_0_1, &t315_TI, offsetof(t315, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t315_f2_FieldInfo = 
{
	"_str", &t2_0_0_1, &t315_TI, offsetof(t315, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t315_f3_FieldInfo = 
{
	"_cached_str", &t2_0_0_1, &t315_TI, offsetof(t315, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t315_f4_FieldInfo = 
{
	"_maxCapacity", &t125_0_0_1, &t315_TI, offsetof(t315, f4), &EmptyCustomAttributesCache};
static FieldInfo* t315_FIs[] =
{
	&t315_f0_FieldInfo,
	&t315_f1_FieldInfo,
	&t315_f2_FieldInfo,
	&t315_f3_FieldInfo,
	&t315_f4_FieldInfo,
	NULL
};
static const int32_t t315_f0_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t315_f0_DefaultValue = 
{
	&t315_f0_FieldInfo, { (char*)&t315_f0_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t315_FDVs[] = 
{
	&t315_f0_DefaultValue,
	NULL
};
extern MethodInfo m10860_MI;
extern MethodInfo m10861_MI;
static PropertyInfo t315____Capacity_PropertyInfo = 
{
	&t315_TI, "Capacity", &m10860_MI, &m10861_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5856_MI;
extern MethodInfo m5961_MI;
static PropertyInfo t315____Length_PropertyInfo = 
{
	&t315_TI, "Length", &m5856_MI, &m5961_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10862_MI;
extern MethodInfo m10863_MI;
static PropertyInfo t315____Chars_PropertyInfo = 
{
	&t315_TI, "Chars", &m10862_MI, &m10863_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t315_PIs[] =
{
	&t315____Capacity_PropertyInfo,
	&t315____Length_PropertyInfo,
	&t315____Chars_PropertyInfo,
	NULL
};
extern MethodInfo m1156_MI;
extern MethodInfo m10859_MI;
static Il2CppMethodReference t315_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m1156_MI,
	&m10859_MI,
};
static bool t315_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t315_ITIs[] = 
{
	&t616_0_0_0,
};
static Il2CppInterfaceOffsetPair t315_IOs[] = 
{
	{ &t616_0_0_0, 4},
};
extern TypeInfo t659_TI;
#include "t659.h"
#include "t659MD.h"
extern MethodInfo m3079_MI;
void t315_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t659 * tmp;
		tmp = (t659 *)il2cpp_codegen_object_new (&t659_TI);
		m3079(tmp, il2cpp_codegen_string_new_wrapper("Chars"), &m3079_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7821(tmp, il2cpp_codegen_string_new_wrapper("Serialization format not compatible with .NET"), &m7821_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t315_CustomAttributesCacheGenerator_m1155(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t315_CustomAttributesCacheGenerator_m2405(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t315_CustomAttributesCacheGenerator_t315_m6861_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t330 * tmp;
		tmp = (t330 *)il2cpp_codegen_object_new (&t330_TI);
		m1205(tmp, &m1205_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t315_CustomAttributesCacheGenerator_t315_m10870_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t330 * tmp;
		tmp = (t330 *)il2cpp_codegen_object_new (&t330_TI);
		m1205(tmp, &m1205_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t315__CustomAttributeCache = {
3,
NULL,
&t315_CustomAttributesCacheGenerator
};
CustomAttributesCache t315__CustomAttributeCache_m1155 = {
1,
NULL,
&t315_CustomAttributesCacheGenerator_m1155
};
CustomAttributesCache t315__CustomAttributeCache_m2405 = {
1,
NULL,
&t315_CustomAttributesCacheGenerator_m2405
};
CustomAttributesCache t315__CustomAttributeCache_t315_m6861_Arg1_ParameterInfo = {
1,
NULL,
&t315_CustomAttributesCacheGenerator_t315_m6861_Arg1_ParameterInfo
};
CustomAttributesCache t315__CustomAttributeCache_t315_m10870_Arg2_ParameterInfo = {
1,
NULL,
&t315_CustomAttributesCacheGenerator_t315_m10870_Arg2_ParameterInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t315_0_0_0;
struct t315;
extern CustomAttributesCache t315__CustomAttributeCache;
extern CustomAttributesCache t315__CustomAttributeCache_m1155;
extern CustomAttributesCache t315__CustomAttributeCache_m2405;
const Il2CppTypeDefinitionMetadata t315_DM = 
{
	NULL, NULL, t315_ITIs, t315_IOs, &t9_0_0_0, t315_VT, t315_VTIGM, NULL};
TypeInfo t315_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StringBuilder", "System.Text", t315_MIs, t315_PIs, t315_FIs, NULL, &t315_TI, NULL, &t315__CustomAttributeCache, &t315_0_0_0, &t315_1_0_0, &t315_DM, NULL, NULL, NULL, t315_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t315), sizeof (t315), 0, sizeof(char*), 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 38, 3, 5, 0, 0, 5, 1, 1};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
