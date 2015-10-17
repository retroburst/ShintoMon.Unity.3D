#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// Metadata Definition System.Collections.IComparer
extern TypeInfo t1165_TI;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1165_m5716_ParameterInfos[] = 
{
	{"x", 0, 134220707, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"y", 1, 134220708, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5716_MI = 
{
	"Compare", NULL, &t1165_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1165_m5716_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, false, 2224, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1165_MIs[] =
{
	&m5716_MI,
	NULL
};
extern TypeInfo t677_TI;
#include "t677.h"
#include "t677MD.h"
extern MethodInfo m3128_MI;
void t1165_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1165__CustomAttributeCache = {
1,
NULL,
&t1165_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1165_0_0_0;
extern Il2CppType t1165_1_0_0;
struct t1165;
extern CustomAttributesCache t1165__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1165_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1165_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer", "System.Collections", t1165_MIs, NULL, NULL, NULL, &t1165_TI, NULL, &t1165__CustomAttributeCache, &t1165_0_0_0, &t1165_1_0_0, &t1165_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Collections.IDictionary
extern TypeInfo t1160_TI;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1160_m5702_ParameterInfos[] = 
{
	{"key", 0, 134220709, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5702_MI = 
{
	"get_Item", NULL, &t1160_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1160_m5702_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 0, 1, false, false, 2225, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1160_m5703_ParameterInfos[] = 
{
	{"key", 0, 134220710, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"value", 1, 134220711, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5703_MI = 
{
	"set_Item", NULL, &t1160_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1160_m5703_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 1, 2, false, false, 2226, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1160_m5707_ParameterInfos[] = 
{
	{"key", 0, 134220712, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"value", 1, 134220713, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5707_MI = 
{
	"Add", NULL, &t1160_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1160_m5707_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 2, false, false, 2227, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1160_m5708_ParameterInfos[] = 
{
	{"key", 0, 134220714, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5708_MI = 
{
	"Contains", NULL, &t1160_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1160_m5708_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 3, 1, false, false, 2228, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1161_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5710_MI = 
{
	"GetEnumerator", NULL, &t1160_TI, &t1161_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 1478, 0, 4, 0, false, false, 2229, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1160_m5711_ParameterInfos[] = 
{
	{"key", 0, 134220715, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5711_MI = 
{
	"Remove", NULL, &t1160_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1160_m5711_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 2230, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1160_MIs[] =
{
	&m5702_MI,
	&m5703_MI,
	&m5707_MI,
	&m5708_MI,
	&m5710_MI,
	&m5711_MI,
	NULL
};
extern MethodInfo m5702_MI;
extern MethodInfo m5703_MI;
static PropertyInfo t1160____Item_PropertyInfo = 
{
	&t1160_TI, "Item", &m5702_MI, &m5703_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1160_PIs[] =
{
	&t1160____Item_PropertyInfo,
	NULL
};
extern Il2CppType t665_0_0_0;
extern Il2CppType t998_0_0_0;
static const Il2CppType* t1160_ITIs[] = 
{
	&t665_0_0_0,
	&t998_0_0_0,
};
extern TypeInfo t666_TI;
#include "t666.h"
#include "t666MD.h"
extern MethodInfo m3103_MI;
void t1160_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t666 * tmp;
		tmp = (t666 *)il2cpp_codegen_object_new (&t666_TI);
		m3103(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m3103_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1160__CustomAttributeCache = {
2,
NULL,
&t1160_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1160_0_0_0;
extern Il2CppType t1160_1_0_0;
struct t1160;
extern CustomAttributesCache t1160__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1160_DM = 
{
	NULL, NULL, t1160_ITIs, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1160_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary", "System.Collections", t1160_MIs, t1160_PIs, NULL, NULL, &t1160_TI, NULL, &t1160__CustomAttributeCache, &t1160_0_0_0, &t1160_1_0_0, &t1160_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 0, 0, 0, 0, 2, 0};
// Metadata Definition System.Collections.IDictionaryEnumerator
extern TypeInfo t1161_TI;
extern Il2CppType t1164_0_0_0;
extern void* RuntimeInvoker_t1164 (MethodInfo* method, void* obj, void** args);
MethodInfo m12000_MI = 
{
	"get_Entry", NULL, &t1161_TI, &t1164_0_0_0, RuntimeInvoker_t1164, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 2231, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5757_MI = 
{
	"get_Key", NULL, &t1161_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, false, 2232, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5756_MI = 
{
	"get_Value", NULL, &t1161_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 2, 0, false, false, 2233, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1161_MIs[] =
{
	&m12000_MI,
	&m5757_MI,
	&m5756_MI,
	NULL
};
extern MethodInfo m12000_MI;
static PropertyInfo t1161____Entry_PropertyInfo = 
{
	&t1161_TI, "Entry", &m12000_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5757_MI;
static PropertyInfo t1161____Key_PropertyInfo = 
{
	&t1161_TI, "Key", &m5757_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5756_MI;
static PropertyInfo t1161____Value_PropertyInfo = 
{
	&t1161_TI, "Value", &m5756_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1161_PIs[] =
{
	&t1161____Entry_PropertyInfo,
	&t1161____Key_PropertyInfo,
	&t1161____Value_PropertyInfo,
	NULL
};
extern Il2CppType t76_0_0_0;
static const Il2CppType* t1161_ITIs[] = 
{
	&t76_0_0_0,
};
void t1161_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1161__CustomAttributeCache = {
1,
NULL,
&t1161_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1161_0_0_0;
extern Il2CppType t1161_1_0_0;
struct t1161;
extern CustomAttributesCache t1161__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1161_DM = 
{
	NULL, NULL, t1161_ITIs, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1161_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionaryEnumerator", "System.Collections", t1161_MIs, t1161_PIs, NULL, NULL, &t1161_TI, NULL, &t1161__CustomAttributeCache, &t1161_0_0_0, &t1161_1_0_0, &t1161_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 3, 0, 0, 0, 0, 1, 0};
// Metadata Definition System.Collections.IEqualityComparer
extern TypeInfo t1172_TI;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1172_m12003_ParameterInfos[] = 
{
	{"x", 0, 134220716, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"y", 1, 134220717, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12003_MI = 
{
	"Equals", NULL, &t1172_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1172_m12003_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, false, 2234, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1172_m12001_ParameterInfos[] = 
{
	{"obj", 0, 134220718, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12001_MI = 
{
	"GetHashCode", NULL, &t1172_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1172_m12001_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, false, 2235, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1172_MIs[] =
{
	&m12003_MI,
	&m12001_MI,
	NULL
};
void t1172_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1172__CustomAttributeCache = {
1,
NULL,
&t1172_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1172_0_0_0;
extern Il2CppType t1172_1_0_0;
struct t1172;
extern CustomAttributesCache t1172__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1172_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1172_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer", "System.Collections", t1172_MIs, NULL, NULL, NULL, &t1172_TI, NULL, &t1172__CustomAttributeCache, &t1172_0_0_0, &t1172_1_0_0, &t1172_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Collections.IHashCodeProvider
extern TypeInfo t1171_TI;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1171_m12002_ParameterInfos[] = 
{
	{"obj", 0, 134220719, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12002_MI = 
{
	"GetHashCode", NULL, &t1171_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1171_m12002_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 2236, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1171_MIs[] =
{
	&m12002_MI,
	NULL
};
extern TypeInfo t618_TI;
#include "t618.h"
#include "t618MD.h"
extern MethodInfo m2994_MI;
void t1171_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m2994(tmp, il2cpp_codegen_string_new_wrapper("Please use IEqualityComparer instead."), &m2994_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1171__CustomAttributeCache = {
2,
NULL,
&t1171_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1171_0_0_0;
extern Il2CppType t1171_1_0_0;
struct t1171;
extern CustomAttributesCache t1171__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1171_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1171_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IHashCodeProvider", "System.Collections", t1171_MIs, NULL, NULL, NULL, &t1171_TI, NULL, &t1171__CustomAttributeCache, &t1171_0_0_0, &t1171_1_0_0, &t1171_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1685.h"
// Metadata Definition System.Collections.Queue/QueueEnumerator
extern TypeInfo t1685_TI;
#include "t1685MD.h"
extern Il2CppType t1686_0_0_0;
extern Il2CppType t1686_0_0_0;
static ParameterInfo t1685_m8528_ParameterInfos[] = 
{
	{"q", 0, 134220727, &EmptyCustomAttributesCache, &t1686_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8528_MI = 
{
	".ctor", (methodPointerType)&m8528, &t1685_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1685_m8528_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2251, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8529_MI = 
{
	"get_Current", (methodPointerType)&m8529, &t1685_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 2252, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8530_MI = 
{
	"MoveNext", (methodPointerType)&m8530, &t1685_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2253, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1685_MIs[] =
{
	&m8528_MI,
	&m8529_MI,
	&m8530_MI,
	NULL
};
extern Il2CppType t1686_0_0_1;
FieldInfo t1685_f0_FieldInfo = 
{
	"queue", &t1686_0_0_1, &t1685_TI, offsetof(t1685, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1685_f1_FieldInfo = 
{
	"_version", &t125_0_0_1, &t1685_TI, offsetof(t1685, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1685_f2_FieldInfo = 
{
	"current", &t125_0_0_1, &t1685_TI, offsetof(t1685, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1685_FIs[] =
{
	&t1685_f0_FieldInfo,
	&t1685_f1_FieldInfo,
	&t1685_f2_FieldInfo,
	NULL
};
extern MethodInfo m8529_MI;
static PropertyInfo t1685____Current_PropertyInfo = 
{
	&t1685_TI, "Current", &m8529_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1685_PIs[] =
{
	&t1685____Current_PropertyInfo,
	NULL
};
extern MethodInfo m671_MI;
extern MethodInfo m646_MI;
extern MethodInfo m672_MI;
extern MethodInfo m673_MI;
extern MethodInfo m8530_MI;
static Il2CppMethodReference t1685_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8529_MI,
	&m8530_MI,
	&m8529_MI,
	&m8530_MI,
};
static bool t1685_VTIGM[] =
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
extern Il2CppType t622_0_0_0;
static const Il2CppType* t1685_ITIs[] = 
{
	&t76_0_0_0,
	&t622_0_0_0,
};
static Il2CppInterfaceOffsetPair t1685_IOs[] = 
{
	{ &t76_0_0_0, 4},
	{ &t622_0_0_0, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1685_0_0_0;
extern Il2CppType t1685_1_0_0;
extern TypeInfo t1686_TI;
struct t1685;
const Il2CppTypeDefinitionMetadata t1685_DM = 
{
	&t1686_0_0_0, NULL, t1685_ITIs, t1685_IOs, &t9_0_0_0, t1685_VT, t1685_VTIGM, NULL};
TypeInfo t1685_TI = 
{
	&g_mscorlib_dll_Image, NULL, "QueueEnumerator", "", t1685_MIs, t1685_PIs, t1685_FIs, NULL, &t1685_TI, NULL, &EmptyCustomAttributesCache, &t1685_0_0_0, &t1685_1_0_0, &t1685_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1685), sizeof (t1685), 0, -1, 0, 0, -1, 1056771, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 1, 3, 0, 0, 8, 2, 2};
#include "t1686.h"
// Metadata Definition System.Collections.Queue
#include "t1686MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8531_MI = 
{
	".ctor", (methodPointerType)&m8531, &t1686_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2237, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1686_m8532_ParameterInfos[] = 
{
	{"capacity", 0, 134220720, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8532_MI = 
{
	".ctor", (methodPointerType)&m8532, &t1686_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1686_m8532_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2238, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t998_0_0_0;
static ParameterInfo t1686_m8533_ParameterInfos[] = 
{
	{"col", 0, 134220721, &EmptyCustomAttributesCache, &t998_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8533_MI = 
{
	".ctor", (methodPointerType)&m8533, &t1686_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1686_m8533_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2239, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t1686_m8534_ParameterInfos[] = 
{
	{"capacity", 0, 134220722, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"growFactor", 1, 134220723, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m8534_MI = 
{
	".ctor", (methodPointerType)&m8534, &t1686_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t123, t1686_m8534_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2240, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8535_MI = 
{
	"get_Count", (methodPointerType)&m8535, &t1686_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 2241, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8536_MI = 
{
	"get_IsSynchronized", (methodPointerType)&m8536, &t1686_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 10, 0, false, false, 2242, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8537_MI = 
{
	"get_SyncRoot", (methodPointerType)&m8537, &t1686_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 2243, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t121_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1686_m8538_ParameterInfos[] = 
{
	{"array", 0, 134220724, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"index", 1, 134220725, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8538_MI = 
{
	"CopyTo", (methodPointerType)&m8538, &t1686_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1686_m8538_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 12, 2, false, false, 2244, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t76_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8539_MI = 
{
	"GetEnumerator", (methodPointerType)&m8539, &t1686_TI, &t76_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 13, 0, false, false, 2245, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8540_MI = 
{
	"Clear", (methodPointerType)&m8540, &t1686_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 14, 0, false, false, 2246, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8541_MI = 
{
	"Dequeue", (methodPointerType)&m8541, &t1686_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 15, 0, false, false, 2247, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1686_m8542_ParameterInfos[] = 
{
	{"obj", 0, 134220726, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8542_MI = 
{
	"Enqueue", (methodPointerType)&m8542, &t1686_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1686_m8542_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 16, 1, false, false, 2248, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8543_MI = 
{
	"Peek", (methodPointerType)&m8543, &t1686_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 17, 0, false, false, 2249, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8544_MI = 
{
	"grow", (methodPointerType)&m8544, &t1686_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2250, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1686_MIs[] =
{
	&m8531_MI,
	&m8532_MI,
	&m8533_MI,
	&m8534_MI,
	&m8535_MI,
	&m8536_MI,
	&m8537_MI,
	&m8538_MI,
	&m8539_MI,
	&m8540_MI,
	&m8541_MI,
	&m8542_MI,
	&m8543_MI,
	&m8544_MI,
	NULL
};
extern Il2CppType t158_0_0_1;
FieldInfo t1686_f0_FieldInfo = 
{
	"_array", &t158_0_0_1, &t1686_TI, offsetof(t1686, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1686_f1_FieldInfo = 
{
	"_head", &t125_0_0_1, &t1686_TI, offsetof(t1686, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1686_f2_FieldInfo = 
{
	"_size", &t125_0_0_1, &t1686_TI, offsetof(t1686, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1686_f3_FieldInfo = 
{
	"_tail", &t125_0_0_1, &t1686_TI, offsetof(t1686, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1686_f4_FieldInfo = 
{
	"_growFactor", &t125_0_0_1, &t1686_TI, offsetof(t1686, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1686_f5_FieldInfo = 
{
	"_version", &t125_0_0_1, &t1686_TI, offsetof(t1686, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1686_FIs[] =
{
	&t1686_f0_FieldInfo,
	&t1686_f1_FieldInfo,
	&t1686_f2_FieldInfo,
	&t1686_f3_FieldInfo,
	&t1686_f4_FieldInfo,
	&t1686_f5_FieldInfo,
	NULL
};
extern MethodInfo m8535_MI;
static PropertyInfo t1686____Count_PropertyInfo = 
{
	&t1686_TI, "Count", &m8535_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8536_MI;
static PropertyInfo t1686____IsSynchronized_PropertyInfo = 
{
	&t1686_TI, "IsSynchronized", &m8536_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8537_MI;
static PropertyInfo t1686____SyncRoot_PropertyInfo = 
{
	&t1686_TI, "SyncRoot", &m8537_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1686_PIs[] =
{
	&t1686____Count_PropertyInfo,
	&t1686____IsSynchronized_PropertyInfo,
	&t1686____SyncRoot_PropertyInfo,
	NULL
};
static const Il2CppType* t1686_TI__nestedTypes[1] =
{
	&t1685_0_0_0,
};
extern MethodInfo m8539_MI;
extern MethodInfo m8538_MI;
extern MethodInfo m8540_MI;
extern MethodInfo m8541_MI;
extern MethodInfo m8542_MI;
extern MethodInfo m8543_MI;
static Il2CppMethodReference t1686_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8539_MI,
	&m8535_MI,
	&m8536_MI,
	&m8537_MI,
	&m8538_MI,
	&m8535_MI,
	&m8536_MI,
	&m8537_MI,
	&m8538_MI,
	&m8539_MI,
	&m8540_MI,
	&m8541_MI,
	&m8542_MI,
	&m8543_MI,
};
static bool t1686_VTIGM[] =
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
static const Il2CppType* t1686_ITIs[] = 
{
	&t665_0_0_0,
	&t622_0_0_0,
	&t998_0_0_0,
};
static Il2CppInterfaceOffsetPair t1686_IOs[] = 
{
	{ &t665_0_0_0, 4},
	{ &t622_0_0_0, 5},
	{ &t998_0_0_0, 5},
};
extern TypeInfo t1697_TI;
#include "t1697.h"
#include "t1697MD.h"
extern MethodInfo m8583_MI;
extern TypeInfo t1676_TI;
extern Il2CppType t1676_0_0_0;
#include "t1676.h"
extern TypeInfo t1695_TI;
#include "t1695.h"
#include "t1695MD.h"
extern MethodInfo m8580_MI;
void t1686_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1697 * tmp;
		tmp = (t1697 *)il2cpp_codegen_object_new (&t1697_TI);
		m8583(tmp, il2cpp_codegen_type_get_object(&t1676_0_0_0), &m8583_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1695 * tmp;
		tmp = (t1695 *)il2cpp_codegen_object_new (&t1695_TI);
		m8580(tmp, il2cpp_codegen_string_new_wrapper("Count={Count}"), &m8580_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1686__CustomAttributeCache = {
3,
NULL,
&t1686_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1686_1_0_0;
struct t1686;
extern CustomAttributesCache t1686__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1686_DM = 
{
	NULL, t1686_TI__nestedTypes, t1686_ITIs, t1686_IOs, &t9_0_0_0, t1686_VT, t1686_VTIGM, NULL};
TypeInfo t1686_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Queue", "System.Collections", t1686_MIs, t1686_PIs, t1686_FIs, NULL, &t1686_TI, NULL, &t1686__CustomAttributeCache, &t1686_0_0_0, &t1686_1_0_0, &t1686_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1686), sizeof (t1686), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 14, 3, 6, 0, 1, 18, 3, 3};
#include "t1687.h"
// Metadata Definition System.Collections.SortedList/Slot
extern TypeInfo t1687_TI;
#include "t1687MD.h"
static MethodInfo* t1687_MIs[] =
{
	NULL
};
extern Il2CppType t9_0_0_3;
FieldInfo t1687_f0_FieldInfo = 
{
	"key", &t9_0_0_3, &t1687_TI, offsetof(t1687, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_3;
FieldInfo t1687_f1_FieldInfo = 
{
	"value", &t9_0_0_3, &t1687_TI, offsetof(t1687, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1687_FIs[] =
{
	&t1687_f0_FieldInfo,
	&t1687_f1_FieldInfo,
	NULL
};
extern MethodInfo m680_MI;
extern MethodInfo m681_MI;
extern MethodInfo m682_MI;
static Il2CppMethodReference t1687_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1687_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1687_0_0_0;
extern Il2CppType t1687_1_0_0;
extern Il2CppType t117_0_0_0;
extern TypeInfo t1344_TI;
extern Il2CppType t1344_0_0_0;
const Il2CppTypeDefinitionMetadata t1687_DM = 
{
	&t1344_0_0_0, NULL, NULL, NULL, &t117_0_0_0, t1687_VT, t1687_VTIGM, NULL};
TypeInfo t1687_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Slot", "", t1687_MIs, NULL, t1687_FIs, NULL, &t1687_TI, NULL, &EmptyCustomAttributesCache, &t1687_0_0_0, &t1687_1_0_0, &t1687_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1687)+ sizeof (Il2CppObject), sizeof (t1687)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057037, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 2, 0, 0, 4, 0, 0};
#include "t1688.h"
// Metadata Definition System.Collections.SortedList/EnumeratorMode
extern TypeInfo t1688_TI;
#include "t1688MD.h"
static MethodInfo* t1688_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1688_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1688_TI, offsetof(t1688, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1688_0_0_32854;
FieldInfo t1688_f2_FieldInfo = 
{
	"KEY_MODE", &t1688_0_0_32854, &t1688_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1688_0_0_32854;
FieldInfo t1688_f3_FieldInfo = 
{
	"VALUE_MODE", &t1688_0_0_32854, &t1688_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1688_0_0_32854;
FieldInfo t1688_f4_FieldInfo = 
{
	"ENTRY_MODE", &t1688_0_0_32854, &t1688_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1688_FIs[] =
{
	&t1688_f1_FieldInfo,
	&t1688_f2_FieldInfo,
	&t1688_f3_FieldInfo,
	&t1688_f4_FieldInfo,
	NULL
};
static const int32_t t1688_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1688_f2_DefaultValue = 
{
	&t1688_f2_FieldInfo, { (char*)&t1688_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1688_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1688_f3_DefaultValue = 
{
	&t1688_f3_FieldInfo, { (char*)&t1688_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1688_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1688_f4_DefaultValue = 
{
	&t1688_f4_FieldInfo, { (char*)&t1688_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1688_FDVs[] = 
{
	&t1688_f2_DefaultValue,
	&t1688_f3_DefaultValue,
	&t1688_f4_DefaultValue,
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
static Il2CppMethodReference t1688_VT[] =
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
static bool t1688_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1688_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1688_0_0_0;
extern Il2CppType t1688_1_0_0;
extern Il2CppType t8_0_0_0;
#include "t125.h"
extern TypeInfo t125_TI;
const Il2CppTypeDefinitionMetadata t1688_DM = 
{
	&t1344_0_0_0, NULL, NULL, t1688_IOs, &t8_0_0_0, t1688_VT, t1688_VTIGM, NULL};
TypeInfo t1688_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EnumeratorMode", "", t1688_MIs, NULL, t1688_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t1688_0_0_0, &t1688_1_0_0, &t1688_DM, NULL, NULL, NULL, t1688_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1688)+ sizeof (Il2CppObject), sizeof (t1688)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 259, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1689.h"
// Metadata Definition System.Collections.SortedList/Enumerator
extern TypeInfo t1689_TI;
#include "t1689MD.h"
extern Il2CppType t1344_0_0_0;
extern Il2CppType t1688_0_0_0;
static ParameterInfo t1689_m8545_ParameterInfos[] = 
{
	{"host", 0, 134220754, &EmptyCustomAttributesCache, &t1344_0_0_0},
	{"mode", 1, 134220755, &EmptyCustomAttributesCache, &t1688_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8545_MI = 
{
	".ctor", (methodPointerType)&m8545, &t1689_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1689_m8545_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2282, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8546_MI = 
{
	".cctor", (methodPointerType)&m8546, &t1689_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2283, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8547_MI = 
{
	"Reset", (methodPointerType)&m8547, &t1689_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 486, 0, 9, 0, false, false, 2284, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8548_MI = 
{
	"MoveNext", (methodPointerType)&m8548, &t1689_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 2285, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1164_0_0_0;
extern void* RuntimeInvoker_t1164 (MethodInfo* method, void* obj, void** args);
MethodInfo m8549_MI = 
{
	"get_Entry", (methodPointerType)&m8549, &t1689_TI, &t1164_0_0_0, RuntimeInvoker_t1164, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 2286, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8550_MI = 
{
	"get_Key", (methodPointerType)&m8550, &t1689_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 2287, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8551_MI = 
{
	"get_Value", (methodPointerType)&m8551, &t1689_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 8, 0, false, false, 2288, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8552_MI = 
{
	"get_Current", (methodPointerType)&m8552, &t1689_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 2289, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1689_MIs[] =
{
	&m8545_MI,
	&m8546_MI,
	&m8547_MI,
	&m8548_MI,
	&m8549_MI,
	&m8550_MI,
	&m8551_MI,
	&m8552_MI,
	NULL
};
extern Il2CppType t1344_0_0_1;
FieldInfo t1689_f0_FieldInfo = 
{
	"host", &t1344_0_0_1, &t1689_TI, offsetof(t1689, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1689_f1_FieldInfo = 
{
	"stamp", &t125_0_0_1, &t1689_TI, offsetof(t1689, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1689_f2_FieldInfo = 
{
	"pos", &t125_0_0_1, &t1689_TI, offsetof(t1689, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1689_f3_FieldInfo = 
{
	"size", &t125_0_0_1, &t1689_TI, offsetof(t1689, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1688_0_0_1;
FieldInfo t1689_f4_FieldInfo = 
{
	"mode", &t1688_0_0_1, &t1689_TI, offsetof(t1689, f4), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t1689_f5_FieldInfo = 
{
	"currentKey", &t9_0_0_1, &t1689_TI, offsetof(t1689, f5), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t1689_f6_FieldInfo = 
{
	"currentValue", &t9_0_0_1, &t1689_TI, offsetof(t1689, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1689_f7_FieldInfo = 
{
	"invalid", &t124_0_0_1, &t1689_TI, offsetof(t1689, f7), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_49;
FieldInfo t1689_f8_FieldInfo = 
{
	"xstr", &t2_0_0_49, &t1689_TI, offsetof(t1689_SFs, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1689_FIs[] =
{
	&t1689_f0_FieldInfo,
	&t1689_f1_FieldInfo,
	&t1689_f2_FieldInfo,
	&t1689_f3_FieldInfo,
	&t1689_f4_FieldInfo,
	&t1689_f5_FieldInfo,
	&t1689_f6_FieldInfo,
	&t1689_f7_FieldInfo,
	&t1689_f8_FieldInfo,
	NULL
};
extern MethodInfo m8549_MI;
static PropertyInfo t1689____Entry_PropertyInfo = 
{
	&t1689_TI, "Entry", &m8549_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8550_MI;
static PropertyInfo t1689____Key_PropertyInfo = 
{
	&t1689_TI, "Key", &m8550_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8551_MI;
static PropertyInfo t1689____Value_PropertyInfo = 
{
	&t1689_TI, "Value", &m8551_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8552_MI;
static PropertyInfo t1689____Current_PropertyInfo = 
{
	&t1689_TI, "Current", &m8552_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1689_PIs[] =
{
	&t1689____Entry_PropertyInfo,
	&t1689____Key_PropertyInfo,
	&t1689____Value_PropertyInfo,
	&t1689____Current_PropertyInfo,
	NULL
};
extern MethodInfo m8548_MI;
extern MethodInfo m8547_MI;
static Il2CppMethodReference t1689_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8552_MI,
	&m8548_MI,
	&m8549_MI,
	&m8550_MI,
	&m8551_MI,
	&m8547_MI,
};
static bool t1689_VTIGM[] =
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
};
static const Il2CppType* t1689_ITIs[] = 
{
	&t76_0_0_0,
	&t622_0_0_0,
	&t1161_0_0_0,
};
static Il2CppInterfaceOffsetPair t1689_IOs[] = 
{
	{ &t76_0_0_0, 4},
	{ &t622_0_0_0, 6},
	{ &t1161_0_0_0, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1689_0_0_0;
extern Il2CppType t1689_1_0_0;
struct t1689;
const Il2CppTypeDefinitionMetadata t1689_DM = 
{
	&t1344_0_0_0, NULL, t1689_ITIs, t1689_IOs, &t9_0_0_0, t1689_VT, t1689_VTIGM, NULL};
TypeInfo t1689_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1689_MIs, t1689_PIs, t1689_FIs, NULL, &t1689_TI, NULL, &EmptyCustomAttributesCache, &t1689_0_0_0, &t1689_1_0_0, &t1689_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1689), sizeof (t1689), 0, -1, sizeof(t1689_SFs), 0, -1, 1048835, 0, 0, false, false, false, false, false, false, false, false, true, false, 8, 4, 9, 0, 0, 10, 3, 3};
#include "t1344.h"
// Metadata Definition System.Collections.SortedList
#include "t1344MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8553_MI = 
{
	".ctor", (methodPointerType)&m8553, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2254, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1344_m5758_ParameterInfos[] = 
{
	{"initialCapacity", 0, 134220728, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5758_MI = 
{
	".ctor", (methodPointerType)&m5758, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1344_m5758_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2255, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1165_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1344_m8554_ParameterInfos[] = 
{
	{"comparer", 0, 134220729, &EmptyCustomAttributesCache, &t1165_0_0_0},
	{"capacity", 1, 134220730, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8554_MI = 
{
	".ctor", (methodPointerType)&m8554, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1344_m8554_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2256, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8555_MI = 
{
	".cctor", (methodPointerType)&m8555, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2257, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t76_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8556_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8556, &t1344_TI, &t76_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 2258, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5762_MI = 
{
	"get_Count", (methodPointerType)&m5762, &t1344_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 15, 0, false, false, 2259, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8557_MI = 
{
	"get_IsSynchronized", (methodPointerType)&m8557, &t1344_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 16, 0, false, false, 2260, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8558_MI = 
{
	"get_SyncRoot", (methodPointerType)&m8558, &t1344_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 17, 0, false, false, 2261, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8559_MI = 
{
	"get_IsFixedSize", (methodPointerType)&m8559, &t1344_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 18, 0, false, false, 2262, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8560_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m8560, &t1344_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 19, 0, false, false, 2263, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1344_m8561_ParameterInfos[] = 
{
	{"key", 0, 134220731, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8561_MI = 
{
	"get_Item", (methodPointerType)&m8561, &t1344_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1344_m8561_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 20, 1, false, false, 2264, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1344_m8562_ParameterInfos[] = 
{
	{"key", 0, 134220732, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"value", 1, 134220733, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8562_MI = 
{
	"set_Item", (methodPointerType)&m8562, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1344_m8562_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 21, 2, false, false, 2265, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8563_MI = 
{
	"get_Capacity", (methodPointerType)&m8563, &t1344_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 22, 0, false, false, 2266, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1344_m8564_ParameterInfos[] = 
{
	{"value", 0, 134220734, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8564_MI = 
{
	"set_Capacity", (methodPointerType)&m8564, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1344_m8564_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 23, 1, false, false, 2267, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1344_m5760_ParameterInfos[] = 
{
	{"key", 0, 134220735, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"value", 1, 134220736, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5760_MI = 
{
	"Add", (methodPointerType)&m5760, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1344_m5760_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 24, 2, false, false, 2268, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1344_m8565_ParameterInfos[] = 
{
	{"key", 0, 134220737, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8565_MI = 
{
	"Contains", (methodPointerType)&m8565, &t1344_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1344_m8565_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 1, false, false, 2269, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1161_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8566_MI = 
{
	"GetEnumerator", (methodPointerType)&m8566, &t1344_TI, &t1161_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 26, 0, false, false, 2270, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1344_m8567_ParameterInfos[] = 
{
	{"key", 0, 134220738, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8567_MI = 
{
	"Remove", (methodPointerType)&m8567, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1344_m8567_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 27, 1, false, false, 2271, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1344_m8568_ParameterInfos[] = 
{
	{"array", 0, 134220739, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"arrayIndex", 1, 134220740, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8568_MI = 
{
	"CopyTo", (methodPointerType)&m8568, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1344_m8568_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 28, 2, false, false, 2272, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1344_m8569_ParameterInfos[] = 
{
	{"index", 0, 134220741, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8569_MI = 
{
	"RemoveAt", (methodPointerType)&m8569, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1344_m8569_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 29, 1, false, false, 2273, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1344_m8570_ParameterInfos[] = 
{
	{"key", 0, 134220742, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8570_MI = 
{
	"IndexOfKey", (methodPointerType)&m8570, &t1344_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1344_m8570_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 30, 1, false, false, 2274, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1344_m5759_ParameterInfos[] = 
{
	{"key", 0, 134220743, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5759_MI = 
{
	"ContainsKey", (methodPointerType)&m5759, &t1344_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1344_m5759_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 31, 1, false, false, 2275, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1344_m5761_ParameterInfos[] = 
{
	{"index", 0, 134220744, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5761_MI = 
{
	"GetByIndex", (methodPointerType)&m5761, &t1344_TI, &t9_0_0_0, RuntimeInvoker_t9_t125, t1344_m5761_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 32, 1, false, false, 2276, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1344_m8571_ParameterInfos[] = 
{
	{"n", 0, 134220745, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"free", 1, 134220746, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8571_MI = 
{
	"EnsureCapacity", (methodPointerType)&m8571, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t125, t1344_m8571_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2277, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1344_m8572_ParameterInfos[] = 
{
	{"key", 0, 134220747, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"value", 1, 134220748, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"overwrite", 2, 134220749, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8572_MI = 
{
	"PutImpl", (methodPointerType)&m8572, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1344_m8572_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2278, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1344_m8573_ParameterInfos[] = 
{
	{"key", 0, 134220750, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8573_MI = 
{
	"GetImpl", (methodPointerType)&m8573, &t1344_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1344_m8573_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2279, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1344_m8574_ParameterInfos[] = 
{
	{"capacity", 0, 134220751, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"forceSize", 1, 134220752, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8574_MI = 
{
	"InitTable", (methodPointerType)&m8574, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t1344_m8574_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2280, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1344_m8575_ParameterInfos[] = 
{
	{"key", 0, 134220753, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8575_MI = 
{
	"Find", (methodPointerType)&m8575, &t1344_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1344_m8575_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2281, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1344_MIs[] =
{
	&m8553_MI,
	&m5758_MI,
	&m8554_MI,
	&m8555_MI,
	&m8556_MI,
	&m5762_MI,
	&m8557_MI,
	&m8558_MI,
	&m8559_MI,
	&m8560_MI,
	&m8561_MI,
	&m8562_MI,
	&m8563_MI,
	&m8564_MI,
	&m5760_MI,
	&m8565_MI,
	&m8566_MI,
	&m8567_MI,
	&m8568_MI,
	&m8569_MI,
	&m8570_MI,
	&m5759_MI,
	&m5761_MI,
	&m8571_MI,
	&m8572_MI,
	&m8573_MI,
	&m8574_MI,
	&m8575_MI,
	NULL
};
extern Il2CppType t125_0_0_49;
FieldInfo t1344_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t125_0_0_49, &t1344_TI, offsetof(t1344_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1344_f1_FieldInfo = 
{
	"inUse", &t125_0_0_1, &t1344_TI, offsetof(t1344, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1344_f2_FieldInfo = 
{
	"modificationCount", &t125_0_0_1, &t1344_TI, offsetof(t1344, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1690_0_0_1;
FieldInfo t1344_f3_FieldInfo = 
{
	"table", &t1690_0_0_1, &t1344_TI, offsetof(t1344, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1165_0_0_1;
FieldInfo t1344_f4_FieldInfo = 
{
	"comparer", &t1165_0_0_1, &t1344_TI, offsetof(t1344, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1344_f5_FieldInfo = 
{
	"defaultCapacity", &t125_0_0_1, &t1344_TI, offsetof(t1344, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1344_FIs[] =
{
	&t1344_f0_FieldInfo,
	&t1344_f1_FieldInfo,
	&t1344_f2_FieldInfo,
	&t1344_f3_FieldInfo,
	&t1344_f4_FieldInfo,
	&t1344_f5_FieldInfo,
	NULL
};
extern MethodInfo m5762_MI;
static PropertyInfo t1344____Count_PropertyInfo = 
{
	&t1344_TI, "Count", &m5762_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8557_MI;
static PropertyInfo t1344____IsSynchronized_PropertyInfo = 
{
	&t1344_TI, "IsSynchronized", &m8557_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8558_MI;
static PropertyInfo t1344____SyncRoot_PropertyInfo = 
{
	&t1344_TI, "SyncRoot", &m8558_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8559_MI;
static PropertyInfo t1344____IsFixedSize_PropertyInfo = 
{
	&t1344_TI, "IsFixedSize", &m8559_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8560_MI;
static PropertyInfo t1344____IsReadOnly_PropertyInfo = 
{
	&t1344_TI, "IsReadOnly", &m8560_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8561_MI;
extern MethodInfo m8562_MI;
static PropertyInfo t1344____Item_PropertyInfo = 
{
	&t1344_TI, "Item", &m8561_MI, &m8562_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8563_MI;
extern MethodInfo m8564_MI;
static PropertyInfo t1344____Capacity_PropertyInfo = 
{
	&t1344_TI, "Capacity", &m8563_MI, &m8564_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1344_PIs[] =
{
	&t1344____Count_PropertyInfo,
	&t1344____IsSynchronized_PropertyInfo,
	&t1344____SyncRoot_PropertyInfo,
	&t1344____IsFixedSize_PropertyInfo,
	&t1344____IsReadOnly_PropertyInfo,
	&t1344____Item_PropertyInfo,
	&t1344____Capacity_PropertyInfo,
	NULL
};
static const Il2CppType* t1344_TI__nestedTypes[3] =
{
	&t1687_0_0_0,
	&t1688_0_0_0,
	&t1689_0_0_0,
};
extern MethodInfo m8556_MI;
extern MethodInfo m8568_MI;
extern MethodInfo m5760_MI;
extern MethodInfo m8565_MI;
extern MethodInfo m8566_MI;
extern MethodInfo m8567_MI;
extern MethodInfo m8569_MI;
extern MethodInfo m8570_MI;
extern MethodInfo m5759_MI;
extern MethodInfo m5761_MI;
static Il2CppMethodReference t1344_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8556_MI,
	&m5762_MI,
	&m8557_MI,
	&m8558_MI,
	&m8568_MI,
	&m8561_MI,
	&m8562_MI,
	&m5760_MI,
	&m8565_MI,
	&m8566_MI,
	&m8567_MI,
	&m5762_MI,
	&m8557_MI,
	&m8558_MI,
	&m8559_MI,
	&m8560_MI,
	&m8561_MI,
	&m8562_MI,
	&m8563_MI,
	&m8564_MI,
	&m5760_MI,
	&m8565_MI,
	&m8566_MI,
	&m8567_MI,
	&m8568_MI,
	&m8569_MI,
	&m8570_MI,
	&m5759_MI,
	&m5761_MI,
};
static bool t1344_VTIGM[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1344_ITIs[] = 
{
	&t665_0_0_0,
	&t622_0_0_0,
	&t998_0_0_0,
	&t1160_0_0_0,
};
static Il2CppInterfaceOffsetPair t1344_IOs[] = 
{
	{ &t665_0_0_0, 4},
	{ &t622_0_0_0, 5},
	{ &t998_0_0_0, 5},
	{ &t1160_0_0_0, 9},
};
void t1344_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t666 * tmp;
		tmp = (t666 *)il2cpp_codegen_object_new (&t666_TI);
		m3103(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m3103_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1695 * tmp;
		tmp = (t1695 *)il2cpp_codegen_object_new (&t1695_TI);
		m8580(tmp, il2cpp_codegen_string_new_wrapper("Count={Count}"), &m8580_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1344__CustomAttributeCache = {
3,
NULL,
&t1344_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1344_1_0_0;
struct t1344;
extern CustomAttributesCache t1344__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1344_DM = 
{
	NULL, t1344_TI__nestedTypes, t1344_ITIs, t1344_IOs, &t9_0_0_0, t1344_VT, t1344_VTIGM, NULL};
TypeInfo t1344_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SortedList", "System.Collections", t1344_MIs, t1344_PIs, t1344_FIs, NULL, &t1344_TI, NULL, &t1344__CustomAttributeCache, &t1344_0_0_0, &t1344_1_0_0, &t1344_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1344), sizeof (t1344), 0, -1, sizeof(t1344_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 28, 7, 6, 0, 3, 33, 4, 4};
#include "t1691.h"
// Metadata Definition System.Collections.Stack/Enumerator
extern TypeInfo t1691_TI;
#include "t1691MD.h"
extern Il2CppType t877_0_0_0;
extern Il2CppType t877_0_0_0;
static ParameterInfo t1691_m8576_ParameterInfos[] = 
{
	{"s", 0, 134220760, &EmptyCustomAttributesCache, &t877_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8576_MI = 
{
	".ctor", (methodPointerType)&m8576, &t1691_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1691_m8576_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2301, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8577_MI = 
{
	"get_Current", (methodPointerType)&m8577, &t1691_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 2302, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8578_MI = 
{
	"MoveNext", (methodPointerType)&m8578, &t1691_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2303, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1691_MIs[] =
{
	&m8576_MI,
	&m8577_MI,
	&m8578_MI,
	NULL
};
extern Il2CppType t877_0_0_1;
FieldInfo t1691_f0_FieldInfo = 
{
	"stack", &t877_0_0_1, &t1691_TI, offsetof(t1691, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1691_f1_FieldInfo = 
{
	"modCount", &t125_0_0_1, &t1691_TI, offsetof(t1691, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1691_f2_FieldInfo = 
{
	"current", &t125_0_0_1, &t1691_TI, offsetof(t1691, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1691_FIs[] =
{
	&t1691_f0_FieldInfo,
	&t1691_f1_FieldInfo,
	&t1691_f2_FieldInfo,
	NULL
};
extern MethodInfo m8577_MI;
static PropertyInfo t1691____Current_PropertyInfo = 
{
	&t1691_TI, "Current", &m8577_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1691_PIs[] =
{
	&t1691____Current_PropertyInfo,
	NULL
};
extern MethodInfo m8578_MI;
static Il2CppMethodReference t1691_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8577_MI,
	&m8578_MI,
	&m8577_MI,
	&m8578_MI,
};
static bool t1691_VTIGM[] =
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
static const Il2CppType* t1691_ITIs[] = 
{
	&t76_0_0_0,
	&t622_0_0_0,
};
static Il2CppInterfaceOffsetPair t1691_IOs[] = 
{
	{ &t76_0_0_0, 4},
	{ &t622_0_0_0, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1691_0_0_0;
extern Il2CppType t1691_1_0_0;
extern TypeInfo t877_TI;
struct t1691;
const Il2CppTypeDefinitionMetadata t1691_DM = 
{
	&t877_0_0_0, NULL, t1691_ITIs, t1691_IOs, &t9_0_0_0, t1691_VT, t1691_VTIGM, NULL};
TypeInfo t1691_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1691_MIs, t1691_PIs, t1691_FIs, NULL, &t1691_TI, NULL, &EmptyCustomAttributesCache, &t1691_0_0_0, &t1691_1_0_0, &t1691_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1691), sizeof (t1691), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 1, 3, 0, 0, 8, 2, 2};
#include "t877.h"
// Metadata Definition System.Collections.Stack
#include "t877MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m4494_MI = 
{
	".ctor", (methodPointerType)&m4494, &t877_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2290, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t877_m8579_ParameterInfos[] = 
{
	{"ncapacity", 0, 134220756, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8579_MI = 
{
	"Resize", (methodPointerType)&m8579, &t877_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t877_m8579_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2291, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4664_MI = 
{
	"get_Count", (methodPointerType)&m4664, &t877_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 2292, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m4665_MI = 
{
	"get_IsSynchronized", (methodPointerType)&m4665, &t877_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 10, 0, false, false, 2293, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4666_MI = 
{
	"get_SyncRoot", (methodPointerType)&m4666, &t877_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 2294, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m4236_MI = 
{
	"Clear", (methodPointerType)&m4236, &t877_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 12, 0, false, false, 2295, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t877_m4667_ParameterInfos[] = 
{
	{"array", 0, 134220757, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"index", 1, 134220758, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4667_MI = 
{
	"CopyTo", (methodPointerType)&m4667, &t877_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t877_m4667_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 2, false, false, 2296, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t76_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4663_MI = 
{
	"GetEnumerator", (methodPointerType)&m4663, &t877_TI, &t76_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 14, 0, false, false, 2297, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4668_MI = 
{
	"Peek", (methodPointerType)&m4668, &t877_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 15, 0, false, false, 2298, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4669_MI = 
{
	"Pop", (methodPointerType)&m4669, &t877_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 16, 0, false, false, 2299, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t877_m4232_ParameterInfos[] = 
{
	{"obj", 0, 134220759, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4232_MI = 
{
	"Push", (methodPointerType)&m4232, &t877_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t877_m4232_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 17, 1, false, false, 2300, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t877_MIs[] =
{
	&m4494_MI,
	&m8579_MI,
	&m4664_MI,
	&m4665_MI,
	&m4666_MI,
	&m4236_MI,
	&m4667_MI,
	&m4663_MI,
	&m4668_MI,
	&m4669_MI,
	&m4232_MI,
	NULL
};
extern Il2CppType t158_0_0_1;
FieldInfo t877_f0_FieldInfo = 
{
	"contents", &t158_0_0_1, &t877_TI, offsetof(t877, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t877_f1_FieldInfo = 
{
	"current", &t125_0_0_1, &t877_TI, offsetof(t877, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t877_f2_FieldInfo = 
{
	"count", &t125_0_0_1, &t877_TI, offsetof(t877, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t877_f3_FieldInfo = 
{
	"capacity", &t125_0_0_1, &t877_TI, offsetof(t877, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t877_f4_FieldInfo = 
{
	"modCount", &t125_0_0_1, &t877_TI, offsetof(t877, f4), &EmptyCustomAttributesCache};
static FieldInfo* t877_FIs[] =
{
	&t877_f0_FieldInfo,
	&t877_f1_FieldInfo,
	&t877_f2_FieldInfo,
	&t877_f3_FieldInfo,
	&t877_f4_FieldInfo,
	NULL
};
extern MethodInfo m4664_MI;
static PropertyInfo t877____Count_PropertyInfo = 
{
	&t877_TI, "Count", &m4664_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m4665_MI;
static PropertyInfo t877____IsSynchronized_PropertyInfo = 
{
	&t877_TI, "IsSynchronized", &m4665_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m4666_MI;
static PropertyInfo t877____SyncRoot_PropertyInfo = 
{
	&t877_TI, "SyncRoot", &m4666_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t877_PIs[] =
{
	&t877____Count_PropertyInfo,
	&t877____IsSynchronized_PropertyInfo,
	&t877____SyncRoot_PropertyInfo,
	NULL
};
static const Il2CppType* t877_TI__nestedTypes[1] =
{
	&t1691_0_0_0,
};
extern MethodInfo m4663_MI;
extern MethodInfo m4667_MI;
extern MethodInfo m4236_MI;
extern MethodInfo m4668_MI;
extern MethodInfo m4669_MI;
extern MethodInfo m4232_MI;
static Il2CppMethodReference t877_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m4663_MI,
	&m4664_MI,
	&m4665_MI,
	&m4666_MI,
	&m4667_MI,
	&m4664_MI,
	&m4665_MI,
	&m4666_MI,
	&m4236_MI,
	&m4667_MI,
	&m4663_MI,
	&m4668_MI,
	&m4669_MI,
	&m4232_MI,
};
static bool t877_VTIGM[] =
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
static const Il2CppType* t877_ITIs[] = 
{
	&t665_0_0_0,
	&t622_0_0_0,
	&t998_0_0_0,
};
static Il2CppInterfaceOffsetPair t877_IOs[] = 
{
	{ &t665_0_0_0, 4},
	{ &t622_0_0_0, 5},
	{ &t998_0_0_0, 5},
};
void t877_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1697 * tmp;
		tmp = (t1697 *)il2cpp_codegen_object_new (&t1697_TI);
		m8583(tmp, il2cpp_codegen_type_get_object(&t1676_0_0_0), &m8583_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1695 * tmp;
		tmp = (t1695 *)il2cpp_codegen_object_new (&t1695_TI);
		m8580(tmp, il2cpp_codegen_string_new_wrapper("Count={Count}"), &m8580_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t877__CustomAttributeCache = {
3,
NULL,
&t877_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t877_1_0_0;
struct t877;
extern CustomAttributesCache t877__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t877_DM = 
{
	NULL, t877_TI__nestedTypes, t877_ITIs, t877_IOs, &t9_0_0_0, t877_VT, t877_VTIGM, NULL};
TypeInfo t877_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Stack", "System.Collections", t877_MIs, t877_PIs, t877_FIs, NULL, &t877_TI, NULL, &t877__CustomAttributeCache, &t877_0_0_0, &t877_1_0_0, &t877_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t877), sizeof (t877), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 11, 3, 5, 0, 1, 18, 3, 3};
#include "t1692.h"
// Metadata Definition System.Configuration.Assemblies.AssemblyHashAlgorithm
extern TypeInfo t1692_TI;
#include "t1692MD.h"
static MethodInfo* t1692_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1692_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1692_TI, offsetof(t1692, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1692_0_0_32854;
FieldInfo t1692_f2_FieldInfo = 
{
	"None", &t1692_0_0_32854, &t1692_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1692_0_0_32854;
FieldInfo t1692_f3_FieldInfo = 
{
	"MD5", &t1692_0_0_32854, &t1692_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1692_0_0_32854;
FieldInfo t1692_f4_FieldInfo = 
{
	"SHA1", &t1692_0_0_32854, &t1692_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1692_FIs[] =
{
	&t1692_f1_FieldInfo,
	&t1692_f2_FieldInfo,
	&t1692_f3_FieldInfo,
	&t1692_f4_FieldInfo,
	NULL
};
static const int32_t t1692_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1692_f2_DefaultValue = 
{
	&t1692_f2_FieldInfo, { (char*)&t1692_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1692_f3_DefaultValueData = 32771;
static Il2CppFieldDefaultValueEntry t1692_f3_DefaultValue = 
{
	&t1692_f3_FieldInfo, { (char*)&t1692_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1692_f4_DefaultValueData = 32772;
static Il2CppFieldDefaultValueEntry t1692_f4_DefaultValue = 
{
	&t1692_f4_FieldInfo, { (char*)&t1692_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1692_FDVs[] = 
{
	&t1692_f2_DefaultValue,
	&t1692_f3_DefaultValue,
	&t1692_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t1692_VT[] =
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
static bool t1692_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1692_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1692_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1692__CustomAttributeCache = {
1,
NULL,
&t1692_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1692_0_0_0;
extern Il2CppType t1692_1_0_0;
extern CustomAttributesCache t1692__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1692_DM = 
{
	NULL, NULL, NULL, t1692_IOs, &t8_0_0_0, t1692_VT, t1692_VTIGM, NULL};
TypeInfo t1692_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyHashAlgorithm", "System.Configuration.Assemblies", t1692_MIs, NULL, t1692_FIs, NULL, &t125_TI, NULL, &t1692__CustomAttributeCache, &t1692_0_0_0, &t1692_1_0_0, &t1692_DM, NULL, NULL, NULL, t1692_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1692)+ sizeof (Il2CppObject), sizeof (t1692)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1693.h"
// Metadata Definition System.Configuration.Assemblies.AssemblyVersionCompatibility
extern TypeInfo t1693_TI;
#include "t1693MD.h"
static MethodInfo* t1693_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1693_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1693_TI, offsetof(t1693, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1693_0_0_32854;
FieldInfo t1693_f2_FieldInfo = 
{
	"SameMachine", &t1693_0_0_32854, &t1693_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1693_0_0_32854;
FieldInfo t1693_f3_FieldInfo = 
{
	"SameProcess", &t1693_0_0_32854, &t1693_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1693_0_0_32854;
FieldInfo t1693_f4_FieldInfo = 
{
	"SameDomain", &t1693_0_0_32854, &t1693_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1693_FIs[] =
{
	&t1693_f1_FieldInfo,
	&t1693_f2_FieldInfo,
	&t1693_f3_FieldInfo,
	&t1693_f4_FieldInfo,
	NULL
};
static const int32_t t1693_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1693_f2_DefaultValue = 
{
	&t1693_f2_FieldInfo, { (char*)&t1693_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1693_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1693_f3_DefaultValue = 
{
	&t1693_f3_FieldInfo, { (char*)&t1693_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1693_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1693_f4_DefaultValue = 
{
	&t1693_f4_FieldInfo, { (char*)&t1693_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1693_FDVs[] = 
{
	&t1693_f2_DefaultValue,
	&t1693_f3_DefaultValue,
	&t1693_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t1693_VT[] =
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
static bool t1693_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1693_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1693_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1693__CustomAttributeCache = {
1,
NULL,
&t1693_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1693_0_0_0;
extern Il2CppType t1693_1_0_0;
extern CustomAttributesCache t1693__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1693_DM = 
{
	NULL, NULL, NULL, t1693_IOs, &t8_0_0_0, t1693_VT, t1693_VTIGM, NULL};
TypeInfo t1693_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyVersionCompatibility", "System.Configuration.Assemblies", t1693_MIs, NULL, t1693_FIs, NULL, &t125_TI, NULL, &t1693__CustomAttributeCache, &t1693_0_0_0, &t1693_1_0_0, &t1693_DM, NULL, NULL, NULL, t1693_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1693)+ sizeof (Il2CppObject), sizeof (t1693)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1006.h"
// Metadata Definition System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
extern TypeInfo t1006_TI;
#include "t1006MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1006_m4568_ParameterInfos[] = 
{
	{"category", 0, 134220761, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"checkId", 1, 134220762, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4568_MI = 
{
	".ctor", (methodPointerType)&m4568, &t1006_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1006_m4568_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2304, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1006_m4569_ParameterInfos[] = 
{
	{"value", 0, 134220763, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4569_MI = 
{
	"set_Justification", (methodPointerType)&m4569, &t1006_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1006_m4569_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 2305, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1006_MIs[] =
{
	&m4568_MI,
	&m4569_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1006_f0_FieldInfo = 
{
	"category", &t2_0_0_1, &t1006_TI, offsetof(t1006, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1006_f1_FieldInfo = 
{
	"checkId", &t2_0_0_1, &t1006_TI, offsetof(t1006, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1006_f2_FieldInfo = 
{
	"justification", &t2_0_0_1, &t1006_TI, offsetof(t1006, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1006_FIs[] =
{
	&t1006_f0_FieldInfo,
	&t1006_f1_FieldInfo,
	&t1006_f2_FieldInfo,
	NULL
};
extern MethodInfo m4569_MI;
static PropertyInfo t1006____Justification_PropertyInfo = 
{
	&t1006_TI, "Justification", NULL, &m4569_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1006_PIs[] =
{
	&t1006____Justification_PropertyInfo,
	NULL
};
extern MethodInfo m4499_MI;
extern MethodInfo m4493_MI;
static Il2CppMethodReference t1006_VT[] =
{
	&m4499_MI,
	&m646_MI,
	&m4493_MI,
	&m673_MI,
};
static bool t1006_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppType t954_0_0_0;
static Il2CppInterfaceOffsetPair t1006_IOs[] = 
{
	{ &t954_0_0_0, 4},
};
extern TypeInfo t1581_TI;
#include "t1581.h"
#include "t1581MD.h"
extern MethodInfo m7830_MI;
extern TypeInfo t1024_TI;
#include "t1024.h"
#include "t1024MD.h"
extern MethodInfo m4605_MI;
extern MethodInfo m4606_MI;
extern MethodInfo m4607_MI;
void t1006_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1581 * tmp;
		tmp = (t1581 *)il2cpp_codegen_object_new (&t1581_TI);
		m7830(tmp, il2cpp_codegen_string_new_wrapper("CODE_ANALYSIS"), &m7830_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1024 * tmp;
		tmp = (t1024 *)il2cpp_codegen_object_new (&t1024_TI);
		m4605(tmp, 32767, &m4605_MI);
		m4606(tmp, false, &m4606_MI);
		m4607(tmp, true, &m4607_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1006__CustomAttributeCache = {
2,
NULL,
&t1006_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1006_0_0_0;
extern Il2CppType t1006_1_0_0;
extern Il2CppType t725_0_0_0;
struct t1006;
extern CustomAttributesCache t1006__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1006_DM = 
{
	NULL, NULL, NULL, t1006_IOs, &t725_0_0_0, t1006_VT, t1006_VTIGM, NULL};
TypeInfo t1006_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SuppressMessageAttribute", "System.Diagnostics.CodeAnalysis", t1006_MIs, t1006_PIs, t1006_FIs, NULL, &t1006_TI, NULL, &t1006__CustomAttributeCache, &t1006_0_0_0, &t1006_1_0_0, &t1006_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1006), sizeof (t1006), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 3, 0, 0, 4, 0, 1};
// Metadata Definition System.Diagnostics.SymbolStore.ISymbolWriter
extern TypeInfo t1784_TI;
extern Il2CppType t58_0_0_0;
extern Il2CppType t58_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1784_m12014_ParameterInfos[] = 
{
	{"emitter", 0, 134220764, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"filename", 1, 134220765, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"fFullBuild", 2, 134220766, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t58_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m12014_MI = 
{
	"Initialize", NULL, &t1784_TI, &t122_0_0_0, RuntimeInvoker_t122_t58_t9_t186, t1784_m12014_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 3, false, false, 2306, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1784_MIs[] =
{
	&m12014_MI,
	NULL
};
void t1784_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1784__CustomAttributeCache = {
1,
NULL,
&t1784_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1784_0_0_0;
extern Il2CppType t1784_1_0_0;
struct t1784;
extern CustomAttributesCache t1784__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1784_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1784_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISymbolWriter", "System.Diagnostics.SymbolStore", t1784_MIs, NULL, NULL, NULL, &t1784_TI, NULL, &t1784__CustomAttributeCache, &t1784_0_0_0, &t1784_1_0_0, &t1784_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1694.h"
// Metadata Definition System.Diagnostics.DebuggableAttribute/DebuggingModes
extern TypeInfo t1694_TI;
#include "t1694MD.h"
static MethodInfo* t1694_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1694_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1694_TI, offsetof(t1694, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1694_0_0_32854;
FieldInfo t1694_f2_FieldInfo = 
{
	"None", &t1694_0_0_32854, &t1694_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1694_0_0_32854;
FieldInfo t1694_f3_FieldInfo = 
{
	"Default", &t1694_0_0_32854, &t1694_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1694_0_0_32854;
FieldInfo t1694_f4_FieldInfo = 
{
	"IgnoreSymbolStoreSequencePoints", &t1694_0_0_32854, &t1694_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1694_0_0_32854;
FieldInfo t1694_f5_FieldInfo = 
{
	"EnableEditAndContinue", &t1694_0_0_32854, &t1694_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1694_0_0_32854;
FieldInfo t1694_f6_FieldInfo = 
{
	"DisableOptimizations", &t1694_0_0_32854, &t1694_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1694_FIs[] =
{
	&t1694_f1_FieldInfo,
	&t1694_f2_FieldInfo,
	&t1694_f3_FieldInfo,
	&t1694_f4_FieldInfo,
	&t1694_f5_FieldInfo,
	&t1694_f6_FieldInfo,
	NULL
};
static const int32_t t1694_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1694_f2_DefaultValue = 
{
	&t1694_f2_FieldInfo, { (char*)&t1694_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1694_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1694_f3_DefaultValue = 
{
	&t1694_f3_FieldInfo, { (char*)&t1694_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1694_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1694_f4_DefaultValue = 
{
	&t1694_f4_FieldInfo, { (char*)&t1694_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1694_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1694_f5_DefaultValue = 
{
	&t1694_f5_FieldInfo, { (char*)&t1694_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1694_f6_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t1694_f6_DefaultValue = 
{
	&t1694_f6_FieldInfo, { (char*)&t1694_f6_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1694_FDVs[] = 
{
	&t1694_f2_DefaultValue,
	&t1694_f3_DefaultValue,
	&t1694_f4_DefaultValue,
	&t1694_f5_DefaultValue,
	&t1694_f6_DefaultValue,
	NULL
};
static Il2CppMethodReference t1694_VT[] =
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
static bool t1694_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1694_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern TypeInfo t615_TI;
#include "t615.h"
#include "t615MD.h"
extern MethodInfo m2991_MI;
void t1694_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t615 * tmp;
		tmp = (t615 *)il2cpp_codegen_object_new (&t615_TI);
		m2991(tmp, &m2991_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1694__CustomAttributeCache = {
2,
NULL,
&t1694_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1694_0_0_0;
extern Il2CppType t1694_1_0_0;
extern TypeInfo t1148_TI;
extern Il2CppType t1148_0_0_0;
extern CustomAttributesCache t1694__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1694_DM = 
{
	&t1148_0_0_0, NULL, NULL, t1694_IOs, &t8_0_0_0, t1694_VT, t1694_VTIGM, NULL};
TypeInfo t1694_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DebuggingModes", "", t1694_MIs, NULL, t1694_FIs, NULL, &t125_TI, NULL, &t1694__CustomAttributeCache, &t1694_0_0_0, &t1694_1_0_0, &t1694_DM, NULL, NULL, NULL, t1694_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1694)+ sizeof (Il2CppObject), sizeof (t1694)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 258, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1148.h"
// Metadata Definition System.Diagnostics.DebuggableAttribute
#include "t1148MD.h"
extern Il2CppType t1694_0_0_0;
static ParameterInfo t1148_m4797_ParameterInfos[] = 
{
	{"modes", 0, 134220767, &EmptyCustomAttributesCache, &t1694_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4797_MI = 
{
	".ctor", (methodPointerType)&m4797, &t1148_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1148_m4797_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2307, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1148_MIs[] =
{
	&m4797_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t1148_f0_FieldInfo = 
{
	"JITTrackingEnabledFlag", &t124_0_0_1, &t1148_TI, offsetof(t1148, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1148_f1_FieldInfo = 
{
	"JITOptimizerDisabledFlag", &t124_0_0_1, &t1148_TI, offsetof(t1148, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1694_0_0_1;
FieldInfo t1148_f2_FieldInfo = 
{
	"debuggingModes", &t1694_0_0_1, &t1148_TI, offsetof(t1148, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1148_FIs[] =
{
	&t1148_f0_FieldInfo,
	&t1148_f1_FieldInfo,
	&t1148_f2_FieldInfo,
	NULL
};
static const Il2CppType* t1148_TI__nestedTypes[1] =
{
	&t1694_0_0_0,
};
static Il2CppMethodReference t1148_VT[] =
{
	&m4499_MI,
	&m646_MI,
	&m4493_MI,
	&m673_MI,
};
static bool t1148_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1148_IOs[] = 
{
	{ &t954_0_0_0, 4},
};
void t1148_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1024 * tmp;
		tmp = (t1024 *)il2cpp_codegen_object_new (&t1024_TI);
		m4605(tmp, 3, &m4605_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1148__CustomAttributeCache = {
2,
NULL,
&t1148_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1148_1_0_0;
struct t1148;
extern CustomAttributesCache t1148__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1148_DM = 
{
	NULL, t1148_TI__nestedTypes, NULL, t1148_IOs, &t725_0_0_0, t1148_VT, t1148_VTIGM, NULL};
TypeInfo t1148_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DebuggableAttribute", "System.Diagnostics", t1148_MIs, NULL, t1148_FIs, NULL, &t1148_TI, NULL, &t1148__CustomAttributeCache, &t1148_0_0_0, &t1148_1_0_0, &t1148_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1148), sizeof (t1148), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 3, 0, 1, 4, 0, 1};
// Metadata Definition System.Diagnostics.DebuggerDisplayAttribute
extern Il2CppType t2_0_0_0;
static ParameterInfo t1695_m8580_ParameterInfos[] = 
{
	{"value", 0, 134220768, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8580_MI = 
{
	".ctor", (methodPointerType)&m8580, &t1695_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1695_m8580_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2308, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1695_m8581_ParameterInfos[] = 
{
	{"value", 0, 134220769, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8581_MI = 
{
	"set_Name", (methodPointerType)&m8581, &t1695_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1695_m8581_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 2309, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1695_MIs[] =
{
	&m8580_MI,
	&m8581_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f0_FieldInfo = 
{
	"value", &t2_0_0_1, &t1695_TI, offsetof(t1695, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f1_FieldInfo = 
{
	"type", &t2_0_0_1, &t1695_TI, offsetof(t1695, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f2_FieldInfo = 
{
	"name", &t2_0_0_1, &t1695_TI, offsetof(t1695, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1695_FIs[] =
{
	&t1695_f0_FieldInfo,
	&t1695_f1_FieldInfo,
	&t1695_f2_FieldInfo,
	NULL
};
extern MethodInfo m8581_MI;
static PropertyInfo t1695____Name_PropertyInfo = 
{
	&t1695_TI, "Name", NULL, &m8581_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1695_PIs[] =
{
	&t1695____Name_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1695_VT[] =
{
	&m4499_MI,
	&m646_MI,
	&m4493_MI,
	&m673_MI,
};
static bool t1695_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1695_IOs[] = 
{
	{ &t954_0_0_0, 4},
};
void t1695_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1024 * tmp;
		tmp = (t1024 *)il2cpp_codegen_object_new (&t1024_TI);
		m4605(tmp, 4509, &m4605_MI);
		m4607(tmp, true, &m4607_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1695__CustomAttributeCache = {
2,
NULL,
&t1695_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1695_0_0_0;
extern Il2CppType t1695_1_0_0;
struct t1695;
extern CustomAttributesCache t1695__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1695_DM = 
{
	NULL, NULL, NULL, t1695_IOs, &t725_0_0_0, t1695_VT, t1695_VTIGM, NULL};
TypeInfo t1695_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DebuggerDisplayAttribute", "System.Diagnostics", t1695_MIs, t1695_PIs, t1695_FIs, NULL, &t1695_TI, NULL, &t1695__CustomAttributeCache, &t1695_0_0_0, &t1695_1_0_0, &t1695_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1695), sizeof (t1695), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 3, 0, 0, 4, 0, 1};
#include "t1696.h"
// Metadata Definition System.Diagnostics.DebuggerStepThroughAttribute
extern TypeInfo t1696_TI;
#include "t1696MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8582_MI = 
{
	".ctor", (methodPointerType)&m8582, &t1696_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2310, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1696_MIs[] =
{
	&m8582_MI,
	NULL
};
static Il2CppMethodReference t1696_VT[] =
{
	&m4499_MI,
	&m646_MI,
	&m4493_MI,
	&m673_MI,
};
static bool t1696_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1696_IOs[] = 
{
	{ &t954_0_0_0, 4},
};
void t1696_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m4605(tmp, 108, &m4605_MI);
		m4606(tmp, false, &m4606_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1696__CustomAttributeCache = {
2,
NULL,
&t1696_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1696_0_0_0;
extern Il2CppType t1696_1_0_0;
struct t1696;
extern CustomAttributesCache t1696__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1696_DM = 
{
	NULL, NULL, NULL, t1696_IOs, &t725_0_0_0, t1696_VT, t1696_VTIGM, NULL};
TypeInfo t1696_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DebuggerStepThroughAttribute", "System.Diagnostics", t1696_MIs, NULL, NULL, NULL, &t1696_TI, NULL, &t1696__CustomAttributeCache, &t1696_0_0_0, &t1696_1_0_0, &t1696_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1696), sizeof (t1696), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
// Metadata Definition System.Diagnostics.DebuggerTypeProxyAttribute
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1697_m8583_ParameterInfos[] = 
{
	{"type", 0, 134220770, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8583_MI = 
{
	".ctor", (methodPointerType)&m8583, &t1697_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1697_m8583_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2311, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1697_MIs[] =
{
	&m8583_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1697_f0_FieldInfo = 
{
	"proxy_type_name", &t2_0_0_1, &t1697_TI, offsetof(t1697, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1697_FIs[] =
{
	&t1697_f0_FieldInfo,
	NULL
};
static Il2CppMethodReference t1697_VT[] =
{
	&m4499_MI,
	&m646_MI,
	&m4493_MI,
	&m673_MI,
};
static bool t1697_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1697_IOs[] = 
{
	{ &t954_0_0_0, 4},
};
void t1697_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1024 * tmp;
		tmp = (t1024 *)il2cpp_codegen_object_new (&t1024_TI);
		m4605(tmp, 13, &m4605_MI);
		m4607(tmp, true, &m4607_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1697__CustomAttributeCache = {
2,
NULL,
&t1697_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1697_0_0_0;
extern Il2CppType t1697_1_0_0;
struct t1697;
extern CustomAttributesCache t1697__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1697_DM = 
{
	NULL, NULL, NULL, t1697_IOs, &t725_0_0_0, t1697_VT, t1697_VTIGM, NULL};
TypeInfo t1697_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DebuggerTypeProxyAttribute", "System.Diagnostics", t1697_MIs, NULL, t1697_FIs, NULL, &t1697_TI, NULL, &t1697__CustomAttributeCache, &t1697_0_0_0, &t1697_1_0_0, &t1697_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1697), sizeof (t1697), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t936.h"
// Metadata Definition System.Diagnostics.StackFrame
extern TypeInfo t936_TI;
#include "t936MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8584_MI = 
{
	".ctor", (methodPointerType)&m8584, &t936_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2312, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t936_m8585_ParameterInfos[] = 
{
	{"skipFrames", 0, 134220771, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 1, 134220772, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8585_MI = 
{
	".ctor", (methodPointerType)&m8585, &t936_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t936_m8585_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2313, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t914_1_0_2;
extern Il2CppType t914_1_0_0;
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_1_0_0;
extern Il2CppType t125_1_0_2;
extern Il2CppType t2_1_0_2;
extern Il2CppType t2_1_0_0;
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_1_0_2;
static ParameterInfo t936_m8586_ParameterInfos[] = 
{
	{"skip", 0, 134220773, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"needFileInfo", 1, 134220774, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"method", 2, 134220775, &EmptyCustomAttributesCache, &t914_1_0_2},
	{"iloffset", 3, 134220776, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"native_offset", 4, 134220777, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"file", 5, 134220778, &EmptyCustomAttributesCache, &t2_1_0_2},
	{"line", 6, 134220779, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"column", 7, 134220780, &EmptyCustomAttributesCache, &t125_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125_t186_t2585_t336_t336_t338_t336_t336 (MethodInfo* method, void* obj, void** args);
MethodInfo m8586_MI = 
{
	"get_frame_info", (methodPointerType)&m8586, &t936_TI, &t124_0_0_0, RuntimeInvoker_t124_t125_t186_t2585_t336_t336_t338_t336_t336, t936_m8586_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 8, false, false, 2314, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4455_MI = 
{
	"GetFileLineNumber", (methodPointerType)&m4455, &t936_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 4, 0, false, false, 2315, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4454_MI = 
{
	"GetFileName", (methodPointerType)&m4454, &t936_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 5, 0, false, false, 2316, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8587_MI = 
{
	"GetSecureFileName", (methodPointerType)&m8587, &t936_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2317, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8588_MI = 
{
	"GetILOffset", (methodPointerType)&m8588, &t936_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 2318, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t914_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4451_MI = 
{
	"GetMethod", (methodPointerType)&m4451, &t936_TI, &t914_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2319, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8589_MI = 
{
	"GetNativeOffset", (methodPointerType)&m8589, &t936_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 8, 0, false, false, 2320, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8590_MI = 
{
	"GetInternalMethodName", (methodPointerType)&m8590, &t936_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2321, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8591_MI = 
{
	"ToString", (methodPointerType)&m8591, &t936_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2322, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t936_MIs[] =
{
	&m8584_MI,
	&m8585_MI,
	&m8586_MI,
	&m4455_MI,
	&m4454_MI,
	&m8587_MI,
	&m8588_MI,
	&m4451_MI,
	&m8589_MI,
	&m8590_MI,
	&m8591_MI,
	NULL
};
extern Il2CppType t125_0_0_32854;
FieldInfo t936_f0_FieldInfo = 
{
	"OFFSET_UNKNOWN", &t125_0_0_32854, &t936_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t936_f1_FieldInfo = 
{
	"ilOffset", &t125_0_0_1, &t936_TI, offsetof(t936, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t936_f2_FieldInfo = 
{
	"nativeOffset", &t125_0_0_1, &t936_TI, offsetof(t936, f2), &EmptyCustomAttributesCache};
extern Il2CppType t914_0_0_1;
FieldInfo t936_f3_FieldInfo = 
{
	"methodBase", &t914_0_0_1, &t936_TI, offsetof(t936, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t936_f4_FieldInfo = 
{
	"fileName", &t2_0_0_1, &t936_TI, offsetof(t936, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t936_f5_FieldInfo = 
{
	"lineNumber", &t125_0_0_1, &t936_TI, offsetof(t936, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t936_f6_FieldInfo = 
{
	"columnNumber", &t125_0_0_1, &t936_TI, offsetof(t936, f6), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t936_f7_FieldInfo = 
{
	"internalMethodName", &t2_0_0_1, &t936_TI, offsetof(t936, f7), &EmptyCustomAttributesCache};
static FieldInfo* t936_FIs[] =
{
	&t936_f0_FieldInfo,
	&t936_f1_FieldInfo,
	&t936_f2_FieldInfo,
	&t936_f3_FieldInfo,
	&t936_f4_FieldInfo,
	&t936_f5_FieldInfo,
	&t936_f6_FieldInfo,
	&t936_f7_FieldInfo,
	NULL
};
static const int32_t t936_f0_DefaultValueData = -1;
static Il2CppFieldDefaultValueEntry t936_f0_DefaultValue = 
{
	&t936_f0_FieldInfo, { (char*)&t936_f0_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t936_FDVs[] = 
{
	&t936_f0_DefaultValue,
	NULL
};
extern MethodInfo m8591_MI;
extern MethodInfo m4455_MI;
extern MethodInfo m4454_MI;
extern MethodInfo m8588_MI;
extern MethodInfo m4451_MI;
extern MethodInfo m8589_MI;
static Il2CppMethodReference t936_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m8591_MI,
	&m4455_MI,
	&m4454_MI,
	&m8588_MI,
	&m4451_MI,
	&m8589_MI,
};
static bool t936_VTIGM[] =
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
extern TypeInfo t1592_TI;
#include "t1592.h"
#include "t1592MD.h"
extern MethodInfo m7849_MI;
void t936_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7849(tmp, il2cpp_codegen_string_new_wrapper("Serialized objects are not compatible with MS.NET"), &m7849_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t936__CustomAttributeCache = {
2,
NULL,
&t936_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t936_0_0_0;
extern Il2CppType t936_1_0_0;
struct t936;
extern CustomAttributesCache t936__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t936_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t936_VT, t936_VTIGM, NULL};
TypeInfo t936_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StackFrame", "System.Diagnostics", t936_MIs, NULL, t936_FIs, NULL, &t936_TI, NULL, &t936__CustomAttributeCache, &t936_0_0_0, &t936_1_0_0, &t936_DM, NULL, NULL, NULL, t936_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t936), sizeof (t936), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 11, 0, 8, 0, 0, 9, 0, 0};
#include "t855.h"
// Metadata Definition System.Diagnostics.StackTrace
extern TypeInfo t855_TI;
#include "t855MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8592_MI = 
{
	".ctor", (methodPointerType)&m8592, &t855_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2323, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t855_m4440_ParameterInfos[] = 
{
	{"skipFrames", 0, 134220781, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 1, 134220782, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m4440_MI = 
{
	".ctor", (methodPointerType)&m4440, &t855_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t855_m4440_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2324, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t138_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t855_m8593_ParameterInfos[] = 
{
	{"e", 0, 134220783, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"fNeedFileInfo", 1, 134220784, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8593_MI = 
{
	".ctor", (methodPointerType)&m8593, &t855_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t855_m8593_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2325, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t855_m8594_ParameterInfos[] = 
{
	{"e", 0, 134220785, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"skipFrames", 1, 134220786, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 2, 134220787, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8594_MI = 
{
	".ctor", (methodPointerType)&m8594, &t855_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t186, t855_m8594_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 2326, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t855_m8595_ParameterInfos[] = 
{
	{"e", 0, 134220788, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"skipFrames", 1, 134220789, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 2, 134220790, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"returnNativeFrames", 3, 134220791, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8595_MI = 
{
	".ctor", (methodPointerType)&m8595, &t855_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t186_t186, t855_m8595_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 2327, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t855_m8596_ParameterInfos[] = 
{
	{"skipFrames", 0, 134220792, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 1, 134220793, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8596_MI = 
{
	"init_frames", (methodPointerType)&m8596, &t855_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t855_m8596_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2328, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t855_m8597_ParameterInfos[] = 
{
	{"e", 0, 134220794, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"skipFrames", 1, 134220795, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 2, 134220796, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1698_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8597_MI = 
{
	"get_trace", (methodPointerType)&m8597, &t855_TI, &t1698_0_0_0, RuntimeInvoker_t9_t9_t125_t186, t855_m8597_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 3, false, false, 2329, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4456_MI = 
{
	"get_FrameCount", (methodPointerType)&m4456, &t855_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 4, 0, false, false, 2330, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t855_m4450_ParameterInfos[] = 
{
	{"index", 0, 134220797, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t936_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4450_MI = 
{
	"GetFrame", (methodPointerType)&m4450, &t855_TI, &t936_0_0_0, RuntimeInvoker_t9_t125, t855_m4450_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 1, false, false, 2331, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8598_MI = 
{
	"ToString", (methodPointerType)&m8598, &t855_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2332, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t855_MIs[] =
{
	&m8592_MI,
	&m4440_MI,
	&m8593_MI,
	&m8594_MI,
	&m8595_MI,
	&m8596_MI,
	&m8597_MI,
	&m4456_MI,
	&m4450_MI,
	&m8598_MI,
	NULL
};
extern Il2CppType t125_0_0_32854;
FieldInfo t855_f0_FieldInfo = 
{
	"METHODS_TO_SKIP", &t125_0_0_32854, &t855_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1698_0_0_1;
FieldInfo t855_f1_FieldInfo = 
{
	"frames", &t1698_0_0_1, &t855_TI, offsetof(t855, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t855_f2_FieldInfo = 
{
	"debug_info", &t124_0_0_1, &t855_TI, offsetof(t855, f2), &EmptyCustomAttributesCache};
static FieldInfo* t855_FIs[] =
{
	&t855_f0_FieldInfo,
	&t855_f1_FieldInfo,
	&t855_f2_FieldInfo,
	NULL
};
static const int32_t t855_f0_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t855_f0_DefaultValue = 
{
	&t855_f0_FieldInfo, { (char*)&t855_f0_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t855_FDVs[] = 
{
	&t855_f0_DefaultValue,
	NULL
};
extern MethodInfo m4456_MI;
static PropertyInfo t855____FrameCount_PropertyInfo = 
{
	&t855_TI, "FrameCount", &m4456_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t855_PIs[] =
{
	&t855____FrameCount_PropertyInfo,
	NULL
};
extern MethodInfo m8598_MI;
extern MethodInfo m4450_MI;
static Il2CppMethodReference t855_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m8598_MI,
	&m4456_MI,
	&m4450_MI,
};
static bool t855_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
void t855_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7849(tmp, il2cpp_codegen_string_new_wrapper("Serialized objects are not compatible with .NET"), &m7849_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t855__CustomAttributeCache = {
2,
NULL,
&t855_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t855_0_0_0;
extern Il2CppType t855_1_0_0;
struct t855;
extern CustomAttributesCache t855__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t855_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t855_VT, t855_VTIGM, NULL};
TypeInfo t855_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StackTrace", "System.Diagnostics", t855_MIs, t855_PIs, t855_FIs, NULL, &t855_TI, NULL, &t855__CustomAttributeCache, &t855_0_0_0, &t855_1_0_0, &t855_DM, NULL, NULL, NULL, t855_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t855), sizeof (t855), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 1, 3, 0, 0, 6, 0, 0};
#include "t1699.h"
// Metadata Definition System.Globalization.Calendar
extern TypeInfo t1699_TI;
#include "t1699MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8599_MI = 
{
	".ctor", (methodPointerType)&m8599, &t1699_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2333, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1095_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12004_MI = 
{
	"get_Eras", NULL, &t1699_TI, &t1095_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 4, 0, false, false, 2334, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8600_MI = 
{
	"CheckReadOnly", (methodPointerType)&m8600, &t1699_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2335, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t270_0_0_0;
extern Il2CppType t270_0_0_0;
static ParameterInfo t1699_m12140_ParameterInfos[] = 
{
	{"time", 0, 134220798, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m12140_MI = 
{
	"GetDayOfMonth", NULL, &t1699_TI, &t125_0_0_0, RuntimeInvoker_t125_t270, t1699_m12140_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 2336, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t270_0_0_0;
static ParameterInfo t1699_m12141_ParameterInfos[] = 
{
	{"time", 0, 134220799, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern Il2CppType t1700_0_0_0;
extern void* RuntimeInvoker_t1700_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m12141_MI = 
{
	"GetDayOfWeek", NULL, &t1699_TI, &t1700_0_0_0, RuntimeInvoker_t1700_t270, t1699_m12141_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, false, 2337, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t270_0_0_0;
static ParameterInfo t1699_m12144_ParameterInfos[] = 
{
	{"time", 0, 134220800, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m12144_MI = 
{
	"GetEra", NULL, &t1699_TI, &t125_0_0_0, RuntimeInvoker_t125_t270, t1699_m12144_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 7, 1, false, false, 2338, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t270_0_0_0;
static ParameterInfo t1699_m12142_ParameterInfos[] = 
{
	{"time", 0, 134220801, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m12142_MI = 
{
	"GetMonth", NULL, &t1699_TI, &t125_0_0_0, RuntimeInvoker_t125_t270, t1699_m12142_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, false, 2339, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t270_0_0_0;
static ParameterInfo t1699_m12143_ParameterInfos[] = 
{
	{"time", 0, 134220802, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m12143_MI = 
{
	"GetYear", NULL, &t1699_TI, &t125_0_0_0, RuntimeInvoker_t125_t270, t1699_m12143_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 1, false, false, 2340, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8601_MI = 
{
	"get_EraNames", (methodPointerType)&m8601, &t1699_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2341, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1699_MIs[] =
{
	&m8599_MI,
	&m12004_MI,
	&m8600_MI,
	&m12140_MI,
	&m12141_MI,
	&m12144_MI,
	&m12142_MI,
	&m12143_MI,
	&m8601_MI,
	NULL
};
extern Il2CppType t124_0_0_129;
FieldInfo t1699_f0_FieldInfo = 
{
	"m_isReadOnly", &t124_0_0_129, &t1699_TI, offsetof(t1699, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_131;
FieldInfo t1699_f1_FieldInfo = 
{
	"twoDigitYearMax", &t125_0_0_131, &t1699_TI, offsetof(t1699, f1), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_131;
FieldInfo t1699_f2_FieldInfo = 
{
	"M_AbbrEraNames", &t221_0_0_131, &t1699_TI, offsetof(t1699, f2), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_131;
FieldInfo t1699_f3_FieldInfo = 
{
	"M_EraNames", &t221_0_0_131, &t1699_TI, offsetof(t1699, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1699_FIs[] =
{
	&t1699_f0_FieldInfo,
	&t1699_f1_FieldInfo,
	&t1699_f2_FieldInfo,
	&t1699_f3_FieldInfo,
	NULL
};
extern MethodInfo m12004_MI;
static PropertyInfo t1699____Eras_PropertyInfo = 
{
	&t1699_TI, "Eras", &m12004_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8601_MI;
static PropertyInfo t1699____EraNames_PropertyInfo = 
{
	&t1699_TI, "EraNames", &m8601_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1699_PIs[] =
{
	&t1699____Eras_PropertyInfo,
	&t1699____EraNames_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1699_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static bool t1699_VTIGM[] =
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
};
static const Il2CppType* t1699_ITIs[] = 
{
	&t622_0_0_0,
};
static Il2CppInterfaceOffsetPair t1699_IOs[] = 
{
	{ &t622_0_0_0, 4},
};
void t1699_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1699__CustomAttributeCache = {
1,
NULL,
&t1699_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1699_0_0_0;
extern Il2CppType t1699_1_0_0;
struct t1699;
extern CustomAttributesCache t1699__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1699_DM = 
{
	NULL, NULL, t1699_ITIs, t1699_IOs, &t9_0_0_0, t1699_VT, t1699_VTIGM, NULL};
TypeInfo t1699_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Calendar", "System.Globalization", t1699_MIs, t1699_PIs, t1699_FIs, NULL, &t1699_TI, NULL, &t1699__CustomAttributeCache, &t1699_0_0_0, &t1699_1_0_0, &t1699_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1699), sizeof (t1699), 0, -1, 0, 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 2, 4, 0, 0, 10, 1, 1};
#include "t1701.h"
// Metadata Definition System.Globalization.CCMath
extern TypeInfo t1701_TI;
#include "t1701MD.h"
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1701_m8602_ParameterInfos[] = 
{
	{"x", 0, 134220803, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"y", 1, 134220804, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8602_MI = 
{
	"div", (methodPointerType)&m8602, &t1701_TI, &t125_0_0_0, RuntimeInvoker_t125_t125_t125, t1701_m8602_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2342, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1701_m8603_ParameterInfos[] = 
{
	{"x", 0, 134220805, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"y", 1, 134220806, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8603_MI = 
{
	"mod", (methodPointerType)&m8603, &t1701_TI, &t125_0_0_0, RuntimeInvoker_t125_t125_t125, t1701_m8603_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2343, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1701_m8604_ParameterInfos[] = 
{
	{"remainder", 0, 134220807, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"x", 1, 134220808, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"y", 2, 134220809, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t336_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8604_MI = 
{
	"div_mod", (methodPointerType)&m8604, &t1701_TI, &t125_0_0_0, RuntimeInvoker_t125_t336_t125_t125, t1701_m8604_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 2344, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1701_MIs[] =
{
	&m8602_MI,
	&m8603_MI,
	&m8604_MI,
	NULL
};
static Il2CppMethodReference t1701_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1701_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1701_0_0_0;
extern Il2CppType t1701_1_0_0;
struct t1701;
const Il2CppTypeDefinitionMetadata t1701_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1701_VT, t1701_VTIGM, NULL};
TypeInfo t1701_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CCMath", "System.Globalization", t1701_MIs, NULL, NULL, NULL, &t1701_TI, NULL, &EmptyCustomAttributesCache, &t1701_0_0_0, &t1701_1_0_0, &t1701_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1701), sizeof (t1701), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 4, 0, 0};
#include "t1702.h"
// Metadata Definition System.Globalization.CCFixed
extern TypeInfo t1702_TI;
#include "t1702MD.h"
extern Il2CppType t270_0_0_0;
static ParameterInfo t1702_m8605_ParameterInfos[] = 
{
	{"time", 0, 134220810, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m8605_MI = 
{
	"FromDateTime", (methodPointerType)&m8605, &t1702_TI, &t125_0_0_0, RuntimeInvoker_t125_t270, t1702_m8605_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2345, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1702_m8606_ParameterInfos[] = 
{
	{"date", 0, 134220811, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t1700_0_0_0;
extern void* RuntimeInvoker_t1700_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8606_MI = 
{
	"day_of_week", (methodPointerType)&m8606, &t1702_TI, &t1700_0_0_0, RuntimeInvoker_t1700_t125, t1702_m8606_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2346, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1702_MIs[] =
{
	&m8605_MI,
	&m8606_MI,
	NULL
};
static Il2CppMethodReference t1702_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1702_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1702_0_0_0;
extern Il2CppType t1702_1_0_0;
struct t1702;
const Il2CppTypeDefinitionMetadata t1702_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1702_VT, t1702_VTIGM, NULL};
TypeInfo t1702_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CCFixed", "System.Globalization", t1702_MIs, NULL, NULL, NULL, &t1702_TI, NULL, &EmptyCustomAttributesCache, &t1702_0_0_0, &t1702_1_0_0, &t1702_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1702), sizeof (t1702), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 4, 0, 0};
#include "t1703.h"
// Metadata Definition System.Globalization.CCGregorianCalendar
extern TypeInfo t1703_TI;
#include "t1703MD.h"
extern Il2CppType t125_0_0_0;
static ParameterInfo t1703_m8607_ParameterInfos[] = 
{
	{"year", 0, 134220812, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8607_MI = 
{
	"is_leap_year", (methodPointerType)&m8607, &t1703_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t1703_m8607_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2347, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1703_m8608_ParameterInfos[] = 
{
	{"day", 0, 134220813, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"month", 1, 134220814, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"year", 2, 134220815, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8608_MI = 
{
	"fixed_from_dmy", (methodPointerType)&m8608, &t1703_TI, &t125_0_0_0, RuntimeInvoker_t125_t125_t125_t125, t1703_m8608_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 2348, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1703_m8609_ParameterInfos[] = 
{
	{"date", 0, 134220816, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8609_MI = 
{
	"year_from_fixed", (methodPointerType)&m8609, &t1703_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t1703_m8609_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2349, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1703_m8610_ParameterInfos[] = 
{
	{"month", 0, 134220817, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"year", 1, 134220818, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"date", 2, 134220819, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t336_t336_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8610_MI = 
{
	"my_from_fixed", (methodPointerType)&m8610, &t1703_TI, &t122_0_0_0, RuntimeInvoker_t122_t336_t336_t125, t1703_m8610_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 2350, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1703_m8611_ParameterInfos[] = 
{
	{"day", 0, 134220820, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"month", 1, 134220821, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"year", 2, 134220822, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"date", 3, 134220823, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t336_t336_t336_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8611_MI = 
{
	"dmy_from_fixed", (methodPointerType)&m8611, &t1703_TI, &t122_0_0_0, RuntimeInvoker_t122_t336_t336_t336_t125, t1703_m8611_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 4, false, false, 2351, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1703_m8612_ParameterInfos[] = 
{
	{"date", 0, 134220824, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8612_MI = 
{
	"month_from_fixed", (methodPointerType)&m8612, &t1703_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t1703_m8612_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2352, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1703_m8613_ParameterInfos[] = 
{
	{"date", 0, 134220825, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8613_MI = 
{
	"day_from_fixed", (methodPointerType)&m8613, &t1703_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t1703_m8613_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2353, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t270_0_0_0;
static ParameterInfo t1703_m8614_ParameterInfos[] = 
{
	{"time", 0, 134220826, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m8614_MI = 
{
	"GetDayOfMonth", (methodPointerType)&m8614, &t1703_TI, &t125_0_0_0, RuntimeInvoker_t125_t270, t1703_m8614_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2354, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t270_0_0_0;
static ParameterInfo t1703_m8615_ParameterInfos[] = 
{
	{"time", 0, 134220827, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m8615_MI = 
{
	"GetMonth", (methodPointerType)&m8615, &t1703_TI, &t125_0_0_0, RuntimeInvoker_t125_t270, t1703_m8615_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2355, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t270_0_0_0;
static ParameterInfo t1703_m8616_ParameterInfos[] = 
{
	{"time", 0, 134220828, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m8616_MI = 
{
	"GetYear", (methodPointerType)&m8616, &t1703_TI, &t125_0_0_0, RuntimeInvoker_t125_t270, t1703_m8616_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2356, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1703_MIs[] =
{
	&m8607_MI,
	&m8608_MI,
	&m8609_MI,
	&m8610_MI,
	&m8611_MI,
	&m8612_MI,
	&m8613_MI,
	&m8614_MI,
	&m8615_MI,
	&m8616_MI,
	NULL
};
static Il2CppMethodReference t1703_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1703_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1703_0_0_0;
extern Il2CppType t1703_1_0_0;
struct t1703;
const Il2CppTypeDefinitionMetadata t1703_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1703_VT, t1703_VTIGM, NULL};
TypeInfo t1703_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CCGregorianCalendar", "System.Globalization", t1703_MIs, NULL, NULL, NULL, &t1703_TI, NULL, &EmptyCustomAttributesCache, &t1703_0_0_0, &t1703_1_0_0, &t1703_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1703), sizeof (t1703), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 0, 0, 0, 0, 4, 0, 0};
#include "t1546.h"
// Metadata Definition System.Globalization.CompareInfo
extern TypeInfo t1546_TI;
#include "t1546MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8617_MI = 
{
	".ctor", (methodPointerType)&m8617, &t1546_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6273, 0, 255, 0, false, false, 2357, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t901_0_0_0;
extern Il2CppType t901_0_0_0;
static ParameterInfo t1546_m8618_ParameterInfos[] = 
{
	{"ci", 0, 134220829, &EmptyCustomAttributesCache, &t901_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8618_MI = 
{
	".ctor", (methodPointerType)&m8618, &t1546_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1546_m8618_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2358, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8619_MI = 
{
	".cctor", (methodPointerType)&m8619, &t1546_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2359, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1546_m8620_ParameterInfos[] = 
{
	{"sender", 0, 134220830, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8620_MI = 
{
	"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", (methodPointerType)&m8620, &t1546_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1546_m8620_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 1, false, false, 2360, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8621_MI = 
{
	"get_UseManagedCollation", (methodPointerType)&m8621, &t1546_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 2361, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1546_m8622_ParameterInfos[] = 
{
	{"locale", 0, 134220831, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8622_MI = 
{
	"construct_compareinfo", (methodPointerType)&m8622, &t1546_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1546_m8622_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 2362, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8623_MI = 
{
	"free_internal_collator", (methodPointerType)&m8623, &t1546_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 4096, 255, 0, false, false, 2363, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1547_0_0_0;
extern Il2CppType t1547_0_0_0;
static ParameterInfo t1546_m8624_ParameterInfos[] = 
{
	{"str1", 0, 134220832, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset1", 1, 134220833, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length1", 2, 134220834, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"str2", 3, 134220835, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset2", 4, 134220836, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length2", 5, 134220837, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 6, 134220838, &EmptyCustomAttributesCache, &t1547_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8624_MI = 
{
	"internal_compare", (methodPointerType)&m8624, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125, t1546_m8624_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 7, false, false, 2364, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1547_0_0_0;
static ParameterInfo t1546_m8625_ParameterInfos[] = 
{
	{"key", 0, 134220839, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"source", 1, 134220840, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 2, 134220841, &EmptyCustomAttributesCache, &t1547_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8625_MI = 
{
	"assign_sortkey", (methodPointerType)&m8625, &t1546_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1546_m8625_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 3, false, false, 2365, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1547_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1546_m8626_ParameterInfos[] = 
{
	{"source", 0, 134220842, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"sindex", 1, 134220843, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220844, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 3, 134220845, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 4, 134220846, &EmptyCustomAttributesCache, &t1547_0_0_0},
	{"first", 5, 134220847, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8626_MI = 
{
	"internal_index", (methodPointerType)&m8626, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186, t1546_m8626_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 6, false, false, 2366, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8627_MI = 
{
	"Finalize", (methodPointerType)&m8627, &t1546_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 2367, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1547_0_0_0;
static ParameterInfo t1546_m8628_ParameterInfos[] = 
{
	{"str1", 0, 134220848, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset1", 1, 134220849, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length1", 2, 134220850, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"str2", 3, 134220851, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset2", 4, 134220852, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length2", 5, 134220853, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 6, 134220854, &EmptyCustomAttributesCache, &t1547_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8628_MI = 
{
	"internal_compare_managed", (methodPointerType)&m8628, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125, t1546_m8628_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 2368, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1547_0_0_0;
static ParameterInfo t1546_m8629_ParameterInfos[] = 
{
	{"str1", 0, 134220855, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset1", 1, 134220856, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length1", 2, 134220857, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"str2", 3, 134220858, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset2", 4, 134220859, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length2", 5, 134220860, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 6, 134220861, &EmptyCustomAttributesCache, &t1547_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8629_MI = 
{
	"internal_compare_switch", (methodPointerType)&m8629, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125, t1546_m8629_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 2369, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1546_m8630_ParameterInfos[] = 
{
	{"string1", 0, 134220862, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"string2", 1, 134220863, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8630_MI = 
{
	"Compare", (methodPointerType)&m8630, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1546_m8630_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 2, false, false, 2370, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1547_0_0_0;
static ParameterInfo t1546_m6971_ParameterInfos[] = 
{
	{"string1", 0, 134220864, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"string2", 1, 134220865, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 2, 134220866, &EmptyCustomAttributesCache, &t1547_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6971_MI = 
{
	"Compare", (methodPointerType)&m6971, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9_t125, t1546_m6971_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 3, false, false, 2371, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1547_0_0_0;
static ParameterInfo t1546_m8631_ParameterInfos[] = 
{
	{"string1", 0, 134220867, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset1", 1, 134220868, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length1", 2, 134220869, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"string2", 3, 134220870, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset2", 4, 134220871, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length2", 5, 134220872, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 6, 134220873, &EmptyCustomAttributesCache, &t1547_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8631_MI = 
{
	"Compare", (methodPointerType)&m8631, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125, t1546_m8631_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 7, false, false, 2372, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1546_m8632_ParameterInfos[] = 
{
	{"value", 0, 134220874, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8632_MI = 
{
	"Equals", (methodPointerType)&m8632, &t1546_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1546_m8632_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 2373, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8633_MI = 
{
	"GetHashCode", (methodPointerType)&m8633, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 2374, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1547_0_0_0;
static ParameterInfo t1546_m8634_ParameterInfos[] = 
{
	{"source", 0, 134220875, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 1, 134220876, &EmptyCustomAttributesCache, &t1547_0_0_0},
};
extern Il2CppType t1617_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8634_MI = 
{
	"GetSortKey", (methodPointerType)&m8634, &t1546_TI, &t1617_0_0_0, RuntimeInvoker_t9_t9_t125, t1546_m8634_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 2, false, false, 2375, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1546_m8635_ParameterInfos[] = 
{
	{"source", 0, 134220877, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134220878, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 2, 134220879, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134220880, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8635_MI = 
{
	"IndexOf", (methodPointerType)&m8635, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9_t125_t125, t1546_m8635_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 4, false, false, 2376, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1547_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1546_m8636_ParameterInfos[] = 
{
	{"s1", 0, 134220881, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"sindex", 1, 134220882, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220883, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"s2", 3, 134220884, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"opt", 4, 134220885, &EmptyCustomAttributesCache, &t1547_0_0_0},
	{"first", 5, 134220886, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8636_MI = 
{
	"internal_index_managed", (methodPointerType)&m8636, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186, t1546_m8636_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 2377, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1547_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1546_m8637_ParameterInfos[] = 
{
	{"s1", 0, 134220887, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"sindex", 1, 134220888, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220889, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"s2", 3, 134220890, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"opt", 4, 134220891, &EmptyCustomAttributesCache, &t1547_0_0_0},
	{"first", 5, 134220892, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8637_MI = 
{
	"internal_index_switch", (methodPointerType)&m8637, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186, t1546_m8637_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 2378, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1547_0_0_0;
static ParameterInfo t1546_m8638_ParameterInfos[] = 
{
	{"source", 0, 134220893, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134220894, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 2, 134220895, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134220896, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 4, 134220897, &EmptyCustomAttributesCache, &t1547_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8638_MI = 
{
	"IndexOf", (methodPointerType)&m8638, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9_t125_t125_t125, t1546_m8638_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 5, false, false, 2379, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1547_0_0_0;
static ParameterInfo t1546_m8639_ParameterInfos[] = 
{
	{"source", 0, 134220898, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"prefix", 1, 134220899, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 2, 134220900, &EmptyCustomAttributesCache, &t1547_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8639_MI = 
{
	"IsPrefix", (methodPointerType)&m8639, &t1546_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9_t125, t1546_m8639_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 3, false, false, 2380, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1547_0_0_0;
static ParameterInfo t1546_m8640_ParameterInfos[] = 
{
	{"source", 0, 134220901, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"suffix", 1, 134220902, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 2, 134220903, &EmptyCustomAttributesCache, &t1547_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8640_MI = 
{
	"IsSuffix", (methodPointerType)&m8640, &t1546_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9_t125, t1546_m8640_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 12, 3, false, false, 2381, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1546_m8641_ParameterInfos[] = 
{
	{"source", 0, 134220904, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134220905, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 2, 134220906, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134220907, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8641_MI = 
{
	"LastIndexOf", (methodPointerType)&m8641, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9_t125_t125, t1546_m8641_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 4, false, false, 2382, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1547_0_0_0;
static ParameterInfo t1546_m8642_ParameterInfos[] = 
{
	{"source", 0, 134220908, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134220909, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 2, 134220910, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134220911, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 4, 134220912, &EmptyCustomAttributesCache, &t1547_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8642_MI = 
{
	"LastIndexOf", (methodPointerType)&m8642, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9_t125_t125_t125, t1546_m8642_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 5, false, false, 2383, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8643_MI = 
{
	"ToString", (methodPointerType)&m8643, &t1546_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2384, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8644_MI = 
{
	"get_LCID", (methodPointerType)&m8644, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2385, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1546_MIs[] =
{
	&m8617_MI,
	&m8618_MI,
	&m8619_MI,
	&m8620_MI,
	&m8621_MI,
	&m8622_MI,
	&m8623_MI,
	&m8624_MI,
	&m8625_MI,
	&m8626_MI,
	&m8627_MI,
	&m8628_MI,
	&m8629_MI,
	&m8630_MI,
	&m6971_MI,
	&m8631_MI,
	&m8632_MI,
	&m8633_MI,
	&m8634_MI,
	&m8635_MI,
	&m8636_MI,
	&m8637_MI,
	&m8638_MI,
	&m8639_MI,
	&m8640_MI,
	&m8641_MI,
	&m8642_MI,
	&m8643_MI,
	&m8644_MI,
	NULL
};
extern Il2CppType t124_0_0_49;
FieldInfo t1546_f0_FieldInfo = 
{
	"useManagedCollation", &t124_0_0_49, &t1546_TI, offsetof(t1546_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1546_f1_FieldInfo = 
{
	"culture", &t125_0_0_1, &t1546_TI, offsetof(t1546, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t1546_f2_FieldInfo = 
{
	"icu_name", &t2_0_0_129, &t1546_TI, offsetof(t1546, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_129;
FieldInfo t1546_f3_FieldInfo = 
{
	"collator", &t1615_0_0_129, &t1546_TI, offsetof(t1546, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_17;
FieldInfo t1546_f4_FieldInfo = 
{
	"collators", &t1158_0_0_17, &t1546_TI, offsetof(t1546_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_145;
FieldInfo t1546_f5_FieldInfo = 
{
	"monitor", &t9_0_0_145, &t1546_TI, offsetof(t1546_SFs, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1546_FIs[] =
{
	&t1546_f0_FieldInfo,
	&t1546_f1_FieldInfo,
	&t1546_f2_FieldInfo,
	&t1546_f3_FieldInfo,
	&t1546_f4_FieldInfo,
	&t1546_f5_FieldInfo,
	NULL
};
extern MethodInfo m8621_MI;
static PropertyInfo t1546____UseManagedCollation_PropertyInfo = 
{
	&t1546_TI, "UseManagedCollation", &m8621_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8644_MI;
static PropertyInfo t1546____LCID_PropertyInfo = 
{
	&t1546_TI, "LCID", &m8644_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1546_PIs[] =
{
	&t1546____UseManagedCollation_PropertyInfo,
	&t1546____LCID_PropertyInfo,
	NULL
};
extern MethodInfo m8632_MI;
extern MethodInfo m8627_MI;
extern MethodInfo m8633_MI;
extern MethodInfo m8643_MI;
extern MethodInfo m8620_MI;
extern MethodInfo m8630_MI;
extern MethodInfo m6971_MI;
extern MethodInfo m8631_MI;
extern MethodInfo m8634_MI;
extern MethodInfo m8635_MI;
extern MethodInfo m8638_MI;
extern MethodInfo m8639_MI;
extern MethodInfo m8640_MI;
extern MethodInfo m8641_MI;
extern MethodInfo m8642_MI;
static Il2CppMethodReference t1546_VT[] =
{
	&m8632_MI,
	&m8627_MI,
	&m8633_MI,
	&m8643_MI,
	&m8620_MI,
	&m8630_MI,
	&m6971_MI,
	&m8631_MI,
	&m8634_MI,
	&m8635_MI,
	&m8638_MI,
	&m8639_MI,
	&m8640_MI,
	&m8641_MI,
	&m8642_MI,
};
static bool t1546_VTIGM[] =
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
extern Il2CppType t1106_0_0_0;
static const Il2CppType* t1546_ITIs[] = 
{
	&t1106_0_0_0,
};
static Il2CppInterfaceOffsetPair t1546_IOs[] = 
{
	{ &t1106_0_0_0, 4},
};
void t1546_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1546__CustomAttributeCache = {
1,
NULL,
&t1546_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1546_0_0_0;
extern Il2CppType t1546_1_0_0;
struct t1546;
extern CustomAttributesCache t1546__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1546_DM = 
{
	NULL, NULL, t1546_ITIs, t1546_IOs, &t9_0_0_0, t1546_VT, t1546_VTIGM, NULL};
TypeInfo t1546_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CompareInfo", "System.Globalization", t1546_MIs, t1546_PIs, t1546_FIs, NULL, &t1546_TI, NULL, &t1546__CustomAttributeCache, &t1546_0_0_0, &t1546_1_0_0, &t1546_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1546), sizeof (t1546), 0, -1, sizeof(t1546_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, true, true, false, 29, 2, 6, 0, 0, 15, 1, 1};
#include "t1547.h"
// Metadata Definition System.Globalization.CompareOptions
extern TypeInfo t1547_TI;
#include "t1547MD.h"
static MethodInfo* t1547_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1547_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1547_TI, offsetof(t1547, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1547_0_0_32854;
FieldInfo t1547_f2_FieldInfo = 
{
	"None", &t1547_0_0_32854, &t1547_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1547_0_0_32854;
FieldInfo t1547_f3_FieldInfo = 
{
	"IgnoreCase", &t1547_0_0_32854, &t1547_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1547_0_0_32854;
FieldInfo t1547_f4_FieldInfo = 
{
	"IgnoreNonSpace", &t1547_0_0_32854, &t1547_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1547_0_0_32854;
FieldInfo t1547_f5_FieldInfo = 
{
	"IgnoreSymbols", &t1547_0_0_32854, &t1547_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1547_0_0_32854;
FieldInfo t1547_f6_FieldInfo = 
{
	"IgnoreKanaType", &t1547_0_0_32854, &t1547_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1547_0_0_32854;
FieldInfo t1547_f7_FieldInfo = 
{
	"IgnoreWidth", &t1547_0_0_32854, &t1547_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1547_0_0_32854;
FieldInfo t1547_f8_FieldInfo = 
{
	"StringSort", &t1547_0_0_32854, &t1547_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1547_0_0_32854;
FieldInfo t1547_f9_FieldInfo = 
{
	"Ordinal", &t1547_0_0_32854, &t1547_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1547_0_0_32854;
FieldInfo t1547_f10_FieldInfo = 
{
	"OrdinalIgnoreCase", &t1547_0_0_32854, &t1547_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1547_FIs[] =
{
	&t1547_f1_FieldInfo,
	&t1547_f2_FieldInfo,
	&t1547_f3_FieldInfo,
	&t1547_f4_FieldInfo,
	&t1547_f5_FieldInfo,
	&t1547_f6_FieldInfo,
	&t1547_f7_FieldInfo,
	&t1547_f8_FieldInfo,
	&t1547_f9_FieldInfo,
	&t1547_f10_FieldInfo,
	NULL
};
static const int32_t t1547_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1547_f2_DefaultValue = 
{
	&t1547_f2_FieldInfo, { (char*)&t1547_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1547_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1547_f3_DefaultValue = 
{
	&t1547_f3_FieldInfo, { (char*)&t1547_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1547_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1547_f4_DefaultValue = 
{
	&t1547_f4_FieldInfo, { (char*)&t1547_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1547_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1547_f5_DefaultValue = 
{
	&t1547_f5_FieldInfo, { (char*)&t1547_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1547_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1547_f6_DefaultValue = 
{
	&t1547_f6_FieldInfo, { (char*)&t1547_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1547_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1547_f7_DefaultValue = 
{
	&t1547_f7_FieldInfo, { (char*)&t1547_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1547_f8_DefaultValueData = 536870912;
static Il2CppFieldDefaultValueEntry t1547_f8_DefaultValue = 
{
	&t1547_f8_FieldInfo, { (char*)&t1547_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1547_f9_DefaultValueData = 1073741824;
static Il2CppFieldDefaultValueEntry t1547_f9_DefaultValue = 
{
	&t1547_f9_FieldInfo, { (char*)&t1547_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1547_f10_DefaultValueData = 268435456;
static Il2CppFieldDefaultValueEntry t1547_f10_DefaultValue = 
{
	&t1547_f10_FieldInfo, { (char*)&t1547_f10_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1547_FDVs[] = 
{
	&t1547_f2_DefaultValue,
	&t1547_f3_DefaultValue,
	&t1547_f4_DefaultValue,
	&t1547_f5_DefaultValue,
	&t1547_f6_DefaultValue,
	&t1547_f7_DefaultValue,
	&t1547_f8_DefaultValue,
	&t1547_f9_DefaultValue,
	&t1547_f10_DefaultValue,
	NULL
};
static Il2CppMethodReference t1547_VT[] =
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
};
static Il2CppInterfaceOffsetPair t1547_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1547_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t615 * tmp;
		tmp = (t615 *)il2cpp_codegen_object_new (&t615_TI);
		m2991(tmp, &m2991_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1547__CustomAttributeCache = {
2,
NULL,
&t1547_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1547_1_0_0;
extern CustomAttributesCache t1547__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1547_DM = 
{
	NULL, NULL, NULL, t1547_IOs, &t8_0_0_0, t1547_VT, t1547_VTIGM, NULL};
TypeInfo t1547_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CompareOptions", "System.Globalization", t1547_MIs, NULL, t1547_FIs, NULL, &t125_TI, NULL, &t1547__CustomAttributeCache, &t1547_0_0_0, &t1547_1_0_0, &t1547_DM, NULL, NULL, NULL, t1547_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1547)+ sizeof (Il2CppObject), sizeof (t1547)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 10, 0, 0, 23, 0, 3};
#include "t901.h"
// Metadata Definition System.Globalization.CultureInfo
extern TypeInfo t901_TI;
#include "t901MD.h"
extern Il2CppType t125_0_0_0;
static ParameterInfo t901_m8645_ParameterInfos[] = 
{
	{"culture", 0, 134220913, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8645_MI = 
{
	".ctor", (methodPointerType)&m8645, &t901_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t901_m8645_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2386, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t901_m8646_ParameterInfos[] = 
{
	{"culture", 0, 134220914, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"useUserOverride", 1, 134220915, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8646_MI = 
{
	".ctor", (methodPointerType)&m8646, &t901_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t901_m8646_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2387, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t901_m8647_ParameterInfos[] = 
{
	{"culture", 0, 134220916, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"useUserOverride", 1, 134220917, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"read_only", 2, 134220918, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8647_MI = 
{
	".ctor", (methodPointerType)&m8647, &t901_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186_t186, t901_m8647_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 3, false, false, 2388, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t901_m8648_ParameterInfos[] = 
{
	{"name", 0, 134220919, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"useUserOverride", 1, 134220920, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"read_only", 2, 134220921, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8648_MI = 
{
	".ctor", (methodPointerType)&m8648, &t901_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t186, t901_m8648_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 3, false, false, 2389, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8649_MI = 
{
	".ctor", (methodPointerType)&m8649, &t901_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6273, 0, 255, 0, false, false, 2390, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8650_MI = 
{
	".cctor", (methodPointerType)&m8650, &t901_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2391, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t901_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4358_MI = 
{
	"get_InvariantCulture", (methodPointerType)&m4358, &t901_TI, &t901_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2392, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t901_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6969_MI = 
{
	"get_CurrentCulture", (methodPointerType)&m6969, &t901_TI, &t901_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2393, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t901_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6973_MI = 
{
	"get_CurrentUICulture", (methodPointerType)&m6973, &t901_TI, &t901_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2394, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t901_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8651_MI = 
{
	"ConstructCurrentCulture", (methodPointerType)&m8651, &t901_TI, &t901_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 2395, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t901_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8652_MI = 
{
	"ConstructCurrentUICulture", (methodPointerType)&m8652, &t901_TI, &t901_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 2396, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8653_MI = 
{
	"get_LCID", (methodPointerType)&m8653, &t901_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 5, 0, false, false, 2397, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8654_MI = 
{
	"get_Name", (methodPointerType)&m8654, &t901_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 2398, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t901_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8655_MI = 
{
	"get_Parent", (methodPointerType)&m8655, &t901_TI, &t901_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 7, 0, false, false, 2399, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1616_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8656_MI = 
{
	"get_TextInfo", (methodPointerType)&m8656, &t901_TI, &t1616_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 2400, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8657_MI = 
{
	"get_IcuName", (methodPointerType)&m8657, &t901_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2401, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t901_m8658_ParameterInfos[] = 
{
	{"value", 0, 134220922, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8658_MI = 
{
	"Equals", (methodPointerType)&m8658, &t901_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t901_m8658_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 2402, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8659_MI = 
{
	"GetHashCode", (methodPointerType)&m8659, &t901_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 2403, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8660_MI = 
{
	"ToString", (methodPointerType)&m8660, &t901_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2404, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1546_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6970_MI = 
{
	"get_CompareInfo", (methodPointerType)&m6970, &t901_TI, &t1546_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 2405, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8661_MI = 
{
	"get_IsNeutralCulture", (methodPointerType)&m8661, &t901_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 10, 0, false, false, 2406, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8662_MI = 
{
	"CheckNeutral", (methodPointerType)&m8662, &t901_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2407, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1555_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8663_MI = 
{
	"get_NumberFormat", (methodPointerType)&m8663, &t901_TI, &t1555_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 2408, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1704_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8664_MI = 
{
	"get_DateTimeFormat", (methodPointerType)&m8664, &t901_TI, &t1704_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 12, 0, false, false, 2409, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8665_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m8665, &t901_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2410, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t901_m8666_ParameterInfos[] = 
{
	{"formatType", 0, 134220923, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8666_MI = 
{
	"GetFormat", (methodPointerType)&m8666, &t901_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t901_m8666_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 1, false, false, 2411, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8667_MI = 
{
	"Construct", (methodPointerType)&m8667, &t901_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2412, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t901_m8668_ParameterInfos[] = 
{
	{"locale", 0, 134220924, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8668_MI = 
{
	"ConstructInternalLocaleFromName", (methodPointerType)&m8668, &t901_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t901_m8668_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2413, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t901_m8669_ParameterInfos[] = 
{
	{"lcid", 0, 134220925, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8669_MI = 
{
	"ConstructInternalLocaleFromLcid", (methodPointerType)&m8669, &t901_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t901_m8669_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2414, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t901_0_0_0;
static ParameterInfo t901_m8670_ParameterInfos[] = 
{
	{"ci", 0, 134220926, &EmptyCustomAttributesCache, &t901_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8670_MI = 
{
	"ConstructInternalLocaleFromCurrentLocale", (methodPointerType)&m8670, &t901_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t901_m8670_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2415, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t901_m8671_ParameterInfos[] = 
{
	{"lcid", 0, 134220927, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8671_MI = 
{
	"construct_internal_locale_from_lcid", (methodPointerType)&m8671, &t901_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t901_m8671_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 2416, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t901_m8672_ParameterInfos[] = 
{
	{"name", 0, 134220928, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8672_MI = 
{
	"construct_internal_locale_from_name", (methodPointerType)&m8672, &t901_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t901_m8672_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 2417, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t901_0_0_0;
static ParameterInfo t901_m8673_ParameterInfos[] = 
{
	{"ci", 0, 134220929, &EmptyCustomAttributesCache, &t901_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8673_MI = 
{
	"construct_internal_locale_from_current_locale", (methodPointerType)&m8673, &t901_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t901_m8673_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 2418, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8674_MI = 
{
	"construct_datetime_format", (methodPointerType)&m8674, &t901_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 4096, 255, 0, false, false, 2419, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8675_MI = 
{
	"construct_number_format", (methodPointerType)&m8675, &t901_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 4096, 255, 0, false, false, 2420, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t901_m8676_ParameterInfos[] = 
{
	{"read_only", 0, 134220930, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8676_MI = 
{
	"ConstructInvariant", (methodPointerType)&m8676, &t901_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t901_m8676_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2421, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t901_m8677_ParameterInfos[] = 
{
	{"readOnly", 0, 134220931, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1616_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8677_MI = 
{
	"CreateTextInfo", (methodPointerType)&m8677, &t901_TI, &t1616_0_0_0, RuntimeInvoker_t9_t186, t901_m8677_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2422, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t901_m8678_ParameterInfos[] = 
{
	{"name", 0, 134220932, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"reference", 1, 134220933, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t901_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8678_MI = 
{
	"CreateCulture", (methodPointerType)&m8678, &t901_TI, &t901_0_0_0, RuntimeInvoker_t9_t9_t186, t901_m8678_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 2423, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t901_MIs[] =
{
	&m8645_MI,
	&m8646_MI,
	&m8647_MI,
	&m8648_MI,
	&m8649_MI,
	&m8650_MI,
	&m4358_MI,
	&m6969_MI,
	&m6973_MI,
	&m8651_MI,
	&m8652_MI,
	&m8653_MI,
	&m8654_MI,
	&m8655_MI,
	&m8656_MI,
	&m8657_MI,
	&m8658_MI,
	&m8659_MI,
	&m8660_MI,
	&m6970_MI,
	&m8661_MI,
	&m8662_MI,
	&m8663_MI,
	&m8664_MI,
	&m8665_MI,
	&m8666_MI,
	&m8667_MI,
	&m8668_MI,
	&m8669_MI,
	&m8670_MI,
	&m8671_MI,
	&m8672_MI,
	&m8673_MI,
	&m8674_MI,
	&m8675_MI,
	&m8676_MI,
	&m8677_MI,
	&m8678_MI,
	NULL
};
extern Il2CppType t125_0_0_32849;
FieldInfo t901_f0_FieldInfo = 
{
	"NumOptionalCalendars", &t125_0_0_32849, &t901_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_32849;
FieldInfo t901_f1_FieldInfo = 
{
	"GregorianTypeMask", &t125_0_0_32849, &t901_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_32849;
FieldInfo t901_f2_FieldInfo = 
{
	"CalendarTypeBits", &t125_0_0_32849, &t901_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_32849;
FieldInfo t901_f3_FieldInfo = 
{
	"InvariantCultureId", &t125_0_0_32849, &t901_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t901_0_0_17;
FieldInfo t901_f4_FieldInfo = 
{
	"invariant_culture_info", &t901_0_0_17, &t901_TI, offsetof(t901_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_17;
FieldInfo t901_f5_FieldInfo = 
{
	"shared_table_lock", &t9_0_0_17, &t901_TI, offsetof(t901_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_19;
FieldInfo t901_f6_FieldInfo = 
{
	"BootstrapCultureID", &t125_0_0_19, &t901_TI, offsetof(t901_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t901_f7_FieldInfo = 
{
	"m_isReadOnly", &t124_0_0_1, &t901_TI, offsetof(t901, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t901_f8_FieldInfo = 
{
	"cultureID", &t125_0_0_1, &t901_TI, offsetof(t901, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_129;
FieldInfo t901_f9_FieldInfo = 
{
	"parent_lcid", &t125_0_0_129, &t901_TI, offsetof(t901, f9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_129;
FieldInfo t901_f10_FieldInfo = 
{
	"specific_lcid", &t125_0_0_129, &t901_TI, offsetof(t901, f10), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_129;
FieldInfo t901_f11_FieldInfo = 
{
	"datetime_index", &t125_0_0_129, &t901_TI, offsetof(t901, f11), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_129;
FieldInfo t901_f12_FieldInfo = 
{
	"number_index", &t125_0_0_129, &t901_TI, offsetof(t901, f12), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t901_f13_FieldInfo = 
{
	"m_useUserOverride", &t124_0_0_1, &t901_TI, offsetof(t901, f13), &EmptyCustomAttributesCache};
extern Il2CppType t1555_0_0_129;
FieldInfo t901_f14_FieldInfo = 
{
	"numInfo", &t1555_0_0_129, &t901_TI, offsetof(t901, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1704_0_0_1;
FieldInfo t901_f15_FieldInfo = 
{
	"dateTimeInfo", &t1704_0_0_1, &t901_TI, offsetof(t901, f15), &EmptyCustomAttributesCache};
extern Il2CppType t1616_0_0_1;
FieldInfo t901_f16_FieldInfo = 
{
	"textInfo", &t1616_0_0_1, &t901_TI, offsetof(t901, f16), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t901_f17_FieldInfo = 
{
	"m_name", &t2_0_0_1, &t901_TI, offsetof(t901, f17), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t901_f18_FieldInfo = 
{
	"displayname", &t2_0_0_129, &t901_TI, offsetof(t901, f18), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t901_f19_FieldInfo = 
{
	"englishname", &t2_0_0_129, &t901_TI, offsetof(t901, f19), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t901_f20_FieldInfo = 
{
	"nativename", &t2_0_0_129, &t901_TI, offsetof(t901, f20), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t901_f21_FieldInfo = 
{
	"iso3lang", &t2_0_0_129, &t901_TI, offsetof(t901, f21), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t901_f22_FieldInfo = 
{
	"iso2lang", &t2_0_0_129, &t901_TI, offsetof(t901, f22), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t901_f23_FieldInfo = 
{
	"icu_name", &t2_0_0_129, &t901_TI, offsetof(t901, f23), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t901_f24_FieldInfo = 
{
	"win3lang", &t2_0_0_129, &t901_TI, offsetof(t901, f24), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t901_f25_FieldInfo = 
{
	"territory", &t2_0_0_129, &t901_TI, offsetof(t901, f25), &EmptyCustomAttributesCache};
extern Il2CppType t1546_0_0_1;
FieldInfo t901_f26_FieldInfo = 
{
	"compareInfo", &t1546_0_0_1, &t901_TI, offsetof(t901, f26), &EmptyCustomAttributesCache};
extern Il2CppType t2586_0_0_161;
FieldInfo t901_f27_FieldInfo = 
{
	"calendar_data", &t2586_0_0_161, &t901_TI, offsetof(t901, f27), &EmptyCustomAttributesCache};
extern Il2CppType t2256_0_0_161;
FieldInfo t901_f28_FieldInfo = 
{
	"textinfo_data", &t2256_0_0_161, &t901_TI, offsetof(t901, f28), &EmptyCustomAttributesCache};
extern Il2CppType t1705_0_0_129;
FieldInfo t901_f29_FieldInfo = 
{
	"optional_calendars", &t1705_0_0_129, &t901_TI, offsetof(t901, f29), &EmptyCustomAttributesCache};
extern Il2CppType t901_0_0_129;
FieldInfo t901_f30_FieldInfo = 
{
	"parent_culture", &t901_0_0_129, &t901_TI, offsetof(t901, f30), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t901_f31_FieldInfo = 
{
	"m_dataItem", &t125_0_0_1, &t901_TI, offsetof(t901, f31), &EmptyCustomAttributesCache};
extern Il2CppType t1699_0_0_1;
FieldInfo t901_f32_FieldInfo = 
{
	"calendar", &t1699_0_0_1, &t901_TI, offsetof(t901, f32), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_129;
FieldInfo t901_f33_FieldInfo = 
{
	"constructed", &t124_0_0_129, &t901_TI, offsetof(t901, f33), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_131;
FieldInfo t901_f34_FieldInfo = 
{
	"cached_serialized_form", &t730_0_0_131, &t901_TI, offsetof(t901, f34), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_49;
FieldInfo t901_f35_FieldInfo = 
{
	"MSG_READONLY", &t2_0_0_49, &t901_TI, offsetof(t901_SFs, f35), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_17;
FieldInfo t901_f36_FieldInfo = 
{
	"shared_by_number", &t1158_0_0_17, &t901_TI, offsetof(t901_SFs, f36), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_17;
FieldInfo t901_f37_FieldInfo = 
{
	"shared_by_name", &t1158_0_0_17, &t901_TI, offsetof(t901_SFs, f37), &EmptyCustomAttributesCache};
extern Il2CppType t720_0_0_17;
extern CustomAttributesCache t901__CustomAttributeCache_U3CU3Ef__switch$map19;
FieldInfo t901_f38_FieldInfo = 
{
	"<>f__switch$map19", &t720_0_0_17, &t901_TI, offsetof(t901_SFs, f38), &t901__CustomAttributeCache_U3CU3Ef__switch$map19};
extern Il2CppType t720_0_0_17;
extern CustomAttributesCache t901__CustomAttributeCache_U3CU3Ef__switch$map1A;
FieldInfo t901_f39_FieldInfo = 
{
	"<>f__switch$map1A", &t720_0_0_17, &t901_TI, offsetof(t901_SFs, f39), &t901__CustomAttributeCache_U3CU3Ef__switch$map1A};
static FieldInfo* t901_FIs[] =
{
	&t901_f0_FieldInfo,
	&t901_f1_FieldInfo,
	&t901_f2_FieldInfo,
	&t901_f3_FieldInfo,
	&t901_f4_FieldInfo,
	&t901_f5_FieldInfo,
	&t901_f6_FieldInfo,
	&t901_f7_FieldInfo,
	&t901_f8_FieldInfo,
	&t901_f9_FieldInfo,
	&t901_f10_FieldInfo,
	&t901_f11_FieldInfo,
	&t901_f12_FieldInfo,
	&t901_f13_FieldInfo,
	&t901_f14_FieldInfo,
	&t901_f15_FieldInfo,
	&t901_f16_FieldInfo,
	&t901_f17_FieldInfo,
	&t901_f18_FieldInfo,
	&t901_f19_FieldInfo,
	&t901_f20_FieldInfo,
	&t901_f21_FieldInfo,
	&t901_f22_FieldInfo,
	&t901_f23_FieldInfo,
	&t901_f24_FieldInfo,
	&t901_f25_FieldInfo,
	&t901_f26_FieldInfo,
	&t901_f27_FieldInfo,
	&t901_f28_FieldInfo,
	&t901_f29_FieldInfo,
	&t901_f30_FieldInfo,
	&t901_f31_FieldInfo,
	&t901_f32_FieldInfo,
	&t901_f33_FieldInfo,
	&t901_f34_FieldInfo,
	&t901_f35_FieldInfo,
	&t901_f36_FieldInfo,
	&t901_f37_FieldInfo,
	&t901_f38_FieldInfo,
	&t901_f39_FieldInfo,
	NULL
};
static const int32_t t901_f0_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t901_f0_DefaultValue = 
{
	&t901_f0_FieldInfo, { (char*)&t901_f0_DefaultValueData, &t125_0_0_0 }};
static const int32_t t901_f1_DefaultValueData = 16777215;
static Il2CppFieldDefaultValueEntry t901_f1_DefaultValue = 
{
	&t901_f1_FieldInfo, { (char*)&t901_f1_DefaultValueData, &t125_0_0_0 }};
static const int32_t t901_f2_DefaultValueData = 24;
static Il2CppFieldDefaultValueEntry t901_f2_DefaultValue = 
{
	&t901_f2_FieldInfo, { (char*)&t901_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t901_f3_DefaultValueData = 127;
static Il2CppFieldDefaultValueEntry t901_f3_DefaultValue = 
{
	&t901_f3_FieldInfo, { (char*)&t901_f3_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t901_FDVs[] = 
{
	&t901_f0_DefaultValue,
	&t901_f1_DefaultValue,
	&t901_f2_DefaultValue,
	&t901_f3_DefaultValue,
	NULL
};
extern MethodInfo m4358_MI;
static PropertyInfo t901____InvariantCulture_PropertyInfo = 
{
	&t901_TI, "InvariantCulture", &m4358_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6969_MI;
static PropertyInfo t901____CurrentCulture_PropertyInfo = 
{
	&t901_TI, "CurrentCulture", &m6969_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6973_MI;
static PropertyInfo t901____CurrentUICulture_PropertyInfo = 
{
	&t901_TI, "CurrentUICulture", &m6973_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8653_MI;
static PropertyInfo t901____LCID_PropertyInfo = 
{
	&t901_TI, "LCID", &m8653_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8654_MI;
static PropertyInfo t901____Name_PropertyInfo = 
{
	&t901_TI, "Name", &m8654_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8655_MI;
static PropertyInfo t901____Parent_PropertyInfo = 
{
	&t901_TI, "Parent", &m8655_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8656_MI;
static PropertyInfo t901____TextInfo_PropertyInfo = 
{
	&t901_TI, "TextInfo", &m8656_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8657_MI;
static PropertyInfo t901____IcuName_PropertyInfo = 
{
	&t901_TI, "IcuName", &m8657_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6970_MI;
static PropertyInfo t901____CompareInfo_PropertyInfo = 
{
	&t901_TI, "CompareInfo", &m6970_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8661_MI;
static PropertyInfo t901____IsNeutralCulture_PropertyInfo = 
{
	&t901_TI, "IsNeutralCulture", &m8661_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8663_MI;
static PropertyInfo t901____NumberFormat_PropertyInfo = 
{
	&t901_TI, "NumberFormat", &m8663_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8664_MI;
static PropertyInfo t901____DateTimeFormat_PropertyInfo = 
{
	&t901_TI, "DateTimeFormat", &m8664_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8665_MI;
static PropertyInfo t901____IsReadOnly_PropertyInfo = 
{
	&t901_TI, "IsReadOnly", &m8665_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t901_PIs[] =
{
	&t901____InvariantCulture_PropertyInfo,
	&t901____CurrentCulture_PropertyInfo,
	&t901____CurrentUICulture_PropertyInfo,
	&t901____LCID_PropertyInfo,
	&t901____Name_PropertyInfo,
	&t901____Parent_PropertyInfo,
	&t901____TextInfo_PropertyInfo,
	&t901____IcuName_PropertyInfo,
	&t901____CompareInfo_PropertyInfo,
	&t901____IsNeutralCulture_PropertyInfo,
	&t901____NumberFormat_PropertyInfo,
	&t901____DateTimeFormat_PropertyInfo,
	&t901____IsReadOnly_PropertyInfo,
	NULL
};
extern MethodInfo m8658_MI;
extern MethodInfo m8659_MI;
extern MethodInfo m8660_MI;
extern MethodInfo m8666_MI;
static Il2CppMethodReference t901_VT[] =
{
	&m8658_MI,
	&m646_MI,
	&m8659_MI,
	&m8660_MI,
	&m8666_MI,
	&m8653_MI,
	&m8654_MI,
	&m8655_MI,
	&m8656_MI,
	&m6970_MI,
	&m8661_MI,
	&m8663_MI,
	&m8664_MI,
	&m8666_MI,
};
static bool t901_VTIGM[] =
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
extern Il2CppType t906_0_0_0;
static const Il2CppType* t901_ITIs[] = 
{
	&t622_0_0_0,
	&t906_0_0_0,
};
static Il2CppInterfaceOffsetPair t901_IOs[] = 
{
	{ &t622_0_0_0, 4},
	{ &t906_0_0_0, 4},
};
void t901_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t187_TI;
#include "t187.h"
#include "t187MD.h"
extern MethodInfo m674_MI;
void t901_CustomAttributesCacheGenerator_U3CU3Ef__switch$map19(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t901_CustomAttributesCacheGenerator_U3CU3Ef__switch$map1A(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t901__CustomAttributeCache = {
1,
NULL,
&t901_CustomAttributesCacheGenerator
};
CustomAttributesCache t901__CustomAttributeCache_U3CU3Ef__switch$map19 = {
1,
NULL,
&t901_CustomAttributesCacheGenerator_U3CU3Ef__switch$map19
};
CustomAttributesCache t901__CustomAttributeCache_U3CU3Ef__switch$map1A = {
1,
NULL,
&t901_CustomAttributesCacheGenerator_U3CU3Ef__switch$map1A
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t901_1_0_0;
struct t901;
extern CustomAttributesCache t901__CustomAttributeCache;
extern CustomAttributesCache t901__CustomAttributeCache_U3CU3Ef__switch$map19;
extern CustomAttributesCache t901__CustomAttributeCache_U3CU3Ef__switch$map1A;
const Il2CppTypeDefinitionMetadata t901_DM = 
{
	NULL, NULL, t901_ITIs, t901_IOs, &t9_0_0_0, t901_VT, t901_VTIGM, NULL};
TypeInfo t901_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CultureInfo", "System.Globalization", t901_MIs, t901_PIs, t901_FIs, NULL, &t901_TI, NULL, &t901__CustomAttributeCache, &t901_0_0_0, &t901_1_0_0, &t901_DM, NULL, NULL, NULL, t901_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t901), sizeof (t901), 0, -1, sizeof(t901_SFs), 0, -1, 8193, 0, 0, false, false, false, false, false, false, false, false, true, false, 38, 13, 40, 0, 0, 14, 2, 2};
#include "t1706.h"
// Metadata Definition System.Globalization.DateTimeFormatFlags
extern TypeInfo t1706_TI;
#include "t1706MD.h"
static MethodInfo* t1706_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1706_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1706_TI, offsetof(t1706, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f2_FieldInfo = 
{
	"Unused", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f3_FieldInfo = 
{
	"But", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f4_FieldInfo = 
{
	"Serialized", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f5_FieldInfo = 
{
	"By", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f6_FieldInfo = 
{
	"Microsoft", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1706_FIs[] =
{
	&t1706_f1_FieldInfo,
	&t1706_f2_FieldInfo,
	&t1706_f3_FieldInfo,
	&t1706_f4_FieldInfo,
	&t1706_f5_FieldInfo,
	&t1706_f6_FieldInfo,
	NULL
};
static const int32_t t1706_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1706_f2_DefaultValue = 
{
	&t1706_f2_FieldInfo, { (char*)&t1706_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1706_f3_DefaultValue = 
{
	&t1706_f3_FieldInfo, { (char*)&t1706_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1706_f4_DefaultValue = 
{
	&t1706_f4_FieldInfo, { (char*)&t1706_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1706_f5_DefaultValue = 
{
	&t1706_f5_FieldInfo, { (char*)&t1706_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1706_f6_DefaultValue = 
{
	&t1706_f6_FieldInfo, { (char*)&t1706_f6_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1706_FDVs[] = 
{
	&t1706_f2_DefaultValue,
	&t1706_f3_DefaultValue,
	&t1706_f4_DefaultValue,
	&t1706_f5_DefaultValue,
	&t1706_f6_DefaultValue,
	NULL
};
static Il2CppMethodReference t1706_VT[] =
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
static bool t1706_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1706_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1706_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t615 * tmp;
		tmp = (t615 *)il2cpp_codegen_object_new (&t615_TI);
		m2991(tmp, &m2991_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1706__CustomAttributeCache = {
1,
NULL,
&t1706_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1706_0_0_0;
extern Il2CppType t1706_1_0_0;
extern CustomAttributesCache t1706__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1706_DM = 
{
	NULL, NULL, NULL, t1706_IOs, &t8_0_0_0, t1706_VT, t1706_VTIGM, NULL};
TypeInfo t1706_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DateTimeFormatFlags", "System.Globalization", t1706_MIs, NULL, t1706_FIs, NULL, &t125_TI, NULL, &t1706__CustomAttributeCache, &t1706_0_0_0, &t1706_1_0_0, &t1706_DM, NULL, NULL, NULL, t1706_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1706)+ sizeof (Il2CppObject), sizeof (t1706)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1704.h"
// Metadata Definition System.Globalization.DateTimeFormatInfo
extern TypeInfo t1704_TI;
#include "t1704MD.h"
extern Il2CppType t124_0_0_0;
static ParameterInfo t1704_m8679_ParameterInfos[] = 
{
	{"read_only", 0, 134220934, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8679_MI = 
{
	".ctor", (methodPointerType)&m8679, &t1704_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1704_m8679_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2424, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8680_MI = 
{
	".ctor", (methodPointerType)&m8680, &t1704_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2425, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8681_MI = 
{
	".cctor", (methodPointerType)&m8681, &t1704_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2426, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t906_0_0_0;
static ParameterInfo t1704_m8682_ParameterInfos[] = 
{
	{"provider", 0, 134220935, &EmptyCustomAttributesCache, &t906_0_0_0},
};
extern Il2CppType t1704_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8682_MI = 
{
	"GetInstance", (methodPointerType)&m8682, &t1704_TI, &t1704_0_0_0, RuntimeInvoker_t9_t9, t1704_m8682_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2427, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8683_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m8683, &t1704_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2428, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1704_0_0_0;
extern Il2CppType t1704_0_0_0;
static ParameterInfo t1704_m8684_ParameterInfos[] = 
{
	{"dtfi", 0, 134220936, &EmptyCustomAttributesCache, &t1704_0_0_0},
};
extern Il2CppType t1704_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8684_MI = 
{
	"ReadOnly", (methodPointerType)&m8684, &t1704_TI, &t1704_0_0_0, RuntimeInvoker_t9_t9, t1704_m8684_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2429, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8685_MI = 
{
	"Clone", (methodPointerType)&m8685, &t1704_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 2430, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1704_m8686_ParameterInfos[] = 
{
	{"formatType", 0, 134220937, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8686_MI = 
{
	"GetFormat", (methodPointerType)&m8686, &t1704_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1704_m8686_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, false, 2431, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1704_m8687_ParameterInfos[] = 
{
	{"month", 0, 134220938, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8687_MI = 
{
	"GetAbbreviatedMonthName", (methodPointerType)&m8687, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9_t125, t1704_m8687_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2432, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1704_m8688_ParameterInfos[] = 
{
	{"era", 0, 134220939, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8688_MI = 
{
	"GetEraName", (methodPointerType)&m8688, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9_t125, t1704_m8688_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2433, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1704_m8689_ParameterInfos[] = 
{
	{"month", 0, 134220940, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8689_MI = 
{
	"GetMonthName", (methodPointerType)&m8689, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9_t125, t1704_m8689_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2434, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8690_MI = 
{
	"get_RawAbbreviatedDayNames", (methodPointerType)&m8690, &t1704_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2435, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8691_MI = 
{
	"get_RawAbbreviatedMonthNames", (methodPointerType)&m8691, &t1704_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2436, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8692_MI = 
{
	"get_RawDayNames", (methodPointerType)&m8692, &t1704_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2437, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8693_MI = 
{
	"get_RawMonthNames", (methodPointerType)&m8693, &t1704_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2438, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8694_MI = 
{
	"get_AMDesignator", (methodPointerType)&m8694, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2439, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8695_MI = 
{
	"get_PMDesignator", (methodPointerType)&m8695, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2440, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8696_MI = 
{
	"get_DateSeparator", (methodPointerType)&m8696, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2441, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8697_MI = 
{
	"get_TimeSeparator", (methodPointerType)&m8697, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2442, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8698_MI = 
{
	"get_LongDatePattern", (methodPointerType)&m8698, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2443, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8699_MI = 
{
	"get_ShortDatePattern", (methodPointerType)&m8699, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2444, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8700_MI = 
{
	"get_ShortTimePattern", (methodPointerType)&m8700, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2445, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8701_MI = 
{
	"get_LongTimePattern", (methodPointerType)&m8701, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2446, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8702_MI = 
{
	"get_MonthDayPattern", (methodPointerType)&m8702, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2447, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8703_MI = 
{
	"get_YearMonthPattern", (methodPointerType)&m8703, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2448, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8704_MI = 
{
	"get_FullDateTimePattern", (methodPointerType)&m8704, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2449, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1704_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8705_MI = 
{
	"get_CurrentInfo", (methodPointerType)&m8705, &t1704_TI, &t1704_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2450, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1704_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8706_MI = 
{
	"get_InvariantInfo", (methodPointerType)&m8706, &t1704_TI, &t1704_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2451, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1699_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8707_MI = 
{
	"get_Calendar", (methodPointerType)&m8707, &t1704_TI, &t1699_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2452, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1699_0_0_0;
static ParameterInfo t1704_m8708_ParameterInfos[] = 
{
	{"value", 0, 134220941, &EmptyCustomAttributesCache, &t1699_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8708_MI = 
{
	"set_Calendar", (methodPointerType)&m8708, &t1704_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1704_m8708_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 2453, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8709_MI = 
{
	"get_RFC1123Pattern", (methodPointerType)&m8709, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2454, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8710_MI = 
{
	"get_RoundtripPattern", (methodPointerType)&m8710, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2455, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8711_MI = 
{
	"get_SortableDateTimePattern", (methodPointerType)&m8711, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2456, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8712_MI = 
{
	"get_UniversalSortableDateTimePattern", (methodPointerType)&m8712, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2457, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8713_MI = 
{
	"GetAllDateTimePatternsInternal", (methodPointerType)&m8713, &t1704_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2458, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8714_MI = 
{
	"FillAllDateTimePatterns", (methodPointerType)&m8714, &t1704_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2459, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t1704_m8715_ParameterInfos[] = 
{
	{"format", 0, 134220942, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m8715_MI = 
{
	"GetAllRawDateTimePatterns", (methodPointerType)&m8715, &t1704_TI, &t221_0_0_0, RuntimeInvoker_t9_t334, t1704_m8715_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 2460, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1700_0_0_0;
extern Il2CppType t1700_0_0_0;
static ParameterInfo t1704_m8716_ParameterInfos[] = 
{
	{"dayofweek", 0, 134220943, &EmptyCustomAttributesCache, &t1700_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8716_MI = 
{
	"GetDayName", (methodPointerType)&m8716, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9_t125, t1704_m8716_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2461, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1700_0_0_0;
static ParameterInfo t1704_m8717_ParameterInfos[] = 
{
	{"dayofweek", 0, 134220944, &EmptyCustomAttributesCache, &t1700_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8717_MI = 
{
	"GetAbbreviatedDayName", (methodPointerType)&m8717, &t1704_TI, &t2_0_0_0, RuntimeInvoker_t9_t125, t1704_m8717_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2462, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8718_MI = 
{
	"FillInvariantPatterns", (methodPointerType)&m8718, &t1704_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2463, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1704_m8719_ParameterInfos[] = 
{
	{"dates", 0, 134220945, &EmptyCustomAttributesCache, &t221_0_0_0},
	{"times", 1, 134220946, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8719_MI = 
{
	"PopulateCombinedList", (methodPointerType)&m8719, &t1704_TI, &t221_0_0_0, RuntimeInvoker_t9_t9_t9, t1704_m8719_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2464, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1704_MIs[] =
{
	&m8679_MI,
	&m8680_MI,
	&m8681_MI,
	&m8682_MI,
	&m8683_MI,
	&m8684_MI,
	&m8685_MI,
	&m8686_MI,
	&m8687_MI,
	&m8688_MI,
	&m8689_MI,
	&m8690_MI,
	&m8691_MI,
	&m8692_MI,
	&m8693_MI,
	&m8694_MI,
	&m8695_MI,
	&m8696_MI,
	&m8697_MI,
	&m8698_MI,
	&m8699_MI,
	&m8700_MI,
	&m8701_MI,
	&m8702_MI,
	&m8703_MI,
	&m8704_MI,
	&m8705_MI,
	&m8706_MI,
	&m8707_MI,
	&m8708_MI,
	&m8709_MI,
	&m8710_MI,
	&m8711_MI,
	&m8712_MI,
	&m8713_MI,
	&m8714_MI,
	&m8715_MI,
	&m8716_MI,
	&m8717_MI,
	&m8718_MI,
	&m8719_MI,
	NULL
};
extern Il2CppType t2_0_0_32849;
FieldInfo t1704_f0_FieldInfo = 
{
	"_RoundtripPattern", &t2_0_0_32849, &t1704_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_49;
FieldInfo t1704_f1_FieldInfo = 
{
	"MSG_READONLY", &t2_0_0_49, &t1704_TI, offsetof(t1704_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_49;
FieldInfo t1704_f2_FieldInfo = 
{
	"MSG_ARRAYSIZE_MONTH", &t2_0_0_49, &t1704_TI, offsetof(t1704_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_49;
FieldInfo t1704_f3_FieldInfo = 
{
	"MSG_ARRAYSIZE_DAY", &t2_0_0_49, &t1704_TI, offsetof(t1704_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1704_f4_FieldInfo = 
{
	"INVARIANT_ABBREVIATED_DAY_NAMES", &t221_0_0_49, &t1704_TI, offsetof(t1704_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1704_f5_FieldInfo = 
{
	"INVARIANT_DAY_NAMES", &t221_0_0_49, &t1704_TI, offsetof(t1704_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1704_f6_FieldInfo = 
{
	"INVARIANT_ABBREVIATED_MONTH_NAMES", &t221_0_0_49, &t1704_TI, offsetof(t1704_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1704_f7_FieldInfo = 
{
	"INVARIANT_MONTH_NAMES", &t221_0_0_49, &t1704_TI, offsetof(t1704_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1704_f8_FieldInfo = 
{
	"INVARIANT_SHORT_DAY_NAMES", &t221_0_0_49, &t1704_TI, offsetof(t1704_SFs, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1704_0_0_17;
FieldInfo t1704_f9_FieldInfo = 
{
	"theInvariantDateTimeFormatInfo", &t1704_0_0_17, &t1704_TI, offsetof(t1704_SFs, f9), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1704_f10_FieldInfo = 
{
	"m_isReadOnly", &t124_0_0_1, &t1704_TI, offsetof(t1704, f10), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f11_FieldInfo = 
{
	"amDesignator", &t2_0_0_1, &t1704_TI, offsetof(t1704, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f12_FieldInfo = 
{
	"pmDesignator", &t2_0_0_1, &t1704_TI, offsetof(t1704, f12), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f13_FieldInfo = 
{
	"dateSeparator", &t2_0_0_1, &t1704_TI, offsetof(t1704, f13), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f14_FieldInfo = 
{
	"timeSeparator", &t2_0_0_1, &t1704_TI, offsetof(t1704, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f15_FieldInfo = 
{
	"shortDatePattern", &t2_0_0_1, &t1704_TI, offsetof(t1704, f15), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f16_FieldInfo = 
{
	"longDatePattern", &t2_0_0_1, &t1704_TI, offsetof(t1704, f16), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f17_FieldInfo = 
{
	"shortTimePattern", &t2_0_0_1, &t1704_TI, offsetof(t1704, f17), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f18_FieldInfo = 
{
	"longTimePattern", &t2_0_0_1, &t1704_TI, offsetof(t1704, f18), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f19_FieldInfo = 
{
	"monthDayPattern", &t2_0_0_1, &t1704_TI, offsetof(t1704, f19), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f20_FieldInfo = 
{
	"yearMonthPattern", &t2_0_0_1, &t1704_TI, offsetof(t1704, f20), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f21_FieldInfo = 
{
	"fullDateTimePattern", &t2_0_0_1, &t1704_TI, offsetof(t1704, f21), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f22_FieldInfo = 
{
	"_RFC1123Pattern", &t2_0_0_1, &t1704_TI, offsetof(t1704, f22), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f23_FieldInfo = 
{
	"_SortableDateTimePattern", &t2_0_0_1, &t1704_TI, offsetof(t1704, f23), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f24_FieldInfo = 
{
	"_UniversalSortableDateTimePattern", &t2_0_0_1, &t1704_TI, offsetof(t1704, f24), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1704_f25_FieldInfo = 
{
	"firstDayOfWeek", &t125_0_0_1, &t1704_TI, offsetof(t1704, f25), &EmptyCustomAttributesCache};
extern Il2CppType t1699_0_0_1;
FieldInfo t1704_f26_FieldInfo = 
{
	"calendar", &t1699_0_0_1, &t1704_TI, offsetof(t1704, f26), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1704_f27_FieldInfo = 
{
	"calendarWeekRule", &t125_0_0_1, &t1704_TI, offsetof(t1704, f27), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f28_FieldInfo = 
{
	"abbreviatedDayNames", &t221_0_0_1, &t1704_TI, offsetof(t1704, f28), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f29_FieldInfo = 
{
	"dayNames", &t221_0_0_1, &t1704_TI, offsetof(t1704, f29), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f30_FieldInfo = 
{
	"monthNames", &t221_0_0_1, &t1704_TI, offsetof(t1704, f30), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f31_FieldInfo = 
{
	"abbreviatedMonthNames", &t221_0_0_1, &t1704_TI, offsetof(t1704, f31), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f32_FieldInfo = 
{
	"allShortDatePatterns", &t221_0_0_1, &t1704_TI, offsetof(t1704, f32), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f33_FieldInfo = 
{
	"allLongDatePatterns", &t221_0_0_1, &t1704_TI, offsetof(t1704, f33), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f34_FieldInfo = 
{
	"allShortTimePatterns", &t221_0_0_1, &t1704_TI, offsetof(t1704, f34), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f35_FieldInfo = 
{
	"allLongTimePatterns", &t221_0_0_1, &t1704_TI, offsetof(t1704, f35), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f36_FieldInfo = 
{
	"monthDayPatterns", &t221_0_0_1, &t1704_TI, offsetof(t1704, f36), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f37_FieldInfo = 
{
	"yearMonthPatterns", &t221_0_0_1, &t1704_TI, offsetof(t1704, f37), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f38_FieldInfo = 
{
	"shortDayNames", &t221_0_0_1, &t1704_TI, offsetof(t1704, f38), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1704_f39_FieldInfo = 
{
	"nDataItem", &t125_0_0_1, &t1704_TI, offsetof(t1704, f39), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1704_f40_FieldInfo = 
{
	"m_useUserOverride", &t124_0_0_1, &t1704_TI, offsetof(t1704, f40), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1704_f41_FieldInfo = 
{
	"m_isDefaultCalendar", &t124_0_0_1, &t1704_TI, offsetof(t1704, f41), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1704_f42_FieldInfo = 
{
	"CultureID", &t125_0_0_1, &t1704_TI, offsetof(t1704, f42), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1704_f43_FieldInfo = 
{
	"bUseCalendarInfo", &t124_0_0_1, &t1704_TI, offsetof(t1704, f43), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f44_FieldInfo = 
{
	"generalShortTimePattern", &t2_0_0_1, &t1704_TI, offsetof(t1704, f44), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f45_FieldInfo = 
{
	"generalLongTimePattern", &t2_0_0_1, &t1704_TI, offsetof(t1704, f45), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f46_FieldInfo = 
{
	"m_eraNames", &t221_0_0_1, &t1704_TI, offsetof(t1704, f46), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f47_FieldInfo = 
{
	"m_abbrevEraNames", &t221_0_0_1, &t1704_TI, offsetof(t1704, f47), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f48_FieldInfo = 
{
	"m_abbrevEnglishEraNames", &t221_0_0_1, &t1704_TI, offsetof(t1704, f48), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f49_FieldInfo = 
{
	"m_dateWords", &t221_0_0_1, &t1704_TI, offsetof(t1704, f49), &EmptyCustomAttributesCache};
extern Il2CppType t1095_0_0_1;
FieldInfo t1704_f50_FieldInfo = 
{
	"optionalCalendars", &t1095_0_0_1, &t1704_TI, offsetof(t1704, f50), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f51_FieldInfo = 
{
	"m_superShortDayNames", &t221_0_0_1, &t1704_TI, offsetof(t1704, f51), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f52_FieldInfo = 
{
	"genitiveMonthNames", &t221_0_0_1, &t1704_TI, offsetof(t1704, f52), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f53_FieldInfo = 
{
	"m_genitiveAbbreviatedMonthNames", &t221_0_0_1, &t1704_TI, offsetof(t1704, f53), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f54_FieldInfo = 
{
	"leapYearMonthNames", &t221_0_0_1, &t1704_TI, offsetof(t1704, f54), &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_1;
FieldInfo t1704_f55_FieldInfo = 
{
	"formatFlags", &t1706_0_0_1, &t1704_TI, offsetof(t1704, f55), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1704_f56_FieldInfo = 
{
	"m_name", &t2_0_0_1, &t1704_TI, offsetof(t1704, f56), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1704_f57_FieldInfo = 
{
	"all_date_time_patterns", &t221_0_0_1, &t1704_TI, offsetof(t1704, f57), &EmptyCustomAttributesCache};
static FieldInfo* t1704_FIs[] =
{
	&t1704_f0_FieldInfo,
	&t1704_f1_FieldInfo,
	&t1704_f2_FieldInfo,
	&t1704_f3_FieldInfo,
	&t1704_f4_FieldInfo,
	&t1704_f5_FieldInfo,
	&t1704_f6_FieldInfo,
	&t1704_f7_FieldInfo,
	&t1704_f8_FieldInfo,
	&t1704_f9_FieldInfo,
	&t1704_f10_FieldInfo,
	&t1704_f11_FieldInfo,
	&t1704_f12_FieldInfo,
	&t1704_f13_FieldInfo,
	&t1704_f14_FieldInfo,
	&t1704_f15_FieldInfo,
	&t1704_f16_FieldInfo,
	&t1704_f17_FieldInfo,
	&t1704_f18_FieldInfo,
	&t1704_f19_FieldInfo,
	&t1704_f20_FieldInfo,
	&t1704_f21_FieldInfo,
	&t1704_f22_FieldInfo,
	&t1704_f23_FieldInfo,
	&t1704_f24_FieldInfo,
	&t1704_f25_FieldInfo,
	&t1704_f26_FieldInfo,
	&t1704_f27_FieldInfo,
	&t1704_f28_FieldInfo,
	&t1704_f29_FieldInfo,
	&t1704_f30_FieldInfo,
	&t1704_f31_FieldInfo,
	&t1704_f32_FieldInfo,
	&t1704_f33_FieldInfo,
	&t1704_f34_FieldInfo,
	&t1704_f35_FieldInfo,
	&t1704_f36_FieldInfo,
	&t1704_f37_FieldInfo,
	&t1704_f38_FieldInfo,
	&t1704_f39_FieldInfo,
	&t1704_f40_FieldInfo,
	&t1704_f41_FieldInfo,
	&t1704_f42_FieldInfo,
	&t1704_f43_FieldInfo,
	&t1704_f44_FieldInfo,
	&t1704_f45_FieldInfo,
	&t1704_f46_FieldInfo,
	&t1704_f47_FieldInfo,
	&t1704_f48_FieldInfo,
	&t1704_f49_FieldInfo,
	&t1704_f50_FieldInfo,
	&t1704_f51_FieldInfo,
	&t1704_f52_FieldInfo,
	&t1704_f53_FieldInfo,
	&t1704_f54_FieldInfo,
	&t1704_f55_FieldInfo,
	&t1704_f56_FieldInfo,
	&t1704_f57_FieldInfo,
	NULL
};
static const uint16_t t1704_f0_DefaultValueData[] = { 0x79, 0x79, 0x79, 0x79, 0x27, 0x2D, 0x27, 0x4D, 0x4D, 0x27, 0x2D, 0x27, 0x64, 0x64, 0x27, 0x54, 0x27, 0x48, 0x48, 0x27, 0x3A, 0x27, 0x6D, 0x6D, 0x27, 0x3A, 0x27, 0x73, 0x73, 0x2E, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x4B, 0x00 };
static Il2CppFieldDefaultValueEntry t1704_f0_DefaultValue = 
{
	&t1704_f0_FieldInfo, { (char*)&t1704_f0_DefaultValueData, &t2_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1704_FDVs[] = 
{
	&t1704_f0_DefaultValue,
	NULL
};
extern MethodInfo m8683_MI;
static PropertyInfo t1704____IsReadOnly_PropertyInfo = 
{
	&t1704_TI, "IsReadOnly", &m8683_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8690_MI;
static PropertyInfo t1704____RawAbbreviatedDayNames_PropertyInfo = 
{
	&t1704_TI, "RawAbbreviatedDayNames", &m8690_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8691_MI;
static PropertyInfo t1704____RawAbbreviatedMonthNames_PropertyInfo = 
{
	&t1704_TI, "RawAbbreviatedMonthNames", &m8691_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8692_MI;
static PropertyInfo t1704____RawDayNames_PropertyInfo = 
{
	&t1704_TI, "RawDayNames", &m8692_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8693_MI;
static PropertyInfo t1704____RawMonthNames_PropertyInfo = 
{
	&t1704_TI, "RawMonthNames", &m8693_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8694_MI;
static PropertyInfo t1704____AMDesignator_PropertyInfo = 
{
	&t1704_TI, "AMDesignator", &m8694_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8695_MI;
static PropertyInfo t1704____PMDesignator_PropertyInfo = 
{
	&t1704_TI, "PMDesignator", &m8695_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8696_MI;
static PropertyInfo t1704____DateSeparator_PropertyInfo = 
{
	&t1704_TI, "DateSeparator", &m8696_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8697_MI;
static PropertyInfo t1704____TimeSeparator_PropertyInfo = 
{
	&t1704_TI, "TimeSeparator", &m8697_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8698_MI;
static PropertyInfo t1704____LongDatePattern_PropertyInfo = 
{
	&t1704_TI, "LongDatePattern", &m8698_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8699_MI;
static PropertyInfo t1704____ShortDatePattern_PropertyInfo = 
{
	&t1704_TI, "ShortDatePattern", &m8699_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8700_MI;
static PropertyInfo t1704____ShortTimePattern_PropertyInfo = 
{
	&t1704_TI, "ShortTimePattern", &m8700_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8701_MI;
static PropertyInfo t1704____LongTimePattern_PropertyInfo = 
{
	&t1704_TI, "LongTimePattern", &m8701_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8702_MI;
static PropertyInfo t1704____MonthDayPattern_PropertyInfo = 
{
	&t1704_TI, "MonthDayPattern", &m8702_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8703_MI;
static PropertyInfo t1704____YearMonthPattern_PropertyInfo = 
{
	&t1704_TI, "YearMonthPattern", &m8703_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8704_MI;
static PropertyInfo t1704____FullDateTimePattern_PropertyInfo = 
{
	&t1704_TI, "FullDateTimePattern", &m8704_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8705_MI;
static PropertyInfo t1704____CurrentInfo_PropertyInfo = 
{
	&t1704_TI, "CurrentInfo", &m8705_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8706_MI;
static PropertyInfo t1704____InvariantInfo_PropertyInfo = 
{
	&t1704_TI, "InvariantInfo", &m8706_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8707_MI;
extern MethodInfo m8708_MI;
static PropertyInfo t1704____Calendar_PropertyInfo = 
{
	&t1704_TI, "Calendar", &m8707_MI, &m8708_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8709_MI;
static PropertyInfo t1704____RFC1123Pattern_PropertyInfo = 
{
	&t1704_TI, "RFC1123Pattern", &m8709_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8710_MI;
static PropertyInfo t1704____RoundtripPattern_PropertyInfo = 
{
	&t1704_TI, "RoundtripPattern", &m8710_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8711_MI;
static PropertyInfo t1704____SortableDateTimePattern_PropertyInfo = 
{
	&t1704_TI, "SortableDateTimePattern", &m8711_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8712_MI;
static PropertyInfo t1704____UniversalSortableDateTimePattern_PropertyInfo = 
{
	&t1704_TI, "UniversalSortableDateTimePattern", &m8712_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1704_PIs[] =
{
	&t1704____IsReadOnly_PropertyInfo,
	&t1704____RawAbbreviatedDayNames_PropertyInfo,
	&t1704____RawAbbreviatedMonthNames_PropertyInfo,
	&t1704____RawDayNames_PropertyInfo,
	&t1704____RawMonthNames_PropertyInfo,
	&t1704____AMDesignator_PropertyInfo,
	&t1704____PMDesignator_PropertyInfo,
	&t1704____DateSeparator_PropertyInfo,
	&t1704____TimeSeparator_PropertyInfo,
	&t1704____LongDatePattern_PropertyInfo,
	&t1704____ShortDatePattern_PropertyInfo,
	&t1704____ShortTimePattern_PropertyInfo,
	&t1704____LongTimePattern_PropertyInfo,
	&t1704____MonthDayPattern_PropertyInfo,
	&t1704____YearMonthPattern_PropertyInfo,
	&t1704____FullDateTimePattern_PropertyInfo,
	&t1704____CurrentInfo_PropertyInfo,
	&t1704____InvariantInfo_PropertyInfo,
	&t1704____Calendar_PropertyInfo,
	&t1704____RFC1123Pattern_PropertyInfo,
	&t1704____RoundtripPattern_PropertyInfo,
	&t1704____SortableDateTimePattern_PropertyInfo,
	&t1704____UniversalSortableDateTimePattern_PropertyInfo,
	NULL
};
extern MethodInfo m8686_MI;
extern MethodInfo m8685_MI;
static Il2CppMethodReference t1704_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8686_MI,
	&m8685_MI,
};
static bool t1704_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1704_ITIs[] = 
{
	&t622_0_0_0,
	&t906_0_0_0,
};
static Il2CppInterfaceOffsetPair t1704_IOs[] = 
{
	{ &t622_0_0_0, 4},
	{ &t906_0_0_0, 4},
};
void t1704_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1704__CustomAttributeCache = {
1,
NULL,
&t1704_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1704_1_0_0;
struct t1704;
extern CustomAttributesCache t1704__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1704_DM = 
{
	NULL, NULL, t1704_ITIs, t1704_IOs, &t9_0_0_0, t1704_VT, t1704_VTIGM, NULL};
TypeInfo t1704_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DateTimeFormatInfo", "System.Globalization", t1704_MIs, t1704_PIs, t1704_FIs, NULL, &t1704_TI, NULL, &t1704__CustomAttributeCache, &t1704_0_0_0, &t1704_1_0_0, &t1704_DM, NULL, NULL, NULL, t1704_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1704), sizeof (t1704), 0, -1, sizeof(t1704_SFs), 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, true, false, 41, 23, 58, 0, 0, 6, 2, 2};
#include "t1525.h"
// Metadata Definition System.Globalization.DateTimeStyles
extern TypeInfo t1525_TI;
#include "t1525MD.h"
static MethodInfo* t1525_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1525_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1525_TI, offsetof(t1525, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1525_0_0_32854;
FieldInfo t1525_f2_FieldInfo = 
{
	"None", &t1525_0_0_32854, &t1525_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1525_0_0_32854;
FieldInfo t1525_f3_FieldInfo = 
{
	"AllowLeadingWhite", &t1525_0_0_32854, &t1525_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1525_0_0_32854;
FieldInfo t1525_f4_FieldInfo = 
{
	"AllowTrailingWhite", &t1525_0_0_32854, &t1525_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1525_0_0_32854;
FieldInfo t1525_f5_FieldInfo = 
{
	"AllowInnerWhite", &t1525_0_0_32854, &t1525_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1525_0_0_32854;
FieldInfo t1525_f6_FieldInfo = 
{
	"AllowWhiteSpaces", &t1525_0_0_32854, &t1525_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1525_0_0_32854;
FieldInfo t1525_f7_FieldInfo = 
{
	"NoCurrentDateDefault", &t1525_0_0_32854, &t1525_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1525_0_0_32854;
FieldInfo t1525_f8_FieldInfo = 
{
	"AdjustToUniversal", &t1525_0_0_32854, &t1525_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1525_0_0_32854;
FieldInfo t1525_f9_FieldInfo = 
{
	"AssumeLocal", &t1525_0_0_32854, &t1525_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1525_0_0_32854;
FieldInfo t1525_f10_FieldInfo = 
{
	"AssumeUniversal", &t1525_0_0_32854, &t1525_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1525_0_0_32854;
FieldInfo t1525_f11_FieldInfo = 
{
	"RoundtripKind", &t1525_0_0_32854, &t1525_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1525_FIs[] =
{
	&t1525_f1_FieldInfo,
	&t1525_f2_FieldInfo,
	&t1525_f3_FieldInfo,
	&t1525_f4_FieldInfo,
	&t1525_f5_FieldInfo,
	&t1525_f6_FieldInfo,
	&t1525_f7_FieldInfo,
	&t1525_f8_FieldInfo,
	&t1525_f9_FieldInfo,
	&t1525_f10_FieldInfo,
	&t1525_f11_FieldInfo,
	NULL
};
static const int32_t t1525_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1525_f2_DefaultValue = 
{
	&t1525_f2_FieldInfo, { (char*)&t1525_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1525_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1525_f3_DefaultValue = 
{
	&t1525_f3_FieldInfo, { (char*)&t1525_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1525_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1525_f4_DefaultValue = 
{
	&t1525_f4_FieldInfo, { (char*)&t1525_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1525_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1525_f5_DefaultValue = 
{
	&t1525_f5_FieldInfo, { (char*)&t1525_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1525_f6_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1525_f6_DefaultValue = 
{
	&t1525_f6_FieldInfo, { (char*)&t1525_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1525_f7_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1525_f7_DefaultValue = 
{
	&t1525_f7_FieldInfo, { (char*)&t1525_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1525_f8_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1525_f8_DefaultValue = 
{
	&t1525_f8_FieldInfo, { (char*)&t1525_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1525_f9_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1525_f9_DefaultValue = 
{
	&t1525_f9_FieldInfo, { (char*)&t1525_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1525_f10_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1525_f10_DefaultValue = 
{
	&t1525_f10_FieldInfo, { (char*)&t1525_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1525_f11_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1525_f11_DefaultValue = 
{
	&t1525_f11_FieldInfo, { (char*)&t1525_f11_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1525_FDVs[] = 
{
	&t1525_f2_DefaultValue,
	&t1525_f3_DefaultValue,
	&t1525_f4_DefaultValue,
	&t1525_f5_DefaultValue,
	&t1525_f6_DefaultValue,
	&t1525_f7_DefaultValue,
	&t1525_f8_DefaultValue,
	&t1525_f9_DefaultValue,
	&t1525_f10_DefaultValue,
	&t1525_f11_DefaultValue,
	NULL
};
static Il2CppMethodReference t1525_VT[] =
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
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1525_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t615 * tmp;
		tmp = (t615 *)il2cpp_codegen_object_new (&t615_TI);
		m2991(tmp, &m2991_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1525__CustomAttributeCache = {
2,
NULL,
&t1525_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1525_0_0_0;
extern Il2CppType t1525_1_0_0;
extern CustomAttributesCache t1525__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1525_DM = 
{
	NULL, NULL, NULL, t1525_IOs, &t8_0_0_0, t1525_VT, t1525_VTIGM, NULL};
TypeInfo t1525_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DateTimeStyles", "System.Globalization", t1525_MIs, NULL, t1525_FIs, NULL, &t125_TI, NULL, &t1525__CustomAttributeCache, &t1525_0_0_0, &t1525_1_0_0, &t1525_DM, NULL, NULL, NULL, t1525_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1525)+ sizeof (Il2CppObject), sizeof (t1525)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 11, 0, 0, 23, 0, 3};
#include "t1707.h"
// Metadata Definition System.Globalization.DaylightTime
extern TypeInfo t1707_TI;
#include "t1707MD.h"
extern Il2CppType t270_0_0_0;
extern Il2CppType t270_0_0_0;
extern Il2CppType t304_0_0_0;
extern Il2CppType t304_0_0_0;
static ParameterInfo t1707_m8720_ParameterInfos[] = 
{
	{"start", 0, 134220947, &EmptyCustomAttributesCache, &t270_0_0_0},
	{"end", 1, 134220948, &EmptyCustomAttributesCache, &t270_0_0_0},
	{"delta", 2, 134220949, &EmptyCustomAttributesCache, &t304_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t270_t270_t304 (MethodInfo* method, void* obj, void** args);
MethodInfo m8720_MI = 
{
	".ctor", (methodPointerType)&m8720, &t1707_TI, &t122_0_0_0, RuntimeInvoker_t122_t270_t270_t304, t1707_m8720_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 2465, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t270_0_0_0;
extern void* RuntimeInvoker_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m8721_MI = 
{
	"get_Start", (methodPointerType)&m8721, &t1707_TI, &t270_0_0_0, RuntimeInvoker_t270, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2466, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t270_0_0_0;
extern void* RuntimeInvoker_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m8722_MI = 
{
	"get_End", (methodPointerType)&m8722, &t1707_TI, &t270_0_0_0, RuntimeInvoker_t270, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2467, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t304_0_0_0;
extern void* RuntimeInvoker_t304 (MethodInfo* method, void* obj, void** args);
MethodInfo m8723_MI = 
{
	"get_Delta", (methodPointerType)&m8723, &t1707_TI, &t304_0_0_0, RuntimeInvoker_t304, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2468, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1707_MIs[] =
{
	&m8720_MI,
	&m8721_MI,
	&m8722_MI,
	&m8723_MI,
	NULL
};
extern Il2CppType t270_0_0_1;
FieldInfo t1707_f0_FieldInfo = 
{
	"m_start", &t270_0_0_1, &t1707_TI, offsetof(t1707, f0), &EmptyCustomAttributesCache};
extern Il2CppType t270_0_0_1;
FieldInfo t1707_f1_FieldInfo = 
{
	"m_end", &t270_0_0_1, &t1707_TI, offsetof(t1707, f1), &EmptyCustomAttributesCache};
extern Il2CppType t304_0_0_1;
FieldInfo t1707_f2_FieldInfo = 
{
	"m_delta", &t304_0_0_1, &t1707_TI, offsetof(t1707, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1707_FIs[] =
{
	&t1707_f0_FieldInfo,
	&t1707_f1_FieldInfo,
	&t1707_f2_FieldInfo,
	NULL
};
extern MethodInfo m8721_MI;
static PropertyInfo t1707____Start_PropertyInfo = 
{
	&t1707_TI, "Start", &m8721_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8722_MI;
static PropertyInfo t1707____End_PropertyInfo = 
{
	&t1707_TI, "End", &m8722_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8723_MI;
static PropertyInfo t1707____Delta_PropertyInfo = 
{
	&t1707_TI, "Delta", &m8723_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1707_PIs[] =
{
	&t1707____Start_PropertyInfo,
	&t1707____End_PropertyInfo,
	&t1707____Delta_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1707_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1707_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1707_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1707__CustomAttributeCache = {
1,
NULL,
&t1707_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1707_0_0_0;
extern Il2CppType t1707_1_0_0;
struct t1707;
extern CustomAttributesCache t1707__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1707_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1707_VT, t1707_VTIGM, NULL};
TypeInfo t1707_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DaylightTime", "System.Globalization", t1707_MIs, t1707_PIs, t1707_FIs, NULL, &t1707_TI, NULL, &t1707__CustomAttributeCache, &t1707_0_0_0, &t1707_1_0_0, &t1707_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1707), sizeof (t1707), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 3, 3, 0, 0, 4, 0, 0};
#include "t1708.h"
// Metadata Definition System.Globalization.GregorianCalendar
extern TypeInfo t1708_TI;
#include "t1708MD.h"
extern Il2CppType t1709_0_0_0;
extern Il2CppType t1709_0_0_0;
static ParameterInfo t1708_m8724_ParameterInfos[] = 
{
	{"type", 0, 134220950, &EmptyCustomAttributesCache, &t1709_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8724_MI = 
{
	".ctor", (methodPointerType)&m8724, &t1708_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1708_m8724_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2469, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8725_MI = 
{
	".ctor", (methodPointerType)&m8725, &t1708_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2470, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1095_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8726_MI = 
{
	"get_Eras", (methodPointerType)&m8726, &t1708_TI, &t1095_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 2471, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1709_0_0_0;
static ParameterInfo t1708_m8727_ParameterInfos[] = 
{
	{"value", 0, 134220951, &EmptyCustomAttributesCache, &t1709_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8727_MI = 
{
	"set_CalendarType", (methodPointerType)&m8727, &t1708_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1708_m8727_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 10, 1, false, false, 2472, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t270_0_0_0;
static ParameterInfo t1708_m8728_ParameterInfos[] = 
{
	{"time", 0, 134220952, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m8728_MI = 
{
	"GetDayOfMonth", (methodPointerType)&m8728, &t1708_TI, &t125_0_0_0, RuntimeInvoker_t125_t270, t1708_m8728_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 2473, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t270_0_0_0;
static ParameterInfo t1708_m8729_ParameterInfos[] = 
{
	{"time", 0, 134220953, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern Il2CppType t1700_0_0_0;
extern void* RuntimeInvoker_t1700_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m8729_MI = 
{
	"GetDayOfWeek", (methodPointerType)&m8729, &t1708_TI, &t1700_0_0_0, RuntimeInvoker_t1700_t270, t1708_m8729_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 1, false, false, 2474, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t270_0_0_0;
static ParameterInfo t1708_m8730_ParameterInfos[] = 
{
	{"time", 0, 134220954, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m8730_MI = 
{
	"GetEra", (methodPointerType)&m8730, &t1708_TI, &t125_0_0_0, RuntimeInvoker_t125_t270, t1708_m8730_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 1, false, false, 2475, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t270_0_0_0;
static ParameterInfo t1708_m8731_ParameterInfos[] = 
{
	{"time", 0, 134220955, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m8731_MI = 
{
	"GetMonth", (methodPointerType)&m8731, &t1708_TI, &t125_0_0_0, RuntimeInvoker_t125_t270, t1708_m8731_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 2476, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t270_0_0_0;
static ParameterInfo t1708_m8732_ParameterInfos[] = 
{
	{"time", 0, 134220956, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m8732_MI = 
{
	"GetYear", (methodPointerType)&m8732, &t1708_TI, &t125_0_0_0, RuntimeInvoker_t125_t270, t1708_m8732_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 2477, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1708_MIs[] =
{
	&m8724_MI,
	&m8725_MI,
	&m8726_MI,
	&m8727_MI,
	&m8728_MI,
	&m8729_MI,
	&m8730_MI,
	&m8731_MI,
	&m8732_MI,
	NULL
};
extern Il2CppType t1709_0_0_131;
FieldInfo t1708_f4_FieldInfo = 
{
	"m_type", &t1709_0_0_131, &t1708_TI, offsetof(t1708, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1708_FIs[] =
{
	&t1708_f4_FieldInfo,
	NULL
};
extern MethodInfo m8726_MI;
static PropertyInfo t1708____Eras_PropertyInfo = 
{
	&t1708_TI, "Eras", &m8726_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8727_MI;
static PropertyInfo t1708____CalendarType_PropertyInfo = 
{
	&t1708_TI, "CalendarType", NULL, &m8727_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1708_PIs[] =
{
	&t1708____Eras_PropertyInfo,
	&t1708____CalendarType_PropertyInfo,
	NULL
};
extern MethodInfo m8728_MI;
extern MethodInfo m8729_MI;
extern MethodInfo m8730_MI;
extern MethodInfo m8731_MI;
extern MethodInfo m8732_MI;
static Il2CppMethodReference t1708_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8726_MI,
	&m8728_MI,
	&m8729_MI,
	&m8730_MI,
	&m8731_MI,
	&m8732_MI,
	&m8727_MI,
};
static bool t1708_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1708_IOs[] = 
{
	{ &t622_0_0_0, 4},
};
void t1708_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7849(tmp, il2cpp_codegen_string_new_wrapper("Serialization format not compatible with .NET"), &m7849_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1708__CustomAttributeCache = {
2,
NULL,
&t1708_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1708_0_0_0;
extern Il2CppType t1708_1_0_0;
struct t1708;
extern CustomAttributesCache t1708__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1708_DM = 
{
	NULL, NULL, NULL, t1708_IOs, &t1699_0_0_0, t1708_VT, t1708_VTIGM, NULL};
TypeInfo t1708_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GregorianCalendar", "System.Globalization", t1708_MIs, t1708_PIs, t1708_FIs, NULL, &t1708_TI, NULL, &t1708__CustomAttributeCache, &t1708_0_0_0, &t1708_1_0_0, &t1708_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1708), sizeof (t1708), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 2, 1, 0, 0, 11, 0, 1};
#include "t1709.h"
// Metadata Definition System.Globalization.GregorianCalendarTypes
extern TypeInfo t1709_TI;
#include "t1709MD.h"
static MethodInfo* t1709_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1709_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1709_TI, offsetof(t1709, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1709_0_0_32854;
FieldInfo t1709_f2_FieldInfo = 
{
	"Localized", &t1709_0_0_32854, &t1709_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1709_0_0_32854;
FieldInfo t1709_f3_FieldInfo = 
{
	"USEnglish", &t1709_0_0_32854, &t1709_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1709_0_0_32854;
FieldInfo t1709_f4_FieldInfo = 
{
	"MiddleEastFrench", &t1709_0_0_32854, &t1709_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1709_0_0_32854;
FieldInfo t1709_f5_FieldInfo = 
{
	"Arabic", &t1709_0_0_32854, &t1709_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1709_0_0_32854;
FieldInfo t1709_f6_FieldInfo = 
{
	"TransliteratedEnglish", &t1709_0_0_32854, &t1709_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1709_0_0_32854;
FieldInfo t1709_f7_FieldInfo = 
{
	"TransliteratedFrench", &t1709_0_0_32854, &t1709_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1709_FIs[] =
{
	&t1709_f1_FieldInfo,
	&t1709_f2_FieldInfo,
	&t1709_f3_FieldInfo,
	&t1709_f4_FieldInfo,
	&t1709_f5_FieldInfo,
	&t1709_f6_FieldInfo,
	&t1709_f7_FieldInfo,
	NULL
};
static const int32_t t1709_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1709_f2_DefaultValue = 
{
	&t1709_f2_FieldInfo, { (char*)&t1709_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1709_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1709_f3_DefaultValue = 
{
	&t1709_f3_FieldInfo, { (char*)&t1709_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1709_f4_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t1709_f4_DefaultValue = 
{
	&t1709_f4_FieldInfo, { (char*)&t1709_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1709_f5_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t1709_f5_DefaultValue = 
{
	&t1709_f5_FieldInfo, { (char*)&t1709_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1709_f6_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t1709_f6_DefaultValue = 
{
	&t1709_f6_FieldInfo, { (char*)&t1709_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1709_f7_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t1709_f7_DefaultValue = 
{
	&t1709_f7_FieldInfo, { (char*)&t1709_f7_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1709_FDVs[] = 
{
	&t1709_f2_DefaultValue,
	&t1709_f3_DefaultValue,
	&t1709_f4_DefaultValue,
	&t1709_f5_DefaultValue,
	&t1709_f6_DefaultValue,
	&t1709_f7_DefaultValue,
	NULL
};
static Il2CppMethodReference t1709_VT[] =
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
static bool t1709_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1709_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1709_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1709__CustomAttributeCache = {
1,
NULL,
&t1709_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1709_1_0_0;
extern CustomAttributesCache t1709__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1709_DM = 
{
	NULL, NULL, NULL, t1709_IOs, &t8_0_0_0, t1709_VT, t1709_VTIGM, NULL};
TypeInfo t1709_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GregorianCalendarTypes", "System.Globalization", t1709_MIs, NULL, t1709_FIs, NULL, &t125_TI, NULL, &t1709__CustomAttributeCache, &t1709_0_0_0, &t1709_1_0_0, &t1709_DM, NULL, NULL, NULL, t1709_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1709)+ sizeof (Il2CppObject), sizeof (t1709)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 7, 0, 0, 23, 0, 3};
#include "t1555.h"
// Metadata Definition System.Globalization.NumberFormatInfo
extern TypeInfo t1555_TI;
#include "t1555MD.h"
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1555_m8733_ParameterInfos[] = 
{
	{"lcid", 0, 134220957, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"read_only", 1, 134220958, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8733_MI = 
{
	".ctor", (methodPointerType)&m8733, &t1555_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t1555_m8733_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 2478, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1555_m8734_ParameterInfos[] = 
{
	{"read_only", 0, 134220959, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8734_MI = 
{
	".ctor", (methodPointerType)&m8734, &t1555_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1555_m8734_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2479, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8735_MI = 
{
	".ctor", (methodPointerType)&m8735, &t1555_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2480, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8736_MI = 
{
	".cctor", (methodPointerType)&m8736, &t1555_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2481, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8737_MI = 
{
	"get_CurrencyDecimalDigits", (methodPointerType)&m8737, &t1555_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2482, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8738_MI = 
{
	"get_CurrencyDecimalSeparator", (methodPointerType)&m8738, &t1555_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2483, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8739_MI = 
{
	"get_CurrencyGroupSeparator", (methodPointerType)&m8739, &t1555_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2484, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1095_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8740_MI = 
{
	"get_RawCurrencyGroupSizes", (methodPointerType)&m8740, &t1555_TI, &t1095_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2485, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8741_MI = 
{
	"get_CurrencyNegativePattern", (methodPointerType)&m8741, &t1555_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2486, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8742_MI = 
{
	"get_CurrencyPositivePattern", (methodPointerType)&m8742, &t1555_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2487, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8743_MI = 
{
	"get_CurrencySymbol", (methodPointerType)&m8743, &t1555_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2488, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1555_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8744_MI = 
{
	"get_CurrentInfo", (methodPointerType)&m8744, &t1555_TI, &t1555_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2489, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1555_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8745_MI = 
{
	"get_InvariantInfo", (methodPointerType)&m8745, &t1555_TI, &t1555_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2490, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8746_MI = 
{
	"get_NaNSymbol", (methodPointerType)&m8746, &t1555_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2491, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8747_MI = 
{
	"get_NegativeInfinitySymbol", (methodPointerType)&m8747, &t1555_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2492, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8748_MI = 
{
	"get_NegativeSign", (methodPointerType)&m8748, &t1555_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2493, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8749_MI = 
{
	"get_NumberDecimalDigits", (methodPointerType)&m8749, &t1555_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2494, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8750_MI = 
{
	"get_NumberDecimalSeparator", (methodPointerType)&m8750, &t1555_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2495, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8751_MI = 
{
	"get_NumberGroupSeparator", (methodPointerType)&m8751, &t1555_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2496, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1095_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8752_MI = 
{
	"get_RawNumberGroupSizes", (methodPointerType)&m8752, &t1555_TI, &t1095_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2497, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8753_MI = 
{
	"get_NumberNegativePattern", (methodPointerType)&m8753, &t1555_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2498, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1555_m8754_ParameterInfos[] = 
{
	{"value", 0, 134220960, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8754_MI = 
{
	"set_NumberNegativePattern", (methodPointerType)&m8754, &t1555_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1555_m8754_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 2499, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8755_MI = 
{
	"get_PercentDecimalDigits", (methodPointerType)&m8755, &t1555_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2500, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8756_MI = 
{
	"get_PercentDecimalSeparator", (methodPointerType)&m8756, &t1555_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2501, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8757_MI = 
{
	"get_PercentGroupSeparator", (methodPointerType)&m8757, &t1555_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2502, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1095_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8758_MI = 
{
	"get_RawPercentGroupSizes", (methodPointerType)&m8758, &t1555_TI, &t1095_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2503, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8759_MI = 
{
	"get_PercentNegativePattern", (methodPointerType)&m8759, &t1555_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2504, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8760_MI = 
{
	"get_PercentPositivePattern", (methodPointerType)&m8760, &t1555_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2505, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8761_MI = 
{
	"get_PercentSymbol", (methodPointerType)&m8761, &t1555_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2506, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8762_MI = 
{
	"get_PerMilleSymbol", (methodPointerType)&m8762, &t1555_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2507, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8763_MI = 
{
	"get_PositiveInfinitySymbol", (methodPointerType)&m8763, &t1555_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2508, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8764_MI = 
{
	"get_PositiveSign", (methodPointerType)&m8764, &t1555_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2509, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1555_m8765_ParameterInfos[] = 
{
	{"formatType", 0, 134220961, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8765_MI = 
{
	"GetFormat", (methodPointerType)&m8765, &t1555_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1555_m8765_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, false, 2510, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8766_MI = 
{
	"Clone", (methodPointerType)&m8766, &t1555_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 2511, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t906_0_0_0;
static ParameterInfo t1555_m8767_ParameterInfos[] = 
{
	{"formatProvider", 0, 134220962, &EmptyCustomAttributesCache, &t906_0_0_0},
};
extern Il2CppType t1555_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8767_MI = 
{
	"GetInstance", (methodPointerType)&m8767, &t1555_TI, &t1555_0_0_0, RuntimeInvoker_t9_t9, t1555_m8767_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2512, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1555_MIs[] =
{
	&m8733_MI,
	&m8734_MI,
	&m8735_MI,
	&m8736_MI,
	&m8737_MI,
	&m8738_MI,
	&m8739_MI,
	&m8740_MI,
	&m8741_MI,
	&m8742_MI,
	&m8743_MI,
	&m8744_MI,
	&m8745_MI,
	&m8746_MI,
	&m8747_MI,
	&m8748_MI,
	&m8749_MI,
	&m8750_MI,
	&m8751_MI,
	&m8752_MI,
	&m8753_MI,
	&m8754_MI,
	&m8755_MI,
	&m8756_MI,
	&m8757_MI,
	&m8758_MI,
	&m8759_MI,
	&m8760_MI,
	&m8761_MI,
	&m8762_MI,
	&m8763_MI,
	&m8764_MI,
	&m8765_MI,
	&m8766_MI,
	&m8767_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t1555_f0_FieldInfo = 
{
	"isReadOnly", &t124_0_0_1, &t1555_TI, offsetof(t1555, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f1_FieldInfo = 
{
	"decimalFormats", &t2_0_0_1, &t1555_TI, offsetof(t1555, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f2_FieldInfo = 
{
	"currencyFormats", &t2_0_0_1, &t1555_TI, offsetof(t1555, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f3_FieldInfo = 
{
	"percentFormats", &t2_0_0_1, &t1555_TI, offsetof(t1555, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f4_FieldInfo = 
{
	"digitPattern", &t2_0_0_1, &t1555_TI, offsetof(t1555, f4), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f5_FieldInfo = 
{
	"zeroPattern", &t2_0_0_1, &t1555_TI, offsetof(t1555, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1555_f6_FieldInfo = 
{
	"currencyDecimalDigits", &t125_0_0_1, &t1555_TI, offsetof(t1555, f6), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f7_FieldInfo = 
{
	"currencyDecimalSeparator", &t2_0_0_1, &t1555_TI, offsetof(t1555, f7), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f8_FieldInfo = 
{
	"currencyGroupSeparator", &t2_0_0_1, &t1555_TI, offsetof(t1555, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1095_0_0_1;
FieldInfo t1555_f9_FieldInfo = 
{
	"currencyGroupSizes", &t1095_0_0_1, &t1555_TI, offsetof(t1555, f9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1555_f10_FieldInfo = 
{
	"currencyNegativePattern", &t125_0_0_1, &t1555_TI, offsetof(t1555, f10), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1555_f11_FieldInfo = 
{
	"currencyPositivePattern", &t125_0_0_1, &t1555_TI, offsetof(t1555, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f12_FieldInfo = 
{
	"currencySymbol", &t2_0_0_1, &t1555_TI, offsetof(t1555, f12), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f13_FieldInfo = 
{
	"nanSymbol", &t2_0_0_1, &t1555_TI, offsetof(t1555, f13), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f14_FieldInfo = 
{
	"negativeInfinitySymbol", &t2_0_0_1, &t1555_TI, offsetof(t1555, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f15_FieldInfo = 
{
	"negativeSign", &t2_0_0_1, &t1555_TI, offsetof(t1555, f15), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1555_f16_FieldInfo = 
{
	"numberDecimalDigits", &t125_0_0_1, &t1555_TI, offsetof(t1555, f16), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f17_FieldInfo = 
{
	"numberDecimalSeparator", &t2_0_0_1, &t1555_TI, offsetof(t1555, f17), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f18_FieldInfo = 
{
	"numberGroupSeparator", &t2_0_0_1, &t1555_TI, offsetof(t1555, f18), &EmptyCustomAttributesCache};
extern Il2CppType t1095_0_0_1;
FieldInfo t1555_f19_FieldInfo = 
{
	"numberGroupSizes", &t1095_0_0_1, &t1555_TI, offsetof(t1555, f19), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1555_f20_FieldInfo = 
{
	"numberNegativePattern", &t125_0_0_1, &t1555_TI, offsetof(t1555, f20), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1555_f21_FieldInfo = 
{
	"percentDecimalDigits", &t125_0_0_1, &t1555_TI, offsetof(t1555, f21), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f22_FieldInfo = 
{
	"percentDecimalSeparator", &t2_0_0_1, &t1555_TI, offsetof(t1555, f22), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f23_FieldInfo = 
{
	"percentGroupSeparator", &t2_0_0_1, &t1555_TI, offsetof(t1555, f23), &EmptyCustomAttributesCache};
extern Il2CppType t1095_0_0_1;
FieldInfo t1555_f24_FieldInfo = 
{
	"percentGroupSizes", &t1095_0_0_1, &t1555_TI, offsetof(t1555, f24), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1555_f25_FieldInfo = 
{
	"percentNegativePattern", &t125_0_0_1, &t1555_TI, offsetof(t1555, f25), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1555_f26_FieldInfo = 
{
	"percentPositivePattern", &t125_0_0_1, &t1555_TI, offsetof(t1555, f26), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f27_FieldInfo = 
{
	"percentSymbol", &t2_0_0_1, &t1555_TI, offsetof(t1555, f27), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f28_FieldInfo = 
{
	"perMilleSymbol", &t2_0_0_1, &t1555_TI, offsetof(t1555, f28), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f29_FieldInfo = 
{
	"positiveInfinitySymbol", &t2_0_0_1, &t1555_TI, offsetof(t1555, f29), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f30_FieldInfo = 
{
	"positiveSign", &t2_0_0_1, &t1555_TI, offsetof(t1555, f30), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1555_f31_FieldInfo = 
{
	"ansiCurrencySymbol", &t2_0_0_1, &t1555_TI, offsetof(t1555, f31), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1555_f32_FieldInfo = 
{
	"m_dataItem", &t125_0_0_1, &t1555_TI, offsetof(t1555, f32), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1555_f33_FieldInfo = 
{
	"m_useUserOverride", &t124_0_0_1, &t1555_TI, offsetof(t1555, f33), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1555_f34_FieldInfo = 
{
	"validForParseAsNumber", &t124_0_0_1, &t1555_TI, offsetof(t1555, f34), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1555_f35_FieldInfo = 
{
	"validForParseAsCurrency", &t124_0_0_1, &t1555_TI, offsetof(t1555, f35), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1555_f36_FieldInfo = 
{
	"nativeDigits", &t221_0_0_1, &t1555_TI, offsetof(t1555, f36), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1555_f37_FieldInfo = 
{
	"digitSubstitution", &t125_0_0_1, &t1555_TI, offsetof(t1555, f37), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1555_f38_FieldInfo = 
{
	"invariantNativeDigits", &t221_0_0_49, &t1555_TI, offsetof(t1555_SFs, f38), &EmptyCustomAttributesCache};
static FieldInfo* t1555_FIs[] =
{
	&t1555_f0_FieldInfo,
	&t1555_f1_FieldInfo,
	&t1555_f2_FieldInfo,
	&t1555_f3_FieldInfo,
	&t1555_f4_FieldInfo,
	&t1555_f5_FieldInfo,
	&t1555_f6_FieldInfo,
	&t1555_f7_FieldInfo,
	&t1555_f8_FieldInfo,
	&t1555_f9_FieldInfo,
	&t1555_f10_FieldInfo,
	&t1555_f11_FieldInfo,
	&t1555_f12_FieldInfo,
	&t1555_f13_FieldInfo,
	&t1555_f14_FieldInfo,
	&t1555_f15_FieldInfo,
	&t1555_f16_FieldInfo,
	&t1555_f17_FieldInfo,
	&t1555_f18_FieldInfo,
	&t1555_f19_FieldInfo,
	&t1555_f20_FieldInfo,
	&t1555_f21_FieldInfo,
	&t1555_f22_FieldInfo,
	&t1555_f23_FieldInfo,
	&t1555_f24_FieldInfo,
	&t1555_f25_FieldInfo,
	&t1555_f26_FieldInfo,
	&t1555_f27_FieldInfo,
	&t1555_f28_FieldInfo,
	&t1555_f29_FieldInfo,
	&t1555_f30_FieldInfo,
	&t1555_f31_FieldInfo,
	&t1555_f32_FieldInfo,
	&t1555_f33_FieldInfo,
	&t1555_f34_FieldInfo,
	&t1555_f35_FieldInfo,
	&t1555_f36_FieldInfo,
	&t1555_f37_FieldInfo,
	&t1555_f38_FieldInfo,
	NULL
};
extern MethodInfo m8737_MI;
static PropertyInfo t1555____CurrencyDecimalDigits_PropertyInfo = 
{
	&t1555_TI, "CurrencyDecimalDigits", &m8737_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8738_MI;
static PropertyInfo t1555____CurrencyDecimalSeparator_PropertyInfo = 
{
	&t1555_TI, "CurrencyDecimalSeparator", &m8738_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8739_MI;
static PropertyInfo t1555____CurrencyGroupSeparator_PropertyInfo = 
{
	&t1555_TI, "CurrencyGroupSeparator", &m8739_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8740_MI;
static PropertyInfo t1555____RawCurrencyGroupSizes_PropertyInfo = 
{
	&t1555_TI, "RawCurrencyGroupSizes", &m8740_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8741_MI;
static PropertyInfo t1555____CurrencyNegativePattern_PropertyInfo = 
{
	&t1555_TI, "CurrencyNegativePattern", &m8741_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8742_MI;
static PropertyInfo t1555____CurrencyPositivePattern_PropertyInfo = 
{
	&t1555_TI, "CurrencyPositivePattern", &m8742_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8743_MI;
static PropertyInfo t1555____CurrencySymbol_PropertyInfo = 
{
	&t1555_TI, "CurrencySymbol", &m8743_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8744_MI;
static PropertyInfo t1555____CurrentInfo_PropertyInfo = 
{
	&t1555_TI, "CurrentInfo", &m8744_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8745_MI;
static PropertyInfo t1555____InvariantInfo_PropertyInfo = 
{
	&t1555_TI, "InvariantInfo", &m8745_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8746_MI;
static PropertyInfo t1555____NaNSymbol_PropertyInfo = 
{
	&t1555_TI, "NaNSymbol", &m8746_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8747_MI;
static PropertyInfo t1555____NegativeInfinitySymbol_PropertyInfo = 
{
	&t1555_TI, "NegativeInfinitySymbol", &m8747_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8748_MI;
static PropertyInfo t1555____NegativeSign_PropertyInfo = 
{
	&t1555_TI, "NegativeSign", &m8748_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8749_MI;
static PropertyInfo t1555____NumberDecimalDigits_PropertyInfo = 
{
	&t1555_TI, "NumberDecimalDigits", &m8749_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8750_MI;
static PropertyInfo t1555____NumberDecimalSeparator_PropertyInfo = 
{
	&t1555_TI, "NumberDecimalSeparator", &m8750_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8751_MI;
static PropertyInfo t1555____NumberGroupSeparator_PropertyInfo = 
{
	&t1555_TI, "NumberGroupSeparator", &m8751_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8752_MI;
static PropertyInfo t1555____RawNumberGroupSizes_PropertyInfo = 
{
	&t1555_TI, "RawNumberGroupSizes", &m8752_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8753_MI;
extern MethodInfo m8754_MI;
static PropertyInfo t1555____NumberNegativePattern_PropertyInfo = 
{
	&t1555_TI, "NumberNegativePattern", &m8753_MI, &m8754_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8755_MI;
static PropertyInfo t1555____PercentDecimalDigits_PropertyInfo = 
{
	&t1555_TI, "PercentDecimalDigits", &m8755_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8756_MI;
static PropertyInfo t1555____PercentDecimalSeparator_PropertyInfo = 
{
	&t1555_TI, "PercentDecimalSeparator", &m8756_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8757_MI;
static PropertyInfo t1555____PercentGroupSeparator_PropertyInfo = 
{
	&t1555_TI, "PercentGroupSeparator", &m8757_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8758_MI;
static PropertyInfo t1555____RawPercentGroupSizes_PropertyInfo = 
{
	&t1555_TI, "RawPercentGroupSizes", &m8758_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8759_MI;
static PropertyInfo t1555____PercentNegativePattern_PropertyInfo = 
{
	&t1555_TI, "PercentNegativePattern", &m8759_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8760_MI;
static PropertyInfo t1555____PercentPositivePattern_PropertyInfo = 
{
	&t1555_TI, "PercentPositivePattern", &m8760_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8761_MI;
static PropertyInfo t1555____PercentSymbol_PropertyInfo = 
{
	&t1555_TI, "PercentSymbol", &m8761_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8762_MI;
static PropertyInfo t1555____PerMilleSymbol_PropertyInfo = 
{
	&t1555_TI, "PerMilleSymbol", &m8762_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8763_MI;
static PropertyInfo t1555____PositiveInfinitySymbol_PropertyInfo = 
{
	&t1555_TI, "PositiveInfinitySymbol", &m8763_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8764_MI;
static PropertyInfo t1555____PositiveSign_PropertyInfo = 
{
	&t1555_TI, "PositiveSign", &m8764_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1555_PIs[] =
{
	&t1555____CurrencyDecimalDigits_PropertyInfo,
	&t1555____CurrencyDecimalSeparator_PropertyInfo,
	&t1555____CurrencyGroupSeparator_PropertyInfo,
	&t1555____RawCurrencyGroupSizes_PropertyInfo,
	&t1555____CurrencyNegativePattern_PropertyInfo,
	&t1555____CurrencyPositivePattern_PropertyInfo,
	&t1555____CurrencySymbol_PropertyInfo,
	&t1555____CurrentInfo_PropertyInfo,
	&t1555____InvariantInfo_PropertyInfo,
	&t1555____NaNSymbol_PropertyInfo,
	&t1555____NegativeInfinitySymbol_PropertyInfo,
	&t1555____NegativeSign_PropertyInfo,
	&t1555____NumberDecimalDigits_PropertyInfo,
	&t1555____NumberDecimalSeparator_PropertyInfo,
	&t1555____NumberGroupSeparator_PropertyInfo,
	&t1555____RawNumberGroupSizes_PropertyInfo,
	&t1555____NumberNegativePattern_PropertyInfo,
	&t1555____PercentDecimalDigits_PropertyInfo,
	&t1555____PercentDecimalSeparator_PropertyInfo,
	&t1555____PercentGroupSeparator_PropertyInfo,
	&t1555____RawPercentGroupSizes_PropertyInfo,
	&t1555____PercentNegativePattern_PropertyInfo,
	&t1555____PercentPositivePattern_PropertyInfo,
	&t1555____PercentSymbol_PropertyInfo,
	&t1555____PerMilleSymbol_PropertyInfo,
	&t1555____PositiveInfinitySymbol_PropertyInfo,
	&t1555____PositiveSign_PropertyInfo,
	NULL
};
extern MethodInfo m8765_MI;
extern MethodInfo m8766_MI;
static Il2CppMethodReference t1555_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8765_MI,
	&m8766_MI,
};
static bool t1555_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1555_ITIs[] = 
{
	&t622_0_0_0,
	&t906_0_0_0,
};
static Il2CppInterfaceOffsetPair t1555_IOs[] = 
{
	{ &t622_0_0_0, 4},
	{ &t906_0_0_0, 4},
};
void t1555_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1555__CustomAttributeCache = {
1,
NULL,
&t1555_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1555_0_0_0;
extern Il2CppType t1555_1_0_0;
struct t1555;
extern CustomAttributesCache t1555__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1555_DM = 
{
	NULL, NULL, t1555_ITIs, t1555_IOs, &t9_0_0_0, t1555_VT, t1555_VTIGM, NULL};
TypeInfo t1555_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NumberFormatInfo", "System.Globalization", t1555_MIs, t1555_PIs, t1555_FIs, NULL, &t1555_TI, NULL, &t1555__CustomAttributeCache, &t1555_0_0_0, &t1555_1_0_0, &t1555_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1555), sizeof (t1555), 0, -1, sizeof(t1555_SFs), 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, true, false, 35, 27, 39, 0, 0, 6, 2, 2};
#include "t902.h"
// Metadata Definition System.Globalization.NumberStyles
extern TypeInfo t902_TI;
#include "t902MD.h"
static MethodInfo* t902_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t902_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t902_TI, offsetof(t902, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f2_FieldInfo = 
{
	"None", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f3_FieldInfo = 
{
	"AllowLeadingWhite", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f4_FieldInfo = 
{
	"AllowTrailingWhite", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f5_FieldInfo = 
{
	"AllowLeadingSign", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f6_FieldInfo = 
{
	"AllowTrailingSign", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f7_FieldInfo = 
{
	"AllowParentheses", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f8_FieldInfo = 
{
	"AllowDecimalPoint", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f9_FieldInfo = 
{
	"AllowThousands", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f10_FieldInfo = 
{
	"AllowExponent", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f11_FieldInfo = 
{
	"AllowCurrencySymbol", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f12_FieldInfo = 
{
	"AllowHexSpecifier", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f13_FieldInfo = 
{
	"Integer", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f14_FieldInfo = 
{
	"HexNumber", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f15_FieldInfo = 
{
	"Number", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f16_FieldInfo = 
{
	"Float", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f17_FieldInfo = 
{
	"Currency", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t902_0_0_32854;
FieldInfo t902_f18_FieldInfo = 
{
	"Any", &t902_0_0_32854, &t902_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t902_FIs[] =
{
	&t902_f1_FieldInfo,
	&t902_f2_FieldInfo,
	&t902_f3_FieldInfo,
	&t902_f4_FieldInfo,
	&t902_f5_FieldInfo,
	&t902_f6_FieldInfo,
	&t902_f7_FieldInfo,
	&t902_f8_FieldInfo,
	&t902_f9_FieldInfo,
	&t902_f10_FieldInfo,
	&t902_f11_FieldInfo,
	&t902_f12_FieldInfo,
	&t902_f13_FieldInfo,
	&t902_f14_FieldInfo,
	&t902_f15_FieldInfo,
	&t902_f16_FieldInfo,
	&t902_f17_FieldInfo,
	&t902_f18_FieldInfo,
	NULL
};
static const int32_t t902_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t902_f2_DefaultValue = 
{
	&t902_f2_FieldInfo, { (char*)&t902_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t902_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t902_f3_DefaultValue = 
{
	&t902_f3_FieldInfo, { (char*)&t902_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t902_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t902_f4_DefaultValue = 
{
	&t902_f4_FieldInfo, { (char*)&t902_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t902_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t902_f5_DefaultValue = 
{
	&t902_f5_FieldInfo, { (char*)&t902_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t902_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t902_f6_DefaultValue = 
{
	&t902_f6_FieldInfo, { (char*)&t902_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t902_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t902_f7_DefaultValue = 
{
	&t902_f7_FieldInfo, { (char*)&t902_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t902_f8_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t902_f8_DefaultValue = 
{
	&t902_f8_FieldInfo, { (char*)&t902_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t902_f9_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t902_f9_DefaultValue = 
{
	&t902_f9_FieldInfo, { (char*)&t902_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t902_f10_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t902_f10_DefaultValue = 
{
	&t902_f10_FieldInfo, { (char*)&t902_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t902_f11_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t902_f11_DefaultValue = 
{
	&t902_f11_FieldInfo, { (char*)&t902_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t902_f12_DefaultValueData = 512;
static Il2CppFieldDefaultValueEntry t902_f12_DefaultValue = 
{
	&t902_f12_FieldInfo, { (char*)&t902_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t902_f13_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t902_f13_DefaultValue = 
{
	&t902_f13_FieldInfo, { (char*)&t902_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t902_f14_DefaultValueData = 515;
static Il2CppFieldDefaultValueEntry t902_f14_DefaultValue = 
{
	&t902_f14_FieldInfo, { (char*)&t902_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t902_f15_DefaultValueData = 111;
static Il2CppFieldDefaultValueEntry t902_f15_DefaultValue = 
{
	&t902_f15_FieldInfo, { (char*)&t902_f15_DefaultValueData, &t125_0_0_0 }};
static const int32_t t902_f16_DefaultValueData = 167;
static Il2CppFieldDefaultValueEntry t902_f16_DefaultValue = 
{
	&t902_f16_FieldInfo, { (char*)&t902_f16_DefaultValueData, &t125_0_0_0 }};
static const int32_t t902_f17_DefaultValueData = 383;
static Il2CppFieldDefaultValueEntry t902_f17_DefaultValue = 
{
	&t902_f17_FieldInfo, { (char*)&t902_f17_DefaultValueData, &t125_0_0_0 }};
static const int32_t t902_f18_DefaultValueData = 511;
static Il2CppFieldDefaultValueEntry t902_f18_DefaultValue = 
{
	&t902_f18_FieldInfo, { (char*)&t902_f18_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t902_FDVs[] = 
{
	&t902_f2_DefaultValue,
	&t902_f3_DefaultValue,
	&t902_f4_DefaultValue,
	&t902_f5_DefaultValue,
	&t902_f6_DefaultValue,
	&t902_f7_DefaultValue,
	&t902_f8_DefaultValue,
	&t902_f9_DefaultValue,
	&t902_f10_DefaultValue,
	&t902_f11_DefaultValue,
	&t902_f12_DefaultValue,
	&t902_f13_DefaultValue,
	&t902_f14_DefaultValue,
	&t902_f15_DefaultValue,
	&t902_f16_DefaultValue,
	&t902_f17_DefaultValue,
	&t902_f18_DefaultValue,
	NULL
};
static Il2CppMethodReference t902_VT[] =
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
static bool t902_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t902_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t902_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t615 * tmp;
		tmp = (t615 *)il2cpp_codegen_object_new (&t615_TI);
		m2991(tmp, &m2991_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t902__CustomAttributeCache = {
2,
NULL,
&t902_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t902_0_0_0;
extern Il2CppType t902_1_0_0;
extern CustomAttributesCache t902__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t902_DM = 
{
	NULL, NULL, NULL, t902_IOs, &t8_0_0_0, t902_VT, t902_VTIGM, NULL};
TypeInfo t902_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NumberStyles", "System.Globalization", t902_MIs, NULL, t902_FIs, NULL, &t125_TI, NULL, &t902__CustomAttributeCache, &t902_0_0_0, &t902_1_0_0, &t902_DM, NULL, NULL, NULL, t902_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t902)+ sizeof (Il2CppObject), sizeof (t902)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 18, 0, 0, 23, 0, 3};
#include "t1710.h"
// Metadata Definition System.Globalization.TextInfo/Data
extern TypeInfo t1710_TI;
#include "t1710MD.h"
static MethodInfo* t1710_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_6;
FieldInfo t1710_f0_FieldInfo = 
{
	"ansi", &t125_0_0_6, &t1710_TI, offsetof(t1710, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1710_f1_FieldInfo = 
{
	"ebcdic", &t125_0_0_6, &t1710_TI, offsetof(t1710, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1710_f2_FieldInfo = 
{
	"mac", &t125_0_0_6, &t1710_TI, offsetof(t1710, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1710_f3_FieldInfo = 
{
	"oem", &t125_0_0_6, &t1710_TI, offsetof(t1710, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t575_0_0_6;
FieldInfo t1710_f4_FieldInfo = 
{
	"list_sep", &t575_0_0_6, &t1710_TI, offsetof(t1710, f4) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1710_FIs[] =
{
	&t1710_f0_FieldInfo,
	&t1710_f1_FieldInfo,
	&t1710_f2_FieldInfo,
	&t1710_f3_FieldInfo,
	&t1710_f4_FieldInfo,
	NULL
};
static Il2CppMethodReference t1710_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1710_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1710_0_0_0;
extern Il2CppType t1710_1_0_0;
extern TypeInfo t1616_TI;
extern Il2CppType t1616_0_0_0;
const Il2CppTypeDefinitionMetadata t1710_DM = 
{
	&t1616_0_0_0, NULL, NULL, NULL, &t117_0_0_0, t1710_VT, t1710_VTIGM, NULL};
TypeInfo t1710_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Data", "", t1710_MIs, NULL, t1710_FIs, NULL, &t1710_TI, NULL, &EmptyCustomAttributesCache, &t1710_0_0_0, &t1710_1_0_0, &t1710_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1710)+ sizeof (Il2CppObject), sizeof (t1710)+ sizeof (Il2CppObject), 0, sizeof(t1710 ), 0, 0, -1, 1048843, 0, 0, true, false, false, false, false, false, false, false, false, true, 0, 0, 5, 0, 0, 4, 0, 0};
#include "t1616.h"
// Metadata Definition System.Globalization.TextInfo
#include "t1616MD.h"
extern Il2CppType t901_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2256_0_0_0;
extern Il2CppType t2256_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1616_m8768_ParameterInfos[] = 
{
	{"ci", 0, 134220963, &EmptyCustomAttributesCache, &t901_0_0_0},
	{"lcid", 1, 134220964, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"data", 2, 134220965, &EmptyCustomAttributesCache, &t2256_0_0_0},
	{"read_only", 3, 134220966, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8768_MI = 
{
	".ctor", (methodPointerType)&m8768, &t1616_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t9_t186, t1616_m8768_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 2513, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1616_m8769_ParameterInfos[] = 
{
	{"sender", 0, 134220967, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1616__CustomAttributeCache_m8769;
MethodInfo m8769_MI = 
{
	"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", (methodPointerType)&m8769, &t1616_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1616_m8769_ParameterInfos, &t1616__CustomAttributeCache_m8769, 481, 0, 4, 1, false, false, 2514, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8770_MI = 
{
	"get_CultureName", (methodPointerType)&m8770, &t1616_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2515, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1616_m8771_ParameterInfos[] = 
{
	{"obj", 0, 134220968, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8771_MI = 
{
	"Equals", (methodPointerType)&m8771, &t1616_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1616_m8771_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 2516, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8772_MI = 
{
	"GetHashCode", (methodPointerType)&m8772, &t1616_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 2517, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8773_MI = 
{
	"ToString", (methodPointerType)&m8773, &t1616_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2518, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t1616_m8774_ParameterInfos[] = 
{
	{"c", 0, 134220969, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m8774_MI = 
{
	"ToLower", (methodPointerType)&m8774, &t1616_TI, &t303_0_0_0, RuntimeInvoker_t303_t334, t1616_m8774_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 1, false, false, 2519, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t1616_m8775_ParameterInfos[] = 
{
	{"c", 0, 134220970, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m8775_MI = 
{
	"ToUpper", (methodPointerType)&m8775, &t1616_TI, &t303_0_0_0, RuntimeInvoker_t303_t334, t1616_m8775_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 1, false, false, 2520, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1616_m8776_ParameterInfos[] = 
{
	{"str", 0, 134220971, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8776_MI = 
{
	"ToLower", (methodPointerType)&m8776, &t1616_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1616_m8776_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 1, false, false, 2521, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1616_m8777_ParameterInfos[] = 
{
	{"str", 0, 134220972, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8777_MI = 
{
	"ToUpper", (methodPointerType)&m8777, &t1616_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1616_m8777_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 1, false, false, 2522, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1616_MIs[] =
{
	&m8768_MI,
	&m8769_MI,
	&m8770_MI,
	&m8771_MI,
	&m8772_MI,
	&m8773_MI,
	&m8774_MI,
	&m8775_MI,
	&m8776_MI,
	&m8777_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t1616_f0_FieldInfo = 
{
	"m_isReadOnly", &t124_0_0_1, &t1616_TI, offsetof(t1616, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1616_f1_FieldInfo = 
{
	"customCultureName", &t2_0_0_1, &t1616_TI, offsetof(t1616, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1616_f2_FieldInfo = 
{
	"m_win32LangID", &t125_0_0_1, &t1616_TI, offsetof(t1616, f2), &EmptyCustomAttributesCache};
extern Il2CppType t901_0_0_161;
FieldInfo t1616_f3_FieldInfo = 
{
	"ci", &t901_0_0_161, &t1616_TI, offsetof(t1616, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_161;
FieldInfo t1616_f4_FieldInfo = 
{
	"handleDotI", &t124_0_0_161, &t1616_TI, offsetof(t1616, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1710_0_0_161;
FieldInfo t1616_f5_FieldInfo = 
{
	"data", &t1710_0_0_161, &t1616_TI, offsetof(t1616, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1616_FIs[] =
{
	&t1616_f0_FieldInfo,
	&t1616_f1_FieldInfo,
	&t1616_f2_FieldInfo,
	&t1616_f3_FieldInfo,
	&t1616_f4_FieldInfo,
	&t1616_f5_FieldInfo,
	NULL
};
extern MethodInfo m8770_MI;
extern CustomAttributesCache t1616__CustomAttributeCache_t1616____CultureName_PropertyInfo;
static PropertyInfo t1616____CultureName_PropertyInfo = 
{
	&t1616_TI, "CultureName", &m8770_MI, NULL, 0, &t1616__CustomAttributeCache_t1616____CultureName_PropertyInfo};
static PropertyInfo* t1616_PIs[] =
{
	&t1616____CultureName_PropertyInfo,
	NULL
};
static const Il2CppType* t1616_TI__nestedTypes[1] =
{
	&t1710_0_0_0,
};
extern MethodInfo m8771_MI;
extern MethodInfo m8772_MI;
extern MethodInfo m8773_MI;
extern MethodInfo m8769_MI;
extern MethodInfo m8774_MI;
extern MethodInfo m8775_MI;
extern MethodInfo m8776_MI;
extern MethodInfo m8777_MI;
static Il2CppMethodReference t1616_VT[] =
{
	&m8771_MI,
	&m646_MI,
	&m8772_MI,
	&m8773_MI,
	&m8769_MI,
	&m8774_MI,
	&m8775_MI,
	&m8776_MI,
	&m8777_MI,
};
static bool t1616_VTIGM[] =
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
static const Il2CppType* t1616_ITIs[] = 
{
	&t622_0_0_0,
	&t1106_0_0_0,
};
static Il2CppInterfaceOffsetPair t1616_IOs[] = 
{
	{ &t622_0_0_0, 4},
	{ &t1106_0_0_0, 4},
};
void t1616_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7849(tmp, il2cpp_codegen_string_new_wrapper("IDeserializationCallback isn't implemented."), &m7849_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern MethodInfo m7848_MI;
void t1616_CustomAttributesCacheGenerator_m8769(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7848(tmp, &m7848_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1616_CustomAttributesCacheGenerator_t1616____CultureName_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1616__CustomAttributeCache = {
2,
NULL,
&t1616_CustomAttributesCacheGenerator
};
CustomAttributesCache t1616__CustomAttributeCache_m8769 = {
1,
NULL,
&t1616_CustomAttributesCacheGenerator_m8769
};
CustomAttributesCache t1616__CustomAttributeCache_t1616____CultureName_PropertyInfo = {
1,
NULL,
&t1616_CustomAttributesCacheGenerator_t1616____CultureName_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1616_1_0_0;
struct t1616;
extern CustomAttributesCache t1616__CustomAttributeCache;
extern CustomAttributesCache t1616__CustomAttributeCache_m8769;
extern CustomAttributesCache t1616__CustomAttributeCache_t1616____CultureName_PropertyInfo;
const Il2CppTypeDefinitionMetadata t1616_DM = 
{
	NULL, t1616_TI__nestedTypes, t1616_ITIs, t1616_IOs, &t9_0_0_0, t1616_VT, t1616_VTIGM, NULL};
TypeInfo t1616_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TextInfo", "System.Globalization", t1616_MIs, t1616_PIs, t1616_FIs, NULL, &t1616_TI, NULL, &t1616__CustomAttributeCache, &t1616_0_0_0, &t1616_1_0_0, &t1616_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1616), sizeof (t1616), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 1, 6, 0, 1, 9, 2, 2};
#include "t1285.h"
// Metadata Definition System.Globalization.UnicodeCategory
extern TypeInfo t1285_TI;
#include "t1285MD.h"
static MethodInfo* t1285_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1285_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1285_TI, offsetof(t1285, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f2_FieldInfo = 
{
	"UppercaseLetter", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f3_FieldInfo = 
{
	"LowercaseLetter", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f4_FieldInfo = 
{
	"TitlecaseLetter", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f5_FieldInfo = 
{
	"ModifierLetter", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f6_FieldInfo = 
{
	"OtherLetter", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f7_FieldInfo = 
{
	"NonSpacingMark", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f8_FieldInfo = 
{
	"SpacingCombiningMark", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f9_FieldInfo = 
{
	"EnclosingMark", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f10_FieldInfo = 
{
	"DecimalDigitNumber", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f11_FieldInfo = 
{
	"LetterNumber", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f12_FieldInfo = 
{
	"OtherNumber", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f13_FieldInfo = 
{
	"SpaceSeparator", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f14_FieldInfo = 
{
	"LineSeparator", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f15_FieldInfo = 
{
	"ParagraphSeparator", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f16_FieldInfo = 
{
	"Control", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f17_FieldInfo = 
{
	"Format", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f18_FieldInfo = 
{
	"Surrogate", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f19_FieldInfo = 
{
	"PrivateUse", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f20_FieldInfo = 
{
	"ConnectorPunctuation", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f21_FieldInfo = 
{
	"DashPunctuation", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f22_FieldInfo = 
{
	"OpenPunctuation", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f23_FieldInfo = 
{
	"ClosePunctuation", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f24_FieldInfo = 
{
	"InitialQuotePunctuation", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f25_FieldInfo = 
{
	"FinalQuotePunctuation", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f26_FieldInfo = 
{
	"OtherPunctuation", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f27_FieldInfo = 
{
	"MathSymbol", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f28_FieldInfo = 
{
	"CurrencySymbol", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f29_FieldInfo = 
{
	"ModifierSymbol", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f30_FieldInfo = 
{
	"OtherSymbol", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1285_0_0_32854;
FieldInfo t1285_f31_FieldInfo = 
{
	"OtherNotAssigned", &t1285_0_0_32854, &t1285_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1285_FIs[] =
{
	&t1285_f1_FieldInfo,
	&t1285_f2_FieldInfo,
	&t1285_f3_FieldInfo,
	&t1285_f4_FieldInfo,
	&t1285_f5_FieldInfo,
	&t1285_f6_FieldInfo,
	&t1285_f7_FieldInfo,
	&t1285_f8_FieldInfo,
	&t1285_f9_FieldInfo,
	&t1285_f10_FieldInfo,
	&t1285_f11_FieldInfo,
	&t1285_f12_FieldInfo,
	&t1285_f13_FieldInfo,
	&t1285_f14_FieldInfo,
	&t1285_f15_FieldInfo,
	&t1285_f16_FieldInfo,
	&t1285_f17_FieldInfo,
	&t1285_f18_FieldInfo,
	&t1285_f19_FieldInfo,
	&t1285_f20_FieldInfo,
	&t1285_f21_FieldInfo,
	&t1285_f22_FieldInfo,
	&t1285_f23_FieldInfo,
	&t1285_f24_FieldInfo,
	&t1285_f25_FieldInfo,
	&t1285_f26_FieldInfo,
	&t1285_f27_FieldInfo,
	&t1285_f28_FieldInfo,
	&t1285_f29_FieldInfo,
	&t1285_f30_FieldInfo,
	&t1285_f31_FieldInfo,
	NULL
};
static const int32_t t1285_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1285_f2_DefaultValue = 
{
	&t1285_f2_FieldInfo, { (char*)&t1285_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1285_f3_DefaultValue = 
{
	&t1285_f3_FieldInfo, { (char*)&t1285_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1285_f4_DefaultValue = 
{
	&t1285_f4_FieldInfo, { (char*)&t1285_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1285_f5_DefaultValue = 
{
	&t1285_f5_FieldInfo, { (char*)&t1285_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1285_f6_DefaultValue = 
{
	&t1285_f6_FieldInfo, { (char*)&t1285_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1285_f7_DefaultValue = 
{
	&t1285_f7_FieldInfo, { (char*)&t1285_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1285_f8_DefaultValue = 
{
	&t1285_f8_FieldInfo, { (char*)&t1285_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1285_f9_DefaultValue = 
{
	&t1285_f9_FieldInfo, { (char*)&t1285_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f10_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1285_f10_DefaultValue = 
{
	&t1285_f10_FieldInfo, { (char*)&t1285_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f11_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t1285_f11_DefaultValue = 
{
	&t1285_f11_FieldInfo, { (char*)&t1285_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f12_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t1285_f12_DefaultValue = 
{
	&t1285_f12_FieldInfo, { (char*)&t1285_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f13_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t1285_f13_DefaultValue = 
{
	&t1285_f13_FieldInfo, { (char*)&t1285_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f14_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t1285_f14_DefaultValue = 
{
	&t1285_f14_FieldInfo, { (char*)&t1285_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f15_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry t1285_f15_DefaultValue = 
{
	&t1285_f15_FieldInfo, { (char*)&t1285_f15_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f16_DefaultValueData = 14;
static Il2CppFieldDefaultValueEntry t1285_f16_DefaultValue = 
{
	&t1285_f16_FieldInfo, { (char*)&t1285_f16_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f17_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t1285_f17_DefaultValue = 
{
	&t1285_f17_FieldInfo, { (char*)&t1285_f17_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f18_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1285_f18_DefaultValue = 
{
	&t1285_f18_FieldInfo, { (char*)&t1285_f18_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f19_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry t1285_f19_DefaultValue = 
{
	&t1285_f19_FieldInfo, { (char*)&t1285_f19_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f20_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry t1285_f20_DefaultValue = 
{
	&t1285_f20_FieldInfo, { (char*)&t1285_f20_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f21_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry t1285_f21_DefaultValue = 
{
	&t1285_f21_FieldInfo, { (char*)&t1285_f21_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f22_DefaultValueData = 20;
static Il2CppFieldDefaultValueEntry t1285_f22_DefaultValue = 
{
	&t1285_f22_FieldInfo, { (char*)&t1285_f22_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f23_DefaultValueData = 21;
static Il2CppFieldDefaultValueEntry t1285_f23_DefaultValue = 
{
	&t1285_f23_FieldInfo, { (char*)&t1285_f23_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f24_DefaultValueData = 22;
static Il2CppFieldDefaultValueEntry t1285_f24_DefaultValue = 
{
	&t1285_f24_FieldInfo, { (char*)&t1285_f24_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f25_DefaultValueData = 23;
static Il2CppFieldDefaultValueEntry t1285_f25_DefaultValue = 
{
	&t1285_f25_FieldInfo, { (char*)&t1285_f25_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f26_DefaultValueData = 24;
static Il2CppFieldDefaultValueEntry t1285_f26_DefaultValue = 
{
	&t1285_f26_FieldInfo, { (char*)&t1285_f26_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f27_DefaultValueData = 25;
static Il2CppFieldDefaultValueEntry t1285_f27_DefaultValue = 
{
	&t1285_f27_FieldInfo, { (char*)&t1285_f27_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f28_DefaultValueData = 26;
static Il2CppFieldDefaultValueEntry t1285_f28_DefaultValue = 
{
	&t1285_f28_FieldInfo, { (char*)&t1285_f28_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f29_DefaultValueData = 27;
static Il2CppFieldDefaultValueEntry t1285_f29_DefaultValue = 
{
	&t1285_f29_FieldInfo, { (char*)&t1285_f29_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f30_DefaultValueData = 28;
static Il2CppFieldDefaultValueEntry t1285_f30_DefaultValue = 
{
	&t1285_f30_FieldInfo, { (char*)&t1285_f30_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1285_f31_DefaultValueData = 29;
static Il2CppFieldDefaultValueEntry t1285_f31_DefaultValue = 
{
	&t1285_f31_FieldInfo, { (char*)&t1285_f31_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1285_FDVs[] = 
{
	&t1285_f2_DefaultValue,
	&t1285_f3_DefaultValue,
	&t1285_f4_DefaultValue,
	&t1285_f5_DefaultValue,
	&t1285_f6_DefaultValue,
	&t1285_f7_DefaultValue,
	&t1285_f8_DefaultValue,
	&t1285_f9_DefaultValue,
	&t1285_f10_DefaultValue,
	&t1285_f11_DefaultValue,
	&t1285_f12_DefaultValue,
	&t1285_f13_DefaultValue,
	&t1285_f14_DefaultValue,
	&t1285_f15_DefaultValue,
	&t1285_f16_DefaultValue,
	&t1285_f17_DefaultValue,
	&t1285_f18_DefaultValue,
	&t1285_f19_DefaultValue,
	&t1285_f20_DefaultValue,
	&t1285_f21_DefaultValue,
	&t1285_f22_DefaultValue,
	&t1285_f23_DefaultValue,
	&t1285_f24_DefaultValue,
	&t1285_f25_DefaultValue,
	&t1285_f26_DefaultValue,
	&t1285_f27_DefaultValue,
	&t1285_f28_DefaultValue,
	&t1285_f29_DefaultValue,
	&t1285_f30_DefaultValue,
	&t1285_f31_DefaultValue,
	NULL
};
static Il2CppMethodReference t1285_VT[] =
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
static bool t1285_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1285_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1285_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1285__CustomAttributeCache = {
1,
NULL,
&t1285_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1285_0_0_0;
extern Il2CppType t1285_1_0_0;
extern CustomAttributesCache t1285__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1285_DM = 
{
	NULL, NULL, NULL, t1285_IOs, &t8_0_0_0, t1285_VT, t1285_VTIGM, NULL};
TypeInfo t1285_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UnicodeCategory", "System.Globalization", t1285_MIs, NULL, t1285_FIs, NULL, &t125_TI, NULL, &t1285__CustomAttributeCache, &t1285_0_0_0, &t1285_1_0_0, &t1285_DM, NULL, NULL, NULL, t1285_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1285)+ sizeof (Il2CppObject), sizeof (t1285)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 31, 0, 0, 23, 0, 3};
#include "t1711.h"
// Metadata Definition System.IO.IsolatedStorage.IsolatedStorageException
extern TypeInfo t1711_TI;
#include "t1711MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8778_MI = 
{
	".ctor", (methodPointerType)&m8778, &t1711_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2523, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1711_m8779_ParameterInfos[] = 
{
	{"message", 0, 134220973, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8779_MI = 
{
	".ctor", (methodPointerType)&m8779, &t1711_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1711_m8779_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2524, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1711_m8780_ParameterInfos[] = 
{
	{"info", 0, 134220974, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134220975, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m8780_MI = 
{
	".ctor", (methodPointerType)&m8780, &t1711_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1711_m8780_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2525, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1711_MIs[] =
{
	&m8778_MI,
	&m8779_MI,
	&m8780_MI,
	NULL
};
extern MethodInfo m4496_MI;
extern MethodInfo m4497_MI;
extern MethodInfo m4243_MI;
extern MethodInfo m1098_MI;
extern MethodInfo m4498_MI;
extern MethodInfo m4441_MI;
extern MethodInfo m4442_MI;
static Il2CppMethodReference t1711_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4496_MI,
	&m4497_MI,
	&m4243_MI,
	&m1098_MI,
	&m4498_MI,
	&m4441_MI,
	&m4497_MI,
	&m4442_MI,
};
static bool t1711_VTIGM[] =
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
extern Il2CppType t623_0_0_0;
extern Il2CppType t948_0_0_0;
static Il2CppInterfaceOffsetPair t1711_IOs[] = 
{
	{ &t623_0_0_0, 4},
	{ &t948_0_0_0, 5},
};
void t1711_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1711__CustomAttributeCache = {
1,
NULL,
&t1711_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1711_0_0_0;
extern Il2CppType t1711_1_0_0;
struct t1711;
extern CustomAttributesCache t1711__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1711_DM = 
{
	NULL, NULL, NULL, t1711_IOs, &t138_0_0_0, t1711_VT, t1711_VTIGM, NULL};
TypeInfo t1711_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IsolatedStorageException", "System.IO.IsolatedStorage", t1711_MIs, NULL, NULL, NULL, &t1711_TI, NULL, &t1711__CustomAttributeCache, &t1711_0_0_0, &t1711_1_0_0, &t1711_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1711), sizeof (t1711), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1712.h"
// Metadata Definition System.IO.BinaryReader
extern TypeInfo t1712_TI;
#include "t1712MD.h"
extern Il2CppType t298_0_0_0;
extern Il2CppType t298_0_0_0;
static ParameterInfo t1712_m8781_ParameterInfos[] = 
{
	{"input", 0, 134220976, &EmptyCustomAttributesCache, &t298_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8781_MI = 
{
	".ctor", (methodPointerType)&m8781, &t1712_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1712_m8781_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2526, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t298_0_0_0;
extern Il2CppType t729_0_0_0;
extern Il2CppType t729_0_0_0;
static ParameterInfo t1712_m8782_ParameterInfos[] = 
{
	{"input", 0, 134220977, &EmptyCustomAttributesCache, &t298_0_0_0},
	{"encoding", 1, 134220978, &EmptyCustomAttributesCache, &t729_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8782_MI = 
{
	".ctor", (methodPointerType)&m8782, &t1712_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1712_m8782_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2527, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8783_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m8783, &t1712_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 2528, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1712_m8784_ParameterInfos[] = 
{
	{"disposing", 0, 134220979, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8784_MI = 
{
	"Dispose", (methodPointerType)&m8784, &t1712_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1712_m8784_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 5, 1, false, false, 2529, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1712_m8785_ParameterInfos[] = 
{
	{"numBytes", 0, 134220980, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8785_MI = 
{
	"FillBuffer", (methodPointerType)&m8785, &t1712_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1712_m8785_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 6, 1, false, false, 2530, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8786_MI = 
{
	"Read", (methodPointerType)&m8786, &t1712_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2531, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1712_m8787_ParameterInfos[] = 
{
	{"buffer", 0, 134220981, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"index", 1, 134220982, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220983, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8787_MI = 
{
	"Read", (methodPointerType)&m8787, &t1712_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1712_m8787_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 3, false, false, 2532, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1712_m8788_ParameterInfos[] = 
{
	{"buffer", 0, 134220984, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"index", 1, 134220985, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220986, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8788_MI = 
{
	"Read", (methodPointerType)&m8788, &t1712_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1712_m8788_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 3, false, false, 2533, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_1_0_2;
static ParameterInfo t1712_m8789_ParameterInfos[] = 
{
	{"buffer", 0, 134220987, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"index", 1, 134220988, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220989, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes_read", 3, 134220990, &EmptyCustomAttributesCache, &t125_1_0_2},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t336 (MethodInfo* method, void* obj, void** args);
MethodInfo m8789_MI = 
{
	"ReadCharBytes", (methodPointerType)&m8789, &t1712_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t336, t1712_m8789_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 2534, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8790_MI = 
{
	"Read7BitEncodedInt", (methodPointerType)&m8790, &t1712_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 132, 0, 255, 0, false, false, 2535, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8791_MI = 
{
	"ReadBoolean", (methodPointerType)&m8791, &t1712_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 454, 0, 10, 0, false, false, 2536, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t575_0_0_0;
extern void* RuntimeInvoker_t575 (MethodInfo* method, void* obj, void** args);
MethodInfo m8792_MI = 
{
	"ReadByte", (methodPointerType)&m8792, &t1712_TI, &t575_0_0_0, RuntimeInvoker_t575, NULL, &EmptyCustomAttributesCache, 454, 0, 11, 0, false, false, 2537, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m8793_MI = 
{
	"ReadChar", (methodPointerType)&m8793, &t1712_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 454, 0, 12, 0, false, false, 2538, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t904_0_0_0;
extern void* RuntimeInvoker_t904 (MethodInfo* method, void* obj, void** args);
MethodInfo m8794_MI = 
{
	"ReadDecimal", (methodPointerType)&m8794, &t1712_TI, &t904_0_0_0, RuntimeInvoker_t904, NULL, &EmptyCustomAttributesCache, 454, 0, 13, 0, false, false, 2539, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t156_0_0_0;
extern void* RuntimeInvoker_t156 (MethodInfo* method, void* obj, void** args);
MethodInfo m8795_MI = 
{
	"ReadDouble", (methodPointerType)&m8795, &t1712_TI, &t156_0_0_0, RuntimeInvoker_t156, NULL, &EmptyCustomAttributesCache, 454, 0, 14, 0, false, false, 2540, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t334_0_0_0;
extern void* RuntimeInvoker_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m8796_MI = 
{
	"ReadInt16", (methodPointerType)&m8796, &t1712_TI, &t334_0_0_0, RuntimeInvoker_t334, NULL, &EmptyCustomAttributesCache, 454, 0, 15, 0, false, false, 2541, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8797_MI = 
{
	"ReadInt32", (methodPointerType)&m8797, &t1712_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 16, 0, false, false, 2542, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m8798_MI = 
{
	"ReadInt64", (methodPointerType)&m8798, &t1712_TI, &t299_0_0_0, RuntimeInvoker_t299, NULL, &EmptyCustomAttributesCache, 454, 0, 17, 0, false, false, 2543, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t186_0_0_0;
extern void* RuntimeInvoker_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1712__CustomAttributeCache_m8799;
MethodInfo m8799_MI = 
{
	"ReadSByte", (methodPointerType)&m8799, &t1712_TI, &t186_0_0_0, RuntimeInvoker_t186, NULL, &t1712__CustomAttributeCache_m8799, 454, 0, 18, 0, false, false, 2544, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8800_MI = 
{
	"ReadString", (methodPointerType)&m8800, &t1712_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 19, 0, false, false, 2545, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m8801_MI = 
{
	"ReadSingle", (methodPointerType)&m8801, &t1712_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 454, 0, 20, 0, false, false, 2546, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t309 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1712__CustomAttributeCache_m8802;
MethodInfo m8802_MI = 
{
	"ReadUInt16", (methodPointerType)&m8802, &t1712_TI, &t309_0_0_0, RuntimeInvoker_t309, NULL, &t1712__CustomAttributeCache_m8802, 454, 0, 21, 0, false, false, 2547, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1712__CustomAttributeCache_m8803;
MethodInfo m8803_MI = 
{
	"ReadUInt32", (methodPointerType)&m8803, &t1712_TI, &t168_0_0_0, RuntimeInvoker_t168, NULL, &t1712__CustomAttributeCache_m8803, 454, 0, 22, 0, false, false, 2548, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
extern void* RuntimeInvoker_t889 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1712__CustomAttributeCache_m8804;
MethodInfo m8804_MI = 
{
	"ReadUInt64", (methodPointerType)&m8804, &t1712_TI, &t889_0_0_0, RuntimeInvoker_t889, NULL, &t1712__CustomAttributeCache_m8804, 454, 0, 23, 0, false, false, 2549, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1712_m8805_ParameterInfos[] = 
{
	{"length", 0, 134220991, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8805_MI = 
{
	"CheckBuffer", (methodPointerType)&m8805, &t1712_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1712_m8805_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2550, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1712_MIs[] =
{
	&m8781_MI,
	&m8782_MI,
	&m8783_MI,
	&m8784_MI,
	&m8785_MI,
	&m8786_MI,
	&m8787_MI,
	&m8788_MI,
	&m8789_MI,
	&m8790_MI,
	&m8791_MI,
	&m8792_MI,
	&m8793_MI,
	&m8794_MI,
	&m8795_MI,
	&m8796_MI,
	&m8797_MI,
	&m8798_MI,
	&m8799_MI,
	&m8800_MI,
	&m8801_MI,
	&m8802_MI,
	&m8803_MI,
	&m8804_MI,
	&m8805_MI,
	NULL
};
extern Il2CppType t298_0_0_1;
FieldInfo t1712_f0_FieldInfo = 
{
	"m_stream", &t298_0_0_1, &t1712_TI, offsetof(t1712, f0), &EmptyCustomAttributesCache};
extern Il2CppType t729_0_0_1;
FieldInfo t1712_f1_FieldInfo = 
{
	"m_encoding", &t729_0_0_1, &t1712_TI, offsetof(t1712, f1), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t1712_f2_FieldInfo = 
{
	"m_buffer", &t730_0_0_1, &t1712_TI, offsetof(t1712, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1713_0_0_1;
FieldInfo t1712_f3_FieldInfo = 
{
	"decoder", &t1713_0_0_1, &t1712_TI, offsetof(t1712, f3), &EmptyCustomAttributesCache};
extern Il2CppType t312_0_0_1;
FieldInfo t1712_f4_FieldInfo = 
{
	"charBuffer", &t312_0_0_1, &t1712_TI, offsetof(t1712, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1712_f5_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t1712_TI, offsetof(t1712, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1712_FIs[] =
{
	&t1712_f0_FieldInfo,
	&t1712_f1_FieldInfo,
	&t1712_f2_FieldInfo,
	&t1712_f3_FieldInfo,
	&t1712_f4_FieldInfo,
	&t1712_f5_FieldInfo,
	NULL
};
extern MethodInfo m8783_MI;
extern MethodInfo m8784_MI;
extern MethodInfo m8785_MI;
extern MethodInfo m8786_MI;
extern MethodInfo m8787_MI;
extern MethodInfo m8788_MI;
extern MethodInfo m8791_MI;
extern MethodInfo m8792_MI;
extern MethodInfo m8793_MI;
extern MethodInfo m8794_MI;
extern MethodInfo m8795_MI;
extern MethodInfo m8796_MI;
extern MethodInfo m8797_MI;
extern MethodInfo m8798_MI;
extern MethodInfo m8799_MI;
extern MethodInfo m8800_MI;
extern MethodInfo m8801_MI;
extern MethodInfo m8802_MI;
extern MethodInfo m8803_MI;
extern MethodInfo m8804_MI;
static Il2CppMethodReference t1712_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8783_MI,
	&m8784_MI,
	&m8785_MI,
	&m8786_MI,
	&m8787_MI,
	&m8788_MI,
	&m8791_MI,
	&m8792_MI,
	&m8793_MI,
	&m8794_MI,
	&m8795_MI,
	&m8796_MI,
	&m8797_MI,
	&m8798_MI,
	&m8799_MI,
	&m8800_MI,
	&m8801_MI,
	&m8802_MI,
	&m8803_MI,
	&m8804_MI,
};
static bool t1712_VTIGM[] =
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
};
extern Il2CppType t137_0_0_0;
static const Il2CppType* t1712_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1712_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1712_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1152_TI;
#include "t1152.h"
#include "t1152MD.h"
extern MethodInfo m4801_MI;
void t1712_CustomAttributesCacheGenerator_m8799(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1152 * tmp;
		tmp = (t1152 *)il2cpp_codegen_object_new (&t1152_TI);
		m4801(tmp, false, &m4801_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1712_CustomAttributesCacheGenerator_m8802(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1152 * tmp;
		tmp = (t1152 *)il2cpp_codegen_object_new (&t1152_TI);
		m4801(tmp, false, &m4801_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1712_CustomAttributesCacheGenerator_m8803(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1152 * tmp;
		tmp = (t1152 *)il2cpp_codegen_object_new (&t1152_TI);
		m4801(tmp, false, &m4801_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1712_CustomAttributesCacheGenerator_m8804(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1152 * tmp;
		tmp = (t1152 *)il2cpp_codegen_object_new (&t1152_TI);
		m4801(tmp, false, &m4801_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1712__CustomAttributeCache = {
1,
NULL,
&t1712_CustomAttributesCacheGenerator
};
CustomAttributesCache t1712__CustomAttributeCache_m8799 = {
1,
NULL,
&t1712_CustomAttributesCacheGenerator_m8799
};
CustomAttributesCache t1712__CustomAttributeCache_m8802 = {
1,
NULL,
&t1712_CustomAttributesCacheGenerator_m8802
};
CustomAttributesCache t1712__CustomAttributeCache_m8803 = {
1,
NULL,
&t1712_CustomAttributesCacheGenerator_m8803
};
CustomAttributesCache t1712__CustomAttributeCache_m8804 = {
1,
NULL,
&t1712_CustomAttributesCacheGenerator_m8804
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1712_0_0_0;
extern Il2CppType t1712_1_0_0;
struct t1712;
extern CustomAttributesCache t1712__CustomAttributeCache;
extern CustomAttributesCache t1712__CustomAttributeCache_m8799;
extern CustomAttributesCache t1712__CustomAttributeCache_m8802;
extern CustomAttributesCache t1712__CustomAttributeCache_m8803;
extern CustomAttributesCache t1712__CustomAttributeCache_m8804;
const Il2CppTypeDefinitionMetadata t1712_DM = 
{
	NULL, NULL, t1712_ITIs, t1712_IOs, &t9_0_0_0, t1712_VT, t1712_VTIGM, NULL};
TypeInfo t1712_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryReader", "System.IO", t1712_MIs, NULL, t1712_FIs, NULL, &t1712_TI, NULL, &t1712__CustomAttributeCache, &t1712_0_0_0, &t1712_1_0_0, &t1712_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1712), sizeof (t1712), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 25, 0, 6, 0, 0, 24, 1, 1};
#include "t1714.h"
// Metadata Definition System.IO.BinaryWriter
extern TypeInfo t1714_TI;
#include "t1714MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8806_MI = 
{
	".ctor", (methodPointerType)&m8806, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2551, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t298_0_0_0;
static ParameterInfo t1714_m8807_ParameterInfos[] = 
{
	{"output", 0, 134220992, &EmptyCustomAttributesCache, &t298_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8807_MI = 
{
	".ctor", (methodPointerType)&m8807, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1714_m8807_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2552, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t298_0_0_0;
extern Il2CppType t729_0_0_0;
static ParameterInfo t1714_m8808_ParameterInfos[] = 
{
	{"output", 0, 134220993, &EmptyCustomAttributesCache, &t298_0_0_0},
	{"encoding", 1, 134220994, &EmptyCustomAttributesCache, &t729_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8808_MI = 
{
	".ctor", (methodPointerType)&m8808, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1714_m8808_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2553, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8809_MI = 
{
	".cctor", (methodPointerType)&m8809, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2554, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8810_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m8810, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 2555, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1714_m8811_ParameterInfos[] = 
{
	{"disposing", 0, 134220995, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8811_MI = 
{
	"Dispose", (methodPointerType)&m8811, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1714_m8811_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 5, 1, false, false, 2556, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8812_MI = 
{
	"Flush", (methodPointerType)&m8812, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 2557, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1714_m8813_ParameterInfos[] = 
{
	{"value", 0, 134220996, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8813_MI = 
{
	"Write", (methodPointerType)&m8813, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1714_m8813_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 1, false, false, 2558, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t575_0_0_0;
extern Il2CppType t575_0_0_0;
static ParameterInfo t1714_m8814_ParameterInfos[] = 
{
	{"value", 0, 134220997, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8814_MI = 
{
	"Write", (methodPointerType)&m8814, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1714_m8814_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 1, false, false, 2559, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1714_m8815_ParameterInfos[] = 
{
	{"buffer", 0, 134220998, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8815_MI = 
{
	"Write", (methodPointerType)&m8815, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1714_m8815_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 1, false, false, 2560, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1714_m8816_ParameterInfos[] = 
{
	{"buffer", 0, 134220999, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"index", 1, 134221000, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221001, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8816_MI = 
{
	"Write", (methodPointerType)&m8816, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1714_m8816_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 3, false, false, 2561, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t1714_m8817_ParameterInfos[] = 
{
	{"ch", 0, 134221002, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m8817_MI = 
{
	"Write", (methodPointerType)&m8817, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t334, t1714_m8817_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 1, false, false, 2562, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
static ParameterInfo t1714_m8818_ParameterInfos[] = 
{
	{"chars", 0, 134221003, &EmptyCustomAttributesCache, &t312_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8818_MI = 
{
	"Write", (methodPointerType)&m8818, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1714_m8818_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 12, 1, false, false, 2563, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t904_0_0_0;
extern Il2CppType t904_0_0_0;
static ParameterInfo t1714_m8819_ParameterInfos[] = 
{
	{"value", 0, 134221004, &EmptyCustomAttributesCache, &t904_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t904 (MethodInfo* method, void* obj, void** args);
MethodInfo m8819_MI = 
{
	"Write", (methodPointerType)&m8819, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t904, t1714_m8819_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 1, false, false, 2564, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t156_0_0_0;
extern Il2CppType t156_0_0_0;
static ParameterInfo t1714_m8820_ParameterInfos[] = 
{
	{"value", 0, 134221005, &EmptyCustomAttributesCache, &t156_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t156 (MethodInfo* method, void* obj, void** args);
MethodInfo m8820_MI = 
{
	"Write", (methodPointerType)&m8820, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t156, t1714_m8820_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 1, false, false, 2565, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t334_0_0_0;
extern Il2CppType t334_0_0_0;
static ParameterInfo t1714_m8821_ParameterInfos[] = 
{
	{"value", 0, 134221006, &EmptyCustomAttributesCache, &t334_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m8821_MI = 
{
	"Write", (methodPointerType)&m8821, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t334, t1714_m8821_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 15, 1, false, false, 2566, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1714_m8822_ParameterInfos[] = 
{
	{"value", 0, 134221007, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8822_MI = 
{
	"Write", (methodPointerType)&m8822, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1714_m8822_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 16, 1, false, false, 2567, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern Il2CppType t299_0_0_0;
static ParameterInfo t1714_m8823_ParameterInfos[] = 
{
	{"value", 0, 134221008, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m8823_MI = 
{
	"Write", (methodPointerType)&m8823, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t299, t1714_m8823_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 17, 1, false, false, 2568, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t186_0_0_0;
extern Il2CppType t186_0_0_0;
static ParameterInfo t1714_m8824_ParameterInfos[] = 
{
	{"value", 0, 134221009, &EmptyCustomAttributesCache, &t186_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1714__CustomAttributeCache_m8824;
MethodInfo m8824_MI = 
{
	"Write", (methodPointerType)&m8824, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1714_m8824_ParameterInfos, &t1714__CustomAttributeCache_m8824, 454, 0, 18, 1, false, false, 2569, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t1714_m8825_ParameterInfos[] = 
{
	{"value", 0, 134221010, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m8825_MI = 
{
	"Write", (methodPointerType)&m8825, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t123, t1714_m8825_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 19, 1, false, false, 2570, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1714_m8826_ParameterInfos[] = 
{
	{"value", 0, 134221011, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8826_MI = 
{
	"Write", (methodPointerType)&m8826, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1714_m8826_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 20, 1, false, false, 2571, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t1714_m8827_ParameterInfos[] = 
{
	{"value", 0, 134221012, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t334 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1714__CustomAttributeCache_m8827;
MethodInfo m8827_MI = 
{
	"Write", (methodPointerType)&m8827, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t334, t1714_m8827_ParameterInfos, &t1714__CustomAttributeCache_m8827, 454, 0, 21, 1, false, false, 2572, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1714_m8828_ParameterInfos[] = 
{
	{"value", 0, 134221013, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1714__CustomAttributeCache_m8828;
MethodInfo m8828_MI = 
{
	"Write", (methodPointerType)&m8828, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1714_m8828_ParameterInfos, &t1714__CustomAttributeCache_m8828, 454, 0, 22, 1, false, false, 2573, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t889_0_0_0;
extern Il2CppType t889_0_0_0;
static ParameterInfo t1714_m8829_ParameterInfos[] = 
{
	{"value", 0, 134221014, &EmptyCustomAttributesCache, &t889_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1714__CustomAttributeCache_m8829;
MethodInfo m8829_MI = 
{
	"Write", (methodPointerType)&m8829, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t299, t1714_m8829_ParameterInfos, &t1714__CustomAttributeCache_m8829, 454, 0, 23, 1, false, false, 2574, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1714_m8830_ParameterInfos[] = 
{
	{"value", 0, 134221015, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8830_MI = 
{
	"Write7BitEncodedInt", (methodPointerType)&m8830, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1714_m8830_ParameterInfos, &EmptyCustomAttributesCache, 132, 0, 255, 1, false, false, 2575, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1714_MIs[] =
{
	&m8806_MI,
	&m8807_MI,
	&m8808_MI,
	&m8809_MI,
	&m8810_MI,
	&m8811_MI,
	&m8812_MI,
	&m8813_MI,
	&m8814_MI,
	&m8815_MI,
	&m8816_MI,
	&m8817_MI,
	&m8818_MI,
	&m8819_MI,
	&m8820_MI,
	&m8821_MI,
	&m8822_MI,
	&m8823_MI,
	&m8824_MI,
	&m8825_MI,
	&m8826_MI,
	&m8827_MI,
	&m8828_MI,
	&m8829_MI,
	&m8830_MI,
	NULL
};
extern Il2CppType t1714_0_0_54;
FieldInfo t1714_f0_FieldInfo = 
{
	"Null", &t1714_0_0_54, &t1714_TI, offsetof(t1714_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t298_0_0_4;
FieldInfo t1714_f1_FieldInfo = 
{
	"OutStream", &t298_0_0_4, &t1714_TI, offsetof(t1714, f1), &EmptyCustomAttributesCache};
extern Il2CppType t729_0_0_1;
FieldInfo t1714_f2_FieldInfo = 
{
	"m_encoding", &t729_0_0_1, &t1714_TI, offsetof(t1714, f2), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t1714_f3_FieldInfo = 
{
	"buffer", &t730_0_0_1, &t1714_TI, offsetof(t1714, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1714_f4_FieldInfo = 
{
	"disposed", &t124_0_0_1, &t1714_TI, offsetof(t1714, f4), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t1714_f5_FieldInfo = 
{
	"stringBuffer", &t730_0_0_1, &t1714_TI, offsetof(t1714, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1714_f6_FieldInfo = 
{
	"maxCharsPerRound", &t125_0_0_1, &t1714_TI, offsetof(t1714, f6), &EmptyCustomAttributesCache};
static FieldInfo* t1714_FIs[] =
{
	&t1714_f0_FieldInfo,
	&t1714_f1_FieldInfo,
	&t1714_f2_FieldInfo,
	&t1714_f3_FieldInfo,
	&t1714_f4_FieldInfo,
	&t1714_f5_FieldInfo,
	&t1714_f6_FieldInfo,
	NULL
};
extern MethodInfo m8810_MI;
extern MethodInfo m8811_MI;
extern MethodInfo m8812_MI;
extern MethodInfo m8813_MI;
extern MethodInfo m8814_MI;
extern MethodInfo m8815_MI;
extern MethodInfo m8816_MI;
extern MethodInfo m8817_MI;
extern MethodInfo m8818_MI;
extern MethodInfo m8819_MI;
extern MethodInfo m8820_MI;
extern MethodInfo m8821_MI;
extern MethodInfo m8822_MI;
extern MethodInfo m8823_MI;
extern MethodInfo m8824_MI;
extern MethodInfo m8825_MI;
extern MethodInfo m8826_MI;
extern MethodInfo m8827_MI;
extern MethodInfo m8828_MI;
extern MethodInfo m8829_MI;
static Il2CppMethodReference t1714_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8810_MI,
	&m8811_MI,
	&m8812_MI,
	&m8813_MI,
	&m8814_MI,
	&m8815_MI,
	&m8816_MI,
	&m8817_MI,
	&m8818_MI,
	&m8819_MI,
	&m8820_MI,
	&m8821_MI,
	&m8822_MI,
	&m8823_MI,
	&m8824_MI,
	&m8825_MI,
	&m8826_MI,
	&m8827_MI,
	&m8828_MI,
	&m8829_MI,
};
static bool t1714_VTIGM[] =
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
};
static const Il2CppType* t1714_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1714_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1714_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1714_CustomAttributesCacheGenerator_m8824(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1152 * tmp;
		tmp = (t1152 *)il2cpp_codegen_object_new (&t1152_TI);
		m4801(tmp, false, &m4801_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1714_CustomAttributesCacheGenerator_m8827(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1152 * tmp;
		tmp = (t1152 *)il2cpp_codegen_object_new (&t1152_TI);
		m4801(tmp, false, &m4801_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1714_CustomAttributesCacheGenerator_m8828(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1152 * tmp;
		tmp = (t1152 *)il2cpp_codegen_object_new (&t1152_TI);
		m4801(tmp, false, &m4801_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1714_CustomAttributesCacheGenerator_m8829(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1152 * tmp;
		tmp = (t1152 *)il2cpp_codegen_object_new (&t1152_TI);
		m4801(tmp, false, &m4801_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1714__CustomAttributeCache = {
1,
NULL,
&t1714_CustomAttributesCacheGenerator
};
CustomAttributesCache t1714__CustomAttributeCache_m8824 = {
1,
NULL,
&t1714_CustomAttributesCacheGenerator_m8824
};
CustomAttributesCache t1714__CustomAttributeCache_m8827 = {
1,
NULL,
&t1714_CustomAttributesCacheGenerator_m8827
};
CustomAttributesCache t1714__CustomAttributeCache_m8828 = {
1,
NULL,
&t1714_CustomAttributesCacheGenerator_m8828
};
CustomAttributesCache t1714__CustomAttributeCache_m8829 = {
1,
NULL,
&t1714_CustomAttributesCacheGenerator_m8829
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1714_0_0_0;
extern Il2CppType t1714_1_0_0;
struct t1714;
extern CustomAttributesCache t1714__CustomAttributeCache;
extern CustomAttributesCache t1714__CustomAttributeCache_m8824;
extern CustomAttributesCache t1714__CustomAttributeCache_m8827;
extern CustomAttributesCache t1714__CustomAttributeCache_m8828;
extern CustomAttributesCache t1714__CustomAttributeCache_m8829;
const Il2CppTypeDefinitionMetadata t1714_DM = 
{
	NULL, NULL, t1714_ITIs, t1714_IOs, &t9_0_0_0, t1714_VT, t1714_VTIGM, NULL};
TypeInfo t1714_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryWriter", "System.IO", t1714_MIs, NULL, t1714_FIs, NULL, &t1714_TI, NULL, &t1714__CustomAttributeCache, &t1714_0_0_0, &t1714_1_0_0, &t1714_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1714), sizeof (t1714), 0, -1, sizeof(t1714_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 25, 0, 7, 0, 0, 24, 1, 1};
#include "t1538.h"
// Metadata Definition System.IO.Directory
extern TypeInfo t1538_TI;
#include "t1538MD.h"
extern Il2CppType t2_0_0_0;
static ParameterInfo t1538_m6949_ParameterInfos[] = 
{
	{"path", 0, 134221016, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1537_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6949_MI = 
{
	"CreateDirectory", (methodPointerType)&m6949, &t1538_TI, &t1537_0_0_0, RuntimeInvoker_t9_t9, t1538_m6949_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2576, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1538_m8831_ParameterInfos[] = 
{
	{"path", 0, 134221017, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1537_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8831_MI = 
{
	"CreateDirectoriesInternal", (methodPointerType)&m8831, &t1538_TI, &t1537_0_0_0, RuntimeInvoker_t9_t9, t1538_m8831_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2577, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1538_m6948_ParameterInfos[] = 
{
	{"path", 0, 134221018, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6948_MI = 
{
	"Exists", (methodPointerType)&m6948, &t1538_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1538_m6948_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2578, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8832_MI = 
{
	"GetCurrentDirectory", (methodPointerType)&m8832, &t1538_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 2579, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1538_m6950_ParameterInfos[] = 
{
	{"path", 0, 134221019, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"searchPattern", 1, 134221020, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6950_MI = 
{
	"GetFiles", (methodPointerType)&m6950, &t1538_TI, &t221_0_0_0, RuntimeInvoker_t9_t9_t9, t1538_m6950_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2580, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1715_0_0_0;
extern Il2CppType t1715_0_0_0;
extern Il2CppType t1715_0_0_0;
static ParameterInfo t1538_m8833_ParameterInfos[] = 
{
	{"path", 0, 134221021, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"searchPattern", 1, 134221022, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mask", 2, 134221023, &EmptyCustomAttributesCache, &t1715_0_0_0},
	{"attrs", 3, 134221024, &EmptyCustomAttributesCache, &t1715_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8833_MI = 
{
	"GetFileSystemEntries", (methodPointerType)&m8833, &t1538_TI, &t221_0_0_0, RuntimeInvoker_t9_t9_t9_t125_t125, t1538_m8833_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 4, false, false, 2581, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1538_MIs[] =
{
	&m6949_MI,
	&m8831_MI,
	&m6948_MI,
	&m8832_MI,
	&m6950_MI,
	&m8833_MI,
	NULL
};
static Il2CppMethodReference t1538_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1538_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1538_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1538__CustomAttributeCache = {
1,
NULL,
&t1538_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1538_0_0_0;
extern Il2CppType t1538_1_0_0;
struct t1538;
extern CustomAttributesCache t1538__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1538_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1538_VT, t1538_VTIGM, NULL};
TypeInfo t1538_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Directory", "System.IO", t1538_MIs, NULL, NULL, NULL, &t1538_TI, NULL, &t1538__CustomAttributeCache, &t1538_0_0_0, &t1538_1_0_0, &t1538_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1538), sizeof (t1538), 0, -1, 0, 0, -1, 1048961, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 0, 0, 0, 0, 4, 0, 0};
#include "t1537.h"
// Metadata Definition System.IO.DirectoryInfo
extern TypeInfo t1537_TI;
#include "t1537MD.h"
extern Il2CppType t2_0_0_0;
static ParameterInfo t1537_m8834_ParameterInfos[] = 
{
	{"path", 0, 134221025, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8834_MI = 
{
	".ctor", (methodPointerType)&m8834, &t1537_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1537_m8834_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2582, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1537_m8835_ParameterInfos[] = 
{
	{"path", 0, 134221026, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"simpleOriginalPath", 1, 134221027, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8835_MI = 
{
	".ctor", (methodPointerType)&m8835, &t1537_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1537_m8835_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 2583, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1537_m8836_ParameterInfos[] = 
{
	{"info", 0, 134221028, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134221029, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m8836_MI = 
{
	".ctor", (methodPointerType)&m8836, &t1537_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1537_m8836_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 2, false, false, 2584, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8837_MI = 
{
	"Initialize", (methodPointerType)&m8837, &t1537_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2585, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8838_MI = 
{
	"get_Exists", (methodPointerType)&m8838, &t1537_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2586, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1537_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8839_MI = 
{
	"get_Parent", (methodPointerType)&m8839, &t1537_TI, &t1537_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2587, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8840_MI = 
{
	"Create", (methodPointerType)&m8840, &t1537_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 2588, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8841_MI = 
{
	"ToString", (methodPointerType)&m8841, &t1537_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2589, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1537_MIs[] =
{
	&m8834_MI,
	&m8835_MI,
	&m8836_MI,
	&m8837_MI,
	&m8838_MI,
	&m8839_MI,
	&m8840_MI,
	&m8841_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1537_f5_FieldInfo = 
{
	"current", &t2_0_0_1, &t1537_TI, offsetof(t1537, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1537_f6_FieldInfo = 
{
	"parent", &t2_0_0_1, &t1537_TI, offsetof(t1537, f6), &EmptyCustomAttributesCache};
static FieldInfo* t1537_FIs[] =
{
	&t1537_f5_FieldInfo,
	&t1537_f6_FieldInfo,
	NULL
};
extern MethodInfo m8838_MI;
static PropertyInfo t1537____Exists_PropertyInfo = 
{
	&t1537_TI, "Exists", &m8838_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8839_MI;
static PropertyInfo t1537____Parent_PropertyInfo = 
{
	&t1537_TI, "Parent", &m8839_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1537_PIs[] =
{
	&t1537____Exists_PropertyInfo,
	&t1537____Parent_PropertyInfo,
	NULL
};
extern MethodInfo m8841_MI;
extern MethodInfo m6036_MI;
extern MethodInfo m6037_MI;
extern MethodInfo m8904_MI;
extern MethodInfo m8905_MI;
extern MethodInfo m8907_MI;
static Il2CppMethodReference t1537_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m8841_MI,
	&m6036_MI,
	&m6037_MI,
	&m8904_MI,
	&m8904_MI,
	&m8838_MI,
	&m8905_MI,
	&m8907_MI,
};
static bool t1537_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1537_IOs[] = 
{
	{ &t623_0_0_0, 6},
};
void t1537_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1537__CustomAttributeCache = {
1,
NULL,
&t1537_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1537_0_0_0;
extern Il2CppType t1537_1_0_0;
extern Il2CppType t1716_0_0_0;
struct t1537;
extern CustomAttributesCache t1537__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1537_DM = 
{
	NULL, NULL, NULL, t1537_IOs, &t1716_0_0_0, t1537_VT, t1537_VTIGM, NULL};
TypeInfo t1537_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DirectoryInfo", "System.IO", t1537_MIs, t1537_PIs, t1537_FIs, NULL, &t1537_TI, NULL, &t1537__CustomAttributeCache, &t1537_0_0_0, &t1537_1_0_0, &t1537_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1537), sizeof (t1537), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 2, 2, 0, 0, 11, 0, 1};
#include "t1717.h"
// Metadata Definition System.IO.DirectoryNotFoundException
extern TypeInfo t1717_TI;
#include "t1717MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8842_MI = 
{
	".ctor", (methodPointerType)&m8842, &t1717_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2590, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1717_m8843_ParameterInfos[] = 
{
	{"message", 0, 134221030, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8843_MI = 
{
	".ctor", (methodPointerType)&m8843, &t1717_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1717_m8843_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2591, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1717_m8844_ParameterInfos[] = 
{
	{"info", 0, 134221031, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134221032, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m8844_MI = 
{
	".ctor", (methodPointerType)&m8844, &t1717_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1717_m8844_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2592, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1717_MIs[] =
{
	&m8842_MI,
	&m8843_MI,
	&m8844_MI,
	NULL
};
static Il2CppMethodReference t1717_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4496_MI,
	&m4497_MI,
	&m4243_MI,
	&m1098_MI,
	&m4498_MI,
	&m4441_MI,
	&m4497_MI,
	&m4442_MI,
};
static bool t1717_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1717_IOs[] = 
{
	{ &t623_0_0_0, 4},
	{ &t948_0_0_0, 5},
};
void t1717_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1717__CustomAttributeCache = {
1,
NULL,
&t1717_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1717_0_0_0;
extern Il2CppType t1717_1_0_0;
extern Il2CppType t1549_0_0_0;
struct t1717;
extern CustomAttributesCache t1717__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1717_DM = 
{
	NULL, NULL, NULL, t1717_IOs, &t1549_0_0_0, t1717_VT, t1717_VTIGM, NULL};
TypeInfo t1717_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DirectoryNotFoundException", "System.IO", t1717_MIs, NULL, NULL, NULL, &t1717_TI, NULL, &t1717__CustomAttributeCache, &t1717_0_0_0, &t1717_1_0_0, &t1717_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1717), sizeof (t1717), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1718.h"
// Metadata Definition System.IO.EndOfStreamException
extern TypeInfo t1718_TI;
#include "t1718MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8845_MI = 
{
	".ctor", (methodPointerType)&m8845, &t1718_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2593, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1718_m8846_ParameterInfos[] = 
{
	{"info", 0, 134221033, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134221034, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m8846_MI = 
{
	".ctor", (methodPointerType)&m8846, &t1718_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1718_m8846_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2594, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1718_MIs[] =
{
	&m8845_MI,
	&m8846_MI,
	NULL
};
static Il2CppMethodReference t1718_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4496_MI,
	&m4497_MI,
	&m4243_MI,
	&m1098_MI,
	&m4498_MI,
	&m4441_MI,
	&m4497_MI,
	&m4442_MI,
};
static bool t1718_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1718_IOs[] = 
{
	{ &t623_0_0_0, 4},
	{ &t948_0_0_0, 5},
};
void t1718_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1718__CustomAttributeCache = {
1,
NULL,
&t1718_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1718_0_0_0;
extern Il2CppType t1718_1_0_0;
struct t1718;
extern CustomAttributesCache t1718__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1718_DM = 
{
	NULL, NULL, NULL, t1718_IOs, &t1549_0_0_0, t1718_VT, t1718_VTIGM, NULL};
TypeInfo t1718_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EndOfStreamException", "System.IO", t1718_MIs, NULL, NULL, NULL, &t1718_TI, NULL, &t1718__CustomAttributeCache, &t1718_0_0_0, &t1718_1_0_0, &t1718_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1718), sizeof (t1718), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 11, 0, 2};
#include "t302.h"
// Metadata Definition System.IO.File
extern TypeInfo t302_TI;
#include "t302MD.h"
extern Il2CppType t2_0_0_0;
static ParameterInfo t302_m8847_ParameterInfos[] = 
{
	{"path", 0, 134221035, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8847_MI = 
{
	"Delete", (methodPointerType)&m8847, &t302_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t302_m8847_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2595, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t302_m1092_ParameterInfos[] = 
{
	{"path", 0, 134221036, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1092_MI = 
{
	"Exists", (methodPointerType)&m1092, &t302_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t302_m1092_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2596, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t297_0_0_0;
extern Il2CppType t297_0_0_0;
static ParameterInfo t302_m1094_ParameterInfos[] = 
{
	{"path", 0, 134221037, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221038, &EmptyCustomAttributesCache, &t297_0_0_0},
};
extern Il2CppType t296_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m1094_MI = 
{
	"Open", (methodPointerType)&m1094, &t302_TI, &t296_0_0_0, RuntimeInvoker_t9_t9_t125, t302_m1094_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2597, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t302_m6945_ParameterInfos[] = 
{
	{"path", 0, 134221039, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t296_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6945_MI = 
{
	"OpenRead", (methodPointerType)&m6945, &t302_TI, &t296_0_0_0, RuntimeInvoker_t9_t9, t302_m6945_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2598, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t302_m8848_ParameterInfos[] = 
{
	{"path", 0, 134221040, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1719_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8848_MI = 
{
	"OpenText", (methodPointerType)&m8848, &t302_TI, &t1719_0_0_0, RuntimeInvoker_t9_t9, t302_m8848_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2599, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t302_MIs[] =
{
	&m8847_MI,
	&m1092_MI,
	&m1094_MI,
	&m6945_MI,
	&m8848_MI,
	NULL
};
static Il2CppMethodReference t302_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t302_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t302_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t302__CustomAttributeCache = {
1,
NULL,
&t302_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t302_0_0_0;
extern Il2CppType t302_1_0_0;
struct t302;
extern CustomAttributesCache t302__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t302_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t302_VT, t302_VTIGM, NULL};
TypeInfo t302_TI = 
{
	&g_mscorlib_dll_Image, NULL, "File", "System.IO", t302_MIs, NULL, NULL, NULL, &t302_TI, NULL, &t302__CustomAttributeCache, &t302_0_0_0, &t302_1_0_0, &t302_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t302), sizeof (t302), 0, -1, 0, 0, -1, 1048961, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 4, 0, 0};
#include "t1187.h"
// Metadata Definition System.IO.FileAccess
extern TypeInfo t1187_TI;
#include "t1187MD.h"
static MethodInfo* t1187_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1187_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1187_TI, offsetof(t1187, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1187_0_0_32854;
FieldInfo t1187_f2_FieldInfo = 
{
	"Read", &t1187_0_0_32854, &t1187_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1187_0_0_32854;
FieldInfo t1187_f3_FieldInfo = 
{
	"Write", &t1187_0_0_32854, &t1187_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1187_0_0_32854;
FieldInfo t1187_f4_FieldInfo = 
{
	"ReadWrite", &t1187_0_0_32854, &t1187_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1187_FIs[] =
{
	&t1187_f1_FieldInfo,
	&t1187_f2_FieldInfo,
	&t1187_f3_FieldInfo,
	&t1187_f4_FieldInfo,
	NULL
};
static const int32_t t1187_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1187_f2_DefaultValue = 
{
	&t1187_f2_FieldInfo, { (char*)&t1187_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1187_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1187_f3_DefaultValue = 
{
	&t1187_f3_FieldInfo, { (char*)&t1187_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1187_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1187_f4_DefaultValue = 
{
	&t1187_f4_FieldInfo, { (char*)&t1187_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1187_FDVs[] = 
{
	&t1187_f2_DefaultValue,
	&t1187_f3_DefaultValue,
	&t1187_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t1187_VT[] =
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
static bool t1187_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1187_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1187_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
}
CustomAttributesCache t1187__CustomAttributeCache = {
2,
NULL,
&t1187_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1187_0_0_0;
extern Il2CppType t1187_1_0_0;
extern CustomAttributesCache t1187__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1187_DM = 
{
	NULL, NULL, NULL, t1187_IOs, &t8_0_0_0, t1187_VT, t1187_VTIGM, NULL};
TypeInfo t1187_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileAccess", "System.IO", t1187_MIs, NULL, t1187_FIs, NULL, &t125_TI, NULL, &t1187__CustomAttributeCache, &t1187_0_0_0, &t1187_1_0_0, &t1187_DM, NULL, NULL, NULL, t1187_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1187)+ sizeof (Il2CppObject), sizeof (t1187)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1715.h"
// Metadata Definition System.IO.FileAttributes
extern TypeInfo t1715_TI;
#include "t1715MD.h"
static MethodInfo* t1715_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1715_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1715_TI, offsetof(t1715, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f2_FieldInfo = 
{
	"Archive", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f3_FieldInfo = 
{
	"Compressed", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f4_FieldInfo = 
{
	"Device", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f5_FieldInfo = 
{
	"Directory", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f6_FieldInfo = 
{
	"Encrypted", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f7_FieldInfo = 
{
	"Hidden", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f8_FieldInfo = 
{
	"Normal", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f9_FieldInfo = 
{
	"NotContentIndexed", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f10_FieldInfo = 
{
	"Offline", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f11_FieldInfo = 
{
	"ReadOnly", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f12_FieldInfo = 
{
	"ReparsePoint", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f13_FieldInfo = 
{
	"SparseFile", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f14_FieldInfo = 
{
	"System", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f15_FieldInfo = 
{
	"Temporary", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1715_FIs[] =
{
	&t1715_f1_FieldInfo,
	&t1715_f2_FieldInfo,
	&t1715_f3_FieldInfo,
	&t1715_f4_FieldInfo,
	&t1715_f5_FieldInfo,
	&t1715_f6_FieldInfo,
	&t1715_f7_FieldInfo,
	&t1715_f8_FieldInfo,
	&t1715_f9_FieldInfo,
	&t1715_f10_FieldInfo,
	&t1715_f11_FieldInfo,
	&t1715_f12_FieldInfo,
	&t1715_f13_FieldInfo,
	&t1715_f14_FieldInfo,
	&t1715_f15_FieldInfo,
	NULL
};
static const int32_t t1715_f2_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1715_f2_DefaultValue = 
{
	&t1715_f2_FieldInfo, { (char*)&t1715_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f3_DefaultValueData = 2048;
static Il2CppFieldDefaultValueEntry t1715_f3_DefaultValue = 
{
	&t1715_f3_FieldInfo, { (char*)&t1715_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f4_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1715_f4_DefaultValue = 
{
	&t1715_f4_FieldInfo, { (char*)&t1715_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f5_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1715_f5_DefaultValue = 
{
	&t1715_f5_FieldInfo, { (char*)&t1715_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f6_DefaultValueData = 16384;
static Il2CppFieldDefaultValueEntry t1715_f6_DefaultValue = 
{
	&t1715_f6_FieldInfo, { (char*)&t1715_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f7_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1715_f7_DefaultValue = 
{
	&t1715_f7_FieldInfo, { (char*)&t1715_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f8_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1715_f8_DefaultValue = 
{
	&t1715_f8_FieldInfo, { (char*)&t1715_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f9_DefaultValueData = 8192;
static Il2CppFieldDefaultValueEntry t1715_f9_DefaultValue = 
{
	&t1715_f9_FieldInfo, { (char*)&t1715_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f10_DefaultValueData = 4096;
static Il2CppFieldDefaultValueEntry t1715_f10_DefaultValue = 
{
	&t1715_f10_FieldInfo, { (char*)&t1715_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f11_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1715_f11_DefaultValue = 
{
	&t1715_f11_FieldInfo, { (char*)&t1715_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f12_DefaultValueData = 1024;
static Il2CppFieldDefaultValueEntry t1715_f12_DefaultValue = 
{
	&t1715_f12_FieldInfo, { (char*)&t1715_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f13_DefaultValueData = 512;
static Il2CppFieldDefaultValueEntry t1715_f13_DefaultValue = 
{
	&t1715_f13_FieldInfo, { (char*)&t1715_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f14_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1715_f14_DefaultValue = 
{
	&t1715_f14_FieldInfo, { (char*)&t1715_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f15_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t1715_f15_DefaultValue = 
{
	&t1715_f15_FieldInfo, { (char*)&t1715_f15_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1715_FDVs[] = 
{
	&t1715_f2_DefaultValue,
	&t1715_f3_DefaultValue,
	&t1715_f4_DefaultValue,
	&t1715_f5_DefaultValue,
	&t1715_f6_DefaultValue,
	&t1715_f7_DefaultValue,
	&t1715_f8_DefaultValue,
	&t1715_f9_DefaultValue,
	&t1715_f10_DefaultValue,
	&t1715_f11_DefaultValue,
	&t1715_f12_DefaultValue,
	&t1715_f13_DefaultValue,
	&t1715_f14_DefaultValue,
	&t1715_f15_DefaultValue,
	NULL
};
static Il2CppMethodReference t1715_VT[] =
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
static bool t1715_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1715_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1715_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t615 * tmp;
		tmp = (t615 *)il2cpp_codegen_object_new (&t615_TI);
		m2991(tmp, &m2991_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1715__CustomAttributeCache = {
2,
NULL,
&t1715_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1715_1_0_0;
extern CustomAttributesCache t1715__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1715_DM = 
{
	NULL, NULL, NULL, t1715_IOs, &t8_0_0_0, t1715_VT, t1715_VTIGM, NULL};
TypeInfo t1715_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileAttributes", "System.IO", t1715_MIs, NULL, t1715_FIs, NULL, &t125_TI, NULL, &t1715__CustomAttributeCache, &t1715_0_0_0, &t1715_1_0_0, &t1715_DM, NULL, NULL, NULL, t1715_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1715)+ sizeof (Il2CppObject), sizeof (t1715)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 15, 0, 0, 23, 0, 3};
#include "t297.h"
// Metadata Definition System.IO.FileMode
extern TypeInfo t297_TI;
#include "t297MD.h"
static MethodInfo* t297_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t297_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t297_TI, offsetof(t297, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t297_0_0_32854;
FieldInfo t297_f2_FieldInfo = 
{
	"CreateNew", &t297_0_0_32854, &t297_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t297_0_0_32854;
FieldInfo t297_f3_FieldInfo = 
{
	"Create", &t297_0_0_32854, &t297_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t297_0_0_32854;
FieldInfo t297_f4_FieldInfo = 
{
	"Open", &t297_0_0_32854, &t297_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t297_0_0_32854;
FieldInfo t297_f5_FieldInfo = 
{
	"OpenOrCreate", &t297_0_0_32854, &t297_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t297_0_0_32854;
FieldInfo t297_f6_FieldInfo = 
{
	"Truncate", &t297_0_0_32854, &t297_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t297_0_0_32854;
FieldInfo t297_f7_FieldInfo = 
{
	"Append", &t297_0_0_32854, &t297_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t297_FIs[] =
{
	&t297_f1_FieldInfo,
	&t297_f2_FieldInfo,
	&t297_f3_FieldInfo,
	&t297_f4_FieldInfo,
	&t297_f5_FieldInfo,
	&t297_f6_FieldInfo,
	&t297_f7_FieldInfo,
	NULL
};
static const int32_t t297_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t297_f2_DefaultValue = 
{
	&t297_f2_FieldInfo, { (char*)&t297_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t297_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t297_f3_DefaultValue = 
{
	&t297_f3_FieldInfo, { (char*)&t297_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t297_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t297_f4_DefaultValue = 
{
	&t297_f4_FieldInfo, { (char*)&t297_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t297_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t297_f5_DefaultValue = 
{
	&t297_f5_FieldInfo, { (char*)&t297_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t297_f6_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t297_f6_DefaultValue = 
{
	&t297_f6_FieldInfo, { (char*)&t297_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t297_f7_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t297_f7_DefaultValue = 
{
	&t297_f7_FieldInfo, { (char*)&t297_f7_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t297_FDVs[] = 
{
	&t297_f2_DefaultValue,
	&t297_f3_DefaultValue,
	&t297_f4_DefaultValue,
	&t297_f5_DefaultValue,
	&t297_f6_DefaultValue,
	&t297_f7_DefaultValue,
	NULL
};
static Il2CppMethodReference t297_VT[] =
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
static bool t297_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t297_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t297_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t297__CustomAttributeCache = {
1,
NULL,
&t297_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t297_1_0_0;
extern CustomAttributesCache t297__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t297_DM = 
{
	NULL, NULL, NULL, t297_IOs, &t8_0_0_0, t297_VT, t297_VTIGM, NULL};
TypeInfo t297_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileMode", "System.IO", t297_MIs, NULL, t297_FIs, NULL, &t125_TI, NULL, &t297__CustomAttributeCache, &t297_0_0_0, &t297_1_0_0, &t297_DM, NULL, NULL, NULL, t297_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t297)+ sizeof (Il2CppObject), sizeof (t297)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 7, 0, 0, 23, 0, 3};
#include "t1720.h"
// Metadata Definition System.IO.FileNotFoundException
extern TypeInfo t1720_TI;
#include "t1720MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8849_MI = 
{
	".ctor", (methodPointerType)&m8849, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2600, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1720_m8850_ParameterInfos[] = 
{
	{"message", 0, 134221041, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8850_MI = 
{
	".ctor", (methodPointerType)&m8850, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1720_m8850_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2601, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1720_m8851_ParameterInfos[] = 
{
	{"message", 0, 134221042, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"fileName", 1, 134221043, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8851_MI = 
{
	".ctor", (methodPointerType)&m8851, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1720_m8851_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2602, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1720_m8852_ParameterInfos[] = 
{
	{"info", 0, 134221044, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134221045, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m8852_MI = 
{
	".ctor", (methodPointerType)&m8852, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1720_m8852_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2603, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8853_MI = 
{
	"get_Message", (methodPointerType)&m8853, &t1720_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2604, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1720_m8854_ParameterInfos[] = 
{
	{"info", 0, 134221046, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134221047, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m8854_MI = 
{
	"GetObjectData", (methodPointerType)&m8854, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1720_m8854_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, false, 2605, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8855_MI = 
{
	"ToString", (methodPointerType)&m8855, &t1720_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2606, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1720_MIs[] =
{
	&m8849_MI,
	&m8850_MI,
	&m8851_MI,
	&m8852_MI,
	&m8853_MI,
	&m8854_MI,
	&m8855_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1720_f11_FieldInfo = 
{
	"fileName", &t2_0_0_1, &t1720_TI, offsetof(t1720, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1720_f12_FieldInfo = 
{
	"fusionLog", &t2_0_0_1, &t1720_TI, offsetof(t1720, f12), &EmptyCustomAttributesCache};
static FieldInfo* t1720_FIs[] =
{
	&t1720_f11_FieldInfo,
	&t1720_f12_FieldInfo,
	NULL
};
extern MethodInfo m8853_MI;
static PropertyInfo t1720____Message_PropertyInfo = 
{
	&t1720_TI, "Message", &m8853_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1720_PIs[] =
{
	&t1720____Message_PropertyInfo,
	NULL
};
extern MethodInfo m8855_MI;
extern MethodInfo m8854_MI;
static Il2CppMethodReference t1720_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m8855_MI,
	&m8854_MI,
	&m4243_MI,
	&m8853_MI,
	&m4498_MI,
	&m4441_MI,
	&m8854_MI,
	&m4442_MI,
};
static bool t1720_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1720_IOs[] = 
{
	{ &t623_0_0_0, 4},
	{ &t948_0_0_0, 5},
};
void t1720_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1720__CustomAttributeCache = {
1,
NULL,
&t1720_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1720_0_0_0;
extern Il2CppType t1720_1_0_0;
struct t1720;
extern CustomAttributesCache t1720__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1720_DM = 
{
	NULL, NULL, NULL, t1720_IOs, &t1549_0_0_0, t1720_VT, t1720_VTIGM, NULL};
TypeInfo t1720_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileNotFoundException", "System.IO", t1720_MIs, t1720_PIs, t1720_FIs, NULL, &t1720_TI, NULL, &t1720__CustomAttributeCache, &t1720_0_0_0, &t1720_1_0_0, &t1720_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1720), sizeof (t1720), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 7, 1, 2, 0, 0, 11, 0, 2};
#include "t1721.h"
// Metadata Definition System.IO.FileOptions
extern TypeInfo t1721_TI;
#include "t1721MD.h"
static MethodInfo* t1721_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1721_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1721_TI, offsetof(t1721, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f2_FieldInfo = 
{
	"None", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f3_FieldInfo = 
{
	"Encrypted", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f4_FieldInfo = 
{
	"DeleteOnClose", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f5_FieldInfo = 
{
	"SequentialScan", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f6_FieldInfo = 
{
	"RandomAccess", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f7_FieldInfo = 
{
	"Asynchronous", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f8_FieldInfo = 
{
	"WriteThrough", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1721_FIs[] =
{
	&t1721_f1_FieldInfo,
	&t1721_f2_FieldInfo,
	&t1721_f3_FieldInfo,
	&t1721_f4_FieldInfo,
	&t1721_f5_FieldInfo,
	&t1721_f6_FieldInfo,
	&t1721_f7_FieldInfo,
	&t1721_f8_FieldInfo,
	NULL
};
static const int32_t t1721_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1721_f2_DefaultValue = 
{
	&t1721_f2_FieldInfo, { (char*)&t1721_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f3_DefaultValueData = 16384;
static Il2CppFieldDefaultValueEntry t1721_f3_DefaultValue = 
{
	&t1721_f3_FieldInfo, { (char*)&t1721_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f4_DefaultValueData = 67108864;
static Il2CppFieldDefaultValueEntry t1721_f4_DefaultValue = 
{
	&t1721_f4_FieldInfo, { (char*)&t1721_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f5_DefaultValueData = 134217728;
static Il2CppFieldDefaultValueEntry t1721_f5_DefaultValue = 
{
	&t1721_f5_FieldInfo, { (char*)&t1721_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f6_DefaultValueData = 268435456;
static Il2CppFieldDefaultValueEntry t1721_f6_DefaultValue = 
{
	&t1721_f6_FieldInfo, { (char*)&t1721_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f7_DefaultValueData = 1073741824;
static Il2CppFieldDefaultValueEntry t1721_f7_DefaultValue = 
{
	&t1721_f7_FieldInfo, { (char*)&t1721_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f8_DefaultValueData = -2147483648;
static Il2CppFieldDefaultValueEntry t1721_f8_DefaultValue = 
{
	&t1721_f8_FieldInfo, { (char*)&t1721_f8_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1721_FDVs[] = 
{
	&t1721_f2_DefaultValue,
	&t1721_f3_DefaultValue,
	&t1721_f4_DefaultValue,
	&t1721_f5_DefaultValue,
	&t1721_f6_DefaultValue,
	&t1721_f7_DefaultValue,
	&t1721_f8_DefaultValue,
	NULL
};
static Il2CppMethodReference t1721_VT[] =
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
static bool t1721_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1721_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1721_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
}
CustomAttributesCache t1721__CustomAttributeCache = {
2,
NULL,
&t1721_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1721_0_0_0;
extern Il2CppType t1721_1_0_0;
extern CustomAttributesCache t1721__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1721_DM = 
{
	NULL, NULL, NULL, t1721_IOs, &t8_0_0_0, t1721_VT, t1721_VTIGM, NULL};
TypeInfo t1721_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileOptions", "System.IO", t1721_MIs, NULL, t1721_FIs, NULL, &t125_TI, NULL, &t1721__CustomAttributeCache, &t1721_0_0_0, &t1721_1_0_0, &t1721_DM, NULL, NULL, NULL, t1721_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1721)+ sizeof (Il2CppObject), sizeof (t1721)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 8, 0, 0, 23, 0, 3};
#include "t1722.h"
// Metadata Definition System.IO.FileShare
extern TypeInfo t1722_TI;
#include "t1722MD.h"
static MethodInfo* t1722_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1722_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1722_TI, offsetof(t1722, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1722_0_0_32854;
FieldInfo t1722_f2_FieldInfo = 
{
	"None", &t1722_0_0_32854, &t1722_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1722_0_0_32854;
FieldInfo t1722_f3_FieldInfo = 
{
	"Read", &t1722_0_0_32854, &t1722_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1722_0_0_32854;
FieldInfo t1722_f4_FieldInfo = 
{
	"Write", &t1722_0_0_32854, &t1722_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1722_0_0_32854;
FieldInfo t1722_f5_FieldInfo = 
{
	"ReadWrite", &t1722_0_0_32854, &t1722_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1722_0_0_32854;
FieldInfo t1722_f6_FieldInfo = 
{
	"Delete", &t1722_0_0_32854, &t1722_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1722_0_0_32854;
FieldInfo t1722_f7_FieldInfo = 
{
	"Inheritable", &t1722_0_0_32854, &t1722_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1722_FIs[] =
{
	&t1722_f1_FieldInfo,
	&t1722_f2_FieldInfo,
	&t1722_f3_FieldInfo,
	&t1722_f4_FieldInfo,
	&t1722_f5_FieldInfo,
	&t1722_f6_FieldInfo,
	&t1722_f7_FieldInfo,
	NULL
};
static const int32_t t1722_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1722_f2_DefaultValue = 
{
	&t1722_f2_FieldInfo, { (char*)&t1722_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1722_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1722_f3_DefaultValue = 
{
	&t1722_f3_FieldInfo, { (char*)&t1722_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1722_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1722_f4_DefaultValue = 
{
	&t1722_f4_FieldInfo, { (char*)&t1722_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1722_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1722_f5_DefaultValue = 
{
	&t1722_f5_FieldInfo, { (char*)&t1722_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1722_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1722_f6_DefaultValue = 
{
	&t1722_f6_FieldInfo, { (char*)&t1722_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1722_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1722_f7_DefaultValue = 
{
	&t1722_f7_FieldInfo, { (char*)&t1722_f7_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1722_FDVs[] = 
{
	&t1722_f2_DefaultValue,
	&t1722_f3_DefaultValue,
	&t1722_f4_DefaultValue,
	&t1722_f5_DefaultValue,
	&t1722_f6_DefaultValue,
	&t1722_f7_DefaultValue,
	NULL
};
static Il2CppMethodReference t1722_VT[] =
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
static bool t1722_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1722_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1722_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t615 * tmp;
		tmp = (t615 *)il2cpp_codegen_object_new (&t615_TI);
		m2991(tmp, &m2991_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1722__CustomAttributeCache = {
2,
NULL,
&t1722_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1722_0_0_0;
extern Il2CppType t1722_1_0_0;
extern CustomAttributesCache t1722__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1722_DM = 
{
	NULL, NULL, NULL, t1722_IOs, &t8_0_0_0, t1722_VT, t1722_VTIGM, NULL};
TypeInfo t1722_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileShare", "System.IO", t1722_MIs, NULL, t1722_FIs, NULL, &t125_TI, NULL, &t1722__CustomAttributeCache, &t1722_0_0_0, &t1722_1_0_0, &t1722_DM, NULL, NULL, NULL, t1722_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1722)+ sizeof (Il2CppObject), sizeof (t1722)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 7, 0, 0, 23, 0, 3};
#include "t1723.h"
// Metadata Definition System.IO.FileStream/ReadDelegate
extern TypeInfo t1723_TI;
#include "t1723MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t58_0_0_0;
static ParameterInfo t1723_m8856_ParameterInfos[] = 
{
	{"object", 0, 134221121, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"method", 1, 134221122, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m8856_MI = 
{
	".ctor", (methodPointerType)&m8856, &t1723_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t58, t1723_m8856_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 2643, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1723_m8857_ParameterInfos[] = 
{
	{"buffer", 0, 134221123, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134221124, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221125, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8857_MI = 
{
	"Invoke", (methodPointerType)&m8857, &t1723_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1723_m8857_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 3, false, false, 2644, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t470_0_0_0;
extern Il2CppType t470_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1723_m8858_ParameterInfos[] = 
{
	{"buffer", 0, 134221126, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134221127, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221128, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"callback", 3, 134221129, &EmptyCustomAttributesCache, &t470_0_0_0},
	{"object", 4, 134221130, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t469_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8858_MI = 
{
	"BeginInvoke", (methodPointerType)&m8858, &t1723_TI, &t469_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t1723_m8858_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 5, false, false, 2645, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t469_0_0_0;
extern Il2CppType t469_0_0_0;
static ParameterInfo t1723_m8859_ParameterInfos[] = 
{
	{"result", 0, 134221131, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8859_MI = 
{
	"EndInvoke", (methodPointerType)&m8859, &t1723_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1723_m8859_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 2646, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1723_MIs[] =
{
	&m8856_MI,
	&m8857_MI,
	&m8858_MI,
	&m8859_MI,
	NULL
};
extern MethodInfo m3005_MI;
extern MethodInfo m3006_MI;
extern MethodInfo m3007_MI;
extern MethodInfo m3008_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m3010_MI;
extern MethodInfo m3011_MI;
extern MethodInfo m8857_MI;
extern MethodInfo m8858_MI;
extern MethodInfo m8859_MI;
static Il2CppMethodReference t1723_VT[] =
{
	&m3005_MI,
	&m646_MI,
	&m3006_MI,
	&m673_MI,
	&m3007_MI,
	&m3008_MI,
	&m3007_MI,
	&m3009_MI,
	&m3010_MI,
	&m3011_MI,
	&m8857_MI,
	&m8858_MI,
	&m8859_MI,
};
static bool t1723_VTIGM[] =
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
};
static Il2CppInterfaceOffsetPair t1723_IOs[] = 
{
	{ &t622_0_0_0, 4},
	{ &t623_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1723_0_0_0;
extern Il2CppType t1723_1_0_0;
extern Il2CppType t471_0_0_0;
extern TypeInfo t296_TI;
extern Il2CppType t296_0_0_0;
struct t1723;
const Il2CppTypeDefinitionMetadata t1723_DM = 
{
	&t296_0_0_0, NULL, NULL, t1723_IOs, &t471_0_0_0, t1723_VT, t1723_VTIGM, NULL};
TypeInfo t1723_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadDelegate", "", t1723_MIs, NULL, NULL, NULL, &t1723_TI, NULL, &EmptyCustomAttributesCache, &t1723_0_0_0, &t1723_1_0_0, &t1723_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t1723, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1723), sizeof (t1723), 0, sizeof(methodPointerType), 0, 0, -1, 259, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1724.h"
// Metadata Definition System.IO.FileStream/WriteDelegate
extern TypeInfo t1724_TI;
#include "t1724MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t58_0_0_0;
static ParameterInfo t1724_m8860_ParameterInfos[] = 
{
	{"object", 0, 134221132, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"method", 1, 134221133, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m8860_MI = 
{
	".ctor", (methodPointerType)&m8860, &t1724_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t58, t1724_m8860_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 2647, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1724_m8861_ParameterInfos[] = 
{
	{"buffer", 0, 134221134, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134221135, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221136, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8861_MI = 
{
	"Invoke", (methodPointerType)&m8861, &t1724_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1724_m8861_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 3, false, false, 2648, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t470_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1724_m8862_ParameterInfos[] = 
{
	{"buffer", 0, 134221137, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134221138, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221139, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"callback", 3, 134221140, &EmptyCustomAttributesCache, &t470_0_0_0},
	{"object", 4, 134221141, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t469_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8862_MI = 
{
	"BeginInvoke", (methodPointerType)&m8862, &t1724_TI, &t469_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t1724_m8862_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 5, false, false, 2649, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t469_0_0_0;
static ParameterInfo t1724_m8863_ParameterInfos[] = 
{
	{"result", 0, 134221142, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8863_MI = 
{
	"EndInvoke", (methodPointerType)&m8863, &t1724_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1724_m8863_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 2650, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1724_MIs[] =
{
	&m8860_MI,
	&m8861_MI,
	&m8862_MI,
	&m8863_MI,
	NULL
};
extern MethodInfo m8861_MI;
extern MethodInfo m8862_MI;
extern MethodInfo m8863_MI;
static Il2CppMethodReference t1724_VT[] =
{
	&m3005_MI,
	&m646_MI,
	&m3006_MI,
	&m673_MI,
	&m3007_MI,
	&m3008_MI,
	&m3007_MI,
	&m3009_MI,
	&m3010_MI,
	&m3011_MI,
	&m8861_MI,
	&m8862_MI,
	&m8863_MI,
};
static bool t1724_VTIGM[] =
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
};
static Il2CppInterfaceOffsetPair t1724_IOs[] = 
{
	{ &t622_0_0_0, 4},
	{ &t623_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1724_0_0_0;
extern Il2CppType t1724_1_0_0;
struct t1724;
const Il2CppTypeDefinitionMetadata t1724_DM = 
{
	&t296_0_0_0, NULL, NULL, t1724_IOs, &t471_0_0_0, t1724_VT, t1724_VTIGM, NULL};
TypeInfo t1724_TI = 
{
	&g_mscorlib_dll_Image, NULL, "WriteDelegate", "", t1724_MIs, NULL, NULL, NULL, &t1724_TI, NULL, &EmptyCustomAttributesCache, &t1724_0_0_0, &t1724_1_0_0, &t1724_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t1724, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1724), sizeof (t1724), 0, sizeof(methodPointerType), 0, 0, -1, 259, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t296.h"
// Metadata Definition System.IO.FileStream
#include "t296MD.h"
extern Il2CppType t58_0_0_0;
extern Il2CppType t1187_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t296_m8864_ParameterInfos[] = 
{
	{"handle", 0, 134221048, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"access", 1, 134221049, &EmptyCustomAttributesCache, &t1187_0_0_0},
	{"ownsHandle", 2, 134221050, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"bufferSize", 3, 134221051, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"isAsync", 4, 134221052, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"noBuffering", 5, 134221053, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t58_t125_t186_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8864_MI = 
{
	".ctor", (methodPointerType)&m8864, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122_t58_t125_t186_t125_t186_t186, t296_m8864_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 6, false, false, 2607, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t297_0_0_0;
extern Il2CppType t1187_0_0_0;
static ParameterInfo t296_m8865_ParameterInfos[] = 
{
	{"path", 0, 134221054, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221055, &EmptyCustomAttributesCache, &t297_0_0_0},
	{"access", 2, 134221056, &EmptyCustomAttributesCache, &t1187_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8865_MI = 
{
	".ctor", (methodPointerType)&m8865, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t296_m8865_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 2608, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t297_0_0_0;
extern Il2CppType t1187_0_0_0;
extern Il2CppType t1722_0_0_0;
static ParameterInfo t296_m8866_ParameterInfos[] = 
{
	{"path", 0, 134221057, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221058, &EmptyCustomAttributesCache, &t297_0_0_0},
	{"access", 2, 134221059, &EmptyCustomAttributesCache, &t1187_0_0_0},
	{"share", 3, 134221060, &EmptyCustomAttributesCache, &t1722_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8866_MI = 
{
	".ctor", (methodPointerType)&m8866, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t125, t296_m8866_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 2609, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t297_0_0_0;
extern Il2CppType t1187_0_0_0;
extern Il2CppType t1722_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t296_m8867_ParameterInfos[] = 
{
	{"path", 0, 134221061, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221062, &EmptyCustomAttributesCache, &t297_0_0_0},
	{"access", 2, 134221063, &EmptyCustomAttributesCache, &t1187_0_0_0},
	{"share", 3, 134221064, &EmptyCustomAttributesCache, &t1722_0_0_0},
	{"bufferSize", 4, 134221065, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"isAsync", 5, 134221066, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"anonymous", 6, 134221067, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t125_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8867_MI = 
{
	".ctor", (methodPointerType)&m8867, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t125_t125_t186_t186, t296_m8867_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 7, false, false, 2610, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t297_0_0_0;
extern Il2CppType t1187_0_0_0;
extern Il2CppType t1722_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t1721_0_0_0;
static ParameterInfo t296_m8868_ParameterInfos[] = 
{
	{"path", 0, 134221068, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221069, &EmptyCustomAttributesCache, &t297_0_0_0},
	{"access", 2, 134221070, &EmptyCustomAttributesCache, &t1187_0_0_0},
	{"share", 3, 134221071, &EmptyCustomAttributesCache, &t1722_0_0_0},
	{"bufferSize", 4, 134221072, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"anonymous", 5, 134221073, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"options", 6, 134221074, &EmptyCustomAttributesCache, &t1721_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t125_t125_t186_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8868_MI = 
{
	".ctor", (methodPointerType)&m8868, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t125_t125_t186_t125, t296_m8868_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 7, false, false, 2611, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8869_MI = 
{
	"get_CanRead", (methodPointerType)&m8869, &t296_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 5, 0, false, false, 2612, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8870_MI = 
{
	"get_CanWrite", (methodPointerType)&m8870, &t296_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 2613, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8871_MI = 
{
	"get_CanSeek", (methodPointerType)&m8871, &t296_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2614, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m6946_MI = 
{
	"get_Length", (methodPointerType)&m6946, &t296_TI, &t299_0_0_0, RuntimeInvoker_t299, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2615, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m8872_MI = 
{
	"get_Position", (methodPointerType)&m8872, &t296_TI, &t299_0_0_0, RuntimeInvoker_t299, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2616, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t296_m8873_ParameterInfos[] = 
{
	{"value", 0, 134221075, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m8873_MI = 
{
	"set_Position", (methodPointerType)&m8873, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122_t299, t296_m8873_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 10, 1, false, false, 2617, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8874_MI = 
{
	"ReadByte", (methodPointerType)&m8874, &t296_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 15, 0, false, false, 2618, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t575_0_0_0;
static ParameterInfo t296_m8875_ParameterInfos[] = 
{
	{"value", 0, 134221076, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8875_MI = 
{
	"WriteByte", (methodPointerType)&m8875, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t296_m8875_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 19, 1, false, false, 2619, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t296_m6947_ParameterInfos[] = 
{
	{"array", 0, 134221077, &EmptyCustomAttributesCache, &t730_0_0_3},
	{"offset", 1, 134221078, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221079, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6947_MI = 
{
	"Read", (methodPointerType)&m6947, &t296_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t296_m6947_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 14, 3, false, false, 2620, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t296_m8876_ParameterInfos[] = 
{
	{"dest", 0, 134221080, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134221081, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221082, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8876_MI = 
{
	"ReadInternal", (methodPointerType)&m8876, &t296_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t296_m8876_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2621, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t470_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t296_m8877_ParameterInfos[] = 
{
	{"array", 0, 134221083, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134221084, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"numBytes", 2, 134221085, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"userCallback", 3, 134221086, &EmptyCustomAttributesCache, &t470_0_0_0},
	{"stateObject", 4, 134221087, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t469_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8877_MI = 
{
	"BeginRead", (methodPointerType)&m8877, &t296_TI, &t469_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t296_m8877_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 20, 5, false, false, 2622, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t469_0_0_0;
static ParameterInfo t296_m8878_ParameterInfos[] = 
{
	{"asyncResult", 0, 134221088, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8878_MI = 
{
	"EndRead", (methodPointerType)&m8878, &t296_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t296_m8878_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 22, 1, false, false, 2623, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t296_m8879_ParameterInfos[] = 
{
	{"array", 0, 134221089, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134221090, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221091, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8879_MI = 
{
	"Write", (methodPointerType)&m8879, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t296_m8879_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 18, 3, false, false, 2624, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t296_m8880_ParameterInfos[] = 
{
	{"src", 0, 134221092, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134221093, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221094, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8880_MI = 
{
	"WriteInternal", (methodPointerType)&m8880, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t296_m8880_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2625, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t470_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t296_m8881_ParameterInfos[] = 
{
	{"array", 0, 134221095, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134221096, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"numBytes", 2, 134221097, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"userCallback", 3, 134221098, &EmptyCustomAttributesCache, &t470_0_0_0},
	{"stateObject", 4, 134221099, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t469_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8881_MI = 
{
	"BeginWrite", (methodPointerType)&m8881, &t296_TI, &t469_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t296_m8881_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 21, 5, false, false, 2626, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t469_0_0_0;
static ParameterInfo t296_m8882_ParameterInfos[] = 
{
	{"asyncResult", 0, 134221100, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8882_MI = 
{
	"EndWrite", (methodPointerType)&m8882, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t296_m8882_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 1, false, false, 2627, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern Il2CppType t1499_0_0_0;
extern Il2CppType t1499_0_0_0;
static ParameterInfo t296_m8883_ParameterInfos[] = 
{
	{"offset", 0, 134221101, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"origin", 1, 134221102, &EmptyCustomAttributesCache, &t1499_0_0_0},
};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299_t299_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8883_MI = 
{
	"Seek", (methodPointerType)&m8883, &t296_TI, &t299_0_0_0, RuntimeInvoker_t299_t299_t125, t296_m8883_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 2, false, false, 2628, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t296_m1100_ParameterInfos[] = 
{
	{"value", 0, 134221103, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m1100_MI = 
{
	"SetLength", (methodPointerType)&m1100, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122_t299, t296_m1100_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 2629, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8884_MI = 
{
	"Flush", (methodPointerType)&m8884, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 2630, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8885_MI = 
{
	"Finalize", (methodPointerType)&m8885, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 2631, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t296_m8886_ParameterInfos[] = 
{
	{"disposing", 0, 134221104, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8886_MI = 
{
	"Dispose", (methodPointerType)&m8886, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t296_m8886_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 1, false, false, 2632, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t296_m8887_ParameterInfos[] = 
{
	{"dest", 0, 134221105, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"dest_offset", 1, 134221106, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221107, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8887_MI = 
{
	"ReadSegment", (methodPointerType)&m8887, &t296_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t296_m8887_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2633, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t296_m8888_ParameterInfos[] = 
{
	{"src", 0, 134221108, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"src_offset", 1, 134221109, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221110, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8888_MI = 
{
	"WriteSegment", (methodPointerType)&m8888, &t296_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t296_m8888_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2634, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t298_0_0_0;
static ParameterInfo t296_m8889_ParameterInfos[] = 
{
	{"st", 0, 134221111, &EmptyCustomAttributesCache, &t298_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8889_MI = 
{
	"FlushBuffer", (methodPointerType)&m8889, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t296_m8889_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2635, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8890_MI = 
{
	"FlushBuffer", (methodPointerType)&m8890, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2636, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8891_MI = 
{
	"FlushBufferIfDirty", (methodPointerType)&m8891, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2637, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8892_MI = 
{
	"RefillBuffer", (methodPointerType)&m8892, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2638, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t296_m8893_ParameterInfos[] = 
{
	{"handle", 0, 134221112, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"buf", 1, 134221113, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 2, 134221114, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134221115, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t58_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8893_MI = 
{
	"ReadData", (methodPointerType)&m8893, &t296_TI, &t125_0_0_0, RuntimeInvoker_t125_t58_t9_t125_t125, t296_m8893_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 2639, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t296_m8894_ParameterInfos[] = 
{
	{"size", 0, 134221116, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"noBuffering", 1, 134221117, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8894_MI = 
{
	"InitBuffer", (methodPointerType)&m8894, &t296_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t296_m8894_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2640, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t296_m8895_ParameterInfos[] = 
{
	{"filename", 0, 134221118, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8895_MI = 
{
	"GetSecureFileName", (methodPointerType)&m8895, &t296_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t296_m8895_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2641, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t296_m8896_ParameterInfos[] = 
{
	{"filename", 0, 134221119, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"full", 1, 134221120, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8896_MI = 
{
	"GetSecureFileName", (methodPointerType)&m8896, &t296_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t186, t296_m8896_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2642, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t296_MIs[] =
{
	&m8864_MI,
	&m8865_MI,
	&m8866_MI,
	&m8867_MI,
	&m8868_MI,
	&m8869_MI,
	&m8870_MI,
	&m8871_MI,
	&m6946_MI,
	&m8872_MI,
	&m8873_MI,
	&m8874_MI,
	&m8875_MI,
	&m6947_MI,
	&m8876_MI,
	&m8877_MI,
	&m8878_MI,
	&m8879_MI,
	&m8880_MI,
	&m8881_MI,
	&m8882_MI,
	&m8883_MI,
	&m1100_MI,
	&m8884_MI,
	&m8885_MI,
	&m8886_MI,
	&m8887_MI,
	&m8888_MI,
	&m8889_MI,
	&m8890_MI,
	&m8891_MI,
	&m8892_MI,
	&m8893_MI,
	&m8894_MI,
	&m8895_MI,
	&m8896_MI,
	NULL
};
extern Il2CppType t1187_0_0_1;
FieldInfo t296_f1_FieldInfo = 
{
	"access", &t1187_0_0_1, &t296_TI, offsetof(t296, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t296_f2_FieldInfo = 
{
	"owner", &t124_0_0_1, &t296_TI, offsetof(t296, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t296_f3_FieldInfo = 
{
	"async", &t124_0_0_1, &t296_TI, offsetof(t296, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t296_f4_FieldInfo = 
{
	"canseek", &t124_0_0_1, &t296_TI, offsetof(t296, f4), &EmptyCustomAttributesCache};
extern Il2CppType t299_0_0_1;
FieldInfo t296_f5_FieldInfo = 
{
	"append_startpos", &t299_0_0_1, &t296_TI, offsetof(t296, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t296_f6_FieldInfo = 
{
	"anonymous", &t124_0_0_1, &t296_TI, offsetof(t296, f6), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t296_f7_FieldInfo = 
{
	"buf", &t730_0_0_1, &t296_TI, offsetof(t296, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t296_f8_FieldInfo = 
{
	"buf_size", &t125_0_0_1, &t296_TI, offsetof(t296, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t296_f9_FieldInfo = 
{
	"buf_length", &t125_0_0_1, &t296_TI, offsetof(t296, f9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t296_f10_FieldInfo = 
{
	"buf_offset", &t125_0_0_1, &t296_TI, offsetof(t296, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t296_f11_FieldInfo = 
{
	"buf_dirty", &t124_0_0_1, &t296_TI, offsetof(t296, f11), &EmptyCustomAttributesCache};
extern Il2CppType t299_0_0_1;
FieldInfo t296_f12_FieldInfo = 
{
	"buf_start", &t299_0_0_1, &t296_TI, offsetof(t296, f12), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t296_f13_FieldInfo = 
{
	"name", &t2_0_0_1, &t296_TI, offsetof(t296, f13), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_1;
FieldInfo t296_f14_FieldInfo = 
{
	"handle", &t58_0_0_1, &t296_TI, offsetof(t296, f14), &EmptyCustomAttributesCache};
static FieldInfo* t296_FIs[] =
{
	&t296_f1_FieldInfo,
	&t296_f2_FieldInfo,
	&t296_f3_FieldInfo,
	&t296_f4_FieldInfo,
	&t296_f5_FieldInfo,
	&t296_f6_FieldInfo,
	&t296_f7_FieldInfo,
	&t296_f8_FieldInfo,
	&t296_f9_FieldInfo,
	&t296_f10_FieldInfo,
	&t296_f11_FieldInfo,
	&t296_f12_FieldInfo,
	&t296_f13_FieldInfo,
	&t296_f14_FieldInfo,
	NULL
};
extern MethodInfo m8869_MI;
static PropertyInfo t296____CanRead_PropertyInfo = 
{
	&t296_TI, "CanRead", &m8869_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8870_MI;
static PropertyInfo t296____CanWrite_PropertyInfo = 
{
	&t296_TI, "CanWrite", &m8870_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8871_MI;
static PropertyInfo t296____CanSeek_PropertyInfo = 
{
	&t296_TI, "CanSeek", &m8871_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6946_MI;
static PropertyInfo t296____Length_PropertyInfo = 
{
	&t296_TI, "Length", &m6946_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8872_MI;
extern MethodInfo m8873_MI;
static PropertyInfo t296____Position_PropertyInfo = 
{
	&t296_TI, "Position", &m8872_MI, &m8873_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t296_PIs[] =
{
	&t296____CanRead_PropertyInfo,
	&t296____CanWrite_PropertyInfo,
	&t296____CanSeek_PropertyInfo,
	&t296____Length_PropertyInfo,
	&t296____Position_PropertyInfo,
	NULL
};
static const Il2CppType* t296_TI__nestedTypes[2] =
{
	&t1723_0_0_0,
	&t1724_0_0_0,
};
extern MethodInfo m8885_MI;
extern MethodInfo m7056_MI;
extern MethodInfo m8886_MI;
extern MethodInfo m1096_MI;
extern MethodInfo m8884_MI;
extern MethodInfo m6947_MI;
extern MethodInfo m8874_MI;
extern MethodInfo m8883_MI;
extern MethodInfo m1100_MI;
extern MethodInfo m8879_MI;
extern MethodInfo m8875_MI;
extern MethodInfo m8877_MI;
extern MethodInfo m8881_MI;
extern MethodInfo m8878_MI;
extern MethodInfo m8882_MI;
static Il2CppMethodReference t296_VT[] =
{
	&m671_MI,
	&m8885_MI,
	&m672_MI,
	&m673_MI,
	&m7056_MI,
	&m8869_MI,
	&m8871_MI,
	&m8870_MI,
	&m6946_MI,
	&m8872_MI,
	&m8873_MI,
	&m8886_MI,
	&m1096_MI,
	&m8884_MI,
	&m6947_MI,
	&m8874_MI,
	&m8883_MI,
	&m1100_MI,
	&m8879_MI,
	&m8875_MI,
	&m8877_MI,
	&m8881_MI,
	&m8878_MI,
	&m8882_MI,
};
static bool t296_VTIGM[] =
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
};
static Il2CppInterfaceOffsetPair t296_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t296_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t296__CustomAttributeCache = {
1,
NULL,
&t296_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t296_1_0_0;
struct t296;
extern CustomAttributesCache t296__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t296_DM = 
{
	NULL, t296_TI__nestedTypes, NULL, t296_IOs, &t298_0_0_0, t296_VT, t296_VTIGM, NULL};
TypeInfo t296_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileStream", "System.IO", t296_MIs, t296_PIs, t296_FIs, NULL, &t296_TI, NULL, &t296__CustomAttributeCache, &t296_0_0_0, &t296_1_0_0, &t296_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t296), sizeof (t296), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 36, 5, 14, 0, 2, 24, 0, 1};
#include "t1725.h"
// Metadata Definition System.IO.FileStreamAsyncResult
extern TypeInfo t1725_TI;
#include "t1725MD.h"
extern Il2CppType t470_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1725_m8897_ParameterInfos[] = 
{
	{"cb", 0, 134221143, &EmptyCustomAttributesCache, &t470_0_0_0},
	{"state", 1, 134221144, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8897_MI = 
{
	".ctor", (methodPointerType)&m8897, &t1725_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1725_m8897_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2651, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t469_0_0_0;
static ParameterInfo t1725_m8898_ParameterInfos[] = 
{
	{"ares", 0, 134221145, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8898_MI = 
{
	"CBWrapper", (methodPointerType)&m8898, &t1725_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1725_m8898_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2652, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8899_MI = 
{
	"get_AsyncState", (methodPointerType)&m8899, &t1725_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 2653, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1486_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8900_MI = 
{
	"get_AsyncWaitHandle", (methodPointerType)&m8900, &t1725_TI, &t1486_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 2654, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8901_MI = 
{
	"get_IsCompleted", (methodPointerType)&m8901, &t1725_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 2655, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1725_MIs[] =
{
	&m8897_MI,
	&m8898_MI,
	&m8899_MI,
	&m8900_MI,
	&m8901_MI,
	NULL
};
extern Il2CppType t9_0_0_1;
FieldInfo t1725_f0_FieldInfo = 
{
	"state", &t9_0_0_1, &t1725_TI, offsetof(t1725, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1725_f1_FieldInfo = 
{
	"completed", &t124_0_0_1, &t1725_TI, offsetof(t1725, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1485_0_0_1;
FieldInfo t1725_f2_FieldInfo = 
{
	"wh", &t1485_0_0_1, &t1725_TI, offsetof(t1725, f2), &EmptyCustomAttributesCache};
extern Il2CppType t470_0_0_1;
FieldInfo t1725_f3_FieldInfo = 
{
	"cb", &t470_0_0_1, &t1725_TI, offsetof(t1725, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1725_f4_FieldInfo = 
{
	"Count", &t125_0_0_6, &t1725_TI, offsetof(t1725, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1725_f5_FieldInfo = 
{
	"OriginalCount", &t125_0_0_6, &t1725_TI, offsetof(t1725, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1725_f6_FieldInfo = 
{
	"BytesRead", &t125_0_0_6, &t1725_TI, offsetof(t1725, f6), &EmptyCustomAttributesCache};
extern Il2CppType t470_0_0_1;
FieldInfo t1725_f7_FieldInfo = 
{
	"realcb", &t470_0_0_1, &t1725_TI, offsetof(t1725, f7), &EmptyCustomAttributesCache};
static FieldInfo* t1725_FIs[] =
{
	&t1725_f0_FieldInfo,
	&t1725_f1_FieldInfo,
	&t1725_f2_FieldInfo,
	&t1725_f3_FieldInfo,
	&t1725_f4_FieldInfo,
	&t1725_f5_FieldInfo,
	&t1725_f6_FieldInfo,
	&t1725_f7_FieldInfo,
	NULL
};
extern MethodInfo m8899_MI;
static PropertyInfo t1725____AsyncState_PropertyInfo = 
{
	&t1725_TI, "AsyncState", &m8899_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8900_MI;
static PropertyInfo t1725____AsyncWaitHandle_PropertyInfo = 
{
	&t1725_TI, "AsyncWaitHandle", &m8900_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8901_MI;
static PropertyInfo t1725____IsCompleted_PropertyInfo = 
{
	&t1725_TI, "IsCompleted", &m8901_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1725_PIs[] =
{
	&t1725____AsyncState_PropertyInfo,
	&t1725____AsyncWaitHandle_PropertyInfo,
	&t1725____IsCompleted_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1725_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8899_MI,
	&m8900_MI,
	&m8901_MI,
};
static bool t1725_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1725_ITIs[] = 
{
	&t469_0_0_0,
};
static Il2CppInterfaceOffsetPair t1725_IOs[] = 
{
	{ &t469_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1725_0_0_0;
extern Il2CppType t1725_1_0_0;
struct t1725;
const Il2CppTypeDefinitionMetadata t1725_DM = 
{
	NULL, NULL, t1725_ITIs, t1725_IOs, &t9_0_0_0, t1725_VT, t1725_VTIGM, NULL};
TypeInfo t1725_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileStreamAsyncResult", "System.IO", t1725_MIs, t1725_PIs, t1725_FIs, NULL, &t1725_TI, NULL, &EmptyCustomAttributesCache, &t1725_0_0_0, &t1725_1_0_0, &t1725_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1725), sizeof (t1725), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 3, 8, 0, 0, 7, 1, 1};
#include "t1716.h"
// Metadata Definition System.IO.FileSystemInfo
extern TypeInfo t1716_TI;
#include "t1716MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8902_MI = 
{
	".ctor", (methodPointerType)&m8902, &t1716_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2656, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1716_m8903_ParameterInfos[] = 
{
	{"info", 0, 134221146, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134221147, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m8903_MI = 
{
	".ctor", (methodPointerType)&m8903, &t1716_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1716_m8903_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2657, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1716_m8904_ParameterInfos[] = 
{
	{"info", 0, 134221148, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134221149, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1716__CustomAttributeCache_m8904;
MethodInfo m8904_MI = 
{
	"GetObjectData", (methodPointerType)&m8904, &t1716_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1716_m8904_ParameterInfos, &t1716__CustomAttributeCache_m8904, 454, 0, 7, 2, false, false, 2658, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m12773_MI = 
{
	"get_Exists", NULL, &t1716_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 8, 0, false, false, 2659, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8905_MI = 
{
	"get_FullName", (methodPointerType)&m8905, &t1716_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 2660, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1716_m8906_ParameterInfos[] = 
{
	{"force", 0, 134221150, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8906_MI = 
{
	"Refresh", (methodPointerType)&m8906, &t1716_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1716_m8906_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 2661, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8907_MI = 
{
	"InternalRefresh", (methodPointerType)&m8907, &t1716_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 451, 0, 10, 0, false, false, 2662, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1716_m8908_ParameterInfos[] = 
{
	{"path", 0, 134221151, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8908_MI = 
{
	"CheckPath", (methodPointerType)&m8908, &t1716_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1716_m8908_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 2663, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1716_MIs[] =
{
	&m8902_MI,
	&m8903_MI,
	&m8904_MI,
	&m12773_MI,
	&m8905_MI,
	&m8906_MI,
	&m8907_MI,
	&m8908_MI,
	NULL
};
extern Il2CppType t2_0_0_4;
FieldInfo t1716_f1_FieldInfo = 
{
	"FullPath", &t2_0_0_4, &t1716_TI, offsetof(t1716, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_4;
FieldInfo t1716_f2_FieldInfo = 
{
	"OriginalPath", &t2_0_0_4, &t1716_TI, offsetof(t1716, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1726_0_0_3;
FieldInfo t1716_f3_FieldInfo = 
{
	"stat", &t1726_0_0_3, &t1716_TI, offsetof(t1716, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t1716_f4_FieldInfo = 
{
	"valid", &t124_0_0_3, &t1716_TI, offsetof(t1716, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1716_FIs[] =
{
	&t1716_f1_FieldInfo,
	&t1716_f2_FieldInfo,
	&t1716_f3_FieldInfo,
	&t1716_f4_FieldInfo,
	NULL
};
extern MethodInfo m12773_MI;
static PropertyInfo t1716____Exists_PropertyInfo = 
{
	&t1716_TI, "Exists", &m12773_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1716____FullName_PropertyInfo = 
{
	&t1716_TI, "FullName", &m8905_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1716_PIs[] =
{
	&t1716____Exists_PropertyInfo,
	&t1716____FullName_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1716_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m6036_MI,
	&m6037_MI,
	&m8904_MI,
	&m8904_MI,
	NULL,
	&m8905_MI,
	&m8907_MI,
};
static bool t1716_VTIGM[] =
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
static const Il2CppType* t1716_ITIs[] = 
{
	&t623_0_0_0,
};
static Il2CppInterfaceOffsetPair t1716_IOs[] = 
{
	{ &t623_0_0_0, 6},
};
void t1716_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1716_CustomAttributesCacheGenerator_m8904(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1716__CustomAttributeCache = {
1,
NULL,
&t1716_CustomAttributesCacheGenerator
};
CustomAttributesCache t1716__CustomAttributeCache_m8904 = {
1,
NULL,
&t1716_CustomAttributesCacheGenerator_m8904
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1716_1_0_0;
extern Il2CppType t1209_0_0_0;
struct t1716;
extern CustomAttributesCache t1716__CustomAttributeCache;
extern CustomAttributesCache t1716__CustomAttributeCache_m8904;
const Il2CppTypeDefinitionMetadata t1716_DM = 
{
	NULL, NULL, t1716_ITIs, t1716_IOs, &t1209_0_0_0, t1716_VT, t1716_VTIGM, NULL};
TypeInfo t1716_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileSystemInfo", "System.IO", t1716_MIs, t1716_PIs, t1716_FIs, NULL, &t1716_TI, NULL, &t1716__CustomAttributeCache, &t1716_0_0_0, &t1716_1_0_0, &t1716_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1716), sizeof (t1716), 0, -1, 0, 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 2, 4, 0, 0, 11, 1, 1};
#include "t1549.h"
// Metadata Definition System.IO.IOException
extern TypeInfo t1549_TI;
#include "t1549MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8909_MI = 
{
	".ctor", (methodPointerType)&m8909, &t1549_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2664, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1549_m8910_ParameterInfos[] = 
{
	{"message", 0, 134221152, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8910_MI = 
{
	".ctor", (methodPointerType)&m8910, &t1549_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1549_m8910_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2665, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t138_0_0_0;
static ParameterInfo t1549_m7004_ParameterInfos[] = 
{
	{"message", 0, 134221153, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"innerException", 1, 134221154, &EmptyCustomAttributesCache, &t138_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7004_MI = 
{
	".ctor", (methodPointerType)&m7004, &t1549_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1549_m7004_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2666, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1549_m8911_ParameterInfos[] = 
{
	{"info", 0, 134221155, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134221156, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m8911_MI = 
{
	".ctor", (methodPointerType)&m8911, &t1549_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1549_m8911_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2667, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1549_m8912_ParameterInfos[] = 
{
	{"message", 0, 134221157, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"hresult", 1, 134221158, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8912_MI = 
{
	".ctor", (methodPointerType)&m8912, &t1549_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1549_m8912_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2668, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1549_MIs[] =
{
	&m8909_MI,
	&m8910_MI,
	&m7004_MI,
	&m8911_MI,
	&m8912_MI,
	NULL
};
static Il2CppMethodReference t1549_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4496_MI,
	&m4497_MI,
	&m4243_MI,
	&m1098_MI,
	&m4498_MI,
	&m4441_MI,
	&m4497_MI,
	&m4442_MI,
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
};
static Il2CppInterfaceOffsetPair t1549_IOs[] = 
{
	{ &t623_0_0_0, 4},
	{ &t948_0_0_0, 5},
};
void t1549_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1549__CustomAttributeCache = {
1,
NULL,
&t1549_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1549_1_0_0;
extern Il2CppType t1369_0_0_0;
struct t1549;
extern CustomAttributesCache t1549__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1549_DM = 
{
	NULL, NULL, NULL, t1549_IOs, &t1369_0_0_0, t1549_VT, t1549_VTIGM, NULL};
TypeInfo t1549_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IOException", "System.IO", t1549_MIs, NULL, NULL, NULL, &t1549_TI, NULL, &t1549__CustomAttributeCache, &t1549_0_0_0, &t1549_1_0_0, &t1549_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1549), sizeof (t1549), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 11, 0, 2};
#include "t888.h"
// Metadata Definition System.IO.MemoryStream
extern TypeInfo t888_TI;
#include "t888MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7009_MI = 
{
	".ctor", (methodPointerType)&m7009, &t888_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2669, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t888_m4289_ParameterInfos[] = 
{
	{"capacity", 0, 134221159, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4289_MI = 
{
	".ctor", (methodPointerType)&m4289, &t888_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t888_m4289_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2670, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t888_m7030_ParameterInfos[] = 
{
	{"buffer", 0, 134221160, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7030_MI = 
{
	".ctor", (methodPointerType)&m7030, &t888_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t888_m7030_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2671, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t888_m8913_ParameterInfos[] = 
{
	{"buffer", 0, 134221161, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"index", 1, 134221162, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221163, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"writable", 3, 134221164, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"publicallyVisible", 4, 134221165, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8913_MI = 
{
	"InternalConstructor", (methodPointerType)&m8913, &t888_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t186_t186, t888_m8913_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 5, false, false, 2672, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8914_MI = 
{
	"CheckIfClosedThrowDisposed", (methodPointerType)&m8914, &t888_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2673, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8915_MI = 
{
	"get_CanRead", (methodPointerType)&m8915, &t888_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 5, 0, false, false, 2674, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m7029_MI = 
{
	"get_CanSeek", (methodPointerType)&m7029, &t888_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2675, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8916_MI = 
{
	"get_CanWrite", (methodPointerType)&m8916, &t888_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 2676, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t888_m8917_ParameterInfos[] = 
{
	{"value", 0, 134221166, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8917_MI = 
{
	"set_Capacity", (methodPointerType)&m8917, &t888_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t888_m8917_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 24, 1, false, false, 2677, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m7018_MI = 
{
	"get_Length", (methodPointerType)&m7018, &t888_TI, &t299_0_0_0, RuntimeInvoker_t299, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2678, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m7017_MI = 
{
	"get_Position", (methodPointerType)&m7017, &t888_TI, &t299_0_0_0, RuntimeInvoker_t299, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2679, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t888_m7020_ParameterInfos[] = 
{
	{"value", 0, 134221167, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m7020_MI = 
{
	"set_Position", (methodPointerType)&m7020, &t888_TI, &t122_0_0_0, RuntimeInvoker_t122_t299, t888_m7020_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 10, 1, false, false, 2680, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t888_m8918_ParameterInfos[] = 
{
	{"disposing", 0, 134221168, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8918_MI = 
{
	"Dispose", (methodPointerType)&m8918, &t888_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t888_m8918_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 1, false, false, 2681, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7031_MI = 
{
	"Flush", (methodPointerType)&m7031, &t888_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 2682, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t888_m7019_ParameterInfos[] = 
{
	{"buffer", 0, 134221169, &EmptyCustomAttributesCache, &t730_0_0_3},
	{"offset", 1, 134221170, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221171, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7019_MI = 
{
	"Read", (methodPointerType)&m7019, &t888_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t888_m7019_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 14, 3, false, false, 2683, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8919_MI = 
{
	"ReadByte", (methodPointerType)&m8919, &t888_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 15, 0, false, false, 2684, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern Il2CppType t1499_0_0_0;
static ParameterInfo t888_m7021_ParameterInfos[] = 
{
	{"offset", 0, 134221172, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"loc", 1, 134221173, &EmptyCustomAttributesCache, &t1499_0_0_0},
};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299_t299_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7021_MI = 
{
	"Seek", (methodPointerType)&m7021, &t888_TI, &t299_0_0_0, RuntimeInvoker_t299_t299_t125, t888_m7021_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 2, false, false, 2685, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t888_m8920_ParameterInfos[] = 
{
	{"minimum", 0, 134221174, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8920_MI = 
{
	"CalculateNewCapacity", (methodPointerType)&m8920, &t888_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t888_m8920_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2686, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t888_m8921_ParameterInfos[] = 
{
	{"newSize", 0, 134221175, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8921_MI = 
{
	"Expand", (methodPointerType)&m8921, &t888_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t888_m8921_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2687, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t888_m7022_ParameterInfos[] = 
{
	{"value", 0, 134221176, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m7022_MI = 
{
	"SetLength", (methodPointerType)&m7022, &t888_TI, &t122_0_0_0, RuntimeInvoker_t122_t299, t888_m7022_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 2688, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4296_MI = 
{
	"ToArray", (methodPointerType)&m4296, &t888_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 25, 0, false, false, 2689, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t888_m4290_ParameterInfos[] = 
{
	{"buffer", 0, 134221177, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134221178, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221179, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4290_MI = 
{
	"Write", (methodPointerType)&m4290, &t888_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t888_m4290_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 18, 3, false, false, 2690, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t575_0_0_0;
static ParameterInfo t888_m4301_ParameterInfos[] = 
{
	{"value", 0, 134221180, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m4301_MI = 
{
	"WriteByte", (methodPointerType)&m4301, &t888_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t888_m4301_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 19, 1, false, false, 2691, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t888_MIs[] =
{
	&m7009_MI,
	&m4289_MI,
	&m7030_MI,
	&m8913_MI,
	&m8914_MI,
	&m8915_MI,
	&m7029_MI,
	&m8916_MI,
	&m8917_MI,
	&m7018_MI,
	&m7017_MI,
	&m7020_MI,
	&m8918_MI,
	&m7031_MI,
	&m7019_MI,
	&m8919_MI,
	&m7021_MI,
	&m8920_MI,
	&m8921_MI,
	&m7022_MI,
	&m4296_MI,
	&m4290_MI,
	&m4301_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t888_f1_FieldInfo = 
{
	"canWrite", &t124_0_0_1, &t888_TI, offsetof(t888, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t888_f2_FieldInfo = 
{
	"allowGetBuffer", &t124_0_0_1, &t888_TI, offsetof(t888, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t888_f3_FieldInfo = 
{
	"capacity", &t125_0_0_1, &t888_TI, offsetof(t888, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t888_f4_FieldInfo = 
{
	"length", &t125_0_0_1, &t888_TI, offsetof(t888, f4), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t888_f5_FieldInfo = 
{
	"internalBuffer", &t730_0_0_1, &t888_TI, offsetof(t888, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t888_f6_FieldInfo = 
{
	"initialIndex", &t125_0_0_1, &t888_TI, offsetof(t888, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t888_f7_FieldInfo = 
{
	"expandable", &t124_0_0_1, &t888_TI, offsetof(t888, f7), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t888_f8_FieldInfo = 
{
	"streamClosed", &t124_0_0_1, &t888_TI, offsetof(t888, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t888_f9_FieldInfo = 
{
	"position", &t125_0_0_1, &t888_TI, offsetof(t888, f9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t888_f10_FieldInfo = 
{
	"dirty_bytes", &t125_0_0_1, &t888_TI, offsetof(t888, f10), &EmptyCustomAttributesCache};
static FieldInfo* t888_FIs[] =
{
	&t888_f1_FieldInfo,
	&t888_f2_FieldInfo,
	&t888_f3_FieldInfo,
	&t888_f4_FieldInfo,
	&t888_f5_FieldInfo,
	&t888_f6_FieldInfo,
	&t888_f7_FieldInfo,
	&t888_f8_FieldInfo,
	&t888_f9_FieldInfo,
	&t888_f10_FieldInfo,
	NULL
};
extern MethodInfo m8915_MI;
static PropertyInfo t888____CanRead_PropertyInfo = 
{
	&t888_TI, "CanRead", &m8915_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7029_MI;
static PropertyInfo t888____CanSeek_PropertyInfo = 
{
	&t888_TI, "CanSeek", &m7029_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8916_MI;
static PropertyInfo t888____CanWrite_PropertyInfo = 
{
	&t888_TI, "CanWrite", &m8916_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8917_MI;
static PropertyInfo t888____Capacity_PropertyInfo = 
{
	&t888_TI, "Capacity", NULL, &m8917_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7018_MI;
static PropertyInfo t888____Length_PropertyInfo = 
{
	&t888_TI, "Length", &m7018_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7017_MI;
extern MethodInfo m7020_MI;
static PropertyInfo t888____Position_PropertyInfo = 
{
	&t888_TI, "Position", &m7017_MI, &m7020_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t888_PIs[] =
{
	&t888____CanRead_PropertyInfo,
	&t888____CanSeek_PropertyInfo,
	&t888____CanWrite_PropertyInfo,
	&t888____Capacity_PropertyInfo,
	&t888____Length_PropertyInfo,
	&t888____Position_PropertyInfo,
	NULL
};
extern MethodInfo m8918_MI;
extern MethodInfo m7031_MI;
extern MethodInfo m7019_MI;
extern MethodInfo m8919_MI;
extern MethodInfo m7021_MI;
extern MethodInfo m7022_MI;
extern MethodInfo m4290_MI;
extern MethodInfo m4301_MI;
extern MethodInfo m6987_MI;
extern MethodInfo m6998_MI;
extern MethodInfo m6989_MI;
extern MethodInfo m6999_MI;
extern MethodInfo m4296_MI;
static Il2CppMethodReference t888_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7056_MI,
	&m8915_MI,
	&m7029_MI,
	&m8916_MI,
	&m7018_MI,
	&m7017_MI,
	&m7020_MI,
	&m8918_MI,
	&m1096_MI,
	&m7031_MI,
	&m7019_MI,
	&m8919_MI,
	&m7021_MI,
	&m7022_MI,
	&m4290_MI,
	&m4301_MI,
	&m6987_MI,
	&m6998_MI,
	&m6989_MI,
	&m6999_MI,
	&m8917_MI,
	&m4296_MI,
};
static bool t888_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t888_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t888_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7849(tmp, il2cpp_codegen_string_new_wrapper("Serialization format not compatible with .NET"), &m7849_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t888__CustomAttributeCache = {
2,
NULL,
&t888_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t888_0_0_0;
extern Il2CppType t888_1_0_0;
struct t888;
extern CustomAttributesCache t888__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t888_DM = 
{
	NULL, NULL, NULL, t888_IOs, &t298_0_0_0, t888_VT, t888_VTIGM, NULL};
TypeInfo t888_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MemoryStream", "System.IO", t888_MIs, t888_PIs, t888_FIs, NULL, &t888_TI, NULL, &t888__CustomAttributeCache, &t888_0_0_0, &t888_1_0_0, &t888_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t888), sizeof (t888), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 23, 6, 10, 0, 0, 26, 0, 1};
#include "t1727.h"
// Metadata Definition System.IO.MonoFileType
extern TypeInfo t1727_TI;
#include "t1727MD.h"
static MethodInfo* t1727_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1727_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1727_TI, offsetof(t1727, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1727_0_0_32854;
FieldInfo t1727_f2_FieldInfo = 
{
	"Unknown", &t1727_0_0_32854, &t1727_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1727_0_0_32854;
FieldInfo t1727_f3_FieldInfo = 
{
	"Disk", &t1727_0_0_32854, &t1727_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1727_0_0_32854;
FieldInfo t1727_f4_FieldInfo = 
{
	"Char", &t1727_0_0_32854, &t1727_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1727_0_0_32854;
FieldInfo t1727_f5_FieldInfo = 
{
	"Pipe", &t1727_0_0_32854, &t1727_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1727_0_0_32854;
FieldInfo t1727_f6_FieldInfo = 
{
	"Remote", &t1727_0_0_32854, &t1727_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1727_FIs[] =
{
	&t1727_f1_FieldInfo,
	&t1727_f2_FieldInfo,
	&t1727_f3_FieldInfo,
	&t1727_f4_FieldInfo,
	&t1727_f5_FieldInfo,
	&t1727_f6_FieldInfo,
	NULL
};
static const int32_t t1727_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1727_f2_DefaultValue = 
{
	&t1727_f2_FieldInfo, { (char*)&t1727_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1727_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1727_f3_DefaultValue = 
{
	&t1727_f3_FieldInfo, { (char*)&t1727_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1727_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1727_f4_DefaultValue = 
{
	&t1727_f4_FieldInfo, { (char*)&t1727_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1727_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1727_f5_DefaultValue = 
{
	&t1727_f5_FieldInfo, { (char*)&t1727_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1727_f6_DefaultValueData = 32768;
static Il2CppFieldDefaultValueEntry t1727_f6_DefaultValue = 
{
	&t1727_f6_FieldInfo, { (char*)&t1727_f6_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1727_FDVs[] = 
{
	&t1727_f2_DefaultValue,
	&t1727_f3_DefaultValue,
	&t1727_f4_DefaultValue,
	&t1727_f5_DefaultValue,
	&t1727_f6_DefaultValue,
	NULL
};
static Il2CppMethodReference t1727_VT[] =
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
static bool t1727_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1727_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1727_0_0_0;
extern Il2CppType t1727_1_0_0;
const Il2CppTypeDefinitionMetadata t1727_DM = 
{
	NULL, NULL, NULL, t1727_IOs, &t8_0_0_0, t1727_VT, t1727_VTIGM, NULL};
TypeInfo t1727_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoFileType", "System.IO", t1727_MIs, NULL, t1727_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t1727_0_0_0, &t1727_1_0_0, &t1727_DM, NULL, NULL, NULL, t1727_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1727)+ sizeof (Il2CppObject), sizeof (t1727)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1728.h"
// Metadata Definition System.IO.MonoIO
extern TypeInfo t1728_TI;
#include "t1728MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8922_MI = 
{
	".cctor", (methodPointerType)&m8922, &t1728_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2692, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1729_0_0_0;
extern Il2CppType t1729_0_0_0;
static ParameterInfo t1728_m8923_ParameterInfos[] = 
{
	{"error", 0, 134221181, &EmptyCustomAttributesCache, &t1729_0_0_0},
};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8923_MI = 
{
	"GetException", (methodPointerType)&m8923, &t1728_TI, &t138_0_0_0, RuntimeInvoker_t9_t125, t1728_m8923_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2693, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1729_0_0_0;
static ParameterInfo t1728_m8924_ParameterInfos[] = 
{
	{"path", 0, 134221182, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221183, &EmptyCustomAttributesCache, &t1729_0_0_0},
};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8924_MI = 
{
	"GetException", (methodPointerType)&m8924, &t1728_TI, &t138_0_0_0, RuntimeInvoker_t9_t9_t125, t1728_m8924_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2694, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1729_1_0_2;
extern Il2CppType t1729_1_0_0;
static ParameterInfo t1728_m8925_ParameterInfos[] = 
{
	{"path", 0, 134221184, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221185, &EmptyCustomAttributesCache, &t1729_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t2587 (MethodInfo* method, void* obj, void** args);
MethodInfo m8925_MI = 
{
	"CreateDirectory", (methodPointerType)&m8925, &t1728_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t2587, t1728_m8925_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2695, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1729_1_0_2;
static ParameterInfo t1728_m8926_ParameterInfos[] = 
{
	{"path", 0, 134221186, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"path_with_pattern", 1, 134221187, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"attrs", 2, 134221188, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"mask", 3, 134221189, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"error", 4, 134221190, &EmptyCustomAttributesCache, &t1729_1_0_2},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t125_t125_t2587 (MethodInfo* method, void* obj, void** args);
MethodInfo m8926_MI = 
{
	"GetFileSystemEntries", (methodPointerType)&m8926, &t1728_TI, &t221_0_0_0, RuntimeInvoker_t9_t9_t9_t125_t125_t2587, t1728_m8926_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 5, false, false, 2696, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1729_1_0_2;
static ParameterInfo t1728_m8927_ParameterInfos[] = 
{
	{"error", 0, 134221191, &EmptyCustomAttributesCache, &t1729_1_0_2},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t2587 (MethodInfo* method, void* obj, void** args);
MethodInfo m8927_MI = 
{
	"GetCurrentDirectory", (methodPointerType)&m8927, &t1728_TI, &t2_0_0_0, RuntimeInvoker_t9_t2587, t1728_m8927_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 1, false, false, 2697, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1729_1_0_2;
static ParameterInfo t1728_m8928_ParameterInfos[] = 
{
	{"path", 0, 134221192, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221193, &EmptyCustomAttributesCache, &t1729_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t2587 (MethodInfo* method, void* obj, void** args);
MethodInfo m8928_MI = 
{
	"DeleteFile", (methodPointerType)&m8928, &t1728_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t2587, t1728_m8928_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2698, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1729_1_0_2;
static ParameterInfo t1728_m8929_ParameterInfos[] = 
{
	{"path", 0, 134221194, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221195, &EmptyCustomAttributesCache, &t1729_1_0_2},
};
extern Il2CppType t1715_0_0_0;
extern void* RuntimeInvoker_t1715_t9_t2587 (MethodInfo* method, void* obj, void** args);
MethodInfo m8929_MI = 
{
	"GetFileAttributes", (methodPointerType)&m8929, &t1728_TI, &t1715_0_0_0, RuntimeInvoker_t1715_t9_t2587, t1728_m8929_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2699, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t1729_1_0_2;
static ParameterInfo t1728_m8930_ParameterInfos[] = 
{
	{"handle", 0, 134221196, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"error", 1, 134221197, &EmptyCustomAttributesCache, &t1729_1_0_2},
};
extern Il2CppType t1727_0_0_0;
extern void* RuntimeInvoker_t1727_t58_t2587 (MethodInfo* method, void* obj, void** args);
MethodInfo m8930_MI = 
{
	"GetFileType", (methodPointerType)&m8930, &t1728_TI, &t1727_0_0_0, RuntimeInvoker_t1727_t58_t2587, t1728_m8930_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2700, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1729_1_0_2;
static ParameterInfo t1728_m8931_ParameterInfos[] = 
{
	{"path", 0, 134221198, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221199, &EmptyCustomAttributesCache, &t1729_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t2587 (MethodInfo* method, void* obj, void** args);
MethodInfo m8931_MI = 
{
	"ExistsFile", (methodPointerType)&m8931, &t1728_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t2587, t1728_m8931_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2701, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1729_1_0_2;
static ParameterInfo t1728_m8932_ParameterInfos[] = 
{
	{"path", 0, 134221200, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221201, &EmptyCustomAttributesCache, &t1729_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t2587 (MethodInfo* method, void* obj, void** args);
MethodInfo m8932_MI = 
{
	"ExistsDirectory", (methodPointerType)&m8932, &t1728_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t2587, t1728_m8932_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2702, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1726_1_0_2;
extern Il2CppType t1726_1_0_0;
extern Il2CppType t1729_1_0_2;
static ParameterInfo t1728_m8933_ParameterInfos[] = 
{
	{"path", 0, 134221202, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"stat", 1, 134221203, &EmptyCustomAttributesCache, &t1726_1_0_2},
	{"error", 2, 134221204, &EmptyCustomAttributesCache, &t1729_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t2588_t2587 (MethodInfo* method, void* obj, void** args);
MethodInfo m8933_MI = 
{
	"GetFileStat", (methodPointerType)&m8933, &t1728_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t2588_t2587, t1728_m8933_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 3, false, false, 2703, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t297_0_0_0;
extern Il2CppType t1187_0_0_0;
extern Il2CppType t1722_0_0_0;
extern Il2CppType t1721_0_0_0;
extern Il2CppType t1729_1_0_2;
static ParameterInfo t1728_m8934_ParameterInfos[] = 
{
	{"filename", 0, 134221205, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221206, &EmptyCustomAttributesCache, &t297_0_0_0},
	{"access", 2, 134221207, &EmptyCustomAttributesCache, &t1187_0_0_0},
	{"share", 3, 134221208, &EmptyCustomAttributesCache, &t1722_0_0_0},
	{"options", 4, 134221209, &EmptyCustomAttributesCache, &t1721_0_0_0},
	{"error", 5, 134221210, &EmptyCustomAttributesCache, &t1729_1_0_2},
};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58_t9_t125_t125_t125_t125_t2587 (MethodInfo* method, void* obj, void** args);
MethodInfo m8934_MI = 
{
	"Open", (methodPointerType)&m8934, &t1728_TI, &t58_0_0_0, RuntimeInvoker_t58_t9_t125_t125_t125_t125_t2587, t1728_m8934_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 6, false, false, 2704, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t1729_1_0_2;
static ParameterInfo t1728_m8935_ParameterInfos[] = 
{
	{"handle", 0, 134221211, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"error", 1, 134221212, &EmptyCustomAttributesCache, &t1729_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t58_t2587 (MethodInfo* method, void* obj, void** args);
MethodInfo m8935_MI = 
{
	"Close", (methodPointerType)&m8935, &t1728_TI, &t124_0_0_0, RuntimeInvoker_t124_t58_t2587, t1728_m8935_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2705, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1729_1_0_2;
static ParameterInfo t1728_m8936_ParameterInfos[] = 
{
	{"handle", 0, 134221213, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"dest", 1, 134221214, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"dest_offset", 2, 134221215, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134221216, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"error", 4, 134221217, &EmptyCustomAttributesCache, &t1729_1_0_2},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t58_t9_t125_t125_t2587 (MethodInfo* method, void* obj, void** args);
MethodInfo m8936_MI = 
{
	"Read", (methodPointerType)&m8936, &t1728_TI, &t125_0_0_0, RuntimeInvoker_t125_t58_t9_t125_t125_t2587, t1728_m8936_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 5, false, false, 2706, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t730_0_0_1;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1729_1_0_2;
static ParameterInfo t1728_m8937_ParameterInfos[] = 
{
	{"handle", 0, 134221218, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"src", 1, 134221219, &EmptyCustomAttributesCache, &t730_0_0_1},
	{"src_offset", 2, 134221220, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134221221, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"error", 4, 134221222, &EmptyCustomAttributesCache, &t1729_1_0_2},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t58_t9_t125_t125_t2587 (MethodInfo* method, void* obj, void** args);
MethodInfo m8937_MI = 
{
	"Write", (methodPointerType)&m8937, &t1728_TI, &t125_0_0_0, RuntimeInvoker_t125_t58_t9_t125_t125_t2587, t1728_m8937_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 5, false, false, 2707, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t1499_0_0_0;
extern Il2CppType t1729_1_0_2;
static ParameterInfo t1728_m8938_ParameterInfos[] = 
{
	{"handle", 0, 134221223, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"offset", 1, 134221224, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"origin", 2, 134221225, &EmptyCustomAttributesCache, &t1499_0_0_0},
	{"error", 3, 134221226, &EmptyCustomAttributesCache, &t1729_1_0_2},
};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299_t58_t299_t125_t2587 (MethodInfo* method, void* obj, void** args);
MethodInfo m8938_MI = 
{
	"Seek", (methodPointerType)&m8938, &t1728_TI, &t299_0_0_0, RuntimeInvoker_t299_t58_t299_t125_t2587, t1728_m8938_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 4, false, false, 2708, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t1729_1_0_2;
static ParameterInfo t1728_m8939_ParameterInfos[] = 
{
	{"handle", 0, 134221227, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"error", 1, 134221228, &EmptyCustomAttributesCache, &t1729_1_0_2},
};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299_t58_t2587 (MethodInfo* method, void* obj, void** args);
MethodInfo m8939_MI = 
{
	"GetLength", (methodPointerType)&m8939, &t1728_TI, &t299_0_0_0, RuntimeInvoker_t299_t58_t2587, t1728_m8939_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2709, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t1729_1_0_2;
static ParameterInfo t1728_m8940_ParameterInfos[] = 
{
	{"handle", 0, 134221229, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"length", 1, 134221230, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"error", 2, 134221231, &EmptyCustomAttributesCache, &t1729_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t58_t299_t2587 (MethodInfo* method, void* obj, void** args);
MethodInfo m8940_MI = 
{
	"SetLength", (methodPointerType)&m8940, &t1728_TI, &t124_0_0_0, RuntimeInvoker_t124_t58_t299_t2587, t1728_m8940_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 3, false, false, 2710, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m8941_MI = 
{
	"get_ConsoleOutput", (methodPointerType)&m8941, &t1728_TI, &t58_0_0_0, RuntimeInvoker_t58, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2711, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m8942_MI = 
{
	"get_ConsoleInput", (methodPointerType)&m8942, &t1728_TI, &t58_0_0_0, RuntimeInvoker_t58, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2712, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m8943_MI = 
{
	"get_ConsoleError", (methodPointerType)&m8943, &t1728_TI, &t58_0_0_0, RuntimeInvoker_t58, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2713, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m8944_MI = 
{
	"get_VolumeSeparatorChar", (methodPointerType)&m8944, &t1728_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2714, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m8945_MI = 
{
	"get_DirectorySeparatorChar", (methodPointerType)&m8945, &t1728_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2715, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m8946_MI = 
{
	"get_AltDirectorySeparatorChar", (methodPointerType)&m8946, &t1728_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2716, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m8947_MI = 
{
	"get_PathSeparator", (methodPointerType)&m8947, &t1728_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2717, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1728_MIs[] =
{
	&m8922_MI,
	&m8923_MI,
	&m8924_MI,
	&m8925_MI,
	&m8926_MI,
	&m8927_MI,
	&m8928_MI,
	&m8929_MI,
	&m8930_MI,
	&m8931_MI,
	&m8932_MI,
	&m8933_MI,
	&m8934_MI,
	&m8935_MI,
	&m8936_MI,
	&m8937_MI,
	&m8938_MI,
	&m8939_MI,
	&m8940_MI,
	&m8941_MI,
	&m8942_MI,
	&m8943_MI,
	&m8944_MI,
	&m8945_MI,
	&m8946_MI,
	&m8947_MI,
	NULL
};
extern Il2CppType t1715_0_0_54;
FieldInfo t1728_f0_FieldInfo = 
{
	"InvalidFileAttributes", &t1715_0_0_54, &t1728_TI, offsetof(t1728_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_54;
FieldInfo t1728_f1_FieldInfo = 
{
	"InvalidHandle", &t58_0_0_54, &t1728_TI, offsetof(t1728_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1728_FIs[] =
{
	&t1728_f0_FieldInfo,
	&t1728_f1_FieldInfo,
	NULL
};
extern MethodInfo m8941_MI;
static PropertyInfo t1728____ConsoleOutput_PropertyInfo = 
{
	&t1728_TI, "ConsoleOutput", &m8941_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8942_MI;
static PropertyInfo t1728____ConsoleInput_PropertyInfo = 
{
	&t1728_TI, "ConsoleInput", &m8942_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8943_MI;
static PropertyInfo t1728____ConsoleError_PropertyInfo = 
{
	&t1728_TI, "ConsoleError", &m8943_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8944_MI;
static PropertyInfo t1728____VolumeSeparatorChar_PropertyInfo = 
{
	&t1728_TI, "VolumeSeparatorChar", &m8944_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8945_MI;
static PropertyInfo t1728____DirectorySeparatorChar_PropertyInfo = 
{
	&t1728_TI, "DirectorySeparatorChar", &m8945_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8946_MI;
static PropertyInfo t1728____AltDirectorySeparatorChar_PropertyInfo = 
{
	&t1728_TI, "AltDirectorySeparatorChar", &m8946_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8947_MI;
static PropertyInfo t1728____PathSeparator_PropertyInfo = 
{
	&t1728_TI, "PathSeparator", &m8947_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1728_PIs[] =
{
	&t1728____ConsoleOutput_PropertyInfo,
	&t1728____ConsoleInput_PropertyInfo,
	&t1728____ConsoleError_PropertyInfo,
	&t1728____VolumeSeparatorChar_PropertyInfo,
	&t1728____DirectorySeparatorChar_PropertyInfo,
	&t1728____AltDirectorySeparatorChar_PropertyInfo,
	&t1728____PathSeparator_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1728_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1728_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1728_0_0_0;
extern Il2CppType t1728_1_0_0;
struct t1728;
const Il2CppTypeDefinitionMetadata t1728_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1728_VT, t1728_VTIGM, NULL};
TypeInfo t1728_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoIO", "System.IO", t1728_MIs, t1728_PIs, t1728_FIs, NULL, &t1728_TI, NULL, &EmptyCustomAttributesCache, &t1728_0_0_0, &t1728_1_0_0, &t1728_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1728), sizeof (t1728), 0, -1, sizeof(t1728_SFs), 0, -1, 1048832, 0, 0, false, false, false, false, false, false, false, false, true, false, 26, 7, 2, 0, 0, 4, 0, 0};
#include "t1729.h"
// Metadata Definition System.IO.MonoIOError
extern TypeInfo t1729_TI;
#include "t1729MD.h"
static MethodInfo* t1729_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1729_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1729_TI, offsetof(t1729, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f2_FieldInfo = 
{
	"ERROR_SUCCESS", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f3_FieldInfo = 
{
	"ERROR_FILE_NOT_FOUND", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f4_FieldInfo = 
{
	"ERROR_PATH_NOT_FOUND", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f5_FieldInfo = 
{
	"ERROR_TOO_MANY_OPEN_FILES", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f6_FieldInfo = 
{
	"ERROR_ACCESS_DENIED", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f7_FieldInfo = 
{
	"ERROR_INVALID_HANDLE", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f8_FieldInfo = 
{
	"ERROR_INVALID_DRIVE", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f9_FieldInfo = 
{
	"ERROR_NOT_SAME_DEVICE", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f10_FieldInfo = 
{
	"ERROR_NO_MORE_FILES", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f11_FieldInfo = 
{
	"ERROR_WRITE_FAULT", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f12_FieldInfo = 
{
	"ERROR_READ_FAULT", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f13_FieldInfo = 
{
	"ERROR_GEN_FAILURE", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f14_FieldInfo = 
{
	"ERROR_SHARING_VIOLATION", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f15_FieldInfo = 
{
	"ERROR_LOCK_VIOLATION", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f16_FieldInfo = 
{
	"ERROR_HANDLE_DISK_FULL", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f17_FieldInfo = 
{
	"ERROR_FILE_EXISTS", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f18_FieldInfo = 
{
	"ERROR_CANNOT_MAKE", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f19_FieldInfo = 
{
	"ERROR_INVALID_PARAMETER", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f20_FieldInfo = 
{
	"ERROR_BROKEN_PIPE", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f21_FieldInfo = 
{
	"ERROR_INVALID_NAME", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f22_FieldInfo = 
{
	"ERROR_DIR_NOT_EMPTY", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f23_FieldInfo = 
{
	"ERROR_ALREADY_EXISTS", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f24_FieldInfo = 
{
	"ERROR_FILENAME_EXCED_RANGE", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1729_0_0_32854;
FieldInfo t1729_f25_FieldInfo = 
{
	"ERROR_ENCRYPTION_FAILED", &t1729_0_0_32854, &t1729_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1729_FIs[] =
{
	&t1729_f1_FieldInfo,
	&t1729_f2_FieldInfo,
	&t1729_f3_FieldInfo,
	&t1729_f4_FieldInfo,
	&t1729_f5_FieldInfo,
	&t1729_f6_FieldInfo,
	&t1729_f7_FieldInfo,
	&t1729_f8_FieldInfo,
	&t1729_f9_FieldInfo,
	&t1729_f10_FieldInfo,
	&t1729_f11_FieldInfo,
	&t1729_f12_FieldInfo,
	&t1729_f13_FieldInfo,
	&t1729_f14_FieldInfo,
	&t1729_f15_FieldInfo,
	&t1729_f16_FieldInfo,
	&t1729_f17_FieldInfo,
	&t1729_f18_FieldInfo,
	&t1729_f19_FieldInfo,
	&t1729_f20_FieldInfo,
	&t1729_f21_FieldInfo,
	&t1729_f22_FieldInfo,
	&t1729_f23_FieldInfo,
	&t1729_f24_FieldInfo,
	&t1729_f25_FieldInfo,
	NULL
};
static const int32_t t1729_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1729_f2_DefaultValue = 
{
	&t1729_f2_FieldInfo, { (char*)&t1729_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1729_f3_DefaultValue = 
{
	&t1729_f3_FieldInfo, { (char*)&t1729_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1729_f4_DefaultValue = 
{
	&t1729_f4_FieldInfo, { (char*)&t1729_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1729_f5_DefaultValue = 
{
	&t1729_f5_FieldInfo, { (char*)&t1729_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f6_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1729_f6_DefaultValue = 
{
	&t1729_f6_FieldInfo, { (char*)&t1729_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f7_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1729_f7_DefaultValue = 
{
	&t1729_f7_FieldInfo, { (char*)&t1729_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f8_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t1729_f8_DefaultValue = 
{
	&t1729_f8_FieldInfo, { (char*)&t1729_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f9_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry t1729_f9_DefaultValue = 
{
	&t1729_f9_FieldInfo, { (char*)&t1729_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f10_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry t1729_f10_DefaultValue = 
{
	&t1729_f10_FieldInfo, { (char*)&t1729_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f11_DefaultValueData = 29;
static Il2CppFieldDefaultValueEntry t1729_f11_DefaultValue = 
{
	&t1729_f11_FieldInfo, { (char*)&t1729_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f12_DefaultValueData = 30;
static Il2CppFieldDefaultValueEntry t1729_f12_DefaultValue = 
{
	&t1729_f12_FieldInfo, { (char*)&t1729_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f13_DefaultValueData = 31;
static Il2CppFieldDefaultValueEntry t1729_f13_DefaultValue = 
{
	&t1729_f13_FieldInfo, { (char*)&t1729_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f14_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1729_f14_DefaultValue = 
{
	&t1729_f14_FieldInfo, { (char*)&t1729_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f15_DefaultValueData = 33;
static Il2CppFieldDefaultValueEntry t1729_f15_DefaultValue = 
{
	&t1729_f15_FieldInfo, { (char*)&t1729_f15_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f16_DefaultValueData = 39;
static Il2CppFieldDefaultValueEntry t1729_f16_DefaultValue = 
{
	&t1729_f16_FieldInfo, { (char*)&t1729_f16_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f17_DefaultValueData = 80;
static Il2CppFieldDefaultValueEntry t1729_f17_DefaultValue = 
{
	&t1729_f17_FieldInfo, { (char*)&t1729_f17_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f18_DefaultValueData = 82;
static Il2CppFieldDefaultValueEntry t1729_f18_DefaultValue = 
{
	&t1729_f18_FieldInfo, { (char*)&t1729_f18_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f19_DefaultValueData = 87;
static Il2CppFieldDefaultValueEntry t1729_f19_DefaultValue = 
{
	&t1729_f19_FieldInfo, { (char*)&t1729_f19_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f20_DefaultValueData = 109;
static Il2CppFieldDefaultValueEntry t1729_f20_DefaultValue = 
{
	&t1729_f20_FieldInfo, { (char*)&t1729_f20_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f21_DefaultValueData = 123;
static Il2CppFieldDefaultValueEntry t1729_f21_DefaultValue = 
{
	&t1729_f21_FieldInfo, { (char*)&t1729_f21_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f22_DefaultValueData = 145;
static Il2CppFieldDefaultValueEntry t1729_f22_DefaultValue = 
{
	&t1729_f22_FieldInfo, { (char*)&t1729_f22_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f23_DefaultValueData = 183;
static Il2CppFieldDefaultValueEntry t1729_f23_DefaultValue = 
{
	&t1729_f23_FieldInfo, { (char*)&t1729_f23_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f24_DefaultValueData = 206;
static Il2CppFieldDefaultValueEntry t1729_f24_DefaultValue = 
{
	&t1729_f24_FieldInfo, { (char*)&t1729_f24_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1729_f25_DefaultValueData = 6000;
static Il2CppFieldDefaultValueEntry t1729_f25_DefaultValue = 
{
	&t1729_f25_FieldInfo, { (char*)&t1729_f25_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1729_FDVs[] = 
{
	&t1729_f2_DefaultValue,
	&t1729_f3_DefaultValue,
	&t1729_f4_DefaultValue,
	&t1729_f5_DefaultValue,
	&t1729_f6_DefaultValue,
	&t1729_f7_DefaultValue,
	&t1729_f8_DefaultValue,
	&t1729_f9_DefaultValue,
	&t1729_f10_DefaultValue,
	&t1729_f11_DefaultValue,
	&t1729_f12_DefaultValue,
	&t1729_f13_DefaultValue,
	&t1729_f14_DefaultValue,
	&t1729_f15_DefaultValue,
	&t1729_f16_DefaultValue,
	&t1729_f17_DefaultValue,
	&t1729_f18_DefaultValue,
	&t1729_f19_DefaultValue,
	&t1729_f20_DefaultValue,
	&t1729_f21_DefaultValue,
	&t1729_f22_DefaultValue,
	&t1729_f23_DefaultValue,
	&t1729_f24_DefaultValue,
	&t1729_f25_DefaultValue,
	NULL
};
static Il2CppMethodReference t1729_VT[] =
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
static bool t1729_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1729_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
const Il2CppTypeDefinitionMetadata t1729_DM = 
{
	NULL, NULL, NULL, t1729_IOs, &t8_0_0_0, t1729_VT, t1729_VTIGM, NULL};
TypeInfo t1729_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoIOError", "System.IO", t1729_MIs, NULL, t1729_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t1729_0_0_0, &t1729_1_0_0, &t1729_DM, NULL, NULL, NULL, t1729_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1729)+ sizeof (Il2CppObject), sizeof (t1729)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 25, 0, 0, 23, 0, 3};
#include "t1726.h"
// Metadata Definition System.IO.MonoIOStat
extern TypeInfo t1726_TI;
#include "t1726MD.h"
static MethodInfo* t1726_MIs[] =
{
	NULL
};
extern Il2CppType t2_0_0_6;
FieldInfo t1726_f0_FieldInfo = 
{
	"Name", &t2_0_0_6, &t1726_TI, offsetof(t1726, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_6;
FieldInfo t1726_f1_FieldInfo = 
{
	"Attributes", &t1715_0_0_6, &t1726_TI, offsetof(t1726, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t299_0_0_6;
FieldInfo t1726_f2_FieldInfo = 
{
	"Length", &t299_0_0_6, &t1726_TI, offsetof(t1726, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t299_0_0_6;
FieldInfo t1726_f3_FieldInfo = 
{
	"CreationTime", &t299_0_0_6, &t1726_TI, offsetof(t1726, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t299_0_0_6;
FieldInfo t1726_f4_FieldInfo = 
{
	"LastAccessTime", &t299_0_0_6, &t1726_TI, offsetof(t1726, f4) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t299_0_0_6;
FieldInfo t1726_f5_FieldInfo = 
{
	"LastWriteTime", &t299_0_0_6, &t1726_TI, offsetof(t1726, f5) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1726_FIs[] =
{
	&t1726_f0_FieldInfo,
	&t1726_f1_FieldInfo,
	&t1726_f2_FieldInfo,
	&t1726_f3_FieldInfo,
	&t1726_f4_FieldInfo,
	&t1726_f5_FieldInfo,
	NULL
};
static Il2CppMethodReference t1726_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1726_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1726_0_0_0;
const Il2CppTypeDefinitionMetadata t1726_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1726_VT, t1726_VTIGM, NULL};
TypeInfo t1726_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoIOStat", "System.IO", t1726_MIs, NULL, t1726_FIs, NULL, &t1726_TI, NULL, &EmptyCustomAttributesCache, &t1726_0_0_0, &t1726_1_0_0, &t1726_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t1726_marshal, (methodPointerType)t1726_marshal_back, (methodPointerType)t1726_marshal_cleanup, sizeof (t1726)+ sizeof (Il2CppObject), sizeof (t1726)+ sizeof (Il2CppObject), 0, sizeof(t1726_marshaled), 0, 0, -1, 1048840, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 4, 0, 0};
#include "t300.h"
// Metadata Definition System.IO.Path
extern TypeInfo t300_TI;
#include "t300MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8948_MI = 
{
	".cctor", (methodPointerType)&m8948, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2718, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t300_m1091_ParameterInfos[] = 
{
	{"path1", 0, 134221232, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"path2", 1, 134221233, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1091_MI = 
{
	"Combine", (methodPointerType)&m1091, &t300_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t9, t300_m1091_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2719, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t300_m8949_ParameterInfos[] = 
{
	{"s", 0, 134221234, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8949_MI = 
{
	"CleanPath", (methodPointerType)&m8949, &t300_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t300_m8949_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 2720, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t300_m8950_ParameterInfos[] = 
{
	{"path", 0, 134221235, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8950_MI = 
{
	"GetDirectoryName", (methodPointerType)&m8950, &t300_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t300_m8950_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2721, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t300_m8951_ParameterInfos[] = 
{
	{"path", 0, 134221236, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8951_MI = 
{
	"GetExtension", (methodPointerType)&m8951, &t300_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t300_m8951_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2722, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t300_m8952_ParameterInfos[] = 
{
	{"path", 0, 134221237, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8952_MI = 
{
	"GetFileName", (methodPointerType)&m8952, &t300_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t300_m8952_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2723, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t300_m8953_ParameterInfos[] = 
{
	{"path", 0, 134221238, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8953_MI = 
{
	"GetFullPath", (methodPointerType)&m8953, &t300_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t300_m8953_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2724, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t300_m8954_ParameterInfos[] = 
{
	{"path", 0, 134221239, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8954_MI = 
{
	"WindowsDriveAdjustment", (methodPointerType)&m8954, &t300_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t300_m8954_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 2725, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t300_m8955_ParameterInfos[] = 
{
	{"path", 0, 134221240, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8955_MI = 
{
	"InsecureGetFullPath", (methodPointerType)&m8955, &t300_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t300_m8955_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 2726, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t300_m8956_ParameterInfos[] = 
{
	{"c", 0, 134221241, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m8956_MI = 
{
	"IsDsc", (methodPointerType)&m8956, &t300_TI, &t124_0_0_0, RuntimeInvoker_t124_t334, t300_m8956_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2727, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t300_m8957_ParameterInfos[] = 
{
	{"path", 0, 134221242, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8957_MI = 
{
	"GetPathRoot", (methodPointerType)&m8957, &t300_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t300_m8957_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2728, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t300_m8958_ParameterInfos[] = 
{
	{"path", 0, 134221243, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8958_MI = 
{
	"IsPathRooted", (methodPointerType)&m8958, &t300_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t300_m8958_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2729, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8959_MI = 
{
	"GetInvalidPathChars", (methodPointerType)&m8959, &t300_TI, &t312_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 2730, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t300_m8960_ParameterInfos[] = 
{
	{"path", 0, 134221244, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8960_MI = 
{
	"findExtension", (methodPointerType)&m8960, &t300_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t300_m8960_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2731, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t300_m8961_ParameterInfos[] = 
{
	{"path", 0, 134221245, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8961_MI = 
{
	"GetServerAndShare", (methodPointerType)&m8961, &t300_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t300_m8961_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2732, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t300_m8962_ParameterInfos[] = 
{
	{"root", 0, 134221246, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"path", 1, 134221247, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8962_MI = 
{
	"SameRoot", (methodPointerType)&m8962, &t300_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t300_m8962_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 2733, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t300_m8963_ParameterInfos[] = 
{
	{"path", 0, 134221248, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8963_MI = 
{
	"CanonicalizePath", (methodPointerType)&m8963, &t300_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t300_m8963_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2734, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t300_MIs[] =
{
	&m8948_MI,
	&m1091_MI,
	&m8949_MI,
	&m8950_MI,
	&m8951_MI,
	&m8952_MI,
	&m8953_MI,
	&m8954_MI,
	&m8955_MI,
	&m8956_MI,
	&m8957_MI,
	&m8958_MI,
	&m8959_MI,
	&m8960_MI,
	&m8961_MI,
	&m8962_MI,
	&m8963_MI,
	NULL
};
extern Il2CppType t312_0_0_54;
extern CustomAttributesCache t300__CustomAttributeCache_InvalidPathChars;
FieldInfo t300_f0_FieldInfo = 
{
	"InvalidPathChars", &t312_0_0_54, &t300_TI, offsetof(t300_SFs, f0), &t300__CustomAttributeCache_InvalidPathChars};
extern Il2CppType t303_0_0_54;
FieldInfo t300_f1_FieldInfo = 
{
	"AltDirectorySeparatorChar", &t303_0_0_54, &t300_TI, offsetof(t300_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_54;
FieldInfo t300_f2_FieldInfo = 
{
	"DirectorySeparatorChar", &t303_0_0_54, &t300_TI, offsetof(t300_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_54;
FieldInfo t300_f3_FieldInfo = 
{
	"PathSeparator", &t303_0_0_54, &t300_TI, offsetof(t300_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_51;
FieldInfo t300_f4_FieldInfo = 
{
	"DirectorySeparatorStr", &t2_0_0_51, &t300_TI, offsetof(t300_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_54;
FieldInfo t300_f5_FieldInfo = 
{
	"VolumeSeparatorChar", &t303_0_0_54, &t300_TI, offsetof(t300_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t312_0_0_51;
FieldInfo t300_f6_FieldInfo = 
{
	"PathSeparatorChars", &t312_0_0_51, &t300_TI, offsetof(t300_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_49;
FieldInfo t300_f7_FieldInfo = 
{
	"dirEqualsVolume", &t124_0_0_49, &t300_TI, offsetof(t300_SFs, f7), &EmptyCustomAttributesCache};
static FieldInfo* t300_FIs[] =
{
	&t300_f0_FieldInfo,
	&t300_f1_FieldInfo,
	&t300_f2_FieldInfo,
	&t300_f3_FieldInfo,
	&t300_f4_FieldInfo,
	&t300_f5_FieldInfo,
	&t300_f6_FieldInfo,
	&t300_f7_FieldInfo,
	NULL
};
static Il2CppMethodReference t300_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t300_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t300_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t300_CustomAttributesCacheGenerator_InvalidPathChars(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m2994(tmp, il2cpp_codegen_string_new_wrapper("see GetInvalidPathChars and GetInvalidFileNameChars methods."), &m2994_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t300__CustomAttributeCache = {
1,
NULL,
&t300_CustomAttributesCacheGenerator
};
CustomAttributesCache t300__CustomAttributeCache_InvalidPathChars = {
1,
NULL,
&t300_CustomAttributesCacheGenerator_InvalidPathChars
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t300_0_0_0;
extern Il2CppType t300_1_0_0;
struct t300;
extern CustomAttributesCache t300__CustomAttributeCache;
extern CustomAttributesCache t300__CustomAttributeCache_InvalidPathChars;
const Il2CppTypeDefinitionMetadata t300_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t300_VT, t300_VTIGM, NULL};
TypeInfo t300_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Path", "System.IO", t300_MIs, NULL, t300_FIs, NULL, &t300_TI, NULL, &t300__CustomAttributeCache, &t300_0_0_0, &t300_1_0_0, &t300_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t300), sizeof (t300), 0, -1, sizeof(t300_SFs), 0, -1, 385, 0, 0, false, false, false, false, false, false, false, false, true, false, 17, 0, 8, 0, 0, 4, 0, 0};
#include "t1730.h"
// Metadata Definition System.IO.PathTooLongException
extern TypeInfo t1730_TI;
#include "t1730MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8964_MI = 
{
	".ctor", (methodPointerType)&m8964, &t1730_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2735, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1730_m8965_ParameterInfos[] = 
{
	{"message", 0, 134221249, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8965_MI = 
{
	".ctor", (methodPointerType)&m8965, &t1730_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1730_m8965_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2736, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1730_m8966_ParameterInfos[] = 
{
	{"info", 0, 134221250, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134221251, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m8966_MI = 
{
	".ctor", (methodPointerType)&m8966, &t1730_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1730_m8966_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2737, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1730_MIs[] =
{
	&m8964_MI,
	&m8965_MI,
	&m8966_MI,
	NULL
};
static Il2CppMethodReference t1730_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4496_MI,
	&m4497_MI,
	&m4243_MI,
	&m1098_MI,
	&m4498_MI,
	&m4441_MI,
	&m4497_MI,
	&m4442_MI,
};
static bool t1730_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1730_IOs[] = 
{
	{ &t623_0_0_0, 4},
	{ &t948_0_0_0, 5},
};
void t1730_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1730__CustomAttributeCache = {
1,
NULL,
&t1730_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1730_0_0_0;
extern Il2CppType t1730_1_0_0;
struct t1730;
extern CustomAttributesCache t1730__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1730_DM = 
{
	NULL, NULL, NULL, t1730_IOs, &t1549_0_0_0, t1730_VT, t1730_VTIGM, NULL};
TypeInfo t1730_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PathTooLongException", "System.IO", t1730_MIs, NULL, NULL, NULL, &t1730_TI, NULL, &t1730__CustomAttributeCache, &t1730_0_0_0, &t1730_1_0_0, &t1730_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1730), sizeof (t1730), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1731.h"
// Metadata Definition System.IO.SearchPattern
extern TypeInfo t1731_TI;
#include "t1731MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8967_MI = 
{
	".cctor", (methodPointerType)&m8967, &t1731_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2738, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1731_MIs[] =
{
	&m8967_MI,
	NULL
};
extern Il2CppType t312_0_0_51;
FieldInfo t1731_f0_FieldInfo = 
{
	"WildcardChars", &t312_0_0_51, &t1731_TI, offsetof(t1731_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t312_0_0_51;
FieldInfo t1731_f1_FieldInfo = 
{
	"InvalidChars", &t312_0_0_51, &t1731_TI, offsetof(t1731_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1731_FIs[] =
{
	&t1731_f0_FieldInfo,
	&t1731_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1731_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1731_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1731_0_0_0;
extern Il2CppType t1731_1_0_0;
struct t1731;
const Il2CppTypeDefinitionMetadata t1731_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1731_VT, t1731_VTIGM, NULL};
TypeInfo t1731_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SearchPattern", "System.IO", t1731_MIs, NULL, t1731_FIs, NULL, &t1731_TI, NULL, &EmptyCustomAttributesCache, &t1731_0_0_0, &t1731_1_0_0, &t1731_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1731), sizeof (t1731), 0, -1, sizeof(t1731_SFs), 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, true, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t1499.h"
// Metadata Definition System.IO.SeekOrigin
extern TypeInfo t1499_TI;
#include "t1499MD.h"
static MethodInfo* t1499_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1499_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1499_TI, offsetof(t1499, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1499_0_0_32854;
FieldInfo t1499_f2_FieldInfo = 
{
	"Begin", &t1499_0_0_32854, &t1499_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1499_0_0_32854;
FieldInfo t1499_f3_FieldInfo = 
{
	"Current", &t1499_0_0_32854, &t1499_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1499_0_0_32854;
FieldInfo t1499_f4_FieldInfo = 
{
	"End", &t1499_0_0_32854, &t1499_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1499_FIs[] =
{
	&t1499_f1_FieldInfo,
	&t1499_f2_FieldInfo,
	&t1499_f3_FieldInfo,
	&t1499_f4_FieldInfo,
	NULL
};
static const int32_t t1499_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1499_f2_DefaultValue = 
{
	&t1499_f2_FieldInfo, { (char*)&t1499_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1499_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1499_f3_DefaultValue = 
{
	&t1499_f3_FieldInfo, { (char*)&t1499_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1499_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1499_f4_DefaultValue = 
{
	&t1499_f4_FieldInfo, { (char*)&t1499_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1499_FDVs[] = 
{
	&t1499_f2_DefaultValue,
	&t1499_f3_DefaultValue,
	&t1499_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t1499_VT[] =
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
static bool t1499_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1499_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1499_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1499__CustomAttributeCache = {
1,
NULL,
&t1499_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1499_1_0_0;
extern CustomAttributesCache t1499__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1499_DM = 
{
	NULL, NULL, NULL, t1499_IOs, &t8_0_0_0, t1499_VT, t1499_VTIGM, NULL};
TypeInfo t1499_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SeekOrigin", "System.IO", t1499_MIs, NULL, t1499_FIs, NULL, &t125_TI, NULL, &t1499__CustomAttributeCache, &t1499_0_0_0, &t1499_1_0_0, &t1499_DM, NULL, NULL, NULL, t1499_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1499)+ sizeof (Il2CppObject), sizeof (t1499)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t298.h"
// Metadata Definition System.IO.Stream
extern TypeInfo t298_TI;
#include "t298MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7010_MI = 
{
	".ctor", (methodPointerType)&m7010, &t298_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2739, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8968_MI = 
{
	".cctor", (methodPointerType)&m8968, &t298_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2740, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m7007_MI = 
{
	"get_CanRead", NULL, &t298_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 5, 0, false, false, 2741, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m6990_MI = 
{
	"get_CanSeek", NULL, &t298_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 6, 0, false, false, 2742, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m7008_MI = 
{
	"get_CanWrite", NULL, &t298_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 7, 0, false, false, 2743, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m6996_MI = 
{
	"get_Length", NULL, &t298_TI, &t299_0_0_0, RuntimeInvoker_t299, NULL, &EmptyCustomAttributesCache, 3526, 0, 8, 0, false, false, 2744, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m12009_MI = 
{
	"get_Position", NULL, &t298_TI, &t299_0_0_0, RuntimeInvoker_t299, NULL, &EmptyCustomAttributesCache, 3526, 0, 9, 0, false, false, 2745, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t298_m12774_ParameterInfos[] = 
{
	{"value", 0, 134221252, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m12774_MI = 
{
	"set_Position", NULL, &t298_TI, &t122_0_0_0, RuntimeInvoker_t122_t299, t298_m12774_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 10, 1, false, false, 2746, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7056_MI = 
{
	"Dispose", (methodPointerType)&m7056, &t298_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 486, 0, 4, 0, false, false, 2747, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t298_m7027_ParameterInfos[] = 
{
	{"disposing", 0, 134221253, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m7027_MI = 
{
	"Dispose", (methodPointerType)&m7027, &t298_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t298_m7027_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 11, 1, false, false, 2748, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m1096_MI = 
{
	"Close", (methodPointerType)&m1096, &t298_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 12, 0, false, false, 2749, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7026_MI = 
{
	"Flush", NULL, &t298_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 1478, 0, 13, 0, false, false, 2750, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t298_m6997_ParameterInfos[] = 
{
	{"buffer", 0, 134221254, &EmptyCustomAttributesCache, &t730_0_0_3},
	{"offset", 1, 134221255, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221256, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6997_MI = 
{
	"Read", NULL, &t298_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t298_m6997_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 14, 3, false, false, 2751, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6995_MI = 
{
	"ReadByte", (methodPointerType)&m6995, &t298_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 15, 0, false, false, 2752, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern Il2CppType t1499_0_0_0;
static ParameterInfo t298_m12775_ParameterInfos[] = 
{
	{"offset", 0, 134221257, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"origin", 1, 134221258, &EmptyCustomAttributesCache, &t1499_0_0_0},
};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299_t299_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12775_MI = 
{
	"Seek", NULL, &t298_TI, &t299_0_0_0, RuntimeInvoker_t299_t299_t125, t298_m12775_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 16, 2, false, false, 2753, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t298_m6991_ParameterInfos[] = 
{
	{"value", 0, 134221259, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m6991_MI = 
{
	"SetLength", NULL, &t298_TI, &t122_0_0_0, RuntimeInvoker_t122_t299, t298_m6991_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 17, 1, false, false, 2754, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t298_m6981_ParameterInfos[] = 
{
	{"buffer", 0, 134221260, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134221261, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221262, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6981_MI = 
{
	"Write", NULL, &t298_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t298_m6981_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 18, 3, false, false, 2755, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t575_0_0_0;
static ParameterInfo t298_m6972_ParameterInfos[] = 
{
	{"value", 0, 134221263, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m6972_MI = 
{
	"WriteByte", (methodPointerType)&m6972, &t298_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t298_m6972_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 19, 1, false, false, 2756, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t470_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t298_m6987_ParameterInfos[] = 
{
	{"buffer", 0, 134221264, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134221265, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221266, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"callback", 3, 134221267, &EmptyCustomAttributesCache, &t470_0_0_0},
	{"state", 4, 134221268, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t469_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6987_MI = 
{
	"BeginRead", (methodPointerType)&m6987, &t298_TI, &t469_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t298_m6987_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 20, 5, false, false, 2757, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t470_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t298_m6998_ParameterInfos[] = 
{
	{"buffer", 0, 134221269, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134221270, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221271, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"callback", 3, 134221272, &EmptyCustomAttributesCache, &t470_0_0_0},
	{"state", 4, 134221273, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t469_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6998_MI = 
{
	"BeginWrite", (methodPointerType)&m6998, &t298_TI, &t469_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t298_m6998_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 21, 5, false, false, 2758, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t469_0_0_0;
static ParameterInfo t298_m6989_ParameterInfos[] = 
{
	{"asyncResult", 0, 134221274, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6989_MI = 
{
	"EndRead", (methodPointerType)&m6989, &t298_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t298_m6989_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 22, 1, false, false, 2759, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t469_0_0_0;
static ParameterInfo t298_m6999_ParameterInfos[] = 
{
	{"asyncResult", 0, 134221275, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6999_MI = 
{
	"EndWrite", (methodPointerType)&m6999, &t298_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t298_m6999_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 23, 1, false, false, 2760, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t298_MIs[] =
{
	&m7010_MI,
	&m8968_MI,
	&m7007_MI,
	&m6990_MI,
	&m7008_MI,
	&m6996_MI,
	&m12009_MI,
	&m12774_MI,
	&m7056_MI,
	&m7027_MI,
	&m1096_MI,
	&m7026_MI,
	&m6997_MI,
	&m6995_MI,
	&m12775_MI,
	&m6991_MI,
	&m6981_MI,
	&m6972_MI,
	&m6987_MI,
	&m6998_MI,
	&m6989_MI,
	&m6999_MI,
	NULL
};
extern Il2CppType t298_0_0_54;
FieldInfo t298_f0_FieldInfo = 
{
	"Null", &t298_0_0_54, &t298_TI, offsetof(t298_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t298_FIs[] =
{
	&t298_f0_FieldInfo,
	NULL
};
extern MethodInfo m7007_MI;
static PropertyInfo t298____CanRead_PropertyInfo = 
{
	&t298_TI, "CanRead", &m7007_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6990_MI;
static PropertyInfo t298____CanSeek_PropertyInfo = 
{
	&t298_TI, "CanSeek", &m6990_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7008_MI;
static PropertyInfo t298____CanWrite_PropertyInfo = 
{
	&t298_TI, "CanWrite", &m7008_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6996_MI;
static PropertyInfo t298____Length_PropertyInfo = 
{
	&t298_TI, "Length", &m6996_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12009_MI;
extern MethodInfo m12774_MI;
static PropertyInfo t298____Position_PropertyInfo = 
{
	&t298_TI, "Position", &m12009_MI, &m12774_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t298_PIs[] =
{
	&t298____CanRead_PropertyInfo,
	&t298____CanSeek_PropertyInfo,
	&t298____CanWrite_PropertyInfo,
	&t298____Length_PropertyInfo,
	&t298____Position_PropertyInfo,
	NULL
};
extern MethodInfo m7027_MI;
extern MethodInfo m6995_MI;
extern MethodInfo m6972_MI;
static Il2CppMethodReference t298_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7056_MI,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&m7027_MI,
	&m1096_MI,
	NULL,
	NULL,
	&m6995_MI,
	NULL,
	NULL,
	NULL,
	&m6972_MI,
	&m6987_MI,
	&m6998_MI,
	&m6989_MI,
	&m6999_MI,
};
static bool t298_VTIGM[] =
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
};
static const Il2CppType* t298_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t298_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t298_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t298__CustomAttributeCache = {
1,
NULL,
&t298_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t298_1_0_0;
struct t298;
extern CustomAttributesCache t298__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t298_DM = 
{
	NULL, NULL, t298_ITIs, t298_IOs, &t9_0_0_0, t298_VT, t298_VTIGM, NULL};
TypeInfo t298_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Stream", "System.IO", t298_MIs, t298_PIs, t298_FIs, NULL, &t298_TI, NULL, &t298__CustomAttributeCache, &t298_0_0_0, &t298_1_0_0, &t298_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t298), sizeof (t298), 0, -1, sizeof(t298_SFs), 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, true, false, 22, 5, 1, 0, 0, 24, 1, 1};
#include "t1732.h"
// Metadata Definition System.IO.NullStream
extern TypeInfo t1732_TI;
#include "t1732MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8969_MI = 
{
	".ctor", (methodPointerType)&m8969, &t1732_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2761, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8970_MI = 
{
	"get_CanRead", (methodPointerType)&m8970, &t1732_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 5, 0, false, false, 2762, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8971_MI = 
{
	"get_CanSeek", (methodPointerType)&m8971, &t1732_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2763, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8972_MI = 
{
	"get_CanWrite", (methodPointerType)&m8972, &t1732_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 2764, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m8973_MI = 
{
	"get_Length", (methodPointerType)&m8973, &t1732_TI, &t299_0_0_0, RuntimeInvoker_t299, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2765, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m8974_MI = 
{
	"get_Position", (methodPointerType)&m8974, &t1732_TI, &t299_0_0_0, RuntimeInvoker_t299, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2766, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t1732_m8975_ParameterInfos[] = 
{
	{"value", 0, 134221276, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m8975_MI = 
{
	"set_Position", (methodPointerType)&m8975, &t1732_TI, &t122_0_0_0, RuntimeInvoker_t122_t299, t1732_m8975_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 10, 1, false, false, 2767, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8976_MI = 
{
	"Flush", (methodPointerType)&m8976, &t1732_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 2768, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1732_m8977_ParameterInfos[] = 
{
	{"buffer", 0, 134221277, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134221278, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221279, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8977_MI = 
{
	"Read", (methodPointerType)&m8977, &t1732_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1732_m8977_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 14, 3, false, false, 2769, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8978_MI = 
{
	"ReadByte", (methodPointerType)&m8978, &t1732_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 15, 0, false, false, 2770, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern Il2CppType t1499_0_0_0;
static ParameterInfo t1732_m8979_ParameterInfos[] = 
{
	{"offset", 0, 134221280, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"origin", 1, 134221281, &EmptyCustomAttributesCache, &t1499_0_0_0},
};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299_t299_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8979_MI = 
{
	"Seek", (methodPointerType)&m8979, &t1732_TI, &t299_0_0_0, RuntimeInvoker_t299_t299_t125, t1732_m8979_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 2, false, false, 2771, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t1732_m8980_ParameterInfos[] = 
{
	{"value", 0, 134221282, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m8980_MI = 
{
	"SetLength", (methodPointerType)&m8980, &t1732_TI, &t122_0_0_0, RuntimeInvoker_t122_t299, t1732_m8980_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 2772, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1732_m8981_ParameterInfos[] = 
{
	{"buffer", 0, 134221283, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"offset", 1, 134221284, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221285, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8981_MI = 
{
	"Write", (methodPointerType)&m8981, &t1732_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1732_m8981_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 18, 3, false, false, 2773, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t575_0_0_0;
static ParameterInfo t1732_m8982_ParameterInfos[] = 
{
	{"value", 0, 134221286, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8982_MI = 
{
	"WriteByte", (methodPointerType)&m8982, &t1732_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1732_m8982_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 19, 1, false, false, 2774, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1732_MIs[] =
{
	&m8969_MI,
	&m8970_MI,
	&m8971_MI,
	&m8972_MI,
	&m8973_MI,
	&m8974_MI,
	&m8975_MI,
	&m8976_MI,
	&m8977_MI,
	&m8978_MI,
	&m8979_MI,
	&m8980_MI,
	&m8981_MI,
	&m8982_MI,
	NULL
};
extern MethodInfo m8970_MI;
static PropertyInfo t1732____CanRead_PropertyInfo = 
{
	&t1732_TI, "CanRead", &m8970_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8971_MI;
static PropertyInfo t1732____CanSeek_PropertyInfo = 
{
	&t1732_TI, "CanSeek", &m8971_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8972_MI;
static PropertyInfo t1732____CanWrite_PropertyInfo = 
{
	&t1732_TI, "CanWrite", &m8972_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8973_MI;
static PropertyInfo t1732____Length_PropertyInfo = 
{
	&t1732_TI, "Length", &m8973_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8974_MI;
extern MethodInfo m8975_MI;
static PropertyInfo t1732____Position_PropertyInfo = 
{
	&t1732_TI, "Position", &m8974_MI, &m8975_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1732_PIs[] =
{
	&t1732____CanRead_PropertyInfo,
	&t1732____CanSeek_PropertyInfo,
	&t1732____CanWrite_PropertyInfo,
	&t1732____Length_PropertyInfo,
	&t1732____Position_PropertyInfo,
	NULL
};
extern MethodInfo m8976_MI;
extern MethodInfo m8977_MI;
extern MethodInfo m8978_MI;
extern MethodInfo m8979_MI;
extern MethodInfo m8980_MI;
extern MethodInfo m8981_MI;
extern MethodInfo m8982_MI;
static Il2CppMethodReference t1732_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7056_MI,
	&m8970_MI,
	&m8971_MI,
	&m8972_MI,
	&m8973_MI,
	&m8974_MI,
	&m8975_MI,
	&m7027_MI,
	&m1096_MI,
	&m8976_MI,
	&m8977_MI,
	&m8978_MI,
	&m8979_MI,
	&m8980_MI,
	&m8981_MI,
	&m8982_MI,
	&m6987_MI,
	&m6998_MI,
	&m6989_MI,
	&m6999_MI,
};
static bool t1732_VTIGM[] =
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
};
static Il2CppInterfaceOffsetPair t1732_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1732_0_0_0;
extern Il2CppType t1732_1_0_0;
struct t1732;
const Il2CppTypeDefinitionMetadata t1732_DM = 
{
	NULL, NULL, NULL, t1732_IOs, &t298_0_0_0, t1732_VT, t1732_VTIGM, NULL};
TypeInfo t1732_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NullStream", "System.IO", t1732_MIs, t1732_PIs, NULL, NULL, &t1732_TI, NULL, &EmptyCustomAttributesCache, &t1732_0_0_0, &t1732_1_0_0, &t1732_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1732), sizeof (t1732), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 14, 5, 0, 0, 0, 24, 0, 1};
#include "t1733.h"
// Metadata Definition System.IO.StreamAsyncResult
extern TypeInfo t1733_TI;
#include "t1733MD.h"
extern Il2CppType t9_0_0_0;
static ParameterInfo t1733_m8983_ParameterInfos[] = 
{
	{"state", 0, 134221287, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8983_MI = 
{
	".ctor", (methodPointerType)&m8983, &t1733_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1733_m8983_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2775, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
static ParameterInfo t1733_m8984_ParameterInfos[] = 
{
	{"e", 0, 134221288, &EmptyCustomAttributesCache, &t138_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8984_MI = 
{
	"SetComplete", (methodPointerType)&m8984, &t1733_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1733_m8984_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2776, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1733_m8985_ParameterInfos[] = 
{
	{"e", 0, 134221289, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"nbytes", 1, 134221290, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8985_MI = 
{
	"SetComplete", (methodPointerType)&m8985, &t1733_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1733_m8985_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 2777, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8986_MI = 
{
	"get_AsyncState", (methodPointerType)&m8986, &t1733_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 2778, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1486_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8987_MI = 
{
	"get_AsyncWaitHandle", (methodPointerType)&m8987, &t1733_TI, &t1486_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 2779, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8988_MI = 
{
	"get_IsCompleted", (methodPointerType)&m8988, &t1733_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 2780, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8989_MI = 
{
	"get_Exception", (methodPointerType)&m8989, &t1733_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2781, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8990_MI = 
{
	"get_NBytes", (methodPointerType)&m8990, &t1733_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2782, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8991_MI = 
{
	"get_Done", (methodPointerType)&m8991, &t1733_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2783, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1733_m8992_ParameterInfos[] = 
{
	{"value", 0, 134221291, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8992_MI = 
{
	"set_Done", (methodPointerType)&m8992, &t1733_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1733_m8992_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 2784, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1733_MIs[] =
{
	&m8983_MI,
	&m8984_MI,
	&m8985_MI,
	&m8986_MI,
	&m8987_MI,
	&m8988_MI,
	&m8989_MI,
	&m8990_MI,
	&m8991_MI,
	&m8992_MI,
	NULL
};
extern Il2CppType t9_0_0_1;
FieldInfo t1733_f0_FieldInfo = 
{
	"state", &t9_0_0_1, &t1733_TI, offsetof(t1733, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1733_f1_FieldInfo = 
{
	"completed", &t124_0_0_1, &t1733_TI, offsetof(t1733, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1733_f2_FieldInfo = 
{
	"done", &t124_0_0_1, &t1733_TI, offsetof(t1733, f2), &EmptyCustomAttributesCache};
extern Il2CppType t138_0_0_1;
FieldInfo t1733_f3_FieldInfo = 
{
	"exc", &t138_0_0_1, &t1733_TI, offsetof(t1733, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1733_f4_FieldInfo = 
{
	"nbytes", &t125_0_0_1, &t1733_TI, offsetof(t1733, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1485_0_0_1;
FieldInfo t1733_f5_FieldInfo = 
{
	"wh", &t1485_0_0_1, &t1733_TI, offsetof(t1733, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1733_FIs[] =
{
	&t1733_f0_FieldInfo,
	&t1733_f1_FieldInfo,
	&t1733_f2_FieldInfo,
	&t1733_f3_FieldInfo,
	&t1733_f4_FieldInfo,
	&t1733_f5_FieldInfo,
	NULL
};
extern MethodInfo m8986_MI;
static PropertyInfo t1733____AsyncState_PropertyInfo = 
{
	&t1733_TI, "AsyncState", &m8986_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8987_MI;
static PropertyInfo t1733____AsyncWaitHandle_PropertyInfo = 
{
	&t1733_TI, "AsyncWaitHandle", &m8987_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8988_MI;
static PropertyInfo t1733____IsCompleted_PropertyInfo = 
{
	&t1733_TI, "IsCompleted", &m8988_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8989_MI;
static PropertyInfo t1733____Exception_PropertyInfo = 
{
	&t1733_TI, "Exception", &m8989_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8990_MI;
static PropertyInfo t1733____NBytes_PropertyInfo = 
{
	&t1733_TI, "NBytes", &m8990_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8991_MI;
extern MethodInfo m8992_MI;
static PropertyInfo t1733____Done_PropertyInfo = 
{
	&t1733_TI, "Done", &m8991_MI, &m8992_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1733_PIs[] =
{
	&t1733____AsyncState_PropertyInfo,
	&t1733____AsyncWaitHandle_PropertyInfo,
	&t1733____IsCompleted_PropertyInfo,
	&t1733____Exception_PropertyInfo,
	&t1733____NBytes_PropertyInfo,
	&t1733____Done_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1733_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8986_MI,
	&m8987_MI,
	&m8988_MI,
};
static bool t1733_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1733_ITIs[] = 
{
	&t469_0_0_0,
};
static Il2CppInterfaceOffsetPair t1733_IOs[] = 
{
	{ &t469_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1733_0_0_0;
extern Il2CppType t1733_1_0_0;
struct t1733;
const Il2CppTypeDefinitionMetadata t1733_DM = 
{
	NULL, NULL, t1733_ITIs, t1733_IOs, &t9_0_0_0, t1733_VT, t1733_VTIGM, NULL};
TypeInfo t1733_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamAsyncResult", "System.IO", t1733_MIs, t1733_PIs, t1733_FIs, NULL, &t1733_TI, NULL, &EmptyCustomAttributesCache, &t1733_0_0_0, &t1733_1_0_0, &t1733_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1733), sizeof (t1733), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 6, 6, 0, 0, 7, 1, 1};
#include "t1734.h"
// Metadata Definition System.IO.StreamReader/NullStreamReader
extern TypeInfo t1734_TI;
#include "t1734MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8993_MI = 
{
	".ctor", (methodPointerType)&m8993, &t1734_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2801, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8994_MI = 
{
	"Peek", (methodPointerType)&m8994, &t1734_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 2802, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8995_MI = 
{
	"Read", (methodPointerType)&m8995, &t1734_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2803, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1734_m8996_ParameterInfos[] = 
{
	{"buffer", 0, 134221312, &EmptyCustomAttributesCache, &t312_0_0_3},
	{"index", 1, 134221313, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221314, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8996_MI = 
{
	"Read", (methodPointerType)&m8996, &t1734_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1734_m8996_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 3, false, false, 2804, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8997_MI = 
{
	"ReadLine", (methodPointerType)&m8997, &t1734_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2805, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8998_MI = 
{
	"ReadToEnd", (methodPointerType)&m8998, &t1734_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 10, 0, false, false, 2806, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1734_MIs[] =
{
	&m8993_MI,
	&m8994_MI,
	&m8995_MI,
	&m8996_MI,
	&m8997_MI,
	&m8998_MI,
	NULL
};
extern MethodInfo m9042_MI;
extern MethodInfo m9006_MI;
extern MethodInfo m8994_MI;
extern MethodInfo m8995_MI;
extern MethodInfo m8996_MI;
extern MethodInfo m8997_MI;
extern MethodInfo m8998_MI;
static Il2CppMethodReference t1734_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9042_MI,
	&m9006_MI,
	&m8994_MI,
	&m8995_MI,
	&m8996_MI,
	&m8997_MI,
	&m8998_MI,
};
static bool t1734_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1734_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1734_0_0_0;
extern Il2CppType t1734_1_0_0;
extern Il2CppType t1719_0_0_0;
extern TypeInfo t1719_TI;
struct t1734;
const Il2CppTypeDefinitionMetadata t1734_DM = 
{
	&t1719_0_0_0, NULL, NULL, t1734_IOs, &t1719_0_0_0, t1734_VT, t1734_VTIGM, NULL};
TypeInfo t1734_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NullStreamReader", "", t1734_MIs, NULL, NULL, NULL, &t1734_TI, NULL, &EmptyCustomAttributesCache, &t1734_0_0_0, &t1734_1_0_0, &t1734_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1734), sizeof (t1734), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 0, 0, 0, 0, 11, 0, 1};
#include "t1719.h"
// Metadata Definition System.IO.StreamReader
#include "t1719MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8999_MI = 
{
	".ctor", (methodPointerType)&m8999, &t1719_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 2785, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t298_0_0_0;
extern Il2CppType t729_0_0_0;
static ParameterInfo t1719_m9000_ParameterInfos[] = 
{
	{"stream", 0, 134221292, &EmptyCustomAttributesCache, &t298_0_0_0},
	{"encoding", 1, 134221293, &EmptyCustomAttributesCache, &t729_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9000_MI = 
{
	".ctor", (methodPointerType)&m9000, &t1719_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1719_m9000_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2786, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t298_0_0_0;
extern Il2CppType t729_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1719_m9001_ParameterInfos[] = 
{
	{"stream", 0, 134221294, &EmptyCustomAttributesCache, &t298_0_0_0},
	{"encoding", 1, 134221295, &EmptyCustomAttributesCache, &t729_0_0_0},
	{"detectEncodingFromByteOrderMarks", 2, 134221296, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"bufferSize", 3, 134221297, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9001_MI = 
{
	".ctor", (methodPointerType)&m9001, &t1719_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186_t125, t1719_m9001_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 2787, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1719_m9002_ParameterInfos[] = 
{
	{"path", 0, 134221298, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9002_MI = 
{
	".ctor", (methodPointerType)&m9002, &t1719_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1719_m9002_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2788, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t729_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1719_m9003_ParameterInfos[] = 
{
	{"path", 0, 134221299, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"encoding", 1, 134221300, &EmptyCustomAttributesCache, &t729_0_0_0},
	{"detectEncodingFromByteOrderMarks", 2, 134221301, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"bufferSize", 3, 134221302, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9003_MI = 
{
	".ctor", (methodPointerType)&m9003, &t1719_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186_t125, t1719_m9003_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 2789, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9004_MI = 
{
	".cctor", (methodPointerType)&m9004, &t1719_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2790, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t298_0_0_0;
extern Il2CppType t729_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1719_m9005_ParameterInfos[] = 
{
	{"stream", 0, 134221303, &EmptyCustomAttributesCache, &t298_0_0_0},
	{"encoding", 1, 134221304, &EmptyCustomAttributesCache, &t729_0_0_0},
	{"detectEncodingFromByteOrderMarks", 2, 134221305, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"bufferSize", 3, 134221306, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9005_MI = 
{
	"Initialize", (methodPointerType)&m9005, &t1719_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186_t125, t1719_m9005_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 4, false, false, 2791, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1719_m9006_ParameterInfos[] = 
{
	{"disposing", 0, 134221307, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9006_MI = 
{
	"Dispose", (methodPointerType)&m9006, &t1719_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1719_m9006_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 5, 1, false, false, 2792, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1719_m9007_ParameterInfos[] = 
{
	{"count", 0, 134221308, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9007_MI = 
{
	"DoChecks", (methodPointerType)&m9007, &t1719_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t1719_m9007_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2793, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9008_MI = 
{
	"ReadBuffer", (methodPointerType)&m9008, &t1719_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2794, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9009_MI = 
{
	"Peek", (methodPointerType)&m9009, &t1719_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 2795, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9010_MI = 
{
	"Read", (methodPointerType)&m9010, &t1719_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2796, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1719_m9011_ParameterInfos[] = 
{
	{"buffer", 0, 134221309, &EmptyCustomAttributesCache, &t312_0_0_3},
	{"index", 1, 134221310, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221311, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9011_MI = 
{
	"Read", (methodPointerType)&m9011, &t1719_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1719_m9011_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 3, false, false, 2797, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9012_MI = 
{
	"FindNextEOL", (methodPointerType)&m9012, &t1719_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2798, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9013_MI = 
{
	"ReadLine", (methodPointerType)&m9013, &t1719_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2799, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9014_MI = 
{
	"ReadToEnd", (methodPointerType)&m9014, &t1719_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 10, 0, false, false, 2800, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1719_MIs[] =
{
	&m8999_MI,
	&m9000_MI,
	&m9001_MI,
	&m9002_MI,
	&m9003_MI,
	&m9004_MI,
	&m9005_MI,
	&m9006_MI,
	&m9007_MI,
	&m9008_MI,
	&m9009_MI,
	&m9010_MI,
	&m9011_MI,
	&m9012_MI,
	&m9013_MI,
	&m9014_MI,
	NULL
};
extern Il2CppType t730_0_0_1;
FieldInfo t1719_f1_FieldInfo = 
{
	"input_buffer", &t730_0_0_1, &t1719_TI, offsetof(t1719, f1), &EmptyCustomAttributesCache};
extern Il2CppType t312_0_0_1;
FieldInfo t1719_f2_FieldInfo = 
{
	"decoded_buffer", &t312_0_0_1, &t1719_TI, offsetof(t1719, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1719_f3_FieldInfo = 
{
	"decoded_count", &t125_0_0_1, &t1719_TI, offsetof(t1719, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1719_f4_FieldInfo = 
{
	"pos", &t125_0_0_1, &t1719_TI, offsetof(t1719, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1719_f5_FieldInfo = 
{
	"buffer_size", &t125_0_0_1, &t1719_TI, offsetof(t1719, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1719_f6_FieldInfo = 
{
	"do_checks", &t125_0_0_1, &t1719_TI, offsetof(t1719, f6), &EmptyCustomAttributesCache};
extern Il2CppType t729_0_0_1;
FieldInfo t1719_f7_FieldInfo = 
{
	"encoding", &t729_0_0_1, &t1719_TI, offsetof(t1719, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1713_0_0_1;
FieldInfo t1719_f8_FieldInfo = 
{
	"decoder", &t1713_0_0_1, &t1719_TI, offsetof(t1719, f8), &EmptyCustomAttributesCache};
extern Il2CppType t298_0_0_1;
FieldInfo t1719_f9_FieldInfo = 
{
	"base_stream", &t298_0_0_1, &t1719_TI, offsetof(t1719, f9), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1719_f10_FieldInfo = 
{
	"mayBlock", &t124_0_0_1, &t1719_TI, offsetof(t1719, f10), &EmptyCustomAttributesCache};
extern Il2CppType t322_0_0_1;
FieldInfo t1719_f11_FieldInfo = 
{
	"line_builder", &t322_0_0_1, &t1719_TI, offsetof(t1719, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1719_0_0_54;
FieldInfo t1719_f12_FieldInfo = 
{
	"Null", &t1719_0_0_54, &t1719_TI, offsetof(t1719_SFs, f12), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1719_f13_FieldInfo = 
{
	"foundCR", &t124_0_0_1, &t1719_TI, offsetof(t1719, f13), &EmptyCustomAttributesCache};
static FieldInfo* t1719_FIs[] =
{
	&t1719_f1_FieldInfo,
	&t1719_f2_FieldInfo,
	&t1719_f3_FieldInfo,
	&t1719_f4_FieldInfo,
	&t1719_f5_FieldInfo,
	&t1719_f6_FieldInfo,
	&t1719_f7_FieldInfo,
	&t1719_f8_FieldInfo,
	&t1719_f9_FieldInfo,
	&t1719_f10_FieldInfo,
	&t1719_f11_FieldInfo,
	&t1719_f12_FieldInfo,
	&t1719_f13_FieldInfo,
	NULL
};
static const Il2CppType* t1719_TI__nestedTypes[1] =
{
	&t1734_0_0_0,
};
extern MethodInfo m9009_MI;
extern MethodInfo m9010_MI;
extern MethodInfo m9011_MI;
extern MethodInfo m9013_MI;
extern MethodInfo m9014_MI;
static Il2CppMethodReference t1719_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9042_MI,
	&m9006_MI,
	&m9009_MI,
	&m9010_MI,
	&m9011_MI,
	&m9013_MI,
	&m9014_MI,
};
static bool t1719_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1719_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1719_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1719__CustomAttributeCache = {
1,
NULL,
&t1719_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1719_1_0_0;
extern Il2CppType t1665_0_0_0;
struct t1719;
extern CustomAttributesCache t1719__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1719_DM = 
{
	NULL, t1719_TI__nestedTypes, NULL, t1719_IOs, &t1665_0_0_0, t1719_VT, t1719_VTIGM, NULL};
TypeInfo t1719_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamReader", "System.IO", t1719_MIs, NULL, t1719_FIs, NULL, &t1719_TI, NULL, &t1719__CustomAttributeCache, &t1719_0_0_0, &t1719_1_0_0, &t1719_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1719), sizeof (t1719), 0, -1, sizeof(t1719_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 16, 0, 13, 0, 1, 11, 0, 1};
#include "t1735.h"
// Metadata Definition System.IO.StreamWriter
extern TypeInfo t1735_TI;
#include "t1735MD.h"
extern Il2CppType t298_0_0_0;
extern Il2CppType t729_0_0_0;
static ParameterInfo t1735_m9015_ParameterInfos[] = 
{
	{"stream", 0, 134221315, &EmptyCustomAttributesCache, &t298_0_0_0},
	{"encoding", 1, 134221316, &EmptyCustomAttributesCache, &t729_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9015_MI = 
{
	".ctor", (methodPointerType)&m9015, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1735_m9015_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2807, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t298_0_0_0;
extern Il2CppType t729_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1735_m9016_ParameterInfos[] = 
{
	{"stream", 0, 134221317, &EmptyCustomAttributesCache, &t298_0_0_0},
	{"encoding", 1, 134221318, &EmptyCustomAttributesCache, &t729_0_0_0},
	{"bufferSize", 2, 134221319, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9016_MI = 
{
	".ctor", (methodPointerType)&m9016, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1735_m9016_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 2808, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9017_MI = 
{
	".cctor", (methodPointerType)&m9017, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2809, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t729_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1735_m9018_ParameterInfos[] = 
{
	{"encoding", 0, 134221320, &EmptyCustomAttributesCache, &t729_0_0_0},
	{"bufferSize", 1, 134221321, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9018_MI = 
{
	"Initialize", (methodPointerType)&m9018, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1735_m9018_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 2, false, false, 2810, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1735_m9019_ParameterInfos[] = 
{
	{"value", 0, 134221322, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9019_MI = 
{
	"set_AutoFlush", (methodPointerType)&m9019, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1735_m9019_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 14, 1, false, false, 2811, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1735_m9020_ParameterInfos[] = 
{
	{"disposing", 0, 134221323, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9020_MI = 
{
	"Dispose", (methodPointerType)&m9020, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1735_m9020_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 1, false, false, 2812, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9021_MI = 
{
	"Flush", (methodPointerType)&m9021, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2813, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9022_MI = 
{
	"FlushBytes", (methodPointerType)&m9022, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2814, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9023_MI = 
{
	"Decode", (methodPointerType)&m9023, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2815, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1735_m9024_ParameterInfos[] = 
{
	{"buffer", 0, 134221324, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"index", 1, 134221325, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221326, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9024_MI = 
{
	"Write", (methodPointerType)&m9024, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1735_m9024_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 3, false, false, 2816, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1735_m9025_ParameterInfos[] = 
{
	{"buffer", 0, 134221327, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"index", 1, 134221328, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221329, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9025_MI = 
{
	"LowLevelWrite", (methodPointerType)&m9025, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1735_m9025_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2817, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1735_m9026_ParameterInfos[] = 
{
	{"s", 0, 134221330, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9026_MI = 
{
	"LowLevelWrite", (methodPointerType)&m9026, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1735_m9026_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2818, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t1735_m9027_ParameterInfos[] = 
{
	{"value", 0, 134221331, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m9027_MI = 
{
	"Write", (methodPointerType)&m9027, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122_t334, t1735_m9027_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 2819, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
static ParameterInfo t1735_m9028_ParameterInfos[] = 
{
	{"buffer", 0, 134221332, &EmptyCustomAttributesCache, &t312_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9028_MI = 
{
	"Write", (methodPointerType)&m9028, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1735_m9028_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 2820, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1735_m9029_ParameterInfos[] = 
{
	{"value", 0, 134221333, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9029_MI = 
{
	"Write", (methodPointerType)&m9029, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1735_m9029_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 2821, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9030_MI = 
{
	"Close", (methodPointerType)&m9030, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 5, 0, false, false, 2822, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9031_MI = 
{
	"Finalize", (methodPointerType)&m9031, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 2823, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1735_MIs[] =
{
	&m9015_MI,
	&m9016_MI,
	&m9017_MI,
	&m9018_MI,
	&m9019_MI,
	&m9020_MI,
	&m9021_MI,
	&m9022_MI,
	&m9023_MI,
	&m9024_MI,
	&m9025_MI,
	&m9026_MI,
	&m9027_MI,
	&m9028_MI,
	&m9029_MI,
	&m9030_MI,
	&m9031_MI,
	NULL
};
extern Il2CppType t729_0_0_1;
FieldInfo t1735_f2_FieldInfo = 
{
	"internalEncoding", &t729_0_0_1, &t1735_TI, offsetof(t1735, f2), &EmptyCustomAttributesCache};
extern Il2CppType t298_0_0_1;
FieldInfo t1735_f3_FieldInfo = 
{
	"internalStream", &t298_0_0_1, &t1735_TI, offsetof(t1735, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1735_f4_FieldInfo = 
{
	"iflush", &t124_0_0_1, &t1735_TI, offsetof(t1735, f4), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t1735_f5_FieldInfo = 
{
	"byte_buf", &t730_0_0_1, &t1735_TI, offsetof(t1735, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1735_f6_FieldInfo = 
{
	"byte_pos", &t125_0_0_1, &t1735_TI, offsetof(t1735, f6), &EmptyCustomAttributesCache};
extern Il2CppType t312_0_0_1;
FieldInfo t1735_f7_FieldInfo = 
{
	"decode_buf", &t312_0_0_1, &t1735_TI, offsetof(t1735, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1735_f8_FieldInfo = 
{
	"decode_pos", &t125_0_0_1, &t1735_TI, offsetof(t1735, f8), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1735_f9_FieldInfo = 
{
	"DisposedAlready", &t124_0_0_1, &t1735_TI, offsetof(t1735, f9), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1735_f10_FieldInfo = 
{
	"preamble_done", &t124_0_0_1, &t1735_TI, offsetof(t1735, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_54;
FieldInfo t1735_f11_FieldInfo = 
{
	"Null", &t1735_0_0_54, &t1735_TI, offsetof(t1735_SFs, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1735_FIs[] =
{
	&t1735_f2_FieldInfo,
	&t1735_f3_FieldInfo,
	&t1735_f4_FieldInfo,
	&t1735_f5_FieldInfo,
	&t1735_f6_FieldInfo,
	&t1735_f7_FieldInfo,
	&t1735_f8_FieldInfo,
	&t1735_f9_FieldInfo,
	&t1735_f10_FieldInfo,
	&t1735_f11_FieldInfo,
	NULL
};
extern MethodInfo m9019_MI;
static PropertyInfo t1735____AutoFlush_PropertyInfo = 
{
	&t1735_TI, "AutoFlush", NULL, &m9019_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1735_PIs[] =
{
	&t1735____AutoFlush_PropertyInfo,
	NULL
};
extern MethodInfo m9031_MI;
extern MethodInfo m9064_MI;
extern MethodInfo m9030_MI;
extern MethodInfo m9020_MI;
extern MethodInfo m9021_MI;
extern MethodInfo m9027_MI;
extern MethodInfo m9028_MI;
extern MethodInfo m9029_MI;
extern MethodInfo m9024_MI;
extern MethodInfo m9071_MI;
extern MethodInfo m5948_MI;
static Il2CppMethodReference t1735_VT[] =
{
	&m671_MI,
	&m9031_MI,
	&m672_MI,
	&m673_MI,
	&m9064_MI,
	&m9030_MI,
	&m9020_MI,
	&m9021_MI,
	&m9027_MI,
	&m9028_MI,
	&m9029_MI,
	&m9024_MI,
	&m9071_MI,
	&m5948_MI,
	&m9019_MI,
};
static bool t1735_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1735_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1735_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1735__CustomAttributeCache = {
1,
NULL,
&t1735_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1735_0_0_0;
extern Il2CppType t1735_1_0_0;
extern Il2CppType t1370_0_0_0;
struct t1735;
extern CustomAttributesCache t1735__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1735_DM = 
{
	NULL, NULL, NULL, t1735_IOs, &t1370_0_0_0, t1735_VT, t1735_VTIGM, NULL};
TypeInfo t1735_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamWriter", "System.IO", t1735_MIs, t1735_PIs, t1735_FIs, NULL, &t1735_TI, NULL, &t1735__CustomAttributeCache, &t1735_0_0_0, &t1735_1_0_0, &t1735_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1735), sizeof (t1735), 0, -1, sizeof(t1735_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, true, true, false, 17, 1, 10, 0, 0, 15, 0, 1};
#include "t887.h"
// Metadata Definition System.IO.StringReader
extern TypeInfo t887_TI;
#include "t887MD.h"
extern Il2CppType t2_0_0_0;
static ParameterInfo t887_m4277_ParameterInfos[] = 
{
	{"s", 0, 134221334, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4277_MI = 
{
	".ctor", (methodPointerType)&m4277, &t887_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t887_m4277_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2824, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t887_m9032_ParameterInfos[] = 
{
	{"disposing", 0, 134221335, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9032_MI = 
{
	"Dispose", (methodPointerType)&m9032, &t887_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t887_m9032_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 5, 1, false, false, 2825, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9033_MI = 
{
	"Peek", (methodPointerType)&m9033, &t887_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 2826, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9034_MI = 
{
	"Read", (methodPointerType)&m9034, &t887_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2827, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t887_m9035_ParameterInfos[] = 
{
	{"buffer", 0, 134221336, &EmptyCustomAttributesCache, &t312_0_0_3},
	{"index", 1, 134221337, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221338, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9035_MI = 
{
	"Read", (methodPointerType)&m9035, &t887_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t887_m9035_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 3, false, false, 2828, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4278_MI = 
{
	"ReadLine", (methodPointerType)&m4278, &t887_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2829, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9036_MI = 
{
	"ReadToEnd", (methodPointerType)&m9036, &t887_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 10, 0, false, false, 2830, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9037_MI = 
{
	"CheckObjectDisposedException", (methodPointerType)&m9037, &t887_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2831, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t887_MIs[] =
{
	&m4277_MI,
	&m9032_MI,
	&m9033_MI,
	&m9034_MI,
	&m9035_MI,
	&m4278_MI,
	&m9036_MI,
	&m9037_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t887_f1_FieldInfo = 
{
	"source", &t2_0_0_1, &t887_TI, offsetof(t887, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t887_f2_FieldInfo = 
{
	"nextChar", &t125_0_0_1, &t887_TI, offsetof(t887, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t887_f3_FieldInfo = 
{
	"sourceLength", &t125_0_0_1, &t887_TI, offsetof(t887, f3), &EmptyCustomAttributesCache};
static FieldInfo* t887_FIs[] =
{
	&t887_f1_FieldInfo,
	&t887_f2_FieldInfo,
	&t887_f3_FieldInfo,
	NULL
};
extern MethodInfo m9032_MI;
extern MethodInfo m9033_MI;
extern MethodInfo m9034_MI;
extern MethodInfo m9035_MI;
extern MethodInfo m4278_MI;
extern MethodInfo m9036_MI;
static Il2CppMethodReference t887_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9042_MI,
	&m9032_MI,
	&m9033_MI,
	&m9034_MI,
	&m9035_MI,
	&m4278_MI,
	&m9036_MI,
};
static bool t887_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t887_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t887_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t887__CustomAttributeCache = {
1,
NULL,
&t887_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t887_0_0_0;
extern Il2CppType t887_1_0_0;
struct t887;
extern CustomAttributesCache t887__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t887_DM = 
{
	NULL, NULL, NULL, t887_IOs, &t1665_0_0_0, t887_VT, t887_VTIGM, NULL};
TypeInfo t887_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StringReader", "System.IO", t887_MIs, NULL, t887_FIs, NULL, &t887_TI, NULL, &t887__CustomAttributeCache, &t887_0_0_0, &t887_1_0_0, &t887_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t887), sizeof (t887), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 0, 3, 0, 0, 11, 0, 1};
#include "t1736.h"
// Metadata Definition System.IO.TextReader/NullTextReader
extern TypeInfo t1736_TI;
#include "t1736MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9038_MI = 
{
	".ctor", (methodPointerType)&m9038, &t1736_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2842, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9039_MI = 
{
	"ReadLine", (methodPointerType)&m9039, &t1736_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2843, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1736_MIs[] =
{
	&m9038_MI,
	&m9039_MI,
	NULL
};
extern MethodInfo m9043_MI;
extern MethodInfo m9044_MI;
extern MethodInfo m9045_MI;
extern MethodInfo m9046_MI;
extern MethodInfo m9039_MI;
extern MethodInfo m9048_MI;
static Il2CppMethodReference t1736_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9042_MI,
	&m9043_MI,
	&m9044_MI,
	&m9045_MI,
	&m9046_MI,
	&m9039_MI,
	&m9048_MI,
};
static bool t1736_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1736_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1736_0_0_0;
extern Il2CppType t1736_1_0_0;
extern TypeInfo t1665_TI;
struct t1736;
const Il2CppTypeDefinitionMetadata t1736_DM = 
{
	&t1665_0_0_0, NULL, NULL, t1736_IOs, &t1665_0_0_0, t1736_VT, t1736_VTIGM, NULL};
TypeInfo t1736_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NullTextReader", "", t1736_MIs, NULL, NULL, NULL, &t1736_TI, NULL, &EmptyCustomAttributesCache, &t1736_0_0_0, &t1736_1_0_0, &t1736_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1736), sizeof (t1736), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 11, 0, 1};
#include "t1665.h"
// Metadata Definition System.IO.TextReader
#include "t1665MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9040_MI = 
{
	".ctor", (methodPointerType)&m9040, &t1665_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2832, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9041_MI = 
{
	".cctor", (methodPointerType)&m9041, &t1665_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2833, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9042_MI = 
{
	"Dispose", (methodPointerType)&m9042, &t1665_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 486, 0, 4, 0, false, false, 2834, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1665_m9043_ParameterInfos[] = 
{
	{"disposing", 0, 134221339, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9043_MI = 
{
	"Dispose", (methodPointerType)&m9043, &t1665_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1665_m9043_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 5, 1, false, false, 2835, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9044_MI = 
{
	"Peek", (methodPointerType)&m9044, &t1665_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 2836, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9045_MI = 
{
	"Read", (methodPointerType)&m9045, &t1665_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2837, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1665_m9046_ParameterInfos[] = 
{
	{"buffer", 0, 134221340, &EmptyCustomAttributesCache, &t312_0_0_3},
	{"index", 1, 134221341, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221342, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9046_MI = 
{
	"Read", (methodPointerType)&m9046, &t1665_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1665_m9046_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 3, false, false, 2838, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9047_MI = 
{
	"ReadLine", (methodPointerType)&m9047, &t1665_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 9, 0, false, false, 2839, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9048_MI = 
{
	"ReadToEnd", (methodPointerType)&m9048, &t1665_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 10, 0, false, false, 2840, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1665_0_0_0;
static ParameterInfo t1665_m9049_ParameterInfos[] = 
{
	{"reader", 0, 134221343, &EmptyCustomAttributesCache, &t1665_0_0_0},
};
extern Il2CppType t1665_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9049_MI = 
{
	"Synchronized", (methodPointerType)&m9049, &t1665_TI, &t1665_0_0_0, RuntimeInvoker_t9_t9, t1665_m9049_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2841, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1665_MIs[] =
{
	&m9040_MI,
	&m9041_MI,
	&m9042_MI,
	&m9043_MI,
	&m9044_MI,
	&m9045_MI,
	&m9046_MI,
	&m9047_MI,
	&m9048_MI,
	&m9049_MI,
	NULL
};
extern Il2CppType t1665_0_0_54;
FieldInfo t1665_f0_FieldInfo = 
{
	"Null", &t1665_0_0_54, &t1665_TI, offsetof(t1665_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1665_FIs[] =
{
	&t1665_f0_FieldInfo,
	NULL
};
static const Il2CppType* t1665_TI__nestedTypes[1] =
{
	&t1736_0_0_0,
};
extern MethodInfo m9047_MI;
static Il2CppMethodReference t1665_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9042_MI,
	&m9043_MI,
	&m9044_MI,
	&m9045_MI,
	&m9046_MI,
	&m9047_MI,
	&m9048_MI,
};
static bool t1665_VTIGM[] =
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
static const Il2CppType* t1665_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1665_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1665_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1665__CustomAttributeCache = {
1,
NULL,
&t1665_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1665_1_0_0;
struct t1665;
extern CustomAttributesCache t1665__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1665_DM = 
{
	NULL, t1665_TI__nestedTypes, t1665_ITIs, t1665_IOs, &t9_0_0_0, t1665_VT, t1665_VTIGM, NULL};
TypeInfo t1665_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TextReader", "System.IO", t1665_MIs, NULL, t1665_FIs, NULL, &t1665_TI, NULL, &t1665__CustomAttributeCache, &t1665_0_0_0, &t1665_1_0_0, &t1665_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1665), sizeof (t1665), 0, -1, sizeof(t1665_SFs), 0, -1, 8321, 0, 0, false, false, false, false, false, false, false, false, true, false, 10, 0, 1, 0, 1, 11, 1, 1};
#include "t1737.h"
// Metadata Definition System.IO.SynchronizedReader
extern TypeInfo t1737_TI;
#include "t1737MD.h"
extern Il2CppType t1665_0_0_0;
static ParameterInfo t1737_m9050_ParameterInfos[] = 
{
	{"reader", 0, 134221344, &EmptyCustomAttributesCache, &t1665_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9050_MI = 
{
	".ctor", (methodPointerType)&m9050, &t1737_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1737_m9050_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2844, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9051_MI = 
{
	"Peek", (methodPointerType)&m9051, &t1737_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 2845, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9052_MI = 
{
	"ReadLine", (methodPointerType)&m9052, &t1737_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2846, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9053_MI = 
{
	"ReadToEnd", (methodPointerType)&m9053, &t1737_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 10, 0, false, false, 2847, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9054_MI = 
{
	"Read", (methodPointerType)&m9054, &t1737_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2848, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1737_m9055_ParameterInfos[] = 
{
	{"buffer", 0, 134221345, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"index", 1, 134221346, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221347, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9055_MI = 
{
	"Read", (methodPointerType)&m9055, &t1737_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1737_m9055_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 3, false, false, 2849, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1737_MIs[] =
{
	&m9050_MI,
	&m9051_MI,
	&m9052_MI,
	&m9053_MI,
	&m9054_MI,
	&m9055_MI,
	NULL
};
extern Il2CppType t1665_0_0_1;
FieldInfo t1737_f1_FieldInfo = 
{
	"reader", &t1665_0_0_1, &t1737_TI, offsetof(t1737, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1737_FIs[] =
{
	&t1737_f1_FieldInfo,
	NULL
};
extern MethodInfo m9051_MI;
extern MethodInfo m9054_MI;
extern MethodInfo m9055_MI;
extern MethodInfo m9052_MI;
extern MethodInfo m9053_MI;
static Il2CppMethodReference t1737_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9042_MI,
	&m9043_MI,
	&m9051_MI,
	&m9054_MI,
	&m9055_MI,
	&m9052_MI,
	&m9053_MI,
};
static bool t1737_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1737_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1737_0_0_0;
extern Il2CppType t1737_1_0_0;
struct t1737;
const Il2CppTypeDefinitionMetadata t1737_DM = 
{
	NULL, NULL, NULL, t1737_IOs, &t1665_0_0_0, t1737_VT, t1737_VTIGM, NULL};
TypeInfo t1737_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SynchronizedReader", "System.IO", t1737_MIs, NULL, t1737_FIs, NULL, &t1737_TI, NULL, &EmptyCustomAttributesCache, &t1737_0_0_0, &t1737_1_0_0, &t1737_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1737), sizeof (t1737), 0, -1, 0, 0, -1, 1056768, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 0, 1, 0, 0, 11, 0, 1};
#include "t1738.h"
// Metadata Definition System.IO.TextWriter/NullTextWriter
extern TypeInfo t1738_TI;
#include "t1738MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9056_MI = 
{
	".ctor", (methodPointerType)&m9056, &t1738_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2863, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1738_m9057_ParameterInfos[] = 
{
	{"s", 0, 134221358, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9057_MI = 
{
	"Write", (methodPointerType)&m9057, &t1738_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1738_m9057_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 2864, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t1738_m9058_ParameterInfos[] = 
{
	{"value", 0, 134221359, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m9058_MI = 
{
	"Write", (methodPointerType)&m9058, &t1738_TI, &t122_0_0_0, RuntimeInvoker_t122_t334, t1738_m9058_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 2865, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1738_m9059_ParameterInfos[] = 
{
	{"value", 0, 134221360, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"index", 1, 134221361, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221362, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9059_MI = 
{
	"Write", (methodPointerType)&m9059, &t1738_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1738_m9059_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 3, false, false, 2866, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1738_MIs[] =
{
	&m9056_MI,
	&m9057_MI,
	&m9058_MI,
	&m9059_MI,
	NULL
};
extern MethodInfo m9062_MI;
extern MethodInfo m9063_MI;
extern MethodInfo m9065_MI;
extern MethodInfo m9058_MI;
extern MethodInfo m9068_MI;
extern MethodInfo m9057_MI;
extern MethodInfo m9059_MI;
static Il2CppMethodReference t1738_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9064_MI,
	&m9062_MI,
	&m9063_MI,
	&m9065_MI,
	&m9058_MI,
	&m9068_MI,
	&m9057_MI,
	&m9059_MI,
	&m9071_MI,
	&m5948_MI,
};
static bool t1738_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1738_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1738_0_0_0;
extern Il2CppType t1738_1_0_0;
extern TypeInfo t1370_TI;
struct t1738;
const Il2CppTypeDefinitionMetadata t1738_DM = 
{
	&t1370_0_0_0, NULL, NULL, t1738_IOs, &t1370_0_0_0, t1738_VT, t1738_VTIGM, NULL};
TypeInfo t1738_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NullTextWriter", "", t1738_MIs, NULL, NULL, NULL, &t1738_TI, NULL, &EmptyCustomAttributesCache, &t1738_0_0_0, &t1738_1_0_0, &t1738_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1738), sizeof (t1738), 0, -1, 0, 0, -1, 1048835, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 14, 0, 1};
#include "t1370.h"
// Metadata Definition System.IO.TextWriter
#include "t1370MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9060_MI = 
{
	".ctor", (methodPointerType)&m9060, &t1370_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2850, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9061_MI = 
{
	".cctor", (methodPointerType)&m9061, &t1370_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2851, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9062_MI = 
{
	"Close", (methodPointerType)&m9062, &t1370_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 5, 0, false, false, 2852, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1370_m9063_ParameterInfos[] = 
{
	{"disposing", 0, 134221348, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9063_MI = 
{
	"Dispose", (methodPointerType)&m9063, &t1370_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1370_m9063_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 6, 1, false, false, 2853, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9064_MI = 
{
	"Dispose", (methodPointerType)&m9064, &t1370_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 486, 0, 4, 0, false, false, 2854, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9065_MI = 
{
	"Flush", (methodPointerType)&m9065, &t1370_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2855, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1370_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1370_m9066_ParameterInfos[] = 
{
	{"writer", 0, 134221349, &EmptyCustomAttributesCache, &t1370_0_0_0},
	{"neverClose", 1, 134221350, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1370_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9066_MI = 
{
	"Synchronized", (methodPointerType)&m9066, &t1370_TI, &t1370_0_0_0, RuntimeInvoker_t9_t9_t186, t1370_m9066_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 2856, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t1370_m9067_ParameterInfos[] = 
{
	{"value", 0, 134221351, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m9067_MI = 
{
	"Write", (methodPointerType)&m9067, &t1370_TI, &t122_0_0_0, RuntimeInvoker_t122_t334, t1370_m9067_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 1, false, false, 2857, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
static ParameterInfo t1370_m9068_ParameterInfos[] = 
{
	{"buffer", 0, 134221352, &EmptyCustomAttributesCache, &t312_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9068_MI = 
{
	"Write", (methodPointerType)&m9068, &t1370_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1370_m9068_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 1, false, false, 2858, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1370_m9069_ParameterInfos[] = 
{
	{"value", 0, 134221353, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9069_MI = 
{
	"Write", (methodPointerType)&m9069, &t1370_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1370_m9069_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 1, false, false, 2859, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1370_m9070_ParameterInfos[] = 
{
	{"buffer", 0, 134221354, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"index", 1, 134221355, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221356, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9070_MI = 
{
	"Write", (methodPointerType)&m9070, &t1370_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1370_m9070_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 3, false, false, 2860, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9071_MI = 
{
	"WriteLine", (methodPointerType)&m9071, &t1370_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 12, 0, false, false, 2861, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1370_m5948_ParameterInfos[] = 
{
	{"value", 0, 134221357, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5948_MI = 
{
	"WriteLine", (methodPointerType)&m5948, &t1370_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1370_m5948_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 1, false, false, 2862, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1370_MIs[] =
{
	&m9060_MI,
	&m9061_MI,
	&m9062_MI,
	&m9063_MI,
	&m9064_MI,
	&m9065_MI,
	&m9066_MI,
	&m9067_MI,
	&m9068_MI,
	&m9069_MI,
	&m9070_MI,
	&m9071_MI,
	&m5948_MI,
	NULL
};
extern Il2CppType t312_0_0_4;
FieldInfo t1370_f0_FieldInfo = 
{
	"CoreNewLine", &t312_0_0_4, &t1370_TI, offsetof(t1370, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1370_0_0_54;
FieldInfo t1370_f1_FieldInfo = 
{
	"Null", &t1370_0_0_54, &t1370_TI, offsetof(t1370_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1370_FIs[] =
{
	&t1370_f0_FieldInfo,
	&t1370_f1_FieldInfo,
	NULL
};
static const Il2CppType* t1370_TI__nestedTypes[1] =
{
	&t1738_0_0_0,
};
extern MethodInfo m9067_MI;
extern MethodInfo m9069_MI;
extern MethodInfo m9070_MI;
static Il2CppMethodReference t1370_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9064_MI,
	&m9062_MI,
	&m9063_MI,
	&m9065_MI,
	&m9067_MI,
	&m9068_MI,
	&m9069_MI,
	&m9070_MI,
	&m9071_MI,
	&m5948_MI,
};
static bool t1370_VTIGM[] =
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
static const Il2CppType* t1370_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1370_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1370_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1370__CustomAttributeCache = {
1,
NULL,
&t1370_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1370_1_0_0;
struct t1370;
extern CustomAttributesCache t1370__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1370_DM = 
{
	NULL, t1370_TI__nestedTypes, t1370_ITIs, t1370_IOs, &t9_0_0_0, t1370_VT, t1370_VTIGM, NULL};
TypeInfo t1370_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TextWriter", "System.IO", t1370_MIs, NULL, t1370_FIs, NULL, &t1370_TI, NULL, &t1370__CustomAttributeCache, &t1370_0_0_0, &t1370_1_0_0, &t1370_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1370), sizeof (t1370), 0, -1, sizeof(t1370_SFs), 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, true, false, 13, 0, 2, 0, 1, 14, 1, 1};
#include "t1739.h"
// Metadata Definition System.IO.SynchronizedWriter
extern TypeInfo t1739_TI;
#include "t1739MD.h"
extern Il2CppType t1370_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1739_m9072_ParameterInfos[] = 
{
	{"writer", 0, 134221363, &EmptyCustomAttributesCache, &t1370_0_0_0},
	{"neverClose", 1, 134221364, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9072_MI = 
{
	".ctor", (methodPointerType)&m9072, &t1739_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1739_m9072_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2867, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9073_MI = 
{
	"Close", (methodPointerType)&m9073, &t1739_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 5, 0, false, false, 2868, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9074_MI = 
{
	"Flush", (methodPointerType)&m9074, &t1739_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2869, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t1739_m9075_ParameterInfos[] = 
{
	{"value", 0, 134221365, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m9075_MI = 
{
	"Write", (methodPointerType)&m9075, &t1739_TI, &t122_0_0_0, RuntimeInvoker_t122_t334, t1739_m9075_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 2870, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
static ParameterInfo t1739_m9076_ParameterInfos[] = 
{
	{"value", 0, 134221366, &EmptyCustomAttributesCache, &t312_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9076_MI = 
{
	"Write", (methodPointerType)&m9076, &t1739_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1739_m9076_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 2871, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1739_m9077_ParameterInfos[] = 
{
	{"value", 0, 134221367, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9077_MI = 
{
	"Write", (methodPointerType)&m9077, &t1739_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1739_m9077_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 2872, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1739_m9078_ParameterInfos[] = 
{
	{"buffer", 0, 134221368, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"index", 1, 134221369, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221370, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9078_MI = 
{
	"Write", (methodPointerType)&m9078, &t1739_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1739_m9078_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 3, false, false, 2873, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9079_MI = 
{
	"WriteLine", (methodPointerType)&m9079, &t1739_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 12, 0, false, false, 2874, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1739_m9080_ParameterInfos[] = 
{
	{"value", 0, 134221371, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9080_MI = 
{
	"WriteLine", (methodPointerType)&m9080, &t1739_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1739_m9080_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 1, false, false, 2875, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1739_MIs[] =
{
	&m9072_MI,
	&m9073_MI,
	&m9074_MI,
	&m9075_MI,
	&m9076_MI,
	&m9077_MI,
	&m9078_MI,
	&m9079_MI,
	&m9080_MI,
	NULL
};
extern Il2CppType t1370_0_0_1;
FieldInfo t1739_f2_FieldInfo = 
{
	"writer", &t1370_0_0_1, &t1739_TI, offsetof(t1739, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1739_f3_FieldInfo = 
{
	"neverClose", &t124_0_0_1, &t1739_TI, offsetof(t1739, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1739_FIs[] =
{
	&t1739_f2_FieldInfo,
	&t1739_f3_FieldInfo,
	NULL
};
extern MethodInfo m9073_MI;
extern MethodInfo m9074_MI;
extern MethodInfo m9075_MI;
extern MethodInfo m9076_MI;
extern MethodInfo m9077_MI;
extern MethodInfo m9078_MI;
extern MethodInfo m9079_MI;
extern MethodInfo m9080_MI;
static Il2CppMethodReference t1739_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9064_MI,
	&m9073_MI,
	&m9063_MI,
	&m9074_MI,
	&m9075_MI,
	&m9076_MI,
	&m9077_MI,
	&m9078_MI,
	&m9079_MI,
	&m9080_MI,
};
static bool t1739_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1739_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1739_0_0_0;
extern Il2CppType t1739_1_0_0;
struct t1739;
const Il2CppTypeDefinitionMetadata t1739_DM = 
{
	NULL, NULL, NULL, t1739_IOs, &t1370_0_0_0, t1739_VT, t1739_VTIGM, NULL};
TypeInfo t1739_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SynchronizedWriter", "System.IO", t1739_MIs, NULL, t1739_FIs, NULL, &t1739_TI, NULL, &EmptyCustomAttributesCache, &t1739_0_0_0, &t1739_1_0_0, &t1739_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1739), sizeof (t1739), 0, -1, 0, 0, -1, 1056768, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 0, 2, 0, 0, 14, 0, 1};
#include "t1740.h"
// Metadata Definition System.IO.UnexceptionalStreamReader
extern TypeInfo t1740_TI;
#include "t1740MD.h"
extern Il2CppType t298_0_0_0;
extern Il2CppType t729_0_0_0;
static ParameterInfo t1740_m9081_ParameterInfos[] = 
{
	{"stream", 0, 134221372, &EmptyCustomAttributesCache, &t298_0_0_0},
	{"encoding", 1, 134221373, &EmptyCustomAttributesCache, &t729_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9081_MI = 
{
	".ctor", (methodPointerType)&m9081, &t1740_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1740_m9081_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2876, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9082_MI = 
{
	".cctor", (methodPointerType)&m9082, &t1740_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2877, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9083_MI = 
{
	"Peek", (methodPointerType)&m9083, &t1740_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 2878, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9084_MI = 
{
	"Read", (methodPointerType)&m9084, &t1740_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2879, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1740_m9085_ParameterInfos[] = 
{
	{"dest_buffer", 0, 134221374, &EmptyCustomAttributesCache, &t312_0_0_3},
	{"index", 1, 134221375, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221376, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9085_MI = 
{
	"Read", (methodPointerType)&m9085, &t1740_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1740_m9085_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 3, false, false, 2880, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t1740_m9086_ParameterInfos[] = 
{
	{"current", 0, 134221377, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m9086_MI = 
{
	"CheckEOL", (methodPointerType)&m9086, &t1740_TI, &t124_0_0_0, RuntimeInvoker_t124_t334, t1740_m9086_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2881, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9087_MI = 
{
	"ReadLine", (methodPointerType)&m9087, &t1740_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2882, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9088_MI = 
{
	"ReadToEnd", (methodPointerType)&m9088, &t1740_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 10, 0, false, false, 2883, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1740_MIs[] =
{
	&m9081_MI,
	&m9082_MI,
	&m9083_MI,
	&m9084_MI,
	&m9085_MI,
	&m9086_MI,
	&m9087_MI,
	&m9088_MI,
	NULL
};
extern Il2CppType t1206_0_0_17;
FieldInfo t1740_f14_FieldInfo = 
{
	"newline", &t1206_0_0_17, &t1740_TI, offsetof(t1740_SFs, f14), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_17;
FieldInfo t1740_f15_FieldInfo = 
{
	"newlineChar", &t303_0_0_17, &t1740_TI, offsetof(t1740_SFs, f15), &EmptyCustomAttributesCache};
static FieldInfo* t1740_FIs[] =
{
	&t1740_f14_FieldInfo,
	&t1740_f15_FieldInfo,
	NULL
};
extern MethodInfo m9083_MI;
extern MethodInfo m9084_MI;
extern MethodInfo m9085_MI;
extern MethodInfo m9087_MI;
extern MethodInfo m9088_MI;
static Il2CppMethodReference t1740_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9042_MI,
	&m9006_MI,
	&m9083_MI,
	&m9084_MI,
	&m9085_MI,
	&m9087_MI,
	&m9088_MI,
};
static bool t1740_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1740_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1740_0_0_0;
extern Il2CppType t1740_1_0_0;
struct t1740;
const Il2CppTypeDefinitionMetadata t1740_DM = 
{
	NULL, NULL, NULL, t1740_IOs, &t1719_0_0_0, t1740_VT, t1740_VTIGM, NULL};
TypeInfo t1740_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UnexceptionalStreamReader", "System.IO", t1740_MIs, NULL, t1740_FIs, NULL, &t1740_TI, NULL, &EmptyCustomAttributesCache, &t1740_0_0_0, &t1740_1_0_0, &t1740_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1740), sizeof (t1740), 0, -1, sizeof(t1740_SFs), 0, -1, 0, 0, 0, false, false, false, false, false, false, false, false, true, false, 8, 0, 2, 0, 0, 11, 0, 1};
#include "t1741.h"
// Metadata Definition System.IO.UnexceptionalStreamWriter
extern TypeInfo t1741_TI;
#include "t1741MD.h"
extern Il2CppType t298_0_0_0;
extern Il2CppType t729_0_0_0;
static ParameterInfo t1741_m9089_ParameterInfos[] = 
{
	{"stream", 0, 134221378, &EmptyCustomAttributesCache, &t298_0_0_0},
	{"encoding", 1, 134221379, &EmptyCustomAttributesCache, &t729_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9089_MI = 
{
	".ctor", (methodPointerType)&m9089, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1741_m9089_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2884, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9090_MI = 
{
	"Flush", (methodPointerType)&m9090, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2885, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1741_m9091_ParameterInfos[] = 
{
	{"buffer", 0, 134221380, &EmptyCustomAttributesCache, &t312_0_0_0},
	{"index", 1, 134221381, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221382, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9091_MI = 
{
	"Write", (methodPointerType)&m9091, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1741_m9091_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 3, false, false, 2886, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t1741_m9092_ParameterInfos[] = 
{
	{"value", 0, 134221383, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m9092_MI = 
{
	"Write", (methodPointerType)&m9092, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122_t334, t1741_m9092_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 2887, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t312_0_0_0;
static ParameterInfo t1741_m9093_ParameterInfos[] = 
{
	{"value", 0, 134221384, &EmptyCustomAttributesCache, &t312_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9093_MI = 
{
	"Write", (methodPointerType)&m9093, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1741_m9093_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 2888, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1741_m9094_ParameterInfos[] = 
{
	{"value", 0, 134221385, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9094_MI = 
{
	"Write", (methodPointerType)&m9094, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1741_m9094_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 2889, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1741_MIs[] =
{
	&m9089_MI,
	&m9090_MI,
	&m9091_MI,
	&m9092_MI,
	&m9093_MI,
	&m9094_MI,
	NULL
};
extern MethodInfo m9090_MI;
extern MethodInfo m9092_MI;
extern MethodInfo m9093_MI;
extern MethodInfo m9094_MI;
extern MethodInfo m9091_MI;
static Il2CppMethodReference t1741_VT[] =
{
	&m671_MI,
	&m9031_MI,
	&m672_MI,
	&m673_MI,
	&m9064_MI,
	&m9030_MI,
	&m9020_MI,
	&m9090_MI,
	&m9092_MI,
	&m9093_MI,
	&m9094_MI,
	&m9091_MI,
	&m9071_MI,
	&m5948_MI,
	&m9019_MI,
};
static bool t1741_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1741_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1741_0_0_0;
extern Il2CppType t1741_1_0_0;
struct t1741;
const Il2CppTypeDefinitionMetadata t1741_DM = 
{
	NULL, NULL, NULL, t1741_IOs, &t1735_0_0_0, t1741_VT, t1741_VTIGM, NULL};
TypeInfo t1741_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UnexceptionalStreamWriter", "System.IO", t1741_MIs, NULL, NULL, NULL, &t1741_TI, NULL, &EmptyCustomAttributesCache, &t1741_0_0_0, &t1741_1_0_0, &t1741_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1741), sizeof (t1741), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 0, 0, 0, 0, 15, 0, 1};
#include "t1742.h"
// Metadata Definition System.Reflection.Emit.MonoResource
extern TypeInfo t1742_TI;
#include "t1742MD.h"
static MethodInfo* t1742_MIs[] =
{
	NULL
};
extern Il2CppType t730_0_0_6;
FieldInfo t1742_f0_FieldInfo = 
{
	"data", &t730_0_0_6, &t1742_TI, offsetof(t1742, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1742_f1_FieldInfo = 
{
	"name", &t2_0_0_6, &t1742_TI, offsetof(t1742, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1742_f2_FieldInfo = 
{
	"filename", &t2_0_0_6, &t1742_TI, offsetof(t1742, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1743_0_0_6;
FieldInfo t1742_f3_FieldInfo = 
{
	"attrs", &t1743_0_0_6, &t1742_TI, offsetof(t1742, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1742_f4_FieldInfo = 
{
	"offset", &t125_0_0_6, &t1742_TI, offsetof(t1742, f4) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t298_0_0_6;
FieldInfo t1742_f5_FieldInfo = 
{
	"stream", &t298_0_0_6, &t1742_TI, offsetof(t1742, f5) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1742_FIs[] =
{
	&t1742_f0_FieldInfo,
	&t1742_f1_FieldInfo,
	&t1742_f2_FieldInfo,
	&t1742_f3_FieldInfo,
	&t1742_f4_FieldInfo,
	&t1742_f5_FieldInfo,
	NULL
};
static Il2CppMethodReference t1742_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1742_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1742_0_0_0;
extern Il2CppType t1742_1_0_0;
const Il2CppTypeDefinitionMetadata t1742_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1742_VT, t1742_VTIGM, NULL};
TypeInfo t1742_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoResource", "System.Reflection.Emit", t1742_MIs, NULL, t1742_FIs, NULL, &t1742_TI, NULL, &EmptyCustomAttributesCache, &t1742_0_0_0, &t1742_1_0_0, &t1742_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1742)+ sizeof (Il2CppObject), sizeof (t1742)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048840, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 4, 0, 0};
#include "t1744.h"
// Metadata Definition System.Reflection.Emit.AssemblyBuilder
extern TypeInfo t1744_TI;
#include "t1744MD.h"
extern Il2CppType t1748_0_0_0;
extern Il2CppType t1748_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1751_0_0_0;
extern Il2CppType t1751_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1744_m9095_ParameterInfos[] = 
{
	{"n", 0, 134221386, &EmptyCustomAttributesCache, &t1748_0_0_0},
	{"directory", 1, 134221387, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"access", 2, 134221388, &EmptyCustomAttributesCache, &t1751_0_0_0},
	{"corlib_internal", 3, 134221389, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9095_MI = 
{
	".ctor", (methodPointerType)&m9095, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125_t186, t1744_m9095_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 2890, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1744_0_0_0;
extern Il2CppType t1744_0_0_0;
static ParameterInfo t1744_m9096_ParameterInfos[] = 
{
	{"ab", 0, 134221390, &EmptyCustomAttributesCache, &t1744_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9096_MI = 
{
	"basic_init", (methodPointerType)&m9096, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1744_m9096_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 2891, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9097_MI = 
{
	"get_Location", (methodPointerType)&m9097, &t1744_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 2892, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1744_m9098_ParameterInfos[] = 
{
	{"name", 0, 134221391, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"emitSymbolInfo", 1, 134221392, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1749_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9098_MI = 
{
	"DefineDynamicModule", (methodPointerType)&m9098, &t1744_TI, &t1749_0_0_0, RuntimeInvoker_t9_t9_t186, t1744_m9098_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 2893, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1744_m9099_ParameterInfos[] = 
{
	{"name", 0, 134221393, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"fileName", 1, 134221394, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"emitSymbolInfo", 2, 134221395, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"transient", 3, 134221396, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1749_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9099_MI = 
{
	"DefineDynamicModule", (methodPointerType)&m9099, &t1744_TI, &t1749_0_0_0, RuntimeInvoker_t9_t9_t9_t186_t186, t1744_m9099_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 2894, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1750_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9100_MI = 
{
	"GetModulesInternal", (methodPointerType)&m9100, &t1744_TI, &t1750_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 195, 0, 15, 0, false, false, 2895, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9101_MI = 
{
	"get_IsCompilerContext", (methodPointerType)&m9101, &t1744_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2896, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9102_MI = 
{
	"get_IsSave", (methodPointerType)&m9102, &t1744_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2897, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9103_MI = 
{
	"get_IsRun", (methodPointerType)&m9103, &t1744_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2898, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9104_MI = 
{
	"get_AssemblyDir", (methodPointerType)&m9104, &t1744_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2899, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9105_MI = 
{
	"not_supported", (methodPointerType)&m9105, &t1744_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2900, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1744_m9106_ParameterInfos[] = 
{
	{"name", 0, 134221397, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"fileName", 1, 134221398, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"fileNeedsToExists", 2, 134221399, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9106_MI = 
{
	"check_name_and_filename", (methodPointerType)&m9106, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1744_m9106_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2901, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1748_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9107_MI = 
{
	"UnprotectedGetName", (methodPointerType)&m9107, &t1744_TI, &t1748_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 195, 0, 13, 0, false, false, 2902, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1744_MIs[] =
{
	&m9095_MI,
	&m9096_MI,
	&m9097_MI,
	&m9098_MI,
	&m9099_MI,
	&m9100_MI,
	&m9101_MI,
	&m9102_MI,
	&m9103_MI,
	&m9104_MI,
	&m9105_MI,
	&m9106_MI,
	&m9107_MI,
	NULL
};
extern Il2CppType t1745_0_0_1;
FieldInfo t1744_f10_FieldInfo = 
{
	"modules", &t1745_0_0_1, &t1744_TI, offsetof(t1744, f10), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1744_f11_FieldInfo = 
{
	"name", &t2_0_0_1, &t1744_TI, offsetof(t1744, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1744_f12_FieldInfo = 
{
	"dir", &t2_0_0_1, &t1744_TI, offsetof(t1744, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1746_0_0_1;
FieldInfo t1744_f13_FieldInfo = 
{
	"resources", &t1746_0_0_1, &t1744_TI, offsetof(t1744, f13), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1744_f14_FieldInfo = 
{
	"version", &t2_0_0_1, &t1744_TI, offsetof(t1744, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1744_f15_FieldInfo = 
{
	"culture", &t2_0_0_1, &t1744_TI, offsetof(t1744, f15), &EmptyCustomAttributesCache};
extern Il2CppType t168_0_0_1;
FieldInfo t1744_f16_FieldInfo = 
{
	"flags", &t168_0_0_1, &t1744_TI, offsetof(t1744, f16), &EmptyCustomAttributesCache};
extern Il2CppType t1747_0_0_1;
FieldInfo t1744_f17_FieldInfo = 
{
	"pekind", &t1747_0_0_1, &t1744_TI, offsetof(t1744, f17), &EmptyCustomAttributesCache};
extern Il2CppType t168_0_0_1;
FieldInfo t1744_f18_FieldInfo = 
{
	"access", &t168_0_0_1, &t1744_TI, offsetof(t1744, f18), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1744_f19_FieldInfo = 
{
	"corlib_internal", &t124_0_0_1, &t1744_TI, offsetof(t1744, f19), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t1744_f20_FieldInfo = 
{
	"pktoken", &t730_0_0_1, &t1744_TI, offsetof(t1744, f20), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_3;
FieldInfo t1744_f21_FieldInfo = 
{
	"corlib_object_type", &t126_0_0_3, &t1744_TI, offsetof(t1744, f21), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_3;
FieldInfo t1744_f22_FieldInfo = 
{
	"corlib_value_type", &t126_0_0_3, &t1744_TI, offsetof(t1744, f22), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_3;
FieldInfo t1744_f23_FieldInfo = 
{
	"corlib_enum_type", &t126_0_0_3, &t1744_TI, offsetof(t1744, f23), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_3;
FieldInfo t1744_f24_FieldInfo = 
{
	"corlib_void_type", &t126_0_0_3, &t1744_TI, offsetof(t1744, f24), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1744_f25_FieldInfo = 
{
	"created", &t124_0_0_1, &t1744_TI, offsetof(t1744, f25), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1744_f26_FieldInfo = 
{
	"is_module_only", &t124_0_0_1, &t1744_TI, offsetof(t1744, f26), &EmptyCustomAttributesCache};
extern Il2CppType t1658_0_0_1;
FieldInfo t1744_f27_FieldInfo = 
{
	"sn", &t1658_0_0_1, &t1744_TI, offsetof(t1744, f27), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_33;
FieldInfo t1744_f28_FieldInfo = 
{
	"is_compiler_context", &t124_0_0_33, &t1744_TI, offsetof(t1744, f28), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1744_f29_FieldInfo = 
{
	"versioninfo_culture", &t2_0_0_1, &t1744_TI, offsetof(t1744, f29), &EmptyCustomAttributesCache};
static FieldInfo* t1744_FIs[] =
{
	&t1744_f10_FieldInfo,
	&t1744_f11_FieldInfo,
	&t1744_f12_FieldInfo,
	&t1744_f13_FieldInfo,
	&t1744_f14_FieldInfo,
	&t1744_f15_FieldInfo,
	&t1744_f16_FieldInfo,
	&t1744_f17_FieldInfo,
	&t1744_f18_FieldInfo,
	&t1744_f19_FieldInfo,
	&t1744_f20_FieldInfo,
	&t1744_f21_FieldInfo,
	&t1744_f22_FieldInfo,
	&t1744_f23_FieldInfo,
	&t1744_f24_FieldInfo,
	&t1744_f25_FieldInfo,
	&t1744_f26_FieldInfo,
	&t1744_f27_FieldInfo,
	&t1744_f28_FieldInfo,
	&t1744_f29_FieldInfo,
	NULL
};
extern MethodInfo m9097_MI;
static PropertyInfo t1744____Location_PropertyInfo = 
{
	&t1744_TI, "Location", &m9097_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9101_MI;
static PropertyInfo t1744____IsCompilerContext_PropertyInfo = 
{
	&t1744_TI, "IsCompilerContext", &m9101_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9102_MI;
static PropertyInfo t1744____IsSave_PropertyInfo = 
{
	&t1744_TI, "IsSave", &m9102_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9103_MI;
static PropertyInfo t1744____IsRun_PropertyInfo = 
{
	&t1744_TI, "IsRun", &m9103_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9104_MI;
static PropertyInfo t1744____AssemblyDir_PropertyInfo = 
{
	&t1744_TI, "AssemblyDir", &m9104_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1744_PIs[] =
{
	&t1744____Location_PropertyInfo,
	&t1744____IsCompilerContext_PropertyInfo,
	&t1744____IsSave_PropertyInfo,
	&t1744____IsRun_PropertyInfo,
	&t1744____AssemblyDir_PropertyInfo,
	NULL
};
extern MethodInfo m9461_MI;
extern MethodInfo m9454_MI;
extern MethodInfo m9453_MI;
extern MethodInfo m9451_MI;
extern MethodInfo m9456_MI;
extern MethodInfo m5772_MI;
extern MethodInfo m9458_MI;
extern MethodInfo m9107_MI;
extern MethodInfo m9467_MI;
extern MethodInfo m9100_MI;
extern MethodInfo m9469_MI;
static Il2CppMethodReference t1744_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m9461_MI,
	&m9454_MI,
	&m9453_MI,
	&m9451_MI,
	&m9097_MI,
	&m9453_MI,
	&m9454_MI,
	&m9456_MI,
	&m5772_MI,
	&m9458_MI,
	&m9107_MI,
	&m9467_MI,
	&m9100_MI,
	&m9469_MI,
};
static bool t1744_VTIGM[] =
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
extern Il2CppType t2589_0_0_0;
static const Il2CppType* t1744_ITIs[] = 
{
	&t2589_0_0_0,
};
extern Il2CppType t2130_0_0_0;
extern Il2CppType t2590_0_0_0;
static Il2CppInterfaceOffsetPair t1744_IOs[] = 
{
	{ &t2130_0_0_0, 4},
	{ &t2590_0_0_0, 6},
	{ &t2589_0_0_0, 17},
};
extern TypeInfo t1838_TI;
#include "t1838.h"
#include "t1838MD.h"
extern MethodInfo m9771_MI;
extern TypeInfo t1840_TI;
#include "t1840.h"
#include "t1840MD.h"
extern MethodInfo m9772_MI;
extern TypeInfo t2589_TI;
void t1744_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1838 * tmp;
		tmp = (t1838 *)il2cpp_codegen_object_new (&t1838_TI);
		m9771(tmp, 0, &m9771_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1840 * tmp;
		tmp = (t1840 *)il2cpp_codegen_object_new (&t1840_TI);
		m9772(tmp, il2cpp_codegen_type_get_object(&t2589_0_0_0), &m9772_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1744__CustomAttributeCache = {
3,
NULL,
&t1744_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1744_1_0_0;
extern Il2CppType t1345_0_0_0;
struct t1744;
extern CustomAttributesCache t1744__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1744_DM = 
{
	NULL, NULL, t1744_ITIs, t1744_IOs, &t1345_0_0_0, t1744_VT, t1744_VTIGM, NULL};
TypeInfo t1744_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyBuilder", "System.Reflection.Emit", t1744_MIs, t1744_PIs, t1744_FIs, NULL, &t1744_TI, NULL, &t1744__CustomAttributeCache, &t1744_0_0_0, &t1744_1_0_0, &t1744_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1744), sizeof (t1744), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 13, 5, 20, 0, 0, 17, 1, 3};
#include "t1751.h"
// Metadata Definition System.Reflection.Emit.AssemblyBuilderAccess
extern TypeInfo t1751_TI;
#include "t1751MD.h"
static MethodInfo* t1751_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1751_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1751_TI, offsetof(t1751, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1751_0_0_32854;
FieldInfo t1751_f2_FieldInfo = 
{
	"Run", &t1751_0_0_32854, &t1751_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1751_0_0_32854;
FieldInfo t1751_f3_FieldInfo = 
{
	"Save", &t1751_0_0_32854, &t1751_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1751_0_0_32854;
FieldInfo t1751_f4_FieldInfo = 
{
	"RunAndSave", &t1751_0_0_32854, &t1751_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1751_0_0_32854;
FieldInfo t1751_f5_FieldInfo = 
{
	"ReflectionOnly", &t1751_0_0_32854, &t1751_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1751_FIs[] =
{
	&t1751_f1_FieldInfo,
	&t1751_f2_FieldInfo,
	&t1751_f3_FieldInfo,
	&t1751_f4_FieldInfo,
	&t1751_f5_FieldInfo,
	NULL
};
static const int32_t t1751_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1751_f2_DefaultValue = 
{
	&t1751_f2_FieldInfo, { (char*)&t1751_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1751_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1751_f3_DefaultValue = 
{
	&t1751_f3_FieldInfo, { (char*)&t1751_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1751_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1751_f4_DefaultValue = 
{
	&t1751_f4_FieldInfo, { (char*)&t1751_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1751_f5_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1751_f5_DefaultValue = 
{
	&t1751_f5_FieldInfo, { (char*)&t1751_f5_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1751_FDVs[] = 
{
	&t1751_f2_DefaultValue,
	&t1751_f3_DefaultValue,
	&t1751_f4_DefaultValue,
	&t1751_f5_DefaultValue,
	NULL
};
static Il2CppMethodReference t1751_VT[] =
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
static bool t1751_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1751_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1751_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
}
CustomAttributesCache t1751__CustomAttributeCache = {
2,
NULL,
&t1751_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1751_1_0_0;
extern CustomAttributesCache t1751__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1751_DM = 
{
	NULL, NULL, NULL, t1751_IOs, &t8_0_0_0, t1751_VT, t1751_VTIGM, NULL};
TypeInfo t1751_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyBuilderAccess", "System.Reflection.Emit", t1751_MIs, NULL, t1751_FIs, NULL, &t125_TI, NULL, &t1751__CustomAttributeCache, &t1751_0_0_0, &t1751_1_0_0, &t1751_DM, NULL, NULL, NULL, t1751_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1751)+ sizeof (Il2CppObject), sizeof (t1751)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t1752.h"
// Metadata Definition System.Reflection.Emit.ConstructorBuilder
extern TypeInfo t1752_TI;
#include "t1752MD.h"
extern Il2CppType t1754_0_0_0;
extern Il2CppType t1754_0_0_0;
extern Il2CppType t1757_0_0_0;
extern Il2CppType t1757_0_0_0;
extern Il2CppType t1573_0_0_0;
extern Il2CppType t1573_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t1756_0_0_0;
extern Il2CppType t1756_0_0_0;
extern Il2CppType t1756_0_0_0;
static ParameterInfo t1752_m9108_ParameterInfos[] = 
{
	{"tb", 0, 134221400, &EmptyCustomAttributesCache, &t1754_0_0_0},
	{"attributes", 1, 134221401, &EmptyCustomAttributesCache, &t1757_0_0_0},
	{"callingConvention", 2, 134221402, &EmptyCustomAttributesCache, &t1573_0_0_0},
	{"parameterTypes", 3, 134221403, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"paramModReq", 4, 134221404, &EmptyCustomAttributesCache, &t1756_0_0_0},
	{"paramModOpt", 5, 134221405, &EmptyCustomAttributesCache, &t1756_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9108_MI = 
{
	".ctor", (methodPointerType)&m9108, &t1752_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t9_t9_t9, t1752_m9108_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 6, false, false, 2903, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1573_0_0_0;
extern void* RuntimeInvoker_t1573 (MethodInfo* method, void* obj, void** args);
MethodInfo m9109_MI = 
{
	"get_CallingConvention", (methodPointerType)&m9109, &t1752_TI, &t1573_0_0_0, RuntimeInvoker_t1573, NULL, &EmptyCustomAttributesCache, 2246, 0, 20, 0, false, false, 2904, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1754_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9110_MI = 
{
	"get_TypeBuilder", (methodPointerType)&m9110, &t1752_TI, &t1754_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2905, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t928_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9111_MI = 
{
	"GetParameters", (methodPointerType)&m9111, &t1752_TI, &t928_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 14, 0, false, false, 2906, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t928_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9112_MI = 
{
	"GetParametersInternal", (methodPointerType)&m9112, &t1752_TI, &t928_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2907, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9113_MI = 
{
	"GetParameterCount", (methodPointerType)&m9113, &t1752_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 195, 0, 15, 0, false, false, 2908, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t925_0_0_0;
extern Il2CppType t925_0_0_0;
extern Il2CppType t933_0_0_0;
extern Il2CppType t933_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t901_0_0_0;
static ParameterInfo t1752_m9114_ParameterInfos[] = 
{
	{"obj", 0, 134221406, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"invokeAttr", 1, 134221407, &EmptyCustomAttributesCache, &t925_0_0_0},
	{"binder", 2, 134221408, &EmptyCustomAttributesCache, &t933_0_0_0},
	{"parameters", 3, 134221409, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"culture", 4, 134221410, &EmptyCustomAttributesCache, &t901_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9114_MI = 
{
	"Invoke", (methodPointerType)&m9114, &t1752_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9, t1752_m9114_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 5, false, false, 2909, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t925_0_0_0;
extern Il2CppType t933_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t901_0_0_0;
static ParameterInfo t1752_m9115_ParameterInfos[] = 
{
	{"invokeAttr", 0, 134221411, &EmptyCustomAttributesCache, &t925_0_0_0},
	{"binder", 1, 134221412, &EmptyCustomAttributesCache, &t933_0_0_0},
	{"parameters", 2, 134221413, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"culture", 3, 134221414, &EmptyCustomAttributesCache, &t901_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t125_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9115_MI = 
{
	"Invoke", (methodPointerType)&m9115, &t1752_TI, &t9_0_0_0, RuntimeInvoker_t9_t125_t9_t9_t9, t1752_m9115_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 29, 4, false, false, 2910, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1758_0_0_0;
extern void* RuntimeInvoker_t1758 (MethodInfo* method, void* obj, void** args);
MethodInfo m9116_MI = 
{
	"get_MethodHandle", (methodPointerType)&m9116, &t1752_TI, &t1758_0_0_0, RuntimeInvoker_t1758, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 2911, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1757_0_0_0;
extern void* RuntimeInvoker_t1757 (MethodInfo* method, void* obj, void** args);
MethodInfo m9117_MI = 
{
	"get_Attributes", (methodPointerType)&m9117, &t1752_TI, &t1757_0_0_0, RuntimeInvoker_t1757, NULL, &EmptyCustomAttributesCache, 2246, 0, 19, 0, false, false, 2912, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9118_MI = 
{
	"get_ReflectedType", (methodPointerType)&m9118, &t1752_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2913, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9119_MI = 
{
	"get_DeclaringType", (methodPointerType)&m9119, &t1752_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2914, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9120_MI = 
{
	"get_Name", (methodPointerType)&m9120, &t1752_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2915, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1752_m9121_ParameterInfos[] = 
{
	{"attributeType", 0, 134221415, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221416, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9121_MI = 
{
	"IsDefined", (methodPointerType)&m9121, &t1752_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1752_m9121_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 2916, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1752_m9122_ParameterInfos[] = 
{
	{"inherit", 0, 134221417, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9122_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9122, &t1752_TI, &t158_0_0_0, RuntimeInvoker_t9_t186, t1752_m9122_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 2917, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1752_m9123_ParameterInfos[] = 
{
	{"attributeType", 0, 134221418, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221419, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9123_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9123, &t1752_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t186, t1752_m9123_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 2918, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1753_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9124_MI = 
{
	"GetILGenerator", (methodPointerType)&m9124, &t1752_TI, &t1753_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 2919, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1752_m9125_ParameterInfos[] = 
{
	{"streamSize", 0, 134221420, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t1753_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9125_MI = 
{
	"GetILGenerator", (methodPointerType)&m9125, &t1752_TI, &t1753_0_0_0, RuntimeInvoker_t9_t125, t1752_m9125_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2920, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1759_0_0_0;
extern void* RuntimeInvoker_t1759 (MethodInfo* method, void* obj, void** args);
MethodInfo m9126_MI = 
{
	"GetToken", (methodPointerType)&m9126, &t1752_TI, &t1759_0_0_0, RuntimeInvoker_t1759, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 2921, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1568_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9127_MI = 
{
	"get_Module", (methodPointerType)&m9127, &t1752_TI, &t1568_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 2922, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9128_MI = 
{
	"ToString", (methodPointerType)&m9128, &t1752_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2923, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1752_m9129_ParameterInfos[] = 
{
	{"obj", 0, 134221421, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"table", 1, 134221422, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inc", 2, 134221423, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9129_MI = 
{
	"get_next_table_index", (methodPointerType)&m9129, &t1752_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t186, t1752_m9129_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 24, 3, false, false, 2924, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9130_MI = 
{
	"get_IsCompilerContext", (methodPointerType)&m9130, &t1752_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2177, 0, 255, 0, false, false, 2925, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9131_MI = 
{
	"not_supported", (methodPointerType)&m9131, &t1752_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2926, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9132_MI = 
{
	"not_created", (methodPointerType)&m9132, &t1752_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2927, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1752_MIs[] =
{
	&m9108_MI,
	&m9109_MI,
	&m9110_MI,
	&m9111_MI,
	&m9112_MI,
	&m9113_MI,
	&m9114_MI,
	&m9115_MI,
	&m9116_MI,
	&m9117_MI,
	&m9118_MI,
	&m9119_MI,
	&m9120_MI,
	&m9121_MI,
	&m9122_MI,
	&m9123_MI,
	&m9124_MI,
	&m9125_MI,
	&m9126_MI,
	&m9127_MI,
	&m9128_MI,
	&m9129_MI,
	&m9130_MI,
	&m9131_MI,
	&m9132_MI,
	NULL
};
extern Il2CppType t1753_0_0_1;
FieldInfo t1752_f2_FieldInfo = 
{
	"ilgen", &t1753_0_0_1, &t1752_TI, offsetof(t1752, f2), &EmptyCustomAttributesCache};
extern Il2CppType t152_0_0_3;
FieldInfo t1752_f3_FieldInfo = 
{
	"parameters", &t152_0_0_3, &t1752_TI, offsetof(t1752, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1757_0_0_1;
FieldInfo t1752_f4_FieldInfo = 
{
	"attrs", &t1757_0_0_1, &t1752_TI, offsetof(t1752, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1752_f5_FieldInfo = 
{
	"table_idx", &t125_0_0_1, &t1752_TI, offsetof(t1752, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1573_0_0_1;
FieldInfo t1752_f6_FieldInfo = 
{
	"call_conv", &t1573_0_0_1, &t1752_TI, offsetof(t1752, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1754_0_0_1;
FieldInfo t1752_f7_FieldInfo = 
{
	"type", &t1754_0_0_1, &t1752_TI, offsetof(t1752, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1755_0_0_3;
FieldInfo t1752_f8_FieldInfo = 
{
	"pinfo", &t1755_0_0_3, &t1752_TI, offsetof(t1752, f8), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1752_f9_FieldInfo = 
{
	"init_locals", &t124_0_0_1, &t1752_TI, offsetof(t1752, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1756_0_0_1;
FieldInfo t1752_f10_FieldInfo = 
{
	"paramModReq", &t1756_0_0_1, &t1752_TI, offsetof(t1752, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1756_0_0_1;
FieldInfo t1752_f11_FieldInfo = 
{
	"paramModOpt", &t1756_0_0_1, &t1752_TI, offsetof(t1752, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1752_FIs[] =
{
	&t1752_f2_FieldInfo,
	&t1752_f3_FieldInfo,
	&t1752_f4_FieldInfo,
	&t1752_f5_FieldInfo,
	&t1752_f6_FieldInfo,
	&t1752_f7_FieldInfo,
	&t1752_f8_FieldInfo,
	&t1752_f9_FieldInfo,
	&t1752_f10_FieldInfo,
	&t1752_f11_FieldInfo,
	NULL
};
extern MethodInfo m9109_MI;
extern CustomAttributesCache t1752__CustomAttributeCache_t1752____CallingConvention_PropertyInfo;
static PropertyInfo t1752____CallingConvention_PropertyInfo = 
{
	&t1752_TI, "CallingConvention", &m9109_MI, NULL, 0, &t1752__CustomAttributeCache_t1752____CallingConvention_PropertyInfo};
extern MethodInfo m9110_MI;
static PropertyInfo t1752____TypeBuilder_PropertyInfo = 
{
	&t1752_TI, "TypeBuilder", &m9110_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9116_MI;
static PropertyInfo t1752____MethodHandle_PropertyInfo = 
{
	&t1752_TI, "MethodHandle", &m9116_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9117_MI;
static PropertyInfo t1752____Attributes_PropertyInfo = 
{
	&t1752_TI, "Attributes", &m9117_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9118_MI;
static PropertyInfo t1752____ReflectedType_PropertyInfo = 
{
	&t1752_TI, "ReflectedType", &m9118_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9119_MI;
static PropertyInfo t1752____DeclaringType_PropertyInfo = 
{
	&t1752_TI, "DeclaringType", &m9119_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9120_MI;
static PropertyInfo t1752____Name_PropertyInfo = 
{
	&t1752_TI, "Name", &m9120_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9127_MI;
static PropertyInfo t1752____Module_PropertyInfo = 
{
	&t1752_TI, "Module", &m9127_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9130_MI;
static PropertyInfo t1752____IsCompilerContext_PropertyInfo = 
{
	&t1752_TI, "IsCompilerContext", &m9130_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1752_PIs[] =
{
	&t1752____CallingConvention_PropertyInfo,
	&t1752____TypeBuilder_PropertyInfo,
	&t1752____MethodHandle_PropertyInfo,
	&t1752____Attributes_PropertyInfo,
	&t1752____ReflectedType_PropertyInfo,
	&t1752____DeclaringType_PropertyInfo,
	&t1752____Name_PropertyInfo,
	&t1752____Module_PropertyInfo,
	&t1752____IsCompilerContext_PropertyInfo,
	NULL
};
extern MethodInfo m9128_MI;
extern MethodInfo m9123_MI;
extern MethodInfo m9121_MI;
extern MethodInfo m9513_MI;
extern MethodInfo m9122_MI;
extern MethodInfo m9111_MI;
extern MethodInfo m9113_MI;
extern MethodInfo m4417_MI;
extern MethodInfo m9114_MI;
extern MethodInfo m4390_MI;
extern MethodInfo m4389_MI;
extern MethodInfo m9545_MI;
extern MethodInfo m9129_MI;
extern MethodInfo m9547_MI;
extern MethodInfo m9548_MI;
extern MethodInfo m9549_MI;
extern MethodInfo m9550_MI;
extern MethodInfo m9115_MI;
static Il2CppMethodReference t1752_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m9128_MI,
	&m9123_MI,
	&m9121_MI,
	&m9119_MI,
	&m9513_MI,
	&m9120_MI,
	&m9118_MI,
	&m9127_MI,
	&m9121_MI,
	&m9122_MI,
	&m9123_MI,
	&m9111_MI,
	&m9113_MI,
	&m4417_MI,
	&m9114_MI,
	&m9116_MI,
	&m9117_MI,
	&m9109_MI,
	&m4390_MI,
	&m4389_MI,
	&m9545_MI,
	&m9129_MI,
	&m9547_MI,
	&m9548_MI,
	&m9549_MI,
	&m9550_MI,
	&m9115_MI,
};
static bool t1752_VTIGM[] =
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
	false,
	false,
	false,
};
extern Il2CppType t2591_0_0_0;
static const Il2CppType* t1752_ITIs[] = 
{
	&t2591_0_0_0,
};
extern Il2CppType t2592_0_0_0;
extern Il2CppType t2593_0_0_0;
extern Il2CppType t2421_0_0_0;
static Il2CppInterfaceOffsetPair t1752_IOs[] = 
{
	{ &t2592_0_0_0, 29},
	{ &t2593_0_0_0, 14},
	{ &t2130_0_0_0, 4},
	{ &t2421_0_0_0, 6},
	{ &t2591_0_0_0, 30},
};
extern TypeInfo t2591_TI;
void t1752_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1840 * tmp;
		tmp = (t1840 *)il2cpp_codegen_object_new (&t1840_TI);
		m9772(tmp, il2cpp_codegen_type_get_object(&t2591_0_0_0), &m9772_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1838 * tmp;
		tmp = (t1838 *)il2cpp_codegen_object_new (&t1838_TI);
		m9771(tmp, 0, &m9771_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t1752_CustomAttributesCacheGenerator_t1752____CallingConvention_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7848(tmp, &m7848_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1752__CustomAttributeCache = {
3,
NULL,
&t1752_CustomAttributesCacheGenerator
};
CustomAttributesCache t1752__CustomAttributeCache_t1752____CallingConvention_PropertyInfo = {
1,
NULL,
&t1752_CustomAttributesCacheGenerator_t1752____CallingConvention_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1752_0_0_0;
extern Il2CppType t1752_1_0_0;
extern Il2CppType t826_0_0_0;
struct t1752;
extern CustomAttributesCache t1752__CustomAttributeCache;
extern CustomAttributesCache t1752__CustomAttributeCache_t1752____CallingConvention_PropertyInfo;
const Il2CppTypeDefinitionMetadata t1752_DM = 
{
	NULL, NULL, t1752_ITIs, t1752_IOs, &t826_0_0_0, t1752_VT, t1752_VTIGM, NULL};
TypeInfo t1752_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ConstructorBuilder", "System.Reflection.Emit", t1752_MIs, t1752_PIs, t1752_FIs, NULL, &t1752_TI, NULL, &t1752__CustomAttributeCache, &t1752_0_0_0, &t1752_1_0_0, &t1752_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1752), sizeof (t1752), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 25, 9, 10, 0, 0, 30, 1, 5};
#include "t1760.h"
// Metadata Definition System.Reflection.Emit.DynamicMethod
extern TypeInfo t1760_TI;
#include "t1760MD.h"
extern Il2CppType t1760_0_0_0;
extern Il2CppType t1760_0_0_0;
static ParameterInfo t1760_m9133_ParameterInfos[] = 
{
	{"m", 0, 134221424, &EmptyCustomAttributesCache, &t1760_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9133_MI = 
{
	"create_dynamic_method", (methodPointerType)&m9133, &t1760_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1760_m9133_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 2928, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1760_0_0_0;
static ParameterInfo t1760_m9134_ParameterInfos[] = 
{
	{"m", 0, 134221425, &EmptyCustomAttributesCache, &t1760_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9134_MI = 
{
	"destroy_dynamic_method", (methodPointerType)&m9134, &t1760_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1760_m9134_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 2929, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9135_MI = 
{
	"CreateDynMethod", (methodPointerType)&m9135, &t1760_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2930, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9136_MI = 
{
	"Finalize", (methodPointerType)&m9136, &t1760_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 2931, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t828_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9137_MI = 
{
	"GetBaseDefinition", (methodPointerType)&m9137, &t1760_TI, &t828_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 29, 0, false, false, 2932, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1760_m9138_ParameterInfos[] = 
{
	{"inherit", 0, 134221426, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1760__CustomAttributeCache_m9138;
MethodInfo m9138_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9138, &t1760_TI, &t158_0_0_0, RuntimeInvoker_t9_t186, t1760_m9138_ParameterInfos, &t1760__CustomAttributeCache_m9138, 198, 0, 12, 1, false, false, 2933, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1760_m9139_ParameterInfos[] = 
{
	{"attributeType", 0, 134221427, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221428, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1760__CustomAttributeCache_m9139;
MethodInfo m9139_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9139, &t1760_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t186, t1760_m9139_ParameterInfos, &t1760__CustomAttributeCache_m9139, 198, 0, 13, 2, false, false, 2934, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t928_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9140_MI = 
{
	"GetParameters", (methodPointerType)&m9140, &t1760_TI, &t928_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 14, 0, false, false, 2935, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t925_0_0_0;
extern Il2CppType t933_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t901_0_0_0;
static ParameterInfo t1760_m9141_ParameterInfos[] = 
{
	{"obj", 0, 134221429, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"invokeAttr", 1, 134221430, &EmptyCustomAttributesCache, &t925_0_0_0},
	{"binder", 2, 134221431, &EmptyCustomAttributesCache, &t933_0_0_0},
	{"parameters", 3, 134221432, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"culture", 4, 134221433, &EmptyCustomAttributesCache, &t901_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9141_MI = 
{
	"Invoke", (methodPointerType)&m9141, &t1760_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9, t1760_m9141_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 5, false, false, 2936, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1760_m9142_ParameterInfos[] = 
{
	{"attributeType", 0, 134221434, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221435, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1760__CustomAttributeCache_m9142;
MethodInfo m9142_MI = 
{
	"IsDefined", (methodPointerType)&m9142, &t1760_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1760_m9142_ParameterInfos, &t1760__CustomAttributeCache_m9142, 198, 0, 11, 2, false, false, 2937, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9143_MI = 
{
	"ToString", (methodPointerType)&m9143, &t1760_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2938, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1757_0_0_0;
extern void* RuntimeInvoker_t1757 (MethodInfo* method, void* obj, void** args);
MethodInfo m9144_MI = 
{
	"get_Attributes", (methodPointerType)&m9144, &t1760_TI, &t1757_0_0_0, RuntimeInvoker_t1757, NULL, &EmptyCustomAttributesCache, 2246, 0, 19, 0, false, false, 2939, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1573_0_0_0;
extern void* RuntimeInvoker_t1573 (MethodInfo* method, void* obj, void** args);
MethodInfo m9145_MI = 
{
	"get_CallingConvention", (methodPointerType)&m9145, &t1760_TI, &t1573_0_0_0, RuntimeInvoker_t1573, NULL, &EmptyCustomAttributesCache, 2246, 0, 20, 0, false, false, 2940, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9146_MI = 
{
	"get_DeclaringType", (methodPointerType)&m9146, &t1760_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2941, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1758_0_0_0;
extern void* RuntimeInvoker_t1758 (MethodInfo* method, void* obj, void** args);
MethodInfo m9147_MI = 
{
	"get_MethodHandle", (methodPointerType)&m9147, &t1760_TI, &t1758_0_0_0, RuntimeInvoker_t1758, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 2942, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1568_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9148_MI = 
{
	"get_Module", (methodPointerType)&m9148, &t1760_TI, &t1568_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 2943, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9149_MI = 
{
	"get_Name", (methodPointerType)&m9149, &t1760_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2944, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9150_MI = 
{
	"get_ReflectedType", (methodPointerType)&m9150, &t1760_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2945, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9151_MI = 
{
	"get_ReturnType", (methodPointerType)&m9151, &t1760_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 30, 0, false, false, 2946, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1760_MIs[] =
{
	&m9133_MI,
	&m9134_MI,
	&m9135_MI,
	&m9136_MI,
	&m9137_MI,
	&m9138_MI,
	&m9139_MI,
	&m9140_MI,
	&m9141_MI,
	&m9142_MI,
	&m9143_MI,
	&m9144_MI,
	&m9145_MI,
	&m9146_MI,
	&m9147_MI,
	&m9148_MI,
	&m9149_MI,
	&m9150_MI,
	&m9151_MI,
	NULL
};
extern Il2CppType t1758_0_0_1;
FieldInfo t1760_f0_FieldInfo = 
{
	"mhandle", &t1758_0_0_1, &t1760_TI, offsetof(t1760, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1760_f1_FieldInfo = 
{
	"name", &t2_0_0_1, &t1760_TI, offsetof(t1760, f1), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1760_f2_FieldInfo = 
{
	"returnType", &t126_0_0_1, &t1760_TI, offsetof(t1760, f2), &EmptyCustomAttributesCache};
extern Il2CppType t152_0_0_1;
FieldInfo t1760_f3_FieldInfo = 
{
	"parameters", &t152_0_0_1, &t1760_TI, offsetof(t1760, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1757_0_0_1;
FieldInfo t1760_f4_FieldInfo = 
{
	"attributes", &t1757_0_0_1, &t1760_TI, offsetof(t1760, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1573_0_0_1;
FieldInfo t1760_f5_FieldInfo = 
{
	"callingConvention", &t1573_0_0_1, &t1760_TI, offsetof(t1760, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1568_0_0_1;
FieldInfo t1760_f6_FieldInfo = 
{
	"module", &t1568_0_0_1, &t1760_TI, offsetof(t1760, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1753_0_0_1;
FieldInfo t1760_f7_FieldInfo = 
{
	"ilgen", &t1753_0_0_1, &t1760_TI, offsetof(t1760, f7), &EmptyCustomAttributesCache};
extern Il2CppType t158_0_0_1;
FieldInfo t1760_f8_FieldInfo = 
{
	"refs", &t158_0_0_1, &t1760_TI, offsetof(t1760, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1761_0_0_1;
FieldInfo t1760_f9_FieldInfo = 
{
	"method", &t1761_0_0_1, &t1760_TI, offsetof(t1760, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1755_0_0_1;
FieldInfo t1760_f10_FieldInfo = 
{
	"pinfo", &t1755_0_0_1, &t1760_TI, offsetof(t1760, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t1760_f11_FieldInfo = 
{
	"creating", &t124_0_0_3, &t1760_TI, offsetof(t1760, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1760_FIs[] =
{
	&t1760_f0_FieldInfo,
	&t1760_f1_FieldInfo,
	&t1760_f2_FieldInfo,
	&t1760_f3_FieldInfo,
	&t1760_f4_FieldInfo,
	&t1760_f5_FieldInfo,
	&t1760_f6_FieldInfo,
	&t1760_f7_FieldInfo,
	&t1760_f8_FieldInfo,
	&t1760_f9_FieldInfo,
	&t1760_f10_FieldInfo,
	&t1760_f11_FieldInfo,
	NULL
};
extern MethodInfo m9144_MI;
static PropertyInfo t1760____Attributes_PropertyInfo = 
{
	&t1760_TI, "Attributes", &m9144_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9145_MI;
static PropertyInfo t1760____CallingConvention_PropertyInfo = 
{
	&t1760_TI, "CallingConvention", &m9145_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9146_MI;
static PropertyInfo t1760____DeclaringType_PropertyInfo = 
{
	&t1760_TI, "DeclaringType", &m9146_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9147_MI;
static PropertyInfo t1760____MethodHandle_PropertyInfo = 
{
	&t1760_TI, "MethodHandle", &m9147_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9148_MI;
static PropertyInfo t1760____Module_PropertyInfo = 
{
	&t1760_TI, "Module", &m9148_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9149_MI;
static PropertyInfo t1760____Name_PropertyInfo = 
{
	&t1760_TI, "Name", &m9149_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9150_MI;
static PropertyInfo t1760____ReflectedType_PropertyInfo = 
{
	&t1760_TI, "ReflectedType", &m9150_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9151_MI;
static PropertyInfo t1760____ReturnType_PropertyInfo = 
{
	&t1760_TI, "ReturnType", &m9151_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1760_PIs[] =
{
	&t1760____Attributes_PropertyInfo,
	&t1760____CallingConvention_PropertyInfo,
	&t1760____DeclaringType_PropertyInfo,
	&t1760____MethodHandle_PropertyInfo,
	&t1760____Module_PropertyInfo,
	&t1760____Name_PropertyInfo,
	&t1760____ReflectedType_PropertyInfo,
	&t1760____ReturnType_PropertyInfo,
	NULL
};
extern MethodInfo m9136_MI;
extern MethodInfo m9143_MI;
extern MethodInfo m9139_MI;
extern MethodInfo m9142_MI;
extern MethodInfo m9552_MI;
extern MethodInfo m9138_MI;
extern MethodInfo m9140_MI;
extern MethodInfo m9543_MI;
extern MethodInfo m9141_MI;
extern MethodInfo m9546_MI;
extern MethodInfo m9555_MI;
extern MethodInfo m9558_MI;
extern MethodInfo m9557_MI;
extern MethodInfo m9556_MI;
extern MethodInfo m9137_MI;
extern MethodInfo m9554_MI;
static Il2CppMethodReference t1760_VT[] =
{
	&m671_MI,
	&m9136_MI,
	&m672_MI,
	&m9143_MI,
	&m9139_MI,
	&m9142_MI,
	&m9146_MI,
	&m9552_MI,
	&m9149_MI,
	&m9150_MI,
	&m9148_MI,
	&m9142_MI,
	&m9138_MI,
	&m9139_MI,
	&m9140_MI,
	&m9543_MI,
	&m4417_MI,
	&m9141_MI,
	&m9147_MI,
	&m9144_MI,
	&m9145_MI,
	&m4390_MI,
	&m4389_MI,
	&m9545_MI,
	&m9546_MI,
	&m9555_MI,
	&m9558_MI,
	&m9557_MI,
	&m9556_MI,
	&m9137_MI,
	&m9151_MI,
	&m9554_MI,
};
static bool t1760_VTIGM[] =
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
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t2594_0_0_0;
static Il2CppInterfaceOffsetPair t1760_IOs[] = 
{
	{ &t2594_0_0_0, 29},
	{ &t2593_0_0_0, 14},
	{ &t2130_0_0_0, 4},
	{ &t2421_0_0_0, 6},
};
void t1760_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1760_CustomAttributesCacheGenerator_m9138(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7849(tmp, il2cpp_codegen_string_new_wrapper("Not implemented"), &m7849_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1760_CustomAttributesCacheGenerator_m9139(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7849(tmp, il2cpp_codegen_string_new_wrapper("Not implemented"), &m7849_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1760_CustomAttributesCacheGenerator_m9142(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7849(tmp, il2cpp_codegen_string_new_wrapper("Not implemented"), &m7849_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1760__CustomAttributeCache = {
1,
NULL,
&t1760_CustomAttributesCacheGenerator
};
CustomAttributesCache t1760__CustomAttributeCache_m9138 = {
1,
NULL,
&t1760_CustomAttributesCacheGenerator_m9138
};
CustomAttributesCache t1760__CustomAttributeCache_m9139 = {
1,
NULL,
&t1760_CustomAttributesCacheGenerator_m9139
};
CustomAttributesCache t1760__CustomAttributeCache_m9142 = {
1,
NULL,
&t1760_CustomAttributesCacheGenerator_m9142
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1760_1_0_0;
extern Il2CppType t828_0_0_0;
struct t1760;
extern CustomAttributesCache t1760__CustomAttributeCache;
extern CustomAttributesCache t1760__CustomAttributeCache_m9138;
extern CustomAttributesCache t1760__CustomAttributeCache_m9139;
extern CustomAttributesCache t1760__CustomAttributeCache_m9142;
const Il2CppTypeDefinitionMetadata t1760_DM = 
{
	NULL, NULL, NULL, t1760_IOs, &t828_0_0_0, t1760_VT, t1760_VTIGM, NULL};
TypeInfo t1760_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DynamicMethod", "System.Reflection.Emit", t1760_MIs, t1760_PIs, t1760_FIs, NULL, &t1760_TI, NULL, &t1760__CustomAttributeCache, &t1760_0_0_0, &t1760_1_0_0, &t1760_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1760), sizeof (t1760), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 19, 8, 12, 0, 0, 32, 0, 4};
#include "t1762.h"
// Metadata Definition System.Reflection.Emit.EnumBuilder
extern TypeInfo t1762_TI;
#include "t1762MD.h"
extern Il2CppType t1345_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9152_MI = 
{
	"get_Assembly", (methodPointerType)&m9152, &t1762_TI, &t1345_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 14, 0, false, false, 2947, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9153_MI = 
{
	"get_AssemblyQualifiedName", (methodPointerType)&m9153, &t1762_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 2948, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9154_MI = 
{
	"get_BaseType", (methodPointerType)&m9154, &t1762_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 17, 0, false, false, 2949, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9155_MI = 
{
	"get_DeclaringType", (methodPointerType)&m9155, &t1762_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2950, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9156_MI = 
{
	"get_FullName", (methodPointerType)&m9156, &t1762_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 2951, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1568_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9157_MI = 
{
	"get_Module", (methodPointerType)&m9157, &t1762_TI, &t1568_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 2952, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9158_MI = 
{
	"get_Name", (methodPointerType)&m9158, &t1762_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2953, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9159_MI = 
{
	"get_Namespace", (methodPointerType)&m9159, &t1762_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 34, 0, false, false, 2954, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9160_MI = 
{
	"get_ReflectedType", (methodPointerType)&m9160, &t1762_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2955, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t127_0_0_0;
extern void* RuntimeInvoker_t127 (MethodInfo* method, void* obj, void** args);
MethodInfo m9161_MI = 
{
	"get_TypeHandle", (methodPointerType)&m9161, &t1762_TI, &t127_0_0_0, RuntimeInvoker_t127, NULL, &EmptyCustomAttributesCache, 2246, 0, 35, 0, false, false, 2956, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9162_MI = 
{
	"get_UnderlyingSystemType", (methodPointerType)&m9162, &t1762_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 36, 0, false, false, 2957, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1571_0_0_0;
extern void* RuntimeInvoker_t1571 (MethodInfo* method, void* obj, void** args);
MethodInfo m9163_MI = 
{
	"GetAttributeFlagsImpl", (methodPointerType)&m9163, &t1762_TI, &t1571_0_0_0, RuntimeInvoker_t1571, NULL, &EmptyCustomAttributesCache, 196, 0, 63, 0, false, false, 2958, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t925_0_0_0;
extern Il2CppType t933_0_0_0;
extern Il2CppType t1573_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t935_0_0_0;
extern Il2CppType t935_0_0_0;
static ParameterInfo t1762_m9164_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221436, &EmptyCustomAttributesCache, &t925_0_0_0},
	{"binder", 1, 134221437, &EmptyCustomAttributesCache, &t933_0_0_0},
	{"callConvention", 2, 134221438, &EmptyCustomAttributesCache, &t1573_0_0_0},
	{"types", 3, 134221439, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 4, 134221440, &EmptyCustomAttributesCache, &t935_0_0_0},
};
extern Il2CppType t826_0_0_0;
extern void* RuntimeInvoker_t9_t125_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9164_MI = 
{
	"GetConstructorImpl", (methodPointerType)&m9164, &t1762_TI, &t826_0_0_0, RuntimeInvoker_t9_t125_t9_t125_t9_t9, t1762_m9164_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 62, 5, false, false, 2959, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t925_0_0_0;
static ParameterInfo t1762_m9165_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221441, &EmptyCustomAttributesCache, &t925_0_0_0},
};
extern Il2CppType t926_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1762__CustomAttributeCache_m9165;
MethodInfo m9165_MI = 
{
	"GetConstructors", (methodPointerType)&m9165, &t1762_TI, &t926_0_0_0, RuntimeInvoker_t9_t125, t1762_m9165_ParameterInfos, &t1762__CustomAttributeCache_m9165, 198, 0, 76, 1, false, false, 2960, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1762_m9166_ParameterInfos[] = 
{
	{"inherit", 0, 134221442, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9166_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9166, &t1762_TI, &t158_0_0_0, RuntimeInvoker_t9_t186, t1762_m9166_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 2961, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1762_m9167_ParameterInfos[] = 
{
	{"attributeType", 0, 134221443, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221444, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9167_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9167, &t1762_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t186, t1762_m9167_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 2962, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9168_MI = 
{
	"GetElementType", (methodPointerType)&m9168, &t1762_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 44, 0, false, false, 2963, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t925_0_0_0;
static ParameterInfo t1762_m9169_ParameterInfos[] = 
{
	{"name", 0, 134221445, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221446, &EmptyCustomAttributesCache, &t925_0_0_0},
};
extern Il2CppType t1569_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9169_MI = 
{
	"GetEvent", (methodPointerType)&m9169, &t1762_TI, &t1569_0_0_0, RuntimeInvoker_t9_t9_t125, t1762_m9169_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 45, 2, false, false, 2964, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t925_0_0_0;
static ParameterInfo t1762_m9170_ParameterInfos[] = 
{
	{"name", 0, 134221447, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221448, &EmptyCustomAttributesCache, &t925_0_0_0},
};
extern Il2CppType t830_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9170_MI = 
{
	"GetField", (methodPointerType)&m9170, &t1762_TI, &t830_0_0_0, RuntimeInvoker_t9_t9_t125, t1762_m9170_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 46, 2, false, false, 2965, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t925_0_0_0;
static ParameterInfo t1762_m9171_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221449, &EmptyCustomAttributesCache, &t925_0_0_0},
};
extern Il2CppType t930_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9171_MI = 
{
	"GetFields", (methodPointerType)&m9171, &t1762_TI, &t930_0_0_0, RuntimeInvoker_t9_t125, t1762_m9171_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 47, 1, false, false, 2966, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9172_MI = 
{
	"GetInterfaces", (methodPointerType)&m9172, &t1762_TI, &t152_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 40, 0, false, false, 2967, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t925_0_0_0;
extern Il2CppType t933_0_0_0;
extern Il2CppType t1573_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t935_0_0_0;
static ParameterInfo t1762_m9173_ParameterInfos[] = 
{
	{"name", 0, 134221450, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221451, &EmptyCustomAttributesCache, &t925_0_0_0},
	{"binder", 2, 134221452, &EmptyCustomAttributesCache, &t933_0_0_0},
	{"callConvention", 3, 134221453, &EmptyCustomAttributesCache, &t1573_0_0_0},
	{"types", 4, 134221454, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 5, 134221455, &EmptyCustomAttributesCache, &t935_0_0_0},
};
extern Il2CppType t828_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9173_MI = 
{
	"GetMethodImpl", (methodPointerType)&m9173, &t1762_TI, &t828_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t125_t9_t9, t1762_m9173_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 53, 6, false, false, 2968, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t925_0_0_0;
static ParameterInfo t1762_m9174_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221456, &EmptyCustomAttributesCache, &t925_0_0_0},
};
extern Il2CppType t1570_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9174_MI = 
{
	"GetMethods", (methodPointerType)&m9174, &t1762_TI, &t1570_0_0_0, RuntimeInvoker_t9_t125, t1762_m9174_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 54, 1, false, false, 2969, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t925_0_0_0;
static ParameterInfo t1762_m9175_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221457, &EmptyCustomAttributesCache, &t925_0_0_0},
};
extern Il2CppType t929_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9175_MI = 
{
	"GetProperties", (methodPointerType)&m9175, &t1762_TI, &t929_0_0_0, RuntimeInvoker_t9_t125, t1762_m9175_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 55, 1, false, false, 2970, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t925_0_0_0;
extern Il2CppType t933_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t935_0_0_0;
static ParameterInfo t1762_m9176_ParameterInfos[] = 
{
	{"name", 0, 134221458, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221459, &EmptyCustomAttributesCache, &t925_0_0_0},
	{"binder", 2, 134221460, &EmptyCustomAttributesCache, &t933_0_0_0},
	{"returnType", 3, 134221461, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"types", 4, 134221462, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 5, 134221463, &EmptyCustomAttributesCache, &t935_0_0_0},
};
extern Il2CppType t837_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9176_MI = 
{
	"GetPropertyImpl", (methodPointerType)&m9176, &t1762_TI, &t837_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9, t1762_m9176_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 61, 6, false, false, 2971, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9177_MI = 
{
	"HasElementTypeImpl", (methodPointerType)&m9177, &t1762_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 64, 0, false, false, 2972, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t925_0_0_0;
extern Il2CppType t933_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t935_0_0_0;
extern Il2CppType t901_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1762_m9178_ParameterInfos[] = 
{
	{"name", 0, 134221464, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"invokeAttr", 1, 134221465, &EmptyCustomAttributesCache, &t925_0_0_0},
	{"binder", 2, 134221466, &EmptyCustomAttributesCache, &t933_0_0_0},
	{"target", 3, 134221467, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"args", 4, 134221468, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"modifiers", 5, 134221469, &EmptyCustomAttributesCache, &t935_0_0_0},
	{"culture", 6, 134221470, &EmptyCustomAttributesCache, &t901_0_0_0},
	{"namedParameters", 7, 134221471, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9178_MI = 
{
	"InvokeMember", (methodPointerType)&m9178, &t1762_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9_t9_t9, t1762_m9178_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 77, 8, false, false, 2973, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9179_MI = 
{
	"IsArrayImpl", (methodPointerType)&m9179, &t1762_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 65, 0, false, false, 2974, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9180_MI = 
{
	"IsByRefImpl", (methodPointerType)&m9180, &t1762_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 66, 0, false, false, 2975, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9181_MI = 
{
	"IsPointerImpl", (methodPointerType)&m9181, &t1762_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 67, 0, false, false, 2976, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9182_MI = 
{
	"IsPrimitiveImpl", (methodPointerType)&m9182, &t1762_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 68, 0, false, false, 2977, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9183_MI = 
{
	"IsValueTypeImpl", (methodPointerType)&m9183, &t1762_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 69, 0, false, false, 2978, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1762_m9184_ParameterInfos[] = 
{
	{"attributeType", 0, 134221472, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221473, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9184_MI = 
{
	"IsDefined", (methodPointerType)&m9184, &t1762_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1762_m9184_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 2979, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9185_MI = 
{
	"CreateNotSupportedException", (methodPointerType)&m9185, &t1762_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2980, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1762_MIs[] =
{
	&m9152_MI,
	&m9153_MI,
	&m9154_MI,
	&m9155_MI,
	&m9156_MI,
	&m9157_MI,
	&m9158_MI,
	&m9159_MI,
	&m9160_MI,
	&m9161_MI,
	&m9162_MI,
	&m9163_MI,
	&m9164_MI,
	&m9165_MI,
	&m9166_MI,
	&m9167_MI,
	&m9168_MI,
	&m9169_MI,
	&m9170_MI,
	&m9171_MI,
	&m9172_MI,
	&m9173_MI,
	&m9174_MI,
	&m9175_MI,
	&m9176_MI,
	&m9177_MI,
	&m9178_MI,
	&m9179_MI,
	&m9180_MI,
	&m9181_MI,
	&m9182_MI,
	&m9183_MI,
	&m9184_MI,
	&m9185_MI,
	NULL
};
extern Il2CppType t1754_0_0_1;
FieldInfo t1762_f8_FieldInfo = 
{
	"_tb", &t1754_0_0_1, &t1762_TI, offsetof(t1762, f8), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1762_f9_FieldInfo = 
{
	"_underlyingType", &t126_0_0_1, &t1762_TI, offsetof(t1762, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1762_FIs[] =
{
	&t1762_f8_FieldInfo,
	&t1762_f9_FieldInfo,
	NULL
};
extern MethodInfo m9152_MI;
static PropertyInfo t1762____Assembly_PropertyInfo = 
{
	&t1762_TI, "Assembly", &m9152_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9153_MI;
static PropertyInfo t1762____AssemblyQualifiedName_PropertyInfo = 
{
	&t1762_TI, "AssemblyQualifiedName", &m9153_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9154_MI;
static PropertyInfo t1762____BaseType_PropertyInfo = 
{
	&t1762_TI, "BaseType", &m9154_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9155_MI;
static PropertyInfo t1762____DeclaringType_PropertyInfo = 
{
	&t1762_TI, "DeclaringType", &m9155_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9156_MI;
static PropertyInfo t1762____FullName_PropertyInfo = 
{
	&t1762_TI, "FullName", &m9156_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9157_MI;
static PropertyInfo t1762____Module_PropertyInfo = 
{
	&t1762_TI, "Module", &m9157_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9158_MI;
static PropertyInfo t1762____Name_PropertyInfo = 
{
	&t1762_TI, "Name", &m9158_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9159_MI;
static PropertyInfo t1762____Namespace_PropertyInfo = 
{
	&t1762_TI, "Namespace", &m9159_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9160_MI;
static PropertyInfo t1762____ReflectedType_PropertyInfo = 
{
	&t1762_TI, "ReflectedType", &m9160_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9161_MI;
static PropertyInfo t1762____TypeHandle_PropertyInfo = 
{
	&t1762_TI, "TypeHandle", &m9161_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9162_MI;
static PropertyInfo t1762____UnderlyingSystemType_PropertyInfo = 
{
	&t1762_TI, "UnderlyingSystemType", &m9162_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1762_PIs[] =
{
	&t1762____Assembly_PropertyInfo,
	&t1762____AssemblyQualifiedName_PropertyInfo,
	&t1762____BaseType_PropertyInfo,
	&t1762____DeclaringType_PropertyInfo,
	&t1762____FullName_PropertyInfo,
	&t1762____Module_PropertyInfo,
	&t1762____Name_PropertyInfo,
	&t1762____Namespace_PropertyInfo,
	&t1762____ReflectedType_PropertyInfo,
	&t1762____TypeHandle_PropertyInfo,
	&t1762____UnderlyingSystemType_PropertyInfo,
	NULL
};
extern MethodInfo m7765_MI;
extern MethodInfo m7780_MI;
extern MethodInfo m7798_MI;
extern MethodInfo m9167_MI;
extern MethodInfo m9184_MI;
extern MethodInfo m7762_MI;
extern MethodInfo m9166_MI;
extern MethodInfo m7747_MI;
extern MethodInfo m7749_MI;
extern MethodInfo m7750_MI;
extern MethodInfo m4384_MI;
extern MethodInfo m7751_MI;
extern MethodInfo m7752_MI;
extern MethodInfo m7753_MI;
extern MethodInfo m7754_MI;
extern MethodInfo m7755_MI;
extern MethodInfo m7756_MI;
extern MethodInfo m7757_MI;
extern MethodInfo m7758_MI;
extern MethodInfo m4492_MI;
extern MethodInfo m7759_MI;
extern MethodInfo m7760_MI;
extern MethodInfo m7761_MI;
extern MethodInfo m7766_MI;
extern MethodInfo m7776_MI;
extern MethodInfo m7777_MI;
extern MethodInfo m9172_MI;
extern MethodInfo m4473_MI;
extern MethodInfo m7778_MI;
extern MethodInfo m7779_MI;
extern MethodInfo m9168_MI;
extern MethodInfo m9169_MI;
extern MethodInfo m9170_MI;
extern MethodInfo m9171_MI;
extern MethodInfo m7781_MI;
extern MethodInfo m7782_MI;
extern MethodInfo m7783_MI;
extern MethodInfo m4491_MI;
extern MethodInfo m7784_MI;
extern MethodInfo m9173_MI;
extern MethodInfo m9174_MI;
extern MethodInfo m9175_MI;
extern MethodInfo m7786_MI;
extern MethodInfo m7787_MI;
extern MethodInfo m7788_MI;
extern MethodInfo m7789_MI;
extern MethodInfo m7790_MI;
extern MethodInfo m9176_MI;
extern MethodInfo m9164_MI;
extern MethodInfo m9163_MI;
extern MethodInfo m9177_MI;
extern MethodInfo m9179_MI;
extern MethodInfo m9180_MI;
extern MethodInfo m9181_MI;
extern MethodInfo m9182_MI;
extern MethodInfo m9183_MI;
extern MethodInfo m7794_MI;
extern MethodInfo m7795_MI;
extern MethodInfo m4472_MI;
extern MethodInfo m7796_MI;
extern MethodInfo m7797_MI;
extern MethodInfo m4420_MI;
extern MethodInfo m9165_MI;
extern MethodInfo m9178_MI;
extern MethodInfo m7800_MI;
extern MethodInfo m7801_MI;
extern MethodInfo m7802_MI;
extern MethodInfo m7804_MI;
extern MethodInfo m7805_MI;
extern MethodInfo m4471_MI;
extern MethodInfo m7807_MI;
static Il2CppMethodReference t1762_VT[] =
{
	&m7765_MI,
	&m646_MI,
	&m7780_MI,
	&m7798_MI,
	&m9167_MI,
	&m9184_MI,
	&m9155_MI,
	&m7762_MI,
	&m9158_MI,
	&m9160_MI,
	&m9157_MI,
	&m9184_MI,
	&m9166_MI,
	&m9167_MI,
	&m9152_MI,
	&m9153_MI,
	&m7747_MI,
	&m9154_MI,
	&m9156_MI,
	&m7749_MI,
	&m7750_MI,
	&m4384_MI,
	&m7751_MI,
	&m7752_MI,
	&m7753_MI,
	&m7754_MI,
	&m7755_MI,
	&m7756_MI,
	&m7757_MI,
	&m7758_MI,
	&m4492_MI,
	&m7759_MI,
	&m7760_MI,
	&m7761_MI,
	&m9159_MI,
	&m9161_MI,
	&m9162_MI,
	&m7766_MI,
	&m7776_MI,
	&m7777_MI,
	&m9172_MI,
	&m4473_MI,
	&m7778_MI,
	&m7779_MI,
	&m9168_MI,
	&m9169_MI,
	&m9170_MI,
	&m9171_MI,
	&m7781_MI,
	&m7782_MI,
	&m7783_MI,
	&m4491_MI,
	&m7784_MI,
	&m9173_MI,
	&m9174_MI,
	&m9175_MI,
	&m7786_MI,
	&m7787_MI,
	&m7788_MI,
	&m7789_MI,
	&m7790_MI,
	&m9176_MI,
	&m9164_MI,
	&m9163_MI,
	&m9177_MI,
	&m9179_MI,
	&m9180_MI,
	&m9181_MI,
	&m9182_MI,
	&m9183_MI,
	&m7794_MI,
	&m7795_MI,
	&m4472_MI,
	&m7796_MI,
	&m7797_MI,
	&m4420_MI,
	&m9165_MI,
	&m9178_MI,
	&m7800_MI,
	&m7801_MI,
	&m7802_MI,
	&m7804_MI,
	&m7805_MI,
	&m4471_MI,
	&m7807_MI,
};
static bool t1762_VTIGM[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
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
extern Il2CppType t2595_0_0_0;
static const Il2CppType* t1762_ITIs[] = 
{
	&t2595_0_0_0,
};
extern Il2CppType t2419_0_0_0;
extern Il2CppType t2420_0_0_0;
static Il2CppInterfaceOffsetPair t1762_IOs[] = 
{
	{ &t2419_0_0_0, 14},
	{ &t2420_0_0_0, 14},
	{ &t2130_0_0_0, 4},
	{ &t2421_0_0_0, 6},
	{ &t2595_0_0_0, 85},
};
extern TypeInfo t2595_TI;
void t1762_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1838 * tmp;
		tmp = (t1838 *)il2cpp_codegen_object_new (&t1838_TI);
		m9771(tmp, 0, &m9771_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1840 * tmp;
		tmp = (t1840 *)il2cpp_codegen_object_new (&t1840_TI);
		m9772(tmp, il2cpp_codegen_type_get_object(&t2595_0_0_0), &m9772_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t1762_CustomAttributesCacheGenerator_m9165(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1762__CustomAttributeCache = {
3,
NULL,
&t1762_CustomAttributesCacheGenerator
};
CustomAttributesCache t1762__CustomAttributeCache_m9165 = {
1,
NULL,
&t1762_CustomAttributesCacheGenerator_m9165
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1762_0_0_0;
extern Il2CppType t1762_1_0_0;
struct t1762;
extern CustomAttributesCache t1762__CustomAttributeCache;
extern CustomAttributesCache t1762__CustomAttributeCache_m9165;
const Il2CppTypeDefinitionMetadata t1762_DM = 
{
	NULL, NULL, t1762_ITIs, t1762_IOs, &t126_0_0_0, t1762_VT, t1762_VTIGM, NULL};
TypeInfo t1762_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EnumBuilder", "System.Reflection.Emit", t1762_MIs, t1762_PIs, t1762_FIs, NULL, &t1762_TI, NULL, &t1762__CustomAttributeCache, &t1762_0_0_0, &t1762_1_0_0, &t1762_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1762), sizeof (t1762), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 34, 11, 2, 0, 0, 85, 1, 5};
#include "t1763.h"
// Metadata Definition System.Reflection.Emit.FieldBuilder
extern TypeInfo t1763_TI;
#include "t1763MD.h"
extern Il2CppType t1765_0_0_0;
extern void* RuntimeInvoker_t1765 (MethodInfo* method, void* obj, void** args);
MethodInfo m9186_MI = 
{
	"get_Attributes", (methodPointerType)&m9186, &t1763_TI, &t1765_0_0_0, RuntimeInvoker_t1765, NULL, &EmptyCustomAttributesCache, 2246, 0, 14, 0, false, false, 2981, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9187_MI = 
{
	"get_DeclaringType", (methodPointerType)&m9187, &t1763_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2982, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t313_0_0_0;
extern void* RuntimeInvoker_t313 (MethodInfo* method, void* obj, void** args);
MethodInfo m9188_MI = 
{
	"get_FieldHandle", (methodPointerType)&m9188, &t1763_TI, &t313_0_0_0, RuntimeInvoker_t313, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 2983, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9189_MI = 
{
	"get_FieldType", (methodPointerType)&m9189, &t1763_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 16, 0, false, false, 2984, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9190_MI = 
{
	"get_Name", (methodPointerType)&m9190, &t1763_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2985, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9191_MI = 
{
	"get_ReflectedType", (methodPointerType)&m9191, &t1763_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2986, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1763_m9192_ParameterInfos[] = 
{
	{"inherit", 0, 134221474, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9192_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9192, &t1763_TI, &t158_0_0_0, RuntimeInvoker_t9_t186, t1763_m9192_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 2987, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1763_m9193_ParameterInfos[] = 
{
	{"attributeType", 0, 134221475, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221476, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9193_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9193, &t1763_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t186, t1763_m9193_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 2988, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1763_m9194_ParameterInfos[] = 
{
	{"obj", 0, 134221477, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9194_MI = 
{
	"GetValue", (methodPointerType)&m9194, &t1763_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1763_m9194_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 2989, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1763_m9195_ParameterInfos[] = 
{
	{"attributeType", 0, 134221478, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221479, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9195_MI = 
{
	"IsDefined", (methodPointerType)&m9195, &t1763_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1763_m9195_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 2990, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9196_MI = 
{
	"GetFieldOffset", (methodPointerType)&m9196, &t1763_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 195, 0, 25, 0, false, false, 2991, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t925_0_0_0;
extern Il2CppType t933_0_0_0;
extern Il2CppType t901_0_0_0;
static ParameterInfo t1763_m9197_ParameterInfos[] = 
{
	{"obj", 0, 134221480, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"val", 1, 134221481, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"invokeAttr", 2, 134221482, &EmptyCustomAttributesCache, &t925_0_0_0},
	{"binder", 3, 134221483, &EmptyCustomAttributesCache, &t933_0_0_0},
	{"culture", 4, 134221484, &EmptyCustomAttributesCache, &t901_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9197_MI = 
{
	"SetValue", (methodPointerType)&m9197, &t1763_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125_t9_t9, t1763_m9197_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 5, false, false, 2992, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1764_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9198_MI = 
{
	"get_UMarshal", (methodPointerType)&m9198, &t1763_TI, &t1764_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2243, 0, 26, 0, false, false, 2993, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9199_MI = 
{
	"CreateNotSupportedException", (methodPointerType)&m9199, &t1763_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2994, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1568_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9200_MI = 
{
	"get_Module", (methodPointerType)&m9200, &t1763_TI, &t1568_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 2995, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1763_MIs[] =
{
	&m9186_MI,
	&m9187_MI,
	&m9188_MI,
	&m9189_MI,
	&m9190_MI,
	&m9191_MI,
	&m9192_MI,
	&m9193_MI,
	&m9194_MI,
	&m9195_MI,
	&m9196_MI,
	&m9197_MI,
	&m9198_MI,
	&m9199_MI,
	&m9200_MI,
	NULL
};
extern Il2CppType t1765_0_0_1;
FieldInfo t1763_f0_FieldInfo = 
{
	"attrs", &t1765_0_0_1, &t1763_TI, offsetof(t1763, f0), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1763_f1_FieldInfo = 
{
	"type", &t126_0_0_1, &t1763_TI, offsetof(t1763, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1763_f2_FieldInfo = 
{
	"name", &t2_0_0_1, &t1763_TI, offsetof(t1763, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1754_0_0_3;
FieldInfo t1763_f3_FieldInfo = 
{
	"typeb", &t1754_0_0_3, &t1763_TI, offsetof(t1763, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1764_0_0_1;
FieldInfo t1763_f4_FieldInfo = 
{
	"marshal_info", &t1764_0_0_1, &t1763_TI, offsetof(t1763, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1763_FIs[] =
{
	&t1763_f0_FieldInfo,
	&t1763_f1_FieldInfo,
	&t1763_f2_FieldInfo,
	&t1763_f3_FieldInfo,
	&t1763_f4_FieldInfo,
	NULL
};
extern MethodInfo m9186_MI;
static PropertyInfo t1763____Attributes_PropertyInfo = 
{
	&t1763_TI, "Attributes", &m9186_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9187_MI;
static PropertyInfo t1763____DeclaringType_PropertyInfo = 
{
	&t1763_TI, "DeclaringType", &m9187_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9188_MI;
static PropertyInfo t1763____FieldHandle_PropertyInfo = 
{
	&t1763_TI, "FieldHandle", &m9188_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9189_MI;
static PropertyInfo t1763____FieldType_PropertyInfo = 
{
	&t1763_TI, "FieldType", &m9189_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9190_MI;
static PropertyInfo t1763____Name_PropertyInfo = 
{
	&t1763_TI, "Name", &m9190_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9191_MI;
static PropertyInfo t1763____ReflectedType_PropertyInfo = 
{
	&t1763_TI, "ReflectedType", &m9191_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9198_MI;
static PropertyInfo t1763____UMarshal_PropertyInfo = 
{
	&t1763_TI, "UMarshal", &m9198_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9200_MI;
static PropertyInfo t1763____Module_PropertyInfo = 
{
	&t1763_TI, "Module", &m9200_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1763_PIs[] =
{
	&t1763____Attributes_PropertyInfo,
	&t1763____DeclaringType_PropertyInfo,
	&t1763____FieldHandle_PropertyInfo,
	&t1763____FieldType_PropertyInfo,
	&t1763____Name_PropertyInfo,
	&t1763____ReflectedType_PropertyInfo,
	&t1763____UMarshal_PropertyInfo,
	&t1763____Module_PropertyInfo,
	NULL
};
extern MethodInfo m9193_MI;
extern MethodInfo m9195_MI;
extern MethodInfo m9522_MI;
extern MethodInfo m9192_MI;
extern MethodInfo m9194_MI;
extern MethodInfo m9523_MI;
extern MethodInfo m4395_MI;
extern MethodInfo m4402_MI;
extern MethodInfo m4396_MI;
extern MethodInfo m9524_MI;
extern MethodInfo m9197_MI;
extern MethodInfo m4419_MI;
extern MethodInfo m9196_MI;
static Il2CppMethodReference t1763_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9193_MI,
	&m9195_MI,
	&m9187_MI,
	&m9522_MI,
	&m9190_MI,
	&m9191_MI,
	&m9200_MI,
	&m9195_MI,
	&m9192_MI,
	&m9193_MI,
	&m9186_MI,
	&m9188_MI,
	&m9189_MI,
	&m9194_MI,
	&m9523_MI,
	&m4395_MI,
	&m4402_MI,
	&m4396_MI,
	&m9524_MI,
	&m9197_MI,
	&m4419_MI,
	&m9196_MI,
	&m9198_MI,
};
static bool t1763_VTIGM[] =
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
extern Il2CppType t2596_0_0_0;
static const Il2CppType* t1763_ITIs[] = 
{
	&t2596_0_0_0,
};
extern Il2CppType t2597_0_0_0;
static Il2CppInterfaceOffsetPair t1763_IOs[] = 
{
	{ &t2597_0_0_0, 14},
	{ &t2130_0_0_0, 4},
	{ &t2421_0_0_0, 6},
	{ &t2596_0_0_0, 27},
};
extern TypeInfo t2596_TI;
void t1763_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1838 * tmp;
		tmp = (t1838 *)il2cpp_codegen_object_new (&t1838_TI);
		m9771(tmp, 0, &m9771_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1840 * tmp;
		tmp = (t1840 *)il2cpp_codegen_object_new (&t1840_TI);
		m9772(tmp, il2cpp_codegen_type_get_object(&t2596_0_0_0), &m9772_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1763__CustomAttributeCache = {
3,
NULL,
&t1763_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1763_0_0_0;
extern Il2CppType t1763_1_0_0;
extern Il2CppType t830_0_0_0;
struct t1763;
extern CustomAttributesCache t1763__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1763_DM = 
{
	NULL, NULL, t1763_ITIs, t1763_IOs, &t830_0_0_0, t1763_VT, t1763_VTIGM, NULL};
TypeInfo t1763_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FieldBuilder", "System.Reflection.Emit", t1763_MIs, t1763_PIs, t1763_FIs, NULL, &t1763_TI, NULL, &t1763__CustomAttributeCache, &t1763_0_0_0, &t1763_1_0_0, &t1763_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1763), sizeof (t1763), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 15, 8, 5, 0, 0, 27, 1, 4};
#include "t1766.h"
// Metadata Definition System.Reflection.Emit.GenericTypeParameterBuilder
extern TypeInfo t1766_TI;
#include "t1766MD.h"
extern Il2CppType t126_0_0_0;
static ParameterInfo t1766_m9201_ParameterInfos[] = 
{
	{"c", 0, 134221485, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1766__CustomAttributeCache_m9201;
MethodInfo m9201_MI = 
{
	"IsSubclassOf", (methodPointerType)&m9201, &t1766_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1766_m9201_ParameterInfos, &t1766__CustomAttributeCache_m9201, 198, 0, 39, 1, false, false, 2996, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1571_0_0_0;
extern void* RuntimeInvoker_t1571 (MethodInfo* method, void* obj, void** args);
MethodInfo m9202_MI = 
{
	"GetAttributeFlagsImpl", (methodPointerType)&m9202, &t1766_TI, &t1571_0_0_0, RuntimeInvoker_t1571, NULL, &EmptyCustomAttributesCache, 196, 0, 63, 0, false, false, 2997, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t925_0_0_0;
extern Il2CppType t933_0_0_0;
extern Il2CppType t1573_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t935_0_0_0;
static ParameterInfo t1766_m9203_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221486, &EmptyCustomAttributesCache, &t925_0_0_0},
	{"binder", 1, 134221487, &EmptyCustomAttributesCache, &t933_0_0_0},
	{"callConvention", 2, 134221488, &EmptyCustomAttributesCache, &t1573_0_0_0},
	{"types", 3, 134221489, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 4, 134221490, &EmptyCustomAttributesCache, &t935_0_0_0},
};
extern Il2CppType t826_0_0_0;
extern void* RuntimeInvoker_t9_t125_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9203_MI = 
{
	"GetConstructorImpl", (methodPointerType)&m9203, &t1766_TI, &t826_0_0_0, RuntimeInvoker_t9_t125_t9_t125_t9_t9, t1766_m9203_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 62, 5, false, false, 2998, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t925_0_0_0;
static ParameterInfo t1766_m9204_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221491, &EmptyCustomAttributesCache, &t925_0_0_0},
};
extern Il2CppType t926_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1766__CustomAttributeCache_m9204;
MethodInfo m9204_MI = 
{
	"GetConstructors", (methodPointerType)&m9204, &t1766_TI, &t926_0_0_0, RuntimeInvoker_t9_t125, t1766_m9204_ParameterInfos, &t1766__CustomAttributeCache_m9204, 198, 0, 76, 1, false, false, 2999, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t925_0_0_0;
static ParameterInfo t1766_m9205_ParameterInfos[] = 
{
	{"name", 0, 134221492, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221493, &EmptyCustomAttributesCache, &t925_0_0_0},
};
extern Il2CppType t1569_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9205_MI = 
{
	"GetEvent", (methodPointerType)&m9205, &t1766_TI, &t1569_0_0_0, RuntimeInvoker_t9_t9_t125, t1766_m9205_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 45, 2, false, false, 3000, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t925_0_0_0;
static ParameterInfo t1766_m9206_ParameterInfos[] = 
{
	{"name", 0, 134221494, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221495, &EmptyCustomAttributesCache, &t925_0_0_0},
};
extern Il2CppType t830_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9206_MI = 
{
	"GetField", (methodPointerType)&m9206, &t1766_TI, &t830_0_0_0, RuntimeInvoker_t9_t9_t125, t1766_m9206_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 46, 2, false, false, 3001, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t925_0_0_0;
static ParameterInfo t1766_m9207_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221496, &EmptyCustomAttributesCache, &t925_0_0_0},
};
extern Il2CppType t930_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9207_MI = 
{
	"GetFields", (methodPointerType)&m9207, &t1766_TI, &t930_0_0_0, RuntimeInvoker_t9_t125, t1766_m9207_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 47, 1, false, false, 3002, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9208_MI = 
{
	"GetInterfaces", (methodPointerType)&m9208, &t1766_TI, &t152_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 40, 0, false, false, 3003, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t925_0_0_0;
static ParameterInfo t1766_m9209_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221497, &EmptyCustomAttributesCache, &t925_0_0_0},
};
extern Il2CppType t1570_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9209_MI = 
{
	"GetMethods", (methodPointerType)&m9209, &t1766_TI, &t1570_0_0_0, RuntimeInvoker_t9_t125, t1766_m9209_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 54, 1, false, false, 3004, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t925_0_0_0;
extern Il2CppType t933_0_0_0;
extern Il2CppType t1573_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t935_0_0_0;
static ParameterInfo t1766_m9210_ParameterInfos[] = 
{
	{"name", 0, 134221498, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221499, &EmptyCustomAttributesCache, &t925_0_0_0},
	{"binder", 2, 134221500, &EmptyCustomAttributesCache, &t933_0_0_0},
	{"callConvention", 3, 134221501, &EmptyCustomAttributesCache, &t1573_0_0_0},
	{"types", 4, 134221502, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 5, 134221503, &EmptyCustomAttributesCache, &t935_0_0_0},
};
extern Il2CppType t828_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9210_MI = 
{
	"GetMethodImpl", (methodPointerType)&m9210, &t1766_TI, &t828_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t125_t9_t9, t1766_m9210_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 53, 6, false, false, 3005, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t925_0_0_0;
static ParameterInfo t1766_m9211_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221504, &EmptyCustomAttributesCache, &t925_0_0_0},
};
extern Il2CppType t929_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9211_MI = 
{
	"GetProperties", (methodPointerType)&m9211, &t1766_TI, &t929_0_0_0, RuntimeInvoker_t9_t125, t1766_m9211_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 55, 1, false, false, 3006, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t925_0_0_0;
extern Il2CppType t933_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t935_0_0_0;
static ParameterInfo t1766_m9212_ParameterInfos[] = 
{
	{"name", 0, 134221505, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221506, &EmptyCustomAttributesCache, &t925_0_0_0},
	{"binder", 2, 134221507, &EmptyCustomAttributesCache, &t933_0_0_0},
	{"returnType", 3, 134221508, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"types", 4, 134221509, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 5, 134221510, &EmptyCustomAttributesCache, &t935_0_0_0},
};
extern Il2CppType t837_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9212_MI = 
{
	"GetPropertyImpl", (methodPointerType)&m9212, &t1766_TI, &t837_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9, t1766_m9212_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 61, 6, false, false, 3007, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9213_MI = 
{
	"HasElementTypeImpl", (methodPointerType)&m9213, &t1766_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 64, 0, false, false, 3008, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1766_m9214_ParameterInfos[] = 
{
	{"c", 0, 134221511, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9214_MI = 
{
	"IsAssignableFrom", (methodPointerType)&m9214, &t1766_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1766_m9214_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 41, 1, false, false, 3009, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1766_m9215_ParameterInfos[] = 
{
	{"o", 0, 134221512, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9215_MI = 
{
	"IsInstanceOfType", (methodPointerType)&m9215, &t1766_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1766_m9215_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 42, 1, false, false, 3010, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9216_MI = 
{
	"IsArrayImpl", (methodPointerType)&m9216, &t1766_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 65, 0, false, false, 3011, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9217_MI = 
{
	"IsByRefImpl", (methodPointerType)&m9217, &t1766_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 66, 0, false, false, 3012, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9218_MI = 
{
	"IsPointerImpl", (methodPointerType)&m9218, &t1766_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 67, 0, false, false, 3013, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9219_MI = 
{
	"IsPrimitiveImpl", (methodPointerType)&m9219, &t1766_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 68, 0, false, false, 3014, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9220_MI = 
{
	"IsValueTypeImpl", (methodPointerType)&m9220, &t1766_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 69, 0, false, false, 3015, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t925_0_0_0;
extern Il2CppType t933_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t935_0_0_0;
extern Il2CppType t901_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1766_m9221_ParameterInfos[] = 
{
	{"name", 0, 134221513, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"invokeAttr", 1, 134221514, &EmptyCustomAttributesCache, &t925_0_0_0},
	{"binder", 2, 134221515, &EmptyCustomAttributesCache, &t933_0_0_0},
	{"target", 3, 134221516, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"args", 4, 134221517, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"modifiers", 5, 134221518, &EmptyCustomAttributesCache, &t935_0_0_0},
	{"culture", 6, 134221519, &EmptyCustomAttributesCache, &t901_0_0_0},
	{"namedParameters", 7, 134221520, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9221_MI = 
{
	"InvokeMember", (methodPointerType)&m9221, &t1766_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9_t9_t9, t1766_m9221_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 77, 8, false, false, 3016, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9222_MI = 
{
	"GetElementType", (methodPointerType)&m9222, &t1766_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 44, 0, false, false, 3017, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9223_MI = 
{
	"get_UnderlyingSystemType", (methodPointerType)&m9223, &t1766_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 36, 0, false, false, 3018, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1345_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9224_MI = 
{
	"get_Assembly", (methodPointerType)&m9224, &t1766_TI, &t1345_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 14, 0, false, false, 3019, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9225_MI = 
{
	"get_AssemblyQualifiedName", (methodPointerType)&m9225, &t1766_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 3020, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9226_MI = 
{
	"get_BaseType", (methodPointerType)&m9226, &t1766_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 17, 0, false, false, 3021, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9227_MI = 
{
	"get_FullName", (methodPointerType)&m9227, &t1766_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 3022, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1766_m9228_ParameterInfos[] = 
{
	{"attributeType", 0, 134221521, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221522, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9228_MI = 
{
	"IsDefined", (methodPointerType)&m9228, &t1766_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1766_m9228_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 3023, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1766_m9229_ParameterInfos[] = 
{
	{"inherit", 0, 134221523, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9229_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9229, &t1766_TI, &t158_0_0_0, RuntimeInvoker_t9_t186, t1766_m9229_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 3024, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1766_m9230_ParameterInfos[] = 
{
	{"attributeType", 0, 134221524, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221525, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9230_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9230, &t1766_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t186, t1766_m9230_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 3025, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9231_MI = 
{
	"get_Name", (methodPointerType)&m9231, &t1766_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 3026, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9232_MI = 
{
	"get_Namespace", (methodPointerType)&m9232, &t1766_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 34, 0, false, false, 3027, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1568_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9233_MI = 
{
	"get_Module", (methodPointerType)&m9233, &t1766_TI, &t1568_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 3028, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9234_MI = 
{
	"get_DeclaringType", (methodPointerType)&m9234, &t1766_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 3029, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9235_MI = 
{
	"get_ReflectedType", (methodPointerType)&m9235, &t1766_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 3030, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t127_0_0_0;
extern void* RuntimeInvoker_t127 (MethodInfo* method, void* obj, void** args);
MethodInfo m9236_MI = 
{
	"get_TypeHandle", (methodPointerType)&m9236, &t1766_TI, &t127_0_0_0, RuntimeInvoker_t127, NULL, &EmptyCustomAttributesCache, 2246, 0, 35, 0, false, false, 3031, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9237_MI = 
{
	"GetGenericArguments", (methodPointerType)&m9237, &t1766_TI, &t152_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 78, 0, false, false, 3032, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9238_MI = 
{
	"GetGenericTypeDefinition", (methodPointerType)&m9238, &t1766_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 81, 0, false, false, 3033, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9239_MI = 
{
	"get_ContainsGenericParameters", (methodPointerType)&m9239, &t1766_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 79, 0, false, false, 3034, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9240_MI = 
{
	"get_IsGenericParameter", (methodPointerType)&m9240, &t1766_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 84, 0, false, false, 3035, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9241_MI = 
{
	"get_IsGenericType", (methodPointerType)&m9241, &t1766_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 82, 0, false, false, 3036, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9242_MI = 
{
	"get_IsGenericTypeDefinition", (methodPointerType)&m9242, &t1766_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 80, 0, false, false, 3037, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9243_MI = 
{
	"not_supported", (methodPointerType)&m9243, &t1766_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3038, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9244_MI = 
{
	"ToString", (methodPointerType)&m9244, &t1766_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3039, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1766_m9245_ParameterInfos[] = 
{
	{"o", 0, 134221526, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1766__CustomAttributeCache_m9245;
MethodInfo m9245_MI = 
{
	"Equals", (methodPointerType)&m9245, &t1766_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1766_m9245_ParameterInfos, &t1766__CustomAttributeCache_m9245, 198, 0, 0, 1, false, false, 3040, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1766__CustomAttributeCache_m9246;
MethodInfo m9246_MI = 
{
	"GetHashCode", (methodPointerType)&m9246, &t1766_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t1766__CustomAttributeCache_m9246, 198, 0, 2, 0, false, false, 3041, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t152_0_0_0;
extern CustomAttributesCache t1766__CustomAttributeCache_t1766_m9247_Arg0_ParameterInfo;
static ParameterInfo t1766_m9247_ParameterInfos[] = 
{
	{"typeArguments", 0, 134221527, &t1766__CustomAttributeCache_t1766_m9247_Arg0_ParameterInfo, &t152_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1766__CustomAttributeCache_m9247;
MethodInfo m9247_MI = 
{
	"MakeGenericType", (methodPointerType)&m9247, &t1766_TI, &t126_0_0_0, RuntimeInvoker_t9_t9, t1766_m9247_ParameterInfos, &t1766__CustomAttributeCache_m9247, 198, 0, 83, 1, false, false, 3042, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1766_MIs[] =
{
	&m9201_MI,
	&m9202_MI,
	&m9203_MI,
	&m9204_MI,
	&m9205_MI,
	&m9206_MI,
	&m9207_MI,
	&m9208_MI,
	&m9209_MI,
	&m9210_MI,
	&m9211_MI,
	&m9212_MI,
	&m9213_MI,
	&m9214_MI,
	&m9215_MI,
	&m9216_MI,
	&m9217_MI,
	&m9218_MI,
	&m9219_MI,
	&m9220_MI,
	&m9221_MI,
	&m9222_MI,
	&m9223_MI,
	&m9224_MI,
	&m9225_MI,
	&m9226_MI,
	&m9227_MI,
	&m9228_MI,
	&m9229_MI,
	&m9230_MI,
	&m9231_MI,
	&m9232_MI,
	&m9233_MI,
	&m9234_MI,
	&m9235_MI,
	&m9236_MI,
	&m9237_MI,
	&m9238_MI,
	&m9239_MI,
	&m9240_MI,
	&m9241_MI,
	&m9242_MI,
	&m9243_MI,
	&m9244_MI,
	&m9245_MI,
	&m9246_MI,
	&m9247_MI,
	NULL
};
extern Il2CppType t1754_0_0_1;
FieldInfo t1766_f8_FieldInfo = 
{
	"tbuilder", &t1754_0_0_1, &t1766_TI, offsetof(t1766, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1767_0_0_1;
FieldInfo t1766_f9_FieldInfo = 
{
	"mbuilder", &t1767_0_0_1, &t1766_TI, offsetof(t1766, f9), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1766_f10_FieldInfo = 
{
	"name", &t2_0_0_1, &t1766_TI, offsetof(t1766, f10), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1766_f11_FieldInfo = 
{
	"base_type", &t126_0_0_1, &t1766_TI, offsetof(t1766, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1766_FIs[] =
{
	&t1766_f8_FieldInfo,
	&t1766_f9_FieldInfo,
	&t1766_f10_FieldInfo,
	&t1766_f11_FieldInfo,
	NULL
};
extern MethodInfo m9223_MI;
static PropertyInfo t1766____UnderlyingSystemType_PropertyInfo = 
{
	&t1766_TI, "UnderlyingSystemType", &m9223_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9224_MI;
static PropertyInfo t1766____Assembly_PropertyInfo = 
{
	&t1766_TI, "Assembly", &m9224_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9225_MI;
static PropertyInfo t1766____AssemblyQualifiedName_PropertyInfo = 
{
	&t1766_TI, "AssemblyQualifiedName", &m9225_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9226_MI;
static PropertyInfo t1766____BaseType_PropertyInfo = 
{
	&t1766_TI, "BaseType", &m9226_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9227_MI;
static PropertyInfo t1766____FullName_PropertyInfo = 
{
	&t1766_TI, "FullName", &m9227_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9231_MI;
static PropertyInfo t1766____Name_PropertyInfo = 
{
	&t1766_TI, "Name", &m9231_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9232_MI;
static PropertyInfo t1766____Namespace_PropertyInfo = 
{
	&t1766_TI, "Namespace", &m9232_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9233_MI;
static PropertyInfo t1766____Module_PropertyInfo = 
{
	&t1766_TI, "Module", &m9233_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9234_MI;
static PropertyInfo t1766____DeclaringType_PropertyInfo = 
{
	&t1766_TI, "DeclaringType", &m9234_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9235_MI;
static PropertyInfo t1766____ReflectedType_PropertyInfo = 
{
	&t1766_TI, "ReflectedType", &m9235_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9236_MI;
static PropertyInfo t1766____TypeHandle_PropertyInfo = 
{
	&t1766_TI, "TypeHandle", &m9236_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9239_MI;
static PropertyInfo t1766____ContainsGenericParameters_PropertyInfo = 
{
	&t1766_TI, "ContainsGenericParameters", &m9239_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9240_MI;
static PropertyInfo t1766____IsGenericParameter_PropertyInfo = 
{
	&t1766_TI, "IsGenericParameter", &m9240_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9241_MI;
static PropertyInfo t1766____IsGenericType_PropertyInfo = 
{
	&t1766_TI, "IsGenericType", &m9241_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9242_MI;
static PropertyInfo t1766____IsGenericTypeDefinition_PropertyInfo = 
{
	&t1766_TI, "IsGenericTypeDefinition", &m9242_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1766_PIs[] =
{
	&t1766____UnderlyingSystemType_PropertyInfo,
	&t1766____Assembly_PropertyInfo,
	&t1766____AssemblyQualifiedName_PropertyInfo,
	&t1766____BaseType_PropertyInfo,
	&t1766____FullName_PropertyInfo,
	&t1766____Name_PropertyInfo,
	&t1766____Namespace_PropertyInfo,
	&t1766____Module_PropertyInfo,
	&t1766____DeclaringType_PropertyInfo,
	&t1766____ReflectedType_PropertyInfo,
	&t1766____TypeHandle_PropertyInfo,
	&t1766____ContainsGenericParameters_PropertyInfo,
	&t1766____IsGenericParameter_PropertyInfo,
	&t1766____IsGenericType_PropertyInfo,
	&t1766____IsGenericTypeDefinition_PropertyInfo,
	NULL
};
extern MethodInfo m9245_MI;
extern MethodInfo m9246_MI;
extern MethodInfo m9244_MI;
extern MethodInfo m9230_MI;
extern MethodInfo m9228_MI;
extern MethodInfo m9229_MI;
extern MethodInfo m9201_MI;
extern MethodInfo m9208_MI;
extern MethodInfo m9214_MI;
extern MethodInfo m9215_MI;
extern MethodInfo m9222_MI;
extern MethodInfo m9205_MI;
extern MethodInfo m9206_MI;
extern MethodInfo m9207_MI;
extern MethodInfo m9210_MI;
extern MethodInfo m9209_MI;
extern MethodInfo m9211_MI;
extern MethodInfo m9212_MI;
extern MethodInfo m9203_MI;
extern MethodInfo m9202_MI;
extern MethodInfo m9213_MI;
extern MethodInfo m9216_MI;
extern MethodInfo m9217_MI;
extern MethodInfo m9218_MI;
extern MethodInfo m9219_MI;
extern MethodInfo m9220_MI;
extern MethodInfo m9204_MI;
extern MethodInfo m9221_MI;
extern MethodInfo m9237_MI;
extern MethodInfo m9238_MI;
extern MethodInfo m9247_MI;
static Il2CppMethodReference t1766_VT[] =
{
	&m9245_MI,
	&m646_MI,
	&m9246_MI,
	&m9244_MI,
	&m9230_MI,
	&m9228_MI,
	&m9234_MI,
	&m7762_MI,
	&m9231_MI,
	&m9235_MI,
	&m9233_MI,
	&m9228_MI,
	&m9229_MI,
	&m9230_MI,
	&m9224_MI,
	&m9225_MI,
	&m7747_MI,
	&m9226_MI,
	&m9227_MI,
	&m7749_MI,
	&m7750_MI,
	&m4384_MI,
	&m7751_MI,
	&m7752_MI,
	&m7753_MI,
	&m7754_MI,
	&m7755_MI,
	&m7756_MI,
	&m7757_MI,
	&m7758_MI,
	&m4492_MI,
	&m7759_MI,
	&m7760_MI,
	&m7761_MI,
	&m9232_MI,
	&m9236_MI,
	&m9223_MI,
	&m7766_MI,
	&m7776_MI,
	&m9201_MI,
	&m9208_MI,
	&m9214_MI,
	&m9215_MI,
	&m7779_MI,
	&m9222_MI,
	&m9205_MI,
	&m9206_MI,
	&m9207_MI,
	&m7781_MI,
	&m7782_MI,
	&m7783_MI,
	&m4491_MI,
	&m7784_MI,
	&m9210_MI,
	&m9209_MI,
	&m9211_MI,
	&m7786_MI,
	&m7787_MI,
	&m7788_MI,
	&m7789_MI,
	&m7790_MI,
	&m9212_MI,
	&m9203_MI,
	&m9202_MI,
	&m9213_MI,
	&m9216_MI,
	&m9217_MI,
	&m9218_MI,
	&m9219_MI,
	&m9220_MI,
	&m7794_MI,
	&m7795_MI,
	&m4472_MI,
	&m7796_MI,
	&m7797_MI,
	&m4420_MI,
	&m9204_MI,
	&m9221_MI,
	&m9237_MI,
	&m9239_MI,
	&m9242_MI,
	&m9238_MI,
	&m9241_MI,
	&m9247_MI,
	&m9240_MI,
};
static bool t1766_VTIGM[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
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
static Il2CppInterfaceOffsetPair t1766_IOs[] = 
{
	{ &t2419_0_0_0, 14},
	{ &t2420_0_0_0, 14},
	{ &t2130_0_0_0, 4},
	{ &t2421_0_0_0, 6},
};
void t1766_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1766_CustomAttributesCacheGenerator_m9201(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1766_CustomAttributesCacheGenerator_m9204(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1766_CustomAttributesCacheGenerator_m9245(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7848(tmp, &m7848_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1766_CustomAttributesCacheGenerator_m9246(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7848(tmp, &m7848_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1766_CustomAttributesCacheGenerator_m9247(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7848(tmp, &m7848_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t337_TI;
#include "t337.h"
#include "t337MD.h"
extern MethodInfo m1228_MI;
void t1766_CustomAttributesCacheGenerator_t1766_m9247_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t337 * tmp;
		tmp = (t337 *)il2cpp_codegen_object_new (&t337_TI);
		m1228(tmp, &m1228_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1766__CustomAttributeCache = {
1,
NULL,
&t1766_CustomAttributesCacheGenerator
};
CustomAttributesCache t1766__CustomAttributeCache_m9201 = {
1,
NULL,
&t1766_CustomAttributesCacheGenerator_m9201
};
CustomAttributesCache t1766__CustomAttributeCache_m9204 = {
1,
NULL,
&t1766_CustomAttributesCacheGenerator_m9204
};
CustomAttributesCache t1766__CustomAttributeCache_m9245 = {
1,
NULL,
&t1766_CustomAttributesCacheGenerator_m9245
};
CustomAttributesCache t1766__CustomAttributeCache_m9246 = {
1,
NULL,
&t1766_CustomAttributesCacheGenerator_m9246
};
CustomAttributesCache t1766__CustomAttributeCache_m9247 = {
1,
NULL,
&t1766_CustomAttributesCacheGenerator_m9247
};
CustomAttributesCache t1766__CustomAttributeCache_t1766_m9247_Arg0_ParameterInfo = {
1,
NULL,
&t1766_CustomAttributesCacheGenerator_t1766_m9247_Arg0_ParameterInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1766_0_0_0;
extern Il2CppType t1766_1_0_0;
struct t1766;
extern CustomAttributesCache t1766__CustomAttributeCache;
extern CustomAttributesCache t1766__CustomAttributeCache_m9201;
extern CustomAttributesCache t1766__CustomAttributeCache_m9204;
extern CustomAttributesCache t1766__CustomAttributeCache_m9245;
extern CustomAttributesCache t1766__CustomAttributeCache_m9246;
extern CustomAttributesCache t1766__CustomAttributeCache_m9247;
const Il2CppTypeDefinitionMetadata t1766_DM = 
{
	NULL, NULL, NULL, t1766_IOs, &t126_0_0_0, t1766_VT, t1766_VTIGM, NULL};
TypeInfo t1766_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericTypeParameterBuilder", "System.Reflection.Emit", t1766_MIs, t1766_PIs, t1766_FIs, NULL, &t1766_TI, NULL, &t1766__CustomAttributeCache, &t1766_0_0_0, &t1766_1_0_0, &t1766_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1766), sizeof (t1766), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 47, 15, 4, 0, 0, 85, 0, 4};
#include "t1768.h"
// Metadata Definition System.Reflection.Emit.ILTokenInfo
extern TypeInfo t1768_TI;
#include "t1768MD.h"
static MethodInfo* t1768_MIs[] =
{
	NULL
};
extern Il2CppType t560_0_0_6;
FieldInfo t1768_f0_FieldInfo = 
{
	"member", &t560_0_0_6, &t1768_TI, offsetof(t1768, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1768_f1_FieldInfo = 
{
	"code_pos", &t125_0_0_6, &t1768_TI, offsetof(t1768, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1768_FIs[] =
{
	&t1768_f0_FieldInfo,
	&t1768_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1768_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1768_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1768_0_0_0;
extern Il2CppType t1768_1_0_0;
const Il2CppTypeDefinitionMetadata t1768_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1768_VT, t1768_VTIGM, NULL};
TypeInfo t1768_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ILTokenInfo", "System.Reflection.Emit", t1768_MIs, NULL, t1768_FIs, NULL, &t1768_TI, NULL, &EmptyCustomAttributesCache, &t1768_0_0_0, &t1768_1_0_0, &t1768_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1768)+ sizeof (Il2CppObject), sizeof (t1768)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048840, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 2, 0, 0, 4, 0, 0};
// Metadata Definition System.Reflection.Emit.TokenGenerator
extern TypeInfo t1775_TI;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1775_m12012_ParameterInfos[] = 
{
	{"str", 0, 134221528, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12012_MI = 
{
	"GetToken", NULL, &t1775_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1775_m12012_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 3043, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t560_0_0_0;
extern Il2CppType t560_0_0_0;
static ParameterInfo t1775_m12011_ParameterInfos[] = 
{
	{"member", 0, 134221529, &EmptyCustomAttributesCache, &t560_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12011_MI = 
{
	"GetToken", NULL, &t1775_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1775_m12011_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, false, 3044, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t828_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t1775_m12013_ParameterInfos[] = 
{
	{"method", 0, 134221530, &EmptyCustomAttributesCache, &t828_0_0_0},
	{"opt_param_types", 1, 134221531, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12013_MI = 
{
	"GetToken", NULL, &t1775_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1775_m12013_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 2, false, false, 3045, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1775_MIs[] =
{
	&m12012_MI,
	&m12011_MI,
	&m12013_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1775_0_0_0;
extern Il2CppType t1775_1_0_0;
struct t1775;
const Il2CppTypeDefinitionMetadata t1775_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1775_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TokenGenerator", "System.Reflection.Emit", t1775_MIs, NULL, NULL, NULL, &t1775_TI, NULL, &EmptyCustomAttributesCache, &t1775_0_0_0, &t1775_1_0_0, &t1775_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 160, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 0, 0, 0};
#include "t1769.h"
// Metadata Definition System.Reflection.Emit.ILGenerator/LabelFixup
extern TypeInfo t1769_TI;
#include "t1769MD.h"
static MethodInfo* t1769_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_6;
FieldInfo t1769_f0_FieldInfo = 
{
	"offset", &t125_0_0_6, &t1769_TI, offsetof(t1769, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1769_f1_FieldInfo = 
{
	"pos", &t125_0_0_6, &t1769_TI, offsetof(t1769, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1769_f2_FieldInfo = 
{
	"label_idx", &t125_0_0_6, &t1769_TI, offsetof(t1769, f2) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1769_FIs[] =
{
	&t1769_f0_FieldInfo,
	&t1769_f1_FieldInfo,
	&t1769_f2_FieldInfo,
	NULL
};
static Il2CppMethodReference t1769_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1769_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1769_0_0_0;
extern Il2CppType t1769_1_0_0;
extern TypeInfo t1753_TI;
extern Il2CppType t1753_0_0_0;
const Il2CppTypeDefinitionMetadata t1769_DM = 
{
	&t1753_0_0_0, NULL, NULL, NULL, &t117_0_0_0, t1769_VT, t1769_VTIGM, NULL};
TypeInfo t1769_TI = 
{
	&g_mscorlib_dll_Image, NULL, "LabelFixup", "", t1769_MIs, NULL, t1769_FIs, NULL, &t1769_TI, NULL, &EmptyCustomAttributesCache, &t1769_0_0_0, &t1769_1_0_0, &t1769_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1769)+ sizeof (Il2CppObject), sizeof (t1769)+ sizeof (Il2CppObject), 0, sizeof(t1769 ), 0, 0, -1, 1048843, 0, 0, true, false, false, false, false, false, false, false, false, true, 0, 0, 3, 0, 0, 4, 0, 0};
#include "t1770.h"
// Metadata Definition System.Reflection.Emit.ILGenerator/LabelData
extern TypeInfo t1770_TI;
#include "t1770MD.h"
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1770_m9248_ParameterInfos[] = 
{
	{"addr", 0, 134221570, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"maxStack", 1, 134221571, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9248_MI = 
{
	".ctor", (methodPointerType)&m9248, &t1770_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t125, t1770_m9248_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3071, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1770_MIs[] =
{
	&m9248_MI,
	NULL
};
extern Il2CppType t125_0_0_6;
FieldInfo t1770_f0_FieldInfo = 
{
	"addr", &t125_0_0_6, &t1770_TI, offsetof(t1770, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1770_f1_FieldInfo = 
{
	"maxStack", &t125_0_0_6, &t1770_TI, offsetof(t1770, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1770_FIs[] =
{
	&t1770_f0_FieldInfo,
	&t1770_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1770_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1770_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1770_0_0_0;
extern Il2CppType t1770_1_0_0;
const Il2CppTypeDefinitionMetadata t1770_DM = 
{
	&t1753_0_0_0, NULL, NULL, NULL, &t117_0_0_0, t1770_VT, t1770_VTIGM, NULL};
TypeInfo t1770_TI = 
{
	&g_mscorlib_dll_Image, NULL, "LabelData", "", t1770_MIs, NULL, t1770_FIs, NULL, &t1770_TI, NULL, &EmptyCustomAttributesCache, &t1770_0_0_0, &t1770_1_0_0, &t1770_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1770)+ sizeof (Il2CppObject), sizeof (t1770)+ sizeof (Il2CppObject), 0, sizeof(t1770 ), 0, 0, -1, 1048843, 0, 0, true, false, false, false, false, false, false, false, false, true, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t1753.h"
// Metadata Definition System.Reflection.Emit.ILGenerator
#include "t1753MD.h"
extern Il2CppType t1568_0_0_0;
extern Il2CppType t1568_0_0_0;
extern Il2CppType t1775_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1753_m9249_ParameterInfos[] = 
{
	{"m", 0, 134221532, &EmptyCustomAttributesCache, &t1568_0_0_0},
	{"token_gen", 1, 134221533, &EmptyCustomAttributesCache, &t1775_0_0_0},
	{"size", 2, 134221534, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9249_MI = 
{
	".ctor", (methodPointerType)&m9249, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1753_m9249_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 3, false, false, 3046, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9250_MI = 
{
	".cctor", (methodPointerType)&m9250, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3047, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t560_0_0_0;
static ParameterInfo t1753_m9251_ParameterInfos[] = 
{
	{"mi", 0, 134221535, &EmptyCustomAttributesCache, &t560_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9251_MI = 
{
	"add_token_fixup", (methodPointerType)&m9251, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1753_m9251_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3048, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1753_m9252_ParameterInfos[] = 
{
	{"nbytes", 0, 134221536, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9252_MI = 
{
	"make_room", (methodPointerType)&m9252, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1753_m9252_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3049, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1753_m9253_ParameterInfos[] = 
{
	{"val", 0, 134221537, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9253_MI = 
{
	"emit_int", (methodPointerType)&m9253, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1753_m9253_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3050, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1777_0_0_0;
extern Il2CppType t1777_0_0_0;
static ParameterInfo t1753_m9254_ParameterInfos[] = 
{
	{"opcode", 0, 134221538, &EmptyCustomAttributesCache, &t1777_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1777 (MethodInfo* method, void* obj, void** args);
MethodInfo m9254_MI = 
{
	"ll_emit", (methodPointerType)&m9254, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t1777, t1753_m9254_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3051, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1777_0_0_0;
static ParameterInfo t1753_m9255_ParameterInfos[] = 
{
	{"opcode", 0, 134221539, &EmptyCustomAttributesCache, &t1777_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t1777 (MethodInfo* method, void* obj, void** args);
MethodInfo m9255_MI = 
{
	"target_len", (methodPointerType)&m9255, &t1753_TI, &t125_0_0_0, RuntimeInvoker_t125_t1777, t1753_m9255_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 3052, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1753_m9256_ParameterInfos[] = 
{
	{"localType", 0, 134221540, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1776_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9256_MI = 
{
	"DeclareLocal", (methodPointerType)&m9256, &t1753_TI, &t1776_0_0_0, RuntimeInvoker_t9_t9, t1753_m9256_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 4, 1, false, false, 3053, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1753_m9257_ParameterInfos[] = 
{
	{"localType", 0, 134221541, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"pinned", 1, 134221542, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1776_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9257_MI = 
{
	"DeclareLocal", (methodPointerType)&m9257, &t1753_TI, &t1776_0_0_0, RuntimeInvoker_t9_t9_t186, t1753_m9257_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 2, false, false, 3054, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1778_0_0_0;
extern void* RuntimeInvoker_t1778 (MethodInfo* method, void* obj, void** args);
MethodInfo m9258_MI = 
{
	"DefineLabel", (methodPointerType)&m9258, &t1753_TI, &t1778_0_0_0, RuntimeInvoker_t1778, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 3055, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1777_0_0_0;
static ParameterInfo t1753_m9259_ParameterInfos[] = 
{
	{"opcode", 0, 134221543, &EmptyCustomAttributesCache, &t1777_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1777 (MethodInfo* method, void* obj, void** args);
MethodInfo m9259_MI = 
{
	"Emit", (methodPointerType)&m9259, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t1777, t1753_m9259_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 1, false, false, 3056, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1777_0_0_0;
extern Il2CppType t575_0_0_0;
static ParameterInfo t1753_m9260_ParameterInfos[] = 
{
	{"opcode", 0, 134221544, &EmptyCustomAttributesCache, &t1777_0_0_0},
	{"arg", 1, 134221545, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1777_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9260_MI = 
{
	"Emit", (methodPointerType)&m9260, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t1777_t186, t1753_m9260_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 2, false, false, 3057, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1777_0_0_0;
extern Il2CppType t826_0_0_0;
static ParameterInfo t1753_m9261_ParameterInfos[] = 
{
	{"opcode", 0, 134221546, &EmptyCustomAttributesCache, &t1777_0_0_0},
	{"con", 1, 134221547, &EmptyCustomAttributesCache, &t826_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1777_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1753__CustomAttributeCache_m9261;
MethodInfo m9261_MI = 
{
	"Emit", (methodPointerType)&m9261, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t1777_t9, t1753_m9261_ParameterInfos, &t1753__CustomAttributeCache_m9261, 454, 0, 9, 2, false, false, 3058, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1777_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1753_m9262_ParameterInfos[] = 
{
	{"opcode", 0, 134221548, &EmptyCustomAttributesCache, &t1777_0_0_0},
	{"field", 1, 134221549, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1777_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9262_MI = 
{
	"Emit", (methodPointerType)&m9262, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t1777_t9, t1753_m9262_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 2, false, false, 3059, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1777_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1753_m9263_ParameterInfos[] = 
{
	{"opcode", 0, 134221550, &EmptyCustomAttributesCache, &t1777_0_0_0},
	{"arg", 1, 134221551, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1777_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9263_MI = 
{
	"Emit", (methodPointerType)&m9263, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t1777_t125, t1753_m9263_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 2, false, false, 3060, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1777_0_0_0;
extern Il2CppType t1778_0_0_0;
extern Il2CppType t1778_0_0_0;
static ParameterInfo t1753_m9264_ParameterInfos[] = 
{
	{"opcode", 0, 134221552, &EmptyCustomAttributesCache, &t1777_0_0_0},
	{"label", 1, 134221553, &EmptyCustomAttributesCache, &t1778_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1777_t1778 (MethodInfo* method, void* obj, void** args);
MethodInfo m9264_MI = 
{
	"Emit", (methodPointerType)&m9264, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t1777_t1778, t1753_m9264_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 12, 2, false, false, 3061, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1777_0_0_0;
extern Il2CppType t1776_0_0_0;
extern Il2CppType t1776_0_0_0;
static ParameterInfo t1753_m9265_ParameterInfos[] = 
{
	{"opcode", 0, 134221554, &EmptyCustomAttributesCache, &t1777_0_0_0},
	{"local", 1, 134221555, &EmptyCustomAttributesCache, &t1776_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1777_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9265_MI = 
{
	"Emit", (methodPointerType)&m9265, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t1777_t9, t1753_m9265_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 2, false, false, 3062, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1777_0_0_0;
extern Il2CppType t828_0_0_0;
static ParameterInfo t1753_m9266_ParameterInfos[] = 
{
	{"opcode", 0, 134221556, &EmptyCustomAttributesCache, &t1777_0_0_0},
	{"meth", 1, 134221557, &EmptyCustomAttributesCache, &t828_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1777_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9266_MI = 
{
	"Emit", (methodPointerType)&m9266, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t1777_t9, t1753_m9266_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 2, false, false, 3063, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1777_0_0_0;
extern Il2CppType t828_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1753_m9267_ParameterInfos[] = 
{
	{"opcode", 0, 134221558, &EmptyCustomAttributesCache, &t1777_0_0_0},
	{"method", 1, 134221559, &EmptyCustomAttributesCache, &t828_0_0_0},
	{"token", 2, 134221560, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1777_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9267_MI = 
{
	"Emit", (methodPointerType)&m9267, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t1777_t9_t125, t1753_m9267_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 3064, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1777_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1753_m9268_ParameterInfos[] = 
{
	{"opcode", 0, 134221561, &EmptyCustomAttributesCache, &t1777_0_0_0},
	{"str", 1, 134221562, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1777_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9268_MI = 
{
	"Emit", (methodPointerType)&m9268, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t1777_t9, t1753_m9268_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 15, 2, false, false, 3065, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1777_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1753_m9269_ParameterInfos[] = 
{
	{"opcode", 0, 134221563, &EmptyCustomAttributesCache, &t1777_0_0_0},
	{"cls", 1, 134221564, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1777_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9269_MI = 
{
	"Emit", (methodPointerType)&m9269, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t1777_t9, t1753_m9269_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 16, 2, false, false, 3066, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1777_0_0_0;
extern Il2CppType t828_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t1753_m9270_ParameterInfos[] = 
{
	{"opcode", 0, 134221565, &EmptyCustomAttributesCache, &t1777_0_0_0},
	{"methodInfo", 1, 134221566, &EmptyCustomAttributesCache, &t828_0_0_0},
	{"optionalParameterTypes", 2, 134221567, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1777_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1753__CustomAttributeCache_m9270;
MethodInfo m9270_MI = 
{
	"EmitCall", (methodPointerType)&m9270, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t1777_t9_t9, t1753_m9270_ParameterInfos, &t1753__CustomAttributeCache_m9270, 454, 0, 17, 3, false, false, 3067, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1778_0_0_0;
static ParameterInfo t1753_m9271_ParameterInfos[] = 
{
	{"loc", 0, 134221568, &EmptyCustomAttributesCache, &t1778_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1778 (MethodInfo* method, void* obj, void** args);
MethodInfo m9271_MI = 
{
	"MarkLabel", (methodPointerType)&m9271, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122_t1778, t1753_m9271_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 18, 1, false, false, 3068, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9272_MI = 
{
	"label_fixup", (methodPointerType)&m9272, &t1753_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 3069, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1753_0_0_0;
static ParameterInfo t1753_m9273_ParameterInfos[] = 
{
	{"ig", 0, 134221569, &EmptyCustomAttributesCache, &t1753_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1753__CustomAttributeCache_m9273;
MethodInfo m9273_MI = 
{
	"Mono_GetCurrentOffset", (methodPointerType)&m9273, &t1753_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1753_m9273_ParameterInfos, &t1753__CustomAttributeCache_m9273, 147, 0, 255, 1, false, false, 3070, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1753_MIs[] =
{
	&m9249_MI,
	&m9250_MI,
	&m9251_MI,
	&m9252_MI,
	&m9253_MI,
	&m9254_MI,
	&m9255_MI,
	&m9256_MI,
	&m9257_MI,
	&m9258_MI,
	&m9259_MI,
	&m9260_MI,
	&m9261_MI,
	&m9262_MI,
	&m9263_MI,
	&m9264_MI,
	&m9265_MI,
	&m9266_MI,
	&m9267_MI,
	&m9268_MI,
	&m9269_MI,
	&m9270_MI,
	&m9271_MI,
	&m9272_MI,
	&m9273_MI,
	NULL
};
extern Il2CppType t126_0_0_49;
FieldInfo t1753_f0_FieldInfo = 
{
	"void_type", &t126_0_0_49, &t1753_TI, offsetof(t1753_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t1753_f1_FieldInfo = 
{
	"code", &t730_0_0_1, &t1753_TI, offsetof(t1753, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1753_f2_FieldInfo = 
{
	"code_len", &t125_0_0_1, &t1753_TI, offsetof(t1753, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1753_f3_FieldInfo = 
{
	"max_stack", &t125_0_0_1, &t1753_TI, offsetof(t1753, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1753_f4_FieldInfo = 
{
	"cur_stack", &t125_0_0_1, &t1753_TI, offsetof(t1753, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1771_0_0_1;
FieldInfo t1753_f5_FieldInfo = 
{
	"locals", &t1771_0_0_1, &t1753_TI, offsetof(t1753, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1753_f6_FieldInfo = 
{
	"num_token_fixups", &t125_0_0_1, &t1753_TI, offsetof(t1753, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1772_0_0_1;
FieldInfo t1753_f7_FieldInfo = 
{
	"token_fixups", &t1772_0_0_1, &t1753_TI, offsetof(t1753, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1773_0_0_1;
FieldInfo t1753_f8_FieldInfo = 
{
	"labels", &t1773_0_0_1, &t1753_TI, offsetof(t1753, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1753_f9_FieldInfo = 
{
	"num_labels", &t125_0_0_1, &t1753_TI, offsetof(t1753, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1774_0_0_1;
FieldInfo t1753_f10_FieldInfo = 
{
	"fixups", &t1774_0_0_1, &t1753_TI, offsetof(t1753, f10), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1753_f11_FieldInfo = 
{
	"num_fixups", &t125_0_0_1, &t1753_TI, offsetof(t1753, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1568_0_0_3;
FieldInfo t1753_f12_FieldInfo = 
{
	"module", &t1568_0_0_3, &t1753_TI, offsetof(t1753, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1775_0_0_1;
FieldInfo t1753_f13_FieldInfo = 
{
	"token_gen", &t1775_0_0_1, &t1753_TI, offsetof(t1753, f13), &EmptyCustomAttributesCache};
static FieldInfo* t1753_FIs[] =
{
	&t1753_f0_FieldInfo,
	&t1753_f1_FieldInfo,
	&t1753_f2_FieldInfo,
	&t1753_f3_FieldInfo,
	&t1753_f4_FieldInfo,
	&t1753_f5_FieldInfo,
	&t1753_f6_FieldInfo,
	&t1753_f7_FieldInfo,
	&t1753_f8_FieldInfo,
	&t1753_f9_FieldInfo,
	&t1753_f10_FieldInfo,
	&t1753_f11_FieldInfo,
	&t1753_f12_FieldInfo,
	&t1753_f13_FieldInfo,
	NULL
};
static const Il2CppType* t1753_TI__nestedTypes[2] =
{
	&t1769_0_0_0,
	&t1770_0_0_0,
};
extern MethodInfo m9256_MI;
extern MethodInfo m9257_MI;
extern MethodInfo m9258_MI;
extern MethodInfo m9259_MI;
extern MethodInfo m9260_MI;
extern MethodInfo m9261_MI;
extern MethodInfo m9262_MI;
extern MethodInfo m9263_MI;
extern MethodInfo m9264_MI;
extern MethodInfo m9265_MI;
extern MethodInfo m9266_MI;
extern MethodInfo m9268_MI;
extern MethodInfo m9269_MI;
extern MethodInfo m9270_MI;
extern MethodInfo m9271_MI;
static Il2CppMethodReference t1753_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9256_MI,
	&m9257_MI,
	&m9258_MI,
	&m9259_MI,
	&m9260_MI,
	&m9261_MI,
	&m9262_MI,
	&m9263_MI,
	&m9264_MI,
	&m9265_MI,
	&m9266_MI,
	&m9268_MI,
	&m9269_MI,
	&m9270_MI,
	&m9271_MI,
};
static bool t1753_VTIGM[] =
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
};
extern Il2CppType t2598_0_0_0;
static const Il2CppType* t1753_ITIs[] = 
{
	&t2598_0_0_0,
};
static Il2CppInterfaceOffsetPair t1753_IOs[] = 
{
	{ &t2598_0_0_0, 4},
};
extern TypeInfo t2598_TI;
void t1753_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1840 * tmp;
		tmp = (t1840 *)il2cpp_codegen_object_new (&t1840_TI);
		m9772(tmp, il2cpp_codegen_type_get_object(&t2598_0_0_0), &m9772_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1838 * tmp;
		tmp = (t1838 *)il2cpp_codegen_object_new (&t1838_TI);
		m9771(tmp, 0, &m9771_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t1753_CustomAttributesCacheGenerator_m9261(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1594_TI;
#include "t1594.h"
#include "t1594MD.h"
extern MethodInfo m7851_MI;
void t1753_CustomAttributesCacheGenerator_m9270(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1594 * tmp;
		tmp = (t1594 *)il2cpp_codegen_object_new (&t1594_TI);
		m7851(tmp, il2cpp_codegen_string_new_wrapper("vararg methods are not supported"), &m7851_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1753_CustomAttributesCacheGenerator_m9273(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m2994(tmp, il2cpp_codegen_string_new_wrapper("Use ILOffset"), &m2994_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1753__CustomAttributeCache = {
3,
NULL,
&t1753_CustomAttributesCacheGenerator
};
CustomAttributesCache t1753__CustomAttributeCache_m9261 = {
1,
NULL,
&t1753_CustomAttributesCacheGenerator_m9261
};
CustomAttributesCache t1753__CustomAttributeCache_m9270 = {
1,
NULL,
&t1753_CustomAttributesCacheGenerator_m9270
};
CustomAttributesCache t1753__CustomAttributeCache_m9273 = {
1,
NULL,
&t1753_CustomAttributesCacheGenerator_m9273
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1753_1_0_0;
struct t1753;
extern CustomAttributesCache t1753__CustomAttributeCache;
extern CustomAttributesCache t1753__CustomAttributeCache_m9261;
extern CustomAttributesCache t1753__CustomAttributeCache_m9270;
extern CustomAttributesCache t1753__CustomAttributeCache_m9273;
const Il2CppTypeDefinitionMetadata t1753_DM = 
{
	NULL, t1753_TI__nestedTypes, t1753_ITIs, t1753_IOs, &t9_0_0_0, t1753_VT, t1753_VTIGM, NULL};
TypeInfo t1753_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ILGenerator", "System.Reflection.Emit", t1753_MIs, NULL, t1753_FIs, NULL, &t1753_TI, NULL, &t1753__CustomAttributeCache, &t1753_0_0_0, &t1753_1_0_0, &t1753_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1753), sizeof (t1753), 0, -1, sizeof(t1753_SFs), 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, true, false, 25, 0, 14, 0, 2, 19, 1, 1};
#include "t1778.h"
// Metadata Definition System.Reflection.Emit.Label
extern TypeInfo t1778_TI;
#include "t1778MD.h"
extern Il2CppType t125_0_0_0;
static ParameterInfo t1778_m9274_ParameterInfos[] = 
{
	{"val", 0, 134221572, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9274_MI = 
{
	".ctor", (methodPointerType)&m9274, &t1778_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1778_m9274_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 3072, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1778_m9275_ParameterInfos[] = 
{
	{"obj", 0, 134221573, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9275_MI = 
{
	"Equals", (methodPointerType)&m9275, &t1778_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1778_m9275_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 3073, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9276_MI = 
{
	"GetHashCode", (methodPointerType)&m9276, &t1778_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 3074, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1778_MIs[] =
{
	&m9274_MI,
	&m9275_MI,
	&m9276_MI,
	NULL
};
extern Il2CppType t125_0_0_3;
FieldInfo t1778_f0_FieldInfo = 
{
	"label", &t125_0_0_3, &t1778_TI, offsetof(t1778, f0) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1778_FIs[] =
{
	&t1778_f0_FieldInfo,
	NULL
};
extern MethodInfo m9275_MI;
extern MethodInfo m9276_MI;
static Il2CppMethodReference t1778_VT[] =
{
	&m9275_MI,
	&m646_MI,
	&m9276_MI,
	&m682_MI,
};
static bool t1778_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1778_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1778__CustomAttributeCache = {
1,
NULL,
&t1778_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1778_1_0_0;
extern CustomAttributesCache t1778__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1778_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1778_VT, t1778_VTIGM, NULL};
TypeInfo t1778_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Label", "System.Reflection.Emit", t1778_MIs, NULL, t1778_FIs, NULL, &t1778_TI, NULL, &t1778__CustomAttributeCache, &t1778_0_0_0, &t1778_1_0_0, &t1778_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1778)+ sizeof (Il2CppObject), sizeof (t1778)+ sizeof (Il2CppObject), 0, sizeof(t1778 ), 0, 0, -1, 1057033, 0, 0, true, false, false, false, false, false, false, false, false, true, 3, 0, 1, 0, 0, 4, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
