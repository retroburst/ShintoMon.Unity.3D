#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1995.h"
// Metadata Definition System.Security.Cryptography.HMACSHA512
extern TypeInfo t1995_TI;
#include "t1995MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10480_MI = 
{
	".ctor", (methodPointerType)&m10480, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4432, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1995_m10481_ParameterInfos[] = 
{
	{"key", 0, 134223090, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10481_MI = 
{
	".ctor", (methodPointerType)&m10481, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1995_m10481_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4433, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10482_MI = 
{
	".cctor", (methodPointerType)&m10482, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4434, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1995_m10483_ParameterInfos[] = 
{
	{"value", 0, 134223091, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10483_MI = 
{
	"set_ProduceLegacyHmacValues", (methodPointerType)&m10483, &t1995_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1995_m10483_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4435, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1995_MIs[] =
{
	&m10480_MI,
	&m10481_MI,
	&m10482_MI,
	&m10483_MI,
	NULL
};
extern Il2CppType t124_0_0_17;
FieldInfo t1995_f10_FieldInfo = 
{
	"legacy_mode", &t124_0_0_17, &t1995_TI, offsetof(t1995_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1995_f11_FieldInfo = 
{
	"legacy", &t124_0_0_1, &t1995_TI, offsetof(t1995, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1995_FIs[] =
{
	&t1995_f10_FieldInfo,
	&t1995_f11_FieldInfo,
	NULL
};
extern MethodInfo m10483_MI;
static PropertyInfo t1995____ProduceLegacyHmacValues_PropertyInfo = 
{
	&t1995_TI, "ProduceLegacyHmacValues", NULL, &m10483_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1995_PIs[] =
{
	&t1995____ProduceLegacyHmacValues_PropertyInfo,
	NULL
};
extern MethodInfo m671_MI;
extern MethodInfo m7096_MI;
extern MethodInfo m672_MI;
extern MethodInfo m673_MI;
extern MethodInfo m7089_MI;
extern MethodInfo m7090_MI;
extern MethodInfo m6955_MI;
extern MethodInfo m6956_MI;
extern MethodInfo m6957_MI;
extern MethodInfo m10464_MI;
extern MethodInfo m10465_MI;
extern MethodInfo m6943_MI;
extern MethodInfo m10466_MI;
extern MethodInfo m10463_MI;
extern MethodInfo m10460_MI;
extern MethodInfo m6971_MI;
static Il2CppMethodReference t1995_VT[] =
{
	&m671_MI,
	&m7096_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	&m10464_MI,
	&m10465_MI,
	&m6943_MI,
	&m10466_MI,
	&m10463_MI,
	&m10460_MI,
	&m6971_MI,
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
	false,
	false,
};
extern Il2CppType t137_0_0_0;
extern Il2CppType t1431_0_0_0;
static Il2CppInterfaceOffsetPair t1995_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
extern TypeInfo t684_TI;
#include "t684.h"
#include "t684MD.h"
extern MethodInfo m3168_MI;
void t1995_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
extern Il2CppType t1538_0_0_0;
struct t1995;
extern CustomAttributesCache t1995__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1995_DM = 
{
	NULL, NULL, NULL, t1995_IOs, &t1538_0_0_0, t1995_VT, t1995_VTIGM, NULL};
TypeInfo t1995_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACSHA512", "System.Security.Cryptography", t1995_MIs, t1995_PIs, t1995_FIs, NULL, &t1995_TI, NULL, &t1995__CustomAttributeCache, &t1995_0_0_0, &t1995_1_0_0, &t1995_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1995), sizeof (t1995), 0, -1, sizeof(t1995_SFs), 0, -1, 1, 0, 0, false, false, false, false, false, false, false, true, true, false, 4, 1, 2, 0, 0, 17, 0, 2};
#include "t1374.h"
// Metadata Definition System.Security.Cryptography.HashAlgorithm
extern TypeInfo t1374_TI;
#include "t1374MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6940_MI = 
{
	".ctor", (methodPointerType)&m6940, &t1374_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4436, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7089_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m7089, &t1374_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 4437, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m7090_MI = 
{
	"get_CanReuseTransform", (methodPointerType)&m7090, &t1374_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 4438, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1374_m5938_ParameterInfos[] = 
{
	{"buffer", 0, 134223092, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5938_MI = 
{
	"ComputeHash", (methodPointerType)&m5938, &t1374_TI, &t737_0_0_0, RuntimeInvoker_t9_t9, t1374_m5938_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4439, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1374_m6959_ParameterInfos[] = 
{
	{"buffer", 0, 134223093, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134223094, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223095, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6959_MI = 
{
	"ComputeHash", (methodPointerType)&m6959, &t1374_TI, &t737_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t1374_m6959_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4440, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1374_m6954_ParameterInfos[] = 
{
	{"hashName", 0, 134223096, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1374_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6954_MI = 
{
	"Create", (methodPointerType)&m6954, &t1374_TI, &t1374_0_0_0, RuntimeInvoker_t9_t9, t1374_m6954_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4441, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6957_MI = 
{
	"get_Hash", (methodPointerType)&m6957, &t1374_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 4442, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1374_m12139_ParameterInfos[] = 
{
	{"array", 0, 134223097, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ibStart", 1, 134223098, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223099, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12139_MI = 
{
	"HashCore", NULL, &t1374_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1374_m12139_ParameterInfos, &EmptyCustomAttributesCache, 1476, 0, 10, 3, false, false, 4443, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12140_MI = 
{
	"HashFinal", NULL, &t1374_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 1476, 0, 11, 0, false, false, 4444, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6943_MI = 
{
	"get_HashSize", (methodPointerType)&m6943, &t1374_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 12, 0, false, false, 4445, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6958_MI = 
{
	"Initialize", NULL, &t1374_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 1478, 0, 13, 0, false, false, 4446, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1374_m7091_ParameterInfos[] = 
{
	{"disposing", 0, 134223100, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m7091_MI = 
{
	"Dispose", (methodPointerType)&m7091, &t1374_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1374_m7091_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 14, 1, false, false, 4447, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1374_m6955_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223101, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 1, 134223102, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223103, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"outputBuffer", 3, 134223104, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"outputOffset", 4, 134223105, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6955_MI = 
{
	"TransformBlock", (methodPointerType)&m6955, &t1374_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t1374_m6955_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 5, false, false, 4448, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1374_m6956_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223106, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 1, 134223107, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223108, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6956_MI = 
{
	"TransformFinalBlock", (methodPointerType)&m6956, &t1374_TI, &t737_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t1374_m6956_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 3, false, false, 4449, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1374_MIs[] =
{
	&m6940_MI,
	&m7089_MI,
	&m7090_MI,
	&m5938_MI,
	&m6959_MI,
	&m6954_MI,
	&m6957_MI,
	&m12139_MI,
	&m12140_MI,
	&m6943_MI,
	&m6958_MI,
	&m7091_MI,
	&m6955_MI,
	&m6956_MI,
	NULL
};
extern Il2CppType t737_0_0_5;
FieldInfo t1374_f0_FieldInfo = 
{
	"HashValue", &t737_0_0_5, &t1374_TI, offsetof(t1374, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_4;
FieldInfo t1374_f1_FieldInfo = 
{
	"HashSizeValue", &t125_0_0_4, &t1374_TI, offsetof(t1374, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_4;
FieldInfo t1374_f2_FieldInfo = 
{
	"State", &t125_0_0_4, &t1374_TI, offsetof(t1374, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1374_f3_FieldInfo = 
{
	"disposed", &t124_0_0_1, &t1374_TI, offsetof(t1374, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1374_FIs[] =
{
	&t1374_f0_FieldInfo,
	&t1374_f1_FieldInfo,
	&t1374_f2_FieldInfo,
	&t1374_f3_FieldInfo,
	NULL
};
static PropertyInfo t1374____CanReuseTransform_PropertyInfo = 
{
	&t1374_TI, "CanReuseTransform", &m7090_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1374____Hash_PropertyInfo = 
{
	&t1374_TI, "Hash", &m6957_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1374____HashSize_PropertyInfo = 
{
	&t1374_TI, "HashSize", &m6943_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1374_PIs[] =
{
	&t1374____CanReuseTransform_PropertyInfo,
	&t1374____Hash_PropertyInfo,
	&t1374____HashSize_PropertyInfo,
	NULL
};
extern MethodInfo m646_MI;
extern MethodInfo m7091_MI;
static Il2CppMethodReference t1374_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	NULL,
	NULL,
	&m6943_MI,
	NULL,
	&m7091_MI,
};
static bool t1374_VTIGM[] =
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
static const Il2CppType* t1374_ITIs[] = 
{
	&t137_0_0_0,
	&t1431_0_0_0,
};
static Il2CppInterfaceOffsetPair t1374_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t1374_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1374__CustomAttributeCache = {
1,
NULL,
&t1374_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1374_0_0_0;
extern Il2CppType t1374_1_0_0;
extern Il2CppType t9_0_0_0;
struct t1374;
extern CustomAttributesCache t1374__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1374_DM = 
{
	NULL, NULL, t1374_ITIs, t1374_IOs, &t9_0_0_0, t1374_VT, t1374_VTIGM, NULL};
TypeInfo t1374_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HashAlgorithm", "System.Security.Cryptography", t1374_MIs, t1374_PIs, t1374_FIs, NULL, &t1374_TI, NULL, &t1374__CustomAttributeCache, &t1374_0_0_0, &t1374_1_0_0, &t1374_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1374), sizeof (t1374), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 14, 3, 4, 0, 0, 15, 2, 2};
// Metadata Definition System.Security.Cryptography.ICryptoTransform
extern TypeInfo t1431_TI;
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m12025_MI = 
{
	"get_CanReuseTransform", NULL, &t1431_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 4450, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1431_m6999_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223109, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 1, 134223110, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223111, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"outputBuffer", 3, 134223112, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"outputOffset", 4, 134223113, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6999_MI = 
{
	"TransformBlock", NULL, &t1431_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t1431_m6999_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 5, false, false, 4451, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1431_m6968_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223114, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 1, 134223115, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223116, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6968_MI = 
{
	"TransformFinalBlock", NULL, &t1431_TI, &t737_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t1431_m6968_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 3, false, false, 4452, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1431_MIs[] =
{
	&m12025_MI,
	&m6999_MI,
	&m6968_MI,
	NULL
};
extern MethodInfo m12025_MI;
static PropertyInfo t1431____CanReuseTransform_PropertyInfo = 
{
	&t1431_TI, "CanReuseTransform", &m12025_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1431_PIs[] =
{
	&t1431____CanReuseTransform_PropertyInfo,
	NULL
};
static const Il2CppType* t1431_ITIs[] = 
{
	&t137_0_0_0,
};
void t1431_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1431__CustomAttributeCache = {
1,
NULL,
&t1431_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1431_1_0_0;
struct t1431;
extern CustomAttributesCache t1431__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1431_DM = 
{
	NULL, NULL, t1431_ITIs, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1431_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICryptoTransform", "System.Security.Cryptography", t1431_MIs, t1431_PIs, NULL, NULL, &t1431_TI, NULL, &t1431__CustomAttributeCache, &t1431_0_0_0, &t1431_1_0_0, &t1431_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 1, 0, 0, 0, 0, 1, 0};
// Metadata Definition System.Security.Cryptography.ICspAsymmetricAlgorithm
extern TypeInfo t2640_TI;
static MethodInfo* t2640_MIs[] =
{
	NULL
};
void t2640_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	&g_mscorlib_dll_Image, NULL, "ICspAsymmetricAlgorithm", "System.Security.Cryptography", t2640_MIs, NULL, NULL, NULL, &t2640_TI, NULL, &t2640__CustomAttributeCache, &t2640_0_0_0, &t2640_1_0_0, &t2640_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t1535.h"
// Metadata Definition System.Security.Cryptography.KeySizes
extern TypeInfo t1535_TI;
#include "t1535MD.h"
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1535_m6950_ParameterInfos[] = 
{
	{"minSize", 0, 134223117, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"maxSize", 1, 134223118, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"skipSize", 2, 134223119, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6950_MI = 
{
	".ctor", (methodPointerType)&m6950, &t1535_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t125_t125, t1535_m6950_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4453, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10484_MI = 
{
	"get_MaxSize", (methodPointerType)&m10484, &t1535_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4454, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10485_MI = 
{
	"get_MinSize", (methodPointerType)&m10485, &t1535_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4455, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10486_MI = 
{
	"get_SkipSize", (methodPointerType)&m10486, &t1535_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4456, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1535_m10487_ParameterInfos[] = 
{
	{"keySize", 0, 134223120, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10487_MI = 
{
	"IsLegal", (methodPointerType)&m10487, &t1535_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t1535_m10487_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4457, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1439_0_0_0;
extern Il2CppType t1439_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1535_m10488_ParameterInfos[] = 
{
	{"legalKeys", 0, 134223121, &EmptyCustomAttributesCache, &t1439_0_0_0},
	{"size", 1, 134223122, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10488_MI = 
{
	"IsLegalKeySize", (methodPointerType)&m10488, &t1535_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t125, t1535_m10488_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4458, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1535_MIs[] =
{
	&m6950_MI,
	&m10484_MI,
	&m10485_MI,
	&m10486_MI,
	&m10487_MI,
	&m10488_MI,
	NULL
};
extern Il2CppType t125_0_0_1;
FieldInfo t1535_f0_FieldInfo = 
{
	"_maxSize", &t125_0_0_1, &t1535_TI, offsetof(t1535, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1535_f1_FieldInfo = 
{
	"_minSize", &t125_0_0_1, &t1535_TI, offsetof(t1535, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1535_f2_FieldInfo = 
{
	"_skipSize", &t125_0_0_1, &t1535_TI, offsetof(t1535, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1535_FIs[] =
{
	&t1535_f0_FieldInfo,
	&t1535_f1_FieldInfo,
	&t1535_f2_FieldInfo,
	NULL
};
extern MethodInfo m10484_MI;
static PropertyInfo t1535____MaxSize_PropertyInfo = 
{
	&t1535_TI, "MaxSize", &m10484_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10485_MI;
static PropertyInfo t1535____MinSize_PropertyInfo = 
{
	&t1535_TI, "MinSize", &m10485_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10486_MI;
static PropertyInfo t1535____SkipSize_PropertyInfo = 
{
	&t1535_TI, "SkipSize", &m10486_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1535_PIs[] =
{
	&t1535____MaxSize_PropertyInfo,
	&t1535____MinSize_PropertyInfo,
	&t1535____SkipSize_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1535_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1535_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1535_0_0_0;
extern Il2CppType t1535_1_0_0;
struct t1535;
const Il2CppTypeDefinitionMetadata t1535_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1535_VT, t1535_VTIGM, NULL};
TypeInfo t1535_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeySizes", "System.Security.Cryptography", t1535_MIs, t1535_PIs, t1535_FIs, NULL, &t1535_TI, NULL, &EmptyCustomAttributesCache, &t1535_0_0_0, &t1535_1_0_0, &t1535_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1535), sizeof (t1535), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 3, 3, 0, 0, 4, 0, 0};
#include "t1456.h"
// Metadata Definition System.Security.Cryptography.KeyedHashAlgorithm
extern TypeInfo t1456_TI;
#include "t1456MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6997_MI = 
{
	".ctor", (methodPointerType)&m6997, &t1456_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4459, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7096_MI = 
{
	"Finalize", (methodPointerType)&m7096, &t1456_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4460, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10489_MI = 
{
	"get_Key", (methodPointerType)&m10489, &t1456_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 15, 0, false, false, 4461, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1456_m10490_ParameterInfos[] = 
{
	{"value", 0, 134223123, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10490_MI = 
{
	"set_Key", (methodPointerType)&m10490, &t1456_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1456_m10490_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 16, 1, false, false, 4462, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1456_m7097_ParameterInfos[] = 
{
	{"disposing", 0, 134223124, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m7097_MI = 
{
	"Dispose", (methodPointerType)&m7097, &t1456_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1456_m7097_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 14, 1, false, false, 4463, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10491_MI = 
{
	"ZeroizeKey", (methodPointerType)&m10491, &t1456_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4464, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1456_MIs[] =
{
	&m6997_MI,
	&m7096_MI,
	&m10489_MI,
	&m10490_MI,
	&m7097_MI,
	&m10491_MI,
	NULL
};
extern Il2CppType t737_0_0_4;
FieldInfo t1456_f4_FieldInfo = 
{
	"KeyValue", &t737_0_0_4, &t1456_TI, offsetof(t1456, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1456_FIs[] =
{
	&t1456_f4_FieldInfo,
	NULL
};
extern MethodInfo m10489_MI;
extern MethodInfo m10490_MI;
static PropertyInfo t1456____Key_PropertyInfo = 
{
	&t1456_TI, "Key", &m10489_MI, &m10490_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1456_PIs[] =
{
	&t1456____Key_PropertyInfo,
	NULL
};
extern MethodInfo m7097_MI;
static Il2CppMethodReference t1456_VT[] =
{
	&m671_MI,
	&m7096_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	NULL,
	NULL,
	&m6943_MI,
	NULL,
	&m7097_MI,
	&m10489_MI,
	&m10490_MI,
};
static bool t1456_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1456_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t1456_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1456__CustomAttributeCache = {
1,
NULL,
&t1456_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1456_0_0_0;
extern Il2CppType t1456_1_0_0;
struct t1456;
extern CustomAttributesCache t1456__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1456_DM = 
{
	NULL, NULL, NULL, t1456_IOs, &t1374_0_0_0, t1456_VT, t1456_VTIGM, NULL};
TypeInfo t1456_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyedHashAlgorithm", "System.Security.Cryptography", t1456_MIs, t1456_PIs, t1456_FIs, NULL, &t1456_TI, NULL, &t1456__CustomAttributeCache, &t1456_0_0_0, &t1456_1_0_0, &t1456_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1456), sizeof (t1456), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 1, 1, 0, 0, 17, 0, 2};
#include "t1996.h"
// Metadata Definition System.Security.Cryptography.MACTripleDES
extern TypeInfo t1996_TI;
#include "t1996MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10492_MI = 
{
	".ctor", (methodPointerType)&m10492, &t1996_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4465, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1996_m10493_ParameterInfos[] = 
{
	{"strTripleDES", 0, 134223125, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"rgbKey", 1, 134223126, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10493_MI = 
{
	"Setup", (methodPointerType)&m10493, &t1996_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1996_m10493_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4466, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10494_MI = 
{
	"Finalize", (methodPointerType)&m10494, &t1996_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4467, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1996_m10495_ParameterInfos[] = 
{
	{"disposing", 0, 134223127, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10495_MI = 
{
	"Dispose", (methodPointerType)&m10495, &t1996_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1996_m10495_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 14, 1, false, false, 4468, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10496_MI = 
{
	"Initialize", (methodPointerType)&m10496, &t1996_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4469, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1996_m10497_ParameterInfos[] = 
{
	{"rgbData", 0, 134223128, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ibStart", 1, 134223129, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223130, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10497_MI = 
{
	"HashCore", (methodPointerType)&m10497, &t1996_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1996_m10497_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4470, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10498_MI = 
{
	"HashFinal", (methodPointerType)&m10498, &t1996_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4471, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1996_MIs[] =
{
	&m10492_MI,
	&m10493_MI,
	&m10494_MI,
	&m10495_MI,
	&m10496_MI,
	&m10497_MI,
	&m10498_MI,
	NULL
};
extern Il2CppType t1548_0_0_1;
FieldInfo t1996_f5_FieldInfo = 
{
	"tdes", &t1548_0_0_1, &t1996_TI, offsetof(t1996, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1641_0_0_1;
FieldInfo t1996_f6_FieldInfo = 
{
	"mac", &t1641_0_0_1, &t1996_TI, offsetof(t1996, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1996_f7_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t1996_TI, offsetof(t1996, f7), &EmptyCustomAttributesCache};
static FieldInfo* t1996_FIs[] =
{
	&t1996_f5_FieldInfo,
	&t1996_f6_FieldInfo,
	&t1996_f7_FieldInfo,
	NULL
};
extern MethodInfo m10494_MI;
extern MethodInfo m10497_MI;
extern MethodInfo m10498_MI;
extern MethodInfo m10496_MI;
extern MethodInfo m10495_MI;
static Il2CppMethodReference t1996_VT[] =
{
	&m671_MI,
	&m10494_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	&m10497_MI,
	&m10498_MI,
	&m6943_MI,
	&m10496_MI,
	&m10495_MI,
	&m10489_MI,
	&m10490_MI,
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
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1996_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t1996_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t1996_IOs, &t1456_0_0_0, t1996_VT, t1996_VTIGM, NULL};
TypeInfo t1996_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MACTripleDES", "System.Security.Cryptography", t1996_MIs, NULL, t1996_FIs, NULL, &t1996_TI, NULL, &t1996__CustomAttributeCache, &t1996_0_0_0, &t1996_1_0_0, &t1996_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1996), sizeof (t1996), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 7, 0, 3, 0, 0, 17, 0, 2};
#include "t1539.h"
// Metadata Definition System.Security.Cryptography.MD5
extern TypeInfo t1539_TI;
#include "t1539MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10499_MI = 
{
	".ctor", (methodPointerType)&m10499, &t1539_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4472, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1539_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6974_MI = 
{
	"Create", (methodPointerType)&m6974, &t1539_TI, &t1539_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4473, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1539_m10500_ParameterInfos[] = 
{
	{"algName", 0, 134223131, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1539_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10500_MI = 
{
	"Create", (methodPointerType)&m10500, &t1539_TI, &t1539_0_0_0, RuntimeInvoker_t9_t9, t1539_m10500_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4474, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1539_MIs[] =
{
	&m10499_MI,
	&m6974_MI,
	&m10500_MI,
	NULL
};
static Il2CppMethodReference t1539_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	NULL,
	NULL,
	&m6943_MI,
	NULL,
	&m7091_MI,
};
static bool t1539_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1539_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t1539_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1539__CustomAttributeCache = {
1,
NULL,
&t1539_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1539_0_0_0;
extern Il2CppType t1539_1_0_0;
struct t1539;
extern CustomAttributesCache t1539__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1539_DM = 
{
	NULL, NULL, NULL, t1539_IOs, &t1374_0_0_0, t1539_VT, t1539_VTIGM, NULL};
TypeInfo t1539_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MD5", "System.Security.Cryptography", t1539_MIs, NULL, NULL, NULL, &t1539_TI, NULL, &t1539__CustomAttributeCache, &t1539_0_0_0, &t1539_1_0_0, &t1539_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1539), sizeof (t1539), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 15, 0, 2};
#include "t1997.h"
// Metadata Definition System.Security.Cryptography.MD5CryptoServiceProvider
extern TypeInfo t1997_TI;
#include "t1997MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10501_MI = 
{
	".ctor", (methodPointerType)&m10501, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4475, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10502_MI = 
{
	".cctor", (methodPointerType)&m10502, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4476, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10503_MI = 
{
	"Finalize", (methodPointerType)&m10503, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4477, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1997_m10504_ParameterInfos[] = 
{
	{"disposing", 0, 134223132, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10504_MI = 
{
	"Dispose", (methodPointerType)&m10504, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1997_m10504_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 14, 1, false, false, 4478, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1997_m10505_ParameterInfos[] = 
{
	{"rgb", 0, 134223133, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ibStart", 1, 134223134, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223135, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10505_MI = 
{
	"HashCore", (methodPointerType)&m10505, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1997_m10505_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4479, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10506_MI = 
{
	"HashFinal", (methodPointerType)&m10506, &t1997_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4480, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10507_MI = 
{
	"Initialize", (methodPointerType)&m10507, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4481, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1997_m10508_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223136, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 1, 134223137, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10508_MI = 
{
	"ProcessBlock", (methodPointerType)&m10508, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1997_m10508_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4482, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1997_m10509_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223138, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 1, 134223139, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223140, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10509_MI = 
{
	"ProcessFinalBlock", (methodPointerType)&m10509, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1997_m10509_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4483, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
extern Il2CppType t896_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1997_m10510_ParameterInfos[] = 
{
	{"length", 0, 134223141, &EmptyCustomAttributesCache, &t896_0_0_0},
	{"buffer", 1, 134223142, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"position", 2, 134223143, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10510_MI = 
{
	"AddLength", (methodPointerType)&m10510, &t1997_TI, &t122_0_0_0, RuntimeInvoker_t122_t303_t9_t125, t1997_m10510_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 3, false, false, 4484, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1997_MIs[] =
{
	&m10501_MI,
	&m10502_MI,
	&m10503_MI,
	&m10504_MI,
	&m10505_MI,
	&m10506_MI,
	&m10507_MI,
	&m10508_MI,
	&m10509_MI,
	&m10510_MI,
	NULL
};
extern Il2CppType t1418_0_0_1;
FieldInfo t1997_f4_FieldInfo = 
{
	"_H", &t1418_0_0_1, &t1997_TI, offsetof(t1997, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_1;
FieldInfo t1997_f5_FieldInfo = 
{
	"buff", &t1418_0_0_1, &t1997_TI, offsetof(t1997, f5), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t1997_f6_FieldInfo = 
{
	"count", &t896_0_0_1, &t1997_TI, offsetof(t1997, f6), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t1997_f7_FieldInfo = 
{
	"_ProcessingBuffer", &t737_0_0_1, &t1997_TI, offsetof(t1997, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1997_f8_FieldInfo = 
{
	"_ProcessingBufferCount", &t125_0_0_1, &t1997_TI, offsetof(t1997, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_49;
FieldInfo t1997_f9_FieldInfo = 
{
	"K", &t1418_0_0_49, &t1997_TI, offsetof(t1997_SFs, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1997_FIs[] =
{
	&t1997_f4_FieldInfo,
	&t1997_f5_FieldInfo,
	&t1997_f6_FieldInfo,
	&t1997_f7_FieldInfo,
	&t1997_f8_FieldInfo,
	&t1997_f9_FieldInfo,
	NULL
};
extern MethodInfo m10503_MI;
extern MethodInfo m10505_MI;
extern MethodInfo m10506_MI;
extern MethodInfo m10507_MI;
extern MethodInfo m10504_MI;
static Il2CppMethodReference t1997_VT[] =
{
	&m671_MI,
	&m10503_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	&m10505_MI,
	&m10506_MI,
	&m6943_MI,
	&m10507_MI,
	&m10504_MI,
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
	{ &t1431_0_0_0, 5},
};
void t1997_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t1997_IOs, &t1539_0_0_0, t1997_VT, t1997_VTIGM, NULL};
TypeInfo t1997_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MD5CryptoServiceProvider", "System.Security.Cryptography", t1997_MIs, NULL, t1997_FIs, NULL, &t1997_TI, NULL, &t1997__CustomAttributeCache, &t1997_0_0_0, &t1997_1_0_0, &t1997_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1997), sizeof (t1997), 0, -1, sizeof(t1997_SFs), 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, true, false, 10, 0, 6, 0, 0, 15, 0, 2};
#include "t1550.h"
// Metadata Definition System.Security.Cryptography.PaddingMode
extern TypeInfo t1550_TI;
#include "t1550MD.h"
static MethodInfo* t1550_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1550_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1550_TI, offsetof(t1550, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1550_0_0_32854;
FieldInfo t1550_f2_FieldInfo = 
{
	"None", &t1550_0_0_32854, &t1550_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1550_0_0_32854;
FieldInfo t1550_f3_FieldInfo = 
{
	"PKCS7", &t1550_0_0_32854, &t1550_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1550_0_0_32854;
FieldInfo t1550_f4_FieldInfo = 
{
	"Zeros", &t1550_0_0_32854, &t1550_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1550_0_0_32854;
FieldInfo t1550_f5_FieldInfo = 
{
	"ANSIX923", &t1550_0_0_32854, &t1550_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1550_0_0_32854;
FieldInfo t1550_f6_FieldInfo = 
{
	"ISO10126", &t1550_0_0_32854, &t1550_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1550_FIs[] =
{
	&t1550_f1_FieldInfo,
	&t1550_f2_FieldInfo,
	&t1550_f3_FieldInfo,
	&t1550_f4_FieldInfo,
	&t1550_f5_FieldInfo,
	&t1550_f6_FieldInfo,
	NULL
};
static const int32_t t1550_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1550_f2_DefaultValue = 
{
	&t1550_f2_FieldInfo, { (char*)&t1550_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1550_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1550_f3_DefaultValue = 
{
	&t1550_f3_FieldInfo, { (char*)&t1550_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1550_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1550_f4_DefaultValue = 
{
	&t1550_f4_FieldInfo, { (char*)&t1550_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1550_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1550_f5_DefaultValue = 
{
	&t1550_f5_FieldInfo, { (char*)&t1550_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1550_f6_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1550_f6_DefaultValue = 
{
	&t1550_f6_FieldInfo, { (char*)&t1550_f6_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1550_FDVs[] = 
{
	&t1550_f2_DefaultValue,
	&t1550_f3_DefaultValue,
	&t1550_f4_DefaultValue,
	&t1550_f5_DefaultValue,
	&t1550_f6_DefaultValue,
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
static Il2CppMethodReference t1550_VT[] =
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
static bool t1550_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1550_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1550_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
extern Il2CppType t8_0_0_0;
#include "t125.h"
extern TypeInfo t125_TI;
extern CustomAttributesCache t1550__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1550_DM = 
{
	NULL, NULL, NULL, t1550_IOs, &t8_0_0_0, t1550_VT, t1550_VTIGM, NULL};
TypeInfo t1550_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PaddingMode", "System.Security.Cryptography", t1550_MIs, NULL, t1550_FIs, NULL, &t125_TI, NULL, &t1550__CustomAttributeCache, &t1550_0_0_0, &t1550_1_0_0, &t1550_DM, NULL, NULL, NULL, t1550_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1550)+ sizeof (Il2CppObject), sizeof (t1550)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1547.h"
// Metadata Definition System.Security.Cryptography.RC2
extern TypeInfo t1547_TI;
#include "t1547MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10511_MI = 
{
	".ctor", (methodPointerType)&m10511, &t1547_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4485, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1547_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7001_MI = 
{
	"Create", (methodPointerType)&m7001, &t1547_TI, &t1547_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4486, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1547_m10512_ParameterInfos[] = 
{
	{"AlgName", 0, 134223144, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1547_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10512_MI = 
{
	"Create", (methodPointerType)&m10512, &t1547_TI, &t1547_0_0_0, RuntimeInvoker_t9_t9, t1547_m10512_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4487, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10513_MI = 
{
	"get_EffectiveKeySize", (methodPointerType)&m10513, &t1547_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 26, 0, false, false, 4488, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10514_MI = 
{
	"get_KeySize", (methodPointerType)&m10514, &t1547_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 13, 0, false, false, 4489, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1547_m10515_ParameterInfos[] = 
{
	{"value", 0, 134223145, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10515_MI = 
{
	"set_KeySize", (methodPointerType)&m10515, &t1547_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1547_m10515_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 14, 1, false, false, 4490, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1547_MIs[] =
{
	&m10511_MI,
	&m7001_MI,
	&m10512_MI,
	&m10513_MI,
	&m10514_MI,
	&m10515_MI,
	NULL
};
extern Il2CppType t125_0_0_4;
FieldInfo t1547_f10_FieldInfo = 
{
	"EffectiveKeySizeValue", &t125_0_0_4, &t1547_TI, offsetof(t1547, f10), &EmptyCustomAttributesCache};
static FieldInfo* t1547_FIs[] =
{
	&t1547_f10_FieldInfo,
	NULL
};
extern MethodInfo m10513_MI;
static PropertyInfo t1547____EffectiveKeySize_PropertyInfo = 
{
	&t1547_TI, "EffectiveKeySize", &m10513_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10514_MI;
extern MethodInfo m10515_MI;
static PropertyInfo t1547____KeySize_PropertyInfo = 
{
	&t1547_TI, "KeySize", &m10514_MI, &m10515_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1547_PIs[] =
{
	&t1547____EffectiveKeySize_PropertyInfo,
	&t1547____KeySize_PropertyInfo,
	NULL
};
extern MethodInfo m6936_MI;
extern MethodInfo m7082_MI;
extern MethodInfo m7092_MI;
extern MethodInfo m7083_MI;
extern MethodInfo m7006_MI;
extern MethodInfo m7084_MI;
extern MethodInfo m10675_MI;
extern MethodInfo m6965_MI;
extern MethodInfo m7093_MI;
extern MethodInfo m6964_MI;
extern MethodInfo m7086_MI;
extern MethodInfo m7087_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m7088_MI;
extern MethodInfo m7004_MI;
extern MethodInfo m6967_MI;
extern MethodInfo m6938_MI;
static Il2CppMethodReference t1547_VT[] =
{
	&m671_MI,
	&m6936_MI,
	&m672_MI,
	&m673_MI,
	&m7082_MI,
	&m7092_MI,
	&m7083_MI,
	&m7006_MI,
	&m7084_MI,
	&m10675_MI,
	&m6965_MI,
	&m7093_MI,
	&m6964_MI,
	&m10514_MI,
	&m10515_MI,
	&m7086_MI,
	&m7087_MI,
	&m6966_MI,
	&m7088_MI,
	&m7004_MI,
	&m6967_MI,
	NULL,
	&m6938_MI,
	NULL,
	NULL,
	NULL,
	&m10513_MI,
};
static bool t1547_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1547_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1547_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1547__CustomAttributeCache = {
1,
NULL,
&t1547_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1547_0_0_0;
extern Il2CppType t1547_1_0_0;
extern Il2CppType t1440_0_0_0;
struct t1547;
extern CustomAttributesCache t1547__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1547_DM = 
{
	NULL, NULL, NULL, t1547_IOs, &t1440_0_0_0, t1547_VT, t1547_VTIGM, NULL};
TypeInfo t1547_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RC2", "System.Security.Cryptography", t1547_MIs, t1547_PIs, t1547_FIs, NULL, &t1547_TI, NULL, &t1547__CustomAttributeCache, &t1547_0_0_0, &t1547_1_0_0, &t1547_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1547), sizeof (t1547), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 2, 1, 0, 0, 27, 0, 1};
#include "t1998.h"
// Metadata Definition System.Security.Cryptography.RC2CryptoServiceProvider
extern TypeInfo t1998_TI;
#include "t1998MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10516_MI = 
{
	".ctor", (methodPointerType)&m10516, &t1998_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4491, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10517_MI = 
{
	"get_EffectiveKeySize", (methodPointerType)&m10517, &t1998_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 26, 0, false, false, 4492, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1998_m10518_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223146, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"rgbIV", 1, 134223147, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t1431_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10518_MI = 
{
	"CreateDecryptor", (methodPointerType)&m10518, &t1998_TI, &t1431_0_0_0, RuntimeInvoker_t9_t9_t9, t1998_m10518_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 21, 2, false, false, 4493, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1998_m10519_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223148, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"rgbIV", 1, 134223149, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t1431_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10519_MI = 
{
	"CreateEncryptor", (methodPointerType)&m10519, &t1998_TI, &t1431_0_0_0, RuntimeInvoker_t9_t9_t9, t1998_m10519_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 2, false, false, 4494, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10520_MI = 
{
	"GenerateIV", (methodPointerType)&m10520, &t1998_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 24, 0, false, false, 4495, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10521_MI = 
{
	"GenerateKey", (methodPointerType)&m10521, &t1998_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 25, 0, false, false, 4496, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1998_MIs[] =
{
	&m10516_MI,
	&m10517_MI,
	&m10518_MI,
	&m10519_MI,
	&m10520_MI,
	&m10521_MI,
	NULL
};
extern MethodInfo m10517_MI;
static PropertyInfo t1998____EffectiveKeySize_PropertyInfo = 
{
	&t1998_TI, "EffectiveKeySize", &m10517_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1998_PIs[] =
{
	&t1998____EffectiveKeySize_PropertyInfo,
	NULL
};
extern MethodInfo m10518_MI;
extern MethodInfo m10519_MI;
extern MethodInfo m10520_MI;
extern MethodInfo m10521_MI;
static Il2CppMethodReference t1998_VT[] =
{
	&m671_MI,
	&m6936_MI,
	&m672_MI,
	&m673_MI,
	&m7082_MI,
	&m7092_MI,
	&m7083_MI,
	&m7006_MI,
	&m7084_MI,
	&m10675_MI,
	&m6965_MI,
	&m7093_MI,
	&m6964_MI,
	&m10514_MI,
	&m10515_MI,
	&m7086_MI,
	&m7087_MI,
	&m6966_MI,
	&m7088_MI,
	&m7004_MI,
	&m6967_MI,
	&m10518_MI,
	&m6938_MI,
	&m10519_MI,
	&m10520_MI,
	&m10521_MI,
	&m10517_MI,
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
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t1998_IOs, &t1547_0_0_0, t1998_VT, t1998_VTIGM, NULL};
TypeInfo t1998_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RC2CryptoServiceProvider", "System.Security.Cryptography", t1998_MIs, t1998_PIs, NULL, NULL, &t1998_TI, NULL, &t1998__CustomAttributeCache, &t1998_0_0_0, &t1998_1_0_0, &t1998_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1998), sizeof (t1998), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 1, 0, 0, 0, 27, 0, 1};
#include "t1999.h"
// Metadata Definition System.Security.Cryptography.RC2Transform
extern TypeInfo t1999_TI;
#include "t1999MD.h"
extern Il2CppType t1547_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1999_m10522_ParameterInfos[] = 
{
	{"rc2Algo", 0, 134223150, &EmptyCustomAttributesCache, &t1547_0_0_0},
	{"encryption", 1, 134223151, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"key", 2, 134223152, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"iv", 3, 134223153, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10522_MI = 
{
	".ctor", (methodPointerType)&m10522, &t1999_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t9_t9, t1999_m10522_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 4497, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10523_MI = 
{
	".cctor", (methodPointerType)&m10523, &t1999_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4498, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1999_m10524_ParameterInfos[] = 
{
	{"input", 0, 134223154, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"output", 1, 134223155, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10524_MI = 
{
	"ECB", (methodPointerType)&m10524, &t1999_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1999_m10524_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 2, false, false, 4499, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1999_MIs[] =
{
	&m10522_MI,
	&m10523_MI,
	&m10524_MI,
	NULL
};
extern Il2CppType t315_0_0_1;
FieldInfo t1999_f12_FieldInfo = 
{
	"R0", &t315_0_0_1, &t1999_TI, offsetof(t1999, f12), &EmptyCustomAttributesCache};
extern Il2CppType t315_0_0_1;
FieldInfo t1999_f13_FieldInfo = 
{
	"R1", &t315_0_0_1, &t1999_TI, offsetof(t1999, f13), &EmptyCustomAttributesCache};
extern Il2CppType t315_0_0_1;
FieldInfo t1999_f14_FieldInfo = 
{
	"R2", &t315_0_0_1, &t1999_TI, offsetof(t1999, f14), &EmptyCustomAttributesCache};
extern Il2CppType t315_0_0_1;
FieldInfo t1999_f15_FieldInfo = 
{
	"R3", &t315_0_0_1, &t1999_TI, offsetof(t1999, f15), &EmptyCustomAttributesCache};
extern Il2CppType t317_0_0_1;
FieldInfo t1999_f16_FieldInfo = 
{
	"K", &t317_0_0_1, &t1999_TI, offsetof(t1999, f16), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1999_f17_FieldInfo = 
{
	"j", &t125_0_0_1, &t1999_TI, offsetof(t1999, f17), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_49;
FieldInfo t1999_f18_FieldInfo = 
{
	"pitable", &t737_0_0_49, &t1999_TI, offsetof(t1999_SFs, f18), &EmptyCustomAttributesCache};
static FieldInfo* t1999_FIs[] =
{
	&t1999_f12_FieldInfo,
	&t1999_f13_FieldInfo,
	&t1999_f14_FieldInfo,
	&t1999_f15_FieldInfo,
	&t1999_f16_FieldInfo,
	&t1999_f17_FieldInfo,
	&t1999_f18_FieldInfo,
	NULL
};
extern MethodInfo m8210_MI;
extern MethodInfo m8209_MI;
extern MethodInfo m8212_MI;
extern MethodInfo m8219_MI;
extern MethodInfo m8226_MI;
extern MethodInfo m8211_MI;
extern MethodInfo m8213_MI;
extern MethodInfo m10524_MI;
extern MethodInfo m8214_MI;
extern MethodInfo m8215_MI;
extern MethodInfo m8216_MI;
extern MethodInfo m8217_MI;
static Il2CppMethodReference t1999_VT[] =
{
	&m671_MI,
	&m8210_MI,
	&m672_MI,
	&m673_MI,
	&m8209_MI,
	&m8212_MI,
	&m8219_MI,
	&m8226_MI,
	&m8211_MI,
	&m8212_MI,
	&m8213_MI,
	&m10524_MI,
	&m8214_MI,
	&m8215_MI,
	&m8216_MI,
	&m8217_MI,
	&m8219_MI,
	&m8226_MI,
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
	{ &t1431_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1999_0_0_0;
extern Il2CppType t1999_1_0_0;
extern Il2CppType t1648_0_0_0;
struct t1999;
const Il2CppTypeDefinitionMetadata t1999_DM = 
{
	NULL, NULL, NULL, t1999_IOs, &t1648_0_0_0, t1999_VT, t1999_VTIGM, NULL};
TypeInfo t1999_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RC2Transform", "System.Security.Cryptography", t1999_MIs, NULL, t1999_FIs, NULL, &t1999_TI, NULL, &EmptyCustomAttributesCache, &t1999_0_0_0, &t1999_1_0_0, &t1999_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1999), sizeof (t1999), 0, -1, sizeof(t1999_SFs), 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, true, true, false, 3, 0, 7, 0, 0, 18, 0, 2};
#include "t2000.h"
// Metadata Definition System.Security.Cryptography.RIPEMD160
extern TypeInfo t2000_TI;
#include "t2000MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10525_MI = 
{
	".ctor", (methodPointerType)&m10525, &t2000_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4500, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2000_MIs[] =
{
	&m10525_MI,
	NULL
};
static Il2CppMethodReference t2000_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	NULL,
	NULL,
	&m6943_MI,
	NULL,
	&m7091_MI,
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
	{ &t1431_0_0_0, 5},
};
void t2000_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t2000_IOs, &t1374_0_0_0, t2000_VT, t2000_VTIGM, NULL};
TypeInfo t2000_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RIPEMD160", "System.Security.Cryptography", t2000_MIs, NULL, NULL, NULL, &t2000_TI, NULL, &t2000__CustomAttributeCache, &t2000_0_0_0, &t2000_1_0_0, &t2000_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2000), sizeof (t2000), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 15, 0, 2};
#include "t2001.h"
// Metadata Definition System.Security.Cryptography.RIPEMD160Managed
extern TypeInfo t2001_TI;
#include "t2001MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10526_MI = 
{
	".ctor", (methodPointerType)&m10526, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4501, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10527_MI = 
{
	"Initialize", (methodPointerType)&m10527, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4502, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2001_m10528_ParameterInfos[] = 
{
	{"rgb", 0, 134223156, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ibStart", 1, 134223157, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223158, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10528_MI = 
{
	"HashCore", (methodPointerType)&m10528, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2001_m10528_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4503, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10529_MI = 
{
	"HashFinal", (methodPointerType)&m10529, &t2001_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4504, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10530_MI = 
{
	"Finalize", (methodPointerType)&m10530, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4505, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2001_m10531_ParameterInfos[] = 
{
	{"buffer", 0, 134223159, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134223160, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10531_MI = 
{
	"ProcessBlock", (methodPointerType)&m10531, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t2001_m10531_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4506, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10532_MI = 
{
	"Compress", (methodPointerType)&m10532, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4507, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
static ParameterInfo t2001_m10533_ParameterInfos[] = 
{
	{"length", 0, 134223161, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10533_MI = 
{
	"CompressFinal", (methodPointerType)&m10533, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t303, t2001_m10533_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4508, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2001_m10534_ParameterInfos[] = 
{
	{"x", 0, 134223162, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"n", 1, 134223163, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10534_MI = 
{
	"ROL", (methodPointerType)&m10534, &t2001_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125, t2001_m10534_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4509, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t2001_m10535_ParameterInfos[] = 
{
	{"x", 0, 134223164, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"y", 1, 134223165, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"z", 2, 134223166, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10535_MI = 
{
	"F", (methodPointerType)&m10535, &t2001_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125_t125, t2001_m10535_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4510, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t2001_m10536_ParameterInfos[] = 
{
	{"x", 0, 134223167, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"y", 1, 134223168, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"z", 2, 134223169, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10536_MI = 
{
	"G", (methodPointerType)&m10536, &t2001_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125_t125, t2001_m10536_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4511, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t2001_m10537_ParameterInfos[] = 
{
	{"x", 0, 134223170, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"y", 1, 134223171, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"z", 2, 134223172, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10537_MI = 
{
	"H", (methodPointerType)&m10537, &t2001_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125_t125, t2001_m10537_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4512, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t2001_m10538_ParameterInfos[] = 
{
	{"x", 0, 134223173, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"y", 1, 134223174, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"z", 2, 134223175, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10538_MI = 
{
	"I", (methodPointerType)&m10538, &t2001_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125_t125, t2001_m10538_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4513, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t2001_m10539_ParameterInfos[] = 
{
	{"x", 0, 134223176, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"y", 1, 134223177, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"z", 2, 134223178, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10539_MI = 
{
	"J", (methodPointerType)&m10539, &t2001_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125_t125, t2001_m10539_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4514, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2001_m10540_ParameterInfos[] = 
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
extern void* RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10540_MI = 
{
	"FF", (methodPointerType)&m10540, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125, t2001_m10540_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4515, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2001_m10541_ParameterInfos[] = 
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
extern void* RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10541_MI = 
{
	"GG", (methodPointerType)&m10541, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125, t2001_m10541_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4516, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2001_m10542_ParameterInfos[] = 
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
extern void* RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10542_MI = 
{
	"HH", (methodPointerType)&m10542, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125, t2001_m10542_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4517, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2001_m10543_ParameterInfos[] = 
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
extern void* RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10543_MI = 
{
	"II", (methodPointerType)&m10543, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125, t2001_m10543_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4518, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2001_m10544_ParameterInfos[] = 
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
extern void* RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10544_MI = 
{
	"JJ", (methodPointerType)&m10544, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125, t2001_m10544_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4519, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2001_m10545_ParameterInfos[] = 
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
extern void* RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10545_MI = 
{
	"FFF", (methodPointerType)&m10545, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125, t2001_m10545_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4520, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2001_m10546_ParameterInfos[] = 
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
extern void* RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10546_MI = 
{
	"GGG", (methodPointerType)&m10546, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125, t2001_m10546_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4521, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2001_m10547_ParameterInfos[] = 
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
extern void* RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10547_MI = 
{
	"HHH", (methodPointerType)&m10547, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125, t2001_m10547_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4522, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2001_m10548_ParameterInfos[] = 
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
extern void* RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10548_MI = 
{
	"III", (methodPointerType)&m10548, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125, t2001_m10548_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4523, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2001_m10549_ParameterInfos[] = 
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
extern void* RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10549_MI = 
{
	"JJJ", (methodPointerType)&m10549, &t2001_TI, &t122_0_0_0, RuntimeInvoker_t122_t2218_t125_t2218_t125_t125_t125_t125, t2001_m10549_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4524, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2001_MIs[] =
{
	&m10526_MI,
	&m10527_MI,
	&m10528_MI,
	&m10529_MI,
	&m10530_MI,
	&m10531_MI,
	&m10532_MI,
	&m10533_MI,
	&m10534_MI,
	&m10535_MI,
	&m10536_MI,
	&m10537_MI,
	&m10538_MI,
	&m10539_MI,
	&m10540_MI,
	&m10541_MI,
	&m10542_MI,
	&m10543_MI,
	&m10544_MI,
	&m10545_MI,
	&m10546_MI,
	&m10547_MI,
	&m10548_MI,
	&m10549_MI,
	NULL
};
extern Il2CppType t737_0_0_1;
FieldInfo t2001_f4_FieldInfo = 
{
	"_ProcessingBuffer", &t737_0_0_1, &t2001_TI, offsetof(t2001, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_1;
FieldInfo t2001_f5_FieldInfo = 
{
	"_X", &t1418_0_0_1, &t2001_TI, offsetof(t2001, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_1;
FieldInfo t2001_f6_FieldInfo = 
{
	"_HashValue", &t1418_0_0_1, &t2001_TI, offsetof(t2001, f6), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2001_f7_FieldInfo = 
{
	"_Length", &t896_0_0_1, &t2001_TI, offsetof(t2001, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2001_f8_FieldInfo = 
{
	"_ProcessingBufferCount", &t125_0_0_1, &t2001_TI, offsetof(t2001, f8), &EmptyCustomAttributesCache};
static FieldInfo* t2001_FIs[] =
{
	&t2001_f4_FieldInfo,
	&t2001_f5_FieldInfo,
	&t2001_f6_FieldInfo,
	&t2001_f7_FieldInfo,
	&t2001_f8_FieldInfo,
	NULL
};
extern MethodInfo m10530_MI;
extern MethodInfo m10528_MI;
extern MethodInfo m10529_MI;
extern MethodInfo m10527_MI;
static Il2CppMethodReference t2001_VT[] =
{
	&m671_MI,
	&m10530_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	&m10528_MI,
	&m10529_MI,
	&m6943_MI,
	&m10527_MI,
	&m7091_MI,
};
static bool t2001_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2001_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t2001_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2001__CustomAttributeCache = {
1,
NULL,
&t2001_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2001_0_0_0;
extern Il2CppType t2001_1_0_0;
struct t2001;
extern CustomAttributesCache t2001__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2001_DM = 
{
	NULL, NULL, NULL, t2001_IOs, &t2000_0_0_0, t2001_VT, t2001_VTIGM, NULL};
TypeInfo t2001_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RIPEMD160Managed", "System.Security.Cryptography", t2001_MIs, NULL, t2001_FIs, NULL, &t2001_TI, NULL, &t2001__CustomAttributeCache, &t2001_0_0_0, &t2001_1_0_0, &t2001_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2001), sizeof (t2001), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 24, 0, 5, 0, 0, 15, 0, 2};
#include "t2002.h"
// Metadata Definition System.Security.Cryptography.RNGCryptoServiceProvider
extern TypeInfo t2002_TI;
#include "t2002MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10550_MI = 
{
	".ctor", (methodPointerType)&m10550, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4525, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10551_MI = 
{
	".cctor", (methodPointerType)&m10551, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4526, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10552_MI = 
{
	"Check", (methodPointerType)&m10552, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4527, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10553_MI = 
{
	"RngOpen", (methodPointerType)&m10553, &t2002_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 145, 4096, 255, 0, false, false, 4528, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t2002_m10554_ParameterInfos[] = 
{
	{"seed", 0, 134223249, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10554_MI = 
{
	"RngInitialize", (methodPointerType)&m10554, &t2002_TI, &t58_0_0_0, RuntimeInvoker_t58_t9, t2002_m10554_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 4529, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t58_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t2002_m10555_ParameterInfos[] = 
{
	{"handle", 0, 134223250, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"data", 1, 134223251, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58_t58_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10555_MI = 
{
	"RngGetBytes", (methodPointerType)&m10555, &t2002_TI, &t58_0_0_0, RuntimeInvoker_t58_t58_t9, t2002_m10555_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 2, false, false, 4530, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
static ParameterInfo t2002_m10556_ParameterInfos[] = 
{
	{"handle", 0, 134223252, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m10556_MI = 
{
	"RngClose", (methodPointerType)&m10556, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122_t58, t2002_m10556_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 4531, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t2002_m10557_ParameterInfos[] = 
{
	{"data", 0, 134223253, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10557_MI = 
{
	"GetBytes", (methodPointerType)&m10557, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2002_m10557_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4532, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t2002_m10558_ParameterInfos[] = 
{
	{"data", 0, 134223254, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10558_MI = 
{
	"GetNonZeroBytes", (methodPointerType)&m10558, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2002_m10558_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4533, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10559_MI = 
{
	"Finalize", (methodPointerType)&m10559, &t2002_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4534, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2002_MIs[] =
{
	&m10550_MI,
	&m10551_MI,
	&m10552_MI,
	&m10553_MI,
	&m10554_MI,
	&m10555_MI,
	&m10556_MI,
	&m10557_MI,
	&m10558_MI,
	&m10559_MI,
	NULL
};
extern Il2CppType t9_0_0_17;
FieldInfo t2002_f0_FieldInfo = 
{
	"_lock", &t9_0_0_17, &t2002_TI, offsetof(t2002_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_1;
FieldInfo t2002_f1_FieldInfo = 
{
	"_handle", &t58_0_0_1, &t2002_TI, offsetof(t2002, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2002_FIs[] =
{
	&t2002_f0_FieldInfo,
	&t2002_f1_FieldInfo,
	NULL
};
extern MethodInfo m10559_MI;
extern MethodInfo m10557_MI;
extern MethodInfo m10558_MI;
static Il2CppMethodReference t2002_VT[] =
{
	&m671_MI,
	&m10559_MI,
	&m672_MI,
	&m673_MI,
	&m10557_MI,
	&m10558_MI,
};
static bool t2002_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2002_0_0_0;
extern Il2CppType t2002_1_0_0;
extern Il2CppType t1419_0_0_0;
struct t2002;
const Il2CppTypeDefinitionMetadata t2002_DM = 
{
	NULL, NULL, NULL, NULL, &t1419_0_0_0, t2002_VT, t2002_VTIGM, NULL};
TypeInfo t2002_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RNGCryptoServiceProvider", "System.Security.Cryptography", t2002_MIs, NULL, t2002_FIs, NULL, &t2002_TI, NULL, &EmptyCustomAttributesCache, &t2002_0_0_0, &t2002_1_0_0, &t2002_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2002), sizeof (t2002), 0, -1, sizeof(t2002_SFs), 0, -1, 257, 0, 0, false, false, false, false, false, false, false, true, true, false, 10, 0, 2, 0, 0, 6, 0, 0};
#include "t1223.h"
// Metadata Definition System.Security.Cryptography.RSA
extern TypeInfo t1223_TI;
#include "t1223MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6951_MI = 
{
	".ctor", (methodPointerType)&m6951, &t1223_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4535, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1223_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5825_MI = 
{
	"Create", (methodPointerType)&m5825, &t1223_TI, &t1223_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4536, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1223_m10560_ParameterInfos[] = 
{
	{"algName", 0, 134223255, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1223_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10560_MI = 
{
	"Create", (methodPointerType)&m10560, &t1223_TI, &t1223_0_0_0, RuntimeInvoker_t9_t9, t1223_m10560_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4537, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1223_m6942_ParameterInfos[] = 
{
	{"rgb", 0, 134223256, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6942_MI = 
{
	"EncryptValue", NULL, &t1223_TI, &t737_0_0_0, RuntimeInvoker_t9_t9, t1223_m6942_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 10, 1, false, false, 4538, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1223_m6941_ParameterInfos[] = 
{
	{"rgb", 0, 134223257, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6941_MI = 
{
	"DecryptValue", NULL, &t1223_TI, &t737_0_0_0, RuntimeInvoker_t9_t9, t1223_m6941_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 11, 1, false, false, 4539, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1223_m5824_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223258, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1356_0_0_0;
extern void* RuntimeInvoker_t1356_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m5824_MI = 
{
	"ExportParameters", NULL, &t1223_TI, &t1356_0_0_0, RuntimeInvoker_t1356_t186, t1223_m5824_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 12, 1, false, false, 4540, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1356_0_0_0;
extern Il2CppType t1356_0_0_0;
static ParameterInfo t1223_m5826_ParameterInfos[] = 
{
	{"parameters", 0, 134223259, &EmptyCustomAttributesCache, &t1356_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1356 (MethodInfo* method, void* obj, void** args);
MethodInfo m5826_MI = 
{
	"ImportParameters", NULL, &t1223_TI, &t122_0_0_0, RuntimeInvoker_t122_t1356, t1223_m5826_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 13, 1, false, false, 4541, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1356_0_0_0;
static ParameterInfo t1223_m10561_ParameterInfos[] = 
{
	{"parameters", 0, 134223260, &EmptyCustomAttributesCache, &t1356_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1356 (MethodInfo* method, void* obj, void** args);
MethodInfo m10561_MI = 
{
	"ZeroizePrivateKey", (methodPointerType)&m10561, &t1223_TI, &t122_0_0_0, RuntimeInvoker_t122_t1356, t1223_m10561_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4542, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1223_m7095_ParameterInfos[] = 
{
	{"xmlString", 0, 134223261, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7095_MI = 
{
	"FromXmlString", (methodPointerType)&m7095, &t1223_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1223_m7095_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 4543, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1223_m10562_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223262, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10562_MI = 
{
	"ToXmlString", (methodPointerType)&m10562, &t1223_TI, &t2_0_0_0, RuntimeInvoker_t9_t186, t1223_m10562_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 4544, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1223_MIs[] =
{
	&m6951_MI,
	&m5825_MI,
	&m10560_MI,
	&m6942_MI,
	&m6941_MI,
	&m5824_MI,
	&m5826_MI,
	&m10561_MI,
	&m7095_MI,
	&m10562_MI,
	NULL
};
extern MethodInfo m7094_MI;
extern MethodInfo m5887_MI;
extern MethodInfo m6952_MI;
extern MethodInfo m7095_MI;
extern MethodInfo m10562_MI;
static Il2CppMethodReference t1223_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7094_MI,
	&m5887_MI,
	&m6952_MI,
	NULL,
	&m7095_MI,
	&m10562_MI,
	NULL,
	NULL,
	NULL,
	NULL,
};
static bool t1223_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1223_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1223_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1223__CustomAttributeCache = {
1,
NULL,
&t1223_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1223_0_0_0;
extern Il2CppType t1223_1_0_0;
extern Il2CppType t1218_0_0_0;
struct t1223;
extern CustomAttributesCache t1223__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1223_DM = 
{
	NULL, NULL, NULL, t1223_IOs, &t1218_0_0_0, t1223_VT, t1223_VTIGM, NULL};
TypeInfo t1223_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSA", "System.Security.Cryptography", t1223_MIs, NULL, NULL, NULL, &t1223_TI, NULL, &t1223__CustomAttributeCache, &t1223_0_0_0, &t1223_1_0_0, &t1223_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1223), sizeof (t1223), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 0, 0, 0, 0, 14, 0, 1};
#include "t1354.h"
// Metadata Definition System.Security.Cryptography.RSACryptoServiceProvider
extern TypeInfo t1354_TI;
#include "t1354MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10563_MI = 
{
	".ctor", (methodPointerType)&m10563, &t1354_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4545, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1533_0_0_0;
extern Il2CppType t1533_0_0_0;
static ParameterInfo t1354_m6948_ParameterInfos[] = 
{
	{"parameters", 0, 134223263, &EmptyCustomAttributesCache, &t1533_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6948_MI = 
{
	".ctor", (methodPointerType)&m6948, &t1354_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1354_m6948_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4546, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1354_m5843_ParameterInfos[] = 
{
	{"dwKeySize", 0, 134223264, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5843_MI = 
{
	".ctor", (methodPointerType)&m5843, &t1354_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1354_m5843_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4547, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10564_MI = 
{
	".cctor", (methodPointerType)&m10564, &t1354_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4548, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t1533_0_0_0;
static ParameterInfo t1354_m10565_ParameterInfos[] = 
{
	{"dwKeySize", 0, 134223265, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"p", 1, 134223266, &EmptyCustomAttributesCache, &t1533_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10565_MI = 
{
	"Common", (methodPointerType)&m10565, &t1354_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9, t1354_m10565_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4549, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10566_MI = 
{
	"Finalize", (methodPointerType)&m10566, &t1354_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4550, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10567_MI = 
{
	"get_KeySize", (methodPointerType)&m10567, &t1354_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 5, 0, false, false, 4551, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m5822_MI = 
{
	"get_PublicOnly", (methodPointerType)&m5822, &t1354_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4552, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1354_m10568_ParameterInfos[] = 
{
	{"rgb", 0, 134223267, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10568_MI = 
{
	"DecryptValue", (methodPointerType)&m10568, &t1354_TI, &t737_0_0_0, RuntimeInvoker_t9_t9, t1354_m10568_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 1, false, false, 4553, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1354_m10569_ParameterInfos[] = 
{
	{"rgb", 0, 134223268, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10569_MI = 
{
	"EncryptValue", (methodPointerType)&m10569, &t1354_TI, &t737_0_0_0, RuntimeInvoker_t9_t9, t1354_m10569_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 4554, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1354_m10570_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223269, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1356_0_0_0;
extern void* RuntimeInvoker_t1356_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10570_MI = 
{
	"ExportParameters", (methodPointerType)&m10570, &t1354_TI, &t1356_0_0_0, RuntimeInvoker_t1356_t186, t1354_m10570_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 4555, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1356_0_0_0;
static ParameterInfo t1354_m10571_ParameterInfos[] = 
{
	{"parameters", 0, 134223270, &EmptyCustomAttributesCache, &t1356_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1356 (MethodInfo* method, void* obj, void** args);
MethodInfo m10571_MI = 
{
	"ImportParameters", (methodPointerType)&m10571, &t1354_TI, &t122_0_0_0, RuntimeInvoker_t122_t1356, t1354_m10571_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 1, false, false, 4556, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1354_m10572_ParameterInfos[] = 
{
	{"disposing", 0, 134223271, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10572_MI = 
{
	"Dispose", (methodPointerType)&m10572, &t1354_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1354_m10572_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 7, 1, false, false, 4557, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1442_0_0_0;
extern Il2CppType t1442_0_0_0;
static ParameterInfo t1354_m10573_ParameterInfos[] = 
{
	{"sender", 0, 134223272, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"e", 1, 134223273, &EmptyCustomAttributesCache, &t1442_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10573_MI = 
{
	"OnKeyGenerated", (methodPointerType)&m10573, &t1354_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1354_m10573_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4558, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1354_MIs[] =
{
	&m10563_MI,
	&m6948_MI,
	&m5843_MI,
	&m10564_MI,
	&m10565_MI,
	&m10566_MI,
	&m10567_MI,
	&m5822_MI,
	&m10568_MI,
	&m10569_MI,
	&m10570_MI,
	&m10571_MI,
	&m10572_MI,
	&m10573_MI,
	NULL
};
extern Il2CppType t1640_0_0_1;
FieldInfo t1354_f2_FieldInfo = 
{
	"store", &t1640_0_0_1, &t1354_TI, offsetof(t1354, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1354_f3_FieldInfo = 
{
	"persistKey", &t124_0_0_1, &t1354_TI, offsetof(t1354, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1354_f4_FieldInfo = 
{
	"persisted", &t124_0_0_1, &t1354_TI, offsetof(t1354, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1354_f5_FieldInfo = 
{
	"privateKeyExportable", &t124_0_0_1, &t1354_TI, offsetof(t1354, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1354_f6_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t1354_TI, offsetof(t1354, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1647_0_0_1;
FieldInfo t1354_f7_FieldInfo = 
{
	"rsa", &t1647_0_0_1, &t1354_TI, offsetof(t1354, f7), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_17;
FieldInfo t1354_f8_FieldInfo = 
{
	"useMachineKeyStore", &t124_0_0_17, &t1354_TI, offsetof(t1354_SFs, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1354_FIs[] =
{
	&t1354_f2_FieldInfo,
	&t1354_f3_FieldInfo,
	&t1354_f4_FieldInfo,
	&t1354_f5_FieldInfo,
	&t1354_f6_FieldInfo,
	&t1354_f7_FieldInfo,
	&t1354_f8_FieldInfo,
	NULL
};
extern MethodInfo m10567_MI;
static PropertyInfo t1354____KeySize_PropertyInfo = 
{
	&t1354_TI, "KeySize", &m10567_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5822_MI;
extern CustomAttributesCache t1354__CustomAttributeCache_t1354____PublicOnly_PropertyInfo;
static PropertyInfo t1354____PublicOnly_PropertyInfo = 
{
	&t1354_TI, "PublicOnly", &m5822_MI, NULL, 0, &t1354__CustomAttributeCache_t1354____PublicOnly_PropertyInfo};
static PropertyInfo* t1354_PIs[] =
{
	&t1354____KeySize_PropertyInfo,
	&t1354____PublicOnly_PropertyInfo,
	NULL
};
extern MethodInfo m10566_MI;
extern MethodInfo m10572_MI;
extern MethodInfo m10569_MI;
extern MethodInfo m10568_MI;
extern MethodInfo m10570_MI;
extern MethodInfo m10571_MI;
static Il2CppMethodReference t1354_VT[] =
{
	&m671_MI,
	&m10566_MI,
	&m672_MI,
	&m673_MI,
	&m7094_MI,
	&m10567_MI,
	&m6952_MI,
	&m10572_MI,
	&m7095_MI,
	&m10562_MI,
	&m10569_MI,
	&m10568_MI,
	&m10570_MI,
	&m10571_MI,
};
static bool t1354_VTIGM[] =
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
static const Il2CppType* t1354_ITIs[] = 
{
	&t2640_0_0_0,
};
static Il2CppInterfaceOffsetPair t1354_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t2640_0_0_0, 14},
};
void t1354_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1354_CustomAttributesCacheGenerator_t1354____PublicOnly_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1354__CustomAttributeCache = {
1,
NULL,
&t1354_CustomAttributesCacheGenerator
};
CustomAttributesCache t1354__CustomAttributeCache_t1354____PublicOnly_PropertyInfo = {
1,
NULL,
&t1354_CustomAttributesCacheGenerator_t1354____PublicOnly_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1354_0_0_0;
extern Il2CppType t1354_1_0_0;
struct t1354;
extern CustomAttributesCache t1354__CustomAttributeCache;
extern CustomAttributesCache t1354__CustomAttributeCache_t1354____PublicOnly_PropertyInfo;
const Il2CppTypeDefinitionMetadata t1354_DM = 
{
	NULL, NULL, t1354_ITIs, t1354_IOs, &t1223_0_0_0, t1354_VT, t1354_VTIGM, NULL};
TypeInfo t1354_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSACryptoServiceProvider", "System.Security.Cryptography", t1354_MIs, t1354_PIs, t1354_FIs, NULL, &t1354_TI, NULL, &t1354__CustomAttributeCache, &t1354_0_0_0, &t1354_1_0_0, &t1354_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1354), sizeof (t1354), 0, -1, sizeof(t1354_SFs), 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, true, false, 14, 2, 7, 0, 0, 14, 1, 2};
#include "t1556.h"
// Metadata Definition System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
extern TypeInfo t1556_TI;
#include "t1556MD.h"
extern Il2CppType t1218_0_0_0;
static ParameterInfo t1556_m7076_ParameterInfos[] = 
{
	{"key", 0, 134223274, &EmptyCustomAttributesCache, &t1218_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7076_MI = 
{
	".ctor", (methodPointerType)&m7076, &t1556_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1556_m7076_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4559, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1556_m7077_ParameterInfos[] = 
{
	{"rgbData", 0, 134223275, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7077_MI = 
{
	"CreateKeyExchange", (methodPointerType)&m7077, &t1556_TI, &t737_0_0_0, RuntimeInvoker_t9_t9, t1556_m7077_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4560, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1218_0_0_0;
static ParameterInfo t1556_m10574_ParameterInfos[] = 
{
	{"key", 0, 134223276, &EmptyCustomAttributesCache, &t1218_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10574_MI = 
{
	"SetRSAKey", (methodPointerType)&m10574, &t1556_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1556_m10574_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4561, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1556_MIs[] =
{
	&m7076_MI,
	&m7077_MI,
	&m10574_MI,
	NULL
};
extern Il2CppType t1223_0_0_1;
FieldInfo t1556_f0_FieldInfo = 
{
	"rsa", &t1223_0_0_1, &t1556_TI, offsetof(t1556, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1419_0_0_1;
FieldInfo t1556_f1_FieldInfo = 
{
	"random", &t1419_0_0_1, &t1556_TI, offsetof(t1556, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1556_FIs[] =
{
	&t1556_f0_FieldInfo,
	&t1556_f1_FieldInfo,
	NULL
};
extern MethodInfo m7077_MI;
static Il2CppMethodReference t1556_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7077_MI,
};
static bool t1556_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
void t1556_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1556__CustomAttributeCache = {
1,
NULL,
&t1556_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1556_0_0_0;
extern Il2CppType t1556_1_0_0;
extern Il2CppType t1985_0_0_0;
struct t1556;
extern CustomAttributesCache t1556__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1556_DM = 
{
	NULL, NULL, NULL, NULL, &t1985_0_0_0, t1556_VT, t1556_VTIGM, NULL};
TypeInfo t1556_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSAPKCS1KeyExchangeFormatter", "System.Security.Cryptography", t1556_MIs, NULL, t1556_FIs, NULL, &t1556_TI, NULL, &t1556__CustomAttributeCache, &t1556_0_0_0, &t1556_1_0_0, &t1556_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1556), sizeof (t1556), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 2, 0, 0, 5, 0, 0};
#include "t1542.h"
// Metadata Definition System.Security.Cryptography.RSAPKCS1SignatureDeformatter
extern TypeInfo t1542_TI;
#include "t1542MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10575_MI = 
{
	".ctor", (methodPointerType)&m10575, &t1542_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4562, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1218_0_0_0;
static ParameterInfo t1542_m6981_ParameterInfos[] = 
{
	{"key", 0, 134223277, &EmptyCustomAttributesCache, &t1218_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6981_MI = 
{
	".ctor", (methodPointerType)&m6981, &t1542_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1542_m6981_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4563, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1542_m6982_ParameterInfos[] = 
{
	{"strName", 0, 134223278, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6982_MI = 
{
	"SetHashAlgorithm", (methodPointerType)&m6982, &t1542_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1542_m6982_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4564, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1218_0_0_0;
static ParameterInfo t1542_m10576_ParameterInfos[] = 
{
	{"key", 0, 134223279, &EmptyCustomAttributesCache, &t1218_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10576_MI = 
{
	"SetKey", (methodPointerType)&m10576, &t1542_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1542_m10576_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4565, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1542_m6983_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223280, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"rgbSignature", 1, 134223281, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6983_MI = 
{
	"VerifySignature", (methodPointerType)&m6983, &t1542_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1542_m6983_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, false, 4566, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1542_MIs[] =
{
	&m10575_MI,
	&m6981_MI,
	&m6982_MI,
	&m10576_MI,
	&m6983_MI,
	NULL
};
extern Il2CppType t1223_0_0_1;
FieldInfo t1542_f0_FieldInfo = 
{
	"rsa", &t1223_0_0_1, &t1542_TI, offsetof(t1542, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1542_f1_FieldInfo = 
{
	"hashName", &t2_0_0_1, &t1542_TI, offsetof(t1542, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1542_FIs[] =
{
	&t1542_f0_FieldInfo,
	&t1542_f1_FieldInfo,
	NULL
};
extern MethodInfo m6982_MI;
extern MethodInfo m10576_MI;
extern MethodInfo m6983_MI;
static Il2CppMethodReference t1542_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m6982_MI,
	&m10576_MI,
	&m6983_MI,
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
};
void t1542_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
extern Il2CppType t1495_0_0_0;
struct t1542;
extern CustomAttributesCache t1542__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1542_DM = 
{
	NULL, NULL, NULL, NULL, &t1495_0_0_0, t1542_VT, t1542_VTIGM, NULL};
TypeInfo t1542_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSAPKCS1SignatureDeformatter", "System.Security.Cryptography", t1542_MIs, NULL, t1542_FIs, NULL, &t1542_TI, NULL, &t1542__CustomAttributeCache, &t1542_0_0_0, &t1542_1_0_0, &t1542_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1542), sizeof (t1542), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 2, 0, 0, 7, 0, 0};
#include "t2003.h"
// Metadata Definition System.Security.Cryptography.RSAPKCS1SignatureFormatter
extern TypeInfo t2003_TI;
#include "t2003MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10577_MI = 
{
	".ctor", (methodPointerType)&m10577, &t2003_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4567, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t2003_m10578_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223282, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10578_MI = 
{
	"CreateSignature", (methodPointerType)&m10578, &t2003_TI, &t737_0_0_0, RuntimeInvoker_t9_t9, t2003_m10578_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 1, false, false, 4568, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2003_m10579_ParameterInfos[] = 
{
	{"strName", 0, 134223283, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10579_MI = 
{
	"SetHashAlgorithm", (methodPointerType)&m10579, &t2003_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2003_m10579_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4569, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1218_0_0_0;
static ParameterInfo t2003_m10580_ParameterInfos[] = 
{
	{"key", 0, 134223284, &EmptyCustomAttributesCache, &t1218_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10580_MI = 
{
	"SetKey", (methodPointerType)&m10580, &t2003_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2003_m10580_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4570, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2003_MIs[] =
{
	&m10577_MI,
	&m10578_MI,
	&m10579_MI,
	&m10580_MI,
	NULL
};
extern Il2CppType t1223_0_0_1;
FieldInfo t2003_f0_FieldInfo = 
{
	"rsa", &t1223_0_0_1, &t2003_TI, offsetof(t2003, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1374_0_0_1;
FieldInfo t2003_f1_FieldInfo = 
{
	"hash", &t1374_0_0_1, &t2003_TI, offsetof(t2003, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2003_FIs[] =
{
	&t2003_f0_FieldInfo,
	&t2003_f1_FieldInfo,
	NULL
};
extern MethodInfo m10579_MI;
extern MethodInfo m10580_MI;
extern MethodInfo m10578_MI;
static Il2CppMethodReference t2003_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10579_MI,
	&m10580_MI,
	&m10578_MI,
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
};
void t2003_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
extern Il2CppType t1497_0_0_0;
struct t2003;
extern CustomAttributesCache t2003__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2003_DM = 
{
	NULL, NULL, NULL, NULL, &t1497_0_0_0, t2003_VT, t2003_VTIGM, NULL};
TypeInfo t2003_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSAPKCS1SignatureFormatter", "System.Security.Cryptography", t2003_MIs, NULL, t2003_FIs, NULL, &t2003_TI, NULL, &t2003__CustomAttributeCache, &t2003_0_0_0, &t2003_1_0_0, &t2003_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2003), sizeof (t2003), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 2, 0, 0, 7, 0, 0};
#include "t1356.h"
// Metadata Definition System.Security.Cryptography.RSAParameters
extern TypeInfo t1356_TI;
#include "t1356MD.h"
static MethodInfo* t1356_MIs[] =
{
	NULL
};
extern Il2CppType t737_0_0_134;
FieldInfo t1356_f0_FieldInfo = 
{
	"P", &t737_0_0_134, &t1356_TI, offsetof(t1356, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_134;
FieldInfo t1356_f1_FieldInfo = 
{
	"Q", &t737_0_0_134, &t1356_TI, offsetof(t1356, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_134;
FieldInfo t1356_f2_FieldInfo = 
{
	"D", &t737_0_0_134, &t1356_TI, offsetof(t1356, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_134;
FieldInfo t1356_f3_FieldInfo = 
{
	"DP", &t737_0_0_134, &t1356_TI, offsetof(t1356, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_134;
FieldInfo t1356_f4_FieldInfo = 
{
	"DQ", &t737_0_0_134, &t1356_TI, offsetof(t1356, f4) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_134;
FieldInfo t1356_f5_FieldInfo = 
{
	"InverseQ", &t737_0_0_134, &t1356_TI, offsetof(t1356, f5) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_6;
FieldInfo t1356_f6_FieldInfo = 
{
	"Modulus", &t737_0_0_6, &t1356_TI, offsetof(t1356, f6) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_6;
FieldInfo t1356_f7_FieldInfo = 
{
	"Exponent", &t737_0_0_6, &t1356_TI, offsetof(t1356, f7) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1356_FIs[] =
{
	&t1356_f0_FieldInfo,
	&t1356_f1_FieldInfo,
	&t1356_f2_FieldInfo,
	&t1356_f3_FieldInfo,
	&t1356_f4_FieldInfo,
	&t1356_f5_FieldInfo,
	&t1356_f6_FieldInfo,
	&t1356_f7_FieldInfo,
	NULL
};
extern MethodInfo m680_MI;
extern MethodInfo m681_MI;
extern MethodInfo m682_MI;
static Il2CppMethodReference t1356_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1356_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1356_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1356__CustomAttributeCache = {
1,
NULL,
&t1356_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1356_1_0_0;
extern Il2CppType t117_0_0_0;
extern CustomAttributesCache t1356__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1356_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1356_VT, t1356_VTIGM, NULL};
TypeInfo t1356_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSAParameters", "System.Security.Cryptography", t1356_MIs, NULL, t1356_FIs, NULL, &t1356_TI, NULL, &t1356__CustomAttributeCache, &t1356_0_0_0, &t1356_1_0_0, &t1356_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t1356_marshal, (methodPointerType)t1356_marshal_back, (methodPointerType)t1356_marshal_cleanup, sizeof (t1356)+ sizeof (Il2CppObject), sizeof (t1356)+ sizeof (Il2CppObject), 0, sizeof(t1356_marshaled), 0, 0, -1, 1057033, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 8, 0, 0, 4, 0, 0};
#include "t1419.h"
// Metadata Definition System.Security.Cryptography.RandomNumberGenerator
extern TypeInfo t1419_TI;
#include "t1419MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10581_MI = 
{
	".ctor", (methodPointerType)&m10581, &t1419_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4571, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1419_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6929_MI = 
{
	"Create", (methodPointerType)&m6929, &t1419_TI, &t1419_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4572, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1419_m10582_ParameterInfos[] = 
{
	{"rngName", 0, 134223285, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1419_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10582_MI = 
{
	"Create", (methodPointerType)&m10582, &t1419_TI, &t1419_0_0_0, RuntimeInvoker_t9_t9, t1419_m10582_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4573, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1419_m6930_ParameterInfos[] = 
{
	{"data", 0, 134223286, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6930_MI = 
{
	"GetBytes", NULL, &t1419_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1419_m6930_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4574, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1419_m7022_ParameterInfos[] = 
{
	{"data", 0, 134223287, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7022_MI = 
{
	"GetNonZeroBytes", NULL, &t1419_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1419_m7022_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 4575, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1419_MIs[] =
{
	&m10581_MI,
	&m6929_MI,
	&m10582_MI,
	&m6930_MI,
	&m7022_MI,
	NULL
};
static Il2CppMethodReference t1419_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
};
static bool t1419_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1419_1_0_0;
struct t1419;
const Il2CppTypeDefinitionMetadata t1419_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1419_VT, t1419_VTIGM, NULL};
TypeInfo t1419_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RandomNumberGenerator", "System.Security.Cryptography", t1419_MIs, NULL, NULL, NULL, &t1419_TI, NULL, &EmptyCustomAttributesCache, &t1419_0_0_0, &t1419_1_0_0, &t1419_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1419), sizeof (t1419), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 6, 0, 0};
#include "t1549.h"
// Metadata Definition System.Security.Cryptography.Rijndael
extern TypeInfo t1549_TI;
#include "t1549MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10583_MI = 
{
	".ctor", (methodPointerType)&m10583, &t1549_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4576, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1549_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7003_MI = 
{
	"Create", (methodPointerType)&m7003, &t1549_TI, &t1549_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4577, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1549_m10584_ParameterInfos[] = 
{
	{"algName", 0, 134223288, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1549_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10584_MI = 
{
	"Create", (methodPointerType)&m10584, &t1549_TI, &t1549_0_0_0, RuntimeInvoker_t9_t9, t1549_m10584_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4578, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1549_MIs[] =
{
	&m10583_MI,
	&m7003_MI,
	&m10584_MI,
	NULL
};
extern MethodInfo m7085_MI;
extern MethodInfo m7005_MI;
static Il2CppMethodReference t1549_VT[] =
{
	&m671_MI,
	&m6936_MI,
	&m672_MI,
	&m673_MI,
	&m7082_MI,
	&m7092_MI,
	&m7083_MI,
	&m7006_MI,
	&m7084_MI,
	&m10675_MI,
	&m6965_MI,
	&m7093_MI,
	&m6964_MI,
	&m7085_MI,
	&m7005_MI,
	&m7086_MI,
	&m7087_MI,
	&m6966_MI,
	&m7088_MI,
	&m7004_MI,
	&m6967_MI,
	NULL,
	&m6938_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1549_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1549_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1549_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1549__CustomAttributeCache = {
1,
NULL,
&t1549_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1549_0_0_0;
extern Il2CppType t1549_1_0_0;
struct t1549;
extern CustomAttributesCache t1549__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1549_DM = 
{
	NULL, NULL, NULL, t1549_IOs, &t1440_0_0_0, t1549_VT, t1549_VTIGM, NULL};
TypeInfo t1549_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Rijndael", "System.Security.Cryptography", t1549_MIs, NULL, NULL, NULL, &t1549_TI, NULL, &t1549__CustomAttributeCache, &t1549_0_0_0, &t1549_1_0_0, &t1549_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1549), sizeof (t1549), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 3, 0, 0, 0, 0, 26, 0, 1};
#include "t2004.h"
// Metadata Definition System.Security.Cryptography.RijndaelManaged
extern TypeInfo t2004_TI;
#include "t2004MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10585_MI = 
{
	".ctor", (methodPointerType)&m10585, &t2004_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4579, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10586_MI = 
{
	"GenerateIV", (methodPointerType)&m10586, &t2004_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 24, 0, false, false, 4580, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10587_MI = 
{
	"GenerateKey", (methodPointerType)&m10587, &t2004_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 25, 0, false, false, 4581, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t2004_m10588_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223289, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"rgbIV", 1, 134223290, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t1431_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10588_MI = 
{
	"CreateDecryptor", (methodPointerType)&m10588, &t2004_TI, &t1431_0_0_0, RuntimeInvoker_t9_t9_t9, t2004_m10588_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 21, 2, false, false, 4582, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t2004_m10589_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223291, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"rgbIV", 1, 134223292, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t1431_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10589_MI = 
{
	"CreateEncryptor", (methodPointerType)&m10589, &t2004_TI, &t1431_0_0_0, RuntimeInvoker_t9_t9_t9, t2004_m10589_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 2, false, false, 4583, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2004_MIs[] =
{
	&m10585_MI,
	&m10586_MI,
	&m10587_MI,
	&m10588_MI,
	&m10589_MI,
	NULL
};
extern MethodInfo m10588_MI;
extern MethodInfo m10589_MI;
extern MethodInfo m10586_MI;
extern MethodInfo m10587_MI;
static Il2CppMethodReference t2004_VT[] =
{
	&m671_MI,
	&m6936_MI,
	&m672_MI,
	&m673_MI,
	&m7082_MI,
	&m7092_MI,
	&m7083_MI,
	&m7006_MI,
	&m7084_MI,
	&m10675_MI,
	&m6965_MI,
	&m7093_MI,
	&m6964_MI,
	&m7085_MI,
	&m7005_MI,
	&m7086_MI,
	&m7087_MI,
	&m6966_MI,
	&m7088_MI,
	&m7004_MI,
	&m6967_MI,
	&m10588_MI,
	&m6938_MI,
	&m10589_MI,
	&m10586_MI,
	&m10587_MI,
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
	false,
	false,
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
};
void t2004_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t2004_IOs, &t1549_0_0_0, t2004_VT, t2004_VTIGM, NULL};
TypeInfo t2004_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RijndaelManaged", "System.Security.Cryptography", t2004_MIs, NULL, NULL, NULL, &t2004_TI, NULL, &t2004__CustomAttributeCache, &t2004_0_0_0, &t2004_1_0_0, &t2004_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2004), sizeof (t2004), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 5, 0, 0, 0, 0, 26, 0, 1};
#include "t2005.h"
// Metadata Definition System.Security.Cryptography.RijndaelTransform
extern TypeInfo t2005_TI;
#include "t2005MD.h"
extern Il2CppType t1549_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t2005_m10590_ParameterInfos[] = 
{
	{"algo", 0, 134223293, &EmptyCustomAttributesCache, &t1549_0_0_0},
	{"encryption", 1, 134223294, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"key", 2, 134223295, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"iv", 3, 134223296, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10590_MI = 
{
	".ctor", (methodPointerType)&m10590, &t2005_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t9_t9, t2005_m10590_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 4584, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10591_MI = 
{
	".cctor", (methodPointerType)&m10591, &t2005_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4585, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10592_MI = 
{
	"Clear", (methodPointerType)&m10592, &t2005_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4586, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t2005_m10593_ParameterInfos[] = 
{
	{"input", 0, 134223297, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"output", 1, 134223298, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10593_MI = 
{
	"ECB", (methodPointerType)&m10593, &t2005_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2005_m10593_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 2, false, false, 4587, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
static ParameterInfo t2005_m10594_ParameterInfos[] = 
{
	{"a", 0, 134223299, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10594_MI = 
{
	"SubByte", (methodPointerType)&m10594, &t2005_TI, &t168_0_0_0, RuntimeInvoker_t168_t125, t2005_m10594_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4588, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t1418_0_0_0;
extern Il2CppType t1418_0_0_0;
static ParameterInfo t2005_m10595_ParameterInfos[] = 
{
	{"indata", 0, 134223300, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"outdata", 1, 134223301, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ekey", 2, 134223302, &EmptyCustomAttributesCache, &t1418_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10595_MI = 
{
	"Encrypt128", (methodPointerType)&m10595, &t2005_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t2005_m10595_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4589, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t1418_0_0_0;
static ParameterInfo t2005_m10596_ParameterInfos[] = 
{
	{"indata", 0, 134223303, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"outdata", 1, 134223304, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ekey", 2, 134223305, &EmptyCustomAttributesCache, &t1418_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10596_MI = 
{
	"Encrypt192", (methodPointerType)&m10596, &t2005_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t2005_m10596_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4590, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t1418_0_0_0;
static ParameterInfo t2005_m10597_ParameterInfos[] = 
{
	{"indata", 0, 134223306, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"outdata", 1, 134223307, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ekey", 2, 134223308, &EmptyCustomAttributesCache, &t1418_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10597_MI = 
{
	"Encrypt256", (methodPointerType)&m10597, &t2005_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t2005_m10597_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4591, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t1418_0_0_0;
static ParameterInfo t2005_m10598_ParameterInfos[] = 
{
	{"indata", 0, 134223309, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"outdata", 1, 134223310, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ekey", 2, 134223311, &EmptyCustomAttributesCache, &t1418_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10598_MI = 
{
	"Decrypt128", (methodPointerType)&m10598, &t2005_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t2005_m10598_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4592, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t1418_0_0_0;
static ParameterInfo t2005_m10599_ParameterInfos[] = 
{
	{"indata", 0, 134223312, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"outdata", 1, 134223313, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ekey", 2, 134223314, &EmptyCustomAttributesCache, &t1418_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10599_MI = 
{
	"Decrypt192", (methodPointerType)&m10599, &t2005_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t2005_m10599_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4593, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t1418_0_0_0;
static ParameterInfo t2005_m10600_ParameterInfos[] = 
{
	{"indata", 0, 134223315, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"outdata", 1, 134223316, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ekey", 2, 134223317, &EmptyCustomAttributesCache, &t1418_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10600_MI = 
{
	"Decrypt256", (methodPointerType)&m10600, &t2005_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t2005_m10600_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4594, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2005_MIs[] =
{
	&m10590_MI,
	&m10591_MI,
	&m10592_MI,
	&m10593_MI,
	&m10594_MI,
	&m10595_MI,
	&m10596_MI,
	&m10597_MI,
	&m10598_MI,
	&m10599_MI,
	&m10600_MI,
	NULL
};
extern Il2CppType t1418_0_0_1;
FieldInfo t2005_f12_FieldInfo = 
{
	"expandedKey", &t1418_0_0_1, &t2005_TI, offsetof(t2005, f12), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2005_f13_FieldInfo = 
{
	"Nb", &t125_0_0_1, &t2005_TI, offsetof(t2005, f13), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2005_f14_FieldInfo = 
{
	"Nk", &t125_0_0_1, &t2005_TI, offsetof(t2005, f14), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2005_f15_FieldInfo = 
{
	"Nr", &t125_0_0_1, &t2005_TI, offsetof(t2005, f15), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_49;
FieldInfo t2005_f16_FieldInfo = 
{
	"Rcon", &t1418_0_0_49, &t2005_TI, offsetof(t2005_SFs, f16), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_49;
FieldInfo t2005_f17_FieldInfo = 
{
	"SBox", &t737_0_0_49, &t2005_TI, offsetof(t2005_SFs, f17), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_49;
FieldInfo t2005_f18_FieldInfo = 
{
	"iSBox", &t737_0_0_49, &t2005_TI, offsetof(t2005_SFs, f18), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_49;
FieldInfo t2005_f19_FieldInfo = 
{
	"T0", &t1418_0_0_49, &t2005_TI, offsetof(t2005_SFs, f19), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_49;
FieldInfo t2005_f20_FieldInfo = 
{
	"T1", &t1418_0_0_49, &t2005_TI, offsetof(t2005_SFs, f20), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_49;
FieldInfo t2005_f21_FieldInfo = 
{
	"T2", &t1418_0_0_49, &t2005_TI, offsetof(t2005_SFs, f21), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_49;
FieldInfo t2005_f22_FieldInfo = 
{
	"T3", &t1418_0_0_49, &t2005_TI, offsetof(t2005_SFs, f22), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_49;
FieldInfo t2005_f23_FieldInfo = 
{
	"iT0", &t1418_0_0_49, &t2005_TI, offsetof(t2005_SFs, f23), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_49;
FieldInfo t2005_f24_FieldInfo = 
{
	"iT1", &t1418_0_0_49, &t2005_TI, offsetof(t2005_SFs, f24), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_49;
FieldInfo t2005_f25_FieldInfo = 
{
	"iT2", &t1418_0_0_49, &t2005_TI, offsetof(t2005_SFs, f25), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_49;
FieldInfo t2005_f26_FieldInfo = 
{
	"iT3", &t1418_0_0_49, &t2005_TI, offsetof(t2005_SFs, f26), &EmptyCustomAttributesCache};
static FieldInfo* t2005_FIs[] =
{
	&t2005_f12_FieldInfo,
	&t2005_f13_FieldInfo,
	&t2005_f14_FieldInfo,
	&t2005_f15_FieldInfo,
	&t2005_f16_FieldInfo,
	&t2005_f17_FieldInfo,
	&t2005_f18_FieldInfo,
	&t2005_f19_FieldInfo,
	&t2005_f20_FieldInfo,
	&t2005_f21_FieldInfo,
	&t2005_f22_FieldInfo,
	&t2005_f23_FieldInfo,
	&t2005_f24_FieldInfo,
	&t2005_f25_FieldInfo,
	&t2005_f26_FieldInfo,
	NULL
};
extern MethodInfo m10593_MI;
static Il2CppMethodReference t2005_VT[] =
{
	&m671_MI,
	&m8210_MI,
	&m672_MI,
	&m673_MI,
	&m8209_MI,
	&m8212_MI,
	&m8219_MI,
	&m8226_MI,
	&m8211_MI,
	&m8212_MI,
	&m8213_MI,
	&m10593_MI,
	&m8214_MI,
	&m8215_MI,
	&m8216_MI,
	&m8217_MI,
	&m8219_MI,
	&m8226_MI,
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
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2005_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2005_0_0_0;
extern Il2CppType t2005_1_0_0;
struct t2005;
const Il2CppTypeDefinitionMetadata t2005_DM = 
{
	NULL, NULL, NULL, t2005_IOs, &t1648_0_0_0, t2005_VT, t2005_VTIGM, NULL};
TypeInfo t2005_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RijndaelTransform", "System.Security.Cryptography", t2005_MIs, NULL, t2005_FIs, NULL, &t2005_TI, NULL, &EmptyCustomAttributesCache, &t2005_0_0_0, &t2005_1_0_0, &t2005_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2005), sizeof (t2005), 0, -1, sizeof(t2005_SFs), 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, true, true, false, 11, 0, 15, 0, 0, 18, 0, 2};
#include "t2006.h"
// Metadata Definition System.Security.Cryptography.RijndaelManagedTransform
extern TypeInfo t2006_TI;
#include "t2006MD.h"
extern Il2CppType t1549_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t2006_m10601_ParameterInfos[] = 
{
	{"algo", 0, 134223318, &EmptyCustomAttributesCache, &t1549_0_0_0},
	{"encryption", 1, 134223319, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"key", 2, 134223320, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"iv", 3, 134223321, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10601_MI = 
{
	".ctor", (methodPointerType)&m10601, &t2006_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t9_t9, t2006_m10601_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 4595, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10602_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m10602, &t2006_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 4596, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10603_MI = 
{
	"get_CanReuseTransform", (methodPointerType)&m10603, &t2006_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 4597, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2006_m10604_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223322, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 1, 134223323, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223324, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"outputBuffer", 3, 134223325, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"outputOffset", 4, 134223326, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10604_MI = 
{
	"TransformBlock", (methodPointerType)&m10604, &t2006_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2006_m10604_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 5, false, false, 4598, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2006_m10605_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223327, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 1, 134223328, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223329, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10605_MI = 
{
	"TransformFinalBlock", (methodPointerType)&m10605, &t2006_TI, &t737_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t2006_m10605_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 3, false, false, 4599, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2006_MIs[] =
{
	&m10601_MI,
	&m10602_MI,
	&m10603_MI,
	&m10604_MI,
	&m10605_MI,
	NULL
};
extern Il2CppType t2005_0_0_1;
FieldInfo t2006_f0_FieldInfo = 
{
	"_st", &t2005_0_0_1, &t2006_TI, offsetof(t2006, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2006_f1_FieldInfo = 
{
	"_bs", &t125_0_0_1, &t2006_TI, offsetof(t2006, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2006_FIs[] =
{
	&t2006_f0_FieldInfo,
	&t2006_f1_FieldInfo,
	NULL
};
extern MethodInfo m10603_MI;
static PropertyInfo t2006____CanReuseTransform_PropertyInfo = 
{
	&t2006_TI, "CanReuseTransform", &m10603_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2006_PIs[] =
{
	&t2006____CanReuseTransform_PropertyInfo,
	NULL
};
extern MethodInfo m10602_MI;
extern MethodInfo m10604_MI;
extern MethodInfo m10605_MI;
static Il2CppMethodReference t2006_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10602_MI,
	&m10603_MI,
	&m10604_MI,
	&m10605_MI,
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
};
static const Il2CppType* t2006_ITIs[] = 
{
	&t137_0_0_0,
	&t1431_0_0_0,
};
static Il2CppInterfaceOffsetPair t2006_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t2006_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, t2006_ITIs, t2006_IOs, &t9_0_0_0, t2006_VT, t2006_VTIGM, NULL};
TypeInfo t2006_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RijndaelManagedTransform", "System.Security.Cryptography", t2006_MIs, t2006_PIs, t2006_FIs, NULL, &t2006_TI, NULL, &t2006__CustomAttributeCache, &t2006_0_0_0, &t2006_1_0_0, &t2006_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2006), sizeof (t2006), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 1, 2, 0, 0, 8, 2, 2};
#include "t1372.h"
// Metadata Definition System.Security.Cryptography.SHA1
extern TypeInfo t1372_TI;
#include "t1372MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10606_MI = 
{
	".ctor", (methodPointerType)&m10606, &t1372_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4600, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1372_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5937_MI = 
{
	"Create", (methodPointerType)&m5937, &t1372_TI, &t1372_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4601, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1372_m10607_ParameterInfos[] = 
{
	{"hashName", 0, 134223330, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1372_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10607_MI = 
{
	"Create", (methodPointerType)&m10607, &t1372_TI, &t1372_0_0_0, RuntimeInvoker_t9_t9, t1372_m10607_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4602, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1372_MIs[] =
{
	&m10606_MI,
	&m5937_MI,
	&m10607_MI,
	NULL
};
static Il2CppMethodReference t1372_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	NULL,
	NULL,
	&m6943_MI,
	NULL,
	&m7091_MI,
};
static bool t1372_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1372_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t1372_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1372__CustomAttributeCache = {
1,
NULL,
&t1372_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1372_0_0_0;
extern Il2CppType t1372_1_0_0;
struct t1372;
extern CustomAttributesCache t1372__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1372_DM = 
{
	NULL, NULL, NULL, t1372_IOs, &t1374_0_0_0, t1372_VT, t1372_VTIGM, NULL};
TypeInfo t1372_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA1", "System.Security.Cryptography", t1372_MIs, NULL, NULL, NULL, &t1372_TI, NULL, &t1372__CustomAttributeCache, &t1372_0_0_0, &t1372_1_0_0, &t1372_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1372), sizeof (t1372), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 15, 0, 2};
#include "t2007.h"
// Metadata Definition System.Security.Cryptography.SHA1Internal
extern TypeInfo t2007_TI;
#include "t2007MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10608_MI = 
{
	".ctor", (methodPointerType)&m10608, &t2007_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4603, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2007_m10609_ParameterInfos[] = 
{
	{"rgb", 0, 134223331, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ibStart", 1, 134223332, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223333, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10609_MI = 
{
	"HashCore", (methodPointerType)&m10609, &t2007_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2007_m10609_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4604, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10610_MI = 
{
	"HashFinal", (methodPointerType)&m10610, &t2007_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4605, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10611_MI = 
{
	"Initialize", (methodPointerType)&m10611, &t2007_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4606, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t2007_m10612_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223334, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 1, 134223335, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10612_MI = 
{
	"ProcessBlock", (methodPointerType)&m10612, &t2007_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t2007_m10612_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4607, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1418_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t2007_m10613_ParameterInfos[] = 
{
	{"buff", 0, 134223336, &EmptyCustomAttributesCache, &t1418_0_0_0},
	{"input", 1, 134223337, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 2, 134223338, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10613_MI = 
{
	"InitialiseBuff", (methodPointerType)&m10613, &t2007_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t2007_m10613_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4608, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1418_0_0_0;
static ParameterInfo t2007_m10614_ParameterInfos[] = 
{
	{"buff", 0, 134223339, &EmptyCustomAttributesCache, &t1418_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10614_MI = 
{
	"FillBuff", (methodPointerType)&m10614, &t2007_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2007_m10614_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4609, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2007_m10615_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223340, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 1, 134223341, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223342, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10615_MI = 
{
	"ProcessFinalBlock", (methodPointerType)&m10615, &t2007_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2007_m10615_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4610, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2007_m10616_ParameterInfos[] = 
{
	{"length", 0, 134223343, &EmptyCustomAttributesCache, &t896_0_0_0},
	{"buffer", 1, 134223344, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"position", 2, 134223345, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10616_MI = 
{
	"AddLength", (methodPointerType)&m10616, &t2007_TI, &t122_0_0_0, RuntimeInvoker_t122_t303_t9_t125, t2007_m10616_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 3, false, false, 4611, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2007_MIs[] =
{
	&m10608_MI,
	&m10609_MI,
	&m10610_MI,
	&m10611_MI,
	&m10612_MI,
	&m10613_MI,
	&m10614_MI,
	&m10615_MI,
	&m10616_MI,
	NULL
};
extern Il2CppType t1418_0_0_1;
FieldInfo t2007_f0_FieldInfo = 
{
	"_H", &t1418_0_0_1, &t2007_TI, offsetof(t2007, f0), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2007_f1_FieldInfo = 
{
	"count", &t896_0_0_1, &t2007_TI, offsetof(t2007, f1), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t2007_f2_FieldInfo = 
{
	"_ProcessingBuffer", &t737_0_0_1, &t2007_TI, offsetof(t2007, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2007_f3_FieldInfo = 
{
	"_ProcessingBufferCount", &t125_0_0_1, &t2007_TI, offsetof(t2007, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_1;
FieldInfo t2007_f4_FieldInfo = 
{
	"buff", &t1418_0_0_1, &t2007_TI, offsetof(t2007, f4), &EmptyCustomAttributesCache};
static FieldInfo* t2007_FIs[] =
{
	&t2007_f0_FieldInfo,
	&t2007_f1_FieldInfo,
	&t2007_f2_FieldInfo,
	&t2007_f3_FieldInfo,
	&t2007_f4_FieldInfo,
	NULL
};
static Il2CppMethodReference t2007_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2007_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2007_0_0_0;
extern Il2CppType t2007_1_0_0;
struct t2007;
const Il2CppTypeDefinitionMetadata t2007_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2007_VT, t2007_VTIGM, NULL};
TypeInfo t2007_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA1Internal", "System.Security.Cryptography", t2007_MIs, NULL, t2007_FIs, NULL, &t2007_TI, NULL, &EmptyCustomAttributesCache, &t2007_0_0_0, &t2007_1_0_0, &t2007_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2007), sizeof (t2007), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 0, 5, 0, 0, 4, 0, 0};
#include "t2008.h"
// Metadata Definition System.Security.Cryptography.SHA1CryptoServiceProvider
extern TypeInfo t2008_TI;
#include "t2008MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10617_MI = 
{
	".ctor", (methodPointerType)&m10617, &t2008_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4612, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10618_MI = 
{
	"Finalize", (methodPointerType)&m10618, &t2008_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4613, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t2008_m10619_ParameterInfos[] = 
{
	{"disposing", 0, 134223346, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10619_MI = 
{
	"Dispose", (methodPointerType)&m10619, &t2008_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t2008_m10619_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 14, 1, false, false, 4614, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2008_m10620_ParameterInfos[] = 
{
	{"rgb", 0, 134223347, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ibStart", 1, 134223348, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223349, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10620_MI = 
{
	"HashCore", (methodPointerType)&m10620, &t2008_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2008_m10620_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4615, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10621_MI = 
{
	"HashFinal", (methodPointerType)&m10621, &t2008_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4616, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10622_MI = 
{
	"Initialize", (methodPointerType)&m10622, &t2008_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4617, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2008_MIs[] =
{
	&m10617_MI,
	&m10618_MI,
	&m10619_MI,
	&m10620_MI,
	&m10621_MI,
	&m10622_MI,
	NULL
};
extern Il2CppType t2007_0_0_1;
FieldInfo t2008_f4_FieldInfo = 
{
	"sha", &t2007_0_0_1, &t2008_TI, offsetof(t2008, f4), &EmptyCustomAttributesCache};
static FieldInfo* t2008_FIs[] =
{
	&t2008_f4_FieldInfo,
	NULL
};
extern MethodInfo m10618_MI;
extern MethodInfo m10620_MI;
extern MethodInfo m10621_MI;
extern MethodInfo m10622_MI;
extern MethodInfo m10619_MI;
static Il2CppMethodReference t2008_VT[] =
{
	&m671_MI,
	&m10618_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	&m10620_MI,
	&m10621_MI,
	&m6943_MI,
	&m10622_MI,
	&m10619_MI,
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
	{ &t1431_0_0_0, 5},
};
void t2008_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t2008_IOs, &t1372_0_0_0, t2008_VT, t2008_VTIGM, NULL};
TypeInfo t2008_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA1CryptoServiceProvider", "System.Security.Cryptography", t2008_MIs, NULL, t2008_FIs, NULL, &t2008_TI, NULL, &t2008__CustomAttributeCache, &t2008_0_0_0, &t2008_1_0_0, &t2008_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2008), sizeof (t2008), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 0, 1, 0, 0, 15, 0, 2};
#include "t2009.h"
// Metadata Definition System.Security.Cryptography.SHA1Managed
extern TypeInfo t2009_TI;
#include "t2009MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10623_MI = 
{
	".ctor", (methodPointerType)&m10623, &t2009_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4618, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2009_m10624_ParameterInfos[] = 
{
	{"rgb", 0, 134223350, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ibStart", 1, 134223351, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223352, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10624_MI = 
{
	"HashCore", (methodPointerType)&m10624, &t2009_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2009_m10624_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4619, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10625_MI = 
{
	"HashFinal", (methodPointerType)&m10625, &t2009_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4620, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10626_MI = 
{
	"Initialize", (methodPointerType)&m10626, &t2009_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4621, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2009_MIs[] =
{
	&m10623_MI,
	&m10624_MI,
	&m10625_MI,
	&m10626_MI,
	NULL
};
extern Il2CppType t2007_0_0_1;
FieldInfo t2009_f4_FieldInfo = 
{
	"sha", &t2007_0_0_1, &t2009_TI, offsetof(t2009, f4), &EmptyCustomAttributesCache};
static FieldInfo* t2009_FIs[] =
{
	&t2009_f4_FieldInfo,
	NULL
};
extern MethodInfo m10624_MI;
extern MethodInfo m10625_MI;
extern MethodInfo m10626_MI;
static Il2CppMethodReference t2009_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	&m10624_MI,
	&m10625_MI,
	&m6943_MI,
	&m10626_MI,
	&m7091_MI,
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
	{ &t1431_0_0_0, 5},
};
void t2009_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t2009_IOs, &t1372_0_0_0, t2009_VT, t2009_VTIGM, NULL};
TypeInfo t2009_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA1Managed", "System.Security.Cryptography", t2009_MIs, NULL, t2009_FIs, NULL, &t2009_TI, NULL, &t2009__CustomAttributeCache, &t2009_0_0_0, &t2009_1_0_0, &t2009_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2009), sizeof (t2009), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 15, 0, 2};
#include "t1540.h"
// Metadata Definition System.Security.Cryptography.SHA256
extern TypeInfo t1540_TI;
#include "t1540MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10627_MI = 
{
	".ctor", (methodPointerType)&m10627, &t1540_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4622, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1540_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6975_MI = 
{
	"Create", (methodPointerType)&m6975, &t1540_TI, &t1540_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4623, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1540_m10628_ParameterInfos[] = 
{
	{"hashName", 0, 134223353, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1540_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10628_MI = 
{
	"Create", (methodPointerType)&m10628, &t1540_TI, &t1540_0_0_0, RuntimeInvoker_t9_t9, t1540_m10628_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4624, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1540_MIs[] =
{
	&m10627_MI,
	&m6975_MI,
	&m10628_MI,
	NULL
};
static Il2CppMethodReference t1540_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	NULL,
	NULL,
	&m6943_MI,
	NULL,
	&m7091_MI,
};
static bool t1540_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1540_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t1540_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1540__CustomAttributeCache = {
1,
NULL,
&t1540_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1540_0_0_0;
extern Il2CppType t1540_1_0_0;
struct t1540;
extern CustomAttributesCache t1540__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1540_DM = 
{
	NULL, NULL, NULL, t1540_IOs, &t1374_0_0_0, t1540_VT, t1540_VTIGM, NULL};
TypeInfo t1540_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA256", "System.Security.Cryptography", t1540_MIs, NULL, NULL, NULL, &t1540_TI, NULL, &t1540__CustomAttributeCache, &t1540_0_0_0, &t1540_1_0_0, &t1540_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1540), sizeof (t1540), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 15, 0, 2};
#include "t2010.h"
// Metadata Definition System.Security.Cryptography.SHA256Managed
extern TypeInfo t2010_TI;
#include "t2010MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10629_MI = 
{
	".ctor", (methodPointerType)&m10629, &t2010_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4625, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2010_m10630_ParameterInfos[] = 
{
	{"rgb", 0, 134223354, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ibStart", 1, 134223355, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223356, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10630_MI = 
{
	"HashCore", (methodPointerType)&m10630, &t2010_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2010_m10630_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4626, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10631_MI = 
{
	"HashFinal", (methodPointerType)&m10631, &t2010_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4627, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10632_MI = 
{
	"Initialize", (methodPointerType)&m10632, &t2010_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4628, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2010_m10633_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223357, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 1, 134223358, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10633_MI = 
{
	"ProcessBlock", (methodPointerType)&m10633, &t2010_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t2010_m10633_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4629, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2010_m10634_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223359, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 1, 134223360, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223361, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10634_MI = 
{
	"ProcessFinalBlock", (methodPointerType)&m10634, &t2010_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2010_m10634_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4630, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2010_m10635_ParameterInfos[] = 
{
	{"length", 0, 134223362, &EmptyCustomAttributesCache, &t896_0_0_0},
	{"buffer", 1, 134223363, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"position", 2, 134223364, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10635_MI = 
{
	"AddLength", (methodPointerType)&m10635, &t2010_TI, &t122_0_0_0, RuntimeInvoker_t122_t303_t9_t125, t2010_m10635_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 3, false, false, 4631, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2010_MIs[] =
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
extern Il2CppType t1418_0_0_1;
FieldInfo t2010_f4_FieldInfo = 
{
	"_H", &t1418_0_0_1, &t2010_TI, offsetof(t2010, f4), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2010_f5_FieldInfo = 
{
	"count", &t896_0_0_1, &t2010_TI, offsetof(t2010, f5), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t2010_f6_FieldInfo = 
{
	"_ProcessingBuffer", &t737_0_0_1, &t2010_TI, offsetof(t2010, f6), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2010_f7_FieldInfo = 
{
	"_ProcessingBufferCount", &t125_0_0_1, &t2010_TI, offsetof(t2010, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_1;
FieldInfo t2010_f8_FieldInfo = 
{
	"buff", &t1418_0_0_1, &t2010_TI, offsetof(t2010, f8), &EmptyCustomAttributesCache};
static FieldInfo* t2010_FIs[] =
{
	&t2010_f4_FieldInfo,
	&t2010_f5_FieldInfo,
	&t2010_f6_FieldInfo,
	&t2010_f7_FieldInfo,
	&t2010_f8_FieldInfo,
	NULL
};
extern MethodInfo m10630_MI;
extern MethodInfo m10631_MI;
extern MethodInfo m10632_MI;
static Il2CppMethodReference t2010_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	&m10630_MI,
	&m10631_MI,
	&m6943_MI,
	&m10632_MI,
	&m7091_MI,
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
};
static Il2CppInterfaceOffsetPair t2010_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t2010_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2010__CustomAttributeCache = {
1,
NULL,
&t2010_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2010_0_0_0;
extern Il2CppType t2010_1_0_0;
struct t2010;
extern CustomAttributesCache t2010__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2010_DM = 
{
	NULL, NULL, NULL, t2010_IOs, &t1540_0_0_0, t2010_VT, t2010_VTIGM, NULL};
TypeInfo t2010_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA256Managed", "System.Security.Cryptography", t2010_MIs, NULL, t2010_FIs, NULL, &t2010_TI, NULL, &t2010__CustomAttributeCache, &t2010_0_0_0, &t2010_1_0_0, &t2010_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2010), sizeof (t2010), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 7, 0, 5, 0, 0, 15, 0, 2};
#include "t2011.h"
// Metadata Definition System.Security.Cryptography.SHA384
extern TypeInfo t2011_TI;
#include "t2011MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10636_MI = 
{
	".ctor", (methodPointerType)&m10636, &t2011_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4632, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2011_MIs[] =
{
	&m10636_MI,
	NULL
};
static Il2CppMethodReference t2011_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	NULL,
	NULL,
	&m6943_MI,
	NULL,
	&m7091_MI,
};
static bool t2011_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2011_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t2011_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t2011_IOs, &t1374_0_0_0, t2011_VT, t2011_VTIGM, NULL};
TypeInfo t2011_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA384", "System.Security.Cryptography", t2011_MIs, NULL, NULL, NULL, &t2011_TI, NULL, &t2011__CustomAttributeCache, &t2011_0_0_0, &t2011_1_0_0, &t2011_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2011), sizeof (t2011), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 15, 0, 2};
#include "t2012.h"
// Metadata Definition System.Security.Cryptography.SHA384Managed
extern TypeInfo t2012_TI;
#include "t2012MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10637_MI = 
{
	".ctor", (methodPointerType)&m10637, &t2012_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4633, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t2012_m10638_ParameterInfos[] = 
{
	{"reuse", 0, 134223365, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10638_MI = 
{
	"Initialize", (methodPointerType)&m10638, &t2012_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t2012_m10638_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4634, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10639_MI = 
{
	"Initialize", (methodPointerType)&m10639, &t2012_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4635, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2012_m10640_ParameterInfos[] = 
{
	{"rgb", 0, 134223366, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ibStart", 1, 134223367, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223368, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10640_MI = 
{
	"HashCore", (methodPointerType)&m10640, &t2012_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2012_m10640_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4636, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10641_MI = 
{
	"HashFinal", (methodPointerType)&m10641, &t2012_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4637, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t582_0_0_0;
extern Il2CppType t582_0_0_0;
static ParameterInfo t2012_m10642_ParameterInfos[] = 
{
	{"input", 0, 134223369, &EmptyCustomAttributesCache, &t582_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10642_MI = 
{
	"update", (methodPointerType)&m10642, &t2012_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t2012_m10642_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4638, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2012_m10643_ParameterInfos[] = 
{
	{"input", 0, 134223370, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inOff", 1, 134223371, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10643_MI = 
{
	"processWord", (methodPointerType)&m10643, &t2012_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t2012_m10643_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4639, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2012_m10644_ParameterInfos[] = 
{
	{"word", 0, 134223372, &EmptyCustomAttributesCache, &t896_0_0_0},
	{"output", 1, 134223373, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"outOff", 2, 134223374, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10644_MI = 
{
	"unpackWord", (methodPointerType)&m10644, &t2012_TI, &t122_0_0_0, RuntimeInvoker_t122_t303_t9_t125, t2012_m10644_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4640, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10645_MI = 
{
	"adjustByteCounts", (methodPointerType)&m10645, &t2012_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4641, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
extern Il2CppType t896_0_0_0;
static ParameterInfo t2012_m10646_ParameterInfos[] = 
{
	{"lowW", 0, 134223375, &EmptyCustomAttributesCache, &t896_0_0_0},
	{"hiW", 1, 134223376, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10646_MI = 
{
	"processLength", (methodPointerType)&m10646, &t2012_TI, &t122_0_0_0, RuntimeInvoker_t122_t303_t303, t2012_m10646_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4642, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10647_MI = 
{
	"processBlock", (methodPointerType)&m10647, &t2012_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4643, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2012_MIs[] =
{
	&m10637_MI,
	&m10638_MI,
	&m10639_MI,
	&m10640_MI,
	&m10641_MI,
	&m10642_MI,
	&m10643_MI,
	&m10644_MI,
	&m10645_MI,
	&m10646_MI,
	&m10647_MI,
	NULL
};
extern Il2CppType t737_0_0_1;
FieldInfo t2012_f4_FieldInfo = 
{
	"xBuf", &t737_0_0_1, &t2012_TI, offsetof(t2012, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2012_f5_FieldInfo = 
{
	"xBufOff", &t125_0_0_1, &t2012_TI, offsetof(t2012, f5), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2012_f6_FieldInfo = 
{
	"byteCount1", &t896_0_0_1, &t2012_TI, offsetof(t2012, f6), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2012_f7_FieldInfo = 
{
	"byteCount2", &t896_0_0_1, &t2012_TI, offsetof(t2012, f7), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2012_f8_FieldInfo = 
{
	"H1", &t896_0_0_1, &t2012_TI, offsetof(t2012, f8), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2012_f9_FieldInfo = 
{
	"H2", &t896_0_0_1, &t2012_TI, offsetof(t2012, f9), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2012_f10_FieldInfo = 
{
	"H3", &t896_0_0_1, &t2012_TI, offsetof(t2012, f10), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2012_f11_FieldInfo = 
{
	"H4", &t896_0_0_1, &t2012_TI, offsetof(t2012, f11), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2012_f12_FieldInfo = 
{
	"H5", &t896_0_0_1, &t2012_TI, offsetof(t2012, f12), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2012_f13_FieldInfo = 
{
	"H6", &t896_0_0_1, &t2012_TI, offsetof(t2012, f13), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2012_f14_FieldInfo = 
{
	"H7", &t896_0_0_1, &t2012_TI, offsetof(t2012, f14), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2012_f15_FieldInfo = 
{
	"H8", &t896_0_0_1, &t2012_TI, offsetof(t2012, f15), &EmptyCustomAttributesCache};
extern Il2CppType t2013_0_0_1;
FieldInfo t2012_f16_FieldInfo = 
{
	"W", &t2013_0_0_1, &t2012_TI, offsetof(t2012, f16), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2012_f17_FieldInfo = 
{
	"wOff", &t125_0_0_1, &t2012_TI, offsetof(t2012, f17), &EmptyCustomAttributesCache};
static FieldInfo* t2012_FIs[] =
{
	&t2012_f4_FieldInfo,
	&t2012_f5_FieldInfo,
	&t2012_f6_FieldInfo,
	&t2012_f7_FieldInfo,
	&t2012_f8_FieldInfo,
	&t2012_f9_FieldInfo,
	&t2012_f10_FieldInfo,
	&t2012_f11_FieldInfo,
	&t2012_f12_FieldInfo,
	&t2012_f13_FieldInfo,
	&t2012_f14_FieldInfo,
	&t2012_f15_FieldInfo,
	&t2012_f16_FieldInfo,
	&t2012_f17_FieldInfo,
	NULL
};
extern MethodInfo m10640_MI;
extern MethodInfo m10641_MI;
extern MethodInfo m10639_MI;
static Il2CppMethodReference t2012_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	&m10640_MI,
	&m10641_MI,
	&m6943_MI,
	&m10639_MI,
	&m7091_MI,
};
static bool t2012_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2012_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t2012_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t2012_IOs, &t2011_0_0_0, t2012_VT, t2012_VTIGM, NULL};
TypeInfo t2012_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA384Managed", "System.Security.Cryptography", t2012_MIs, NULL, t2012_FIs, NULL, &t2012_TI, NULL, &t2012__CustomAttributeCache, &t2012_0_0_0, &t2012_1_0_0, &t2012_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2012), sizeof (t2012), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 11, 0, 14, 0, 0, 15, 0, 2};
#include "t2014.h"
// Metadata Definition System.Security.Cryptography.SHA512
extern TypeInfo t2014_TI;
#include "t2014MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10648_MI = 
{
	".ctor", (methodPointerType)&m10648, &t2014_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4644, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2014_MIs[] =
{
	&m10648_MI,
	NULL
};
static Il2CppMethodReference t2014_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	NULL,
	NULL,
	&m6943_MI,
	NULL,
	&m7091_MI,
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
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2014_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t2014_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t2014_IOs, &t1374_0_0_0, t2014_VT, t2014_VTIGM, NULL};
TypeInfo t2014_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA512", "System.Security.Cryptography", t2014_MIs, NULL, NULL, NULL, &t2014_TI, NULL, &t2014__CustomAttributeCache, &t2014_0_0_0, &t2014_1_0_0, &t2014_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2014), sizeof (t2014), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 15, 0, 2};
#include "t2015.h"
// Metadata Definition System.Security.Cryptography.SHA512Managed
extern TypeInfo t2015_TI;
#include "t2015MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10649_MI = 
{
	".ctor", (methodPointerType)&m10649, &t2015_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4645, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t2015_m10650_ParameterInfos[] = 
{
	{"reuse", 0, 134223377, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10650_MI = 
{
	"Initialize", (methodPointerType)&m10650, &t2015_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t2015_m10650_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4646, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10651_MI = 
{
	"Initialize", (methodPointerType)&m10651, &t2015_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4647, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2015_m10652_ParameterInfos[] = 
{
	{"rgb", 0, 134223378, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ibStart", 1, 134223379, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cbSize", 2, 134223380, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10652_MI = 
{
	"HashCore", (methodPointerType)&m10652, &t2015_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t2015_m10652_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4648, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10653_MI = 
{
	"HashFinal", (methodPointerType)&m10653, &t2015_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4649, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t582_0_0_0;
static ParameterInfo t2015_m10654_ParameterInfos[] = 
{
	{"input", 0, 134223381, &EmptyCustomAttributesCache, &t582_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10654_MI = 
{
	"update", (methodPointerType)&m10654, &t2015_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t2015_m10654_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4650, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2015_m10655_ParameterInfos[] = 
{
	{"input", 0, 134223382, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inOff", 1, 134223383, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10655_MI = 
{
	"processWord", (methodPointerType)&m10655, &t2015_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t2015_m10655_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4651, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2015_m10656_ParameterInfos[] = 
{
	{"word", 0, 134223384, &EmptyCustomAttributesCache, &t896_0_0_0},
	{"output", 1, 134223385, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"outOff", 2, 134223386, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10656_MI = 
{
	"unpackWord", (methodPointerType)&m10656, &t2015_TI, &t122_0_0_0, RuntimeInvoker_t122_t303_t9_t125, t2015_m10656_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4652, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10657_MI = 
{
	"adjustByteCounts", (methodPointerType)&m10657, &t2015_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4653, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
extern Il2CppType t896_0_0_0;
static ParameterInfo t2015_m10658_ParameterInfos[] = 
{
	{"lowW", 0, 134223387, &EmptyCustomAttributesCache, &t896_0_0_0},
	{"hiW", 1, 134223388, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10658_MI = 
{
	"processLength", (methodPointerType)&m10658, &t2015_TI, &t122_0_0_0, RuntimeInvoker_t122_t303_t303, t2015_m10658_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4654, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10659_MI = 
{
	"processBlock", (methodPointerType)&m10659, &t2015_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4655, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2015_m10660_ParameterInfos[] = 
{
	{"x", 0, 134223389, &EmptyCustomAttributesCache, &t896_0_0_0},
	{"n", 1, 134223390, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t896_0_0_0;
extern void* RuntimeInvoker_t896_t303_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10660_MI = 
{
	"rotateRight", (methodPointerType)&m10660, &t2015_TI, &t896_0_0_0, RuntimeInvoker_t896_t303_t125, t2015_m10660_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4656, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
extern Il2CppType t896_0_0_0;
extern Il2CppType t896_0_0_0;
static ParameterInfo t2015_m10661_ParameterInfos[] = 
{
	{"x", 0, 134223391, &EmptyCustomAttributesCache, &t896_0_0_0},
	{"y", 1, 134223392, &EmptyCustomAttributesCache, &t896_0_0_0},
	{"z", 2, 134223393, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern Il2CppType t896_0_0_0;
extern void* RuntimeInvoker_t896_t303_t303_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10661_MI = 
{
	"Ch", (methodPointerType)&m10661, &t2015_TI, &t896_0_0_0, RuntimeInvoker_t896_t303_t303_t303, t2015_m10661_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4657, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
extern Il2CppType t896_0_0_0;
extern Il2CppType t896_0_0_0;
static ParameterInfo t2015_m10662_ParameterInfos[] = 
{
	{"x", 0, 134223394, &EmptyCustomAttributesCache, &t896_0_0_0},
	{"y", 1, 134223395, &EmptyCustomAttributesCache, &t896_0_0_0},
	{"z", 2, 134223396, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern Il2CppType t896_0_0_0;
extern void* RuntimeInvoker_t896_t303_t303_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10662_MI = 
{
	"Maj", (methodPointerType)&m10662, &t2015_TI, &t896_0_0_0, RuntimeInvoker_t896_t303_t303_t303, t2015_m10662_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4658, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
static ParameterInfo t2015_m10663_ParameterInfos[] = 
{
	{"x", 0, 134223397, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern Il2CppType t896_0_0_0;
extern void* RuntimeInvoker_t896_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10663_MI = 
{
	"Sum0", (methodPointerType)&m10663, &t2015_TI, &t896_0_0_0, RuntimeInvoker_t896_t303, t2015_m10663_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4659, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
static ParameterInfo t2015_m10664_ParameterInfos[] = 
{
	{"x", 0, 134223398, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern Il2CppType t896_0_0_0;
extern void* RuntimeInvoker_t896_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10664_MI = 
{
	"Sum1", (methodPointerType)&m10664, &t2015_TI, &t896_0_0_0, RuntimeInvoker_t896_t303, t2015_m10664_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4660, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
static ParameterInfo t2015_m10665_ParameterInfos[] = 
{
	{"x", 0, 134223399, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern Il2CppType t896_0_0_0;
extern void* RuntimeInvoker_t896_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10665_MI = 
{
	"Sigma0", (methodPointerType)&m10665, &t2015_TI, &t896_0_0_0, RuntimeInvoker_t896_t303, t2015_m10665_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4661, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
static ParameterInfo t2015_m10666_ParameterInfos[] = 
{
	{"x", 0, 134223400, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern Il2CppType t896_0_0_0;
extern void* RuntimeInvoker_t896_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10666_MI = 
{
	"Sigma1", (methodPointerType)&m10666, &t2015_TI, &t896_0_0_0, RuntimeInvoker_t896_t303, t2015_m10666_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4662, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2015_MIs[] =
{
	&m10649_MI,
	&m10650_MI,
	&m10651_MI,
	&m10652_MI,
	&m10653_MI,
	&m10654_MI,
	&m10655_MI,
	&m10656_MI,
	&m10657_MI,
	&m10658_MI,
	&m10659_MI,
	&m10660_MI,
	&m10661_MI,
	&m10662_MI,
	&m10663_MI,
	&m10664_MI,
	&m10665_MI,
	&m10666_MI,
	NULL
};
extern Il2CppType t737_0_0_1;
FieldInfo t2015_f4_FieldInfo = 
{
	"xBuf", &t737_0_0_1, &t2015_TI, offsetof(t2015, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2015_f5_FieldInfo = 
{
	"xBufOff", &t125_0_0_1, &t2015_TI, offsetof(t2015, f5), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2015_f6_FieldInfo = 
{
	"byteCount1", &t896_0_0_1, &t2015_TI, offsetof(t2015, f6), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2015_f7_FieldInfo = 
{
	"byteCount2", &t896_0_0_1, &t2015_TI, offsetof(t2015, f7), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2015_f8_FieldInfo = 
{
	"H1", &t896_0_0_1, &t2015_TI, offsetof(t2015, f8), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2015_f9_FieldInfo = 
{
	"H2", &t896_0_0_1, &t2015_TI, offsetof(t2015, f9), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2015_f10_FieldInfo = 
{
	"H3", &t896_0_0_1, &t2015_TI, offsetof(t2015, f10), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2015_f11_FieldInfo = 
{
	"H4", &t896_0_0_1, &t2015_TI, offsetof(t2015, f11), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2015_f12_FieldInfo = 
{
	"H5", &t896_0_0_1, &t2015_TI, offsetof(t2015, f12), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2015_f13_FieldInfo = 
{
	"H6", &t896_0_0_1, &t2015_TI, offsetof(t2015, f13), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2015_f14_FieldInfo = 
{
	"H7", &t896_0_0_1, &t2015_TI, offsetof(t2015, f14), &EmptyCustomAttributesCache};
extern Il2CppType t896_0_0_1;
FieldInfo t2015_f15_FieldInfo = 
{
	"H8", &t896_0_0_1, &t2015_TI, offsetof(t2015, f15), &EmptyCustomAttributesCache};
extern Il2CppType t2013_0_0_1;
FieldInfo t2015_f16_FieldInfo = 
{
	"W", &t2013_0_0_1, &t2015_TI, offsetof(t2015, f16), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2015_f17_FieldInfo = 
{
	"wOff", &t125_0_0_1, &t2015_TI, offsetof(t2015, f17), &EmptyCustomAttributesCache};
static FieldInfo* t2015_FIs[] =
{
	&t2015_f4_FieldInfo,
	&t2015_f5_FieldInfo,
	&t2015_f6_FieldInfo,
	&t2015_f7_FieldInfo,
	&t2015_f8_FieldInfo,
	&t2015_f9_FieldInfo,
	&t2015_f10_FieldInfo,
	&t2015_f11_FieldInfo,
	&t2015_f12_FieldInfo,
	&t2015_f13_FieldInfo,
	&t2015_f14_FieldInfo,
	&t2015_f15_FieldInfo,
	&t2015_f16_FieldInfo,
	&t2015_f17_FieldInfo,
	NULL
};
extern MethodInfo m10652_MI;
extern MethodInfo m10653_MI;
extern MethodInfo m10651_MI;
static Il2CppMethodReference t2015_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7089_MI,
	&m7090_MI,
	&m6955_MI,
	&m6956_MI,
	&m7090_MI,
	&m6957_MI,
	&m10652_MI,
	&m10653_MI,
	&m6943_MI,
	&m10651_MI,
	&m7091_MI,
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
};
static Il2CppInterfaceOffsetPair t2015_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t2015_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t2015_IOs, &t2014_0_0_0, t2015_VT, t2015_VTIGM, NULL};
TypeInfo t2015_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHA512Managed", "System.Security.Cryptography", t2015_MIs, NULL, t2015_FIs, NULL, &t2015_TI, NULL, &t2015__CustomAttributeCache, &t2015_0_0_0, &t2015_1_0_0, &t2015_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2015), sizeof (t2015), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 18, 0, 14, 0, 0, 15, 0, 2};
#include "t2016.h"
// Metadata Definition System.Security.Cryptography.SHAConstants
extern TypeInfo t2016_TI;
#include "t2016MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10667_MI = 
{
	".cctor", (methodPointerType)&m10667, &t2016_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4663, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2016_MIs[] =
{
	&m10667_MI,
	NULL
};
extern Il2CppType t1418_0_0_54;
FieldInfo t2016_f0_FieldInfo = 
{
	"K1", &t1418_0_0_54, &t2016_TI, offsetof(t2016_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2013_0_0_54;
FieldInfo t2016_f1_FieldInfo = 
{
	"K2", &t2013_0_0_54, &t2016_TI, offsetof(t2016_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2016_FIs[] =
{
	&t2016_f0_FieldInfo,
	&t2016_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t2016_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2016_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2016_0_0_0;
extern Il2CppType t2016_1_0_0;
struct t2016;
const Il2CppTypeDefinitionMetadata t2016_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2016_VT, t2016_VTIGM, NULL};
TypeInfo t2016_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SHAConstants", "System.Security.Cryptography", t2016_MIs, NULL, t2016_FIs, NULL, &t2016_TI, NULL, &EmptyCustomAttributesCache, &t2016_0_0_0, &t2016_1_0_0, &t2016_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2016), sizeof (t2016), 0, -1, sizeof(t2016_SFs), 0, -1, 1048960, 0, 0, false, false, false, false, false, false, false, false, true, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t2017.h"
// Metadata Definition System.Security.Cryptography.SignatureDescription
extern TypeInfo t2017_TI;
#include "t2017MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10668_MI = 
{
	".ctor", (methodPointerType)&m10668, &t2017_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4664, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2017_m10669_ParameterInfos[] = 
{
	{"value", 0, 134223401, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10669_MI = 
{
	"set_DeformatterAlgorithm", (methodPointerType)&m10669, &t2017_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2017_m10669_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4665, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2017_m10670_ParameterInfos[] = 
{
	{"value", 0, 134223402, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10670_MI = 
{
	"set_DigestAlgorithm", (methodPointerType)&m10670, &t2017_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2017_m10670_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4666, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2017_m10671_ParameterInfos[] = 
{
	{"value", 0, 134223403, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10671_MI = 
{
	"set_FormatterAlgorithm", (methodPointerType)&m10671, &t2017_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2017_m10671_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4667, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2017_m10672_ParameterInfos[] = 
{
	{"value", 0, 134223404, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10672_MI = 
{
	"set_KeyAlgorithm", (methodPointerType)&m10672, &t2017_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2017_m10672_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4668, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2017_MIs[] =
{
	&m10668_MI,
	&m10669_MI,
	&m10670_MI,
	&m10671_MI,
	&m10672_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2017_f0_FieldInfo = 
{
	"_DeformatterAlgorithm", &t2_0_0_1, &t2017_TI, offsetof(t2017, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2017_f1_FieldInfo = 
{
	"_DigestAlgorithm", &t2_0_0_1, &t2017_TI, offsetof(t2017, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2017_f2_FieldInfo = 
{
	"_FormatterAlgorithm", &t2_0_0_1, &t2017_TI, offsetof(t2017, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2017_f3_FieldInfo = 
{
	"_KeyAlgorithm", &t2_0_0_1, &t2017_TI, offsetof(t2017, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2017_FIs[] =
{
	&t2017_f0_FieldInfo,
	&t2017_f1_FieldInfo,
	&t2017_f2_FieldInfo,
	&t2017_f3_FieldInfo,
	NULL
};
extern MethodInfo m10669_MI;
static PropertyInfo t2017____DeformatterAlgorithm_PropertyInfo = 
{
	&t2017_TI, "DeformatterAlgorithm", NULL, &m10669_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10670_MI;
static PropertyInfo t2017____DigestAlgorithm_PropertyInfo = 
{
	&t2017_TI, "DigestAlgorithm", NULL, &m10670_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10671_MI;
static PropertyInfo t2017____FormatterAlgorithm_PropertyInfo = 
{
	&t2017_TI, "FormatterAlgorithm", NULL, &m10671_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10672_MI;
static PropertyInfo t2017____KeyAlgorithm_PropertyInfo = 
{
	&t2017_TI, "KeyAlgorithm", NULL, &m10672_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2017_PIs[] =
{
	&t2017____DeformatterAlgorithm_PropertyInfo,
	&t2017____DigestAlgorithm_PropertyInfo,
	&t2017____FormatterAlgorithm_PropertyInfo,
	&t2017____KeyAlgorithm_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2017_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2017_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t2017_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2017_VT, t2017_VTIGM, NULL};
TypeInfo t2017_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SignatureDescription", "System.Security.Cryptography", t2017_MIs, t2017_PIs, t2017_FIs, NULL, &t2017_TI, NULL, &t2017__CustomAttributeCache, &t2017_0_0_0, &t2017_1_0_0, &t2017_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2017), sizeof (t2017), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 4, 4, 0, 0, 4, 0, 0};
#include "t2018.h"
// Metadata Definition System.Security.Cryptography.DSASignatureDescription
extern TypeInfo t2018_TI;
#include "t2018MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10673_MI = 
{
	".ctor", (methodPointerType)&m10673, &t2018_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4669, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2018_MIs[] =
{
	&m10673_MI,
	NULL
};
static Il2CppMethodReference t2018_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2018_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2018_0_0_0;
extern Il2CppType t2018_1_0_0;
struct t2018;
const Il2CppTypeDefinitionMetadata t2018_DM = 
{
	NULL, NULL, NULL, NULL, &t2017_0_0_0, t2018_VT, t2018_VTIGM, NULL};
TypeInfo t2018_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSASignatureDescription", "System.Security.Cryptography", t2018_MIs, NULL, NULL, NULL, &t2018_TI, NULL, &EmptyCustomAttributesCache, &t2018_0_0_0, &t2018_1_0_0, &t2018_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2018), sizeof (t2018), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t2019.h"
// Metadata Definition System.Security.Cryptography.RSAPKCS1SHA1SignatureDescription
extern TypeInfo t2019_TI;
#include "t2019MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10674_MI = 
{
	".ctor", (methodPointerType)&m10674, &t2019_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4670, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2019_MIs[] =
{
	&m10674_MI,
	NULL
};
static Il2CppMethodReference t2019_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2019_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2019_0_0_0;
extern Il2CppType t2019_1_0_0;
struct t2019;
const Il2CppTypeDefinitionMetadata t2019_DM = 
{
	NULL, NULL, NULL, NULL, &t2017_0_0_0, t2019_VT, t2019_VTIGM, NULL};
TypeInfo t2019_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RSAPKCS1SHA1SignatureDescription", "System.Security.Cryptography", t2019_MIs, NULL, NULL, NULL, &t2019_TI, NULL, &EmptyCustomAttributesCache, &t2019_0_0_0, &t2019_1_0_0, &t2019_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2019), sizeof (t2019), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t1440.h"
// Metadata Definition System.Security.Cryptography.SymmetricAlgorithm
extern TypeInfo t1440_TI;
#include "t1440MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6949_MI = 
{
	".ctor", (methodPointerType)&m6949, &t1440_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4671, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7082_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m7082, &t1440_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 4672, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6936_MI = 
{
	"Finalize", (methodPointerType)&m6936, &t1440_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4673, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6969_MI = 
{
	"Clear", (methodPointerType)&m6969, &t1440_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4674, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1440_m7092_ParameterInfos[] = 
{
	{"disposing", 0, 134223405, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m7092_MI = 
{
	"Dispose", (methodPointerType)&m7092, &t1440_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1440_m7092_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 5, 1, false, false, 4675, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7083_MI = 
{
	"get_BlockSize", (methodPointerType)&m7083, &t1440_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 4676, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1440_m7006_ParameterInfos[] = 
{
	{"value", 0, 134223406, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7006_MI = 
{
	"set_BlockSize", (methodPointerType)&m7006, &t1440_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1440_m7006_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 7, 1, false, false, 4677, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7084_MI = 
{
	"get_FeedbackSize", (methodPointerType)&m7084, &t1440_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 4678, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10675_MI = 
{
	"get_IV", (methodPointerType)&m10675, &t1440_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 4679, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1440_m6965_ParameterInfos[] = 
{
	{"value", 0, 134223407, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6965_MI = 
{
	"set_IV", (methodPointerType)&m6965, &t1440_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1440_m6965_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 10, 1, false, false, 4680, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7093_MI = 
{
	"get_Key", (methodPointerType)&m7093, &t1440_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 4681, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1440_m6964_ParameterInfos[] = 
{
	{"value", 0, 134223408, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6964_MI = 
{
	"set_Key", (methodPointerType)&m6964, &t1440_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1440_m6964_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 12, 1, false, false, 4682, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7085_MI = 
{
	"get_KeySize", (methodPointerType)&m7085, &t1440_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 13, 0, false, false, 4683, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1440_m7005_ParameterInfos[] = 
{
	{"value", 0, 134223409, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7005_MI = 
{
	"set_KeySize", (methodPointerType)&m7005, &t1440_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1440_m7005_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 14, 1, false, false, 4684, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1439_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7086_MI = 
{
	"get_LegalKeySizes", (methodPointerType)&m7086, &t1440_TI, &t1439_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 15, 0, false, false, 4685, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1466_0_0_0;
extern void* RuntimeInvoker_t1466 (MethodInfo* method, void* obj, void** args);
MethodInfo m7087_MI = 
{
	"get_Mode", (methodPointerType)&m7087, &t1440_TI, &t1466_0_0_0, RuntimeInvoker_t1466, NULL, &EmptyCustomAttributesCache, 2502, 0, 16, 0, false, false, 4686, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1466_0_0_0;
extern Il2CppType t1466_0_0_0;
static ParameterInfo t1440_m6966_ParameterInfos[] = 
{
	{"value", 0, 134223410, &EmptyCustomAttributesCache, &t1466_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6966_MI = 
{
	"set_Mode", (methodPointerType)&m6966, &t1440_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1440_m6966_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 17, 1, false, false, 4687, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1550_0_0_0;
extern void* RuntimeInvoker_t1550 (MethodInfo* method, void* obj, void** args);
MethodInfo m7088_MI = 
{
	"get_Padding", (methodPointerType)&m7088, &t1440_TI, &t1550_0_0_0, RuntimeInvoker_t1550, NULL, &EmptyCustomAttributesCache, 2502, 0, 18, 0, false, false, 4688, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1550_0_0_0;
static ParameterInfo t1440_m7004_ParameterInfos[] = 
{
	{"value", 0, 134223411, &EmptyCustomAttributesCache, &t1550_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7004_MI = 
{
	"set_Padding", (methodPointerType)&m7004, &t1440_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1440_m7004_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 19, 1, false, false, 4689, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1431_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6967_MI = 
{
	"CreateDecryptor", (methodPointerType)&m6967, &t1440_TI, &t1431_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 20, 0, false, false, 4690, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1440_m12142_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223412, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"rgbIV", 1, 134223413, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t1431_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12142_MI = 
{
	"CreateDecryptor", NULL, &t1440_TI, &t1431_0_0_0, RuntimeInvoker_t9_t9_t9, t1440_m12142_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 21, 2, false, false, 4691, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1431_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6938_MI = 
{
	"CreateEncryptor", (methodPointerType)&m6938, &t1440_TI, &t1431_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 22, 0, false, false, 4692, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1440_m12143_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223414, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"rgbIV", 1, 134223415, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t1431_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12143_MI = 
{
	"CreateEncryptor", NULL, &t1440_TI, &t1431_0_0_0, RuntimeInvoker_t9_t9_t9, t1440_m12143_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 23, 2, false, false, 4693, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m12141_MI = 
{
	"GenerateIV", NULL, &t1440_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 1478, 0, 24, 0, false, false, 4694, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m12134_MI = 
{
	"GenerateKey", NULL, &t1440_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 1478, 0, 25, 0, false, false, 4695, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1440_m6963_ParameterInfos[] = 
{
	{"algName", 0, 134223416, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1440_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6963_MI = 
{
	"Create", (methodPointerType)&m6963, &t1440_TI, &t1440_0_0_0, RuntimeInvoker_t9_t9, t1440_m6963_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4696, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1440_MIs[] =
{
	&m6949_MI,
	&m7082_MI,
	&m6936_MI,
	&m6969_MI,
	&m7092_MI,
	&m7083_MI,
	&m7006_MI,
	&m7084_MI,
	&m10675_MI,
	&m6965_MI,
	&m7093_MI,
	&m6964_MI,
	&m7085_MI,
	&m7005_MI,
	&m7086_MI,
	&m7087_MI,
	&m6966_MI,
	&m7088_MI,
	&m7004_MI,
	&m6967_MI,
	&m12142_MI,
	&m6938_MI,
	&m12143_MI,
	&m12141_MI,
	&m12134_MI,
	&m6963_MI,
	NULL
};
extern Il2CppType t125_0_0_4;
FieldInfo t1440_f0_FieldInfo = 
{
	"BlockSizeValue", &t125_0_0_4, &t1440_TI, offsetof(t1440, f0), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_4;
FieldInfo t1440_f1_FieldInfo = 
{
	"IVValue", &t737_0_0_4, &t1440_TI, offsetof(t1440, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_4;
FieldInfo t1440_f2_FieldInfo = 
{
	"KeySizeValue", &t125_0_0_4, &t1440_TI, offsetof(t1440, f2), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_4;
FieldInfo t1440_f3_FieldInfo = 
{
	"KeyValue", &t737_0_0_4, &t1440_TI, offsetof(t1440, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1439_0_0_4;
FieldInfo t1440_f4_FieldInfo = 
{
	"LegalBlockSizesValue", &t1439_0_0_4, &t1440_TI, offsetof(t1440, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1439_0_0_4;
FieldInfo t1440_f5_FieldInfo = 
{
	"LegalKeySizesValue", &t1439_0_0_4, &t1440_TI, offsetof(t1440, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_4;
FieldInfo t1440_f6_FieldInfo = 
{
	"FeedbackSizeValue", &t125_0_0_4, &t1440_TI, offsetof(t1440, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1466_0_0_4;
FieldInfo t1440_f7_FieldInfo = 
{
	"ModeValue", &t1466_0_0_4, &t1440_TI, offsetof(t1440, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1550_0_0_4;
FieldInfo t1440_f8_FieldInfo = 
{
	"PaddingValue", &t1550_0_0_4, &t1440_TI, offsetof(t1440, f8), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1440_f9_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t1440_TI, offsetof(t1440, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1440_FIs[] =
{
	&t1440_f0_FieldInfo,
	&t1440_f1_FieldInfo,
	&t1440_f2_FieldInfo,
	&t1440_f3_FieldInfo,
	&t1440_f4_FieldInfo,
	&t1440_f5_FieldInfo,
	&t1440_f6_FieldInfo,
	&t1440_f7_FieldInfo,
	&t1440_f8_FieldInfo,
	&t1440_f9_FieldInfo,
	NULL
};
static PropertyInfo t1440____BlockSize_PropertyInfo = 
{
	&t1440_TI, "BlockSize", &m7083_MI, &m7006_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1440____FeedbackSize_PropertyInfo = 
{
	&t1440_TI, "FeedbackSize", &m7084_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1440____IV_PropertyInfo = 
{
	&t1440_TI, "IV", &m10675_MI, &m6965_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1440____Key_PropertyInfo = 
{
	&t1440_TI, "Key", &m7093_MI, &m6964_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1440____KeySize_PropertyInfo = 
{
	&t1440_TI, "KeySize", &m7085_MI, &m7005_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1440____LegalKeySizes_PropertyInfo = 
{
	&t1440_TI, "LegalKeySizes", &m7086_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1440____Mode_PropertyInfo = 
{
	&t1440_TI, "Mode", &m7087_MI, &m6966_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1440____Padding_PropertyInfo = 
{
	&t1440_TI, "Padding", &m7088_MI, &m7004_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1440_PIs[] =
{
	&t1440____BlockSize_PropertyInfo,
	&t1440____FeedbackSize_PropertyInfo,
	&t1440____IV_PropertyInfo,
	&t1440____Key_PropertyInfo,
	&t1440____KeySize_PropertyInfo,
	&t1440____LegalKeySizes_PropertyInfo,
	&t1440____Mode_PropertyInfo,
	&t1440____Padding_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1440_VT[] =
{
	&m671_MI,
	&m6936_MI,
	&m672_MI,
	&m673_MI,
	&m7082_MI,
	&m7092_MI,
	&m7083_MI,
	&m7006_MI,
	&m7084_MI,
	&m10675_MI,
	&m6965_MI,
	&m7093_MI,
	&m6964_MI,
	&m7085_MI,
	&m7005_MI,
	&m7086_MI,
	&m7087_MI,
	&m6966_MI,
	&m7088_MI,
	&m7004_MI,
	&m6967_MI,
	NULL,
	&m6938_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1440_VTIGM[] =
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
static const Il2CppType* t1440_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1440_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1440_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1440__CustomAttributeCache = {
1,
NULL,
&t1440_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1440_1_0_0;
struct t1440;
extern CustomAttributesCache t1440__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1440_DM = 
{
	NULL, NULL, t1440_ITIs, t1440_IOs, &t9_0_0_0, t1440_VT, t1440_VTIGM, NULL};
TypeInfo t1440_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SymmetricAlgorithm", "System.Security.Cryptography", t1440_MIs, t1440_PIs, t1440_FIs, NULL, &t1440_TI, NULL, &t1440__CustomAttributeCache, &t1440_0_0_0, &t1440_1_0_0, &t1440_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1440), sizeof (t1440), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 26, 8, 10, 0, 0, 26, 1, 1};
#include "t2020.h"
// Metadata Definition System.Security.Cryptography.ToBase64Transform
extern TypeInfo t2020_TI;
#include "t2020MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10676_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m10676, &t2020_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 4697, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10677_MI = 
{
	"Finalize", (methodPointerType)&m10677, &t2020_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4698, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10678_MI = 
{
	"get_CanReuseTransform", (methodPointerType)&m10678, &t2020_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 4699, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10679_MI = 
{
	"get_InputBlockSize", (methodPointerType)&m10679, &t2020_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, false, 4700, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10680_MI = 
{
	"get_OutputBlockSize", (methodPointerType)&m10680, &t2020_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, false, 4701, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t2020_m10681_ParameterInfos[] = 
{
	{"disposing", 0, 134223417, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10681_MI = 
{
	"Dispose", (methodPointerType)&m10681, &t2020_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t2020_m10681_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 11, 1, false, false, 4702, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2020_m10682_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223418, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 1, 134223419, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223420, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"outputBuffer", 3, 134223421, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"outputOffset", 4, 134223422, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10682_MI = 
{
	"TransformBlock", (methodPointerType)&m10682, &t2020_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2020_m10682_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 5, false, false, 4703, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2020_m10683_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223423, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 1, 134223424, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223425, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"outputBuffer", 3, 134223426, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"outputOffset", 4, 134223427, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10683_MI = 
{
	"InternalTransformBlock", (methodPointerType)&m10683, &t2020_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t9_t125, t2020_m10683_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 5, false, false, 4704, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2020_m10684_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223428, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 1, 134223429, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223430, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10684_MI = 
{
	"TransformFinalBlock", (methodPointerType)&m10684, &t2020_TI, &t737_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t2020_m10684_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 3, false, false, 4705, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2020_m10685_ParameterInfos[] = 
{
	{"inputBuffer", 0, 134223431, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"inputOffset", 1, 134223432, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inputCount", 2, 134223433, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10685_MI = 
{
	"InternalTransformFinalBlock", (methodPointerType)&m10685, &t2020_TI, &t737_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t2020_m10685_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 4706, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2020_MIs[] =
{
	&m10676_MI,
	&m10677_MI,
	&m10678_MI,
	&m10679_MI,
	&m10680_MI,
	&m10681_MI,
	&m10682_MI,
	&m10683_MI,
	&m10684_MI,
	&m10685_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t2020_f0_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t2020_TI, offsetof(t2020, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2020_FIs[] =
{
	&t2020_f0_FieldInfo,
	NULL
};
extern MethodInfo m10678_MI;
static PropertyInfo t2020____CanReuseTransform_PropertyInfo = 
{
	&t2020_TI, "CanReuseTransform", &m10678_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10679_MI;
static PropertyInfo t2020____InputBlockSize_PropertyInfo = 
{
	&t2020_TI, "InputBlockSize", &m10679_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10680_MI;
static PropertyInfo t2020____OutputBlockSize_PropertyInfo = 
{
	&t2020_TI, "OutputBlockSize", &m10680_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2020_PIs[] =
{
	&t2020____CanReuseTransform_PropertyInfo,
	&t2020____InputBlockSize_PropertyInfo,
	&t2020____OutputBlockSize_PropertyInfo,
	NULL
};
extern MethodInfo m10677_MI;
extern MethodInfo m10676_MI;
extern MethodInfo m10682_MI;
extern MethodInfo m10684_MI;
extern MethodInfo m10681_MI;
static Il2CppMethodReference t2020_VT[] =
{
	&m671_MI,
	&m10677_MI,
	&m672_MI,
	&m673_MI,
	&m10676_MI,
	&m10678_MI,
	&m10682_MI,
	&m10684_MI,
	&m10678_MI,
	&m10679_MI,
	&m10680_MI,
	&m10681_MI,
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
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t2020_ITIs[] = 
{
	&t137_0_0_0,
	&t1431_0_0_0,
};
static Il2CppInterfaceOffsetPair t2020_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t2020_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2020__CustomAttributeCache = {
1,
NULL,
&t2020_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2020_0_0_0;
extern Il2CppType t2020_1_0_0;
struct t2020;
extern CustomAttributesCache t2020__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2020_DM = 
{
	NULL, NULL, t2020_ITIs, t2020_IOs, &t9_0_0_0, t2020_VT, t2020_VTIGM, NULL};
TypeInfo t2020_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ToBase64Transform", "System.Security.Cryptography", t2020_MIs, t2020_PIs, t2020_FIs, NULL, &t2020_TI, NULL, &t2020__CustomAttributeCache, &t2020_0_0_0, &t2020_1_0_0, &t2020_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2020), sizeof (t2020), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 10, 3, 1, 0, 0, 12, 2, 2};
#include "t1548.h"
// Metadata Definition System.Security.Cryptography.TripleDES
extern TypeInfo t1548_TI;
#include "t1548MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10686_MI = 
{
	".ctor", (methodPointerType)&m10686, &t1548_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4707, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10687_MI = 
{
	"get_Key", (methodPointerType)&m10687, &t1548_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 11, 0, false, false, 4708, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1548_m10688_ParameterInfos[] = 
{
	{"value", 0, 134223434, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10688_MI = 
{
	"set_Key", (methodPointerType)&m10688, &t1548_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1548_m10688_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 12, 1, false, false, 4709, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1548_m10689_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223435, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10689_MI = 
{
	"IsWeakKey", (methodPointerType)&m10689, &t1548_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1548_m10689_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4710, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1548_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7002_MI = 
{
	"Create", (methodPointerType)&m7002, &t1548_TI, &t1548_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4711, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1548_m10690_ParameterInfos[] = 
{
	{"str", 0, 134223436, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1548_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10690_MI = 
{
	"Create", (methodPointerType)&m10690, &t1548_TI, &t1548_0_0_0, RuntimeInvoker_t9_t9, t1548_m10690_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4712, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1548_MIs[] =
{
	&m10686_MI,
	&m10687_MI,
	&m10688_MI,
	&m10689_MI,
	&m7002_MI,
	&m10690_MI,
	NULL
};
extern MethodInfo m10687_MI;
extern MethodInfo m10688_MI;
static PropertyInfo t1548____Key_PropertyInfo = 
{
	&t1548_TI, "Key", &m10687_MI, &m10688_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1548_PIs[] =
{
	&t1548____Key_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1548_VT[] =
{
	&m671_MI,
	&m6936_MI,
	&m672_MI,
	&m673_MI,
	&m7082_MI,
	&m7092_MI,
	&m7083_MI,
	&m7006_MI,
	&m7084_MI,
	&m10675_MI,
	&m6965_MI,
	&m10687_MI,
	&m10688_MI,
	&m7085_MI,
	&m7005_MI,
	&m7086_MI,
	&m7087_MI,
	&m6966_MI,
	&m7088_MI,
	&m7004_MI,
	&m6967_MI,
	NULL,
	&m6938_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1548_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1548_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1548_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1548__CustomAttributeCache = {
1,
NULL,
&t1548_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1548_0_0_0;
extern Il2CppType t1548_1_0_0;
struct t1548;
extern CustomAttributesCache t1548__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1548_DM = 
{
	NULL, NULL, NULL, t1548_IOs, &t1440_0_0_0, t1548_VT, t1548_VTIGM, NULL};
TypeInfo t1548_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TripleDES", "System.Security.Cryptography", t1548_MIs, t1548_PIs, NULL, NULL, &t1548_TI, NULL, &t1548__CustomAttributeCache, &t1548_0_0_0, &t1548_1_0_0, &t1548_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1548), sizeof (t1548), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 1, 0, 0, 0, 26, 0, 1};
#include "t2021.h"
// Metadata Definition System.Security.Cryptography.TripleDESCryptoServiceProvider
extern TypeInfo t2021_TI;
#include "t2021MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10691_MI = 
{
	".ctor", (methodPointerType)&m10691, &t2021_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4713, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10692_MI = 
{
	"GenerateIV", (methodPointerType)&m10692, &t2021_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 24, 0, false, false, 4714, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10693_MI = 
{
	"GenerateKey", (methodPointerType)&m10693, &t2021_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 25, 0, false, false, 4715, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t2021_m10694_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223437, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"rgbIV", 1, 134223438, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t1431_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10694_MI = 
{
	"CreateDecryptor", (methodPointerType)&m10694, &t2021_TI, &t1431_0_0_0, RuntimeInvoker_t9_t9_t9, t2021_m10694_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 21, 2, false, false, 4716, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t2021_m10695_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223439, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"rgbIV", 1, 134223440, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t1431_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10695_MI = 
{
	"CreateEncryptor", (methodPointerType)&m10695, &t2021_TI, &t1431_0_0_0, RuntimeInvoker_t9_t9_t9, t2021_m10695_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 2, false, false, 4717, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2021_MIs[] =
{
	&m10691_MI,
	&m10692_MI,
	&m10693_MI,
	&m10694_MI,
	&m10695_MI,
	NULL
};
extern MethodInfo m10694_MI;
extern MethodInfo m10695_MI;
extern MethodInfo m10692_MI;
extern MethodInfo m10693_MI;
static Il2CppMethodReference t2021_VT[] =
{
	&m671_MI,
	&m6936_MI,
	&m672_MI,
	&m673_MI,
	&m7082_MI,
	&m7092_MI,
	&m7083_MI,
	&m7006_MI,
	&m7084_MI,
	&m10675_MI,
	&m6965_MI,
	&m10687_MI,
	&m10688_MI,
	&m7085_MI,
	&m7005_MI,
	&m7086_MI,
	&m7087_MI,
	&m6966_MI,
	&m7088_MI,
	&m7004_MI,
	&m6967_MI,
	&m10694_MI,
	&m6938_MI,
	&m10695_MI,
	&m10692_MI,
	&m10693_MI,
};
static bool t2021_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2021_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t2021_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t2021_IOs, &t1548_0_0_0, t2021_VT, t2021_VTIGM, NULL};
TypeInfo t2021_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TripleDESCryptoServiceProvider", "System.Security.Cryptography", t2021_MIs, NULL, NULL, NULL, &t2021_TI, NULL, &t2021__CustomAttributeCache, &t2021_0_0_0, &t2021_1_0_0, &t2021_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2021), sizeof (t2021), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 5, 0, 0, 0, 0, 26, 0, 1};
#include "t2022.h"
// Metadata Definition System.Security.Cryptography.TripleDESTransform
extern TypeInfo t2022_TI;
#include "t2022MD.h"
extern Il2CppType t1548_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t2022_m10696_ParameterInfos[] = 
{
	{"algo", 0, 134223441, &EmptyCustomAttributesCache, &t1548_0_0_0},
	{"encryption", 1, 134223442, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"key", 2, 134223443, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"iv", 3, 134223444, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10696_MI = 
{
	".ctor", (methodPointerType)&m10696, &t2022_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t9_t9, t2022_m10696_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 4718, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t2022_m10697_ParameterInfos[] = 
{
	{"input", 0, 134223445, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"output", 1, 134223446, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10697_MI = 
{
	"ECB", (methodPointerType)&m10697, &t2022_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2022_m10697_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 2, false, false, 4719, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10698_MI = 
{
	"GetStrongKey", (methodPointerType)&m10698, &t2022_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 4720, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2022_MIs[] =
{
	&m10696_MI,
	&m10697_MI,
	&m10698_MI,
	NULL
};
extern Il2CppType t1988_0_0_1;
FieldInfo t2022_f12_FieldInfo = 
{
	"E1", &t1988_0_0_1, &t2022_TI, offsetof(t2022, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1988_0_0_1;
FieldInfo t2022_f13_FieldInfo = 
{
	"D2", &t1988_0_0_1, &t2022_TI, offsetof(t2022, f13), &EmptyCustomAttributesCache};
extern Il2CppType t1988_0_0_1;
FieldInfo t2022_f14_FieldInfo = 
{
	"E3", &t1988_0_0_1, &t2022_TI, offsetof(t2022, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1988_0_0_1;
FieldInfo t2022_f15_FieldInfo = 
{
	"D1", &t1988_0_0_1, &t2022_TI, offsetof(t2022, f15), &EmptyCustomAttributesCache};
extern Il2CppType t1988_0_0_1;
FieldInfo t2022_f16_FieldInfo = 
{
	"E2", &t1988_0_0_1, &t2022_TI, offsetof(t2022, f16), &EmptyCustomAttributesCache};
extern Il2CppType t1988_0_0_1;
FieldInfo t2022_f17_FieldInfo = 
{
	"D3", &t1988_0_0_1, &t2022_TI, offsetof(t2022, f17), &EmptyCustomAttributesCache};
static FieldInfo* t2022_FIs[] =
{
	&t2022_f12_FieldInfo,
	&t2022_f13_FieldInfo,
	&t2022_f14_FieldInfo,
	&t2022_f15_FieldInfo,
	&t2022_f16_FieldInfo,
	&t2022_f17_FieldInfo,
	NULL
};
extern MethodInfo m10697_MI;
static Il2CppMethodReference t2022_VT[] =
{
	&m671_MI,
	&m8210_MI,
	&m672_MI,
	&m673_MI,
	&m8209_MI,
	&m8212_MI,
	&m8219_MI,
	&m8226_MI,
	&m8211_MI,
	&m8212_MI,
	&m8213_MI,
	&m10697_MI,
	&m8214_MI,
	&m8215_MI,
	&m8216_MI,
	&m8217_MI,
	&m8219_MI,
	&m8226_MI,
};
static bool t2022_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2022_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2022_0_0_0;
extern Il2CppType t2022_1_0_0;
struct t2022;
const Il2CppTypeDefinitionMetadata t2022_DM = 
{
	NULL, NULL, NULL, t2022_IOs, &t1648_0_0_0, t2022_VT, t2022_VTIGM, NULL};
TypeInfo t2022_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TripleDESTransform", "System.Security.Cryptography", t2022_MIs, NULL, t2022_FIs, NULL, &t2022_TI, NULL, &EmptyCustomAttributesCache, &t2022_0_0_0, &t2022_1_0_0, &t2022_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2022), sizeof (t2022), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, true, false, false, 3, 0, 6, 0, 0, 18, 0, 2};
// Metadata Definition System.Security.Permissions.IBuiltInPermission
extern TypeInfo t2641_TI;
static MethodInfo* t2641_MIs[] =
{
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2641_0_0_0;
extern Il2CppType t2641_1_0_0;
struct t2641;
const Il2CppTypeDefinitionMetadata t2641_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2641_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IBuiltInPermission", "System.Security.Permissions", t2641_MIs, NULL, NULL, NULL, &t2641_TI, NULL, &EmptyCustomAttributesCache, &t2641_0_0_0, &t2641_1_0_0, &t2641_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 160, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Security.Permissions.IUnrestrictedPermission
extern TypeInfo t2642_TI;
static MethodInfo* t2642_MIs[] =
{
	NULL
};
void t2642_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2642__CustomAttributeCache = {
1,
NULL,
&t2642_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2642_0_0_0;
extern Il2CppType t2642_1_0_0;
struct t2642;
extern CustomAttributesCache t2642__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2642_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2642_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IUnrestrictedPermission", "System.Security.Permissions", t2642_MIs, NULL, NULL, NULL, &t2642_TI, NULL, &t2642__CustomAttributeCache, &t2642_0_0_0, &t2642_1_0_0, &t2642_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t2023.h"
// Metadata Definition System.Security.Permissions.SecurityPermission
extern TypeInfo t2023_TI;
#include "t2023MD.h"
extern Il2CppType t2025_0_0_0;
extern Il2CppType t2025_0_0_0;
static ParameterInfo t2023_m10699_ParameterInfos[] = 
{
	{"flag", 0, 134223447, &EmptyCustomAttributesCache, &t2025_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10699_MI = 
{
	".ctor", (methodPointerType)&m10699, &t2023_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t2023_m10699_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4721, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2025_0_0_0;
static ParameterInfo t2023_m10700_ParameterInfos[] = 
{
	{"value", 0, 134223448, &EmptyCustomAttributesCache, &t2025_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10700_MI = 
{
	"set_Flags", (methodPointerType)&m10700, &t2023_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t2023_m10700_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4722, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10701_MI = 
{
	"IsUnrestricted", (methodPointerType)&m10701, &t2023_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 4723, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2026_0_0_0;
extern Il2CppType t2026_0_0_0;
static ParameterInfo t2023_m10702_ParameterInfos[] = 
{
	{"target", 0, 134223449, &EmptyCustomAttributesCache, &t2026_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10702_MI = 
{
	"IsSubsetOf", (methodPointerType)&m10702, &t2023_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2023_m10702_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4724, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1666_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10703_MI = 
{
	"ToXml", (methodPointerType)&m10703, &t2023_TI, &t1666_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 5, 0, false, false, 4725, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10704_MI = 
{
	"IsEmpty", (methodPointerType)&m10704, &t2023_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4726, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2026_0_0_0;
static ParameterInfo t2023_m10705_ParameterInfos[] = 
{
	{"target", 0, 134223450, &EmptyCustomAttributesCache, &t2026_0_0_0},
};
extern Il2CppType t2023_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10705_MI = 
{
	"Cast", (methodPointerType)&m10705, &t2023_TI, &t2023_0_0_0, RuntimeInvoker_t9_t9, t2023_m10705_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4727, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2023_MIs[] =
{
	&m10699_MI,
	&m10700_MI,
	&m10701_MI,
	&m10702_MI,
	&m10703_MI,
	&m10704_MI,
	&m10705_MI,
	NULL
};
extern Il2CppType t2025_0_0_1;
FieldInfo t2023_f0_FieldInfo = 
{
	"flags", &t2025_0_0_1, &t2023_TI, offsetof(t2023, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2023_FIs[] =
{
	&t2023_f0_FieldInfo,
	NULL
};
extern MethodInfo m10700_MI;
static PropertyInfo t2023____Flags_PropertyInfo = 
{
	&t2023_TI, "Flags", NULL, &m10700_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2023_PIs[] =
{
	&t2023____Flags_PropertyInfo,
	NULL
};
extern MethodInfo m10742_MI;
extern MethodInfo m10743_MI;
extern MethodInfo m10744_MI;
extern MethodInfo m10702_MI;
extern MethodInfo m10703_MI;
extern MethodInfo m10701_MI;
static Il2CppMethodReference t2023_VT[] =
{
	&m10742_MI,
	&m646_MI,
	&m10743_MI,
	&m10744_MI,
	&m10702_MI,
	&m10703_MI,
	&m10701_MI,
};
static bool t2023_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t2023_ITIs[] = 
{
	&t2641_0_0_0,
	&t2642_0_0_0,
};
extern Il2CppType t2643_0_0_0;
extern Il2CppType t2644_0_0_0;
static Il2CppInterfaceOffsetPair t2023_IOs[] = 
{
	{ &t2026_0_0_0, 4},
	{ &t2643_0_0_0, 4},
	{ &t2644_0_0_0, 4},
	{ &t2641_0_0_0, 6},
	{ &t2642_0_0_0, 6},
};
void t2023_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2023__CustomAttributeCache = {
1,
NULL,
&t2023_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2023_0_0_0;
extern Il2CppType t2023_1_0_0;
extern Il2CppType t2024_0_0_0;
struct t2023;
extern CustomAttributesCache t2023__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2023_DM = 
{
	NULL, NULL, t2023_ITIs, t2023_IOs, &t2024_0_0_0, t2023_VT, t2023_VTIGM, NULL};
TypeInfo t2023_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityPermission", "System.Security.Permissions", t2023_MIs, t2023_PIs, t2023_FIs, NULL, &t2023_TI, NULL, &t2023__CustomAttributeCache, &t2023_0_0_0, &t2023_1_0_0, &t2023_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2023), sizeof (t2023), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 7, 1, 1, 0, 0, 7, 2, 5};
#include "t2025.h"
// Metadata Definition System.Security.Permissions.SecurityPermissionFlag
extern TypeInfo t2025_TI;
#include "t2025MD.h"
static MethodInfo* t2025_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t2025_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t2025_TI, offsetof(t2025, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_32854;
FieldInfo t2025_f2_FieldInfo = 
{
	"NoFlags", &t2025_0_0_32854, &t2025_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_32854;
FieldInfo t2025_f3_FieldInfo = 
{
	"Assertion", &t2025_0_0_32854, &t2025_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_32854;
FieldInfo t2025_f4_FieldInfo = 
{
	"UnmanagedCode", &t2025_0_0_32854, &t2025_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_32854;
FieldInfo t2025_f5_FieldInfo = 
{
	"SkipVerification", &t2025_0_0_32854, &t2025_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_32854;
FieldInfo t2025_f6_FieldInfo = 
{
	"Execution", &t2025_0_0_32854, &t2025_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_32854;
FieldInfo t2025_f7_FieldInfo = 
{
	"ControlThread", &t2025_0_0_32854, &t2025_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_32854;
FieldInfo t2025_f8_FieldInfo = 
{
	"ControlEvidence", &t2025_0_0_32854, &t2025_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_32854;
FieldInfo t2025_f9_FieldInfo = 
{
	"ControlPolicy", &t2025_0_0_32854, &t2025_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_32854;
FieldInfo t2025_f10_FieldInfo = 
{
	"SerializationFormatter", &t2025_0_0_32854, &t2025_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_32854;
FieldInfo t2025_f11_FieldInfo = 
{
	"ControlDomainPolicy", &t2025_0_0_32854, &t2025_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_32854;
FieldInfo t2025_f12_FieldInfo = 
{
	"ControlPrincipal", &t2025_0_0_32854, &t2025_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_32854;
FieldInfo t2025_f13_FieldInfo = 
{
	"ControlAppDomain", &t2025_0_0_32854, &t2025_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_32854;
FieldInfo t2025_f14_FieldInfo = 
{
	"RemotingConfiguration", &t2025_0_0_32854, &t2025_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_32854;
FieldInfo t2025_f15_FieldInfo = 
{
	"Infrastructure", &t2025_0_0_32854, &t2025_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_32854;
FieldInfo t2025_f16_FieldInfo = 
{
	"BindingRedirects", &t2025_0_0_32854, &t2025_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2025_0_0_32854;
FieldInfo t2025_f17_FieldInfo = 
{
	"AllFlags", &t2025_0_0_32854, &t2025_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t2025_FIs[] =
{
	&t2025_f1_FieldInfo,
	&t2025_f2_FieldInfo,
	&t2025_f3_FieldInfo,
	&t2025_f4_FieldInfo,
	&t2025_f5_FieldInfo,
	&t2025_f6_FieldInfo,
	&t2025_f7_FieldInfo,
	&t2025_f8_FieldInfo,
	&t2025_f9_FieldInfo,
	&t2025_f10_FieldInfo,
	&t2025_f11_FieldInfo,
	&t2025_f12_FieldInfo,
	&t2025_f13_FieldInfo,
	&t2025_f14_FieldInfo,
	&t2025_f15_FieldInfo,
	&t2025_f16_FieldInfo,
	&t2025_f17_FieldInfo,
	NULL
};
static const int32_t t2025_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t2025_f2_DefaultValue = 
{
	&t2025_f2_FieldInfo, { (char*)&t2025_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2025_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t2025_f3_DefaultValue = 
{
	&t2025_f3_FieldInfo, { (char*)&t2025_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2025_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t2025_f4_DefaultValue = 
{
	&t2025_f4_FieldInfo, { (char*)&t2025_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2025_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t2025_f5_DefaultValue = 
{
	&t2025_f5_FieldInfo, { (char*)&t2025_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2025_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t2025_f6_DefaultValue = 
{
	&t2025_f6_FieldInfo, { (char*)&t2025_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2025_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t2025_f7_DefaultValue = 
{
	&t2025_f7_FieldInfo, { (char*)&t2025_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2025_f8_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t2025_f8_DefaultValue = 
{
	&t2025_f8_FieldInfo, { (char*)&t2025_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2025_f9_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t2025_f9_DefaultValue = 
{
	&t2025_f9_FieldInfo, { (char*)&t2025_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2025_f10_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t2025_f10_DefaultValue = 
{
	&t2025_f10_FieldInfo, { (char*)&t2025_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2025_f11_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t2025_f11_DefaultValue = 
{
	&t2025_f11_FieldInfo, { (char*)&t2025_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2025_f12_DefaultValueData = 512;
static Il2CppFieldDefaultValueEntry t2025_f12_DefaultValue = 
{
	&t2025_f12_FieldInfo, { (char*)&t2025_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2025_f13_DefaultValueData = 1024;
static Il2CppFieldDefaultValueEntry t2025_f13_DefaultValue = 
{
	&t2025_f13_FieldInfo, { (char*)&t2025_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2025_f14_DefaultValueData = 2048;
static Il2CppFieldDefaultValueEntry t2025_f14_DefaultValue = 
{
	&t2025_f14_FieldInfo, { (char*)&t2025_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2025_f15_DefaultValueData = 4096;
static Il2CppFieldDefaultValueEntry t2025_f15_DefaultValue = 
{
	&t2025_f15_FieldInfo, { (char*)&t2025_f15_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2025_f16_DefaultValueData = 8192;
static Il2CppFieldDefaultValueEntry t2025_f16_DefaultValue = 
{
	&t2025_f16_FieldInfo, { (char*)&t2025_f16_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2025_f17_DefaultValueData = 16383;
static Il2CppFieldDefaultValueEntry t2025_f17_DefaultValue = 
{
	&t2025_f17_FieldInfo, { (char*)&t2025_f17_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2025_FDVs[] = 
{
	&t2025_f2_DefaultValue,
	&t2025_f3_DefaultValue,
	&t2025_f4_DefaultValue,
	&t2025_f5_DefaultValue,
	&t2025_f6_DefaultValue,
	&t2025_f7_DefaultValue,
	&t2025_f8_DefaultValue,
	&t2025_f9_DefaultValue,
	&t2025_f10_DefaultValue,
	&t2025_f11_DefaultValue,
	&t2025_f12_DefaultValue,
	&t2025_f13_DefaultValue,
	&t2025_f14_DefaultValue,
	&t2025_f15_DefaultValue,
	&t2025_f16_DefaultValue,
	&t2025_f17_DefaultValue,
	NULL
};
static Il2CppMethodReference t2025_VT[] =
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
static bool t2025_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2025_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern TypeInfo t622_TI;
#include "t622.h"
#include "t622MD.h"
extern MethodInfo m3031_MI;
extern TypeInfo t625_TI;
#include "t625.h"
#include "t625MD.h"
extern MethodInfo m3034_MI;
void t2025_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t622 * tmp;
		tmp = (t622 *)il2cpp_codegen_object_new (&t622_TI);
		m3031(tmp, &m3031_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t625 * tmp;
		tmp = (t625 *)il2cpp_codegen_object_new (&t625_TI);
		m3034(tmp, il2cpp_codegen_string_new_wrapper("CAS support is not available with Silverlight applications."), &m3034_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2025__CustomAttributeCache = {
3,
NULL,
&t2025_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2025_1_0_0;
extern CustomAttributesCache t2025__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2025_DM = 
{
	NULL, NULL, NULL, t2025_IOs, &t8_0_0_0, t2025_VT, t2025_VTIGM, NULL};
TypeInfo t2025_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityPermissionFlag", "System.Security.Permissions", t2025_MIs, NULL, t2025_FIs, NULL, &t125_TI, NULL, &t2025__CustomAttributeCache, &t2025_0_0_0, &t2025_1_0_0, &t2025_DM, NULL, NULL, NULL, t2025_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2025)+ sizeof (Il2CppObject), sizeof (t2025)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 17, 0, 0, 23, 0, 3};
#include "t2027.h"
// Metadata Definition System.Security.Permissions.StrongNamePublicKeyBlob
extern TypeInfo t2027_TI;
#include "t2027MD.h"
extern Il2CppType t9_0_0_0;
static ParameterInfo t2027_m10706_ParameterInfos[] = 
{
	{"obj", 0, 134223451, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10706_MI = 
{
	"Equals", (methodPointerType)&m10706, &t2027_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2027_m10706_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4728, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10707_MI = 
{
	"GetHashCode", (methodPointerType)&m10707, &t2027_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4729, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10708_MI = 
{
	"ToString", (methodPointerType)&m10708, &t2027_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4730, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2027_MIs[] =
{
	&m10706_MI,
	&m10707_MI,
	&m10708_MI,
	NULL
};
extern Il2CppType t737_0_0_3;
FieldInfo t2027_f0_FieldInfo = 
{
	"pubkey", &t737_0_0_3, &t2027_TI, offsetof(t2027, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2027_FIs[] =
{
	&t2027_f0_FieldInfo,
	NULL
};
extern MethodInfo m10706_MI;
extern MethodInfo m10707_MI;
extern MethodInfo m10708_MI;
static Il2CppMethodReference t2027_VT[] =
{
	&m10706_MI,
	&m646_MI,
	&m10707_MI,
	&m10708_MI,
};
static bool t2027_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t2027_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
struct t2027;
extern CustomAttributesCache t2027__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2027_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2027_VT, t2027_VTIGM, NULL};
TypeInfo t2027_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StrongNamePublicKeyBlob", "System.Security.Permissions", t2027_MIs, NULL, t2027_FIs, NULL, &t2027_TI, NULL, &t2027__CustomAttributeCache, &t2027_0_0_0, &t2027_1_0_0, &t2027_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2027), sizeof (t2027), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 4, 0, 0};
#include "t2028.h"
// Metadata Definition System.Security.Policy.ApplicationTrust
extern TypeInfo t2028_TI;
#include "t2028MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10709_MI = 
{
	".ctor", (methodPointerType)&m10709, &t2028_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4731, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2028_MIs[] =
{
	&m10709_MI,
	NULL
};
extern Il2CppType t2029_0_0_1;
FieldInfo t2028_f0_FieldInfo = 
{
	"fullTrustAssemblies", &t2029_0_0_1, &t2028_TI, offsetof(t2028, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2028_FIs[] =
{
	&t2028_f0_FieldInfo,
	NULL
};
static Il2CppMethodReference t2028_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2028_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static const Il2CppType* t2028_ITIs[] = 
{
	&t2643_0_0_0,
};
static Il2CppInterfaceOffsetPair t2028_IOs[] = 
{
	{ &t2643_0_0_0, 4},
};
void t2028_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
struct t2028;
extern CustomAttributesCache t2028__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2028_DM = 
{
	NULL, NULL, t2028_ITIs, t2028_IOs, &t9_0_0_0, t2028_VT, t2028_VTIGM, NULL};
TypeInfo t2028_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ApplicationTrust", "System.Security.Policy", t2028_MIs, NULL, t2028_FIs, NULL, &t2028_TI, NULL, &t2028__CustomAttributeCache, &t2028_0_0_0, &t2028_1_0_0, &t2028_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2028), sizeof (t2028), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 1, 1};
#include "t2030.h"
// Metadata Definition System.Security.Policy.Evidence/EvidenceEnumerator
extern TypeInfo t2030_TI;
#include "t2030MD.h"
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
static ParameterInfo t2030_m10710_ParameterInfos[] = 
{
	{"hostenum", 0, 134223455, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"assemblyenum", 1, 134223456, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10710_MI = 
{
	".ctor", (methodPointerType)&m10710, &t2030_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2030_m10710_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4742, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10711_MI = 
{
	"MoveNext", (methodPointerType)&m10711, &t2030_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 4743, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10712_MI = 
{
	"get_Current", (methodPointerType)&m10712, &t2030_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 4744, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2030_MIs[] =
{
	&m10710_MI,
	&m10711_MI,
	&m10712_MI,
	NULL
};
extern Il2CppType t76_0_0_1;
FieldInfo t2030_f0_FieldInfo = 
{
	"currentEnum", &t76_0_0_1, &t2030_TI, offsetof(t2030, f0), &EmptyCustomAttributesCache};
extern Il2CppType t76_0_0_1;
FieldInfo t2030_f1_FieldInfo = 
{
	"hostEnum", &t76_0_0_1, &t2030_TI, offsetof(t2030, f1), &EmptyCustomAttributesCache};
extern Il2CppType t76_0_0_1;
FieldInfo t2030_f2_FieldInfo = 
{
	"assemblyEnum", &t76_0_0_1, &t2030_TI, offsetof(t2030, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2030_FIs[] =
{
	&t2030_f0_FieldInfo,
	&t2030_f1_FieldInfo,
	&t2030_f2_FieldInfo,
	NULL
};
extern MethodInfo m10712_MI;
static PropertyInfo t2030____Current_PropertyInfo = 
{
	&t2030_TI, "Current", &m10712_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2030_PIs[] =
{
	&t2030____Current_PropertyInfo,
	NULL
};
extern MethodInfo m10711_MI;
static Il2CppMethodReference t2030_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10712_MI,
	&m10711_MI,
};
static bool t2030_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t2030_ITIs[] = 
{
	&t76_0_0_0,
};
static Il2CppInterfaceOffsetPair t2030_IOs[] = 
{
	{ &t76_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2030_0_0_0;
extern Il2CppType t2030_1_0_0;
extern TypeInfo t1806_TI;
extern Il2CppType t1806_0_0_0;
struct t2030;
const Il2CppTypeDefinitionMetadata t2030_DM = 
{
	&t1806_0_0_0, NULL, t2030_ITIs, t2030_IOs, &t9_0_0_0, t2030_VT, t2030_VTIGM, NULL};
TypeInfo t2030_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EvidenceEnumerator", "", t2030_MIs, t2030_PIs, t2030_FIs, NULL, &t2030_TI, NULL, &EmptyCustomAttributesCache, &t2030_0_0_0, &t2030_1_0_0, &t2030_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2030), sizeof (t2030), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 1, 3, 0, 0, 6, 1, 1};
#include "t1806.h"
// Metadata Definition System.Security.Policy.Evidence
#include "t1806MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10713_MI = 
{
	".ctor", (methodPointerType)&m10713, &t1806_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4732, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10714_MI = 
{
	"get_Count", (methodPointerType)&m10714, &t1806_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 4733, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10715_MI = 
{
	"get_IsSynchronized", (methodPointerType)&m10715, &t1806_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 4734, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10716_MI = 
{
	"get_SyncRoot", (methodPointerType)&m10716, &t1806_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 4735, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1176_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10717_MI = 
{
	"get_HostEvidenceList", (methodPointerType)&m10717, &t1806_TI, &t1176_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4736, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1176_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10718_MI = 
{
	"get_AssemblyEvidenceList", (methodPointerType)&m10718, &t1806_TI, &t1176_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4737, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t121_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1806_m10719_ParameterInfos[] = 
{
	{"array", 0, 134223452, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"index", 1, 134223453, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10719_MI = 
{
	"CopyTo", (methodPointerType)&m10719, &t1806_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1806_m10719_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 8, 2, false, false, 4738, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1806_m10720_ParameterInfos[] = 
{
	{"obj", 0, 134223454, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1806__CustomAttributeCache_m10720;
MethodInfo m10720_MI = 
{
	"Equals", (methodPointerType)&m10720, &t1806_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1806_m10720_ParameterInfos, &t1806__CustomAttributeCache_m10720, 198, 0, 0, 1, false, false, 4739, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t76_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10721_MI = 
{
	"GetEnumerator", (methodPointerType)&m10721, &t1806_TI, &t76_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 486, 0, 4, 0, false, false, 4740, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1806__CustomAttributeCache_m10722;
MethodInfo m10722_MI = 
{
	"GetHashCode", (methodPointerType)&m10722, &t1806_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t1806__CustomAttributeCache_m10722, 198, 0, 2, 0, false, false, 4741, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1806_MIs[] =
{
	&m10713_MI,
	&m10714_MI,
	&m10715_MI,
	&m10716_MI,
	&m10717_MI,
	&m10718_MI,
	&m10719_MI,
	&m10720_MI,
	&m10721_MI,
	&m10722_MI,
	NULL
};
extern Il2CppType t1176_0_0_1;
FieldInfo t1806_f0_FieldInfo = 
{
	"hostEvidenceList", &t1176_0_0_1, &t1806_TI, offsetof(t1806, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1176_0_0_1;
FieldInfo t1806_f1_FieldInfo = 
{
	"assemblyEvidenceList", &t1176_0_0_1, &t1806_TI, offsetof(t1806, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1806_f2_FieldInfo = 
{
	"_hashCode", &t125_0_0_1, &t1806_TI, offsetof(t1806, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1806_FIs[] =
{
	&t1806_f0_FieldInfo,
	&t1806_f1_FieldInfo,
	&t1806_f2_FieldInfo,
	NULL
};
extern MethodInfo m10714_MI;
static PropertyInfo t1806____Count_PropertyInfo = 
{
	&t1806_TI, "Count", &m10714_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10715_MI;
static PropertyInfo t1806____IsSynchronized_PropertyInfo = 
{
	&t1806_TI, "IsSynchronized", &m10715_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10716_MI;
static PropertyInfo t1806____SyncRoot_PropertyInfo = 
{
	&t1806_TI, "SyncRoot", &m10716_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10717_MI;
static PropertyInfo t1806____HostEvidenceList_PropertyInfo = 
{
	&t1806_TI, "HostEvidenceList", &m10717_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10718_MI;
static PropertyInfo t1806____AssemblyEvidenceList_PropertyInfo = 
{
	&t1806_TI, "AssemblyEvidenceList", &m10718_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1806_PIs[] =
{
	&t1806____Count_PropertyInfo,
	&t1806____IsSynchronized_PropertyInfo,
	&t1806____SyncRoot_PropertyInfo,
	&t1806____HostEvidenceList_PropertyInfo,
	&t1806____AssemblyEvidenceList_PropertyInfo,
	NULL
};
static const Il2CppType* t1806_TI__nestedTypes[1] =
{
	&t2030_0_0_0,
};
extern MethodInfo m10720_MI;
extern MethodInfo m10722_MI;
extern MethodInfo m10721_MI;
extern MethodInfo m10719_MI;
static Il2CppMethodReference t1806_VT[] =
{
	&m10720_MI,
	&m646_MI,
	&m10722_MI,
	&m673_MI,
	&m10721_MI,
	&m10714_MI,
	&m10715_MI,
	&m10716_MI,
	&m10719_MI,
};
static bool t1806_VTIGM[] =
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
extern Il2CppType t672_0_0_0;
extern Il2CppType t1004_0_0_0;
static const Il2CppType* t1806_ITIs[] = 
{
	&t672_0_0_0,
	&t1004_0_0_0,
};
static Il2CppInterfaceOffsetPair t1806_IOs[] = 
{
	{ &t672_0_0_0, 4},
	{ &t1004_0_0_0, 5},
};
extern TypeInfo t1598_TI;
#include "t1598.h"
#include "t1598MD.h"
extern MethodInfo m7891_MI;
void t1806_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7891(tmp, il2cpp_codegen_string_new_wrapper("Serialization format not compatible with .NET"), &m7891_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t1806_CustomAttributesCacheGenerator_m10720(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1806_CustomAttributesCacheGenerator_m10722(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1806__CustomAttributeCache = {
2,
NULL,
&t1806_CustomAttributesCacheGenerator
};
CustomAttributesCache t1806__CustomAttributeCache_m10720 = {
1,
NULL,
&t1806_CustomAttributesCacheGenerator_m10720
};
CustomAttributesCache t1806__CustomAttributeCache_m10722 = {
1,
NULL,
&t1806_CustomAttributesCacheGenerator_m10722
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1806_1_0_0;
struct t1806;
extern CustomAttributesCache t1806__CustomAttributeCache;
extern CustomAttributesCache t1806__CustomAttributeCache_m10720;
extern CustomAttributesCache t1806__CustomAttributeCache_m10722;
const Il2CppTypeDefinitionMetadata t1806_DM = 
{
	NULL, t1806_TI__nestedTypes, t1806_ITIs, t1806_IOs, &t9_0_0_0, t1806_VT, t1806_VTIGM, NULL};
TypeInfo t1806_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Evidence", "System.Security.Policy", t1806_MIs, t1806_PIs, t1806_FIs, NULL, &t1806_TI, NULL, &t1806__CustomAttributeCache, &t1806_0_0_0, &t1806_1_0_0, &t1806_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1806), sizeof (t1806), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 5, 3, 0, 1, 9, 2, 2};
#include "t2031.h"
// Metadata Definition System.Security.Policy.Hash
extern TypeInfo t2031_TI;
#include "t2031MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10723_MI = 
{
	".ctor", (methodPointerType)&m10723, &t2031_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 4745, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t2031_m10724_ParameterInfos[] = 
{
	{"info", 0, 134223457, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134223458, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10724_MI = 
{
	".ctor", (methodPointerType)&m10724, &t2031_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t2031_m10724_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 4746, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t2031_m10725_ParameterInfos[] = 
{
	{"info", 0, 134223459, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134223460, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10725_MI = 
{
	"GetObjectData", (methodPointerType)&m10725, &t2031_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t2031_m10725_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 2, false, false, 4747, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10726_MI = 
{
	"ToString", (methodPointerType)&m10726, &t2031_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4748, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10727_MI = 
{
	"GetData", (methodPointerType)&m10727, &t2031_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4749, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2031_MIs[] =
{
	&m10723_MI,
	&m10724_MI,
	&m10725_MI,
	&m10726_MI,
	&m10727_MI,
	NULL
};
extern Il2CppType t1351_0_0_1;
FieldInfo t2031_f0_FieldInfo = 
{
	"assembly", &t1351_0_0_1, &t2031_TI, offsetof(t2031, f0), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t2031_f1_FieldInfo = 
{
	"data", &t737_0_0_1, &t2031_TI, offsetof(t2031, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2031_FIs[] =
{
	&t2031_f0_FieldInfo,
	&t2031_f1_FieldInfo,
	NULL
};
extern MethodInfo m10726_MI;
extern MethodInfo m10725_MI;
static Il2CppMethodReference t2031_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m10726_MI,
	&m10725_MI,
};
static bool t2031_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t630_0_0_0;
extern Il2CppType t2645_0_0_0;
static const Il2CppType* t2031_ITIs[] = 
{
	&t630_0_0_0,
	&t2645_0_0_0,
};
static Il2CppInterfaceOffsetPair t2031_IOs[] = 
{
	{ &t630_0_0_0, 4},
	{ &t2645_0_0_0, 5},
};
void t2031_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2031__CustomAttributeCache = {
1,
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
	NULL, NULL, t2031_ITIs, t2031_IOs, &t9_0_0_0, t2031_VT, t2031_VTIGM, NULL};
TypeInfo t2031_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Hash", "System.Security.Policy", t2031_MIs, NULL, t2031_FIs, NULL, &t2031_TI, NULL, &t2031__CustomAttributeCache, &t2031_0_0_0, &t2031_1_0_0, &t2031_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2031), sizeof (t2031), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 2, 0, 0, 5, 2, 2};
// Metadata Definition System.Security.Policy.IBuiltInEvidence
extern TypeInfo t2645_TI;
static MethodInfo* t2645_MIs[] =
{
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2645_1_0_0;
struct t2645;
const Il2CppTypeDefinitionMetadata t2645_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2645_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IBuiltInEvidence", "System.Security.Policy", t2645_MIs, NULL, NULL, NULL, &t2645_TI, NULL, &EmptyCustomAttributesCache, &t2645_0_0_0, &t2645_1_0_0, &t2645_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 160, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Security.Policy.IIdentityPermissionFactory
extern TypeInfo t2646_TI;
static MethodInfo* t2646_MIs[] =
{
	NULL
};
void t2646_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2646__CustomAttributeCache = {
1,
NULL,
&t2646_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2646_0_0_0;
extern Il2CppType t2646_1_0_0;
struct t2646;
extern CustomAttributesCache t2646__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2646_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2646_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IIdentityPermissionFactory", "System.Security.Policy", t2646_MIs, NULL, NULL, NULL, &t2646_TI, NULL, &t2646__CustomAttributeCache, &t2646_0_0_0, &t2646_1_0_0, &t2646_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t2032.h"
// Metadata Definition System.Security.Policy.StrongName
extern TypeInfo t2032_TI;
#include "t2032MD.h"
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10728_MI = 
{
	"get_Name", (methodPointerType)&m10728, &t2032_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4750, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2027_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10729_MI = 
{
	"get_PublicKey", (methodPointerType)&m10729, &t2032_TI, &t2027_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4751, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1202_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10730_MI = 
{
	"get_Version", (methodPointerType)&m10730, &t2032_TI, &t1202_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4752, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2032_m10731_ParameterInfos[] = 
{
	{"o", 0, 134223461, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10731_MI = 
{
	"Equals", (methodPointerType)&m10731, &t2032_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2032_m10731_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4753, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10732_MI = 
{
	"GetHashCode", (methodPointerType)&m10732, &t2032_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4754, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10733_MI = 
{
	"ToString", (methodPointerType)&m10733, &t2032_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4755, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2032_MIs[] =
{
	&m10728_MI,
	&m10729_MI,
	&m10730_MI,
	&m10731_MI,
	&m10732_MI,
	&m10733_MI,
	NULL
};
extern Il2CppType t2027_0_0_1;
FieldInfo t2032_f0_FieldInfo = 
{
	"publickey", &t2027_0_0_1, &t2032_TI, offsetof(t2032, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2032_f1_FieldInfo = 
{
	"name", &t2_0_0_1, &t2032_TI, offsetof(t2032, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1202_0_0_1;
FieldInfo t2032_f2_FieldInfo = 
{
	"version", &t1202_0_0_1, &t2032_TI, offsetof(t2032, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2032_FIs[] =
{
	&t2032_f0_FieldInfo,
	&t2032_f1_FieldInfo,
	&t2032_f2_FieldInfo,
	NULL
};
extern MethodInfo m10728_MI;
static PropertyInfo t2032____Name_PropertyInfo = 
{
	&t2032_TI, "Name", &m10728_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10729_MI;
static PropertyInfo t2032____PublicKey_PropertyInfo = 
{
	&t2032_TI, "PublicKey", &m10729_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10730_MI;
static PropertyInfo t2032____Version_PropertyInfo = 
{
	&t2032_TI, "Version", &m10730_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2032_PIs[] =
{
	&t2032____Name_PropertyInfo,
	&t2032____PublicKey_PropertyInfo,
	&t2032____Version_PropertyInfo,
	NULL
};
extern MethodInfo m10731_MI;
extern MethodInfo m10732_MI;
extern MethodInfo m10733_MI;
static Il2CppMethodReference t2032_VT[] =
{
	&m10731_MI,
	&m646_MI,
	&m10732_MI,
	&m10733_MI,
};
static bool t2032_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static const Il2CppType* t2032_ITIs[] = 
{
	&t2645_0_0_0,
	&t2646_0_0_0,
};
static Il2CppInterfaceOffsetPair t2032_IOs[] = 
{
	{ &t2645_0_0_0, 4},
	{ &t2646_0_0_0, 4},
};
void t2032_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2032__CustomAttributeCache = {
1,
NULL,
&t2032_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2032_0_0_0;
extern Il2CppType t2032_1_0_0;
struct t2032;
extern CustomAttributesCache t2032__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2032_DM = 
{
	NULL, NULL, t2032_ITIs, t2032_IOs, &t9_0_0_0, t2032_VT, t2032_VTIGM, NULL};
TypeInfo t2032_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StrongName", "System.Security.Policy", t2032_MIs, t2032_PIs, t2032_FIs, NULL, &t2032_TI, NULL, &t2032__CustomAttributeCache, &t2032_0_0_0, &t2032_1_0_0, &t2032_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2032), sizeof (t2032), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 3, 3, 0, 0, 4, 2, 2};
// Metadata Definition System.Security.Principal.IIdentity
extern TypeInfo t2647_TI;
static MethodInfo* t2647_MIs[] =
{
	NULL
};
void t2647_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2647__CustomAttributeCache = {
1,
NULL,
&t2647_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2647_0_0_0;
extern Il2CppType t2647_1_0_0;
struct t2647;
extern CustomAttributesCache t2647__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2647_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2647_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IIdentity", "System.Security.Principal", t2647_MIs, NULL, NULL, NULL, &t2647_TI, NULL, &t2647__CustomAttributeCache, &t2647_0_0_0, &t2647_1_0_0, &t2647_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Security.Principal.IPrincipal
extern TypeInfo t2079_TI;
static MethodInfo* t2079_MIs[] =
{
	NULL
};
void t2079_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2079__CustomAttributeCache = {
1,
NULL,
&t2079_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2079_0_0_0;
extern Il2CppType t2079_1_0_0;
struct t2079;
extern CustomAttributesCache t2079__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2079_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2079_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IPrincipal", "System.Security.Principal", t2079_MIs, NULL, NULL, NULL, &t2079_TI, NULL, &t2079__CustomAttributeCache, &t2079_0_0_0, &t2079_1_0_0, &t2079_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t2033.h"
// Metadata Definition System.Security.Principal.PrincipalPolicy
extern TypeInfo t2033_TI;
#include "t2033MD.h"
static MethodInfo* t2033_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t2033_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t2033_TI, offsetof(t2033, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t2033_0_0_32854;
FieldInfo t2033_f2_FieldInfo = 
{
	"UnauthenticatedPrincipal", &t2033_0_0_32854, &t2033_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2033_0_0_32854;
FieldInfo t2033_f3_FieldInfo = 
{
	"NoPrincipal", &t2033_0_0_32854, &t2033_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2033_0_0_32854;
FieldInfo t2033_f4_FieldInfo = 
{
	"WindowsPrincipal", &t2033_0_0_32854, &t2033_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t2033_FIs[] =
{
	&t2033_f1_FieldInfo,
	&t2033_f2_FieldInfo,
	&t2033_f3_FieldInfo,
	&t2033_f4_FieldInfo,
	NULL
};
static const int32_t t2033_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t2033_f2_DefaultValue = 
{
	&t2033_f2_FieldInfo, { (char*)&t2033_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2033_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t2033_f3_DefaultValue = 
{
	&t2033_f3_FieldInfo, { (char*)&t2033_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2033_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t2033_f4_DefaultValue = 
{
	&t2033_f4_FieldInfo, { (char*)&t2033_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2033_FDVs[] = 
{
	&t2033_f2_DefaultValue,
	&t2033_f3_DefaultValue,
	&t2033_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t2033_VT[] =
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
	false,
	false,
	false,
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
static Il2CppInterfaceOffsetPair t2033_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t2033_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2033__CustomAttributeCache = {
1,
NULL,
&t2033_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2033_0_0_0;
extern Il2CppType t2033_1_0_0;
extern CustomAttributesCache t2033__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2033_DM = 
{
	NULL, NULL, NULL, t2033_IOs, &t8_0_0_0, t2033_VT, t2033_VTIGM, NULL};
TypeInfo t2033_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PrincipalPolicy", "System.Security.Principal", t2033_MIs, NULL, t2033_FIs, NULL, &t125_TI, NULL, &t2033__CustomAttributeCache, &t2033_0_0_0, &t2033_1_0_0, &t2033_DM, NULL, NULL, NULL, t2033_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2033)+ sizeof (Il2CppObject), sizeof (t2033)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t2034.h"
// Metadata Definition System.Security.Principal.WindowsAccountType
extern TypeInfo t2034_TI;
#include "t2034MD.h"
static MethodInfo* t2034_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t2034_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t2034_TI, offsetof(t2034, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t2034_0_0_32854;
FieldInfo t2034_f2_FieldInfo = 
{
	"Normal", &t2034_0_0_32854, &t2034_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2034_0_0_32854;
FieldInfo t2034_f3_FieldInfo = 
{
	"Guest", &t2034_0_0_32854, &t2034_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2034_0_0_32854;
FieldInfo t2034_f4_FieldInfo = 
{
	"System", &t2034_0_0_32854, &t2034_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2034_0_0_32854;
FieldInfo t2034_f5_FieldInfo = 
{
	"Anonymous", &t2034_0_0_32854, &t2034_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t2034_FIs[] =
{
	&t2034_f1_FieldInfo,
	&t2034_f2_FieldInfo,
	&t2034_f3_FieldInfo,
	&t2034_f4_FieldInfo,
	&t2034_f5_FieldInfo,
	NULL
};
static const int32_t t2034_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t2034_f2_DefaultValue = 
{
	&t2034_f2_FieldInfo, { (char*)&t2034_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2034_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t2034_f3_DefaultValue = 
{
	&t2034_f3_FieldInfo, { (char*)&t2034_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2034_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t2034_f4_DefaultValue = 
{
	&t2034_f4_FieldInfo, { (char*)&t2034_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t2034_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t2034_f5_DefaultValue = 
{
	&t2034_f5_FieldInfo, { (char*)&t2034_f5_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2034_FDVs[] = 
{
	&t2034_f2_DefaultValue,
	&t2034_f3_DefaultValue,
	&t2034_f4_DefaultValue,
	&t2034_f5_DefaultValue,
	NULL
};
static Il2CppMethodReference t2034_VT[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
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
static Il2CppInterfaceOffsetPair t2034_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t2034_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2034__CustomAttributeCache = {
1,
NULL,
&t2034_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2034_0_0_0;
extern Il2CppType t2034_1_0_0;
extern CustomAttributesCache t2034__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2034_DM = 
{
	NULL, NULL, NULL, t2034_IOs, &t8_0_0_0, t2034_VT, t2034_VTIGM, NULL};
TypeInfo t2034_TI = 
{
	&g_mscorlib_dll_Image, NULL, "WindowsAccountType", "System.Security.Principal", t2034_MIs, NULL, t2034_FIs, NULL, &t125_TI, NULL, &t2034__CustomAttributeCache, &t2034_0_0_0, &t2034_1_0_0, &t2034_DM, NULL, NULL, NULL, t2034_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2034)+ sizeof (Il2CppObject), sizeof (t2034)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t2035.h"
// Metadata Definition System.Security.Principal.WindowsIdentity
extern TypeInfo t2035_TI;
#include "t2035MD.h"
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t2035_m10734_ParameterInfos[] = 
{
	{"info", 0, 134223462, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134223463, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10734_MI = 
{
	".ctor", (methodPointerType)&m10734, &t2035_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t2035_m10734_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4756, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10735_MI = 
{
	".cctor", (methodPointerType)&m10735, &t2035_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4757, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2035_m10736_ParameterInfos[] = 
{
	{"sender", 0, 134223464, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10736_MI = 
{
	"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", (methodPointerType)&m10736, &t2035_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2035_m10736_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 1, false, false, 4758, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t2035_m10737_ParameterInfos[] = 
{
	{"info", 0, 134223465, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134223466, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10737_MI = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData", (methodPointerType)&m10737, &t2035_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t2035_m10737_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, false, 4759, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2035__CustomAttributeCache_m10738;
MethodInfo m10738_MI = 
{
	"Dispose", (methodPointerType)&m10738, &t2035_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t2035__CustomAttributeCache_m10738, 486, 0, 4, 0, false, false, 4760, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m10739_MI = 
{
	"GetCurrentToken", (methodPointerType)&m10739, &t2035_TI, &t58_0_0_0, RuntimeInvoker_t58, NULL, &EmptyCustomAttributesCache, 147, 4096, 255, 0, false, false, 4761, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
static ParameterInfo t2035_m10740_ParameterInfos[] = 
{
	{"token", 0, 134223467, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m10740_MI = 
{
	"GetTokenName", (methodPointerType)&m10740, &t2035_TI, &t2_0_0_0, RuntimeInvoker_t9_t58, t2035_m10740_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 4762, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2035_MIs[] =
{
	&m10734_MI,
	&m10735_MI,
	&m10736_MI,
	&m10737_MI,
	&m10738_MI,
	&m10739_MI,
	&m10740_MI,
	NULL
};
extern Il2CppType t58_0_0_1;
FieldInfo t2035_f0_FieldInfo = 
{
	"_token", &t58_0_0_1, &t2035_TI, offsetof(t2035, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2035_f1_FieldInfo = 
{
	"_type", &t2_0_0_1, &t2035_TI, offsetof(t2035, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2034_0_0_1;
FieldInfo t2035_f2_FieldInfo = 
{
	"_account", &t2034_0_0_1, &t2035_TI, offsetof(t2035, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t2035_f3_FieldInfo = 
{
	"_authenticated", &t124_0_0_1, &t2035_TI, offsetof(t2035, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2035_f4_FieldInfo = 
{
	"_name", &t2_0_0_1, &t2035_TI, offsetof(t2035, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1106_0_0_1;
FieldInfo t2035_f5_FieldInfo = 
{
	"_info", &t1106_0_0_1, &t2035_TI, offsetof(t2035, f5), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_17;
FieldInfo t2035_f6_FieldInfo = 
{
	"invalidWindows", &t58_0_0_17, &t2035_TI, offsetof(t2035_SFs, f6), &EmptyCustomAttributesCache};
static FieldInfo* t2035_FIs[] =
{
	&t2035_f0_FieldInfo,
	&t2035_f1_FieldInfo,
	&t2035_f2_FieldInfo,
	&t2035_f3_FieldInfo,
	&t2035_f4_FieldInfo,
	&t2035_f5_FieldInfo,
	&t2035_f6_FieldInfo,
	NULL
};
extern MethodInfo m10738_MI;
extern MethodInfo m10737_MI;
extern MethodInfo m10736_MI;
static Il2CppMethodReference t2035_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10738_MI,
	&m10737_MI,
	&m10736_MI,
};
static bool t2035_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t1112_0_0_0;
static const Il2CppType* t2035_ITIs[] = 
{
	&t137_0_0_0,
	&t630_0_0_0,
	&t1112_0_0_0,
	&t2647_0_0_0,
};
static Il2CppInterfaceOffsetPair t2035_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t630_0_0_0, 5},
	{ &t1112_0_0_0, 6},
	{ &t2647_0_0_0, 7},
};
void t2035_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t2035_CustomAttributesCacheGenerator_m10738(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2035__CustomAttributeCache = {
1,
NULL,
&t2035_CustomAttributesCacheGenerator
};
CustomAttributesCache t2035__CustomAttributeCache_m10738 = {
1,
NULL,
&t2035_CustomAttributesCacheGenerator_m10738
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2035_0_0_0;
extern Il2CppType t2035_1_0_0;
struct t2035;
extern CustomAttributesCache t2035__CustomAttributeCache;
extern CustomAttributesCache t2035__CustomAttributeCache_m10738;
const Il2CppTypeDefinitionMetadata t2035_DM = 
{
	NULL, NULL, t2035_ITIs, t2035_IOs, &t9_0_0_0, t2035_VT, t2035_VTIGM, NULL};
TypeInfo t2035_TI = 
{
	&g_mscorlib_dll_Image, NULL, "WindowsIdentity", "System.Security.Principal", t2035_MIs, NULL, t2035_FIs, NULL, &t2035_TI, NULL, &t2035__CustomAttributeCache, &t2035_0_0_0, &t2035_1_0_0, &t2035_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2035), sizeof (t2035), 0, -1, sizeof(t2035_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 7, 0, 7, 0, 0, 7, 4, 4};
#include "t2024.h"
// Metadata Definition System.Security.CodeAccessPermission
extern TypeInfo t2024_TI;
#include "t2024MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10741_MI = 
{
	".ctor", (methodPointerType)&m10741, &t2024_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4763, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2024_m10742_ParameterInfos[] = 
{
	{"obj", 0, 134223468, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2024__CustomAttributeCache_m10742;
MethodInfo m10742_MI = 
{
	"Equals", (methodPointerType)&m10742, &t2024_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2024_m10742_ParameterInfos, &t2024__CustomAttributeCache_m10742, 198, 0, 0, 1, false, false, 4764, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2024__CustomAttributeCache_m10743;
MethodInfo m10743_MI = 
{
	"GetHashCode", (methodPointerType)&m10743, &t2024_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t2024__CustomAttributeCache_m10743, 198, 0, 2, 0, false, false, 4765, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2026_0_0_0;
static ParameterInfo t2024_m12145_ParameterInfos[] = 
{
	{"target", 0, 134223469, &EmptyCustomAttributesCache, &t2026_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12145_MI = 
{
	"IsSubsetOf", NULL, &t2024_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2024_m12145_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4766, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10744_MI = 
{
	"ToString", (methodPointerType)&m10744, &t2024_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4767, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1666_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12146_MI = 
{
	"ToXml", NULL, &t2024_TI, &t1666_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 1478, 0, 5, 0, false, false, 4768, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2024_m10745_ParameterInfos[] = 
{
	{"version", 0, 134223470, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t1666_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10745_MI = 
{
	"Element", (methodPointerType)&m10745, &t2024_TI, &t1666_0_0_0, RuntimeInvoker_t9_t125, t2024_m10745_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4769, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2026_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t2024_m10746_ParameterInfos[] = 
{
	{"target", 0, 134223471, &EmptyCustomAttributesCache, &t2026_0_0_0},
	{"expected", 1, 134223472, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10746_MI = 
{
	"ThrowInvalidPermission", (methodPointerType)&m10746, &t2024_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2024_m10746_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4770, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2024_MIs[] =
{
	&m10741_MI,
	&m10742_MI,
	&m10743_MI,
	&m12145_MI,
	&m10744_MI,
	&m12146_MI,
	&m10745_MI,
	&m10746_MI,
	NULL
};
static Il2CppMethodReference t2024_VT[] =
{
	&m10742_MI,
	&m646_MI,
	&m10743_MI,
	&m10744_MI,
	NULL,
	NULL,
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
	&t2026_0_0_0,
	&t2643_0_0_0,
	&t2644_0_0_0,
};
static Il2CppInterfaceOffsetPair t2024_IOs[] = 
{
	{ &t2026_0_0_0, 4},
	{ &t2643_0_0_0, 4},
	{ &t2644_0_0_0, 4},
};
void t2024_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7891(tmp, il2cpp_codegen_string_new_wrapper("CAS support is experimental (and unsupported)."), &m7891_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t2024_CustomAttributesCacheGenerator_m10742(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t2024_CustomAttributesCacheGenerator_m10743(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2024__CustomAttributeCache = {
2,
NULL,
&t2024_CustomAttributesCacheGenerator
};
CustomAttributesCache t2024__CustomAttributeCache_m10742 = {
1,
NULL,
&t2024_CustomAttributesCacheGenerator_m10742
};
CustomAttributesCache t2024__CustomAttributeCache_m10743 = {
1,
NULL,
&t2024_CustomAttributesCacheGenerator_m10743
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2024_1_0_0;
struct t2024;
extern CustomAttributesCache t2024__CustomAttributeCache;
extern CustomAttributesCache t2024__CustomAttributeCache_m10742;
extern CustomAttributesCache t2024__CustomAttributeCache_m10743;
const Il2CppTypeDefinitionMetadata t2024_DM = 
{
	NULL, NULL, t2024_ITIs, t2024_IOs, &t9_0_0_0, t2024_VT, t2024_VTIGM, NULL};
TypeInfo t2024_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CodeAccessPermission", "System.Security", t2024_MIs, NULL, NULL, NULL, &t2024_TI, NULL, &t2024__CustomAttributeCache, &t2024_0_0_0, &t2024_1_0_0, &t2024_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2024), sizeof (t2024), 0, -1, 0, 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 0, 0, 0, 0, 6, 3, 3};
// Metadata Definition System.Security.IPermission
extern TypeInfo t2026_TI;
static MethodInfo* t2026_MIs[] =
{
	NULL
};
static const Il2CppType* t2026_ITIs[] = 
{
	&t2643_0_0_0,
};
void t2026_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2026__CustomAttributeCache = {
1,
NULL,
&t2026_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2026_1_0_0;
struct t2026;
extern CustomAttributesCache t2026__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2026_DM = 
{
	NULL, NULL, t2026_ITIs, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2026_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IPermission", "System.Security", t2026_MIs, NULL, NULL, NULL, &t2026_TI, NULL, &t2026__CustomAttributeCache, &t2026_0_0_0, &t2026_1_0_0, &t2026_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 1, 0};
// Metadata Definition System.Security.ISecurityEncodable
extern TypeInfo t2643_TI;
static MethodInfo* t2643_MIs[] =
{
	NULL
};
void t2643_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2643__CustomAttributeCache = {
1,
NULL,
&t2643_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2643_1_0_0;
struct t2643;
extern CustomAttributesCache t2643__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2643_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2643_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISecurityEncodable", "System.Security", t2643_MIs, NULL, NULL, NULL, &t2643_TI, NULL, &t2643__CustomAttributeCache, &t2643_0_0_0, &t2643_1_0_0, &t2643_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Security.IStackWalk
extern TypeInfo t2644_TI;
static MethodInfo* t2644_MIs[] =
{
	NULL
};
void t2644_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2644__CustomAttributeCache = {
1,
NULL,
&t2644_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2644_1_0_0;
struct t2644;
extern CustomAttributesCache t2644__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2644_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2644_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IStackWalk", "System.Security", t2644_MIs, NULL, NULL, NULL, &t2644_TI, NULL, &t2644__CustomAttributeCache, &t2644_0_0_0, &t2644_1_0_0, &t2644_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t1807.h"
// Metadata Definition System.Security.PermissionSet
extern TypeInfo t1807_TI;
#include "t1807MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10747_MI = 
{
	".ctor", (methodPointerType)&m10747, &t1807_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4771, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1807_m10748_ParameterInfos[] = 
{
	{"xml", 0, 134223473, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10748_MI = 
{
	".ctor", (methodPointerType)&m10748, &t1807_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1807_m10748_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 4772, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1807_m10749_ParameterInfos[] = 
{
	{"value", 0, 134223474, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1807__CustomAttributeCache_m10749;
MethodInfo m10749_MI = 
{
	"set_DeclarativeSecurity", (methodPointerType)&m10749, &t1807_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1807_m10749_ParameterInfos, &t1807__CustomAttributeCache_m10749, 2179, 0, 255, 1, false, false, 4773, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1807_m10750_ParameterInfos[] = 
{
	{"data", 0, 134223475, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t1807_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10750_MI = 
{
	"CreateFromBinaryFormat", (methodPointerType)&m10750, &t1807_TI, &t1807_0_0_0, RuntimeInvoker_t9_t9, t1807_m10750_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 4774, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1807_MIs[] =
{
	&m10747_MI,
	&m10748_MI,
	&m10749_MI,
	&m10750_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t1807__CustomAttributeCache_U3CDeclarativeSecurityU3Ek__BackingField;
FieldInfo t1807_f0_FieldInfo = 
{
	"<DeclarativeSecurity>k__BackingField", &t124_0_0_1, &t1807_TI, offsetof(t1807, f0), &t1807__CustomAttributeCache_U3CDeclarativeSecurityU3Ek__BackingField};
static FieldInfo* t1807_FIs[] =
{
	&t1807_f0_FieldInfo,
	NULL
};
extern MethodInfo m10749_MI;
static PropertyInfo t1807____DeclarativeSecurity_PropertyInfo = 
{
	&t1807_TI, "DeclarativeSecurity", NULL, &m10749_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1807_PIs[] =
{
	&t1807____DeclarativeSecurity_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1807_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1807_VTIGM[] =
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
void t1807_CustomAttributesCacheGenerator_U3CDeclarativeSecurityU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1807_CustomAttributesCacheGenerator_m10749(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1807__CustomAttributeCache_U3CDeclarativeSecurityU3Ek__BackingField = {
1,
NULL,
&t1807_CustomAttributesCacheGenerator_U3CDeclarativeSecurityU3Ek__BackingField
};
CustomAttributesCache t1807__CustomAttributeCache_m10749 = {
1,
NULL,
&t1807_CustomAttributesCacheGenerator_m10749
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1807_0_0_0;
extern Il2CppType t1807_1_0_0;
struct t1807;
extern CustomAttributesCache t1807__CustomAttributeCache_U3CDeclarativeSecurityU3Ek__BackingField;
extern CustomAttributesCache t1807__CustomAttributeCache_m10749;
const Il2CppTypeDefinitionMetadata t1807_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1807_VT, t1807_VTIGM, NULL};
TypeInfo t1807_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PermissionSet", "System.Security", t1807_MIs, t1807_PIs, t1807_FIs, NULL, &t1807_TI, NULL, &EmptyCustomAttributesCache, &t1807_0_0_0, &t1807_1_0_0, &t1807_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1807), sizeof (t1807), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 1, 1, 0, 0, 4, 0, 0};
#include "t2036.h"
// Metadata Definition System.Security.SecurityContext
extern TypeInfo t2036_TI;
#include "t2036MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10751_MI = 
{
	".ctor", (methodPointerType)&m10751, &t2036_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 4775, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2036_0_0_0;
extern Il2CppType t2036_0_0_0;
static ParameterInfo t2036_m10752_ParameterInfos[] = 
{
	{"sc", 0, 134223476, &EmptyCustomAttributesCache, &t2036_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10752_MI = 
{
	".ctor", (methodPointerType)&m10752, &t2036_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2036_m10752_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 4776, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2036_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10753_MI = 
{
	"Capture", (methodPointerType)&m10753, &t2036_TI, &t2036_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4777, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10754_MI = 
{
	"get_FlowSuppressed", (methodPointerType)&m10754, &t2036_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4778, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2037_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10755_MI = 
{
	"get_CompressedStack", (methodPointerType)&m10755, &t2036_TI, &t2037_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4779, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2036_MIs[] =
{
	&m10751_MI,
	&m10752_MI,
	&m10753_MI,
	&m10754_MI,
	&m10755_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t2036_f0_FieldInfo = 
{
	"_capture", &t124_0_0_1, &t2036_TI, offsetof(t2036, f0), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_1;
FieldInfo t2036_f1_FieldInfo = 
{
	"_winid", &t58_0_0_1, &t2036_TI, offsetof(t2036, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2037_0_0_1;
FieldInfo t2036_f2_FieldInfo = 
{
	"_stack", &t2037_0_0_1, &t2036_TI, offsetof(t2036, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t2036_f3_FieldInfo = 
{
	"_suppressFlow", &t124_0_0_1, &t2036_TI, offsetof(t2036, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2036_FIs[] =
{
	&t2036_f0_FieldInfo,
	&t2036_f1_FieldInfo,
	&t2036_f2_FieldInfo,
	&t2036_f3_FieldInfo,
	NULL
};
extern MethodInfo m10754_MI;
static PropertyInfo t2036____FlowSuppressed_PropertyInfo = 
{
	&t2036_TI, "FlowSuppressed", &m10754_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10755_MI;
static PropertyInfo t2036____CompressedStack_PropertyInfo = 
{
	&t2036_TI, "CompressedStack", &m10755_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2036_PIs[] =
{
	&t2036____FlowSuppressed_PropertyInfo,
	&t2036____CompressedStack_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2036_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2036_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2036_1_0_0;
struct t2036;
const Il2CppTypeDefinitionMetadata t2036_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2036_VT, t2036_VTIGM, NULL};
TypeInfo t2036_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityContext", "System.Security", t2036_MIs, t2036_PIs, t2036_FIs, NULL, &t2036_TI, NULL, &EmptyCustomAttributesCache, &t2036_0_0_0, &t2036_1_0_0, &t2036_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2036), sizeof (t2036), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 2, 4, 0, 0, 4, 0, 0};
#include "t962.h"
// Metadata Definition System.Security.SecurityCriticalAttribute
extern TypeInfo t962_TI;
#include "t962MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m4544_MI = 
{
	".ctor", (methodPointerType)&m4544, &t962_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4780, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t962_MIs[] =
{
	&m4544_MI,
	NULL
};
extern MethodInfo m4541_MI;
extern MethodInfo m4535_MI;
static Il2CppMethodReference t962_VT[] =
{
	&m4541_MI,
	&m646_MI,
	&m4535_MI,
	&m673_MI,
};
static bool t962_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppType t960_0_0_0;
static Il2CppInterfaceOffsetPair t962_IOs[] = 
{
	{ &t960_0_0_0, 4},
};
extern TypeInfo t1030_TI;
#include "t1030.h"
#include "t1030MD.h"
extern MethodInfo m4647_MI;
extern MethodInfo m4649_MI;
extern MethodInfo m4648_MI;
void t962_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1030 * tmp;
		tmp = (t1030 *)il2cpp_codegen_object_new (&t1030_TI);
		m4647(tmp, 6143, &m4647_MI);
		m4649(tmp, false, &m4649_MI);
		m4648(tmp, false, &m4648_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t962__CustomAttributeCache = {
1,
NULL,
&t962_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t962_0_0_0;
extern Il2CppType t962_1_0_0;
extern Il2CppType t732_0_0_0;
struct t962;
extern CustomAttributesCache t962__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t962_DM = 
{
	NULL, NULL, NULL, t962_IOs, &t732_0_0_0, t962_VT, t962_VTIGM, NULL};
TypeInfo t962_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityCriticalAttribute", "System.Security", t962_MIs, NULL, NULL, NULL, &t962_TI, NULL, &t962__CustomAttributeCache, &t962_0_0_0, &t962_1_0_0, &t962_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t962), sizeof (t962), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t2038.h"
// Metadata Definition System.Security.SecurityElement/SecurityAttribute
extern TypeInfo t2038_TI;
#include "t2038MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t2038_m10756_ParameterInfos[] = 
{
	{"name", 0, 134223494, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134223495, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10756_MI = 
{
	".ctor", (methodPointerType)&m10756, &t2038_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2038_m10756_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4799, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10757_MI = 
{
	"get_Name", (methodPointerType)&m10757, &t2038_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4800, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10758_MI = 
{
	"get_Value", (methodPointerType)&m10758, &t2038_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4801, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2038_MIs[] =
{
	&m10756_MI,
	&m10757_MI,
	&m10758_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2038_f0_FieldInfo = 
{
	"_name", &t2_0_0_1, &t2038_TI, offsetof(t2038, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2038_f1_FieldInfo = 
{
	"_value", &t2_0_0_1, &t2038_TI, offsetof(t2038, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2038_FIs[] =
{
	&t2038_f0_FieldInfo,
	&t2038_f1_FieldInfo,
	NULL
};
extern MethodInfo m10757_MI;
static PropertyInfo t2038____Name_PropertyInfo = 
{
	&t2038_TI, "Name", &m10757_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10758_MI;
static PropertyInfo t2038____Value_PropertyInfo = 
{
	&t2038_TI, "Value", &m10758_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2038_PIs[] =
{
	&t2038____Name_PropertyInfo,
	&t2038____Value_PropertyInfo,
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
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2038_0_0_0;
extern Il2CppType t2038_1_0_0;
extern TypeInfo t1666_TI;
extern Il2CppType t1666_0_0_0;
struct t2038;
const Il2CppTypeDefinitionMetadata t2038_DM = 
{
	&t1666_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t2038_VT, t2038_VTIGM, NULL};
TypeInfo t2038_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityAttribute", "", t2038_MIs, t2038_PIs, t2038_FIs, NULL, &t2038_TI, NULL, &EmptyCustomAttributesCache, &t2038_0_0_0, &t2038_1_0_0, &t2038_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2038), sizeof (t2038), 0, -1, 0, 0, -1, 1048581, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 2, 2, 0, 0, 4, 0, 0};
#include "t1666.h"
// Metadata Definition System.Security.SecurityElement
#include "t1666MD.h"
extern Il2CppType t2_0_0_0;
static ParameterInfo t1666_m10759_ParameterInfos[] = 
{
	{"tag", 0, 134223477, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10759_MI = 
{
	".ctor", (methodPointerType)&m10759, &t1666_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1666_m10759_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4781, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1666_m10760_ParameterInfos[] = 
{
	{"tag", 0, 134223478, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"text", 1, 134223479, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10760_MI = 
{
	".ctor", (methodPointerType)&m10760, &t1666_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1666_m10760_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4782, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10761_MI = 
{
	".cctor", (methodPointerType)&m10761, &t1666_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4783, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1176_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10762_MI = 
{
	"get_Children", (methodPointerType)&m10762, &t1666_TI, &t1176_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4784, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10763_MI = 
{
	"get_Tag", (methodPointerType)&m10763, &t1666_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4785, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1666_m10764_ParameterInfos[] = 
{
	{"value", 0, 134223480, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10764_MI = 
{
	"set_Text", (methodPointerType)&m10764, &t1666_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1666_m10764_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4786, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1666_m10765_ParameterInfos[] = 
{
	{"name", 0, 134223481, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134223482, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10765_MI = 
{
	"AddAttribute", (methodPointerType)&m10765, &t1666_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1666_m10765_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4787, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1666_0_0_0;
static ParameterInfo t1666_m10766_ParameterInfos[] = 
{
	{"child", 0, 134223483, &EmptyCustomAttributesCache, &t1666_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10766_MI = 
{
	"AddChild", (methodPointerType)&m10766, &t1666_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1666_m10766_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4788, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1666_m10767_ParameterInfos[] = 
{
	{"str", 0, 134223484, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10767_MI = 
{
	"Escape", (methodPointerType)&m10767, &t1666_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1666_m10767_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4789, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1666_m10768_ParameterInfos[] = 
{
	{"str", 0, 134223485, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10768_MI = 
{
	"Unescape", (methodPointerType)&m10768, &t1666_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1666_m10768_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4790, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1666_m10769_ParameterInfos[] = 
{
	{"name", 0, 134223486, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10769_MI = 
{
	"IsValidAttributeName", (methodPointerType)&m10769, &t1666_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1666_m10769_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4791, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1666_m10770_ParameterInfos[] = 
{
	{"value", 0, 134223487, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10770_MI = 
{
	"IsValidAttributeValue", (methodPointerType)&m10770, &t1666_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1666_m10770_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4792, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1666_m10771_ParameterInfos[] = 
{
	{"tag", 0, 134223488, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10771_MI = 
{
	"IsValidTag", (methodPointerType)&m10771, &t1666_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1666_m10771_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4793, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1666_m10772_ParameterInfos[] = 
{
	{"text", 0, 134223489, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10772_MI = 
{
	"IsValidText", (methodPointerType)&m10772, &t1666_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1666_m10772_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4794, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1666_m10773_ParameterInfos[] = 
{
	{"tag", 0, 134223490, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1666_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10773_MI = 
{
	"SearchForChildByTag", (methodPointerType)&m10773, &t1666_TI, &t1666_0_0_0, RuntimeInvoker_t9_t9, t1666_m10773_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4795, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10774_MI = 
{
	"ToString", (methodPointerType)&m10774, &t1666_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4796, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t328_1_0_0;
extern Il2CppType t328_1_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1666_m10775_ParameterInfos[] = 
{
	{"s", 0, 134223491, &EmptyCustomAttributesCache, &t328_1_0_0},
	{"level", 1, 134223492, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t2648_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10775_MI = 
{
	"ToXml", (methodPointerType)&m10775, &t1666_TI, &t122_0_0_0, RuntimeInvoker_t122_t2648_t125, t1666_m10775_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4797, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1666_m10776_ParameterInfos[] = 
{
	{"name", 0, 134223493, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2038_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10776_MI = 
{
	"GetAttribute", (methodPointerType)&m10776, &t1666_TI, &t2038_0_0_0, RuntimeInvoker_t9_t9, t1666_m10776_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4798, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1666_MIs[] =
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
	&m10775_MI,
	&m10776_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1666_f0_FieldInfo = 
{
	"text", &t2_0_0_1, &t1666_TI, offsetof(t1666, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1666_f1_FieldInfo = 
{
	"tag", &t2_0_0_1, &t1666_TI, offsetof(t1666, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1176_0_0_1;
FieldInfo t1666_f2_FieldInfo = 
{
	"attributes", &t1176_0_0_1, &t1666_TI, offsetof(t1666, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1176_0_0_1;
FieldInfo t1666_f3_FieldInfo = 
{
	"children", &t1176_0_0_1, &t1666_TI, offsetof(t1666, f3), &EmptyCustomAttributesCache};
extern Il2CppType t318_0_0_49;
FieldInfo t1666_f4_FieldInfo = 
{
	"invalid_tag_chars", &t318_0_0_49, &t1666_TI, offsetof(t1666_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t318_0_0_49;
FieldInfo t1666_f5_FieldInfo = 
{
	"invalid_text_chars", &t318_0_0_49, &t1666_TI, offsetof(t1666_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t318_0_0_49;
FieldInfo t1666_f6_FieldInfo = 
{
	"invalid_attr_name_chars", &t318_0_0_49, &t1666_TI, offsetof(t1666_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t318_0_0_49;
FieldInfo t1666_f7_FieldInfo = 
{
	"invalid_attr_value_chars", &t318_0_0_49, &t1666_TI, offsetof(t1666_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t318_0_0_49;
FieldInfo t1666_f8_FieldInfo = 
{
	"invalid_chars", &t318_0_0_49, &t1666_TI, offsetof(t1666_SFs, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1666_FIs[] =
{
	&t1666_f0_FieldInfo,
	&t1666_f1_FieldInfo,
	&t1666_f2_FieldInfo,
	&t1666_f3_FieldInfo,
	&t1666_f4_FieldInfo,
	&t1666_f5_FieldInfo,
	&t1666_f6_FieldInfo,
	&t1666_f7_FieldInfo,
	&t1666_f8_FieldInfo,
	NULL
};
extern MethodInfo m10762_MI;
static PropertyInfo t1666____Children_PropertyInfo = 
{
	&t1666_TI, "Children", &m10762_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10763_MI;
static PropertyInfo t1666____Tag_PropertyInfo = 
{
	&t1666_TI, "Tag", &m10763_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10764_MI;
static PropertyInfo t1666____Text_PropertyInfo = 
{
	&t1666_TI, "Text", NULL, &m10764_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1666_PIs[] =
{
	&t1666____Children_PropertyInfo,
	&t1666____Tag_PropertyInfo,
	&t1666____Text_PropertyInfo,
	NULL
};
static const Il2CppType* t1666_TI__nestedTypes[1] =
{
	&t2038_0_0_0,
};
extern MethodInfo m10774_MI;
static Il2CppMethodReference t1666_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m10774_MI,
};
static bool t1666_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1666_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1666__CustomAttributeCache = {
1,
NULL,
&t1666_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1666_1_0_0;
struct t1666;
extern CustomAttributesCache t1666__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1666_DM = 
{
	NULL, t1666_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t1666_VT, t1666_VTIGM, NULL};
TypeInfo t1666_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityElement", "System.Security", t1666_MIs, t1666_PIs, t1666_FIs, NULL, &t1666_TI, NULL, &t1666__CustomAttributeCache, &t1666_0_0_0, &t1666_1_0_0, &t1666_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1666), sizeof (t1666), 0, -1, sizeof(t1666_SFs), 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, true, false, 18, 3, 9, 0, 1, 4, 0, 0};
#include "t2039.h"
// Metadata Definition System.Security.SecurityException
extern TypeInfo t2039_TI;
#include "t2039MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10777_MI = 
{
	".ctor", (methodPointerType)&m10777, &t2039_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4802, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2039_m10778_ParameterInfos[] = 
{
	{"message", 0, 134223496, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10778_MI = 
{
	".ctor", (methodPointerType)&m10778, &t2039_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2039_m10778_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4803, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t2039_m10779_ParameterInfos[] = 
{
	{"info", 0, 134223497, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134223498, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10779_MI = 
{
	".ctor", (methodPointerType)&m10779, &t2039_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t2039_m10779_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 4804, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10780_MI = 
{
	"get_Demanded", (methodPointerType)&m10780, &t2039_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4805, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2026_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10781_MI = 
{
	"get_FirstPermissionThatFailed", (methodPointerType)&m10781, &t2039_TI, &t2026_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4806, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10782_MI = 
{
	"get_PermissionState", (methodPointerType)&m10782, &t2039_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4807, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10783_MI = 
{
	"get_PermissionType", (methodPointerType)&m10783, &t2039_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4808, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10784_MI = 
{
	"get_GrantedSet", (methodPointerType)&m10784, &t2039_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4809, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10785_MI = 
{
	"get_RefusedSet", (methodPointerType)&m10785, &t2039_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4810, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t2039_m10786_ParameterInfos[] = 
{
	{"info", 0, 134223499, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134223500, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10786_MI = 
{
	"GetObjectData", (methodPointerType)&m10786, &t2039_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t2039_m10786_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, false, 4811, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10787_MI = 
{
	"ToString", (methodPointerType)&m10787, &t2039_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4812, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2039_MIs[] =
{
	&m10777_MI,
	&m10778_MI,
	&m10779_MI,
	&m10780_MI,
	&m10781_MI,
	&m10782_MI,
	&m10783_MI,
	&m10784_MI,
	&m10785_MI,
	&m10786_MI,
	&m10787_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2039_f11_FieldInfo = 
{
	"permissionState", &t2_0_0_1, &t2039_TI, offsetof(t2039, f11), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t2039_f12_FieldInfo = 
{
	"permissionType", &t126_0_0_1, &t2039_TI, offsetof(t2039, f12), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2039_f13_FieldInfo = 
{
	"_granted", &t2_0_0_1, &t2039_TI, offsetof(t2039, f13), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2039_f14_FieldInfo = 
{
	"_refused", &t2_0_0_1, &t2039_TI, offsetof(t2039, f14), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t2039_f15_FieldInfo = 
{
	"_demanded", &t9_0_0_1, &t2039_TI, offsetof(t2039, f15), &EmptyCustomAttributesCache};
extern Il2CppType t2026_0_0_1;
FieldInfo t2039_f16_FieldInfo = 
{
	"_firstperm", &t2026_0_0_1, &t2039_TI, offsetof(t2039, f16), &EmptyCustomAttributesCache};
extern Il2CppType t835_0_0_1;
FieldInfo t2039_f17_FieldInfo = 
{
	"_method", &t835_0_0_1, &t2039_TI, offsetof(t2039, f17), &EmptyCustomAttributesCache};
extern Il2CppType t1806_0_0_1;
FieldInfo t2039_f18_FieldInfo = 
{
	"_evidence", &t1806_0_0_1, &t2039_TI, offsetof(t2039, f18), &EmptyCustomAttributesCache};
static FieldInfo* t2039_FIs[] =
{
	&t2039_f11_FieldInfo,
	&t2039_f12_FieldInfo,
	&t2039_f13_FieldInfo,
	&t2039_f14_FieldInfo,
	&t2039_f15_FieldInfo,
	&t2039_f16_FieldInfo,
	&t2039_f17_FieldInfo,
	&t2039_f18_FieldInfo,
	NULL
};
extern MethodInfo m10780_MI;
extern CustomAttributesCache t2039__CustomAttributeCache_t2039____Demanded_PropertyInfo;
static PropertyInfo t2039____Demanded_PropertyInfo = 
{
	&t2039_TI, "Demanded", &m10780_MI, NULL, 0, &t2039__CustomAttributeCache_t2039____Demanded_PropertyInfo};
extern MethodInfo m10781_MI;
static PropertyInfo t2039____FirstPermissionThatFailed_PropertyInfo = 
{
	&t2039_TI, "FirstPermissionThatFailed", &m10781_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10782_MI;
static PropertyInfo t2039____PermissionState_PropertyInfo = 
{
	&t2039_TI, "PermissionState", &m10782_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10783_MI;
static PropertyInfo t2039____PermissionType_PropertyInfo = 
{
	&t2039_TI, "PermissionType", &m10783_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10784_MI;
static PropertyInfo t2039____GrantedSet_PropertyInfo = 
{
	&t2039_TI, "GrantedSet", &m10784_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10785_MI;
static PropertyInfo t2039____RefusedSet_PropertyInfo = 
{
	&t2039_TI, "RefusedSet", &m10785_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2039_PIs[] =
{
	&t2039____Demanded_PropertyInfo,
	&t2039____FirstPermissionThatFailed_PropertyInfo,
	&t2039____PermissionState_PropertyInfo,
	&t2039____PermissionType_PropertyInfo,
	&t2039____GrantedSet_PropertyInfo,
	&t2039____RefusedSet_PropertyInfo,
	NULL
};
extern MethodInfo m10787_MI;
extern MethodInfo m10786_MI;
extern MethodInfo m4285_MI;
extern MethodInfo m1131_MI;
extern MethodInfo m4540_MI;
extern MethodInfo m4483_MI;
extern MethodInfo m4484_MI;
static Il2CppMethodReference t2039_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m10787_MI,
	&m10786_MI,
	&m4285_MI,
	&m1131_MI,
	&m4540_MI,
	&m4483_MI,
	&m10786_MI,
	&m4484_MI,
};
static bool t2039_VTIGM[] =
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
extern Il2CppType t954_0_0_0;
static Il2CppInterfaceOffsetPair t2039_IOs[] = 
{
	{ &t630_0_0_0, 4},
	{ &t954_0_0_0, 5},
};
void t2039_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t2039_CustomAttributesCacheGenerator_t2039____Demanded_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2039__CustomAttributeCache = {
1,
NULL,
&t2039_CustomAttributesCacheGenerator
};
CustomAttributesCache t2039__CustomAttributeCache_t2039____Demanded_PropertyInfo = {
1,
NULL,
&t2039_CustomAttributesCacheGenerator_t2039____Demanded_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2039_0_0_0;
extern Il2CppType t2039_1_0_0;
extern Il2CppType t1375_0_0_0;
struct t2039;
extern CustomAttributesCache t2039__CustomAttributeCache;
extern CustomAttributesCache t2039__CustomAttributeCache_t2039____Demanded_PropertyInfo;
const Il2CppTypeDefinitionMetadata t2039_DM = 
{
	NULL, NULL, NULL, t2039_IOs, &t1375_0_0_0, t2039_VT, t2039_VTIGM, NULL};
TypeInfo t2039_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityException", "System.Security", t2039_MIs, t2039_PIs, t2039_FIs, NULL, &t2039_TI, NULL, &t2039__CustomAttributeCache, &t2039_0_0_0, &t2039_1_0_0, &t2039_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2039), sizeof (t2039), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 11, 6, 8, 0, 0, 11, 0, 2};
#include "t2040.h"
// Metadata Definition System.Security.RuntimeDeclSecurityEntry
extern TypeInfo t2040_TI;
#include "t2040MD.h"
static MethodInfo* t2040_MIs[] =
{
	NULL
};
extern Il2CppType t58_0_0_6;
FieldInfo t2040_f0_FieldInfo = 
{
	"blob", &t58_0_0_6, &t2040_TI, offsetof(t2040, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t2040_f1_FieldInfo = 
{
	"size", &t125_0_0_6, &t2040_TI, offsetof(t2040, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t2040_f2_FieldInfo = 
{
	"index", &t125_0_0_6, &t2040_TI, offsetof(t2040, f2) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t2040_FIs[] =
{
	&t2040_f0_FieldInfo,
	&t2040_f1_FieldInfo,
	&t2040_f2_FieldInfo,
	NULL
};
static Il2CppMethodReference t2040_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t2040_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2040_0_0_0;
extern Il2CppType t2040_1_0_0;
const Il2CppTypeDefinitionMetadata t2040_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t2040_VT, t2040_VTIGM, NULL};
TypeInfo t2040_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RuntimeDeclSecurityEntry", "System.Security", t2040_MIs, NULL, t2040_FIs, NULL, &t2040_TI, NULL, &EmptyCustomAttributesCache, &t2040_0_0_0, &t2040_1_0_0, &t2040_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2040)+ sizeof (Il2CppObject), sizeof (t2040)+ sizeof (Il2CppObject), 0, sizeof(t2040 ), 0, 0, -1, 1048840, 0, 0, true, false, false, false, false, false, false, false, false, true, 0, 0, 3, 0, 0, 4, 0, 0};
#include "t2041.h"
// Metadata Definition System.Security.RuntimeSecurityFrame
extern TypeInfo t2041_TI;
#include "t2041MD.h"
static MethodInfo* t2041_MIs[] =
{
	NULL
};
extern Il2CppType t2042_0_0_6;
FieldInfo t2041_f0_FieldInfo = 
{
	"domain", &t2042_0_0_6, &t2041_TI, offsetof(t2041, f0), &EmptyCustomAttributesCache};
extern Il2CppType t835_0_0_6;
FieldInfo t2041_f1_FieldInfo = 
{
	"method", &t835_0_0_6, &t2041_TI, offsetof(t2041, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2040_0_0_6;
FieldInfo t2041_f2_FieldInfo = 
{
	"assert", &t2040_0_0_6, &t2041_TI, offsetof(t2041, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2040_0_0_6;
FieldInfo t2041_f3_FieldInfo = 
{
	"deny", &t2040_0_0_6, &t2041_TI, offsetof(t2041, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2040_0_0_6;
FieldInfo t2041_f4_FieldInfo = 
{
	"permitonly", &t2040_0_0_6, &t2041_TI, offsetof(t2041, f4), &EmptyCustomAttributesCache};
static FieldInfo* t2041_FIs[] =
{
	&t2041_f0_FieldInfo,
	&t2041_f1_FieldInfo,
	&t2041_f2_FieldInfo,
	&t2041_f3_FieldInfo,
	&t2041_f4_FieldInfo,
	NULL
};
static Il2CppMethodReference t2041_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2041_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2041_0_0_0;
extern Il2CppType t2041_1_0_0;
struct t2041;
const Il2CppTypeDefinitionMetadata t2041_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2041_VT, t2041_VTIGM, NULL};
TypeInfo t2041_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RuntimeSecurityFrame", "System.Security", t2041_MIs, NULL, t2041_FIs, NULL, &t2041_TI, NULL, &EmptyCustomAttributesCache, &t2041_0_0_0, &t2041_1_0_0, &t2041_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2041), sizeof (t2041), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 4, 0, 0};
#include "t2043.h"
// Metadata Definition System.Security.SecurityFrame
extern TypeInfo t2043_TI;
#include "t2043MD.h"
extern Il2CppType t2041_0_0_0;
static ParameterInfo t2043_m10788_ParameterInfos[] = 
{
	{"frame", 0, 134223501, &EmptyCustomAttributesCache, &t2041_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10788_MI = 
{
	".ctor", (methodPointerType)&m10788, &t2043_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2043_m10788_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 4813, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2043_m10789_ParameterInfos[] = 
{
	{"skip", 0, 134223502, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t121_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10789_MI = 
{
	"_GetSecurityStack", (methodPointerType)&m10789, &t2043_TI, &t121_0_0_0, RuntimeInvoker_t9_t125, t2043_m10789_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 4814, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2041_0_0_0;
static ParameterInfo t2043_m10790_ParameterInfos[] = 
{
	{"frame", 0, 134223503, &EmptyCustomAttributesCache, &t2041_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10790_MI = 
{
	"InitFromRuntimeFrame", (methodPointerType)&m10790, &t2043_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2043_m10790_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4815, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1351_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10791_MI = 
{
	"get_Assembly", (methodPointerType)&m10791, &t2043_TI, &t1351_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4816, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2042_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10792_MI = 
{
	"get_Domain", (methodPointerType)&m10792, &t2043_TI, &t2042_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4817, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10793_MI = 
{
	"ToString", (methodPointerType)&m10793, &t2043_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4818, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2043_m10794_ParameterInfos[] = 
{
	{"skipFrames", 0, 134223504, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t1176_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10794_MI = 
{
	"GetStack", (methodPointerType)&m10794, &t2043_TI, &t1176_0_0_0, RuntimeInvoker_t9_t125, t2043_m10794_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4819, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2043_MIs[] =
{
	&m10788_MI,
	&m10789_MI,
	&m10790_MI,
	&m10791_MI,
	&m10792_MI,
	&m10793_MI,
	&m10794_MI,
	NULL
};
extern Il2CppType t2042_0_0_1;
FieldInfo t2043_f0_FieldInfo = 
{
	"_domain", &t2042_0_0_1, &t2043_TI, offsetof(t2043, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t835_0_0_1;
FieldInfo t2043_f1_FieldInfo = 
{
	"_method", &t835_0_0_1, &t2043_TI, offsetof(t2043, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1807_0_0_1;
FieldInfo t2043_f2_FieldInfo = 
{
	"_assert", &t1807_0_0_1, &t2043_TI, offsetof(t2043, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1807_0_0_1;
FieldInfo t2043_f3_FieldInfo = 
{
	"_deny", &t1807_0_0_1, &t2043_TI, offsetof(t2043, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1807_0_0_1;
FieldInfo t2043_f4_FieldInfo = 
{
	"_permitonly", &t1807_0_0_1, &t2043_TI, offsetof(t2043, f4) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t2043_FIs[] =
{
	&t2043_f0_FieldInfo,
	&t2043_f1_FieldInfo,
	&t2043_f2_FieldInfo,
	&t2043_f3_FieldInfo,
	&t2043_f4_FieldInfo,
	NULL
};
extern MethodInfo m10791_MI;
static PropertyInfo t2043____Assembly_PropertyInfo = 
{
	&t2043_TI, "Assembly", &m10791_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10792_MI;
static PropertyInfo t2043____Domain_PropertyInfo = 
{
	&t2043_TI, "Domain", &m10792_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2043_PIs[] =
{
	&t2043____Assembly_PropertyInfo,
	&t2043____Domain_PropertyInfo,
	NULL
};
extern MethodInfo m10793_MI;
static Il2CppMethodReference t2043_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m10793_MI,
};
static bool t2043_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2043_0_0_0;
extern Il2CppType t2043_1_0_0;
const Il2CppTypeDefinitionMetadata t2043_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t2043_VT, t2043_VTIGM, NULL};
TypeInfo t2043_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityFrame", "System.Security", t2043_MIs, t2043_PIs, t2043_FIs, NULL, &t2043_TI, NULL, &EmptyCustomAttributesCache, &t2043_0_0_0, &t2043_1_0_0, &t2043_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2043)+ sizeof (Il2CppObject), sizeof (t2043)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048840, 0, 0, true, false, false, false, false, false, false, false, false, false, 7, 2, 5, 0, 0, 4, 0, 0};
#include "t2044.h"
// Metadata Definition System.Security.SecurityManager
extern TypeInfo t2044_TI;
#include "t2044MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10795_MI = 
{
	".cctor", (methodPointerType)&m10795, &t2044_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4820, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10796_MI = 
{
	"get_SecurityEnabled", (methodPointerType)&m10796, &t2044_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 4821, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2044_m10797_ParameterInfos[] = 
{
	{"permissions", 0, 134223505, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"length", 1, 134223506, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t1807_0_0_0;
extern void* RuntimeInvoker_t9_t58_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10797_MI = 
{
	"Decode", (methodPointerType)&m10797, &t2044_TI, &t1807_0_0_0, RuntimeInvoker_t9_t58_t125, t2044_m10797_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4822, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t2044_m10798_ParameterInfos[] = 
{
	{"encodedPermissions", 0, 134223507, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t1807_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10798_MI = 
{
	"Decode", (methodPointerType)&m10798, &t2044_TI, &t1807_0_0_0, RuntimeInvoker_t9_t9, t2044_m10798_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 4823, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2044_MIs[] =
{
	&m10795_MI,
	&m10796_MI,
	&m10797_MI,
	&m10798_MI,
	NULL
};
extern Il2CppType t9_0_0_17;
FieldInfo t2044_f0_FieldInfo = 
{
	"_lockObject", &t9_0_0_17, &t2044_TI, offsetof(t2044_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_17;
FieldInfo t2044_f1_FieldInfo = 
{
	"_declsecCache", &t1164_0_0_17, &t2044_TI, offsetof(t2044_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2023_0_0_17;
FieldInfo t2044_f2_FieldInfo = 
{
	"_execution", &t2023_0_0_17, &t2044_TI, offsetof(t2044_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2044_FIs[] =
{
	&t2044_f0_FieldInfo,
	&t2044_f1_FieldInfo,
	&t2044_f2_FieldInfo,
	NULL
};
extern MethodInfo m10796_MI;
extern CustomAttributesCache t2044__CustomAttributeCache_t2044____SecurityEnabled_PropertyInfo;
static PropertyInfo t2044____SecurityEnabled_PropertyInfo = 
{
	&t2044_TI, "SecurityEnabled", &m10796_MI, NULL, 0, &t2044__CustomAttributeCache_t2044____SecurityEnabled_PropertyInfo};
static PropertyInfo* t2044_PIs[] =
{
	&t2044____SecurityEnabled_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2044_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t2044_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t2044_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t2044_CustomAttributesCacheGenerator_t2044____SecurityEnabled_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t625 * tmp;
		tmp = (t625 *)il2cpp_codegen_object_new (&t625_TI);
		m3034(tmp, il2cpp_codegen_string_new_wrapper("The security manager cannot be turned off on MS runtime"), &m3034_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2044__CustomAttributeCache = {
1,
NULL,
&t2044_CustomAttributesCacheGenerator
};
CustomAttributesCache t2044__CustomAttributeCache_t2044____SecurityEnabled_PropertyInfo = {
1,
NULL,
&t2044_CustomAttributesCacheGenerator_t2044____SecurityEnabled_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2044_0_0_0;
extern Il2CppType t2044_1_0_0;
struct t2044;
extern CustomAttributesCache t2044__CustomAttributeCache;
extern CustomAttributesCache t2044__CustomAttributeCache_t2044____SecurityEnabled_PropertyInfo;
const Il2CppTypeDefinitionMetadata t2044_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2044_VT, t2044_VTIGM, NULL};
TypeInfo t2044_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecurityManager", "System.Security", t2044_MIs, t2044_PIs, t2044_FIs, NULL, &t2044_TI, NULL, &t2044__CustomAttributeCache, &t2044_0_0_0, &t2044_1_0_0, &t2044_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2044), sizeof (t2044), 0, -1, sizeof(t2044_SFs), 0, -1, 385, 0, 0, false, false, false, false, false, false, false, false, true, false, 4, 1, 3, 0, 0, 4, 0, 0};
#include "t979.h"
// Metadata Definition System.Security.SecuritySafeCriticalAttribute
extern TypeInfo t979_TI;
#include "t979MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m4558_MI = 
{
	".ctor", (methodPointerType)&m4558, &t979_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4824, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t979_MIs[] =
{
	&m4558_MI,
	NULL
};
static Il2CppMethodReference t979_VT[] =
{
	&m4541_MI,
	&m646_MI,
	&m4535_MI,
	&m673_MI,
};
static bool t979_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t979_IOs[] = 
{
	{ &t960_0_0_0, 4},
};
void t979_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7891(tmp, il2cpp_codegen_string_new_wrapper("Only supported by the runtime when CoreCLR is enabled"), &m7891_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1030 * tmp;
		tmp = (t1030 *)il2cpp_codegen_object_new (&t1030_TI);
		m4647(tmp, 32767, &m4647_MI);
		m4649(tmp, false, &m4649_MI);
		m4648(tmp, false, &m4648_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t979__CustomAttributeCache = {
2,
NULL,
&t979_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t979_0_0_0;
extern Il2CppType t979_1_0_0;
struct t979;
extern CustomAttributesCache t979__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t979_DM = 
{
	NULL, NULL, NULL, t979_IOs, &t732_0_0_0, t979_VT, t979_VTIGM, NULL};
TypeInfo t979_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SecuritySafeCriticalAttribute", "System.Security", t979_MIs, NULL, NULL, NULL, &t979_TI, NULL, &t979__CustomAttributeCache, &t979_0_0_0, &t979_1_0_0, &t979_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t979), sizeof (t979), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t2045.h"
// Metadata Definition System.Security.SuppressUnmanagedCodeSecurityAttribute
extern TypeInfo t2045_TI;
#include "t2045MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10799_MI = 
{
	".ctor", (methodPointerType)&m10799, &t2045_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4825, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2045_MIs[] =
{
	&m10799_MI,
	NULL
};
static Il2CppMethodReference t2045_VT[] =
{
	&m4541_MI,
	&m646_MI,
	&m4535_MI,
	&m673_MI,
};
static bool t2045_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2045_IOs[] = 
{
	{ &t960_0_0_0, 4},
};
void t2045_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1030 * tmp;
		tmp = (t1030 *)il2cpp_codegen_object_new (&t1030_TI);
		m4647(tmp, 5188, &m4647_MI);
		m4649(tmp, true, &m4649_MI);
		m4648(tmp, false, &m4648_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2045__CustomAttributeCache = {
2,
NULL,
&t2045_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2045_0_0_0;
extern Il2CppType t2045_1_0_0;
struct t2045;
extern CustomAttributesCache t2045__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2045_DM = 
{
	NULL, NULL, NULL, t2045_IOs, &t732_0_0_0, t2045_VT, t2045_VTIGM, NULL};
TypeInfo t2045_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SuppressUnmanagedCodeSecurityAttribute", "System.Security", t2045_MIs, NULL, NULL, NULL, &t2045_TI, NULL, &t2045__CustomAttributeCache, &t2045_0_0_0, &t2045_1_0_0, &t2045_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2045), sizeof (t2045), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t2046.h"
// Metadata Definition System.Security.UnverifiableCodeAttribute
extern TypeInfo t2046_TI;
#include "t2046MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10800_MI = 
{
	".ctor", (methodPointerType)&m10800, &t2046_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4826, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2046_MIs[] =
{
	&m10800_MI,
	NULL
};
static Il2CppMethodReference t2046_VT[] =
{
	&m4541_MI,
	&m646_MI,
	&m4535_MI,
	&m673_MI,
};
static bool t2046_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t2046_IOs[] = 
{
	{ &t960_0_0_0, 4},
};
void t2046_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1030 * tmp;
		tmp = (t1030 *)il2cpp_codegen_object_new (&t1030_TI);
		m4647(tmp, 2, &m4647_MI);
		m4649(tmp, true, &m4649_MI);
		m4648(tmp, false, &m4648_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2046__CustomAttributeCache = {
2,
NULL,
&t2046_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2046_0_0_0;
extern Il2CppType t2046_1_0_0;
struct t2046;
extern CustomAttributesCache t2046__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2046_DM = 
{
	NULL, NULL, NULL, t2046_IOs, &t732_0_0_0, t2046_VT, t2046_VTIGM, NULL};
TypeInfo t2046_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UnverifiableCodeAttribute", "System.Security", t2046_MIs, NULL, NULL, NULL, &t2046_TI, NULL, &t2046__CustomAttributeCache, &t2046_0_0_0, &t2046_1_0_0, &t2046_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2046), sizeof (t2046), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t2047.h"
// Metadata Definition System.Text.ASCIIEncoding
extern TypeInfo t2047_TI;
#include "t2047MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10801_MI = 
{
	".ctor", (methodPointerType)&m10801, &t2047_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4827, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2047_m10802_ParameterInfos[] = 
{
	{"chars", 0, 134223508, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"index", 1, 134223509, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223510, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10802_MI = 
{
	"GetByteCount", (methodPointerType)&m10802, &t2047_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t2047_m10802_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 3, false, false, 4828, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2047_m10803_ParameterInfos[] = 
{
	{"chars", 0, 134223511, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10803_MI = 
{
	"GetByteCount", (methodPointerType)&m10803, &t2047_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t2047_m10803_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4829, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2047_m10804_ParameterInfos[] = 
{
	{"chars", 0, 134223512, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"charIndex", 1, 134223513, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223514, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223515, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 4, 134223516, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10804_MI = 
{
	"GetBytes", (methodPointerType)&m10804, &t2047_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2047_m10804_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 5, false, false, 4830, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2048_1_0_0;
extern Il2CppType t2048_1_0_0;
extern Il2CppType t318_1_0_0;
extern Il2CppType t318_1_0_0;
static ParameterInfo t2047_m10805_ParameterInfos[] = 
{
	{"chars", 0, 134223517, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"charIndex", 1, 134223518, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223519, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223520, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 4, 134223521, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"buffer", 5, 134223522, &EmptyCustomAttributesCache, &t2048_1_0_0},
	{"fallback_chars", 6, 134223523, &EmptyCustomAttributesCache, &t318_1_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2649_t2650 (MethodInfo* method, void* obj, void** args);
MethodInfo m10805_MI = 
{
	"GetBytes", (methodPointerType)&m10805, &t2047_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2649_t2650, t2047_m10805_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4831, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2047_m10806_ParameterInfos[] = 
{
	{"chars", 0, 134223524, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"charIndex", 1, 134223525, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223526, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223527, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 4, 134223528, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10806_MI = 
{
	"GetBytes", (methodPointerType)&m10806, &t2047_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2047_m10806_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 5, false, false, 4832, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2048_1_0_0;
extern Il2CppType t318_1_0_0;
static ParameterInfo t2047_m10807_ParameterInfos[] = 
{
	{"chars", 0, 134223529, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"charIndex", 1, 134223530, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223531, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223532, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 4, 134223533, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"buffer", 5, 134223534, &EmptyCustomAttributesCache, &t2048_1_0_0},
	{"fallback_chars", 6, 134223535, &EmptyCustomAttributesCache, &t318_1_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2649_t2650 (MethodInfo* method, void* obj, void** args);
MethodInfo m10807_MI = 
{
	"GetBytes", (methodPointerType)&m10807, &t2047_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2649_t2650, t2047_m10807_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4833, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2047_m10808_ParameterInfos[] = 
{
	{"bytes", 0, 134223536, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"index", 1, 134223537, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223538, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10808_MI = 
{
	"GetCharCount", (methodPointerType)&m10808, &t2047_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t2047_m10808_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 3, false, false, 4834, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2047_m10809_ParameterInfos[] = 
{
	{"bytes", 0, 134223539, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 1, 134223540, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223541, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223542, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"charIndex", 4, 134223543, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10809_MI = 
{
	"GetChars", (methodPointerType)&m10809, &t2047_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2047_m10809_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 5, false, false, 4835, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2049_1_0_0;
extern Il2CppType t2049_1_0_0;
static ParameterInfo t2047_m10810_ParameterInfos[] = 
{
	{"bytes", 0, 134223544, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 1, 134223545, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223546, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223547, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"charIndex", 4, 134223548, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"buffer", 5, 134223549, &EmptyCustomAttributesCache, &t2049_1_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2651 (MethodInfo* method, void* obj, void** args);
MethodInfo m10810_MI = 
{
	"GetChars", (methodPointerType)&m10810, &t2047_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2651, t2047_m10810_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 4836, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2047_m10811_ParameterInfos[] = 
{
	{"charCount", 0, 134223550, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10811_MI = 
{
	"GetMaxByteCount", (methodPointerType)&m10811, &t2047_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t2047_m10811_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 1, false, false, 4837, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2047_m10812_ParameterInfos[] = 
{
	{"byteCount", 0, 134223551, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10812_MI = 
{
	"GetMaxCharCount", (methodPointerType)&m10812, &t2047_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t2047_m10812_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 4838, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2047_m10813_ParameterInfos[] = 
{
	{"bytes", 0, 134223552, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 1, 134223553, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223554, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10813_MI = 
{
	"GetString", (methodPointerType)&m10813, &t2047_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t2047_m10813_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 19, 3, false, false, 4839, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2244_0_0_0;
extern Il2CppType t2244_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1559_0_0_0;
extern Il2CppType t1559_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2047_m10814_ParameterInfos[] = 
{
	{"chars", 0, 134223555, &EmptyCustomAttributesCache, &t2244_0_0_0},
	{"charCount", 1, 134223556, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 2, 134223557, &EmptyCustomAttributesCache, &t1559_0_0_0},
	{"byteCount", 3, 134223558, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2047__CustomAttributeCache_m10814;
MethodInfo m10814_MI = 
{
	"GetBytes", (methodPointerType)&m10814, &t2047_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t9_t125, t2047_m10814_ParameterInfos, &t2047__CustomAttributeCache_m10814, 198, 0, 24, 4, false, false, 4840, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2244_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2047_m10815_ParameterInfos[] = 
{
	{"chars", 0, 134223559, &EmptyCustomAttributesCache, &t2244_0_0_0},
	{"count", 1, 134223560, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2047__CustomAttributeCache_m10815;
MethodInfo m10815_MI = 
{
	"GetByteCount", (methodPointerType)&m10815, &t2047_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125, t2047_m10815_ParameterInfos, &t2047__CustomAttributeCache_m10815, 198, 0, 23, 2, false, false, 4841, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1719_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2047__CustomAttributeCache_m10816;
MethodInfo m10816_MI = 
{
	"GetDecoder", (methodPointerType)&m10816, &t2047_TI, &t1719_0_0_0, RuntimeInvoker_t9, NULL, &t2047__CustomAttributeCache_m10816, 198, 0, 15, 0, false, false, 4842, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2047_MIs[] =
{
	&m10801_MI,
	&m10802_MI,
	&m10803_MI,
	&m10804_MI,
	&m10805_MI,
	&m10806_MI,
	&m10807_MI,
	&m10808_MI,
	&m10809_MI,
	&m10810_MI,
	&m10811_MI,
	&m10812_MI,
	&m10813_MI,
	&m10814_MI,
	&m10815_MI,
	&m10816_MI,
	NULL
};
extern MethodInfo m10891_MI;
extern MethodInfo m10899_MI;
extern MethodInfo m10802_MI;
extern MethodInfo m10803_MI;
extern MethodInfo m10893_MI;
extern MethodInfo m10804_MI;
extern MethodInfo m10806_MI;
extern MethodInfo m4330_MI;
extern MethodInfo m10894_MI;
extern MethodInfo m6027_MI;
extern MethodInfo m10808_MI;
extern MethodInfo m10809_MI;
extern MethodInfo m10895_MI;
extern MethodInfo m10816_MI;
extern MethodInfo m10811_MI;
extern MethodInfo m10812_MI;
extern MethodInfo m10900_MI;
extern MethodInfo m10813_MI;
extern MethodInfo m5870_MI;
extern MethodInfo m4334_MI;
extern MethodInfo m4341_MI;
extern MethodInfo m10815_MI;
extern MethodInfo m10814_MI;
static Il2CppMethodReference t2047_VT[] =
{
	&m10891_MI,
	&m646_MI,
	&m10899_MI,
	&m673_MI,
	&m10802_MI,
	&m10803_MI,
	&m10893_MI,
	&m10804_MI,
	&m10806_MI,
	&m4330_MI,
	&m10894_MI,
	&m6027_MI,
	&m10808_MI,
	&m10809_MI,
	&m10895_MI,
	&m10816_MI,
	&m10811_MI,
	&m10812_MI,
	&m10900_MI,
	&m10813_MI,
	&m5870_MI,
	&m4334_MI,
	&m4341_MI,
	&m10815_MI,
	&m10814_MI,
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
	false,
	false,
	false,
	false,
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
extern Il2CppType t629_0_0_0;
static Il2CppInterfaceOffsetPair t2047_IOs[] = 
{
	{ &t629_0_0_0, 4},
};
void t2047_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7891(tmp, il2cpp_codegen_string_new_wrapper("Serialization format not compatible with .NET"), &m7891_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1158_TI;
#include "t1158.h"
#include "t1158MD.h"
extern MethodInfo m4843_MI;
void t2047_CustomAttributesCacheGenerator_m10814(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1158 * tmp;
		tmp = (t1158 *)il2cpp_codegen_object_new (&t1158_TI);
		m4843(tmp, false, &m4843_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t2047_CustomAttributesCacheGenerator_m10815(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1158 * tmp;
		tmp = (t1158 *)il2cpp_codegen_object_new (&t1158_TI);
		m4843(tmp, false, &m4843_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t2047_CustomAttributesCacheGenerator_m10816(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7891(tmp, il2cpp_codegen_string_new_wrapper("we have simple override to match method signature."), &m7891_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2047__CustomAttributeCache = {
2,
NULL,
&t2047_CustomAttributesCacheGenerator
};
CustomAttributesCache t2047__CustomAttributeCache_m10814 = {
2,
NULL,
&t2047_CustomAttributesCacheGenerator_m10814
};
CustomAttributesCache t2047__CustomAttributeCache_m10815 = {
2,
NULL,
&t2047_CustomAttributesCacheGenerator_m10815
};
CustomAttributesCache t2047__CustomAttributeCache_m10816 = {
2,
NULL,
&t2047_CustomAttributesCacheGenerator_m10816
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2047_0_0_0;
extern Il2CppType t2047_1_0_0;
extern Il2CppType t736_0_0_0;
struct t2047;
extern CustomAttributesCache t2047__CustomAttributeCache;
extern CustomAttributesCache t2047__CustomAttributeCache_m10814;
extern CustomAttributesCache t2047__CustomAttributeCache_m10815;
extern CustomAttributesCache t2047__CustomAttributeCache_m10816;
const Il2CppTypeDefinitionMetadata t2047_DM = 
{
	NULL, NULL, NULL, t2047_IOs, &t736_0_0_0, t2047_VT, t2047_VTIGM, NULL};
TypeInfo t2047_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ASCIIEncoding", "System.Text", t2047_MIs, NULL, NULL, NULL, &t2047_TI, NULL, &t2047__CustomAttributeCache, &t2047_0_0_0, &t2047_1_0_0, &t2047_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2047), sizeof (t2047), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 16, 0, 0, 0, 0, 25, 0, 1};
#include "t1719.h"
// Metadata Definition System.Text.Decoder
extern TypeInfo t1719_TI;
#include "t1719MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10817_MI = 
{
	".ctor", (methodPointerType)&m10817, &t1719_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4843, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2050_0_0_0;
extern Il2CppType t2050_0_0_0;
static ParameterInfo t1719_m10818_ParameterInfos[] = 
{
	{"value", 0, 134223561, &EmptyCustomAttributesCache, &t2050_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10818_MI = 
{
	"set_Fallback", (methodPointerType)&m10818, &t1719_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1719_m10818_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4844, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2049_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10819_MI = 
{
	"get_FallbackBuffer", (methodPointerType)&m10819, &t1719_TI, &t2049_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4845, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1719_m12046_ParameterInfos[] = 
{
	{"bytes", 0, 134223562, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 1, 134223563, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223564, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223565, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"charIndex", 4, 134223566, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12046_MI = 
{
	"GetChars", NULL, &t1719_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t1719_m12046_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 5, false, false, 4846, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1719_MIs[] =
{
	&m10817_MI,
	&m10818_MI,
	&m10819_MI,
	&m12046_MI,
	NULL
};
extern Il2CppType t2050_0_0_1;
FieldInfo t1719_f0_FieldInfo = 
{
	"fallback", &t2050_0_0_1, &t1719_TI, offsetof(t1719, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2049_0_0_1;
FieldInfo t1719_f1_FieldInfo = 
{
	"fallback_buffer", &t2049_0_0_1, &t1719_TI, offsetof(t1719, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1719_FIs[] =
{
	&t1719_f0_FieldInfo,
	&t1719_f1_FieldInfo,
	NULL
};
extern MethodInfo m10818_MI;
extern CustomAttributesCache t1719__CustomAttributeCache_t1719____Fallback_PropertyInfo;
static PropertyInfo t1719____Fallback_PropertyInfo = 
{
	&t1719_TI, "Fallback", NULL, &m10818_MI, 0, &t1719__CustomAttributeCache_t1719____Fallback_PropertyInfo};
extern MethodInfo m10819_MI;
extern CustomAttributesCache t1719__CustomAttributeCache_t1719____FallbackBuffer_PropertyInfo;
static PropertyInfo t1719____FallbackBuffer_PropertyInfo = 
{
	&t1719_TI, "FallbackBuffer", &m10819_MI, NULL, 0, &t1719__CustomAttributeCache_t1719____FallbackBuffer_PropertyInfo};
static PropertyInfo* t1719_PIs[] =
{
	&t1719____Fallback_PropertyInfo,
	&t1719____FallbackBuffer_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1719_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t1719_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
void t1719_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1719_CustomAttributesCacheGenerator_t1719____Fallback_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1719_CustomAttributesCacheGenerator_t1719____FallbackBuffer_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1719__CustomAttributeCache = {
1,
NULL,
&t1719_CustomAttributesCacheGenerator
};
CustomAttributesCache t1719__CustomAttributeCache_t1719____Fallback_PropertyInfo = {
1,
NULL,
&t1719_CustomAttributesCacheGenerator_t1719____Fallback_PropertyInfo
};
CustomAttributesCache t1719__CustomAttributeCache_t1719____FallbackBuffer_PropertyInfo = {
1,
NULL,
&t1719_CustomAttributesCacheGenerator_t1719____FallbackBuffer_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1719_0_0_0;
extern Il2CppType t1719_1_0_0;
struct t1719;
extern CustomAttributesCache t1719__CustomAttributeCache;
extern CustomAttributesCache t1719__CustomAttributeCache_t1719____Fallback_PropertyInfo;
extern CustomAttributesCache t1719__CustomAttributeCache_t1719____FallbackBuffer_PropertyInfo;
const Il2CppTypeDefinitionMetadata t1719_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1719_VT, t1719_VTIGM, NULL};
TypeInfo t1719_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Decoder", "System.Text", t1719_MIs, t1719_PIs, t1719_FIs, NULL, &t1719_TI, NULL, &t1719__CustomAttributeCache, &t1719_0_0_0, &t1719_1_0_0, &t1719_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1719), sizeof (t1719), 0, -1, 0, 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 2, 2, 0, 0, 5, 0, 0};
#include "t2051.h"
// Metadata Definition System.Text.DecoderExceptionFallback
extern TypeInfo t2051_TI;
#include "t2051MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10820_MI = 
{
	".ctor", (methodPointerType)&m10820, &t2051_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4847, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2049_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10821_MI = 
{
	"CreateFallbackBuffer", (methodPointerType)&m10821, &t2051_TI, &t2049_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 4, 0, false, false, 4848, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2051_m10822_ParameterInfos[] = 
{
	{"value", 0, 134223567, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10822_MI = 
{
	"Equals", (methodPointerType)&m10822, &t2051_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2051_m10822_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4849, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10823_MI = 
{
	"GetHashCode", (methodPointerType)&m10823, &t2051_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4850, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2051_MIs[] =
{
	&m10820_MI,
	&m10821_MI,
	&m10822_MI,
	&m10823_MI,
	NULL
};
extern MethodInfo m10822_MI;
extern MethodInfo m10823_MI;
extern MethodInfo m10821_MI;
static Il2CppMethodReference t2051_VT[] =
{
	&m10822_MI,
	&m646_MI,
	&m10823_MI,
	&m673_MI,
	&m10821_MI,
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
extern Il2CppType t2051_0_0_0;
extern Il2CppType t2051_1_0_0;
struct t2051;
const Il2CppTypeDefinitionMetadata t2051_DM = 
{
	NULL, NULL, NULL, NULL, &t2050_0_0_0, t2051_VT, t2051_VTIGM, NULL};
TypeInfo t2051_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderExceptionFallback", "System.Text", t2051_MIs, NULL, NULL, NULL, &t2051_TI, NULL, &EmptyCustomAttributesCache, &t2051_0_0_0, &t2051_1_0_0, &t2051_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2051), sizeof (t2051), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 5, 0, 0};
#include "t2052.h"
// Metadata Definition System.Text.DecoderExceptionFallbackBuffer
extern TypeInfo t2052_TI;
#include "t2052MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10824_MI = 
{
	".ctor", (methodPointerType)&m10824, &t2052_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4851, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10825_MI = 
{
	"get_Remaining", (methodPointerType)&m10825, &t2052_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 4852, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2052_m10826_ParameterInfos[] = 
{
	{"bytesUnknown", 0, 134223568, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"index", 1, 134223569, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10826_MI = 
{
	"Fallback", (methodPointerType)&m10826, &t2052_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t125, t2052_m10826_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 4853, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t309 (MethodInfo* method, void* obj, void** args);
MethodInfo m10827_MI = 
{
	"GetNextChar", (methodPointerType)&m10827, &t2052_TI, &t309_0_0_0, RuntimeInvoker_t309, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 4854, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2052_MIs[] =
{
	&m10824_MI,
	&m10825_MI,
	&m10826_MI,
	&m10827_MI,
	NULL
};
extern MethodInfo m10825_MI;
static PropertyInfo t2052____Remaining_PropertyInfo = 
{
	&t2052_TI, "Remaining", &m10825_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2052_PIs[] =
{
	&t2052____Remaining_PropertyInfo,
	NULL
};
extern MethodInfo m10826_MI;
extern MethodInfo m10827_MI;
extern MethodInfo m10834_MI;
static Il2CppMethodReference t2052_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10825_MI,
	&m10826_MI,
	&m10827_MI,
	&m10834_MI,
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
extern Il2CppType t2049_0_0_0;
struct t2052;
const Il2CppTypeDefinitionMetadata t2052_DM = 
{
	NULL, NULL, NULL, NULL, &t2049_0_0_0, t2052_VT, t2052_VTIGM, NULL};
TypeInfo t2052_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderExceptionFallbackBuffer", "System.Text", t2052_MIs, t2052_PIs, NULL, NULL, &t2052_TI, NULL, &EmptyCustomAttributesCache, &t2052_0_0_0, &t2052_1_0_0, &t2052_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2052), sizeof (t2052), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 1, 0, 0, 0, 8, 0, 0};
#include "t2050.h"
// Metadata Definition System.Text.DecoderFallback
extern TypeInfo t2050_TI;
#include "t2050MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10828_MI = 
{
	".ctor", (methodPointerType)&m10828, &t2050_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4855, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10829_MI = 
{
	".cctor", (methodPointerType)&m10829, &t2050_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4856, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2050_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10830_MI = 
{
	"get_ExceptionFallback", (methodPointerType)&m10830, &t2050_TI, &t2050_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4857, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2050_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10831_MI = 
{
	"get_ReplacementFallback", (methodPointerType)&m10831, &t2050_TI, &t2050_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4858, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2050_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10832_MI = 
{
	"get_StandardSafeFallback", (methodPointerType)&m10832, &t2050_TI, &t2050_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 4859, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2049_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12153_MI = 
{
	"CreateFallbackBuffer", NULL, &t2050_TI, &t2049_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 1478, 0, 4, 0, false, false, 4860, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2050_MIs[] =
{
	&m10828_MI,
	&m10829_MI,
	&m10830_MI,
	&m10831_MI,
	&m10832_MI,
	&m12153_MI,
	NULL
};
extern Il2CppType t2050_0_0_17;
FieldInfo t2050_f0_FieldInfo = 
{
	"exception_fallback", &t2050_0_0_17, &t2050_TI, offsetof(t2050_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2050_0_0_17;
FieldInfo t2050_f1_FieldInfo = 
{
	"replacement_fallback", &t2050_0_0_17, &t2050_TI, offsetof(t2050_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2050_0_0_17;
FieldInfo t2050_f2_FieldInfo = 
{
	"standard_safe_fallback", &t2050_0_0_17, &t2050_TI, offsetof(t2050_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2050_FIs[] =
{
	&t2050_f0_FieldInfo,
	&t2050_f1_FieldInfo,
	&t2050_f2_FieldInfo,
	NULL
};
extern MethodInfo m10830_MI;
static PropertyInfo t2050____ExceptionFallback_PropertyInfo = 
{
	&t2050_TI, "ExceptionFallback", &m10830_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10831_MI;
static PropertyInfo t2050____ReplacementFallback_PropertyInfo = 
{
	&t2050_TI, "ReplacementFallback", &m10831_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10832_MI;
static PropertyInfo t2050____StandardSafeFallback_PropertyInfo = 
{
	&t2050_TI, "StandardSafeFallback", &m10832_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2050_PIs[] =
{
	&t2050____ExceptionFallback_PropertyInfo,
	&t2050____ReplacementFallback_PropertyInfo,
	&t2050____StandardSafeFallback_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2050_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
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
extern Il2CppType t2050_1_0_0;
struct t2050;
const Il2CppTypeDefinitionMetadata t2050_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2050_VT, t2050_VTIGM, NULL};
TypeInfo t2050_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderFallback", "System.Text", t2050_MIs, t2050_PIs, t2050_FIs, NULL, &t2050_TI, NULL, &EmptyCustomAttributesCache, &t2050_0_0_0, &t2050_1_0_0, &t2050_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2050), sizeof (t2050), 0, -1, sizeof(t2050_SFs), 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, true, false, 6, 3, 3, 0, 0, 5, 0, 0};
#include "t2049.h"
// Metadata Definition System.Text.DecoderFallbackBuffer
extern TypeInfo t2049_TI;
#include "t2049MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10833_MI = 
{
	".ctor", (methodPointerType)&m10833, &t2049_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4861, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12156_MI = 
{
	"get_Remaining", NULL, &t2049_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 4, 0, false, false, 4862, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2049_m12154_ParameterInfos[] = 
{
	{"bytesUnknown", 0, 134223570, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"index", 1, 134223571, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12154_MI = 
{
	"Fallback", NULL, &t2049_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t125, t2049_m12154_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, false, 4863, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t309 (MethodInfo* method, void* obj, void** args);
MethodInfo m12155_MI = 
{
	"GetNextChar", NULL, &t2049_TI, &t309_0_0_0, RuntimeInvoker_t309, NULL, &EmptyCustomAttributesCache, 1478, 0, 6, 0, false, false, 4864, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10834_MI = 
{
	"Reset", (methodPointerType)&m10834, &t2049_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 4865, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2049_MIs[] =
{
	&m10833_MI,
	&m12156_MI,
	&m12154_MI,
	&m12155_MI,
	&m10834_MI,
	NULL
};
extern MethodInfo m12156_MI;
static PropertyInfo t2049____Remaining_PropertyInfo = 
{
	&t2049_TI, "Remaining", &m12156_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2049_PIs[] =
{
	&t2049____Remaining_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2049_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
	&m10834_MI,
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
struct t2049;
const Il2CppTypeDefinitionMetadata t2049_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2049_VT, t2049_VTIGM, NULL};
TypeInfo t2049_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderFallbackBuffer", "System.Text", t2049_MIs, t2049_PIs, NULL, NULL, &t2049_TI, NULL, &EmptyCustomAttributesCache, &t2049_0_0_0, &t2049_1_0_0, &t2049_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2049), sizeof (t2049), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 8, 0, 0};
#include "t2053.h"
// Metadata Definition System.Text.DecoderFallbackException
extern TypeInfo t2053_TI;
#include "t2053MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10835_MI = 
{
	".ctor", (methodPointerType)&m10835, &t2053_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4866, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2053_m10836_ParameterInfos[] = 
{
	{"message", 0, 134223572, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10836_MI = 
{
	".ctor", (methodPointerType)&m10836, &t2053_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2053_m10836_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4867, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2053_m10837_ParameterInfos[] = 
{
	{"message", 0, 134223573, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bytesUnknown", 1, 134223574, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"index", 2, 134223575, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10837_MI = 
{
	".ctor", (methodPointerType)&m10837, &t2053_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t2053_m10837_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4868, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2053_MIs[] =
{
	&m10835_MI,
	&m10836_MI,
	&m10837_MI,
	NULL
};
extern Il2CppType t737_0_0_1;
FieldInfo t2053_f13_FieldInfo = 
{
	"bytes_unknown", &t737_0_0_1, &t2053_TI, offsetof(t2053, f13), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2053_f14_FieldInfo = 
{
	"index", &t125_0_0_1, &t2053_TI, offsetof(t2053, f14), &EmptyCustomAttributesCache};
static FieldInfo* t2053_FIs[] =
{
	&t2053_f13_FieldInfo,
	&t2053_f14_FieldInfo,
	NULL
};
extern MethodInfo m4538_MI;
extern MethodInfo m11184_MI;
extern MethodInfo m11183_MI;
extern MethodInfo m11182_MI;
static Il2CppMethodReference t2053_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4538_MI,
	&m11184_MI,
	&m4285_MI,
	&m11183_MI,
	&m4540_MI,
	&m4483_MI,
	&m11184_MI,
	&m4484_MI,
	&m11182_MI,
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
	{ &t630_0_0_0, 4},
	{ &t954_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2053_0_0_0;
extern Il2CppType t2053_1_0_0;
extern Il2CppType t570_0_0_0;
struct t2053;
const Il2CppTypeDefinitionMetadata t2053_DM = 
{
	NULL, NULL, NULL, t2053_IOs, &t570_0_0_0, t2053_VT, t2053_VTIGM, NULL};
TypeInfo t2053_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderFallbackException", "System.Text", t2053_MIs, NULL, t2053_FIs, NULL, &t2053_TI, NULL, &EmptyCustomAttributesCache, &t2053_0_0_0, &t2053_1_0_0, &t2053_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2053), sizeof (t2053), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 2, 0, 0, 12, 0, 2};
#include "t2054.h"
// Metadata Definition System.Text.DecoderReplacementFallback
extern TypeInfo t2054_TI;
#include "t2054MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10838_MI = 
{
	".ctor", (methodPointerType)&m10838, &t2054_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4869, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2054_m10839_ParameterInfos[] = 
{
	{"replacement", 0, 134223576, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2054__CustomAttributeCache_m10839;
MethodInfo m10839_MI = 
{
	".ctor", (methodPointerType)&m10839, &t2054_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2054_m10839_ParameterInfos, &t2054__CustomAttributeCache_m10839, 6278, 0, 255, 1, false, false, 4870, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10840_MI = 
{
	"get_DefaultString", (methodPointerType)&m10840, &t2054_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4871, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2049_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10841_MI = 
{
	"CreateFallbackBuffer", (methodPointerType)&m10841, &t2054_TI, &t2049_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 4, 0, false, false, 4872, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2054_m10842_ParameterInfos[] = 
{
	{"value", 0, 134223577, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10842_MI = 
{
	"Equals", (methodPointerType)&m10842, &t2054_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2054_m10842_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4873, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10843_MI = 
{
	"GetHashCode", (methodPointerType)&m10843, &t2054_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4874, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2054_MIs[] =
{
	&m10838_MI,
	&m10839_MI,
	&m10840_MI,
	&m10841_MI,
	&m10842_MI,
	&m10843_MI,
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
extern MethodInfo m10840_MI;
static PropertyInfo t2054____DefaultString_PropertyInfo = 
{
	&t2054_TI, "DefaultString", &m10840_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2054_PIs[] =
{
	&t2054____DefaultString_PropertyInfo,
	NULL
};
extern MethodInfo m10842_MI;
extern MethodInfo m10843_MI;
extern MethodInfo m10841_MI;
static Il2CppMethodReference t2054_VT[] =
{
	&m10842_MI,
	&m646_MI,
	&m10843_MI,
	&m673_MI,
	&m10841_MI,
};
static bool t2054_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern MethodInfo m7890_MI;
void t2054_CustomAttributesCacheGenerator_m10839(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7890(tmp, &m7890_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2054__CustomAttributeCache_m10839 = {
1,
NULL,
&t2054_CustomAttributesCacheGenerator_m10839
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2054_0_0_0;
extern Il2CppType t2054_1_0_0;
struct t2054;
extern CustomAttributesCache t2054__CustomAttributeCache_m10839;
const Il2CppTypeDefinitionMetadata t2054_DM = 
{
	NULL, NULL, NULL, NULL, &t2050_0_0_0, t2054_VT, t2054_VTIGM, NULL};
TypeInfo t2054_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderReplacementFallback", "System.Text", t2054_MIs, t2054_PIs, t2054_FIs, NULL, &t2054_TI, NULL, &EmptyCustomAttributesCache, &t2054_0_0_0, &t2054_1_0_0, &t2054_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2054), sizeof (t2054), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 1, 0, 0, 5, 0, 0};
#include "t2055.h"
// Metadata Definition System.Text.DecoderReplacementFallbackBuffer
extern TypeInfo t2055_TI;
#include "t2055MD.h"
extern Il2CppType t2054_0_0_0;
static ParameterInfo t2055_m10844_ParameterInfos[] = 
{
	{"fallback", 0, 134223578, &EmptyCustomAttributesCache, &t2054_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10844_MI = 
{
	".ctor", (methodPointerType)&m10844, &t2055_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2055_m10844_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4875, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10845_MI = 
{
	"get_Remaining", (methodPointerType)&m10845, &t2055_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 4876, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2055_m10846_ParameterInfos[] = 
{
	{"bytesUnknown", 0, 134223579, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"index", 1, 134223580, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10846_MI = 
{
	"Fallback", (methodPointerType)&m10846, &t2055_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t125, t2055_m10846_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 4877, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t309 (MethodInfo* method, void* obj, void** args);
MethodInfo m10847_MI = 
{
	"GetNextChar", (methodPointerType)&m10847, &t2055_TI, &t309_0_0_0, RuntimeInvoker_t309, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 4878, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10848_MI = 
{
	"Reset", (methodPointerType)&m10848, &t2055_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 4879, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2055_MIs[] =
{
	&m10844_MI,
	&m10845_MI,
	&m10846_MI,
	&m10847_MI,
	&m10848_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t2055_f0_FieldInfo = 
{
	"fallback_assigned", &t124_0_0_1, &t2055_TI, offsetof(t2055, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2055_f1_FieldInfo = 
{
	"current", &t125_0_0_1, &t2055_TI, offsetof(t2055, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t2055_f2_FieldInfo = 
{
	"replacement", &t2_0_0_1, &t2055_TI, offsetof(t2055, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2055_FIs[] =
{
	&t2055_f0_FieldInfo,
	&t2055_f1_FieldInfo,
	&t2055_f2_FieldInfo,
	NULL
};
extern MethodInfo m10845_MI;
static PropertyInfo t2055____Remaining_PropertyInfo = 
{
	&t2055_TI, "Remaining", &m10845_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2055_PIs[] =
{
	&t2055____Remaining_PropertyInfo,
	NULL
};
extern MethodInfo m10846_MI;
extern MethodInfo m10847_MI;
extern MethodInfo m10848_MI;
static Il2CppMethodReference t2055_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10845_MI,
	&m10846_MI,
	&m10847_MI,
	&m10848_MI,
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
	NULL, NULL, NULL, NULL, &t2049_0_0_0, t2055_VT, t2055_VTIGM, NULL};
TypeInfo t2055_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DecoderReplacementFallbackBuffer", "System.Text", t2055_MIs, t2055_PIs, t2055_FIs, NULL, &t2055_TI, NULL, &EmptyCustomAttributesCache, &t2055_0_0_0, &t2055_1_0_0, &t2055_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2055), sizeof (t2055), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 1, 3, 0, 0, 8, 0, 0};
#include "t2056.h"
// Metadata Definition System.Text.EncoderExceptionFallback
extern TypeInfo t2056_TI;
#include "t2056MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10849_MI = 
{
	".ctor", (methodPointerType)&m10849, &t2056_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4880, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2048_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10850_MI = 
{
	"CreateFallbackBuffer", (methodPointerType)&m10850, &t2056_TI, &t2048_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 4, 0, false, false, 4881, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2056_m10851_ParameterInfos[] = 
{
	{"value", 0, 134223581, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10851_MI = 
{
	"Equals", (methodPointerType)&m10851, &t2056_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2056_m10851_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4882, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10852_MI = 
{
	"GetHashCode", (methodPointerType)&m10852, &t2056_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4883, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2056_MIs[] =
{
	&m10849_MI,
	&m10850_MI,
	&m10851_MI,
	&m10852_MI,
	NULL
};
extern MethodInfo m10851_MI;
extern MethodInfo m10852_MI;
extern MethodInfo m10850_MI;
static Il2CppMethodReference t2056_VT[] =
{
	&m10851_MI,
	&m646_MI,
	&m10852_MI,
	&m673_MI,
	&m10850_MI,
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
extern Il2CppType t2057_0_0_0;
struct t2056;
const Il2CppTypeDefinitionMetadata t2056_DM = 
{
	NULL, NULL, NULL, NULL, &t2057_0_0_0, t2056_VT, t2056_VTIGM, NULL};
TypeInfo t2056_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderExceptionFallback", "System.Text", t2056_MIs, NULL, NULL, NULL, &t2056_TI, NULL, &EmptyCustomAttributesCache, &t2056_0_0_0, &t2056_1_0_0, &t2056_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2056), sizeof (t2056), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 5, 0, 0};
#include "t2058.h"
// Metadata Definition System.Text.EncoderExceptionFallbackBuffer
extern TypeInfo t2058_TI;
#include "t2058MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10853_MI = 
{
	".ctor", (methodPointerType)&m10853, &t2058_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4884, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10854_MI = 
{
	"get_Remaining", (methodPointerType)&m10854, &t2058_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 4885, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t309_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2058_m10855_ParameterInfos[] = 
{
	{"charUnknown", 0, 134223582, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"index", 1, 134223583, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t341_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10855_MI = 
{
	"Fallback", (methodPointerType)&m10855, &t2058_TI, &t124_0_0_0, RuntimeInvoker_t124_t341_t125, t2058_m10855_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 4886, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t309_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2058_m10856_ParameterInfos[] = 
{
	{"charUnknownHigh", 0, 134223584, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"charUnknownLow", 1, 134223585, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"index", 2, 134223586, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t341_t341_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10856_MI = 
{
	"Fallback", (methodPointerType)&m10856, &t2058_TI, &t124_0_0_0, RuntimeInvoker_t124_t341_t341_t125, t2058_m10856_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 3, false, false, 4887, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t309 (MethodInfo* method, void* obj, void** args);
MethodInfo m10857_MI = 
{
	"GetNextChar", (methodPointerType)&m10857, &t2058_TI, &t309_0_0_0, RuntimeInvoker_t309, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 4888, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2058_MIs[] =
{
	&m10853_MI,
	&m10854_MI,
	&m10855_MI,
	&m10856_MI,
	&m10857_MI,
	NULL
};
extern MethodInfo m10854_MI;
static PropertyInfo t2058____Remaining_PropertyInfo = 
{
	&t2058_TI, "Remaining", &m10854_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2058_PIs[] =
{
	&t2058____Remaining_PropertyInfo,
	NULL
};
extern MethodInfo m10855_MI;
extern MethodInfo m10856_MI;
extern MethodInfo m10857_MI;
static Il2CppMethodReference t2058_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10854_MI,
	&m10855_MI,
	&m10856_MI,
	&m10857_MI,
};
static bool t2058_VTIGM[] =
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
extern Il2CppType t2058_0_0_0;
extern Il2CppType t2058_1_0_0;
extern Il2CppType t2048_0_0_0;
struct t2058;
const Il2CppTypeDefinitionMetadata t2058_DM = 
{
	NULL, NULL, NULL, NULL, &t2048_0_0_0, t2058_VT, t2058_VTIGM, NULL};
TypeInfo t2058_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderExceptionFallbackBuffer", "System.Text", t2058_MIs, t2058_PIs, NULL, NULL, &t2058_TI, NULL, &EmptyCustomAttributesCache, &t2058_0_0_0, &t2058_1_0_0, &t2058_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2058), sizeof (t2058), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 8, 0, 0};
#include "t2057.h"
// Metadata Definition System.Text.EncoderFallback
extern TypeInfo t2057_TI;
#include "t2057MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10858_MI = 
{
	".ctor", (methodPointerType)&m10858, &t2057_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4889, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10859_MI = 
{
	".cctor", (methodPointerType)&m10859, &t2057_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4890, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2057_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10860_MI = 
{
	"get_ExceptionFallback", (methodPointerType)&m10860, &t2057_TI, &t2057_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4891, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2057_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10861_MI = 
{
	"get_ReplacementFallback", (methodPointerType)&m10861, &t2057_TI, &t2057_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4892, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2057_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10862_MI = 
{
	"get_StandardSafeFallback", (methodPointerType)&m10862, &t2057_TI, &t2057_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 4893, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2048_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12148_MI = 
{
	"CreateFallbackBuffer", NULL, &t2057_TI, &t2048_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 1478, 0, 4, 0, false, false, 4894, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2057_MIs[] =
{
	&m10858_MI,
	&m10859_MI,
	&m10860_MI,
	&m10861_MI,
	&m10862_MI,
	&m12148_MI,
	NULL
};
extern Il2CppType t2057_0_0_17;
FieldInfo t2057_f0_FieldInfo = 
{
	"exception_fallback", &t2057_0_0_17, &t2057_TI, offsetof(t2057_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2057_0_0_17;
FieldInfo t2057_f1_FieldInfo = 
{
	"replacement_fallback", &t2057_0_0_17, &t2057_TI, offsetof(t2057_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2057_0_0_17;
FieldInfo t2057_f2_FieldInfo = 
{
	"standard_safe_fallback", &t2057_0_0_17, &t2057_TI, offsetof(t2057_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2057_FIs[] =
{
	&t2057_f0_FieldInfo,
	&t2057_f1_FieldInfo,
	&t2057_f2_FieldInfo,
	NULL
};
extern MethodInfo m10860_MI;
static PropertyInfo t2057____ExceptionFallback_PropertyInfo = 
{
	&t2057_TI, "ExceptionFallback", &m10860_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10861_MI;
static PropertyInfo t2057____ReplacementFallback_PropertyInfo = 
{
	&t2057_TI, "ReplacementFallback", &m10861_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10862_MI;
static PropertyInfo t2057____StandardSafeFallback_PropertyInfo = 
{
	&t2057_TI, "StandardSafeFallback", &m10862_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2057_PIs[] =
{
	&t2057____ExceptionFallback_PropertyInfo,
	&t2057____ReplacementFallback_PropertyInfo,
	&t2057____StandardSafeFallback_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2057_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t2057_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2057_1_0_0;
struct t2057;
const Il2CppTypeDefinitionMetadata t2057_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2057_VT, t2057_VTIGM, NULL};
TypeInfo t2057_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderFallback", "System.Text", t2057_MIs, t2057_PIs, t2057_FIs, NULL, &t2057_TI, NULL, &EmptyCustomAttributesCache, &t2057_0_0_0, &t2057_1_0_0, &t2057_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2057), sizeof (t2057), 0, -1, sizeof(t2057_SFs), 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, true, false, 6, 3, 3, 0, 0, 5, 0, 0};
#include "t2048.h"
// Metadata Definition System.Text.EncoderFallbackBuffer
extern TypeInfo t2048_TI;
#include "t2048MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10863_MI = 
{
	".ctor", (methodPointerType)&m10863, &t2048_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4895, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12151_MI = 
{
	"get_Remaining", NULL, &t2048_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 4, 0, false, false, 4896, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2048_m12150_ParameterInfos[] = 
{
	{"charUnknown", 0, 134223587, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"index", 1, 134223588, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t341_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12150_MI = 
{
	"Fallback", NULL, &t2048_TI, &t124_0_0_0, RuntimeInvoker_t124_t341_t125, t2048_m12150_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, false, 4897, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t309_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2048_m12149_ParameterInfos[] = 
{
	{"charUnknownHigh", 0, 134223589, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"charUnknownLow", 1, 134223590, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"index", 2, 134223591, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t341_t341_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12149_MI = 
{
	"Fallback", NULL, &t2048_TI, &t124_0_0_0, RuntimeInvoker_t124_t341_t341_t125, t2048_m12149_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 3, false, false, 4898, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t309 (MethodInfo* method, void* obj, void** args);
MethodInfo m12152_MI = 
{
	"GetNextChar", NULL, &t2048_TI, &t309_0_0_0, RuntimeInvoker_t309, NULL, &EmptyCustomAttributesCache, 1478, 0, 7, 0, false, false, 4899, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2048_MIs[] =
{
	&m10863_MI,
	&m12151_MI,
	&m12150_MI,
	&m12149_MI,
	&m12152_MI,
	NULL
};
extern MethodInfo m12151_MI;
static PropertyInfo t2048____Remaining_PropertyInfo = 
{
	&t2048_TI, "Remaining", &m12151_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2048_PIs[] =
{
	&t2048____Remaining_PropertyInfo,
	NULL
};
static Il2CppMethodReference t2048_VT[] =
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
};
extern Il2CppImage g_mscorlib_dll_Image;
struct t2048;
const Il2CppTypeDefinitionMetadata t2048_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t2048_VT, t2048_VTIGM, NULL};
TypeInfo t2048_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderFallbackBuffer", "System.Text", t2048_MIs, t2048_PIs, NULL, NULL, &t2048_TI, NULL, &EmptyCustomAttributesCache, &t2048_0_0_0, &t2048_1_0_0, &t2048_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2048), sizeof (t2048), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 8, 0, 0};
#include "t2059.h"
// Metadata Definition System.Text.EncoderFallbackException
extern TypeInfo t2059_TI;
#include "t2059MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10864_MI = 
{
	".ctor", (methodPointerType)&m10864, &t2059_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4900, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2059_m10865_ParameterInfos[] = 
{
	{"message", 0, 134223592, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10865_MI = 
{
	".ctor", (methodPointerType)&m10865, &t2059_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2059_m10865_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4901, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2059_m10866_ParameterInfos[] = 
{
	{"charUnknown", 0, 134223593, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"index", 1, 134223594, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t341_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10866_MI = 
{
	".ctor", (methodPointerType)&m10866, &t2059_TI, &t122_0_0_0, RuntimeInvoker_t122_t341_t125, t2059_m10866_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 4902, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t309_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2059_m10867_ParameterInfos[] = 
{
	{"charUnknownHigh", 0, 134223595, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"charUnknownLow", 1, 134223596, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"index", 2, 134223597, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t341_t341_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10867_MI = 
{
	".ctor", (methodPointerType)&m10867, &t2059_TI, &t122_0_0_0, RuntimeInvoker_t122_t341_t341_t125, t2059_m10867_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 3, false, false, 4903, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2059_MIs[] =
{
	&m10864_MI,
	&m10865_MI,
	&m10866_MI,
	&m10867_MI,
	NULL
};
extern Il2CppType t309_0_0_1;
FieldInfo t2059_f13_FieldInfo = 
{
	"char_unknown", &t309_0_0_1, &t2059_TI, offsetof(t2059, f13), &EmptyCustomAttributesCache};
extern Il2CppType t309_0_0_1;
FieldInfo t2059_f14_FieldInfo = 
{
	"char_unknown_high", &t309_0_0_1, &t2059_TI, offsetof(t2059, f14), &EmptyCustomAttributesCache};
extern Il2CppType t309_0_0_1;
FieldInfo t2059_f15_FieldInfo = 
{
	"char_unknown_low", &t309_0_0_1, &t2059_TI, offsetof(t2059, f15), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2059_f16_FieldInfo = 
{
	"index", &t125_0_0_1, &t2059_TI, offsetof(t2059, f16), &EmptyCustomAttributesCache};
static FieldInfo* t2059_FIs[] =
{
	&t2059_f13_FieldInfo,
	&t2059_f14_FieldInfo,
	&t2059_f15_FieldInfo,
	&t2059_f16_FieldInfo,
	NULL
};
static Il2CppMethodReference t2059_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4538_MI,
	&m11184_MI,
	&m4285_MI,
	&m11183_MI,
	&m4540_MI,
	&m4483_MI,
	&m11184_MI,
	&m4484_MI,
	&m11182_MI,
};
static bool t2059_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2059_IOs[] = 
{
	{ &t630_0_0_0, 4},
	{ &t954_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2059_0_0_0;
extern Il2CppType t2059_1_0_0;
struct t2059;
const Il2CppTypeDefinitionMetadata t2059_DM = 
{
	NULL, NULL, NULL, t2059_IOs, &t570_0_0_0, t2059_VT, t2059_VTIGM, NULL};
TypeInfo t2059_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderFallbackException", "System.Text", t2059_MIs, NULL, t2059_FIs, NULL, &t2059_TI, NULL, &EmptyCustomAttributesCache, &t2059_0_0_0, &t2059_1_0_0, &t2059_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2059), sizeof (t2059), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 4, 0, 0, 12, 0, 2};
#include "t2060.h"
// Metadata Definition System.Text.EncoderReplacementFallback
extern TypeInfo t2060_TI;
#include "t2060MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10868_MI = 
{
	".ctor", (methodPointerType)&m10868, &t2060_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4904, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2060_m10869_ParameterInfos[] = 
{
	{"replacement", 0, 134223598, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t2060__CustomAttributeCache_m10869;
MethodInfo m10869_MI = 
{
	".ctor", (methodPointerType)&m10869, &t2060_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2060_m10869_ParameterInfos, &t2060__CustomAttributeCache_m10869, 6278, 0, 255, 1, false, false, 4905, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10870_MI = 
{
	"get_DefaultString", (methodPointerType)&m10870, &t2060_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4906, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2048_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10871_MI = 
{
	"CreateFallbackBuffer", (methodPointerType)&m10871, &t2060_TI, &t2048_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 4, 0, false, false, 4907, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2060_m10872_ParameterInfos[] = 
{
	{"value", 0, 134223599, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10872_MI = 
{
	"Equals", (methodPointerType)&m10872, &t2060_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t2060_m10872_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4908, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10873_MI = 
{
	"GetHashCode", (methodPointerType)&m10873, &t2060_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4909, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2060_MIs[] =
{
	&m10868_MI,
	&m10869_MI,
	&m10870_MI,
	&m10871_MI,
	&m10872_MI,
	&m10873_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2060_f3_FieldInfo = 
{
	"replacement", &t2_0_0_1, &t2060_TI, offsetof(t2060, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2060_FIs[] =
{
	&t2060_f3_FieldInfo,
	NULL
};
extern MethodInfo m10870_MI;
static PropertyInfo t2060____DefaultString_PropertyInfo = 
{
	&t2060_TI, "DefaultString", &m10870_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2060_PIs[] =
{
	&t2060____DefaultString_PropertyInfo,
	NULL
};
extern MethodInfo m10872_MI;
extern MethodInfo m10873_MI;
extern MethodInfo m10871_MI;
static Il2CppMethodReference t2060_VT[] =
{
	&m10872_MI,
	&m646_MI,
	&m10873_MI,
	&m673_MI,
	&m10871_MI,
};
static bool t2060_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
void t2060_CustomAttributesCacheGenerator_m10869(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7890(tmp, &m7890_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2060__CustomAttributeCache_m10869 = {
1,
NULL,
&t2060_CustomAttributesCacheGenerator_m10869
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2060_0_0_0;
extern Il2CppType t2060_1_0_0;
struct t2060;
extern CustomAttributesCache t2060__CustomAttributeCache_m10869;
const Il2CppTypeDefinitionMetadata t2060_DM = 
{
	NULL, NULL, NULL, NULL, &t2057_0_0_0, t2060_VT, t2060_VTIGM, NULL};
TypeInfo t2060_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderReplacementFallback", "System.Text", t2060_MIs, t2060_PIs, t2060_FIs, NULL, &t2060_TI, NULL, &EmptyCustomAttributesCache, &t2060_0_0_0, &t2060_1_0_0, &t2060_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2060), sizeof (t2060), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 1, 0, 0, 5, 0, 0};
#include "t2061.h"
// Metadata Definition System.Text.EncoderReplacementFallbackBuffer
extern TypeInfo t2061_TI;
#include "t2061MD.h"
extern Il2CppType t2060_0_0_0;
static ParameterInfo t2061_m10874_ParameterInfos[] = 
{
	{"fallback", 0, 134223600, &EmptyCustomAttributesCache, &t2060_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10874_MI = 
{
	".ctor", (methodPointerType)&m10874, &t2061_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2061_m10874_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4910, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10875_MI = 
{
	"get_Remaining", (methodPointerType)&m10875, &t2061_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 4911, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2061_m10876_ParameterInfos[] = 
{
	{"charUnknown", 0, 134223601, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"index", 1, 134223602, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t341_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10876_MI = 
{
	"Fallback", (methodPointerType)&m10876, &t2061_TI, &t124_0_0_0, RuntimeInvoker_t124_t341_t125, t2061_m10876_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 4912, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t309_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2061_m10877_ParameterInfos[] = 
{
	{"charUnknownHigh", 0, 134223603, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"charUnknownLow", 1, 134223604, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"index", 2, 134223605, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t341_t341_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10877_MI = 
{
	"Fallback", (methodPointerType)&m10877, &t2061_TI, &t124_0_0_0, RuntimeInvoker_t124_t341_t341_t125, t2061_m10877_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 3, false, false, 4913, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2061_m10878_ParameterInfos[] = 
{
	{"index", 0, 134223606, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10878_MI = 
{
	"Fallback", (methodPointerType)&m10878, &t2061_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t2061_m10878_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4914, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t309 (MethodInfo* method, void* obj, void** args);
MethodInfo m10879_MI = 
{
	"GetNextChar", (methodPointerType)&m10879, &t2061_TI, &t309_0_0_0, RuntimeInvoker_t309, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 4915, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2061_MIs[] =
{
	&m10874_MI,
	&m10875_MI,
	&m10876_MI,
	&m10877_MI,
	&m10878_MI,
	&m10879_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t2061_f0_FieldInfo = 
{
	"replacement", &t2_0_0_1, &t2061_TI, offsetof(t2061, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t2061_f1_FieldInfo = 
{
	"current", &t125_0_0_1, &t2061_TI, offsetof(t2061, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t2061_f2_FieldInfo = 
{
	"fallback_assigned", &t124_0_0_1, &t2061_TI, offsetof(t2061, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2061_FIs[] =
{
	&t2061_f0_FieldInfo,
	&t2061_f1_FieldInfo,
	&t2061_f2_FieldInfo,
	NULL
};
extern MethodInfo m10875_MI;
static PropertyInfo t2061____Remaining_PropertyInfo = 
{
	&t2061_TI, "Remaining", &m10875_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2061_PIs[] =
{
	&t2061____Remaining_PropertyInfo,
	NULL
};
extern MethodInfo m10876_MI;
extern MethodInfo m10877_MI;
extern MethodInfo m10879_MI;
static Il2CppMethodReference t2061_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10875_MI,
	&m10876_MI,
	&m10877_MI,
	&m10879_MI,
};
static bool t2061_VTIGM[] =
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
extern Il2CppType t2061_0_0_0;
extern Il2CppType t2061_1_0_0;
struct t2061;
const Il2CppTypeDefinitionMetadata t2061_DM = 
{
	NULL, NULL, NULL, NULL, &t2048_0_0_0, t2061_VT, t2061_VTIGM, NULL};
TypeInfo t2061_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EncoderReplacementFallbackBuffer", "System.Text", t2061_MIs, t2061_PIs, t2061_FIs, NULL, &t2061_TI, NULL, &EmptyCustomAttributesCache, &t2061_0_0_0, &t2061_1_0_0, &t2061_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2061), sizeof (t2061), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 3, 0, 0, 8, 0, 0};
#include "t2062.h"
// Metadata Definition System.Text.Encoding/ForwardingDecoder
extern TypeInfo t2062_TI;
#include "t2062MD.h"
extern Il2CppType t736_0_0_0;
static ParameterInfo t2062_m10880_ParameterInfos[] = 
{
	{"enc", 0, 134223661, &EmptyCustomAttributesCache, &t736_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10880_MI = 
{
	".ctor", (methodPointerType)&m10880, &t2062_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2062_m10880_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4963, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2062_m10881_ParameterInfos[] = 
{
	{"bytes", 0, 134223662, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 1, 134223663, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223664, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223665, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"charIndex", 4, 134223666, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10881_MI = 
{
	"GetChars", (methodPointerType)&m10881, &t2062_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2062_m10881_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 5, false, false, 4964, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2062_MIs[] =
{
	&m10880_MI,
	&m10881_MI,
	NULL
};
extern Il2CppType t736_0_0_1;
FieldInfo t2062_f2_FieldInfo = 
{
	"encoding", &t736_0_0_1, &t2062_TI, offsetof(t2062, f2), &EmptyCustomAttributesCache};
static FieldInfo* t2062_FIs[] =
{
	&t2062_f2_FieldInfo,
	NULL
};
extern MethodInfo m10881_MI;
static Il2CppMethodReference t2062_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10881_MI,
};
static bool t2062_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2062_0_0_0;
extern Il2CppType t2062_1_0_0;
extern TypeInfo t736_TI;
struct t2062;
const Il2CppTypeDefinitionMetadata t2062_DM = 
{
	&t736_0_0_0, NULL, NULL, NULL, &t1719_0_0_0, t2062_VT, t2062_VTIGM, NULL};
TypeInfo t2062_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ForwardingDecoder", "", t2062_MIs, NULL, t2062_FIs, NULL, &t2062_TI, NULL, &EmptyCustomAttributesCache, &t2062_0_0_0, &t2062_1_0_0, &t2062_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2062), sizeof (t2062), 0, -1, 0, 0, -1, 1048835, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#include "t736.h"
// Metadata Definition System.Text.Encoding
#include "t736MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10882_MI = 
{
	".ctor", (methodPointerType)&m10882, &t736_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4916, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t736_m10883_ParameterInfos[] = 
{
	{"codePage", 0, 134223607, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10883_MI = 
{
	".ctor", (methodPointerType)&m10883, &t736_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t736_m10883_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 1, false, false, 4917, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10884_MI = 
{
	".cctor", (methodPointerType)&m10884, &t736_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4918, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t736_m10885_ParameterInfos[] = 
{
	{"arg", 0, 134223608, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10885_MI = 
{
	"_", (methodPointerType)&m10885, &t736_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t736_m10885_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 4919, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10886_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m10886, &t736_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4920, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2050_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10887_MI = 
{
	"get_DecoderFallback", (methodPointerType)&m10887, &t736_TI, &t2050_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4921, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2050_0_0_0;
static ParameterInfo t736_m10888_ParameterInfos[] = 
{
	{"value", 0, 134223609, &EmptyCustomAttributesCache, &t2050_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10888_MI = 
{
	"set_DecoderFallback", (methodPointerType)&m10888, &t736_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t736_m10888_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4922, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2057_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10889_MI = 
{
	"get_EncoderFallback", (methodPointerType)&m10889, &t736_TI, &t2057_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4923, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2057_0_0_0;
extern Il2CppType t2050_0_0_0;
static ParameterInfo t736_m10890_ParameterInfos[] = 
{
	{"e", 0, 134223610, &EmptyCustomAttributesCache, &t2057_0_0_0},
	{"d", 1, 134223611, &EmptyCustomAttributesCache, &t2050_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10890_MI = 
{
	"SetFallbackInternal", (methodPointerType)&m10890, &t736_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t736_m10890_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 2, false, false, 4924, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t736_m10891_ParameterInfos[] = 
{
	{"value", 0, 134223612, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10891_MI = 
{
	"Equals", (methodPointerType)&m10891, &t736_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t736_m10891_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4925, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t736_m12157_ParameterInfos[] = 
{
	{"chars", 0, 134223613, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"index", 1, 134223614, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223615, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12157_MI = 
{
	"GetByteCount", NULL, &t736_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t736_m12157_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 3, false, false, 4926, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t736_m10892_ParameterInfos[] = 
{
	{"s", 0, 134223616, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10892_MI = 
{
	"GetByteCount", (methodPointerType)&m10892, &t736_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t736_m10892_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 1, false, false, 4927, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
static ParameterInfo t736_m10893_ParameterInfos[] = 
{
	{"chars", 0, 134223617, &EmptyCustomAttributesCache, &t318_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10893_MI = 
{
	"GetByteCount", (methodPointerType)&m10893, &t736_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t736_m10893_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 1, false, false, 4928, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t736_m12050_ParameterInfos[] = 
{
	{"chars", 0, 134223618, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"charIndex", 1, 134223619, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223620, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223621, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 4, 134223622, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12050_MI = 
{
	"GetBytes", NULL, &t736_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t736_m12050_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 7, 5, false, false, 4929, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t736_m6961_ParameterInfos[] = 
{
	{"s", 0, 134223623, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"charIndex", 1, 134223624, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223625, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223626, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 4, 134223627, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6961_MI = 
{
	"GetBytes", (methodPointerType)&m6961, &t736_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t736_m6961_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 5, false, false, 4930, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t736_m4330_ParameterInfos[] = 
{
	{"s", 0, 134223628, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4330_MI = 
{
	"GetBytes", (methodPointerType)&m4330, &t736_TI, &t737_0_0_0, RuntimeInvoker_t9_t9, t736_m4330_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 1, false, false, 4931, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t736_m10894_ParameterInfos[] = 
{
	{"chars", 0, 134223629, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"index", 1, 134223630, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223631, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10894_MI = 
{
	"GetBytes", (methodPointerType)&m10894, &t736_TI, &t737_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t736_m10894_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 3, false, false, 4932, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
static ParameterInfo t736_m6027_ParameterInfos[] = 
{
	{"chars", 0, 134223632, &EmptyCustomAttributesCache, &t318_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6027_MI = 
{
	"GetBytes", (methodPointerType)&m6027, &t736_TI, &t737_0_0_0, RuntimeInvoker_t9_t9, t736_m6027_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 1, false, false, 4933, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t736_m12158_ParameterInfos[] = 
{
	{"bytes", 0, 134223633, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"index", 1, 134223634, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223635, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12158_MI = 
{
	"GetCharCount", NULL, &t736_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t736_m12158_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 12, 3, false, false, 4934, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t736_m12045_ParameterInfos[] = 
{
	{"bytes", 0, 134223636, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 1, 134223637, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223638, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223639, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"charIndex", 4, 134223640, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12045_MI = 
{
	"GetChars", NULL, &t736_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t736_m12045_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 13, 5, false, false, 4935, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t736_m10895_ParameterInfos[] = 
{
	{"bytes", 0, 134223641, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"index", 1, 134223642, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223643, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t318_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10895_MI = 
{
	"GetChars", (methodPointerType)&m10895, &t736_TI, &t318_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t736_m10895_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 3, false, false, 4936, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1719_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10896_MI = 
{
	"GetDecoder", (methodPointerType)&m10896, &t736_TI, &t1719_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 15, 0, false, false, 4937, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t158_0_0_0;
extern CustomAttributesCache t736__CustomAttributeCache_t736_m10897_Arg1_ParameterInfo;
static ParameterInfo t736_m10897_ParameterInfos[] = 
{
	{"name", 0, 134223644, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"args", 1, 134223645, &t736__CustomAttributeCache_t736_m10897_Arg1_ParameterInfo, &t158_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10897_MI = 
{
	"InvokeI18N", (methodPointerType)&m10897, &t736_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t736_m10897_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 4938, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t736_m10898_ParameterInfos[] = 
{
	{"codepage", 0, 134223646, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t736_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10898_MI = 
{
	"GetEncoding", (methodPointerType)&m10898, &t736_TI, &t736_0_0_0, RuntimeInvoker_t9_t125, t736_m10898_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4939, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t736_m4314_ParameterInfos[] = 
{
	{"name", 0, 134223647, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t736_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4314_MI = 
{
	"GetEncoding", (methodPointerType)&m4314, &t736_TI, &t736_0_0_0, RuntimeInvoker_t9_t9, t736_m4314_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4940, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10899_MI = 
{
	"GetHashCode", (methodPointerType)&m10899, &t736_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4941, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t736_m12047_ParameterInfos[] = 
{
	{"charCount", 0, 134223648, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12047_MI = 
{
	"GetMaxByteCount", NULL, &t736_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t736_m12047_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 16, 1, false, false, 4942, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t736_m12048_ParameterInfos[] = 
{
	{"byteCount", 0, 134223649, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12048_MI = 
{
	"GetMaxCharCount", NULL, &t736_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t736_m12048_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 17, 1, false, false, 4943, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10900_MI = 
{
	"GetPreamble", (methodPointerType)&m10900, &t736_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 18, 0, false, false, 4944, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t736_m4307_ParameterInfos[] = 
{
	{"bytes", 0, 134223650, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"index", 1, 134223651, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223652, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4307_MI = 
{
	"GetString", (methodPointerType)&m4307, &t736_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t736_m4307_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 19, 3, false, false, 4945, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t736_m5870_ParameterInfos[] = 
{
	{"bytes", 0, 134223653, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5870_MI = 
{
	"GetString", (methodPointerType)&m5870, &t736_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t736_m5870_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 20, 1, false, false, 4946, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4334_MI = 
{
	"get_HeaderName", (methodPointerType)&m4334, &t736_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 21, 0, false, false, 4947, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4341_MI = 
{
	"get_WebName", (methodPointerType)&m4341, &t736_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 22, 0, false, false, 4948, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t736_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4308_MI = 
{
	"get_ASCII", (methodPointerType)&m4308, &t736_TI, &t736_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4949, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t736_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6960_MI = 
{
	"get_BigEndianUnicode", (methodPointerType)&m6960, &t736_TI, &t736_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4950, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_1_0_0;
extern Il2CppType t125_1_0_0;
static ParameterInfo t736_m10901_ParameterInfos[] = 
{
	{"code_page", 0, 134223654, &EmptyCustomAttributesCache, &t125_1_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t343 (MethodInfo* method, void* obj, void** args);
MethodInfo m10901_MI = 
{
	"InternalCodePage", (methodPointerType)&m10901, &t736_TI, &t2_0_0_0, RuntimeInvoker_t9_t343, t736_m10901_ParameterInfos, &EmptyCustomAttributesCache, 147, 4096, 255, 1, false, false, 4951, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t736_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10902_MI = 
{
	"get_Default", (methodPointerType)&m10902, &t736_TI, &t736_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4952, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t736_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10903_MI = 
{
	"get_ISOLatin1", (methodPointerType)&m10903, &t736_TI, &t736_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2193, 0, 255, 0, false, false, 4953, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t736_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6972_MI = 
{
	"get_UTF7", (methodPointerType)&m6972, &t736_TI, &t736_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4954, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t736_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4315_MI = 
{
	"get_UTF8", (methodPointerType)&m4315, &t736_TI, &t736_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4955, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t736_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10904_MI = 
{
	"get_UTF8Unmarked", (methodPointerType)&m10904, &t736_TI, &t736_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 4956, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t736_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10905_MI = 
{
	"get_UTF8UnmarkedUnsafe", (methodPointerType)&m10905, &t736_TI, &t736_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 4957, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t736_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10906_MI = 
{
	"get_Unicode", (methodPointerType)&m10906, &t736_TI, &t736_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4958, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t736_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10907_MI = 
{
	"get_UTF32", (methodPointerType)&m10907, &t736_TI, &t736_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 4959, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t736_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10908_MI = 
{
	"get_BigEndianUTF32", (methodPointerType)&m10908, &t736_TI, &t736_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 4960, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2244_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t736_m10909_ParameterInfos[] = 
{
	{"chars", 0, 134223655, &EmptyCustomAttributesCache, &t2244_0_0_0},
	{"count", 1, 134223656, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t736__CustomAttributeCache_m10909;
MethodInfo m10909_MI = 
{
	"GetByteCount", (methodPointerType)&m10909, &t736_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125, t736_m10909_ParameterInfos, &t736__CustomAttributeCache_m10909, 454, 0, 23, 2, false, false, 4961, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2244_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1559_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t736_m10910_ParameterInfos[] = 
{
	{"chars", 0, 134223657, &EmptyCustomAttributesCache, &t2244_0_0_0},
	{"charCount", 1, 134223658, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 2, 134223659, &EmptyCustomAttributesCache, &t1559_0_0_0},
	{"byteCount", 3, 134223660, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t736__CustomAttributeCache_m10910;
MethodInfo m10910_MI = 
{
	"GetBytes", (methodPointerType)&m10910, &t736_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t9_t125, t736_m10910_ParameterInfos, &t736__CustomAttributeCache_m10910, 454, 0, 24, 4, false, false, 4962, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t736_MIs[] =
{
	&m10882_MI,
	&m10883_MI,
	&m10884_MI,
	&m10885_MI,
	&m10886_MI,
	&m10887_MI,
	&m10888_MI,
	&m10889_MI,
	&m10890_MI,
	&m10891_MI,
	&m12157_MI,
	&m10892_MI,
	&m10893_MI,
	&m12050_MI,
	&m6961_MI,
	&m4330_MI,
	&m10894_MI,
	&m6027_MI,
	&m12158_MI,
	&m12045_MI,
	&m10895_MI,
	&m10896_MI,
	&m10897_MI,
	&m10898_MI,
	&m4314_MI,
	&m10899_MI,
	&m12047_MI,
	&m12048_MI,
	&m10900_MI,
	&m4307_MI,
	&m5870_MI,
	&m4334_MI,
	&m4341_MI,
	&m4308_MI,
	&m6960_MI,
	&m10901_MI,
	&m10902_MI,
	&m10903_MI,
	&m6972_MI,
	&m4315_MI,
	&m10904_MI,
	&m10905_MI,
	&m10906_MI,
	&m10907_MI,
	&m10908_MI,
	&m10909_MI,
	&m10910_MI,
	NULL
};
extern Il2CppType t125_0_0_3;
FieldInfo t736_f0_FieldInfo = 
{
	"codePage", &t125_0_0_3, &t736_TI, offsetof(t736, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_3;
FieldInfo t736_f1_FieldInfo = 
{
	"windows_code_page", &t125_0_0_3, &t736_TI, offsetof(t736, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t736_f2_FieldInfo = 
{
	"is_readonly", &t124_0_0_1, &t736_TI, offsetof(t736, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2050_0_0_1;
FieldInfo t736_f3_FieldInfo = 
{
	"decoder_fallback", &t2050_0_0_1, &t736_TI, offsetof(t736, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2057_0_0_1;
FieldInfo t736_f4_FieldInfo = 
{
	"encoder_fallback", &t2057_0_0_1, &t736_TI, offsetof(t736, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1351_0_0_17;
FieldInfo t736_f5_FieldInfo = 
{
	"i18nAssembly", &t1351_0_0_17, &t736_TI, offsetof(t736_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_17;
FieldInfo t736_f6_FieldInfo = 
{
	"i18nDisabled", &t124_0_0_17, &t736_TI, offsetof(t736_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t158_0_0_49;
FieldInfo t736_f7_FieldInfo = 
{
	"encodings", &t158_0_0_49, &t736_TI, offsetof(t736_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_3;
FieldInfo t736_f8_FieldInfo = 
{
	"body_name", &t2_0_0_3, &t736_TI, offsetof(t736, f8), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_3;
FieldInfo t736_f9_FieldInfo = 
{
	"encoding_name", &t2_0_0_3, &t736_TI, offsetof(t736, f9), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_3;
FieldInfo t736_f10_FieldInfo = 
{
	"header_name", &t2_0_0_3, &t736_TI, offsetof(t736, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t736_f11_FieldInfo = 
{
	"is_mail_news_display", &t124_0_0_3, &t736_TI, offsetof(t736, f11), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t736_f12_FieldInfo = 
{
	"is_mail_news_save", &t124_0_0_3, &t736_TI, offsetof(t736, f12), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t736_f13_FieldInfo = 
{
	"is_browser_save", &t124_0_0_3, &t736_TI, offsetof(t736, f13), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t736_f14_FieldInfo = 
{
	"is_browser_display", &t124_0_0_3, &t736_TI, offsetof(t736, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_3;
FieldInfo t736_f15_FieldInfo = 
{
	"web_name", &t2_0_0_3, &t736_TI, offsetof(t736, f15), &EmptyCustomAttributesCache};
extern Il2CppType t736_0_0_17;
FieldInfo t736_f16_FieldInfo = 
{
	"asciiEncoding", &t736_0_0_17, &t736_TI, offsetof(t736_SFs, f16), &EmptyCustomAttributesCache};
extern Il2CppType t736_0_0_17;
FieldInfo t736_f17_FieldInfo = 
{
	"bigEndianEncoding", &t736_0_0_17, &t736_TI, offsetof(t736_SFs, f17), &EmptyCustomAttributesCache};
extern Il2CppType t736_0_0_17;
FieldInfo t736_f18_FieldInfo = 
{
	"defaultEncoding", &t736_0_0_17, &t736_TI, offsetof(t736_SFs, f18), &EmptyCustomAttributesCache};
extern Il2CppType t736_0_0_17;
FieldInfo t736_f19_FieldInfo = 
{
	"utf7Encoding", &t736_0_0_17, &t736_TI, offsetof(t736_SFs, f19), &EmptyCustomAttributesCache};
extern Il2CppType t736_0_0_17;
FieldInfo t736_f20_FieldInfo = 
{
	"utf8EncodingWithMarkers", &t736_0_0_17, &t736_TI, offsetof(t736_SFs, f20), &EmptyCustomAttributesCache};
extern Il2CppType t736_0_0_17;
FieldInfo t736_f21_FieldInfo = 
{
	"utf8EncodingWithoutMarkers", &t736_0_0_17, &t736_TI, offsetof(t736_SFs, f21), &EmptyCustomAttributesCache};
extern Il2CppType t736_0_0_17;
FieldInfo t736_f22_FieldInfo = 
{
	"unicodeEncoding", &t736_0_0_17, &t736_TI, offsetof(t736_SFs, f22), &EmptyCustomAttributesCache};
extern Il2CppType t736_0_0_17;
FieldInfo t736_f23_FieldInfo = 
{
	"isoLatin1Encoding", &t736_0_0_17, &t736_TI, offsetof(t736_SFs, f23), &EmptyCustomAttributesCache};
extern Il2CppType t736_0_0_17;
FieldInfo t736_f24_FieldInfo = 
{
	"utf8EncodingUnsafe", &t736_0_0_17, &t736_TI, offsetof(t736_SFs, f24), &EmptyCustomAttributesCache};
extern Il2CppType t736_0_0_17;
FieldInfo t736_f25_FieldInfo = 
{
	"utf32Encoding", &t736_0_0_17, &t736_TI, offsetof(t736_SFs, f25), &EmptyCustomAttributesCache};
extern Il2CppType t736_0_0_17;
FieldInfo t736_f26_FieldInfo = 
{
	"bigEndianUTF32Encoding", &t736_0_0_17, &t736_TI, offsetof(t736_SFs, f26), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_49;
FieldInfo t736_f27_FieldInfo = 
{
	"lockobj", &t9_0_0_49, &t736_TI, offsetof(t736_SFs, f27), &EmptyCustomAttributesCache};
static FieldInfo* t736_FIs[] =
{
	&t736_f0_FieldInfo,
	&t736_f1_FieldInfo,
	&t736_f2_FieldInfo,
	&t736_f3_FieldInfo,
	&t736_f4_FieldInfo,
	&t736_f5_FieldInfo,
	&t736_f6_FieldInfo,
	&t736_f7_FieldInfo,
	&t736_f8_FieldInfo,
	&t736_f9_FieldInfo,
	&t736_f10_FieldInfo,
	&t736_f11_FieldInfo,
	&t736_f12_FieldInfo,
	&t736_f13_FieldInfo,
	&t736_f14_FieldInfo,
	&t736_f15_FieldInfo,
	&t736_f16_FieldInfo,
	&t736_f17_FieldInfo,
	&t736_f18_FieldInfo,
	&t736_f19_FieldInfo,
	&t736_f20_FieldInfo,
	&t736_f21_FieldInfo,
	&t736_f22_FieldInfo,
	&t736_f23_FieldInfo,
	&t736_f24_FieldInfo,
	&t736_f25_FieldInfo,
	&t736_f26_FieldInfo,
	&t736_f27_FieldInfo,
	NULL
};
extern MethodInfo m10886_MI;
extern CustomAttributesCache t736__CustomAttributeCache_t736____IsReadOnly_PropertyInfo;
static PropertyInfo t736____IsReadOnly_PropertyInfo = 
{
	&t736_TI, "IsReadOnly", &m10886_MI, NULL, 0, &t736__CustomAttributeCache_t736____IsReadOnly_PropertyInfo};
extern MethodInfo m10887_MI;
extern MethodInfo m10888_MI;
extern CustomAttributesCache t736__CustomAttributeCache_t736____DecoderFallback_PropertyInfo;
static PropertyInfo t736____DecoderFallback_PropertyInfo = 
{
	&t736_TI, "DecoderFallback", &m10887_MI, &m10888_MI, 0, &t736__CustomAttributeCache_t736____DecoderFallback_PropertyInfo};
extern MethodInfo m10889_MI;
extern CustomAttributesCache t736__CustomAttributeCache_t736____EncoderFallback_PropertyInfo;
static PropertyInfo t736____EncoderFallback_PropertyInfo = 
{
	&t736_TI, "EncoderFallback", &m10889_MI, NULL, 0, &t736__CustomAttributeCache_t736____EncoderFallback_PropertyInfo};
static PropertyInfo t736____HeaderName_PropertyInfo = 
{
	&t736_TI, "HeaderName", &m4334_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t736____WebName_PropertyInfo = 
{
	&t736_TI, "WebName", &m4341_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m4308_MI;
static PropertyInfo t736____ASCII_PropertyInfo = 
{
	&t736_TI, "ASCII", &m4308_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6960_MI;
static PropertyInfo t736____BigEndianUnicode_PropertyInfo = 
{
	&t736_TI, "BigEndianUnicode", &m6960_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10902_MI;
static PropertyInfo t736____Default_PropertyInfo = 
{
	&t736_TI, "Default", &m10902_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10903_MI;
static PropertyInfo t736____ISOLatin1_PropertyInfo = 
{
	&t736_TI, "ISOLatin1", &m10903_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6972_MI;
static PropertyInfo t736____UTF7_PropertyInfo = 
{
	&t736_TI, "UTF7", &m6972_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m4315_MI;
static PropertyInfo t736____UTF8_PropertyInfo = 
{
	&t736_TI, "UTF8", &m4315_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10904_MI;
static PropertyInfo t736____UTF8Unmarked_PropertyInfo = 
{
	&t736_TI, "UTF8Unmarked", &m10904_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10905_MI;
static PropertyInfo t736____UTF8UnmarkedUnsafe_PropertyInfo = 
{
	&t736_TI, "UTF8UnmarkedUnsafe", &m10905_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10906_MI;
static PropertyInfo t736____Unicode_PropertyInfo = 
{
	&t736_TI, "Unicode", &m10906_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10907_MI;
static PropertyInfo t736____UTF32_PropertyInfo = 
{
	&t736_TI, "UTF32", &m10907_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10908_MI;
static PropertyInfo t736____BigEndianUTF32_PropertyInfo = 
{
	&t736_TI, "BigEndianUTF32", &m10908_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t736_PIs[] =
{
	&t736____IsReadOnly_PropertyInfo,
	&t736____DecoderFallback_PropertyInfo,
	&t736____EncoderFallback_PropertyInfo,
	&t736____HeaderName_PropertyInfo,
	&t736____WebName_PropertyInfo,
	&t736____ASCII_PropertyInfo,
	&t736____BigEndianUnicode_PropertyInfo,
	&t736____Default_PropertyInfo,
	&t736____ISOLatin1_PropertyInfo,
	&t736____UTF7_PropertyInfo,
	&t736____UTF8_PropertyInfo,
	&t736____UTF8Unmarked_PropertyInfo,
	&t736____UTF8UnmarkedUnsafe_PropertyInfo,
	&t736____Unicode_PropertyInfo,
	&t736____UTF32_PropertyInfo,
	&t736____BigEndianUTF32_PropertyInfo,
	NULL
};
static const Il2CppType* t736_TI__nestedTypes[1] =
{
	&t2062_0_0_0,
};
extern MethodInfo m10892_MI;
extern MethodInfo m6961_MI;
extern MethodInfo m10896_MI;
extern MethodInfo m4307_MI;
extern MethodInfo m10909_MI;
extern MethodInfo m10910_MI;
static Il2CppMethodReference t736_VT[] =
{
	&m10891_MI,
	&m646_MI,
	&m10899_MI,
	&m673_MI,
	NULL,
	&m10892_MI,
	&m10893_MI,
	NULL,
	&m6961_MI,
	&m4330_MI,
	&m10894_MI,
	&m6027_MI,
	NULL,
	NULL,
	&m10895_MI,
	&m10896_MI,
	NULL,
	NULL,
	&m10900_MI,
	&m4307_MI,
	&m5870_MI,
	&m4334_MI,
	&m4341_MI,
	&m10909_MI,
	&m10910_MI,
};
static bool t736_VTIGM[] =
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
static const Il2CppType* t736_ITIs[] = 
{
	&t629_0_0_0,
};
static Il2CppInterfaceOffsetPair t736_IOs[] = 
{
	{ &t629_0_0_0, 4},
};
void t736_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t344_TI;
#include "t344.h"
#include "t344MD.h"
extern MethodInfo m1268_MI;
void t736_CustomAttributesCacheGenerator_t736_m10897_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t344 * tmp;
		tmp = (t344 *)il2cpp_codegen_object_new (&t344_TI);
		m1268(tmp, &m1268_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t736_CustomAttributesCacheGenerator_m10909(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1158 * tmp;
		tmp = (t1158 *)il2cpp_codegen_object_new (&t1158_TI);
		m4843(tmp, false, &m4843_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t736_CustomAttributesCacheGenerator_m10910(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1158 * tmp;
		tmp = (t1158 *)il2cpp_codegen_object_new (&t1158_TI);
		m4843(tmp, false, &m4843_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t736_CustomAttributesCacheGenerator_t736____IsReadOnly_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t736_CustomAttributesCacheGenerator_t736____DecoderFallback_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t736_CustomAttributesCacheGenerator_t736____EncoderFallback_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t736__CustomAttributeCache = {
1,
NULL,
&t736_CustomAttributesCacheGenerator
};
CustomAttributesCache t736__CustomAttributeCache_t736_m10897_Arg1_ParameterInfo = {
1,
NULL,
&t736_CustomAttributesCacheGenerator_t736_m10897_Arg1_ParameterInfo
};
CustomAttributesCache t736__CustomAttributeCache_m10909 = {
2,
NULL,
&t736_CustomAttributesCacheGenerator_m10909
};
CustomAttributesCache t736__CustomAttributeCache_m10910 = {
2,
NULL,
&t736_CustomAttributesCacheGenerator_m10910
};
CustomAttributesCache t736__CustomAttributeCache_t736____IsReadOnly_PropertyInfo = {
1,
NULL,
&t736_CustomAttributesCacheGenerator_t736____IsReadOnly_PropertyInfo
};
CustomAttributesCache t736__CustomAttributeCache_t736____DecoderFallback_PropertyInfo = {
1,
NULL,
&t736_CustomAttributesCacheGenerator_t736____DecoderFallback_PropertyInfo
};
CustomAttributesCache t736__CustomAttributeCache_t736____EncoderFallback_PropertyInfo = {
1,
NULL,
&t736_CustomAttributesCacheGenerator_t736____EncoderFallback_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t736_1_0_0;
struct t736;
extern CustomAttributesCache t736__CustomAttributeCache;
extern CustomAttributesCache t736__CustomAttributeCache_m10909;
extern CustomAttributesCache t736__CustomAttributeCache_m10910;
extern CustomAttributesCache t736__CustomAttributeCache_t736____IsReadOnly_PropertyInfo;
extern CustomAttributesCache t736__CustomAttributeCache_t736____DecoderFallback_PropertyInfo;
extern CustomAttributesCache t736__CustomAttributeCache_t736____EncoderFallback_PropertyInfo;
const Il2CppTypeDefinitionMetadata t736_DM = 
{
	NULL, t736_TI__nestedTypes, t736_ITIs, t736_IOs, &t9_0_0_0, t736_VT, t736_VTIGM, NULL};
TypeInfo t736_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Encoding", "System.Text", t736_MIs, t736_PIs, t736_FIs, NULL, &t736_TI, NULL, &t736__CustomAttributeCache, &t736_0_0_0, &t736_1_0_0, &t736_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t736), sizeof (t736), 0, -1, sizeof(t736_SFs), 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, true, false, 47, 16, 28, 0, 1, 25, 1, 1};
#include "t2063.h"
// Metadata Definition System.Text.Latin1Encoding
extern TypeInfo t2063_TI;
#include "t2063MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10911_MI = 
{
	".ctor", (methodPointerType)&m10911, &t2063_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4965, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2063_m10912_ParameterInfos[] = 
{
	{"chars", 0, 134223667, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"index", 1, 134223668, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223669, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10912_MI = 
{
	"GetByteCount", (methodPointerType)&m10912, &t2063_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t2063_m10912_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 3, false, false, 4966, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t2063_m10913_ParameterInfos[] = 
{
	{"s", 0, 134223670, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10913_MI = 
{
	"GetByteCount", (methodPointerType)&m10913, &t2063_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t2063_m10913_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4967, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2063_m10914_ParameterInfos[] = 
{
	{"chars", 0, 134223671, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"charIndex", 1, 134223672, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223673, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223674, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 4, 134223675, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10914_MI = 
{
	"GetBytes", (methodPointerType)&m10914, &t2063_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2063_m10914_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 5, false, false, 4968, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2048_1_0_0;
extern Il2CppType t318_1_0_0;
static ParameterInfo t2063_m10915_ParameterInfos[] = 
{
	{"chars", 0, 134223676, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"charIndex", 1, 134223677, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223678, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223679, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 4, 134223680, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"buffer", 5, 134223681, &EmptyCustomAttributesCache, &t2048_1_0_0},
	{"fallback_chars", 6, 134223682, &EmptyCustomAttributesCache, &t318_1_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2649_t2650 (MethodInfo* method, void* obj, void** args);
MethodInfo m10915_MI = 
{
	"GetBytes", (methodPointerType)&m10915, &t2063_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2649_t2650, t2063_m10915_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4969, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2063_m10916_ParameterInfos[] = 
{
	{"s", 0, 134223683, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"charIndex", 1, 134223684, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223685, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223686, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 4, 134223687, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10916_MI = 
{
	"GetBytes", (methodPointerType)&m10916, &t2063_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2063_m10916_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 5, false, false, 4970, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2048_1_0_0;
extern Il2CppType t318_1_0_0;
static ParameterInfo t2063_m10917_ParameterInfos[] = 
{
	{"s", 0, 134223688, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"charIndex", 1, 134223689, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223690, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes", 3, 134223691, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 4, 134223692, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"buffer", 5, 134223693, &EmptyCustomAttributesCache, &t2048_1_0_0},
	{"fallback_chars", 6, 134223694, &EmptyCustomAttributesCache, &t318_1_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2649_t2650 (MethodInfo* method, void* obj, void** args);
MethodInfo m10917_MI = 
{
	"GetBytes", (methodPointerType)&m10917, &t2063_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t2649_t2650, t2063_m10917_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4971, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2063_m10918_ParameterInfos[] = 
{
	{"bytes", 0, 134223695, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"index", 1, 134223696, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223697, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10918_MI = 
{
	"GetCharCount", (methodPointerType)&m10918, &t2063_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t2063_m10918_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 3, false, false, 4972, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2063_m10919_ParameterInfos[] = 
{
	{"bytes", 0, 134223698, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"byteIndex", 1, 134223699, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"byteCount", 2, 134223700, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"chars", 3, 134223701, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"charIndex", 4, 134223702, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10919_MI = 
{
	"GetChars", (methodPointerType)&m10919, &t2063_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125, t2063_m10919_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 5, false, false, 4973, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2063_m10920_ParameterInfos[] = 
{
	{"charCount", 0, 134223703, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10920_MI = 
{
	"GetMaxByteCount", (methodPointerType)&m10920, &t2063_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t2063_m10920_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 1, false, false, 4974, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2063_m10921_ParameterInfos[] = 
{
	{"byteCount", 0, 134223704, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10921_MI = 
{
	"GetMaxCharCount", (methodPointerType)&m10921, &t2063_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t2063_m10921_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 4975, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t2063_m10922_ParameterInfos[] = 
{
	{"bytes", 0, 134223705, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"index", 1, 134223706, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223707, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10922_MI = 
{
	"GetString", (methodPointerType)&m10922, &t2063_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t2063_m10922_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 19, 3, false, false, 4976, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t2063_m10923_ParameterInfos[] = 
{
	{"bytes", 0, 134223708, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10923_MI = 
{
	"GetString", (methodPointerType)&m10923, &t2063_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t2063_m10923_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 20, 1, false, false, 4977, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10924_MI = 
{
	"get_HeaderName", (methodPointerType)&m10924, &t2063_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 21, 0, false, false, 4978, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10925_MI = 
{
	"get_WebName", (methodPointerType)&m10925, &t2063_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 22, 0, false, false, 4979, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2063_MIs[] =
{
	&m10911_MI,
	&m10912_MI,
	&m10913_MI,
	&m10914_MI,
	&m10915_MI,
	&m10916_MI,
	&m10917_MI,
	&m10918_MI,
	&m10919_MI,
	&m10920_MI,
	&m10921_MI,
	&m10922_MI,
	&m10923_MI,
	&m10924_MI,
	&m10925_MI,
	NULL
};
extern MethodInfo m10924_MI;
static PropertyInfo t2063____HeaderName_PropertyInfo = 
{
	&t2063_TI, "HeaderName", &m10924_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10925_MI;
static PropertyInfo t2063____WebName_PropertyInfo = 
{
	&t2063_TI, "WebName", &m10925_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2063_PIs[] =
{
	&t2063____HeaderName_PropertyInfo,
	&t2063____WebName_PropertyInfo,
	NULL
};
extern MethodInfo m10912_MI;
extern MethodInfo m10913_MI;
extern MethodInfo m10914_MI;
extern MethodInfo m10916_MI;
extern MethodInfo m10918_MI;
extern MethodInfo m10919_MI;
extern MethodInfo m10920_MI;
extern MethodInfo m10921_MI;
extern MethodInfo m10922_MI;
extern MethodInfo m10923_MI;
static Il2CppMethodReference t2063_VT[] =
{
	&m10891_MI,
	&m646_MI,
	&m10899_MI,
	&m673_MI,
	&m10912_MI,
	&m10913_MI,
	&m10893_MI,
	&m10914_MI,
	&m10916_MI,
	&m4330_MI,
	&m10894_MI,
	&m6027_MI,
	&m10918_MI,
	&m10919_MI,
	&m10895_MI,
	&m10896_MI,
	&m10920_MI,
	&m10921_MI,
	&m10900_MI,
	&m10922_MI,
	&m10923_MI,
	&m10924_MI,
	&m10925_MI,
	&m10909_MI,
	&m10910_MI,
};
static bool t2063_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t2063_IOs[] = 
{
	{ &t629_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2063_0_0_0;
extern Il2CppType t2063_1_0_0;
struct t2063;
const Il2CppTypeDefinitionMetadata t2063_DM = 
{
	NULL, NULL, NULL, t2063_IOs, &t736_0_0_0, t2063_VT, t2063_VTIGM, NULL};
TypeInfo t2063_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Latin1Encoding", "System.Text", t2063_MIs, t2063_PIs, NULL, NULL, &t2063_TI, NULL, &EmptyCustomAttributesCache, &t2063_0_0_0, &t2063_1_0_0, &t2063_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2063), sizeof (t2063), 0, -1, 0, 0, -1, 1056768, 0, 0, false, false, false, false, false, false, false, false, false, false, 15, 2, 0, 0, 0, 25, 0, 1};
#include "t328.h"
// Metadata Definition System.Text.StringBuilder
extern TypeInfo t328_TI;
#include "t328MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t328_m10926_ParameterInfos[] = 
{
	{"value", 0, 134223709, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 1, 134223710, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length", 2, 134223711, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"capacity", 3, 134223712, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10926_MI = 
{
	".ctor", (methodPointerType)&m10926, &t328_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t125, t328_m10926_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 4980, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t328_m10927_ParameterInfos[] = 
{
	{"value", 0, 134223713, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 1, 134223714, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length", 2, 134223715, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"capacity", 3, 134223716, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"maxCapacity", 4, 134223717, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10927_MI = 
{
	".ctor", (methodPointerType)&m10927, &t328_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t125_t125, t328_m10927_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 5, false, false, 4981, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m1203_MI = 
{
	".ctor", (methodPointerType)&m1203, &t328_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4982, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t328_m4396_ParameterInfos[] = 
{
	{"capacity", 0, 134223718, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4396_MI = 
{
	".ctor", (methodPointerType)&m4396, &t328_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t328_m4396_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4983, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t328_m2551_ParameterInfos[] = 
{
	{"value", 0, 134223719, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m2551_MI = 
{
	".ctor", (methodPointerType)&m2551, &t328_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t328_m2551_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4984, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t328_m5780_ParameterInfos[] = 
{
	{"value", 0, 134223720, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"capacity", 1, 134223721, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5780_MI = 
{
	".ctor", (methodPointerType)&m5780, &t328_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t328_m5780_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4985, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t328_m10928_ParameterInfos[] = 
{
	{"info", 0, 134223722, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134223723, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10928_MI = 
{
	".ctor", (methodPointerType)&m10928, &t328_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t328_m10928_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 2, false, false, 4986, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t328_m10929_ParameterInfos[] = 
{
	{"info", 0, 134223724, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134223725, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10929_MI = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData", (methodPointerType)&m10929, &t328_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t328_m10929_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 2, false, false, 4987, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10930_MI = 
{
	"get_Capacity", (methodPointerType)&m10930, &t328_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4988, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t328_m10931_ParameterInfos[] = 
{
	{"value", 0, 134223726, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10931_MI = 
{
	"set_Capacity", (methodPointerType)&m10931, &t328_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t328_m10931_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4989, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5926_MI = 
{
	"get_Length", (methodPointerType)&m5926, &t328_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4990, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t328_m6031_ParameterInfos[] = 
{
	{"value", 0, 134223727, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6031_MI = 
{
	"set_Length", (methodPointerType)&m6031, &t328_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t328_m6031_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4991, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t328_m10932_ParameterInfos[] = 
{
	{"index", 0, 134223728, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t309_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10932_MI = 
{
	"get_Chars", (methodPointerType)&m10932, &t328_TI, &t309_0_0_0, RuntimeInvoker_t309_t125, t328_m10932_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4992, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t328_m10933_ParameterInfos[] = 
{
	{"index", 0, 134223729, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134223730, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m10933_MI = 
{
	"set_Chars", (methodPointerType)&m10933, &t328_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t341, t328_m10933_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 2, false, false, 4993, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1209_MI = 
{
	"ToString", (methodPointerType)&m1209, &t328_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4994, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t328_m10934_ParameterInfos[] = 
{
	{"startIndex", 0, 134223731, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length", 1, 134223732, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10934_MI = 
{
	"ToString", (methodPointerType)&m10934, &t328_TI, &t2_0_0_0, RuntimeInvoker_t9_t125_t125, t328_m10934_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4995, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t328_m10935_ParameterInfos[] = 
{
	{"startIndex", 0, 134223733, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length", 1, 134223734, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10935_MI = 
{
	"Remove", (methodPointerType)&m10935, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t125_t125, t328_m10935_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4996, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t328_m10936_ParameterInfos[] = 
{
	{"oldValue", 0, 134223735, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"newValue", 1, 134223736, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10936_MI = 
{
	"Replace", (methodPointerType)&m10936, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t9_t9, t328_m10936_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4997, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t328_m10937_ParameterInfos[] = 
{
	{"oldValue", 0, 134223737, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"newValue", 1, 134223738, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 2, 134223739, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134223740, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10937_MI = 
{
	"Replace", (methodPointerType)&m10937, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t9_t9_t125_t125, t328_m10937_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 4, false, false, 4998, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t328_m1207_ParameterInfos[] = 
{
	{"value", 0, 134223741, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1207_MI = 
{
	"Append", (methodPointerType)&m1207, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t9, t328_m1207_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4999, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t328_m5856_ParameterInfos[] = 
{
	{"value", 0, 134223742, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5856_MI = 
{
	"Append", (methodPointerType)&m5856, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t125, t328_m5856_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 5000, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t328_m5793_ParameterInfos[] = 
{
	{"value", 0, 134223743, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m5793_MI = 
{
	"Append", (methodPointerType)&m5793, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t303, t328_m5793_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 5001, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t328_m5781_ParameterInfos[] = 
{
	{"value", 0, 134223744, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5781_MI = 
{
	"Append", (methodPointerType)&m5781, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t9, t328_m5781_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 5002, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t328_m2797_ParameterInfos[] = 
{
	{"value", 0, 134223745, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m2797_MI = 
{
	"Append", (methodPointerType)&m2797, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t341, t328_m2797_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 5003, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t328_m10938_ParameterInfos[] = 
{
	{"value", 0, 134223746, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"repeatCount", 1, 134223747, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t341_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10938_MI = 
{
	"Append", (methodPointerType)&m10938, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t341_t125, t328_m10938_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 5004, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t328_m10939_ParameterInfos[] = 
{
	{"value", 0, 134223748, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"startIndex", 1, 134223749, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"charCount", 2, 134223750, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10939_MI = 
{
	"Append", (methodPointerType)&m10939, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t328_m10939_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 5005, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t328_m5941_ParameterInfos[] = 
{
	{"value", 0, 134223751, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 1, 134223752, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134223753, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5941_MI = 
{
	"Append", (methodPointerType)&m5941, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t9_t125_t125, t328_m5941_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 5006, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t328__CustomAttributeCache_m1208;
MethodInfo m1208_MI = 
{
	"AppendLine", (methodPointerType)&m1208, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9, NULL, &t328__CustomAttributeCache_m1208, 134, 0, 255, 0, false, false, 5007, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t328_m2469_ParameterInfos[] = 
{
	{"value", 0, 134223754, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t328__CustomAttributeCache_m2469;
MethodInfo m2469_MI = 
{
	"AppendLine", (methodPointerType)&m2469, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t9, t328_m2469_ParameterInfos, &t328__CustomAttributeCache_m2469, 134, 0, 255, 1, false, false, 5008, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t158_0_0_0;
extern CustomAttributesCache t328__CustomAttributeCache_t328_m6931_Arg1_ParameterInfo;
static ParameterInfo t328_m6931_ParameterInfos[] = 
{
	{"format", 0, 134223755, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"args", 1, 134223756, &t328__CustomAttributeCache_t328_m6931_Arg1_ParameterInfo, &t158_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6931_MI = 
{
	"AppendFormat", (methodPointerType)&m6931, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t9_t9, t328_m6931_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 5009, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t912_0_0_0;
extern Il2CppType t912_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t158_0_0_0;
extern CustomAttributesCache t328__CustomAttributeCache_t328_m10940_Arg2_ParameterInfo;
static ParameterInfo t328_m10940_ParameterInfos[] = 
{
	{"provider", 0, 134223757, &EmptyCustomAttributesCache, &t912_0_0_0},
	{"format", 1, 134223758, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"args", 2, 134223759, &t328__CustomAttributeCache_t328_m10940_Arg2_ParameterInfo, &t158_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10940_MI = 
{
	"AppendFormat", (methodPointerType)&m10940, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t328_m10940_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 5010, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t328_m5792_ParameterInfos[] = 
{
	{"format", 0, 134223760, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"arg0", 1, 134223761, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5792_MI = 
{
	"AppendFormat", (methodPointerType)&m5792, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t9_t9, t328_m5792_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 5011, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t328_m5883_ParameterInfos[] = 
{
	{"format", 0, 134223762, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"arg0", 1, 134223763, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"arg1", 2, 134223764, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5883_MI = 
{
	"AppendFormat", (methodPointerType)&m5883, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t328_m5883_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 5012, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t328_m5886_ParameterInfos[] = 
{
	{"format", 0, 134223765, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"arg0", 1, 134223766, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"arg1", 2, 134223767, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"arg2", 3, 134223768, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5886_MI = 
{
	"AppendFormat", (methodPointerType)&m5886, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t9_t9_t9_t9, t328_m5886_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 4, false, false, 5013, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t328_m10941_ParameterInfos[] = 
{
	{"index", 0, 134223769, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134223770, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10941_MI = 
{
	"Insert", (methodPointerType)&m10941, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t125_t9, t328_m10941_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 5014, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t328_m10942_ParameterInfos[] = 
{
	{"index", 0, 134223771, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134223772, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t125_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m10942_MI = 
{
	"Insert", (methodPointerType)&m10942, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t125_t341, t328_m10942_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 5015, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t328_m10943_ParameterInfos[] = 
{
	{"index", 0, 134223773, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134223774, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"count", 2, 134223775, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t328_0_0_0;
extern void* RuntimeInvoker_t9_t125_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10943_MI = 
{
	"Insert", (methodPointerType)&m10943, &t328_TI, &t328_0_0_0, RuntimeInvoker_t9_t125_t9_t125, t328_m10943_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 5016, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t328_m10944_ParameterInfos[] = 
{
	{"size", 0, 134223776, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10944_MI = 
{
	"InternalEnsureCapacity", (methodPointerType)&m10944, &t328_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t328_m10944_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 5017, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t328_MIs[] =
{
	&m10926_MI,
	&m10927_MI,
	&m1203_MI,
	&m4396_MI,
	&m2551_MI,
	&m5780_MI,
	&m10928_MI,
	&m10929_MI,
	&m10930_MI,
	&m10931_MI,
	&m5926_MI,
	&m6031_MI,
	&m10932_MI,
	&m10933_MI,
	&m1209_MI,
	&m10934_MI,
	&m10935_MI,
	&m10936_MI,
	&m10937_MI,
	&m1207_MI,
	&m5856_MI,
	&m5793_MI,
	&m5781_MI,
	&m2797_MI,
	&m10938_MI,
	&m10939_MI,
	&m5941_MI,
	&m1208_MI,
	&m2469_MI,
	&m6931_MI,
	&m10940_MI,
	&m5792_MI,
	&m5883_MI,
	&m5886_MI,
	&m10941_MI,
	&m10942_MI,
	&m10943_MI,
	&m10944_MI,
	NULL
};
extern Il2CppType t125_0_0_32849;
FieldInfo t328_f0_FieldInfo = 
{
	"constDefaultCapacity", &t125_0_0_32849, &t328_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t328_f1_FieldInfo = 
{
	"_length", &t125_0_0_1, &t328_TI, offsetof(t328, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t328_f2_FieldInfo = 
{
	"_str", &t2_0_0_1, &t328_TI, offsetof(t328, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t328_f3_FieldInfo = 
{
	"_cached_str", &t2_0_0_1, &t328_TI, offsetof(t328, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t328_f4_FieldInfo = 
{
	"_maxCapacity", &t125_0_0_1, &t328_TI, offsetof(t328, f4), &EmptyCustomAttributesCache};
static FieldInfo* t328_FIs[] =
{
	&t328_f0_FieldInfo,
	&t328_f1_FieldInfo,
	&t328_f2_FieldInfo,
	&t328_f3_FieldInfo,
	&t328_f4_FieldInfo,
	NULL
};
static const int32_t t328_f0_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t328_f0_DefaultValue = 
{
	&t328_f0_FieldInfo, { (char*)&t328_f0_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t328_FDVs[] = 
{
	&t328_f0_DefaultValue,
	NULL
};
extern MethodInfo m10930_MI;
extern MethodInfo m10931_MI;
static PropertyInfo t328____Capacity_PropertyInfo = 
{
	&t328_TI, "Capacity", &m10930_MI, &m10931_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5926_MI;
extern MethodInfo m6031_MI;
static PropertyInfo t328____Length_PropertyInfo = 
{
	&t328_TI, "Length", &m5926_MI, &m6031_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10932_MI;
extern MethodInfo m10933_MI;
static PropertyInfo t328____Chars_PropertyInfo = 
{
	&t328_TI, "Chars", &m10932_MI, &m10933_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t328_PIs[] =
{
	&t328____Capacity_PropertyInfo,
	&t328____Length_PropertyInfo,
	&t328____Chars_PropertyInfo,
	NULL
};
extern MethodInfo m1209_MI;
extern MethodInfo m10929_MI;
static Il2CppMethodReference t328_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m1209_MI,
	&m10929_MI,
};
static bool t328_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t328_ITIs[] = 
{
	&t630_0_0_0,
};
static Il2CppInterfaceOffsetPair t328_IOs[] = 
{
	{ &t630_0_0_0, 4},
};
extern TypeInfo t673_TI;
#include "t673.h"
#include "t673MD.h"
extern MethodInfo m3143_MI;
void t328_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t673 * tmp;
		tmp = (t673 *)il2cpp_codegen_object_new (&t673_TI);
		m3143(tmp, il2cpp_codegen_string_new_wrapper("Chars"), &m3143_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7891(tmp, il2cpp_codegen_string_new_wrapper("Serialization format not compatible with .NET"), &m7891_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t328_CustomAttributesCacheGenerator_m1208(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t328_CustomAttributesCacheGenerator_m2469(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t328_CustomAttributesCacheGenerator_t328_m6931_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t344 * tmp;
		tmp = (t344 *)il2cpp_codegen_object_new (&t344_TI);
		m1268(tmp, &m1268_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t328_CustomAttributesCacheGenerator_t328_m10940_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t344 * tmp;
		tmp = (t344 *)il2cpp_codegen_object_new (&t344_TI);
		m1268(tmp, &m1268_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t328__CustomAttributeCache = {
3,
NULL,
&t328_CustomAttributesCacheGenerator
};
CustomAttributesCache t328__CustomAttributeCache_m1208 = {
1,
NULL,
&t328_CustomAttributesCacheGenerator_m1208
};
CustomAttributesCache t328__CustomAttributeCache_m2469 = {
1,
NULL,
&t328_CustomAttributesCacheGenerator_m2469
};
CustomAttributesCache t328__CustomAttributeCache_t328_m6931_Arg1_ParameterInfo = {
1,
NULL,
&t328_CustomAttributesCacheGenerator_t328_m6931_Arg1_ParameterInfo
};
CustomAttributesCache t328__CustomAttributeCache_t328_m10940_Arg2_ParameterInfo = {
1,
NULL,
&t328_CustomAttributesCacheGenerator_t328_m10940_Arg2_ParameterInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t328_0_0_0;
struct t328;
extern CustomAttributesCache t328__CustomAttributeCache;
extern CustomAttributesCache t328__CustomAttributeCache_m1208;
extern CustomAttributesCache t328__CustomAttributeCache_m2469;
const Il2CppTypeDefinitionMetadata t328_DM = 
{
	NULL, NULL, t328_ITIs, t328_IOs, &t9_0_0_0, t328_VT, t328_VTIGM, NULL};
TypeInfo t328_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StringBuilder", "System.Text", t328_MIs, t328_PIs, t328_FIs, NULL, &t328_TI, NULL, &t328__CustomAttributeCache, &t328_0_0_0, &t328_1_0_0, &t328_DM, NULL, NULL, NULL, t328_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t328), sizeof (t328), 0, sizeof(char*), 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 38, 3, 5, 0, 0, 5, 1, 1};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
