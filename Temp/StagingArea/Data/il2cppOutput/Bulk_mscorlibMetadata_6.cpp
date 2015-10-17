#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1989.h"
// Metadata Definition System.Security.Cryptography.HMACSHA512
extern TypeInfo t1989_TI;
#include "t1989MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10438_MI = 
{
	".ctor", (methodPointerType)&m10438, &t1989_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4432, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1989_m10439_ParameterInfos[] = 
{
	{"key", 0, 134223090, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10439_MI = 
{
	".ctor", (methodPointerType)&m10439, &t1989_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1989_m10439_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4433, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10440_MI = 
{
	".cctor", (methodPointerType)&m10440, &t1989_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4434, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1989_m10441_ParameterInfos[] = 
{
	{"value", 0, 134223091, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10441_MI = 
{
	"set_ProduceLegacyHmacValues", (methodPointerType)&m10441, &t1989_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1989_m10441_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4435, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1989_MIs[] =
{
	&m10438_MI,
	&m10439_MI,
	&m10440_MI,
	&m10441_MI,
	NULL
};
extern Il2CppType t124_0_0_17;
FieldInfo t1989_f10_FieldInfo = 
{
	"legacy_mode", &t124_0_0_17, &t1989_TI, offsetof(t1989_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1989_f11_FieldInfo = 
{
	"legacy", &t124_0_0_1, &t1989_TI, offsetof(t1989, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1989_FIs[] =
{
	&t1989_f10_FieldInfo,
	&t1989_f11_FieldInfo,
	NULL
};
extern MethodInfo m10441_MI;
static PropertyInfo t1989____ProduceLegacyHmacValues_PropertyInfo = 
{
	&t1989_TI, "ProduceLegacyHmacValues", NULL, &m10441_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1989_PIs[] =
{
	&t1989____ProduceLegacyHmacValues_PropertyInfo,
	NULL
};
extern MethodInfo m671_MI;
extern MethodInfo m7054_MI;
extern MethodInfo m672_MI;
extern MethodInfo m673_MI;
extern MethodInfo m7047_MI;
extern MethodInfo m7048_MI;
extern MethodInfo m6913_MI;
extern MethodInfo m6914_MI;
extern MethodInfo m6915_MI;
extern MethodInfo m10422_MI;
extern MethodInfo m10423_MI;
extern MethodInfo m6901_MI;
extern MethodInfo m10424_MI;
extern MethodInfo m10421_MI;
extern MethodInfo m10418_MI;
extern MethodInfo m6929_MI;
static Il2CppMethodReference t1989_VT[] =
{
	&m671_MI,
	&m7054_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	&m10422_MI,
	&m10423_MI,
	&m6901_MI,
	&m10424_MI,
	&m10421_MI,
	&m10418_MI,
	&m6929_MI,
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
};
extern Il2CppType t137_0_0_0;
extern Il2CppType t1425_0_0_0;
static Il2CppInterfaceOffsetPair t1989_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
extern TypeInfo t677_TI;
#include "t677.h"
#include "t677MD.h"
extern MethodInfo m3128_MI;
void t1989_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
extern Il2CppType t1532_0_0_0;
struct t1989;
extern CustomAttributesCache t1989__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1989_DM = 
{
	NULL, NULL, NULL, t1989_IOs, &t1532_0_0_0, t1989_VT, t1989_VTIGM, NULL};
TypeInfo t1989_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACSHA512", "System.Security.Cryptography", t1989_MIs, t1989_PIs, t1989_FIs, NULL, &t1989_TI, NULL, &t1989__CustomAttributeCache, &t1989_0_0_0, &t1989_1_0_0, &t1989_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1989), sizeof (t1989), 0, -1, sizeof(t1989_SFs), 0, -1, 1, 0, 0, false, false, false, false, false, false, false, true, true, false, 4, 1, 2, 0, 0, 17, 0, 2};
#include "t1368.h"
// Metadata Definition System.Security.Cryptography.HashAlgorithm
extern TypeInfo t1368_TI;
#include "t1368MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6898_MI = 
{
	".ctor", (methodPointerType)&m6898, &t1368_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4436, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7047_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m7047, &t1368_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 4437, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m7048_MI = 
{
	"get_CanReuseTransform", (methodPointerType)&m7048, &t1368_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 4438, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1368_m5896_ParameterInfos[] = 
{
	{"buffer", 0, 134223092, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5896_MI = 
{
	"ComputeHash", (methodPointerType)&m5896, &t1368_TI, &t730_0_0_0, RuntimeInvoker_t9_t9, t1368_m5896_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4439, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1368_m6917_ParameterInfos[] = 
{
	{"buffer", 0, 134223093, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134223094, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223095, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6917_MI = 
{
	"ComputeHash", (methodPointerType)&m6917, &t1368_TI, &t730_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t1368_m6917_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4440, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1368_m6912_ParameterInfos[] = 
{
	{"hashName", 0, 134223096, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1368_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6912_MI = 
{
	"Create", (methodPointerType)&m6912, &t1368_TI, &t1368_0_0_0, RuntimeInvoker_t9_t9, t1368_m6912_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4441, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6915_MI = 
{
	"get_Hash", (methodPointerType)&m6915, &t1368_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 4442, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1368_m12099_ParameterInfos[] = 
{
	{"array", 0, 134223097, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ibStart", 1, 134223098, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223099, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12099_MI = 
{
	"HashCore", NULL, &t1368_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1368_m12099_ParameterInfos, &EmptyCustomAttributesCache, 1476, 0, 10, 3, false, false, 4443, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12100_MI = 
{
	"HashFinal", NULL, &t1368_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 1476, 0, 11, 0, false, false, 4444, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6901_MI = 
{
	"get_HashSize", (methodPointerType)&m6901, &t1368_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 12, 0, false, false, 4445, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6916_MI = 
{
	"Initialize", NULL, &t1368_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 1478, 0, 13, 0, false, false, 4446, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1368_m7049_ParameterInfos[] = 
{
	{"disposing", 0, 134223100, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m7049_MI = 
{
	"Dispose", (methodPointerType)&m7049, &t1368_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1368_m7049_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 14, 1, false, false, 4447, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1368_m6913_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223101, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 1, 134223102, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223103, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"outputBuffer", 3, 134223104, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"outputOffset", 4, 134223105, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6913_MI = 
{
	"TransformBlock", (methodPointerType)&m6913, &t1368_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t1368_m6913_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 5, false, false, 4448, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1368_m6914_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223106, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 1, 134223107, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223108, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6914_MI = 
{
	"TransformFinalBlock", (methodPointerType)&m6914, &t1368_TI, &t730_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t1368_m6914_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 3, false, false, 4449, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1368_MIs[] =
{
	&m6898_MI,
	&m7047_MI,
	&m7048_MI,
	&m5896_MI,
	&m6917_MI,
	&m6912_MI,
	&m6915_MI,
	&m12099_MI,
	&m12100_MI,
	&m6901_MI,
	&m6916_MI,
	&m7049_MI,
	&m6913_MI,
	&m6914_MI,
	NULL
};
extern Il2CppType t730_0_0_5;
FieldInfo t1368_f0_FieldInfo = 
{
	"HashValue", &t730_0_0_5, &t1368_TI, offsetof(t1368, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_4;
FieldInfo t1368_f1_FieldInfo = 
{
	"HashSizeValue", &t125_0_0_4, &t1368_TI, offsetof(t1368, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_4;
FieldInfo t1368_f2_FieldInfo = 
{
	"State", &t125_0_0_4, &t1368_TI, offsetof(t1368, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1368_f3_FieldInfo = 
{
	"disposed", &t124_0_0_1, &t1368_TI, offsetof(t1368, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1368_FIs[] =
{
	&t1368_f0_FieldInfo,
	&t1368_f1_FieldInfo,
	&t1368_f2_FieldInfo,
	&t1368_f3_FieldInfo,
	NULL
};
static PropertyInfo t1368____CanReuseTransform_PropertyInfo = 
{
	&t1368_TI, "CanReuseTransform", &m7048_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1368____Hash_PropertyInfo = 
{
	&t1368_TI, "Hash", &m6915_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1368____HashSize_PropertyInfo = 
{
	&t1368_TI, "HashSize", &m6901_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1368_PIs[] =
{
	&t1368____CanReuseTransform_PropertyInfo,
	&t1368____Hash_PropertyInfo,
	&t1368____HashSize_PropertyInfo,
	NULL
};
extern MethodInfo m646_MI;
extern MethodInfo m7049_MI;
static Il2CppMethodReference t1368_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	NULL,
	NULL,
	&m6901_MI,
	NULL,
	&m7049_MI,
};
static bool t1368_VTIGM[] =
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
static const Il2CppType* t1368_ITIs[] = 
{
	&t137_0_0_0,
	&t1425_0_0_0,
};
static Il2CppInterfaceOffsetPair t1368_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t1368_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1368__CustomAttributeCache = {
1,
NULL,
&t1368_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1368_0_0_0;
extern Il2CppType t1368_1_0_0;
extern Il2CppType t9_0_0_0;
struct t1368;
extern CustomAttributesCache t1368__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1368_DM = 
{
	NULL, NULL, t1368_ITIs, t1368_IOs, &t9_0_0_0, t1368_VT, t1368_VTIGM, NULL};
TypeInfo t1368_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HashAlgorithm", "System.Security.Cryptography", t1368_MIs, t1368_PIs, t1368_FIs, NULL, &t1368_TI, NULL, &t1368__CustomAttributeCache, &t1368_0_0_0, &t1368_1_0_0, &t1368_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1368), sizeof (t1368), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 14, 3, 4, 0, 0, 15, 2, 2};
// Metadata Definition System.Security.Cryptography.ICryptoTransform
extern TypeInfo t1425_TI;
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m11985_MI = 
{
	"get_CanReuseTransform", NULL, &t1425_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 4450, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1425_m6957_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223109, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 1, 134223110, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223111, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"outputBuffer", 3, 134223112, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"outputOffset", 4, 134223113, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6957_MI = 
{
	"TransformBlock", NULL, &t1425_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t1425_m6957_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 5, false, false, 4451, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1425_m6926_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223114, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 1, 134223115, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223116, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6926_MI = 
{
	"TransformFinalBlock", NULL, &t1425_TI, &t730_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t1425_m6926_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 3, false, false, 4452, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1425_MIs[] =
{
	&m11985_MI,
	&m6957_MI,
	&m6926_MI,
	NULL
};
extern MethodInfo m11985_MI;
static PropertyInfo t1425____CanReuseTransform_PropertyInfo = 
{
	&t1425_TI, "CanReuseTransform", &m11985_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1425_PIs[] =
{
	&t1425____CanReuseTransform_PropertyInfo,
	NULL
};
static const Il2CppType* t1425_ITIs[] = 
{
	&t137_0_0_0,
};
void t1425_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, t1425_ITIs, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1425_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICryptoTransform", "System.Security.Cryptography", t1425_MIs, t1425_PIs, NULL, NULL, &t1425_TI, NULL, &t1425__CustomAttributeCache, &t1425_0_0_0, &t1425_1_0_0, &t1425_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 1, 0, 0, 0, 0, 1, 0};
// Metadata Definition System.Security.Cryptography.ICspAsymmetricAlgorithm
extern TypeInfo t2634_TI;
static MethodInfo* t2634_MIs[] =
{
	NULL
};
void t2634_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2634__CustomAttributeCache = {
1,
NULL,
&t2634_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2634_0_0_0;
extern Il2CppType t2634_1_0_0;
struct t2634;
extern CustomAttributesCache t2634__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2634_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2634_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICspAsymmetricAlgorithm", "System.Security.Cryptography", t2634_MIs, NULL, NULL, NULL, &t2634_TI, NULL, &t2634__CustomAttributeCache, &t2634_0_0_0, &t2634_1_0_0, &t2634_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t1529.h"
// Metadata Definition System.Security.Cryptography.KeySizes
extern TypeInfo t1529_TI;
#include "t1529MD.h"
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1529_m6908_ParameterInfos[] = 
{
	{"minSize", 0, 134223117, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"maxSize", 1, 134223118, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"skipSize", 2, 134223119, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6908_MI = 
{
	".ctor", (methodPointerType)&m6908, &t1529_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t125_t125, t1529_m6908_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4453, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10442_MI = 
{
	"get_MaxSize", (methodPointerType)&m10442, &t1529_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4454, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10443_MI = 
{
	"get_MinSize", (methodPointerType)&m10443, &t1529_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4455, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10444_MI = 
{
	"get_SkipSize", (methodPointerType)&m10444, &t1529_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4456, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1529_m10445_ParameterInfos[] = 
{
	{"keySize", 0, 134223120, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10445_MI = 
{
	"IsLegal", (methodPointerType)&m10445, &t1529_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t1529_m10445_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4457, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1433_0_0_0;
extern Il2CppType t1433_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1529_m10446_ParameterInfos[] = 
{
	{"legalKeys", 0, 134223121, &EmptyCustomAttributesCache, &t1433_0_0_0},
	{"size", 1, 134223122, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10446_MI = 
{
	"IsLegalKeySize", (methodPointerType)&m10446, &t1529_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t125, t1529_m10446_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4458, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1529_MIs[] =
{
	&m6908_MI,
	&m10442_MI,
	&m10443_MI,
	&m10444_MI,
	&m10445_MI,
	&m10446_MI,
	NULL
};
extern Il2CppType t125_0_0_1;
FieldInfo t1529_f0_FieldInfo = 
{
	"_maxSize", &t125_0_0_1, &t1529_TI, offsetof(t1529, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1529_f1_FieldInfo = 
{
	"_minSize", &t125_0_0_1, &t1529_TI, offsetof(t1529, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1529_f2_FieldInfo = 
{
	"_skipSize", &t125_0_0_1, &t1529_TI, offsetof(t1529, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1529_FIs[] =
{
	&t1529_f0_FieldInfo,
	&t1529_f1_FieldInfo,
	&t1529_f2_FieldInfo,
	NULL
};
extern MethodInfo m10442_MI;
static PropertyInfo t1529____MaxSize_PropertyInfo = 
{
	&t1529_TI, "MaxSize", &m10442_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10443_MI;
static PropertyInfo t1529____MinSize_PropertyInfo = 
{
	&t1529_TI, "MinSize", &m10443_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10444_MI;
static PropertyInfo t1529____SkipSize_PropertyInfo = 
{
	&t1529_TI, "SkipSize", &m10444_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1529_PIs[] =
{
	&t1529____MaxSize_PropertyInfo,
	&t1529____MinSize_PropertyInfo,
	&t1529____SkipSize_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1529_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1529_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1529_0_0_0;
extern Il2CppType t1529_1_0_0;
struct t1529;
const Il2CppTypeDefinitionMetadata t1529_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1529_VT, t1529_VTIGM, NULL};
TypeInfo t1529_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeySizes", "System.Security.Cryptography", t1529_MIs, t1529_PIs, t1529_FIs, NULL, &t1529_TI, NULL, &EmptyCustomAttributesCache, &t1529_0_0_0, &t1529_1_0_0, &t1529_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1529), sizeof (t1529), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 3, 3, 0, 0, 4, 0, 0};
#include "t1450.h"
// Metadata Definition System.Security.Cryptography.KeyedHashAlgorithm
extern TypeInfo t1450_TI;
#include "t1450MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6955_MI = 
{
	".ctor", (methodPointerType)&m6955, &t1450_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4459, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7054_MI = 
{
	"Finalize", (methodPointerType)&m7054, &t1450_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4460, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10447_MI = 
{
	"get_Key", (methodPointerType)&m10447, &t1450_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 15, 0, false, false, 4461, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1450_m10448_ParameterInfos[] = 
{
	{"value", 0, 134223123, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10448_MI = 
{
	"set_Key", (methodPointerType)&m10448, &t1450_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1450_m10448_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 16, 1, false, false, 4462, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1450_m7055_ParameterInfos[] = 
{
	{"disposing", 0, 134223124, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m7055_MI = 
{
	"Dispose", (methodPointerType)&m7055, &t1450_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1450_m7055_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 14, 1, false, false, 4463, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10449_MI = 
{
	"ZeroizeKey", (methodPointerType)&m10449, &t1450_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4464, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1450_MIs[] =
{
	&m6955_MI,
	&m7054_MI,
	&m10447_MI,
	&m10448_MI,
	&m7055_MI,
	&m10449_MI,
	NULL
};
extern Il2CppType t730_0_0_4;
FieldInfo t1450_f4_FieldInfo = 
{
	"KeyValue", &t730_0_0_4, &t1450_TI, offsetof(t1450, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1450_FIs[] =
{
	&t1450_f4_FieldInfo,
	NULL
};
extern MethodInfo m10447_MI;
extern MethodInfo m10448_MI;
static PropertyInfo t1450____Key_PropertyInfo = 
{
	&t1450_TI, "Key", &m10447_MI, &m10448_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1450_PIs[] =
{
	&t1450____Key_PropertyInfo,
	NULL
};
extern MethodInfo m7055_MI;
static Il2CppMethodReference t1450_VT[] =
{
	&m671_MI,
	&m7054_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	NULL,
	NULL,
	&m6901_MI,
	NULL,
	&m7055_MI,
	&m10447_MI,
	&m10448_MI,
};
static bool t1450_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1450_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t1450_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1450__CustomAttributeCache = {
1,
NULL,
&t1450_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1450_0_0_0;
extern Il2CppType t1450_1_0_0;
struct t1450;
extern CustomAttributesCache t1450__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1450_DM = 
{
	NULL, NULL, NULL, t1450_IOs, &t1368_0_0_0, t1450_VT, t1450_VTIGM, NULL};
TypeInfo t1450_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyedHashAlgorithm", "System.Security.Cryptography", t1450_MIs, t1450_PIs, t1450_FIs, NULL, &t1450_TI, NULL, &t1450__CustomAttributeCache, &t1450_0_0_0, &t1450_1_0_0, &t1450_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1450), sizeof (t1450), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 1, 1, 0, 0, 17, 0, 2};
#include "t1990.h"
// Metadata Definition System.Security.Cryptography.MACTripleDES
extern TypeInfo t1990_TI;
#include "t1990MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10450_MI = 
{
	".ctor", (methodPointerType)&m10450, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4465, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1990_m10451_ParameterInfos[] = 
{
	{"strTripleDES", 0, 134223125, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"rgbKey", 1, 134223126, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10451_MI = 
{
	"Setup", (methodPointerType)&m10451, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1990_m10451_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4466, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10452_MI = 
{
	"Finalize", (methodPointerType)&m10452, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4467, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1990_m10453_ParameterInfos[] = 
{
	{"disposing", 0, 134223127, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10453_MI = 
{
	"Dispose", (methodPointerType)&m10453, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1990_m10453_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 14, 1, false, false, 4468, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10454_MI = 
{
	"Initialize", (methodPointerType)&m10454, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4469, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1990_m10455_ParameterInfos[] = 
{
	{"rgbData", 0, 134223128, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ibStart", 1, 134223129, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223130, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10455_MI = 
{
	"HashCore", (methodPointerType)&m10455, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1990_m10455_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4470, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10456_MI = 
{
	"HashFinal", (methodPointerType)&m10456, &t1990_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4471, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1990_MIs[] =
{
	&m10450_MI,
	&m10451_MI,
	&m10452_MI,
	&m10453_MI,
	&m10454_MI,
	&m10455_MI,
	&m10456_MI,
	NULL
};
extern Il2CppType t1542_0_0_1;
FieldInfo t1990_f5_FieldInfo = 
{
	"tdes", &t1542_0_0_1, &t1990_TI, offsetof(t1990, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_1;
FieldInfo t1990_f6_FieldInfo = 
{
	"mac", &t1635_0_0_1, &t1990_TI, offsetof(t1990, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1990_f7_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t1990_TI, offsetof(t1990, f7), &EmptyCustomAttributesCache};
static FieldInfo* t1990_FIs[] =
{
	&t1990_f5_FieldInfo,
	&t1990_f6_FieldInfo,
	&t1990_f7_FieldInfo,
	NULL
};
extern MethodInfo m10452_MI;
extern MethodInfo m10455_MI;
extern MethodInfo m10456_MI;
extern MethodInfo m10454_MI;
extern MethodInfo m10453_MI;
static Il2CppMethodReference t1990_VT[] =
{
	&m671_MI,
	&m10452_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	&m10455_MI,
	&m10456_MI,
	&m6901_MI,
	&m10454_MI,
	&m10453_MI,
	&m10447_MI,
	&m10448_MI,
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
};
static Il2CppInterfaceOffsetPair t1990_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t1990_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1990__CustomAttributeCache = {
1,
NULL,
&t1990_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1990_0_0_0;
extern Il2CppType t1990_1_0_0;
struct t1990;
extern CustomAttributesCache t1990__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1990_DM = 
{
	NULL, NULL, NULL, t1990_IOs, &t1450_0_0_0, t1990_VT, t1990_VTIGM, NULL};
TypeInfo t1990_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MACTripleDES", "System.Security.Cryptography", t1990_MIs, NULL, t1990_FIs, NULL, &t1990_TI, NULL, &t1990__CustomAttributeCache, &t1990_0_0_0, &t1990_1_0_0, &t1990_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1990), sizeof (t1990), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 7, 0, 3, 0, 0, 17, 0, 2};
#include "t1533.h"
// Metadata Definition System.Security.Cryptography.MD5
extern TypeInfo t1533_TI;
#include "t1533MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10457_MI = 
{
	".ctor", (methodPointerType)&m10457, &t1533_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4472, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1533_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6932_MI = 
{
	"Create", (methodPointerType)&m6932, &t1533_TI, &t1533_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4473, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1533_m10458_ParameterInfos[] = 
{
	{"algName", 0, 134223131, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1533_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10458_MI = 
{
	"Create", (methodPointerType)&m10458, &t1533_TI, &t1533_0_0_0, RuntimeInvoker_t9_t9, t1533_m10458_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4474, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1533_MIs[] =
{
	&m10457_MI,
	&m6932_MI,
	&m10458_MI,
	NULL
};
static Il2CppMethodReference t1533_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	NULL,
	NULL,
	&m6901_MI,
	NULL,
	&m7049_MI,
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
};
static Il2CppInterfaceOffsetPair t1533_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t1533_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, NULL, t1533_IOs, &t1368_0_0_0, t1533_VT, t1533_VTIGM, NULL};
TypeInfo t1533_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MD5", "System.Security.Cryptography", t1533_MIs, NULL, NULL, NULL, &t1533_TI, NULL, &t1533__CustomAttributeCache, &t1533_0_0_0, &t1533_1_0_0, &t1533_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1533), sizeof (t1533), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 15, 0, 2};
#include "t1991.h"
// Metadata Definition System.Security.Cryptography.MD5CryptoServiceProvider
extern TypeInfo t1991_TI;
#include "t1991MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10459_MI = 
{
	".ctor", (methodPointerType)&m10459, &t1991_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4475, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10460_MI = 
{
	".cctor", (methodPointerType)&m10460, &t1991_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4476, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10461_MI = 
{
	"Finalize", (methodPointerType)&m10461, &t1991_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4477, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1991_m10462_ParameterInfos[] = 
{
	{"disposing", 0, 134223132, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10462_MI = 
{
	"Dispose", (methodPointerType)&m10462, &t1991_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1991_m10462_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 14, 1, false, false, 4478, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1991_m10463_ParameterInfos[] = 
{
	{"rgb", 0, 134223133, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ibStart", 1, 134223134, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223135, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10463_MI = 
{
	"HashCore", (methodPointerType)&m10463, &t1991_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1991_m10463_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4479, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10464_MI = 
{
	"HashFinal", (methodPointerType)&m10464, &t1991_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4480, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10465_MI = 
{
	"Initialize", (methodPointerType)&m10465, &t1991_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4481, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1991_m10466_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223136, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 1, 134223137, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10466_MI = 
{
	"ProcessBlock", (methodPointerType)&m10466, &t1991_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1991_m10466_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4482, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1991_m10467_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223138, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 1, 134223139, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223140, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10467_MI = 
{
	"ProcessFinalBlock", (methodPointerType)&m10467, &t1991_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1991_m10467_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4483, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
extern Il2CppType t889_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1991_m10468_ParameterInfos[] = 
{
	{"length", 0, 134223141, &EmptyCustomAttributesCache, &t889_0_0_0},
	{"buffer", 1, 134223142, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"position", 2, 134223143, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10468_MI = 
{
	"AddLength", (methodPointerType)&m10468, &t1991_TI, &t122_0_0_0, RuntimeInvoker_t122_t299_t9_t125, t1991_m10468_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 3, false, false, 4484, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1991_MIs[] =
{
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
	NULL
};
extern Il2CppType t1412_0_0_1;
FieldInfo t1991_f4_FieldInfo = 
{
	"_H", &t1412_0_0_1, &t1991_TI, offsetof(t1991, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_1;
FieldInfo t1991_f5_FieldInfo = 
{
	"buff", &t1412_0_0_1, &t1991_TI, offsetof(t1991, f5), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t1991_f6_FieldInfo = 
{
	"count", &t889_0_0_1, &t1991_TI, offsetof(t1991, f6), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t1991_f7_FieldInfo = 
{
	"_ProcessingBuffer", &t730_0_0_1, &t1991_TI, offsetof(t1991, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1991_f8_FieldInfo = 
{
	"_ProcessingBufferCount", &t125_0_0_1, &t1991_TI, offsetof(t1991, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_49;
FieldInfo t1991_f9_FieldInfo = 
{
	"K", &t1412_0_0_49, &t1991_TI, offsetof(t1991_SFs, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1991_FIs[] =
{
	&t1991_f4_FieldInfo,
	&t1991_f5_FieldInfo,
	&t1991_f6_FieldInfo,
	&t1991_f7_FieldInfo,
	&t1991_f8_FieldInfo,
	&t1991_f9_FieldInfo,
	NULL
};
extern MethodInfo m10461_MI;
extern MethodInfo m10463_MI;
extern MethodInfo m10464_MI;
extern MethodInfo m10465_MI;
extern MethodInfo m10462_MI;
static Il2CppMethodReference t1991_VT[] =
{
	&m671_MI,
	&m10461_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	&m10463_MI,
	&m10464_MI,
	&m6901_MI,
	&m10465_MI,
	&m10462_MI,
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
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1991_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t1991_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, NULL, t1991_IOs, &t1533_0_0_0, t1991_VT, t1991_VTIGM, NULL};
TypeInfo t1991_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MD5CryptoServiceProvider", "System.Security.Cryptography", t1991_MIs, NULL, t1991_FIs, NULL, &t1991_TI, NULL, &t1991__CustomAttributeCache, &t1991_0_0_0, &t1991_1_0_0, &t1991_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1991), sizeof (t1991), 0, -1, sizeof(t1991_SFs), 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, true, false, 10, 0, 6, 0, 0, 15, 0, 2};
#include "t1544.h"
// Metadata Definition System.Security.Cryptography.PaddingMode
extern TypeInfo t1544_TI;
#include "t1544MD.h"
static MethodInfo* t1544_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1544_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1544_TI, offsetof(t1544, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1544_0_0_32854;
FieldInfo t1544_f2_FieldInfo = 
{
	"None", &t1544_0_0_32854, &t1544_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1544_0_0_32854;
FieldInfo t1544_f3_FieldInfo = 
{
	"PKCS7", &t1544_0_0_32854, &t1544_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1544_0_0_32854;
FieldInfo t1544_f4_FieldInfo = 
{
	"Zeros", &t1544_0_0_32854, &t1544_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1544_0_0_32854;
FieldInfo t1544_f5_FieldInfo = 
{
	"ANSIX923", &t1544_0_0_32854, &t1544_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1544_0_0_32854;
FieldInfo t1544_f6_FieldInfo = 
{
	"ISO10126", &t1544_0_0_32854, &t1544_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1544_FIs[] =
{
	&t1544_f1_FieldInfo,
	&t1544_f2_FieldInfo,
	&t1544_f3_FieldInfo,
	&t1544_f4_FieldInfo,
	&t1544_f5_FieldInfo,
	&t1544_f6_FieldInfo,
	NULL
};
static const int32_t t1544_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1544_f2_DefaultValue = 
{
	&t1544_f2_FieldInfo, { (char*)&t1544_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1544_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1544_f3_DefaultValue = 
{
	&t1544_f3_FieldInfo, { (char*)&t1544_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1544_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1544_f4_DefaultValue = 
{
	&t1544_f4_FieldInfo, { (char*)&t1544_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1544_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1544_f5_DefaultValue = 
{
	&t1544_f5_FieldInfo, { (char*)&t1544_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1544_f6_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1544_f6_DefaultValue = 
{
	&t1544_f6_FieldInfo, { (char*)&t1544_f6_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1544_FDVs[] = 
{
	&t1544_f2_DefaultValue,
	&t1544_f3_DefaultValue,
	&t1544_f4_DefaultValue,
	&t1544_f5_DefaultValue,
	&t1544_f6_DefaultValue,
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
static Il2CppMethodReference t1544_VT[] =
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
static bool t1544_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1544_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1544_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1544__CustomAttributeCache = {
1,
NULL,
&t1544_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1544_0_0_0;
extern Il2CppType t1544_1_0_0;
extern Il2CppType t8_0_0_0;
#include "t125.h"
extern TypeInfo t125_TI;
extern CustomAttributesCache t1544__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1544_DM = 
{
	NULL, NULL, NULL, t1544_IOs, &t8_0_0_0, t1544_VT, t1544_VTIGM, NULL};
TypeInfo t1544_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PaddingMode", "System.Security.Cryptography", t1544_MIs, NULL, t1544_FIs, NULL, &t125_TI, NULL, &t1544__CustomAttributeCache, &t1544_0_0_0, &t1544_1_0_0, &t1544_DM, NULL, NULL, NULL, t1544_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1544)+ sizeof (Il2CppObject), sizeof (t1544)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1541.h"
// Metadata Definition System.Security.Cryptography.RC2
extern TypeInfo t1541_TI;
#include "t1541MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10469_MI = 
{
	".ctor", (methodPointerType)&m10469, &t1541_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4485, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1541_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6959_MI = 
{
	"Create", (methodPointerType)&m6959, &t1541_TI, &t1541_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4486, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1541_m10470_ParameterInfos[] = 
{
	{"AlgName", 0, 134223144, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1541_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10470_MI = 
{
	"Create", (methodPointerType)&m10470, &t1541_TI, &t1541_0_0_0, RuntimeInvoker_t9_t9, t1541_m10470_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4487, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10471_MI = 
{
	"get_EffectiveKeySize", (methodPointerType)&m10471, &t1541_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 26, 0, false, false, 4488, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10472_MI = 
{
	"get_KeySize", (methodPointerType)&m10472, &t1541_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 13, 0, false, false, 4489, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1541_m10473_ParameterInfos[] = 
{
	{"value", 0, 134223145, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10473_MI = 
{
	"set_KeySize", (methodPointerType)&m10473, &t1541_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1541_m10473_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 14, 1, false, false, 4490, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1541_MIs[] =
{
	&m10469_MI,
	&m6959_MI,
	&m10470_MI,
	&m10471_MI,
	&m10472_MI,
	&m10473_MI,
	NULL
};
extern Il2CppType t125_0_0_4;
FieldInfo t1541_f10_FieldInfo = 
{
	"EffectiveKeySizeValue", &t125_0_0_4, &t1541_TI, offsetof(t1541, f10), &EmptyCustomAttributesCache};
static FieldInfo* t1541_FIs[] =
{
	&t1541_f10_FieldInfo,
	NULL
};
extern MethodInfo m10471_MI;
static PropertyInfo t1541____EffectiveKeySize_PropertyInfo = 
{
	&t1541_TI, "EffectiveKeySize", &m10471_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10472_MI;
extern MethodInfo m10473_MI;
static PropertyInfo t1541____KeySize_PropertyInfo = 
{
	&t1541_TI, "KeySize", &m10472_MI, &m10473_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1541_PIs[] =
{
	&t1541____EffectiveKeySize_PropertyInfo,
	&t1541____KeySize_PropertyInfo,
	NULL
};
extern MethodInfo m6894_MI;
extern MethodInfo m7040_MI;
extern MethodInfo m7050_MI;
extern MethodInfo m7041_MI;
extern MethodInfo m6964_MI;
extern MethodInfo m7042_MI;
extern MethodInfo m10633_MI;
extern MethodInfo m6923_MI;
extern MethodInfo m7051_MI;
extern MethodInfo m6922_MI;
extern MethodInfo m7044_MI;
extern MethodInfo m7045_MI;
extern MethodInfo m6924_MI;
extern MethodInfo m7046_MI;
extern MethodInfo m6962_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m6896_MI;
static Il2CppMethodReference t1541_VT[] =
{
	&m671_MI,
	&m6894_MI,
	&m672_MI,
	&m673_MI,
	&m7040_MI,
	&m7050_MI,
	&m7041_MI,
	&m6964_MI,
	&m7042_MI,
	&m10633_MI,
	&m6923_MI,
	&m7051_MI,
	&m6922_MI,
	&m10472_MI,
	&m10473_MI,
	&m7044_MI,
	&m7045_MI,
	&m6924_MI,
	&m7046_MI,
	&m6962_MI,
	&m6925_MI,
	NULL,
	&m6896_MI,
	NULL,
	NULL,
	NULL,
	&m10471_MI,
};
static bool t1541_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1541_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1541_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
extern Il2CppType t1434_0_0_0;
struct t1541;
extern CustomAttributesCache t1541__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1541_DM = 
{
	NULL, NULL, NULL, t1541_IOs, &t1434_0_0_0, t1541_VT, t1541_VTIGM, NULL};
TypeInfo t1541_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RC2", "System.Security.Cryptography", t1541_MIs, t1541_PIs, t1541_FIs, NULL, &t1541_TI, NULL, &t1541__CustomAttributeCache, &t1541_0_0_0, &t1541_1_0_0, &t1541_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1541), sizeof (t1541), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 2, 1, 0, 0, 27, 0, 1};
#include "t1992.h"
// Metadata Definition System.Security.Cryptography.RC2CryptoServiceProvider
extern TypeInfo t1992_TI;
#include "t1992MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10474_MI = 
{
	".ctor", (methodPointerType)&m10474, &t1992_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4491, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10475_MI = 
{
	"get_EffectiveKeySize", (methodPointerType)&m10475, &t1992_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 26, 0, false, false, 4492, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1992_m10476_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223146, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"rgbIV", 1, 134223147, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t1425_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10476_MI = 
{
	"CreateDecryptor", (methodPointerType)&m10476, &t1992_TI, &t1425_0_0_0, RuntimeInvoker_t9_t9_t9, t1992_m10476_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 21, 2, false, false, 4493, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1992_m10477_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223148, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"rgbIV", 1, 134223149, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t1425_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10477_MI = 
{
	"CreateEncryptor", (methodPointerType)&m10477, &t1992_TI, &t1425_0_0_0, RuntimeInvoker_t9_t9_t9, t1992_m10477_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 2, false, false, 4494, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10478_MI = 
{
	"GenerateIV", (methodPointerType)&m10478, &t1992_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 24, 0, false, false, 4495, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10479_MI = 
{
	"GenerateKey", (methodPointerType)&m10479, &t1992_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 25, 0, false, false, 4496, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1992_MIs[] =
{
	&m10474_MI,
	&m10475_MI,
	&m10476_MI,
	&m10477_MI,
	&m10478_MI,
	&m10479_MI,
	NULL
};
extern MethodInfo m10475_MI;
static PropertyInfo t1992____EffectiveKeySize_PropertyInfo = 
{
	&t1992_TI, "EffectiveKeySize", &m10475_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1992_PIs[] =
{
	&t1992____EffectiveKeySize_PropertyInfo,
	NULL
};
extern MethodInfo m10476_MI;
extern MethodInfo m10477_MI;
extern MethodInfo m10478_MI;
extern MethodInfo m10479_MI;
static Il2CppMethodReference t1992_VT[] =
{
	&m671_MI,
	&m6894_MI,
	&m672_MI,
	&m673_MI,
	&m7040_MI,
	&m7050_MI,
	&m7041_MI,
	&m6964_MI,
	&m7042_MI,
	&m10633_MI,
	&m6923_MI,
	&m7051_MI,
	&m6922_MI,
	&m10472_MI,
	&m10473_MI,
	&m7044_MI,
	&m7045_MI,
	&m6924_MI,
	&m7046_MI,
	&m6962_MI,
	&m6925_MI,
	&m10476_MI,
	&m6896_MI,
	&m10477_MI,
	&m10478_MI,
	&m10479_MI,
	&m10475_MI,
};
static bool t1992_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1992_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1992_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1992__CustomAttributeCache = {
1,
NULL,
&t1992_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1992_0_0_0;
extern Il2CppType t1992_1_0_0;
struct t1992;
extern CustomAttributesCache t1992__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1992_DM = 
{
	NULL, NULL, NULL, t1992_IOs, &t1541_0_0_0, t1992_VT, t1992_VTIGM, NULL};
TypeInfo t1992_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RC2CryptoServiceProvider", "System.Security.Cryptography", t1992_MIs, t1992_PIs, NULL, NULL, &t1992_TI, NULL, &t1992__CustomAttributeCache, &t1992_0_0_0, &t1992_1_0_0, &t1992_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1992), sizeof (t1992), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 1, 0, 0, 0, 27, 0, 1};
#include "t1993.h"
// Metadata Definition System.Security.Cryptography.RC2Transform
extern TypeInfo t1993_TI;
#include "t1993MD.h"
extern Il2CppType t1541_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1993_m10480_ParameterInfos[] = 
{
	{"rc2Algo", 0, 134223150, &EmptyCustomAttributesCache, &t1541_0_0_0},
	{"encryption", 1, 134223151, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"key", 2, 134223152, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"iv", 3, 134223153, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10480_MI = 
{
	".ctor", (methodPointerType)&m10480, &t1993_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t9_t9, t1993_m10480_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 4497, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10481_MI = 
{
	".cctor", (methodPointerType)&m10481, &t1993_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4498, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1993_m10482_ParameterInfos[] = 
{
	{"input", 0, 134223154, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"output", 1, 134223155, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10482_MI = 
{
	"ECB", (methodPointerType)&m10482, &t1993_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1993_m10482_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 2, false, false, 4499, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1993_MIs[] =
{
	&m10480_MI,
	&m10481_MI,
	&m10482_MI,
	NULL
};
extern Il2CppType t309_0_0_1;
FieldInfo t1993_f12_FieldInfo = 
{
	"R0", &t309_0_0_1, &t1993_TI, offsetof(t1993, f12), &EmptyCustomAttributesCache};
extern Il2CppType t309_0_0_1;
FieldInfo t1993_f13_FieldInfo = 
{
	"R1", &t309_0_0_1, &t1993_TI, offsetof(t1993, f13), &EmptyCustomAttributesCache};
extern Il2CppType t309_0_0_1;
FieldInfo t1993_f14_FieldInfo = 
{
	"R2", &t309_0_0_1, &t1993_TI, offsetof(t1993, f14), &EmptyCustomAttributesCache};
extern Il2CppType t309_0_0_1;
FieldInfo t1993_f15_FieldInfo = 
{
	"R3", &t309_0_0_1, &t1993_TI, offsetof(t1993, f15), &EmptyCustomAttributesCache};
extern Il2CppType t311_0_0_1;
FieldInfo t1993_f16_FieldInfo = 
{
	"K", &t311_0_0_1, &t1993_TI, offsetof(t1993, f16), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1993_f17_FieldInfo = 
{
	"j", &t125_0_0_1, &t1993_TI, offsetof(t1993, f17), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_49;
FieldInfo t1993_f18_FieldInfo = 
{
	"pitable", &t730_0_0_49, &t1993_TI, offsetof(t1993_SFs, f18), &EmptyCustomAttributesCache};
static FieldInfo* t1993_FIs[] =
{
	&t1993_f12_FieldInfo,
	&t1993_f13_FieldInfo,
	&t1993_f14_FieldInfo,
	&t1993_f15_FieldInfo,
	&t1993_f16_FieldInfo,
	&t1993_f17_FieldInfo,
	&t1993_f18_FieldInfo,
	NULL
};
extern MethodInfo m8168_MI;
extern MethodInfo m8167_MI;
extern MethodInfo m8170_MI;
extern MethodInfo m8177_MI;
extern MethodInfo m8184_MI;
extern MethodInfo m8169_MI;
extern MethodInfo m8171_MI;
extern MethodInfo m10482_MI;
extern MethodInfo m8172_MI;
extern MethodInfo m8173_MI;
extern MethodInfo m8174_MI;
extern MethodInfo m8175_MI;
static Il2CppMethodReference t1993_VT[] =
{
	&m671_MI,
	&m8168_MI,
	&m672_MI,
	&m673_MI,
	&m8167_MI,
	&m8170_MI,
	&m8177_MI,
	&m8184_MI,
	&m8169_MI,
	&m8170_MI,
	&m8171_MI,
	&m10482_MI,
	&m8172_MI,
	&m8173_MI,
	&m8174_MI,
	&m8175_MI,
	&m8177_MI,
	&m8184_MI,
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
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1993_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1993_0_0_0;
extern Il2CppType t1993_1_0_0;
extern Il2CppType t1642_0_0_0;
struct t1993;
const Il2CppTypeDefinitionMetadata t1993_DM = 
{
	NULL, NULL, NULL, t1993_IOs, &t1642_0_0_0, t1993_VT, t1993_VTIGM, NULL};
TypeInfo t1993_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RC2Transform", "System.Security.Cryptography", t1993_MIs, NULL, t1993_FIs, NULL, &t1993_TI, NULL, &EmptyCustomAttributesCache, &t1993_0_0_0, &t1993_1_0_0, &t1993_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1993), sizeof (t1993), 0, -1, sizeof(t1993_SFs), 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, true, true, false, 3, 0, 7, 0, 0, 18, 0, 2};
#include "t1994.h"
// Metadata Definition System.Security.Cryptography.RIPEMD160
extern TypeInfo t1994_TI;
#include "t1994MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10483_MI = 
{
	".ctor", (methodPointerType)&m10483, &t1994_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4500, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1994_MIs[] =
{
	&m10483_MI,
	NULL
};
static Il2CppMethodReference t1994_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	NULL,
	NULL,
	&m6901_MI,
	NULL,
	&m7049_MI,
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
	{ &t1425_0_0_0, 5},
};
void t1994_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, NULL, t1994_IOs, &t1368_0_0_0, t1994_VT, t1994_VTIGM, NULL};
TypeInfo t1994_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RIPEMD160", "System.Security.Cryptography", t1994_MIs, NULL, NULL, NULL, &t1994_TI, NULL, &t1994__CustomAttributeCache, &t1994_0_0_0, &t1994_1_0_0, &t1994_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1994), sizeof (t1994), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 15, 0, 2};
#include "t1995.h"
// Metadata Definition System.Security.Cryptography.RIPEMD160Managed
extern TypeInfo t1995_TI;
#include "t1995MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10484_MI = 
{
	".ctor", (methodPointerType)&m10484, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4501, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10485_MI = 
{
	"Initialize", (methodPointerType)&m10485, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4502, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10486_ParameterInfos[] = 
{
	{"rgb", 0, 134223156, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ibStart", 1, 134223157, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223158, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10486_MI = 
{
	"HashCore", (methodPointerType)&m10486, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1995_m10486_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4503, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10487_MI = 
{
	"HashFinal", (methodPointerType)&m10487, &t1995_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4504, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10488_MI = 
{
	"Finalize", (methodPointerType)&m10488, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4505, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10489_ParameterInfos[] = 
{
	{"buffer", 0, 134223159, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134223160, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10489_MI = 
{
	"ProcessBlock", (methodPointerType)&m10489, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1995_m10489_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4506, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10490_MI = 
{
	"Compress", (methodPointerType)&m10490, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4507, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
static ParameterInfo t1995_m10491_ParameterInfos[] = 
{
	{"length", 0, 134223161, &EmptyCustomAttributesCache, &t889_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10491_MI = 
{
	"CompressFinal", (methodPointerType)&m10491, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t299, t1995_m10491_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4508, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10492_ParameterInfos[] = 
{
	{"x", 0, 134223162, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"n", 1, 134223163, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10492_MI = 
{
	"ROL", (methodPointerType)&m10492, &t1995_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125, t1995_m10492_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4509, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1995_m10493_ParameterInfos[] = 
{
	{"x", 0, 134223164, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"y", 1, 134223165, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"z", 2, 134223166, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10493_MI = 
{
	"F", (methodPointerType)&m10493, &t1995_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125_t125, t1995_m10493_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4510, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1995_m10494_ParameterInfos[] = 
{
	{"x", 0, 134223167, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"y", 1, 134223168, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"z", 2, 134223169, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10494_MI = 
{
	"G", (methodPointerType)&m10494, &t1995_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125_t125, t1995_m10494_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4511, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1995_m10495_ParameterInfos[] = 
{
	{"x", 0, 134223170, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"y", 1, 134223171, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"z", 2, 134223172, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10495_MI = 
{
	"H", (methodPointerType)&m10495, &t1995_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125_t125, t1995_m10495_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4512, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1995_m10496_ParameterInfos[] = 
{
	{"x", 0, 134223173, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"y", 1, 134223174, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"z", 2, 134223175, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10496_MI = 
{
	"I", (methodPointerType)&m10496, &t1995_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125_t125, t1995_m10496_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4513, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1995_m10497_ParameterInfos[] = 
{
	{"x", 0, 134223176, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"y", 1, 134223177, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"z", 2, 134223178, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10497_MI = 
{
	"J", (methodPointerType)&m10497, &t1995_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125_t125, t1995_m10497_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4514, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10498_ParameterInfos[] = 
{
	{"a", 0, 134223179, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223180, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223181, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223182, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223183, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223184, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223185, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10498_MI = 
{
	"FF", (methodPointerType)&m10498, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125, t1995_m10498_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4515, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10499_ParameterInfos[] = 
{
	{"a", 0, 134223186, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223187, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223188, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223189, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223190, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223191, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223192, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10499_MI = 
{
	"GG", (methodPointerType)&m10499, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125, t1995_m10499_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4516, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10500_ParameterInfos[] = 
{
	{"a", 0, 134223193, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223194, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223195, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223196, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223197, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223198, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223199, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10500_MI = 
{
	"HH", (methodPointerType)&m10500, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125, t1995_m10500_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4517, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10501_ParameterInfos[] = 
{
	{"a", 0, 134223200, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223201, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223202, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223203, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223204, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223205, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223206, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10501_MI = 
{
	"II", (methodPointerType)&m10501, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125, t1995_m10501_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4518, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10502_ParameterInfos[] = 
{
	{"a", 0, 134223207, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223208, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223209, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223210, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223211, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223212, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223213, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10502_MI = 
{
	"JJ", (methodPointerType)&m10502, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125, t1995_m10502_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4519, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10503_ParameterInfos[] = 
{
	{"a", 0, 134223214, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223215, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223216, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223217, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223218, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223219, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223220, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10503_MI = 
{
	"FFF", (methodPointerType)&m10503, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125, t1995_m10503_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4520, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10504_ParameterInfos[] = 
{
	{"a", 0, 134223221, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223222, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223223, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223224, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223225, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223226, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223227, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10504_MI = 
{
	"GGG", (methodPointerType)&m10504, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125, t1995_m10504_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4521, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10505_ParameterInfos[] = 
{
	{"a", 0, 134223228, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223229, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223230, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223231, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223232, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223233, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223234, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10505_MI = 
{
	"HHH", (methodPointerType)&m10505, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125, t1995_m10505_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4522, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10506_ParameterInfos[] = 
{
	{"a", 0, 134223235, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223236, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223237, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223238, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223239, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223240, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223241, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10506_MI = 
{
	"III", (methodPointerType)&m10506, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125, t1995_m10506_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4523, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1995_m10507_ParameterInfos[] = 
{
	{"a", 0, 134223242, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"b", 1, 134223243, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"c", 2, 134223244, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"d", 3, 134223245, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"e", 4, 134223246, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"x", 5, 134223247, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"s", 6, 134223248, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10507_MI = 
{
	"JJJ", (methodPointerType)&m10507, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t2212_t125_t2212_t125_t125_t125_t125, t1995_m10507_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4524, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1995_MIs[] =
{
	&m10484_MI,
	&m10485_MI,
	&m10486_MI,
	&m10487_MI,
	&m10488_MI,
	&m10489_MI,
	&m10490_MI,
	&m10491_MI,
	&m10492_MI,
	&m10493_MI,
	&m10494_MI,
	&m10495_MI,
	&m10496_MI,
	&m10497_MI,
	&m10498_MI,
	&m10499_MI,
	&m10500_MI,
	&m10501_MI,
	&m10502_MI,
	&m10503_MI,
	&m10504_MI,
	&m10505_MI,
	&m10506_MI,
	&m10507_MI,
	NULL
};
extern Il2CppType t730_0_0_1;
FieldInfo t1995_f4_FieldInfo = 
{
	"_ProcessingBuffer", &t730_0_0_1, &t1995_TI, offsetof(t1995, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_1;
FieldInfo t1995_f5_FieldInfo = 
{
	"_X", &t1412_0_0_1, &t1995_TI, offsetof(t1995, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_1;
FieldInfo t1995_f6_FieldInfo = 
{
	"_HashValue", &t1412_0_0_1, &t1995_TI, offsetof(t1995, f6), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t1995_f7_FieldInfo = 
{
	"_Length", &t889_0_0_1, &t1995_TI, offsetof(t1995, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1995_f8_FieldInfo = 
{
	"_ProcessingBufferCount", &t125_0_0_1, &t1995_TI, offsetof(t1995, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1995_FIs[] =
{
	&t1995_f4_FieldInfo,
	&t1995_f5_FieldInfo,
	&t1995_f6_FieldInfo,
	&t1995_f7_FieldInfo,
	&t1995_f8_FieldInfo,
	NULL
};
extern MethodInfo m10488_MI;
extern MethodInfo m10486_MI;
extern MethodInfo m10487_MI;
extern MethodInfo m10485_MI;
static Il2CppMethodReference t1995_VT[] =
{
	&m671_MI,
	&m10488_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	&m10486_MI,
	&m10487_MI,
	&m6901_MI,
	&m10485_MI,
	&m7049_MI,
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
	{ &t1425_0_0_0, 5},
};
void t1995_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, NULL, t1995_IOs, &t1994_0_0_0, t1995_VT, t1995_VTIGM, NULL};
TypeInfo t1995_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RIPEMD160Managed", "System.Security.Cryptography", t1995_MIs, NULL, t1995_FIs, NULL, &t1995_TI, NULL, &t1995__CustomAttributeCache, &t1995_0_0_0, &t1995_1_0_0, &t1995_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1995), sizeof (t1995), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 24, 0, 5, 0, 0, 15, 0, 2};
#include "t1996.h"
// Metadata Definition System.Security.Cryptography.RNGCryptoServiceProvider
extern TypeInfo t1996_TI;
#include "t1996MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10508_MI = 
{
	".ctor", (methodPointerType)&m10508, &t1996_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4525, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10509_MI = 
{
	".cctor", (methodPointerType)&m10509, &t1996_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4526, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10510_MI = 
{
	"Check", (methodPointerType)&m10510, &t1996_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4527, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10511_MI = 
{
	"RngOpen", (methodPointerType)&m10511, &t1996_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 145, 4096, 255, 0, false, false, 4528, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1996_m10512_ParameterInfos[] = 
{
	{"seed", 0, 134223249, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10512_MI = 
{
	"RngInitialize", (methodPointerType)&m10512, &t1996_TI, &t58_0_0_0, RuntimeInvoker_t58_t9, t1996_m10512_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 4529, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t58_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1996_m10513_ParameterInfos[] = 
{
	{"handle", 0, 134223250, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"data", 1, 134223251, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58_t58_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10513_MI = 
{
	"RngGetBytes", (methodPointerType)&m10513, &t1996_TI, &t58_0_0_0, RuntimeInvoker_t58_t58_t9, t1996_m10513_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 2, false, false, 4530, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
static ParameterInfo t1996_m10514_ParameterInfos[] = 
{
	{"handle", 0, 134223252, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m10514_MI = 
{
	"RngClose", (methodPointerType)&m10514, &t1996_TI, &t122_0_0_0, RuntimeInvoker_t122_t58, t1996_m10514_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 4531, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1996_m10515_ParameterInfos[] = 
{
	{"data", 0, 134223253, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10515_MI = 
{
	"GetBytes", (methodPointerType)&m10515, &t1996_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1996_m10515_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4532, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1996_m10516_ParameterInfos[] = 
{
	{"data", 0, 134223254, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10516_MI = 
{
	"GetNonZeroBytes", (methodPointerType)&m10516, &t1996_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1996_m10516_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4533, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10517_MI = 
{
	"Finalize", (methodPointerType)&m10517, &t1996_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4534, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1996_MIs[] =
{
	&m10508_MI,
	&m10509_MI,
	&m10510_MI,
	&m10511_MI,
	&m10512_MI,
	&m10513_MI,
	&m10514_MI,
	&m10515_MI,
	&m10516_MI,
	&m10517_MI,
	NULL
};
extern Il2CppType t9_0_0_17;
FieldInfo t1996_f0_FieldInfo = 
{
	"_lock", &t9_0_0_17, &t1996_TI, offsetof(t1996_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_1;
FieldInfo t1996_f1_FieldInfo = 
{
	"_handle", &t58_0_0_1, &t1996_TI, offsetof(t1996, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1996_FIs[] =
{
	&t1996_f0_FieldInfo,
	&t1996_f1_FieldInfo,
	NULL
};
extern MethodInfo m10517_MI;
extern MethodInfo m10515_MI;
extern MethodInfo m10516_MI;
static Il2CppMethodReference t1996_VT[] =
{
	&m671_MI,
	&m10517_MI,
	&m672_MI,
	&m673_MI,
	&m10515_MI,
	&m10516_MI,
};
static bool t1996_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1996_0_0_0;
extern Il2CppType t1996_1_0_0;
extern Il2CppType t1413_0_0_0;
struct t1996;
const Il2CppTypeDefinitionMetadata t1996_DM = 
{
	NULL, NULL, NULL, NULL, &t1413_0_0_0, t1996_VT, t1996_VTIGM, NULL};
TypeInfo t1996_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RNGCryptoServiceProvider", "System.Security.Cryptography", t1996_MIs, NULL, t1996_FIs, NULL, &t1996_TI, NULL, &EmptyCustomAttributesCache, &t1996_0_0_0, &t1996_1_0_0, &t1996_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1996), sizeof (t1996), 0, -1, sizeof(t1996_SFs), 0, -1, 257, 0, 0, false, false, false, false, false, false, false, true, true, false, 10, 0, 2, 0, 0, 6, 0, 0};
#include "t1217.h"
// Metadata Definition System.Security.Cryptography.RSA
extern TypeInfo t1217_TI;
#include "t1217MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6909_MI = 
{
	".ctor", (methodPointerType)&m6909, &t1217_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4535, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1217_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5783_MI = 
{
	"Create", (methodPointerType)&m5783, &t1217_TI, &t1217_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4536, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1217_m10518_ParameterInfos[] = 
{
	{"algName", 0, 134223255, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1217_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10518_MI = 
{
	"Create", (methodPointerType)&m10518, &t1217_TI, &t1217_0_0_0, RuntimeInvoker_t9_t9, t1217_m10518_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4537, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1217_m6900_ParameterInfos[] = 
{
	{"rgb", 0, 134223256, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6900_MI = 
{
	"EncryptValue", NULL, &t1217_TI, &t730_0_0_0, RuntimeInvoker_t9_t9, t1217_m6900_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 10, 1, false, false, 4538, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1217_m6899_ParameterInfos[] = 
{
	{"rgb", 0, 134223257, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6899_MI = 
{
	"DecryptValue", NULL, &t1217_TI, &t730_0_0_0, RuntimeInvoker_t9_t9, t1217_m6899_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 11, 1, false, false, 4539, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1217_m5782_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223258, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1350_0_0_0;
extern void* RuntimeInvoker_t1350_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m5782_MI = 
{
	"ExportParameters", NULL, &t1217_TI, &t1350_0_0_0, RuntimeInvoker_t1350_t186, t1217_m5782_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 12, 1, false, false, 4540, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1350_0_0_0;
extern Il2CppType t1350_0_0_0;
static ParameterInfo t1217_m5784_ParameterInfos[] = 
{
	{"parameters", 0, 134223259, &EmptyCustomAttributesCache, &t1350_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1350 (MethodInfo* method, void* obj, void** args);
MethodInfo m5784_MI = 
{
	"ImportParameters", NULL, &t1217_TI, &t122_0_0_0, RuntimeInvoker_t122_t1350, t1217_m5784_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 13, 1, false, false, 4541, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1350_0_0_0;
static ParameterInfo t1217_m10519_ParameterInfos[] = 
{
	{"parameters", 0, 134223260, &EmptyCustomAttributesCache, &t1350_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1350 (MethodInfo* method, void* obj, void** args);
MethodInfo m10519_MI = 
{
	"ZeroizePrivateKey", (methodPointerType)&m10519, &t1217_TI, &t122_0_0_0, RuntimeInvoker_t122_t1350, t1217_m10519_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4542, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1217_m7053_ParameterInfos[] = 
{
	{"xmlString", 0, 134223261, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7053_MI = 
{
	"FromXmlString", (methodPointerType)&m7053, &t1217_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1217_m7053_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 4543, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1217_m10520_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223262, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10520_MI = 
{
	"ToXmlString", (methodPointerType)&m10520, &t1217_TI, &t2_0_0_0, RuntimeInvoker_t9_t186, t1217_m10520_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 4544, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1217_MIs[] =
{
	&m6909_MI,
	&m5783_MI,
	&m10518_MI,
	&m6900_MI,
	&m6899_MI,
	&m5782_MI,
	&m5784_MI,
	&m10519_MI,
	&m7053_MI,
	&m10520_MI,
	NULL
};
extern MethodInfo m7052_MI;
extern MethodInfo m5845_MI;
extern MethodInfo m6910_MI;
extern MethodInfo m7053_MI;
extern MethodInfo m10520_MI;
static Il2CppMethodReference t1217_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7052_MI,
	&m5845_MI,
	&m6910_MI,
	NULL,
	&m7053_MI,
	&m10520_MI,
	NULL,
	NULL,
	NULL,
	NULL,
};
static bool t1217_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1217_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1217_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1217__CustomAttributeCache = {
1,
NULL,
&t1217_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1217_0_0_0;
extern Il2CppType t1217_1_0_0;
extern Il2CppType t1212_0_0_0;
struct t1217;
extern CustomAttributesCache t1217__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1217_DM = 
{
	NULL, NULL, NULL, t1217_IOs, &t1212_0_0_0, t1217_VT, t1217_VTIGM, NULL};
TypeInfo t1217_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSA", "System.Security.Cryptography", t1217_MIs, NULL, NULL, NULL, &t1217_TI, NULL, &t1217__CustomAttributeCache, &t1217_0_0_0, &t1217_1_0_0, &t1217_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1217), sizeof (t1217), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 0, 0, 0, 0, 14, 0, 1};
#include "t1348.h"
// Metadata Definition System.Security.Cryptography.RSACryptoServiceProvider
extern TypeInfo t1348_TI;
#include "t1348MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10521_MI = 
{
	".ctor", (methodPointerType)&m10521, &t1348_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4545, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1527_0_0_0;
extern Il2CppType t1527_0_0_0;
static ParameterInfo t1348_m6906_ParameterInfos[] = 
{
	{"parameters", 0, 134223263, &EmptyCustomAttributesCache, &t1527_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6906_MI = 
{
	".ctor", (methodPointerType)&m6906, &t1348_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1348_m6906_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4546, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1348_m5801_ParameterInfos[] = 
{
	{"dwKeySize", 0, 134223264, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5801_MI = 
{
	".ctor", (methodPointerType)&m5801, &t1348_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1348_m5801_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4547, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10522_MI = 
{
	".cctor", (methodPointerType)&m10522, &t1348_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4548, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t1527_0_0_0;
static ParameterInfo t1348_m10523_ParameterInfos[] = 
{
	{"dwKeySize", 0, 134223265, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"p", 1, 134223266, &EmptyCustomAttributesCache, &t1527_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10523_MI = 
{
	"Common", (methodPointerType)&m10523, &t1348_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9, t1348_m10523_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4549, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10524_MI = 
{
	"Finalize", (methodPointerType)&m10524, &t1348_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4550, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10525_MI = 
{
	"get_KeySize", (methodPointerType)&m10525, &t1348_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 5, 0, false, false, 4551, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m5780_MI = 
{
	"get_PublicOnly", (methodPointerType)&m5780, &t1348_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4552, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1348_m10526_ParameterInfos[] = 
{
	{"rgb", 0, 134223267, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10526_MI = 
{
	"DecryptValue", (methodPointerType)&m10526, &t1348_TI, &t730_0_0_0, RuntimeInvoker_t9_t9, t1348_m10526_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 1, false, false, 4553, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1348_m10527_ParameterInfos[] = 
{
	{"rgb", 0, 134223268, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10527_MI = 
{
	"EncryptValue", (methodPointerType)&m10527, &t1348_TI, &t730_0_0_0, RuntimeInvoker_t9_t9, t1348_m10527_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 4554, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1348_m10528_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223269, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1350_0_0_0;
extern void* RuntimeInvoker_t1350_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10528_MI = 
{
	"ExportParameters", (methodPointerType)&m10528, &t1348_TI, &t1350_0_0_0, RuntimeInvoker_t1350_t186, t1348_m10528_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 4555, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1350_0_0_0;
static ParameterInfo t1348_m10529_ParameterInfos[] = 
{
	{"parameters", 0, 134223270, &EmptyCustomAttributesCache, &t1350_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1350 (MethodInfo* method, void* obj, void** args);
MethodInfo m10529_MI = 
{
	"ImportParameters", (methodPointerType)&m10529, &t1348_TI, &t122_0_0_0, RuntimeInvoker_t122_t1350, t1348_m10529_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 1, false, false, 4556, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1348_m10530_ParameterInfos[] = 
{
	{"disposing", 0, 134223271, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10530_MI = 
{
	"Dispose", (methodPointerType)&m10530, &t1348_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1348_m10530_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 7, 1, false, false, 4557, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1436_0_0_0;
extern Il2CppType t1436_0_0_0;
static ParameterInfo t1348_m10531_ParameterInfos[] = 
{
	{"sender", 0, 134223272, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"e", 1, 134223273, &EmptyCustomAttributesCache, &t1436_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10531_MI = 
{
	"OnKeyGenerated", (methodPointerType)&m10531, &t1348_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1348_m10531_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4558, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1348_MIs[] =
{
	&m10521_MI,
	&m6906_MI,
	&m5801_MI,
	&m10522_MI,
	&m10523_MI,
	&m10524_MI,
	&m10525_MI,
	&m5780_MI,
	&m10526_MI,
	&m10527_MI,
	&m10528_MI,
	&m10529_MI,
	&m10530_MI,
	&m10531_MI,
	NULL
};
extern Il2CppType t1634_0_0_1;
FieldInfo t1348_f2_FieldInfo = 
{
	"store", &t1634_0_0_1, &t1348_TI, offsetof(t1348, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1348_f3_FieldInfo = 
{
	"persistKey", &t124_0_0_1, &t1348_TI, offsetof(t1348, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1348_f4_FieldInfo = 
{
	"persisted", &t124_0_0_1, &t1348_TI, offsetof(t1348, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1348_f5_FieldInfo = 
{
	"privateKeyExportable", &t124_0_0_1, &t1348_TI, offsetof(t1348, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1348_f6_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t1348_TI, offsetof(t1348, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1641_0_0_1;
FieldInfo t1348_f7_FieldInfo = 
{
	"rsa", &t1641_0_0_1, &t1348_TI, offsetof(t1348, f7), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_17;
FieldInfo t1348_f8_FieldInfo = 
{
	"useMachineKeyStore", &t124_0_0_17, &t1348_TI, offsetof(t1348_SFs, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1348_FIs[] =
{
	&t1348_f2_FieldInfo,
	&t1348_f3_FieldInfo,
	&t1348_f4_FieldInfo,
	&t1348_f5_FieldInfo,
	&t1348_f6_FieldInfo,
	&t1348_f7_FieldInfo,
	&t1348_f8_FieldInfo,
	NULL
};
extern MethodInfo m10525_MI;
static PropertyInfo t1348____KeySize_PropertyInfo = 
{
	&t1348_TI, "KeySize", &m10525_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5780_MI;
extern CustomAttributesCache t1348__CustomAttributeCache_t1348____PublicOnly_PropertyInfo;
static PropertyInfo t1348____PublicOnly_PropertyInfo = 
{
	&t1348_TI, "PublicOnly", &m5780_MI, NULL, 0, &t1348__CustomAttributeCache_t1348____PublicOnly_PropertyInfo};
static PropertyInfo* t1348_PIs[] =
{
	&t1348____KeySize_PropertyInfo,
	&t1348____PublicOnly_PropertyInfo,
	NULL
};
extern MethodInfo m10524_MI;
extern MethodInfo m10530_MI;
extern MethodInfo m10527_MI;
extern MethodInfo m10526_MI;
extern MethodInfo m10528_MI;
extern MethodInfo m10529_MI;
static Il2CppMethodReference t1348_VT[] =
{
	&m671_MI,
	&m10524_MI,
	&m672_MI,
	&m673_MI,
	&m7052_MI,
	&m10525_MI,
	&m6910_MI,
	&m10530_MI,
	&m7053_MI,
	&m10520_MI,
	&m10527_MI,
	&m10526_MI,
	&m10528_MI,
	&m10529_MI,
};
static bool t1348_VTIGM[] =
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
static const Il2CppType* t1348_ITIs[] = 
{
	&t2634_0_0_0,
};
static Il2CppInterfaceOffsetPair t1348_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t2634_0_0_0, 14},
};
void t1348_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1348_CustomAttributesCacheGenerator_t1348____PublicOnly_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1348__CustomAttributeCache = {
1,
NULL,
&t1348_CustomAttributesCacheGenerator
};
CustomAttributesCache t1348__CustomAttributeCache_t1348____PublicOnly_PropertyInfo = {
1,
NULL,
&t1348_CustomAttributesCacheGenerator_t1348____PublicOnly_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1348_0_0_0;
extern Il2CppType t1348_1_0_0;
struct t1348;
extern CustomAttributesCache t1348__CustomAttributeCache;
extern CustomAttributesCache t1348__CustomAttributeCache_t1348____PublicOnly_PropertyInfo;
const Il2CppTypeDefinitionMetadata t1348_DM = 
{
	NULL, NULL, t1348_ITIs, t1348_IOs, &t1217_0_0_0, t1348_VT, t1348_VTIGM, NULL};
TypeInfo t1348_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSACryptoServiceProvider", "System.Security.Cryptography", t1348_MIs, t1348_PIs, t1348_FIs, NULL, &t1348_TI, NULL, &t1348__CustomAttributeCache, &t1348_0_0_0, &t1348_1_0_0, &t1348_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1348), sizeof (t1348), 0, -1, sizeof(t1348_SFs), 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, true, false, 14, 2, 7, 0, 0, 14, 1, 2};
#include "t1550.h"
// Metadata Definition System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
extern TypeInfo t1550_TI;
#include "t1550MD.h"
extern Il2CppType t1212_0_0_0;
static ParameterInfo t1550_m7034_ParameterInfos[] = 
{
	{"key", 0, 134223274, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7034_MI = 
{
	".ctor", (methodPointerType)&m7034, &t1550_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1550_m7034_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4559, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1550_m7035_ParameterInfos[] = 
{
	{"rgbData", 0, 134223275, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7035_MI = 
{
	"CreateKeyExchange", (methodPointerType)&m7035, &t1550_TI, &t730_0_0_0, RuntimeInvoker_t9_t9, t1550_m7035_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4560, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1212_0_0_0;
static ParameterInfo t1550_m10532_ParameterInfos[] = 
{
	{"key", 0, 134223276, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10532_MI = 
{
	"SetRSAKey", (methodPointerType)&m10532, &t1550_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1550_m10532_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4561, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1550_MIs[] =
{
	&m7034_MI,
	&m7035_MI,
	&m10532_MI,
	NULL
};
extern Il2CppType t1217_0_0_1;
FieldInfo t1550_f0_FieldInfo = 
{
	"rsa", &t1217_0_0_1, &t1550_TI, offsetof(t1550, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1413_0_0_1;
FieldInfo t1550_f1_FieldInfo = 
{
	"random", &t1413_0_0_1, &t1550_TI, offsetof(t1550, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1550_FIs[] =
{
	&t1550_f0_FieldInfo,
	&t1550_f1_FieldInfo,
	NULL
};
extern MethodInfo m7035_MI;
static Il2CppMethodReference t1550_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7035_MI,
};
static bool t1550_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
void t1550_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1550__CustomAttributeCache = {
1,
NULL,
&t1550_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1550_0_0_0;
extern Il2CppType t1550_1_0_0;
extern Il2CppType t1979_0_0_0;
struct t1550;
extern CustomAttributesCache t1550__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1550_DM = 
{
	NULL, NULL, NULL, NULL, &t1979_0_0_0, t1550_VT, t1550_VTIGM, NULL};
TypeInfo t1550_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSAPKCS1KeyExchangeFormatter", "System.Security.Cryptography", t1550_MIs, NULL, t1550_FIs, NULL, &t1550_TI, NULL, &t1550__CustomAttributeCache, &t1550_0_0_0, &t1550_1_0_0, &t1550_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1550), sizeof (t1550), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 2, 0, 0, 5, 0, 0};
#include "t1536.h"
// Metadata Definition System.Security.Cryptography.RSAPKCS1SignatureDeformatter
extern TypeInfo t1536_TI;
#include "t1536MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10533_MI = 
{
	".ctor", (methodPointerType)&m10533, &t1536_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4562, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1212_0_0_0;
static ParameterInfo t1536_m6939_ParameterInfos[] = 
{
	{"key", 0, 134223277, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6939_MI = 
{
	".ctor", (methodPointerType)&m6939, &t1536_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1536_m6939_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4563, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1536_m6940_ParameterInfos[] = 
{
	{"strName", 0, 134223278, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6940_MI = 
{
	"SetHashAlgorithm", (methodPointerType)&m6940, &t1536_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1536_m6940_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4564, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1212_0_0_0;
static ParameterInfo t1536_m10534_ParameterInfos[] = 
{
	{"key", 0, 134223279, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10534_MI = 
{
	"SetKey", (methodPointerType)&m10534, &t1536_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1536_m10534_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4565, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1536_m6941_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223280, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"rgbSignature", 1, 134223281, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6941_MI = 
{
	"VerifySignature", (methodPointerType)&m6941, &t1536_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1536_m6941_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, false, 4566, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1536_MIs[] =
{
	&m10533_MI,
	&m6939_MI,
	&m6940_MI,
	&m10534_MI,
	&m6941_MI,
	NULL
};
extern Il2CppType t1217_0_0_1;
FieldInfo t1536_f0_FieldInfo = 
{
	"rsa", &t1217_0_0_1, &t1536_TI, offsetof(t1536, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1536_f1_FieldInfo = 
{
	"hashName", &t2_0_0_1, &t1536_TI, offsetof(t1536, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1536_FIs[] =
{
	&t1536_f0_FieldInfo,
	&t1536_f1_FieldInfo,
	NULL
};
extern MethodInfo m6940_MI;
extern MethodInfo m10534_MI;
extern MethodInfo m6941_MI;
static Il2CppMethodReference t1536_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m6940_MI,
	&m10534_MI,
	&m6941_MI,
};
static bool t1536_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
void t1536_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1536__CustomAttributeCache = {
1,
NULL,
&t1536_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1536_0_0_0;
extern Il2CppType t1536_1_0_0;
extern Il2CppType t1489_0_0_0;
struct t1536;
extern CustomAttributesCache t1536__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1536_DM = 
{
	NULL, NULL, NULL, NULL, &t1489_0_0_0, t1536_VT, t1536_VTIGM, NULL};
TypeInfo t1536_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSAPKCS1SignatureDeformatter", "System.Security.Cryptography", t1536_MIs, NULL, t1536_FIs, NULL, &t1536_TI, NULL, &t1536__CustomAttributeCache, &t1536_0_0_0, &t1536_1_0_0, &t1536_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1536), sizeof (t1536), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 2, 0, 0, 7, 0, 0};
#include "t1997.h"
// Metadata Definition System.Security.Cryptography.RSAPKCS1SignatureFormatter
extern TypeInfo t1997_TI;
#include "t1997MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10535_MI = 
{
	".ctor", (methodPointerType)&m10535, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4567, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1997_m10536_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223282, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10536_MI = 
{
	"CreateSignature", (methodPointerType)&m10536, &t1997_TI, &t730_0_0_0, RuntimeInvoker_t9_t9, t1997_m10536_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 1, false, false, 4568, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1997_m10537_ParameterInfos[] = 
{
	{"strName", 0, 134223283, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10537_MI = 
{
	"SetHashAlgorithm", (methodPointerType)&m10537, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1997_m10537_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4569, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1212_0_0_0;
static ParameterInfo t1997_m10538_ParameterInfos[] = 
{
	{"key", 0, 134223284, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10538_MI = 
{
	"SetKey", (methodPointerType)&m10538, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1997_m10538_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4570, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1997_MIs[] =
{
	&m10535_MI,
	&m10536_MI,
	&m10537_MI,
	&m10538_MI,
	NULL
};
extern Il2CppType t1217_0_0_1;
FieldInfo t1997_f0_FieldInfo = 
{
	"rsa", &t1217_0_0_1, &t1997_TI, offsetof(t1997, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1368_0_0_1;
FieldInfo t1997_f1_FieldInfo = 
{
	"hash", &t1368_0_0_1, &t1997_TI, offsetof(t1997, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1997_FIs[] =
{
	&t1997_f0_FieldInfo,
	&t1997_f1_FieldInfo,
	NULL
};
extern MethodInfo m10537_MI;
extern MethodInfo m10538_MI;
extern MethodInfo m10536_MI;
static Il2CppMethodReference t1997_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10537_MI,
	&m10538_MI,
	&m10536_MI,
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
};
void t1997_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
extern Il2CppType t1491_0_0_0;
struct t1997;
extern CustomAttributesCache t1997__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1997_DM = 
{
	NULL, NULL, NULL, NULL, &t1491_0_0_0, t1997_VT, t1997_VTIGM, NULL};
TypeInfo t1997_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSAPKCS1SignatureFormatter", "System.Security.Cryptography", t1997_MIs, NULL, t1997_FIs, NULL, &t1997_TI, NULL, &t1997__CustomAttributeCache, &t1997_0_0_0, &t1997_1_0_0, &t1997_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1997), sizeof (t1997), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 2, 0, 0, 7, 0, 0};
#include "t1350.h"
// Metadata Definition System.Security.Cryptography.RSAParameters
extern TypeInfo t1350_TI;
#include "t1350MD.h"
static MethodInfo* t1350_MIs[] =
{
	NULL
};
extern Il2CppType t730_0_0_134;
FieldInfo t1350_f0_FieldInfo = 
{
	"P", &t730_0_0_134, &t1350_TI, offsetof(t1350, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_134;
FieldInfo t1350_f1_FieldInfo = 
{
	"Q", &t730_0_0_134, &t1350_TI, offsetof(t1350, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_134;
FieldInfo t1350_f2_FieldInfo = 
{
	"D", &t730_0_0_134, &t1350_TI, offsetof(t1350, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_134;
FieldInfo t1350_f3_FieldInfo = 
{
	"DP", &t730_0_0_134, &t1350_TI, offsetof(t1350, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_134;
FieldInfo t1350_f4_FieldInfo = 
{
	"DQ", &t730_0_0_134, &t1350_TI, offsetof(t1350, f4) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_134;
FieldInfo t1350_f5_FieldInfo = 
{
	"InverseQ", &t730_0_0_134, &t1350_TI, offsetof(t1350, f5) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_6;
FieldInfo t1350_f6_FieldInfo = 
{
	"Modulus", &t730_0_0_6, &t1350_TI, offsetof(t1350, f6) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_6;
FieldInfo t1350_f7_FieldInfo = 
{
	"Exponent", &t730_0_0_6, &t1350_TI, offsetof(t1350, f7) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1350_FIs[] =
{
	&t1350_f0_FieldInfo,
	&t1350_f1_FieldInfo,
	&t1350_f2_FieldInfo,
	&t1350_f3_FieldInfo,
	&t1350_f4_FieldInfo,
	&t1350_f5_FieldInfo,
	&t1350_f6_FieldInfo,
	&t1350_f7_FieldInfo,
	NULL
};
extern MethodInfo m680_MI;
extern MethodInfo m681_MI;
extern MethodInfo m682_MI;
static Il2CppMethodReference t1350_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1350_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1350_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1350__CustomAttributeCache = {
1,
NULL,
&t1350_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1350_1_0_0;
extern Il2CppType t117_0_0_0;
extern CustomAttributesCache t1350__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1350_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1350_VT, t1350_VTIGM, NULL};
TypeInfo t1350_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSAParameters", "System.Security.Cryptography", t1350_MIs, NULL, t1350_FIs, NULL, &t1350_TI, NULL, &t1350__CustomAttributeCache, &t1350_0_0_0, &t1350_1_0_0, &t1350_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t1350_marshal, (methodPointerType)t1350_marshal_back, (methodPointerType)t1350_marshal_cleanup, sizeof (t1350)+ sizeof (Il2CppObject), sizeof (t1350)+ sizeof (Il2CppObject), 0, sizeof(t1350_marshaled), 0, 0, -1, 1057033, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 8, 0, 0, 4, 0, 0};
#include "t1413.h"
// Metadata Definition System.Security.Cryptography.RandomNumberGenerator
extern TypeInfo t1413_TI;
#include "t1413MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10539_MI = 
{
	".ctor", (methodPointerType)&m10539, &t1413_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4571, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1413_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6887_MI = 
{
	"Create", (methodPointerType)&m6887, &t1413_TI, &t1413_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4572, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1413_m10540_ParameterInfos[] = 
{
	{"rngName", 0, 134223285, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1413_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10540_MI = 
{
	"Create", (methodPointerType)&m10540, &t1413_TI, &t1413_0_0_0, RuntimeInvoker_t9_t9, t1413_m10540_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4573, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1413_m6888_ParameterInfos[] = 
{
	{"data", 0, 134223286, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6888_MI = 
{
	"GetBytes", NULL, &t1413_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1413_m6888_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4574, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1413_m6980_ParameterInfos[] = 
{
	{"data", 0, 134223287, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6980_MI = 
{
	"GetNonZeroBytes", NULL, &t1413_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1413_m6980_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 4575, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1413_MIs[] =
{
	&m10539_MI,
	&m6887_MI,
	&m10540_MI,
	&m6888_MI,
	&m6980_MI,
	NULL
};
static Il2CppMethodReference t1413_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
};
static bool t1413_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1413_1_0_0;
struct t1413;
const Il2CppTypeDefinitionMetadata t1413_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1413_VT, t1413_VTIGM, NULL};
TypeInfo t1413_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RandomNumberGenerator", "System.Security.Cryptography", t1413_MIs, NULL, NULL, NULL, &t1413_TI, NULL, &EmptyCustomAttributesCache, &t1413_0_0_0, &t1413_1_0_0, &t1413_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1413), sizeof (t1413), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 6, 0, 0};
#include "t1543.h"
// Metadata Definition System.Security.Cryptography.Rijndael
extern TypeInfo t1543_TI;
#include "t1543MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10541_MI = 
{
	".ctor", (methodPointerType)&m10541, &t1543_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4576, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1543_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6961_MI = 
{
	"Create", (methodPointerType)&m6961, &t1543_TI, &t1543_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4577, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1543_m10542_ParameterInfos[] = 
{
	{"algName", 0, 134223288, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1543_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10542_MI = 
{
	"Create", (methodPointerType)&m10542, &t1543_TI, &t1543_0_0_0, RuntimeInvoker_t9_t9, t1543_m10542_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4578, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1543_MIs[] =
{
	&m10541_MI,
	&m6961_MI,
	&m10542_MI,
	NULL
};
extern MethodInfo m7043_MI;
extern MethodInfo m6963_MI;
static Il2CppMethodReference t1543_VT[] =
{
	&m671_MI,
	&m6894_MI,
	&m672_MI,
	&m673_MI,
	&m7040_MI,
	&m7050_MI,
	&m7041_MI,
	&m6964_MI,
	&m7042_MI,
	&m10633_MI,
	&m6923_MI,
	&m7051_MI,
	&m6922_MI,
	&m7043_MI,
	&m6963_MI,
	&m7044_MI,
	&m7045_MI,
	&m6924_MI,
	&m7046_MI,
	&m6962_MI,
	&m6925_MI,
	NULL,
	&m6896_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1543_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1543_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1543_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1543__CustomAttributeCache = {
1,
NULL,
&t1543_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1543_0_0_0;
extern Il2CppType t1543_1_0_0;
struct t1543;
extern CustomAttributesCache t1543__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1543_DM = 
{
	NULL, NULL, NULL, t1543_IOs, &t1434_0_0_0, t1543_VT, t1543_VTIGM, NULL};
TypeInfo t1543_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Rijndael", "System.Security.Cryptography", t1543_MIs, NULL, NULL, NULL, &t1543_TI, NULL, &t1543__CustomAttributeCache, &t1543_0_0_0, &t1543_1_0_0, &t1543_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1543), sizeof (t1543), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 3, 0, 0, 0, 0, 26, 0, 1};
#include "t1998.h"
// Metadata Definition System.Security.Cryptography.RijndaelManaged
extern TypeInfo t1998_TI;
#include "t1998MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10543_MI = 
{
	".ctor", (methodPointerType)&m10543, &t1998_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4579, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10544_MI = 
{
	"GenerateIV", (methodPointerType)&m10544, &t1998_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 24, 0, false, false, 4580, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10545_MI = 
{
	"GenerateKey", (methodPointerType)&m10545, &t1998_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 25, 0, false, false, 4581, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1998_m10546_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223289, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"rgbIV", 1, 134223290, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t1425_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10546_MI = 
{
	"CreateDecryptor", (methodPointerType)&m10546, &t1998_TI, &t1425_0_0_0, RuntimeInvoker_t9_t9_t9, t1998_m10546_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 21, 2, false, false, 4582, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1998_m10547_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223291, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"rgbIV", 1, 134223292, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t1425_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10547_MI = 
{
	"CreateEncryptor", (methodPointerType)&m10547, &t1998_TI, &t1425_0_0_0, RuntimeInvoker_t9_t9_t9, t1998_m10547_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 2, false, false, 4583, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1998_MIs[] =
{
	&m10543_MI,
	&m10544_MI,
	&m10545_MI,
	&m10546_MI,
	&m10547_MI,
	NULL
};
extern MethodInfo m10546_MI;
extern MethodInfo m10547_MI;
extern MethodInfo m10544_MI;
extern MethodInfo m10545_MI;
static Il2CppMethodReference t1998_VT[] =
{
	&m671_MI,
	&m6894_MI,
	&m672_MI,
	&m673_MI,
	&m7040_MI,
	&m7050_MI,
	&m7041_MI,
	&m6964_MI,
	&m7042_MI,
	&m10633_MI,
	&m6923_MI,
	&m7051_MI,
	&m6922_MI,
	&m7043_MI,
	&m6963_MI,
	&m7044_MI,
	&m7045_MI,
	&m6924_MI,
	&m7046_MI,
	&m6962_MI,
	&m6925_MI,
	&m10546_MI,
	&m6896_MI,
	&m10547_MI,
	&m10544_MI,
	&m10545_MI,
};
static bool t1998_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1998_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1998_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1998__CustomAttributeCache = {
1,
NULL,
&t1998_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1998_0_0_0;
extern Il2CppType t1998_1_0_0;
struct t1998;
extern CustomAttributesCache t1998__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1998_DM = 
{
	NULL, NULL, NULL, t1998_IOs, &t1543_0_0_0, t1998_VT, t1998_VTIGM, NULL};
TypeInfo t1998_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RijndaelManaged", "System.Security.Cryptography", t1998_MIs, NULL, NULL, NULL, &t1998_TI, NULL, &t1998__CustomAttributeCache, &t1998_0_0_0, &t1998_1_0_0, &t1998_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1998), sizeof (t1998), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 5, 0, 0, 0, 0, 26, 0, 1};
#include "t1999.h"
// Metadata Definition System.Security.Cryptography.RijndaelTransform
extern TypeInfo t1999_TI;
#include "t1999MD.h"
extern Il2CppType t1543_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1999_m10548_ParameterInfos[] = 
{
	{"algo", 0, 134223293, &EmptyCustomAttributesCache, &t1543_0_0_0},
	{"encryption", 1, 134223294, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"key", 2, 134223295, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"iv", 3, 134223296, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10548_MI = 
{
	".ctor", (methodPointerType)&m10548, &t1999_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t9_t9, t1999_m10548_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 4584, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10549_MI = 
{
	".cctor", (methodPointerType)&m10549, &t1999_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4585, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10550_MI = 
{
	"Clear", (methodPointerType)&m10550, &t1999_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4586, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1999_m10551_ParameterInfos[] = 
{
	{"input", 0, 134223297, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"output", 1, 134223298, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10551_MI = 
{
	"ECB", (methodPointerType)&m10551, &t1999_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1999_m10551_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 2, false, false, 4587, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
static ParameterInfo t1999_m10552_ParameterInfos[] = 
{
	{"a", 0, 134223299, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10552_MI = 
{
	"SubByte", (methodPointerType)&m10552, &t1999_TI, &t168_0_0_0, RuntimeInvoker_t168_t125, t1999_m10552_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4588, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t1412_0_0_0;
extern Il2CppType t1412_0_0_0;
static ParameterInfo t1999_m10553_ParameterInfos[] = 
{
	{"indata", 0, 134223300, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"outdata", 1, 134223301, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ekey", 2, 134223302, &EmptyCustomAttributesCache, &t1412_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10553_MI = 
{
	"Encrypt128", (methodPointerType)&m10553, &t1999_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1999_m10553_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4589, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t1412_0_0_0;
static ParameterInfo t1999_m10554_ParameterInfos[] = 
{
	{"indata", 0, 134223303, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"outdata", 1, 134223304, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ekey", 2, 134223305, &EmptyCustomAttributesCache, &t1412_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10554_MI = 
{
	"Encrypt192", (methodPointerType)&m10554, &t1999_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1999_m10554_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4590, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t1412_0_0_0;
static ParameterInfo t1999_m10555_ParameterInfos[] = 
{
	{"indata", 0, 134223306, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"outdata", 1, 134223307, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ekey", 2, 134223308, &EmptyCustomAttributesCache, &t1412_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10555_MI = 
{
	"Encrypt256", (methodPointerType)&m10555, &t1999_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1999_m10555_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4591, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t1412_0_0_0;
static ParameterInfo t1999_m10556_ParameterInfos[] = 
{
	{"indata", 0, 134223309, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"outdata", 1, 134223310, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ekey", 2, 134223311, &EmptyCustomAttributesCache, &t1412_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10556_MI = 
{
	"Decrypt128", (methodPointerType)&m10556, &t1999_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1999_m10556_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4592, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t1412_0_0_0;
static ParameterInfo t1999_m10557_ParameterInfos[] = 
{
	{"indata", 0, 134223312, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"outdata", 1, 134223313, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ekey", 2, 134223314, &EmptyCustomAttributesCache, &t1412_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10557_MI = 
{
	"Decrypt192", (methodPointerType)&m10557, &t1999_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1999_m10557_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4593, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t1412_0_0_0;
static ParameterInfo t1999_m10558_ParameterInfos[] = 
{
	{"indata", 0, 134223315, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"outdata", 1, 134223316, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ekey", 2, 134223317, &EmptyCustomAttributesCache, &t1412_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10558_MI = 
{
	"Decrypt256", (methodPointerType)&m10558, &t1999_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1999_m10558_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4594, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1999_MIs[] =
{
	&m10548_MI,
	&m10549_MI,
	&m10550_MI,
	&m10551_MI,
	&m10552_MI,
	&m10553_MI,
	&m10554_MI,
	&m10555_MI,
	&m10556_MI,
	&m10557_MI,
	&m10558_MI,
	NULL
};
extern Il2CppType t1412_0_0_1;
FieldInfo t1999_f12_FieldInfo = 
{
	"expandedKey", &t1412_0_0_1, &t1999_TI, offsetof(t1999, f12), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1999_f13_FieldInfo = 
{
	"Nb", &t125_0_0_1, &t1999_TI, offsetof(t1999, f13), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1999_f14_FieldInfo = 
{
	"Nk", &t125_0_0_1, &t1999_TI, offsetof(t1999, f14), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1999_f15_FieldInfo = 
{
	"Nr", &t125_0_0_1, &t1999_TI, offsetof(t1999, f15), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_49;
FieldInfo t1999_f16_FieldInfo = 
{
	"Rcon", &t1412_0_0_49, &t1999_TI, offsetof(t1999_SFs, f16), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_49;
FieldInfo t1999_f17_FieldInfo = 
{
	"SBox", &t730_0_0_49, &t1999_TI, offsetof(t1999_SFs, f17), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_49;
FieldInfo t1999_f18_FieldInfo = 
{
	"iSBox", &t730_0_0_49, &t1999_TI, offsetof(t1999_SFs, f18), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_49;
FieldInfo t1999_f19_FieldInfo = 
{
	"T0", &t1412_0_0_49, &t1999_TI, offsetof(t1999_SFs, f19), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_49;
FieldInfo t1999_f20_FieldInfo = 
{
	"T1", &t1412_0_0_49, &t1999_TI, offsetof(t1999_SFs, f20), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_49;
FieldInfo t1999_f21_FieldInfo = 
{
	"T2", &t1412_0_0_49, &t1999_TI, offsetof(t1999_SFs, f21), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_49;
FieldInfo t1999_f22_FieldInfo = 
{
	"T3", &t1412_0_0_49, &t1999_TI, offsetof(t1999_SFs, f22), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_49;
FieldInfo t1999_f23_FieldInfo = 
{
	"iT0", &t1412_0_0_49, &t1999_TI, offsetof(t1999_SFs, f23), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_49;
FieldInfo t1999_f24_FieldInfo = 
{
	"iT1", &t1412_0_0_49, &t1999_TI, offsetof(t1999_SFs, f24), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_49;
FieldInfo t1999_f25_FieldInfo = 
{
	"iT2", &t1412_0_0_49, &t1999_TI, offsetof(t1999_SFs, f25), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_49;
FieldInfo t1999_f26_FieldInfo = 
{
	"iT3", &t1412_0_0_49, &t1999_TI, offsetof(t1999_SFs, f26), &EmptyCustomAttributesCache};
static FieldInfo* t1999_FIs[] =
{
	&t1999_f12_FieldInfo,
	&t1999_f13_FieldInfo,
	&t1999_f14_FieldInfo,
	&t1999_f15_FieldInfo,
	&t1999_f16_FieldInfo,
	&t1999_f17_FieldInfo,
	&t1999_f18_FieldInfo,
	&t1999_f19_FieldInfo,
	&t1999_f20_FieldInfo,
	&t1999_f21_FieldInfo,
	&t1999_f22_FieldInfo,
	&t1999_f23_FieldInfo,
	&t1999_f24_FieldInfo,
	&t1999_f25_FieldInfo,
	&t1999_f26_FieldInfo,
	NULL
};
extern MethodInfo m10551_MI;
static Il2CppMethodReference t1999_VT[] =
{
	&m671_MI,
	&m8168_MI,
	&m672_MI,
	&m673_MI,
	&m8167_MI,
	&m8170_MI,
	&m8177_MI,
	&m8184_MI,
	&m8169_MI,
	&m8170_MI,
	&m8171_MI,
	&m10551_MI,
	&m8172_MI,
	&m8173_MI,
	&m8174_MI,
	&m8175_MI,
	&m8177_MI,
	&m8184_MI,
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
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1999_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1999_0_0_0;
extern Il2CppType t1999_1_0_0;
struct t1999;
const Il2CppTypeDefinitionMetadata t1999_DM = 
{
	NULL, NULL, NULL, t1999_IOs, &t1642_0_0_0, t1999_VT, t1999_VTIGM, NULL};
TypeInfo t1999_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RijndaelTransform", "System.Security.Cryptography", t1999_MIs, NULL, t1999_FIs, NULL, &t1999_TI, NULL, &EmptyCustomAttributesCache, &t1999_0_0_0, &t1999_1_0_0, &t1999_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1999), sizeof (t1999), 0, -1, sizeof(t1999_SFs), 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, true, true, false, 11, 0, 15, 0, 0, 18, 0, 2};
#include "t2000.h"
// Metadata Definition System.Security.Cryptography.RijndaelManagedTransform
extern TypeInfo t2000_TI;
#include "t2000MD.h"
extern Il2CppType t1543_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t2000_m10559_ParameterInfos[] = 
{
	{"algo", 0, 134223318, &EmptyCustomAttributesCache, &t1543_0_0_0},
	{"encryption", 1, 134223319, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"key", 2, 134223320, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"iv", 3, 134223321, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10559_MI = 
{
	".ctor", (methodPointerType)&m10559, &t2000_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t9_t9, t2000_m10559_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 4595, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10560_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m10560, &t2000_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 4596, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10561_MI = 
{
	"get_CanReuseTransform", (methodPointerType)&m10561, &t2000_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 4597, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2000_m10562_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223322, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 1, 134223323, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223324, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"outputBuffer", 3, 134223325, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"outputOffset", 4, 134223326, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10562_MI = 
{
	"TransformBlock", (methodPointerType)&m10562, &t2000_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2000_m10562_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 5, false, false, 4598, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2000_m10563_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223327, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 1, 134223328, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223329, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10563_MI = 
{
	"TransformFinalBlock", (methodPointerType)&m10563, &t2000_TI, &t730_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t2000_m10563_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 3, false, false, 4599, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2000_MIs[] =
{
	&m10559_MI,
	&m10560_MI,
	&m10561_MI,
	&m10562_MI,
	&m10563_MI,
	NULL
};
extern Il2CppType t1999_0_0_1;
FieldInfo t2000_f0_FieldInfo = 
{
	"_st", &t1999_0_0_1, &t2000_TI, offsetof(t2000, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2000_f1_FieldInfo = 
{
	"_bs", &t125_0_0_1, &t2000_TI, offsetof(t2000, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2000_FIs[] =
{
	&t2000_f0_FieldInfo,
	&t2000_f1_FieldInfo,
	NULL
};
extern MethodInfo m10561_MI;
static PropertyInfo t2000____CanReuseTransform_PropertyInfo = 
{
	&t2000_TI, "CanReuseTransform", &m10561_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2000_PIs[] =
{
	&t2000____CanReuseTransform_PropertyInfo,
	NULL
};
extern MethodInfo m10560_MI;
extern MethodInfo m10562_MI;
extern MethodInfo m10563_MI;
static Il2CppMethodReference t2000_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10560_MI,
	&m10561_MI,
	&m10562_MI,
	&m10563_MI,
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
};
static const Il2CppType* t2000_ITIs[] = 
{
	&t137_0_0_0,
	&t1425_0_0_0,
};
static Il2CppInterfaceOffsetPair t2000_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t2000_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, t2000_ITIs, t2000_IOs, &t9_0_0_0, t2000_VT, t2000_VTIGM, NULL};
TypeInfo t2000_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RijndaelManagedTransform", "System.Security.Cryptography", t2000_MIs, t2000_PIs, t2000_FIs, NULL, &t2000_TI, NULL, &t2000__CustomAttributeCache, &t2000_0_0_0, &t2000_1_0_0, &t2000_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2000), sizeof (t2000), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 1, 2, 0, 0, 8, 2, 2};
#include "t1366.h"
// Metadata Definition System.Security.Cryptography.SHA1
extern TypeInfo t1366_TI;
#include "t1366MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10564_MI = 
{
	".ctor", (methodPointerType)&m10564, &t1366_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4600, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1366_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5895_MI = 
{
	"Create", (methodPointerType)&m5895, &t1366_TI, &t1366_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4601, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1366_m10565_ParameterInfos[] = 
{
	{"hashName", 0, 134223330, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1366_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10565_MI = 
{
	"Create", (methodPointerType)&m10565, &t1366_TI, &t1366_0_0_0, RuntimeInvoker_t9_t9, t1366_m10565_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4602, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1366_MIs[] =
{
	&m10564_MI,
	&m5895_MI,
	&m10565_MI,
	NULL
};
static Il2CppMethodReference t1366_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	NULL,
	NULL,
	&m6901_MI,
	NULL,
	&m7049_MI,
};
static bool t1366_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1366_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t1366_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1366__CustomAttributeCache = {
1,
NULL,
&t1366_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1366_0_0_0;
extern Il2CppType t1366_1_0_0;
struct t1366;
extern CustomAttributesCache t1366__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1366_DM = 
{
	NULL, NULL, NULL, t1366_IOs, &t1368_0_0_0, t1366_VT, t1366_VTIGM, NULL};
TypeInfo t1366_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA1", "System.Security.Cryptography", t1366_MIs, NULL, NULL, NULL, &t1366_TI, NULL, &t1366__CustomAttributeCache, &t1366_0_0_0, &t1366_1_0_0, &t1366_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1366), sizeof (t1366), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 15, 0, 2};
#include "t2001.h"
// Metadata Definition System.Security.Cryptography.SHA1Internal
extern TypeInfo t2001_TI;
#include "t2001MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10566_MI = 
{
	".ctor", (methodPointerType)&m10566, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4603, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2001_m10567_ParameterInfos[] = 
{
	{"rgb", 0, 134223331, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ibStart", 1, 134223332, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223333, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10567_MI = 
{
	"HashCore", (methodPointerType)&m10567, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2001_m10567_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4604, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10568_MI = 
{
	"HashFinal", (methodPointerType)&m10568, &t2001_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4605, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10569_MI = 
{
	"Initialize", (methodPointerType)&m10569, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4606, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t2001_m10570_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223334, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 1, 134223335, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10570_MI = 
{
	"ProcessBlock", (methodPointerType)&m10570, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t2001_m10570_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4607, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1412_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t2001_m10571_ParameterInfos[] = 
{
	{"buff", 0, 134223336, &EmptyCustomAttributesCache, &t1412_0_0_0},
	{"input", 1, 134223337, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 2, 134223338, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10571_MI = 
{
	"InitialiseBuff", (methodPointerType)&m10571, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t2001_m10571_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4608, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1412_0_0_0;
static ParameterInfo t2001_m10572_ParameterInfos[] = 
{
	{"buff", 0, 134223339, &EmptyCustomAttributesCache, &t1412_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10572_MI = 
{
	"FillBuff", (methodPointerType)&m10572, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2001_m10572_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4609, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2001_m10573_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223340, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 1, 134223341, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223342, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10573_MI = 
{
	"ProcessFinalBlock", (methodPointerType)&m10573, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2001_m10573_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4610, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2001_m10574_ParameterInfos[] = 
{
	{"length", 0, 134223343, &EmptyCustomAttributesCache, &t889_0_0_0},
	{"buffer", 1, 134223344, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"position", 2, 134223345, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10574_MI = 
{
	"AddLength", (methodPointerType)&m10574, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t299_t9_t125, t2001_m10574_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 3, false, false, 4611, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2001_MIs[] =
{
	&m10566_MI,
	&m10567_MI,
	&m10568_MI,
	&m10569_MI,
	&m10570_MI,
	&m10571_MI,
	&m10572_MI,
	&m10573_MI,
	&m10574_MI,
	NULL
};
extern Il2CppType t1412_0_0_1;
FieldInfo t2001_f0_FieldInfo = 
{
	"_H", &t1412_0_0_1, &t2001_TI, offsetof(t2001, f0), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2001_f1_FieldInfo = 
{
	"count", &t889_0_0_1, &t2001_TI, offsetof(t2001, f1), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t2001_f2_FieldInfo = 
{
	"_ProcessingBuffer", &t730_0_0_1, &t2001_TI, offsetof(t2001, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2001_f3_FieldInfo = 
{
	"_ProcessingBufferCount", &t125_0_0_1, &t2001_TI, offsetof(t2001, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_1;
FieldInfo t2001_f4_FieldInfo = 
{
	"buff", &t1412_0_0_1, &t2001_TI, offsetof(t2001, f4), &EmptyCustomAttributesCache};
static FieldInfo* t2001_FIs[] =
{
	&t2001_f0_FieldInfo,
	&t2001_f1_FieldInfo,
	&t2001_f2_FieldInfo,
	&t2001_f3_FieldInfo,
	&t2001_f4_FieldInfo,
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
	&g_mscorlib_dll_Image, NULL, "SHA1Internal", "System.Security.Cryptography", t2001_MIs, NULL, t2001_FIs, NULL, &t2001_TI, NULL, &EmptyCustomAttributesCache, &t2001_0_0_0, &t2001_1_0_0, &t2001_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2001), sizeof (t2001), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 0, 5, 0, 0, 4, 0, 0};
#include "t2002.h"
// Metadata Definition System.Security.Cryptography.SHA1CryptoServiceProvider
extern TypeInfo t2002_TI;
#include "t2002MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10575_MI = 
{
	".ctor", (methodPointerType)&m10575, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4612, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10576_MI = 
{
	"Finalize", (methodPointerType)&m10576, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4613, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t2002_m10577_ParameterInfos[] = 
{
	{"disposing", 0, 134223346, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10577_MI = 
{
	"Dispose", (methodPointerType)&m10577, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t2002_m10577_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 14, 1, false, false, 4614, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2002_m10578_ParameterInfos[] = 
{
	{"rgb", 0, 134223347, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ibStart", 1, 134223348, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223349, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10578_MI = 
{
	"HashCore", (methodPointerType)&m10578, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2002_m10578_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4615, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10579_MI = 
{
	"HashFinal", (methodPointerType)&m10579, &t2002_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4616, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10580_MI = 
{
	"Initialize", (methodPointerType)&m10580, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4617, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2002_MIs[] =
{
	&m10575_MI,
	&m10576_MI,
	&m10577_MI,
	&m10578_MI,
	&m10579_MI,
	&m10580_MI,
	NULL
};
extern Il2CppType t2001_0_0_1;
FieldInfo t2002_f4_FieldInfo = 
{
	"sha", &t2001_0_0_1, &t2002_TI, offsetof(t2002, f4), &EmptyCustomAttributesCache};
static FieldInfo* t2002_FIs[] =
{
	&t2002_f4_FieldInfo,
	NULL
};
extern MethodInfo m10576_MI;
extern MethodInfo m10578_MI;
extern MethodInfo m10579_MI;
extern MethodInfo m10580_MI;
extern MethodInfo m10577_MI;
static Il2CppMethodReference t2002_VT[] =
{
	&m671_MI,
	&m10576_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	&m10578_MI,
	&m10579_MI,
	&m6901_MI,
	&m10580_MI,
	&m10577_MI,
};
static bool t2002_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2002_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t2002_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, NULL, t2002_IOs, &t1366_0_0_0, t2002_VT, t2002_VTIGM, NULL};
TypeInfo t2002_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA1CryptoServiceProvider", "System.Security.Cryptography", t2002_MIs, NULL, t2002_FIs, NULL, &t2002_TI, NULL, &t2002__CustomAttributeCache, &t2002_0_0_0, &t2002_1_0_0, &t2002_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2002), sizeof (t2002), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 0, 1, 0, 0, 15, 0, 2};
#include "t2003.h"
// Metadata Definition System.Security.Cryptography.SHA1Managed
extern TypeInfo t2003_TI;
#include "t2003MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10581_MI = 
{
	".ctor", (methodPointerType)&m10581, &t2003_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4618, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2003_m10582_ParameterInfos[] = 
{
	{"rgb", 0, 134223350, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ibStart", 1, 134223351, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223352, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10582_MI = 
{
	"HashCore", (methodPointerType)&m10582, &t2003_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2003_m10582_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4619, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10583_MI = 
{
	"HashFinal", (methodPointerType)&m10583, &t2003_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4620, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10584_MI = 
{
	"Initialize", (methodPointerType)&m10584, &t2003_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4621, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2003_MIs[] =
{
	&m10581_MI,
	&m10582_MI,
	&m10583_MI,
	&m10584_MI,
	NULL
};
extern Il2CppType t2001_0_0_1;
FieldInfo t2003_f4_FieldInfo = 
{
	"sha", &t2001_0_0_1, &t2003_TI, offsetof(t2003, f4), &EmptyCustomAttributesCache};
static FieldInfo* t2003_FIs[] =
{
	&t2003_f4_FieldInfo,
	NULL
};
extern MethodInfo m10582_MI;
extern MethodInfo m10583_MI;
extern MethodInfo m10584_MI;
static Il2CppMethodReference t2003_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	&m10582_MI,
	&m10583_MI,
	&m6901_MI,
	&m10584_MI,
	&m7049_MI,
};
static bool t2003_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2003_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t2003_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2003__CustomAttributeCache = {
1,
NULL,
&t2003_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2003_0_0_0;
extern Il2CppType t2003_1_0_0;
struct t2003;
extern CustomAttributesCache t2003__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2003_DM = 
{
	NULL, NULL, NULL, t2003_IOs, &t1366_0_0_0, t2003_VT, t2003_VTIGM, NULL};
TypeInfo t2003_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA1Managed", "System.Security.Cryptography", t2003_MIs, NULL, t2003_FIs, NULL, &t2003_TI, NULL, &t2003__CustomAttributeCache, &t2003_0_0_0, &t2003_1_0_0, &t2003_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2003), sizeof (t2003), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 15, 0, 2};
#include "t1534.h"
// Metadata Definition System.Security.Cryptography.SHA256
extern TypeInfo t1534_TI;
#include "t1534MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10585_MI = 
{
	".ctor", (methodPointerType)&m10585, &t1534_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4622, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1534_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6933_MI = 
{
	"Create", (methodPointerType)&m6933, &t1534_TI, &t1534_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4623, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1534_m10586_ParameterInfos[] = 
{
	{"hashName", 0, 134223353, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1534_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10586_MI = 
{
	"Create", (methodPointerType)&m10586, &t1534_TI, &t1534_0_0_0, RuntimeInvoker_t9_t9, t1534_m10586_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4624, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1534_MIs[] =
{
	&m10585_MI,
	&m6933_MI,
	&m10586_MI,
	NULL
};
static Il2CppMethodReference t1534_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	NULL,
	NULL,
	&m6901_MI,
	NULL,
	&m7049_MI,
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
};
static Il2CppInterfaceOffsetPair t1534_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t1534_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, NULL, t1534_IOs, &t1368_0_0_0, t1534_VT, t1534_VTIGM, NULL};
TypeInfo t1534_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA256", "System.Security.Cryptography", t1534_MIs, NULL, NULL, NULL, &t1534_TI, NULL, &t1534__CustomAttributeCache, &t1534_0_0_0, &t1534_1_0_0, &t1534_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1534), sizeof (t1534), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 15, 0, 2};
#include "t2004.h"
// Metadata Definition System.Security.Cryptography.SHA256Managed
extern TypeInfo t2004_TI;
#include "t2004MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10587_MI = 
{
	".ctor", (methodPointerType)&m10587, &t2004_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4625, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2004_m10588_ParameterInfos[] = 
{
	{"rgb", 0, 134223354, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ibStart", 1, 134223355, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223356, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10588_MI = 
{
	"HashCore", (methodPointerType)&m10588, &t2004_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2004_m10588_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4626, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10589_MI = 
{
	"HashFinal", (methodPointerType)&m10589, &t2004_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4627, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10590_MI = 
{
	"Initialize", (methodPointerType)&m10590, &t2004_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4628, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2004_m10591_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223357, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 1, 134223358, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10591_MI = 
{
	"ProcessBlock", (methodPointerType)&m10591, &t2004_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t2004_m10591_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4629, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2004_m10592_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223359, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 1, 134223360, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223361, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10592_MI = 
{
	"ProcessFinalBlock", (methodPointerType)&m10592, &t2004_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2004_m10592_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4630, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2004_m10593_ParameterInfos[] = 
{
	{"length", 0, 134223362, &EmptyCustomAttributesCache, &t889_0_0_0},
	{"buffer", 1, 134223363, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"position", 2, 134223364, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10593_MI = 
{
	"AddLength", (methodPointerType)&m10593, &t2004_TI, &t122_0_0_0, RuntimeInvoker_t122_t299_t9_t125, t2004_m10593_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 3, false, false, 4631, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2004_MIs[] =
{
	&m10587_MI,
	&m10588_MI,
	&m10589_MI,
	&m10590_MI,
	&m10591_MI,
	&m10592_MI,
	&m10593_MI,
	NULL
};
extern Il2CppType t1412_0_0_1;
FieldInfo t2004_f4_FieldInfo = 
{
	"_H", &t1412_0_0_1, &t2004_TI, offsetof(t2004, f4), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2004_f5_FieldInfo = 
{
	"count", &t889_0_0_1, &t2004_TI, offsetof(t2004, f5), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t2004_f6_FieldInfo = 
{
	"_ProcessingBuffer", &t730_0_0_1, &t2004_TI, offsetof(t2004, f6), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2004_f7_FieldInfo = 
{
	"_ProcessingBufferCount", &t125_0_0_1, &t2004_TI, offsetof(t2004, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_1;
FieldInfo t2004_f8_FieldInfo = 
{
	"buff", &t1412_0_0_1, &t2004_TI, offsetof(t2004, f8), &EmptyCustomAttributesCache};
static FieldInfo* t2004_FIs[] =
{
	&t2004_f4_FieldInfo,
	&t2004_f5_FieldInfo,
	&t2004_f6_FieldInfo,
	&t2004_f7_FieldInfo,
	&t2004_f8_FieldInfo,
	NULL
};
extern MethodInfo m10588_MI;
extern MethodInfo m10589_MI;
extern MethodInfo m10590_MI;
static Il2CppMethodReference t2004_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	&m10588_MI,
	&m10589_MI,
	&m6901_MI,
	&m10590_MI,
	&m7049_MI,
};
static bool t2004_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2004_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t2004_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2004__CustomAttributeCache = {
1,
NULL,
&t2004_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2004_0_0_0;
extern Il2CppType t2004_1_0_0;
struct t2004;
extern CustomAttributesCache t2004__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2004_DM = 
{
	NULL, NULL, NULL, t2004_IOs, &t1534_0_0_0, t2004_VT, t2004_VTIGM, NULL};
TypeInfo t2004_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA256Managed", "System.Security.Cryptography", t2004_MIs, NULL, t2004_FIs, NULL, &t2004_TI, NULL, &t2004__CustomAttributeCache, &t2004_0_0_0, &t2004_1_0_0, &t2004_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2004), sizeof (t2004), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 7, 0, 5, 0, 0, 15, 0, 2};
#include "t2005.h"
// Metadata Definition System.Security.Cryptography.SHA384
extern TypeInfo t2005_TI;
#include "t2005MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10594_MI = 
{
	".ctor", (methodPointerType)&m10594, &t2005_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4632, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2005_MIs[] =
{
	&m10594_MI,
	NULL
};
static Il2CppMethodReference t2005_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	NULL,
	NULL,
	&m6901_MI,
	NULL,
	&m7049_MI,
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
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2005_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t2005_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, NULL, t2005_IOs, &t1368_0_0_0, t2005_VT, t2005_VTIGM, NULL};
TypeInfo t2005_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA384", "System.Security.Cryptography", t2005_MIs, NULL, NULL, NULL, &t2005_TI, NULL, &t2005__CustomAttributeCache, &t2005_0_0_0, &t2005_1_0_0, &t2005_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2005), sizeof (t2005), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 15, 0, 2};
#include "t2006.h"
// Metadata Definition System.Security.Cryptography.SHA384Managed
extern TypeInfo t2006_TI;
#include "t2006MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10595_MI = 
{
	".ctor", (methodPointerType)&m10595, &t2006_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4633, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t2006_m10596_ParameterInfos[] = 
{
	{"reuse", 0, 134223365, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10596_MI = 
{
	"Initialize", (methodPointerType)&m10596, &t2006_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t2006_m10596_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4634, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10597_MI = 
{
	"Initialize", (methodPointerType)&m10597, &t2006_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4635, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2006_m10598_ParameterInfos[] = 
{
	{"rgb", 0, 134223366, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ibStart", 1, 134223367, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223368, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10598_MI = 
{
	"HashCore", (methodPointerType)&m10598, &t2006_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2006_m10598_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4636, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10599_MI = 
{
	"HashFinal", (methodPointerType)&m10599, &t2006_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4637, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t575_0_0_0;
extern Il2CppType t575_0_0_0;
static ParameterInfo t2006_m10600_ParameterInfos[] = 
{
	{"input", 0, 134223369, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10600_MI = 
{
	"update", (methodPointerType)&m10600, &t2006_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t2006_m10600_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4638, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2006_m10601_ParameterInfos[] = 
{
	{"input", 0, 134223370, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inOff", 1, 134223371, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10601_MI = 
{
	"processWord", (methodPointerType)&m10601, &t2006_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t2006_m10601_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4639, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2006_m10602_ParameterInfos[] = 
{
	{"word", 0, 134223372, &EmptyCustomAttributesCache, &t889_0_0_0},
	{"output", 1, 134223373, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"outOff", 2, 134223374, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10602_MI = 
{
	"unpackWord", (methodPointerType)&m10602, &t2006_TI, &t122_0_0_0, RuntimeInvoker_t122_t299_t9_t125, t2006_m10602_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4640, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10603_MI = 
{
	"adjustByteCounts", (methodPointerType)&m10603, &t2006_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4641, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
extern Il2CppType t889_0_0_0;
static ParameterInfo t2006_m10604_ParameterInfos[] = 
{
	{"lowW", 0, 134223375, &EmptyCustomAttributesCache, &t889_0_0_0},
	{"hiW", 1, 134223376, &EmptyCustomAttributesCache, &t889_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10604_MI = 
{
	"processLength", (methodPointerType)&m10604, &t2006_TI, &t122_0_0_0, RuntimeInvoker_t122_t299_t299, t2006_m10604_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4642, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10605_MI = 
{
	"processBlock", (methodPointerType)&m10605, &t2006_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4643, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2006_MIs[] =
{
	&m10595_MI,
	&m10596_MI,
	&m10597_MI,
	&m10598_MI,
	&m10599_MI,
	&m10600_MI,
	&m10601_MI,
	&m10602_MI,
	&m10603_MI,
	&m10604_MI,
	&m10605_MI,
	NULL
};
extern Il2CppType t730_0_0_1;
FieldInfo t2006_f4_FieldInfo = 
{
	"xBuf", &t730_0_0_1, &t2006_TI, offsetof(t2006, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2006_f5_FieldInfo = 
{
	"xBufOff", &t125_0_0_1, &t2006_TI, offsetof(t2006, f5), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2006_f6_FieldInfo = 
{
	"byteCount1", &t889_0_0_1, &t2006_TI, offsetof(t2006, f6), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2006_f7_FieldInfo = 
{
	"byteCount2", &t889_0_0_1, &t2006_TI, offsetof(t2006, f7), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2006_f8_FieldInfo = 
{
	"H1", &t889_0_0_1, &t2006_TI, offsetof(t2006, f8), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2006_f9_FieldInfo = 
{
	"H2", &t889_0_0_1, &t2006_TI, offsetof(t2006, f9), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2006_f10_FieldInfo = 
{
	"H3", &t889_0_0_1, &t2006_TI, offsetof(t2006, f10), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2006_f11_FieldInfo = 
{
	"H4", &t889_0_0_1, &t2006_TI, offsetof(t2006, f11), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2006_f12_FieldInfo = 
{
	"H5", &t889_0_0_1, &t2006_TI, offsetof(t2006, f12), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2006_f13_FieldInfo = 
{
	"H6", &t889_0_0_1, &t2006_TI, offsetof(t2006, f13), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2006_f14_FieldInfo = 
{
	"H7", &t889_0_0_1, &t2006_TI, offsetof(t2006, f14), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2006_f15_FieldInfo = 
{
	"H8", &t889_0_0_1, &t2006_TI, offsetof(t2006, f15), &EmptyCustomAttributesCache};
extern Il2CppType t2007_0_0_1;
FieldInfo t2006_f16_FieldInfo = 
{
	"W", &t2007_0_0_1, &t2006_TI, offsetof(t2006, f16), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2006_f17_FieldInfo = 
{
	"wOff", &t125_0_0_1, &t2006_TI, offsetof(t2006, f17), &EmptyCustomAttributesCache};
static FieldInfo* t2006_FIs[] =
{
	&t2006_f4_FieldInfo,
	&t2006_f5_FieldInfo,
	&t2006_f6_FieldInfo,
	&t2006_f7_FieldInfo,
	&t2006_f8_FieldInfo,
	&t2006_f9_FieldInfo,
	&t2006_f10_FieldInfo,
	&t2006_f11_FieldInfo,
	&t2006_f12_FieldInfo,
	&t2006_f13_FieldInfo,
	&t2006_f14_FieldInfo,
	&t2006_f15_FieldInfo,
	&t2006_f16_FieldInfo,
	&t2006_f17_FieldInfo,
	NULL
};
extern MethodInfo m10598_MI;
extern MethodInfo m10599_MI;
extern MethodInfo m10597_MI;
static Il2CppMethodReference t2006_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	&m10598_MI,
	&m10599_MI,
	&m6901_MI,
	&m10597_MI,
	&m7049_MI,
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
};
static Il2CppInterfaceOffsetPair t2006_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t2006_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, NULL, t2006_IOs, &t2005_0_0_0, t2006_VT, t2006_VTIGM, NULL};
TypeInfo t2006_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA384Managed", "System.Security.Cryptography", t2006_MIs, NULL, t2006_FIs, NULL, &t2006_TI, NULL, &t2006__CustomAttributeCache, &t2006_0_0_0, &t2006_1_0_0, &t2006_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2006), sizeof (t2006), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 11, 0, 14, 0, 0, 15, 0, 2};
#include "t2008.h"
// Metadata Definition System.Security.Cryptography.SHA512
extern TypeInfo t2008_TI;
#include "t2008MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10606_MI = 
{
	".ctor", (methodPointerType)&m10606, &t2008_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4644, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2008_MIs[] =
{
	&m10606_MI,
	NULL
};
static Il2CppMethodReference t2008_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	NULL,
	NULL,
	&m6901_MI,
	NULL,
	&m7049_MI,
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
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2008_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t2008_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
struct t2008;
extern CustomAttributesCache t2008__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2008_DM = 
{
	NULL, NULL, NULL, t2008_IOs, &t1368_0_0_0, t2008_VT, t2008_VTIGM, NULL};
TypeInfo t2008_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA512", "System.Security.Cryptography", t2008_MIs, NULL, NULL, NULL, &t2008_TI, NULL, &t2008__CustomAttributeCache, &t2008_0_0_0, &t2008_1_0_0, &t2008_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2008), sizeof (t2008), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 15, 0, 2};
#include "t2009.h"
// Metadata Definition System.Security.Cryptography.SHA512Managed
extern TypeInfo t2009_TI;
#include "t2009MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10607_MI = 
{
	".ctor", (methodPointerType)&m10607, &t2009_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4645, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t2009_m10608_ParameterInfos[] = 
{
	{"reuse", 0, 134223377, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10608_MI = 
{
	"Initialize", (methodPointerType)&m10608, &t2009_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t2009_m10608_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4646, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10609_MI = 
{
	"Initialize", (methodPointerType)&m10609, &t2009_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4647, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2009_m10610_ParameterInfos[] = 
{
	{"rgb", 0, 134223378, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ibStart", 1, 134223379, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223380, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10610_MI = 
{
	"HashCore", (methodPointerType)&m10610, &t2009_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2009_m10610_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4648, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10611_MI = 
{
	"HashFinal", (methodPointerType)&m10611, &t2009_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4649, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t575_0_0_0;
static ParameterInfo t2009_m10612_ParameterInfos[] = 
{
	{"input", 0, 134223381, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10612_MI = 
{
	"update", (methodPointerType)&m10612, &t2009_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t2009_m10612_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4650, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2009_m10613_ParameterInfos[] = 
{
	{"input", 0, 134223382, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inOff", 1, 134223383, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10613_MI = 
{
	"processWord", (methodPointerType)&m10613, &t2009_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t2009_m10613_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4651, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2009_m10614_ParameterInfos[] = 
{
	{"word", 0, 134223384, &EmptyCustomAttributesCache, &t889_0_0_0},
	{"output", 1, 134223385, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"outOff", 2, 134223386, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10614_MI = 
{
	"unpackWord", (methodPointerType)&m10614, &t2009_TI, &t122_0_0_0, RuntimeInvoker_t122_t299_t9_t125, t2009_m10614_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4652, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10615_MI = 
{
	"adjustByteCounts", (methodPointerType)&m10615, &t2009_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4653, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
extern Il2CppType t889_0_0_0;
static ParameterInfo t2009_m10616_ParameterInfos[] = 
{
	{"lowW", 0, 134223387, &EmptyCustomAttributesCache, &t889_0_0_0},
	{"hiW", 1, 134223388, &EmptyCustomAttributesCache, &t889_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10616_MI = 
{
	"processLength", (methodPointerType)&m10616, &t2009_TI, &t122_0_0_0, RuntimeInvoker_t122_t299_t299, t2009_m10616_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4654, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10617_MI = 
{
	"processBlock", (methodPointerType)&m10617, &t2009_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4655, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2009_m10618_ParameterInfos[] = 
{
	{"x", 0, 134223389, &EmptyCustomAttributesCache, &t889_0_0_0},
	{"n", 1, 134223390, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t889_0_0_0;
extern void* RuntimeInvoker_t889_t299_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10618_MI = 
{
	"rotateRight", (methodPointerType)&m10618, &t2009_TI, &t889_0_0_0, RuntimeInvoker_t889_t299_t125, t2009_m10618_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4656, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
extern Il2CppType t889_0_0_0;
extern Il2CppType t889_0_0_0;
static ParameterInfo t2009_m10619_ParameterInfos[] = 
{
	{"x", 0, 134223391, &EmptyCustomAttributesCache, &t889_0_0_0},
	{"y", 1, 134223392, &EmptyCustomAttributesCache, &t889_0_0_0},
	{"z", 2, 134223393, &EmptyCustomAttributesCache, &t889_0_0_0},
};
extern Il2CppType t889_0_0_0;
extern void* RuntimeInvoker_t889_t299_t299_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10619_MI = 
{
	"Ch", (methodPointerType)&m10619, &t2009_TI, &t889_0_0_0, RuntimeInvoker_t889_t299_t299_t299, t2009_m10619_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4657, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
extern Il2CppType t889_0_0_0;
extern Il2CppType t889_0_0_0;
static ParameterInfo t2009_m10620_ParameterInfos[] = 
{
	{"x", 0, 134223394, &EmptyCustomAttributesCache, &t889_0_0_0},
	{"y", 1, 134223395, &EmptyCustomAttributesCache, &t889_0_0_0},
	{"z", 2, 134223396, &EmptyCustomAttributesCache, &t889_0_0_0},
};
extern Il2CppType t889_0_0_0;
extern void* RuntimeInvoker_t889_t299_t299_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10620_MI = 
{
	"Maj", (methodPointerType)&m10620, &t2009_TI, &t889_0_0_0, RuntimeInvoker_t889_t299_t299_t299, t2009_m10620_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4658, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
static ParameterInfo t2009_m10621_ParameterInfos[] = 
{
	{"x", 0, 134223397, &EmptyCustomAttributesCache, &t889_0_0_0},
};
extern Il2CppType t889_0_0_0;
extern void* RuntimeInvoker_t889_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10621_MI = 
{
	"Sum0", (methodPointerType)&m10621, &t2009_TI, &t889_0_0_0, RuntimeInvoker_t889_t299, t2009_m10621_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4659, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
static ParameterInfo t2009_m10622_ParameterInfos[] = 
{
	{"x", 0, 134223398, &EmptyCustomAttributesCache, &t889_0_0_0},
};
extern Il2CppType t889_0_0_0;
extern void* RuntimeInvoker_t889_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10622_MI = 
{
	"Sum1", (methodPointerType)&m10622, &t2009_TI, &t889_0_0_0, RuntimeInvoker_t889_t299, t2009_m10622_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4660, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
static ParameterInfo t2009_m10623_ParameterInfos[] = 
{
	{"x", 0, 134223399, &EmptyCustomAttributesCache, &t889_0_0_0},
};
extern Il2CppType t889_0_0_0;
extern void* RuntimeInvoker_t889_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10623_MI = 
{
	"Sigma0", (methodPointerType)&m10623, &t2009_TI, &t889_0_0_0, RuntimeInvoker_t889_t299, t2009_m10623_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4661, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
static ParameterInfo t2009_m10624_ParameterInfos[] = 
{
	{"x", 0, 134223400, &EmptyCustomAttributesCache, &t889_0_0_0},
};
extern Il2CppType t889_0_0_0;
extern void* RuntimeInvoker_t889_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10624_MI = 
{
	"Sigma1", (methodPointerType)&m10624, &t2009_TI, &t889_0_0_0, RuntimeInvoker_t889_t299, t2009_m10624_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4662, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2009_MIs[] =
{
	&m10607_MI,
	&m10608_MI,
	&m10609_MI,
	&m10610_MI,
	&m10611_MI,
	&m10612_MI,
	&m10613_MI,
	&m10614_MI,
	&m10615_MI,
	&m10616_MI,
	&m10617_MI,
	&m10618_MI,
	&m10619_MI,
	&m10620_MI,
	&m10621_MI,
	&m10622_MI,
	&m10623_MI,
	&m10624_MI,
	NULL
};
extern Il2CppType t730_0_0_1;
FieldInfo t2009_f4_FieldInfo = 
{
	"xBuf", &t730_0_0_1, &t2009_TI, offsetof(t2009, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2009_f5_FieldInfo = 
{
	"xBufOff", &t125_0_0_1, &t2009_TI, offsetof(t2009, f5), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2009_f6_FieldInfo = 
{
	"byteCount1", &t889_0_0_1, &t2009_TI, offsetof(t2009, f6), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2009_f7_FieldInfo = 
{
	"byteCount2", &t889_0_0_1, &t2009_TI, offsetof(t2009, f7), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2009_f8_FieldInfo = 
{
	"H1", &t889_0_0_1, &t2009_TI, offsetof(t2009, f8), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2009_f9_FieldInfo = 
{
	"H2", &t889_0_0_1, &t2009_TI, offsetof(t2009, f9), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2009_f10_FieldInfo = 
{
	"H3", &t889_0_0_1, &t2009_TI, offsetof(t2009, f10), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2009_f11_FieldInfo = 
{
	"H4", &t889_0_0_1, &t2009_TI, offsetof(t2009, f11), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2009_f12_FieldInfo = 
{
	"H5", &t889_0_0_1, &t2009_TI, offsetof(t2009, f12), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2009_f13_FieldInfo = 
{
	"H6", &t889_0_0_1, &t2009_TI, offsetof(t2009, f13), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2009_f14_FieldInfo = 
{
	"H7", &t889_0_0_1, &t2009_TI, offsetof(t2009, f14), &EmptyCustomAttributesCache};
extern Il2CppType t889_0_0_1;
FieldInfo t2009_f15_FieldInfo = 
{
	"H8", &t889_0_0_1, &t2009_TI, offsetof(t2009, f15), &EmptyCustomAttributesCache};
extern Il2CppType t2007_0_0_1;
FieldInfo t2009_f16_FieldInfo = 
{
	"W", &t2007_0_0_1, &t2009_TI, offsetof(t2009, f16), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2009_f17_FieldInfo = 
{
	"wOff", &t125_0_0_1, &t2009_TI, offsetof(t2009, f17), &EmptyCustomAttributesCache};
static FieldInfo* t2009_FIs[] =
{
	&t2009_f4_FieldInfo,
	&t2009_f5_FieldInfo,
	&t2009_f6_FieldInfo,
	&t2009_f7_FieldInfo,
	&t2009_f8_FieldInfo,
	&t2009_f9_FieldInfo,
	&t2009_f10_FieldInfo,
	&t2009_f11_FieldInfo,
	&t2009_f12_FieldInfo,
	&t2009_f13_FieldInfo,
	&t2009_f14_FieldInfo,
	&t2009_f15_FieldInfo,
	&t2009_f16_FieldInfo,
	&t2009_f17_FieldInfo,
	NULL
};
extern MethodInfo m10610_MI;
extern MethodInfo m10611_MI;
extern MethodInfo m10609_MI;
static Il2CppMethodReference t2009_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7047_MI,
	&m7048_MI,
	&m6913_MI,
	&m6914_MI,
	&m7048_MI,
	&m6915_MI,
	&m10610_MI,
	&m10611_MI,
	&m6901_MI,
	&m10609_MI,
	&m7049_MI,
};
static bool t2009_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2009_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t2009_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2009__CustomAttributeCache = {
1,
NULL,
&t2009_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2009_0_0_0;
extern Il2CppType t2009_1_0_0;
struct t2009;
extern CustomAttributesCache t2009__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2009_DM = 
{
	NULL, NULL, NULL, t2009_IOs, &t2008_0_0_0, t2009_VT, t2009_VTIGM, NULL};
TypeInfo t2009_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA512Managed", "System.Security.Cryptography", t2009_MIs, NULL, t2009_FIs, NULL, &t2009_TI, NULL, &t2009__CustomAttributeCache, &t2009_0_0_0, &t2009_1_0_0, &t2009_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2009), sizeof (t2009), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 18, 0, 14, 0, 0, 15, 0, 2};
#include "t2010.h"
// Metadata Definition System.Security.Cryptography.SHAConstants
extern TypeInfo t2010_TI;
#include "t2010MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10625_MI = 
{
	".cctor", (methodPointerType)&m10625, &t2010_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4663, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2010_MIs[] =
{
	&m10625_MI,
	NULL
};
extern Il2CppType t1412_0_0_54;
FieldInfo t2010_f0_FieldInfo = 
{
	"K1", &t1412_0_0_54, &t2010_TI, offsetof(t2010_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2007_0_0_54;
FieldInfo t2010_f1_FieldInfo = 
{
	"K2", &t2007_0_0_54, &t2010_TI, offsetof(t2010_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2010_FIs[] =
{
	&t2010_f0_FieldInfo,
	&t2010_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t2010_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2010_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2010_0_0_0;
extern Il2CppType t2010_1_0_0;
struct t2010;
const Il2CppTypeDefinitionMetadata t2010_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2010_VT, t2010_VTIGM, NULL};
TypeInfo t2010_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHAConstants", "System.Security.Cryptography", t2010_MIs, NULL, t2010_FIs, NULL, &t2010_TI, NULL, &EmptyCustomAttributesCache, &t2010_0_0_0, &t2010_1_0_0, &t2010_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2010), sizeof (t2010), 0, -1, sizeof(t2010_SFs), 0, -1, 1048960, 0, 0, false, false, false, false, false, false, false, false, true, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t2011.h"
// Metadata Definition System.Security.Cryptography.SignatureDescription
extern TypeInfo t2011_TI;
#include "t2011MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10626_MI = 
{
	".ctor", (methodPointerType)&m10626, &t2011_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4664, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2011_m10627_ParameterInfos[] = 
{
	{"value", 0, 134223401, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10627_MI = 
{
	"set_DeformatterAlgorithm", (methodPointerType)&m10627, &t2011_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2011_m10627_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4665, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2011_m10628_ParameterInfos[] = 
{
	{"value", 0, 134223402, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10628_MI = 
{
	"set_DigestAlgorithm", (methodPointerType)&m10628, &t2011_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2011_m10628_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4666, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2011_m10629_ParameterInfos[] = 
{
	{"value", 0, 134223403, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10629_MI = 
{
	"set_FormatterAlgorithm", (methodPointerType)&m10629, &t2011_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2011_m10629_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4667, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2011_m10630_ParameterInfos[] = 
{
	{"value", 0, 134223404, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10630_MI = 
{
	"set_KeyAlgorithm", (methodPointerType)&m10630, &t2011_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2011_m10630_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4668, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2011_MIs[] =
{
	&m10626_MI,
	&m10627_MI,
	&m10628_MI,
	&m10629_MI,
	&m10630_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2011_f0_FieldInfo = 
{
	"_DeformatterAlgorithm", &t2_0_0_1, &t2011_TI, offsetof(t2011, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2011_f1_FieldInfo = 
{
	"_DigestAlgorithm", &t2_0_0_1, &t2011_TI, offsetof(t2011, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2011_f2_FieldInfo = 
{
	"_FormatterAlgorithm", &t2_0_0_1, &t2011_TI, offsetof(t2011, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2011_f3_FieldInfo = 
{
	"_KeyAlgorithm", &t2_0_0_1, &t2011_TI, offsetof(t2011, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2011_FIs[] =
{
	&t2011_f0_FieldInfo,
	&t2011_f1_FieldInfo,
	&t2011_f2_FieldInfo,
	&t2011_f3_FieldInfo,
	NULL
};
extern MethodInfo m10627_MI;
static PropertyInfo t2011____DeformatterAlgorithm_PropertyInfo = 
{
	&t2011_TI, "DeformatterAlgorithm", NULL, &m10627_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10628_MI;
static PropertyInfo t2011____DigestAlgorithm_PropertyInfo = 
{
	&t2011_TI, "DigestAlgorithm", NULL, &m10628_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10629_MI;
static PropertyInfo t2011____FormatterAlgorithm_PropertyInfo = 
{
	&t2011_TI, "FormatterAlgorithm", NULL, &m10629_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10630_MI;
static PropertyInfo t2011____KeyAlgorithm_PropertyInfo = 
{
	&t2011_TI, "KeyAlgorithm", NULL, &m10630_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2011_PIs[] =
{
	&t2011____DeformatterAlgorithm_PropertyInfo,
	&t2011____DigestAlgorithm_PropertyInfo,
	&t2011____FormatterAlgorithm_PropertyInfo,
	&t2011____KeyAlgorithm_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2011_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2011_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t2011_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2011__CustomAttributeCache = {
1,
NULL,
&t2011_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2011_0_0_0;
extern Il2CppType t2011_1_0_0;
struct t2011;
extern CustomAttributesCache t2011__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2011_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2011_VT, t2011_VTIGM, NULL};
TypeInfo t2011_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SignatureDescription", "System.Security.Cryptography", t2011_MIs, t2011_PIs, t2011_FIs, NULL, &t2011_TI, NULL, &t2011__CustomAttributeCache, &t2011_0_0_0, &t2011_1_0_0, &t2011_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2011), sizeof (t2011), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 4, 4, 0, 0, 4, 0, 0};
#include "t2012.h"
// Metadata Definition System.Security.Cryptography.DSASignatureDescription
extern TypeInfo t2012_TI;
#include "t2012MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10631_MI = 
{
	".ctor", (methodPointerType)&m10631, &t2012_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4669, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2012_MIs[] =
{
	&m10631_MI,
	NULL
};
static Il2CppMethodReference t2012_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2012_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2012_0_0_0;
extern Il2CppType t2012_1_0_0;
struct t2012;
const Il2CppTypeDefinitionMetadata t2012_DM = 
{
	NULL, NULL, NULL, NULL, &t2011_0_0_0, t2012_VT, t2012_VTIGM, NULL};
TypeInfo t2012_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSASignatureDescription", "System.Security.Cryptography", t2012_MIs, NULL, NULL, NULL, &t2012_TI, NULL, &EmptyCustomAttributesCache, &t2012_0_0_0, &t2012_1_0_0, &t2012_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2012), sizeof (t2012), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t2013.h"
// Metadata Definition System.Security.Cryptography.RSAPKCS1SHA1SignatureDescription
extern TypeInfo t2013_TI;
#include "t2013MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10632_MI = 
{
	".ctor", (methodPointerType)&m10632, &t2013_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4670, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2013_MIs[] =
{
	&m10632_MI,
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
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2013_0_0_0;
extern Il2CppType t2013_1_0_0;
struct t2013;
const Il2CppTypeDefinitionMetadata t2013_DM = 
{
	NULL, NULL, NULL, NULL, &t2011_0_0_0, t2013_VT, t2013_VTIGM, NULL};
TypeInfo t2013_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSAPKCS1SHA1SignatureDescription", "System.Security.Cryptography", t2013_MIs, NULL, NULL, NULL, &t2013_TI, NULL, &EmptyCustomAttributesCache, &t2013_0_0_0, &t2013_1_0_0, &t2013_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2013), sizeof (t2013), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t1434.h"
// Metadata Definition System.Security.Cryptography.SymmetricAlgorithm
extern TypeInfo t1434_TI;
#include "t1434MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6907_MI = 
{
	".ctor", (methodPointerType)&m6907, &t1434_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4671, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7040_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m7040, &t1434_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 4672, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6894_MI = 
{
	"Finalize", (methodPointerType)&m6894, &t1434_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4673, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6927_MI = 
{
	"Clear", (methodPointerType)&m6927, &t1434_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4674, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1434_m7050_ParameterInfos[] = 
{
	{"disposing", 0, 134223405, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m7050_MI = 
{
	"Dispose", (methodPointerType)&m7050, &t1434_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1434_m7050_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 5, 1, false, false, 4675, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7041_MI = 
{
	"get_BlockSize", (methodPointerType)&m7041, &t1434_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 4676, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1434_m6964_ParameterInfos[] = 
{
	{"value", 0, 134223406, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6964_MI = 
{
	"set_BlockSize", (methodPointerType)&m6964, &t1434_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1434_m6964_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 7, 1, false, false, 4677, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7042_MI = 
{
	"get_FeedbackSize", (methodPointerType)&m7042, &t1434_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 4678, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10633_MI = 
{
	"get_IV", (methodPointerType)&m10633, &t1434_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 4679, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1434_m6923_ParameterInfos[] = 
{
	{"value", 0, 134223407, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6923_MI = 
{
	"set_IV", (methodPointerType)&m6923, &t1434_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1434_m6923_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 10, 1, false, false, 4680, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7051_MI = 
{
	"get_Key", (methodPointerType)&m7051, &t1434_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 4681, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1434_m6922_ParameterInfos[] = 
{
	{"value", 0, 134223408, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6922_MI = 
{
	"set_Key", (methodPointerType)&m6922, &t1434_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1434_m6922_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 12, 1, false, false, 4682, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7043_MI = 
{
	"get_KeySize", (methodPointerType)&m7043, &t1434_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 13, 0, false, false, 4683, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1434_m6963_ParameterInfos[] = 
{
	{"value", 0, 134223409, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6963_MI = 
{
	"set_KeySize", (methodPointerType)&m6963, &t1434_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1434_m6963_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 14, 1, false, false, 4684, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1433_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7044_MI = 
{
	"get_LegalKeySizes", (methodPointerType)&m7044, &t1434_TI, &t1433_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 15, 0, false, false, 4685, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1460_0_0_0;
extern void* RuntimeInvoker_t1460 (MethodInfo* method, void* obj, void** args);
MethodInfo m7045_MI = 
{
	"get_Mode", (methodPointerType)&m7045, &t1434_TI, &t1460_0_0_0, RuntimeInvoker_t1460, NULL, &EmptyCustomAttributesCache, 2502, 0, 16, 0, false, false, 4686, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1460_0_0_0;
extern Il2CppType t1460_0_0_0;
static ParameterInfo t1434_m6924_ParameterInfos[] = 
{
	{"value", 0, 134223410, &EmptyCustomAttributesCache, &t1460_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6924_MI = 
{
	"set_Mode", (methodPointerType)&m6924, &t1434_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1434_m6924_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 17, 1, false, false, 4687, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1544_0_0_0;
extern void* RuntimeInvoker_t1544 (MethodInfo* method, void* obj, void** args);
MethodInfo m7046_MI = 
{
	"get_Padding", (methodPointerType)&m7046, &t1434_TI, &t1544_0_0_0, RuntimeInvoker_t1544, NULL, &EmptyCustomAttributesCache, 2502, 0, 18, 0, false, false, 4688, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1544_0_0_0;
static ParameterInfo t1434_m6962_ParameterInfos[] = 
{
	{"value", 0, 134223411, &EmptyCustomAttributesCache, &t1544_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6962_MI = 
{
	"set_Padding", (methodPointerType)&m6962, &t1434_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1434_m6962_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 19, 1, false, false, 4689, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1425_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6925_MI = 
{
	"CreateDecryptor", (methodPointerType)&m6925, &t1434_TI, &t1425_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 20, 0, false, false, 4690, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1434_m12102_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223412, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"rgbIV", 1, 134223413, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t1425_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12102_MI = 
{
	"CreateDecryptor", NULL, &t1434_TI, &t1425_0_0_0, RuntimeInvoker_t9_t9_t9, t1434_m12102_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 21, 2, false, false, 4691, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1425_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6896_MI = 
{
	"CreateEncryptor", (methodPointerType)&m6896, &t1434_TI, &t1425_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 22, 0, false, false, 4692, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1434_m12103_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223414, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"rgbIV", 1, 134223415, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t1425_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12103_MI = 
{
	"CreateEncryptor", NULL, &t1434_TI, &t1425_0_0_0, RuntimeInvoker_t9_t9_t9, t1434_m12103_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 23, 2, false, false, 4693, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m12101_MI = 
{
	"GenerateIV", NULL, &t1434_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 1478, 0, 24, 0, false, false, 4694, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m12094_MI = 
{
	"GenerateKey", NULL, &t1434_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 1478, 0, 25, 0, false, false, 4695, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1434_m6921_ParameterInfos[] = 
{
	{"algName", 0, 134223416, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1434_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6921_MI = 
{
	"Create", (methodPointerType)&m6921, &t1434_TI, &t1434_0_0_0, RuntimeInvoker_t9_t9, t1434_m6921_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4696, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1434_MIs[] =
{
	&m6907_MI,
	&m7040_MI,
	&m6894_MI,
	&m6927_MI,
	&m7050_MI,
	&m7041_MI,
	&m6964_MI,
	&m7042_MI,
	&m10633_MI,
	&m6923_MI,
	&m7051_MI,
	&m6922_MI,
	&m7043_MI,
	&m6963_MI,
	&m7044_MI,
	&m7045_MI,
	&m6924_MI,
	&m7046_MI,
	&m6962_MI,
	&m6925_MI,
	&m12102_MI,
	&m6896_MI,
	&m12103_MI,
	&m12101_MI,
	&m12094_MI,
	&m6921_MI,
	NULL
};
extern Il2CppType t125_0_0_4;
FieldInfo t1434_f0_FieldInfo = 
{
	"BlockSizeValue", &t125_0_0_4, &t1434_TI, offsetof(t1434, f0), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_4;
FieldInfo t1434_f1_FieldInfo = 
{
	"IVValue", &t730_0_0_4, &t1434_TI, offsetof(t1434, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_4;
FieldInfo t1434_f2_FieldInfo = 
{
	"KeySizeValue", &t125_0_0_4, &t1434_TI, offsetof(t1434, f2), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_4;
FieldInfo t1434_f3_FieldInfo = 
{
	"KeyValue", &t730_0_0_4, &t1434_TI, offsetof(t1434, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1433_0_0_4;
FieldInfo t1434_f4_FieldInfo = 
{
	"LegalBlockSizesValue", &t1433_0_0_4, &t1434_TI, offsetof(t1434, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1433_0_0_4;
FieldInfo t1434_f5_FieldInfo = 
{
	"LegalKeySizesValue", &t1433_0_0_4, &t1434_TI, offsetof(t1434, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_4;
FieldInfo t1434_f6_FieldInfo = 
{
	"FeedbackSizeValue", &t125_0_0_4, &t1434_TI, offsetof(t1434, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1460_0_0_4;
FieldInfo t1434_f7_FieldInfo = 
{
	"ModeValue", &t1460_0_0_4, &t1434_TI, offsetof(t1434, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1544_0_0_4;
FieldInfo t1434_f8_FieldInfo = 
{
	"PaddingValue", &t1544_0_0_4, &t1434_TI, offsetof(t1434, f8), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1434_f9_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t1434_TI, offsetof(t1434, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1434_FIs[] =
{
	&t1434_f0_FieldInfo,
	&t1434_f1_FieldInfo,
	&t1434_f2_FieldInfo,
	&t1434_f3_FieldInfo,
	&t1434_f4_FieldInfo,
	&t1434_f5_FieldInfo,
	&t1434_f6_FieldInfo,
	&t1434_f7_FieldInfo,
	&t1434_f8_FieldInfo,
	&t1434_f9_FieldInfo,
	NULL
};
static PropertyInfo t1434____BlockSize_PropertyInfo = 
{
	&t1434_TI, "BlockSize", &m7041_MI, &m6964_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1434____FeedbackSize_PropertyInfo = 
{
	&t1434_TI, "FeedbackSize", &m7042_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1434____IV_PropertyInfo = 
{
	&t1434_TI, "IV", &m10633_MI, &m6923_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1434____Key_PropertyInfo = 
{
	&t1434_TI, "Key", &m7051_MI, &m6922_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1434____KeySize_PropertyInfo = 
{
	&t1434_TI, "KeySize", &m7043_MI, &m6963_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1434____LegalKeySizes_PropertyInfo = 
{
	&t1434_TI, "LegalKeySizes", &m7044_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1434____Mode_PropertyInfo = 
{
	&t1434_TI, "Mode", &m7045_MI, &m6924_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1434____Padding_PropertyInfo = 
{
	&t1434_TI, "Padding", &m7046_MI, &m6962_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1434_PIs[] =
{
	&t1434____BlockSize_PropertyInfo,
	&t1434____FeedbackSize_PropertyInfo,
	&t1434____IV_PropertyInfo,
	&t1434____Key_PropertyInfo,
	&t1434____KeySize_PropertyInfo,
	&t1434____LegalKeySizes_PropertyInfo,
	&t1434____Mode_PropertyInfo,
	&t1434____Padding_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1434_VT[] =
{
	&m671_MI,
	&m6894_MI,
	&m672_MI,
	&m673_MI,
	&m7040_MI,
	&m7050_MI,
	&m7041_MI,
	&m6964_MI,
	&m7042_MI,
	&m10633_MI,
	&m6923_MI,
	&m7051_MI,
	&m6922_MI,
	&m7043_MI,
	&m6963_MI,
	&m7044_MI,
	&m7045_MI,
	&m6924_MI,
	&m7046_MI,
	&m6962_MI,
	&m6925_MI,
	NULL,
	&m6896_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1434_VTIGM[] =
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
static const Il2CppType* t1434_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1434_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1434_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1434__CustomAttributeCache = {
1,
NULL,
&t1434_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1434_1_0_0;
struct t1434;
extern CustomAttributesCache t1434__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1434_DM = 
{
	NULL, NULL, t1434_ITIs, t1434_IOs, &t9_0_0_0, t1434_VT, t1434_VTIGM, NULL};
TypeInfo t1434_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SymmetricAlgorithm", "System.Security.Cryptography", t1434_MIs, t1434_PIs, t1434_FIs, NULL, &t1434_TI, NULL, &t1434__CustomAttributeCache, &t1434_0_0_0, &t1434_1_0_0, &t1434_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1434), sizeof (t1434), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 26, 8, 10, 0, 0, 26, 1, 1};
#include "t2014.h"
// Metadata Definition System.Security.Cryptography.ToBase64Transform
extern TypeInfo t2014_TI;
#include "t2014MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10634_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m10634, &t2014_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 4697, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10635_MI = 
{
	"Finalize", (methodPointerType)&m10635, &t2014_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4698, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10636_MI = 
{
	"get_CanReuseTransform", (methodPointerType)&m10636, &t2014_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 4699, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10637_MI = 
{
	"get_InputBlockSize", (methodPointerType)&m10637, &t2014_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, false, 4700, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10638_MI = 
{
	"get_OutputBlockSize", (methodPointerType)&m10638, &t2014_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, false, 4701, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t2014_m10639_ParameterInfos[] = 
{
	{"disposing", 0, 134223417, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10639_MI = 
{
	"Dispose", (methodPointerType)&m10639, &t2014_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t2014_m10639_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 11, 1, false, false, 4702, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2014_m10640_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223418, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 1, 134223419, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223420, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"outputBuffer", 3, 134223421, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"outputOffset", 4, 134223422, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10640_MI = 
{
	"TransformBlock", (methodPointerType)&m10640, &t2014_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2014_m10640_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 5, false, false, 4703, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2014_m10641_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223423, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 1, 134223424, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223425, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"outputBuffer", 3, 134223426, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"outputOffset", 4, 134223427, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10641_MI = 
{
	"InternalTransformBlock", (methodPointerType)&m10641, &t2014_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t9_t125, t2014_m10641_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 5, false, false, 4704, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2014_m10642_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223428, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 1, 134223429, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223430, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10642_MI = 
{
	"TransformFinalBlock", (methodPointerType)&m10642, &t2014_TI, &t730_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t2014_m10642_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 3, false, false, 4705, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2014_m10643_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223431, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"inputOffset", 1, 134223432, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223433, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10643_MI = 
{
	"InternalTransformFinalBlock", (methodPointerType)&m10643, &t2014_TI, &t730_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t2014_m10643_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 4706, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2014_MIs[] =
{
	&m10634_MI,
	&m10635_MI,
	&m10636_MI,
	&m10637_MI,
	&m10638_MI,
	&m10639_MI,
	&m10640_MI,
	&m10641_MI,
	&m10642_MI,
	&m10643_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t2014_f0_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t2014_TI, offsetof(t2014, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2014_FIs[] =
{
	&t2014_f0_FieldInfo,
	NULL
};
extern MethodInfo m10636_MI;
static PropertyInfo t2014____CanReuseTransform_PropertyInfo = 
{
	&t2014_TI, "CanReuseTransform", &m10636_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10637_MI;
static PropertyInfo t2014____InputBlockSize_PropertyInfo = 
{
	&t2014_TI, "InputBlockSize", &m10637_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10638_MI;
static PropertyInfo t2014____OutputBlockSize_PropertyInfo = 
{
	&t2014_TI, "OutputBlockSize", &m10638_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2014_PIs[] =
{
	&t2014____CanReuseTransform_PropertyInfo,
	&t2014____InputBlockSize_PropertyInfo,
	&t2014____OutputBlockSize_PropertyInfo,
	NULL
};
extern MethodInfo m10635_MI;
extern MethodInfo m10634_MI;
extern MethodInfo m10640_MI;
extern MethodInfo m10642_MI;
extern MethodInfo m10639_MI;
static Il2CppMethodReference t2014_VT[] =
{
	&m671_MI,
	&m10635_MI,
	&m672_MI,
	&m673_MI,
	&m10634_MI,
	&m10636_MI,
	&m10640_MI,
	&m10642_MI,
	&m10636_MI,
	&m10637_MI,
	&m10638_MI,
	&m10639_MI,
};
static bool t2014_VTIGM[] =
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
static const Il2CppType* t2014_ITIs[] = 
{
	&t137_0_0_0,
	&t1425_0_0_0,
};
static Il2CppInterfaceOffsetPair t2014_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t2014_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2014__CustomAttributeCache = {
1,
NULL,
&t2014_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2014_0_0_0;
extern Il2CppType t2014_1_0_0;
struct t2014;
extern CustomAttributesCache t2014__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2014_DM = 
{
	NULL, NULL, t2014_ITIs, t2014_IOs, &t9_0_0_0, t2014_VT, t2014_VTIGM, NULL};
TypeInfo t2014_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ToBase64Transform", "System.Security.Cryptography", t2014_MIs, t2014_PIs, t2014_FIs, NULL, &t2014_TI, NULL, &t2014__CustomAttributeCache, &t2014_0_0_0, &t2014_1_0_0, &t2014_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2014), sizeof (t2014), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 10, 3, 1, 0, 0, 12, 2, 2};
#include "t1542.h"
// Metadata Definition System.Security.Cryptography.TripleDES
extern TypeInfo t1542_TI;
#include "t1542MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10644_MI = 
{
	".ctor", (methodPointerType)&m10644, &t1542_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4707, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10645_MI = 
{
	"get_Key", (methodPointerType)&m10645, &t1542_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 11, 0, false, false, 4708, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1542_m10646_ParameterInfos[] = 
{
	{"value", 0, 134223434, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10646_MI = 
{
	"set_Key", (methodPointerType)&m10646, &t1542_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1542_m10646_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 12, 1, false, false, 4709, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1542_m10647_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223435, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10647_MI = 
{
	"IsWeakKey", (methodPointerType)&m10647, &t1542_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1542_m10647_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4710, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1542_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6960_MI = 
{
	"Create", (methodPointerType)&m6960, &t1542_TI, &t1542_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4711, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1542_m10648_ParameterInfos[] = 
{
	{"str", 0, 134223436, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1542_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10648_MI = 
{
	"Create", (methodPointerType)&m10648, &t1542_TI, &t1542_0_0_0, RuntimeInvoker_t9_t9, t1542_m10648_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4712, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1542_MIs[] =
{
	&m10644_MI,
	&m10645_MI,
	&m10646_MI,
	&m10647_MI,
	&m6960_MI,
	&m10648_MI,
	NULL
};
extern MethodInfo m10645_MI;
extern MethodInfo m10646_MI;
static PropertyInfo t1542____Key_PropertyInfo = 
{
	&t1542_TI, "Key", &m10645_MI, &m10646_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1542_PIs[] =
{
	&t1542____Key_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1542_VT[] =
{
	&m671_MI,
	&m6894_MI,
	&m672_MI,
	&m673_MI,
	&m7040_MI,
	&m7050_MI,
	&m7041_MI,
	&m6964_MI,
	&m7042_MI,
	&m10633_MI,
	&m6923_MI,
	&m10645_MI,
	&m10646_MI,
	&m7043_MI,
	&m6963_MI,
	&m7044_MI,
	&m7045_MI,
	&m6924_MI,
	&m7046_MI,
	&m6962_MI,
	&m6925_MI,
	NULL,
	&m6896_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1542_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1542_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1542_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1542__CustomAttributeCache = {
1,
NULL,
&t1542_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1542_0_0_0;
extern Il2CppType t1542_1_0_0;
struct t1542;
extern CustomAttributesCache t1542__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1542_DM = 
{
	NULL, NULL, NULL, t1542_IOs, &t1434_0_0_0, t1542_VT, t1542_VTIGM, NULL};
TypeInfo t1542_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TripleDES", "System.Security.Cryptography", t1542_MIs, t1542_PIs, NULL, NULL, &t1542_TI, NULL, &t1542__CustomAttributeCache, &t1542_0_0_0, &t1542_1_0_0, &t1542_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1542), sizeof (t1542), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 1, 0, 0, 0, 26, 0, 1};
#include "t2015.h"
// Metadata Definition System.Security.Cryptography.TripleDESCryptoServiceProvider
extern TypeInfo t2015_TI;
#include "t2015MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10649_MI = 
{
	".ctor", (methodPointerType)&m10649, &t2015_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4713, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10650_MI = 
{
	"GenerateIV", (methodPointerType)&m10650, &t2015_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 24, 0, false, false, 4714, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10651_MI = 
{
	"GenerateKey", (methodPointerType)&m10651, &t2015_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 25, 0, false, false, 4715, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t2015_m10652_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223437, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"rgbIV", 1, 134223438, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t1425_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10652_MI = 
{
	"CreateDecryptor", (methodPointerType)&m10652, &t2015_TI, &t1425_0_0_0, RuntimeInvoker_t9_t9_t9, t2015_m10652_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 21, 2, false, false, 4716, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t2015_m10653_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223439, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"rgbIV", 1, 134223440, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t1425_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10653_MI = 
{
	"CreateEncryptor", (methodPointerType)&m10653, &t2015_TI, &t1425_0_0_0, RuntimeInvoker_t9_t9_t9, t2015_m10653_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 2, false, false, 4717, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2015_MIs[] =
{
	&m10649_MI,
	&m10650_MI,
	&m10651_MI,
	&m10652_MI,
	&m10653_MI,
	NULL
};
extern MethodInfo m10652_MI;
extern MethodInfo m10653_MI;
extern MethodInfo m10650_MI;
extern MethodInfo m10651_MI;
static Il2CppMethodReference t2015_VT[] =
{
	&m671_MI,
	&m6894_MI,
	&m672_MI,
	&m673_MI,
	&m7040_MI,
	&m7050_MI,
	&m7041_MI,
	&m6964_MI,
	&m7042_MI,
	&m10633_MI,
	&m6923_MI,
	&m10645_MI,
	&m10646_MI,
	&m7043_MI,
	&m6963_MI,
	&m7044_MI,
	&m7045_MI,
	&m6924_MI,
	&m7046_MI,
	&m6962_MI,
	&m6925_MI,
	&m10652_MI,
	&m6896_MI,
	&m10653_MI,
	&m10650_MI,
	&m10651_MI,
};
static bool t2015_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2015_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t2015_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2015__CustomAttributeCache = {
1,
NULL,
&t2015_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2015_0_0_0;
extern Il2CppType t2015_1_0_0;
struct t2015;
extern CustomAttributesCache t2015__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2015_DM = 
{
	NULL, NULL, NULL, t2015_IOs, &t1542_0_0_0, t2015_VT, t2015_VTIGM, NULL};
TypeInfo t2015_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TripleDESCryptoServiceProvider", "System.Security.Cryptography", t2015_MIs, NULL, NULL, NULL, &t2015_TI, NULL, &t2015__CustomAttributeCache, &t2015_0_0_0, &t2015_1_0_0, &t2015_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2015), sizeof (t2015), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 5, 0, 0, 0, 0, 26, 0, 1};
#include "t2016.h"
// Metadata Definition System.Security.Cryptography.TripleDESTransform
extern TypeInfo t2016_TI;
#include "t2016MD.h"
extern Il2CppType t1542_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t2016_m10654_ParameterInfos[] = 
{
	{"algo", 0, 134223441, &EmptyCustomAttributesCache, &t1542_0_0_0},
	{"encryption", 1, 134223442, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"key", 2, 134223443, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"iv", 3, 134223444, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10654_MI = 
{
	".ctor", (methodPointerType)&m10654, &t2016_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t9_t9, t2016_m10654_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 4718, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t2016_m10655_ParameterInfos[] = 
{
	{"input", 0, 134223445, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"output", 1, 134223446, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10655_MI = 
{
	"ECB", (methodPointerType)&m10655, &t2016_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2016_m10655_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 2, false, false, 4719, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10656_MI = 
{
	"GetStrongKey", (methodPointerType)&m10656, &t2016_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 4720, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2016_MIs[] =
{
	&m10654_MI,
	&m10655_MI,
	&m10656_MI,
	NULL
};
extern Il2CppType t1982_0_0_1;
FieldInfo t2016_f12_FieldInfo = 
{
	"E1", &t1982_0_0_1, &t2016_TI, offsetof(t2016, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1982_0_0_1;
FieldInfo t2016_f13_FieldInfo = 
{
	"D2", &t1982_0_0_1, &t2016_TI, offsetof(t2016, f13), &EmptyCustomAttributesCache};
extern Il2CppType t1982_0_0_1;
FieldInfo t2016_f14_FieldInfo = 
{
	"E3", &t1982_0_0_1, &t2016_TI, offsetof(t2016, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1982_0_0_1;
FieldInfo t2016_f15_FieldInfo = 
{
	"D1", &t1982_0_0_1, &t2016_TI, offsetof(t2016, f15), &EmptyCustomAttributesCache};
extern Il2CppType t1982_0_0_1;
FieldInfo t2016_f16_FieldInfo = 
{
	"E2", &t1982_0_0_1, &t2016_TI, offsetof(t2016, f16), &EmptyCustomAttributesCache};
extern Il2CppType t1982_0_0_1;
FieldInfo t2016_f17_FieldInfo = 
{
	"D3", &t1982_0_0_1, &t2016_TI, offsetof(t2016, f17), &EmptyCustomAttributesCache};
static FieldInfo* t2016_FIs[] =
{
	&t2016_f12_FieldInfo,
	&t2016_f13_FieldInfo,
	&t2016_f14_FieldInfo,
	&t2016_f15_FieldInfo,
	&t2016_f16_FieldInfo,
	&t2016_f17_FieldInfo,
	NULL
};
extern MethodInfo m10655_MI;
static Il2CppMethodReference t2016_VT[] =
{
	&m671_MI,
	&m8168_MI,
	&m672_MI,
	&m673_MI,
	&m8167_MI,
	&m8170_MI,
	&m8177_MI,
	&m8184_MI,
	&m8169_MI,
	&m8170_MI,
	&m8171_MI,
	&m10655_MI,
	&m8172_MI,
	&m8173_MI,
	&m8174_MI,
	&m8175_MI,
	&m8177_MI,
	&m8184_MI,
};
static bool t2016_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2016_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2016_0_0_0;
extern Il2CppType t2016_1_0_0;
struct t2016;
const Il2CppTypeDefinitionMetadata t2016_DM = 
{
	NULL, NULL, NULL, t2016_IOs, &t1642_0_0_0, t2016_VT, t2016_VTIGM, NULL};
TypeInfo t2016_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TripleDESTransform", "System.Security.Cryptography", t2016_MIs, NULL, t2016_FIs, NULL, &t2016_TI, NULL, &EmptyCustomAttributesCache, &t2016_0_0_0, &t2016_1_0_0, &t2016_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2016), sizeof (t2016), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, true, false, false, 3, 0, 6, 0, 0, 18, 0, 2};
// Metadata Definition System.Security.Permissions.IBuiltInPermission
extern TypeInfo t2635_TI;
static MethodInfo* t2635_MIs[] =
{
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2635_0_0_0;
extern Il2CppType t2635_1_0_0;
struct t2635;
const Il2CppTypeDefinitionMetadata t2635_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2635_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IBuiltInPermission", "System.Security.Permissions", t2635_MIs, NULL, NULL, NULL, &t2635_TI, NULL, &EmptyCustomAttributesCache, &t2635_0_0_0, &t2635_1_0_0, &t2635_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 160, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Security.Permissions.IUnrestrictedPermission
extern TypeInfo t2636_TI;
static MethodInfo* t2636_MIs[] =
{
	NULL
};
void t2636_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2636__CustomAttributeCache = {
1,
NULL,
&t2636_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2636_0_0_0;
extern Il2CppType t2636_1_0_0;
struct t2636;
extern CustomAttributesCache t2636__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2636_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2636_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IUnrestrictedPermission", "System.Security.Permissions", t2636_MIs, NULL, NULL, NULL, &t2636_TI, NULL, &t2636__CustomAttributeCache, &t2636_0_0_0, &t2636_1_0_0, &t2636_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t2017.h"
// Metadata Definition System.Security.Permissions.SecurityPermission
extern TypeInfo t2017_TI;
#include "t2017MD.h"
extern Il2CppType t2019_0_0_0;
extern Il2CppType t2019_0_0_0;
static ParameterInfo t2017_m10657_ParameterInfos[] = 
{
	{"flag", 0, 134223447, &EmptyCustomAttributesCache, &t2019_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10657_MI = 
{
	".ctor", (methodPointerType)&m10657, &t2017_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t2017_m10657_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4721, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2019_0_0_0;
static ParameterInfo t2017_m10658_ParameterInfos[] = 
{
	{"value", 0, 134223448, &EmptyCustomAttributesCache, &t2019_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10658_MI = 
{
	"set_Flags", (methodPointerType)&m10658, &t2017_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t2017_m10658_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4722, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10659_MI = 
{
	"IsUnrestricted", (methodPointerType)&m10659, &t2017_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 4723, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2020_0_0_0;
extern Il2CppType t2020_0_0_0;
static ParameterInfo t2017_m10660_ParameterInfos[] = 
{
	{"target", 0, 134223449, &EmptyCustomAttributesCache, &t2020_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10660_MI = 
{
	"IsSubsetOf", (methodPointerType)&m10660, &t2017_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2017_m10660_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4724, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1660_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10661_MI = 
{
	"ToXml", (methodPointerType)&m10661, &t2017_TI, &t1660_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 5, 0, false, false, 4725, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10662_MI = 
{
	"IsEmpty", (methodPointerType)&m10662, &t2017_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4726, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2020_0_0_0;
static ParameterInfo t2017_m10663_ParameterInfos[] = 
{
	{"target", 0, 134223450, &EmptyCustomAttributesCache, &t2020_0_0_0},
};
extern Il2CppType t2017_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10663_MI = 
{
	"Cast", (methodPointerType)&m10663, &t2017_TI, &t2017_0_0_0, RuntimeInvoker_t9_t9, t2017_m10663_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4727, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2017_MIs[] =
{
	&m10657_MI,
	&m10658_MI,
	&m10659_MI,
	&m10660_MI,
	&m10661_MI,
	&m10662_MI,
	&m10663_MI,
	NULL
};
extern Il2CppType t2019_0_0_1;
FieldInfo t2017_f0_FieldInfo = 
{
	"flags", &t2019_0_0_1, &t2017_TI, offsetof(t2017, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2017_FIs[] =
{
	&t2017_f0_FieldInfo,
	NULL
};
extern MethodInfo m10658_MI;
static PropertyInfo t2017____Flags_PropertyInfo = 
{
	&t2017_TI, "Flags", NULL, &m10658_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2017_PIs[] =
{
	&t2017____Flags_PropertyInfo,
	NULL
};
extern MethodInfo m10700_MI;
extern MethodInfo m10701_MI;
extern MethodInfo m10702_MI;
extern MethodInfo m10660_MI;
extern MethodInfo m10661_MI;
extern MethodInfo m10659_MI;
static Il2CppMethodReference t2017_VT[] =
{
	&m10700_MI,
	&m646_MI,
	&m10701_MI,
	&m10702_MI,
	&m10660_MI,
	&m10661_MI,
	&m10659_MI,
};
static bool t2017_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t2017_ITIs[] = 
{
	&t2635_0_0_0,
	&t2636_0_0_0,
};
extern Il2CppType t2637_0_0_0;
extern Il2CppType t2638_0_0_0;
static Il2CppInterfaceOffsetPair t2017_IOs[] = 
{
	{ &t2020_0_0_0, 4},
	{ &t2637_0_0_0, 4},
	{ &t2638_0_0_0, 4},
	{ &t2635_0_0_0, 6},
	{ &t2636_0_0_0, 6},
};
void t2017_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
extern Il2CppType t2018_0_0_0;
struct t2017;
extern CustomAttributesCache t2017__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2017_DM = 
{
	NULL, NULL, t2017_ITIs, t2017_IOs, &t2018_0_0_0, t2017_VT, t2017_VTIGM, NULL};
TypeInfo t2017_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityPermission", "System.Security.Permissions", t2017_MIs, t2017_PIs, t2017_FIs, NULL, &t2017_TI, NULL, &t2017__CustomAttributeCache, &t2017_0_0_0, &t2017_1_0_0, &t2017_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2017), sizeof (t2017), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 7, 1, 1, 0, 0, 7, 2, 5};
#include "t2019.h"
// Metadata Definition System.Security.Permissions.SecurityPermissionFlag
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
	"NoFlags", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f3_FieldInfo = 
{
	"Assertion", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f4_FieldInfo = 
{
	"UnmanagedCode", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f5_FieldInfo = 
{
	"SkipVerification", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f6_FieldInfo = 
{
	"Execution", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f7_FieldInfo = 
{
	"ControlThread", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f8_FieldInfo = 
{
	"ControlEvidence", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f9_FieldInfo = 
{
	"ControlPolicy", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f10_FieldInfo = 
{
	"SerializationFormatter", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f11_FieldInfo = 
{
	"ControlDomainPolicy", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f12_FieldInfo = 
{
	"ControlPrincipal", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f13_FieldInfo = 
{
	"ControlAppDomain", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f14_FieldInfo = 
{
	"RemotingConfiguration", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f15_FieldInfo = 
{
	"Infrastructure", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f16_FieldInfo = 
{
	"BindingRedirects", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2019_0_0_32854;
FieldInfo t2019_f17_FieldInfo = 
{
	"AllFlags", &t2019_0_0_32854, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t2019_FIs[] =
{
	&t2019_f1_FieldInfo,
	&t2019_f2_FieldInfo,
	&t2019_f3_FieldInfo,
	&t2019_f4_FieldInfo,
	&t2019_f5_FieldInfo,
	&t2019_f6_FieldInfo,
	&t2019_f7_FieldInfo,
	&t2019_f8_FieldInfo,
	&t2019_f9_FieldInfo,
	&t2019_f10_FieldInfo,
	&t2019_f11_FieldInfo,
	&t2019_f12_FieldInfo,
	&t2019_f13_FieldInfo,
	&t2019_f14_FieldInfo,
	&t2019_f15_FieldInfo,
	&t2019_f16_FieldInfo,
	&t2019_f17_FieldInfo,
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
static const int32_t t2019_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t2019_f5_DefaultValue = 
{
	&t2019_f5_FieldInfo, { (char*)&t2019_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2019_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t2019_f6_DefaultValue = 
{
	&t2019_f6_FieldInfo, { (char*)&t2019_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2019_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t2019_f7_DefaultValue = 
{
	&t2019_f7_FieldInfo, { (char*)&t2019_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2019_f8_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t2019_f8_DefaultValue = 
{
	&t2019_f8_FieldInfo, { (char*)&t2019_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2019_f9_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t2019_f9_DefaultValue = 
{
	&t2019_f9_FieldInfo, { (char*)&t2019_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2019_f10_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t2019_f10_DefaultValue = 
{
	&t2019_f10_FieldInfo, { (char*)&t2019_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2019_f11_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t2019_f11_DefaultValue = 
{
	&t2019_f11_FieldInfo, { (char*)&t2019_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2019_f12_DefaultValueData = 512;
static Il2CppFieldDefaultValueEntry t2019_f12_DefaultValue = 
{
	&t2019_f12_FieldInfo, { (char*)&t2019_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2019_f13_DefaultValueData = 1024;
static Il2CppFieldDefaultValueEntry t2019_f13_DefaultValue = 
{
	&t2019_f13_FieldInfo, { (char*)&t2019_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2019_f14_DefaultValueData = 2048;
static Il2CppFieldDefaultValueEntry t2019_f14_DefaultValue = 
{
	&t2019_f14_FieldInfo, { (char*)&t2019_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2019_f15_DefaultValueData = 4096;
static Il2CppFieldDefaultValueEntry t2019_f15_DefaultValue = 
{
	&t2019_f15_FieldInfo, { (char*)&t2019_f15_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2019_f16_DefaultValueData = 8192;
static Il2CppFieldDefaultValueEntry t2019_f16_DefaultValue = 
{
	&t2019_f16_FieldInfo, { (char*)&t2019_f16_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2019_f17_DefaultValueData = 16383;
static Il2CppFieldDefaultValueEntry t2019_f17_DefaultValue = 
{
	&t2019_f17_FieldInfo, { (char*)&t2019_f17_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2019_FDVs[] = 
{
	&t2019_f2_DefaultValue,
	&t2019_f3_DefaultValue,
	&t2019_f4_DefaultValue,
	&t2019_f5_DefaultValue,
	&t2019_f6_DefaultValue,
	&t2019_f7_DefaultValue,
	&t2019_f8_DefaultValue,
	&t2019_f9_DefaultValue,
	&t2019_f10_DefaultValue,
	&t2019_f11_DefaultValue,
	&t2019_f12_DefaultValue,
	&t2019_f13_DefaultValue,
	&t2019_f14_DefaultValue,
	&t2019_f15_DefaultValue,
	&t2019_f16_DefaultValue,
	&t2019_f17_DefaultValue,
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
extern TypeInfo t615_TI;
#include "t615.h"
#include "t615MD.h"
extern MethodInfo m2991_MI;
extern TypeInfo t618_TI;
#include "t618.h"
#include "t618MD.h"
extern MethodInfo m2994_MI;
void t2019_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t615 * tmp;
		tmp = (t615 *)il2cpp_codegen_object_new (&t615_TI);
		m2991(tmp, &m2991_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m2994(tmp, il2cpp_codegen_string_new_wrapper("CAS support is not available with Silverlight applications."), &m2994_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2019__CustomAttributeCache = {
3,
NULL,
&t2019_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2019_1_0_0;
extern CustomAttributesCache t2019__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2019_DM = 
{
	NULL, NULL, NULL, t2019_IOs, &t8_0_0_0, t2019_VT, t2019_VTIGM, NULL};
TypeInfo t2019_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityPermissionFlag", "System.Security.Permissions", t2019_MIs, NULL, t2019_FIs, NULL, &t125_TI, NULL, &t2019__CustomAttributeCache, &t2019_0_0_0, &t2019_1_0_0, &t2019_DM, NULL, NULL, NULL, t2019_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2019)+ sizeof (Il2CppObject), sizeof (t2019)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 17, 0, 0, 23, 0, 3};
#include "t2021.h"
// Metadata Definition System.Security.Permissions.StrongNamePublicKeyBlob
extern TypeInfo t2021_TI;
#include "t2021MD.h"
extern Il2CppType t9_0_0_0;
static ParameterInfo t2021_m10664_ParameterInfos[] = 
{
	{"obj", 0, 134223451, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10664_MI = 
{
	"Equals", (methodPointerType)&m10664, &t2021_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2021_m10664_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4728, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10665_MI = 
{
	"GetHashCode", (methodPointerType)&m10665, &t2021_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4729, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10666_MI = 
{
	"ToString", (methodPointerType)&m10666, &t2021_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4730, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2021_MIs[] =
{
	&m10664_MI,
	&m10665_MI,
	&m10666_MI,
	NULL
};
extern Il2CppType t730_0_0_3;
FieldInfo t2021_f0_FieldInfo = 
{
	"pubkey", &t730_0_0_3, &t2021_TI, offsetof(t2021, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2021_FIs[] =
{
	&t2021_f0_FieldInfo,
	NULL
};
extern MethodInfo m10664_MI;
extern MethodInfo m10665_MI;
extern MethodInfo m10666_MI;
static Il2CppMethodReference t2021_VT[] =
{
	&m10664_MI,
	&m646_MI,
	&m10665_MI,
	&m10666_MI,
};
static bool t2021_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t2021_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2021__CustomAttributeCache = {
1,
NULL,
&t2021_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2021_0_0_0;
extern Il2CppType t2021_1_0_0;
struct t2021;
extern CustomAttributesCache t2021__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2021_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2021_VT, t2021_VTIGM, NULL};
TypeInfo t2021_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StrongNamePublicKeyBlob", "System.Security.Permissions", t2021_MIs, NULL, t2021_FIs, NULL, &t2021_TI, NULL, &t2021__CustomAttributeCache, &t2021_0_0_0, &t2021_1_0_0, &t2021_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2021), sizeof (t2021), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 4, 0, 0};
#include "t2022.h"
// Metadata Definition System.Security.Policy.ApplicationTrust
extern TypeInfo t2022_TI;
#include "t2022MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10667_MI = 
{
	".ctor", (methodPointerType)&m10667, &t2022_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4731, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2022_MIs[] =
{
	&m10667_MI,
	NULL
};
extern Il2CppType t2023_0_0_1;
FieldInfo t2022_f0_FieldInfo = 
{
	"fullTrustAssemblies", &t2023_0_0_1, &t2022_TI, offsetof(t2022, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2022_FIs[] =
{
	&t2022_f0_FieldInfo,
	NULL
};
static Il2CppMethodReference t2022_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2022_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static const Il2CppType* t2022_ITIs[] = 
{
	&t2637_0_0_0,
};
static Il2CppInterfaceOffsetPair t2022_IOs[] = 
{
	{ &t2637_0_0_0, 4},
};
void t2022_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2022__CustomAttributeCache = {
1,
NULL,
&t2022_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2022_0_0_0;
extern Il2CppType t2022_1_0_0;
struct t2022;
extern CustomAttributesCache t2022__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2022_DM = 
{
	NULL, NULL, t2022_ITIs, t2022_IOs, &t9_0_0_0, t2022_VT, t2022_VTIGM, NULL};
TypeInfo t2022_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ApplicationTrust", "System.Security.Policy", t2022_MIs, NULL, t2022_FIs, NULL, &t2022_TI, NULL, &t2022__CustomAttributeCache, &t2022_0_0_0, &t2022_1_0_0, &t2022_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2022), sizeof (t2022), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 1, 1};
#include "t2024.h"
// Metadata Definition System.Security.Policy.Evidence/EvidenceEnumerator
extern TypeInfo t2024_TI;
#include "t2024MD.h"
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
static ParameterInfo t2024_m10668_ParameterInfos[] = 
{
	{"hostenum", 0, 134223455, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"assemblyenum", 1, 134223456, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10668_MI = 
{
	".ctor", (methodPointerType)&m10668, &t2024_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2024_m10668_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4742, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10669_MI = 
{
	"MoveNext", (methodPointerType)&m10669, &t2024_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 4743, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10670_MI = 
{
	"get_Current", (methodPointerType)&m10670, &t2024_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 4744, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2024_MIs[] =
{
	&m10668_MI,
	&m10669_MI,
	&m10670_MI,
	NULL
};
extern Il2CppType t76_0_0_1;
FieldInfo t2024_f0_FieldInfo = 
{
	"currentEnum", &t76_0_0_1, &t2024_TI, offsetof(t2024, f0), &EmptyCustomAttributesCache};
extern Il2CppType t76_0_0_1;
FieldInfo t2024_f1_FieldInfo = 
{
	"hostEnum", &t76_0_0_1, &t2024_TI, offsetof(t2024, f1), &EmptyCustomAttributesCache};
extern Il2CppType t76_0_0_1;
FieldInfo t2024_f2_FieldInfo = 
{
	"assemblyEnum", &t76_0_0_1, &t2024_TI, offsetof(t2024, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2024_FIs[] =
{
	&t2024_f0_FieldInfo,
	&t2024_f1_FieldInfo,
	&t2024_f2_FieldInfo,
	NULL
};
extern MethodInfo m10670_MI;
static PropertyInfo t2024____Current_PropertyInfo = 
{
	&t2024_TI, "Current", &m10670_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2024_PIs[] =
{
	&t2024____Current_PropertyInfo,
	NULL
};
extern MethodInfo m10669_MI;
static Il2CppMethodReference t2024_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10670_MI,
	&m10669_MI,
};
static bool t2024_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t2024_ITIs[] = 
{
	&t76_0_0_0,
};
static Il2CppInterfaceOffsetPair t2024_IOs[] = 
{
	{ &t76_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2024_0_0_0;
extern Il2CppType t2024_1_0_0;
extern TypeInfo t1800_TI;
extern Il2CppType t1800_0_0_0;
struct t2024;
const Il2CppTypeDefinitionMetadata t2024_DM = 
{
	&t1800_0_0_0, NULL, t2024_ITIs, t2024_IOs, &t9_0_0_0, t2024_VT, t2024_VTIGM, NULL};
TypeInfo t2024_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EvidenceEnumerator", "", t2024_MIs, t2024_PIs, t2024_FIs, NULL, &t2024_TI, NULL, &EmptyCustomAttributesCache, &t2024_0_0_0, &t2024_1_0_0, &t2024_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2024), sizeof (t2024), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 1, 3, 0, 0, 6, 1, 1};
#include "t1800.h"
// Metadata Definition System.Security.Policy.Evidence
#include "t1800MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10671_MI = 
{
	".ctor", (methodPointerType)&m10671, &t1800_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4732, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10672_MI = 
{
	"get_Count", (methodPointerType)&m10672, &t1800_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 4733, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10673_MI = 
{
	"get_IsSynchronized", (methodPointerType)&m10673, &t1800_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 4734, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10674_MI = 
{
	"get_SyncRoot", (methodPointerType)&m10674, &t1800_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 4735, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1170_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10675_MI = 
{
	"get_HostEvidenceList", (methodPointerType)&m10675, &t1800_TI, &t1170_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4736, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1170_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10676_MI = 
{
	"get_AssemblyEvidenceList", (methodPointerType)&m10676, &t1800_TI, &t1170_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4737, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t121_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1800_m10677_ParameterInfos[] = 
{
	{"array", 0, 134223452, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"index", 1, 134223453, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10677_MI = 
{
	"CopyTo", (methodPointerType)&m10677, &t1800_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1800_m10677_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 8, 2, false, false, 4738, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1800_m10678_ParameterInfos[] = 
{
	{"obj", 0, 134223454, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1800__CustomAttributeCache_m10678;
MethodInfo m10678_MI = 
{
	"Equals", (methodPointerType)&m10678, &t1800_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1800_m10678_ParameterInfos, &t1800__CustomAttributeCache_m10678, 198, 0, 0, 1, false, false, 4739, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t76_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10679_MI = 
{
	"GetEnumerator", (methodPointerType)&m10679, &t1800_TI, &t76_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 486, 0, 4, 0, false, false, 4740, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1800__CustomAttributeCache_m10680;
MethodInfo m10680_MI = 
{
	"GetHashCode", (methodPointerType)&m10680, &t1800_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t1800__CustomAttributeCache_m10680, 198, 0, 2, 0, false, false, 4741, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1800_MIs[] =
{
	&m10671_MI,
	&m10672_MI,
	&m10673_MI,
	&m10674_MI,
	&m10675_MI,
	&m10676_MI,
	&m10677_MI,
	&m10678_MI,
	&m10679_MI,
	&m10680_MI,
	NULL
};
extern Il2CppType t1170_0_0_1;
FieldInfo t1800_f0_FieldInfo = 
{
	"hostEvidenceList", &t1170_0_0_1, &t1800_TI, offsetof(t1800, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1170_0_0_1;
FieldInfo t1800_f1_FieldInfo = 
{
	"assemblyEvidenceList", &t1170_0_0_1, &t1800_TI, offsetof(t1800, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1800_f2_FieldInfo = 
{
	"_hashCode", &t125_0_0_1, &t1800_TI, offsetof(t1800, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1800_FIs[] =
{
	&t1800_f0_FieldInfo,
	&t1800_f1_FieldInfo,
	&t1800_f2_FieldInfo,
	NULL
};
extern MethodInfo m10672_MI;
static PropertyInfo t1800____Count_PropertyInfo = 
{
	&t1800_TI, "Count", &m10672_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10673_MI;
static PropertyInfo t1800____IsSynchronized_PropertyInfo = 
{
	&t1800_TI, "IsSynchronized", &m10673_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10674_MI;
static PropertyInfo t1800____SyncRoot_PropertyInfo = 
{
	&t1800_TI, "SyncRoot", &m10674_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10675_MI;
static PropertyInfo t1800____HostEvidenceList_PropertyInfo = 
{
	&t1800_TI, "HostEvidenceList", &m10675_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10676_MI;
static PropertyInfo t1800____AssemblyEvidenceList_PropertyInfo = 
{
	&t1800_TI, "AssemblyEvidenceList", &m10676_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1800_PIs[] =
{
	&t1800____Count_PropertyInfo,
	&t1800____IsSynchronized_PropertyInfo,
	&t1800____SyncRoot_PropertyInfo,
	&t1800____HostEvidenceList_PropertyInfo,
	&t1800____AssemblyEvidenceList_PropertyInfo,
	NULL
};
static const Il2CppType* t1800_TI__nestedTypes[1] =
{
	&t2024_0_0_0,
};
extern MethodInfo m10678_MI;
extern MethodInfo m10680_MI;
extern MethodInfo m10679_MI;
extern MethodInfo m10677_MI;
static Il2CppMethodReference t1800_VT[] =
{
	&m10678_MI,
	&m646_MI,
	&m10680_MI,
	&m673_MI,
	&m10679_MI,
	&m10672_MI,
	&m10673_MI,
	&m10674_MI,
	&m10677_MI,
};
static bool t1800_VTIGM[] =
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
extern Il2CppType t665_0_0_0;
extern Il2CppType t998_0_0_0;
static const Il2CppType* t1800_ITIs[] = 
{
	&t665_0_0_0,
	&t998_0_0_0,
};
static Il2CppInterfaceOffsetPair t1800_IOs[] = 
{
	{ &t665_0_0_0, 4},
	{ &t998_0_0_0, 5},
};
extern TypeInfo t1592_TI;
#include "t1592.h"
#include "t1592MD.h"
extern MethodInfo m7849_MI;
void t1800_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7849(tmp, il2cpp_codegen_string_new_wrapper("Serialization format not compatible with .NET"), &m7849_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t1800_CustomAttributesCacheGenerator_m10678(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1800_CustomAttributesCacheGenerator_m10680(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1800__CustomAttributeCache = {
2,
NULL,
&t1800_CustomAttributesCacheGenerator
};
CustomAttributesCache t1800__CustomAttributeCache_m10678 = {
1,
NULL,
&t1800_CustomAttributesCacheGenerator_m10678
};
CustomAttributesCache t1800__CustomAttributeCache_m10680 = {
1,
NULL,
&t1800_CustomAttributesCacheGenerator_m10680
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1800_1_0_0;
struct t1800;
extern CustomAttributesCache t1800__CustomAttributeCache;
extern CustomAttributesCache t1800__CustomAttributeCache_m10678;
extern CustomAttributesCache t1800__CustomAttributeCache_m10680;
const Il2CppTypeDefinitionMetadata t1800_DM = 
{
	NULL, t1800_TI__nestedTypes, t1800_ITIs, t1800_IOs, &t9_0_0_0, t1800_VT, t1800_VTIGM, NULL};
TypeInfo t1800_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Evidence", "System.Security.Policy", t1800_MIs, t1800_PIs, t1800_FIs, NULL, &t1800_TI, NULL, &t1800__CustomAttributeCache, &t1800_0_0_0, &t1800_1_0_0, &t1800_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1800), sizeof (t1800), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 5, 3, 0, 1, 9, 2, 2};
#include "t2025.h"
// Metadata Definition System.Security.Policy.Hash
extern TypeInfo t2025_TI;
#include "t2025MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10681_MI = 
{
	".ctor", (methodPointerType)&m10681, &t2025_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 4745, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t2025_m10682_ParameterInfos[] = 
{
	{"info", 0, 134223457, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134223458, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10682_MI = 
{
	".ctor", (methodPointerType)&m10682, &t2025_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t2025_m10682_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 4746, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t2025_m10683_ParameterInfos[] = 
{
	{"info", 0, 134223459, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134223460, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10683_MI = 
{
	"GetObjectData", (methodPointerType)&m10683, &t2025_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t2025_m10683_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 2, false, false, 4747, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10684_MI = 
{
	"ToString", (methodPointerType)&m10684, &t2025_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4748, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10685_MI = 
{
	"GetData", (methodPointerType)&m10685, &t2025_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4749, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2025_MIs[] =
{
	&m10681_MI,
	&m10682_MI,
	&m10683_MI,
	&m10684_MI,
	&m10685_MI,
	NULL
};
extern Il2CppType t1345_0_0_1;
FieldInfo t2025_f0_FieldInfo = 
{
	"assembly", &t1345_0_0_1, &t2025_TI, offsetof(t2025, f0), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t2025_f1_FieldInfo = 
{
	"data", &t730_0_0_1, &t2025_TI, offsetof(t2025, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2025_FIs[] =
{
	&t2025_f0_FieldInfo,
	&t2025_f1_FieldInfo,
	NULL
};
extern MethodInfo m10684_MI;
extern MethodInfo m10683_MI;
static Il2CppMethodReference t2025_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m10684_MI,
	&m10683_MI,
};
static bool t2025_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t623_0_0_0;
extern Il2CppType t2639_0_0_0;
static const Il2CppType* t2025_ITIs[] = 
{
	&t623_0_0_0,
	&t2639_0_0_0,
};
static Il2CppInterfaceOffsetPair t2025_IOs[] = 
{
	{ &t623_0_0_0, 4},
	{ &t2639_0_0_0, 5},
};
void t2025_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2025__CustomAttributeCache = {
1,
NULL,
&t2025_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2025_0_0_0;
extern Il2CppType t2025_1_0_0;
struct t2025;
extern CustomAttributesCache t2025__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2025_DM = 
{
	NULL, NULL, t2025_ITIs, t2025_IOs, &t9_0_0_0, t2025_VT, t2025_VTIGM, NULL};
TypeInfo t2025_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Hash", "System.Security.Policy", t2025_MIs, NULL, t2025_FIs, NULL, &t2025_TI, NULL, &t2025__CustomAttributeCache, &t2025_0_0_0, &t2025_1_0_0, &t2025_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2025), sizeof (t2025), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 2, 0, 0, 5, 2, 2};
// Metadata Definition System.Security.Policy.IBuiltInEvidence
extern TypeInfo t2639_TI;
static MethodInfo* t2639_MIs[] =
{
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2639_1_0_0;
struct t2639;
const Il2CppTypeDefinitionMetadata t2639_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2639_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IBuiltInEvidence", "System.Security.Policy", t2639_MIs, NULL, NULL, NULL, &t2639_TI, NULL, &EmptyCustomAttributesCache, &t2639_0_0_0, &t2639_1_0_0, &t2639_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 160, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Security.Policy.IIdentityPermissionFactory
extern TypeInfo t2640_TI;
static MethodInfo* t2640_MIs[] =
{
	NULL
};
void t2640_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2640__CustomAttributeCache = {
1,
NULL,
&t2640_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2640_0_0_0;
extern Il2CppType t2640_1_0_0;
struct t2640;
extern CustomAttributesCache t2640__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2640_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2640_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IIdentityPermissionFactory", "System.Security.Policy", t2640_MIs, NULL, NULL, NULL, &t2640_TI, NULL, &t2640__CustomAttributeCache, &t2640_0_0_0, &t2640_1_0_0, &t2640_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t2026.h"
// Metadata Definition System.Security.Policy.StrongName
extern TypeInfo t2026_TI;
#include "t2026MD.h"
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10686_MI = 
{
	"get_Name", (methodPointerType)&m10686, &t2026_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4750, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2021_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10687_MI = 
{
	"get_PublicKey", (methodPointerType)&m10687, &t2026_TI, &t2021_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4751, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1196_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10688_MI = 
{
	"get_Version", (methodPointerType)&m10688, &t2026_TI, &t1196_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4752, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2026_m10689_ParameterInfos[] = 
{
	{"o", 0, 134223461, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10689_MI = 
{
	"Equals", (methodPointerType)&m10689, &t2026_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2026_m10689_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4753, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10690_MI = 
{
	"GetHashCode", (methodPointerType)&m10690, &t2026_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4754, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10691_MI = 
{
	"ToString", (methodPointerType)&m10691, &t2026_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4755, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2026_MIs[] =
{
	&m10686_MI,
	&m10687_MI,
	&m10688_MI,
	&m10689_MI,
	&m10690_MI,
	&m10691_MI,
	NULL
};
extern Il2CppType t2021_0_0_1;
FieldInfo t2026_f0_FieldInfo = 
{
	"publickey", &t2021_0_0_1, &t2026_TI, offsetof(t2026, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2026_f1_FieldInfo = 
{
	"name", &t2_0_0_1, &t2026_TI, offsetof(t2026, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1196_0_0_1;
FieldInfo t2026_f2_FieldInfo = 
{
	"version", &t1196_0_0_1, &t2026_TI, offsetof(t2026, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2026_FIs[] =
{
	&t2026_f0_FieldInfo,
	&t2026_f1_FieldInfo,
	&t2026_f2_FieldInfo,
	NULL
};
extern MethodInfo m10686_MI;
static PropertyInfo t2026____Name_PropertyInfo = 
{
	&t2026_TI, "Name", &m10686_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10687_MI;
static PropertyInfo t2026____PublicKey_PropertyInfo = 
{
	&t2026_TI, "PublicKey", &m10687_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10688_MI;
static PropertyInfo t2026____Version_PropertyInfo = 
{
	&t2026_TI, "Version", &m10688_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2026_PIs[] =
{
	&t2026____Name_PropertyInfo,
	&t2026____PublicKey_PropertyInfo,
	&t2026____Version_PropertyInfo,
	NULL
};
extern MethodInfo m10689_MI;
extern MethodInfo m10690_MI;
extern MethodInfo m10691_MI;
static Il2CppMethodReference t2026_VT[] =
{
	&m10689_MI,
	&m646_MI,
	&m10690_MI,
	&m10691_MI,
};
static bool t2026_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static const Il2CppType* t2026_ITIs[] = 
{
	&t2639_0_0_0,
	&t2640_0_0_0,
};
static Il2CppInterfaceOffsetPair t2026_IOs[] = 
{
	{ &t2639_0_0_0, 4},
	{ &t2640_0_0_0, 4},
};
void t2026_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2026__CustomAttributeCache = {
1,
NULL,
&t2026_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2026_0_0_0;
extern Il2CppType t2026_1_0_0;
struct t2026;
extern CustomAttributesCache t2026__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2026_DM = 
{
	NULL, NULL, t2026_ITIs, t2026_IOs, &t9_0_0_0, t2026_VT, t2026_VTIGM, NULL};
TypeInfo t2026_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StrongName", "System.Security.Policy", t2026_MIs, t2026_PIs, t2026_FIs, NULL, &t2026_TI, NULL, &t2026__CustomAttributeCache, &t2026_0_0_0, &t2026_1_0_0, &t2026_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2026), sizeof (t2026), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 3, 3, 0, 0, 4, 2, 2};
// Metadata Definition System.Security.Principal.IIdentity
extern TypeInfo t2641_TI;
static MethodInfo* t2641_MIs[] =
{
	NULL
};
void t2641_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2641__CustomAttributeCache = {
1,
NULL,
&t2641_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2641_0_0_0;
extern Il2CppType t2641_1_0_0;
struct t2641;
extern CustomAttributesCache t2641__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2641_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2641_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IIdentity", "System.Security.Principal", t2641_MIs, NULL, NULL, NULL, &t2641_TI, NULL, &t2641__CustomAttributeCache, &t2641_0_0_0, &t2641_1_0_0, &t2641_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Security.Principal.IPrincipal
extern TypeInfo t2073_TI;
static MethodInfo* t2073_MIs[] =
{
	NULL
};
void t2073_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2073__CustomAttributeCache = {
1,
NULL,
&t2073_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2073_0_0_0;
extern Il2CppType t2073_1_0_0;
struct t2073;
extern CustomAttributesCache t2073__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2073_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2073_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IPrincipal", "System.Security.Principal", t2073_MIs, NULL, NULL, NULL, &t2073_TI, NULL, &t2073__CustomAttributeCache, &t2073_0_0_0, &t2073_1_0_0, &t2073_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t2027.h"
// Metadata Definition System.Security.Principal.PrincipalPolicy
extern TypeInfo t2027_TI;
#include "t2027MD.h"
static MethodInfo* t2027_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t2027_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t2027_TI, offsetof(t2027, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t2027_0_0_32854;
FieldInfo t2027_f2_FieldInfo = 
{
	"UnauthenticatedPrincipal", &t2027_0_0_32854, &t2027_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2027_0_0_32854;
FieldInfo t2027_f3_FieldInfo = 
{
	"NoPrincipal", &t2027_0_0_32854, &t2027_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2027_0_0_32854;
FieldInfo t2027_f4_FieldInfo = 
{
	"WindowsPrincipal", &t2027_0_0_32854, &t2027_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t2027_FIs[] =
{
	&t2027_f1_FieldInfo,
	&t2027_f2_FieldInfo,
	&t2027_f3_FieldInfo,
	&t2027_f4_FieldInfo,
	NULL
};
static const int32_t t2027_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t2027_f2_DefaultValue = 
{
	&t2027_f2_FieldInfo, { (char*)&t2027_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2027_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t2027_f3_DefaultValue = 
{
	&t2027_f3_FieldInfo, { (char*)&t2027_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2027_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t2027_f4_DefaultValue = 
{
	&t2027_f4_FieldInfo, { (char*)&t2027_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2027_FDVs[] = 
{
	&t2027_f2_DefaultValue,
	&t2027_f3_DefaultValue,
	&t2027_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t2027_VT[] =
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
static bool t2027_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2027_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t2027_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2027__CustomAttributeCache = {
1,
NULL,
&t2027_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2027_0_0_0;
extern Il2CppType t2027_1_0_0;
extern CustomAttributesCache t2027__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2027_DM = 
{
	NULL, NULL, NULL, t2027_IOs, &t8_0_0_0, t2027_VT, t2027_VTIGM, NULL};
TypeInfo t2027_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PrincipalPolicy", "System.Security.Principal", t2027_MIs, NULL, t2027_FIs, NULL, &t125_TI, NULL, &t2027__CustomAttributeCache, &t2027_0_0_0, &t2027_1_0_0, &t2027_DM, NULL, NULL, NULL, t2027_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2027)+ sizeof (Il2CppObject), sizeof (t2027)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t2028.h"
// Metadata Definition System.Security.Principal.WindowsAccountType
extern TypeInfo t2028_TI;
#include "t2028MD.h"
static MethodInfo* t2028_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t2028_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t2028_TI, offsetof(t2028, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t2028_0_0_32854;
FieldInfo t2028_f2_FieldInfo = 
{
	"Normal", &t2028_0_0_32854, &t2028_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2028_0_0_32854;
FieldInfo t2028_f3_FieldInfo = 
{
	"Guest", &t2028_0_0_32854, &t2028_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2028_0_0_32854;
FieldInfo t2028_f4_FieldInfo = 
{
	"System", &t2028_0_0_32854, &t2028_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2028_0_0_32854;
FieldInfo t2028_f5_FieldInfo = 
{
	"Anonymous", &t2028_0_0_32854, &t2028_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t2028_FIs[] =
{
	&t2028_f1_FieldInfo,
	&t2028_f2_FieldInfo,
	&t2028_f3_FieldInfo,
	&t2028_f4_FieldInfo,
	&t2028_f5_FieldInfo,
	NULL
};
static const int32_t t2028_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t2028_f2_DefaultValue = 
{
	&t2028_f2_FieldInfo, { (char*)&t2028_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2028_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t2028_f3_DefaultValue = 
{
	&t2028_f3_FieldInfo, { (char*)&t2028_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2028_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t2028_f4_DefaultValue = 
{
	&t2028_f4_FieldInfo, { (char*)&t2028_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2028_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t2028_f5_DefaultValue = 
{
	&t2028_f5_FieldInfo, { (char*)&t2028_f5_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2028_FDVs[] = 
{
	&t2028_f2_DefaultValue,
	&t2028_f3_DefaultValue,
	&t2028_f4_DefaultValue,
	&t2028_f5_DefaultValue,
	NULL
};
static Il2CppMethodReference t2028_VT[] =
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
static bool t2028_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2028_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t2028_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2028__CustomAttributeCache = {
1,
NULL,
&t2028_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2028_0_0_0;
extern Il2CppType t2028_1_0_0;
extern CustomAttributesCache t2028__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2028_DM = 
{
	NULL, NULL, NULL, t2028_IOs, &t8_0_0_0, t2028_VT, t2028_VTIGM, NULL};
TypeInfo t2028_TI = 
{
	&g_mscorlib_dll_Image, NULL, "WindowsAccountType", "System.Security.Principal", t2028_MIs, NULL, t2028_FIs, NULL, &t125_TI, NULL, &t2028__CustomAttributeCache, &t2028_0_0_0, &t2028_1_0_0, &t2028_DM, NULL, NULL, NULL, t2028_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2028)+ sizeof (Il2CppObject), sizeof (t2028)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t2029.h"
// Metadata Definition System.Security.Principal.WindowsIdentity
extern TypeInfo t2029_TI;
#include "t2029MD.h"
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t2029_m10692_ParameterInfos[] = 
{
	{"info", 0, 134223462, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134223463, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10692_MI = 
{
	".ctor", (methodPointerType)&m10692, &t2029_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t2029_m10692_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4756, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10693_MI = 
{
	".cctor", (methodPointerType)&m10693, &t2029_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4757, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2029_m10694_ParameterInfos[] = 
{
	{"sender", 0, 134223464, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10694_MI = 
{
	"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", (methodPointerType)&m10694, &t2029_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2029_m10694_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 1, false, false, 4758, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t2029_m10695_ParameterInfos[] = 
{
	{"info", 0, 134223465, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134223466, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10695_MI = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData", (methodPointerType)&m10695, &t2029_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t2029_m10695_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, false, 4759, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2029__CustomAttributeCache_m10696;
MethodInfo m10696_MI = 
{
	"Dispose", (methodPointerType)&m10696, &t2029_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t2029__CustomAttributeCache_m10696, 486, 0, 4, 0, false, false, 4760, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m10697_MI = 
{
	"GetCurrentToken", (methodPointerType)&m10697, &t2029_TI, &t58_0_0_0, RuntimeInvoker_t58, NULL, &EmptyCustomAttributesCache, 147, 4096, 255, 0, false, false, 4761, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
static ParameterInfo t2029_m10698_ParameterInfos[] = 
{
	{"token", 0, 134223467, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m10698_MI = 
{
	"GetTokenName", (methodPointerType)&m10698, &t2029_TI, &t2_0_0_0, RuntimeInvoker_t9_t58, t2029_m10698_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 4762, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2029_MIs[] =
{
	&m10692_MI,
	&m10693_MI,
	&m10694_MI,
	&m10695_MI,
	&m10696_MI,
	&m10697_MI,
	&m10698_MI,
	NULL
};
extern Il2CppType t58_0_0_1;
FieldInfo t2029_f0_FieldInfo = 
{
	"_token", &t58_0_0_1, &t2029_TI, offsetof(t2029, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2029_f1_FieldInfo = 
{
	"_type", &t2_0_0_1, &t2029_TI, offsetof(t2029, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2028_0_0_1;
FieldInfo t2029_f2_FieldInfo = 
{
	"_account", &t2028_0_0_1, &t2029_TI, offsetof(t2029, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t2029_f3_FieldInfo = 
{
	"_authenticated", &t124_0_0_1, &t2029_TI, offsetof(t2029, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2029_f4_FieldInfo = 
{
	"_name", &t2_0_0_1, &t2029_TI, offsetof(t2029, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1100_0_0_1;
FieldInfo t2029_f5_FieldInfo = 
{
	"_info", &t1100_0_0_1, &t2029_TI, offsetof(t2029, f5), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_17;
FieldInfo t2029_f6_FieldInfo = 
{
	"invalidWindows", &t58_0_0_17, &t2029_TI, offsetof(t2029_SFs, f6), &EmptyCustomAttributesCache};
static FieldInfo* t2029_FIs[] =
{
	&t2029_f0_FieldInfo,
	&t2029_f1_FieldInfo,
	&t2029_f2_FieldInfo,
	&t2029_f3_FieldInfo,
	&t2029_f4_FieldInfo,
	&t2029_f5_FieldInfo,
	&t2029_f6_FieldInfo,
	NULL
};
extern MethodInfo m10696_MI;
extern MethodInfo m10695_MI;
extern MethodInfo m10694_MI;
static Il2CppMethodReference t2029_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10696_MI,
	&m10695_MI,
	&m10694_MI,
};
static bool t2029_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t1106_0_0_0;
static const Il2CppType* t2029_ITIs[] = 
{
	&t137_0_0_0,
	&t623_0_0_0,
	&t1106_0_0_0,
	&t2641_0_0_0,
};
static Il2CppInterfaceOffsetPair t2029_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t623_0_0_0, 5},
	{ &t1106_0_0_0, 6},
	{ &t2641_0_0_0, 7},
};
void t2029_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t2029_CustomAttributesCacheGenerator_m10696(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2029__CustomAttributeCache = {
1,
NULL,
&t2029_CustomAttributesCacheGenerator
};
CustomAttributesCache t2029__CustomAttributeCache_m10696 = {
1,
NULL,
&t2029_CustomAttributesCacheGenerator_m10696
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2029_0_0_0;
extern Il2CppType t2029_1_0_0;
struct t2029;
extern CustomAttributesCache t2029__CustomAttributeCache;
extern CustomAttributesCache t2029__CustomAttributeCache_m10696;
const Il2CppTypeDefinitionMetadata t2029_DM = 
{
	NULL, NULL, t2029_ITIs, t2029_IOs, &t9_0_0_0, t2029_VT, t2029_VTIGM, NULL};
TypeInfo t2029_TI = 
{
	&g_mscorlib_dll_Image, NULL, "WindowsIdentity", "System.Security.Principal", t2029_MIs, NULL, t2029_FIs, NULL, &t2029_TI, NULL, &t2029__CustomAttributeCache, &t2029_0_0_0, &t2029_1_0_0, &t2029_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2029), sizeof (t2029), 0, -1, sizeof(t2029_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 7, 0, 7, 0, 0, 7, 4, 4};
#include "t2018.h"
// Metadata Definition System.Security.CodeAccessPermission
extern TypeInfo t2018_TI;
#include "t2018MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10699_MI = 
{
	".ctor", (methodPointerType)&m10699, &t2018_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4763, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2018_m10700_ParameterInfos[] = 
{
	{"obj", 0, 134223468, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2018__CustomAttributeCache_m10700;
MethodInfo m10700_MI = 
{
	"Equals", (methodPointerType)&m10700, &t2018_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2018_m10700_ParameterInfos, &t2018__CustomAttributeCache_m10700, 198, 0, 0, 1, false, false, 4764, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2018__CustomAttributeCache_m10701;
MethodInfo m10701_MI = 
{
	"GetHashCode", (methodPointerType)&m10701, &t2018_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t2018__CustomAttributeCache_m10701, 198, 0, 2, 0, false, false, 4765, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2020_0_0_0;
static ParameterInfo t2018_m12105_ParameterInfos[] = 
{
	{"target", 0, 134223469, &EmptyCustomAttributesCache, &t2020_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12105_MI = 
{
	"IsSubsetOf", NULL, &t2018_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2018_m12105_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4766, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10702_MI = 
{
	"ToString", (methodPointerType)&m10702, &t2018_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4767, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1660_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12106_MI = 
{
	"ToXml", NULL, &t2018_TI, &t1660_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 1478, 0, 5, 0, false, false, 4768, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2018_m10703_ParameterInfos[] = 
{
	{"version", 0, 134223470, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t1660_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10703_MI = 
{
	"Element", (methodPointerType)&m10703, &t2018_TI, &t1660_0_0_0, RuntimeInvoker_t9_t125, t2018_m10703_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4769, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2020_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t2018_m10704_ParameterInfos[] = 
{
	{"target", 0, 134223471, &EmptyCustomAttributesCache, &t2020_0_0_0},
	{"expected", 1, 134223472, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10704_MI = 
{
	"ThrowInvalidPermission", (methodPointerType)&m10704, &t2018_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2018_m10704_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4770, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2018_MIs[] =
{
	&m10699_MI,
	&m10700_MI,
	&m10701_MI,
	&m12105_MI,
	&m10702_MI,
	&m12106_MI,
	&m10703_MI,
	&m10704_MI,
	NULL
};
static Il2CppMethodReference t2018_VT[] =
{
	&m10700_MI,
	&m646_MI,
	&m10701_MI,
	&m10702_MI,
	NULL,
	NULL,
};
static bool t2018_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t2018_ITIs[] = 
{
	&t2020_0_0_0,
	&t2637_0_0_0,
	&t2638_0_0_0,
};
static Il2CppInterfaceOffsetPair t2018_IOs[] = 
{
	{ &t2020_0_0_0, 4},
	{ &t2637_0_0_0, 4},
	{ &t2638_0_0_0, 4},
};
void t2018_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7849(tmp, il2cpp_codegen_string_new_wrapper("CAS support is experimental (and unsupported)."), &m7849_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t2018_CustomAttributesCacheGenerator_m10700(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t2018_CustomAttributesCacheGenerator_m10701(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2018__CustomAttributeCache = {
2,
NULL,
&t2018_CustomAttributesCacheGenerator
};
CustomAttributesCache t2018__CustomAttributeCache_m10700 = {
1,
NULL,
&t2018_CustomAttributesCacheGenerator_m10700
};
CustomAttributesCache t2018__CustomAttributeCache_m10701 = {
1,
NULL,
&t2018_CustomAttributesCacheGenerator_m10701
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2018_1_0_0;
struct t2018;
extern CustomAttributesCache t2018__CustomAttributeCache;
extern CustomAttributesCache t2018__CustomAttributeCache_m10700;
extern CustomAttributesCache t2018__CustomAttributeCache_m10701;
const Il2CppTypeDefinitionMetadata t2018_DM = 
{
	NULL, NULL, t2018_ITIs, t2018_IOs, &t9_0_0_0, t2018_VT, t2018_VTIGM, NULL};
TypeInfo t2018_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CodeAccessPermission", "System.Security", t2018_MIs, NULL, NULL, NULL, &t2018_TI, NULL, &t2018__CustomAttributeCache, &t2018_0_0_0, &t2018_1_0_0, &t2018_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2018), sizeof (t2018), 0, -1, 0, 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 0, 0, 0, 0, 6, 3, 3};
// Metadata Definition System.Security.IPermission
extern TypeInfo t2020_TI;
static MethodInfo* t2020_MIs[] =
{
	NULL
};
static const Il2CppType* t2020_ITIs[] = 
{
	&t2637_0_0_0,
};
void t2020_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2020__CustomAttributeCache = {
1,
NULL,
&t2020_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2020_1_0_0;
struct t2020;
extern CustomAttributesCache t2020__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2020_DM = 
{
	NULL, NULL, t2020_ITIs, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2020_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IPermission", "System.Security", t2020_MIs, NULL, NULL, NULL, &t2020_TI, NULL, &t2020__CustomAttributeCache, &t2020_0_0_0, &t2020_1_0_0, &t2020_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 1, 0};
// Metadata Definition System.Security.ISecurityEncodable
extern TypeInfo t2637_TI;
static MethodInfo* t2637_MIs[] =
{
	NULL
};
void t2637_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2637__CustomAttributeCache = {
1,
NULL,
&t2637_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2637_1_0_0;
struct t2637;
extern CustomAttributesCache t2637__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2637_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2637_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISecurityEncodable", "System.Security", t2637_MIs, NULL, NULL, NULL, &t2637_TI, NULL, &t2637__CustomAttributeCache, &t2637_0_0_0, &t2637_1_0_0, &t2637_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Security.IStackWalk
extern TypeInfo t2638_TI;
static MethodInfo* t2638_MIs[] =
{
	NULL
};
void t2638_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2638__CustomAttributeCache = {
1,
NULL,
&t2638_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2638_1_0_0;
struct t2638;
extern CustomAttributesCache t2638__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2638_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2638_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IStackWalk", "System.Security", t2638_MIs, NULL, NULL, NULL, &t2638_TI, NULL, &t2638__CustomAttributeCache, &t2638_0_0_0, &t2638_1_0_0, &t2638_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t1801.h"
// Metadata Definition System.Security.PermissionSet
extern TypeInfo t1801_TI;
#include "t1801MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10705_MI = 
{
	".ctor", (methodPointerType)&m10705, &t1801_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4771, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1801_m10706_ParameterInfos[] = 
{
	{"xml", 0, 134223473, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10706_MI = 
{
	".ctor", (methodPointerType)&m10706, &t1801_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1801_m10706_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 4772, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1801_m10707_ParameterInfos[] = 
{
	{"value", 0, 134223474, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1801__CustomAttributeCache_m10707;
MethodInfo m10707_MI = 
{
	"set_DeclarativeSecurity", (methodPointerType)&m10707, &t1801_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1801_m10707_ParameterInfos, &t1801__CustomAttributeCache_m10707, 2179, 0, 255, 1, false, false, 4773, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1801_m10708_ParameterInfos[] = 
{
	{"data", 0, 134223475, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t1801_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10708_MI = 
{
	"CreateFromBinaryFormat", (methodPointerType)&m10708, &t1801_TI, &t1801_0_0_0, RuntimeInvoker_t9_t9, t1801_m10708_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 4774, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1801_MIs[] =
{
	&m10705_MI,
	&m10706_MI,
	&m10707_MI,
	&m10708_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t1801__CustomAttributeCache_U3CDeclarativeSecurityU3Ek__BackingField;
FieldInfo t1801_f0_FieldInfo = 
{
	"<DeclarativeSecurity>k__BackingField", &t124_0_0_1, &t1801_TI, offsetof(t1801, f0), &t1801__CustomAttributeCache_U3CDeclarativeSecurityU3Ek__BackingField};
static FieldInfo* t1801_FIs[] =
{
	&t1801_f0_FieldInfo,
	NULL
};
extern MethodInfo m10707_MI;
static PropertyInfo t1801____DeclarativeSecurity_PropertyInfo = 
{
	&t1801_TI, "DeclarativeSecurity", NULL, &m10707_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1801_PIs[] =
{
	&t1801____DeclarativeSecurity_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1801_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1801_VTIGM[] =
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
void t1801_CustomAttributesCacheGenerator_U3CDeclarativeSecurityU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1801_CustomAttributesCacheGenerator_m10707(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1801__CustomAttributeCache_U3CDeclarativeSecurityU3Ek__BackingField = {
1,
NULL,
&t1801_CustomAttributesCacheGenerator_U3CDeclarativeSecurityU3Ek__BackingField
};
CustomAttributesCache t1801__CustomAttributeCache_m10707 = {
1,
NULL,
&t1801_CustomAttributesCacheGenerator_m10707
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1801_0_0_0;
extern Il2CppType t1801_1_0_0;
struct t1801;
extern CustomAttributesCache t1801__CustomAttributeCache_U3CDeclarativeSecurityU3Ek__BackingField;
extern CustomAttributesCache t1801__CustomAttributeCache_m10707;
const Il2CppTypeDefinitionMetadata t1801_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1801_VT, t1801_VTIGM, NULL};
TypeInfo t1801_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PermissionSet", "System.Security", t1801_MIs, t1801_PIs, t1801_FIs, NULL, &t1801_TI, NULL, &EmptyCustomAttributesCache, &t1801_0_0_0, &t1801_1_0_0, &t1801_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1801), sizeof (t1801), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 1, 1, 0, 0, 4, 0, 0};
#include "t2030.h"
// Metadata Definition System.Security.SecurityContext
extern TypeInfo t2030_TI;
#include "t2030MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10709_MI = 
{
	".ctor", (methodPointerType)&m10709, &t2030_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 4775, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2030_0_0_0;
extern Il2CppType t2030_0_0_0;
static ParameterInfo t2030_m10710_ParameterInfos[] = 
{
	{"sc", 0, 134223476, &EmptyCustomAttributesCache, &t2030_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10710_MI = 
{
	".ctor", (methodPointerType)&m10710, &t2030_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2030_m10710_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 4776, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2030_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10711_MI = 
{
	"Capture", (methodPointerType)&m10711, &t2030_TI, &t2030_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4777, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10712_MI = 
{
	"get_FlowSuppressed", (methodPointerType)&m10712, &t2030_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4778, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2031_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10713_MI = 
{
	"get_CompressedStack", (methodPointerType)&m10713, &t2030_TI, &t2031_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4779, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2030_MIs[] =
{
	&m10709_MI,
	&m10710_MI,
	&m10711_MI,
	&m10712_MI,
	&m10713_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t2030_f0_FieldInfo = 
{
	"_capture", &t124_0_0_1, &t2030_TI, offsetof(t2030, f0), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_1;
FieldInfo t2030_f1_FieldInfo = 
{
	"_winid", &t58_0_0_1, &t2030_TI, offsetof(t2030, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2031_0_0_1;
FieldInfo t2030_f2_FieldInfo = 
{
	"_stack", &t2031_0_0_1, &t2030_TI, offsetof(t2030, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t2030_f3_FieldInfo = 
{
	"_suppressFlow", &t124_0_0_1, &t2030_TI, offsetof(t2030, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2030_FIs[] =
{
	&t2030_f0_FieldInfo,
	&t2030_f1_FieldInfo,
	&t2030_f2_FieldInfo,
	&t2030_f3_FieldInfo,
	NULL
};
extern MethodInfo m10712_MI;
static PropertyInfo t2030____FlowSuppressed_PropertyInfo = 
{
	&t2030_TI, "FlowSuppressed", &m10712_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10713_MI;
static PropertyInfo t2030____CompressedStack_PropertyInfo = 
{
	&t2030_TI, "CompressedStack", &m10713_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2030_PIs[] =
{
	&t2030____FlowSuppressed_PropertyInfo,
	&t2030____CompressedStack_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2030_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2030_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2030_1_0_0;
struct t2030;
const Il2CppTypeDefinitionMetadata t2030_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2030_VT, t2030_VTIGM, NULL};
TypeInfo t2030_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityContext", "System.Security", t2030_MIs, t2030_PIs, t2030_FIs, NULL, &t2030_TI, NULL, &EmptyCustomAttributesCache, &t2030_0_0_0, &t2030_1_0_0, &t2030_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2030), sizeof (t2030), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 2, 4, 0, 0, 4, 0, 0};
#include "t956.h"
// Metadata Definition System.Security.SecurityCriticalAttribute
extern TypeInfo t956_TI;
#include "t956MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m4502_MI = 
{
	".ctor", (methodPointerType)&m4502, &t956_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4780, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t956_MIs[] =
{
	&m4502_MI,
	NULL
};
extern MethodInfo m4499_MI;
extern MethodInfo m4493_MI;
static Il2CppMethodReference t956_VT[] =
{
	&m4499_MI,
	&m646_MI,
	&m4493_MI,
	&m673_MI,
};
static bool t956_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppType t954_0_0_0;
static Il2CppInterfaceOffsetPair t956_IOs[] = 
{
	{ &t954_0_0_0, 4},
};
extern TypeInfo t1024_TI;
#include "t1024.h"
#include "t1024MD.h"
extern MethodInfo m4605_MI;
extern MethodInfo m4607_MI;
extern MethodInfo m4606_MI;
void t956_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1024 * tmp;
		tmp = (t1024 *)il2cpp_codegen_object_new (&t1024_TI);
		m4605(tmp, 6143, &m4605_MI);
		m4607(tmp, false, &m4607_MI);
		m4606(tmp, false, &m4606_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t956__CustomAttributeCache = {
1,
NULL,
&t956_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t956_0_0_0;
extern Il2CppType t956_1_0_0;
extern Il2CppType t725_0_0_0;
struct t956;
extern CustomAttributesCache t956__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t956_DM = 
{
	NULL, NULL, NULL, t956_IOs, &t725_0_0_0, t956_VT, t956_VTIGM, NULL};
TypeInfo t956_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityCriticalAttribute", "System.Security", t956_MIs, NULL, NULL, NULL, &t956_TI, NULL, &t956__CustomAttributeCache, &t956_0_0_0, &t956_1_0_0, &t956_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t956), sizeof (t956), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t2032.h"
// Metadata Definition System.Security.SecurityElement/SecurityAttribute
extern TypeInfo t2032_TI;
#include "t2032MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t2032_m10714_ParameterInfos[] = 
{
	{"name", 0, 134223494, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134223495, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10714_MI = 
{
	".ctor", (methodPointerType)&m10714, &t2032_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2032_m10714_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4799, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10715_MI = 
{
	"get_Name", (methodPointerType)&m10715, &t2032_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4800, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10716_MI = 
{
	"get_Value", (methodPointerType)&m10716, &t2032_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4801, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2032_MIs[] =
{
	&m10714_MI,
	&m10715_MI,
	&m10716_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2032_f0_FieldInfo = 
{
	"_name", &t2_0_0_1, &t2032_TI, offsetof(t2032, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2032_f1_FieldInfo = 
{
	"_value", &t2_0_0_1, &t2032_TI, offsetof(t2032, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2032_FIs[] =
{
	&t2032_f0_FieldInfo,
	&t2032_f1_FieldInfo,
	NULL
};
extern MethodInfo m10715_MI;
static PropertyInfo t2032____Name_PropertyInfo = 
{
	&t2032_TI, "Name", &m10715_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10716_MI;
static PropertyInfo t2032____Value_PropertyInfo = 
{
	&t2032_TI, "Value", &m10716_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2032_PIs[] =
{
	&t2032____Name_PropertyInfo,
	&t2032____Value_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2032_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2032_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2032_0_0_0;
extern Il2CppType t2032_1_0_0;
extern TypeInfo t1660_TI;
extern Il2CppType t1660_0_0_0;
struct t2032;
const Il2CppTypeDefinitionMetadata t2032_DM = 
{
	&t1660_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t2032_VT, t2032_VTIGM, NULL};
TypeInfo t2032_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityAttribute", "", t2032_MIs, t2032_PIs, t2032_FIs, NULL, &t2032_TI, NULL, &EmptyCustomAttributesCache, &t2032_0_0_0, &t2032_1_0_0, &t2032_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2032), sizeof (t2032), 0, -1, 0, 0, -1, 1048581, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 2, 2, 0, 0, 4, 0, 0};
#include "t1660.h"
// Metadata Definition System.Security.SecurityElement
#include "t1660MD.h"
extern Il2CppType t2_0_0_0;
static ParameterInfo t1660_m10717_ParameterInfos[] = 
{
	{"tag", 0, 134223477, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10717_MI = 
{
	".ctor", (methodPointerType)&m10717, &t1660_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1660_m10717_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4781, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1660_m10718_ParameterInfos[] = 
{
	{"tag", 0, 134223478, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"text", 1, 134223479, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10718_MI = 
{
	".ctor", (methodPointerType)&m10718, &t1660_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1660_m10718_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4782, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10719_MI = 
{
	".cctor", (methodPointerType)&m10719, &t1660_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4783, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1170_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10720_MI = 
{
	"get_Children", (methodPointerType)&m10720, &t1660_TI, &t1170_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4784, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10721_MI = 
{
	"get_Tag", (methodPointerType)&m10721, &t1660_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4785, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1660_m10722_ParameterInfos[] = 
{
	{"value", 0, 134223480, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10722_MI = 
{
	"set_Text", (methodPointerType)&m10722, &t1660_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1660_m10722_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4786, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1660_m10723_ParameterInfos[] = 
{
	{"name", 0, 134223481, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134223482, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10723_MI = 
{
	"AddAttribute", (methodPointerType)&m10723, &t1660_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1660_m10723_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4787, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1660_0_0_0;
static ParameterInfo t1660_m10724_ParameterInfos[] = 
{
	{"child", 0, 134223483, &EmptyCustomAttributesCache, &t1660_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10724_MI = 
{
	"AddChild", (methodPointerType)&m10724, &t1660_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1660_m10724_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4788, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1660_m10725_ParameterInfos[] = 
{
	{"str", 0, 134223484, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10725_MI = 
{
	"Escape", (methodPointerType)&m10725, &t1660_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1660_m10725_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4789, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1660_m10726_ParameterInfos[] = 
{
	{"str", 0, 134223485, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10726_MI = 
{
	"Unescape", (methodPointerType)&m10726, &t1660_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1660_m10726_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4790, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1660_m10727_ParameterInfos[] = 
{
	{"name", 0, 134223486, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10727_MI = 
{
	"IsValidAttributeName", (methodPointerType)&m10727, &t1660_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1660_m10727_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4791, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1660_m10728_ParameterInfos[] = 
{
	{"value", 0, 134223487, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10728_MI = 
{
	"IsValidAttributeValue", (methodPointerType)&m10728, &t1660_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1660_m10728_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4792, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1660_m10729_ParameterInfos[] = 
{
	{"tag", 0, 134223488, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10729_MI = 
{
	"IsValidTag", (methodPointerType)&m10729, &t1660_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1660_m10729_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4793, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1660_m10730_ParameterInfos[] = 
{
	{"text", 0, 134223489, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10730_MI = 
{
	"IsValidText", (methodPointerType)&m10730, &t1660_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1660_m10730_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4794, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1660_m10731_ParameterInfos[] = 
{
	{"tag", 0, 134223490, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1660_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10731_MI = 
{
	"SearchForChildByTag", (methodPointerType)&m10731, &t1660_TI, &t1660_0_0_0, RuntimeInvoker_t9_t9, t1660_m10731_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4795, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10732_MI = 
{
	"ToString", (methodPointerType)&m10732, &t1660_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4796, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t322_1_0_0;
extern Il2CppType t322_1_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1660_m10733_ParameterInfos[] = 
{
	{"s", 0, 134223491, &EmptyCustomAttributesCache, &t322_1_0_0},
	{"level", 1, 134223492, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2642_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10733_MI = 
{
	"ToXml", (methodPointerType)&m10733, &t1660_TI, &t122_0_0_0, RuntimeInvoker_t122_t2642_t125, t1660_m10733_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4797, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1660_m10734_ParameterInfos[] = 
{
	{"name", 0, 134223493, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2032_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10734_MI = 
{
	"GetAttribute", (methodPointerType)&m10734, &t1660_TI, &t2032_0_0_0, RuntimeInvoker_t9_t9, t1660_m10734_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4798, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1660_MIs[] =
{
	&m10717_MI,
	&m10718_MI,
	&m10719_MI,
	&m10720_MI,
	&m10721_MI,
	&m10722_MI,
	&m10723_MI,
	&m10724_MI,
	&m10725_MI,
	&m10726_MI,
	&m10727_MI,
	&m10728_MI,
	&m10729_MI,
	&m10730_MI,
	&m10731_MI,
	&m10732_MI,
	&m10733_MI,
	&m10734_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1660_f0_FieldInfo = 
{
	"text", &t2_0_0_1, &t1660_TI, offsetof(t1660, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1660_f1_FieldInfo = 
{
	"tag", &t2_0_0_1, &t1660_TI, offsetof(t1660, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1170_0_0_1;
FieldInfo t1660_f2_FieldInfo = 
{
	"attributes", &t1170_0_0_1, &t1660_TI, offsetof(t1660, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1170_0_0_1;
FieldInfo t1660_f3_FieldInfo = 
{
	"children", &t1170_0_0_1, &t1660_TI, offsetof(t1660, f3), &EmptyCustomAttributesCache};
extern Il2CppType t312_0_0_49;
FieldInfo t1660_f4_FieldInfo = 
{
	"invalid_tag_chars", &t312_0_0_49, &t1660_TI, offsetof(t1660_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t312_0_0_49;
FieldInfo t1660_f5_FieldInfo = 
{
	"invalid_text_chars", &t312_0_0_49, &t1660_TI, offsetof(t1660_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t312_0_0_49;
FieldInfo t1660_f6_FieldInfo = 
{
	"invalid_attr_name_chars", &t312_0_0_49, &t1660_TI, offsetof(t1660_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t312_0_0_49;
FieldInfo t1660_f7_FieldInfo = 
{
	"invalid_attr_value_chars", &t312_0_0_49, &t1660_TI, offsetof(t1660_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t312_0_0_49;
FieldInfo t1660_f8_FieldInfo = 
{
	"invalid_chars", &t312_0_0_49, &t1660_TI, offsetof(t1660_SFs, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1660_FIs[] =
{
	&t1660_f0_FieldInfo,
	&t1660_f1_FieldInfo,
	&t1660_f2_FieldInfo,
	&t1660_f3_FieldInfo,
	&t1660_f4_FieldInfo,
	&t1660_f5_FieldInfo,
	&t1660_f6_FieldInfo,
	&t1660_f7_FieldInfo,
	&t1660_f8_FieldInfo,
	NULL
};
extern MethodInfo m10720_MI;
static PropertyInfo t1660____Children_PropertyInfo = 
{
	&t1660_TI, "Children", &m10720_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10721_MI;
static PropertyInfo t1660____Tag_PropertyInfo = 
{
	&t1660_TI, "Tag", &m10721_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10722_MI;
static PropertyInfo t1660____Text_PropertyInfo = 
{
	&t1660_TI, "Text", NULL, &m10722_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1660_PIs[] =
{
	&t1660____Children_PropertyInfo,
	&t1660____Tag_PropertyInfo,
	&t1660____Text_PropertyInfo,
	NULL
};
static const Il2CppType* t1660_TI__nestedTypes[1] =
{
	&t2032_0_0_0,
};
extern MethodInfo m10732_MI;
static Il2CppMethodReference t1660_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m10732_MI,
};
static bool t1660_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1660_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1660__CustomAttributeCache = {
1,
NULL,
&t1660_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1660_1_0_0;
struct t1660;
extern CustomAttributesCache t1660__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1660_DM = 
{
	NULL, t1660_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t1660_VT, t1660_VTIGM, NULL};
TypeInfo t1660_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityElement", "System.Security", t1660_MIs, t1660_PIs, t1660_FIs, NULL, &t1660_TI, NULL, &t1660__CustomAttributeCache, &t1660_0_0_0, &t1660_1_0_0, &t1660_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1660), sizeof (t1660), 0, -1, sizeof(t1660_SFs), 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, true, false, 18, 3, 9, 0, 1, 4, 0, 0};
#include "t2033.h"
// Metadata Definition System.Security.SecurityException
extern TypeInfo t2033_TI;
#include "t2033MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10735_MI = 
{
	".ctor", (methodPointerType)&m10735, &t2033_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4802, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2033_m10736_ParameterInfos[] = 
{
	{"message", 0, 134223496, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10736_MI = 
{
	".ctor", (methodPointerType)&m10736, &t2033_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2033_m10736_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4803, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t2033_m10737_ParameterInfos[] = 
{
	{"info", 0, 134223497, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134223498, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10737_MI = 
{
	".ctor", (methodPointerType)&m10737, &t2033_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t2033_m10737_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 4804, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10738_MI = 
{
	"get_Demanded", (methodPointerType)&m10738, &t2033_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4805, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2020_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10739_MI = 
{
	"get_FirstPermissionThatFailed", (methodPointerType)&m10739, &t2033_TI, &t2020_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4806, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10740_MI = 
{
	"get_PermissionState", (methodPointerType)&m10740, &t2033_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4807, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10741_MI = 
{
	"get_PermissionType", (methodPointerType)&m10741, &t2033_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4808, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10742_MI = 
{
	"get_GrantedSet", (methodPointerType)&m10742, &t2033_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4809, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10743_MI = 
{
	"get_RefusedSet", (methodPointerType)&m10743, &t2033_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4810, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t2033_m10744_ParameterInfos[] = 
{
	{"info", 0, 134223499, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134223500, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10744_MI = 
{
	"GetObjectData", (methodPointerType)&m10744, &t2033_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t2033_m10744_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, false, 4811, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10745_MI = 
{
	"ToString", (methodPointerType)&m10745, &t2033_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4812, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2033_MIs[] =
{
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
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2033_f11_FieldInfo = 
{
	"permissionState", &t2_0_0_1, &t2033_TI, offsetof(t2033, f11), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t2033_f12_FieldInfo = 
{
	"permissionType", &t126_0_0_1, &t2033_TI, offsetof(t2033, f12), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2033_f13_FieldInfo = 
{
	"_granted", &t2_0_0_1, &t2033_TI, offsetof(t2033, f13), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2033_f14_FieldInfo = 
{
	"_refused", &t2_0_0_1, &t2033_TI, offsetof(t2033, f14), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t2033_f15_FieldInfo = 
{
	"_demanded", &t9_0_0_1, &t2033_TI, offsetof(t2033, f15), &EmptyCustomAttributesCache};
extern Il2CppType t2020_0_0_1;
FieldInfo t2033_f16_FieldInfo = 
{
	"_firstperm", &t2020_0_0_1, &t2033_TI, offsetof(t2033, f16), &EmptyCustomAttributesCache};
extern Il2CppType t828_0_0_1;
FieldInfo t2033_f17_FieldInfo = 
{
	"_method", &t828_0_0_1, &t2033_TI, offsetof(t2033, f17), &EmptyCustomAttributesCache};
extern Il2CppType t1800_0_0_1;
FieldInfo t2033_f18_FieldInfo = 
{
	"_evidence", &t1800_0_0_1, &t2033_TI, offsetof(t2033, f18), &EmptyCustomAttributesCache};
static FieldInfo* t2033_FIs[] =
{
	&t2033_f11_FieldInfo,
	&t2033_f12_FieldInfo,
	&t2033_f13_FieldInfo,
	&t2033_f14_FieldInfo,
	&t2033_f15_FieldInfo,
	&t2033_f16_FieldInfo,
	&t2033_f17_FieldInfo,
	&t2033_f18_FieldInfo,
	NULL
};
extern MethodInfo m10738_MI;
extern CustomAttributesCache t2033__CustomAttributeCache_t2033____Demanded_PropertyInfo;
static PropertyInfo t2033____Demanded_PropertyInfo = 
{
	&t2033_TI, "Demanded", &m10738_MI, NULL, 0, &t2033__CustomAttributeCache_t2033____Demanded_PropertyInfo};
extern MethodInfo m10739_MI;
static PropertyInfo t2033____FirstPermissionThatFailed_PropertyInfo = 
{
	&t2033_TI, "FirstPermissionThatFailed", &m10739_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10740_MI;
static PropertyInfo t2033____PermissionState_PropertyInfo = 
{
	&t2033_TI, "PermissionState", &m10740_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10741_MI;
static PropertyInfo t2033____PermissionType_PropertyInfo = 
{
	&t2033_TI, "PermissionType", &m10741_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10742_MI;
static PropertyInfo t2033____GrantedSet_PropertyInfo = 
{
	&t2033_TI, "GrantedSet", &m10742_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10743_MI;
static PropertyInfo t2033____RefusedSet_PropertyInfo = 
{
	&t2033_TI, "RefusedSet", &m10743_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2033_PIs[] =
{
	&t2033____Demanded_PropertyInfo,
	&t2033____FirstPermissionThatFailed_PropertyInfo,
	&t2033____PermissionState_PropertyInfo,
	&t2033____PermissionType_PropertyInfo,
	&t2033____GrantedSet_PropertyInfo,
	&t2033____RefusedSet_PropertyInfo,
	NULL
};
extern MethodInfo m10745_MI;
extern MethodInfo m10744_MI;
extern MethodInfo m4243_MI;
extern MethodInfo m1098_MI;
extern MethodInfo m4498_MI;
extern MethodInfo m4441_MI;
extern MethodInfo m4442_MI;
static Il2CppMethodReference t2033_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m10745_MI,
	&m10744_MI,
	&m4243_MI,
	&m1098_MI,
	&m4498_MI,
	&m4441_MI,
	&m10744_MI,
	&m4442_MI,
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
	false,
	false,
	false,
};
extern Il2CppType t948_0_0_0;
static Il2CppInterfaceOffsetPair t2033_IOs[] = 
{
	{ &t623_0_0_0, 4},
	{ &t948_0_0_0, 5},
};
void t2033_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t2033_CustomAttributesCacheGenerator_t2033____Demanded_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2033__CustomAttributeCache = {
1,
NULL,
&t2033_CustomAttributesCacheGenerator
};
CustomAttributesCache t2033__CustomAttributeCache_t2033____Demanded_PropertyInfo = {
1,
NULL,
&t2033_CustomAttributesCacheGenerator_t2033____Demanded_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2033_0_0_0;
extern Il2CppType t2033_1_0_0;
extern Il2CppType t1369_0_0_0;
struct t2033;
extern CustomAttributesCache t2033__CustomAttributeCache;
extern CustomAttributesCache t2033__CustomAttributeCache_t2033____Demanded_PropertyInfo;
const Il2CppTypeDefinitionMetadata t2033_DM = 
{
	NULL, NULL, NULL, t2033_IOs, &t1369_0_0_0, t2033_VT, t2033_VTIGM, NULL};
TypeInfo t2033_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityException", "System.Security", t2033_MIs, t2033_PIs, t2033_FIs, NULL, &t2033_TI, NULL, &t2033__CustomAttributeCache, &t2033_0_0_0, &t2033_1_0_0, &t2033_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2033), sizeof (t2033), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 11, 6, 8, 0, 0, 11, 0, 2};
#include "t2034.h"
// Metadata Definition System.Security.RuntimeDeclSecurityEntry
extern TypeInfo t2034_TI;
#include "t2034MD.h"
static MethodInfo* t2034_MIs[] =
{
	NULL
};
extern Il2CppType t58_0_0_6;
FieldInfo t2034_f0_FieldInfo = 
{
	"blob", &t58_0_0_6, &t2034_TI, offsetof(t2034, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t2034_f1_FieldInfo = 
{
	"size", &t125_0_0_6, &t2034_TI, offsetof(t2034, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t2034_f2_FieldInfo = 
{
	"index", &t125_0_0_6, &t2034_TI, offsetof(t2034, f2) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t2034_FIs[] =
{
	&t2034_f0_FieldInfo,
	&t2034_f1_FieldInfo,
	&t2034_f2_FieldInfo,
	NULL
};
static Il2CppMethodReference t2034_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t2034_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2034_0_0_0;
extern Il2CppType t2034_1_0_0;
const Il2CppTypeDefinitionMetadata t2034_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t2034_VT, t2034_VTIGM, NULL};
TypeInfo t2034_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RuntimeDeclSecurityEntry", "System.Security", t2034_MIs, NULL, t2034_FIs, NULL, &t2034_TI, NULL, &EmptyCustomAttributesCache, &t2034_0_0_0, &t2034_1_0_0, &t2034_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2034)+ sizeof (Il2CppObject), sizeof (t2034)+ sizeof (Il2CppObject), 0, sizeof(t2034 ), 0, 0, -1, 1048840, 0, 0, true, false, false, false, false, false, false, false, false, true, 0, 0, 3, 0, 0, 4, 0, 0};
#include "t2035.h"
// Metadata Definition System.Security.RuntimeSecurityFrame
extern TypeInfo t2035_TI;
#include "t2035MD.h"
static MethodInfo* t2035_MIs[] =
{
	NULL
};
extern Il2CppType t2036_0_0_6;
FieldInfo t2035_f0_FieldInfo = 
{
	"domain", &t2036_0_0_6, &t2035_TI, offsetof(t2035, f0), &EmptyCustomAttributesCache};
extern Il2CppType t828_0_0_6;
FieldInfo t2035_f1_FieldInfo = 
{
	"method", &t828_0_0_6, &t2035_TI, offsetof(t2035, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2034_0_0_6;
FieldInfo t2035_f2_FieldInfo = 
{
	"assert", &t2034_0_0_6, &t2035_TI, offsetof(t2035, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2034_0_0_6;
FieldInfo t2035_f3_FieldInfo = 
{
	"deny", &t2034_0_0_6, &t2035_TI, offsetof(t2035, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2034_0_0_6;
FieldInfo t2035_f4_FieldInfo = 
{
	"permitonly", &t2034_0_0_6, &t2035_TI, offsetof(t2035, f4), &EmptyCustomAttributesCache};
static FieldInfo* t2035_FIs[] =
{
	&t2035_f0_FieldInfo,
	&t2035_f1_FieldInfo,
	&t2035_f2_FieldInfo,
	&t2035_f3_FieldInfo,
	&t2035_f4_FieldInfo,
	NULL
};
static Il2CppMethodReference t2035_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2035_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2035_0_0_0;
extern Il2CppType t2035_1_0_0;
struct t2035;
const Il2CppTypeDefinitionMetadata t2035_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2035_VT, t2035_VTIGM, NULL};
TypeInfo t2035_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RuntimeSecurityFrame", "System.Security", t2035_MIs, NULL, t2035_FIs, NULL, &t2035_TI, NULL, &EmptyCustomAttributesCache, &t2035_0_0_0, &t2035_1_0_0, &t2035_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2035), sizeof (t2035), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 4, 0, 0};
#include "t2037.h"
// Metadata Definition System.Security.SecurityFrame
extern TypeInfo t2037_TI;
#include "t2037MD.h"
extern Il2CppType t2035_0_0_0;
static ParameterInfo t2037_m10746_ParameterInfos[] = 
{
	{"frame", 0, 134223501, &EmptyCustomAttributesCache, &t2035_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10746_MI = 
{
	".ctor", (methodPointerType)&m10746, &t2037_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2037_m10746_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 4813, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2037_m10747_ParameterInfos[] = 
{
	{"skip", 0, 134223502, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t121_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10747_MI = 
{
	"_GetSecurityStack", (methodPointerType)&m10747, &t2037_TI, &t121_0_0_0, RuntimeInvoker_t9_t125, t2037_m10747_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 4814, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2035_0_0_0;
static ParameterInfo t2037_m10748_ParameterInfos[] = 
{
	{"frame", 0, 134223503, &EmptyCustomAttributesCache, &t2035_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10748_MI = 
{
	"InitFromRuntimeFrame", (methodPointerType)&m10748, &t2037_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2037_m10748_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4815, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1345_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10749_MI = 
{
	"get_Assembly", (methodPointerType)&m10749, &t2037_TI, &t1345_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4816, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2036_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10750_MI = 
{
	"get_Domain", (methodPointerType)&m10750, &t2037_TI, &t2036_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4817, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10751_MI = 
{
	"ToString", (methodPointerType)&m10751, &t2037_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4818, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2037_m10752_ParameterInfos[] = 
{
	{"skipFrames", 0, 134223504, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t1170_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10752_MI = 
{
	"GetStack", (methodPointerType)&m10752, &t2037_TI, &t1170_0_0_0, RuntimeInvoker_t9_t125, t2037_m10752_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4819, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2037_MIs[] =
{
	&m10746_MI,
	&m10747_MI,
	&m10748_MI,
	&m10749_MI,
	&m10750_MI,
	&m10751_MI,
	&m10752_MI,
	NULL
};
extern Il2CppType t2036_0_0_1;
FieldInfo t2037_f0_FieldInfo = 
{
	"_domain", &t2036_0_0_1, &t2037_TI, offsetof(t2037, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t828_0_0_1;
FieldInfo t2037_f1_FieldInfo = 
{
	"_method", &t828_0_0_1, &t2037_TI, offsetof(t2037, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1801_0_0_1;
FieldInfo t2037_f2_FieldInfo = 
{
	"_assert", &t1801_0_0_1, &t2037_TI, offsetof(t2037, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1801_0_0_1;
FieldInfo t2037_f3_FieldInfo = 
{
	"_deny", &t1801_0_0_1, &t2037_TI, offsetof(t2037, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1801_0_0_1;
FieldInfo t2037_f4_FieldInfo = 
{
	"_permitonly", &t1801_0_0_1, &t2037_TI, offsetof(t2037, f4) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t2037_FIs[] =
{
	&t2037_f0_FieldInfo,
	&t2037_f1_FieldInfo,
	&t2037_f2_FieldInfo,
	&t2037_f3_FieldInfo,
	&t2037_f4_FieldInfo,
	NULL
};
extern MethodInfo m10749_MI;
static PropertyInfo t2037____Assembly_PropertyInfo = 
{
	&t2037_TI, "Assembly", &m10749_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10750_MI;
static PropertyInfo t2037____Domain_PropertyInfo = 
{
	&t2037_TI, "Domain", &m10750_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2037_PIs[] =
{
	&t2037____Assembly_PropertyInfo,
	&t2037____Domain_PropertyInfo,
	NULL
};
extern MethodInfo m10751_MI;
static Il2CppMethodReference t2037_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m10751_MI,
};
static bool t2037_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2037_0_0_0;
extern Il2CppType t2037_1_0_0;
const Il2CppTypeDefinitionMetadata t2037_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t2037_VT, t2037_VTIGM, NULL};
TypeInfo t2037_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityFrame", "System.Security", t2037_MIs, t2037_PIs, t2037_FIs, NULL, &t2037_TI, NULL, &EmptyCustomAttributesCache, &t2037_0_0_0, &t2037_1_0_0, &t2037_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2037)+ sizeof (Il2CppObject), sizeof (t2037)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048840, 0, 0, true, false, false, false, false, false, false, false, false, false, 7, 2, 5, 0, 0, 4, 0, 0};
#include "t2038.h"
// Metadata Definition System.Security.SecurityManager
extern TypeInfo t2038_TI;
#include "t2038MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10753_MI = 
{
	".cctor", (methodPointerType)&m10753, &t2038_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4820, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10754_MI = 
{
	"get_SecurityEnabled", (methodPointerType)&m10754, &t2038_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 4821, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2038_m10755_ParameterInfos[] = 
{
	{"permissions", 0, 134223505, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"length", 1, 134223506, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t1801_0_0_0;
extern void* RuntimeInvoker_t9_t58_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10755_MI = 
{
	"Decode", (methodPointerType)&m10755, &t2038_TI, &t1801_0_0_0, RuntimeInvoker_t9_t58_t125, t2038_m10755_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4822, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t2038_m10756_ParameterInfos[] = 
{
	{"encodedPermissions", 0, 134223507, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t1801_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10756_MI = 
{
	"Decode", (methodPointerType)&m10756, &t2038_TI, &t1801_0_0_0, RuntimeInvoker_t9_t9, t2038_m10756_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 4823, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2038_MIs[] =
{
	&m10753_MI,
	&m10754_MI,
	&m10755_MI,
	&m10756_MI,
	NULL
};
extern Il2CppType t9_0_0_17;
FieldInfo t2038_f0_FieldInfo = 
{
	"_lockObject", &t9_0_0_17, &t2038_TI, offsetof(t2038_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_17;
FieldInfo t2038_f1_FieldInfo = 
{
	"_declsecCache", &t1158_0_0_17, &t2038_TI, offsetof(t2038_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2017_0_0_17;
FieldInfo t2038_f2_FieldInfo = 
{
	"_execution", &t2017_0_0_17, &t2038_TI, offsetof(t2038_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2038_FIs[] =
{
	&t2038_f0_FieldInfo,
	&t2038_f1_FieldInfo,
	&t2038_f2_FieldInfo,
	NULL
};
extern MethodInfo m10754_MI;
extern CustomAttributesCache t2038__CustomAttributeCache_t2038____SecurityEnabled_PropertyInfo;
static PropertyInfo t2038____SecurityEnabled_PropertyInfo = 
{
	&t2038_TI, "SecurityEnabled", &m10754_MI, NULL, 0, &t2038__CustomAttributeCache_t2038____SecurityEnabled_PropertyInfo};
static PropertyInfo* t2038_PIs[] =
{
	&t2038____SecurityEnabled_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2038_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2038_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t2038_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t2038_CustomAttributesCacheGenerator_t2038____SecurityEnabled_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m2994(tmp, il2cpp_codegen_string_new_wrapper("The security manager cannot be turned off on MS runtime"), &m2994_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2038__CustomAttributeCache = {
1,
NULL,
&t2038_CustomAttributesCacheGenerator
};
CustomAttributesCache t2038__CustomAttributeCache_t2038____SecurityEnabled_PropertyInfo = {
1,
NULL,
&t2038_CustomAttributesCacheGenerator_t2038____SecurityEnabled_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2038_0_0_0;
extern Il2CppType t2038_1_0_0;
struct t2038;
extern CustomAttributesCache t2038__CustomAttributeCache;
extern CustomAttributesCache t2038__CustomAttributeCache_t2038____SecurityEnabled_PropertyInfo;
const Il2CppTypeDefinitionMetadata t2038_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2038_VT, t2038_VTIGM, NULL};
TypeInfo t2038_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityManager", "System.Security", t2038_MIs, t2038_PIs, t2038_FIs, NULL, &t2038_TI, NULL, &t2038__CustomAttributeCache, &t2038_0_0_0, &t2038_1_0_0, &t2038_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2038), sizeof (t2038), 0, -1, sizeof(t2038_SFs), 0, -1, 385, 0, 0, false, false, false, false, false, false, false, false, true, false, 4, 1, 3, 0, 0, 4, 0, 0};
#include "t973.h"
// Metadata Definition System.Security.SecuritySafeCriticalAttribute
extern TypeInfo t973_TI;
#include "t973MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m4516_MI = 
{
	".ctor", (methodPointerType)&m4516, &t973_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4824, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t973_MIs[] =
{
	&m4516_MI,
	NULL
};
static Il2CppMethodReference t973_VT[] =
{
	&m4499_MI,
	&m646_MI,
	&m4493_MI,
	&m673_MI,
};
static bool t973_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t973_IOs[] = 
{
	{ &t954_0_0_0, 4},
};
void t973_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7849(tmp, il2cpp_codegen_string_new_wrapper("Only supported by the runtime when CoreCLR is enabled"), &m7849_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1024 * tmp;
		tmp = (t1024 *)il2cpp_codegen_object_new (&t1024_TI);
		m4605(tmp, 32767, &m4605_MI);
		m4607(tmp, false, &m4607_MI);
		m4606(tmp, false, &m4606_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t973__CustomAttributeCache = {
2,
NULL,
&t973_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t973_0_0_0;
extern Il2CppType t973_1_0_0;
struct t973;
extern CustomAttributesCache t973__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t973_DM = 
{
	NULL, NULL, NULL, t973_IOs, &t725_0_0_0, t973_VT, t973_VTIGM, NULL};
TypeInfo t973_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecuritySafeCriticalAttribute", "System.Security", t973_MIs, NULL, NULL, NULL, &t973_TI, NULL, &t973__CustomAttributeCache, &t973_0_0_0, &t973_1_0_0, &t973_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t973), sizeof (t973), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t2039.h"
// Metadata Definition System.Security.SuppressUnmanagedCodeSecurityAttribute
extern TypeInfo t2039_TI;
#include "t2039MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10757_MI = 
{
	".ctor", (methodPointerType)&m10757, &t2039_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4825, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2039_MIs[] =
{
	&m10757_MI,
	NULL
};
static Il2CppMethodReference t2039_VT[] =
{
	&m4499_MI,
	&m646_MI,
	&m4493_MI,
	&m673_MI,
};
static bool t2039_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2039_IOs[] = 
{
	{ &t954_0_0_0, 4},
};
void t2039_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1024 * tmp;
		tmp = (t1024 *)il2cpp_codegen_object_new (&t1024_TI);
		m4605(tmp, 5188, &m4605_MI);
		m4607(tmp, true, &m4607_MI);
		m4606(tmp, false, &m4606_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2039__CustomAttributeCache = {
2,
NULL,
&t2039_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2039_0_0_0;
extern Il2CppType t2039_1_0_0;
struct t2039;
extern CustomAttributesCache t2039__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2039_DM = 
{
	NULL, NULL, NULL, t2039_IOs, &t725_0_0_0, t2039_VT, t2039_VTIGM, NULL};
TypeInfo t2039_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SuppressUnmanagedCodeSecurityAttribute", "System.Security", t2039_MIs, NULL, NULL, NULL, &t2039_TI, NULL, &t2039__CustomAttributeCache, &t2039_0_0_0, &t2039_1_0_0, &t2039_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2039), sizeof (t2039), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t2040.h"
// Metadata Definition System.Security.UnverifiableCodeAttribute
extern TypeInfo t2040_TI;
#include "t2040MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10758_MI = 
{
	".ctor", (methodPointerType)&m10758, &t2040_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4826, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2040_MIs[] =
{
	&m10758_MI,
	NULL
};
static Il2CppMethodReference t2040_VT[] =
{
	&m4499_MI,
	&m646_MI,
	&m4493_MI,
	&m673_MI,
};
static bool t2040_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2040_IOs[] = 
{
	{ &t954_0_0_0, 4},
};
void t2040_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1024 * tmp;
		tmp = (t1024 *)il2cpp_codegen_object_new (&t1024_TI);
		m4605(tmp, 2, &m4605_MI);
		m4607(tmp, true, &m4607_MI);
		m4606(tmp, false, &m4606_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2040__CustomAttributeCache = {
2,
NULL,
&t2040_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2040_0_0_0;
extern Il2CppType t2040_1_0_0;
struct t2040;
extern CustomAttributesCache t2040__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2040_DM = 
{
	NULL, NULL, NULL, t2040_IOs, &t725_0_0_0, t2040_VT, t2040_VTIGM, NULL};
TypeInfo t2040_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UnverifiableCodeAttribute", "System.Security", t2040_MIs, NULL, NULL, NULL, &t2040_TI, NULL, &t2040__CustomAttributeCache, &t2040_0_0_0, &t2040_1_0_0, &t2040_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2040), sizeof (t2040), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t2041.h"
// Metadata Definition System.Text.ASCIIEncoding
extern TypeInfo t2041_TI;
#include "t2041MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10759_MI = 
{
	".ctor", (methodPointerType)&m10759, &t2041_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4827, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2041_m10760_ParameterInfos[] = 
{
	{"chars", 0, 134223508, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"index", 1, 134223509, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223510, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10760_MI = 
{
	"GetByteCount", (methodPointerType)&m10760, &t2041_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t2041_m10760_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 3, false, false, 4828, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2041_m10761_ParameterInfos[] = 
{
	{"chars", 0, 134223511, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10761_MI = 
{
	"GetByteCount", (methodPointerType)&m10761, &t2041_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t2041_m10761_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4829, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2041_m10762_ParameterInfos[] = 
{
	{"chars", 0, 134223512, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"charIndex", 1, 134223513, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223514, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223515, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 4, 134223516, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10762_MI = 
{
	"GetBytes", (methodPointerType)&m10762, &t2041_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2041_m10762_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 5, false, false, 4830, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2042_1_0_0;
extern Il2CppType t2042_1_0_0;
extern Il2CppType t312_1_0_0;
extern Il2CppType t312_1_0_0;
static ParameterInfo t2041_m10763_ParameterInfos[] = 
{
	{"chars", 0, 134223517, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"charIndex", 1, 134223518, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223519, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223520, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 4, 134223521, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"buffer", 5, 134223522, &EmptyCustomAttributesCache, &t2042_1_0_0},
	{"fallback_chars", 6, 134223523, &EmptyCustomAttributesCache, &t312_1_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2643_t2644 (MethodInfo* method, void* obj, void** args);
MethodInfo m10763_MI = 
{
	"GetBytes", (methodPointerType)&m10763, &t2041_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2643_t2644, t2041_m10763_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4831, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2041_m10764_ParameterInfos[] = 
{
	{"chars", 0, 134223524, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"charIndex", 1, 134223525, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223526, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223527, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 4, 134223528, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10764_MI = 
{
	"GetBytes", (methodPointerType)&m10764, &t2041_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2041_m10764_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 5, false, false, 4832, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2042_1_0_0;
extern Il2CppType t312_1_0_0;
static ParameterInfo t2041_m10765_ParameterInfos[] = 
{
	{"chars", 0, 134223529, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"charIndex", 1, 134223530, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223531, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223532, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 4, 134223533, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"buffer", 5, 134223534, &EmptyCustomAttributesCache, &t2042_1_0_0},
	{"fallback_chars", 6, 134223535, &EmptyCustomAttributesCache, &t312_1_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2643_t2644 (MethodInfo* method, void* obj, void** args);
MethodInfo m10765_MI = 
{
	"GetBytes", (methodPointerType)&m10765, &t2041_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2643_t2644, t2041_m10765_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4833, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2041_m10766_ParameterInfos[] = 
{
	{"bytes", 0, 134223536, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"index", 1, 134223537, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223538, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10766_MI = 
{
	"GetCharCount", (methodPointerType)&m10766, &t2041_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t2041_m10766_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 3, false, false, 4834, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2041_m10767_ParameterInfos[] = 
{
	{"bytes", 0, 134223539, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 1, 134223540, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223541, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223542, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"charIndex", 4, 134223543, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10767_MI = 
{
	"GetChars", (methodPointerType)&m10767, &t2041_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2041_m10767_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 5, false, false, 4835, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2043_1_0_0;
extern Il2CppType t2043_1_0_0;
static ParameterInfo t2041_m10768_ParameterInfos[] = 
{
	{"bytes", 0, 134223544, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 1, 134223545, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223546, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223547, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"charIndex", 4, 134223548, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"buffer", 5, 134223549, &EmptyCustomAttributesCache, &t2043_1_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2645 (MethodInfo* method, void* obj, void** args);
MethodInfo m10768_MI = 
{
	"GetChars", (methodPointerType)&m10768, &t2041_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2645, t2041_m10768_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 4836, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2041_m10769_ParameterInfos[] = 
{
	{"charCount", 0, 134223550, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10769_MI = 
{
	"GetMaxByteCount", (methodPointerType)&m10769, &t2041_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t2041_m10769_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 1, false, false, 4837, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2041_m10770_ParameterInfos[] = 
{
	{"byteCount", 0, 134223551, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10770_MI = 
{
	"GetMaxCharCount", (methodPointerType)&m10770, &t2041_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t2041_m10770_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 4838, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2041_m10771_ParameterInfos[] = 
{
	{"bytes", 0, 134223552, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 1, 134223553, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223554, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10771_MI = 
{
	"GetString", (methodPointerType)&m10771, &t2041_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t2041_m10771_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 19, 3, false, false, 4839, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2238_0_0_0;
extern Il2CppType t2238_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1553_0_0_0;
extern Il2CppType t1553_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2041_m10772_ParameterInfos[] = 
{
	{"chars", 0, 134223555, &EmptyCustomAttributesCache, &t2238_0_0_0},
	{"charCount", 1, 134223556, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 2, 134223557, &EmptyCustomAttributesCache, &t1553_0_0_0},
	{"byteCount", 3, 134223558, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2041__CustomAttributeCache_m10772;
MethodInfo m10772_MI = 
{
	"GetBytes", (methodPointerType)&m10772, &t2041_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t9_t125, t2041_m10772_ParameterInfos, &t2041__CustomAttributeCache_m10772, 198, 0, 24, 4, false, false, 4840, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2238_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2041_m10773_ParameterInfos[] = 
{
	{"chars", 0, 134223559, &EmptyCustomAttributesCache, &t2238_0_0_0},
	{"count", 1, 134223560, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2041__CustomAttributeCache_m10773;
MethodInfo m10773_MI = 
{
	"GetByteCount", (methodPointerType)&m10773, &t2041_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125, t2041_m10773_ParameterInfos, &t2041__CustomAttributeCache_m10773, 198, 0, 23, 2, false, false, 4841, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1713_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2041__CustomAttributeCache_m10774;
MethodInfo m10774_MI = 
{
	"GetDecoder", (methodPointerType)&m10774, &t2041_TI, &t1713_0_0_0, RuntimeInvoker_t9, NULL, &t2041__CustomAttributeCache_m10774, 198, 0, 15, 0, false, false, 4842, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2041_MIs[] =
{
	&m10759_MI,
	&m10760_MI,
	&m10761_MI,
	&m10762_MI,
	&m10763_MI,
	&m10764_MI,
	&m10765_MI,
	&m10766_MI,
	&m10767_MI,
	&m10768_MI,
	&m10769_MI,
	&m10770_MI,
	&m10771_MI,
	&m10772_MI,
	&m10773_MI,
	&m10774_MI,
	NULL
};
extern MethodInfo m10849_MI;
extern MethodInfo m10857_MI;
extern MethodInfo m10760_MI;
extern MethodInfo m10761_MI;
extern MethodInfo m10851_MI;
extern MethodInfo m10762_MI;
extern MethodInfo m10764_MI;
extern MethodInfo m4288_MI;
extern MethodInfo m10852_MI;
extern MethodInfo m5985_MI;
extern MethodInfo m10766_MI;
extern MethodInfo m10767_MI;
extern MethodInfo m10853_MI;
extern MethodInfo m10774_MI;
extern MethodInfo m10769_MI;
extern MethodInfo m10770_MI;
extern MethodInfo m10858_MI;
extern MethodInfo m10771_MI;
extern MethodInfo m5828_MI;
extern MethodInfo m4292_MI;
extern MethodInfo m4299_MI;
extern MethodInfo m10773_MI;
extern MethodInfo m10772_MI;
static Il2CppMethodReference t2041_VT[] =
{
	&m10849_MI,
	&m646_MI,
	&m10857_MI,
	&m673_MI,
	&m10760_MI,
	&m10761_MI,
	&m10851_MI,
	&m10762_MI,
	&m10764_MI,
	&m4288_MI,
	&m10852_MI,
	&m5985_MI,
	&m10766_MI,
	&m10767_MI,
	&m10853_MI,
	&m10774_MI,
	&m10769_MI,
	&m10770_MI,
	&m10858_MI,
	&m10771_MI,
	&m5828_MI,
	&m4292_MI,
	&m4299_MI,
	&m10773_MI,
	&m10772_MI,
};
static bool t2041_VTIGM[] =
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
extern Il2CppType t622_0_0_0;
static Il2CppInterfaceOffsetPair t2041_IOs[] = 
{
	{ &t622_0_0_0, 4},
};
void t2041_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7849(tmp, il2cpp_codegen_string_new_wrapper("Serialization format not compatible with .NET"), &m7849_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1152_TI;
#include "t1152.h"
#include "t1152MD.h"
extern MethodInfo m4801_MI;
void t2041_CustomAttributesCacheGenerator_m10772(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1152 * tmp;
		tmp = (t1152 *)il2cpp_codegen_object_new (&t1152_TI);
		m4801(tmp, false, &m4801_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t2041_CustomAttributesCacheGenerator_m10773(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1152 * tmp;
		tmp = (t1152 *)il2cpp_codegen_object_new (&t1152_TI);
		m4801(tmp, false, &m4801_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t2041_CustomAttributesCacheGenerator_m10774(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7849(tmp, il2cpp_codegen_string_new_wrapper("we have simple override to match method signature."), &m7849_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2041__CustomAttributeCache = {
2,
NULL,
&t2041_CustomAttributesCacheGenerator
};
CustomAttributesCache t2041__CustomAttributeCache_m10772 = {
2,
NULL,
&t2041_CustomAttributesCacheGenerator_m10772
};
CustomAttributesCache t2041__CustomAttributeCache_m10773 = {
2,
NULL,
&t2041_CustomAttributesCacheGenerator_m10773
};
CustomAttributesCache t2041__CustomAttributeCache_m10774 = {
2,
NULL,
&t2041_CustomAttributesCacheGenerator_m10774
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2041_0_0_0;
extern Il2CppType t2041_1_0_0;
extern Il2CppType t729_0_0_0;
struct t2041;
extern CustomAttributesCache t2041__CustomAttributeCache;
extern CustomAttributesCache t2041__CustomAttributeCache_m10772;
extern CustomAttributesCache t2041__CustomAttributeCache_m10773;
extern CustomAttributesCache t2041__CustomAttributeCache_m10774;
const Il2CppTypeDefinitionMetadata t2041_DM = 
{
	NULL, NULL, NULL, t2041_IOs, &t729_0_0_0, t2041_VT, t2041_VTIGM, NULL};
TypeInfo t2041_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ASCIIEncoding", "System.Text", t2041_MIs, NULL, NULL, NULL, &t2041_TI, NULL, &t2041__CustomAttributeCache, &t2041_0_0_0, &t2041_1_0_0, &t2041_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2041), sizeof (t2041), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 16, 0, 0, 0, 0, 25, 0, 1};
#include "t1713.h"
// Metadata Definition System.Text.Decoder
extern TypeInfo t1713_TI;
#include "t1713MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10775_MI = 
{
	".ctor", (methodPointerType)&m10775, &t1713_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4843, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2044_0_0_0;
extern Il2CppType t2044_0_0_0;
static ParameterInfo t1713_m10776_ParameterInfos[] = 
{
	{"value", 0, 134223561, &EmptyCustomAttributesCache, &t2044_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10776_MI = 
{
	"set_Fallback", (methodPointerType)&m10776, &t1713_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1713_m10776_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4844, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2043_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10777_MI = 
{
	"get_FallbackBuffer", (methodPointerType)&m10777, &t1713_TI, &t2043_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4845, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1713_m12006_ParameterInfos[] = 
{
	{"bytes", 0, 134223562, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 1, 134223563, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223564, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223565, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"charIndex", 4, 134223566, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12006_MI = 
{
	"GetChars", NULL, &t1713_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t1713_m12006_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 5, false, false, 4846, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1713_MIs[] =
{
	&m10775_MI,
	&m10776_MI,
	&m10777_MI,
	&m12006_MI,
	NULL
};
extern Il2CppType t2044_0_0_1;
FieldInfo t1713_f0_FieldInfo = 
{
	"fallback", &t2044_0_0_1, &t1713_TI, offsetof(t1713, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2043_0_0_1;
FieldInfo t1713_f1_FieldInfo = 
{
	"fallback_buffer", &t2043_0_0_1, &t1713_TI, offsetof(t1713, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1713_FIs[] =
{
	&t1713_f0_FieldInfo,
	&t1713_f1_FieldInfo,
	NULL
};
extern MethodInfo m10776_MI;
extern CustomAttributesCache t1713__CustomAttributeCache_t1713____Fallback_PropertyInfo;
static PropertyInfo t1713____Fallback_PropertyInfo = 
{
	&t1713_TI, "Fallback", NULL, &m10776_MI, 0, &t1713__CustomAttributeCache_t1713____Fallback_PropertyInfo};
extern MethodInfo m10777_MI;
extern CustomAttributesCache t1713__CustomAttributeCache_t1713____FallbackBuffer_PropertyInfo;
static PropertyInfo t1713____FallbackBuffer_PropertyInfo = 
{
	&t1713_TI, "FallbackBuffer", &m10777_MI, NULL, 0, &t1713__CustomAttributeCache_t1713____FallbackBuffer_PropertyInfo};
static PropertyInfo* t1713_PIs[] =
{
	&t1713____Fallback_PropertyInfo,
	&t1713____FallbackBuffer_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1713_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t1713_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
void t1713_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1713_CustomAttributesCacheGenerator_t1713____Fallback_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1713_CustomAttributesCacheGenerator_t1713____FallbackBuffer_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1713__CustomAttributeCache = {
1,
NULL,
&t1713_CustomAttributesCacheGenerator
};
CustomAttributesCache t1713__CustomAttributeCache_t1713____Fallback_PropertyInfo = {
1,
NULL,
&t1713_CustomAttributesCacheGenerator_t1713____Fallback_PropertyInfo
};
CustomAttributesCache t1713__CustomAttributeCache_t1713____FallbackBuffer_PropertyInfo = {
1,
NULL,
&t1713_CustomAttributesCacheGenerator_t1713____FallbackBuffer_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1713_0_0_0;
extern Il2CppType t1713_1_0_0;
struct t1713;
extern CustomAttributesCache t1713__CustomAttributeCache;
extern CustomAttributesCache t1713__CustomAttributeCache_t1713____Fallback_PropertyInfo;
extern CustomAttributesCache t1713__CustomAttributeCache_t1713____FallbackBuffer_PropertyInfo;
const Il2CppTypeDefinitionMetadata t1713_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1713_VT, t1713_VTIGM, NULL};
TypeInfo t1713_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Decoder", "System.Text", t1713_MIs, t1713_PIs, t1713_FIs, NULL, &t1713_TI, NULL, &t1713__CustomAttributeCache, &t1713_0_0_0, &t1713_1_0_0, &t1713_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1713), sizeof (t1713), 0, -1, 0, 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 2, 2, 0, 0, 5, 0, 0};
#include "t2045.h"
// Metadata Definition System.Text.DecoderExceptionFallback
extern TypeInfo t2045_TI;
#include "t2045MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10778_MI = 
{
	".ctor", (methodPointerType)&m10778, &t2045_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4847, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2043_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10779_MI = 
{
	"CreateFallbackBuffer", (methodPointerType)&m10779, &t2045_TI, &t2043_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 4, 0, false, false, 4848, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2045_m10780_ParameterInfos[] = 
{
	{"value", 0, 134223567, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10780_MI = 
{
	"Equals", (methodPointerType)&m10780, &t2045_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2045_m10780_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4849, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10781_MI = 
{
	"GetHashCode", (methodPointerType)&m10781, &t2045_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4850, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2045_MIs[] =
{
	&m10778_MI,
	&m10779_MI,
	&m10780_MI,
	&m10781_MI,
	NULL
};
extern MethodInfo m10780_MI;
extern MethodInfo m10781_MI;
extern MethodInfo m10779_MI;
static Il2CppMethodReference t2045_VT[] =
{
	&m10780_MI,
	&m646_MI,
	&m10781_MI,
	&m673_MI,
	&m10779_MI,
};
static bool t2045_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2045_0_0_0;
extern Il2CppType t2045_1_0_0;
struct t2045;
const Il2CppTypeDefinitionMetadata t2045_DM = 
{
	NULL, NULL, NULL, NULL, &t2044_0_0_0, t2045_VT, t2045_VTIGM, NULL};
TypeInfo t2045_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderExceptionFallback", "System.Text", t2045_MIs, NULL, NULL, NULL, &t2045_TI, NULL, &EmptyCustomAttributesCache, &t2045_0_0_0, &t2045_1_0_0, &t2045_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2045), sizeof (t2045), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 5, 0, 0};
#include "t2046.h"
// Metadata Definition System.Text.DecoderExceptionFallbackBuffer
extern TypeInfo t2046_TI;
#include "t2046MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10782_MI = 
{
	".ctor", (methodPointerType)&m10782, &t2046_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4851, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10783_MI = 
{
	"get_Remaining", (methodPointerType)&m10783, &t2046_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 4852, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2046_m10784_ParameterInfos[] = 
{
	{"bytesUnknown", 0, 134223568, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"index", 1, 134223569, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10784_MI = 
{
	"Fallback", (methodPointerType)&m10784, &t2046_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t125, t2046_m10784_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 4853, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10785_MI = 
{
	"GetNextChar", (methodPointerType)&m10785, &t2046_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 4854, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2046_MIs[] =
{
	&m10782_MI,
	&m10783_MI,
	&m10784_MI,
	&m10785_MI,
	NULL
};
extern MethodInfo m10783_MI;
static PropertyInfo t2046____Remaining_PropertyInfo = 
{
	&t2046_TI, "Remaining", &m10783_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2046_PIs[] =
{
	&t2046____Remaining_PropertyInfo,
	NULL
};
extern MethodInfo m10784_MI;
extern MethodInfo m10785_MI;
extern MethodInfo m10792_MI;
static Il2CppMethodReference t2046_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10783_MI,
	&m10784_MI,
	&m10785_MI,
	&m10792_MI,
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
extern Il2CppType t2043_0_0_0;
struct t2046;
const Il2CppTypeDefinitionMetadata t2046_DM = 
{
	NULL, NULL, NULL, NULL, &t2043_0_0_0, t2046_VT, t2046_VTIGM, NULL};
TypeInfo t2046_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderExceptionFallbackBuffer", "System.Text", t2046_MIs, t2046_PIs, NULL, NULL, &t2046_TI, NULL, &EmptyCustomAttributesCache, &t2046_0_0_0, &t2046_1_0_0, &t2046_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2046), sizeof (t2046), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 1, 0, 0, 0, 8, 0, 0};
#include "t2044.h"
// Metadata Definition System.Text.DecoderFallback
extern TypeInfo t2044_TI;
#include "t2044MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10786_MI = 
{
	".ctor", (methodPointerType)&m10786, &t2044_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4855, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10787_MI = 
{
	".cctor", (methodPointerType)&m10787, &t2044_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4856, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2044_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10788_MI = 
{
	"get_ExceptionFallback", (methodPointerType)&m10788, &t2044_TI, &t2044_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4857, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2044_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10789_MI = 
{
	"get_ReplacementFallback", (methodPointerType)&m10789, &t2044_TI, &t2044_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4858, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2044_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10790_MI = 
{
	"get_StandardSafeFallback", (methodPointerType)&m10790, &t2044_TI, &t2044_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 4859, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2043_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12113_MI = 
{
	"CreateFallbackBuffer", NULL, &t2044_TI, &t2043_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 1478, 0, 4, 0, false, false, 4860, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2044_MIs[] =
{
	&m10786_MI,
	&m10787_MI,
	&m10788_MI,
	&m10789_MI,
	&m10790_MI,
	&m12113_MI,
	NULL
};
extern Il2CppType t2044_0_0_17;
FieldInfo t2044_f0_FieldInfo = 
{
	"exception_fallback", &t2044_0_0_17, &t2044_TI, offsetof(t2044_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2044_0_0_17;
FieldInfo t2044_f1_FieldInfo = 
{
	"replacement_fallback", &t2044_0_0_17, &t2044_TI, offsetof(t2044_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2044_0_0_17;
FieldInfo t2044_f2_FieldInfo = 
{
	"standard_safe_fallback", &t2044_0_0_17, &t2044_TI, offsetof(t2044_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2044_FIs[] =
{
	&t2044_f0_FieldInfo,
	&t2044_f1_FieldInfo,
	&t2044_f2_FieldInfo,
	NULL
};
extern MethodInfo m10788_MI;
static PropertyInfo t2044____ExceptionFallback_PropertyInfo = 
{
	&t2044_TI, "ExceptionFallback", &m10788_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10789_MI;
static PropertyInfo t2044____ReplacementFallback_PropertyInfo = 
{
	&t2044_TI, "ReplacementFallback", &m10789_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10790_MI;
static PropertyInfo t2044____StandardSafeFallback_PropertyInfo = 
{
	&t2044_TI, "StandardSafeFallback", &m10790_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2044_PIs[] =
{
	&t2044____ExceptionFallback_PropertyInfo,
	&t2044____ReplacementFallback_PropertyInfo,
	&t2044____StandardSafeFallback_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2044_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t2044_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2044_1_0_0;
struct t2044;
const Il2CppTypeDefinitionMetadata t2044_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2044_VT, t2044_VTIGM, NULL};
TypeInfo t2044_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderFallback", "System.Text", t2044_MIs, t2044_PIs, t2044_FIs, NULL, &t2044_TI, NULL, &EmptyCustomAttributesCache, &t2044_0_0_0, &t2044_1_0_0, &t2044_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2044), sizeof (t2044), 0, -1, sizeof(t2044_SFs), 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, true, false, 6, 3, 3, 0, 0, 5, 0, 0};
#include "t2043.h"
// Metadata Definition System.Text.DecoderFallbackBuffer
extern TypeInfo t2043_TI;
#include "t2043MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10791_MI = 
{
	".ctor", (methodPointerType)&m10791, &t2043_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4861, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12116_MI = 
{
	"get_Remaining", NULL, &t2043_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 4, 0, false, false, 4862, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2043_m12114_ParameterInfos[] = 
{
	{"bytesUnknown", 0, 134223570, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"index", 1, 134223571, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12114_MI = 
{
	"Fallback", NULL, &t2043_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t125, t2043_m12114_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, false, 4863, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m12115_MI = 
{
	"GetNextChar", NULL, &t2043_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 1478, 0, 6, 0, false, false, 4864, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10792_MI = 
{
	"Reset", (methodPointerType)&m10792, &t2043_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 4865, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2043_MIs[] =
{
	&m10791_MI,
	&m12116_MI,
	&m12114_MI,
	&m12115_MI,
	&m10792_MI,
	NULL
};
extern MethodInfo m12116_MI;
static PropertyInfo t2043____Remaining_PropertyInfo = 
{
	&t2043_TI, "Remaining", &m12116_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2043_PIs[] =
{
	&t2043____Remaining_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2043_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
	&m10792_MI,
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
struct t2043;
const Il2CppTypeDefinitionMetadata t2043_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2043_VT, t2043_VTIGM, NULL};
TypeInfo t2043_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderFallbackBuffer", "System.Text", t2043_MIs, t2043_PIs, NULL, NULL, &t2043_TI, NULL, &EmptyCustomAttributesCache, &t2043_0_0_0, &t2043_1_0_0, &t2043_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2043), sizeof (t2043), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 8, 0, 0};
#include "t2047.h"
// Metadata Definition System.Text.DecoderFallbackException
extern TypeInfo t2047_TI;
#include "t2047MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10793_MI = 
{
	".ctor", (methodPointerType)&m10793, &t2047_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4866, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2047_m10794_ParameterInfos[] = 
{
	{"message", 0, 134223572, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10794_MI = 
{
	".ctor", (methodPointerType)&m10794, &t2047_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2047_m10794_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4867, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2047_m10795_ParameterInfos[] = 
{
	{"message", 0, 134223573, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bytesUnknown", 1, 134223574, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"index", 2, 134223575, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10795_MI = 
{
	".ctor", (methodPointerType)&m10795, &t2047_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t2047_m10795_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4868, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2047_MIs[] =
{
	&m10793_MI,
	&m10794_MI,
	&m10795_MI,
	NULL
};
extern Il2CppType t730_0_0_1;
FieldInfo t2047_f13_FieldInfo = 
{
	"bytes_unknown", &t730_0_0_1, &t2047_TI, offsetof(t2047, f13), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2047_f14_FieldInfo = 
{
	"index", &t125_0_0_1, &t2047_TI, offsetof(t2047, f14), &EmptyCustomAttributesCache};
static FieldInfo* t2047_FIs[] =
{
	&t2047_f13_FieldInfo,
	&t2047_f14_FieldInfo,
	NULL
};
extern MethodInfo m4496_MI;
extern MethodInfo m11142_MI;
extern MethodInfo m11141_MI;
extern MethodInfo m11140_MI;
static Il2CppMethodReference t2047_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4496_MI,
	&m11142_MI,
	&m4243_MI,
	&m11141_MI,
	&m4498_MI,
	&m4441_MI,
	&m11142_MI,
	&m4442_MI,
	&m11140_MI,
};
static bool t2047_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2047_IOs[] = 
{
	{ &t623_0_0_0, 4},
	{ &t948_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2047_0_0_0;
extern Il2CppType t2047_1_0_0;
extern Il2CppType t563_0_0_0;
struct t2047;
const Il2CppTypeDefinitionMetadata t2047_DM = 
{
	NULL, NULL, NULL, t2047_IOs, &t563_0_0_0, t2047_VT, t2047_VTIGM, NULL};
TypeInfo t2047_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderFallbackException", "System.Text", t2047_MIs, NULL, t2047_FIs, NULL, &t2047_TI, NULL, &EmptyCustomAttributesCache, &t2047_0_0_0, &t2047_1_0_0, &t2047_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2047), sizeof (t2047), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 2, 0, 0, 12, 0, 2};
#include "t2048.h"
// Metadata Definition System.Text.DecoderReplacementFallback
extern TypeInfo t2048_TI;
#include "t2048MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10796_MI = 
{
	".ctor", (methodPointerType)&m10796, &t2048_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4869, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2048_m10797_ParameterInfos[] = 
{
	{"replacement", 0, 134223576, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2048__CustomAttributeCache_m10797;
MethodInfo m10797_MI = 
{
	".ctor", (methodPointerType)&m10797, &t2048_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2048_m10797_ParameterInfos, &t2048__CustomAttributeCache_m10797, 6278, 0, 255, 1, false, false, 4870, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10798_MI = 
{
	"get_DefaultString", (methodPointerType)&m10798, &t2048_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4871, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2043_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10799_MI = 
{
	"CreateFallbackBuffer", (methodPointerType)&m10799, &t2048_TI, &t2043_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 4, 0, false, false, 4872, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2048_m10800_ParameterInfos[] = 
{
	{"value", 0, 134223577, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10800_MI = 
{
	"Equals", (methodPointerType)&m10800, &t2048_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2048_m10800_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4873, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10801_MI = 
{
	"GetHashCode", (methodPointerType)&m10801, &t2048_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4874, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2048_MIs[] =
{
	&m10796_MI,
	&m10797_MI,
	&m10798_MI,
	&m10799_MI,
	&m10800_MI,
	&m10801_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2048_f3_FieldInfo = 
{
	"replacement", &t2_0_0_1, &t2048_TI, offsetof(t2048, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2048_FIs[] =
{
	&t2048_f3_FieldInfo,
	NULL
};
extern MethodInfo m10798_MI;
static PropertyInfo t2048____DefaultString_PropertyInfo = 
{
	&t2048_TI, "DefaultString", &m10798_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2048_PIs[] =
{
	&t2048____DefaultString_PropertyInfo,
	NULL
};
extern MethodInfo m10800_MI;
extern MethodInfo m10801_MI;
extern MethodInfo m10799_MI;
static Il2CppMethodReference t2048_VT[] =
{
	&m10800_MI,
	&m646_MI,
	&m10801_MI,
	&m673_MI,
	&m10799_MI,
};
static bool t2048_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern MethodInfo m7848_MI;
void t2048_CustomAttributesCacheGenerator_m10797(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7848(tmp, &m7848_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2048__CustomAttributeCache_m10797 = {
1,
NULL,
&t2048_CustomAttributesCacheGenerator_m10797
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2048_0_0_0;
extern Il2CppType t2048_1_0_0;
struct t2048;
extern CustomAttributesCache t2048__CustomAttributeCache_m10797;
const Il2CppTypeDefinitionMetadata t2048_DM = 
{
	NULL, NULL, NULL, NULL, &t2044_0_0_0, t2048_VT, t2048_VTIGM, NULL};
TypeInfo t2048_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderReplacementFallback", "System.Text", t2048_MIs, t2048_PIs, t2048_FIs, NULL, &t2048_TI, NULL, &EmptyCustomAttributesCache, &t2048_0_0_0, &t2048_1_0_0, &t2048_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2048), sizeof (t2048), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 1, 0, 0, 5, 0, 0};
#include "t2049.h"
// Metadata Definition System.Text.DecoderReplacementFallbackBuffer
extern TypeInfo t2049_TI;
#include "t2049MD.h"
extern Il2CppType t2048_0_0_0;
static ParameterInfo t2049_m10802_ParameterInfos[] = 
{
	{"fallback", 0, 134223578, &EmptyCustomAttributesCache, &t2048_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10802_MI = 
{
	".ctor", (methodPointerType)&m10802, &t2049_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2049_m10802_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4875, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10803_MI = 
{
	"get_Remaining", (methodPointerType)&m10803, &t2049_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 4876, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2049_m10804_ParameterInfos[] = 
{
	{"bytesUnknown", 0, 134223579, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"index", 1, 134223580, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10804_MI = 
{
	"Fallback", (methodPointerType)&m10804, &t2049_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t125, t2049_m10804_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 4877, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10805_MI = 
{
	"GetNextChar", (methodPointerType)&m10805, &t2049_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 4878, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10806_MI = 
{
	"Reset", (methodPointerType)&m10806, &t2049_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 4879, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2049_MIs[] =
{
	&m10802_MI,
	&m10803_MI,
	&m10804_MI,
	&m10805_MI,
	&m10806_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t2049_f0_FieldInfo = 
{
	"fallback_assigned", &t124_0_0_1, &t2049_TI, offsetof(t2049, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2049_f1_FieldInfo = 
{
	"current", &t125_0_0_1, &t2049_TI, offsetof(t2049, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2049_f2_FieldInfo = 
{
	"replacement", &t2_0_0_1, &t2049_TI, offsetof(t2049, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2049_FIs[] =
{
	&t2049_f0_FieldInfo,
	&t2049_f1_FieldInfo,
	&t2049_f2_FieldInfo,
	NULL
};
extern MethodInfo m10803_MI;
static PropertyInfo t2049____Remaining_PropertyInfo = 
{
	&t2049_TI, "Remaining", &m10803_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2049_PIs[] =
{
	&t2049____Remaining_PropertyInfo,
	NULL
};
extern MethodInfo m10804_MI;
extern MethodInfo m10805_MI;
extern MethodInfo m10806_MI;
static Il2CppMethodReference t2049_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10803_MI,
	&m10804_MI,
	&m10805_MI,
	&m10806_MI,
};
static bool t2049_VTIGM[] =
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
extern Il2CppType t2049_0_0_0;
extern Il2CppType t2049_1_0_0;
struct t2049;
const Il2CppTypeDefinitionMetadata t2049_DM = 
{
	NULL, NULL, NULL, NULL, &t2043_0_0_0, t2049_VT, t2049_VTIGM, NULL};
TypeInfo t2049_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderReplacementFallbackBuffer", "System.Text", t2049_MIs, t2049_PIs, t2049_FIs, NULL, &t2049_TI, NULL, &EmptyCustomAttributesCache, &t2049_0_0_0, &t2049_1_0_0, &t2049_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2049), sizeof (t2049), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 1, 3, 0, 0, 8, 0, 0};
#include "t2050.h"
// Metadata Definition System.Text.EncoderExceptionFallback
extern TypeInfo t2050_TI;
#include "t2050MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10807_MI = 
{
	".ctor", (methodPointerType)&m10807, &t2050_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4880, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2042_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10808_MI = 
{
	"CreateFallbackBuffer", (methodPointerType)&m10808, &t2050_TI, &t2042_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 4, 0, false, false, 4881, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2050_m10809_ParameterInfos[] = 
{
	{"value", 0, 134223581, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10809_MI = 
{
	"Equals", (methodPointerType)&m10809, &t2050_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2050_m10809_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4882, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10810_MI = 
{
	"GetHashCode", (methodPointerType)&m10810, &t2050_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4883, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2050_MIs[] =
{
	&m10807_MI,
	&m10808_MI,
	&m10809_MI,
	&m10810_MI,
	NULL
};
extern MethodInfo m10809_MI;
extern MethodInfo m10810_MI;
extern MethodInfo m10808_MI;
static Il2CppMethodReference t2050_VT[] =
{
	&m10809_MI,
	&m646_MI,
	&m10810_MI,
	&m673_MI,
	&m10808_MI,
};
static bool t2050_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2050_0_0_0;
extern Il2CppType t2050_1_0_0;
extern Il2CppType t2051_0_0_0;
struct t2050;
const Il2CppTypeDefinitionMetadata t2050_DM = 
{
	NULL, NULL, NULL, NULL, &t2051_0_0_0, t2050_VT, t2050_VTIGM, NULL};
TypeInfo t2050_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderExceptionFallback", "System.Text", t2050_MIs, NULL, NULL, NULL, &t2050_TI, NULL, &EmptyCustomAttributesCache, &t2050_0_0_0, &t2050_1_0_0, &t2050_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2050), sizeof (t2050), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 5, 0, 0};
#include "t2052.h"
// Metadata Definition System.Text.EncoderExceptionFallbackBuffer
extern TypeInfo t2052_TI;
#include "t2052MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10811_MI = 
{
	".ctor", (methodPointerType)&m10811, &t2052_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4884, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10812_MI = 
{
	"get_Remaining", (methodPointerType)&m10812, &t2052_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 4885, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2052_m10813_ParameterInfos[] = 
{
	{"charUnknown", 0, 134223582, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"index", 1, 134223583, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t334_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10813_MI = 
{
	"Fallback", (methodPointerType)&m10813, &t2052_TI, &t124_0_0_0, RuntimeInvoker_t124_t334_t125, t2052_m10813_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 4886, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2052_m10814_ParameterInfos[] = 
{
	{"charUnknownHigh", 0, 134223584, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"charUnknownLow", 1, 134223585, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"index", 2, 134223586, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t334_t334_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10814_MI = 
{
	"Fallback", (methodPointerType)&m10814, &t2052_TI, &t124_0_0_0, RuntimeInvoker_t124_t334_t334_t125, t2052_m10814_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 3, false, false, 4887, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10815_MI = 
{
	"GetNextChar", (methodPointerType)&m10815, &t2052_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 4888, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2052_MIs[] =
{
	&m10811_MI,
	&m10812_MI,
	&m10813_MI,
	&m10814_MI,
	&m10815_MI,
	NULL
};
extern MethodInfo m10812_MI;
static PropertyInfo t2052____Remaining_PropertyInfo = 
{
	&t2052_TI, "Remaining", &m10812_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2052_PIs[] =
{
	&t2052____Remaining_PropertyInfo,
	NULL
};
extern MethodInfo m10813_MI;
extern MethodInfo m10814_MI;
extern MethodInfo m10815_MI;
static Il2CppMethodReference t2052_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10812_MI,
	&m10813_MI,
	&m10814_MI,
	&m10815_MI,
};
static bool t2052_VTIGM[] =
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
extern Il2CppType t2052_0_0_0;
extern Il2CppType t2052_1_0_0;
extern Il2CppType t2042_0_0_0;
struct t2052;
const Il2CppTypeDefinitionMetadata t2052_DM = 
{
	NULL, NULL, NULL, NULL, &t2042_0_0_0, t2052_VT, t2052_VTIGM, NULL};
TypeInfo t2052_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderExceptionFallbackBuffer", "System.Text", t2052_MIs, t2052_PIs, NULL, NULL, &t2052_TI, NULL, &EmptyCustomAttributesCache, &t2052_0_0_0, &t2052_1_0_0, &t2052_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2052), sizeof (t2052), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 8, 0, 0};
#include "t2051.h"
// Metadata Definition System.Text.EncoderFallback
extern TypeInfo t2051_TI;
#include "t2051MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10816_MI = 
{
	".ctor", (methodPointerType)&m10816, &t2051_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4889, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10817_MI = 
{
	".cctor", (methodPointerType)&m10817, &t2051_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4890, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2051_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10818_MI = 
{
	"get_ExceptionFallback", (methodPointerType)&m10818, &t2051_TI, &t2051_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4891, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2051_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10819_MI = 
{
	"get_ReplacementFallback", (methodPointerType)&m10819, &t2051_TI, &t2051_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4892, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2051_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10820_MI = 
{
	"get_StandardSafeFallback", (methodPointerType)&m10820, &t2051_TI, &t2051_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 4893, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2042_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12108_MI = 
{
	"CreateFallbackBuffer", NULL, &t2051_TI, &t2042_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 1478, 0, 4, 0, false, false, 4894, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2051_MIs[] =
{
	&m10816_MI,
	&m10817_MI,
	&m10818_MI,
	&m10819_MI,
	&m10820_MI,
	&m12108_MI,
	NULL
};
extern Il2CppType t2051_0_0_17;
FieldInfo t2051_f0_FieldInfo = 
{
	"exception_fallback", &t2051_0_0_17, &t2051_TI, offsetof(t2051_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2051_0_0_17;
FieldInfo t2051_f1_FieldInfo = 
{
	"replacement_fallback", &t2051_0_0_17, &t2051_TI, offsetof(t2051_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2051_0_0_17;
FieldInfo t2051_f2_FieldInfo = 
{
	"standard_safe_fallback", &t2051_0_0_17, &t2051_TI, offsetof(t2051_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2051_FIs[] =
{
	&t2051_f0_FieldInfo,
	&t2051_f1_FieldInfo,
	&t2051_f2_FieldInfo,
	NULL
};
extern MethodInfo m10818_MI;
static PropertyInfo t2051____ExceptionFallback_PropertyInfo = 
{
	&t2051_TI, "ExceptionFallback", &m10818_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10819_MI;
static PropertyInfo t2051____ReplacementFallback_PropertyInfo = 
{
	&t2051_TI, "ReplacementFallback", &m10819_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10820_MI;
static PropertyInfo t2051____StandardSafeFallback_PropertyInfo = 
{
	&t2051_TI, "StandardSafeFallback", &m10820_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2051_PIs[] =
{
	&t2051____ExceptionFallback_PropertyInfo,
	&t2051____ReplacementFallback_PropertyInfo,
	&t2051____StandardSafeFallback_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2051_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t2051_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2051_1_0_0;
struct t2051;
const Il2CppTypeDefinitionMetadata t2051_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2051_VT, t2051_VTIGM, NULL};
TypeInfo t2051_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderFallback", "System.Text", t2051_MIs, t2051_PIs, t2051_FIs, NULL, &t2051_TI, NULL, &EmptyCustomAttributesCache, &t2051_0_0_0, &t2051_1_0_0, &t2051_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2051), sizeof (t2051), 0, -1, sizeof(t2051_SFs), 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, true, false, 6, 3, 3, 0, 0, 5, 0, 0};
#include "t2042.h"
// Metadata Definition System.Text.EncoderFallbackBuffer
extern TypeInfo t2042_TI;
#include "t2042MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10821_MI = 
{
	".ctor", (methodPointerType)&m10821, &t2042_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4895, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12111_MI = 
{
	"get_Remaining", NULL, &t2042_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 4, 0, false, false, 4896, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2042_m12110_ParameterInfos[] = 
{
	{"charUnknown", 0, 134223587, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"index", 1, 134223588, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t334_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12110_MI = 
{
	"Fallback", NULL, &t2042_TI, &t124_0_0_0, RuntimeInvoker_t124_t334_t125, t2042_m12110_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, false, 4897, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2042_m12109_ParameterInfos[] = 
{
	{"charUnknownHigh", 0, 134223589, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"charUnknownLow", 1, 134223590, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"index", 2, 134223591, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t334_t334_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12109_MI = 
{
	"Fallback", NULL, &t2042_TI, &t124_0_0_0, RuntimeInvoker_t124_t334_t334_t125, t2042_m12109_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 3, false, false, 4898, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m12112_MI = 
{
	"GetNextChar", NULL, &t2042_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 1478, 0, 7, 0, false, false, 4899, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2042_MIs[] =
{
	&m10821_MI,
	&m12111_MI,
	&m12110_MI,
	&m12109_MI,
	&m12112_MI,
	NULL
};
extern MethodInfo m12111_MI;
static PropertyInfo t2042____Remaining_PropertyInfo = 
{
	&t2042_TI, "Remaining", &m12111_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2042_PIs[] =
{
	&t2042____Remaining_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2042_VT[] =
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
static bool t2042_VTIGM[] =
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
struct t2042;
const Il2CppTypeDefinitionMetadata t2042_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2042_VT, t2042_VTIGM, NULL};
TypeInfo t2042_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderFallbackBuffer", "System.Text", t2042_MIs, t2042_PIs, NULL, NULL, &t2042_TI, NULL, &EmptyCustomAttributesCache, &t2042_0_0_0, &t2042_1_0_0, &t2042_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2042), sizeof (t2042), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 8, 0, 0};
#include "t2053.h"
// Metadata Definition System.Text.EncoderFallbackException
extern TypeInfo t2053_TI;
#include "t2053MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10822_MI = 
{
	".ctor", (methodPointerType)&m10822, &t2053_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4900, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2053_m10823_ParameterInfos[] = 
{
	{"message", 0, 134223592, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10823_MI = 
{
	".ctor", (methodPointerType)&m10823, &t2053_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2053_m10823_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4901, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2053_m10824_ParameterInfos[] = 
{
	{"charUnknown", 0, 134223593, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"index", 1, 134223594, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t334_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10824_MI = 
{
	".ctor", (methodPointerType)&m10824, &t2053_TI, &t122_0_0_0, RuntimeInvoker_t122_t334_t125, t2053_m10824_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 4902, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2053_m10825_ParameterInfos[] = 
{
	{"charUnknownHigh", 0, 134223595, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"charUnknownLow", 1, 134223596, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"index", 2, 134223597, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t334_t334_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10825_MI = 
{
	".ctor", (methodPointerType)&m10825, &t2053_TI, &t122_0_0_0, RuntimeInvoker_t122_t334_t334_t125, t2053_m10825_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 3, false, false, 4903, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2053_MIs[] =
{
	&m10822_MI,
	&m10823_MI,
	&m10824_MI,
	&m10825_MI,
	NULL
};
extern Il2CppType t303_0_0_1;
FieldInfo t2053_f13_FieldInfo = 
{
	"char_unknown", &t303_0_0_1, &t2053_TI, offsetof(t2053, f13), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_1;
FieldInfo t2053_f14_FieldInfo = 
{
	"char_unknown_high", &t303_0_0_1, &t2053_TI, offsetof(t2053, f14), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_1;
FieldInfo t2053_f15_FieldInfo = 
{
	"char_unknown_low", &t303_0_0_1, &t2053_TI, offsetof(t2053, f15), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2053_f16_FieldInfo = 
{
	"index", &t125_0_0_1, &t2053_TI, offsetof(t2053, f16), &EmptyCustomAttributesCache};
static FieldInfo* t2053_FIs[] =
{
	&t2053_f13_FieldInfo,
	&t2053_f14_FieldInfo,
	&t2053_f15_FieldInfo,
	&t2053_f16_FieldInfo,
	NULL
};
static Il2CppMethodReference t2053_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4496_MI,
	&m11142_MI,
	&m4243_MI,
	&m11141_MI,
	&m4498_MI,
	&m4441_MI,
	&m11142_MI,
	&m4442_MI,
	&m11140_MI,
};
static bool t2053_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2053_IOs[] = 
{
	{ &t623_0_0_0, 4},
	{ &t948_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2053_0_0_0;
extern Il2CppType t2053_1_0_0;
struct t2053;
const Il2CppTypeDefinitionMetadata t2053_DM = 
{
	NULL, NULL, NULL, t2053_IOs, &t563_0_0_0, t2053_VT, t2053_VTIGM, NULL};
TypeInfo t2053_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderFallbackException", "System.Text", t2053_MIs, NULL, t2053_FIs, NULL, &t2053_TI, NULL, &EmptyCustomAttributesCache, &t2053_0_0_0, &t2053_1_0_0, &t2053_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2053), sizeof (t2053), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 4, 0, 0, 12, 0, 2};
#include "t2054.h"
// Metadata Definition System.Text.EncoderReplacementFallback
extern TypeInfo t2054_TI;
#include "t2054MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10826_MI = 
{
	".ctor", (methodPointerType)&m10826, &t2054_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4904, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2054_m10827_ParameterInfos[] = 
{
	{"replacement", 0, 134223598, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2054__CustomAttributeCache_m10827;
MethodInfo m10827_MI = 
{
	".ctor", (methodPointerType)&m10827, &t2054_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2054_m10827_ParameterInfos, &t2054__CustomAttributeCache_m10827, 6278, 0, 255, 1, false, false, 4905, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10828_MI = 
{
	"get_DefaultString", (methodPointerType)&m10828, &t2054_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4906, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2042_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10829_MI = 
{
	"CreateFallbackBuffer", (methodPointerType)&m10829, &t2054_TI, &t2042_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 4, 0, false, false, 4907, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2054_m10830_ParameterInfos[] = 
{
	{"value", 0, 134223599, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10830_MI = 
{
	"Equals", (methodPointerType)&m10830, &t2054_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2054_m10830_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4908, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10831_MI = 
{
	"GetHashCode", (methodPointerType)&m10831, &t2054_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4909, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2054_MIs[] =
{
	&m10826_MI,
	&m10827_MI,
	&m10828_MI,
	&m10829_MI,
	&m10830_MI,
	&m10831_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2054_f3_FieldInfo = 
{
	"replacement", &t2_0_0_1, &t2054_TI, offsetof(t2054, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2054_FIs[] =
{
	&t2054_f3_FieldInfo,
	NULL
};
extern MethodInfo m10828_MI;
static PropertyInfo t2054____DefaultString_PropertyInfo = 
{
	&t2054_TI, "DefaultString", &m10828_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2054_PIs[] =
{
	&t2054____DefaultString_PropertyInfo,
	NULL
};
extern MethodInfo m10830_MI;
extern MethodInfo m10831_MI;
extern MethodInfo m10829_MI;
static Il2CppMethodReference t2054_VT[] =
{
	&m10830_MI,
	&m646_MI,
	&m10831_MI,
	&m673_MI,
	&m10829_MI,
};
static bool t2054_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
void t2054_CustomAttributesCacheGenerator_m10827(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7848(tmp, &m7848_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2054__CustomAttributeCache_m10827 = {
1,
NULL,
&t2054_CustomAttributesCacheGenerator_m10827
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2054_0_0_0;
extern Il2CppType t2054_1_0_0;
struct t2054;
extern CustomAttributesCache t2054__CustomAttributeCache_m10827;
const Il2CppTypeDefinitionMetadata t2054_DM = 
{
	NULL, NULL, NULL, NULL, &t2051_0_0_0, t2054_VT, t2054_VTIGM, NULL};
TypeInfo t2054_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderReplacementFallback", "System.Text", t2054_MIs, t2054_PIs, t2054_FIs, NULL, &t2054_TI, NULL, &EmptyCustomAttributesCache, &t2054_0_0_0, &t2054_1_0_0, &t2054_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2054), sizeof (t2054), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 1, 0, 0, 5, 0, 0};
#include "t2055.h"
// Metadata Definition System.Text.EncoderReplacementFallbackBuffer
extern TypeInfo t2055_TI;
#include "t2055MD.h"
extern Il2CppType t2054_0_0_0;
static ParameterInfo t2055_m10832_ParameterInfos[] = 
{
	{"fallback", 0, 134223600, &EmptyCustomAttributesCache, &t2054_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10832_MI = 
{
	".ctor", (methodPointerType)&m10832, &t2055_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2055_m10832_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4910, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10833_MI = 
{
	"get_Remaining", (methodPointerType)&m10833, &t2055_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 4911, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2055_m10834_ParameterInfos[] = 
{
	{"charUnknown", 0, 134223601, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"index", 1, 134223602, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t334_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10834_MI = 
{
	"Fallback", (methodPointerType)&m10834, &t2055_TI, &t124_0_0_0, RuntimeInvoker_t124_t334_t125, t2055_m10834_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 4912, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2055_m10835_ParameterInfos[] = 
{
	{"charUnknownHigh", 0, 134223603, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"charUnknownLow", 1, 134223604, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"index", 2, 134223605, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t334_t334_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10835_MI = 
{
	"Fallback", (methodPointerType)&m10835, &t2055_TI, &t124_0_0_0, RuntimeInvoker_t124_t334_t334_t125, t2055_m10835_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 3, false, false, 4913, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2055_m10836_ParameterInfos[] = 
{
	{"index", 0, 134223606, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10836_MI = 
{
	"Fallback", (methodPointerType)&m10836, &t2055_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t2055_m10836_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4914, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10837_MI = 
{
	"GetNextChar", (methodPointerType)&m10837, &t2055_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 4915, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2055_MIs[] =
{
	&m10832_MI,
	&m10833_MI,
	&m10834_MI,
	&m10835_MI,
	&m10836_MI,
	&m10837_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2055_f0_FieldInfo = 
{
	"replacement", &t2_0_0_1, &t2055_TI, offsetof(t2055, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2055_f1_FieldInfo = 
{
	"current", &t125_0_0_1, &t2055_TI, offsetof(t2055, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t2055_f2_FieldInfo = 
{
	"fallback_assigned", &t124_0_0_1, &t2055_TI, offsetof(t2055, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2055_FIs[] =
{
	&t2055_f0_FieldInfo,
	&t2055_f1_FieldInfo,
	&t2055_f2_FieldInfo,
	NULL
};
extern MethodInfo m10833_MI;
static PropertyInfo t2055____Remaining_PropertyInfo = 
{
	&t2055_TI, "Remaining", &m10833_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2055_PIs[] =
{
	&t2055____Remaining_PropertyInfo,
	NULL
};
extern MethodInfo m10834_MI;
extern MethodInfo m10835_MI;
extern MethodInfo m10837_MI;
static Il2CppMethodReference t2055_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10833_MI,
	&m10834_MI,
	&m10835_MI,
	&m10837_MI,
};
static bool t2055_VTIGM[] =
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
extern Il2CppType t2055_0_0_0;
extern Il2CppType t2055_1_0_0;
struct t2055;
const Il2CppTypeDefinitionMetadata t2055_DM = 
{
	NULL, NULL, NULL, NULL, &t2042_0_0_0, t2055_VT, t2055_VTIGM, NULL};
TypeInfo t2055_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderReplacementFallbackBuffer", "System.Text", t2055_MIs, t2055_PIs, t2055_FIs, NULL, &t2055_TI, NULL, &EmptyCustomAttributesCache, &t2055_0_0_0, &t2055_1_0_0, &t2055_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2055), sizeof (t2055), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 3, 0, 0, 8, 0, 0};
#include "t2056.h"
// Metadata Definition System.Text.Encoding/ForwardingDecoder
extern TypeInfo t2056_TI;
#include "t2056MD.h"
extern Il2CppType t729_0_0_0;
static ParameterInfo t2056_m10838_ParameterInfos[] = 
{
	{"enc", 0, 134223661, &EmptyCustomAttributesCache, &t729_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10838_MI = 
{
	".ctor", (methodPointerType)&m10838, &t2056_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2056_m10838_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4963, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2056_m10839_ParameterInfos[] = 
{
	{"bytes", 0, 134223662, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 1, 134223663, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223664, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223665, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"charIndex", 4, 134223666, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10839_MI = 
{
	"GetChars", (methodPointerType)&m10839, &t2056_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2056_m10839_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 5, false, false, 4964, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2056_MIs[] =
{
	&m10838_MI,
	&m10839_MI,
	NULL
};
extern Il2CppType t729_0_0_1;
FieldInfo t2056_f2_FieldInfo = 
{
	"encoding", &t729_0_0_1, &t2056_TI, offsetof(t2056, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2056_FIs[] =
{
	&t2056_f2_FieldInfo,
	NULL
};
extern MethodInfo m10839_MI;
static Il2CppMethodReference t2056_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10839_MI,
};
static bool t2056_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2056_0_0_0;
extern Il2CppType t2056_1_0_0;
extern TypeInfo t729_TI;
struct t2056;
const Il2CppTypeDefinitionMetadata t2056_DM = 
{
	&t729_0_0_0, NULL, NULL, NULL, &t1713_0_0_0, t2056_VT, t2056_VTIGM, NULL};
TypeInfo t2056_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ForwardingDecoder", "", t2056_MIs, NULL, t2056_FIs, NULL, &t2056_TI, NULL, &EmptyCustomAttributesCache, &t2056_0_0_0, &t2056_1_0_0, &t2056_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2056), sizeof (t2056), 0, -1, 0, 0, -1, 1048835, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#include "t729.h"
// Metadata Definition System.Text.Encoding
#include "t729MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10840_MI = 
{
	".ctor", (methodPointerType)&m10840, &t729_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4916, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t729_m10841_ParameterInfos[] = 
{
	{"codePage", 0, 134223607, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10841_MI = 
{
	".ctor", (methodPointerType)&m10841, &t729_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t729_m10841_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 1, false, false, 4917, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10842_MI = 
{
	".cctor", (methodPointerType)&m10842, &t729_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4918, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t729_m10843_ParameterInfos[] = 
{
	{"arg", 0, 134223608, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10843_MI = 
{
	"_", (methodPointerType)&m10843, &t729_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t729_m10843_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 4919, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10844_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m10844, &t729_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4920, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2044_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10845_MI = 
{
	"get_DecoderFallback", (methodPointerType)&m10845, &t729_TI, &t2044_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4921, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2044_0_0_0;
static ParameterInfo t729_m10846_ParameterInfos[] = 
{
	{"value", 0, 134223609, &EmptyCustomAttributesCache, &t2044_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10846_MI = 
{
	"set_DecoderFallback", (methodPointerType)&m10846, &t729_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t729_m10846_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4922, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2051_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10847_MI = 
{
	"get_EncoderFallback", (methodPointerType)&m10847, &t729_TI, &t2051_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4923, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2051_0_0_0;
extern Il2CppType t2044_0_0_0;
static ParameterInfo t729_m10848_ParameterInfos[] = 
{
	{"e", 0, 134223610, &EmptyCustomAttributesCache, &t2051_0_0_0},
	{"d", 1, 134223611, &EmptyCustomAttributesCache, &t2044_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10848_MI = 
{
	"SetFallbackInternal", (methodPointerType)&m10848, &t729_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t729_m10848_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 2, false, false, 4924, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t729_m10849_ParameterInfos[] = 
{
	{"value", 0, 134223612, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10849_MI = 
{
	"Equals", (methodPointerType)&m10849, &t729_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t729_m10849_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4925, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t729_m12117_ParameterInfos[] = 
{
	{"chars", 0, 134223613, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"index", 1, 134223614, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223615, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12117_MI = 
{
	"GetByteCount", NULL, &t729_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t729_m12117_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 3, false, false, 4926, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t729_m10850_ParameterInfos[] = 
{
	{"s", 0, 134223616, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10850_MI = 
{
	"GetByteCount", (methodPointerType)&m10850, &t729_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t729_m10850_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 1, false, false, 4927, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
static ParameterInfo t729_m10851_ParameterInfos[] = 
{
	{"chars", 0, 134223617, &EmptyCustomAttributesCache, &t312_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10851_MI = 
{
	"GetByteCount", (methodPointerType)&m10851, &t729_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t729_m10851_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 1, false, false, 4928, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t729_m12010_ParameterInfos[] = 
{
	{"chars", 0, 134223618, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"charIndex", 1, 134223619, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223620, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223621, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 4, 134223622, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12010_MI = 
{
	"GetBytes", NULL, &t729_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t729_m12010_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 7, 5, false, false, 4929, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t729_m6919_ParameterInfos[] = 
{
	{"s", 0, 134223623, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"charIndex", 1, 134223624, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223625, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223626, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 4, 134223627, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6919_MI = 
{
	"GetBytes", (methodPointerType)&m6919, &t729_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t729_m6919_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 5, false, false, 4930, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t729_m4288_ParameterInfos[] = 
{
	{"s", 0, 134223628, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4288_MI = 
{
	"GetBytes", (methodPointerType)&m4288, &t729_TI, &t730_0_0_0, RuntimeInvoker_t9_t9, t729_m4288_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 1, false, false, 4931, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t729_m10852_ParameterInfos[] = 
{
	{"chars", 0, 134223629, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"index", 1, 134223630, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223631, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10852_MI = 
{
	"GetBytes", (methodPointerType)&m10852, &t729_TI, &t730_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t729_m10852_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 3, false, false, 4932, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
static ParameterInfo t729_m5985_ParameterInfos[] = 
{
	{"chars", 0, 134223632, &EmptyCustomAttributesCache, &t312_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5985_MI = 
{
	"GetBytes", (methodPointerType)&m5985, &t729_TI, &t730_0_0_0, RuntimeInvoker_t9_t9, t729_m5985_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 1, false, false, 4933, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t729_m12118_ParameterInfos[] = 
{
	{"bytes", 0, 134223633, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"index", 1, 134223634, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223635, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12118_MI = 
{
	"GetCharCount", NULL, &t729_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t729_m12118_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 12, 3, false, false, 4934, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t729_m12005_ParameterInfos[] = 
{
	{"bytes", 0, 134223636, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 1, 134223637, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223638, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223639, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"charIndex", 4, 134223640, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12005_MI = 
{
	"GetChars", NULL, &t729_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t729_m12005_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 13, 5, false, false, 4935, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t729_m10853_ParameterInfos[] = 
{
	{"bytes", 0, 134223641, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"index", 1, 134223642, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223643, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t312_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10853_MI = 
{
	"GetChars", (methodPointerType)&m10853, &t729_TI, &t312_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t729_m10853_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 3, false, false, 4936, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1713_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10854_MI = 
{
	"GetDecoder", (methodPointerType)&m10854, &t729_TI, &t1713_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 15, 0, false, false, 4937, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t158_0_0_0;
extern CustomAttributesCache t729__CustomAttributeCache_t729_m10855_Arg1_ParameterInfo;
static ParameterInfo t729_m10855_ParameterInfos[] = 
{
	{"name", 0, 134223644, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"args", 1, 134223645, &t729__CustomAttributeCache_t729_m10855_Arg1_ParameterInfo, &t158_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10855_MI = 
{
	"InvokeI18N", (methodPointerType)&m10855, &t729_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t729_m10855_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 4938, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t729_m10856_ParameterInfos[] = 
{
	{"codepage", 0, 134223646, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t729_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10856_MI = 
{
	"GetEncoding", (methodPointerType)&m10856, &t729_TI, &t729_0_0_0, RuntimeInvoker_t9_t125, t729_m10856_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4939, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t729_m4272_ParameterInfos[] = 
{
	{"name", 0, 134223647, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t729_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4272_MI = 
{
	"GetEncoding", (methodPointerType)&m4272, &t729_TI, &t729_0_0_0, RuntimeInvoker_t9_t9, t729_m4272_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4940, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10857_MI = 
{
	"GetHashCode", (methodPointerType)&m10857, &t729_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4941, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t729_m12007_ParameterInfos[] = 
{
	{"charCount", 0, 134223648, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12007_MI = 
{
	"GetMaxByteCount", NULL, &t729_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t729_m12007_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 16, 1, false, false, 4942, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t729_m12008_ParameterInfos[] = 
{
	{"byteCount", 0, 134223649, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12008_MI = 
{
	"GetMaxCharCount", NULL, &t729_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t729_m12008_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 17, 1, false, false, 4943, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10858_MI = 
{
	"GetPreamble", (methodPointerType)&m10858, &t729_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 18, 0, false, false, 4944, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t729_m4265_ParameterInfos[] = 
{
	{"bytes", 0, 134223650, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"index", 1, 134223651, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223652, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4265_MI = 
{
	"GetString", (methodPointerType)&m4265, &t729_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t729_m4265_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 19, 3, false, false, 4945, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t729_m5828_ParameterInfos[] = 
{
	{"bytes", 0, 134223653, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5828_MI = 
{
	"GetString", (methodPointerType)&m5828, &t729_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t729_m5828_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 20, 1, false, false, 4946, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4292_MI = 
{
	"get_HeaderName", (methodPointerType)&m4292, &t729_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 21, 0, false, false, 4947, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4299_MI = 
{
	"get_WebName", (methodPointerType)&m4299, &t729_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 22, 0, false, false, 4948, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t729_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4266_MI = 
{
	"get_ASCII", (methodPointerType)&m4266, &t729_TI, &t729_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4949, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t729_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6918_MI = 
{
	"get_BigEndianUnicode", (methodPointerType)&m6918, &t729_TI, &t729_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4950, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_1_0_0;
extern Il2CppType t125_1_0_0;
static ParameterInfo t729_m10859_ParameterInfos[] = 
{
	{"code_page", 0, 134223654, &EmptyCustomAttributesCache, &t125_1_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t336 (MethodInfo* method, void* obj, void** args);
MethodInfo m10859_MI = 
{
	"InternalCodePage", (methodPointerType)&m10859, &t729_TI, &t2_0_0_0, RuntimeInvoker_t9_t336, t729_m10859_ParameterInfos, &EmptyCustomAttributesCache, 147, 4096, 255, 1, false, false, 4951, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t729_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10860_MI = 
{
	"get_Default", (methodPointerType)&m10860, &t729_TI, &t729_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4952, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t729_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10861_MI = 
{
	"get_ISOLatin1", (methodPointerType)&m10861, &t729_TI, &t729_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2193, 0, 255, 0, false, false, 4953, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t729_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6930_MI = 
{
	"get_UTF7", (methodPointerType)&m6930, &t729_TI, &t729_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4954, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t729_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4273_MI = 
{
	"get_UTF8", (methodPointerType)&m4273, &t729_TI, &t729_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4955, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t729_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10862_MI = 
{
	"get_UTF8Unmarked", (methodPointerType)&m10862, &t729_TI, &t729_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 4956, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t729_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10863_MI = 
{
	"get_UTF8UnmarkedUnsafe", (methodPointerType)&m10863, &t729_TI, &t729_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 4957, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t729_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10864_MI = 
{
	"get_Unicode", (methodPointerType)&m10864, &t729_TI, &t729_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4958, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t729_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10865_MI = 
{
	"get_UTF32", (methodPointerType)&m10865, &t729_TI, &t729_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4959, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t729_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10866_MI = 
{
	"get_BigEndianUTF32", (methodPointerType)&m10866, &t729_TI, &t729_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 4960, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2238_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t729_m10867_ParameterInfos[] = 
{
	{"chars", 0, 134223655, &EmptyCustomAttributesCache, &t2238_0_0_0},
	{"count", 1, 134223656, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t729__CustomAttributeCache_m10867;
MethodInfo m10867_MI = 
{
	"GetByteCount", (methodPointerType)&m10867, &t729_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125, t729_m10867_ParameterInfos, &t729__CustomAttributeCache_m10867, 454, 0, 23, 2, false, false, 4961, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2238_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1553_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t729_m10868_ParameterInfos[] = 
{
	{"chars", 0, 134223657, &EmptyCustomAttributesCache, &t2238_0_0_0},
	{"charCount", 1, 134223658, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 2, 134223659, &EmptyCustomAttributesCache, &t1553_0_0_0},
	{"byteCount", 3, 134223660, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t729__CustomAttributeCache_m10868;
MethodInfo m10868_MI = 
{
	"GetBytes", (methodPointerType)&m10868, &t729_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t9_t125, t729_m10868_ParameterInfos, &t729__CustomAttributeCache_m10868, 454, 0, 24, 4, false, false, 4962, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t729_MIs[] =
{
	&m10840_MI,
	&m10841_MI,
	&m10842_MI,
	&m10843_MI,
	&m10844_MI,
	&m10845_MI,
	&m10846_MI,
	&m10847_MI,
	&m10848_MI,
	&m10849_MI,
	&m12117_MI,
	&m10850_MI,
	&m10851_MI,
	&m12010_MI,
	&m6919_MI,
	&m4288_MI,
	&m10852_MI,
	&m5985_MI,
	&m12118_MI,
	&m12005_MI,
	&m10853_MI,
	&m10854_MI,
	&m10855_MI,
	&m10856_MI,
	&m4272_MI,
	&m10857_MI,
	&m12007_MI,
	&m12008_MI,
	&m10858_MI,
	&m4265_MI,
	&m5828_MI,
	&m4292_MI,
	&m4299_MI,
	&m4266_MI,
	&m6918_MI,
	&m10859_MI,
	&m10860_MI,
	&m10861_MI,
	&m6930_MI,
	&m4273_MI,
	&m10862_MI,
	&m10863_MI,
	&m10864_MI,
	&m10865_MI,
	&m10866_MI,
	&m10867_MI,
	&m10868_MI,
	NULL
};
extern Il2CppType t125_0_0_3;
FieldInfo t729_f0_FieldInfo = 
{
	"codePage", &t125_0_0_3, &t729_TI, offsetof(t729, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_3;
FieldInfo t729_f1_FieldInfo = 
{
	"windows_code_page", &t125_0_0_3, &t729_TI, offsetof(t729, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t729_f2_FieldInfo = 
{
	"is_readonly", &t124_0_0_1, &t729_TI, offsetof(t729, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2044_0_0_1;
FieldInfo t729_f3_FieldInfo = 
{
	"decoder_fallback", &t2044_0_0_1, &t729_TI, offsetof(t729, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2051_0_0_1;
FieldInfo t729_f4_FieldInfo = 
{
	"encoder_fallback", &t2051_0_0_1, &t729_TI, offsetof(t729, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1345_0_0_17;
FieldInfo t729_f5_FieldInfo = 
{
	"i18nAssembly", &t1345_0_0_17, &t729_TI, offsetof(t729_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_17;
FieldInfo t729_f6_FieldInfo = 
{
	"i18nDisabled", &t124_0_0_17, &t729_TI, offsetof(t729_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t158_0_0_49;
FieldInfo t729_f7_FieldInfo = 
{
	"encodings", &t158_0_0_49, &t729_TI, offsetof(t729_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_3;
FieldInfo t729_f8_FieldInfo = 
{
	"body_name", &t2_0_0_3, &t729_TI, offsetof(t729, f8), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_3;
FieldInfo t729_f9_FieldInfo = 
{
	"encoding_name", &t2_0_0_3, &t729_TI, offsetof(t729, f9), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_3;
FieldInfo t729_f10_FieldInfo = 
{
	"header_name", &t2_0_0_3, &t729_TI, offsetof(t729, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t729_f11_FieldInfo = 
{
	"is_mail_news_display", &t124_0_0_3, &t729_TI, offsetof(t729, f11), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t729_f12_FieldInfo = 
{
	"is_mail_news_save", &t124_0_0_3, &t729_TI, offsetof(t729, f12), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t729_f13_FieldInfo = 
{
	"is_browser_save", &t124_0_0_3, &t729_TI, offsetof(t729, f13), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t729_f14_FieldInfo = 
{
	"is_browser_display", &t124_0_0_3, &t729_TI, offsetof(t729, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_3;
FieldInfo t729_f15_FieldInfo = 
{
	"web_name", &t2_0_0_3, &t729_TI, offsetof(t729, f15), &EmptyCustomAttributesCache};
extern Il2CppType t729_0_0_17;
FieldInfo t729_f16_FieldInfo = 
{
	"asciiEncoding", &t729_0_0_17, &t729_TI, offsetof(t729_SFs, f16), &EmptyCustomAttributesCache};
extern Il2CppType t729_0_0_17;
FieldInfo t729_f17_FieldInfo = 
{
	"bigEndianEncoding", &t729_0_0_17, &t729_TI, offsetof(t729_SFs, f17), &EmptyCustomAttributesCache};
extern Il2CppType t729_0_0_17;
FieldInfo t729_f18_FieldInfo = 
{
	"defaultEncoding", &t729_0_0_17, &t729_TI, offsetof(t729_SFs, f18), &EmptyCustomAttributesCache};
extern Il2CppType t729_0_0_17;
FieldInfo t729_f19_FieldInfo = 
{
	"utf7Encoding", &t729_0_0_17, &t729_TI, offsetof(t729_SFs, f19), &EmptyCustomAttributesCache};
extern Il2CppType t729_0_0_17;
FieldInfo t729_f20_FieldInfo = 
{
	"utf8EncodingWithMarkers", &t729_0_0_17, &t729_TI, offsetof(t729_SFs, f20), &EmptyCustomAttributesCache};
extern Il2CppType t729_0_0_17;
FieldInfo t729_f21_FieldInfo = 
{
	"utf8EncodingWithoutMarkers", &t729_0_0_17, &t729_TI, offsetof(t729_SFs, f21), &EmptyCustomAttributesCache};
extern Il2CppType t729_0_0_17;
FieldInfo t729_f22_FieldInfo = 
{
	"unicodeEncoding", &t729_0_0_17, &t729_TI, offsetof(t729_SFs, f22), &EmptyCustomAttributesCache};
extern Il2CppType t729_0_0_17;
FieldInfo t729_f23_FieldInfo = 
{
	"isoLatin1Encoding", &t729_0_0_17, &t729_TI, offsetof(t729_SFs, f23), &EmptyCustomAttributesCache};
extern Il2CppType t729_0_0_17;
FieldInfo t729_f24_FieldInfo = 
{
	"utf8EncodingUnsafe", &t729_0_0_17, &t729_TI, offsetof(t729_SFs, f24), &EmptyCustomAttributesCache};
extern Il2CppType t729_0_0_17;
FieldInfo t729_f25_FieldInfo = 
{
	"utf32Encoding", &t729_0_0_17, &t729_TI, offsetof(t729_SFs, f25), &EmptyCustomAttributesCache};
extern Il2CppType t729_0_0_17;
FieldInfo t729_f26_FieldInfo = 
{
	"bigEndianUTF32Encoding", &t729_0_0_17, &t729_TI, offsetof(t729_SFs, f26), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_49;
FieldInfo t729_f27_FieldInfo = 
{
	"lockobj", &t9_0_0_49, &t729_TI, offsetof(t729_SFs, f27), &EmptyCustomAttributesCache};
static FieldInfo* t729_FIs[] =
{
	&t729_f0_FieldInfo,
	&t729_f1_FieldInfo,
	&t729_f2_FieldInfo,
	&t729_f3_FieldInfo,
	&t729_f4_FieldInfo,
	&t729_f5_FieldInfo,
	&t729_f6_FieldInfo,
	&t729_f7_FieldInfo,
	&t729_f8_FieldInfo,
	&t729_f9_FieldInfo,
	&t729_f10_FieldInfo,
	&t729_f11_FieldInfo,
	&t729_f12_FieldInfo,
	&t729_f13_FieldInfo,
	&t729_f14_FieldInfo,
	&t729_f15_FieldInfo,
	&t729_f16_FieldInfo,
	&t729_f17_FieldInfo,
	&t729_f18_FieldInfo,
	&t729_f19_FieldInfo,
	&t729_f20_FieldInfo,
	&t729_f21_FieldInfo,
	&t729_f22_FieldInfo,
	&t729_f23_FieldInfo,
	&t729_f24_FieldInfo,
	&t729_f25_FieldInfo,
	&t729_f26_FieldInfo,
	&t729_f27_FieldInfo,
	NULL
};
extern MethodInfo m10844_MI;
extern CustomAttributesCache t729__CustomAttributeCache_t729____IsReadOnly_PropertyInfo;
static PropertyInfo t729____IsReadOnly_PropertyInfo = 
{
	&t729_TI, "IsReadOnly", &m10844_MI, NULL, 0, &t729__CustomAttributeCache_t729____IsReadOnly_PropertyInfo};
extern MethodInfo m10845_MI;
extern MethodInfo m10846_MI;
extern CustomAttributesCache t729__CustomAttributeCache_t729____DecoderFallback_PropertyInfo;
static PropertyInfo t729____DecoderFallback_PropertyInfo = 
{
	&t729_TI, "DecoderFallback", &m10845_MI, &m10846_MI, 0, &t729__CustomAttributeCache_t729____DecoderFallback_PropertyInfo};
extern MethodInfo m10847_MI;
extern CustomAttributesCache t729__CustomAttributeCache_t729____EncoderFallback_PropertyInfo;
static PropertyInfo t729____EncoderFallback_PropertyInfo = 
{
	&t729_TI, "EncoderFallback", &m10847_MI, NULL, 0, &t729__CustomAttributeCache_t729____EncoderFallback_PropertyInfo};
static PropertyInfo t729____HeaderName_PropertyInfo = 
{
	&t729_TI, "HeaderName", &m4292_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t729____WebName_PropertyInfo = 
{
	&t729_TI, "WebName", &m4299_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m4266_MI;
static PropertyInfo t729____ASCII_PropertyInfo = 
{
	&t729_TI, "ASCII", &m4266_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6918_MI;
static PropertyInfo t729____BigEndianUnicode_PropertyInfo = 
{
	&t729_TI, "BigEndianUnicode", &m6918_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10860_MI;
static PropertyInfo t729____Default_PropertyInfo = 
{
	&t729_TI, "Default", &m10860_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10861_MI;
static PropertyInfo t729____ISOLatin1_PropertyInfo = 
{
	&t729_TI, "ISOLatin1", &m10861_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6930_MI;
static PropertyInfo t729____UTF7_PropertyInfo = 
{
	&t729_TI, "UTF7", &m6930_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m4273_MI;
static PropertyInfo t729____UTF8_PropertyInfo = 
{
	&t729_TI, "UTF8", &m4273_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10862_MI;
static PropertyInfo t729____UTF8Unmarked_PropertyInfo = 
{
	&t729_TI, "UTF8Unmarked", &m10862_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10863_MI;
static PropertyInfo t729____UTF8UnmarkedUnsafe_PropertyInfo = 
{
	&t729_TI, "UTF8UnmarkedUnsafe", &m10863_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10864_MI;
static PropertyInfo t729____Unicode_PropertyInfo = 
{
	&t729_TI, "Unicode", &m10864_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10865_MI;
static PropertyInfo t729____UTF32_PropertyInfo = 
{
	&t729_TI, "UTF32", &m10865_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10866_MI;
static PropertyInfo t729____BigEndianUTF32_PropertyInfo = 
{
	&t729_TI, "BigEndianUTF32", &m10866_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t729_PIs[] =
{
	&t729____IsReadOnly_PropertyInfo,
	&t729____DecoderFallback_PropertyInfo,
	&t729____EncoderFallback_PropertyInfo,
	&t729____HeaderName_PropertyInfo,
	&t729____WebName_PropertyInfo,
	&t729____ASCII_PropertyInfo,
	&t729____BigEndianUnicode_PropertyInfo,
	&t729____Default_PropertyInfo,
	&t729____ISOLatin1_PropertyInfo,
	&t729____UTF7_PropertyInfo,
	&t729____UTF8_PropertyInfo,
	&t729____UTF8Unmarked_PropertyInfo,
	&t729____UTF8UnmarkedUnsafe_PropertyInfo,
	&t729____Unicode_PropertyInfo,
	&t729____UTF32_PropertyInfo,
	&t729____BigEndianUTF32_PropertyInfo,
	NULL
};
static const Il2CppType* t729_TI__nestedTypes[1] =
{
	&t2056_0_0_0,
};
extern MethodInfo m10850_MI;
extern MethodInfo m6919_MI;
extern MethodInfo m10854_MI;
extern MethodInfo m4265_MI;
extern MethodInfo m10867_MI;
extern MethodInfo m10868_MI;
static Il2CppMethodReference t729_VT[] =
{
	&m10849_MI,
	&m646_MI,
	&m10857_MI,
	&m673_MI,
	NULL,
	&m10850_MI,
	&m10851_MI,
	NULL,
	&m6919_MI,
	&m4288_MI,
	&m10852_MI,
	&m5985_MI,
	NULL,
	NULL,
	&m10853_MI,
	&m10854_MI,
	NULL,
	NULL,
	&m10858_MI,
	&m4265_MI,
	&m5828_MI,
	&m4292_MI,
	&m4299_MI,
	&m10867_MI,
	&m10868_MI,
};
static bool t729_VTIGM[] =
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
static const Il2CppType* t729_ITIs[] = 
{
	&t622_0_0_0,
};
static Il2CppInterfaceOffsetPair t729_IOs[] = 
{
	{ &t622_0_0_0, 4},
};
void t729_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t337_TI;
#include "t337.h"
#include "t337MD.h"
extern MethodInfo m1228_MI;
void t729_CustomAttributesCacheGenerator_t729_m10855_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t337 * tmp;
		tmp = (t337 *)il2cpp_codegen_object_new (&t337_TI);
		m1228(tmp, &m1228_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t729_CustomAttributesCacheGenerator_m10867(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1152 * tmp;
		tmp = (t1152 *)il2cpp_codegen_object_new (&t1152_TI);
		m4801(tmp, false, &m4801_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t729_CustomAttributesCacheGenerator_m10868(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1152 * tmp;
		tmp = (t1152 *)il2cpp_codegen_object_new (&t1152_TI);
		m4801(tmp, false, &m4801_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t729_CustomAttributesCacheGenerator_t729____IsReadOnly_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t729_CustomAttributesCacheGenerator_t729____DecoderFallback_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t729_CustomAttributesCacheGenerator_t729____EncoderFallback_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t729__CustomAttributeCache = {
1,
NULL,
&t729_CustomAttributesCacheGenerator
};
CustomAttributesCache t729__CustomAttributeCache_t729_m10855_Arg1_ParameterInfo = {
1,
NULL,
&t729_CustomAttributesCacheGenerator_t729_m10855_Arg1_ParameterInfo
};
CustomAttributesCache t729__CustomAttributeCache_m10867 = {
2,
NULL,
&t729_CustomAttributesCacheGenerator_m10867
};
CustomAttributesCache t729__CustomAttributeCache_m10868 = {
2,
NULL,
&t729_CustomAttributesCacheGenerator_m10868
};
CustomAttributesCache t729__CustomAttributeCache_t729____IsReadOnly_PropertyInfo = {
1,
NULL,
&t729_CustomAttributesCacheGenerator_t729____IsReadOnly_PropertyInfo
};
CustomAttributesCache t729__CustomAttributeCache_t729____DecoderFallback_PropertyInfo = {
1,
NULL,
&t729_CustomAttributesCacheGenerator_t729____DecoderFallback_PropertyInfo
};
CustomAttributesCache t729__CustomAttributeCache_t729____EncoderFallback_PropertyInfo = {
1,
NULL,
&t729_CustomAttributesCacheGenerator_t729____EncoderFallback_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t729_1_0_0;
struct t729;
extern CustomAttributesCache t729__CustomAttributeCache;
extern CustomAttributesCache t729__CustomAttributeCache_m10867;
extern CustomAttributesCache t729__CustomAttributeCache_m10868;
extern CustomAttributesCache t729__CustomAttributeCache_t729____IsReadOnly_PropertyInfo;
extern CustomAttributesCache t729__CustomAttributeCache_t729____DecoderFallback_PropertyInfo;
extern CustomAttributesCache t729__CustomAttributeCache_t729____EncoderFallback_PropertyInfo;
const Il2CppTypeDefinitionMetadata t729_DM = 
{
	NULL, t729_TI__nestedTypes, t729_ITIs, t729_IOs, &t9_0_0_0, t729_VT, t729_VTIGM, NULL};
TypeInfo t729_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Encoding", "System.Text", t729_MIs, t729_PIs, t729_FIs, NULL, &t729_TI, NULL, &t729__CustomAttributeCache, &t729_0_0_0, &t729_1_0_0, &t729_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t729), sizeof (t729), 0, -1, sizeof(t729_SFs), 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, true, false, 47, 16, 28, 0, 1, 25, 1, 1};
#include "t2057.h"
// Metadata Definition System.Text.Latin1Encoding
extern TypeInfo t2057_TI;
#include "t2057MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10869_MI = 
{
	".ctor", (methodPointerType)&m10869, &t2057_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4965, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2057_m10870_ParameterInfos[] = 
{
	{"chars", 0, 134223667, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"index", 1, 134223668, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223669, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10870_MI = 
{
	"GetByteCount", (methodPointerType)&m10870, &t2057_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t2057_m10870_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 3, false, false, 4966, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2057_m10871_ParameterInfos[] = 
{
	{"s", 0, 134223670, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10871_MI = 
{
	"GetByteCount", (methodPointerType)&m10871, &t2057_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t2057_m10871_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4967, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2057_m10872_ParameterInfos[] = 
{
	{"chars", 0, 134223671, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"charIndex", 1, 134223672, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223673, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223674, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 4, 134223675, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10872_MI = 
{
	"GetBytes", (methodPointerType)&m10872, &t2057_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2057_m10872_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 5, false, false, 4968, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2042_1_0_0;
extern Il2CppType t312_1_0_0;
static ParameterInfo t2057_m10873_ParameterInfos[] = 
{
	{"chars", 0, 134223676, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"charIndex", 1, 134223677, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223678, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223679, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 4, 134223680, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"buffer", 5, 134223681, &EmptyCustomAttributesCache, &t2042_1_0_0},
	{"fallback_chars", 6, 134223682, &EmptyCustomAttributesCache, &t312_1_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2643_t2644 (MethodInfo* method, void* obj, void** args);
MethodInfo m10873_MI = 
{
	"GetBytes", (methodPointerType)&m10873, &t2057_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2643_t2644, t2057_m10873_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4969, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2057_m10874_ParameterInfos[] = 
{
	{"s", 0, 134223683, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"charIndex", 1, 134223684, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223685, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223686, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 4, 134223687, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10874_MI = 
{
	"GetBytes", (methodPointerType)&m10874, &t2057_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2057_m10874_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 5, false, false, 4970, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2042_1_0_0;
extern Il2CppType t312_1_0_0;
static ParameterInfo t2057_m10875_ParameterInfos[] = 
{
	{"s", 0, 134223688, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"charIndex", 1, 134223689, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223690, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223691, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 4, 134223692, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"buffer", 5, 134223693, &EmptyCustomAttributesCache, &t2042_1_0_0},
	{"fallback_chars", 6, 134223694, &EmptyCustomAttributesCache, &t312_1_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2643_t2644 (MethodInfo* method, void* obj, void** args);
MethodInfo m10875_MI = 
{
	"GetBytes", (methodPointerType)&m10875, &t2057_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2643_t2644, t2057_m10875_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4971, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2057_m10876_ParameterInfos[] = 
{
	{"bytes", 0, 134223695, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"index", 1, 134223696, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223697, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10876_MI = 
{
	"GetCharCount", (methodPointerType)&m10876, &t2057_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t2057_m10876_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 3, false, false, 4972, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2057_m10877_ParameterInfos[] = 
{
	{"bytes", 0, 134223698, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"byteIndex", 1, 134223699, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223700, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223701, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"charIndex", 4, 134223702, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10877_MI = 
{
	"GetChars", (methodPointerType)&m10877, &t2057_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2057_m10877_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 5, false, false, 4973, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2057_m10878_ParameterInfos[] = 
{
	{"charCount", 0, 134223703, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10878_MI = 
{
	"GetMaxByteCount", (methodPointerType)&m10878, &t2057_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t2057_m10878_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 1, false, false, 4974, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2057_m10879_ParameterInfos[] = 
{
	{"byteCount", 0, 134223704, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10879_MI = 
{
	"GetMaxCharCount", (methodPointerType)&m10879, &t2057_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t2057_m10879_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 4975, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2057_m10880_ParameterInfos[] = 
{
	{"bytes", 0, 134223705, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"index", 1, 134223706, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223707, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10880_MI = 
{
	"GetString", (methodPointerType)&m10880, &t2057_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t2057_m10880_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 19, 3, false, false, 4976, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t2057_m10881_ParameterInfos[] = 
{
	{"bytes", 0, 134223708, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10881_MI = 
{
	"GetString", (methodPointerType)&m10881, &t2057_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t2057_m10881_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 20, 1, false, false, 4977, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10882_MI = 
{
	"get_HeaderName", (methodPointerType)&m10882, &t2057_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 21, 0, false, false, 4978, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10883_MI = 
{
	"get_WebName", (methodPointerType)&m10883, &t2057_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 22, 0, false, false, 4979, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2057_MIs[] =
{
	&m10869_MI,
	&m10870_MI,
	&m10871_MI,
	&m10872_MI,
	&m10873_MI,
	&m10874_MI,
	&m10875_MI,
	&m10876_MI,
	&m10877_MI,
	&m10878_MI,
	&m10879_MI,
	&m10880_MI,
	&m10881_MI,
	&m10882_MI,
	&m10883_MI,
	NULL
};
extern MethodInfo m10882_MI;
static PropertyInfo t2057____HeaderName_PropertyInfo = 
{
	&t2057_TI, "HeaderName", &m10882_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10883_MI;
static PropertyInfo t2057____WebName_PropertyInfo = 
{
	&t2057_TI, "WebName", &m10883_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2057_PIs[] =
{
	&t2057____HeaderName_PropertyInfo,
	&t2057____WebName_PropertyInfo,
	NULL
};
extern MethodInfo m10870_MI;
extern MethodInfo m10871_MI;
extern MethodInfo m10872_MI;
extern MethodInfo m10874_MI;
extern MethodInfo m10876_MI;
extern MethodInfo m10877_MI;
extern MethodInfo m10878_MI;
extern MethodInfo m10879_MI;
extern MethodInfo m10880_MI;
extern MethodInfo m10881_MI;
static Il2CppMethodReference t2057_VT[] =
{
	&m10849_MI,
	&m646_MI,
	&m10857_MI,
	&m673_MI,
	&m10870_MI,
	&m10871_MI,
	&m10851_MI,
	&m10872_MI,
	&m10874_MI,
	&m4288_MI,
	&m10852_MI,
	&m5985_MI,
	&m10876_MI,
	&m10877_MI,
	&m10853_MI,
	&m10854_MI,
	&m10878_MI,
	&m10879_MI,
	&m10858_MI,
	&m10880_MI,
	&m10881_MI,
	&m10882_MI,
	&m10883_MI,
	&m10867_MI,
	&m10868_MI,
};
static bool t2057_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2057_IOs[] = 
{
	{ &t622_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2057_0_0_0;
extern Il2CppType t2057_1_0_0;
struct t2057;
const Il2CppTypeDefinitionMetadata t2057_DM = 
{
	NULL, NULL, NULL, t2057_IOs, &t729_0_0_0, t2057_VT, t2057_VTIGM, NULL};
TypeInfo t2057_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Latin1Encoding", "System.Text", t2057_MIs, t2057_PIs, NULL, NULL, &t2057_TI, NULL, &EmptyCustomAttributesCache, &t2057_0_0_0, &t2057_1_0_0, &t2057_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2057), sizeof (t2057), 0, -1, 0, 0, -1, 1056768, 0, 0, false, false, false, false, false, false, false, false, false, false, 15, 2, 0, 0, 0, 25, 0, 1};
#include "t322.h"
// Metadata Definition System.Text.StringBuilder
extern TypeInfo t322_TI;
#include "t322MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t322_m10884_ParameterInfos[] = 
{
	{"value", 0, 134223709, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 1, 134223710, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length", 2, 134223711, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"capacity", 3, 134223712, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10884_MI = 
{
	".ctor", (methodPointerType)&m10884, &t322_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t125, t322_m10884_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 4980, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t322_m10885_ParameterInfos[] = 
{
	{"value", 0, 134223713, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 1, 134223714, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length", 2, 134223715, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"capacity", 3, 134223716, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"maxCapacity", 4, 134223717, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10885_MI = 
{
	".ctor", (methodPointerType)&m10885, &t322_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t125_t125, t322_m10885_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 5, false, false, 4981, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m1165_MI = 
{
	".ctor", (methodPointerType)&m1165, &t322_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4982, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t322_m4354_ParameterInfos[] = 
{
	{"capacity", 0, 134223718, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4354_MI = 
{
	".ctor", (methodPointerType)&m4354, &t322_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t322_m4354_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4983, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t322_m2511_ParameterInfos[] = 
{
	{"value", 0, 134223719, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m2511_MI = 
{
	".ctor", (methodPointerType)&m2511, &t322_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t322_m2511_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4984, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t322_m5738_ParameterInfos[] = 
{
	{"value", 0, 134223720, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"capacity", 1, 134223721, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5738_MI = 
{
	".ctor", (methodPointerType)&m5738, &t322_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t322_m5738_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4985, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t322_m10886_ParameterInfos[] = 
{
	{"info", 0, 134223722, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134223723, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10886_MI = 
{
	".ctor", (methodPointerType)&m10886, &t322_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t322_m10886_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 2, false, false, 4986, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t322_m10887_ParameterInfos[] = 
{
	{"info", 0, 134223724, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134223725, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10887_MI = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData", (methodPointerType)&m10887, &t322_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t322_m10887_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 2, false, false, 4987, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10888_MI = 
{
	"get_Capacity", (methodPointerType)&m10888, &t322_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4988, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t322_m10889_ParameterInfos[] = 
{
	{"value", 0, 134223726, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10889_MI = 
{
	"set_Capacity", (methodPointerType)&m10889, &t322_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t322_m10889_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4989, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5884_MI = 
{
	"get_Length", (methodPointerType)&m5884, &t322_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4990, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t322_m5989_ParameterInfos[] = 
{
	{"value", 0, 134223727, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5989_MI = 
{
	"set_Length", (methodPointerType)&m5989, &t322_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t322_m5989_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4991, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t322_m10890_ParameterInfos[] = 
{
	{"index", 0, 134223728, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10890_MI = 
{
	"get_Chars", (methodPointerType)&m10890, &t322_TI, &t303_0_0_0, RuntimeInvoker_t303_t125, t322_m10890_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4992, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t322_m10891_ParameterInfos[] = 
{
	{"index", 0, 134223729, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134223730, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m10891_MI = 
{
	"set_Chars", (methodPointerType)&m10891, &t322_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t334, t322_m10891_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 2, false, false, 4993, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1171_MI = 
{
	"ToString", (methodPointerType)&m1171, &t322_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4994, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t322_m10892_ParameterInfos[] = 
{
	{"startIndex", 0, 134223731, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length", 1, 134223732, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10892_MI = 
{
	"ToString", (methodPointerType)&m10892, &t322_TI, &t2_0_0_0, RuntimeInvoker_t9_t125_t125, t322_m10892_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4995, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t322_m10893_ParameterInfos[] = 
{
	{"startIndex", 0, 134223733, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length", 1, 134223734, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10893_MI = 
{
	"Remove", (methodPointerType)&m10893, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t125_t125, t322_m10893_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4996, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t322_m10894_ParameterInfos[] = 
{
	{"oldValue", 0, 134223735, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"newValue", 1, 134223736, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10894_MI = 
{
	"Replace", (methodPointerType)&m10894, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t9_t9, t322_m10894_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4997, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t322_m10895_ParameterInfos[] = 
{
	{"oldValue", 0, 134223737, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"newValue", 1, 134223738, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 2, 134223739, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134223740, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10895_MI = 
{
	"Replace", (methodPointerType)&m10895, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t9_t9_t125_t125, t322_m10895_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 4, false, false, 4998, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t322_m1169_ParameterInfos[] = 
{
	{"value", 0, 134223741, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1169_MI = 
{
	"Append", (methodPointerType)&m1169, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t9, t322_m1169_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4999, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t322_m5814_ParameterInfos[] = 
{
	{"value", 0, 134223742, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5814_MI = 
{
	"Append", (methodPointerType)&m5814, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t125, t322_m5814_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 5000, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern Il2CppType t299_0_0_0;
static ParameterInfo t322_m5751_ParameterInfos[] = 
{
	{"value", 0, 134223743, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m5751_MI = 
{
	"Append", (methodPointerType)&m5751, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t299, t322_m5751_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 5001, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t322_m5739_ParameterInfos[] = 
{
	{"value", 0, 134223744, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5739_MI = 
{
	"Append", (methodPointerType)&m5739, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t9, t322_m5739_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 5002, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t322_m2757_ParameterInfos[] = 
{
	{"value", 0, 134223745, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m2757_MI = 
{
	"Append", (methodPointerType)&m2757, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t334, t322_m2757_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 5003, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t322_m10896_ParameterInfos[] = 
{
	{"value", 0, 134223746, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"repeatCount", 1, 134223747, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t334_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10896_MI = 
{
	"Append", (methodPointerType)&m10896, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t334_t125, t322_m10896_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 5004, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t322_m10897_ParameterInfos[] = 
{
	{"value", 0, 134223748, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"startIndex", 1, 134223749, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223750, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10897_MI = 
{
	"Append", (methodPointerType)&m10897, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t322_m10897_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 5005, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t322_m5899_ParameterInfos[] = 
{
	{"value", 0, 134223751, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 1, 134223752, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223753, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5899_MI = 
{
	"Append", (methodPointerType)&m5899, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t322_m5899_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 5006, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t322__CustomAttributeCache_m1170;
MethodInfo m1170_MI = 
{
	"AppendLine", (methodPointerType)&m1170, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9, NULL, &t322__CustomAttributeCache_m1170, 134, 0, 255, 0, false, false, 5007, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t322_m2429_ParameterInfos[] = 
{
	{"value", 0, 134223754, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t322__CustomAttributeCache_m2429;
MethodInfo m2429_MI = 
{
	"AppendLine", (methodPointerType)&m2429, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t9, t322_m2429_ParameterInfos, &t322__CustomAttributeCache_m2429, 134, 0, 255, 1, false, false, 5008, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t158_0_0_0;
extern CustomAttributesCache t322__CustomAttributeCache_t322_m6889_Arg1_ParameterInfo;
static ParameterInfo t322_m6889_ParameterInfos[] = 
{
	{"format", 0, 134223755, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"args", 1, 134223756, &t322__CustomAttributeCache_t322_m6889_Arg1_ParameterInfo, &t158_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6889_MI = 
{
	"AppendFormat", (methodPointerType)&m6889, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t9_t9, t322_m6889_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 5009, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t906_0_0_0;
extern Il2CppType t906_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t158_0_0_0;
extern CustomAttributesCache t322__CustomAttributeCache_t322_m10898_Arg2_ParameterInfo;
static ParameterInfo t322_m10898_ParameterInfos[] = 
{
	{"provider", 0, 134223757, &EmptyCustomAttributesCache, &t906_0_0_0},
	{"format", 1, 134223758, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"args", 2, 134223759, &t322__CustomAttributeCache_t322_m10898_Arg2_ParameterInfo, &t158_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10898_MI = 
{
	"AppendFormat", (methodPointerType)&m10898, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t322_m10898_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 5010, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t322_m5750_ParameterInfos[] = 
{
	{"format", 0, 134223760, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"arg0", 1, 134223761, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5750_MI = 
{
	"AppendFormat", (methodPointerType)&m5750, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t9_t9, t322_m5750_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 5011, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t322_m5841_ParameterInfos[] = 
{
	{"format", 0, 134223762, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"arg0", 1, 134223763, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"arg1", 2, 134223764, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5841_MI = 
{
	"AppendFormat", (methodPointerType)&m5841, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t322_m5841_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 5012, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t322_m5844_ParameterInfos[] = 
{
	{"format", 0, 134223765, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"arg0", 1, 134223766, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"arg1", 2, 134223767, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"arg2", 3, 134223768, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5844_MI = 
{
	"AppendFormat", (methodPointerType)&m5844, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t9_t9_t9_t9, t322_m5844_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 4, false, false, 5013, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t322_m10899_ParameterInfos[] = 
{
	{"index", 0, 134223769, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134223770, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10899_MI = 
{
	"Insert", (methodPointerType)&m10899, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t125_t9, t322_m10899_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 5014, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t322_m10900_ParameterInfos[] = 
{
	{"index", 0, 134223771, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134223772, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t125_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m10900_MI = 
{
	"Insert", (methodPointerType)&m10900, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t125_t334, t322_m10900_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 5015, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t322_m10901_ParameterInfos[] = 
{
	{"index", 0, 134223773, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134223774, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"count", 2, 134223775, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t9_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10901_MI = 
{
	"Insert", (methodPointerType)&m10901, &t322_TI, &t322_0_0_0, RuntimeInvoker_t9_t125_t9_t125, t322_m10901_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 5016, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t322_m10902_ParameterInfos[] = 
{
	{"size", 0, 134223776, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10902_MI = 
{
	"InternalEnsureCapacity", (methodPointerType)&m10902, &t322_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t322_m10902_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 5017, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t322_MIs[] =
{
	&m10884_MI,
	&m10885_MI,
	&m1165_MI,
	&m4354_MI,
	&m2511_MI,
	&m5738_MI,
	&m10886_MI,
	&m10887_MI,
	&m10888_MI,
	&m10889_MI,
	&m5884_MI,
	&m5989_MI,
	&m10890_MI,
	&m10891_MI,
	&m1171_MI,
	&m10892_MI,
	&m10893_MI,
	&m10894_MI,
	&m10895_MI,
	&m1169_MI,
	&m5814_MI,
	&m5751_MI,
	&m5739_MI,
	&m2757_MI,
	&m10896_MI,
	&m10897_MI,
	&m5899_MI,
	&m1170_MI,
	&m2429_MI,
	&m6889_MI,
	&m10898_MI,
	&m5750_MI,
	&m5841_MI,
	&m5844_MI,
	&m10899_MI,
	&m10900_MI,
	&m10901_MI,
	&m10902_MI,
	NULL
};
extern Il2CppType t125_0_0_32849;
FieldInfo t322_f0_FieldInfo = 
{
	"constDefaultCapacity", &t125_0_0_32849, &t322_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t322_f1_FieldInfo = 
{
	"_length", &t125_0_0_1, &t322_TI, offsetof(t322, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t322_f2_FieldInfo = 
{
	"_str", &t2_0_0_1, &t322_TI, offsetof(t322, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t322_f3_FieldInfo = 
{
	"_cached_str", &t2_0_0_1, &t322_TI, offsetof(t322, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t322_f4_FieldInfo = 
{
	"_maxCapacity", &t125_0_0_1, &t322_TI, offsetof(t322, f4), &EmptyCustomAttributesCache};
static FieldInfo* t322_FIs[] =
{
	&t322_f0_FieldInfo,
	&t322_f1_FieldInfo,
	&t322_f2_FieldInfo,
	&t322_f3_FieldInfo,
	&t322_f4_FieldInfo,
	NULL
};
static const int32_t t322_f0_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t322_f0_DefaultValue = 
{
	&t322_f0_FieldInfo, { (char*)&t322_f0_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t322_FDVs[] = 
{
	&t322_f0_DefaultValue,
	NULL
};
extern MethodInfo m10888_MI;
extern MethodInfo m10889_MI;
static PropertyInfo t322____Capacity_PropertyInfo = 
{
	&t322_TI, "Capacity", &m10888_MI, &m10889_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5884_MI;
extern MethodInfo m5989_MI;
static PropertyInfo t322____Length_PropertyInfo = 
{
	&t322_TI, "Length", &m5884_MI, &m5989_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10890_MI;
extern MethodInfo m10891_MI;
static PropertyInfo t322____Chars_PropertyInfo = 
{
	&t322_TI, "Chars", &m10890_MI, &m10891_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t322_PIs[] =
{
	&t322____Capacity_PropertyInfo,
	&t322____Length_PropertyInfo,
	&t322____Chars_PropertyInfo,
	NULL
};
extern MethodInfo m1171_MI;
extern MethodInfo m10887_MI;
static Il2CppMethodReference t322_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m1171_MI,
	&m10887_MI,
};
static bool t322_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t322_ITIs[] = 
{
	&t623_0_0_0,
};
static Il2CppInterfaceOffsetPair t322_IOs[] = 
{
	{ &t623_0_0_0, 4},
};
extern TypeInfo t666_TI;
#include "t666.h"
#include "t666MD.h"
extern MethodInfo m3103_MI;
void t322_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t666 * tmp;
		tmp = (t666 *)il2cpp_codegen_object_new (&t666_TI);
		m3103(tmp, il2cpp_codegen_string_new_wrapper("Chars"), &m3103_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7849(tmp, il2cpp_codegen_string_new_wrapper("Serialization format not compatible with .NET"), &m7849_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t322_CustomAttributesCacheGenerator_m1170(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t322_CustomAttributesCacheGenerator_m2429(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t322_CustomAttributesCacheGenerator_t322_m6889_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t337 * tmp;
		tmp = (t337 *)il2cpp_codegen_object_new (&t337_TI);
		m1228(tmp, &m1228_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t322_CustomAttributesCacheGenerator_t322_m10898_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t337 * tmp;
		tmp = (t337 *)il2cpp_codegen_object_new (&t337_TI);
		m1228(tmp, &m1228_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t322__CustomAttributeCache = {
3,
NULL,
&t322_CustomAttributesCacheGenerator
};
CustomAttributesCache t322__CustomAttributeCache_m1170 = {
1,
NULL,
&t322_CustomAttributesCacheGenerator_m1170
};
CustomAttributesCache t322__CustomAttributeCache_m2429 = {
1,
NULL,
&t322_CustomAttributesCacheGenerator_m2429
};
CustomAttributesCache t322__CustomAttributeCache_t322_m6889_Arg1_ParameterInfo = {
1,
NULL,
&t322_CustomAttributesCacheGenerator_t322_m6889_Arg1_ParameterInfo
};
CustomAttributesCache t322__CustomAttributeCache_t322_m10898_Arg2_ParameterInfo = {
1,
NULL,
&t322_CustomAttributesCacheGenerator_t322_m10898_Arg2_ParameterInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t322_0_0_0;
struct t322;
extern CustomAttributesCache t322__CustomAttributeCache;
extern CustomAttributesCache t322__CustomAttributeCache_m1170;
extern CustomAttributesCache t322__CustomAttributeCache_m2429;
const Il2CppTypeDefinitionMetadata t322_DM = 
{
	NULL, NULL, t322_ITIs, t322_IOs, &t9_0_0_0, t322_VT, t322_VTIGM, NULL};
TypeInfo t322_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StringBuilder", "System.Text", t322_MIs, t322_PIs, t322_FIs, NULL, &t322_TI, NULL, &t322__CustomAttributeCache, &t322_0_0_0, &t322_1_0_0, &t322_DM, NULL, NULL, NULL, t322_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t322), sizeof (t322), 0, sizeof(char*), 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 38, 3, 5, 0, 0, 5, 1, 1};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
