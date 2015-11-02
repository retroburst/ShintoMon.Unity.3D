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
extern TypeInfo t1171_TI;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1171_m5758_ParameterInfos[] = 
{
	{"x", 0, 134220707, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"y", 1, 134220708, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5758_MI = 
{
	"Compare", NULL, &t1171_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1171_m5758_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, false, 2224, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1171_MIs[] =
{
	&m5758_MI,
	NULL
};
extern TypeInfo t684_TI;
#include "t684.h"
#include "t684MD.h"
extern MethodInfo m3168_MI;
void t1171_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1171__CustomAttributeCache = {
1,
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
	&g_mscorlib_dll_Image, NULL, "IComparer", "System.Collections", t1171_MIs, NULL, NULL, NULL, &t1171_TI, NULL, &t1171__CustomAttributeCache, &t1171_0_0_0, &t1171_1_0_0, &t1171_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Collections.IDictionary
extern TypeInfo t1166_TI;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1166_m5744_ParameterInfos[] = 
{
	{"key", 0, 134220709, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5744_MI = 
{
	"get_Item", NULL, &t1166_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1166_m5744_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 0, 1, false, false, 2225, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1166_m5745_ParameterInfos[] = 
{
	{"key", 0, 134220710, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"value", 1, 134220711, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5745_MI = 
{
	"set_Item", NULL, &t1166_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1166_m5745_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 1, 2, false, false, 2226, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1166_m5749_ParameterInfos[] = 
{
	{"key", 0, 134220712, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"value", 1, 134220713, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5749_MI = 
{
	"Add", NULL, &t1166_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1166_m5749_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 2, false, false, 2227, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1166_m5750_ParameterInfos[] = 
{
	{"key", 0, 134220714, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5750_MI = 
{
	"Contains", NULL, &t1166_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1166_m5750_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 3, 1, false, false, 2228, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1167_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5752_MI = 
{
	"GetEnumerator", NULL, &t1166_TI, &t1167_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 1478, 0, 4, 0, false, false, 2229, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1166_m5753_ParameterInfos[] = 
{
	{"key", 0, 134220715, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5753_MI = 
{
	"Remove", NULL, &t1166_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1166_m5753_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 2230, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1166_MIs[] =
{
	&m5744_MI,
	&m5745_MI,
	&m5749_MI,
	&m5750_MI,
	&m5752_MI,
	&m5753_MI,
	NULL
};
extern MethodInfo m5744_MI;
extern MethodInfo m5745_MI;
static PropertyInfo t1166____Item_PropertyInfo = 
{
	&t1166_TI, "Item", &m5744_MI, &m5745_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1166_PIs[] =
{
	&t1166____Item_PropertyInfo,
	NULL
};
extern Il2CppType t672_0_0_0;
extern Il2CppType t1004_0_0_0;
static const Il2CppType* t1166_ITIs[] = 
{
	&t672_0_0_0,
	&t1004_0_0_0,
};
extern TypeInfo t673_TI;
#include "t673.h"
#include "t673MD.h"
extern MethodInfo m3143_MI;
void t1166_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t673 * tmp;
		tmp = (t673 *)il2cpp_codegen_object_new (&t673_TI);
		m3143(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m3143_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1166__CustomAttributeCache = {
2,
NULL,
&t1166_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1166_0_0_0;
extern Il2CppType t1166_1_0_0;
struct t1166;
extern CustomAttributesCache t1166__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1166_DM = 
{
	NULL, NULL, t1166_ITIs, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1166_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary", "System.Collections", t1166_MIs, t1166_PIs, NULL, NULL, &t1166_TI, NULL, &t1166__CustomAttributeCache, &t1166_0_0_0, &t1166_1_0_0, &t1166_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 0, 0, 0, 0, 2, 0};
// Metadata Definition System.Collections.IDictionaryEnumerator
extern TypeInfo t1167_TI;
extern Il2CppType t1170_0_0_0;
extern void* RuntimeInvoker_t1170 (MethodInfo* method, void* obj, void** args);
MethodInfo m12040_MI = 
{
	"get_Entry", NULL, &t1167_TI, &t1170_0_0_0, RuntimeInvoker_t1170, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 2231, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5799_MI = 
{
	"get_Key", NULL, &t1167_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, false, 2232, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5798_MI = 
{
	"get_Value", NULL, &t1167_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 2, 0, false, false, 2233, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1167_MIs[] =
{
	&m12040_MI,
	&m5799_MI,
	&m5798_MI,
	NULL
};
extern MethodInfo m12040_MI;
static PropertyInfo t1167____Entry_PropertyInfo = 
{
	&t1167_TI, "Entry", &m12040_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5799_MI;
static PropertyInfo t1167____Key_PropertyInfo = 
{
	&t1167_TI, "Key", &m5799_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5798_MI;
static PropertyInfo t1167____Value_PropertyInfo = 
{
	&t1167_TI, "Value", &m5798_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1167_PIs[] =
{
	&t1167____Entry_PropertyInfo,
	&t1167____Key_PropertyInfo,
	&t1167____Value_PropertyInfo,
	NULL
};
extern Il2CppType t76_0_0_0;
static const Il2CppType* t1167_ITIs[] = 
{
	&t76_0_0_0,
};
void t1167_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1167__CustomAttributeCache = {
1,
NULL,
&t1167_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1167_0_0_0;
extern Il2CppType t1167_1_0_0;
struct t1167;
extern CustomAttributesCache t1167__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1167_DM = 
{
	NULL, NULL, t1167_ITIs, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1167_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionaryEnumerator", "System.Collections", t1167_MIs, t1167_PIs, NULL, NULL, &t1167_TI, NULL, &t1167__CustomAttributeCache, &t1167_0_0_0, &t1167_1_0_0, &t1167_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 3, 0, 0, 0, 0, 1, 0};
// Metadata Definition System.Collections.IEqualityComparer
extern TypeInfo t1178_TI;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1178_m12043_ParameterInfos[] = 
{
	{"x", 0, 134220716, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"y", 1, 134220717, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12043_MI = 
{
	"Equals", NULL, &t1178_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1178_m12043_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, false, 2234, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1178_m12041_ParameterInfos[] = 
{
	{"obj", 0, 134220718, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12041_MI = 
{
	"GetHashCode", NULL, &t1178_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1178_m12041_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, false, 2235, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1178_MIs[] =
{
	&m12043_MI,
	&m12041_MI,
	NULL
};
void t1178_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1178__CustomAttributeCache = {
1,
NULL,
&t1178_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1178_0_0_0;
extern Il2CppType t1178_1_0_0;
struct t1178;
extern CustomAttributesCache t1178__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1178_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1178_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer", "System.Collections", t1178_MIs, NULL, NULL, NULL, &t1178_TI, NULL, &t1178__CustomAttributeCache, &t1178_0_0_0, &t1178_1_0_0, &t1178_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Collections.IHashCodeProvider
extern TypeInfo t1177_TI;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1177_m12042_ParameterInfos[] = 
{
	{"obj", 0, 134220719, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12042_MI = 
{
	"GetHashCode", NULL, &t1177_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1177_m12042_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 2236, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1177_MIs[] =
{
	&m12042_MI,
	NULL
};
extern TypeInfo t625_TI;
#include "t625.h"
#include "t625MD.h"
extern MethodInfo m3034_MI;
void t1177_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t625 * tmp;
		tmp = (t625 *)il2cpp_codegen_object_new (&t625_TI);
		m3034(tmp, il2cpp_codegen_string_new_wrapper("Please use IEqualityComparer instead."), &m3034_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1177__CustomAttributeCache = {
2,
NULL,
&t1177_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1177_0_0_0;
extern Il2CppType t1177_1_0_0;
struct t1177;
extern CustomAttributesCache t1177__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1177_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1177_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IHashCodeProvider", "System.Collections", t1177_MIs, NULL, NULL, NULL, &t1177_TI, NULL, &t1177__CustomAttributeCache, &t1177_0_0_0, &t1177_1_0_0, &t1177_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1691.h"
// Metadata Definition System.Collections.Queue/QueueEnumerator
extern TypeInfo t1691_TI;
#include "t1691MD.h"
extern Il2CppType t1692_0_0_0;
extern Il2CppType t1692_0_0_0;
static ParameterInfo t1691_m8570_ParameterInfos[] = 
{
	{"q", 0, 134220727, &EmptyCustomAttributesCache, &t1692_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8570_MI = 
{
	".ctor", (methodPointerType)&m8570, &t1691_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1691_m8570_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2251, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8571_MI = 
{
	"get_Current", (methodPointerType)&m8571, &t1691_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 2252, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8572_MI = 
{
	"MoveNext", (methodPointerType)&m8572, &t1691_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2253, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1691_MIs[] =
{
	&m8570_MI,
	&m8571_MI,
	&m8572_MI,
	NULL
};
extern Il2CppType t1692_0_0_1;
FieldInfo t1691_f0_FieldInfo = 
{
	"queue", &t1692_0_0_1, &t1691_TI, offsetof(t1691, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1691_f1_FieldInfo = 
{
	"_version", &t125_0_0_1, &t1691_TI, offsetof(t1691, f1), &EmptyCustomAttributesCache};
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
extern MethodInfo m8571_MI;
static PropertyInfo t1691____Current_PropertyInfo = 
{
	&t1691_TI, "Current", &m8571_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1691_PIs[] =
{
	&t1691____Current_PropertyInfo,
	NULL
};
extern MethodInfo m671_MI;
extern MethodInfo m646_MI;
extern MethodInfo m672_MI;
extern MethodInfo m673_MI;
extern MethodInfo m8572_MI;
static Il2CppMethodReference t1691_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8571_MI,
	&m8572_MI,
	&m8571_MI,
	&m8572_MI,
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
extern Il2CppType t629_0_0_0;
static const Il2CppType* t1691_ITIs[] = 
{
	&t76_0_0_0,
	&t629_0_0_0,
};
static Il2CppInterfaceOffsetPair t1691_IOs[] = 
{
	{ &t76_0_0_0, 4},
	{ &t629_0_0_0, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1691_0_0_0;
extern Il2CppType t1691_1_0_0;
extern TypeInfo t1692_TI;
struct t1691;
const Il2CppTypeDefinitionMetadata t1691_DM = 
{
	&t1692_0_0_0, NULL, t1691_ITIs, t1691_IOs, &t9_0_0_0, t1691_VT, t1691_VTIGM, NULL};
TypeInfo t1691_TI = 
{
	&g_mscorlib_dll_Image, NULL, "QueueEnumerator", "", t1691_MIs, t1691_PIs, t1691_FIs, NULL, &t1691_TI, NULL, &EmptyCustomAttributesCache, &t1691_0_0_0, &t1691_1_0_0, &t1691_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1691), sizeof (t1691), 0, -1, 0, 0, -1, 1056771, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 1, 3, 0, 0, 8, 2, 2};
#include "t1692.h"
// Metadata Definition System.Collections.Queue
#include "t1692MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8573_MI = 
{
	".ctor", (methodPointerType)&m8573, &t1692_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2237, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1692_m8574_ParameterInfos[] = 
{
	{"capacity", 0, 134220720, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8574_MI = 
{
	".ctor", (methodPointerType)&m8574, &t1692_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1692_m8574_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2238, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1004_0_0_0;
static ParameterInfo t1692_m8575_ParameterInfos[] = 
{
	{"col", 0, 134220721, &EmptyCustomAttributesCache, &t1004_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8575_MI = 
{
	".ctor", (methodPointerType)&m8575, &t1692_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1692_m8575_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2239, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t1692_m8576_ParameterInfos[] = 
{
	{"capacity", 0, 134220722, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"growFactor", 1, 134220723, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m8576_MI = 
{
	".ctor", (methodPointerType)&m8576, &t1692_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t123, t1692_m8576_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2240, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8577_MI = 
{
	"get_Count", (methodPointerType)&m8577, &t1692_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 2241, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8578_MI = 
{
	"get_IsSynchronized", (methodPointerType)&m8578, &t1692_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 10, 0, false, false, 2242, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8579_MI = 
{
	"get_SyncRoot", (methodPointerType)&m8579, &t1692_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 2243, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t121_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1692_m8580_ParameterInfos[] = 
{
	{"array", 0, 134220724, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"index", 1, 134220725, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8580_MI = 
{
	"CopyTo", (methodPointerType)&m8580, &t1692_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1692_m8580_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 12, 2, false, false, 2244, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t76_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8581_MI = 
{
	"GetEnumerator", (methodPointerType)&m8581, &t1692_TI, &t76_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 13, 0, false, false, 2245, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8582_MI = 
{
	"Clear", (methodPointerType)&m8582, &t1692_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 14, 0, false, false, 2246, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8583_MI = 
{
	"Dequeue", (methodPointerType)&m8583, &t1692_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 15, 0, false, false, 2247, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1692_m8584_ParameterInfos[] = 
{
	{"obj", 0, 134220726, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8584_MI = 
{
	"Enqueue", (methodPointerType)&m8584, &t1692_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1692_m8584_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 16, 1, false, false, 2248, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8585_MI = 
{
	"Peek", (methodPointerType)&m8585, &t1692_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 17, 0, false, false, 2249, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8586_MI = 
{
	"grow", (methodPointerType)&m8586, &t1692_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2250, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1692_MIs[] =
{
	&m8573_MI,
	&m8574_MI,
	&m8575_MI,
	&m8576_MI,
	&m8577_MI,
	&m8578_MI,
	&m8579_MI,
	&m8580_MI,
	&m8581_MI,
	&m8582_MI,
	&m8583_MI,
	&m8584_MI,
	&m8585_MI,
	&m8586_MI,
	NULL
};
extern Il2CppType t158_0_0_1;
FieldInfo t1692_f0_FieldInfo = 
{
	"_array", &t158_0_0_1, &t1692_TI, offsetof(t1692, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1692_f1_FieldInfo = 
{
	"_head", &t125_0_0_1, &t1692_TI, offsetof(t1692, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1692_f2_FieldInfo = 
{
	"_size", &t125_0_0_1, &t1692_TI, offsetof(t1692, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1692_f3_FieldInfo = 
{
	"_tail", &t125_0_0_1, &t1692_TI, offsetof(t1692, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1692_f4_FieldInfo = 
{
	"_growFactor", &t125_0_0_1, &t1692_TI, offsetof(t1692, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1692_f5_FieldInfo = 
{
	"_version", &t125_0_0_1, &t1692_TI, offsetof(t1692, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1692_FIs[] =
{
	&t1692_f0_FieldInfo,
	&t1692_f1_FieldInfo,
	&t1692_f2_FieldInfo,
	&t1692_f3_FieldInfo,
	&t1692_f4_FieldInfo,
	&t1692_f5_FieldInfo,
	NULL
};
extern MethodInfo m8577_MI;
static PropertyInfo t1692____Count_PropertyInfo = 
{
	&t1692_TI, "Count", &m8577_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8578_MI;
static PropertyInfo t1692____IsSynchronized_PropertyInfo = 
{
	&t1692_TI, "IsSynchronized", &m8578_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8579_MI;
static PropertyInfo t1692____SyncRoot_PropertyInfo = 
{
	&t1692_TI, "SyncRoot", &m8579_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1692_PIs[] =
{
	&t1692____Count_PropertyInfo,
	&t1692____IsSynchronized_PropertyInfo,
	&t1692____SyncRoot_PropertyInfo,
	NULL
};
static const Il2CppType* t1692_TI__nestedTypes[1] =
{
	&t1691_0_0_0,
};
extern MethodInfo m8581_MI;
extern MethodInfo m8580_MI;
extern MethodInfo m8582_MI;
extern MethodInfo m8583_MI;
extern MethodInfo m8584_MI;
extern MethodInfo m8585_MI;
static Il2CppMethodReference t1692_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8581_MI,
	&m8577_MI,
	&m8578_MI,
	&m8579_MI,
	&m8580_MI,
	&m8577_MI,
	&m8578_MI,
	&m8579_MI,
	&m8580_MI,
	&m8581_MI,
	&m8582_MI,
	&m8583_MI,
	&m8584_MI,
	&m8585_MI,
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
};
static const Il2CppType* t1692_ITIs[] = 
{
	&t672_0_0_0,
	&t629_0_0_0,
	&t1004_0_0_0,
};
static Il2CppInterfaceOffsetPair t1692_IOs[] = 
{
	{ &t672_0_0_0, 4},
	{ &t629_0_0_0, 5},
	{ &t1004_0_0_0, 5},
};
extern TypeInfo t1703_TI;
#include "t1703.h"
#include "t1703MD.h"
extern MethodInfo m8625_MI;
extern TypeInfo t1682_TI;
extern Il2CppType t1682_0_0_0;
#include "t1682.h"
extern TypeInfo t1701_TI;
#include "t1701.h"
#include "t1701MD.h"
extern MethodInfo m8622_MI;
void t1692_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1703 * tmp;
		tmp = (t1703 *)il2cpp_codegen_object_new (&t1703_TI);
		m8625(tmp, il2cpp_codegen_type_get_object(&t1682_0_0_0), &m8625_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1701 * tmp;
		tmp = (t1701 *)il2cpp_codegen_object_new (&t1701_TI);
		m8622(tmp, il2cpp_codegen_string_new_wrapper("Count={Count}"), &m8622_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1692__CustomAttributeCache = {
3,
NULL,
&t1692_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1692_1_0_0;
struct t1692;
extern CustomAttributesCache t1692__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1692_DM = 
{
	NULL, t1692_TI__nestedTypes, t1692_ITIs, t1692_IOs, &t9_0_0_0, t1692_VT, t1692_VTIGM, NULL};
TypeInfo t1692_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Queue", "System.Collections", t1692_MIs, t1692_PIs, t1692_FIs, NULL, &t1692_TI, NULL, &t1692__CustomAttributeCache, &t1692_0_0_0, &t1692_1_0_0, &t1692_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1692), sizeof (t1692), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 14, 3, 6, 0, 1, 18, 3, 3};
#include "t1693.h"
// Metadata Definition System.Collections.SortedList/Slot
extern TypeInfo t1693_TI;
#include "t1693MD.h"
static MethodInfo* t1693_MIs[] =
{
	NULL
};
extern Il2CppType t9_0_0_3;
FieldInfo t1693_f0_FieldInfo = 
{
	"key", &t9_0_0_3, &t1693_TI, offsetof(t1693, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_3;
FieldInfo t1693_f1_FieldInfo = 
{
	"value", &t9_0_0_3, &t1693_TI, offsetof(t1693, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1693_FIs[] =
{
	&t1693_f0_FieldInfo,
	&t1693_f1_FieldInfo,
	NULL
};
extern MethodInfo m680_MI;
extern MethodInfo m681_MI;
extern MethodInfo m682_MI;
static Il2CppMethodReference t1693_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
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
extern Il2CppType t117_0_0_0;
extern TypeInfo t1350_TI;
extern Il2CppType t1350_0_0_0;
const Il2CppTypeDefinitionMetadata t1693_DM = 
{
	&t1350_0_0_0, NULL, NULL, NULL, &t117_0_0_0, t1693_VT, t1693_VTIGM, NULL};
TypeInfo t1693_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Slot", "", t1693_MIs, NULL, t1693_FIs, NULL, &t1693_TI, NULL, &EmptyCustomAttributesCache, &t1693_0_0_0, &t1693_1_0_0, &t1693_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1693)+ sizeof (Il2CppObject), sizeof (t1693)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057037, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 2, 0, 0, 4, 0, 0};
#include "t1694.h"
// Metadata Definition System.Collections.SortedList/EnumeratorMode
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
	"KEY_MODE", &t1694_0_0_32854, &t1694_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1694_0_0_32854;
FieldInfo t1694_f3_FieldInfo = 
{
	"VALUE_MODE", &t1694_0_0_32854, &t1694_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1694_0_0_32854;
FieldInfo t1694_f4_FieldInfo = 
{
	"ENTRY_MODE", &t1694_0_0_32854, &t1694_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1694_FIs[] =
{
	&t1694_f1_FieldInfo,
	&t1694_f2_FieldInfo,
	&t1694_f3_FieldInfo,
	&t1694_f4_FieldInfo,
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
static Il2CppFieldDefaultValueEntry* t1694_FDVs[] = 
{
	&t1694_f2_DefaultValue,
	&t1694_f3_DefaultValue,
	&t1694_f4_DefaultValue,
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
extern Il2CppType t183_0_0_0;
extern Il2CppType t184_0_0_0;
extern Il2CppType t185_0_0_0;
static Il2CppInterfaceOffsetPair t1694_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1694_0_0_0;
extern Il2CppType t1694_1_0_0;
extern Il2CppType t8_0_0_0;
#include "t125.h"
extern TypeInfo t125_TI;
const Il2CppTypeDefinitionMetadata t1694_DM = 
{
	&t1350_0_0_0, NULL, NULL, t1694_IOs, &t8_0_0_0, t1694_VT, t1694_VTIGM, NULL};
TypeInfo t1694_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EnumeratorMode", "", t1694_MIs, NULL, t1694_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t1694_0_0_0, &t1694_1_0_0, &t1694_DM, NULL, NULL, NULL, t1694_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1694)+ sizeof (Il2CppObject), sizeof (t1694)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 259, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1695.h"
// Metadata Definition System.Collections.SortedList/Enumerator
extern TypeInfo t1695_TI;
#include "t1695MD.h"
extern Il2CppType t1350_0_0_0;
extern Il2CppType t1694_0_0_0;
static ParameterInfo t1695_m8587_ParameterInfos[] = 
{
	{"host", 0, 134220754, &EmptyCustomAttributesCache, &t1350_0_0_0},
	{"mode", 1, 134220755, &EmptyCustomAttributesCache, &t1694_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8587_MI = 
{
	".ctor", (methodPointerType)&m8587, &t1695_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1695_m8587_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2282, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8588_MI = 
{
	".cctor", (methodPointerType)&m8588, &t1695_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2283, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8589_MI = 
{
	"Reset", (methodPointerType)&m8589, &t1695_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 486, 0, 9, 0, false, false, 2284, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8590_MI = 
{
	"MoveNext", (methodPointerType)&m8590, &t1695_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 2285, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1170_0_0_0;
extern void* RuntimeInvoker_t1170 (MethodInfo* method, void* obj, void** args);
MethodInfo m8591_MI = 
{
	"get_Entry", (methodPointerType)&m8591, &t1695_TI, &t1170_0_0_0, RuntimeInvoker_t1170, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 2286, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8592_MI = 
{
	"get_Key", (methodPointerType)&m8592, &t1695_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 2287, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8593_MI = 
{
	"get_Value", (methodPointerType)&m8593, &t1695_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 8, 0, false, false, 2288, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8594_MI = 
{
	"get_Current", (methodPointerType)&m8594, &t1695_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 2289, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1695_MIs[] =
{
	&m8587_MI,
	&m8588_MI,
	&m8589_MI,
	&m8590_MI,
	&m8591_MI,
	&m8592_MI,
	&m8593_MI,
	&m8594_MI,
	NULL
};
extern Il2CppType t1350_0_0_1;
FieldInfo t1695_f0_FieldInfo = 
{
	"host", &t1350_0_0_1, &t1695_TI, offsetof(t1695, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1695_f1_FieldInfo = 
{
	"stamp", &t125_0_0_1, &t1695_TI, offsetof(t1695, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1695_f2_FieldInfo = 
{
	"pos", &t125_0_0_1, &t1695_TI, offsetof(t1695, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1695_f3_FieldInfo = 
{
	"size", &t125_0_0_1, &t1695_TI, offsetof(t1695, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1694_0_0_1;
FieldInfo t1695_f4_FieldInfo = 
{
	"mode", &t1694_0_0_1, &t1695_TI, offsetof(t1695, f4), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t1695_f5_FieldInfo = 
{
	"currentKey", &t9_0_0_1, &t1695_TI, offsetof(t1695, f5), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t1695_f6_FieldInfo = 
{
	"currentValue", &t9_0_0_1, &t1695_TI, offsetof(t1695, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1695_f7_FieldInfo = 
{
	"invalid", &t124_0_0_1, &t1695_TI, offsetof(t1695, f7), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_49;
FieldInfo t1695_f8_FieldInfo = 
{
	"xstr", &t2_0_0_49, &t1695_TI, offsetof(t1695_SFs, f8), &EmptyCustomAttributesCache};
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
	NULL
};
extern MethodInfo m8591_MI;
static PropertyInfo t1695____Entry_PropertyInfo = 
{
	&t1695_TI, "Entry", &m8591_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8592_MI;
static PropertyInfo t1695____Key_PropertyInfo = 
{
	&t1695_TI, "Key", &m8592_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8593_MI;
static PropertyInfo t1695____Value_PropertyInfo = 
{
	&t1695_TI, "Value", &m8593_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8594_MI;
static PropertyInfo t1695____Current_PropertyInfo = 
{
	&t1695_TI, "Current", &m8594_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1695_PIs[] =
{
	&t1695____Entry_PropertyInfo,
	&t1695____Key_PropertyInfo,
	&t1695____Value_PropertyInfo,
	&t1695____Current_PropertyInfo,
	NULL
};
extern MethodInfo m8590_MI;
extern MethodInfo m8589_MI;
static Il2CppMethodReference t1695_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8594_MI,
	&m8590_MI,
	&m8591_MI,
	&m8592_MI,
	&m8593_MI,
	&m8589_MI,
};
static bool t1695_VTIGM[] =
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
static const Il2CppType* t1695_ITIs[] = 
{
	&t76_0_0_0,
	&t629_0_0_0,
	&t1167_0_0_0,
};
static Il2CppInterfaceOffsetPair t1695_IOs[] = 
{
	{ &t76_0_0_0, 4},
	{ &t629_0_0_0, 6},
	{ &t1167_0_0_0, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1695_0_0_0;
extern Il2CppType t1695_1_0_0;
struct t1695;
const Il2CppTypeDefinitionMetadata t1695_DM = 
{
	&t1350_0_0_0, NULL, t1695_ITIs, t1695_IOs, &t9_0_0_0, t1695_VT, t1695_VTIGM, NULL};
TypeInfo t1695_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1695_MIs, t1695_PIs, t1695_FIs, NULL, &t1695_TI, NULL, &EmptyCustomAttributesCache, &t1695_0_0_0, &t1695_1_0_0, &t1695_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1695), sizeof (t1695), 0, -1, sizeof(t1695_SFs), 0, -1, 1048835, 0, 0, false, false, false, false, false, false, false, false, true, false, 8, 4, 9, 0, 0, 10, 3, 3};
#include "t1350.h"
// Metadata Definition System.Collections.SortedList
#include "t1350MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8595_MI = 
{
	".ctor", (methodPointerType)&m8595, &t1350_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2254, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1350_m5800_ParameterInfos[] = 
{
	{"initialCapacity", 0, 134220728, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5800_MI = 
{
	".ctor", (methodPointerType)&m5800, &t1350_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1350_m5800_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2255, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1171_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1350_m8596_ParameterInfos[] = 
{
	{"comparer", 0, 134220729, &EmptyCustomAttributesCache, &t1171_0_0_0},
	{"capacity", 1, 134220730, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8596_MI = 
{
	".ctor", (methodPointerType)&m8596, &t1350_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1350_m8596_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2256, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8597_MI = 
{
	".cctor", (methodPointerType)&m8597, &t1350_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2257, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t76_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8598_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8598, &t1350_TI, &t76_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 2258, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5804_MI = 
{
	"get_Count", (methodPointerType)&m5804, &t1350_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 15, 0, false, false, 2259, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8599_MI = 
{
	"get_IsSynchronized", (methodPointerType)&m8599, &t1350_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 16, 0, false, false, 2260, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8600_MI = 
{
	"get_SyncRoot", (methodPointerType)&m8600, &t1350_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 17, 0, false, false, 2261, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8601_MI = 
{
	"get_IsFixedSize", (methodPointerType)&m8601, &t1350_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 18, 0, false, false, 2262, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8602_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m8602, &t1350_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 19, 0, false, false, 2263, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1350_m8603_ParameterInfos[] = 
{
	{"key", 0, 134220731, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8603_MI = 
{
	"get_Item", (methodPointerType)&m8603, &t1350_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1350_m8603_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 20, 1, false, false, 2264, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1350_m8604_ParameterInfos[] = 
{
	{"key", 0, 134220732, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"value", 1, 134220733, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8604_MI = 
{
	"set_Item", (methodPointerType)&m8604, &t1350_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1350_m8604_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 21, 2, false, false, 2265, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8605_MI = 
{
	"get_Capacity", (methodPointerType)&m8605, &t1350_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 22, 0, false, false, 2266, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1350_m8606_ParameterInfos[] = 
{
	{"value", 0, 134220734, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8606_MI = 
{
	"set_Capacity", (methodPointerType)&m8606, &t1350_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1350_m8606_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 23, 1, false, false, 2267, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1350_m5802_ParameterInfos[] = 
{
	{"key", 0, 134220735, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"value", 1, 134220736, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5802_MI = 
{
	"Add", (methodPointerType)&m5802, &t1350_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1350_m5802_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 24, 2, false, false, 2268, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1350_m8607_ParameterInfos[] = 
{
	{"key", 0, 134220737, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8607_MI = 
{
	"Contains", (methodPointerType)&m8607, &t1350_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1350_m8607_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 1, false, false, 2269, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1167_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8608_MI = 
{
	"GetEnumerator", (methodPointerType)&m8608, &t1350_TI, &t1167_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 26, 0, false, false, 2270, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1350_m8609_ParameterInfos[] = 
{
	{"key", 0, 134220738, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8609_MI = 
{
	"Remove", (methodPointerType)&m8609, &t1350_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1350_m8609_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 27, 1, false, false, 2271, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1350_m8610_ParameterInfos[] = 
{
	{"array", 0, 134220739, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"arrayIndex", 1, 134220740, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8610_MI = 
{
	"CopyTo", (methodPointerType)&m8610, &t1350_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1350_m8610_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 28, 2, false, false, 2272, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1350_m8611_ParameterInfos[] = 
{
	{"index", 0, 134220741, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8611_MI = 
{
	"RemoveAt", (methodPointerType)&m8611, &t1350_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1350_m8611_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 29, 1, false, false, 2273, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1350_m8612_ParameterInfos[] = 
{
	{"key", 0, 134220742, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8612_MI = 
{
	"IndexOfKey", (methodPointerType)&m8612, &t1350_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1350_m8612_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 30, 1, false, false, 2274, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1350_m5801_ParameterInfos[] = 
{
	{"key", 0, 134220743, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5801_MI = 
{
	"ContainsKey", (methodPointerType)&m5801, &t1350_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1350_m5801_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 31, 1, false, false, 2275, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1350_m5803_ParameterInfos[] = 
{
	{"index", 0, 134220744, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5803_MI = 
{
	"GetByIndex", (methodPointerType)&m5803, &t1350_TI, &t9_0_0_0, RuntimeInvoker_t9_t125, t1350_m5803_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 32, 1, false, false, 2276, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1350_m8613_ParameterInfos[] = 
{
	{"n", 0, 134220745, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"free", 1, 134220746, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8613_MI = 
{
	"EnsureCapacity", (methodPointerType)&m8613, &t1350_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t125, t1350_m8613_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2277, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1350_m8614_ParameterInfos[] = 
{
	{"key", 0, 134220747, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"value", 1, 134220748, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"overwrite", 2, 134220749, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8614_MI = 
{
	"PutImpl", (methodPointerType)&m8614, &t1350_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1350_m8614_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2278, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1350_m8615_ParameterInfos[] = 
{
	{"key", 0, 134220750, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8615_MI = 
{
	"GetImpl", (methodPointerType)&m8615, &t1350_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1350_m8615_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2279, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1350_m8616_ParameterInfos[] = 
{
	{"capacity", 0, 134220751, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"forceSize", 1, 134220752, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8616_MI = 
{
	"InitTable", (methodPointerType)&m8616, &t1350_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t1350_m8616_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2280, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1350_m8617_ParameterInfos[] = 
{
	{"key", 0, 134220753, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8617_MI = 
{
	"Find", (methodPointerType)&m8617, &t1350_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1350_m8617_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2281, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1350_MIs[] =
{
	&m8595_MI,
	&m5800_MI,
	&m8596_MI,
	&m8597_MI,
	&m8598_MI,
	&m5804_MI,
	&m8599_MI,
	&m8600_MI,
	&m8601_MI,
	&m8602_MI,
	&m8603_MI,
	&m8604_MI,
	&m8605_MI,
	&m8606_MI,
	&m5802_MI,
	&m8607_MI,
	&m8608_MI,
	&m8609_MI,
	&m8610_MI,
	&m8611_MI,
	&m8612_MI,
	&m5801_MI,
	&m5803_MI,
	&m8613_MI,
	&m8614_MI,
	&m8615_MI,
	&m8616_MI,
	&m8617_MI,
	NULL
};
extern Il2CppType t125_0_0_49;
FieldInfo t1350_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t125_0_0_49, &t1350_TI, offsetof(t1350_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1350_f1_FieldInfo = 
{
	"inUse", &t125_0_0_1, &t1350_TI, offsetof(t1350, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1350_f2_FieldInfo = 
{
	"modificationCount", &t125_0_0_1, &t1350_TI, offsetof(t1350, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1696_0_0_1;
FieldInfo t1350_f3_FieldInfo = 
{
	"table", &t1696_0_0_1, &t1350_TI, offsetof(t1350, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1171_0_0_1;
FieldInfo t1350_f4_FieldInfo = 
{
	"comparer", &t1171_0_0_1, &t1350_TI, offsetof(t1350, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1350_f5_FieldInfo = 
{
	"defaultCapacity", &t125_0_0_1, &t1350_TI, offsetof(t1350, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1350_FIs[] =
{
	&t1350_f0_FieldInfo,
	&t1350_f1_FieldInfo,
	&t1350_f2_FieldInfo,
	&t1350_f3_FieldInfo,
	&t1350_f4_FieldInfo,
	&t1350_f5_FieldInfo,
	NULL
};
extern MethodInfo m5804_MI;
static PropertyInfo t1350____Count_PropertyInfo = 
{
	&t1350_TI, "Count", &m5804_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8599_MI;
static PropertyInfo t1350____IsSynchronized_PropertyInfo = 
{
	&t1350_TI, "IsSynchronized", &m8599_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8600_MI;
static PropertyInfo t1350____SyncRoot_PropertyInfo = 
{
	&t1350_TI, "SyncRoot", &m8600_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8601_MI;
static PropertyInfo t1350____IsFixedSize_PropertyInfo = 
{
	&t1350_TI, "IsFixedSize", &m8601_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8602_MI;
static PropertyInfo t1350____IsReadOnly_PropertyInfo = 
{
	&t1350_TI, "IsReadOnly", &m8602_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8603_MI;
extern MethodInfo m8604_MI;
static PropertyInfo t1350____Item_PropertyInfo = 
{
	&t1350_TI, "Item", &m8603_MI, &m8604_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8605_MI;
extern MethodInfo m8606_MI;
static PropertyInfo t1350____Capacity_PropertyInfo = 
{
	&t1350_TI, "Capacity", &m8605_MI, &m8606_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1350_PIs[] =
{
	&t1350____Count_PropertyInfo,
	&t1350____IsSynchronized_PropertyInfo,
	&t1350____SyncRoot_PropertyInfo,
	&t1350____IsFixedSize_PropertyInfo,
	&t1350____IsReadOnly_PropertyInfo,
	&t1350____Item_PropertyInfo,
	&t1350____Capacity_PropertyInfo,
	NULL
};
static const Il2CppType* t1350_TI__nestedTypes[3] =
{
	&t1693_0_0_0,
	&t1694_0_0_0,
	&t1695_0_0_0,
};
extern MethodInfo m8598_MI;
extern MethodInfo m8610_MI;
extern MethodInfo m5802_MI;
extern MethodInfo m8607_MI;
extern MethodInfo m8608_MI;
extern MethodInfo m8609_MI;
extern MethodInfo m8611_MI;
extern MethodInfo m8612_MI;
extern MethodInfo m5801_MI;
extern MethodInfo m5803_MI;
static Il2CppMethodReference t1350_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8598_MI,
	&m5804_MI,
	&m8599_MI,
	&m8600_MI,
	&m8610_MI,
	&m8603_MI,
	&m8604_MI,
	&m5802_MI,
	&m8607_MI,
	&m8608_MI,
	&m8609_MI,
	&m5804_MI,
	&m8599_MI,
	&m8600_MI,
	&m8601_MI,
	&m8602_MI,
	&m8603_MI,
	&m8604_MI,
	&m8605_MI,
	&m8606_MI,
	&m5802_MI,
	&m8607_MI,
	&m8608_MI,
	&m8609_MI,
	&m8610_MI,
	&m8611_MI,
	&m8612_MI,
	&m5801_MI,
	&m5803_MI,
};
static bool t1350_VTIGM[] =
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
static const Il2CppType* t1350_ITIs[] = 
{
	&t672_0_0_0,
	&t629_0_0_0,
	&t1004_0_0_0,
	&t1166_0_0_0,
};
static Il2CppInterfaceOffsetPair t1350_IOs[] = 
{
	{ &t672_0_0_0, 4},
	{ &t629_0_0_0, 5},
	{ &t1004_0_0_0, 5},
	{ &t1166_0_0_0, 9},
};
void t1350_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t673 * tmp;
		tmp = (t673 *)il2cpp_codegen_object_new (&t673_TI);
		m3143(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m3143_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1701 * tmp;
		tmp = (t1701 *)il2cpp_codegen_object_new (&t1701_TI);
		m8622(tmp, il2cpp_codegen_string_new_wrapper("Count={Count}"), &m8622_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1350__CustomAttributeCache = {
3,
NULL,
&t1350_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1350_1_0_0;
struct t1350;
extern CustomAttributesCache t1350__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1350_DM = 
{
	NULL, t1350_TI__nestedTypes, t1350_ITIs, t1350_IOs, &t9_0_0_0, t1350_VT, t1350_VTIGM, NULL};
TypeInfo t1350_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SortedList", "System.Collections", t1350_MIs, t1350_PIs, t1350_FIs, NULL, &t1350_TI, NULL, &t1350__CustomAttributeCache, &t1350_0_0_0, &t1350_1_0_0, &t1350_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1350), sizeof (t1350), 0, -1, sizeof(t1350_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 28, 7, 6, 0, 3, 33, 4, 4};
#include "t1697.h"
// Metadata Definition System.Collections.Stack/Enumerator
extern TypeInfo t1697_TI;
#include "t1697MD.h"
extern Il2CppType t884_0_0_0;
extern Il2CppType t884_0_0_0;
static ParameterInfo t1697_m8618_ParameterInfos[] = 
{
	{"s", 0, 134220760, &EmptyCustomAttributesCache, &t884_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8618_MI = 
{
	".ctor", (methodPointerType)&m8618, &t1697_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1697_m8618_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2301, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8619_MI = 
{
	"get_Current", (methodPointerType)&m8619, &t1697_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 2302, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8620_MI = 
{
	"MoveNext", (methodPointerType)&m8620, &t1697_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2303, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1697_MIs[] =
{
	&m8618_MI,
	&m8619_MI,
	&m8620_MI,
	NULL
};
extern Il2CppType t884_0_0_1;
FieldInfo t1697_f0_FieldInfo = 
{
	"stack", &t884_0_0_1, &t1697_TI, offsetof(t1697, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1697_f1_FieldInfo = 
{
	"modCount", &t125_0_0_1, &t1697_TI, offsetof(t1697, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1697_f2_FieldInfo = 
{
	"current", &t125_0_0_1, &t1697_TI, offsetof(t1697, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1697_FIs[] =
{
	&t1697_f0_FieldInfo,
	&t1697_f1_FieldInfo,
	&t1697_f2_FieldInfo,
	NULL
};
extern MethodInfo m8619_MI;
static PropertyInfo t1697____Current_PropertyInfo = 
{
	&t1697_TI, "Current", &m8619_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1697_PIs[] =
{
	&t1697____Current_PropertyInfo,
	NULL
};
extern MethodInfo m8620_MI;
static Il2CppMethodReference t1697_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8619_MI,
	&m8620_MI,
	&m8619_MI,
	&m8620_MI,
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
};
static const Il2CppType* t1697_ITIs[] = 
{
	&t76_0_0_0,
	&t629_0_0_0,
};
static Il2CppInterfaceOffsetPair t1697_IOs[] = 
{
	{ &t76_0_0_0, 4},
	{ &t629_0_0_0, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1697_0_0_0;
extern Il2CppType t1697_1_0_0;
extern TypeInfo t884_TI;
struct t1697;
const Il2CppTypeDefinitionMetadata t1697_DM = 
{
	&t884_0_0_0, NULL, t1697_ITIs, t1697_IOs, &t9_0_0_0, t1697_VT, t1697_VTIGM, NULL};
TypeInfo t1697_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1697_MIs, t1697_PIs, t1697_FIs, NULL, &t1697_TI, NULL, &EmptyCustomAttributesCache, &t1697_0_0_0, &t1697_1_0_0, &t1697_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1697), sizeof (t1697), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 1, 3, 0, 0, 8, 2, 2};
#include "t884.h"
// Metadata Definition System.Collections.Stack
#include "t884MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m4536_MI = 
{
	".ctor", (methodPointerType)&m4536, &t884_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2290, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t884_m8621_ParameterInfos[] = 
{
	{"ncapacity", 0, 134220756, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8621_MI = 
{
	"Resize", (methodPointerType)&m8621, &t884_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t884_m8621_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2291, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4706_MI = 
{
	"get_Count", (methodPointerType)&m4706, &t884_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 2292, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m4707_MI = 
{
	"get_IsSynchronized", (methodPointerType)&m4707, &t884_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 10, 0, false, false, 2293, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4708_MI = 
{
	"get_SyncRoot", (methodPointerType)&m4708, &t884_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 2294, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m4278_MI = 
{
	"Clear", (methodPointerType)&m4278, &t884_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 12, 0, false, false, 2295, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t884_m4709_ParameterInfos[] = 
{
	{"array", 0, 134220757, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"index", 1, 134220758, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4709_MI = 
{
	"CopyTo", (methodPointerType)&m4709, &t884_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t884_m4709_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 2, false, false, 2296, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t76_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4705_MI = 
{
	"GetEnumerator", (methodPointerType)&m4705, &t884_TI, &t76_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 14, 0, false, false, 2297, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4710_MI = 
{
	"Peek", (methodPointerType)&m4710, &t884_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 15, 0, false, false, 2298, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4711_MI = 
{
	"Pop", (methodPointerType)&m4711, &t884_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 16, 0, false, false, 2299, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t884_m4274_ParameterInfos[] = 
{
	{"obj", 0, 134220759, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4274_MI = 
{
	"Push", (methodPointerType)&m4274, &t884_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t884_m4274_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 17, 1, false, false, 2300, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t884_MIs[] =
{
	&m4536_MI,
	&m8621_MI,
	&m4706_MI,
	&m4707_MI,
	&m4708_MI,
	&m4278_MI,
	&m4709_MI,
	&m4705_MI,
	&m4710_MI,
	&m4711_MI,
	&m4274_MI,
	NULL
};
extern Il2CppType t158_0_0_1;
FieldInfo t884_f0_FieldInfo = 
{
	"contents", &t158_0_0_1, &t884_TI, offsetof(t884, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t884_f1_FieldInfo = 
{
	"current", &t125_0_0_1, &t884_TI, offsetof(t884, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t884_f2_FieldInfo = 
{
	"count", &t125_0_0_1, &t884_TI, offsetof(t884, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t884_f3_FieldInfo = 
{
	"capacity", &t125_0_0_1, &t884_TI, offsetof(t884, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t884_f4_FieldInfo = 
{
	"modCount", &t125_0_0_1, &t884_TI, offsetof(t884, f4), &EmptyCustomAttributesCache};
static FieldInfo* t884_FIs[] =
{
	&t884_f0_FieldInfo,
	&t884_f1_FieldInfo,
	&t884_f2_FieldInfo,
	&t884_f3_FieldInfo,
	&t884_f4_FieldInfo,
	NULL
};
extern MethodInfo m4706_MI;
static PropertyInfo t884____Count_PropertyInfo = 
{
	&t884_TI, "Count", &m4706_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m4707_MI;
static PropertyInfo t884____IsSynchronized_PropertyInfo = 
{
	&t884_TI, "IsSynchronized", &m4707_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m4708_MI;
static PropertyInfo t884____SyncRoot_PropertyInfo = 
{
	&t884_TI, "SyncRoot", &m4708_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t884_PIs[] =
{
	&t884____Count_PropertyInfo,
	&t884____IsSynchronized_PropertyInfo,
	&t884____SyncRoot_PropertyInfo,
	NULL
};
static const Il2CppType* t884_TI__nestedTypes[1] =
{
	&t1697_0_0_0,
};
extern MethodInfo m4705_MI;
extern MethodInfo m4709_MI;
extern MethodInfo m4278_MI;
extern MethodInfo m4710_MI;
extern MethodInfo m4711_MI;
extern MethodInfo m4274_MI;
static Il2CppMethodReference t884_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m4705_MI,
	&m4706_MI,
	&m4707_MI,
	&m4708_MI,
	&m4709_MI,
	&m4706_MI,
	&m4707_MI,
	&m4708_MI,
	&m4278_MI,
	&m4709_MI,
	&m4705_MI,
	&m4710_MI,
	&m4711_MI,
	&m4274_MI,
};
static bool t884_VTIGM[] =
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
static const Il2CppType* t884_ITIs[] = 
{
	&t672_0_0_0,
	&t629_0_0_0,
	&t1004_0_0_0,
};
static Il2CppInterfaceOffsetPair t884_IOs[] = 
{
	{ &t672_0_0_0, 4},
	{ &t629_0_0_0, 5},
	{ &t1004_0_0_0, 5},
};
void t884_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1703 * tmp;
		tmp = (t1703 *)il2cpp_codegen_object_new (&t1703_TI);
		m8625(tmp, il2cpp_codegen_type_get_object(&t1682_0_0_0), &m8625_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1701 * tmp;
		tmp = (t1701 *)il2cpp_codegen_object_new (&t1701_TI);
		m8622(tmp, il2cpp_codegen_string_new_wrapper("Count={Count}"), &m8622_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t884__CustomAttributeCache = {
3,
NULL,
&t884_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t884_1_0_0;
struct t884;
extern CustomAttributesCache t884__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t884_DM = 
{
	NULL, t884_TI__nestedTypes, t884_ITIs, t884_IOs, &t9_0_0_0, t884_VT, t884_VTIGM, NULL};
TypeInfo t884_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Stack", "System.Collections", t884_MIs, t884_PIs, t884_FIs, NULL, &t884_TI, NULL, &t884__CustomAttributeCache, &t884_0_0_0, &t884_1_0_0, &t884_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t884), sizeof (t884), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 11, 3, 5, 0, 1, 18, 3, 3};
#include "t1698.h"
// Metadata Definition System.Configuration.Assemblies.AssemblyHashAlgorithm
extern TypeInfo t1698_TI;
#include "t1698MD.h"
static MethodInfo* t1698_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1698_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1698_TI, offsetof(t1698, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1698_0_0_32854;
FieldInfo t1698_f2_FieldInfo = 
{
	"None", &t1698_0_0_32854, &t1698_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1698_0_0_32854;
FieldInfo t1698_f3_FieldInfo = 
{
	"MD5", &t1698_0_0_32854, &t1698_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1698_0_0_32854;
FieldInfo t1698_f4_FieldInfo = 
{
	"SHA1", &t1698_0_0_32854, &t1698_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1698_FIs[] =
{
	&t1698_f1_FieldInfo,
	&t1698_f2_FieldInfo,
	&t1698_f3_FieldInfo,
	&t1698_f4_FieldInfo,
	NULL
};
static const int32_t t1698_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1698_f2_DefaultValue = 
{
	&t1698_f2_FieldInfo, { (char*)&t1698_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1698_f3_DefaultValueData = 32771;
static Il2CppFieldDefaultValueEntry t1698_f3_DefaultValue = 
{
	&t1698_f3_FieldInfo, { (char*)&t1698_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1698_f4_DefaultValueData = 32772;
static Il2CppFieldDefaultValueEntry t1698_f4_DefaultValue = 
{
	&t1698_f4_FieldInfo, { (char*)&t1698_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1698_FDVs[] = 
{
	&t1698_f2_DefaultValue,
	&t1698_f3_DefaultValue,
	&t1698_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t1698_VT[] =
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
static bool t1698_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1698_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1698_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
extern CustomAttributesCache t1698__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1698_DM = 
{
	NULL, NULL, NULL, t1698_IOs, &t8_0_0_0, t1698_VT, t1698_VTIGM, NULL};
TypeInfo t1698_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyHashAlgorithm", "System.Configuration.Assemblies", t1698_MIs, NULL, t1698_FIs, NULL, &t125_TI, NULL, &t1698__CustomAttributeCache, &t1698_0_0_0, &t1698_1_0_0, &t1698_DM, NULL, NULL, NULL, t1698_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1698)+ sizeof (Il2CppObject), sizeof (t1698)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1699.h"
// Metadata Definition System.Configuration.Assemblies.AssemblyVersionCompatibility
extern TypeInfo t1699_TI;
#include "t1699MD.h"
static MethodInfo* t1699_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1699_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1699_TI, offsetof(t1699, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1699_0_0_32854;
FieldInfo t1699_f2_FieldInfo = 
{
	"SameMachine", &t1699_0_0_32854, &t1699_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1699_0_0_32854;
FieldInfo t1699_f3_FieldInfo = 
{
	"SameProcess", &t1699_0_0_32854, &t1699_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1699_0_0_32854;
FieldInfo t1699_f4_FieldInfo = 
{
	"SameDomain", &t1699_0_0_32854, &t1699_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1699_FIs[] =
{
	&t1699_f1_FieldInfo,
	&t1699_f2_FieldInfo,
	&t1699_f3_FieldInfo,
	&t1699_f4_FieldInfo,
	NULL
};
static const int32_t t1699_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1699_f2_DefaultValue = 
{
	&t1699_f2_FieldInfo, { (char*)&t1699_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1699_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1699_f3_DefaultValue = 
{
	&t1699_f3_FieldInfo, { (char*)&t1699_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1699_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1699_f4_DefaultValue = 
{
	&t1699_f4_FieldInfo, { (char*)&t1699_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1699_FDVs[] = 
{
	&t1699_f2_DefaultValue,
	&t1699_f3_DefaultValue,
	&t1699_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t1699_VT[] =
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
	false,
	false,
	false,
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
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1699_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
extern CustomAttributesCache t1699__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1699_DM = 
{
	NULL, NULL, NULL, t1699_IOs, &t8_0_0_0, t1699_VT, t1699_VTIGM, NULL};
TypeInfo t1699_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyVersionCompatibility", "System.Configuration.Assemblies", t1699_MIs, NULL, t1699_FIs, NULL, &t125_TI, NULL, &t1699__CustomAttributeCache, &t1699_0_0_0, &t1699_1_0_0, &t1699_DM, NULL, NULL, NULL, t1699_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1699)+ sizeof (Il2CppObject), sizeof (t1699)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1012.h"
// Metadata Definition System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
extern TypeInfo t1012_TI;
#include "t1012MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1012_m4610_ParameterInfos[] = 
{
	{"category", 0, 134220761, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"checkId", 1, 134220762, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4610_MI = 
{
	".ctor", (methodPointerType)&m4610, &t1012_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1012_m4610_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2304, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1012_m4611_ParameterInfos[] = 
{
	{"value", 0, 134220763, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4611_MI = 
{
	"set_Justification", (methodPointerType)&m4611, &t1012_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1012_m4611_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 2305, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1012_MIs[] =
{
	&m4610_MI,
	&m4611_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1012_f0_FieldInfo = 
{
	"category", &t2_0_0_1, &t1012_TI, offsetof(t1012, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1012_f1_FieldInfo = 
{
	"checkId", &t2_0_0_1, &t1012_TI, offsetof(t1012, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1012_f2_FieldInfo = 
{
	"justification", &t2_0_0_1, &t1012_TI, offsetof(t1012, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1012_FIs[] =
{
	&t1012_f0_FieldInfo,
	&t1012_f1_FieldInfo,
	&t1012_f2_FieldInfo,
	NULL
};
extern MethodInfo m4611_MI;
static PropertyInfo t1012____Justification_PropertyInfo = 
{
	&t1012_TI, "Justification", NULL, &m4611_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1012_PIs[] =
{
	&t1012____Justification_PropertyInfo,
	NULL
};
extern MethodInfo m4541_MI;
extern MethodInfo m4535_MI;
static Il2CppMethodReference t1012_VT[] =
{
	&m4541_MI,
	&m646_MI,
	&m4535_MI,
	&m673_MI,
};
static bool t1012_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppType t960_0_0_0;
static Il2CppInterfaceOffsetPair t1012_IOs[] = 
{
	{ &t960_0_0_0, 4},
};
extern TypeInfo t1587_TI;
#include "t1587.h"
#include "t1587MD.h"
extern MethodInfo m7872_MI;
extern TypeInfo t1030_TI;
#include "t1030.h"
#include "t1030MD.h"
extern MethodInfo m4647_MI;
extern MethodInfo m4648_MI;
extern MethodInfo m4649_MI;
void t1012_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1587 * tmp;
		tmp = (t1587 *)il2cpp_codegen_object_new (&t1587_TI);
		m7872(tmp, il2cpp_codegen_string_new_wrapper("CODE_ANALYSIS"), &m7872_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1030 * tmp;
		tmp = (t1030 *)il2cpp_codegen_object_new (&t1030_TI);
		m4647(tmp, 32767, &m4647_MI);
		m4648(tmp, false, &m4648_MI);
		m4649(tmp, true, &m4649_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1012__CustomAttributeCache = {
2,
NULL,
&t1012_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1012_0_0_0;
extern Il2CppType t1012_1_0_0;
extern Il2CppType t732_0_0_0;
struct t1012;
extern CustomAttributesCache t1012__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1012_DM = 
{
	NULL, NULL, NULL, t1012_IOs, &t732_0_0_0, t1012_VT, t1012_VTIGM, NULL};
TypeInfo t1012_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SuppressMessageAttribute", "System.Diagnostics.CodeAnalysis", t1012_MIs, t1012_PIs, t1012_FIs, NULL, &t1012_TI, NULL, &t1012__CustomAttributeCache, &t1012_0_0_0, &t1012_1_0_0, &t1012_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1012), sizeof (t1012), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 3, 0, 0, 4, 0, 1};
// Metadata Definition System.Diagnostics.SymbolStore.ISymbolWriter
extern TypeInfo t1790_TI;
extern Il2CppType t58_0_0_0;
extern Il2CppType t58_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1790_m12054_ParameterInfos[] = 
{
	{"emitter", 0, 134220764, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"filename", 1, 134220765, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"fFullBuild", 2, 134220766, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t58_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m12054_MI = 
{
	"Initialize", NULL, &t1790_TI, &t122_0_0_0, RuntimeInvoker_t122_t58_t9_t186, t1790_m12054_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 3, false, false, 2306, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1790_MIs[] =
{
	&m12054_MI,
	NULL
};
void t1790_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1790__CustomAttributeCache = {
1,
NULL,
&t1790_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1790_0_0_0;
extern Il2CppType t1790_1_0_0;
struct t1790;
extern CustomAttributesCache t1790__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1790_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1790_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISymbolWriter", "System.Diagnostics.SymbolStore", t1790_MIs, NULL, NULL, NULL, &t1790_TI, NULL, &t1790__CustomAttributeCache, &t1790_0_0_0, &t1790_1_0_0, &t1790_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1700.h"
// Metadata Definition System.Diagnostics.DebuggableAttribute/DebuggingModes
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
	"None", &t1700_0_0_32854, &t1700_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1700_0_0_32854;
FieldInfo t1700_f3_FieldInfo = 
{
	"Default", &t1700_0_0_32854, &t1700_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1700_0_0_32854;
FieldInfo t1700_f4_FieldInfo = 
{
	"IgnoreSymbolStoreSequencePoints", &t1700_0_0_32854, &t1700_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1700_0_0_32854;
FieldInfo t1700_f5_FieldInfo = 
{
	"EnableEditAndContinue", &t1700_0_0_32854, &t1700_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1700_0_0_32854;
FieldInfo t1700_f6_FieldInfo = 
{
	"DisableOptimizations", &t1700_0_0_32854, &t1700_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1700_FIs[] =
{
	&t1700_f1_FieldInfo,
	&t1700_f2_FieldInfo,
	&t1700_f3_FieldInfo,
	&t1700_f4_FieldInfo,
	&t1700_f5_FieldInfo,
	&t1700_f6_FieldInfo,
	NULL
};
static const int32_t t1700_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1700_f2_DefaultValue = 
{
	&t1700_f2_FieldInfo, { (char*)&t1700_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1700_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1700_f3_DefaultValue = 
{
	&t1700_f3_FieldInfo, { (char*)&t1700_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1700_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1700_f4_DefaultValue = 
{
	&t1700_f4_FieldInfo, { (char*)&t1700_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1700_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1700_f5_DefaultValue = 
{
	&t1700_f5_FieldInfo, { (char*)&t1700_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1700_f6_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t1700_f6_DefaultValue = 
{
	&t1700_f6_FieldInfo, { (char*)&t1700_f6_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1700_FDVs[] = 
{
	&t1700_f2_DefaultValue,
	&t1700_f3_DefaultValue,
	&t1700_f4_DefaultValue,
	&t1700_f5_DefaultValue,
	&t1700_f6_DefaultValue,
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
extern TypeInfo t622_TI;
#include "t622.h"
#include "t622MD.h"
extern MethodInfo m3031_MI;
void t1700_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t622 * tmp;
		tmp = (t622 *)il2cpp_codegen_object_new (&t622_TI);
		m3031(tmp, &m3031_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1700__CustomAttributeCache = {
2,
NULL,
&t1700_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1700_0_0_0;
extern Il2CppType t1700_1_0_0;
extern TypeInfo t1154_TI;
extern Il2CppType t1154_0_0_0;
extern CustomAttributesCache t1700__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1700_DM = 
{
	&t1154_0_0_0, NULL, NULL, t1700_IOs, &t8_0_0_0, t1700_VT, t1700_VTIGM, NULL};
TypeInfo t1700_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DebuggingModes", "", t1700_MIs, NULL, t1700_FIs, NULL, &t125_TI, NULL, &t1700__CustomAttributeCache, &t1700_0_0_0, &t1700_1_0_0, &t1700_DM, NULL, NULL, NULL, t1700_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1700)+ sizeof (Il2CppObject), sizeof (t1700)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 258, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1154.h"
// Metadata Definition System.Diagnostics.DebuggableAttribute
#include "t1154MD.h"
extern Il2CppType t1700_0_0_0;
static ParameterInfo t1154_m4839_ParameterInfos[] = 
{
	{"modes", 0, 134220767, &EmptyCustomAttributesCache, &t1700_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4839_MI = 
{
	".ctor", (methodPointerType)&m4839, &t1154_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1154_m4839_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2307, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1154_MIs[] =
{
	&m4839_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t1154_f0_FieldInfo = 
{
	"JITTrackingEnabledFlag", &t124_0_0_1, &t1154_TI, offsetof(t1154, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1154_f1_FieldInfo = 
{
	"JITOptimizerDisabledFlag", &t124_0_0_1, &t1154_TI, offsetof(t1154, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1700_0_0_1;
FieldInfo t1154_f2_FieldInfo = 
{
	"debuggingModes", &t1700_0_0_1, &t1154_TI, offsetof(t1154, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1154_FIs[] =
{
	&t1154_f0_FieldInfo,
	&t1154_f1_FieldInfo,
	&t1154_f2_FieldInfo,
	NULL
};
static const Il2CppType* t1154_TI__nestedTypes[1] =
{
	&t1700_0_0_0,
};
static Il2CppMethodReference t1154_VT[] =
{
	&m4541_MI,
	&m646_MI,
	&m4535_MI,
	&m673_MI,
};
static bool t1154_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1154_IOs[] = 
{
	{ &t960_0_0_0, 4},
};
void t1154_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1030 * tmp;
		tmp = (t1030 *)il2cpp_codegen_object_new (&t1030_TI);
		m4647(tmp, 3, &m4647_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1154__CustomAttributeCache = {
2,
NULL,
&t1154_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1154_1_0_0;
struct t1154;
extern CustomAttributesCache t1154__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1154_DM = 
{
	NULL, t1154_TI__nestedTypes, NULL, t1154_IOs, &t732_0_0_0, t1154_VT, t1154_VTIGM, NULL};
TypeInfo t1154_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DebuggableAttribute", "System.Diagnostics", t1154_MIs, NULL, t1154_FIs, NULL, &t1154_TI, NULL, &t1154__CustomAttributeCache, &t1154_0_0_0, &t1154_1_0_0, &t1154_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1154), sizeof (t1154), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 3, 0, 1, 4, 0, 1};
// Metadata Definition System.Diagnostics.DebuggerDisplayAttribute
extern Il2CppType t2_0_0_0;
static ParameterInfo t1701_m8622_ParameterInfos[] = 
{
	{"value", 0, 134220768, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8622_MI = 
{
	".ctor", (methodPointerType)&m8622, &t1701_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1701_m8622_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2308, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1701_m8623_ParameterInfos[] = 
{
	{"value", 0, 134220769, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8623_MI = 
{
	"set_Name", (methodPointerType)&m8623, &t1701_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1701_m8623_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 2309, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1701_MIs[] =
{
	&m8622_MI,
	&m8623_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1701_f0_FieldInfo = 
{
	"value", &t2_0_0_1, &t1701_TI, offsetof(t1701, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1701_f1_FieldInfo = 
{
	"type", &t2_0_0_1, &t1701_TI, offsetof(t1701, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1701_f2_FieldInfo = 
{
	"name", &t2_0_0_1, &t1701_TI, offsetof(t1701, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1701_FIs[] =
{
	&t1701_f0_FieldInfo,
	&t1701_f1_FieldInfo,
	&t1701_f2_FieldInfo,
	NULL
};
extern MethodInfo m8623_MI;
static PropertyInfo t1701____Name_PropertyInfo = 
{
	&t1701_TI, "Name", NULL, &m8623_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1701_PIs[] =
{
	&t1701____Name_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1701_VT[] =
{
	&m4541_MI,
	&m646_MI,
	&m4535_MI,
	&m673_MI,
};
static bool t1701_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1701_IOs[] = 
{
	{ &t960_0_0_0, 4},
};
void t1701_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1030 * tmp;
		tmp = (t1030 *)il2cpp_codegen_object_new (&t1030_TI);
		m4647(tmp, 4509, &m4647_MI);
		m4649(tmp, true, &m4649_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1701__CustomAttributeCache = {
2,
NULL,
&t1701_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1701_0_0_0;
extern Il2CppType t1701_1_0_0;
struct t1701;
extern CustomAttributesCache t1701__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1701_DM = 
{
	NULL, NULL, NULL, t1701_IOs, &t732_0_0_0, t1701_VT, t1701_VTIGM, NULL};
TypeInfo t1701_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DebuggerDisplayAttribute", "System.Diagnostics", t1701_MIs, t1701_PIs, t1701_FIs, NULL, &t1701_TI, NULL, &t1701__CustomAttributeCache, &t1701_0_0_0, &t1701_1_0_0, &t1701_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1701), sizeof (t1701), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 3, 0, 0, 4, 0, 1};
#include "t1702.h"
// Metadata Definition System.Diagnostics.DebuggerStepThroughAttribute
extern TypeInfo t1702_TI;
#include "t1702MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8624_MI = 
{
	".ctor", (methodPointerType)&m8624, &t1702_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2310, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1702_MIs[] =
{
	&m8624_MI,
	NULL
};
static Il2CppMethodReference t1702_VT[] =
{
	&m4541_MI,
	&m646_MI,
	&m4535_MI,
	&m673_MI,
};
static bool t1702_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1702_IOs[] = 
{
	{ &t960_0_0_0, 4},
};
void t1702_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m4647(tmp, 108, &m4647_MI);
		m4648(tmp, false, &m4648_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1702__CustomAttributeCache = {
2,
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
	NULL, NULL, NULL, t1702_IOs, &t732_0_0_0, t1702_VT, t1702_VTIGM, NULL};
TypeInfo t1702_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DebuggerStepThroughAttribute", "System.Diagnostics", t1702_MIs, NULL, NULL, NULL, &t1702_TI, NULL, &t1702__CustomAttributeCache, &t1702_0_0_0, &t1702_1_0_0, &t1702_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1702), sizeof (t1702), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
// Metadata Definition System.Diagnostics.DebuggerTypeProxyAttribute
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1703_m8625_ParameterInfos[] = 
{
	{"type", 0, 134220770, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8625_MI = 
{
	".ctor", (methodPointerType)&m8625, &t1703_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1703_m8625_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2311, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1703_MIs[] =
{
	&m8625_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1703_f0_FieldInfo = 
{
	"proxy_type_name", &t2_0_0_1, &t1703_TI, offsetof(t1703, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1703_FIs[] =
{
	&t1703_f0_FieldInfo,
	NULL
};
static Il2CppMethodReference t1703_VT[] =
{
	&m4541_MI,
	&m646_MI,
	&m4535_MI,
	&m673_MI,
};
static bool t1703_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1703_IOs[] = 
{
	{ &t960_0_0_0, 4},
};
void t1703_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1030 * tmp;
		tmp = (t1030 *)il2cpp_codegen_object_new (&t1030_TI);
		m4647(tmp, 13, &m4647_MI);
		m4649(tmp, true, &m4649_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1703__CustomAttributeCache = {
2,
NULL,
&t1703_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1703_0_0_0;
extern Il2CppType t1703_1_0_0;
struct t1703;
extern CustomAttributesCache t1703__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1703_DM = 
{
	NULL, NULL, NULL, t1703_IOs, &t732_0_0_0, t1703_VT, t1703_VTIGM, NULL};
TypeInfo t1703_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DebuggerTypeProxyAttribute", "System.Diagnostics", t1703_MIs, NULL, t1703_FIs, NULL, &t1703_TI, NULL, &t1703__CustomAttributeCache, &t1703_0_0_0, &t1703_1_0_0, &t1703_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1703), sizeof (t1703), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t942.h"
// Metadata Definition System.Diagnostics.StackFrame
extern TypeInfo t942_TI;
#include "t942MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8626_MI = 
{
	".ctor", (methodPointerType)&m8626, &t942_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2312, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t942_m8627_ParameterInfos[] = 
{
	{"skipFrames", 0, 134220771, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 1, 134220772, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8627_MI = 
{
	".ctor", (methodPointerType)&m8627, &t942_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t942_m8627_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2313, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t920_1_0_2;
extern Il2CppType t920_1_0_0;
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_1_0_0;
extern Il2CppType t125_1_0_2;
extern Il2CppType t2_1_0_2;
extern Il2CppType t2_1_0_0;
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_1_0_2;
static ParameterInfo t942_m8628_ParameterInfos[] = 
{
	{"skip", 0, 134220773, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"needFileInfo", 1, 134220774, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"method", 2, 134220775, &EmptyCustomAttributesCache, &t920_1_0_2},
	{"iloffset", 3, 134220776, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"native_offset", 4, 134220777, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"file", 5, 134220778, &EmptyCustomAttributesCache, &t2_1_0_2},
	{"line", 6, 134220779, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"column", 7, 134220780, &EmptyCustomAttributesCache, &t125_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125_t186_t2591_t343_t343_t345_t343_t343 (MethodInfo* method, void* obj, void** args);
MethodInfo m8628_MI = 
{
	"get_frame_info", (methodPointerType)&m8628, &t942_TI, &t124_0_0_0, RuntimeInvoker_t124_t125_t186_t2591_t343_t343_t345_t343_t343, t942_m8628_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 8, false, false, 2314, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4497_MI = 
{
	"GetFileLineNumber", (methodPointerType)&m4497, &t942_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 4, 0, false, false, 2315, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4496_MI = 
{
	"GetFileName", (methodPointerType)&m4496, &t942_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 5, 0, false, false, 2316, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8629_MI = 
{
	"GetSecureFileName", (methodPointerType)&m8629, &t942_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2317, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8630_MI = 
{
	"GetILOffset", (methodPointerType)&m8630, &t942_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 2318, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t920_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4493_MI = 
{
	"GetMethod", (methodPointerType)&m4493, &t942_TI, &t920_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2319, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8631_MI = 
{
	"GetNativeOffset", (methodPointerType)&m8631, &t942_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 8, 0, false, false, 2320, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8632_MI = 
{
	"GetInternalMethodName", (methodPointerType)&m8632, &t942_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2321, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8633_MI = 
{
	"ToString", (methodPointerType)&m8633, &t942_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2322, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t942_MIs[] =
{
	&m8626_MI,
	&m8627_MI,
	&m8628_MI,
	&m4497_MI,
	&m4496_MI,
	&m8629_MI,
	&m8630_MI,
	&m4493_MI,
	&m8631_MI,
	&m8632_MI,
	&m8633_MI,
	NULL
};
extern Il2CppType t125_0_0_32854;
FieldInfo t942_f0_FieldInfo = 
{
	"OFFSET_UNKNOWN", &t125_0_0_32854, &t942_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t942_f1_FieldInfo = 
{
	"ilOffset", &t125_0_0_1, &t942_TI, offsetof(t942, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t942_f2_FieldInfo = 
{
	"nativeOffset", &t125_0_0_1, &t942_TI, offsetof(t942, f2), &EmptyCustomAttributesCache};
extern Il2CppType t920_0_0_1;
FieldInfo t942_f3_FieldInfo = 
{
	"methodBase", &t920_0_0_1, &t942_TI, offsetof(t942, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t942_f4_FieldInfo = 
{
	"fileName", &t2_0_0_1, &t942_TI, offsetof(t942, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t942_f5_FieldInfo = 
{
	"lineNumber", &t125_0_0_1, &t942_TI, offsetof(t942, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t942_f6_FieldInfo = 
{
	"columnNumber", &t125_0_0_1, &t942_TI, offsetof(t942, f6), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t942_f7_FieldInfo = 
{
	"internalMethodName", &t2_0_0_1, &t942_TI, offsetof(t942, f7), &EmptyCustomAttributesCache};
static FieldInfo* t942_FIs[] =
{
	&t942_f0_FieldInfo,
	&t942_f1_FieldInfo,
	&t942_f2_FieldInfo,
	&t942_f3_FieldInfo,
	&t942_f4_FieldInfo,
	&t942_f5_FieldInfo,
	&t942_f6_FieldInfo,
	&t942_f7_FieldInfo,
	NULL
};
static const int32_t t942_f0_DefaultValueData = -1;
static Il2CppFieldDefaultValueEntry t942_f0_DefaultValue = 
{
	&t942_f0_FieldInfo, { (char*)&t942_f0_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t942_FDVs[] = 
{
	&t942_f0_DefaultValue,
	NULL
};
extern MethodInfo m8633_MI;
extern MethodInfo m4497_MI;
extern MethodInfo m4496_MI;
extern MethodInfo m8630_MI;
extern MethodInfo m4493_MI;
extern MethodInfo m8631_MI;
static Il2CppMethodReference t942_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m8633_MI,
	&m4497_MI,
	&m4496_MI,
	&m8630_MI,
	&m4493_MI,
	&m8631_MI,
};
static bool t942_VTIGM[] =
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
extern TypeInfo t1598_TI;
#include "t1598.h"
#include "t1598MD.h"
extern MethodInfo m7891_MI;
void t942_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7891(tmp, il2cpp_codegen_string_new_wrapper("Serialized objects are not compatible with MS.NET"), &m7891_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t942__CustomAttributeCache = {
2,
NULL,
&t942_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t942_0_0_0;
extern Il2CppType t942_1_0_0;
struct t942;
extern CustomAttributesCache t942__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t942_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t942_VT, t942_VTIGM, NULL};
TypeInfo t942_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StackFrame", "System.Diagnostics", t942_MIs, NULL, t942_FIs, NULL, &t942_TI, NULL, &t942__CustomAttributeCache, &t942_0_0_0, &t942_1_0_0, &t942_DM, NULL, NULL, NULL, t942_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t942), sizeof (t942), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 11, 0, 8, 0, 0, 9, 0, 0};
#include "t862.h"
// Metadata Definition System.Diagnostics.StackTrace
extern TypeInfo t862_TI;
#include "t862MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8634_MI = 
{
	".ctor", (methodPointerType)&m8634, &t862_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2323, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t862_m4482_ParameterInfos[] = 
{
	{"skipFrames", 0, 134220781, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 1, 134220782, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m4482_MI = 
{
	".ctor", (methodPointerType)&m4482, &t862_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t862_m4482_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2324, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t138_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t862_m8635_ParameterInfos[] = 
{
	{"e", 0, 134220783, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"fNeedFileInfo", 1, 134220784, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8635_MI = 
{
	".ctor", (methodPointerType)&m8635, &t862_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t862_m8635_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2325, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t862_m8636_ParameterInfos[] = 
{
	{"e", 0, 134220785, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"skipFrames", 1, 134220786, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 2, 134220787, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8636_MI = 
{
	".ctor", (methodPointerType)&m8636, &t862_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t186, t862_m8636_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 2326, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t862_m8637_ParameterInfos[] = 
{
	{"e", 0, 134220788, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"skipFrames", 1, 134220789, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 2, 134220790, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"returnNativeFrames", 3, 134220791, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8637_MI = 
{
	".ctor", (methodPointerType)&m8637, &t862_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t186_t186, t862_m8637_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 2327, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t862_m8638_ParameterInfos[] = 
{
	{"skipFrames", 0, 134220792, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 1, 134220793, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8638_MI = 
{
	"init_frames", (methodPointerType)&m8638, &t862_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t862_m8638_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2328, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t862_m8639_ParameterInfos[] = 
{
	{"e", 0, 134220794, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"skipFrames", 1, 134220795, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"fNeedFileInfo", 2, 134220796, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1704_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8639_MI = 
{
	"get_trace", (methodPointerType)&m8639, &t862_TI, &t1704_0_0_0, RuntimeInvoker_t9_t9_t125_t186, t862_m8639_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 3, false, false, 2329, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4498_MI = 
{
	"get_FrameCount", (methodPointerType)&m4498, &t862_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 4, 0, false, false, 2330, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t862_m4492_ParameterInfos[] = 
{
	{"index", 0, 134220797, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t942_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4492_MI = 
{
	"GetFrame", (methodPointerType)&m4492, &t862_TI, &t942_0_0_0, RuntimeInvoker_t9_t125, t862_m4492_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 1, false, false, 2331, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8640_MI = 
{
	"ToString", (methodPointerType)&m8640, &t862_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2332, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t862_MIs[] =
{
	&m8634_MI,
	&m4482_MI,
	&m8635_MI,
	&m8636_MI,
	&m8637_MI,
	&m8638_MI,
	&m8639_MI,
	&m4498_MI,
	&m4492_MI,
	&m8640_MI,
	NULL
};
extern Il2CppType t125_0_0_32854;
FieldInfo t862_f0_FieldInfo = 
{
	"METHODS_TO_SKIP", &t125_0_0_32854, &t862_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1704_0_0_1;
FieldInfo t862_f1_FieldInfo = 
{
	"frames", &t1704_0_0_1, &t862_TI, offsetof(t862, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t862_f2_FieldInfo = 
{
	"debug_info", &t124_0_0_1, &t862_TI, offsetof(t862, f2), &EmptyCustomAttributesCache};
static FieldInfo* t862_FIs[] =
{
	&t862_f0_FieldInfo,
	&t862_f1_FieldInfo,
	&t862_f2_FieldInfo,
	NULL
};
static const int32_t t862_f0_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t862_f0_DefaultValue = 
{
	&t862_f0_FieldInfo, { (char*)&t862_f0_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t862_FDVs[] = 
{
	&t862_f0_DefaultValue,
	NULL
};
extern MethodInfo m4498_MI;
static PropertyInfo t862____FrameCount_PropertyInfo = 
{
	&t862_TI, "FrameCount", &m4498_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t862_PIs[] =
{
	&t862____FrameCount_PropertyInfo,
	NULL
};
extern MethodInfo m8640_MI;
extern MethodInfo m4492_MI;
static Il2CppMethodReference t862_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m8640_MI,
	&m4498_MI,
	&m4492_MI,
};
static bool t862_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
void t862_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7891(tmp, il2cpp_codegen_string_new_wrapper("Serialized objects are not compatible with .NET"), &m7891_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t862__CustomAttributeCache = {
2,
NULL,
&t862_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t862_0_0_0;
extern Il2CppType t862_1_0_0;
struct t862;
extern CustomAttributesCache t862__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t862_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t862_VT, t862_VTIGM, NULL};
TypeInfo t862_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StackTrace", "System.Diagnostics", t862_MIs, t862_PIs, t862_FIs, NULL, &t862_TI, NULL, &t862__CustomAttributeCache, &t862_0_0_0, &t862_1_0_0, &t862_DM, NULL, NULL, NULL, t862_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t862), sizeof (t862), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 1, 3, 0, 0, 6, 0, 0};
#include "t1705.h"
// Metadata Definition System.Globalization.Calendar
extern TypeInfo t1705_TI;
#include "t1705MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8641_MI = 
{
	".ctor", (methodPointerType)&m8641, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2333, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1101_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12044_MI = 
{
	"get_Eras", NULL, &t1705_TI, &t1101_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 4, 0, false, false, 2334, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8642_MI = 
{
	"CheckReadOnly", (methodPointerType)&m8642, &t1705_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2335, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t272_0_0_0;
extern Il2CppType t272_0_0_0;
static ParameterInfo t1705_m12180_ParameterInfos[] = 
{
	{"time", 0, 134220798, &EmptyCustomAttributesCache, &t272_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m12180_MI = 
{
	"GetDayOfMonth", NULL, &t1705_TI, &t125_0_0_0, RuntimeInvoker_t125_t272, t1705_m12180_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 2336, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t272_0_0_0;
static ParameterInfo t1705_m12181_ParameterInfos[] = 
{
	{"time", 0, 134220799, &EmptyCustomAttributesCache, &t272_0_0_0},
};
extern Il2CppType t1706_0_0_0;
extern void* RuntimeInvoker_t1706_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m12181_MI = 
{
	"GetDayOfWeek", NULL, &t1705_TI, &t1706_0_0_0, RuntimeInvoker_t1706_t272, t1705_m12181_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, false, 2337, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t272_0_0_0;
static ParameterInfo t1705_m12184_ParameterInfos[] = 
{
	{"time", 0, 134220800, &EmptyCustomAttributesCache, &t272_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m12184_MI = 
{
	"GetEra", NULL, &t1705_TI, &t125_0_0_0, RuntimeInvoker_t125_t272, t1705_m12184_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 7, 1, false, false, 2338, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t272_0_0_0;
static ParameterInfo t1705_m12182_ParameterInfos[] = 
{
	{"time", 0, 134220801, &EmptyCustomAttributesCache, &t272_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m12182_MI = 
{
	"GetMonth", NULL, &t1705_TI, &t125_0_0_0, RuntimeInvoker_t125_t272, t1705_m12182_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, false, 2339, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t272_0_0_0;
static ParameterInfo t1705_m12183_ParameterInfos[] = 
{
	{"time", 0, 134220802, &EmptyCustomAttributesCache, &t272_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m12183_MI = 
{
	"GetYear", NULL, &t1705_TI, &t125_0_0_0, RuntimeInvoker_t125_t272, t1705_m12183_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 1, false, false, 2340, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8643_MI = 
{
	"get_EraNames", (methodPointerType)&m8643, &t1705_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2341, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1705_MIs[] =
{
	&m8641_MI,
	&m12044_MI,
	&m8642_MI,
	&m12180_MI,
	&m12181_MI,
	&m12184_MI,
	&m12182_MI,
	&m12183_MI,
	&m8643_MI,
	NULL
};
extern Il2CppType t124_0_0_129;
FieldInfo t1705_f0_FieldInfo = 
{
	"m_isReadOnly", &t124_0_0_129, &t1705_TI, offsetof(t1705, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_131;
FieldInfo t1705_f1_FieldInfo = 
{
	"twoDigitYearMax", &t125_0_0_131, &t1705_TI, offsetof(t1705, f1), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_131;
FieldInfo t1705_f2_FieldInfo = 
{
	"M_AbbrEraNames", &t221_0_0_131, &t1705_TI, offsetof(t1705, f2), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_131;
FieldInfo t1705_f3_FieldInfo = 
{
	"M_EraNames", &t221_0_0_131, &t1705_TI, offsetof(t1705, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1705_FIs[] =
{
	&t1705_f0_FieldInfo,
	&t1705_f1_FieldInfo,
	&t1705_f2_FieldInfo,
	&t1705_f3_FieldInfo,
	NULL
};
extern MethodInfo m12044_MI;
static PropertyInfo t1705____Eras_PropertyInfo = 
{
	&t1705_TI, "Eras", &m12044_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8643_MI;
static PropertyInfo t1705____EraNames_PropertyInfo = 
{
	&t1705_TI, "EraNames", &m8643_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1705_PIs[] =
{
	&t1705____Eras_PropertyInfo,
	&t1705____EraNames_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1705_VT[] =
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
};
static const Il2CppType* t1705_ITIs[] = 
{
	&t629_0_0_0,
};
static Il2CppInterfaceOffsetPair t1705_IOs[] = 
{
	{ &t629_0_0_0, 4},
};
void t1705_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1705__CustomAttributeCache = {
1,
NULL,
&t1705_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1705_0_0_0;
extern Il2CppType t1705_1_0_0;
struct t1705;
extern CustomAttributesCache t1705__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1705_DM = 
{
	NULL, NULL, t1705_ITIs, t1705_IOs, &t9_0_0_0, t1705_VT, t1705_VTIGM, NULL};
TypeInfo t1705_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Calendar", "System.Globalization", t1705_MIs, t1705_PIs, t1705_FIs, NULL, &t1705_TI, NULL, &t1705__CustomAttributeCache, &t1705_0_0_0, &t1705_1_0_0, &t1705_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1705), sizeof (t1705), 0, -1, 0, 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 2, 4, 0, 0, 10, 1, 1};
#include "t1707.h"
// Metadata Definition System.Globalization.CCMath
extern TypeInfo t1707_TI;
#include "t1707MD.h"
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1707_m8644_ParameterInfos[] = 
{
	{"x", 0, 134220803, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"y", 1, 134220804, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8644_MI = 
{
	"div", (methodPointerType)&m8644, &t1707_TI, &t125_0_0_0, RuntimeInvoker_t125_t125_t125, t1707_m8644_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2342, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1707_m8645_ParameterInfos[] = 
{
	{"x", 0, 134220805, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"y", 1, 134220806, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8645_MI = 
{
	"mod", (methodPointerType)&m8645, &t1707_TI, &t125_0_0_0, RuntimeInvoker_t125_t125_t125, t1707_m8645_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2343, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1707_m8646_ParameterInfos[] = 
{
	{"remainder", 0, 134220807, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"x", 1, 134220808, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"y", 2, 134220809, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t343_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8646_MI = 
{
	"div_mod", (methodPointerType)&m8646, &t1707_TI, &t125_0_0_0, RuntimeInvoker_t125_t343_t125_t125, t1707_m8646_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 2344, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1707_MIs[] =
{
	&m8644_MI,
	&m8645_MI,
	&m8646_MI,
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
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1707_0_0_0;
extern Il2CppType t1707_1_0_0;
struct t1707;
const Il2CppTypeDefinitionMetadata t1707_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1707_VT, t1707_VTIGM, NULL};
TypeInfo t1707_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CCMath", "System.Globalization", t1707_MIs, NULL, NULL, NULL, &t1707_TI, NULL, &EmptyCustomAttributesCache, &t1707_0_0_0, &t1707_1_0_0, &t1707_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1707), sizeof (t1707), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 4, 0, 0};
#include "t1708.h"
// Metadata Definition System.Globalization.CCFixed
extern TypeInfo t1708_TI;
#include "t1708MD.h"
extern Il2CppType t272_0_0_0;
static ParameterInfo t1708_m8647_ParameterInfos[] = 
{
	{"time", 0, 134220810, &EmptyCustomAttributesCache, &t272_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m8647_MI = 
{
	"FromDateTime", (methodPointerType)&m8647, &t1708_TI, &t125_0_0_0, RuntimeInvoker_t125_t272, t1708_m8647_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2345, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1708_m8648_ParameterInfos[] = 
{
	{"date", 0, 134220811, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t1706_0_0_0;
extern void* RuntimeInvoker_t1706_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8648_MI = 
{
	"day_of_week", (methodPointerType)&m8648, &t1708_TI, &t1706_0_0_0, RuntimeInvoker_t1706_t125, t1708_m8648_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2346, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1708_MIs[] =
{
	&m8647_MI,
	&m8648_MI,
	NULL
};
static Il2CppMethodReference t1708_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1708_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1708_0_0_0;
extern Il2CppType t1708_1_0_0;
struct t1708;
const Il2CppTypeDefinitionMetadata t1708_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1708_VT, t1708_VTIGM, NULL};
TypeInfo t1708_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CCFixed", "System.Globalization", t1708_MIs, NULL, NULL, NULL, &t1708_TI, NULL, &EmptyCustomAttributesCache, &t1708_0_0_0, &t1708_1_0_0, &t1708_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1708), sizeof (t1708), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 4, 0, 0};
#include "t1709.h"
// Metadata Definition System.Globalization.CCGregorianCalendar
extern TypeInfo t1709_TI;
#include "t1709MD.h"
extern Il2CppType t125_0_0_0;
static ParameterInfo t1709_m8649_ParameterInfos[] = 
{
	{"year", 0, 134220812, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8649_MI = 
{
	"is_leap_year", (methodPointerType)&m8649, &t1709_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t1709_m8649_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2347, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1709_m8650_ParameterInfos[] = 
{
	{"day", 0, 134220813, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"month", 1, 134220814, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"year", 2, 134220815, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8650_MI = 
{
	"fixed_from_dmy", (methodPointerType)&m8650, &t1709_TI, &t125_0_0_0, RuntimeInvoker_t125_t125_t125_t125, t1709_m8650_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 2348, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1709_m8651_ParameterInfos[] = 
{
	{"date", 0, 134220816, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8651_MI = 
{
	"year_from_fixed", (methodPointerType)&m8651, &t1709_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t1709_m8651_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2349, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1709_m8652_ParameterInfos[] = 
{
	{"month", 0, 134220817, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"year", 1, 134220818, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"date", 2, 134220819, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t343_t343_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8652_MI = 
{
	"my_from_fixed", (methodPointerType)&m8652, &t1709_TI, &t122_0_0_0, RuntimeInvoker_t122_t343_t343_t125, t1709_m8652_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 2350, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_1_0_2;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1709_m8653_ParameterInfos[] = 
{
	{"day", 0, 134220820, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"month", 1, 134220821, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"year", 2, 134220822, &EmptyCustomAttributesCache, &t125_1_0_2},
	{"date", 3, 134220823, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t343_t343_t343_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8653_MI = 
{
	"dmy_from_fixed", (methodPointerType)&m8653, &t1709_TI, &t122_0_0_0, RuntimeInvoker_t122_t343_t343_t343_t125, t1709_m8653_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 4, false, false, 2351, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1709_m8654_ParameterInfos[] = 
{
	{"date", 0, 134220824, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8654_MI = 
{
	"month_from_fixed", (methodPointerType)&m8654, &t1709_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t1709_m8654_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2352, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1709_m8655_ParameterInfos[] = 
{
	{"date", 0, 134220825, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8655_MI = 
{
	"day_from_fixed", (methodPointerType)&m8655, &t1709_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t1709_m8655_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2353, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t272_0_0_0;
static ParameterInfo t1709_m8656_ParameterInfos[] = 
{
	{"time", 0, 134220826, &EmptyCustomAttributesCache, &t272_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m8656_MI = 
{
	"GetDayOfMonth", (methodPointerType)&m8656, &t1709_TI, &t125_0_0_0, RuntimeInvoker_t125_t272, t1709_m8656_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2354, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t272_0_0_0;
static ParameterInfo t1709_m8657_ParameterInfos[] = 
{
	{"time", 0, 134220827, &EmptyCustomAttributesCache, &t272_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m8657_MI = 
{
	"GetMonth", (methodPointerType)&m8657, &t1709_TI, &t125_0_0_0, RuntimeInvoker_t125_t272, t1709_m8657_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2355, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t272_0_0_0;
static ParameterInfo t1709_m8658_ParameterInfos[] = 
{
	{"time", 0, 134220828, &EmptyCustomAttributesCache, &t272_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m8658_MI = 
{
	"GetYear", (methodPointerType)&m8658, &t1709_TI, &t125_0_0_0, RuntimeInvoker_t125_t272, t1709_m8658_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2356, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1709_MIs[] =
{
	&m8649_MI,
	&m8650_MI,
	&m8651_MI,
	&m8652_MI,
	&m8653_MI,
	&m8654_MI,
	&m8655_MI,
	&m8656_MI,
	&m8657_MI,
	&m8658_MI,
	NULL
};
static Il2CppMethodReference t1709_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1709_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1709_0_0_0;
extern Il2CppType t1709_1_0_0;
struct t1709;
const Il2CppTypeDefinitionMetadata t1709_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1709_VT, t1709_VTIGM, NULL};
TypeInfo t1709_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CCGregorianCalendar", "System.Globalization", t1709_MIs, NULL, NULL, NULL, &t1709_TI, NULL, &EmptyCustomAttributesCache, &t1709_0_0_0, &t1709_1_0_0, &t1709_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1709), sizeof (t1709), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 0, 0, 0, 0, 4, 0, 0};
#include "t1552.h"
// Metadata Definition System.Globalization.CompareInfo
extern TypeInfo t1552_TI;
#include "t1552MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8659_MI = 
{
	".ctor", (methodPointerType)&m8659, &t1552_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6273, 0, 255, 0, false, false, 2357, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t907_0_0_0;
extern Il2CppType t907_0_0_0;
static ParameterInfo t1552_m8660_ParameterInfos[] = 
{
	{"ci", 0, 134220829, &EmptyCustomAttributesCache, &t907_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8660_MI = 
{
	".ctor", (methodPointerType)&m8660, &t1552_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1552_m8660_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2358, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8661_MI = 
{
	".cctor", (methodPointerType)&m8661, &t1552_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2359, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1552_m8662_ParameterInfos[] = 
{
	{"sender", 0, 134220830, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8662_MI = 
{
	"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", (methodPointerType)&m8662, &t1552_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1552_m8662_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 1, false, false, 2360, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8663_MI = 
{
	"get_UseManagedCollation", (methodPointerType)&m8663, &t1552_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 2361, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1552_m8664_ParameterInfos[] = 
{
	{"locale", 0, 134220831, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8664_MI = 
{
	"construct_compareinfo", (methodPointerType)&m8664, &t1552_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1552_m8664_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 2362, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8665_MI = 
{
	"free_internal_collator", (methodPointerType)&m8665, &t1552_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 4096, 255, 0, false, false, 2363, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1553_0_0_0;
extern Il2CppType t1553_0_0_0;
static ParameterInfo t1552_m8666_ParameterInfos[] = 
{
	{"str1", 0, 134220832, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset1", 1, 134220833, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length1", 2, 134220834, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"str2", 3, 134220835, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset2", 4, 134220836, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length2", 5, 134220837, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 6, 134220838, &EmptyCustomAttributesCache, &t1553_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8666_MI = 
{
	"internal_compare", (methodPointerType)&m8666, &t1552_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125, t1552_m8666_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 7, false, false, 2364, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1553_0_0_0;
static ParameterInfo t1552_m8667_ParameterInfos[] = 
{
	{"key", 0, 134220839, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"source", 1, 134220840, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 2, 134220841, &EmptyCustomAttributesCache, &t1553_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8667_MI = 
{
	"assign_sortkey", (methodPointerType)&m8667, &t1552_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1552_m8667_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 3, false, false, 2365, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1553_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1552_m8668_ParameterInfos[] = 
{
	{"source", 0, 134220842, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"sindex", 1, 134220843, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220844, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 3, 134220845, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 4, 134220846, &EmptyCustomAttributesCache, &t1553_0_0_0},
	{"first", 5, 134220847, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8668_MI = 
{
	"internal_index", (methodPointerType)&m8668, &t1552_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186, t1552_m8668_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 6, false, false, 2366, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8669_MI = 
{
	"Finalize", (methodPointerType)&m8669, &t1552_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 2367, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1553_0_0_0;
static ParameterInfo t1552_m8670_ParameterInfos[] = 
{
	{"str1", 0, 134220848, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset1", 1, 134220849, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length1", 2, 134220850, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"str2", 3, 134220851, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset2", 4, 134220852, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length2", 5, 134220853, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 6, 134220854, &EmptyCustomAttributesCache, &t1553_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8670_MI = 
{
	"internal_compare_managed", (methodPointerType)&m8670, &t1552_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125, t1552_m8670_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 2368, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1553_0_0_0;
static ParameterInfo t1552_m8671_ParameterInfos[] = 
{
	{"str1", 0, 134220855, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset1", 1, 134220856, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length1", 2, 134220857, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"str2", 3, 134220858, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset2", 4, 134220859, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length2", 5, 134220860, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 6, 134220861, &EmptyCustomAttributesCache, &t1553_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8671_MI = 
{
	"internal_compare_switch", (methodPointerType)&m8671, &t1552_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125, t1552_m8671_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 2369, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1552_m8672_ParameterInfos[] = 
{
	{"string1", 0, 134220862, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"string2", 1, 134220863, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8672_MI = 
{
	"Compare", (methodPointerType)&m8672, &t1552_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1552_m8672_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 2, false, false, 2370, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1553_0_0_0;
static ParameterInfo t1552_m7013_ParameterInfos[] = 
{
	{"string1", 0, 134220864, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"string2", 1, 134220865, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 2, 134220866, &EmptyCustomAttributesCache, &t1553_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7013_MI = 
{
	"Compare", (methodPointerType)&m7013, &t1552_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9_t125, t1552_m7013_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 3, false, false, 2371, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1553_0_0_0;
static ParameterInfo t1552_m8673_ParameterInfos[] = 
{
	{"string1", 0, 134220867, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset1", 1, 134220868, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length1", 2, 134220869, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"string2", 3, 134220870, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"offset2", 4, 134220871, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"length2", 5, 134220872, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 6, 134220873, &EmptyCustomAttributesCache, &t1553_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8673_MI = 
{
	"Compare", (methodPointerType)&m8673, &t1552_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t125_t125, t1552_m8673_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 7, false, false, 2372, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1552_m8674_ParameterInfos[] = 
{
	{"value", 0, 134220874, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8674_MI = 
{
	"Equals", (methodPointerType)&m8674, &t1552_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1552_m8674_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 2373, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8675_MI = 
{
	"GetHashCode", (methodPointerType)&m8675, &t1552_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 2374, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1553_0_0_0;
static ParameterInfo t1552_m8676_ParameterInfos[] = 
{
	{"source", 0, 134220875, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 1, 134220876, &EmptyCustomAttributesCache, &t1553_0_0_0},
};
extern Il2CppType t1623_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8676_MI = 
{
	"GetSortKey", (methodPointerType)&m8676, &t1552_TI, &t1623_0_0_0, RuntimeInvoker_t9_t9_t125, t1552_m8676_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 2, false, false, 2375, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1552_m8677_ParameterInfos[] = 
{
	{"source", 0, 134220877, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134220878, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 2, 134220879, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134220880, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8677_MI = 
{
	"IndexOf", (methodPointerType)&m8677, &t1552_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9_t125_t125, t1552_m8677_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 4, false, false, 2376, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1553_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1552_m8678_ParameterInfos[] = 
{
	{"s1", 0, 134220881, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"sindex", 1, 134220882, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220883, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"s2", 3, 134220884, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"opt", 4, 134220885, &EmptyCustomAttributesCache, &t1553_0_0_0},
	{"first", 5, 134220886, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8678_MI = 
{
	"internal_index_managed", (methodPointerType)&m8678, &t1552_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186, t1552_m8678_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 2377, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1553_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1552_m8679_ParameterInfos[] = 
{
	{"s1", 0, 134220887, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"sindex", 1, 134220888, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220889, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"s2", 3, 134220890, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"opt", 4, 134220891, &EmptyCustomAttributesCache, &t1553_0_0_0},
	{"first", 5, 134220892, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8679_MI = 
{
	"internal_index_switch", (methodPointerType)&m8679, &t1552_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t9_t125_t186, t1552_m8679_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 2378, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1553_0_0_0;
static ParameterInfo t1552_m8680_ParameterInfos[] = 
{
	{"source", 0, 134220893, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134220894, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 2, 134220895, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134220896, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 4, 134220897, &EmptyCustomAttributesCache, &t1553_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8680_MI = 
{
	"IndexOf", (methodPointerType)&m8680, &t1552_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9_t125_t125_t125, t1552_m8680_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 5, false, false, 2379, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1553_0_0_0;
static ParameterInfo t1552_m8681_ParameterInfos[] = 
{
	{"source", 0, 134220898, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"prefix", 1, 134220899, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 2, 134220900, &EmptyCustomAttributesCache, &t1553_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8681_MI = 
{
	"IsPrefix", (methodPointerType)&m8681, &t1552_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9_t125, t1552_m8681_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 3, false, false, 2380, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1553_0_0_0;
static ParameterInfo t1552_m8682_ParameterInfos[] = 
{
	{"source", 0, 134220901, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"suffix", 1, 134220902, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"options", 2, 134220903, &EmptyCustomAttributesCache, &t1553_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8682_MI = 
{
	"IsSuffix", (methodPointerType)&m8682, &t1552_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9_t125, t1552_m8682_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 12, 3, false, false, 2381, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1552_m8683_ParameterInfos[] = 
{
	{"source", 0, 134220904, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134220905, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 2, 134220906, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134220907, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8683_MI = 
{
	"LastIndexOf", (methodPointerType)&m8683, &t1552_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9_t125_t125, t1552_m8683_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 4, false, false, 2382, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1553_0_0_0;
static ParameterInfo t1552_m8684_ParameterInfos[] = 
{
	{"source", 0, 134220908, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134220909, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"startIndex", 2, 134220910, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134220911, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"options", 4, 134220912, &EmptyCustomAttributesCache, &t1553_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8684_MI = 
{
	"LastIndexOf", (methodPointerType)&m8684, &t1552_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9_t125_t125_t125, t1552_m8684_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 5, false, false, 2383, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8685_MI = 
{
	"ToString", (methodPointerType)&m8685, &t1552_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2384, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8686_MI = 
{
	"get_LCID", (methodPointerType)&m8686, &t1552_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2385, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1552_MIs[] =
{
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
	&m7013_MI,
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
	NULL
};
extern Il2CppType t124_0_0_49;
FieldInfo t1552_f0_FieldInfo = 
{
	"useManagedCollation", &t124_0_0_49, &t1552_TI, offsetof(t1552_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1552_f1_FieldInfo = 
{
	"culture", &t125_0_0_1, &t1552_TI, offsetof(t1552, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t1552_f2_FieldInfo = 
{
	"icu_name", &t2_0_0_129, &t1552_TI, offsetof(t1552, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1621_0_0_129;
FieldInfo t1552_f3_FieldInfo = 
{
	"collator", &t1621_0_0_129, &t1552_TI, offsetof(t1552, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_17;
FieldInfo t1552_f4_FieldInfo = 
{
	"collators", &t1164_0_0_17, &t1552_TI, offsetof(t1552_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_145;
FieldInfo t1552_f5_FieldInfo = 
{
	"monitor", &t9_0_0_145, &t1552_TI, offsetof(t1552_SFs, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1552_FIs[] =
{
	&t1552_f0_FieldInfo,
	&t1552_f1_FieldInfo,
	&t1552_f2_FieldInfo,
	&t1552_f3_FieldInfo,
	&t1552_f4_FieldInfo,
	&t1552_f5_FieldInfo,
	NULL
};
extern MethodInfo m8663_MI;
static PropertyInfo t1552____UseManagedCollation_PropertyInfo = 
{
	&t1552_TI, "UseManagedCollation", &m8663_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8686_MI;
static PropertyInfo t1552____LCID_PropertyInfo = 
{
	&t1552_TI, "LCID", &m8686_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1552_PIs[] =
{
	&t1552____UseManagedCollation_PropertyInfo,
	&t1552____LCID_PropertyInfo,
	NULL
};
extern MethodInfo m8674_MI;
extern MethodInfo m8669_MI;
extern MethodInfo m8675_MI;
extern MethodInfo m8685_MI;
extern MethodInfo m8662_MI;
extern MethodInfo m8672_MI;
extern MethodInfo m7013_MI;
extern MethodInfo m8673_MI;
extern MethodInfo m8676_MI;
extern MethodInfo m8677_MI;
extern MethodInfo m8680_MI;
extern MethodInfo m8681_MI;
extern MethodInfo m8682_MI;
extern MethodInfo m8683_MI;
extern MethodInfo m8684_MI;
static Il2CppMethodReference t1552_VT[] =
{
	&m8674_MI,
	&m8669_MI,
	&m8675_MI,
	&m8685_MI,
	&m8662_MI,
	&m8672_MI,
	&m7013_MI,
	&m8673_MI,
	&m8676_MI,
	&m8677_MI,
	&m8680_MI,
	&m8681_MI,
	&m8682_MI,
	&m8683_MI,
	&m8684_MI,
};
static bool t1552_VTIGM[] =
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
extern Il2CppType t1112_0_0_0;
static const Il2CppType* t1552_ITIs[] = 
{
	&t1112_0_0_0,
};
static Il2CppInterfaceOffsetPair t1552_IOs[] = 
{
	{ &t1112_0_0_0, 4},
};
void t1552_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1552__CustomAttributeCache = {
1,
NULL,
&t1552_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1552_0_0_0;
extern Il2CppType t1552_1_0_0;
struct t1552;
extern CustomAttributesCache t1552__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1552_DM = 
{
	NULL, NULL, t1552_ITIs, t1552_IOs, &t9_0_0_0, t1552_VT, t1552_VTIGM, NULL};
TypeInfo t1552_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CompareInfo", "System.Globalization", t1552_MIs, t1552_PIs, t1552_FIs, NULL, &t1552_TI, NULL, &t1552__CustomAttributeCache, &t1552_0_0_0, &t1552_1_0_0, &t1552_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1552), sizeof (t1552), 0, -1, sizeof(t1552_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, true, true, false, 29, 2, 6, 0, 0, 15, 1, 1};
#include "t1553.h"
// Metadata Definition System.Globalization.CompareOptions
extern TypeInfo t1553_TI;
#include "t1553MD.h"
static MethodInfo* t1553_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1553_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1553_TI, offsetof(t1553, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1553_0_0_32854;
FieldInfo t1553_f2_FieldInfo = 
{
	"None", &t1553_0_0_32854, &t1553_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1553_0_0_32854;
FieldInfo t1553_f3_FieldInfo = 
{
	"IgnoreCase", &t1553_0_0_32854, &t1553_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1553_0_0_32854;
FieldInfo t1553_f4_FieldInfo = 
{
	"IgnoreNonSpace", &t1553_0_0_32854, &t1553_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1553_0_0_32854;
FieldInfo t1553_f5_FieldInfo = 
{
	"IgnoreSymbols", &t1553_0_0_32854, &t1553_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1553_0_0_32854;
FieldInfo t1553_f6_FieldInfo = 
{
	"IgnoreKanaType", &t1553_0_0_32854, &t1553_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1553_0_0_32854;
FieldInfo t1553_f7_FieldInfo = 
{
	"IgnoreWidth", &t1553_0_0_32854, &t1553_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1553_0_0_32854;
FieldInfo t1553_f8_FieldInfo = 
{
	"StringSort", &t1553_0_0_32854, &t1553_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1553_0_0_32854;
FieldInfo t1553_f9_FieldInfo = 
{
	"Ordinal", &t1553_0_0_32854, &t1553_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1553_0_0_32854;
FieldInfo t1553_f10_FieldInfo = 
{
	"OrdinalIgnoreCase", &t1553_0_0_32854, &t1553_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1553_FIs[] =
{
	&t1553_f1_FieldInfo,
	&t1553_f2_FieldInfo,
	&t1553_f3_FieldInfo,
	&t1553_f4_FieldInfo,
	&t1553_f5_FieldInfo,
	&t1553_f6_FieldInfo,
	&t1553_f7_FieldInfo,
	&t1553_f8_FieldInfo,
	&t1553_f9_FieldInfo,
	&t1553_f10_FieldInfo,
	NULL
};
static const int32_t t1553_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1553_f2_DefaultValue = 
{
	&t1553_f2_FieldInfo, { (char*)&t1553_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1553_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1553_f3_DefaultValue = 
{
	&t1553_f3_FieldInfo, { (char*)&t1553_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1553_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1553_f4_DefaultValue = 
{
	&t1553_f4_FieldInfo, { (char*)&t1553_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1553_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1553_f5_DefaultValue = 
{
	&t1553_f5_FieldInfo, { (char*)&t1553_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1553_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1553_f6_DefaultValue = 
{
	&t1553_f6_FieldInfo, { (char*)&t1553_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1553_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1553_f7_DefaultValue = 
{
	&t1553_f7_FieldInfo, { (char*)&t1553_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1553_f8_DefaultValueData = 536870912;
static Il2CppFieldDefaultValueEntry t1553_f8_DefaultValue = 
{
	&t1553_f8_FieldInfo, { (char*)&t1553_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1553_f9_DefaultValueData = 1073741824;
static Il2CppFieldDefaultValueEntry t1553_f9_DefaultValue = 
{
	&t1553_f9_FieldInfo, { (char*)&t1553_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1553_f10_DefaultValueData = 268435456;
static Il2CppFieldDefaultValueEntry t1553_f10_DefaultValue = 
{
	&t1553_f10_FieldInfo, { (char*)&t1553_f10_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1553_FDVs[] = 
{
	&t1553_f2_DefaultValue,
	&t1553_f3_DefaultValue,
	&t1553_f4_DefaultValue,
	&t1553_f5_DefaultValue,
	&t1553_f6_DefaultValue,
	&t1553_f7_DefaultValue,
	&t1553_f8_DefaultValue,
	&t1553_f9_DefaultValue,
	&t1553_f10_DefaultValue,
	NULL
};
static Il2CppMethodReference t1553_VT[] =
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
static bool t1553_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1553_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1553_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t622 * tmp;
		tmp = (t622 *)il2cpp_codegen_object_new (&t622_TI);
		m3031(tmp, &m3031_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1553__CustomAttributeCache = {
2,
NULL,
&t1553_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1553_1_0_0;
extern CustomAttributesCache t1553__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1553_DM = 
{
	NULL, NULL, NULL, t1553_IOs, &t8_0_0_0, t1553_VT, t1553_VTIGM, NULL};
TypeInfo t1553_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CompareOptions", "System.Globalization", t1553_MIs, NULL, t1553_FIs, NULL, &t125_TI, NULL, &t1553__CustomAttributeCache, &t1553_0_0_0, &t1553_1_0_0, &t1553_DM, NULL, NULL, NULL, t1553_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1553)+ sizeof (Il2CppObject), sizeof (t1553)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 10, 0, 0, 23, 0, 3};
#include "t907.h"
// Metadata Definition System.Globalization.CultureInfo
extern TypeInfo t907_TI;
#include "t907MD.h"
extern Il2CppType t125_0_0_0;
static ParameterInfo t907_m8687_ParameterInfos[] = 
{
	{"culture", 0, 134220913, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8687_MI = 
{
	".ctor", (methodPointerType)&m8687, &t907_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t907_m8687_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2386, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t907_m8688_ParameterInfos[] = 
{
	{"culture", 0, 134220914, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"useUserOverride", 1, 134220915, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8688_MI = 
{
	".ctor", (methodPointerType)&m8688, &t907_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t907_m8688_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2387, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t907_m8689_ParameterInfos[] = 
{
	{"culture", 0, 134220916, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"useUserOverride", 1, 134220917, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"read_only", 2, 134220918, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8689_MI = 
{
	".ctor", (methodPointerType)&m8689, &t907_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186_t186, t907_m8689_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 3, false, false, 2388, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t907_m8690_ParameterInfos[] = 
{
	{"name", 0, 134220919, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"useUserOverride", 1, 134220920, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"read_only", 2, 134220921, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8690_MI = 
{
	".ctor", (methodPointerType)&m8690, &t907_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t186, t907_m8690_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 3, false, false, 2389, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8691_MI = 
{
	".ctor", (methodPointerType)&m8691, &t907_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6273, 0, 255, 0, false, false, 2390, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8692_MI = 
{
	".cctor", (methodPointerType)&m8692, &t907_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2391, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t907_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4400_MI = 
{
	"get_InvariantCulture", (methodPointerType)&m4400, &t907_TI, &t907_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2392, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t907_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7011_MI = 
{
	"get_CurrentCulture", (methodPointerType)&m7011, &t907_TI, &t907_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2393, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t907_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7015_MI = 
{
	"get_CurrentUICulture", (methodPointerType)&m7015, &t907_TI, &t907_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2394, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t907_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8693_MI = 
{
	"ConstructCurrentCulture", (methodPointerType)&m8693, &t907_TI, &t907_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 2395, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t907_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8694_MI = 
{
	"ConstructCurrentUICulture", (methodPointerType)&m8694, &t907_TI, &t907_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 2396, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8695_MI = 
{
	"get_LCID", (methodPointerType)&m8695, &t907_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 5, 0, false, false, 2397, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8696_MI = 
{
	"get_Name", (methodPointerType)&m8696, &t907_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 2398, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t907_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8697_MI = 
{
	"get_Parent", (methodPointerType)&m8697, &t907_TI, &t907_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 7, 0, false, false, 2399, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1622_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8698_MI = 
{
	"get_TextInfo", (methodPointerType)&m8698, &t907_TI, &t1622_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 2400, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8699_MI = 
{
	"get_IcuName", (methodPointerType)&m8699, &t907_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2401, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t907_m8700_ParameterInfos[] = 
{
	{"value", 0, 134220922, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8700_MI = 
{
	"Equals", (methodPointerType)&m8700, &t907_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t907_m8700_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 2402, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8701_MI = 
{
	"GetHashCode", (methodPointerType)&m8701, &t907_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 2403, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8702_MI = 
{
	"ToString", (methodPointerType)&m8702, &t907_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2404, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1552_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7012_MI = 
{
	"get_CompareInfo", (methodPointerType)&m7012, &t907_TI, &t1552_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 2405, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8703_MI = 
{
	"get_IsNeutralCulture", (methodPointerType)&m8703, &t907_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2502, 0, 10, 0, false, false, 2406, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8704_MI = 
{
	"CheckNeutral", (methodPointerType)&m8704, &t907_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2407, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1561_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8705_MI = 
{
	"get_NumberFormat", (methodPointerType)&m8705, &t907_TI, &t1561_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 2408, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1710_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8706_MI = 
{
	"get_DateTimeFormat", (methodPointerType)&m8706, &t907_TI, &t1710_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 12, 0, false, false, 2409, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8707_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m8707, &t907_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2410, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t907_m8708_ParameterInfos[] = 
{
	{"formatType", 0, 134220923, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8708_MI = 
{
	"GetFormat", (methodPointerType)&m8708, &t907_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t907_m8708_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 1, false, false, 2411, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8709_MI = 
{
	"Construct", (methodPointerType)&m8709, &t907_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2412, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t907_m8710_ParameterInfos[] = 
{
	{"locale", 0, 134220924, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8710_MI = 
{
	"ConstructInternalLocaleFromName", (methodPointerType)&m8710, &t907_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t907_m8710_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2413, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t907_m8711_ParameterInfos[] = 
{
	{"lcid", 0, 134220925, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8711_MI = 
{
	"ConstructInternalLocaleFromLcid", (methodPointerType)&m8711, &t907_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t907_m8711_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2414, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t907_0_0_0;
static ParameterInfo t907_m8712_ParameterInfos[] = 
{
	{"ci", 0, 134220926, &EmptyCustomAttributesCache, &t907_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8712_MI = 
{
	"ConstructInternalLocaleFromCurrentLocale", (methodPointerType)&m8712, &t907_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t907_m8712_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2415, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t907_m8713_ParameterInfos[] = 
{
	{"lcid", 0, 134220927, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8713_MI = 
{
	"construct_internal_locale_from_lcid", (methodPointerType)&m8713, &t907_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t907_m8713_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 2416, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t907_m8714_ParameterInfos[] = 
{
	{"name", 0, 134220928, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8714_MI = 
{
	"construct_internal_locale_from_name", (methodPointerType)&m8714, &t907_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t907_m8714_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 2417, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t907_0_0_0;
static ParameterInfo t907_m8715_ParameterInfos[] = 
{
	{"ci", 0, 134220929, &EmptyCustomAttributesCache, &t907_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8715_MI = 
{
	"construct_internal_locale_from_current_locale", (methodPointerType)&m8715, &t907_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t907_m8715_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 2418, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8716_MI = 
{
	"construct_datetime_format", (methodPointerType)&m8716, &t907_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 4096, 255, 0, false, false, 2419, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8717_MI = 
{
	"construct_number_format", (methodPointerType)&m8717, &t907_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 4096, 255, 0, false, false, 2420, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t907_m8718_ParameterInfos[] = 
{
	{"read_only", 0, 134220930, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8718_MI = 
{
	"ConstructInvariant", (methodPointerType)&m8718, &t907_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t907_m8718_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2421, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t907_m8719_ParameterInfos[] = 
{
	{"readOnly", 0, 134220931, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1622_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8719_MI = 
{
	"CreateTextInfo", (methodPointerType)&m8719, &t907_TI, &t1622_0_0_0, RuntimeInvoker_t9_t186, t907_m8719_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2422, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t907_m8720_ParameterInfos[] = 
{
	{"name", 0, 134220932, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"reference", 1, 134220933, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t907_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8720_MI = 
{
	"CreateCulture", (methodPointerType)&m8720, &t907_TI, &t907_0_0_0, RuntimeInvoker_t9_t9_t186, t907_m8720_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 2423, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t907_MIs[] =
{
	&m8687_MI,
	&m8688_MI,
	&m8689_MI,
	&m8690_MI,
	&m8691_MI,
	&m8692_MI,
	&m4400_MI,
	&m7011_MI,
	&m7015_MI,
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
	&m7012_MI,
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
	&m8720_MI,
	NULL
};
extern Il2CppType t125_0_0_32849;
FieldInfo t907_f0_FieldInfo = 
{
	"NumOptionalCalendars", &t125_0_0_32849, &t907_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_32849;
FieldInfo t907_f1_FieldInfo = 
{
	"GregorianTypeMask", &t125_0_0_32849, &t907_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_32849;
FieldInfo t907_f2_FieldInfo = 
{
	"CalendarTypeBits", &t125_0_0_32849, &t907_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_32849;
FieldInfo t907_f3_FieldInfo = 
{
	"InvariantCultureId", &t125_0_0_32849, &t907_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t907_0_0_17;
FieldInfo t907_f4_FieldInfo = 
{
	"invariant_culture_info", &t907_0_0_17, &t907_TI, offsetof(t907_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_17;
FieldInfo t907_f5_FieldInfo = 
{
	"shared_table_lock", &t9_0_0_17, &t907_TI, offsetof(t907_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_19;
FieldInfo t907_f6_FieldInfo = 
{
	"BootstrapCultureID", &t125_0_0_19, &t907_TI, offsetof(t907_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t907_f7_FieldInfo = 
{
	"m_isReadOnly", &t124_0_0_1, &t907_TI, offsetof(t907, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t907_f8_FieldInfo = 
{
	"cultureID", &t125_0_0_1, &t907_TI, offsetof(t907, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_129;
FieldInfo t907_f9_FieldInfo = 
{
	"parent_lcid", &t125_0_0_129, &t907_TI, offsetof(t907, f9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_129;
FieldInfo t907_f10_FieldInfo = 
{
	"specific_lcid", &t125_0_0_129, &t907_TI, offsetof(t907, f10), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_129;
FieldInfo t907_f11_FieldInfo = 
{
	"datetime_index", &t125_0_0_129, &t907_TI, offsetof(t907, f11), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_129;
FieldInfo t907_f12_FieldInfo = 
{
	"number_index", &t125_0_0_129, &t907_TI, offsetof(t907, f12), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t907_f13_FieldInfo = 
{
	"m_useUserOverride", &t124_0_0_1, &t907_TI, offsetof(t907, f13), &EmptyCustomAttributesCache};
extern Il2CppType t1561_0_0_129;
FieldInfo t907_f14_FieldInfo = 
{
	"numInfo", &t1561_0_0_129, &t907_TI, offsetof(t907, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1710_0_0_1;
FieldInfo t907_f15_FieldInfo = 
{
	"dateTimeInfo", &t1710_0_0_1, &t907_TI, offsetof(t907, f15), &EmptyCustomAttributesCache};
extern Il2CppType t1622_0_0_1;
FieldInfo t907_f16_FieldInfo = 
{
	"textInfo", &t1622_0_0_1, &t907_TI, offsetof(t907, f16), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t907_f17_FieldInfo = 
{
	"m_name", &t2_0_0_1, &t907_TI, offsetof(t907, f17), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t907_f18_FieldInfo = 
{
	"displayname", &t2_0_0_129, &t907_TI, offsetof(t907, f18), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t907_f19_FieldInfo = 
{
	"englishname", &t2_0_0_129, &t907_TI, offsetof(t907, f19), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t907_f20_FieldInfo = 
{
	"nativename", &t2_0_0_129, &t907_TI, offsetof(t907, f20), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t907_f21_FieldInfo = 
{
	"iso3lang", &t2_0_0_129, &t907_TI, offsetof(t907, f21), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t907_f22_FieldInfo = 
{
	"iso2lang", &t2_0_0_129, &t907_TI, offsetof(t907, f22), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t907_f23_FieldInfo = 
{
	"icu_name", &t2_0_0_129, &t907_TI, offsetof(t907, f23), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t907_f24_FieldInfo = 
{
	"win3lang", &t2_0_0_129, &t907_TI, offsetof(t907, f24), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_129;
FieldInfo t907_f25_FieldInfo = 
{
	"territory", &t2_0_0_129, &t907_TI, offsetof(t907, f25), &EmptyCustomAttributesCache};
extern Il2CppType t1552_0_0_1;
FieldInfo t907_f26_FieldInfo = 
{
	"compareInfo", &t1552_0_0_1, &t907_TI, offsetof(t907, f26), &EmptyCustomAttributesCache};
extern Il2CppType t2592_0_0_161;
FieldInfo t907_f27_FieldInfo = 
{
	"calendar_data", &t2592_0_0_161, &t907_TI, offsetof(t907, f27), &EmptyCustomAttributesCache};
extern Il2CppType t2262_0_0_161;
FieldInfo t907_f28_FieldInfo = 
{
	"textinfo_data", &t2262_0_0_161, &t907_TI, offsetof(t907, f28), &EmptyCustomAttributesCache};
extern Il2CppType t1711_0_0_129;
FieldInfo t907_f29_FieldInfo = 
{
	"optional_calendars", &t1711_0_0_129, &t907_TI, offsetof(t907, f29), &EmptyCustomAttributesCache};
extern Il2CppType t907_0_0_129;
FieldInfo t907_f30_FieldInfo = 
{
	"parent_culture", &t907_0_0_129, &t907_TI, offsetof(t907, f30), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t907_f31_FieldInfo = 
{
	"m_dataItem", &t125_0_0_1, &t907_TI, offsetof(t907, f31), &EmptyCustomAttributesCache};
extern Il2CppType t1705_0_0_1;
FieldInfo t907_f32_FieldInfo = 
{
	"calendar", &t1705_0_0_1, &t907_TI, offsetof(t907, f32), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_129;
FieldInfo t907_f33_FieldInfo = 
{
	"constructed", &t124_0_0_129, &t907_TI, offsetof(t907, f33), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_131;
FieldInfo t907_f34_FieldInfo = 
{
	"cached_serialized_form", &t737_0_0_131, &t907_TI, offsetof(t907, f34), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_49;
FieldInfo t907_f35_FieldInfo = 
{
	"MSG_READONLY", &t2_0_0_49, &t907_TI, offsetof(t907_SFs, f35), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_17;
FieldInfo t907_f36_FieldInfo = 
{
	"shared_by_number", &t1164_0_0_17, &t907_TI, offsetof(t907_SFs, f36), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_17;
FieldInfo t907_f37_FieldInfo = 
{
	"shared_by_name", &t1164_0_0_17, &t907_TI, offsetof(t907_SFs, f37), &EmptyCustomAttributesCache};
extern Il2CppType t727_0_0_17;
extern CustomAttributesCache t907__CustomAttributeCache_U3CU3Ef__switch$map19;
FieldInfo t907_f38_FieldInfo = 
{
	"<>f__switch$map19", &t727_0_0_17, &t907_TI, offsetof(t907_SFs, f38), &t907__CustomAttributeCache_U3CU3Ef__switch$map19};
extern Il2CppType t727_0_0_17;
extern CustomAttributesCache t907__CustomAttributeCache_U3CU3Ef__switch$map1A;
FieldInfo t907_f39_FieldInfo = 
{
	"<>f__switch$map1A", &t727_0_0_17, &t907_TI, offsetof(t907_SFs, f39), &t907__CustomAttributeCache_U3CU3Ef__switch$map1A};
static FieldInfo* t907_FIs[] =
{
	&t907_f0_FieldInfo,
	&t907_f1_FieldInfo,
	&t907_f2_FieldInfo,
	&t907_f3_FieldInfo,
	&t907_f4_FieldInfo,
	&t907_f5_FieldInfo,
	&t907_f6_FieldInfo,
	&t907_f7_FieldInfo,
	&t907_f8_FieldInfo,
	&t907_f9_FieldInfo,
	&t907_f10_FieldInfo,
	&t907_f11_FieldInfo,
	&t907_f12_FieldInfo,
	&t907_f13_FieldInfo,
	&t907_f14_FieldInfo,
	&t907_f15_FieldInfo,
	&t907_f16_FieldInfo,
	&t907_f17_FieldInfo,
	&t907_f18_FieldInfo,
	&t907_f19_FieldInfo,
	&t907_f20_FieldInfo,
	&t907_f21_FieldInfo,
	&t907_f22_FieldInfo,
	&t907_f23_FieldInfo,
	&t907_f24_FieldInfo,
	&t907_f25_FieldInfo,
	&t907_f26_FieldInfo,
	&t907_f27_FieldInfo,
	&t907_f28_FieldInfo,
	&t907_f29_FieldInfo,
	&t907_f30_FieldInfo,
	&t907_f31_FieldInfo,
	&t907_f32_FieldInfo,
	&t907_f33_FieldInfo,
	&t907_f34_FieldInfo,
	&t907_f35_FieldInfo,
	&t907_f36_FieldInfo,
	&t907_f37_FieldInfo,
	&t907_f38_FieldInfo,
	&t907_f39_FieldInfo,
	NULL
};
static const int32_t t907_f0_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t907_f0_DefaultValue = 
{
	&t907_f0_FieldInfo, { (char*)&t907_f0_DefaultValueData, &t125_0_0_0 }};
static const int32_t t907_f1_DefaultValueData = 16777215;
static Il2CppFieldDefaultValueEntry t907_f1_DefaultValue = 
{
	&t907_f1_FieldInfo, { (char*)&t907_f1_DefaultValueData, &t125_0_0_0 }};
static const int32_t t907_f2_DefaultValueData = 24;
static Il2CppFieldDefaultValueEntry t907_f2_DefaultValue = 
{
	&t907_f2_FieldInfo, { (char*)&t907_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t907_f3_DefaultValueData = 127;
static Il2CppFieldDefaultValueEntry t907_f3_DefaultValue = 
{
	&t907_f3_FieldInfo, { (char*)&t907_f3_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t907_FDVs[] = 
{
	&t907_f0_DefaultValue,
	&t907_f1_DefaultValue,
	&t907_f2_DefaultValue,
	&t907_f3_DefaultValue,
	NULL
};
extern MethodInfo m4400_MI;
static PropertyInfo t907____InvariantCulture_PropertyInfo = 
{
	&t907_TI, "InvariantCulture", &m4400_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7011_MI;
static PropertyInfo t907____CurrentCulture_PropertyInfo = 
{
	&t907_TI, "CurrentCulture", &m7011_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7015_MI;
static PropertyInfo t907____CurrentUICulture_PropertyInfo = 
{
	&t907_TI, "CurrentUICulture", &m7015_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8695_MI;
static PropertyInfo t907____LCID_PropertyInfo = 
{
	&t907_TI, "LCID", &m8695_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8696_MI;
static PropertyInfo t907____Name_PropertyInfo = 
{
	&t907_TI, "Name", &m8696_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8697_MI;
static PropertyInfo t907____Parent_PropertyInfo = 
{
	&t907_TI, "Parent", &m8697_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8698_MI;
static PropertyInfo t907____TextInfo_PropertyInfo = 
{
	&t907_TI, "TextInfo", &m8698_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8699_MI;
static PropertyInfo t907____IcuName_PropertyInfo = 
{
	&t907_TI, "IcuName", &m8699_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7012_MI;
static PropertyInfo t907____CompareInfo_PropertyInfo = 
{
	&t907_TI, "CompareInfo", &m7012_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8703_MI;
static PropertyInfo t907____IsNeutralCulture_PropertyInfo = 
{
	&t907_TI, "IsNeutralCulture", &m8703_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8705_MI;
static PropertyInfo t907____NumberFormat_PropertyInfo = 
{
	&t907_TI, "NumberFormat", &m8705_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8706_MI;
static PropertyInfo t907____DateTimeFormat_PropertyInfo = 
{
	&t907_TI, "DateTimeFormat", &m8706_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8707_MI;
static PropertyInfo t907____IsReadOnly_PropertyInfo = 
{
	&t907_TI, "IsReadOnly", &m8707_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t907_PIs[] =
{
	&t907____InvariantCulture_PropertyInfo,
	&t907____CurrentCulture_PropertyInfo,
	&t907____CurrentUICulture_PropertyInfo,
	&t907____LCID_PropertyInfo,
	&t907____Name_PropertyInfo,
	&t907____Parent_PropertyInfo,
	&t907____TextInfo_PropertyInfo,
	&t907____IcuName_PropertyInfo,
	&t907____CompareInfo_PropertyInfo,
	&t907____IsNeutralCulture_PropertyInfo,
	&t907____NumberFormat_PropertyInfo,
	&t907____DateTimeFormat_PropertyInfo,
	&t907____IsReadOnly_PropertyInfo,
	NULL
};
extern MethodInfo m8700_MI;
extern MethodInfo m8701_MI;
extern MethodInfo m8702_MI;
extern MethodInfo m8708_MI;
static Il2CppMethodReference t907_VT[] =
{
	&m8700_MI,
	&m646_MI,
	&m8701_MI,
	&m8702_MI,
	&m8708_MI,
	&m8695_MI,
	&m8696_MI,
	&m8697_MI,
	&m8698_MI,
	&m7012_MI,
	&m8703_MI,
	&m8705_MI,
	&m8706_MI,
	&m8708_MI,
};
static bool t907_VTIGM[] =
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
extern Il2CppType t912_0_0_0;
static const Il2CppType* t907_ITIs[] = 
{
	&t629_0_0_0,
	&t912_0_0_0,
};
static Il2CppInterfaceOffsetPair t907_IOs[] = 
{
	{ &t629_0_0_0, 4},
	{ &t912_0_0_0, 4},
};
void t907_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t187_TI;
#include "t187.h"
#include "t187MD.h"
extern MethodInfo m674_MI;
void t907_CustomAttributesCacheGenerator_U3CU3Ef__switch$map19(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t907_CustomAttributesCacheGenerator_U3CU3Ef__switch$map1A(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t907__CustomAttributeCache = {
1,
NULL,
&t907_CustomAttributesCacheGenerator
};
CustomAttributesCache t907__CustomAttributeCache_U3CU3Ef__switch$map19 = {
1,
NULL,
&t907_CustomAttributesCacheGenerator_U3CU3Ef__switch$map19
};
CustomAttributesCache t907__CustomAttributeCache_U3CU3Ef__switch$map1A = {
1,
NULL,
&t907_CustomAttributesCacheGenerator_U3CU3Ef__switch$map1A
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t907_1_0_0;
struct t907;
extern CustomAttributesCache t907__CustomAttributeCache;
extern CustomAttributesCache t907__CustomAttributeCache_U3CU3Ef__switch$map19;
extern CustomAttributesCache t907__CustomAttributeCache_U3CU3Ef__switch$map1A;
const Il2CppTypeDefinitionMetadata t907_DM = 
{
	NULL, NULL, t907_ITIs, t907_IOs, &t9_0_0_0, t907_VT, t907_VTIGM, NULL};
TypeInfo t907_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CultureInfo", "System.Globalization", t907_MIs, t907_PIs, t907_FIs, NULL, &t907_TI, NULL, &t907__CustomAttributeCache, &t907_0_0_0, &t907_1_0_0, &t907_DM, NULL, NULL, NULL, t907_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t907), sizeof (t907), 0, -1, sizeof(t907_SFs), 0, -1, 8193, 0, 0, false, false, false, false, false, false, false, false, true, false, 38, 13, 40, 0, 0, 14, 2, 2};
#include "t1712.h"
// Metadata Definition System.Globalization.DateTimeFormatFlags
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
	"Unused", &t1712_0_0_32854, &t1712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1712_0_0_32854;
FieldInfo t1712_f3_FieldInfo = 
{
	"But", &t1712_0_0_32854, &t1712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1712_0_0_32854;
FieldInfo t1712_f4_FieldInfo = 
{
	"Serialized", &t1712_0_0_32854, &t1712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1712_0_0_32854;
FieldInfo t1712_f5_FieldInfo = 
{
	"By", &t1712_0_0_32854, &t1712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1712_0_0_32854;
FieldInfo t1712_f6_FieldInfo = 
{
	"Microsoft", &t1712_0_0_32854, &t1712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1712_FIs[] =
{
	&t1712_f1_FieldInfo,
	&t1712_f2_FieldInfo,
	&t1712_f3_FieldInfo,
	&t1712_f4_FieldInfo,
	&t1712_f5_FieldInfo,
	&t1712_f6_FieldInfo,
	NULL
};
static const int32_t t1712_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1712_f2_DefaultValue = 
{
	&t1712_f2_FieldInfo, { (char*)&t1712_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1712_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1712_f3_DefaultValue = 
{
	&t1712_f3_FieldInfo, { (char*)&t1712_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1712_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1712_f4_DefaultValue = 
{
	&t1712_f4_FieldInfo, { (char*)&t1712_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1712_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1712_f5_DefaultValue = 
{
	&t1712_f5_FieldInfo, { (char*)&t1712_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1712_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1712_f6_DefaultValue = 
{
	&t1712_f6_FieldInfo, { (char*)&t1712_f6_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1712_FDVs[] = 
{
	&t1712_f2_DefaultValue,
	&t1712_f3_DefaultValue,
	&t1712_f4_DefaultValue,
	&t1712_f5_DefaultValue,
	&t1712_f6_DefaultValue,
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
		t622 * tmp;
		tmp = (t622 *)il2cpp_codegen_object_new (&t622_TI);
		m3031(tmp, &m3031_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1712__CustomAttributeCache = {
1,
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
	&g_mscorlib_dll_Image, NULL, "DateTimeFormatFlags", "System.Globalization", t1712_MIs, NULL, t1712_FIs, NULL, &t125_TI, NULL, &t1712__CustomAttributeCache, &t1712_0_0_0, &t1712_1_0_0, &t1712_DM, NULL, NULL, NULL, t1712_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1712)+ sizeof (Il2CppObject), sizeof (t1712)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1710.h"
// Metadata Definition System.Globalization.DateTimeFormatInfo
extern TypeInfo t1710_TI;
#include "t1710MD.h"
extern Il2CppType t124_0_0_0;
static ParameterInfo t1710_m8721_ParameterInfos[] = 
{
	{"read_only", 0, 134220934, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8721_MI = 
{
	".ctor", (methodPointerType)&m8721, &t1710_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1710_m8721_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2424, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8722_MI = 
{
	".ctor", (methodPointerType)&m8722, &t1710_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2425, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8723_MI = 
{
	".cctor", (methodPointerType)&m8723, &t1710_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2426, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t912_0_0_0;
static ParameterInfo t1710_m8724_ParameterInfos[] = 
{
	{"provider", 0, 134220935, &EmptyCustomAttributesCache, &t912_0_0_0},
};
extern Il2CppType t1710_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8724_MI = 
{
	"GetInstance", (methodPointerType)&m8724, &t1710_TI, &t1710_0_0_0, RuntimeInvoker_t9_t9, t1710_m8724_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2427, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8725_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m8725, &t1710_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2428, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1710_0_0_0;
extern Il2CppType t1710_0_0_0;
static ParameterInfo t1710_m8726_ParameterInfos[] = 
{
	{"dtfi", 0, 134220936, &EmptyCustomAttributesCache, &t1710_0_0_0},
};
extern Il2CppType t1710_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8726_MI = 
{
	"ReadOnly", (methodPointerType)&m8726, &t1710_TI, &t1710_0_0_0, RuntimeInvoker_t9_t9, t1710_m8726_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2429, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8727_MI = 
{
	"Clone", (methodPointerType)&m8727, &t1710_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 2430, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1710_m8728_ParameterInfos[] = 
{
	{"formatType", 0, 134220937, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8728_MI = 
{
	"GetFormat", (methodPointerType)&m8728, &t1710_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1710_m8728_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, false, 2431, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1710_m8729_ParameterInfos[] = 
{
	{"month", 0, 134220938, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8729_MI = 
{
	"GetAbbreviatedMonthName", (methodPointerType)&m8729, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9_t125, t1710_m8729_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2432, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1710_m8730_ParameterInfos[] = 
{
	{"era", 0, 134220939, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8730_MI = 
{
	"GetEraName", (methodPointerType)&m8730, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9_t125, t1710_m8730_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2433, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1710_m8731_ParameterInfos[] = 
{
	{"month", 0, 134220940, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8731_MI = 
{
	"GetMonthName", (methodPointerType)&m8731, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9_t125, t1710_m8731_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2434, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8732_MI = 
{
	"get_RawAbbreviatedDayNames", (methodPointerType)&m8732, &t1710_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2435, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8733_MI = 
{
	"get_RawAbbreviatedMonthNames", (methodPointerType)&m8733, &t1710_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2436, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8734_MI = 
{
	"get_RawDayNames", (methodPointerType)&m8734, &t1710_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2437, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8735_MI = 
{
	"get_RawMonthNames", (methodPointerType)&m8735, &t1710_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2438, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8736_MI = 
{
	"get_AMDesignator", (methodPointerType)&m8736, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2439, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8737_MI = 
{
	"get_PMDesignator", (methodPointerType)&m8737, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2440, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8738_MI = 
{
	"get_DateSeparator", (methodPointerType)&m8738, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2441, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8739_MI = 
{
	"get_TimeSeparator", (methodPointerType)&m8739, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2442, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8740_MI = 
{
	"get_LongDatePattern", (methodPointerType)&m8740, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2443, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8741_MI = 
{
	"get_ShortDatePattern", (methodPointerType)&m8741, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2444, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8742_MI = 
{
	"get_ShortTimePattern", (methodPointerType)&m8742, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2445, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8743_MI = 
{
	"get_LongTimePattern", (methodPointerType)&m8743, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2446, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8744_MI = 
{
	"get_MonthDayPattern", (methodPointerType)&m8744, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2447, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8745_MI = 
{
	"get_YearMonthPattern", (methodPointerType)&m8745, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2448, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8746_MI = 
{
	"get_FullDateTimePattern", (methodPointerType)&m8746, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2449, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1710_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8747_MI = 
{
	"get_CurrentInfo", (methodPointerType)&m8747, &t1710_TI, &t1710_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2450, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1710_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8748_MI = 
{
	"get_InvariantInfo", (methodPointerType)&m8748, &t1710_TI, &t1710_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2451, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8749_MI = 
{
	"get_Calendar", (methodPointerType)&m8749, &t1710_TI, &t1705_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2452, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
static ParameterInfo t1710_m8750_ParameterInfos[] = 
{
	{"value", 0, 134220941, &EmptyCustomAttributesCache, &t1705_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8750_MI = 
{
	"set_Calendar", (methodPointerType)&m8750, &t1710_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1710_m8750_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 2453, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8751_MI = 
{
	"get_RFC1123Pattern", (methodPointerType)&m8751, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2454, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8752_MI = 
{
	"get_RoundtripPattern", (methodPointerType)&m8752, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2455, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8753_MI = 
{
	"get_SortableDateTimePattern", (methodPointerType)&m8753, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2456, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8754_MI = 
{
	"get_UniversalSortableDateTimePattern", (methodPointerType)&m8754, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2457, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8755_MI = 
{
	"GetAllDateTimePatternsInternal", (methodPointerType)&m8755, &t1710_TI, &t221_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2458, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8756_MI = 
{
	"FillAllDateTimePatterns", (methodPointerType)&m8756, &t1710_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2459, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t1710_m8757_ParameterInfos[] = 
{
	{"format", 0, 134220942, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m8757_MI = 
{
	"GetAllRawDateTimePatterns", (methodPointerType)&m8757, &t1710_TI, &t221_0_0_0, RuntimeInvoker_t9_t341, t1710_m8757_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 2460, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1706_0_0_0;
extern Il2CppType t1706_0_0_0;
static ParameterInfo t1710_m8758_ParameterInfos[] = 
{
	{"dayofweek", 0, 134220943, &EmptyCustomAttributesCache, &t1706_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8758_MI = 
{
	"GetDayName", (methodPointerType)&m8758, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9_t125, t1710_m8758_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2461, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1706_0_0_0;
static ParameterInfo t1710_m8759_ParameterInfos[] = 
{
	{"dayofweek", 0, 134220944, &EmptyCustomAttributesCache, &t1706_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8759_MI = 
{
	"GetAbbreviatedDayName", (methodPointerType)&m8759, &t1710_TI, &t2_0_0_0, RuntimeInvoker_t9_t125, t1710_m8759_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2462, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8760_MI = 
{
	"FillInvariantPatterns", (methodPointerType)&m8760, &t1710_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2463, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1710_m8761_ParameterInfos[] = 
{
	{"dates", 0, 134220945, &EmptyCustomAttributesCache, &t221_0_0_0},
	{"times", 1, 134220946, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8761_MI = 
{
	"PopulateCombinedList", (methodPointerType)&m8761, &t1710_TI, &t221_0_0_0, RuntimeInvoker_t9_t9_t9, t1710_m8761_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2464, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1710_MIs[] =
{
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
	NULL
};
extern Il2CppType t2_0_0_32849;
FieldInfo t1710_f0_FieldInfo = 
{
	"_RoundtripPattern", &t2_0_0_32849, &t1710_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_49;
FieldInfo t1710_f1_FieldInfo = 
{
	"MSG_READONLY", &t2_0_0_49, &t1710_TI, offsetof(t1710_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_49;
FieldInfo t1710_f2_FieldInfo = 
{
	"MSG_ARRAYSIZE_MONTH", &t2_0_0_49, &t1710_TI, offsetof(t1710_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_49;
FieldInfo t1710_f3_FieldInfo = 
{
	"MSG_ARRAYSIZE_DAY", &t2_0_0_49, &t1710_TI, offsetof(t1710_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1710_f4_FieldInfo = 
{
	"INVARIANT_ABBREVIATED_DAY_NAMES", &t221_0_0_49, &t1710_TI, offsetof(t1710_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1710_f5_FieldInfo = 
{
	"INVARIANT_DAY_NAMES", &t221_0_0_49, &t1710_TI, offsetof(t1710_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1710_f6_FieldInfo = 
{
	"INVARIANT_ABBREVIATED_MONTH_NAMES", &t221_0_0_49, &t1710_TI, offsetof(t1710_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1710_f7_FieldInfo = 
{
	"INVARIANT_MONTH_NAMES", &t221_0_0_49, &t1710_TI, offsetof(t1710_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1710_f8_FieldInfo = 
{
	"INVARIANT_SHORT_DAY_NAMES", &t221_0_0_49, &t1710_TI, offsetof(t1710_SFs, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1710_0_0_17;
FieldInfo t1710_f9_FieldInfo = 
{
	"theInvariantDateTimeFormatInfo", &t1710_0_0_17, &t1710_TI, offsetof(t1710_SFs, f9), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1710_f10_FieldInfo = 
{
	"m_isReadOnly", &t124_0_0_1, &t1710_TI, offsetof(t1710, f10), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f11_FieldInfo = 
{
	"amDesignator", &t2_0_0_1, &t1710_TI, offsetof(t1710, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f12_FieldInfo = 
{
	"pmDesignator", &t2_0_0_1, &t1710_TI, offsetof(t1710, f12), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f13_FieldInfo = 
{
	"dateSeparator", &t2_0_0_1, &t1710_TI, offsetof(t1710, f13), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f14_FieldInfo = 
{
	"timeSeparator", &t2_0_0_1, &t1710_TI, offsetof(t1710, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f15_FieldInfo = 
{
	"shortDatePattern", &t2_0_0_1, &t1710_TI, offsetof(t1710, f15), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f16_FieldInfo = 
{
	"longDatePattern", &t2_0_0_1, &t1710_TI, offsetof(t1710, f16), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f17_FieldInfo = 
{
	"shortTimePattern", &t2_0_0_1, &t1710_TI, offsetof(t1710, f17), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f18_FieldInfo = 
{
	"longTimePattern", &t2_0_0_1, &t1710_TI, offsetof(t1710, f18), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f19_FieldInfo = 
{
	"monthDayPattern", &t2_0_0_1, &t1710_TI, offsetof(t1710, f19), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f20_FieldInfo = 
{
	"yearMonthPattern", &t2_0_0_1, &t1710_TI, offsetof(t1710, f20), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f21_FieldInfo = 
{
	"fullDateTimePattern", &t2_0_0_1, &t1710_TI, offsetof(t1710, f21), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f22_FieldInfo = 
{
	"_RFC1123Pattern", &t2_0_0_1, &t1710_TI, offsetof(t1710, f22), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f23_FieldInfo = 
{
	"_SortableDateTimePattern", &t2_0_0_1, &t1710_TI, offsetof(t1710, f23), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f24_FieldInfo = 
{
	"_UniversalSortableDateTimePattern", &t2_0_0_1, &t1710_TI, offsetof(t1710, f24), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1710_f25_FieldInfo = 
{
	"firstDayOfWeek", &t125_0_0_1, &t1710_TI, offsetof(t1710, f25), &EmptyCustomAttributesCache};
extern Il2CppType t1705_0_0_1;
FieldInfo t1710_f26_FieldInfo = 
{
	"calendar", &t1705_0_0_1, &t1710_TI, offsetof(t1710, f26), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1710_f27_FieldInfo = 
{
	"calendarWeekRule", &t125_0_0_1, &t1710_TI, offsetof(t1710, f27), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f28_FieldInfo = 
{
	"abbreviatedDayNames", &t221_0_0_1, &t1710_TI, offsetof(t1710, f28), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f29_FieldInfo = 
{
	"dayNames", &t221_0_0_1, &t1710_TI, offsetof(t1710, f29), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f30_FieldInfo = 
{
	"monthNames", &t221_0_0_1, &t1710_TI, offsetof(t1710, f30), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f31_FieldInfo = 
{
	"abbreviatedMonthNames", &t221_0_0_1, &t1710_TI, offsetof(t1710, f31), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f32_FieldInfo = 
{
	"allShortDatePatterns", &t221_0_0_1, &t1710_TI, offsetof(t1710, f32), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f33_FieldInfo = 
{
	"allLongDatePatterns", &t221_0_0_1, &t1710_TI, offsetof(t1710, f33), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f34_FieldInfo = 
{
	"allShortTimePatterns", &t221_0_0_1, &t1710_TI, offsetof(t1710, f34), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f35_FieldInfo = 
{
	"allLongTimePatterns", &t221_0_0_1, &t1710_TI, offsetof(t1710, f35), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f36_FieldInfo = 
{
	"monthDayPatterns", &t221_0_0_1, &t1710_TI, offsetof(t1710, f36), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f37_FieldInfo = 
{
	"yearMonthPatterns", &t221_0_0_1, &t1710_TI, offsetof(t1710, f37), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f38_FieldInfo = 
{
	"shortDayNames", &t221_0_0_1, &t1710_TI, offsetof(t1710, f38), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1710_f39_FieldInfo = 
{
	"nDataItem", &t125_0_0_1, &t1710_TI, offsetof(t1710, f39), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1710_f40_FieldInfo = 
{
	"m_useUserOverride", &t124_0_0_1, &t1710_TI, offsetof(t1710, f40), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1710_f41_FieldInfo = 
{
	"m_isDefaultCalendar", &t124_0_0_1, &t1710_TI, offsetof(t1710, f41), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1710_f42_FieldInfo = 
{
	"CultureID", &t125_0_0_1, &t1710_TI, offsetof(t1710, f42), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1710_f43_FieldInfo = 
{
	"bUseCalendarInfo", &t124_0_0_1, &t1710_TI, offsetof(t1710, f43), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f44_FieldInfo = 
{
	"generalShortTimePattern", &t2_0_0_1, &t1710_TI, offsetof(t1710, f44), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f45_FieldInfo = 
{
	"generalLongTimePattern", &t2_0_0_1, &t1710_TI, offsetof(t1710, f45), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f46_FieldInfo = 
{
	"m_eraNames", &t221_0_0_1, &t1710_TI, offsetof(t1710, f46), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f47_FieldInfo = 
{
	"m_abbrevEraNames", &t221_0_0_1, &t1710_TI, offsetof(t1710, f47), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f48_FieldInfo = 
{
	"m_abbrevEnglishEraNames", &t221_0_0_1, &t1710_TI, offsetof(t1710, f48), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f49_FieldInfo = 
{
	"m_dateWords", &t221_0_0_1, &t1710_TI, offsetof(t1710, f49), &EmptyCustomAttributesCache};
extern Il2CppType t1101_0_0_1;
FieldInfo t1710_f50_FieldInfo = 
{
	"optionalCalendars", &t1101_0_0_1, &t1710_TI, offsetof(t1710, f50), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f51_FieldInfo = 
{
	"m_superShortDayNames", &t221_0_0_1, &t1710_TI, offsetof(t1710, f51), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f52_FieldInfo = 
{
	"genitiveMonthNames", &t221_0_0_1, &t1710_TI, offsetof(t1710, f52), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f53_FieldInfo = 
{
	"m_genitiveAbbreviatedMonthNames", &t221_0_0_1, &t1710_TI, offsetof(t1710, f53), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f54_FieldInfo = 
{
	"leapYearMonthNames", &t221_0_0_1, &t1710_TI, offsetof(t1710, f54), &EmptyCustomAttributesCache};
extern Il2CppType t1712_0_0_1;
FieldInfo t1710_f55_FieldInfo = 
{
	"formatFlags", &t1712_0_0_1, &t1710_TI, offsetof(t1710, f55), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1710_f56_FieldInfo = 
{
	"m_name", &t2_0_0_1, &t1710_TI, offsetof(t1710, f56), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1710_f57_FieldInfo = 
{
	"all_date_time_patterns", &t221_0_0_1, &t1710_TI, offsetof(t1710, f57), &EmptyCustomAttributesCache};
static FieldInfo* t1710_FIs[] =
{
	&t1710_f0_FieldInfo,
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
	&t1710_f14_FieldInfo,
	&t1710_f15_FieldInfo,
	&t1710_f16_FieldInfo,
	&t1710_f17_FieldInfo,
	&t1710_f18_FieldInfo,
	&t1710_f19_FieldInfo,
	&t1710_f20_FieldInfo,
	&t1710_f21_FieldInfo,
	&t1710_f22_FieldInfo,
	&t1710_f23_FieldInfo,
	&t1710_f24_FieldInfo,
	&t1710_f25_FieldInfo,
	&t1710_f26_FieldInfo,
	&t1710_f27_FieldInfo,
	&t1710_f28_FieldInfo,
	&t1710_f29_FieldInfo,
	&t1710_f30_FieldInfo,
	&t1710_f31_FieldInfo,
	&t1710_f32_FieldInfo,
	&t1710_f33_FieldInfo,
	&t1710_f34_FieldInfo,
	&t1710_f35_FieldInfo,
	&t1710_f36_FieldInfo,
	&t1710_f37_FieldInfo,
	&t1710_f38_FieldInfo,
	&t1710_f39_FieldInfo,
	&t1710_f40_FieldInfo,
	&t1710_f41_FieldInfo,
	&t1710_f42_FieldInfo,
	&t1710_f43_FieldInfo,
	&t1710_f44_FieldInfo,
	&t1710_f45_FieldInfo,
	&t1710_f46_FieldInfo,
	&t1710_f47_FieldInfo,
	&t1710_f48_FieldInfo,
	&t1710_f49_FieldInfo,
	&t1710_f50_FieldInfo,
	&t1710_f51_FieldInfo,
	&t1710_f52_FieldInfo,
	&t1710_f53_FieldInfo,
	&t1710_f54_FieldInfo,
	&t1710_f55_FieldInfo,
	&t1710_f56_FieldInfo,
	&t1710_f57_FieldInfo,
	NULL
};
static const uint16_t t1710_f0_DefaultValueData[] = { 0x79, 0x79, 0x79, 0x79, 0x27, 0x2D, 0x27, 0x4D, 0x4D, 0x27, 0x2D, 0x27, 0x64, 0x64, 0x27, 0x54, 0x27, 0x48, 0x48, 0x27, 0x3A, 0x27, 0x6D, 0x6D, 0x27, 0x3A, 0x27, 0x73, 0x73, 0x2E, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x4B, 0x00 };
static Il2CppFieldDefaultValueEntry t1710_f0_DefaultValue = 
{
	&t1710_f0_FieldInfo, { (char*)&t1710_f0_DefaultValueData, &t2_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1710_FDVs[] = 
{
	&t1710_f0_DefaultValue,
	NULL
};
extern MethodInfo m8725_MI;
static PropertyInfo t1710____IsReadOnly_PropertyInfo = 
{
	&t1710_TI, "IsReadOnly", &m8725_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8732_MI;
static PropertyInfo t1710____RawAbbreviatedDayNames_PropertyInfo = 
{
	&t1710_TI, "RawAbbreviatedDayNames", &m8732_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8733_MI;
static PropertyInfo t1710____RawAbbreviatedMonthNames_PropertyInfo = 
{
	&t1710_TI, "RawAbbreviatedMonthNames", &m8733_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8734_MI;
static PropertyInfo t1710____RawDayNames_PropertyInfo = 
{
	&t1710_TI, "RawDayNames", &m8734_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8735_MI;
static PropertyInfo t1710____RawMonthNames_PropertyInfo = 
{
	&t1710_TI, "RawMonthNames", &m8735_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8736_MI;
static PropertyInfo t1710____AMDesignator_PropertyInfo = 
{
	&t1710_TI, "AMDesignator", &m8736_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8737_MI;
static PropertyInfo t1710____PMDesignator_PropertyInfo = 
{
	&t1710_TI, "PMDesignator", &m8737_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8738_MI;
static PropertyInfo t1710____DateSeparator_PropertyInfo = 
{
	&t1710_TI, "DateSeparator", &m8738_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8739_MI;
static PropertyInfo t1710____TimeSeparator_PropertyInfo = 
{
	&t1710_TI, "TimeSeparator", &m8739_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8740_MI;
static PropertyInfo t1710____LongDatePattern_PropertyInfo = 
{
	&t1710_TI, "LongDatePattern", &m8740_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8741_MI;
static PropertyInfo t1710____ShortDatePattern_PropertyInfo = 
{
	&t1710_TI, "ShortDatePattern", &m8741_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8742_MI;
static PropertyInfo t1710____ShortTimePattern_PropertyInfo = 
{
	&t1710_TI, "ShortTimePattern", &m8742_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8743_MI;
static PropertyInfo t1710____LongTimePattern_PropertyInfo = 
{
	&t1710_TI, "LongTimePattern", &m8743_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8744_MI;
static PropertyInfo t1710____MonthDayPattern_PropertyInfo = 
{
	&t1710_TI, "MonthDayPattern", &m8744_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8745_MI;
static PropertyInfo t1710____YearMonthPattern_PropertyInfo = 
{
	&t1710_TI, "YearMonthPattern", &m8745_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8746_MI;
static PropertyInfo t1710____FullDateTimePattern_PropertyInfo = 
{
	&t1710_TI, "FullDateTimePattern", &m8746_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8747_MI;
static PropertyInfo t1710____CurrentInfo_PropertyInfo = 
{
	&t1710_TI, "CurrentInfo", &m8747_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8748_MI;
static PropertyInfo t1710____InvariantInfo_PropertyInfo = 
{
	&t1710_TI, "InvariantInfo", &m8748_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8749_MI;
extern MethodInfo m8750_MI;
static PropertyInfo t1710____Calendar_PropertyInfo = 
{
	&t1710_TI, "Calendar", &m8749_MI, &m8750_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8751_MI;
static PropertyInfo t1710____RFC1123Pattern_PropertyInfo = 
{
	&t1710_TI, "RFC1123Pattern", &m8751_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8752_MI;
static PropertyInfo t1710____RoundtripPattern_PropertyInfo = 
{
	&t1710_TI, "RoundtripPattern", &m8752_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8753_MI;
static PropertyInfo t1710____SortableDateTimePattern_PropertyInfo = 
{
	&t1710_TI, "SortableDateTimePattern", &m8753_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8754_MI;
static PropertyInfo t1710____UniversalSortableDateTimePattern_PropertyInfo = 
{
	&t1710_TI, "UniversalSortableDateTimePattern", &m8754_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1710_PIs[] =
{
	&t1710____IsReadOnly_PropertyInfo,
	&t1710____RawAbbreviatedDayNames_PropertyInfo,
	&t1710____RawAbbreviatedMonthNames_PropertyInfo,
	&t1710____RawDayNames_PropertyInfo,
	&t1710____RawMonthNames_PropertyInfo,
	&t1710____AMDesignator_PropertyInfo,
	&t1710____PMDesignator_PropertyInfo,
	&t1710____DateSeparator_PropertyInfo,
	&t1710____TimeSeparator_PropertyInfo,
	&t1710____LongDatePattern_PropertyInfo,
	&t1710____ShortDatePattern_PropertyInfo,
	&t1710____ShortTimePattern_PropertyInfo,
	&t1710____LongTimePattern_PropertyInfo,
	&t1710____MonthDayPattern_PropertyInfo,
	&t1710____YearMonthPattern_PropertyInfo,
	&t1710____FullDateTimePattern_PropertyInfo,
	&t1710____CurrentInfo_PropertyInfo,
	&t1710____InvariantInfo_PropertyInfo,
	&t1710____Calendar_PropertyInfo,
	&t1710____RFC1123Pattern_PropertyInfo,
	&t1710____RoundtripPattern_PropertyInfo,
	&t1710____SortableDateTimePattern_PropertyInfo,
	&t1710____UniversalSortableDateTimePattern_PropertyInfo,
	NULL
};
extern MethodInfo m8728_MI;
extern MethodInfo m8727_MI;
static Il2CppMethodReference t1710_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8728_MI,
	&m8727_MI,
};
static bool t1710_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1710_ITIs[] = 
{
	&t629_0_0_0,
	&t912_0_0_0,
};
static Il2CppInterfaceOffsetPair t1710_IOs[] = 
{
	{ &t629_0_0_0, 4},
	{ &t912_0_0_0, 4},
};
void t1710_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
struct t1710;
extern CustomAttributesCache t1710__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1710_DM = 
{
	NULL, NULL, t1710_ITIs, t1710_IOs, &t9_0_0_0, t1710_VT, t1710_VTIGM, NULL};
TypeInfo t1710_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DateTimeFormatInfo", "System.Globalization", t1710_MIs, t1710_PIs, t1710_FIs, NULL, &t1710_TI, NULL, &t1710__CustomAttributeCache, &t1710_0_0_0, &t1710_1_0_0, &t1710_DM, NULL, NULL, NULL, t1710_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1710), sizeof (t1710), 0, -1, sizeof(t1710_SFs), 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, true, false, 41, 23, 58, 0, 0, 6, 2, 2};
#include "t1531.h"
// Metadata Definition System.Globalization.DateTimeStyles
extern TypeInfo t1531_TI;
#include "t1531MD.h"
static MethodInfo* t1531_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1531_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1531_TI, offsetof(t1531, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1531_0_0_32854;
FieldInfo t1531_f2_FieldInfo = 
{
	"None", &t1531_0_0_32854, &t1531_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1531_0_0_32854;
FieldInfo t1531_f3_FieldInfo = 
{
	"AllowLeadingWhite", &t1531_0_0_32854, &t1531_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1531_0_0_32854;
FieldInfo t1531_f4_FieldInfo = 
{
	"AllowTrailingWhite", &t1531_0_0_32854, &t1531_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1531_0_0_32854;
FieldInfo t1531_f5_FieldInfo = 
{
	"AllowInnerWhite", &t1531_0_0_32854, &t1531_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1531_0_0_32854;
FieldInfo t1531_f6_FieldInfo = 
{
	"AllowWhiteSpaces", &t1531_0_0_32854, &t1531_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1531_0_0_32854;
FieldInfo t1531_f7_FieldInfo = 
{
	"NoCurrentDateDefault", &t1531_0_0_32854, &t1531_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1531_0_0_32854;
FieldInfo t1531_f8_FieldInfo = 
{
	"AdjustToUniversal", &t1531_0_0_32854, &t1531_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1531_0_0_32854;
FieldInfo t1531_f9_FieldInfo = 
{
	"AssumeLocal", &t1531_0_0_32854, &t1531_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1531_0_0_32854;
FieldInfo t1531_f10_FieldInfo = 
{
	"AssumeUniversal", &t1531_0_0_32854, &t1531_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1531_0_0_32854;
FieldInfo t1531_f11_FieldInfo = 
{
	"RoundtripKind", &t1531_0_0_32854, &t1531_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1531_FIs[] =
{
	&t1531_f1_FieldInfo,
	&t1531_f2_FieldInfo,
	&t1531_f3_FieldInfo,
	&t1531_f4_FieldInfo,
	&t1531_f5_FieldInfo,
	&t1531_f6_FieldInfo,
	&t1531_f7_FieldInfo,
	&t1531_f8_FieldInfo,
	&t1531_f9_FieldInfo,
	&t1531_f10_FieldInfo,
	&t1531_f11_FieldInfo,
	NULL
};
static const int32_t t1531_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1531_f2_DefaultValue = 
{
	&t1531_f2_FieldInfo, { (char*)&t1531_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1531_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1531_f3_DefaultValue = 
{
	&t1531_f3_FieldInfo, { (char*)&t1531_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1531_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1531_f4_DefaultValue = 
{
	&t1531_f4_FieldInfo, { (char*)&t1531_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1531_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1531_f5_DefaultValue = 
{
	&t1531_f5_FieldInfo, { (char*)&t1531_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1531_f6_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1531_f6_DefaultValue = 
{
	&t1531_f6_FieldInfo, { (char*)&t1531_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1531_f7_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1531_f7_DefaultValue = 
{
	&t1531_f7_FieldInfo, { (char*)&t1531_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1531_f8_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1531_f8_DefaultValue = 
{
	&t1531_f8_FieldInfo, { (char*)&t1531_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1531_f9_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1531_f9_DefaultValue = 
{
	&t1531_f9_FieldInfo, { (char*)&t1531_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1531_f10_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1531_f10_DefaultValue = 
{
	&t1531_f10_FieldInfo, { (char*)&t1531_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1531_f11_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1531_f11_DefaultValue = 
{
	&t1531_f11_FieldInfo, { (char*)&t1531_f11_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1531_FDVs[] = 
{
	&t1531_f2_DefaultValue,
	&t1531_f3_DefaultValue,
	&t1531_f4_DefaultValue,
	&t1531_f5_DefaultValue,
	&t1531_f6_DefaultValue,
	&t1531_f7_DefaultValue,
	&t1531_f8_DefaultValue,
	&t1531_f9_DefaultValue,
	&t1531_f10_DefaultValue,
	&t1531_f11_DefaultValue,
	NULL
};
static Il2CppMethodReference t1531_VT[] =
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
static bool t1531_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1531_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1531_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t622 * tmp;
		tmp = (t622 *)il2cpp_codegen_object_new (&t622_TI);
		m3031(tmp, &m3031_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1531__CustomAttributeCache = {
2,
NULL,
&t1531_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1531_0_0_0;
extern Il2CppType t1531_1_0_0;
extern CustomAttributesCache t1531__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1531_DM = 
{
	NULL, NULL, NULL, t1531_IOs, &t8_0_0_0, t1531_VT, t1531_VTIGM, NULL};
TypeInfo t1531_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DateTimeStyles", "System.Globalization", t1531_MIs, NULL, t1531_FIs, NULL, &t125_TI, NULL, &t1531__CustomAttributeCache, &t1531_0_0_0, &t1531_1_0_0, &t1531_DM, NULL, NULL, NULL, t1531_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1531)+ sizeof (Il2CppObject), sizeof (t1531)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 11, 0, 0, 23, 0, 3};
#include "t1713.h"
// Metadata Definition System.Globalization.DaylightTime
extern TypeInfo t1713_TI;
#include "t1713MD.h"
extern Il2CppType t272_0_0_0;
extern Il2CppType t272_0_0_0;
extern Il2CppType t310_0_0_0;
extern Il2CppType t310_0_0_0;
static ParameterInfo t1713_m8762_ParameterInfos[] = 
{
	{"start", 0, 134220947, &EmptyCustomAttributesCache, &t272_0_0_0},
	{"end", 1, 134220948, &EmptyCustomAttributesCache, &t272_0_0_0},
	{"delta", 2, 134220949, &EmptyCustomAttributesCache, &t310_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t272_t272_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m8762_MI = 
{
	".ctor", (methodPointerType)&m8762, &t1713_TI, &t122_0_0_0, RuntimeInvoker_t122_t272_t272_t310, t1713_m8762_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 2465, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t272_0_0_0;
extern void* RuntimeInvoker_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m8763_MI = 
{
	"get_Start", (methodPointerType)&m8763, &t1713_TI, &t272_0_0_0, RuntimeInvoker_t272, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2466, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t272_0_0_0;
extern void* RuntimeInvoker_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m8764_MI = 
{
	"get_End", (methodPointerType)&m8764, &t1713_TI, &t272_0_0_0, RuntimeInvoker_t272, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2467, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t310_0_0_0;
extern void* RuntimeInvoker_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m8765_MI = 
{
	"get_Delta", (methodPointerType)&m8765, &t1713_TI, &t310_0_0_0, RuntimeInvoker_t310, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2468, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1713_MIs[] =
{
	&m8762_MI,
	&m8763_MI,
	&m8764_MI,
	&m8765_MI,
	NULL
};
extern Il2CppType t272_0_0_1;
FieldInfo t1713_f0_FieldInfo = 
{
	"m_start", &t272_0_0_1, &t1713_TI, offsetof(t1713, f0), &EmptyCustomAttributesCache};
extern Il2CppType t272_0_0_1;
FieldInfo t1713_f1_FieldInfo = 
{
	"m_end", &t272_0_0_1, &t1713_TI, offsetof(t1713, f1), &EmptyCustomAttributesCache};
extern Il2CppType t310_0_0_1;
FieldInfo t1713_f2_FieldInfo = 
{
	"m_delta", &t310_0_0_1, &t1713_TI, offsetof(t1713, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1713_FIs[] =
{
	&t1713_f0_FieldInfo,
	&t1713_f1_FieldInfo,
	&t1713_f2_FieldInfo,
	NULL
};
extern MethodInfo m8763_MI;
static PropertyInfo t1713____Start_PropertyInfo = 
{
	&t1713_TI, "Start", &m8763_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8764_MI;
static PropertyInfo t1713____End_PropertyInfo = 
{
	&t1713_TI, "End", &m8764_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8765_MI;
static PropertyInfo t1713____Delta_PropertyInfo = 
{
	&t1713_TI, "Delta", &m8765_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1713_PIs[] =
{
	&t1713____Start_PropertyInfo,
	&t1713____End_PropertyInfo,
	&t1713____Delta_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1713_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1713_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1713_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1713__CustomAttributeCache = {
1,
NULL,
&t1713_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1713_0_0_0;
extern Il2CppType t1713_1_0_0;
struct t1713;
extern CustomAttributesCache t1713__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1713_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1713_VT, t1713_VTIGM, NULL};
TypeInfo t1713_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DaylightTime", "System.Globalization", t1713_MIs, t1713_PIs, t1713_FIs, NULL, &t1713_TI, NULL, &t1713__CustomAttributeCache, &t1713_0_0_0, &t1713_1_0_0, &t1713_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1713), sizeof (t1713), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 3, 3, 0, 0, 4, 0, 0};
#include "t1714.h"
// Metadata Definition System.Globalization.GregorianCalendar
extern TypeInfo t1714_TI;
#include "t1714MD.h"
extern Il2CppType t1715_0_0_0;
extern Il2CppType t1715_0_0_0;
static ParameterInfo t1714_m8766_ParameterInfos[] = 
{
	{"type", 0, 134220950, &EmptyCustomAttributesCache, &t1715_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8766_MI = 
{
	".ctor", (methodPointerType)&m8766, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1714_m8766_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2469, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8767_MI = 
{
	".ctor", (methodPointerType)&m8767, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2470, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1101_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8768_MI = 
{
	"get_Eras", (methodPointerType)&m8768, &t1714_TI, &t1101_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 2471, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1715_0_0_0;
static ParameterInfo t1714_m8769_ParameterInfos[] = 
{
	{"value", 0, 134220951, &EmptyCustomAttributesCache, &t1715_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8769_MI = 
{
	"set_CalendarType", (methodPointerType)&m8769, &t1714_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1714_m8769_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 10, 1, false, false, 2472, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t272_0_0_0;
static ParameterInfo t1714_m8770_ParameterInfos[] = 
{
	{"time", 0, 134220952, &EmptyCustomAttributesCache, &t272_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m8770_MI = 
{
	"GetDayOfMonth", (methodPointerType)&m8770, &t1714_TI, &t125_0_0_0, RuntimeInvoker_t125_t272, t1714_m8770_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 2473, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t272_0_0_0;
static ParameterInfo t1714_m8771_ParameterInfos[] = 
{
	{"time", 0, 134220953, &EmptyCustomAttributesCache, &t272_0_0_0},
};
extern Il2CppType t1706_0_0_0;
extern void* RuntimeInvoker_t1706_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m8771_MI = 
{
	"GetDayOfWeek", (methodPointerType)&m8771, &t1714_TI, &t1706_0_0_0, RuntimeInvoker_t1706_t272, t1714_m8771_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 1, false, false, 2474, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t272_0_0_0;
static ParameterInfo t1714_m8772_ParameterInfos[] = 
{
	{"time", 0, 134220954, &EmptyCustomAttributesCache, &t272_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m8772_MI = 
{
	"GetEra", (methodPointerType)&m8772, &t1714_TI, &t125_0_0_0, RuntimeInvoker_t125_t272, t1714_m8772_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 1, false, false, 2475, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t272_0_0_0;
static ParameterInfo t1714_m8773_ParameterInfos[] = 
{
	{"time", 0, 134220955, &EmptyCustomAttributesCache, &t272_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m8773_MI = 
{
	"GetMonth", (methodPointerType)&m8773, &t1714_TI, &t125_0_0_0, RuntimeInvoker_t125_t272, t1714_m8773_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 2476, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t272_0_0_0;
static ParameterInfo t1714_m8774_ParameterInfos[] = 
{
	{"time", 0, 134220956, &EmptyCustomAttributesCache, &t272_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m8774_MI = 
{
	"GetYear", (methodPointerType)&m8774, &t1714_TI, &t125_0_0_0, RuntimeInvoker_t125_t272, t1714_m8774_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 2477, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1714_MIs[] =
{
	&m8766_MI,
	&m8767_MI,
	&m8768_MI,
	&m8769_MI,
	&m8770_MI,
	&m8771_MI,
	&m8772_MI,
	&m8773_MI,
	&m8774_MI,
	NULL
};
extern Il2CppType t1715_0_0_131;
FieldInfo t1714_f4_FieldInfo = 
{
	"m_type", &t1715_0_0_131, &t1714_TI, offsetof(t1714, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1714_FIs[] =
{
	&t1714_f4_FieldInfo,
	NULL
};
extern MethodInfo m8768_MI;
static PropertyInfo t1714____Eras_PropertyInfo = 
{
	&t1714_TI, "Eras", &m8768_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8769_MI;
static PropertyInfo t1714____CalendarType_PropertyInfo = 
{
	&t1714_TI, "CalendarType", NULL, &m8769_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1714_PIs[] =
{
	&t1714____Eras_PropertyInfo,
	&t1714____CalendarType_PropertyInfo,
	NULL
};
extern MethodInfo m8770_MI;
extern MethodInfo m8771_MI;
extern MethodInfo m8772_MI;
extern MethodInfo m8773_MI;
extern MethodInfo m8774_MI;
static Il2CppMethodReference t1714_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8768_MI,
	&m8770_MI,
	&m8771_MI,
	&m8772_MI,
	&m8773_MI,
	&m8774_MI,
	&m8769_MI,
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
};
static Il2CppInterfaceOffsetPair t1714_IOs[] = 
{
	{ &t629_0_0_0, 4},
};
void t1714_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7891(tmp, il2cpp_codegen_string_new_wrapper("Serialization format not compatible with .NET"), &m7891_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1714__CustomAttributeCache = {
2,
NULL,
&t1714_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1714_0_0_0;
extern Il2CppType t1714_1_0_0;
struct t1714;
extern CustomAttributesCache t1714__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1714_DM = 
{
	NULL, NULL, NULL, t1714_IOs, &t1705_0_0_0, t1714_VT, t1714_VTIGM, NULL};
TypeInfo t1714_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GregorianCalendar", "System.Globalization", t1714_MIs, t1714_PIs, t1714_FIs, NULL, &t1714_TI, NULL, &t1714__CustomAttributeCache, &t1714_0_0_0, &t1714_1_0_0, &t1714_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1714), sizeof (t1714), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 2, 1, 0, 0, 11, 0, 1};
#include "t1715.h"
// Metadata Definition System.Globalization.GregorianCalendarTypes
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
	"Localized", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f3_FieldInfo = 
{
	"USEnglish", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f4_FieldInfo = 
{
	"MiddleEastFrench", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f5_FieldInfo = 
{
	"Arabic", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f6_FieldInfo = 
{
	"TransliteratedEnglish", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1715_0_0_32854;
FieldInfo t1715_f7_FieldInfo = 
{
	"TransliteratedFrench", &t1715_0_0_32854, &t1715_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1715_FIs[] =
{
	&t1715_f1_FieldInfo,
	&t1715_f2_FieldInfo,
	&t1715_f3_FieldInfo,
	&t1715_f4_FieldInfo,
	&t1715_f5_FieldInfo,
	&t1715_f6_FieldInfo,
	&t1715_f7_FieldInfo,
	NULL
};
static const int32_t t1715_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1715_f2_DefaultValue = 
{
	&t1715_f2_FieldInfo, { (char*)&t1715_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1715_f3_DefaultValue = 
{
	&t1715_f3_FieldInfo, { (char*)&t1715_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f4_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t1715_f4_DefaultValue = 
{
	&t1715_f4_FieldInfo, { (char*)&t1715_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f5_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t1715_f5_DefaultValue = 
{
	&t1715_f5_FieldInfo, { (char*)&t1715_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f6_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t1715_f6_DefaultValue = 
{
	&t1715_f6_FieldInfo, { (char*)&t1715_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1715_f7_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t1715_f7_DefaultValue = 
{
	&t1715_f7_FieldInfo, { (char*)&t1715_f7_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1715_FDVs[] = 
{
	&t1715_f2_DefaultValue,
	&t1715_f3_DefaultValue,
	&t1715_f4_DefaultValue,
	&t1715_f5_DefaultValue,
	&t1715_f6_DefaultValue,
	&t1715_f7_DefaultValue,
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
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1715__CustomAttributeCache = {
1,
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
	&g_mscorlib_dll_Image, NULL, "GregorianCalendarTypes", "System.Globalization", t1715_MIs, NULL, t1715_FIs, NULL, &t125_TI, NULL, &t1715__CustomAttributeCache, &t1715_0_0_0, &t1715_1_0_0, &t1715_DM, NULL, NULL, NULL, t1715_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1715)+ sizeof (Il2CppObject), sizeof (t1715)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 7, 0, 0, 23, 0, 3};
#include "t1561.h"
// Metadata Definition System.Globalization.NumberFormatInfo
extern TypeInfo t1561_TI;
#include "t1561MD.h"
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1561_m8775_ParameterInfos[] = 
{
	{"lcid", 0, 134220957, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"read_only", 1, 134220958, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8775_MI = 
{
	".ctor", (methodPointerType)&m8775, &t1561_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t1561_m8775_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 2478, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1561_m8776_ParameterInfos[] = 
{
	{"read_only", 0, 134220959, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8776_MI = 
{
	".ctor", (methodPointerType)&m8776, &t1561_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1561_m8776_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2479, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8777_MI = 
{
	".ctor", (methodPointerType)&m8777, &t1561_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2480, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8778_MI = 
{
	".cctor", (methodPointerType)&m8778, &t1561_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2481, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8779_MI = 
{
	"get_CurrencyDecimalDigits", (methodPointerType)&m8779, &t1561_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2482, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8780_MI = 
{
	"get_CurrencyDecimalSeparator", (methodPointerType)&m8780, &t1561_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2483, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8781_MI = 
{
	"get_CurrencyGroupSeparator", (methodPointerType)&m8781, &t1561_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2484, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1101_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8782_MI = 
{
	"get_RawCurrencyGroupSizes", (methodPointerType)&m8782, &t1561_TI, &t1101_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2485, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8783_MI = 
{
	"get_CurrencyNegativePattern", (methodPointerType)&m8783, &t1561_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2486, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8784_MI = 
{
	"get_CurrencyPositivePattern", (methodPointerType)&m8784, &t1561_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2487, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8785_MI = 
{
	"get_CurrencySymbol", (methodPointerType)&m8785, &t1561_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2488, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1561_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8786_MI = 
{
	"get_CurrentInfo", (methodPointerType)&m8786, &t1561_TI, &t1561_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2489, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1561_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8787_MI = 
{
	"get_InvariantInfo", (methodPointerType)&m8787, &t1561_TI, &t1561_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2490, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8788_MI = 
{
	"get_NaNSymbol", (methodPointerType)&m8788, &t1561_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2491, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8789_MI = 
{
	"get_NegativeInfinitySymbol", (methodPointerType)&m8789, &t1561_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2492, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8790_MI = 
{
	"get_NegativeSign", (methodPointerType)&m8790, &t1561_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2493, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8791_MI = 
{
	"get_NumberDecimalDigits", (methodPointerType)&m8791, &t1561_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2494, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8792_MI = 
{
	"get_NumberDecimalSeparator", (methodPointerType)&m8792, &t1561_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2495, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8793_MI = 
{
	"get_NumberGroupSeparator", (methodPointerType)&m8793, &t1561_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2496, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1101_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8794_MI = 
{
	"get_RawNumberGroupSizes", (methodPointerType)&m8794, &t1561_TI, &t1101_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2497, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8795_MI = 
{
	"get_NumberNegativePattern", (methodPointerType)&m8795, &t1561_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2498, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1561_m8796_ParameterInfos[] = 
{
	{"value", 0, 134220960, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8796_MI = 
{
	"set_NumberNegativePattern", (methodPointerType)&m8796, &t1561_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1561_m8796_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 2499, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8797_MI = 
{
	"get_PercentDecimalDigits", (methodPointerType)&m8797, &t1561_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2500, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8798_MI = 
{
	"get_PercentDecimalSeparator", (methodPointerType)&m8798, &t1561_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2501, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8799_MI = 
{
	"get_PercentGroupSeparator", (methodPointerType)&m8799, &t1561_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2502, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1101_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8800_MI = 
{
	"get_RawPercentGroupSizes", (methodPointerType)&m8800, &t1561_TI, &t1101_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2503, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8801_MI = 
{
	"get_PercentNegativePattern", (methodPointerType)&m8801, &t1561_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2504, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8802_MI = 
{
	"get_PercentPositivePattern", (methodPointerType)&m8802, &t1561_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2505, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8803_MI = 
{
	"get_PercentSymbol", (methodPointerType)&m8803, &t1561_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2506, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8804_MI = 
{
	"get_PerMilleSymbol", (methodPointerType)&m8804, &t1561_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2507, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8805_MI = 
{
	"get_PositiveInfinitySymbol", (methodPointerType)&m8805, &t1561_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2508, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8806_MI = 
{
	"get_PositiveSign", (methodPointerType)&m8806, &t1561_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2509, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1561_m8807_ParameterInfos[] = 
{
	{"formatType", 0, 134220961, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8807_MI = 
{
	"GetFormat", (methodPointerType)&m8807, &t1561_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1561_m8807_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, false, 2510, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8808_MI = 
{
	"Clone", (methodPointerType)&m8808, &t1561_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 2511, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t912_0_0_0;
static ParameterInfo t1561_m8809_ParameterInfos[] = 
{
	{"formatProvider", 0, 134220962, &EmptyCustomAttributesCache, &t912_0_0_0},
};
extern Il2CppType t1561_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8809_MI = 
{
	"GetInstance", (methodPointerType)&m8809, &t1561_TI, &t1561_0_0_0, RuntimeInvoker_t9_t9, t1561_m8809_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2512, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1561_MIs[] =
{
	&m8775_MI,
	&m8776_MI,
	&m8777_MI,
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
	&m8803_MI,
	&m8804_MI,
	&m8805_MI,
	&m8806_MI,
	&m8807_MI,
	&m8808_MI,
	&m8809_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t1561_f0_FieldInfo = 
{
	"isReadOnly", &t124_0_0_1, &t1561_TI, offsetof(t1561, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f1_FieldInfo = 
{
	"decimalFormats", &t2_0_0_1, &t1561_TI, offsetof(t1561, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f2_FieldInfo = 
{
	"currencyFormats", &t2_0_0_1, &t1561_TI, offsetof(t1561, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f3_FieldInfo = 
{
	"percentFormats", &t2_0_0_1, &t1561_TI, offsetof(t1561, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f4_FieldInfo = 
{
	"digitPattern", &t2_0_0_1, &t1561_TI, offsetof(t1561, f4), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f5_FieldInfo = 
{
	"zeroPattern", &t2_0_0_1, &t1561_TI, offsetof(t1561, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1561_f6_FieldInfo = 
{
	"currencyDecimalDigits", &t125_0_0_1, &t1561_TI, offsetof(t1561, f6), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f7_FieldInfo = 
{
	"currencyDecimalSeparator", &t2_0_0_1, &t1561_TI, offsetof(t1561, f7), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f8_FieldInfo = 
{
	"currencyGroupSeparator", &t2_0_0_1, &t1561_TI, offsetof(t1561, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1101_0_0_1;
FieldInfo t1561_f9_FieldInfo = 
{
	"currencyGroupSizes", &t1101_0_0_1, &t1561_TI, offsetof(t1561, f9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1561_f10_FieldInfo = 
{
	"currencyNegativePattern", &t125_0_0_1, &t1561_TI, offsetof(t1561, f10), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1561_f11_FieldInfo = 
{
	"currencyPositivePattern", &t125_0_0_1, &t1561_TI, offsetof(t1561, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f12_FieldInfo = 
{
	"currencySymbol", &t2_0_0_1, &t1561_TI, offsetof(t1561, f12), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f13_FieldInfo = 
{
	"nanSymbol", &t2_0_0_1, &t1561_TI, offsetof(t1561, f13), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f14_FieldInfo = 
{
	"negativeInfinitySymbol", &t2_0_0_1, &t1561_TI, offsetof(t1561, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f15_FieldInfo = 
{
	"negativeSign", &t2_0_0_1, &t1561_TI, offsetof(t1561, f15), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1561_f16_FieldInfo = 
{
	"numberDecimalDigits", &t125_0_0_1, &t1561_TI, offsetof(t1561, f16), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f17_FieldInfo = 
{
	"numberDecimalSeparator", &t2_0_0_1, &t1561_TI, offsetof(t1561, f17), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f18_FieldInfo = 
{
	"numberGroupSeparator", &t2_0_0_1, &t1561_TI, offsetof(t1561, f18), &EmptyCustomAttributesCache};
extern Il2CppType t1101_0_0_1;
FieldInfo t1561_f19_FieldInfo = 
{
	"numberGroupSizes", &t1101_0_0_1, &t1561_TI, offsetof(t1561, f19), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1561_f20_FieldInfo = 
{
	"numberNegativePattern", &t125_0_0_1, &t1561_TI, offsetof(t1561, f20), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1561_f21_FieldInfo = 
{
	"percentDecimalDigits", &t125_0_0_1, &t1561_TI, offsetof(t1561, f21), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f22_FieldInfo = 
{
	"percentDecimalSeparator", &t2_0_0_1, &t1561_TI, offsetof(t1561, f22), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f23_FieldInfo = 
{
	"percentGroupSeparator", &t2_0_0_1, &t1561_TI, offsetof(t1561, f23), &EmptyCustomAttributesCache};
extern Il2CppType t1101_0_0_1;
FieldInfo t1561_f24_FieldInfo = 
{
	"percentGroupSizes", &t1101_0_0_1, &t1561_TI, offsetof(t1561, f24), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1561_f25_FieldInfo = 
{
	"percentNegativePattern", &t125_0_0_1, &t1561_TI, offsetof(t1561, f25), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1561_f26_FieldInfo = 
{
	"percentPositivePattern", &t125_0_0_1, &t1561_TI, offsetof(t1561, f26), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f27_FieldInfo = 
{
	"percentSymbol", &t2_0_0_1, &t1561_TI, offsetof(t1561, f27), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f28_FieldInfo = 
{
	"perMilleSymbol", &t2_0_0_1, &t1561_TI, offsetof(t1561, f28), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f29_FieldInfo = 
{
	"positiveInfinitySymbol", &t2_0_0_1, &t1561_TI, offsetof(t1561, f29), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f30_FieldInfo = 
{
	"positiveSign", &t2_0_0_1, &t1561_TI, offsetof(t1561, f30), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1561_f31_FieldInfo = 
{
	"ansiCurrencySymbol", &t2_0_0_1, &t1561_TI, offsetof(t1561, f31), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1561_f32_FieldInfo = 
{
	"m_dataItem", &t125_0_0_1, &t1561_TI, offsetof(t1561, f32), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1561_f33_FieldInfo = 
{
	"m_useUserOverride", &t124_0_0_1, &t1561_TI, offsetof(t1561, f33), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1561_f34_FieldInfo = 
{
	"validForParseAsNumber", &t124_0_0_1, &t1561_TI, offsetof(t1561, f34), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1561_f35_FieldInfo = 
{
	"validForParseAsCurrency", &t124_0_0_1, &t1561_TI, offsetof(t1561, f35), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1561_f36_FieldInfo = 
{
	"nativeDigits", &t221_0_0_1, &t1561_TI, offsetof(t1561, f36), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1561_f37_FieldInfo = 
{
	"digitSubstitution", &t125_0_0_1, &t1561_TI, offsetof(t1561, f37), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_49;
FieldInfo t1561_f38_FieldInfo = 
{
	"invariantNativeDigits", &t221_0_0_49, &t1561_TI, offsetof(t1561_SFs, f38), &EmptyCustomAttributesCache};
static FieldInfo* t1561_FIs[] =
{
	&t1561_f0_FieldInfo,
	&t1561_f1_FieldInfo,
	&t1561_f2_FieldInfo,
	&t1561_f3_FieldInfo,
	&t1561_f4_FieldInfo,
	&t1561_f5_FieldInfo,
	&t1561_f6_FieldInfo,
	&t1561_f7_FieldInfo,
	&t1561_f8_FieldInfo,
	&t1561_f9_FieldInfo,
	&t1561_f10_FieldInfo,
	&t1561_f11_FieldInfo,
	&t1561_f12_FieldInfo,
	&t1561_f13_FieldInfo,
	&t1561_f14_FieldInfo,
	&t1561_f15_FieldInfo,
	&t1561_f16_FieldInfo,
	&t1561_f17_FieldInfo,
	&t1561_f18_FieldInfo,
	&t1561_f19_FieldInfo,
	&t1561_f20_FieldInfo,
	&t1561_f21_FieldInfo,
	&t1561_f22_FieldInfo,
	&t1561_f23_FieldInfo,
	&t1561_f24_FieldInfo,
	&t1561_f25_FieldInfo,
	&t1561_f26_FieldInfo,
	&t1561_f27_FieldInfo,
	&t1561_f28_FieldInfo,
	&t1561_f29_FieldInfo,
	&t1561_f30_FieldInfo,
	&t1561_f31_FieldInfo,
	&t1561_f32_FieldInfo,
	&t1561_f33_FieldInfo,
	&t1561_f34_FieldInfo,
	&t1561_f35_FieldInfo,
	&t1561_f36_FieldInfo,
	&t1561_f37_FieldInfo,
	&t1561_f38_FieldInfo,
	NULL
};
extern MethodInfo m8779_MI;
static PropertyInfo t1561____CurrencyDecimalDigits_PropertyInfo = 
{
	&t1561_TI, "CurrencyDecimalDigits", &m8779_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8780_MI;
static PropertyInfo t1561____CurrencyDecimalSeparator_PropertyInfo = 
{
	&t1561_TI, "CurrencyDecimalSeparator", &m8780_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8781_MI;
static PropertyInfo t1561____CurrencyGroupSeparator_PropertyInfo = 
{
	&t1561_TI, "CurrencyGroupSeparator", &m8781_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8782_MI;
static PropertyInfo t1561____RawCurrencyGroupSizes_PropertyInfo = 
{
	&t1561_TI, "RawCurrencyGroupSizes", &m8782_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8783_MI;
static PropertyInfo t1561____CurrencyNegativePattern_PropertyInfo = 
{
	&t1561_TI, "CurrencyNegativePattern", &m8783_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8784_MI;
static PropertyInfo t1561____CurrencyPositivePattern_PropertyInfo = 
{
	&t1561_TI, "CurrencyPositivePattern", &m8784_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8785_MI;
static PropertyInfo t1561____CurrencySymbol_PropertyInfo = 
{
	&t1561_TI, "CurrencySymbol", &m8785_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8786_MI;
static PropertyInfo t1561____CurrentInfo_PropertyInfo = 
{
	&t1561_TI, "CurrentInfo", &m8786_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8787_MI;
static PropertyInfo t1561____InvariantInfo_PropertyInfo = 
{
	&t1561_TI, "InvariantInfo", &m8787_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8788_MI;
static PropertyInfo t1561____NaNSymbol_PropertyInfo = 
{
	&t1561_TI, "NaNSymbol", &m8788_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8789_MI;
static PropertyInfo t1561____NegativeInfinitySymbol_PropertyInfo = 
{
	&t1561_TI, "NegativeInfinitySymbol", &m8789_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8790_MI;
static PropertyInfo t1561____NegativeSign_PropertyInfo = 
{
	&t1561_TI, "NegativeSign", &m8790_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8791_MI;
static PropertyInfo t1561____NumberDecimalDigits_PropertyInfo = 
{
	&t1561_TI, "NumberDecimalDigits", &m8791_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8792_MI;
static PropertyInfo t1561____NumberDecimalSeparator_PropertyInfo = 
{
	&t1561_TI, "NumberDecimalSeparator", &m8792_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8793_MI;
static PropertyInfo t1561____NumberGroupSeparator_PropertyInfo = 
{
	&t1561_TI, "NumberGroupSeparator", &m8793_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8794_MI;
static PropertyInfo t1561____RawNumberGroupSizes_PropertyInfo = 
{
	&t1561_TI, "RawNumberGroupSizes", &m8794_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8795_MI;
extern MethodInfo m8796_MI;
static PropertyInfo t1561____NumberNegativePattern_PropertyInfo = 
{
	&t1561_TI, "NumberNegativePattern", &m8795_MI, &m8796_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8797_MI;
static PropertyInfo t1561____PercentDecimalDigits_PropertyInfo = 
{
	&t1561_TI, "PercentDecimalDigits", &m8797_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8798_MI;
static PropertyInfo t1561____PercentDecimalSeparator_PropertyInfo = 
{
	&t1561_TI, "PercentDecimalSeparator", &m8798_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8799_MI;
static PropertyInfo t1561____PercentGroupSeparator_PropertyInfo = 
{
	&t1561_TI, "PercentGroupSeparator", &m8799_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8800_MI;
static PropertyInfo t1561____RawPercentGroupSizes_PropertyInfo = 
{
	&t1561_TI, "RawPercentGroupSizes", &m8800_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8801_MI;
static PropertyInfo t1561____PercentNegativePattern_PropertyInfo = 
{
	&t1561_TI, "PercentNegativePattern", &m8801_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8802_MI;
static PropertyInfo t1561____PercentPositivePattern_PropertyInfo = 
{
	&t1561_TI, "PercentPositivePattern", &m8802_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8803_MI;
static PropertyInfo t1561____PercentSymbol_PropertyInfo = 
{
	&t1561_TI, "PercentSymbol", &m8803_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8804_MI;
static PropertyInfo t1561____PerMilleSymbol_PropertyInfo = 
{
	&t1561_TI, "PerMilleSymbol", &m8804_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8805_MI;
static PropertyInfo t1561____PositiveInfinitySymbol_PropertyInfo = 
{
	&t1561_TI, "PositiveInfinitySymbol", &m8805_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8806_MI;
static PropertyInfo t1561____PositiveSign_PropertyInfo = 
{
	&t1561_TI, "PositiveSign", &m8806_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1561_PIs[] =
{
	&t1561____CurrencyDecimalDigits_PropertyInfo,
	&t1561____CurrencyDecimalSeparator_PropertyInfo,
	&t1561____CurrencyGroupSeparator_PropertyInfo,
	&t1561____RawCurrencyGroupSizes_PropertyInfo,
	&t1561____CurrencyNegativePattern_PropertyInfo,
	&t1561____CurrencyPositivePattern_PropertyInfo,
	&t1561____CurrencySymbol_PropertyInfo,
	&t1561____CurrentInfo_PropertyInfo,
	&t1561____InvariantInfo_PropertyInfo,
	&t1561____NaNSymbol_PropertyInfo,
	&t1561____NegativeInfinitySymbol_PropertyInfo,
	&t1561____NegativeSign_PropertyInfo,
	&t1561____NumberDecimalDigits_PropertyInfo,
	&t1561____NumberDecimalSeparator_PropertyInfo,
	&t1561____NumberGroupSeparator_PropertyInfo,
	&t1561____RawNumberGroupSizes_PropertyInfo,
	&t1561____NumberNegativePattern_PropertyInfo,
	&t1561____PercentDecimalDigits_PropertyInfo,
	&t1561____PercentDecimalSeparator_PropertyInfo,
	&t1561____PercentGroupSeparator_PropertyInfo,
	&t1561____RawPercentGroupSizes_PropertyInfo,
	&t1561____PercentNegativePattern_PropertyInfo,
	&t1561____PercentPositivePattern_PropertyInfo,
	&t1561____PercentSymbol_PropertyInfo,
	&t1561____PerMilleSymbol_PropertyInfo,
	&t1561____PositiveInfinitySymbol_PropertyInfo,
	&t1561____PositiveSign_PropertyInfo,
	NULL
};
extern MethodInfo m8807_MI;
extern MethodInfo m8808_MI;
static Il2CppMethodReference t1561_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8807_MI,
	&m8808_MI,
};
static bool t1561_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1561_ITIs[] = 
{
	&t629_0_0_0,
	&t912_0_0_0,
};
static Il2CppInterfaceOffsetPair t1561_IOs[] = 
{
	{ &t629_0_0_0, 4},
	{ &t912_0_0_0, 4},
};
void t1561_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1561__CustomAttributeCache = {
1,
NULL,
&t1561_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1561_0_0_0;
extern Il2CppType t1561_1_0_0;
struct t1561;
extern CustomAttributesCache t1561__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1561_DM = 
{
	NULL, NULL, t1561_ITIs, t1561_IOs, &t9_0_0_0, t1561_VT, t1561_VTIGM, NULL};
TypeInfo t1561_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NumberFormatInfo", "System.Globalization", t1561_MIs, t1561_PIs, t1561_FIs, NULL, &t1561_TI, NULL, &t1561__CustomAttributeCache, &t1561_0_0_0, &t1561_1_0_0, &t1561_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1561), sizeof (t1561), 0, -1, sizeof(t1561_SFs), 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, true, false, 35, 27, 39, 0, 0, 6, 2, 2};
#include "t908.h"
// Metadata Definition System.Globalization.NumberStyles
extern TypeInfo t908_TI;
#include "t908MD.h"
static MethodInfo* t908_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t908_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t908_TI, offsetof(t908, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f2_FieldInfo = 
{
	"None", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f3_FieldInfo = 
{
	"AllowLeadingWhite", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f4_FieldInfo = 
{
	"AllowTrailingWhite", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f5_FieldInfo = 
{
	"AllowLeadingSign", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f6_FieldInfo = 
{
	"AllowTrailingSign", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f7_FieldInfo = 
{
	"AllowParentheses", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f8_FieldInfo = 
{
	"AllowDecimalPoint", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f9_FieldInfo = 
{
	"AllowThousands", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f10_FieldInfo = 
{
	"AllowExponent", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f11_FieldInfo = 
{
	"AllowCurrencySymbol", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f12_FieldInfo = 
{
	"AllowHexSpecifier", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f13_FieldInfo = 
{
	"Integer", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f14_FieldInfo = 
{
	"HexNumber", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f15_FieldInfo = 
{
	"Number", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f16_FieldInfo = 
{
	"Float", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f17_FieldInfo = 
{
	"Currency", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t908_0_0_32854;
FieldInfo t908_f18_FieldInfo = 
{
	"Any", &t908_0_0_32854, &t908_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t908_FIs[] =
{
	&t908_f1_FieldInfo,
	&t908_f2_FieldInfo,
	&t908_f3_FieldInfo,
	&t908_f4_FieldInfo,
	&t908_f5_FieldInfo,
	&t908_f6_FieldInfo,
	&t908_f7_FieldInfo,
	&t908_f8_FieldInfo,
	&t908_f9_FieldInfo,
	&t908_f10_FieldInfo,
	&t908_f11_FieldInfo,
	&t908_f12_FieldInfo,
	&t908_f13_FieldInfo,
	&t908_f14_FieldInfo,
	&t908_f15_FieldInfo,
	&t908_f16_FieldInfo,
	&t908_f17_FieldInfo,
	&t908_f18_FieldInfo,
	NULL
};
static const int32_t t908_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t908_f2_DefaultValue = 
{
	&t908_f2_FieldInfo, { (char*)&t908_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t908_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t908_f3_DefaultValue = 
{
	&t908_f3_FieldInfo, { (char*)&t908_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t908_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t908_f4_DefaultValue = 
{
	&t908_f4_FieldInfo, { (char*)&t908_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t908_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t908_f5_DefaultValue = 
{
	&t908_f5_FieldInfo, { (char*)&t908_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t908_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t908_f6_DefaultValue = 
{
	&t908_f6_FieldInfo, { (char*)&t908_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t908_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t908_f7_DefaultValue = 
{
	&t908_f7_FieldInfo, { (char*)&t908_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t908_f8_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t908_f8_DefaultValue = 
{
	&t908_f8_FieldInfo, { (char*)&t908_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t908_f9_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t908_f9_DefaultValue = 
{
	&t908_f9_FieldInfo, { (char*)&t908_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t908_f10_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t908_f10_DefaultValue = 
{
	&t908_f10_FieldInfo, { (char*)&t908_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t908_f11_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t908_f11_DefaultValue = 
{
	&t908_f11_FieldInfo, { (char*)&t908_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t908_f12_DefaultValueData = 512;
static Il2CppFieldDefaultValueEntry t908_f12_DefaultValue = 
{
	&t908_f12_FieldInfo, { (char*)&t908_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t908_f13_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t908_f13_DefaultValue = 
{
	&t908_f13_FieldInfo, { (char*)&t908_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t908_f14_DefaultValueData = 515;
static Il2CppFieldDefaultValueEntry t908_f14_DefaultValue = 
{
	&t908_f14_FieldInfo, { (char*)&t908_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t908_f15_DefaultValueData = 111;
static Il2CppFieldDefaultValueEntry t908_f15_DefaultValue = 
{
	&t908_f15_FieldInfo, { (char*)&t908_f15_DefaultValueData, &t125_0_0_0 }};
static const int32_t t908_f16_DefaultValueData = 167;
static Il2CppFieldDefaultValueEntry t908_f16_DefaultValue = 
{
	&t908_f16_FieldInfo, { (char*)&t908_f16_DefaultValueData, &t125_0_0_0 }};
static const int32_t t908_f17_DefaultValueData = 383;
static Il2CppFieldDefaultValueEntry t908_f17_DefaultValue = 
{
	&t908_f17_FieldInfo, { (char*)&t908_f17_DefaultValueData, &t125_0_0_0 }};
static const int32_t t908_f18_DefaultValueData = 511;
static Il2CppFieldDefaultValueEntry t908_f18_DefaultValue = 
{
	&t908_f18_FieldInfo, { (char*)&t908_f18_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t908_FDVs[] = 
{
	&t908_f2_DefaultValue,
	&t908_f3_DefaultValue,
	&t908_f4_DefaultValue,
	&t908_f5_DefaultValue,
	&t908_f6_DefaultValue,
	&t908_f7_DefaultValue,
	&t908_f8_DefaultValue,
	&t908_f9_DefaultValue,
	&t908_f10_DefaultValue,
	&t908_f11_DefaultValue,
	&t908_f12_DefaultValue,
	&t908_f13_DefaultValue,
	&t908_f14_DefaultValue,
	&t908_f15_DefaultValue,
	&t908_f16_DefaultValue,
	&t908_f17_DefaultValue,
	&t908_f18_DefaultValue,
	NULL
};
static Il2CppMethodReference t908_VT[] =
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
static bool t908_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t908_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t908_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t622 * tmp;
		tmp = (t622 *)il2cpp_codegen_object_new (&t622_TI);
		m3031(tmp, &m3031_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t908__CustomAttributeCache = {
2,
NULL,
&t908_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t908_0_0_0;
extern Il2CppType t908_1_0_0;
extern CustomAttributesCache t908__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t908_DM = 
{
	NULL, NULL, NULL, t908_IOs, &t8_0_0_0, t908_VT, t908_VTIGM, NULL};
TypeInfo t908_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NumberStyles", "System.Globalization", t908_MIs, NULL, t908_FIs, NULL, &t125_TI, NULL, &t908__CustomAttributeCache, &t908_0_0_0, &t908_1_0_0, &t908_DM, NULL, NULL, NULL, t908_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t908)+ sizeof (Il2CppObject), sizeof (t908)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 18, 0, 0, 23, 0, 3};
#include "t1716.h"
// Metadata Definition System.Globalization.TextInfo/Data
extern TypeInfo t1716_TI;
#include "t1716MD.h"
static MethodInfo* t1716_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_6;
FieldInfo t1716_f0_FieldInfo = 
{
	"ansi", &t125_0_0_6, &t1716_TI, offsetof(t1716, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1716_f1_FieldInfo = 
{
	"ebcdic", &t125_0_0_6, &t1716_TI, offsetof(t1716, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1716_f2_FieldInfo = 
{
	"mac", &t125_0_0_6, &t1716_TI, offsetof(t1716, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1716_f3_FieldInfo = 
{
	"oem", &t125_0_0_6, &t1716_TI, offsetof(t1716, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t582_0_0_6;
FieldInfo t1716_f4_FieldInfo = 
{
	"list_sep", &t582_0_0_6, &t1716_TI, offsetof(t1716, f4) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1716_FIs[] =
{
	&t1716_f0_FieldInfo,
	&t1716_f1_FieldInfo,
	&t1716_f2_FieldInfo,
	&t1716_f3_FieldInfo,
	&t1716_f4_FieldInfo,
	NULL
};
static Il2CppMethodReference t1716_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1716_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1716_0_0_0;
extern Il2CppType t1716_1_0_0;
extern TypeInfo t1622_TI;
extern Il2CppType t1622_0_0_0;
const Il2CppTypeDefinitionMetadata t1716_DM = 
{
	&t1622_0_0_0, NULL, NULL, NULL, &t117_0_0_0, t1716_VT, t1716_VTIGM, NULL};
TypeInfo t1716_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Data", "", t1716_MIs, NULL, t1716_FIs, NULL, &t1716_TI, NULL, &EmptyCustomAttributesCache, &t1716_0_0_0, &t1716_1_0_0, &t1716_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1716)+ sizeof (Il2CppObject), sizeof (t1716)+ sizeof (Il2CppObject), 0, sizeof(t1716 ), 0, 0, -1, 1048843, 0, 0, true, false, false, false, false, false, false, false, false, true, 0, 0, 5, 0, 0, 4, 0, 0};
#include "t1622.h"
// Metadata Definition System.Globalization.TextInfo
#include "t1622MD.h"
extern Il2CppType t907_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2262_0_0_0;
extern Il2CppType t2262_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1622_m8810_ParameterInfos[] = 
{
	{"ci", 0, 134220963, &EmptyCustomAttributesCache, &t907_0_0_0},
	{"lcid", 1, 134220964, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"data", 2, 134220965, &EmptyCustomAttributesCache, &t2262_0_0_0},
	{"read_only", 3, 134220966, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8810_MI = 
{
	".ctor", (methodPointerType)&m8810, &t1622_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t9_t186, t1622_m8810_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 2513, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1622_m8811_ParameterInfos[] = 
{
	{"sender", 0, 134220967, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1622__CustomAttributeCache_m8811;
MethodInfo m8811_MI = 
{
	"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", (methodPointerType)&m8811, &t1622_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1622_m8811_ParameterInfos, &t1622__CustomAttributeCache_m8811, 481, 0, 4, 1, false, false, 2514, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8812_MI = 
{
	"get_CultureName", (methodPointerType)&m8812, &t1622_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2515, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1622_m8813_ParameterInfos[] = 
{
	{"obj", 0, 134220968, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8813_MI = 
{
	"Equals", (methodPointerType)&m8813, &t1622_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1622_m8813_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 2516, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8814_MI = 
{
	"GetHashCode", (methodPointerType)&m8814, &t1622_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 2517, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8815_MI = 
{
	"ToString", (methodPointerType)&m8815, &t1622_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2518, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1622_m8816_ParameterInfos[] = 
{
	{"c", 0, 134220969, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t309_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m8816_MI = 
{
	"ToLower", (methodPointerType)&m8816, &t1622_TI, &t309_0_0_0, RuntimeInvoker_t309_t341, t1622_m8816_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 1, false, false, 2519, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1622_m8817_ParameterInfos[] = 
{
	{"c", 0, 134220970, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t309_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m8817_MI = 
{
	"ToUpper", (methodPointerType)&m8817, &t1622_TI, &t309_0_0_0, RuntimeInvoker_t309_t341, t1622_m8817_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 1, false, false, 2520, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1622_m8818_ParameterInfos[] = 
{
	{"str", 0, 134220971, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8818_MI = 
{
	"ToLower", (methodPointerType)&m8818, &t1622_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1622_m8818_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 1, false, false, 2521, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1622_m8819_ParameterInfos[] = 
{
	{"str", 0, 134220972, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8819_MI = 
{
	"ToUpper", (methodPointerType)&m8819, &t1622_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1622_m8819_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 1, false, false, 2522, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1622_MIs[] =
{
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
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t1622_f0_FieldInfo = 
{
	"m_isReadOnly", &t124_0_0_1, &t1622_TI, offsetof(t1622, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1622_f1_FieldInfo = 
{
	"customCultureName", &t2_0_0_1, &t1622_TI, offsetof(t1622, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1622_f2_FieldInfo = 
{
	"m_win32LangID", &t125_0_0_1, &t1622_TI, offsetof(t1622, f2), &EmptyCustomAttributesCache};
extern Il2CppType t907_0_0_161;
FieldInfo t1622_f3_FieldInfo = 
{
	"ci", &t907_0_0_161, &t1622_TI, offsetof(t1622, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_161;
FieldInfo t1622_f4_FieldInfo = 
{
	"handleDotI", &t124_0_0_161, &t1622_TI, offsetof(t1622, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1716_0_0_161;
FieldInfo t1622_f5_FieldInfo = 
{
	"data", &t1716_0_0_161, &t1622_TI, offsetof(t1622, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1622_FIs[] =
{
	&t1622_f0_FieldInfo,
	&t1622_f1_FieldInfo,
	&t1622_f2_FieldInfo,
	&t1622_f3_FieldInfo,
	&t1622_f4_FieldInfo,
	&t1622_f5_FieldInfo,
	NULL
};
extern MethodInfo m8812_MI;
extern CustomAttributesCache t1622__CustomAttributeCache_t1622____CultureName_PropertyInfo;
static PropertyInfo t1622____CultureName_PropertyInfo = 
{
	&t1622_TI, "CultureName", &m8812_MI, NULL, 0, &t1622__CustomAttributeCache_t1622____CultureName_PropertyInfo};
static PropertyInfo* t1622_PIs[] =
{
	&t1622____CultureName_PropertyInfo,
	NULL
};
static const Il2CppType* t1622_TI__nestedTypes[1] =
{
	&t1716_0_0_0,
};
extern MethodInfo m8813_MI;
extern MethodInfo m8814_MI;
extern MethodInfo m8815_MI;
extern MethodInfo m8811_MI;
extern MethodInfo m8816_MI;
extern MethodInfo m8817_MI;
extern MethodInfo m8818_MI;
extern MethodInfo m8819_MI;
static Il2CppMethodReference t1622_VT[] =
{
	&m8813_MI,
	&m646_MI,
	&m8814_MI,
	&m8815_MI,
	&m8811_MI,
	&m8816_MI,
	&m8817_MI,
	&m8818_MI,
	&m8819_MI,
};
static bool t1622_VTIGM[] =
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
static const Il2CppType* t1622_ITIs[] = 
{
	&t629_0_0_0,
	&t1112_0_0_0,
};
static Il2CppInterfaceOffsetPair t1622_IOs[] = 
{
	{ &t629_0_0_0, 4},
	{ &t1112_0_0_0, 4},
};
void t1622_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7891(tmp, il2cpp_codegen_string_new_wrapper("IDeserializationCallback isn't implemented."), &m7891_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern MethodInfo m7890_MI;
void t1622_CustomAttributesCacheGenerator_m8811(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7890(tmp, &m7890_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1622_CustomAttributesCacheGenerator_t1622____CultureName_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1622__CustomAttributeCache = {
2,
NULL,
&t1622_CustomAttributesCacheGenerator
};
CustomAttributesCache t1622__CustomAttributeCache_m8811 = {
1,
NULL,
&t1622_CustomAttributesCacheGenerator_m8811
};
CustomAttributesCache t1622__CustomAttributeCache_t1622____CultureName_PropertyInfo = {
1,
NULL,
&t1622_CustomAttributesCacheGenerator_t1622____CultureName_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1622_1_0_0;
struct t1622;
extern CustomAttributesCache t1622__CustomAttributeCache;
extern CustomAttributesCache t1622__CustomAttributeCache_m8811;
extern CustomAttributesCache t1622__CustomAttributeCache_t1622____CultureName_PropertyInfo;
const Il2CppTypeDefinitionMetadata t1622_DM = 
{
	NULL, t1622_TI__nestedTypes, t1622_ITIs, t1622_IOs, &t9_0_0_0, t1622_VT, t1622_VTIGM, NULL};
TypeInfo t1622_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TextInfo", "System.Globalization", t1622_MIs, t1622_PIs, t1622_FIs, NULL, &t1622_TI, NULL, &t1622__CustomAttributeCache, &t1622_0_0_0, &t1622_1_0_0, &t1622_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1622), sizeof (t1622), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 1, 6, 0, 1, 9, 2, 2};
#include "t1291.h"
// Metadata Definition System.Globalization.UnicodeCategory
extern TypeInfo t1291_TI;
#include "t1291MD.h"
static MethodInfo* t1291_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1291_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1291_TI, offsetof(t1291, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f2_FieldInfo = 
{
	"UppercaseLetter", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f3_FieldInfo = 
{
	"LowercaseLetter", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f4_FieldInfo = 
{
	"TitlecaseLetter", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f5_FieldInfo = 
{
	"ModifierLetter", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f6_FieldInfo = 
{
	"OtherLetter", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f7_FieldInfo = 
{
	"NonSpacingMark", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f8_FieldInfo = 
{
	"SpacingCombiningMark", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f9_FieldInfo = 
{
	"EnclosingMark", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f10_FieldInfo = 
{
	"DecimalDigitNumber", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f11_FieldInfo = 
{
	"LetterNumber", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f12_FieldInfo = 
{
	"OtherNumber", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f13_FieldInfo = 
{
	"SpaceSeparator", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f14_FieldInfo = 
{
	"LineSeparator", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f15_FieldInfo = 
{
	"ParagraphSeparator", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f16_FieldInfo = 
{
	"Control", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f17_FieldInfo = 
{
	"Format", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f18_FieldInfo = 
{
	"Surrogate", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f19_FieldInfo = 
{
	"PrivateUse", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f20_FieldInfo = 
{
	"ConnectorPunctuation", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f21_FieldInfo = 
{
	"DashPunctuation", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f22_FieldInfo = 
{
	"OpenPunctuation", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f23_FieldInfo = 
{
	"ClosePunctuation", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f24_FieldInfo = 
{
	"InitialQuotePunctuation", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f25_FieldInfo = 
{
	"FinalQuotePunctuation", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f26_FieldInfo = 
{
	"OtherPunctuation", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f27_FieldInfo = 
{
	"MathSymbol", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f28_FieldInfo = 
{
	"CurrencySymbol", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f29_FieldInfo = 
{
	"ModifierSymbol", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f30_FieldInfo = 
{
	"OtherSymbol", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1291_0_0_32854;
FieldInfo t1291_f31_FieldInfo = 
{
	"OtherNotAssigned", &t1291_0_0_32854, &t1291_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1291_FIs[] =
{
	&t1291_f1_FieldInfo,
	&t1291_f2_FieldInfo,
	&t1291_f3_FieldInfo,
	&t1291_f4_FieldInfo,
	&t1291_f5_FieldInfo,
	&t1291_f6_FieldInfo,
	&t1291_f7_FieldInfo,
	&t1291_f8_FieldInfo,
	&t1291_f9_FieldInfo,
	&t1291_f10_FieldInfo,
	&t1291_f11_FieldInfo,
	&t1291_f12_FieldInfo,
	&t1291_f13_FieldInfo,
	&t1291_f14_FieldInfo,
	&t1291_f15_FieldInfo,
	&t1291_f16_FieldInfo,
	&t1291_f17_FieldInfo,
	&t1291_f18_FieldInfo,
	&t1291_f19_FieldInfo,
	&t1291_f20_FieldInfo,
	&t1291_f21_FieldInfo,
	&t1291_f22_FieldInfo,
	&t1291_f23_FieldInfo,
	&t1291_f24_FieldInfo,
	&t1291_f25_FieldInfo,
	&t1291_f26_FieldInfo,
	&t1291_f27_FieldInfo,
	&t1291_f28_FieldInfo,
	&t1291_f29_FieldInfo,
	&t1291_f30_FieldInfo,
	&t1291_f31_FieldInfo,
	NULL
};
static const int32_t t1291_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1291_f2_DefaultValue = 
{
	&t1291_f2_FieldInfo, { (char*)&t1291_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1291_f3_DefaultValue = 
{
	&t1291_f3_FieldInfo, { (char*)&t1291_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1291_f4_DefaultValue = 
{
	&t1291_f4_FieldInfo, { (char*)&t1291_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1291_f5_DefaultValue = 
{
	&t1291_f5_FieldInfo, { (char*)&t1291_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1291_f6_DefaultValue = 
{
	&t1291_f6_FieldInfo, { (char*)&t1291_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1291_f7_DefaultValue = 
{
	&t1291_f7_FieldInfo, { (char*)&t1291_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1291_f8_DefaultValue = 
{
	&t1291_f8_FieldInfo, { (char*)&t1291_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1291_f9_DefaultValue = 
{
	&t1291_f9_FieldInfo, { (char*)&t1291_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f10_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1291_f10_DefaultValue = 
{
	&t1291_f10_FieldInfo, { (char*)&t1291_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f11_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t1291_f11_DefaultValue = 
{
	&t1291_f11_FieldInfo, { (char*)&t1291_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f12_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t1291_f12_DefaultValue = 
{
	&t1291_f12_FieldInfo, { (char*)&t1291_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f13_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t1291_f13_DefaultValue = 
{
	&t1291_f13_FieldInfo, { (char*)&t1291_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f14_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t1291_f14_DefaultValue = 
{
	&t1291_f14_FieldInfo, { (char*)&t1291_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f15_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry t1291_f15_DefaultValue = 
{
	&t1291_f15_FieldInfo, { (char*)&t1291_f15_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f16_DefaultValueData = 14;
static Il2CppFieldDefaultValueEntry t1291_f16_DefaultValue = 
{
	&t1291_f16_FieldInfo, { (char*)&t1291_f16_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f17_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t1291_f17_DefaultValue = 
{
	&t1291_f17_FieldInfo, { (char*)&t1291_f17_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f18_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1291_f18_DefaultValue = 
{
	&t1291_f18_FieldInfo, { (char*)&t1291_f18_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f19_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry t1291_f19_DefaultValue = 
{
	&t1291_f19_FieldInfo, { (char*)&t1291_f19_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f20_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry t1291_f20_DefaultValue = 
{
	&t1291_f20_FieldInfo, { (char*)&t1291_f20_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f21_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry t1291_f21_DefaultValue = 
{
	&t1291_f21_FieldInfo, { (char*)&t1291_f21_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f22_DefaultValueData = 20;
static Il2CppFieldDefaultValueEntry t1291_f22_DefaultValue = 
{
	&t1291_f22_FieldInfo, { (char*)&t1291_f22_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f23_DefaultValueData = 21;
static Il2CppFieldDefaultValueEntry t1291_f23_DefaultValue = 
{
	&t1291_f23_FieldInfo, { (char*)&t1291_f23_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f24_DefaultValueData = 22;
static Il2CppFieldDefaultValueEntry t1291_f24_DefaultValue = 
{
	&t1291_f24_FieldInfo, { (char*)&t1291_f24_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f25_DefaultValueData = 23;
static Il2CppFieldDefaultValueEntry t1291_f25_DefaultValue = 
{
	&t1291_f25_FieldInfo, { (char*)&t1291_f25_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f26_DefaultValueData = 24;
static Il2CppFieldDefaultValueEntry t1291_f26_DefaultValue = 
{
	&t1291_f26_FieldInfo, { (char*)&t1291_f26_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f27_DefaultValueData = 25;
static Il2CppFieldDefaultValueEntry t1291_f27_DefaultValue = 
{
	&t1291_f27_FieldInfo, { (char*)&t1291_f27_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f28_DefaultValueData = 26;
static Il2CppFieldDefaultValueEntry t1291_f28_DefaultValue = 
{
	&t1291_f28_FieldInfo, { (char*)&t1291_f28_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f29_DefaultValueData = 27;
static Il2CppFieldDefaultValueEntry t1291_f29_DefaultValue = 
{
	&t1291_f29_FieldInfo, { (char*)&t1291_f29_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f30_DefaultValueData = 28;
static Il2CppFieldDefaultValueEntry t1291_f30_DefaultValue = 
{
	&t1291_f30_FieldInfo, { (char*)&t1291_f30_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1291_f31_DefaultValueData = 29;
static Il2CppFieldDefaultValueEntry t1291_f31_DefaultValue = 
{
	&t1291_f31_FieldInfo, { (char*)&t1291_f31_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1291_FDVs[] = 
{
	&t1291_f2_DefaultValue,
	&t1291_f3_DefaultValue,
	&t1291_f4_DefaultValue,
	&t1291_f5_DefaultValue,
	&t1291_f6_DefaultValue,
	&t1291_f7_DefaultValue,
	&t1291_f8_DefaultValue,
	&t1291_f9_DefaultValue,
	&t1291_f10_DefaultValue,
	&t1291_f11_DefaultValue,
	&t1291_f12_DefaultValue,
	&t1291_f13_DefaultValue,
	&t1291_f14_DefaultValue,
	&t1291_f15_DefaultValue,
	&t1291_f16_DefaultValue,
	&t1291_f17_DefaultValue,
	&t1291_f18_DefaultValue,
	&t1291_f19_DefaultValue,
	&t1291_f20_DefaultValue,
	&t1291_f21_DefaultValue,
	&t1291_f22_DefaultValue,
	&t1291_f23_DefaultValue,
	&t1291_f24_DefaultValue,
	&t1291_f25_DefaultValue,
	&t1291_f26_DefaultValue,
	&t1291_f27_DefaultValue,
	&t1291_f28_DefaultValue,
	&t1291_f29_DefaultValue,
	&t1291_f30_DefaultValue,
	&t1291_f31_DefaultValue,
	NULL
};
static Il2CppMethodReference t1291_VT[] =
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
static bool t1291_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1291_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1291_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1291__CustomAttributeCache = {
1,
NULL,
&t1291_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1291_0_0_0;
extern Il2CppType t1291_1_0_0;
extern CustomAttributesCache t1291__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1291_DM = 
{
	NULL, NULL, NULL, t1291_IOs, &t8_0_0_0, t1291_VT, t1291_VTIGM, NULL};
TypeInfo t1291_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UnicodeCategory", "System.Globalization", t1291_MIs, NULL, t1291_FIs, NULL, &t125_TI, NULL, &t1291__CustomAttributeCache, &t1291_0_0_0, &t1291_1_0_0, &t1291_DM, NULL, NULL, NULL, t1291_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1291)+ sizeof (Il2CppObject), sizeof (t1291)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 31, 0, 0, 23, 0, 3};
#include "t1717.h"
// Metadata Definition System.IO.IsolatedStorage.IsolatedStorageException
extern TypeInfo t1717_TI;
#include "t1717MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8820_MI = 
{
	".ctor", (methodPointerType)&m8820, &t1717_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2523, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1717_m8821_ParameterInfos[] = 
{
	{"message", 0, 134220973, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8821_MI = 
{
	".ctor", (methodPointerType)&m8821, &t1717_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1717_m8821_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2524, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1717_m8822_ParameterInfos[] = 
{
	{"info", 0, 134220974, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134220975, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m8822_MI = 
{
	".ctor", (methodPointerType)&m8822, &t1717_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1717_m8822_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2525, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1717_MIs[] =
{
	&m8820_MI,
	&m8821_MI,
	&m8822_MI,
	NULL
};
extern MethodInfo m4538_MI;
extern MethodInfo m4539_MI;
extern MethodInfo m4285_MI;
extern MethodInfo m1131_MI;
extern MethodInfo m4540_MI;
extern MethodInfo m4483_MI;
extern MethodInfo m4484_MI;
static Il2CppMethodReference t1717_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4538_MI,
	&m4539_MI,
	&m4285_MI,
	&m1131_MI,
	&m4540_MI,
	&m4483_MI,
	&m4539_MI,
	&m4484_MI,
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
extern Il2CppType t630_0_0_0;
extern Il2CppType t954_0_0_0;
static Il2CppInterfaceOffsetPair t1717_IOs[] = 
{
	{ &t630_0_0_0, 4},
	{ &t954_0_0_0, 5},
};
void t1717_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
struct t1717;
extern CustomAttributesCache t1717__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1717_DM = 
{
	NULL, NULL, NULL, t1717_IOs, &t138_0_0_0, t1717_VT, t1717_VTIGM, NULL};
TypeInfo t1717_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IsolatedStorageException", "System.IO.IsolatedStorage", t1717_MIs, NULL, NULL, NULL, &t1717_TI, NULL, &t1717__CustomAttributeCache, &t1717_0_0_0, &t1717_1_0_0, &t1717_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1717), sizeof (t1717), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1718.h"
// Metadata Definition System.IO.BinaryReader
extern TypeInfo t1718_TI;
#include "t1718MD.h"
extern Il2CppType t302_0_0_0;
extern Il2CppType t302_0_0_0;
static ParameterInfo t1718_m8823_ParameterInfos[] = 
{
	{"input", 0, 134220976, &EmptyCustomAttributesCache, &t302_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8823_MI = 
{
	".ctor", (methodPointerType)&m8823, &t1718_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1718_m8823_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2526, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t302_0_0_0;
extern Il2CppType t736_0_0_0;
extern Il2CppType t736_0_0_0;
static ParameterInfo t1718_m8824_ParameterInfos[] = 
{
	{"input", 0, 134220977, &EmptyCustomAttributesCache, &t302_0_0_0},
	{"encoding", 1, 134220978, &EmptyCustomAttributesCache, &t736_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8824_MI = 
{
	".ctor", (methodPointerType)&m8824, &t1718_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1718_m8824_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2527, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8825_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m8825, &t1718_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 2528, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1718_m8826_ParameterInfos[] = 
{
	{"disposing", 0, 134220979, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8826_MI = 
{
	"Dispose", (methodPointerType)&m8826, &t1718_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1718_m8826_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 5, 1, false, false, 2529, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1718_m8827_ParameterInfos[] = 
{
	{"numBytes", 0, 134220980, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8827_MI = 
{
	"FillBuffer", (methodPointerType)&m8827, &t1718_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1718_m8827_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 6, 1, false, false, 2530, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8828_MI = 
{
	"Read", (methodPointerType)&m8828, &t1718_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2531, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1718_m8829_ParameterInfos[] = 
{
	{"buffer", 0, 134220981, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"index", 1, 134220982, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220983, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8829_MI = 
{
	"Read", (methodPointerType)&m8829, &t1718_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1718_m8829_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 3, false, false, 2532, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1718_m8830_ParameterInfos[] = 
{
	{"buffer", 0, 134220984, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"index", 1, 134220985, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220986, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8830_MI = 
{
	"Read", (methodPointerType)&m8830, &t1718_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1718_m8830_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 3, false, false, 2533, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_1_0_2;
static ParameterInfo t1718_m8831_ParameterInfos[] = 
{
	{"buffer", 0, 134220987, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"index", 1, 134220988, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134220989, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bytes_read", 3, 134220990, &EmptyCustomAttributesCache, &t125_1_0_2},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125_t343 (MethodInfo* method, void* obj, void** args);
MethodInfo m8831_MI = 
{
	"ReadCharBytes", (methodPointerType)&m8831, &t1718_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125_t343, t1718_m8831_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 2534, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8832_MI = 
{
	"Read7BitEncodedInt", (methodPointerType)&m8832, &t1718_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 132, 0, 255, 0, false, false, 2535, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8833_MI = 
{
	"ReadBoolean", (methodPointerType)&m8833, &t1718_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 454, 0, 10, 0, false, false, 2536, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t582_0_0_0;
extern void* RuntimeInvoker_t582 (MethodInfo* method, void* obj, void** args);
MethodInfo m8834_MI = 
{
	"ReadByte", (methodPointerType)&m8834, &t1718_TI, &t582_0_0_0, RuntimeInvoker_t582, NULL, &EmptyCustomAttributesCache, 454, 0, 11, 0, false, false, 2537, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t309 (MethodInfo* method, void* obj, void** args);
MethodInfo m8835_MI = 
{
	"ReadChar", (methodPointerType)&m8835, &t1718_TI, &t309_0_0_0, RuntimeInvoker_t309, NULL, &EmptyCustomAttributesCache, 454, 0, 12, 0, false, false, 2538, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t910_0_0_0;
extern void* RuntimeInvoker_t910 (MethodInfo* method, void* obj, void** args);
MethodInfo m8836_MI = 
{
	"ReadDecimal", (methodPointerType)&m8836, &t1718_TI, &t910_0_0_0, RuntimeInvoker_t910, NULL, &EmptyCustomAttributesCache, 454, 0, 13, 0, false, false, 2539, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t156_0_0_0;
extern void* RuntimeInvoker_t156 (MethodInfo* method, void* obj, void** args);
MethodInfo m8837_MI = 
{
	"ReadDouble", (methodPointerType)&m8837, &t1718_TI, &t156_0_0_0, RuntimeInvoker_t156, NULL, &EmptyCustomAttributesCache, 454, 0, 14, 0, false, false, 2540, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t341_0_0_0;
extern void* RuntimeInvoker_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m8838_MI = 
{
	"ReadInt16", (methodPointerType)&m8838, &t1718_TI, &t341_0_0_0, RuntimeInvoker_t341, NULL, &EmptyCustomAttributesCache, 454, 0, 15, 0, false, false, 2541, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8839_MI = 
{
	"ReadInt32", (methodPointerType)&m8839, &t1718_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 16, 0, false, false, 2542, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m8840_MI = 
{
	"ReadInt64", (methodPointerType)&m8840, &t1718_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 454, 0, 17, 0, false, false, 2543, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t186_0_0_0;
extern void* RuntimeInvoker_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1718__CustomAttributeCache_m8841;
MethodInfo m8841_MI = 
{
	"ReadSByte", (methodPointerType)&m8841, &t1718_TI, &t186_0_0_0, RuntimeInvoker_t186, NULL, &t1718__CustomAttributeCache_m8841, 454, 0, 18, 0, false, false, 2544, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8842_MI = 
{
	"ReadString", (methodPointerType)&m8842, &t1718_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 19, 0, false, false, 2545, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m8843_MI = 
{
	"ReadSingle", (methodPointerType)&m8843, &t1718_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 454, 0, 20, 0, false, false, 2546, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t315_0_0_0;
extern void* RuntimeInvoker_t315 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1718__CustomAttributeCache_m8844;
MethodInfo m8844_MI = 
{
	"ReadUInt16", (methodPointerType)&m8844, &t1718_TI, &t315_0_0_0, RuntimeInvoker_t315, NULL, &t1718__CustomAttributeCache_m8844, 454, 0, 21, 0, false, false, 2547, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1718__CustomAttributeCache_m8845;
MethodInfo m8845_MI = 
{
	"ReadUInt32", (methodPointerType)&m8845, &t1718_TI, &t168_0_0_0, RuntimeInvoker_t168, NULL, &t1718__CustomAttributeCache_m8845, 454, 0, 22, 0, false, false, 2548, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
extern void* RuntimeInvoker_t896 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1718__CustomAttributeCache_m8846;
MethodInfo m8846_MI = 
{
	"ReadUInt64", (methodPointerType)&m8846, &t1718_TI, &t896_0_0_0, RuntimeInvoker_t896, NULL, &t1718__CustomAttributeCache_m8846, 454, 0, 23, 0, false, false, 2549, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1718_m8847_ParameterInfos[] = 
{
	{"length", 0, 134220991, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8847_MI = 
{
	"CheckBuffer", (methodPointerType)&m8847, &t1718_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1718_m8847_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2550, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1718_MIs[] =
{
	&m8823_MI,
	&m8824_MI,
	&m8825_MI,
	&m8826_MI,
	&m8827_MI,
	&m8828_MI,
	&m8829_MI,
	&m8830_MI,
	&m8831_MI,
	&m8832_MI,
	&m8833_MI,
	&m8834_MI,
	&m8835_MI,
	&m8836_MI,
	&m8837_MI,
	&m8838_MI,
	&m8839_MI,
	&m8840_MI,
	&m8841_MI,
	&m8842_MI,
	&m8843_MI,
	&m8844_MI,
	&m8845_MI,
	&m8846_MI,
	&m8847_MI,
	NULL
};
extern Il2CppType t302_0_0_1;
FieldInfo t1718_f0_FieldInfo = 
{
	"m_stream", &t302_0_0_1, &t1718_TI, offsetof(t1718, f0), &EmptyCustomAttributesCache};
extern Il2CppType t736_0_0_1;
FieldInfo t1718_f1_FieldInfo = 
{
	"m_encoding", &t736_0_0_1, &t1718_TI, offsetof(t1718, f1), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t1718_f2_FieldInfo = 
{
	"m_buffer", &t737_0_0_1, &t1718_TI, offsetof(t1718, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1719_0_0_1;
FieldInfo t1718_f3_FieldInfo = 
{
	"decoder", &t1719_0_0_1, &t1718_TI, offsetof(t1718, f3), &EmptyCustomAttributesCache};
extern Il2CppType t318_0_0_1;
FieldInfo t1718_f4_FieldInfo = 
{
	"charBuffer", &t318_0_0_1, &t1718_TI, offsetof(t1718, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1718_f5_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t1718_TI, offsetof(t1718, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1718_FIs[] =
{
	&t1718_f0_FieldInfo,
	&t1718_f1_FieldInfo,
	&t1718_f2_FieldInfo,
	&t1718_f3_FieldInfo,
	&t1718_f4_FieldInfo,
	&t1718_f5_FieldInfo,
	NULL
};
extern MethodInfo m8825_MI;
extern MethodInfo m8826_MI;
extern MethodInfo m8827_MI;
extern MethodInfo m8828_MI;
extern MethodInfo m8829_MI;
extern MethodInfo m8830_MI;
extern MethodInfo m8833_MI;
extern MethodInfo m8834_MI;
extern MethodInfo m8835_MI;
extern MethodInfo m8836_MI;
extern MethodInfo m8837_MI;
extern MethodInfo m8838_MI;
extern MethodInfo m8839_MI;
extern MethodInfo m8840_MI;
extern MethodInfo m8841_MI;
extern MethodInfo m8842_MI;
extern MethodInfo m8843_MI;
extern MethodInfo m8844_MI;
extern MethodInfo m8845_MI;
extern MethodInfo m8846_MI;
static Il2CppMethodReference t1718_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8825_MI,
	&m8826_MI,
	&m8827_MI,
	&m8828_MI,
	&m8829_MI,
	&m8830_MI,
	&m8833_MI,
	&m8834_MI,
	&m8835_MI,
	&m8836_MI,
	&m8837_MI,
	&m8838_MI,
	&m8839_MI,
	&m8840_MI,
	&m8841_MI,
	&m8842_MI,
	&m8843_MI,
	&m8844_MI,
	&m8845_MI,
	&m8846_MI,
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
	false,
};
extern Il2CppType t137_0_0_0;
static const Il2CppType* t1718_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1718_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1718_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1158_TI;
#include "t1158.h"
#include "t1158MD.h"
extern MethodInfo m4843_MI;
void t1718_CustomAttributesCacheGenerator_m8841(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1158 * tmp;
		tmp = (t1158 *)il2cpp_codegen_object_new (&t1158_TI);
		m4843(tmp, false, &m4843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1718_CustomAttributesCacheGenerator_m8844(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1158 * tmp;
		tmp = (t1158 *)il2cpp_codegen_object_new (&t1158_TI);
		m4843(tmp, false, &m4843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1718_CustomAttributesCacheGenerator_m8845(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1158 * tmp;
		tmp = (t1158 *)il2cpp_codegen_object_new (&t1158_TI);
		m4843(tmp, false, &m4843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1718_CustomAttributesCacheGenerator_m8846(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1158 * tmp;
		tmp = (t1158 *)il2cpp_codegen_object_new (&t1158_TI);
		m4843(tmp, false, &m4843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1718__CustomAttributeCache = {
1,
NULL,
&t1718_CustomAttributesCacheGenerator
};
CustomAttributesCache t1718__CustomAttributeCache_m8841 = {
1,
NULL,
&t1718_CustomAttributesCacheGenerator_m8841
};
CustomAttributesCache t1718__CustomAttributeCache_m8844 = {
1,
NULL,
&t1718_CustomAttributesCacheGenerator_m8844
};
CustomAttributesCache t1718__CustomAttributeCache_m8845 = {
1,
NULL,
&t1718_CustomAttributesCacheGenerator_m8845
};
CustomAttributesCache t1718__CustomAttributeCache_m8846 = {
1,
NULL,
&t1718_CustomAttributesCacheGenerator_m8846
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1718_0_0_0;
extern Il2CppType t1718_1_0_0;
struct t1718;
extern CustomAttributesCache t1718__CustomAttributeCache;
extern CustomAttributesCache t1718__CustomAttributeCache_m8841;
extern CustomAttributesCache t1718__CustomAttributeCache_m8844;
extern CustomAttributesCache t1718__CustomAttributeCache_m8845;
extern CustomAttributesCache t1718__CustomAttributeCache_m8846;
const Il2CppTypeDefinitionMetadata t1718_DM = 
{
	NULL, NULL, t1718_ITIs, t1718_IOs, &t9_0_0_0, t1718_VT, t1718_VTIGM, NULL};
TypeInfo t1718_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryReader", "System.IO", t1718_MIs, NULL, t1718_FIs, NULL, &t1718_TI, NULL, &t1718__CustomAttributeCache, &t1718_0_0_0, &t1718_1_0_0, &t1718_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1718), sizeof (t1718), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 25, 0, 6, 0, 0, 24, 1, 1};
#include "t1720.h"
// Metadata Definition System.IO.BinaryWriter
extern TypeInfo t1720_TI;
#include "t1720MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8848_MI = 
{
	".ctor", (methodPointerType)&m8848, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2551, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t302_0_0_0;
static ParameterInfo t1720_m8849_ParameterInfos[] = 
{
	{"output", 0, 134220992, &EmptyCustomAttributesCache, &t302_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8849_MI = 
{
	".ctor", (methodPointerType)&m8849, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1720_m8849_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2552, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t302_0_0_0;
extern Il2CppType t736_0_0_0;
static ParameterInfo t1720_m8850_ParameterInfos[] = 
{
	{"output", 0, 134220993, &EmptyCustomAttributesCache, &t302_0_0_0},
	{"encoding", 1, 134220994, &EmptyCustomAttributesCache, &t736_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8850_MI = 
{
	".ctor", (methodPointerType)&m8850, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1720_m8850_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2553, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8851_MI = 
{
	".cctor", (methodPointerType)&m8851, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2554, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8852_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m8852, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 2555, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1720_m8853_ParameterInfos[] = 
{
	{"disposing", 0, 134220995, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8853_MI = 
{
	"Dispose", (methodPointerType)&m8853, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1720_m8853_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 5, 1, false, false, 2556, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8854_MI = 
{
	"Flush", (methodPointerType)&m8854, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 2557, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1720_m8855_ParameterInfos[] = 
{
	{"value", 0, 134220996, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8855_MI = 
{
	"Write", (methodPointerType)&m8855, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1720_m8855_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 1, false, false, 2558, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t582_0_0_0;
extern Il2CppType t582_0_0_0;
static ParameterInfo t1720_m8856_ParameterInfos[] = 
{
	{"value", 0, 134220997, &EmptyCustomAttributesCache, &t582_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8856_MI = 
{
	"Write", (methodPointerType)&m8856, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1720_m8856_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 1, false, false, 2559, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1720_m8857_ParameterInfos[] = 
{
	{"buffer", 0, 134220998, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8857_MI = 
{
	"Write", (methodPointerType)&m8857, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1720_m8857_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 1, false, false, 2560, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1720_m8858_ParameterInfos[] = 
{
	{"buffer", 0, 134220999, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"index", 1, 134221000, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221001, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8858_MI = 
{
	"Write", (methodPointerType)&m8858, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1720_m8858_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 3, false, false, 2561, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1720_m8859_ParameterInfos[] = 
{
	{"ch", 0, 134221002, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m8859_MI = 
{
	"Write", (methodPointerType)&m8859, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t341, t1720_m8859_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 1, false, false, 2562, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
static ParameterInfo t1720_m8860_ParameterInfos[] = 
{
	{"chars", 0, 134221003, &EmptyCustomAttributesCache, &t318_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8860_MI = 
{
	"Write", (methodPointerType)&m8860, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1720_m8860_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 12, 1, false, false, 2563, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t910_0_0_0;
extern Il2CppType t910_0_0_0;
static ParameterInfo t1720_m8861_ParameterInfos[] = 
{
	{"value", 0, 134221004, &EmptyCustomAttributesCache, &t910_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t910 (MethodInfo* method, void* obj, void** args);
MethodInfo m8861_MI = 
{
	"Write", (methodPointerType)&m8861, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t910, t1720_m8861_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 1, false, false, 2564, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t156_0_0_0;
extern Il2CppType t156_0_0_0;
static ParameterInfo t1720_m8862_ParameterInfos[] = 
{
	{"value", 0, 134221005, &EmptyCustomAttributesCache, &t156_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t156 (MethodInfo* method, void* obj, void** args);
MethodInfo m8862_MI = 
{
	"Write", (methodPointerType)&m8862, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t156, t1720_m8862_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 1, false, false, 2565, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t341_0_0_0;
extern Il2CppType t341_0_0_0;
static ParameterInfo t1720_m8863_ParameterInfos[] = 
{
	{"value", 0, 134221006, &EmptyCustomAttributesCache, &t341_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m8863_MI = 
{
	"Write", (methodPointerType)&m8863, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t341, t1720_m8863_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 15, 1, false, false, 2566, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1720_m8864_ParameterInfos[] = 
{
	{"value", 0, 134221007, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8864_MI = 
{
	"Write", (methodPointerType)&m8864, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1720_m8864_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 16, 1, false, false, 2567, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t1720_m8865_ParameterInfos[] = 
{
	{"value", 0, 134221008, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m8865_MI = 
{
	"Write", (methodPointerType)&m8865, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t303, t1720_m8865_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 17, 1, false, false, 2568, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t186_0_0_0;
extern Il2CppType t186_0_0_0;
static ParameterInfo t1720_m8866_ParameterInfos[] = 
{
	{"value", 0, 134221009, &EmptyCustomAttributesCache, &t186_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1720__CustomAttributeCache_m8866;
MethodInfo m8866_MI = 
{
	"Write", (methodPointerType)&m8866, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1720_m8866_ParameterInfos, &t1720__CustomAttributeCache_m8866, 454, 0, 18, 1, false, false, 2569, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t1720_m8867_ParameterInfos[] = 
{
	{"value", 0, 134221010, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m8867_MI = 
{
	"Write", (methodPointerType)&m8867, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t123, t1720_m8867_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 19, 1, false, false, 2570, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1720_m8868_ParameterInfos[] = 
{
	{"value", 0, 134221011, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8868_MI = 
{
	"Write", (methodPointerType)&m8868, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1720_m8868_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 20, 1, false, false, 2571, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t315_0_0_0;
extern Il2CppType t315_0_0_0;
static ParameterInfo t1720_m8869_ParameterInfos[] = 
{
	{"value", 0, 134221012, &EmptyCustomAttributesCache, &t315_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t341 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1720__CustomAttributeCache_m8869;
MethodInfo m8869_MI = 
{
	"Write", (methodPointerType)&m8869, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t341, t1720_m8869_ParameterInfos, &t1720__CustomAttributeCache_m8869, 454, 0, 21, 1, false, false, 2572, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1720_m8870_ParameterInfos[] = 
{
	{"value", 0, 134221013, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1720__CustomAttributeCache_m8870;
MethodInfo m8870_MI = 
{
	"Write", (methodPointerType)&m8870, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1720_m8870_ParameterInfos, &t1720__CustomAttributeCache_m8870, 454, 0, 22, 1, false, false, 2573, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t896_0_0_0;
extern Il2CppType t896_0_0_0;
static ParameterInfo t1720_m8871_ParameterInfos[] = 
{
	{"value", 0, 134221014, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1720__CustomAttributeCache_m8871;
MethodInfo m8871_MI = 
{
	"Write", (methodPointerType)&m8871, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t303, t1720_m8871_ParameterInfos, &t1720__CustomAttributeCache_m8871, 454, 0, 23, 1, false, false, 2574, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1720_m8872_ParameterInfos[] = 
{
	{"value", 0, 134221015, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8872_MI = 
{
	"Write7BitEncodedInt", (methodPointerType)&m8872, &t1720_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1720_m8872_ParameterInfos, &EmptyCustomAttributesCache, 132, 0, 255, 1, false, false, 2575, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1720_MIs[] =
{
	&m8848_MI,
	&m8849_MI,
	&m8850_MI,
	&m8851_MI,
	&m8852_MI,
	&m8853_MI,
	&m8854_MI,
	&m8855_MI,
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
	&m8869_MI,
	&m8870_MI,
	&m8871_MI,
	&m8872_MI,
	NULL
};
extern Il2CppType t1720_0_0_54;
FieldInfo t1720_f0_FieldInfo = 
{
	"Null", &t1720_0_0_54, &t1720_TI, offsetof(t1720_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t302_0_0_4;
FieldInfo t1720_f1_FieldInfo = 
{
	"OutStream", &t302_0_0_4, &t1720_TI, offsetof(t1720, f1), &EmptyCustomAttributesCache};
extern Il2CppType t736_0_0_1;
FieldInfo t1720_f2_FieldInfo = 
{
	"m_encoding", &t736_0_0_1, &t1720_TI, offsetof(t1720, f2), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t1720_f3_FieldInfo = 
{
	"buffer", &t737_0_0_1, &t1720_TI, offsetof(t1720, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1720_f4_FieldInfo = 
{
	"disposed", &t124_0_0_1, &t1720_TI, offsetof(t1720, f4), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t1720_f5_FieldInfo = 
{
	"stringBuffer", &t737_0_0_1, &t1720_TI, offsetof(t1720, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1720_f6_FieldInfo = 
{
	"maxCharsPerRound", &t125_0_0_1, &t1720_TI, offsetof(t1720, f6), &EmptyCustomAttributesCache};
static FieldInfo* t1720_FIs[] =
{
	&t1720_f0_FieldInfo,
	&t1720_f1_FieldInfo,
	&t1720_f2_FieldInfo,
	&t1720_f3_FieldInfo,
	&t1720_f4_FieldInfo,
	&t1720_f5_FieldInfo,
	&t1720_f6_FieldInfo,
	NULL
};
extern MethodInfo m8852_MI;
extern MethodInfo m8853_MI;
extern MethodInfo m8854_MI;
extern MethodInfo m8855_MI;
extern MethodInfo m8856_MI;
extern MethodInfo m8857_MI;
extern MethodInfo m8858_MI;
extern MethodInfo m8859_MI;
extern MethodInfo m8860_MI;
extern MethodInfo m8861_MI;
extern MethodInfo m8862_MI;
extern MethodInfo m8863_MI;
extern MethodInfo m8864_MI;
extern MethodInfo m8865_MI;
extern MethodInfo m8866_MI;
extern MethodInfo m8867_MI;
extern MethodInfo m8868_MI;
extern MethodInfo m8869_MI;
extern MethodInfo m8870_MI;
extern MethodInfo m8871_MI;
static Il2CppMethodReference t1720_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8852_MI,
	&m8853_MI,
	&m8854_MI,
	&m8855_MI,
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
	&m8869_MI,
	&m8870_MI,
	&m8871_MI,
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
	false,
};
static const Il2CppType* t1720_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1720_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1720_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1720_CustomAttributesCacheGenerator_m8866(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1158 * tmp;
		tmp = (t1158 *)il2cpp_codegen_object_new (&t1158_TI);
		m4843(tmp, false, &m4843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1720_CustomAttributesCacheGenerator_m8869(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1158 * tmp;
		tmp = (t1158 *)il2cpp_codegen_object_new (&t1158_TI);
		m4843(tmp, false, &m4843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1720_CustomAttributesCacheGenerator_m8870(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1158 * tmp;
		tmp = (t1158 *)il2cpp_codegen_object_new (&t1158_TI);
		m4843(tmp, false, &m4843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1720_CustomAttributesCacheGenerator_m8871(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1158 * tmp;
		tmp = (t1158 *)il2cpp_codegen_object_new (&t1158_TI);
		m4843(tmp, false, &m4843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1720__CustomAttributeCache = {
1,
NULL,
&t1720_CustomAttributesCacheGenerator
};
CustomAttributesCache t1720__CustomAttributeCache_m8866 = {
1,
NULL,
&t1720_CustomAttributesCacheGenerator_m8866
};
CustomAttributesCache t1720__CustomAttributeCache_m8869 = {
1,
NULL,
&t1720_CustomAttributesCacheGenerator_m8869
};
CustomAttributesCache t1720__CustomAttributeCache_m8870 = {
1,
NULL,
&t1720_CustomAttributesCacheGenerator_m8870
};
CustomAttributesCache t1720__CustomAttributeCache_m8871 = {
1,
NULL,
&t1720_CustomAttributesCacheGenerator_m8871
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1720_0_0_0;
extern Il2CppType t1720_1_0_0;
struct t1720;
extern CustomAttributesCache t1720__CustomAttributeCache;
extern CustomAttributesCache t1720__CustomAttributeCache_m8866;
extern CustomAttributesCache t1720__CustomAttributeCache_m8869;
extern CustomAttributesCache t1720__CustomAttributeCache_m8870;
extern CustomAttributesCache t1720__CustomAttributeCache_m8871;
const Il2CppTypeDefinitionMetadata t1720_DM = 
{
	NULL, NULL, t1720_ITIs, t1720_IOs, &t9_0_0_0, t1720_VT, t1720_VTIGM, NULL};
TypeInfo t1720_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryWriter", "System.IO", t1720_MIs, NULL, t1720_FIs, NULL, &t1720_TI, NULL, &t1720__CustomAttributeCache, &t1720_0_0_0, &t1720_1_0_0, &t1720_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1720), sizeof (t1720), 0, -1, sizeof(t1720_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 25, 0, 7, 0, 0, 24, 1, 1};
#include "t1544.h"
// Metadata Definition System.IO.Directory
extern TypeInfo t1544_TI;
#include "t1544MD.h"
extern Il2CppType t2_0_0_0;
static ParameterInfo t1544_m6991_ParameterInfos[] = 
{
	{"path", 0, 134221016, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1543_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6991_MI = 
{
	"CreateDirectory", (methodPointerType)&m6991, &t1544_TI, &t1543_0_0_0, RuntimeInvoker_t9_t9, t1544_m6991_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2576, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1544_m8873_ParameterInfos[] = 
{
	{"path", 0, 134221017, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1543_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8873_MI = 
{
	"CreateDirectoriesInternal", (methodPointerType)&m8873, &t1544_TI, &t1543_0_0_0, RuntimeInvoker_t9_t9, t1544_m8873_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2577, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1544_m6990_ParameterInfos[] = 
{
	{"path", 0, 134221018, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6990_MI = 
{
	"Exists", (methodPointerType)&m6990, &t1544_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1544_m6990_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2578, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8874_MI = 
{
	"GetCurrentDirectory", (methodPointerType)&m8874, &t1544_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 2579, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1544_m6992_ParameterInfos[] = 
{
	{"path", 0, 134221019, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"searchPattern", 1, 134221020, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6992_MI = 
{
	"GetFiles", (methodPointerType)&m6992, &t1544_TI, &t221_0_0_0, RuntimeInvoker_t9_t9_t9, t1544_m6992_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2580, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1721_0_0_0;
extern Il2CppType t1721_0_0_0;
extern Il2CppType t1721_0_0_0;
static ParameterInfo t1544_m8875_ParameterInfos[] = 
{
	{"path", 0, 134221021, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"searchPattern", 1, 134221022, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mask", 2, 134221023, &EmptyCustomAttributesCache, &t1721_0_0_0},
	{"attrs", 3, 134221024, &EmptyCustomAttributesCache, &t1721_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8875_MI = 
{
	"GetFileSystemEntries", (methodPointerType)&m8875, &t1544_TI, &t221_0_0_0, RuntimeInvoker_t9_t9_t9_t125_t125, t1544_m8875_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 4, false, false, 2581, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1544_MIs[] =
{
	&m6991_MI,
	&m8873_MI,
	&m6990_MI,
	&m8874_MI,
	&m6992_MI,
	&m8875_MI,
	NULL
};
static Il2CppMethodReference t1544_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1544_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1544_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
struct t1544;
extern CustomAttributesCache t1544__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1544_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1544_VT, t1544_VTIGM, NULL};
TypeInfo t1544_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Directory", "System.IO", t1544_MIs, NULL, NULL, NULL, &t1544_TI, NULL, &t1544__CustomAttributeCache, &t1544_0_0_0, &t1544_1_0_0, &t1544_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1544), sizeof (t1544), 0, -1, 0, 0, -1, 1048961, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 0, 0, 0, 0, 4, 0, 0};
#include "t1543.h"
// Metadata Definition System.IO.DirectoryInfo
extern TypeInfo t1543_TI;
#include "t1543MD.h"
extern Il2CppType t2_0_0_0;
static ParameterInfo t1543_m8876_ParameterInfos[] = 
{
	{"path", 0, 134221025, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8876_MI = 
{
	".ctor", (methodPointerType)&m8876, &t1543_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1543_m8876_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2582, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1543_m8877_ParameterInfos[] = 
{
	{"path", 0, 134221026, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"simpleOriginalPath", 1, 134221027, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8877_MI = 
{
	".ctor", (methodPointerType)&m8877, &t1543_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1543_m8877_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 2583, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1543_m8878_ParameterInfos[] = 
{
	{"info", 0, 134221028, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134221029, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m8878_MI = 
{
	".ctor", (methodPointerType)&m8878, &t1543_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1543_m8878_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 2, false, false, 2584, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8879_MI = 
{
	"Initialize", (methodPointerType)&m8879, &t1543_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2585, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8880_MI = 
{
	"get_Exists", (methodPointerType)&m8880, &t1543_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2586, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1543_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8881_MI = 
{
	"get_Parent", (methodPointerType)&m8881, &t1543_TI, &t1543_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2587, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8882_MI = 
{
	"Create", (methodPointerType)&m8882, &t1543_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 2588, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8883_MI = 
{
	"ToString", (methodPointerType)&m8883, &t1543_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2589, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1543_MIs[] =
{
	&m8876_MI,
	&m8877_MI,
	&m8878_MI,
	&m8879_MI,
	&m8880_MI,
	&m8881_MI,
	&m8882_MI,
	&m8883_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1543_f5_FieldInfo = 
{
	"current", &t2_0_0_1, &t1543_TI, offsetof(t1543, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1543_f6_FieldInfo = 
{
	"parent", &t2_0_0_1, &t1543_TI, offsetof(t1543, f6), &EmptyCustomAttributesCache};
static FieldInfo* t1543_FIs[] =
{
	&t1543_f5_FieldInfo,
	&t1543_f6_FieldInfo,
	NULL
};
extern MethodInfo m8880_MI;
static PropertyInfo t1543____Exists_PropertyInfo = 
{
	&t1543_TI, "Exists", &m8880_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8881_MI;
static PropertyInfo t1543____Parent_PropertyInfo = 
{
	&t1543_TI, "Parent", &m8881_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1543_PIs[] =
{
	&t1543____Exists_PropertyInfo,
	&t1543____Parent_PropertyInfo,
	NULL
};
extern MethodInfo m8883_MI;
extern MethodInfo m6078_MI;
extern MethodInfo m6079_MI;
extern MethodInfo m8946_MI;
extern MethodInfo m8947_MI;
extern MethodInfo m8949_MI;
static Il2CppMethodReference t1543_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m8883_MI,
	&m6078_MI,
	&m6079_MI,
	&m8946_MI,
	&m8946_MI,
	&m8880_MI,
	&m8947_MI,
	&m8949_MI,
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
};
static Il2CppInterfaceOffsetPair t1543_IOs[] = 
{
	{ &t630_0_0_0, 6},
};
void t1543_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
extern Il2CppType t1722_0_0_0;
struct t1543;
extern CustomAttributesCache t1543__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1543_DM = 
{
	NULL, NULL, NULL, t1543_IOs, &t1722_0_0_0, t1543_VT, t1543_VTIGM, NULL};
TypeInfo t1543_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DirectoryInfo", "System.IO", t1543_MIs, t1543_PIs, t1543_FIs, NULL, &t1543_TI, NULL, &t1543__CustomAttributeCache, &t1543_0_0_0, &t1543_1_0_0, &t1543_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1543), sizeof (t1543), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 2, 2, 0, 0, 11, 0, 1};
#include "t1723.h"
// Metadata Definition System.IO.DirectoryNotFoundException
extern TypeInfo t1723_TI;
#include "t1723MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8884_MI = 
{
	".ctor", (methodPointerType)&m8884, &t1723_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2590, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1723_m8885_ParameterInfos[] = 
{
	{"message", 0, 134221030, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8885_MI = 
{
	".ctor", (methodPointerType)&m8885, &t1723_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1723_m8885_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2591, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1723_m8886_ParameterInfos[] = 
{
	{"info", 0, 134221031, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134221032, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m8886_MI = 
{
	".ctor", (methodPointerType)&m8886, &t1723_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1723_m8886_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2592, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1723_MIs[] =
{
	&m8884_MI,
	&m8885_MI,
	&m8886_MI,
	NULL
};
static Il2CppMethodReference t1723_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4538_MI,
	&m4539_MI,
	&m4285_MI,
	&m1131_MI,
	&m4540_MI,
	&m4483_MI,
	&m4539_MI,
	&m4484_MI,
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
};
static Il2CppInterfaceOffsetPair t1723_IOs[] = 
{
	{ &t630_0_0_0, 4},
	{ &t954_0_0_0, 5},
};
void t1723_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1723__CustomAttributeCache = {
1,
NULL,
&t1723_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1723_0_0_0;
extern Il2CppType t1723_1_0_0;
extern Il2CppType t1555_0_0_0;
struct t1723;
extern CustomAttributesCache t1723__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1723_DM = 
{
	NULL, NULL, NULL, t1723_IOs, &t1555_0_0_0, t1723_VT, t1723_VTIGM, NULL};
TypeInfo t1723_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DirectoryNotFoundException", "System.IO", t1723_MIs, NULL, NULL, NULL, &t1723_TI, NULL, &t1723__CustomAttributeCache, &t1723_0_0_0, &t1723_1_0_0, &t1723_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1723), sizeof (t1723), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1724.h"
// Metadata Definition System.IO.EndOfStreamException
extern TypeInfo t1724_TI;
#include "t1724MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8887_MI = 
{
	".ctor", (methodPointerType)&m8887, &t1724_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2593, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1724_m8888_ParameterInfos[] = 
{
	{"info", 0, 134221033, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134221034, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m8888_MI = 
{
	".ctor", (methodPointerType)&m8888, &t1724_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1724_m8888_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2594, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1724_MIs[] =
{
	&m8887_MI,
	&m8888_MI,
	NULL
};
static Il2CppMethodReference t1724_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4538_MI,
	&m4539_MI,
	&m4285_MI,
	&m1131_MI,
	&m4540_MI,
	&m4483_MI,
	&m4539_MI,
	&m4484_MI,
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
};
static Il2CppInterfaceOffsetPair t1724_IOs[] = 
{
	{ &t630_0_0_0, 4},
	{ &t954_0_0_0, 5},
};
void t1724_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1724__CustomAttributeCache = {
1,
NULL,
&t1724_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1724_0_0_0;
extern Il2CppType t1724_1_0_0;
struct t1724;
extern CustomAttributesCache t1724__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1724_DM = 
{
	NULL, NULL, NULL, t1724_IOs, &t1555_0_0_0, t1724_VT, t1724_VTIGM, NULL};
TypeInfo t1724_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EndOfStreamException", "System.IO", t1724_MIs, NULL, NULL, NULL, &t1724_TI, NULL, &t1724__CustomAttributeCache, &t1724_0_0_0, &t1724_1_0_0, &t1724_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1724), sizeof (t1724), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 11, 0, 2};
#include "t307.h"
// Metadata Definition System.IO.File
extern TypeInfo t307_TI;
#include "t307MD.h"
extern Il2CppType t2_0_0_0;
static ParameterInfo t307_m8889_ParameterInfos[] = 
{
	{"path", 0, 134221035, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8889_MI = 
{
	"Delete", (methodPointerType)&m8889, &t307_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t307_m8889_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2595, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t307_m1125_ParameterInfos[] = 
{
	{"path", 0, 134221036, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1125_MI = 
{
	"Exists", (methodPointerType)&m1125, &t307_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t307_m1125_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2596, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t301_0_0_0;
extern Il2CppType t301_0_0_0;
static ParameterInfo t307_m1127_ParameterInfos[] = 
{
	{"path", 0, 134221037, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221038, &EmptyCustomAttributesCache, &t301_0_0_0},
};
extern Il2CppType t300_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m1127_MI = 
{
	"Open", (methodPointerType)&m1127, &t307_TI, &t300_0_0_0, RuntimeInvoker_t9_t9_t125, t307_m1127_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2597, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t307_m6987_ParameterInfos[] = 
{
	{"path", 0, 134221039, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t300_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6987_MI = 
{
	"OpenRead", (methodPointerType)&m6987, &t307_TI, &t300_0_0_0, RuntimeInvoker_t9_t9, t307_m6987_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2598, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t307_m8890_ParameterInfos[] = 
{
	{"path", 0, 134221040, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1725_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8890_MI = 
{
	"OpenText", (methodPointerType)&m8890, &t307_TI, &t1725_0_0_0, RuntimeInvoker_t9_t9, t307_m8890_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2599, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t307_MIs[] =
{
	&m8889_MI,
	&m1125_MI,
	&m1127_MI,
	&m6987_MI,
	&m8890_MI,
	NULL
};
static Il2CppMethodReference t307_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t307_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t307_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t307__CustomAttributeCache = {
1,
NULL,
&t307_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t307_0_0_0;
extern Il2CppType t307_1_0_0;
struct t307;
extern CustomAttributesCache t307__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t307_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t307_VT, t307_VTIGM, NULL};
TypeInfo t307_TI = 
{
	&g_mscorlib_dll_Image, NULL, "File", "System.IO", t307_MIs, NULL, NULL, NULL, &t307_TI, NULL, &t307__CustomAttributeCache, &t307_0_0_0, &t307_1_0_0, &t307_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t307), sizeof (t307), 0, -1, 0, 0, -1, 1048961, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 4, 0, 0};
#include "t1193.h"
// Metadata Definition System.IO.FileAccess
extern TypeInfo t1193_TI;
#include "t1193MD.h"
static MethodInfo* t1193_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1193_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1193_TI, offsetof(t1193, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1193_0_0_32854;
FieldInfo t1193_f2_FieldInfo = 
{
	"Read", &t1193_0_0_32854, &t1193_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1193_0_0_32854;
FieldInfo t1193_f3_FieldInfo = 
{
	"Write", &t1193_0_0_32854, &t1193_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1193_0_0_32854;
FieldInfo t1193_f4_FieldInfo = 
{
	"ReadWrite", &t1193_0_0_32854, &t1193_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1193_FIs[] =
{
	&t1193_f1_FieldInfo,
	&t1193_f2_FieldInfo,
	&t1193_f3_FieldInfo,
	&t1193_f4_FieldInfo,
	NULL
};
static const int32_t t1193_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1193_f2_DefaultValue = 
{
	&t1193_f2_FieldInfo, { (char*)&t1193_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1193_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1193_f3_DefaultValue = 
{
	&t1193_f3_FieldInfo, { (char*)&t1193_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1193_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1193_f4_DefaultValue = 
{
	&t1193_f4_FieldInfo, { (char*)&t1193_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1193_FDVs[] = 
{
	&t1193_f2_DefaultValue,
	&t1193_f3_DefaultValue,
	&t1193_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t1193_VT[] =
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
static bool t1193_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1193_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1193_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
}
CustomAttributesCache t1193__CustomAttributeCache = {
2,
NULL,
&t1193_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1193_0_0_0;
extern Il2CppType t1193_1_0_0;
extern CustomAttributesCache t1193__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1193_DM = 
{
	NULL, NULL, NULL, t1193_IOs, &t8_0_0_0, t1193_VT, t1193_VTIGM, NULL};
TypeInfo t1193_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileAccess", "System.IO", t1193_MIs, NULL, t1193_FIs, NULL, &t125_TI, NULL, &t1193__CustomAttributeCache, &t1193_0_0_0, &t1193_1_0_0, &t1193_DM, NULL, NULL, NULL, t1193_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1193)+ sizeof (Il2CppObject), sizeof (t1193)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1721.h"
// Metadata Definition System.IO.FileAttributes
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
	"Archive", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f3_FieldInfo = 
{
	"Compressed", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f4_FieldInfo = 
{
	"Device", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f5_FieldInfo = 
{
	"Directory", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f6_FieldInfo = 
{
	"Encrypted", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f7_FieldInfo = 
{
	"Hidden", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f8_FieldInfo = 
{
	"Normal", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f9_FieldInfo = 
{
	"NotContentIndexed", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f10_FieldInfo = 
{
	"Offline", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f11_FieldInfo = 
{
	"ReadOnly", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f12_FieldInfo = 
{
	"ReparsePoint", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f13_FieldInfo = 
{
	"SparseFile", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f14_FieldInfo = 
{
	"System", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_32854;
FieldInfo t1721_f15_FieldInfo = 
{
	"Temporary", &t1721_0_0_32854, &t1721_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
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
	&t1721_f9_FieldInfo,
	&t1721_f10_FieldInfo,
	&t1721_f11_FieldInfo,
	&t1721_f12_FieldInfo,
	&t1721_f13_FieldInfo,
	&t1721_f14_FieldInfo,
	&t1721_f15_FieldInfo,
	NULL
};
static const int32_t t1721_f2_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1721_f2_DefaultValue = 
{
	&t1721_f2_FieldInfo, { (char*)&t1721_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f3_DefaultValueData = 2048;
static Il2CppFieldDefaultValueEntry t1721_f3_DefaultValue = 
{
	&t1721_f3_FieldInfo, { (char*)&t1721_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f4_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1721_f4_DefaultValue = 
{
	&t1721_f4_FieldInfo, { (char*)&t1721_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f5_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1721_f5_DefaultValue = 
{
	&t1721_f5_FieldInfo, { (char*)&t1721_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f6_DefaultValueData = 16384;
static Il2CppFieldDefaultValueEntry t1721_f6_DefaultValue = 
{
	&t1721_f6_FieldInfo, { (char*)&t1721_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f7_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1721_f7_DefaultValue = 
{
	&t1721_f7_FieldInfo, { (char*)&t1721_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f8_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1721_f8_DefaultValue = 
{
	&t1721_f8_FieldInfo, { (char*)&t1721_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f9_DefaultValueData = 8192;
static Il2CppFieldDefaultValueEntry t1721_f9_DefaultValue = 
{
	&t1721_f9_FieldInfo, { (char*)&t1721_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f10_DefaultValueData = 4096;
static Il2CppFieldDefaultValueEntry t1721_f10_DefaultValue = 
{
	&t1721_f10_FieldInfo, { (char*)&t1721_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f11_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1721_f11_DefaultValue = 
{
	&t1721_f11_FieldInfo, { (char*)&t1721_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f12_DefaultValueData = 1024;
static Il2CppFieldDefaultValueEntry t1721_f12_DefaultValue = 
{
	&t1721_f12_FieldInfo, { (char*)&t1721_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f13_DefaultValueData = 512;
static Il2CppFieldDefaultValueEntry t1721_f13_DefaultValue = 
{
	&t1721_f13_FieldInfo, { (char*)&t1721_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f14_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1721_f14_DefaultValue = 
{
	&t1721_f14_FieldInfo, { (char*)&t1721_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1721_f15_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t1721_f15_DefaultValue = 
{
	&t1721_f15_FieldInfo, { (char*)&t1721_f15_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1721_FDVs[] = 
{
	&t1721_f2_DefaultValue,
	&t1721_f3_DefaultValue,
	&t1721_f4_DefaultValue,
	&t1721_f5_DefaultValue,
	&t1721_f6_DefaultValue,
	&t1721_f7_DefaultValue,
	&t1721_f8_DefaultValue,
	&t1721_f9_DefaultValue,
	&t1721_f10_DefaultValue,
	&t1721_f11_DefaultValue,
	&t1721_f12_DefaultValue,
	&t1721_f13_DefaultValue,
	&t1721_f14_DefaultValue,
	&t1721_f15_DefaultValue,
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
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t622 * tmp;
		tmp = (t622 *)il2cpp_codegen_object_new (&t622_TI);
		m3031(tmp, &m3031_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1721__CustomAttributeCache = {
2,
NULL,
&t1721_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1721_1_0_0;
extern CustomAttributesCache t1721__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1721_DM = 
{
	NULL, NULL, NULL, t1721_IOs, &t8_0_0_0, t1721_VT, t1721_VTIGM, NULL};
TypeInfo t1721_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileAttributes", "System.IO", t1721_MIs, NULL, t1721_FIs, NULL, &t125_TI, NULL, &t1721__CustomAttributeCache, &t1721_0_0_0, &t1721_1_0_0, &t1721_DM, NULL, NULL, NULL, t1721_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1721)+ sizeof (Il2CppObject), sizeof (t1721)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 15, 0, 0, 23, 0, 3};
#include "t301.h"
// Metadata Definition System.IO.FileMode
extern TypeInfo t301_TI;
#include "t301MD.h"
static MethodInfo* t301_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t301_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t301_TI, offsetof(t301, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t301_0_0_32854;
FieldInfo t301_f2_FieldInfo = 
{
	"CreateNew", &t301_0_0_32854, &t301_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t301_0_0_32854;
FieldInfo t301_f3_FieldInfo = 
{
	"Create", &t301_0_0_32854, &t301_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t301_0_0_32854;
FieldInfo t301_f4_FieldInfo = 
{
	"Open", &t301_0_0_32854, &t301_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t301_0_0_32854;
FieldInfo t301_f5_FieldInfo = 
{
	"OpenOrCreate", &t301_0_0_32854, &t301_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t301_0_0_32854;
FieldInfo t301_f6_FieldInfo = 
{
	"Truncate", &t301_0_0_32854, &t301_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t301_0_0_32854;
FieldInfo t301_f7_FieldInfo = 
{
	"Append", &t301_0_0_32854, &t301_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t301_FIs[] =
{
	&t301_f1_FieldInfo,
	&t301_f2_FieldInfo,
	&t301_f3_FieldInfo,
	&t301_f4_FieldInfo,
	&t301_f5_FieldInfo,
	&t301_f6_FieldInfo,
	&t301_f7_FieldInfo,
	NULL
};
static const int32_t t301_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t301_f2_DefaultValue = 
{
	&t301_f2_FieldInfo, { (char*)&t301_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t301_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t301_f3_DefaultValue = 
{
	&t301_f3_FieldInfo, { (char*)&t301_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t301_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t301_f4_DefaultValue = 
{
	&t301_f4_FieldInfo, { (char*)&t301_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t301_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t301_f5_DefaultValue = 
{
	&t301_f5_FieldInfo, { (char*)&t301_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t301_f6_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t301_f6_DefaultValue = 
{
	&t301_f6_FieldInfo, { (char*)&t301_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t301_f7_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t301_f7_DefaultValue = 
{
	&t301_f7_FieldInfo, { (char*)&t301_f7_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t301_FDVs[] = 
{
	&t301_f2_DefaultValue,
	&t301_f3_DefaultValue,
	&t301_f4_DefaultValue,
	&t301_f5_DefaultValue,
	&t301_f6_DefaultValue,
	&t301_f7_DefaultValue,
	NULL
};
static Il2CppMethodReference t301_VT[] =
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
static bool t301_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t301_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t301_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t301__CustomAttributeCache = {
1,
NULL,
&t301_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t301_1_0_0;
extern CustomAttributesCache t301__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t301_DM = 
{
	NULL, NULL, NULL, t301_IOs, &t8_0_0_0, t301_VT, t301_VTIGM, NULL};
TypeInfo t301_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileMode", "System.IO", t301_MIs, NULL, t301_FIs, NULL, &t125_TI, NULL, &t301__CustomAttributeCache, &t301_0_0_0, &t301_1_0_0, &t301_DM, NULL, NULL, NULL, t301_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t301)+ sizeof (Il2CppObject), sizeof (t301)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 7, 0, 0, 23, 0, 3};
#include "t1726.h"
// Metadata Definition System.IO.FileNotFoundException
extern TypeInfo t1726_TI;
#include "t1726MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8891_MI = 
{
	".ctor", (methodPointerType)&m8891, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2600, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1726_m8892_ParameterInfos[] = 
{
	{"message", 0, 134221041, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8892_MI = 
{
	".ctor", (methodPointerType)&m8892, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1726_m8892_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2601, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1726_m8893_ParameterInfos[] = 
{
	{"message", 0, 134221042, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"fileName", 1, 134221043, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8893_MI = 
{
	".ctor", (methodPointerType)&m8893, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1726_m8893_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2602, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1726_m8894_ParameterInfos[] = 
{
	{"info", 0, 134221044, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134221045, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m8894_MI = 
{
	".ctor", (methodPointerType)&m8894, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1726_m8894_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2603, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8895_MI = 
{
	"get_Message", (methodPointerType)&m8895, &t1726_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2604, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1726_m8896_ParameterInfos[] = 
{
	{"info", 0, 134221046, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134221047, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m8896_MI = 
{
	"GetObjectData", (methodPointerType)&m8896, &t1726_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1726_m8896_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, false, 2605, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8897_MI = 
{
	"ToString", (methodPointerType)&m8897, &t1726_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2606, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1726_MIs[] =
{
	&m8891_MI,
	&m8892_MI,
	&m8893_MI,
	&m8894_MI,
	&m8895_MI,
	&m8896_MI,
	&m8897_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1726_f11_FieldInfo = 
{
	"fileName", &t2_0_0_1, &t1726_TI, offsetof(t1726, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1726_f12_FieldInfo = 
{
	"fusionLog", &t2_0_0_1, &t1726_TI, offsetof(t1726, f12), &EmptyCustomAttributesCache};
static FieldInfo* t1726_FIs[] =
{
	&t1726_f11_FieldInfo,
	&t1726_f12_FieldInfo,
	NULL
};
extern MethodInfo m8895_MI;
static PropertyInfo t1726____Message_PropertyInfo = 
{
	&t1726_TI, "Message", &m8895_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1726_PIs[] =
{
	&t1726____Message_PropertyInfo,
	NULL
};
extern MethodInfo m8897_MI;
extern MethodInfo m8896_MI;
static Il2CppMethodReference t1726_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m8897_MI,
	&m8896_MI,
	&m4285_MI,
	&m8895_MI,
	&m4540_MI,
	&m4483_MI,
	&m8896_MI,
	&m4484_MI,
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
};
static Il2CppInterfaceOffsetPair t1726_IOs[] = 
{
	{ &t630_0_0_0, 4},
	{ &t954_0_0_0, 5},
};
void t1726_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
struct t1726;
extern CustomAttributesCache t1726__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1726_DM = 
{
	NULL, NULL, NULL, t1726_IOs, &t1555_0_0_0, t1726_VT, t1726_VTIGM, NULL};
TypeInfo t1726_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileNotFoundException", "System.IO", t1726_MIs, t1726_PIs, t1726_FIs, NULL, &t1726_TI, NULL, &t1726__CustomAttributeCache, &t1726_0_0_0, &t1726_1_0_0, &t1726_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1726), sizeof (t1726), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 7, 1, 2, 0, 0, 11, 0, 2};
#include "t1727.h"
// Metadata Definition System.IO.FileOptions
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
	"None", &t1727_0_0_32854, &t1727_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1727_0_0_32854;
FieldInfo t1727_f3_FieldInfo = 
{
	"Encrypted", &t1727_0_0_32854, &t1727_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1727_0_0_32854;
FieldInfo t1727_f4_FieldInfo = 
{
	"DeleteOnClose", &t1727_0_0_32854, &t1727_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1727_0_0_32854;
FieldInfo t1727_f5_FieldInfo = 
{
	"SequentialScan", &t1727_0_0_32854, &t1727_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1727_0_0_32854;
FieldInfo t1727_f6_FieldInfo = 
{
	"RandomAccess", &t1727_0_0_32854, &t1727_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1727_0_0_32854;
FieldInfo t1727_f7_FieldInfo = 
{
	"Asynchronous", &t1727_0_0_32854, &t1727_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1727_0_0_32854;
FieldInfo t1727_f8_FieldInfo = 
{
	"WriteThrough", &t1727_0_0_32854, &t1727_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1727_FIs[] =
{
	&t1727_f1_FieldInfo,
	&t1727_f2_FieldInfo,
	&t1727_f3_FieldInfo,
	&t1727_f4_FieldInfo,
	&t1727_f5_FieldInfo,
	&t1727_f6_FieldInfo,
	&t1727_f7_FieldInfo,
	&t1727_f8_FieldInfo,
	NULL
};
static const int32_t t1727_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1727_f2_DefaultValue = 
{
	&t1727_f2_FieldInfo, { (char*)&t1727_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1727_f3_DefaultValueData = 16384;
static Il2CppFieldDefaultValueEntry t1727_f3_DefaultValue = 
{
	&t1727_f3_FieldInfo, { (char*)&t1727_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1727_f4_DefaultValueData = 67108864;
static Il2CppFieldDefaultValueEntry t1727_f4_DefaultValue = 
{
	&t1727_f4_FieldInfo, { (char*)&t1727_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1727_f5_DefaultValueData = 134217728;
static Il2CppFieldDefaultValueEntry t1727_f5_DefaultValue = 
{
	&t1727_f5_FieldInfo, { (char*)&t1727_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1727_f6_DefaultValueData = 268435456;
static Il2CppFieldDefaultValueEntry t1727_f6_DefaultValue = 
{
	&t1727_f6_FieldInfo, { (char*)&t1727_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1727_f7_DefaultValueData = 1073741824;
static Il2CppFieldDefaultValueEntry t1727_f7_DefaultValue = 
{
	&t1727_f7_FieldInfo, { (char*)&t1727_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1727_f8_DefaultValueData = -2147483648;
static Il2CppFieldDefaultValueEntry t1727_f8_DefaultValue = 
{
	&t1727_f8_FieldInfo, { (char*)&t1727_f8_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1727_FDVs[] = 
{
	&t1727_f2_DefaultValue,
	&t1727_f3_DefaultValue,
	&t1727_f4_DefaultValue,
	&t1727_f5_DefaultValue,
	&t1727_f6_DefaultValue,
	&t1727_f7_DefaultValue,
	&t1727_f8_DefaultValue,
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
void t1727_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
}
CustomAttributesCache t1727__CustomAttributeCache = {
2,
NULL,
&t1727_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1727_0_0_0;
extern Il2CppType t1727_1_0_0;
extern CustomAttributesCache t1727__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1727_DM = 
{
	NULL, NULL, NULL, t1727_IOs, &t8_0_0_0, t1727_VT, t1727_VTIGM, NULL};
TypeInfo t1727_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileOptions", "System.IO", t1727_MIs, NULL, t1727_FIs, NULL, &t125_TI, NULL, &t1727__CustomAttributeCache, &t1727_0_0_0, &t1727_1_0_0, &t1727_DM, NULL, NULL, NULL, t1727_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1727)+ sizeof (Il2CppObject), sizeof (t1727)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 8, 0, 0, 23, 0, 3};
#include "t1728.h"
// Metadata Definition System.IO.FileShare
extern TypeInfo t1728_TI;
#include "t1728MD.h"
static MethodInfo* t1728_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1728_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1728_TI, offsetof(t1728, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1728_0_0_32854;
FieldInfo t1728_f2_FieldInfo = 
{
	"None", &t1728_0_0_32854, &t1728_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1728_0_0_32854;
FieldInfo t1728_f3_FieldInfo = 
{
	"Read", &t1728_0_0_32854, &t1728_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1728_0_0_32854;
FieldInfo t1728_f4_FieldInfo = 
{
	"Write", &t1728_0_0_32854, &t1728_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1728_0_0_32854;
FieldInfo t1728_f5_FieldInfo = 
{
	"ReadWrite", &t1728_0_0_32854, &t1728_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1728_0_0_32854;
FieldInfo t1728_f6_FieldInfo = 
{
	"Delete", &t1728_0_0_32854, &t1728_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1728_0_0_32854;
FieldInfo t1728_f7_FieldInfo = 
{
	"Inheritable", &t1728_0_0_32854, &t1728_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1728_FIs[] =
{
	&t1728_f1_FieldInfo,
	&t1728_f2_FieldInfo,
	&t1728_f3_FieldInfo,
	&t1728_f4_FieldInfo,
	&t1728_f5_FieldInfo,
	&t1728_f6_FieldInfo,
	&t1728_f7_FieldInfo,
	NULL
};
static const int32_t t1728_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1728_f2_DefaultValue = 
{
	&t1728_f2_FieldInfo, { (char*)&t1728_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1728_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1728_f3_DefaultValue = 
{
	&t1728_f3_FieldInfo, { (char*)&t1728_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1728_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1728_f4_DefaultValue = 
{
	&t1728_f4_FieldInfo, { (char*)&t1728_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1728_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1728_f5_DefaultValue = 
{
	&t1728_f5_FieldInfo, { (char*)&t1728_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1728_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1728_f6_DefaultValue = 
{
	&t1728_f6_FieldInfo, { (char*)&t1728_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1728_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1728_f7_DefaultValue = 
{
	&t1728_f7_FieldInfo, { (char*)&t1728_f7_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1728_FDVs[] = 
{
	&t1728_f2_DefaultValue,
	&t1728_f3_DefaultValue,
	&t1728_f4_DefaultValue,
	&t1728_f5_DefaultValue,
	&t1728_f6_DefaultValue,
	&t1728_f7_DefaultValue,
	NULL
};
static Il2CppMethodReference t1728_VT[] =
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
	false,
	false,
	false,
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
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1728_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t622 * tmp;
		tmp = (t622 *)il2cpp_codegen_object_new (&t622_TI);
		m3031(tmp, &m3031_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1728__CustomAttributeCache = {
2,
NULL,
&t1728_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1728_0_0_0;
extern Il2CppType t1728_1_0_0;
extern CustomAttributesCache t1728__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1728_DM = 
{
	NULL, NULL, NULL, t1728_IOs, &t8_0_0_0, t1728_VT, t1728_VTIGM, NULL};
TypeInfo t1728_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileShare", "System.IO", t1728_MIs, NULL, t1728_FIs, NULL, &t125_TI, NULL, &t1728__CustomAttributeCache, &t1728_0_0_0, &t1728_1_0_0, &t1728_DM, NULL, NULL, NULL, t1728_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1728)+ sizeof (Il2CppObject), sizeof (t1728)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 7, 0, 0, 23, 0, 3};
#include "t1729.h"
// Metadata Definition System.IO.FileStream/ReadDelegate
extern TypeInfo t1729_TI;
#include "t1729MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t58_0_0_0;
static ParameterInfo t1729_m8898_ParameterInfos[] = 
{
	{"object", 0, 134221121, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"method", 1, 134221122, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m8898_MI = 
{
	".ctor", (methodPointerType)&m8898, &t1729_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t58, t1729_m8898_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 2643, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1729_m8899_ParameterInfos[] = 
{
	{"buffer", 0, 134221123, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134221124, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221125, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8899_MI = 
{
	"Invoke", (methodPointerType)&m8899, &t1729_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1729_m8899_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 3, false, false, 2644, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t477_0_0_0;
extern Il2CppType t477_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1729_m8900_ParameterInfos[] = 
{
	{"buffer", 0, 134221126, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134221127, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221128, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"callback", 3, 134221129, &EmptyCustomAttributesCache, &t477_0_0_0},
	{"object", 4, 134221130, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t476_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8900_MI = 
{
	"BeginInvoke", (methodPointerType)&m8900, &t1729_TI, &t476_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t1729_m8900_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 5, false, false, 2645, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t476_0_0_0;
extern Il2CppType t476_0_0_0;
static ParameterInfo t1729_m8901_ParameterInfos[] = 
{
	{"result", 0, 134221131, &EmptyCustomAttributesCache, &t476_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8901_MI = 
{
	"EndInvoke", (methodPointerType)&m8901, &t1729_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1729_m8901_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 2646, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1729_MIs[] =
{
	&m8898_MI,
	&m8899_MI,
	&m8900_MI,
	&m8901_MI,
	NULL
};
extern MethodInfo m3045_MI;
extern MethodInfo m3046_MI;
extern MethodInfo m3047_MI;
extern MethodInfo m3048_MI;
extern MethodInfo m3049_MI;
extern MethodInfo m3050_MI;
extern MethodInfo m3051_MI;
extern MethodInfo m8899_MI;
extern MethodInfo m8900_MI;
extern MethodInfo m8901_MI;
static Il2CppMethodReference t1729_VT[] =
{
	&m3045_MI,
	&m646_MI,
	&m3046_MI,
	&m673_MI,
	&m3047_MI,
	&m3048_MI,
	&m3047_MI,
	&m3049_MI,
	&m3050_MI,
	&m3051_MI,
	&m8899_MI,
	&m8900_MI,
	&m8901_MI,
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
};
static Il2CppInterfaceOffsetPair t1729_IOs[] = 
{
	{ &t629_0_0_0, 4},
	{ &t630_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1729_0_0_0;
extern Il2CppType t1729_1_0_0;
extern Il2CppType t478_0_0_0;
extern TypeInfo t300_TI;
extern Il2CppType t300_0_0_0;
struct t1729;
const Il2CppTypeDefinitionMetadata t1729_DM = 
{
	&t300_0_0_0, NULL, NULL, t1729_IOs, &t478_0_0_0, t1729_VT, t1729_VTIGM, NULL};
TypeInfo t1729_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadDelegate", "", t1729_MIs, NULL, NULL, NULL, &t1729_TI, NULL, &EmptyCustomAttributesCache, &t1729_0_0_0, &t1729_1_0_0, &t1729_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t1729, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1729), sizeof (t1729), 0, sizeof(methodPointerType), 0, 0, -1, 259, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1730.h"
// Metadata Definition System.IO.FileStream/WriteDelegate
extern TypeInfo t1730_TI;
#include "t1730MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t58_0_0_0;
static ParameterInfo t1730_m8902_ParameterInfos[] = 
{
	{"object", 0, 134221132, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"method", 1, 134221133, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m8902_MI = 
{
	".ctor", (methodPointerType)&m8902, &t1730_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t58, t1730_m8902_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 2647, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1730_m8903_ParameterInfos[] = 
{
	{"buffer", 0, 134221134, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134221135, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221136, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8903_MI = 
{
	"Invoke", (methodPointerType)&m8903, &t1730_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1730_m8903_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 3, false, false, 2648, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t477_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1730_m8904_ParameterInfos[] = 
{
	{"buffer", 0, 134221137, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134221138, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221139, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"callback", 3, 134221140, &EmptyCustomAttributesCache, &t477_0_0_0},
	{"object", 4, 134221141, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t476_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8904_MI = 
{
	"BeginInvoke", (methodPointerType)&m8904, &t1730_TI, &t476_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t1730_m8904_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 5, false, false, 2649, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t476_0_0_0;
static ParameterInfo t1730_m8905_ParameterInfos[] = 
{
	{"result", 0, 134221142, &EmptyCustomAttributesCache, &t476_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8905_MI = 
{
	"EndInvoke", (methodPointerType)&m8905, &t1730_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1730_m8905_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 2650, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1730_MIs[] =
{
	&m8902_MI,
	&m8903_MI,
	&m8904_MI,
	&m8905_MI,
	NULL
};
extern MethodInfo m8903_MI;
extern MethodInfo m8904_MI;
extern MethodInfo m8905_MI;
static Il2CppMethodReference t1730_VT[] =
{
	&m3045_MI,
	&m646_MI,
	&m3046_MI,
	&m673_MI,
	&m3047_MI,
	&m3048_MI,
	&m3047_MI,
	&m3049_MI,
	&m3050_MI,
	&m3051_MI,
	&m8903_MI,
	&m8904_MI,
	&m8905_MI,
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
};
static Il2CppInterfaceOffsetPair t1730_IOs[] = 
{
	{ &t629_0_0_0, 4},
	{ &t630_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1730_0_0_0;
extern Il2CppType t1730_1_0_0;
struct t1730;
const Il2CppTypeDefinitionMetadata t1730_DM = 
{
	&t300_0_0_0, NULL, NULL, t1730_IOs, &t478_0_0_0, t1730_VT, t1730_VTIGM, NULL};
TypeInfo t1730_TI = 
{
	&g_mscorlib_dll_Image, NULL, "WriteDelegate", "", t1730_MIs, NULL, NULL, NULL, &t1730_TI, NULL, &EmptyCustomAttributesCache, &t1730_0_0_0, &t1730_1_0_0, &t1730_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t1730, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1730), sizeof (t1730), 0, sizeof(methodPointerType), 0, 0, -1, 259, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t300.h"
// Metadata Definition System.IO.FileStream
#include "t300MD.h"
extern Il2CppType t58_0_0_0;
extern Il2CppType t1193_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t300_m8906_ParameterInfos[] = 
{
	{"handle", 0, 134221048, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"access", 1, 134221049, &EmptyCustomAttributesCache, &t1193_0_0_0},
	{"ownsHandle", 2, 134221050, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"bufferSize", 3, 134221051, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"isAsync", 4, 134221052, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"noBuffering", 5, 134221053, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t58_t125_t186_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8906_MI = 
{
	".ctor", (methodPointerType)&m8906, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122_t58_t125_t186_t125_t186_t186, t300_m8906_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 6, false, false, 2607, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t301_0_0_0;
extern Il2CppType t1193_0_0_0;
static ParameterInfo t300_m8907_ParameterInfos[] = 
{
	{"path", 0, 134221054, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221055, &EmptyCustomAttributesCache, &t301_0_0_0},
	{"access", 2, 134221056, &EmptyCustomAttributesCache, &t1193_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8907_MI = 
{
	".ctor", (methodPointerType)&m8907, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t300_m8907_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 2608, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t301_0_0_0;
extern Il2CppType t1193_0_0_0;
extern Il2CppType t1728_0_0_0;
static ParameterInfo t300_m8908_ParameterInfos[] = 
{
	{"path", 0, 134221057, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221058, &EmptyCustomAttributesCache, &t301_0_0_0},
	{"access", 2, 134221059, &EmptyCustomAttributesCache, &t1193_0_0_0},
	{"share", 3, 134221060, &EmptyCustomAttributesCache, &t1728_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8908_MI = 
{
	".ctor", (methodPointerType)&m8908, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t125, t300_m8908_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 2609, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t301_0_0_0;
extern Il2CppType t1193_0_0_0;
extern Il2CppType t1728_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t300_m8909_ParameterInfos[] = 
{
	{"path", 0, 134221061, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221062, &EmptyCustomAttributesCache, &t301_0_0_0},
	{"access", 2, 134221063, &EmptyCustomAttributesCache, &t1193_0_0_0},
	{"share", 3, 134221064, &EmptyCustomAttributesCache, &t1728_0_0_0},
	{"bufferSize", 4, 134221065, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"isAsync", 5, 134221066, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"anonymous", 6, 134221067, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t125_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8909_MI = 
{
	".ctor", (methodPointerType)&m8909, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t125_t125_t186_t186, t300_m8909_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 7, false, false, 2610, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t301_0_0_0;
extern Il2CppType t1193_0_0_0;
extern Il2CppType t1728_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t1727_0_0_0;
static ParameterInfo t300_m8910_ParameterInfos[] = 
{
	{"path", 0, 134221068, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221069, &EmptyCustomAttributesCache, &t301_0_0_0},
	{"access", 2, 134221070, &EmptyCustomAttributesCache, &t1193_0_0_0},
	{"share", 3, 134221071, &EmptyCustomAttributesCache, &t1728_0_0_0},
	{"bufferSize", 4, 134221072, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"anonymous", 5, 134221073, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"options", 6, 134221074, &EmptyCustomAttributesCache, &t1727_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t125_t125_t186_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8910_MI = 
{
	".ctor", (methodPointerType)&m8910, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t125_t125_t186_t125, t300_m8910_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 7, false, false, 2611, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8911_MI = 
{
	"get_CanRead", (methodPointerType)&m8911, &t300_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 5, 0, false, false, 2612, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8912_MI = 
{
	"get_CanWrite", (methodPointerType)&m8912, &t300_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 2613, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8913_MI = 
{
	"get_CanSeek", (methodPointerType)&m8913, &t300_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2614, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m6988_MI = 
{
	"get_Length", (methodPointerType)&m6988, &t300_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2615, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m8914_MI = 
{
	"get_Position", (methodPointerType)&m8914, &t300_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2616, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t300_m8915_ParameterInfos[] = 
{
	{"value", 0, 134221075, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m8915_MI = 
{
	"set_Position", (methodPointerType)&m8915, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122_t303, t300_m8915_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 10, 1, false, false, 2617, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8916_MI = 
{
	"ReadByte", (methodPointerType)&m8916, &t300_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 15, 0, false, false, 2618, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t582_0_0_0;
static ParameterInfo t300_m8917_ParameterInfos[] = 
{
	{"value", 0, 134221076, &EmptyCustomAttributesCache, &t582_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8917_MI = 
{
	"WriteByte", (methodPointerType)&m8917, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t300_m8917_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 19, 1, false, false, 2619, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t300_m6989_ParameterInfos[] = 
{
	{"array", 0, 134221077, &EmptyCustomAttributesCache, &t737_0_0_3},
	{"offset", 1, 134221078, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221079, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6989_MI = 
{
	"Read", (methodPointerType)&m6989, &t300_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t300_m6989_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 14, 3, false, false, 2620, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t300_m8918_ParameterInfos[] = 
{
	{"dest", 0, 134221080, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134221081, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221082, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8918_MI = 
{
	"ReadInternal", (methodPointerType)&m8918, &t300_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t300_m8918_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2621, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t477_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t300_m8919_ParameterInfos[] = 
{
	{"array", 0, 134221083, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134221084, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"numBytes", 2, 134221085, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"userCallback", 3, 134221086, &EmptyCustomAttributesCache, &t477_0_0_0},
	{"stateObject", 4, 134221087, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t476_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8919_MI = 
{
	"BeginRead", (methodPointerType)&m8919, &t300_TI, &t476_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t300_m8919_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 20, 5, false, false, 2622, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t476_0_0_0;
static ParameterInfo t300_m8920_ParameterInfos[] = 
{
	{"asyncResult", 0, 134221088, &EmptyCustomAttributesCache, &t476_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8920_MI = 
{
	"EndRead", (methodPointerType)&m8920, &t300_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t300_m8920_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 22, 1, false, false, 2623, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t300_m8921_ParameterInfos[] = 
{
	{"array", 0, 134221089, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134221090, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221091, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8921_MI = 
{
	"Write", (methodPointerType)&m8921, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t300_m8921_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 18, 3, false, false, 2624, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t300_m8922_ParameterInfos[] = 
{
	{"src", 0, 134221092, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134221093, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221094, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8922_MI = 
{
	"WriteInternal", (methodPointerType)&m8922, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t300_m8922_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2625, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t477_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t300_m8923_ParameterInfos[] = 
{
	{"array", 0, 134221095, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134221096, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"numBytes", 2, 134221097, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"userCallback", 3, 134221098, &EmptyCustomAttributesCache, &t477_0_0_0},
	{"stateObject", 4, 134221099, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t476_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8923_MI = 
{
	"BeginWrite", (methodPointerType)&m8923, &t300_TI, &t476_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t300_m8923_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 21, 5, false, false, 2626, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t476_0_0_0;
static ParameterInfo t300_m8924_ParameterInfos[] = 
{
	{"asyncResult", 0, 134221100, &EmptyCustomAttributesCache, &t476_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8924_MI = 
{
	"EndWrite", (methodPointerType)&m8924, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t300_m8924_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 1, false, false, 2627, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t1505_0_0_0;
extern Il2CppType t1505_0_0_0;
static ParameterInfo t300_m8925_ParameterInfos[] = 
{
	{"offset", 0, 134221101, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"origin", 1, 134221102, &EmptyCustomAttributesCache, &t1505_0_0_0},
};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303_t303_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8925_MI = 
{
	"Seek", (methodPointerType)&m8925, &t300_TI, &t303_0_0_0, RuntimeInvoker_t303_t303_t125, t300_m8925_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 2, false, false, 2628, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t300_m1133_ParameterInfos[] = 
{
	{"value", 0, 134221103, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m1133_MI = 
{
	"SetLength", (methodPointerType)&m1133, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122_t303, t300_m1133_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 2629, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8926_MI = 
{
	"Flush", (methodPointerType)&m8926, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 2630, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8927_MI = 
{
	"Finalize", (methodPointerType)&m8927, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 2631, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t300_m8928_ParameterInfos[] = 
{
	{"disposing", 0, 134221104, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8928_MI = 
{
	"Dispose", (methodPointerType)&m8928, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t300_m8928_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 1, false, false, 2632, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t300_m8929_ParameterInfos[] = 
{
	{"dest", 0, 134221105, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"dest_offset", 1, 134221106, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221107, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8929_MI = 
{
	"ReadSegment", (methodPointerType)&m8929, &t300_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t300_m8929_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2633, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t300_m8930_ParameterInfos[] = 
{
	{"src", 0, 134221108, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"src_offset", 1, 134221109, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221110, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8930_MI = 
{
	"WriteSegment", (methodPointerType)&m8930, &t300_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t300_m8930_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2634, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t302_0_0_0;
static ParameterInfo t300_m8931_ParameterInfos[] = 
{
	{"st", 0, 134221111, &EmptyCustomAttributesCache, &t302_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8931_MI = 
{
	"FlushBuffer", (methodPointerType)&m8931, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t300_m8931_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2635, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8932_MI = 
{
	"FlushBuffer", (methodPointerType)&m8932, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2636, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8933_MI = 
{
	"FlushBufferIfDirty", (methodPointerType)&m8933, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2637, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8934_MI = 
{
	"RefillBuffer", (methodPointerType)&m8934, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2638, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t300_m8935_ParameterInfos[] = 
{
	{"handle", 0, 134221112, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"buf", 1, 134221113, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 2, 134221114, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134221115, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t58_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8935_MI = 
{
	"ReadData", (methodPointerType)&m8935, &t300_TI, &t125_0_0_0, RuntimeInvoker_t125_t58_t9_t125_t125, t300_m8935_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 2639, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t300_m8936_ParameterInfos[] = 
{
	{"size", 0, 134221116, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"noBuffering", 1, 134221117, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8936_MI = 
{
	"InitBuffer", (methodPointerType)&m8936, &t300_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t186, t300_m8936_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2640, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t300_m8937_ParameterInfos[] = 
{
	{"filename", 0, 134221118, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8937_MI = 
{
	"GetSecureFileName", (methodPointerType)&m8937, &t300_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t300_m8937_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2641, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t300_m8938_ParameterInfos[] = 
{
	{"filename", 0, 134221119, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"full", 1, 134221120, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8938_MI = 
{
	"GetSecureFileName", (methodPointerType)&m8938, &t300_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t186, t300_m8938_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 2642, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t300_MIs[] =
{
	&m8906_MI,
	&m8907_MI,
	&m8908_MI,
	&m8909_MI,
	&m8910_MI,
	&m8911_MI,
	&m8912_MI,
	&m8913_MI,
	&m6988_MI,
	&m8914_MI,
	&m8915_MI,
	&m8916_MI,
	&m8917_MI,
	&m6989_MI,
	&m8918_MI,
	&m8919_MI,
	&m8920_MI,
	&m8921_MI,
	&m8922_MI,
	&m8923_MI,
	&m8924_MI,
	&m8925_MI,
	&m1133_MI,
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
	NULL
};
extern Il2CppType t1193_0_0_1;
FieldInfo t300_f1_FieldInfo = 
{
	"access", &t1193_0_0_1, &t300_TI, offsetof(t300, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t300_f2_FieldInfo = 
{
	"owner", &t124_0_0_1, &t300_TI, offsetof(t300, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t300_f3_FieldInfo = 
{
	"async", &t124_0_0_1, &t300_TI, offsetof(t300, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t300_f4_FieldInfo = 
{
	"canseek", &t124_0_0_1, &t300_TI, offsetof(t300, f4), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_1;
FieldInfo t300_f5_FieldInfo = 
{
	"append_startpos", &t303_0_0_1, &t300_TI, offsetof(t300, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t300_f6_FieldInfo = 
{
	"anonymous", &t124_0_0_1, &t300_TI, offsetof(t300, f6), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t300_f7_FieldInfo = 
{
	"buf", &t737_0_0_1, &t300_TI, offsetof(t300, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t300_f8_FieldInfo = 
{
	"buf_size", &t125_0_0_1, &t300_TI, offsetof(t300, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t300_f9_FieldInfo = 
{
	"buf_length", &t125_0_0_1, &t300_TI, offsetof(t300, f9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t300_f10_FieldInfo = 
{
	"buf_offset", &t125_0_0_1, &t300_TI, offsetof(t300, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t300_f11_FieldInfo = 
{
	"buf_dirty", &t124_0_0_1, &t300_TI, offsetof(t300, f11), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_1;
FieldInfo t300_f12_FieldInfo = 
{
	"buf_start", &t303_0_0_1, &t300_TI, offsetof(t300, f12), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t300_f13_FieldInfo = 
{
	"name", &t2_0_0_1, &t300_TI, offsetof(t300, f13), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_1;
FieldInfo t300_f14_FieldInfo = 
{
	"handle", &t58_0_0_1, &t300_TI, offsetof(t300, f14), &EmptyCustomAttributesCache};
static FieldInfo* t300_FIs[] =
{
	&t300_f1_FieldInfo,
	&t300_f2_FieldInfo,
	&t300_f3_FieldInfo,
	&t300_f4_FieldInfo,
	&t300_f5_FieldInfo,
	&t300_f6_FieldInfo,
	&t300_f7_FieldInfo,
	&t300_f8_FieldInfo,
	&t300_f9_FieldInfo,
	&t300_f10_FieldInfo,
	&t300_f11_FieldInfo,
	&t300_f12_FieldInfo,
	&t300_f13_FieldInfo,
	&t300_f14_FieldInfo,
	NULL
};
extern MethodInfo m8911_MI;
static PropertyInfo t300____CanRead_PropertyInfo = 
{
	&t300_TI, "CanRead", &m8911_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8912_MI;
static PropertyInfo t300____CanWrite_PropertyInfo = 
{
	&t300_TI, "CanWrite", &m8912_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8913_MI;
static PropertyInfo t300____CanSeek_PropertyInfo = 
{
	&t300_TI, "CanSeek", &m8913_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6988_MI;
static PropertyInfo t300____Length_PropertyInfo = 
{
	&t300_TI, "Length", &m6988_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8914_MI;
extern MethodInfo m8915_MI;
static PropertyInfo t300____Position_PropertyInfo = 
{
	&t300_TI, "Position", &m8914_MI, &m8915_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t300_PIs[] =
{
	&t300____CanRead_PropertyInfo,
	&t300____CanWrite_PropertyInfo,
	&t300____CanSeek_PropertyInfo,
	&t300____Length_PropertyInfo,
	&t300____Position_PropertyInfo,
	NULL
};
static const Il2CppType* t300_TI__nestedTypes[2] =
{
	&t1729_0_0_0,
	&t1730_0_0_0,
};
extern MethodInfo m8927_MI;
extern MethodInfo m7098_MI;
extern MethodInfo m8928_MI;
extern MethodInfo m1129_MI;
extern MethodInfo m8926_MI;
extern MethodInfo m6989_MI;
extern MethodInfo m8916_MI;
extern MethodInfo m8925_MI;
extern MethodInfo m1133_MI;
extern MethodInfo m8921_MI;
extern MethodInfo m8917_MI;
extern MethodInfo m8919_MI;
extern MethodInfo m8923_MI;
extern MethodInfo m8920_MI;
extern MethodInfo m8924_MI;
static Il2CppMethodReference t300_VT[] =
{
	&m671_MI,
	&m8927_MI,
	&m672_MI,
	&m673_MI,
	&m7098_MI,
	&m8911_MI,
	&m8913_MI,
	&m8912_MI,
	&m6988_MI,
	&m8914_MI,
	&m8915_MI,
	&m8928_MI,
	&m1129_MI,
	&m8926_MI,
	&m6989_MI,
	&m8916_MI,
	&m8925_MI,
	&m1133_MI,
	&m8921_MI,
	&m8917_MI,
	&m8919_MI,
	&m8923_MI,
	&m8920_MI,
	&m8924_MI,
};
static bool t300_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t300_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t300_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t300__CustomAttributeCache = {
1,
NULL,
&t300_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t300_1_0_0;
struct t300;
extern CustomAttributesCache t300__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t300_DM = 
{
	NULL, t300_TI__nestedTypes, NULL, t300_IOs, &t302_0_0_0, t300_VT, t300_VTIGM, NULL};
TypeInfo t300_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileStream", "System.IO", t300_MIs, t300_PIs, t300_FIs, NULL, &t300_TI, NULL, &t300__CustomAttributeCache, &t300_0_0_0, &t300_1_0_0, &t300_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t300), sizeof (t300), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 36, 5, 14, 0, 2, 24, 0, 1};
#include "t1731.h"
// Metadata Definition System.IO.FileStreamAsyncResult
extern TypeInfo t1731_TI;
#include "t1731MD.h"
extern Il2CppType t477_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1731_m8939_ParameterInfos[] = 
{
	{"cb", 0, 134221143, &EmptyCustomAttributesCache, &t477_0_0_0},
	{"state", 1, 134221144, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8939_MI = 
{
	".ctor", (methodPointerType)&m8939, &t1731_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1731_m8939_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2651, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t476_0_0_0;
static ParameterInfo t1731_m8940_ParameterInfos[] = 
{
	{"ares", 0, 134221145, &EmptyCustomAttributesCache, &t476_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8940_MI = 
{
	"CBWrapper", (methodPointerType)&m8940, &t1731_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1731_m8940_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2652, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8941_MI = 
{
	"get_AsyncState", (methodPointerType)&m8941, &t1731_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 2653, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1492_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8942_MI = 
{
	"get_AsyncWaitHandle", (methodPointerType)&m8942, &t1731_TI, &t1492_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 2654, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8943_MI = 
{
	"get_IsCompleted", (methodPointerType)&m8943, &t1731_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 2655, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1731_MIs[] =
{
	&m8939_MI,
	&m8940_MI,
	&m8941_MI,
	&m8942_MI,
	&m8943_MI,
	NULL
};
extern Il2CppType t9_0_0_1;
FieldInfo t1731_f0_FieldInfo = 
{
	"state", &t9_0_0_1, &t1731_TI, offsetof(t1731, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1731_f1_FieldInfo = 
{
	"completed", &t124_0_0_1, &t1731_TI, offsetof(t1731, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1491_0_0_1;
FieldInfo t1731_f2_FieldInfo = 
{
	"wh", &t1491_0_0_1, &t1731_TI, offsetof(t1731, f2), &EmptyCustomAttributesCache};
extern Il2CppType t477_0_0_1;
FieldInfo t1731_f3_FieldInfo = 
{
	"cb", &t477_0_0_1, &t1731_TI, offsetof(t1731, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1731_f4_FieldInfo = 
{
	"Count", &t125_0_0_6, &t1731_TI, offsetof(t1731, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1731_f5_FieldInfo = 
{
	"OriginalCount", &t125_0_0_6, &t1731_TI, offsetof(t1731, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1731_f6_FieldInfo = 
{
	"BytesRead", &t125_0_0_6, &t1731_TI, offsetof(t1731, f6), &EmptyCustomAttributesCache};
extern Il2CppType t477_0_0_1;
FieldInfo t1731_f7_FieldInfo = 
{
	"realcb", &t477_0_0_1, &t1731_TI, offsetof(t1731, f7), &EmptyCustomAttributesCache};
static FieldInfo* t1731_FIs[] =
{
	&t1731_f0_FieldInfo,
	&t1731_f1_FieldInfo,
	&t1731_f2_FieldInfo,
	&t1731_f3_FieldInfo,
	&t1731_f4_FieldInfo,
	&t1731_f5_FieldInfo,
	&t1731_f6_FieldInfo,
	&t1731_f7_FieldInfo,
	NULL
};
extern MethodInfo m8941_MI;
static PropertyInfo t1731____AsyncState_PropertyInfo = 
{
	&t1731_TI, "AsyncState", &m8941_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8942_MI;
static PropertyInfo t1731____AsyncWaitHandle_PropertyInfo = 
{
	&t1731_TI, "AsyncWaitHandle", &m8942_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8943_MI;
static PropertyInfo t1731____IsCompleted_PropertyInfo = 
{
	&t1731_TI, "IsCompleted", &m8943_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1731_PIs[] =
{
	&t1731____AsyncState_PropertyInfo,
	&t1731____AsyncWaitHandle_PropertyInfo,
	&t1731____IsCompleted_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1731_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m8941_MI,
	&m8942_MI,
	&m8943_MI,
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
};
static const Il2CppType* t1731_ITIs[] = 
{
	&t476_0_0_0,
};
static Il2CppInterfaceOffsetPair t1731_IOs[] = 
{
	{ &t476_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1731_0_0_0;
extern Il2CppType t1731_1_0_0;
struct t1731;
const Il2CppTypeDefinitionMetadata t1731_DM = 
{
	NULL, NULL, t1731_ITIs, t1731_IOs, &t9_0_0_0, t1731_VT, t1731_VTIGM, NULL};
TypeInfo t1731_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileStreamAsyncResult", "System.IO", t1731_MIs, t1731_PIs, t1731_FIs, NULL, &t1731_TI, NULL, &EmptyCustomAttributesCache, &t1731_0_0_0, &t1731_1_0_0, &t1731_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1731), sizeof (t1731), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 3, 8, 0, 0, 7, 1, 1};
#include "t1722.h"
// Metadata Definition System.IO.FileSystemInfo
extern TypeInfo t1722_TI;
#include "t1722MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8944_MI = 
{
	".ctor", (methodPointerType)&m8944, &t1722_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2656, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1722_m8945_ParameterInfos[] = 
{
	{"info", 0, 134221146, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134221147, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m8945_MI = 
{
	".ctor", (methodPointerType)&m8945, &t1722_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1722_m8945_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2657, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1722_m8946_ParameterInfos[] = 
{
	{"info", 0, 134221148, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134221149, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1722__CustomAttributeCache_m8946;
MethodInfo m8946_MI = 
{
	"GetObjectData", (methodPointerType)&m8946, &t1722_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1722_m8946_ParameterInfos, &t1722__CustomAttributeCache_m8946, 454, 0, 7, 2, false, false, 2658, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m12813_MI = 
{
	"get_Exists", NULL, &t1722_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 8, 0, false, false, 2659, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8947_MI = 
{
	"get_FullName", (methodPointerType)&m8947, &t1722_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 2660, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1722_m8948_ParameterInfos[] = 
{
	{"force", 0, 134221150, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8948_MI = 
{
	"Refresh", (methodPointerType)&m8948, &t1722_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1722_m8948_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 2661, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8949_MI = 
{
	"InternalRefresh", (methodPointerType)&m8949, &t1722_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 451, 0, 10, 0, false, false, 2662, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1722_m8950_ParameterInfos[] = 
{
	{"path", 0, 134221151, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8950_MI = 
{
	"CheckPath", (methodPointerType)&m8950, &t1722_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1722_m8950_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 2663, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1722_MIs[] =
{
	&m8944_MI,
	&m8945_MI,
	&m8946_MI,
	&m12813_MI,
	&m8947_MI,
	&m8948_MI,
	&m8949_MI,
	&m8950_MI,
	NULL
};
extern Il2CppType t2_0_0_4;
FieldInfo t1722_f1_FieldInfo = 
{
	"FullPath", &t2_0_0_4, &t1722_TI, offsetof(t1722, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_4;
FieldInfo t1722_f2_FieldInfo = 
{
	"OriginalPath", &t2_0_0_4, &t1722_TI, offsetof(t1722, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1732_0_0_3;
FieldInfo t1722_f3_FieldInfo = 
{
	"stat", &t1732_0_0_3, &t1722_TI, offsetof(t1722, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t1722_f4_FieldInfo = 
{
	"valid", &t124_0_0_3, &t1722_TI, offsetof(t1722, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1722_FIs[] =
{
	&t1722_f1_FieldInfo,
	&t1722_f2_FieldInfo,
	&t1722_f3_FieldInfo,
	&t1722_f4_FieldInfo,
	NULL
};
extern MethodInfo m12813_MI;
static PropertyInfo t1722____Exists_PropertyInfo = 
{
	&t1722_TI, "Exists", &m12813_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1722____FullName_PropertyInfo = 
{
	&t1722_TI, "FullName", &m8947_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1722_PIs[] =
{
	&t1722____Exists_PropertyInfo,
	&t1722____FullName_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1722_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m6078_MI,
	&m6079_MI,
	&m8946_MI,
	&m8946_MI,
	NULL,
	&m8947_MI,
	&m8949_MI,
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
};
static const Il2CppType* t1722_ITIs[] = 
{
	&t630_0_0_0,
};
static Il2CppInterfaceOffsetPair t1722_IOs[] = 
{
	{ &t630_0_0_0, 6},
};
void t1722_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1722_CustomAttributesCacheGenerator_m8946(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1722__CustomAttributeCache = {
1,
NULL,
&t1722_CustomAttributesCacheGenerator
};
CustomAttributesCache t1722__CustomAttributeCache_m8946 = {
1,
NULL,
&t1722_CustomAttributesCacheGenerator_m8946
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1722_1_0_0;
extern Il2CppType t1215_0_0_0;
struct t1722;
extern CustomAttributesCache t1722__CustomAttributeCache;
extern CustomAttributesCache t1722__CustomAttributeCache_m8946;
const Il2CppTypeDefinitionMetadata t1722_DM = 
{
	NULL, NULL, t1722_ITIs, t1722_IOs, &t1215_0_0_0, t1722_VT, t1722_VTIGM, NULL};
TypeInfo t1722_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FileSystemInfo", "System.IO", t1722_MIs, t1722_PIs, t1722_FIs, NULL, &t1722_TI, NULL, &t1722__CustomAttributeCache, &t1722_0_0_0, &t1722_1_0_0, &t1722_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1722), sizeof (t1722), 0, -1, 0, 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 2, 4, 0, 0, 11, 1, 1};
#include "t1555.h"
// Metadata Definition System.IO.IOException
extern TypeInfo t1555_TI;
#include "t1555MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8951_MI = 
{
	".ctor", (methodPointerType)&m8951, &t1555_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2664, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1555_m8952_ParameterInfos[] = 
{
	{"message", 0, 134221152, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8952_MI = 
{
	".ctor", (methodPointerType)&m8952, &t1555_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1555_m8952_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2665, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t138_0_0_0;
static ParameterInfo t1555_m7046_ParameterInfos[] = 
{
	{"message", 0, 134221153, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"innerException", 1, 134221154, &EmptyCustomAttributesCache, &t138_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7046_MI = 
{
	".ctor", (methodPointerType)&m7046, &t1555_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1555_m7046_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2666, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1555_m8953_ParameterInfos[] = 
{
	{"info", 0, 134221155, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134221156, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m8953_MI = 
{
	".ctor", (methodPointerType)&m8953, &t1555_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1555_m8953_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2667, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1555_m8954_ParameterInfos[] = 
{
	{"message", 0, 134221157, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"hresult", 1, 134221158, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8954_MI = 
{
	".ctor", (methodPointerType)&m8954, &t1555_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1555_m8954_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2668, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1555_MIs[] =
{
	&m8951_MI,
	&m8952_MI,
	&m7046_MI,
	&m8953_MI,
	&m8954_MI,
	NULL
};
static Il2CppMethodReference t1555_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4538_MI,
	&m4539_MI,
	&m4285_MI,
	&m1131_MI,
	&m4540_MI,
	&m4483_MI,
	&m4539_MI,
	&m4484_MI,
};
static bool t1555_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1555_IOs[] = 
{
	{ &t630_0_0_0, 4},
	{ &t954_0_0_0, 5},
};
void t1555_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1555__CustomAttributeCache = {
1,
NULL,
&t1555_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1555_1_0_0;
extern Il2CppType t1375_0_0_0;
struct t1555;
extern CustomAttributesCache t1555__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1555_DM = 
{
	NULL, NULL, NULL, t1555_IOs, &t1375_0_0_0, t1555_VT, t1555_VTIGM, NULL};
TypeInfo t1555_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IOException", "System.IO", t1555_MIs, NULL, NULL, NULL, &t1555_TI, NULL, &t1555__CustomAttributeCache, &t1555_0_0_0, &t1555_1_0_0, &t1555_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1555), sizeof (t1555), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 11, 0, 2};
#include "t895.h"
// Metadata Definition System.IO.MemoryStream
extern TypeInfo t895_TI;
#include "t895MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7051_MI = 
{
	".ctor", (methodPointerType)&m7051, &t895_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2669, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t895_m4331_ParameterInfos[] = 
{
	{"capacity", 0, 134221159, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4331_MI = 
{
	".ctor", (methodPointerType)&m4331, &t895_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t895_m4331_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2670, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t895_m7072_ParameterInfos[] = 
{
	{"buffer", 0, 134221160, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7072_MI = 
{
	".ctor", (methodPointerType)&m7072, &t895_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t895_m7072_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2671, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t895_m8955_ParameterInfos[] = 
{
	{"buffer", 0, 134221161, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"index", 1, 134221162, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221163, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"writable", 3, 134221164, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"publicallyVisible", 4, 134221165, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8955_MI = 
{
	"InternalConstructor", (methodPointerType)&m8955, &t895_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t186_t186, t895_m8955_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 5, false, false, 2672, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8956_MI = 
{
	"CheckIfClosedThrowDisposed", (methodPointerType)&m8956, &t895_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2673, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8957_MI = 
{
	"get_CanRead", (methodPointerType)&m8957, &t895_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 5, 0, false, false, 2674, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m7071_MI = 
{
	"get_CanSeek", (methodPointerType)&m7071, &t895_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2675, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8958_MI = 
{
	"get_CanWrite", (methodPointerType)&m8958, &t895_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 2676, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t895_m8959_ParameterInfos[] = 
{
	{"value", 0, 134221166, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8959_MI = 
{
	"set_Capacity", (methodPointerType)&m8959, &t895_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t895_m8959_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 24, 1, false, false, 2677, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m7060_MI = 
{
	"get_Length", (methodPointerType)&m7060, &t895_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2678, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m7059_MI = 
{
	"get_Position", (methodPointerType)&m7059, &t895_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2679, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t895_m7062_ParameterInfos[] = 
{
	{"value", 0, 134221167, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m7062_MI = 
{
	"set_Position", (methodPointerType)&m7062, &t895_TI, &t122_0_0_0, RuntimeInvoker_t122_t303, t895_m7062_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 10, 1, false, false, 2680, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t895_m8960_ParameterInfos[] = 
{
	{"disposing", 0, 134221168, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m8960_MI = 
{
	"Dispose", (methodPointerType)&m8960, &t895_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t895_m8960_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 1, false, false, 2681, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7073_MI = 
{
	"Flush", (methodPointerType)&m7073, &t895_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 2682, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t895_m7061_ParameterInfos[] = 
{
	{"buffer", 0, 134221169, &EmptyCustomAttributesCache, &t737_0_0_3},
	{"offset", 1, 134221170, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221171, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7061_MI = 
{
	"Read", (methodPointerType)&m7061, &t895_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t895_m7061_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 14, 3, false, false, 2683, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8961_MI = 
{
	"ReadByte", (methodPointerType)&m8961, &t895_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 15, 0, false, false, 2684, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t1505_0_0_0;
static ParameterInfo t895_m7063_ParameterInfos[] = 
{
	{"offset", 0, 134221172, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"loc", 1, 134221173, &EmptyCustomAttributesCache, &t1505_0_0_0},
};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303_t303_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7063_MI = 
{
	"Seek", (methodPointerType)&m7063, &t895_TI, &t303_0_0_0, RuntimeInvoker_t303_t303_t125, t895_m7063_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 2, false, false, 2685, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t895_m8962_ParameterInfos[] = 
{
	{"minimum", 0, 134221174, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8962_MI = 
{
	"CalculateNewCapacity", (methodPointerType)&m8962, &t895_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t895_m8962_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2686, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t895_m8963_ParameterInfos[] = 
{
	{"newSize", 0, 134221175, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8963_MI = 
{
	"Expand", (methodPointerType)&m8963, &t895_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t895_m8963_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2687, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t895_m7064_ParameterInfos[] = 
{
	{"value", 0, 134221176, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m7064_MI = 
{
	"SetLength", (methodPointerType)&m7064, &t895_TI, &t122_0_0_0, RuntimeInvoker_t122_t303, t895_m7064_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 2688, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4338_MI = 
{
	"ToArray", (methodPointerType)&m4338, &t895_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 25, 0, false, false, 2689, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t895_m4332_ParameterInfos[] = 
{
	{"buffer", 0, 134221177, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134221178, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221179, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m4332_MI = 
{
	"Write", (methodPointerType)&m4332, &t895_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t895_m4332_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 18, 3, false, false, 2690, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t582_0_0_0;
static ParameterInfo t895_m4343_ParameterInfos[] = 
{
	{"value", 0, 134221180, &EmptyCustomAttributesCache, &t582_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m4343_MI = 
{
	"WriteByte", (methodPointerType)&m4343, &t895_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t895_m4343_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 19, 1, false, false, 2691, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t895_MIs[] =
{
	&m7051_MI,
	&m4331_MI,
	&m7072_MI,
	&m8955_MI,
	&m8956_MI,
	&m8957_MI,
	&m7071_MI,
	&m8958_MI,
	&m8959_MI,
	&m7060_MI,
	&m7059_MI,
	&m7062_MI,
	&m8960_MI,
	&m7073_MI,
	&m7061_MI,
	&m8961_MI,
	&m7063_MI,
	&m8962_MI,
	&m8963_MI,
	&m7064_MI,
	&m4338_MI,
	&m4332_MI,
	&m4343_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t895_f1_FieldInfo = 
{
	"canWrite", &t124_0_0_1, &t895_TI, offsetof(t895, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t895_f2_FieldInfo = 
{
	"allowGetBuffer", &t124_0_0_1, &t895_TI, offsetof(t895, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t895_f3_FieldInfo = 
{
	"capacity", &t125_0_0_1, &t895_TI, offsetof(t895, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t895_f4_FieldInfo = 
{
	"length", &t125_0_0_1, &t895_TI, offsetof(t895, f4), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t895_f5_FieldInfo = 
{
	"internalBuffer", &t737_0_0_1, &t895_TI, offsetof(t895, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t895_f6_FieldInfo = 
{
	"initialIndex", &t125_0_0_1, &t895_TI, offsetof(t895, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t895_f7_FieldInfo = 
{
	"expandable", &t124_0_0_1, &t895_TI, offsetof(t895, f7), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t895_f8_FieldInfo = 
{
	"streamClosed", &t124_0_0_1, &t895_TI, offsetof(t895, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t895_f9_FieldInfo = 
{
	"position", &t125_0_0_1, &t895_TI, offsetof(t895, f9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t895_f10_FieldInfo = 
{
	"dirty_bytes", &t125_0_0_1, &t895_TI, offsetof(t895, f10), &EmptyCustomAttributesCache};
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
	NULL
};
extern MethodInfo m8957_MI;
static PropertyInfo t895____CanRead_PropertyInfo = 
{
	&t895_TI, "CanRead", &m8957_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7071_MI;
static PropertyInfo t895____CanSeek_PropertyInfo = 
{
	&t895_TI, "CanSeek", &m7071_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8958_MI;
static PropertyInfo t895____CanWrite_PropertyInfo = 
{
	&t895_TI, "CanWrite", &m8958_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8959_MI;
static PropertyInfo t895____Capacity_PropertyInfo = 
{
	&t895_TI, "Capacity", NULL, &m8959_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7060_MI;
static PropertyInfo t895____Length_PropertyInfo = 
{
	&t895_TI, "Length", &m7060_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7059_MI;
extern MethodInfo m7062_MI;
static PropertyInfo t895____Position_PropertyInfo = 
{
	&t895_TI, "Position", &m7059_MI, &m7062_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t895_PIs[] =
{
	&t895____CanRead_PropertyInfo,
	&t895____CanSeek_PropertyInfo,
	&t895____CanWrite_PropertyInfo,
	&t895____Capacity_PropertyInfo,
	&t895____Length_PropertyInfo,
	&t895____Position_PropertyInfo,
	NULL
};
extern MethodInfo m8960_MI;
extern MethodInfo m7073_MI;
extern MethodInfo m7061_MI;
extern MethodInfo m8961_MI;
extern MethodInfo m7063_MI;
extern MethodInfo m7064_MI;
extern MethodInfo m4332_MI;
extern MethodInfo m4343_MI;
extern MethodInfo m7029_MI;
extern MethodInfo m7040_MI;
extern MethodInfo m7031_MI;
extern MethodInfo m7041_MI;
extern MethodInfo m4338_MI;
static Il2CppMethodReference t895_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7098_MI,
	&m8957_MI,
	&m7071_MI,
	&m8958_MI,
	&m7060_MI,
	&m7059_MI,
	&m7062_MI,
	&m8960_MI,
	&m1129_MI,
	&m7073_MI,
	&m7061_MI,
	&m8961_MI,
	&m7063_MI,
	&m7064_MI,
	&m4332_MI,
	&m4343_MI,
	&m7029_MI,
	&m7040_MI,
	&m7031_MI,
	&m7041_MI,
	&m8959_MI,
	&m4338_MI,
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
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t895_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t895_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7891(tmp, il2cpp_codegen_string_new_wrapper("Serialization format not compatible with .NET"), &m7891_MI);
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
struct t895;
extern CustomAttributesCache t895__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t895_DM = 
{
	NULL, NULL, NULL, t895_IOs, &t302_0_0_0, t895_VT, t895_VTIGM, NULL};
TypeInfo t895_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MemoryStream", "System.IO", t895_MIs, t895_PIs, t895_FIs, NULL, &t895_TI, NULL, &t895__CustomAttributeCache, &t895_0_0_0, &t895_1_0_0, &t895_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t895), sizeof (t895), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 23, 6, 10, 0, 0, 26, 0, 1};
#include "t1733.h"
// Metadata Definition System.IO.MonoFileType
extern TypeInfo t1733_TI;
#include "t1733MD.h"
static MethodInfo* t1733_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1733_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1733_TI, offsetof(t1733, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1733_0_0_32854;
FieldInfo t1733_f2_FieldInfo = 
{
	"Unknown", &t1733_0_0_32854, &t1733_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1733_0_0_32854;
FieldInfo t1733_f3_FieldInfo = 
{
	"Disk", &t1733_0_0_32854, &t1733_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1733_0_0_32854;
FieldInfo t1733_f4_FieldInfo = 
{
	"Char", &t1733_0_0_32854, &t1733_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1733_0_0_32854;
FieldInfo t1733_f5_FieldInfo = 
{
	"Pipe", &t1733_0_0_32854, &t1733_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1733_0_0_32854;
FieldInfo t1733_f6_FieldInfo = 
{
	"Remote", &t1733_0_0_32854, &t1733_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1733_FIs[] =
{
	&t1733_f1_FieldInfo,
	&t1733_f2_FieldInfo,
	&t1733_f3_FieldInfo,
	&t1733_f4_FieldInfo,
	&t1733_f5_FieldInfo,
	&t1733_f6_FieldInfo,
	NULL
};
static const int32_t t1733_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1733_f2_DefaultValue = 
{
	&t1733_f2_FieldInfo, { (char*)&t1733_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1733_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1733_f3_DefaultValue = 
{
	&t1733_f3_FieldInfo, { (char*)&t1733_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1733_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1733_f4_DefaultValue = 
{
	&t1733_f4_FieldInfo, { (char*)&t1733_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1733_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1733_f5_DefaultValue = 
{
	&t1733_f5_FieldInfo, { (char*)&t1733_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1733_f6_DefaultValueData = 32768;
static Il2CppFieldDefaultValueEntry t1733_f6_DefaultValue = 
{
	&t1733_f6_FieldInfo, { (char*)&t1733_f6_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1733_FDVs[] = 
{
	&t1733_f2_DefaultValue,
	&t1733_f3_DefaultValue,
	&t1733_f4_DefaultValue,
	&t1733_f5_DefaultValue,
	&t1733_f6_DefaultValue,
	NULL
};
static Il2CppMethodReference t1733_VT[] =
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
static bool t1733_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1733_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1733_0_0_0;
extern Il2CppType t1733_1_0_0;
const Il2CppTypeDefinitionMetadata t1733_DM = 
{
	NULL, NULL, NULL, t1733_IOs, &t8_0_0_0, t1733_VT, t1733_VTIGM, NULL};
TypeInfo t1733_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoFileType", "System.IO", t1733_MIs, NULL, t1733_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t1733_0_0_0, &t1733_1_0_0, &t1733_DM, NULL, NULL, NULL, t1733_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1733)+ sizeof (Il2CppObject), sizeof (t1733)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1734.h"
// Metadata Definition System.IO.MonoIO
extern TypeInfo t1734_TI;
#include "t1734MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8964_MI = 
{
	".cctor", (methodPointerType)&m8964, &t1734_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2692, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1735_0_0_0;
extern Il2CppType t1735_0_0_0;
static ParameterInfo t1734_m8965_ParameterInfos[] = 
{
	{"error", 0, 134221181, &EmptyCustomAttributesCache, &t1735_0_0_0},
};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8965_MI = 
{
	"GetException", (methodPointerType)&m8965, &t1734_TI, &t138_0_0_0, RuntimeInvoker_t9_t125, t1734_m8965_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2693, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1735_0_0_0;
static ParameterInfo t1734_m8966_ParameterInfos[] = 
{
	{"path", 0, 134221182, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221183, &EmptyCustomAttributesCache, &t1735_0_0_0},
};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8966_MI = 
{
	"GetException", (methodPointerType)&m8966, &t1734_TI, &t138_0_0_0, RuntimeInvoker_t9_t9_t125, t1734_m8966_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2694, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1735_1_0_2;
extern Il2CppType t1735_1_0_0;
static ParameterInfo t1734_m8967_ParameterInfos[] = 
{
	{"path", 0, 134221184, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221185, &EmptyCustomAttributesCache, &t1735_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t2593 (MethodInfo* method, void* obj, void** args);
MethodInfo m8967_MI = 
{
	"CreateDirectory", (methodPointerType)&m8967, &t1734_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t2593, t1734_m8967_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2695, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1735_1_0_2;
static ParameterInfo t1734_m8968_ParameterInfos[] = 
{
	{"path", 0, 134221186, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"path_with_pattern", 1, 134221187, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"attrs", 2, 134221188, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"mask", 3, 134221189, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"error", 4, 134221190, &EmptyCustomAttributesCache, &t1735_1_0_2},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t125_t125_t2593 (MethodInfo* method, void* obj, void** args);
MethodInfo m8968_MI = 
{
	"GetFileSystemEntries", (methodPointerType)&m8968, &t1734_TI, &t221_0_0_0, RuntimeInvoker_t9_t9_t9_t125_t125_t2593, t1734_m8968_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 5, false, false, 2696, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1735_1_0_2;
static ParameterInfo t1734_m8969_ParameterInfos[] = 
{
	{"error", 0, 134221191, &EmptyCustomAttributesCache, &t1735_1_0_2},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t2593 (MethodInfo* method, void* obj, void** args);
MethodInfo m8969_MI = 
{
	"GetCurrentDirectory", (methodPointerType)&m8969, &t1734_TI, &t2_0_0_0, RuntimeInvoker_t9_t2593, t1734_m8969_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 1, false, false, 2697, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1735_1_0_2;
static ParameterInfo t1734_m8970_ParameterInfos[] = 
{
	{"path", 0, 134221192, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221193, &EmptyCustomAttributesCache, &t1735_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t2593 (MethodInfo* method, void* obj, void** args);
MethodInfo m8970_MI = 
{
	"DeleteFile", (methodPointerType)&m8970, &t1734_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t2593, t1734_m8970_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2698, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1735_1_0_2;
static ParameterInfo t1734_m8971_ParameterInfos[] = 
{
	{"path", 0, 134221194, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221195, &EmptyCustomAttributesCache, &t1735_1_0_2},
};
extern Il2CppType t1721_0_0_0;
extern void* RuntimeInvoker_t1721_t9_t2593 (MethodInfo* method, void* obj, void** args);
MethodInfo m8971_MI = 
{
	"GetFileAttributes", (methodPointerType)&m8971, &t1734_TI, &t1721_0_0_0, RuntimeInvoker_t1721_t9_t2593, t1734_m8971_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2699, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t1735_1_0_2;
static ParameterInfo t1734_m8972_ParameterInfos[] = 
{
	{"handle", 0, 134221196, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"error", 1, 134221197, &EmptyCustomAttributesCache, &t1735_1_0_2},
};
extern Il2CppType t1733_0_0_0;
extern void* RuntimeInvoker_t1733_t58_t2593 (MethodInfo* method, void* obj, void** args);
MethodInfo m8972_MI = 
{
	"GetFileType", (methodPointerType)&m8972, &t1734_TI, &t1733_0_0_0, RuntimeInvoker_t1733_t58_t2593, t1734_m8972_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2700, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1735_1_0_2;
static ParameterInfo t1734_m8973_ParameterInfos[] = 
{
	{"path", 0, 134221198, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221199, &EmptyCustomAttributesCache, &t1735_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t2593 (MethodInfo* method, void* obj, void** args);
MethodInfo m8973_MI = 
{
	"ExistsFile", (methodPointerType)&m8973, &t1734_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t2593, t1734_m8973_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2701, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1735_1_0_2;
static ParameterInfo t1734_m8974_ParameterInfos[] = 
{
	{"path", 0, 134221200, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"error", 1, 134221201, &EmptyCustomAttributesCache, &t1735_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t2593 (MethodInfo* method, void* obj, void** args);
MethodInfo m8974_MI = 
{
	"ExistsDirectory", (methodPointerType)&m8974, &t1734_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t2593, t1734_m8974_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2702, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t1732_1_0_2;
extern Il2CppType t1732_1_0_0;
extern Il2CppType t1735_1_0_2;
static ParameterInfo t1734_m8975_ParameterInfos[] = 
{
	{"path", 0, 134221202, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"stat", 1, 134221203, &EmptyCustomAttributesCache, &t1732_1_0_2},
	{"error", 2, 134221204, &EmptyCustomAttributesCache, &t1735_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t2594_t2593 (MethodInfo* method, void* obj, void** args);
MethodInfo m8975_MI = 
{
	"GetFileStat", (methodPointerType)&m8975, &t1734_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t2594_t2593, t1734_m8975_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 3, false, false, 2703, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t301_0_0_0;
extern Il2CppType t1193_0_0_0;
extern Il2CppType t1728_0_0_0;
extern Il2CppType t1727_0_0_0;
extern Il2CppType t1735_1_0_2;
static ParameterInfo t1734_m8976_ParameterInfos[] = 
{
	{"filename", 0, 134221205, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 1, 134221206, &EmptyCustomAttributesCache, &t301_0_0_0},
	{"access", 2, 134221207, &EmptyCustomAttributesCache, &t1193_0_0_0},
	{"share", 3, 134221208, &EmptyCustomAttributesCache, &t1728_0_0_0},
	{"options", 4, 134221209, &EmptyCustomAttributesCache, &t1727_0_0_0},
	{"error", 5, 134221210, &EmptyCustomAttributesCache, &t1735_1_0_2},
};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58_t9_t125_t125_t125_t125_t2593 (MethodInfo* method, void* obj, void** args);
MethodInfo m8976_MI = 
{
	"Open", (methodPointerType)&m8976, &t1734_TI, &t58_0_0_0, RuntimeInvoker_t58_t9_t125_t125_t125_t125_t2593, t1734_m8976_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 6, false, false, 2704, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t1735_1_0_2;
static ParameterInfo t1734_m8977_ParameterInfos[] = 
{
	{"handle", 0, 134221211, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"error", 1, 134221212, &EmptyCustomAttributesCache, &t1735_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t58_t2593 (MethodInfo* method, void* obj, void** args);
MethodInfo m8977_MI = 
{
	"Close", (methodPointerType)&m8977, &t1734_TI, &t124_0_0_0, RuntimeInvoker_t124_t58_t2593, t1734_m8977_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2705, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1735_1_0_2;
static ParameterInfo t1734_m8978_ParameterInfos[] = 
{
	{"handle", 0, 134221213, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"dest", 1, 134221214, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"dest_offset", 2, 134221215, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134221216, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"error", 4, 134221217, &EmptyCustomAttributesCache, &t1735_1_0_2},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t58_t9_t125_t125_t2593 (MethodInfo* method, void* obj, void** args);
MethodInfo m8978_MI = 
{
	"Read", (methodPointerType)&m8978, &t1734_TI, &t125_0_0_0, RuntimeInvoker_t125_t58_t9_t125_t125_t2593, t1734_m8978_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 5, false, false, 2706, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t737_0_0_1;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1735_1_0_2;
static ParameterInfo t1734_m8979_ParameterInfos[] = 
{
	{"handle", 0, 134221218, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"src", 1, 134221219, &EmptyCustomAttributesCache, &t737_0_0_1},
	{"src_offset", 2, 134221220, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 3, 134221221, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"error", 4, 134221222, &EmptyCustomAttributesCache, &t1735_1_0_2},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t58_t9_t125_t125_t2593 (MethodInfo* method, void* obj, void** args);
MethodInfo m8979_MI = 
{
	"Write", (methodPointerType)&m8979, &t1734_TI, &t125_0_0_0, RuntimeInvoker_t125_t58_t9_t125_t125_t2593, t1734_m8979_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 5, false, false, 2707, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t1505_0_0_0;
extern Il2CppType t1735_1_0_2;
static ParameterInfo t1734_m8980_ParameterInfos[] = 
{
	{"handle", 0, 134221223, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"offset", 1, 134221224, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"origin", 2, 134221225, &EmptyCustomAttributesCache, &t1505_0_0_0},
	{"error", 3, 134221226, &EmptyCustomAttributesCache, &t1735_1_0_2},
};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303_t58_t303_t125_t2593 (MethodInfo* method, void* obj, void** args);
MethodInfo m8980_MI = 
{
	"Seek", (methodPointerType)&m8980, &t1734_TI, &t303_0_0_0, RuntimeInvoker_t303_t58_t303_t125_t2593, t1734_m8980_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 4, false, false, 2708, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t1735_1_0_2;
static ParameterInfo t1734_m8981_ParameterInfos[] = 
{
	{"handle", 0, 134221227, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"error", 1, 134221228, &EmptyCustomAttributesCache, &t1735_1_0_2},
};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303_t58_t2593 (MethodInfo* method, void* obj, void** args);
MethodInfo m8981_MI = 
{
	"GetLength", (methodPointerType)&m8981, &t1734_TI, &t303_0_0_0, RuntimeInvoker_t303_t58_t2593, t1734_m8981_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 2, false, false, 2709, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t1735_1_0_2;
static ParameterInfo t1734_m8982_ParameterInfos[] = 
{
	{"handle", 0, 134221229, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"length", 1, 134221230, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"error", 2, 134221231, &EmptyCustomAttributesCache, &t1735_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t58_t303_t2593 (MethodInfo* method, void* obj, void** args);
MethodInfo m8982_MI = 
{
	"SetLength", (methodPointerType)&m8982, &t1734_TI, &t124_0_0_0, RuntimeInvoker_t124_t58_t303_t2593, t1734_m8982_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 3, false, false, 2710, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m8983_MI = 
{
	"get_ConsoleOutput", (methodPointerType)&m8983, &t1734_TI, &t58_0_0_0, RuntimeInvoker_t58, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2711, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m8984_MI = 
{
	"get_ConsoleInput", (methodPointerType)&m8984, &t1734_TI, &t58_0_0_0, RuntimeInvoker_t58, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2712, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m8985_MI = 
{
	"get_ConsoleError", (methodPointerType)&m8985, &t1734_TI, &t58_0_0_0, RuntimeInvoker_t58, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2713, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t309 (MethodInfo* method, void* obj, void** args);
MethodInfo m8986_MI = 
{
	"get_VolumeSeparatorChar", (methodPointerType)&m8986, &t1734_TI, &t309_0_0_0, RuntimeInvoker_t309, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2714, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t309 (MethodInfo* method, void* obj, void** args);
MethodInfo m8987_MI = 
{
	"get_DirectorySeparatorChar", (methodPointerType)&m8987, &t1734_TI, &t309_0_0_0, RuntimeInvoker_t309, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2715, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t309 (MethodInfo* method, void* obj, void** args);
MethodInfo m8988_MI = 
{
	"get_AltDirectorySeparatorChar", (methodPointerType)&m8988, &t1734_TI, &t309_0_0_0, RuntimeInvoker_t309, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2716, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t309 (MethodInfo* method, void* obj, void** args);
MethodInfo m8989_MI = 
{
	"get_PathSeparator", (methodPointerType)&m8989, &t1734_TI, &t309_0_0_0, RuntimeInvoker_t309, NULL, &EmptyCustomAttributesCache, 2198, 4096, 255, 0, false, false, 2717, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1734_MIs[] =
{
	&m8964_MI,
	&m8965_MI,
	&m8966_MI,
	&m8967_MI,
	&m8968_MI,
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
	&m8983_MI,
	&m8984_MI,
	&m8985_MI,
	&m8986_MI,
	&m8987_MI,
	&m8988_MI,
	&m8989_MI,
	NULL
};
extern Il2CppType t1721_0_0_54;
FieldInfo t1734_f0_FieldInfo = 
{
	"InvalidFileAttributes", &t1721_0_0_54, &t1734_TI, offsetof(t1734_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_54;
FieldInfo t1734_f1_FieldInfo = 
{
	"InvalidHandle", &t58_0_0_54, &t1734_TI, offsetof(t1734_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1734_FIs[] =
{
	&t1734_f0_FieldInfo,
	&t1734_f1_FieldInfo,
	NULL
};
extern MethodInfo m8983_MI;
static PropertyInfo t1734____ConsoleOutput_PropertyInfo = 
{
	&t1734_TI, "ConsoleOutput", &m8983_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8984_MI;
static PropertyInfo t1734____ConsoleInput_PropertyInfo = 
{
	&t1734_TI, "ConsoleInput", &m8984_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8985_MI;
static PropertyInfo t1734____ConsoleError_PropertyInfo = 
{
	&t1734_TI, "ConsoleError", &m8985_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8986_MI;
static PropertyInfo t1734____VolumeSeparatorChar_PropertyInfo = 
{
	&t1734_TI, "VolumeSeparatorChar", &m8986_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8987_MI;
static PropertyInfo t1734____DirectorySeparatorChar_PropertyInfo = 
{
	&t1734_TI, "DirectorySeparatorChar", &m8987_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8988_MI;
static PropertyInfo t1734____AltDirectorySeparatorChar_PropertyInfo = 
{
	&t1734_TI, "AltDirectorySeparatorChar", &m8988_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8989_MI;
static PropertyInfo t1734____PathSeparator_PropertyInfo = 
{
	&t1734_TI, "PathSeparator", &m8989_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1734_PIs[] =
{
	&t1734____ConsoleOutput_PropertyInfo,
	&t1734____ConsoleInput_PropertyInfo,
	&t1734____ConsoleError_PropertyInfo,
	&t1734____VolumeSeparatorChar_PropertyInfo,
	&t1734____DirectorySeparatorChar_PropertyInfo,
	&t1734____AltDirectorySeparatorChar_PropertyInfo,
	&t1734____PathSeparator_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1734_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1734_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1734_0_0_0;
extern Il2CppType t1734_1_0_0;
struct t1734;
const Il2CppTypeDefinitionMetadata t1734_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1734_VT, t1734_VTIGM, NULL};
TypeInfo t1734_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoIO", "System.IO", t1734_MIs, t1734_PIs, t1734_FIs, NULL, &t1734_TI, NULL, &EmptyCustomAttributesCache, &t1734_0_0_0, &t1734_1_0_0, &t1734_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1734), sizeof (t1734), 0, -1, sizeof(t1734_SFs), 0, -1, 1048832, 0, 0, false, false, false, false, false, false, false, false, true, false, 26, 7, 2, 0, 0, 4, 0, 0};
#include "t1735.h"
// Metadata Definition System.IO.MonoIOError
extern TypeInfo t1735_TI;
#include "t1735MD.h"
static MethodInfo* t1735_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1735_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1735_TI, offsetof(t1735, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f2_FieldInfo = 
{
	"ERROR_SUCCESS", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f3_FieldInfo = 
{
	"ERROR_FILE_NOT_FOUND", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f4_FieldInfo = 
{
	"ERROR_PATH_NOT_FOUND", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f5_FieldInfo = 
{
	"ERROR_TOO_MANY_OPEN_FILES", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f6_FieldInfo = 
{
	"ERROR_ACCESS_DENIED", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f7_FieldInfo = 
{
	"ERROR_INVALID_HANDLE", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f8_FieldInfo = 
{
	"ERROR_INVALID_DRIVE", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f9_FieldInfo = 
{
	"ERROR_NOT_SAME_DEVICE", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f10_FieldInfo = 
{
	"ERROR_NO_MORE_FILES", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f11_FieldInfo = 
{
	"ERROR_WRITE_FAULT", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f12_FieldInfo = 
{
	"ERROR_READ_FAULT", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f13_FieldInfo = 
{
	"ERROR_GEN_FAILURE", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f14_FieldInfo = 
{
	"ERROR_SHARING_VIOLATION", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f15_FieldInfo = 
{
	"ERROR_LOCK_VIOLATION", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f16_FieldInfo = 
{
	"ERROR_HANDLE_DISK_FULL", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f17_FieldInfo = 
{
	"ERROR_FILE_EXISTS", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f18_FieldInfo = 
{
	"ERROR_CANNOT_MAKE", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f19_FieldInfo = 
{
	"ERROR_INVALID_PARAMETER", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f20_FieldInfo = 
{
	"ERROR_BROKEN_PIPE", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f21_FieldInfo = 
{
	"ERROR_INVALID_NAME", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f22_FieldInfo = 
{
	"ERROR_DIR_NOT_EMPTY", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f23_FieldInfo = 
{
	"ERROR_ALREADY_EXISTS", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f24_FieldInfo = 
{
	"ERROR_FILENAME_EXCED_RANGE", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f25_FieldInfo = 
{
	"ERROR_ENCRYPTION_FAILED", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1735_FIs[] =
{
	&t1735_f1_FieldInfo,
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
	NULL
};
static const int32_t t1735_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1735_f2_DefaultValue = 
{
	&t1735_f2_FieldInfo, { (char*)&t1735_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1735_f3_DefaultValue = 
{
	&t1735_f3_FieldInfo, { (char*)&t1735_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1735_f4_DefaultValue = 
{
	&t1735_f4_FieldInfo, { (char*)&t1735_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1735_f5_DefaultValue = 
{
	&t1735_f5_FieldInfo, { (char*)&t1735_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f6_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1735_f6_DefaultValue = 
{
	&t1735_f6_FieldInfo, { (char*)&t1735_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f7_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1735_f7_DefaultValue = 
{
	&t1735_f7_FieldInfo, { (char*)&t1735_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f8_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t1735_f8_DefaultValue = 
{
	&t1735_f8_FieldInfo, { (char*)&t1735_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f9_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry t1735_f9_DefaultValue = 
{
	&t1735_f9_FieldInfo, { (char*)&t1735_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f10_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry t1735_f10_DefaultValue = 
{
	&t1735_f10_FieldInfo, { (char*)&t1735_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f11_DefaultValueData = 29;
static Il2CppFieldDefaultValueEntry t1735_f11_DefaultValue = 
{
	&t1735_f11_FieldInfo, { (char*)&t1735_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f12_DefaultValueData = 30;
static Il2CppFieldDefaultValueEntry t1735_f12_DefaultValue = 
{
	&t1735_f12_FieldInfo, { (char*)&t1735_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f13_DefaultValueData = 31;
static Il2CppFieldDefaultValueEntry t1735_f13_DefaultValue = 
{
	&t1735_f13_FieldInfo, { (char*)&t1735_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f14_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1735_f14_DefaultValue = 
{
	&t1735_f14_FieldInfo, { (char*)&t1735_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f15_DefaultValueData = 33;
static Il2CppFieldDefaultValueEntry t1735_f15_DefaultValue = 
{
	&t1735_f15_FieldInfo, { (char*)&t1735_f15_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f16_DefaultValueData = 39;
static Il2CppFieldDefaultValueEntry t1735_f16_DefaultValue = 
{
	&t1735_f16_FieldInfo, { (char*)&t1735_f16_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f17_DefaultValueData = 80;
static Il2CppFieldDefaultValueEntry t1735_f17_DefaultValue = 
{
	&t1735_f17_FieldInfo, { (char*)&t1735_f17_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f18_DefaultValueData = 82;
static Il2CppFieldDefaultValueEntry t1735_f18_DefaultValue = 
{
	&t1735_f18_FieldInfo, { (char*)&t1735_f18_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f19_DefaultValueData = 87;
static Il2CppFieldDefaultValueEntry t1735_f19_DefaultValue = 
{
	&t1735_f19_FieldInfo, { (char*)&t1735_f19_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f20_DefaultValueData = 109;
static Il2CppFieldDefaultValueEntry t1735_f20_DefaultValue = 
{
	&t1735_f20_FieldInfo, { (char*)&t1735_f20_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f21_DefaultValueData = 123;
static Il2CppFieldDefaultValueEntry t1735_f21_DefaultValue = 
{
	&t1735_f21_FieldInfo, { (char*)&t1735_f21_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f22_DefaultValueData = 145;
static Il2CppFieldDefaultValueEntry t1735_f22_DefaultValue = 
{
	&t1735_f22_FieldInfo, { (char*)&t1735_f22_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f23_DefaultValueData = 183;
static Il2CppFieldDefaultValueEntry t1735_f23_DefaultValue = 
{
	&t1735_f23_FieldInfo, { (char*)&t1735_f23_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f24_DefaultValueData = 206;
static Il2CppFieldDefaultValueEntry t1735_f24_DefaultValue = 
{
	&t1735_f24_FieldInfo, { (char*)&t1735_f24_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1735_f25_DefaultValueData = 6000;
static Il2CppFieldDefaultValueEntry t1735_f25_DefaultValue = 
{
	&t1735_f25_FieldInfo, { (char*)&t1735_f25_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1735_FDVs[] = 
{
	&t1735_f2_DefaultValue,
	&t1735_f3_DefaultValue,
	&t1735_f4_DefaultValue,
	&t1735_f5_DefaultValue,
	&t1735_f6_DefaultValue,
	&t1735_f7_DefaultValue,
	&t1735_f8_DefaultValue,
	&t1735_f9_DefaultValue,
	&t1735_f10_DefaultValue,
	&t1735_f11_DefaultValue,
	&t1735_f12_DefaultValue,
	&t1735_f13_DefaultValue,
	&t1735_f14_DefaultValue,
	&t1735_f15_DefaultValue,
	&t1735_f16_DefaultValue,
	&t1735_f17_DefaultValue,
	&t1735_f18_DefaultValue,
	&t1735_f19_DefaultValue,
	&t1735_f20_DefaultValue,
	&t1735_f21_DefaultValue,
	&t1735_f22_DefaultValue,
	&t1735_f23_DefaultValue,
	&t1735_f24_DefaultValue,
	&t1735_f25_DefaultValue,
	NULL
};
static Il2CppMethodReference t1735_VT[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1735_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
const Il2CppTypeDefinitionMetadata t1735_DM = 
{
	NULL, NULL, NULL, t1735_IOs, &t8_0_0_0, t1735_VT, t1735_VTIGM, NULL};
TypeInfo t1735_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoIOError", "System.IO", t1735_MIs, NULL, t1735_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t1735_0_0_0, &t1735_1_0_0, &t1735_DM, NULL, NULL, NULL, t1735_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1735)+ sizeof (Il2CppObject), sizeof (t1735)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 25, 0, 0, 23, 0, 3};
#include "t1732.h"
// Metadata Definition System.IO.MonoIOStat
extern TypeInfo t1732_TI;
#include "t1732MD.h"
static MethodInfo* t1732_MIs[] =
{
	NULL
};
extern Il2CppType t2_0_0_6;
FieldInfo t1732_f0_FieldInfo = 
{
	"Name", &t2_0_0_6, &t1732_TI, offsetof(t1732, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1721_0_0_6;
FieldInfo t1732_f1_FieldInfo = 
{
	"Attributes", &t1721_0_0_6, &t1732_TI, offsetof(t1732, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_6;
FieldInfo t1732_f2_FieldInfo = 
{
	"Length", &t303_0_0_6, &t1732_TI, offsetof(t1732, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_6;
FieldInfo t1732_f3_FieldInfo = 
{
	"CreationTime", &t303_0_0_6, &t1732_TI, offsetof(t1732, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_6;
FieldInfo t1732_f4_FieldInfo = 
{
	"LastAccessTime", &t303_0_0_6, &t1732_TI, offsetof(t1732, f4) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_6;
FieldInfo t1732_f5_FieldInfo = 
{
	"LastWriteTime", &t303_0_0_6, &t1732_TI, offsetof(t1732, f5) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1732_FIs[] =
{
	&t1732_f0_FieldInfo,
	&t1732_f1_FieldInfo,
	&t1732_f2_FieldInfo,
	&t1732_f3_FieldInfo,
	&t1732_f4_FieldInfo,
	&t1732_f5_FieldInfo,
	NULL
};
static Il2CppMethodReference t1732_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1732_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1732_0_0_0;
const Il2CppTypeDefinitionMetadata t1732_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1732_VT, t1732_VTIGM, NULL};
TypeInfo t1732_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoIOStat", "System.IO", t1732_MIs, NULL, t1732_FIs, NULL, &t1732_TI, NULL, &EmptyCustomAttributesCache, &t1732_0_0_0, &t1732_1_0_0, &t1732_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t1732_marshal, (methodPointerType)t1732_marshal_back, (methodPointerType)t1732_marshal_cleanup, sizeof (t1732)+ sizeof (Il2CppObject), sizeof (t1732)+ sizeof (Il2CppObject), 0, sizeof(t1732_marshaled), 0, 0, -1, 1048840, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 4, 0, 0};
#include "t304.h"
// Metadata Definition System.IO.Path
extern TypeInfo t304_TI;
#include "t304MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m8990_MI = 
{
	".cctor", (methodPointerType)&m8990, &t304_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2718, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t304_m1124_ParameterInfos[] = 
{
	{"path1", 0, 134221232, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"path2", 1, 134221233, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1124_MI = 
{
	"Combine", (methodPointerType)&m1124, &t304_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t9, t304_m1124_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2719, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t304_m8991_ParameterInfos[] = 
{
	{"s", 0, 134221234, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8991_MI = 
{
	"CleanPath", (methodPointerType)&m8991, &t304_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t304_m8991_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 2720, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t304_m8992_ParameterInfos[] = 
{
	{"path", 0, 134221235, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8992_MI = 
{
	"GetDirectoryName", (methodPointerType)&m8992, &t304_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t304_m8992_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2721, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t304_m8993_ParameterInfos[] = 
{
	{"path", 0, 134221236, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8993_MI = 
{
	"GetExtension", (methodPointerType)&m8993, &t304_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t304_m8993_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2722, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t304_m8994_ParameterInfos[] = 
{
	{"path", 0, 134221237, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8994_MI = 
{
	"GetFileName", (methodPointerType)&m8994, &t304_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t304_m8994_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2723, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t304_m8995_ParameterInfos[] = 
{
	{"path", 0, 134221238, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8995_MI = 
{
	"GetFullPath", (methodPointerType)&m8995, &t304_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t304_m8995_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2724, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t304_m8996_ParameterInfos[] = 
{
	{"path", 0, 134221239, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8996_MI = 
{
	"WindowsDriveAdjustment", (methodPointerType)&m8996, &t304_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t304_m8996_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 2725, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t304_m8997_ParameterInfos[] = 
{
	{"path", 0, 134221240, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8997_MI = 
{
	"InsecureGetFullPath", (methodPointerType)&m8997, &t304_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t304_m8997_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 2726, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t304_m8998_ParameterInfos[] = 
{
	{"c", 0, 134221241, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m8998_MI = 
{
	"IsDsc", (methodPointerType)&m8998, &t304_TI, &t124_0_0_0, RuntimeInvoker_t124_t341, t304_m8998_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2727, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t304_m8999_ParameterInfos[] = 
{
	{"path", 0, 134221242, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m8999_MI = 
{
	"GetPathRoot", (methodPointerType)&m8999, &t304_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t304_m8999_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2728, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t304_m9000_ParameterInfos[] = 
{
	{"path", 0, 134221243, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9000_MI = 
{
	"IsPathRooted", (methodPointerType)&m9000, &t304_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t304_m9000_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2729, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9001_MI = 
{
	"GetInvalidPathChars", (methodPointerType)&m9001, &t304_TI, &t318_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 2730, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t304_m9002_ParameterInfos[] = 
{
	{"path", 0, 134221244, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9002_MI = 
{
	"findExtension", (methodPointerType)&m9002, &t304_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t304_m9002_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2731, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t304_m9003_ParameterInfos[] = 
{
	{"path", 0, 134221245, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9003_MI = 
{
	"GetServerAndShare", (methodPointerType)&m9003, &t304_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t304_m9003_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2732, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t304_m9004_ParameterInfos[] = 
{
	{"root", 0, 134221246, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"path", 1, 134221247, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9004_MI = 
{
	"SameRoot", (methodPointerType)&m9004, &t304_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t304_m9004_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 2733, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t304_m9005_ParameterInfos[] = 
{
	{"path", 0, 134221248, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9005_MI = 
{
	"CanonicalizePath", (methodPointerType)&m9005, &t304_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t304_m9005_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 2734, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t304_MIs[] =
{
	&m8990_MI,
	&m1124_MI,
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
	&m9004_MI,
	&m9005_MI,
	NULL
};
extern Il2CppType t318_0_0_54;
extern CustomAttributesCache t304__CustomAttributeCache_InvalidPathChars;
FieldInfo t304_f0_FieldInfo = 
{
	"InvalidPathChars", &t318_0_0_54, &t304_TI, offsetof(t304_SFs, f0), &t304__CustomAttributeCache_InvalidPathChars};
extern Il2CppType t309_0_0_54;
FieldInfo t304_f1_FieldInfo = 
{
	"AltDirectorySeparatorChar", &t309_0_0_54, &t304_TI, offsetof(t304_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t309_0_0_54;
FieldInfo t304_f2_FieldInfo = 
{
	"DirectorySeparatorChar", &t309_0_0_54, &t304_TI, offsetof(t304_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t309_0_0_54;
FieldInfo t304_f3_FieldInfo = 
{
	"PathSeparator", &t309_0_0_54, &t304_TI, offsetof(t304_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_51;
FieldInfo t304_f4_FieldInfo = 
{
	"DirectorySeparatorStr", &t2_0_0_51, &t304_TI, offsetof(t304_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t309_0_0_54;
FieldInfo t304_f5_FieldInfo = 
{
	"VolumeSeparatorChar", &t309_0_0_54, &t304_TI, offsetof(t304_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t318_0_0_51;
FieldInfo t304_f6_FieldInfo = 
{
	"PathSeparatorChars", &t318_0_0_51, &t304_TI, offsetof(t304_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_49;
FieldInfo t304_f7_FieldInfo = 
{
	"dirEqualsVolume", &t124_0_0_49, &t304_TI, offsetof(t304_SFs, f7), &EmptyCustomAttributesCache};
static FieldInfo* t304_FIs[] =
{
	&t304_f0_FieldInfo,
	&t304_f1_FieldInfo,
	&t304_f2_FieldInfo,
	&t304_f3_FieldInfo,
	&t304_f4_FieldInfo,
	&t304_f5_FieldInfo,
	&t304_f6_FieldInfo,
	&t304_f7_FieldInfo,
	NULL
};
static Il2CppMethodReference t304_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t304_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t304_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t304_CustomAttributesCacheGenerator_InvalidPathChars(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t625 * tmp;
		tmp = (t625 *)il2cpp_codegen_object_new (&t625_TI);
		m3034(tmp, il2cpp_codegen_string_new_wrapper("see GetInvalidPathChars and GetInvalidFileNameChars methods."), &m3034_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t304__CustomAttributeCache = {
1,
NULL,
&t304_CustomAttributesCacheGenerator
};
CustomAttributesCache t304__CustomAttributeCache_InvalidPathChars = {
1,
NULL,
&t304_CustomAttributesCacheGenerator_InvalidPathChars
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t304_0_0_0;
extern Il2CppType t304_1_0_0;
struct t304;
extern CustomAttributesCache t304__CustomAttributeCache;
extern CustomAttributesCache t304__CustomAttributeCache_InvalidPathChars;
const Il2CppTypeDefinitionMetadata t304_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t304_VT, t304_VTIGM, NULL};
TypeInfo t304_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Path", "System.IO", t304_MIs, NULL, t304_FIs, NULL, &t304_TI, NULL, &t304__CustomAttributeCache, &t304_0_0_0, &t304_1_0_0, &t304_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t304), sizeof (t304), 0, -1, sizeof(t304_SFs), 0, -1, 385, 0, 0, false, false, false, false, false, false, false, false, true, false, 17, 0, 8, 0, 0, 4, 0, 0};
#include "t1736.h"
// Metadata Definition System.IO.PathTooLongException
extern TypeInfo t1736_TI;
#include "t1736MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9006_MI = 
{
	".ctor", (methodPointerType)&m9006, &t1736_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2735, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1736_m9007_ParameterInfos[] = 
{
	{"message", 0, 134221249, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9007_MI = 
{
	".ctor", (methodPointerType)&m9007, &t1736_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1736_m9007_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2736, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1736_m9008_ParameterInfos[] = 
{
	{"info", 0, 134221250, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134221251, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m9008_MI = 
{
	".ctor", (methodPointerType)&m9008, &t1736_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1736_m9008_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2737, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1736_MIs[] =
{
	&m9006_MI,
	&m9007_MI,
	&m9008_MI,
	NULL
};
static Il2CppMethodReference t1736_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m4538_MI,
	&m4539_MI,
	&m4285_MI,
	&m1131_MI,
	&m4540_MI,
	&m4483_MI,
	&m4539_MI,
	&m4484_MI,
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
	{ &t630_0_0_0, 4},
	{ &t954_0_0_0, 5},
};
void t1736_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1736__CustomAttributeCache = {
1,
NULL,
&t1736_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1736_0_0_0;
extern Il2CppType t1736_1_0_0;
struct t1736;
extern CustomAttributesCache t1736__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1736_DM = 
{
	NULL, NULL, NULL, t1736_IOs, &t1555_0_0_0, t1736_VT, t1736_VTIGM, NULL};
TypeInfo t1736_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PathTooLongException", "System.IO", t1736_MIs, NULL, NULL, NULL, &t1736_TI, NULL, &t1736__CustomAttributeCache, &t1736_0_0_0, &t1736_1_0_0, &t1736_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1736), sizeof (t1736), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1737.h"
// Metadata Definition System.IO.SearchPattern
extern TypeInfo t1737_TI;
#include "t1737MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9009_MI = 
{
	".cctor", (methodPointerType)&m9009, &t1737_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2738, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1737_MIs[] =
{
	&m9009_MI,
	NULL
};
extern Il2CppType t318_0_0_51;
FieldInfo t1737_f0_FieldInfo = 
{
	"WildcardChars", &t318_0_0_51, &t1737_TI, offsetof(t1737_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t318_0_0_51;
FieldInfo t1737_f1_FieldInfo = 
{
	"InvalidChars", &t318_0_0_51, &t1737_TI, offsetof(t1737_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1737_FIs[] =
{
	&t1737_f0_FieldInfo,
	&t1737_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1737_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1737_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1737_0_0_0;
extern Il2CppType t1737_1_0_0;
struct t1737;
const Il2CppTypeDefinitionMetadata t1737_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1737_VT, t1737_VTIGM, NULL};
TypeInfo t1737_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SearchPattern", "System.IO", t1737_MIs, NULL, t1737_FIs, NULL, &t1737_TI, NULL, &EmptyCustomAttributesCache, &t1737_0_0_0, &t1737_1_0_0, &t1737_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1737), sizeof (t1737), 0, -1, sizeof(t1737_SFs), 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, true, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t1505.h"
// Metadata Definition System.IO.SeekOrigin
extern TypeInfo t1505_TI;
#include "t1505MD.h"
static MethodInfo* t1505_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1505_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1505_TI, offsetof(t1505, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1505_0_0_32854;
FieldInfo t1505_f2_FieldInfo = 
{
	"Begin", &t1505_0_0_32854, &t1505_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1505_0_0_32854;
FieldInfo t1505_f3_FieldInfo = 
{
	"Current", &t1505_0_0_32854, &t1505_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1505_0_0_32854;
FieldInfo t1505_f4_FieldInfo = 
{
	"End", &t1505_0_0_32854, &t1505_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1505_FIs[] =
{
	&t1505_f1_FieldInfo,
	&t1505_f2_FieldInfo,
	&t1505_f3_FieldInfo,
	&t1505_f4_FieldInfo,
	NULL
};
static const int32_t t1505_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1505_f2_DefaultValue = 
{
	&t1505_f2_FieldInfo, { (char*)&t1505_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1505_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1505_f3_DefaultValue = 
{
	&t1505_f3_FieldInfo, { (char*)&t1505_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1505_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1505_f4_DefaultValue = 
{
	&t1505_f4_FieldInfo, { (char*)&t1505_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1505_FDVs[] = 
{
	&t1505_f2_DefaultValue,
	&t1505_f3_DefaultValue,
	&t1505_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t1505_VT[] =
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
static bool t1505_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1505_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1505_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1505__CustomAttributeCache = {
1,
NULL,
&t1505_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1505_1_0_0;
extern CustomAttributesCache t1505__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1505_DM = 
{
	NULL, NULL, NULL, t1505_IOs, &t8_0_0_0, t1505_VT, t1505_VTIGM, NULL};
TypeInfo t1505_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SeekOrigin", "System.IO", t1505_MIs, NULL, t1505_FIs, NULL, &t125_TI, NULL, &t1505__CustomAttributeCache, &t1505_0_0_0, &t1505_1_0_0, &t1505_DM, NULL, NULL, NULL, t1505_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1505)+ sizeof (Il2CppObject), sizeof (t1505)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t302.h"
// Metadata Definition System.IO.Stream
extern TypeInfo t302_TI;
#include "t302MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7052_MI = 
{
	".ctor", (methodPointerType)&m7052, &t302_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2739, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9010_MI = 
{
	".cctor", (methodPointerType)&m9010, &t302_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2740, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m7049_MI = 
{
	"get_CanRead", NULL, &t302_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 5, 0, false, false, 2741, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m7032_MI = 
{
	"get_CanSeek", NULL, &t302_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 6, 0, false, false, 2742, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m7050_MI = 
{
	"get_CanWrite", NULL, &t302_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 7, 0, false, false, 2743, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m7038_MI = 
{
	"get_Length", NULL, &t302_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 3526, 0, 8, 0, false, false, 2744, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m12049_MI = 
{
	"get_Position", NULL, &t302_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 3526, 0, 9, 0, false, false, 2745, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t302_m12814_ParameterInfos[] = 
{
	{"value", 0, 134221252, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m12814_MI = 
{
	"set_Position", NULL, &t302_TI, &t122_0_0_0, RuntimeInvoker_t122_t303, t302_m12814_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 10, 1, false, false, 2746, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7098_MI = 
{
	"Dispose", (methodPointerType)&m7098, &t302_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 486, 0, 4, 0, false, false, 2747, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t302_m7069_ParameterInfos[] = 
{
	{"disposing", 0, 134221253, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m7069_MI = 
{
	"Dispose", (methodPointerType)&m7069, &t302_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t302_m7069_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 11, 1, false, false, 2748, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m1129_MI = 
{
	"Close", (methodPointerType)&m1129, &t302_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 12, 0, false, false, 2749, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7068_MI = 
{
	"Flush", NULL, &t302_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 1478, 0, 13, 0, false, false, 2750, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t302_m7039_ParameterInfos[] = 
{
	{"buffer", 0, 134221254, &EmptyCustomAttributesCache, &t737_0_0_3},
	{"offset", 1, 134221255, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221256, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7039_MI = 
{
	"Read", NULL, &t302_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t302_m7039_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 14, 3, false, false, 2751, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7037_MI = 
{
	"ReadByte", (methodPointerType)&m7037, &t302_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 15, 0, false, false, 2752, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t1505_0_0_0;
static ParameterInfo t302_m12815_ParameterInfos[] = 
{
	{"offset", 0, 134221257, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"origin", 1, 134221258, &EmptyCustomAttributesCache, &t1505_0_0_0},
};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303_t303_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12815_MI = 
{
	"Seek", NULL, &t302_TI, &t303_0_0_0, RuntimeInvoker_t303_t303_t125, t302_m12815_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 16, 2, false, false, 2753, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t302_m7033_ParameterInfos[] = 
{
	{"value", 0, 134221259, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m7033_MI = 
{
	"SetLength", NULL, &t302_TI, &t122_0_0_0, RuntimeInvoker_t122_t303, t302_m7033_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 17, 1, false, false, 2754, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t302_m7023_ParameterInfos[] = 
{
	{"buffer", 0, 134221260, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134221261, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221262, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m7023_MI = 
{
	"Write", NULL, &t302_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t302_m7023_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 18, 3, false, false, 2755, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t582_0_0_0;
static ParameterInfo t302_m7014_ParameterInfos[] = 
{
	{"value", 0, 134221263, &EmptyCustomAttributesCache, &t582_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m7014_MI = 
{
	"WriteByte", (methodPointerType)&m7014, &t302_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t302_m7014_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 19, 1, false, false, 2756, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t477_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t302_m7029_ParameterInfos[] = 
{
	{"buffer", 0, 134221264, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134221265, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221266, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"callback", 3, 134221267, &EmptyCustomAttributesCache, &t477_0_0_0},
	{"state", 4, 134221268, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t476_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7029_MI = 
{
	"BeginRead", (methodPointerType)&m7029, &t302_TI, &t476_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t302_m7029_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 20, 5, false, false, 2757, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t477_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t302_m7040_ParameterInfos[] = 
{
	{"buffer", 0, 134221269, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134221270, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221271, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"callback", 3, 134221272, &EmptyCustomAttributesCache, &t477_0_0_0},
	{"state", 4, 134221273, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t476_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7040_MI = 
{
	"BeginWrite", (methodPointerType)&m7040, &t302_TI, &t476_0_0_0, RuntimeInvoker_t9_t9_t125_t125_t9_t9, t302_m7040_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 21, 5, false, false, 2758, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t476_0_0_0;
static ParameterInfo t302_m7031_ParameterInfos[] = 
{
	{"asyncResult", 0, 134221274, &EmptyCustomAttributesCache, &t476_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7031_MI = 
{
	"EndRead", (methodPointerType)&m7031, &t302_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t302_m7031_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 22, 1, false, false, 2759, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t476_0_0_0;
static ParameterInfo t302_m7041_ParameterInfos[] = 
{
	{"asyncResult", 0, 134221275, &EmptyCustomAttributesCache, &t476_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7041_MI = 
{
	"EndWrite", (methodPointerType)&m7041, &t302_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t302_m7041_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 23, 1, false, false, 2760, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t302_MIs[] =
{
	&m7052_MI,
	&m9010_MI,
	&m7049_MI,
	&m7032_MI,
	&m7050_MI,
	&m7038_MI,
	&m12049_MI,
	&m12814_MI,
	&m7098_MI,
	&m7069_MI,
	&m1129_MI,
	&m7068_MI,
	&m7039_MI,
	&m7037_MI,
	&m12815_MI,
	&m7033_MI,
	&m7023_MI,
	&m7014_MI,
	&m7029_MI,
	&m7040_MI,
	&m7031_MI,
	&m7041_MI,
	NULL
};
extern Il2CppType t302_0_0_54;
FieldInfo t302_f0_FieldInfo = 
{
	"Null", &t302_0_0_54, &t302_TI, offsetof(t302_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t302_FIs[] =
{
	&t302_f0_FieldInfo,
	NULL
};
extern MethodInfo m7049_MI;
static PropertyInfo t302____CanRead_PropertyInfo = 
{
	&t302_TI, "CanRead", &m7049_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7032_MI;
static PropertyInfo t302____CanSeek_PropertyInfo = 
{
	&t302_TI, "CanSeek", &m7032_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7050_MI;
static PropertyInfo t302____CanWrite_PropertyInfo = 
{
	&t302_TI, "CanWrite", &m7050_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7038_MI;
static PropertyInfo t302____Length_PropertyInfo = 
{
	&t302_TI, "Length", &m7038_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12049_MI;
extern MethodInfo m12814_MI;
static PropertyInfo t302____Position_PropertyInfo = 
{
	&t302_TI, "Position", &m12049_MI, &m12814_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t302_PIs[] =
{
	&t302____CanRead_PropertyInfo,
	&t302____CanSeek_PropertyInfo,
	&t302____CanWrite_PropertyInfo,
	&t302____Length_PropertyInfo,
	&t302____Position_PropertyInfo,
	NULL
};
extern MethodInfo m7069_MI;
extern MethodInfo m7037_MI;
extern MethodInfo m7014_MI;
static Il2CppMethodReference t302_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7098_MI,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&m7069_MI,
	&m1129_MI,
	NULL,
	NULL,
	&m7037_MI,
	NULL,
	NULL,
	NULL,
	&m7014_MI,
	&m7029_MI,
	&m7040_MI,
	&m7031_MI,
	&m7041_MI,
};
static bool t302_VTIGM[] =
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
static const Il2CppType* t302_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t302_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t302_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t302__CustomAttributeCache = {
1,
NULL,
&t302_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t302_1_0_0;
struct t302;
extern CustomAttributesCache t302__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t302_DM = 
{
	NULL, NULL, t302_ITIs, t302_IOs, &t9_0_0_0, t302_VT, t302_VTIGM, NULL};
TypeInfo t302_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Stream", "System.IO", t302_MIs, t302_PIs, t302_FIs, NULL, &t302_TI, NULL, &t302__CustomAttributeCache, &t302_0_0_0, &t302_1_0_0, &t302_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t302), sizeof (t302), 0, -1, sizeof(t302_SFs), 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, true, false, 22, 5, 1, 0, 0, 24, 1, 1};
#include "t1738.h"
// Metadata Definition System.IO.NullStream
extern TypeInfo t1738_TI;
#include "t1738MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9011_MI = 
{
	".ctor", (methodPointerType)&m9011, &t1738_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2761, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9012_MI = 
{
	"get_CanRead", (methodPointerType)&m9012, &t1738_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 5, 0, false, false, 2762, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9013_MI = 
{
	"get_CanSeek", (methodPointerType)&m9013, &t1738_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2763, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9014_MI = 
{
	"get_CanWrite", (methodPointerType)&m9014, &t1738_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 2764, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m9015_MI = 
{
	"get_Length", (methodPointerType)&m9015, &t1738_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2765, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m9016_MI = 
{
	"get_Position", (methodPointerType)&m9016, &t1738_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2766, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t1738_m9017_ParameterInfos[] = 
{
	{"value", 0, 134221276, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m9017_MI = 
{
	"set_Position", (methodPointerType)&m9017, &t1738_TI, &t122_0_0_0, RuntimeInvoker_t122_t303, t1738_m9017_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 10, 1, false, false, 2767, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9018_MI = 
{
	"Flush", (methodPointerType)&m9018, &t1738_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 2768, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1738_m9019_ParameterInfos[] = 
{
	{"buffer", 0, 134221277, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134221278, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221279, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9019_MI = 
{
	"Read", (methodPointerType)&m9019, &t1738_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1738_m9019_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 14, 3, false, false, 2769, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9020_MI = 
{
	"ReadByte", (methodPointerType)&m9020, &t1738_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 15, 0, false, false, 2770, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t1505_0_0_0;
static ParameterInfo t1738_m9021_ParameterInfos[] = 
{
	{"offset", 0, 134221280, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"origin", 1, 134221281, &EmptyCustomAttributesCache, &t1505_0_0_0},
};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303_t303_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9021_MI = 
{
	"Seek", (methodPointerType)&m9021, &t1738_TI, &t303_0_0_0, RuntimeInvoker_t303_t303_t125, t1738_m9021_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 2, false, false, 2771, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t1738_m9022_ParameterInfos[] = 
{
	{"value", 0, 134221282, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m9022_MI = 
{
	"SetLength", (methodPointerType)&m9022, &t1738_TI, &t122_0_0_0, RuntimeInvoker_t122_t303, t1738_m9022_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 2772, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1738_m9023_ParameterInfos[] = 
{
	{"buffer", 0, 134221283, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"offset", 1, 134221284, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221285, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9023_MI = 
{
	"Write", (methodPointerType)&m9023, &t1738_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1738_m9023_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 18, 3, false, false, 2773, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t582_0_0_0;
static ParameterInfo t1738_m9024_ParameterInfos[] = 
{
	{"value", 0, 134221286, &EmptyCustomAttributesCache, &t582_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9024_MI = 
{
	"WriteByte", (methodPointerType)&m9024, &t1738_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1738_m9024_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 19, 1, false, false, 2774, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1738_MIs[] =
{
	&m9011_MI,
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
	&m9022_MI,
	&m9023_MI,
	&m9024_MI,
	NULL
};
extern MethodInfo m9012_MI;
static PropertyInfo t1738____CanRead_PropertyInfo = 
{
	&t1738_TI, "CanRead", &m9012_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9013_MI;
static PropertyInfo t1738____CanSeek_PropertyInfo = 
{
	&t1738_TI, "CanSeek", &m9013_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9014_MI;
static PropertyInfo t1738____CanWrite_PropertyInfo = 
{
	&t1738_TI, "CanWrite", &m9014_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9015_MI;
static PropertyInfo t1738____Length_PropertyInfo = 
{
	&t1738_TI, "Length", &m9015_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9016_MI;
extern MethodInfo m9017_MI;
static PropertyInfo t1738____Position_PropertyInfo = 
{
	&t1738_TI, "Position", &m9016_MI, &m9017_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1738_PIs[] =
{
	&t1738____CanRead_PropertyInfo,
	&t1738____CanSeek_PropertyInfo,
	&t1738____CanWrite_PropertyInfo,
	&t1738____Length_PropertyInfo,
	&t1738____Position_PropertyInfo,
	NULL
};
extern MethodInfo m9018_MI;
extern MethodInfo m9019_MI;
extern MethodInfo m9020_MI;
extern MethodInfo m9021_MI;
extern MethodInfo m9022_MI;
extern MethodInfo m9023_MI;
extern MethodInfo m9024_MI;
static Il2CppMethodReference t1738_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7098_MI,
	&m9012_MI,
	&m9013_MI,
	&m9014_MI,
	&m9015_MI,
	&m9016_MI,
	&m9017_MI,
	&m7069_MI,
	&m1129_MI,
	&m9018_MI,
	&m9019_MI,
	&m9020_MI,
	&m9021_MI,
	&m9022_MI,
	&m9023_MI,
	&m9024_MI,
	&m7029_MI,
	&m7040_MI,
	&m7031_MI,
	&m7041_MI,
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
	false,
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
struct t1738;
const Il2CppTypeDefinitionMetadata t1738_DM = 
{
	NULL, NULL, NULL, t1738_IOs, &t302_0_0_0, t1738_VT, t1738_VTIGM, NULL};
TypeInfo t1738_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NullStream", "System.IO", t1738_MIs, t1738_PIs, NULL, NULL, &t1738_TI, NULL, &EmptyCustomAttributesCache, &t1738_0_0_0, &t1738_1_0_0, &t1738_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1738), sizeof (t1738), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 14, 5, 0, 0, 0, 24, 0, 1};
#include "t1739.h"
// Metadata Definition System.IO.StreamAsyncResult
extern TypeInfo t1739_TI;
#include "t1739MD.h"
extern Il2CppType t9_0_0_0;
static ParameterInfo t1739_m9025_ParameterInfos[] = 
{
	{"state", 0, 134221287, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9025_MI = 
{
	".ctor", (methodPointerType)&m9025, &t1739_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1739_m9025_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2775, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
static ParameterInfo t1739_m9026_ParameterInfos[] = 
{
	{"e", 0, 134221288, &EmptyCustomAttributesCache, &t138_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9026_MI = 
{
	"SetComplete", (methodPointerType)&m9026, &t1739_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1739_m9026_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2776, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1739_m9027_ParameterInfos[] = 
{
	{"e", 0, 134221289, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"nbytes", 1, 134221290, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9027_MI = 
{
	"SetComplete", (methodPointerType)&m9027, &t1739_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1739_m9027_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 2777, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9028_MI = 
{
	"get_AsyncState", (methodPointerType)&m9028, &t1739_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 2778, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1492_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9029_MI = 
{
	"get_AsyncWaitHandle", (methodPointerType)&m9029, &t1739_TI, &t1492_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 2779, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9030_MI = 
{
	"get_IsCompleted", (methodPointerType)&m9030, &t1739_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 2780, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9031_MI = 
{
	"get_Exception", (methodPointerType)&m9031, &t1739_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2781, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9032_MI = 
{
	"get_NBytes", (methodPointerType)&m9032, &t1739_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2782, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9033_MI = 
{
	"get_Done", (methodPointerType)&m9033, &t1739_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2783, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1739_m9034_ParameterInfos[] = 
{
	{"value", 0, 134221291, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9034_MI = 
{
	"set_Done", (methodPointerType)&m9034, &t1739_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1739_m9034_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 2784, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1739_MIs[] =
{
	&m9025_MI,
	&m9026_MI,
	&m9027_MI,
	&m9028_MI,
	&m9029_MI,
	&m9030_MI,
	&m9031_MI,
	&m9032_MI,
	&m9033_MI,
	&m9034_MI,
	NULL
};
extern Il2CppType t9_0_0_1;
FieldInfo t1739_f0_FieldInfo = 
{
	"state", &t9_0_0_1, &t1739_TI, offsetof(t1739, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1739_f1_FieldInfo = 
{
	"completed", &t124_0_0_1, &t1739_TI, offsetof(t1739, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1739_f2_FieldInfo = 
{
	"done", &t124_0_0_1, &t1739_TI, offsetof(t1739, f2), &EmptyCustomAttributesCache};
extern Il2CppType t138_0_0_1;
FieldInfo t1739_f3_FieldInfo = 
{
	"exc", &t138_0_0_1, &t1739_TI, offsetof(t1739, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1739_f4_FieldInfo = 
{
	"nbytes", &t125_0_0_1, &t1739_TI, offsetof(t1739, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1491_0_0_1;
FieldInfo t1739_f5_FieldInfo = 
{
	"wh", &t1491_0_0_1, &t1739_TI, offsetof(t1739, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1739_FIs[] =
{
	&t1739_f0_FieldInfo,
	&t1739_f1_FieldInfo,
	&t1739_f2_FieldInfo,
	&t1739_f3_FieldInfo,
	&t1739_f4_FieldInfo,
	&t1739_f5_FieldInfo,
	NULL
};
extern MethodInfo m9028_MI;
static PropertyInfo t1739____AsyncState_PropertyInfo = 
{
	&t1739_TI, "AsyncState", &m9028_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9029_MI;
static PropertyInfo t1739____AsyncWaitHandle_PropertyInfo = 
{
	&t1739_TI, "AsyncWaitHandle", &m9029_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9030_MI;
static PropertyInfo t1739____IsCompleted_PropertyInfo = 
{
	&t1739_TI, "IsCompleted", &m9030_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9031_MI;
static PropertyInfo t1739____Exception_PropertyInfo = 
{
	&t1739_TI, "Exception", &m9031_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9032_MI;
static PropertyInfo t1739____NBytes_PropertyInfo = 
{
	&t1739_TI, "NBytes", &m9032_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9033_MI;
extern MethodInfo m9034_MI;
static PropertyInfo t1739____Done_PropertyInfo = 
{
	&t1739_TI, "Done", &m9033_MI, &m9034_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1739_PIs[] =
{
	&t1739____AsyncState_PropertyInfo,
	&t1739____AsyncWaitHandle_PropertyInfo,
	&t1739____IsCompleted_PropertyInfo,
	&t1739____Exception_PropertyInfo,
	&t1739____NBytes_PropertyInfo,
	&t1739____Done_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1739_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9028_MI,
	&m9029_MI,
	&m9030_MI,
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
};
static const Il2CppType* t1739_ITIs[] = 
{
	&t476_0_0_0,
};
static Il2CppInterfaceOffsetPair t1739_IOs[] = 
{
	{ &t476_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1739_0_0_0;
extern Il2CppType t1739_1_0_0;
struct t1739;
const Il2CppTypeDefinitionMetadata t1739_DM = 
{
	NULL, NULL, t1739_ITIs, t1739_IOs, &t9_0_0_0, t1739_VT, t1739_VTIGM, NULL};
TypeInfo t1739_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamAsyncResult", "System.IO", t1739_MIs, t1739_PIs, t1739_FIs, NULL, &t1739_TI, NULL, &EmptyCustomAttributesCache, &t1739_0_0_0, &t1739_1_0_0, &t1739_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1739), sizeof (t1739), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 6, 6, 0, 0, 7, 1, 1};
#include "t1740.h"
// Metadata Definition System.IO.StreamReader/NullStreamReader
extern TypeInfo t1740_TI;
#include "t1740MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9035_MI = 
{
	".ctor", (methodPointerType)&m9035, &t1740_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2801, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9036_MI = 
{
	"Peek", (methodPointerType)&m9036, &t1740_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 2802, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9037_MI = 
{
	"Read", (methodPointerType)&m9037, &t1740_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2803, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1740_m9038_ParameterInfos[] = 
{
	{"buffer", 0, 134221312, &EmptyCustomAttributesCache, &t318_0_0_3},
	{"index", 1, 134221313, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221314, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9038_MI = 
{
	"Read", (methodPointerType)&m9038, &t1740_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1740_m9038_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 3, false, false, 2804, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9039_MI = 
{
	"ReadLine", (methodPointerType)&m9039, &t1740_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2805, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9040_MI = 
{
	"ReadToEnd", (methodPointerType)&m9040, &t1740_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 10, 0, false, false, 2806, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1740_MIs[] =
{
	&m9035_MI,
	&m9036_MI,
	&m9037_MI,
	&m9038_MI,
	&m9039_MI,
	&m9040_MI,
	NULL
};
extern MethodInfo m9084_MI;
extern MethodInfo m9048_MI;
extern MethodInfo m9036_MI;
extern MethodInfo m9037_MI;
extern MethodInfo m9038_MI;
extern MethodInfo m9039_MI;
extern MethodInfo m9040_MI;
static Il2CppMethodReference t1740_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9084_MI,
	&m9048_MI,
	&m9036_MI,
	&m9037_MI,
	&m9038_MI,
	&m9039_MI,
	&m9040_MI,
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
extern Il2CppType t1725_0_0_0;
extern TypeInfo t1725_TI;
struct t1740;
const Il2CppTypeDefinitionMetadata t1740_DM = 
{
	&t1725_0_0_0, NULL, NULL, t1740_IOs, &t1725_0_0_0, t1740_VT, t1740_VTIGM, NULL};
TypeInfo t1740_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NullStreamReader", "", t1740_MIs, NULL, NULL, NULL, &t1740_TI, NULL, &EmptyCustomAttributesCache, &t1740_0_0_0, &t1740_1_0_0, &t1740_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1740), sizeof (t1740), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 0, 0, 0, 0, 11, 0, 1};
#include "t1725.h"
// Metadata Definition System.IO.StreamReader
#include "t1725MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9041_MI = 
{
	".ctor", (methodPointerType)&m9041, &t1725_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 2785, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t302_0_0_0;
extern Il2CppType t736_0_0_0;
static ParameterInfo t1725_m9042_ParameterInfos[] = 
{
	{"stream", 0, 134221292, &EmptyCustomAttributesCache, &t302_0_0_0},
	{"encoding", 1, 134221293, &EmptyCustomAttributesCache, &t736_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9042_MI = 
{
	".ctor", (methodPointerType)&m9042, &t1725_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1725_m9042_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2786, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t302_0_0_0;
extern Il2CppType t736_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1725_m9043_ParameterInfos[] = 
{
	{"stream", 0, 134221294, &EmptyCustomAttributesCache, &t302_0_0_0},
	{"encoding", 1, 134221295, &EmptyCustomAttributesCache, &t736_0_0_0},
	{"detectEncodingFromByteOrderMarks", 2, 134221296, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"bufferSize", 3, 134221297, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9043_MI = 
{
	".ctor", (methodPointerType)&m9043, &t1725_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186_t125, t1725_m9043_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 2787, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1725_m9044_ParameterInfos[] = 
{
	{"path", 0, 134221298, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9044_MI = 
{
	".ctor", (methodPointerType)&m9044, &t1725_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1725_m9044_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2788, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t736_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1725_m9045_ParameterInfos[] = 
{
	{"path", 0, 134221299, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"encoding", 1, 134221300, &EmptyCustomAttributesCache, &t736_0_0_0},
	{"detectEncodingFromByteOrderMarks", 2, 134221301, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"bufferSize", 3, 134221302, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9045_MI = 
{
	".ctor", (methodPointerType)&m9045, &t1725_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186_t125, t1725_m9045_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 2789, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9046_MI = 
{
	".cctor", (methodPointerType)&m9046, &t1725_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2790, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t302_0_0_0;
extern Il2CppType t736_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1725_m9047_ParameterInfos[] = 
{
	{"stream", 0, 134221303, &EmptyCustomAttributesCache, &t302_0_0_0},
	{"encoding", 1, 134221304, &EmptyCustomAttributesCache, &t736_0_0_0},
	{"detectEncodingFromByteOrderMarks", 2, 134221305, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"bufferSize", 3, 134221306, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9047_MI = 
{
	"Initialize", (methodPointerType)&m9047, &t1725_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186_t125, t1725_m9047_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 4, false, false, 2791, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1725_m9048_ParameterInfos[] = 
{
	{"disposing", 0, 134221307, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9048_MI = 
{
	"Dispose", (methodPointerType)&m9048, &t1725_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1725_m9048_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 5, 1, false, false, 2792, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1725_m9049_ParameterInfos[] = 
{
	{"count", 0, 134221308, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9049_MI = 
{
	"DoChecks", (methodPointerType)&m9049, &t1725_TI, &t125_0_0_0, RuntimeInvoker_t125_t125, t1725_m9049_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2793, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9050_MI = 
{
	"ReadBuffer", (methodPointerType)&m9050, &t1725_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2794, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9051_MI = 
{
	"Peek", (methodPointerType)&m9051, &t1725_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 2795, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9052_MI = 
{
	"Read", (methodPointerType)&m9052, &t1725_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2796, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1725_m9053_ParameterInfos[] = 
{
	{"buffer", 0, 134221309, &EmptyCustomAttributesCache, &t318_0_0_3},
	{"index", 1, 134221310, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221311, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9053_MI = 
{
	"Read", (methodPointerType)&m9053, &t1725_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1725_m9053_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 3, false, false, 2797, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9054_MI = 
{
	"FindNextEOL", (methodPointerType)&m9054, &t1725_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2798, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9055_MI = 
{
	"ReadLine", (methodPointerType)&m9055, &t1725_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2799, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9056_MI = 
{
	"ReadToEnd", (methodPointerType)&m9056, &t1725_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 10, 0, false, false, 2800, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1725_MIs[] =
{
	&m9041_MI,
	&m9042_MI,
	&m9043_MI,
	&m9044_MI,
	&m9045_MI,
	&m9046_MI,
	&m9047_MI,
	&m9048_MI,
	&m9049_MI,
	&m9050_MI,
	&m9051_MI,
	&m9052_MI,
	&m9053_MI,
	&m9054_MI,
	&m9055_MI,
	&m9056_MI,
	NULL
};
extern Il2CppType t737_0_0_1;
FieldInfo t1725_f1_FieldInfo = 
{
	"input_buffer", &t737_0_0_1, &t1725_TI, offsetof(t1725, f1), &EmptyCustomAttributesCache};
extern Il2CppType t318_0_0_1;
FieldInfo t1725_f2_FieldInfo = 
{
	"decoded_buffer", &t318_0_0_1, &t1725_TI, offsetof(t1725, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1725_f3_FieldInfo = 
{
	"decoded_count", &t125_0_0_1, &t1725_TI, offsetof(t1725, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1725_f4_FieldInfo = 
{
	"pos", &t125_0_0_1, &t1725_TI, offsetof(t1725, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1725_f5_FieldInfo = 
{
	"buffer_size", &t125_0_0_1, &t1725_TI, offsetof(t1725, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1725_f6_FieldInfo = 
{
	"do_checks", &t125_0_0_1, &t1725_TI, offsetof(t1725, f6), &EmptyCustomAttributesCache};
extern Il2CppType t736_0_0_1;
FieldInfo t1725_f7_FieldInfo = 
{
	"encoding", &t736_0_0_1, &t1725_TI, offsetof(t1725, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1719_0_0_1;
FieldInfo t1725_f8_FieldInfo = 
{
	"decoder", &t1719_0_0_1, &t1725_TI, offsetof(t1725, f8), &EmptyCustomAttributesCache};
extern Il2CppType t302_0_0_1;
FieldInfo t1725_f9_FieldInfo = 
{
	"base_stream", &t302_0_0_1, &t1725_TI, offsetof(t1725, f9), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1725_f10_FieldInfo = 
{
	"mayBlock", &t124_0_0_1, &t1725_TI, offsetof(t1725, f10), &EmptyCustomAttributesCache};
extern Il2CppType t328_0_0_1;
FieldInfo t1725_f11_FieldInfo = 
{
	"line_builder", &t328_0_0_1, &t1725_TI, offsetof(t1725, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1725_0_0_54;
FieldInfo t1725_f12_FieldInfo = 
{
	"Null", &t1725_0_0_54, &t1725_TI, offsetof(t1725_SFs, f12), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1725_f13_FieldInfo = 
{
	"foundCR", &t124_0_0_1, &t1725_TI, offsetof(t1725, f13), &EmptyCustomAttributesCache};
static FieldInfo* t1725_FIs[] =
{
	&t1725_f1_FieldInfo,
	&t1725_f2_FieldInfo,
	&t1725_f3_FieldInfo,
	&t1725_f4_FieldInfo,
	&t1725_f5_FieldInfo,
	&t1725_f6_FieldInfo,
	&t1725_f7_FieldInfo,
	&t1725_f8_FieldInfo,
	&t1725_f9_FieldInfo,
	&t1725_f10_FieldInfo,
	&t1725_f11_FieldInfo,
	&t1725_f12_FieldInfo,
	&t1725_f13_FieldInfo,
	NULL
};
static const Il2CppType* t1725_TI__nestedTypes[1] =
{
	&t1740_0_0_0,
};
extern MethodInfo m9051_MI;
extern MethodInfo m9052_MI;
extern MethodInfo m9053_MI;
extern MethodInfo m9055_MI;
extern MethodInfo m9056_MI;
static Il2CppMethodReference t1725_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9084_MI,
	&m9048_MI,
	&m9051_MI,
	&m9052_MI,
	&m9053_MI,
	&m9055_MI,
	&m9056_MI,
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
void t1725_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1725__CustomAttributeCache = {
1,
NULL,
&t1725_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1725_1_0_0;
extern Il2CppType t1671_0_0_0;
struct t1725;
extern CustomAttributesCache t1725__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1725_DM = 
{
	NULL, t1725_TI__nestedTypes, NULL, t1725_IOs, &t1671_0_0_0, t1725_VT, t1725_VTIGM, NULL};
TypeInfo t1725_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamReader", "System.IO", t1725_MIs, NULL, t1725_FIs, NULL, &t1725_TI, NULL, &t1725__CustomAttributeCache, &t1725_0_0_0, &t1725_1_0_0, &t1725_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1725), sizeof (t1725), 0, -1, sizeof(t1725_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 16, 0, 13, 0, 1, 11, 0, 1};
#include "t1741.h"
// Metadata Definition System.IO.StreamWriter
extern TypeInfo t1741_TI;
#include "t1741MD.h"
extern Il2CppType t302_0_0_0;
extern Il2CppType t736_0_0_0;
static ParameterInfo t1741_m9057_ParameterInfos[] = 
{
	{"stream", 0, 134221315, &EmptyCustomAttributesCache, &t302_0_0_0},
	{"encoding", 1, 134221316, &EmptyCustomAttributesCache, &t736_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9057_MI = 
{
	".ctor", (methodPointerType)&m9057, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1741_m9057_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2807, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t302_0_0_0;
extern Il2CppType t736_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1741_m9058_ParameterInfos[] = 
{
	{"stream", 0, 134221317, &EmptyCustomAttributesCache, &t302_0_0_0},
	{"encoding", 1, 134221318, &EmptyCustomAttributesCache, &t736_0_0_0},
	{"bufferSize", 2, 134221319, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9058_MI = 
{
	".ctor", (methodPointerType)&m9058, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1741_m9058_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 2808, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9059_MI = 
{
	".cctor", (methodPointerType)&m9059, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2809, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t736_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1741_m9060_ParameterInfos[] = 
{
	{"encoding", 0, 134221320, &EmptyCustomAttributesCache, &t736_0_0_0},
	{"bufferSize", 1, 134221321, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9060_MI = 
{
	"Initialize", (methodPointerType)&m9060, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1741_m9060_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 2, false, false, 2810, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1741_m9061_ParameterInfos[] = 
{
	{"value", 0, 134221322, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9061_MI = 
{
	"set_AutoFlush", (methodPointerType)&m9061, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1741_m9061_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 14, 1, false, false, 2811, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1741_m9062_ParameterInfos[] = 
{
	{"disposing", 0, 134221323, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9062_MI = 
{
	"Dispose", (methodPointerType)&m9062, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1741_m9062_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 1, false, false, 2812, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9063_MI = 
{
	"Flush", (methodPointerType)&m9063, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2813, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9064_MI = 
{
	"FlushBytes", (methodPointerType)&m9064, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2814, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9065_MI = 
{
	"Decode", (methodPointerType)&m9065, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2815, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1741_m9066_ParameterInfos[] = 
{
	{"buffer", 0, 134221324, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"index", 1, 134221325, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221326, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9066_MI = 
{
	"Write", (methodPointerType)&m9066, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1741_m9066_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 3, false, false, 2816, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1741_m9067_ParameterInfos[] = 
{
	{"buffer", 0, 134221327, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"index", 1, 134221328, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221329, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9067_MI = 
{
	"LowLevelWrite", (methodPointerType)&m9067, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1741_m9067_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2817, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1741_m9068_ParameterInfos[] = 
{
	{"s", 0, 134221330, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9068_MI = 
{
	"LowLevelWrite", (methodPointerType)&m9068, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1741_m9068_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2818, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1741_m9069_ParameterInfos[] = 
{
	{"value", 0, 134221331, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m9069_MI = 
{
	"Write", (methodPointerType)&m9069, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122_t341, t1741_m9069_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 2819, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
static ParameterInfo t1741_m9070_ParameterInfos[] = 
{
	{"buffer", 0, 134221332, &EmptyCustomAttributesCache, &t318_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9070_MI = 
{
	"Write", (methodPointerType)&m9070, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1741_m9070_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 2820, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1741_m9071_ParameterInfos[] = 
{
	{"value", 0, 134221333, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9071_MI = 
{
	"Write", (methodPointerType)&m9071, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1741_m9071_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 2821, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9072_MI = 
{
	"Close", (methodPointerType)&m9072, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 5, 0, false, false, 2822, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9073_MI = 
{
	"Finalize", (methodPointerType)&m9073, &t1741_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 2823, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1741_MIs[] =
{
	&m9057_MI,
	&m9058_MI,
	&m9059_MI,
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
	&m9072_MI,
	&m9073_MI,
	NULL
};
extern Il2CppType t736_0_0_1;
FieldInfo t1741_f2_FieldInfo = 
{
	"internalEncoding", &t736_0_0_1, &t1741_TI, offsetof(t1741, f2), &EmptyCustomAttributesCache};
extern Il2CppType t302_0_0_1;
FieldInfo t1741_f3_FieldInfo = 
{
	"internalStream", &t302_0_0_1, &t1741_TI, offsetof(t1741, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1741_f4_FieldInfo = 
{
	"iflush", &t124_0_0_1, &t1741_TI, offsetof(t1741, f4), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t1741_f5_FieldInfo = 
{
	"byte_buf", &t737_0_0_1, &t1741_TI, offsetof(t1741, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1741_f6_FieldInfo = 
{
	"byte_pos", &t125_0_0_1, &t1741_TI, offsetof(t1741, f6), &EmptyCustomAttributesCache};
extern Il2CppType t318_0_0_1;
FieldInfo t1741_f7_FieldInfo = 
{
	"decode_buf", &t318_0_0_1, &t1741_TI, offsetof(t1741, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1741_f8_FieldInfo = 
{
	"decode_pos", &t125_0_0_1, &t1741_TI, offsetof(t1741, f8), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1741_f9_FieldInfo = 
{
	"DisposedAlready", &t124_0_0_1, &t1741_TI, offsetof(t1741, f9), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1741_f10_FieldInfo = 
{
	"preamble_done", &t124_0_0_1, &t1741_TI, offsetof(t1741, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1741_0_0_54;
FieldInfo t1741_f11_FieldInfo = 
{
	"Null", &t1741_0_0_54, &t1741_TI, offsetof(t1741_SFs, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1741_FIs[] =
{
	&t1741_f2_FieldInfo,
	&t1741_f3_FieldInfo,
	&t1741_f4_FieldInfo,
	&t1741_f5_FieldInfo,
	&t1741_f6_FieldInfo,
	&t1741_f7_FieldInfo,
	&t1741_f8_FieldInfo,
	&t1741_f9_FieldInfo,
	&t1741_f10_FieldInfo,
	&t1741_f11_FieldInfo,
	NULL
};
extern MethodInfo m9061_MI;
static PropertyInfo t1741____AutoFlush_PropertyInfo = 
{
	&t1741_TI, "AutoFlush", NULL, &m9061_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1741_PIs[] =
{
	&t1741____AutoFlush_PropertyInfo,
	NULL
};
extern MethodInfo m9073_MI;
extern MethodInfo m9106_MI;
extern MethodInfo m9072_MI;
extern MethodInfo m9062_MI;
extern MethodInfo m9063_MI;
extern MethodInfo m9069_MI;
extern MethodInfo m9070_MI;
extern MethodInfo m9071_MI;
extern MethodInfo m9066_MI;
extern MethodInfo m9113_MI;
extern MethodInfo m5990_MI;
static Il2CppMethodReference t1741_VT[] =
{
	&m671_MI,
	&m9073_MI,
	&m672_MI,
	&m673_MI,
	&m9106_MI,
	&m9072_MI,
	&m9062_MI,
	&m9063_MI,
	&m9069_MI,
	&m9070_MI,
	&m9071_MI,
	&m9066_MI,
	&m9113_MI,
	&m5990_MI,
	&m9061_MI,
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
void t1741_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1741__CustomAttributeCache = {
1,
NULL,
&t1741_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1741_0_0_0;
extern Il2CppType t1741_1_0_0;
extern Il2CppType t1376_0_0_0;
struct t1741;
extern CustomAttributesCache t1741__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1741_DM = 
{
	NULL, NULL, NULL, t1741_IOs, &t1376_0_0_0, t1741_VT, t1741_VTIGM, NULL};
TypeInfo t1741_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamWriter", "System.IO", t1741_MIs, t1741_PIs, t1741_FIs, NULL, &t1741_TI, NULL, &t1741__CustomAttributeCache, &t1741_0_0_0, &t1741_1_0_0, &t1741_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1741), sizeof (t1741), 0, -1, sizeof(t1741_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, true, true, false, 17, 1, 10, 0, 0, 15, 0, 1};
#include "t894.h"
// Metadata Definition System.IO.StringReader
extern TypeInfo t894_TI;
#include "t894MD.h"
extern Il2CppType t2_0_0_0;
static ParameterInfo t894_m4319_ParameterInfos[] = 
{
	{"s", 0, 134221334, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4319_MI = 
{
	".ctor", (methodPointerType)&m4319, &t894_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t894_m4319_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2824, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t894_m9074_ParameterInfos[] = 
{
	{"disposing", 0, 134221335, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9074_MI = 
{
	"Dispose", (methodPointerType)&m9074, &t894_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t894_m9074_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 5, 1, false, false, 2825, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9075_MI = 
{
	"Peek", (methodPointerType)&m9075, &t894_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 2826, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9076_MI = 
{
	"Read", (methodPointerType)&m9076, &t894_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2827, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t894_m9077_ParameterInfos[] = 
{
	{"buffer", 0, 134221336, &EmptyCustomAttributesCache, &t318_0_0_3},
	{"index", 1, 134221337, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221338, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9077_MI = 
{
	"Read", (methodPointerType)&m9077, &t894_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t894_m9077_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 3, false, false, 2828, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m4320_MI = 
{
	"ReadLine", (methodPointerType)&m4320, &t894_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2829, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9078_MI = 
{
	"ReadToEnd", (methodPointerType)&m9078, &t894_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 10, 0, false, false, 2830, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9079_MI = 
{
	"CheckObjectDisposedException", (methodPointerType)&m9079, &t894_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2831, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t894_MIs[] =
{
	&m4319_MI,
	&m9074_MI,
	&m9075_MI,
	&m9076_MI,
	&m9077_MI,
	&m4320_MI,
	&m9078_MI,
	&m9079_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t894_f1_FieldInfo = 
{
	"source", &t2_0_0_1, &t894_TI, offsetof(t894, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t894_f2_FieldInfo = 
{
	"nextChar", &t125_0_0_1, &t894_TI, offsetof(t894, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t894_f3_FieldInfo = 
{
	"sourceLength", &t125_0_0_1, &t894_TI, offsetof(t894, f3), &EmptyCustomAttributesCache};
static FieldInfo* t894_FIs[] =
{
	&t894_f1_FieldInfo,
	&t894_f2_FieldInfo,
	&t894_f3_FieldInfo,
	NULL
};
extern MethodInfo m9074_MI;
extern MethodInfo m9075_MI;
extern MethodInfo m9076_MI;
extern MethodInfo m9077_MI;
extern MethodInfo m4320_MI;
extern MethodInfo m9078_MI;
static Il2CppMethodReference t894_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9084_MI,
	&m9074_MI,
	&m9075_MI,
	&m9076_MI,
	&m9077_MI,
	&m4320_MI,
	&m9078_MI,
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
};
static Il2CppInterfaceOffsetPair t894_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t894_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t894__CustomAttributeCache = {
1,
NULL,
&t894_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t894_0_0_0;
extern Il2CppType t894_1_0_0;
struct t894;
extern CustomAttributesCache t894__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t894_DM = 
{
	NULL, NULL, NULL, t894_IOs, &t1671_0_0_0, t894_VT, t894_VTIGM, NULL};
TypeInfo t894_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StringReader", "System.IO", t894_MIs, NULL, t894_FIs, NULL, &t894_TI, NULL, &t894__CustomAttributeCache, &t894_0_0_0, &t894_1_0_0, &t894_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t894), sizeof (t894), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 0, 3, 0, 0, 11, 0, 1};
#include "t1742.h"
// Metadata Definition System.IO.TextReader/NullTextReader
extern TypeInfo t1742_TI;
#include "t1742MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9080_MI = 
{
	".ctor", (methodPointerType)&m9080, &t1742_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2842, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9081_MI = 
{
	"ReadLine", (methodPointerType)&m9081, &t1742_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2843, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1742_MIs[] =
{
	&m9080_MI,
	&m9081_MI,
	NULL
};
extern MethodInfo m9085_MI;
extern MethodInfo m9086_MI;
extern MethodInfo m9087_MI;
extern MethodInfo m9088_MI;
extern MethodInfo m9081_MI;
extern MethodInfo m9090_MI;
static Il2CppMethodReference t1742_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9084_MI,
	&m9085_MI,
	&m9086_MI,
	&m9087_MI,
	&m9088_MI,
	&m9081_MI,
	&m9090_MI,
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
};
static Il2CppInterfaceOffsetPair t1742_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1742_0_0_0;
extern Il2CppType t1742_1_0_0;
extern TypeInfo t1671_TI;
struct t1742;
const Il2CppTypeDefinitionMetadata t1742_DM = 
{
	&t1671_0_0_0, NULL, NULL, t1742_IOs, &t1671_0_0_0, t1742_VT, t1742_VTIGM, NULL};
TypeInfo t1742_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NullTextReader", "", t1742_MIs, NULL, NULL, NULL, &t1742_TI, NULL, &EmptyCustomAttributesCache, &t1742_0_0_0, &t1742_1_0_0, &t1742_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1742), sizeof (t1742), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 11, 0, 1};
#include "t1671.h"
// Metadata Definition System.IO.TextReader
#include "t1671MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9082_MI = 
{
	".ctor", (methodPointerType)&m9082, &t1671_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2832, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9083_MI = 
{
	".cctor", (methodPointerType)&m9083, &t1671_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2833, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9084_MI = 
{
	"Dispose", (methodPointerType)&m9084, &t1671_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 486, 0, 4, 0, false, false, 2834, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1671_m9085_ParameterInfos[] = 
{
	{"disposing", 0, 134221339, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9085_MI = 
{
	"Dispose", (methodPointerType)&m9085, &t1671_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1671_m9085_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 5, 1, false, false, 2835, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9086_MI = 
{
	"Peek", (methodPointerType)&m9086, &t1671_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 2836, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9087_MI = 
{
	"Read", (methodPointerType)&m9087, &t1671_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2837, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1671_m9088_ParameterInfos[] = 
{
	{"buffer", 0, 134221340, &EmptyCustomAttributesCache, &t318_0_0_3},
	{"index", 1, 134221341, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221342, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9088_MI = 
{
	"Read", (methodPointerType)&m9088, &t1671_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1671_m9088_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 3, false, false, 2838, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9089_MI = 
{
	"ReadLine", (methodPointerType)&m9089, &t1671_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 9, 0, false, false, 2839, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9090_MI = 
{
	"ReadToEnd", (methodPointerType)&m9090, &t1671_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 10, 0, false, false, 2840, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1671_0_0_0;
static ParameterInfo t1671_m9091_ParameterInfos[] = 
{
	{"reader", 0, 134221343, &EmptyCustomAttributesCache, &t1671_0_0_0},
};
extern Il2CppType t1671_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9091_MI = 
{
	"Synchronized", (methodPointerType)&m9091, &t1671_TI, &t1671_0_0_0, RuntimeInvoker_t9_t9, t1671_m9091_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 2841, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1671_MIs[] =
{
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
	NULL
};
extern Il2CppType t1671_0_0_54;
FieldInfo t1671_f0_FieldInfo = 
{
	"Null", &t1671_0_0_54, &t1671_TI, offsetof(t1671_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1671_FIs[] =
{
	&t1671_f0_FieldInfo,
	NULL
};
static const Il2CppType* t1671_TI__nestedTypes[1] =
{
	&t1742_0_0_0,
};
extern MethodInfo m9089_MI;
static Il2CppMethodReference t1671_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9084_MI,
	&m9085_MI,
	&m9086_MI,
	&m9087_MI,
	&m9088_MI,
	&m9089_MI,
	&m9090_MI,
};
static bool t1671_VTIGM[] =
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
static const Il2CppType* t1671_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1671_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1671_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1671__CustomAttributeCache = {
1,
NULL,
&t1671_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1671_1_0_0;
struct t1671;
extern CustomAttributesCache t1671__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1671_DM = 
{
	NULL, t1671_TI__nestedTypes, t1671_ITIs, t1671_IOs, &t9_0_0_0, t1671_VT, t1671_VTIGM, NULL};
TypeInfo t1671_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TextReader", "System.IO", t1671_MIs, NULL, t1671_FIs, NULL, &t1671_TI, NULL, &t1671__CustomAttributeCache, &t1671_0_0_0, &t1671_1_0_0, &t1671_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1671), sizeof (t1671), 0, -1, sizeof(t1671_SFs), 0, -1, 8321, 0, 0, false, false, false, false, false, false, false, false, true, false, 10, 0, 1, 0, 1, 11, 1, 1};
#include "t1743.h"
// Metadata Definition System.IO.SynchronizedReader
extern TypeInfo t1743_TI;
#include "t1743MD.h"
extern Il2CppType t1671_0_0_0;
static ParameterInfo t1743_m9092_ParameterInfos[] = 
{
	{"reader", 0, 134221344, &EmptyCustomAttributesCache, &t1671_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9092_MI = 
{
	".ctor", (methodPointerType)&m9092, &t1743_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1743_m9092_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2844, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9093_MI = 
{
	"Peek", (methodPointerType)&m9093, &t1743_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 2845, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9094_MI = 
{
	"ReadLine", (methodPointerType)&m9094, &t1743_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2846, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9095_MI = 
{
	"ReadToEnd", (methodPointerType)&m9095, &t1743_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 10, 0, false, false, 2847, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9096_MI = 
{
	"Read", (methodPointerType)&m9096, &t1743_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2848, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1743_m9097_ParameterInfos[] = 
{
	{"buffer", 0, 134221345, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"index", 1, 134221346, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221347, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9097_MI = 
{
	"Read", (methodPointerType)&m9097, &t1743_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1743_m9097_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 3, false, false, 2849, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1743_MIs[] =
{
	&m9092_MI,
	&m9093_MI,
	&m9094_MI,
	&m9095_MI,
	&m9096_MI,
	&m9097_MI,
	NULL
};
extern Il2CppType t1671_0_0_1;
FieldInfo t1743_f1_FieldInfo = 
{
	"reader", &t1671_0_0_1, &t1743_TI, offsetof(t1743, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1743_FIs[] =
{
	&t1743_f1_FieldInfo,
	NULL
};
extern MethodInfo m9093_MI;
extern MethodInfo m9096_MI;
extern MethodInfo m9097_MI;
extern MethodInfo m9094_MI;
extern MethodInfo m9095_MI;
static Il2CppMethodReference t1743_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9084_MI,
	&m9085_MI,
	&m9093_MI,
	&m9096_MI,
	&m9097_MI,
	&m9094_MI,
	&m9095_MI,
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
};
static Il2CppInterfaceOffsetPair t1743_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1743_0_0_0;
extern Il2CppType t1743_1_0_0;
struct t1743;
const Il2CppTypeDefinitionMetadata t1743_DM = 
{
	NULL, NULL, NULL, t1743_IOs, &t1671_0_0_0, t1743_VT, t1743_VTIGM, NULL};
TypeInfo t1743_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SynchronizedReader", "System.IO", t1743_MIs, NULL, t1743_FIs, NULL, &t1743_TI, NULL, &EmptyCustomAttributesCache, &t1743_0_0_0, &t1743_1_0_0, &t1743_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1743), sizeof (t1743), 0, -1, 0, 0, -1, 1056768, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 0, 1, 0, 0, 11, 0, 1};
#include "t1744.h"
// Metadata Definition System.IO.TextWriter/NullTextWriter
extern TypeInfo t1744_TI;
#include "t1744MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9098_MI = 
{
	".ctor", (methodPointerType)&m9098, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2863, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1744_m9099_ParameterInfos[] = 
{
	{"s", 0, 134221358, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9099_MI = 
{
	"Write", (methodPointerType)&m9099, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1744_m9099_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 2864, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1744_m9100_ParameterInfos[] = 
{
	{"value", 0, 134221359, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m9100_MI = 
{
	"Write", (methodPointerType)&m9100, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t341, t1744_m9100_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 2865, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1744_m9101_ParameterInfos[] = 
{
	{"value", 0, 134221360, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"index", 1, 134221361, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221362, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9101_MI = 
{
	"Write", (methodPointerType)&m9101, &t1744_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1744_m9101_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 3, false, false, 2866, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1744_MIs[] =
{
	&m9098_MI,
	&m9099_MI,
	&m9100_MI,
	&m9101_MI,
	NULL
};
extern MethodInfo m9104_MI;
extern MethodInfo m9105_MI;
extern MethodInfo m9107_MI;
extern MethodInfo m9100_MI;
extern MethodInfo m9110_MI;
extern MethodInfo m9099_MI;
extern MethodInfo m9101_MI;
static Il2CppMethodReference t1744_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9106_MI,
	&m9104_MI,
	&m9105_MI,
	&m9107_MI,
	&m9100_MI,
	&m9110_MI,
	&m9099_MI,
	&m9101_MI,
	&m9113_MI,
	&m5990_MI,
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
};
static Il2CppInterfaceOffsetPair t1744_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1744_0_0_0;
extern Il2CppType t1744_1_0_0;
extern TypeInfo t1376_TI;
struct t1744;
const Il2CppTypeDefinitionMetadata t1744_DM = 
{
	&t1376_0_0_0, NULL, NULL, t1744_IOs, &t1376_0_0_0, t1744_VT, t1744_VTIGM, NULL};
TypeInfo t1744_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NullTextWriter", "", t1744_MIs, NULL, NULL, NULL, &t1744_TI, NULL, &EmptyCustomAttributesCache, &t1744_0_0_0, &t1744_1_0_0, &t1744_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1744), sizeof (t1744), 0, -1, 0, 0, -1, 1048835, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 14, 0, 1};
#include "t1376.h"
// Metadata Definition System.IO.TextWriter
#include "t1376MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9102_MI = 
{
	".ctor", (methodPointerType)&m9102, &t1376_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2850, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9103_MI = 
{
	".cctor", (methodPointerType)&m9103, &t1376_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2851, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9104_MI = 
{
	"Close", (methodPointerType)&m9104, &t1376_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 5, 0, false, false, 2852, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1376_m9105_ParameterInfos[] = 
{
	{"disposing", 0, 134221348, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9105_MI = 
{
	"Dispose", (methodPointerType)&m9105, &t1376_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1376_m9105_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 6, 1, false, false, 2853, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9106_MI = 
{
	"Dispose", (methodPointerType)&m9106, &t1376_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 486, 0, 4, 0, false, false, 2854, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9107_MI = 
{
	"Flush", (methodPointerType)&m9107, &t1376_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 2855, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1376_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1376_m9108_ParameterInfos[] = 
{
	{"writer", 0, 134221349, &EmptyCustomAttributesCache, &t1376_0_0_0},
	{"neverClose", 1, 134221350, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1376_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9108_MI = 
{
	"Synchronized", (methodPointerType)&m9108, &t1376_TI, &t1376_0_0_0, RuntimeInvoker_t9_t9_t186, t1376_m9108_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 2856, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1376_m9109_ParameterInfos[] = 
{
	{"value", 0, 134221351, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m9109_MI = 
{
	"Write", (methodPointerType)&m9109, &t1376_TI, &t122_0_0_0, RuntimeInvoker_t122_t341, t1376_m9109_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 1, false, false, 2857, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
static ParameterInfo t1376_m9110_ParameterInfos[] = 
{
	{"buffer", 0, 134221352, &EmptyCustomAttributesCache, &t318_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9110_MI = 
{
	"Write", (methodPointerType)&m9110, &t1376_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1376_m9110_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 1, false, false, 2858, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1376_m9111_ParameterInfos[] = 
{
	{"value", 0, 134221353, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9111_MI = 
{
	"Write", (methodPointerType)&m9111, &t1376_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1376_m9111_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 1, false, false, 2859, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1376_m9112_ParameterInfos[] = 
{
	{"buffer", 0, 134221354, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"index", 1, 134221355, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221356, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9112_MI = 
{
	"Write", (methodPointerType)&m9112, &t1376_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1376_m9112_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 3, false, false, 2860, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9113_MI = 
{
	"WriteLine", (methodPointerType)&m9113, &t1376_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 12, 0, false, false, 2861, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1376_m5990_ParameterInfos[] = 
{
	{"value", 0, 134221357, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5990_MI = 
{
	"WriteLine", (methodPointerType)&m5990, &t1376_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1376_m5990_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 1, false, false, 2862, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1376_MIs[] =
{
	&m9102_MI,
	&m9103_MI,
	&m9104_MI,
	&m9105_MI,
	&m9106_MI,
	&m9107_MI,
	&m9108_MI,
	&m9109_MI,
	&m9110_MI,
	&m9111_MI,
	&m9112_MI,
	&m9113_MI,
	&m5990_MI,
	NULL
};
extern Il2CppType t318_0_0_4;
FieldInfo t1376_f0_FieldInfo = 
{
	"CoreNewLine", &t318_0_0_4, &t1376_TI, offsetof(t1376, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1376_0_0_54;
FieldInfo t1376_f1_FieldInfo = 
{
	"Null", &t1376_0_0_54, &t1376_TI, offsetof(t1376_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1376_FIs[] =
{
	&t1376_f0_FieldInfo,
	&t1376_f1_FieldInfo,
	NULL
};
static const Il2CppType* t1376_TI__nestedTypes[1] =
{
	&t1744_0_0_0,
};
extern MethodInfo m9109_MI;
extern MethodInfo m9111_MI;
extern MethodInfo m9112_MI;
static Il2CppMethodReference t1376_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9106_MI,
	&m9104_MI,
	&m9105_MI,
	&m9107_MI,
	&m9109_MI,
	&m9110_MI,
	&m9111_MI,
	&m9112_MI,
	&m9113_MI,
	&m5990_MI,
};
static bool t1376_VTIGM[] =
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
static const Il2CppType* t1376_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1376_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1376_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1376__CustomAttributeCache = {
1,
NULL,
&t1376_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1376_1_0_0;
struct t1376;
extern CustomAttributesCache t1376__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1376_DM = 
{
	NULL, t1376_TI__nestedTypes, t1376_ITIs, t1376_IOs, &t9_0_0_0, t1376_VT, t1376_VTIGM, NULL};
TypeInfo t1376_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TextWriter", "System.IO", t1376_MIs, NULL, t1376_FIs, NULL, &t1376_TI, NULL, &t1376__CustomAttributeCache, &t1376_0_0_0, &t1376_1_0_0, &t1376_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1376), sizeof (t1376), 0, -1, sizeof(t1376_SFs), 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, true, false, 13, 0, 2, 0, 1, 14, 1, 1};
#include "t1745.h"
// Metadata Definition System.IO.SynchronizedWriter
extern TypeInfo t1745_TI;
#include "t1745MD.h"
extern Il2CppType t1376_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1745_m9114_ParameterInfos[] = 
{
	{"writer", 0, 134221363, &EmptyCustomAttributesCache, &t1376_0_0_0},
	{"neverClose", 1, 134221364, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9114_MI = 
{
	".ctor", (methodPointerType)&m9114, &t1745_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1745_m9114_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2867, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9115_MI = 
{
	"Close", (methodPointerType)&m9115, &t1745_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 5, 0, false, false, 2868, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9116_MI = 
{
	"Flush", (methodPointerType)&m9116, &t1745_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2869, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1745_m9117_ParameterInfos[] = 
{
	{"value", 0, 134221365, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m9117_MI = 
{
	"Write", (methodPointerType)&m9117, &t1745_TI, &t122_0_0_0, RuntimeInvoker_t122_t341, t1745_m9117_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 2870, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
static ParameterInfo t1745_m9118_ParameterInfos[] = 
{
	{"value", 0, 134221366, &EmptyCustomAttributesCache, &t318_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9118_MI = 
{
	"Write", (methodPointerType)&m9118, &t1745_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1745_m9118_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 2871, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1745_m9119_ParameterInfos[] = 
{
	{"value", 0, 134221367, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9119_MI = 
{
	"Write", (methodPointerType)&m9119, &t1745_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1745_m9119_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 2872, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1745_m9120_ParameterInfos[] = 
{
	{"buffer", 0, 134221368, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"index", 1, 134221369, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221370, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9120_MI = 
{
	"Write", (methodPointerType)&m9120, &t1745_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1745_m9120_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 3, false, false, 2873, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9121_MI = 
{
	"WriteLine", (methodPointerType)&m9121, &t1745_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 12, 0, false, false, 2874, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1745_m9122_ParameterInfos[] = 
{
	{"value", 0, 134221371, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9122_MI = 
{
	"WriteLine", (methodPointerType)&m9122, &t1745_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1745_m9122_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 1, false, false, 2875, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1745_MIs[] =
{
	&m9114_MI,
	&m9115_MI,
	&m9116_MI,
	&m9117_MI,
	&m9118_MI,
	&m9119_MI,
	&m9120_MI,
	&m9121_MI,
	&m9122_MI,
	NULL
};
extern Il2CppType t1376_0_0_1;
FieldInfo t1745_f2_FieldInfo = 
{
	"writer", &t1376_0_0_1, &t1745_TI, offsetof(t1745, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1745_f3_FieldInfo = 
{
	"neverClose", &t124_0_0_1, &t1745_TI, offsetof(t1745, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1745_FIs[] =
{
	&t1745_f2_FieldInfo,
	&t1745_f3_FieldInfo,
	NULL
};
extern MethodInfo m9115_MI;
extern MethodInfo m9116_MI;
extern MethodInfo m9117_MI;
extern MethodInfo m9118_MI;
extern MethodInfo m9119_MI;
extern MethodInfo m9120_MI;
extern MethodInfo m9121_MI;
extern MethodInfo m9122_MI;
static Il2CppMethodReference t1745_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9106_MI,
	&m9115_MI,
	&m9105_MI,
	&m9116_MI,
	&m9117_MI,
	&m9118_MI,
	&m9119_MI,
	&m9120_MI,
	&m9121_MI,
	&m9122_MI,
};
static bool t1745_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1745_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1745_0_0_0;
extern Il2CppType t1745_1_0_0;
struct t1745;
const Il2CppTypeDefinitionMetadata t1745_DM = 
{
	NULL, NULL, NULL, t1745_IOs, &t1376_0_0_0, t1745_VT, t1745_VTIGM, NULL};
TypeInfo t1745_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SynchronizedWriter", "System.IO", t1745_MIs, NULL, t1745_FIs, NULL, &t1745_TI, NULL, &EmptyCustomAttributesCache, &t1745_0_0_0, &t1745_1_0_0, &t1745_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1745), sizeof (t1745), 0, -1, 0, 0, -1, 1056768, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 0, 2, 0, 0, 14, 0, 1};
#include "t1746.h"
// Metadata Definition System.IO.UnexceptionalStreamReader
extern TypeInfo t1746_TI;
#include "t1746MD.h"
extern Il2CppType t302_0_0_0;
extern Il2CppType t736_0_0_0;
static ParameterInfo t1746_m9123_ParameterInfos[] = 
{
	{"stream", 0, 134221372, &EmptyCustomAttributesCache, &t302_0_0_0},
	{"encoding", 1, 134221373, &EmptyCustomAttributesCache, &t736_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9123_MI = 
{
	".ctor", (methodPointerType)&m9123, &t1746_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1746_m9123_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2876, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9124_MI = 
{
	".cctor", (methodPointerType)&m9124, &t1746_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2877, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9125_MI = 
{
	"Peek", (methodPointerType)&m9125, &t1746_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 2878, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9126_MI = 
{
	"Read", (methodPointerType)&m9126, &t1746_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2879, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_3;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1746_m9127_ParameterInfos[] = 
{
	{"dest_buffer", 0, 134221374, &EmptyCustomAttributesCache, &t318_0_0_3},
	{"index", 1, 134221375, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221376, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9127_MI = 
{
	"Read", (methodPointerType)&m9127, &t1746_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t125, t1746_m9127_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 3, false, false, 2880, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1746_m9128_ParameterInfos[] = 
{
	{"current", 0, 134221377, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m9128_MI = 
{
	"CheckEOL", (methodPointerType)&m9128, &t1746_TI, &t124_0_0_0, RuntimeInvoker_t124_t341, t1746_m9128_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2881, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9129_MI = 
{
	"ReadLine", (methodPointerType)&m9129, &t1746_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 9, 0, false, false, 2882, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9130_MI = 
{
	"ReadToEnd", (methodPointerType)&m9130, &t1746_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 10, 0, false, false, 2883, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1746_MIs[] =
{
	&m9123_MI,
	&m9124_MI,
	&m9125_MI,
	&m9126_MI,
	&m9127_MI,
	&m9128_MI,
	&m9129_MI,
	&m9130_MI,
	NULL
};
extern Il2CppType t1212_0_0_17;
FieldInfo t1746_f14_FieldInfo = 
{
	"newline", &t1212_0_0_17, &t1746_TI, offsetof(t1746_SFs, f14), &EmptyCustomAttributesCache};
extern Il2CppType t309_0_0_17;
FieldInfo t1746_f15_FieldInfo = 
{
	"newlineChar", &t309_0_0_17, &t1746_TI, offsetof(t1746_SFs, f15), &EmptyCustomAttributesCache};
static FieldInfo* t1746_FIs[] =
{
	&t1746_f14_FieldInfo,
	&t1746_f15_FieldInfo,
	NULL
};
extern MethodInfo m9125_MI;
extern MethodInfo m9126_MI;
extern MethodInfo m9127_MI;
extern MethodInfo m9129_MI;
extern MethodInfo m9130_MI;
static Il2CppMethodReference t1746_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9084_MI,
	&m9048_MI,
	&m9125_MI,
	&m9126_MI,
	&m9127_MI,
	&m9129_MI,
	&m9130_MI,
};
static bool t1746_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1746_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1746_0_0_0;
extern Il2CppType t1746_1_0_0;
struct t1746;
const Il2CppTypeDefinitionMetadata t1746_DM = 
{
	NULL, NULL, NULL, t1746_IOs, &t1725_0_0_0, t1746_VT, t1746_VTIGM, NULL};
TypeInfo t1746_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UnexceptionalStreamReader", "System.IO", t1746_MIs, NULL, t1746_FIs, NULL, &t1746_TI, NULL, &EmptyCustomAttributesCache, &t1746_0_0_0, &t1746_1_0_0, &t1746_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1746), sizeof (t1746), 0, -1, sizeof(t1746_SFs), 0, -1, 0, 0, 0, false, false, false, false, false, false, false, false, true, false, 8, 0, 2, 0, 0, 11, 0, 1};
#include "t1747.h"
// Metadata Definition System.IO.UnexceptionalStreamWriter
extern TypeInfo t1747_TI;
#include "t1747MD.h"
extern Il2CppType t302_0_0_0;
extern Il2CppType t736_0_0_0;
static ParameterInfo t1747_m9131_ParameterInfos[] = 
{
	{"stream", 0, 134221378, &EmptyCustomAttributesCache, &t302_0_0_0},
	{"encoding", 1, 134221379, &EmptyCustomAttributesCache, &t736_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9131_MI = 
{
	".ctor", (methodPointerType)&m9131, &t1747_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1747_m9131_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2884, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9132_MI = 
{
	"Flush", (methodPointerType)&m9132, &t1747_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 2885, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1747_m9133_ParameterInfos[] = 
{
	{"buffer", 0, 134221380, &EmptyCustomAttributesCache, &t318_0_0_0},
	{"index", 1, 134221381, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"count", 2, 134221382, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9133_MI = 
{
	"Write", (methodPointerType)&m9133, &t1747_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1747_m9133_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 3, false, false, 2886, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1747_m9134_ParameterInfos[] = 
{
	{"value", 0, 134221383, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m9134_MI = 
{
	"Write", (methodPointerType)&m9134, &t1747_TI, &t122_0_0_0, RuntimeInvoker_t122_t341, t1747_m9134_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 2887, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t318_0_0_0;
static ParameterInfo t1747_m9135_ParameterInfos[] = 
{
	{"value", 0, 134221384, &EmptyCustomAttributesCache, &t318_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9135_MI = 
{
	"Write", (methodPointerType)&m9135, &t1747_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1747_m9135_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 2888, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1747_m9136_ParameterInfos[] = 
{
	{"value", 0, 134221385, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9136_MI = 
{
	"Write", (methodPointerType)&m9136, &t1747_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1747_m9136_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 2889, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1747_MIs[] =
{
	&m9131_MI,
	&m9132_MI,
	&m9133_MI,
	&m9134_MI,
	&m9135_MI,
	&m9136_MI,
	NULL
};
extern MethodInfo m9132_MI;
extern MethodInfo m9134_MI;
extern MethodInfo m9135_MI;
extern MethodInfo m9136_MI;
extern MethodInfo m9133_MI;
static Il2CppMethodReference t1747_VT[] =
{
	&m671_MI,
	&m9073_MI,
	&m672_MI,
	&m673_MI,
	&m9106_MI,
	&m9072_MI,
	&m9062_MI,
	&m9132_MI,
	&m9134_MI,
	&m9135_MI,
	&m9136_MI,
	&m9133_MI,
	&m9113_MI,
	&m5990_MI,
	&m9061_MI,
};
static bool t1747_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1747_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1747_0_0_0;
extern Il2CppType t1747_1_0_0;
struct t1747;
const Il2CppTypeDefinitionMetadata t1747_DM = 
{
	NULL, NULL, NULL, t1747_IOs, &t1741_0_0_0, t1747_VT, t1747_VTIGM, NULL};
TypeInfo t1747_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UnexceptionalStreamWriter", "System.IO", t1747_MIs, NULL, NULL, NULL, &t1747_TI, NULL, &EmptyCustomAttributesCache, &t1747_0_0_0, &t1747_1_0_0, &t1747_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1747), sizeof (t1747), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, true, false, false, 6, 0, 0, 0, 0, 15, 0, 1};
#include "t1748.h"
// Metadata Definition System.Reflection.Emit.MonoResource
extern TypeInfo t1748_TI;
#include "t1748MD.h"
static MethodInfo* t1748_MIs[] =
{
	NULL
};
extern Il2CppType t737_0_0_6;
FieldInfo t1748_f0_FieldInfo = 
{
	"data", &t737_0_0_6, &t1748_TI, offsetof(t1748, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1748_f1_FieldInfo = 
{
	"name", &t2_0_0_6, &t1748_TI, offsetof(t1748, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1748_f2_FieldInfo = 
{
	"filename", &t2_0_0_6, &t1748_TI, offsetof(t1748, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1749_0_0_6;
FieldInfo t1748_f3_FieldInfo = 
{
	"attrs", &t1749_0_0_6, &t1748_TI, offsetof(t1748, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1748_f4_FieldInfo = 
{
	"offset", &t125_0_0_6, &t1748_TI, offsetof(t1748, f4) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t302_0_0_6;
FieldInfo t1748_f5_FieldInfo = 
{
	"stream", &t302_0_0_6, &t1748_TI, offsetof(t1748, f5) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1748_FIs[] =
{
	&t1748_f0_FieldInfo,
	&t1748_f1_FieldInfo,
	&t1748_f2_FieldInfo,
	&t1748_f3_FieldInfo,
	&t1748_f4_FieldInfo,
	&t1748_f5_FieldInfo,
	NULL
};
static Il2CppMethodReference t1748_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1748_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1748_0_0_0;
extern Il2CppType t1748_1_0_0;
const Il2CppTypeDefinitionMetadata t1748_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1748_VT, t1748_VTIGM, NULL};
TypeInfo t1748_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoResource", "System.Reflection.Emit", t1748_MIs, NULL, t1748_FIs, NULL, &t1748_TI, NULL, &EmptyCustomAttributesCache, &t1748_0_0_0, &t1748_1_0_0, &t1748_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1748)+ sizeof (Il2CppObject), sizeof (t1748)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048840, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 4, 0, 0};
#include "t1750.h"
// Metadata Definition System.Reflection.Emit.AssemblyBuilder
extern TypeInfo t1750_TI;
#include "t1750MD.h"
extern Il2CppType t1754_0_0_0;
extern Il2CppType t1754_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1757_0_0_0;
extern Il2CppType t1757_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1750_m9137_ParameterInfos[] = 
{
	{"n", 0, 134221386, &EmptyCustomAttributesCache, &t1754_0_0_0},
	{"directory", 1, 134221387, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"access", 2, 134221388, &EmptyCustomAttributesCache, &t1757_0_0_0},
	{"corlib_internal", 3, 134221389, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9137_MI = 
{
	".ctor", (methodPointerType)&m9137, &t1750_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125_t186, t1750_m9137_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 2890, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1750_0_0_0;
extern Il2CppType t1750_0_0_0;
static ParameterInfo t1750_m9138_ParameterInfos[] = 
{
	{"ab", 0, 134221390, &EmptyCustomAttributesCache, &t1750_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9138_MI = 
{
	"basic_init", (methodPointerType)&m9138, &t1750_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1750_m9138_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 2891, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9139_MI = 
{
	"get_Location", (methodPointerType)&m9139, &t1750_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 2892, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1750_m9140_ParameterInfos[] = 
{
	{"name", 0, 134221391, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"emitSymbolInfo", 1, 134221392, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1755_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9140_MI = 
{
	"DefineDynamicModule", (methodPointerType)&m9140, &t1750_TI, &t1755_0_0_0, RuntimeInvoker_t9_t9_t186, t1750_m9140_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 2893, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1750_m9141_ParameterInfos[] = 
{
	{"name", 0, 134221393, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"fileName", 1, 134221394, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"emitSymbolInfo", 2, 134221395, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"transient", 3, 134221396, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1755_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9141_MI = 
{
	"DefineDynamicModule", (methodPointerType)&m9141, &t1750_TI, &t1755_0_0_0, RuntimeInvoker_t9_t9_t9_t186_t186, t1750_m9141_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 2894, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1756_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9142_MI = 
{
	"GetModulesInternal", (methodPointerType)&m9142, &t1750_TI, &t1756_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 195, 0, 15, 0, false, false, 2895, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9143_MI = 
{
	"get_IsCompilerContext", (methodPointerType)&m9143, &t1750_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2896, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9144_MI = 
{
	"get_IsSave", (methodPointerType)&m9144, &t1750_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2897, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9145_MI = 
{
	"get_IsRun", (methodPointerType)&m9145, &t1750_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2898, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9146_MI = 
{
	"get_AssemblyDir", (methodPointerType)&m9146, &t1750_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2899, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9147_MI = 
{
	"not_supported", (methodPointerType)&m9147, &t1750_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2900, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1750_m9148_ParameterInfos[] = 
{
	{"name", 0, 134221397, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"fileName", 1, 134221398, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"fileNeedsToExists", 2, 134221399, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9148_MI = 
{
	"check_name_and_filename", (methodPointerType)&m9148, &t1750_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1750_m9148_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 2901, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1754_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9149_MI = 
{
	"UnprotectedGetName", (methodPointerType)&m9149, &t1750_TI, &t1754_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 195, 0, 13, 0, false, false, 2902, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1750_MIs[] =
{
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
	NULL
};
extern Il2CppType t1751_0_0_1;
FieldInfo t1750_f10_FieldInfo = 
{
	"modules", &t1751_0_0_1, &t1750_TI, offsetof(t1750, f10), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1750_f11_FieldInfo = 
{
	"name", &t2_0_0_1, &t1750_TI, offsetof(t1750, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1750_f12_FieldInfo = 
{
	"dir", &t2_0_0_1, &t1750_TI, offsetof(t1750, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1752_0_0_1;
FieldInfo t1750_f13_FieldInfo = 
{
	"resources", &t1752_0_0_1, &t1750_TI, offsetof(t1750, f13), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1750_f14_FieldInfo = 
{
	"version", &t2_0_0_1, &t1750_TI, offsetof(t1750, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1750_f15_FieldInfo = 
{
	"culture", &t2_0_0_1, &t1750_TI, offsetof(t1750, f15), &EmptyCustomAttributesCache};
extern Il2CppType t168_0_0_1;
FieldInfo t1750_f16_FieldInfo = 
{
	"flags", &t168_0_0_1, &t1750_TI, offsetof(t1750, f16), &EmptyCustomAttributesCache};
extern Il2CppType t1753_0_0_1;
FieldInfo t1750_f17_FieldInfo = 
{
	"pekind", &t1753_0_0_1, &t1750_TI, offsetof(t1750, f17), &EmptyCustomAttributesCache};
extern Il2CppType t168_0_0_1;
FieldInfo t1750_f18_FieldInfo = 
{
	"access", &t168_0_0_1, &t1750_TI, offsetof(t1750, f18), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1750_f19_FieldInfo = 
{
	"corlib_internal", &t124_0_0_1, &t1750_TI, offsetof(t1750, f19), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t1750_f20_FieldInfo = 
{
	"pktoken", &t737_0_0_1, &t1750_TI, offsetof(t1750, f20), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_3;
FieldInfo t1750_f21_FieldInfo = 
{
	"corlib_object_type", &t126_0_0_3, &t1750_TI, offsetof(t1750, f21), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_3;
FieldInfo t1750_f22_FieldInfo = 
{
	"corlib_value_type", &t126_0_0_3, &t1750_TI, offsetof(t1750, f22), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_3;
FieldInfo t1750_f23_FieldInfo = 
{
	"corlib_enum_type", &t126_0_0_3, &t1750_TI, offsetof(t1750, f23), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_3;
FieldInfo t1750_f24_FieldInfo = 
{
	"corlib_void_type", &t126_0_0_3, &t1750_TI, offsetof(t1750, f24), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1750_f25_FieldInfo = 
{
	"created", &t124_0_0_1, &t1750_TI, offsetof(t1750, f25), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1750_f26_FieldInfo = 
{
	"is_module_only", &t124_0_0_1, &t1750_TI, offsetof(t1750, f26), &EmptyCustomAttributesCache};
extern Il2CppType t1664_0_0_1;
FieldInfo t1750_f27_FieldInfo = 
{
	"sn", &t1664_0_0_1, &t1750_TI, offsetof(t1750, f27), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_33;
FieldInfo t1750_f28_FieldInfo = 
{
	"is_compiler_context", &t124_0_0_33, &t1750_TI, offsetof(t1750, f28), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1750_f29_FieldInfo = 
{
	"versioninfo_culture", &t2_0_0_1, &t1750_TI, offsetof(t1750, f29), &EmptyCustomAttributesCache};
static FieldInfo* t1750_FIs[] =
{
	&t1750_f10_FieldInfo,
	&t1750_f11_FieldInfo,
	&t1750_f12_FieldInfo,
	&t1750_f13_FieldInfo,
	&t1750_f14_FieldInfo,
	&t1750_f15_FieldInfo,
	&t1750_f16_FieldInfo,
	&t1750_f17_FieldInfo,
	&t1750_f18_FieldInfo,
	&t1750_f19_FieldInfo,
	&t1750_f20_FieldInfo,
	&t1750_f21_FieldInfo,
	&t1750_f22_FieldInfo,
	&t1750_f23_FieldInfo,
	&t1750_f24_FieldInfo,
	&t1750_f25_FieldInfo,
	&t1750_f26_FieldInfo,
	&t1750_f27_FieldInfo,
	&t1750_f28_FieldInfo,
	&t1750_f29_FieldInfo,
	NULL
};
extern MethodInfo m9139_MI;
static PropertyInfo t1750____Location_PropertyInfo = 
{
	&t1750_TI, "Location", &m9139_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9143_MI;
static PropertyInfo t1750____IsCompilerContext_PropertyInfo = 
{
	&t1750_TI, "IsCompilerContext", &m9143_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9144_MI;
static PropertyInfo t1750____IsSave_PropertyInfo = 
{
	&t1750_TI, "IsSave", &m9144_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9145_MI;
static PropertyInfo t1750____IsRun_PropertyInfo = 
{
	&t1750_TI, "IsRun", &m9145_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9146_MI;
static PropertyInfo t1750____AssemblyDir_PropertyInfo = 
{
	&t1750_TI, "AssemblyDir", &m9146_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1750_PIs[] =
{
	&t1750____Location_PropertyInfo,
	&t1750____IsCompilerContext_PropertyInfo,
	&t1750____IsSave_PropertyInfo,
	&t1750____IsRun_PropertyInfo,
	&t1750____AssemblyDir_PropertyInfo,
	NULL
};
extern MethodInfo m9503_MI;
extern MethodInfo m9496_MI;
extern MethodInfo m9495_MI;
extern MethodInfo m9493_MI;
extern MethodInfo m9498_MI;
extern MethodInfo m5814_MI;
extern MethodInfo m9500_MI;
extern MethodInfo m9149_MI;
extern MethodInfo m9509_MI;
extern MethodInfo m9142_MI;
extern MethodInfo m9511_MI;
static Il2CppMethodReference t1750_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m9503_MI,
	&m9496_MI,
	&m9495_MI,
	&m9493_MI,
	&m9139_MI,
	&m9495_MI,
	&m9496_MI,
	&m9498_MI,
	&m5814_MI,
	&m9500_MI,
	&m9149_MI,
	&m9509_MI,
	&m9142_MI,
	&m9511_MI,
};
static bool t1750_VTIGM[] =
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
extern Il2CppType t2595_0_0_0;
static const Il2CppType* t1750_ITIs[] = 
{
	&t2595_0_0_0,
};
extern Il2CppType t2136_0_0_0;
extern Il2CppType t2596_0_0_0;
static Il2CppInterfaceOffsetPair t1750_IOs[] = 
{
	{ &t2136_0_0_0, 4},
	{ &t2596_0_0_0, 6},
	{ &t2595_0_0_0, 17},
};
extern TypeInfo t1844_TI;
#include "t1844.h"
#include "t1844MD.h"
extern MethodInfo m9813_MI;
extern TypeInfo t1846_TI;
#include "t1846.h"
#include "t1846MD.h"
extern MethodInfo m9814_MI;
extern TypeInfo t2595_TI;
void t1750_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1844 * tmp;
		tmp = (t1844 *)il2cpp_codegen_object_new (&t1844_TI);
		m9813(tmp, 0, &m9813_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1846 * tmp;
		tmp = (t1846 *)il2cpp_codegen_object_new (&t1846_TI);
		m9814(tmp, il2cpp_codegen_type_get_object(&t2595_0_0_0), &m9814_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1750__CustomAttributeCache = {
3,
NULL,
&t1750_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1750_1_0_0;
extern Il2CppType t1351_0_0_0;
struct t1750;
extern CustomAttributesCache t1750__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1750_DM = 
{
	NULL, NULL, t1750_ITIs, t1750_IOs, &t1351_0_0_0, t1750_VT, t1750_VTIGM, NULL};
TypeInfo t1750_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyBuilder", "System.Reflection.Emit", t1750_MIs, t1750_PIs, t1750_FIs, NULL, &t1750_TI, NULL, &t1750__CustomAttributeCache, &t1750_0_0_0, &t1750_1_0_0, &t1750_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1750), sizeof (t1750), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 13, 5, 20, 0, 0, 17, 1, 3};
#include "t1757.h"
// Metadata Definition System.Reflection.Emit.AssemblyBuilderAccess
extern TypeInfo t1757_TI;
#include "t1757MD.h"
static MethodInfo* t1757_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1757_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1757_TI, offsetof(t1757, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1757_0_0_32854;
FieldInfo t1757_f2_FieldInfo = 
{
	"Run", &t1757_0_0_32854, &t1757_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1757_0_0_32854;
FieldInfo t1757_f3_FieldInfo = 
{
	"Save", &t1757_0_0_32854, &t1757_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1757_0_0_32854;
FieldInfo t1757_f4_FieldInfo = 
{
	"RunAndSave", &t1757_0_0_32854, &t1757_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1757_0_0_32854;
FieldInfo t1757_f5_FieldInfo = 
{
	"ReflectionOnly", &t1757_0_0_32854, &t1757_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1757_FIs[] =
{
	&t1757_f1_FieldInfo,
	&t1757_f2_FieldInfo,
	&t1757_f3_FieldInfo,
	&t1757_f4_FieldInfo,
	&t1757_f5_FieldInfo,
	NULL
};
static const int32_t t1757_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1757_f2_DefaultValue = 
{
	&t1757_f2_FieldInfo, { (char*)&t1757_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1757_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1757_f3_DefaultValue = 
{
	&t1757_f3_FieldInfo, { (char*)&t1757_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1757_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1757_f4_DefaultValue = 
{
	&t1757_f4_FieldInfo, { (char*)&t1757_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1757_f5_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1757_f5_DefaultValue = 
{
	&t1757_f5_FieldInfo, { (char*)&t1757_f5_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1757_FDVs[] = 
{
	&t1757_f2_DefaultValue,
	&t1757_f3_DefaultValue,
	&t1757_f4_DefaultValue,
	&t1757_f5_DefaultValue,
	NULL
};
static Il2CppMethodReference t1757_VT[] =
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
};
static Il2CppInterfaceOffsetPair t1757_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1757_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
}
CustomAttributesCache t1757__CustomAttributeCache = {
2,
NULL,
&t1757_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1757_1_0_0;
extern CustomAttributesCache t1757__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1757_DM = 
{
	NULL, NULL, NULL, t1757_IOs, &t8_0_0_0, t1757_VT, t1757_VTIGM, NULL};
TypeInfo t1757_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyBuilderAccess", "System.Reflection.Emit", t1757_MIs, NULL, t1757_FIs, NULL, &t125_TI, NULL, &t1757__CustomAttributeCache, &t1757_0_0_0, &t1757_1_0_0, &t1757_DM, NULL, NULL, NULL, t1757_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1757)+ sizeof (Il2CppObject), sizeof (t1757)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t1758.h"
// Metadata Definition System.Reflection.Emit.ConstructorBuilder
extern TypeInfo t1758_TI;
#include "t1758MD.h"
extern Il2CppType t1760_0_0_0;
extern Il2CppType t1760_0_0_0;
extern Il2CppType t1763_0_0_0;
extern Il2CppType t1763_0_0_0;
extern Il2CppType t1579_0_0_0;
extern Il2CppType t1579_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t1762_0_0_0;
extern Il2CppType t1762_0_0_0;
extern Il2CppType t1762_0_0_0;
static ParameterInfo t1758_m9150_ParameterInfos[] = 
{
	{"tb", 0, 134221400, &EmptyCustomAttributesCache, &t1760_0_0_0},
	{"attributes", 1, 134221401, &EmptyCustomAttributesCache, &t1763_0_0_0},
	{"callingConvention", 2, 134221402, &EmptyCustomAttributesCache, &t1579_0_0_0},
	{"parameterTypes", 3, 134221403, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"paramModReq", 4, 134221404, &EmptyCustomAttributesCache, &t1762_0_0_0},
	{"paramModOpt", 5, 134221405, &EmptyCustomAttributesCache, &t1762_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9150_MI = 
{
	".ctor", (methodPointerType)&m9150, &t1758_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125_t9_t9_t9, t1758_m9150_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 6, false, false, 2903, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1579_0_0_0;
extern void* RuntimeInvoker_t1579 (MethodInfo* method, void* obj, void** args);
MethodInfo m9151_MI = 
{
	"get_CallingConvention", (methodPointerType)&m9151, &t1758_TI, &t1579_0_0_0, RuntimeInvoker_t1579, NULL, &EmptyCustomAttributesCache, 2246, 0, 20, 0, false, false, 2904, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1760_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9152_MI = 
{
	"get_TypeBuilder", (methodPointerType)&m9152, &t1758_TI, &t1760_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2905, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t934_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9153_MI = 
{
	"GetParameters", (methodPointerType)&m9153, &t1758_TI, &t934_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 14, 0, false, false, 2906, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t934_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9154_MI = 
{
	"GetParametersInternal", (methodPointerType)&m9154, &t1758_TI, &t934_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2907, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9155_MI = 
{
	"GetParameterCount", (methodPointerType)&m9155, &t1758_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 195, 0, 15, 0, false, false, 2908, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t931_0_0_0;
extern Il2CppType t931_0_0_0;
extern Il2CppType t939_0_0_0;
extern Il2CppType t939_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t907_0_0_0;
static ParameterInfo t1758_m9156_ParameterInfos[] = 
{
	{"obj", 0, 134221406, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"invokeAttr", 1, 134221407, &EmptyCustomAttributesCache, &t931_0_0_0},
	{"binder", 2, 134221408, &EmptyCustomAttributesCache, &t939_0_0_0},
	{"parameters", 3, 134221409, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"culture", 4, 134221410, &EmptyCustomAttributesCache, &t907_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9156_MI = 
{
	"Invoke", (methodPointerType)&m9156, &t1758_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9, t1758_m9156_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 5, false, false, 2909, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t931_0_0_0;
extern Il2CppType t939_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t907_0_0_0;
static ParameterInfo t1758_m9157_ParameterInfos[] = 
{
	{"invokeAttr", 0, 134221411, &EmptyCustomAttributesCache, &t931_0_0_0},
	{"binder", 1, 134221412, &EmptyCustomAttributesCache, &t939_0_0_0},
	{"parameters", 2, 134221413, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"culture", 3, 134221414, &EmptyCustomAttributesCache, &t907_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t125_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9157_MI = 
{
	"Invoke", (methodPointerType)&m9157, &t1758_TI, &t9_0_0_0, RuntimeInvoker_t9_t125_t9_t9_t9, t1758_m9157_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 29, 4, false, false, 2910, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1764_0_0_0;
extern void* RuntimeInvoker_t1764 (MethodInfo* method, void* obj, void** args);
MethodInfo m9158_MI = 
{
	"get_MethodHandle", (methodPointerType)&m9158, &t1758_TI, &t1764_0_0_0, RuntimeInvoker_t1764, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 2911, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1763_0_0_0;
extern void* RuntimeInvoker_t1763 (MethodInfo* method, void* obj, void** args);
MethodInfo m9159_MI = 
{
	"get_Attributes", (methodPointerType)&m9159, &t1758_TI, &t1763_0_0_0, RuntimeInvoker_t1763, NULL, &EmptyCustomAttributesCache, 2246, 0, 19, 0, false, false, 2912, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9160_MI = 
{
	"get_ReflectedType", (methodPointerType)&m9160, &t1758_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2913, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9161_MI = 
{
	"get_DeclaringType", (methodPointerType)&m9161, &t1758_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2914, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9162_MI = 
{
	"get_Name", (methodPointerType)&m9162, &t1758_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2915, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1758_m9163_ParameterInfos[] = 
{
	{"attributeType", 0, 134221415, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221416, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9163_MI = 
{
	"IsDefined", (methodPointerType)&m9163, &t1758_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1758_m9163_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 2916, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1758_m9164_ParameterInfos[] = 
{
	{"inherit", 0, 134221417, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9164_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9164, &t1758_TI, &t158_0_0_0, RuntimeInvoker_t9_t186, t1758_m9164_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 2917, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1758_m9165_ParameterInfos[] = 
{
	{"attributeType", 0, 134221418, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221419, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9165_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9165, &t1758_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t186, t1758_m9165_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 2918, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1759_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9166_MI = 
{
	"GetILGenerator", (methodPointerType)&m9166, &t1758_TI, &t1759_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 2919, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1758_m9167_ParameterInfos[] = 
{
	{"streamSize", 0, 134221420, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t1759_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9167_MI = 
{
	"GetILGenerator", (methodPointerType)&m9167, &t1758_TI, &t1759_0_0_0, RuntimeInvoker_t9_t125, t1758_m9167_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2920, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1765_0_0_0;
extern void* RuntimeInvoker_t1765 (MethodInfo* method, void* obj, void** args);
MethodInfo m9168_MI = 
{
	"GetToken", (methodPointerType)&m9168, &t1758_TI, &t1765_0_0_0, RuntimeInvoker_t1765, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 2921, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1574_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9169_MI = 
{
	"get_Module", (methodPointerType)&m9169, &t1758_TI, &t1574_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 2922, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9170_MI = 
{
	"ToString", (methodPointerType)&m9170, &t1758_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2923, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1758_m9171_ParameterInfos[] = 
{
	{"obj", 0, 134221421, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"table", 1, 134221422, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"inc", 2, 134221423, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9171_MI = 
{
	"get_next_table_index", (methodPointerType)&m9171, &t1758_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t125_t186, t1758_m9171_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 24, 3, false, false, 2924, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9172_MI = 
{
	"get_IsCompilerContext", (methodPointerType)&m9172, &t1758_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2177, 0, 255, 0, false, false, 2925, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9173_MI = 
{
	"not_supported", (methodPointerType)&m9173, &t1758_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2926, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9174_MI = 
{
	"not_created", (methodPointerType)&m9174, &t1758_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2927, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1758_MIs[] =
{
	&m9150_MI,
	&m9151_MI,
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
	NULL
};
extern Il2CppType t1759_0_0_1;
FieldInfo t1758_f2_FieldInfo = 
{
	"ilgen", &t1759_0_0_1, &t1758_TI, offsetof(t1758, f2), &EmptyCustomAttributesCache};
extern Il2CppType t152_0_0_3;
FieldInfo t1758_f3_FieldInfo = 
{
	"parameters", &t152_0_0_3, &t1758_TI, offsetof(t1758, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1763_0_0_1;
FieldInfo t1758_f4_FieldInfo = 
{
	"attrs", &t1763_0_0_1, &t1758_TI, offsetof(t1758, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1758_f5_FieldInfo = 
{
	"table_idx", &t125_0_0_1, &t1758_TI, offsetof(t1758, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1579_0_0_1;
FieldInfo t1758_f6_FieldInfo = 
{
	"call_conv", &t1579_0_0_1, &t1758_TI, offsetof(t1758, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1760_0_0_1;
FieldInfo t1758_f7_FieldInfo = 
{
	"type", &t1760_0_0_1, &t1758_TI, offsetof(t1758, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1761_0_0_3;
FieldInfo t1758_f8_FieldInfo = 
{
	"pinfo", &t1761_0_0_3, &t1758_TI, offsetof(t1758, f8), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1758_f9_FieldInfo = 
{
	"init_locals", &t124_0_0_1, &t1758_TI, offsetof(t1758, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1762_0_0_1;
FieldInfo t1758_f10_FieldInfo = 
{
	"paramModReq", &t1762_0_0_1, &t1758_TI, offsetof(t1758, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1762_0_0_1;
FieldInfo t1758_f11_FieldInfo = 
{
	"paramModOpt", &t1762_0_0_1, &t1758_TI, offsetof(t1758, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1758_FIs[] =
{
	&t1758_f2_FieldInfo,
	&t1758_f3_FieldInfo,
	&t1758_f4_FieldInfo,
	&t1758_f5_FieldInfo,
	&t1758_f6_FieldInfo,
	&t1758_f7_FieldInfo,
	&t1758_f8_FieldInfo,
	&t1758_f9_FieldInfo,
	&t1758_f10_FieldInfo,
	&t1758_f11_FieldInfo,
	NULL
};
extern MethodInfo m9151_MI;
extern CustomAttributesCache t1758__CustomAttributeCache_t1758____CallingConvention_PropertyInfo;
static PropertyInfo t1758____CallingConvention_PropertyInfo = 
{
	&t1758_TI, "CallingConvention", &m9151_MI, NULL, 0, &t1758__CustomAttributeCache_t1758____CallingConvention_PropertyInfo};
extern MethodInfo m9152_MI;
static PropertyInfo t1758____TypeBuilder_PropertyInfo = 
{
	&t1758_TI, "TypeBuilder", &m9152_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9158_MI;
static PropertyInfo t1758____MethodHandle_PropertyInfo = 
{
	&t1758_TI, "MethodHandle", &m9158_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9159_MI;
static PropertyInfo t1758____Attributes_PropertyInfo = 
{
	&t1758_TI, "Attributes", &m9159_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9160_MI;
static PropertyInfo t1758____ReflectedType_PropertyInfo = 
{
	&t1758_TI, "ReflectedType", &m9160_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9161_MI;
static PropertyInfo t1758____DeclaringType_PropertyInfo = 
{
	&t1758_TI, "DeclaringType", &m9161_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9162_MI;
static PropertyInfo t1758____Name_PropertyInfo = 
{
	&t1758_TI, "Name", &m9162_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9169_MI;
static PropertyInfo t1758____Module_PropertyInfo = 
{
	&t1758_TI, "Module", &m9169_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9172_MI;
static PropertyInfo t1758____IsCompilerContext_PropertyInfo = 
{
	&t1758_TI, "IsCompilerContext", &m9172_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1758_PIs[] =
{
	&t1758____CallingConvention_PropertyInfo,
	&t1758____TypeBuilder_PropertyInfo,
	&t1758____MethodHandle_PropertyInfo,
	&t1758____Attributes_PropertyInfo,
	&t1758____ReflectedType_PropertyInfo,
	&t1758____DeclaringType_PropertyInfo,
	&t1758____Name_PropertyInfo,
	&t1758____Module_PropertyInfo,
	&t1758____IsCompilerContext_PropertyInfo,
	NULL
};
extern MethodInfo m9170_MI;
extern MethodInfo m9165_MI;
extern MethodInfo m9163_MI;
extern MethodInfo m9555_MI;
extern MethodInfo m9164_MI;
extern MethodInfo m9153_MI;
extern MethodInfo m9155_MI;
extern MethodInfo m4459_MI;
extern MethodInfo m9156_MI;
extern MethodInfo m4432_MI;
extern MethodInfo m4431_MI;
extern MethodInfo m9587_MI;
extern MethodInfo m9171_MI;
extern MethodInfo m9589_MI;
extern MethodInfo m9590_MI;
extern MethodInfo m9591_MI;
extern MethodInfo m9592_MI;
extern MethodInfo m9157_MI;
static Il2CppMethodReference t1758_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m9170_MI,
	&m9165_MI,
	&m9163_MI,
	&m9161_MI,
	&m9555_MI,
	&m9162_MI,
	&m9160_MI,
	&m9169_MI,
	&m9163_MI,
	&m9164_MI,
	&m9165_MI,
	&m9153_MI,
	&m9155_MI,
	&m4459_MI,
	&m9156_MI,
	&m9158_MI,
	&m9159_MI,
	&m9151_MI,
	&m4432_MI,
	&m4431_MI,
	&m9587_MI,
	&m9171_MI,
	&m9589_MI,
	&m9590_MI,
	&m9591_MI,
	&m9592_MI,
	&m9157_MI,
};
static bool t1758_VTIGM[] =
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
extern Il2CppType t2597_0_0_0;
static const Il2CppType* t1758_ITIs[] = 
{
	&t2597_0_0_0,
};
extern Il2CppType t2598_0_0_0;
extern Il2CppType t2599_0_0_0;
extern Il2CppType t2427_0_0_0;
static Il2CppInterfaceOffsetPair t1758_IOs[] = 
{
	{ &t2598_0_0_0, 29},
	{ &t2599_0_0_0, 14},
	{ &t2136_0_0_0, 4},
	{ &t2427_0_0_0, 6},
	{ &t2597_0_0_0, 30},
};
extern TypeInfo t2597_TI;
void t1758_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1846 * tmp;
		tmp = (t1846 *)il2cpp_codegen_object_new (&t1846_TI);
		m9814(tmp, il2cpp_codegen_type_get_object(&t2597_0_0_0), &m9814_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1844 * tmp;
		tmp = (t1844 *)il2cpp_codegen_object_new (&t1844_TI);
		m9813(tmp, 0, &m9813_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t1758_CustomAttributesCacheGenerator_t1758____CallingConvention_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7890(tmp, &m7890_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1758__CustomAttributeCache = {
3,
NULL,
&t1758_CustomAttributesCacheGenerator
};
CustomAttributesCache t1758__CustomAttributeCache_t1758____CallingConvention_PropertyInfo = {
1,
NULL,
&t1758_CustomAttributesCacheGenerator_t1758____CallingConvention_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1758_0_0_0;
extern Il2CppType t1758_1_0_0;
extern Il2CppType t833_0_0_0;
struct t1758;
extern CustomAttributesCache t1758__CustomAttributeCache;
extern CustomAttributesCache t1758__CustomAttributeCache_t1758____CallingConvention_PropertyInfo;
const Il2CppTypeDefinitionMetadata t1758_DM = 
{
	NULL, NULL, t1758_ITIs, t1758_IOs, &t833_0_0_0, t1758_VT, t1758_VTIGM, NULL};
TypeInfo t1758_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ConstructorBuilder", "System.Reflection.Emit", t1758_MIs, t1758_PIs, t1758_FIs, NULL, &t1758_TI, NULL, &t1758__CustomAttributeCache, &t1758_0_0_0, &t1758_1_0_0, &t1758_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1758), sizeof (t1758), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 25, 9, 10, 0, 0, 30, 1, 5};
#include "t1766.h"
// Metadata Definition System.Reflection.Emit.DynamicMethod
extern TypeInfo t1766_TI;
#include "t1766MD.h"
extern Il2CppType t1766_0_0_0;
extern Il2CppType t1766_0_0_0;
static ParameterInfo t1766_m9175_ParameterInfos[] = 
{
	{"m", 0, 134221424, &EmptyCustomAttributesCache, &t1766_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9175_MI = 
{
	"create_dynamic_method", (methodPointerType)&m9175, &t1766_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1766_m9175_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 2928, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1766_0_0_0;
static ParameterInfo t1766_m9176_ParameterInfos[] = 
{
	{"m", 0, 134221425, &EmptyCustomAttributesCache, &t1766_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9176_MI = 
{
	"destroy_dynamic_method", (methodPointerType)&m9176, &t1766_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1766_m9176_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 2929, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9177_MI = 
{
	"CreateDynMethod", (methodPointerType)&m9177, &t1766_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2930, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9178_MI = 
{
	"Finalize", (methodPointerType)&m9178, &t1766_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 2931, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t835_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9179_MI = 
{
	"GetBaseDefinition", (methodPointerType)&m9179, &t1766_TI, &t835_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 29, 0, false, false, 2932, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1766_m9180_ParameterInfos[] = 
{
	{"inherit", 0, 134221426, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1766__CustomAttributeCache_m9180;
MethodInfo m9180_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9180, &t1766_TI, &t158_0_0_0, RuntimeInvoker_t9_t186, t1766_m9180_ParameterInfos, &t1766__CustomAttributeCache_m9180, 198, 0, 12, 1, false, false, 2933, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1766_m9181_ParameterInfos[] = 
{
	{"attributeType", 0, 134221427, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221428, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1766__CustomAttributeCache_m9181;
MethodInfo m9181_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9181, &t1766_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t186, t1766_m9181_ParameterInfos, &t1766__CustomAttributeCache_m9181, 198, 0, 13, 2, false, false, 2934, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t934_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9182_MI = 
{
	"GetParameters", (methodPointerType)&m9182, &t1766_TI, &t934_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 14, 0, false, false, 2935, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t931_0_0_0;
extern Il2CppType t939_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t907_0_0_0;
static ParameterInfo t1766_m9183_ParameterInfos[] = 
{
	{"obj", 0, 134221429, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"invokeAttr", 1, 134221430, &EmptyCustomAttributesCache, &t931_0_0_0},
	{"binder", 2, 134221431, &EmptyCustomAttributesCache, &t939_0_0_0},
	{"parameters", 3, 134221432, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"culture", 4, 134221433, &EmptyCustomAttributesCache, &t907_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9183_MI = 
{
	"Invoke", (methodPointerType)&m9183, &t1766_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9, t1766_m9183_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 5, false, false, 2936, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1766_m9184_ParameterInfos[] = 
{
	{"attributeType", 0, 134221434, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221435, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1766__CustomAttributeCache_m9184;
MethodInfo m9184_MI = 
{
	"IsDefined", (methodPointerType)&m9184, &t1766_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1766_m9184_ParameterInfos, &t1766__CustomAttributeCache_m9184, 198, 0, 11, 2, false, false, 2937, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9185_MI = 
{
	"ToString", (methodPointerType)&m9185, &t1766_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2938, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1763_0_0_0;
extern void* RuntimeInvoker_t1763 (MethodInfo* method, void* obj, void** args);
MethodInfo m9186_MI = 
{
	"get_Attributes", (methodPointerType)&m9186, &t1766_TI, &t1763_0_0_0, RuntimeInvoker_t1763, NULL, &EmptyCustomAttributesCache, 2246, 0, 19, 0, false, false, 2939, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1579_0_0_0;
extern void* RuntimeInvoker_t1579 (MethodInfo* method, void* obj, void** args);
MethodInfo m9187_MI = 
{
	"get_CallingConvention", (methodPointerType)&m9187, &t1766_TI, &t1579_0_0_0, RuntimeInvoker_t1579, NULL, &EmptyCustomAttributesCache, 2246, 0, 20, 0, false, false, 2940, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9188_MI = 
{
	"get_DeclaringType", (methodPointerType)&m9188, &t1766_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2941, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1764_0_0_0;
extern void* RuntimeInvoker_t1764 (MethodInfo* method, void* obj, void** args);
MethodInfo m9189_MI = 
{
	"get_MethodHandle", (methodPointerType)&m9189, &t1766_TI, &t1764_0_0_0, RuntimeInvoker_t1764, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 2942, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1574_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9190_MI = 
{
	"get_Module", (methodPointerType)&m9190, &t1766_TI, &t1574_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 2943, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9191_MI = 
{
	"get_Name", (methodPointerType)&m9191, &t1766_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2944, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9192_MI = 
{
	"get_ReflectedType", (methodPointerType)&m9192, &t1766_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2945, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9193_MI = 
{
	"get_ReturnType", (methodPointerType)&m9193, &t1766_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 30, 0, false, false, 2946, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1766_MIs[] =
{
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
	NULL
};
extern Il2CppType t1764_0_0_1;
FieldInfo t1766_f0_FieldInfo = 
{
	"mhandle", &t1764_0_0_1, &t1766_TI, offsetof(t1766, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1766_f1_FieldInfo = 
{
	"name", &t2_0_0_1, &t1766_TI, offsetof(t1766, f1), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1766_f2_FieldInfo = 
{
	"returnType", &t126_0_0_1, &t1766_TI, offsetof(t1766, f2), &EmptyCustomAttributesCache};
extern Il2CppType t152_0_0_1;
FieldInfo t1766_f3_FieldInfo = 
{
	"parameters", &t152_0_0_1, &t1766_TI, offsetof(t1766, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1763_0_0_1;
FieldInfo t1766_f4_FieldInfo = 
{
	"attributes", &t1763_0_0_1, &t1766_TI, offsetof(t1766, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1579_0_0_1;
FieldInfo t1766_f5_FieldInfo = 
{
	"callingConvention", &t1579_0_0_1, &t1766_TI, offsetof(t1766, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1574_0_0_1;
FieldInfo t1766_f6_FieldInfo = 
{
	"module", &t1574_0_0_1, &t1766_TI, offsetof(t1766, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1759_0_0_1;
FieldInfo t1766_f7_FieldInfo = 
{
	"ilgen", &t1759_0_0_1, &t1766_TI, offsetof(t1766, f7), &EmptyCustomAttributesCache};
extern Il2CppType t158_0_0_1;
FieldInfo t1766_f8_FieldInfo = 
{
	"refs", &t158_0_0_1, &t1766_TI, offsetof(t1766, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1767_0_0_1;
FieldInfo t1766_f9_FieldInfo = 
{
	"method", &t1767_0_0_1, &t1766_TI, offsetof(t1766, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1761_0_0_1;
FieldInfo t1766_f10_FieldInfo = 
{
	"pinfo", &t1761_0_0_1, &t1766_TI, offsetof(t1766, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t1766_f11_FieldInfo = 
{
	"creating", &t124_0_0_3, &t1766_TI, offsetof(t1766, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1766_FIs[] =
{
	&t1766_f0_FieldInfo,
	&t1766_f1_FieldInfo,
	&t1766_f2_FieldInfo,
	&t1766_f3_FieldInfo,
	&t1766_f4_FieldInfo,
	&t1766_f5_FieldInfo,
	&t1766_f6_FieldInfo,
	&t1766_f7_FieldInfo,
	&t1766_f8_FieldInfo,
	&t1766_f9_FieldInfo,
	&t1766_f10_FieldInfo,
	&t1766_f11_FieldInfo,
	NULL
};
extern MethodInfo m9186_MI;
static PropertyInfo t1766____Attributes_PropertyInfo = 
{
	&t1766_TI, "Attributes", &m9186_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9187_MI;
static PropertyInfo t1766____CallingConvention_PropertyInfo = 
{
	&t1766_TI, "CallingConvention", &m9187_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9188_MI;
static PropertyInfo t1766____DeclaringType_PropertyInfo = 
{
	&t1766_TI, "DeclaringType", &m9188_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9189_MI;
static PropertyInfo t1766____MethodHandle_PropertyInfo = 
{
	&t1766_TI, "MethodHandle", &m9189_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9190_MI;
static PropertyInfo t1766____Module_PropertyInfo = 
{
	&t1766_TI, "Module", &m9190_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9191_MI;
static PropertyInfo t1766____Name_PropertyInfo = 
{
	&t1766_TI, "Name", &m9191_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9192_MI;
static PropertyInfo t1766____ReflectedType_PropertyInfo = 
{
	&t1766_TI, "ReflectedType", &m9192_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9193_MI;
static PropertyInfo t1766____ReturnType_PropertyInfo = 
{
	&t1766_TI, "ReturnType", &m9193_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1766_PIs[] =
{
	&t1766____Attributes_PropertyInfo,
	&t1766____CallingConvention_PropertyInfo,
	&t1766____DeclaringType_PropertyInfo,
	&t1766____MethodHandle_PropertyInfo,
	&t1766____Module_PropertyInfo,
	&t1766____Name_PropertyInfo,
	&t1766____ReflectedType_PropertyInfo,
	&t1766____ReturnType_PropertyInfo,
	NULL
};
extern MethodInfo m9178_MI;
extern MethodInfo m9185_MI;
extern MethodInfo m9181_MI;
extern MethodInfo m9184_MI;
extern MethodInfo m9594_MI;
extern MethodInfo m9180_MI;
extern MethodInfo m9182_MI;
extern MethodInfo m9585_MI;
extern MethodInfo m9183_MI;
extern MethodInfo m9588_MI;
extern MethodInfo m9597_MI;
extern MethodInfo m9600_MI;
extern MethodInfo m9599_MI;
extern MethodInfo m9598_MI;
extern MethodInfo m9179_MI;
extern MethodInfo m9596_MI;
static Il2CppMethodReference t1766_VT[] =
{
	&m671_MI,
	&m9178_MI,
	&m672_MI,
	&m9185_MI,
	&m9181_MI,
	&m9184_MI,
	&m9188_MI,
	&m9594_MI,
	&m9191_MI,
	&m9192_MI,
	&m9190_MI,
	&m9184_MI,
	&m9180_MI,
	&m9181_MI,
	&m9182_MI,
	&m9585_MI,
	&m4459_MI,
	&m9183_MI,
	&m9189_MI,
	&m9186_MI,
	&m9187_MI,
	&m4432_MI,
	&m4431_MI,
	&m9587_MI,
	&m9588_MI,
	&m9597_MI,
	&m9600_MI,
	&m9599_MI,
	&m9598_MI,
	&m9179_MI,
	&m9193_MI,
	&m9596_MI,
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
};
extern Il2CppType t2600_0_0_0;
static Il2CppInterfaceOffsetPair t1766_IOs[] = 
{
	{ &t2600_0_0_0, 29},
	{ &t2599_0_0_0, 14},
	{ &t2136_0_0_0, 4},
	{ &t2427_0_0_0, 6},
};
void t1766_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1766_CustomAttributesCacheGenerator_m9180(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7891(tmp, il2cpp_codegen_string_new_wrapper("Not implemented"), &m7891_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1766_CustomAttributesCacheGenerator_m9181(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7891(tmp, il2cpp_codegen_string_new_wrapper("Not implemented"), &m7891_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1766_CustomAttributesCacheGenerator_m9184(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7891(tmp, il2cpp_codegen_string_new_wrapper("Not implemented"), &m7891_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1766__CustomAttributeCache = {
1,
NULL,
&t1766_CustomAttributesCacheGenerator
};
CustomAttributesCache t1766__CustomAttributeCache_m9180 = {
1,
NULL,
&t1766_CustomAttributesCacheGenerator_m9180
};
CustomAttributesCache t1766__CustomAttributeCache_m9181 = {
1,
NULL,
&t1766_CustomAttributesCacheGenerator_m9181
};
CustomAttributesCache t1766__CustomAttributeCache_m9184 = {
1,
NULL,
&t1766_CustomAttributesCacheGenerator_m9184
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1766_1_0_0;
extern Il2CppType t835_0_0_0;
struct t1766;
extern CustomAttributesCache t1766__CustomAttributeCache;
extern CustomAttributesCache t1766__CustomAttributeCache_m9180;
extern CustomAttributesCache t1766__CustomAttributeCache_m9181;
extern CustomAttributesCache t1766__CustomAttributeCache_m9184;
const Il2CppTypeDefinitionMetadata t1766_DM = 
{
	NULL, NULL, NULL, t1766_IOs, &t835_0_0_0, t1766_VT, t1766_VTIGM, NULL};
TypeInfo t1766_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DynamicMethod", "System.Reflection.Emit", t1766_MIs, t1766_PIs, t1766_FIs, NULL, &t1766_TI, NULL, &t1766__CustomAttributeCache, &t1766_0_0_0, &t1766_1_0_0, &t1766_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1766), sizeof (t1766), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 19, 8, 12, 0, 0, 32, 0, 4};
#include "t1768.h"
// Metadata Definition System.Reflection.Emit.EnumBuilder
extern TypeInfo t1768_TI;
#include "t1768MD.h"
extern Il2CppType t1351_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9194_MI = 
{
	"get_Assembly", (methodPointerType)&m9194, &t1768_TI, &t1351_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 14, 0, false, false, 2947, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9195_MI = 
{
	"get_AssemblyQualifiedName", (methodPointerType)&m9195, &t1768_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 2948, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9196_MI = 
{
	"get_BaseType", (methodPointerType)&m9196, &t1768_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 17, 0, false, false, 2949, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9197_MI = 
{
	"get_DeclaringType", (methodPointerType)&m9197, &t1768_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2950, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9198_MI = 
{
	"get_FullName", (methodPointerType)&m9198, &t1768_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 2951, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1574_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9199_MI = 
{
	"get_Module", (methodPointerType)&m9199, &t1768_TI, &t1574_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 2952, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9200_MI = 
{
	"get_Name", (methodPointerType)&m9200, &t1768_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2953, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9201_MI = 
{
	"get_Namespace", (methodPointerType)&m9201, &t1768_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 34, 0, false, false, 2954, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9202_MI = 
{
	"get_ReflectedType", (methodPointerType)&m9202, &t1768_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2955, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t127_0_0_0;
extern void* RuntimeInvoker_t127 (MethodInfo* method, void* obj, void** args);
MethodInfo m9203_MI = 
{
	"get_TypeHandle", (methodPointerType)&m9203, &t1768_TI, &t127_0_0_0, RuntimeInvoker_t127, NULL, &EmptyCustomAttributesCache, 2246, 0, 35, 0, false, false, 2956, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9204_MI = 
{
	"get_UnderlyingSystemType", (methodPointerType)&m9204, &t1768_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 36, 0, false, false, 2957, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1577_0_0_0;
extern void* RuntimeInvoker_t1577 (MethodInfo* method, void* obj, void** args);
MethodInfo m9205_MI = 
{
	"GetAttributeFlagsImpl", (methodPointerType)&m9205, &t1768_TI, &t1577_0_0_0, RuntimeInvoker_t1577, NULL, &EmptyCustomAttributesCache, 196, 0, 63, 0, false, false, 2958, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t931_0_0_0;
extern Il2CppType t939_0_0_0;
extern Il2CppType t1579_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t941_0_0_0;
extern Il2CppType t941_0_0_0;
static ParameterInfo t1768_m9206_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221436, &EmptyCustomAttributesCache, &t931_0_0_0},
	{"binder", 1, 134221437, &EmptyCustomAttributesCache, &t939_0_0_0},
	{"callConvention", 2, 134221438, &EmptyCustomAttributesCache, &t1579_0_0_0},
	{"types", 3, 134221439, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 4, 134221440, &EmptyCustomAttributesCache, &t941_0_0_0},
};
extern Il2CppType t833_0_0_0;
extern void* RuntimeInvoker_t9_t125_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9206_MI = 
{
	"GetConstructorImpl", (methodPointerType)&m9206, &t1768_TI, &t833_0_0_0, RuntimeInvoker_t9_t125_t9_t125_t9_t9, t1768_m9206_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 62, 5, false, false, 2959, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t931_0_0_0;
static ParameterInfo t1768_m9207_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221441, &EmptyCustomAttributesCache, &t931_0_0_0},
};
extern Il2CppType t932_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1768__CustomAttributeCache_m9207;
MethodInfo m9207_MI = 
{
	"GetConstructors", (methodPointerType)&m9207, &t1768_TI, &t932_0_0_0, RuntimeInvoker_t9_t125, t1768_m9207_ParameterInfos, &t1768__CustomAttributeCache_m9207, 198, 0, 76, 1, false, false, 2960, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1768_m9208_ParameterInfos[] = 
{
	{"inherit", 0, 134221442, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9208_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9208, &t1768_TI, &t158_0_0_0, RuntimeInvoker_t9_t186, t1768_m9208_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 2961, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1768_m9209_ParameterInfos[] = 
{
	{"attributeType", 0, 134221443, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221444, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9209_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9209, &t1768_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t186, t1768_m9209_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 2962, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9210_MI = 
{
	"GetElementType", (methodPointerType)&m9210, &t1768_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 44, 0, false, false, 2963, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t931_0_0_0;
static ParameterInfo t1768_m9211_ParameterInfos[] = 
{
	{"name", 0, 134221445, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221446, &EmptyCustomAttributesCache, &t931_0_0_0},
};
extern Il2CppType t1575_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9211_MI = 
{
	"GetEvent", (methodPointerType)&m9211, &t1768_TI, &t1575_0_0_0, RuntimeInvoker_t9_t9_t125, t1768_m9211_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 45, 2, false, false, 2964, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t931_0_0_0;
static ParameterInfo t1768_m9212_ParameterInfos[] = 
{
	{"name", 0, 134221447, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221448, &EmptyCustomAttributesCache, &t931_0_0_0},
};
extern Il2CppType t837_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9212_MI = 
{
	"GetField", (methodPointerType)&m9212, &t1768_TI, &t837_0_0_0, RuntimeInvoker_t9_t9_t125, t1768_m9212_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 46, 2, false, false, 2965, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t931_0_0_0;
static ParameterInfo t1768_m9213_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221449, &EmptyCustomAttributesCache, &t931_0_0_0},
};
extern Il2CppType t936_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9213_MI = 
{
	"GetFields", (methodPointerType)&m9213, &t1768_TI, &t936_0_0_0, RuntimeInvoker_t9_t125, t1768_m9213_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 47, 1, false, false, 2966, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9214_MI = 
{
	"GetInterfaces", (methodPointerType)&m9214, &t1768_TI, &t152_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 40, 0, false, false, 2967, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t931_0_0_0;
extern Il2CppType t939_0_0_0;
extern Il2CppType t1579_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t941_0_0_0;
static ParameterInfo t1768_m9215_ParameterInfos[] = 
{
	{"name", 0, 134221450, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221451, &EmptyCustomAttributesCache, &t931_0_0_0},
	{"binder", 2, 134221452, &EmptyCustomAttributesCache, &t939_0_0_0},
	{"callConvention", 3, 134221453, &EmptyCustomAttributesCache, &t1579_0_0_0},
	{"types", 4, 134221454, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 5, 134221455, &EmptyCustomAttributesCache, &t941_0_0_0},
};
extern Il2CppType t835_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9215_MI = 
{
	"GetMethodImpl", (methodPointerType)&m9215, &t1768_TI, &t835_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t125_t9_t9, t1768_m9215_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 53, 6, false, false, 2968, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t931_0_0_0;
static ParameterInfo t1768_m9216_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221456, &EmptyCustomAttributesCache, &t931_0_0_0},
};
extern Il2CppType t1576_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9216_MI = 
{
	"GetMethods", (methodPointerType)&m9216, &t1768_TI, &t1576_0_0_0, RuntimeInvoker_t9_t125, t1768_m9216_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 54, 1, false, false, 2969, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t931_0_0_0;
static ParameterInfo t1768_m9217_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221457, &EmptyCustomAttributesCache, &t931_0_0_0},
};
extern Il2CppType t935_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9217_MI = 
{
	"GetProperties", (methodPointerType)&m9217, &t1768_TI, &t935_0_0_0, RuntimeInvoker_t9_t125, t1768_m9217_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 55, 1, false, false, 2970, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t931_0_0_0;
extern Il2CppType t939_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t941_0_0_0;
static ParameterInfo t1768_m9218_ParameterInfos[] = 
{
	{"name", 0, 134221458, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221459, &EmptyCustomAttributesCache, &t931_0_0_0},
	{"binder", 2, 134221460, &EmptyCustomAttributesCache, &t939_0_0_0},
	{"returnType", 3, 134221461, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"types", 4, 134221462, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 5, 134221463, &EmptyCustomAttributesCache, &t941_0_0_0},
};
extern Il2CppType t844_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9218_MI = 
{
	"GetPropertyImpl", (methodPointerType)&m9218, &t1768_TI, &t844_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9, t1768_m9218_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 61, 6, false, false, 2971, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9219_MI = 
{
	"HasElementTypeImpl", (methodPointerType)&m9219, &t1768_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 64, 0, false, false, 2972, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t931_0_0_0;
extern Il2CppType t939_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t941_0_0_0;
extern Il2CppType t907_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1768_m9220_ParameterInfos[] = 
{
	{"name", 0, 134221464, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"invokeAttr", 1, 134221465, &EmptyCustomAttributesCache, &t931_0_0_0},
	{"binder", 2, 134221466, &EmptyCustomAttributesCache, &t939_0_0_0},
	{"target", 3, 134221467, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"args", 4, 134221468, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"modifiers", 5, 134221469, &EmptyCustomAttributesCache, &t941_0_0_0},
	{"culture", 6, 134221470, &EmptyCustomAttributesCache, &t907_0_0_0},
	{"namedParameters", 7, 134221471, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9220_MI = 
{
	"InvokeMember", (methodPointerType)&m9220, &t1768_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9_t9_t9, t1768_m9220_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 77, 8, false, false, 2973, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9221_MI = 
{
	"IsArrayImpl", (methodPointerType)&m9221, &t1768_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 65, 0, false, false, 2974, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9222_MI = 
{
	"IsByRefImpl", (methodPointerType)&m9222, &t1768_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 66, 0, false, false, 2975, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9223_MI = 
{
	"IsPointerImpl", (methodPointerType)&m9223, &t1768_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 67, 0, false, false, 2976, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9224_MI = 
{
	"IsPrimitiveImpl", (methodPointerType)&m9224, &t1768_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 68, 0, false, false, 2977, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9225_MI = 
{
	"IsValueTypeImpl", (methodPointerType)&m9225, &t1768_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 69, 0, false, false, 2978, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1768_m9226_ParameterInfos[] = 
{
	{"attributeType", 0, 134221472, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221473, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9226_MI = 
{
	"IsDefined", (methodPointerType)&m9226, &t1768_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1768_m9226_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 2979, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9227_MI = 
{
	"CreateNotSupportedException", (methodPointerType)&m9227, &t1768_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2980, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1768_MIs[] =
{
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
	&m9220_MI,
	&m9221_MI,
	&m9222_MI,
	&m9223_MI,
	&m9224_MI,
	&m9225_MI,
	&m9226_MI,
	&m9227_MI,
	NULL
};
extern Il2CppType t1760_0_0_1;
FieldInfo t1768_f8_FieldInfo = 
{
	"_tb", &t1760_0_0_1, &t1768_TI, offsetof(t1768, f8), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1768_f9_FieldInfo = 
{
	"_underlyingType", &t126_0_0_1, &t1768_TI, offsetof(t1768, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1768_FIs[] =
{
	&t1768_f8_FieldInfo,
	&t1768_f9_FieldInfo,
	NULL
};
extern MethodInfo m9194_MI;
static PropertyInfo t1768____Assembly_PropertyInfo = 
{
	&t1768_TI, "Assembly", &m9194_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9195_MI;
static PropertyInfo t1768____AssemblyQualifiedName_PropertyInfo = 
{
	&t1768_TI, "AssemblyQualifiedName", &m9195_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9196_MI;
static PropertyInfo t1768____BaseType_PropertyInfo = 
{
	&t1768_TI, "BaseType", &m9196_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9197_MI;
static PropertyInfo t1768____DeclaringType_PropertyInfo = 
{
	&t1768_TI, "DeclaringType", &m9197_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9198_MI;
static PropertyInfo t1768____FullName_PropertyInfo = 
{
	&t1768_TI, "FullName", &m9198_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9199_MI;
static PropertyInfo t1768____Module_PropertyInfo = 
{
	&t1768_TI, "Module", &m9199_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9200_MI;
static PropertyInfo t1768____Name_PropertyInfo = 
{
	&t1768_TI, "Name", &m9200_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9201_MI;
static PropertyInfo t1768____Namespace_PropertyInfo = 
{
	&t1768_TI, "Namespace", &m9201_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9202_MI;
static PropertyInfo t1768____ReflectedType_PropertyInfo = 
{
	&t1768_TI, "ReflectedType", &m9202_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9203_MI;
static PropertyInfo t1768____TypeHandle_PropertyInfo = 
{
	&t1768_TI, "TypeHandle", &m9203_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9204_MI;
static PropertyInfo t1768____UnderlyingSystemType_PropertyInfo = 
{
	&t1768_TI, "UnderlyingSystemType", &m9204_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1768_PIs[] =
{
	&t1768____Assembly_PropertyInfo,
	&t1768____AssemblyQualifiedName_PropertyInfo,
	&t1768____BaseType_PropertyInfo,
	&t1768____DeclaringType_PropertyInfo,
	&t1768____FullName_PropertyInfo,
	&t1768____Module_PropertyInfo,
	&t1768____Name_PropertyInfo,
	&t1768____Namespace_PropertyInfo,
	&t1768____ReflectedType_PropertyInfo,
	&t1768____TypeHandle_PropertyInfo,
	&t1768____UnderlyingSystemType_PropertyInfo,
	NULL
};
extern MethodInfo m7807_MI;
extern MethodInfo m7822_MI;
extern MethodInfo m7840_MI;
extern MethodInfo m9209_MI;
extern MethodInfo m9226_MI;
extern MethodInfo m7804_MI;
extern MethodInfo m9208_MI;
extern MethodInfo m7789_MI;
extern MethodInfo m7791_MI;
extern MethodInfo m7792_MI;
extern MethodInfo m4426_MI;
extern MethodInfo m7793_MI;
extern MethodInfo m7794_MI;
extern MethodInfo m7795_MI;
extern MethodInfo m7796_MI;
extern MethodInfo m7797_MI;
extern MethodInfo m7798_MI;
extern MethodInfo m7799_MI;
extern MethodInfo m7800_MI;
extern MethodInfo m4534_MI;
extern MethodInfo m7801_MI;
extern MethodInfo m7802_MI;
extern MethodInfo m7803_MI;
extern MethodInfo m7808_MI;
extern MethodInfo m7818_MI;
extern MethodInfo m7819_MI;
extern MethodInfo m9214_MI;
extern MethodInfo m4515_MI;
extern MethodInfo m7820_MI;
extern MethodInfo m7821_MI;
extern MethodInfo m9210_MI;
extern MethodInfo m9211_MI;
extern MethodInfo m9212_MI;
extern MethodInfo m9213_MI;
extern MethodInfo m7823_MI;
extern MethodInfo m7824_MI;
extern MethodInfo m7825_MI;
extern MethodInfo m4533_MI;
extern MethodInfo m7826_MI;
extern MethodInfo m9215_MI;
extern MethodInfo m9216_MI;
extern MethodInfo m9217_MI;
extern MethodInfo m7828_MI;
extern MethodInfo m7829_MI;
extern MethodInfo m7830_MI;
extern MethodInfo m7831_MI;
extern MethodInfo m7832_MI;
extern MethodInfo m9218_MI;
extern MethodInfo m9206_MI;
extern MethodInfo m9205_MI;
extern MethodInfo m9219_MI;
extern MethodInfo m9221_MI;
extern MethodInfo m9222_MI;
extern MethodInfo m9223_MI;
extern MethodInfo m9224_MI;
extern MethodInfo m9225_MI;
extern MethodInfo m7836_MI;
extern MethodInfo m7837_MI;
extern MethodInfo m4514_MI;
extern MethodInfo m7838_MI;
extern MethodInfo m7839_MI;
extern MethodInfo m4462_MI;
extern MethodInfo m9207_MI;
extern MethodInfo m9220_MI;
extern MethodInfo m7842_MI;
extern MethodInfo m7843_MI;
extern MethodInfo m7844_MI;
extern MethodInfo m7846_MI;
extern MethodInfo m7847_MI;
extern MethodInfo m4513_MI;
extern MethodInfo m7849_MI;
static Il2CppMethodReference t1768_VT[] =
{
	&m7807_MI,
	&m646_MI,
	&m7822_MI,
	&m7840_MI,
	&m9209_MI,
	&m9226_MI,
	&m9197_MI,
	&m7804_MI,
	&m9200_MI,
	&m9202_MI,
	&m9199_MI,
	&m9226_MI,
	&m9208_MI,
	&m9209_MI,
	&m9194_MI,
	&m9195_MI,
	&m7789_MI,
	&m9196_MI,
	&m9198_MI,
	&m7791_MI,
	&m7792_MI,
	&m4426_MI,
	&m7793_MI,
	&m7794_MI,
	&m7795_MI,
	&m7796_MI,
	&m7797_MI,
	&m7798_MI,
	&m7799_MI,
	&m7800_MI,
	&m4534_MI,
	&m7801_MI,
	&m7802_MI,
	&m7803_MI,
	&m9201_MI,
	&m9203_MI,
	&m9204_MI,
	&m7808_MI,
	&m7818_MI,
	&m7819_MI,
	&m9214_MI,
	&m4515_MI,
	&m7820_MI,
	&m7821_MI,
	&m9210_MI,
	&m9211_MI,
	&m9212_MI,
	&m9213_MI,
	&m7823_MI,
	&m7824_MI,
	&m7825_MI,
	&m4533_MI,
	&m7826_MI,
	&m9215_MI,
	&m9216_MI,
	&m9217_MI,
	&m7828_MI,
	&m7829_MI,
	&m7830_MI,
	&m7831_MI,
	&m7832_MI,
	&m9218_MI,
	&m9206_MI,
	&m9205_MI,
	&m9219_MI,
	&m9221_MI,
	&m9222_MI,
	&m9223_MI,
	&m9224_MI,
	&m9225_MI,
	&m7836_MI,
	&m7837_MI,
	&m4514_MI,
	&m7838_MI,
	&m7839_MI,
	&m4462_MI,
	&m9207_MI,
	&m9220_MI,
	&m7842_MI,
	&m7843_MI,
	&m7844_MI,
	&m7846_MI,
	&m7847_MI,
	&m4513_MI,
	&m7849_MI,
};
static bool t1768_VTIGM[] =
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
extern Il2CppType t2601_0_0_0;
static const Il2CppType* t1768_ITIs[] = 
{
	&t2601_0_0_0,
};
extern Il2CppType t2425_0_0_0;
extern Il2CppType t2426_0_0_0;
static Il2CppInterfaceOffsetPair t1768_IOs[] = 
{
	{ &t2425_0_0_0, 14},
	{ &t2426_0_0_0, 14},
	{ &t2136_0_0_0, 4},
	{ &t2427_0_0_0, 6},
	{ &t2601_0_0_0, 85},
};
extern TypeInfo t2601_TI;
void t1768_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1844 * tmp;
		tmp = (t1844 *)il2cpp_codegen_object_new (&t1844_TI);
		m9813(tmp, 0, &m9813_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1846 * tmp;
		tmp = (t1846 *)il2cpp_codegen_object_new (&t1846_TI);
		m9814(tmp, il2cpp_codegen_type_get_object(&t2601_0_0_0), &m9814_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t1768_CustomAttributesCacheGenerator_m9207(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1768__CustomAttributeCache = {
3,
NULL,
&t1768_CustomAttributesCacheGenerator
};
CustomAttributesCache t1768__CustomAttributeCache_m9207 = {
1,
NULL,
&t1768_CustomAttributesCacheGenerator_m9207
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1768_0_0_0;
extern Il2CppType t1768_1_0_0;
struct t1768;
extern CustomAttributesCache t1768__CustomAttributeCache;
extern CustomAttributesCache t1768__CustomAttributeCache_m9207;
const Il2CppTypeDefinitionMetadata t1768_DM = 
{
	NULL, NULL, t1768_ITIs, t1768_IOs, &t126_0_0_0, t1768_VT, t1768_VTIGM, NULL};
TypeInfo t1768_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EnumBuilder", "System.Reflection.Emit", t1768_MIs, t1768_PIs, t1768_FIs, NULL, &t1768_TI, NULL, &t1768__CustomAttributeCache, &t1768_0_0_0, &t1768_1_0_0, &t1768_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1768), sizeof (t1768), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 34, 11, 2, 0, 0, 85, 1, 5};
#include "t1769.h"
// Metadata Definition System.Reflection.Emit.FieldBuilder
extern TypeInfo t1769_TI;
#include "t1769MD.h"
extern Il2CppType t1771_0_0_0;
extern void* RuntimeInvoker_t1771 (MethodInfo* method, void* obj, void** args);
MethodInfo m9228_MI = 
{
	"get_Attributes", (methodPointerType)&m9228, &t1769_TI, &t1771_0_0_0, RuntimeInvoker_t1771, NULL, &EmptyCustomAttributesCache, 2246, 0, 14, 0, false, false, 2981, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9229_MI = 
{
	"get_DeclaringType", (methodPointerType)&m9229, &t1769_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2982, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t319_0_0_0;
extern void* RuntimeInvoker_t319 (MethodInfo* method, void* obj, void** args);
MethodInfo m9230_MI = 
{
	"get_FieldHandle", (methodPointerType)&m9230, &t1769_TI, &t319_0_0_0, RuntimeInvoker_t319, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 2983, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9231_MI = 
{
	"get_FieldType", (methodPointerType)&m9231, &t1769_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 16, 0, false, false, 2984, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9232_MI = 
{
	"get_Name", (methodPointerType)&m9232, &t1769_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2985, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9233_MI = 
{
	"get_ReflectedType", (methodPointerType)&m9233, &t1769_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2986, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1769_m9234_ParameterInfos[] = 
{
	{"inherit", 0, 134221474, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9234_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9234, &t1769_TI, &t158_0_0_0, RuntimeInvoker_t9_t186, t1769_m9234_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 2987, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1769_m9235_ParameterInfos[] = 
{
	{"attributeType", 0, 134221475, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221476, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9235_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9235, &t1769_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t186, t1769_m9235_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 2988, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1769_m9236_ParameterInfos[] = 
{
	{"obj", 0, 134221477, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9236_MI = 
{
	"GetValue", (methodPointerType)&m9236, &t1769_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1769_m9236_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 2989, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1769_m9237_ParameterInfos[] = 
{
	{"attributeType", 0, 134221478, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221479, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9237_MI = 
{
	"IsDefined", (methodPointerType)&m9237, &t1769_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1769_m9237_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 2990, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9238_MI = 
{
	"GetFieldOffset", (methodPointerType)&m9238, &t1769_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 195, 0, 25, 0, false, false, 2991, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t931_0_0_0;
extern Il2CppType t939_0_0_0;
extern Il2CppType t907_0_0_0;
static ParameterInfo t1769_m9239_ParameterInfos[] = 
{
	{"obj", 0, 134221480, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"val", 1, 134221481, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"invokeAttr", 2, 134221482, &EmptyCustomAttributesCache, &t931_0_0_0},
	{"binder", 3, 134221483, &EmptyCustomAttributesCache, &t939_0_0_0},
	{"culture", 4, 134221484, &EmptyCustomAttributesCache, &t907_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9239_MI = 
{
	"SetValue", (methodPointerType)&m9239, &t1769_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125_t9_t9, t1769_m9239_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 5, false, false, 2992, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1770_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9240_MI = 
{
	"get_UMarshal", (methodPointerType)&m9240, &t1769_TI, &t1770_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2243, 0, 26, 0, false, false, 2993, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9241_MI = 
{
	"CreateNotSupportedException", (methodPointerType)&m9241, &t1769_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2994, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1574_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9242_MI = 
{
	"get_Module", (methodPointerType)&m9242, &t1769_TI, &t1574_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 2995, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1769_MIs[] =
{
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
	NULL
};
extern Il2CppType t1771_0_0_1;
FieldInfo t1769_f0_FieldInfo = 
{
	"attrs", &t1771_0_0_1, &t1769_TI, offsetof(t1769, f0), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1769_f1_FieldInfo = 
{
	"type", &t126_0_0_1, &t1769_TI, offsetof(t1769, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1769_f2_FieldInfo = 
{
	"name", &t2_0_0_1, &t1769_TI, offsetof(t1769, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1760_0_0_3;
FieldInfo t1769_f3_FieldInfo = 
{
	"typeb", &t1760_0_0_3, &t1769_TI, offsetof(t1769, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1770_0_0_1;
FieldInfo t1769_f4_FieldInfo = 
{
	"marshal_info", &t1770_0_0_1, &t1769_TI, offsetof(t1769, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1769_FIs[] =
{
	&t1769_f0_FieldInfo,
	&t1769_f1_FieldInfo,
	&t1769_f2_FieldInfo,
	&t1769_f3_FieldInfo,
	&t1769_f4_FieldInfo,
	NULL
};
extern MethodInfo m9228_MI;
static PropertyInfo t1769____Attributes_PropertyInfo = 
{
	&t1769_TI, "Attributes", &m9228_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9229_MI;
static PropertyInfo t1769____DeclaringType_PropertyInfo = 
{
	&t1769_TI, "DeclaringType", &m9229_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9230_MI;
static PropertyInfo t1769____FieldHandle_PropertyInfo = 
{
	&t1769_TI, "FieldHandle", &m9230_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9231_MI;
static PropertyInfo t1769____FieldType_PropertyInfo = 
{
	&t1769_TI, "FieldType", &m9231_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9232_MI;
static PropertyInfo t1769____Name_PropertyInfo = 
{
	&t1769_TI, "Name", &m9232_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9233_MI;
static PropertyInfo t1769____ReflectedType_PropertyInfo = 
{
	&t1769_TI, "ReflectedType", &m9233_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9240_MI;
static PropertyInfo t1769____UMarshal_PropertyInfo = 
{
	&t1769_TI, "UMarshal", &m9240_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9242_MI;
static PropertyInfo t1769____Module_PropertyInfo = 
{
	&t1769_TI, "Module", &m9242_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1769_PIs[] =
{
	&t1769____Attributes_PropertyInfo,
	&t1769____DeclaringType_PropertyInfo,
	&t1769____FieldHandle_PropertyInfo,
	&t1769____FieldType_PropertyInfo,
	&t1769____Name_PropertyInfo,
	&t1769____ReflectedType_PropertyInfo,
	&t1769____UMarshal_PropertyInfo,
	&t1769____Module_PropertyInfo,
	NULL
};
extern MethodInfo m9235_MI;
extern MethodInfo m9237_MI;
extern MethodInfo m9564_MI;
extern MethodInfo m9234_MI;
extern MethodInfo m9236_MI;
extern MethodInfo m9565_MI;
extern MethodInfo m4437_MI;
extern MethodInfo m4444_MI;
extern MethodInfo m4438_MI;
extern MethodInfo m9566_MI;
extern MethodInfo m9239_MI;
extern MethodInfo m4461_MI;
extern MethodInfo m9238_MI;
static Il2CppMethodReference t1769_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9235_MI,
	&m9237_MI,
	&m9229_MI,
	&m9564_MI,
	&m9232_MI,
	&m9233_MI,
	&m9242_MI,
	&m9237_MI,
	&m9234_MI,
	&m9235_MI,
	&m9228_MI,
	&m9230_MI,
	&m9231_MI,
	&m9236_MI,
	&m9565_MI,
	&m4437_MI,
	&m4444_MI,
	&m4438_MI,
	&m9566_MI,
	&m9239_MI,
	&m4461_MI,
	&m9238_MI,
	&m9240_MI,
};
static bool t1769_VTIGM[] =
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
extern Il2CppType t2602_0_0_0;
static const Il2CppType* t1769_ITIs[] = 
{
	&t2602_0_0_0,
};
extern Il2CppType t2603_0_0_0;
static Il2CppInterfaceOffsetPair t1769_IOs[] = 
{
	{ &t2603_0_0_0, 14},
	{ &t2136_0_0_0, 4},
	{ &t2427_0_0_0, 6},
	{ &t2602_0_0_0, 27},
};
extern TypeInfo t2602_TI;
void t1769_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1844 * tmp;
		tmp = (t1844 *)il2cpp_codegen_object_new (&t1844_TI);
		m9813(tmp, 0, &m9813_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1846 * tmp;
		tmp = (t1846 *)il2cpp_codegen_object_new (&t1846_TI);
		m9814(tmp, il2cpp_codegen_type_get_object(&t2602_0_0_0), &m9814_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1769__CustomAttributeCache = {
3,
NULL,
&t1769_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1769_0_0_0;
extern Il2CppType t1769_1_0_0;
extern Il2CppType t837_0_0_0;
struct t1769;
extern CustomAttributesCache t1769__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1769_DM = 
{
	NULL, NULL, t1769_ITIs, t1769_IOs, &t837_0_0_0, t1769_VT, t1769_VTIGM, NULL};
TypeInfo t1769_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FieldBuilder", "System.Reflection.Emit", t1769_MIs, t1769_PIs, t1769_FIs, NULL, &t1769_TI, NULL, &t1769__CustomAttributeCache, &t1769_0_0_0, &t1769_1_0_0, &t1769_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1769), sizeof (t1769), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 15, 8, 5, 0, 0, 27, 1, 4};
#include "t1772.h"
// Metadata Definition System.Reflection.Emit.GenericTypeParameterBuilder
extern TypeInfo t1772_TI;
#include "t1772MD.h"
extern Il2CppType t126_0_0_0;
static ParameterInfo t1772_m9243_ParameterInfos[] = 
{
	{"c", 0, 134221485, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1772__CustomAttributeCache_m9243;
MethodInfo m9243_MI = 
{
	"IsSubclassOf", (methodPointerType)&m9243, &t1772_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1772_m9243_ParameterInfos, &t1772__CustomAttributeCache_m9243, 198, 0, 39, 1, false, false, 2996, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1577_0_0_0;
extern void* RuntimeInvoker_t1577 (MethodInfo* method, void* obj, void** args);
MethodInfo m9244_MI = 
{
	"GetAttributeFlagsImpl", (methodPointerType)&m9244, &t1772_TI, &t1577_0_0_0, RuntimeInvoker_t1577, NULL, &EmptyCustomAttributesCache, 196, 0, 63, 0, false, false, 2997, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t931_0_0_0;
extern Il2CppType t939_0_0_0;
extern Il2CppType t1579_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t941_0_0_0;
static ParameterInfo t1772_m9245_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221486, &EmptyCustomAttributesCache, &t931_0_0_0},
	{"binder", 1, 134221487, &EmptyCustomAttributesCache, &t939_0_0_0},
	{"callConvention", 2, 134221488, &EmptyCustomAttributesCache, &t1579_0_0_0},
	{"types", 3, 134221489, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 4, 134221490, &EmptyCustomAttributesCache, &t941_0_0_0},
};
extern Il2CppType t833_0_0_0;
extern void* RuntimeInvoker_t9_t125_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9245_MI = 
{
	"GetConstructorImpl", (methodPointerType)&m9245, &t1772_TI, &t833_0_0_0, RuntimeInvoker_t9_t125_t9_t125_t9_t9, t1772_m9245_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 62, 5, false, false, 2998, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t931_0_0_0;
static ParameterInfo t1772_m9246_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221491, &EmptyCustomAttributesCache, &t931_0_0_0},
};
extern Il2CppType t932_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1772__CustomAttributeCache_m9246;
MethodInfo m9246_MI = 
{
	"GetConstructors", (methodPointerType)&m9246, &t1772_TI, &t932_0_0_0, RuntimeInvoker_t9_t125, t1772_m9246_ParameterInfos, &t1772__CustomAttributeCache_m9246, 198, 0, 76, 1, false, false, 2999, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t931_0_0_0;
static ParameterInfo t1772_m9247_ParameterInfos[] = 
{
	{"name", 0, 134221492, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221493, &EmptyCustomAttributesCache, &t931_0_0_0},
};
extern Il2CppType t1575_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9247_MI = 
{
	"GetEvent", (methodPointerType)&m9247, &t1772_TI, &t1575_0_0_0, RuntimeInvoker_t9_t9_t125, t1772_m9247_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 45, 2, false, false, 3000, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t931_0_0_0;
static ParameterInfo t1772_m9248_ParameterInfos[] = 
{
	{"name", 0, 134221494, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221495, &EmptyCustomAttributesCache, &t931_0_0_0},
};
extern Il2CppType t837_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9248_MI = 
{
	"GetField", (methodPointerType)&m9248, &t1772_TI, &t837_0_0_0, RuntimeInvoker_t9_t9_t125, t1772_m9248_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 46, 2, false, false, 3001, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t931_0_0_0;
static ParameterInfo t1772_m9249_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221496, &EmptyCustomAttributesCache, &t931_0_0_0},
};
extern Il2CppType t936_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9249_MI = 
{
	"GetFields", (methodPointerType)&m9249, &t1772_TI, &t936_0_0_0, RuntimeInvoker_t9_t125, t1772_m9249_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 47, 1, false, false, 3002, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9250_MI = 
{
	"GetInterfaces", (methodPointerType)&m9250, &t1772_TI, &t152_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 40, 0, false, false, 3003, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t931_0_0_0;
static ParameterInfo t1772_m9251_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221497, &EmptyCustomAttributesCache, &t931_0_0_0},
};
extern Il2CppType t1576_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9251_MI = 
{
	"GetMethods", (methodPointerType)&m9251, &t1772_TI, &t1576_0_0_0, RuntimeInvoker_t9_t125, t1772_m9251_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 54, 1, false, false, 3004, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t931_0_0_0;
extern Il2CppType t939_0_0_0;
extern Il2CppType t1579_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t941_0_0_0;
static ParameterInfo t1772_m9252_ParameterInfos[] = 
{
	{"name", 0, 134221498, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221499, &EmptyCustomAttributesCache, &t931_0_0_0},
	{"binder", 2, 134221500, &EmptyCustomAttributesCache, &t939_0_0_0},
	{"callConvention", 3, 134221501, &EmptyCustomAttributesCache, &t1579_0_0_0},
	{"types", 4, 134221502, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 5, 134221503, &EmptyCustomAttributesCache, &t941_0_0_0},
};
extern Il2CppType t835_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9252_MI = 
{
	"GetMethodImpl", (methodPointerType)&m9252, &t1772_TI, &t835_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t125_t9_t9, t1772_m9252_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 53, 6, false, false, 3005, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t931_0_0_0;
static ParameterInfo t1772_m9253_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221504, &EmptyCustomAttributesCache, &t931_0_0_0},
};
extern Il2CppType t935_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9253_MI = 
{
	"GetProperties", (methodPointerType)&m9253, &t1772_TI, &t935_0_0_0, RuntimeInvoker_t9_t125, t1772_m9253_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 55, 1, false, false, 3006, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t931_0_0_0;
extern Il2CppType t939_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t941_0_0_0;
static ParameterInfo t1772_m9254_ParameterInfos[] = 
{
	{"name", 0, 134221505, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"bindingAttr", 1, 134221506, &EmptyCustomAttributesCache, &t931_0_0_0},
	{"binder", 2, 134221507, &EmptyCustomAttributesCache, &t939_0_0_0},
	{"returnType", 3, 134221508, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"types", 4, 134221509, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"modifiers", 5, 134221510, &EmptyCustomAttributesCache, &t941_0_0_0},
};
extern Il2CppType t844_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9254_MI = 
{
	"GetPropertyImpl", (methodPointerType)&m9254, &t1772_TI, &t844_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9, t1772_m9254_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 61, 6, false, false, 3007, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9255_MI = 
{
	"HasElementTypeImpl", (methodPointerType)&m9255, &t1772_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 64, 0, false, false, 3008, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1772_m9256_ParameterInfos[] = 
{
	{"c", 0, 134221511, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9256_MI = 
{
	"IsAssignableFrom", (methodPointerType)&m9256, &t1772_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1772_m9256_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 41, 1, false, false, 3009, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1772_m9257_ParameterInfos[] = 
{
	{"o", 0, 134221512, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9257_MI = 
{
	"IsInstanceOfType", (methodPointerType)&m9257, &t1772_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1772_m9257_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 42, 1, false, false, 3010, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9258_MI = 
{
	"IsArrayImpl", (methodPointerType)&m9258, &t1772_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 65, 0, false, false, 3011, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9259_MI = 
{
	"IsByRefImpl", (methodPointerType)&m9259, &t1772_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 66, 0, false, false, 3012, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9260_MI = 
{
	"IsPointerImpl", (methodPointerType)&m9260, &t1772_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 67, 0, false, false, 3013, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9261_MI = 
{
	"IsPrimitiveImpl", (methodPointerType)&m9261, &t1772_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 68, 0, false, false, 3014, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9262_MI = 
{
	"IsValueTypeImpl", (methodPointerType)&m9262, &t1772_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 196, 0, 69, 0, false, false, 3015, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t931_0_0_0;
extern Il2CppType t939_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t941_0_0_0;
extern Il2CppType t907_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1772_m9263_ParameterInfos[] = 
{
	{"name", 0, 134221513, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"invokeAttr", 1, 134221514, &EmptyCustomAttributesCache, &t931_0_0_0},
	{"binder", 2, 134221515, &EmptyCustomAttributesCache, &t939_0_0_0},
	{"target", 3, 134221516, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"args", 4, 134221517, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"modifiers", 5, 134221518, &EmptyCustomAttributesCache, &t941_0_0_0},
	{"culture", 6, 134221519, &EmptyCustomAttributesCache, &t907_0_0_0},
	{"namedParameters", 7, 134221520, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9263_MI = 
{
	"InvokeMember", (methodPointerType)&m9263, &t1772_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t125_t9_t9_t9_t9_t9_t9, t1772_m9263_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 77, 8, false, false, 3016, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9264_MI = 
{
	"GetElementType", (methodPointerType)&m9264, &t1772_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 44, 0, false, false, 3017, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9265_MI = 
{
	"get_UnderlyingSystemType", (methodPointerType)&m9265, &t1772_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 36, 0, false, false, 3018, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1351_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9266_MI = 
{
	"get_Assembly", (methodPointerType)&m9266, &t1772_TI, &t1351_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 14, 0, false, false, 3019, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9267_MI = 
{
	"get_AssemblyQualifiedName", (methodPointerType)&m9267, &t1772_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 3020, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9268_MI = 
{
	"get_BaseType", (methodPointerType)&m9268, &t1772_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 17, 0, false, false, 3021, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9269_MI = 
{
	"get_FullName", (methodPointerType)&m9269, &t1772_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 3022, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1772_m9270_ParameterInfos[] = 
{
	{"attributeType", 0, 134221521, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221522, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9270_MI = 
{
	"IsDefined", (methodPointerType)&m9270, &t1772_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1772_m9270_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 3023, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1772_m9271_ParameterInfos[] = 
{
	{"inherit", 0, 134221523, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9271_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9271, &t1772_TI, &t158_0_0_0, RuntimeInvoker_t9_t186, t1772_m9271_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 3024, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1772_m9272_ParameterInfos[] = 
{
	{"attributeType", 0, 134221524, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"inherit", 1, 134221525, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9272_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m9272, &t1772_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t186, t1772_m9272_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 3025, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9273_MI = 
{
	"get_Name", (methodPointerType)&m9273, &t1772_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 3026, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9274_MI = 
{
	"get_Namespace", (methodPointerType)&m9274, &t1772_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 34, 0, false, false, 3027, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1574_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9275_MI = 
{
	"get_Module", (methodPointerType)&m9275, &t1772_TI, &t1574_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 3028, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9276_MI = 
{
	"get_DeclaringType", (methodPointerType)&m9276, &t1772_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 3029, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9277_MI = 
{
	"get_ReflectedType", (methodPointerType)&m9277, &t1772_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 3030, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t127_0_0_0;
extern void* RuntimeInvoker_t127 (MethodInfo* method, void* obj, void** args);
MethodInfo m9278_MI = 
{
	"get_TypeHandle", (methodPointerType)&m9278, &t1772_TI, &t127_0_0_0, RuntimeInvoker_t127, NULL, &EmptyCustomAttributesCache, 2246, 0, 35, 0, false, false, 3031, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9279_MI = 
{
	"GetGenericArguments", (methodPointerType)&m9279, &t1772_TI, &t152_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 78, 0, false, false, 3032, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9280_MI = 
{
	"GetGenericTypeDefinition", (methodPointerType)&m9280, &t1772_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 81, 0, false, false, 3033, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9281_MI = 
{
	"get_ContainsGenericParameters", (methodPointerType)&m9281, &t1772_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 79, 0, false, false, 3034, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9282_MI = 
{
	"get_IsGenericParameter", (methodPointerType)&m9282, &t1772_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 84, 0, false, false, 3035, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9283_MI = 
{
	"get_IsGenericType", (methodPointerType)&m9283, &t1772_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 82, 0, false, false, 3036, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m9284_MI = 
{
	"get_IsGenericTypeDefinition", (methodPointerType)&m9284, &t1772_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 80, 0, false, false, 3037, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9285_MI = 
{
	"not_supported", (methodPointerType)&m9285, &t1772_TI, &t138_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3038, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9286_MI = 
{
	"ToString", (methodPointerType)&m9286, &t1772_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3039, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1772_m9287_ParameterInfos[] = 
{
	{"o", 0, 134221526, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1772__CustomAttributeCache_m9287;
MethodInfo m9287_MI = 
{
	"Equals", (methodPointerType)&m9287, &t1772_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1772_m9287_ParameterInfos, &t1772__CustomAttributeCache_m9287, 198, 0, 0, 1, false, false, 3040, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1772__CustomAttributeCache_m9288;
MethodInfo m9288_MI = 
{
	"GetHashCode", (methodPointerType)&m9288, &t1772_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t1772__CustomAttributeCache_m9288, 198, 0, 2, 0, false, false, 3041, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t152_0_0_0;
extern CustomAttributesCache t1772__CustomAttributeCache_t1772_m9289_Arg0_ParameterInfo;
static ParameterInfo t1772_m9289_ParameterInfos[] = 
{
	{"typeArguments", 0, 134221527, &t1772__CustomAttributeCache_t1772_m9289_Arg0_ParameterInfo, &t152_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1772__CustomAttributeCache_m9289;
MethodInfo m9289_MI = 
{
	"MakeGenericType", (methodPointerType)&m9289, &t1772_TI, &t126_0_0_0, RuntimeInvoker_t9_t9, t1772_m9289_ParameterInfos, &t1772__CustomAttributeCache_m9289, 198, 0, 83, 1, false, false, 3042, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1772_MIs[] =
{
	&m9243_MI,
	&m9244_MI,
	&m9245_MI,
	&m9246_MI,
	&m9247_MI,
	&m9248_MI,
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
	&m9274_MI,
	&m9275_MI,
	&m9276_MI,
	&m9277_MI,
	&m9278_MI,
	&m9279_MI,
	&m9280_MI,
	&m9281_MI,
	&m9282_MI,
	&m9283_MI,
	&m9284_MI,
	&m9285_MI,
	&m9286_MI,
	&m9287_MI,
	&m9288_MI,
	&m9289_MI,
	NULL
};
extern Il2CppType t1760_0_0_1;
FieldInfo t1772_f8_FieldInfo = 
{
	"tbuilder", &t1760_0_0_1, &t1772_TI, offsetof(t1772, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1773_0_0_1;
FieldInfo t1772_f9_FieldInfo = 
{
	"mbuilder", &t1773_0_0_1, &t1772_TI, offsetof(t1772, f9), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1772_f10_FieldInfo = 
{
	"name", &t2_0_0_1, &t1772_TI, offsetof(t1772, f10), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1772_f11_FieldInfo = 
{
	"base_type", &t126_0_0_1, &t1772_TI, offsetof(t1772, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1772_FIs[] =
{
	&t1772_f8_FieldInfo,
	&t1772_f9_FieldInfo,
	&t1772_f10_FieldInfo,
	&t1772_f11_FieldInfo,
	NULL
};
extern MethodInfo m9265_MI;
static PropertyInfo t1772____UnderlyingSystemType_PropertyInfo = 
{
	&t1772_TI, "UnderlyingSystemType", &m9265_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9266_MI;
static PropertyInfo t1772____Assembly_PropertyInfo = 
{
	&t1772_TI, "Assembly", &m9266_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9267_MI;
static PropertyInfo t1772____AssemblyQualifiedName_PropertyInfo = 
{
	&t1772_TI, "AssemblyQualifiedName", &m9267_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9268_MI;
static PropertyInfo t1772____BaseType_PropertyInfo = 
{
	&t1772_TI, "BaseType", &m9268_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9269_MI;
static PropertyInfo t1772____FullName_PropertyInfo = 
{
	&t1772_TI, "FullName", &m9269_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9273_MI;
static PropertyInfo t1772____Name_PropertyInfo = 
{
	&t1772_TI, "Name", &m9273_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9274_MI;
static PropertyInfo t1772____Namespace_PropertyInfo = 
{
	&t1772_TI, "Namespace", &m9274_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9275_MI;
static PropertyInfo t1772____Module_PropertyInfo = 
{
	&t1772_TI, "Module", &m9275_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9276_MI;
static PropertyInfo t1772____DeclaringType_PropertyInfo = 
{
	&t1772_TI, "DeclaringType", &m9276_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9277_MI;
static PropertyInfo t1772____ReflectedType_PropertyInfo = 
{
	&t1772_TI, "ReflectedType", &m9277_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9278_MI;
static PropertyInfo t1772____TypeHandle_PropertyInfo = 
{
	&t1772_TI, "TypeHandle", &m9278_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9281_MI;
static PropertyInfo t1772____ContainsGenericParameters_PropertyInfo = 
{
	&t1772_TI, "ContainsGenericParameters", &m9281_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9282_MI;
static PropertyInfo t1772____IsGenericParameter_PropertyInfo = 
{
	&t1772_TI, "IsGenericParameter", &m9282_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9283_MI;
static PropertyInfo t1772____IsGenericType_PropertyInfo = 
{
	&t1772_TI, "IsGenericType", &m9283_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m9284_MI;
static PropertyInfo t1772____IsGenericTypeDefinition_PropertyInfo = 
{
	&t1772_TI, "IsGenericTypeDefinition", &m9284_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1772_PIs[] =
{
	&t1772____UnderlyingSystemType_PropertyInfo,
	&t1772____Assembly_PropertyInfo,
	&t1772____AssemblyQualifiedName_PropertyInfo,
	&t1772____BaseType_PropertyInfo,
	&t1772____FullName_PropertyInfo,
	&t1772____Name_PropertyInfo,
	&t1772____Namespace_PropertyInfo,
	&t1772____Module_PropertyInfo,
	&t1772____DeclaringType_PropertyInfo,
	&t1772____ReflectedType_PropertyInfo,
	&t1772____TypeHandle_PropertyInfo,
	&t1772____ContainsGenericParameters_PropertyInfo,
	&t1772____IsGenericParameter_PropertyInfo,
	&t1772____IsGenericType_PropertyInfo,
	&t1772____IsGenericTypeDefinition_PropertyInfo,
	NULL
};
extern MethodInfo m9287_MI;
extern MethodInfo m9288_MI;
extern MethodInfo m9286_MI;
extern MethodInfo m9272_MI;
extern MethodInfo m9270_MI;
extern MethodInfo m9271_MI;
extern MethodInfo m9243_MI;
extern MethodInfo m9250_MI;
extern MethodInfo m9256_MI;
extern MethodInfo m9257_MI;
extern MethodInfo m9264_MI;
extern MethodInfo m9247_MI;
extern MethodInfo m9248_MI;
extern MethodInfo m9249_MI;
extern MethodInfo m9252_MI;
extern MethodInfo m9251_MI;
extern MethodInfo m9253_MI;
extern MethodInfo m9254_MI;
extern MethodInfo m9245_MI;
extern MethodInfo m9244_MI;
extern MethodInfo m9255_MI;
extern MethodInfo m9258_MI;
extern MethodInfo m9259_MI;
extern MethodInfo m9260_MI;
extern MethodInfo m9261_MI;
extern MethodInfo m9262_MI;
extern MethodInfo m9246_MI;
extern MethodInfo m9263_MI;
extern MethodInfo m9279_MI;
extern MethodInfo m9280_MI;
extern MethodInfo m9289_MI;
static Il2CppMethodReference t1772_VT[] =
{
	&m9287_MI,
	&m646_MI,
	&m9288_MI,
	&m9286_MI,
	&m9272_MI,
	&m9270_MI,
	&m9276_MI,
	&m7804_MI,
	&m9273_MI,
	&m9277_MI,
	&m9275_MI,
	&m9270_MI,
	&m9271_MI,
	&m9272_MI,
	&m9266_MI,
	&m9267_MI,
	&m7789_MI,
	&m9268_MI,
	&m9269_MI,
	&m7791_MI,
	&m7792_MI,
	&m4426_MI,
	&m7793_MI,
	&m7794_MI,
	&m7795_MI,
	&m7796_MI,
	&m7797_MI,
	&m7798_MI,
	&m7799_MI,
	&m7800_MI,
	&m4534_MI,
	&m7801_MI,
	&m7802_MI,
	&m7803_MI,
	&m9274_MI,
	&m9278_MI,
	&m9265_MI,
	&m7808_MI,
	&m7818_MI,
	&m9243_MI,
	&m9250_MI,
	&m9256_MI,
	&m9257_MI,
	&m7821_MI,
	&m9264_MI,
	&m9247_MI,
	&m9248_MI,
	&m9249_MI,
	&m7823_MI,
	&m7824_MI,
	&m7825_MI,
	&m4533_MI,
	&m7826_MI,
	&m9252_MI,
	&m9251_MI,
	&m9253_MI,
	&m7828_MI,
	&m7829_MI,
	&m7830_MI,
	&m7831_MI,
	&m7832_MI,
	&m9254_MI,
	&m9245_MI,
	&m9244_MI,
	&m9255_MI,
	&m9258_MI,
	&m9259_MI,
	&m9260_MI,
	&m9261_MI,
	&m9262_MI,
	&m7836_MI,
	&m7837_MI,
	&m4514_MI,
	&m7838_MI,
	&m7839_MI,
	&m4462_MI,
	&m9246_MI,
	&m9263_MI,
	&m9279_MI,
	&m9281_MI,
	&m9284_MI,
	&m9280_MI,
	&m9283_MI,
	&m9289_MI,
	&m9282_MI,
};
static bool t1772_VTIGM[] =
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
static Il2CppInterfaceOffsetPair t1772_IOs[] = 
{
	{ &t2425_0_0_0, 14},
	{ &t2426_0_0_0, 14},
	{ &t2136_0_0_0, 4},
	{ &t2427_0_0_0, 6},
};
void t1772_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1772_CustomAttributesCacheGenerator_m9243(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1772_CustomAttributesCacheGenerator_m9246(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1772_CustomAttributesCacheGenerator_m9287(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7890(tmp, &m7890_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1772_CustomAttributesCacheGenerator_m9288(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7890(tmp, &m7890_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1772_CustomAttributesCacheGenerator_m9289(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7890(tmp, &m7890_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t344_TI;
#include "t344.h"
#include "t344MD.h"
extern MethodInfo m1268_MI;
void t1772_CustomAttributesCacheGenerator_t1772_m9289_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t344 * tmp;
		tmp = (t344 *)il2cpp_codegen_object_new (&t344_TI);
		m1268(tmp, &m1268_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1772__CustomAttributeCache = {
1,
NULL,
&t1772_CustomAttributesCacheGenerator
};
CustomAttributesCache t1772__CustomAttributeCache_m9243 = {
1,
NULL,
&t1772_CustomAttributesCacheGenerator_m9243
};
CustomAttributesCache t1772__CustomAttributeCache_m9246 = {
1,
NULL,
&t1772_CustomAttributesCacheGenerator_m9246
};
CustomAttributesCache t1772__CustomAttributeCache_m9287 = {
1,
NULL,
&t1772_CustomAttributesCacheGenerator_m9287
};
CustomAttributesCache t1772__CustomAttributeCache_m9288 = {
1,
NULL,
&t1772_CustomAttributesCacheGenerator_m9288
};
CustomAttributesCache t1772__CustomAttributeCache_m9289 = {
1,
NULL,
&t1772_CustomAttributesCacheGenerator_m9289
};
CustomAttributesCache t1772__CustomAttributeCache_t1772_m9289_Arg0_ParameterInfo = {
1,
NULL,
&t1772_CustomAttributesCacheGenerator_t1772_m9289_Arg0_ParameterInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1772_0_0_0;
extern Il2CppType t1772_1_0_0;
struct t1772;
extern CustomAttributesCache t1772__CustomAttributeCache;
extern CustomAttributesCache t1772__CustomAttributeCache_m9243;
extern CustomAttributesCache t1772__CustomAttributeCache_m9246;
extern CustomAttributesCache t1772__CustomAttributeCache_m9287;
extern CustomAttributesCache t1772__CustomAttributeCache_m9288;
extern CustomAttributesCache t1772__CustomAttributeCache_m9289;
const Il2CppTypeDefinitionMetadata t1772_DM = 
{
	NULL, NULL, NULL, t1772_IOs, &t126_0_0_0, t1772_VT, t1772_VTIGM, NULL};
TypeInfo t1772_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericTypeParameterBuilder", "System.Reflection.Emit", t1772_MIs, t1772_PIs, t1772_FIs, NULL, &t1772_TI, NULL, &t1772__CustomAttributeCache, &t1772_0_0_0, &t1772_1_0_0, &t1772_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1772), sizeof (t1772), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 47, 15, 4, 0, 0, 85, 0, 4};
#include "t1774.h"
// Metadata Definition System.Reflection.Emit.ILTokenInfo
extern TypeInfo t1774_TI;
#include "t1774MD.h"
static MethodInfo* t1774_MIs[] =
{
	NULL
};
extern Il2CppType t567_0_0_6;
FieldInfo t1774_f0_FieldInfo = 
{
	"member", &t567_0_0_6, &t1774_TI, offsetof(t1774, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1774_f1_FieldInfo = 
{
	"code_pos", &t125_0_0_6, &t1774_TI, offsetof(t1774, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1774_FIs[] =
{
	&t1774_f0_FieldInfo,
	&t1774_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1774_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1774_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1774_0_0_0;
extern Il2CppType t1774_1_0_0;
const Il2CppTypeDefinitionMetadata t1774_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1774_VT, t1774_VTIGM, NULL};
TypeInfo t1774_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ILTokenInfo", "System.Reflection.Emit", t1774_MIs, NULL, t1774_FIs, NULL, &t1774_TI, NULL, &EmptyCustomAttributesCache, &t1774_0_0_0, &t1774_1_0_0, &t1774_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1774)+ sizeof (Il2CppObject), sizeof (t1774)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048840, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 2, 0, 0, 4, 0, 0};
// Metadata Definition System.Reflection.Emit.TokenGenerator
extern TypeInfo t1781_TI;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1781_m12052_ParameterInfos[] = 
{
	{"str", 0, 134221528, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12052_MI = 
{
	"GetToken", NULL, &t1781_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1781_m12052_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 3043, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t567_0_0_0;
extern Il2CppType t567_0_0_0;
static ParameterInfo t1781_m12051_ParameterInfos[] = 
{
	{"member", 0, 134221529, &EmptyCustomAttributesCache, &t567_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12051_MI = 
{
	"GetToken", NULL, &t1781_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1781_m12051_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, false, 3044, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t835_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t1781_m12053_ParameterInfos[] = 
{
	{"method", 0, 134221530, &EmptyCustomAttributesCache, &t835_0_0_0},
	{"opt_param_types", 1, 134221531, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12053_MI = 
{
	"GetToken", NULL, &t1781_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1781_m12053_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 2, false, false, 3045, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1781_MIs[] =
{
	&m12052_MI,
	&m12051_MI,
	&m12053_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1781_0_0_0;
extern Il2CppType t1781_1_0_0;
struct t1781;
const Il2CppTypeDefinitionMetadata t1781_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1781_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TokenGenerator", "System.Reflection.Emit", t1781_MIs, NULL, NULL, NULL, &t1781_TI, NULL, &EmptyCustomAttributesCache, &t1781_0_0_0, &t1781_1_0_0, &t1781_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 160, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 0, 0, 0};
#include "t1775.h"
// Metadata Definition System.Reflection.Emit.ILGenerator/LabelFixup
extern TypeInfo t1775_TI;
#include "t1775MD.h"
static MethodInfo* t1775_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_6;
FieldInfo t1775_f0_FieldInfo = 
{
	"offset", &t125_0_0_6, &t1775_TI, offsetof(t1775, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1775_f1_FieldInfo = 
{
	"pos", &t125_0_0_6, &t1775_TI, offsetof(t1775, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1775_f2_FieldInfo = 
{
	"label_idx", &t125_0_0_6, &t1775_TI, offsetof(t1775, f2) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1775_FIs[] =
{
	&t1775_f0_FieldInfo,
	&t1775_f1_FieldInfo,
	&t1775_f2_FieldInfo,
	NULL
};
static Il2CppMethodReference t1775_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1775_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1775_0_0_0;
extern Il2CppType t1775_1_0_0;
extern TypeInfo t1759_TI;
extern Il2CppType t1759_0_0_0;
const Il2CppTypeDefinitionMetadata t1775_DM = 
{
	&t1759_0_0_0, NULL, NULL, NULL, &t117_0_0_0, t1775_VT, t1775_VTIGM, NULL};
TypeInfo t1775_TI = 
{
	&g_mscorlib_dll_Image, NULL, "LabelFixup", "", t1775_MIs, NULL, t1775_FIs, NULL, &t1775_TI, NULL, &EmptyCustomAttributesCache, &t1775_0_0_0, &t1775_1_0_0, &t1775_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1775)+ sizeof (Il2CppObject), sizeof (t1775)+ sizeof (Il2CppObject), 0, sizeof(t1775 ), 0, 0, -1, 1048843, 0, 0, true, false, false, false, false, false, false, false, false, true, 0, 0, 3, 0, 0, 4, 0, 0};
#include "t1776.h"
// Metadata Definition System.Reflection.Emit.ILGenerator/LabelData
extern TypeInfo t1776_TI;
#include "t1776MD.h"
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1776_m9290_ParameterInfos[] = 
{
	{"addr", 0, 134221570, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"maxStack", 1, 134221571, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9290_MI = 
{
	".ctor", (methodPointerType)&m9290, &t1776_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t125, t1776_m9290_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3071, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1776_MIs[] =
{
	&m9290_MI,
	NULL
};
extern Il2CppType t125_0_0_6;
FieldInfo t1776_f0_FieldInfo = 
{
	"addr", &t125_0_0_6, &t1776_TI, offsetof(t1776, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1776_f1_FieldInfo = 
{
	"maxStack", &t125_0_0_6, &t1776_TI, offsetof(t1776, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1776_FIs[] =
{
	&t1776_f0_FieldInfo,
	&t1776_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1776_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1776_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1776_0_0_0;
extern Il2CppType t1776_1_0_0;
const Il2CppTypeDefinitionMetadata t1776_DM = 
{
	&t1759_0_0_0, NULL, NULL, NULL, &t117_0_0_0, t1776_VT, t1776_VTIGM, NULL};
TypeInfo t1776_TI = 
{
	&g_mscorlib_dll_Image, NULL, "LabelData", "", t1776_MIs, NULL, t1776_FIs, NULL, &t1776_TI, NULL, &EmptyCustomAttributesCache, &t1776_0_0_0, &t1776_1_0_0, &t1776_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1776)+ sizeof (Il2CppObject), sizeof (t1776)+ sizeof (Il2CppObject), 0, sizeof(t1776 ), 0, 0, -1, 1048843, 0, 0, true, false, false, false, false, false, false, false, false, true, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t1759.h"
// Metadata Definition System.Reflection.Emit.ILGenerator
#include "t1759MD.h"
extern Il2CppType t1574_0_0_0;
extern Il2CppType t1574_0_0_0;
extern Il2CppType t1781_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1759_m9291_ParameterInfos[] = 
{
	{"m", 0, 134221532, &EmptyCustomAttributesCache, &t1574_0_0_0},
	{"token_gen", 1, 134221533, &EmptyCustomAttributesCache, &t1781_0_0_0},
	{"size", 2, 134221534, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9291_MI = 
{
	".ctor", (methodPointerType)&m9291, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1759_m9291_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 3, false, false, 3046, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9292_MI = 
{
	".cctor", (methodPointerType)&m9292, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3047, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t567_0_0_0;
static ParameterInfo t1759_m9293_ParameterInfos[] = 
{
	{"mi", 0, 134221535, &EmptyCustomAttributesCache, &t567_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9293_MI = 
{
	"add_token_fixup", (methodPointerType)&m9293, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1759_m9293_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3048, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1759_m9294_ParameterInfos[] = 
{
	{"nbytes", 0, 134221536, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9294_MI = 
{
	"make_room", (methodPointerType)&m9294, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1759_m9294_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3049, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1759_m9295_ParameterInfos[] = 
{
	{"val", 0, 134221537, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9295_MI = 
{
	"emit_int", (methodPointerType)&m9295, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1759_m9295_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3050, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1783_0_0_0;
extern Il2CppType t1783_0_0_0;
static ParameterInfo t1759_m9296_ParameterInfos[] = 
{
	{"opcode", 0, 134221538, &EmptyCustomAttributesCache, &t1783_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1783 (MethodInfo* method, void* obj, void** args);
MethodInfo m9296_MI = 
{
	"ll_emit", (methodPointerType)&m9296, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t1783, t1759_m9296_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3051, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1783_0_0_0;
static ParameterInfo t1759_m9297_ParameterInfos[] = 
{
	{"opcode", 0, 134221539, &EmptyCustomAttributesCache, &t1783_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t1783 (MethodInfo* method, void* obj, void** args);
MethodInfo m9297_MI = 
{
	"target_len", (methodPointerType)&m9297, &t1759_TI, &t125_0_0_0, RuntimeInvoker_t125_t1783, t1759_m9297_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 3052, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1759_m9298_ParameterInfos[] = 
{
	{"localType", 0, 134221540, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1782_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9298_MI = 
{
	"DeclareLocal", (methodPointerType)&m9298, &t1759_TI, &t1782_0_0_0, RuntimeInvoker_t9_t9, t1759_m9298_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 4, 1, false, false, 3053, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1759_m9299_ParameterInfos[] = 
{
	{"localType", 0, 134221541, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"pinned", 1, 134221542, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1782_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9299_MI = 
{
	"DeclareLocal", (methodPointerType)&m9299, &t1759_TI, &t1782_0_0_0, RuntimeInvoker_t9_t9_t186, t1759_m9299_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 2, false, false, 3054, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1784_0_0_0;
extern void* RuntimeInvoker_t1784 (MethodInfo* method, void* obj, void** args);
MethodInfo m9300_MI = 
{
	"DefineLabel", (methodPointerType)&m9300, &t1759_TI, &t1784_0_0_0, RuntimeInvoker_t1784, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 3055, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1783_0_0_0;
static ParameterInfo t1759_m9301_ParameterInfos[] = 
{
	{"opcode", 0, 134221543, &EmptyCustomAttributesCache, &t1783_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1783 (MethodInfo* method, void* obj, void** args);
MethodInfo m9301_MI = 
{
	"Emit", (methodPointerType)&m9301, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t1783, t1759_m9301_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 1, false, false, 3056, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1783_0_0_0;
extern Il2CppType t582_0_0_0;
static ParameterInfo t1759_m9302_ParameterInfos[] = 
{
	{"opcode", 0, 134221544, &EmptyCustomAttributesCache, &t1783_0_0_0},
	{"arg", 1, 134221545, &EmptyCustomAttributesCache, &t582_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1783_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m9302_MI = 
{
	"Emit", (methodPointerType)&m9302, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t1783_t186, t1759_m9302_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 2, false, false, 3057, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1783_0_0_0;
extern Il2CppType t833_0_0_0;
static ParameterInfo t1759_m9303_ParameterInfos[] = 
{
	{"opcode", 0, 134221546, &EmptyCustomAttributesCache, &t1783_0_0_0},
	{"con", 1, 134221547, &EmptyCustomAttributesCache, &t833_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1783_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1759__CustomAttributeCache_m9303;
MethodInfo m9303_MI = 
{
	"Emit", (methodPointerType)&m9303, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t1783_t9, t1759_m9303_ParameterInfos, &t1759__CustomAttributeCache_m9303, 454, 0, 9, 2, false, false, 3058, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1783_0_0_0;
extern Il2CppType t837_0_0_0;
static ParameterInfo t1759_m9304_ParameterInfos[] = 
{
	{"opcode", 0, 134221548, &EmptyCustomAttributesCache, &t1783_0_0_0},
	{"field", 1, 134221549, &EmptyCustomAttributesCache, &t837_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1783_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9304_MI = 
{
	"Emit", (methodPointerType)&m9304, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t1783_t9, t1759_m9304_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 2, false, false, 3059, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1783_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1759_m9305_ParameterInfos[] = 
{
	{"opcode", 0, 134221550, &EmptyCustomAttributesCache, &t1783_0_0_0},
	{"arg", 1, 134221551, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1783_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9305_MI = 
{
	"Emit", (methodPointerType)&m9305, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t1783_t125, t1759_m9305_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 2, false, false, 3060, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1783_0_0_0;
extern Il2CppType t1784_0_0_0;
extern Il2CppType t1784_0_0_0;
static ParameterInfo t1759_m9306_ParameterInfos[] = 
{
	{"opcode", 0, 134221552, &EmptyCustomAttributesCache, &t1783_0_0_0},
	{"label", 1, 134221553, &EmptyCustomAttributesCache, &t1784_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1783_t1784 (MethodInfo* method, void* obj, void** args);
MethodInfo m9306_MI = 
{
	"Emit", (methodPointerType)&m9306, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t1783_t1784, t1759_m9306_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 12, 2, false, false, 3061, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1783_0_0_0;
extern Il2CppType t1782_0_0_0;
extern Il2CppType t1782_0_0_0;
static ParameterInfo t1759_m9307_ParameterInfos[] = 
{
	{"opcode", 0, 134221554, &EmptyCustomAttributesCache, &t1783_0_0_0},
	{"local", 1, 134221555, &EmptyCustomAttributesCache, &t1782_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1783_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9307_MI = 
{
	"Emit", (methodPointerType)&m9307, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t1783_t9, t1759_m9307_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 2, false, false, 3062, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1783_0_0_0;
extern Il2CppType t835_0_0_0;
static ParameterInfo t1759_m9308_ParameterInfos[] = 
{
	{"opcode", 0, 134221556, &EmptyCustomAttributesCache, &t1783_0_0_0},
	{"meth", 1, 134221557, &EmptyCustomAttributesCache, &t835_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1783_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9308_MI = 
{
	"Emit", (methodPointerType)&m9308, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t1783_t9, t1759_m9308_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 2, false, false, 3063, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1783_0_0_0;
extern Il2CppType t835_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1759_m9309_ParameterInfos[] = 
{
	{"opcode", 0, 134221558, &EmptyCustomAttributesCache, &t1783_0_0_0},
	{"method", 1, 134221559, &EmptyCustomAttributesCache, &t835_0_0_0},
	{"token", 2, 134221560, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1783_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9309_MI = 
{
	"Emit", (methodPointerType)&m9309, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t1783_t9_t125, t1759_m9309_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 3064, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1783_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1759_m9310_ParameterInfos[] = 
{
	{"opcode", 0, 134221561, &EmptyCustomAttributesCache, &t1783_0_0_0},
	{"str", 1, 134221562, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1783_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9310_MI = 
{
	"Emit", (methodPointerType)&m9310, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t1783_t9, t1759_m9310_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 15, 2, false, false, 3065, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1783_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1759_m9311_ParameterInfos[] = 
{
	{"opcode", 0, 134221563, &EmptyCustomAttributesCache, &t1783_0_0_0},
	{"cls", 1, 134221564, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1783_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9311_MI = 
{
	"Emit", (methodPointerType)&m9311, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t1783_t9, t1759_m9311_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 16, 2, false, false, 3066, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1783_0_0_0;
extern Il2CppType t835_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t1759_m9312_ParameterInfos[] = 
{
	{"opcode", 0, 134221565, &EmptyCustomAttributesCache, &t1783_0_0_0},
	{"methodInfo", 1, 134221566, &EmptyCustomAttributesCache, &t835_0_0_0},
	{"optionalParameterTypes", 2, 134221567, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1783_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1759__CustomAttributeCache_m9312;
MethodInfo m9312_MI = 
{
	"EmitCall", (methodPointerType)&m9312, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t1783_t9_t9, t1759_m9312_ParameterInfos, &t1759__CustomAttributeCache_m9312, 454, 0, 17, 3, false, false, 3067, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1784_0_0_0;
static ParameterInfo t1759_m9313_ParameterInfos[] = 
{
	{"loc", 0, 134221568, &EmptyCustomAttributesCache, &t1784_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1784 (MethodInfo* method, void* obj, void** args);
MethodInfo m9313_MI = 
{
	"MarkLabel", (methodPointerType)&m9313, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122_t1784, t1759_m9313_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 18, 1, false, false, 3068, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m9314_MI = 
{
	"label_fixup", (methodPointerType)&m9314, &t1759_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 3069, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1759_0_0_0;
static ParameterInfo t1759_m9315_ParameterInfos[] = 
{
	{"ig", 0, 134221569, &EmptyCustomAttributesCache, &t1759_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1759__CustomAttributeCache_m9315;
MethodInfo m9315_MI = 
{
	"Mono_GetCurrentOffset", (methodPointerType)&m9315, &t1759_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1759_m9315_ParameterInfos, &t1759__CustomAttributeCache_m9315, 147, 0, 255, 1, false, false, 3070, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1759_MIs[] =
{
	&m9291_MI,
	&m9292_MI,
	&m9293_MI,
	&m9294_MI,
	&m9295_MI,
	&m9296_MI,
	&m9297_MI,
	&m9298_MI,
	&m9299_MI,
	&m9300_MI,
	&m9301_MI,
	&m9302_MI,
	&m9303_MI,
	&m9304_MI,
	&m9305_MI,
	&m9306_MI,
	&m9307_MI,
	&m9308_MI,
	&m9309_MI,
	&m9310_MI,
	&m9311_MI,
	&m9312_MI,
	&m9313_MI,
	&m9314_MI,
	&m9315_MI,
	NULL
};
extern Il2CppType t126_0_0_49;
FieldInfo t1759_f0_FieldInfo = 
{
	"void_type", &t126_0_0_49, &t1759_TI, offsetof(t1759_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t1759_f1_FieldInfo = 
{
	"code", &t737_0_0_1, &t1759_TI, offsetof(t1759, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1759_f2_FieldInfo = 
{
	"code_len", &t125_0_0_1, &t1759_TI, offsetof(t1759, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1759_f3_FieldInfo = 
{
	"max_stack", &t125_0_0_1, &t1759_TI, offsetof(t1759, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1759_f4_FieldInfo = 
{
	"cur_stack", &t125_0_0_1, &t1759_TI, offsetof(t1759, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1777_0_0_1;
FieldInfo t1759_f5_FieldInfo = 
{
	"locals", &t1777_0_0_1, &t1759_TI, offsetof(t1759, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1759_f6_FieldInfo = 
{
	"num_token_fixups", &t125_0_0_1, &t1759_TI, offsetof(t1759, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1778_0_0_1;
FieldInfo t1759_f7_FieldInfo = 
{
	"token_fixups", &t1778_0_0_1, &t1759_TI, offsetof(t1759, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1779_0_0_1;
FieldInfo t1759_f8_FieldInfo = 
{
	"labels", &t1779_0_0_1, &t1759_TI, offsetof(t1759, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1759_f9_FieldInfo = 
{
	"num_labels", &t125_0_0_1, &t1759_TI, offsetof(t1759, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1780_0_0_1;
FieldInfo t1759_f10_FieldInfo = 
{
	"fixups", &t1780_0_0_1, &t1759_TI, offsetof(t1759, f10), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1759_f11_FieldInfo = 
{
	"num_fixups", &t125_0_0_1, &t1759_TI, offsetof(t1759, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1574_0_0_3;
FieldInfo t1759_f12_FieldInfo = 
{
	"module", &t1574_0_0_3, &t1759_TI, offsetof(t1759, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1781_0_0_1;
FieldInfo t1759_f13_FieldInfo = 
{
	"token_gen", &t1781_0_0_1, &t1759_TI, offsetof(t1759, f13), &EmptyCustomAttributesCache};
static FieldInfo* t1759_FIs[] =
{
	&t1759_f0_FieldInfo,
	&t1759_f1_FieldInfo,
	&t1759_f2_FieldInfo,
	&t1759_f3_FieldInfo,
	&t1759_f4_FieldInfo,
	&t1759_f5_FieldInfo,
	&t1759_f6_FieldInfo,
	&t1759_f7_FieldInfo,
	&t1759_f8_FieldInfo,
	&t1759_f9_FieldInfo,
	&t1759_f10_FieldInfo,
	&t1759_f11_FieldInfo,
	&t1759_f12_FieldInfo,
	&t1759_f13_FieldInfo,
	NULL
};
static const Il2CppType* t1759_TI__nestedTypes[2] =
{
	&t1775_0_0_0,
	&t1776_0_0_0,
};
extern MethodInfo m9298_MI;
extern MethodInfo m9299_MI;
extern MethodInfo m9300_MI;
extern MethodInfo m9301_MI;
extern MethodInfo m9302_MI;
extern MethodInfo m9303_MI;
extern MethodInfo m9304_MI;
extern MethodInfo m9305_MI;
extern MethodInfo m9306_MI;
extern MethodInfo m9307_MI;
extern MethodInfo m9308_MI;
extern MethodInfo m9310_MI;
extern MethodInfo m9311_MI;
extern MethodInfo m9312_MI;
extern MethodInfo m9313_MI;
static Il2CppMethodReference t1759_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m9298_MI,
	&m9299_MI,
	&m9300_MI,
	&m9301_MI,
	&m9302_MI,
	&m9303_MI,
	&m9304_MI,
	&m9305_MI,
	&m9306_MI,
	&m9307_MI,
	&m9308_MI,
	&m9310_MI,
	&m9311_MI,
	&m9312_MI,
	&m9313_MI,
};
static bool t1759_VTIGM[] =
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
extern Il2CppType t2604_0_0_0;
static const Il2CppType* t1759_ITIs[] = 
{
	&t2604_0_0_0,
};
static Il2CppInterfaceOffsetPair t1759_IOs[] = 
{
	{ &t2604_0_0_0, 4},
};
extern TypeInfo t2604_TI;
void t1759_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1846 * tmp;
		tmp = (t1846 *)il2cpp_codegen_object_new (&t1846_TI);
		m9814(tmp, il2cpp_codegen_type_get_object(&t2604_0_0_0), &m9814_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1844 * tmp;
		tmp = (t1844 *)il2cpp_codegen_object_new (&t1844_TI);
		m9813(tmp, 0, &m9813_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t1759_CustomAttributesCacheGenerator_m9303(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1600_TI;
#include "t1600.h"
#include "t1600MD.h"
extern MethodInfo m7893_MI;
void t1759_CustomAttributesCacheGenerator_m9312(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1600 * tmp;
		tmp = (t1600 *)il2cpp_codegen_object_new (&t1600_TI);
		m7893(tmp, il2cpp_codegen_string_new_wrapper("vararg methods are not supported"), &m7893_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1759_CustomAttributesCacheGenerator_m9315(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t625 * tmp;
		tmp = (t625 *)il2cpp_codegen_object_new (&t625_TI);
		m3034(tmp, il2cpp_codegen_string_new_wrapper("Use ILOffset"), &m3034_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1759__CustomAttributeCache = {
3,
NULL,
&t1759_CustomAttributesCacheGenerator
};
CustomAttributesCache t1759__CustomAttributeCache_m9303 = {
1,
NULL,
&t1759_CustomAttributesCacheGenerator_m9303
};
CustomAttributesCache t1759__CustomAttributeCache_m9312 = {
1,
NULL,
&t1759_CustomAttributesCacheGenerator_m9312
};
CustomAttributesCache t1759__CustomAttributeCache_m9315 = {
1,
NULL,
&t1759_CustomAttributesCacheGenerator_m9315
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1759_1_0_0;
struct t1759;
extern CustomAttributesCache t1759__CustomAttributeCache;
extern CustomAttributesCache t1759__CustomAttributeCache_m9303;
extern CustomAttributesCache t1759__CustomAttributeCache_m9312;
extern CustomAttributesCache t1759__CustomAttributeCache_m9315;
const Il2CppTypeDefinitionMetadata t1759_DM = 
{
	NULL, t1759_TI__nestedTypes, t1759_ITIs, t1759_IOs, &t9_0_0_0, t1759_VT, t1759_VTIGM, NULL};
TypeInfo t1759_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ILGenerator", "System.Reflection.Emit", t1759_MIs, NULL, t1759_FIs, NULL, &t1759_TI, NULL, &t1759__CustomAttributeCache, &t1759_0_0_0, &t1759_1_0_0, &t1759_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1759), sizeof (t1759), 0, -1, sizeof(t1759_SFs), 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, true, false, 25, 0, 14, 0, 2, 19, 1, 1};
#include "t1784.h"
// Metadata Definition System.Reflection.Emit.Label
extern TypeInfo t1784_TI;
#include "t1784MD.h"
extern Il2CppType t125_0_0_0;
static ParameterInfo t1784_m9316_ParameterInfos[] = 
{
	{"val", 0, 134221572, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9316_MI = 
{
	".ctor", (methodPointerType)&m9316, &t1784_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1784_m9316_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 3072, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1784_m9317_ParameterInfos[] = 
{
	{"obj", 0, 134221573, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m9317_MI = 
{
	"Equals", (methodPointerType)&m9317, &t1784_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1784_m9317_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 3073, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m9318_MI = 
{
	"GetHashCode", (methodPointerType)&m9318, &t1784_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 3074, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1784_MIs[] =
{
	&m9316_MI,
	&m9317_MI,
	&m9318_MI,
	NULL
};
extern Il2CppType t125_0_0_3;
FieldInfo t1784_f0_FieldInfo = 
{
	"label", &t125_0_0_3, &t1784_TI, offsetof(t1784, f0) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1784_FIs[] =
{
	&t1784_f0_FieldInfo,
	NULL
};
extern MethodInfo m9317_MI;
extern MethodInfo m9318_MI;
static Il2CppMethodReference t1784_VT[] =
{
	&m9317_MI,
	&m646_MI,
	&m9318_MI,
	&m682_MI,
};
static bool t1784_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1784_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1784__CustomAttributeCache = {
1,
NULL,
&t1784_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1784_1_0_0;
extern CustomAttributesCache t1784__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1784_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1784_VT, t1784_VTIGM, NULL};
TypeInfo t1784_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Label", "System.Reflection.Emit", t1784_MIs, NULL, t1784_FIs, NULL, &t1784_TI, NULL, &t1784__CustomAttributeCache, &t1784_0_0_0, &t1784_1_0_0, &t1784_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1784)+ sizeof (Il2CppObject), sizeof (t1784)+ sizeof (Il2CppObject), 0, sizeof(t1784 ), 0, 0, -1, 1057033, 0, 0, true, false, false, false, false, false, false, false, false, true, 3, 0, 1, 0, 0, 4, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
