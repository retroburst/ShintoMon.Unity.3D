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
extern TypeInfo t1156_TI;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1156_m5688_ParameterInfos[] = 
{
	{"x", 0, 134220706, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"y", 1, 134220707, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5688_MI = 
{
	"Compare", NULL, &t1156_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1156_m5688_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, false, 2223, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1156_MIs[] =
{
	&m5688_MI,
	NULL
};
extern TypeInfo t670_TI;
#include "t670.h"
#include "t670MD.h"
extern MethodInfo m3104_MI;
void t1156_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1156__CustomAttributeCache = {
1,
NULL,
&t1156_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1156_0_0_0;
extern Il2CppType t1156_1_0_0;
struct t1156;
extern CustomAttributesCache t1156__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1156_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1156_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer", "System.Collections", t1156_MIs, NULL, NULL, NULL, &t1156_TI, NULL, &t1156__CustomAttributeCache, &t1156_0_0_0, &t1156_1_0_0, &t1156_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Collections.IDictionary
extern TypeInfo t1151_TI;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1151_m5674_ParameterInfos[] = 
{
	{"key", 0, 134220708, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5674_MI = 
{
	"get_Item", NULL, &t1151_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1151_m5674_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 0, 1, false, false, 2224, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1151_m5675_ParameterInfos[] = 
{
	{"key", 0, 134220709, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"value", 1, 134220710, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5675_MI = 
{
	"set_Item", NULL, &t1151_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1151_m5675_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 1, 2, false, false, 2225, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1151_m5679_ParameterInfos[] = 
{
	{"key", 0, 134220711, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"value", 1, 134220712, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5679_MI = 
{
	"Add", NULL, &t1151_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1151_m5679_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 2, false, false, 2226, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1151_m5680_ParameterInfos[] = 
{
	{"key", 0, 134220713, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5680_MI = 
{
	"Contains", NULL, &t1151_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1151_m5680_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 3, 1, false, false, 2227, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1152_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5682_MI = 
{
	"GetEnumerator", NULL, &t1151_TI, &t1152_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 1478, 0, 4, 0, false, false, 2228, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1151_m5683_ParameterInfos[] = 
{
	{"key", 0, 134220714, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5683_MI = 
{
	"Remove", NULL, &t1151_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1151_m5683_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 2229, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1151_MIs[] =
{
	&m5674_MI,
	&m5675_MI,
	&m5679_MI,
	&m5680_MI,
	&m5682_MI,
	&m5683_MI,
	NULL
};
extern MethodInfo m5674_MI;
extern MethodInfo m5675_MI;
static PropertyInfo t1151____Item_PropertyInfo = 
{
	&t1151_TI, "Item", &m5674_MI, &m5675_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1151_PIs[] =
{
	&t1151____Item_PropertyInfo,
	NULL
};
extern Il2CppType t658_0_0_0;
extern Il2CppType t991_0_0_0;
static const Il2CppType* t1151_ITIs[] = 
{
	&t658_0_0_0,
	&t991_0_0_0,
};
extern TypeInfo t659_TI;
#include "t659.h"
#include "t659MD.h"
extern MethodInfo m3079_MI;
void t1151_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t659 * tmp;
		tmp = (t659 *)il2cpp_codegen_object_new (&t659_TI);
		m3079(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m3079_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1151__CustomAttributeCache = {
2,
NULL,
&t1151_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1151_0_0_0;
extern Il2CppType t1151_1_0_0;
struct t1151;
extern CustomAttributesCache t1151__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1151_DM = 
{
	NULL, NULL, t1151_ITIs, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1151_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary", "System.Collections", t1151_MIs, t1151_PIs, NULL, NULL, &t1151_TI, NULL, &t1151__CustomAttributeCache, &t1151_0_0_0, &t1151_1_0_0, &t1151_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 0, 0, 0, 0, 2, 0};
// Metadata Definition System.Collections.IDictionaryEnumerator
extern TypeInfo t1152_TI;
extern Il2CppType t1155_0_0_0;
extern void* RuntimeInvoker_t1155 (MethodInfo* method, void* obj, void** args);
MethodInfo m11972_MI = 
{
	"get_Entry", NULL, &t1152_TI, &t1155_0_0_0, RuntimeInvoker_t1155, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 2230, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5729_MI = 
{
	"get_Key", NULL, &t1152_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, false, 2231, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5728_MI = 
{
	"get_Value", NULL, &t1152_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 2, 0, false, false, 2232, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1152_MIs[] =
{
	&m11972_MI,
	&m5729_MI,
	&m5728_MI,
	NULL
};
extern MethodInfo m11972_MI;
static PropertyInfo t1152____Entry_PropertyInfo = 
{
	&t1152_TI, "Entry", &m11972_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5729_MI;
static PropertyInfo t1152____Key_PropertyInfo = 
{
	&t1152_TI, "Key", &m5729_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5728_MI;
static PropertyInfo t1152____Value_PropertyInfo = 
{
	&t1152_TI, "Value", &m5728_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1152_PIs[] =
{
	&t1152____Entry_PropertyInfo,
	&t1152____Key_PropertyInfo,
	&t1152____Value_PropertyInfo,
	NULL
};
extern Il2CppType t76_0_0_0;
static const Il2CppType* t1152_ITIs[] = 
{
	&t76_0_0_0,
};
void t1152_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1152__CustomAttributeCache = {
1,
NULL,
&t1152_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1152_0_0_0;
extern Il2CppType t1152_1_0_0;
struct t1152;
extern CustomAttributesCache t1152__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1152_DM = 
{
	NULL, NULL, t1152_ITIs, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1152_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionaryEnumerator", "System.Collections", t1152_MIs, t1152_PIs, NULL, NULL, &t1152_TI, NULL, &t1152__CustomAttributeCache, &t1152_0_0_0, &t1152_1_0_0, &t1152_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 3, 0, 0, 0, 0, 1, 0};
// Metadata Definition System.Collections.IEqualityComparer
extern TypeInfo t1163_TI;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1163_m11975_ParameterInfos[] = 
{
	{"x", 0, 134220715, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"y", 1, 134220716, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m11975_MI = 
{
	"Equals", NULL, &t1163_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1163_m11975_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, false, 2233, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1163_m11973_ParameterInfos[] = 
{
	{"obj", 0, 134220717, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m11973_MI = 
{
	"GetHashCode", NULL, &t1163_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1163_m11973_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, false, 2234, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1163_MIs[] =
{
	&m11975_MI,
	&m11973_MI,
	NULL
};
void t1163_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1163__CustomAttributeCache = {
1,
NULL,
&t1163_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1163_0_0_0;
extern Il2CppType t1163_1_0_0;
struct t1163;
extern CustomAttributesCache t1163__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1163_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1163_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer", "System.Collections", t1163_MIs, NULL, NULL, NULL, &t1163_TI, NULL, &t1163__CustomAttributeCache, &t1163_0_0_0, &t1163_1_0_0, &t1163_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Collections.IHashCodeProvider
extern TypeInfo t1162_TI;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1162_m11974_ParameterInfos[] = 
{
	{"obj", 0, 134220718, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m11974_MI = 
{
	"GetHashCode", NULL, &t1162_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1162_m11974_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 2235, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1162_MIs[] =
{
	&m11974_MI,
	NULL
};
extern TypeInfo t611_TI;
#include "t611.h"
#include "t611MD.h"
extern MethodInfo m2970_MI;
void t1162_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t611 * tmp;
		tmp = (t611 *)il2cpp_codegen_object_new (&t611_TI);
		m2970(tmp, il2cpp_codegen_string_new_wrapper("Please use IEqualityComparer instead."), &m2970_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1162__CustomAttributeCache = {
2,
NULL,
&t1162_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1162_0_0_0;
extern Il2CppType t1162_1_0_0;
struct t1162;
extern CustomAttributesCache t1162__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1162_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1162_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IHashCodeProvider", "System.Collections", t1162_MIs, NULL, NULL, NULL, &t1162_TI, NULL, &t1162__CustomAttributeCache, &t1162_0_0_0, &t1162_1_0_0, &t1162_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1676.h"
// Metadata Definition System.Collections.Queue/QueueEnumerator
extern TypeInfo t1676_TI;
#include "t1676MD.h"
extern Il2CppType t1677_0_0_0;
extern Il2CppType t1677_0_0_0;
static ParameterInfo t1676_m8500_ParameterInfos[] = 
{
	{"q", 0, 134220726, &EmptyCustomAttributesCache, &t1677_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8500_MI = 
{
	".ctor", (methodPointerType)&m8500, &t1676_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1676_m8500_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2250, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8501_MI = 
{
	"get_Current", (methodPointerType)&m8501, &t1676_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 2251, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8502_MI = 
{
	"MoveNext", (methodPointerType)&m8502, &t1676_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2252, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1676_MIs[] =
{
	&m8500_MI,
	&m8501_MI,
	&m8502_MI,
	NULL
};
extern Il2CppType t1677_0_0_1;
FieldInfo t1676_f0_FieldInfo = 
{
	"queue", &t1677_0_0_1, &t1676_TI, offsetof(t1676, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1676_f1_FieldInfo = 
{
	"_version", &t125_0_0_1, &t1676_TI, offsetof(t1676, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1676_f2_FieldInfo = 
{
	"current", &t125_0_0_1, &t1676_TI, offsetof(t1676, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1676_FIs[] =
{
	&t1676_f0_FieldInfo,
	&t1676_f1_FieldInfo,
	&t1676_f2_FieldInfo,
	NULL
};
extern MethodInfo m8501_MI;
static PropertyInfo t1676____Current_PropertyInfo = 
{
	&t1676_TI, "Current", &m8501_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1676_PIs[] =
{
	&t1676____Current_PropertyInfo,
	NULL
};
extern MethodInfo m671_MI;
extern MethodInfo m646_MI;
extern MethodInfo m672_MI;
extern MethodInfo m673_MI;
extern MethodInfo m8502_MI;
static Il2CppMethodReference t1676_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8501_MI,
	&m8502_MI,
	&m8501_MI,
	&m8502_MI,
};
static bool t1676_VTIGM[] =
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
extern Il2CppType t615_0_0_0;
static const Il2CppType* t1676_ITIs[] = 
{
	&t76_0_0_0,
	&t615_0_0_0,
};
static Il2CppInterfaceOffsetPair t1676_IOs[] = 
{
	{ &t76_0_0_0, 4},
	{ &t615_0_0_0, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1676_0_0_0;
extern Il2CppType t1676_1_0_0;
extern TypeInfo t1677_TI;
struct t1676;
const Il2CppTypeDefinitionMetadata t1676_DM = 
{
	&t1677_0_0_0, NULL, t1676_ITIs, t1676_IOs, &t9_0_0_0, t1676_VT, t1676_VTIGM, NULL};
TypeInfo t1676_TI = 
{
	&g_mscorlib_dll_Image, NULL, "QueueEnumerator", "", t1676_MIs, t1676_PIs, t1676_FIs, NULL, &t1676_TI, NULL, &EmptyCustomAttributesCache, &t1676_0_0_0, &t1676_1_0_0, &t1676_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1676), sizeof (t1676), 0, -1, 0, 0, -1, 1056771, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 1, 3, 0, 0, 8, 2, 2};
#include "t1677.h"
// Metadata Definition System.Collections.Queue
#include "t1677MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8503_MI = 
{
	".ctor", (methodPointerType)&m8503, &t1677_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2236, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1677_m8504_ParameterInfos[] = 
{
	{"capacity", 0, 134220719, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8504_MI = 
{
	".ctor", (methodPointerType)&m8504, &t1677_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1677_m8504_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2237, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t991_0_0_0;
static ParameterInfo t1677_m8505_ParameterInfos[] = 
{
	{"col", 0, 134220720, &EmptyCustomAttributesCache, &t991_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8505_MI = 
{
	".ctor", (methodPointerType)&m8505, &t1677_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1677_m8505_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2238, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t1677_m8506_ParameterInfos[] = 
{
	{"capacity", 0, 134220721, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"growFactor", 1, 134220722, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m8506_MI = 
{
	".ctor", (methodPointerType)&m8506, &t1677_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t123, t1677_m8506_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2239, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8507_MI = 
{
	"get_Count", (methodPointerType)&m8507, &t1677_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 2240, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8508_MI = 
{
	"get_IsSynchronized", (methodPointerType)&m8508, &t1677_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 10, 0, false, false, 2241, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8509_MI = 
{
	"get_SyncRoot", (methodPointerType)&m8509, &t1677_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 2242, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t121_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1677_m8510_ParameterInfos[] = 
{
	{"array", 0, 134220723, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"index", 1, 134220724, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8510_MI = 
{
	"CopyTo", (methodPointerType)&m8510, &t1677_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1677_m8510_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 12, 2, false, false, 2243, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t76_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8511_MI = 
{
	"GetEnumerator", (methodPointerType)&m8511, &t1677_TI, &t76_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 13, 0, false, false, 2244, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8512_MI = 
{
	"Clear", (methodPointerType)&m8512, &t1677_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 14, 0, false, false, 2245, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8513_MI = 
{
	"Dequeue", (methodPointerType)&m8513, &t1677_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 15, 0, false, false, 2246, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1677_m8514_ParameterInfos[] = 
{
	{"obj", 0, 134220725, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8514_MI = 
{
	"Enqueue", (methodPointerType)&m8514, &t1677_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1677_m8514_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 16, 1, false, false, 2247, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8515_MI = 
{
	"Peek", (methodPointerType)&m8515, &t1677_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 17, 0, false, false, 2248, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8516_MI = 
{
	"grow", (methodPointerType)&m8516, &t1677_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2249, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1677_MIs[] =
{
	&m8503_MI,
	&m8504_MI,
	&m8505_MI,
	&m8506_MI,
	&m8507_MI,
	&m8508_MI,
	&m8509_MI,
	&m8510_MI,
	&m8511_MI,
	&m8512_MI,
	&m8513_MI,
	&m8514_MI,
	&m8515_MI,
	&m8516_MI,
	NULL
};
extern Il2CppType t158_0_0_1;
FieldInfo t1677_f0_FieldInfo = 
{
	"_array", &t158_0_0_1, &t1677_TI, offsetof(t1677, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1677_f1_FieldInfo = 
{
	"_head", &t125_0_0_1, &t1677_TI, offsetof(t1677, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1677_f2_FieldInfo = 
{
	"_size", &t125_0_0_1, &t1677_TI, offsetof(t1677, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1677_f3_FieldInfo = 
{
	"_tail", &t125_0_0_1, &t1677_TI, offsetof(t1677, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1677_f4_FieldInfo = 
{
	"_growFactor", &t125_0_0_1, &t1677_TI, offsetof(t1677, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1677_f5_FieldInfo = 
{
	"_version", &t125_0_0_1, &t1677_TI, offsetof(t1677, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1677_FIs[] =
{
	&t1677_f0_FieldInfo,
	&t1677_f1_FieldInfo,
	&t1677_f2_FieldInfo,
	&t1677_f3_FieldInfo,
	&t1677_f4_FieldInfo,
	&t1677_f5_FieldInfo,
	NULL
};
extern MethodInfo m8507_MI;
static PropertyInfo t1677____Count_PropertyInfo = 
{
	&t1677_TI, "Count", &m8507_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8508_MI;
static PropertyInfo t1677____IsSynchronized_PropertyInfo = 
{
	&t1677_TI, "IsSynchronized", &m8508_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8509_MI;
static PropertyInfo t1677____SyncRoot_PropertyInfo = 
{
	&t1677_TI, "SyncRoot", &m8509_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1677_PIs[] =
{
	&t1677____Count_PropertyInfo,
	&t1677____IsSynchronized_PropertyInfo,
	&t1677____SyncRoot_PropertyInfo,
	NULL
};
static const Il2CppType* t1677_TI__nestedTypes[1] =
{
	&t1676_0_0_0,
};
extern MethodInfo m8511_MI;
extern MethodInfo m8510_MI;
extern MethodInfo m8512_MI;
extern MethodInfo m8513_MI;
extern MethodInfo m8514_MI;
extern MethodInfo m8515_MI;
static Il2CppMethodReference t1677_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8511_MI,
	&m8507_MI,
	&m8508_MI,
	&m8509_MI,
	&m8510_MI,
	&m8507_MI,
	&m8508_MI,
	&m8509_MI,
	&m8510_MI,
	&m8511_MI,
	&m8512_MI,
	&m8513_MI,
	&m8514_MI,
	&m8515_MI,
};
static bool t1677_VTIGM[] =
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
static const Il2CppType* t1677_ITIs[] = 
{
	&t658_0_0_0,
	&t615_0_0_0,
	&t991_0_0_0,
};
static Il2CppInterfaceOffsetPair t1677_IOs[] = 
{
	{ &t658_0_0_0, 4},
	{ &t615_0_0_0, 5},
	{ &t991_0_0_0, 5},
};
extern TypeInfo t1686_TI;
#include "t1686.h"
#include "t1686MD.h"
extern MethodInfo m8552_MI;
extern TypeInfo t1688_TI;
#include "t1688.h"
#include "t1688MD.h"
extern MethodInfo m8555_MI;
extern TypeInfo t1667_TI;
extern Il2CppType t1667_0_0_0;
#include "t1667.h"
void t1677_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1686 * tmp;
		tmp = (t1686 *)il2cpp_codegen_object_new (&t1686_TI);
		m8552(tmp, il2cpp_codegen_string_new_wrapper("Count={Count}"), &m8552_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1688 * tmp;
		tmp = (t1688 *)il2cpp_codegen_object_new (&t1688_TI);
		m8555(tmp, il2cpp_codegen_type_get_object(&t1667_0_0_0), &m8555_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1677__CustomAttributeCache = {
3,
NULL,
&t1677_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1677_1_0_0;
struct t1677;
extern CustomAttributesCache t1677__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1677_DM = 
{
	NULL, t1677_TI__nestedTypes, t1677_ITIs, t1677_IOs, &t9_0_0_0, t1677_VT, t1677_VTIGM, NULL};
TypeInfo t1677_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Queue", "System.Collections", t1677_MIs, t1677_PIs, t1677_FIs, NULL, &t1677_TI, NULL, &t1677__CustomAttributeCache, &t1677_0_0_0, &t1677_1_0_0, &t1677_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1677), sizeof (t1677), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 14, 3, 6, 0, 1, 18, 3, 3};
#include "t1678.h"
// Metadata Definition System.Collections.SortedList/Slot
extern TypeInfo t1678_TI;
#include "t1678MD.h"
static MethodInfo* t1678_MIs[] =
{
	NULL
};
extern Il2CppType t9_0_0_3;
FieldInfo t1678_f0_FieldInfo = 
{
	"key", &t9_0_0_3, &t1678_TI, offsetof(t1678, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_3;
FieldInfo t1678_f1_FieldInfo = 
{
	"value", &t9_0_0_3, &t1678_TI, offsetof(t1678, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1678_FIs[] =
{
	&t1678_f0_FieldInfo,
	&t1678_f1_FieldInfo,
	NULL
};
extern MethodInfo m680_MI;
extern MethodInfo m681_MI;
extern MethodInfo m682_MI;
static Il2CppMethodReference t1678_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1678_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1678_0_0_0;
extern Il2CppType t1678_1_0_0;
extern Il2CppType t117_0_0_0;
extern TypeInfo t1335_TI;
extern Il2CppType t1335_0_0_0;
const Il2CppTypeDefinitionMetadata t1678_DM = 
{
	&t1335_0_0_0, NULL, NULL, NULL, &t117_0_0_0, t1678_VT, t1678_VTIGM, NULL};
TypeInfo t1678_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Slot", "", t1678_MIs, NULL, t1678_FIs, NULL, &t1678_TI, NULL, &EmptyCustomAttributesCache, &t1678_0_0_0, &t1678_1_0_0, &t1678_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1678)+ sizeof (Il2CppObject), sizeof (t1678)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057037, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 2, 0, 0, 4, 0, 0};
#include "t1679.h"
// Metadata Definition System.Collections.SortedList/EnumeratorMode
extern TypeInfo t1679_TI;
#include "t1679MD.h"
static MethodInfo* t1679_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1679_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1679_TI, offsetof(t1679, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1679_0_0_32854;
FieldInfo t1679_f2_FieldInfo = 
{
	"KEY_MODE", &t1679_0_0_32854, &t1679_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1679_0_0_32854;
FieldInfo t1679_f3_FieldInfo = 
{
	"VALUE_MODE", &t1679_0_0_32854, &t1679_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1679_0_0_32854;
FieldInfo t1679_f4_FieldInfo = 
{
	"ENTRY_MODE", &t1679_0_0_32854, &t1679_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1679_FIs[] =
{
	&t1679_f1_FieldInfo,
	&t1679_f2_FieldInfo,
	&t1679_f3_FieldInfo,
	&t1679_f4_FieldInfo,
	NULL
};
static const int32_t t1679_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1679_f2_DefaultValue = 
{
	&t1679_f2_FieldInfo, { (char*)&t1679_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1679_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1679_f3_DefaultValue = 
{
	&t1679_f3_FieldInfo, { (char*)&t1679_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1679_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1679_f4_DefaultValue = 
{
	&t1679_f4_FieldInfo, { (char*)&t1679_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1679_FDVs[] = 
{
	&t1679_f2_DefaultValue,
	&t1679_f3_DefaultValue,
	&t1679_f4_DefaultValue,
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
static Il2CppMethodReference t1679_VT[] =
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
static bool t1679_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1679_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1679_0_0_0;
extern Il2CppType t1679_1_0_0;
extern Il2CppType t8_0_0_0;
#include "t125.h"
extern TypeInfo t125_TI;
const Il2CppTypeDefinitionMetadata t1679_DM = 
{
	&t1335_0_0_0, NULL, NULL, t1679_IOs, &t8_0_0_0, t1679_VT, t1679_VTIGM, NULL};
TypeInfo t1679_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EnumeratorMode", "", t1679_MIs, NULL, t1679_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t1679_0_0_0, &t1679_1_0_0, &t1679_DM, NULL, NULL, NULL, t1679_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1679)+ sizeof (Il2CppObject), sizeof (t1679)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 259, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1680.h"
// Metadata Definition System.Collections.SortedList/Enumerator
extern TypeInfo t1680_TI;
#include "t1680MD.h"
extern Il2CppType t1335_0_0_0;
extern Il2CppType t1679_0_0_0;
static ParameterInfo t1680_m8517_ParameterInfos[] = 
{
	{"host", 0, 134220753, &EmptyCustomAttributesCache, &t1335_0_0_0},
	{"mode", 1, 134220754, &EmptyCustomAttributesCache, &t1679_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8517_MI = 
{
	".ctor", (methodPointerType)&m8517, &t1680_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1680_m8517_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2281, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8518_MI = 
{
	".cctor", (methodPointerType)&m8518, &t1680_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2282, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8519_MI = 
{
	"Reset", (methodPointerType)&m8519, &t1680_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 486, 0, 9, 0, false, false, 2283, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8520_MI = 
{
	"MoveNext", (methodPointerType)&m8520, &t1680_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 2284, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1155_0_0_0;
extern void* RuntimeInvoker_t1155 (MethodInfo* method, void* obj, void** args);
MethodInfo m8521_MI = 
{
	"get_Entry", (methodPointerType)&m8521, &t1680_TI, &t1155_0_0_0, RuntimeInvoker_t1155, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 2285, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8522_MI = 
{
	"get_Key", (methodPointerType)&m8522, &t1680_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 2286, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8523_MI = 
{
	"get_Value", (methodPointerType)&m8523, &t1680_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 8, 0, false, false, 2287, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8524_MI = 
{
	"get_Current", (methodPointerType)&m8524, &t1680_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 2288, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1680_MIs[] =
{
	&m8517_MI,
	&m8518_MI,
	&m8519_MI,
	&m8520_MI,
	&m8521_MI,
	&m8522_MI,
	&m8523_MI,
	&m8524_MI,
	NULL
};
extern Il2CppType t1335_0_0_1;
FieldInfo t1680_f0_FieldInfo = 
{
	"host", &t1335_0_0_1, &t1680_TI, offsetof(t1680, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1680_f1_FieldInfo = 
{
	"stamp", &t125_0_0_1, &t1680_TI, offsetof(t1680, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1680_f2_FieldInfo = 
{
	"pos", &t125_0_0_1, &t1680_TI, offsetof(t1680, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1680_f3_FieldInfo = 
{
	"size", &t125_0_0_1, &t1680_TI, offsetof(t1680, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1679_0_0_1;
FieldInfo t1680_f4_FieldInfo = 
{
	"mode", &t1679_0_0_1, &t1680_TI, offsetof(t1680, f4), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t1680_f5_FieldInfo = 
{
	"currentKey", &t9_0_0_1, &t1680_TI, offsetof(t1680, f5), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t1680_f6_FieldInfo = 
{
	"currentValue", &t9_0_0_1, &t1680_TI, offsetof(t1680, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1680_f7_FieldInfo = 
{
	"invalid", &t124_0_0_1, &t1680_TI, offsetof(t1680, f7), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_49;
FieldInfo t1680_f8_FieldInfo = 
{
	"xstr", &t2_0_0_49, &t1680_TI, offsetof(t1680_SFs, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1680_FIs[] =
{
	&t1680_f0_FieldInfo,
	&t1680_f1_FieldInfo,
	&t1680_f2_FieldInfo,
	&t1680_f3_FieldInfo,
	&t1680_f4_FieldInfo,
	&t1680_f5_FieldInfo,
	&t1680_f6_FieldInfo,
	&t1680_f7_FieldInfo,
	&t1680_f8_FieldInfo,
	NULL
};
extern MethodInfo m8521_MI;
static PropertyInfo t1680____Entry_PropertyInfo = 
{
	&t1680_TI, "Entry", &m8521_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8522_MI;
static PropertyInfo t1680____Key_PropertyInfo = 
{
	&t1680_TI, "Key", &m8522_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8523_MI;
static PropertyInfo t1680____Value_PropertyInfo = 
{
	&t1680_TI, "Value", &m8523_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8524_MI;
static PropertyInfo t1680____Current_PropertyInfo = 
{
	&t1680_TI, "Current", &m8524_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1680_PIs[] =
{
	&t1680____Entry_PropertyInfo,
	&t1680____Key_PropertyInfo,
	&t1680____Value_PropertyInfo,
	&t1680____Current_PropertyInfo,
	NULL
};
extern MethodInfo m8520_MI;
extern MethodInfo m8519_MI;
static Il2CppMethodReference t1680_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8524_MI,
	&m8520_MI,
	&m8521_MI,
	&m8522_MI,
	&m8523_MI,
	&m8519_MI,
};
static bool t1680_VTIGM[] =
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
static const Il2CppType* t1680_ITIs[] = 
{
	&t76_0_0_0,
	&t615_0_0_0,
	&t1152_0_0_0,
};
static Il2CppInterfaceOffsetPair t1680_IOs[] = 
{
	{ &t76_0_0_0, 4},
	{ &t615_0_0_0, 6},
	{ &t1152_0_0_0, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1680_0_0_0;
extern Il2CppType t1680_1_0_0;
struct t1680;
const Il2CppTypeDefinitionMetadata t1680_DM = 
{
	&t1335_0_0_0, NULL, t1680_ITIs, t1680_IOs, &t9_0_0_0, t1680_VT, t1680_VTIGM, NULL};
TypeInfo t1680_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1680_MIs, t1680_PIs, t1680_FIs, NULL, &t1680_TI, NULL, &EmptyCustomAttributesCache, &t1680_0_0_0, &t1680_1_0_0, &t1680_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1680), sizeof (t1680), 0, -1, sizeof(t1680_SFs), 0, -1, 1048835, 0, 0, false, false, false, false, false, false, false, false, true, false, 8, 4, 9, 0, 0, 10, 3, 3};
#include "t1335.h"
// Metadata Definition System.Collections.SortedList
#include "t1335MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8525_MI = 
{
	".ctor", (methodPointerType)&m8525, &t1335_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2253, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1335_m5730_ParameterInfos[] = 
{
	{"initialCapacity", 0, 134220727, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5730_MI = 
{
	".ctor", (methodPointerType)&m5730, &t1335_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1335_m5730_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2254, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1156_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1335_m8526_ParameterInfos[] = 
{
	{"comparer", 0, 134220728, &EmptyCustomAttributesCache, &t1156_0_0_0},
	{"capacity", 1, 134220729, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8526_MI = 
{
	".ctor", (methodPointerType)&m8526, &t1335_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1335_m8526_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2255, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8527_MI = 
{
	".cctor", (methodPointerType)&m8527, &t1335_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2256, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t76_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8528_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8528, &t1335_TI, &t76_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 2257, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5734_MI = 
{
	"get_Count", (methodPointerType)&m5734, &t1335_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 15, 0, false, false, 2258, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8529_MI = 
{
	"get_IsSynchronized", (methodPointerType)&m8529, &t1335_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 16, 0, false, false, 2259, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8530_MI = 
{
	"get_SyncRoot", (methodPointerType)&m8530, &t1335_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 17, 0, false, false, 2260, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8531_MI = 
{
	"get_IsFixedSize", (methodPointerType)&m8531, &t1335_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 18, 0, false, false, 2261, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8532_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m8532, &t1335_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 19, 0, false, false, 2262, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1335_m8533_ParameterInfos[] = 
{
	{"key", 0, 134220730, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8533_MI = 
{
	"get_Item", (methodPointerType)&m8533, &t1335_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1335_m8533_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 20, 1, false, false, 2263, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1335_m8534_ParameterInfos[] = 
{
	{"key", 0, 134220731, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"value", 1, 134220732, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8534_MI = 
{
	"set_Item", (methodPointerType)&m8534, &t1335_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1335_m8534_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 21, 2, false, false, 2264, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8535_MI = 
{
	"get_Capacity", (methodPointerType)&m8535, &t1335_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 22, 0, false, false, 2265, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1335_m8536_ParameterInfos[] = 
{
	{"value", 0, 134220733, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8536_MI = 
{
	"set_Capacity", (methodPointerType)&m8536, &t1335_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1335_m8536_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 23, 1, false, false, 2266, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1335_m5732_ParameterInfos[] = 
{
	{"key", 0, 134220734, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"value", 1, 134220735, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5732_MI = 
{
	"Add", (methodPointerType)&m5732, &t1335_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1335_m5732_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 24, 2, false, false, 2267, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1335_m8537_ParameterInfos[] = 
{
	{"key", 0, 134220736, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8537_MI = 
{
	"Contains", (methodPointerType)&m8537, &t1335_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1335_m8537_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 1, false, false, 2268, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1152_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8538_MI = 
{
	"GetEnumerator", (methodPointerType)&m8538, &t1335_TI, &t1152_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 26, 0, false, false, 2269, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1335_m8539_ParameterInfos[] = 
{
	{"key", 0, 134220737, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8539_MI = 
{
	"Remove", (methodPointerType)&m8539, &t1335_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1335_m8539_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 27, 1, false, false, 2270, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1335_m8540_ParameterInfos[] = 
{
	{"array", 0, 134220738, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"arrayIndex", 1, 134220739, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8540_MI = 
{
	"CopyTo", (methodPointerType)&m8540, &t1335_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1335_m8540_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 28, 2, false, false, 2271, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1335_m8541_ParameterInfos[] = 
{
	{"index", 0, 134220740, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8541_MI = 
{
	"RemoveAt", (methodPointerType)&m8541, &t1335_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1335_m8541_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 29, 1, false, false, 2272, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1335_m8542_ParameterInfos[] = 
{
	{"key", 0, 134220741, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8542_MI = 
{
	"IndexOfKey", (methodPointerType)&m8542, &t1335_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1335_m8542_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 30, 1, false, false, 2273, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1335_m5731_ParameterInfos[] = 
{
	{"key", 0, 134220742, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5731_MI = 
{
	"ContainsKey", (methodPointerType)&m5731, &t1335_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1335_m5731_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 31, 1, false, false, 2274, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1335_m5733_ParameterInfos[] = 
{
	{"index", 0, 134220743, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5733_MI = 
{
	"GetByIndex", (methodPointerType)&m5733, &t1335_TI, &t9_0_0_0, RuntimeInvoker_t9_t125, t1335_m5733_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 32, 1, false, false, 2275, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1335_m8543_ParameterInfos[] = 
{
	{"n", 0, 134220744, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"free", 1, 134220745, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8543_MI = 
{
	"EnsureCapacity", (methodPointerType)&m8543, &t1335_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t125, t1335_m8543_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2276, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1335_m8544_ParameterInfos[] = 
{
	{"key", 0, 134220746, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"value", 1, 134220747, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"overwrite", 2, 134220748, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8544_MI = 
{
	"PutImpl", (methodPointerType)&m8544, &t1335_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1335_m8544_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2277, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1335_m8545_ParameterInfos[] = 
{
	{"key", 0, 134220749, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8545_MI = 
{
	"GetImpl", (methodPointerType)&m8545, &t1335_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1335_m8545_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2278, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1335_m8546_ParameterInfos[] = 
{
	{"capacity", 0, 134220750, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"forceSize", 1, 134220751, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8546_MI = 
{
	"InitTable", (methodPointerType)&m8546, &t1335_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t1335_m8546_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2279, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1335_m8547_ParameterInfos[] = 
{
	{"key", 0, 134220752, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8547_MI = 
{
	"Find", (methodPointerType)&m8547, &t1335_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1335_m8547_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2280, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1335_MIs[] =
{
	&m8525_MI,
	&m5730_MI,
	&m8526_MI,
	&m8527_MI,
	&m8528_MI,
	&m5734_MI,
	&m8529_MI,
	&m8530_MI,
	&m8531_MI,
	&m8532_MI,
	&m8533_MI,
	&m8534_MI,
	&m8535_MI,
	&m8536_MI,
	&m5732_MI,
	&m8537_MI,
	&m8538_MI,
	&m8539_MI,
	&m8540_MI,
	&m8541_MI,
	&m8542_MI,
	&m5731_MI,
	&m5733_MI,
	&m8543_MI,
	&m8544_MI,
	&m8545_MI,
	&m8546_MI,
	&m8547_MI,
	NULL
};
extern Il2CppType t125_0_0_49;
FieldInfo t1335_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t125_0_0_49, &t1335_TI, offsetof(t1335_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1335_f1_FieldInfo = 
{
	"inUse", &t125_0_0_1, &t1335_TI, offsetof(t1335, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1335_f2_FieldInfo = 
{
	"modificationCount", &t125_0_0_1, &t1335_TI, offsetof(t1335, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1681_0_0_1;
FieldInfo t1335_f3_FieldInfo = 
{
	"table", &t1681_0_0_1, &t1335_TI, offsetof(t1335, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1156_0_0_1;
FieldInfo t1335_f4_FieldInfo = 
{
	"comparer", &t1156_0_0_1, &t1335_TI, offsetof(t1335, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1335_f5_FieldInfo = 
{
	"defaultCapacity", &t125_0_0_1, &t1335_TI, offsetof(t1335, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1335_FIs[] =
{
	&t1335_f0_FieldInfo,
	&t1335_f1_FieldInfo,
	&t1335_f2_FieldInfo,
	&t1335_f3_FieldInfo,
	&t1335_f4_FieldInfo,
	&t1335_f5_FieldInfo,
	NULL
};
extern MethodInfo m5734_MI;
static PropertyInfo t1335____Count_PropertyInfo = 
{
	&t1335_TI, "Count", &m5734_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8529_MI;
static PropertyInfo t1335____IsSynchronized_PropertyInfo = 
{
	&t1335_TI, "IsSynchronized", &m8529_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8530_MI;
static PropertyInfo t1335____SyncRoot_PropertyInfo = 
{
	&t1335_TI, "SyncRoot", &m8530_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8531_MI;
static PropertyInfo t1335____IsFixedSize_PropertyInfo = 
{
	&t1335_TI, "IsFixedSize", &m8531_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8532_MI;
static PropertyInfo t1335____IsReadOnly_PropertyInfo = 
{
	&t1335_TI, "IsReadOnly", &m8532_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8533_MI;
extern MethodInfo m8534_MI;
static PropertyInfo t1335____Item_PropertyInfo = 
{
	&t1335_TI, "Item", &m8533_MI, &m8534_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8535_MI;
extern MethodInfo m8536_MI;
static PropertyInfo t1335____Capacity_PropertyInfo = 
{
	&t1335_TI, "Capacity", &m8535_MI, &m8536_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1335_PIs[] =
{
	&t1335____Count_PropertyInfo,
	&t1335____IsSynchronized_PropertyInfo,
	&t1335____SyncRoot_PropertyInfo,
	&t1335____IsFixedSize_PropertyInfo,
	&t1335____IsReadOnly_PropertyInfo,
	&t1335____Item_PropertyInfo,
	&t1335____Capacity_PropertyInfo,
	NULL
};
static const Il2CppType* t1335_TI__nestedTypes[3] =
{
	&t1678_0_0_0,
	&t1679_0_0_0,
	&t1680_0_0_0,
};
extern MethodInfo m8528_MI;
extern MethodInfo m8540_MI;
extern MethodInfo m5732_MI;
extern MethodInfo m8537_MI;
extern MethodInfo m8538_MI;
extern MethodInfo m8539_MI;
extern MethodInfo m8541_MI;
extern MethodInfo m8542_MI;
extern MethodInfo m5731_MI;
extern MethodInfo m5733_MI;
static Il2CppMethodReference t1335_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8528_MI,
	&m5734_MI,
	&m8529_MI,
	&m8530_MI,
	&m8540_MI,
	&m8533_MI,
	&m8534_MI,
	&m5732_MI,
	&m8537_MI,
	&m8538_MI,
	&m8539_MI,
	&m5734_MI,
	&m8529_MI,
	&m8530_MI,
	&m8531_MI,
	&m8532_MI,
	&m8533_MI,
	&m8534_MI,
	&m8535_MI,
	&m8536_MI,
	&m5732_MI,
	&m8537_MI,
	&m8538_MI,
	&m8539_MI,
	&m8540_MI,
	&m8541_MI,
	&m8542_MI,
	&m5731_MI,
	&m5733_MI,
};
static bool t1335_VTIGM[] =
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
static const Il2CppType* t1335_ITIs[] = 
{
	&t658_0_0_0,
	&t615_0_0_0,
	&t991_0_0_0,
	&t1151_0_0_0,
};
static Il2CppInterfaceOffsetPair t1335_IOs[] = 
{
	{ &t658_0_0_0, 4},
	{ &t615_0_0_0, 5},
	{ &t991_0_0_0, 5},
	{ &t1151_0_0_0, 9},
};
void t1335_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1686 * tmp;
		tmp = (t1686 *)il2cpp_codegen_object_new (&t1686_TI);
		m8552(tmp, il2cpp_codegen_string_new_wrapper("Count={Count}"), &m8552_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t659 * tmp;
		tmp = (t659 *)il2cpp_codegen_object_new (&t659_TI);
		m3079(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m3079_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1335__CustomAttributeCache = {
3,
NULL,
&t1335_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1335_1_0_0;
struct t1335;
extern CustomAttributesCache t1335__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1335_DM = 
{
	NULL, t1335_TI__nestedTypes, t1335_ITIs, t1335_IOs, &t9_0_0_0, t1335_VT, t1335_VTIGM, NULL};
TypeInfo t1335_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SortedList", "System.Collections", t1335_MIs, t1335_PIs, t1335_FIs, NULL, &t1335_TI, NULL, &t1335__CustomAttributeCache, &t1335_0_0_0, &t1335_1_0_0, &t1335_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1335), sizeof (t1335), 0, -1, sizeof(t1335_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 28, 7, 6, 0, 3, 33, 4, 4};
#include "t1682.h"
// Metadata Definition System.Collections.Stack/Enumerator
extern TypeInfo t1682_TI;
#include "t1682MD.h"
extern Il2CppType t870_0_0_0;
extern Il2CppType t870_0_0_0;
static ParameterInfo t1682_m8548_ParameterInfos[] = 
{
	{"s", 0, 134220759, &EmptyCustomAttributesCache, &t870_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8548_MI = 
{
	".ctor", (methodPointerType)&m8548, &t1682_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1682_m8548_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2300, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8549_MI = 
{
	"get_Current", (methodPointerType)&m8549, &t1682_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 2301, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8550_MI = 
{
	"MoveNext", (methodPointerType)&m8550, &t1682_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2302, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1682_MIs[] =
{
	&m8548_MI,
	&m8549_MI,
	&m8550_MI,
	NULL
};
extern Il2CppType t870_0_0_1;
FieldInfo t1682_f0_FieldInfo = 
{
	"stack", &t870_0_0_1, &t1682_TI, offsetof(t1682, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1682_f1_FieldInfo = 
{
	"modCount", &t125_0_0_1, &t1682_TI, offsetof(t1682, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1682_f2_FieldInfo = 
{
	"current", &t125_0_0_1, &t1682_TI, offsetof(t1682, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1682_FIs[] =
{
	&t1682_f0_FieldInfo,
	&t1682_f1_FieldInfo,
	&t1682_f2_FieldInfo,
	NULL
};
extern MethodInfo m8549_MI;
static PropertyInfo t1682____Current_PropertyInfo = 
{
	&t1682_TI, "Current", &m8549_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1682_PIs[] =
{
	&t1682____Current_PropertyInfo,
	NULL
};
extern MethodInfo m8550_MI;
static Il2CppMethodReference t1682_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8549_MI,
	&m8550_MI,
	&m8549_MI,
	&m8550_MI,
};
static bool t1682_VTIGM[] =
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
static const Il2CppType* t1682_ITIs[] = 
{
	&t76_0_0_0,
	&t615_0_0_0,
};
static Il2CppInterfaceOffsetPair t1682_IOs[] = 
{
	{ &t76_0_0_0, 4},
	{ &t615_0_0_0, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1682_0_0_0;
extern Il2CppType t1682_1_0_0;
extern TypeInfo t870_TI;
struct t1682;
const Il2CppTypeDefinitionMetadata t1682_DM = 
{
	&t870_0_0_0, NULL, t1682_ITIs, t1682_IOs, &t9_0_0_0, t1682_VT, t1682_VTIGM, NULL};
TypeInfo t1682_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1682_MIs, t1682_PIs, t1682_FIs, NULL, &t1682_TI, NULL, &EmptyCustomAttributesCache, &t1682_0_0_0, &t1682_1_0_0, &t1682_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1682), sizeof (t1682), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 1, 3, 0, 0, 8, 2, 2};
#include "t870.h"
// Metadata Definition System.Collections.Stack
#include "t870MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m4470_MI = 
{
	".ctor", (methodPointerType)&m4470, &t870_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2289, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t870_m8551_ParameterInfos[] = 
{
	{"ncapacity", 0, 134220755, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8551_MI = 
{
	"Resize", (methodPointerType)&m8551, &t870_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t870_m8551_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2290, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4640_MI = 
{
	"get_Count", (methodPointerType)&m4640, &t870_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 2291, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m4641_MI = 
{
	"get_IsSynchronized", (methodPointerType)&m4641, &t870_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 10, 0, false, false, 2292, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4642_MI = 
{
	"get_SyncRoot", (methodPointerType)&m4642, &t870_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 2293, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m4212_MI = 
{
	"Clear", (methodPointerType)&m4212, &t870_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 12, 0, false, false, 2294, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t870_m4643_ParameterInfos[] = 
{
	{"array", 0, 134220756, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"index", 1, 134220757, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4643_MI = 
{
	"CopyTo", (methodPointerType)&m4643, &t870_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t870_m4643_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 2, false, false, 2295, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t76_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4639_MI = 
{
	"GetEnumerator", (methodPointerType)&m4639, &t870_TI, &t76_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 14, 0, false, false, 2296, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4644_MI = 
{
	"Peek", (methodPointerType)&m4644, &t870_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 15, 0, false, false, 2297, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4645_MI = 
{
	"Pop", (methodPointerType)&m4645, &t870_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 16, 0, false, false, 2298, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t870_m4208_ParameterInfos[] = 
{
	{"obj", 0, 134220758, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4208_MI = 
{
	"Push", (methodPointerType)&m4208, &t870_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t870_m4208_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 17, 1, false, false, 2299, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t870_MIs[] =
{
	&m4470_MI,
	&m8551_MI,
	&m4640_MI,
	&m4641_MI,
	&m4642_MI,
	&m4212_MI,
	&m4643_MI,
	&m4639_MI,
	&m4644_MI,
	&m4645_MI,
	&m4208_MI,
	NULL
};
extern Il2CppType t158_0_0_1;
FieldInfo t870_f0_FieldInfo = 
{
	"contents", &t158_0_0_1, &t870_TI, offsetof(t870, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t870_f1_FieldInfo = 
{
	"current", &t125_0_0_1, &t870_TI, offsetof(t870, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t870_f2_FieldInfo = 
{
	"count", &t125_0_0_1, &t870_TI, offsetof(t870, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t870_f3_FieldInfo = 
{
	"capacity", &t125_0_0_1, &t870_TI, offsetof(t870, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t870_f4_FieldInfo = 
{
	"modCount", &t125_0_0_1, &t870_TI, offsetof(t870, f4), &EmptyCustomAttributesCache};
static FieldInfo* t870_FIs[] =
{
	&t870_f0_FieldInfo,
	&t870_f1_FieldInfo,
	&t870_f2_FieldInfo,
	&t870_f3_FieldInfo,
	&t870_f4_FieldInfo,
	NULL
};
extern MethodInfo m4640_MI;
static PropertyInfo t870____Count_PropertyInfo = 
{
	&t870_TI, "Count", &m4640_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m4641_MI;
static PropertyInfo t870____IsSynchronized_PropertyInfo = 
{
	&t870_TI, "IsSynchronized", &m4641_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m4642_MI;
static PropertyInfo t870____SyncRoot_PropertyInfo = 
{
	&t870_TI, "SyncRoot", &m4642_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t870_PIs[] =
{
	&t870____Count_PropertyInfo,
	&t870____IsSynchronized_PropertyInfo,
	&t870____SyncRoot_PropertyInfo,
	NULL
};
static const Il2CppType* t870_TI__nestedTypes[1] =
{
	&t1682_0_0_0,
};
extern MethodInfo m4639_MI;
extern MethodInfo m4643_MI;
extern MethodInfo m4212_MI;
extern MethodInfo m4644_MI;
extern MethodInfo m4645_MI;
extern MethodInfo m4208_MI;
static Il2CppMethodReference t870_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m4639_MI,
	&m4640_MI,
	&m4641_MI,
	&m4642_MI,
	&m4643_MI,
	&m4640_MI,
	&m4641_MI,
	&m4642_MI,
	&m4212_MI,
	&m4643_MI,
	&m4639_MI,
	&m4644_MI,
	&m4645_MI,
	&m4208_MI,
};
static bool t870_VTIGM[] =
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
static const Il2CppType* t870_ITIs[] = 
{
	&t658_0_0_0,
	&t615_0_0_0,
	&t991_0_0_0,
};
static Il2CppInterfaceOffsetPair t870_IOs[] = 
{
	{ &t658_0_0_0, 4},
	{ &t615_0_0_0, 5},
	{ &t991_0_0_0, 5},
};
void t870_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1688 * tmp;
		tmp = (t1688 *)il2cpp_codegen_object_new (&t1688_TI);
		m8555(tmp, il2cpp_codegen_type_get_object(&t1667_0_0_0), &m8555_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1686 * tmp;
		tmp = (t1686 *)il2cpp_codegen_object_new (&t1686_TI);
		m8552(tmp, il2cpp_codegen_string_new_wrapper("Count={Count}"), &m8552_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t870__CustomAttributeCache = {
3,
NULL,
&t870_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t870_1_0_0;
struct t870;
extern CustomAttributesCache t870__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t870_DM = 
{
	NULL, t870_TI__nestedTypes, t870_ITIs, t870_IOs, &t9_0_0_0, t870_VT, t870_VTIGM, NULL};
TypeInfo t870_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Stack", "System.Collections", t870_MIs, t870_PIs, t870_FIs, NULL, &t870_TI, NULL, &t870__CustomAttributeCache, &t870_0_0_0, &t870_1_0_0, &t870_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t870), sizeof (t870), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 11, 3, 5, 0, 1, 18, 3, 3};
#include "t1683.h"
// Metadata Definition System.Configuration.Assemblies.AssemblyHashAlgorithm
extern TypeInfo t1683_TI;
#include "t1683MD.h"
static MethodInfo* t1683_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1683_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1683_TI, offsetof(t1683, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1683_0_0_32854;
FieldInfo t1683_f2_FieldInfo = 
{
	"None", &t1683_0_0_32854, &t1683_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1683_0_0_32854;
FieldInfo t1683_f3_FieldInfo = 
{
	"MD5", &t1683_0_0_32854, &t1683_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1683_0_0_32854;
FieldInfo t1683_f4_FieldInfo = 
{
	"SHA1", &t1683_0_0_32854, &t1683_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1683_FIs[] =
{
	&t1683_f1_FieldInfo,
	&t1683_f2_FieldInfo,
	&t1683_f3_FieldInfo,
	&t1683_f4_FieldInfo,
	NULL
};
static const int32_t t1683_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1683_f2_DefaultValue = 
{
	&t1683_f2_FieldInfo, { (char*)&t1683_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1683_f3_DefaultValueData = 32771;
static Il2CppFieldDefaultValueEntry t1683_f3_DefaultValue = 
{
	&t1683_f3_FieldInfo, { (char*)&t1683_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1683_f4_DefaultValueData = 32772;
static Il2CppFieldDefaultValueEntry t1683_f4_DefaultValue = 
{
	&t1683_f4_FieldInfo, { (char*)&t1683_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1683_FDVs[] = 
{
	&t1683_f2_DefaultValue,
	&t1683_f3_DefaultValue,
	&t1683_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t1683_VT[] =
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
static bool t1683_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1683_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1683_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1683__CustomAttributeCache = {
1,
NULL,
&t1683_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1683_0_0_0;
extern Il2CppType t1683_1_0_0;
extern CustomAttributesCache t1683__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1683_DM = 
{
	NULL, NULL, NULL, t1683_IOs, &t8_0_0_0, t1683_VT, t1683_VTIGM, NULL};
TypeInfo t1683_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyHashAlgorithm", "System.Configuration.Assemblies", t1683_MIs, NULL, t1683_FIs, NULL, &t125_TI, NULL, &t1683__CustomAttributeCache, &t1683_0_0_0, &t1683_1_0_0, &t1683_DM, NULL, NULL, NULL, t1683_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1683)+ sizeof (Il2CppObject), sizeof (t1683)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1684.h"
// Metadata Definition System.Configuration.Assemblies.AssemblyVersionCompatibility
extern TypeInfo t1684_TI;
#include "t1684MD.h"
static MethodInfo* t1684_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1684_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1684_TI, offsetof(t1684, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1684_0_0_32854;
FieldInfo t1684_f2_FieldInfo = 
{
	"SameMachine", &t1684_0_0_32854, &t1684_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1684_0_0_32854;
FieldInfo t1684_f3_FieldInfo = 
{
	"SameProcess", &t1684_0_0_32854, &t1684_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1684_0_0_32854;
FieldInfo t1684_f4_FieldInfo = 
{
	"SameDomain", &t1684_0_0_32854, &t1684_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1684_FIs[] =
{
	&t1684_f1_FieldInfo,
	&t1684_f2_FieldInfo,
	&t1684_f3_FieldInfo,
	&t1684_f4_FieldInfo,
	NULL
};
static const int32_t t1684_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1684_f2_DefaultValue = 
{
	&t1684_f2_FieldInfo, { (char*)&t1684_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1684_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1684_f3_DefaultValue = 
{
	&t1684_f3_FieldInfo, { (char*)&t1684_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1684_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1684_f4_DefaultValue = 
{
	&t1684_f4_FieldInfo, { (char*)&t1684_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1684_FDVs[] = 
{
	&t1684_f2_DefaultValue,
	&t1684_f3_DefaultValue,
	&t1684_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t1684_VT[] =
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
static bool t1684_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1684_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1684_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1684__CustomAttributeCache = {
1,
NULL,
&t1684_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1684_0_0_0;
extern Il2CppType t1684_1_0_0;
extern CustomAttributesCache t1684__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1684_DM = 
{
	NULL, NULL, NULL, t1684_IOs, &t8_0_0_0, t1684_VT, t1684_VTIGM, NULL};
TypeInfo t1684_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyVersionCompatibility", "System.Configuration.Assemblies", t1684_MIs, NULL, t1684_FIs, NULL, &t125_TI, NULL, &t1684__CustomAttributeCache, &t1684_0_0_0, &t1684_1_0_0, &t1684_DM, NULL, NULL, NULL, t1684_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1684)+ sizeof (Il2CppObject), sizeof (t1684)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t999.h"
// Metadata Definition System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
extern TypeInfo t999_TI;
#include "t999MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t999_m4544_ParameterInfos[] = 
{
	{"category", 0, 134220760, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"checkId", 1, 134220761, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4544_MI = 
{
	".ctor", (methodPointerType)&m4544, &t999_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t999_m4544_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2303, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t999_m4545_ParameterInfos[] = 
{
	{"value", 0, 134220762, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4545_MI = 
{
	"set_Justification", (methodPointerType)&m4545, &t999_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t999_m4545_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 2304, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t999_MIs[] =
{
	&m4544_MI,
	&m4545_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t999_f0_FieldInfo = 
{
	"category", &t2_0_0_1, &t999_TI, offsetof(t999, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t999_f1_FieldInfo = 
{
	"checkId", &t2_0_0_1, &t999_TI, offsetof(t999, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t999_f2_FieldInfo = 
{
	"justification", &t2_0_0_1, &t999_TI, offsetof(t999, f2), &EmptyCustomAttributesCache};
static FieldInfo* t999_FIs[] =
{
	&t999_f0_FieldInfo,
	&t999_f1_FieldInfo,
	&t999_f2_FieldInfo,
	NULL
};
extern MethodInfo m4545_MI;
static PropertyInfo t999____Justification_PropertyInfo = 
{
	&t999_TI, "Justification", NULL, &m4545_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t999_PIs[] =
{
	&t999____Justification_PropertyInfo,
	NULL
};
extern MethodInfo m4475_MI;
extern MethodInfo m4469_MI;
static Il2CppMethodReference t999_VT[] =
{
	&m4475_MI,
	&m646_MI,
	&m4469_MI,
	&m673_MI,
};
static bool t999_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppType t947_0_0_0;
static Il2CppInterfaceOffsetPair t999_IOs[] = 
{
	{ &t947_0_0_0, 4},
};
extern TypeInfo t1572_TI;
#include "t1572.h"
#include "t1572MD.h"
extern MethodInfo m7802_MI;
extern TypeInfo t1017_TI;
#include "t1017.h"
#include "t1017MD.h"
extern MethodInfo m4581_MI;
extern MethodInfo m4582_MI;
extern MethodInfo m4583_MI;
void t999_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1572 * tmp;
		tmp = (t1572 *)il2cpp_codegen_object_new (&t1572_TI);
		m7802(tmp, il2cpp_codegen_string_new_wrapper("CODE_ANALYSIS"), &m7802_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1017 * tmp;
		tmp = (t1017 *)il2cpp_codegen_object_new (&t1017_TI);
		m4581(tmp, 32767, &m4581_MI);
		m4582(tmp, false, &m4582_MI);
		m4583(tmp, true, &m4583_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t999__CustomAttributeCache = {
2,
NULL,
&t999_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t999_0_0_0;
extern Il2CppType t999_1_0_0;
extern Il2CppType t718_0_0_0;
struct t999;
extern CustomAttributesCache t999__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t999_DM = 
{
	NULL, NULL, NULL, t999_IOs, &t718_0_0_0, t999_VT, t999_VTIGM, NULL};
TypeInfo t999_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SuppressMessageAttribute", "System.Diagnostics.CodeAnalysis", t999_MIs, t999_PIs, t999_FIs, NULL, &t999_TI, NULL, &t999__CustomAttributeCache, &t999_0_0_0, &t999_1_0_0, &t999_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t999), sizeof (t999), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 3, 0, 0, 4, 0, 1};
// Metadata Definition System.Diagnostics.SymbolStore.ISymbolWriter
extern TypeInfo t1775_TI;
extern Il2CppType t58_0_0_0;
extern Il2CppType t58_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1775_m11986_ParameterInfos[] = 
{
	{"emitter", 0, 134220763, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"filename", 1, 134220764, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"fFullBuild", 2, 134220765, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t58_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m11986_MI = 
{
	"Initialize", NULL, &t1775_TI, &t122_0_0_0, RuntimeInvoker_t122_t58_t9_t186, t1775_m11986_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 3, false, false, 2305, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1775_MIs[] =
{
	&m11986_MI,
	NULL
};
void t1775_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1775__CustomAttributeCache = {
1,
NULL,
&t1775_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1775_0_0_0;
extern Il2CppType t1775_1_0_0;
struct t1775;
extern CustomAttributesCache t1775__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1775_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1775_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISymbolWriter", "System.Diagnostics.SymbolStore", t1775_MIs, NULL, NULL, NULL, &t1775_TI, NULL, &t1775__CustomAttributeCache, &t1775_0_0_0, &t1775_1_0_0, &t1775_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1685.h"
// Metadata Definition System.Diagnostics.DebuggableAttribute/DebuggingModes
extern TypeInfo t1685_TI;
#include "t1685MD.h"
static MethodInfo* t1685_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1685_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1685_TI, offsetof(t1685, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1685_0_0_32854;
FieldInfo t1685_f2_FieldInfo = 
{
	"None", &t1685_0_0_32854, &t1685_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1685_0_0_32854;
FieldInfo t1685_f3_FieldInfo = 
{
	"Default", &t1685_0_0_32854, &t1685_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1685_0_0_32854;
FieldInfo t1685_f4_FieldInfo = 
{
	"IgnoreSymbolStoreSequencePoints", &t1685_0_0_32854, &t1685_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1685_0_0_32854;
FieldInfo t1685_f5_FieldInfo = 
{
	"EnableEditAndContinue", &t1685_0_0_32854, &t1685_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1685_0_0_32854;
FieldInfo t1685_f6_FieldInfo = 
{
	"DisableOptimizations", &t1685_0_0_32854, &t1685_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1685_FIs[] =
{
	&t1685_f1_FieldInfo,
	&t1685_f2_FieldInfo,
	&t1685_f3_FieldInfo,
	&t1685_f4_FieldInfo,
	&t1685_f5_FieldInfo,
	&t1685_f6_FieldInfo,
	NULL
};
static const int32_t t1685_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1685_f2_DefaultValue = 
{
	&t1685_f2_FieldInfo, { (char*)&t1685_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1685_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1685_f3_DefaultValue = 
{
	&t1685_f3_FieldInfo, { (char*)&t1685_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1685_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1685_f4_DefaultValue = 
{
	&t1685_f4_FieldInfo, { (char*)&t1685_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1685_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1685_f5_DefaultValue = 
{
	&t1685_f5_FieldInfo, { (char*)&t1685_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1685_f6_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t1685_f6_DefaultValue = 
{
	&t1685_f6_FieldInfo, { (char*)&t1685_f6_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1685_FDVs[] = 
{
	&t1685_f2_DefaultValue,
	&t1685_f3_DefaultValue,
	&t1685_f4_DefaultValue,
	&t1685_f5_DefaultValue,
	&t1685_f6_DefaultValue,
	NULL
};
static Il2CppMethodReference t1685_VT[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
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
static Il2CppInterfaceOffsetPair t1685_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern TypeInfo t608_TI;
#include "t608.h"
#include "t608MD.h"
extern MethodInfo m2967_MI;
void t1685_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t608 * tmp;
		tmp = (t608 *)il2cpp_codegen_object_new (&t608_TI);
		m2967(tmp, &m2967_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1685__CustomAttributeCache = {
2,
NULL,
&t1685_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1685_0_0_0;
extern Il2CppType t1685_1_0_0;
extern TypeInfo t1139_TI;
extern Il2CppType t1139_0_0_0;
extern CustomAttributesCache t1685__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1685_DM = 
{
	&t1139_0_0_0, NULL, NULL, t1685_IOs, &t8_0_0_0, t1685_VT, t1685_VTIGM, NULL};
TypeInfo t1685_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DebuggingModes", "", t1685_MIs, NULL, t1685_FIs, NULL, &t125_TI, NULL, &t1685__CustomAttributeCache, &t1685_0_0_0, &t1685_1_0_0, &t1685_DM, NULL, NULL, NULL, t1685_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1685)+ sizeof (Il2CppObject), sizeof (t1685)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 258, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1139.h"
// Metadata Definition System.Diagnostics.DebuggableAttribute
#include "t1139MD.h"
extern Il2CppType t1685_0_0_0;
static ParameterInfo t1139_m4769_ParameterInfos[] = 
{
	{"modes", 0, 134220766, &EmptyCustomAttributesCache, &t1685_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4769_MI = 
{
	".ctor", (methodPointerType)&m4769, &t1139_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1139_m4769_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2306, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1139_MIs[] =
{
	&m4769_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t1139_f0_FieldInfo = 
{
	"JITTrackingEnabledFlag", &t124_0_0_1, &t1139_TI, offsetof(t1139, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1139_f1_FieldInfo = 
{
	"JITOptimizerDisabledFlag", &t124_0_0_1, &t1139_TI, offsetof(t1139, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1685_0_0_1;
FieldInfo t1139_f2_FieldInfo = 
{
	"debuggingModes", &t1685_0_0_1, &t1139_TI, offsetof(t1139, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1139_FIs[] =
{
	&t1139_f0_FieldInfo,
	&t1139_f1_FieldInfo,
	&t1139_f2_FieldInfo,
	NULL
};
static const Il2CppType* t1139_TI__nestedTypes[1] =
{
	&t1685_0_0_0,
};
static Il2CppMethodReference t1139_VT[] =
{
	&m4475_MI,
	&m646_MI,
	&m4469_MI,
	&m673_MI,
};
static bool t1139_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1139_IOs[] = 
{
	{ &t947_0_0_0, 4},
};
void t1139_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m4581(tmp, 3, &m4581_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1139__CustomAttributeCache = {
2,
NULL,
&t1139_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1139_1_0_0;
struct t1139;
extern CustomAttributesCache t1139__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1139_DM = 
{
	NULL, t1139_TI__nestedTypes, NULL, t1139_IOs, &t718_0_0_0, t1139_VT, t1139_VTIGM, NULL};
TypeInfo t1139_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DebuggableAttribute", "System.Diagnostics", t1139_MIs, NULL, t1139_FIs, NULL, &t1139_TI, NULL, &t1139__CustomAttributeCache, &t1139_0_0_0, &t1139_1_0_0, &t1139_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1139), sizeof (t1139), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 3, 0, 1, 4, 0, 1};
// Metadata Definition System.Diagnostics.DebuggerDisplayAttribute
extern Il2CppType t2_0_0_0;
static ParameterInfo t1686_m8552_ParameterInfos[] = 
{
	{"value", 0, 134220767, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8552_MI = 
{
	".ctor", (methodPointerType)&m8552, &t1686_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1686_m8552_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2307, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1686_m8553_ParameterInfos[] = 
{
	{"value", 0, 134220768, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8553_MI = 
{
	"set_Name", (methodPointerType)&m8553, &t1686_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1686_m8553_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 2308, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1686_MIs[] =
{
	&m8552_MI,
	&m8553_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1686_f0_FieldInfo = 
{
	"value", &t2_0_0_1, &t1686_TI, offsetof(t1686, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1686_f1_FieldInfo = 
{
	"type", &t2_0_0_1, &t1686_TI, offsetof(t1686, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1686_f2_FieldInfo = 
{
	"name", &t2_0_0_1, &t1686_TI, offsetof(t1686, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1686_FIs[] =
{
	&t1686_f0_FieldInfo,
	&t1686_f1_FieldInfo,
	&t1686_f2_FieldInfo,
	NULL
};
extern MethodInfo m8553_MI;
static PropertyInfo t1686____Name_PropertyInfo = 
{
	&t1686_TI, "Name", NULL, &m8553_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1686_PIs[] =
{
	&t1686____Name_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1686_VT[] =
{
	&m4475_MI,
	&m646_MI,
	&m4469_MI,
	&m673_MI,
};
static bool t1686_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1686_IOs[] = 
{
	{ &t947_0_0_0, 4},
};
void t1686_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m4581(tmp, 4509, &m4581_MI);
		m4583(tmp, true, &m4583_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1686__CustomAttributeCache = {
2,
NULL,
&t1686_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1686_0_0_0;
extern Il2CppType t1686_1_0_0;
struct t1686;
extern CustomAttributesCache t1686__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1686_DM = 
{
	NULL, NULL, NULL, t1686_IOs, &t718_0_0_0, t1686_VT, t1686_VTIGM, NULL};
TypeInfo t1686_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DebuggerDisplayAttribute", "System.Diagnostics", t1686_MIs, t1686_PIs, t1686_FIs, NULL, &t1686_TI, NULL, &t1686__CustomAttributeCache, &t1686_0_0_0, &t1686_1_0_0, &t1686_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1686), sizeof (t1686), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 3, 0, 0, 4, 0, 1};
#include "t1687.h"
// Metadata Definition System.Diagnostics.DebuggerStepThroughAttribute
extern TypeInfo t1687_TI;
#include "t1687MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8554_MI = 
{
	".ctor", (methodPointerType)&m8554, &t1687_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2309, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1687_MIs[] =
{
	&m8554_MI,
	NULL
};
static Il2CppMethodReference t1687_VT[] =
{
	&m4475_MI,
	&m646_MI,
	&m4469_MI,
	&m673_MI,
};
static bool t1687_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1687_IOs[] = 
{
	{ &t947_0_0_0, 4},
};
void t1687_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m4581(tmp, 108, &m4581_MI);
		m4582(tmp, false, &m4582_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1687__CustomAttributeCache = {
2,
NULL,
&t1687_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1687_0_0_0;
extern Il2CppType t1687_1_0_0;
struct t1687;
extern CustomAttributesCache t1687__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1687_DM = 
{
	NULL, NULL, NULL, t1687_IOs, &t718_0_0_0, t1687_VT, t1687_VTIGM, NULL};
TypeInfo t1687_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DebuggerStepThroughAttribute", "System.Diagnostics", t1687_MIs, NULL, NULL, NULL, &t1687_TI, NULL, &t1687__CustomAttributeCache, &t1687_0_0_0, &t1687_1_0_0, &t1687_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1687), sizeof (t1687), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
// Metadata Definition System.Diagnostics.DebuggerTypeProxyAttribute
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1688_m8555_ParameterInfos[] = 
{
	{"type", 0, 134220769, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8555_MI = 
{
	".ctor", (methodPointerType)&m8555, &t1688_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1688_m8555_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2310, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1688_MIs[] =
{
	&m8555_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1688_f0_FieldInfo = 
{
	"proxy_type_name", &t2_0_0_1, &t1688_TI, offsetof(t1688, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1688_FIs[] =
{
	&t1688_f0_FieldInfo,
	NULL
};
static Il2CppMethodReference t1688_VT[] =
{
	&m4475_MI,
	&m646_MI,
	&m4469_MI,
	&m673_MI,
};
static bool t1688_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1688_IOs[] = 
{
	{ &t947_0_0_0, 4},
};
void t1688_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1017 * tmp;
		tmp = (t1017 *)il2cpp_codegen_object_new (&t1017_TI);
		m4581(tmp, 13, &m4581_MI);
		m4583(tmp, true, &m4583_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1688__CustomAttributeCache = {
2,
NULL,
&t1688_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1688_0_0_0;
extern Il2CppType t1688_1_0_0;
struct t1688;
extern CustomAttributesCache t1688__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1688_DM = 
{
	NULL, NULL, NULL, t1688_IOs, &t718_0_0_0, t1688_VT, t1688_VTIGM, NULL};
TypeInfo t1688_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DebuggerTypeProxyAttribute", "System.Diagnostics", t1688_MIs, NULL, t1688_FIs, NULL, &t1688_TI, NULL, &t1688__CustomAttributeCache, &t1688_0_0_0, &t1688_1_0_0, &t1688_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1688), sizeof (t1688), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t929.h"
// Metadata Definition System.Diagnostics.StackFrame
extern TypeInfo t929_TI;
#include "t929MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8556_MI = 
{
	".ctor", (methodPointerType)&m8556, &t929_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2311, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t929_m8557_ParameterInfos[] = 
{
	{"skipFrames", 0, 134220770, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 1, 134220771, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8557_MI = 
{
	".ctor", (methodPointerType)&m8557, &t929_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t929_m8557_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2312, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t907_1_0_2;
extern Il2CppType t907_1_0_0;
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_1_0_0;
extern Il2CppType t125_1_0_2;
extern Il2CppType t2_1_0_2;
extern Il2CppType t2_1_0_0;
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_1_0_2;
static ParameterInfo t929_m8558_ParameterInfos[] = 
{
	{"skip", 0, 134220772, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"needFileInfo", 1, 134220773, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"method", 2, 134220774, &EmptyCustomAttributesCache, &t907_1_0_2},
	{"iloffset", 3, 134220775, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"native_offset", 4, 134220776, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"file", 5, 134220777, &EmptyCustomAttributesCache, &t2_1_0_2},
	{"line", 6, 134220778, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"column", 7, 134220779, &EmptyCustomAttributesCache, &t125_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125_t186_t2576_t329_t329_t331_t329_t329 (MethodInfo* method, void* obj, void** args);
MethodInfo m8558_MI = 
{
	"get_frame_info", (methodPointerType)&m8558, &t929_TI, &t124_0_0_0, RuntimeInvoker_t124_t125_t186_t2576_t329_t329_t331_t329_t329, t929_m8558_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 8, false, false, 2313, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4431_MI = 
{
	"GetFileLineNumber", (methodPointerType)&m4431, &t929_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 4, 0, false, false, 2314, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4430_MI = 
{
	"GetFileName", (methodPointerType)&m4430, &t929_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 5, 0, false, false, 2315, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8559_MI = 
{
	"GetSecureFileName", (methodPointerType)&m8559, &t929_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2316, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8560_MI = 
{
	"GetILOffset", (methodPointerType)&m8560, &t929_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 2317, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t907_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4427_MI = 
{
	"GetMethod", (methodPointerType)&m4427, &t929_TI, &t907_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2318, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8561_MI = 
{
	"GetNativeOffset", (methodPointerType)&m8561, &t929_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 8, 0, false, false, 2319, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8562_MI = 
{
	"GetInternalMethodName", (methodPointerType)&m8562, &t929_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2320, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8563_MI = 
{
	"ToString", (methodPointerType)&m8563, &t929_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2321, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t929_MIs[] =
{
	&m8556_MI,
	&m8557_MI,
	&m8558_MI,
	&m4431_MI,
	&m4430_MI,
	&m8559_MI,
	&m8560_MI,
	&m4427_MI,
	&m8561_MI,
	&m8562_MI,
	&m8563_MI,
	NULL
};
extern Il2CppType t125_0_0_32854;
FieldInfo t929_f0_FieldInfo = 
{
	"OFFSET_UNKNOWN", &t125_0_0_32854, &t929_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t929_f1_FieldInfo = 
{
	"ilOffset", &t125_0_0_1, &t929_TI, offsetof(t929, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t929_f2_FieldInfo = 
{
	"nativeOffset", &t125_0_0_1, &t929_TI, offsetof(t929, f2), &EmptyCustomAttributesCache};
extern Il2CppType t907_0_0_1;
FieldInfo t929_f3_FieldInfo = 
{
	"methodBase", &t907_0_0_1, &t929_TI, offsetof(t929, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t929_f4_FieldInfo = 
{
	"fileName", &t2_0_0_1, &t929_TI, offsetof(t929, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t929_f5_FieldInfo = 
{
	"lineNumber", &t125_0_0_1, &t929_TI, offsetof(t929, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t929_f6_FieldInfo = 
{
	"columnNumber", &t125_0_0_1, &t929_TI, offsetof(t929, f6), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t929_f7_FieldInfo = 
{
	"internalMethodName", &t2_0_0_1, &t929_TI, offsetof(t929, f7), &EmptyCustomAttributesCache};
static FieldInfo* t929_FIs[] =
{
	&t929_f0_FieldInfo,
	&t929_f1_FieldInfo,
	&t929_f2_FieldInfo,
	&t929_f3_FieldInfo,
	&t929_f4_FieldInfo,
	&t929_f5_FieldInfo,
	&t929_f6_FieldInfo,
	&t929_f7_FieldInfo,
	NULL
};
static const int32_t t929_f0_DefaultValueData = -1;
static Il2CppFieldDefaultValueEntry t929_f0_DefaultValue = 
{
	&t929_f0_FieldInfo, { (char*)&t929_f0_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t929_FDVs[] = 
{
	&t929_f0_DefaultValue,
	NULL
};
extern MethodInfo m8563_MI;
extern MethodInfo m4431_MI;
extern MethodInfo m4430_MI;
extern MethodInfo m8560_MI;
extern MethodInfo m4427_MI;
extern MethodInfo m8561_MI;
static Il2CppMethodReference t929_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m8563_MI,
	&m4431_MI,
	&m4430_MI,
	&m8560_MI,
	&m4427_MI,
	&m8561_MI,
};
static bool t929_VTIGM[] =
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
extern TypeInfo t1583_TI;
#include "t1583.h"
#include "t1583MD.h"
extern MethodInfo m7821_MI;
void t929_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7821(tmp, il2cpp_codegen_string_new_wrapper("Serialized objects are not compatible with MS.NET"), &m7821_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t929__CustomAttributeCache = {
2,
NULL,
&t929_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t929_0_0_0;
extern Il2CppType t929_1_0_0;
struct t929;
extern CustomAttributesCache t929__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t929_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t929_VT, t929_VTIGM, NULL};
TypeInfo t929_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StackFrame", "System.Diagnostics", t929_MIs, NULL, t929_FIs, NULL, &t929_TI, NULL, &t929__CustomAttributeCache, &t929_0_0_0, &t929_1_0_0, &t929_DM, NULL, NULL, NULL, t929_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t929), sizeof (t929), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 11, 0, 8, 0, 0, 9, 0, 0};
#include "t848.h"
// Metadata Definition System.Diagnostics.StackTrace
extern TypeInfo t848_TI;
#include "t848MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8564_MI = 
{
	".ctor", (methodPointerType)&m8564, &t848_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2322, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t848_m4416_ParameterInfos[] = 
{
	{"skipFrames", 0, 134220780, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 1, 134220781, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m4416_MI = 
{
	".ctor", (methodPointerType)&m4416, &t848_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t848_m4416_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2323, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t138_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t848_m8565_ParameterInfos[] = 
{
	{"e", 0, 134220782, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"fNeedFileInfo", 1, 134220783, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8565_MI = 
{
	".ctor", (methodPointerType)&m8565, &t848_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t848_m8565_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2324, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t848_m8566_ParameterInfos[] = 
{
	{"e", 0, 134220784, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"skipFrames", 1, 134220785, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 2, 134220786, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8566_MI = 
{
	".ctor", (methodPointerType)&m8566, &t848_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t186, t848_m8566_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 2325, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t848_m8567_ParameterInfos[] = 
{
	{"e", 0, 134220787, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"skipFrames", 1, 134220788, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 2, 134220789, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"returnNativeFrames", 3, 134220790, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8567_MI = 
{
	".ctor", (methodPointerType)&m8567, &t848_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t186_t186, t848_m8567_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 2326, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t848_m8568_ParameterInfos[] = 
{
	{"skipFrames", 0, 134220791, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 1, 134220792, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8568_MI = 
{
	"init_frames", (methodPointerType)&m8568, &t848_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t848_m8568_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2327, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t848_m8569_ParameterInfos[] = 
{
	{"e", 0, 134220793, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"skipFrames", 1, 134220794, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 2, 134220795, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1689_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8569_MI = 
{
	"get_trace", (methodPointerType)&m8569, &t848_TI, &t1689_0_0_0, RuntimeInvoker_t9_t9_t125_t186, t848_m8569_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 3, false, false, 2328, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4432_MI = 
{
	"get_FrameCount", (methodPointerType)&m4432, &t848_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 4, 0, false, false, 2329, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t848_m4426_ParameterInfos[] = 
{
	{"index", 0, 134220796, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t929_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4426_MI = 
{
	"GetFrame", (methodPointerType)&m4426, &t848_TI, &t929_0_0_0, RuntimeInvoker_t9_t125, t848_m4426_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 1, false, false, 2330, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8570_MI = 
{
	"ToString", (methodPointerType)&m8570, &t848_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2331, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t848_MIs[] =
{
	&m8564_MI,
	&m4416_MI,
	&m8565_MI,
	&m8566_MI,
	&m8567_MI,
	&m8568_MI,
	&m8569_MI,
	&m4432_MI,
	&m4426_MI,
	&m8570_MI,
	NULL
};
extern Il2CppType t125_0_0_32854;
FieldInfo t848_f0_FieldInfo = 
{
	"METHODS_TO_SKIP", &t125_0_0_32854, &t848_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1689_0_0_1;
FieldInfo t848_f1_FieldInfo = 
{
	"frames", &t1689_0_0_1, &t848_TI, offsetof(t848, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t848_f2_FieldInfo = 
{
	"debug_info", &t124_0_0_1, &t848_TI, offsetof(t848, f2), &EmptyCustomAttributesCache};
static FieldInfo* t848_FIs[] =
{
	&t848_f0_FieldInfo,
	&t848_f1_FieldInfo,
	&t848_f2_FieldInfo,
	NULL
};
static const int32_t t848_f0_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t848_f0_DefaultValue = 
{
	&t848_f0_FieldInfo, { (char*)&t848_f0_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t848_FDVs[] = 
{
	&t848_f0_DefaultValue,
	NULL
};
extern MethodInfo m4432_MI;
static PropertyInfo t848____FrameCount_PropertyInfo = 
{
	&t848_TI, "FrameCount", &m4432_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t848_PIs[] =
{
	&t848____FrameCount_PropertyInfo,
	NULL
};
extern MethodInfo m8570_MI;
extern MethodInfo m4426_MI;
static Il2CppMethodReference t848_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m8570_MI,
	&m4432_MI,
	&m4426_MI,
};
static bool t848_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
void t848_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7821(tmp, il2cpp_codegen_string_new_wrapper("Serialized objects are not compatible with .NET"), &m7821_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t848__CustomAttributeCache = {
2,
NULL,
&t848_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t848_0_0_0;
extern Il2CppType t848_1_0_0;
struct t848;
extern CustomAttributesCache t848__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t848_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t848_VT, t848_VTIGM, NULL};
TypeInfo t848_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StackTrace", "System.Diagnostics", t848_MIs, t848_PIs, t848_FIs, NULL, &t848_TI, NULL, &t848__CustomAttributeCache, &t848_0_0_0, &t848_1_0_0, &t848_DM, NULL, NULL, NULL, t848_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t848), sizeof (t848), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 1, 3, 0, 0, 6, 0, 0};
#include "t1690.h"
// Metadata Definition System.Globalization.Calendar
extern TypeInfo t1690_TI;
#include "t1690MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8571_MI = 
{
	".ctor", (methodPointerType)&m8571, &t1690_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2332, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1088_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m11976_MI = 
{
	"get_Eras", NULL, &t1690_TI, &t1088_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 4, 0, false, false, 2333, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8572_MI = 
{
	"CheckReadOnly", (methodPointerType)&m8572, &t1690_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2334, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t269_0_0_0;
extern Il2CppType t269_0_0_0;
static ParameterInfo t1690_m12112_ParameterInfos[] = 
{
	{"time", 0, 134220797, &EmptyCustomAttributesCache, &t269_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m12112_MI = 
{
	"GetDayOfMonth", NULL, &t1690_TI, &t125_0_0_0, RuntimeInvoker_t125_t269, t1690_m12112_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 2335, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t269_0_0_0;
static ParameterInfo t1690_m12113_ParameterInfos[] = 
{
	{"time", 0, 134220798, &EmptyCustomAttributesCache, &t269_0_0_0},
};
extern Il2CppType t1691_0_0_0;
extern void* RuntimeInvoker_t1691_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m12113_MI = 
{
	"GetDayOfWeek", NULL, &t1690_TI, &t1691_0_0_0, RuntimeInvoker_t1691_t269, t1690_m12113_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, false, 2336, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t269_0_0_0;
static ParameterInfo t1690_m12116_ParameterInfos[] = 
{
	{"time", 0, 134220799, &EmptyCustomAttributesCache, &t269_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m12116_MI = 
{
	"GetEra", NULL, &t1690_TI, &t125_0_0_0, RuntimeInvoker_t125_t269, t1690_m12116_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 7, 1, false, false, 2337, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t269_0_0_0;
static ParameterInfo t1690_m12114_ParameterInfos[] = 
{
	{"time", 0, 134220800, &EmptyCustomAttributesCache, &t269_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m12114_MI = 
{
	"GetMonth", NULL, &t1690_TI, &t125_0_0_0, RuntimeInvoker_t125_t269, t1690_m12114_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, false, 2338, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t269_0_0_0;
static ParameterInfo t1690_m12115_ParameterInfos[] = 
{
	{"time", 0, 134220801, &EmptyCustomAttributesCache, &t269_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m12115_MI = 
{
	"GetYear", NULL, &t1690_TI, &t125_0_0_0, RuntimeInvoker_t125_t269, t1690_m12115_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 1, false, false, 2339, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8573_MI = 
{
	"get_EraNames", (methodPointerType)&m8573, &t1690_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2340, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1690_MIs[] =
{
	&m8571_MI,
	&m11976_MI,
	&m8572_MI,
	&m12112_MI,
	&m12113_MI,
	&m12116_MI,
	&m12114_MI,
	&m12115_MI,
	&m8573_MI,
	NULL
};
extern Il2CppType t124_0_0_129;
FieldInfo t1690_f0_FieldInfo = 
{
	"m_isReadOnly", &t124_0_0_129, &t1690_TI, offsetof(t1690, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_131;
FieldInfo t1690_f1_FieldInfo = 
{
	"twoDigitYearMax", &t125_0_0_131, &t1690_TI, offsetof(t1690, f1), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_131;
FieldInfo t1690_f2_FieldInfo = 
{
	"M_AbbrEraNames", &t221_0_0_131, &t1690_TI, offsetof(t1690, f2), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_131;
FieldInfo t1690_f3_FieldInfo = 
{
	"M_EraNames", &t221_0_0_131, &t1690_TI, offsetof(t1690, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1690_FIs[] =
{
	&t1690_f0_FieldInfo,
	&t1690_f1_FieldInfo,
	&t1690_f2_FieldInfo,
	&t1690_f3_FieldInfo,
	NULL
};
extern MethodInfo m11976_MI;
static PropertyInfo t1690____Eras_PropertyInfo = 
{
	&t1690_TI, "Eras", &m11976_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8573_MI;
static PropertyInfo t1690____EraNames_PropertyInfo = 
{
	&t1690_TI, "EraNames", &m8573_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1690_PIs[] =
{
	&t1690____Eras_PropertyInfo,
	&t1690____EraNames_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1690_VT[] =
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
static bool t1690_VTIGM[] =
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
static const Il2CppType* t1690_ITIs[] = 
{
	&t615_0_0_0,
};
static Il2CppInterfaceOffsetPair t1690_IOs[] = 
{
	{ &t615_0_0_0, 4},
};
void t1690_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1690__CustomAttributeCache = {
1,
NULL,
&t1690_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1690_0_0_0;
extern Il2CppType t1690_1_0_0;
struct t1690;
extern CustomAttributesCache t1690__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1690_DM = 
{
	NULL, NULL, t1690_ITIs, t1690_IOs, &t9_0_0_0, t1690_VT, t1690_VTIGM, NULL};
TypeInfo t1690_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Calendar", "System.Globalization", t1690_MIs, t1690_PIs, t1690_FIs, NULL, &t1690_TI, NULL, &t1690__CustomAttributeCache, &t1690_0_0_0, &t1690_1_0_0, &t1690_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1690), sizeof (t1690), 0, -1, 0, 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 2, 4, 0, 0, 10, 1, 1};
#include "t1692.h"
// Metadata Definition System.Globalization.CCMath
extern TypeInfo t1692_TI;
#include "t1692MD.h"
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1692_m8574_ParameterInfos[] = 
{
	{"x", 0, 134220802, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"y", 1, 134220803, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8574_MI = 
{
	"div", (methodPointerType)&m8574, &t1692_TI, &t125_0_0_0, RuntimeInvoker_t125_t125_t125, t1692_m8574_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2341, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1692_m8575_ParameterInfos[] = 
{
	{"x", 0, 134220804, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"y", 1, 134220805, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8575_MI = 
{
	"mod", (methodPointerType)&m8575, &t1692_TI, &t125_0_0_0, RuntimeInvoker_t125_t125_t125, t1692_m8575_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2342, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1692_m8576_ParameterInfos[] = 
{
	{"remainder", 0, 134220806, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"x", 1, 134220807, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"y", 2, 134220808, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t329_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8576_MI = 
{
	"div_mod", (methodPointerType)&m8576, &t1692_TI, &t125_0_0_0, RuntimeInvoker_t125_t329_t125_t125, t1692_m8576_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 2343, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1692_MIs[] =
{
	&m8574_MI,
	&m8575_MI,
	&m8576_MI,
	NULL
};
static Il2CppMethodReference t1692_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1692_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1692_0_0_0;
extern Il2CppType t1692_1_0_0;
struct t1692;
const Il2CppTypeDefinitionMetadata t1692_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1692_VT, t1692_VTIGM, NULL};
TypeInfo t1692_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CCMath", "System.Globalization", t1692_MIs, NULL, NULL, NULL, &t1692_TI, NULL, &EmptyCustomAttributesCache, &t1692_0_0_0, &t1692_1_0_0, &t1692_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1692), sizeof (t1692), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 4, 0, 0};
#include "t1693.h"
// Metadata Definition System.Globalization.CCFixed
extern TypeInfo t1693_TI;
#include "t1693MD.h"
extern Il2CppType t269_0_0_0;
static ParameterInfo t1693_m8577_ParameterInfos[] = 
{
	{"time", 0, 134220809, &EmptyCustomAttributesCache, &t269_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m8577_MI = 
{
	"FromDateTime", (methodPointerType)&m8577, &t1693_TI, &t125_0_0_0, RuntimeInvoker_t125_t269, t1693_m8577_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2344, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1693_m8578_ParameterInfos[] = 
{
	{"date", 0, 134220810, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t1691_0_0_0;
extern void* RuntimeInvoker_t1691_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8578_MI = 
{
	"day_of_week", (methodPointerType)&m8578, &t1693_TI, &t1691_0_0_0, RuntimeInvoker_t1691_t125, t1693_m8578_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2345, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1693_MIs[] =
{
	&m8577_MI,
	&m8578_MI,
	NULL
};
static Il2CppMethodReference t1693_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1693_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1693_0_0_0;
extern Il2CppType t1693_1_0_0;
struct t1693;
const Il2CppTypeDefinitionMetadata t1693_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1693_VT, t1693_VTIGM, NULL};
TypeInfo t1693_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CCFixed", "System.Globalization", t1693_MIs, NULL, NULL, NULL, &t1693_TI, NULL, &EmptyCustomAttributesCache, &t1693_0_0_0, &t1693_1_0_0, &t1693_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1693), sizeof (t1693), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 4, 0, 0};
#include "t1694.h"
// Metadata Definition System.Globalization.CCGregorianCalendar
extern TypeInfo t1694_TI;
#include "t1694MD.h"
extern Il2CppType t125_0_0_0;
static ParameterInfo t1694_m8579_ParameterInfos[] = 
{
	{"year", 0, 134220811, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8579_MI = 
{
	"is_leap_year", (methodPointerType)&m8579, &t1694_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t1694_m8579_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2346, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1694_m8580_ParameterInfos[] = 
{
	{"day", 0, 134220812, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"month", 1, 134220813, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"year", 2, 134220814, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8580_MI = 
{
	"fixed_from_dmy", (methodPointerType)&m8580, &t1694_TI, &t125_0_0_0, RuntimeInvoker_t125_t125_t125_t125, t1694_m8580_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 2347, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1694_m8581_ParameterInfos[] = 
{
	{"date", 0, 134220815, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8581_MI = 
{
	"year_from_fixed", (methodPointerType)&m8581, &t1694_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t1694_m8581_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2348, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1694_m8582_ParameterInfos[] = 
{
	{"month", 0, 134220816, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"year", 1, 134220817, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"date", 2, 134220818, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t329_t329_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8582_MI = 
{
	"my_from_fixed", (methodPointerType)&m8582, &t1694_TI, &t122_0_0_0, RuntimeInvoker_t122_t329_t329_t125, t1694_m8582_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 2349, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1694_m8583_ParameterInfos[] = 
{
	{"day", 0, 134220819, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"month", 1, 134220820, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"year", 2, 134220821, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"date", 3, 134220822, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t329_t329_t329_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8583_MI = 
{
	"dmy_from_fixed", (methodPointerType)&m8583, &t1694_TI, &t122_0_0_0, RuntimeInvoker_t122_t329_t329_t329_t125, t1694_m8583_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 4, false, false, 2350, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1694_m8584_ParameterInfos[] = 
{
	{"date", 0, 134220823, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8584_MI = 
{
	"month_from_fixed", (methodPointerType)&m8584, &t1694_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t1694_m8584_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2351, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1694_m8585_ParameterInfos[] = 
{
	{"date", 0, 134220824, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8585_MI = 
{
	"day_from_fixed", (methodPointerType)&m8585, &t1694_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t1694_m8585_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2352, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t269_0_0_0;
static ParameterInfo t1694_m8586_ParameterInfos[] = 
{
	{"time", 0, 134220825, &EmptyCustomAttributesCache, &t269_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m8586_MI = 
{
	"GetDayOfMonth", (methodPointerType)&m8586, &t1694_TI, &t125_0_0_0, RuntimeInvoker_t125_t269, t1694_m8586_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2353, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t269_0_0_0;
static ParameterInfo t1694_m8587_ParameterInfos[] = 
{
	{"time", 0, 134220826, &EmptyCustomAttributesCache, &t269_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m8587_MI = 
{
	"GetMonth", (methodPointerType)&m8587, &t1694_TI, &t125_0_0_0, RuntimeInvoker_t125_t269, t1694_m8587_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2354, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t269_0_0_0;
static ParameterInfo t1694_m8588_ParameterInfos[] = 
{
	{"time", 0, 134220827, &EmptyCustomAttributesCache, &t269_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m8588_MI = 
{
	"GetYear", (methodPointerType)&m8588, &t1694_TI, &t125_0_0_0, RuntimeInvoker_t125_t269, t1694_m8588_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2355, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1694_MIs[] =
{
	&m8579_MI,
	&m8580_MI,
	&m8581_MI,
	&m8582_MI,
	&m8583_MI,
	&m8584_MI,
	&m8585_MI,
	&m8586_MI,
	&m8587_MI,
	&m8588_MI,
	NULL
};
static Il2CppMethodReference t1694_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1694_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1694_0_0_0;
extern Il2CppType t1694_1_0_0;
struct t1694;
const Il2CppTypeDefinitionMetadata t1694_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1694_VT, t1694_VTIGM, NULL};
TypeInfo t1694_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CCGregorianCalendar", "System.Globalization", t1694_MIs, NULL, NULL, NULL, &t1694_TI, NULL, &EmptyCustomAttributesCache, &t1694_0_0_0, &t1694_1_0_0, &t1694_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1694), sizeof (t1694), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 0, 0, 0, 0, 4, 0, 0};
#include "t1537.h"
// Metadata Definition System.Globalization.CompareInfo
extern TypeInfo t1537_TI;
#include "t1537MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8589_MI = 
{
	".ctor", (methodPointerType)&m8589, &t1537_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6273, 0, 255, 0, false, false, 2356, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t894_0_0_0;
extern Il2CppType t894_0_0_0;
static ParameterInfo t1537_m8590_ParameterInfos[] = 
{
	{"ci", 0, 134220828, &EmptyCustomAttributesCache, &t894_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8590_MI = 
{
	".ctor", (methodPointerType)&m8590, &t1537_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1537_m8590_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2357, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8591_MI = 
{
	".cctor", (methodPointerType)&m8591, &t1537_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2358, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1537_m8592_ParameterInfos[] = 
{
	{"sender", 0, 134220829, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8592_MI = 
{
	"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", (methodPointerType)&m8592, &t1537_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1537_m8592_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 1, false, false, 2359, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8593_MI = 
{
	"get_UseManagedCollation", (methodPointerType)&m8593, &t1537_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 2360, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1537_m8594_ParameterInfos[] = 
{
	{"locale", 0, 134220830, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8594_MI = 
{
	"construct_compareinfo", (methodPointerType)&m8594, &t1537_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1537_m8594_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 2361, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8595_MI = 
{
	"free_internal_collator", (methodPointerType)&m8595, &t1537_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 4096, 255, 0, false, false, 2362, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1538_0_0_0;
extern Il2CppType t1538_0_0_0;
static ParameterInfo t1537_m8596_ParameterInfos[] = 
{
	{"str1", 0, 134220831, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset1", 1, 134220832, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length1", 2, 134220833, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"str2", 3, 134220834, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset2", 4, 134220835, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length2", 5, 134220836, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 6, 134220837, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8596_MI = 
{
	"internal_compare", (methodPointerType)&m8596, &t1537_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125, t1537_m8596_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 7, false, false, 2363, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1538_0_0_0;
static ParameterInfo t1537_m8597_ParameterInfos[] = 
{
	{"key", 0, 134220838, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"source", 1, 134220839, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 2, 134220840, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8597_MI = 
{
	"assign_sortkey", (methodPointerType)&m8597, &t1537_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1537_m8597_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 3, false, false, 2364, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1538_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1537_m8598_ParameterInfos[] = 
{
	{"source", 0, 134220841, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"sindex", 1, 134220842, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220843, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 3, 134220844, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 4, 134220845, &EmptyCustomAttributesCache, &t1538_0_0_0},
	{"first", 5, 134220846, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8598_MI = 
{
	"internal_index", (methodPointerType)&m8598, &t1537_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186, t1537_m8598_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 6, false, false, 2365, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8599_MI = 
{
	"Finalize", (methodPointerType)&m8599, &t1537_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 2366, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1538_0_0_0;
static ParameterInfo t1537_m8600_ParameterInfos[] = 
{
	{"str1", 0, 134220847, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset1", 1, 134220848, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length1", 2, 134220849, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"str2", 3, 134220850, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset2", 4, 134220851, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length2", 5, 134220852, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 6, 134220853, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8600_MI = 
{
	"internal_compare_managed", (methodPointerType)&m8600, &t1537_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125, t1537_m8600_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 2367, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1538_0_0_0;
static ParameterInfo t1537_m8601_ParameterInfos[] = 
{
	{"str1", 0, 134220854, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset1", 1, 134220855, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length1", 2, 134220856, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"str2", 3, 134220857, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset2", 4, 134220858, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length2", 5, 134220859, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 6, 134220860, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8601_MI = 
{
	"internal_compare_switch", (methodPointerType)&m8601, &t1537_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125, t1537_m8601_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 2368, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1537_m8602_ParameterInfos[] = 
{
	{"string1", 0, 134220861, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"string2", 1, 134220862, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8602_MI = 
{
	"Compare", (methodPointerType)&m8602, &t1537_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1537_m8602_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 2, false, false, 2369, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1538_0_0_0;
static ParameterInfo t1537_m6943_ParameterInfos[] = 
{
	{"string1", 0, 134220863, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"string2", 1, 134220864, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 2, 134220865, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6943_MI = 
{
	"Compare", (methodPointerType)&m6943, &t1537_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9_t125, t1537_m6943_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 3, false, false, 2370, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1538_0_0_0;
static ParameterInfo t1537_m8603_ParameterInfos[] = 
{
	{"string1", 0, 134220866, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset1", 1, 134220867, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length1", 2, 134220868, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"string2", 3, 134220869, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset2", 4, 134220870, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length2", 5, 134220871, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 6, 134220872, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8603_MI = 
{
	"Compare", (methodPointerType)&m8603, &t1537_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125, t1537_m8603_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 7, false, false, 2371, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1537_m8604_ParameterInfos[] = 
{
	{"value", 0, 134220873, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8604_MI = 
{
	"Equals", (methodPointerType)&m8604, &t1537_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1537_m8604_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 2372, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8605_MI = 
{
	"GetHashCode", (methodPointerType)&m8605, &t1537_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 2373, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1538_0_0_0;
static ParameterInfo t1537_m8606_ParameterInfos[] = 
{
	{"source", 0, 134220874, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 1, 134220875, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern Il2CppType t1608_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8606_MI = 
{
	"GetSortKey", (methodPointerType)&m8606, &t1537_TI, &t1608_0_0_0, RuntimeInvoker_t9_t9_t125, t1537_m8606_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 2, false, false, 2374, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1537_m8607_ParameterInfos[] = 
{
	{"source", 0, 134220876, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134220877, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 2, 134220878, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134220879, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8607_MI = 
{
	"IndexOf", (methodPointerType)&m8607, &t1537_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9_t125_t125, t1537_m8607_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 4, false, false, 2375, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1538_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1537_m8608_ParameterInfos[] = 
{
	{"s1", 0, 134220880, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"sindex", 1, 134220881, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220882, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"s2", 3, 134220883, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"opt", 4, 134220884, &EmptyCustomAttributesCache, &t1538_0_0_0},
	{"first", 5, 134220885, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8608_MI = 
{
	"internal_index_managed", (methodPointerType)&m8608, &t1537_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186, t1537_m8608_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 2376, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1538_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1537_m8609_ParameterInfos[] = 
{
	{"s1", 0, 134220886, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"sindex", 1, 134220887, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220888, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"s2", 3, 134220889, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"opt", 4, 134220890, &EmptyCustomAttributesCache, &t1538_0_0_0},
	{"first", 5, 134220891, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8609_MI = 
{
	"internal_index_switch", (methodPointerType)&m8609, &t1537_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186, t1537_m8609_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 2377, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1538_0_0_0;
static ParameterInfo t1537_m8610_ParameterInfos[] = 
{
	{"source", 0, 134220892, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134220893, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 2, 134220894, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134220895, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 4, 134220896, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8610_MI = 
{
	"IndexOf", (methodPointerType)&m8610, &t1537_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9_t125_t125_t125, t1537_m8610_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 5, false, false, 2378, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1538_0_0_0;
static ParameterInfo t1537_m8611_ParameterInfos[] = 
{
	{"source", 0, 134220897, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"prefix", 1, 134220898, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 2, 134220899, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8611_MI = 
{
	"IsPrefix", (methodPointerType)&m8611, &t1537_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9_t125, t1537_m8611_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 3, false, false, 2379, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1538_0_0_0;
static ParameterInfo t1537_m8612_ParameterInfos[] = 
{
	{"source", 0, 134220900, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"suffix", 1, 134220901, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 2, 134220902, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8612_MI = 
{
	"IsSuffix", (methodPointerType)&m8612, &t1537_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9_t125, t1537_m8612_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 12, 3, false, false, 2380, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1537_m8613_ParameterInfos[] = 
{
	{"source", 0, 134220903, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134220904, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 2, 134220905, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134220906, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8613_MI = 
{
	"LastIndexOf", (methodPointerType)&m8613, &t1537_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9_t125_t125, t1537_m8613_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 4, false, false, 2381, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1538_0_0_0;
static ParameterInfo t1537_m8614_ParameterInfos[] = 
{
	{"source", 0, 134220907, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134220908, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 2, 134220909, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134220910, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 4, 134220911, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8614_MI = 
{
	"LastIndexOf", (methodPointerType)&m8614, &t1537_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9_t125_t125_t125, t1537_m8614_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 5, false, false, 2382, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8615_MI = 
{
	"ToString", (methodPointerType)&m8615, &t1537_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2383, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8616_MI = 
{
	"get_LCID", (methodPointerType)&m8616, &t1537_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2384, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1537_MIs[] =
{
	&m8589_MI,
	&m8590_MI,
	&m8591_MI,
	&m8592_MI,
	&m8593_MI,
	&m8594_MI,
	&m8595_MI,
	&m8596_MI,
	&m8597_MI,
	&m8598_MI,
	&m8599_MI,
	&m8600_MI,
	&m8601_MI,
	&m8602_MI,
	&m6943_MI,
	&m8603_MI,
	&m8604_MI,
	&m8605_MI,
	&m8606_MI,
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
extern Il2CppType t124_0_0_49;
FieldInfo t1537_f0_FieldInfo = 
{
	"useManagedCollation", &t124_0_0_49, &t1537_TI, offsetof(t1537_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1537_f1_FieldInfo = 
{
	"culture", &t125_0_0_1, &t1537_TI, offsetof(t1537, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t1537_f2_FieldInfo = 
{
	"icu_name", &t2_0_0_129, &t1537_TI, offsetof(t1537, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1606_0_0_129;
FieldInfo t1537_f3_FieldInfo = 
{
	"collator", &t1606_0_0_129, &t1537_TI, offsetof(t1537, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_17;
FieldInfo t1537_f4_FieldInfo = 
{
	"collators", &t1149_0_0_17, &t1537_TI, offsetof(t1537_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_145;
FieldInfo t1537_f5_FieldInfo = 
{
	"monitor", &t9_0_0_145, &t1537_TI, offsetof(t1537_SFs, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1537_FIs[] =
{
	&t1537_f0_FieldInfo,
	&t1537_f1_FieldInfo,
	&t1537_f2_FieldInfo,
	&t1537_f3_FieldInfo,
	&t1537_f4_FieldInfo,
	&t1537_f5_FieldInfo,
	NULL
};
extern MethodInfo m8593_MI;
static PropertyInfo t1537____UseManagedCollation_PropertyInfo = 
{
	&t1537_TI, "UseManagedCollation", &m8593_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8616_MI;
static PropertyInfo t1537____LCID_PropertyInfo = 
{
	&t1537_TI, "LCID", &m8616_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1537_PIs[] =
{
	&t1537____UseManagedCollation_PropertyInfo,
	&t1537____LCID_PropertyInfo,
	NULL
};
extern MethodInfo m8604_MI;
extern MethodInfo m8599_MI;
extern MethodInfo m8605_MI;
extern MethodInfo m8615_MI;
extern MethodInfo m8592_MI;
extern MethodInfo m8602_MI;
extern MethodInfo m6943_MI;
extern MethodInfo m8603_MI;
extern MethodInfo m8606_MI;
extern MethodInfo m8607_MI;
extern MethodInfo m8610_MI;
extern MethodInfo m8611_MI;
extern MethodInfo m8612_MI;
extern MethodInfo m8613_MI;
extern MethodInfo m8614_MI;
static Il2CppMethodReference t1537_VT[] =
{
	&m8604_MI,
	&m8599_MI,
	&m8605_MI,
	&m8615_MI,
	&m8592_MI,
	&m8602_MI,
	&m6943_MI,
	&m8603_MI,
	&m8606_MI,
	&m8607_MI,
	&m8610_MI,
	&m8611_MI,
	&m8612_MI,
	&m8613_MI,
	&m8614_MI,
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
	false,
	false,
	false,
	false,
};
extern Il2CppType t1099_0_0_0;
static const Il2CppType* t1537_ITIs[] = 
{
	&t1099_0_0_0,
};
static Il2CppInterfaceOffsetPair t1537_IOs[] = 
{
	{ &t1099_0_0_0, 4},
};
void t1537_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
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
struct t1537;
extern CustomAttributesCache t1537__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1537_DM = 
{
	NULL, NULL, t1537_ITIs, t1537_IOs, &t9_0_0_0, t1537_VT, t1537_VTIGM, NULL};
TypeInfo t1537_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CompareInfo", "System.Globalization", t1537_MIs, t1537_PIs, t1537_FIs, NULL, &t1537_TI, NULL, &t1537__CustomAttributeCache, &t1537_0_0_0, &t1537_1_0_0, &t1537_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1537), sizeof (t1537), 0, -1, sizeof(t1537_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, true, true, false, 29, 2, 6, 0, 0, 15, 1, 1};
#include "t1538.h"
// Metadata Definition System.Globalization.CompareOptions
extern TypeInfo t1538_TI;
#include "t1538MD.h"
static MethodInfo* t1538_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1538_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1538_TI, offsetof(t1538, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1538_0_0_32854;
FieldInfo t1538_f2_FieldInfo = 
{
	"None", &t1538_0_0_32854, &t1538_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1538_0_0_32854;
FieldInfo t1538_f3_FieldInfo = 
{
	"IgnoreCase", &t1538_0_0_32854, &t1538_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1538_0_0_32854;
FieldInfo t1538_f4_FieldInfo = 
{
	"IgnoreNonSpace", &t1538_0_0_32854, &t1538_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1538_0_0_32854;
FieldInfo t1538_f5_FieldInfo = 
{
	"IgnoreSymbols", &t1538_0_0_32854, &t1538_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1538_0_0_32854;
FieldInfo t1538_f6_FieldInfo = 
{
	"IgnoreKanaType", &t1538_0_0_32854, &t1538_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1538_0_0_32854;
FieldInfo t1538_f7_FieldInfo = 
{
	"IgnoreWidth", &t1538_0_0_32854, &t1538_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1538_0_0_32854;
FieldInfo t1538_f8_FieldInfo = 
{
	"StringSort", &t1538_0_0_32854, &t1538_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1538_0_0_32854;
FieldInfo t1538_f9_FieldInfo = 
{
	"Ordinal", &t1538_0_0_32854, &t1538_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1538_0_0_32854;
FieldInfo t1538_f10_FieldInfo = 
{
	"OrdinalIgnoreCase", &t1538_0_0_32854, &t1538_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1538_FIs[] =
{
	&t1538_f1_FieldInfo,
	&t1538_f2_FieldInfo,
	&t1538_f3_FieldInfo,
	&t1538_f4_FieldInfo,
	&t1538_f5_FieldInfo,
	&t1538_f6_FieldInfo,
	&t1538_f7_FieldInfo,
	&t1538_f8_FieldInfo,
	&t1538_f9_FieldInfo,
	&t1538_f10_FieldInfo,
	NULL
};
static const int32_t t1538_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1538_f2_DefaultValue = 
{
	&t1538_f2_FieldInfo, { (char*)&t1538_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1538_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1538_f3_DefaultValue = 
{
	&t1538_f3_FieldInfo, { (char*)&t1538_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1538_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1538_f4_DefaultValue = 
{
	&t1538_f4_FieldInfo, { (char*)&t1538_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1538_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1538_f5_DefaultValue = 
{
	&t1538_f5_FieldInfo, { (char*)&t1538_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1538_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1538_f6_DefaultValue = 
{
	&t1538_f6_FieldInfo, { (char*)&t1538_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1538_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1538_f7_DefaultValue = 
{
	&t1538_f7_FieldInfo, { (char*)&t1538_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1538_f8_DefaultValueData = 536870912;
static Il2CppFieldDefaultValueEntry t1538_f8_DefaultValue = 
{
	&t1538_f8_FieldInfo, { (char*)&t1538_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1538_f9_DefaultValueData = 1073741824;
static Il2CppFieldDefaultValueEntry t1538_f9_DefaultValue = 
{
	&t1538_f9_FieldInfo, { (char*)&t1538_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1538_f10_DefaultValueData = 268435456;
static Il2CppFieldDefaultValueEntry t1538_f10_DefaultValue = 
{
	&t1538_f10_FieldInfo, { (char*)&t1538_f10_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1538_FDVs[] = 
{
	&t1538_f2_DefaultValue,
	&t1538_f3_DefaultValue,
	&t1538_f4_DefaultValue,
	&t1538_f5_DefaultValue,
	&t1538_f6_DefaultValue,
	&t1538_f7_DefaultValue,
	&t1538_f8_DefaultValue,
	&t1538_f9_DefaultValue,
	&t1538_f10_DefaultValue,
	NULL
};
static Il2CppMethodReference t1538_VT[] =
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
static bool t1538_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1538_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1538_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t608 * tmp;
		tmp = (t608 *)il2cpp_codegen_object_new (&t608_TI);
		m2967(tmp, &m2967_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1538__CustomAttributeCache = {
2,
NULL,
&t1538_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1538_1_0_0;
extern CustomAttributesCache t1538__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1538_DM = 
{
	NULL, NULL, NULL, t1538_IOs, &t8_0_0_0, t1538_VT, t1538_VTIGM, NULL};
TypeInfo t1538_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CompareOptions", "System.Globalization", t1538_MIs, NULL, t1538_FIs, NULL, &t125_TI, NULL, &t1538__CustomAttributeCache, &t1538_0_0_0, &t1538_1_0_0, &t1538_DM, NULL, NULL, NULL, t1538_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1538)+ sizeof (Il2CppObject), sizeof (t1538)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 10, 0, 0, 23, 0, 3};
#include "t894.h"
// Metadata Definition System.Globalization.CultureInfo
extern TypeInfo t894_TI;
#include "t894MD.h"
extern Il2CppType t125_0_0_0;
static ParameterInfo t894_m8617_ParameterInfos[] = 
{
	{"culture", 0, 134220912, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8617_MI = 
{
	".ctor", (methodPointerType)&m8617, &t894_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t894_m8617_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2385, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t894_m8618_ParameterInfos[] = 
{
	{"culture", 0, 134220913, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"useUserOverride", 1, 134220914, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8618_MI = 
{
	".ctor", (methodPointerType)&m8618, &t894_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t894_m8618_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2386, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t894_m8619_ParameterInfos[] = 
{
	{"culture", 0, 134220915, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"useUserOverride", 1, 134220916, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"read_only", 2, 134220917, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8619_MI = 
{
	".ctor", (methodPointerType)&m8619, &t894_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186_t186, t894_m8619_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 3, false, false, 2387, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t894_m8620_ParameterInfos[] = 
{
	{"name", 0, 134220918, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"useUserOverride", 1, 134220919, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"read_only", 2, 134220920, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8620_MI = 
{
	".ctor", (methodPointerType)&m8620, &t894_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t186, t894_m8620_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 3, false, false, 2388, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8621_MI = 
{
	".ctor", (methodPointerType)&m8621, &t894_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6273, 0, 255, 0, false, false, 2389, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8622_MI = 
{
	".cctor", (methodPointerType)&m8622, &t894_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2390, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t894_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4334_MI = 
{
	"get_InvariantCulture", (methodPointerType)&m4334, &t894_TI, &t894_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2391, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t894_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6941_MI = 
{
	"get_CurrentCulture", (methodPointerType)&m6941, &t894_TI, &t894_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2392, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t894_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6945_MI = 
{
	"get_CurrentUICulture", (methodPointerType)&m6945, &t894_TI, &t894_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2393, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t894_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8623_MI = 
{
	"ConstructCurrentCulture", (methodPointerType)&m8623, &t894_TI, &t894_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 2394, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t894_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8624_MI = 
{
	"ConstructCurrentUICulture", (methodPointerType)&m8624, &t894_TI, &t894_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 2395, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8625_MI = 
{
	"get_LCID", (methodPointerType)&m8625, &t894_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 5, 0, false, false, 2396, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8626_MI = 
{
	"get_Name", (methodPointerType)&m8626, &t894_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 2397, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t894_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8627_MI = 
{
	"get_Parent", (methodPointerType)&m8627, &t894_TI, &t894_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 7, 0, false, false, 2398, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1607_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8628_MI = 
{
	"get_TextInfo", (methodPointerType)&m8628, &t894_TI, &t1607_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 2399, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8629_MI = 
{
	"get_IcuName", (methodPointerType)&m8629, &t894_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2400, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t894_m8630_ParameterInfos[] = 
{
	{"value", 0, 134220921, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8630_MI = 
{
	"Equals", (methodPointerType)&m8630, &t894_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t894_m8630_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 2401, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8631_MI = 
{
	"GetHashCode", (methodPointerType)&m8631, &t894_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 2402, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8632_MI = 
{
	"ToString", (methodPointerType)&m8632, &t894_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2403, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1537_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6942_MI = 
{
	"get_CompareInfo", (methodPointerType)&m6942, &t894_TI, &t1537_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 2404, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8633_MI = 
{
	"get_IsNeutralCulture", (methodPointerType)&m8633, &t894_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 10, 0, false, false, 2405, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8634_MI = 
{
	"CheckNeutral", (methodPointerType)&m8634, &t894_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2406, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1546_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8635_MI = 
{
	"get_NumberFormat", (methodPointerType)&m8635, &t894_TI, &t1546_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 2407, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1695_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8636_MI = 
{
	"get_DateTimeFormat", (methodPointerType)&m8636, &t894_TI, &t1695_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 12, 0, false, false, 2408, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8637_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m8637, &t894_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2409, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t894_m8638_ParameterInfos[] = 
{
	{"formatType", 0, 134220922, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8638_MI = 
{
	"GetFormat", (methodPointerType)&m8638, &t894_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t894_m8638_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 1, false, false, 2410, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8639_MI = 
{
	"Construct", (methodPointerType)&m8639, &t894_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2411, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t894_m8640_ParameterInfos[] = 
{
	{"locale", 0, 134220923, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8640_MI = 
{
	"ConstructInternalLocaleFromName", (methodPointerType)&m8640, &t894_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t894_m8640_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2412, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t894_m8641_ParameterInfos[] = 
{
	{"lcid", 0, 134220924, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8641_MI = 
{
	"ConstructInternalLocaleFromLcid", (methodPointerType)&m8641, &t894_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t894_m8641_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2413, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t894_0_0_0;
static ParameterInfo t894_m8642_ParameterInfos[] = 
{
	{"ci", 0, 134220925, &EmptyCustomAttributesCache, &t894_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8642_MI = 
{
	"ConstructInternalLocaleFromCurrentLocale", (methodPointerType)&m8642, &t894_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t894_m8642_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2414, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t894_m8643_ParameterInfos[] = 
{
	{"lcid", 0, 134220926, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8643_MI = 
{
	"construct_internal_locale_from_lcid", (methodPointerType)&m8643, &t894_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t894_m8643_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 2415, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t894_m8644_ParameterInfos[] = 
{
	{"name", 0, 134220927, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8644_MI = 
{
	"construct_internal_locale_from_name", (methodPointerType)&m8644, &t894_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t894_m8644_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 2416, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t894_0_0_0;
static ParameterInfo t894_m8645_ParameterInfos[] = 
{
	{"ci", 0, 134220928, &EmptyCustomAttributesCache, &t894_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8645_MI = 
{
	"construct_internal_locale_from_current_locale", (methodPointerType)&m8645, &t894_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t894_m8645_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 2417, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8646_MI = 
{
	"construct_datetime_format", (methodPointerType)&m8646, &t894_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 4096, 255, 0, false, false, 2418, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8647_MI = 
{
	"construct_number_format", (methodPointerType)&m8647, &t894_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 4096, 255, 0, false, false, 2419, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t894_m8648_ParameterInfos[] = 
{
	{"read_only", 0, 134220929, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8648_MI = 
{
	"ConstructInvariant", (methodPointerType)&m8648, &t894_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t894_m8648_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2420, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t894_m8649_ParameterInfos[] = 
{
	{"readOnly", 0, 134220930, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1607_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8649_MI = 
{
	"CreateTextInfo", (methodPointerType)&m8649, &t894_TI, &t1607_0_0_0, RuntimeInvoker_t9_t186, t894_m8649_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2421, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t894_m8650_ParameterInfos[] = 
{
	{"name", 0, 134220931, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"reference", 1, 134220932, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t894_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8650_MI = 
{
	"CreateCulture", (methodPointerType)&m8650, &t894_TI, &t894_0_0_0, RuntimeInvoker_t9_t9_t186, t894_m8650_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 2422, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t894_MIs[] =
{
	&m8617_MI,
	&m8618_MI,
	&m8619_MI,
	&m8620_MI,
	&m8621_MI,
	&m8622_MI,
	&m4334_MI,
	&m6941_MI,
	&m6945_MI,
	&m8623_MI,
	&m8624_MI,
	&m8625_MI,
	&m8626_MI,
	&m8627_MI,
	&m8628_MI,
	&m8629_MI,
	&m8630_MI,
	&m8631_MI,
	&m8632_MI,
	&m6942_MI,
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
	&m8645_MI,
	&m8646_MI,
	&m8647_MI,
	&m8648_MI,
	&m8649_MI,
	&m8650_MI,
	NULL
};
extern Il2CppType t125_0_0_32849;
FieldInfo t894_f0_FieldInfo = 
{
	"NumOptionalCalendars", &t125_0_0_32849, &t894_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_32849;
FieldInfo t894_f1_FieldInfo = 
{
	"GregorianTypeMask", &t125_0_0_32849, &t894_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_32849;
FieldInfo t894_f2_FieldInfo = 
{
	"CalendarTypeBits", &t125_0_0_32849, &t894_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_32849;
FieldInfo t894_f3_FieldInfo = 
{
	"InvariantCultureId", &t125_0_0_32849, &t894_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t894_0_0_17;
FieldInfo t894_f4_FieldInfo = 
{
	"invariant_culture_info", &t894_0_0_17, &t894_TI, offsetof(t894_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_17;
FieldInfo t894_f5_FieldInfo = 
{
	"shared_table_lock", &t9_0_0_17, &t894_TI, offsetof(t894_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_19;
FieldInfo t894_f6_FieldInfo = 
{
	"BootstrapCultureID", &t125_0_0_19, &t894_TI, offsetof(t894_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t894_f7_FieldInfo = 
{
	"m_isReadOnly", &t124_0_0_1, &t894_TI, offsetof(t894, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t894_f8_FieldInfo = 
{
	"cultureID", &t125_0_0_1, &t894_TI, offsetof(t894, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_129;
FieldInfo t894_f9_FieldInfo = 
{
	"parent_lcid", &t125_0_0_129, &t894_TI, offsetof(t894, f9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_129;
FieldInfo t894_f10_FieldInfo = 
{
	"specific_lcid", &t125_0_0_129, &t894_TI, offsetof(t894, f10), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_129;
FieldInfo t894_f11_FieldInfo = 
{
	"datetime_index", &t125_0_0_129, &t894_TI, offsetof(t894, f11), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_129;
FieldInfo t894_f12_FieldInfo = 
{
	"number_index", &t125_0_0_129, &t894_TI, offsetof(t894, f12), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t894_f13_FieldInfo = 
{
	"m_useUserOverride", &t124_0_0_1, &t894_TI, offsetof(t894, f13), &EmptyCustomAttributesCache};
extern Il2CppType t1546_0_0_129;
FieldInfo t894_f14_FieldInfo = 
{
	"numInfo", &t1546_0_0_129, &t894_TI, offsetof(t894, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1695_0_0_1;
FieldInfo t894_f15_FieldInfo = 
{
	"dateTimeInfo", &t1695_0_0_1, &t894_TI, offsetof(t894, f15), &EmptyCustomAttributesCache};
extern Il2CppType t1607_0_0_1;
FieldInfo t894_f16_FieldInfo = 
{
	"textInfo", &t1607_0_0_1, &t894_TI, offsetof(t894, f16), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t894_f17_FieldInfo = 
{
	"m_name", &t2_0_0_1, &t894_TI, offsetof(t894, f17), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t894_f18_FieldInfo = 
{
	"displayname", &t2_0_0_129, &t894_TI, offsetof(t894, f18), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t894_f19_FieldInfo = 
{
	"englishname", &t2_0_0_129, &t894_TI, offsetof(t894, f19), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t894_f20_FieldInfo = 
{
	"nativename", &t2_0_0_129, &t894_TI, offsetof(t894, f20), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t894_f21_FieldInfo = 
{
	"iso3lang", &t2_0_0_129, &t894_TI, offsetof(t894, f21), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t894_f22_FieldInfo = 
{
	"iso2lang", &t2_0_0_129, &t894_TI, offsetof(t894, f22), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t894_f23_FieldInfo = 
{
	"icu_name", &t2_0_0_129, &t894_TI, offsetof(t894, f23), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t894_f24_FieldInfo = 
{
	"win3lang", &t2_0_0_129, &t894_TI, offsetof(t894, f24), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t894_f25_FieldInfo = 
{
	"territory", &t2_0_0_129, &t894_TI, offsetof(t894, f25), &EmptyCustomAttributesCache};
extern Il2CppType t1537_0_0_1;
FieldInfo t894_f26_FieldInfo = 
{
	"compareInfo", &t1537_0_0_1, &t894_TI, offsetof(t894, f26), &EmptyCustomAttributesCache};
extern Il2CppType t2577_0_0_161;
FieldInfo t894_f27_FieldInfo = 
{
	"calendar_data", &t2577_0_0_161, &t894_TI, offsetof(t894, f27), &EmptyCustomAttributesCache};
extern Il2CppType t2247_0_0_161;
FieldInfo t894_f28_FieldInfo = 
{
	"textinfo_data", &t2247_0_0_161, &t894_TI, offsetof(t894, f28), &EmptyCustomAttributesCache};
extern Il2CppType t1696_0_0_129;
FieldInfo t894_f29_FieldInfo = 
{
	"optional_calendars", &t1696_0_0_129, &t894_TI, offsetof(t894, f29), &EmptyCustomAttributesCache};
extern Il2CppType t894_0_0_129;
FieldInfo t894_f30_FieldInfo = 
{
	"parent_culture", &t894_0_0_129, &t894_TI, offsetof(t894, f30), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t894_f31_FieldInfo = 
{
	"m_dataItem", &t125_0_0_1, &t894_TI, offsetof(t894, f31), &EmptyCustomAttributesCache};
extern Il2CppType t1690_0_0_1;
FieldInfo t894_f32_FieldInfo = 
{
	"calendar", &t1690_0_0_1, &t894_TI, offsetof(t894, f32), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_129;
FieldInfo t894_f33_FieldInfo = 
{
	"constructed", &t124_0_0_129, &t894_TI, offsetof(t894, f33), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_131;
FieldInfo t894_f34_FieldInfo = 
{
	"cached_serialized_form", &t723_0_0_131, &t894_TI, offsetof(t894, f34), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_49;
FieldInfo t894_f35_FieldInfo = 
{
	"MSG_READONLY", &t2_0_0_49, &t894_TI, offsetof(t894_SFs, f35), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_17;
FieldInfo t894_f36_FieldInfo = 
{
	"shared_by_number", &t1149_0_0_17, &t894_TI, offsetof(t894_SFs, f36), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_17;
FieldInfo t894_f37_FieldInfo = 
{
	"shared_by_name", &t1149_0_0_17, &t894_TI, offsetof(t894_SFs, f37), &EmptyCustomAttributesCache};
extern Il2CppType t713_0_0_17;
extern CustomAttributesCache t894__CustomAttributeCache_U3CU3Ef__switch$map19;
FieldInfo t894_f38_FieldInfo = 
{
	"<>f__switch$map19", &t713_0_0_17, &t894_TI, offsetof(t894_SFs, f38), &t894__CustomAttributeCache_U3CU3Ef__switch$map19};
extern Il2CppType t713_0_0_17;
extern CustomAttributesCache t894__CustomAttributeCache_U3CU3Ef__switch$map1A;
FieldInfo t894_f39_FieldInfo = 
{
	"<>f__switch$map1A", &t713_0_0_17, &t894_TI, offsetof(t894_SFs, f39), &t894__CustomAttributeCache_U3CU3Ef__switch$map1A};
static FieldInfo* t894_FIs[] =
{
	&t894_f0_FieldInfo,
	&t894_f1_FieldInfo,
	&t894_f2_FieldInfo,
	&t894_f3_FieldInfo,
	&t894_f4_FieldInfo,
	&t894_f5_FieldInfo,
	&t894_f6_FieldInfo,
	&t894_f7_FieldInfo,
	&t894_f8_FieldInfo,
	&t894_f9_FieldInfo,
	&t894_f10_FieldInfo,
	&t894_f11_FieldInfo,
	&t894_f12_FieldInfo,
	&t894_f13_FieldInfo,
	&t894_f14_FieldInfo,
	&t894_f15_FieldInfo,
	&t894_f16_FieldInfo,
	&t894_f17_FieldInfo,
	&t894_f18_FieldInfo,
	&t894_f19_FieldInfo,
	&t894_f20_FieldInfo,
	&t894_f21_FieldInfo,
	&t894_f22_FieldInfo,
	&t894_f23_FieldInfo,
	&t894_f24_FieldInfo,
	&t894_f25_FieldInfo,
	&t894_f26_FieldInfo,
	&t894_f27_FieldInfo,
	&t894_f28_FieldInfo,
	&t894_f29_FieldInfo,
	&t894_f30_FieldInfo,
	&t894_f31_FieldInfo,
	&t894_f32_FieldInfo,
	&t894_f33_FieldInfo,
	&t894_f34_FieldInfo,
	&t894_f35_FieldInfo,
	&t894_f36_FieldInfo,
	&t894_f37_FieldInfo,
	&t894_f38_FieldInfo,
	&t894_f39_FieldInfo,
	NULL
};
static const int32_t t894_f0_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t894_f0_DefaultValue = 
{
	&t894_f0_FieldInfo, { (char*)&t894_f0_DefaultValueData, &t125_0_0_0 }};
static const int32_t t894_f1_DefaultValueData = 16777215;
static Il2CppFieldDefaultValueEntry t894_f1_DefaultValue = 
{
	&t894_f1_FieldInfo, { (char*)&t894_f1_DefaultValueData, &t125_0_0_0 }};
static const int32_t t894_f2_DefaultValueData = 24;
static Il2CppFieldDefaultValueEntry t894_f2_DefaultValue = 
{
	&t894_f2_FieldInfo, { (char*)&t894_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t894_f3_DefaultValueData = 127;
static Il2CppFieldDefaultValueEntry t894_f3_DefaultValue = 
{
	&t894_f3_FieldInfo, { (char*)&t894_f3_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t894_FDVs[] = 
{
	&t894_f0_DefaultValue,
	&t894_f1_DefaultValue,
	&t894_f2_DefaultValue,
	&t894_f3_DefaultValue,
	NULL
};
extern MethodInfo m4334_MI;
static PropertyInfo t894____InvariantCulture_PropertyInfo = 
{
	&t894_TI, "InvariantCulture", &m4334_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6941_MI;
static PropertyInfo t894____CurrentCulture_PropertyInfo = 
{
	&t894_TI, "CurrentCulture", &m6941_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6945_MI;
static PropertyInfo t894____CurrentUICulture_PropertyInfo = 
{
	&t894_TI, "CurrentUICulture", &m6945_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8625_MI;
static PropertyInfo t894____LCID_PropertyInfo = 
{
	&t894_TI, "LCID", &m8625_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8626_MI;
static PropertyInfo t894____Name_PropertyInfo = 
{
	&t894_TI, "Name", &m8626_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8627_MI;
static PropertyInfo t894____Parent_PropertyInfo = 
{
	&t894_TI, "Parent", &m8627_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8628_MI;
static PropertyInfo t894____TextInfo_PropertyInfo = 
{
	&t894_TI, "TextInfo", &m8628_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8629_MI;
static PropertyInfo t894____IcuName_PropertyInfo = 
{
	&t894_TI, "IcuName", &m8629_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6942_MI;
static PropertyInfo t894____CompareInfo_PropertyInfo = 
{
	&t894_TI, "CompareInfo", &m6942_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8633_MI;
static PropertyInfo t894____IsNeutralCulture_PropertyInfo = 
{
	&t894_TI, "IsNeutralCulture", &m8633_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8635_MI;
static PropertyInfo t894____NumberFormat_PropertyInfo = 
{
	&t894_TI, "NumberFormat", &m8635_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8636_MI;
static PropertyInfo t894____DateTimeFormat_PropertyInfo = 
{
	&t894_TI, "DateTimeFormat", &m8636_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8637_MI;
static PropertyInfo t894____IsReadOnly_PropertyInfo = 
{
	&t894_TI, "IsReadOnly", &m8637_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t894_PIs[] =
{
	&t894____InvariantCulture_PropertyInfo,
	&t894____CurrentCulture_PropertyInfo,
	&t894____CurrentUICulture_PropertyInfo,
	&t894____LCID_PropertyInfo,
	&t894____Name_PropertyInfo,
	&t894____Parent_PropertyInfo,
	&t894____TextInfo_PropertyInfo,
	&t894____IcuName_PropertyInfo,
	&t894____CompareInfo_PropertyInfo,
	&t894____IsNeutralCulture_PropertyInfo,
	&t894____NumberFormat_PropertyInfo,
	&t894____DateTimeFormat_PropertyInfo,
	&t894____IsReadOnly_PropertyInfo,
	NULL
};
extern MethodInfo m8630_MI;
extern MethodInfo m8631_MI;
extern MethodInfo m8632_MI;
extern MethodInfo m8638_MI;
static Il2CppMethodReference t894_VT[] =
{
	&m8630_MI,
	&m646_MI,
	&m8631_MI,
	&m8632_MI,
	&m8638_MI,
	&m8625_MI,
	&m8626_MI,
	&m8627_MI,
	&m8628_MI,
	&m6942_MI,
	&m8633_MI,
	&m8635_MI,
	&m8636_MI,
	&m8638_MI,
};
static bool t894_VTIGM[] =
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
extern Il2CppType t899_0_0_0;
static const Il2CppType* t894_ITIs[] = 
{
	&t615_0_0_0,
	&t899_0_0_0,
};
static Il2CppInterfaceOffsetPair t894_IOs[] = 
{
	{ &t615_0_0_0, 4},
	{ &t899_0_0_0, 4},
};
void t894_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t187_TI;
#include "t187.h"
#include "t187MD.h"
extern MethodInfo m674_MI;
void t894_CustomAttributesCacheGenerator_U3CU3Ef__switch$map19(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t894_CustomAttributesCacheGenerator_U3CU3Ef__switch$map1A(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t894__CustomAttributeCache = {
1,
NULL,
&t894_CustomAttributesCacheGenerator
};
CustomAttributesCache t894__CustomAttributeCache_U3CU3Ef__switch$map19 = {
1,
NULL,
&t894_CustomAttributesCacheGenerator_U3CU3Ef__switch$map19
};
CustomAttributesCache t894__CustomAttributeCache_U3CU3Ef__switch$map1A = {
1,
NULL,
&t894_CustomAttributesCacheGenerator_U3CU3Ef__switch$map1A
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t894_1_0_0;
struct t894;
extern CustomAttributesCache t894__CustomAttributeCache;
extern CustomAttributesCache t894__CustomAttributeCache_U3CU3Ef__switch$map19;
extern CustomAttributesCache t894__CustomAttributeCache_U3CU3Ef__switch$map1A;
const Il2CppTypeDefinitionMetadata t894_DM = 
{
	NULL, NULL, t894_ITIs, t894_IOs, &t9_0_0_0, t894_VT, t894_VTIGM, NULL};
TypeInfo t894_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CultureInfo", "System.Globalization", t894_MIs, t894_PIs, t894_FIs, NULL, &t894_TI, NULL, &t894__CustomAttributeCache, &t894_0_0_0, &t894_1_0_0, &t894_DM, NULL, NULL, NULL, t894_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t894), sizeof (t894), 0, -1, sizeof(t894_SFs), 0, -1, 8193, 0, 0, false, false, false, false, false, false, false, false, true, false, 38, 13, 40, 0, 0, 14, 2, 2};
#include "t1697.h"
// Metadata Definition System.Globalization.DateTimeFormatFlags
extern TypeInfo t1697_TI;
#include "t1697MD.h"
static MethodInfo* t1697_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1697_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1697_TI, offsetof(t1697, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1697_0_0_32854;
FieldInfo t1697_f2_FieldInfo = 
{
	"Unused", &t1697_0_0_32854, &t1697_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1697_0_0_32854;
FieldInfo t1697_f3_FieldInfo = 
{
	"But", &t1697_0_0_32854, &t1697_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1697_0_0_32854;
FieldInfo t1697_f4_FieldInfo = 
{
	"Serialized", &t1697_0_0_32854, &t1697_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1697_0_0_32854;
FieldInfo t1697_f5_FieldInfo = 
{
	"By", &t1697_0_0_32854, &t1697_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1697_0_0_32854;
FieldInfo t1697_f6_FieldInfo = 
{
	"Microsoft", &t1697_0_0_32854, &t1697_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1697_FIs[] =
{
	&t1697_f1_FieldInfo,
	&t1697_f2_FieldInfo,
	&t1697_f3_FieldInfo,
	&t1697_f4_FieldInfo,
	&t1697_f5_FieldInfo,
	&t1697_f6_FieldInfo,
	NULL
};
static const int32_t t1697_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1697_f2_DefaultValue = 
{
	&t1697_f2_FieldInfo, { (char*)&t1697_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1697_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1697_f3_DefaultValue = 
{
	&t1697_f3_FieldInfo, { (char*)&t1697_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1697_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1697_f4_DefaultValue = 
{
	&t1697_f4_FieldInfo, { (char*)&t1697_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1697_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1697_f5_DefaultValue = 
{
	&t1697_f5_FieldInfo, { (char*)&t1697_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1697_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1697_f6_DefaultValue = 
{
	&t1697_f6_FieldInfo, { (char*)&t1697_f6_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1697_FDVs[] = 
{
	&t1697_f2_DefaultValue,
	&t1697_f3_DefaultValue,
	&t1697_f4_DefaultValue,
	&t1697_f5_DefaultValue,
	&t1697_f6_DefaultValue,
	NULL
};
static Il2CppMethodReference t1697_VT[] =
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
static bool t1697_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1697_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1697_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t608 * tmp;
		tmp = (t608 *)il2cpp_codegen_object_new (&t608_TI);
		m2967(tmp, &m2967_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1697__CustomAttributeCache = {
1,
NULL,
&t1697_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1697_0_0_0;
extern Il2CppType t1697_1_0_0;
extern CustomAttributesCache t1697__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1697_DM = 
{
	NULL, NULL, NULL, t1697_IOs, &t8_0_0_0, t1697_VT, t1697_VTIGM, NULL};
TypeInfo t1697_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DateTimeFormatFlags", "System.Globalization", t1697_MIs, NULL, t1697_FIs, NULL, &t125_TI, NULL, &t1697__CustomAttributeCache, &t1697_0_0_0, &t1697_1_0_0, &t1697_DM, NULL, NULL, NULL, t1697_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1697)+ sizeof (Il2CppObject), sizeof (t1697)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1695.h"
// Metadata Definition System.Globalization.DateTimeFormatInfo
extern TypeInfo t1695_TI;
#include "t1695MD.h"
extern Il2CppType t124_0_0_0;
static ParameterInfo t1695_m8651_ParameterInfos[] = 
{
	{"read_only", 0, 134220933, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8651_MI = 
{
	".ctor", (methodPointerType)&m8651, &t1695_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1695_m8651_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2423, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8652_MI = 
{
	".ctor", (methodPointerType)&m8652, &t1695_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2424, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8653_MI = 
{
	".cctor", (methodPointerType)&m8653, &t1695_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2425, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t899_0_0_0;
static ParameterInfo t1695_m8654_ParameterInfos[] = 
{
	{"provider", 0, 134220934, &EmptyCustomAttributesCache, &t899_0_0_0},
};
extern Il2CppType t1695_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8654_MI = 
{
	"GetInstance", (methodPointerType)&m8654, &t1695_TI, &t1695_0_0_0, RuntimeInvoker_t9_t9, t1695_m8654_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2426, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8655_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m8655, &t1695_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2427, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1695_0_0_0;
extern Il2CppType t1695_0_0_0;
static ParameterInfo t1695_m8656_ParameterInfos[] = 
{
	{"dtfi", 0, 134220935, &EmptyCustomAttributesCache, &t1695_0_0_0},
};
extern Il2CppType t1695_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8656_MI = 
{
	"ReadOnly", (methodPointerType)&m8656, &t1695_TI, &t1695_0_0_0, RuntimeInvoker_t9_t9, t1695_m8656_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2428, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8657_MI = 
{
	"Clone", (methodPointerType)&m8657, &t1695_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 2429, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1695_m8658_ParameterInfos[] = 
{
	{"formatType", 0, 134220936, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8658_MI = 
{
	"GetFormat", (methodPointerType)&m8658, &t1695_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1695_m8658_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, false, 2430, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1695_m8659_ParameterInfos[] = 
{
	{"month", 0, 134220937, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8659_MI = 
{
	"GetAbbreviatedMonthName", (methodPointerType)&m8659, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9_t125, t1695_m8659_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2431, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1695_m8660_ParameterInfos[] = 
{
	{"era", 0, 134220938, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8660_MI = 
{
	"GetEraName", (methodPointerType)&m8660, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9_t125, t1695_m8660_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2432, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1695_m8661_ParameterInfos[] = 
{
	{"month", 0, 134220939, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8661_MI = 
{
	"GetMonthName", (methodPointerType)&m8661, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9_t125, t1695_m8661_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2433, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8662_MI = 
{
	"get_RawAbbreviatedDayNames", (methodPointerType)&m8662, &t1695_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2434, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8663_MI = 
{
	"get_RawAbbreviatedMonthNames", (methodPointerType)&m8663, &t1695_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2435, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8664_MI = 
{
	"get_RawDayNames", (methodPointerType)&m8664, &t1695_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2436, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8665_MI = 
{
	"get_RawMonthNames", (methodPointerType)&m8665, &t1695_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2437, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8666_MI = 
{
	"get_AMDesignator", (methodPointerType)&m8666, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2438, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8667_MI = 
{
	"get_PMDesignator", (methodPointerType)&m8667, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2439, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8668_MI = 
{
	"get_DateSeparator", (methodPointerType)&m8668, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2440, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8669_MI = 
{
	"get_TimeSeparator", (methodPointerType)&m8669, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2441, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8670_MI = 
{
	"get_LongDatePattern", (methodPointerType)&m8670, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2442, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8671_MI = 
{
	"get_ShortDatePattern", (methodPointerType)&m8671, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2443, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8672_MI = 
{
	"get_ShortTimePattern", (methodPointerType)&m8672, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2444, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8673_MI = 
{
	"get_LongTimePattern", (methodPointerType)&m8673, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2445, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8674_MI = 
{
	"get_MonthDayPattern", (methodPointerType)&m8674, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2446, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8675_MI = 
{
	"get_YearMonthPattern", (methodPointerType)&m8675, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2447, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8676_MI = 
{
	"get_FullDateTimePattern", (methodPointerType)&m8676, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2448, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1695_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8677_MI = 
{
	"get_CurrentInfo", (methodPointerType)&m8677, &t1695_TI, &t1695_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2449, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1695_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8678_MI = 
{
	"get_InvariantInfo", (methodPointerType)&m8678, &t1695_TI, &t1695_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2450, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1690_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8679_MI = 
{
	"get_Calendar", (methodPointerType)&m8679, &t1695_TI, &t1690_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2451, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1690_0_0_0;
static ParameterInfo t1695_m8680_ParameterInfos[] = 
{
	{"value", 0, 134220940, &EmptyCustomAttributesCache, &t1690_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8680_MI = 
{
	"set_Calendar", (methodPointerType)&m8680, &t1695_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1695_m8680_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 2452, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8681_MI = 
{
	"get_RFC1123Pattern", (methodPointerType)&m8681, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2453, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8682_MI = 
{
	"get_RoundtripPattern", (methodPointerType)&m8682, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2454, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8683_MI = 
{
	"get_SortableDateTimePattern", (methodPointerType)&m8683, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2455, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8684_MI = 
{
	"get_UniversalSortableDateTimePattern", (methodPointerType)&m8684, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2456, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8685_MI = 
{
	"GetAllDateTimePatternsInternal", (methodPointerType)&m8685, &t1695_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2457, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8686_MI = 
{
	"FillAllDateTimePatterns", (methodPointerType)&m8686, &t1695_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2458, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern Il2CppType t296_0_0_0;
static ParameterInfo t1695_m8687_ParameterInfos[] = 
{
	{"format", 0, 134220941, &EmptyCustomAttributesCache, &t296_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m8687_MI = 
{
	"GetAllRawDateTimePatterns", (methodPointerType)&m8687, &t1695_TI, &t221_0_0_0, RuntimeInvoker_t9_t327, t1695_m8687_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 2459, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1691_0_0_0;
extern Il2CppType t1691_0_0_0;
static ParameterInfo t1695_m8688_ParameterInfos[] = 
{
	{"dayofweek", 0, 134220942, &EmptyCustomAttributesCache, &t1691_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8688_MI = 
{
	"GetDayName", (methodPointerType)&m8688, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9_t125, t1695_m8688_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2460, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1691_0_0_0;
static ParameterInfo t1695_m8689_ParameterInfos[] = 
{
	{"dayofweek", 0, 134220943, &EmptyCustomAttributesCache, &t1691_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8689_MI = 
{
	"GetAbbreviatedDayName", (methodPointerType)&m8689, &t1695_TI, &t2_0_0_0, RuntimeInvoker_t9_t125, t1695_m8689_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2461, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8690_MI = 
{
	"FillInvariantPatterns", (methodPointerType)&m8690, &t1695_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2462, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1695_m8691_ParameterInfos[] = 
{
	{"dates", 0, 134220944, &EmptyCustomAttributesCache, &t221_0_0_0},
	{"times", 1, 134220945, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8691_MI = 
{
	"PopulateCombinedList", (methodPointerType)&m8691, &t1695_TI, &t221_0_0_0, RuntimeInvoker_t9_t9_t9, t1695_m8691_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2463, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1695_MIs[] =
{
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
	NULL
};
extern Il2CppType t2_0_0_32849;
FieldInfo t1695_f0_FieldInfo = 
{
	"_RoundtripPattern", &t2_0_0_32849, &t1695_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_49;
FieldInfo t1695_f1_FieldInfo = 
{
	"MSG_READONLY", &t2_0_0_49, &t1695_TI, offsetof(t1695_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_49;
FieldInfo t1695_f2_FieldInfo = 
{
	"MSG_ARRAYSIZE_MONTH", &t2_0_0_49, &t1695_TI, offsetof(t1695_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_49;
FieldInfo t1695_f3_FieldInfo = 
{
	"MSG_ARRAYSIZE_DAY", &t2_0_0_49, &t1695_TI, offsetof(t1695_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1695_f4_FieldInfo = 
{
	"INVARIANT_ABBREVIATED_DAY_NAMES", &t221_0_0_49, &t1695_TI, offsetof(t1695_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1695_f5_FieldInfo = 
{
	"INVARIANT_DAY_NAMES", &t221_0_0_49, &t1695_TI, offsetof(t1695_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1695_f6_FieldInfo = 
{
	"INVARIANT_ABBREVIATED_MONTH_NAMES", &t221_0_0_49, &t1695_TI, offsetof(t1695_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1695_f7_FieldInfo = 
{
	"INVARIANT_MONTH_NAMES", &t221_0_0_49, &t1695_TI, offsetof(t1695_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1695_f8_FieldInfo = 
{
	"INVARIANT_SHORT_DAY_NAMES", &t221_0_0_49, &t1695_TI, offsetof(t1695_SFs, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1695_0_0_17;
FieldInfo t1695_f9_FieldInfo = 
{
	"theInvariantDateTimeFormatInfo", &t1695_0_0_17, &t1695_TI, offsetof(t1695_SFs, f9), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1695_f10_FieldInfo = 
{
	"m_isReadOnly", &t124_0_0_1, &t1695_TI, offsetof(t1695, f10), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f11_FieldInfo = 
{
	"amDesignator", &t2_0_0_1, &t1695_TI, offsetof(t1695, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f12_FieldInfo = 
{
	"pmDesignator", &t2_0_0_1, &t1695_TI, offsetof(t1695, f12), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f13_FieldInfo = 
{
	"dateSeparator", &t2_0_0_1, &t1695_TI, offsetof(t1695, f13), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f14_FieldInfo = 
{
	"timeSeparator", &t2_0_0_1, &t1695_TI, offsetof(t1695, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f15_FieldInfo = 
{
	"shortDatePattern", &t2_0_0_1, &t1695_TI, offsetof(t1695, f15), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f16_FieldInfo = 
{
	"longDatePattern", &t2_0_0_1, &t1695_TI, offsetof(t1695, f16), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f17_FieldInfo = 
{
	"shortTimePattern", &t2_0_0_1, &t1695_TI, offsetof(t1695, f17), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f18_FieldInfo = 
{
	"longTimePattern", &t2_0_0_1, &t1695_TI, offsetof(t1695, f18), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f19_FieldInfo = 
{
	"monthDayPattern", &t2_0_0_1, &t1695_TI, offsetof(t1695, f19), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f20_FieldInfo = 
{
	"yearMonthPattern", &t2_0_0_1, &t1695_TI, offsetof(t1695, f20), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f21_FieldInfo = 
{
	"fullDateTimePattern", &t2_0_0_1, &t1695_TI, offsetof(t1695, f21), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f22_FieldInfo = 
{
	"_RFC1123Pattern", &t2_0_0_1, &t1695_TI, offsetof(t1695, f22), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f23_FieldInfo = 
{
	"_SortableDateTimePattern", &t2_0_0_1, &t1695_TI, offsetof(t1695, f23), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f24_FieldInfo = 
{
	"_UniversalSortableDateTimePattern", &t2_0_0_1, &t1695_TI, offsetof(t1695, f24), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1695_f25_FieldInfo = 
{
	"firstDayOfWeek", &t125_0_0_1, &t1695_TI, offsetof(t1695, f25), &EmptyCustomAttributesCache};
extern Il2CppType t1690_0_0_1;
FieldInfo t1695_f26_FieldInfo = 
{
	"calendar", &t1690_0_0_1, &t1695_TI, offsetof(t1695, f26), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1695_f27_FieldInfo = 
{
	"calendarWeekRule", &t125_0_0_1, &t1695_TI, offsetof(t1695, f27), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f28_FieldInfo = 
{
	"abbreviatedDayNames", &t221_0_0_1, &t1695_TI, offsetof(t1695, f28), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f29_FieldInfo = 
{
	"dayNames", &t221_0_0_1, &t1695_TI, offsetof(t1695, f29), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f30_FieldInfo = 
{
	"monthNames", &t221_0_0_1, &t1695_TI, offsetof(t1695, f30), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f31_FieldInfo = 
{
	"abbreviatedMonthNames", &t221_0_0_1, &t1695_TI, offsetof(t1695, f31), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f32_FieldInfo = 
{
	"allShortDatePatterns", &t221_0_0_1, &t1695_TI, offsetof(t1695, f32), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f33_FieldInfo = 
{
	"allLongDatePatterns", &t221_0_0_1, &t1695_TI, offsetof(t1695, f33), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f34_FieldInfo = 
{
	"allShortTimePatterns", &t221_0_0_1, &t1695_TI, offsetof(t1695, f34), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f35_FieldInfo = 
{
	"allLongTimePatterns", &t221_0_0_1, &t1695_TI, offsetof(t1695, f35), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f36_FieldInfo = 
{
	"monthDayPatterns", &t221_0_0_1, &t1695_TI, offsetof(t1695, f36), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f37_FieldInfo = 
{
	"yearMonthPatterns", &t221_0_0_1, &t1695_TI, offsetof(t1695, f37), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f38_FieldInfo = 
{
	"shortDayNames", &t221_0_0_1, &t1695_TI, offsetof(t1695, f38), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1695_f39_FieldInfo = 
{
	"nDataItem", &t125_0_0_1, &t1695_TI, offsetof(t1695, f39), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1695_f40_FieldInfo = 
{
	"m_useUserOverride", &t124_0_0_1, &t1695_TI, offsetof(t1695, f40), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1695_f41_FieldInfo = 
{
	"m_isDefaultCalendar", &t124_0_0_1, &t1695_TI, offsetof(t1695, f41), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1695_f42_FieldInfo = 
{
	"CultureID", &t125_0_0_1, &t1695_TI, offsetof(t1695, f42), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1695_f43_FieldInfo = 
{
	"bUseCalendarInfo", &t124_0_0_1, &t1695_TI, offsetof(t1695, f43), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f44_FieldInfo = 
{
	"generalShortTimePattern", &t2_0_0_1, &t1695_TI, offsetof(t1695, f44), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f45_FieldInfo = 
{
	"generalLongTimePattern", &t2_0_0_1, &t1695_TI, offsetof(t1695, f45), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f46_FieldInfo = 
{
	"m_eraNames", &t221_0_0_1, &t1695_TI, offsetof(t1695, f46), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f47_FieldInfo = 
{
	"m_abbrevEraNames", &t221_0_0_1, &t1695_TI, offsetof(t1695, f47), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f48_FieldInfo = 
{
	"m_abbrevEnglishEraNames", &t221_0_0_1, &t1695_TI, offsetof(t1695, f48), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f49_FieldInfo = 
{
	"m_dateWords", &t221_0_0_1, &t1695_TI, offsetof(t1695, f49), &EmptyCustomAttributesCache};
extern Il2CppType t1088_0_0_1;
FieldInfo t1695_f50_FieldInfo = 
{
	"optionalCalendars", &t1088_0_0_1, &t1695_TI, offsetof(t1695, f50), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f51_FieldInfo = 
{
	"m_superShortDayNames", &t221_0_0_1, &t1695_TI, offsetof(t1695, f51), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f52_FieldInfo = 
{
	"genitiveMonthNames", &t221_0_0_1, &t1695_TI, offsetof(t1695, f52), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f53_FieldInfo = 
{
	"m_genitiveAbbreviatedMonthNames", &t221_0_0_1, &t1695_TI, offsetof(t1695, f53), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f54_FieldInfo = 
{
	"leapYearMonthNames", &t221_0_0_1, &t1695_TI, offsetof(t1695, f54), &EmptyCustomAttributesCache};
extern Il2CppType t1697_0_0_1;
FieldInfo t1695_f55_FieldInfo = 
{
	"formatFlags", &t1697_0_0_1, &t1695_TI, offsetof(t1695, f55), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1695_f56_FieldInfo = 
{
	"m_name", &t2_0_0_1, &t1695_TI, offsetof(t1695, f56), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1695_f57_FieldInfo = 
{
	"all_date_time_patterns", &t221_0_0_1, &t1695_TI, offsetof(t1695, f57), &EmptyCustomAttributesCache};
static FieldInfo* t1695_FIs[] =
{
	&t1695_f0_FieldInfo,
	&t1695_f1_FieldInfo,
	&t1695_f2_FieldInfo,
	&t1695_f3_FieldInfo,
	&t1695_f4_FieldInfo,
	&t1695_f5_FieldInfo,
	&t1695_f6_FieldInfo,
	&t1695_f7_FieldInfo,
	&t1695_f8_FieldInfo,
	&t1695_f9_FieldInfo,
	&t1695_f10_FieldInfo,
	&t1695_f11_FieldInfo,
	&t1695_f12_FieldInfo,
	&t1695_f13_FieldInfo,
	&t1695_f14_FieldInfo,
	&t1695_f15_FieldInfo,
	&t1695_f16_FieldInfo,
	&t1695_f17_FieldInfo,
	&t1695_f18_FieldInfo,
	&t1695_f19_FieldInfo,
	&t1695_f20_FieldInfo,
	&t1695_f21_FieldInfo,
	&t1695_f22_FieldInfo,
	&t1695_f23_FieldInfo,
	&t1695_f24_FieldInfo,
	&t1695_f25_FieldInfo,
	&t1695_f26_FieldInfo,
	&t1695_f27_FieldInfo,
	&t1695_f28_FieldInfo,
	&t1695_f29_FieldInfo,
	&t1695_f30_FieldInfo,
	&t1695_f31_FieldInfo,
	&t1695_f32_FieldInfo,
	&t1695_f33_FieldInfo,
	&t1695_f34_FieldInfo,
	&t1695_f35_FieldInfo,
	&t1695_f36_FieldInfo,
	&t1695_f37_FieldInfo,
	&t1695_f38_FieldInfo,
	&t1695_f39_FieldInfo,
	&t1695_f40_FieldInfo,
	&t1695_f41_FieldInfo,
	&t1695_f42_FieldInfo,
	&t1695_f43_FieldInfo,
	&t1695_f44_FieldInfo,
	&t1695_f45_FieldInfo,
	&t1695_f46_FieldInfo,
	&t1695_f47_FieldInfo,
	&t1695_f48_FieldInfo,
	&t1695_f49_FieldInfo,
	&t1695_f50_FieldInfo,
	&t1695_f51_FieldInfo,
	&t1695_f52_FieldInfo,
	&t1695_f53_FieldInfo,
	&t1695_f54_FieldInfo,
	&t1695_f55_FieldInfo,
	&t1695_f56_FieldInfo,
	&t1695_f57_FieldInfo,
	NULL
};
static const uint16_t t1695_f0_DefaultValueData[] = { 0x79, 0x79, 0x79, 0x79, 0x27, 0x2D, 0x27, 0x4D, 0x4D, 0x27, 0x2D, 0x27, 0x64, 0x64, 0x27, 0x54, 0x27, 0x48, 0x48, 0x27, 0x3A, 0x27, 0x6D, 0x6D, 0x27, 0x3A, 0x27, 0x73, 0x73, 0x2E, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x4B, 0x00 };
static Il2CppFieldDefaultValueEntry t1695_f0_DefaultValue = 
{
	&t1695_f0_FieldInfo, { (char*)&t1695_f0_DefaultValueData, &t2_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1695_FDVs[] = 
{
	&t1695_f0_DefaultValue,
	NULL
};
extern MethodInfo m8655_MI;
static PropertyInfo t1695____IsReadOnly_PropertyInfo = 
{
	&t1695_TI, "IsReadOnly", &m8655_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8662_MI;
static PropertyInfo t1695____RawAbbreviatedDayNames_PropertyInfo = 
{
	&t1695_TI, "RawAbbreviatedDayNames", &m8662_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8663_MI;
static PropertyInfo t1695____RawAbbreviatedMonthNames_PropertyInfo = 
{
	&t1695_TI, "RawAbbreviatedMonthNames", &m8663_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8664_MI;
static PropertyInfo t1695____RawDayNames_PropertyInfo = 
{
	&t1695_TI, "RawDayNames", &m8664_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8665_MI;
static PropertyInfo t1695____RawMonthNames_PropertyInfo = 
{
	&t1695_TI, "RawMonthNames", &m8665_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8666_MI;
static PropertyInfo t1695____AMDesignator_PropertyInfo = 
{
	&t1695_TI, "AMDesignator", &m8666_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8667_MI;
static PropertyInfo t1695____PMDesignator_PropertyInfo = 
{
	&t1695_TI, "PMDesignator", &m8667_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8668_MI;
static PropertyInfo t1695____DateSeparator_PropertyInfo = 
{
	&t1695_TI, "DateSeparator", &m8668_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8669_MI;
static PropertyInfo t1695____TimeSeparator_PropertyInfo = 
{
	&t1695_TI, "TimeSeparator", &m8669_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8670_MI;
static PropertyInfo t1695____LongDatePattern_PropertyInfo = 
{
	&t1695_TI, "LongDatePattern", &m8670_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8671_MI;
static PropertyInfo t1695____ShortDatePattern_PropertyInfo = 
{
	&t1695_TI, "ShortDatePattern", &m8671_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8672_MI;
static PropertyInfo t1695____ShortTimePattern_PropertyInfo = 
{
	&t1695_TI, "ShortTimePattern", &m8672_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8673_MI;
static PropertyInfo t1695____LongTimePattern_PropertyInfo = 
{
	&t1695_TI, "LongTimePattern", &m8673_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8674_MI;
static PropertyInfo t1695____MonthDayPattern_PropertyInfo = 
{
	&t1695_TI, "MonthDayPattern", &m8674_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8675_MI;
static PropertyInfo t1695____YearMonthPattern_PropertyInfo = 
{
	&t1695_TI, "YearMonthPattern", &m8675_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8676_MI;
static PropertyInfo t1695____FullDateTimePattern_PropertyInfo = 
{
	&t1695_TI, "FullDateTimePattern", &m8676_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8677_MI;
static PropertyInfo t1695____CurrentInfo_PropertyInfo = 
{
	&t1695_TI, "CurrentInfo", &m8677_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8678_MI;
static PropertyInfo t1695____InvariantInfo_PropertyInfo = 
{
	&t1695_TI, "InvariantInfo", &m8678_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8679_MI;
extern MethodInfo m8680_MI;
static PropertyInfo t1695____Calendar_PropertyInfo = 
{
	&t1695_TI, "Calendar", &m8679_MI, &m8680_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8681_MI;
static PropertyInfo t1695____RFC1123Pattern_PropertyInfo = 
{
	&t1695_TI, "RFC1123Pattern", &m8681_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8682_MI;
static PropertyInfo t1695____RoundtripPattern_PropertyInfo = 
{
	&t1695_TI, "RoundtripPattern", &m8682_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8683_MI;
static PropertyInfo t1695____SortableDateTimePattern_PropertyInfo = 
{
	&t1695_TI, "SortableDateTimePattern", &m8683_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8684_MI;
static PropertyInfo t1695____UniversalSortableDateTimePattern_PropertyInfo = 
{
	&t1695_TI, "UniversalSortableDateTimePattern", &m8684_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1695_PIs[] =
{
	&t1695____IsReadOnly_PropertyInfo,
	&t1695____RawAbbreviatedDayNames_PropertyInfo,
	&t1695____RawAbbreviatedMonthNames_PropertyInfo,
	&t1695____RawDayNames_PropertyInfo,
	&t1695____RawMonthNames_PropertyInfo,
	&t1695____AMDesignator_PropertyInfo,
	&t1695____PMDesignator_PropertyInfo,
	&t1695____DateSeparator_PropertyInfo,
	&t1695____TimeSeparator_PropertyInfo,
	&t1695____LongDatePattern_PropertyInfo,
	&t1695____ShortDatePattern_PropertyInfo,
	&t1695____ShortTimePattern_PropertyInfo,
	&t1695____LongTimePattern_PropertyInfo,
	&t1695____MonthDayPattern_PropertyInfo,
	&t1695____YearMonthPattern_PropertyInfo,
	&t1695____FullDateTimePattern_PropertyInfo,
	&t1695____CurrentInfo_PropertyInfo,
	&t1695____InvariantInfo_PropertyInfo,
	&t1695____Calendar_PropertyInfo,
	&t1695____RFC1123Pattern_PropertyInfo,
	&t1695____RoundtripPattern_PropertyInfo,
	&t1695____SortableDateTimePattern_PropertyInfo,
	&t1695____UniversalSortableDateTimePattern_PropertyInfo,
	NULL
};
extern MethodInfo m8658_MI;
extern MethodInfo m8657_MI;
static Il2CppMethodReference t1695_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8658_MI,
	&m8657_MI,
};
static bool t1695_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1695_ITIs[] = 
{
	&t615_0_0_0,
	&t899_0_0_0,
};
static Il2CppInterfaceOffsetPair t1695_IOs[] = 
{
	{ &t615_0_0_0, 4},
	{ &t899_0_0_0, 4},
};
void t1695_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1695__CustomAttributeCache = {
1,
NULL,
&t1695_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1695_1_0_0;
struct t1695;
extern CustomAttributesCache t1695__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1695_DM = 
{
	NULL, NULL, t1695_ITIs, t1695_IOs, &t9_0_0_0, t1695_VT, t1695_VTIGM, NULL};
TypeInfo t1695_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DateTimeFormatInfo", "System.Globalization", t1695_MIs, t1695_PIs, t1695_FIs, NULL, &t1695_TI, NULL, &t1695__CustomAttributeCache, &t1695_0_0_0, &t1695_1_0_0, &t1695_DM, NULL, NULL, NULL, t1695_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1695), sizeof (t1695), 0, -1, sizeof(t1695_SFs), 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, true, false, 41, 23, 58, 0, 0, 6, 2, 2};
#include "t1516.h"
// Metadata Definition System.Globalization.DateTimeStyles
extern TypeInfo t1516_TI;
#include "t1516MD.h"
static MethodInfo* t1516_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1516_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1516_TI, offsetof(t1516, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1516_0_0_32854;
FieldInfo t1516_f2_FieldInfo = 
{
	"None", &t1516_0_0_32854, &t1516_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1516_0_0_32854;
FieldInfo t1516_f3_FieldInfo = 
{
	"AllowLeadingWhite", &t1516_0_0_32854, &t1516_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1516_0_0_32854;
FieldInfo t1516_f4_FieldInfo = 
{
	"AllowTrailingWhite", &t1516_0_0_32854, &t1516_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1516_0_0_32854;
FieldInfo t1516_f5_FieldInfo = 
{
	"AllowInnerWhite", &t1516_0_0_32854, &t1516_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1516_0_0_32854;
FieldInfo t1516_f6_FieldInfo = 
{
	"AllowWhiteSpaces", &t1516_0_0_32854, &t1516_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1516_0_0_32854;
FieldInfo t1516_f7_FieldInfo = 
{
	"NoCurrentDateDefault", &t1516_0_0_32854, &t1516_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1516_0_0_32854;
FieldInfo t1516_f8_FieldInfo = 
{
	"AdjustToUniversal", &t1516_0_0_32854, &t1516_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1516_0_0_32854;
FieldInfo t1516_f9_FieldInfo = 
{
	"AssumeLocal", &t1516_0_0_32854, &t1516_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1516_0_0_32854;
FieldInfo t1516_f10_FieldInfo = 
{
	"AssumeUniversal", &t1516_0_0_32854, &t1516_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1516_0_0_32854;
FieldInfo t1516_f11_FieldInfo = 
{
	"RoundtripKind", &t1516_0_0_32854, &t1516_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1516_FIs[] =
{
	&t1516_f1_FieldInfo,
	&t1516_f2_FieldInfo,
	&t1516_f3_FieldInfo,
	&t1516_f4_FieldInfo,
	&t1516_f5_FieldInfo,
	&t1516_f6_FieldInfo,
	&t1516_f7_FieldInfo,
	&t1516_f8_FieldInfo,
	&t1516_f9_FieldInfo,
	&t1516_f10_FieldInfo,
	&t1516_f11_FieldInfo,
	NULL
};
static const int32_t t1516_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1516_f2_DefaultValue = 
{
	&t1516_f2_FieldInfo, { (char*)&t1516_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1516_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1516_f3_DefaultValue = 
{
	&t1516_f3_FieldInfo, { (char*)&t1516_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1516_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1516_f4_DefaultValue = 
{
	&t1516_f4_FieldInfo, { (char*)&t1516_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1516_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1516_f5_DefaultValue = 
{
	&t1516_f5_FieldInfo, { (char*)&t1516_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1516_f6_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1516_f6_DefaultValue = 
{
	&t1516_f6_FieldInfo, { (char*)&t1516_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1516_f7_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1516_f7_DefaultValue = 
{
	&t1516_f7_FieldInfo, { (char*)&t1516_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1516_f8_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1516_f8_DefaultValue = 
{
	&t1516_f8_FieldInfo, { (char*)&t1516_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1516_f9_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1516_f9_DefaultValue = 
{
	&t1516_f9_FieldInfo, { (char*)&t1516_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1516_f10_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1516_f10_DefaultValue = 
{
	&t1516_f10_FieldInfo, { (char*)&t1516_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1516_f11_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1516_f11_DefaultValue = 
{
	&t1516_f11_FieldInfo, { (char*)&t1516_f11_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1516_FDVs[] = 
{
	&t1516_f2_DefaultValue,
	&t1516_f3_DefaultValue,
	&t1516_f4_DefaultValue,
	&t1516_f5_DefaultValue,
	&t1516_f6_DefaultValue,
	&t1516_f7_DefaultValue,
	&t1516_f8_DefaultValue,
	&t1516_f9_DefaultValue,
	&t1516_f10_DefaultValue,
	&t1516_f11_DefaultValue,
	NULL
};
static Il2CppMethodReference t1516_VT[] =
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
static bool t1516_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1516_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1516_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t608 * tmp;
		tmp = (t608 *)il2cpp_codegen_object_new (&t608_TI);
		m2967(tmp, &m2967_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1516__CustomAttributeCache = {
2,
NULL,
&t1516_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1516_0_0_0;
extern Il2CppType t1516_1_0_0;
extern CustomAttributesCache t1516__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1516_DM = 
{
	NULL, NULL, NULL, t1516_IOs, &t8_0_0_0, t1516_VT, t1516_VTIGM, NULL};
TypeInfo t1516_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DateTimeStyles", "System.Globalization", t1516_MIs, NULL, t1516_FIs, NULL, &t125_TI, NULL, &t1516__CustomAttributeCache, &t1516_0_0_0, &t1516_1_0_0, &t1516_DM, NULL, NULL, NULL, t1516_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1516)+ sizeof (Il2CppObject), sizeof (t1516)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 11, 0, 0, 23, 0, 3};
#include "t1698.h"
// Metadata Definition System.Globalization.DaylightTime
extern TypeInfo t1698_TI;
#include "t1698MD.h"
extern Il2CppType t269_0_0_0;
extern Il2CppType t269_0_0_0;
extern Il2CppType t297_0_0_0;
extern Il2CppType t297_0_0_0;
static ParameterInfo t1698_m8692_ParameterInfos[] = 
{
	{"start", 0, 134220946, &EmptyCustomAttributesCache, &t269_0_0_0},
	{"end", 1, 134220947, &EmptyCustomAttributesCache, &t269_0_0_0},
	{"delta", 2, 134220948, &EmptyCustomAttributesCache, &t297_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t269_t269_t297 (MethodInfo* method, void* obj, void** args);
MethodInfo m8692_MI = 
{
	".ctor", (methodPointerType)&m8692, &t1698_TI, &t122_0_0_0, RuntimeInvoker_t122_t269_t269_t297, t1698_m8692_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 2464, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t269_0_0_0;
extern void* RuntimeInvoker_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m8693_MI = 
{
	"get_Start", (methodPointerType)&m8693, &t1698_TI, &t269_0_0_0, RuntimeInvoker_t269, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2465, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t269_0_0_0;
extern void* RuntimeInvoker_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m8694_MI = 
{
	"get_End", (methodPointerType)&m8694, &t1698_TI, &t269_0_0_0, RuntimeInvoker_t269, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2466, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t297_0_0_0;
extern void* RuntimeInvoker_t297 (MethodInfo* method, void* obj, void** args);
MethodInfo m8695_MI = 
{
	"get_Delta", (methodPointerType)&m8695, &t1698_TI, &t297_0_0_0, RuntimeInvoker_t297, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2467, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1698_MIs[] =
{
	&m8692_MI,
	&m8693_MI,
	&m8694_MI,
	&m8695_MI,
	NULL
};
extern Il2CppType t269_0_0_1;
FieldInfo t1698_f0_FieldInfo = 
{
	"m_start", &t269_0_0_1, &t1698_TI, offsetof(t1698, f0), &EmptyCustomAttributesCache};
extern Il2CppType t269_0_0_1;
FieldInfo t1698_f1_FieldInfo = 
{
	"m_end", &t269_0_0_1, &t1698_TI, offsetof(t1698, f1), &EmptyCustomAttributesCache};
extern Il2CppType t297_0_0_1;
FieldInfo t1698_f2_FieldInfo = 
{
	"m_delta", &t297_0_0_1, &t1698_TI, offsetof(t1698, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1698_FIs[] =
{
	&t1698_f0_FieldInfo,
	&t1698_f1_FieldInfo,
	&t1698_f2_FieldInfo,
	NULL
};
extern MethodInfo m8693_MI;
static PropertyInfo t1698____Start_PropertyInfo = 
{
	&t1698_TI, "Start", &m8693_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8694_MI;
static PropertyInfo t1698____End_PropertyInfo = 
{
	&t1698_TI, "End", &m8694_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8695_MI;
static PropertyInfo t1698____Delta_PropertyInfo = 
{
	&t1698_TI, "Delta", &m8695_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1698_PIs[] =
{
	&t1698____Start_PropertyInfo,
	&t1698____End_PropertyInfo,
	&t1698____Delta_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1698_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1698_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1698_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1698__CustomAttributeCache = {
1,
NULL,
&t1698_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1698_0_0_0;
extern Il2CppType t1698_1_0_0;
struct t1698;
extern CustomAttributesCache t1698__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1698_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1698_VT, t1698_VTIGM, NULL};
TypeInfo t1698_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DaylightTime", "System.Globalization", t1698_MIs, t1698_PIs, t1698_FIs, NULL, &t1698_TI, NULL, &t1698__CustomAttributeCache, &t1698_0_0_0, &t1698_1_0_0, &t1698_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1698), sizeof (t1698), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 3, 3, 0, 0, 4, 0, 0};
#include "t1699.h"
// Metadata Definition System.Globalization.GregorianCalendar
extern TypeInfo t1699_TI;
#include "t1699MD.h"
extern Il2CppType t1700_0_0_0;
extern Il2CppType t1700_0_0_0;
static ParameterInfo t1699_m8696_ParameterInfos[] = 
{
	{"type", 0, 134220949, &EmptyCustomAttributesCache, &t1700_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8696_MI = 
{
	".ctor", (methodPointerType)&m8696, &t1699_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1699_m8696_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2468, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8697_MI = 
{
	".ctor", (methodPointerType)&m8697, &t1699_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2469, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1088_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8698_MI = 
{
	"get_Eras", (methodPointerType)&m8698, &t1699_TI, &t1088_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 2470, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1700_0_0_0;
static ParameterInfo t1699_m8699_ParameterInfos[] = 
{
	{"value", 0, 134220950, &EmptyCustomAttributesCache, &t1700_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8699_MI = 
{
	"set_CalendarType", (methodPointerType)&m8699, &t1699_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1699_m8699_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 10, 1, false, false, 2471, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t269_0_0_0;
static ParameterInfo t1699_m8700_ParameterInfos[] = 
{
	{"time", 0, 134220951, &EmptyCustomAttributesCache, &t269_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m8700_MI = 
{
	"GetDayOfMonth", (methodPointerType)&m8700, &t1699_TI, &t125_0_0_0, RuntimeInvoker_t125_t269, t1699_m8700_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 2472, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t269_0_0_0;
static ParameterInfo t1699_m8701_ParameterInfos[] = 
{
	{"time", 0, 134220952, &EmptyCustomAttributesCache, &t269_0_0_0},
};
extern Il2CppType t1691_0_0_0;
extern void* RuntimeInvoker_t1691_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m8701_MI = 
{
	"GetDayOfWeek", (methodPointerType)&m8701, &t1699_TI, &t1691_0_0_0, RuntimeInvoker_t1691_t269, t1699_m8701_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 1, false, false, 2473, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t269_0_0_0;
static ParameterInfo t1699_m8702_ParameterInfos[] = 
{
	{"time", 0, 134220953, &EmptyCustomAttributesCache, &t269_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m8702_MI = 
{
	"GetEra", (methodPointerType)&m8702, &t1699_TI, &t125_0_0_0, RuntimeInvoker_t125_t269, t1699_m8702_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 1, false, false, 2474, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t269_0_0_0;
static ParameterInfo t1699_m8703_ParameterInfos[] = 
{
	{"time", 0, 134220954, &EmptyCustomAttributesCache, &t269_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m8703_MI = 
{
	"GetMonth", (methodPointerType)&m8703, &t1699_TI, &t125_0_0_0, RuntimeInvoker_t125_t269, t1699_m8703_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 2475, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t269_0_0_0;
static ParameterInfo t1699_m8704_ParameterInfos[] = 
{
	{"time", 0, 134220955, &EmptyCustomAttributesCache, &t269_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m8704_MI = 
{
	"GetYear", (methodPointerType)&m8704, &t1699_TI, &t125_0_0_0, RuntimeInvoker_t125_t269, t1699_m8704_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 2476, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1699_MIs[] =
{
	&m8696_MI,
	&m8697_MI,
	&m8698_MI,
	&m8699_MI,
	&m8700_MI,
	&m8701_MI,
	&m8702_MI,
	&m8703_MI,
	&m8704_MI,
	NULL
};
extern Il2CppType t1700_0_0_131;
FieldInfo t1699_f4_FieldInfo = 
{
	"m_type", &t1700_0_0_131, &t1699_TI, offsetof(t1699, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1699_FIs[] =
{
	&t1699_f4_FieldInfo,
	NULL
};
extern MethodInfo m8698_MI;
static PropertyInfo t1699____Eras_PropertyInfo = 
{
	&t1699_TI, "Eras", &m8698_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8699_MI;
static PropertyInfo t1699____CalendarType_PropertyInfo = 
{
	&t1699_TI, "CalendarType", NULL, &m8699_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1699_PIs[] =
{
	&t1699____Eras_PropertyInfo,
	&t1699____CalendarType_PropertyInfo,
	NULL
};
extern MethodInfo m8700_MI;
extern MethodInfo m8701_MI;
extern MethodInfo m8702_MI;
extern MethodInfo m8703_MI;
extern MethodInfo m8704_MI;
static Il2CppMethodReference t1699_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8698_MI,
	&m8700_MI,
	&m8701_MI,
	&m8702_MI,
	&m8703_MI,
	&m8704_MI,
	&m8699_MI,
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
	false,
};
static Il2CppInterfaceOffsetPair t1699_IOs[] = 
{
	{ &t615_0_0_0, 4},
};
void t1699_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
CustomAttributesCache t1699__CustomAttributeCache = {
2,
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
	NULL, NULL, NULL, t1699_IOs, &t1690_0_0_0, t1699_VT, t1699_VTIGM, NULL};
TypeInfo t1699_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GregorianCalendar", "System.Globalization", t1699_MIs, t1699_PIs, t1699_FIs, NULL, &t1699_TI, NULL, &t1699__CustomAttributeCache, &t1699_0_0_0, &t1699_1_0_0, &t1699_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1699), sizeof (t1699), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 2, 1, 0, 0, 11, 0, 1};
#include "t1700.h"
// Metadata Definition System.Globalization.GregorianCalendarTypes
extern TypeInfo t1700_TI;
#include "t1700MD.h"
static MethodInfo* t1700_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1700_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1700_TI, offsetof(t1700, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1700_0_0_32854;
FieldInfo t1700_f2_FieldInfo = 
{
	"Localized", &t1700_0_0_32854, &t1700_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1700_0_0_32854;
FieldInfo t1700_f3_FieldInfo = 
{
	"USEnglish", &t1700_0_0_32854, &t1700_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1700_0_0_32854;
FieldInfo t1700_f4_FieldInfo = 
{
	"MiddleEastFrench", &t1700_0_0_32854, &t1700_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1700_0_0_32854;
FieldInfo t1700_f5_FieldInfo = 
{
	"Arabic", &t1700_0_0_32854, &t1700_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1700_0_0_32854;
FieldInfo t1700_f6_FieldInfo = 
{
	"TransliteratedEnglish", &t1700_0_0_32854, &t1700_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1700_0_0_32854;
FieldInfo t1700_f7_FieldInfo = 
{
	"TransliteratedFrench", &t1700_0_0_32854, &t1700_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1700_FIs[] =
{
	&t1700_f1_FieldInfo,
	&t1700_f2_FieldInfo,
	&t1700_f3_FieldInfo,
	&t1700_f4_FieldInfo,
	&t1700_f5_FieldInfo,
	&t1700_f6_FieldInfo,
	&t1700_f7_FieldInfo,
	NULL
};
static const int32_t t1700_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1700_f2_DefaultValue = 
{
	&t1700_f2_FieldInfo, { (char*)&t1700_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1700_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1700_f3_DefaultValue = 
{
	&t1700_f3_FieldInfo, { (char*)&t1700_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1700_f4_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t1700_f4_DefaultValue = 
{
	&t1700_f4_FieldInfo, { (char*)&t1700_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1700_f5_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t1700_f5_DefaultValue = 
{
	&t1700_f5_FieldInfo, { (char*)&t1700_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1700_f6_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t1700_f6_DefaultValue = 
{
	&t1700_f6_FieldInfo, { (char*)&t1700_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1700_f7_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t1700_f7_DefaultValue = 
{
	&t1700_f7_FieldInfo, { (char*)&t1700_f7_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1700_FDVs[] = 
{
	&t1700_f2_DefaultValue,
	&t1700_f3_DefaultValue,
	&t1700_f4_DefaultValue,
	&t1700_f5_DefaultValue,
	&t1700_f6_DefaultValue,
	&t1700_f7_DefaultValue,
	NULL
};
static Il2CppMethodReference t1700_VT[] =
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
static bool t1700_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1700_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1700_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1700__CustomAttributeCache = {
1,
NULL,
&t1700_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1700_1_0_0;
extern CustomAttributesCache t1700__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1700_DM = 
{
	NULL, NULL, NULL, t1700_IOs, &t8_0_0_0, t1700_VT, t1700_VTIGM, NULL};
TypeInfo t1700_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GregorianCalendarTypes", "System.Globalization", t1700_MIs, NULL, t1700_FIs, NULL, &t125_TI, NULL, &t1700__CustomAttributeCache, &t1700_0_0_0, &t1700_1_0_0, &t1700_DM, NULL, NULL, NULL, t1700_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1700)+ sizeof (Il2CppObject), sizeof (t1700)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 7, 0, 0, 23, 0, 3};
#include "t1546.h"
// Metadata Definition System.Globalization.NumberFormatInfo
extern TypeInfo t1546_TI;
#include "t1546MD.h"
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1546_m8705_ParameterInfos[] = 
{
	{"lcid", 0, 134220956, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"read_only", 1, 134220957, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8705_MI = 
{
	".ctor", (methodPointerType)&m8705, &t1546_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t1546_m8705_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 2477, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1546_m8706_ParameterInfos[] = 
{
	{"read_only", 0, 134220958, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8706_MI = 
{
	".ctor", (methodPointerType)&m8706, &t1546_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1546_m8706_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2478, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8707_MI = 
{
	".ctor", (methodPointerType)&m8707, &t1546_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2479, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8708_MI = 
{
	".cctor", (methodPointerType)&m8708, &t1546_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2480, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8709_MI = 
{
	"get_CurrencyDecimalDigits", (methodPointerType)&m8709, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2481, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8710_MI = 
{
	"get_CurrencyDecimalSeparator", (methodPointerType)&m8710, &t1546_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2482, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8711_MI = 
{
	"get_CurrencyGroupSeparator", (methodPointerType)&m8711, &t1546_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2483, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1088_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8712_MI = 
{
	"get_RawCurrencyGroupSizes", (methodPointerType)&m8712, &t1546_TI, &t1088_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2484, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8713_MI = 
{
	"get_CurrencyNegativePattern", (methodPointerType)&m8713, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2485, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8714_MI = 
{
	"get_CurrencyPositivePattern", (methodPointerType)&m8714, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2486, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8715_MI = 
{
	"get_CurrencySymbol", (methodPointerType)&m8715, &t1546_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2487, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1546_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8716_MI = 
{
	"get_CurrentInfo", (methodPointerType)&m8716, &t1546_TI, &t1546_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2488, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1546_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8717_MI = 
{
	"get_InvariantInfo", (methodPointerType)&m8717, &t1546_TI, &t1546_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2489, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8718_MI = 
{
	"get_NaNSymbol", (methodPointerType)&m8718, &t1546_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2490, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8719_MI = 
{
	"get_NegativeInfinitySymbol", (methodPointerType)&m8719, &t1546_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2491, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8720_MI = 
{
	"get_NegativeSign", (methodPointerType)&m8720, &t1546_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2492, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8721_MI = 
{
	"get_NumberDecimalDigits", (methodPointerType)&m8721, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2493, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8722_MI = 
{
	"get_NumberDecimalSeparator", (methodPointerType)&m8722, &t1546_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2494, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8723_MI = 
{
	"get_NumberGroupSeparator", (methodPointerType)&m8723, &t1546_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2495, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1088_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8724_MI = 
{
	"get_RawNumberGroupSizes", (methodPointerType)&m8724, &t1546_TI, &t1088_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2496, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8725_MI = 
{
	"get_NumberNegativePattern", (methodPointerType)&m8725, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2497, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1546_m8726_ParameterInfos[] = 
{
	{"value", 0, 134220959, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8726_MI = 
{
	"set_NumberNegativePattern", (methodPointerType)&m8726, &t1546_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1546_m8726_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 2498, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8727_MI = 
{
	"get_PercentDecimalDigits", (methodPointerType)&m8727, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2499, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8728_MI = 
{
	"get_PercentDecimalSeparator", (methodPointerType)&m8728, &t1546_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2500, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8729_MI = 
{
	"get_PercentGroupSeparator", (methodPointerType)&m8729, &t1546_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2501, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1088_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8730_MI = 
{
	"get_RawPercentGroupSizes", (methodPointerType)&m8730, &t1546_TI, &t1088_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2502, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8731_MI = 
{
	"get_PercentNegativePattern", (methodPointerType)&m8731, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2503, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8732_MI = 
{
	"get_PercentPositivePattern", (methodPointerType)&m8732, &t1546_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2504, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8733_MI = 
{
	"get_PercentSymbol", (methodPointerType)&m8733, &t1546_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2505, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8734_MI = 
{
	"get_PerMilleSymbol", (methodPointerType)&m8734, &t1546_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2506, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8735_MI = 
{
	"get_PositiveInfinitySymbol", (methodPointerType)&m8735, &t1546_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2507, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8736_MI = 
{
	"get_PositiveSign", (methodPointerType)&m8736, &t1546_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2508, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1546_m8737_ParameterInfos[] = 
{
	{"formatType", 0, 134220960, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8737_MI = 
{
	"GetFormat", (methodPointerType)&m8737, &t1546_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1546_m8737_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, false, 2509, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8738_MI = 
{
	"Clone", (methodPointerType)&m8738, &t1546_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 2510, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t899_0_0_0;
static ParameterInfo t1546_m8739_ParameterInfos[] = 
{
	{"formatProvider", 0, 134220961, &EmptyCustomAttributesCache, &t899_0_0_0},
};
extern Il2CppType t1546_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8739_MI = 
{
	"GetInstance", (methodPointerType)&m8739, &t1546_TI, &t1546_0_0_0, RuntimeInvoker_t9_t9, t1546_m8739_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2511, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1546_MIs[] =
{
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
	&m8720_MI,
	&m8721_MI,
	&m8722_MI,
	&m8723_MI,
	&m8724_MI,
	&m8725_MI,
	&m8726_MI,
	&m8727_MI,
	&m8728_MI,
	&m8729_MI,
	&m8730_MI,
	&m8731_MI,
	&m8732_MI,
	&m8733_MI,
	&m8734_MI,
	&m8735_MI,
	&m8736_MI,
	&m8737_MI,
	&m8738_MI,
	&m8739_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t1546_f0_FieldInfo = 
{
	"isReadOnly", &t124_0_0_1, &t1546_TI, offsetof(t1546, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f1_FieldInfo = 
{
	"decimalFormats", &t2_0_0_1, &t1546_TI, offsetof(t1546, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f2_FieldInfo = 
{
	"currencyFormats", &t2_0_0_1, &t1546_TI, offsetof(t1546, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f3_FieldInfo = 
{
	"percentFormats", &t2_0_0_1, &t1546_TI, offsetof(t1546, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f4_FieldInfo = 
{
	"digitPattern", &t2_0_0_1, &t1546_TI, offsetof(t1546, f4), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f5_FieldInfo = 
{
	"zeroPattern", &t2_0_0_1, &t1546_TI, offsetof(t1546, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1546_f6_FieldInfo = 
{
	"currencyDecimalDigits", &t125_0_0_1, &t1546_TI, offsetof(t1546, f6), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f7_FieldInfo = 
{
	"currencyDecimalSeparator", &t2_0_0_1, &t1546_TI, offsetof(t1546, f7), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f8_FieldInfo = 
{
	"currencyGroupSeparator", &t2_0_0_1, &t1546_TI, offsetof(t1546, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1088_0_0_1;
FieldInfo t1546_f9_FieldInfo = 
{
	"currencyGroupSizes", &t1088_0_0_1, &t1546_TI, offsetof(t1546, f9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1546_f10_FieldInfo = 
{
	"currencyNegativePattern", &t125_0_0_1, &t1546_TI, offsetof(t1546, f10), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1546_f11_FieldInfo = 
{
	"currencyPositivePattern", &t125_0_0_1, &t1546_TI, offsetof(t1546, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f12_FieldInfo = 
{
	"currencySymbol", &t2_0_0_1, &t1546_TI, offsetof(t1546, f12), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f13_FieldInfo = 
{
	"nanSymbol", &t2_0_0_1, &t1546_TI, offsetof(t1546, f13), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f14_FieldInfo = 
{
	"negativeInfinitySymbol", &t2_0_0_1, &t1546_TI, offsetof(t1546, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f15_FieldInfo = 
{
	"negativeSign", &t2_0_0_1, &t1546_TI, offsetof(t1546, f15), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1546_f16_FieldInfo = 
{
	"numberDecimalDigits", &t125_0_0_1, &t1546_TI, offsetof(t1546, f16), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f17_FieldInfo = 
{
	"numberDecimalSeparator", &t2_0_0_1, &t1546_TI, offsetof(t1546, f17), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f18_FieldInfo = 
{
	"numberGroupSeparator", &t2_0_0_1, &t1546_TI, offsetof(t1546, f18), &EmptyCustomAttributesCache};
extern Il2CppType t1088_0_0_1;
FieldInfo t1546_f19_FieldInfo = 
{
	"numberGroupSizes", &t1088_0_0_1, &t1546_TI, offsetof(t1546, f19), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1546_f20_FieldInfo = 
{
	"numberNegativePattern", &t125_0_0_1, &t1546_TI, offsetof(t1546, f20), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1546_f21_FieldInfo = 
{
	"percentDecimalDigits", &t125_0_0_1, &t1546_TI, offsetof(t1546, f21), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f22_FieldInfo = 
{
	"percentDecimalSeparator", &t2_0_0_1, &t1546_TI, offsetof(t1546, f22), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f23_FieldInfo = 
{
	"percentGroupSeparator", &t2_0_0_1, &t1546_TI, offsetof(t1546, f23), &EmptyCustomAttributesCache};
extern Il2CppType t1088_0_0_1;
FieldInfo t1546_f24_FieldInfo = 
{
	"percentGroupSizes", &t1088_0_0_1, &t1546_TI, offsetof(t1546, f24), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1546_f25_FieldInfo = 
{
	"percentNegativePattern", &t125_0_0_1, &t1546_TI, offsetof(t1546, f25), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1546_f26_FieldInfo = 
{
	"percentPositivePattern", &t125_0_0_1, &t1546_TI, offsetof(t1546, f26), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f27_FieldInfo = 
{
	"percentSymbol", &t2_0_0_1, &t1546_TI, offsetof(t1546, f27), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f28_FieldInfo = 
{
	"perMilleSymbol", &t2_0_0_1, &t1546_TI, offsetof(t1546, f28), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f29_FieldInfo = 
{
	"positiveInfinitySymbol", &t2_0_0_1, &t1546_TI, offsetof(t1546, f29), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f30_FieldInfo = 
{
	"positiveSign", &t2_0_0_1, &t1546_TI, offsetof(t1546, f30), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1546_f31_FieldInfo = 
{
	"ansiCurrencySymbol", &t2_0_0_1, &t1546_TI, offsetof(t1546, f31), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1546_f32_FieldInfo = 
{
	"m_dataItem", &t125_0_0_1, &t1546_TI, offsetof(t1546, f32), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1546_f33_FieldInfo = 
{
	"m_useUserOverride", &t124_0_0_1, &t1546_TI, offsetof(t1546, f33), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1546_f34_FieldInfo = 
{
	"validForParseAsNumber", &t124_0_0_1, &t1546_TI, offsetof(t1546, f34), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1546_f35_FieldInfo = 
{
	"validForParseAsCurrency", &t124_0_0_1, &t1546_TI, offsetof(t1546, f35), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1546_f36_FieldInfo = 
{
	"nativeDigits", &t221_0_0_1, &t1546_TI, offsetof(t1546, f36), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1546_f37_FieldInfo = 
{
	"digitSubstitution", &t125_0_0_1, &t1546_TI, offsetof(t1546, f37), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1546_f38_FieldInfo = 
{
	"invariantNativeDigits", &t221_0_0_49, &t1546_TI, offsetof(t1546_SFs, f38), &EmptyCustomAttributesCache};
static FieldInfo* t1546_FIs[] =
{
	&t1546_f0_FieldInfo,
	&t1546_f1_FieldInfo,
	&t1546_f2_FieldInfo,
	&t1546_f3_FieldInfo,
	&t1546_f4_FieldInfo,
	&t1546_f5_FieldInfo,
	&t1546_f6_FieldInfo,
	&t1546_f7_FieldInfo,
	&t1546_f8_FieldInfo,
	&t1546_f9_FieldInfo,
	&t1546_f10_FieldInfo,
	&t1546_f11_FieldInfo,
	&t1546_f12_FieldInfo,
	&t1546_f13_FieldInfo,
	&t1546_f14_FieldInfo,
	&t1546_f15_FieldInfo,
	&t1546_f16_FieldInfo,
	&t1546_f17_FieldInfo,
	&t1546_f18_FieldInfo,
	&t1546_f19_FieldInfo,
	&t1546_f20_FieldInfo,
	&t1546_f21_FieldInfo,
	&t1546_f22_FieldInfo,
	&t1546_f23_FieldInfo,
	&t1546_f24_FieldInfo,
	&t1546_f25_FieldInfo,
	&t1546_f26_FieldInfo,
	&t1546_f27_FieldInfo,
	&t1546_f28_FieldInfo,
	&t1546_f29_FieldInfo,
	&t1546_f30_FieldInfo,
	&t1546_f31_FieldInfo,
	&t1546_f32_FieldInfo,
	&t1546_f33_FieldInfo,
	&t1546_f34_FieldInfo,
	&t1546_f35_FieldInfo,
	&t1546_f36_FieldInfo,
	&t1546_f37_FieldInfo,
	&t1546_f38_FieldInfo,
	NULL
};
extern MethodInfo m8709_MI;
static PropertyInfo t1546____CurrencyDecimalDigits_PropertyInfo = 
{
	&t1546_TI, "CurrencyDecimalDigits", &m8709_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8710_MI;
static PropertyInfo t1546____CurrencyDecimalSeparator_PropertyInfo = 
{
	&t1546_TI, "CurrencyDecimalSeparator", &m8710_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8711_MI;
static PropertyInfo t1546____CurrencyGroupSeparator_PropertyInfo = 
{
	&t1546_TI, "CurrencyGroupSeparator", &m8711_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8712_MI;
static PropertyInfo t1546____RawCurrencyGroupSizes_PropertyInfo = 
{
	&t1546_TI, "RawCurrencyGroupSizes", &m8712_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8713_MI;
static PropertyInfo t1546____CurrencyNegativePattern_PropertyInfo = 
{
	&t1546_TI, "CurrencyNegativePattern", &m8713_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8714_MI;
static PropertyInfo t1546____CurrencyPositivePattern_PropertyInfo = 
{
	&t1546_TI, "CurrencyPositivePattern", &m8714_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8715_MI;
static PropertyInfo t1546____CurrencySymbol_PropertyInfo = 
{
	&t1546_TI, "CurrencySymbol", &m8715_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8716_MI;
static PropertyInfo t1546____CurrentInfo_PropertyInfo = 
{
	&t1546_TI, "CurrentInfo", &m8716_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8717_MI;
static PropertyInfo t1546____InvariantInfo_PropertyInfo = 
{
	&t1546_TI, "InvariantInfo", &m8717_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8718_MI;
static PropertyInfo t1546____NaNSymbol_PropertyInfo = 
{
	&t1546_TI, "NaNSymbol", &m8718_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8719_MI;
static PropertyInfo t1546____NegativeInfinitySymbol_PropertyInfo = 
{
	&t1546_TI, "NegativeInfinitySymbol", &m8719_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8720_MI;
static PropertyInfo t1546____NegativeSign_PropertyInfo = 
{
	&t1546_TI, "NegativeSign", &m8720_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8721_MI;
static PropertyInfo t1546____NumberDecimalDigits_PropertyInfo = 
{
	&t1546_TI, "NumberDecimalDigits", &m8721_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8722_MI;
static PropertyInfo t1546____NumberDecimalSeparator_PropertyInfo = 
{
	&t1546_TI, "NumberDecimalSeparator", &m8722_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8723_MI;
static PropertyInfo t1546____NumberGroupSeparator_PropertyInfo = 
{
	&t1546_TI, "NumberGroupSeparator", &m8723_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8724_MI;
static PropertyInfo t1546____RawNumberGroupSizes_PropertyInfo = 
{
	&t1546_TI, "RawNumberGroupSizes", &m8724_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8725_MI;
extern MethodInfo m8726_MI;
static PropertyInfo t1546____NumberNegativePattern_PropertyInfo = 
{
	&t1546_TI, "NumberNegativePattern", &m8725_MI, &m8726_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8727_MI;
static PropertyInfo t1546____PercentDecimalDigits_PropertyInfo = 
{
	&t1546_TI, "PercentDecimalDigits", &m8727_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8728_MI;
static PropertyInfo t1546____PercentDecimalSeparator_PropertyInfo = 
{
	&t1546_TI, "PercentDecimalSeparator", &m8728_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8729_MI;
static PropertyInfo t1546____PercentGroupSeparator_PropertyInfo = 
{
	&t1546_TI, "PercentGroupSeparator", &m8729_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8730_MI;
static PropertyInfo t1546____RawPercentGroupSizes_PropertyInfo = 
{
	&t1546_TI, "RawPercentGroupSizes", &m8730_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8731_MI;
static PropertyInfo t1546____PercentNegativePattern_PropertyInfo = 
{
	&t1546_TI, "PercentNegativePattern", &m8731_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8732_MI;
static PropertyInfo t1546____PercentPositivePattern_PropertyInfo = 
{
	&t1546_TI, "PercentPositivePattern", &m8732_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8733_MI;
static PropertyInfo t1546____PercentSymbol_PropertyInfo = 
{
	&t1546_TI, "PercentSymbol", &m8733_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8734_MI;
static PropertyInfo t1546____PerMilleSymbol_PropertyInfo = 
{
	&t1546_TI, "PerMilleSymbol", &m8734_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8735_MI;
static PropertyInfo t1546____PositiveInfinitySymbol_PropertyInfo = 
{
	&t1546_TI, "PositiveInfinitySymbol", &m8735_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8736_MI;
static PropertyInfo t1546____PositiveSign_PropertyInfo = 
{
	&t1546_TI, "PositiveSign", &m8736_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1546_PIs[] =
{
	&t1546____CurrencyDecimalDigits_PropertyInfo,
	&t1546____CurrencyDecimalSeparator_PropertyInfo,
	&t1546____CurrencyGroupSeparator_PropertyInfo,
	&t1546____RawCurrencyGroupSizes_PropertyInfo,
	&t1546____CurrencyNegativePattern_PropertyInfo,
	&t1546____CurrencyPositivePattern_PropertyInfo,
	&t1546____CurrencySymbol_PropertyInfo,
	&t1546____CurrentInfo_PropertyInfo,
	&t1546____InvariantInfo_PropertyInfo,
	&t1546____NaNSymbol_PropertyInfo,
	&t1546____NegativeInfinitySymbol_PropertyInfo,
	&t1546____NegativeSign_PropertyInfo,
	&t1546____NumberDecimalDigits_PropertyInfo,
	&t1546____NumberDecimalSeparator_PropertyInfo,
	&t1546____NumberGroupSeparator_PropertyInfo,
	&t1546____RawNumberGroupSizes_PropertyInfo,
	&t1546____NumberNegativePattern_PropertyInfo,
	&t1546____PercentDecimalDigits_PropertyInfo,
	&t1546____PercentDecimalSeparator_PropertyInfo,
	&t1546____PercentGroupSeparator_PropertyInfo,
	&t1546____RawPercentGroupSizes_PropertyInfo,
	&t1546____PercentNegativePattern_PropertyInfo,
	&t1546____PercentPositivePattern_PropertyInfo,
	&t1546____PercentSymbol_PropertyInfo,
	&t1546____PerMilleSymbol_PropertyInfo,
	&t1546____PositiveInfinitySymbol_PropertyInfo,
	&t1546____PositiveSign_PropertyInfo,
	NULL
};
extern MethodInfo m8737_MI;
extern MethodInfo m8738_MI;
static Il2CppMethodReference t1546_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8737_MI,
	&m8738_MI,
};
static bool t1546_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1546_ITIs[] = 
{
	&t615_0_0_0,
	&t899_0_0_0,
};
static Il2CppInterfaceOffsetPair t1546_IOs[] = 
{
	{ &t615_0_0_0, 4},
	{ &t899_0_0_0, 4},
};
void t1546_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
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
	&g_mscorlib_dll_Image, NULL, "NumberFormatInfo", "System.Globalization", t1546_MIs, t1546_PIs, t1546_FIs, NULL, &t1546_TI, NULL, &t1546__CustomAttributeCache, &t1546_0_0_0, &t1546_1_0_0, &t1546_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1546), sizeof (t1546), 0, -1, sizeof(t1546_SFs), 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, true, false, 35, 27, 39, 0, 0, 6, 2, 2};
#include "t895.h"
// Metadata Definition System.Globalization.NumberStyles
extern TypeInfo t895_TI;
#include "t895MD.h"
static MethodInfo* t895_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t895_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t895_TI, offsetof(t895, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f2_FieldInfo = 
{
	"None", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f3_FieldInfo = 
{
	"AllowLeadingWhite", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f4_FieldInfo = 
{
	"AllowTrailingWhite", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f5_FieldInfo = 
{
	"AllowLeadingSign", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f6_FieldInfo = 
{
	"AllowTrailingSign", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f7_FieldInfo = 
{
	"AllowParentheses", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f8_FieldInfo = 
{
	"AllowDecimalPoint", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f9_FieldInfo = 
{
	"AllowThousands", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f10_FieldInfo = 
{
	"AllowExponent", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f11_FieldInfo = 
{
	"AllowCurrencySymbol", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f12_FieldInfo = 
{
	"AllowHexSpecifier", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f13_FieldInfo = 
{
	"Integer", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f14_FieldInfo = 
{
	"HexNumber", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f15_FieldInfo = 
{
	"Number", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f16_FieldInfo = 
{
	"Float", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f17_FieldInfo = 
{
	"Currency", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t895_0_0_32854;
FieldInfo t895_f18_FieldInfo = 
{
	"Any", &t895_0_0_32854, &t895_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t895_FIs[] =
{
	&t895_f1_FieldInfo,
	&t895_f2_FieldInfo,
	&t895_f3_FieldInfo,
	&t895_f4_FieldInfo,
	&t895_f5_FieldInfo,
	&t895_f6_FieldInfo,
	&t895_f7_FieldInfo,
	&t895_f8_FieldInfo,
	&t895_f9_FieldInfo,
	&t895_f10_FieldInfo,
	&t895_f11_FieldInfo,
	&t895_f12_FieldInfo,
	&t895_f13_FieldInfo,
	&t895_f14_FieldInfo,
	&t895_f15_FieldInfo,
	&t895_f16_FieldInfo,
	&t895_f17_FieldInfo,
	&t895_f18_FieldInfo,
	NULL
};
static const int32_t t895_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t895_f2_DefaultValue = 
{
	&t895_f2_FieldInfo, { (char*)&t895_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t895_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t895_f3_DefaultValue = 
{
	&t895_f3_FieldInfo, { (char*)&t895_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t895_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t895_f4_DefaultValue = 
{
	&t895_f4_FieldInfo, { (char*)&t895_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t895_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t895_f5_DefaultValue = 
{
	&t895_f5_FieldInfo, { (char*)&t895_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t895_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t895_f6_DefaultValue = 
{
	&t895_f6_FieldInfo, { (char*)&t895_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t895_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t895_f7_DefaultValue = 
{
	&t895_f7_FieldInfo, { (char*)&t895_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t895_f8_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t895_f8_DefaultValue = 
{
	&t895_f8_FieldInfo, { (char*)&t895_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t895_f9_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t895_f9_DefaultValue = 
{
	&t895_f9_FieldInfo, { (char*)&t895_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t895_f10_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t895_f10_DefaultValue = 
{
	&t895_f10_FieldInfo, { (char*)&t895_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t895_f11_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t895_f11_DefaultValue = 
{
	&t895_f11_FieldInfo, { (char*)&t895_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t895_f12_DefaultValueData = 512;
static Il2CppFieldDefaultValueEntry t895_f12_DefaultValue = 
{
	&t895_f12_FieldInfo, { (char*)&t895_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t895_f13_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t895_f13_DefaultValue = 
{
	&t895_f13_FieldInfo, { (char*)&t895_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t895_f14_DefaultValueData = 515;
static Il2CppFieldDefaultValueEntry t895_f14_DefaultValue = 
{
	&t895_f14_FieldInfo, { (char*)&t895_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t895_f15_DefaultValueData = 111;
static Il2CppFieldDefaultValueEntry t895_f15_DefaultValue = 
{
	&t895_f15_FieldInfo, { (char*)&t895_f15_DefaultValueData, &t125_0_0_0 }};
static const int32_t t895_f16_DefaultValueData = 167;
static Il2CppFieldDefaultValueEntry t895_f16_DefaultValue = 
{
	&t895_f16_FieldInfo, { (char*)&t895_f16_DefaultValueData, &t125_0_0_0 }};
static const int32_t t895_f17_DefaultValueData = 383;
static Il2CppFieldDefaultValueEntry t895_f17_DefaultValue = 
{
	&t895_f17_FieldInfo, { (char*)&t895_f17_DefaultValueData, &t125_0_0_0 }};
static const int32_t t895_f18_DefaultValueData = 511;
static Il2CppFieldDefaultValueEntry t895_f18_DefaultValue = 
{
	&t895_f18_FieldInfo, { (char*)&t895_f18_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t895_FDVs[] = 
{
	&t895_f2_DefaultValue,
	&t895_f3_DefaultValue,
	&t895_f4_DefaultValue,
	&t895_f5_DefaultValue,
	&t895_f6_DefaultValue,
	&t895_f7_DefaultValue,
	&t895_f8_DefaultValue,
	&t895_f9_DefaultValue,
	&t895_f10_DefaultValue,
	&t895_f11_DefaultValue,
	&t895_f12_DefaultValue,
	&t895_f13_DefaultValue,
	&t895_f14_DefaultValue,
	&t895_f15_DefaultValue,
	&t895_f16_DefaultValue,
	&t895_f17_DefaultValue,
	&t895_f18_DefaultValue,
	NULL
};
static Il2CppMethodReference t895_VT[] =
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
static bool t895_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t895_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t895_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t608 * tmp;
		tmp = (t608 *)il2cpp_codegen_object_new (&t608_TI);
		m2967(tmp, &m2967_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t895__CustomAttributeCache = {
2,
NULL,
&t895_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t895_0_0_0;
extern Il2CppType t895_1_0_0;
extern CustomAttributesCache t895__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t895_DM = 
{
	NULL, NULL, NULL, t895_IOs, &t8_0_0_0, t895_VT, t895_VTIGM, NULL};
TypeInfo t895_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NumberStyles", "System.Globalization", t895_MIs, NULL, t895_FIs, NULL, &t125_TI, NULL, &t895__CustomAttributeCache, &t895_0_0_0, &t895_1_0_0, &t895_DM, NULL, NULL, NULL, t895_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t895)+ sizeof (Il2CppObject), sizeof (t895)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 18, 0, 0, 23, 0, 3};
#include "t1701.h"
// Metadata Definition System.Globalization.TextInfo/Data
extern TypeInfo t1701_TI;
#include "t1701MD.h"
static MethodInfo* t1701_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_6;
FieldInfo t1701_f0_FieldInfo = 
{
	"ansi", &t125_0_0_6, &t1701_TI, offsetof(t1701, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1701_f1_FieldInfo = 
{
	"ebcdic", &t125_0_0_6, &t1701_TI, offsetof(t1701, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1701_f2_FieldInfo = 
{
	"mac", &t125_0_0_6, &t1701_TI, offsetof(t1701, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1701_f3_FieldInfo = 
{
	"oem", &t125_0_0_6, &t1701_TI, offsetof(t1701, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t568_0_0_6;
FieldInfo t1701_f4_FieldInfo = 
{
	"list_sep", &t568_0_0_6, &t1701_TI, offsetof(t1701, f4) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1701_FIs[] =
{
	&t1701_f0_FieldInfo,
	&t1701_f1_FieldInfo,
	&t1701_f2_FieldInfo,
	&t1701_f3_FieldInfo,
	&t1701_f4_FieldInfo,
	NULL
};
static Il2CppMethodReference t1701_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
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
extern TypeInfo t1607_TI;
extern Il2CppType t1607_0_0_0;
const Il2CppTypeDefinitionMetadata t1701_DM = 
{
	&t1607_0_0_0, NULL, NULL, NULL, &t117_0_0_0, t1701_VT, t1701_VTIGM, NULL};
TypeInfo t1701_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Data", "", t1701_MIs, NULL, t1701_FIs, NULL, &t1701_TI, NULL, &EmptyCustomAttributesCache, &t1701_0_0_0, &t1701_1_0_0, &t1701_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1701)+ sizeof (Il2CppObject), sizeof (t1701)+ sizeof (Il2CppObject), 0, sizeof(t1701 ), 0, 0, -1, 1048843, 0, 0, true, false, false, false, false, false, false, false, false, true, 0, 0, 5, 0, 0, 4, 0, 0};
#include "t1607.h"
// Metadata Definition System.Globalization.TextInfo
#include "t1607MD.h"
extern Il2CppType t894_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2247_0_0_0;
extern Il2CppType t2247_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1607_m8740_ParameterInfos[] = 
{
	{"ci", 0, 134220962, &EmptyCustomAttributesCache, &t894_0_0_0},
	{"lcid", 1, 134220963, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"data", 2, 134220964, &EmptyCustomAttributesCache, &t2247_0_0_0},
	{"read_only", 3, 134220965, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8740_MI = 
{
	".ctor", (methodPointerType)&m8740, &t1607_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t9_t186, t1607_m8740_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 2512, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1607_m8741_ParameterInfos[] = 
{
	{"sender", 0, 134220966, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1607__CustomAttributeCache_m8741;
MethodInfo m8741_MI = 
{
	"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", (methodPointerType)&m8741, &t1607_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1607_m8741_ParameterInfos, &t1607__CustomAttributeCache_m8741, 481, 0, 4, 1, false, false, 2513, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8742_MI = 
{
	"get_CultureName", (methodPointerType)&m8742, &t1607_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2514, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1607_m8743_ParameterInfos[] = 
{
	{"obj", 0, 134220967, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8743_MI = 
{
	"Equals", (methodPointerType)&m8743, &t1607_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1607_m8743_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 2515, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8744_MI = 
{
	"GetHashCode", (methodPointerType)&m8744, &t1607_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 2516, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8745_MI = 
{
	"ToString", (methodPointerType)&m8745, &t1607_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2517, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
static ParameterInfo t1607_m8746_ParameterInfos[] = 
{
	{"c", 0, 134220968, &EmptyCustomAttributesCache, &t296_0_0_0},
};
extern Il2CppType t296_0_0_0;
extern void* RuntimeInvoker_t296_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m8746_MI = 
{
	"ToLower", (methodPointerType)&m8746, &t1607_TI, &t296_0_0_0, RuntimeInvoker_t296_t327, t1607_m8746_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 1, false, false, 2518, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
static ParameterInfo t1607_m8747_ParameterInfos[] = 
{
	{"c", 0, 134220969, &EmptyCustomAttributesCache, &t296_0_0_0},
};
extern Il2CppType t296_0_0_0;
extern void* RuntimeInvoker_t296_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m8747_MI = 
{
	"ToUpper", (methodPointerType)&m8747, &t1607_TI, &t296_0_0_0, RuntimeInvoker_t296_t327, t1607_m8747_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 1, false, false, 2519, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1607_m8748_ParameterInfos[] = 
{
	{"str", 0, 134220970, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8748_MI = 
{
	"ToLower", (methodPointerType)&m8748, &t1607_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1607_m8748_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 1, false, false, 2520, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1607_m8749_ParameterInfos[] = 
{
	{"str", 0, 134220971, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8749_MI = 
{
	"ToUpper", (methodPointerType)&m8749, &t1607_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1607_m8749_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 1, false, false, 2521, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1607_MIs[] =
{
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
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t1607_f0_FieldInfo = 
{
	"m_isReadOnly", &t124_0_0_1, &t1607_TI, offsetof(t1607, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1607_f1_FieldInfo = 
{
	"customCultureName", &t2_0_0_1, &t1607_TI, offsetof(t1607, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1607_f2_FieldInfo = 
{
	"m_win32LangID", &t125_0_0_1, &t1607_TI, offsetof(t1607, f2), &EmptyCustomAttributesCache};
extern Il2CppType t894_0_0_161;
FieldInfo t1607_f3_FieldInfo = 
{
	"ci", &t894_0_0_161, &t1607_TI, offsetof(t1607, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_161;
FieldInfo t1607_f4_FieldInfo = 
{
	"handleDotI", &t124_0_0_161, &t1607_TI, offsetof(t1607, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1701_0_0_161;
FieldInfo t1607_f5_FieldInfo = 
{
	"data", &t1701_0_0_161, &t1607_TI, offsetof(t1607, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1607_FIs[] =
{
	&t1607_f0_FieldInfo,
	&t1607_f1_FieldInfo,
	&t1607_f2_FieldInfo,
	&t1607_f3_FieldInfo,
	&t1607_f4_FieldInfo,
	&t1607_f5_FieldInfo,
	NULL
};
extern MethodInfo m8742_MI;
extern CustomAttributesCache t1607__CustomAttributeCache_t1607____CultureName_PropertyInfo;
static PropertyInfo t1607____CultureName_PropertyInfo = 
{
	&t1607_TI, "CultureName", &m8742_MI, NULL, 0, &t1607__CustomAttributeCache_t1607____CultureName_PropertyInfo};
static PropertyInfo* t1607_PIs[] =
{
	&t1607____CultureName_PropertyInfo,
	NULL
};
static const Il2CppType* t1607_TI__nestedTypes[1] =
{
	&t1701_0_0_0,
};
extern MethodInfo m8743_MI;
extern MethodInfo m8744_MI;
extern MethodInfo m8745_MI;
extern MethodInfo m8741_MI;
extern MethodInfo m8746_MI;
extern MethodInfo m8747_MI;
extern MethodInfo m8748_MI;
extern MethodInfo m8749_MI;
static Il2CppMethodReference t1607_VT[] =
{
	&m8743_MI,
	&m646_MI,
	&m8744_MI,
	&m8745_MI,
	&m8741_MI,
	&m8746_MI,
	&m8747_MI,
	&m8748_MI,
	&m8749_MI,
};
static bool t1607_VTIGM[] =
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
static const Il2CppType* t1607_ITIs[] = 
{
	&t615_0_0_0,
	&t1099_0_0_0,
};
static Il2CppInterfaceOffsetPair t1607_IOs[] = 
{
	{ &t615_0_0_0, 4},
	{ &t1099_0_0_0, 4},
};
void t1607_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m7821(tmp, il2cpp_codegen_string_new_wrapper("IDeserializationCallback isn't implemented."), &m7821_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern MethodInfo m7820_MI;
void t1607_CustomAttributesCacheGenerator_m8741(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7820(tmp, &m7820_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1607_CustomAttributesCacheGenerator_t1607____CultureName_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1607__CustomAttributeCache = {
2,
NULL,
&t1607_CustomAttributesCacheGenerator
};
CustomAttributesCache t1607__CustomAttributeCache_m8741 = {
1,
NULL,
&t1607_CustomAttributesCacheGenerator_m8741
};
CustomAttributesCache t1607__CustomAttributeCache_t1607____CultureName_PropertyInfo = {
1,
NULL,
&t1607_CustomAttributesCacheGenerator_t1607____CultureName_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1607_1_0_0;
struct t1607;
extern CustomAttributesCache t1607__CustomAttributeCache;
extern CustomAttributesCache t1607__CustomAttributeCache_m8741;
extern CustomAttributesCache t1607__CustomAttributeCache_t1607____CultureName_PropertyInfo;
const Il2CppTypeDefinitionMetadata t1607_DM = 
{
	NULL, t1607_TI__nestedTypes, t1607_ITIs, t1607_IOs, &t9_0_0_0, t1607_VT, t1607_VTIGM, NULL};
TypeInfo t1607_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TextInfo", "System.Globalization", t1607_MIs, t1607_PIs, t1607_FIs, NULL, &t1607_TI, NULL, &t1607__CustomAttributeCache, &t1607_0_0_0, &t1607_1_0_0, &t1607_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1607), sizeof (t1607), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 1, 6, 0, 1, 9, 2, 2};
#include "t1276.h"
// Metadata Definition System.Globalization.UnicodeCategory
extern TypeInfo t1276_TI;
#include "t1276MD.h"
static MethodInfo* t1276_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1276_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1276_TI, offsetof(t1276, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f2_FieldInfo = 
{
	"UppercaseLetter", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f3_FieldInfo = 
{
	"LowercaseLetter", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f4_FieldInfo = 
{
	"TitlecaseLetter", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f5_FieldInfo = 
{
	"ModifierLetter", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f6_FieldInfo = 
{
	"OtherLetter", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f7_FieldInfo = 
{
	"NonSpacingMark", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f8_FieldInfo = 
{
	"SpacingCombiningMark", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f9_FieldInfo = 
{
	"EnclosingMark", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f10_FieldInfo = 
{
	"DecimalDigitNumber", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f11_FieldInfo = 
{
	"LetterNumber", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f12_FieldInfo = 
{
	"OtherNumber", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f13_FieldInfo = 
{
	"SpaceSeparator", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f14_FieldInfo = 
{
	"LineSeparator", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f15_FieldInfo = 
{
	"ParagraphSeparator", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f16_FieldInfo = 
{
	"Control", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f17_FieldInfo = 
{
	"Format", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f18_FieldInfo = 
{
	"Surrogate", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f19_FieldInfo = 
{
	"PrivateUse", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f20_FieldInfo = 
{
	"ConnectorPunctuation", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f21_FieldInfo = 
{
	"DashPunctuation", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f22_FieldInfo = 
{
	"OpenPunctuation", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f23_FieldInfo = 
{
	"ClosePunctuation", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f24_FieldInfo = 
{
	"InitialQuotePunctuation", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f25_FieldInfo = 
{
	"FinalQuotePunctuation", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f26_FieldInfo = 
{
	"OtherPunctuation", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f27_FieldInfo = 
{
	"MathSymbol", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f28_FieldInfo = 
{
	"CurrencySymbol", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f29_FieldInfo = 
{
	"ModifierSymbol", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f30_FieldInfo = 
{
	"OtherSymbol", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1276_0_0_32854;
FieldInfo t1276_f31_FieldInfo = 
{
	"OtherNotAssigned", &t1276_0_0_32854, &t1276_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1276_FIs[] =
{
	&t1276_f1_FieldInfo,
	&t1276_f2_FieldInfo,
	&t1276_f3_FieldInfo,
	&t1276_f4_FieldInfo,
	&t1276_f5_FieldInfo,
	&t1276_f6_FieldInfo,
	&t1276_f7_FieldInfo,
	&t1276_f8_FieldInfo,
	&t1276_f9_FieldInfo,
	&t1276_f10_FieldInfo,
	&t1276_f11_FieldInfo,
	&t1276_f12_FieldInfo,
	&t1276_f13_FieldInfo,
	&t1276_f14_FieldInfo,
	&t1276_f15_FieldInfo,
	&t1276_f16_FieldInfo,
	&t1276_f17_FieldInfo,
	&t1276_f18_FieldInfo,
	&t1276_f19_FieldInfo,
	&t1276_f20_FieldInfo,
	&t1276_f21_FieldInfo,
	&t1276_f22_FieldInfo,
	&t1276_f23_FieldInfo,
	&t1276_f24_FieldInfo,
	&t1276_f25_FieldInfo,
	&t1276_f26_FieldInfo,
	&t1276_f27_FieldInfo,
	&t1276_f28_FieldInfo,
	&t1276_f29_FieldInfo,
	&t1276_f30_FieldInfo,
	&t1276_f31_FieldInfo,
	NULL
};
static const int32_t t1276_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1276_f2_DefaultValue = 
{
	&t1276_f2_FieldInfo, { (char*)&t1276_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1276_f3_DefaultValue = 
{
	&t1276_f3_FieldInfo, { (char*)&t1276_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1276_f4_DefaultValue = 
{
	&t1276_f4_FieldInfo, { (char*)&t1276_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1276_f5_DefaultValue = 
{
	&t1276_f5_FieldInfo, { (char*)&t1276_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1276_f6_DefaultValue = 
{
	&t1276_f6_FieldInfo, { (char*)&t1276_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1276_f7_DefaultValue = 
{
	&t1276_f7_FieldInfo, { (char*)&t1276_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1276_f8_DefaultValue = 
{
	&t1276_f8_FieldInfo, { (char*)&t1276_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1276_f9_DefaultValue = 
{
	&t1276_f9_FieldInfo, { (char*)&t1276_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f10_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1276_f10_DefaultValue = 
{
	&t1276_f10_FieldInfo, { (char*)&t1276_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f11_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t1276_f11_DefaultValue = 
{
	&t1276_f11_FieldInfo, { (char*)&t1276_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f12_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t1276_f12_DefaultValue = 
{
	&t1276_f12_FieldInfo, { (char*)&t1276_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f13_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t1276_f13_DefaultValue = 
{
	&t1276_f13_FieldInfo, { (char*)&t1276_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f14_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t1276_f14_DefaultValue = 
{
	&t1276_f14_FieldInfo, { (char*)&t1276_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f15_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry t1276_f15_DefaultValue = 
{
	&t1276_f15_FieldInfo, { (char*)&t1276_f15_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f16_DefaultValueData = 14;
static Il2CppFieldDefaultValueEntry t1276_f16_DefaultValue = 
{
	&t1276_f16_FieldInfo, { (char*)&t1276_f16_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f17_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t1276_f17_DefaultValue = 
{
	&t1276_f17_FieldInfo, { (char*)&t1276_f17_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f18_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1276_f18_DefaultValue = 
{
	&t1276_f18_FieldInfo, { (char*)&t1276_f18_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f19_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry t1276_f19_DefaultValue = 
{
	&t1276_f19_FieldInfo, { (char*)&t1276_f19_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f20_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry t1276_f20_DefaultValue = 
{
	&t1276_f20_FieldInfo, { (char*)&t1276_f20_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f21_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry t1276_f21_DefaultValue = 
{
	&t1276_f21_FieldInfo, { (char*)&t1276_f21_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f22_DefaultValueData = 20;
static Il2CppFieldDefaultValueEntry t1276_f22_DefaultValue = 
{
	&t1276_f22_FieldInfo, { (char*)&t1276_f22_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f23_DefaultValueData = 21;
static Il2CppFieldDefaultValueEntry t1276_f23_DefaultValue = 
{
	&t1276_f23_FieldInfo, { (char*)&t1276_f23_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f24_DefaultValueData = 22;
static Il2CppFieldDefaultValueEntry t1276_f24_DefaultValue = 
{
	&t1276_f24_FieldInfo, { (char*)&t1276_f24_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f25_DefaultValueData = 23;
static Il2CppFieldDefaultValueEntry t1276_f25_DefaultValue = 
{
	&t1276_f25_FieldInfo, { (char*)&t1276_f25_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f26_DefaultValueData = 24;
static Il2CppFieldDefaultValueEntry t1276_f26_DefaultValue = 
{
	&t1276_f26_FieldInfo, { (char*)&t1276_f26_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f27_DefaultValueData = 25;
static Il2CppFieldDefaultValueEntry t1276_f27_DefaultValue = 
{
	&t1276_f27_FieldInfo, { (char*)&t1276_f27_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f28_DefaultValueData = 26;
static Il2CppFieldDefaultValueEntry t1276_f28_DefaultValue = 
{
	&t1276_f28_FieldInfo, { (char*)&t1276_f28_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f29_DefaultValueData = 27;
static Il2CppFieldDefaultValueEntry t1276_f29_DefaultValue = 
{
	&t1276_f29_FieldInfo, { (char*)&t1276_f29_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f30_DefaultValueData = 28;
static Il2CppFieldDefaultValueEntry t1276_f30_DefaultValue = 
{
	&t1276_f30_FieldInfo, { (char*)&t1276_f30_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1276_f31_DefaultValueData = 29;
static Il2CppFieldDefaultValueEntry t1276_f31_DefaultValue = 
{
	&t1276_f31_FieldInfo, { (char*)&t1276_f31_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1276_FDVs[] = 
{
	&t1276_f2_DefaultValue,
	&t1276_f3_DefaultValue,
	&t1276_f4_DefaultValue,
	&t1276_f5_DefaultValue,
	&t1276_f6_DefaultValue,
	&t1276_f7_DefaultValue,
	&t1276_f8_DefaultValue,
	&t1276_f9_DefaultValue,
	&t1276_f10_DefaultValue,
	&t1276_f11_DefaultValue,
	&t1276_f12_DefaultValue,
	&t1276_f13_DefaultValue,
	&t1276_f14_DefaultValue,
	&t1276_f15_DefaultValue,
	&t1276_f16_DefaultValue,
	&t1276_f17_DefaultValue,
	&t1276_f18_DefaultValue,
	&t1276_f19_DefaultValue,
	&t1276_f20_DefaultValue,
	&t1276_f21_DefaultValue,
	&t1276_f22_DefaultValue,
	&t1276_f23_DefaultValue,
	&t1276_f24_DefaultValue,
	&t1276_f25_DefaultValue,
	&t1276_f26_DefaultValue,
	&t1276_f27_DefaultValue,
	&t1276_f28_DefaultValue,
	&t1276_f29_DefaultValue,
	&t1276_f30_DefaultValue,
	&t1276_f31_DefaultValue,
	NULL
};
static Il2CppMethodReference t1276_VT[] =
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
static bool t1276_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1276_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1276_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1276__CustomAttributeCache = {
1,
NULL,
&t1276_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1276_0_0_0;
extern Il2CppType t1276_1_0_0;
extern CustomAttributesCache t1276__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1276_DM = 
{
	NULL, NULL, NULL, t1276_IOs, &t8_0_0_0, t1276_VT, t1276_VTIGM, NULL};
TypeInfo t1276_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UnicodeCategory", "System.Globalization", t1276_MIs, NULL, t1276_FIs, NULL, &t125_TI, NULL, &t1276__CustomAttributeCache, &t1276_0_0_0, &t1276_1_0_0, &t1276_DM, NULL, NULL, NULL, t1276_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1276)+ sizeof (Il2CppObject), sizeof (t1276)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 31, 0, 0, 23, 0, 3};
#include "t1702.h"
// Metadata Definition System.IO.IsolatedStorage.IsolatedStorageException
extern TypeInfo t1702_TI;
#include "t1702MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8750_MI = 
{
	".ctor", (methodPointerType)&m8750, &t1702_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2522, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1702_m8751_ParameterInfos[] = 
{
	{"message", 0, 134220972, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8751_MI = 
{
	".ctor", (methodPointerType)&m8751, &t1702_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1702_m8751_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2523, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1702_m8752_ParameterInfos[] = 
{
	{"info", 0, 134220973, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134220974, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m8752_MI = 
{
	".ctor", (methodPointerType)&m8752, &t1702_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1702_m8752_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2524, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1702_MIs[] =
{
	&m8750_MI,
	&m8751_MI,
	&m8752_MI,
	NULL
};
extern MethodInfo m4472_MI;
extern MethodInfo m4473_MI;
extern MethodInfo m4219_MI;
extern MethodInfo m1083_MI;
extern MethodInfo m4474_MI;
extern MethodInfo m4417_MI;
extern MethodInfo m4418_MI;
static Il2CppMethodReference t1702_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4472_MI,
	&m4473_MI,
	&m4219_MI,
	&m1083_MI,
	&m4474_MI,
	&m4417_MI,
	&m4473_MI,
	&m4418_MI,
};
static bool t1702_VTIGM[] =
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
extern Il2CppType t616_0_0_0;
extern Il2CppType t941_0_0_0;
static Il2CppInterfaceOffsetPair t1702_IOs[] = 
{
	{ &t616_0_0_0, 4},
	{ &t941_0_0_0, 5},
};
void t1702_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1702__CustomAttributeCache = {
1,
NULL,
&t1702_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1702_0_0_0;
extern Il2CppType t1702_1_0_0;
struct t1702;
extern CustomAttributesCache t1702__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1702_DM = 
{
	NULL, NULL, NULL, t1702_IOs, &t138_0_0_0, t1702_VT, t1702_VTIGM, NULL};
TypeInfo t1702_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IsolatedStorageException", "System.IO.IsolatedStorage", t1702_MIs, NULL, NULL, NULL, &t1702_TI, NULL, &t1702__CustomAttributeCache, &t1702_0_0_0, &t1702_1_0_0, &t1702_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1702), sizeof (t1702), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1703.h"
// Metadata Definition System.IO.BinaryReader
extern TypeInfo t1703_TI;
#include "t1703MD.h"
extern Il2CppType t291_0_0_0;
extern Il2CppType t291_0_0_0;
static ParameterInfo t1703_m8753_ParameterInfos[] = 
{
	{"input", 0, 134220975, &EmptyCustomAttributesCache, &t291_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8753_MI = 
{
	".ctor", (methodPointerType)&m8753, &t1703_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1703_m8753_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2525, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t291_0_0_0;
extern Il2CppType t722_0_0_0;
extern Il2CppType t722_0_0_0;
static ParameterInfo t1703_m8754_ParameterInfos[] = 
{
	{"input", 0, 134220976, &EmptyCustomAttributesCache, &t291_0_0_0},
	{"encoding", 1, 134220977, &EmptyCustomAttributesCache, &t722_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8754_MI = 
{
	".ctor", (methodPointerType)&m8754, &t1703_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1703_m8754_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2526, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8755_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m8755, &t1703_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 2527, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1703_m8756_ParameterInfos[] = 
{
	{"disposing", 0, 134220978, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8756_MI = 
{
	"Dispose", (methodPointerType)&m8756, &t1703_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1703_m8756_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 5, 1, false, false, 2528, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1703_m8757_ParameterInfos[] = 
{
	{"numBytes", 0, 134220979, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8757_MI = 
{
	"FillBuffer", (methodPointerType)&m8757, &t1703_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1703_m8757_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 6, 1, false, false, 2529, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8758_MI = 
{
	"Read", (methodPointerType)&m8758, &t1703_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2530, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1703_m8759_ParameterInfos[] = 
{
	{"buffer", 0, 134220980, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"index", 1, 134220981, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220982, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8759_MI = 
{
	"Read", (methodPointerType)&m8759, &t1703_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1703_m8759_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 3, false, false, 2531, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1703_m8760_ParameterInfos[] = 
{
	{"buffer", 0, 134220983, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"index", 1, 134220984, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220985, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8760_MI = 
{
	"Read", (methodPointerType)&m8760, &t1703_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1703_m8760_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 3, false, false, 2532, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_1_0_2;
static ParameterInfo t1703_m8761_ParameterInfos[] = 
{
	{"buffer", 0, 134220986, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"index", 1, 134220987, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220988, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes_read", 3, 134220989, &EmptyCustomAttributesCache, &t125_1_0_2},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t329 (MethodInfo* method, void* obj, void** args);
MethodInfo m8761_MI = 
{
	"ReadCharBytes", (methodPointerType)&m8761, &t1703_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t329, t1703_m8761_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 2533, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8762_MI = 
{
	"Read7BitEncodedInt", (methodPointerType)&m8762, &t1703_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 132, 0, 255, 0, false, false, 2534, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8763_MI = 
{
	"ReadBoolean", (methodPointerType)&m8763, &t1703_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 454, 0, 10, 0, false, false, 2535, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t568_0_0_0;
extern void* RuntimeInvoker_t568 (MethodInfo* method, void* obj, void** args);
MethodInfo m8764_MI = 
{
	"ReadByte", (methodPointerType)&m8764, &t1703_TI, &t568_0_0_0, RuntimeInvoker_t568, NULL, &EmptyCustomAttributesCache, 454, 0, 11, 0, false, false, 2536, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern void* RuntimeInvoker_t296 (MethodInfo* method, void* obj, void** args);
MethodInfo m8765_MI = 
{
	"ReadChar", (methodPointerType)&m8765, &t1703_TI, &t296_0_0_0, RuntimeInvoker_t296, NULL, &EmptyCustomAttributesCache, 454, 0, 12, 0, false, false, 2537, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t897_0_0_0;
extern void* RuntimeInvoker_t897 (MethodInfo* method, void* obj, void** args);
MethodInfo m8766_MI = 
{
	"ReadDecimal", (methodPointerType)&m8766, &t1703_TI, &t897_0_0_0, RuntimeInvoker_t897, NULL, &EmptyCustomAttributesCache, 454, 0, 13, 0, false, false, 2538, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t156_0_0_0;
extern void* RuntimeInvoker_t156 (MethodInfo* method, void* obj, void** args);
MethodInfo m8767_MI = 
{
	"ReadDouble", (methodPointerType)&m8767, &t1703_TI, &t156_0_0_0, RuntimeInvoker_t156, NULL, &EmptyCustomAttributesCache, 454, 0, 14, 0, false, false, 2539, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t327_0_0_0;
extern void* RuntimeInvoker_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m8768_MI = 
{
	"ReadInt16", (methodPointerType)&m8768, &t1703_TI, &t327_0_0_0, RuntimeInvoker_t327, NULL, &EmptyCustomAttributesCache, 454, 0, 15, 0, false, false, 2540, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8769_MI = 
{
	"ReadInt32", (methodPointerType)&m8769, &t1703_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 16, 0, false, false, 2541, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m8770_MI = 
{
	"ReadInt64", (methodPointerType)&m8770, &t1703_TI, &t292_0_0_0, RuntimeInvoker_t292, NULL, &EmptyCustomAttributesCache, 454, 0, 17, 0, false, false, 2542, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t186_0_0_0;
extern void* RuntimeInvoker_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1703__CustomAttributeCache_m8771;
MethodInfo m8771_MI = 
{
	"ReadSByte", (methodPointerType)&m8771, &t1703_TI, &t186_0_0_0, RuntimeInvoker_t186, NULL, &t1703__CustomAttributeCache_m8771, 454, 0, 18, 0, false, false, 2543, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8772_MI = 
{
	"ReadString", (methodPointerType)&m8772, &t1703_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 19, 0, false, false, 2544, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m8773_MI = 
{
	"ReadSingle", (methodPointerType)&m8773, &t1703_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 454, 0, 20, 0, false, false, 2545, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t302_0_0_0;
extern void* RuntimeInvoker_t302 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1703__CustomAttributeCache_m8774;
MethodInfo m8774_MI = 
{
	"ReadUInt16", (methodPointerType)&m8774, &t1703_TI, &t302_0_0_0, RuntimeInvoker_t302, NULL, &t1703__CustomAttributeCache_m8774, 454, 0, 21, 0, false, false, 2546, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1703__CustomAttributeCache_m8775;
MethodInfo m8775_MI = 
{
	"ReadUInt32", (methodPointerType)&m8775, &t1703_TI, &t168_0_0_0, RuntimeInvoker_t168, NULL, &t1703__CustomAttributeCache_m8775, 454, 0, 22, 0, false, false, 2547, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
extern void* RuntimeInvoker_t882 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1703__CustomAttributeCache_m8776;
MethodInfo m8776_MI = 
{
	"ReadUInt64", (methodPointerType)&m8776, &t1703_TI, &t882_0_0_0, RuntimeInvoker_t882, NULL, &t1703__CustomAttributeCache_m8776, 454, 0, 23, 0, false, false, 2548, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1703_m8777_ParameterInfos[] = 
{
	{"length", 0, 134220990, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8777_MI = 
{
	"CheckBuffer", (methodPointerType)&m8777, &t1703_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1703_m8777_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2549, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1703_MIs[] =
{
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
extern Il2CppType t291_0_0_1;
FieldInfo t1703_f0_FieldInfo = 
{
	"m_stream", &t291_0_0_1, &t1703_TI, offsetof(t1703, f0), &EmptyCustomAttributesCache};
extern Il2CppType t722_0_0_1;
FieldInfo t1703_f1_FieldInfo = 
{
	"m_encoding", &t722_0_0_1, &t1703_TI, offsetof(t1703, f1), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t1703_f2_FieldInfo = 
{
	"m_buffer", &t723_0_0_1, &t1703_TI, offsetof(t1703, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1704_0_0_1;
FieldInfo t1703_f3_FieldInfo = 
{
	"decoder", &t1704_0_0_1, &t1703_TI, offsetof(t1703, f3), &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_1;
FieldInfo t1703_f4_FieldInfo = 
{
	"charBuffer", &t305_0_0_1, &t1703_TI, offsetof(t1703, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1703_f5_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t1703_TI, offsetof(t1703, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1703_FIs[] =
{
	&t1703_f0_FieldInfo,
	&t1703_f1_FieldInfo,
	&t1703_f2_FieldInfo,
	&t1703_f3_FieldInfo,
	&t1703_f4_FieldInfo,
	&t1703_f5_FieldInfo,
	NULL
};
extern MethodInfo m8755_MI;
extern MethodInfo m8756_MI;
extern MethodInfo m8757_MI;
extern MethodInfo m8758_MI;
extern MethodInfo m8759_MI;
extern MethodInfo m8760_MI;
extern MethodInfo m8763_MI;
extern MethodInfo m8764_MI;
extern MethodInfo m8765_MI;
extern MethodInfo m8766_MI;
extern MethodInfo m8767_MI;
extern MethodInfo m8768_MI;
extern MethodInfo m8769_MI;
extern MethodInfo m8770_MI;
extern MethodInfo m8771_MI;
extern MethodInfo m8772_MI;
extern MethodInfo m8773_MI;
extern MethodInfo m8774_MI;
extern MethodInfo m8775_MI;
extern MethodInfo m8776_MI;
static Il2CppMethodReference t1703_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8755_MI,
	&m8756_MI,
	&m8757_MI,
	&m8758_MI,
	&m8759_MI,
	&m8760_MI,
	&m8763_MI,
	&m8764_MI,
	&m8765_MI,
	&m8766_MI,
	&m8767_MI,
	&m8768_MI,
	&m8769_MI,
	&m8770_MI,
	&m8771_MI,
	&m8772_MI,
	&m8773_MI,
	&m8774_MI,
	&m8775_MI,
	&m8776_MI,
};
static bool t1703_VTIGM[] =
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
static const Il2CppType* t1703_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1703_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1703_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1143_TI;
#include "t1143.h"
#include "t1143MD.h"
extern MethodInfo m4773_MI;
void t1703_CustomAttributesCacheGenerator_m8771(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1143 * tmp;
		tmp = (t1143 *)il2cpp_codegen_object_new (&t1143_TI);
		m4773(tmp, false, &m4773_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1703_CustomAttributesCacheGenerator_m8774(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1143 * tmp;
		tmp = (t1143 *)il2cpp_codegen_object_new (&t1143_TI);
		m4773(tmp, false, &m4773_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1703_CustomAttributesCacheGenerator_m8775(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1143 * tmp;
		tmp = (t1143 *)il2cpp_codegen_object_new (&t1143_TI);
		m4773(tmp, false, &m4773_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1703_CustomAttributesCacheGenerator_m8776(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1143 * tmp;
		tmp = (t1143 *)il2cpp_codegen_object_new (&t1143_TI);
		m4773(tmp, false, &m4773_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1703__CustomAttributeCache = {
1,
NULL,
&t1703_CustomAttributesCacheGenerator
};
CustomAttributesCache t1703__CustomAttributeCache_m8771 = {
1,
NULL,
&t1703_CustomAttributesCacheGenerator_m8771
};
CustomAttributesCache t1703__CustomAttributeCache_m8774 = {
1,
NULL,
&t1703_CustomAttributesCacheGenerator_m8774
};
CustomAttributesCache t1703__CustomAttributeCache_m8775 = {
1,
NULL,
&t1703_CustomAttributesCacheGenerator_m8775
};
CustomAttributesCache t1703__CustomAttributeCache_m8776 = {
1,
NULL,
&t1703_CustomAttributesCacheGenerator_m8776
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1703_0_0_0;
extern Il2CppType t1703_1_0_0;
struct t1703;
extern CustomAttributesCache t1703__CustomAttributeCache;
extern CustomAttributesCache t1703__CustomAttributeCache_m8771;
extern CustomAttributesCache t1703__CustomAttributeCache_m8774;
extern CustomAttributesCache t1703__CustomAttributeCache_m8775;
extern CustomAttributesCache t1703__CustomAttributeCache_m8776;
const Il2CppTypeDefinitionMetadata t1703_DM = 
{
	NULL, NULL, t1703_ITIs, t1703_IOs, &t9_0_0_0, t1703_VT, t1703_VTIGM, NULL};
TypeInfo t1703_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryReader", "System.IO", t1703_MIs, NULL, t1703_FIs, NULL, &t1703_TI, NULL, &t1703__CustomAttributeCache, &t1703_0_0_0, &t1703_1_0_0, &t1703_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1703), sizeof (t1703), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 25, 0, 6, 0, 0, 24, 1, 1};
#include "t1705.h"
// Metadata Definition System.IO.BinaryWriter
extern TypeInfo t1705_TI;
#include "t1705MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8778_MI = 
{
	".ctor", (methodPointerType)&m8778, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2550, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t291_0_0_0;
static ParameterInfo t1705_m8779_ParameterInfos[] = 
{
	{"output", 0, 134220991, &EmptyCustomAttributesCache, &t291_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8779_MI = 
{
	".ctor", (methodPointerType)&m8779, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1705_m8779_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2551, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t291_0_0_0;
extern Il2CppType t722_0_0_0;
static ParameterInfo t1705_m8780_ParameterInfos[] = 
{
	{"output", 0, 134220992, &EmptyCustomAttributesCache, &t291_0_0_0},
	{"encoding", 1, 134220993, &EmptyCustomAttributesCache, &t722_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8780_MI = 
{
	".ctor", (methodPointerType)&m8780, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1705_m8780_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2552, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8781_MI = 
{
	".cctor", (methodPointerType)&m8781, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2553, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8782_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m8782, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 2554, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1705_m8783_ParameterInfos[] = 
{
	{"disposing", 0, 134220994, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8783_MI = 
{
	"Dispose", (methodPointerType)&m8783, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1705_m8783_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 5, 1, false, false, 2555, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8784_MI = 
{
	"Flush", (methodPointerType)&m8784, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 2556, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1705_m8785_ParameterInfos[] = 
{
	{"value", 0, 134220995, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8785_MI = 
{
	"Write", (methodPointerType)&m8785, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1705_m8785_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 1, false, false, 2557, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t568_0_0_0;
extern Il2CppType t568_0_0_0;
static ParameterInfo t1705_m8786_ParameterInfos[] = 
{
	{"value", 0, 134220996, &EmptyCustomAttributesCache, &t568_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8786_MI = 
{
	"Write", (methodPointerType)&m8786, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1705_m8786_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 1, false, false, 2558, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1705_m8787_ParameterInfos[] = 
{
	{"buffer", 0, 134220997, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8787_MI = 
{
	"Write", (methodPointerType)&m8787, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1705_m8787_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 1, false, false, 2559, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1705_m8788_ParameterInfos[] = 
{
	{"buffer", 0, 134220998, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"index", 1, 134220999, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221000, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8788_MI = 
{
	"Write", (methodPointerType)&m8788, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1705_m8788_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 3, false, false, 2560, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
static ParameterInfo t1705_m8789_ParameterInfos[] = 
{
	{"ch", 0, 134221001, &EmptyCustomAttributesCache, &t296_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m8789_MI = 
{
	"Write", (methodPointerType)&m8789, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t327, t1705_m8789_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 1, false, false, 2561, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1705_m8790_ParameterInfos[] = 
{
	{"chars", 0, 134221002, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8790_MI = 
{
	"Write", (methodPointerType)&m8790, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1705_m8790_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 12, 1, false, false, 2562, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t897_0_0_0;
extern Il2CppType t897_0_0_0;
static ParameterInfo t1705_m8791_ParameterInfos[] = 
{
	{"value", 0, 134221003, &EmptyCustomAttributesCache, &t897_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t897 (MethodInfo* method, void* obj, void** args);
MethodInfo m8791_MI = 
{
	"Write", (methodPointerType)&m8791, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t897, t1705_m8791_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 1, false, false, 2563, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t156_0_0_0;
extern Il2CppType t156_0_0_0;
static ParameterInfo t1705_m8792_ParameterInfos[] = 
{
	{"value", 0, 134221004, &EmptyCustomAttributesCache, &t156_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t156 (MethodInfo* method, void* obj, void** args);
MethodInfo m8792_MI = 
{
	"Write", (methodPointerType)&m8792, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t156, t1705_m8792_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 1, false, false, 2564, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t327_0_0_0;
extern Il2CppType t327_0_0_0;
static ParameterInfo t1705_m8793_ParameterInfos[] = 
{
	{"value", 0, 134221005, &EmptyCustomAttributesCache, &t327_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m8793_MI = 
{
	"Write", (methodPointerType)&m8793, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t327, t1705_m8793_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 15, 1, false, false, 2565, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1705_m8794_ParameterInfos[] = 
{
	{"value", 0, 134221006, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8794_MI = 
{
	"Write", (methodPointerType)&m8794, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1705_m8794_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 16, 1, false, false, 2566, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern Il2CppType t292_0_0_0;
static ParameterInfo t1705_m8795_ParameterInfos[] = 
{
	{"value", 0, 134221007, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m8795_MI = 
{
	"Write", (methodPointerType)&m8795, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t292, t1705_m8795_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 17, 1, false, false, 2567, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t186_0_0_0;
extern Il2CppType t186_0_0_0;
static ParameterInfo t1705_m8796_ParameterInfos[] = 
{
	{"value", 0, 134221008, &EmptyCustomAttributesCache, &t186_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1705__CustomAttributeCache_m8796;
MethodInfo m8796_MI = 
{
	"Write", (methodPointerType)&m8796, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1705_m8796_ParameterInfos, &t1705__CustomAttributeCache_m8796, 454, 0, 18, 1, false, false, 2568, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t1705_m8797_ParameterInfos[] = 
{
	{"value", 0, 134221009, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m8797_MI = 
{
	"Write", (methodPointerType)&m8797, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t123, t1705_m8797_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 19, 1, false, false, 2569, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1705_m8798_ParameterInfos[] = 
{
	{"value", 0, 134221010, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8798_MI = 
{
	"Write", (methodPointerType)&m8798, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1705_m8798_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 20, 1, false, false, 2570, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t302_0_0_0;
extern Il2CppType t302_0_0_0;
static ParameterInfo t1705_m8799_ParameterInfos[] = 
{
	{"value", 0, 134221011, &EmptyCustomAttributesCache, &t302_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t327 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1705__CustomAttributeCache_m8799;
MethodInfo m8799_MI = 
{
	"Write", (methodPointerType)&m8799, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t327, t1705_m8799_ParameterInfos, &t1705__CustomAttributeCache_m8799, 454, 0, 21, 1, false, false, 2571, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1705_m8800_ParameterInfos[] = 
{
	{"value", 0, 134221012, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1705__CustomAttributeCache_m8800;
MethodInfo m8800_MI = 
{
	"Write", (methodPointerType)&m8800, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1705_m8800_ParameterInfos, &t1705__CustomAttributeCache_m8800, 454, 0, 22, 1, false, false, 2572, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t882_0_0_0;
extern Il2CppType t882_0_0_0;
static ParameterInfo t1705_m8801_ParameterInfos[] = 
{
	{"value", 0, 134221013, &EmptyCustomAttributesCache, &t882_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1705__CustomAttributeCache_m8801;
MethodInfo m8801_MI = 
{
	"Write", (methodPointerType)&m8801, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t292, t1705_m8801_ParameterInfos, &t1705__CustomAttributeCache_m8801, 454, 0, 23, 1, false, false, 2573, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1705_m8802_ParameterInfos[] = 
{
	{"value", 0, 134221014, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8802_MI = 
{
	"Write7BitEncodedInt", (methodPointerType)&m8802, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1705_m8802_ParameterInfos, &EmptyCustomAttributesCache, 132, 0, 255, 1, false, false, 2574, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1705_MIs[] =
{
	&m8778_MI,
	&m8779_MI,
	&m8780_MI,
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
	NULL
};
extern Il2CppType t1705_0_0_54;
FieldInfo t1705_f0_FieldInfo = 
{
	"Null", &t1705_0_0_54, &t1705_TI, offsetof(t1705_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t291_0_0_4;
FieldInfo t1705_f1_FieldInfo = 
{
	"OutStream", &t291_0_0_4, &t1705_TI, offsetof(t1705, f1), &EmptyCustomAttributesCache};
extern Il2CppType t722_0_0_1;
FieldInfo t1705_f2_FieldInfo = 
{
	"m_encoding", &t722_0_0_1, &t1705_TI, offsetof(t1705, f2), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t1705_f3_FieldInfo = 
{
	"buffer", &t723_0_0_1, &t1705_TI, offsetof(t1705, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1705_f4_FieldInfo = 
{
	"disposed", &t124_0_0_1, &t1705_TI, offsetof(t1705, f4), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t1705_f5_FieldInfo = 
{
	"stringBuffer", &t723_0_0_1, &t1705_TI, offsetof(t1705, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1705_f6_FieldInfo = 
{
	"maxCharsPerRound", &t125_0_0_1, &t1705_TI, offsetof(t1705, f6), &EmptyCustomAttributesCache};
static FieldInfo* t1705_FIs[] =
{
	&t1705_f0_FieldInfo,
	&t1705_f1_FieldInfo,
	&t1705_f2_FieldInfo,
	&t1705_f3_FieldInfo,
	&t1705_f4_FieldInfo,
	&t1705_f5_FieldInfo,
	&t1705_f6_FieldInfo,
	NULL
};
extern MethodInfo m8782_MI;
extern MethodInfo m8783_MI;
extern MethodInfo m8784_MI;
extern MethodInfo m8785_MI;
extern MethodInfo m8786_MI;
extern MethodInfo m8787_MI;
extern MethodInfo m8788_MI;
extern MethodInfo m8789_MI;
extern MethodInfo m8790_MI;
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
static Il2CppMethodReference t1705_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
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
};
static bool t1705_VTIGM[] =
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
static const Il2CppType* t1705_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1705_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1705_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1705_CustomAttributesCacheGenerator_m8796(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1143 * tmp;
		tmp = (t1143 *)il2cpp_codegen_object_new (&t1143_TI);
		m4773(tmp, false, &m4773_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1705_CustomAttributesCacheGenerator_m8799(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1143 * tmp;
		tmp = (t1143 *)il2cpp_codegen_object_new (&t1143_TI);
		m4773(tmp, false, &m4773_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1705_CustomAttributesCacheGenerator_m8800(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1143 * tmp;
		tmp = (t1143 *)il2cpp_codegen_object_new (&t1143_TI);
		m4773(tmp, false, &m4773_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1705_CustomAttributesCacheGenerator_m8801(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1143 * tmp;
		tmp = (t1143 *)il2cpp_codegen_object_new (&t1143_TI);
		m4773(tmp, false, &m4773_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1705__CustomAttributeCache = {
1,
NULL,
&t1705_CustomAttributesCacheGenerator
};
CustomAttributesCache t1705__CustomAttributeCache_m8796 = {
1,
NULL,
&t1705_CustomAttributesCacheGenerator_m8796
};
CustomAttributesCache t1705__CustomAttributeCache_m8799 = {
1,
NULL,
&t1705_CustomAttributesCacheGenerator_m8799
};
CustomAttributesCache t1705__CustomAttributeCache_m8800 = {
1,
NULL,
&t1705_CustomAttributesCacheGenerator_m8800
};
CustomAttributesCache t1705__CustomAttributeCache_m8801 = {
1,
NULL,
&t1705_CustomAttributesCacheGenerator_m8801
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1705_0_0_0;
extern Il2CppType t1705_1_0_0;
struct t1705;
extern CustomAttributesCache t1705__CustomAttributeCache;
extern CustomAttributesCache t1705__CustomAttributeCache_m8796;
extern CustomAttributesCache t1705__CustomAttributeCache_m8799;
extern CustomAttributesCache t1705__CustomAttributeCache_m8800;
extern CustomAttributesCache t1705__CustomAttributeCache_m8801;
const Il2CppTypeDefinitionMetadata t1705_DM = 
{
	NULL, NULL, t1705_ITIs, t1705_IOs, &t9_0_0_0, t1705_VT, t1705_VTIGM, NULL};
TypeInfo t1705_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryWriter", "System.IO", t1705_MIs, NULL, t1705_FIs, NULL, &t1705_TI, NULL, &t1705__CustomAttributeCache, &t1705_0_0_0, &t1705_1_0_0, &t1705_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1705), sizeof (t1705), 0, -1, sizeof(t1705_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 25, 0, 7, 0, 0, 24, 1, 1};
#include "t1529.h"
// Metadata Definition System.IO.Directory
extern TypeInfo t1529_TI;
#include "t1529MD.h"
extern Il2CppType t2_0_0_0;
static ParameterInfo t1529_m6921_ParameterInfos[] = 
{
	{"path", 0, 134221015, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1528_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6921_MI = 
{
	"CreateDirectory", (methodPointerType)&m6921, &t1529_TI, &t1528_0_0_0, RuntimeInvoker_t9_t9, t1529_m6921_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2575, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1529_m8803_ParameterInfos[] = 
{
	{"path", 0, 134221016, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1528_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8803_MI = 
{
	"CreateDirectoriesInternal", (methodPointerType)&m8803, &t1529_TI, &t1528_0_0_0, RuntimeInvoker_t9_t9, t1529_m8803_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2576, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1529_m6920_ParameterInfos[] = 
{
	{"path", 0, 134221017, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6920_MI = 
{
	"Exists", (methodPointerType)&m6920, &t1529_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1529_m6920_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2577, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8804_MI = 
{
	"GetCurrentDirectory", (methodPointerType)&m8804, &t1529_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 2578, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1529_m6922_ParameterInfos[] = 
{
	{"path", 0, 134221018, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"searchPattern", 1, 134221019, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6922_MI = 
{
	"GetFiles", (methodPointerType)&m6922, &t1529_TI, &t221_0_0_0, RuntimeInvoker_t9_t9_t9, t1529_m6922_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2579, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1706_0_0_0;
extern Il2CppType t1706_0_0_0;
extern Il2CppType t1706_0_0_0;
static ParameterInfo t1529_m8805_ParameterInfos[] = 
{
	{"path", 0, 134221020, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"searchPattern", 1, 134221021, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mask", 2, 134221022, &EmptyCustomAttributesCache, &t1706_0_0_0},
	{"attrs", 3, 134221023, &EmptyCustomAttributesCache, &t1706_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8805_MI = 
{
	"GetFileSystemEntries", (methodPointerType)&m8805, &t1529_TI, &t221_0_0_0, RuntimeInvoker_t9_t9_t9_t125_t125, t1529_m8805_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 4, false, false, 2580, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1529_MIs[] =
{
	&m6921_MI,
	&m8803_MI,
	&m6920_MI,
	&m8804_MI,
	&m6922_MI,
	&m8805_MI,
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
void t1529_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1529__CustomAttributeCache = {
1,
NULL,
&t1529_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1529_0_0_0;
extern Il2CppType t1529_1_0_0;
struct t1529;
extern CustomAttributesCache t1529__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1529_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1529_VT, t1529_VTIGM, NULL};
TypeInfo t1529_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Directory", "System.IO", t1529_MIs, NULL, NULL, NULL, &t1529_TI, NULL, &t1529__CustomAttributeCache, &t1529_0_0_0, &t1529_1_0_0, &t1529_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1529), sizeof (t1529), 0, -1, 0, 0, -1, 1048961, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 0, 0, 0, 0, 4, 0, 0};
#include "t1528.h"
// Metadata Definition System.IO.DirectoryInfo
extern TypeInfo t1528_TI;
#include "t1528MD.h"
extern Il2CppType t2_0_0_0;
static ParameterInfo t1528_m8806_ParameterInfos[] = 
{
	{"path", 0, 134221024, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8806_MI = 
{
	".ctor", (methodPointerType)&m8806, &t1528_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1528_m8806_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2581, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1528_m8807_ParameterInfos[] = 
{
	{"path", 0, 134221025, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"simpleOriginalPath", 1, 134221026, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8807_MI = 
{
	".ctor", (methodPointerType)&m8807, &t1528_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1528_m8807_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 2582, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1528_m8808_ParameterInfos[] = 
{
	{"info", 0, 134221027, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134221028, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m8808_MI = 
{
	".ctor", (methodPointerType)&m8808, &t1528_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1528_m8808_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 2, false, false, 2583, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8809_MI = 
{
	"Initialize", (methodPointerType)&m8809, &t1528_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2584, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8810_MI = 
{
	"get_Exists", (methodPointerType)&m8810, &t1528_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2585, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1528_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8811_MI = 
{
	"get_Parent", (methodPointerType)&m8811, &t1528_TI, &t1528_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2586, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8812_MI = 
{
	"Create", (methodPointerType)&m8812, &t1528_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 2587, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8813_MI = 
{
	"ToString", (methodPointerType)&m8813, &t1528_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2588, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1528_MIs[] =
{
	&m8806_MI,
	&m8807_MI,
	&m8808_MI,
	&m8809_MI,
	&m8810_MI,
	&m8811_MI,
	&m8812_MI,
	&m8813_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1528_f5_FieldInfo = 
{
	"current", &t2_0_0_1, &t1528_TI, offsetof(t1528, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1528_f6_FieldInfo = 
{
	"parent", &t2_0_0_1, &t1528_TI, offsetof(t1528, f6), &EmptyCustomAttributesCache};
static FieldInfo* t1528_FIs[] =
{
	&t1528_f5_FieldInfo,
	&t1528_f6_FieldInfo,
	NULL
};
extern MethodInfo m8810_MI;
static PropertyInfo t1528____Exists_PropertyInfo = 
{
	&t1528_TI, "Exists", &m8810_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8811_MI;
static PropertyInfo t1528____Parent_PropertyInfo = 
{
	&t1528_TI, "Parent", &m8811_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1528_PIs[] =
{
	&t1528____Exists_PropertyInfo,
	&t1528____Parent_PropertyInfo,
	NULL
};
extern MethodInfo m8813_MI;
extern MethodInfo m6008_MI;
extern MethodInfo m6009_MI;
extern MethodInfo m8876_MI;
extern MethodInfo m8877_MI;
extern MethodInfo m8879_MI;
static Il2CppMethodReference t1528_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m8813_MI,
	&m6008_MI,
	&m6009_MI,
	&m8876_MI,
	&m8876_MI,
	&m8810_MI,
	&m8877_MI,
	&m8879_MI,
};
static bool t1528_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1528_IOs[] = 
{
	{ &t616_0_0_0, 6},
};
void t1528_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1528__CustomAttributeCache = {
1,
NULL,
&t1528_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1528_0_0_0;
extern Il2CppType t1528_1_0_0;
extern Il2CppType t1707_0_0_0;
struct t1528;
extern CustomAttributesCache t1528__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1528_DM = 
{
	NULL, NULL, NULL, t1528_IOs, &t1707_0_0_0, t1528_VT, t1528_VTIGM, NULL};
TypeInfo t1528_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DirectoryInfo", "System.IO", t1528_MIs, t1528_PIs, t1528_FIs, NULL, &t1528_TI, NULL, &t1528__CustomAttributeCache, &t1528_0_0_0, &t1528_1_0_0, &t1528_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1528), sizeof (t1528), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 2, 2, 0, 0, 11, 0, 1};
#include "t1708.h"
// Metadata Definition System.IO.DirectoryNotFoundException
extern TypeInfo t1708_TI;
#include "t1708MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8814_MI = 
{
	".ctor", (methodPointerType)&m8814, &t1708_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2589, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1708_m8815_ParameterInfos[] = 
{
	{"message", 0, 134221029, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8815_MI = 
{
	".ctor", (methodPointerType)&m8815, &t1708_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1708_m8815_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2590, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1708_m8816_ParameterInfos[] = 
{
	{"info", 0, 134221030, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134221031, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m8816_MI = 
{
	".ctor", (methodPointerType)&m8816, &t1708_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1708_m8816_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2591, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1708_MIs[] =
{
	&m8814_MI,
	&m8815_MI,
	&m8816_MI,
	NULL
};
static Il2CppMethodReference t1708_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4472_MI,
	&m4473_MI,
	&m4219_MI,
	&m1083_MI,
	&m4474_MI,
	&m4417_MI,
	&m4473_MI,
	&m4418_MI,
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
	{ &t616_0_0_0, 4},
	{ &t941_0_0_0, 5},
};
void t1708_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1708__CustomAttributeCache = {
1,
NULL,
&t1708_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1708_0_0_0;
extern Il2CppType t1708_1_0_0;
extern Il2CppType t1540_0_0_0;
struct t1708;
extern CustomAttributesCache t1708__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1708_DM = 
{
	NULL, NULL, NULL, t1708_IOs, &t1540_0_0_0, t1708_VT, t1708_VTIGM, NULL};
TypeInfo t1708_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DirectoryNotFoundException", "System.IO", t1708_MIs, NULL, NULL, NULL, &t1708_TI, NULL, &t1708__CustomAttributeCache, &t1708_0_0_0, &t1708_1_0_0, &t1708_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1708), sizeof (t1708), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1709.h"
// Metadata Definition System.IO.EndOfStreamException
extern TypeInfo t1709_TI;
#include "t1709MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8817_MI = 
{
	".ctor", (methodPointerType)&m8817, &t1709_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2592, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1709_m8818_ParameterInfos[] = 
{
	{"info", 0, 134221032, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134221033, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m8818_MI = 
{
	".ctor", (methodPointerType)&m8818, &t1709_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1709_m8818_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2593, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1709_MIs[] =
{
	&m8817_MI,
	&m8818_MI,
	NULL
};
static Il2CppMethodReference t1709_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4472_MI,
	&m4473_MI,
	&m4219_MI,
	&m1083_MI,
	&m4474_MI,
	&m4417_MI,
	&m4473_MI,
	&m4418_MI,
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
};
static Il2CppInterfaceOffsetPair t1709_IOs[] = 
{
	{ &t616_0_0_0, 4},
	{ &t941_0_0_0, 5},
};
void t1709_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1709__CustomAttributeCache = {
1,
NULL,
&t1709_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1709_0_0_0;
extern Il2CppType t1709_1_0_0;
struct t1709;
extern CustomAttributesCache t1709__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1709_DM = 
{
	NULL, NULL, NULL, t1709_IOs, &t1540_0_0_0, t1709_VT, t1709_VTIGM, NULL};
TypeInfo t1709_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EndOfStreamException", "System.IO", t1709_MIs, NULL, NULL, NULL, &t1709_TI, NULL, &t1709__CustomAttributeCache, &t1709_0_0_0, &t1709_1_0_0, &t1709_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1709), sizeof (t1709), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 11, 0, 2};
#include "t295.h"
// Metadata Definition System.IO.File
extern TypeInfo t295_TI;
#include "t295MD.h"
extern Il2CppType t2_0_0_0;
static ParameterInfo t295_m8819_ParameterInfos[] = 
{
	{"path", 0, 134221034, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8819_MI = 
{
	"Delete", (methodPointerType)&m8819, &t295_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t295_m8819_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2594, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t295_m1077_ParameterInfos[] = 
{
	{"path", 0, 134221035, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1077_MI = 
{
	"Exists", (methodPointerType)&m1077, &t295_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t295_m1077_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2595, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t290_0_0_0;
extern Il2CppType t290_0_0_0;
static ParameterInfo t295_m1079_ParameterInfos[] = 
{
	{"path", 0, 134221036, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221037, &EmptyCustomAttributesCache, &t290_0_0_0},
};
extern Il2CppType t289_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m1079_MI = 
{
	"Open", (methodPointerType)&m1079, &t295_TI, &t289_0_0_0, RuntimeInvoker_t9_t9_t125, t295_m1079_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2596, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t295_m6917_ParameterInfos[] = 
{
	{"path", 0, 134221038, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t289_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6917_MI = 
{
	"OpenRead", (methodPointerType)&m6917, &t295_TI, &t289_0_0_0, RuntimeInvoker_t9_t9, t295_m6917_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2597, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t295_m8820_ParameterInfos[] = 
{
	{"path", 0, 134221039, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1710_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8820_MI = 
{
	"OpenText", (methodPointerType)&m8820, &t295_TI, &t1710_0_0_0, RuntimeInvoker_t9_t9, t295_m8820_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2598, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t295_MIs[] =
{
	&m8819_MI,
	&m1077_MI,
	&m1079_MI,
	&m6917_MI,
	&m8820_MI,
	NULL
};
static Il2CppMethodReference t295_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t295_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t295_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t295__CustomAttributeCache = {
1,
NULL,
&t295_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t295_0_0_0;
extern Il2CppType t295_1_0_0;
struct t295;
extern CustomAttributesCache t295__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t295_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t295_VT, t295_VTIGM, NULL};
TypeInfo t295_TI = 
{
	&g_mscorlib_dll_Image, NULL, "File", "System.IO", t295_MIs, NULL, NULL, NULL, &t295_TI, NULL, &t295__CustomAttributeCache, &t295_0_0_0, &t295_1_0_0, &t295_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t295), sizeof (t295), 0, -1, 0, 0, -1, 1048961, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 4, 0, 0};
#include "t1178.h"
// Metadata Definition System.IO.FileAccess
extern TypeInfo t1178_TI;
#include "t1178MD.h"
static MethodInfo* t1178_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1178_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1178_TI, offsetof(t1178, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1178_0_0_32854;
FieldInfo t1178_f2_FieldInfo = 
{
	"Read", &t1178_0_0_32854, &t1178_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1178_0_0_32854;
FieldInfo t1178_f3_FieldInfo = 
{
	"Write", &t1178_0_0_32854, &t1178_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1178_0_0_32854;
FieldInfo t1178_f4_FieldInfo = 
{
	"ReadWrite", &t1178_0_0_32854, &t1178_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1178_FIs[] =
{
	&t1178_f1_FieldInfo,
	&t1178_f2_FieldInfo,
	&t1178_f3_FieldInfo,
	&t1178_f4_FieldInfo,
	NULL
};
static const int32_t t1178_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1178_f2_DefaultValue = 
{
	&t1178_f2_FieldInfo, { (char*)&t1178_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1178_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1178_f3_DefaultValue = 
{
	&t1178_f3_FieldInfo, { (char*)&t1178_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1178_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1178_f4_DefaultValue = 
{
	&t1178_f4_FieldInfo, { (char*)&t1178_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1178_FDVs[] = 
{
	&t1178_f2_DefaultValue,
	&t1178_f3_DefaultValue,
	&t1178_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t1178_VT[] =
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
static bool t1178_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1178_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1178_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t608 * tmp;
		tmp = (t608 *)il2cpp_codegen_object_new (&t608_TI);
		m2967(tmp, &m2967_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1178__CustomAttributeCache = {
2,
NULL,
&t1178_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1178_0_0_0;
extern Il2CppType t1178_1_0_0;
extern CustomAttributesCache t1178__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1178_DM = 
{
	NULL, NULL, NULL, t1178_IOs, &t8_0_0_0, t1178_VT, t1178_VTIGM, NULL};
TypeInfo t1178_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileAccess", "System.IO", t1178_MIs, NULL, t1178_FIs, NULL, &t125_TI, NULL, &t1178__CustomAttributeCache, &t1178_0_0_0, &t1178_1_0_0, &t1178_DM, NULL, NULL, NULL, t1178_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1178)+ sizeof (Il2CppObject), sizeof (t1178)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1706.h"
// Metadata Definition System.IO.FileAttributes
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
	"Archive", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f3_FieldInfo = 
{
	"Compressed", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f4_FieldInfo = 
{
	"Device", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f5_FieldInfo = 
{
	"Directory", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f6_FieldInfo = 
{
	"Encrypted", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f7_FieldInfo = 
{
	"Hidden", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f8_FieldInfo = 
{
	"Normal", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f9_FieldInfo = 
{
	"NotContentIndexed", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f10_FieldInfo = 
{
	"Offline", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f11_FieldInfo = 
{
	"ReadOnly", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f12_FieldInfo = 
{
	"ReparsePoint", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f13_FieldInfo = 
{
	"SparseFile", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f14_FieldInfo = 
{
	"System", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_32854;
FieldInfo t1706_f15_FieldInfo = 
{
	"Temporary", &t1706_0_0_32854, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1706_FIs[] =
{
	&t1706_f1_FieldInfo,
	&t1706_f2_FieldInfo,
	&t1706_f3_FieldInfo,
	&t1706_f4_FieldInfo,
	&t1706_f5_FieldInfo,
	&t1706_f6_FieldInfo,
	&t1706_f7_FieldInfo,
	&t1706_f8_FieldInfo,
	&t1706_f9_FieldInfo,
	&t1706_f10_FieldInfo,
	&t1706_f11_FieldInfo,
	&t1706_f12_FieldInfo,
	&t1706_f13_FieldInfo,
	&t1706_f14_FieldInfo,
	&t1706_f15_FieldInfo,
	NULL
};
static const int32_t t1706_f2_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1706_f2_DefaultValue = 
{
	&t1706_f2_FieldInfo, { (char*)&t1706_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f3_DefaultValueData = 2048;
static Il2CppFieldDefaultValueEntry t1706_f3_DefaultValue = 
{
	&t1706_f3_FieldInfo, { (char*)&t1706_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f4_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1706_f4_DefaultValue = 
{
	&t1706_f4_FieldInfo, { (char*)&t1706_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f5_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1706_f5_DefaultValue = 
{
	&t1706_f5_FieldInfo, { (char*)&t1706_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f6_DefaultValueData = 16384;
static Il2CppFieldDefaultValueEntry t1706_f6_DefaultValue = 
{
	&t1706_f6_FieldInfo, { (char*)&t1706_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f7_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1706_f7_DefaultValue = 
{
	&t1706_f7_FieldInfo, { (char*)&t1706_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f8_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1706_f8_DefaultValue = 
{
	&t1706_f8_FieldInfo, { (char*)&t1706_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f9_DefaultValueData = 8192;
static Il2CppFieldDefaultValueEntry t1706_f9_DefaultValue = 
{
	&t1706_f9_FieldInfo, { (char*)&t1706_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f10_DefaultValueData = 4096;
static Il2CppFieldDefaultValueEntry t1706_f10_DefaultValue = 
{
	&t1706_f10_FieldInfo, { (char*)&t1706_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f11_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1706_f11_DefaultValue = 
{
	&t1706_f11_FieldInfo, { (char*)&t1706_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f12_DefaultValueData = 1024;
static Il2CppFieldDefaultValueEntry t1706_f12_DefaultValue = 
{
	&t1706_f12_FieldInfo, { (char*)&t1706_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f13_DefaultValueData = 512;
static Il2CppFieldDefaultValueEntry t1706_f13_DefaultValue = 
{
	&t1706_f13_FieldInfo, { (char*)&t1706_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f14_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1706_f14_DefaultValue = 
{
	&t1706_f14_FieldInfo, { (char*)&t1706_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1706_f15_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t1706_f15_DefaultValue = 
{
	&t1706_f15_FieldInfo, { (char*)&t1706_f15_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1706_FDVs[] = 
{
	&t1706_f2_DefaultValue,
	&t1706_f3_DefaultValue,
	&t1706_f4_DefaultValue,
	&t1706_f5_DefaultValue,
	&t1706_f6_DefaultValue,
	&t1706_f7_DefaultValue,
	&t1706_f8_DefaultValue,
	&t1706_f9_DefaultValue,
	&t1706_f10_DefaultValue,
	&t1706_f11_DefaultValue,
	&t1706_f12_DefaultValue,
	&t1706_f13_DefaultValue,
	&t1706_f14_DefaultValue,
	&t1706_f15_DefaultValue,
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
		t608 * tmp;
		tmp = (t608 *)il2cpp_codegen_object_new (&t608_TI);
		m2967(tmp, &m2967_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1706__CustomAttributeCache = {
2,
NULL,
&t1706_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1706_1_0_0;
extern CustomAttributesCache t1706__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1706_DM = 
{
	NULL, NULL, NULL, t1706_IOs, &t8_0_0_0, t1706_VT, t1706_VTIGM, NULL};
TypeInfo t1706_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileAttributes", "System.IO", t1706_MIs, NULL, t1706_FIs, NULL, &t125_TI, NULL, &t1706__CustomAttributeCache, &t1706_0_0_0, &t1706_1_0_0, &t1706_DM, NULL, NULL, NULL, t1706_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1706)+ sizeof (Il2CppObject), sizeof (t1706)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 15, 0, 0, 23, 0, 3};
#include "t290.h"
// Metadata Definition System.IO.FileMode
extern TypeInfo t290_TI;
#include "t290MD.h"
static MethodInfo* t290_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t290_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t290_TI, offsetof(t290, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t290_0_0_32854;
FieldInfo t290_f2_FieldInfo = 
{
	"CreateNew", &t290_0_0_32854, &t290_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t290_0_0_32854;
FieldInfo t290_f3_FieldInfo = 
{
	"Create", &t290_0_0_32854, &t290_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t290_0_0_32854;
FieldInfo t290_f4_FieldInfo = 
{
	"Open", &t290_0_0_32854, &t290_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t290_0_0_32854;
FieldInfo t290_f5_FieldInfo = 
{
	"OpenOrCreate", &t290_0_0_32854, &t290_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t290_0_0_32854;
FieldInfo t290_f6_FieldInfo = 
{
	"Truncate", &t290_0_0_32854, &t290_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t290_0_0_32854;
FieldInfo t290_f7_FieldInfo = 
{
	"Append", &t290_0_0_32854, &t290_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t290_FIs[] =
{
	&t290_f1_FieldInfo,
	&t290_f2_FieldInfo,
	&t290_f3_FieldInfo,
	&t290_f4_FieldInfo,
	&t290_f5_FieldInfo,
	&t290_f6_FieldInfo,
	&t290_f7_FieldInfo,
	NULL
};
static const int32_t t290_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t290_f2_DefaultValue = 
{
	&t290_f2_FieldInfo, { (char*)&t290_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t290_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t290_f3_DefaultValue = 
{
	&t290_f3_FieldInfo, { (char*)&t290_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t290_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t290_f4_DefaultValue = 
{
	&t290_f4_FieldInfo, { (char*)&t290_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t290_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t290_f5_DefaultValue = 
{
	&t290_f5_FieldInfo, { (char*)&t290_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t290_f6_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t290_f6_DefaultValue = 
{
	&t290_f6_FieldInfo, { (char*)&t290_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t290_f7_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t290_f7_DefaultValue = 
{
	&t290_f7_FieldInfo, { (char*)&t290_f7_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t290_FDVs[] = 
{
	&t290_f2_DefaultValue,
	&t290_f3_DefaultValue,
	&t290_f4_DefaultValue,
	&t290_f5_DefaultValue,
	&t290_f6_DefaultValue,
	&t290_f7_DefaultValue,
	NULL
};
static Il2CppMethodReference t290_VT[] =
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
static bool t290_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t290_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t290_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t290__CustomAttributeCache = {
1,
NULL,
&t290_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t290_1_0_0;
extern CustomAttributesCache t290__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t290_DM = 
{
	NULL, NULL, NULL, t290_IOs, &t8_0_0_0, t290_VT, t290_VTIGM, NULL};
TypeInfo t290_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileMode", "System.IO", t290_MIs, NULL, t290_FIs, NULL, &t125_TI, NULL, &t290__CustomAttributeCache, &t290_0_0_0, &t290_1_0_0, &t290_DM, NULL, NULL, NULL, t290_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t290)+ sizeof (Il2CppObject), sizeof (t290)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 7, 0, 0, 23, 0, 3};
#include "t1711.h"
// Metadata Definition System.IO.FileNotFoundException
extern TypeInfo t1711_TI;
#include "t1711MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8821_MI = 
{
	".ctor", (methodPointerType)&m8821, &t1711_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2599, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1711_m8822_ParameterInfos[] = 
{
	{"message", 0, 134221040, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8822_MI = 
{
	".ctor", (methodPointerType)&m8822, &t1711_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1711_m8822_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2600, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1711_m8823_ParameterInfos[] = 
{
	{"message", 0, 134221041, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"fileName", 1, 134221042, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8823_MI = 
{
	".ctor", (methodPointerType)&m8823, &t1711_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1711_m8823_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2601, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1711_m8824_ParameterInfos[] = 
{
	{"info", 0, 134221043, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134221044, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m8824_MI = 
{
	".ctor", (methodPointerType)&m8824, &t1711_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1711_m8824_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2602, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8825_MI = 
{
	"get_Message", (methodPointerType)&m8825, &t1711_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2603, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1711_m8826_ParameterInfos[] = 
{
	{"info", 0, 134221045, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134221046, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m8826_MI = 
{
	"GetObjectData", (methodPointerType)&m8826, &t1711_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1711_m8826_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, false, 2604, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8827_MI = 
{
	"ToString", (methodPointerType)&m8827, &t1711_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2605, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1711_MIs[] =
{
	&m8821_MI,
	&m8822_MI,
	&m8823_MI,
	&m8824_MI,
	&m8825_MI,
	&m8826_MI,
	&m8827_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1711_f11_FieldInfo = 
{
	"fileName", &t2_0_0_1, &t1711_TI, offsetof(t1711, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1711_f12_FieldInfo = 
{
	"fusionLog", &t2_0_0_1, &t1711_TI, offsetof(t1711, f12), &EmptyCustomAttributesCache};
static FieldInfo* t1711_FIs[] =
{
	&t1711_f11_FieldInfo,
	&t1711_f12_FieldInfo,
	NULL
};
extern MethodInfo m8825_MI;
static PropertyInfo t1711____Message_PropertyInfo = 
{
	&t1711_TI, "Message", &m8825_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1711_PIs[] =
{
	&t1711____Message_PropertyInfo,
	NULL
};
extern MethodInfo m8827_MI;
extern MethodInfo m8826_MI;
static Il2CppMethodReference t1711_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m8827_MI,
	&m8826_MI,
	&m4219_MI,
	&m8825_MI,
	&m4474_MI,
	&m4417_MI,
	&m8826_MI,
	&m4418_MI,
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
static Il2CppInterfaceOffsetPair t1711_IOs[] = 
{
	{ &t616_0_0_0, 4},
	{ &t941_0_0_0, 5},
};
void t1711_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
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
	NULL, NULL, NULL, t1711_IOs, &t1540_0_0_0, t1711_VT, t1711_VTIGM, NULL};
TypeInfo t1711_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileNotFoundException", "System.IO", t1711_MIs, t1711_PIs, t1711_FIs, NULL, &t1711_TI, NULL, &t1711__CustomAttributeCache, &t1711_0_0_0, &t1711_1_0_0, &t1711_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1711), sizeof (t1711), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 7, 1, 2, 0, 0, 11, 0, 2};
#include "t1712.h"
// Metadata Definition System.IO.FileOptions
extern TypeInfo t1712_TI;
#include "t1712MD.h"
static MethodInfo* t1712_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1712_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1712_TI, offsetof(t1712, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1712_0_0_32854;
FieldInfo t1712_f2_FieldInfo = 
{
	"None", &t1712_0_0_32854, &t1712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1712_0_0_32854;
FieldInfo t1712_f3_FieldInfo = 
{
	"Encrypted", &t1712_0_0_32854, &t1712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1712_0_0_32854;
FieldInfo t1712_f4_FieldInfo = 
{
	"DeleteOnClose", &t1712_0_0_32854, &t1712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1712_0_0_32854;
FieldInfo t1712_f5_FieldInfo = 
{
	"SequentialScan", &t1712_0_0_32854, &t1712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1712_0_0_32854;
FieldInfo t1712_f6_FieldInfo = 
{
	"RandomAccess", &t1712_0_0_32854, &t1712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1712_0_0_32854;
FieldInfo t1712_f7_FieldInfo = 
{
	"Asynchronous", &t1712_0_0_32854, &t1712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1712_0_0_32854;
FieldInfo t1712_f8_FieldInfo = 
{
	"WriteThrough", &t1712_0_0_32854, &t1712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1712_FIs[] =
{
	&t1712_f1_FieldInfo,
	&t1712_f2_FieldInfo,
	&t1712_f3_FieldInfo,
	&t1712_f4_FieldInfo,
	&t1712_f5_FieldInfo,
	&t1712_f6_FieldInfo,
	&t1712_f7_FieldInfo,
	&t1712_f8_FieldInfo,
	NULL
};
static const int32_t t1712_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1712_f2_DefaultValue = 
{
	&t1712_f2_FieldInfo, { (char*)&t1712_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1712_f3_DefaultValueData = 16384;
static Il2CppFieldDefaultValueEntry t1712_f3_DefaultValue = 
{
	&t1712_f3_FieldInfo, { (char*)&t1712_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1712_f4_DefaultValueData = 67108864;
static Il2CppFieldDefaultValueEntry t1712_f4_DefaultValue = 
{
	&t1712_f4_FieldInfo, { (char*)&t1712_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1712_f5_DefaultValueData = 134217728;
static Il2CppFieldDefaultValueEntry t1712_f5_DefaultValue = 
{
	&t1712_f5_FieldInfo, { (char*)&t1712_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1712_f6_DefaultValueData = 268435456;
static Il2CppFieldDefaultValueEntry t1712_f6_DefaultValue = 
{
	&t1712_f6_FieldInfo, { (char*)&t1712_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1712_f7_DefaultValueData = 1073741824;
static Il2CppFieldDefaultValueEntry t1712_f7_DefaultValue = 
{
	&t1712_f7_FieldInfo, { (char*)&t1712_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1712_f8_DefaultValueData = -2147483648;
static Il2CppFieldDefaultValueEntry t1712_f8_DefaultValue = 
{
	&t1712_f8_FieldInfo, { (char*)&t1712_f8_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1712_FDVs[] = 
{
	&t1712_f2_DefaultValue,
	&t1712_f3_DefaultValue,
	&t1712_f4_DefaultValue,
	&t1712_f5_DefaultValue,
	&t1712_f6_DefaultValue,
	&t1712_f7_DefaultValue,
	&t1712_f8_DefaultValue,
	NULL
};
static Il2CppMethodReference t1712_VT[] =
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
};
static Il2CppInterfaceOffsetPair t1712_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1712_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t608 * tmp;
		tmp = (t608 *)il2cpp_codegen_object_new (&t608_TI);
		m2967(tmp, &m2967_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1712__CustomAttributeCache = {
2,
NULL,
&t1712_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1712_0_0_0;
extern Il2CppType t1712_1_0_0;
extern CustomAttributesCache t1712__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1712_DM = 
{
	NULL, NULL, NULL, t1712_IOs, &t8_0_0_0, t1712_VT, t1712_VTIGM, NULL};
TypeInfo t1712_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileOptions", "System.IO", t1712_MIs, NULL, t1712_FIs, NULL, &t125_TI, NULL, &t1712__CustomAttributeCache, &t1712_0_0_0, &t1712_1_0_0, &t1712_DM, NULL, NULL, NULL, t1712_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1712)+ sizeof (Il2CppObject), sizeof (t1712)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 8, 0, 0, 23, 0, 3};
#include "t1713.h"
// Metadata Definition System.IO.FileShare
extern TypeInfo t1713_TI;
#include "t1713MD.h"
static MethodInfo* t1713_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1713_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1713_TI, offsetof(t1713, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1713_0_0_32854;
FieldInfo t1713_f2_FieldInfo = 
{
	"None", &t1713_0_0_32854, &t1713_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1713_0_0_32854;
FieldInfo t1713_f3_FieldInfo = 
{
	"Read", &t1713_0_0_32854, &t1713_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1713_0_0_32854;
FieldInfo t1713_f4_FieldInfo = 
{
	"Write", &t1713_0_0_32854, &t1713_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1713_0_0_32854;
FieldInfo t1713_f5_FieldInfo = 
{
	"ReadWrite", &t1713_0_0_32854, &t1713_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1713_0_0_32854;
FieldInfo t1713_f6_FieldInfo = 
{
	"Delete", &t1713_0_0_32854, &t1713_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1713_0_0_32854;
FieldInfo t1713_f7_FieldInfo = 
{
	"Inheritable", &t1713_0_0_32854, &t1713_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1713_FIs[] =
{
	&t1713_f1_FieldInfo,
	&t1713_f2_FieldInfo,
	&t1713_f3_FieldInfo,
	&t1713_f4_FieldInfo,
	&t1713_f5_FieldInfo,
	&t1713_f6_FieldInfo,
	&t1713_f7_FieldInfo,
	NULL
};
static const int32_t t1713_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1713_f2_DefaultValue = 
{
	&t1713_f2_FieldInfo, { (char*)&t1713_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1713_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1713_f3_DefaultValue = 
{
	&t1713_f3_FieldInfo, { (char*)&t1713_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1713_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1713_f4_DefaultValue = 
{
	&t1713_f4_FieldInfo, { (char*)&t1713_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1713_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1713_f5_DefaultValue = 
{
	&t1713_f5_FieldInfo, { (char*)&t1713_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1713_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1713_f6_DefaultValue = 
{
	&t1713_f6_FieldInfo, { (char*)&t1713_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1713_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1713_f7_DefaultValue = 
{
	&t1713_f7_FieldInfo, { (char*)&t1713_f7_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1713_FDVs[] = 
{
	&t1713_f2_DefaultValue,
	&t1713_f3_DefaultValue,
	&t1713_f4_DefaultValue,
	&t1713_f5_DefaultValue,
	&t1713_f6_DefaultValue,
	&t1713_f7_DefaultValue,
	NULL
};
static Il2CppMethodReference t1713_VT[] =
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
static bool t1713_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1713_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1713_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t608 * tmp;
		tmp = (t608 *)il2cpp_codegen_object_new (&t608_TI);
		m2967(tmp, &m2967_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1713__CustomAttributeCache = {
2,
NULL,
&t1713_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1713_0_0_0;
extern Il2CppType t1713_1_0_0;
extern CustomAttributesCache t1713__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1713_DM = 
{
	NULL, NULL, NULL, t1713_IOs, &t8_0_0_0, t1713_VT, t1713_VTIGM, NULL};
TypeInfo t1713_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileShare", "System.IO", t1713_MIs, NULL, t1713_FIs, NULL, &t125_TI, NULL, &t1713__CustomAttributeCache, &t1713_0_0_0, &t1713_1_0_0, &t1713_DM, NULL, NULL, NULL, t1713_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1713)+ sizeof (Il2CppObject), sizeof (t1713)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 7, 0, 0, 23, 0, 3};
#include "t1714.h"
// Metadata Definition System.IO.FileStream/ReadDelegate
extern TypeInfo t1714_TI;
#include "t1714MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t58_0_0_0;
static ParameterInfo t1714_m8828_ParameterInfos[] = 
{
	{"object", 0, 134221120, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"method", 1, 134221121, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m8828_MI = 
{
	".ctor", (methodPointerType)&m8828, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t58, t1714_m8828_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 2642, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1714_m8829_ParameterInfos[] = 
{
	{"buffer", 0, 134221122, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134221123, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221124, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8829_MI = 
{
	"Invoke", (methodPointerType)&m8829, &t1714_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1714_m8829_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 3, false, false, 2643, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t463_0_0_0;
extern Il2CppType t463_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1714_m8830_ParameterInfos[] = 
{
	{"buffer", 0, 134221125, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134221126, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221127, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"callback", 3, 134221128, &EmptyCustomAttributesCache, &t463_0_0_0},
	{"object", 4, 134221129, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t462_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8830_MI = 
{
	"BeginInvoke", (methodPointerType)&m8830, &t1714_TI, &t462_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t1714_m8830_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 5, false, false, 2644, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t462_0_0_0;
extern Il2CppType t462_0_0_0;
static ParameterInfo t1714_m8831_ParameterInfos[] = 
{
	{"result", 0, 134221130, &EmptyCustomAttributesCache, &t462_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8831_MI = 
{
	"EndInvoke", (methodPointerType)&m8831, &t1714_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1714_m8831_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 2645, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1714_MIs[] =
{
	&m8828_MI,
	&m8829_MI,
	&m8830_MI,
	&m8831_MI,
	NULL
};
extern MethodInfo m2981_MI;
extern MethodInfo m2982_MI;
extern MethodInfo m2983_MI;
extern MethodInfo m2984_MI;
extern MethodInfo m2985_MI;
extern MethodInfo m2986_MI;
extern MethodInfo m2987_MI;
extern MethodInfo m8829_MI;
extern MethodInfo m8830_MI;
extern MethodInfo m8831_MI;
static Il2CppMethodReference t1714_VT[] =
{
	&m2981_MI,
	&m646_MI,
	&m2982_MI,
	&m673_MI,
	&m2983_MI,
	&m2984_MI,
	&m2983_MI,
	&m2985_MI,
	&m2986_MI,
	&m2987_MI,
	&m8829_MI,
	&m8830_MI,
	&m8831_MI,
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
};
static Il2CppInterfaceOffsetPair t1714_IOs[] = 
{
	{ &t615_0_0_0, 4},
	{ &t616_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1714_0_0_0;
extern Il2CppType t1714_1_0_0;
extern Il2CppType t464_0_0_0;
extern TypeInfo t289_TI;
extern Il2CppType t289_0_0_0;
struct t1714;
const Il2CppTypeDefinitionMetadata t1714_DM = 
{
	&t289_0_0_0, NULL, NULL, t1714_IOs, &t464_0_0_0, t1714_VT, t1714_VTIGM, NULL};
TypeInfo t1714_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadDelegate", "", t1714_MIs, NULL, NULL, NULL, &t1714_TI, NULL, &EmptyCustomAttributesCache, &t1714_0_0_0, &t1714_1_0_0, &t1714_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t1714, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1714), sizeof (t1714), 0, sizeof(methodPointerType), 0, 0, -1, 259, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1715.h"
// Metadata Definition System.IO.FileStream/WriteDelegate
extern TypeInfo t1715_TI;
#include "t1715MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t58_0_0_0;
static ParameterInfo t1715_m8832_ParameterInfos[] = 
{
	{"object", 0, 134221131, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"method", 1, 134221132, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m8832_MI = 
{
	".ctor", (methodPointerType)&m8832, &t1715_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t58, t1715_m8832_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 2646, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1715_m8833_ParameterInfos[] = 
{
	{"buffer", 0, 134221133, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134221134, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221135, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8833_MI = 
{
	"Invoke", (methodPointerType)&m8833, &t1715_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1715_m8833_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 3, false, false, 2647, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t463_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1715_m8834_ParameterInfos[] = 
{
	{"buffer", 0, 134221136, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134221137, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221138, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"callback", 3, 134221139, &EmptyCustomAttributesCache, &t463_0_0_0},
	{"object", 4, 134221140, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t462_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8834_MI = 
{
	"BeginInvoke", (methodPointerType)&m8834, &t1715_TI, &t462_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t1715_m8834_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 5, false, false, 2648, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t462_0_0_0;
static ParameterInfo t1715_m8835_ParameterInfos[] = 
{
	{"result", 0, 134221141, &EmptyCustomAttributesCache, &t462_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8835_MI = 
{
	"EndInvoke", (methodPointerType)&m8835, &t1715_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1715_m8835_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 2649, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1715_MIs[] =
{
	&m8832_MI,
	&m8833_MI,
	&m8834_MI,
	&m8835_MI,
	NULL
};
extern MethodInfo m8833_MI;
extern MethodInfo m8834_MI;
extern MethodInfo m8835_MI;
static Il2CppMethodReference t1715_VT[] =
{
	&m2981_MI,
	&m646_MI,
	&m2982_MI,
	&m673_MI,
	&m2983_MI,
	&m2984_MI,
	&m2983_MI,
	&m2985_MI,
	&m2986_MI,
	&m2987_MI,
	&m8833_MI,
	&m8834_MI,
	&m8835_MI,
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
};
static Il2CppInterfaceOffsetPair t1715_IOs[] = 
{
	{ &t615_0_0_0, 4},
	{ &t616_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1715_0_0_0;
extern Il2CppType t1715_1_0_0;
struct t1715;
const Il2CppTypeDefinitionMetadata t1715_DM = 
{
	&t289_0_0_0, NULL, NULL, t1715_IOs, &t464_0_0_0, t1715_VT, t1715_VTIGM, NULL};
TypeInfo t1715_TI = 
{
	&g_mscorlib_dll_Image, NULL, "WriteDelegate", "", t1715_MIs, NULL, NULL, NULL, &t1715_TI, NULL, &EmptyCustomAttributesCache, &t1715_0_0_0, &t1715_1_0_0, &t1715_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t1715, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1715), sizeof (t1715), 0, sizeof(methodPointerType), 0, 0, -1, 259, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t289.h"
// Metadata Definition System.IO.FileStream
#include "t289MD.h"
extern Il2CppType t58_0_0_0;
extern Il2CppType t1178_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t289_m8836_ParameterInfos[] = 
{
	{"handle", 0, 134221047, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"access", 1, 134221048, &EmptyCustomAttributesCache, &t1178_0_0_0},
	{"ownsHandle", 2, 134221049, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"bufferSize", 3, 134221050, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"isAsync", 4, 134221051, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"noBuffering", 5, 134221052, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t58_t125_t186_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8836_MI = 
{
	".ctor", (methodPointerType)&m8836, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122_t58_t125_t186_t125_t186_t186, t289_m8836_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 6, false, false, 2606, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t290_0_0_0;
extern Il2CppType t1178_0_0_0;
static ParameterInfo t289_m8837_ParameterInfos[] = 
{
	{"path", 0, 134221053, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221054, &EmptyCustomAttributesCache, &t290_0_0_0},
	{"access", 2, 134221055, &EmptyCustomAttributesCache, &t1178_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8837_MI = 
{
	".ctor", (methodPointerType)&m8837, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t289_m8837_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 2607, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t290_0_0_0;
extern Il2CppType t1178_0_0_0;
extern Il2CppType t1713_0_0_0;
static ParameterInfo t289_m8838_ParameterInfos[] = 
{
	{"path", 0, 134221056, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221057, &EmptyCustomAttributesCache, &t290_0_0_0},
	{"access", 2, 134221058, &EmptyCustomAttributesCache, &t1178_0_0_0},
	{"share", 3, 134221059, &EmptyCustomAttributesCache, &t1713_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8838_MI = 
{
	".ctor", (methodPointerType)&m8838, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t125, t289_m8838_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 2608, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t290_0_0_0;
extern Il2CppType t1178_0_0_0;
extern Il2CppType t1713_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t289_m8839_ParameterInfos[] = 
{
	{"path", 0, 134221060, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221061, &EmptyCustomAttributesCache, &t290_0_0_0},
	{"access", 2, 134221062, &EmptyCustomAttributesCache, &t1178_0_0_0},
	{"share", 3, 134221063, &EmptyCustomAttributesCache, &t1713_0_0_0},
	{"bufferSize", 4, 134221064, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"isAsync", 5, 134221065, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"anonymous", 6, 134221066, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t125_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8839_MI = 
{
	".ctor", (methodPointerType)&m8839, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t125_t125_t186_t186, t289_m8839_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 7, false, false, 2609, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t290_0_0_0;
extern Il2CppType t1178_0_0_0;
extern Il2CppType t1713_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t1712_0_0_0;
static ParameterInfo t289_m8840_ParameterInfos[] = 
{
	{"path", 0, 134221067, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221068, &EmptyCustomAttributesCache, &t290_0_0_0},
	{"access", 2, 134221069, &EmptyCustomAttributesCache, &t1178_0_0_0},
	{"share", 3, 134221070, &EmptyCustomAttributesCache, &t1713_0_0_0},
	{"bufferSize", 4, 134221071, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"anonymous", 5, 134221072, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"options", 6, 134221073, &EmptyCustomAttributesCache, &t1712_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t125_t125_t186_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8840_MI = 
{
	".ctor", (methodPointerType)&m8840, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t125_t125_t186_t125, t289_m8840_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 7, false, false, 2610, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8841_MI = 
{
	"get_CanRead", (methodPointerType)&m8841, &t289_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 5, 0, false, false, 2611, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8842_MI = 
{
	"get_CanWrite", (methodPointerType)&m8842, &t289_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 2612, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8843_MI = 
{
	"get_CanSeek", (methodPointerType)&m8843, &t289_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2613, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m6918_MI = 
{
	"get_Length", (methodPointerType)&m6918, &t289_TI, &t292_0_0_0, RuntimeInvoker_t292, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2614, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m8844_MI = 
{
	"get_Position", (methodPointerType)&m8844, &t289_TI, &t292_0_0_0, RuntimeInvoker_t292, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2615, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
static ParameterInfo t289_m8845_ParameterInfos[] = 
{
	{"value", 0, 134221074, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m8845_MI = 
{
	"set_Position", (methodPointerType)&m8845, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122_t292, t289_m8845_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 10, 1, false, false, 2616, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8846_MI = 
{
	"ReadByte", (methodPointerType)&m8846, &t289_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 15, 0, false, false, 2617, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t568_0_0_0;
static ParameterInfo t289_m8847_ParameterInfos[] = 
{
	{"value", 0, 134221075, &EmptyCustomAttributesCache, &t568_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8847_MI = 
{
	"WriteByte", (methodPointerType)&m8847, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t289_m8847_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 19, 1, false, false, 2618, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t289_m6919_ParameterInfos[] = 
{
	{"array", 0, 134221076, &EmptyCustomAttributesCache, &t723_0_0_3},
	{"offset", 1, 134221077, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221078, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6919_MI = 
{
	"Read", (methodPointerType)&m6919, &t289_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t289_m6919_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 14, 3, false, false, 2619, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t289_m8848_ParameterInfos[] = 
{
	{"dest", 0, 134221079, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134221080, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221081, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8848_MI = 
{
	"ReadInternal", (methodPointerType)&m8848, &t289_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t289_m8848_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2620, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t463_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t289_m8849_ParameterInfos[] = 
{
	{"array", 0, 134221082, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134221083, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"numBytes", 2, 134221084, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"userCallback", 3, 134221085, &EmptyCustomAttributesCache, &t463_0_0_0},
	{"stateObject", 4, 134221086, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t462_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8849_MI = 
{
	"BeginRead", (methodPointerType)&m8849, &t289_TI, &t462_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t289_m8849_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 20, 5, false, false, 2621, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t462_0_0_0;
static ParameterInfo t289_m8850_ParameterInfos[] = 
{
	{"asyncResult", 0, 134221087, &EmptyCustomAttributesCache, &t462_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8850_MI = 
{
	"EndRead", (methodPointerType)&m8850, &t289_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t289_m8850_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 22, 1, false, false, 2622, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t289_m8851_ParameterInfos[] = 
{
	{"array", 0, 134221088, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134221089, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221090, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8851_MI = 
{
	"Write", (methodPointerType)&m8851, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t289_m8851_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 18, 3, false, false, 2623, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t289_m8852_ParameterInfos[] = 
{
	{"src", 0, 134221091, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134221092, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221093, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8852_MI = 
{
	"WriteInternal", (methodPointerType)&m8852, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t289_m8852_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2624, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t463_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t289_m8853_ParameterInfos[] = 
{
	{"array", 0, 134221094, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134221095, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"numBytes", 2, 134221096, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"userCallback", 3, 134221097, &EmptyCustomAttributesCache, &t463_0_0_0},
	{"stateObject", 4, 134221098, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t462_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8853_MI = 
{
	"BeginWrite", (methodPointerType)&m8853, &t289_TI, &t462_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t289_m8853_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 21, 5, false, false, 2625, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t462_0_0_0;
static ParameterInfo t289_m8854_ParameterInfos[] = 
{
	{"asyncResult", 0, 134221099, &EmptyCustomAttributesCache, &t462_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8854_MI = 
{
	"EndWrite", (methodPointerType)&m8854, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t289_m8854_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 1, false, false, 2626, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern Il2CppType t1490_0_0_0;
extern Il2CppType t1490_0_0_0;
static ParameterInfo t289_m8855_ParameterInfos[] = 
{
	{"offset", 0, 134221100, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"origin", 1, 134221101, &EmptyCustomAttributesCache, &t1490_0_0_0},
};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292_t292_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8855_MI = 
{
	"Seek", (methodPointerType)&m8855, &t289_TI, &t292_0_0_0, RuntimeInvoker_t292_t292_t125, t289_m8855_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 2, false, false, 2627, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
static ParameterInfo t289_m1085_ParameterInfos[] = 
{
	{"value", 0, 134221102, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m1085_MI = 
{
	"SetLength", (methodPointerType)&m1085, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122_t292, t289_m1085_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 2628, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8856_MI = 
{
	"Flush", (methodPointerType)&m8856, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 2629, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8857_MI = 
{
	"Finalize", (methodPointerType)&m8857, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 2630, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t289_m8858_ParameterInfos[] = 
{
	{"disposing", 0, 134221103, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8858_MI = 
{
	"Dispose", (methodPointerType)&m8858, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t289_m8858_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 1, false, false, 2631, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t289_m8859_ParameterInfos[] = 
{
	{"dest", 0, 134221104, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"dest_offset", 1, 134221105, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221106, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8859_MI = 
{
	"ReadSegment", (methodPointerType)&m8859, &t289_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t289_m8859_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2632, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t289_m8860_ParameterInfos[] = 
{
	{"src", 0, 134221107, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"src_offset", 1, 134221108, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221109, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8860_MI = 
{
	"WriteSegment", (methodPointerType)&m8860, &t289_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t289_m8860_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2633, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t291_0_0_0;
static ParameterInfo t289_m8861_ParameterInfos[] = 
{
	{"st", 0, 134221110, &EmptyCustomAttributesCache, &t291_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8861_MI = 
{
	"FlushBuffer", (methodPointerType)&m8861, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t289_m8861_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2634, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8862_MI = 
{
	"FlushBuffer", (methodPointerType)&m8862, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2635, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8863_MI = 
{
	"FlushBufferIfDirty", (methodPointerType)&m8863, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2636, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8864_MI = 
{
	"RefillBuffer", (methodPointerType)&m8864, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2637, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t289_m8865_ParameterInfos[] = 
{
	{"handle", 0, 134221111, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"buf", 1, 134221112, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 2, 134221113, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134221114, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t58_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8865_MI = 
{
	"ReadData", (methodPointerType)&m8865, &t289_TI, &t125_0_0_0, RuntimeInvoker_t125_t58_t9_t125_t125, t289_m8865_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 2638, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t289_m8866_ParameterInfos[] = 
{
	{"size", 0, 134221115, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"noBuffering", 1, 134221116, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8866_MI = 
{
	"InitBuffer", (methodPointerType)&m8866, &t289_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t289_m8866_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2639, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t289_m8867_ParameterInfos[] = 
{
	{"filename", 0, 134221117, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8867_MI = 
{
	"GetSecureFileName", (methodPointerType)&m8867, &t289_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t289_m8867_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2640, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t289_m8868_ParameterInfos[] = 
{
	{"filename", 0, 134221118, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"full", 1, 134221119, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8868_MI = 
{
	"GetSecureFileName", (methodPointerType)&m8868, &t289_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t186, t289_m8868_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2641, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t289_MIs[] =
{
	&m8836_MI,
	&m8837_MI,
	&m8838_MI,
	&m8839_MI,
	&m8840_MI,
	&m8841_MI,
	&m8842_MI,
	&m8843_MI,
	&m6918_MI,
	&m8844_MI,
	&m8845_MI,
	&m8846_MI,
	&m8847_MI,
	&m6919_MI,
	&m8848_MI,
	&m8849_MI,
	&m8850_MI,
	&m8851_MI,
	&m8852_MI,
	&m8853_MI,
	&m8854_MI,
	&m8855_MI,
	&m1085_MI,
	&m8856_MI,
	&m8857_MI,
	&m8858_MI,
	&m8859_MI,
	&m8860_MI,
	&m8861_MI,
	&m8862_MI,
	&m8863_MI,
	&m8864_MI,
	&m8865_MI,
	&m8866_MI,
	&m8867_MI,
	&m8868_MI,
	NULL
};
extern Il2CppType t1178_0_0_1;
FieldInfo t289_f1_FieldInfo = 
{
	"access", &t1178_0_0_1, &t289_TI, offsetof(t289, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t289_f2_FieldInfo = 
{
	"owner", &t124_0_0_1, &t289_TI, offsetof(t289, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t289_f3_FieldInfo = 
{
	"async", &t124_0_0_1, &t289_TI, offsetof(t289, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t289_f4_FieldInfo = 
{
	"canseek", &t124_0_0_1, &t289_TI, offsetof(t289, f4), &EmptyCustomAttributesCache};
extern Il2CppType t292_0_0_1;
FieldInfo t289_f5_FieldInfo = 
{
	"append_startpos", &t292_0_0_1, &t289_TI, offsetof(t289, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t289_f6_FieldInfo = 
{
	"anonymous", &t124_0_0_1, &t289_TI, offsetof(t289, f6), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t289_f7_FieldInfo = 
{
	"buf", &t723_0_0_1, &t289_TI, offsetof(t289, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t289_f8_FieldInfo = 
{
	"buf_size", &t125_0_0_1, &t289_TI, offsetof(t289, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t289_f9_FieldInfo = 
{
	"buf_length", &t125_0_0_1, &t289_TI, offsetof(t289, f9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t289_f10_FieldInfo = 
{
	"buf_offset", &t125_0_0_1, &t289_TI, offsetof(t289, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t289_f11_FieldInfo = 
{
	"buf_dirty", &t124_0_0_1, &t289_TI, offsetof(t289, f11), &EmptyCustomAttributesCache};
extern Il2CppType t292_0_0_1;
FieldInfo t289_f12_FieldInfo = 
{
	"buf_start", &t292_0_0_1, &t289_TI, offsetof(t289, f12), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t289_f13_FieldInfo = 
{
	"name", &t2_0_0_1, &t289_TI, offsetof(t289, f13), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_1;
FieldInfo t289_f14_FieldInfo = 
{
	"handle", &t58_0_0_1, &t289_TI, offsetof(t289, f14), &EmptyCustomAttributesCache};
static FieldInfo* t289_FIs[] =
{
	&t289_f1_FieldInfo,
	&t289_f2_FieldInfo,
	&t289_f3_FieldInfo,
	&t289_f4_FieldInfo,
	&t289_f5_FieldInfo,
	&t289_f6_FieldInfo,
	&t289_f7_FieldInfo,
	&t289_f8_FieldInfo,
	&t289_f9_FieldInfo,
	&t289_f10_FieldInfo,
	&t289_f11_FieldInfo,
	&t289_f12_FieldInfo,
	&t289_f13_FieldInfo,
	&t289_f14_FieldInfo,
	NULL
};
extern MethodInfo m8841_MI;
static PropertyInfo t289____CanRead_PropertyInfo = 
{
	&t289_TI, "CanRead", &m8841_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8842_MI;
static PropertyInfo t289____CanWrite_PropertyInfo = 
{
	&t289_TI, "CanWrite", &m8842_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8843_MI;
static PropertyInfo t289____CanSeek_PropertyInfo = 
{
	&t289_TI, "CanSeek", &m8843_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6918_MI;
static PropertyInfo t289____Length_PropertyInfo = 
{
	&t289_TI, "Length", &m6918_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8844_MI;
extern MethodInfo m8845_MI;
static PropertyInfo t289____Position_PropertyInfo = 
{
	&t289_TI, "Position", &m8844_MI, &m8845_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t289_PIs[] =
{
	&t289____CanRead_PropertyInfo,
	&t289____CanWrite_PropertyInfo,
	&t289____CanSeek_PropertyInfo,
	&t289____Length_PropertyInfo,
	&t289____Position_PropertyInfo,
	NULL
};
static const Il2CppType* t289_TI__nestedTypes[2] =
{
	&t1714_0_0_0,
	&t1715_0_0_0,
};
extern MethodInfo m8857_MI;
extern MethodInfo m7028_MI;
extern MethodInfo m8858_MI;
extern MethodInfo m1081_MI;
extern MethodInfo m8856_MI;
extern MethodInfo m6919_MI;
extern MethodInfo m8846_MI;
extern MethodInfo m8855_MI;
extern MethodInfo m1085_MI;
extern MethodInfo m8851_MI;
extern MethodInfo m8847_MI;
extern MethodInfo m8849_MI;
extern MethodInfo m8853_MI;
extern MethodInfo m8850_MI;
extern MethodInfo m8854_MI;
static Il2CppMethodReference t289_VT[] =
{
	&m671_MI,
	&m8857_MI,
	&m672_MI,
	&m673_MI,
	&m7028_MI,
	&m8841_MI,
	&m8843_MI,
	&m8842_MI,
	&m6918_MI,
	&m8844_MI,
	&m8845_MI,
	&m8858_MI,
	&m1081_MI,
	&m8856_MI,
	&m6919_MI,
	&m8846_MI,
	&m8855_MI,
	&m1085_MI,
	&m8851_MI,
	&m8847_MI,
	&m8849_MI,
	&m8853_MI,
	&m8850_MI,
	&m8854_MI,
};
static bool t289_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t289_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t289_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t289__CustomAttributeCache = {
1,
NULL,
&t289_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t289_1_0_0;
struct t289;
extern CustomAttributesCache t289__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t289_DM = 
{
	NULL, t289_TI__nestedTypes, NULL, t289_IOs, &t291_0_0_0, t289_VT, t289_VTIGM, NULL};
TypeInfo t289_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileStream", "System.IO", t289_MIs, t289_PIs, t289_FIs, NULL, &t289_TI, NULL, &t289__CustomAttributeCache, &t289_0_0_0, &t289_1_0_0, &t289_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t289), sizeof (t289), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 36, 5, 14, 0, 2, 24, 0, 1};
#include "t1716.h"
// Metadata Definition System.IO.FileStreamAsyncResult
extern TypeInfo t1716_TI;
#include "t1716MD.h"
extern Il2CppType t463_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1716_m8869_ParameterInfos[] = 
{
	{"cb", 0, 134221142, &EmptyCustomAttributesCache, &t463_0_0_0},
	{"state", 1, 134221143, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8869_MI = 
{
	".ctor", (methodPointerType)&m8869, &t1716_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1716_m8869_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2650, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t462_0_0_0;
static ParameterInfo t1716_m8870_ParameterInfos[] = 
{
	{"ares", 0, 134221144, &EmptyCustomAttributesCache, &t462_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8870_MI = 
{
	"CBWrapper", (methodPointerType)&m8870, &t1716_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1716_m8870_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2651, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8871_MI = 
{
	"get_AsyncState", (methodPointerType)&m8871, &t1716_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 2652, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1477_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8872_MI = 
{
	"get_AsyncWaitHandle", (methodPointerType)&m8872, &t1716_TI, &t1477_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 2653, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8873_MI = 
{
	"get_IsCompleted", (methodPointerType)&m8873, &t1716_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 2654, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1716_MIs[] =
{
	&m8869_MI,
	&m8870_MI,
	&m8871_MI,
	&m8872_MI,
	&m8873_MI,
	NULL
};
extern Il2CppType t9_0_0_1;
FieldInfo t1716_f0_FieldInfo = 
{
	"state", &t9_0_0_1, &t1716_TI, offsetof(t1716, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1716_f1_FieldInfo = 
{
	"completed", &t124_0_0_1, &t1716_TI, offsetof(t1716, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1476_0_0_1;
FieldInfo t1716_f2_FieldInfo = 
{
	"wh", &t1476_0_0_1, &t1716_TI, offsetof(t1716, f2), &EmptyCustomAttributesCache};
extern Il2CppType t463_0_0_1;
FieldInfo t1716_f3_FieldInfo = 
{
	"cb", &t463_0_0_1, &t1716_TI, offsetof(t1716, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1716_f4_FieldInfo = 
{
	"Count", &t125_0_0_6, &t1716_TI, offsetof(t1716, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1716_f5_FieldInfo = 
{
	"OriginalCount", &t125_0_0_6, &t1716_TI, offsetof(t1716, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1716_f6_FieldInfo = 
{
	"BytesRead", &t125_0_0_6, &t1716_TI, offsetof(t1716, f6), &EmptyCustomAttributesCache};
extern Il2CppType t463_0_0_1;
FieldInfo t1716_f7_FieldInfo = 
{
	"realcb", &t463_0_0_1, &t1716_TI, offsetof(t1716, f7), &EmptyCustomAttributesCache};
static FieldInfo* t1716_FIs[] =
{
	&t1716_f0_FieldInfo,
	&t1716_f1_FieldInfo,
	&t1716_f2_FieldInfo,
	&t1716_f3_FieldInfo,
	&t1716_f4_FieldInfo,
	&t1716_f5_FieldInfo,
	&t1716_f6_FieldInfo,
	&t1716_f7_FieldInfo,
	NULL
};
extern MethodInfo m8871_MI;
static PropertyInfo t1716____AsyncState_PropertyInfo = 
{
	&t1716_TI, "AsyncState", &m8871_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8872_MI;
static PropertyInfo t1716____AsyncWaitHandle_PropertyInfo = 
{
	&t1716_TI, "AsyncWaitHandle", &m8872_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8873_MI;
static PropertyInfo t1716____IsCompleted_PropertyInfo = 
{
	&t1716_TI, "IsCompleted", &m8873_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1716_PIs[] =
{
	&t1716____AsyncState_PropertyInfo,
	&t1716____AsyncWaitHandle_PropertyInfo,
	&t1716____IsCompleted_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1716_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8871_MI,
	&m8872_MI,
	&m8873_MI,
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
};
static const Il2CppType* t1716_ITIs[] = 
{
	&t462_0_0_0,
};
static Il2CppInterfaceOffsetPair t1716_IOs[] = 
{
	{ &t462_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1716_0_0_0;
extern Il2CppType t1716_1_0_0;
struct t1716;
const Il2CppTypeDefinitionMetadata t1716_DM = 
{
	NULL, NULL, t1716_ITIs, t1716_IOs, &t9_0_0_0, t1716_VT, t1716_VTIGM, NULL};
TypeInfo t1716_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileStreamAsyncResult", "System.IO", t1716_MIs, t1716_PIs, t1716_FIs, NULL, &t1716_TI, NULL, &EmptyCustomAttributesCache, &t1716_0_0_0, &t1716_1_0_0, &t1716_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1716), sizeof (t1716), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 3, 8, 0, 0, 7, 1, 1};
#include "t1707.h"
// Metadata Definition System.IO.FileSystemInfo
extern TypeInfo t1707_TI;
#include "t1707MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8874_MI = 
{
	".ctor", (methodPointerType)&m8874, &t1707_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2655, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1707_m8875_ParameterInfos[] = 
{
	{"info", 0, 134221145, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134221146, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m8875_MI = 
{
	".ctor", (methodPointerType)&m8875, &t1707_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1707_m8875_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2656, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1707_m8876_ParameterInfos[] = 
{
	{"info", 0, 134221147, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134221148, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1707__CustomAttributeCache_m8876;
MethodInfo m8876_MI = 
{
	"GetObjectData", (methodPointerType)&m8876, &t1707_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1707_m8876_ParameterInfos, &t1707__CustomAttributeCache_m8876, 454, 0, 7, 2, false, false, 2657, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m12745_MI = 
{
	"get_Exists", NULL, &t1707_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 8, 0, false, false, 2658, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8877_MI = 
{
	"get_FullName", (methodPointerType)&m8877, &t1707_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 2659, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1707_m8878_ParameterInfos[] = 
{
	{"force", 0, 134221149, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8878_MI = 
{
	"Refresh", (methodPointerType)&m8878, &t1707_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1707_m8878_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 2660, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8879_MI = 
{
	"InternalRefresh", (methodPointerType)&m8879, &t1707_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 451, 0, 10, 0, false, false, 2661, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1707_m8880_ParameterInfos[] = 
{
	{"path", 0, 134221150, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8880_MI = 
{
	"CheckPath", (methodPointerType)&m8880, &t1707_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1707_m8880_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 2662, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1707_MIs[] =
{
	&m8874_MI,
	&m8875_MI,
	&m8876_MI,
	&m12745_MI,
	&m8877_MI,
	&m8878_MI,
	&m8879_MI,
	&m8880_MI,
	NULL
};
extern Il2CppType t2_0_0_4;
FieldInfo t1707_f1_FieldInfo = 
{
	"FullPath", &t2_0_0_4, &t1707_TI, offsetof(t1707, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_4;
FieldInfo t1707_f2_FieldInfo = 
{
	"OriginalPath", &t2_0_0_4, &t1707_TI, offsetof(t1707, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1717_0_0_3;
FieldInfo t1707_f3_FieldInfo = 
{
	"stat", &t1717_0_0_3, &t1707_TI, offsetof(t1707, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t1707_f4_FieldInfo = 
{
	"valid", &t124_0_0_3, &t1707_TI, offsetof(t1707, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1707_FIs[] =
{
	&t1707_f1_FieldInfo,
	&t1707_f2_FieldInfo,
	&t1707_f3_FieldInfo,
	&t1707_f4_FieldInfo,
	NULL
};
extern MethodInfo m12745_MI;
static PropertyInfo t1707____Exists_PropertyInfo = 
{
	&t1707_TI, "Exists", &m12745_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1707____FullName_PropertyInfo = 
{
	&t1707_TI, "FullName", &m8877_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1707_PIs[] =
{
	&t1707____Exists_PropertyInfo,
	&t1707____FullName_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1707_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m6008_MI,
	&m6009_MI,
	&m8876_MI,
	&m8876_MI,
	NULL,
	&m8877_MI,
	&m8879_MI,
};
static bool t1707_VTIGM[] =
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
static const Il2CppType* t1707_ITIs[] = 
{
	&t616_0_0_0,
};
static Il2CppInterfaceOffsetPair t1707_IOs[] = 
{
	{ &t616_0_0_0, 6},
};
void t1707_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1707_CustomAttributesCacheGenerator_m8876(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1707__CustomAttributeCache = {
1,
NULL,
&t1707_CustomAttributesCacheGenerator
};
CustomAttributesCache t1707__CustomAttributeCache_m8876 = {
1,
NULL,
&t1707_CustomAttributesCacheGenerator_m8876
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1707_1_0_0;
extern Il2CppType t1200_0_0_0;
struct t1707;
extern CustomAttributesCache t1707__CustomAttributeCache;
extern CustomAttributesCache t1707__CustomAttributeCache_m8876;
const Il2CppTypeDefinitionMetadata t1707_DM = 
{
	NULL, NULL, t1707_ITIs, t1707_IOs, &t1200_0_0_0, t1707_VT, t1707_VTIGM, NULL};
TypeInfo t1707_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileSystemInfo", "System.IO", t1707_MIs, t1707_PIs, t1707_FIs, NULL, &t1707_TI, NULL, &t1707__CustomAttributeCache, &t1707_0_0_0, &t1707_1_0_0, &t1707_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1707), sizeof (t1707), 0, -1, 0, 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 2, 4, 0, 0, 11, 1, 1};
#include "t1540.h"
// Metadata Definition System.IO.IOException
extern TypeInfo t1540_TI;
#include "t1540MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8881_MI = 
{
	".ctor", (methodPointerType)&m8881, &t1540_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2663, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1540_m8882_ParameterInfos[] = 
{
	{"message", 0, 134221151, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8882_MI = 
{
	".ctor", (methodPointerType)&m8882, &t1540_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1540_m8882_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2664, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t138_0_0_0;
static ParameterInfo t1540_m6976_ParameterInfos[] = 
{
	{"message", 0, 134221152, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"innerException", 1, 134221153, &EmptyCustomAttributesCache, &t138_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6976_MI = 
{
	".ctor", (methodPointerType)&m6976, &t1540_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1540_m6976_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2665, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1540_m8883_ParameterInfos[] = 
{
	{"info", 0, 134221154, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134221155, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m8883_MI = 
{
	".ctor", (methodPointerType)&m8883, &t1540_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1540_m8883_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2666, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1540_m8884_ParameterInfos[] = 
{
	{"message", 0, 134221156, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"hresult", 1, 134221157, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8884_MI = 
{
	".ctor", (methodPointerType)&m8884, &t1540_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1540_m8884_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2667, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1540_MIs[] =
{
	&m8881_MI,
	&m8882_MI,
	&m6976_MI,
	&m8883_MI,
	&m8884_MI,
	NULL
};
static Il2CppMethodReference t1540_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4472_MI,
	&m4473_MI,
	&m4219_MI,
	&m1083_MI,
	&m4474_MI,
	&m4417_MI,
	&m4473_MI,
	&m4418_MI,
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
};
static Il2CppInterfaceOffsetPair t1540_IOs[] = 
{
	{ &t616_0_0_0, 4},
	{ &t941_0_0_0, 5},
};
void t1540_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1540__CustomAttributeCache = {
1,
NULL,
&t1540_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1540_1_0_0;
extern Il2CppType t1360_0_0_0;
struct t1540;
extern CustomAttributesCache t1540__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1540_DM = 
{
	NULL, NULL, NULL, t1540_IOs, &t1360_0_0_0, t1540_VT, t1540_VTIGM, NULL};
TypeInfo t1540_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IOException", "System.IO", t1540_MIs, NULL, NULL, NULL, &t1540_TI, NULL, &t1540__CustomAttributeCache, &t1540_0_0_0, &t1540_1_0_0, &t1540_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1540), sizeof (t1540), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 11, 0, 2};
#include "t881.h"
// Metadata Definition System.IO.MemoryStream
extern TypeInfo t881_TI;
#include "t881MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6981_MI = 
{
	".ctor", (methodPointerType)&m6981, &t881_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2668, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t881_m4265_ParameterInfos[] = 
{
	{"capacity", 0, 134221158, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4265_MI = 
{
	".ctor", (methodPointerType)&m4265, &t881_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t881_m4265_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2669, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t881_m7002_ParameterInfos[] = 
{
	{"buffer", 0, 134221159, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7002_MI = 
{
	".ctor", (methodPointerType)&m7002, &t881_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t881_m7002_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2670, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t881_m8885_ParameterInfos[] = 
{
	{"buffer", 0, 134221160, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"index", 1, 134221161, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221162, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"writable", 3, 134221163, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"publicallyVisible", 4, 134221164, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8885_MI = 
{
	"InternalConstructor", (methodPointerType)&m8885, &t881_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t186_t186, t881_m8885_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 5, false, false, 2671, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8886_MI = 
{
	"CheckIfClosedThrowDisposed", (methodPointerType)&m8886, &t881_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2672, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8887_MI = 
{
	"get_CanRead", (methodPointerType)&m8887, &t881_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 5, 0, false, false, 2673, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m7001_MI = 
{
	"get_CanSeek", (methodPointerType)&m7001, &t881_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2674, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8888_MI = 
{
	"get_CanWrite", (methodPointerType)&m8888, &t881_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 2675, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t881_m8889_ParameterInfos[] = 
{
	{"value", 0, 134221165, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8889_MI = 
{
	"set_Capacity", (methodPointerType)&m8889, &t881_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t881_m8889_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 24, 1, false, false, 2676, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m6990_MI = 
{
	"get_Length", (methodPointerType)&m6990, &t881_TI, &t292_0_0_0, RuntimeInvoker_t292, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2677, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m6989_MI = 
{
	"get_Position", (methodPointerType)&m6989, &t881_TI, &t292_0_0_0, RuntimeInvoker_t292, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2678, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
static ParameterInfo t881_m6992_ParameterInfos[] = 
{
	{"value", 0, 134221166, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m6992_MI = 
{
	"set_Position", (methodPointerType)&m6992, &t881_TI, &t122_0_0_0, RuntimeInvoker_t122_t292, t881_m6992_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 10, 1, false, false, 2679, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t881_m8890_ParameterInfos[] = 
{
	{"disposing", 0, 134221167, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8890_MI = 
{
	"Dispose", (methodPointerType)&m8890, &t881_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t881_m8890_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 1, false, false, 2680, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7003_MI = 
{
	"Flush", (methodPointerType)&m7003, &t881_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 2681, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t881_m6991_ParameterInfos[] = 
{
	{"buffer", 0, 134221168, &EmptyCustomAttributesCache, &t723_0_0_3},
	{"offset", 1, 134221169, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221170, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6991_MI = 
{
	"Read", (methodPointerType)&m6991, &t881_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t881_m6991_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 14, 3, false, false, 2682, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8891_MI = 
{
	"ReadByte", (methodPointerType)&m8891, &t881_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 15, 0, false, false, 2683, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern Il2CppType t1490_0_0_0;
static ParameterInfo t881_m6993_ParameterInfos[] = 
{
	{"offset", 0, 134221171, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"loc", 1, 134221172, &EmptyCustomAttributesCache, &t1490_0_0_0},
};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292_t292_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6993_MI = 
{
	"Seek", (methodPointerType)&m6993, &t881_TI, &t292_0_0_0, RuntimeInvoker_t292_t292_t125, t881_m6993_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 2, false, false, 2684, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t881_m8892_ParameterInfos[] = 
{
	{"minimum", 0, 134221173, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8892_MI = 
{
	"CalculateNewCapacity", (methodPointerType)&m8892, &t881_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t881_m8892_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2685, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t881_m8893_ParameterInfos[] = 
{
	{"newSize", 0, 134221174, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8893_MI = 
{
	"Expand", (methodPointerType)&m8893, &t881_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t881_m8893_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2686, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
static ParameterInfo t881_m6994_ParameterInfos[] = 
{
	{"value", 0, 134221175, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m6994_MI = 
{
	"SetLength", (methodPointerType)&m6994, &t881_TI, &t122_0_0_0, RuntimeInvoker_t122_t292, t881_m6994_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 2687, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4272_MI = 
{
	"ToArray", (methodPointerType)&m4272, &t881_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 25, 0, false, false, 2688, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t881_m4266_ParameterInfos[] = 
{
	{"buffer", 0, 134221176, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134221177, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221178, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4266_MI = 
{
	"Write", (methodPointerType)&m4266, &t881_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t881_m4266_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 18, 3, false, false, 2689, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t568_0_0_0;
static ParameterInfo t881_m4277_ParameterInfos[] = 
{
	{"value", 0, 134221179, &EmptyCustomAttributesCache, &t568_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m4277_MI = 
{
	"WriteByte", (methodPointerType)&m4277, &t881_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t881_m4277_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 19, 1, false, false, 2690, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t881_MIs[] =
{
	&m6981_MI,
	&m4265_MI,
	&m7002_MI,
	&m8885_MI,
	&m8886_MI,
	&m8887_MI,
	&m7001_MI,
	&m8888_MI,
	&m8889_MI,
	&m6990_MI,
	&m6989_MI,
	&m6992_MI,
	&m8890_MI,
	&m7003_MI,
	&m6991_MI,
	&m8891_MI,
	&m6993_MI,
	&m8892_MI,
	&m8893_MI,
	&m6994_MI,
	&m4272_MI,
	&m4266_MI,
	&m4277_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t881_f1_FieldInfo = 
{
	"canWrite", &t124_0_0_1, &t881_TI, offsetof(t881, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t881_f2_FieldInfo = 
{
	"allowGetBuffer", &t124_0_0_1, &t881_TI, offsetof(t881, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t881_f3_FieldInfo = 
{
	"capacity", &t125_0_0_1, &t881_TI, offsetof(t881, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t881_f4_FieldInfo = 
{
	"length", &t125_0_0_1, &t881_TI, offsetof(t881, f4), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t881_f5_FieldInfo = 
{
	"internalBuffer", &t723_0_0_1, &t881_TI, offsetof(t881, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t881_f6_FieldInfo = 
{
	"initialIndex", &t125_0_0_1, &t881_TI, offsetof(t881, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t881_f7_FieldInfo = 
{
	"expandable", &t124_0_0_1, &t881_TI, offsetof(t881, f7), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t881_f8_FieldInfo = 
{
	"streamClosed", &t124_0_0_1, &t881_TI, offsetof(t881, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t881_f9_FieldInfo = 
{
	"position", &t125_0_0_1, &t881_TI, offsetof(t881, f9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t881_f10_FieldInfo = 
{
	"dirty_bytes", &t125_0_0_1, &t881_TI, offsetof(t881, f10), &EmptyCustomAttributesCache};
static FieldInfo* t881_FIs[] =
{
	&t881_f1_FieldInfo,
	&t881_f2_FieldInfo,
	&t881_f3_FieldInfo,
	&t881_f4_FieldInfo,
	&t881_f5_FieldInfo,
	&t881_f6_FieldInfo,
	&t881_f7_FieldInfo,
	&t881_f8_FieldInfo,
	&t881_f9_FieldInfo,
	&t881_f10_FieldInfo,
	NULL
};
extern MethodInfo m8887_MI;
static PropertyInfo t881____CanRead_PropertyInfo = 
{
	&t881_TI, "CanRead", &m8887_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7001_MI;
static PropertyInfo t881____CanSeek_PropertyInfo = 
{
	&t881_TI, "CanSeek", &m7001_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8888_MI;
static PropertyInfo t881____CanWrite_PropertyInfo = 
{
	&t881_TI, "CanWrite", &m8888_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8889_MI;
static PropertyInfo t881____Capacity_PropertyInfo = 
{
	&t881_TI, "Capacity", NULL, &m8889_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6990_MI;
static PropertyInfo t881____Length_PropertyInfo = 
{
	&t881_TI, "Length", &m6990_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6989_MI;
extern MethodInfo m6992_MI;
static PropertyInfo t881____Position_PropertyInfo = 
{
	&t881_TI, "Position", &m6989_MI, &m6992_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t881_PIs[] =
{
	&t881____CanRead_PropertyInfo,
	&t881____CanSeek_PropertyInfo,
	&t881____CanWrite_PropertyInfo,
	&t881____Capacity_PropertyInfo,
	&t881____Length_PropertyInfo,
	&t881____Position_PropertyInfo,
	NULL
};
extern MethodInfo m8890_MI;
extern MethodInfo m7003_MI;
extern MethodInfo m6991_MI;
extern MethodInfo m8891_MI;
extern MethodInfo m6993_MI;
extern MethodInfo m6994_MI;
extern MethodInfo m4266_MI;
extern MethodInfo m4277_MI;
extern MethodInfo m6959_MI;
extern MethodInfo m6970_MI;
extern MethodInfo m6961_MI;
extern MethodInfo m6971_MI;
extern MethodInfo m4272_MI;
static Il2CppMethodReference t881_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7028_MI,
	&m8887_MI,
	&m7001_MI,
	&m8888_MI,
	&m6990_MI,
	&m6989_MI,
	&m6992_MI,
	&m8890_MI,
	&m1081_MI,
	&m7003_MI,
	&m6991_MI,
	&m8891_MI,
	&m6993_MI,
	&m6994_MI,
	&m4266_MI,
	&m4277_MI,
	&m6959_MI,
	&m6970_MI,
	&m6961_MI,
	&m6971_MI,
	&m8889_MI,
	&m4272_MI,
};
static bool t881_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t881_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t881_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
CustomAttributesCache t881__CustomAttributeCache = {
2,
NULL,
&t881_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t881_0_0_0;
extern Il2CppType t881_1_0_0;
struct t881;
extern CustomAttributesCache t881__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t881_DM = 
{
	NULL, NULL, NULL, t881_IOs, &t291_0_0_0, t881_VT, t881_VTIGM, NULL};
TypeInfo t881_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MemoryStream", "System.IO", t881_MIs, t881_PIs, t881_FIs, NULL, &t881_TI, NULL, &t881__CustomAttributeCache, &t881_0_0_0, &t881_1_0_0, &t881_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t881), sizeof (t881), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 23, 6, 10, 0, 0, 26, 0, 1};
#include "t1718.h"
// Metadata Definition System.IO.MonoFileType
extern TypeInfo t1718_TI;
#include "t1718MD.h"
static MethodInfo* t1718_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1718_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1718_TI, offsetof(t1718, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1718_0_0_32854;
FieldInfo t1718_f2_FieldInfo = 
{
	"Unknown", &t1718_0_0_32854, &t1718_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1718_0_0_32854;
FieldInfo t1718_f3_FieldInfo = 
{
	"Disk", &t1718_0_0_32854, &t1718_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1718_0_0_32854;
FieldInfo t1718_f4_FieldInfo = 
{
	"Char", &t1718_0_0_32854, &t1718_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1718_0_0_32854;
FieldInfo t1718_f5_FieldInfo = 
{
	"Pipe", &t1718_0_0_32854, &t1718_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1718_0_0_32854;
FieldInfo t1718_f6_FieldInfo = 
{
	"Remote", &t1718_0_0_32854, &t1718_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1718_FIs[] =
{
	&t1718_f1_FieldInfo,
	&t1718_f2_FieldInfo,
	&t1718_f3_FieldInfo,
	&t1718_f4_FieldInfo,
	&t1718_f5_FieldInfo,
	&t1718_f6_FieldInfo,
	NULL
};
static const int32_t t1718_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1718_f2_DefaultValue = 
{
	&t1718_f2_FieldInfo, { (char*)&t1718_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1718_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1718_f3_DefaultValue = 
{
	&t1718_f3_FieldInfo, { (char*)&t1718_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1718_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1718_f4_DefaultValue = 
{
	&t1718_f4_FieldInfo, { (char*)&t1718_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1718_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1718_f5_DefaultValue = 
{
	&t1718_f5_FieldInfo, { (char*)&t1718_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1718_f6_DefaultValueData = 32768;
static Il2CppFieldDefaultValueEntry t1718_f6_DefaultValue = 
{
	&t1718_f6_FieldInfo, { (char*)&t1718_f6_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1718_FDVs[] = 
{
	&t1718_f2_DefaultValue,
	&t1718_f3_DefaultValue,
	&t1718_f4_DefaultValue,
	&t1718_f5_DefaultValue,
	&t1718_f6_DefaultValue,
	NULL
};
static Il2CppMethodReference t1718_VT[] =
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
	false,
	false,
	false,
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
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1718_0_0_0;
extern Il2CppType t1718_1_0_0;
const Il2CppTypeDefinitionMetadata t1718_DM = 
{
	NULL, NULL, NULL, t1718_IOs, &t8_0_0_0, t1718_VT, t1718_VTIGM, NULL};
TypeInfo t1718_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoFileType", "System.IO", t1718_MIs, NULL, t1718_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t1718_0_0_0, &t1718_1_0_0, &t1718_DM, NULL, NULL, NULL, t1718_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1718)+ sizeof (Il2CppObject), sizeof (t1718)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1719.h"
// Metadata Definition System.IO.MonoIO
extern TypeInfo t1719_TI;
#include "t1719MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8894_MI = 
{
	".cctor", (methodPointerType)&m8894, &t1719_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2691, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t1720_0_0_0;
static ParameterInfo t1719_m8895_ParameterInfos[] = 
{
	{"error", 0, 134221180, &EmptyCustomAttributesCache, &t1720_0_0_0},
};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8895_MI = 
{
	"GetException", (methodPointerType)&m8895, &t1719_TI, &t138_0_0_0, RuntimeInvoker_t9_t125, t1719_m8895_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2692, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1720_0_0_0;
static ParameterInfo t1719_m8896_ParameterInfos[] = 
{
	{"path", 0, 134221181, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221182, &EmptyCustomAttributesCache, &t1720_0_0_0},
};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8896_MI = 
{
	"GetException", (methodPointerType)&m8896, &t1719_TI, &t138_0_0_0, RuntimeInvoker_t9_t9_t125, t1719_m8896_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2693, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1720_1_0_2;
extern Il2CppType t1720_1_0_0;
static ParameterInfo t1719_m8897_ParameterInfos[] = 
{
	{"path", 0, 134221183, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221184, &EmptyCustomAttributesCache, &t1720_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t2578 (MethodInfo* method, void* obj, void** args);
MethodInfo m8897_MI = 
{
	"CreateDirectory", (methodPointerType)&m8897, &t1719_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t2578, t1719_m8897_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2694, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1720_1_0_2;
static ParameterInfo t1719_m8898_ParameterInfos[] = 
{
	{"path", 0, 134221185, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"path_with_pattern", 1, 134221186, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"attrs", 2, 134221187, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"mask", 3, 134221188, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"error", 4, 134221189, &EmptyCustomAttributesCache, &t1720_1_0_2},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t125_t125_t2578 (MethodInfo* method, void* obj, void** args);
MethodInfo m8898_MI = 
{
	"GetFileSystemEntries", (methodPointerType)&m8898, &t1719_TI, &t221_0_0_0, RuntimeInvoker_t9_t9_t9_t125_t125_t2578, t1719_m8898_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 5, false, false, 2695, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_1_0_2;
static ParameterInfo t1719_m8899_ParameterInfos[] = 
{
	{"error", 0, 134221190, &EmptyCustomAttributesCache, &t1720_1_0_2},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t2578 (MethodInfo* method, void* obj, void** args);
MethodInfo m8899_MI = 
{
	"GetCurrentDirectory", (methodPointerType)&m8899, &t1719_TI, &t2_0_0_0, RuntimeInvoker_t9_t2578, t1719_m8899_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 1, false, false, 2696, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1720_1_0_2;
static ParameterInfo t1719_m8900_ParameterInfos[] = 
{
	{"path", 0, 134221191, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221192, &EmptyCustomAttributesCache, &t1720_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t2578 (MethodInfo* method, void* obj, void** args);
MethodInfo m8900_MI = 
{
	"DeleteFile", (methodPointerType)&m8900, &t1719_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t2578, t1719_m8900_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2697, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1720_1_0_2;
static ParameterInfo t1719_m8901_ParameterInfos[] = 
{
	{"path", 0, 134221193, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221194, &EmptyCustomAttributesCache, &t1720_1_0_2},
};
extern Il2CppType t1706_0_0_0;
extern void* RuntimeInvoker_t1706_t9_t2578 (MethodInfo* method, void* obj, void** args);
MethodInfo m8901_MI = 
{
	"GetFileAttributes", (methodPointerType)&m8901, &t1719_TI, &t1706_0_0_0, RuntimeInvoker_t1706_t9_t2578, t1719_m8901_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2698, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t1720_1_0_2;
static ParameterInfo t1719_m8902_ParameterInfos[] = 
{
	{"handle", 0, 134221195, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"error", 1, 134221196, &EmptyCustomAttributesCache, &t1720_1_0_2},
};
extern Il2CppType t1718_0_0_0;
extern void* RuntimeInvoker_t1718_t58_t2578 (MethodInfo* method, void* obj, void** args);
MethodInfo m8902_MI = 
{
	"GetFileType", (methodPointerType)&m8902, &t1719_TI, &t1718_0_0_0, RuntimeInvoker_t1718_t58_t2578, t1719_m8902_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2699, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1720_1_0_2;
static ParameterInfo t1719_m8903_ParameterInfos[] = 
{
	{"path", 0, 134221197, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221198, &EmptyCustomAttributesCache, &t1720_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t2578 (MethodInfo* method, void* obj, void** args);
MethodInfo m8903_MI = 
{
	"ExistsFile", (methodPointerType)&m8903, &t1719_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t2578, t1719_m8903_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2700, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1720_1_0_2;
static ParameterInfo t1719_m8904_ParameterInfos[] = 
{
	{"path", 0, 134221199, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221200, &EmptyCustomAttributesCache, &t1720_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t2578 (MethodInfo* method, void* obj, void** args);
MethodInfo m8904_MI = 
{
	"ExistsDirectory", (methodPointerType)&m8904, &t1719_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t2578, t1719_m8904_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2701, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1717_1_0_2;
extern Il2CppType t1717_1_0_0;
extern Il2CppType t1720_1_0_2;
static ParameterInfo t1719_m8905_ParameterInfos[] = 
{
	{"path", 0, 134221201, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"stat", 1, 134221202, &EmptyCustomAttributesCache, &t1717_1_0_2},
	{"error", 2, 134221203, &EmptyCustomAttributesCache, &t1720_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t2579_t2578 (MethodInfo* method, void* obj, void** args);
MethodInfo m8905_MI = 
{
	"GetFileStat", (methodPointerType)&m8905, &t1719_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t2579_t2578, t1719_m8905_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 3, false, false, 2702, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t290_0_0_0;
extern Il2CppType t1178_0_0_0;
extern Il2CppType t1713_0_0_0;
extern Il2CppType t1712_0_0_0;
extern Il2CppType t1720_1_0_2;
static ParameterInfo t1719_m8906_ParameterInfos[] = 
{
	{"filename", 0, 134221204, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221205, &EmptyCustomAttributesCache, &t290_0_0_0},
	{"access", 2, 134221206, &EmptyCustomAttributesCache, &t1178_0_0_0},
	{"share", 3, 134221207, &EmptyCustomAttributesCache, &t1713_0_0_0},
	{"options", 4, 134221208, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"error", 5, 134221209, &EmptyCustomAttributesCache, &t1720_1_0_2},
};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58_t9_t125_t125_t125_t125_t2578 (MethodInfo* method, void* obj, void** args);
MethodInfo m8906_MI = 
{
	"Open", (methodPointerType)&m8906, &t1719_TI, &t58_0_0_0, RuntimeInvoker_t58_t9_t125_t125_t125_t125_t2578, t1719_m8906_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 6, false, false, 2703, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t1720_1_0_2;
static ParameterInfo t1719_m8907_ParameterInfos[] = 
{
	{"handle", 0, 134221210, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"error", 1, 134221211, &EmptyCustomAttributesCache, &t1720_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t58_t2578 (MethodInfo* method, void* obj, void** args);
MethodInfo m8907_MI = 
{
	"Close", (methodPointerType)&m8907, &t1719_TI, &t124_0_0_0, RuntimeInvoker_t124_t58_t2578, t1719_m8907_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2704, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1720_1_0_2;
static ParameterInfo t1719_m8908_ParameterInfos[] = 
{
	{"handle", 0, 134221212, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"dest", 1, 134221213, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"dest_offset", 2, 134221214, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134221215, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"error", 4, 134221216, &EmptyCustomAttributesCache, &t1720_1_0_2},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t58_t9_t125_t125_t2578 (MethodInfo* method, void* obj, void** args);
MethodInfo m8908_MI = 
{
	"Read", (methodPointerType)&m8908, &t1719_TI, &t125_0_0_0, RuntimeInvoker_t125_t58_t9_t125_t125_t2578, t1719_m8908_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 5, false, false, 2705, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t723_0_0_1;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1720_1_0_2;
static ParameterInfo t1719_m8909_ParameterInfos[] = 
{
	{"handle", 0, 134221217, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"src", 1, 134221218, &EmptyCustomAttributesCache, &t723_0_0_1},
	{"src_offset", 2, 134221219, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134221220, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"error", 4, 134221221, &EmptyCustomAttributesCache, &t1720_1_0_2},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t58_t9_t125_t125_t2578 (MethodInfo* method, void* obj, void** args);
MethodInfo m8909_MI = 
{
	"Write", (methodPointerType)&m8909, &t1719_TI, &t125_0_0_0, RuntimeInvoker_t125_t58_t9_t125_t125_t2578, t1719_m8909_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 5, false, false, 2706, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t1490_0_0_0;
extern Il2CppType t1720_1_0_2;
static ParameterInfo t1719_m8910_ParameterInfos[] = 
{
	{"handle", 0, 134221222, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"offset", 1, 134221223, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"origin", 2, 134221224, &EmptyCustomAttributesCache, &t1490_0_0_0},
	{"error", 3, 134221225, &EmptyCustomAttributesCache, &t1720_1_0_2},
};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292_t58_t292_t125_t2578 (MethodInfo* method, void* obj, void** args);
MethodInfo m8910_MI = 
{
	"Seek", (methodPointerType)&m8910, &t1719_TI, &t292_0_0_0, RuntimeInvoker_t292_t58_t292_t125_t2578, t1719_m8910_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 4, false, false, 2707, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t1720_1_0_2;
static ParameterInfo t1719_m8911_ParameterInfos[] = 
{
	{"handle", 0, 134221226, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"error", 1, 134221227, &EmptyCustomAttributesCache, &t1720_1_0_2},
};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292_t58_t2578 (MethodInfo* method, void* obj, void** args);
MethodInfo m8911_MI = 
{
	"GetLength", (methodPointerType)&m8911, &t1719_TI, &t292_0_0_0, RuntimeInvoker_t292_t58_t2578, t1719_m8911_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2708, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t1720_1_0_2;
static ParameterInfo t1719_m8912_ParameterInfos[] = 
{
	{"handle", 0, 134221228, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"length", 1, 134221229, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"error", 2, 134221230, &EmptyCustomAttributesCache, &t1720_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t58_t292_t2578 (MethodInfo* method, void* obj, void** args);
MethodInfo m8912_MI = 
{
	"SetLength", (methodPointerType)&m8912, &t1719_TI, &t124_0_0_0, RuntimeInvoker_t124_t58_t292_t2578, t1719_m8912_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 3, false, false, 2709, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m8913_MI = 
{
	"get_ConsoleOutput", (methodPointerType)&m8913, &t1719_TI, &t58_0_0_0, RuntimeInvoker_t58, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2710, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m8914_MI = 
{
	"get_ConsoleInput", (methodPointerType)&m8914, &t1719_TI, &t58_0_0_0, RuntimeInvoker_t58, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2711, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m8915_MI = 
{
	"get_ConsoleError", (methodPointerType)&m8915, &t1719_TI, &t58_0_0_0, RuntimeInvoker_t58, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2712, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern void* RuntimeInvoker_t296 (MethodInfo* method, void* obj, void** args);
MethodInfo m8916_MI = 
{
	"get_VolumeSeparatorChar", (methodPointerType)&m8916, &t1719_TI, &t296_0_0_0, RuntimeInvoker_t296, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2713, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern void* RuntimeInvoker_t296 (MethodInfo* method, void* obj, void** args);
MethodInfo m8917_MI = 
{
	"get_DirectorySeparatorChar", (methodPointerType)&m8917, &t1719_TI, &t296_0_0_0, RuntimeInvoker_t296, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2714, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern void* RuntimeInvoker_t296 (MethodInfo* method, void* obj, void** args);
MethodInfo m8918_MI = 
{
	"get_AltDirectorySeparatorChar", (methodPointerType)&m8918, &t1719_TI, &t296_0_0_0, RuntimeInvoker_t296, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2715, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
extern void* RuntimeInvoker_t296 (MethodInfo* method, void* obj, void** args);
MethodInfo m8919_MI = 
{
	"get_PathSeparator", (methodPointerType)&m8919, &t1719_TI, &t296_0_0_0, RuntimeInvoker_t296, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2716, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1719_MIs[] =
{
	&m8894_MI,
	&m8895_MI,
	&m8896_MI,
	&m8897_MI,
	&m8898_MI,
	&m8899_MI,
	&m8900_MI,
	&m8901_MI,
	&m8902_MI,
	&m8903_MI,
	&m8904_MI,
	&m8905_MI,
	&m8906_MI,
	&m8907_MI,
	&m8908_MI,
	&m8909_MI,
	&m8910_MI,
	&m8911_MI,
	&m8912_MI,
	&m8913_MI,
	&m8914_MI,
	&m8915_MI,
	&m8916_MI,
	&m8917_MI,
	&m8918_MI,
	&m8919_MI,
	NULL
};
extern Il2CppType t1706_0_0_54;
FieldInfo t1719_f0_FieldInfo = 
{
	"InvalidFileAttributes", &t1706_0_0_54, &t1719_TI, offsetof(t1719_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_54;
FieldInfo t1719_f1_FieldInfo = 
{
	"InvalidHandle", &t58_0_0_54, &t1719_TI, offsetof(t1719_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1719_FIs[] =
{
	&t1719_f0_FieldInfo,
	&t1719_f1_FieldInfo,
	NULL
};
extern MethodInfo m8913_MI;
static PropertyInfo t1719____ConsoleOutput_PropertyInfo = 
{
	&t1719_TI, "ConsoleOutput", &m8913_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8914_MI;
static PropertyInfo t1719____ConsoleInput_PropertyInfo = 
{
	&t1719_TI, "ConsoleInput", &m8914_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8915_MI;
static PropertyInfo t1719____ConsoleError_PropertyInfo = 
{
	&t1719_TI, "ConsoleError", &m8915_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8916_MI;
static PropertyInfo t1719____VolumeSeparatorChar_PropertyInfo = 
{
	&t1719_TI, "VolumeSeparatorChar", &m8916_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8917_MI;
static PropertyInfo t1719____DirectorySeparatorChar_PropertyInfo = 
{
	&t1719_TI, "DirectorySeparatorChar", &m8917_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8918_MI;
static PropertyInfo t1719____AltDirectorySeparatorChar_PropertyInfo = 
{
	&t1719_TI, "AltDirectorySeparatorChar", &m8918_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8919_MI;
static PropertyInfo t1719____PathSeparator_PropertyInfo = 
{
	&t1719_TI, "PathSeparator", &m8919_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1719_PIs[] =
{
	&t1719____ConsoleOutput_PropertyInfo,
	&t1719____ConsoleInput_PropertyInfo,
	&t1719____ConsoleError_PropertyInfo,
	&t1719____VolumeSeparatorChar_PropertyInfo,
	&t1719____DirectorySeparatorChar_PropertyInfo,
	&t1719____AltDirectorySeparatorChar_PropertyInfo,
	&t1719____PathSeparator_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1719_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1719_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1719_0_0_0;
extern Il2CppType t1719_1_0_0;
struct t1719;
const Il2CppTypeDefinitionMetadata t1719_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1719_VT, t1719_VTIGM, NULL};
TypeInfo t1719_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoIO", "System.IO", t1719_MIs, t1719_PIs, t1719_FIs, NULL, &t1719_TI, NULL, &EmptyCustomAttributesCache, &t1719_0_0_0, &t1719_1_0_0, &t1719_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1719), sizeof (t1719), 0, -1, sizeof(t1719_SFs), 0, -1, 1048832, 0, 0, false, false, false, false, false, false, false, false, true, false, 26, 7, 2, 0, 0, 4, 0, 0};
#include "t1720.h"
// Metadata Definition System.IO.MonoIOError
extern TypeInfo t1720_TI;
#include "t1720MD.h"
static MethodInfo* t1720_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1720_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1720_TI, offsetof(t1720, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f2_FieldInfo = 
{
	"ERROR_SUCCESS", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f3_FieldInfo = 
{
	"ERROR_FILE_NOT_FOUND", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f4_FieldInfo = 
{
	"ERROR_PATH_NOT_FOUND", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f5_FieldInfo = 
{
	"ERROR_TOO_MANY_OPEN_FILES", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f6_FieldInfo = 
{
	"ERROR_ACCESS_DENIED", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f7_FieldInfo = 
{
	"ERROR_INVALID_HANDLE", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f8_FieldInfo = 
{
	"ERROR_INVALID_DRIVE", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f9_FieldInfo = 
{
	"ERROR_NOT_SAME_DEVICE", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f10_FieldInfo = 
{
	"ERROR_NO_MORE_FILES", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f11_FieldInfo = 
{
	"ERROR_WRITE_FAULT", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f12_FieldInfo = 
{
	"ERROR_READ_FAULT", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f13_FieldInfo = 
{
	"ERROR_GEN_FAILURE", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f14_FieldInfo = 
{
	"ERROR_SHARING_VIOLATION", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f15_FieldInfo = 
{
	"ERROR_LOCK_VIOLATION", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f16_FieldInfo = 
{
	"ERROR_HANDLE_DISK_FULL", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f17_FieldInfo = 
{
	"ERROR_FILE_EXISTS", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f18_FieldInfo = 
{
	"ERROR_CANNOT_MAKE", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f19_FieldInfo = 
{
	"ERROR_INVALID_PARAMETER", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f20_FieldInfo = 
{
	"ERROR_BROKEN_PIPE", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f21_FieldInfo = 
{
	"ERROR_INVALID_NAME", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f22_FieldInfo = 
{
	"ERROR_DIR_NOT_EMPTY", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f23_FieldInfo = 
{
	"ERROR_ALREADY_EXISTS", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f24_FieldInfo = 
{
	"ERROR_FILENAME_EXCED_RANGE", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1720_0_0_32854;
FieldInfo t1720_f25_FieldInfo = 
{
	"ERROR_ENCRYPTION_FAILED", &t1720_0_0_32854, &t1720_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1720_FIs[] =
{
	&t1720_f1_FieldInfo,
	&t1720_f2_FieldInfo,
	&t1720_f3_FieldInfo,
	&t1720_f4_FieldInfo,
	&t1720_f5_FieldInfo,
	&t1720_f6_FieldInfo,
	&t1720_f7_FieldInfo,
	&t1720_f8_FieldInfo,
	&t1720_f9_FieldInfo,
	&t1720_f10_FieldInfo,
	&t1720_f11_FieldInfo,
	&t1720_f12_FieldInfo,
	&t1720_f13_FieldInfo,
	&t1720_f14_FieldInfo,
	&t1720_f15_FieldInfo,
	&t1720_f16_FieldInfo,
	&t1720_f17_FieldInfo,
	&t1720_f18_FieldInfo,
	&t1720_f19_FieldInfo,
	&t1720_f20_FieldInfo,
	&t1720_f21_FieldInfo,
	&t1720_f22_FieldInfo,
	&t1720_f23_FieldInfo,
	&t1720_f24_FieldInfo,
	&t1720_f25_FieldInfo,
	NULL
};
static const int32_t t1720_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1720_f2_DefaultValue = 
{
	&t1720_f2_FieldInfo, { (char*)&t1720_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1720_f3_DefaultValue = 
{
	&t1720_f3_FieldInfo, { (char*)&t1720_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1720_f4_DefaultValue = 
{
	&t1720_f4_FieldInfo, { (char*)&t1720_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1720_f5_DefaultValue = 
{
	&t1720_f5_FieldInfo, { (char*)&t1720_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f6_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1720_f6_DefaultValue = 
{
	&t1720_f6_FieldInfo, { (char*)&t1720_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f7_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1720_f7_DefaultValue = 
{
	&t1720_f7_FieldInfo, { (char*)&t1720_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f8_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t1720_f8_DefaultValue = 
{
	&t1720_f8_FieldInfo, { (char*)&t1720_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f9_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry t1720_f9_DefaultValue = 
{
	&t1720_f9_FieldInfo, { (char*)&t1720_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f10_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry t1720_f10_DefaultValue = 
{
	&t1720_f10_FieldInfo, { (char*)&t1720_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f11_DefaultValueData = 29;
static Il2CppFieldDefaultValueEntry t1720_f11_DefaultValue = 
{
	&t1720_f11_FieldInfo, { (char*)&t1720_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f12_DefaultValueData = 30;
static Il2CppFieldDefaultValueEntry t1720_f12_DefaultValue = 
{
	&t1720_f12_FieldInfo, { (char*)&t1720_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f13_DefaultValueData = 31;
static Il2CppFieldDefaultValueEntry t1720_f13_DefaultValue = 
{
	&t1720_f13_FieldInfo, { (char*)&t1720_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f14_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1720_f14_DefaultValue = 
{
	&t1720_f14_FieldInfo, { (char*)&t1720_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f15_DefaultValueData = 33;
static Il2CppFieldDefaultValueEntry t1720_f15_DefaultValue = 
{
	&t1720_f15_FieldInfo, { (char*)&t1720_f15_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f16_DefaultValueData = 39;
static Il2CppFieldDefaultValueEntry t1720_f16_DefaultValue = 
{
	&t1720_f16_FieldInfo, { (char*)&t1720_f16_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f17_DefaultValueData = 80;
static Il2CppFieldDefaultValueEntry t1720_f17_DefaultValue = 
{
	&t1720_f17_FieldInfo, { (char*)&t1720_f17_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f18_DefaultValueData = 82;
static Il2CppFieldDefaultValueEntry t1720_f18_DefaultValue = 
{
	&t1720_f18_FieldInfo, { (char*)&t1720_f18_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f19_DefaultValueData = 87;
static Il2CppFieldDefaultValueEntry t1720_f19_DefaultValue = 
{
	&t1720_f19_FieldInfo, { (char*)&t1720_f19_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f20_DefaultValueData = 109;
static Il2CppFieldDefaultValueEntry t1720_f20_DefaultValue = 
{
	&t1720_f20_FieldInfo, { (char*)&t1720_f20_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f21_DefaultValueData = 123;
static Il2CppFieldDefaultValueEntry t1720_f21_DefaultValue = 
{
	&t1720_f21_FieldInfo, { (char*)&t1720_f21_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f22_DefaultValueData = 145;
static Il2CppFieldDefaultValueEntry t1720_f22_DefaultValue = 
{
	&t1720_f22_FieldInfo, { (char*)&t1720_f22_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f23_DefaultValueData = 183;
static Il2CppFieldDefaultValueEntry t1720_f23_DefaultValue = 
{
	&t1720_f23_FieldInfo, { (char*)&t1720_f23_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f24_DefaultValueData = 206;
static Il2CppFieldDefaultValueEntry t1720_f24_DefaultValue = 
{
	&t1720_f24_FieldInfo, { (char*)&t1720_f24_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1720_f25_DefaultValueData = 6000;
static Il2CppFieldDefaultValueEntry t1720_f25_DefaultValue = 
{
	&t1720_f25_FieldInfo, { (char*)&t1720_f25_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1720_FDVs[] = 
{
	&t1720_f2_DefaultValue,
	&t1720_f3_DefaultValue,
	&t1720_f4_DefaultValue,
	&t1720_f5_DefaultValue,
	&t1720_f6_DefaultValue,
	&t1720_f7_DefaultValue,
	&t1720_f8_DefaultValue,
	&t1720_f9_DefaultValue,
	&t1720_f10_DefaultValue,
	&t1720_f11_DefaultValue,
	&t1720_f12_DefaultValue,
	&t1720_f13_DefaultValue,
	&t1720_f14_DefaultValue,
	&t1720_f15_DefaultValue,
	&t1720_f16_DefaultValue,
	&t1720_f17_DefaultValue,
	&t1720_f18_DefaultValue,
	&t1720_f19_DefaultValue,
	&t1720_f20_DefaultValue,
	&t1720_f21_DefaultValue,
	&t1720_f22_DefaultValue,
	&t1720_f23_DefaultValue,
	&t1720_f24_DefaultValue,
	&t1720_f25_DefaultValue,
	NULL
};
static Il2CppMethodReference t1720_VT[] =
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
	false,
	false,
	false,
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
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
const Il2CppTypeDefinitionMetadata t1720_DM = 
{
	NULL, NULL, NULL, t1720_IOs, &t8_0_0_0, t1720_VT, t1720_VTIGM, NULL};
TypeInfo t1720_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoIOError", "System.IO", t1720_MIs, NULL, t1720_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t1720_0_0_0, &t1720_1_0_0, &t1720_DM, NULL, NULL, NULL, t1720_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1720)+ sizeof (Il2CppObject), sizeof (t1720)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 25, 0, 0, 23, 0, 3};
#include "t1717.h"
// Metadata Definition System.IO.MonoIOStat
extern TypeInfo t1717_TI;
#include "t1717MD.h"
static MethodInfo* t1717_MIs[] =
{
	NULL
};
extern Il2CppType t2_0_0_6;
FieldInfo t1717_f0_FieldInfo = 
{
	"Name", &t2_0_0_6, &t1717_TI, offsetof(t1717, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1706_0_0_6;
FieldInfo t1717_f1_FieldInfo = 
{
	"Attributes", &t1706_0_0_6, &t1717_TI, offsetof(t1717, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t292_0_0_6;
FieldInfo t1717_f2_FieldInfo = 
{
	"Length", &t292_0_0_6, &t1717_TI, offsetof(t1717, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t292_0_0_6;
FieldInfo t1717_f3_FieldInfo = 
{
	"CreationTime", &t292_0_0_6, &t1717_TI, offsetof(t1717, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t292_0_0_6;
FieldInfo t1717_f4_FieldInfo = 
{
	"LastAccessTime", &t292_0_0_6, &t1717_TI, offsetof(t1717, f4) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t292_0_0_6;
FieldInfo t1717_f5_FieldInfo = 
{
	"LastWriteTime", &t292_0_0_6, &t1717_TI, offsetof(t1717, f5) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1717_FIs[] =
{
	&t1717_f0_FieldInfo,
	&t1717_f1_FieldInfo,
	&t1717_f2_FieldInfo,
	&t1717_f3_FieldInfo,
	&t1717_f4_FieldInfo,
	&t1717_f5_FieldInfo,
	NULL
};
static Il2CppMethodReference t1717_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1717_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1717_0_0_0;
const Il2CppTypeDefinitionMetadata t1717_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1717_VT, t1717_VTIGM, NULL};
TypeInfo t1717_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoIOStat", "System.IO", t1717_MIs, NULL, t1717_FIs, NULL, &t1717_TI, NULL, &EmptyCustomAttributesCache, &t1717_0_0_0, &t1717_1_0_0, &t1717_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t1717_marshal, (methodPointerType)t1717_marshal_back, (methodPointerType)t1717_marshal_cleanup, sizeof (t1717)+ sizeof (Il2CppObject), sizeof (t1717)+ sizeof (Il2CppObject), 0, sizeof(t1717_marshaled), 0, 0, -1, 1048840, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 4, 0, 0};
#include "t293.h"
// Metadata Definition System.IO.Path
extern TypeInfo t293_TI;
#include "t293MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8920_MI = 
{
	".cctor", (methodPointerType)&m8920, &t293_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2717, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t293_m1076_ParameterInfos[] = 
{
	{"path1", 0, 134221231, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"path2", 1, 134221232, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1076_MI = 
{
	"Combine", (methodPointerType)&m1076, &t293_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t9, t293_m1076_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2718, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t293_m8921_ParameterInfos[] = 
{
	{"s", 0, 134221233, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8921_MI = 
{
	"CleanPath", (methodPointerType)&m8921, &t293_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t293_m8921_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 2719, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t293_m8922_ParameterInfos[] = 
{
	{"path", 0, 134221234, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8922_MI = 
{
	"GetDirectoryName", (methodPointerType)&m8922, &t293_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t293_m8922_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2720, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t293_m8923_ParameterInfos[] = 
{
	{"path", 0, 134221235, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8923_MI = 
{
	"GetExtension", (methodPointerType)&m8923, &t293_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t293_m8923_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2721, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t293_m8924_ParameterInfos[] = 
{
	{"path", 0, 134221236, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8924_MI = 
{
	"GetFileName", (methodPointerType)&m8924, &t293_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t293_m8924_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2722, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t293_m8925_ParameterInfos[] = 
{
	{"path", 0, 134221237, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8925_MI = 
{
	"GetFullPath", (methodPointerType)&m8925, &t293_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t293_m8925_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2723, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t293_m8926_ParameterInfos[] = 
{
	{"path", 0, 134221238, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8926_MI = 
{
	"WindowsDriveAdjustment", (methodPointerType)&m8926, &t293_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t293_m8926_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 2724, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t293_m8927_ParameterInfos[] = 
{
	{"path", 0, 134221239, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8927_MI = 
{
	"InsecureGetFullPath", (methodPointerType)&m8927, &t293_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t293_m8927_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 2725, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
static ParameterInfo t293_m8928_ParameterInfos[] = 
{
	{"c", 0, 134221240, &EmptyCustomAttributesCache, &t296_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m8928_MI = 
{
	"IsDsc", (methodPointerType)&m8928, &t293_TI, &t124_0_0_0, RuntimeInvoker_t124_t327, t293_m8928_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2726, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t293_m8929_ParameterInfos[] = 
{
	{"path", 0, 134221241, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8929_MI = 
{
	"GetPathRoot", (methodPointerType)&m8929, &t293_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t293_m8929_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2727, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t293_m8930_ParameterInfos[] = 
{
	{"path", 0, 134221242, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8930_MI = 
{
	"IsPathRooted", (methodPointerType)&m8930, &t293_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t293_m8930_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2728, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8931_MI = 
{
	"GetInvalidPathChars", (methodPointerType)&m8931, &t293_TI, &t305_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 2729, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t293_m8932_ParameterInfos[] = 
{
	{"path", 0, 134221243, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8932_MI = 
{
	"findExtension", (methodPointerType)&m8932, &t293_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t293_m8932_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2730, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t293_m8933_ParameterInfos[] = 
{
	{"path", 0, 134221244, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8933_MI = 
{
	"GetServerAndShare", (methodPointerType)&m8933, &t293_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t293_m8933_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2731, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t293_m8934_ParameterInfos[] = 
{
	{"root", 0, 134221245, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"path", 1, 134221246, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8934_MI = 
{
	"SameRoot", (methodPointerType)&m8934, &t293_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t293_m8934_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 2732, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t293_m8935_ParameterInfos[] = 
{
	{"path", 0, 134221247, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8935_MI = 
{
	"CanonicalizePath", (methodPointerType)&m8935, &t293_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t293_m8935_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2733, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t293_MIs[] =
{
	&m8920_MI,
	&m1076_MI,
	&m8921_MI,
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
	NULL
};
extern Il2CppType t305_0_0_54;
extern CustomAttributesCache t293__CustomAttributeCache_InvalidPathChars;
FieldInfo t293_f0_FieldInfo = 
{
	"InvalidPathChars", &t305_0_0_54, &t293_TI, offsetof(t293_SFs, f0), &t293__CustomAttributeCache_InvalidPathChars};
extern Il2CppType t296_0_0_54;
FieldInfo t293_f1_FieldInfo = 
{
	"AltDirectorySeparatorChar", &t296_0_0_54, &t293_TI, offsetof(t293_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t296_0_0_54;
FieldInfo t293_f2_FieldInfo = 
{
	"DirectorySeparatorChar", &t296_0_0_54, &t293_TI, offsetof(t293_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t296_0_0_54;
FieldInfo t293_f3_FieldInfo = 
{
	"PathSeparator", &t296_0_0_54, &t293_TI, offsetof(t293_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_51;
FieldInfo t293_f4_FieldInfo = 
{
	"DirectorySeparatorStr", &t2_0_0_51, &t293_TI, offsetof(t293_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t296_0_0_54;
FieldInfo t293_f5_FieldInfo = 
{
	"VolumeSeparatorChar", &t296_0_0_54, &t293_TI, offsetof(t293_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_51;
FieldInfo t293_f6_FieldInfo = 
{
	"PathSeparatorChars", &t305_0_0_51, &t293_TI, offsetof(t293_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_49;
FieldInfo t293_f7_FieldInfo = 
{
	"dirEqualsVolume", &t124_0_0_49, &t293_TI, offsetof(t293_SFs, f7), &EmptyCustomAttributesCache};
static FieldInfo* t293_FIs[] =
{
	&t293_f0_FieldInfo,
	&t293_f1_FieldInfo,
	&t293_f2_FieldInfo,
	&t293_f3_FieldInfo,
	&t293_f4_FieldInfo,
	&t293_f5_FieldInfo,
	&t293_f6_FieldInfo,
	&t293_f7_FieldInfo,
	NULL
};
static Il2CppMethodReference t293_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t293_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t293_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t293_CustomAttributesCacheGenerator_InvalidPathChars(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t611 * tmp;
		tmp = (t611 *)il2cpp_codegen_object_new (&t611_TI);
		m2970(tmp, il2cpp_codegen_string_new_wrapper("see GetInvalidPathChars and GetInvalidFileNameChars methods."), &m2970_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t293__CustomAttributeCache = {
1,
NULL,
&t293_CustomAttributesCacheGenerator
};
CustomAttributesCache t293__CustomAttributeCache_InvalidPathChars = {
1,
NULL,
&t293_CustomAttributesCacheGenerator_InvalidPathChars
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t293_0_0_0;
extern Il2CppType t293_1_0_0;
struct t293;
extern CustomAttributesCache t293__CustomAttributeCache;
extern CustomAttributesCache t293__CustomAttributeCache_InvalidPathChars;
const Il2CppTypeDefinitionMetadata t293_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t293_VT, t293_VTIGM, NULL};
TypeInfo t293_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Path", "System.IO", t293_MIs, NULL, t293_FIs, NULL, &t293_TI, NULL, &t293__CustomAttributeCache, &t293_0_0_0, &t293_1_0_0, &t293_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t293), sizeof (t293), 0, -1, sizeof(t293_SFs), 0, -1, 385, 0, 0, false, false, false, false, false, false, false, false, true, false, 17, 0, 8, 0, 0, 4, 0, 0};
#include "t1721.h"
// Metadata Definition System.IO.PathTooLongException
extern TypeInfo t1721_TI;
#include "t1721MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8936_MI = 
{
	".ctor", (methodPointerType)&m8936, &t1721_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2734, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1721_m8937_ParameterInfos[] = 
{
	{"message", 0, 134221248, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8937_MI = 
{
	".ctor", (methodPointerType)&m8937, &t1721_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1721_m8937_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2735, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1721_m8938_ParameterInfos[] = 
{
	{"info", 0, 134221249, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134221250, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m8938_MI = 
{
	".ctor", (methodPointerType)&m8938, &t1721_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1721_m8938_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2736, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1721_MIs[] =
{
	&m8936_MI,
	&m8937_MI,
	&m8938_MI,
	NULL
};
static Il2CppMethodReference t1721_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4472_MI,
	&m4473_MI,
	&m4219_MI,
	&m1083_MI,
	&m4474_MI,
	&m4417_MI,
	&m4473_MI,
	&m4418_MI,
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
};
static Il2CppInterfaceOffsetPair t1721_IOs[] = 
{
	{ &t616_0_0_0, 4},
	{ &t941_0_0_0, 5},
};
void t1721_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1721__CustomAttributeCache = {
1,
NULL,
&t1721_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1721_0_0_0;
extern Il2CppType t1721_1_0_0;
struct t1721;
extern CustomAttributesCache t1721__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1721_DM = 
{
	NULL, NULL, NULL, t1721_IOs, &t1540_0_0_0, t1721_VT, t1721_VTIGM, NULL};
TypeInfo t1721_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PathTooLongException", "System.IO", t1721_MIs, NULL, NULL, NULL, &t1721_TI, NULL, &t1721__CustomAttributeCache, &t1721_0_0_0, &t1721_1_0_0, &t1721_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1721), sizeof (t1721), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1722.h"
// Metadata Definition System.IO.SearchPattern
extern TypeInfo t1722_TI;
#include "t1722MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8939_MI = 
{
	".cctor", (methodPointerType)&m8939, &t1722_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2737, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1722_MIs[] =
{
	&m8939_MI,
	NULL
};
extern Il2CppType t305_0_0_51;
FieldInfo t1722_f0_FieldInfo = 
{
	"WildcardChars", &t305_0_0_51, &t1722_TI, offsetof(t1722_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_51;
FieldInfo t1722_f1_FieldInfo = 
{
	"InvalidChars", &t305_0_0_51, &t1722_TI, offsetof(t1722_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1722_FIs[] =
{
	&t1722_f0_FieldInfo,
	&t1722_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1722_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1722_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1722_0_0_0;
extern Il2CppType t1722_1_0_0;
struct t1722;
const Il2CppTypeDefinitionMetadata t1722_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1722_VT, t1722_VTIGM, NULL};
TypeInfo t1722_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SearchPattern", "System.IO", t1722_MIs, NULL, t1722_FIs, NULL, &t1722_TI, NULL, &EmptyCustomAttributesCache, &t1722_0_0_0, &t1722_1_0_0, &t1722_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1722), sizeof (t1722), 0, -1, sizeof(t1722_SFs), 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, true, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t1490.h"
// Metadata Definition System.IO.SeekOrigin
extern TypeInfo t1490_TI;
#include "t1490MD.h"
static MethodInfo* t1490_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1490_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1490_TI, offsetof(t1490, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1490_0_0_32854;
FieldInfo t1490_f2_FieldInfo = 
{
	"Begin", &t1490_0_0_32854, &t1490_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1490_0_0_32854;
FieldInfo t1490_f3_FieldInfo = 
{
	"Current", &t1490_0_0_32854, &t1490_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1490_0_0_32854;
FieldInfo t1490_f4_FieldInfo = 
{
	"End", &t1490_0_0_32854, &t1490_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1490_FIs[] =
{
	&t1490_f1_FieldInfo,
	&t1490_f2_FieldInfo,
	&t1490_f3_FieldInfo,
	&t1490_f4_FieldInfo,
	NULL
};
static const int32_t t1490_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1490_f2_DefaultValue = 
{
	&t1490_f2_FieldInfo, { (char*)&t1490_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1490_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1490_f3_DefaultValue = 
{
	&t1490_f3_FieldInfo, { (char*)&t1490_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1490_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1490_f4_DefaultValue = 
{
	&t1490_f4_FieldInfo, { (char*)&t1490_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1490_FDVs[] = 
{
	&t1490_f2_DefaultValue,
	&t1490_f3_DefaultValue,
	&t1490_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t1490_VT[] =
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
static bool t1490_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1490_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1490_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1490__CustomAttributeCache = {
1,
NULL,
&t1490_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1490_1_0_0;
extern CustomAttributesCache t1490__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1490_DM = 
{
	NULL, NULL, NULL, t1490_IOs, &t8_0_0_0, t1490_VT, t1490_VTIGM, NULL};
TypeInfo t1490_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SeekOrigin", "System.IO", t1490_MIs, NULL, t1490_FIs, NULL, &t125_TI, NULL, &t1490__CustomAttributeCache, &t1490_0_0_0, &t1490_1_0_0, &t1490_DM, NULL, NULL, NULL, t1490_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1490)+ sizeof (Il2CppObject), sizeof (t1490)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t291.h"
// Metadata Definition System.IO.Stream
extern TypeInfo t291_TI;
#include "t291MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6982_MI = 
{
	".ctor", (methodPointerType)&m6982, &t291_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2738, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8940_MI = 
{
	".cctor", (methodPointerType)&m8940, &t291_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2739, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m6979_MI = 
{
	"get_CanRead", NULL, &t291_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 5, 0, false, false, 2740, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m6962_MI = 
{
	"get_CanSeek", NULL, &t291_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 6, 0, false, false, 2741, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m6980_MI = 
{
	"get_CanWrite", NULL, &t291_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 7, 0, false, false, 2742, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m6968_MI = 
{
	"get_Length", NULL, &t291_TI, &t292_0_0_0, RuntimeInvoker_t292, NULL, &EmptyCustomAttributesCache, 3526, 0, 8, 0, false, false, 2743, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m11981_MI = 
{
	"get_Position", NULL, &t291_TI, &t292_0_0_0, RuntimeInvoker_t292, NULL, &EmptyCustomAttributesCache, 3526, 0, 9, 0, false, false, 2744, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
static ParameterInfo t291_m12746_ParameterInfos[] = 
{
	{"value", 0, 134221251, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m12746_MI = 
{
	"set_Position", NULL, &t291_TI, &t122_0_0_0, RuntimeInvoker_t122_t292, t291_m12746_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 10, 1, false, false, 2745, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7028_MI = 
{
	"Dispose", (methodPointerType)&m7028, &t291_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 486, 0, 4, 0, false, false, 2746, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t291_m6999_ParameterInfos[] = 
{
	{"disposing", 0, 134221252, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m6999_MI = 
{
	"Dispose", (methodPointerType)&m6999, &t291_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t291_m6999_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 11, 1, false, false, 2747, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m1081_MI = 
{
	"Close", (methodPointerType)&m1081, &t291_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 12, 0, false, false, 2748, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6998_MI = 
{
	"Flush", NULL, &t291_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 1478, 0, 13, 0, false, false, 2749, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t291_m6969_ParameterInfos[] = 
{
	{"buffer", 0, 134221253, &EmptyCustomAttributesCache, &t723_0_0_3},
	{"offset", 1, 134221254, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221255, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6969_MI = 
{
	"Read", NULL, &t291_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t291_m6969_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 14, 3, false, false, 2750, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6967_MI = 
{
	"ReadByte", (methodPointerType)&m6967, &t291_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 15, 0, false, false, 2751, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern Il2CppType t1490_0_0_0;
static ParameterInfo t291_m12747_ParameterInfos[] = 
{
	{"offset", 0, 134221256, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"origin", 1, 134221257, &EmptyCustomAttributesCache, &t1490_0_0_0},
};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292_t292_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12747_MI = 
{
	"Seek", NULL, &t291_TI, &t292_0_0_0, RuntimeInvoker_t292_t292_t125, t291_m12747_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 16, 2, false, false, 2752, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
static ParameterInfo t291_m6963_ParameterInfos[] = 
{
	{"value", 0, 134221258, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m6963_MI = 
{
	"SetLength", NULL, &t291_TI, &t122_0_0_0, RuntimeInvoker_t122_t292, t291_m6963_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 17, 1, false, false, 2753, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t291_m6953_ParameterInfos[] = 
{
	{"buffer", 0, 134221259, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134221260, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221261, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6953_MI = 
{
	"Write", NULL, &t291_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t291_m6953_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 18, 3, false, false, 2754, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t568_0_0_0;
static ParameterInfo t291_m6944_ParameterInfos[] = 
{
	{"value", 0, 134221262, &EmptyCustomAttributesCache, &t568_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m6944_MI = 
{
	"WriteByte", (methodPointerType)&m6944, &t291_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t291_m6944_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 19, 1, false, false, 2755, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t463_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t291_m6959_ParameterInfos[] = 
{
	{"buffer", 0, 134221263, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134221264, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221265, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"callback", 3, 134221266, &EmptyCustomAttributesCache, &t463_0_0_0},
	{"state", 4, 134221267, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t462_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6959_MI = 
{
	"BeginRead", (methodPointerType)&m6959, &t291_TI, &t462_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t291_m6959_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 20, 5, false, false, 2756, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t463_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t291_m6970_ParameterInfos[] = 
{
	{"buffer", 0, 134221268, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134221269, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221270, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"callback", 3, 134221271, &EmptyCustomAttributesCache, &t463_0_0_0},
	{"state", 4, 134221272, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t462_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6970_MI = 
{
	"BeginWrite", (methodPointerType)&m6970, &t291_TI, &t462_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t291_m6970_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 21, 5, false, false, 2757, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t462_0_0_0;
static ParameterInfo t291_m6961_ParameterInfos[] = 
{
	{"asyncResult", 0, 134221273, &EmptyCustomAttributesCache, &t462_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6961_MI = 
{
	"EndRead", (methodPointerType)&m6961, &t291_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t291_m6961_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 22, 1, false, false, 2758, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t462_0_0_0;
static ParameterInfo t291_m6971_ParameterInfos[] = 
{
	{"asyncResult", 0, 134221274, &EmptyCustomAttributesCache, &t462_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6971_MI = 
{
	"EndWrite", (methodPointerType)&m6971, &t291_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t291_m6971_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 23, 1, false, false, 2759, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t291_MIs[] =
{
	&m6982_MI,
	&m8940_MI,
	&m6979_MI,
	&m6962_MI,
	&m6980_MI,
	&m6968_MI,
	&m11981_MI,
	&m12746_MI,
	&m7028_MI,
	&m6999_MI,
	&m1081_MI,
	&m6998_MI,
	&m6969_MI,
	&m6967_MI,
	&m12747_MI,
	&m6963_MI,
	&m6953_MI,
	&m6944_MI,
	&m6959_MI,
	&m6970_MI,
	&m6961_MI,
	&m6971_MI,
	NULL
};
extern Il2CppType t291_0_0_54;
FieldInfo t291_f0_FieldInfo = 
{
	"Null", &t291_0_0_54, &t291_TI, offsetof(t291_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t291_FIs[] =
{
	&t291_f0_FieldInfo,
	NULL
};
extern MethodInfo m6979_MI;
static PropertyInfo t291____CanRead_PropertyInfo = 
{
	&t291_TI, "CanRead", &m6979_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6962_MI;
static PropertyInfo t291____CanSeek_PropertyInfo = 
{
	&t291_TI, "CanSeek", &m6962_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6980_MI;
static PropertyInfo t291____CanWrite_PropertyInfo = 
{
	&t291_TI, "CanWrite", &m6980_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6968_MI;
static PropertyInfo t291____Length_PropertyInfo = 
{
	&t291_TI, "Length", &m6968_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11981_MI;
extern MethodInfo m12746_MI;
static PropertyInfo t291____Position_PropertyInfo = 
{
	&t291_TI, "Position", &m11981_MI, &m12746_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t291_PIs[] =
{
	&t291____CanRead_PropertyInfo,
	&t291____CanSeek_PropertyInfo,
	&t291____CanWrite_PropertyInfo,
	&t291____Length_PropertyInfo,
	&t291____Position_PropertyInfo,
	NULL
};
extern MethodInfo m6999_MI;
extern MethodInfo m6967_MI;
extern MethodInfo m6944_MI;
static Il2CppMethodReference t291_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7028_MI,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&m6999_MI,
	&m1081_MI,
	NULL,
	NULL,
	&m6967_MI,
	NULL,
	NULL,
	NULL,
	&m6944_MI,
	&m6959_MI,
	&m6970_MI,
	&m6961_MI,
	&m6971_MI,
};
static bool t291_VTIGM[] =
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
static const Il2CppType* t291_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t291_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t291_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t291__CustomAttributeCache = {
1,
NULL,
&t291_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t291_1_0_0;
struct t291;
extern CustomAttributesCache t291__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t291_DM = 
{
	NULL, NULL, t291_ITIs, t291_IOs, &t9_0_0_0, t291_VT, t291_VTIGM, NULL};
TypeInfo t291_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Stream", "System.IO", t291_MIs, t291_PIs, t291_FIs, NULL, &t291_TI, NULL, &t291__CustomAttributeCache, &t291_0_0_0, &t291_1_0_0, &t291_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t291), sizeof (t291), 0, -1, sizeof(t291_SFs), 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, true, false, 22, 5, 1, 0, 0, 24, 1, 1};
#include "t1723.h"
// Metadata Definition System.IO.NullStream
extern TypeInfo t1723_TI;
#include "t1723MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8941_MI = 
{
	".ctor", (methodPointerType)&m8941, &t1723_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2760, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8942_MI = 
{
	"get_CanRead", (methodPointerType)&m8942, &t1723_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 5, 0, false, false, 2761, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8943_MI = 
{
	"get_CanSeek", (methodPointerType)&m8943, &t1723_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2762, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8944_MI = 
{
	"get_CanWrite", (methodPointerType)&m8944, &t1723_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 2763, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m8945_MI = 
{
	"get_Length", (methodPointerType)&m8945, &t1723_TI, &t292_0_0_0, RuntimeInvoker_t292, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2764, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m8946_MI = 
{
	"get_Position", (methodPointerType)&m8946, &t1723_TI, &t292_0_0_0, RuntimeInvoker_t292, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2765, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
static ParameterInfo t1723_m8947_ParameterInfos[] = 
{
	{"value", 0, 134221275, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m8947_MI = 
{
	"set_Position", (methodPointerType)&m8947, &t1723_TI, &t122_0_0_0, RuntimeInvoker_t122_t292, t1723_m8947_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 10, 1, false, false, 2766, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8948_MI = 
{
	"Flush", (methodPointerType)&m8948, &t1723_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 2767, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1723_m8949_ParameterInfos[] = 
{
	{"buffer", 0, 134221276, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134221277, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221278, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8949_MI = 
{
	"Read", (methodPointerType)&m8949, &t1723_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1723_m8949_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 14, 3, false, false, 2768, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8950_MI = 
{
	"ReadByte", (methodPointerType)&m8950, &t1723_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 15, 0, false, false, 2769, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern Il2CppType t1490_0_0_0;
static ParameterInfo t1723_m8951_ParameterInfos[] = 
{
	{"offset", 0, 134221279, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"origin", 1, 134221280, &EmptyCustomAttributesCache, &t1490_0_0_0},
};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292_t292_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8951_MI = 
{
	"Seek", (methodPointerType)&m8951, &t1723_TI, &t292_0_0_0, RuntimeInvoker_t292_t292_t125, t1723_m8951_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 2, false, false, 2770, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
static ParameterInfo t1723_m8952_ParameterInfos[] = 
{
	{"value", 0, 134221281, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m8952_MI = 
{
	"SetLength", (methodPointerType)&m8952, &t1723_TI, &t122_0_0_0, RuntimeInvoker_t122_t292, t1723_m8952_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 2771, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1723_m8953_ParameterInfos[] = 
{
	{"buffer", 0, 134221282, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"offset", 1, 134221283, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221284, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8953_MI = 
{
	"Write", (methodPointerType)&m8953, &t1723_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1723_m8953_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 18, 3, false, false, 2772, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t568_0_0_0;
static ParameterInfo t1723_m8954_ParameterInfos[] = 
{
	{"value", 0, 134221285, &EmptyCustomAttributesCache, &t568_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8954_MI = 
{
	"WriteByte", (methodPointerType)&m8954, &t1723_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1723_m8954_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 19, 1, false, false, 2773, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1723_MIs[] =
{
	&m8941_MI,
	&m8942_MI,
	&m8943_MI,
	&m8944_MI,
	&m8945_MI,
	&m8946_MI,
	&m8947_MI,
	&m8948_MI,
	&m8949_MI,
	&m8950_MI,
	&m8951_MI,
	&m8952_MI,
	&m8953_MI,
	&m8954_MI,
	NULL
};
extern MethodInfo m8942_MI;
static PropertyInfo t1723____CanRead_PropertyInfo = 
{
	&t1723_TI, "CanRead", &m8942_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8943_MI;
static PropertyInfo t1723____CanSeek_PropertyInfo = 
{
	&t1723_TI, "CanSeek", &m8943_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8944_MI;
static PropertyInfo t1723____CanWrite_PropertyInfo = 
{
	&t1723_TI, "CanWrite", &m8944_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8945_MI;
static PropertyInfo t1723____Length_PropertyInfo = 
{
	&t1723_TI, "Length", &m8945_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8946_MI;
extern MethodInfo m8947_MI;
static PropertyInfo t1723____Position_PropertyInfo = 
{
	&t1723_TI, "Position", &m8946_MI, &m8947_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1723_PIs[] =
{
	&t1723____CanRead_PropertyInfo,
	&t1723____CanSeek_PropertyInfo,
	&t1723____CanWrite_PropertyInfo,
	&t1723____Length_PropertyInfo,
	&t1723____Position_PropertyInfo,
	NULL
};
extern MethodInfo m8948_MI;
extern MethodInfo m8949_MI;
extern MethodInfo m8950_MI;
extern MethodInfo m8951_MI;
extern MethodInfo m8952_MI;
extern MethodInfo m8953_MI;
extern MethodInfo m8954_MI;
static Il2CppMethodReference t1723_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7028_MI,
	&m8942_MI,
	&m8943_MI,
	&m8944_MI,
	&m8945_MI,
	&m8946_MI,
	&m8947_MI,
	&m6999_MI,
	&m1081_MI,
	&m8948_MI,
	&m8949_MI,
	&m8950_MI,
	&m8951_MI,
	&m8952_MI,
	&m8953_MI,
	&m8954_MI,
	&m6959_MI,
	&m6970_MI,
	&m6961_MI,
	&m6971_MI,
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
	false,
	false,
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
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1723_0_0_0;
extern Il2CppType t1723_1_0_0;
struct t1723;
const Il2CppTypeDefinitionMetadata t1723_DM = 
{
	NULL, NULL, NULL, t1723_IOs, &t291_0_0_0, t1723_VT, t1723_VTIGM, NULL};
TypeInfo t1723_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NullStream", "System.IO", t1723_MIs, t1723_PIs, NULL, NULL, &t1723_TI, NULL, &EmptyCustomAttributesCache, &t1723_0_0_0, &t1723_1_0_0, &t1723_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1723), sizeof (t1723), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 14, 5, 0, 0, 0, 24, 0, 1};
#include "t1724.h"
// Metadata Definition System.IO.StreamAsyncResult
extern TypeInfo t1724_TI;
#include "t1724MD.h"
extern Il2CppType t9_0_0_0;
static ParameterInfo t1724_m8955_ParameterInfos[] = 
{
	{"state", 0, 134221286, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8955_MI = 
{
	".ctor", (methodPointerType)&m8955, &t1724_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1724_m8955_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2774, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
static ParameterInfo t1724_m8956_ParameterInfos[] = 
{
	{"e", 0, 134221287, &EmptyCustomAttributesCache, &t138_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8956_MI = 
{
	"SetComplete", (methodPointerType)&m8956, &t1724_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1724_m8956_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2775, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1724_m8957_ParameterInfos[] = 
{
	{"e", 0, 134221288, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"nbytes", 1, 134221289, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8957_MI = 
{
	"SetComplete", (methodPointerType)&m8957, &t1724_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1724_m8957_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 2776, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8958_MI = 
{
	"get_AsyncState", (methodPointerType)&m8958, &t1724_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 2777, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1477_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8959_MI = 
{
	"get_AsyncWaitHandle", (methodPointerType)&m8959, &t1724_TI, &t1477_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 2778, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8960_MI = 
{
	"get_IsCompleted", (methodPointerType)&m8960, &t1724_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 2779, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8961_MI = 
{
	"get_Exception", (methodPointerType)&m8961, &t1724_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2780, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8962_MI = 
{
	"get_NBytes", (methodPointerType)&m8962, &t1724_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2781, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8963_MI = 
{
	"get_Done", (methodPointerType)&m8963, &t1724_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2782, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1724_m8964_ParameterInfos[] = 
{
	{"value", 0, 134221290, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8964_MI = 
{
	"set_Done", (methodPointerType)&m8964, &t1724_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1724_m8964_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 2783, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1724_MIs[] =
{
	&m8955_MI,
	&m8956_MI,
	&m8957_MI,
	&m8958_MI,
	&m8959_MI,
	&m8960_MI,
	&m8961_MI,
	&m8962_MI,
	&m8963_MI,
	&m8964_MI,
	NULL
};
extern Il2CppType t9_0_0_1;
FieldInfo t1724_f0_FieldInfo = 
{
	"state", &t9_0_0_1, &t1724_TI, offsetof(t1724, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1724_f1_FieldInfo = 
{
	"completed", &t124_0_0_1, &t1724_TI, offsetof(t1724, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1724_f2_FieldInfo = 
{
	"done", &t124_0_0_1, &t1724_TI, offsetof(t1724, f2), &EmptyCustomAttributesCache};
extern Il2CppType t138_0_0_1;
FieldInfo t1724_f3_FieldInfo = 
{
	"exc", &t138_0_0_1, &t1724_TI, offsetof(t1724, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1724_f4_FieldInfo = 
{
	"nbytes", &t125_0_0_1, &t1724_TI, offsetof(t1724, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1476_0_0_1;
FieldInfo t1724_f5_FieldInfo = 
{
	"wh", &t1476_0_0_1, &t1724_TI, offsetof(t1724, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1724_FIs[] =
{
	&t1724_f0_FieldInfo,
	&t1724_f1_FieldInfo,
	&t1724_f2_FieldInfo,
	&t1724_f3_FieldInfo,
	&t1724_f4_FieldInfo,
	&t1724_f5_FieldInfo,
	NULL
};
extern MethodInfo m8958_MI;
static PropertyInfo t1724____AsyncState_PropertyInfo = 
{
	&t1724_TI, "AsyncState", &m8958_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8959_MI;
static PropertyInfo t1724____AsyncWaitHandle_PropertyInfo = 
{
	&t1724_TI, "AsyncWaitHandle", &m8959_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8960_MI;
static PropertyInfo t1724____IsCompleted_PropertyInfo = 
{
	&t1724_TI, "IsCompleted", &m8960_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8961_MI;
static PropertyInfo t1724____Exception_PropertyInfo = 
{
	&t1724_TI, "Exception", &m8961_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8962_MI;
static PropertyInfo t1724____NBytes_PropertyInfo = 
{
	&t1724_TI, "NBytes", &m8962_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8963_MI;
extern MethodInfo m8964_MI;
static PropertyInfo t1724____Done_PropertyInfo = 
{
	&t1724_TI, "Done", &m8963_MI, &m8964_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1724_PIs[] =
{
	&t1724____AsyncState_PropertyInfo,
	&t1724____AsyncWaitHandle_PropertyInfo,
	&t1724____IsCompleted_PropertyInfo,
	&t1724____Exception_PropertyInfo,
	&t1724____NBytes_PropertyInfo,
	&t1724____Done_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1724_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8958_MI,
	&m8959_MI,
	&m8960_MI,
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
};
static const Il2CppType* t1724_ITIs[] = 
{
	&t462_0_0_0,
};
static Il2CppInterfaceOffsetPair t1724_IOs[] = 
{
	{ &t462_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1724_0_0_0;
extern Il2CppType t1724_1_0_0;
struct t1724;
const Il2CppTypeDefinitionMetadata t1724_DM = 
{
	NULL, NULL, t1724_ITIs, t1724_IOs, &t9_0_0_0, t1724_VT, t1724_VTIGM, NULL};
TypeInfo t1724_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamAsyncResult", "System.IO", t1724_MIs, t1724_PIs, t1724_FIs, NULL, &t1724_TI, NULL, &EmptyCustomAttributesCache, &t1724_0_0_0, &t1724_1_0_0, &t1724_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1724), sizeof (t1724), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 6, 6, 0, 0, 7, 1, 1};
#include "t1725.h"
// Metadata Definition System.IO.StreamReader/NullStreamReader
extern TypeInfo t1725_TI;
#include "t1725MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8965_MI = 
{
	".ctor", (methodPointerType)&m8965, &t1725_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2800, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8966_MI = 
{
	"Peek", (methodPointerType)&m8966, &t1725_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 2801, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8967_MI = 
{
	"Read", (methodPointerType)&m8967, &t1725_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2802, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1725_m8968_ParameterInfos[] = 
{
	{"buffer", 0, 134221311, &EmptyCustomAttributesCache, &t305_0_0_3},
	{"index", 1, 134221312, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221313, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8968_MI = 
{
	"Read", (methodPointerType)&m8968, &t1725_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1725_m8968_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 3, false, false, 2803, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8969_MI = 
{
	"ReadLine", (methodPointerType)&m8969, &t1725_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2804, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8970_MI = 
{
	"ReadToEnd", (methodPointerType)&m8970, &t1725_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 10, 0, false, false, 2805, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1725_MIs[] =
{
	&m8965_MI,
	&m8966_MI,
	&m8967_MI,
	&m8968_MI,
	&m8969_MI,
	&m8970_MI,
	NULL
};
extern MethodInfo m9014_MI;
extern MethodInfo m8978_MI;
extern MethodInfo m8966_MI;
extern MethodInfo m8967_MI;
extern MethodInfo m8968_MI;
extern MethodInfo m8969_MI;
extern MethodInfo m8970_MI;
static Il2CppMethodReference t1725_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9014_MI,
	&m8978_MI,
	&m8966_MI,
	&m8967_MI,
	&m8968_MI,
	&m8969_MI,
	&m8970_MI,
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
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1725_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1725_0_0_0;
extern Il2CppType t1725_1_0_0;
extern Il2CppType t1710_0_0_0;
extern TypeInfo t1710_TI;
struct t1725;
const Il2CppTypeDefinitionMetadata t1725_DM = 
{
	&t1710_0_0_0, NULL, NULL, t1725_IOs, &t1710_0_0_0, t1725_VT, t1725_VTIGM, NULL};
TypeInfo t1725_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NullStreamReader", "", t1725_MIs, NULL, NULL, NULL, &t1725_TI, NULL, &EmptyCustomAttributesCache, &t1725_0_0_0, &t1725_1_0_0, &t1725_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1725), sizeof (t1725), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 0, 0, 0, 0, 11, 0, 1};
#include "t1710.h"
// Metadata Definition System.IO.StreamReader
#include "t1710MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8971_MI = 
{
	".ctor", (methodPointerType)&m8971, &t1710_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 2784, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t291_0_0_0;
extern Il2CppType t722_0_0_0;
static ParameterInfo t1710_m8972_ParameterInfos[] = 
{
	{"stream", 0, 134221291, &EmptyCustomAttributesCache, &t291_0_0_0},
	{"encoding", 1, 134221292, &EmptyCustomAttributesCache, &t722_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8972_MI = 
{
	".ctor", (methodPointerType)&m8972, &t1710_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1710_m8972_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2785, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t291_0_0_0;
extern Il2CppType t722_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1710_m8973_ParameterInfos[] = 
{
	{"stream", 0, 134221293, &EmptyCustomAttributesCache, &t291_0_0_0},
	{"encoding", 1, 134221294, &EmptyCustomAttributesCache, &t722_0_0_0},
	{"detectEncodingFromByteOrderMarks", 2, 134221295, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"bufferSize", 3, 134221296, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8973_MI = 
{
	".ctor", (methodPointerType)&m8973, &t1710_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186_t125, t1710_m8973_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 2786, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1710_m8974_ParameterInfos[] = 
{
	{"path", 0, 134221297, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8974_MI = 
{
	".ctor", (methodPointerType)&m8974, &t1710_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1710_m8974_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2787, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t722_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1710_m8975_ParameterInfos[] = 
{
	{"path", 0, 134221298, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"encoding", 1, 134221299, &EmptyCustomAttributesCache, &t722_0_0_0},
	{"detectEncodingFromByteOrderMarks", 2, 134221300, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"bufferSize", 3, 134221301, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8975_MI = 
{
	".ctor", (methodPointerType)&m8975, &t1710_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186_t125, t1710_m8975_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 2788, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8976_MI = 
{
	".cctor", (methodPointerType)&m8976, &t1710_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2789, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t291_0_0_0;
extern Il2CppType t722_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1710_m8977_ParameterInfos[] = 
{
	{"stream", 0, 134221302, &EmptyCustomAttributesCache, &t291_0_0_0},
	{"encoding", 1, 134221303, &EmptyCustomAttributesCache, &t722_0_0_0},
	{"detectEncodingFromByteOrderMarks", 2, 134221304, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"bufferSize", 3, 134221305, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8977_MI = 
{
	"Initialize", (methodPointerType)&m8977, &t1710_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186_t125, t1710_m8977_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 4, false, false, 2790, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1710_m8978_ParameterInfos[] = 
{
	{"disposing", 0, 134221306, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8978_MI = 
{
	"Dispose", (methodPointerType)&m8978, &t1710_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1710_m8978_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 5, 1, false, false, 2791, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1710_m8979_ParameterInfos[] = 
{
	{"count", 0, 134221307, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8979_MI = 
{
	"DoChecks", (methodPointerType)&m8979, &t1710_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t1710_m8979_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2792, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8980_MI = 
{
	"ReadBuffer", (methodPointerType)&m8980, &t1710_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2793, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8981_MI = 
{
	"Peek", (methodPointerType)&m8981, &t1710_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 2794, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8982_MI = 
{
	"Read", (methodPointerType)&m8982, &t1710_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2795, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1710_m8983_ParameterInfos[] = 
{
	{"buffer", 0, 134221308, &EmptyCustomAttributesCache, &t305_0_0_3},
	{"index", 1, 134221309, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221310, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8983_MI = 
{
	"Read", (methodPointerType)&m8983, &t1710_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1710_m8983_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 3, false, false, 2796, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8984_MI = 
{
	"FindNextEOL", (methodPointerType)&m8984, &t1710_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2797, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8985_MI = 
{
	"ReadLine", (methodPointerType)&m8985, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2798, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8986_MI = 
{
	"ReadToEnd", (methodPointerType)&m8986, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 10, 0, false, false, 2799, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1710_MIs[] =
{
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
	&m8983_MI,
	&m8984_MI,
	&m8985_MI,
	&m8986_MI,
	NULL
};
extern Il2CppType t723_0_0_1;
FieldInfo t1710_f1_FieldInfo = 
{
	"input_buffer", &t723_0_0_1, &t1710_TI, offsetof(t1710, f1), &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_1;
FieldInfo t1710_f2_FieldInfo = 
{
	"decoded_buffer", &t305_0_0_1, &t1710_TI, offsetof(t1710, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1710_f3_FieldInfo = 
{
	"decoded_count", &t125_0_0_1, &t1710_TI, offsetof(t1710, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1710_f4_FieldInfo = 
{
	"pos", &t125_0_0_1, &t1710_TI, offsetof(t1710, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1710_f5_FieldInfo = 
{
	"buffer_size", &t125_0_0_1, &t1710_TI, offsetof(t1710, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1710_f6_FieldInfo = 
{
	"do_checks", &t125_0_0_1, &t1710_TI, offsetof(t1710, f6), &EmptyCustomAttributesCache};
extern Il2CppType t722_0_0_1;
FieldInfo t1710_f7_FieldInfo = 
{
	"encoding", &t722_0_0_1, &t1710_TI, offsetof(t1710, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1704_0_0_1;
FieldInfo t1710_f8_FieldInfo = 
{
	"decoder", &t1704_0_0_1, &t1710_TI, offsetof(t1710, f8), &EmptyCustomAttributesCache};
extern Il2CppType t291_0_0_1;
FieldInfo t1710_f9_FieldInfo = 
{
	"base_stream", &t291_0_0_1, &t1710_TI, offsetof(t1710, f9), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1710_f10_FieldInfo = 
{
	"mayBlock", &t124_0_0_1, &t1710_TI, offsetof(t1710, f10), &EmptyCustomAttributesCache};
extern Il2CppType t315_0_0_1;
FieldInfo t1710_f11_FieldInfo = 
{
	"line_builder", &t315_0_0_1, &t1710_TI, offsetof(t1710, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1710_0_0_54;
FieldInfo t1710_f12_FieldInfo = 
{
	"Null", &t1710_0_0_54, &t1710_TI, offsetof(t1710_SFs, f12), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1710_f13_FieldInfo = 
{
	"foundCR", &t124_0_0_1, &t1710_TI, offsetof(t1710, f13), &EmptyCustomAttributesCache};
static FieldInfo* t1710_FIs[] =
{
	&t1710_f1_FieldInfo,
	&t1710_f2_FieldInfo,
	&t1710_f3_FieldInfo,
	&t1710_f4_FieldInfo,
	&t1710_f5_FieldInfo,
	&t1710_f6_FieldInfo,
	&t1710_f7_FieldInfo,
	&t1710_f8_FieldInfo,
	&t1710_f9_FieldInfo,
	&t1710_f10_FieldInfo,
	&t1710_f11_FieldInfo,
	&t1710_f12_FieldInfo,
	&t1710_f13_FieldInfo,
	NULL
};
static const Il2CppType* t1710_TI__nestedTypes[1] =
{
	&t1725_0_0_0,
};
extern MethodInfo m8981_MI;
extern MethodInfo m8982_MI;
extern MethodInfo m8983_MI;
extern MethodInfo m8985_MI;
extern MethodInfo m8986_MI;
static Il2CppMethodReference t1710_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9014_MI,
	&m8978_MI,
	&m8981_MI,
	&m8982_MI,
	&m8983_MI,
	&m8985_MI,
	&m8986_MI,
};
static bool t1710_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1710_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1710_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1710__CustomAttributeCache = {
1,
NULL,
&t1710_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1710_1_0_0;
extern Il2CppType t1656_0_0_0;
struct t1710;
extern CustomAttributesCache t1710__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1710_DM = 
{
	NULL, t1710_TI__nestedTypes, NULL, t1710_IOs, &t1656_0_0_0, t1710_VT, t1710_VTIGM, NULL};
TypeInfo t1710_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamReader", "System.IO", t1710_MIs, NULL, t1710_FIs, NULL, &t1710_TI, NULL, &t1710__CustomAttributeCache, &t1710_0_0_0, &t1710_1_0_0, &t1710_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1710), sizeof (t1710), 0, -1, sizeof(t1710_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 16, 0, 13, 0, 1, 11, 0, 1};
#include "t1726.h"
// Metadata Definition System.IO.StreamWriter
extern TypeInfo t1726_TI;
#include "t1726MD.h"
extern Il2CppType t291_0_0_0;
extern Il2CppType t722_0_0_0;
static ParameterInfo t1726_m8987_ParameterInfos[] = 
{
	{"stream", 0, 134221314, &EmptyCustomAttributesCache, &t291_0_0_0},
	{"encoding", 1, 134221315, &EmptyCustomAttributesCache, &t722_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8987_MI = 
{
	".ctor", (methodPointerType)&m8987, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1726_m8987_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2806, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t291_0_0_0;
extern Il2CppType t722_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1726_m8988_ParameterInfos[] = 
{
	{"stream", 0, 134221316, &EmptyCustomAttributesCache, &t291_0_0_0},
	{"encoding", 1, 134221317, &EmptyCustomAttributesCache, &t722_0_0_0},
	{"bufferSize", 2, 134221318, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8988_MI = 
{
	".ctor", (methodPointerType)&m8988, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1726_m8988_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 2807, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8989_MI = 
{
	".cctor", (methodPointerType)&m8989, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2808, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t722_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1726_m8990_ParameterInfos[] = 
{
	{"encoding", 0, 134221319, &EmptyCustomAttributesCache, &t722_0_0_0},
	{"bufferSize", 1, 134221320, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8990_MI = 
{
	"Initialize", (methodPointerType)&m8990, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1726_m8990_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 2, false, false, 2809, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1726_m8991_ParameterInfos[] = 
{
	{"value", 0, 134221321, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8991_MI = 
{
	"set_AutoFlush", (methodPointerType)&m8991, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1726_m8991_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 14, 1, false, false, 2810, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1726_m8992_ParameterInfos[] = 
{
	{"disposing", 0, 134221322, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8992_MI = 
{
	"Dispose", (methodPointerType)&m8992, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1726_m8992_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 1, false, false, 2811, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8993_MI = 
{
	"Flush", (methodPointerType)&m8993, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2812, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8994_MI = 
{
	"FlushBytes", (methodPointerType)&m8994, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2813, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8995_MI = 
{
	"Decode", (methodPointerType)&m8995, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2814, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1726_m8996_ParameterInfos[] = 
{
	{"buffer", 0, 134221323, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"index", 1, 134221324, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221325, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8996_MI = 
{
	"Write", (methodPointerType)&m8996, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1726_m8996_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 3, false, false, 2815, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1726_m8997_ParameterInfos[] = 
{
	{"buffer", 0, 134221326, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"index", 1, 134221327, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221328, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8997_MI = 
{
	"LowLevelWrite", (methodPointerType)&m8997, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1726_m8997_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2816, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1726_m8998_ParameterInfos[] = 
{
	{"s", 0, 134221329, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8998_MI = 
{
	"LowLevelWrite", (methodPointerType)&m8998, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1726_m8998_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2817, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
static ParameterInfo t1726_m8999_ParameterInfos[] = 
{
	{"value", 0, 134221330, &EmptyCustomAttributesCache, &t296_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m8999_MI = 
{
	"Write", (methodPointerType)&m8999, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122_t327, t1726_m8999_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 2818, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1726_m9000_ParameterInfos[] = 
{
	{"buffer", 0, 134221331, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9000_MI = 
{
	"Write", (methodPointerType)&m9000, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1726_m9000_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 2819, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1726_m9001_ParameterInfos[] = 
{
	{"value", 0, 134221332, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9001_MI = 
{
	"Write", (methodPointerType)&m9001, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1726_m9001_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 2820, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9002_MI = 
{
	"Close", (methodPointerType)&m9002, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 5, 0, false, false, 2821, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9003_MI = 
{
	"Finalize", (methodPointerType)&m9003, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 2822, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1726_MIs[] =
{
	&m8987_MI,
	&m8988_MI,
	&m8989_MI,
	&m8990_MI,
	&m8991_MI,
	&m8992_MI,
	&m8993_MI,
	&m8994_MI,
	&m8995_MI,
	&m8996_MI,
	&m8997_MI,
	&m8998_MI,
	&m8999_MI,
	&m9000_MI,
	&m9001_MI,
	&m9002_MI,
	&m9003_MI,
	NULL
};
extern Il2CppType t722_0_0_1;
FieldInfo t1726_f2_FieldInfo = 
{
	"internalEncoding", &t722_0_0_1, &t1726_TI, offsetof(t1726, f2), &EmptyCustomAttributesCache};
extern Il2CppType t291_0_0_1;
FieldInfo t1726_f3_FieldInfo = 
{
	"internalStream", &t291_0_0_1, &t1726_TI, offsetof(t1726, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1726_f4_FieldInfo = 
{
	"iflush", &t124_0_0_1, &t1726_TI, offsetof(t1726, f4), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t1726_f5_FieldInfo = 
{
	"byte_buf", &t723_0_0_1, &t1726_TI, offsetof(t1726, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1726_f6_FieldInfo = 
{
	"byte_pos", &t125_0_0_1, &t1726_TI, offsetof(t1726, f6), &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_1;
FieldInfo t1726_f7_FieldInfo = 
{
	"decode_buf", &t305_0_0_1, &t1726_TI, offsetof(t1726, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1726_f8_FieldInfo = 
{
	"decode_pos", &t125_0_0_1, &t1726_TI, offsetof(t1726, f8), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1726_f9_FieldInfo = 
{
	"DisposedAlready", &t124_0_0_1, &t1726_TI, offsetof(t1726, f9), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1726_f10_FieldInfo = 
{
	"preamble_done", &t124_0_0_1, &t1726_TI, offsetof(t1726, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1726_0_0_54;
FieldInfo t1726_f11_FieldInfo = 
{
	"Null", &t1726_0_0_54, &t1726_TI, offsetof(t1726_SFs, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1726_FIs[] =
{
	&t1726_f2_FieldInfo,
	&t1726_f3_FieldInfo,
	&t1726_f4_FieldInfo,
	&t1726_f5_FieldInfo,
	&t1726_f6_FieldInfo,
	&t1726_f7_FieldInfo,
	&t1726_f8_FieldInfo,
	&t1726_f9_FieldInfo,
	&t1726_f10_FieldInfo,
	&t1726_f11_FieldInfo,
	NULL
};
extern MethodInfo m8991_MI;
static PropertyInfo t1726____AutoFlush_PropertyInfo = 
{
	&t1726_TI, "AutoFlush", NULL, &m8991_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1726_PIs[] =
{
	&t1726____AutoFlush_PropertyInfo,
	NULL
};
extern MethodInfo m9003_MI;
extern MethodInfo m9036_MI;
extern MethodInfo m9002_MI;
extern MethodInfo m8992_MI;
extern MethodInfo m8993_MI;
extern MethodInfo m8999_MI;
extern MethodInfo m9000_MI;
extern MethodInfo m9001_MI;
extern MethodInfo m8996_MI;
extern MethodInfo m9043_MI;
extern MethodInfo m5920_MI;
static Il2CppMethodReference t1726_VT[] =
{
	&m671_MI,
	&m9003_MI,
	&m672_MI,
	&m673_MI,
	&m9036_MI,
	&m9002_MI,
	&m8992_MI,
	&m8993_MI,
	&m8999_MI,
	&m9000_MI,
	&m9001_MI,
	&m8996_MI,
	&m9043_MI,
	&m5920_MI,
	&m8991_MI,
};
static bool t1726_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1726_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1726_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1726__CustomAttributeCache = {
1,
NULL,
&t1726_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1726_0_0_0;
extern Il2CppType t1726_1_0_0;
extern Il2CppType t1361_0_0_0;
struct t1726;
extern CustomAttributesCache t1726__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1726_DM = 
{
	NULL, NULL, NULL, t1726_IOs, &t1361_0_0_0, t1726_VT, t1726_VTIGM, NULL};
TypeInfo t1726_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamWriter", "System.IO", t1726_MIs, t1726_PIs, t1726_FIs, NULL, &t1726_TI, NULL, &t1726__CustomAttributeCache, &t1726_0_0_0, &t1726_1_0_0, &t1726_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1726), sizeof (t1726), 0, -1, sizeof(t1726_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, true, true, false, 17, 1, 10, 0, 0, 15, 0, 1};
#include "t880.h"
// Metadata Definition System.IO.StringReader
extern TypeInfo t880_TI;
#include "t880MD.h"
extern Il2CppType t2_0_0_0;
static ParameterInfo t880_m4253_ParameterInfos[] = 
{
	{"s", 0, 134221333, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4253_MI = 
{
	".ctor", (methodPointerType)&m4253, &t880_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t880_m4253_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2823, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t880_m9004_ParameterInfos[] = 
{
	{"disposing", 0, 134221334, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9004_MI = 
{
	"Dispose", (methodPointerType)&m9004, &t880_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t880_m9004_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 5, 1, false, false, 2824, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9005_MI = 
{
	"Peek", (methodPointerType)&m9005, &t880_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 2825, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9006_MI = 
{
	"Read", (methodPointerType)&m9006, &t880_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2826, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t880_m9007_ParameterInfos[] = 
{
	{"buffer", 0, 134221335, &EmptyCustomAttributesCache, &t305_0_0_3},
	{"index", 1, 134221336, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221337, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9007_MI = 
{
	"Read", (methodPointerType)&m9007, &t880_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t880_m9007_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 3, false, false, 2827, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4254_MI = 
{
	"ReadLine", (methodPointerType)&m4254, &t880_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2828, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9008_MI = 
{
	"ReadToEnd", (methodPointerType)&m9008, &t880_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 10, 0, false, false, 2829, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9009_MI = 
{
	"CheckObjectDisposedException", (methodPointerType)&m9009, &t880_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2830, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t880_MIs[] =
{
	&m4253_MI,
	&m9004_MI,
	&m9005_MI,
	&m9006_MI,
	&m9007_MI,
	&m4254_MI,
	&m9008_MI,
	&m9009_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t880_f1_FieldInfo = 
{
	"source", &t2_0_0_1, &t880_TI, offsetof(t880, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t880_f2_FieldInfo = 
{
	"nextChar", &t125_0_0_1, &t880_TI, offsetof(t880, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t880_f3_FieldInfo = 
{
	"sourceLength", &t125_0_0_1, &t880_TI, offsetof(t880, f3), &EmptyCustomAttributesCache};
static FieldInfo* t880_FIs[] =
{
	&t880_f1_FieldInfo,
	&t880_f2_FieldInfo,
	&t880_f3_FieldInfo,
	NULL
};
extern MethodInfo m9004_MI;
extern MethodInfo m9005_MI;
extern MethodInfo m9006_MI;
extern MethodInfo m9007_MI;
extern MethodInfo m4254_MI;
extern MethodInfo m9008_MI;
static Il2CppMethodReference t880_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9014_MI,
	&m9004_MI,
	&m9005_MI,
	&m9006_MI,
	&m9007_MI,
	&m4254_MI,
	&m9008_MI,
};
static bool t880_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t880_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t880_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t880__CustomAttributeCache = {
1,
NULL,
&t880_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t880_0_0_0;
extern Il2CppType t880_1_0_0;
struct t880;
extern CustomAttributesCache t880__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t880_DM = 
{
	NULL, NULL, NULL, t880_IOs, &t1656_0_0_0, t880_VT, t880_VTIGM, NULL};
TypeInfo t880_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StringReader", "System.IO", t880_MIs, NULL, t880_FIs, NULL, &t880_TI, NULL, &t880__CustomAttributeCache, &t880_0_0_0, &t880_1_0_0, &t880_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t880), sizeof (t880), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 0, 3, 0, 0, 11, 0, 1};
#include "t1727.h"
// Metadata Definition System.IO.TextReader/NullTextReader
extern TypeInfo t1727_TI;
#include "t1727MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9010_MI = 
{
	".ctor", (methodPointerType)&m9010, &t1727_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2841, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9011_MI = 
{
	"ReadLine", (methodPointerType)&m9011, &t1727_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2842, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1727_MIs[] =
{
	&m9010_MI,
	&m9011_MI,
	NULL
};
extern MethodInfo m9015_MI;
extern MethodInfo m9016_MI;
extern MethodInfo m9017_MI;
extern MethodInfo m9018_MI;
extern MethodInfo m9011_MI;
extern MethodInfo m9020_MI;
static Il2CppMethodReference t1727_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9014_MI,
	&m9015_MI,
	&m9016_MI,
	&m9017_MI,
	&m9018_MI,
	&m9011_MI,
	&m9020_MI,
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
};
static Il2CppInterfaceOffsetPair t1727_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1727_0_0_0;
extern Il2CppType t1727_1_0_0;
extern TypeInfo t1656_TI;
struct t1727;
const Il2CppTypeDefinitionMetadata t1727_DM = 
{
	&t1656_0_0_0, NULL, NULL, t1727_IOs, &t1656_0_0_0, t1727_VT, t1727_VTIGM, NULL};
TypeInfo t1727_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NullTextReader", "", t1727_MIs, NULL, NULL, NULL, &t1727_TI, NULL, &EmptyCustomAttributesCache, &t1727_0_0_0, &t1727_1_0_0, &t1727_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1727), sizeof (t1727), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 11, 0, 1};
#include "t1656.h"
// Metadata Definition System.IO.TextReader
#include "t1656MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9012_MI = 
{
	".ctor", (methodPointerType)&m9012, &t1656_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2831, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9013_MI = 
{
	".cctor", (methodPointerType)&m9013, &t1656_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2832, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9014_MI = 
{
	"Dispose", (methodPointerType)&m9014, &t1656_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 486, 0, 4, 0, false, false, 2833, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1656_m9015_ParameterInfos[] = 
{
	{"disposing", 0, 134221338, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9015_MI = 
{
	"Dispose", (methodPointerType)&m9015, &t1656_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1656_m9015_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 5, 1, false, false, 2834, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9016_MI = 
{
	"Peek", (methodPointerType)&m9016, &t1656_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 2835, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9017_MI = 
{
	"Read", (methodPointerType)&m9017, &t1656_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2836, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1656_m9018_ParameterInfos[] = 
{
	{"buffer", 0, 134221339, &EmptyCustomAttributesCache, &t305_0_0_3},
	{"index", 1, 134221340, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221341, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9018_MI = 
{
	"Read", (methodPointerType)&m9018, &t1656_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1656_m9018_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 3, false, false, 2837, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9019_MI = 
{
	"ReadLine", (methodPointerType)&m9019, &t1656_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 9, 0, false, false, 2838, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9020_MI = 
{
	"ReadToEnd", (methodPointerType)&m9020, &t1656_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 10, 0, false, false, 2839, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1656_0_0_0;
static ParameterInfo t1656_m9021_ParameterInfos[] = 
{
	{"reader", 0, 134221342, &EmptyCustomAttributesCache, &t1656_0_0_0},
};
extern Il2CppType t1656_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9021_MI = 
{
	"Synchronized", (methodPointerType)&m9021, &t1656_TI, &t1656_0_0_0, RuntimeInvoker_t9_t9, t1656_m9021_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2840, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1656_MIs[] =
{
	&m9012_MI,
	&m9013_MI,
	&m9014_MI,
	&m9015_MI,
	&m9016_MI,
	&m9017_MI,
	&m9018_MI,
	&m9019_MI,
	&m9020_MI,
	&m9021_MI,
	NULL
};
extern Il2CppType t1656_0_0_54;
FieldInfo t1656_f0_FieldInfo = 
{
	"Null", &t1656_0_0_54, &t1656_TI, offsetof(t1656_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1656_FIs[] =
{
	&t1656_f0_FieldInfo,
	NULL
};
static const Il2CppType* t1656_TI__nestedTypes[1] =
{
	&t1727_0_0_0,
};
extern MethodInfo m9019_MI;
static Il2CppMethodReference t1656_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9014_MI,
	&m9015_MI,
	&m9016_MI,
	&m9017_MI,
	&m9018_MI,
	&m9019_MI,
	&m9020_MI,
};
static bool t1656_VTIGM[] =
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
static const Il2CppType* t1656_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1656_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1656_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1656__CustomAttributeCache = {
1,
NULL,
&t1656_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1656_1_0_0;
struct t1656;
extern CustomAttributesCache t1656__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1656_DM = 
{
	NULL, t1656_TI__nestedTypes, t1656_ITIs, t1656_IOs, &t9_0_0_0, t1656_VT, t1656_VTIGM, NULL};
TypeInfo t1656_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TextReader", "System.IO", t1656_MIs, NULL, t1656_FIs, NULL, &t1656_TI, NULL, &t1656__CustomAttributeCache, &t1656_0_0_0, &t1656_1_0_0, &t1656_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1656), sizeof (t1656), 0, -1, sizeof(t1656_SFs), 0, -1, 8321, 0, 0, false, false, false, false, false, false, false, false, true, false, 10, 0, 1, 0, 1, 11, 1, 1};
#include "t1728.h"
// Metadata Definition System.IO.SynchronizedReader
extern TypeInfo t1728_TI;
#include "t1728MD.h"
extern Il2CppType t1656_0_0_0;
static ParameterInfo t1728_m9022_ParameterInfos[] = 
{
	{"reader", 0, 134221343, &EmptyCustomAttributesCache, &t1656_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9022_MI = 
{
	".ctor", (methodPointerType)&m9022, &t1728_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1728_m9022_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2843, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9023_MI = 
{
	"Peek", (methodPointerType)&m9023, &t1728_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 2844, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9024_MI = 
{
	"ReadLine", (methodPointerType)&m9024, &t1728_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2845, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9025_MI = 
{
	"ReadToEnd", (methodPointerType)&m9025, &t1728_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 10, 0, false, false, 2846, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9026_MI = 
{
	"Read", (methodPointerType)&m9026, &t1728_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2847, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1728_m9027_ParameterInfos[] = 
{
	{"buffer", 0, 134221344, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"index", 1, 134221345, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221346, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9027_MI = 
{
	"Read", (methodPointerType)&m9027, &t1728_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1728_m9027_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 3, false, false, 2848, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1728_MIs[] =
{
	&m9022_MI,
	&m9023_MI,
	&m9024_MI,
	&m9025_MI,
	&m9026_MI,
	&m9027_MI,
	NULL
};
extern Il2CppType t1656_0_0_1;
FieldInfo t1728_f1_FieldInfo = 
{
	"reader", &t1656_0_0_1, &t1728_TI, offsetof(t1728, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1728_FIs[] =
{
	&t1728_f1_FieldInfo,
	NULL
};
extern MethodInfo m9023_MI;
extern MethodInfo m9026_MI;
extern MethodInfo m9027_MI;
extern MethodInfo m9024_MI;
extern MethodInfo m9025_MI;
static Il2CppMethodReference t1728_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9014_MI,
	&m9015_MI,
	&m9023_MI,
	&m9026_MI,
	&m9027_MI,
	&m9024_MI,
	&m9025_MI,
};
static bool t1728_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1728_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1728_0_0_0;
extern Il2CppType t1728_1_0_0;
struct t1728;
const Il2CppTypeDefinitionMetadata t1728_DM = 
{
	NULL, NULL, NULL, t1728_IOs, &t1656_0_0_0, t1728_VT, t1728_VTIGM, NULL};
TypeInfo t1728_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SynchronizedReader", "System.IO", t1728_MIs, NULL, t1728_FIs, NULL, &t1728_TI, NULL, &EmptyCustomAttributesCache, &t1728_0_0_0, &t1728_1_0_0, &t1728_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1728), sizeof (t1728), 0, -1, 0, 0, -1, 1056768, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 0, 1, 0, 0, 11, 0, 1};
#include "t1729.h"
// Metadata Definition System.IO.TextWriter/NullTextWriter
extern TypeInfo t1729_TI;
#include "t1729MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9028_MI = 
{
	".ctor", (methodPointerType)&m9028, &t1729_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2862, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1729_m9029_ParameterInfos[] = 
{
	{"s", 0, 134221357, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9029_MI = 
{
	"Write", (methodPointerType)&m9029, &t1729_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1729_m9029_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 2863, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
static ParameterInfo t1729_m9030_ParameterInfos[] = 
{
	{"value", 0, 134221358, &EmptyCustomAttributesCache, &t296_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m9030_MI = 
{
	"Write", (methodPointerType)&m9030, &t1729_TI, &t122_0_0_0, RuntimeInvoker_t122_t327, t1729_m9030_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 2864, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1729_m9031_ParameterInfos[] = 
{
	{"value", 0, 134221359, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"index", 1, 134221360, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221361, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9031_MI = 
{
	"Write", (methodPointerType)&m9031, &t1729_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1729_m9031_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 3, false, false, 2865, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1729_MIs[] =
{
	&m9028_MI,
	&m9029_MI,
	&m9030_MI,
	&m9031_MI,
	NULL
};
extern MethodInfo m9034_MI;
extern MethodInfo m9035_MI;
extern MethodInfo m9037_MI;
extern MethodInfo m9030_MI;
extern MethodInfo m9040_MI;
extern MethodInfo m9029_MI;
extern MethodInfo m9031_MI;
static Il2CppMethodReference t1729_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9036_MI,
	&m9034_MI,
	&m9035_MI,
	&m9037_MI,
	&m9030_MI,
	&m9040_MI,
	&m9029_MI,
	&m9031_MI,
	&m9043_MI,
	&m5920_MI,
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
};
static Il2CppInterfaceOffsetPair t1729_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1729_0_0_0;
extern Il2CppType t1729_1_0_0;
extern TypeInfo t1361_TI;
struct t1729;
const Il2CppTypeDefinitionMetadata t1729_DM = 
{
	&t1361_0_0_0, NULL, NULL, t1729_IOs, &t1361_0_0_0, t1729_VT, t1729_VTIGM, NULL};
TypeInfo t1729_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NullTextWriter", "", t1729_MIs, NULL, NULL, NULL, &t1729_TI, NULL, &EmptyCustomAttributesCache, &t1729_0_0_0, &t1729_1_0_0, &t1729_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1729), sizeof (t1729), 0, -1, 0, 0, -1, 1048835, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 14, 0, 1};
#include "t1361.h"
// Metadata Definition System.IO.TextWriter
#include "t1361MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9032_MI = 
{
	".ctor", (methodPointerType)&m9032, &t1361_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2849, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9033_MI = 
{
	".cctor", (methodPointerType)&m9033, &t1361_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2850, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9034_MI = 
{
	"Close", (methodPointerType)&m9034, &t1361_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 5, 0, false, false, 2851, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1361_m9035_ParameterInfos[] = 
{
	{"disposing", 0, 134221347, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9035_MI = 
{
	"Dispose", (methodPointerType)&m9035, &t1361_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1361_m9035_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 6, 1, false, false, 2852, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9036_MI = 
{
	"Dispose", (methodPointerType)&m9036, &t1361_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 486, 0, 4, 0, false, false, 2853, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9037_MI = 
{
	"Flush", (methodPointerType)&m9037, &t1361_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2854, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1361_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1361_m9038_ParameterInfos[] = 
{
	{"writer", 0, 134221348, &EmptyCustomAttributesCache, &t1361_0_0_0},
	{"neverClose", 1, 134221349, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1361_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9038_MI = 
{
	"Synchronized", (methodPointerType)&m9038, &t1361_TI, &t1361_0_0_0, RuntimeInvoker_t9_t9_t186, t1361_m9038_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 2855, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
static ParameterInfo t1361_m9039_ParameterInfos[] = 
{
	{"value", 0, 134221350, &EmptyCustomAttributesCache, &t296_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m9039_MI = 
{
	"Write", (methodPointerType)&m9039, &t1361_TI, &t122_0_0_0, RuntimeInvoker_t122_t327, t1361_m9039_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 1, false, false, 2856, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1361_m9040_ParameterInfos[] = 
{
	{"buffer", 0, 134221351, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9040_MI = 
{
	"Write", (methodPointerType)&m9040, &t1361_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1361_m9040_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 1, false, false, 2857, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1361_m9041_ParameterInfos[] = 
{
	{"value", 0, 134221352, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9041_MI = 
{
	"Write", (methodPointerType)&m9041, &t1361_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1361_m9041_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 1, false, false, 2858, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1361_m9042_ParameterInfos[] = 
{
	{"buffer", 0, 134221353, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"index", 1, 134221354, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221355, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9042_MI = 
{
	"Write", (methodPointerType)&m9042, &t1361_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1361_m9042_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 3, false, false, 2859, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9043_MI = 
{
	"WriteLine", (methodPointerType)&m9043, &t1361_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 12, 0, false, false, 2860, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1361_m5920_ParameterInfos[] = 
{
	{"value", 0, 134221356, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5920_MI = 
{
	"WriteLine", (methodPointerType)&m5920, &t1361_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1361_m5920_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 1, false, false, 2861, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1361_MIs[] =
{
	&m9032_MI,
	&m9033_MI,
	&m9034_MI,
	&m9035_MI,
	&m9036_MI,
	&m9037_MI,
	&m9038_MI,
	&m9039_MI,
	&m9040_MI,
	&m9041_MI,
	&m9042_MI,
	&m9043_MI,
	&m5920_MI,
	NULL
};
extern Il2CppType t305_0_0_4;
FieldInfo t1361_f0_FieldInfo = 
{
	"CoreNewLine", &t305_0_0_4, &t1361_TI, offsetof(t1361, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1361_0_0_54;
FieldInfo t1361_f1_FieldInfo = 
{
	"Null", &t1361_0_0_54, &t1361_TI, offsetof(t1361_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1361_FIs[] =
{
	&t1361_f0_FieldInfo,
	&t1361_f1_FieldInfo,
	NULL
};
static const Il2CppType* t1361_TI__nestedTypes[1] =
{
	&t1729_0_0_0,
};
extern MethodInfo m9039_MI;
extern MethodInfo m9041_MI;
extern MethodInfo m9042_MI;
static Il2CppMethodReference t1361_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9036_MI,
	&m9034_MI,
	&m9035_MI,
	&m9037_MI,
	&m9039_MI,
	&m9040_MI,
	&m9041_MI,
	&m9042_MI,
	&m9043_MI,
	&m5920_MI,
};
static bool t1361_VTIGM[] =
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
static const Il2CppType* t1361_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1361_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1361_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1361__CustomAttributeCache = {
1,
NULL,
&t1361_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1361_1_0_0;
struct t1361;
extern CustomAttributesCache t1361__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1361_DM = 
{
	NULL, t1361_TI__nestedTypes, t1361_ITIs, t1361_IOs, &t9_0_0_0, t1361_VT, t1361_VTIGM, NULL};
TypeInfo t1361_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TextWriter", "System.IO", t1361_MIs, NULL, t1361_FIs, NULL, &t1361_TI, NULL, &t1361__CustomAttributeCache, &t1361_0_0_0, &t1361_1_0_0, &t1361_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1361), sizeof (t1361), 0, -1, sizeof(t1361_SFs), 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, true, false, 13, 0, 2, 0, 1, 14, 1, 1};
#include "t1730.h"
// Metadata Definition System.IO.SynchronizedWriter
extern TypeInfo t1730_TI;
#include "t1730MD.h"
extern Il2CppType t1361_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1730_m9044_ParameterInfos[] = 
{
	{"writer", 0, 134221362, &EmptyCustomAttributesCache, &t1361_0_0_0},
	{"neverClose", 1, 134221363, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9044_MI = 
{
	".ctor", (methodPointerType)&m9044, &t1730_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1730_m9044_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2866, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9045_MI = 
{
	"Close", (methodPointerType)&m9045, &t1730_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 5, 0, false, false, 2867, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9046_MI = 
{
	"Flush", (methodPointerType)&m9046, &t1730_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2868, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
static ParameterInfo t1730_m9047_ParameterInfos[] = 
{
	{"value", 0, 134221364, &EmptyCustomAttributesCache, &t296_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m9047_MI = 
{
	"Write", (methodPointerType)&m9047, &t1730_TI, &t122_0_0_0, RuntimeInvoker_t122_t327, t1730_m9047_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 2869, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1730_m9048_ParameterInfos[] = 
{
	{"value", 0, 134221365, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9048_MI = 
{
	"Write", (methodPointerType)&m9048, &t1730_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1730_m9048_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 2870, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1730_m9049_ParameterInfos[] = 
{
	{"value", 0, 134221366, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9049_MI = 
{
	"Write", (methodPointerType)&m9049, &t1730_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1730_m9049_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 2871, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1730_m9050_ParameterInfos[] = 
{
	{"buffer", 0, 134221367, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"index", 1, 134221368, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221369, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9050_MI = 
{
	"Write", (methodPointerType)&m9050, &t1730_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1730_m9050_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 3, false, false, 2872, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9051_MI = 
{
	"WriteLine", (methodPointerType)&m9051, &t1730_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 12, 0, false, false, 2873, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1730_m9052_ParameterInfos[] = 
{
	{"value", 0, 134221370, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9052_MI = 
{
	"WriteLine", (methodPointerType)&m9052, &t1730_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1730_m9052_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 1, false, false, 2874, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1730_MIs[] =
{
	&m9044_MI,
	&m9045_MI,
	&m9046_MI,
	&m9047_MI,
	&m9048_MI,
	&m9049_MI,
	&m9050_MI,
	&m9051_MI,
	&m9052_MI,
	NULL
};
extern Il2CppType t1361_0_0_1;
FieldInfo t1730_f2_FieldInfo = 
{
	"writer", &t1361_0_0_1, &t1730_TI, offsetof(t1730, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1730_f3_FieldInfo = 
{
	"neverClose", &t124_0_0_1, &t1730_TI, offsetof(t1730, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1730_FIs[] =
{
	&t1730_f2_FieldInfo,
	&t1730_f3_FieldInfo,
	NULL
};
extern MethodInfo m9045_MI;
extern MethodInfo m9046_MI;
extern MethodInfo m9047_MI;
extern MethodInfo m9048_MI;
extern MethodInfo m9049_MI;
extern MethodInfo m9050_MI;
extern MethodInfo m9051_MI;
extern MethodInfo m9052_MI;
static Il2CppMethodReference t1730_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9036_MI,
	&m9045_MI,
	&m9035_MI,
	&m9046_MI,
	&m9047_MI,
	&m9048_MI,
	&m9049_MI,
	&m9050_MI,
	&m9051_MI,
	&m9052_MI,
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
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1730_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1730_0_0_0;
extern Il2CppType t1730_1_0_0;
struct t1730;
const Il2CppTypeDefinitionMetadata t1730_DM = 
{
	NULL, NULL, NULL, t1730_IOs, &t1361_0_0_0, t1730_VT, t1730_VTIGM, NULL};
TypeInfo t1730_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SynchronizedWriter", "System.IO", t1730_MIs, NULL, t1730_FIs, NULL, &t1730_TI, NULL, &EmptyCustomAttributesCache, &t1730_0_0_0, &t1730_1_0_0, &t1730_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1730), sizeof (t1730), 0, -1, 0, 0, -1, 1056768, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 0, 2, 0, 0, 14, 0, 1};
#include "t1731.h"
// Metadata Definition System.IO.UnexceptionalStreamReader
extern TypeInfo t1731_TI;
#include "t1731MD.h"
extern Il2CppType t291_0_0_0;
extern Il2CppType t722_0_0_0;
static ParameterInfo t1731_m9053_ParameterInfos[] = 
{
	{"stream", 0, 134221371, &EmptyCustomAttributesCache, &t291_0_0_0},
	{"encoding", 1, 134221372, &EmptyCustomAttributesCache, &t722_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9053_MI = 
{
	".ctor", (methodPointerType)&m9053, &t1731_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1731_m9053_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2875, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9054_MI = 
{
	".cctor", (methodPointerType)&m9054, &t1731_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2876, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9055_MI = 
{
	"Peek", (methodPointerType)&m9055, &t1731_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 2877, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9056_MI = 
{
	"Read", (methodPointerType)&m9056, &t1731_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2878, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1731_m9057_ParameterInfos[] = 
{
	{"dest_buffer", 0, 134221373, &EmptyCustomAttributesCache, &t305_0_0_3},
	{"index", 1, 134221374, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221375, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9057_MI = 
{
	"Read", (methodPointerType)&m9057, &t1731_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1731_m9057_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 3, false, false, 2879, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
static ParameterInfo t1731_m9058_ParameterInfos[] = 
{
	{"current", 0, 134221376, &EmptyCustomAttributesCache, &t296_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m9058_MI = 
{
	"CheckEOL", (methodPointerType)&m9058, &t1731_TI, &t124_0_0_0, RuntimeInvoker_t124_t327, t1731_m9058_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2880, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9059_MI = 
{
	"ReadLine", (methodPointerType)&m9059, &t1731_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2881, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9060_MI = 
{
	"ReadToEnd", (methodPointerType)&m9060, &t1731_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 10, 0, false, false, 2882, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1731_MIs[] =
{
	&m9053_MI,
	&m9054_MI,
	&m9055_MI,
	&m9056_MI,
	&m9057_MI,
	&m9058_MI,
	&m9059_MI,
	&m9060_MI,
	NULL
};
extern Il2CppType t1197_0_0_17;
FieldInfo t1731_f14_FieldInfo = 
{
	"newline", &t1197_0_0_17, &t1731_TI, offsetof(t1731_SFs, f14), &EmptyCustomAttributesCache};
extern Il2CppType t296_0_0_17;
FieldInfo t1731_f15_FieldInfo = 
{
	"newlineChar", &t296_0_0_17, &t1731_TI, offsetof(t1731_SFs, f15), &EmptyCustomAttributesCache};
static FieldInfo* t1731_FIs[] =
{
	&t1731_f14_FieldInfo,
	&t1731_f15_FieldInfo,
	NULL
};
extern MethodInfo m9055_MI;
extern MethodInfo m9056_MI;
extern MethodInfo m9057_MI;
extern MethodInfo m9059_MI;
extern MethodInfo m9060_MI;
static Il2CppMethodReference t1731_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9014_MI,
	&m8978_MI,
	&m9055_MI,
	&m9056_MI,
	&m9057_MI,
	&m9059_MI,
	&m9060_MI,
};
static bool t1731_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1731_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1731_0_0_0;
extern Il2CppType t1731_1_0_0;
struct t1731;
const Il2CppTypeDefinitionMetadata t1731_DM = 
{
	NULL, NULL, NULL, t1731_IOs, &t1710_0_0_0, t1731_VT, t1731_VTIGM, NULL};
TypeInfo t1731_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UnexceptionalStreamReader", "System.IO", t1731_MIs, NULL, t1731_FIs, NULL, &t1731_TI, NULL, &EmptyCustomAttributesCache, &t1731_0_0_0, &t1731_1_0_0, &t1731_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1731), sizeof (t1731), 0, -1, sizeof(t1731_SFs), 0, -1, 0, 0, 0, false, false, false, false, false, false, false, false, true, false, 8, 0, 2, 0, 0, 11, 0, 1};
#include "t1732.h"
// Metadata Definition System.IO.UnexceptionalStreamWriter
extern TypeInfo t1732_TI;
#include "t1732MD.h"
extern Il2CppType t291_0_0_0;
extern Il2CppType t722_0_0_0;
static ParameterInfo t1732_m9061_ParameterInfos[] = 
{
	{"stream", 0, 134221377, &EmptyCustomAttributesCache, &t291_0_0_0},
	{"encoding", 1, 134221378, &EmptyCustomAttributesCache, &t722_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9061_MI = 
{
	".ctor", (methodPointerType)&m9061, &t1732_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1732_m9061_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2883, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9062_MI = 
{
	"Flush", (methodPointerType)&m9062, &t1732_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2884, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1732_m9063_ParameterInfos[] = 
{
	{"buffer", 0, 134221379, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"index", 1, 134221380, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221381, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9063_MI = 
{
	"Write", (methodPointerType)&m9063, &t1732_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1732_m9063_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 3, false, false, 2885, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t296_0_0_0;
static ParameterInfo t1732_m9064_ParameterInfos[] = 
{
	{"value", 0, 134221382, &EmptyCustomAttributesCache, &t296_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m9064_MI = 
{
	"Write", (methodPointerType)&m9064, &t1732_TI, &t122_0_0_0, RuntimeInvoker_t122_t327, t1732_m9064_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 2886, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1732_m9065_ParameterInfos[] = 
{
	{"value", 0, 134221383, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9065_MI = 
{
	"Write", (methodPointerType)&m9065, &t1732_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1732_m9065_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 2887, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1732_m9066_ParameterInfos[] = 
{
	{"value", 0, 134221384, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9066_MI = 
{
	"Write", (methodPointerType)&m9066, &t1732_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1732_m9066_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 2888, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1732_MIs[] =
{
	&m9061_MI,
	&m9062_MI,
	&m9063_MI,
	&m9064_MI,
	&m9065_MI,
	&m9066_MI,
	NULL
};
extern MethodInfo m9062_MI;
extern MethodInfo m9064_MI;
extern MethodInfo m9065_MI;
extern MethodInfo m9066_MI;
extern MethodInfo m9063_MI;
static Il2CppMethodReference t1732_VT[] =
{
	&m671_MI,
	&m9003_MI,
	&m672_MI,
	&m673_MI,
	&m9036_MI,
	&m9002_MI,
	&m8992_MI,
	&m9062_MI,
	&m9064_MI,
	&m9065_MI,
	&m9066_MI,
	&m9063_MI,
	&m9043_MI,
	&m5920_MI,
	&m8991_MI,
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
	NULL, NULL, NULL, t1732_IOs, &t1726_0_0_0, t1732_VT, t1732_VTIGM, NULL};
TypeInfo t1732_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UnexceptionalStreamWriter", "System.IO", t1732_MIs, NULL, NULL, NULL, &t1732_TI, NULL, &EmptyCustomAttributesCache, &t1732_0_0_0, &t1732_1_0_0, &t1732_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1732), sizeof (t1732), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 0, 0, 0, 0, 15, 0, 1};
#include "t1733.h"
// Metadata Definition System.Reflection.Emit.MonoResource
extern TypeInfo t1733_TI;
#include "t1733MD.h"
static MethodInfo* t1733_MIs[] =
{
	NULL
};
extern Il2CppType t723_0_0_6;
FieldInfo t1733_f0_FieldInfo = 
{
	"data", &t723_0_0_6, &t1733_TI, offsetof(t1733, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1733_f1_FieldInfo = 
{
	"name", &t2_0_0_6, &t1733_TI, offsetof(t1733, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1733_f2_FieldInfo = 
{
	"filename", &t2_0_0_6, &t1733_TI, offsetof(t1733, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1734_0_0_6;
FieldInfo t1733_f3_FieldInfo = 
{
	"attrs", &t1734_0_0_6, &t1733_TI, offsetof(t1733, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1733_f4_FieldInfo = 
{
	"offset", &t125_0_0_6, &t1733_TI, offsetof(t1733, f4) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t291_0_0_6;
FieldInfo t1733_f5_FieldInfo = 
{
	"stream", &t291_0_0_6, &t1733_TI, offsetof(t1733, f5) + sizeof(t9), &EmptyCustomAttributesCache};
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
static Il2CppMethodReference t1733_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1733_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1733_0_0_0;
extern Il2CppType t1733_1_0_0;
const Il2CppTypeDefinitionMetadata t1733_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1733_VT, t1733_VTIGM, NULL};
TypeInfo t1733_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoResource", "System.Reflection.Emit", t1733_MIs, NULL, t1733_FIs, NULL, &t1733_TI, NULL, &EmptyCustomAttributesCache, &t1733_0_0_0, &t1733_1_0_0, &t1733_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1733)+ sizeof (Il2CppObject), sizeof (t1733)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048840, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 4, 0, 0};
#include "t1735.h"
// Metadata Definition System.Reflection.Emit.AssemblyBuilder
extern TypeInfo t1735_TI;
#include "t1735MD.h"
extern Il2CppType t1739_0_0_0;
extern Il2CppType t1739_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1742_0_0_0;
extern Il2CppType t1742_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1735_m9067_ParameterInfos[] = 
{
	{"n", 0, 134221385, &EmptyCustomAttributesCache, &t1739_0_0_0},
	{"directory", 1, 134221386, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"access", 2, 134221387, &EmptyCustomAttributesCache, &t1742_0_0_0},
	{"corlib_internal", 3, 134221388, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9067_MI = 
{
	".ctor", (methodPointerType)&m9067, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125_t186, t1735_m9067_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 2889, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1735_0_0_0;
extern Il2CppType t1735_0_0_0;
static ParameterInfo t1735_m9068_ParameterInfos[] = 
{
	{"ab", 0, 134221389, &EmptyCustomAttributesCache, &t1735_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9068_MI = 
{
	"basic_init", (methodPointerType)&m9068, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1735_m9068_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 2890, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9069_MI = 
{
	"get_Location", (methodPointerType)&m9069, &t1735_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 2891, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1735_m9070_ParameterInfos[] = 
{
	{"name", 0, 134221390, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"emitSymbolInfo", 1, 134221391, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1740_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9070_MI = 
{
	"DefineDynamicModule", (methodPointerType)&m9070, &t1735_TI, &t1740_0_0_0, RuntimeInvoker_t9_t9_t186, t1735_m9070_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 2892, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1735_m9071_ParameterInfos[] = 
{
	{"name", 0, 134221392, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"fileName", 1, 134221393, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"emitSymbolInfo", 2, 134221394, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"transient", 3, 134221395, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1740_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9071_MI = 
{
	"DefineDynamicModule", (methodPointerType)&m9071, &t1735_TI, &t1740_0_0_0, RuntimeInvoker_t9_t9_t9_t186_t186, t1735_m9071_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 2893, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1741_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9072_MI = 
{
	"GetModulesInternal", (methodPointerType)&m9072, &t1735_TI, &t1741_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 195, 0, 15, 0, false, false, 2894, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9073_MI = 
{
	"get_IsCompilerContext", (methodPointerType)&m9073, &t1735_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2895, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9074_MI = 
{
	"get_IsSave", (methodPointerType)&m9074, &t1735_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2896, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9075_MI = 
{
	"get_IsRun", (methodPointerType)&m9075, &t1735_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2897, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9076_MI = 
{
	"get_AssemblyDir", (methodPointerType)&m9076, &t1735_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2898, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9077_MI = 
{
	"not_supported", (methodPointerType)&m9077, &t1735_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2899, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1735_m9078_ParameterInfos[] = 
{
	{"name", 0, 134221396, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"fileName", 1, 134221397, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"fileNeedsToExists", 2, 134221398, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9078_MI = 
{
	"check_name_and_filename", (methodPointerType)&m9078, &t1735_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1735_m9078_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2900, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1739_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9079_MI = 
{
	"UnprotectedGetName", (methodPointerType)&m9079, &t1735_TI, &t1739_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 195, 0, 13, 0, false, false, 2901, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1735_MIs[] =
{
	&m9067_MI,
	&m9068_MI,
	&m9069_MI,
	&m9070_MI,
	&m9071_MI,
	&m9072_MI,
	&m9073_MI,
	&m9074_MI,
	&m9075_MI,
	&m9076_MI,
	&m9077_MI,
	&m9078_MI,
	&m9079_MI,
	NULL
};
extern Il2CppType t1736_0_0_1;
FieldInfo t1735_f10_FieldInfo = 
{
	"modules", &t1736_0_0_1, &t1735_TI, offsetof(t1735, f10), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1735_f11_FieldInfo = 
{
	"name", &t2_0_0_1, &t1735_TI, offsetof(t1735, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1735_f12_FieldInfo = 
{
	"dir", &t2_0_0_1, &t1735_TI, offsetof(t1735, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1737_0_0_1;
FieldInfo t1735_f13_FieldInfo = 
{
	"resources", &t1737_0_0_1, &t1735_TI, offsetof(t1735, f13), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1735_f14_FieldInfo = 
{
	"version", &t2_0_0_1, &t1735_TI, offsetof(t1735, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1735_f15_FieldInfo = 
{
	"culture", &t2_0_0_1, &t1735_TI, offsetof(t1735, f15), &EmptyCustomAttributesCache};
extern Il2CppType t168_0_0_1;
FieldInfo t1735_f16_FieldInfo = 
{
	"flags", &t168_0_0_1, &t1735_TI, offsetof(t1735, f16), &EmptyCustomAttributesCache};
extern Il2CppType t1738_0_0_1;
FieldInfo t1735_f17_FieldInfo = 
{
	"pekind", &t1738_0_0_1, &t1735_TI, offsetof(t1735, f17), &EmptyCustomAttributesCache};
extern Il2CppType t168_0_0_1;
FieldInfo t1735_f18_FieldInfo = 
{
	"access", &t168_0_0_1, &t1735_TI, offsetof(t1735, f18), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1735_f19_FieldInfo = 
{
	"corlib_internal", &t124_0_0_1, &t1735_TI, offsetof(t1735, f19), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t1735_f20_FieldInfo = 
{
	"pktoken", &t723_0_0_1, &t1735_TI, offsetof(t1735, f20), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_3;
FieldInfo t1735_f21_FieldInfo = 
{
	"corlib_object_type", &t126_0_0_3, &t1735_TI, offsetof(t1735, f21), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_3;
FieldInfo t1735_f22_FieldInfo = 
{
	"corlib_value_type", &t126_0_0_3, &t1735_TI, offsetof(t1735, f22), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_3;
FieldInfo t1735_f23_FieldInfo = 
{
	"corlib_enum_type", &t126_0_0_3, &t1735_TI, offsetof(t1735, f23), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_3;
FieldInfo t1735_f24_FieldInfo = 
{
	"corlib_void_type", &t126_0_0_3, &t1735_TI, offsetof(t1735, f24), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1735_f25_FieldInfo = 
{
	"created", &t124_0_0_1, &t1735_TI, offsetof(t1735, f25), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1735_f26_FieldInfo = 
{
	"is_module_only", &t124_0_0_1, &t1735_TI, offsetof(t1735, f26), &EmptyCustomAttributesCache};
extern Il2CppType t1649_0_0_1;
FieldInfo t1735_f27_FieldInfo = 
{
	"sn", &t1649_0_0_1, &t1735_TI, offsetof(t1735, f27), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_33;
FieldInfo t1735_f28_FieldInfo = 
{
	"is_compiler_context", &t124_0_0_33, &t1735_TI, offsetof(t1735, f28), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1735_f29_FieldInfo = 
{
	"versioninfo_culture", &t2_0_0_1, &t1735_TI, offsetof(t1735, f29), &EmptyCustomAttributesCache};
static FieldInfo* t1735_FIs[] =
{
	&t1735_f10_FieldInfo,
	&t1735_f11_FieldInfo,
	&t1735_f12_FieldInfo,
	&t1735_f13_FieldInfo,
	&t1735_f14_FieldInfo,
	&t1735_f15_FieldInfo,
	&t1735_f16_FieldInfo,
	&t1735_f17_FieldInfo,
	&t1735_f18_FieldInfo,
	&t1735_f19_FieldInfo,
	&t1735_f20_FieldInfo,
	&t1735_f21_FieldInfo,
	&t1735_f22_FieldInfo,
	&t1735_f23_FieldInfo,
	&t1735_f24_FieldInfo,
	&t1735_f25_FieldInfo,
	&t1735_f26_FieldInfo,
	&t1735_f27_FieldInfo,
	&t1735_f28_FieldInfo,
	&t1735_f29_FieldInfo,
	NULL
};
extern MethodInfo m9069_MI;
static PropertyInfo t1735____Location_PropertyInfo = 
{
	&t1735_TI, "Location", &m9069_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9073_MI;
static PropertyInfo t1735____IsCompilerContext_PropertyInfo = 
{
	&t1735_TI, "IsCompilerContext", &m9073_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9074_MI;
static PropertyInfo t1735____IsSave_PropertyInfo = 
{
	&t1735_TI, "IsSave", &m9074_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9075_MI;
static PropertyInfo t1735____IsRun_PropertyInfo = 
{
	&t1735_TI, "IsRun", &m9075_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9076_MI;
static PropertyInfo t1735____AssemblyDir_PropertyInfo = 
{
	&t1735_TI, "AssemblyDir", &m9076_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1735_PIs[] =
{
	&t1735____Location_PropertyInfo,
	&t1735____IsCompilerContext_PropertyInfo,
	&t1735____IsSave_PropertyInfo,
	&t1735____IsRun_PropertyInfo,
	&t1735____AssemblyDir_PropertyInfo,
	NULL
};
extern MethodInfo m9433_MI;
extern MethodInfo m9426_MI;
extern MethodInfo m9425_MI;
extern MethodInfo m9423_MI;
extern MethodInfo m9428_MI;
extern MethodInfo m5744_MI;
extern MethodInfo m9430_MI;
extern MethodInfo m9079_MI;
extern MethodInfo m9439_MI;
extern MethodInfo m9072_MI;
extern MethodInfo m9441_MI;
static Il2CppMethodReference t1735_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m9433_MI,
	&m9426_MI,
	&m9425_MI,
	&m9423_MI,
	&m9069_MI,
	&m9425_MI,
	&m9426_MI,
	&m9428_MI,
	&m5744_MI,
	&m9430_MI,
	&m9079_MI,
	&m9439_MI,
	&m9072_MI,
	&m9441_MI,
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
	false,
	false,
};
extern Il2CppType t2580_0_0_0;
static const Il2CppType* t1735_ITIs[] = 
{
	&t2580_0_0_0,
};
extern Il2CppType t2121_0_0_0;
extern Il2CppType t2581_0_0_0;
static Il2CppInterfaceOffsetPair t1735_IOs[] = 
{
	{ &t2121_0_0_0, 4},
	{ &t2581_0_0_0, 6},
	{ &t2580_0_0_0, 17},
};
extern TypeInfo t1829_TI;
#include "t1829.h"
#include "t1829MD.h"
extern MethodInfo m9743_MI;
extern TypeInfo t1831_TI;
#include "t1831.h"
#include "t1831MD.h"
extern MethodInfo m9744_MI;
extern TypeInfo t2580_TI;
void t1735_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1829 * tmp;
		tmp = (t1829 *)il2cpp_codegen_object_new (&t1829_TI);
		m9743(tmp, 0, &m9743_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1831 * tmp;
		tmp = (t1831 *)il2cpp_codegen_object_new (&t1831_TI);
		m9744(tmp, il2cpp_codegen_type_get_object(&t2580_0_0_0), &m9744_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1735__CustomAttributeCache = {
3,
NULL,
&t1735_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1735_1_0_0;
extern Il2CppType t1336_0_0_0;
struct t1735;
extern CustomAttributesCache t1735__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1735_DM = 
{
	NULL, NULL, t1735_ITIs, t1735_IOs, &t1336_0_0_0, t1735_VT, t1735_VTIGM, NULL};
TypeInfo t1735_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyBuilder", "System.Reflection.Emit", t1735_MIs, t1735_PIs, t1735_FIs, NULL, &t1735_TI, NULL, &t1735__CustomAttributeCache, &t1735_0_0_0, &t1735_1_0_0, &t1735_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1735), sizeof (t1735), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 13, 5, 20, 0, 0, 17, 1, 3};
#include "t1742.h"
// Metadata Definition System.Reflection.Emit.AssemblyBuilderAccess
extern TypeInfo t1742_TI;
#include "t1742MD.h"
static MethodInfo* t1742_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1742_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1742_TI, offsetof(t1742, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1742_0_0_32854;
FieldInfo t1742_f2_FieldInfo = 
{
	"Run", &t1742_0_0_32854, &t1742_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1742_0_0_32854;
FieldInfo t1742_f3_FieldInfo = 
{
	"Save", &t1742_0_0_32854, &t1742_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1742_0_0_32854;
FieldInfo t1742_f4_FieldInfo = 
{
	"RunAndSave", &t1742_0_0_32854, &t1742_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1742_0_0_32854;
FieldInfo t1742_f5_FieldInfo = 
{
	"ReflectionOnly", &t1742_0_0_32854, &t1742_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1742_FIs[] =
{
	&t1742_f1_FieldInfo,
	&t1742_f2_FieldInfo,
	&t1742_f3_FieldInfo,
	&t1742_f4_FieldInfo,
	&t1742_f5_FieldInfo,
	NULL
};
static const int32_t t1742_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1742_f2_DefaultValue = 
{
	&t1742_f2_FieldInfo, { (char*)&t1742_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1742_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1742_f3_DefaultValue = 
{
	&t1742_f3_FieldInfo, { (char*)&t1742_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1742_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1742_f4_DefaultValue = 
{
	&t1742_f4_FieldInfo, { (char*)&t1742_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1742_f5_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1742_f5_DefaultValue = 
{
	&t1742_f5_FieldInfo, { (char*)&t1742_f5_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1742_FDVs[] = 
{
	&t1742_f2_DefaultValue,
	&t1742_f3_DefaultValue,
	&t1742_f4_DefaultValue,
	&t1742_f5_DefaultValue,
	NULL
};
static Il2CppMethodReference t1742_VT[] =
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
static bool t1742_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1742_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1742_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t608 * tmp;
		tmp = (t608 *)il2cpp_codegen_object_new (&t608_TI);
		m2967(tmp, &m2967_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1742__CustomAttributeCache = {
2,
NULL,
&t1742_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1742_1_0_0;
extern CustomAttributesCache t1742__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1742_DM = 
{
	NULL, NULL, NULL, t1742_IOs, &t8_0_0_0, t1742_VT, t1742_VTIGM, NULL};
TypeInfo t1742_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyBuilderAccess", "System.Reflection.Emit", t1742_MIs, NULL, t1742_FIs, NULL, &t125_TI, NULL, &t1742__CustomAttributeCache, &t1742_0_0_0, &t1742_1_0_0, &t1742_DM, NULL, NULL, NULL, t1742_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1742)+ sizeof (Il2CppObject), sizeof (t1742)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t1743.h"
// Metadata Definition System.Reflection.Emit.ConstructorBuilder
extern TypeInfo t1743_TI;
#include "t1743MD.h"
extern Il2CppType t1745_0_0_0;
extern Il2CppType t1745_0_0_0;
extern Il2CppType t1748_0_0_0;
extern Il2CppType t1748_0_0_0;
extern Il2CppType t1564_0_0_0;
extern Il2CppType t1564_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t1747_0_0_0;
extern Il2CppType t1747_0_0_0;
extern Il2CppType t1747_0_0_0;
static ParameterInfo t1743_m9080_ParameterInfos[] = 
{
	{"tb", 0, 134221399, &EmptyCustomAttributesCache, &t1745_0_0_0},
	{"attributes", 1, 134221400, &EmptyCustomAttributesCache, &t1748_0_0_0},
	{"callingConvention", 2, 134221401, &EmptyCustomAttributesCache, &t1564_0_0_0},
	{"parameterTypes", 3, 134221402, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"paramModReq", 4, 134221403, &EmptyCustomAttributesCache, &t1747_0_0_0},
	{"paramModOpt", 5, 134221404, &EmptyCustomAttributesCache, &t1747_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9080_MI = 
{
	".ctor", (methodPointerType)&m9080, &t1743_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t9_t9_t9, t1743_m9080_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 6, false, false, 2902, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1564_0_0_0;
extern void* RuntimeInvoker_t1564 (MethodInfo* method, void* obj, void** args);
MethodInfo m9081_MI = 
{
	"get_CallingConvention", (methodPointerType)&m9081, &t1743_TI, &t1564_0_0_0, RuntimeInvoker_t1564, NULL, &EmptyCustomAttributesCache, 2246, 0, 20, 0, false, false, 2903, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1745_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9082_MI = 
{
	"get_TypeBuilder", (methodPointerType)&m9082, &t1743_TI, &t1745_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2904, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t921_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9083_MI = 
{
	"GetParameters", (methodPointerType)&m9083, &t1743_TI, &t921_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 14, 0, false, false, 2905, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t921_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9084_MI = 
{
	"GetParametersInternal", (methodPointerType)&m9084, &t1743_TI, &t921_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2906, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9085_MI = 
{
	"GetParameterCount", (methodPointerType)&m9085, &t1743_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 195, 0, 15, 0, false, false, 2907, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t918_0_0_0;
extern Il2CppType t918_0_0_0;
extern Il2CppType t926_0_0_0;
extern Il2CppType t926_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t894_0_0_0;
static ParameterInfo t1743_m9086_ParameterInfos[] = 
{
	{"obj", 0, 134221405, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"invokeAttr", 1, 134221406, &EmptyCustomAttributesCache, &t918_0_0_0},
	{"binder", 2, 134221407, &EmptyCustomAttributesCache, &t926_0_0_0},
	{"parameters", 3, 134221408, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"culture", 4, 134221409, &EmptyCustomAttributesCache, &t894_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9086_MI = 
{
	"Invoke", (methodPointerType)&m9086, &t1743_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9, t1743_m9086_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 5, false, false, 2908, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t918_0_0_0;
extern Il2CppType t926_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t894_0_0_0;
static ParameterInfo t1743_m9087_ParameterInfos[] = 
{
	{"invokeAttr", 0, 134221410, &EmptyCustomAttributesCache, &t918_0_0_0},
	{"binder", 1, 134221411, &EmptyCustomAttributesCache, &t926_0_0_0},
	{"parameters", 2, 134221412, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"culture", 3, 134221413, &EmptyCustomAttributesCache, &t894_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t125_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9087_MI = 
{
	"Invoke", (methodPointerType)&m9087, &t1743_TI, &t9_0_0_0, RuntimeInvoker_t9_t125_t9_t9_t9, t1743_m9087_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 29, 4, false, false, 2909, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1749_0_0_0;
extern void* RuntimeInvoker_t1749 (MethodInfo* method, void* obj, void** args);
MethodInfo m9088_MI = 
{
	"get_MethodHandle", (methodPointerType)&m9088, &t1743_TI, &t1749_0_0_0, RuntimeInvoker_t1749, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 2910, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1748_0_0_0;
extern void* RuntimeInvoker_t1748 (MethodInfo* method, void* obj, void** args);
MethodInfo m9089_MI = 
{
	"get_Attributes", (methodPointerType)&m9089, &t1743_TI, &t1748_0_0_0, RuntimeInvoker_t1748, NULL, &EmptyCustomAttributesCache, 2246, 0, 19, 0, false, false, 2911, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9090_MI = 
{
	"get_ReflectedType", (methodPointerType)&m9090, &t1743_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2912, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9091_MI = 
{
	"get_DeclaringType", (methodPointerType)&m9091, &t1743_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2913, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9092_MI = 
{
	"get_Name", (methodPointerType)&m9092, &t1743_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2914, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1743_m9093_ParameterInfos[] = 
{
	{"attributeType", 0, 134221414, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221415, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9093_MI = 
{
	"IsDefined", (methodPointerType)&m9093, &t1743_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1743_m9093_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 2915, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1743_m9094_ParameterInfos[] = 
{
	{"inherit", 0, 134221416, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9094_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9094, &t1743_TI, &t158_0_0_0, RuntimeInvoker_t9_t186, t1743_m9094_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 2916, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1743_m9095_ParameterInfos[] = 
{
	{"attributeType", 0, 134221417, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221418, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9095_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9095, &t1743_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t186, t1743_m9095_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 2917, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1744_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9096_MI = 
{
	"GetILGenerator", (methodPointerType)&m9096, &t1743_TI, &t1744_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 2918, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1743_m9097_ParameterInfos[] = 
{
	{"streamSize", 0, 134221419, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t1744_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9097_MI = 
{
	"GetILGenerator", (methodPointerType)&m9097, &t1743_TI, &t1744_0_0_0, RuntimeInvoker_t9_t125, t1743_m9097_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2919, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1750_0_0_0;
extern void* RuntimeInvoker_t1750 (MethodInfo* method, void* obj, void** args);
MethodInfo m9098_MI = 
{
	"GetToken", (methodPointerType)&m9098, &t1743_TI, &t1750_0_0_0, RuntimeInvoker_t1750, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 2920, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1559_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9099_MI = 
{
	"get_Module", (methodPointerType)&m9099, &t1743_TI, &t1559_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 2921, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9100_MI = 
{
	"ToString", (methodPointerType)&m9100, &t1743_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2922, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1743_m9101_ParameterInfos[] = 
{
	{"obj", 0, 134221420, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"table", 1, 134221421, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inc", 2, 134221422, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9101_MI = 
{
	"get_next_table_index", (methodPointerType)&m9101, &t1743_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t186, t1743_m9101_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 24, 3, false, false, 2923, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9102_MI = 
{
	"get_IsCompilerContext", (methodPointerType)&m9102, &t1743_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2177, 0, 255, 0, false, false, 2924, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9103_MI = 
{
	"not_supported", (methodPointerType)&m9103, &t1743_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2925, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9104_MI = 
{
	"not_created", (methodPointerType)&m9104, &t1743_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2926, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1743_MIs[] =
{
	&m9080_MI,
	&m9081_MI,
	&m9082_MI,
	&m9083_MI,
	&m9084_MI,
	&m9085_MI,
	&m9086_MI,
	&m9087_MI,
	&m9088_MI,
	&m9089_MI,
	&m9090_MI,
	&m9091_MI,
	&m9092_MI,
	&m9093_MI,
	&m9094_MI,
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
	NULL
};
extern Il2CppType t1744_0_0_1;
FieldInfo t1743_f2_FieldInfo = 
{
	"ilgen", &t1744_0_0_1, &t1743_TI, offsetof(t1743, f2), &EmptyCustomAttributesCache};
extern Il2CppType t152_0_0_3;
FieldInfo t1743_f3_FieldInfo = 
{
	"parameters", &t152_0_0_3, &t1743_TI, offsetof(t1743, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1748_0_0_1;
FieldInfo t1743_f4_FieldInfo = 
{
	"attrs", &t1748_0_0_1, &t1743_TI, offsetof(t1743, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1743_f5_FieldInfo = 
{
	"table_idx", &t125_0_0_1, &t1743_TI, offsetof(t1743, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1564_0_0_1;
FieldInfo t1743_f6_FieldInfo = 
{
	"call_conv", &t1564_0_0_1, &t1743_TI, offsetof(t1743, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1745_0_0_1;
FieldInfo t1743_f7_FieldInfo = 
{
	"type", &t1745_0_0_1, &t1743_TI, offsetof(t1743, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1746_0_0_3;
FieldInfo t1743_f8_FieldInfo = 
{
	"pinfo", &t1746_0_0_3, &t1743_TI, offsetof(t1743, f8), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1743_f9_FieldInfo = 
{
	"init_locals", &t124_0_0_1, &t1743_TI, offsetof(t1743, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1747_0_0_1;
FieldInfo t1743_f10_FieldInfo = 
{
	"paramModReq", &t1747_0_0_1, &t1743_TI, offsetof(t1743, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1747_0_0_1;
FieldInfo t1743_f11_FieldInfo = 
{
	"paramModOpt", &t1747_0_0_1, &t1743_TI, offsetof(t1743, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1743_FIs[] =
{
	&t1743_f2_FieldInfo,
	&t1743_f3_FieldInfo,
	&t1743_f4_FieldInfo,
	&t1743_f5_FieldInfo,
	&t1743_f6_FieldInfo,
	&t1743_f7_FieldInfo,
	&t1743_f8_FieldInfo,
	&t1743_f9_FieldInfo,
	&t1743_f10_FieldInfo,
	&t1743_f11_FieldInfo,
	NULL
};
extern MethodInfo m9081_MI;
extern CustomAttributesCache t1743__CustomAttributeCache_t1743____CallingConvention_PropertyInfo;
static PropertyInfo t1743____CallingConvention_PropertyInfo = 
{
	&t1743_TI, "CallingConvention", &m9081_MI, NULL, 0, &t1743__CustomAttributeCache_t1743____CallingConvention_PropertyInfo};
extern MethodInfo m9082_MI;
static PropertyInfo t1743____TypeBuilder_PropertyInfo = 
{
	&t1743_TI, "TypeBuilder", &m9082_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9088_MI;
static PropertyInfo t1743____MethodHandle_PropertyInfo = 
{
	&t1743_TI, "MethodHandle", &m9088_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9089_MI;
static PropertyInfo t1743____Attributes_PropertyInfo = 
{
	&t1743_TI, "Attributes", &m9089_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9090_MI;
static PropertyInfo t1743____ReflectedType_PropertyInfo = 
{
	&t1743_TI, "ReflectedType", &m9090_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9091_MI;
static PropertyInfo t1743____DeclaringType_PropertyInfo = 
{
	&t1743_TI, "DeclaringType", &m9091_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9092_MI;
static PropertyInfo t1743____Name_PropertyInfo = 
{
	&t1743_TI, "Name", &m9092_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9099_MI;
static PropertyInfo t1743____Module_PropertyInfo = 
{
	&t1743_TI, "Module", &m9099_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9102_MI;
static PropertyInfo t1743____IsCompilerContext_PropertyInfo = 
{
	&t1743_TI, "IsCompilerContext", &m9102_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1743_PIs[] =
{
	&t1743____CallingConvention_PropertyInfo,
	&t1743____TypeBuilder_PropertyInfo,
	&t1743____MethodHandle_PropertyInfo,
	&t1743____Attributes_PropertyInfo,
	&t1743____ReflectedType_PropertyInfo,
	&t1743____DeclaringType_PropertyInfo,
	&t1743____Name_PropertyInfo,
	&t1743____Module_PropertyInfo,
	&t1743____IsCompilerContext_PropertyInfo,
	NULL
};
extern MethodInfo m9100_MI;
extern MethodInfo m9095_MI;
extern MethodInfo m9093_MI;
extern MethodInfo m9485_MI;
extern MethodInfo m9094_MI;
extern MethodInfo m9083_MI;
extern MethodInfo m9085_MI;
extern MethodInfo m4393_MI;
extern MethodInfo m9086_MI;
extern MethodInfo m4366_MI;
extern MethodInfo m4365_MI;
extern MethodInfo m9517_MI;
extern MethodInfo m9101_MI;
extern MethodInfo m9519_MI;
extern MethodInfo m9520_MI;
extern MethodInfo m9521_MI;
extern MethodInfo m9522_MI;
extern MethodInfo m9087_MI;
static Il2CppMethodReference t1743_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m9100_MI,
	&m9095_MI,
	&m9093_MI,
	&m9091_MI,
	&m9485_MI,
	&m9092_MI,
	&m9090_MI,
	&m9099_MI,
	&m9093_MI,
	&m9094_MI,
	&m9095_MI,
	&m9083_MI,
	&m9085_MI,
	&m4393_MI,
	&m9086_MI,
	&m9088_MI,
	&m9089_MI,
	&m9081_MI,
	&m4366_MI,
	&m4365_MI,
	&m9517_MI,
	&m9101_MI,
	&m9519_MI,
	&m9520_MI,
	&m9521_MI,
	&m9522_MI,
	&m9087_MI,
};
static bool t1743_VTIGM[] =
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
extern Il2CppType t2582_0_0_0;
static const Il2CppType* t1743_ITIs[] = 
{
	&t2582_0_0_0,
};
extern Il2CppType t2583_0_0_0;
extern Il2CppType t2584_0_0_0;
extern Il2CppType t2412_0_0_0;
static Il2CppInterfaceOffsetPair t1743_IOs[] = 
{
	{ &t2583_0_0_0, 29},
	{ &t2584_0_0_0, 14},
	{ &t2121_0_0_0, 4},
	{ &t2412_0_0_0, 6},
	{ &t2582_0_0_0, 30},
};
extern TypeInfo t2582_TI;
void t1743_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1829 * tmp;
		tmp = (t1829 *)il2cpp_codegen_object_new (&t1829_TI);
		m9743(tmp, 0, &m9743_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1831 * tmp;
		tmp = (t1831 *)il2cpp_codegen_object_new (&t1831_TI);
		m9744(tmp, il2cpp_codegen_type_get_object(&t2582_0_0_0), &m9744_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t1743_CustomAttributesCacheGenerator_t1743____CallingConvention_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7820(tmp, &m7820_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1743__CustomAttributeCache = {
3,
NULL,
&t1743_CustomAttributesCacheGenerator
};
CustomAttributesCache t1743__CustomAttributeCache_t1743____CallingConvention_PropertyInfo = {
1,
NULL,
&t1743_CustomAttributesCacheGenerator_t1743____CallingConvention_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1743_0_0_0;
extern Il2CppType t1743_1_0_0;
extern Il2CppType t819_0_0_0;
struct t1743;
extern CustomAttributesCache t1743__CustomAttributeCache;
extern CustomAttributesCache t1743__CustomAttributeCache_t1743____CallingConvention_PropertyInfo;
const Il2CppTypeDefinitionMetadata t1743_DM = 
{
	NULL, NULL, t1743_ITIs, t1743_IOs, &t819_0_0_0, t1743_VT, t1743_VTIGM, NULL};
TypeInfo t1743_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ConstructorBuilder", "System.Reflection.Emit", t1743_MIs, t1743_PIs, t1743_FIs, NULL, &t1743_TI, NULL, &t1743__CustomAttributeCache, &t1743_0_0_0, &t1743_1_0_0, &t1743_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1743), sizeof (t1743), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 25, 9, 10, 0, 0, 30, 1, 5};
#include "t1751.h"
// Metadata Definition System.Reflection.Emit.DynamicMethod
extern TypeInfo t1751_TI;
#include "t1751MD.h"
extern Il2CppType t1751_0_0_0;
extern Il2CppType t1751_0_0_0;
static ParameterInfo t1751_m9105_ParameterInfos[] = 
{
	{"m", 0, 134221423, &EmptyCustomAttributesCache, &t1751_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9105_MI = 
{
	"create_dynamic_method", (methodPointerType)&m9105, &t1751_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1751_m9105_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 2927, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1751_0_0_0;
static ParameterInfo t1751_m9106_ParameterInfos[] = 
{
	{"m", 0, 134221424, &EmptyCustomAttributesCache, &t1751_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9106_MI = 
{
	"destroy_dynamic_method", (methodPointerType)&m9106, &t1751_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1751_m9106_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 2928, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9107_MI = 
{
	"CreateDynMethod", (methodPointerType)&m9107, &t1751_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2929, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9108_MI = 
{
	"Finalize", (methodPointerType)&m9108, &t1751_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 2930, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t821_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9109_MI = 
{
	"GetBaseDefinition", (methodPointerType)&m9109, &t1751_TI, &t821_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 29, 0, false, false, 2931, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1751_m9110_ParameterInfos[] = 
{
	{"inherit", 0, 134221425, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1751__CustomAttributeCache_m9110;
MethodInfo m9110_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9110, &t1751_TI, &t158_0_0_0, RuntimeInvoker_t9_t186, t1751_m9110_ParameterInfos, &t1751__CustomAttributeCache_m9110, 198, 0, 12, 1, false, false, 2932, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1751_m9111_ParameterInfos[] = 
{
	{"attributeType", 0, 134221426, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221427, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1751__CustomAttributeCache_m9111;
MethodInfo m9111_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9111, &t1751_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t186, t1751_m9111_ParameterInfos, &t1751__CustomAttributeCache_m9111, 198, 0, 13, 2, false, false, 2933, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t921_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9112_MI = 
{
	"GetParameters", (methodPointerType)&m9112, &t1751_TI, &t921_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 14, 0, false, false, 2934, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t918_0_0_0;
extern Il2CppType t926_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t894_0_0_0;
static ParameterInfo t1751_m9113_ParameterInfos[] = 
{
	{"obj", 0, 134221428, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"invokeAttr", 1, 134221429, &EmptyCustomAttributesCache, &t918_0_0_0},
	{"binder", 2, 134221430, &EmptyCustomAttributesCache, &t926_0_0_0},
	{"parameters", 3, 134221431, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"culture", 4, 134221432, &EmptyCustomAttributesCache, &t894_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9113_MI = 
{
	"Invoke", (methodPointerType)&m9113, &t1751_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9, t1751_m9113_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 5, false, false, 2935, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1751_m9114_ParameterInfos[] = 
{
	{"attributeType", 0, 134221433, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221434, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1751__CustomAttributeCache_m9114;
MethodInfo m9114_MI = 
{
	"IsDefined", (methodPointerType)&m9114, &t1751_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1751_m9114_ParameterInfos, &t1751__CustomAttributeCache_m9114, 198, 0, 11, 2, false, false, 2936, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9115_MI = 
{
	"ToString", (methodPointerType)&m9115, &t1751_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2937, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1748_0_0_0;
extern void* RuntimeInvoker_t1748 (MethodInfo* method, void* obj, void** args);
MethodInfo m9116_MI = 
{
	"get_Attributes", (methodPointerType)&m9116, &t1751_TI, &t1748_0_0_0, RuntimeInvoker_t1748, NULL, &EmptyCustomAttributesCache, 2246, 0, 19, 0, false, false, 2938, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1564_0_0_0;
extern void* RuntimeInvoker_t1564 (MethodInfo* method, void* obj, void** args);
MethodInfo m9117_MI = 
{
	"get_CallingConvention", (methodPointerType)&m9117, &t1751_TI, &t1564_0_0_0, RuntimeInvoker_t1564, NULL, &EmptyCustomAttributesCache, 2246, 0, 20, 0, false, false, 2939, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9118_MI = 
{
	"get_DeclaringType", (methodPointerType)&m9118, &t1751_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2940, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1749_0_0_0;
extern void* RuntimeInvoker_t1749 (MethodInfo* method, void* obj, void** args);
MethodInfo m9119_MI = 
{
	"get_MethodHandle", (methodPointerType)&m9119, &t1751_TI, &t1749_0_0_0, RuntimeInvoker_t1749, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 2941, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1559_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9120_MI = 
{
	"get_Module", (methodPointerType)&m9120, &t1751_TI, &t1559_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 2942, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9121_MI = 
{
	"get_Name", (methodPointerType)&m9121, &t1751_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2943, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9122_MI = 
{
	"get_ReflectedType", (methodPointerType)&m9122, &t1751_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2944, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9123_MI = 
{
	"get_ReturnType", (methodPointerType)&m9123, &t1751_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 30, 0, false, false, 2945, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1751_MIs[] =
{
	&m9105_MI,
	&m9106_MI,
	&m9107_MI,
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
	NULL
};
extern Il2CppType t1749_0_0_1;
FieldInfo t1751_f0_FieldInfo = 
{
	"mhandle", &t1749_0_0_1, &t1751_TI, offsetof(t1751, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1751_f1_FieldInfo = 
{
	"name", &t2_0_0_1, &t1751_TI, offsetof(t1751, f1), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1751_f2_FieldInfo = 
{
	"returnType", &t126_0_0_1, &t1751_TI, offsetof(t1751, f2), &EmptyCustomAttributesCache};
extern Il2CppType t152_0_0_1;
FieldInfo t1751_f3_FieldInfo = 
{
	"parameters", &t152_0_0_1, &t1751_TI, offsetof(t1751, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1748_0_0_1;
FieldInfo t1751_f4_FieldInfo = 
{
	"attributes", &t1748_0_0_1, &t1751_TI, offsetof(t1751, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1564_0_0_1;
FieldInfo t1751_f5_FieldInfo = 
{
	"callingConvention", &t1564_0_0_1, &t1751_TI, offsetof(t1751, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1559_0_0_1;
FieldInfo t1751_f6_FieldInfo = 
{
	"module", &t1559_0_0_1, &t1751_TI, offsetof(t1751, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1744_0_0_1;
FieldInfo t1751_f7_FieldInfo = 
{
	"ilgen", &t1744_0_0_1, &t1751_TI, offsetof(t1751, f7), &EmptyCustomAttributesCache};
extern Il2CppType t158_0_0_1;
FieldInfo t1751_f8_FieldInfo = 
{
	"refs", &t158_0_0_1, &t1751_TI, offsetof(t1751, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1752_0_0_1;
FieldInfo t1751_f9_FieldInfo = 
{
	"method", &t1752_0_0_1, &t1751_TI, offsetof(t1751, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1746_0_0_1;
FieldInfo t1751_f10_FieldInfo = 
{
	"pinfo", &t1746_0_0_1, &t1751_TI, offsetof(t1751, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t1751_f11_FieldInfo = 
{
	"creating", &t124_0_0_3, &t1751_TI, offsetof(t1751, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1751_FIs[] =
{
	&t1751_f0_FieldInfo,
	&t1751_f1_FieldInfo,
	&t1751_f2_FieldInfo,
	&t1751_f3_FieldInfo,
	&t1751_f4_FieldInfo,
	&t1751_f5_FieldInfo,
	&t1751_f6_FieldInfo,
	&t1751_f7_FieldInfo,
	&t1751_f8_FieldInfo,
	&t1751_f9_FieldInfo,
	&t1751_f10_FieldInfo,
	&t1751_f11_FieldInfo,
	NULL
};
extern MethodInfo m9116_MI;
static PropertyInfo t1751____Attributes_PropertyInfo = 
{
	&t1751_TI, "Attributes", &m9116_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9117_MI;
static PropertyInfo t1751____CallingConvention_PropertyInfo = 
{
	&t1751_TI, "CallingConvention", &m9117_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9118_MI;
static PropertyInfo t1751____DeclaringType_PropertyInfo = 
{
	&t1751_TI, "DeclaringType", &m9118_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9119_MI;
static PropertyInfo t1751____MethodHandle_PropertyInfo = 
{
	&t1751_TI, "MethodHandle", &m9119_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9120_MI;
static PropertyInfo t1751____Module_PropertyInfo = 
{
	&t1751_TI, "Module", &m9120_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9121_MI;
static PropertyInfo t1751____Name_PropertyInfo = 
{
	&t1751_TI, "Name", &m9121_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9122_MI;
static PropertyInfo t1751____ReflectedType_PropertyInfo = 
{
	&t1751_TI, "ReflectedType", &m9122_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9123_MI;
static PropertyInfo t1751____ReturnType_PropertyInfo = 
{
	&t1751_TI, "ReturnType", &m9123_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1751_PIs[] =
{
	&t1751____Attributes_PropertyInfo,
	&t1751____CallingConvention_PropertyInfo,
	&t1751____DeclaringType_PropertyInfo,
	&t1751____MethodHandle_PropertyInfo,
	&t1751____Module_PropertyInfo,
	&t1751____Name_PropertyInfo,
	&t1751____ReflectedType_PropertyInfo,
	&t1751____ReturnType_PropertyInfo,
	NULL
};
extern MethodInfo m9108_MI;
extern MethodInfo m9115_MI;
extern MethodInfo m9111_MI;
extern MethodInfo m9114_MI;
extern MethodInfo m9524_MI;
extern MethodInfo m9110_MI;
extern MethodInfo m9112_MI;
extern MethodInfo m9515_MI;
extern MethodInfo m9113_MI;
extern MethodInfo m9518_MI;
extern MethodInfo m9527_MI;
extern MethodInfo m9530_MI;
extern MethodInfo m9529_MI;
extern MethodInfo m9528_MI;
extern MethodInfo m9109_MI;
extern MethodInfo m9526_MI;
static Il2CppMethodReference t1751_VT[] =
{
	&m671_MI,
	&m9108_MI,
	&m672_MI,
	&m9115_MI,
	&m9111_MI,
	&m9114_MI,
	&m9118_MI,
	&m9524_MI,
	&m9121_MI,
	&m9122_MI,
	&m9120_MI,
	&m9114_MI,
	&m9110_MI,
	&m9111_MI,
	&m9112_MI,
	&m9515_MI,
	&m4393_MI,
	&m9113_MI,
	&m9119_MI,
	&m9116_MI,
	&m9117_MI,
	&m4366_MI,
	&m4365_MI,
	&m9517_MI,
	&m9518_MI,
	&m9527_MI,
	&m9530_MI,
	&m9529_MI,
	&m9528_MI,
	&m9109_MI,
	&m9123_MI,
	&m9526_MI,
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
extern Il2CppType t2585_0_0_0;
static Il2CppInterfaceOffsetPair t1751_IOs[] = 
{
	{ &t2585_0_0_0, 29},
	{ &t2584_0_0_0, 14},
	{ &t2121_0_0_0, 4},
	{ &t2412_0_0_0, 6},
};
void t1751_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1751_CustomAttributesCacheGenerator_m9110(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7821(tmp, il2cpp_codegen_string_new_wrapper("Not implemented"), &m7821_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1751_CustomAttributesCacheGenerator_m9111(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7821(tmp, il2cpp_codegen_string_new_wrapper("Not implemented"), &m7821_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1751_CustomAttributesCacheGenerator_m9114(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7821(tmp, il2cpp_codegen_string_new_wrapper("Not implemented"), &m7821_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1751__CustomAttributeCache = {
1,
NULL,
&t1751_CustomAttributesCacheGenerator
};
CustomAttributesCache t1751__CustomAttributeCache_m9110 = {
1,
NULL,
&t1751_CustomAttributesCacheGenerator_m9110
};
CustomAttributesCache t1751__CustomAttributeCache_m9111 = {
1,
NULL,
&t1751_CustomAttributesCacheGenerator_m9111
};
CustomAttributesCache t1751__CustomAttributeCache_m9114 = {
1,
NULL,
&t1751_CustomAttributesCacheGenerator_m9114
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1751_1_0_0;
extern Il2CppType t821_0_0_0;
struct t1751;
extern CustomAttributesCache t1751__CustomAttributeCache;
extern CustomAttributesCache t1751__CustomAttributeCache_m9110;
extern CustomAttributesCache t1751__CustomAttributeCache_m9111;
extern CustomAttributesCache t1751__CustomAttributeCache_m9114;
const Il2CppTypeDefinitionMetadata t1751_DM = 
{
	NULL, NULL, NULL, t1751_IOs, &t821_0_0_0, t1751_VT, t1751_VTIGM, NULL};
TypeInfo t1751_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DynamicMethod", "System.Reflection.Emit", t1751_MIs, t1751_PIs, t1751_FIs, NULL, &t1751_TI, NULL, &t1751__CustomAttributeCache, &t1751_0_0_0, &t1751_1_0_0, &t1751_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1751), sizeof (t1751), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 19, 8, 12, 0, 0, 32, 0, 4};
#include "t1753.h"
// Metadata Definition System.Reflection.Emit.EnumBuilder
extern TypeInfo t1753_TI;
#include "t1753MD.h"
extern Il2CppType t1336_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9124_MI = 
{
	"get_Assembly", (methodPointerType)&m9124, &t1753_TI, &t1336_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 14, 0, false, false, 2946, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9125_MI = 
{
	"get_AssemblyQualifiedName", (methodPointerType)&m9125, &t1753_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 2947, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9126_MI = 
{
	"get_BaseType", (methodPointerType)&m9126, &t1753_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 17, 0, false, false, 2948, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9127_MI = 
{
	"get_DeclaringType", (methodPointerType)&m9127, &t1753_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2949, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9128_MI = 
{
	"get_FullName", (methodPointerType)&m9128, &t1753_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 2950, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1559_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9129_MI = 
{
	"get_Module", (methodPointerType)&m9129, &t1753_TI, &t1559_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 2951, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9130_MI = 
{
	"get_Name", (methodPointerType)&m9130, &t1753_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2952, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9131_MI = 
{
	"get_Namespace", (methodPointerType)&m9131, &t1753_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 34, 0, false, false, 2953, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9132_MI = 
{
	"get_ReflectedType", (methodPointerType)&m9132, &t1753_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2954, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t127_0_0_0;
extern void* RuntimeInvoker_t127 (MethodInfo* method, void* obj, void** args);
MethodInfo m9133_MI = 
{
	"get_TypeHandle", (methodPointerType)&m9133, &t1753_TI, &t127_0_0_0, RuntimeInvoker_t127, NULL, &EmptyCustomAttributesCache, 2246, 0, 35, 0, false, false, 2955, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9134_MI = 
{
	"get_UnderlyingSystemType", (methodPointerType)&m9134, &t1753_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 36, 0, false, false, 2956, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1562_0_0_0;
extern void* RuntimeInvoker_t1562 (MethodInfo* method, void* obj, void** args);
MethodInfo m9135_MI = 
{
	"GetAttributeFlagsImpl", (methodPointerType)&m9135, &t1753_TI, &t1562_0_0_0, RuntimeInvoker_t1562, NULL, &EmptyCustomAttributesCache, 196, 0, 63, 0, false, false, 2957, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t918_0_0_0;
extern Il2CppType t926_0_0_0;
extern Il2CppType t1564_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t928_0_0_0;
extern Il2CppType t928_0_0_0;
static ParameterInfo t1753_m9136_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221435, &EmptyCustomAttributesCache, &t918_0_0_0},
	{"binder", 1, 134221436, &EmptyCustomAttributesCache, &t926_0_0_0},
	{"callConvention", 2, 134221437, &EmptyCustomAttributesCache, &t1564_0_0_0},
	{"types", 3, 134221438, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 4, 134221439, &EmptyCustomAttributesCache, &t928_0_0_0},
};
extern Il2CppType t819_0_0_0;
extern void* RuntimeInvoker_t9_t125_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9136_MI = 
{
	"GetConstructorImpl", (methodPointerType)&m9136, &t1753_TI, &t819_0_0_0, RuntimeInvoker_t9_t125_t9_t125_t9_t9, t1753_m9136_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 62, 5, false, false, 2958, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t918_0_0_0;
static ParameterInfo t1753_m9137_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221440, &EmptyCustomAttributesCache, &t918_0_0_0},
};
extern Il2CppType t919_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1753__CustomAttributeCache_m9137;
MethodInfo m9137_MI = 
{
	"GetConstructors", (methodPointerType)&m9137, &t1753_TI, &t919_0_0_0, RuntimeInvoker_t9_t125, t1753_m9137_ParameterInfos, &t1753__CustomAttributeCache_m9137, 198, 0, 76, 1, false, false, 2959, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1753_m9138_ParameterInfos[] = 
{
	{"inherit", 0, 134221441, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9138_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9138, &t1753_TI, &t158_0_0_0, RuntimeInvoker_t9_t186, t1753_m9138_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 2960, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1753_m9139_ParameterInfos[] = 
{
	{"attributeType", 0, 134221442, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221443, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9139_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9139, &t1753_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t186, t1753_m9139_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 2961, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9140_MI = 
{
	"GetElementType", (methodPointerType)&m9140, &t1753_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 44, 0, false, false, 2962, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t918_0_0_0;
static ParameterInfo t1753_m9141_ParameterInfos[] = 
{
	{"name", 0, 134221444, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221445, &EmptyCustomAttributesCache, &t918_0_0_0},
};
extern Il2CppType t1560_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9141_MI = 
{
	"GetEvent", (methodPointerType)&m9141, &t1753_TI, &t1560_0_0_0, RuntimeInvoker_t9_t9_t125, t1753_m9141_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 45, 2, false, false, 2963, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t918_0_0_0;
static ParameterInfo t1753_m9142_ParameterInfos[] = 
{
	{"name", 0, 134221446, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221447, &EmptyCustomAttributesCache, &t918_0_0_0},
};
extern Il2CppType t823_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9142_MI = 
{
	"GetField", (methodPointerType)&m9142, &t1753_TI, &t823_0_0_0, RuntimeInvoker_t9_t9_t125, t1753_m9142_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 46, 2, false, false, 2964, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t918_0_0_0;
static ParameterInfo t1753_m9143_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221448, &EmptyCustomAttributesCache, &t918_0_0_0},
};
extern Il2CppType t923_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9143_MI = 
{
	"GetFields", (methodPointerType)&m9143, &t1753_TI, &t923_0_0_0, RuntimeInvoker_t9_t125, t1753_m9143_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 47, 1, false, false, 2965, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9144_MI = 
{
	"GetInterfaces", (methodPointerType)&m9144, &t1753_TI, &t152_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 40, 0, false, false, 2966, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t918_0_0_0;
extern Il2CppType t926_0_0_0;
extern Il2CppType t1564_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t928_0_0_0;
static ParameterInfo t1753_m9145_ParameterInfos[] = 
{
	{"name", 0, 134221449, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221450, &EmptyCustomAttributesCache, &t918_0_0_0},
	{"binder", 2, 134221451, &EmptyCustomAttributesCache, &t926_0_0_0},
	{"callConvention", 3, 134221452, &EmptyCustomAttributesCache, &t1564_0_0_0},
	{"types", 4, 134221453, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 5, 134221454, &EmptyCustomAttributesCache, &t928_0_0_0},
};
extern Il2CppType t821_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9145_MI = 
{
	"GetMethodImpl", (methodPointerType)&m9145, &t1753_TI, &t821_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t125_t9_t9, t1753_m9145_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 53, 6, false, false, 2967, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t918_0_0_0;
static ParameterInfo t1753_m9146_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221455, &EmptyCustomAttributesCache, &t918_0_0_0},
};
extern Il2CppType t1561_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9146_MI = 
{
	"GetMethods", (methodPointerType)&m9146, &t1753_TI, &t1561_0_0_0, RuntimeInvoker_t9_t125, t1753_m9146_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 54, 1, false, false, 2968, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t918_0_0_0;
static ParameterInfo t1753_m9147_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221456, &EmptyCustomAttributesCache, &t918_0_0_0},
};
extern Il2CppType t922_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9147_MI = 
{
	"GetProperties", (methodPointerType)&m9147, &t1753_TI, &t922_0_0_0, RuntimeInvoker_t9_t125, t1753_m9147_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 55, 1, false, false, 2969, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t918_0_0_0;
extern Il2CppType t926_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t928_0_0_0;
static ParameterInfo t1753_m9148_ParameterInfos[] = 
{
	{"name", 0, 134221457, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221458, &EmptyCustomAttributesCache, &t918_0_0_0},
	{"binder", 2, 134221459, &EmptyCustomAttributesCache, &t926_0_0_0},
	{"returnType", 3, 134221460, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"types", 4, 134221461, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 5, 134221462, &EmptyCustomAttributesCache, &t928_0_0_0},
};
extern Il2CppType t830_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9148_MI = 
{
	"GetPropertyImpl", (methodPointerType)&m9148, &t1753_TI, &t830_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9, t1753_m9148_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 61, 6, false, false, 2970, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9149_MI = 
{
	"HasElementTypeImpl", (methodPointerType)&m9149, &t1753_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 64, 0, false, false, 2971, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t918_0_0_0;
extern Il2CppType t926_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t928_0_0_0;
extern Il2CppType t894_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1753_m9150_ParameterInfos[] = 
{
	{"name", 0, 134221463, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"invokeAttr", 1, 134221464, &EmptyCustomAttributesCache, &t918_0_0_0},
	{"binder", 2, 134221465, &EmptyCustomAttributesCache, &t926_0_0_0},
	{"target", 3, 134221466, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"args", 4, 134221467, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"modifiers", 5, 134221468, &EmptyCustomAttributesCache, &t928_0_0_0},
	{"culture", 6, 134221469, &EmptyCustomAttributesCache, &t894_0_0_0},
	{"namedParameters", 7, 134221470, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9150_MI = 
{
	"InvokeMember", (methodPointerType)&m9150, &t1753_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9_t9_t9, t1753_m9150_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 77, 8, false, false, 2972, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9151_MI = 
{
	"IsArrayImpl", (methodPointerType)&m9151, &t1753_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 65, 0, false, false, 2973, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9152_MI = 
{
	"IsByRefImpl", (methodPointerType)&m9152, &t1753_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 66, 0, false, false, 2974, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9153_MI = 
{
	"IsPointerImpl", (methodPointerType)&m9153, &t1753_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 67, 0, false, false, 2975, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9154_MI = 
{
	"IsPrimitiveImpl", (methodPointerType)&m9154, &t1753_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 68, 0, false, false, 2976, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9155_MI = 
{
	"IsValueTypeImpl", (methodPointerType)&m9155, &t1753_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 69, 0, false, false, 2977, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1753_m9156_ParameterInfos[] = 
{
	{"attributeType", 0, 134221471, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221472, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9156_MI = 
{
	"IsDefined", (methodPointerType)&m9156, &t1753_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1753_m9156_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 2978, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9157_MI = 
{
	"CreateNotSupportedException", (methodPointerType)&m9157, &t1753_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2979, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1753_MIs[] =
{
	&m9124_MI,
	&m9125_MI,
	&m9126_MI,
	&m9127_MI,
	&m9128_MI,
	&m9129_MI,
	&m9130_MI,
	&m9131_MI,
	&m9132_MI,
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
	&m9152_MI,
	&m9153_MI,
	&m9154_MI,
	&m9155_MI,
	&m9156_MI,
	&m9157_MI,
	NULL
};
extern Il2CppType t1745_0_0_1;
FieldInfo t1753_f8_FieldInfo = 
{
	"_tb", &t1745_0_0_1, &t1753_TI, offsetof(t1753, f8), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1753_f9_FieldInfo = 
{
	"_underlyingType", &t126_0_0_1, &t1753_TI, offsetof(t1753, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1753_FIs[] =
{
	&t1753_f8_FieldInfo,
	&t1753_f9_FieldInfo,
	NULL
};
extern MethodInfo m9124_MI;
static PropertyInfo t1753____Assembly_PropertyInfo = 
{
	&t1753_TI, "Assembly", &m9124_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9125_MI;
static PropertyInfo t1753____AssemblyQualifiedName_PropertyInfo = 
{
	&t1753_TI, "AssemblyQualifiedName", &m9125_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9126_MI;
static PropertyInfo t1753____BaseType_PropertyInfo = 
{
	&t1753_TI, "BaseType", &m9126_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9127_MI;
static PropertyInfo t1753____DeclaringType_PropertyInfo = 
{
	&t1753_TI, "DeclaringType", &m9127_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9128_MI;
static PropertyInfo t1753____FullName_PropertyInfo = 
{
	&t1753_TI, "FullName", &m9128_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9129_MI;
static PropertyInfo t1753____Module_PropertyInfo = 
{
	&t1753_TI, "Module", &m9129_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9130_MI;
static PropertyInfo t1753____Name_PropertyInfo = 
{
	&t1753_TI, "Name", &m9130_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9131_MI;
static PropertyInfo t1753____Namespace_PropertyInfo = 
{
	&t1753_TI, "Namespace", &m9131_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9132_MI;
static PropertyInfo t1753____ReflectedType_PropertyInfo = 
{
	&t1753_TI, "ReflectedType", &m9132_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9133_MI;
static PropertyInfo t1753____TypeHandle_PropertyInfo = 
{
	&t1753_TI, "TypeHandle", &m9133_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9134_MI;
static PropertyInfo t1753____UnderlyingSystemType_PropertyInfo = 
{
	&t1753_TI, "UnderlyingSystemType", &m9134_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1753_PIs[] =
{
	&t1753____Assembly_PropertyInfo,
	&t1753____AssemblyQualifiedName_PropertyInfo,
	&t1753____BaseType_PropertyInfo,
	&t1753____DeclaringType_PropertyInfo,
	&t1753____FullName_PropertyInfo,
	&t1753____Module_PropertyInfo,
	&t1753____Name_PropertyInfo,
	&t1753____Namespace_PropertyInfo,
	&t1753____ReflectedType_PropertyInfo,
	&t1753____TypeHandle_PropertyInfo,
	&t1753____UnderlyingSystemType_PropertyInfo,
	NULL
};
extern MethodInfo m7737_MI;
extern MethodInfo m7752_MI;
extern MethodInfo m7770_MI;
extern MethodInfo m9139_MI;
extern MethodInfo m9156_MI;
extern MethodInfo m7734_MI;
extern MethodInfo m9138_MI;
extern MethodInfo m7719_MI;
extern MethodInfo m7721_MI;
extern MethodInfo m7722_MI;
extern MethodInfo m4360_MI;
extern MethodInfo m7723_MI;
extern MethodInfo m7724_MI;
extern MethodInfo m7725_MI;
extern MethodInfo m7726_MI;
extern MethodInfo m7727_MI;
extern MethodInfo m7728_MI;
extern MethodInfo m7729_MI;
extern MethodInfo m7730_MI;
extern MethodInfo m4468_MI;
extern MethodInfo m7731_MI;
extern MethodInfo m7732_MI;
extern MethodInfo m7733_MI;
extern MethodInfo m7738_MI;
extern MethodInfo m7748_MI;
extern MethodInfo m7749_MI;
extern MethodInfo m9144_MI;
extern MethodInfo m4449_MI;
extern MethodInfo m7750_MI;
extern MethodInfo m7751_MI;
extern MethodInfo m9140_MI;
extern MethodInfo m9141_MI;
extern MethodInfo m9142_MI;
extern MethodInfo m9143_MI;
extern MethodInfo m7753_MI;
extern MethodInfo m7754_MI;
extern MethodInfo m7755_MI;
extern MethodInfo m4467_MI;
extern MethodInfo m7756_MI;
extern MethodInfo m9145_MI;
extern MethodInfo m9146_MI;
extern MethodInfo m9147_MI;
extern MethodInfo m7758_MI;
extern MethodInfo m7759_MI;
extern MethodInfo m7760_MI;
extern MethodInfo m7761_MI;
extern MethodInfo m7762_MI;
extern MethodInfo m9148_MI;
extern MethodInfo m9136_MI;
extern MethodInfo m9135_MI;
extern MethodInfo m9149_MI;
extern MethodInfo m9151_MI;
extern MethodInfo m9152_MI;
extern MethodInfo m9153_MI;
extern MethodInfo m9154_MI;
extern MethodInfo m9155_MI;
extern MethodInfo m7766_MI;
extern MethodInfo m7767_MI;
extern MethodInfo m4448_MI;
extern MethodInfo m7768_MI;
extern MethodInfo m7769_MI;
extern MethodInfo m4396_MI;
extern MethodInfo m9137_MI;
extern MethodInfo m9150_MI;
extern MethodInfo m7772_MI;
extern MethodInfo m7773_MI;
extern MethodInfo m7774_MI;
extern MethodInfo m7776_MI;
extern MethodInfo m7777_MI;
extern MethodInfo m4447_MI;
extern MethodInfo m7779_MI;
static Il2CppMethodReference t1753_VT[] =
{
	&m7737_MI,
	&m646_MI,
	&m7752_MI,
	&m7770_MI,
	&m9139_MI,
	&m9156_MI,
	&m9127_MI,
	&m7734_MI,
	&m9130_MI,
	&m9132_MI,
	&m9129_MI,
	&m9156_MI,
	&m9138_MI,
	&m9139_MI,
	&m9124_MI,
	&m9125_MI,
	&m7719_MI,
	&m9126_MI,
	&m9128_MI,
	&m7721_MI,
	&m7722_MI,
	&m4360_MI,
	&m7723_MI,
	&m7724_MI,
	&m7725_MI,
	&m7726_MI,
	&m7727_MI,
	&m7728_MI,
	&m7729_MI,
	&m7730_MI,
	&m4468_MI,
	&m7731_MI,
	&m7732_MI,
	&m7733_MI,
	&m9131_MI,
	&m9133_MI,
	&m9134_MI,
	&m7738_MI,
	&m7748_MI,
	&m7749_MI,
	&m9144_MI,
	&m4449_MI,
	&m7750_MI,
	&m7751_MI,
	&m9140_MI,
	&m9141_MI,
	&m9142_MI,
	&m9143_MI,
	&m7753_MI,
	&m7754_MI,
	&m7755_MI,
	&m4467_MI,
	&m7756_MI,
	&m9145_MI,
	&m9146_MI,
	&m9147_MI,
	&m7758_MI,
	&m7759_MI,
	&m7760_MI,
	&m7761_MI,
	&m7762_MI,
	&m9148_MI,
	&m9136_MI,
	&m9135_MI,
	&m9149_MI,
	&m9151_MI,
	&m9152_MI,
	&m9153_MI,
	&m9154_MI,
	&m9155_MI,
	&m7766_MI,
	&m7767_MI,
	&m4448_MI,
	&m7768_MI,
	&m7769_MI,
	&m4396_MI,
	&m9137_MI,
	&m9150_MI,
	&m7772_MI,
	&m7773_MI,
	&m7774_MI,
	&m7776_MI,
	&m7777_MI,
	&m4447_MI,
	&m7779_MI,
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
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
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
extern Il2CppType t2586_0_0_0;
static const Il2CppType* t1753_ITIs[] = 
{
	&t2586_0_0_0,
};
extern Il2CppType t2410_0_0_0;
extern Il2CppType t2411_0_0_0;
static Il2CppInterfaceOffsetPair t1753_IOs[] = 
{
	{ &t2410_0_0_0, 14},
	{ &t2411_0_0_0, 14},
	{ &t2121_0_0_0, 4},
	{ &t2412_0_0_0, 6},
	{ &t2586_0_0_0, 85},
};
extern TypeInfo t2586_TI;
void t1753_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1831 * tmp;
		tmp = (t1831 *)il2cpp_codegen_object_new (&t1831_TI);
		m9744(tmp, il2cpp_codegen_type_get_object(&t2586_0_0_0), &m9744_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1829 * tmp;
		tmp = (t1829 *)il2cpp_codegen_object_new (&t1829_TI);
		m9743(tmp, 0, &m9743_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t1753_CustomAttributesCacheGenerator_m9137(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1753__CustomAttributeCache = {
3,
NULL,
&t1753_CustomAttributesCacheGenerator
};
CustomAttributesCache t1753__CustomAttributeCache_m9137 = {
1,
NULL,
&t1753_CustomAttributesCacheGenerator_m9137
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1753_0_0_0;
extern Il2CppType t1753_1_0_0;
struct t1753;
extern CustomAttributesCache t1753__CustomAttributeCache;
extern CustomAttributesCache t1753__CustomAttributeCache_m9137;
const Il2CppTypeDefinitionMetadata t1753_DM = 
{
	NULL, NULL, t1753_ITIs, t1753_IOs, &t126_0_0_0, t1753_VT, t1753_VTIGM, NULL};
TypeInfo t1753_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EnumBuilder", "System.Reflection.Emit", t1753_MIs, t1753_PIs, t1753_FIs, NULL, &t1753_TI, NULL, &t1753__CustomAttributeCache, &t1753_0_0_0, &t1753_1_0_0, &t1753_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1753), sizeof (t1753), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 34, 11, 2, 0, 0, 85, 1, 5};
#include "t1754.h"
// Metadata Definition System.Reflection.Emit.FieldBuilder
extern TypeInfo t1754_TI;
#include "t1754MD.h"
extern Il2CppType t1756_0_0_0;
extern void* RuntimeInvoker_t1756 (MethodInfo* method, void* obj, void** args);
MethodInfo m9158_MI = 
{
	"get_Attributes", (methodPointerType)&m9158, &t1754_TI, &t1756_0_0_0, RuntimeInvoker_t1756, NULL, &EmptyCustomAttributesCache, 2246, 0, 14, 0, false, false, 2980, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9159_MI = 
{
	"get_DeclaringType", (methodPointerType)&m9159, &t1754_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2981, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t306_0_0_0;
extern void* RuntimeInvoker_t306 (MethodInfo* method, void* obj, void** args);
MethodInfo m9160_MI = 
{
	"get_FieldHandle", (methodPointerType)&m9160, &t1754_TI, &t306_0_0_0, RuntimeInvoker_t306, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 2982, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9161_MI = 
{
	"get_FieldType", (methodPointerType)&m9161, &t1754_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 16, 0, false, false, 2983, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9162_MI = 
{
	"get_Name", (methodPointerType)&m9162, &t1754_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2984, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9163_MI = 
{
	"get_ReflectedType", (methodPointerType)&m9163, &t1754_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2985, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1754_m9164_ParameterInfos[] = 
{
	{"inherit", 0, 134221473, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9164_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9164, &t1754_TI, &t158_0_0_0, RuntimeInvoker_t9_t186, t1754_m9164_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 2986, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1754_m9165_ParameterInfos[] = 
{
	{"attributeType", 0, 134221474, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221475, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9165_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9165, &t1754_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t186, t1754_m9165_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 2987, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1754_m9166_ParameterInfos[] = 
{
	{"obj", 0, 134221476, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9166_MI = 
{
	"GetValue", (methodPointerType)&m9166, &t1754_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1754_m9166_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 2988, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1754_m9167_ParameterInfos[] = 
{
	{"attributeType", 0, 134221477, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221478, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9167_MI = 
{
	"IsDefined", (methodPointerType)&m9167, &t1754_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1754_m9167_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 2989, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9168_MI = 
{
	"GetFieldOffset", (methodPointerType)&m9168, &t1754_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 195, 0, 25, 0, false, false, 2990, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t918_0_0_0;
extern Il2CppType t926_0_0_0;
extern Il2CppType t894_0_0_0;
static ParameterInfo t1754_m9169_ParameterInfos[] = 
{
	{"obj", 0, 134221479, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"val", 1, 134221480, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"invokeAttr", 2, 134221481, &EmptyCustomAttributesCache, &t918_0_0_0},
	{"binder", 3, 134221482, &EmptyCustomAttributesCache, &t926_0_0_0},
	{"culture", 4, 134221483, &EmptyCustomAttributesCache, &t894_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9169_MI = 
{
	"SetValue", (methodPointerType)&m9169, &t1754_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125_t9_t9, t1754_m9169_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 5, false, false, 2991, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1755_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9170_MI = 
{
	"get_UMarshal", (methodPointerType)&m9170, &t1754_TI, &t1755_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2243, 0, 26, 0, false, false, 2992, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9171_MI = 
{
	"CreateNotSupportedException", (methodPointerType)&m9171, &t1754_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2993, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1559_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9172_MI = 
{
	"get_Module", (methodPointerType)&m9172, &t1754_TI, &t1559_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 2994, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1754_MIs[] =
{
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
	NULL
};
extern Il2CppType t1756_0_0_1;
FieldInfo t1754_f0_FieldInfo = 
{
	"attrs", &t1756_0_0_1, &t1754_TI, offsetof(t1754, f0), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1754_f1_FieldInfo = 
{
	"type", &t126_0_0_1, &t1754_TI, offsetof(t1754, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1754_f2_FieldInfo = 
{
	"name", &t2_0_0_1, &t1754_TI, offsetof(t1754, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1745_0_0_3;
FieldInfo t1754_f3_FieldInfo = 
{
	"typeb", &t1745_0_0_3, &t1754_TI, offsetof(t1754, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1755_0_0_1;
FieldInfo t1754_f4_FieldInfo = 
{
	"marshal_info", &t1755_0_0_1, &t1754_TI, offsetof(t1754, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1754_FIs[] =
{
	&t1754_f0_FieldInfo,
	&t1754_f1_FieldInfo,
	&t1754_f2_FieldInfo,
	&t1754_f3_FieldInfo,
	&t1754_f4_FieldInfo,
	NULL
};
extern MethodInfo m9158_MI;
static PropertyInfo t1754____Attributes_PropertyInfo = 
{
	&t1754_TI, "Attributes", &m9158_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9159_MI;
static PropertyInfo t1754____DeclaringType_PropertyInfo = 
{
	&t1754_TI, "DeclaringType", &m9159_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9160_MI;
static PropertyInfo t1754____FieldHandle_PropertyInfo = 
{
	&t1754_TI, "FieldHandle", &m9160_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9161_MI;
static PropertyInfo t1754____FieldType_PropertyInfo = 
{
	&t1754_TI, "FieldType", &m9161_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9162_MI;
static PropertyInfo t1754____Name_PropertyInfo = 
{
	&t1754_TI, "Name", &m9162_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9163_MI;
static PropertyInfo t1754____ReflectedType_PropertyInfo = 
{
	&t1754_TI, "ReflectedType", &m9163_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9170_MI;
static PropertyInfo t1754____UMarshal_PropertyInfo = 
{
	&t1754_TI, "UMarshal", &m9170_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9172_MI;
static PropertyInfo t1754____Module_PropertyInfo = 
{
	&t1754_TI, "Module", &m9172_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1754_PIs[] =
{
	&t1754____Attributes_PropertyInfo,
	&t1754____DeclaringType_PropertyInfo,
	&t1754____FieldHandle_PropertyInfo,
	&t1754____FieldType_PropertyInfo,
	&t1754____Name_PropertyInfo,
	&t1754____ReflectedType_PropertyInfo,
	&t1754____UMarshal_PropertyInfo,
	&t1754____Module_PropertyInfo,
	NULL
};
extern MethodInfo m9165_MI;
extern MethodInfo m9167_MI;
extern MethodInfo m9494_MI;
extern MethodInfo m9164_MI;
extern MethodInfo m9166_MI;
extern MethodInfo m9495_MI;
extern MethodInfo m4371_MI;
extern MethodInfo m4378_MI;
extern MethodInfo m4372_MI;
extern MethodInfo m9496_MI;
extern MethodInfo m9169_MI;
extern MethodInfo m4395_MI;
extern MethodInfo m9168_MI;
static Il2CppMethodReference t1754_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9165_MI,
	&m9167_MI,
	&m9159_MI,
	&m9494_MI,
	&m9162_MI,
	&m9163_MI,
	&m9172_MI,
	&m9167_MI,
	&m9164_MI,
	&m9165_MI,
	&m9158_MI,
	&m9160_MI,
	&m9161_MI,
	&m9166_MI,
	&m9495_MI,
	&m4371_MI,
	&m4378_MI,
	&m4372_MI,
	&m9496_MI,
	&m9169_MI,
	&m4395_MI,
	&m9168_MI,
	&m9170_MI,
};
static bool t1754_VTIGM[] =
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
extern Il2CppType t2587_0_0_0;
static const Il2CppType* t1754_ITIs[] = 
{
	&t2587_0_0_0,
};
extern Il2CppType t2588_0_0_0;
static Il2CppInterfaceOffsetPair t1754_IOs[] = 
{
	{ &t2588_0_0_0, 14},
	{ &t2121_0_0_0, 4},
	{ &t2412_0_0_0, 6},
	{ &t2587_0_0_0, 27},
};
extern TypeInfo t2587_TI;
void t1754_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1829 * tmp;
		tmp = (t1829 *)il2cpp_codegen_object_new (&t1829_TI);
		m9743(tmp, 0, &m9743_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1831 * tmp;
		tmp = (t1831 *)il2cpp_codegen_object_new (&t1831_TI);
		m9744(tmp, il2cpp_codegen_type_get_object(&t2587_0_0_0), &m9744_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1754__CustomAttributeCache = {
3,
NULL,
&t1754_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1754_0_0_0;
extern Il2CppType t1754_1_0_0;
extern Il2CppType t823_0_0_0;
struct t1754;
extern CustomAttributesCache t1754__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1754_DM = 
{
	NULL, NULL, t1754_ITIs, t1754_IOs, &t823_0_0_0, t1754_VT, t1754_VTIGM, NULL};
TypeInfo t1754_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FieldBuilder", "System.Reflection.Emit", t1754_MIs, t1754_PIs, t1754_FIs, NULL, &t1754_TI, NULL, &t1754__CustomAttributeCache, &t1754_0_0_0, &t1754_1_0_0, &t1754_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1754), sizeof (t1754), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 15, 8, 5, 0, 0, 27, 1, 4};
#include "t1757.h"
// Metadata Definition System.Reflection.Emit.GenericTypeParameterBuilder
extern TypeInfo t1757_TI;
#include "t1757MD.h"
extern Il2CppType t126_0_0_0;
static ParameterInfo t1757_m9173_ParameterInfos[] = 
{
	{"c", 0, 134221484, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1757__CustomAttributeCache_m9173;
MethodInfo m9173_MI = 
{
	"IsSubclassOf", (methodPointerType)&m9173, &t1757_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1757_m9173_ParameterInfos, &t1757__CustomAttributeCache_m9173, 198, 0, 39, 1, false, false, 2995, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1562_0_0_0;
extern void* RuntimeInvoker_t1562 (MethodInfo* method, void* obj, void** args);
MethodInfo m9174_MI = 
{
	"GetAttributeFlagsImpl", (methodPointerType)&m9174, &t1757_TI, &t1562_0_0_0, RuntimeInvoker_t1562, NULL, &EmptyCustomAttributesCache, 196, 0, 63, 0, false, false, 2996, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t918_0_0_0;
extern Il2CppType t926_0_0_0;
extern Il2CppType t1564_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t928_0_0_0;
static ParameterInfo t1757_m9175_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221485, &EmptyCustomAttributesCache, &t918_0_0_0},
	{"binder", 1, 134221486, &EmptyCustomAttributesCache, &t926_0_0_0},
	{"callConvention", 2, 134221487, &EmptyCustomAttributesCache, &t1564_0_0_0},
	{"types", 3, 134221488, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 4, 134221489, &EmptyCustomAttributesCache, &t928_0_0_0},
};
extern Il2CppType t819_0_0_0;
extern void* RuntimeInvoker_t9_t125_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9175_MI = 
{
	"GetConstructorImpl", (methodPointerType)&m9175, &t1757_TI, &t819_0_0_0, RuntimeInvoker_t9_t125_t9_t125_t9_t9, t1757_m9175_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 62, 5, false, false, 2997, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t918_0_0_0;
static ParameterInfo t1757_m9176_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221490, &EmptyCustomAttributesCache, &t918_0_0_0},
};
extern Il2CppType t919_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1757__CustomAttributeCache_m9176;
MethodInfo m9176_MI = 
{
	"GetConstructors", (methodPointerType)&m9176, &t1757_TI, &t919_0_0_0, RuntimeInvoker_t9_t125, t1757_m9176_ParameterInfos, &t1757__CustomAttributeCache_m9176, 198, 0, 76, 1, false, false, 2998, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t918_0_0_0;
static ParameterInfo t1757_m9177_ParameterInfos[] = 
{
	{"name", 0, 134221491, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221492, &EmptyCustomAttributesCache, &t918_0_0_0},
};
extern Il2CppType t1560_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9177_MI = 
{
	"GetEvent", (methodPointerType)&m9177, &t1757_TI, &t1560_0_0_0, RuntimeInvoker_t9_t9_t125, t1757_m9177_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 45, 2, false, false, 2999, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t918_0_0_0;
static ParameterInfo t1757_m9178_ParameterInfos[] = 
{
	{"name", 0, 134221493, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221494, &EmptyCustomAttributesCache, &t918_0_0_0},
};
extern Il2CppType t823_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9178_MI = 
{
	"GetField", (methodPointerType)&m9178, &t1757_TI, &t823_0_0_0, RuntimeInvoker_t9_t9_t125, t1757_m9178_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 46, 2, false, false, 3000, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t918_0_0_0;
static ParameterInfo t1757_m9179_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221495, &EmptyCustomAttributesCache, &t918_0_0_0},
};
extern Il2CppType t923_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9179_MI = 
{
	"GetFields", (methodPointerType)&m9179, &t1757_TI, &t923_0_0_0, RuntimeInvoker_t9_t125, t1757_m9179_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 47, 1, false, false, 3001, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9180_MI = 
{
	"GetInterfaces", (methodPointerType)&m9180, &t1757_TI, &t152_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 40, 0, false, false, 3002, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t918_0_0_0;
static ParameterInfo t1757_m9181_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221496, &EmptyCustomAttributesCache, &t918_0_0_0},
};
extern Il2CppType t1561_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9181_MI = 
{
	"GetMethods", (methodPointerType)&m9181, &t1757_TI, &t1561_0_0_0, RuntimeInvoker_t9_t125, t1757_m9181_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 54, 1, false, false, 3003, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t918_0_0_0;
extern Il2CppType t926_0_0_0;
extern Il2CppType t1564_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t928_0_0_0;
static ParameterInfo t1757_m9182_ParameterInfos[] = 
{
	{"name", 0, 134221497, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221498, &EmptyCustomAttributesCache, &t918_0_0_0},
	{"binder", 2, 134221499, &EmptyCustomAttributesCache, &t926_0_0_0},
	{"callConvention", 3, 134221500, &EmptyCustomAttributesCache, &t1564_0_0_0},
	{"types", 4, 134221501, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 5, 134221502, &EmptyCustomAttributesCache, &t928_0_0_0},
};
extern Il2CppType t821_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9182_MI = 
{
	"GetMethodImpl", (methodPointerType)&m9182, &t1757_TI, &t821_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t125_t9_t9, t1757_m9182_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 53, 6, false, false, 3004, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t918_0_0_0;
static ParameterInfo t1757_m9183_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221503, &EmptyCustomAttributesCache, &t918_0_0_0},
};
extern Il2CppType t922_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9183_MI = 
{
	"GetProperties", (methodPointerType)&m9183, &t1757_TI, &t922_0_0_0, RuntimeInvoker_t9_t125, t1757_m9183_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 55, 1, false, false, 3005, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t918_0_0_0;
extern Il2CppType t926_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t928_0_0_0;
static ParameterInfo t1757_m9184_ParameterInfos[] = 
{
	{"name", 0, 134221504, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221505, &EmptyCustomAttributesCache, &t918_0_0_0},
	{"binder", 2, 134221506, &EmptyCustomAttributesCache, &t926_0_0_0},
	{"returnType", 3, 134221507, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"types", 4, 134221508, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 5, 134221509, &EmptyCustomAttributesCache, &t928_0_0_0},
};
extern Il2CppType t830_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9184_MI = 
{
	"GetPropertyImpl", (methodPointerType)&m9184, &t1757_TI, &t830_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9, t1757_m9184_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 61, 6, false, false, 3006, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9185_MI = 
{
	"HasElementTypeImpl", (methodPointerType)&m9185, &t1757_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 64, 0, false, false, 3007, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1757_m9186_ParameterInfos[] = 
{
	{"c", 0, 134221510, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9186_MI = 
{
	"IsAssignableFrom", (methodPointerType)&m9186, &t1757_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1757_m9186_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 41, 1, false, false, 3008, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1757_m9187_ParameterInfos[] = 
{
	{"o", 0, 134221511, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9187_MI = 
{
	"IsInstanceOfType", (methodPointerType)&m9187, &t1757_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1757_m9187_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 42, 1, false, false, 3009, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9188_MI = 
{
	"IsArrayImpl", (methodPointerType)&m9188, &t1757_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 65, 0, false, false, 3010, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9189_MI = 
{
	"IsByRefImpl", (methodPointerType)&m9189, &t1757_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 66, 0, false, false, 3011, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9190_MI = 
{
	"IsPointerImpl", (methodPointerType)&m9190, &t1757_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 67, 0, false, false, 3012, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9191_MI = 
{
	"IsPrimitiveImpl", (methodPointerType)&m9191, &t1757_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 68, 0, false, false, 3013, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9192_MI = 
{
	"IsValueTypeImpl", (methodPointerType)&m9192, &t1757_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 69, 0, false, false, 3014, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t918_0_0_0;
extern Il2CppType t926_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t928_0_0_0;
extern Il2CppType t894_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1757_m9193_ParameterInfos[] = 
{
	{"name", 0, 134221512, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"invokeAttr", 1, 134221513, &EmptyCustomAttributesCache, &t918_0_0_0},
	{"binder", 2, 134221514, &EmptyCustomAttributesCache, &t926_0_0_0},
	{"target", 3, 134221515, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"args", 4, 134221516, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"modifiers", 5, 134221517, &EmptyCustomAttributesCache, &t928_0_0_0},
	{"culture", 6, 134221518, &EmptyCustomAttributesCache, &t894_0_0_0},
	{"namedParameters", 7, 134221519, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9193_MI = 
{
	"InvokeMember", (methodPointerType)&m9193, &t1757_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9_t9_t9, t1757_m9193_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 77, 8, false, false, 3015, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9194_MI = 
{
	"GetElementType", (methodPointerType)&m9194, &t1757_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 44, 0, false, false, 3016, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9195_MI = 
{
	"get_UnderlyingSystemType", (methodPointerType)&m9195, &t1757_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 36, 0, false, false, 3017, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1336_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9196_MI = 
{
	"get_Assembly", (methodPointerType)&m9196, &t1757_TI, &t1336_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 14, 0, false, false, 3018, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9197_MI = 
{
	"get_AssemblyQualifiedName", (methodPointerType)&m9197, &t1757_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 3019, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9198_MI = 
{
	"get_BaseType", (methodPointerType)&m9198, &t1757_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 17, 0, false, false, 3020, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9199_MI = 
{
	"get_FullName", (methodPointerType)&m9199, &t1757_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 3021, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1757_m9200_ParameterInfos[] = 
{
	{"attributeType", 0, 134221520, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221521, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9200_MI = 
{
	"IsDefined", (methodPointerType)&m9200, &t1757_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1757_m9200_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 3022, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1757_m9201_ParameterInfos[] = 
{
	{"inherit", 0, 134221522, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9201_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9201, &t1757_TI, &t158_0_0_0, RuntimeInvoker_t9_t186, t1757_m9201_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 3023, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1757_m9202_ParameterInfos[] = 
{
	{"attributeType", 0, 134221523, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221524, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9202_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9202, &t1757_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t186, t1757_m9202_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 3024, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9203_MI = 
{
	"get_Name", (methodPointerType)&m9203, &t1757_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 3025, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9204_MI = 
{
	"get_Namespace", (methodPointerType)&m9204, &t1757_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 34, 0, false, false, 3026, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1559_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9205_MI = 
{
	"get_Module", (methodPointerType)&m9205, &t1757_TI, &t1559_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 3027, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9206_MI = 
{
	"get_DeclaringType", (methodPointerType)&m9206, &t1757_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 3028, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9207_MI = 
{
	"get_ReflectedType", (methodPointerType)&m9207, &t1757_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 3029, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t127_0_0_0;
extern void* RuntimeInvoker_t127 (MethodInfo* method, void* obj, void** args);
MethodInfo m9208_MI = 
{
	"get_TypeHandle", (methodPointerType)&m9208, &t1757_TI, &t127_0_0_0, RuntimeInvoker_t127, NULL, &EmptyCustomAttributesCache, 2246, 0, 35, 0, false, false, 3030, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9209_MI = 
{
	"GetGenericArguments", (methodPointerType)&m9209, &t1757_TI, &t152_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 78, 0, false, false, 3031, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9210_MI = 
{
	"GetGenericTypeDefinition", (methodPointerType)&m9210, &t1757_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 81, 0, false, false, 3032, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9211_MI = 
{
	"get_ContainsGenericParameters", (methodPointerType)&m9211, &t1757_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 79, 0, false, false, 3033, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9212_MI = 
{
	"get_IsGenericParameter", (methodPointerType)&m9212, &t1757_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 84, 0, false, false, 3034, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9213_MI = 
{
	"get_IsGenericType", (methodPointerType)&m9213, &t1757_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 82, 0, false, false, 3035, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9214_MI = 
{
	"get_IsGenericTypeDefinition", (methodPointerType)&m9214, &t1757_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 80, 0, false, false, 3036, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9215_MI = 
{
	"not_supported", (methodPointerType)&m9215, &t1757_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3037, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9216_MI = 
{
	"ToString", (methodPointerType)&m9216, &t1757_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3038, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1757_m9217_ParameterInfos[] = 
{
	{"o", 0, 134221525, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1757__CustomAttributeCache_m9217;
MethodInfo m9217_MI = 
{
	"Equals", (methodPointerType)&m9217, &t1757_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1757_m9217_ParameterInfos, &t1757__CustomAttributeCache_m9217, 198, 0, 0, 1, false, false, 3039, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1757__CustomAttributeCache_m9218;
MethodInfo m9218_MI = 
{
	"GetHashCode", (methodPointerType)&m9218, &t1757_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t1757__CustomAttributeCache_m9218, 198, 0, 2, 0, false, false, 3040, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t152_0_0_0;
extern CustomAttributesCache t1757__CustomAttributeCache_t1757_m9219_Arg0_ParameterInfo;
static ParameterInfo t1757_m9219_ParameterInfos[] = 
{
	{"typeArguments", 0, 134221526, &t1757__CustomAttributeCache_t1757_m9219_Arg0_ParameterInfo, &t152_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1757__CustomAttributeCache_m9219;
MethodInfo m9219_MI = 
{
	"MakeGenericType", (methodPointerType)&m9219, &t1757_TI, &t126_0_0_0, RuntimeInvoker_t9_t9, t1757_m9219_ParameterInfos, &t1757__CustomAttributeCache_m9219, 198, 0, 83, 1, false, false, 3041, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1757_MIs[] =
{
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
	NULL
};
extern Il2CppType t1745_0_0_1;
FieldInfo t1757_f8_FieldInfo = 
{
	"tbuilder", &t1745_0_0_1, &t1757_TI, offsetof(t1757, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1758_0_0_1;
FieldInfo t1757_f9_FieldInfo = 
{
	"mbuilder", &t1758_0_0_1, &t1757_TI, offsetof(t1757, f9), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1757_f10_FieldInfo = 
{
	"name", &t2_0_0_1, &t1757_TI, offsetof(t1757, f10), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1757_f11_FieldInfo = 
{
	"base_type", &t126_0_0_1, &t1757_TI, offsetof(t1757, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1757_FIs[] =
{
	&t1757_f8_FieldInfo,
	&t1757_f9_FieldInfo,
	&t1757_f10_FieldInfo,
	&t1757_f11_FieldInfo,
	NULL
};
extern MethodInfo m9195_MI;
static PropertyInfo t1757____UnderlyingSystemType_PropertyInfo = 
{
	&t1757_TI, "UnderlyingSystemType", &m9195_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9196_MI;
static PropertyInfo t1757____Assembly_PropertyInfo = 
{
	&t1757_TI, "Assembly", &m9196_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9197_MI;
static PropertyInfo t1757____AssemblyQualifiedName_PropertyInfo = 
{
	&t1757_TI, "AssemblyQualifiedName", &m9197_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9198_MI;
static PropertyInfo t1757____BaseType_PropertyInfo = 
{
	&t1757_TI, "BaseType", &m9198_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9199_MI;
static PropertyInfo t1757____FullName_PropertyInfo = 
{
	&t1757_TI, "FullName", &m9199_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9203_MI;
static PropertyInfo t1757____Name_PropertyInfo = 
{
	&t1757_TI, "Name", &m9203_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9204_MI;
static PropertyInfo t1757____Namespace_PropertyInfo = 
{
	&t1757_TI, "Namespace", &m9204_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9205_MI;
static PropertyInfo t1757____Module_PropertyInfo = 
{
	&t1757_TI, "Module", &m9205_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9206_MI;
static PropertyInfo t1757____DeclaringType_PropertyInfo = 
{
	&t1757_TI, "DeclaringType", &m9206_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9207_MI;
static PropertyInfo t1757____ReflectedType_PropertyInfo = 
{
	&t1757_TI, "ReflectedType", &m9207_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9208_MI;
static PropertyInfo t1757____TypeHandle_PropertyInfo = 
{
	&t1757_TI, "TypeHandle", &m9208_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9211_MI;
static PropertyInfo t1757____ContainsGenericParameters_PropertyInfo = 
{
	&t1757_TI, "ContainsGenericParameters", &m9211_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9212_MI;
static PropertyInfo t1757____IsGenericParameter_PropertyInfo = 
{
	&t1757_TI, "IsGenericParameter", &m9212_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9213_MI;
static PropertyInfo t1757____IsGenericType_PropertyInfo = 
{
	&t1757_TI, "IsGenericType", &m9213_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9214_MI;
static PropertyInfo t1757____IsGenericTypeDefinition_PropertyInfo = 
{
	&t1757_TI, "IsGenericTypeDefinition", &m9214_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1757_PIs[] =
{
	&t1757____UnderlyingSystemType_PropertyInfo,
	&t1757____Assembly_PropertyInfo,
	&t1757____AssemblyQualifiedName_PropertyInfo,
	&t1757____BaseType_PropertyInfo,
	&t1757____FullName_PropertyInfo,
	&t1757____Name_PropertyInfo,
	&t1757____Namespace_PropertyInfo,
	&t1757____Module_PropertyInfo,
	&t1757____DeclaringType_PropertyInfo,
	&t1757____ReflectedType_PropertyInfo,
	&t1757____TypeHandle_PropertyInfo,
	&t1757____ContainsGenericParameters_PropertyInfo,
	&t1757____IsGenericParameter_PropertyInfo,
	&t1757____IsGenericType_PropertyInfo,
	&t1757____IsGenericTypeDefinition_PropertyInfo,
	NULL
};
extern MethodInfo m9217_MI;
extern MethodInfo m9218_MI;
extern MethodInfo m9216_MI;
extern MethodInfo m9202_MI;
extern MethodInfo m9200_MI;
extern MethodInfo m9201_MI;
extern MethodInfo m9173_MI;
extern MethodInfo m9180_MI;
extern MethodInfo m9186_MI;
extern MethodInfo m9187_MI;
extern MethodInfo m9194_MI;
extern MethodInfo m9177_MI;
extern MethodInfo m9178_MI;
extern MethodInfo m9179_MI;
extern MethodInfo m9182_MI;
extern MethodInfo m9181_MI;
extern MethodInfo m9183_MI;
extern MethodInfo m9184_MI;
extern MethodInfo m9175_MI;
extern MethodInfo m9174_MI;
extern MethodInfo m9185_MI;
extern MethodInfo m9188_MI;
extern MethodInfo m9189_MI;
extern MethodInfo m9190_MI;
extern MethodInfo m9191_MI;
extern MethodInfo m9192_MI;
extern MethodInfo m9176_MI;
extern MethodInfo m9193_MI;
extern MethodInfo m9209_MI;
extern MethodInfo m9210_MI;
extern MethodInfo m9219_MI;
static Il2CppMethodReference t1757_VT[] =
{
	&m9217_MI,
	&m646_MI,
	&m9218_MI,
	&m9216_MI,
	&m9202_MI,
	&m9200_MI,
	&m9206_MI,
	&m7734_MI,
	&m9203_MI,
	&m9207_MI,
	&m9205_MI,
	&m9200_MI,
	&m9201_MI,
	&m9202_MI,
	&m9196_MI,
	&m9197_MI,
	&m7719_MI,
	&m9198_MI,
	&m9199_MI,
	&m7721_MI,
	&m7722_MI,
	&m4360_MI,
	&m7723_MI,
	&m7724_MI,
	&m7725_MI,
	&m7726_MI,
	&m7727_MI,
	&m7728_MI,
	&m7729_MI,
	&m7730_MI,
	&m4468_MI,
	&m7731_MI,
	&m7732_MI,
	&m7733_MI,
	&m9204_MI,
	&m9208_MI,
	&m9195_MI,
	&m7738_MI,
	&m7748_MI,
	&m9173_MI,
	&m9180_MI,
	&m9186_MI,
	&m9187_MI,
	&m7751_MI,
	&m9194_MI,
	&m9177_MI,
	&m9178_MI,
	&m9179_MI,
	&m7753_MI,
	&m7754_MI,
	&m7755_MI,
	&m4467_MI,
	&m7756_MI,
	&m9182_MI,
	&m9181_MI,
	&m9183_MI,
	&m7758_MI,
	&m7759_MI,
	&m7760_MI,
	&m7761_MI,
	&m7762_MI,
	&m9184_MI,
	&m9175_MI,
	&m9174_MI,
	&m9185_MI,
	&m9188_MI,
	&m9189_MI,
	&m9190_MI,
	&m9191_MI,
	&m9192_MI,
	&m7766_MI,
	&m7767_MI,
	&m4448_MI,
	&m7768_MI,
	&m7769_MI,
	&m4396_MI,
	&m9176_MI,
	&m9193_MI,
	&m9209_MI,
	&m9211_MI,
	&m9214_MI,
	&m9210_MI,
	&m9213_MI,
	&m9219_MI,
	&m9212_MI,
};
static bool t1757_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1757_IOs[] = 
{
	{ &t2410_0_0_0, 14},
	{ &t2411_0_0_0, 14},
	{ &t2121_0_0_0, 4},
	{ &t2412_0_0_0, 6},
};
void t1757_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1757_CustomAttributesCacheGenerator_m9173(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1757_CustomAttributesCacheGenerator_m9176(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1757_CustomAttributesCacheGenerator_m9217(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7820(tmp, &m7820_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1757_CustomAttributesCacheGenerator_m9218(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7820(tmp, &m7820_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1757_CustomAttributesCacheGenerator_m9219(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7820(tmp, &m7820_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t330_TI;
#include "t330.h"
#include "t330MD.h"
extern MethodInfo m1205_MI;
void t1757_CustomAttributesCacheGenerator_t1757_m9219_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t330 * tmp;
		tmp = (t330 *)il2cpp_codegen_object_new (&t330_TI);
		m1205(tmp, &m1205_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1757__CustomAttributeCache = {
1,
NULL,
&t1757_CustomAttributesCacheGenerator
};
CustomAttributesCache t1757__CustomAttributeCache_m9173 = {
1,
NULL,
&t1757_CustomAttributesCacheGenerator_m9173
};
CustomAttributesCache t1757__CustomAttributeCache_m9176 = {
1,
NULL,
&t1757_CustomAttributesCacheGenerator_m9176
};
CustomAttributesCache t1757__CustomAttributeCache_m9217 = {
1,
NULL,
&t1757_CustomAttributesCacheGenerator_m9217
};
CustomAttributesCache t1757__CustomAttributeCache_m9218 = {
1,
NULL,
&t1757_CustomAttributesCacheGenerator_m9218
};
CustomAttributesCache t1757__CustomAttributeCache_m9219 = {
1,
NULL,
&t1757_CustomAttributesCacheGenerator_m9219
};
CustomAttributesCache t1757__CustomAttributeCache_t1757_m9219_Arg0_ParameterInfo = {
1,
NULL,
&t1757_CustomAttributesCacheGenerator_t1757_m9219_Arg0_ParameterInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1757_0_0_0;
extern Il2CppType t1757_1_0_0;
struct t1757;
extern CustomAttributesCache t1757__CustomAttributeCache;
extern CustomAttributesCache t1757__CustomAttributeCache_m9173;
extern CustomAttributesCache t1757__CustomAttributeCache_m9176;
extern CustomAttributesCache t1757__CustomAttributeCache_m9217;
extern CustomAttributesCache t1757__CustomAttributeCache_m9218;
extern CustomAttributesCache t1757__CustomAttributeCache_m9219;
const Il2CppTypeDefinitionMetadata t1757_DM = 
{
	NULL, NULL, NULL, t1757_IOs, &t126_0_0_0, t1757_VT, t1757_VTIGM, NULL};
TypeInfo t1757_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericTypeParameterBuilder", "System.Reflection.Emit", t1757_MIs, t1757_PIs, t1757_FIs, NULL, &t1757_TI, NULL, &t1757__CustomAttributeCache, &t1757_0_0_0, &t1757_1_0_0, &t1757_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1757), sizeof (t1757), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 47, 15, 4, 0, 0, 85, 0, 4};
#include "t1759.h"
// Metadata Definition System.Reflection.Emit.ILTokenInfo
extern TypeInfo t1759_TI;
#include "t1759MD.h"
static MethodInfo* t1759_MIs[] =
{
	NULL
};
extern Il2CppType t553_0_0_6;
FieldInfo t1759_f0_FieldInfo = 
{
	"member", &t553_0_0_6, &t1759_TI, offsetof(t1759, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1759_f1_FieldInfo = 
{
	"code_pos", &t125_0_0_6, &t1759_TI, offsetof(t1759, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1759_FIs[] =
{
	&t1759_f0_FieldInfo,
	&t1759_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1759_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1759_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1759_0_0_0;
extern Il2CppType t1759_1_0_0;
const Il2CppTypeDefinitionMetadata t1759_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1759_VT, t1759_VTIGM, NULL};
TypeInfo t1759_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ILTokenInfo", "System.Reflection.Emit", t1759_MIs, NULL, t1759_FIs, NULL, &t1759_TI, NULL, &EmptyCustomAttributesCache, &t1759_0_0_0, &t1759_1_0_0, &t1759_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1759)+ sizeof (Il2CppObject), sizeof (t1759)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048840, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 2, 0, 0, 4, 0, 0};
// Metadata Definition System.Reflection.Emit.TokenGenerator
extern TypeInfo t1766_TI;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1766_m11984_ParameterInfos[] = 
{
	{"str", 0, 134221527, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m11984_MI = 
{
	"GetToken", NULL, &t1766_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1766_m11984_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 3042, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t553_0_0_0;
extern Il2CppType t553_0_0_0;
static ParameterInfo t1766_m11983_ParameterInfos[] = 
{
	{"member", 0, 134221528, &EmptyCustomAttributesCache, &t553_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m11983_MI = 
{
	"GetToken", NULL, &t1766_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1766_m11983_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, false, 3043, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t821_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t1766_m11985_ParameterInfos[] = 
{
	{"method", 0, 134221529, &EmptyCustomAttributesCache, &t821_0_0_0},
	{"opt_param_types", 1, 134221530, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m11985_MI = 
{
	"GetToken", NULL, &t1766_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1766_m11985_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 2, false, false, 3044, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1766_MIs[] =
{
	&m11984_MI,
	&m11983_MI,
	&m11985_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1766_0_0_0;
extern Il2CppType t1766_1_0_0;
struct t1766;
const Il2CppTypeDefinitionMetadata t1766_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1766_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TokenGenerator", "System.Reflection.Emit", t1766_MIs, NULL, NULL, NULL, &t1766_TI, NULL, &EmptyCustomAttributesCache, &t1766_0_0_0, &t1766_1_0_0, &t1766_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 160, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 0, 0, 0};
#include "t1760.h"
// Metadata Definition System.Reflection.Emit.ILGenerator/LabelFixup
extern TypeInfo t1760_TI;
#include "t1760MD.h"
static MethodInfo* t1760_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_6;
FieldInfo t1760_f0_FieldInfo = 
{
	"offset", &t125_0_0_6, &t1760_TI, offsetof(t1760, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1760_f1_FieldInfo = 
{
	"pos", &t125_0_0_6, &t1760_TI, offsetof(t1760, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1760_f2_FieldInfo = 
{
	"label_idx", &t125_0_0_6, &t1760_TI, offsetof(t1760, f2) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1760_FIs[] =
{
	&t1760_f0_FieldInfo,
	&t1760_f1_FieldInfo,
	&t1760_f2_FieldInfo,
	NULL
};
static Il2CppMethodReference t1760_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1760_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1760_0_0_0;
extern Il2CppType t1760_1_0_0;
extern TypeInfo t1744_TI;
extern Il2CppType t1744_0_0_0;
const Il2CppTypeDefinitionMetadata t1760_DM = 
{
	&t1744_0_0_0, NULL, NULL, NULL, &t117_0_0_0, t1760_VT, t1760_VTIGM, NULL};
TypeInfo t1760_TI = 
{
	&g_mscorlib_dll_Image, NULL, "LabelFixup", "", t1760_MIs, NULL, t1760_FIs, NULL, &t1760_TI, NULL, &EmptyCustomAttributesCache, &t1760_0_0_0, &t1760_1_0_0, &t1760_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1760)+ sizeof (Il2CppObject), sizeof (t1760)+ sizeof (Il2CppObject), 0, sizeof(t1760 ), 0, 0, -1, 1048843, 0, 0, true, false, false, false, false, false, false, false, false, true, 0, 0, 3, 0, 0, 4, 0, 0};
#include "t1761.h"
// Metadata Definition System.Reflection.Emit.ILGenerator/LabelData
extern TypeInfo t1761_TI;
#include "t1761MD.h"
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1761_m9220_ParameterInfos[] = 
{
	{"addr", 0, 134221569, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"maxStack", 1, 134221570, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9220_MI = 
{
	".ctor", (methodPointerType)&m9220, &t1761_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t125, t1761_m9220_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3070, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1761_MIs[] =
{
	&m9220_MI,
	NULL
};
extern Il2CppType t125_0_0_6;
FieldInfo t1761_f0_FieldInfo = 
{
	"addr", &t125_0_0_6, &t1761_TI, offsetof(t1761, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1761_f1_FieldInfo = 
{
	"maxStack", &t125_0_0_6, &t1761_TI, offsetof(t1761, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1761_FIs[] =
{
	&t1761_f0_FieldInfo,
	&t1761_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1761_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1761_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1761_0_0_0;
extern Il2CppType t1761_1_0_0;
const Il2CppTypeDefinitionMetadata t1761_DM = 
{
	&t1744_0_0_0, NULL, NULL, NULL, &t117_0_0_0, t1761_VT, t1761_VTIGM, NULL};
TypeInfo t1761_TI = 
{
	&g_mscorlib_dll_Image, NULL, "LabelData", "", t1761_MIs, NULL, t1761_FIs, NULL, &t1761_TI, NULL, &EmptyCustomAttributesCache, &t1761_0_0_0, &t1761_1_0_0, &t1761_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1761)+ sizeof (Il2CppObject), sizeof (t1761)+ sizeof (Il2CppObject), 0, sizeof(t1761 ), 0, 0, -1, 1048843, 0, 0, true, false, false, false, false, false, false, false, false, true, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t1744.h"
// Metadata Definition System.Reflection.Emit.ILGenerator
#include "t1744MD.h"
extern Il2CppType t1559_0_0_0;
extern Il2CppType t1559_0_0_0;
extern Il2CppType t1766_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1744_m9221_ParameterInfos[] = 
{
	{"m", 0, 134221531, &EmptyCustomAttributesCache, &t1559_0_0_0},
	{"token_gen", 1, 134221532, &EmptyCustomAttributesCache, &t1766_0_0_0},
	{"size", 2, 134221533, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9221_MI = 
{
	".ctor", (methodPointerType)&m9221, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1744_m9221_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 3, false, false, 3045, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9222_MI = 
{
	".cctor", (methodPointerType)&m9222, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3046, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t553_0_0_0;
static ParameterInfo t1744_m9223_ParameterInfos[] = 
{
	{"mi", 0, 134221534, &EmptyCustomAttributesCache, &t553_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9223_MI = 
{
	"add_token_fixup", (methodPointerType)&m9223, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1744_m9223_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3047, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1744_m9224_ParameterInfos[] = 
{
	{"nbytes", 0, 134221535, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9224_MI = 
{
	"make_room", (methodPointerType)&m9224, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1744_m9224_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3048, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1744_m9225_ParameterInfos[] = 
{
	{"val", 0, 134221536, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9225_MI = 
{
	"emit_int", (methodPointerType)&m9225, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1744_m9225_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3049, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1768_0_0_0;
extern Il2CppType t1768_0_0_0;
static ParameterInfo t1744_m9226_ParameterInfos[] = 
{
	{"opcode", 0, 134221537, &EmptyCustomAttributesCache, &t1768_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1768 (MethodInfo* method, void* obj, void** args);
MethodInfo m9226_MI = 
{
	"ll_emit", (methodPointerType)&m9226, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t1768, t1744_m9226_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3050, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1768_0_0_0;
static ParameterInfo t1744_m9227_ParameterInfos[] = 
{
	{"opcode", 0, 134221538, &EmptyCustomAttributesCache, &t1768_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t1768 (MethodInfo* method, void* obj, void** args);
MethodInfo m9227_MI = 
{
	"target_len", (methodPointerType)&m9227, &t1744_TI, &t125_0_0_0, RuntimeInvoker_t125_t1768, t1744_m9227_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 3051, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1744_m9228_ParameterInfos[] = 
{
	{"localType", 0, 134221539, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1767_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9228_MI = 
{
	"DeclareLocal", (methodPointerType)&m9228, &t1744_TI, &t1767_0_0_0, RuntimeInvoker_t9_t9, t1744_m9228_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 4, 1, false, false, 3052, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1744_m9229_ParameterInfos[] = 
{
	{"localType", 0, 134221540, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"pinned", 1, 134221541, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1767_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9229_MI = 
{
	"DeclareLocal", (methodPointerType)&m9229, &t1744_TI, &t1767_0_0_0, RuntimeInvoker_t9_t9_t186, t1744_m9229_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 2, false, false, 3053, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1769_0_0_0;
extern void* RuntimeInvoker_t1769 (MethodInfo* method, void* obj, void** args);
MethodInfo m9230_MI = 
{
	"DefineLabel", (methodPointerType)&m9230, &t1744_TI, &t1769_0_0_0, RuntimeInvoker_t1769, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 3054, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1768_0_0_0;
static ParameterInfo t1744_m9231_ParameterInfos[] = 
{
	{"opcode", 0, 134221542, &EmptyCustomAttributesCache, &t1768_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1768 (MethodInfo* method, void* obj, void** args);
MethodInfo m9231_MI = 
{
	"Emit", (methodPointerType)&m9231, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t1768, t1744_m9231_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 1, false, false, 3055, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1768_0_0_0;
extern Il2CppType t568_0_0_0;
static ParameterInfo t1744_m9232_ParameterInfos[] = 
{
	{"opcode", 0, 134221543, &EmptyCustomAttributesCache, &t1768_0_0_0},
	{"arg", 1, 134221544, &EmptyCustomAttributesCache, &t568_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1768_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9232_MI = 
{
	"Emit", (methodPointerType)&m9232, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t1768_t186, t1744_m9232_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 2, false, false, 3056, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1768_0_0_0;
extern Il2CppType t819_0_0_0;
static ParameterInfo t1744_m9233_ParameterInfos[] = 
{
	{"opcode", 0, 134221545, &EmptyCustomAttributesCache, &t1768_0_0_0},
	{"con", 1, 134221546, &EmptyCustomAttributesCache, &t819_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1768_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1744__CustomAttributeCache_m9233;
MethodInfo m9233_MI = 
{
	"Emit", (methodPointerType)&m9233, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t1768_t9, t1744_m9233_ParameterInfos, &t1744__CustomAttributeCache_m9233, 454, 0, 9, 2, false, false, 3057, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1768_0_0_0;
extern Il2CppType t823_0_0_0;
static ParameterInfo t1744_m9234_ParameterInfos[] = 
{
	{"opcode", 0, 134221547, &EmptyCustomAttributesCache, &t1768_0_0_0},
	{"field", 1, 134221548, &EmptyCustomAttributesCache, &t823_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1768_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9234_MI = 
{
	"Emit", (methodPointerType)&m9234, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t1768_t9, t1744_m9234_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 2, false, false, 3058, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1768_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1744_m9235_ParameterInfos[] = 
{
	{"opcode", 0, 134221549, &EmptyCustomAttributesCache, &t1768_0_0_0},
	{"arg", 1, 134221550, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1768_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9235_MI = 
{
	"Emit", (methodPointerType)&m9235, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t1768_t125, t1744_m9235_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 2, false, false, 3059, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1768_0_0_0;
extern Il2CppType t1769_0_0_0;
extern Il2CppType t1769_0_0_0;
static ParameterInfo t1744_m9236_ParameterInfos[] = 
{
	{"opcode", 0, 134221551, &EmptyCustomAttributesCache, &t1768_0_0_0},
	{"label", 1, 134221552, &EmptyCustomAttributesCache, &t1769_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1768_t1769 (MethodInfo* method, void* obj, void** args);
MethodInfo m9236_MI = 
{
	"Emit", (methodPointerType)&m9236, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t1768_t1769, t1744_m9236_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 12, 2, false, false, 3060, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1768_0_0_0;
extern Il2CppType t1767_0_0_0;
extern Il2CppType t1767_0_0_0;
static ParameterInfo t1744_m9237_ParameterInfos[] = 
{
	{"opcode", 0, 134221553, &EmptyCustomAttributesCache, &t1768_0_0_0},
	{"local", 1, 134221554, &EmptyCustomAttributesCache, &t1767_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1768_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9237_MI = 
{
	"Emit", (methodPointerType)&m9237, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t1768_t9, t1744_m9237_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 2, false, false, 3061, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1768_0_0_0;
extern Il2CppType t821_0_0_0;
static ParameterInfo t1744_m9238_ParameterInfos[] = 
{
	{"opcode", 0, 134221555, &EmptyCustomAttributesCache, &t1768_0_0_0},
	{"meth", 1, 134221556, &EmptyCustomAttributesCache, &t821_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1768_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9238_MI = 
{
	"Emit", (methodPointerType)&m9238, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t1768_t9, t1744_m9238_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 2, false, false, 3062, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1768_0_0_0;
extern Il2CppType t821_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1744_m9239_ParameterInfos[] = 
{
	{"opcode", 0, 134221557, &EmptyCustomAttributesCache, &t1768_0_0_0},
	{"method", 1, 134221558, &EmptyCustomAttributesCache, &t821_0_0_0},
	{"token", 2, 134221559, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1768_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9239_MI = 
{
	"Emit", (methodPointerType)&m9239, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t1768_t9_t125, t1744_m9239_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 3063, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1768_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1744_m9240_ParameterInfos[] = 
{
	{"opcode", 0, 134221560, &EmptyCustomAttributesCache, &t1768_0_0_0},
	{"str", 1, 134221561, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1768_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9240_MI = 
{
	"Emit", (methodPointerType)&m9240, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t1768_t9, t1744_m9240_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 15, 2, false, false, 3064, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1768_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1744_m9241_ParameterInfos[] = 
{
	{"opcode", 0, 134221562, &EmptyCustomAttributesCache, &t1768_0_0_0},
	{"cls", 1, 134221563, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1768_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9241_MI = 
{
	"Emit", (methodPointerType)&m9241, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t1768_t9, t1744_m9241_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 16, 2, false, false, 3065, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1768_0_0_0;
extern Il2CppType t821_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t1744_m9242_ParameterInfos[] = 
{
	{"opcode", 0, 134221564, &EmptyCustomAttributesCache, &t1768_0_0_0},
	{"methodInfo", 1, 134221565, &EmptyCustomAttributesCache, &t821_0_0_0},
	{"optionalParameterTypes", 2, 134221566, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1768_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1744__CustomAttributeCache_m9242;
MethodInfo m9242_MI = 
{
	"EmitCall", (methodPointerType)&m9242, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t1768_t9_t9, t1744_m9242_ParameterInfos, &t1744__CustomAttributeCache_m9242, 454, 0, 17, 3, false, false, 3066, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1769_0_0_0;
static ParameterInfo t1744_m9243_ParameterInfos[] = 
{
	{"loc", 0, 134221567, &EmptyCustomAttributesCache, &t1769_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1769 (MethodInfo* method, void* obj, void** args);
MethodInfo m9243_MI = 
{
	"MarkLabel", (methodPointerType)&m9243, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t1769, t1744_m9243_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 18, 1, false, false, 3067, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9244_MI = 
{
	"label_fixup", (methodPointerType)&m9244, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 3068, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1744_0_0_0;
static ParameterInfo t1744_m9245_ParameterInfos[] = 
{
	{"ig", 0, 134221568, &EmptyCustomAttributesCache, &t1744_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1744__CustomAttributeCache_m9245;
MethodInfo m9245_MI = 
{
	"Mono_GetCurrentOffset", (methodPointerType)&m9245, &t1744_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1744_m9245_ParameterInfos, &t1744__CustomAttributeCache_m9245, 147, 0, 255, 1, false, false, 3069, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1744_MIs[] =
{
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
	NULL
};
extern Il2CppType t126_0_0_49;
FieldInfo t1744_f0_FieldInfo = 
{
	"void_type", &t126_0_0_49, &t1744_TI, offsetof(t1744_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t1744_f1_FieldInfo = 
{
	"code", &t723_0_0_1, &t1744_TI, offsetof(t1744, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1744_f2_FieldInfo = 
{
	"code_len", &t125_0_0_1, &t1744_TI, offsetof(t1744, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1744_f3_FieldInfo = 
{
	"max_stack", &t125_0_0_1, &t1744_TI, offsetof(t1744, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1744_f4_FieldInfo = 
{
	"cur_stack", &t125_0_0_1, &t1744_TI, offsetof(t1744, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1762_0_0_1;
FieldInfo t1744_f5_FieldInfo = 
{
	"locals", &t1762_0_0_1, &t1744_TI, offsetof(t1744, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1744_f6_FieldInfo = 
{
	"num_token_fixups", &t125_0_0_1, &t1744_TI, offsetof(t1744, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1763_0_0_1;
FieldInfo t1744_f7_FieldInfo = 
{
	"token_fixups", &t1763_0_0_1, &t1744_TI, offsetof(t1744, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1764_0_0_1;
FieldInfo t1744_f8_FieldInfo = 
{
	"labels", &t1764_0_0_1, &t1744_TI, offsetof(t1744, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1744_f9_FieldInfo = 
{
	"num_labels", &t125_0_0_1, &t1744_TI, offsetof(t1744, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1765_0_0_1;
FieldInfo t1744_f10_FieldInfo = 
{
	"fixups", &t1765_0_0_1, &t1744_TI, offsetof(t1744, f10), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1744_f11_FieldInfo = 
{
	"num_fixups", &t125_0_0_1, &t1744_TI, offsetof(t1744, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1559_0_0_3;
FieldInfo t1744_f12_FieldInfo = 
{
	"module", &t1559_0_0_3, &t1744_TI, offsetof(t1744, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1766_0_0_1;
FieldInfo t1744_f13_FieldInfo = 
{
	"token_gen", &t1766_0_0_1, &t1744_TI, offsetof(t1744, f13), &EmptyCustomAttributesCache};
static FieldInfo* t1744_FIs[] =
{
	&t1744_f0_FieldInfo,
	&t1744_f1_FieldInfo,
	&t1744_f2_FieldInfo,
	&t1744_f3_FieldInfo,
	&t1744_f4_FieldInfo,
	&t1744_f5_FieldInfo,
	&t1744_f6_FieldInfo,
	&t1744_f7_FieldInfo,
	&t1744_f8_FieldInfo,
	&t1744_f9_FieldInfo,
	&t1744_f10_FieldInfo,
	&t1744_f11_FieldInfo,
	&t1744_f12_FieldInfo,
	&t1744_f13_FieldInfo,
	NULL
};
static const Il2CppType* t1744_TI__nestedTypes[2] =
{
	&t1760_0_0_0,
	&t1761_0_0_0,
};
extern MethodInfo m9228_MI;
extern MethodInfo m9229_MI;
extern MethodInfo m9230_MI;
extern MethodInfo m9231_MI;
extern MethodInfo m9232_MI;
extern MethodInfo m9233_MI;
extern MethodInfo m9234_MI;
extern MethodInfo m9235_MI;
extern MethodInfo m9236_MI;
extern MethodInfo m9237_MI;
extern MethodInfo m9238_MI;
extern MethodInfo m9240_MI;
extern MethodInfo m9241_MI;
extern MethodInfo m9242_MI;
extern MethodInfo m9243_MI;
static Il2CppMethodReference t1744_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
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
	&m9240_MI,
	&m9241_MI,
	&m9242_MI,
	&m9243_MI,
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
	false,
	false,
};
extern Il2CppType t2589_0_0_0;
static const Il2CppType* t1744_ITIs[] = 
{
	&t2589_0_0_0,
};
static Il2CppInterfaceOffsetPair t1744_IOs[] = 
{
	{ &t2589_0_0_0, 4},
};
extern TypeInfo t2589_TI;
void t1744_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1829 * tmp;
		tmp = (t1829 *)il2cpp_codegen_object_new (&t1829_TI);
		m9743(tmp, 0, &m9743_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1831 * tmp;
		tmp = (t1831 *)il2cpp_codegen_object_new (&t1831_TI);
		m9744(tmp, il2cpp_codegen_type_get_object(&t2589_0_0_0), &m9744_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t1744_CustomAttributesCacheGenerator_m9233(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1585_TI;
#include "t1585.h"
#include "t1585MD.h"
extern MethodInfo m7823_MI;
void t1744_CustomAttributesCacheGenerator_m9242(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1585 * tmp;
		tmp = (t1585 *)il2cpp_codegen_object_new (&t1585_TI);
		m7823(tmp, il2cpp_codegen_string_new_wrapper("vararg methods are not supported"), &m7823_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1744_CustomAttributesCacheGenerator_m9245(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t611 * tmp;
		tmp = (t611 *)il2cpp_codegen_object_new (&t611_TI);
		m2970(tmp, il2cpp_codegen_string_new_wrapper("Use ILOffset"), &m2970_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1744__CustomAttributeCache = {
3,
NULL,
&t1744_CustomAttributesCacheGenerator
};
CustomAttributesCache t1744__CustomAttributeCache_m9233 = {
1,
NULL,
&t1744_CustomAttributesCacheGenerator_m9233
};
CustomAttributesCache t1744__CustomAttributeCache_m9242 = {
1,
NULL,
&t1744_CustomAttributesCacheGenerator_m9242
};
CustomAttributesCache t1744__CustomAttributeCache_m9245 = {
1,
NULL,
&t1744_CustomAttributesCacheGenerator_m9245
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1744_1_0_0;
struct t1744;
extern CustomAttributesCache t1744__CustomAttributeCache;
extern CustomAttributesCache t1744__CustomAttributeCache_m9233;
extern CustomAttributesCache t1744__CustomAttributeCache_m9242;
extern CustomAttributesCache t1744__CustomAttributeCache_m9245;
const Il2CppTypeDefinitionMetadata t1744_DM = 
{
	NULL, t1744_TI__nestedTypes, t1744_ITIs, t1744_IOs, &t9_0_0_0, t1744_VT, t1744_VTIGM, NULL};
TypeInfo t1744_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ILGenerator", "System.Reflection.Emit", t1744_MIs, NULL, t1744_FIs, NULL, &t1744_TI, NULL, &t1744__CustomAttributeCache, &t1744_0_0_0, &t1744_1_0_0, &t1744_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1744), sizeof (t1744), 0, -1, sizeof(t1744_SFs), 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, true, false, 25, 0, 14, 0, 2, 19, 1, 1};
#include "t1769.h"
// Metadata Definition System.Reflection.Emit.Label
extern TypeInfo t1769_TI;
#include "t1769MD.h"
extern Il2CppType t125_0_0_0;
static ParameterInfo t1769_m9246_ParameterInfos[] = 
{
	{"val", 0, 134221571, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9246_MI = 
{
	".ctor", (methodPointerType)&m9246, &t1769_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1769_m9246_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 3071, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1769_m9247_ParameterInfos[] = 
{
	{"obj", 0, 134221572, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9247_MI = 
{
	"Equals", (methodPointerType)&m9247, &t1769_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1769_m9247_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 3072, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9248_MI = 
{
	"GetHashCode", (methodPointerType)&m9248, &t1769_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 3073, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1769_MIs[] =
{
	&m9246_MI,
	&m9247_MI,
	&m9248_MI,
	NULL
};
extern Il2CppType t125_0_0_3;
FieldInfo t1769_f0_FieldInfo = 
{
	"label", &t125_0_0_3, &t1769_TI, offsetof(t1769, f0) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1769_FIs[] =
{
	&t1769_f0_FieldInfo,
	NULL
};
extern MethodInfo m9247_MI;
extern MethodInfo m9248_MI;
static Il2CppMethodReference t1769_VT[] =
{
	&m9247_MI,
	&m646_MI,
	&m9248_MI,
	&m682_MI,
};
static bool t1769_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1769_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1769__CustomAttributeCache = {
1,
NULL,
&t1769_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1769_1_0_0;
extern CustomAttributesCache t1769__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1769_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1769_VT, t1769_VTIGM, NULL};
TypeInfo t1769_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Label", "System.Reflection.Emit", t1769_MIs, NULL, t1769_FIs, NULL, &t1769_TI, NULL, &t1769__CustomAttributeCache, &t1769_0_0_0, &t1769_1_0_0, &t1769_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1769)+ sizeof (Il2CppObject), sizeof (t1769)+ sizeof (Il2CppObject), 0, sizeof(t1769 ), 0, 0, -1, 1057033, 0, 0, true, false, false, false, false, false, false, false, false, true, 3, 0, 1, 0, 0, 4, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
