﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t681.h"
// Metadata Definition <Module>
extern TypeInfo t681_TI;
#include "t681MD.h"
static MethodInfo* t681_MIs[] =
{
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t681_0_0_0;
extern Il2CppType t681_1_0_0;
struct t681;
const Il2CppTypeDefinitionMetadata t681_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t681_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "<Module>", "", t681_MIs, NULL, NULL, NULL, &t681_TI, NULL, &EmptyCustomAttributesCache, &t681_0_0_0, &t681_1_0_0, &t681_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t681), sizeof (t681), 0, -1, 0, 0, -1, 0, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t682.h"
// Metadata Definition UnityEngine.AssetBundleCreateRequest
extern TypeInfo t682_TI;
#include "t682MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3132_MI = 
{
	".ctor", (methodPointerType)&m3132, &t682_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t683_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t682__CustomAttributeCache_m3133;
MethodInfo m3133_MI = 
{
	"get_assetBundle", (methodPointerType)&m3133, &t682_TI, &t683_0_0_0, RuntimeInvoker_t9, NULL, &t682__CustomAttributeCache_m3133, 2182, 4096, 255, 0, false, false, 2, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t682__CustomAttributeCache_m3134;
MethodInfo m3134_MI = 
{
	"DisableCompatibilityChecks", (methodPointerType)&m3134, &t682_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t682__CustomAttributeCache_m3134, 131, 4096, 255, 0, false, false, 3, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t682_MIs[] =
{
	&m3132_MI,
	&m3133_MI,
	&m3134_MI,
	NULL
};
extern MethodInfo m3133_MI;
static PropertyInfo t682____assetBundle_PropertyInfo = 
{
	&t682_TI, "assetBundle", &m3133_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t682_PIs[] =
{
	&t682____assetBundle_PropertyInfo,
	NULL
};
extern MethodInfo m671_MI;
extern MethodInfo m3589_MI;
extern MethodInfo m672_MI;
extern MethodInfo m673_MI;
static Il2CppMethodReference t682_VT[] =
{
	&m671_MI,
	&m3589_MI,
	&m672_MI,
	&m673_MI,
};
static bool t682_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern TypeInfo t838_TI;
#include "t838.h"
#include "t838MD.h"
extern MethodInfo m4113_MI;
void t682_CustomAttributesCacheGenerator_m3133(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t682_CustomAttributesCacheGenerator_m3134(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t682__CustomAttributeCache_m3133 = {
1,
NULL,
&t682_CustomAttributesCacheGenerator_m3133
};
CustomAttributesCache t682__CustomAttributeCache_m3134 = {
1,
NULL,
&t682_CustomAttributesCacheGenerator_m3134
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t682_0_0_0;
extern Il2CppType t682_1_0_0;
extern Il2CppType t173_0_0_0;
struct t682;
extern CustomAttributesCache t682__CustomAttributeCache_m3133;
extern CustomAttributesCache t682__CustomAttributeCache_m3134;
const Il2CppTypeDefinitionMetadata t682_DM = 
{
	NULL, NULL, NULL, NULL, &t173_0_0_0, t682_VT, t682_VTIGM, NULL};
TypeInfo t682_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "AssetBundleCreateRequest", "UnityEngine", t682_MIs, t682_PIs, NULL, NULL, &t682_TI, NULL, &EmptyCustomAttributesCache, &t682_0_0_0, &t682_1_0_0, &t682_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t682), sizeof (t682), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 3, 1, 0, 0, 0, 4, 0, 0};
#include "t684.h"
// Metadata Definition UnityEngine.AssetBundleRequest
extern TypeInfo t684_TI;
#include "t684MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3135_MI = 
{
	".ctor", (methodPointerType)&m3135, &t684_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t57_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3136_MI = 
{
	"get_asset", (methodPointerType)&m3136, &t684_TI, &t57_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 5, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3137_MI = 
{
	"get_allAssets", (methodPointerType)&m3137, &t684_TI, &t131_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 6, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t684_MIs[] =
{
	&m3135_MI,
	&m3136_MI,
	&m3137_MI,
	NULL
};
extern Il2CppType t683_0_0_3;
FieldInfo t684_f1_FieldInfo = 
{
	"m_AssetBundle", &t683_0_0_3, &t684_TI, offsetof(t684, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_3;
FieldInfo t684_f2_FieldInfo = 
{
	"m_Path", &t2_0_0_3, &t684_TI, offsetof(t684, f2), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_3;
FieldInfo t684_f3_FieldInfo = 
{
	"m_Type", &t126_0_0_3, &t684_TI, offsetof(t684, f3), &EmptyCustomAttributesCache};
static FieldInfo* t684_FIs[] =
{
	&t684_f1_FieldInfo,
	&t684_f2_FieldInfo,
	&t684_f3_FieldInfo,
	NULL
};
extern MethodInfo m3136_MI;
static PropertyInfo t684____asset_PropertyInfo = 
{
	&t684_TI, "asset", &m3136_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3137_MI;
static PropertyInfo t684____allAssets_PropertyInfo = 
{
	&t684_TI, "allAssets", &m3137_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t684_PIs[] =
{
	&t684____asset_PropertyInfo,
	&t684____allAssets_PropertyInfo,
	NULL
};
static Il2CppMethodReference t684_VT[] =
{
	&m671_MI,
	&m3589_MI,
	&m672_MI,
	&m673_MI,
};
static bool t684_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t684_0_0_0;
extern Il2CppType t684_1_0_0;
struct t684;
const Il2CppTypeDefinitionMetadata t684_DM = 
{
	NULL, NULL, NULL, NULL, &t173_0_0_0, t684_VT, t684_VTIGM, NULL};
TypeInfo t684_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "AssetBundleRequest", "UnityEngine", t684_MIs, t684_PIs, t684_FIs, NULL, &t684_TI, NULL, &EmptyCustomAttributesCache, &t684_0_0_0, &t684_1_0_0, &t684_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t684), sizeof (t684), 0, -1, 0, 0, -1, 1048841, 0, 0, false, false, false, false, false, false, false, true, false, false, 3, 2, 3, 0, 0, 4, 0, 0};
#include "t683.h"
// Metadata Definition UnityEngine.AssetBundle
extern TypeInfo t683_TI;
#include "t683MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t683_m3138_ParameterInfos[] = 
{
	{"name", 0, 134217729, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"type", 1, 134217730, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t57_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t683__CustomAttributeCache_m3138;
MethodInfo m3138_MI = 
{
	"LoadAsset", (methodPointerType)&m3138, &t683_TI, &t57_0_0_0, RuntimeInvoker_t9_t9_t9, t683_m3138_ParameterInfos, &t683__CustomAttributeCache_m3138, 134, 0, 255, 2, false, false, 7, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t683_m3139_ParameterInfos[] = 
{
	{"name", 0, 134217731, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"type", 1, 134217732, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t57_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t683__CustomAttributeCache_m3139;
MethodInfo m3139_MI = 
{
	"LoadAsset_Internal", (methodPointerType)&m3139, &t683_TI, &t57_0_0_0, RuntimeInvoker_t9_t9_t9, t683_m3139_ParameterInfos, &t683__CustomAttributeCache_m3139, 129, 4096, 255, 2, false, false, 8, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t683_m3140_ParameterInfos[] = 
{
	{"name", 0, 134217733, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"type", 1, 134217734, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t683__CustomAttributeCache_m3140;
MethodInfo m3140_MI = 
{
	"LoadAssetWithSubAssets_Internal", (methodPointerType)&m3140, &t683_TI, &t131_0_0_0, RuntimeInvoker_t9_t9_t9, t683_m3140_ParameterInfos, &t683__CustomAttributeCache_m3140, 131, 4096, 255, 2, false, false, 9, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t683_MIs[] =
{
	&m3138_MI,
	&m3139_MI,
	&m3140_MI,
	NULL
};
extern MethodInfo m645_MI;
extern MethodInfo m646_MI;
extern MethodInfo m647_MI;
extern MethodInfo m648_MI;
static Il2CppMethodReference t683_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t683_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern TypeInfo t876_TI;
#include "t876.h"
#include "t876MD.h"
extern MethodInfo m4221_MI;
void t683_CustomAttributesCacheGenerator_m3138(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t876 * tmp;
		tmp = (t876 *)il2cpp_codegen_object_new (&t876_TI);
		m4221(tmp, 1, &m4221_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t683_CustomAttributesCacheGenerator_m3139(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t876 * tmp;
		tmp = (t876 *)il2cpp_codegen_object_new (&t876_TI);
		m4221(tmp, 1, &m4221_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t683_CustomAttributesCacheGenerator_m3140(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t683__CustomAttributeCache_m3138 = {
1,
NULL,
&t683_CustomAttributesCacheGenerator_m3138
};
CustomAttributesCache t683__CustomAttributeCache_m3139 = {
2,
NULL,
&t683_CustomAttributesCacheGenerator_m3139
};
CustomAttributesCache t683__CustomAttributeCache_m3140 = {
1,
NULL,
&t683_CustomAttributesCacheGenerator_m3140
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t683_0_0_0;
extern Il2CppType t683_1_0_0;
extern Il2CppType t57_0_0_0;
struct t683;
extern CustomAttributesCache t683__CustomAttributeCache_m3138;
extern CustomAttributesCache t683__CustomAttributeCache_m3139;
extern CustomAttributesCache t683__CustomAttributeCache_m3140;
const Il2CppTypeDefinitionMetadata t683_DM = 
{
	NULL, NULL, NULL, NULL, &t57_0_0_0, t683_VT, t683_VTIGM, NULL};
TypeInfo t683_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "AssetBundle", "UnityEngine", t683_MIs, NULL, NULL, NULL, &t683_TI, NULL, &EmptyCustomAttributesCache, &t683_0_0_0, &t683_1_0_0, &t683_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t683), sizeof (t683), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 4, 0, 0};
#include "t177.h"
// Metadata Definition UnityEngine.SendMessageOptions
extern TypeInfo t177_TI;
#include "t177MD.h"
static MethodInfo* t177_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t177_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t177_TI, offsetof(t177, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t177_0_0_32854;
FieldInfo t177_f2_FieldInfo = 
{
	"RequireReceiver", &t177_0_0_32854, &t177_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t177_0_0_32854;
FieldInfo t177_f3_FieldInfo = 
{
	"DontRequireReceiver", &t177_0_0_32854, &t177_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t177_FIs[] =
{
	&t177_f1_FieldInfo,
	&t177_f2_FieldInfo,
	&t177_f3_FieldInfo,
	NULL
};
static const int32_t t177_f2_DefaultValueData = 0;
extern Il2CppType t125_0_0_0;
static Il2CppFieldDefaultValueEntry t177_f2_DefaultValue = 
{
	&t177_f2_FieldInfo, { (char*)&t177_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t177_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t177_f3_DefaultValue = 
{
	&t177_f3_FieldInfo, { (char*)&t177_f3_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t177_FDVs[] = 
{
	&t177_f2_DefaultValue,
	&t177_f3_DefaultValue,
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
static Il2CppMethodReference t177_VT[] =
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
static bool t177_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
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
static Il2CppInterfaceOffsetPair t177_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t177_0_0_0;
extern Il2CppType t177_1_0_0;
extern Il2CppType t8_0_0_0;
#include "t125.h"
extern TypeInfo t125_TI;
const Il2CppTypeDefinitionMetadata t177_DM = 
{
	NULL, NULL, NULL, t177_IOs, &t8_0_0_0, t177_VT, t177_VTIGM, NULL};
TypeInfo t177_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "SendMessageOptions", "UnityEngine", t177_MIs, NULL, t177_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t177_0_0_0, &t177_1_0_0, &t177_DM, NULL, NULL, NULL, t177_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t177)+ sizeof (Il2CppObject), sizeof (t177)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 257, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t67.h"
// Metadata Definition UnityEngine.Space
extern TypeInfo t67_TI;
#include "t67MD.h"
static MethodInfo* t67_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t67_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t67_TI, offsetof(t67, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t67_0_0_32854;
FieldInfo t67_f2_FieldInfo = 
{
	"World", &t67_0_0_32854, &t67_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t67_0_0_32854;
FieldInfo t67_f3_FieldInfo = 
{
	"Self", &t67_0_0_32854, &t67_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t67_FIs[] =
{
	&t67_f1_FieldInfo,
	&t67_f2_FieldInfo,
	&t67_f3_FieldInfo,
	NULL
};
static const int32_t t67_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t67_f2_DefaultValue = 
{
	&t67_f2_FieldInfo, { (char*)&t67_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t67_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t67_f3_DefaultValue = 
{
	&t67_f3_FieldInfo, { (char*)&t67_f3_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t67_FDVs[] = 
{
	&t67_f2_DefaultValue,
	&t67_f3_DefaultValue,
	NULL
};
static Il2CppMethodReference t67_VT[] =
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
static bool t67_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t67_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t67_0_0_0;
extern Il2CppType t67_1_0_0;
const Il2CppTypeDefinitionMetadata t67_DM = 
{
	NULL, NULL, NULL, t67_IOs, &t8_0_0_0, t67_VT, t67_VTIGM, NULL};
TypeInfo t67_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Space", "UnityEngine", t67_MIs, NULL, t67_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t67_0_0_0, &t67_1_0_0, &t67_DM, NULL, NULL, NULL, t67_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t67)+ sizeof (Il2CppObject), sizeof (t67)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 257, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t42.h"
// Metadata Definition UnityEngine.LayerMask
extern TypeInfo t42_TI;
#include "t42MD.h"
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m489_MI = 
{
	"get_value", (methodPointerType)&m489, &t42_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 10, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t42_m3141_ParameterInfos[] = 
{
	{"value", 0, 134217735, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3141_MI = 
{
	"set_value", (methodPointerType)&m3141, &t42_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t42_m3141_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 11, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t42_m3142_ParameterInfos[] = 
{
	{"layer", 0, 134217736, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t42__CustomAttributeCache_m3142;
MethodInfo m3142_MI = 
{
	"LayerToName", (methodPointerType)&m3142, &t42_TI, &t2_0_0_0, RuntimeInvoker_t9_t125, t42_m3142_ParameterInfos, &t42__CustomAttributeCache_m3142, 150, 4096, 255, 1, false, false, 12, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t42_m434_ParameterInfos[] = 
{
	{"layerName", 0, 134217737, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t42__CustomAttributeCache_m434;
MethodInfo m434_MI = 
{
	"NameToLayer", (methodPointerType)&m434, &t42_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t42_m434_ParameterInfos, &t42__CustomAttributeCache_m434, 150, 4096, 255, 1, false, false, 13, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
extern CustomAttributesCache t42__CustomAttributeCache_t42_m3143_Arg0_ParameterInfo;
static ParameterInfo t42_m3143_ParameterInfos[] = 
{
	{"layerNames", 0, 134217738, &t42__CustomAttributeCache_t42_m3143_Arg0_ParameterInfo, &t221_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3143_MI = 
{
	"GetMask", (methodPointerType)&m3143, &t42_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t42_m3143_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 14, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t42_0_0_0;
extern Il2CppType t42_0_0_0;
static ParameterInfo t42_m433_ParameterInfos[] = 
{
	{"mask", 0, 134217739, &EmptyCustomAttributesCache, &t42_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t42 (MethodInfo* method, void* obj, void** args);
MethodInfo m433_MI = 
{
	"op_Implicit", (methodPointerType)&m433, &t42_TI, &t125_0_0_0, RuntimeInvoker_t125_t42, t42_m433_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 1, false, false, 15, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t42_m482_ParameterInfos[] = 
{
	{"intVal", 0, 134217740, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t42_0_0_0;
extern void* RuntimeInvoker_t42_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m482_MI = 
{
	"op_Implicit", (methodPointerType)&m482, &t42_TI, &t42_0_0_0, RuntimeInvoker_t42_t125, t42_m482_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 1, false, false, 16, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t42_MIs[] =
{
	&m489_MI,
	&m3141_MI,
	&m3142_MI,
	&m434_MI,
	&m3143_MI,
	&m433_MI,
	&m482_MI,
	NULL
};
extern Il2CppType t125_0_0_1;
FieldInfo t42_f0_FieldInfo = 
{
	"m_Mask", &t125_0_0_1, &t42_TI, offsetof(t42, f0) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t42_FIs[] =
{
	&t42_f0_FieldInfo,
	NULL
};
extern MethodInfo m489_MI;
extern MethodInfo m3141_MI;
static PropertyInfo t42____value_PropertyInfo = 
{
	&t42_TI, "value", &m489_MI, &m3141_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t42_PIs[] =
{
	&t42____value_PropertyInfo,
	NULL
};
extern MethodInfo m680_MI;
extern MethodInfo m681_MI;
extern MethodInfo m682_MI;
static Il2CppMethodReference t42_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t42_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t42_CustomAttributesCacheGenerator_m3142(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t42_CustomAttributesCacheGenerator_m434(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t337_TI;
#include "t337.h"
#include "t337MD.h"
extern MethodInfo m1228_MI;
void t42_CustomAttributesCacheGenerator_t42_m3143_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t337 * tmp;
		tmp = (t337 *)il2cpp_codegen_object_new (&t337_TI);
		m1228(tmp, &m1228_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t42__CustomAttributeCache_m3142 = {
1,
NULL,
&t42_CustomAttributesCacheGenerator_m3142
};
CustomAttributesCache t42__CustomAttributeCache_m434 = {
1,
NULL,
&t42_CustomAttributesCacheGenerator_m434
};
CustomAttributesCache t42__CustomAttributeCache_t42_m3143_Arg0_ParameterInfo = {
1,
NULL,
&t42_CustomAttributesCacheGenerator_t42_m3143_Arg0_ParameterInfo
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t42_1_0_0;
extern Il2CppType t117_0_0_0;
extern CustomAttributesCache t42__CustomAttributeCache_m3142;
extern CustomAttributesCache t42__CustomAttributeCache_m434;
const Il2CppTypeDefinitionMetadata t42_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t42_VT, t42_VTIGM, NULL};
TypeInfo t42_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "LayerMask", "UnityEngine", t42_MIs, t42_PIs, t42_FIs, NULL, &t42_TI, NULL, &EmptyCustomAttributesCache, &t42_0_0_0, &t42_1_0_0, &t42_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t42)+ sizeof (Il2CppObject), sizeof (t42)+ sizeof (Il2CppObject), 0, sizeof(t42 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 7, 1, 1, 0, 0, 4, 0, 0};
#include "t305.h"
// Metadata Definition UnityEngine.RuntimePlatform
extern TypeInfo t305_TI;
#include "t305MD.h"
static MethodInfo* t305_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t305_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t305_TI, offsetof(t305, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f2_FieldInfo = 
{
	"OSXEditor", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f3_FieldInfo = 
{
	"OSXPlayer", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f4_FieldInfo = 
{
	"WindowsPlayer", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f5_FieldInfo = 
{
	"OSXWebPlayer", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f6_FieldInfo = 
{
	"OSXDashboardPlayer", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f7_FieldInfo = 
{
	"WindowsWebPlayer", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f8_FieldInfo = 
{
	"WindowsEditor", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f9_FieldInfo = 
{
	"IPhonePlayer", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f10_FieldInfo = 
{
	"XBOX360", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f11_FieldInfo = 
{
	"PS3", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f12_FieldInfo = 
{
	"Android", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
extern CustomAttributesCache t305__CustomAttributeCache_NaCl;
FieldInfo t305_f13_FieldInfo = 
{
	"NaCl", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &t305__CustomAttributeCache_NaCl};
extern Il2CppType t305_0_0_32854;
extern CustomAttributesCache t305__CustomAttributeCache_FlashPlayer;
FieldInfo t305_f14_FieldInfo = 
{
	"FlashPlayer", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &t305__CustomAttributeCache_FlashPlayer};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f15_FieldInfo = 
{
	"LinuxPlayer", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f16_FieldInfo = 
{
	"WebGLPlayer", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
extern CustomAttributesCache t305__CustomAttributeCache_MetroPlayerX86;
FieldInfo t305_f17_FieldInfo = 
{
	"MetroPlayerX86", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &t305__CustomAttributeCache_MetroPlayerX86};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f18_FieldInfo = 
{
	"WSAPlayerX86", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
extern CustomAttributesCache t305__CustomAttributeCache_MetroPlayerX64;
FieldInfo t305_f19_FieldInfo = 
{
	"MetroPlayerX64", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &t305__CustomAttributeCache_MetroPlayerX64};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f20_FieldInfo = 
{
	"WSAPlayerX64", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
extern CustomAttributesCache t305__CustomAttributeCache_MetroPlayerARM;
FieldInfo t305_f21_FieldInfo = 
{
	"MetroPlayerARM", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &t305__CustomAttributeCache_MetroPlayerARM};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f22_FieldInfo = 
{
	"WSAPlayerARM", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f23_FieldInfo = 
{
	"WP8Player", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f24_FieldInfo = 
{
	"BlackBerryPlayer", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f25_FieldInfo = 
{
	"TizenPlayer", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f26_FieldInfo = 
{
	"PSP2", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f27_FieldInfo = 
{
	"PS4", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f28_FieldInfo = 
{
	"PSM", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f29_FieldInfo = 
{
	"XboxOne", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_32854;
FieldInfo t305_f30_FieldInfo = 
{
	"SamsungTVPlayer", &t305_0_0_32854, &t305_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t305_FIs[] =
{
	&t305_f1_FieldInfo,
	&t305_f2_FieldInfo,
	&t305_f3_FieldInfo,
	&t305_f4_FieldInfo,
	&t305_f5_FieldInfo,
	&t305_f6_FieldInfo,
	&t305_f7_FieldInfo,
	&t305_f8_FieldInfo,
	&t305_f9_FieldInfo,
	&t305_f10_FieldInfo,
	&t305_f11_FieldInfo,
	&t305_f12_FieldInfo,
	&t305_f13_FieldInfo,
	&t305_f14_FieldInfo,
	&t305_f15_FieldInfo,
	&t305_f16_FieldInfo,
	&t305_f17_FieldInfo,
	&t305_f18_FieldInfo,
	&t305_f19_FieldInfo,
	&t305_f20_FieldInfo,
	&t305_f21_FieldInfo,
	&t305_f22_FieldInfo,
	&t305_f23_FieldInfo,
	&t305_f24_FieldInfo,
	&t305_f25_FieldInfo,
	&t305_f26_FieldInfo,
	&t305_f27_FieldInfo,
	&t305_f28_FieldInfo,
	&t305_f29_FieldInfo,
	&t305_f30_FieldInfo,
	NULL
};
static const int32_t t305_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t305_f2_DefaultValue = 
{
	&t305_f2_FieldInfo, { (char*)&t305_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t305_f3_DefaultValue = 
{
	&t305_f3_FieldInfo, { (char*)&t305_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t305_f4_DefaultValue = 
{
	&t305_f4_FieldInfo, { (char*)&t305_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t305_f5_DefaultValue = 
{
	&t305_f5_FieldInfo, { (char*)&t305_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t305_f6_DefaultValue = 
{
	&t305_f6_FieldInfo, { (char*)&t305_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t305_f7_DefaultValue = 
{
	&t305_f7_FieldInfo, { (char*)&t305_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f8_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t305_f8_DefaultValue = 
{
	&t305_f8_FieldInfo, { (char*)&t305_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f9_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t305_f9_DefaultValue = 
{
	&t305_f9_FieldInfo, { (char*)&t305_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f10_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t305_f10_DefaultValue = 
{
	&t305_f10_FieldInfo, { (char*)&t305_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f11_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t305_f11_DefaultValue = 
{
	&t305_f11_FieldInfo, { (char*)&t305_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f12_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t305_f12_DefaultValue = 
{
	&t305_f12_FieldInfo, { (char*)&t305_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f13_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t305_f13_DefaultValue = 
{
	&t305_f13_FieldInfo, { (char*)&t305_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f14_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t305_f14_DefaultValue = 
{
	&t305_f14_FieldInfo, { (char*)&t305_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f15_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry t305_f15_DefaultValue = 
{
	&t305_f15_FieldInfo, { (char*)&t305_f15_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f16_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry t305_f16_DefaultValue = 
{
	&t305_f16_FieldInfo, { (char*)&t305_f16_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f17_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry t305_f17_DefaultValue = 
{
	&t305_f17_FieldInfo, { (char*)&t305_f17_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f18_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry t305_f18_DefaultValue = 
{
	&t305_f18_FieldInfo, { (char*)&t305_f18_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f19_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry t305_f19_DefaultValue = 
{
	&t305_f19_FieldInfo, { (char*)&t305_f19_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f20_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry t305_f20_DefaultValue = 
{
	&t305_f20_FieldInfo, { (char*)&t305_f20_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f21_DefaultValueData = 20;
static Il2CppFieldDefaultValueEntry t305_f21_DefaultValue = 
{
	&t305_f21_FieldInfo, { (char*)&t305_f21_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f22_DefaultValueData = 20;
static Il2CppFieldDefaultValueEntry t305_f22_DefaultValue = 
{
	&t305_f22_FieldInfo, { (char*)&t305_f22_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f23_DefaultValueData = 21;
static Il2CppFieldDefaultValueEntry t305_f23_DefaultValue = 
{
	&t305_f23_FieldInfo, { (char*)&t305_f23_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f24_DefaultValueData = 22;
static Il2CppFieldDefaultValueEntry t305_f24_DefaultValue = 
{
	&t305_f24_FieldInfo, { (char*)&t305_f24_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f25_DefaultValueData = 23;
static Il2CppFieldDefaultValueEntry t305_f25_DefaultValue = 
{
	&t305_f25_FieldInfo, { (char*)&t305_f25_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f26_DefaultValueData = 24;
static Il2CppFieldDefaultValueEntry t305_f26_DefaultValue = 
{
	&t305_f26_FieldInfo, { (char*)&t305_f26_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f27_DefaultValueData = 25;
static Il2CppFieldDefaultValueEntry t305_f27_DefaultValue = 
{
	&t305_f27_FieldInfo, { (char*)&t305_f27_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f28_DefaultValueData = 26;
static Il2CppFieldDefaultValueEntry t305_f28_DefaultValue = 
{
	&t305_f28_FieldInfo, { (char*)&t305_f28_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f29_DefaultValueData = 27;
static Il2CppFieldDefaultValueEntry t305_f29_DefaultValue = 
{
	&t305_f29_FieldInfo, { (char*)&t305_f29_DefaultValueData, &t125_0_0_0 }};
static const int32_t t305_f30_DefaultValueData = 28;
static Il2CppFieldDefaultValueEntry t305_f30_DefaultValue = 
{
	&t305_f30_FieldInfo, { (char*)&t305_f30_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t305_FDVs[] = 
{
	&t305_f2_DefaultValue,
	&t305_f3_DefaultValue,
	&t305_f4_DefaultValue,
	&t305_f5_DefaultValue,
	&t305_f6_DefaultValue,
	&t305_f7_DefaultValue,
	&t305_f8_DefaultValue,
	&t305_f9_DefaultValue,
	&t305_f10_DefaultValue,
	&t305_f11_DefaultValue,
	&t305_f12_DefaultValue,
	&t305_f13_DefaultValue,
	&t305_f14_DefaultValue,
	&t305_f15_DefaultValue,
	&t305_f16_DefaultValue,
	&t305_f17_DefaultValue,
	&t305_f18_DefaultValue,
	&t305_f19_DefaultValue,
	&t305_f20_DefaultValue,
	&t305_f21_DefaultValue,
	&t305_f22_DefaultValue,
	&t305_f23_DefaultValue,
	&t305_f24_DefaultValue,
	&t305_f25_DefaultValue,
	&t305_f26_DefaultValue,
	&t305_f27_DefaultValue,
	&t305_f28_DefaultValue,
	&t305_f29_DefaultValue,
	&t305_f30_DefaultValue,
	NULL
};
static Il2CppMethodReference t305_VT[] =
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
static bool t305_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t305_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern TypeInfo t618_TI;
#include "t618.h"
#include "t618MD.h"
extern MethodInfo m2994_MI;
void t305_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m2994(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), &m2994_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t305_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m2994(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), &m2994_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t305_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m2994(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), &m2994_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t305_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m2994(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), &m2994_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t305_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m2994(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), &m2994_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t305__CustomAttributeCache_NaCl = {
1,
NULL,
&t305_CustomAttributesCacheGenerator_NaCl
};
CustomAttributesCache t305__CustomAttributeCache_FlashPlayer = {
1,
NULL,
&t305_CustomAttributesCacheGenerator_FlashPlayer
};
CustomAttributesCache t305__CustomAttributeCache_MetroPlayerX86 = {
1,
NULL,
&t305_CustomAttributesCacheGenerator_MetroPlayerX86
};
CustomAttributesCache t305__CustomAttributeCache_MetroPlayerX64 = {
1,
NULL,
&t305_CustomAttributesCacheGenerator_MetroPlayerX64
};
CustomAttributesCache t305__CustomAttributeCache_MetroPlayerARM = {
1,
NULL,
&t305_CustomAttributesCacheGenerator_MetroPlayerARM
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t305_0_0_0;
extern Il2CppType t305_1_0_0;
extern CustomAttributesCache t305__CustomAttributeCache_NaCl;
extern CustomAttributesCache t305__CustomAttributeCache_FlashPlayer;
extern CustomAttributesCache t305__CustomAttributeCache_MetroPlayerX86;
extern CustomAttributesCache t305__CustomAttributeCache_MetroPlayerX64;
extern CustomAttributesCache t305__CustomAttributeCache_MetroPlayerARM;
const Il2CppTypeDefinitionMetadata t305_DM = 
{
	NULL, NULL, NULL, t305_IOs, &t8_0_0_0, t305_VT, t305_VTIGM, NULL};
TypeInfo t305_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "RuntimePlatform", "UnityEngine", t305_MIs, NULL, t305_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t305_0_0_0, &t305_1_0_0, &t305_DM, NULL, NULL, NULL, t305_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t305)+ sizeof (Il2CppObject), sizeof (t305)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 257, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 30, 0, 0, 23, 0, 3};
#include "t685.h"
// Metadata Definition UnityEngine.LogType
extern TypeInfo t685_TI;
#include "t685MD.h"
static MethodInfo* t685_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t685_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t685_TI, offsetof(t685, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t685_0_0_32854;
FieldInfo t685_f2_FieldInfo = 
{
	"Error", &t685_0_0_32854, &t685_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t685_0_0_32854;
FieldInfo t685_f3_FieldInfo = 
{
	"Assert", &t685_0_0_32854, &t685_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t685_0_0_32854;
FieldInfo t685_f4_FieldInfo = 
{
	"Warning", &t685_0_0_32854, &t685_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t685_0_0_32854;
FieldInfo t685_f5_FieldInfo = 
{
	"Log", &t685_0_0_32854, &t685_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t685_0_0_32854;
FieldInfo t685_f6_FieldInfo = 
{
	"Exception", &t685_0_0_32854, &t685_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t685_FIs[] =
{
	&t685_f1_FieldInfo,
	&t685_f2_FieldInfo,
	&t685_f3_FieldInfo,
	&t685_f4_FieldInfo,
	&t685_f5_FieldInfo,
	&t685_f6_FieldInfo,
	NULL
};
static const int32_t t685_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t685_f2_DefaultValue = 
{
	&t685_f2_FieldInfo, { (char*)&t685_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t685_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t685_f3_DefaultValue = 
{
	&t685_f3_FieldInfo, { (char*)&t685_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t685_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t685_f4_DefaultValue = 
{
	&t685_f4_FieldInfo, { (char*)&t685_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t685_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t685_f5_DefaultValue = 
{
	&t685_f5_FieldInfo, { (char*)&t685_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t685_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t685_f6_DefaultValue = 
{
	&t685_f6_FieldInfo, { (char*)&t685_f6_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t685_FDVs[] = 
{
	&t685_f2_DefaultValue,
	&t685_f3_DefaultValue,
	&t685_f4_DefaultValue,
	&t685_f5_DefaultValue,
	&t685_f6_DefaultValue,
	NULL
};
static Il2CppMethodReference t685_VT[] =
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
static bool t685_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t685_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t685_0_0_0;
extern Il2CppType t685_1_0_0;
const Il2CppTypeDefinitionMetadata t685_DM = 
{
	NULL, NULL, NULL, t685_IOs, &t8_0_0_0, t685_VT, t685_VTIGM, NULL};
TypeInfo t685_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "LogType", "UnityEngine", t685_MIs, NULL, t685_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t685_0_0_0, &t685_1_0_0, &t685_DM, NULL, NULL, NULL, t685_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t685)+ sizeof (Il2CppObject), sizeof (t685)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 257, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t161.h"
// Metadata Definition UnityEngine.SystemInfo
extern TypeInfo t161_TI;
#include "t161MD.h"
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t161__CustomAttributeCache_m517;
MethodInfo m517_MI = 
{
	"get_supportsRenderTextures", (methodPointerType)&m517, &t161_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &t161__CustomAttributeCache_m517, 2198, 4096, 255, 0, false, false, 17, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t162_0_0_0;
extern Il2CppType t162_0_0_0;
static ParameterInfo t161_m527_ParameterInfos[] = 
{
	{"format", 0, 134217741, &EmptyCustomAttributesCache, &t162_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t161__CustomAttributeCache_m527;
MethodInfo m527_MI = 
{
	"SupportsRenderTextureFormat", (methodPointerType)&m527, &t161_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t161_m527_ParameterInfos, &t161__CustomAttributeCache_m527, 150, 4096, 255, 1, false, false, 18, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t161__CustomAttributeCache_m3144;
MethodInfo m3144_MI = 
{
	"get_deviceUniqueIdentifier", (methodPointerType)&m3144, &t161_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &t161__CustomAttributeCache_m3144, 2198, 4096, 255, 0, false, false, 19, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t161_MIs[] =
{
	&m517_MI,
	&m527_MI,
	&m3144_MI,
	NULL
};
extern MethodInfo m517_MI;
static PropertyInfo t161____supportsRenderTextures_PropertyInfo = 
{
	&t161_TI, "supportsRenderTextures", &m517_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3144_MI;
static PropertyInfo t161____deviceUniqueIdentifier_PropertyInfo = 
{
	&t161_TI, "deviceUniqueIdentifier", &m3144_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t161_PIs[] =
{
	&t161____supportsRenderTextures_PropertyInfo,
	&t161____deviceUniqueIdentifier_PropertyInfo,
	NULL
};
static Il2CppMethodReference t161_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t161_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t161_CustomAttributesCacheGenerator_m517(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t161_CustomAttributesCacheGenerator_m527(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t161_CustomAttributesCacheGenerator_m3144(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t161__CustomAttributeCache_m517 = {
1,
NULL,
&t161_CustomAttributesCacheGenerator_m517
};
CustomAttributesCache t161__CustomAttributeCache_m527 = {
1,
NULL,
&t161_CustomAttributesCacheGenerator_m527
};
CustomAttributesCache t161__CustomAttributeCache_m3144 = {
1,
NULL,
&t161_CustomAttributesCacheGenerator_m3144
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t161_0_0_0;
extern Il2CppType t161_1_0_0;
extern Il2CppType t9_0_0_0;
struct t161;
extern CustomAttributesCache t161__CustomAttributeCache_m517;
extern CustomAttributesCache t161__CustomAttributeCache_m527;
extern CustomAttributesCache t161__CustomAttributeCache_m3144;
const Il2CppTypeDefinitionMetadata t161_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t161_VT, t161_VTIGM, NULL};
TypeInfo t161_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "SystemInfo", "UnityEngine", t161_MIs, t161_PIs, NULL, NULL, &t161_TI, NULL, &EmptyCustomAttributesCache, &t161_0_0_0, &t161_1_0_0, &t161_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t161), sizeof (t161), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 2, 0, 0, 0, 4, 0, 0};
#include "t176.h"
// Metadata Definition UnityEngine.WaitForSeconds
extern TypeInfo t176_TI;
#include "t176MD.h"
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t176_m596_ParameterInfos[] = 
{
	{"seconds", 0, 134217742, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m596_MI = 
{
	".ctor", (methodPointerType)&m596, &t176_TI, &t122_0_0_0, RuntimeInvoker_t122_t123, t176_m596_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 20, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t176_MIs[] =
{
	&m596_MI,
	NULL
};
extern Il2CppType t123_0_0_3;
FieldInfo t176_f0_FieldInfo = 
{
	"m_Seconds", &t123_0_0_3, &t176_TI, offsetof(t176, f0), &EmptyCustomAttributesCache};
static FieldInfo* t176_FIs[] =
{
	&t176_f0_FieldInfo,
	NULL
};
static Il2CppMethodReference t176_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t176_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t176_0_0_0;
extern Il2CppType t176_1_0_0;
extern Il2CppType t686_0_0_0;
struct t176;
const Il2CppTypeDefinitionMetadata t176_DM = 
{
	NULL, NULL, NULL, NULL, &t686_0_0_0, t176_VT, t176_VTIGM, NULL};
TypeInfo t176_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "WaitForSeconds", "UnityEngine", t176_MIs, NULL, t176_FIs, NULL, &t176_TI, NULL, &EmptyCustomAttributesCache, &t176_0_0_0, &t176_1_0_0, &t176_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t176_marshal, (methodPointerType)t176_marshal_back, (methodPointerType)t176_marshal_cleanup, sizeof (t176), sizeof (t176), 0, sizeof(t176_marshaled), 0, 0, -1, 1048841, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 0};
#include "t175.h"
// Metadata Definition UnityEngine.WaitForFixedUpdate
extern TypeInfo t175_TI;
#include "t175MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m595_MI = 
{
	".ctor", (methodPointerType)&m595, &t175_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 21, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t175_MIs[] =
{
	&m595_MI,
	NULL
};
static Il2CppMethodReference t175_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t175_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t175_0_0_0;
extern Il2CppType t175_1_0_0;
struct t175;
const Il2CppTypeDefinitionMetadata t175_DM = 
{
	NULL, NULL, NULL, NULL, &t686_0_0_0, t175_VT, t175_VTIGM, NULL};
TypeInfo t175_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "WaitForFixedUpdate", "UnityEngine", t175_MIs, NULL, NULL, NULL, &t175_TI, NULL, &EmptyCustomAttributesCache, &t175_0_0_0, &t175_1_0_0, &t175_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t175), sizeof (t175), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t172.h"
// Metadata Definition UnityEngine.WaitForEndOfFrame
extern TypeInfo t172_TI;
#include "t172MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m589_MI = 
{
	".ctor", (methodPointerType)&m589, &t172_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 22, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t172_MIs[] =
{
	&m589_MI,
	NULL
};
static Il2CppMethodReference t172_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t172_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t172_0_0_0;
extern Il2CppType t172_1_0_0;
struct t172;
const Il2CppTypeDefinitionMetadata t172_DM = 
{
	NULL, NULL, NULL, NULL, &t686_0_0_0, t172_VT, t172_VTIGM, NULL};
TypeInfo t172_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "WaitForEndOfFrame", "UnityEngine", t172_MIs, NULL, NULL, NULL, &t172_TI, NULL, &EmptyCustomAttributesCache, &t172_0_0_0, &t172_1_0_0, &t172_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t172), sizeof (t172), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t171.h"
// Metadata Definition UnityEngine.Coroutine
extern TypeInfo t171_TI;
#include "t171MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3145_MI = 
{
	".ctor", (methodPointerType)&m3145, &t171_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6273, 0, 255, 0, false, false, 23, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t171__CustomAttributeCache_m3146;
MethodInfo m3146_MI = 
{
	"ReleaseCoroutine", (methodPointerType)&m3146, &t171_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t171__CustomAttributeCache_m3146, 129, 4096, 255, 0, false, false, 24, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3147_MI = 
{
	"Finalize", (methodPointerType)&m3147, &t171_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 25, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t171_MIs[] =
{
	&m3145_MI,
	&m3146_MI,
	&m3147_MI,
	NULL
};
extern Il2CppType t58_0_0_3;
FieldInfo t171_f0_FieldInfo = 
{
	"m_Ptr", &t58_0_0_3, &t171_TI, offsetof(t171, f0), &EmptyCustomAttributesCache};
static FieldInfo* t171_FIs[] =
{
	&t171_f0_FieldInfo,
	NULL
};
extern MethodInfo m3147_MI;
static Il2CppMethodReference t171_VT[] =
{
	&m671_MI,
	&m3147_MI,
	&m672_MI,
	&m673_MI,
};
static bool t171_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t171_CustomAttributesCacheGenerator_m3146(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t171__CustomAttributeCache_m3146 = {
1,
NULL,
&t171_CustomAttributesCacheGenerator_m3146
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t171_0_0_0;
extern Il2CppType t171_1_0_0;
struct t171;
extern CustomAttributesCache t171__CustomAttributeCache_m3146;
const Il2CppTypeDefinitionMetadata t171_DM = 
{
	NULL, NULL, NULL, NULL, &t686_0_0_0, t171_VT, t171_VTIGM, NULL};
TypeInfo t171_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Coroutine", "UnityEngine", t171_MIs, NULL, t171_FIs, NULL, &t171_TI, NULL, &EmptyCustomAttributesCache, &t171_0_0_0, &t171_1_0_0, &t171_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t171_marshal, (methodPointerType)t171_marshal_back, (methodPointerType)t171_marshal_cleanup, sizeof (t171), sizeof (t171), 0, sizeof(t171_marshaled), 0, 0, -1, 1048841, 0, 0, false, false, false, false, false, false, false, true, false, false, 3, 0, 1, 0, 0, 4, 0, 0};
#include "t687.h"
// Metadata Definition UnityEngine.ScriptableObject
extern TypeInfo t687_TI;
#include "t687MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3148_MI = 
{
	".ctor", (methodPointerType)&m3148, &t687_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 26, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t687_0_0_0;
extern Il2CppType t687_0_0_0;
extern CustomAttributesCache t687__CustomAttributeCache_t687_m3149_Arg0_ParameterInfo;
static ParameterInfo t687_m3149_ParameterInfos[] = 
{
	{"self", 0, 134217743, &t687__CustomAttributeCache_t687_m3149_Arg0_ParameterInfo, &t687_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t687__CustomAttributeCache_m3149;
MethodInfo m3149_MI = 
{
	"Internal_CreateScriptableObject", (methodPointerType)&m3149, &t687_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t687_m3149_ParameterInfos, &t687__CustomAttributeCache_m3149, 145, 4096, 255, 1, false, false, 27, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t687_m3150_ParameterInfos[] = 
{
	{"className", 0, 134217744, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t687_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t687__CustomAttributeCache_m3150;
MethodInfo m3150_MI = 
{
	"CreateInstance", (methodPointerType)&m3150, &t687_TI, &t687_0_0_0, RuntimeInvoker_t9_t9, t687_m3150_ParameterInfos, &t687__CustomAttributeCache_m3150, 150, 4096, 255, 1, false, false, 28, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t687_m3151_ParameterInfos[] = 
{
	{"type", 0, 134217745, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t687_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3151_MI = 
{
	"CreateInstance", (methodPointerType)&m3151, &t687_TI, &t687_0_0_0, RuntimeInvoker_t9_t9, t687_m3151_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 29, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t687_m3152_ParameterInfos[] = 
{
	{"type", 0, 134217746, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t687_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t687__CustomAttributeCache_m3152;
MethodInfo m3152_MI = 
{
	"CreateInstanceFromType", (methodPointerType)&m3152, &t687_TI, &t687_0_0_0, RuntimeInvoker_t9_t9, t687_m3152_ParameterInfos, &t687__CustomAttributeCache_m3152, 145, 4096, 255, 1, false, false, 30, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType m4495_gp_0_0_0_0;
extern Il2CppGenericContainer m4495_IGC;
extern TypeInfo m4495_gp_T_0_TI;
static const Il2CppType* m4495_gp_T_0_TI_constraints[] = { 
&t687_0_0_0 , 
 NULL };
Il2CppGenericParamFull m4495_gp_T_0_TI_GenericParamFull = { { &m4495_IGC, 0}, {NULL, "T", 0, 0, m4495_gp_T_0_TI_constraints} };
static Il2CppGenericParamFull* m4495_IGPA[1] = 
{
	&m4495_gp_T_0_TI_GenericParamFull,
};
extern MethodInfo m4495_MI;
Il2CppGenericContainer m4495_IGC = { { NULL, NULL }, NULL, &m4495_MI, 1, 1, m4495_IGPA };
extern Il2CppType m4495_gp_0_0_0_0;
static Il2CppRGCTXDefinition m4495_RGCTXData[3] = 
{
	{ IL2CPP_RGCTX_DATA_TYPE, &m4495_gp_0_0_0_0 }/* Type */,
	{ IL2CPP_RGCTX_DATA_CLASS, &m4495_gp_0_0_0_0 }/* Class */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
MethodInfo m4495_MI = 
{
	"CreateInstance", NULL, &t687_TI, &m4495_gp_0_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, true, false, 31, m4495_RGCTXData, (methodPointerType)NULL, &m4495_IGC};
static MethodInfo* t687_MIs[] =
{
	&m3148_MI,
	&m3149_MI,
	&m3150_MI,
	&m3151_MI,
	&m3152_MI,
	&m4495_MI,
	NULL
};
static Il2CppMethodReference t687_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t687_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t687_CustomAttributesCacheGenerator_m3149(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t845_TI;
#include "t845.h"
#include "t845MD.h"
extern MethodInfo m4122_MI;
void t687_CustomAttributesCacheGenerator_t687_m3149_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t845 * tmp;
		tmp = (t845 *)il2cpp_codegen_object_new (&t845_TI);
		m4122(tmp, &m4122_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t687_CustomAttributesCacheGenerator_m3150(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t687_CustomAttributesCacheGenerator_m3152(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t687__CustomAttributeCache_m3149 = {
1,
NULL,
&t687_CustomAttributesCacheGenerator_m3149
};
CustomAttributesCache t687__CustomAttributeCache_t687_m3149_Arg0_ParameterInfo = {
1,
NULL,
&t687_CustomAttributesCacheGenerator_t687_m3149_Arg0_ParameterInfo
};
CustomAttributesCache t687__CustomAttributeCache_m3150 = {
1,
NULL,
&t687_CustomAttributesCacheGenerator_m3150
};
CustomAttributesCache t687__CustomAttributeCache_m3152 = {
1,
NULL,
&t687_CustomAttributesCacheGenerator_m3152
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t687_1_0_0;
struct t687;
extern CustomAttributesCache t687__CustomAttributeCache_m3149;
extern CustomAttributesCache t687__CustomAttributeCache_m3150;
extern CustomAttributesCache t687__CustomAttributeCache_m3152;
const Il2CppTypeDefinitionMetadata t687_DM = 
{
	NULL, NULL, NULL, NULL, &t57_0_0_0, t687_VT, t687_VTIGM, NULL};
TypeInfo t687_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "ScriptableObject", "UnityEngine", t687_MIs, NULL, NULL, NULL, &t687_TI, NULL, &EmptyCustomAttributesCache, &t687_0_0_0, &t687_1_0_0, &t687_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t687_marshal, (methodPointerType)t687_marshal_back, (methodPointerType)t687_marshal_cleanup, sizeof (t687), sizeof (t687), 0, sizeof(t687_marshaled), 0, 0, -1, 1048585, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 0, 0, 0, 0, 4, 0, 0};
#include "t159.h"
// Metadata Definition UnityEngine.QualitySettings
extern TypeInfo t159_TI;
#include "t159MD.h"
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t159__CustomAttributeCache_m486;
MethodInfo m486_MI = 
{
	"get_pixelLightCount", (methodPointerType)&m486, &t159_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t159__CustomAttributeCache_m486, 2198, 4096, 255, 0, false, false, 32, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t159_m487_ParameterInfos[] = 
{
	{"value", 0, 134217747, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t159__CustomAttributeCache_m487;
MethodInfo m487_MI = 
{
	"set_pixelLightCount", (methodPointerType)&m487, &t159_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t159_m487_ParameterInfos, &t159__CustomAttributeCache_m487, 2198, 4096, 255, 1, false, false, 33, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t159_m586_ParameterInfos[] = 
{
	{"value", 0, 134217748, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t159__CustomAttributeCache_m586;
MethodInfo m586_MI = 
{
	"set_shadowDistance", (methodPointerType)&m586, &t159_TI, &t122_0_0_0, RuntimeInvoker_t122_t123, t159_m586_ParameterInfos, &t159__CustomAttributeCache_m586, 2198, 4096, 255, 1, false, false, 34, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t688_0_0_0;
extern void* RuntimeInvoker_t688 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t159__CustomAttributeCache_m3153;
MethodInfo m3153_MI = 
{
	"get_activeColorSpace", (methodPointerType)&m3153, &t159_TI, &t688_0_0_0, RuntimeInvoker_t688, NULL, &t159__CustomAttributeCache_m3153, 2198, 4096, 255, 0, false, false, 35, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t159_MIs[] =
{
	&m486_MI,
	&m487_MI,
	&m586_MI,
	&m3153_MI,
	NULL
};
extern MethodInfo m486_MI;
extern MethodInfo m487_MI;
static PropertyInfo t159____pixelLightCount_PropertyInfo = 
{
	&t159_TI, "pixelLightCount", &m486_MI, &m487_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m586_MI;
static PropertyInfo t159____shadowDistance_PropertyInfo = 
{
	&t159_TI, "shadowDistance", NULL, &m586_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3153_MI;
static PropertyInfo t159____activeColorSpace_PropertyInfo = 
{
	&t159_TI, "activeColorSpace", &m3153_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t159_PIs[] =
{
	&t159____pixelLightCount_PropertyInfo,
	&t159____shadowDistance_PropertyInfo,
	&t159____activeColorSpace_PropertyInfo,
	NULL
};
static Il2CppMethodReference t159_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t159_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t159_CustomAttributesCacheGenerator_m486(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t159_CustomAttributesCacheGenerator_m487(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t159_CustomAttributesCacheGenerator_m586(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t159_CustomAttributesCacheGenerator_m3153(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t159__CustomAttributeCache_m486 = {
1,
NULL,
&t159_CustomAttributesCacheGenerator_m486
};
CustomAttributesCache t159__CustomAttributeCache_m487 = {
1,
NULL,
&t159_CustomAttributesCacheGenerator_m487
};
CustomAttributesCache t159__CustomAttributeCache_m586 = {
1,
NULL,
&t159_CustomAttributesCacheGenerator_m586
};
CustomAttributesCache t159__CustomAttributeCache_m3153 = {
1,
NULL,
&t159_CustomAttributesCacheGenerator_m3153
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t159_0_0_0;
extern Il2CppType t159_1_0_0;
struct t159;
extern CustomAttributesCache t159__CustomAttributeCache_m486;
extern CustomAttributesCache t159__CustomAttributeCache_m487;
extern CustomAttributesCache t159__CustomAttributeCache_m586;
extern CustomAttributesCache t159__CustomAttributeCache_m3153;
const Il2CppTypeDefinitionMetadata t159_DM = 
{
	NULL, NULL, NULL, NULL, &t57_0_0_0, t159_VT, t159_VTIGM, NULL};
TypeInfo t159_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "QualitySettings", "UnityEngine", t159_MIs, t159_PIs, NULL, NULL, &t159_TI, NULL, &EmptyCustomAttributesCache, &t159_0_0_0, &t159_1_0_0, &t159_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t159), sizeof (t159), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 3, 0, 0, 0, 4, 0, 0};
#include "t36.h"
// Metadata Definition UnityEngine.Mesh
extern TypeInfo t36_TI;
#include "t36MD.h"
extern Il2CppType t37_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t36__CustomAttributeCache_m419;
MethodInfo m419_MI = 
{
	"get_vertices", (methodPointerType)&m419, &t36_TI, &t37_0_0_0, RuntimeInvoker_t9, NULL, &t36__CustomAttributeCache_m419, 2182, 4096, 255, 0, false, false, 36, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t37_0_0_0;
extern Il2CppType t37_0_0_0;
static ParameterInfo t36_m421_ParameterInfos[] = 
{
	{"value", 0, 134217749, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t36__CustomAttributeCache_m421;
MethodInfo m421_MI = 
{
	"set_vertices", (methodPointerType)&m421, &t36_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t36_m421_ParameterInfos, &t36__CustomAttributeCache_m421, 2182, 4096, 255, 1, false, false, 37, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t37_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t36__CustomAttributeCache_m420;
MethodInfo m420_MI = 
{
	"get_normals", (methodPointerType)&m420, &t36_TI, &t37_0_0_0, RuntimeInvoker_t9, NULL, &t36__CustomAttributeCache_m420, 2182, 4096, 255, 0, false, false, 38, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t37_0_0_0;
static ParameterInfo t36_m422_ParameterInfos[] = 
{
	{"value", 0, 134217750, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t36__CustomAttributeCache_m422;
MethodInfo m422_MI = 
{
	"set_normals", (methodPointerType)&m422, &t36_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t36_m422_ParameterInfos, &t36__CustomAttributeCache_m422, 2182, 4096, 255, 1, false, false, 39, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t36_MIs[] =
{
	&m419_MI,
	&m421_MI,
	&m420_MI,
	&m422_MI,
	NULL
};
extern MethodInfo m419_MI;
extern MethodInfo m421_MI;
static PropertyInfo t36____vertices_PropertyInfo = 
{
	&t36_TI, "vertices", &m419_MI, &m421_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m420_MI;
extern MethodInfo m422_MI;
static PropertyInfo t36____normals_PropertyInfo = 
{
	&t36_TI, "normals", &m420_MI, &m422_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t36_PIs[] =
{
	&t36____vertices_PropertyInfo,
	&t36____normals_PropertyInfo,
	NULL
};
static Il2CppMethodReference t36_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t36_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t36_CustomAttributesCacheGenerator_m419(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t36_CustomAttributesCacheGenerator_m421(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t36_CustomAttributesCacheGenerator_m420(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t36_CustomAttributesCacheGenerator_m422(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t36__CustomAttributeCache_m419 = {
1,
NULL,
&t36_CustomAttributesCacheGenerator_m419
};
CustomAttributesCache t36__CustomAttributeCache_m421 = {
1,
NULL,
&t36_CustomAttributesCacheGenerator_m421
};
CustomAttributesCache t36__CustomAttributeCache_m420 = {
1,
NULL,
&t36_CustomAttributesCacheGenerator_m420
};
CustomAttributesCache t36__CustomAttributeCache_m422 = {
1,
NULL,
&t36_CustomAttributesCacheGenerator_m422
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t36_0_0_0;
extern Il2CppType t36_1_0_0;
struct t36;
extern CustomAttributesCache t36__CustomAttributeCache_m419;
extern CustomAttributesCache t36__CustomAttributeCache_m421;
extern CustomAttributesCache t36__CustomAttributeCache_m420;
extern CustomAttributesCache t36__CustomAttributeCache_m422;
const Il2CppTypeDefinitionMetadata t36_DM = 
{
	NULL, NULL, NULL, NULL, &t57_0_0_0, t36_VT, t36_VTIGM, NULL};
TypeInfo t36_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Mesh", "UnityEngine", t36_MIs, t36_PIs, NULL, NULL, &t36_TI, NULL, &EmptyCustomAttributesCache, &t36_0_0_0, &t36_1_0_0, &t36_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t36), sizeof (t36), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 2, 0, 0, 0, 4, 0, 0};
#include "t689.h"
// Metadata Definition UnityEngine.BoneWeight
extern TypeInfo t689_TI;
#include "t689MD.h"
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3154_MI = 
{
	"get_weight0", (methodPointerType)&m3154, &t689_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 40, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t689_m3155_ParameterInfos[] = 
{
	{"value", 0, 134217751, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3155_MI = 
{
	"set_weight0", (methodPointerType)&m3155, &t689_TI, &t122_0_0_0, RuntimeInvoker_t122_t123, t689_m3155_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 41, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3156_MI = 
{
	"get_weight1", (methodPointerType)&m3156, &t689_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 42, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t689_m3157_ParameterInfos[] = 
{
	{"value", 0, 134217752, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3157_MI = 
{
	"set_weight1", (methodPointerType)&m3157, &t689_TI, &t122_0_0_0, RuntimeInvoker_t122_t123, t689_m3157_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 43, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3158_MI = 
{
	"get_weight2", (methodPointerType)&m3158, &t689_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 44, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t689_m3159_ParameterInfos[] = 
{
	{"value", 0, 134217753, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3159_MI = 
{
	"set_weight2", (methodPointerType)&m3159, &t689_TI, &t122_0_0_0, RuntimeInvoker_t122_t123, t689_m3159_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 45, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3160_MI = 
{
	"get_weight3", (methodPointerType)&m3160, &t689_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 46, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t689_m3161_ParameterInfos[] = 
{
	{"value", 0, 134217754, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3161_MI = 
{
	"set_weight3", (methodPointerType)&m3161, &t689_TI, &t122_0_0_0, RuntimeInvoker_t122_t123, t689_m3161_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 47, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3162_MI = 
{
	"get_boneIndex0", (methodPointerType)&m3162, &t689_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 48, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t689_m3163_ParameterInfos[] = 
{
	{"value", 0, 134217755, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3163_MI = 
{
	"set_boneIndex0", (methodPointerType)&m3163, &t689_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t689_m3163_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 49, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3164_MI = 
{
	"get_boneIndex1", (methodPointerType)&m3164, &t689_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 50, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t689_m3165_ParameterInfos[] = 
{
	{"value", 0, 134217756, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3165_MI = 
{
	"set_boneIndex1", (methodPointerType)&m3165, &t689_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t689_m3165_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 51, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3166_MI = 
{
	"get_boneIndex2", (methodPointerType)&m3166, &t689_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 52, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t689_m3167_ParameterInfos[] = 
{
	{"value", 0, 134217757, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3167_MI = 
{
	"set_boneIndex2", (methodPointerType)&m3167, &t689_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t689_m3167_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 53, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3168_MI = 
{
	"get_boneIndex3", (methodPointerType)&m3168, &t689_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 54, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t689_m3169_ParameterInfos[] = 
{
	{"value", 0, 134217758, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3169_MI = 
{
	"set_boneIndex3", (methodPointerType)&m3169, &t689_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t689_m3169_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 55, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3170_MI = 
{
	"GetHashCode", (methodPointerType)&m3170, &t689_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 56, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t689_m3171_ParameterInfos[] = 
{
	{"other", 0, 134217759, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3171_MI = 
{
	"Equals", (methodPointerType)&m3171, &t689_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t689_m3171_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 57, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t689_0_0_0;
extern Il2CppType t689_0_0_0;
extern Il2CppType t689_0_0_0;
static ParameterInfo t689_m3172_ParameterInfos[] = 
{
	{"lhs", 0, 134217760, &EmptyCustomAttributesCache, &t689_0_0_0},
	{"rhs", 1, 134217761, &EmptyCustomAttributesCache, &t689_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t689_t689 (MethodInfo* method, void* obj, void** args);
MethodInfo m3172_MI = 
{
	"op_Equality", (methodPointerType)&m3172, &t689_TI, &t124_0_0_0, RuntimeInvoker_t124_t689_t689, t689_m3172_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 58, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t689_0_0_0;
extern Il2CppType t689_0_0_0;
static ParameterInfo t689_m3173_ParameterInfos[] = 
{
	{"lhs", 0, 134217762, &EmptyCustomAttributesCache, &t689_0_0_0},
	{"rhs", 1, 134217763, &EmptyCustomAttributesCache, &t689_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t689_t689 (MethodInfo* method, void* obj, void** args);
MethodInfo m3173_MI = 
{
	"op_Inequality", (methodPointerType)&m3173, &t689_TI, &t124_0_0_0, RuntimeInvoker_t124_t689_t689, t689_m3173_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 59, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t689_MIs[] =
{
	&m3154_MI,
	&m3155_MI,
	&m3156_MI,
	&m3157_MI,
	&m3158_MI,
	&m3159_MI,
	&m3160_MI,
	&m3161_MI,
	&m3162_MI,
	&m3163_MI,
	&m3164_MI,
	&m3165_MI,
	&m3166_MI,
	&m3167_MI,
	&m3168_MI,
	&m3169_MI,
	&m3170_MI,
	&m3171_MI,
	&m3172_MI,
	&m3173_MI,
	NULL
};
extern Il2CppType t123_0_0_1;
FieldInfo t689_f0_FieldInfo = 
{
	"m_Weight0", &t123_0_0_1, &t689_TI, offsetof(t689, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t689_f1_FieldInfo = 
{
	"m_Weight1", &t123_0_0_1, &t689_TI, offsetof(t689, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t689_f2_FieldInfo = 
{
	"m_Weight2", &t123_0_0_1, &t689_TI, offsetof(t689, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t689_f3_FieldInfo = 
{
	"m_Weight3", &t123_0_0_1, &t689_TI, offsetof(t689, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t689_f4_FieldInfo = 
{
	"m_BoneIndex0", &t125_0_0_1, &t689_TI, offsetof(t689, f4) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t689_f5_FieldInfo = 
{
	"m_BoneIndex1", &t125_0_0_1, &t689_TI, offsetof(t689, f5) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t689_f6_FieldInfo = 
{
	"m_BoneIndex2", &t125_0_0_1, &t689_TI, offsetof(t689, f6) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t689_f7_FieldInfo = 
{
	"m_BoneIndex3", &t125_0_0_1, &t689_TI, offsetof(t689, f7) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t689_FIs[] =
{
	&t689_f0_FieldInfo,
	&t689_f1_FieldInfo,
	&t689_f2_FieldInfo,
	&t689_f3_FieldInfo,
	&t689_f4_FieldInfo,
	&t689_f5_FieldInfo,
	&t689_f6_FieldInfo,
	&t689_f7_FieldInfo,
	NULL
};
extern MethodInfo m3154_MI;
extern MethodInfo m3155_MI;
static PropertyInfo t689____weight0_PropertyInfo = 
{
	&t689_TI, "weight0", &m3154_MI, &m3155_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3156_MI;
extern MethodInfo m3157_MI;
static PropertyInfo t689____weight1_PropertyInfo = 
{
	&t689_TI, "weight1", &m3156_MI, &m3157_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3158_MI;
extern MethodInfo m3159_MI;
static PropertyInfo t689____weight2_PropertyInfo = 
{
	&t689_TI, "weight2", &m3158_MI, &m3159_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3160_MI;
extern MethodInfo m3161_MI;
static PropertyInfo t689____weight3_PropertyInfo = 
{
	&t689_TI, "weight3", &m3160_MI, &m3161_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3162_MI;
extern MethodInfo m3163_MI;
static PropertyInfo t689____boneIndex0_PropertyInfo = 
{
	&t689_TI, "boneIndex0", &m3162_MI, &m3163_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3164_MI;
extern MethodInfo m3165_MI;
static PropertyInfo t689____boneIndex1_PropertyInfo = 
{
	&t689_TI, "boneIndex1", &m3164_MI, &m3165_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3166_MI;
extern MethodInfo m3167_MI;
static PropertyInfo t689____boneIndex2_PropertyInfo = 
{
	&t689_TI, "boneIndex2", &m3166_MI, &m3167_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3168_MI;
extern MethodInfo m3169_MI;
static PropertyInfo t689____boneIndex3_PropertyInfo = 
{
	&t689_TI, "boneIndex3", &m3168_MI, &m3169_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t689_PIs[] =
{
	&t689____weight0_PropertyInfo,
	&t689____weight1_PropertyInfo,
	&t689____weight2_PropertyInfo,
	&t689____weight3_PropertyInfo,
	&t689____boneIndex0_PropertyInfo,
	&t689____boneIndex1_PropertyInfo,
	&t689____boneIndex2_PropertyInfo,
	&t689____boneIndex3_PropertyInfo,
	NULL
};
extern MethodInfo m3171_MI;
extern MethodInfo m3170_MI;
static Il2CppMethodReference t689_VT[] =
{
	&m3171_MI,
	&m646_MI,
	&m3170_MI,
	&m682_MI,
};
static bool t689_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t689_1_0_0;
const Il2CppTypeDefinitionMetadata t689_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t689_VT, t689_VTIGM, NULL};
TypeInfo t689_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "BoneWeight", "UnityEngine", t689_MIs, t689_PIs, t689_FIs, NULL, &t689_TI, NULL, &EmptyCustomAttributesCache, &t689_0_0_0, &t689_1_0_0, &t689_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t689)+ sizeof (Il2CppObject), sizeof (t689)+ sizeof (Il2CppObject), 0, sizeof(t689 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 20, 8, 8, 0, 0, 4, 0, 0};
#include "t144.h"
// Metadata Definition UnityEngine.Renderer
extern TypeInfo t144_TI;
#include "t144MD.h"
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t144__CustomAttributeCache_m484;
MethodInfo m484_MI = 
{
	"get_enabled", (methodPointerType)&m484, &t144_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &t144__CustomAttributeCache_m484, 2182, 4096, 255, 0, false, false, 60, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t40_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t144__CustomAttributeCache_m407;
MethodInfo m407_MI = 
{
	"get_sharedMaterial", (methodPointerType)&m407, &t144_TI, &t40_0_0_0, RuntimeInvoker_t9, NULL, &t144__CustomAttributeCache_m407, 2182, 4096, 255, 0, false, false, 61, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t144__CustomAttributeCache_m2553;
MethodInfo m2553_MI = 
{
	"get_sortingLayerID", (methodPointerType)&m2553, &t144_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t144__CustomAttributeCache_m2553, 2182, 4096, 255, 0, false, false, 62, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t144__CustomAttributeCache_m2554;
MethodInfo m2554_MI = 
{
	"get_sortingOrder", (methodPointerType)&m2554, &t144_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t144__CustomAttributeCache_m2554, 2182, 4096, 255, 0, false, false, 63, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t144_MIs[] =
{
	&m484_MI,
	&m407_MI,
	&m2553_MI,
	&m2554_MI,
	NULL
};
extern MethodInfo m484_MI;
static PropertyInfo t144____enabled_PropertyInfo = 
{
	&t144_TI, "enabled", &m484_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m407_MI;
static PropertyInfo t144____sharedMaterial_PropertyInfo = 
{
	&t144_TI, "sharedMaterial", &m407_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2553_MI;
static PropertyInfo t144____sortingLayerID_PropertyInfo = 
{
	&t144_TI, "sortingLayerID", &m2553_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2554_MI;
static PropertyInfo t144____sortingOrder_PropertyInfo = 
{
	&t144_TI, "sortingOrder", &m2554_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t144_PIs[] =
{
	&t144____enabled_PropertyInfo,
	&t144____sharedMaterial_PropertyInfo,
	&t144____sortingLayerID_PropertyInfo,
	&t144____sortingOrder_PropertyInfo,
	NULL
};
static Il2CppMethodReference t144_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t144_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t144_CustomAttributesCacheGenerator_m484(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t144_CustomAttributesCacheGenerator_m407(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t144_CustomAttributesCacheGenerator_m2553(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t144_CustomAttributesCacheGenerator_m2554(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t144__CustomAttributeCache_m484 = {
1,
NULL,
&t144_CustomAttributesCacheGenerator_m484
};
CustomAttributesCache t144__CustomAttributeCache_m407 = {
1,
NULL,
&t144_CustomAttributesCacheGenerator_m407
};
CustomAttributesCache t144__CustomAttributeCache_m2553 = {
1,
NULL,
&t144_CustomAttributesCacheGenerator_m2553
};
CustomAttributesCache t144__CustomAttributeCache_m2554 = {
1,
NULL,
&t144_CustomAttributesCacheGenerator_m2554
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t144_0_0_0;
extern Il2CppType t144_1_0_0;
extern Il2CppType t133_0_0_0;
struct t144;
extern CustomAttributesCache t144__CustomAttributeCache_m484;
extern CustomAttributesCache t144__CustomAttributeCache_m407;
extern CustomAttributesCache t144__CustomAttributeCache_m2553;
extern CustomAttributesCache t144__CustomAttributeCache_m2554;
const Il2CppTypeDefinitionMetadata t144_DM = 
{
	NULL, NULL, NULL, NULL, &t133_0_0_0, t144_VT, t144_VTIGM, NULL};
TypeInfo t144_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Renderer", "UnityEngine", t144_MIs, t144_PIs, NULL, NULL, &t144_TI, NULL, &EmptyCustomAttributesCache, &t144_0_0_0, &t144_1_0_0, &t144_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t144), sizeof (t144), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 4, 0, 0, 0, 4, 0, 0};
#include "t149.h"
// Metadata Definition UnityEngine.Skybox
extern TypeInfo t149_TI;
#include "t149MD.h"
extern Il2CppType t40_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t149__CustomAttributeCache_m452;
MethodInfo m452_MI = 
{
	"get_material", (methodPointerType)&m452, &t149_TI, &t40_0_0_0, RuntimeInvoker_t9, NULL, &t149__CustomAttributeCache_m452, 2182, 4096, 255, 0, false, false, 64, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t40_0_0_0;
extern Il2CppType t40_0_0_0;
static ParameterInfo t149_m453_ParameterInfos[] = 
{
	{"value", 0, 134217764, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t149__CustomAttributeCache_m453;
MethodInfo m453_MI = 
{
	"set_material", (methodPointerType)&m453, &t149_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t149_m453_ParameterInfos, &t149__CustomAttributeCache_m453, 2182, 4096, 255, 1, false, false, 65, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t149_MIs[] =
{
	&m452_MI,
	&m453_MI,
	NULL
};
extern MethodInfo m452_MI;
extern MethodInfo m453_MI;
static PropertyInfo t149____material_PropertyInfo = 
{
	&t149_TI, "material", &m452_MI, &m453_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t149_PIs[] =
{
	&t149____material_PropertyInfo,
	NULL
};
static Il2CppMethodReference t149_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t149_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t149_CustomAttributesCacheGenerator_m452(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t149_CustomAttributesCacheGenerator_m453(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t149__CustomAttributeCache_m452 = {
1,
NULL,
&t149_CustomAttributesCacheGenerator_m452
};
CustomAttributesCache t149__CustomAttributeCache_m453 = {
1,
NULL,
&t149_CustomAttributesCacheGenerator_m453
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t149_0_0_0;
extern Il2CppType t149_1_0_0;
extern Il2CppType t145_0_0_0;
struct t149;
extern CustomAttributesCache t149__CustomAttributeCache_m452;
extern CustomAttributesCache t149__CustomAttributeCache_m453;
const Il2CppTypeDefinitionMetadata t149_DM = 
{
	NULL, NULL, NULL, NULL, &t145_0_0_0, t149_VT, t149_VTIGM, NULL};
TypeInfo t149_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Skybox", "UnityEngine", t149_MIs, t149_PIs, NULL, NULL, &t149_TI, NULL, &EmptyCustomAttributesCache, &t149_0_0_0, &t149_1_0_0, &t149_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t149), sizeof (t149), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 0, 0, 0, 4, 0, 0};
#include "t140.h"
// Metadata Definition UnityEngine.Screen
extern TypeInfo t140_TI;
#include "t140MD.h"
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t140__CustomAttributeCache_m385;
MethodInfo m385_MI = 
{
	"get_width", (methodPointerType)&m385, &t140_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t140__CustomAttributeCache_m385, 2198, 4096, 255, 0, false, false, 66, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t140__CustomAttributeCache_m621;
MethodInfo m621_MI = 
{
	"get_height", (methodPointerType)&m621, &t140_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t140__CustomAttributeCache_m621, 2198, 4096, 255, 0, false, false, 67, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t140__CustomAttributeCache_m2923;
MethodInfo m2923_MI = 
{
	"get_dpi", (methodPointerType)&m2923, &t140_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t140__CustomAttributeCache_m2923, 2198, 4096, 255, 0, false, false, 68, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t140_MIs[] =
{
	&m385_MI,
	&m621_MI,
	&m2923_MI,
	NULL
};
extern MethodInfo m385_MI;
static PropertyInfo t140____width_PropertyInfo = 
{
	&t140_TI, "width", &m385_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m621_MI;
static PropertyInfo t140____height_PropertyInfo = 
{
	&t140_TI, "height", &m621_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2923_MI;
static PropertyInfo t140____dpi_PropertyInfo = 
{
	&t140_TI, "dpi", &m2923_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t140_PIs[] =
{
	&t140____width_PropertyInfo,
	&t140____height_PropertyInfo,
	&t140____dpi_PropertyInfo,
	NULL
};
static Il2CppMethodReference t140_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t140_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t140_CustomAttributesCacheGenerator_m385(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t140_CustomAttributesCacheGenerator_m621(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t140_CustomAttributesCacheGenerator_m2923(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t140__CustomAttributeCache_m385 = {
1,
NULL,
&t140_CustomAttributesCacheGenerator_m385
};
CustomAttributesCache t140__CustomAttributeCache_m621 = {
1,
NULL,
&t140_CustomAttributesCacheGenerator_m621
};
CustomAttributesCache t140__CustomAttributeCache_m2923 = {
1,
NULL,
&t140_CustomAttributesCacheGenerator_m2923
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t140_0_0_0;
extern Il2CppType t140_1_0_0;
struct t140;
extern CustomAttributesCache t140__CustomAttributeCache_m385;
extern CustomAttributesCache t140__CustomAttributeCache_m621;
extern CustomAttributesCache t140__CustomAttributeCache_m2923;
const Il2CppTypeDefinitionMetadata t140_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t140_VT, t140_VTIGM, NULL};
TypeInfo t140_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Screen", "UnityEngine", t140_MIs, t140_PIs, NULL, NULL, &t140_TI, NULL, &EmptyCustomAttributesCache, &t140_0_0_0, &t140_1_0_0, &t140_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t140), sizeof (t140), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 3, 0, 0, 0, 4, 0, 0};
#include "t153.h"
// Metadata Definition UnityEngine.GL
extern TypeInfo t153_TI;
#include "t153MD.h"
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t153_m454_ParameterInfos[] = 
{
	{"value", 0, 134217765, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t153__CustomAttributeCache_m454;
MethodInfo m454_MI = 
{
	"set_invertCulling", (methodPointerType)&m454, &t153_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t153_m454_ParameterInfos, &t153__CustomAttributeCache_m454, 2198, 4096, 255, 1, false, false, 69, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t153_MIs[] =
{
	&m454_MI,
	NULL
};
extern MethodInfo m454_MI;
static PropertyInfo t153____invertCulling_PropertyInfo = 
{
	&t153_TI, "invertCulling", NULL, &m454_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t153_PIs[] =
{
	&t153____invertCulling_PropertyInfo,
	NULL
};
static Il2CppMethodReference t153_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t153_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t153_CustomAttributesCacheGenerator_m454(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t153__CustomAttributeCache_m454 = {
1,
NULL,
&t153_CustomAttributesCacheGenerator_m454
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t153_0_0_0;
extern Il2CppType t153_1_0_0;
struct t153;
extern CustomAttributesCache t153__CustomAttributeCache_m454;
const Il2CppTypeDefinitionMetadata t153_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t153_VT, t153_VTIGM, NULL};
TypeInfo t153_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GL", "UnityEngine", t153_MIs, t153_PIs, NULL, NULL, &t153_TI, NULL, &EmptyCustomAttributesCache, &t153_0_0_0, &t153_1_0_0, &t153_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t153), sizeof (t153), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 4, 0, 0};
#include "t148.h"
// Metadata Definition UnityEngine.Texture
extern TypeInfo t148_TI;
#include "t148MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3174_MI = 
{
	".ctor", (methodPointerType)&m3174, &t148_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 70, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t148_0_0_0;
extern Il2CppType t148_0_0_0;
static ParameterInfo t148_m3175_ParameterInfos[] = 
{
	{"mono", 0, 134217766, &EmptyCustomAttributesCache, &t148_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t148__CustomAttributeCache_m3175;
MethodInfo m3175_MI = 
{
	"Internal_GetWidth", (methodPointerType)&m3175, &t148_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t148_m3175_ParameterInfos, &t148__CustomAttributeCache_m3175, 145, 4096, 255, 1, false, false, 71, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t148_0_0_0;
static ParameterInfo t148_m3176_ParameterInfos[] = 
{
	{"mono", 0, 134217767, &EmptyCustomAttributesCache, &t148_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t148__CustomAttributeCache_m3176;
MethodInfo m3176_MI = 
{
	"Internal_GetHeight", (methodPointerType)&m3176, &t148_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t148_m3176_ParameterInfos, &t148__CustomAttributeCache_m3176, 145, 4096, 255, 1, false, false, 72, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m2704_MI = 
{
	"get_width", (methodPointerType)&m2704, &t148_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 4, 0, false, false, 73, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t148_m3177_ParameterInfos[] = 
{
	{"value", 0, 134217768, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3177_MI = 
{
	"set_width", (methodPointerType)&m3177, &t148_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t148_m3177_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 5, 1, false, false, 74, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m2706_MI = 
{
	"get_height", (methodPointerType)&m2706, &t148_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 75, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t148_m3178_ParameterInfos[] = 
{
	{"value", 0, 134217769, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3178_MI = 
{
	"set_height", (methodPointerType)&m3178, &t148_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t148_m3178_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 7, 1, false, false, 76, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t148_MIs[] =
{
	&m3174_MI,
	&m3175_MI,
	&m3176_MI,
	&m2704_MI,
	&m3177_MI,
	&m2706_MI,
	&m3178_MI,
	NULL
};
extern MethodInfo m2704_MI;
extern MethodInfo m3177_MI;
static PropertyInfo t148____width_PropertyInfo = 
{
	&t148_TI, "width", &m2704_MI, &m3177_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2706_MI;
extern MethodInfo m3178_MI;
static PropertyInfo t148____height_PropertyInfo = 
{
	&t148_TI, "height", &m2706_MI, &m3178_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t148_PIs[] =
{
	&t148____width_PropertyInfo,
	&t148____height_PropertyInfo,
	NULL
};
static Il2CppMethodReference t148_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
	&m2704_MI,
	&m3177_MI,
	&m2706_MI,
	&m3178_MI,
};
static bool t148_VTIGM[] =
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
void t148_CustomAttributesCacheGenerator_m3175(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t148_CustomAttributesCacheGenerator_m3176(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t148__CustomAttributeCache_m3175 = {
1,
NULL,
&t148_CustomAttributesCacheGenerator_m3175
};
CustomAttributesCache t148__CustomAttributeCache_m3176 = {
1,
NULL,
&t148_CustomAttributesCacheGenerator_m3176
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t148_1_0_0;
struct t148;
extern CustomAttributesCache t148__CustomAttributeCache_m3175;
extern CustomAttributesCache t148__CustomAttributeCache_m3176;
const Il2CppTypeDefinitionMetadata t148_DM = 
{
	NULL, NULL, NULL, NULL, &t57_0_0_0, t148_VT, t148_VTIGM, NULL};
TypeInfo t148_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Texture", "UnityEngine", t148_MIs, t148_PIs, NULL, NULL, &t148_TI, NULL, &EmptyCustomAttributesCache, &t148_0_0_0, &t148_1_0_0, &t148_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t148), sizeof (t148), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 8, 0, 0};
#include "t432.h"
// Metadata Definition UnityEngine.Texture2D
extern TypeInfo t432_TI;
#include "t432MD.h"
extern Il2CppType t432_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t432__CustomAttributeCache_m2610;
MethodInfo m2610_MI = 
{
	"get_whiteTexture", (methodPointerType)&m2610, &t432_TI, &t432_0_0_0, RuntimeInvoker_t9, NULL, &t432__CustomAttributeCache_m2610, 2198, 4096, 255, 0, false, false, 77, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t432_m2707_ParameterInfos[] = 
{
	{"u", 0, 134217770, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"v", 1, 134217771, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t43_t123_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t432__CustomAttributeCache_m2707;
MethodInfo m2707_MI = 
{
	"GetPixelBilinear", (methodPointerType)&m2707, &t432_TI, &t43_0_0_0, RuntimeInvoker_t43_t123_t123, t432_m2707_ParameterInfos, &t432__CustomAttributeCache_m2707, 134, 4096, 255, 2, false, false, 78, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t432_MIs[] =
{
	&m2610_MI,
	&m2707_MI,
	NULL
};
extern MethodInfo m2610_MI;
static PropertyInfo t432____whiteTexture_PropertyInfo = 
{
	&t432_TI, "whiteTexture", &m2610_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t432_PIs[] =
{
	&t432____whiteTexture_PropertyInfo,
	NULL
};
static Il2CppMethodReference t432_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
	&m2704_MI,
	&m3177_MI,
	&m2706_MI,
	&m3178_MI,
};
static bool t432_VTIGM[] =
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
void t432_CustomAttributesCacheGenerator_m2610(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t432_CustomAttributesCacheGenerator_m2707(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t432__CustomAttributeCache_m2610 = {
1,
NULL,
&t432_CustomAttributesCacheGenerator_m2610
};
CustomAttributesCache t432__CustomAttributeCache_m2707 = {
1,
NULL,
&t432_CustomAttributesCacheGenerator_m2707
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t432_0_0_0;
extern Il2CppType t432_1_0_0;
struct t432;
extern CustomAttributesCache t432__CustomAttributeCache_m2610;
extern CustomAttributesCache t432__CustomAttributeCache_m2707;
const Il2CppTypeDefinitionMetadata t432_DM = 
{
	NULL, NULL, NULL, NULL, &t148_0_0_0, t432_VT, t432_VTIGM, NULL};
TypeInfo t432_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Texture2D", "UnityEngine", t432_MIs, t432_PIs, NULL, NULL, &t432_TI, NULL, &EmptyCustomAttributesCache, &t432_0_0_0, &t432_1_0_0, &t432_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t432), sizeof (t432), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 0, 0, 0, 8, 0, 0};
#include "t44.h"
// Metadata Definition UnityEngine.RenderTexture
extern TypeInfo t44_TI;
#include "t44MD.h"
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t44_m441_ParameterInfos[] = 
{
	{"width", 0, 134217772, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"height", 1, 134217773, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"depth", 2, 134217774, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m441_MI = 
{
	".ctor", (methodPointerType)&m441, &t44_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t125_t125, t44_m441_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 79, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t44_0_0_0;
extern Il2CppType t44_0_0_0;
extern CustomAttributesCache t44__CustomAttributeCache_t44_m3179_Arg0_ParameterInfo;
static ParameterInfo t44_m3179_ParameterInfos[] = 
{
	{"rt", 0, 134217775, &t44__CustomAttributeCache_t44_m3179_Arg0_ParameterInfo, &t44_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t44__CustomAttributeCache_m3179;
MethodInfo m3179_MI = 
{
	"Internal_CreateRenderTexture", (methodPointerType)&m3179, &t44_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t44_m3179_ParameterInfos, &t44__CustomAttributeCache_m3179, 145, 4096, 255, 1, false, false, 80, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t44_0_0_0;
static ParameterInfo t44_m3180_ParameterInfos[] = 
{
	{"mono", 0, 134217776, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t44__CustomAttributeCache_m3180;
MethodInfo m3180_MI = 
{
	"Internal_GetWidth", (methodPointerType)&m3180, &t44_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t44_m3180_ParameterInfos, &t44__CustomAttributeCache_m3180, 145, 4096, 255, 1, false, false, 81, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t44_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t44_m3181_ParameterInfos[] = 
{
	{"mono", 0, 134217777, &EmptyCustomAttributesCache, &t44_0_0_0},
	{"width", 1, 134217778, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t44__CustomAttributeCache_m3181;
MethodInfo m3181_MI = 
{
	"Internal_SetWidth", (methodPointerType)&m3181, &t44_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t44_m3181_ParameterInfos, &t44__CustomAttributeCache_m3181, 145, 4096, 255, 2, false, false, 82, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t44_0_0_0;
static ParameterInfo t44_m3182_ParameterInfos[] = 
{
	{"mono", 0, 134217779, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t44__CustomAttributeCache_m3182;
MethodInfo m3182_MI = 
{
	"Internal_GetHeight", (methodPointerType)&m3182, &t44_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t44_m3182_ParameterInfos, &t44__CustomAttributeCache_m3182, 145, 4096, 255, 1, false, false, 83, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t44_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t44_m3183_ParameterInfos[] = 
{
	{"mono", 0, 134217780, &EmptyCustomAttributesCache, &t44_0_0_0},
	{"width", 1, 134217781, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t44__CustomAttributeCache_m3183;
MethodInfo m3183_MI = 
{
	"Internal_SetHeight", (methodPointerType)&m3183, &t44_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t44_m3183_ParameterInfos, &t44__CustomAttributeCache_m3183, 145, 4096, 255, 2, false, false, 84, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t44_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t44_m3184_ParameterInfos[] = 
{
	{"mono", 0, 134217782, &EmptyCustomAttributesCache, &t44_0_0_0},
	{"sRGB", 1, 134217783, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t44__CustomAttributeCache_m3184;
MethodInfo m3184_MI = 
{
	"Internal_SetSRGBReadWrite", (methodPointerType)&m3184, &t44_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t44_m3184_ParameterInfos, &t44__CustomAttributeCache_m3184, 145, 4096, 255, 2, false, false, 85, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3185_MI = 
{
	"get_width", (methodPointerType)&m3185, &t44_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 86, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t44_m3186_ParameterInfos[] = 
{
	{"value", 0, 134217784, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3186_MI = 
{
	"set_width", (methodPointerType)&m3186, &t44_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t44_m3186_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 5, 1, false, false, 87, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3187_MI = 
{
	"get_height", (methodPointerType)&m3187, &t44_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 88, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t44_m3188_ParameterInfos[] = 
{
	{"value", 0, 134217785, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3188_MI = 
{
	"set_height", (methodPointerType)&m3188, &t44_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t44_m3188_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 7, 1, false, false, 89, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t44_m3189_ParameterInfos[] = 
{
	{"value", 0, 134217786, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t44__CustomAttributeCache_m3189;
MethodInfo m3189_MI = 
{
	"set_depth", (methodPointerType)&m3189, &t44_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t44_m3189_ParameterInfos, &t44__CustomAttributeCache_m3189, 2182, 4096, 255, 1, false, false, 90, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t44_m513_ParameterInfos[] = 
{
	{"value", 0, 134217787, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t44__CustomAttributeCache_m513;
MethodInfo m513_MI = 
{
	"set_isPowerOfTwo", (methodPointerType)&m513, &t44_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t44_m513_ParameterInfos, &t44__CustomAttributeCache_m513, 2182, 4096, 255, 1, false, false, 91, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t162_0_0_0;
static ParameterInfo t44_m3190_ParameterInfos[] = 
{
	{"value", 0, 134217788, &EmptyCustomAttributesCache, &t162_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t44__CustomAttributeCache_m3190;
MethodInfo m3190_MI = 
{
	"set_format", (methodPointerType)&m3190, &t44_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t44_m3190_ParameterInfos, &t44__CustomAttributeCache_m3190, 2182, 4096, 255, 1, false, false, 92, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t44_MIs[] =
{
	&m441_MI,
	&m3179_MI,
	&m3180_MI,
	&m3181_MI,
	&m3182_MI,
	&m3183_MI,
	&m3184_MI,
	&m3185_MI,
	&m3186_MI,
	&m3187_MI,
	&m3188_MI,
	&m3189_MI,
	&m513_MI,
	&m3190_MI,
	NULL
};
extern MethodInfo m3185_MI;
extern MethodInfo m3186_MI;
static PropertyInfo t44____width_PropertyInfo = 
{
	&t44_TI, "width", &m3185_MI, &m3186_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3187_MI;
extern MethodInfo m3188_MI;
static PropertyInfo t44____height_PropertyInfo = 
{
	&t44_TI, "height", &m3187_MI, &m3188_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3189_MI;
static PropertyInfo t44____depth_PropertyInfo = 
{
	&t44_TI, "depth", NULL, &m3189_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m513_MI;
static PropertyInfo t44____isPowerOfTwo_PropertyInfo = 
{
	&t44_TI, "isPowerOfTwo", NULL, &m513_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3190_MI;
static PropertyInfo t44____format_PropertyInfo = 
{
	&t44_TI, "format", NULL, &m3190_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t44_PIs[] =
{
	&t44____width_PropertyInfo,
	&t44____height_PropertyInfo,
	&t44____depth_PropertyInfo,
	&t44____isPowerOfTwo_PropertyInfo,
	&t44____format_PropertyInfo,
	NULL
};
static Il2CppMethodReference t44_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
	&m3185_MI,
	&m3186_MI,
	&m3187_MI,
	&m3188_MI,
};
static bool t44_VTIGM[] =
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
void t44_CustomAttributesCacheGenerator_m3179(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t44_CustomAttributesCacheGenerator_t44_m3179_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t845 * tmp;
		tmp = (t845 *)il2cpp_codegen_object_new (&t845_TI);
		m4122(tmp, &m4122_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t44_CustomAttributesCacheGenerator_m3180(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t44_CustomAttributesCacheGenerator_m3181(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t44_CustomAttributesCacheGenerator_m3182(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t44_CustomAttributesCacheGenerator_m3183(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t44_CustomAttributesCacheGenerator_m3184(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t44_CustomAttributesCacheGenerator_m3189(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t44_CustomAttributesCacheGenerator_m513(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t44_CustomAttributesCacheGenerator_m3190(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t44__CustomAttributeCache_m3179 = {
1,
NULL,
&t44_CustomAttributesCacheGenerator_m3179
};
CustomAttributesCache t44__CustomAttributeCache_t44_m3179_Arg0_ParameterInfo = {
1,
NULL,
&t44_CustomAttributesCacheGenerator_t44_m3179_Arg0_ParameterInfo
};
CustomAttributesCache t44__CustomAttributeCache_m3180 = {
1,
NULL,
&t44_CustomAttributesCacheGenerator_m3180
};
CustomAttributesCache t44__CustomAttributeCache_m3181 = {
1,
NULL,
&t44_CustomAttributesCacheGenerator_m3181
};
CustomAttributesCache t44__CustomAttributeCache_m3182 = {
1,
NULL,
&t44_CustomAttributesCacheGenerator_m3182
};
CustomAttributesCache t44__CustomAttributeCache_m3183 = {
1,
NULL,
&t44_CustomAttributesCacheGenerator_m3183
};
CustomAttributesCache t44__CustomAttributeCache_m3184 = {
1,
NULL,
&t44_CustomAttributesCacheGenerator_m3184
};
CustomAttributesCache t44__CustomAttributeCache_m3189 = {
1,
NULL,
&t44_CustomAttributesCacheGenerator_m3189
};
CustomAttributesCache t44__CustomAttributeCache_m513 = {
1,
NULL,
&t44_CustomAttributesCacheGenerator_m513
};
CustomAttributesCache t44__CustomAttributeCache_m3190 = {
1,
NULL,
&t44_CustomAttributesCacheGenerator_m3190
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t44_1_0_0;
struct t44;
extern CustomAttributesCache t44__CustomAttributeCache_m3179;
extern CustomAttributesCache t44__CustomAttributeCache_m3180;
extern CustomAttributesCache t44__CustomAttributeCache_m3181;
extern CustomAttributesCache t44__CustomAttributeCache_m3182;
extern CustomAttributesCache t44__CustomAttributeCache_m3183;
extern CustomAttributesCache t44__CustomAttributeCache_m3184;
extern CustomAttributesCache t44__CustomAttributeCache_m3189;
extern CustomAttributesCache t44__CustomAttributeCache_m513;
extern CustomAttributesCache t44__CustomAttributeCache_m3190;
const Il2CppTypeDefinitionMetadata t44_DM = 
{
	NULL, NULL, NULL, NULL, &t148_0_0_0, t44_VT, t44_VTIGM, NULL};
TypeInfo t44_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "RenderTexture", "UnityEngine", t44_MIs, t44_PIs, NULL, NULL, &t44_TI, NULL, &EmptyCustomAttributesCache, &t44_0_0_0, &t44_1_0_0, &t44_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t44), sizeof (t44), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 14, 5, 0, 0, 0, 8, 0, 0};
#include "t690.h"
// Metadata Definition UnityEngine.ReflectionProbe
extern TypeInfo t690_TI;
#include "t690MD.h"
static MethodInfo* t690_MIs[] =
{
	NULL
};
static Il2CppMethodReference t690_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t690_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t690_0_0_0;
extern Il2CppType t690_1_0_0;
struct t690;
const Il2CppTypeDefinitionMetadata t690_DM = 
{
	NULL, NULL, NULL, NULL, &t145_0_0_0, t690_VT, t690_VTIGM, NULL};
TypeInfo t690_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "ReflectionProbe", "UnityEngine", t690_MIs, NULL, NULL, NULL, &t690_TI, NULL, &EmptyCustomAttributesCache, &t690_0_0_0, &t690_1_0_0, &t690_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t690), sizeof (t690), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#include "t691.h"
// Metadata Definition UnityEngine.GUIElement
extern TypeInfo t691_TI;
#include "t691MD.h"
static MethodInfo* t691_MIs[] =
{
	NULL
};
static Il2CppMethodReference t691_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t691_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t691_0_0_0;
extern Il2CppType t691_1_0_0;
struct t691;
const Il2CppTypeDefinitionMetadata t691_DM = 
{
	NULL, NULL, NULL, NULL, &t145_0_0_0, t691_VT, t691_VTIGM, NULL};
TypeInfo t691_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GUIElement", "UnityEngine", t691_MIs, NULL, NULL, NULL, &t691_TI, NULL, &EmptyCustomAttributesCache, &t691_0_0_0, &t691_1_0_0, &t691_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t691), sizeof (t691), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#include "t197.h"
// Metadata Definition UnityEngine.GUITexture
extern TypeInfo t197_TI;
#include "t197MD.h"
static MethodInfo* t197_MIs[] =
{
	NULL
};
static Il2CppMethodReference t197_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t197_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t197_0_0_0;
extern Il2CppType t197_1_0_0;
struct t197;
const Il2CppTypeDefinitionMetadata t197_DM = 
{
	NULL, NULL, NULL, NULL, &t691_0_0_0, t197_VT, t197_VTIGM, NULL};
TypeInfo t197_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GUITexture", "UnityEngine", t197_MIs, NULL, NULL, NULL, &t197_TI, NULL, &EmptyCustomAttributesCache, &t197_0_0_0, &t197_1_0_0, &t197_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t197), sizeof (t197), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#include "t692.h"
// Metadata Definition UnityEngine.GUILayer
extern TypeInfo t692_TI;
#include "t692MD.h"
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t692_m3191_ParameterInfos[] = 
{
	{"screenPosition", 0, 134217789, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t691_0_0_0;
extern void* RuntimeInvoker_t9_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3191_MI = 
{
	"HitTest", (methodPointerType)&m3191, &t692_TI, &t691_0_0_0, RuntimeInvoker_t9_t13, t692_m3191_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 93, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t692_0_0_0;
extern Il2CppType t692_0_0_0;
extern Il2CppType t13_1_0_0;
extern Il2CppType t13_1_0_0;
static ParameterInfo t692_m3192_ParameterInfos[] = 
{
	{"self", 0, 134217790, &EmptyCustomAttributesCache, &t692_0_0_0},
	{"screenPosition", 1, 134217791, &EmptyCustomAttributesCache, &t13_1_0_0},
};
extern Il2CppType t691_0_0_0;
extern void* RuntimeInvoker_t9_t9_t946 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t692__CustomAttributeCache_m3192;
MethodInfo m3192_MI = 
{
	"INTERNAL_CALL_HitTest", (methodPointerType)&m3192, &t692_TI, &t691_0_0_0, RuntimeInvoker_t9_t9_t946, t692_m3192_ParameterInfos, &t692__CustomAttributeCache_m3192, 145, 4096, 255, 2, false, false, 94, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t692_MIs[] =
{
	&m3191_MI,
	&m3192_MI,
	NULL
};
static Il2CppMethodReference t692_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t692_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t692_CustomAttributesCacheGenerator_m3192(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t692__CustomAttributeCache_m3192 = {
1,
NULL,
&t692_CustomAttributesCacheGenerator_m3192
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t692_1_0_0;
struct t692;
extern CustomAttributesCache t692__CustomAttributeCache_m3192;
const Il2CppTypeDefinitionMetadata t692_DM = 
{
	NULL, NULL, NULL, NULL, &t145_0_0_0, t692_VT, t692_VTIGM, NULL};
TypeInfo t692_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GUILayer", "UnityEngine", t692_MIs, NULL, NULL, NULL, &t692_TI, NULL, &EmptyCustomAttributesCache, &t692_0_0_0, &t692_1_0_0, &t692_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t692), sizeof (t692), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 4, 0, 0};
#include "t693.h"
// Metadata Definition UnityEngine.GradientColorKey
extern TypeInfo t693_TI;
#include "t693MD.h"
extern Il2CppType t43_0_0_0;
extern Il2CppType t43_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t693_m3193_ParameterInfos[] = 
{
	{"col", 0, 134217792, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"time", 1, 134217793, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t43_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3193_MI = 
{
	".ctor", (methodPointerType)&m3193, &t693_TI, &t122_0_0_0, RuntimeInvoker_t122_t43_t123, t693_m3193_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 95, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t693_MIs[] =
{
	&m3193_MI,
	NULL
};
extern Il2CppType t43_0_0_6;
FieldInfo t693_f0_FieldInfo = 
{
	"color", &t43_0_0_6, &t693_TI, offsetof(t693, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t693_f1_FieldInfo = 
{
	"time", &t123_0_0_6, &t693_TI, offsetof(t693, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t693_FIs[] =
{
	&t693_f0_FieldInfo,
	&t693_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t693_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t693_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t693_0_0_0;
extern Il2CppType t693_1_0_0;
const Il2CppTypeDefinitionMetadata t693_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t693_VT, t693_VTIGM, NULL};
TypeInfo t693_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GradientColorKey", "UnityEngine", t693_MIs, NULL, t693_FIs, NULL, &t693_TI, NULL, &EmptyCustomAttributesCache, &t693_0_0_0, &t693_1_0_0, &t693_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t693)+ sizeof (Il2CppObject), sizeof (t693)+ sizeof (Il2CppObject), 0, sizeof(t693 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t694.h"
// Metadata Definition UnityEngine.GradientAlphaKey
extern TypeInfo t694_TI;
#include "t694MD.h"
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t694_m3194_ParameterInfos[] = 
{
	{"alpha", 0, 134217794, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"time", 1, 134217795, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3194_MI = 
{
	".ctor", (methodPointerType)&m3194, &t694_TI, &t122_0_0_0, RuntimeInvoker_t122_t123_t123, t694_m3194_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 96, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t694_MIs[] =
{
	&m3194_MI,
	NULL
};
extern Il2CppType t123_0_0_6;
FieldInfo t694_f0_FieldInfo = 
{
	"alpha", &t123_0_0_6, &t694_TI, offsetof(t694, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t694_f1_FieldInfo = 
{
	"time", &t123_0_0_6, &t694_TI, offsetof(t694, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t694_FIs[] =
{
	&t694_f0_FieldInfo,
	&t694_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t694_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t694_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t694_0_0_0;
extern Il2CppType t694_1_0_0;
const Il2CppTypeDefinitionMetadata t694_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t694_VT, t694_VTIGM, NULL};
TypeInfo t694_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GradientAlphaKey", "UnityEngine", t694_MIs, NULL, t694_FIs, NULL, &t694_TI, NULL, &EmptyCustomAttributesCache, &t694_0_0_0, &t694_1_0_0, &t694_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t694)+ sizeof (Il2CppObject), sizeof (t694)+ sizeof (Il2CppObject), 0, sizeof(t694 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t695.h"
// Metadata Definition UnityEngine.Gradient
extern TypeInfo t695_TI;
#include "t695MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3195_MI = 
{
	".ctor", (methodPointerType)&m3195, &t695_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 97, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t695__CustomAttributeCache_m3196;
MethodInfo m3196_MI = 
{
	"Init", (methodPointerType)&m3196, &t695_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t695__CustomAttributeCache_m3196, 129, 4096, 255, 0, false, false, 98, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t695__CustomAttributeCache_m3197;
MethodInfo m3197_MI = 
{
	"Cleanup", (methodPointerType)&m3197, &t695_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t695__CustomAttributeCache_m3197, 129, 4096, 255, 0, false, false, 99, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3198_MI = 
{
	"Finalize", (methodPointerType)&m3198, &t695_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 100, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t695_MIs[] =
{
	&m3195_MI,
	&m3196_MI,
	&m3197_MI,
	&m3198_MI,
	NULL
};
extern Il2CppType t58_0_0_3;
FieldInfo t695_f0_FieldInfo = 
{
	"m_Ptr", &t58_0_0_3, &t695_TI, offsetof(t695, f0), &EmptyCustomAttributesCache};
static FieldInfo* t695_FIs[] =
{
	&t695_f0_FieldInfo,
	NULL
};
extern MethodInfo m3198_MI;
static Il2CppMethodReference t695_VT[] =
{
	&m671_MI,
	&m3198_MI,
	&m672_MI,
	&m673_MI,
};
static bool t695_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t695_CustomAttributesCacheGenerator_m3196(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t695_CustomAttributesCacheGenerator_m3197(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t695__CustomAttributeCache_m3196 = {
1,
NULL,
&t695_CustomAttributesCacheGenerator_m3196
};
CustomAttributesCache t695__CustomAttributeCache_m3197 = {
1,
NULL,
&t695_CustomAttributesCacheGenerator_m3197
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t695_0_0_0;
extern Il2CppType t695_1_0_0;
struct t695;
extern CustomAttributesCache t695__CustomAttributeCache_m3196;
extern CustomAttributesCache t695__CustomAttributeCache_m3197;
const Il2CppTypeDefinitionMetadata t695_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t695_VT, t695_VTIGM, NULL};
TypeInfo t695_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Gradient", "UnityEngine", t695_MIs, NULL, t695_FIs, NULL, &t695_TI, NULL, &EmptyCustomAttributesCache, &t695_0_0_0, &t695_1_0_0, &t695_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t695_marshal, (methodPointerType)t695_marshal_back, (methodPointerType)t695_marshal_cleanup, sizeof (t695), sizeof (t695), 0, sizeof(t695_marshaled), 0, 0, -1, 1048841, 0, 0, false, false, false, false, false, false, false, true, false, false, 4, 0, 1, 0, 0, 4, 0, 0};
#include "t696.h"
// Metadata Definition UnityEngine.GUI/ScrollViewState
extern TypeInfo t696_TI;
#include "t696MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3199_MI = 
{
	".ctor", (methodPointerType)&m3199, &t696_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 107, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t696_MIs[] =
{
	&m3199_MI,
	NULL
};
extern Il2CppType t441_0_0_6;
FieldInfo t696_f0_FieldInfo = 
{
	"position", &t441_0_0_6, &t696_TI, offsetof(t696, f0), &EmptyCustomAttributesCache};
extern Il2CppType t441_0_0_6;
FieldInfo t696_f1_FieldInfo = 
{
	"visibleRect", &t441_0_0_6, &t696_TI, offsetof(t696, f1), &EmptyCustomAttributesCache};
extern Il2CppType t441_0_0_6;
FieldInfo t696_f2_FieldInfo = 
{
	"viewRect", &t441_0_0_6, &t696_TI, offsetof(t696, f2), &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_6;
FieldInfo t696_f3_FieldInfo = 
{
	"scrollPosition", &t28_0_0_6, &t696_TI, offsetof(t696, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t696_f4_FieldInfo = 
{
	"apply", &t124_0_0_6, &t696_TI, offsetof(t696, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t696_f5_FieldInfo = 
{
	"hasScrollTo", &t124_0_0_6, &t696_TI, offsetof(t696, f5), &EmptyCustomAttributesCache};
static FieldInfo* t696_FIs[] =
{
	&t696_f0_FieldInfo,
	&t696_f1_FieldInfo,
	&t696_f2_FieldInfo,
	&t696_f3_FieldInfo,
	&t696_f4_FieldInfo,
	&t696_f5_FieldInfo,
	NULL
};
static Il2CppMethodReference t696_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t696_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t696_0_0_0;
extern Il2CppType t696_1_0_0;
extern TypeInfo t698_TI;
extern Il2CppType t698_0_0_0;
struct t696;
const Il2CppTypeDefinitionMetadata t696_DM = 
{
	&t698_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t696_VT, t696_VTIGM, NULL};
TypeInfo t696_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "ScrollViewState", "", t696_MIs, NULL, t696_FIs, NULL, &t696_TI, NULL, &EmptyCustomAttributesCache, &t696_0_0_0, &t696_1_0_0, &t696_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t696), sizeof (t696), 0, -1, 0, 0, -1, 1048837, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 6, 0, 0, 4, 0, 0};
#include "t697.h"
// Metadata Definition UnityEngine.GUI/WindowFunction
extern TypeInfo t697_TI;
#include "t697MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t58_0_0_0;
extern Il2CppType t58_0_0_0;
static ParameterInfo t697_m3200_ParameterInfos[] = 
{
	{"object", 0, 134217806, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"method", 1, 134217807, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m3200_MI = 
{
	".ctor", (methodPointerType)&m3200, &t697_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t58, t697_m3200_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 108, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t697_m3201_ParameterInfos[] = 
{
	{"id", 0, 134217808, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3201_MI = 
{
	"Invoke", (methodPointerType)&m3201, &t697_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t697_m3201_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 109, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t470_0_0_0;
extern Il2CppType t470_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t697_m3202_ParameterInfos[] = 
{
	{"id", 0, 134217809, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"callback", 1, 134217810, &EmptyCustomAttributesCache, &t470_0_0_0},
	{"object", 2, 134217811, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t469_0_0_0;
extern void* RuntimeInvoker_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3202_MI = 
{
	"BeginInvoke", (methodPointerType)&m3202, &t697_TI, &t469_0_0_0, RuntimeInvoker_t9_t125_t9_t9, t697_m3202_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 110, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t469_0_0_0;
extern Il2CppType t469_0_0_0;
static ParameterInfo t697_m3203_ParameterInfos[] = 
{
	{"result", 0, 134217812, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3203_MI = 
{
	"EndInvoke", (methodPointerType)&m3203, &t697_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t697_m3203_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 111, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t697_MIs[] =
{
	&m3200_MI,
	&m3201_MI,
	&m3202_MI,
	&m3203_MI,
	NULL
};
extern MethodInfo m3005_MI;
extern MethodInfo m3006_MI;
extern MethodInfo m3007_MI;
extern MethodInfo m3008_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m3010_MI;
extern MethodInfo m3011_MI;
extern MethodInfo m3201_MI;
extern MethodInfo m3202_MI;
extern MethodInfo m3203_MI;
static Il2CppMethodReference t697_VT[] =
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
	&m3201_MI,
	&m3202_MI,
	&m3203_MI,
};
static bool t697_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
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
extern Il2CppType t623_0_0_0;
static Il2CppInterfaceOffsetPair t697_IOs[] = 
{
	{ &t622_0_0_0, 4},
	{ &t623_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t697_0_0_0;
extern Il2CppType t697_1_0_0;
extern Il2CppType t471_0_0_0;
struct t697;
const Il2CppTypeDefinitionMetadata t697_DM = 
{
	&t698_0_0_0, NULL, NULL, t697_IOs, &t471_0_0_0, t697_VT, t697_VTIGM, NULL};
TypeInfo t697_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "WindowFunction", "", t697_MIs, NULL, NULL, NULL, &t697_TI, NULL, &EmptyCustomAttributesCache, &t697_0_0_0, &t697_1_0_0, &t697_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t697, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t697), sizeof (t697), 0, sizeof(methodPointerType), 0, 0, -1, 258, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t698.h"
// Metadata Definition UnityEngine.GUI
#include "t698MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3204_MI = 
{
	".cctor", (methodPointerType)&m3204, &t698_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 101, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t270_0_0_0;
extern Il2CppType t270_0_0_0;
static ParameterInfo t698_m3205_ParameterInfos[] = 
{
	{"value", 0, 134217796, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t270 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t698__CustomAttributeCache_m3205;
MethodInfo m3205_MI = 
{
	"set_nextScrollStepTime", (methodPointerType)&m3205, &t698_TI, &t122_0_0_0, RuntimeInvoker_t122_t270, t698_m3205_ParameterInfos, &t698__CustomAttributeCache_m3205, 2195, 0, 255, 1, false, false, 102, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t699_0_0_0;
extern Il2CppType t699_0_0_0;
static ParameterInfo t698_m3206_ParameterInfos[] = 
{
	{"value", 0, 134217797, &EmptyCustomAttributesCache, &t699_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3206_MI = 
{
	"set_skin", (methodPointerType)&m3206, &t698_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t698_m3206_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 1, false, false, 103, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t699_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3207_MI = 
{
	"get_skin", (methodPointerType)&m3207, &t698_TI, &t699_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 104, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t698_m3208_ParameterInfos[] = 
{
	{"value", 0, 134217798, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t698__CustomAttributeCache_m3208;
MethodInfo m3208_MI = 
{
	"set_changed", (methodPointerType)&m3208, &t698_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t698_m3208_ParameterInfos, &t698__CustomAttributeCache_m3208, 2198, 4096, 255, 1, false, false, 105, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t697_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t699_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t701_0_0_0;
extern Il2CppType t701_0_0_0;
static ParameterInfo t698_m3209_ParameterInfos[] = 
{
	{"func", 0, 134217799, &EmptyCustomAttributesCache, &t697_0_0_0},
	{"id", 1, 134217800, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"_skin", 2, 134217801, &EmptyCustomAttributesCache, &t699_0_0_0},
	{"forceRect", 3, 134217802, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"width", 4, 134217803, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"height", 5, 134217804, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"style", 6, 134217805, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t9_t125_t123_t123_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3209_MI = 
{
	"CallWindowDelegate", (methodPointerType)&m3209, &t698_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t9_t125_t123_t123_t9, t698_m3209_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 7, false, false, 106, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t698_MIs[] =
{
	&m3204_MI,
	&m3205_MI,
	&m3206_MI,
	&m3207_MI,
	&m3208_MI,
	&m3209_MI,
	NULL
};
extern Il2CppType t123_0_0_17;
FieldInfo t698_f0_FieldInfo = 
{
	"scrollStepSize", &t123_0_0_17, &t698_TI, offsetof(t698_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t698_f1_FieldInfo = 
{
	"scrollControlID", &t125_0_0_17, &t698_TI, offsetof(t698_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t699_0_0_17;
FieldInfo t698_f2_FieldInfo = 
{
	"s_Skin", &t699_0_0_17, &t698_TI, offsetof(t698_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t441_0_0_19;
FieldInfo t698_f3_FieldInfo = 
{
	"s_ToolTipRect", &t441_0_0_19, &t698_TI, offsetof(t698_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t698_f4_FieldInfo = 
{
	"boxHash", &t125_0_0_17, &t698_TI, offsetof(t698_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t698_f5_FieldInfo = 
{
	"repeatButtonHash", &t125_0_0_17, &t698_TI, offsetof(t698_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t698_f6_FieldInfo = 
{
	"toggleHash", &t125_0_0_17, &t698_TI, offsetof(t698_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t698_f7_FieldInfo = 
{
	"buttonGridHash", &t125_0_0_17, &t698_TI, offsetof(t698_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t698_f8_FieldInfo = 
{
	"sliderHash", &t125_0_0_17, &t698_TI, offsetof(t698_SFs, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t698_f9_FieldInfo = 
{
	"beginGroupHash", &t125_0_0_17, &t698_TI, offsetof(t698_SFs, f9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t698_f10_FieldInfo = 
{
	"scrollviewHash", &t125_0_0_17, &t698_TI, offsetof(t698_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t700_0_0_17;
FieldInfo t698_f11_FieldInfo = 
{
	"s_ScrollViewStates", &t700_0_0_17, &t698_TI, offsetof(t698_SFs, f11), &EmptyCustomAttributesCache};
extern Il2CppType t270_0_0_17;
extern CustomAttributesCache t698__CustomAttributeCache_U3CnextScrollStepTimeU3Ek__BackingField;
FieldInfo t698_f12_FieldInfo = 
{
	"<nextScrollStepTime>k__BackingField", &t270_0_0_17, &t698_TI, offsetof(t698_SFs, f12), &t698__CustomAttributeCache_U3CnextScrollStepTimeU3Ek__BackingField};
extern Il2CppType t125_0_0_17;
extern CustomAttributesCache t698__CustomAttributeCache_U3CscrollTroughSideU3Ek__BackingField;
FieldInfo t698_f13_FieldInfo = 
{
	"<scrollTroughSide>k__BackingField", &t125_0_0_17, &t698_TI, offsetof(t698_SFs, f13), &t698__CustomAttributeCache_U3CscrollTroughSideU3Ek__BackingField};
static FieldInfo* t698_FIs[] =
{
	&t698_f0_FieldInfo,
	&t698_f1_FieldInfo,
	&t698_f2_FieldInfo,
	&t698_f3_FieldInfo,
	&t698_f4_FieldInfo,
	&t698_f5_FieldInfo,
	&t698_f6_FieldInfo,
	&t698_f7_FieldInfo,
	&t698_f8_FieldInfo,
	&t698_f9_FieldInfo,
	&t698_f10_FieldInfo,
	&t698_f11_FieldInfo,
	&t698_f12_FieldInfo,
	&t698_f13_FieldInfo,
	NULL
};
extern MethodInfo m3205_MI;
static PropertyInfo t698____nextScrollStepTime_PropertyInfo = 
{
	&t698_TI, "nextScrollStepTime", NULL, &m3205_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3207_MI;
extern MethodInfo m3206_MI;
static PropertyInfo t698____skin_PropertyInfo = 
{
	&t698_TI, "skin", &m3207_MI, &m3206_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3208_MI;
static PropertyInfo t698____changed_PropertyInfo = 
{
	&t698_TI, "changed", NULL, &m3208_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t698_PIs[] =
{
	&t698____nextScrollStepTime_PropertyInfo,
	&t698____skin_PropertyInfo,
	&t698____changed_PropertyInfo,
	NULL
};
static const Il2CppType* t698_TI__nestedTypes[2] =
{
	&t696_0_0_0,
	&t697_0_0_0,
};
static Il2CppMethodReference t698_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t698_VTIGM[] =
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
void t698_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t698_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t698_CustomAttributesCacheGenerator_m3205(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t698_CustomAttributesCacheGenerator_m3208(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t698__CustomAttributeCache_U3CnextScrollStepTimeU3Ek__BackingField = {
1,
NULL,
&t698_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField
};
CustomAttributesCache t698__CustomAttributeCache_U3CscrollTroughSideU3Ek__BackingField = {
1,
NULL,
&t698_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField
};
CustomAttributesCache t698__CustomAttributeCache_m3205 = {
1,
NULL,
&t698_CustomAttributesCacheGenerator_m3205
};
CustomAttributesCache t698__CustomAttributeCache_m3208 = {
1,
NULL,
&t698_CustomAttributesCacheGenerator_m3208
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t698_1_0_0;
struct t698;
extern CustomAttributesCache t698__CustomAttributeCache_U3CnextScrollStepTimeU3Ek__BackingField;
extern CustomAttributesCache t698__CustomAttributeCache_U3CscrollTroughSideU3Ek__BackingField;
extern CustomAttributesCache t698__CustomAttributeCache_m3205;
extern CustomAttributesCache t698__CustomAttributeCache_m3208;
const Il2CppTypeDefinitionMetadata t698_DM = 
{
	NULL, t698_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t698_VT, t698_VTIGM, NULL};
TypeInfo t698_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GUI", "UnityEngine", t698_MIs, t698_PIs, t698_FIs, NULL, &t698_TI, NULL, &EmptyCustomAttributesCache, &t698_0_0_0, &t698_1_0_0, &t698_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t698), sizeof (t698), 0, -1, sizeof(t698_SFs), 0, -1, 1, 0, 0, false, false, false, false, false, false, false, false, true, false, 6, 3, 14, 0, 2, 4, 0, 0};
#include "t702.h"
// Metadata Definition UnityEngine.GUILayout
extern TypeInfo t702_TI;
#include "t702MD.h"
extern Il2CppType t123_0_0_0;
static ParameterInfo t702_m3210_ParameterInfos[] = 
{
	{"width", 0, 134217813, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t703_0_0_0;
extern void* RuntimeInvoker_t9_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3210_MI = 
{
	"Width", (methodPointerType)&m3210, &t702_TI, &t703_0_0_0, RuntimeInvoker_t9_t123, t702_m3210_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 112, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t702_m3211_ParameterInfos[] = 
{
	{"height", 0, 134217814, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t703_0_0_0;
extern void* RuntimeInvoker_t9_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3211_MI = 
{
	"Height", (methodPointerType)&m3211, &t702_TI, &t703_0_0_0, RuntimeInvoker_t9_t123, t702_m3211_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 113, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t702_MIs[] =
{
	&m3210_MI,
	&m3211_MI,
	NULL
};
static Il2CppMethodReference t702_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t702_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t702_0_0_0;
extern Il2CppType t702_1_0_0;
struct t702;
const Il2CppTypeDefinitionMetadata t702_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t702_VT, t702_VTIGM, NULL};
TypeInfo t702_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GUILayout", "UnityEngine", t702_MIs, NULL, NULL, NULL, &t702_TI, NULL, &EmptyCustomAttributesCache, &t702_0_0_0, &t702_1_0_0, &t702_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t702), sizeof (t702), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 4, 0, 0};
#include "t704.h"
// Metadata Definition UnityEngine.GUILayoutUtility/LayoutCache
extern TypeInfo t704_TI;
#include "t704MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3212_MI = 
{
	".ctor", (methodPointerType)&m3212, &t704_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 126, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t704_MIs[] =
{
	&m3212_MI,
	NULL
};
extern Il2CppType t705_0_0_3;
FieldInfo t704_f0_FieldInfo = 
{
	"topLevel", &t705_0_0_3, &t704_TI, offsetof(t704, f0), &EmptyCustomAttributesCache};
extern Il2CppType t700_0_0_3;
FieldInfo t704_f1_FieldInfo = 
{
	"layoutGroups", &t700_0_0_3, &t704_TI, offsetof(t704, f1), &EmptyCustomAttributesCache};
extern Il2CppType t705_0_0_3;
FieldInfo t704_f2_FieldInfo = 
{
	"windows", &t705_0_0_3, &t704_TI, offsetof(t704, f2), &EmptyCustomAttributesCache};
static FieldInfo* t704_FIs[] =
{
	&t704_f0_FieldInfo,
	&t704_f1_FieldInfo,
	&t704_f2_FieldInfo,
	NULL
};
static Il2CppMethodReference t704_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t704_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t704_0_0_0;
extern Il2CppType t704_1_0_0;
extern TypeInfo t706_TI;
extern Il2CppType t706_0_0_0;
struct t704;
const Il2CppTypeDefinitionMetadata t704_DM = 
{
	&t706_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t704_VT, t704_VTIGM, NULL};
TypeInfo t704_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "LayoutCache", "", t704_MIs, NULL, t704_FIs, NULL, &t704_TI, NULL, &EmptyCustomAttributesCache, &t704_0_0_0, &t704_1_0_0, &t704_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t704), sizeof (t704), 0, -1, 0, 0, -1, 1048837, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 3, 0, 0, 4, 0, 0};
#include "t706.h"
// Metadata Definition UnityEngine.GUILayoutUtility
#include "t706MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3213_MI = 
{
	".cctor", (methodPointerType)&m3213, &t706_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 114, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t706_m3214_ParameterInfos[] = 
{
	{"instanceID", 0, 134217815, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"isWindow", 1, 134217816, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t704_0_0_0;
extern void* RuntimeInvoker_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m3214_MI = 
{
	"SelectIDList", (methodPointerType)&m3214, &t706_TI, &t704_0_0_0, RuntimeInvoker_t9_t125_t186, t706_m3214_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 115, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t706_m3215_ParameterInfos[] = 
{
	{"instanceID", 0, 134217817, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3215_MI = 
{
	"Begin", (methodPointerType)&m3215, &t706_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t706_m3215_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 116, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t701_0_0_0;
extern Il2CppType t708_0_0_0;
extern Il2CppType t708_0_0_0;
static ParameterInfo t706_m3216_ParameterInfos[] = 
{
	{"windowID", 0, 134217818, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"style", 1, 134217819, &EmptyCustomAttributesCache, &t701_0_0_0},
	{"options", 2, 134217820, &EmptyCustomAttributesCache, &t708_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3216_MI = 
{
	"BeginWindow", (methodPointerType)&m3216, &t706_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9_t9, t706_m3216_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 117, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3217_MI = 
{
	"Layout", (methodPointerType)&m3217, &t706_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 118, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3218_MI = 
{
	"LayoutFromEditorWindow", (methodPointerType)&m3218, &t706_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 119, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t705_0_0_0;
extern Il2CppType t705_0_0_0;
static ParameterInfo t706_m3219_ParameterInfos[] = 
{
	{"toplevel", 0, 134217821, &EmptyCustomAttributesCache, &t705_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3219_MI = 
{
	"LayoutFreeGroup", (methodPointerType)&m3219, &t706_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t706_m3219_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 120, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t705_0_0_0;
static ParameterInfo t706_m3220_ParameterInfos[] = 
{
	{"i", 0, 134217822, &EmptyCustomAttributesCache, &t705_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3220_MI = 
{
	"LayoutSingleGroup", (methodPointerType)&m3220, &t706_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t706_m3220_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 121, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t706_m3221_ParameterInfos[] = 
{
	{"windowID", 0, 134217823, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t441_0_0_0;
extern void* RuntimeInvoker_t441_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t706__CustomAttributeCache_m3221;
MethodInfo m3221_MI = 
{
	"Internal_GetWindowRect", (methodPointerType)&m3221, &t706_TI, &t441_0_0_0, RuntimeInvoker_t441_t125, t706_m3221_ParameterInfos, &t706__CustomAttributeCache_m3221, 145, 4096, 255, 1, false, false, 122, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t441_0_0_0;
extern Il2CppType t441_0_0_0;
static ParameterInfo t706_m3222_ParameterInfos[] = 
{
	{"windowID", 0, 134217824, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"r", 1, 134217825, &EmptyCustomAttributesCache, &t441_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t441 (MethodInfo* method, void* obj, void** args);
MethodInfo m3222_MI = 
{
	"Internal_MoveWindow", (methodPointerType)&m3222, &t706_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t441, t706_m3222_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 123, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t441_1_0_0;
extern Il2CppType t441_1_0_0;
static ParameterInfo t706_m3223_ParameterInfos[] = 
{
	{"windowID", 0, 134217826, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"r", 1, 134217827, &EmptyCustomAttributesCache, &t441_1_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t947 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t706__CustomAttributeCache_m3223;
MethodInfo m3223_MI = 
{
	"INTERNAL_CALL_Internal_MoveWindow", (methodPointerType)&m3223, &t706_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t947, t706_m3223_ParameterInfos, &t706__CustomAttributeCache_m3223, 145, 4096, 255, 2, false, false, 124, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3224_MI = 
{
	"get_spaceStyle", (methodPointerType)&m3224, &t706_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 125, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t706_MIs[] =
{
	&m3213_MI,
	&m3214_MI,
	&m3215_MI,
	&m3216_MI,
	&m3217_MI,
	&m3218_MI,
	&m3219_MI,
	&m3220_MI,
	&m3221_MI,
	&m3222_MI,
	&m3223_MI,
	&m3224_MI,
	NULL
};
extern Il2CppType t707_0_0_17;
FieldInfo t706_f0_FieldInfo = 
{
	"storedLayouts", &t707_0_0_17, &t706_TI, offsetof(t706_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t707_0_0_17;
FieldInfo t706_f1_FieldInfo = 
{
	"storedWindows", &t707_0_0_17, &t706_TI, offsetof(t706_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t704_0_0_19;
FieldInfo t706_f2_FieldInfo = 
{
	"current", &t704_0_0_19, &t706_TI, offsetof(t706_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t441_0_0_17;
FieldInfo t706_f3_FieldInfo = 
{
	"kDummyRect", &t441_0_0_17, &t706_TI, offsetof(t706_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t701_0_0_17;
FieldInfo t706_f4_FieldInfo = 
{
	"s_SpaceStyle", &t701_0_0_17, &t706_TI, offsetof(t706_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t706_FIs[] =
{
	&t706_f0_FieldInfo,
	&t706_f1_FieldInfo,
	&t706_f2_FieldInfo,
	&t706_f3_FieldInfo,
	&t706_f4_FieldInfo,
	NULL
};
extern MethodInfo m3224_MI;
static PropertyInfo t706____spaceStyle_PropertyInfo = 
{
	&t706_TI, "spaceStyle", &m3224_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t706_PIs[] =
{
	&t706____spaceStyle_PropertyInfo,
	NULL
};
static const Il2CppType* t706_TI__nestedTypes[1] =
{
	&t704_0_0_0,
};
static Il2CppMethodReference t706_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t706_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t706_CustomAttributesCacheGenerator_m3221(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t706_CustomAttributesCacheGenerator_m3223(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t706__CustomAttributeCache_m3221 = {
1,
NULL,
&t706_CustomAttributesCacheGenerator_m3221
};
CustomAttributesCache t706__CustomAttributeCache_m3223 = {
1,
NULL,
&t706_CustomAttributesCacheGenerator_m3223
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t706_1_0_0;
struct t706;
extern CustomAttributesCache t706__CustomAttributeCache_m3221;
extern CustomAttributesCache t706__CustomAttributeCache_m3223;
const Il2CppTypeDefinitionMetadata t706_DM = 
{
	NULL, t706_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t706_VT, t706_VTIGM, NULL};
TypeInfo t706_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GUILayoutUtility", "UnityEngine", t706_MIs, t706_PIs, t706_FIs, NULL, &t706_TI, NULL, &EmptyCustomAttributesCache, &t706_0_0_0, &t706_1_0_0, &t706_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t706), sizeof (t706), 0, -1, sizeof(t706_SFs), 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, true, false, 12, 1, 5, 0, 1, 4, 0, 0};
#include "t709.h"
// Metadata Definition UnityEngine.GUILayoutEntry
extern TypeInfo t709_TI;
#include "t709MD.h"
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t701_0_0_0;
static ParameterInfo t709_m3225_ParameterInfos[] = 
{
	{"_minWidth", 0, 134217828, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"_maxWidth", 1, 134217829, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"_minHeight", 2, 134217830, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"_maxHeight", 3, 134217831, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"_style", 4, 134217832, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123_t123_t123_t123_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3225_MI = 
{
	".ctor", (methodPointerType)&m3225, &t709_TI, &t122_0_0_0, RuntimeInvoker_t122_t123_t123_t123_t123_t9, t709_m3225_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 5, false, false, 127, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3226_MI = 
{
	".cctor", (methodPointerType)&m3226, &t709_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 128, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3227_MI = 
{
	"get_style", (methodPointerType)&m3227, &t709_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 129, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t709_m3228_ParameterInfos[] = 
{
	{"value", 0, 134217833, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3228_MI = 
{
	"set_style", (methodPointerType)&m3228, &t709_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t709_m3228_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 130, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t537_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3229_MI = 
{
	"get_margin", (methodPointerType)&m3229, &t709_TI, &t537_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 4, 0, false, false, 131, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3230_MI = 
{
	"CalcWidth", (methodPointerType)&m3230, &t709_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 5, 0, false, false, 132, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3231_MI = 
{
	"CalcHeight", (methodPointerType)&m3231, &t709_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 133, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t709_m3232_ParameterInfos[] = 
{
	{"x", 0, 134217834, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"width", 1, 134217835, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3232_MI = 
{
	"SetHorizontal", (methodPointerType)&m3232, &t709_TI, &t122_0_0_0, RuntimeInvoker_t122_t123_t123, t709_m3232_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 2, false, false, 134, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t709_m3233_ParameterInfos[] = 
{
	{"y", 0, 134217836, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"height", 1, 134217837, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3233_MI = 
{
	"SetVertical", (methodPointerType)&m3233, &t709_TI, &t122_0_0_0, RuntimeInvoker_t122_t123_t123, t709_m3233_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 2, false, false, 135, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t709_m3234_ParameterInfos[] = 
{
	{"style", 0, 134217838, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3234_MI = 
{
	"ApplyStyleSettings", (methodPointerType)&m3234, &t709_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t709_m3234_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 9, 1, false, false, 136, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t708_0_0_0;
static ParameterInfo t709_m3235_ParameterInfos[] = 
{
	{"options", 0, 134217839, &EmptyCustomAttributesCache, &t708_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3235_MI = 
{
	"ApplyOptions", (methodPointerType)&m3235, &t709_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t709_m3235_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 1, false, false, 137, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3236_MI = 
{
	"ToString", (methodPointerType)&m3236, &t709_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 138, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t709_MIs[] =
{
	&m3225_MI,
	&m3226_MI,
	&m3227_MI,
	&m3228_MI,
	&m3229_MI,
	&m3230_MI,
	&m3231_MI,
	&m3232_MI,
	&m3233_MI,
	&m3234_MI,
	&m3235_MI,
	&m3236_MI,
	NULL
};
extern Il2CppType t123_0_0_6;
FieldInfo t709_f0_FieldInfo = 
{
	"minWidth", &t123_0_0_6, &t709_TI, offsetof(t709, f0), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t709_f1_FieldInfo = 
{
	"maxWidth", &t123_0_0_6, &t709_TI, offsetof(t709, f1), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t709_f2_FieldInfo = 
{
	"minHeight", &t123_0_0_6, &t709_TI, offsetof(t709, f2), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t709_f3_FieldInfo = 
{
	"maxHeight", &t123_0_0_6, &t709_TI, offsetof(t709, f3), &EmptyCustomAttributesCache};
extern Il2CppType t441_0_0_6;
FieldInfo t709_f4_FieldInfo = 
{
	"rect", &t441_0_0_6, &t709_TI, offsetof(t709, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t709_f5_FieldInfo = 
{
	"stretchWidth", &t125_0_0_6, &t709_TI, offsetof(t709, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t709_f6_FieldInfo = 
{
	"stretchHeight", &t125_0_0_6, &t709_TI, offsetof(t709, f6), &EmptyCustomAttributesCache};
extern Il2CppType t701_0_0_1;
FieldInfo t709_f7_FieldInfo = 
{
	"m_Style", &t701_0_0_1, &t709_TI, offsetof(t709, f7), &EmptyCustomAttributesCache};
extern Il2CppType t441_0_0_19;
FieldInfo t709_f8_FieldInfo = 
{
	"kDummyRect", &t441_0_0_19, &t709_TI, offsetof(t709_SFs, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_20;
FieldInfo t709_f9_FieldInfo = 
{
	"indent", &t125_0_0_20, &t709_TI, offsetof(t709_SFs, f9), &EmptyCustomAttributesCache};
static FieldInfo* t709_FIs[] =
{
	&t709_f0_FieldInfo,
	&t709_f1_FieldInfo,
	&t709_f2_FieldInfo,
	&t709_f3_FieldInfo,
	&t709_f4_FieldInfo,
	&t709_f5_FieldInfo,
	&t709_f6_FieldInfo,
	&t709_f7_FieldInfo,
	&t709_f8_FieldInfo,
	&t709_f9_FieldInfo,
	NULL
};
extern MethodInfo m3227_MI;
extern MethodInfo m3228_MI;
static PropertyInfo t709____style_PropertyInfo = 
{
	&t709_TI, "style", &m3227_MI, &m3228_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3229_MI;
static PropertyInfo t709____margin_PropertyInfo = 
{
	&t709_TI, "margin", &m3229_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t709_PIs[] =
{
	&t709____style_PropertyInfo,
	&t709____margin_PropertyInfo,
	NULL
};
extern MethodInfo m3236_MI;
extern MethodInfo m3230_MI;
extern MethodInfo m3231_MI;
extern MethodInfo m3232_MI;
extern MethodInfo m3233_MI;
extern MethodInfo m3234_MI;
extern MethodInfo m3235_MI;
static Il2CppMethodReference t709_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m3236_MI,
	&m3229_MI,
	&m3230_MI,
	&m3231_MI,
	&m3232_MI,
	&m3233_MI,
	&m3234_MI,
	&m3235_MI,
};
static bool t709_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t709_0_0_0;
extern Il2CppType t709_1_0_0;
struct t709;
const Il2CppTypeDefinitionMetadata t709_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t709_VT, t709_VTIGM, NULL};
TypeInfo t709_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GUILayoutEntry", "UnityEngine", t709_MIs, t709_PIs, t709_FIs, NULL, &t709_TI, NULL, &EmptyCustomAttributesCache, &t709_0_0_0, &t709_1_0_0, &t709_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t709), sizeof (t709), 0, -1, sizeof(t709_SFs), 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, true, false, 12, 2, 10, 0, 0, 11, 0, 0};
#include "t705.h"
// Metadata Definition UnityEngine.GUILayoutGroup
extern TypeInfo t705_TI;
#include "t705MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3237_MI = 
{
	".ctor", (methodPointerType)&m3237, &t705_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 139, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t537_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3238_MI = 
{
	"get_margin", (methodPointerType)&m3238, &t705_TI, &t537_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 4, 0, false, false, 140, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t708_0_0_0;
static ParameterInfo t705_m3239_ParameterInfos[] = 
{
	{"options", 0, 134217840, &EmptyCustomAttributesCache, &t708_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3239_MI = 
{
	"ApplyOptions", (methodPointerType)&m3239, &t705_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t705_m3239_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 141, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t705_m3240_ParameterInfos[] = 
{
	{"style", 0, 134217841, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3240_MI = 
{
	"ApplyStyleSettings", (methodPointerType)&m3240, &t705_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t705_m3240_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 9, 1, false, false, 142, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3241_MI = 
{
	"ResetCursor", (methodPointerType)&m3241, &t705_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 143, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3242_MI = 
{
	"CalcWidth", (methodPointerType)&m3242, &t705_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 5, 0, false, false, 144, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t705_m3243_ParameterInfos[] = 
{
	{"x", 0, 134217842, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"width", 1, 134217843, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3243_MI = 
{
	"SetHorizontal", (methodPointerType)&m3243, &t705_TI, &t122_0_0_0, RuntimeInvoker_t122_t123_t123, t705_m3243_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 2, false, false, 145, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3244_MI = 
{
	"CalcHeight", (methodPointerType)&m3244, &t705_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 146, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t705_m3245_ParameterInfos[] = 
{
	{"y", 0, 134217844, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"height", 1, 134217845, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3245_MI = 
{
	"SetVertical", (methodPointerType)&m3245, &t705_TI, &t122_0_0_0, RuntimeInvoker_t122_t123_t123, t705_m3245_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 2, false, false, 147, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3246_MI = 
{
	"ToString", (methodPointerType)&m3246, &t705_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 148, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t705_MIs[] =
{
	&m3237_MI,
	&m3238_MI,
	&m3239_MI,
	&m3240_MI,
	&m3241_MI,
	&m3242_MI,
	&m3243_MI,
	&m3244_MI,
	&m3245_MI,
	&m3246_MI,
	NULL
};
extern Il2CppType t710_0_0_6;
FieldInfo t705_f10_FieldInfo = 
{
	"entries", &t710_0_0_6, &t705_TI, offsetof(t705, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t705_f11_FieldInfo = 
{
	"isVertical", &t124_0_0_6, &t705_TI, offsetof(t705, f11), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t705_f12_FieldInfo = 
{
	"resetCoords", &t124_0_0_6, &t705_TI, offsetof(t705, f12), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t705_f13_FieldInfo = 
{
	"spacing", &t123_0_0_6, &t705_TI, offsetof(t705, f13), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t705_f14_FieldInfo = 
{
	"sameSize", &t124_0_0_6, &t705_TI, offsetof(t705, f14), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t705_f15_FieldInfo = 
{
	"isWindow", &t124_0_0_6, &t705_TI, offsetof(t705, f15), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t705_f16_FieldInfo = 
{
	"windowID", &t125_0_0_6, &t705_TI, offsetof(t705, f16), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t705_f17_FieldInfo = 
{
	"cursor", &t125_0_0_1, &t705_TI, offsetof(t705, f17), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_4;
FieldInfo t705_f18_FieldInfo = 
{
	"stretchableCountX", &t125_0_0_4, &t705_TI, offsetof(t705, f18), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_4;
FieldInfo t705_f19_FieldInfo = 
{
	"stretchableCountY", &t125_0_0_4, &t705_TI, offsetof(t705, f19), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_4;
FieldInfo t705_f20_FieldInfo = 
{
	"userSpecifiedWidth", &t124_0_0_4, &t705_TI, offsetof(t705, f20), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_4;
FieldInfo t705_f21_FieldInfo = 
{
	"userSpecifiedHeight", &t124_0_0_4, &t705_TI, offsetof(t705, f21), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_4;
FieldInfo t705_f22_FieldInfo = 
{
	"childMinWidth", &t123_0_0_4, &t705_TI, offsetof(t705, f22), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_4;
FieldInfo t705_f23_FieldInfo = 
{
	"childMaxWidth", &t123_0_0_4, &t705_TI, offsetof(t705, f23), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_4;
FieldInfo t705_f24_FieldInfo = 
{
	"childMinHeight", &t123_0_0_4, &t705_TI, offsetof(t705, f24), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_4;
FieldInfo t705_f25_FieldInfo = 
{
	"childMaxHeight", &t123_0_0_4, &t705_TI, offsetof(t705, f25), &EmptyCustomAttributesCache};
extern Il2CppType t537_0_0_1;
FieldInfo t705_f26_FieldInfo = 
{
	"m_Margin", &t537_0_0_1, &t705_TI, offsetof(t705, f26), &EmptyCustomAttributesCache};
static FieldInfo* t705_FIs[] =
{
	&t705_f10_FieldInfo,
	&t705_f11_FieldInfo,
	&t705_f12_FieldInfo,
	&t705_f13_FieldInfo,
	&t705_f14_FieldInfo,
	&t705_f15_FieldInfo,
	&t705_f16_FieldInfo,
	&t705_f17_FieldInfo,
	&t705_f18_FieldInfo,
	&t705_f19_FieldInfo,
	&t705_f20_FieldInfo,
	&t705_f21_FieldInfo,
	&t705_f22_FieldInfo,
	&t705_f23_FieldInfo,
	&t705_f24_FieldInfo,
	&t705_f25_FieldInfo,
	&t705_f26_FieldInfo,
	NULL
};
extern MethodInfo m3238_MI;
static PropertyInfo t705____margin_PropertyInfo = 
{
	&t705_TI, "margin", &m3238_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t705_PIs[] =
{
	&t705____margin_PropertyInfo,
	NULL
};
extern MethodInfo m3246_MI;
extern MethodInfo m3242_MI;
extern MethodInfo m3244_MI;
extern MethodInfo m3243_MI;
extern MethodInfo m3245_MI;
extern MethodInfo m3240_MI;
extern MethodInfo m3239_MI;
static Il2CppMethodReference t705_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m3246_MI,
	&m3238_MI,
	&m3242_MI,
	&m3244_MI,
	&m3243_MI,
	&m3245_MI,
	&m3240_MI,
	&m3239_MI,
};
static bool t705_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t705_1_0_0;
struct t705;
const Il2CppTypeDefinitionMetadata t705_DM = 
{
	NULL, NULL, NULL, NULL, &t709_0_0_0, t705_VT, t705_VTIGM, NULL};
TypeInfo t705_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GUILayoutGroup", "UnityEngine", t705_MIs, t705_PIs, t705_FIs, NULL, &t705_TI, NULL, &EmptyCustomAttributesCache, &t705_0_0_0, &t705_1_0_0, &t705_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t705), sizeof (t705), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 1, 17, 0, 0, 11, 0, 0};
#include "t711.h"
// Metadata Definition UnityEngine.GUIScrollGroup
extern TypeInfo t711_TI;
#include "t711MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3247_MI = 
{
	".ctor", (methodPointerType)&m3247, &t711_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 149, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3248_MI = 
{
	"CalcWidth", (methodPointerType)&m3248, &t711_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 5, 0, false, false, 150, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t711_m3249_ParameterInfos[] = 
{
	{"x", 0, 134217846, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"width", 1, 134217847, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3249_MI = 
{
	"SetHorizontal", (methodPointerType)&m3249, &t711_TI, &t122_0_0_0, RuntimeInvoker_t122_t123_t123, t711_m3249_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 2, false, false, 151, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3250_MI = 
{
	"CalcHeight", (methodPointerType)&m3250, &t711_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 6, 0, false, false, 152, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t711_m3251_ParameterInfos[] = 
{
	{"y", 0, 134217848, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"height", 1, 134217849, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3251_MI = 
{
	"SetVertical", (methodPointerType)&m3251, &t711_TI, &t122_0_0_0, RuntimeInvoker_t122_t123_t123, t711_m3251_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 2, false, false, 153, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t711_MIs[] =
{
	&m3247_MI,
	&m3248_MI,
	&m3249_MI,
	&m3250_MI,
	&m3251_MI,
	NULL
};
extern Il2CppType t123_0_0_6;
FieldInfo t711_f27_FieldInfo = 
{
	"calcMinWidth", &t123_0_0_6, &t711_TI, offsetof(t711, f27), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t711_f28_FieldInfo = 
{
	"calcMaxWidth", &t123_0_0_6, &t711_TI, offsetof(t711, f28), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t711_f29_FieldInfo = 
{
	"calcMinHeight", &t123_0_0_6, &t711_TI, offsetof(t711, f29), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t711_f30_FieldInfo = 
{
	"calcMaxHeight", &t123_0_0_6, &t711_TI, offsetof(t711, f30), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t711_f31_FieldInfo = 
{
	"clientWidth", &t123_0_0_6, &t711_TI, offsetof(t711, f31), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t711_f32_FieldInfo = 
{
	"clientHeight", &t123_0_0_6, &t711_TI, offsetof(t711, f32), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t711_f33_FieldInfo = 
{
	"allowHorizontalScroll", &t124_0_0_6, &t711_TI, offsetof(t711, f33), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t711_f34_FieldInfo = 
{
	"allowVerticalScroll", &t124_0_0_6, &t711_TI, offsetof(t711, f34), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t711_f35_FieldInfo = 
{
	"needsHorizontalScrollbar", &t124_0_0_6, &t711_TI, offsetof(t711, f35), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t711_f36_FieldInfo = 
{
	"needsVerticalScrollbar", &t124_0_0_6, &t711_TI, offsetof(t711, f36), &EmptyCustomAttributesCache};
extern Il2CppType t701_0_0_6;
FieldInfo t711_f37_FieldInfo = 
{
	"horizontalScrollbar", &t701_0_0_6, &t711_TI, offsetof(t711, f37), &EmptyCustomAttributesCache};
extern Il2CppType t701_0_0_6;
FieldInfo t711_f38_FieldInfo = 
{
	"verticalScrollbar", &t701_0_0_6, &t711_TI, offsetof(t711, f38), &EmptyCustomAttributesCache};
static FieldInfo* t711_FIs[] =
{
	&t711_f27_FieldInfo,
	&t711_f28_FieldInfo,
	&t711_f29_FieldInfo,
	&t711_f30_FieldInfo,
	&t711_f31_FieldInfo,
	&t711_f32_FieldInfo,
	&t711_f33_FieldInfo,
	&t711_f34_FieldInfo,
	&t711_f35_FieldInfo,
	&t711_f36_FieldInfo,
	&t711_f37_FieldInfo,
	&t711_f38_FieldInfo,
	NULL
};
extern MethodInfo m3248_MI;
extern MethodInfo m3250_MI;
extern MethodInfo m3249_MI;
extern MethodInfo m3251_MI;
static Il2CppMethodReference t711_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m3246_MI,
	&m3238_MI,
	&m3248_MI,
	&m3250_MI,
	&m3249_MI,
	&m3251_MI,
	&m3240_MI,
	&m3239_MI,
};
static bool t711_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t711_0_0_0;
extern Il2CppType t711_1_0_0;
struct t711;
const Il2CppTypeDefinitionMetadata t711_DM = 
{
	NULL, NULL, NULL, NULL, &t705_0_0_0, t711_VT, t711_VTIGM, NULL};
TypeInfo t711_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GUIScrollGroup", "UnityEngine", t711_MIs, NULL, t711_FIs, NULL, &t711_TI, NULL, &EmptyCustomAttributesCache, &t711_0_0_0, &t711_1_0_0, &t711_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t711), sizeof (t711), 0, -1, 0, 0, -1, 1048832, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 12, 0, 0, 11, 0, 0};
#include "t712.h"
// Metadata Definition UnityEngine.GUILayoutOption/Type
extern TypeInfo t712_TI;
#include "t712MD.h"
static MethodInfo* t712_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t712_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t712_TI, offsetof(t712, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t712_0_0_32854;
FieldInfo t712_f2_FieldInfo = 
{
	"fixedWidth", &t712_0_0_32854, &t712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t712_0_0_32854;
FieldInfo t712_f3_FieldInfo = 
{
	"fixedHeight", &t712_0_0_32854, &t712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t712_0_0_32854;
FieldInfo t712_f4_FieldInfo = 
{
	"minWidth", &t712_0_0_32854, &t712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t712_0_0_32854;
FieldInfo t712_f5_FieldInfo = 
{
	"maxWidth", &t712_0_0_32854, &t712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t712_0_0_32854;
FieldInfo t712_f6_FieldInfo = 
{
	"minHeight", &t712_0_0_32854, &t712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t712_0_0_32854;
FieldInfo t712_f7_FieldInfo = 
{
	"maxHeight", &t712_0_0_32854, &t712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t712_0_0_32854;
FieldInfo t712_f8_FieldInfo = 
{
	"stretchWidth", &t712_0_0_32854, &t712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t712_0_0_32854;
FieldInfo t712_f9_FieldInfo = 
{
	"stretchHeight", &t712_0_0_32854, &t712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t712_0_0_32854;
FieldInfo t712_f10_FieldInfo = 
{
	"alignStart", &t712_0_0_32854, &t712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t712_0_0_32854;
FieldInfo t712_f11_FieldInfo = 
{
	"alignMiddle", &t712_0_0_32854, &t712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t712_0_0_32854;
FieldInfo t712_f12_FieldInfo = 
{
	"alignEnd", &t712_0_0_32854, &t712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t712_0_0_32854;
FieldInfo t712_f13_FieldInfo = 
{
	"alignJustify", &t712_0_0_32854, &t712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t712_0_0_32854;
FieldInfo t712_f14_FieldInfo = 
{
	"equalSize", &t712_0_0_32854, &t712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t712_0_0_32854;
FieldInfo t712_f15_FieldInfo = 
{
	"spacing", &t712_0_0_32854, &t712_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t712_FIs[] =
{
	&t712_f1_FieldInfo,
	&t712_f2_FieldInfo,
	&t712_f3_FieldInfo,
	&t712_f4_FieldInfo,
	&t712_f5_FieldInfo,
	&t712_f6_FieldInfo,
	&t712_f7_FieldInfo,
	&t712_f8_FieldInfo,
	&t712_f9_FieldInfo,
	&t712_f10_FieldInfo,
	&t712_f11_FieldInfo,
	&t712_f12_FieldInfo,
	&t712_f13_FieldInfo,
	&t712_f14_FieldInfo,
	&t712_f15_FieldInfo,
	NULL
};
static const int32_t t712_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t712_f2_DefaultValue = 
{
	&t712_f2_FieldInfo, { (char*)&t712_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t712_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t712_f3_DefaultValue = 
{
	&t712_f3_FieldInfo, { (char*)&t712_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t712_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t712_f4_DefaultValue = 
{
	&t712_f4_FieldInfo, { (char*)&t712_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t712_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t712_f5_DefaultValue = 
{
	&t712_f5_FieldInfo, { (char*)&t712_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t712_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t712_f6_DefaultValue = 
{
	&t712_f6_FieldInfo, { (char*)&t712_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t712_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t712_f7_DefaultValue = 
{
	&t712_f7_FieldInfo, { (char*)&t712_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t712_f8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t712_f8_DefaultValue = 
{
	&t712_f8_FieldInfo, { (char*)&t712_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t712_f9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t712_f9_DefaultValue = 
{
	&t712_f9_FieldInfo, { (char*)&t712_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t712_f10_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t712_f10_DefaultValue = 
{
	&t712_f10_FieldInfo, { (char*)&t712_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t712_f11_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t712_f11_DefaultValue = 
{
	&t712_f11_FieldInfo, { (char*)&t712_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t712_f12_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t712_f12_DefaultValue = 
{
	&t712_f12_FieldInfo, { (char*)&t712_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t712_f13_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t712_f13_DefaultValue = 
{
	&t712_f13_FieldInfo, { (char*)&t712_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t712_f14_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t712_f14_DefaultValue = 
{
	&t712_f14_FieldInfo, { (char*)&t712_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t712_f15_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry t712_f15_DefaultValue = 
{
	&t712_f15_FieldInfo, { (char*)&t712_f15_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t712_FDVs[] = 
{
	&t712_f2_DefaultValue,
	&t712_f3_DefaultValue,
	&t712_f4_DefaultValue,
	&t712_f5_DefaultValue,
	&t712_f6_DefaultValue,
	&t712_f7_DefaultValue,
	&t712_f8_DefaultValue,
	&t712_f9_DefaultValue,
	&t712_f10_DefaultValue,
	&t712_f11_DefaultValue,
	&t712_f12_DefaultValue,
	&t712_f13_DefaultValue,
	&t712_f14_DefaultValue,
	&t712_f15_DefaultValue,
	NULL
};
static Il2CppMethodReference t712_VT[] =
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
static bool t712_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t712_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t712_0_0_0;
extern Il2CppType t712_1_0_0;
extern TypeInfo t703_TI;
extern Il2CppType t703_0_0_0;
const Il2CppTypeDefinitionMetadata t712_DM = 
{
	&t703_0_0_0, NULL, NULL, t712_IOs, &t8_0_0_0, t712_VT, t712_VTIGM, NULL};
TypeInfo t712_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Type", "", t712_MIs, NULL, t712_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t712_0_0_0, &t712_1_0_0, &t712_DM, NULL, NULL, NULL, t712_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t712)+ sizeof (Il2CppObject), sizeof (t712)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 261, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 15, 0, 0, 23, 0, 3};
#include "t703.h"
// Metadata Definition UnityEngine.GUILayoutOption
#include "t703MD.h"
extern Il2CppType t712_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t703_m3252_ParameterInfos[] = 
{
	{"type", 0, 134217850, &EmptyCustomAttributesCache, &t712_0_0_0},
	{"value", 1, 134217851, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3252_MI = 
{
	".ctor", (methodPointerType)&m3252, &t703_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9, t703_m3252_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 154, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t703_MIs[] =
{
	&m3252_MI,
	NULL
};
extern Il2CppType t712_0_0_3;
FieldInfo t703_f0_FieldInfo = 
{
	"type", &t712_0_0_3, &t703_TI, offsetof(t703, f0), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_3;
FieldInfo t703_f1_FieldInfo = 
{
	"value", &t9_0_0_3, &t703_TI, offsetof(t703, f1), &EmptyCustomAttributesCache};
static FieldInfo* t703_FIs[] =
{
	&t703_f0_FieldInfo,
	&t703_f1_FieldInfo,
	NULL
};
static const Il2CppType* t703_TI__nestedTypes[1] =
{
	&t712_0_0_0,
};
static Il2CppMethodReference t703_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t703_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t703_1_0_0;
struct t703;
const Il2CppTypeDefinitionMetadata t703_DM = 
{
	NULL, t703_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t703_VT, t703_VTIGM, NULL};
TypeInfo t703_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GUILayoutOption", "UnityEngine", t703_MIs, NULL, t703_FIs, NULL, &t703_TI, NULL, &EmptyCustomAttributesCache, &t703_0_0_0, &t703_1_0_0, &t703_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t703), sizeof (t703), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 1, 4, 0, 0};
#include "t713.h"
// Metadata Definition UnityEngine.ExitGUIException
extern TypeInfo t713_TI;
#include "t713MD.h"
static MethodInfo* t713_MIs[] =
{
	NULL
};
extern MethodInfo m4496_MI;
extern MethodInfo m4497_MI;
extern MethodInfo m4243_MI;
extern MethodInfo m1098_MI;
extern MethodInfo m4498_MI;
extern MethodInfo m4441_MI;
extern MethodInfo m4442_MI;
static Il2CppMethodReference t713_VT[] =
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
static bool t713_VTIGM[] =
{
	false,
	false,
	false,
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
static Il2CppInterfaceOffsetPair t713_IOs[] = 
{
	{ &t623_0_0_0, 4},
	{ &t948_0_0_0, 5},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t713_0_0_0;
extern Il2CppType t713_1_0_0;
extern Il2CppType t138_0_0_0;
struct t713;
const Il2CppTypeDefinitionMetadata t713_DM = 
{
	NULL, NULL, NULL, t713_IOs, &t138_0_0_0, t713_VT, t713_VTIGM, NULL};
TypeInfo t713_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "ExitGUIException", "UnityEngine", t713_MIs, NULL, NULL, NULL, &t713_TI, NULL, &EmptyCustomAttributesCache, &t713_0_0_0, &t713_1_0_0, &t713_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t713), sizeof (t713), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 11, 0, 2};
#include "t714.h"
// Metadata Definition UnityEngine.GUIUtility
extern TypeInfo t714_TI;
#include "t714MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3253_MI = 
{
	".cctor", (methodPointerType)&m3253, &t714_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 155, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t714__CustomAttributeCache_m3254;
MethodInfo m3254_MI = 
{
	"get_systemCopyBuffer", (methodPointerType)&m3254, &t714_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &t714__CustomAttributeCache_m3254, 2195, 4096, 255, 0, false, false, 156, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t714_m3255_ParameterInfos[] = 
{
	{"value", 0, 134217852, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t714__CustomAttributeCache_m3255;
MethodInfo m3255_MI = 
{
	"set_systemCopyBuffer", (methodPointerType)&m3255, &t714_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t714_m3255_ParameterInfos, &t714__CustomAttributeCache_m3255, 2195, 4096, 255, 1, false, false, 157, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t699_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3256_MI = 
{
	"GetDefaultSkin", (methodPointerType)&m3256, &t714_TI, &t699_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 158, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t714_m3257_ParameterInfos[] = 
{
	{"skinMode", 0, 134217853, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t699_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t714__CustomAttributeCache_m3257;
MethodInfo m3257_MI = 
{
	"Internal_GetDefaultSkin", (methodPointerType)&m3257, &t714_TI, &t699_0_0_0, RuntimeInvoker_t9_t125, t714_m3257_ParameterInfos, &t714__CustomAttributeCache_m3257, 145, 4096, 255, 1, false, false, 159, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t714_m3258_ParameterInfos[] = 
{
	{"skinMode", 0, 134217854, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"instanceID", 1, 134217855, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"useGUILayout", 2, 134217856, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3258_MI = 
{
	"BeginGUI", (methodPointerType)&m3258, &t714_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t125_t125, t714_m3258_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 160, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t714__CustomAttributeCache_m3259;
MethodInfo m3259_MI = 
{
	"Internal_ExitGUI", (methodPointerType)&m3259, &t714_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t714__CustomAttributeCache_m3259, 145, 4096, 255, 0, false, false, 161, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t714_m3260_ParameterInfos[] = 
{
	{"layoutType", 0, 134217857, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3260_MI = 
{
	"EndGUI", (methodPointerType)&m3260, &t714_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t714_m3260_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 162, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t138_0_0_0;
static ParameterInfo t714_m3261_ParameterInfos[] = 
{
	{"exception", 0, 134217858, &EmptyCustomAttributesCache, &t138_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3261_MI = 
{
	"EndGUIFromException", (methodPointerType)&m3261, &t714_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t714_m3261_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 163, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3262_MI = 
{
	"CheckOnGUI", (methodPointerType)&m3262, &t714_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 164, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t714__CustomAttributeCache_m3263;
MethodInfo m3263_MI = 
{
	"Internal_GetGUIDepth", (methodPointerType)&m3263, &t714_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t714__CustomAttributeCache_m3263, 147, 4096, 255, 0, false, false, 165, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t714_MIs[] =
{
	&m3253_MI,
	&m3254_MI,
	&m3255_MI,
	&m3256_MI,
	&m3257_MI,
	&m3258_MI,
	&m3259_MI,
	&m3260_MI,
	&m3261_MI,
	&m3262_MI,
	&m3263_MI,
	NULL
};
extern Il2CppType t125_0_0_19;
FieldInfo t714_f0_FieldInfo = 
{
	"s_SkinMode", &t125_0_0_19, &t714_TI, offsetof(t714_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_19;
FieldInfo t714_f1_FieldInfo = 
{
	"s_OriginalID", &t125_0_0_19, &t714_TI, offsetof(t714_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_19;
FieldInfo t714_f2_FieldInfo = 
{
	"s_EditorScreenPointOffset", &t28_0_0_19, &t714_TI, offsetof(t714_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_19;
FieldInfo t714_f3_FieldInfo = 
{
	"s_HasKeyboardFocus", &t124_0_0_19, &t714_TI, offsetof(t714_SFs, f3), &EmptyCustomAttributesCache};
static FieldInfo* t714_FIs[] =
{
	&t714_f0_FieldInfo,
	&t714_f1_FieldInfo,
	&t714_f2_FieldInfo,
	&t714_f3_FieldInfo,
	NULL
};
extern MethodInfo m3254_MI;
extern MethodInfo m3255_MI;
static PropertyInfo t714____systemCopyBuffer_PropertyInfo = 
{
	&t714_TI, "systemCopyBuffer", &m3254_MI, &m3255_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t714_PIs[] =
{
	&t714____systemCopyBuffer_PropertyInfo,
	NULL
};
static Il2CppMethodReference t714_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t714_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t714_CustomAttributesCacheGenerator_m3254(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t714_CustomAttributesCacheGenerator_m3255(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t714_CustomAttributesCacheGenerator_m3257(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t714_CustomAttributesCacheGenerator_m3259(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t714_CustomAttributesCacheGenerator_m3263(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t714__CustomAttributeCache_m3254 = {
1,
NULL,
&t714_CustomAttributesCacheGenerator_m3254
};
CustomAttributesCache t714__CustomAttributeCache_m3255 = {
1,
NULL,
&t714_CustomAttributesCacheGenerator_m3255
};
CustomAttributesCache t714__CustomAttributeCache_m3257 = {
1,
NULL,
&t714_CustomAttributesCacheGenerator_m3257
};
CustomAttributesCache t714__CustomAttributeCache_m3259 = {
1,
NULL,
&t714_CustomAttributesCacheGenerator_m3259
};
CustomAttributesCache t714__CustomAttributeCache_m3263 = {
1,
NULL,
&t714_CustomAttributesCacheGenerator_m3263
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t714_0_0_0;
extern Il2CppType t714_1_0_0;
struct t714;
extern CustomAttributesCache t714__CustomAttributeCache_m3254;
extern CustomAttributesCache t714__CustomAttributeCache_m3255;
extern CustomAttributesCache t714__CustomAttributeCache_m3257;
extern CustomAttributesCache t714__CustomAttributeCache_m3259;
extern CustomAttributesCache t714__CustomAttributeCache_m3263;
const Il2CppTypeDefinitionMetadata t714_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t714_VT, t714_VTIGM, NULL};
TypeInfo t714_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GUIUtility", "UnityEngine", t714_MIs, t714_PIs, t714_FIs, NULL, &t714_TI, NULL, &EmptyCustomAttributesCache, &t714_0_0_0, &t714_1_0_0, &t714_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t714), sizeof (t714), 0, -1, sizeof(t714_SFs), 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, true, false, 11, 1, 4, 0, 0, 4, 0, 0};
#include "t715.h"
// Metadata Definition UnityEngine.GUISettings
extern TypeInfo t715_TI;
#include "t715MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3264_MI = 
{
	".ctor", (methodPointerType)&m3264, &t715_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 166, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t715_MIs[] =
{
	&m3264_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t715__CustomAttributeCache_m_DoubleClickSelectsWord;
FieldInfo t715_f0_FieldInfo = 
{
	"m_DoubleClickSelectsWord", &t124_0_0_1, &t715_TI, offsetof(t715, f0), &t715__CustomAttributeCache_m_DoubleClickSelectsWord};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t715__CustomAttributeCache_m_TripleClickSelectsLine;
FieldInfo t715_f1_FieldInfo = 
{
	"m_TripleClickSelectsLine", &t124_0_0_1, &t715_TI, offsetof(t715, f1), &t715__CustomAttributeCache_m_TripleClickSelectsLine};
extern Il2CppType t43_0_0_1;
extern CustomAttributesCache t715__CustomAttributeCache_m_CursorColor;
FieldInfo t715_f2_FieldInfo = 
{
	"m_CursorColor", &t43_0_0_1, &t715_TI, offsetof(t715, f2), &t715__CustomAttributeCache_m_CursorColor};
extern Il2CppType t123_0_0_1;
extern CustomAttributesCache t715__CustomAttributeCache_m_CursorFlashSpeed;
FieldInfo t715_f3_FieldInfo = 
{
	"m_CursorFlashSpeed", &t123_0_0_1, &t715_TI, offsetof(t715, f3), &t715__CustomAttributeCache_m_CursorFlashSpeed};
extern Il2CppType t43_0_0_1;
extern CustomAttributesCache t715__CustomAttributeCache_m_SelectionColor;
FieldInfo t715_f4_FieldInfo = 
{
	"m_SelectionColor", &t43_0_0_1, &t715_TI, offsetof(t715, f4), &t715__CustomAttributeCache_m_SelectionColor};
static FieldInfo* t715_FIs[] =
{
	&t715_f0_FieldInfo,
	&t715_f1_FieldInfo,
	&t715_f2_FieldInfo,
	&t715_f3_FieldInfo,
	&t715_f4_FieldInfo,
	NULL
};
static Il2CppMethodReference t715_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t715_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern TypeInfo t193_TI;
#include "t193.h"
#include "t193MD.h"
extern MethodInfo m677_MI;
void t715_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t715_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t715_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t715_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t715_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t715__CustomAttributeCache_m_DoubleClickSelectsWord = {
1,
NULL,
&t715_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord
};
CustomAttributesCache t715__CustomAttributeCache_m_TripleClickSelectsLine = {
1,
NULL,
&t715_CustomAttributesCacheGenerator_m_TripleClickSelectsLine
};
CustomAttributesCache t715__CustomAttributeCache_m_CursorColor = {
1,
NULL,
&t715_CustomAttributesCacheGenerator_m_CursorColor
};
CustomAttributesCache t715__CustomAttributeCache_m_CursorFlashSpeed = {
1,
NULL,
&t715_CustomAttributesCacheGenerator_m_CursorFlashSpeed
};
CustomAttributesCache t715__CustomAttributeCache_m_SelectionColor = {
1,
NULL,
&t715_CustomAttributesCacheGenerator_m_SelectionColor
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t715_0_0_0;
extern Il2CppType t715_1_0_0;
struct t715;
extern CustomAttributesCache t715__CustomAttributeCache_m_DoubleClickSelectsWord;
extern CustomAttributesCache t715__CustomAttributeCache_m_TripleClickSelectsLine;
extern CustomAttributesCache t715__CustomAttributeCache_m_CursorColor;
extern CustomAttributesCache t715__CustomAttributeCache_m_CursorFlashSpeed;
extern CustomAttributesCache t715__CustomAttributeCache_m_SelectionColor;
const Il2CppTypeDefinitionMetadata t715_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t715_VT, t715_VTIGM, NULL};
TypeInfo t715_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GUISettings", "UnityEngine", t715_MIs, NULL, t715_FIs, NULL, &t715_TI, NULL, &EmptyCustomAttributesCache, &t715_0_0_0, &t715_1_0_0, &t715_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t715), sizeof (t715), 0, -1, 0, 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 5, 0, 0, 4, 0, 0};
#include "t716.h"
// Metadata Definition UnityEngine.GUISkin/SkinChangedDelegate
extern TypeInfo t716_TI;
#include "t716MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t58_0_0_0;
static ParameterInfo t716_m3265_ParameterInfos[] = 
{
	{"object", 0, 134217883, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"method", 1, 134217884, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m3265_MI = 
{
	".ctor", (methodPointerType)&m3265, &t716_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t58, t716_m3265_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 221, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3266_MI = 
{
	"Invoke", (methodPointerType)&m3266, &t716_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 3, 10, 0, false, false, 222, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t470_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t716_m3267_ParameterInfos[] = 
{
	{"callback", 0, 134217885, &EmptyCustomAttributesCache, &t470_0_0_0},
	{"object", 1, 134217886, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t469_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3267_MI = 
{
	"BeginInvoke", (methodPointerType)&m3267, &t716_TI, &t469_0_0_0, RuntimeInvoker_t9_t9_t9, t716_m3267_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 2, false, false, 223, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t469_0_0_0;
static ParameterInfo t716_m3268_ParameterInfos[] = 
{
	{"result", 0, 134217887, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3268_MI = 
{
	"EndInvoke", (methodPointerType)&m3268, &t716_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t716_m3268_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 224, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t716_MIs[] =
{
	&m3265_MI,
	&m3266_MI,
	&m3267_MI,
	&m3268_MI,
	NULL
};
extern MethodInfo m3266_MI;
extern MethodInfo m3267_MI;
extern MethodInfo m3268_MI;
static Il2CppMethodReference t716_VT[] =
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
	&m3266_MI,
	&m3267_MI,
	&m3268_MI,
};
static bool t716_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t716_IOs[] = 
{
	{ &t622_0_0_0, 4},
	{ &t623_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t716_0_0_0;
extern Il2CppType t716_1_0_0;
extern TypeInfo t699_TI;
struct t716;
const Il2CppTypeDefinitionMetadata t716_DM = 
{
	&t699_0_0_0, NULL, NULL, t716_IOs, &t471_0_0_0, t716_VT, t716_VTIGM, NULL};
TypeInfo t716_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "SkinChangedDelegate", "", t716_MIs, NULL, NULL, NULL, &t716_TI, NULL, &EmptyCustomAttributesCache, &t716_0_0_0, &t716_1_0_0, &t716_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t716, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t716), sizeof (t716), 0, sizeof(methodPointerType), 0, 0, -1, 261, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t699.h"
// Metadata Definition UnityEngine.GUISkin
#include "t699MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3269_MI = 
{
	".ctor", (methodPointerType)&m3269, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 167, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3270_MI = 
{
	"OnEnable", (methodPointerType)&m3270, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 168, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t424_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3271_MI = 
{
	"get_font", (methodPointerType)&m3271, &t699_TI, &t424_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 169, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t424_0_0_0;
extern Il2CppType t424_0_0_0;
static ParameterInfo t699_m3272_ParameterInfos[] = 
{
	{"value", 0, 134217859, &EmptyCustomAttributesCache, &t424_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3272_MI = 
{
	"set_font", (methodPointerType)&m3272, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3272_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 170, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3273_MI = 
{
	"get_box", (methodPointerType)&m3273, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 171, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3274_ParameterInfos[] = 
{
	{"value", 0, 134217860, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3274_MI = 
{
	"set_box", (methodPointerType)&m3274, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3274_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 172, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3275_MI = 
{
	"get_label", (methodPointerType)&m3275, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 173, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3276_ParameterInfos[] = 
{
	{"value", 0, 134217861, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3276_MI = 
{
	"set_label", (methodPointerType)&m3276, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3276_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 174, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3277_MI = 
{
	"get_textField", (methodPointerType)&m3277, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 175, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3278_ParameterInfos[] = 
{
	{"value", 0, 134217862, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3278_MI = 
{
	"set_textField", (methodPointerType)&m3278, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3278_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 176, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3279_MI = 
{
	"get_textArea", (methodPointerType)&m3279, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 177, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3280_ParameterInfos[] = 
{
	{"value", 0, 134217863, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3280_MI = 
{
	"set_textArea", (methodPointerType)&m3280, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3280_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 178, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3281_MI = 
{
	"get_button", (methodPointerType)&m3281, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 179, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3282_ParameterInfos[] = 
{
	{"value", 0, 134217864, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3282_MI = 
{
	"set_button", (methodPointerType)&m3282, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3282_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 180, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3283_MI = 
{
	"get_toggle", (methodPointerType)&m3283, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 181, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3284_ParameterInfos[] = 
{
	{"value", 0, 134217865, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3284_MI = 
{
	"set_toggle", (methodPointerType)&m3284, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3284_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 182, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3285_MI = 
{
	"get_window", (methodPointerType)&m3285, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 183, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3286_ParameterInfos[] = 
{
	{"value", 0, 134217866, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3286_MI = 
{
	"set_window", (methodPointerType)&m3286, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3286_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 184, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3287_MI = 
{
	"get_horizontalSlider", (methodPointerType)&m3287, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 185, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3288_ParameterInfos[] = 
{
	{"value", 0, 134217867, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3288_MI = 
{
	"set_horizontalSlider", (methodPointerType)&m3288, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3288_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 186, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3289_MI = 
{
	"get_horizontalSliderThumb", (methodPointerType)&m3289, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 187, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3290_ParameterInfos[] = 
{
	{"value", 0, 134217868, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3290_MI = 
{
	"set_horizontalSliderThumb", (methodPointerType)&m3290, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3290_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 188, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3291_MI = 
{
	"get_verticalSlider", (methodPointerType)&m3291, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 189, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3292_ParameterInfos[] = 
{
	{"value", 0, 134217869, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3292_MI = 
{
	"set_verticalSlider", (methodPointerType)&m3292, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3292_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 190, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3293_MI = 
{
	"get_verticalSliderThumb", (methodPointerType)&m3293, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 191, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3294_ParameterInfos[] = 
{
	{"value", 0, 134217870, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3294_MI = 
{
	"set_verticalSliderThumb", (methodPointerType)&m3294, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3294_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 192, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3295_MI = 
{
	"get_horizontalScrollbar", (methodPointerType)&m3295, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 193, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3296_ParameterInfos[] = 
{
	{"value", 0, 134217871, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3296_MI = 
{
	"set_horizontalScrollbar", (methodPointerType)&m3296, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3296_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 194, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3297_MI = 
{
	"get_horizontalScrollbarThumb", (methodPointerType)&m3297, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 195, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3298_ParameterInfos[] = 
{
	{"value", 0, 134217872, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3298_MI = 
{
	"set_horizontalScrollbarThumb", (methodPointerType)&m3298, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3298_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 196, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3299_MI = 
{
	"get_horizontalScrollbarLeftButton", (methodPointerType)&m3299, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 197, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3300_ParameterInfos[] = 
{
	{"value", 0, 134217873, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3300_MI = 
{
	"set_horizontalScrollbarLeftButton", (methodPointerType)&m3300, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3300_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 198, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3301_MI = 
{
	"get_horizontalScrollbarRightButton", (methodPointerType)&m3301, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 199, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3302_ParameterInfos[] = 
{
	{"value", 0, 134217874, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3302_MI = 
{
	"set_horizontalScrollbarRightButton", (methodPointerType)&m3302, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3302_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 200, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3303_MI = 
{
	"get_verticalScrollbar", (methodPointerType)&m3303, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 201, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3304_ParameterInfos[] = 
{
	{"value", 0, 134217875, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3304_MI = 
{
	"set_verticalScrollbar", (methodPointerType)&m3304, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3304_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 202, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3305_MI = 
{
	"get_verticalScrollbarThumb", (methodPointerType)&m3305, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 203, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3306_ParameterInfos[] = 
{
	{"value", 0, 134217876, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3306_MI = 
{
	"set_verticalScrollbarThumb", (methodPointerType)&m3306, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3306_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 204, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3307_MI = 
{
	"get_verticalScrollbarUpButton", (methodPointerType)&m3307, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 205, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3308_ParameterInfos[] = 
{
	{"value", 0, 134217877, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3308_MI = 
{
	"set_verticalScrollbarUpButton", (methodPointerType)&m3308, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3308_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 206, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3309_MI = 
{
	"get_verticalScrollbarDownButton", (methodPointerType)&m3309, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 207, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3310_ParameterInfos[] = 
{
	{"value", 0, 134217878, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3310_MI = 
{
	"set_verticalScrollbarDownButton", (methodPointerType)&m3310, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3310_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 208, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3311_MI = 
{
	"get_scrollView", (methodPointerType)&m3311, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 209, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t699_m3312_ParameterInfos[] = 
{
	{"value", 0, 134217879, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3312_MI = 
{
	"set_scrollView", (methodPointerType)&m3312, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3312_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 210, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t717_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3313_MI = 
{
	"get_customStyles", (methodPointerType)&m3313, &t699_TI, &t717_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 211, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t717_0_0_0;
extern Il2CppType t717_0_0_0;
static ParameterInfo t699_m3314_ParameterInfos[] = 
{
	{"value", 0, 134217880, &EmptyCustomAttributesCache, &t717_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3314_MI = 
{
	"set_customStyles", (methodPointerType)&m3314, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t699_m3314_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 212, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t715_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3315_MI = 
{
	"get_settings", (methodPointerType)&m3315, &t699_TI, &t715_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 213, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3316_MI = 
{
	"get_error", (methodPointerType)&m3316, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 214, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3317_MI = 
{
	"Apply", (methodPointerType)&m3317, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 215, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3318_MI = 
{
	"BuildStyleCache", (methodPointerType)&m3318, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 216, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t699_m3319_ParameterInfos[] = 
{
	{"styleName", 0, 134217881, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3319_MI = 
{
	"GetStyle", (methodPointerType)&m3319, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9_t9, t699_m3319_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 217, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t699_m3320_ParameterInfos[] = 
{
	{"styleName", 0, 134217882, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3320_MI = 
{
	"FindStyle", (methodPointerType)&m3320, &t699_TI, &t701_0_0_0, RuntimeInvoker_t9_t9, t699_m3320_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 218, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3321_MI = 
{
	"MakeCurrent", (methodPointerType)&m3321, &t699_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 219, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t76_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3322_MI = 
{
	"GetEnumerator", (methodPointerType)&m3322, &t699_TI, &t76_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 220, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t699_MIs[] =
{
	&m3269_MI,
	&m3270_MI,
	&m3271_MI,
	&m3272_MI,
	&m3273_MI,
	&m3274_MI,
	&m3275_MI,
	&m3276_MI,
	&m3277_MI,
	&m3278_MI,
	&m3279_MI,
	&m3280_MI,
	&m3281_MI,
	&m3282_MI,
	&m3283_MI,
	&m3284_MI,
	&m3285_MI,
	&m3286_MI,
	&m3287_MI,
	&m3288_MI,
	&m3289_MI,
	&m3290_MI,
	&m3291_MI,
	&m3292_MI,
	&m3293_MI,
	&m3294_MI,
	&m3295_MI,
	&m3296_MI,
	&m3297_MI,
	&m3298_MI,
	&m3299_MI,
	&m3300_MI,
	&m3301_MI,
	&m3302_MI,
	&m3303_MI,
	&m3304_MI,
	&m3305_MI,
	&m3306_MI,
	&m3307_MI,
	&m3308_MI,
	&m3309_MI,
	&m3310_MI,
	&m3311_MI,
	&m3312_MI,
	&m3313_MI,
	&m3314_MI,
	&m3315_MI,
	&m3316_MI,
	&m3317_MI,
	&m3318_MI,
	&m3319_MI,
	&m3320_MI,
	&m3321_MI,
	&m3322_MI,
	NULL
};
extern Il2CppType t424_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_Font;
FieldInfo t699_f2_FieldInfo = 
{
	"m_Font", &t424_0_0_1, &t699_TI, offsetof(t699, f2), &t699__CustomAttributeCache_m_Font};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_box;
FieldInfo t699_f3_FieldInfo = 
{
	"m_box", &t701_0_0_1, &t699_TI, offsetof(t699, f3), &t699__CustomAttributeCache_m_box};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_button;
FieldInfo t699_f4_FieldInfo = 
{
	"m_button", &t701_0_0_1, &t699_TI, offsetof(t699, f4), &t699__CustomAttributeCache_m_button};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_toggle;
FieldInfo t699_f5_FieldInfo = 
{
	"m_toggle", &t701_0_0_1, &t699_TI, offsetof(t699, f5), &t699__CustomAttributeCache_m_toggle};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_label;
FieldInfo t699_f6_FieldInfo = 
{
	"m_label", &t701_0_0_1, &t699_TI, offsetof(t699, f6), &t699__CustomAttributeCache_m_label};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_textField;
FieldInfo t699_f7_FieldInfo = 
{
	"m_textField", &t701_0_0_1, &t699_TI, offsetof(t699, f7), &t699__CustomAttributeCache_m_textField};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_textArea;
FieldInfo t699_f8_FieldInfo = 
{
	"m_textArea", &t701_0_0_1, &t699_TI, offsetof(t699, f8), &t699__CustomAttributeCache_m_textArea};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_window;
FieldInfo t699_f9_FieldInfo = 
{
	"m_window", &t701_0_0_1, &t699_TI, offsetof(t699, f9), &t699__CustomAttributeCache_m_window};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_horizontalSlider;
FieldInfo t699_f10_FieldInfo = 
{
	"m_horizontalSlider", &t701_0_0_1, &t699_TI, offsetof(t699, f10), &t699__CustomAttributeCache_m_horizontalSlider};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_horizontalSliderThumb;
FieldInfo t699_f11_FieldInfo = 
{
	"m_horizontalSliderThumb", &t701_0_0_1, &t699_TI, offsetof(t699, f11), &t699__CustomAttributeCache_m_horizontalSliderThumb};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_verticalSlider;
FieldInfo t699_f12_FieldInfo = 
{
	"m_verticalSlider", &t701_0_0_1, &t699_TI, offsetof(t699, f12), &t699__CustomAttributeCache_m_verticalSlider};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_verticalSliderThumb;
FieldInfo t699_f13_FieldInfo = 
{
	"m_verticalSliderThumb", &t701_0_0_1, &t699_TI, offsetof(t699, f13), &t699__CustomAttributeCache_m_verticalSliderThumb};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_horizontalScrollbar;
FieldInfo t699_f14_FieldInfo = 
{
	"m_horizontalScrollbar", &t701_0_0_1, &t699_TI, offsetof(t699, f14), &t699__CustomAttributeCache_m_horizontalScrollbar};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_horizontalScrollbarThumb;
FieldInfo t699_f15_FieldInfo = 
{
	"m_horizontalScrollbarThumb", &t701_0_0_1, &t699_TI, offsetof(t699, f15), &t699__CustomAttributeCache_m_horizontalScrollbarThumb};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_horizontalScrollbarLeftButton;
FieldInfo t699_f16_FieldInfo = 
{
	"m_horizontalScrollbarLeftButton", &t701_0_0_1, &t699_TI, offsetof(t699, f16), &t699__CustomAttributeCache_m_horizontalScrollbarLeftButton};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_horizontalScrollbarRightButton;
FieldInfo t699_f17_FieldInfo = 
{
	"m_horizontalScrollbarRightButton", &t701_0_0_1, &t699_TI, offsetof(t699, f17), &t699__CustomAttributeCache_m_horizontalScrollbarRightButton};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_verticalScrollbar;
FieldInfo t699_f18_FieldInfo = 
{
	"m_verticalScrollbar", &t701_0_0_1, &t699_TI, offsetof(t699, f18), &t699__CustomAttributeCache_m_verticalScrollbar};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_verticalScrollbarThumb;
FieldInfo t699_f19_FieldInfo = 
{
	"m_verticalScrollbarThumb", &t701_0_0_1, &t699_TI, offsetof(t699, f19), &t699__CustomAttributeCache_m_verticalScrollbarThumb};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_verticalScrollbarUpButton;
FieldInfo t699_f20_FieldInfo = 
{
	"m_verticalScrollbarUpButton", &t701_0_0_1, &t699_TI, offsetof(t699, f20), &t699__CustomAttributeCache_m_verticalScrollbarUpButton};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_verticalScrollbarDownButton;
FieldInfo t699_f21_FieldInfo = 
{
	"m_verticalScrollbarDownButton", &t701_0_0_1, &t699_TI, offsetof(t699, f21), &t699__CustomAttributeCache_m_verticalScrollbarDownButton};
extern Il2CppType t701_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_ScrollView;
FieldInfo t699_f22_FieldInfo = 
{
	"m_ScrollView", &t701_0_0_1, &t699_TI, offsetof(t699, f22), &t699__CustomAttributeCache_m_ScrollView};
extern Il2CppType t717_0_0_3;
extern CustomAttributesCache t699__CustomAttributeCache_m_CustomStyles;
FieldInfo t699_f23_FieldInfo = 
{
	"m_CustomStyles", &t717_0_0_3, &t699_TI, offsetof(t699, f23), &t699__CustomAttributeCache_m_CustomStyles};
extern Il2CppType t715_0_0_1;
extern CustomAttributesCache t699__CustomAttributeCache_m_Settings;
FieldInfo t699_f24_FieldInfo = 
{
	"m_Settings", &t715_0_0_1, &t699_TI, offsetof(t699, f24), &t699__CustomAttributeCache_m_Settings};
extern Il2CppType t701_0_0_19;
FieldInfo t699_f25_FieldInfo = 
{
	"ms_Error", &t701_0_0_19, &t699_TI, offsetof(t699_SFs, f25), &EmptyCustomAttributesCache};
extern Il2CppType t718_0_0_1;
FieldInfo t699_f26_FieldInfo = 
{
	"styles", &t718_0_0_1, &t699_TI, offsetof(t699, f26), &EmptyCustomAttributesCache};
extern Il2CppType t716_0_0_19;
FieldInfo t699_f27_FieldInfo = 
{
	"m_SkinChanged", &t716_0_0_19, &t699_TI, offsetof(t699_SFs, f27), &EmptyCustomAttributesCache};
extern Il2CppType t699_0_0_19;
FieldInfo t699_f28_FieldInfo = 
{
	"current", &t699_0_0_19, &t699_TI, offsetof(t699_SFs, f28), &EmptyCustomAttributesCache};
static FieldInfo* t699_FIs[] =
{
	&t699_f2_FieldInfo,
	&t699_f3_FieldInfo,
	&t699_f4_FieldInfo,
	&t699_f5_FieldInfo,
	&t699_f6_FieldInfo,
	&t699_f7_FieldInfo,
	&t699_f8_FieldInfo,
	&t699_f9_FieldInfo,
	&t699_f10_FieldInfo,
	&t699_f11_FieldInfo,
	&t699_f12_FieldInfo,
	&t699_f13_FieldInfo,
	&t699_f14_FieldInfo,
	&t699_f15_FieldInfo,
	&t699_f16_FieldInfo,
	&t699_f17_FieldInfo,
	&t699_f18_FieldInfo,
	&t699_f19_FieldInfo,
	&t699_f20_FieldInfo,
	&t699_f21_FieldInfo,
	&t699_f22_FieldInfo,
	&t699_f23_FieldInfo,
	&t699_f24_FieldInfo,
	&t699_f25_FieldInfo,
	&t699_f26_FieldInfo,
	&t699_f27_FieldInfo,
	&t699_f28_FieldInfo,
	NULL
};
extern MethodInfo m3271_MI;
extern MethodInfo m3272_MI;
static PropertyInfo t699____font_PropertyInfo = 
{
	&t699_TI, "font", &m3271_MI, &m3272_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3273_MI;
extern MethodInfo m3274_MI;
static PropertyInfo t699____box_PropertyInfo = 
{
	&t699_TI, "box", &m3273_MI, &m3274_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3275_MI;
extern MethodInfo m3276_MI;
static PropertyInfo t699____label_PropertyInfo = 
{
	&t699_TI, "label", &m3275_MI, &m3276_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3277_MI;
extern MethodInfo m3278_MI;
static PropertyInfo t699____textField_PropertyInfo = 
{
	&t699_TI, "textField", &m3277_MI, &m3278_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3279_MI;
extern MethodInfo m3280_MI;
static PropertyInfo t699____textArea_PropertyInfo = 
{
	&t699_TI, "textArea", &m3279_MI, &m3280_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3281_MI;
extern MethodInfo m3282_MI;
static PropertyInfo t699____button_PropertyInfo = 
{
	&t699_TI, "button", &m3281_MI, &m3282_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3283_MI;
extern MethodInfo m3284_MI;
static PropertyInfo t699____toggle_PropertyInfo = 
{
	&t699_TI, "toggle", &m3283_MI, &m3284_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3285_MI;
extern MethodInfo m3286_MI;
static PropertyInfo t699____window_PropertyInfo = 
{
	&t699_TI, "window", &m3285_MI, &m3286_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3287_MI;
extern MethodInfo m3288_MI;
static PropertyInfo t699____horizontalSlider_PropertyInfo = 
{
	&t699_TI, "horizontalSlider", &m3287_MI, &m3288_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3289_MI;
extern MethodInfo m3290_MI;
static PropertyInfo t699____horizontalSliderThumb_PropertyInfo = 
{
	&t699_TI, "horizontalSliderThumb", &m3289_MI, &m3290_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3291_MI;
extern MethodInfo m3292_MI;
static PropertyInfo t699____verticalSlider_PropertyInfo = 
{
	&t699_TI, "verticalSlider", &m3291_MI, &m3292_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3293_MI;
extern MethodInfo m3294_MI;
static PropertyInfo t699____verticalSliderThumb_PropertyInfo = 
{
	&t699_TI, "verticalSliderThumb", &m3293_MI, &m3294_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3295_MI;
extern MethodInfo m3296_MI;
static PropertyInfo t699____horizontalScrollbar_PropertyInfo = 
{
	&t699_TI, "horizontalScrollbar", &m3295_MI, &m3296_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3297_MI;
extern MethodInfo m3298_MI;
static PropertyInfo t699____horizontalScrollbarThumb_PropertyInfo = 
{
	&t699_TI, "horizontalScrollbarThumb", &m3297_MI, &m3298_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3299_MI;
extern MethodInfo m3300_MI;
static PropertyInfo t699____horizontalScrollbarLeftButton_PropertyInfo = 
{
	&t699_TI, "horizontalScrollbarLeftButton", &m3299_MI, &m3300_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3301_MI;
extern MethodInfo m3302_MI;
static PropertyInfo t699____horizontalScrollbarRightButton_PropertyInfo = 
{
	&t699_TI, "horizontalScrollbarRightButton", &m3301_MI, &m3302_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3303_MI;
extern MethodInfo m3304_MI;
static PropertyInfo t699____verticalScrollbar_PropertyInfo = 
{
	&t699_TI, "verticalScrollbar", &m3303_MI, &m3304_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3305_MI;
extern MethodInfo m3306_MI;
static PropertyInfo t699____verticalScrollbarThumb_PropertyInfo = 
{
	&t699_TI, "verticalScrollbarThumb", &m3305_MI, &m3306_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3307_MI;
extern MethodInfo m3308_MI;
static PropertyInfo t699____verticalScrollbarUpButton_PropertyInfo = 
{
	&t699_TI, "verticalScrollbarUpButton", &m3307_MI, &m3308_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3309_MI;
extern MethodInfo m3310_MI;
static PropertyInfo t699____verticalScrollbarDownButton_PropertyInfo = 
{
	&t699_TI, "verticalScrollbarDownButton", &m3309_MI, &m3310_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3311_MI;
extern MethodInfo m3312_MI;
static PropertyInfo t699____scrollView_PropertyInfo = 
{
	&t699_TI, "scrollView", &m3311_MI, &m3312_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3313_MI;
extern MethodInfo m3314_MI;
static PropertyInfo t699____customStyles_PropertyInfo = 
{
	&t699_TI, "customStyles", &m3313_MI, &m3314_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3315_MI;
static PropertyInfo t699____settings_PropertyInfo = 
{
	&t699_TI, "settings", &m3315_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3316_MI;
static PropertyInfo t699____error_PropertyInfo = 
{
	&t699_TI, "error", &m3316_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t699_PIs[] =
{
	&t699____font_PropertyInfo,
	&t699____box_PropertyInfo,
	&t699____label_PropertyInfo,
	&t699____textField_PropertyInfo,
	&t699____textArea_PropertyInfo,
	&t699____button_PropertyInfo,
	&t699____toggle_PropertyInfo,
	&t699____window_PropertyInfo,
	&t699____horizontalSlider_PropertyInfo,
	&t699____horizontalSliderThumb_PropertyInfo,
	&t699____verticalSlider_PropertyInfo,
	&t699____verticalSliderThumb_PropertyInfo,
	&t699____horizontalScrollbar_PropertyInfo,
	&t699____horizontalScrollbarThumb_PropertyInfo,
	&t699____horizontalScrollbarLeftButton_PropertyInfo,
	&t699____horizontalScrollbarRightButton_PropertyInfo,
	&t699____verticalScrollbar_PropertyInfo,
	&t699____verticalScrollbarThumb_PropertyInfo,
	&t699____verticalScrollbarUpButton_PropertyInfo,
	&t699____verticalScrollbarDownButton_PropertyInfo,
	&t699____scrollView_PropertyInfo,
	&t699____customStyles_PropertyInfo,
	&t699____settings_PropertyInfo,
	&t699____error_PropertyInfo,
	NULL
};
static const Il2CppType* t699_TI__nestedTypes[1] =
{
	&t716_0_0_0,
};
static Il2CppMethodReference t699_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t699_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern TypeInfo t189_TI;
#include "t189.h"
#include "t189MD.h"
extern MethodInfo m675_MI;
void t699_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t189 * tmp;
		tmp = (t189 *)il2cpp_codegen_object_new (&t189_TI);
		m675(tmp, &m675_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t699_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t699__CustomAttributeCache = {
1,
NULL,
&t699_CustomAttributesCacheGenerator
};
CustomAttributesCache t699__CustomAttributeCache_m_Font = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_Font
};
CustomAttributesCache t699__CustomAttributeCache_m_box = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_box
};
CustomAttributesCache t699__CustomAttributeCache_m_button = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_button
};
CustomAttributesCache t699__CustomAttributeCache_m_toggle = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_toggle
};
CustomAttributesCache t699__CustomAttributeCache_m_label = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_label
};
CustomAttributesCache t699__CustomAttributeCache_m_textField = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_textField
};
CustomAttributesCache t699__CustomAttributeCache_m_textArea = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_textArea
};
CustomAttributesCache t699__CustomAttributeCache_m_window = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_window
};
CustomAttributesCache t699__CustomAttributeCache_m_horizontalSlider = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_horizontalSlider
};
CustomAttributesCache t699__CustomAttributeCache_m_horizontalSliderThumb = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_horizontalSliderThumb
};
CustomAttributesCache t699__CustomAttributeCache_m_verticalSlider = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_verticalSlider
};
CustomAttributesCache t699__CustomAttributeCache_m_verticalSliderThumb = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_verticalSliderThumb
};
CustomAttributesCache t699__CustomAttributeCache_m_horizontalScrollbar = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_horizontalScrollbar
};
CustomAttributesCache t699__CustomAttributeCache_m_horizontalScrollbarThumb = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb
};
CustomAttributesCache t699__CustomAttributeCache_m_horizontalScrollbarLeftButton = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton
};
CustomAttributesCache t699__CustomAttributeCache_m_horizontalScrollbarRightButton = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton
};
CustomAttributesCache t699__CustomAttributeCache_m_verticalScrollbar = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_verticalScrollbar
};
CustomAttributesCache t699__CustomAttributeCache_m_verticalScrollbarThumb = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_verticalScrollbarThumb
};
CustomAttributesCache t699__CustomAttributeCache_m_verticalScrollbarUpButton = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton
};
CustomAttributesCache t699__CustomAttributeCache_m_verticalScrollbarDownButton = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton
};
CustomAttributesCache t699__CustomAttributeCache_m_ScrollView = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_ScrollView
};
CustomAttributesCache t699__CustomAttributeCache_m_CustomStyles = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_CustomStyles
};
CustomAttributesCache t699__CustomAttributeCache_m_Settings = {
1,
NULL,
&t699_CustomAttributesCacheGenerator_m_Settings
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t699_1_0_0;
struct t699;
extern CustomAttributesCache t699__CustomAttributeCache;
extern CustomAttributesCache t699__CustomAttributeCache_m_Font;
extern CustomAttributesCache t699__CustomAttributeCache_m_box;
extern CustomAttributesCache t699__CustomAttributeCache_m_button;
extern CustomAttributesCache t699__CustomAttributeCache_m_toggle;
extern CustomAttributesCache t699__CustomAttributeCache_m_label;
extern CustomAttributesCache t699__CustomAttributeCache_m_textField;
extern CustomAttributesCache t699__CustomAttributeCache_m_textArea;
extern CustomAttributesCache t699__CustomAttributeCache_m_window;
extern CustomAttributesCache t699__CustomAttributeCache_m_horizontalSlider;
extern CustomAttributesCache t699__CustomAttributeCache_m_horizontalSliderThumb;
extern CustomAttributesCache t699__CustomAttributeCache_m_verticalSlider;
extern CustomAttributesCache t699__CustomAttributeCache_m_verticalSliderThumb;
extern CustomAttributesCache t699__CustomAttributeCache_m_horizontalScrollbar;
extern CustomAttributesCache t699__CustomAttributeCache_m_horizontalScrollbarThumb;
extern CustomAttributesCache t699__CustomAttributeCache_m_horizontalScrollbarLeftButton;
extern CustomAttributesCache t699__CustomAttributeCache_m_horizontalScrollbarRightButton;
extern CustomAttributesCache t699__CustomAttributeCache_m_verticalScrollbar;
extern CustomAttributesCache t699__CustomAttributeCache_m_verticalScrollbarThumb;
extern CustomAttributesCache t699__CustomAttributeCache_m_verticalScrollbarUpButton;
extern CustomAttributesCache t699__CustomAttributeCache_m_verticalScrollbarDownButton;
extern CustomAttributesCache t699__CustomAttributeCache_m_ScrollView;
extern CustomAttributesCache t699__CustomAttributeCache_m_CustomStyles;
extern CustomAttributesCache t699__CustomAttributeCache_m_Settings;
const Il2CppTypeDefinitionMetadata t699_DM = 
{
	NULL, t699_TI__nestedTypes, NULL, NULL, &t687_0_0_0, t699_VT, t699_VTIGM, NULL};
TypeInfo t699_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GUISkin", "UnityEngine", t699_MIs, t699_PIs, t699_FIs, NULL, &t699_TI, NULL, &t699__CustomAttributeCache, &t699_0_0_0, &t699_1_0_0, &t699_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t699), sizeof (t699), 0, -1, sizeof(t699_SFs), 0, -1, 1057025, 0, 0, false, false, false, false, false, false, false, false, false, false, 54, 24, 27, 0, 1, 4, 0, 0};
#include "t591.h"
// Metadata Definition UnityEngine.GUIContent
extern TypeInfo t591_TI;
#include "t591MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3323_MI = 
{
	".ctor", (methodPointerType)&m3323, &t591_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 225, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t591_m2728_ParameterInfos[] = 
{
	{"text", 0, 134217888, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m2728_MI = 
{
	".ctor", (methodPointerType)&m2728, &t591_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t591_m2728_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 226, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3324_MI = 
{
	".cctor", (methodPointerType)&m3324, &t591_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 227, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m2727_MI = 
{
	"get_text", (methodPointerType)&m2727, &t591_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 228, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t591_m3325_ParameterInfos[] = 
{
	{"value", 0, 134217889, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3325_MI = 
{
	"set_text", (methodPointerType)&m3325, &t591_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t591_m3325_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 229, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3326_MI = 
{
	"ClearStaticCache", (methodPointerType)&m3326, &t591_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 230, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t591_MIs[] =
{
	&m3323_MI,
	&m2728_MI,
	&m3324_MI,
	&m2727_MI,
	&m3325_MI,
	&m3326_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
extern CustomAttributesCache t591__CustomAttributeCache_m_Text;
FieldInfo t591_f0_FieldInfo = 
{
	"m_Text", &t2_0_0_1, &t591_TI, offsetof(t591, f0), &t591__CustomAttributeCache_m_Text};
extern Il2CppType t148_0_0_1;
extern CustomAttributesCache t591__CustomAttributeCache_m_Image;
FieldInfo t591_f1_FieldInfo = 
{
	"m_Image", &t148_0_0_1, &t591_TI, offsetof(t591, f1), &t591__CustomAttributeCache_m_Image};
extern Il2CppType t2_0_0_1;
extern CustomAttributesCache t591__CustomAttributeCache_m_Tooltip;
FieldInfo t591_f2_FieldInfo = 
{
	"m_Tooltip", &t2_0_0_1, &t591_TI, offsetof(t591, f2), &t591__CustomAttributeCache_m_Tooltip};
extern Il2CppType t591_0_0_22;
FieldInfo t591_f3_FieldInfo = 
{
	"none", &t591_0_0_22, &t591_TI, offsetof(t591_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t591_0_0_17;
FieldInfo t591_f4_FieldInfo = 
{
	"s_Text", &t591_0_0_17, &t591_TI, offsetof(t591_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t591_0_0_17;
FieldInfo t591_f5_FieldInfo = 
{
	"s_Image", &t591_0_0_17, &t591_TI, offsetof(t591_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t591_0_0_17;
FieldInfo t591_f6_FieldInfo = 
{
	"s_TextImage", &t591_0_0_17, &t591_TI, offsetof(t591_SFs, f6), &EmptyCustomAttributesCache};
static FieldInfo* t591_FIs[] =
{
	&t591_f0_FieldInfo,
	&t591_f1_FieldInfo,
	&t591_f2_FieldInfo,
	&t591_f3_FieldInfo,
	&t591_f4_FieldInfo,
	&t591_f5_FieldInfo,
	&t591_f6_FieldInfo,
	NULL
};
extern MethodInfo m2727_MI;
extern MethodInfo m3325_MI;
static PropertyInfo t591____text_PropertyInfo = 
{
	&t591_TI, "text", &m2727_MI, &m3325_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t591_PIs[] =
{
	&t591____text_PropertyInfo,
	NULL
};
static Il2CppMethodReference t591_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t591_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t591_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t591_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t591_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t193 * tmp;
		tmp = (t193 *)il2cpp_codegen_object_new (&t193_TI);
		m677(tmp, &m677_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t591__CustomAttributeCache_m_Text = {
1,
NULL,
&t591_CustomAttributesCacheGenerator_m_Text
};
CustomAttributesCache t591__CustomAttributeCache_m_Image = {
1,
NULL,
&t591_CustomAttributesCacheGenerator_m_Image
};
CustomAttributesCache t591__CustomAttributeCache_m_Tooltip = {
1,
NULL,
&t591_CustomAttributesCacheGenerator_m_Tooltip
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t591_0_0_0;
extern Il2CppType t591_1_0_0;
struct t591;
extern CustomAttributesCache t591__CustomAttributeCache_m_Text;
extern CustomAttributesCache t591__CustomAttributeCache_m_Image;
extern CustomAttributesCache t591__CustomAttributeCache_m_Tooltip;
const Il2CppTypeDefinitionMetadata t591_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t591_VT, t591_VTIGM, NULL};
TypeInfo t591_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GUIContent", "UnityEngine", t591_MIs, t591_PIs, t591_FIs, NULL, &t591_TI, NULL, &EmptyCustomAttributesCache, &t591_0_0_0, &t591_1_0_0, &t591_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t591), sizeof (t591), 0, -1, sizeof(t591_SFs), 0, -1, 1056777, 0, 0, false, false, false, false, false, false, false, false, true, false, 6, 1, 7, 0, 0, 4, 0, 0};
#include "t719.h"
// Metadata Definition UnityEngine.GUIStyleState
extern TypeInfo t719_TI;
#include "t719MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3327_MI = 
{
	".ctor", (methodPointerType)&m3327, &t719_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 231, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern Il2CppType t58_0_0_0;
static ParameterInfo t719_m3328_ParameterInfos[] = 
{
	{"sourceStyle", 0, 134217890, &EmptyCustomAttributesCache, &t701_0_0_0},
	{"source", 1, 134217891, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m3328_MI = 
{
	".ctor", (methodPointerType)&m3328, &t719_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t58, t719_m3328_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 232, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3329_MI = 
{
	"Finalize", (methodPointerType)&m3329, &t719_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 233, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t719__CustomAttributeCache_m3330;
MethodInfo m3330_MI = 
{
	"Init", (methodPointerType)&m3330, &t719_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t719__CustomAttributeCache_m3330, 129, 4096, 255, 0, false, false, 234, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t719__CustomAttributeCache_m3331;
MethodInfo m3331_MI = 
{
	"Cleanup", (methodPointerType)&m3331, &t719_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t719__CustomAttributeCache_m3331, 129, 4096, 255, 0, false, false, 235, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t432_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t719__CustomAttributeCache_m3332;
MethodInfo m3332_MI = 
{
	"GetBackgroundInternal", (methodPointerType)&m3332, &t719_TI, &t432_0_0_0, RuntimeInvoker_t9, NULL, &t719__CustomAttributeCache_m3332, 129, 4096, 255, 0, false, false, 236, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_1_0_0;
extern Il2CppType t43_1_0_0;
static ParameterInfo t719_m3333_ParameterInfos[] = 
{
	{"value", 0, 134217892, &EmptyCustomAttributesCache, &t43_1_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t647 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t719__CustomAttributeCache_m3333;
MethodInfo m3333_MI = 
{
	"INTERNAL_set_textColor", (methodPointerType)&m3333, &t719_TI, &t122_0_0_0, RuntimeInvoker_t122_t647, t719_m3333_ParameterInfos, &t719__CustomAttributeCache_m3333, 129, 4096, 255, 1, false, false, 237, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t719_m3334_ParameterInfos[] = 
{
	{"value", 0, 134217893, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t43 (MethodInfo* method, void* obj, void** args);
MethodInfo m3334_MI = 
{
	"set_textColor", (methodPointerType)&m3334, &t719_TI, &t122_0_0_0, RuntimeInvoker_t122_t43, t719_m3334_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 238, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t719_MIs[] =
{
	&m3327_MI,
	&m3328_MI,
	&m3329_MI,
	&m3330_MI,
	&m3331_MI,
	&m3332_MI,
	&m3333_MI,
	&m3334_MI,
	NULL
};
extern Il2CppType t58_0_0_131;
FieldInfo t719_f0_FieldInfo = 
{
	"m_Ptr", &t58_0_0_131, &t719_TI, offsetof(t719, f0), &EmptyCustomAttributesCache};
extern Il2CppType t701_0_0_1;
FieldInfo t719_f1_FieldInfo = 
{
	"m_SourceStyle", &t701_0_0_1, &t719_TI, offsetof(t719, f1), &EmptyCustomAttributesCache};
extern Il2CppType t432_0_0_129;
FieldInfo t719_f2_FieldInfo = 
{
	"m_Background", &t432_0_0_129, &t719_TI, offsetof(t719, f2), &EmptyCustomAttributesCache};
static FieldInfo* t719_FIs[] =
{
	&t719_f0_FieldInfo,
	&t719_f1_FieldInfo,
	&t719_f2_FieldInfo,
	NULL
};
extern MethodInfo m3334_MI;
static PropertyInfo t719____textColor_PropertyInfo = 
{
	&t719_TI, "textColor", NULL, &m3334_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t719_PIs[] =
{
	&t719____textColor_PropertyInfo,
	NULL
};
extern MethodInfo m3329_MI;
static Il2CppMethodReference t719_VT[] =
{
	&m671_MI,
	&m3329_MI,
	&m672_MI,
	&m673_MI,
};
static bool t719_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t719_CustomAttributesCacheGenerator_m3330(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t719_CustomAttributesCacheGenerator_m3331(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t719_CustomAttributesCacheGenerator_m3332(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t719_CustomAttributesCacheGenerator_m3333(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t719__CustomAttributeCache_m3330 = {
1,
NULL,
&t719_CustomAttributesCacheGenerator_m3330
};
CustomAttributesCache t719__CustomAttributeCache_m3331 = {
1,
NULL,
&t719_CustomAttributesCacheGenerator_m3331
};
CustomAttributesCache t719__CustomAttributeCache_m3332 = {
1,
NULL,
&t719_CustomAttributesCacheGenerator_m3332
};
CustomAttributesCache t719__CustomAttributeCache_m3333 = {
1,
NULL,
&t719_CustomAttributesCacheGenerator_m3333
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t719_0_0_0;
extern Il2CppType t719_1_0_0;
struct t719;
extern CustomAttributesCache t719__CustomAttributeCache_m3330;
extern CustomAttributesCache t719__CustomAttributeCache_m3331;
extern CustomAttributesCache t719__CustomAttributeCache_m3332;
extern CustomAttributesCache t719__CustomAttributeCache_m3333;
const Il2CppTypeDefinitionMetadata t719_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t719_VT, t719_VTIGM, NULL};
TypeInfo t719_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GUIStyleState", "UnityEngine", t719_MIs, t719_PIs, t719_FIs, NULL, &t719_TI, NULL, &EmptyCustomAttributesCache, &t719_0_0_0, &t719_1_0_0, &t719_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t719), sizeof (t719), 0, -1, 0, 0, -1, 1057033, 0, 0, false, false, false, false, false, false, false, true, false, false, 8, 1, 3, 0, 0, 4, 0, 0};
#include "t537.h"
// Metadata Definition UnityEngine.RectOffset
extern TypeInfo t537_TI;
#include "t537MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m2944_MI = 
{
	".ctor", (methodPointerType)&m2944, &t537_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 239, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern Il2CppType t58_0_0_0;
static ParameterInfo t537_m3335_ParameterInfos[] = 
{
	{"sourceStyle", 0, 134217894, &EmptyCustomAttributesCache, &t701_0_0_0},
	{"source", 1, 134217895, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m3335_MI = 
{
	".ctor", (methodPointerType)&m3335, &t537_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t58, t537_m3335_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 240, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t537_m3336_ParameterInfos[] = 
{
	{"left", 0, 134217896, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"right", 1, 134217897, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"top", 2, 134217898, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"bottom", 3, 134217899, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3336_MI = 
{
	".ctor", (methodPointerType)&m3336, &t537_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t125_t125_t125, t537_m3336_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 241, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3337_MI = 
{
	"Finalize", (methodPointerType)&m3337, &t537_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 242, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t537__CustomAttributeCache_m3338;
MethodInfo m3338_MI = 
{
	"Init", (methodPointerType)&m3338, &t537_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t537__CustomAttributeCache_m3338, 129, 4096, 255, 0, false, false, 243, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t537__CustomAttributeCache_m3339;
MethodInfo m3339_MI = 
{
	"Cleanup", (methodPointerType)&m3339, &t537_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t537__CustomAttributeCache_m3339, 129, 4096, 255, 0, false, false, 244, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t537__CustomAttributeCache_m2939;
MethodInfo m2939_MI = 
{
	"get_left", (methodPointerType)&m2939, &t537_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t537__CustomAttributeCache_m2939, 2182, 4096, 255, 0, false, false, 245, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t537_m3340_ParameterInfos[] = 
{
	{"value", 0, 134217900, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t537__CustomAttributeCache_m3340;
MethodInfo m3340_MI = 
{
	"set_left", (methodPointerType)&m3340, &t537_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t537_m3340_ParameterInfos, &t537__CustomAttributeCache_m3340, 2182, 4096, 255, 1, false, false, 246, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t537__CustomAttributeCache_m3341;
MethodInfo m3341_MI = 
{
	"get_right", (methodPointerType)&m3341, &t537_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t537__CustomAttributeCache_m3341, 2182, 4096, 255, 0, false, false, 247, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t537_m3342_ParameterInfos[] = 
{
	{"value", 0, 134217901, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t537__CustomAttributeCache_m3342;
MethodInfo m3342_MI = 
{
	"set_right", (methodPointerType)&m3342, &t537_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t537_m3342_ParameterInfos, &t537__CustomAttributeCache_m3342, 2182, 4096, 255, 1, false, false, 248, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t537__CustomAttributeCache_m2940;
MethodInfo m2940_MI = 
{
	"get_top", (methodPointerType)&m2940, &t537_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t537__CustomAttributeCache_m2940, 2182, 4096, 255, 0, false, false, 249, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t537_m3343_ParameterInfos[] = 
{
	{"value", 0, 134217902, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t537__CustomAttributeCache_m3343;
MethodInfo m3343_MI = 
{
	"set_top", (methodPointerType)&m3343, &t537_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t537_m3343_ParameterInfos, &t537__CustomAttributeCache_m3343, 2182, 4096, 255, 1, false, false, 250, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t537__CustomAttributeCache_m3344;
MethodInfo m3344_MI = 
{
	"get_bottom", (methodPointerType)&m3344, &t537_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t537__CustomAttributeCache_m3344, 2182, 4096, 255, 0, false, false, 251, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t537_m3345_ParameterInfos[] = 
{
	{"value", 0, 134217903, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t537__CustomAttributeCache_m3345;
MethodInfo m3345_MI = 
{
	"set_bottom", (methodPointerType)&m3345, &t537_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t537_m3345_ParameterInfos, &t537__CustomAttributeCache_m3345, 2182, 4096, 255, 1, false, false, 252, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t537__CustomAttributeCache_m2930;
MethodInfo m2930_MI = 
{
	"get_horizontal", (methodPointerType)&m2930, &t537_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t537__CustomAttributeCache_m2930, 2182, 4096, 255, 0, false, false, 253, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t537__CustomAttributeCache_m2931;
MethodInfo m2931_MI = 
{
	"get_vertical", (methodPointerType)&m2931, &t537_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t537__CustomAttributeCache_m2931, 2182, 4096, 255, 0, false, false, 254, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t441_0_0_0;
static ParameterInfo t537_m3346_ParameterInfos[] = 
{
	{"rect", 0, 134217904, &EmptyCustomAttributesCache, &t441_0_0_0},
};
extern Il2CppType t441_0_0_0;
extern void* RuntimeInvoker_t441_t441 (MethodInfo* method, void* obj, void** args);
MethodInfo m3346_MI = 
{
	"Remove", (methodPointerType)&m3346, &t537_TI, &t441_0_0_0, RuntimeInvoker_t441_t441, t537_m3346_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 255, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t537_0_0_0;
extern Il2CppType t537_0_0_0;
extern Il2CppType t441_1_0_0;
static ParameterInfo t537_m3347_ParameterInfos[] = 
{
	{"self", 0, 134217905, &EmptyCustomAttributesCache, &t537_0_0_0},
	{"rect", 1, 134217906, &EmptyCustomAttributesCache, &t441_1_0_0},
};
extern Il2CppType t441_0_0_0;
extern void* RuntimeInvoker_t441_t9_t947 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t537__CustomAttributeCache_m3347;
MethodInfo m3347_MI = 
{
	"INTERNAL_CALL_Remove", (methodPointerType)&m3347, &t537_TI, &t441_0_0_0, RuntimeInvoker_t441_t9_t947, t537_m3347_ParameterInfos, &t537__CustomAttributeCache_m3347, 145, 4096, 255, 2, false, false, 256, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3348_MI = 
{
	"ToString", (methodPointerType)&m3348, &t537_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 257, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t537_MIs[] =
{
	&m2944_MI,
	&m3335_MI,
	&m3336_MI,
	&m3337_MI,
	&m3338_MI,
	&m3339_MI,
	&m2939_MI,
	&m3340_MI,
	&m3341_MI,
	&m3342_MI,
	&m2940_MI,
	&m3343_MI,
	&m3344_MI,
	&m3345_MI,
	&m2930_MI,
	&m2931_MI,
	&m3346_MI,
	&m3347_MI,
	&m3348_MI,
	NULL
};
extern Il2CppType t58_0_0_131;
FieldInfo t537_f0_FieldInfo = 
{
	"m_Ptr", &t58_0_0_131, &t537_TI, offsetof(t537, f0), &EmptyCustomAttributesCache};
extern Il2CppType t701_0_0_1;
FieldInfo t537_f1_FieldInfo = 
{
	"m_SourceStyle", &t701_0_0_1, &t537_TI, offsetof(t537, f1), &EmptyCustomAttributesCache};
static FieldInfo* t537_FIs[] =
{
	&t537_f0_FieldInfo,
	&t537_f1_FieldInfo,
	NULL
};
extern MethodInfo m2939_MI;
extern MethodInfo m3340_MI;
static PropertyInfo t537____left_PropertyInfo = 
{
	&t537_TI, "left", &m2939_MI, &m3340_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3341_MI;
extern MethodInfo m3342_MI;
static PropertyInfo t537____right_PropertyInfo = 
{
	&t537_TI, "right", &m3341_MI, &m3342_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2940_MI;
extern MethodInfo m3343_MI;
static PropertyInfo t537____top_PropertyInfo = 
{
	&t537_TI, "top", &m2940_MI, &m3343_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3344_MI;
extern MethodInfo m3345_MI;
static PropertyInfo t537____bottom_PropertyInfo = 
{
	&t537_TI, "bottom", &m3344_MI, &m3345_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2930_MI;
static PropertyInfo t537____horizontal_PropertyInfo = 
{
	&t537_TI, "horizontal", &m2930_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2931_MI;
static PropertyInfo t537____vertical_PropertyInfo = 
{
	&t537_TI, "vertical", &m2931_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t537_PIs[] =
{
	&t537____left_PropertyInfo,
	&t537____right_PropertyInfo,
	&t537____top_PropertyInfo,
	&t537____bottom_PropertyInfo,
	&t537____horizontal_PropertyInfo,
	&t537____vertical_PropertyInfo,
	NULL
};
extern MethodInfo m3337_MI;
extern MethodInfo m3348_MI;
static Il2CppMethodReference t537_VT[] =
{
	&m671_MI,
	&m3337_MI,
	&m672_MI,
	&m3348_MI,
};
static bool t537_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t537_CustomAttributesCacheGenerator_m3338(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t537_CustomAttributesCacheGenerator_m3339(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t537_CustomAttributesCacheGenerator_m2939(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t537_CustomAttributesCacheGenerator_m3340(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t537_CustomAttributesCacheGenerator_m3341(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t537_CustomAttributesCacheGenerator_m3342(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t537_CustomAttributesCacheGenerator_m2940(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t537_CustomAttributesCacheGenerator_m3343(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t537_CustomAttributesCacheGenerator_m3344(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t537_CustomAttributesCacheGenerator_m3345(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t537_CustomAttributesCacheGenerator_m2930(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t537_CustomAttributesCacheGenerator_m2931(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t537_CustomAttributesCacheGenerator_m3347(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t537__CustomAttributeCache_m3338 = {
1,
NULL,
&t537_CustomAttributesCacheGenerator_m3338
};
CustomAttributesCache t537__CustomAttributeCache_m3339 = {
1,
NULL,
&t537_CustomAttributesCacheGenerator_m3339
};
CustomAttributesCache t537__CustomAttributeCache_m2939 = {
1,
NULL,
&t537_CustomAttributesCacheGenerator_m2939
};
CustomAttributesCache t537__CustomAttributeCache_m3340 = {
1,
NULL,
&t537_CustomAttributesCacheGenerator_m3340
};
CustomAttributesCache t537__CustomAttributeCache_m3341 = {
1,
NULL,
&t537_CustomAttributesCacheGenerator_m3341
};
CustomAttributesCache t537__CustomAttributeCache_m3342 = {
1,
NULL,
&t537_CustomAttributesCacheGenerator_m3342
};
CustomAttributesCache t537__CustomAttributeCache_m2940 = {
1,
NULL,
&t537_CustomAttributesCacheGenerator_m2940
};
CustomAttributesCache t537__CustomAttributeCache_m3343 = {
1,
NULL,
&t537_CustomAttributesCacheGenerator_m3343
};
CustomAttributesCache t537__CustomAttributeCache_m3344 = {
1,
NULL,
&t537_CustomAttributesCacheGenerator_m3344
};
CustomAttributesCache t537__CustomAttributeCache_m3345 = {
1,
NULL,
&t537_CustomAttributesCacheGenerator_m3345
};
CustomAttributesCache t537__CustomAttributeCache_m2930 = {
1,
NULL,
&t537_CustomAttributesCacheGenerator_m2930
};
CustomAttributesCache t537__CustomAttributeCache_m2931 = {
1,
NULL,
&t537_CustomAttributesCacheGenerator_m2931
};
CustomAttributesCache t537__CustomAttributeCache_m3347 = {
1,
NULL,
&t537_CustomAttributesCacheGenerator_m3347
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t537_1_0_0;
struct t537;
extern CustomAttributesCache t537__CustomAttributeCache_m3338;
extern CustomAttributesCache t537__CustomAttributeCache_m3339;
extern CustomAttributesCache t537__CustomAttributeCache_m2939;
extern CustomAttributesCache t537__CustomAttributeCache_m3340;
extern CustomAttributesCache t537__CustomAttributeCache_m3341;
extern CustomAttributesCache t537__CustomAttributeCache_m3342;
extern CustomAttributesCache t537__CustomAttributeCache_m2940;
extern CustomAttributesCache t537__CustomAttributeCache_m3343;
extern CustomAttributesCache t537__CustomAttributeCache_m3344;
extern CustomAttributesCache t537__CustomAttributeCache_m3345;
extern CustomAttributesCache t537__CustomAttributeCache_m2930;
extern CustomAttributesCache t537__CustomAttributeCache_m2931;
extern CustomAttributesCache t537__CustomAttributeCache_m3347;
const Il2CppTypeDefinitionMetadata t537_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t537_VT, t537_VTIGM, NULL};
TypeInfo t537_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "RectOffset", "UnityEngine", t537_MIs, t537_PIs, t537_FIs, NULL, &t537_TI, NULL, &EmptyCustomAttributesCache, &t537_0_0_0, &t537_1_0_0, &t537_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t537), sizeof (t537), 0, -1, 0, 0, -1, 1057033, 0, 0, false, false, false, false, false, false, false, true, false, false, 19, 6, 2, 0, 0, 4, 0, 0};
#include "t425.h"
// Metadata Definition UnityEngine.FontStyle
extern TypeInfo t425_TI;
#include "t425MD.h"
static MethodInfo* t425_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t425_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t425_TI, offsetof(t425, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t425_0_0_32854;
FieldInfo t425_f2_FieldInfo = 
{
	"Normal", &t425_0_0_32854, &t425_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t425_0_0_32854;
FieldInfo t425_f3_FieldInfo = 
{
	"Bold", &t425_0_0_32854, &t425_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t425_0_0_32854;
FieldInfo t425_f4_FieldInfo = 
{
	"Italic", &t425_0_0_32854, &t425_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t425_0_0_32854;
FieldInfo t425_f5_FieldInfo = 
{
	"BoldAndItalic", &t425_0_0_32854, &t425_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t425_FIs[] =
{
	&t425_f1_FieldInfo,
	&t425_f2_FieldInfo,
	&t425_f3_FieldInfo,
	&t425_f4_FieldInfo,
	&t425_f5_FieldInfo,
	NULL
};
static const int32_t t425_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t425_f2_DefaultValue = 
{
	&t425_f2_FieldInfo, { (char*)&t425_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t425_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t425_f3_DefaultValue = 
{
	&t425_f3_FieldInfo, { (char*)&t425_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t425_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t425_f4_DefaultValue = 
{
	&t425_f4_FieldInfo, { (char*)&t425_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t425_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t425_f5_DefaultValue = 
{
	&t425_f5_FieldInfo, { (char*)&t425_f5_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t425_FDVs[] = 
{
	&t425_f2_DefaultValue,
	&t425_f3_DefaultValue,
	&t425_f4_DefaultValue,
	&t425_f5_DefaultValue,
	NULL
};
static Il2CppMethodReference t425_VT[] =
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
static bool t425_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t425_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t425_0_0_0;
extern Il2CppType t425_1_0_0;
const Il2CppTypeDefinitionMetadata t425_DM = 
{
	NULL, NULL, NULL, t425_IOs, &t8_0_0_0, t425_VT, t425_VTIGM, NULL};
TypeInfo t425_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "FontStyle", "UnityEngine", t425_MIs, NULL, t425_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t425_0_0_0, &t425_1_0_0, &t425_DM, NULL, NULL, NULL, t425_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t425)+ sizeof (Il2CppObject), sizeof (t425)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 257, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t701.h"
// Metadata Definition UnityEngine.GUIStyle
extern TypeInfo t701_TI;
#include "t701MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3349_MI = 
{
	".ctor", (methodPointerType)&m3349, &t701_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 258, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3350_MI = 
{
	".cctor", (methodPointerType)&m3350, &t701_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 259, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3351_MI = 
{
	"Finalize", (methodPointerType)&m3351, &t701_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 260, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3352;
MethodInfo m3352_MI = 
{
	"Init", (methodPointerType)&m3352, &t701_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t701__CustomAttributeCache_m3352, 129, 4096, 255, 0, false, false, 261, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3353;
MethodInfo m3353_MI = 
{
	"Cleanup", (methodPointerType)&m3353, &t701_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t701__CustomAttributeCache_m3353, 129, 4096, 255, 0, false, false, 262, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3354;
MethodInfo m3354_MI = 
{
	"get_name", (methodPointerType)&m3354, &t701_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &t701__CustomAttributeCache_m3354, 2182, 4096, 255, 0, false, false, 263, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t701_m3355_ParameterInfos[] = 
{
	{"value", 0, 134217907, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3355;
MethodInfo m3355_MI = 
{
	"set_name", (methodPointerType)&m3355, &t701_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t701_m3355_ParameterInfos, &t701__CustomAttributeCache_m3355, 2182, 4096, 255, 1, false, false, 264, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t719_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3356_MI = 
{
	"get_normal", (methodPointerType)&m3356, &t701_TI, &t719_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 265, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t701_m3357_ParameterInfos[] = 
{
	{"idx", 0, 134217908, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3357;
MethodInfo m3357_MI = 
{
	"GetStyleStatePtr", (methodPointerType)&m3357, &t701_TI, &t58_0_0_0, RuntimeInvoker_t58_t125, t701_m3357_ParameterInfos, &t701__CustomAttributeCache_m3357, 129, 4096, 255, 1, false, false, 266, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t537_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3358_MI = 
{
	"get_margin", (methodPointerType)&m3358, &t701_TI, &t537_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 267, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t537_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3359_MI = 
{
	"get_padding", (methodPointerType)&m3359, &t701_TI, &t537_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 268, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t701_m3360_ParameterInfos[] = 
{
	{"idx", 0, 134217909, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t58_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3360;
MethodInfo m3360_MI = 
{
	"GetRectOffsetPtr", (methodPointerType)&m3360, &t701_TI, &t58_0_0_0, RuntimeInvoker_t58_t125, t701_m3360_ParameterInfos, &t701__CustomAttributeCache_m3360, 129, 4096, 255, 1, false, false, 269, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3361;
MethodInfo m3361_MI = 
{
	"get_fixedWidth", (methodPointerType)&m3361, &t701_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t701__CustomAttributeCache_m3361, 2182, 4096, 255, 0, false, false, 270, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3362;
MethodInfo m3362_MI = 
{
	"get_fixedHeight", (methodPointerType)&m3362, &t701_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t701__CustomAttributeCache_m3362, 2182, 4096, 255, 0, false, false, 271, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3363;
MethodInfo m3363_MI = 
{
	"get_stretchWidth", (methodPointerType)&m3363, &t701_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &t701__CustomAttributeCache_m3363, 2182, 4096, 255, 0, false, false, 272, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t701_m3364_ParameterInfos[] = 
{
	{"value", 0, 134217910, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3364;
MethodInfo m3364_MI = 
{
	"set_stretchWidth", (methodPointerType)&m3364, &t701_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t701_m3364_ParameterInfos, &t701__CustomAttributeCache_m3364, 2182, 4096, 255, 1, false, false, 273, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3365;
MethodInfo m3365_MI = 
{
	"get_stretchHeight", (methodPointerType)&m3365, &t701_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &t701__CustomAttributeCache_m3365, 2182, 4096, 255, 0, false, false, 274, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t701_m3366_ParameterInfos[] = 
{
	{"value", 0, 134217911, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3366;
MethodInfo m3366_MI = 
{
	"set_stretchHeight", (methodPointerType)&m3366, &t701_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t701_m3366_ParameterInfos, &t701__CustomAttributeCache_m3366, 2182, 4096, 255, 1, false, false, 275, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
static ParameterInfo t701_m3367_ParameterInfos[] = 
{
	{"target", 0, 134217912, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t58 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3367;
MethodInfo m3367_MI = 
{
	"Internal_GetLineHeight", (methodPointerType)&m3367, &t701_TI, &t123_0_0_0, RuntimeInvoker_t123_t58, t701_m3367_ParameterInfos, &t701__CustomAttributeCache_m3367, 145, 4096, 255, 1, false, false, 276, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3368_MI = 
{
	"get_lineHeight", (methodPointerType)&m3368, &t701_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 277, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t424_0_0_0;
static ParameterInfo t701_m3369_ParameterInfos[] = 
{
	{"font", 0, 134217913, &EmptyCustomAttributesCache, &t424_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3369;
MethodInfo m3369_MI = 
{
	"SetDefaultFont", (methodPointerType)&m3369, &t701_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t701_m3369_ParameterInfos, &t701__CustomAttributeCache_m3369, 147, 4096, 255, 1, false, false, 278, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3370_MI = 
{
	"get_none", (methodPointerType)&m3370, &t701_TI, &t701_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 279, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t441_0_0_0;
extern Il2CppType t591_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t701_m3371_ParameterInfos[] = 
{
	{"position", 0, 134217914, &EmptyCustomAttributesCache, &t441_0_0_0},
	{"content", 1, 134217915, &EmptyCustomAttributesCache, &t591_0_0_0},
	{"cursorStringIndex", 2, 134217916, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t441_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3371_MI = 
{
	"GetCursorPixelPosition", (methodPointerType)&m3371, &t701_TI, &t28_0_0_0, RuntimeInvoker_t28_t441_t9_t125, t701_m3371_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 280, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t441_0_0_0;
extern Il2CppType t591_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t28_1_0_2;
extern Il2CppType t28_1_0_0;
static ParameterInfo t701_m3372_ParameterInfos[] = 
{
	{"target", 0, 134217917, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"position", 1, 134217918, &EmptyCustomAttributesCache, &t441_0_0_0},
	{"content", 2, 134217919, &EmptyCustomAttributesCache, &t591_0_0_0},
	{"cursorStringIndex", 3, 134217920, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"ret", 4, 134217921, &EmptyCustomAttributesCache, &t28_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t58_t441_t9_t125_t949 (MethodInfo* method, void* obj, void** args);
MethodInfo m3372_MI = 
{
	"Internal_GetCursorPixelPosition", (methodPointerType)&m3372, &t701_TI, &t122_0_0_0, RuntimeInvoker_t122_t58_t441_t9_t125_t949, t701_m3372_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 5, false, false, 281, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t441_1_0_0;
extern Il2CppType t591_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t28_1_0_2;
static ParameterInfo t701_m3373_ParameterInfos[] = 
{
	{"target", 0, 134217922, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"position", 1, 134217923, &EmptyCustomAttributesCache, &t441_1_0_0},
	{"content", 2, 134217924, &EmptyCustomAttributesCache, &t591_0_0_0},
	{"cursorStringIndex", 3, 134217925, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"ret", 4, 134217926, &EmptyCustomAttributesCache, &t28_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t58_t947_t9_t125_t949 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3373;
MethodInfo m3373_MI = 
{
	"INTERNAL_CALL_Internal_GetCursorPixelPosition", (methodPointerType)&m3373, &t701_TI, &t122_0_0_0, RuntimeInvoker_t122_t58_t947_t9_t125_t949, t701_m3373_ParameterInfos, &t701__CustomAttributeCache_m3373, 145, 4096, 255, 5, false, false, 282, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t591_0_0_0;
static ParameterInfo t701_m3374_ParameterInfos[] = 
{
	{"content", 0, 134217927, &EmptyCustomAttributesCache, &t591_0_0_0},
};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3374_MI = 
{
	"CalcSize", (methodPointerType)&m3374, &t701_TI, &t28_0_0_0, RuntimeInvoker_t28_t9, t701_m3374_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 283, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t591_0_0_0;
extern Il2CppType t28_1_0_2;
static ParameterInfo t701_m3375_ParameterInfos[] = 
{
	{"target", 0, 134217928, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"content", 1, 134217929, &EmptyCustomAttributesCache, &t591_0_0_0},
	{"ret", 2, 134217930, &EmptyCustomAttributesCache, &t28_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t58_t9_t949 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3375;
MethodInfo m3375_MI = 
{
	"Internal_CalcSize", (methodPointerType)&m3375, &t701_TI, &t122_0_0_0, RuntimeInvoker_t122_t58_t9_t949, t701_m3375_ParameterInfos, &t701__CustomAttributeCache_m3375, 147, 4096, 255, 3, false, false, 284, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t591_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t701_m3376_ParameterInfos[] = 
{
	{"content", 0, 134217931, &EmptyCustomAttributesCache, &t591_0_0_0},
	{"width", 1, 134217932, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t9_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3376_MI = 
{
	"CalcHeight", (methodPointerType)&m3376, &t701_TI, &t123_0_0_0, RuntimeInvoker_t123_t9_t123, t701_m3376_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 285, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
extern Il2CppType t591_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t701_m3377_ParameterInfos[] = 
{
	{"target", 0, 134217933, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"content", 1, 134217934, &EmptyCustomAttributesCache, &t591_0_0_0},
	{"width", 2, 134217935, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t58_t9_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t701__CustomAttributeCache_m3377;
MethodInfo m3377_MI = 
{
	"Internal_CalcHeight", (methodPointerType)&m3377, &t701_TI, &t123_0_0_0, RuntimeInvoker_t123_t58_t9_t123, t701_m3377_ParameterInfos, &t701__CustomAttributeCache_m3377, 145, 4096, 255, 3, false, false, 286, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3378_MI = 
{
	"ToString", (methodPointerType)&m3378, &t701_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 287, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t701_MIs[] =
{
	&m3349_MI,
	&m3350_MI,
	&m3351_MI,
	&m3352_MI,
	&m3353_MI,
	&m3354_MI,
	&m3355_MI,
	&m3356_MI,
	&m3357_MI,
	&m3358_MI,
	&m3359_MI,
	&m3360_MI,
	&m3361_MI,
	&m3362_MI,
	&m3363_MI,
	&m3364_MI,
	&m3365_MI,
	&m3366_MI,
	&m3367_MI,
	&m3368_MI,
	&m3369_MI,
	&m3370_MI,
	&m3371_MI,
	&m3372_MI,
	&m3373_MI,
	&m3374_MI,
	&m3375_MI,
	&m3376_MI,
	&m3377_MI,
	&m3378_MI,
	NULL
};
extern Il2CppType t58_0_0_131;
FieldInfo t701_f0_FieldInfo = 
{
	"m_Ptr", &t58_0_0_131, &t701_TI, offsetof(t701, f0), &EmptyCustomAttributesCache};
extern Il2CppType t719_0_0_129;
FieldInfo t701_f1_FieldInfo = 
{
	"m_Normal", &t719_0_0_129, &t701_TI, offsetof(t701, f1), &EmptyCustomAttributesCache};
extern Il2CppType t719_0_0_129;
FieldInfo t701_f2_FieldInfo = 
{
	"m_Hover", &t719_0_0_129, &t701_TI, offsetof(t701, f2), &EmptyCustomAttributesCache};
extern Il2CppType t719_0_0_129;
FieldInfo t701_f3_FieldInfo = 
{
	"m_Active", &t719_0_0_129, &t701_TI, offsetof(t701, f3), &EmptyCustomAttributesCache};
extern Il2CppType t719_0_0_129;
FieldInfo t701_f4_FieldInfo = 
{
	"m_Focused", &t719_0_0_129, &t701_TI, offsetof(t701, f4), &EmptyCustomAttributesCache};
extern Il2CppType t719_0_0_129;
FieldInfo t701_f5_FieldInfo = 
{
	"m_OnNormal", &t719_0_0_129, &t701_TI, offsetof(t701, f5), &EmptyCustomAttributesCache};
extern Il2CppType t719_0_0_129;
FieldInfo t701_f6_FieldInfo = 
{
	"m_OnHover", &t719_0_0_129, &t701_TI, offsetof(t701, f6), &EmptyCustomAttributesCache};
extern Il2CppType t719_0_0_129;
FieldInfo t701_f7_FieldInfo = 
{
	"m_OnActive", &t719_0_0_129, &t701_TI, offsetof(t701, f7), &EmptyCustomAttributesCache};
extern Il2CppType t719_0_0_129;
FieldInfo t701_f8_FieldInfo = 
{
	"m_OnFocused", &t719_0_0_129, &t701_TI, offsetof(t701, f8), &EmptyCustomAttributesCache};
extern Il2CppType t537_0_0_129;
FieldInfo t701_f9_FieldInfo = 
{
	"m_Border", &t537_0_0_129, &t701_TI, offsetof(t701, f9), &EmptyCustomAttributesCache};
extern Il2CppType t537_0_0_129;
FieldInfo t701_f10_FieldInfo = 
{
	"m_Padding", &t537_0_0_129, &t701_TI, offsetof(t701, f10), &EmptyCustomAttributesCache};
extern Il2CppType t537_0_0_129;
FieldInfo t701_f11_FieldInfo = 
{
	"m_Margin", &t537_0_0_129, &t701_TI, offsetof(t701, f11), &EmptyCustomAttributesCache};
extern Il2CppType t537_0_0_129;
FieldInfo t701_f12_FieldInfo = 
{
	"m_Overflow", &t537_0_0_129, &t701_TI, offsetof(t701, f12), &EmptyCustomAttributesCache};
extern Il2CppType t424_0_0_129;
FieldInfo t701_f13_FieldInfo = 
{
	"m_FontInternal", &t424_0_0_129, &t701_TI, offsetof(t701, f13), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_19;
FieldInfo t701_f14_FieldInfo = 
{
	"showKeyboardFocus", &t124_0_0_19, &t701_TI, offsetof(t701_SFs, f14), &EmptyCustomAttributesCache};
extern Il2CppType t701_0_0_17;
FieldInfo t701_f15_FieldInfo = 
{
	"s_None", &t701_0_0_17, &t701_TI, offsetof(t701_SFs, f15), &EmptyCustomAttributesCache};
static FieldInfo* t701_FIs[] =
{
	&t701_f0_FieldInfo,
	&t701_f1_FieldInfo,
	&t701_f2_FieldInfo,
	&t701_f3_FieldInfo,
	&t701_f4_FieldInfo,
	&t701_f5_FieldInfo,
	&t701_f6_FieldInfo,
	&t701_f7_FieldInfo,
	&t701_f8_FieldInfo,
	&t701_f9_FieldInfo,
	&t701_f10_FieldInfo,
	&t701_f11_FieldInfo,
	&t701_f12_FieldInfo,
	&t701_f13_FieldInfo,
	&t701_f14_FieldInfo,
	&t701_f15_FieldInfo,
	NULL
};
extern MethodInfo m3354_MI;
extern MethodInfo m3355_MI;
static PropertyInfo t701____name_PropertyInfo = 
{
	&t701_TI, "name", &m3354_MI, &m3355_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3356_MI;
static PropertyInfo t701____normal_PropertyInfo = 
{
	&t701_TI, "normal", &m3356_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3358_MI;
static PropertyInfo t701____margin_PropertyInfo = 
{
	&t701_TI, "margin", &m3358_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3359_MI;
static PropertyInfo t701____padding_PropertyInfo = 
{
	&t701_TI, "padding", &m3359_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3361_MI;
static PropertyInfo t701____fixedWidth_PropertyInfo = 
{
	&t701_TI, "fixedWidth", &m3361_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3362_MI;
static PropertyInfo t701____fixedHeight_PropertyInfo = 
{
	&t701_TI, "fixedHeight", &m3362_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3363_MI;
extern MethodInfo m3364_MI;
static PropertyInfo t701____stretchWidth_PropertyInfo = 
{
	&t701_TI, "stretchWidth", &m3363_MI, &m3364_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3365_MI;
extern MethodInfo m3366_MI;
static PropertyInfo t701____stretchHeight_PropertyInfo = 
{
	&t701_TI, "stretchHeight", &m3365_MI, &m3366_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3368_MI;
static PropertyInfo t701____lineHeight_PropertyInfo = 
{
	&t701_TI, "lineHeight", &m3368_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3370_MI;
static PropertyInfo t701____none_PropertyInfo = 
{
	&t701_TI, "none", &m3370_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t701_PIs[] =
{
	&t701____name_PropertyInfo,
	&t701____normal_PropertyInfo,
	&t701____margin_PropertyInfo,
	&t701____padding_PropertyInfo,
	&t701____fixedWidth_PropertyInfo,
	&t701____fixedHeight_PropertyInfo,
	&t701____stretchWidth_PropertyInfo,
	&t701____stretchHeight_PropertyInfo,
	&t701____lineHeight_PropertyInfo,
	&t701____none_PropertyInfo,
	NULL
};
extern MethodInfo m3351_MI;
extern MethodInfo m3378_MI;
static Il2CppMethodReference t701_VT[] =
{
	&m671_MI,
	&m3351_MI,
	&m672_MI,
	&m3378_MI,
};
static bool t701_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t701_CustomAttributesCacheGenerator_m3352(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t701_CustomAttributesCacheGenerator_m3353(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t701_CustomAttributesCacheGenerator_m3354(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t701_CustomAttributesCacheGenerator_m3355(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t701_CustomAttributesCacheGenerator_m3357(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t701_CustomAttributesCacheGenerator_m3360(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t701_CustomAttributesCacheGenerator_m3361(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t701_CustomAttributesCacheGenerator_m3362(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t701_CustomAttributesCacheGenerator_m3363(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t701_CustomAttributesCacheGenerator_m3364(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t701_CustomAttributesCacheGenerator_m3365(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t701_CustomAttributesCacheGenerator_m3366(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t701_CustomAttributesCacheGenerator_m3367(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t701_CustomAttributesCacheGenerator_m3369(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t701_CustomAttributesCacheGenerator_m3373(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t701_CustomAttributesCacheGenerator_m3375(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t701_CustomAttributesCacheGenerator_m3377(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t701__CustomAttributeCache_m3352 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3352
};
CustomAttributesCache t701__CustomAttributeCache_m3353 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3353
};
CustomAttributesCache t701__CustomAttributeCache_m3354 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3354
};
CustomAttributesCache t701__CustomAttributeCache_m3355 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3355
};
CustomAttributesCache t701__CustomAttributeCache_m3357 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3357
};
CustomAttributesCache t701__CustomAttributeCache_m3360 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3360
};
CustomAttributesCache t701__CustomAttributeCache_m3361 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3361
};
CustomAttributesCache t701__CustomAttributeCache_m3362 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3362
};
CustomAttributesCache t701__CustomAttributeCache_m3363 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3363
};
CustomAttributesCache t701__CustomAttributeCache_m3364 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3364
};
CustomAttributesCache t701__CustomAttributeCache_m3365 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3365
};
CustomAttributesCache t701__CustomAttributeCache_m3366 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3366
};
CustomAttributesCache t701__CustomAttributeCache_m3367 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3367
};
CustomAttributesCache t701__CustomAttributeCache_m3369 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3369
};
CustomAttributesCache t701__CustomAttributeCache_m3373 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3373
};
CustomAttributesCache t701__CustomAttributeCache_m3375 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3375
};
CustomAttributesCache t701__CustomAttributeCache_m3377 = {
1,
NULL,
&t701_CustomAttributesCacheGenerator_m3377
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t701_1_0_0;
struct t701;
extern CustomAttributesCache t701__CustomAttributeCache_m3352;
extern CustomAttributesCache t701__CustomAttributeCache_m3353;
extern CustomAttributesCache t701__CustomAttributeCache_m3354;
extern CustomAttributesCache t701__CustomAttributeCache_m3355;
extern CustomAttributesCache t701__CustomAttributeCache_m3357;
extern CustomAttributesCache t701__CustomAttributeCache_m3360;
extern CustomAttributesCache t701__CustomAttributeCache_m3361;
extern CustomAttributesCache t701__CustomAttributeCache_m3362;
extern CustomAttributesCache t701__CustomAttributeCache_m3363;
extern CustomAttributesCache t701__CustomAttributeCache_m3364;
extern CustomAttributesCache t701__CustomAttributeCache_m3365;
extern CustomAttributesCache t701__CustomAttributeCache_m3366;
extern CustomAttributesCache t701__CustomAttributeCache_m3367;
extern CustomAttributesCache t701__CustomAttributeCache_m3369;
extern CustomAttributesCache t701__CustomAttributeCache_m3373;
extern CustomAttributesCache t701__CustomAttributeCache_m3375;
extern CustomAttributesCache t701__CustomAttributeCache_m3377;
const Il2CppTypeDefinitionMetadata t701_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t701_VT, t701_VTIGM, NULL};
TypeInfo t701_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GUIStyle", "UnityEngine", t701_MIs, t701_PIs, t701_FIs, NULL, &t701_TI, NULL, &EmptyCustomAttributesCache, &t701_0_0_0, &t701_1_0_0, &t701_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t701), sizeof (t701), 0, -1, sizeof(t701_SFs), 0, -1, 1057033, 0, 0, false, false, false, false, false, false, false, true, true, false, 30, 10, 16, 0, 0, 4, 0, 0};
#include "t479.h"
// Metadata Definition UnityEngine.TouchScreenKeyboardType
extern TypeInfo t479_TI;
#include "t479MD.h"
static MethodInfo* t479_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t479_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t479_TI, offsetof(t479, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t479_0_0_32854;
FieldInfo t479_f2_FieldInfo = 
{
	"Default", &t479_0_0_32854, &t479_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t479_0_0_32854;
FieldInfo t479_f3_FieldInfo = 
{
	"ASCIICapable", &t479_0_0_32854, &t479_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t479_0_0_32854;
FieldInfo t479_f4_FieldInfo = 
{
	"NumbersAndPunctuation", &t479_0_0_32854, &t479_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t479_0_0_32854;
FieldInfo t479_f5_FieldInfo = 
{
	"URL", &t479_0_0_32854, &t479_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t479_0_0_32854;
FieldInfo t479_f6_FieldInfo = 
{
	"NumberPad", &t479_0_0_32854, &t479_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t479_0_0_32854;
FieldInfo t479_f7_FieldInfo = 
{
	"PhonePad", &t479_0_0_32854, &t479_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t479_0_0_32854;
FieldInfo t479_f8_FieldInfo = 
{
	"NamePhonePad", &t479_0_0_32854, &t479_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t479_0_0_32854;
FieldInfo t479_f9_FieldInfo = 
{
	"EmailAddress", &t479_0_0_32854, &t479_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t479_FIs[] =
{
	&t479_f1_FieldInfo,
	&t479_f2_FieldInfo,
	&t479_f3_FieldInfo,
	&t479_f4_FieldInfo,
	&t479_f5_FieldInfo,
	&t479_f6_FieldInfo,
	&t479_f7_FieldInfo,
	&t479_f8_FieldInfo,
	&t479_f9_FieldInfo,
	NULL
};
static const int32_t t479_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t479_f2_DefaultValue = 
{
	&t479_f2_FieldInfo, { (char*)&t479_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t479_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t479_f3_DefaultValue = 
{
	&t479_f3_FieldInfo, { (char*)&t479_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t479_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t479_f4_DefaultValue = 
{
	&t479_f4_FieldInfo, { (char*)&t479_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t479_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t479_f5_DefaultValue = 
{
	&t479_f5_FieldInfo, { (char*)&t479_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t479_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t479_f6_DefaultValue = 
{
	&t479_f6_FieldInfo, { (char*)&t479_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t479_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t479_f7_DefaultValue = 
{
	&t479_f7_FieldInfo, { (char*)&t479_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t479_f8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t479_f8_DefaultValue = 
{
	&t479_f8_FieldInfo, { (char*)&t479_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t479_f9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t479_f9_DefaultValue = 
{
	&t479_f9_FieldInfo, { (char*)&t479_f9_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t479_FDVs[] = 
{
	&t479_f2_DefaultValue,
	&t479_f3_DefaultValue,
	&t479_f4_DefaultValue,
	&t479_f5_DefaultValue,
	&t479_f6_DefaultValue,
	&t479_f7_DefaultValue,
	&t479_f8_DefaultValue,
	&t479_f9_DefaultValue,
	NULL
};
static Il2CppMethodReference t479_VT[] =
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
static bool t479_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t479_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t479_0_0_0;
extern Il2CppType t479_1_0_0;
const Il2CppTypeDefinitionMetadata t479_DM = 
{
	NULL, NULL, NULL, t479_IOs, &t8_0_0_0, t479_VT, t479_VTIGM, NULL};
TypeInfo t479_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "TouchScreenKeyboardType", "UnityEngine", t479_MIs, NULL, t479_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t479_0_0_0, &t479_1_0_0, &t479_DM, NULL, NULL, NULL, t479_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t479)+ sizeof (Il2CppObject), sizeof (t479)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 257, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 9, 0, 0, 23, 0, 3};
#include "t475.h"
// Metadata Definition UnityEngine.TouchScreenKeyboard
extern TypeInfo t475_TI;
#include "t475MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t479_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t475_m2797_ParameterInfos[] = 
{
	{"text", 0, 134217936, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"keyboardType", 1, 134217937, &EmptyCustomAttributesCache, &t479_0_0_0},
	{"autocorrection", 2, 134217938, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"multiline", 3, 134217939, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"secure", 4, 134217940, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t475_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t186_t186_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t475__CustomAttributeCache_m2797;
MethodInfo m2797_MI = 
{
	"Open", (methodPointerType)&m2797, &t475_TI, &t475_0_0_0, RuntimeInvoker_t9_t9_t125_t186_t186_t186, t475_m2797_ParameterInfos, &t475__CustomAttributeCache_m2797, 150, 0, 255, 5, false, false, 288, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t479_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t475_m2798_ParameterInfos[] = 
{
	{"text", 0, 134217941, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"keyboardType", 1, 134217942, &EmptyCustomAttributesCache, &t479_0_0_0},
	{"autocorrection", 2, 134217943, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"multiline", 3, 134217944, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t475_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t475__CustomAttributeCache_m2798;
MethodInfo m2798_MI = 
{
	"Open", (methodPointerType)&m2798, &t475_TI, &t475_0_0_0, RuntimeInvoker_t9_t9_t125_t186_t186, t475_m2798_ParameterInfos, &t475__CustomAttributeCache_m2798, 150, 0, 255, 4, false, false, 289, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t479_0_0_0;
extern CustomAttributesCache t475__CustomAttributeCache_t475_m3379_Arg1_ParameterInfo;
extern Il2CppType t124_0_0_0;
extern CustomAttributesCache t475__CustomAttributeCache_t475_m3379_Arg2_ParameterInfo;
extern Il2CppType t124_0_0_0;
extern CustomAttributesCache t475__CustomAttributeCache_t475_m3379_Arg3_ParameterInfo;
extern Il2CppType t124_0_0_0;
extern CustomAttributesCache t475__CustomAttributeCache_t475_m3379_Arg4_ParameterInfo;
extern Il2CppType t124_0_0_0;
extern CustomAttributesCache t475__CustomAttributeCache_t475_m3379_Arg5_ParameterInfo;
extern Il2CppType t2_0_0_0;
extern CustomAttributesCache t475__CustomAttributeCache_t475_m3379_Arg6_ParameterInfo;
static ParameterInfo t475_m3379_ParameterInfos[] = 
{
	{"text", 0, 134217945, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"keyboardType", 1, 134217946, &t475__CustomAttributeCache_t475_m3379_Arg1_ParameterInfo, &t479_0_0_0},
	{"autocorrection", 2, 134217947, &t475__CustomAttributeCache_t475_m3379_Arg2_ParameterInfo, &t124_0_0_0},
	{"multiline", 3, 134217948, &t475__CustomAttributeCache_t475_m3379_Arg3_ParameterInfo, &t124_0_0_0},
	{"secure", 4, 134217949, &t475__CustomAttributeCache_t475_m3379_Arg4_ParameterInfo, &t124_0_0_0},
	{"alert", 5, 134217950, &t475__CustomAttributeCache_t475_m3379_Arg5_ParameterInfo, &t124_0_0_0},
	{"textPlaceholder", 6, 134217951, &t475__CustomAttributeCache_t475_m3379_Arg6_ParameterInfo, &t2_0_0_0},
};
extern Il2CppType t475_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t186_t186_t186_t186_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3379_MI = 
{
	"Open", (methodPointerType)&m3379, &t475_TI, &t475_0_0_0, RuntimeInvoker_t9_t9_t125_t186_t186_t186_t186_t9, t475_m3379_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 7, false, false, 290, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m2721_MI = 
{
	"get_text", (methodPointerType)&m2721, &t475_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 291, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t475_m2722_ParameterInfos[] = 
{
	{"value", 0, 134217952, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m2722_MI = 
{
	"set_text", (methodPointerType)&m2722, &t475_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t475_m2722_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 292, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t475_m2796_ParameterInfos[] = 
{
	{"value", 0, 134217953, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m2796_MI = 
{
	"set_hideInput", (methodPointerType)&m2796, &t475_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t475_m2796_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 1, false, false, 293, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m2720_MI = 
{
	"get_active", (methodPointerType)&m2720, &t475_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 294, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t475_m2795_ParameterInfos[] = 
{
	{"value", 0, 134217954, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m2795_MI = 
{
	"set_active", (methodPointerType)&m2795, &t475_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t475_m2795_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 295, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m2740_MI = 
{
	"get_done", (methodPointerType)&m2740, &t475_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 296, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m2736_MI = 
{
	"get_wasCanceled", (methodPointerType)&m2736, &t475_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 297, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m2735_MI = 
{
	"get_isSupported", (methodPointerType)&m2735, &t475_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 298, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t475_MIs[] =
{
	&m2797_MI,
	&m2798_MI,
	&m3379_MI,
	&m2721_MI,
	&m2722_MI,
	&m2796_MI,
	&m2720_MI,
	&m2795_MI,
	&m2740_MI,
	&m2736_MI,
	&m2735_MI,
	NULL
};
extern MethodInfo m2721_MI;
extern MethodInfo m2722_MI;
static PropertyInfo t475____text_PropertyInfo = 
{
	&t475_TI, "text", &m2721_MI, &m2722_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2796_MI;
static PropertyInfo t475____hideInput_PropertyInfo = 
{
	&t475_TI, "hideInput", NULL, &m2796_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2720_MI;
extern MethodInfo m2795_MI;
static PropertyInfo t475____active_PropertyInfo = 
{
	&t475_TI, "active", &m2720_MI, &m2795_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2740_MI;
static PropertyInfo t475____done_PropertyInfo = 
{
	&t475_TI, "done", &m2740_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2736_MI;
static PropertyInfo t475____wasCanceled_PropertyInfo = 
{
	&t475_TI, "wasCanceled", &m2736_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2735_MI;
static PropertyInfo t475____isSupported_PropertyInfo = 
{
	&t475_TI, "isSupported", &m2735_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t475_PIs[] =
{
	&t475____text_PropertyInfo,
	&t475____hideInput_PropertyInfo,
	&t475____active_PropertyInfo,
	&t475____done_PropertyInfo,
	&t475____wasCanceled_PropertyInfo,
	&t475____isSupported_PropertyInfo,
	NULL
};
static Il2CppMethodReference t475_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t475_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern TypeInfo t874_TI;
#include "t874.h"
#include "t874MD.h"
extern MethodInfo m4220_MI;
void t475_CustomAttributesCacheGenerator_m2797(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t874 * tmp;
		tmp = (t874 *)il2cpp_codegen_object_new (&t874_TI);
		m4220(tmp, &m4220_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t475_CustomAttributesCacheGenerator_m2798(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t874 * tmp;
		tmp = (t874 *)il2cpp_codegen_object_new (&t874_TI);
		m4220(tmp, &m4220_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t873_TI;
#include "t873.h"
#include "t873MD.h"
extern MethodInfo m4216_MI;
void t475_CustomAttributesCacheGenerator_t475_m3379_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t873 * tmp;
		tmp = (t873 *)il2cpp_codegen_object_new (&t873_TI);
		m4216(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), &m4216_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t475_CustomAttributesCacheGenerator_t475_m3379_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t873 * tmp;
		tmp = (t873 *)il2cpp_codegen_object_new (&t873_TI);
		m4216(tmp, il2cpp_codegen_string_new_wrapper("true"), &m4216_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t475_CustomAttributesCacheGenerator_t475_m3379_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t873 * tmp;
		tmp = (t873 *)il2cpp_codegen_object_new (&t873_TI);
		m4216(tmp, il2cpp_codegen_string_new_wrapper("false"), &m4216_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t475_CustomAttributesCacheGenerator_t475_m3379_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t873 * tmp;
		tmp = (t873 *)il2cpp_codegen_object_new (&t873_TI);
		m4216(tmp, il2cpp_codegen_string_new_wrapper("false"), &m4216_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t475_CustomAttributesCacheGenerator_t475_m3379_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t873 * tmp;
		tmp = (t873 *)il2cpp_codegen_object_new (&t873_TI);
		m4216(tmp, il2cpp_codegen_string_new_wrapper("false"), &m4216_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t475_CustomAttributesCacheGenerator_t475_m3379_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t873 * tmp;
		tmp = (t873 *)il2cpp_codegen_object_new (&t873_TI);
		m4216(tmp, il2cpp_codegen_string_new_wrapper("\"\""), &m4216_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t475__CustomAttributeCache_m2797 = {
1,
NULL,
&t475_CustomAttributesCacheGenerator_m2797
};
CustomAttributesCache t475__CustomAttributeCache_m2798 = {
1,
NULL,
&t475_CustomAttributesCacheGenerator_m2798
};
CustomAttributesCache t475__CustomAttributeCache_t475_m3379_Arg1_ParameterInfo = {
1,
NULL,
&t475_CustomAttributesCacheGenerator_t475_m3379_Arg1_ParameterInfo
};
CustomAttributesCache t475__CustomAttributeCache_t475_m3379_Arg2_ParameterInfo = {
1,
NULL,
&t475_CustomAttributesCacheGenerator_t475_m3379_Arg2_ParameterInfo
};
CustomAttributesCache t475__CustomAttributeCache_t475_m3379_Arg3_ParameterInfo = {
1,
NULL,
&t475_CustomAttributesCacheGenerator_t475_m3379_Arg3_ParameterInfo
};
CustomAttributesCache t475__CustomAttributeCache_t475_m3379_Arg4_ParameterInfo = {
1,
NULL,
&t475_CustomAttributesCacheGenerator_t475_m3379_Arg4_ParameterInfo
};
CustomAttributesCache t475__CustomAttributeCache_t475_m3379_Arg5_ParameterInfo = {
1,
NULL,
&t475_CustomAttributesCacheGenerator_t475_m3379_Arg5_ParameterInfo
};
CustomAttributesCache t475__CustomAttributeCache_t475_m3379_Arg6_ParameterInfo = {
1,
NULL,
&t475_CustomAttributesCacheGenerator_t475_m3379_Arg6_ParameterInfo
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t475_0_0_0;
extern Il2CppType t475_1_0_0;
struct t475;
extern CustomAttributesCache t475__CustomAttributeCache_m2797;
extern CustomAttributesCache t475__CustomAttributeCache_m2798;
const Il2CppTypeDefinitionMetadata t475_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t475_VT, t475_VTIGM, NULL};
TypeInfo t475_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "TouchScreenKeyboard", "UnityEngine", t475_MIs, t475_PIs, NULL, NULL, &t475_TI, NULL, &EmptyCustomAttributesCache, &t475_0_0_0, &t475_1_0_0, &t475_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t475), sizeof (t475), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 11, 6, 0, 0, 0, 4, 0, 0};
#include "t478.h"
// Metadata Definition UnityEngine.Event
extern TypeInfo t478_TI;
#include "t478MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m2732_MI = 
{
	".ctor", (methodPointerType)&m2732, &t478_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 299, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t478__CustomAttributeCache_m3380;
MethodInfo m3380_MI = 
{
	"Init", (methodPointerType)&m3380, &t478_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t478__CustomAttributeCache_m3380, 129, 4096, 255, 0, false, false, 300, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3381_MI = 
{
	"Finalize", (methodPointerType)&m3381, &t478_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 301, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t478__CustomAttributeCache_m3382;
MethodInfo m3382_MI = 
{
	"Cleanup", (methodPointerType)&m3382, &t478_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t478__CustomAttributeCache_m3382, 129, 4096, 255, 0, false, false, 302, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t596_0_0_0;
extern void* RuntimeInvoker_t596 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t478__CustomAttributeCache_m2755;
MethodInfo m2755_MI = 
{
	"get_rawType", (methodPointerType)&m2755, &t478_TI, &t596_0_0_0, RuntimeInvoker_t596, NULL, &t478__CustomAttributeCache_m2755, 2182, 4096, 255, 0, false, false, 303, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t596_0_0_0;
extern void* RuntimeInvoker_t596 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t478__CustomAttributeCache_m3383;
MethodInfo m3383_MI = 
{
	"get_type", (methodPointerType)&m3383, &t478_TI, &t596_0_0_0, RuntimeInvoker_t596, NULL, &t478__CustomAttributeCache_m3383, 2182, 4096, 255, 0, false, false, 304, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m3384_MI = 
{
	"get_mousePosition", (methodPointerType)&m3384, &t478_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 305, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_1_0_2;
static ParameterInfo t478_m3385_ParameterInfos[] = 
{
	{"value", 0, 134217955, &EmptyCustomAttributesCache, &t28_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t949 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t478__CustomAttributeCache_m3385;
MethodInfo m3385_MI = 
{
	"Internal_GetMousePosition", (methodPointerType)&m3385, &t478_TI, &t122_0_0_0, RuntimeInvoker_t122_t949, t478_m3385_ParameterInfos, &t478__CustomAttributeCache_m3385, 129, 4096, 255, 1, false, false, 306, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t595_0_0_0;
extern void* RuntimeInvoker_t595 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t478__CustomAttributeCache_m2751;
MethodInfo m2751_MI = 
{
	"get_modifiers", (methodPointerType)&m2751, &t478_TI, &t595_0_0_0, RuntimeInvoker_t595, NULL, &t478__CustomAttributeCache_m2751, 2182, 4096, 255, 0, false, false, 307, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t478__CustomAttributeCache_m2753;
MethodInfo m2753_MI = 
{
	"get_character", (methodPointerType)&m2753, &t478_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &t478__CustomAttributeCache_m2753, 2182, 4096, 255, 0, false, false, 308, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t478__CustomAttributeCache_m3386;
MethodInfo m3386_MI = 
{
	"get_commandName", (methodPointerType)&m3386, &t478_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &t478__CustomAttributeCache_m3386, 2182, 4096, 255, 0, false, false, 309, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t294 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t478__CustomAttributeCache_m2752;
MethodInfo m2752_MI = 
{
	"get_keyCode", (methodPointerType)&m2752, &t478_TI, &t294_0_0_0, RuntimeInvoker_t294, NULL, &t478__CustomAttributeCache_m2752, 2182, 4096, 255, 0, false, false, 310, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t478_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3387_MI = 
{
	"get_current", (methodPointerType)&m3387, &t478_TI, &t478_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 311, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t58_0_0_0;
static ParameterInfo t478_m3388_ParameterInfos[] = 
{
	{"ptr", 0, 134217956, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t58 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t478__CustomAttributeCache_m3388;
MethodInfo m3388_MI = 
{
	"Internal_SetNativeEvent", (methodPointerType)&m3388, &t478_TI, &t122_0_0_0, RuntimeInvoker_t122_t58, t478_m3388_ParameterInfos, &t478__CustomAttributeCache_m3388, 145, 4096, 255, 1, false, false, 312, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3389_MI = 
{
	"Internal_MakeMasterEventCurrent", (methodPointerType)&m3389, &t478_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 145, 0, 255, 0, false, false, 313, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t478_0_0_0;
extern Il2CppType t478_0_0_0;
static ParameterInfo t478_m2756_ParameterInfos[] = 
{
	{"outEvent", 0, 134217957, &EmptyCustomAttributesCache, &t478_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t478__CustomAttributeCache_m2756;
MethodInfo m2756_MI = 
{
	"PopEvent", (methodPointerType)&m2756, &t478_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t478_m2756_ParameterInfos, &t478__CustomAttributeCache_m2756, 150, 4096, 255, 1, false, false, 314, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m3390_MI = 
{
	"get_isKey", (methodPointerType)&m3390, &t478_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 315, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m3391_MI = 
{
	"get_isMouse", (methodPointerType)&m3391, &t478_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 316, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3392_MI = 
{
	"GetHashCode", (methodPointerType)&m3392, &t478_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 317, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t478_m3393_ParameterInfos[] = 
{
	{"obj", 0, 134217958, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3393_MI = 
{
	"Equals", (methodPointerType)&m3393, &t478_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t478_m3393_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 318, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3394_MI = 
{
	"ToString", (methodPointerType)&m3394, &t478_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 319, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t478_MIs[] =
{
	&m2732_MI,
	&m3380_MI,
	&m3381_MI,
	&m3382_MI,
	&m2755_MI,
	&m3383_MI,
	&m3384_MI,
	&m3385_MI,
	&m2751_MI,
	&m2753_MI,
	&m3386_MI,
	&m2752_MI,
	&m3387_MI,
	&m3388_MI,
	&m3389_MI,
	&m2756_MI,
	&m3390_MI,
	&m3391_MI,
	&m3392_MI,
	&m3393_MI,
	&m3394_MI,
	NULL
};
extern Il2CppType t58_0_0_131;
FieldInfo t478_f0_FieldInfo = 
{
	"m_Ptr", &t58_0_0_131, &t478_TI, offsetof(t478, f0), &EmptyCustomAttributesCache};
extern Il2CppType t478_0_0_17;
FieldInfo t478_f1_FieldInfo = 
{
	"s_Current", &t478_0_0_17, &t478_TI, offsetof(t478_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t478_0_0_17;
FieldInfo t478_f2_FieldInfo = 
{
	"s_MasterEvent", &t478_0_0_17, &t478_TI, offsetof(t478_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t720_0_0_17;
extern CustomAttributesCache t478__CustomAttributeCache_U3CU3Ef__switch$map0;
FieldInfo t478_f3_FieldInfo = 
{
	"<>f__switch$map0", &t720_0_0_17, &t478_TI, offsetof(t478_SFs, f3), &t478__CustomAttributeCache_U3CU3Ef__switch$map0};
static FieldInfo* t478_FIs[] =
{
	&t478_f0_FieldInfo,
	&t478_f1_FieldInfo,
	&t478_f2_FieldInfo,
	&t478_f3_FieldInfo,
	NULL
};
extern MethodInfo m2755_MI;
static PropertyInfo t478____rawType_PropertyInfo = 
{
	&t478_TI, "rawType", &m2755_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3383_MI;
static PropertyInfo t478____type_PropertyInfo = 
{
	&t478_TI, "type", &m3383_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3384_MI;
static PropertyInfo t478____mousePosition_PropertyInfo = 
{
	&t478_TI, "mousePosition", &m3384_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2751_MI;
static PropertyInfo t478____modifiers_PropertyInfo = 
{
	&t478_TI, "modifiers", &m2751_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2753_MI;
static PropertyInfo t478____character_PropertyInfo = 
{
	&t478_TI, "character", &m2753_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3386_MI;
static PropertyInfo t478____commandName_PropertyInfo = 
{
	&t478_TI, "commandName", &m3386_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2752_MI;
static PropertyInfo t478____keyCode_PropertyInfo = 
{
	&t478_TI, "keyCode", &m2752_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3387_MI;
static PropertyInfo t478____current_PropertyInfo = 
{
	&t478_TI, "current", &m3387_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3390_MI;
static PropertyInfo t478____isKey_PropertyInfo = 
{
	&t478_TI, "isKey", &m3390_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3391_MI;
static PropertyInfo t478____isMouse_PropertyInfo = 
{
	&t478_TI, "isMouse", &m3391_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t478_PIs[] =
{
	&t478____rawType_PropertyInfo,
	&t478____type_PropertyInfo,
	&t478____mousePosition_PropertyInfo,
	&t478____modifiers_PropertyInfo,
	&t478____character_PropertyInfo,
	&t478____commandName_PropertyInfo,
	&t478____keyCode_PropertyInfo,
	&t478____current_PropertyInfo,
	&t478____isKey_PropertyInfo,
	&t478____isMouse_PropertyInfo,
	NULL
};
extern MethodInfo m3393_MI;
extern MethodInfo m3381_MI;
extern MethodInfo m3392_MI;
extern MethodInfo m3394_MI;
static Il2CppMethodReference t478_VT[] =
{
	&m3393_MI,
	&m3381_MI,
	&m3392_MI,
	&m3394_MI,
};
static bool t478_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t478_CustomAttributesCacheGenerator_U3CU3Ef__switch$map0(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t478_CustomAttributesCacheGenerator_m3380(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t478_CustomAttributesCacheGenerator_m3382(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t478_CustomAttributesCacheGenerator_m2755(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t478_CustomAttributesCacheGenerator_m3383(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t478_CustomAttributesCacheGenerator_m3385(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t478_CustomAttributesCacheGenerator_m2751(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t478_CustomAttributesCacheGenerator_m2753(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t478_CustomAttributesCacheGenerator_m3386(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t478_CustomAttributesCacheGenerator_m2752(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t478_CustomAttributesCacheGenerator_m3388(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t478_CustomAttributesCacheGenerator_m2756(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t478__CustomAttributeCache_U3CU3Ef__switch$map0 = {
1,
NULL,
&t478_CustomAttributesCacheGenerator_U3CU3Ef__switch$map0
};
CustomAttributesCache t478__CustomAttributeCache_m3380 = {
1,
NULL,
&t478_CustomAttributesCacheGenerator_m3380
};
CustomAttributesCache t478__CustomAttributeCache_m3382 = {
1,
NULL,
&t478_CustomAttributesCacheGenerator_m3382
};
CustomAttributesCache t478__CustomAttributeCache_m2755 = {
1,
NULL,
&t478_CustomAttributesCacheGenerator_m2755
};
CustomAttributesCache t478__CustomAttributeCache_m3383 = {
1,
NULL,
&t478_CustomAttributesCacheGenerator_m3383
};
CustomAttributesCache t478__CustomAttributeCache_m3385 = {
1,
NULL,
&t478_CustomAttributesCacheGenerator_m3385
};
CustomAttributesCache t478__CustomAttributeCache_m2751 = {
1,
NULL,
&t478_CustomAttributesCacheGenerator_m2751
};
CustomAttributesCache t478__CustomAttributeCache_m2753 = {
1,
NULL,
&t478_CustomAttributesCacheGenerator_m2753
};
CustomAttributesCache t478__CustomAttributeCache_m3386 = {
1,
NULL,
&t478_CustomAttributesCacheGenerator_m3386
};
CustomAttributesCache t478__CustomAttributeCache_m2752 = {
1,
NULL,
&t478_CustomAttributesCacheGenerator_m2752
};
CustomAttributesCache t478__CustomAttributeCache_m3388 = {
1,
NULL,
&t478_CustomAttributesCacheGenerator_m3388
};
CustomAttributesCache t478__CustomAttributeCache_m2756 = {
1,
NULL,
&t478_CustomAttributesCacheGenerator_m2756
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t478_1_0_0;
struct t478;
extern CustomAttributesCache t478__CustomAttributeCache_U3CU3Ef__switch$map0;
extern CustomAttributesCache t478__CustomAttributeCache_m3380;
extern CustomAttributesCache t478__CustomAttributeCache_m3382;
extern CustomAttributesCache t478__CustomAttributeCache_m2755;
extern CustomAttributesCache t478__CustomAttributeCache_m3383;
extern CustomAttributesCache t478__CustomAttributeCache_m3385;
extern CustomAttributesCache t478__CustomAttributeCache_m2751;
extern CustomAttributesCache t478__CustomAttributeCache_m2753;
extern CustomAttributesCache t478__CustomAttributeCache_m3386;
extern CustomAttributesCache t478__CustomAttributeCache_m2752;
extern CustomAttributesCache t478__CustomAttributeCache_m3388;
extern CustomAttributesCache t478__CustomAttributeCache_m2756;
const Il2CppTypeDefinitionMetadata t478_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t478_VT, t478_VTIGM, NULL};
TypeInfo t478_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Event", "UnityEngine", t478_MIs, t478_PIs, t478_FIs, NULL, &t478_TI, NULL, &EmptyCustomAttributesCache, &t478_0_0_0, &t478_1_0_0, &t478_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t478_marshal, (methodPointerType)t478_marshal_back, (methodPointerType)t478_marshal_cleanup, sizeof (t478), sizeof (t478), 0, -1, sizeof(t478_SFs), 0, -1, 1048841, 0, 0, false, false, false, false, false, false, false, true, false, false, 21, 10, 4, 0, 0, 4, 0, 0};
#include "t294.h"
// Metadata Definition UnityEngine.KeyCode
extern TypeInfo t294_TI;
#include "t294MD.h"
static MethodInfo* t294_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t294_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t294_TI, offsetof(t294, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f2_FieldInfo = 
{
	"None", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f3_FieldInfo = 
{
	"Backspace", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f4_FieldInfo = 
{
	"Delete", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f5_FieldInfo = 
{
	"Tab", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f6_FieldInfo = 
{
	"Clear", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f7_FieldInfo = 
{
	"Return", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f8_FieldInfo = 
{
	"Pause", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f9_FieldInfo = 
{
	"Escape", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f10_FieldInfo = 
{
	"Space", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f11_FieldInfo = 
{
	"Keypad0", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f12_FieldInfo = 
{
	"Keypad1", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f13_FieldInfo = 
{
	"Keypad2", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f14_FieldInfo = 
{
	"Keypad3", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f15_FieldInfo = 
{
	"Keypad4", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f16_FieldInfo = 
{
	"Keypad5", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f17_FieldInfo = 
{
	"Keypad6", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f18_FieldInfo = 
{
	"Keypad7", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f19_FieldInfo = 
{
	"Keypad8", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f20_FieldInfo = 
{
	"Keypad9", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f21_FieldInfo = 
{
	"KeypadPeriod", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f22_FieldInfo = 
{
	"KeypadDivide", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f23_FieldInfo = 
{
	"KeypadMultiply", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f24_FieldInfo = 
{
	"KeypadMinus", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f25_FieldInfo = 
{
	"KeypadPlus", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f26_FieldInfo = 
{
	"KeypadEnter", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f27_FieldInfo = 
{
	"KeypadEquals", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f28_FieldInfo = 
{
	"UpArrow", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f29_FieldInfo = 
{
	"DownArrow", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f30_FieldInfo = 
{
	"RightArrow", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f31_FieldInfo = 
{
	"LeftArrow", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f32_FieldInfo = 
{
	"Insert", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f33_FieldInfo = 
{
	"Home", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f34_FieldInfo = 
{
	"End", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f35_FieldInfo = 
{
	"PageUp", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f36_FieldInfo = 
{
	"PageDown", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f37_FieldInfo = 
{
	"F1", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f38_FieldInfo = 
{
	"F2", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f39_FieldInfo = 
{
	"F3", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f40_FieldInfo = 
{
	"F4", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f41_FieldInfo = 
{
	"F5", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f42_FieldInfo = 
{
	"F6", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f43_FieldInfo = 
{
	"F7", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f44_FieldInfo = 
{
	"F8", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f45_FieldInfo = 
{
	"F9", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f46_FieldInfo = 
{
	"F10", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f47_FieldInfo = 
{
	"F11", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f48_FieldInfo = 
{
	"F12", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f49_FieldInfo = 
{
	"F13", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f50_FieldInfo = 
{
	"F14", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f51_FieldInfo = 
{
	"F15", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f52_FieldInfo = 
{
	"Alpha0", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f53_FieldInfo = 
{
	"Alpha1", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f54_FieldInfo = 
{
	"Alpha2", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f55_FieldInfo = 
{
	"Alpha3", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f56_FieldInfo = 
{
	"Alpha4", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f57_FieldInfo = 
{
	"Alpha5", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f58_FieldInfo = 
{
	"Alpha6", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f59_FieldInfo = 
{
	"Alpha7", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f60_FieldInfo = 
{
	"Alpha8", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f61_FieldInfo = 
{
	"Alpha9", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f62_FieldInfo = 
{
	"Exclaim", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f63_FieldInfo = 
{
	"DoubleQuote", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f64_FieldInfo = 
{
	"Hash", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f65_FieldInfo = 
{
	"Dollar", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f66_FieldInfo = 
{
	"Ampersand", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f67_FieldInfo = 
{
	"Quote", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f68_FieldInfo = 
{
	"LeftParen", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f69_FieldInfo = 
{
	"RightParen", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f70_FieldInfo = 
{
	"Asterisk", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f71_FieldInfo = 
{
	"Plus", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f72_FieldInfo = 
{
	"Comma", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f73_FieldInfo = 
{
	"Minus", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f74_FieldInfo = 
{
	"Period", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f75_FieldInfo = 
{
	"Slash", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f76_FieldInfo = 
{
	"Colon", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f77_FieldInfo = 
{
	"Semicolon", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f78_FieldInfo = 
{
	"Less", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f79_FieldInfo = 
{
	"Equals", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f80_FieldInfo = 
{
	"Greater", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f81_FieldInfo = 
{
	"Question", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f82_FieldInfo = 
{
	"At", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f83_FieldInfo = 
{
	"LeftBracket", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f84_FieldInfo = 
{
	"Backslash", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f85_FieldInfo = 
{
	"RightBracket", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f86_FieldInfo = 
{
	"Caret", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f87_FieldInfo = 
{
	"Underscore", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f88_FieldInfo = 
{
	"BackQuote", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f89_FieldInfo = 
{
	"A", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f90_FieldInfo = 
{
	"B", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f91_FieldInfo = 
{
	"C", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f92_FieldInfo = 
{
	"D", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f93_FieldInfo = 
{
	"E", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f94_FieldInfo = 
{
	"F", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f95_FieldInfo = 
{
	"G", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f96_FieldInfo = 
{
	"H", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f97_FieldInfo = 
{
	"I", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f98_FieldInfo = 
{
	"J", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f99_FieldInfo = 
{
	"K", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f100_FieldInfo = 
{
	"L", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f101_FieldInfo = 
{
	"M", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f102_FieldInfo = 
{
	"N", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f103_FieldInfo = 
{
	"O", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f104_FieldInfo = 
{
	"P", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f105_FieldInfo = 
{
	"Q", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f106_FieldInfo = 
{
	"R", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f107_FieldInfo = 
{
	"S", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f108_FieldInfo = 
{
	"T", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f109_FieldInfo = 
{
	"U", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f110_FieldInfo = 
{
	"V", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f111_FieldInfo = 
{
	"W", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f112_FieldInfo = 
{
	"X", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f113_FieldInfo = 
{
	"Y", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f114_FieldInfo = 
{
	"Z", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f115_FieldInfo = 
{
	"Numlock", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f116_FieldInfo = 
{
	"CapsLock", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f117_FieldInfo = 
{
	"ScrollLock", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f118_FieldInfo = 
{
	"RightShift", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f119_FieldInfo = 
{
	"LeftShift", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f120_FieldInfo = 
{
	"RightControl", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f121_FieldInfo = 
{
	"LeftControl", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f122_FieldInfo = 
{
	"RightAlt", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f123_FieldInfo = 
{
	"LeftAlt", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f124_FieldInfo = 
{
	"LeftCommand", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f125_FieldInfo = 
{
	"LeftApple", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f126_FieldInfo = 
{
	"LeftWindows", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f127_FieldInfo = 
{
	"RightCommand", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f128_FieldInfo = 
{
	"RightApple", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f129_FieldInfo = 
{
	"RightWindows", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f130_FieldInfo = 
{
	"AltGr", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f131_FieldInfo = 
{
	"Help", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f132_FieldInfo = 
{
	"Print", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f133_FieldInfo = 
{
	"SysReq", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f134_FieldInfo = 
{
	"Break", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f135_FieldInfo = 
{
	"Menu", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f136_FieldInfo = 
{
	"Mouse0", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f137_FieldInfo = 
{
	"Mouse1", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f138_FieldInfo = 
{
	"Mouse2", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f139_FieldInfo = 
{
	"Mouse3", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f140_FieldInfo = 
{
	"Mouse4", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f141_FieldInfo = 
{
	"Mouse5", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f142_FieldInfo = 
{
	"Mouse6", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f143_FieldInfo = 
{
	"JoystickButton0", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f144_FieldInfo = 
{
	"JoystickButton1", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f145_FieldInfo = 
{
	"JoystickButton2", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f146_FieldInfo = 
{
	"JoystickButton3", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f147_FieldInfo = 
{
	"JoystickButton4", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f148_FieldInfo = 
{
	"JoystickButton5", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f149_FieldInfo = 
{
	"JoystickButton6", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f150_FieldInfo = 
{
	"JoystickButton7", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f151_FieldInfo = 
{
	"JoystickButton8", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f152_FieldInfo = 
{
	"JoystickButton9", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f153_FieldInfo = 
{
	"JoystickButton10", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f154_FieldInfo = 
{
	"JoystickButton11", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f155_FieldInfo = 
{
	"JoystickButton12", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f156_FieldInfo = 
{
	"JoystickButton13", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f157_FieldInfo = 
{
	"JoystickButton14", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f158_FieldInfo = 
{
	"JoystickButton15", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f159_FieldInfo = 
{
	"JoystickButton16", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f160_FieldInfo = 
{
	"JoystickButton17", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f161_FieldInfo = 
{
	"JoystickButton18", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f162_FieldInfo = 
{
	"JoystickButton19", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f163_FieldInfo = 
{
	"Joystick1Button0", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f164_FieldInfo = 
{
	"Joystick1Button1", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f165_FieldInfo = 
{
	"Joystick1Button2", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f166_FieldInfo = 
{
	"Joystick1Button3", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f167_FieldInfo = 
{
	"Joystick1Button4", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f168_FieldInfo = 
{
	"Joystick1Button5", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f169_FieldInfo = 
{
	"Joystick1Button6", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f170_FieldInfo = 
{
	"Joystick1Button7", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f171_FieldInfo = 
{
	"Joystick1Button8", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f172_FieldInfo = 
{
	"Joystick1Button9", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f173_FieldInfo = 
{
	"Joystick1Button10", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f174_FieldInfo = 
{
	"Joystick1Button11", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f175_FieldInfo = 
{
	"Joystick1Button12", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f176_FieldInfo = 
{
	"Joystick1Button13", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f177_FieldInfo = 
{
	"Joystick1Button14", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f178_FieldInfo = 
{
	"Joystick1Button15", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f179_FieldInfo = 
{
	"Joystick1Button16", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f180_FieldInfo = 
{
	"Joystick1Button17", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f181_FieldInfo = 
{
	"Joystick1Button18", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f182_FieldInfo = 
{
	"Joystick1Button19", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f183_FieldInfo = 
{
	"Joystick2Button0", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f184_FieldInfo = 
{
	"Joystick2Button1", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f185_FieldInfo = 
{
	"Joystick2Button2", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f186_FieldInfo = 
{
	"Joystick2Button3", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f187_FieldInfo = 
{
	"Joystick2Button4", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f188_FieldInfo = 
{
	"Joystick2Button5", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f189_FieldInfo = 
{
	"Joystick2Button6", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f190_FieldInfo = 
{
	"Joystick2Button7", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f191_FieldInfo = 
{
	"Joystick2Button8", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f192_FieldInfo = 
{
	"Joystick2Button9", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f193_FieldInfo = 
{
	"Joystick2Button10", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f194_FieldInfo = 
{
	"Joystick2Button11", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f195_FieldInfo = 
{
	"Joystick2Button12", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f196_FieldInfo = 
{
	"Joystick2Button13", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f197_FieldInfo = 
{
	"Joystick2Button14", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f198_FieldInfo = 
{
	"Joystick2Button15", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f199_FieldInfo = 
{
	"Joystick2Button16", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f200_FieldInfo = 
{
	"Joystick2Button17", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f201_FieldInfo = 
{
	"Joystick2Button18", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f202_FieldInfo = 
{
	"Joystick2Button19", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f203_FieldInfo = 
{
	"Joystick3Button0", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f204_FieldInfo = 
{
	"Joystick3Button1", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f205_FieldInfo = 
{
	"Joystick3Button2", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f206_FieldInfo = 
{
	"Joystick3Button3", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f207_FieldInfo = 
{
	"Joystick3Button4", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f208_FieldInfo = 
{
	"Joystick3Button5", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f209_FieldInfo = 
{
	"Joystick3Button6", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f210_FieldInfo = 
{
	"Joystick3Button7", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f211_FieldInfo = 
{
	"Joystick3Button8", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f212_FieldInfo = 
{
	"Joystick3Button9", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f213_FieldInfo = 
{
	"Joystick3Button10", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f214_FieldInfo = 
{
	"Joystick3Button11", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f215_FieldInfo = 
{
	"Joystick3Button12", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f216_FieldInfo = 
{
	"Joystick3Button13", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f217_FieldInfo = 
{
	"Joystick3Button14", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f218_FieldInfo = 
{
	"Joystick3Button15", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f219_FieldInfo = 
{
	"Joystick3Button16", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f220_FieldInfo = 
{
	"Joystick3Button17", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f221_FieldInfo = 
{
	"Joystick3Button18", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f222_FieldInfo = 
{
	"Joystick3Button19", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f223_FieldInfo = 
{
	"Joystick4Button0", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f224_FieldInfo = 
{
	"Joystick4Button1", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f225_FieldInfo = 
{
	"Joystick4Button2", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f226_FieldInfo = 
{
	"Joystick4Button3", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f227_FieldInfo = 
{
	"Joystick4Button4", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f228_FieldInfo = 
{
	"Joystick4Button5", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f229_FieldInfo = 
{
	"Joystick4Button6", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f230_FieldInfo = 
{
	"Joystick4Button7", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f231_FieldInfo = 
{
	"Joystick4Button8", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f232_FieldInfo = 
{
	"Joystick4Button9", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f233_FieldInfo = 
{
	"Joystick4Button10", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f234_FieldInfo = 
{
	"Joystick4Button11", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f235_FieldInfo = 
{
	"Joystick4Button12", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f236_FieldInfo = 
{
	"Joystick4Button13", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f237_FieldInfo = 
{
	"Joystick4Button14", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f238_FieldInfo = 
{
	"Joystick4Button15", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f239_FieldInfo = 
{
	"Joystick4Button16", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f240_FieldInfo = 
{
	"Joystick4Button17", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f241_FieldInfo = 
{
	"Joystick4Button18", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f242_FieldInfo = 
{
	"Joystick4Button19", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f243_FieldInfo = 
{
	"Joystick5Button0", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f244_FieldInfo = 
{
	"Joystick5Button1", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f245_FieldInfo = 
{
	"Joystick5Button2", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f246_FieldInfo = 
{
	"Joystick5Button3", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f247_FieldInfo = 
{
	"Joystick5Button4", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f248_FieldInfo = 
{
	"Joystick5Button5", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f249_FieldInfo = 
{
	"Joystick5Button6", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f250_FieldInfo = 
{
	"Joystick5Button7", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f251_FieldInfo = 
{
	"Joystick5Button8", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f252_FieldInfo = 
{
	"Joystick5Button9", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f253_FieldInfo = 
{
	"Joystick5Button10", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f254_FieldInfo = 
{
	"Joystick5Button11", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f255_FieldInfo = 
{
	"Joystick5Button12", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f256_FieldInfo = 
{
	"Joystick5Button13", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f257_FieldInfo = 
{
	"Joystick5Button14", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f258_FieldInfo = 
{
	"Joystick5Button15", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f259_FieldInfo = 
{
	"Joystick5Button16", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f260_FieldInfo = 
{
	"Joystick5Button17", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f261_FieldInfo = 
{
	"Joystick5Button18", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f262_FieldInfo = 
{
	"Joystick5Button19", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f263_FieldInfo = 
{
	"Joystick6Button0", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f264_FieldInfo = 
{
	"Joystick6Button1", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f265_FieldInfo = 
{
	"Joystick6Button2", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f266_FieldInfo = 
{
	"Joystick6Button3", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f267_FieldInfo = 
{
	"Joystick6Button4", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f268_FieldInfo = 
{
	"Joystick6Button5", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f269_FieldInfo = 
{
	"Joystick6Button6", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f270_FieldInfo = 
{
	"Joystick6Button7", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f271_FieldInfo = 
{
	"Joystick6Button8", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f272_FieldInfo = 
{
	"Joystick6Button9", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f273_FieldInfo = 
{
	"Joystick6Button10", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f274_FieldInfo = 
{
	"Joystick6Button11", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f275_FieldInfo = 
{
	"Joystick6Button12", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f276_FieldInfo = 
{
	"Joystick6Button13", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f277_FieldInfo = 
{
	"Joystick6Button14", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f278_FieldInfo = 
{
	"Joystick6Button15", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f279_FieldInfo = 
{
	"Joystick6Button16", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f280_FieldInfo = 
{
	"Joystick6Button17", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f281_FieldInfo = 
{
	"Joystick6Button18", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f282_FieldInfo = 
{
	"Joystick6Button19", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f283_FieldInfo = 
{
	"Joystick7Button0", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f284_FieldInfo = 
{
	"Joystick7Button1", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f285_FieldInfo = 
{
	"Joystick7Button2", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f286_FieldInfo = 
{
	"Joystick7Button3", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f287_FieldInfo = 
{
	"Joystick7Button4", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f288_FieldInfo = 
{
	"Joystick7Button5", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f289_FieldInfo = 
{
	"Joystick7Button6", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f290_FieldInfo = 
{
	"Joystick7Button7", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f291_FieldInfo = 
{
	"Joystick7Button8", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f292_FieldInfo = 
{
	"Joystick7Button9", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f293_FieldInfo = 
{
	"Joystick7Button10", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f294_FieldInfo = 
{
	"Joystick7Button11", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f295_FieldInfo = 
{
	"Joystick7Button12", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f296_FieldInfo = 
{
	"Joystick7Button13", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f297_FieldInfo = 
{
	"Joystick7Button14", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f298_FieldInfo = 
{
	"Joystick7Button15", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f299_FieldInfo = 
{
	"Joystick7Button16", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f300_FieldInfo = 
{
	"Joystick7Button17", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f301_FieldInfo = 
{
	"Joystick7Button18", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f302_FieldInfo = 
{
	"Joystick7Button19", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f303_FieldInfo = 
{
	"Joystick8Button0", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f304_FieldInfo = 
{
	"Joystick8Button1", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f305_FieldInfo = 
{
	"Joystick8Button2", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f306_FieldInfo = 
{
	"Joystick8Button3", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f307_FieldInfo = 
{
	"Joystick8Button4", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f308_FieldInfo = 
{
	"Joystick8Button5", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f309_FieldInfo = 
{
	"Joystick8Button6", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f310_FieldInfo = 
{
	"Joystick8Button7", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f311_FieldInfo = 
{
	"Joystick8Button8", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f312_FieldInfo = 
{
	"Joystick8Button9", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f313_FieldInfo = 
{
	"Joystick8Button10", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f314_FieldInfo = 
{
	"Joystick8Button11", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f315_FieldInfo = 
{
	"Joystick8Button12", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f316_FieldInfo = 
{
	"Joystick8Button13", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f317_FieldInfo = 
{
	"Joystick8Button14", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f318_FieldInfo = 
{
	"Joystick8Button15", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f319_FieldInfo = 
{
	"Joystick8Button16", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f320_FieldInfo = 
{
	"Joystick8Button17", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f321_FieldInfo = 
{
	"Joystick8Button18", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_32854;
FieldInfo t294_f322_FieldInfo = 
{
	"Joystick8Button19", &t294_0_0_32854, &t294_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t294_FIs[] =
{
	&t294_f1_FieldInfo,
	&t294_f2_FieldInfo,
	&t294_f3_FieldInfo,
	&t294_f4_FieldInfo,
	&t294_f5_FieldInfo,
	&t294_f6_FieldInfo,
	&t294_f7_FieldInfo,
	&t294_f8_FieldInfo,
	&t294_f9_FieldInfo,
	&t294_f10_FieldInfo,
	&t294_f11_FieldInfo,
	&t294_f12_FieldInfo,
	&t294_f13_FieldInfo,
	&t294_f14_FieldInfo,
	&t294_f15_FieldInfo,
	&t294_f16_FieldInfo,
	&t294_f17_FieldInfo,
	&t294_f18_FieldInfo,
	&t294_f19_FieldInfo,
	&t294_f20_FieldInfo,
	&t294_f21_FieldInfo,
	&t294_f22_FieldInfo,
	&t294_f23_FieldInfo,
	&t294_f24_FieldInfo,
	&t294_f25_FieldInfo,
	&t294_f26_FieldInfo,
	&t294_f27_FieldInfo,
	&t294_f28_FieldInfo,
	&t294_f29_FieldInfo,
	&t294_f30_FieldInfo,
	&t294_f31_FieldInfo,
	&t294_f32_FieldInfo,
	&t294_f33_FieldInfo,
	&t294_f34_FieldInfo,
	&t294_f35_FieldInfo,
	&t294_f36_FieldInfo,
	&t294_f37_FieldInfo,
	&t294_f38_FieldInfo,
	&t294_f39_FieldInfo,
	&t294_f40_FieldInfo,
	&t294_f41_FieldInfo,
	&t294_f42_FieldInfo,
	&t294_f43_FieldInfo,
	&t294_f44_FieldInfo,
	&t294_f45_FieldInfo,
	&t294_f46_FieldInfo,
	&t294_f47_FieldInfo,
	&t294_f48_FieldInfo,
	&t294_f49_FieldInfo,
	&t294_f50_FieldInfo,
	&t294_f51_FieldInfo,
	&t294_f52_FieldInfo,
	&t294_f53_FieldInfo,
	&t294_f54_FieldInfo,
	&t294_f55_FieldInfo,
	&t294_f56_FieldInfo,
	&t294_f57_FieldInfo,
	&t294_f58_FieldInfo,
	&t294_f59_FieldInfo,
	&t294_f60_FieldInfo,
	&t294_f61_FieldInfo,
	&t294_f62_FieldInfo,
	&t294_f63_FieldInfo,
	&t294_f64_FieldInfo,
	&t294_f65_FieldInfo,
	&t294_f66_FieldInfo,
	&t294_f67_FieldInfo,
	&t294_f68_FieldInfo,
	&t294_f69_FieldInfo,
	&t294_f70_FieldInfo,
	&t294_f71_FieldInfo,
	&t294_f72_FieldInfo,
	&t294_f73_FieldInfo,
	&t294_f74_FieldInfo,
	&t294_f75_FieldInfo,
	&t294_f76_FieldInfo,
	&t294_f77_FieldInfo,
	&t294_f78_FieldInfo,
	&t294_f79_FieldInfo,
	&t294_f80_FieldInfo,
	&t294_f81_FieldInfo,
	&t294_f82_FieldInfo,
	&t294_f83_FieldInfo,
	&t294_f84_FieldInfo,
	&t294_f85_FieldInfo,
	&t294_f86_FieldInfo,
	&t294_f87_FieldInfo,
	&t294_f88_FieldInfo,
	&t294_f89_FieldInfo,
	&t294_f90_FieldInfo,
	&t294_f91_FieldInfo,
	&t294_f92_FieldInfo,
	&t294_f93_FieldInfo,
	&t294_f94_FieldInfo,
	&t294_f95_FieldInfo,
	&t294_f96_FieldInfo,
	&t294_f97_FieldInfo,
	&t294_f98_FieldInfo,
	&t294_f99_FieldInfo,
	&t294_f100_FieldInfo,
	&t294_f101_FieldInfo,
	&t294_f102_FieldInfo,
	&t294_f103_FieldInfo,
	&t294_f104_FieldInfo,
	&t294_f105_FieldInfo,
	&t294_f106_FieldInfo,
	&t294_f107_FieldInfo,
	&t294_f108_FieldInfo,
	&t294_f109_FieldInfo,
	&t294_f110_FieldInfo,
	&t294_f111_FieldInfo,
	&t294_f112_FieldInfo,
	&t294_f113_FieldInfo,
	&t294_f114_FieldInfo,
	&t294_f115_FieldInfo,
	&t294_f116_FieldInfo,
	&t294_f117_FieldInfo,
	&t294_f118_FieldInfo,
	&t294_f119_FieldInfo,
	&t294_f120_FieldInfo,
	&t294_f121_FieldInfo,
	&t294_f122_FieldInfo,
	&t294_f123_FieldInfo,
	&t294_f124_FieldInfo,
	&t294_f125_FieldInfo,
	&t294_f126_FieldInfo,
	&t294_f127_FieldInfo,
	&t294_f128_FieldInfo,
	&t294_f129_FieldInfo,
	&t294_f130_FieldInfo,
	&t294_f131_FieldInfo,
	&t294_f132_FieldInfo,
	&t294_f133_FieldInfo,
	&t294_f134_FieldInfo,
	&t294_f135_FieldInfo,
	&t294_f136_FieldInfo,
	&t294_f137_FieldInfo,
	&t294_f138_FieldInfo,
	&t294_f139_FieldInfo,
	&t294_f140_FieldInfo,
	&t294_f141_FieldInfo,
	&t294_f142_FieldInfo,
	&t294_f143_FieldInfo,
	&t294_f144_FieldInfo,
	&t294_f145_FieldInfo,
	&t294_f146_FieldInfo,
	&t294_f147_FieldInfo,
	&t294_f148_FieldInfo,
	&t294_f149_FieldInfo,
	&t294_f150_FieldInfo,
	&t294_f151_FieldInfo,
	&t294_f152_FieldInfo,
	&t294_f153_FieldInfo,
	&t294_f154_FieldInfo,
	&t294_f155_FieldInfo,
	&t294_f156_FieldInfo,
	&t294_f157_FieldInfo,
	&t294_f158_FieldInfo,
	&t294_f159_FieldInfo,
	&t294_f160_FieldInfo,
	&t294_f161_FieldInfo,
	&t294_f162_FieldInfo,
	&t294_f163_FieldInfo,
	&t294_f164_FieldInfo,
	&t294_f165_FieldInfo,
	&t294_f166_FieldInfo,
	&t294_f167_FieldInfo,
	&t294_f168_FieldInfo,
	&t294_f169_FieldInfo,
	&t294_f170_FieldInfo,
	&t294_f171_FieldInfo,
	&t294_f172_FieldInfo,
	&t294_f173_FieldInfo,
	&t294_f174_FieldInfo,
	&t294_f175_FieldInfo,
	&t294_f176_FieldInfo,
	&t294_f177_FieldInfo,
	&t294_f178_FieldInfo,
	&t294_f179_FieldInfo,
	&t294_f180_FieldInfo,
	&t294_f181_FieldInfo,
	&t294_f182_FieldInfo,
	&t294_f183_FieldInfo,
	&t294_f184_FieldInfo,
	&t294_f185_FieldInfo,
	&t294_f186_FieldInfo,
	&t294_f187_FieldInfo,
	&t294_f188_FieldInfo,
	&t294_f189_FieldInfo,
	&t294_f190_FieldInfo,
	&t294_f191_FieldInfo,
	&t294_f192_FieldInfo,
	&t294_f193_FieldInfo,
	&t294_f194_FieldInfo,
	&t294_f195_FieldInfo,
	&t294_f196_FieldInfo,
	&t294_f197_FieldInfo,
	&t294_f198_FieldInfo,
	&t294_f199_FieldInfo,
	&t294_f200_FieldInfo,
	&t294_f201_FieldInfo,
	&t294_f202_FieldInfo,
	&t294_f203_FieldInfo,
	&t294_f204_FieldInfo,
	&t294_f205_FieldInfo,
	&t294_f206_FieldInfo,
	&t294_f207_FieldInfo,
	&t294_f208_FieldInfo,
	&t294_f209_FieldInfo,
	&t294_f210_FieldInfo,
	&t294_f211_FieldInfo,
	&t294_f212_FieldInfo,
	&t294_f213_FieldInfo,
	&t294_f214_FieldInfo,
	&t294_f215_FieldInfo,
	&t294_f216_FieldInfo,
	&t294_f217_FieldInfo,
	&t294_f218_FieldInfo,
	&t294_f219_FieldInfo,
	&t294_f220_FieldInfo,
	&t294_f221_FieldInfo,
	&t294_f222_FieldInfo,
	&t294_f223_FieldInfo,
	&t294_f224_FieldInfo,
	&t294_f225_FieldInfo,
	&t294_f226_FieldInfo,
	&t294_f227_FieldInfo,
	&t294_f228_FieldInfo,
	&t294_f229_FieldInfo,
	&t294_f230_FieldInfo,
	&t294_f231_FieldInfo,
	&t294_f232_FieldInfo,
	&t294_f233_FieldInfo,
	&t294_f234_FieldInfo,
	&t294_f235_FieldInfo,
	&t294_f236_FieldInfo,
	&t294_f237_FieldInfo,
	&t294_f238_FieldInfo,
	&t294_f239_FieldInfo,
	&t294_f240_FieldInfo,
	&t294_f241_FieldInfo,
	&t294_f242_FieldInfo,
	&t294_f243_FieldInfo,
	&t294_f244_FieldInfo,
	&t294_f245_FieldInfo,
	&t294_f246_FieldInfo,
	&t294_f247_FieldInfo,
	&t294_f248_FieldInfo,
	&t294_f249_FieldInfo,
	&t294_f250_FieldInfo,
	&t294_f251_FieldInfo,
	&t294_f252_FieldInfo,
	&t294_f253_FieldInfo,
	&t294_f254_FieldInfo,
	&t294_f255_FieldInfo,
	&t294_f256_FieldInfo,
	&t294_f257_FieldInfo,
	&t294_f258_FieldInfo,
	&t294_f259_FieldInfo,
	&t294_f260_FieldInfo,
	&t294_f261_FieldInfo,
	&t294_f262_FieldInfo,
	&t294_f263_FieldInfo,
	&t294_f264_FieldInfo,
	&t294_f265_FieldInfo,
	&t294_f266_FieldInfo,
	&t294_f267_FieldInfo,
	&t294_f268_FieldInfo,
	&t294_f269_FieldInfo,
	&t294_f270_FieldInfo,
	&t294_f271_FieldInfo,
	&t294_f272_FieldInfo,
	&t294_f273_FieldInfo,
	&t294_f274_FieldInfo,
	&t294_f275_FieldInfo,
	&t294_f276_FieldInfo,
	&t294_f277_FieldInfo,
	&t294_f278_FieldInfo,
	&t294_f279_FieldInfo,
	&t294_f280_FieldInfo,
	&t294_f281_FieldInfo,
	&t294_f282_FieldInfo,
	&t294_f283_FieldInfo,
	&t294_f284_FieldInfo,
	&t294_f285_FieldInfo,
	&t294_f286_FieldInfo,
	&t294_f287_FieldInfo,
	&t294_f288_FieldInfo,
	&t294_f289_FieldInfo,
	&t294_f290_FieldInfo,
	&t294_f291_FieldInfo,
	&t294_f292_FieldInfo,
	&t294_f293_FieldInfo,
	&t294_f294_FieldInfo,
	&t294_f295_FieldInfo,
	&t294_f296_FieldInfo,
	&t294_f297_FieldInfo,
	&t294_f298_FieldInfo,
	&t294_f299_FieldInfo,
	&t294_f300_FieldInfo,
	&t294_f301_FieldInfo,
	&t294_f302_FieldInfo,
	&t294_f303_FieldInfo,
	&t294_f304_FieldInfo,
	&t294_f305_FieldInfo,
	&t294_f306_FieldInfo,
	&t294_f307_FieldInfo,
	&t294_f308_FieldInfo,
	&t294_f309_FieldInfo,
	&t294_f310_FieldInfo,
	&t294_f311_FieldInfo,
	&t294_f312_FieldInfo,
	&t294_f313_FieldInfo,
	&t294_f314_FieldInfo,
	&t294_f315_FieldInfo,
	&t294_f316_FieldInfo,
	&t294_f317_FieldInfo,
	&t294_f318_FieldInfo,
	&t294_f319_FieldInfo,
	&t294_f320_FieldInfo,
	&t294_f321_FieldInfo,
	&t294_f322_FieldInfo,
	NULL
};
static const int32_t t294_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t294_f2_DefaultValue = 
{
	&t294_f2_FieldInfo, { (char*)&t294_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f3_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t294_f3_DefaultValue = 
{
	&t294_f3_FieldInfo, { (char*)&t294_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f4_DefaultValueData = 127;
static Il2CppFieldDefaultValueEntry t294_f4_DefaultValue = 
{
	&t294_f4_FieldInfo, { (char*)&t294_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f5_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t294_f5_DefaultValue = 
{
	&t294_f5_FieldInfo, { (char*)&t294_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f6_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t294_f6_DefaultValue = 
{
	&t294_f6_FieldInfo, { (char*)&t294_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f7_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry t294_f7_DefaultValue = 
{
	&t294_f7_FieldInfo, { (char*)&t294_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f8_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry t294_f8_DefaultValue = 
{
	&t294_f8_FieldInfo, { (char*)&t294_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f9_DefaultValueData = 27;
static Il2CppFieldDefaultValueEntry t294_f9_DefaultValue = 
{
	&t294_f9_FieldInfo, { (char*)&t294_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f10_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t294_f10_DefaultValue = 
{
	&t294_f10_FieldInfo, { (char*)&t294_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f11_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t294_f11_DefaultValue = 
{
	&t294_f11_FieldInfo, { (char*)&t294_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f12_DefaultValueData = 257;
static Il2CppFieldDefaultValueEntry t294_f12_DefaultValue = 
{
	&t294_f12_FieldInfo, { (char*)&t294_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f13_DefaultValueData = 258;
static Il2CppFieldDefaultValueEntry t294_f13_DefaultValue = 
{
	&t294_f13_FieldInfo, { (char*)&t294_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f14_DefaultValueData = 259;
static Il2CppFieldDefaultValueEntry t294_f14_DefaultValue = 
{
	&t294_f14_FieldInfo, { (char*)&t294_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f15_DefaultValueData = 260;
static Il2CppFieldDefaultValueEntry t294_f15_DefaultValue = 
{
	&t294_f15_FieldInfo, { (char*)&t294_f15_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f16_DefaultValueData = 261;
static Il2CppFieldDefaultValueEntry t294_f16_DefaultValue = 
{
	&t294_f16_FieldInfo, { (char*)&t294_f16_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f17_DefaultValueData = 262;
static Il2CppFieldDefaultValueEntry t294_f17_DefaultValue = 
{
	&t294_f17_FieldInfo, { (char*)&t294_f17_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f18_DefaultValueData = 263;
static Il2CppFieldDefaultValueEntry t294_f18_DefaultValue = 
{
	&t294_f18_FieldInfo, { (char*)&t294_f18_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f19_DefaultValueData = 264;
static Il2CppFieldDefaultValueEntry t294_f19_DefaultValue = 
{
	&t294_f19_FieldInfo, { (char*)&t294_f19_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f20_DefaultValueData = 265;
static Il2CppFieldDefaultValueEntry t294_f20_DefaultValue = 
{
	&t294_f20_FieldInfo, { (char*)&t294_f20_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f21_DefaultValueData = 266;
static Il2CppFieldDefaultValueEntry t294_f21_DefaultValue = 
{
	&t294_f21_FieldInfo, { (char*)&t294_f21_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f22_DefaultValueData = 267;
static Il2CppFieldDefaultValueEntry t294_f22_DefaultValue = 
{
	&t294_f22_FieldInfo, { (char*)&t294_f22_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f23_DefaultValueData = 268;
static Il2CppFieldDefaultValueEntry t294_f23_DefaultValue = 
{
	&t294_f23_FieldInfo, { (char*)&t294_f23_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f24_DefaultValueData = 269;
static Il2CppFieldDefaultValueEntry t294_f24_DefaultValue = 
{
	&t294_f24_FieldInfo, { (char*)&t294_f24_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f25_DefaultValueData = 270;
static Il2CppFieldDefaultValueEntry t294_f25_DefaultValue = 
{
	&t294_f25_FieldInfo, { (char*)&t294_f25_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f26_DefaultValueData = 271;
static Il2CppFieldDefaultValueEntry t294_f26_DefaultValue = 
{
	&t294_f26_FieldInfo, { (char*)&t294_f26_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f27_DefaultValueData = 272;
static Il2CppFieldDefaultValueEntry t294_f27_DefaultValue = 
{
	&t294_f27_FieldInfo, { (char*)&t294_f27_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f28_DefaultValueData = 273;
static Il2CppFieldDefaultValueEntry t294_f28_DefaultValue = 
{
	&t294_f28_FieldInfo, { (char*)&t294_f28_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f29_DefaultValueData = 274;
static Il2CppFieldDefaultValueEntry t294_f29_DefaultValue = 
{
	&t294_f29_FieldInfo, { (char*)&t294_f29_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f30_DefaultValueData = 275;
static Il2CppFieldDefaultValueEntry t294_f30_DefaultValue = 
{
	&t294_f30_FieldInfo, { (char*)&t294_f30_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f31_DefaultValueData = 276;
static Il2CppFieldDefaultValueEntry t294_f31_DefaultValue = 
{
	&t294_f31_FieldInfo, { (char*)&t294_f31_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f32_DefaultValueData = 277;
static Il2CppFieldDefaultValueEntry t294_f32_DefaultValue = 
{
	&t294_f32_FieldInfo, { (char*)&t294_f32_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f33_DefaultValueData = 278;
static Il2CppFieldDefaultValueEntry t294_f33_DefaultValue = 
{
	&t294_f33_FieldInfo, { (char*)&t294_f33_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f34_DefaultValueData = 279;
static Il2CppFieldDefaultValueEntry t294_f34_DefaultValue = 
{
	&t294_f34_FieldInfo, { (char*)&t294_f34_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f35_DefaultValueData = 280;
static Il2CppFieldDefaultValueEntry t294_f35_DefaultValue = 
{
	&t294_f35_FieldInfo, { (char*)&t294_f35_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f36_DefaultValueData = 281;
static Il2CppFieldDefaultValueEntry t294_f36_DefaultValue = 
{
	&t294_f36_FieldInfo, { (char*)&t294_f36_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f37_DefaultValueData = 282;
static Il2CppFieldDefaultValueEntry t294_f37_DefaultValue = 
{
	&t294_f37_FieldInfo, { (char*)&t294_f37_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f38_DefaultValueData = 283;
static Il2CppFieldDefaultValueEntry t294_f38_DefaultValue = 
{
	&t294_f38_FieldInfo, { (char*)&t294_f38_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f39_DefaultValueData = 284;
static Il2CppFieldDefaultValueEntry t294_f39_DefaultValue = 
{
	&t294_f39_FieldInfo, { (char*)&t294_f39_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f40_DefaultValueData = 285;
static Il2CppFieldDefaultValueEntry t294_f40_DefaultValue = 
{
	&t294_f40_FieldInfo, { (char*)&t294_f40_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f41_DefaultValueData = 286;
static Il2CppFieldDefaultValueEntry t294_f41_DefaultValue = 
{
	&t294_f41_FieldInfo, { (char*)&t294_f41_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f42_DefaultValueData = 287;
static Il2CppFieldDefaultValueEntry t294_f42_DefaultValue = 
{
	&t294_f42_FieldInfo, { (char*)&t294_f42_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f43_DefaultValueData = 288;
static Il2CppFieldDefaultValueEntry t294_f43_DefaultValue = 
{
	&t294_f43_FieldInfo, { (char*)&t294_f43_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f44_DefaultValueData = 289;
static Il2CppFieldDefaultValueEntry t294_f44_DefaultValue = 
{
	&t294_f44_FieldInfo, { (char*)&t294_f44_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f45_DefaultValueData = 290;
static Il2CppFieldDefaultValueEntry t294_f45_DefaultValue = 
{
	&t294_f45_FieldInfo, { (char*)&t294_f45_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f46_DefaultValueData = 291;
static Il2CppFieldDefaultValueEntry t294_f46_DefaultValue = 
{
	&t294_f46_FieldInfo, { (char*)&t294_f46_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f47_DefaultValueData = 292;
static Il2CppFieldDefaultValueEntry t294_f47_DefaultValue = 
{
	&t294_f47_FieldInfo, { (char*)&t294_f47_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f48_DefaultValueData = 293;
static Il2CppFieldDefaultValueEntry t294_f48_DefaultValue = 
{
	&t294_f48_FieldInfo, { (char*)&t294_f48_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f49_DefaultValueData = 294;
static Il2CppFieldDefaultValueEntry t294_f49_DefaultValue = 
{
	&t294_f49_FieldInfo, { (char*)&t294_f49_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f50_DefaultValueData = 295;
static Il2CppFieldDefaultValueEntry t294_f50_DefaultValue = 
{
	&t294_f50_FieldInfo, { (char*)&t294_f50_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f51_DefaultValueData = 296;
static Il2CppFieldDefaultValueEntry t294_f51_DefaultValue = 
{
	&t294_f51_FieldInfo, { (char*)&t294_f51_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f52_DefaultValueData = 48;
static Il2CppFieldDefaultValueEntry t294_f52_DefaultValue = 
{
	&t294_f52_FieldInfo, { (char*)&t294_f52_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f53_DefaultValueData = 49;
static Il2CppFieldDefaultValueEntry t294_f53_DefaultValue = 
{
	&t294_f53_FieldInfo, { (char*)&t294_f53_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f54_DefaultValueData = 50;
static Il2CppFieldDefaultValueEntry t294_f54_DefaultValue = 
{
	&t294_f54_FieldInfo, { (char*)&t294_f54_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f55_DefaultValueData = 51;
static Il2CppFieldDefaultValueEntry t294_f55_DefaultValue = 
{
	&t294_f55_FieldInfo, { (char*)&t294_f55_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f56_DefaultValueData = 52;
static Il2CppFieldDefaultValueEntry t294_f56_DefaultValue = 
{
	&t294_f56_FieldInfo, { (char*)&t294_f56_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f57_DefaultValueData = 53;
static Il2CppFieldDefaultValueEntry t294_f57_DefaultValue = 
{
	&t294_f57_FieldInfo, { (char*)&t294_f57_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f58_DefaultValueData = 54;
static Il2CppFieldDefaultValueEntry t294_f58_DefaultValue = 
{
	&t294_f58_FieldInfo, { (char*)&t294_f58_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f59_DefaultValueData = 55;
static Il2CppFieldDefaultValueEntry t294_f59_DefaultValue = 
{
	&t294_f59_FieldInfo, { (char*)&t294_f59_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f60_DefaultValueData = 56;
static Il2CppFieldDefaultValueEntry t294_f60_DefaultValue = 
{
	&t294_f60_FieldInfo, { (char*)&t294_f60_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f61_DefaultValueData = 57;
static Il2CppFieldDefaultValueEntry t294_f61_DefaultValue = 
{
	&t294_f61_FieldInfo, { (char*)&t294_f61_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f62_DefaultValueData = 33;
static Il2CppFieldDefaultValueEntry t294_f62_DefaultValue = 
{
	&t294_f62_FieldInfo, { (char*)&t294_f62_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f63_DefaultValueData = 34;
static Il2CppFieldDefaultValueEntry t294_f63_DefaultValue = 
{
	&t294_f63_FieldInfo, { (char*)&t294_f63_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f64_DefaultValueData = 35;
static Il2CppFieldDefaultValueEntry t294_f64_DefaultValue = 
{
	&t294_f64_FieldInfo, { (char*)&t294_f64_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f65_DefaultValueData = 36;
static Il2CppFieldDefaultValueEntry t294_f65_DefaultValue = 
{
	&t294_f65_FieldInfo, { (char*)&t294_f65_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f66_DefaultValueData = 38;
static Il2CppFieldDefaultValueEntry t294_f66_DefaultValue = 
{
	&t294_f66_FieldInfo, { (char*)&t294_f66_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f67_DefaultValueData = 39;
static Il2CppFieldDefaultValueEntry t294_f67_DefaultValue = 
{
	&t294_f67_FieldInfo, { (char*)&t294_f67_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f68_DefaultValueData = 40;
static Il2CppFieldDefaultValueEntry t294_f68_DefaultValue = 
{
	&t294_f68_FieldInfo, { (char*)&t294_f68_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f69_DefaultValueData = 41;
static Il2CppFieldDefaultValueEntry t294_f69_DefaultValue = 
{
	&t294_f69_FieldInfo, { (char*)&t294_f69_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f70_DefaultValueData = 42;
static Il2CppFieldDefaultValueEntry t294_f70_DefaultValue = 
{
	&t294_f70_FieldInfo, { (char*)&t294_f70_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f71_DefaultValueData = 43;
static Il2CppFieldDefaultValueEntry t294_f71_DefaultValue = 
{
	&t294_f71_FieldInfo, { (char*)&t294_f71_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f72_DefaultValueData = 44;
static Il2CppFieldDefaultValueEntry t294_f72_DefaultValue = 
{
	&t294_f72_FieldInfo, { (char*)&t294_f72_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f73_DefaultValueData = 45;
static Il2CppFieldDefaultValueEntry t294_f73_DefaultValue = 
{
	&t294_f73_FieldInfo, { (char*)&t294_f73_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f74_DefaultValueData = 46;
static Il2CppFieldDefaultValueEntry t294_f74_DefaultValue = 
{
	&t294_f74_FieldInfo, { (char*)&t294_f74_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f75_DefaultValueData = 47;
static Il2CppFieldDefaultValueEntry t294_f75_DefaultValue = 
{
	&t294_f75_FieldInfo, { (char*)&t294_f75_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f76_DefaultValueData = 58;
static Il2CppFieldDefaultValueEntry t294_f76_DefaultValue = 
{
	&t294_f76_FieldInfo, { (char*)&t294_f76_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f77_DefaultValueData = 59;
static Il2CppFieldDefaultValueEntry t294_f77_DefaultValue = 
{
	&t294_f77_FieldInfo, { (char*)&t294_f77_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f78_DefaultValueData = 60;
static Il2CppFieldDefaultValueEntry t294_f78_DefaultValue = 
{
	&t294_f78_FieldInfo, { (char*)&t294_f78_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f79_DefaultValueData = 61;
static Il2CppFieldDefaultValueEntry t294_f79_DefaultValue = 
{
	&t294_f79_FieldInfo, { (char*)&t294_f79_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f80_DefaultValueData = 62;
static Il2CppFieldDefaultValueEntry t294_f80_DefaultValue = 
{
	&t294_f80_FieldInfo, { (char*)&t294_f80_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f81_DefaultValueData = 63;
static Il2CppFieldDefaultValueEntry t294_f81_DefaultValue = 
{
	&t294_f81_FieldInfo, { (char*)&t294_f81_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f82_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t294_f82_DefaultValue = 
{
	&t294_f82_FieldInfo, { (char*)&t294_f82_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f83_DefaultValueData = 91;
static Il2CppFieldDefaultValueEntry t294_f83_DefaultValue = 
{
	&t294_f83_FieldInfo, { (char*)&t294_f83_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f84_DefaultValueData = 92;
static Il2CppFieldDefaultValueEntry t294_f84_DefaultValue = 
{
	&t294_f84_FieldInfo, { (char*)&t294_f84_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f85_DefaultValueData = 93;
static Il2CppFieldDefaultValueEntry t294_f85_DefaultValue = 
{
	&t294_f85_FieldInfo, { (char*)&t294_f85_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f86_DefaultValueData = 94;
static Il2CppFieldDefaultValueEntry t294_f86_DefaultValue = 
{
	&t294_f86_FieldInfo, { (char*)&t294_f86_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f87_DefaultValueData = 95;
static Il2CppFieldDefaultValueEntry t294_f87_DefaultValue = 
{
	&t294_f87_FieldInfo, { (char*)&t294_f87_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f88_DefaultValueData = 96;
static Il2CppFieldDefaultValueEntry t294_f88_DefaultValue = 
{
	&t294_f88_FieldInfo, { (char*)&t294_f88_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f89_DefaultValueData = 97;
static Il2CppFieldDefaultValueEntry t294_f89_DefaultValue = 
{
	&t294_f89_FieldInfo, { (char*)&t294_f89_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f90_DefaultValueData = 98;
static Il2CppFieldDefaultValueEntry t294_f90_DefaultValue = 
{
	&t294_f90_FieldInfo, { (char*)&t294_f90_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f91_DefaultValueData = 99;
static Il2CppFieldDefaultValueEntry t294_f91_DefaultValue = 
{
	&t294_f91_FieldInfo, { (char*)&t294_f91_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f92_DefaultValueData = 100;
static Il2CppFieldDefaultValueEntry t294_f92_DefaultValue = 
{
	&t294_f92_FieldInfo, { (char*)&t294_f92_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f93_DefaultValueData = 101;
static Il2CppFieldDefaultValueEntry t294_f93_DefaultValue = 
{
	&t294_f93_FieldInfo, { (char*)&t294_f93_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f94_DefaultValueData = 102;
static Il2CppFieldDefaultValueEntry t294_f94_DefaultValue = 
{
	&t294_f94_FieldInfo, { (char*)&t294_f94_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f95_DefaultValueData = 103;
static Il2CppFieldDefaultValueEntry t294_f95_DefaultValue = 
{
	&t294_f95_FieldInfo, { (char*)&t294_f95_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f96_DefaultValueData = 104;
static Il2CppFieldDefaultValueEntry t294_f96_DefaultValue = 
{
	&t294_f96_FieldInfo, { (char*)&t294_f96_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f97_DefaultValueData = 105;
static Il2CppFieldDefaultValueEntry t294_f97_DefaultValue = 
{
	&t294_f97_FieldInfo, { (char*)&t294_f97_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f98_DefaultValueData = 106;
static Il2CppFieldDefaultValueEntry t294_f98_DefaultValue = 
{
	&t294_f98_FieldInfo, { (char*)&t294_f98_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f99_DefaultValueData = 107;
static Il2CppFieldDefaultValueEntry t294_f99_DefaultValue = 
{
	&t294_f99_FieldInfo, { (char*)&t294_f99_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f100_DefaultValueData = 108;
static Il2CppFieldDefaultValueEntry t294_f100_DefaultValue = 
{
	&t294_f100_FieldInfo, { (char*)&t294_f100_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f101_DefaultValueData = 109;
static Il2CppFieldDefaultValueEntry t294_f101_DefaultValue = 
{
	&t294_f101_FieldInfo, { (char*)&t294_f101_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f102_DefaultValueData = 110;
static Il2CppFieldDefaultValueEntry t294_f102_DefaultValue = 
{
	&t294_f102_FieldInfo, { (char*)&t294_f102_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f103_DefaultValueData = 111;
static Il2CppFieldDefaultValueEntry t294_f103_DefaultValue = 
{
	&t294_f103_FieldInfo, { (char*)&t294_f103_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f104_DefaultValueData = 112;
static Il2CppFieldDefaultValueEntry t294_f104_DefaultValue = 
{
	&t294_f104_FieldInfo, { (char*)&t294_f104_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f105_DefaultValueData = 113;
static Il2CppFieldDefaultValueEntry t294_f105_DefaultValue = 
{
	&t294_f105_FieldInfo, { (char*)&t294_f105_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f106_DefaultValueData = 114;
static Il2CppFieldDefaultValueEntry t294_f106_DefaultValue = 
{
	&t294_f106_FieldInfo, { (char*)&t294_f106_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f107_DefaultValueData = 115;
static Il2CppFieldDefaultValueEntry t294_f107_DefaultValue = 
{
	&t294_f107_FieldInfo, { (char*)&t294_f107_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f108_DefaultValueData = 116;
static Il2CppFieldDefaultValueEntry t294_f108_DefaultValue = 
{
	&t294_f108_FieldInfo, { (char*)&t294_f108_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f109_DefaultValueData = 117;
static Il2CppFieldDefaultValueEntry t294_f109_DefaultValue = 
{
	&t294_f109_FieldInfo, { (char*)&t294_f109_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f110_DefaultValueData = 118;
static Il2CppFieldDefaultValueEntry t294_f110_DefaultValue = 
{
	&t294_f110_FieldInfo, { (char*)&t294_f110_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f111_DefaultValueData = 119;
static Il2CppFieldDefaultValueEntry t294_f111_DefaultValue = 
{
	&t294_f111_FieldInfo, { (char*)&t294_f111_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f112_DefaultValueData = 120;
static Il2CppFieldDefaultValueEntry t294_f112_DefaultValue = 
{
	&t294_f112_FieldInfo, { (char*)&t294_f112_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f113_DefaultValueData = 121;
static Il2CppFieldDefaultValueEntry t294_f113_DefaultValue = 
{
	&t294_f113_FieldInfo, { (char*)&t294_f113_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f114_DefaultValueData = 122;
static Il2CppFieldDefaultValueEntry t294_f114_DefaultValue = 
{
	&t294_f114_FieldInfo, { (char*)&t294_f114_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f115_DefaultValueData = 300;
static Il2CppFieldDefaultValueEntry t294_f115_DefaultValue = 
{
	&t294_f115_FieldInfo, { (char*)&t294_f115_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f116_DefaultValueData = 301;
static Il2CppFieldDefaultValueEntry t294_f116_DefaultValue = 
{
	&t294_f116_FieldInfo, { (char*)&t294_f116_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f117_DefaultValueData = 302;
static Il2CppFieldDefaultValueEntry t294_f117_DefaultValue = 
{
	&t294_f117_FieldInfo, { (char*)&t294_f117_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f118_DefaultValueData = 303;
static Il2CppFieldDefaultValueEntry t294_f118_DefaultValue = 
{
	&t294_f118_FieldInfo, { (char*)&t294_f118_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f119_DefaultValueData = 304;
static Il2CppFieldDefaultValueEntry t294_f119_DefaultValue = 
{
	&t294_f119_FieldInfo, { (char*)&t294_f119_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f120_DefaultValueData = 305;
static Il2CppFieldDefaultValueEntry t294_f120_DefaultValue = 
{
	&t294_f120_FieldInfo, { (char*)&t294_f120_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f121_DefaultValueData = 306;
static Il2CppFieldDefaultValueEntry t294_f121_DefaultValue = 
{
	&t294_f121_FieldInfo, { (char*)&t294_f121_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f122_DefaultValueData = 307;
static Il2CppFieldDefaultValueEntry t294_f122_DefaultValue = 
{
	&t294_f122_FieldInfo, { (char*)&t294_f122_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f123_DefaultValueData = 308;
static Il2CppFieldDefaultValueEntry t294_f123_DefaultValue = 
{
	&t294_f123_FieldInfo, { (char*)&t294_f123_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f124_DefaultValueData = 310;
static Il2CppFieldDefaultValueEntry t294_f124_DefaultValue = 
{
	&t294_f124_FieldInfo, { (char*)&t294_f124_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f125_DefaultValueData = 310;
static Il2CppFieldDefaultValueEntry t294_f125_DefaultValue = 
{
	&t294_f125_FieldInfo, { (char*)&t294_f125_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f126_DefaultValueData = 311;
static Il2CppFieldDefaultValueEntry t294_f126_DefaultValue = 
{
	&t294_f126_FieldInfo, { (char*)&t294_f126_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f127_DefaultValueData = 309;
static Il2CppFieldDefaultValueEntry t294_f127_DefaultValue = 
{
	&t294_f127_FieldInfo, { (char*)&t294_f127_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f128_DefaultValueData = 309;
static Il2CppFieldDefaultValueEntry t294_f128_DefaultValue = 
{
	&t294_f128_FieldInfo, { (char*)&t294_f128_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f129_DefaultValueData = 312;
static Il2CppFieldDefaultValueEntry t294_f129_DefaultValue = 
{
	&t294_f129_FieldInfo, { (char*)&t294_f129_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f130_DefaultValueData = 313;
static Il2CppFieldDefaultValueEntry t294_f130_DefaultValue = 
{
	&t294_f130_FieldInfo, { (char*)&t294_f130_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f131_DefaultValueData = 315;
static Il2CppFieldDefaultValueEntry t294_f131_DefaultValue = 
{
	&t294_f131_FieldInfo, { (char*)&t294_f131_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f132_DefaultValueData = 316;
static Il2CppFieldDefaultValueEntry t294_f132_DefaultValue = 
{
	&t294_f132_FieldInfo, { (char*)&t294_f132_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f133_DefaultValueData = 317;
static Il2CppFieldDefaultValueEntry t294_f133_DefaultValue = 
{
	&t294_f133_FieldInfo, { (char*)&t294_f133_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f134_DefaultValueData = 318;
static Il2CppFieldDefaultValueEntry t294_f134_DefaultValue = 
{
	&t294_f134_FieldInfo, { (char*)&t294_f134_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f135_DefaultValueData = 319;
static Il2CppFieldDefaultValueEntry t294_f135_DefaultValue = 
{
	&t294_f135_FieldInfo, { (char*)&t294_f135_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f136_DefaultValueData = 323;
static Il2CppFieldDefaultValueEntry t294_f136_DefaultValue = 
{
	&t294_f136_FieldInfo, { (char*)&t294_f136_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f137_DefaultValueData = 324;
static Il2CppFieldDefaultValueEntry t294_f137_DefaultValue = 
{
	&t294_f137_FieldInfo, { (char*)&t294_f137_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f138_DefaultValueData = 325;
static Il2CppFieldDefaultValueEntry t294_f138_DefaultValue = 
{
	&t294_f138_FieldInfo, { (char*)&t294_f138_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f139_DefaultValueData = 326;
static Il2CppFieldDefaultValueEntry t294_f139_DefaultValue = 
{
	&t294_f139_FieldInfo, { (char*)&t294_f139_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f140_DefaultValueData = 327;
static Il2CppFieldDefaultValueEntry t294_f140_DefaultValue = 
{
	&t294_f140_FieldInfo, { (char*)&t294_f140_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f141_DefaultValueData = 328;
static Il2CppFieldDefaultValueEntry t294_f141_DefaultValue = 
{
	&t294_f141_FieldInfo, { (char*)&t294_f141_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f142_DefaultValueData = 329;
static Il2CppFieldDefaultValueEntry t294_f142_DefaultValue = 
{
	&t294_f142_FieldInfo, { (char*)&t294_f142_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f143_DefaultValueData = 330;
static Il2CppFieldDefaultValueEntry t294_f143_DefaultValue = 
{
	&t294_f143_FieldInfo, { (char*)&t294_f143_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f144_DefaultValueData = 331;
static Il2CppFieldDefaultValueEntry t294_f144_DefaultValue = 
{
	&t294_f144_FieldInfo, { (char*)&t294_f144_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f145_DefaultValueData = 332;
static Il2CppFieldDefaultValueEntry t294_f145_DefaultValue = 
{
	&t294_f145_FieldInfo, { (char*)&t294_f145_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f146_DefaultValueData = 333;
static Il2CppFieldDefaultValueEntry t294_f146_DefaultValue = 
{
	&t294_f146_FieldInfo, { (char*)&t294_f146_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f147_DefaultValueData = 334;
static Il2CppFieldDefaultValueEntry t294_f147_DefaultValue = 
{
	&t294_f147_FieldInfo, { (char*)&t294_f147_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f148_DefaultValueData = 335;
static Il2CppFieldDefaultValueEntry t294_f148_DefaultValue = 
{
	&t294_f148_FieldInfo, { (char*)&t294_f148_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f149_DefaultValueData = 336;
static Il2CppFieldDefaultValueEntry t294_f149_DefaultValue = 
{
	&t294_f149_FieldInfo, { (char*)&t294_f149_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f150_DefaultValueData = 337;
static Il2CppFieldDefaultValueEntry t294_f150_DefaultValue = 
{
	&t294_f150_FieldInfo, { (char*)&t294_f150_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f151_DefaultValueData = 338;
static Il2CppFieldDefaultValueEntry t294_f151_DefaultValue = 
{
	&t294_f151_FieldInfo, { (char*)&t294_f151_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f152_DefaultValueData = 339;
static Il2CppFieldDefaultValueEntry t294_f152_DefaultValue = 
{
	&t294_f152_FieldInfo, { (char*)&t294_f152_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f153_DefaultValueData = 340;
static Il2CppFieldDefaultValueEntry t294_f153_DefaultValue = 
{
	&t294_f153_FieldInfo, { (char*)&t294_f153_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f154_DefaultValueData = 341;
static Il2CppFieldDefaultValueEntry t294_f154_DefaultValue = 
{
	&t294_f154_FieldInfo, { (char*)&t294_f154_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f155_DefaultValueData = 342;
static Il2CppFieldDefaultValueEntry t294_f155_DefaultValue = 
{
	&t294_f155_FieldInfo, { (char*)&t294_f155_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f156_DefaultValueData = 343;
static Il2CppFieldDefaultValueEntry t294_f156_DefaultValue = 
{
	&t294_f156_FieldInfo, { (char*)&t294_f156_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f157_DefaultValueData = 344;
static Il2CppFieldDefaultValueEntry t294_f157_DefaultValue = 
{
	&t294_f157_FieldInfo, { (char*)&t294_f157_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f158_DefaultValueData = 345;
static Il2CppFieldDefaultValueEntry t294_f158_DefaultValue = 
{
	&t294_f158_FieldInfo, { (char*)&t294_f158_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f159_DefaultValueData = 346;
static Il2CppFieldDefaultValueEntry t294_f159_DefaultValue = 
{
	&t294_f159_FieldInfo, { (char*)&t294_f159_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f160_DefaultValueData = 347;
static Il2CppFieldDefaultValueEntry t294_f160_DefaultValue = 
{
	&t294_f160_FieldInfo, { (char*)&t294_f160_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f161_DefaultValueData = 348;
static Il2CppFieldDefaultValueEntry t294_f161_DefaultValue = 
{
	&t294_f161_FieldInfo, { (char*)&t294_f161_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f162_DefaultValueData = 349;
static Il2CppFieldDefaultValueEntry t294_f162_DefaultValue = 
{
	&t294_f162_FieldInfo, { (char*)&t294_f162_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f163_DefaultValueData = 350;
static Il2CppFieldDefaultValueEntry t294_f163_DefaultValue = 
{
	&t294_f163_FieldInfo, { (char*)&t294_f163_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f164_DefaultValueData = 351;
static Il2CppFieldDefaultValueEntry t294_f164_DefaultValue = 
{
	&t294_f164_FieldInfo, { (char*)&t294_f164_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f165_DefaultValueData = 352;
static Il2CppFieldDefaultValueEntry t294_f165_DefaultValue = 
{
	&t294_f165_FieldInfo, { (char*)&t294_f165_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f166_DefaultValueData = 353;
static Il2CppFieldDefaultValueEntry t294_f166_DefaultValue = 
{
	&t294_f166_FieldInfo, { (char*)&t294_f166_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f167_DefaultValueData = 354;
static Il2CppFieldDefaultValueEntry t294_f167_DefaultValue = 
{
	&t294_f167_FieldInfo, { (char*)&t294_f167_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f168_DefaultValueData = 355;
static Il2CppFieldDefaultValueEntry t294_f168_DefaultValue = 
{
	&t294_f168_FieldInfo, { (char*)&t294_f168_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f169_DefaultValueData = 356;
static Il2CppFieldDefaultValueEntry t294_f169_DefaultValue = 
{
	&t294_f169_FieldInfo, { (char*)&t294_f169_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f170_DefaultValueData = 357;
static Il2CppFieldDefaultValueEntry t294_f170_DefaultValue = 
{
	&t294_f170_FieldInfo, { (char*)&t294_f170_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f171_DefaultValueData = 358;
static Il2CppFieldDefaultValueEntry t294_f171_DefaultValue = 
{
	&t294_f171_FieldInfo, { (char*)&t294_f171_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f172_DefaultValueData = 359;
static Il2CppFieldDefaultValueEntry t294_f172_DefaultValue = 
{
	&t294_f172_FieldInfo, { (char*)&t294_f172_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f173_DefaultValueData = 360;
static Il2CppFieldDefaultValueEntry t294_f173_DefaultValue = 
{
	&t294_f173_FieldInfo, { (char*)&t294_f173_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f174_DefaultValueData = 361;
static Il2CppFieldDefaultValueEntry t294_f174_DefaultValue = 
{
	&t294_f174_FieldInfo, { (char*)&t294_f174_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f175_DefaultValueData = 362;
static Il2CppFieldDefaultValueEntry t294_f175_DefaultValue = 
{
	&t294_f175_FieldInfo, { (char*)&t294_f175_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f176_DefaultValueData = 363;
static Il2CppFieldDefaultValueEntry t294_f176_DefaultValue = 
{
	&t294_f176_FieldInfo, { (char*)&t294_f176_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f177_DefaultValueData = 364;
static Il2CppFieldDefaultValueEntry t294_f177_DefaultValue = 
{
	&t294_f177_FieldInfo, { (char*)&t294_f177_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f178_DefaultValueData = 365;
static Il2CppFieldDefaultValueEntry t294_f178_DefaultValue = 
{
	&t294_f178_FieldInfo, { (char*)&t294_f178_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f179_DefaultValueData = 366;
static Il2CppFieldDefaultValueEntry t294_f179_DefaultValue = 
{
	&t294_f179_FieldInfo, { (char*)&t294_f179_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f180_DefaultValueData = 367;
static Il2CppFieldDefaultValueEntry t294_f180_DefaultValue = 
{
	&t294_f180_FieldInfo, { (char*)&t294_f180_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f181_DefaultValueData = 368;
static Il2CppFieldDefaultValueEntry t294_f181_DefaultValue = 
{
	&t294_f181_FieldInfo, { (char*)&t294_f181_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f182_DefaultValueData = 369;
static Il2CppFieldDefaultValueEntry t294_f182_DefaultValue = 
{
	&t294_f182_FieldInfo, { (char*)&t294_f182_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f183_DefaultValueData = 370;
static Il2CppFieldDefaultValueEntry t294_f183_DefaultValue = 
{
	&t294_f183_FieldInfo, { (char*)&t294_f183_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f184_DefaultValueData = 371;
static Il2CppFieldDefaultValueEntry t294_f184_DefaultValue = 
{
	&t294_f184_FieldInfo, { (char*)&t294_f184_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f185_DefaultValueData = 372;
static Il2CppFieldDefaultValueEntry t294_f185_DefaultValue = 
{
	&t294_f185_FieldInfo, { (char*)&t294_f185_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f186_DefaultValueData = 373;
static Il2CppFieldDefaultValueEntry t294_f186_DefaultValue = 
{
	&t294_f186_FieldInfo, { (char*)&t294_f186_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f187_DefaultValueData = 374;
static Il2CppFieldDefaultValueEntry t294_f187_DefaultValue = 
{
	&t294_f187_FieldInfo, { (char*)&t294_f187_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f188_DefaultValueData = 375;
static Il2CppFieldDefaultValueEntry t294_f188_DefaultValue = 
{
	&t294_f188_FieldInfo, { (char*)&t294_f188_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f189_DefaultValueData = 376;
static Il2CppFieldDefaultValueEntry t294_f189_DefaultValue = 
{
	&t294_f189_FieldInfo, { (char*)&t294_f189_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f190_DefaultValueData = 377;
static Il2CppFieldDefaultValueEntry t294_f190_DefaultValue = 
{
	&t294_f190_FieldInfo, { (char*)&t294_f190_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f191_DefaultValueData = 378;
static Il2CppFieldDefaultValueEntry t294_f191_DefaultValue = 
{
	&t294_f191_FieldInfo, { (char*)&t294_f191_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f192_DefaultValueData = 379;
static Il2CppFieldDefaultValueEntry t294_f192_DefaultValue = 
{
	&t294_f192_FieldInfo, { (char*)&t294_f192_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f193_DefaultValueData = 380;
static Il2CppFieldDefaultValueEntry t294_f193_DefaultValue = 
{
	&t294_f193_FieldInfo, { (char*)&t294_f193_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f194_DefaultValueData = 381;
static Il2CppFieldDefaultValueEntry t294_f194_DefaultValue = 
{
	&t294_f194_FieldInfo, { (char*)&t294_f194_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f195_DefaultValueData = 382;
static Il2CppFieldDefaultValueEntry t294_f195_DefaultValue = 
{
	&t294_f195_FieldInfo, { (char*)&t294_f195_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f196_DefaultValueData = 383;
static Il2CppFieldDefaultValueEntry t294_f196_DefaultValue = 
{
	&t294_f196_FieldInfo, { (char*)&t294_f196_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f197_DefaultValueData = 384;
static Il2CppFieldDefaultValueEntry t294_f197_DefaultValue = 
{
	&t294_f197_FieldInfo, { (char*)&t294_f197_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f198_DefaultValueData = 385;
static Il2CppFieldDefaultValueEntry t294_f198_DefaultValue = 
{
	&t294_f198_FieldInfo, { (char*)&t294_f198_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f199_DefaultValueData = 386;
static Il2CppFieldDefaultValueEntry t294_f199_DefaultValue = 
{
	&t294_f199_FieldInfo, { (char*)&t294_f199_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f200_DefaultValueData = 387;
static Il2CppFieldDefaultValueEntry t294_f200_DefaultValue = 
{
	&t294_f200_FieldInfo, { (char*)&t294_f200_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f201_DefaultValueData = 388;
static Il2CppFieldDefaultValueEntry t294_f201_DefaultValue = 
{
	&t294_f201_FieldInfo, { (char*)&t294_f201_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f202_DefaultValueData = 389;
static Il2CppFieldDefaultValueEntry t294_f202_DefaultValue = 
{
	&t294_f202_FieldInfo, { (char*)&t294_f202_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f203_DefaultValueData = 390;
static Il2CppFieldDefaultValueEntry t294_f203_DefaultValue = 
{
	&t294_f203_FieldInfo, { (char*)&t294_f203_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f204_DefaultValueData = 391;
static Il2CppFieldDefaultValueEntry t294_f204_DefaultValue = 
{
	&t294_f204_FieldInfo, { (char*)&t294_f204_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f205_DefaultValueData = 392;
static Il2CppFieldDefaultValueEntry t294_f205_DefaultValue = 
{
	&t294_f205_FieldInfo, { (char*)&t294_f205_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f206_DefaultValueData = 393;
static Il2CppFieldDefaultValueEntry t294_f206_DefaultValue = 
{
	&t294_f206_FieldInfo, { (char*)&t294_f206_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f207_DefaultValueData = 394;
static Il2CppFieldDefaultValueEntry t294_f207_DefaultValue = 
{
	&t294_f207_FieldInfo, { (char*)&t294_f207_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f208_DefaultValueData = 395;
static Il2CppFieldDefaultValueEntry t294_f208_DefaultValue = 
{
	&t294_f208_FieldInfo, { (char*)&t294_f208_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f209_DefaultValueData = 396;
static Il2CppFieldDefaultValueEntry t294_f209_DefaultValue = 
{
	&t294_f209_FieldInfo, { (char*)&t294_f209_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f210_DefaultValueData = 397;
static Il2CppFieldDefaultValueEntry t294_f210_DefaultValue = 
{
	&t294_f210_FieldInfo, { (char*)&t294_f210_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f211_DefaultValueData = 398;
static Il2CppFieldDefaultValueEntry t294_f211_DefaultValue = 
{
	&t294_f211_FieldInfo, { (char*)&t294_f211_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f212_DefaultValueData = 399;
static Il2CppFieldDefaultValueEntry t294_f212_DefaultValue = 
{
	&t294_f212_FieldInfo, { (char*)&t294_f212_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f213_DefaultValueData = 400;
static Il2CppFieldDefaultValueEntry t294_f213_DefaultValue = 
{
	&t294_f213_FieldInfo, { (char*)&t294_f213_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f214_DefaultValueData = 401;
static Il2CppFieldDefaultValueEntry t294_f214_DefaultValue = 
{
	&t294_f214_FieldInfo, { (char*)&t294_f214_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f215_DefaultValueData = 402;
static Il2CppFieldDefaultValueEntry t294_f215_DefaultValue = 
{
	&t294_f215_FieldInfo, { (char*)&t294_f215_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f216_DefaultValueData = 403;
static Il2CppFieldDefaultValueEntry t294_f216_DefaultValue = 
{
	&t294_f216_FieldInfo, { (char*)&t294_f216_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f217_DefaultValueData = 404;
static Il2CppFieldDefaultValueEntry t294_f217_DefaultValue = 
{
	&t294_f217_FieldInfo, { (char*)&t294_f217_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f218_DefaultValueData = 405;
static Il2CppFieldDefaultValueEntry t294_f218_DefaultValue = 
{
	&t294_f218_FieldInfo, { (char*)&t294_f218_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f219_DefaultValueData = 406;
static Il2CppFieldDefaultValueEntry t294_f219_DefaultValue = 
{
	&t294_f219_FieldInfo, { (char*)&t294_f219_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f220_DefaultValueData = 407;
static Il2CppFieldDefaultValueEntry t294_f220_DefaultValue = 
{
	&t294_f220_FieldInfo, { (char*)&t294_f220_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f221_DefaultValueData = 408;
static Il2CppFieldDefaultValueEntry t294_f221_DefaultValue = 
{
	&t294_f221_FieldInfo, { (char*)&t294_f221_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f222_DefaultValueData = 409;
static Il2CppFieldDefaultValueEntry t294_f222_DefaultValue = 
{
	&t294_f222_FieldInfo, { (char*)&t294_f222_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f223_DefaultValueData = 410;
static Il2CppFieldDefaultValueEntry t294_f223_DefaultValue = 
{
	&t294_f223_FieldInfo, { (char*)&t294_f223_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f224_DefaultValueData = 411;
static Il2CppFieldDefaultValueEntry t294_f224_DefaultValue = 
{
	&t294_f224_FieldInfo, { (char*)&t294_f224_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f225_DefaultValueData = 412;
static Il2CppFieldDefaultValueEntry t294_f225_DefaultValue = 
{
	&t294_f225_FieldInfo, { (char*)&t294_f225_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f226_DefaultValueData = 413;
static Il2CppFieldDefaultValueEntry t294_f226_DefaultValue = 
{
	&t294_f226_FieldInfo, { (char*)&t294_f226_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f227_DefaultValueData = 414;
static Il2CppFieldDefaultValueEntry t294_f227_DefaultValue = 
{
	&t294_f227_FieldInfo, { (char*)&t294_f227_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f228_DefaultValueData = 415;
static Il2CppFieldDefaultValueEntry t294_f228_DefaultValue = 
{
	&t294_f228_FieldInfo, { (char*)&t294_f228_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f229_DefaultValueData = 416;
static Il2CppFieldDefaultValueEntry t294_f229_DefaultValue = 
{
	&t294_f229_FieldInfo, { (char*)&t294_f229_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f230_DefaultValueData = 417;
static Il2CppFieldDefaultValueEntry t294_f230_DefaultValue = 
{
	&t294_f230_FieldInfo, { (char*)&t294_f230_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f231_DefaultValueData = 418;
static Il2CppFieldDefaultValueEntry t294_f231_DefaultValue = 
{
	&t294_f231_FieldInfo, { (char*)&t294_f231_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f232_DefaultValueData = 419;
static Il2CppFieldDefaultValueEntry t294_f232_DefaultValue = 
{
	&t294_f232_FieldInfo, { (char*)&t294_f232_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f233_DefaultValueData = 420;
static Il2CppFieldDefaultValueEntry t294_f233_DefaultValue = 
{
	&t294_f233_FieldInfo, { (char*)&t294_f233_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f234_DefaultValueData = 421;
static Il2CppFieldDefaultValueEntry t294_f234_DefaultValue = 
{
	&t294_f234_FieldInfo, { (char*)&t294_f234_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f235_DefaultValueData = 422;
static Il2CppFieldDefaultValueEntry t294_f235_DefaultValue = 
{
	&t294_f235_FieldInfo, { (char*)&t294_f235_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f236_DefaultValueData = 423;
static Il2CppFieldDefaultValueEntry t294_f236_DefaultValue = 
{
	&t294_f236_FieldInfo, { (char*)&t294_f236_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f237_DefaultValueData = 424;
static Il2CppFieldDefaultValueEntry t294_f237_DefaultValue = 
{
	&t294_f237_FieldInfo, { (char*)&t294_f237_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f238_DefaultValueData = 425;
static Il2CppFieldDefaultValueEntry t294_f238_DefaultValue = 
{
	&t294_f238_FieldInfo, { (char*)&t294_f238_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f239_DefaultValueData = 426;
static Il2CppFieldDefaultValueEntry t294_f239_DefaultValue = 
{
	&t294_f239_FieldInfo, { (char*)&t294_f239_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f240_DefaultValueData = 427;
static Il2CppFieldDefaultValueEntry t294_f240_DefaultValue = 
{
	&t294_f240_FieldInfo, { (char*)&t294_f240_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f241_DefaultValueData = 428;
static Il2CppFieldDefaultValueEntry t294_f241_DefaultValue = 
{
	&t294_f241_FieldInfo, { (char*)&t294_f241_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f242_DefaultValueData = 429;
static Il2CppFieldDefaultValueEntry t294_f242_DefaultValue = 
{
	&t294_f242_FieldInfo, { (char*)&t294_f242_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f243_DefaultValueData = 430;
static Il2CppFieldDefaultValueEntry t294_f243_DefaultValue = 
{
	&t294_f243_FieldInfo, { (char*)&t294_f243_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f244_DefaultValueData = 431;
static Il2CppFieldDefaultValueEntry t294_f244_DefaultValue = 
{
	&t294_f244_FieldInfo, { (char*)&t294_f244_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f245_DefaultValueData = 432;
static Il2CppFieldDefaultValueEntry t294_f245_DefaultValue = 
{
	&t294_f245_FieldInfo, { (char*)&t294_f245_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f246_DefaultValueData = 433;
static Il2CppFieldDefaultValueEntry t294_f246_DefaultValue = 
{
	&t294_f246_FieldInfo, { (char*)&t294_f246_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f247_DefaultValueData = 434;
static Il2CppFieldDefaultValueEntry t294_f247_DefaultValue = 
{
	&t294_f247_FieldInfo, { (char*)&t294_f247_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f248_DefaultValueData = 435;
static Il2CppFieldDefaultValueEntry t294_f248_DefaultValue = 
{
	&t294_f248_FieldInfo, { (char*)&t294_f248_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f249_DefaultValueData = 436;
static Il2CppFieldDefaultValueEntry t294_f249_DefaultValue = 
{
	&t294_f249_FieldInfo, { (char*)&t294_f249_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f250_DefaultValueData = 437;
static Il2CppFieldDefaultValueEntry t294_f250_DefaultValue = 
{
	&t294_f250_FieldInfo, { (char*)&t294_f250_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f251_DefaultValueData = 438;
static Il2CppFieldDefaultValueEntry t294_f251_DefaultValue = 
{
	&t294_f251_FieldInfo, { (char*)&t294_f251_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f252_DefaultValueData = 439;
static Il2CppFieldDefaultValueEntry t294_f252_DefaultValue = 
{
	&t294_f252_FieldInfo, { (char*)&t294_f252_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f253_DefaultValueData = 440;
static Il2CppFieldDefaultValueEntry t294_f253_DefaultValue = 
{
	&t294_f253_FieldInfo, { (char*)&t294_f253_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f254_DefaultValueData = 441;
static Il2CppFieldDefaultValueEntry t294_f254_DefaultValue = 
{
	&t294_f254_FieldInfo, { (char*)&t294_f254_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f255_DefaultValueData = 442;
static Il2CppFieldDefaultValueEntry t294_f255_DefaultValue = 
{
	&t294_f255_FieldInfo, { (char*)&t294_f255_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f256_DefaultValueData = 443;
static Il2CppFieldDefaultValueEntry t294_f256_DefaultValue = 
{
	&t294_f256_FieldInfo, { (char*)&t294_f256_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f257_DefaultValueData = 444;
static Il2CppFieldDefaultValueEntry t294_f257_DefaultValue = 
{
	&t294_f257_FieldInfo, { (char*)&t294_f257_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f258_DefaultValueData = 445;
static Il2CppFieldDefaultValueEntry t294_f258_DefaultValue = 
{
	&t294_f258_FieldInfo, { (char*)&t294_f258_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f259_DefaultValueData = 446;
static Il2CppFieldDefaultValueEntry t294_f259_DefaultValue = 
{
	&t294_f259_FieldInfo, { (char*)&t294_f259_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f260_DefaultValueData = 447;
static Il2CppFieldDefaultValueEntry t294_f260_DefaultValue = 
{
	&t294_f260_FieldInfo, { (char*)&t294_f260_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f261_DefaultValueData = 448;
static Il2CppFieldDefaultValueEntry t294_f261_DefaultValue = 
{
	&t294_f261_FieldInfo, { (char*)&t294_f261_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f262_DefaultValueData = 449;
static Il2CppFieldDefaultValueEntry t294_f262_DefaultValue = 
{
	&t294_f262_FieldInfo, { (char*)&t294_f262_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f263_DefaultValueData = 450;
static Il2CppFieldDefaultValueEntry t294_f263_DefaultValue = 
{
	&t294_f263_FieldInfo, { (char*)&t294_f263_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f264_DefaultValueData = 451;
static Il2CppFieldDefaultValueEntry t294_f264_DefaultValue = 
{
	&t294_f264_FieldInfo, { (char*)&t294_f264_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f265_DefaultValueData = 452;
static Il2CppFieldDefaultValueEntry t294_f265_DefaultValue = 
{
	&t294_f265_FieldInfo, { (char*)&t294_f265_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f266_DefaultValueData = 453;
static Il2CppFieldDefaultValueEntry t294_f266_DefaultValue = 
{
	&t294_f266_FieldInfo, { (char*)&t294_f266_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f267_DefaultValueData = 454;
static Il2CppFieldDefaultValueEntry t294_f267_DefaultValue = 
{
	&t294_f267_FieldInfo, { (char*)&t294_f267_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f268_DefaultValueData = 455;
static Il2CppFieldDefaultValueEntry t294_f268_DefaultValue = 
{
	&t294_f268_FieldInfo, { (char*)&t294_f268_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f269_DefaultValueData = 456;
static Il2CppFieldDefaultValueEntry t294_f269_DefaultValue = 
{
	&t294_f269_FieldInfo, { (char*)&t294_f269_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f270_DefaultValueData = 457;
static Il2CppFieldDefaultValueEntry t294_f270_DefaultValue = 
{
	&t294_f270_FieldInfo, { (char*)&t294_f270_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f271_DefaultValueData = 458;
static Il2CppFieldDefaultValueEntry t294_f271_DefaultValue = 
{
	&t294_f271_FieldInfo, { (char*)&t294_f271_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f272_DefaultValueData = 459;
static Il2CppFieldDefaultValueEntry t294_f272_DefaultValue = 
{
	&t294_f272_FieldInfo, { (char*)&t294_f272_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f273_DefaultValueData = 460;
static Il2CppFieldDefaultValueEntry t294_f273_DefaultValue = 
{
	&t294_f273_FieldInfo, { (char*)&t294_f273_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f274_DefaultValueData = 461;
static Il2CppFieldDefaultValueEntry t294_f274_DefaultValue = 
{
	&t294_f274_FieldInfo, { (char*)&t294_f274_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f275_DefaultValueData = 462;
static Il2CppFieldDefaultValueEntry t294_f275_DefaultValue = 
{
	&t294_f275_FieldInfo, { (char*)&t294_f275_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f276_DefaultValueData = 463;
static Il2CppFieldDefaultValueEntry t294_f276_DefaultValue = 
{
	&t294_f276_FieldInfo, { (char*)&t294_f276_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f277_DefaultValueData = 464;
static Il2CppFieldDefaultValueEntry t294_f277_DefaultValue = 
{
	&t294_f277_FieldInfo, { (char*)&t294_f277_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f278_DefaultValueData = 465;
static Il2CppFieldDefaultValueEntry t294_f278_DefaultValue = 
{
	&t294_f278_FieldInfo, { (char*)&t294_f278_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f279_DefaultValueData = 466;
static Il2CppFieldDefaultValueEntry t294_f279_DefaultValue = 
{
	&t294_f279_FieldInfo, { (char*)&t294_f279_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f280_DefaultValueData = 467;
static Il2CppFieldDefaultValueEntry t294_f280_DefaultValue = 
{
	&t294_f280_FieldInfo, { (char*)&t294_f280_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f281_DefaultValueData = 468;
static Il2CppFieldDefaultValueEntry t294_f281_DefaultValue = 
{
	&t294_f281_FieldInfo, { (char*)&t294_f281_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f282_DefaultValueData = 469;
static Il2CppFieldDefaultValueEntry t294_f282_DefaultValue = 
{
	&t294_f282_FieldInfo, { (char*)&t294_f282_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f283_DefaultValueData = 470;
static Il2CppFieldDefaultValueEntry t294_f283_DefaultValue = 
{
	&t294_f283_FieldInfo, { (char*)&t294_f283_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f284_DefaultValueData = 471;
static Il2CppFieldDefaultValueEntry t294_f284_DefaultValue = 
{
	&t294_f284_FieldInfo, { (char*)&t294_f284_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f285_DefaultValueData = 472;
static Il2CppFieldDefaultValueEntry t294_f285_DefaultValue = 
{
	&t294_f285_FieldInfo, { (char*)&t294_f285_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f286_DefaultValueData = 473;
static Il2CppFieldDefaultValueEntry t294_f286_DefaultValue = 
{
	&t294_f286_FieldInfo, { (char*)&t294_f286_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f287_DefaultValueData = 474;
static Il2CppFieldDefaultValueEntry t294_f287_DefaultValue = 
{
	&t294_f287_FieldInfo, { (char*)&t294_f287_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f288_DefaultValueData = 475;
static Il2CppFieldDefaultValueEntry t294_f288_DefaultValue = 
{
	&t294_f288_FieldInfo, { (char*)&t294_f288_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f289_DefaultValueData = 476;
static Il2CppFieldDefaultValueEntry t294_f289_DefaultValue = 
{
	&t294_f289_FieldInfo, { (char*)&t294_f289_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f290_DefaultValueData = 477;
static Il2CppFieldDefaultValueEntry t294_f290_DefaultValue = 
{
	&t294_f290_FieldInfo, { (char*)&t294_f290_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f291_DefaultValueData = 478;
static Il2CppFieldDefaultValueEntry t294_f291_DefaultValue = 
{
	&t294_f291_FieldInfo, { (char*)&t294_f291_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f292_DefaultValueData = 479;
static Il2CppFieldDefaultValueEntry t294_f292_DefaultValue = 
{
	&t294_f292_FieldInfo, { (char*)&t294_f292_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f293_DefaultValueData = 480;
static Il2CppFieldDefaultValueEntry t294_f293_DefaultValue = 
{
	&t294_f293_FieldInfo, { (char*)&t294_f293_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f294_DefaultValueData = 481;
static Il2CppFieldDefaultValueEntry t294_f294_DefaultValue = 
{
	&t294_f294_FieldInfo, { (char*)&t294_f294_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f295_DefaultValueData = 482;
static Il2CppFieldDefaultValueEntry t294_f295_DefaultValue = 
{
	&t294_f295_FieldInfo, { (char*)&t294_f295_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f296_DefaultValueData = 483;
static Il2CppFieldDefaultValueEntry t294_f296_DefaultValue = 
{
	&t294_f296_FieldInfo, { (char*)&t294_f296_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f297_DefaultValueData = 484;
static Il2CppFieldDefaultValueEntry t294_f297_DefaultValue = 
{
	&t294_f297_FieldInfo, { (char*)&t294_f297_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f298_DefaultValueData = 485;
static Il2CppFieldDefaultValueEntry t294_f298_DefaultValue = 
{
	&t294_f298_FieldInfo, { (char*)&t294_f298_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f299_DefaultValueData = 486;
static Il2CppFieldDefaultValueEntry t294_f299_DefaultValue = 
{
	&t294_f299_FieldInfo, { (char*)&t294_f299_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f300_DefaultValueData = 487;
static Il2CppFieldDefaultValueEntry t294_f300_DefaultValue = 
{
	&t294_f300_FieldInfo, { (char*)&t294_f300_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f301_DefaultValueData = 488;
static Il2CppFieldDefaultValueEntry t294_f301_DefaultValue = 
{
	&t294_f301_FieldInfo, { (char*)&t294_f301_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f302_DefaultValueData = 489;
static Il2CppFieldDefaultValueEntry t294_f302_DefaultValue = 
{
	&t294_f302_FieldInfo, { (char*)&t294_f302_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f303_DefaultValueData = 490;
static Il2CppFieldDefaultValueEntry t294_f303_DefaultValue = 
{
	&t294_f303_FieldInfo, { (char*)&t294_f303_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f304_DefaultValueData = 491;
static Il2CppFieldDefaultValueEntry t294_f304_DefaultValue = 
{
	&t294_f304_FieldInfo, { (char*)&t294_f304_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f305_DefaultValueData = 492;
static Il2CppFieldDefaultValueEntry t294_f305_DefaultValue = 
{
	&t294_f305_FieldInfo, { (char*)&t294_f305_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f306_DefaultValueData = 493;
static Il2CppFieldDefaultValueEntry t294_f306_DefaultValue = 
{
	&t294_f306_FieldInfo, { (char*)&t294_f306_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f307_DefaultValueData = 494;
static Il2CppFieldDefaultValueEntry t294_f307_DefaultValue = 
{
	&t294_f307_FieldInfo, { (char*)&t294_f307_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f308_DefaultValueData = 495;
static Il2CppFieldDefaultValueEntry t294_f308_DefaultValue = 
{
	&t294_f308_FieldInfo, { (char*)&t294_f308_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f309_DefaultValueData = 496;
static Il2CppFieldDefaultValueEntry t294_f309_DefaultValue = 
{
	&t294_f309_FieldInfo, { (char*)&t294_f309_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f310_DefaultValueData = 497;
static Il2CppFieldDefaultValueEntry t294_f310_DefaultValue = 
{
	&t294_f310_FieldInfo, { (char*)&t294_f310_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f311_DefaultValueData = 498;
static Il2CppFieldDefaultValueEntry t294_f311_DefaultValue = 
{
	&t294_f311_FieldInfo, { (char*)&t294_f311_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f312_DefaultValueData = 499;
static Il2CppFieldDefaultValueEntry t294_f312_DefaultValue = 
{
	&t294_f312_FieldInfo, { (char*)&t294_f312_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f313_DefaultValueData = 500;
static Il2CppFieldDefaultValueEntry t294_f313_DefaultValue = 
{
	&t294_f313_FieldInfo, { (char*)&t294_f313_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f314_DefaultValueData = 501;
static Il2CppFieldDefaultValueEntry t294_f314_DefaultValue = 
{
	&t294_f314_FieldInfo, { (char*)&t294_f314_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f315_DefaultValueData = 502;
static Il2CppFieldDefaultValueEntry t294_f315_DefaultValue = 
{
	&t294_f315_FieldInfo, { (char*)&t294_f315_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f316_DefaultValueData = 503;
static Il2CppFieldDefaultValueEntry t294_f316_DefaultValue = 
{
	&t294_f316_FieldInfo, { (char*)&t294_f316_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f317_DefaultValueData = 504;
static Il2CppFieldDefaultValueEntry t294_f317_DefaultValue = 
{
	&t294_f317_FieldInfo, { (char*)&t294_f317_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f318_DefaultValueData = 505;
static Il2CppFieldDefaultValueEntry t294_f318_DefaultValue = 
{
	&t294_f318_FieldInfo, { (char*)&t294_f318_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f319_DefaultValueData = 506;
static Il2CppFieldDefaultValueEntry t294_f319_DefaultValue = 
{
	&t294_f319_FieldInfo, { (char*)&t294_f319_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f320_DefaultValueData = 507;
static Il2CppFieldDefaultValueEntry t294_f320_DefaultValue = 
{
	&t294_f320_FieldInfo, { (char*)&t294_f320_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f321_DefaultValueData = 508;
static Il2CppFieldDefaultValueEntry t294_f321_DefaultValue = 
{
	&t294_f321_FieldInfo, { (char*)&t294_f321_DefaultValueData, &t125_0_0_0 }};
static const int32_t t294_f322_DefaultValueData = 509;
static Il2CppFieldDefaultValueEntry t294_f322_DefaultValue = 
{
	&t294_f322_FieldInfo, { (char*)&t294_f322_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t294_FDVs[] = 
{
	&t294_f2_DefaultValue,
	&t294_f3_DefaultValue,
	&t294_f4_DefaultValue,
	&t294_f5_DefaultValue,
	&t294_f6_DefaultValue,
	&t294_f7_DefaultValue,
	&t294_f8_DefaultValue,
	&t294_f9_DefaultValue,
	&t294_f10_DefaultValue,
	&t294_f11_DefaultValue,
	&t294_f12_DefaultValue,
	&t294_f13_DefaultValue,
	&t294_f14_DefaultValue,
	&t294_f15_DefaultValue,
	&t294_f16_DefaultValue,
	&t294_f17_DefaultValue,
	&t294_f18_DefaultValue,
	&t294_f19_DefaultValue,
	&t294_f20_DefaultValue,
	&t294_f21_DefaultValue,
	&t294_f22_DefaultValue,
	&t294_f23_DefaultValue,
	&t294_f24_DefaultValue,
	&t294_f25_DefaultValue,
	&t294_f26_DefaultValue,
	&t294_f27_DefaultValue,
	&t294_f28_DefaultValue,
	&t294_f29_DefaultValue,
	&t294_f30_DefaultValue,
	&t294_f31_DefaultValue,
	&t294_f32_DefaultValue,
	&t294_f33_DefaultValue,
	&t294_f34_DefaultValue,
	&t294_f35_DefaultValue,
	&t294_f36_DefaultValue,
	&t294_f37_DefaultValue,
	&t294_f38_DefaultValue,
	&t294_f39_DefaultValue,
	&t294_f40_DefaultValue,
	&t294_f41_DefaultValue,
	&t294_f42_DefaultValue,
	&t294_f43_DefaultValue,
	&t294_f44_DefaultValue,
	&t294_f45_DefaultValue,
	&t294_f46_DefaultValue,
	&t294_f47_DefaultValue,
	&t294_f48_DefaultValue,
	&t294_f49_DefaultValue,
	&t294_f50_DefaultValue,
	&t294_f51_DefaultValue,
	&t294_f52_DefaultValue,
	&t294_f53_DefaultValue,
	&t294_f54_DefaultValue,
	&t294_f55_DefaultValue,
	&t294_f56_DefaultValue,
	&t294_f57_DefaultValue,
	&t294_f58_DefaultValue,
	&t294_f59_DefaultValue,
	&t294_f60_DefaultValue,
	&t294_f61_DefaultValue,
	&t294_f62_DefaultValue,
	&t294_f63_DefaultValue,
	&t294_f64_DefaultValue,
	&t294_f65_DefaultValue,
	&t294_f66_DefaultValue,
	&t294_f67_DefaultValue,
	&t294_f68_DefaultValue,
	&t294_f69_DefaultValue,
	&t294_f70_DefaultValue,
	&t294_f71_DefaultValue,
	&t294_f72_DefaultValue,
	&t294_f73_DefaultValue,
	&t294_f74_DefaultValue,
	&t294_f75_DefaultValue,
	&t294_f76_DefaultValue,
	&t294_f77_DefaultValue,
	&t294_f78_DefaultValue,
	&t294_f79_DefaultValue,
	&t294_f80_DefaultValue,
	&t294_f81_DefaultValue,
	&t294_f82_DefaultValue,
	&t294_f83_DefaultValue,
	&t294_f84_DefaultValue,
	&t294_f85_DefaultValue,
	&t294_f86_DefaultValue,
	&t294_f87_DefaultValue,
	&t294_f88_DefaultValue,
	&t294_f89_DefaultValue,
	&t294_f90_DefaultValue,
	&t294_f91_DefaultValue,
	&t294_f92_DefaultValue,
	&t294_f93_DefaultValue,
	&t294_f94_DefaultValue,
	&t294_f95_DefaultValue,
	&t294_f96_DefaultValue,
	&t294_f97_DefaultValue,
	&t294_f98_DefaultValue,
	&t294_f99_DefaultValue,
	&t294_f100_DefaultValue,
	&t294_f101_DefaultValue,
	&t294_f102_DefaultValue,
	&t294_f103_DefaultValue,
	&t294_f104_DefaultValue,
	&t294_f105_DefaultValue,
	&t294_f106_DefaultValue,
	&t294_f107_DefaultValue,
	&t294_f108_DefaultValue,
	&t294_f109_DefaultValue,
	&t294_f110_DefaultValue,
	&t294_f111_DefaultValue,
	&t294_f112_DefaultValue,
	&t294_f113_DefaultValue,
	&t294_f114_DefaultValue,
	&t294_f115_DefaultValue,
	&t294_f116_DefaultValue,
	&t294_f117_DefaultValue,
	&t294_f118_DefaultValue,
	&t294_f119_DefaultValue,
	&t294_f120_DefaultValue,
	&t294_f121_DefaultValue,
	&t294_f122_DefaultValue,
	&t294_f123_DefaultValue,
	&t294_f124_DefaultValue,
	&t294_f125_DefaultValue,
	&t294_f126_DefaultValue,
	&t294_f127_DefaultValue,
	&t294_f128_DefaultValue,
	&t294_f129_DefaultValue,
	&t294_f130_DefaultValue,
	&t294_f131_DefaultValue,
	&t294_f132_DefaultValue,
	&t294_f133_DefaultValue,
	&t294_f134_DefaultValue,
	&t294_f135_DefaultValue,
	&t294_f136_DefaultValue,
	&t294_f137_DefaultValue,
	&t294_f138_DefaultValue,
	&t294_f139_DefaultValue,
	&t294_f140_DefaultValue,
	&t294_f141_DefaultValue,
	&t294_f142_DefaultValue,
	&t294_f143_DefaultValue,
	&t294_f144_DefaultValue,
	&t294_f145_DefaultValue,
	&t294_f146_DefaultValue,
	&t294_f147_DefaultValue,
	&t294_f148_DefaultValue,
	&t294_f149_DefaultValue,
	&t294_f150_DefaultValue,
	&t294_f151_DefaultValue,
	&t294_f152_DefaultValue,
	&t294_f153_DefaultValue,
	&t294_f154_DefaultValue,
	&t294_f155_DefaultValue,
	&t294_f156_DefaultValue,
	&t294_f157_DefaultValue,
	&t294_f158_DefaultValue,
	&t294_f159_DefaultValue,
	&t294_f160_DefaultValue,
	&t294_f161_DefaultValue,
	&t294_f162_DefaultValue,
	&t294_f163_DefaultValue,
	&t294_f164_DefaultValue,
	&t294_f165_DefaultValue,
	&t294_f166_DefaultValue,
	&t294_f167_DefaultValue,
	&t294_f168_DefaultValue,
	&t294_f169_DefaultValue,
	&t294_f170_DefaultValue,
	&t294_f171_DefaultValue,
	&t294_f172_DefaultValue,
	&t294_f173_DefaultValue,
	&t294_f174_DefaultValue,
	&t294_f175_DefaultValue,
	&t294_f176_DefaultValue,
	&t294_f177_DefaultValue,
	&t294_f178_DefaultValue,
	&t294_f179_DefaultValue,
	&t294_f180_DefaultValue,
	&t294_f181_DefaultValue,
	&t294_f182_DefaultValue,
	&t294_f183_DefaultValue,
	&t294_f184_DefaultValue,
	&t294_f185_DefaultValue,
	&t294_f186_DefaultValue,
	&t294_f187_DefaultValue,
	&t294_f188_DefaultValue,
	&t294_f189_DefaultValue,
	&t294_f190_DefaultValue,
	&t294_f191_DefaultValue,
	&t294_f192_DefaultValue,
	&t294_f193_DefaultValue,
	&t294_f194_DefaultValue,
	&t294_f195_DefaultValue,
	&t294_f196_DefaultValue,
	&t294_f197_DefaultValue,
	&t294_f198_DefaultValue,
	&t294_f199_DefaultValue,
	&t294_f200_DefaultValue,
	&t294_f201_DefaultValue,
	&t294_f202_DefaultValue,
	&t294_f203_DefaultValue,
	&t294_f204_DefaultValue,
	&t294_f205_DefaultValue,
	&t294_f206_DefaultValue,
	&t294_f207_DefaultValue,
	&t294_f208_DefaultValue,
	&t294_f209_DefaultValue,
	&t294_f210_DefaultValue,
	&t294_f211_DefaultValue,
	&t294_f212_DefaultValue,
	&t294_f213_DefaultValue,
	&t294_f214_DefaultValue,
	&t294_f215_DefaultValue,
	&t294_f216_DefaultValue,
	&t294_f217_DefaultValue,
	&t294_f218_DefaultValue,
	&t294_f219_DefaultValue,
	&t294_f220_DefaultValue,
	&t294_f221_DefaultValue,
	&t294_f222_DefaultValue,
	&t294_f223_DefaultValue,
	&t294_f224_DefaultValue,
	&t294_f225_DefaultValue,
	&t294_f226_DefaultValue,
	&t294_f227_DefaultValue,
	&t294_f228_DefaultValue,
	&t294_f229_DefaultValue,
	&t294_f230_DefaultValue,
	&t294_f231_DefaultValue,
	&t294_f232_DefaultValue,
	&t294_f233_DefaultValue,
	&t294_f234_DefaultValue,
	&t294_f235_DefaultValue,
	&t294_f236_DefaultValue,
	&t294_f237_DefaultValue,
	&t294_f238_DefaultValue,
	&t294_f239_DefaultValue,
	&t294_f240_DefaultValue,
	&t294_f241_DefaultValue,
	&t294_f242_DefaultValue,
	&t294_f243_DefaultValue,
	&t294_f244_DefaultValue,
	&t294_f245_DefaultValue,
	&t294_f246_DefaultValue,
	&t294_f247_DefaultValue,
	&t294_f248_DefaultValue,
	&t294_f249_DefaultValue,
	&t294_f250_DefaultValue,
	&t294_f251_DefaultValue,
	&t294_f252_DefaultValue,
	&t294_f253_DefaultValue,
	&t294_f254_DefaultValue,
	&t294_f255_DefaultValue,
	&t294_f256_DefaultValue,
	&t294_f257_DefaultValue,
	&t294_f258_DefaultValue,
	&t294_f259_DefaultValue,
	&t294_f260_DefaultValue,
	&t294_f261_DefaultValue,
	&t294_f262_DefaultValue,
	&t294_f263_DefaultValue,
	&t294_f264_DefaultValue,
	&t294_f265_DefaultValue,
	&t294_f266_DefaultValue,
	&t294_f267_DefaultValue,
	&t294_f268_DefaultValue,
	&t294_f269_DefaultValue,
	&t294_f270_DefaultValue,
	&t294_f271_DefaultValue,
	&t294_f272_DefaultValue,
	&t294_f273_DefaultValue,
	&t294_f274_DefaultValue,
	&t294_f275_DefaultValue,
	&t294_f276_DefaultValue,
	&t294_f277_DefaultValue,
	&t294_f278_DefaultValue,
	&t294_f279_DefaultValue,
	&t294_f280_DefaultValue,
	&t294_f281_DefaultValue,
	&t294_f282_DefaultValue,
	&t294_f283_DefaultValue,
	&t294_f284_DefaultValue,
	&t294_f285_DefaultValue,
	&t294_f286_DefaultValue,
	&t294_f287_DefaultValue,
	&t294_f288_DefaultValue,
	&t294_f289_DefaultValue,
	&t294_f290_DefaultValue,
	&t294_f291_DefaultValue,
	&t294_f292_DefaultValue,
	&t294_f293_DefaultValue,
	&t294_f294_DefaultValue,
	&t294_f295_DefaultValue,
	&t294_f296_DefaultValue,
	&t294_f297_DefaultValue,
	&t294_f298_DefaultValue,
	&t294_f299_DefaultValue,
	&t294_f300_DefaultValue,
	&t294_f301_DefaultValue,
	&t294_f302_DefaultValue,
	&t294_f303_DefaultValue,
	&t294_f304_DefaultValue,
	&t294_f305_DefaultValue,
	&t294_f306_DefaultValue,
	&t294_f307_DefaultValue,
	&t294_f308_DefaultValue,
	&t294_f309_DefaultValue,
	&t294_f310_DefaultValue,
	&t294_f311_DefaultValue,
	&t294_f312_DefaultValue,
	&t294_f313_DefaultValue,
	&t294_f314_DefaultValue,
	&t294_f315_DefaultValue,
	&t294_f316_DefaultValue,
	&t294_f317_DefaultValue,
	&t294_f318_DefaultValue,
	&t294_f319_DefaultValue,
	&t294_f320_DefaultValue,
	&t294_f321_DefaultValue,
	&t294_f322_DefaultValue,
	NULL
};
static Il2CppMethodReference t294_VT[] =
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
static bool t294_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t294_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t294_0_0_0;
extern Il2CppType t294_1_0_0;
const Il2CppTypeDefinitionMetadata t294_DM = 
{
	NULL, NULL, NULL, t294_IOs, &t8_0_0_0, t294_VT, t294_VTIGM, NULL};
TypeInfo t294_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "KeyCode", "UnityEngine", t294_MIs, NULL, t294_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t294_0_0_0, &t294_1_0_0, &t294_DM, NULL, NULL, NULL, t294_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t294)+ sizeof (Il2CppObject), sizeof (t294)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 257, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 322, 0, 0, 23, 0, 3};
#include "t596.h"
// Metadata Definition UnityEngine.EventType
extern TypeInfo t596_TI;
#include "t596MD.h"
static MethodInfo* t596_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t596_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t596_TI, offsetof(t596, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f2_FieldInfo = 
{
	"MouseDown", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f3_FieldInfo = 
{
	"MouseUp", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f4_FieldInfo = 
{
	"MouseMove", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f5_FieldInfo = 
{
	"MouseDrag", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f6_FieldInfo = 
{
	"KeyDown", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f7_FieldInfo = 
{
	"KeyUp", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f8_FieldInfo = 
{
	"ScrollWheel", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f9_FieldInfo = 
{
	"Repaint", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f10_FieldInfo = 
{
	"Layout", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f11_FieldInfo = 
{
	"DragUpdated", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f12_FieldInfo = 
{
	"DragPerform", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f13_FieldInfo = 
{
	"DragExited", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f14_FieldInfo = 
{
	"Ignore", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f15_FieldInfo = 
{
	"Used", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f16_FieldInfo = 
{
	"ValidateCommand", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f17_FieldInfo = 
{
	"ExecuteCommand", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f18_FieldInfo = 
{
	"ContextClick", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f19_FieldInfo = 
{
	"mouseDown", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f20_FieldInfo = 
{
	"mouseUp", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f21_FieldInfo = 
{
	"mouseMove", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f22_FieldInfo = 
{
	"mouseDrag", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f23_FieldInfo = 
{
	"keyDown", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f24_FieldInfo = 
{
	"keyUp", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f25_FieldInfo = 
{
	"scrollWheel", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f26_FieldInfo = 
{
	"repaint", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f27_FieldInfo = 
{
	"layout", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f28_FieldInfo = 
{
	"dragUpdated", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f29_FieldInfo = 
{
	"dragPerform", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f30_FieldInfo = 
{
	"ignore", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t596_0_0_32854;
FieldInfo t596_f31_FieldInfo = 
{
	"used", &t596_0_0_32854, &t596_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t596_FIs[] =
{
	&t596_f1_FieldInfo,
	&t596_f2_FieldInfo,
	&t596_f3_FieldInfo,
	&t596_f4_FieldInfo,
	&t596_f5_FieldInfo,
	&t596_f6_FieldInfo,
	&t596_f7_FieldInfo,
	&t596_f8_FieldInfo,
	&t596_f9_FieldInfo,
	&t596_f10_FieldInfo,
	&t596_f11_FieldInfo,
	&t596_f12_FieldInfo,
	&t596_f13_FieldInfo,
	&t596_f14_FieldInfo,
	&t596_f15_FieldInfo,
	&t596_f16_FieldInfo,
	&t596_f17_FieldInfo,
	&t596_f18_FieldInfo,
	&t596_f19_FieldInfo,
	&t596_f20_FieldInfo,
	&t596_f21_FieldInfo,
	&t596_f22_FieldInfo,
	&t596_f23_FieldInfo,
	&t596_f24_FieldInfo,
	&t596_f25_FieldInfo,
	&t596_f26_FieldInfo,
	&t596_f27_FieldInfo,
	&t596_f28_FieldInfo,
	&t596_f29_FieldInfo,
	&t596_f30_FieldInfo,
	&t596_f31_FieldInfo,
	NULL
};
static const int32_t t596_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t596_f2_DefaultValue = 
{
	&t596_f2_FieldInfo, { (char*)&t596_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t596_f3_DefaultValue = 
{
	&t596_f3_FieldInfo, { (char*)&t596_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t596_f4_DefaultValue = 
{
	&t596_f4_FieldInfo, { (char*)&t596_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t596_f5_DefaultValue = 
{
	&t596_f5_FieldInfo, { (char*)&t596_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t596_f6_DefaultValue = 
{
	&t596_f6_FieldInfo, { (char*)&t596_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t596_f7_DefaultValue = 
{
	&t596_f7_FieldInfo, { (char*)&t596_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t596_f8_DefaultValue = 
{
	&t596_f8_FieldInfo, { (char*)&t596_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t596_f9_DefaultValue = 
{
	&t596_f9_FieldInfo, { (char*)&t596_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f10_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t596_f10_DefaultValue = 
{
	&t596_f10_FieldInfo, { (char*)&t596_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f11_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t596_f11_DefaultValue = 
{
	&t596_f11_FieldInfo, { (char*)&t596_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f12_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t596_f12_DefaultValue = 
{
	&t596_f12_FieldInfo, { (char*)&t596_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f13_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t596_f13_DefaultValue = 
{
	&t596_f13_FieldInfo, { (char*)&t596_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f14_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t596_f14_DefaultValue = 
{
	&t596_f14_FieldInfo, { (char*)&t596_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f15_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t596_f15_DefaultValue = 
{
	&t596_f15_FieldInfo, { (char*)&t596_f15_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f16_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry t596_f16_DefaultValue = 
{
	&t596_f16_FieldInfo, { (char*)&t596_f16_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f17_DefaultValueData = 14;
static Il2CppFieldDefaultValueEntry t596_f17_DefaultValue = 
{
	&t596_f17_FieldInfo, { (char*)&t596_f17_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f18_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t596_f18_DefaultValue = 
{
	&t596_f18_FieldInfo, { (char*)&t596_f18_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f19_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t596_f19_DefaultValue = 
{
	&t596_f19_FieldInfo, { (char*)&t596_f19_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f20_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t596_f20_DefaultValue = 
{
	&t596_f20_FieldInfo, { (char*)&t596_f20_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f21_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t596_f21_DefaultValue = 
{
	&t596_f21_FieldInfo, { (char*)&t596_f21_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f22_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t596_f22_DefaultValue = 
{
	&t596_f22_FieldInfo, { (char*)&t596_f22_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f23_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t596_f23_DefaultValue = 
{
	&t596_f23_FieldInfo, { (char*)&t596_f23_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f24_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t596_f24_DefaultValue = 
{
	&t596_f24_FieldInfo, { (char*)&t596_f24_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f25_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t596_f25_DefaultValue = 
{
	&t596_f25_FieldInfo, { (char*)&t596_f25_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f26_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t596_f26_DefaultValue = 
{
	&t596_f26_FieldInfo, { (char*)&t596_f26_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f27_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t596_f27_DefaultValue = 
{
	&t596_f27_FieldInfo, { (char*)&t596_f27_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f28_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t596_f28_DefaultValue = 
{
	&t596_f28_FieldInfo, { (char*)&t596_f28_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f29_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t596_f29_DefaultValue = 
{
	&t596_f29_FieldInfo, { (char*)&t596_f29_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f30_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t596_f30_DefaultValue = 
{
	&t596_f30_FieldInfo, { (char*)&t596_f30_DefaultValueData, &t125_0_0_0 }};
static const int32_t t596_f31_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t596_f31_DefaultValue = 
{
	&t596_f31_FieldInfo, { (char*)&t596_f31_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t596_FDVs[] = 
{
	&t596_f2_DefaultValue,
	&t596_f3_DefaultValue,
	&t596_f4_DefaultValue,
	&t596_f5_DefaultValue,
	&t596_f6_DefaultValue,
	&t596_f7_DefaultValue,
	&t596_f8_DefaultValue,
	&t596_f9_DefaultValue,
	&t596_f10_DefaultValue,
	&t596_f11_DefaultValue,
	&t596_f12_DefaultValue,
	&t596_f13_DefaultValue,
	&t596_f14_DefaultValue,
	&t596_f15_DefaultValue,
	&t596_f16_DefaultValue,
	&t596_f17_DefaultValue,
	&t596_f18_DefaultValue,
	&t596_f19_DefaultValue,
	&t596_f20_DefaultValue,
	&t596_f21_DefaultValue,
	&t596_f22_DefaultValue,
	&t596_f23_DefaultValue,
	&t596_f24_DefaultValue,
	&t596_f25_DefaultValue,
	&t596_f26_DefaultValue,
	&t596_f27_DefaultValue,
	&t596_f28_DefaultValue,
	&t596_f29_DefaultValue,
	&t596_f30_DefaultValue,
	&t596_f31_DefaultValue,
	NULL
};
static Il2CppMethodReference t596_VT[] =
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
static bool t596_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t596_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t596_0_0_0;
extern Il2CppType t596_1_0_0;
const Il2CppTypeDefinitionMetadata t596_DM = 
{
	NULL, NULL, NULL, t596_IOs, &t8_0_0_0, t596_VT, t596_VTIGM, NULL};
TypeInfo t596_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "EventType", "UnityEngine", t596_MIs, NULL, t596_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t596_0_0_0, &t596_1_0_0, &t596_DM, NULL, NULL, NULL, t596_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t596)+ sizeof (Il2CppObject), sizeof (t596)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 257, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 31, 0, 0, 23, 0, 3};
#include "t595.h"
// Metadata Definition UnityEngine.EventModifiers
extern TypeInfo t595_TI;
#include "t595MD.h"
static MethodInfo* t595_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t595_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t595_TI, offsetof(t595, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t595_0_0_32854;
FieldInfo t595_f2_FieldInfo = 
{
	"None", &t595_0_0_32854, &t595_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t595_0_0_32854;
FieldInfo t595_f3_FieldInfo = 
{
	"Shift", &t595_0_0_32854, &t595_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t595_0_0_32854;
FieldInfo t595_f4_FieldInfo = 
{
	"Control", &t595_0_0_32854, &t595_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t595_0_0_32854;
FieldInfo t595_f5_FieldInfo = 
{
	"Alt", &t595_0_0_32854, &t595_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t595_0_0_32854;
FieldInfo t595_f6_FieldInfo = 
{
	"Command", &t595_0_0_32854, &t595_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t595_0_0_32854;
FieldInfo t595_f7_FieldInfo = 
{
	"Numeric", &t595_0_0_32854, &t595_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t595_0_0_32854;
FieldInfo t595_f8_FieldInfo = 
{
	"CapsLock", &t595_0_0_32854, &t595_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t595_0_0_32854;
FieldInfo t595_f9_FieldInfo = 
{
	"FunctionKey", &t595_0_0_32854, &t595_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t595_FIs[] =
{
	&t595_f1_FieldInfo,
	&t595_f2_FieldInfo,
	&t595_f3_FieldInfo,
	&t595_f4_FieldInfo,
	&t595_f5_FieldInfo,
	&t595_f6_FieldInfo,
	&t595_f7_FieldInfo,
	&t595_f8_FieldInfo,
	&t595_f9_FieldInfo,
	NULL
};
static const int32_t t595_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t595_f2_DefaultValue = 
{
	&t595_f2_FieldInfo, { (char*)&t595_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t595_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t595_f3_DefaultValue = 
{
	&t595_f3_FieldInfo, { (char*)&t595_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t595_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t595_f4_DefaultValue = 
{
	&t595_f4_FieldInfo, { (char*)&t595_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t595_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t595_f5_DefaultValue = 
{
	&t595_f5_FieldInfo, { (char*)&t595_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t595_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t595_f6_DefaultValue = 
{
	&t595_f6_FieldInfo, { (char*)&t595_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t595_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t595_f7_DefaultValue = 
{
	&t595_f7_FieldInfo, { (char*)&t595_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t595_f8_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t595_f8_DefaultValue = 
{
	&t595_f8_FieldInfo, { (char*)&t595_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t595_f9_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t595_f9_DefaultValue = 
{
	&t595_f9_FieldInfo, { (char*)&t595_f9_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t595_FDVs[] = 
{
	&t595_f2_DefaultValue,
	&t595_f3_DefaultValue,
	&t595_f4_DefaultValue,
	&t595_f5_DefaultValue,
	&t595_f6_DefaultValue,
	&t595_f7_DefaultValue,
	&t595_f8_DefaultValue,
	&t595_f9_DefaultValue,
	NULL
};
static Il2CppMethodReference t595_VT[] =
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
static bool t595_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t595_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern TypeInfo t615_TI;
#include "t615.h"
#include "t615MD.h"
extern MethodInfo m2991_MI;
void t595_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t615 * tmp;
		tmp = (t615 *)il2cpp_codegen_object_new (&t615_TI);
		m2991(tmp, &m2991_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t595__CustomAttributeCache = {
1,
NULL,
&t595_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t595_0_0_0;
extern Il2CppType t595_1_0_0;
extern CustomAttributesCache t595__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t595_DM = 
{
	NULL, NULL, NULL, t595_IOs, &t8_0_0_0, t595_VT, t595_VTIGM, NULL};
TypeInfo t595_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "EventModifiers", "UnityEngine", t595_MIs, NULL, t595_FIs, NULL, &t125_TI, NULL, &t595__CustomAttributeCache, &t595_0_0_0, &t595_1_0_0, &t595_DM, NULL, NULL, NULL, t595_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t595)+ sizeof (Il2CppObject), sizeof (t595)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 257, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 9, 0, 0, 23, 0, 3};
#include "t179.h"
// Metadata Definition UnityEngine.Gizmos
extern TypeInfo t179_TI;
#include "t179MD.h"
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t179_m640_ParameterInfos[] = 
{
	{"from", 0, 134217959, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"to", 1, 134217960, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m640_MI = 
{
	"DrawLine", (methodPointerType)&m640, &t179_TI, &t122_0_0_0, RuntimeInvoker_t122_t13_t13, t179_m640_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 320, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_1_0_0;
extern Il2CppType t13_1_0_0;
static ParameterInfo t179_m3395_ParameterInfos[] = 
{
	{"from", 0, 134217961, &EmptyCustomAttributesCache, &t13_1_0_0},
	{"to", 1, 134217962, &EmptyCustomAttributesCache, &t13_1_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t946_t946 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t179__CustomAttributeCache_m3395;
MethodInfo m3395_MI = 
{
	"INTERNAL_CALL_DrawLine", (methodPointerType)&m3395, &t179_TI, &t122_0_0_0, RuntimeInvoker_t122_t946_t946, t179_m3395_ParameterInfos, &t179__CustomAttributeCache_m3395, 145, 4096, 255, 2, false, false, 321, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t179_m644_ParameterInfos[] = 
{
	{"center", 0, 134217963, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"radius", 1, 134217964, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t13_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m644_MI = 
{
	"DrawWireSphere", (methodPointerType)&m644, &t179_TI, &t122_0_0_0, RuntimeInvoker_t122_t13_t123, t179_m644_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 322, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_1_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t179_m3396_ParameterInfos[] = 
{
	{"center", 0, 134217965, &EmptyCustomAttributesCache, &t13_1_0_0},
	{"radius", 1, 134217966, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t946_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t179__CustomAttributeCache_m3396;
MethodInfo m3396_MI = 
{
	"INTERNAL_CALL_DrawWireSphere", (methodPointerType)&m3396, &t179_TI, &t122_0_0_0, RuntimeInvoker_t122_t946_t123, t179_m3396_ParameterInfos, &t179__CustomAttributeCache_m3396, 145, 4096, 255, 2, false, false, 323, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_1_0_0;
static ParameterInfo t179_m3397_ParameterInfos[] = 
{
	{"value", 0, 134217967, &EmptyCustomAttributesCache, &t43_1_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t647 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t179__CustomAttributeCache_m3397;
MethodInfo m3397_MI = 
{
	"INTERNAL_set_color", (methodPointerType)&m3397, &t179_TI, &t122_0_0_0, RuntimeInvoker_t122_t647, t179_m3397_ParameterInfos, &t179__CustomAttributeCache_m3397, 145, 4096, 255, 1, false, false, 324, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t179_m639_ParameterInfos[] = 
{
	{"value", 0, 134217968, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t43 (MethodInfo* method, void* obj, void** args);
MethodInfo m639_MI = 
{
	"set_color", (methodPointerType)&m639, &t179_TI, &t122_0_0_0, RuntimeInvoker_t122_t43, t179_m639_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 1, false, false, 325, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t179_MIs[] =
{
	&m640_MI,
	&m3395_MI,
	&m644_MI,
	&m3396_MI,
	&m3397_MI,
	&m639_MI,
	NULL
};
extern MethodInfo m639_MI;
static PropertyInfo t179____color_PropertyInfo = 
{
	&t179_TI, "color", NULL, &m639_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t179_PIs[] =
{
	&t179____color_PropertyInfo,
	NULL
};
static Il2CppMethodReference t179_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t179_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t179_CustomAttributesCacheGenerator_m3395(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t179_CustomAttributesCacheGenerator_m3396(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t179_CustomAttributesCacheGenerator_m3397(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t179__CustomAttributeCache_m3395 = {
1,
NULL,
&t179_CustomAttributesCacheGenerator_m3395
};
CustomAttributesCache t179__CustomAttributeCache_m3396 = {
1,
NULL,
&t179_CustomAttributesCacheGenerator_m3396
};
CustomAttributesCache t179__CustomAttributeCache_m3397 = {
1,
NULL,
&t179_CustomAttributesCacheGenerator_m3397
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t179_0_0_0;
extern Il2CppType t179_1_0_0;
struct t179;
extern CustomAttributesCache t179__CustomAttributeCache_m3395;
extern CustomAttributesCache t179__CustomAttributeCache_m3396;
extern CustomAttributesCache t179__CustomAttributeCache_m3397;
const Il2CppTypeDefinitionMetadata t179_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t179_VT, t179_VTIGM, NULL};
TypeInfo t179_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Gizmos", "UnityEngine", t179_MIs, t179_PIs, NULL, NULL, &t179_TI, NULL, &EmptyCustomAttributesCache, &t179_0_0_0, &t179_1_0_0, &t179_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t179), sizeof (t179), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 0, 0, 0, 4, 0, 0};
#include "t157.h"
// Metadata Definition UnityEngine.FlareLayer
extern TypeInfo t157_TI;
#include "t157MD.h"
static MethodInfo* t157_MIs[] =
{
	NULL
};
static Il2CppMethodReference t157_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t157_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t157_0_0_0;
extern Il2CppType t157_1_0_0;
struct t157;
const Il2CppTypeDefinitionMetadata t157_DM = 
{
	NULL, NULL, NULL, NULL, &t145_0_0_0, t157_VT, t157_VTIGM, NULL};
TypeInfo t157_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "FlareLayer", "UnityEngine", t157_MIs, NULL, NULL, NULL, &t157_TI, NULL, &EmptyCustomAttributesCache, &t157_0_0_0, &t157_1_0_0, &t157_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t157), sizeof (t157), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#include "t28.h"
// Metadata Definition UnityEngine.Vector2
extern TypeInfo t28_TI;
#include "t28MD.h"
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t28_m392_ParameterInfos[] = 
{
	{"x", 0, 134217969, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"y", 1, 134217970, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m392_MI = 
{
	".ctor", (methodPointerType)&m392, &t28_TI, &t122_0_0_0, RuntimeInvoker_t122_t123_t123, t28_m392_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 326, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t28_m2697_ParameterInfos[] = 
{
	{"index", 0, 134217971, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m2697_MI = 
{
	"get_Item", (methodPointerType)&m2697, &t28_TI, &t123_0_0_0, RuntimeInvoker_t123_t125, t28_m2697_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 327, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t28_m2708_ParameterInfos[] = 
{
	{"index", 0, 134217972, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134217973, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2708_MI = 
{
	"set_Item", (methodPointerType)&m2708, &t28_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t123, t28_m2708_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 2, false, false, 328, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t28_m2784_ParameterInfos[] = 
{
	{"a", 0, 134217974, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"b", 1, 134217975, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2784_MI = 
{
	"Scale", (methodPointerType)&m2784, &t28_TI, &t28_0_0_0, RuntimeInvoker_t28_t28_t28, t28_m2784_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 329, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3398_MI = 
{
	"Normalize", (methodPointerType)&m3398, &t28_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 330, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m393_MI = 
{
	"get_normalized", (methodPointerType)&m393, &t28_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 331, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3399_MI = 
{
	"ToString", (methodPointerType)&m3399, &t28_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 332, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3400_MI = 
{
	"GetHashCode", (methodPointerType)&m3400, &t28_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 333, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t28_m3401_ParameterInfos[] = 
{
	{"other", 0, 134217976, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3401_MI = 
{
	"Equals", (methodPointerType)&m3401, &t28_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t28_m3401_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 334, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t28_m2529_ParameterInfos[] = 
{
	{"lhs", 0, 134217977, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"rhs", 1, 134217978, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2529_MI = 
{
	"Dot", (methodPointerType)&m2529, &t28_TI, &t123_0_0_0, RuntimeInvoker_t123_t28_t28, t28_m2529_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 335, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m1209_MI = 
{
	"get_magnitude", (methodPointerType)&m1209, &t28_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 336, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2489_MI = 
{
	"get_sqrMagnitude", (methodPointerType)&m2489, &t28_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 337, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t28_m3402_ParameterInfos[] = 
{
	{"a", 0, 134217979, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m3402_MI = 
{
	"SqrMagnitude", (methodPointerType)&m3402, &t28_TI, &t123_0_0_0, RuntimeInvoker_t123_t28, t28_m3402_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 338, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1204_MI = 
{
	"get_zero", (methodPointerType)&m1204, &t28_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 339, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2693_MI = 
{
	"get_one", (methodPointerType)&m2693, &t28_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 340, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2933_MI = 
{
	"get_up", (methodPointerType)&m2933, &t28_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 341, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t28_m2696_ParameterInfos[] = 
{
	{"a", 0, 134217980, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"b", 1, 134217981, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2696_MI = 
{
	"op_Addition", (methodPointerType)&m2696, &t28_TI, &t28_0_0_0, RuntimeInvoker_t28_t28_t28, t28_m2696_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 342, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t28_m1207_ParameterInfos[] = 
{
	{"a", 0, 134217982, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"b", 1, 134217983, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1207_MI = 
{
	"op_Subtraction", (methodPointerType)&m1207, &t28_TI, &t28_0_0_0, RuntimeInvoker_t28_t28_t28, t28_m1207_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 343, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t28_m2694_ParameterInfos[] = 
{
	{"a", 0, 134217984, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"d", 1, 134217985, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t28_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2694_MI = 
{
	"op_Multiply", (methodPointerType)&m2694, &t28_TI, &t28_0_0_0, RuntimeInvoker_t28_t28_t123, t28_m2694_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 344, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t28_m2750_ParameterInfos[] = 
{
	{"a", 0, 134217986, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"d", 1, 134217987, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t28_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2750_MI = 
{
	"op_Division", (methodPointerType)&m2750, &t28_TI, &t28_0_0_0, RuntimeInvoker_t28_t28_t123, t28_m2750_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 345, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t28_m2990_ParameterInfos[] = 
{
	{"lhs", 0, 134217988, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"rhs", 1, 134217989, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2990_MI = 
{
	"op_Equality", (methodPointerType)&m2990, &t28_TI, &t124_0_0_0, RuntimeInvoker_t124_t28_t28, t28_m2990_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 346, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t28_m2776_ParameterInfos[] = 
{
	{"lhs", 0, 134217990, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"rhs", 1, 134217991, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2776_MI = 
{
	"op_Inequality", (methodPointerType)&m2776, &t28_TI, &t124_0_0_0, RuntimeInvoker_t124_t28_t28, t28_m2776_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 347, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t28_m617_ParameterInfos[] = 
{
	{"v", 0, 134217992, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m617_MI = 
{
	"op_Implicit", (methodPointerType)&m617, &t28_TI, &t28_0_0_0, RuntimeInvoker_t28_t13, t28_m617_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 1, false, false, 348, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t28_m388_ParameterInfos[] = 
{
	{"v", 0, 134217993, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m388_MI = 
{
	"op_Implicit", (methodPointerType)&m388, &t28_TI, &t13_0_0_0, RuntimeInvoker_t13_t28, t28_m388_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 1, false, false, 349, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t28_MIs[] =
{
	&m392_MI,
	&m2697_MI,
	&m2708_MI,
	&m2784_MI,
	&m3398_MI,
	&m393_MI,
	&m3399_MI,
	&m3400_MI,
	&m3401_MI,
	&m2529_MI,
	&m1209_MI,
	&m2489_MI,
	&m3402_MI,
	&m1204_MI,
	&m2693_MI,
	&m2933_MI,
	&m2696_MI,
	&m1207_MI,
	&m2694_MI,
	&m2750_MI,
	&m2990_MI,
	&m2776_MI,
	&m617_MI,
	&m388_MI,
	NULL
};
extern Il2CppType t123_0_0_32854;
FieldInfo t28_f0_FieldInfo = 
{
	"kEpsilon", &t123_0_0_32854, &t28_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t28_f1_FieldInfo = 
{
	"x", &t123_0_0_6, &t28_TI, offsetof(t28, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t28_f2_FieldInfo = 
{
	"y", &t123_0_0_6, &t28_TI, offsetof(t28, f2) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t28_FIs[] =
{
	&t28_f0_FieldInfo,
	&t28_f1_FieldInfo,
	&t28_f2_FieldInfo,
	NULL
};
static const float t28_f0_DefaultValueData = 1.0E-05f;
static Il2CppFieldDefaultValueEntry t28_f0_DefaultValue = 
{
	&t28_f0_FieldInfo, { (char*)&t28_f0_DefaultValueData, &t123_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t28_FDVs[] = 
{
	&t28_f0_DefaultValue,
	NULL
};
extern MethodInfo m2697_MI;
extern MethodInfo m2708_MI;
static PropertyInfo t28____Item_PropertyInfo = 
{
	&t28_TI, "Item", &m2697_MI, &m2708_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m393_MI;
static PropertyInfo t28____normalized_PropertyInfo = 
{
	&t28_TI, "normalized", &m393_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1209_MI;
static PropertyInfo t28____magnitude_PropertyInfo = 
{
	&t28_TI, "magnitude", &m1209_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2489_MI;
static PropertyInfo t28____sqrMagnitude_PropertyInfo = 
{
	&t28_TI, "sqrMagnitude", &m2489_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1204_MI;
static PropertyInfo t28____zero_PropertyInfo = 
{
	&t28_TI, "zero", &m1204_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2693_MI;
static PropertyInfo t28____one_PropertyInfo = 
{
	&t28_TI, "one", &m2693_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2933_MI;
static PropertyInfo t28____up_PropertyInfo = 
{
	&t28_TI, "up", &m2933_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t28_PIs[] =
{
	&t28____Item_PropertyInfo,
	&t28____normalized_PropertyInfo,
	&t28____magnitude_PropertyInfo,
	&t28____sqrMagnitude_PropertyInfo,
	&t28____zero_PropertyInfo,
	&t28____one_PropertyInfo,
	&t28____up_PropertyInfo,
	NULL
};
extern MethodInfo m3401_MI;
extern MethodInfo m3400_MI;
extern MethodInfo m3399_MI;
static Il2CppMethodReference t28_VT[] =
{
	&m3401_MI,
	&m646_MI,
	&m3400_MI,
	&m3399_MI,
};
static bool t28_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern TypeInfo t666_TI;
#include "t666.h"
#include "t666MD.h"
extern MethodInfo m3103_MI;
void t28_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t666 * tmp;
		tmp = (t666 *)il2cpp_codegen_object_new (&t666_TI);
		m3103(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m3103_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t28__CustomAttributeCache = {
1,
NULL,
&t28_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern CustomAttributesCache t28__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t28_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t28_VT, t28_VTIGM, NULL};
TypeInfo t28_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Vector2", "UnityEngine", t28_MIs, t28_PIs, t28_FIs, NULL, &t28_TI, NULL, &t28__CustomAttributeCache, &t28_0_0_0, &t28_1_0_0, &t28_DM, NULL, NULL, NULL, t28_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t28)+ sizeof (Il2CppObject), sizeof (t28)+ sizeof (Il2CppObject), 0, sizeof(t28 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 24, 7, 3, 0, 0, 4, 0, 0};
#include "t13.h"
// Metadata Definition UnityEngine.Vector3
extern TypeInfo t13_TI;
#include "t13MD.h"
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t13_m357_ParameterInfos[] = 
{
	{"x", 0, 134217994, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"y", 1, 134217995, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"z", 2, 134217996, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m357_MI = 
{
	".ctor", (methodPointerType)&m357, &t13_TI, &t122_0_0_0, RuntimeInvoker_t122_t123_t123_t123, t13_m357_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 350, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t13_m616_ParameterInfos[] = 
{
	{"x", 0, 134217997, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"y", 1, 134217998, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m616_MI = 
{
	".ctor", (methodPointerType)&m616, &t13_TI, &t122_0_0_0, RuntimeInvoker_t122_t123_t123, t13_m616_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 351, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t13_m634_ParameterInfos[] = 
{
	{"from", 0, 134217999, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"to", 1, 134218000, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"t", 2, 134218001, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t13_t13_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m634_MI = 
{
	"Lerp", (methodPointerType)&m634, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13_t13_t13_t123, t13_m634_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 352, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_1_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t13_m622_ParameterInfos[] = 
{
	{"current", 0, 134218002, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"target", 1, 134218003, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"currentVelocity", 2, 134218004, &EmptyCustomAttributesCache, &t13_1_0_0},
	{"smoothTime", 3, 134218005, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t13_t13_t946_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t13__CustomAttributeCache_m622;
MethodInfo m622_MI = 
{
	"SmoothDamp", (methodPointerType)&m622, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13_t13_t13_t946_t123, t13_m622_ParameterInfos, &t13__CustomAttributeCache_m622, 150, 0, 255, 4, false, false, 353, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_1_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern CustomAttributesCache t13__CustomAttributeCache_t13_m3403_Arg4_ParameterInfo;
extern Il2CppType t123_0_0_0;
extern CustomAttributesCache t13__CustomAttributeCache_t13_m3403_Arg5_ParameterInfo;
static ParameterInfo t13_m3403_ParameterInfos[] = 
{
	{"current", 0, 134218006, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"target", 1, 134218007, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"currentVelocity", 2, 134218008, &EmptyCustomAttributesCache, &t13_1_0_0},
	{"smoothTime", 3, 134218009, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"maxSpeed", 4, 134218010, &t13__CustomAttributeCache_t13_m3403_Arg4_ParameterInfo, &t123_0_0_0},
	{"deltaTime", 5, 134218011, &t13__CustomAttributeCache_t13_m3403_Arg5_ParameterInfo, &t123_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t13_t13_t946_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3403_MI = 
{
	"SmoothDamp", (methodPointerType)&m3403, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13_t13_t13_t946_t123_t123_t123, t13_m3403_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 6, false, false, 354, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t13_m2839_ParameterInfos[] = 
{
	{"index", 0, 134218012, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m2839_MI = 
{
	"get_Item", (methodPointerType)&m2839, &t13_TI, &t123_0_0_0, RuntimeInvoker_t123_t125, t13_m2839_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 355, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t13_m2840_ParameterInfos[] = 
{
	{"index", 0, 134218013, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134218014, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2840_MI = 
{
	"set_Item", (methodPointerType)&m2840, &t13_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t123, t13_m2840_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 2, false, false, 356, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3404_MI = 
{
	"GetHashCode", (methodPointerType)&m3404, &t13_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 357, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t13_m3405_ParameterInfos[] = 
{
	{"other", 0, 134218015, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3405_MI = 
{
	"Equals", (methodPointerType)&m3405, &t13_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t13_m3405_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 358, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t13_m3406_ParameterInfos[] = 
{
	{"value", 0, 134218016, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3406_MI = 
{
	"Normalize", (methodPointerType)&m3406, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13_t13, t13_m3406_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 359, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m386_MI = 
{
	"get_normalized", (methodPointerType)&m386, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 360, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3407_MI = 
{
	"ToString", (methodPointerType)&m3407, &t13_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 361, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t13_m3408_ParameterInfos[] = 
{
	{"format", 0, 134218017, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3408_MI = 
{
	"ToString", (methodPointerType)&m3408, &t13_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t13_m3408_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 362, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t13_m458_ParameterInfos[] = 
{
	{"lhs", 0, 134218018, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"rhs", 1, 134218019, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m458_MI = 
{
	"Dot", (methodPointerType)&m458, &t13_TI, &t123_0_0_0, RuntimeInvoker_t123_t13_t13, t13_m458_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 363, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t13_m2550_ParameterInfos[] = 
{
	{"a", 0, 134218020, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"b", 1, 134218021, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m2550_MI = 
{
	"Distance", (methodPointerType)&m2550, &t13_TI, &t123_0_0_0, RuntimeInvoker_t123_t13_t13, t13_m2550_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 364, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t13_m3409_ParameterInfos[] = 
{
	{"vector", 0, 134218022, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"maxLength", 1, 134218023, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t13_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3409_MI = 
{
	"ClampMagnitude", (methodPointerType)&m3409, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13_t13_t123, t13_m3409_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 365, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t13_m3410_ParameterInfos[] = 
{
	{"a", 0, 134218024, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3410_MI = 
{
	"Magnitude", (methodPointerType)&m3410, &t13_TI, &t123_0_0_0, RuntimeInvoker_t123_t13, t13_m3410_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 366, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m636_MI = 
{
	"get_magnitude", (methodPointerType)&m636, &t13_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 367, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t13_m3411_ParameterInfos[] = 
{
	{"a", 0, 134218025, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3411_MI = 
{
	"SqrMagnitude", (methodPointerType)&m3411, &t13_TI, &t123_0_0_0, RuntimeInvoker_t123_t13, t13_m3411_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 368, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2867_MI = 
{
	"get_sqrMagnitude", (methodPointerType)&m2867, &t13_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 369, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t13_m2849_ParameterInfos[] = 
{
	{"lhs", 0, 134218026, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"rhs", 1, 134218027, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m2849_MI = 
{
	"Min", (methodPointerType)&m2849, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13_t13_t13, t13_m2849_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 370, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t13_m2850_ParameterInfos[] = 
{
	{"lhs", 0, 134218028, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"rhs", 1, 134218029, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m2850_MI = 
{
	"Max", (methodPointerType)&m2850, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13_t13_t13, t13_m2850_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 371, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m354_MI = 
{
	"get_zero", (methodPointerType)&m354, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 372, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m626_MI = 
{
	"get_forward", (methodPointerType)&m626, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 373, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3412_MI = 
{
	"get_back", (methodPointerType)&m3412, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 374, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m579_MI = 
{
	"get_up", (methodPointerType)&m579, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 375, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m2871_MI = 
{
	"get_down", (methodPointerType)&m2871, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 376, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m2869_MI = 
{
	"get_left", (methodPointerType)&m2869, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 377, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m2870_MI = 
{
	"get_right", (methodPointerType)&m2870, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 378, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t13_m476_ParameterInfos[] = 
{
	{"a", 0, 134218030, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"b", 1, 134218031, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m476_MI = 
{
	"op_Addition", (methodPointerType)&m476, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13_t13_t13, t13_m476_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 379, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t13_m352_ParameterInfos[] = 
{
	{"a", 0, 134218032, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"b", 1, 134218033, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m352_MI = 
{
	"op_Subtraction", (methodPointerType)&m352, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13_t13_t13, t13_m352_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 380, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t13_m580_ParameterInfos[] = 
{
	{"a", 0, 134218034, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m580_MI = 
{
	"op_UnaryNegation", (methodPointerType)&m580, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13_t13, t13_m580_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 1, false, false, 381, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t13_m475_ParameterInfos[] = 
{
	{"a", 0, 134218035, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"d", 1, 134218036, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t13_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m475_MI = 
{
	"op_Multiply", (methodPointerType)&m475, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13_t13_t123, t13_m475_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 382, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t13_m635_ParameterInfos[] = 
{
	{"d", 0, 134218037, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"a", 1, 134218038, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t123_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m635_MI = 
{
	"op_Multiply", (methodPointerType)&m635, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13_t123_t13, t13_m635_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 383, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t13_m353_ParameterInfos[] = 
{
	{"a", 0, 134218039, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"d", 1, 134218040, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t13_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m353_MI = 
{
	"op_Division", (methodPointerType)&m353, &t13_TI, &t13_0_0_0, RuntimeInvoker_t13_t13_t123, t13_m353_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 384, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t13_m3413_ParameterInfos[] = 
{
	{"lhs", 0, 134218041, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"rhs", 1, 134218042, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3413_MI = 
{
	"op_Equality", (methodPointerType)&m3413, &t13_TI, &t124_0_0_0, RuntimeInvoker_t124_t13_t13, t13_m3413_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 385, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t13_m382_ParameterInfos[] = 
{
	{"lhs", 0, 134218043, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"rhs", 1, 134218044, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m382_MI = 
{
	"op_Inequality", (methodPointerType)&m382, &t13_TI, &t124_0_0_0, RuntimeInvoker_t124_t13_t13, t13_m382_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 386, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t13_MIs[] =
{
	&m357_MI,
	&m616_MI,
	&m634_MI,
	&m622_MI,
	&m3403_MI,
	&m2839_MI,
	&m2840_MI,
	&m3404_MI,
	&m3405_MI,
	&m3406_MI,
	&m386_MI,
	&m3407_MI,
	&m3408_MI,
	&m458_MI,
	&m2550_MI,
	&m3409_MI,
	&m3410_MI,
	&m636_MI,
	&m3411_MI,
	&m2867_MI,
	&m2849_MI,
	&m2850_MI,
	&m354_MI,
	&m626_MI,
	&m3412_MI,
	&m579_MI,
	&m2871_MI,
	&m2869_MI,
	&m2870_MI,
	&m476_MI,
	&m352_MI,
	&m580_MI,
	&m475_MI,
	&m635_MI,
	&m353_MI,
	&m3413_MI,
	&m382_MI,
	NULL
};
extern Il2CppType t123_0_0_32854;
FieldInfo t13_f0_FieldInfo = 
{
	"kEpsilon", &t123_0_0_32854, &t13_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t13_f1_FieldInfo = 
{
	"x", &t123_0_0_6, &t13_TI, offsetof(t13, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t13_f2_FieldInfo = 
{
	"y", &t123_0_0_6, &t13_TI, offsetof(t13, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t13_f3_FieldInfo = 
{
	"z", &t123_0_0_6, &t13_TI, offsetof(t13, f3) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t13_FIs[] =
{
	&t13_f0_FieldInfo,
	&t13_f1_FieldInfo,
	&t13_f2_FieldInfo,
	&t13_f3_FieldInfo,
	NULL
};
static const float t13_f0_DefaultValueData = 1.0E-05f;
static Il2CppFieldDefaultValueEntry t13_f0_DefaultValue = 
{
	&t13_f0_FieldInfo, { (char*)&t13_f0_DefaultValueData, &t123_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t13_FDVs[] = 
{
	&t13_f0_DefaultValue,
	NULL
};
extern MethodInfo m2839_MI;
extern MethodInfo m2840_MI;
static PropertyInfo t13____Item_PropertyInfo = 
{
	&t13_TI, "Item", &m2839_MI, &m2840_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m386_MI;
static PropertyInfo t13____normalized_PropertyInfo = 
{
	&t13_TI, "normalized", &m386_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m636_MI;
static PropertyInfo t13____magnitude_PropertyInfo = 
{
	&t13_TI, "magnitude", &m636_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2867_MI;
static PropertyInfo t13____sqrMagnitude_PropertyInfo = 
{
	&t13_TI, "sqrMagnitude", &m2867_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m354_MI;
static PropertyInfo t13____zero_PropertyInfo = 
{
	&t13_TI, "zero", &m354_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m626_MI;
static PropertyInfo t13____forward_PropertyInfo = 
{
	&t13_TI, "forward", &m626_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3412_MI;
static PropertyInfo t13____back_PropertyInfo = 
{
	&t13_TI, "back", &m3412_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m579_MI;
static PropertyInfo t13____up_PropertyInfo = 
{
	&t13_TI, "up", &m579_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2871_MI;
static PropertyInfo t13____down_PropertyInfo = 
{
	&t13_TI, "down", &m2871_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2869_MI;
static PropertyInfo t13____left_PropertyInfo = 
{
	&t13_TI, "left", &m2869_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2870_MI;
static PropertyInfo t13____right_PropertyInfo = 
{
	&t13_TI, "right", &m2870_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t13_PIs[] =
{
	&t13____Item_PropertyInfo,
	&t13____normalized_PropertyInfo,
	&t13____magnitude_PropertyInfo,
	&t13____sqrMagnitude_PropertyInfo,
	&t13____zero_PropertyInfo,
	&t13____forward_PropertyInfo,
	&t13____back_PropertyInfo,
	&t13____up_PropertyInfo,
	&t13____down_PropertyInfo,
	&t13____left_PropertyInfo,
	&t13____right_PropertyInfo,
	NULL
};
extern MethodInfo m3405_MI;
extern MethodInfo m3404_MI;
extern MethodInfo m3407_MI;
static Il2CppMethodReference t13_VT[] =
{
	&m3405_MI,
	&m646_MI,
	&m3404_MI,
	&m3407_MI,
};
static bool t13_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t13_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t666 * tmp;
		tmp = (t666 *)il2cpp_codegen_object_new (&t666_TI);
		m3103(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m3103_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t13_CustomAttributesCacheGenerator_m622(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t874 * tmp;
		tmp = (t874 *)il2cpp_codegen_object_new (&t874_TI);
		m4220(tmp, &m4220_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t13_CustomAttributesCacheGenerator_t13_m3403_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t873 * tmp;
		tmp = (t873 *)il2cpp_codegen_object_new (&t873_TI);
		m4216(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), &m4216_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t13_CustomAttributesCacheGenerator_t13_m3403_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t873 * tmp;
		tmp = (t873 *)il2cpp_codegen_object_new (&t873_TI);
		m4216(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), &m4216_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t13__CustomAttributeCache = {
1,
NULL,
&t13_CustomAttributesCacheGenerator
};
CustomAttributesCache t13__CustomAttributeCache_m622 = {
1,
NULL,
&t13_CustomAttributesCacheGenerator_m622
};
CustomAttributesCache t13__CustomAttributeCache_t13_m3403_Arg4_ParameterInfo = {
1,
NULL,
&t13_CustomAttributesCacheGenerator_t13_m3403_Arg4_ParameterInfo
};
CustomAttributesCache t13__CustomAttributeCache_t13_m3403_Arg5_ParameterInfo = {
1,
NULL,
&t13_CustomAttributesCacheGenerator_t13_m3403_Arg5_ParameterInfo
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern CustomAttributesCache t13__CustomAttributeCache;
extern CustomAttributesCache t13__CustomAttributeCache_m622;
const Il2CppTypeDefinitionMetadata t13_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t13_VT, t13_VTIGM, NULL};
TypeInfo t13_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Vector3", "UnityEngine", t13_MIs, t13_PIs, t13_FIs, NULL, &t13_TI, NULL, &t13__CustomAttributeCache, &t13_0_0_0, &t13_1_0_0, &t13_DM, NULL, NULL, NULL, t13_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t13)+ sizeof (Il2CppObject), sizeof (t13)+ sizeof (Il2CppObject), 0, sizeof(t13 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 37, 11, 4, 0, 0, 4, 0, 0};
#include "t43.h"
// Metadata Definition UnityEngine.Color
extern TypeInfo t43_TI;
#include "t43MD.h"
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t43_m638_ParameterInfos[] = 
{
	{"r", 0, 134218045, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"g", 1, 134218046, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"b", 2, 134218047, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"a", 3, 134218048, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m638_MI = 
{
	".ctor", (methodPointerType)&m638, &t43_TI, &t122_0_0_0, RuntimeInvoker_t122_t123_t123_t123_t123, t43_m638_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 387, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t43_m3414_ParameterInfos[] = 
{
	{"r", 0, 134218049, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"g", 1, 134218050, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"b", 2, 134218051, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3414_MI = 
{
	".ctor", (methodPointerType)&m3414, &t43_TI, &t122_0_0_0, RuntimeInvoker_t122_t123_t123_t123, t43_m3414_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 388, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3415_MI = 
{
	"ToString", (methodPointerType)&m3415, &t43_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 389, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3416_MI = 
{
	"GetHashCode", (methodPointerType)&m3416, &t43_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 390, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t43_m2629_ParameterInfos[] = 
{
	{"other", 0, 134218052, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m2629_MI = 
{
	"Equals", (methodPointerType)&m2629, &t43_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t43_m2629_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 391, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_0_0_0;
extern Il2CppType t43_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t43_m2564_ParameterInfos[] = 
{
	{"a", 0, 134218053, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"b", 1, 134218054, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"t", 2, 134218055, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t43_t43_t43_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2564_MI = 
{
	"Lerp", (methodPointerType)&m2564, &t43_TI, &t43_0_0_0, RuntimeInvoker_t43_t43_t43_t123, t43_m2564_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 392, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t43 (MethodInfo* method, void* obj, void** args);
MethodInfo m3417_MI = 
{
	"get_red", (methodPointerType)&m3417, &t43_TI, &t43_0_0_0, RuntimeInvoker_t43, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 393, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t43 (MethodInfo* method, void* obj, void** args);
MethodInfo m643_MI = 
{
	"get_green", (methodPointerType)&m643, &t43_TI, &t43_0_0_0, RuntimeInvoker_t43, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 394, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t43 (MethodInfo* method, void* obj, void** args);
MethodInfo m2603_MI = 
{
	"get_white", (methodPointerType)&m2603, &t43_TI, &t43_0_0_0, RuntimeInvoker_t43, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 395, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t43 (MethodInfo* method, void* obj, void** args);
MethodInfo m436_MI = 
{
	"get_black", (methodPointerType)&m436, &t43_TI, &t43_0_0_0, RuntimeInvoker_t43, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 396, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t43 (MethodInfo* method, void* obj, void** args);
MethodInfo m637_MI = 
{
	"get_yellow", (methodPointerType)&m637, &t43_TI, &t43_0_0_0, RuntimeInvoker_t43, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 397, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t43 (MethodInfo* method, void* obj, void** args);
MethodInfo m423_MI = 
{
	"get_grey", (methodPointerType)&m423, &t43_TI, &t43_0_0_0, RuntimeInvoker_t43, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 398, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t43_m2863_ParameterInfos[] = 
{
	{"a", 0, 134218056, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"b", 1, 134218057, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t43_t43_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2863_MI = 
{
	"op_Multiply", (methodPointerType)&m2863, &t43_TI, &t43_0_0_0, RuntimeInvoker_t43_t43_t123, t43_m2863_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 399, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t43_m3418_ParameterInfos[] = 
{
	{"c", 0, 134218058, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t43 (MethodInfo* method, void* obj, void** args);
MethodInfo m3418_MI = 
{
	"op_Implicit", (methodPointerType)&m3418, &t43_TI, &t47_0_0_0, RuntimeInvoker_t47_t43, t43_m3418_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 1, false, false, 400, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t43_MIs[] =
{
	&m638_MI,
	&m3414_MI,
	&m3415_MI,
	&m3416_MI,
	&m2629_MI,
	&m2564_MI,
	&m3417_MI,
	&m643_MI,
	&m2603_MI,
	&m436_MI,
	&m637_MI,
	&m423_MI,
	&m2863_MI,
	&m3418_MI,
	NULL
};
extern Il2CppType t123_0_0_6;
FieldInfo t43_f0_FieldInfo = 
{
	"r", &t123_0_0_6, &t43_TI, offsetof(t43, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t43_f1_FieldInfo = 
{
	"g", &t123_0_0_6, &t43_TI, offsetof(t43, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t43_f2_FieldInfo = 
{
	"b", &t123_0_0_6, &t43_TI, offsetof(t43, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t43_f3_FieldInfo = 
{
	"a", &t123_0_0_6, &t43_TI, offsetof(t43, f3) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t43_FIs[] =
{
	&t43_f0_FieldInfo,
	&t43_f1_FieldInfo,
	&t43_f2_FieldInfo,
	&t43_f3_FieldInfo,
	NULL
};
extern MethodInfo m3417_MI;
static PropertyInfo t43____red_PropertyInfo = 
{
	&t43_TI, "red", &m3417_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m643_MI;
static PropertyInfo t43____green_PropertyInfo = 
{
	&t43_TI, "green", &m643_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2603_MI;
static PropertyInfo t43____white_PropertyInfo = 
{
	&t43_TI, "white", &m2603_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m436_MI;
static PropertyInfo t43____black_PropertyInfo = 
{
	&t43_TI, "black", &m436_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m637_MI;
static PropertyInfo t43____yellow_PropertyInfo = 
{
	&t43_TI, "yellow", &m637_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m423_MI;
static PropertyInfo t43____grey_PropertyInfo = 
{
	&t43_TI, "grey", &m423_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t43_PIs[] =
{
	&t43____red_PropertyInfo,
	&t43____green_PropertyInfo,
	&t43____white_PropertyInfo,
	&t43____black_PropertyInfo,
	&t43____yellow_PropertyInfo,
	&t43____grey_PropertyInfo,
	NULL
};
extern MethodInfo m2629_MI;
extern MethodInfo m3416_MI;
extern MethodInfo m3415_MI;
static Il2CppMethodReference t43_VT[] =
{
	&m2629_MI,
	&m646_MI,
	&m3416_MI,
	&m3415_MI,
};
static bool t43_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t43_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t666 * tmp;
		tmp = (t666 *)il2cpp_codegen_object_new (&t666_TI);
		m3103(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m3103_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t43__CustomAttributeCache = {
1,
NULL,
&t43_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern CustomAttributesCache t43__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t43_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t43_VT, t43_VTIGM, NULL};
TypeInfo t43_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Color", "UnityEngine", t43_MIs, t43_PIs, t43_FIs, NULL, &t43_TI, NULL, &t43__CustomAttributeCache, &t43_0_0_0, &t43_1_0_0, &t43_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t43)+ sizeof (Il2CppObject), sizeof (t43)+ sizeof (Il2CppObject), 0, sizeof(t43 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 14, 6, 4, 0, 0, 4, 0, 0};
#include "t559.h"
// Metadata Definition UnityEngine.Color32
extern TypeInfo t559_TI;
#include "t559MD.h"
extern Il2CppType t575_0_0_0;
extern Il2CppType t575_0_0_0;
extern Il2CppType t575_0_0_0;
extern Il2CppType t575_0_0_0;
extern Il2CppType t575_0_0_0;
static ParameterInfo t559_m2585_ParameterInfos[] = 
{
	{"r", 0, 134218059, &EmptyCustomAttributesCache, &t575_0_0_0},
	{"g", 1, 134218060, &EmptyCustomAttributesCache, &t575_0_0_0},
	{"b", 2, 134218061, &EmptyCustomAttributesCache, &t575_0_0_0},
	{"a", 3, 134218062, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186_t186_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m2585_MI = 
{
	".ctor", (methodPointerType)&m2585, &t559_TI, &t122_0_0_0, RuntimeInvoker_t122_t186_t186_t186_t186, t559_m2585_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 401, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3419_MI = 
{
	"ToString", (methodPointerType)&m3419, &t559_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 402, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t559_m2621_ParameterInfos[] = 
{
	{"c", 0, 134218063, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern Il2CppType t559_0_0_0;
extern void* RuntimeInvoker_t559_t43 (MethodInfo* method, void* obj, void** args);
MethodInfo m2621_MI = 
{
	"op_Implicit", (methodPointerType)&m2621, &t559_TI, &t559_0_0_0, RuntimeInvoker_t559_t43, t559_m2621_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 1, false, false, 403, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t559_0_0_0;
extern Il2CppType t559_0_0_0;
static ParameterInfo t559_m2586_ParameterInfos[] = 
{
	{"c", 0, 134218064, &EmptyCustomAttributesCache, &t559_0_0_0},
};
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t43_t559 (MethodInfo* method, void* obj, void** args);
MethodInfo m2586_MI = 
{
	"op_Implicit", (methodPointerType)&m2586, &t559_TI, &t43_0_0_0, RuntimeInvoker_t43_t559, t559_m2586_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 1, false, false, 404, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t559_MIs[] =
{
	&m2585_MI,
	&m3419_MI,
	&m2621_MI,
	&m2586_MI,
	NULL
};
extern Il2CppType t575_0_0_6;
FieldInfo t559_f0_FieldInfo = 
{
	"r", &t575_0_0_6, &t559_TI, offsetof(t559, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t575_0_0_6;
FieldInfo t559_f1_FieldInfo = 
{
	"g", &t575_0_0_6, &t559_TI, offsetof(t559, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t575_0_0_6;
FieldInfo t559_f2_FieldInfo = 
{
	"b", &t575_0_0_6, &t559_TI, offsetof(t559, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t575_0_0_6;
FieldInfo t559_f3_FieldInfo = 
{
	"a", &t575_0_0_6, &t559_TI, offsetof(t559, f3) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t559_FIs[] =
{
	&t559_f0_FieldInfo,
	&t559_f1_FieldInfo,
	&t559_f2_FieldInfo,
	&t559_f3_FieldInfo,
	NULL
};
extern MethodInfo m3419_MI;
static Il2CppMethodReference t559_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m3419_MI,
};
static bool t559_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern TypeInfo t839_TI;
#include "t839.h"
#include "t839MD.h"
extern MethodInfo m4114_MI;
void t559_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t839 * tmp;
		tmp = (t839 *)il2cpp_codegen_object_new (&t839_TI);
		m4114(tmp, &m4114_MI);
		tmp->f0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t559__CustomAttributeCache = {
1,
NULL,
&t559_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t559_1_0_0;
extern CustomAttributesCache t559__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t559_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t559_VT, t559_VTIGM, NULL};
TypeInfo t559_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Color32", "UnityEngine", t559_MIs, NULL, t559_FIs, NULL, &t559_TI, NULL, &t559__CustomAttributeCache, &t559_0_0_0, &t559_1_0_0, &t559_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t559)+ sizeof (Il2CppObject), sizeof (t559)+ sizeof (Il2CppObject), 0, sizeof(t559 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 4, 0, 4, 0, 0, 4, 0, 0};
#include "t93.h"
// Metadata Definition UnityEngine.Quaternion
extern TypeInfo t93_TI;
#include "t93MD.h"
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t93_m1108_ParameterInfos[] = 
{
	{"x", 0, 134218065, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"y", 1, 134218066, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"z", 2, 134218067, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"w", 3, 134218068, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m1108_MI = 
{
	".ctor", (methodPointerType)&m1108, &t93_TI, &t122_0_0_0, RuntimeInvoker_t122_t123_t123_t123_t123, t93_m1108_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 405, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t93_0_0_0;
extern void* RuntimeInvoker_t93 (MethodInfo* method, void* obj, void** args);
MethodInfo m1059_MI = 
{
	"get_identity", (methodPointerType)&m1059, &t93_TI, &t93_0_0_0, RuntimeInvoker_t93, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 406, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t93_0_0_0;
extern Il2CppType t93_0_0_0;
extern Il2CppType t93_0_0_0;
static ParameterInfo t93_m3420_ParameterInfos[] = 
{
	{"a", 0, 134218069, &EmptyCustomAttributesCache, &t93_0_0_0},
	{"b", 1, 134218070, &EmptyCustomAttributesCache, &t93_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t93_t93 (MethodInfo* method, void* obj, void** args);
MethodInfo m3420_MI = 
{
	"Dot", (methodPointerType)&m3420, &t93_TI, &t123_0_0_0, RuntimeInvoker_t123_t93_t93, t93_m3420_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 407, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t93_m641_ParameterInfos[] = 
{
	{"forward", 0, 134218071, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t93_0_0_0;
extern void* RuntimeInvoker_t93_t13 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t93__CustomAttributeCache_m641;
MethodInfo m641_MI = 
{
	"LookRotation", (methodPointerType)&m641, &t93_TI, &t93_0_0_0, RuntimeInvoker_t93_t13, t93_m641_ParameterInfos, &t93__CustomAttributeCache_m641, 150, 0, 255, 1, false, false, 408, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_1_0_0;
extern Il2CppType t13_1_0_0;
static ParameterInfo t93_m3421_ParameterInfos[] = 
{
	{"forward", 0, 134218072, &EmptyCustomAttributesCache, &t13_1_0_0},
	{"upwards", 1, 134218073, &EmptyCustomAttributesCache, &t13_1_0_0},
};
extern Il2CppType t93_0_0_0;
extern void* RuntimeInvoker_t93_t946_t946 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t93__CustomAttributeCache_m3421;
MethodInfo m3421_MI = 
{
	"INTERNAL_CALL_LookRotation", (methodPointerType)&m3421, &t93_TI, &t93_0_0_0, RuntimeInvoker_t93_t946_t946, t93_m3421_ParameterInfos, &t93__CustomAttributeCache_m3421, 145, 4096, 255, 2, false, false, 409, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t93_0_0_0;
static ParameterInfo t93_m2864_ParameterInfos[] = 
{
	{"rotation", 0, 134218074, &EmptyCustomAttributesCache, &t93_0_0_0},
};
extern Il2CppType t93_0_0_0;
extern void* RuntimeInvoker_t93_t93 (MethodInfo* method, void* obj, void** args);
MethodInfo m2864_MI = 
{
	"Inverse", (methodPointerType)&m2864, &t93_TI, &t93_0_0_0, RuntimeInvoker_t93_t93, t93_m2864_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 410, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t93_1_0_0;
extern Il2CppType t93_1_0_0;
static ParameterInfo t93_m3422_ParameterInfos[] = 
{
	{"rotation", 0, 134218075, &EmptyCustomAttributesCache, &t93_1_0_0},
};
extern Il2CppType t93_0_0_0;
extern void* RuntimeInvoker_t93_t950 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t93__CustomAttributeCache_m3422;
MethodInfo m3422_MI = 
{
	"INTERNAL_CALL_Inverse", (methodPointerType)&m3422, &t93_TI, &t93_0_0_0, RuntimeInvoker_t93_t950, t93_m3422_ParameterInfos, &t93__CustomAttributeCache_m3422, 145, 4096, 255, 1, false, false, 411, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3423_MI = 
{
	"ToString", (methodPointerType)&m3423, &t93_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 412, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3424_MI = 
{
	"get_eulerAngles", (methodPointerType)&m3424, &t93_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 413, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t93_m623_ParameterInfos[] = 
{
	{"x", 0, 134218076, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"y", 1, 134218077, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"z", 2, 134218078, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t93_0_0_0;
extern void* RuntimeInvoker_t93_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m623_MI = 
{
	"Euler", (methodPointerType)&m623, &t93_TI, &t93_0_0_0, RuntimeInvoker_t93_t123_t123_t123, t93_m623_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 414, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t93_m3425_ParameterInfos[] = 
{
	{"euler", 0, 134218079, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t93_0_0_0;
extern void* RuntimeInvoker_t93_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3425_MI = 
{
	"Euler", (methodPointerType)&m3425, &t93_TI, &t93_0_0_0, RuntimeInvoker_t93_t13, t93_m3425_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 415, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t93_0_0_0;
static ParameterInfo t93_m3426_ParameterInfos[] = 
{
	{"rotation", 0, 134218080, &EmptyCustomAttributesCache, &t93_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t93 (MethodInfo* method, void* obj, void** args);
MethodInfo m3426_MI = 
{
	"Internal_ToEulerRad", (methodPointerType)&m3426, &t93_TI, &t13_0_0_0, RuntimeInvoker_t13_t93, t93_m3426_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 416, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t93_1_0_0;
static ParameterInfo t93_m3427_ParameterInfos[] = 
{
	{"rotation", 0, 134218081, &EmptyCustomAttributesCache, &t93_1_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t950 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t93__CustomAttributeCache_m3427;
MethodInfo m3427_MI = 
{
	"INTERNAL_CALL_Internal_ToEulerRad", (methodPointerType)&m3427, &t93_TI, &t13_0_0_0, RuntimeInvoker_t13_t950, t93_m3427_ParameterInfos, &t93__CustomAttributeCache_m3427, 145, 4096, 255, 1, false, false, 417, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t93_m3428_ParameterInfos[] = 
{
	{"euler", 0, 134218082, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t93_0_0_0;
extern void* RuntimeInvoker_t93_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3428_MI = 
{
	"Internal_FromEulerRad", (methodPointerType)&m3428, &t93_TI, &t93_0_0_0, RuntimeInvoker_t93_t13, t93_m3428_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 418, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_1_0_0;
static ParameterInfo t93_m3429_ParameterInfos[] = 
{
	{"euler", 0, 134218083, &EmptyCustomAttributesCache, &t13_1_0_0},
};
extern Il2CppType t93_0_0_0;
extern void* RuntimeInvoker_t93_t946 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t93__CustomAttributeCache_m3429;
MethodInfo m3429_MI = 
{
	"INTERNAL_CALL_Internal_FromEulerRad", (methodPointerType)&m3429, &t93_TI, &t93_0_0_0, RuntimeInvoker_t93_t946, t93_m3429_ParameterInfos, &t93__CustomAttributeCache_m3429, 145, 4096, 255, 1, false, false, 419, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3430_MI = 
{
	"GetHashCode", (methodPointerType)&m3430, &t93_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 420, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t93_m3431_ParameterInfos[] = 
{
	{"other", 0, 134218084, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3431_MI = 
{
	"Equals", (methodPointerType)&m3431, &t93_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t93_m3431_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 421, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t93_0_0_0;
extern Il2CppType t93_0_0_0;
static ParameterInfo t93_m624_ParameterInfos[] = 
{
	{"lhs", 0, 134218085, &EmptyCustomAttributesCache, &t93_0_0_0},
	{"rhs", 1, 134218086, &EmptyCustomAttributesCache, &t93_0_0_0},
};
extern Il2CppType t93_0_0_0;
extern void* RuntimeInvoker_t93_t93_t93 (MethodInfo* method, void* obj, void** args);
MethodInfo m624_MI = 
{
	"op_Multiply", (methodPointerType)&m624, &t93_TI, &t93_0_0_0, RuntimeInvoker_t93_t93_t93, t93_m624_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 422, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t93_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t93_m627_ParameterInfos[] = 
{
	{"rotation", 0, 134218087, &EmptyCustomAttributesCache, &t93_0_0_0},
	{"point", 1, 134218088, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t93_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m627_MI = 
{
	"op_Multiply", (methodPointerType)&m627, &t93_TI, &t13_0_0_0, RuntimeInvoker_t13_t93_t13, t93_m627_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 423, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t93_0_0_0;
extern Il2CppType t93_0_0_0;
static ParameterInfo t93_m2775_ParameterInfos[] = 
{
	{"lhs", 0, 134218089, &EmptyCustomAttributesCache, &t93_0_0_0},
	{"rhs", 1, 134218090, &EmptyCustomAttributesCache, &t93_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t93_t93 (MethodInfo* method, void* obj, void** args);
MethodInfo m2775_MI = 
{
	"op_Inequality", (methodPointerType)&m2775, &t93_TI, &t124_0_0_0, RuntimeInvoker_t124_t93_t93, t93_m2775_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 424, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t93_MIs[] =
{
	&m1108_MI,
	&m1059_MI,
	&m3420_MI,
	&m641_MI,
	&m3421_MI,
	&m2864_MI,
	&m3422_MI,
	&m3423_MI,
	&m3424_MI,
	&m623_MI,
	&m3425_MI,
	&m3426_MI,
	&m3427_MI,
	&m3428_MI,
	&m3429_MI,
	&m3430_MI,
	&m3431_MI,
	&m624_MI,
	&m627_MI,
	&m2775_MI,
	NULL
};
extern Il2CppType t123_0_0_32854;
FieldInfo t93_f0_FieldInfo = 
{
	"kEpsilon", &t123_0_0_32854, &t93_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t93_f1_FieldInfo = 
{
	"x", &t123_0_0_6, &t93_TI, offsetof(t93, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t93_f2_FieldInfo = 
{
	"y", &t123_0_0_6, &t93_TI, offsetof(t93, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t93_f3_FieldInfo = 
{
	"z", &t123_0_0_6, &t93_TI, offsetof(t93, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t93_f4_FieldInfo = 
{
	"w", &t123_0_0_6, &t93_TI, offsetof(t93, f4) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t93_FIs[] =
{
	&t93_f0_FieldInfo,
	&t93_f1_FieldInfo,
	&t93_f2_FieldInfo,
	&t93_f3_FieldInfo,
	&t93_f4_FieldInfo,
	NULL
};
static const float t93_f0_DefaultValueData = 1.0E-06f;
static Il2CppFieldDefaultValueEntry t93_f0_DefaultValue = 
{
	&t93_f0_FieldInfo, { (char*)&t93_f0_DefaultValueData, &t123_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t93_FDVs[] = 
{
	&t93_f0_DefaultValue,
	NULL
};
extern MethodInfo m1059_MI;
static PropertyInfo t93____identity_PropertyInfo = 
{
	&t93_TI, "identity", &m1059_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3424_MI;
static PropertyInfo t93____eulerAngles_PropertyInfo = 
{
	&t93_TI, "eulerAngles", &m3424_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t93_PIs[] =
{
	&t93____identity_PropertyInfo,
	&t93____eulerAngles_PropertyInfo,
	NULL
};
extern MethodInfo m3431_MI;
extern MethodInfo m3430_MI;
extern MethodInfo m3423_MI;
static Il2CppMethodReference t93_VT[] =
{
	&m3431_MI,
	&m646_MI,
	&m3430_MI,
	&m3423_MI,
};
static bool t93_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t93_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t666 * tmp;
		tmp = (t666 *)il2cpp_codegen_object_new (&t666_TI);
		m3103(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m3103_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t93_CustomAttributesCacheGenerator_m641(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t874 * tmp;
		tmp = (t874 *)il2cpp_codegen_object_new (&t874_TI);
		m4220(tmp, &m4220_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t93_CustomAttributesCacheGenerator_m3421(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t93_CustomAttributesCacheGenerator_m3422(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t93_CustomAttributesCacheGenerator_m3427(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t93_CustomAttributesCacheGenerator_m3429(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t93__CustomAttributeCache = {
1,
NULL,
&t93_CustomAttributesCacheGenerator
};
CustomAttributesCache t93__CustomAttributeCache_m641 = {
1,
NULL,
&t93_CustomAttributesCacheGenerator_m641
};
CustomAttributesCache t93__CustomAttributeCache_m3421 = {
1,
NULL,
&t93_CustomAttributesCacheGenerator_m3421
};
CustomAttributesCache t93__CustomAttributeCache_m3422 = {
1,
NULL,
&t93_CustomAttributesCacheGenerator_m3422
};
CustomAttributesCache t93__CustomAttributeCache_m3427 = {
1,
NULL,
&t93_CustomAttributesCacheGenerator_m3427
};
CustomAttributesCache t93__CustomAttributeCache_m3429 = {
1,
NULL,
&t93_CustomAttributesCacheGenerator_m3429
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern CustomAttributesCache t93__CustomAttributeCache;
extern CustomAttributesCache t93__CustomAttributeCache_m641;
extern CustomAttributesCache t93__CustomAttributeCache_m3421;
extern CustomAttributesCache t93__CustomAttributeCache_m3422;
extern CustomAttributesCache t93__CustomAttributeCache_m3427;
extern CustomAttributesCache t93__CustomAttributeCache_m3429;
const Il2CppTypeDefinitionMetadata t93_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t93_VT, t93_VTIGM, NULL};
TypeInfo t93_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Quaternion", "UnityEngine", t93_MIs, t93_PIs, t93_FIs, NULL, &t93_TI, NULL, &t93__CustomAttributeCache, &t93_0_0_0, &t93_1_0_0, &t93_DM, NULL, NULL, NULL, t93_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t93)+ sizeof (Il2CppObject), sizeof (t93)+ sizeof (Il2CppObject), 0, sizeof(t93 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 20, 2, 5, 0, 0, 4, 0, 0};
#include "t441.h"
// Metadata Definition UnityEngine.Rect
extern TypeInfo t441_TI;
#include "t441MD.h"
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t441_m2820_ParameterInfos[] = 
{
	{"left", 0, 134218091, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"top", 1, 134218092, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"width", 2, 134218093, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"height", 3, 134218094, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2820_MI = 
{
	".ctor", (methodPointerType)&m2820, &t441_TI, &t122_0_0_0, RuntimeInvoker_t122_t123_t123_t123_t123, t441_m2820_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 425, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2619_MI = 
{
	"get_x", (methodPointerType)&m2619, &t441_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 426, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t441_m2686_ParameterInfos[] = 
{
	{"value", 0, 134218095, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2686_MI = 
{
	"set_x", (methodPointerType)&m2686, &t441_TI, &t122_0_0_0, RuntimeInvoker_t122_t123, t441_m2686_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 427, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2620_MI = 
{
	"get_y", (methodPointerType)&m2620, &t441_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 428, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t441_m2684_ParameterInfos[] = 
{
	{"value", 0, 134218096, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2684_MI = 
{
	"set_y", (methodPointerType)&m2684, &t441_TI, &t122_0_0_0, RuntimeInvoker_t122_t123, t441_m2684_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 429, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2695_MI = 
{
	"get_position", (methodPointerType)&m2695, &t441_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 430, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2825_MI = 
{
	"get_center", (methodPointerType)&m2825, &t441_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 431, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2614_MI = 
{
	"get_width", (methodPointerType)&m2614, &t441_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 432, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t441_m2685_ParameterInfos[] = 
{
	{"value", 0, 134218097, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2685_MI = 
{
	"set_width", (methodPointerType)&m2685, &t441_TI, &t122_0_0_0, RuntimeInvoker_t122_t123, t441_m2685_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 433, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2615_MI = 
{
	"get_height", (methodPointerType)&m2615, &t441_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 434, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t441_m2682_ParameterInfos[] = 
{
	{"value", 0, 134218098, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2682_MI = 
{
	"set_height", (methodPointerType)&m2682, &t441_TI, &t122_0_0_0, RuntimeInvoker_t122_t123, t441_m2682_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 435, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2678_MI = 
{
	"get_size", (methodPointerType)&m2678, &t441_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 436, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2718_MI = 
{
	"get_xMin", (methodPointerType)&m2718, &t441_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 437, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2717_MI = 
{
	"get_yMin", (methodPointerType)&m2717, &t441_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 438, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2703_MI = 
{
	"get_xMax", (methodPointerType)&m2703, &t441_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 439, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2705_MI = 
{
	"get_yMax", (methodPointerType)&m2705, &t441_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 440, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3432_MI = 
{
	"ToString", (methodPointerType)&m3432, &t441_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 441, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t441_m3433_ParameterInfos[] = 
{
	{"point", 0, 134218099, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3433_MI = 
{
	"Contains", (methodPointerType)&m3433, &t441_TI, &t124_0_0_0, RuntimeInvoker_t124_t13, t441_m3433_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 442, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3434_MI = 
{
	"GetHashCode", (methodPointerType)&m3434, &t441_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 443, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t441_m3435_ParameterInfos[] = 
{
	{"other", 0, 134218100, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3435_MI = 
{
	"Equals", (methodPointerType)&m3435, &t441_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t441_m3435_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 444, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t441_0_0_0;
extern Il2CppType t441_0_0_0;
static ParameterInfo t441_m2819_ParameterInfos[] = 
{
	{"lhs", 0, 134218101, &EmptyCustomAttributesCache, &t441_0_0_0},
	{"rhs", 1, 134218102, &EmptyCustomAttributesCache, &t441_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t441_t441 (MethodInfo* method, void* obj, void** args);
MethodInfo m2819_MI = 
{
	"op_Equality", (methodPointerType)&m2819, &t441_TI, &t124_0_0_0, RuntimeInvoker_t124_t441_t441, t441_m2819_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 445, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t441_MIs[] =
{
	&m2820_MI,
	&m2619_MI,
	&m2686_MI,
	&m2620_MI,
	&m2684_MI,
	&m2695_MI,
	&m2825_MI,
	&m2614_MI,
	&m2685_MI,
	&m2615_MI,
	&m2682_MI,
	&m2678_MI,
	&m2718_MI,
	&m2717_MI,
	&m2703_MI,
	&m2705_MI,
	&m3432_MI,
	&m3433_MI,
	&m3434_MI,
	&m3435_MI,
	&m2819_MI,
	NULL
};
extern Il2CppType t123_0_0_1;
FieldInfo t441_f0_FieldInfo = 
{
	"m_XMin", &t123_0_0_1, &t441_TI, offsetof(t441, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t441_f1_FieldInfo = 
{
	"m_YMin", &t123_0_0_1, &t441_TI, offsetof(t441, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t441_f2_FieldInfo = 
{
	"m_Width", &t123_0_0_1, &t441_TI, offsetof(t441, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t441_f3_FieldInfo = 
{
	"m_Height", &t123_0_0_1, &t441_TI, offsetof(t441, f3) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t441_FIs[] =
{
	&t441_f0_FieldInfo,
	&t441_f1_FieldInfo,
	&t441_f2_FieldInfo,
	&t441_f3_FieldInfo,
	NULL
};
extern MethodInfo m2619_MI;
extern MethodInfo m2686_MI;
static PropertyInfo t441____x_PropertyInfo = 
{
	&t441_TI, "x", &m2619_MI, &m2686_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2620_MI;
extern MethodInfo m2684_MI;
static PropertyInfo t441____y_PropertyInfo = 
{
	&t441_TI, "y", &m2620_MI, &m2684_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2695_MI;
static PropertyInfo t441____position_PropertyInfo = 
{
	&t441_TI, "position", &m2695_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2825_MI;
static PropertyInfo t441____center_PropertyInfo = 
{
	&t441_TI, "center", &m2825_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2614_MI;
extern MethodInfo m2685_MI;
static PropertyInfo t441____width_PropertyInfo = 
{
	&t441_TI, "width", &m2614_MI, &m2685_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2615_MI;
extern MethodInfo m2682_MI;
static PropertyInfo t441____height_PropertyInfo = 
{
	&t441_TI, "height", &m2615_MI, &m2682_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2678_MI;
static PropertyInfo t441____size_PropertyInfo = 
{
	&t441_TI, "size", &m2678_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2718_MI;
static PropertyInfo t441____xMin_PropertyInfo = 
{
	&t441_TI, "xMin", &m2718_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2717_MI;
static PropertyInfo t441____yMin_PropertyInfo = 
{
	&t441_TI, "yMin", &m2717_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2703_MI;
static PropertyInfo t441____xMax_PropertyInfo = 
{
	&t441_TI, "xMax", &m2703_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2705_MI;
static PropertyInfo t441____yMax_PropertyInfo = 
{
	&t441_TI, "yMax", &m2705_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t441_PIs[] =
{
	&t441____x_PropertyInfo,
	&t441____y_PropertyInfo,
	&t441____position_PropertyInfo,
	&t441____center_PropertyInfo,
	&t441____width_PropertyInfo,
	&t441____height_PropertyInfo,
	&t441____size_PropertyInfo,
	&t441____xMin_PropertyInfo,
	&t441____yMin_PropertyInfo,
	&t441____xMax_PropertyInfo,
	&t441____yMax_PropertyInfo,
	NULL
};
extern MethodInfo m3435_MI;
extern MethodInfo m3434_MI;
extern MethodInfo m3432_MI;
static Il2CppMethodReference t441_VT[] =
{
	&m3435_MI,
	&m646_MI,
	&m3434_MI,
	&m3432_MI,
};
static bool t441_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
const Il2CppTypeDefinitionMetadata t441_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t441_VT, t441_VTIGM, NULL};
TypeInfo t441_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Rect", "UnityEngine", t441_MIs, t441_PIs, t441_FIs, NULL, &t441_TI, NULL, &EmptyCustomAttributesCache, &t441_0_0_0, &t441_1_0_0, &t441_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t441)+ sizeof (Il2CppObject), sizeof (t441)+ sizeof (Il2CppObject), 0, sizeof(t441 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 21, 11, 4, 0, 0, 4, 0, 0};
#include "t46.h"
// Metadata Definition UnityEngine.Matrix4x4
extern TypeInfo t46_TI;
#include "t46MD.h"
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t46_m3436_ParameterInfos[] = 
{
	{"row", 0, 134218103, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"column", 1, 134218104, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3436_MI = 
{
	"get_Item", (methodPointerType)&m3436, &t46_TI, &t123_0_0_0, RuntimeInvoker_t123_t125_t125, t46_m3436_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 2, false, false, 446, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t46_m3437_ParameterInfos[] = 
{
	{"row", 0, 134218105, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"column", 1, 134218106, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 2, 134218107, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t125_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3437_MI = 
{
	"set_Item", (methodPointerType)&m3437, &t46_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t125_t123, t46_m3437_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 3, false, false, 447, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t46_m472_ParameterInfos[] = 
{
	{"index", 0, 134218108, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m472_MI = 
{
	"get_Item", (methodPointerType)&m472, &t46_TI, &t123_0_0_0, RuntimeInvoker_t123_t125, t46_m472_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 448, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t46_m473_ParameterInfos[] = 
{
	{"index", 0, 134218109, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134218110, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m473_MI = 
{
	"set_Item", (methodPointerType)&m473, &t46_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t123, t46_m473_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 2, false, false, 449, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3438_MI = 
{
	"GetHashCode", (methodPointerType)&m3438, &t46_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 450, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t46_m3439_ParameterInfos[] = 
{
	{"other", 0, 134218111, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3439_MI = 
{
	"Equals", (methodPointerType)&m3439, &t46_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t46_m3439_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 451, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t46_0_0_0;
extern Il2CppType t46_0_0_0;
static ParameterInfo t46_m3440_ParameterInfos[] = 
{
	{"m", 0, 134218112, &EmptyCustomAttributesCache, &t46_0_0_0},
};
extern Il2CppType t46_0_0_0;
extern void* RuntimeInvoker_t46_t46 (MethodInfo* method, void* obj, void** args);
MethodInfo m3440_MI = 
{
	"Inverse", (methodPointerType)&m3440, &t46_TI, &t46_0_0_0, RuntimeInvoker_t46_t46, t46_m3440_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 452, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t46_1_0_0;
extern Il2CppType t46_1_0_0;
static ParameterInfo t46_m3441_ParameterInfos[] = 
{
	{"m", 0, 134218113, &EmptyCustomAttributesCache, &t46_1_0_0},
};
extern Il2CppType t46_0_0_0;
extern void* RuntimeInvoker_t46_t192 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t46__CustomAttributeCache_m3441;
MethodInfo m3441_MI = 
{
	"INTERNAL_CALL_Inverse", (methodPointerType)&m3441, &t46_TI, &t46_0_0_0, RuntimeInvoker_t46_t192, t46_m3441_ParameterInfos, &t46__CustomAttributeCache_m3441, 145, 4096, 255, 1, false, false, 453, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t46_0_0_0;
static ParameterInfo t46_m3442_ParameterInfos[] = 
{
	{"m", 0, 134218114, &EmptyCustomAttributesCache, &t46_0_0_0},
};
extern Il2CppType t46_0_0_0;
extern void* RuntimeInvoker_t46_t46 (MethodInfo* method, void* obj, void** args);
MethodInfo m3442_MI = 
{
	"Transpose", (methodPointerType)&m3442, &t46_TI, &t46_0_0_0, RuntimeInvoker_t46_t46, t46_m3442_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 454, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t46_1_0_0;
static ParameterInfo t46_m3443_ParameterInfos[] = 
{
	{"m", 0, 134218115, &EmptyCustomAttributesCache, &t46_1_0_0},
};
extern Il2CppType t46_0_0_0;
extern void* RuntimeInvoker_t46_t192 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t46__CustomAttributeCache_m3443;
MethodInfo m3443_MI = 
{
	"INTERNAL_CALL_Transpose", (methodPointerType)&m3443, &t46_TI, &t46_0_0_0, RuntimeInvoker_t46_t192, t46_m3443_ParameterInfos, &t46__CustomAttributeCache_m3443, 145, 4096, 255, 1, false, false, 455, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t46_0_0_0;
extern Il2CppType t46_1_0_2;
static ParameterInfo t46_m3444_ParameterInfos[] = 
{
	{"inMatrix", 0, 134218116, &EmptyCustomAttributesCache, &t46_0_0_0},
	{"dest", 1, 134218117, &EmptyCustomAttributesCache, &t46_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t46_t192 (MethodInfo* method, void* obj, void** args);
MethodInfo m3444_MI = 
{
	"Invert", (methodPointerType)&m3444, &t46_TI, &t124_0_0_0, RuntimeInvoker_t124_t46_t192, t46_m3444_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 456, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t46_1_0_0;
extern Il2CppType t46_1_0_2;
static ParameterInfo t46_m3445_ParameterInfos[] = 
{
	{"inMatrix", 0, 134218118, &EmptyCustomAttributesCache, &t46_1_0_0},
	{"dest", 1, 134218119, &EmptyCustomAttributesCache, &t46_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t192_t192 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t46__CustomAttributeCache_m3445;
MethodInfo m3445_MI = 
{
	"INTERNAL_CALL_Invert", (methodPointerType)&m3445, &t46_TI, &t124_0_0_0, RuntimeInvoker_t124_t192_t192, t46_m3445_ParameterInfos, &t46__CustomAttributeCache_m3445, 145, 4096, 255, 2, false, false, 457, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t46_0_0_0;
extern void* RuntimeInvoker_t46 (MethodInfo* method, void* obj, void** args);
MethodInfo m469_MI = 
{
	"get_inverse", (methodPointerType)&m469, &t46_TI, &t46_0_0_0, RuntimeInvoker_t46, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 458, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t46_0_0_0;
extern void* RuntimeInvoker_t46 (MethodInfo* method, void* obj, void** args);
MethodInfo m3446_MI = 
{
	"get_transpose", (methodPointerType)&m3446, &t46_TI, &t46_0_0_0, RuntimeInvoker_t46, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 459, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t46__CustomAttributeCache_m3447;
MethodInfo m3447_MI = 
{
	"get_isIdentity", (methodPointerType)&m3447, &t46_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &t46__CustomAttributeCache_m3447, 2182, 4096, 255, 0, false, false, 460, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t46_m3448_ParameterInfos[] = 
{
	{"i", 0, 134218120, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3448_MI = 
{
	"GetColumn", (methodPointerType)&m3448, &t46_TI, &t47_0_0_0, RuntimeInvoker_t47_t125, t46_m3448_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 461, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t46_m3449_ParameterInfos[] = 
{
	{"i", 0, 134218121, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3449_MI = 
{
	"GetRow", (methodPointerType)&m3449, &t46_TI, &t47_0_0_0, RuntimeInvoker_t47_t125, t46_m3449_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 462, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t46_m3450_ParameterInfos[] = 
{
	{"i", 0, 134218122, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"v", 1, 134218123, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m3450_MI = 
{
	"SetColumn", (methodPointerType)&m3450, &t46_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t47, t46_m3450_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 463, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t46_m3451_ParameterInfos[] = 
{
	{"i", 0, 134218124, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"v", 1, 134218125, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m3451_MI = 
{
	"SetRow", (methodPointerType)&m3451, &t46_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t47, t46_m3451_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 464, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t46_m460_ParameterInfos[] = 
{
	{"v", 0, 134218126, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m460_MI = 
{
	"MultiplyPoint", (methodPointerType)&m460, &t46_TI, &t13_0_0_0, RuntimeInvoker_t13_t13, t46_m460_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 465, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t46_m2848_ParameterInfos[] = 
{
	{"v", 0, 134218127, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m2848_MI = 
{
	"MultiplyPoint3x4", (methodPointerType)&m2848, &t46_TI, &t13_0_0_0, RuntimeInvoker_t13_t13, t46_m2848_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 466, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t46_m477_ParameterInfos[] = 
{
	{"v", 0, 134218128, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m477_MI = 
{
	"MultiplyVector", (methodPointerType)&m477, &t46_TI, &t13_0_0_0, RuntimeInvoker_t13_t13, t46_m477_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 467, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t46_m3452_ParameterInfos[] = 
{
	{"v", 0, 134218129, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t46_0_0_0;
extern void* RuntimeInvoker_t46_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3452_MI = 
{
	"Scale", (methodPointerType)&m3452, &t46_TI, &t46_0_0_0, RuntimeInvoker_t46_t13, t46_m3452_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 468, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t46_0_0_0;
extern void* RuntimeInvoker_t46 (MethodInfo* method, void* obj, void** args);
MethodInfo m459_MI = 
{
	"get_zero", (methodPointerType)&m459, &t46_TI, &t46_0_0_0, RuntimeInvoker_t46, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 469, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t46_0_0_0;
extern void* RuntimeInvoker_t46 (MethodInfo* method, void* obj, void** args);
MethodInfo m3453_MI = 
{
	"get_identity", (methodPointerType)&m3453, &t46_TI, &t46_0_0_0, RuntimeInvoker_t46, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 470, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t93_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t46_m3454_ParameterInfos[] = 
{
	{"pos", 0, 134218130, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"q", 1, 134218131, &EmptyCustomAttributesCache, &t93_0_0_0},
	{"s", 2, 134218132, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t13_t93_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3454_MI = 
{
	"SetTRS", (methodPointerType)&m3454, &t46_TI, &t122_0_0_0, RuntimeInvoker_t122_t13_t93_t13, t46_m3454_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 471, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t93_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t46_m3455_ParameterInfos[] = 
{
	{"pos", 0, 134218133, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"q", 1, 134218134, &EmptyCustomAttributesCache, &t93_0_0_0},
	{"s", 2, 134218135, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t46_0_0_0;
extern void* RuntimeInvoker_t46_t13_t93_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3455_MI = 
{
	"TRS", (methodPointerType)&m3455, &t46_TI, &t46_0_0_0, RuntimeInvoker_t46_t13_t93_t13, t46_m3455_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 472, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_1_0_0;
extern Il2CppType t93_1_0_0;
extern Il2CppType t13_1_0_0;
static ParameterInfo t46_m3456_ParameterInfos[] = 
{
	{"pos", 0, 134218136, &EmptyCustomAttributesCache, &t13_1_0_0},
	{"q", 1, 134218137, &EmptyCustomAttributesCache, &t93_1_0_0},
	{"s", 2, 134218138, &EmptyCustomAttributesCache, &t13_1_0_0},
};
extern Il2CppType t46_0_0_0;
extern void* RuntimeInvoker_t46_t946_t950_t946 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t46__CustomAttributeCache_m3456;
MethodInfo m3456_MI = 
{
	"INTERNAL_CALL_TRS", (methodPointerType)&m3456, &t46_TI, &t46_0_0_0, RuntimeInvoker_t46_t946_t950_t946, t46_m3456_ParameterInfos, &t46__CustomAttributeCache_m3456, 145, 4096, 255, 3, false, false, 473, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3457_MI = 
{
	"ToString", (methodPointerType)&m3457, &t46_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 474, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t46_m3458_ParameterInfos[] = 
{
	{"format", 0, 134218139, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3458_MI = 
{
	"ToString", (methodPointerType)&m3458, &t46_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t46_m3458_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 475, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t46_m3459_ParameterInfos[] = 
{
	{"left", 0, 134218140, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"right", 1, 134218141, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"bottom", 2, 134218142, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"top", 3, 134218143, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"zNear", 4, 134218144, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"zFar", 5, 134218145, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t46_0_0_0;
extern void* RuntimeInvoker_t46_t123_t123_t123_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t46__CustomAttributeCache_m3459;
MethodInfo m3459_MI = 
{
	"Ortho", (methodPointerType)&m3459, &t46_TI, &t46_0_0_0, RuntimeInvoker_t46_t123_t123_t123_t123_t123_t123, t46_m3459_ParameterInfos, &t46__CustomAttributeCache_m3459, 150, 4096, 255, 6, false, false, 476, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t46_m3460_ParameterInfos[] = 
{
	{"fov", 0, 134218146, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"aspect", 1, 134218147, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"zNear", 2, 134218148, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"zFar", 3, 134218149, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t46_0_0_0;
extern void* RuntimeInvoker_t46_t123_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t46__CustomAttributeCache_m3460;
MethodInfo m3460_MI = 
{
	"Perspective", (methodPointerType)&m3460, &t46_TI, &t46_0_0_0, RuntimeInvoker_t46_t123_t123_t123_t123, t46_m3460_ParameterInfos, &t46__CustomAttributeCache_m3460, 150, 4096, 255, 4, false, false, 477, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t46_0_0_0;
extern Il2CppType t46_0_0_0;
static ParameterInfo t46_m462_ParameterInfos[] = 
{
	{"lhs", 0, 134218150, &EmptyCustomAttributesCache, &t46_0_0_0},
	{"rhs", 1, 134218151, &EmptyCustomAttributesCache, &t46_0_0_0},
};
extern Il2CppType t46_0_0_0;
extern void* RuntimeInvoker_t46_t46_t46 (MethodInfo* method, void* obj, void** args);
MethodInfo m462_MI = 
{
	"op_Multiply", (methodPointerType)&m462, &t46_TI, &t46_0_0_0, RuntimeInvoker_t46_t46_t46, t46_m462_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 478, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t46_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t46_m470_ParameterInfos[] = 
{
	{"lhs", 0, 134218152, &EmptyCustomAttributesCache, &t46_0_0_0},
	{"v", 1, 134218153, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t46_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m470_MI = 
{
	"op_Multiply", (methodPointerType)&m470, &t46_TI, &t47_0_0_0, RuntimeInvoker_t47_t46_t47, t46_m470_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 479, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t46_0_0_0;
extern Il2CppType t46_0_0_0;
static ParameterInfo t46_m3461_ParameterInfos[] = 
{
	{"lhs", 0, 134218154, &EmptyCustomAttributesCache, &t46_0_0_0},
	{"rhs", 1, 134218155, &EmptyCustomAttributesCache, &t46_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t46_t46 (MethodInfo* method, void* obj, void** args);
MethodInfo m3461_MI = 
{
	"op_Equality", (methodPointerType)&m3461, &t46_TI, &t124_0_0_0, RuntimeInvoker_t124_t46_t46, t46_m3461_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 480, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t46_0_0_0;
extern Il2CppType t46_0_0_0;
static ParameterInfo t46_m3462_ParameterInfos[] = 
{
	{"lhs", 0, 134218156, &EmptyCustomAttributesCache, &t46_0_0_0},
	{"rhs", 1, 134218157, &EmptyCustomAttributesCache, &t46_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t46_t46 (MethodInfo* method, void* obj, void** args);
MethodInfo m3462_MI = 
{
	"op_Inequality", (methodPointerType)&m3462, &t46_TI, &t124_0_0_0, RuntimeInvoker_t124_t46_t46, t46_m3462_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 481, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t46_MIs[] =
{
	&m3436_MI,
	&m3437_MI,
	&m472_MI,
	&m473_MI,
	&m3438_MI,
	&m3439_MI,
	&m3440_MI,
	&m3441_MI,
	&m3442_MI,
	&m3443_MI,
	&m3444_MI,
	&m3445_MI,
	&m469_MI,
	&m3446_MI,
	&m3447_MI,
	&m3448_MI,
	&m3449_MI,
	&m3450_MI,
	&m3451_MI,
	&m460_MI,
	&m2848_MI,
	&m477_MI,
	&m3452_MI,
	&m459_MI,
	&m3453_MI,
	&m3454_MI,
	&m3455_MI,
	&m3456_MI,
	&m3457_MI,
	&m3458_MI,
	&m3459_MI,
	&m3460_MI,
	&m462_MI,
	&m470_MI,
	&m3461_MI,
	&m3462_MI,
	NULL
};
extern Il2CppType t123_0_0_6;
FieldInfo t46_f0_FieldInfo = 
{
	"m00", &t123_0_0_6, &t46_TI, offsetof(t46, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t46_f1_FieldInfo = 
{
	"m10", &t123_0_0_6, &t46_TI, offsetof(t46, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t46_f2_FieldInfo = 
{
	"m20", &t123_0_0_6, &t46_TI, offsetof(t46, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t46_f3_FieldInfo = 
{
	"m30", &t123_0_0_6, &t46_TI, offsetof(t46, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t46_f4_FieldInfo = 
{
	"m01", &t123_0_0_6, &t46_TI, offsetof(t46, f4) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t46_f5_FieldInfo = 
{
	"m11", &t123_0_0_6, &t46_TI, offsetof(t46, f5) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t46_f6_FieldInfo = 
{
	"m21", &t123_0_0_6, &t46_TI, offsetof(t46, f6) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t46_f7_FieldInfo = 
{
	"m31", &t123_0_0_6, &t46_TI, offsetof(t46, f7) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t46_f8_FieldInfo = 
{
	"m02", &t123_0_0_6, &t46_TI, offsetof(t46, f8) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t46_f9_FieldInfo = 
{
	"m12", &t123_0_0_6, &t46_TI, offsetof(t46, f9) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t46_f10_FieldInfo = 
{
	"m22", &t123_0_0_6, &t46_TI, offsetof(t46, f10) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t46_f11_FieldInfo = 
{
	"m32", &t123_0_0_6, &t46_TI, offsetof(t46, f11) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t46_f12_FieldInfo = 
{
	"m03", &t123_0_0_6, &t46_TI, offsetof(t46, f12) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t46_f13_FieldInfo = 
{
	"m13", &t123_0_0_6, &t46_TI, offsetof(t46, f13) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t46_f14_FieldInfo = 
{
	"m23", &t123_0_0_6, &t46_TI, offsetof(t46, f14) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t46_f15_FieldInfo = 
{
	"m33", &t123_0_0_6, &t46_TI, offsetof(t46, f15) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t46_FIs[] =
{
	&t46_f0_FieldInfo,
	&t46_f1_FieldInfo,
	&t46_f2_FieldInfo,
	&t46_f3_FieldInfo,
	&t46_f4_FieldInfo,
	&t46_f5_FieldInfo,
	&t46_f6_FieldInfo,
	&t46_f7_FieldInfo,
	&t46_f8_FieldInfo,
	&t46_f9_FieldInfo,
	&t46_f10_FieldInfo,
	&t46_f11_FieldInfo,
	&t46_f12_FieldInfo,
	&t46_f13_FieldInfo,
	&t46_f14_FieldInfo,
	&t46_f15_FieldInfo,
	NULL
};
extern MethodInfo m3436_MI;
extern MethodInfo m3437_MI;
static PropertyInfo t46____Item_t125_t125_PropertyInfo = 
{
	&t46_TI, "Item", &m3436_MI, &m3437_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m472_MI;
extern MethodInfo m473_MI;
static PropertyInfo t46____Item_t125_PropertyInfo = 
{
	&t46_TI, "Item", &m472_MI, &m473_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m469_MI;
static PropertyInfo t46____inverse_PropertyInfo = 
{
	&t46_TI, "inverse", &m469_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3446_MI;
static PropertyInfo t46____transpose_PropertyInfo = 
{
	&t46_TI, "transpose", &m3446_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3447_MI;
static PropertyInfo t46____isIdentity_PropertyInfo = 
{
	&t46_TI, "isIdentity", &m3447_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m459_MI;
static PropertyInfo t46____zero_PropertyInfo = 
{
	&t46_TI, "zero", &m459_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3453_MI;
static PropertyInfo t46____identity_PropertyInfo = 
{
	&t46_TI, "identity", &m3453_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t46_PIs[] =
{
	&t46____Item_t125_t125_PropertyInfo,
	&t46____Item_t125_PropertyInfo,
	&t46____inverse_PropertyInfo,
	&t46____transpose_PropertyInfo,
	&t46____isIdentity_PropertyInfo,
	&t46____zero_PropertyInfo,
	&t46____identity_PropertyInfo,
	NULL
};
extern MethodInfo m3439_MI;
extern MethodInfo m3438_MI;
extern MethodInfo m3457_MI;
static Il2CppMethodReference t46_VT[] =
{
	&m3439_MI,
	&m646_MI,
	&m3438_MI,
	&m3457_MI,
};
static bool t46_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t46_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t666 * tmp;
		tmp = (t666 *)il2cpp_codegen_object_new (&t666_TI);
		m3103(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m3103_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t46_CustomAttributesCacheGenerator_m3441(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t46_CustomAttributesCacheGenerator_m3443(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t46_CustomAttributesCacheGenerator_m3445(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t46_CustomAttributesCacheGenerator_m3447(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t46_CustomAttributesCacheGenerator_m3456(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t46_CustomAttributesCacheGenerator_m3459(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t46_CustomAttributesCacheGenerator_m3460(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t46__CustomAttributeCache = {
1,
NULL,
&t46_CustomAttributesCacheGenerator
};
CustomAttributesCache t46__CustomAttributeCache_m3441 = {
1,
NULL,
&t46_CustomAttributesCacheGenerator_m3441
};
CustomAttributesCache t46__CustomAttributeCache_m3443 = {
1,
NULL,
&t46_CustomAttributesCacheGenerator_m3443
};
CustomAttributesCache t46__CustomAttributeCache_m3445 = {
1,
NULL,
&t46_CustomAttributesCacheGenerator_m3445
};
CustomAttributesCache t46__CustomAttributeCache_m3447 = {
1,
NULL,
&t46_CustomAttributesCacheGenerator_m3447
};
CustomAttributesCache t46__CustomAttributeCache_m3456 = {
1,
NULL,
&t46_CustomAttributesCacheGenerator_m3456
};
CustomAttributesCache t46__CustomAttributeCache_m3459 = {
1,
NULL,
&t46_CustomAttributesCacheGenerator_m3459
};
CustomAttributesCache t46__CustomAttributeCache_m3460 = {
1,
NULL,
&t46_CustomAttributesCacheGenerator_m3460
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern CustomAttributesCache t46__CustomAttributeCache;
extern CustomAttributesCache t46__CustomAttributeCache_m3441;
extern CustomAttributesCache t46__CustomAttributeCache_m3443;
extern CustomAttributesCache t46__CustomAttributeCache_m3445;
extern CustomAttributesCache t46__CustomAttributeCache_m3447;
extern CustomAttributesCache t46__CustomAttributeCache_m3456;
extern CustomAttributesCache t46__CustomAttributeCache_m3459;
extern CustomAttributesCache t46__CustomAttributeCache_m3460;
const Il2CppTypeDefinitionMetadata t46_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t46_VT, t46_VTIGM, NULL};
TypeInfo t46_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Matrix4x4", "UnityEngine", t46_MIs, t46_PIs, t46_FIs, NULL, &t46_TI, NULL, &t46__CustomAttributeCache, &t46_0_0_0, &t46_1_0_0, &t46_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t46)+ sizeof (Il2CppObject), sizeof (t46)+ sizeof (Il2CppObject), 0, sizeof(t46 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 36, 7, 16, 0, 0, 4, 0, 0};
#include "t497.h"
// Metadata Definition UnityEngine.Bounds
extern TypeInfo t497_TI;
#include "t497MD.h"
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t497_m2842_ParameterInfos[] = 
{
	{"center", 0, 134218158, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"size", 1, 134218159, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m2842_MI = 
{
	".ctor", (methodPointerType)&m2842, &t497_TI, &t122_0_0_0, RuntimeInvoker_t122_t13_t13, t497_m2842_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 482, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3463_MI = 
{
	"GetHashCode", (methodPointerType)&m3463, &t497_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 483, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t497_m3464_ParameterInfos[] = 
{
	{"other", 0, 134218160, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3464_MI = 
{
	"Equals", (methodPointerType)&m3464, &t497_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t497_m3464_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 484, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m2843_MI = 
{
	"get_center", (methodPointerType)&m2843, &t497_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 485, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t497_m2845_ParameterInfos[] = 
{
	{"value", 0, 134218161, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m2845_MI = 
{
	"set_center", (methodPointerType)&m2845, &t497_TI, &t122_0_0_0, RuntimeInvoker_t122_t13, t497_m2845_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 486, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m2833_MI = 
{
	"get_size", (methodPointerType)&m2833, &t497_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 487, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t497_m2844_ParameterInfos[] = 
{
	{"value", 0, 134218162, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m2844_MI = 
{
	"set_size", (methodPointerType)&m2844, &t497_TI, &t122_0_0_0, RuntimeInvoker_t122_t13, t497_m2844_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 488, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3465_MI = 
{
	"get_extents", (methodPointerType)&m3465, &t497_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 489, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t497_m3466_ParameterInfos[] = 
{
	{"value", 0, 134218163, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3466_MI = 
{
	"set_extents", (methodPointerType)&m3466, &t497_TI, &t122_0_0_0, RuntimeInvoker_t122_t13, t497_m3466_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 490, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m2834_MI = 
{
	"get_min", (methodPointerType)&m2834, &t497_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 491, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t497_m3467_ParameterInfos[] = 
{
	{"value", 0, 134218164, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3467_MI = 
{
	"set_min", (methodPointerType)&m3467, &t497_TI, &t122_0_0_0, RuntimeInvoker_t122_t13, t497_m3467_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 492, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m2852_MI = 
{
	"get_max", (methodPointerType)&m2852, &t497_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 493, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t497_m3468_ParameterInfos[] = 
{
	{"value", 0, 134218165, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3468_MI = 
{
	"set_max", (methodPointerType)&m3468, &t497_TI, &t122_0_0_0, RuntimeInvoker_t122_t13, t497_m3468_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 494, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t497_m3469_ParameterInfos[] = 
{
	{"min", 0, 134218166, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"max", 1, 134218167, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3469_MI = 
{
	"SetMinMax", (methodPointerType)&m3469, &t497_TI, &t122_0_0_0, RuntimeInvoker_t122_t13_t13, t497_m3469_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 495, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t497_m2851_ParameterInfos[] = 
{
	{"point", 0, 134218168, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m2851_MI = 
{
	"Encapsulate", (methodPointerType)&m2851, &t497_TI, &t122_0_0_0, RuntimeInvoker_t122_t13, t497_m2851_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 496, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t497_0_0_0;
extern Il2CppType t497_0_0_0;
static ParameterInfo t497_m3470_ParameterInfos[] = 
{
	{"bounds", 0, 134218169, &EmptyCustomAttributesCache, &t497_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t497 (MethodInfo* method, void* obj, void** args);
MethodInfo m3470_MI = 
{
	"Encapsulate", (methodPointerType)&m3470, &t497_TI, &t122_0_0_0, RuntimeInvoker_t122_t497, t497_m3470_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 497, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t497_m3471_ParameterInfos[] = 
{
	{"amount", 0, 134218170, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3471_MI = 
{
	"Expand", (methodPointerType)&m3471, &t497_TI, &t122_0_0_0, RuntimeInvoker_t122_t123, t497_m3471_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 498, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t497_m3472_ParameterInfos[] = 
{
	{"amount", 0, 134218171, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3472_MI = 
{
	"Expand", (methodPointerType)&m3472, &t497_TI, &t122_0_0_0, RuntimeInvoker_t122_t13, t497_m3472_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 499, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t497_0_0_0;
static ParameterInfo t497_m3473_ParameterInfos[] = 
{
	{"bounds", 0, 134218172, &EmptyCustomAttributesCache, &t497_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t497 (MethodInfo* method, void* obj, void** args);
MethodInfo m3473_MI = 
{
	"Intersects", (methodPointerType)&m3473, &t497_TI, &t124_0_0_0, RuntimeInvoker_t124_t497, t497_m3473_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 500, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t497_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t497_m3474_ParameterInfos[] = 
{
	{"m", 0, 134218173, &EmptyCustomAttributesCache, &t497_0_0_0},
	{"point", 1, 134218174, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t497_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3474_MI = 
{
	"Internal_Contains", (methodPointerType)&m3474, &t497_TI, &t124_0_0_0, RuntimeInvoker_t124_t497_t13, t497_m3474_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 501, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t497_1_0_0;
extern Il2CppType t497_1_0_0;
extern Il2CppType t13_1_0_0;
static ParameterInfo t497_m3475_ParameterInfos[] = 
{
	{"m", 0, 134218175, &EmptyCustomAttributesCache, &t497_1_0_0},
	{"point", 1, 134218176, &EmptyCustomAttributesCache, &t13_1_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t951_t946 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t497__CustomAttributeCache_m3475;
MethodInfo m3475_MI = 
{
	"INTERNAL_CALL_Internal_Contains", (methodPointerType)&m3475, &t497_TI, &t124_0_0_0, RuntimeInvoker_t124_t951_t946, t497_m3475_ParameterInfos, &t497__CustomAttributeCache_m3475, 145, 4096, 255, 2, false, false, 502, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t497_m3476_ParameterInfos[] = 
{
	{"point", 0, 134218177, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3476_MI = 
{
	"Contains", (methodPointerType)&m3476, &t497_TI, &t124_0_0_0, RuntimeInvoker_t124_t13, t497_m3476_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 503, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t497_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t497_m3477_ParameterInfos[] = 
{
	{"m", 0, 134218178, &EmptyCustomAttributesCache, &t497_0_0_0},
	{"point", 1, 134218179, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t497_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3477_MI = 
{
	"Internal_SqrDistance", (methodPointerType)&m3477, &t497_TI, &t123_0_0_0, RuntimeInvoker_t123_t497_t13, t497_m3477_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 504, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t497_1_0_0;
extern Il2CppType t13_1_0_0;
static ParameterInfo t497_m3478_ParameterInfos[] = 
{
	{"m", 0, 134218180, &EmptyCustomAttributesCache, &t497_1_0_0},
	{"point", 1, 134218181, &EmptyCustomAttributesCache, &t13_1_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t951_t946 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t497__CustomAttributeCache_m3478;
MethodInfo m3478_MI = 
{
	"INTERNAL_CALL_Internal_SqrDistance", (methodPointerType)&m3478, &t497_TI, &t123_0_0_0, RuntimeInvoker_t123_t951_t946, t497_m3478_ParameterInfos, &t497__CustomAttributeCache_m3478, 145, 4096, 255, 2, false, false, 505, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t497_m3479_ParameterInfos[] = 
{
	{"point", 0, 134218182, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3479_MI = 
{
	"SqrDistance", (methodPointerType)&m3479, &t497_TI, &t123_0_0_0, RuntimeInvoker_t123_t13, t497_m3479_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 506, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t74_1_0_0;
extern Il2CppType t74_1_0_0;
extern Il2CppType t497_1_0_0;
extern Il2CppType t123_1_0_2;
extern Il2CppType t123_1_0_0;
static ParameterInfo t497_m3480_ParameterInfos[] = 
{
	{"ray", 0, 134218183, &EmptyCustomAttributesCache, &t74_1_0_0},
	{"bounds", 1, 134218184, &EmptyCustomAttributesCache, &t497_1_0_0},
	{"distance", 2, 134218185, &EmptyCustomAttributesCache, &t123_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t952_t951_t953 (MethodInfo* method, void* obj, void** args);
MethodInfo m3480_MI = 
{
	"Internal_IntersectRay", (methodPointerType)&m3480, &t497_TI, &t124_0_0_0, RuntimeInvoker_t124_t952_t951_t953, t497_m3480_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 507, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t74_1_0_0;
extern Il2CppType t497_1_0_0;
extern Il2CppType t123_1_0_2;
static ParameterInfo t497_m3481_ParameterInfos[] = 
{
	{"ray", 0, 134218186, &EmptyCustomAttributesCache, &t74_1_0_0},
	{"bounds", 1, 134218187, &EmptyCustomAttributesCache, &t497_1_0_0},
	{"distance", 2, 134218188, &EmptyCustomAttributesCache, &t123_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t952_t951_t953 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t497__CustomAttributeCache_m3481;
MethodInfo m3481_MI = 
{
	"INTERNAL_CALL_Internal_IntersectRay", (methodPointerType)&m3481, &t497_TI, &t124_0_0_0, RuntimeInvoker_t124_t952_t951_t953, t497_m3481_ParameterInfos, &t497__CustomAttributeCache_m3481, 145, 4096, 255, 3, false, false, 508, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t74_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t497_m3482_ParameterInfos[] = 
{
	{"ray", 0, 134218189, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t74 (MethodInfo* method, void* obj, void** args);
MethodInfo m3482_MI = 
{
	"IntersectRay", (methodPointerType)&m3482, &t497_TI, &t124_0_0_0, RuntimeInvoker_t124_t74, t497_m3482_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 509, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t74_0_0_0;
extern Il2CppType t123_1_0_2;
static ParameterInfo t497_m3483_ParameterInfos[] = 
{
	{"ray", 0, 134218190, &EmptyCustomAttributesCache, &t74_0_0_0},
	{"distance", 1, 134218191, &EmptyCustomAttributesCache, &t123_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t74_t953 (MethodInfo* method, void* obj, void** args);
MethodInfo m3483_MI = 
{
	"IntersectRay", (methodPointerType)&m3483, &t497_TI, &t124_0_0_0, RuntimeInvoker_t124_t74_t953, t497_m3483_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 510, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t497_1_0_0;
extern Il2CppType t13_1_0_0;
static ParameterInfo t497_m3484_ParameterInfos[] = 
{
	{"bounds", 0, 134218192, &EmptyCustomAttributesCache, &t497_1_0_0},
	{"point", 1, 134218193, &EmptyCustomAttributesCache, &t13_1_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t951_t946 (MethodInfo* method, void* obj, void** args);
MethodInfo m3484_MI = 
{
	"Internal_GetClosestPoint", (methodPointerType)&m3484, &t497_TI, &t13_0_0_0, RuntimeInvoker_t13_t951_t946, t497_m3484_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 511, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t497_1_0_0;
extern Il2CppType t13_1_0_0;
static ParameterInfo t497_m3485_ParameterInfos[] = 
{
	{"bounds", 0, 134218194, &EmptyCustomAttributesCache, &t497_1_0_0},
	{"point", 1, 134218195, &EmptyCustomAttributesCache, &t13_1_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t951_t946 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t497__CustomAttributeCache_m3485;
MethodInfo m3485_MI = 
{
	"INTERNAL_CALL_Internal_GetClosestPoint", (methodPointerType)&m3485, &t497_TI, &t13_0_0_0, RuntimeInvoker_t13_t951_t946, t497_m3485_ParameterInfos, &t497__CustomAttributeCache_m3485, 145, 4096, 255, 2, false, false, 512, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t497_m3486_ParameterInfos[] = 
{
	{"point", 0, 134218196, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3486_MI = 
{
	"ClosestPoint", (methodPointerType)&m3486, &t497_TI, &t13_0_0_0, RuntimeInvoker_t13_t13, t497_m3486_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 513, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3487_MI = 
{
	"ToString", (methodPointerType)&m3487, &t497_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 514, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t497_m3488_ParameterInfos[] = 
{
	{"format", 0, 134218197, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3488_MI = 
{
	"ToString", (methodPointerType)&m3488, &t497_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t497_m3488_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 515, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t497_0_0_0;
extern Il2CppType t497_0_0_0;
static ParameterInfo t497_m3489_ParameterInfos[] = 
{
	{"lhs", 0, 134218198, &EmptyCustomAttributesCache, &t497_0_0_0},
	{"rhs", 1, 134218199, &EmptyCustomAttributesCache, &t497_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t497_t497 (MethodInfo* method, void* obj, void** args);
MethodInfo m3489_MI = 
{
	"op_Equality", (methodPointerType)&m3489, &t497_TI, &t124_0_0_0, RuntimeInvoker_t124_t497_t497, t497_m3489_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 516, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t497_0_0_0;
extern Il2CppType t497_0_0_0;
static ParameterInfo t497_m2838_ParameterInfos[] = 
{
	{"lhs", 0, 134218200, &EmptyCustomAttributesCache, &t497_0_0_0},
	{"rhs", 1, 134218201, &EmptyCustomAttributesCache, &t497_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t497_t497 (MethodInfo* method, void* obj, void** args);
MethodInfo m2838_MI = 
{
	"op_Inequality", (methodPointerType)&m2838, &t497_TI, &t124_0_0_0, RuntimeInvoker_t124_t497_t497, t497_m2838_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 517, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t497_MIs[] =
{
	&m2842_MI,
	&m3463_MI,
	&m3464_MI,
	&m2843_MI,
	&m2845_MI,
	&m2833_MI,
	&m2844_MI,
	&m3465_MI,
	&m3466_MI,
	&m2834_MI,
	&m3467_MI,
	&m2852_MI,
	&m3468_MI,
	&m3469_MI,
	&m2851_MI,
	&m3470_MI,
	&m3471_MI,
	&m3472_MI,
	&m3473_MI,
	&m3474_MI,
	&m3475_MI,
	&m3476_MI,
	&m3477_MI,
	&m3478_MI,
	&m3479_MI,
	&m3480_MI,
	&m3481_MI,
	&m3482_MI,
	&m3483_MI,
	&m3484_MI,
	&m3485_MI,
	&m3486_MI,
	&m3487_MI,
	&m3488_MI,
	&m3489_MI,
	&m2838_MI,
	NULL
};
extern Il2CppType t13_0_0_1;
FieldInfo t497_f0_FieldInfo = 
{
	"m_Center", &t13_0_0_1, &t497_TI, offsetof(t497, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t13_0_0_1;
FieldInfo t497_f1_FieldInfo = 
{
	"m_Extents", &t13_0_0_1, &t497_TI, offsetof(t497, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t497_FIs[] =
{
	&t497_f0_FieldInfo,
	&t497_f1_FieldInfo,
	NULL
};
extern MethodInfo m2843_MI;
extern MethodInfo m2845_MI;
static PropertyInfo t497____center_PropertyInfo = 
{
	&t497_TI, "center", &m2843_MI, &m2845_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2833_MI;
extern MethodInfo m2844_MI;
static PropertyInfo t497____size_PropertyInfo = 
{
	&t497_TI, "size", &m2833_MI, &m2844_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3465_MI;
extern MethodInfo m3466_MI;
static PropertyInfo t497____extents_PropertyInfo = 
{
	&t497_TI, "extents", &m3465_MI, &m3466_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2834_MI;
extern MethodInfo m3467_MI;
static PropertyInfo t497____min_PropertyInfo = 
{
	&t497_TI, "min", &m2834_MI, &m3467_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2852_MI;
extern MethodInfo m3468_MI;
static PropertyInfo t497____max_PropertyInfo = 
{
	&t497_TI, "max", &m2852_MI, &m3468_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t497_PIs[] =
{
	&t497____center_PropertyInfo,
	&t497____size_PropertyInfo,
	&t497____extents_PropertyInfo,
	&t497____min_PropertyInfo,
	&t497____max_PropertyInfo,
	NULL
};
extern MethodInfo m3464_MI;
extern MethodInfo m3463_MI;
extern MethodInfo m3487_MI;
static Il2CppMethodReference t497_VT[] =
{
	&m3464_MI,
	&m646_MI,
	&m3463_MI,
	&m3487_MI,
};
static bool t497_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t497_CustomAttributesCacheGenerator_m3475(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t497_CustomAttributesCacheGenerator_m3478(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t497_CustomAttributesCacheGenerator_m3481(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t497_CustomAttributesCacheGenerator_m3485(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t497__CustomAttributeCache_m3475 = {
1,
NULL,
&t497_CustomAttributesCacheGenerator_m3475
};
CustomAttributesCache t497__CustomAttributeCache_m3478 = {
1,
NULL,
&t497_CustomAttributesCacheGenerator_m3478
};
CustomAttributesCache t497__CustomAttributeCache_m3481 = {
1,
NULL,
&t497_CustomAttributesCacheGenerator_m3481
};
CustomAttributesCache t497__CustomAttributeCache_m3485 = {
1,
NULL,
&t497_CustomAttributesCacheGenerator_m3485
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern CustomAttributesCache t497__CustomAttributeCache_m3475;
extern CustomAttributesCache t497__CustomAttributeCache_m3478;
extern CustomAttributesCache t497__CustomAttributeCache_m3481;
extern CustomAttributesCache t497__CustomAttributeCache_m3485;
const Il2CppTypeDefinitionMetadata t497_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t497_VT, t497_VTIGM, NULL};
TypeInfo t497_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Bounds", "UnityEngine", t497_MIs, t497_PIs, t497_FIs, NULL, &t497_TI, NULL, &EmptyCustomAttributesCache, &t497_0_0_0, &t497_1_0_0, &t497_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t497)+ sizeof (Il2CppObject), sizeof (t497)+ sizeof (Il2CppObject), 0, sizeof(t497 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 36, 5, 2, 0, 0, 4, 0, 0};
#include "t47.h"
// Metadata Definition UnityEngine.Vector4
extern TypeInfo t47_TI;
#include "t47MD.h"
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t47_m413_ParameterInfos[] = 
{
	{"x", 0, 134218202, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"y", 1, 134218203, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"z", 2, 134218204, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"w", 3, 134218205, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t123_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m413_MI = 
{
	".ctor", (methodPointerType)&m413, &t47_TI, &t122_0_0_0, RuntimeInvoker_t122_t123_t123_t123_t123, t47_m413_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 518, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t47_m474_ParameterInfos[] = 
{
	{"index", 0, 134218206, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m474_MI = 
{
	"get_Item", (methodPointerType)&m474, &t47_TI, &t123_0_0_0, RuntimeInvoker_t123_t125, t47_m474_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 519, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t47_m2698_ParameterInfos[] = 
{
	{"index", 0, 134218207, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134218208, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2698_MI = 
{
	"set_Item", (methodPointerType)&m2698, &t47_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t123, t47_m2698_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 2, false, false, 520, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3490_MI = 
{
	"GetHashCode", (methodPointerType)&m3490, &t47_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 521, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t47_m3491_ParameterInfos[] = 
{
	{"other", 0, 134218209, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3491_MI = 
{
	"Equals", (methodPointerType)&m3491, &t47_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t47_m3491_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 522, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3492_MI = 
{
	"ToString", (methodPointerType)&m3492, &t47_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 523, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t47_m471_ParameterInfos[] = 
{
	{"a", 0, 134218210, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"b", 1, 134218211, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m471_MI = 
{
	"Dot", (methodPointerType)&m471, &t47_TI, &t123_0_0_0, RuntimeInvoker_t123_t47_t47, t47_m471_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 524, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t47_m3493_ParameterInfos[] = 
{
	{"a", 0, 134218212, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m3493_MI = 
{
	"SqrMagnitude", (methodPointerType)&m3493, &t47_TI, &t123_0_0_0, RuntimeInvoker_t123_t47, t47_m3493_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 525, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2673_MI = 
{
	"get_sqrMagnitude", (methodPointerType)&m2673, &t47_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 526, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2679_MI = 
{
	"get_zero", (methodPointerType)&m2679, &t47_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 527, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t47_m3494_ParameterInfos[] = 
{
	{"a", 0, 134218213, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"b", 1, 134218214, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m3494_MI = 
{
	"op_Subtraction", (methodPointerType)&m3494, &t47_TI, &t47_0_0_0, RuntimeInvoker_t47_t47_t47, t47_m3494_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 528, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t47_m411_ParameterInfos[] = 
{
	{"a", 0, 134218215, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"d", 1, 134218216, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m411_MI = 
{
	"op_Multiply", (methodPointerType)&m411, &t47_TI, &t47_0_0_0, RuntimeInvoker_t47_t47_t123, t47_m411_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 529, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t47_m2692_ParameterInfos[] = 
{
	{"a", 0, 134218217, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"d", 1, 134218218, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2692_MI = 
{
	"op_Division", (methodPointerType)&m2692, &t47_TI, &t47_0_0_0, RuntimeInvoker_t47_t47_t123, t47_m2692_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 530, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t47_m3495_ParameterInfos[] = 
{
	{"lhs", 0, 134218219, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"rhs", 1, 134218220, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m3495_MI = 
{
	"op_Equality", (methodPointerType)&m3495, &t47_TI, &t124_0_0_0, RuntimeInvoker_t124_t47_t47, t47_m3495_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 531, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t47_m481_ParameterInfos[] = 
{
	{"v", 0, 134218221, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m481_MI = 
{
	"op_Implicit", (methodPointerType)&m481, &t47_TI, &t47_0_0_0, RuntimeInvoker_t47_t13, t47_m481_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 1, false, false, 532, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t47_MIs[] =
{
	&m413_MI,
	&m474_MI,
	&m2698_MI,
	&m3490_MI,
	&m3491_MI,
	&m3492_MI,
	&m471_MI,
	&m3493_MI,
	&m2673_MI,
	&m2679_MI,
	&m3494_MI,
	&m411_MI,
	&m2692_MI,
	&m3495_MI,
	&m481_MI,
	NULL
};
extern Il2CppType t123_0_0_32854;
FieldInfo t47_f0_FieldInfo = 
{
	"kEpsilon", &t123_0_0_32854, &t47_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t47_f1_FieldInfo = 
{
	"x", &t123_0_0_6, &t47_TI, offsetof(t47, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t47_f2_FieldInfo = 
{
	"y", &t123_0_0_6, &t47_TI, offsetof(t47, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t47_f3_FieldInfo = 
{
	"z", &t123_0_0_6, &t47_TI, offsetof(t47, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_6;
FieldInfo t47_f4_FieldInfo = 
{
	"w", &t123_0_0_6, &t47_TI, offsetof(t47, f4) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t47_FIs[] =
{
	&t47_f0_FieldInfo,
	&t47_f1_FieldInfo,
	&t47_f2_FieldInfo,
	&t47_f3_FieldInfo,
	&t47_f4_FieldInfo,
	NULL
};
static const float t47_f0_DefaultValueData = 1.0E-05f;
static Il2CppFieldDefaultValueEntry t47_f0_DefaultValue = 
{
	&t47_f0_FieldInfo, { (char*)&t47_f0_DefaultValueData, &t123_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t47_FDVs[] = 
{
	&t47_f0_DefaultValue,
	NULL
};
extern MethodInfo m474_MI;
extern MethodInfo m2698_MI;
static PropertyInfo t47____Item_PropertyInfo = 
{
	&t47_TI, "Item", &m474_MI, &m2698_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2673_MI;
static PropertyInfo t47____sqrMagnitude_PropertyInfo = 
{
	&t47_TI, "sqrMagnitude", &m2673_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2679_MI;
static PropertyInfo t47____zero_PropertyInfo = 
{
	&t47_TI, "zero", &m2679_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t47_PIs[] =
{
	&t47____Item_PropertyInfo,
	&t47____sqrMagnitude_PropertyInfo,
	&t47____zero_PropertyInfo,
	NULL
};
extern MethodInfo m3491_MI;
extern MethodInfo m3490_MI;
extern MethodInfo m3492_MI;
static Il2CppMethodReference t47_VT[] =
{
	&m3491_MI,
	&m646_MI,
	&m3490_MI,
	&m3492_MI,
};
static bool t47_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t47_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t666 * tmp;
		tmp = (t666 *)il2cpp_codegen_object_new (&t666_TI);
		m3103(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m3103_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t47__CustomAttributeCache = {
1,
NULL,
&t47_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t47_1_0_0;
extern CustomAttributesCache t47__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t47_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t47_VT, t47_VTIGM, NULL};
TypeInfo t47_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Vector4", "UnityEngine", t47_MIs, t47_PIs, t47_FIs, NULL, &t47_TI, NULL, &t47__CustomAttributeCache, &t47_0_0_0, &t47_1_0_0, &t47_DM, NULL, NULL, NULL, t47_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t47)+ sizeof (Il2CppObject), sizeof (t47)+ sizeof (Il2CppObject), 0, sizeof(t47 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 15, 3, 5, 0, 0, 4, 0, 0};
#include "t74.h"
// Metadata Definition UnityEngine.Ray
extern TypeInfo t74_TI;
#include "t74MD.h"
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t74_m581_ParameterInfos[] = 
{
	{"origin", 0, 134218222, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"direction", 1, 134218223, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m581_MI = 
{
	".ctor", (methodPointerType)&m581, &t74_TI, &t122_0_0_0, RuntimeInvoker_t122_t13_t13, t74_m581_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 533, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m563_MI = 
{
	"get_origin", (methodPointerType)&m563, &t74_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 534, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m564_MI = 
{
	"get_direction", (methodPointerType)&m564, &t74_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 535, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t74_m558_ParameterInfos[] = 
{
	{"distance", 0, 134218224, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m558_MI = 
{
	"GetPoint", (methodPointerType)&m558, &t74_TI, &t13_0_0_0, RuntimeInvoker_t13_t123, t74_m558_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 536, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3496_MI = 
{
	"ToString", (methodPointerType)&m3496, &t74_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 537, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t74_MIs[] =
{
	&m581_MI,
	&m563_MI,
	&m564_MI,
	&m558_MI,
	&m3496_MI,
	NULL
};
extern Il2CppType t13_0_0_1;
FieldInfo t74_f0_FieldInfo = 
{
	"m_Origin", &t13_0_0_1, &t74_TI, offsetof(t74, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t13_0_0_1;
FieldInfo t74_f1_FieldInfo = 
{
	"m_Direction", &t13_0_0_1, &t74_TI, offsetof(t74, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t74_FIs[] =
{
	&t74_f0_FieldInfo,
	&t74_f1_FieldInfo,
	NULL
};
extern MethodInfo m563_MI;
static PropertyInfo t74____origin_PropertyInfo = 
{
	&t74_TI, "origin", &m563_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m564_MI;
static PropertyInfo t74____direction_PropertyInfo = 
{
	&t74_TI, "direction", &m564_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t74_PIs[] =
{
	&t74____origin_PropertyInfo,
	&t74____direction_PropertyInfo,
	NULL
};
extern MethodInfo m3496_MI;
static Il2CppMethodReference t74_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m3496_MI,
};
static bool t74_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
const Il2CppTypeDefinitionMetadata t74_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t74_VT, t74_VTIGM, NULL};
TypeInfo t74_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Ray", "UnityEngine", t74_MIs, t74_PIs, t74_FIs, NULL, &t74_TI, NULL, &EmptyCustomAttributesCache, &t74_0_0_0, &t74_1_0_0, &t74_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t74)+ sizeof (Il2CppObject), sizeof (t74)+ sizeof (Il2CppObject), 0, sizeof(t74 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 5, 2, 2, 0, 0, 4, 0, 0};
#include "t592.h"
// Metadata Definition UnityEngine.Plane
extern TypeInfo t592_TI;
#include "t592MD.h"
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_0_0_0;
static ParameterInfo t592_m2742_ParameterInfos[] = 
{
	{"inNormal", 0, 134218225, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"inPoint", 1, 134218226, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t13_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m2742_MI = 
{
	".ctor", (methodPointerType)&m2742, &t592_TI, &t122_0_0_0, RuntimeInvoker_t122_t13_t13, t592_m2742_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 538, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern void* RuntimeInvoker_t13 (MethodInfo* method, void* obj, void** args);
MethodInfo m3497_MI = 
{
	"get_normal", (methodPointerType)&m3497, &t592_TI, &t13_0_0_0, RuntimeInvoker_t13, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 539, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3498_MI = 
{
	"get_distance", (methodPointerType)&m3498, &t592_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 540, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t74_0_0_0;
extern Il2CppType t123_1_0_2;
static ParameterInfo t592_m2743_ParameterInfos[] = 
{
	{"ray", 0, 134218227, &EmptyCustomAttributesCache, &t74_0_0_0},
	{"enter", 1, 134218228, &EmptyCustomAttributesCache, &t123_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t74_t953 (MethodInfo* method, void* obj, void** args);
MethodInfo m2743_MI = 
{
	"Raycast", (methodPointerType)&m2743, &t592_TI, &t124_0_0_0, RuntimeInvoker_t124_t74_t953, t592_m2743_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 541, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t592_MIs[] =
{
	&m2742_MI,
	&m3497_MI,
	&m3498_MI,
	&m2743_MI,
	NULL
};
extern Il2CppType t13_0_0_1;
FieldInfo t592_f0_FieldInfo = 
{
	"m_Normal", &t13_0_0_1, &t592_TI, offsetof(t592, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t592_f1_FieldInfo = 
{
	"m_Distance", &t123_0_0_1, &t592_TI, offsetof(t592, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t592_FIs[] =
{
	&t592_f0_FieldInfo,
	&t592_f1_FieldInfo,
	NULL
};
extern MethodInfo m3497_MI;
static PropertyInfo t592____normal_PropertyInfo = 
{
	&t592_TI, "normal", &m3497_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3498_MI;
static PropertyInfo t592____distance_PropertyInfo = 
{
	&t592_TI, "distance", &m3498_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t592_PIs[] =
{
	&t592____normal_PropertyInfo,
	&t592____distance_PropertyInfo,
	NULL
};
static Il2CppMethodReference t592_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t592_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t592_0_0_0;
extern Il2CppType t592_1_0_0;
const Il2CppTypeDefinitionMetadata t592_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t592_VT, t592_VTIGM, NULL};
TypeInfo t592_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Plane", "UnityEngine", t592_MIs, t592_PIs, t592_FIs, NULL, &t592_TI, NULL, &EmptyCustomAttributesCache, &t592_0_0_0, &t592_1_0_0, &t592_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t592)+ sizeof (Il2CppObject), sizeof (t592)+ sizeof (Il2CppObject), 0, sizeof(t592 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 4, 2, 2, 0, 0, 4, 0, 0};
#include "t721.h"
// Metadata Definition UnityEngineInternal.MathfInternal
extern TypeInfo t721_TI;
#include "t721MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3499_MI = 
{
	".cctor", (methodPointerType)&m3499, &t721_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 542, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t721_MIs[] =
{
	&m3499_MI,
	NULL
};
extern Il2CppType t123_0_0_22;
FieldInfo t721_f0_FieldInfo = 
{
	"FloatMinNormal", &t123_0_0_22, &t721_TI, offsetof(t721_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_22;
FieldInfo t721_f1_FieldInfo = 
{
	"FloatMinDenormal", &t123_0_0_22, &t721_TI, offsetof(t721_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_22;
FieldInfo t721_f2_FieldInfo = 
{
	"IsFlushToZeroEnabled", &t124_0_0_22, &t721_TI, offsetof(t721_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t721_FIs[] =
{
	&t721_f0_FieldInfo,
	&t721_f1_FieldInfo,
	&t721_f2_FieldInfo,
	NULL
};
static Il2CppMethodReference t721_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t721_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t721_0_0_0;
extern Il2CppType t721_1_0_0;
const Il2CppTypeDefinitionMetadata t721_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t721_VT, t721_VTIGM, NULL};
TypeInfo t721_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "MathfInternal", "UnityEngineInternal", t721_MIs, NULL, t721_FIs, NULL, &t721_TI, NULL, &EmptyCustomAttributesCache, &t721_0_0_0, &t721_1_0_0, &t721_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t721)+ sizeof (Il2CppObject), sizeof (t721)+ sizeof (Il2CppObject), 0, sizeof(t721 ), sizeof(t721_SFs), 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, true, true, 1, 0, 3, 0, 0, 4, 0, 0};
#include "t129.h"
// Metadata Definition UnityEngine.Mathf
extern TypeInfo t129_TI;
#include "t129MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3500_MI = 
{
	".cctor", (methodPointerType)&m3500, &t129_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 543, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m2700_ParameterInfos[] = 
{
	{"f", 0, 134218229, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2700_MI = 
{
	"Sin", (methodPointerType)&m2700, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123, t129_m2700_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 544, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m2699_ParameterInfos[] = 
{
	{"f", 0, 134218230, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2699_MI = 
{
	"Cos", (methodPointerType)&m2699, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123, t129_m2699_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 545, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m383_ParameterInfos[] = 
{
	{"y", 0, 134218231, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"x", 1, 134218232, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m383_MI = 
{
	"Atan2", (methodPointerType)&m383, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123_t123, t129_m383_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 546, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m2929_ParameterInfos[] = 
{
	{"f", 0, 134218233, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2929_MI = 
{
	"Sqrt", (methodPointerType)&m2929, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123, t129_m2929_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 547, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m583_ParameterInfos[] = 
{
	{"f", 0, 134218234, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m583_MI = 
{
	"Abs", (methodPointerType)&m583, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123, t129_m583_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 548, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m2922_ParameterInfos[] = 
{
	{"a", 0, 134218235, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"b", 1, 134218236, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2922_MI = 
{
	"Min", (methodPointerType)&m2922, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123_t123, t129_m2922_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 549, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t129_m2761_ParameterInfos[] = 
{
	{"a", 0, 134218237, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"b", 1, 134218238, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m2761_MI = 
{
	"Min", (methodPointerType)&m2761, &t129_TI, &t125_0_0_0, RuntimeInvoker_t125_t125_t125, t129_m2761_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 550, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m608_ParameterInfos[] = 
{
	{"a", 0, 134218239, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"b", 1, 134218240, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m608_MI = 
{
	"Max", (methodPointerType)&m608, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123_t123, t129_m608_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 551, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t129_m2759_ParameterInfos[] = 
{
	{"a", 0, 134218241, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"b", 1, 134218242, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m2759_MI = 
{
	"Max", (methodPointerType)&m2759, &t129_TI, &t125_0_0_0, RuntimeInvoker_t125_t125_t125, t129_m2759_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 552, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m2837_ParameterInfos[] = 
{
	{"f", 0, 134218243, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"p", 1, 134218244, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2837_MI = 
{
	"Pow", (methodPointerType)&m2837, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123_t123, t129_m2837_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 553, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m2921_ParameterInfos[] = 
{
	{"f", 0, 134218245, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"p", 1, 134218246, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2921_MI = 
{
	"Log", (methodPointerType)&m2921, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123_t123, t129_m2921_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 554, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m2785_ParameterInfos[] = 
{
	{"f", 0, 134218247, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2785_MI = 
{
	"Floor", (methodPointerType)&m2785, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123, t129_m2785_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 555, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m2822_ParameterInfos[] = 
{
	{"f", 0, 134218248, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2822_MI = 
{
	"Round", (methodPointerType)&m2822, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123, t129_m2822_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 556, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m2928_ParameterInfos[] = 
{
	{"f", 0, 134218249, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2928_MI = 
{
	"CeilToInt", (methodPointerType)&m2928, &t129_TI, &t125_0_0_0, RuntimeInvoker_t125_t123, t129_m2928_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 557, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m439_ParameterInfos[] = 
{
	{"f", 0, 134218250, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m439_MI = 
{
	"FloorToInt", (methodPointerType)&m439, &t129_TI, &t125_0_0_0, RuntimeInvoker_t125_t123, t129_m439_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 558, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m2681_ParameterInfos[] = 
{
	{"f", 0, 134218251, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2681_MI = 
{
	"RoundToInt", (methodPointerType)&m2681, &t129_TI, &t125_0_0_0, RuntimeInvoker_t125_t123, t129_m2681_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 559, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m2841_ParameterInfos[] = 
{
	{"f", 0, 134218252, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2841_MI = 
{
	"Sign", (methodPointerType)&m2841, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123, t129_m2841_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 560, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m620_ParameterInfos[] = 
{
	{"value", 0, 134218253, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"min", 1, 134218254, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"max", 2, 134218255, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m620_MI = 
{
	"Clamp", (methodPointerType)&m620, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123_t123_t123, t129_m620_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 561, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t129_m356_ParameterInfos[] = 
{
	{"value", 0, 134218256, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"min", 1, 134218257, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"max", 2, 134218258, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t125_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m356_MI = 
{
	"Clamp", (methodPointerType)&m356, &t129_TI, &t125_0_0_0, RuntimeInvoker_t125_t125_t125_t125, t129_m356_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 562, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m2670_ParameterInfos[] = 
{
	{"value", 0, 134218259, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2670_MI = 
{
	"Clamp01", (methodPointerType)&m2670, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123, t129_m2670_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 563, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m585_ParameterInfos[] = 
{
	{"from", 0, 134218260, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"to", 1, 134218261, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"t", 2, 134218262, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m585_MI = 
{
	"Lerp", (methodPointerType)&m585, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123_t123_t123, t129_m585_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 564, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m625_ParameterInfos[] = 
{
	{"a", 0, 134218263, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"b", 1, 134218264, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"t", 2, 134218265, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m625_MI = 
{
	"LerpAngle", (methodPointerType)&m625, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123_t123_t123, t129_m625_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 565, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m335_ParameterInfos[] = 
{
	{"current", 0, 134218266, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"target", 1, 134218267, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"maxDelta", 2, 134218268, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m335_MI = 
{
	"MoveTowards", (methodPointerType)&m335, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123_t123_t123, t129_m335_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 566, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m2527_ParameterInfos[] = 
{
	{"a", 0, 134218269, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"b", 1, 134218270, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2527_MI = 
{
	"Approximately", (methodPointerType)&m2527, &t129_TI, &t124_0_0_0, RuntimeInvoker_t124_t123_t123, t129_m2527_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 567, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_1_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m584_ParameterInfos[] = 
{
	{"current", 0, 134218271, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"target", 1, 134218272, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"currentVelocity", 2, 134218273, &EmptyCustomAttributesCache, &t123_1_0_0},
	{"smoothTime", 3, 134218274, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123_t123_t953_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t129__CustomAttributeCache_m584;
MethodInfo m584_MI = 
{
	"SmoothDamp", (methodPointerType)&m584, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123_t123_t953_t123, t129_m584_ParameterInfos, &t129__CustomAttributeCache_m584, 150, 0, 255, 4, false, false, 568, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_1_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern CustomAttributesCache t129__CustomAttributeCache_t129_m2836_Arg4_ParameterInfo;
extern Il2CppType t123_0_0_0;
extern CustomAttributesCache t129__CustomAttributeCache_t129_m2836_Arg5_ParameterInfo;
static ParameterInfo t129_m2836_ParameterInfos[] = 
{
	{"current", 0, 134218275, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"target", 1, 134218276, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"currentVelocity", 2, 134218277, &EmptyCustomAttributesCache, &t123_1_0_0},
	{"smoothTime", 3, 134218278, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"maxSpeed", 4, 134218279, &t129__CustomAttributeCache_t129_m2836_Arg4_ParameterInfo, &t123_0_0_0},
	{"deltaTime", 5, 134218280, &t129__CustomAttributeCache_t129_m2836_Arg5_ParameterInfo, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123_t123_t953_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2836_MI = 
{
	"SmoothDamp", (methodPointerType)&m2836, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123_t123_t953_t123_t123_t123, t129_m2836_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 6, false, false, 569, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m412_ParameterInfos[] = 
{
	{"t", 0, 134218281, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"length", 1, 134218282, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m412_MI = 
{
	"Repeat", (methodPointerType)&m412, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123_t123, t129_m412_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 570, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t129_m384_ParameterInfos[] = 
{
	{"from", 0, 134218283, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"to", 1, 134218284, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"value", 2, 134218285, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t123_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m384_MI = 
{
	"InverseLerp", (methodPointerType)&m384, &t129_TI, &t123_0_0_0, RuntimeInvoker_t123_t123_t123_t123, t129_m384_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 571, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t129_MIs[] =
{
	&m3500_MI,
	&m2700_MI,
	&m2699_MI,
	&m383_MI,
	&m2929_MI,
	&m583_MI,
	&m2922_MI,
	&m2761_MI,
	&m608_MI,
	&m2759_MI,
	&m2837_MI,
	&m2921_MI,
	&m2785_MI,
	&m2822_MI,
	&m2928_MI,
	&m439_MI,
	&m2681_MI,
	&m2841_MI,
	&m620_MI,
	&m356_MI,
	&m2670_MI,
	&m585_MI,
	&m625_MI,
	&m335_MI,
	&m2527_MI,
	&m584_MI,
	&m2836_MI,
	&m412_MI,
	&m384_MI,
	NULL
};
extern Il2CppType t123_0_0_54;
FieldInfo t129_f0_FieldInfo = 
{
	"Epsilon", &t123_0_0_54, &t129_TI, offsetof(t129_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t129_FIs[] =
{
	&t129_f0_FieldInfo,
	NULL
};
static Il2CppMethodReference t129_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t129_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t129_CustomAttributesCacheGenerator_m584(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t874 * tmp;
		tmp = (t874 *)il2cpp_codegen_object_new (&t874_TI);
		m4220(tmp, &m4220_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t129_CustomAttributesCacheGenerator_t129_m2836_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t873 * tmp;
		tmp = (t873 *)il2cpp_codegen_object_new (&t873_TI);
		m4216(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), &m4216_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t129_CustomAttributesCacheGenerator_t129_m2836_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t873 * tmp;
		tmp = (t873 *)il2cpp_codegen_object_new (&t873_TI);
		m4216(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), &m4216_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t129__CustomAttributeCache_m584 = {
1,
NULL,
&t129_CustomAttributesCacheGenerator_m584
};
CustomAttributesCache t129__CustomAttributeCache_t129_m2836_Arg4_ParameterInfo = {
1,
NULL,
&t129_CustomAttributesCacheGenerator_t129_m2836_Arg4_ParameterInfo
};
CustomAttributesCache t129__CustomAttributeCache_t129_m2836_Arg5_ParameterInfo = {
1,
NULL,
&t129_CustomAttributesCacheGenerator_t129_m2836_Arg5_ParameterInfo
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t129_0_0_0;
extern Il2CppType t129_1_0_0;
extern CustomAttributesCache t129__CustomAttributeCache_m584;
const Il2CppTypeDefinitionMetadata t129_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t129_VT, t129_VTIGM, NULL};
TypeInfo t129_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Mathf", "UnityEngine", t129_MIs, NULL, t129_FIs, NULL, &t129_TI, NULL, &EmptyCustomAttributesCache, &t129_0_0_0, &t129_1_0_0, &t129_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t129)+ sizeof (Il2CppObject), sizeof (t129)+ sizeof (Il2CppObject), 0, sizeof(t129 ), sizeof(t129_SFs), 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, true, true, 29, 0, 1, 0, 0, 4, 0, 0};
#include "t602.h"
// Metadata Definition UnityEngine.DrivenTransformProperties
extern TypeInfo t602_TI;
#include "t602MD.h"
static MethodInfo* t602_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t602_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t602_TI, offsetof(t602, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f2_FieldInfo = 
{
	"None", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f3_FieldInfo = 
{
	"All", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f4_FieldInfo = 
{
	"AnchoredPositionX", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f5_FieldInfo = 
{
	"AnchoredPositionY", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f6_FieldInfo = 
{
	"AnchoredPositionZ", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f7_FieldInfo = 
{
	"Rotation", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f8_FieldInfo = 
{
	"ScaleX", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f9_FieldInfo = 
{
	"ScaleY", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f10_FieldInfo = 
{
	"ScaleZ", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f11_FieldInfo = 
{
	"AnchorMinX", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f12_FieldInfo = 
{
	"AnchorMinY", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f13_FieldInfo = 
{
	"AnchorMaxX", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f14_FieldInfo = 
{
	"AnchorMaxY", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f15_FieldInfo = 
{
	"SizeDeltaX", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f16_FieldInfo = 
{
	"SizeDeltaY", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f17_FieldInfo = 
{
	"PivotX", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f18_FieldInfo = 
{
	"PivotY", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f19_FieldInfo = 
{
	"AnchoredPosition", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f20_FieldInfo = 
{
	"AnchoredPosition3D", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f21_FieldInfo = 
{
	"Scale", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f22_FieldInfo = 
{
	"AnchorMin", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f23_FieldInfo = 
{
	"AnchorMax", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f24_FieldInfo = 
{
	"Anchors", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f25_FieldInfo = 
{
	"SizeDelta", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t602_0_0_32854;
FieldInfo t602_f26_FieldInfo = 
{
	"Pivot", &t602_0_0_32854, &t602_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t602_FIs[] =
{
	&t602_f1_FieldInfo,
	&t602_f2_FieldInfo,
	&t602_f3_FieldInfo,
	&t602_f4_FieldInfo,
	&t602_f5_FieldInfo,
	&t602_f6_FieldInfo,
	&t602_f7_FieldInfo,
	&t602_f8_FieldInfo,
	&t602_f9_FieldInfo,
	&t602_f10_FieldInfo,
	&t602_f11_FieldInfo,
	&t602_f12_FieldInfo,
	&t602_f13_FieldInfo,
	&t602_f14_FieldInfo,
	&t602_f15_FieldInfo,
	&t602_f16_FieldInfo,
	&t602_f17_FieldInfo,
	&t602_f18_FieldInfo,
	&t602_f19_FieldInfo,
	&t602_f20_FieldInfo,
	&t602_f21_FieldInfo,
	&t602_f22_FieldInfo,
	&t602_f23_FieldInfo,
	&t602_f24_FieldInfo,
	&t602_f25_FieldInfo,
	&t602_f26_FieldInfo,
	NULL
};
static const int32_t t602_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t602_f2_DefaultValue = 
{
	&t602_f2_FieldInfo, { (char*)&t602_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f3_DefaultValueData = -1;
static Il2CppFieldDefaultValueEntry t602_f3_DefaultValue = 
{
	&t602_f3_FieldInfo, { (char*)&t602_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t602_f4_DefaultValue = 
{
	&t602_f4_FieldInfo, { (char*)&t602_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t602_f5_DefaultValue = 
{
	&t602_f5_FieldInfo, { (char*)&t602_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t602_f6_DefaultValue = 
{
	&t602_f6_FieldInfo, { (char*)&t602_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t602_f7_DefaultValue = 
{
	&t602_f7_FieldInfo, { (char*)&t602_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f8_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t602_f8_DefaultValue = 
{
	&t602_f8_FieldInfo, { (char*)&t602_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f9_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t602_f9_DefaultValue = 
{
	&t602_f9_FieldInfo, { (char*)&t602_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f10_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t602_f10_DefaultValue = 
{
	&t602_f10_FieldInfo, { (char*)&t602_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f11_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t602_f11_DefaultValue = 
{
	&t602_f11_FieldInfo, { (char*)&t602_f11_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f12_DefaultValueData = 512;
static Il2CppFieldDefaultValueEntry t602_f12_DefaultValue = 
{
	&t602_f12_FieldInfo, { (char*)&t602_f12_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f13_DefaultValueData = 1024;
static Il2CppFieldDefaultValueEntry t602_f13_DefaultValue = 
{
	&t602_f13_FieldInfo, { (char*)&t602_f13_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f14_DefaultValueData = 2048;
static Il2CppFieldDefaultValueEntry t602_f14_DefaultValue = 
{
	&t602_f14_FieldInfo, { (char*)&t602_f14_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f15_DefaultValueData = 4096;
static Il2CppFieldDefaultValueEntry t602_f15_DefaultValue = 
{
	&t602_f15_FieldInfo, { (char*)&t602_f15_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f16_DefaultValueData = 8192;
static Il2CppFieldDefaultValueEntry t602_f16_DefaultValue = 
{
	&t602_f16_FieldInfo, { (char*)&t602_f16_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f17_DefaultValueData = 16384;
static Il2CppFieldDefaultValueEntry t602_f17_DefaultValue = 
{
	&t602_f17_FieldInfo, { (char*)&t602_f17_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f18_DefaultValueData = 32768;
static Il2CppFieldDefaultValueEntry t602_f18_DefaultValue = 
{
	&t602_f18_FieldInfo, { (char*)&t602_f18_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f19_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t602_f19_DefaultValue = 
{
	&t602_f19_FieldInfo, { (char*)&t602_f19_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f20_DefaultValueData = 14;
static Il2CppFieldDefaultValueEntry t602_f20_DefaultValue = 
{
	&t602_f20_FieldInfo, { (char*)&t602_f20_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f21_DefaultValueData = 224;
static Il2CppFieldDefaultValueEntry t602_f21_DefaultValue = 
{
	&t602_f21_FieldInfo, { (char*)&t602_f21_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f22_DefaultValueData = 768;
static Il2CppFieldDefaultValueEntry t602_f22_DefaultValue = 
{
	&t602_f22_FieldInfo, { (char*)&t602_f22_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f23_DefaultValueData = 3072;
static Il2CppFieldDefaultValueEntry t602_f23_DefaultValue = 
{
	&t602_f23_FieldInfo, { (char*)&t602_f23_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f24_DefaultValueData = 3840;
static Il2CppFieldDefaultValueEntry t602_f24_DefaultValue = 
{
	&t602_f24_FieldInfo, { (char*)&t602_f24_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f25_DefaultValueData = 12288;
static Il2CppFieldDefaultValueEntry t602_f25_DefaultValue = 
{
	&t602_f25_FieldInfo, { (char*)&t602_f25_DefaultValueData, &t125_0_0_0 }};
static const int32_t t602_f26_DefaultValueData = 49152;
static Il2CppFieldDefaultValueEntry t602_f26_DefaultValue = 
{
	&t602_f26_FieldInfo, { (char*)&t602_f26_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t602_FDVs[] = 
{
	&t602_f2_DefaultValue,
	&t602_f3_DefaultValue,
	&t602_f4_DefaultValue,
	&t602_f5_DefaultValue,
	&t602_f6_DefaultValue,
	&t602_f7_DefaultValue,
	&t602_f8_DefaultValue,
	&t602_f9_DefaultValue,
	&t602_f10_DefaultValue,
	&t602_f11_DefaultValue,
	&t602_f12_DefaultValue,
	&t602_f13_DefaultValue,
	&t602_f14_DefaultValue,
	&t602_f15_DefaultValue,
	&t602_f16_DefaultValue,
	&t602_f17_DefaultValue,
	&t602_f18_DefaultValue,
	&t602_f19_DefaultValue,
	&t602_f20_DefaultValue,
	&t602_f21_DefaultValue,
	&t602_f22_DefaultValue,
	&t602_f23_DefaultValue,
	&t602_f24_DefaultValue,
	&t602_f25_DefaultValue,
	&t602_f26_DefaultValue,
	NULL
};
static Il2CppMethodReference t602_VT[] =
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
static bool t602_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t602_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t602_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t615 * tmp;
		tmp = (t615 *)il2cpp_codegen_object_new (&t615_TI);
		m2991(tmp, &m2991_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t602__CustomAttributeCache = {
1,
NULL,
&t602_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t602_0_0_0;
extern Il2CppType t602_1_0_0;
extern CustomAttributesCache t602__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t602_DM = 
{
	NULL, NULL, NULL, t602_IOs, &t8_0_0_0, t602_VT, t602_VTIGM, NULL};
TypeInfo t602_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "DrivenTransformProperties", "UnityEngine", t602_MIs, NULL, t602_FIs, NULL, &t125_TI, NULL, &t602__CustomAttributeCache, &t602_0_0_0, &t602_1_0_0, &t602_DM, NULL, NULL, NULL, t602_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t602)+ sizeof (Il2CppObject), sizeof (t602)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 257, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 26, 0, 0, 23, 0, 3};
#include "t492.h"
// Metadata Definition UnityEngine.DrivenRectTransformTracker
extern TypeInfo t492_TI;
#include "t492MD.h"
extern Il2CppType t57_0_0_0;
extern Il2CppType t434_0_0_0;
extern Il2CppType t434_0_0_0;
extern Il2CppType t602_0_0_0;
static ParameterInfo t492_m2824_ParameterInfos[] = 
{
	{"driver", 0, 134218286, &EmptyCustomAttributesCache, &t57_0_0_0},
	{"rectTransform", 1, 134218287, &EmptyCustomAttributesCache, &t434_0_0_0},
	{"drivenProperties", 2, 134218288, &EmptyCustomAttributesCache, &t602_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m2824_MI = 
{
	"Add", (methodPointerType)&m2824, &t492_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t492_m2824_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 572, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m2823_MI = 
{
	"Clear", (methodPointerType)&m2823, &t492_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 573, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t492_MIs[] =
{
	&m2824_MI,
	&m2823_MI,
	NULL
};
static Il2CppMethodReference t492_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t492_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t492_0_0_0;
extern Il2CppType t492_1_0_0;
const Il2CppTypeDefinitionMetadata t492_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t492_VT, t492_VTIGM, NULL};
TypeInfo t492_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "DrivenRectTransformTracker", "UnityEngine", t492_MIs, NULL, NULL, NULL, &t492_TI, NULL, &EmptyCustomAttributesCache, &t492_0_0_0, &t492_1_0_0, &t492_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t492)+ sizeof (Il2CppObject), sizeof (t492)+ sizeof (Il2CppObject), 0, sizeof(t492 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 2, 0, 0, 0, 0, 4, 0, 0};
#include "t608.h"
// Metadata Definition UnityEngine.RectTransform/Edge
extern TypeInfo t608_TI;
#include "t608MD.h"
static MethodInfo* t608_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t608_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t608_TI, offsetof(t608, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t608_0_0_32854;
FieldInfo t608_f2_FieldInfo = 
{
	"Left", &t608_0_0_32854, &t608_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t608_0_0_32854;
FieldInfo t608_f3_FieldInfo = 
{
	"Right", &t608_0_0_32854, &t608_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t608_0_0_32854;
FieldInfo t608_f4_FieldInfo = 
{
	"Top", &t608_0_0_32854, &t608_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t608_0_0_32854;
FieldInfo t608_f5_FieldInfo = 
{
	"Bottom", &t608_0_0_32854, &t608_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t608_FIs[] =
{
	&t608_f1_FieldInfo,
	&t608_f2_FieldInfo,
	&t608_f3_FieldInfo,
	&t608_f4_FieldInfo,
	&t608_f5_FieldInfo,
	NULL
};
static const int32_t t608_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t608_f2_DefaultValue = 
{
	&t608_f2_FieldInfo, { (char*)&t608_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t608_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t608_f3_DefaultValue = 
{
	&t608_f3_FieldInfo, { (char*)&t608_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t608_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t608_f4_DefaultValue = 
{
	&t608_f4_FieldInfo, { (char*)&t608_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t608_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t608_f5_DefaultValue = 
{
	&t608_f5_FieldInfo, { (char*)&t608_f5_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t608_FDVs[] = 
{
	&t608_f2_DefaultValue,
	&t608_f3_DefaultValue,
	&t608_f4_DefaultValue,
	&t608_f5_DefaultValue,
	NULL
};
static Il2CppMethodReference t608_VT[] =
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
static bool t608_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t608_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t608_0_0_0;
extern Il2CppType t608_1_0_0;
extern TypeInfo t434_TI;
const Il2CppTypeDefinitionMetadata t608_DM = 
{
	&t434_0_0_0, NULL, NULL, t608_IOs, &t8_0_0_0, t608_VT, t608_VTIGM, NULL};
TypeInfo t608_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Edge", "", t608_MIs, NULL, t608_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t608_0_0_0, &t608_1_0_0, &t608_DM, NULL, NULL, NULL, t608_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t608)+ sizeof (Il2CppObject), sizeof (t608)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 258, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t607.h"
// Metadata Definition UnityEngine.RectTransform/Axis
extern TypeInfo t607_TI;
#include "t607MD.h"
static MethodInfo* t607_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t607_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t607_TI, offsetof(t607, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t607_0_0_32854;
FieldInfo t607_f2_FieldInfo = 
{
	"Horizontal", &t607_0_0_32854, &t607_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t607_0_0_32854;
FieldInfo t607_f3_FieldInfo = 
{
	"Vertical", &t607_0_0_32854, &t607_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t607_FIs[] =
{
	&t607_f1_FieldInfo,
	&t607_f2_FieldInfo,
	&t607_f3_FieldInfo,
	NULL
};
static const int32_t t607_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t607_f2_DefaultValue = 
{
	&t607_f2_FieldInfo, { (char*)&t607_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t607_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t607_f3_DefaultValue = 
{
	&t607_f3_FieldInfo, { (char*)&t607_f3_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t607_FDVs[] = 
{
	&t607_f2_DefaultValue,
	&t607_f3_DefaultValue,
	NULL
};
static Il2CppMethodReference t607_VT[] =
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
static bool t607_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t607_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t607_0_0_0;
extern Il2CppType t607_1_0_0;
const Il2CppTypeDefinitionMetadata t607_DM = 
{
	&t434_0_0_0, NULL, NULL, t607_IOs, &t8_0_0_0, t607_VT, t607_VTIGM, NULL};
TypeInfo t607_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Axis", "", t607_MIs, NULL, t607_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t607_0_0_0, &t607_1_0_0, &t607_DM, NULL, NULL, NULL, t607_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t607)+ sizeof (Il2CppObject), sizeof (t607)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 258, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t611.h"
// Metadata Definition UnityEngine.RectTransform/ReapplyDrivenProperties
extern TypeInfo t611_TI;
#include "t611MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t58_0_0_0;
static ParameterInfo t611_m2955_ParameterInfos[] = 
{
	{"object", 0, 134218315, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"method", 1, 134218316, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m2955_MI = 
{
	".ctor", (methodPointerType)&m2955, &t611_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t58, t611_m2955_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 604, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t434_0_0_0;
static ParameterInfo t611_m3501_ParameterInfos[] = 
{
	{"driven", 0, 134218317, &EmptyCustomAttributesCache, &t434_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3501_MI = 
{
	"Invoke", (methodPointerType)&m3501, &t611_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t611_m3501_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 605, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t434_0_0_0;
extern Il2CppType t470_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t611_m3502_ParameterInfos[] = 
{
	{"driven", 0, 134218318, &EmptyCustomAttributesCache, &t434_0_0_0},
	{"callback", 1, 134218319, &EmptyCustomAttributesCache, &t470_0_0_0},
	{"object", 2, 134218320, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t469_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3502_MI = 
{
	"BeginInvoke", (methodPointerType)&m3502, &t611_TI, &t469_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t611_m3502_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 606, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t469_0_0_0;
static ParameterInfo t611_m3503_ParameterInfos[] = 
{
	{"result", 0, 134218321, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3503_MI = 
{
	"EndInvoke", (methodPointerType)&m3503, &t611_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t611_m3503_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 607, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t611_MIs[] =
{
	&m2955_MI,
	&m3501_MI,
	&m3502_MI,
	&m3503_MI,
	NULL
};
extern MethodInfo m3501_MI;
extern MethodInfo m3502_MI;
extern MethodInfo m3503_MI;
static Il2CppMethodReference t611_VT[] =
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
	&m3501_MI,
	&m3502_MI,
	&m3503_MI,
};
static bool t611_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t611_IOs[] = 
{
	{ &t622_0_0_0, 4},
	{ &t623_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t611_0_0_0;
extern Il2CppType t611_1_0_0;
struct t611;
const Il2CppTypeDefinitionMetadata t611_DM = 
{
	&t434_0_0_0, NULL, NULL, t611_IOs, &t471_0_0_0, t611_VT, t611_VTIGM, NULL};
TypeInfo t611_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "ReapplyDrivenProperties", "", t611_MIs, NULL, NULL, NULL, &t611_TI, NULL, &EmptyCustomAttributesCache, &t611_0_0_0, &t611_1_0_0, &t611_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t611, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t611), sizeof (t611), 0, sizeof(methodPointerType), 0, 0, -1, 258, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t434.h"
// Metadata Definition UnityEngine.RectTransform
#include "t434MD.h"
extern Il2CppType t611_0_0_0;
static ParameterInfo t434_m2956_ParameterInfos[] = 
{
	{"value", 0, 134218289, &EmptyCustomAttributesCache, &t611_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m2956_MI = 
{
	"add_reapplyDrivenProperties", (methodPointerType)&m2956, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t434_m2956_ParameterInfos, &EmptyCustomAttributesCache, 2198, 32, 255, 1, false, false, 574, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t611_0_0_0;
static ParameterInfo t434_m3504_ParameterInfos[] = 
{
	{"value", 0, 134218290, &EmptyCustomAttributesCache, &t611_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3504_MI = 
{
	"remove_reapplyDrivenProperties", (methodPointerType)&m3504, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t434_m3504_ParameterInfos, &EmptyCustomAttributesCache, 2198, 32, 255, 1, false, false, 575, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t441_1_0_2;
static ParameterInfo t434_m3505_ParameterInfos[] = 
{
	{"value", 0, 134218291, &EmptyCustomAttributesCache, &t441_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t947 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t434__CustomAttributeCache_m3505;
MethodInfo m3505_MI = 
{
	"INTERNAL_get_rect", (methodPointerType)&m3505, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t947, t434_m3505_ParameterInfos, &t434__CustomAttributeCache_m3505, 129, 4096, 255, 1, false, false, 576, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t441_0_0_0;
extern void* RuntimeInvoker_t441 (MethodInfo* method, void* obj, void** args);
MethodInfo m2613_MI = 
{
	"get_rect", (methodPointerType)&m2613, &t434_TI, &t441_0_0_0, RuntimeInvoker_t441, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 577, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_1_0_2;
static ParameterInfo t434_m3506_ParameterInfos[] = 
{
	{"value", 0, 134218292, &EmptyCustomAttributesCache, &t28_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t949 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t434__CustomAttributeCache_m3506;
MethodInfo m3506_MI = 
{
	"INTERNAL_get_anchorMin", (methodPointerType)&m3506, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t949, t434_m3506_ParameterInfos, &t434__CustomAttributeCache_m3506, 129, 4096, 255, 1, false, false, 578, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_1_0_0;
static ParameterInfo t434_m3507_ParameterInfos[] = 
{
	{"value", 0, 134218293, &EmptyCustomAttributesCache, &t28_1_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t949 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t434__CustomAttributeCache_m3507;
MethodInfo m3507_MI = 
{
	"INTERNAL_set_anchorMin", (methodPointerType)&m3507, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t949, t434_m3507_ParameterInfos, &t434__CustomAttributeCache_m3507, 129, 4096, 255, 1, false, false, 579, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2687_MI = 
{
	"get_anchorMin", (methodPointerType)&m2687, &t434_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 580, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t434_m2781_ParameterInfos[] = 
{
	{"value", 0, 134218294, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2781_MI = 
{
	"set_anchorMin", (methodPointerType)&m2781, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t28, t434_m2781_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 581, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_1_0_2;
static ParameterInfo t434_m3508_ParameterInfos[] = 
{
	{"value", 0, 134218295, &EmptyCustomAttributesCache, &t28_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t949 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t434__CustomAttributeCache_m3508;
MethodInfo m3508_MI = 
{
	"INTERNAL_get_anchorMax", (methodPointerType)&m3508, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t949, t434_m3508_ParameterInfos, &t434__CustomAttributeCache_m3508, 129, 4096, 255, 1, false, false, 582, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_1_0_0;
static ParameterInfo t434_m3509_ParameterInfos[] = 
{
	{"value", 0, 134218296, &EmptyCustomAttributesCache, &t28_1_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t949 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t434__CustomAttributeCache_m3509;
MethodInfo m3509_MI = 
{
	"INTERNAL_set_anchorMax", (methodPointerType)&m3509, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t949, t434_m3509_ParameterInfos, &t434__CustomAttributeCache_m3509, 129, 4096, 255, 1, false, false, 583, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2777_MI = 
{
	"get_anchorMax", (methodPointerType)&m2777, &t434_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 584, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t434_m2688_ParameterInfos[] = 
{
	{"value", 0, 134218297, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2688_MI = 
{
	"set_anchorMax", (methodPointerType)&m2688, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t28, t434_m2688_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 585, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_1_0_2;
static ParameterInfo t434_m3510_ParameterInfos[] = 
{
	{"value", 0, 134218298, &EmptyCustomAttributesCache, &t28_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t949 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t434__CustomAttributeCache_m3510;
MethodInfo m3510_MI = 
{
	"INTERNAL_get_anchoredPosition", (methodPointerType)&m3510, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t949, t434_m3510_ParameterInfos, &t434__CustomAttributeCache_m3510, 129, 4096, 255, 1, false, false, 586, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_1_0_0;
static ParameterInfo t434_m3511_ParameterInfos[] = 
{
	{"value", 0, 134218299, &EmptyCustomAttributesCache, &t28_1_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t949 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t434__CustomAttributeCache_m3511;
MethodInfo m3511_MI = 
{
	"INTERNAL_set_anchoredPosition", (methodPointerType)&m3511, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t949, t434_m3511_ParameterInfos, &t434__CustomAttributeCache_m3511, 129, 4096, 255, 1, false, false, 587, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2778_MI = 
{
	"get_anchoredPosition", (methodPointerType)&m2778, &t434_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 588, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t434_m2782_ParameterInfos[] = 
{
	{"value", 0, 134218300, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2782_MI = 
{
	"set_anchoredPosition", (methodPointerType)&m2782, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t28, t434_m2782_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 589, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_1_0_2;
static ParameterInfo t434_m3512_ParameterInfos[] = 
{
	{"value", 0, 134218301, &EmptyCustomAttributesCache, &t28_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t949 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t434__CustomAttributeCache_m3512;
MethodInfo m3512_MI = 
{
	"INTERNAL_get_sizeDelta", (methodPointerType)&m3512, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t949, t434_m3512_ParameterInfos, &t434__CustomAttributeCache_m3512, 129, 4096, 255, 1, false, false, 590, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_1_0_0;
static ParameterInfo t434_m3513_ParameterInfos[] = 
{
	{"value", 0, 134218302, &EmptyCustomAttributesCache, &t28_1_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t949 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t434__CustomAttributeCache_m3513;
MethodInfo m3513_MI = 
{
	"INTERNAL_set_sizeDelta", (methodPointerType)&m3513, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t949, t434_m3513_ParameterInfos, &t434__CustomAttributeCache_m3513, 129, 4096, 255, 1, false, false, 591, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2779_MI = 
{
	"get_sizeDelta", (methodPointerType)&m2779, &t434_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 592, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t434_m2689_ParameterInfos[] = 
{
	{"value", 0, 134218303, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2689_MI = 
{
	"set_sizeDelta", (methodPointerType)&m2689, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t28, t434_m2689_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 593, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_1_0_2;
static ParameterInfo t434_m3514_ParameterInfos[] = 
{
	{"value", 0, 134218304, &EmptyCustomAttributesCache, &t28_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t949 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t434__CustomAttributeCache_m3514;
MethodInfo m3514_MI = 
{
	"INTERNAL_get_pivot", (methodPointerType)&m3514, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t949, t434_m3514_ParameterInfos, &t434__CustomAttributeCache_m3514, 129, 4096, 255, 1, false, false, 594, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_1_0_0;
static ParameterInfo t434_m3515_ParameterInfos[] = 
{
	{"value", 0, 134218305, &EmptyCustomAttributesCache, &t28_1_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t949 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t434__CustomAttributeCache_m3515;
MethodInfo m3515_MI = 
{
	"INTERNAL_set_pivot", (methodPointerType)&m3515, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t949, t434_m3515_ParameterInfos, &t434__CustomAttributeCache_m3515, 129, 4096, 255, 1, false, false, 595, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2683_MI = 
{
	"get_pivot", (methodPointerType)&m2683, &t434_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 596, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t434_m2783_ParameterInfos[] = 
{
	{"value", 0, 134218306, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2783_MI = 
{
	"set_pivot", (methodPointerType)&m2783, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t28, t434_m2783_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 597, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t434_0_0_0;
static ParameterInfo t434_m3516_ParameterInfos[] = 
{
	{"driven", 0, 134218307, &EmptyCustomAttributesCache, &t434_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3516_MI = 
{
	"SendReapplyDrivenProperties", (methodPointerType)&m3516, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t434_m3516_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 598, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t37_0_0_0;
static ParameterInfo t434_m3517_ParameterInfos[] = 
{
	{"fourCornersArray", 0, 134218308, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3517_MI = 
{
	"GetLocalCorners", (methodPointerType)&m3517, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t434_m3517_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 599, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t37_0_0_0;
static ParameterInfo t434_m2847_ParameterInfos[] = 
{
	{"fourCornersArray", 0, 134218309, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m2847_MI = 
{
	"GetWorldCorners", (methodPointerType)&m2847, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t434_m2847_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 600, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t608_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t434_m2951_ParameterInfos[] = 
{
	{"edge", 0, 134218310, &EmptyCustomAttributesCache, &t608_0_0_0},
	{"inset", 1, 134218311, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"size", 2, 134218312, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t123_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2951_MI = 
{
	"SetInsetAndSizeFromParentEdge", (methodPointerType)&m2951, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t123_t123, t434_m2951_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 601, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t607_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t434_m2918_ParameterInfos[] = 
{
	{"axis", 0, 134218313, &EmptyCustomAttributesCache, &t607_0_0_0},
	{"size", 1, 134218314, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2918_MI = 
{
	"SetSizeWithCurrentAnchors", (methodPointerType)&m2918, &t434_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t123, t434_m2918_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 602, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m3518_MI = 
{
	"GetParentSize", (methodPointerType)&m3518, &t434_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 603, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t434_MIs[] =
{
	&m2956_MI,
	&m3504_MI,
	&m3505_MI,
	&m2613_MI,
	&m3506_MI,
	&m3507_MI,
	&m2687_MI,
	&m2781_MI,
	&m3508_MI,
	&m3509_MI,
	&m2777_MI,
	&m2688_MI,
	&m3510_MI,
	&m3511_MI,
	&m2778_MI,
	&m2782_MI,
	&m3512_MI,
	&m3513_MI,
	&m2779_MI,
	&m2689_MI,
	&m3514_MI,
	&m3515_MI,
	&m2683_MI,
	&m2783_MI,
	&m3516_MI,
	&m3517_MI,
	&m2847_MI,
	&m2951_MI,
	&m2918_MI,
	&m3518_MI,
	NULL
};
extern Il2CppType t611_0_0_17;
FieldInfo t434_f2_FieldInfo = 
{
	"reapplyDrivenProperties", &t611_0_0_17, &t434_TI, offsetof(t434_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t434_FIs[] =
{
	&t434_f2_FieldInfo,
	NULL
};
extern MethodInfo m2613_MI;
static PropertyInfo t434____rect_PropertyInfo = 
{
	&t434_TI, "rect", &m2613_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2687_MI;
extern MethodInfo m2781_MI;
static PropertyInfo t434____anchorMin_PropertyInfo = 
{
	&t434_TI, "anchorMin", &m2687_MI, &m2781_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2777_MI;
extern MethodInfo m2688_MI;
static PropertyInfo t434____anchorMax_PropertyInfo = 
{
	&t434_TI, "anchorMax", &m2777_MI, &m2688_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2778_MI;
extern MethodInfo m2782_MI;
static PropertyInfo t434____anchoredPosition_PropertyInfo = 
{
	&t434_TI, "anchoredPosition", &m2778_MI, &m2782_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2779_MI;
extern MethodInfo m2689_MI;
static PropertyInfo t434____sizeDelta_PropertyInfo = 
{
	&t434_TI, "sizeDelta", &m2779_MI, &m2689_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2683_MI;
extern MethodInfo m2783_MI;
static PropertyInfo t434____pivot_PropertyInfo = 
{
	&t434_TI, "pivot", &m2683_MI, &m2783_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t434_PIs[] =
{
	&t434____rect_PropertyInfo,
	&t434____anchorMin_PropertyInfo,
	&t434____anchorMax_PropertyInfo,
	&t434____anchoredPosition_PropertyInfo,
	&t434____sizeDelta_PropertyInfo,
	&t434____pivot_PropertyInfo,
	NULL
};
extern Il2CppType t611_0_0_0;
extern MethodInfo m2956_MI;
extern MethodInfo m3504_MI;
static EventInfo t434____reapplyDrivenProperties_EventInfo = 
{
	"reapplyDrivenProperties", &t611_0_0_0, &t434_TI, &m2956_MI, &m3504_MI, NULL, &EmptyCustomAttributesCache};
static EventInfo* t434__EventInfos[] =
{
	&t434____reapplyDrivenProperties_EventInfo,
	NULL
};
static const Il2CppType* t434_TI__nestedTypes[3] =
{
	&t608_0_0_0,
	&t607_0_0_0,
	&t611_0_0_0,
};
extern MethodInfo m360_MI;
static Il2CppMethodReference t434_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
	&m360_MI,
};
static bool t434_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t665_0_0_0;
static Il2CppInterfaceOffsetPair t434_IOs[] = 
{
	{ &t665_0_0_0, 4},
};
void t434_CustomAttributesCacheGenerator_m3505(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t434_CustomAttributesCacheGenerator_m3506(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t434_CustomAttributesCacheGenerator_m3507(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t434_CustomAttributesCacheGenerator_m3508(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t434_CustomAttributesCacheGenerator_m3509(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t434_CustomAttributesCacheGenerator_m3510(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t434_CustomAttributesCacheGenerator_m3511(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t434_CustomAttributesCacheGenerator_m3512(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t434_CustomAttributesCacheGenerator_m3513(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t434_CustomAttributesCacheGenerator_m3514(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t434_CustomAttributesCacheGenerator_m3515(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t434__CustomAttributeCache_m3505 = {
1,
NULL,
&t434_CustomAttributesCacheGenerator_m3505
};
CustomAttributesCache t434__CustomAttributeCache_m3506 = {
1,
NULL,
&t434_CustomAttributesCacheGenerator_m3506
};
CustomAttributesCache t434__CustomAttributeCache_m3507 = {
1,
NULL,
&t434_CustomAttributesCacheGenerator_m3507
};
CustomAttributesCache t434__CustomAttributeCache_m3508 = {
1,
NULL,
&t434_CustomAttributesCacheGenerator_m3508
};
CustomAttributesCache t434__CustomAttributeCache_m3509 = {
1,
NULL,
&t434_CustomAttributesCacheGenerator_m3509
};
CustomAttributesCache t434__CustomAttributeCache_m3510 = {
1,
NULL,
&t434_CustomAttributesCacheGenerator_m3510
};
CustomAttributesCache t434__CustomAttributeCache_m3511 = {
1,
NULL,
&t434_CustomAttributesCacheGenerator_m3511
};
CustomAttributesCache t434__CustomAttributeCache_m3512 = {
1,
NULL,
&t434_CustomAttributesCacheGenerator_m3512
};
CustomAttributesCache t434__CustomAttributeCache_m3513 = {
1,
NULL,
&t434_CustomAttributesCacheGenerator_m3513
};
CustomAttributesCache t434__CustomAttributeCache_m3514 = {
1,
NULL,
&t434_CustomAttributesCacheGenerator_m3514
};
CustomAttributesCache t434__CustomAttributeCache_m3515 = {
1,
NULL,
&t434_CustomAttributesCacheGenerator_m3515
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t434_1_0_0;
extern Il2CppType t45_0_0_0;
struct t434;
extern CustomAttributesCache t434__CustomAttributeCache_m3505;
extern CustomAttributesCache t434__CustomAttributeCache_m3506;
extern CustomAttributesCache t434__CustomAttributeCache_m3507;
extern CustomAttributesCache t434__CustomAttributeCache_m3508;
extern CustomAttributesCache t434__CustomAttributeCache_m3509;
extern CustomAttributesCache t434__CustomAttributeCache_m3510;
extern CustomAttributesCache t434__CustomAttributeCache_m3511;
extern CustomAttributesCache t434__CustomAttributeCache_m3512;
extern CustomAttributesCache t434__CustomAttributeCache_m3513;
extern CustomAttributesCache t434__CustomAttributeCache_m3514;
extern CustomAttributesCache t434__CustomAttributeCache_m3515;
const Il2CppTypeDefinitionMetadata t434_DM = 
{
	NULL, t434_TI__nestedTypes, NULL, t434_IOs, &t45_0_0_0, t434_VT, t434_VTIGM, NULL};
TypeInfo t434_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "RectTransform", "UnityEngine", t434_MIs, t434_PIs, t434_FIs, t434__EventInfos, &t434_TI, NULL, &EmptyCustomAttributesCache, &t434_0_0_0, &t434_1_0_0, &t434_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t434), sizeof (t434), 0, -1, sizeof(t434_SFs), 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 30, 6, 1, 1, 3, 5, 0, 1};
#include "t722.h"
// Metadata Definition UnityEngine.ResourceRequest
extern TypeInfo t722_TI;
#include "t722MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3519_MI = 
{
	".ctor", (methodPointerType)&m3519, &t722_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 608, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t57_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3520_MI = 
{
	"get_asset", (methodPointerType)&m3520, &t722_TI, &t57_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 609, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t722_MIs[] =
{
	&m3519_MI,
	&m3520_MI,
	NULL
};
extern Il2CppType t2_0_0_3;
FieldInfo t722_f1_FieldInfo = 
{
	"m_Path", &t2_0_0_3, &t722_TI, offsetof(t722, f1), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_3;
FieldInfo t722_f2_FieldInfo = 
{
	"m_Type", &t126_0_0_3, &t722_TI, offsetof(t722, f2), &EmptyCustomAttributesCache};
static FieldInfo* t722_FIs[] =
{
	&t722_f1_FieldInfo,
	&t722_f2_FieldInfo,
	NULL
};
extern MethodInfo m3520_MI;
static PropertyInfo t722____asset_PropertyInfo = 
{
	&t722_TI, "asset", &m3520_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t722_PIs[] =
{
	&t722____asset_PropertyInfo,
	NULL
};
static Il2CppMethodReference t722_VT[] =
{
	&m671_MI,
	&m3589_MI,
	&m672_MI,
	&m673_MI,
};
static bool t722_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t722_0_0_0;
extern Il2CppType t722_1_0_0;
struct t722;
const Il2CppTypeDefinitionMetadata t722_DM = 
{
	NULL, NULL, NULL, NULL, &t173_0_0_0, t722_VT, t722_VTIGM, NULL};
TypeInfo t722_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "ResourceRequest", "UnityEngine", t722_MIs, t722_PIs, t722_FIs, NULL, &t722_TI, NULL, &EmptyCustomAttributesCache, &t722_0_0_0, &t722_1_0_0, &t722_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t722), sizeof (t722), 0, -1, 0, 0, -1, 1048841, 0, 0, false, false, false, false, false, false, false, true, false, false, 2, 1, 2, 0, 0, 4, 0, 0};
#include "t723.h"
// Metadata Definition UnityEngine.Resources
extern TypeInfo t723_TI;
#include "t723MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t723_m3521_ParameterInfos[] = 
{
	{"path", 0, 134218322, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"systemTypeInstance", 1, 134218323, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t57_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t723__CustomAttributeCache_m3521;
MethodInfo m3521_MI = 
{
	"Load", (methodPointerType)&m3521, &t723_TI, &t57_0_0_0, RuntimeInvoker_t9_t9_t9, t723_m3521_ParameterInfos, &t723__CustomAttributeCache_m3521, 150, 4096, 255, 2, false, false, 610, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t723_MIs[] =
{
	&m3521_MI,
	NULL
};
static Il2CppMethodReference t723_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t723_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t723_CustomAttributesCacheGenerator_m3521(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t876 * tmp;
		tmp = (t876 *)il2cpp_codegen_object_new (&t876_TI);
		m4221(tmp, 1, &m4221_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t723__CustomAttributeCache_m3521 = {
2,
NULL,
&t723_CustomAttributesCacheGenerator_m3521
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_1_0_0;
struct t723;
extern CustomAttributesCache t723__CustomAttributeCache_m3521;
const Il2CppTypeDefinitionMetadata t723_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t723_VT, t723_VTIGM, NULL};
TypeInfo t723_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Resources", "UnityEngine", t723_MIs, NULL, NULL, NULL, &t723_TI, NULL, &EmptyCustomAttributesCache, &t723_0_0_0, &t723_1_0_0, &t723_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t723), sizeof (t723), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t724.h"
// Metadata Definition UnityEngine.SerializePrivateVariables
extern TypeInfo t724_TI;
#include "t724MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3522_MI = 
{
	".ctor", (methodPointerType)&m3522, &t724_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 611, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t724_MIs[] =
{
	&m3522_MI,
	NULL
};
extern MethodInfo m4499_MI;
extern MethodInfo m4493_MI;
static Il2CppMethodReference t724_VT[] =
{
	&m4499_MI,
	&m646_MI,
	&m4493_MI,
	&m673_MI,
};
static bool t724_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppType t954_0_0_0;
static Il2CppInterfaceOffsetPair t724_IOs[] = 
{
	{ &t954_0_0_0, 4},
};
void t724_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m2994(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), &m2994_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t724__CustomAttributeCache = {
1,
NULL,
&t724_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t724_0_0_0;
extern Il2CppType t724_1_0_0;
extern Il2CppType t725_0_0_0;
struct t724;
extern CustomAttributesCache t724__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t724_DM = 
{
	NULL, NULL, NULL, t724_IOs, &t725_0_0_0, t724_VT, t724_VTIGM, NULL};
TypeInfo t724_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "SerializePrivateVariables", "UnityEngine", t724_MIs, NULL, NULL, NULL, &t724_TI, NULL, &t724__CustomAttributeCache, &t724_0_0_0, &t724_1_0_0, &t724_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t724), sizeof (t724), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
// Metadata Definition UnityEngine.SerializeField
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m677_MI = 
{
	".ctor", (methodPointerType)&m677, &t193_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 612, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t193_MIs[] =
{
	&m677_MI,
	NULL
};
static Il2CppMethodReference t193_VT[] =
{
	&m4499_MI,
	&m646_MI,
	&m4493_MI,
	&m673_MI,
};
static bool t193_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t193_IOs[] = 
{
	{ &t954_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t193_0_0_0;
extern Il2CppType t193_1_0_0;
struct t193;
const Il2CppTypeDefinitionMetadata t193_DM = 
{
	NULL, NULL, NULL, t193_IOs, &t725_0_0_0, t193_VT, t193_VTIGM, NULL};
TypeInfo t193_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "SerializeField", "UnityEngine", t193_MIs, NULL, NULL, NULL, &t193_TI, NULL, &EmptyCustomAttributesCache, &t193_0_0_0, &t193_1_0_0, &t193_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t193), sizeof (t193), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
// Metadata Definition UnityEngine.ISerializationCallbackReceiver
extern TypeInfo t619_TI;
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m4500_MI = 
{
	"OnBeforeSerialize", NULL, &t619_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, false, 613, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m4501_MI = 
{
	"OnAfterDeserialize", NULL, &t619_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 1478, 0, 1, 0, false, false, 614, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t619_MIs[] =
{
	&m4500_MI,
	&m4501_MI,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t619_0_0_0;
extern Il2CppType t619_1_0_0;
struct t619;
const Il2CppTypeDefinitionMetadata t619_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t619_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "ISerializationCallbackReceiver", "UnityEngine", t619_MIs, NULL, NULL, NULL, &t619_TI, NULL, &EmptyCustomAttributesCache, &t619_0_0_0, &t619_1_0_0, &t619_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#include "t62.h"
// Metadata Definition UnityEngine.Shader
extern TypeInfo t62_TI;
#include "t62MD.h"
extern Il2CppType t2_0_0_0;
static ParameterInfo t62_m417_ParameterInfos[] = 
{
	{"keyword", 0, 134218324, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t62__CustomAttributeCache_m417;
MethodInfo m417_MI = 
{
	"EnableKeyword", (methodPointerType)&m417, &t62_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t62_m417_ParameterInfos, &t62__CustomAttributeCache_m417, 150, 4096, 255, 1, false, false, 615, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t62_m418_ParameterInfos[] = 
{
	{"keyword", 0, 134218325, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t62__CustomAttributeCache_m418;
MethodInfo m418_MI = 
{
	"DisableKeyword", (methodPointerType)&m418, &t62_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t62_m418_ParameterInfos, &t62__CustomAttributeCache_m418, 150, 4096, 255, 1, false, false, 616, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t62_m526_ParameterInfos[] = 
{
	{"value", 0, 134218326, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t62__CustomAttributeCache_m526;
MethodInfo m526_MI = 
{
	"set_maximumLOD", (methodPointerType)&m526, &t62_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t62_m526_ParameterInfos, &t62__CustomAttributeCache_m526, 2182, 4096, 255, 1, false, false, 617, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t62_m3523_ParameterInfos[] = 
{
	{"name", 0, 134218327, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t62__CustomAttributeCache_m3523;
MethodInfo m3523_MI = 
{
	"PropertyToID", (methodPointerType)&m3523, &t62_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t62_m3523_ParameterInfos, &t62__CustomAttributeCache_m3523, 150, 4096, 255, 1, false, false, 618, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t62_MIs[] =
{
	&m417_MI,
	&m418_MI,
	&m526_MI,
	&m3523_MI,
	NULL
};
extern MethodInfo m526_MI;
static PropertyInfo t62____maximumLOD_PropertyInfo = 
{
	&t62_TI, "maximumLOD", NULL, &m526_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t62_PIs[] =
{
	&t62____maximumLOD_PropertyInfo,
	NULL
};
static Il2CppMethodReference t62_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t62_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t62_CustomAttributesCacheGenerator_m417(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t62_CustomAttributesCacheGenerator_m418(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t62_CustomAttributesCacheGenerator_m526(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t62_CustomAttributesCacheGenerator_m3523(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t62__CustomAttributeCache_m417 = {
1,
NULL,
&t62_CustomAttributesCacheGenerator_m417
};
CustomAttributesCache t62__CustomAttributeCache_m418 = {
1,
NULL,
&t62_CustomAttributesCacheGenerator_m418
};
CustomAttributesCache t62__CustomAttributeCache_m526 = {
1,
NULL,
&t62_CustomAttributesCacheGenerator_m526
};
CustomAttributesCache t62__CustomAttributeCache_m3523 = {
1,
NULL,
&t62_CustomAttributesCacheGenerator_m3523
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t62_0_0_0;
extern Il2CppType t62_1_0_0;
struct t62;
extern CustomAttributesCache t62__CustomAttributeCache_m417;
extern CustomAttributesCache t62__CustomAttributeCache_m418;
extern CustomAttributesCache t62__CustomAttributeCache_m526;
extern CustomAttributesCache t62__CustomAttributeCache_m3523;
const Il2CppTypeDefinitionMetadata t62_DM = 
{
	NULL, NULL, NULL, NULL, &t57_0_0_0, t62_VT, t62_VTIGM, NULL};
TypeInfo t62_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Shader", "UnityEngine", t62_MIs, t62_PIs, NULL, NULL, &t62_TI, NULL, &EmptyCustomAttributesCache, &t62_0_0_0, &t62_1_0_0, &t62_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t62), sizeof (t62), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 1, 0, 0, 0, 4, 0, 0};
#include "t40.h"
// Metadata Definition UnityEngine.Material
extern TypeInfo t40_TI;
#include "t40MD.h"
extern Il2CppType t40_0_0_0;
static ParameterInfo t40_m2887_ParameterInfos[] = 
{
	{"source", 0, 134218328, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m2887_MI = 
{
	".ctor", (methodPointerType)&m2887, &t40_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t40_m2887_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 619, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t62_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t40__CustomAttributeCache_m525;
MethodInfo m525_MI = 
{
	"get_shader", (methodPointerType)&m525, &t40_TI, &t62_0_0_0, RuntimeInvoker_t9, NULL, &t40__CustomAttributeCache_m525, 2182, 4096, 255, 0, false, false, 620, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t148_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m2894_MI = 
{
	"get_mainTexture", (methodPointerType)&m2894, &t40_TI, &t148_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 621, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t43_0_0_0;
static ParameterInfo t40_m3524_ParameterInfos[] = 
{
	{"propertyName", 0, 134218329, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"color", 1, 134218330, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t43 (MethodInfo* method, void* obj, void** args);
MethodInfo m3524_MI = 
{
	"SetColor", (methodPointerType)&m3524, &t40_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t43, t40_m3524_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 622, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t43_0_0_0;
static ParameterInfo t40_m3525_ParameterInfos[] = 
{
	{"nameID", 0, 134218331, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"color", 1, 134218332, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t43 (MethodInfo* method, void* obj, void** args);
MethodInfo m3525_MI = 
{
	"SetColor", (methodPointerType)&m3525, &t40_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t43, t40_m3525_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 623, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t40_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t43_1_0_0;
static ParameterInfo t40_m3526_ParameterInfos[] = 
{
	{"self", 0, 134218333, &EmptyCustomAttributesCache, &t40_0_0_0},
	{"nameID", 1, 134218334, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"color", 2, 134218335, &EmptyCustomAttributesCache, &t43_1_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t647 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t40__CustomAttributeCache_m3526;
MethodInfo m3526_MI = 
{
	"INTERNAL_CALL_SetColor", (methodPointerType)&m3526, &t40_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t647, t40_m3526_ParameterInfos, &t40__CustomAttributeCache_m3526, 145, 4096, 255, 3, false, false, 624, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t40_m3527_ParameterInfos[] = 
{
	{"propertyName", 0, 134218336, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t43_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3527_MI = 
{
	"GetColor", (methodPointerType)&m3527, &t40_TI, &t43_0_0_0, RuntimeInvoker_t43_t9, t40_m3527_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 625, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t40_m3528_ParameterInfos[] = 
{
	{"nameID", 0, 134218337, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t43_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t40__CustomAttributeCache_m3528;
MethodInfo m3528_MI = 
{
	"GetColor", (methodPointerType)&m3528, &t40_TI, &t43_0_0_0, RuntimeInvoker_t43_t125, t40_m3528_ParameterInfos, &t40__CustomAttributeCache_m3528, 134, 4096, 255, 1, false, false, 626, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t40_m414_ParameterInfos[] = 
{
	{"propertyName", 0, 134218338, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"vector", 1, 134218339, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m414_MI = 
{
	"SetVector", (methodPointerType)&m414, &t40_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t47, t40_m414_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 627, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t40_m408_ParameterInfos[] = 
{
	{"propertyName", 0, 134218340, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m408_MI = 
{
	"GetVector", (methodPointerType)&m408, &t40_TI, &t47_0_0_0, RuntimeInvoker_t47_t9, t40_m408_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 628, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t148_0_0_0;
static ParameterInfo t40_m449_ParameterInfos[] = 
{
	{"propertyName", 0, 134218341, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"texture", 1, 134218342, &EmptyCustomAttributesCache, &t148_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m449_MI = 
{
	"SetTexture", (methodPointerType)&m449, &t40_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t40_m449_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 629, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t148_0_0_0;
static ParameterInfo t40_m3529_ParameterInfos[] = 
{
	{"nameID", 0, 134218343, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"texture", 1, 134218344, &EmptyCustomAttributesCache, &t148_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t40__CustomAttributeCache_m3529;
MethodInfo m3529_MI = 
{
	"SetTexture", (methodPointerType)&m3529, &t40_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9, t40_m3529_ParameterInfos, &t40__CustomAttributeCache_m3529, 134, 4096, 255, 2, false, false, 630, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t40_m3530_ParameterInfos[] = 
{
	{"propertyName", 0, 134218345, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t148_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3530_MI = 
{
	"GetTexture", (methodPointerType)&m3530, &t40_TI, &t148_0_0_0, RuntimeInvoker_t9_t9, t40_m3530_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 631, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t40_m3531_ParameterInfos[] = 
{
	{"nameID", 0, 134218346, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t148_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t40__CustomAttributeCache_m3531;
MethodInfo m3531_MI = 
{
	"GetTexture", (methodPointerType)&m3531, &t40_TI, &t148_0_0_0, RuntimeInvoker_t9_t125, t40_m3531_ParameterInfos, &t40__CustomAttributeCache_m3531, 134, 4096, 255, 1, false, false, 632, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t40_m3532_ParameterInfos[] = 
{
	{"propertyName", 0, 134218347, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134218348, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3532_MI = 
{
	"SetFloat", (methodPointerType)&m3532, &t40_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t123, t40_m3532_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 633, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t40_m3533_ParameterInfos[] = 
{
	{"nameID", 0, 134218349, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 1, 134218350, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t40__CustomAttributeCache_m3533;
MethodInfo m3533_MI = 
{
	"SetFloat", (methodPointerType)&m3533, &t40_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t123, t40_m3533_ParameterInfos, &t40__CustomAttributeCache_m3533, 134, 4096, 255, 2, false, false, 634, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t40_m409_ParameterInfos[] = 
{
	{"propertyName", 0, 134218351, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m409_MI = 
{
	"GetFloat", (methodPointerType)&m409, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123_t9, t40_m409_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 635, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t40_m3534_ParameterInfos[] = 
{
	{"nameID", 0, 134218352, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t40__CustomAttributeCache_m3534;
MethodInfo m3534_MI = 
{
	"GetFloat", (methodPointerType)&m3534, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123_t125, t40_m3534_ParameterInfos, &t40__CustomAttributeCache_m3534, 134, 4096, 255, 1, false, false, 636, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t40_m2888_ParameterInfos[] = 
{
	{"propertyName", 0, 134218353, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134218354, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m2888_MI = 
{
	"SetInt", (methodPointerType)&m2888, &t40_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t40_m2888_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 637, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t40_m450_ParameterInfos[] = 
{
	{"propertyName", 0, 134218355, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m450_MI = 
{
	"HasProperty", (methodPointerType)&m450, &t40_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t40_m450_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 638, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t40_m3535_ParameterInfos[] = 
{
	{"nameID", 0, 134218356, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t40__CustomAttributeCache_m3535;
MethodInfo m3535_MI = 
{
	"HasProperty", (methodPointerType)&m3535, &t40_TI, &t124_0_0_0, RuntimeInvoker_t124_t125, t40_m3535_ParameterInfos, &t40__CustomAttributeCache_m3535, 134, 4096, 255, 1, false, false, 639, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t2_0_0_0;
extern CustomAttributesCache t40__CustomAttributeCache_t40_m3536_Arg2_ParameterInfo;
static ParameterInfo t40_m3536_ParameterInfos[] = 
{
	{"tag", 0, 134218357, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"searchFallbacks", 1, 134218358, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"defaultValue", 2, 134218359, &t40__CustomAttributeCache_t40_m3536_Arg2_ParameterInfo, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t40__CustomAttributeCache_m3536;
MethodInfo m3536_MI = 
{
	"GetTag", (methodPointerType)&m3536, &t40_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t186_t9, t40_m3536_ParameterInfos, &t40__CustomAttributeCache_m3536, 134, 4096, 255, 3, false, false, 640, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t40_m518_ParameterInfos[] = 
{
	{"tag", 0, 134218360, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"searchFallbacks", 1, 134218361, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t40__CustomAttributeCache_m518;
MethodInfo m518_MI = 
{
	"GetTag", (methodPointerType)&m518, &t40_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t186, t40_m518_ParameterInfos, &t40__CustomAttributeCache_m518, 134, 0, 255, 2, false, false, 641, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t40_0_0_0;
extern CustomAttributesCache t40__CustomAttributeCache_t40_m3537_Arg0_ParameterInfo;
extern Il2CppType t40_0_0_0;
static ParameterInfo t40_m3537_ParameterInfos[] = 
{
	{"mono", 0, 134218362, &t40__CustomAttributeCache_t40_m3537_Arg0_ParameterInfo, &t40_0_0_0},
	{"source", 1, 134218363, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t40__CustomAttributeCache_m3537;
MethodInfo m3537_MI = 
{
	"Internal_CreateWithMaterial", (methodPointerType)&m3537, &t40_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t40_m3537_ParameterInfos, &t40__CustomAttributeCache_m3537, 145, 4096, 255, 2, false, false, 642, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t40_MIs[] =
{
	&m2887_MI,
	&m525_MI,
	&m2894_MI,
	&m3524_MI,
	&m3525_MI,
	&m3526_MI,
	&m3527_MI,
	&m3528_MI,
	&m414_MI,
	&m408_MI,
	&m449_MI,
	&m3529_MI,
	&m3530_MI,
	&m3531_MI,
	&m3532_MI,
	&m3533_MI,
	&m409_MI,
	&m3534_MI,
	&m2888_MI,
	&m450_MI,
	&m3535_MI,
	&m3536_MI,
	&m518_MI,
	&m3537_MI,
	NULL
};
extern MethodInfo m525_MI;
static PropertyInfo t40____shader_PropertyInfo = 
{
	&t40_TI, "shader", &m525_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2894_MI;
static PropertyInfo t40____mainTexture_PropertyInfo = 
{
	&t40_TI, "mainTexture", &m2894_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t40_PIs[] =
{
	&t40____shader_PropertyInfo,
	&t40____mainTexture_PropertyInfo,
	NULL
};
static Il2CppMethodReference t40_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t40_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t40_CustomAttributesCacheGenerator_m525(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t40_CustomAttributesCacheGenerator_m3526(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t40_CustomAttributesCacheGenerator_m3528(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t40_CustomAttributesCacheGenerator_m3529(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t40_CustomAttributesCacheGenerator_m3531(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t40_CustomAttributesCacheGenerator_m3533(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t40_CustomAttributesCacheGenerator_m3534(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t40_CustomAttributesCacheGenerator_m3535(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t40_CustomAttributesCacheGenerator_m3536(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t40_CustomAttributesCacheGenerator_t40_m3536_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t873 * tmp;
		tmp = (t873 *)il2cpp_codegen_object_new (&t873_TI);
		m4216(tmp, il2cpp_codegen_string_new_wrapper("\"\""), &m4216_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t40_CustomAttributesCacheGenerator_m518(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t874 * tmp;
		tmp = (t874 *)il2cpp_codegen_object_new (&t874_TI);
		m4220(tmp, &m4220_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t40_CustomAttributesCacheGenerator_m3537(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t40_CustomAttributesCacheGenerator_t40_m3537_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t845 * tmp;
		tmp = (t845 *)il2cpp_codegen_object_new (&t845_TI);
		m4122(tmp, &m4122_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t40__CustomAttributeCache_m525 = {
1,
NULL,
&t40_CustomAttributesCacheGenerator_m525
};
CustomAttributesCache t40__CustomAttributeCache_m3526 = {
1,
NULL,
&t40_CustomAttributesCacheGenerator_m3526
};
CustomAttributesCache t40__CustomAttributeCache_m3528 = {
1,
NULL,
&t40_CustomAttributesCacheGenerator_m3528
};
CustomAttributesCache t40__CustomAttributeCache_m3529 = {
1,
NULL,
&t40_CustomAttributesCacheGenerator_m3529
};
CustomAttributesCache t40__CustomAttributeCache_m3531 = {
1,
NULL,
&t40_CustomAttributesCacheGenerator_m3531
};
CustomAttributesCache t40__CustomAttributeCache_m3533 = {
1,
NULL,
&t40_CustomAttributesCacheGenerator_m3533
};
CustomAttributesCache t40__CustomAttributeCache_m3534 = {
1,
NULL,
&t40_CustomAttributesCacheGenerator_m3534
};
CustomAttributesCache t40__CustomAttributeCache_m3535 = {
1,
NULL,
&t40_CustomAttributesCacheGenerator_m3535
};
CustomAttributesCache t40__CustomAttributeCache_m3536 = {
1,
NULL,
&t40_CustomAttributesCacheGenerator_m3536
};
CustomAttributesCache t40__CustomAttributeCache_t40_m3536_Arg2_ParameterInfo = {
1,
NULL,
&t40_CustomAttributesCacheGenerator_t40_m3536_Arg2_ParameterInfo
};
CustomAttributesCache t40__CustomAttributeCache_m518 = {
1,
NULL,
&t40_CustomAttributesCacheGenerator_m518
};
CustomAttributesCache t40__CustomAttributeCache_m3537 = {
1,
NULL,
&t40_CustomAttributesCacheGenerator_m3537
};
CustomAttributesCache t40__CustomAttributeCache_t40_m3537_Arg0_ParameterInfo = {
1,
NULL,
&t40_CustomAttributesCacheGenerator_t40_m3537_Arg0_ParameterInfo
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t40_1_0_0;
struct t40;
extern CustomAttributesCache t40__CustomAttributeCache_m525;
extern CustomAttributesCache t40__CustomAttributeCache_m3526;
extern CustomAttributesCache t40__CustomAttributeCache_m3528;
extern CustomAttributesCache t40__CustomAttributeCache_m3529;
extern CustomAttributesCache t40__CustomAttributeCache_m3531;
extern CustomAttributesCache t40__CustomAttributeCache_m3533;
extern CustomAttributesCache t40__CustomAttributeCache_m3534;
extern CustomAttributesCache t40__CustomAttributeCache_m3535;
extern CustomAttributesCache t40__CustomAttributeCache_m3536;
extern CustomAttributesCache t40__CustomAttributeCache_m518;
extern CustomAttributesCache t40__CustomAttributeCache_m3537;
const Il2CppTypeDefinitionMetadata t40_DM = 
{
	NULL, NULL, NULL, NULL, &t57_0_0_0, t40_VT, t40_VTIGM, NULL};
TypeInfo t40_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Material", "UnityEngine", t40_MIs, t40_PIs, NULL, NULL, &t40_TI, NULL, &EmptyCustomAttributesCache, &t40_0_0_0, &t40_1_0_0, &t40_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t40), sizeof (t40), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 24, 2, 0, 0, 0, 4, 0, 0};
#include "t726.h"
// Metadata Definition UnityEngine.Rendering.SphericalHarmonicsL2
extern TypeInfo t726_TI;
#include "t726MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3538_MI = 
{
	"Clear", (methodPointerType)&m3538, &t726_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 643, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t726_1_0_0;
extern Il2CppType t726_1_0_0;
static ParameterInfo t726_m3539_ParameterInfos[] = 
{
	{"sh", 0, 134218364, &EmptyCustomAttributesCache, &t726_1_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t955 (MethodInfo* method, void* obj, void** args);
MethodInfo m3539_MI = 
{
	"ClearInternal", (methodPointerType)&m3539, &t726_TI, &t122_0_0_0, RuntimeInvoker_t122_t955, t726_m3539_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 644, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t726_1_0_0;
static ParameterInfo t726_m3540_ParameterInfos[] = 
{
	{"sh", 0, 134218365, &EmptyCustomAttributesCache, &t726_1_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t955 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t726__CustomAttributeCache_m3540;
MethodInfo m3540_MI = 
{
	"INTERNAL_CALL_ClearInternal", (methodPointerType)&m3540, &t726_TI, &t122_0_0_0, RuntimeInvoker_t122_t955, t726_m3540_ParameterInfos, &t726__CustomAttributeCache_m3540, 145, 4096, 255, 1, false, false, 645, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t726_m3541_ParameterInfos[] = 
{
	{"color", 0, 134218366, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t43 (MethodInfo* method, void* obj, void** args);
MethodInfo m3541_MI = 
{
	"AddAmbientLight", (methodPointerType)&m3541, &t726_TI, &t122_0_0_0, RuntimeInvoker_t122_t43, t726_m3541_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 646, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_0_0_0;
extern Il2CppType t726_1_0_0;
static ParameterInfo t726_m3542_ParameterInfos[] = 
{
	{"color", 0, 134218367, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"sh", 1, 134218368, &EmptyCustomAttributesCache, &t726_1_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t43_t955 (MethodInfo* method, void* obj, void** args);
MethodInfo m3542_MI = 
{
	"AddAmbientLightInternal", (methodPointerType)&m3542, &t726_TI, &t122_0_0_0, RuntimeInvoker_t122_t43_t955, t726_m3542_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 647, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t43_1_0_0;
extern Il2CppType t726_1_0_0;
static ParameterInfo t726_m3543_ParameterInfos[] = 
{
	{"color", 0, 134218369, &EmptyCustomAttributesCache, &t43_1_0_0},
	{"sh", 1, 134218370, &EmptyCustomAttributesCache, &t726_1_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t647_t955 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t726__CustomAttributeCache_m3543;
MethodInfo m3543_MI = 
{
	"INTERNAL_CALL_AddAmbientLightInternal", (methodPointerType)&m3543, &t726_TI, &t122_0_0_0, RuntimeInvoker_t122_t647_t955, t726_m3543_ParameterInfos, &t726__CustomAttributeCache_m3543, 145, 4096, 255, 2, false, false, 648, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t43_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t726_m3544_ParameterInfos[] = 
{
	{"direction", 0, 134218371, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"color", 1, 134218372, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"intensity", 2, 134218373, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t13_t43_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3544_MI = 
{
	"AddDirectionalLight", (methodPointerType)&m3544, &t726_TI, &t122_0_0_0, RuntimeInvoker_t122_t13_t43_t123, t726_m3544_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 649, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t43_0_0_0;
extern Il2CppType t726_1_0_0;
static ParameterInfo t726_m3545_ParameterInfos[] = 
{
	{"direction", 0, 134218374, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"color", 1, 134218375, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"sh", 2, 134218376, &EmptyCustomAttributesCache, &t726_1_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t13_t43_t955 (MethodInfo* method, void* obj, void** args);
MethodInfo m3545_MI = 
{
	"AddDirectionalLightInternal", (methodPointerType)&m3545, &t726_TI, &t122_0_0_0, RuntimeInvoker_t122_t13_t43_t955, t726_m3545_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 650, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t13_1_0_0;
extern Il2CppType t43_1_0_0;
extern Il2CppType t726_1_0_0;
static ParameterInfo t726_m3546_ParameterInfos[] = 
{
	{"direction", 0, 134218377, &EmptyCustomAttributesCache, &t13_1_0_0},
	{"color", 1, 134218378, &EmptyCustomAttributesCache, &t43_1_0_0},
	{"sh", 2, 134218379, &EmptyCustomAttributesCache, &t726_1_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t946_t647_t955 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t726__CustomAttributeCache_m3546;
MethodInfo m3546_MI = 
{
	"INTERNAL_CALL_AddDirectionalLightInternal", (methodPointerType)&m3546, &t726_TI, &t122_0_0_0, RuntimeInvoker_t122_t946_t647_t955, t726_m3546_ParameterInfos, &t726__CustomAttributeCache_m3546, 145, 4096, 255, 3, false, false, 651, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t726_m3547_ParameterInfos[] = 
{
	{"rgb", 0, 134218380, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"coefficient", 1, 134218381, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3547_MI = 
{
	"get_Item", (methodPointerType)&m3547, &t726_TI, &t123_0_0_0, RuntimeInvoker_t123_t125_t125, t726_m3547_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 2, false, false, 652, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t726_m3548_ParameterInfos[] = 
{
	{"rgb", 0, 134218382, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"coefficient", 1, 134218383, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"value", 2, 134218384, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t125_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3548_MI = 
{
	"set_Item", (methodPointerType)&m3548, &t726_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t125_t123, t726_m3548_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 3, false, false, 653, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3549_MI = 
{
	"GetHashCode", (methodPointerType)&m3549, &t726_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 654, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t726_m3550_ParameterInfos[] = 
{
	{"other", 0, 134218385, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3550_MI = 
{
	"Equals", (methodPointerType)&m3550, &t726_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t726_m3550_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 655, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t726_0_0_0;
extern Il2CppType t726_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t726_m3551_ParameterInfos[] = 
{
	{"lhs", 0, 134218386, &EmptyCustomAttributesCache, &t726_0_0_0},
	{"rhs", 1, 134218387, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t726_0_0_0;
extern void* RuntimeInvoker_t726_t726_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3551_MI = 
{
	"op_Multiply", (methodPointerType)&m3551, &t726_TI, &t726_0_0_0, RuntimeInvoker_t726_t726_t123, t726_m3551_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 656, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern Il2CppType t726_0_0_0;
static ParameterInfo t726_m3552_ParameterInfos[] = 
{
	{"lhs", 0, 134218388, &EmptyCustomAttributesCache, &t123_0_0_0},
	{"rhs", 1, 134218389, &EmptyCustomAttributesCache, &t726_0_0_0},
};
extern Il2CppType t726_0_0_0;
extern void* RuntimeInvoker_t726_t123_t726 (MethodInfo* method, void* obj, void** args);
MethodInfo m3552_MI = 
{
	"op_Multiply", (methodPointerType)&m3552, &t726_TI, &t726_0_0_0, RuntimeInvoker_t726_t123_t726, t726_m3552_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 657, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t726_0_0_0;
extern Il2CppType t726_0_0_0;
static ParameterInfo t726_m3553_ParameterInfos[] = 
{
	{"lhs", 0, 134218390, &EmptyCustomAttributesCache, &t726_0_0_0},
	{"rhs", 1, 134218391, &EmptyCustomAttributesCache, &t726_0_0_0},
};
extern Il2CppType t726_0_0_0;
extern void* RuntimeInvoker_t726_t726_t726 (MethodInfo* method, void* obj, void** args);
MethodInfo m3553_MI = 
{
	"op_Addition", (methodPointerType)&m3553, &t726_TI, &t726_0_0_0, RuntimeInvoker_t726_t726_t726, t726_m3553_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 658, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t726_0_0_0;
extern Il2CppType t726_0_0_0;
static ParameterInfo t726_m3554_ParameterInfos[] = 
{
	{"lhs", 0, 134218392, &EmptyCustomAttributesCache, &t726_0_0_0},
	{"rhs", 1, 134218393, &EmptyCustomAttributesCache, &t726_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t726_t726 (MethodInfo* method, void* obj, void** args);
MethodInfo m3554_MI = 
{
	"op_Equality", (methodPointerType)&m3554, &t726_TI, &t124_0_0_0, RuntimeInvoker_t124_t726_t726, t726_m3554_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 659, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t726_0_0_0;
extern Il2CppType t726_0_0_0;
static ParameterInfo t726_m3555_ParameterInfos[] = 
{
	{"lhs", 0, 134218394, &EmptyCustomAttributesCache, &t726_0_0_0},
	{"rhs", 1, 134218395, &EmptyCustomAttributesCache, &t726_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t726_t726 (MethodInfo* method, void* obj, void** args);
MethodInfo m3555_MI = 
{
	"op_Inequality", (methodPointerType)&m3555, &t726_TI, &t124_0_0_0, RuntimeInvoker_t124_t726_t726, t726_m3555_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 660, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t726_MIs[] =
{
	&m3538_MI,
	&m3539_MI,
	&m3540_MI,
	&m3541_MI,
	&m3542_MI,
	&m3543_MI,
	&m3544_MI,
	&m3545_MI,
	&m3546_MI,
	&m3547_MI,
	&m3548_MI,
	&m3549_MI,
	&m3550_MI,
	&m3551_MI,
	&m3552_MI,
	&m3553_MI,
	&m3554_MI,
	&m3555_MI,
	NULL
};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f0_FieldInfo = 
{
	"shr0", &t123_0_0_1, &t726_TI, offsetof(t726, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f1_FieldInfo = 
{
	"shr1", &t123_0_0_1, &t726_TI, offsetof(t726, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f2_FieldInfo = 
{
	"shr2", &t123_0_0_1, &t726_TI, offsetof(t726, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f3_FieldInfo = 
{
	"shr3", &t123_0_0_1, &t726_TI, offsetof(t726, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f4_FieldInfo = 
{
	"shr4", &t123_0_0_1, &t726_TI, offsetof(t726, f4) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f5_FieldInfo = 
{
	"shr5", &t123_0_0_1, &t726_TI, offsetof(t726, f5) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f6_FieldInfo = 
{
	"shr6", &t123_0_0_1, &t726_TI, offsetof(t726, f6) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f7_FieldInfo = 
{
	"shr7", &t123_0_0_1, &t726_TI, offsetof(t726, f7) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f8_FieldInfo = 
{
	"shr8", &t123_0_0_1, &t726_TI, offsetof(t726, f8) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f9_FieldInfo = 
{
	"shg0", &t123_0_0_1, &t726_TI, offsetof(t726, f9) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f10_FieldInfo = 
{
	"shg1", &t123_0_0_1, &t726_TI, offsetof(t726, f10) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f11_FieldInfo = 
{
	"shg2", &t123_0_0_1, &t726_TI, offsetof(t726, f11) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f12_FieldInfo = 
{
	"shg3", &t123_0_0_1, &t726_TI, offsetof(t726, f12) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f13_FieldInfo = 
{
	"shg4", &t123_0_0_1, &t726_TI, offsetof(t726, f13) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f14_FieldInfo = 
{
	"shg5", &t123_0_0_1, &t726_TI, offsetof(t726, f14) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f15_FieldInfo = 
{
	"shg6", &t123_0_0_1, &t726_TI, offsetof(t726, f15) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f16_FieldInfo = 
{
	"shg7", &t123_0_0_1, &t726_TI, offsetof(t726, f16) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f17_FieldInfo = 
{
	"shg8", &t123_0_0_1, &t726_TI, offsetof(t726, f17) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f18_FieldInfo = 
{
	"shb0", &t123_0_0_1, &t726_TI, offsetof(t726, f18) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f19_FieldInfo = 
{
	"shb1", &t123_0_0_1, &t726_TI, offsetof(t726, f19) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f20_FieldInfo = 
{
	"shb2", &t123_0_0_1, &t726_TI, offsetof(t726, f20) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f21_FieldInfo = 
{
	"shb3", &t123_0_0_1, &t726_TI, offsetof(t726, f21) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f22_FieldInfo = 
{
	"shb4", &t123_0_0_1, &t726_TI, offsetof(t726, f22) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f23_FieldInfo = 
{
	"shb5", &t123_0_0_1, &t726_TI, offsetof(t726, f23) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f24_FieldInfo = 
{
	"shb6", &t123_0_0_1, &t726_TI, offsetof(t726, f24) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f25_FieldInfo = 
{
	"shb7", &t123_0_0_1, &t726_TI, offsetof(t726, f25) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t123_0_0_1;
FieldInfo t726_f26_FieldInfo = 
{
	"shb8", &t123_0_0_1, &t726_TI, offsetof(t726, f26) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t726_FIs[] =
{
	&t726_f0_FieldInfo,
	&t726_f1_FieldInfo,
	&t726_f2_FieldInfo,
	&t726_f3_FieldInfo,
	&t726_f4_FieldInfo,
	&t726_f5_FieldInfo,
	&t726_f6_FieldInfo,
	&t726_f7_FieldInfo,
	&t726_f8_FieldInfo,
	&t726_f9_FieldInfo,
	&t726_f10_FieldInfo,
	&t726_f11_FieldInfo,
	&t726_f12_FieldInfo,
	&t726_f13_FieldInfo,
	&t726_f14_FieldInfo,
	&t726_f15_FieldInfo,
	&t726_f16_FieldInfo,
	&t726_f17_FieldInfo,
	&t726_f18_FieldInfo,
	&t726_f19_FieldInfo,
	&t726_f20_FieldInfo,
	&t726_f21_FieldInfo,
	&t726_f22_FieldInfo,
	&t726_f23_FieldInfo,
	&t726_f24_FieldInfo,
	&t726_f25_FieldInfo,
	&t726_f26_FieldInfo,
	NULL
};
extern MethodInfo m3547_MI;
extern MethodInfo m3548_MI;
static PropertyInfo t726____Item_PropertyInfo = 
{
	&t726_TI, "Item", &m3547_MI, &m3548_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t726_PIs[] =
{
	&t726____Item_PropertyInfo,
	NULL
};
extern MethodInfo m3550_MI;
extern MethodInfo m3549_MI;
static Il2CppMethodReference t726_VT[] =
{
	&m3550_MI,
	&m646_MI,
	&m3549_MI,
	&m682_MI,
};
static bool t726_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t726_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t666 * tmp;
		tmp = (t666 *)il2cpp_codegen_object_new (&t666_TI);
		m3103(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m3103_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t726_CustomAttributesCacheGenerator_m3540(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t726_CustomAttributesCacheGenerator_m3543(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t726_CustomAttributesCacheGenerator_m3546(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t726__CustomAttributeCache = {
1,
NULL,
&t726_CustomAttributesCacheGenerator
};
CustomAttributesCache t726__CustomAttributeCache_m3540 = {
1,
NULL,
&t726_CustomAttributesCacheGenerator_m3540
};
CustomAttributesCache t726__CustomAttributeCache_m3543 = {
1,
NULL,
&t726_CustomAttributesCacheGenerator_m3543
};
CustomAttributesCache t726__CustomAttributeCache_m3546 = {
1,
NULL,
&t726_CustomAttributesCacheGenerator_m3546
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern CustomAttributesCache t726__CustomAttributeCache;
extern CustomAttributesCache t726__CustomAttributeCache_m3540;
extern CustomAttributesCache t726__CustomAttributeCache_m3543;
extern CustomAttributesCache t726__CustomAttributeCache_m3546;
const Il2CppTypeDefinitionMetadata t726_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t726_VT, t726_VTIGM, NULL};
TypeInfo t726_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "SphericalHarmonicsL2", "UnityEngine.Rendering", t726_MIs, t726_PIs, t726_FIs, NULL, &t726_TI, NULL, &t726__CustomAttributeCache, &t726_0_0_0, &t726_1_0_0, &t726_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t726)+ sizeof (Il2CppObject), sizeof (t726)+ sizeof (Il2CppObject), 0, sizeof(t726 ), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, true, 18, 1, 27, 0, 0, 4, 0, 0};
#include "t456.h"
// Metadata Definition UnityEngine.Sprite
extern TypeInfo t456_TI;
#include "t456MD.h"
extern Il2CppType t441_0_0_0;
extern void* RuntimeInvoker_t441 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t456__CustomAttributeCache_m2677;
MethodInfo m2677_MI = 
{
	"get_rect", (methodPointerType)&m2677, &t456_TI, &t441_0_0_0, RuntimeInvoker_t441, NULL, &t456__CustomAttributeCache_m2677, 2182, 4096, 255, 0, false, false, 661, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t456__CustomAttributeCache_m2674;
MethodInfo m2674_MI = 
{
	"get_pixelsPerUnit", (methodPointerType)&m2674, &t456_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t456__CustomAttributeCache_m2674, 2182, 4096, 255, 0, false, false, 662, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t432_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t456__CustomAttributeCache_m2671;
MethodInfo m2671_MI = 
{
	"get_texture", (methodPointerType)&m2671, &t456_TI, &t432_0_0_0, RuntimeInvoker_t9, NULL, &t456__CustomAttributeCache_m2671, 2182, 4096, 255, 0, false, false, 663, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t441_0_0_0;
extern void* RuntimeInvoker_t441 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t456__CustomAttributeCache_m2702;
MethodInfo m2702_MI = 
{
	"get_textureRect", (methodPointerType)&m2702, &t456_TI, &t441_0_0_0, RuntimeInvoker_t441, NULL, &t456__CustomAttributeCache_m2702, 2182, 4096, 255, 0, false, false, 664, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t456__CustomAttributeCache_m2672;
MethodInfo m2672_MI = 
{
	"get_border", (methodPointerType)&m2672, &t456_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &t456__CustomAttributeCache_m2672, 2182, 4096, 255, 0, false, false, 665, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t456_MIs[] =
{
	&m2677_MI,
	&m2674_MI,
	&m2671_MI,
	&m2702_MI,
	&m2672_MI,
	NULL
};
extern MethodInfo m2677_MI;
static PropertyInfo t456____rect_PropertyInfo = 
{
	&t456_TI, "rect", &m2677_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2674_MI;
static PropertyInfo t456____pixelsPerUnit_PropertyInfo = 
{
	&t456_TI, "pixelsPerUnit", &m2674_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2671_MI;
static PropertyInfo t456____texture_PropertyInfo = 
{
	&t456_TI, "texture", &m2671_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2702_MI;
static PropertyInfo t456____textureRect_PropertyInfo = 
{
	&t456_TI, "textureRect", &m2702_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2672_MI;
static PropertyInfo t456____border_PropertyInfo = 
{
	&t456_TI, "border", &m2672_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t456_PIs[] =
{
	&t456____rect_PropertyInfo,
	&t456____pixelsPerUnit_PropertyInfo,
	&t456____texture_PropertyInfo,
	&t456____textureRect_PropertyInfo,
	&t456____border_PropertyInfo,
	NULL
};
static Il2CppMethodReference t456_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t456_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t456_CustomAttributesCacheGenerator_m2677(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t456_CustomAttributesCacheGenerator_m2674(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t456_CustomAttributesCacheGenerator_m2671(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t456_CustomAttributesCacheGenerator_m2702(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t456_CustomAttributesCacheGenerator_m2672(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t456__CustomAttributeCache_m2677 = {
1,
NULL,
&t456_CustomAttributesCacheGenerator_m2677
};
CustomAttributesCache t456__CustomAttributeCache_m2674 = {
1,
NULL,
&t456_CustomAttributesCacheGenerator_m2674
};
CustomAttributesCache t456__CustomAttributeCache_m2671 = {
1,
NULL,
&t456_CustomAttributesCacheGenerator_m2671
};
CustomAttributesCache t456__CustomAttributeCache_m2702 = {
1,
NULL,
&t456_CustomAttributesCacheGenerator_m2702
};
CustomAttributesCache t456__CustomAttributeCache_m2672 = {
1,
NULL,
&t456_CustomAttributesCacheGenerator_m2672
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t456_0_0_0;
extern Il2CppType t456_1_0_0;
struct t456;
extern CustomAttributesCache t456__CustomAttributeCache_m2677;
extern CustomAttributesCache t456__CustomAttributeCache_m2674;
extern CustomAttributesCache t456__CustomAttributeCache_m2671;
extern CustomAttributesCache t456__CustomAttributeCache_m2702;
extern CustomAttributesCache t456__CustomAttributeCache_m2672;
const Il2CppTypeDefinitionMetadata t456_DM = 
{
	NULL, NULL, NULL, NULL, &t57_0_0_0, t456_VT, t456_VTIGM, NULL};
TypeInfo t456_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Sprite", "UnityEngine", t456_MIs, t456_PIs, NULL, NULL, &t456_TI, NULL, &EmptyCustomAttributesCache, &t456_0_0_0, &t456_1_0_0, &t456_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t456), sizeof (t456), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 5, 0, 0, 0, 4, 0, 0};
#include "t569.h"
// Metadata Definition UnityEngine.SpriteRenderer
extern TypeInfo t569_TI;
#include "t569MD.h"
static MethodInfo* t569_MIs[] =
{
	NULL
};
static Il2CppMethodReference t569_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t569_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t569_0_0_0;
extern Il2CppType t569_1_0_0;
struct t569;
const Il2CppTypeDefinitionMetadata t569_DM = 
{
	NULL, NULL, NULL, NULL, &t144_0_0_0, t569_VT, t569_VTIGM, NULL};
TypeInfo t569_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "SpriteRenderer", "UnityEngine", t569_MIs, NULL, NULL, NULL, &t569_TI, NULL, &EmptyCustomAttributesCache, &t569_0_0_0, &t569_1_0_0, &t569_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t569), sizeof (t569), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#include "t589.h"
// Metadata Definition UnityEngine.Sprites.DataUtility
extern TypeInfo t589_TI;
#include "t589MD.h"
extern Il2CppType t456_0_0_0;
static ParameterInfo t589_m2691_ParameterInfos[] = 
{
	{"sprite", 0, 134218396, &EmptyCustomAttributesCache, &t456_0_0_0},
};
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t589__CustomAttributeCache_m2691;
MethodInfo m2691_MI = 
{
	"GetInnerUV", (methodPointerType)&m2691, &t589_TI, &t47_0_0_0, RuntimeInvoker_t47_t9, t589_m2691_ParameterInfos, &t589__CustomAttributeCache_m2691, 150, 4096, 255, 1, false, false, 666, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t456_0_0_0;
static ParameterInfo t589_m2690_ParameterInfos[] = 
{
	{"sprite", 0, 134218397, &EmptyCustomAttributesCache, &t456_0_0_0},
};
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t589__CustomAttributeCache_m2690;
MethodInfo m2690_MI = 
{
	"GetOuterUV", (methodPointerType)&m2690, &t589_TI, &t47_0_0_0, RuntimeInvoker_t47_t9, t589_m2690_ParameterInfos, &t589__CustomAttributeCache_m2690, 150, 4096, 255, 1, false, false, 667, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t456_0_0_0;
static ParameterInfo t589_m2680_ParameterInfos[] = 
{
	{"sprite", 0, 134218398, &EmptyCustomAttributesCache, &t456_0_0_0},
};
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t589__CustomAttributeCache_m2680;
MethodInfo m2680_MI = 
{
	"GetPadding", (methodPointerType)&m2680, &t589_TI, &t47_0_0_0, RuntimeInvoker_t47_t9, t589_m2680_ParameterInfos, &t589__CustomAttributeCache_m2680, 150, 4096, 255, 1, false, false, 668, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t456_0_0_0;
static ParameterInfo t589_m2676_ParameterInfos[] = 
{
	{"sprite", 0, 134218399, &EmptyCustomAttributesCache, &t456_0_0_0},
};
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m2676_MI = 
{
	"GetMinSize", (methodPointerType)&m2676, &t589_TI, &t28_0_0_0, RuntimeInvoker_t28_t9, t589_m2676_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 669, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t456_0_0_0;
extern Il2CppType t28_1_0_2;
static ParameterInfo t589_m3556_ParameterInfos[] = 
{
	{"sprite", 0, 134218400, &EmptyCustomAttributesCache, &t456_0_0_0},
	{"output", 1, 134218401, &EmptyCustomAttributesCache, &t28_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t949 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t589__CustomAttributeCache_m3556;
MethodInfo m3556_MI = 
{
	"Internal_GetMinSize", (methodPointerType)&m3556, &t589_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t949, t589_m3556_ParameterInfos, &t589__CustomAttributeCache_m3556, 145, 4096, 255, 2, false, false, 670, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t589_MIs[] =
{
	&m2691_MI,
	&m2690_MI,
	&m2680_MI,
	&m2676_MI,
	&m3556_MI,
	NULL
};
static Il2CppMethodReference t589_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t589_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t589_CustomAttributesCacheGenerator_m2691(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t589_CustomAttributesCacheGenerator_m2690(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t589_CustomAttributesCacheGenerator_m2680(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t589_CustomAttributesCacheGenerator_m3556(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t589__CustomAttributeCache_m2691 = {
1,
NULL,
&t589_CustomAttributesCacheGenerator_m2691
};
CustomAttributesCache t589__CustomAttributeCache_m2690 = {
1,
NULL,
&t589_CustomAttributesCacheGenerator_m2690
};
CustomAttributesCache t589__CustomAttributeCache_m2680 = {
1,
NULL,
&t589_CustomAttributesCacheGenerator_m2680
};
CustomAttributesCache t589__CustomAttributeCache_m3556 = {
1,
NULL,
&t589_CustomAttributesCacheGenerator_m3556
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t589_0_0_0;
extern Il2CppType t589_1_0_0;
struct t589;
extern CustomAttributesCache t589__CustomAttributeCache_m2691;
extern CustomAttributesCache t589__CustomAttributeCache_m2690;
extern CustomAttributesCache t589__CustomAttributeCache_m2680;
extern CustomAttributesCache t589__CustomAttributeCache_m3556;
const Il2CppTypeDefinitionMetadata t589_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t589_VT, t589_VTIGM, NULL};
TypeInfo t589_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "DataUtility", "UnityEngine.Sprites", t589_MIs, NULL, NULL, NULL, &t589_TI, NULL, &EmptyCustomAttributesCache, &t589_0_0_0, &t589_1_0_0, &t589_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t589), sizeof (t589), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 4, 0, 0};
#include "t727.h"
// Metadata Definition UnityEngine.WWW
extern TypeInfo t727_TI;
#include "t727MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t731_0_0_0;
extern Il2CppType t731_0_0_0;
static ParameterInfo t727_m3557_ParameterInfos[] = 
{
	{"url", 0, 134218402, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"form", 1, 134218403, &EmptyCustomAttributesCache, &t731_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3557_MI = 
{
	".ctor", (methodPointerType)&m3557, &t727_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t727_m3557_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 671, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3558_MI = 
{
	"Dispose", (methodPointerType)&m3558, &t727_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 486, 0, 4, 0, false, false, 672, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3559_MI = 
{
	"Finalize", (methodPointerType)&m3559, &t727_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 673, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t727_m3560_ParameterInfos[] = 
{
	{"cancel", 0, 134218404, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t727__CustomAttributeCache_m3560;
MethodInfo m3560_MI = 
{
	"DestroyWWW", (methodPointerType)&m3560, &t727_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t727_m3560_ParameterInfos, &t727__CustomAttributeCache_m3560, 129, 4096, 255, 1, false, false, 674, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t727_m3561_ParameterInfos[] = 
{
	{"url", 0, 134218405, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"postData", 1, 134218406, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"iHeaders", 2, 134218407, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t727__CustomAttributeCache_m3561;
MethodInfo m3561_MI = 
{
	"InitWWW", (methodPointerType)&m3561, &t727_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t727_m3561_ParameterInfos, &t727__CustomAttributeCache_m3561, 134, 4096, 255, 3, false, false, 675, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t728_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3562_MI = 
{
	"get_responseHeaders", (methodPointerType)&m3562, &t727_TI, &t728_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 676, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t727__CustomAttributeCache_m3563;
MethodInfo m3563_MI = 
{
	"get_responseHeadersString", (methodPointerType)&m3563, &t727_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &t727__CustomAttributeCache_m3563, 2177, 4096, 255, 0, false, false, 677, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3564_MI = 
{
	"get_text", (methodPointerType)&m3564, &t727_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 678, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t729_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3565_MI = 
{
	"get_DefaultEncoding", (methodPointerType)&m3565, &t727_TI, &t729_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 679, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t729_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3566_MI = 
{
	"GetTextEncoder", (methodPointerType)&m3566, &t727_TI, &t729_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 680, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t727__CustomAttributeCache_m3567;
MethodInfo m3567_MI = 
{
	"get_bytes", (methodPointerType)&m3567, &t727_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &t727__CustomAttributeCache_m3567, 2182, 4096, 255, 0, false, false, 681, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t727__CustomAttributeCache_m3568;
MethodInfo m3568_MI = 
{
	"get_error", (methodPointerType)&m3568, &t727_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &t727__CustomAttributeCache_m3568, 2182, 4096, 255, 0, false, false, 682, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t727__CustomAttributeCache_m3569;
MethodInfo m3569_MI = 
{
	"get_isDone", (methodPointerType)&m3569, &t727_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &t727__CustomAttributeCache_m3569, 2182, 4096, 255, 0, false, false, 683, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t728_0_0_0;
extern Il2CppType t728_0_0_0;
static ParameterInfo t727_m3570_ParameterInfos[] = 
{
	{"headers", 0, 134218408, &EmptyCustomAttributesCache, &t728_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3570_MI = 
{
	"FlattenedHeadersFrom", (methodPointerType)&m3570, &t727_TI, &t221_0_0_0, RuntimeInvoker_t9_t9, t727_m3570_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 684, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t727_m3571_ParameterInfos[] = 
{
	{"input", 0, 134218409, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t728_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3571_MI = 
{
	"ParseHTTPHeaderString", (methodPointerType)&m3571, &t727_TI, &t728_0_0_0, RuntimeInvoker_t9_t9, t727_m3571_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 685, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t727_MIs[] =
{
	&m3557_MI,
	&m3558_MI,
	&m3559_MI,
	&m3560_MI,
	&m3561_MI,
	&m3562_MI,
	&m3563_MI,
	&m3564_MI,
	&m3565_MI,
	&m3566_MI,
	&m3567_MI,
	&m3568_MI,
	&m3569_MI,
	&m3570_MI,
	&m3571_MI,
	NULL
};
extern MethodInfo m3562_MI;
static PropertyInfo t727____responseHeaders_PropertyInfo = 
{
	&t727_TI, "responseHeaders", &m3562_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3563_MI;
static PropertyInfo t727____responseHeadersString_PropertyInfo = 
{
	&t727_TI, "responseHeadersString", &m3563_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3564_MI;
static PropertyInfo t727____text_PropertyInfo = 
{
	&t727_TI, "text", &m3564_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3565_MI;
static PropertyInfo t727____DefaultEncoding_PropertyInfo = 
{
	&t727_TI, "DefaultEncoding", &m3565_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3567_MI;
static PropertyInfo t727____bytes_PropertyInfo = 
{
	&t727_TI, "bytes", &m3567_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3568_MI;
static PropertyInfo t727____error_PropertyInfo = 
{
	&t727_TI, "error", &m3568_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3569_MI;
static PropertyInfo t727____isDone_PropertyInfo = 
{
	&t727_TI, "isDone", &m3569_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t727_PIs[] =
{
	&t727____responseHeaders_PropertyInfo,
	&t727____responseHeadersString_PropertyInfo,
	&t727____text_PropertyInfo,
	&t727____DefaultEncoding_PropertyInfo,
	&t727____bytes_PropertyInfo,
	&t727____error_PropertyInfo,
	&t727____isDone_PropertyInfo,
	NULL
};
extern MethodInfo m3559_MI;
extern MethodInfo m3558_MI;
static Il2CppMethodReference t727_VT[] =
{
	&m671_MI,
	&m3559_MI,
	&m672_MI,
	&m673_MI,
	&m3558_MI,
};
static bool t727_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t137_0_0_0;
static const Il2CppType* t727_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t727_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t727_CustomAttributesCacheGenerator_m3560(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t727_CustomAttributesCacheGenerator_m3561(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t727_CustomAttributesCacheGenerator_m3563(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t727_CustomAttributesCacheGenerator_m3567(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t727_CustomAttributesCacheGenerator_m3568(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t727_CustomAttributesCacheGenerator_m3569(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t727__CustomAttributeCache_m3560 = {
1,
NULL,
&t727_CustomAttributesCacheGenerator_m3560
};
CustomAttributesCache t727__CustomAttributeCache_m3561 = {
1,
NULL,
&t727_CustomAttributesCacheGenerator_m3561
};
CustomAttributesCache t727__CustomAttributeCache_m3563 = {
1,
NULL,
&t727_CustomAttributesCacheGenerator_m3563
};
CustomAttributesCache t727__CustomAttributeCache_m3567 = {
1,
NULL,
&t727_CustomAttributesCacheGenerator_m3567
};
CustomAttributesCache t727__CustomAttributeCache_m3568 = {
1,
NULL,
&t727_CustomAttributesCacheGenerator_m3568
};
CustomAttributesCache t727__CustomAttributeCache_m3569 = {
1,
NULL,
&t727_CustomAttributesCacheGenerator_m3569
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t727_0_0_0;
extern Il2CppType t727_1_0_0;
struct t727;
extern CustomAttributesCache t727__CustomAttributeCache_m3560;
extern CustomAttributesCache t727__CustomAttributeCache_m3561;
extern CustomAttributesCache t727__CustomAttributeCache_m3563;
extern CustomAttributesCache t727__CustomAttributeCache_m3567;
extern CustomAttributesCache t727__CustomAttributeCache_m3568;
extern CustomAttributesCache t727__CustomAttributeCache_m3569;
const Il2CppTypeDefinitionMetadata t727_DM = 
{
	NULL, NULL, t727_ITIs, t727_IOs, &t9_0_0_0, t727_VT, t727_VTIGM, NULL};
TypeInfo t727_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "WWW", "UnityEngine", t727_MIs, t727_PIs, NULL, NULL, &t727_TI, NULL, &EmptyCustomAttributesCache, &t727_0_0_0, &t727_1_0_0, &t727_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t727), sizeof (t727), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 15, 7, 0, 0, 0, 5, 1, 1};
#include "t731.h"
// Metadata Definition UnityEngine.WWWForm
extern TypeInfo t731_TI;
#include "t731MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3572_MI = 
{
	".ctor", (methodPointerType)&m3572, &t731_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 686, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t731_m3573_ParameterInfos[] = 
{
	{"fieldName", 0, 134218410, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134218411, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t731__CustomAttributeCache_m3573;
MethodInfo m3573_MI = 
{
	"AddField", (methodPointerType)&m3573, &t731_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t731_m3573_ParameterInfos, &t731__CustomAttributeCache_m3573, 134, 0, 255, 2, false, false, 687, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t729_0_0_0;
extern Il2CppType t729_0_0_0;
extern CustomAttributesCache t731__CustomAttributeCache_t731_m3574_Arg2_ParameterInfo;
static ParameterInfo t731_m3574_ParameterInfos[] = 
{
	{"fieldName", 0, 134218412, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134218413, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"e", 2, 134218414, &t731__CustomAttributeCache_t731_m3574_Arg2_ParameterInfo, &t729_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3574_MI = 
{
	"AddField", (methodPointerType)&m3574, &t731_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t731_m3574_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 688, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t731_m3575_ParameterInfos[] = 
{
	{"fieldName", 0, 134218415, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"i", 1, 134218416, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3575_MI = 
{
	"AddField", (methodPointerType)&m3575, &t731_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t731_m3575_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 689, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t728_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3576_MI = 
{
	"get_headers", (methodPointerType)&m3576, &t731_TI, &t728_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 690, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3577_MI = 
{
	"get_data", (methodPointerType)&m3577, &t731_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 691, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t731_MIs[] =
{
	&m3572_MI,
	&m3573_MI,
	&m3574_MI,
	&m3575_MI,
	&m3576_MI,
	&m3577_MI,
	NULL
};
extern Il2CppType t732_0_0_1;
FieldInfo t731_f0_FieldInfo = 
{
	"formData", &t732_0_0_1, &t731_TI, offsetof(t731, f0), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t731_f1_FieldInfo = 
{
	"fieldNames", &t31_0_0_1, &t731_TI, offsetof(t731, f1), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t731_f2_FieldInfo = 
{
	"fileNames", &t31_0_0_1, &t731_TI, offsetof(t731, f2), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t731_f3_FieldInfo = 
{
	"types", &t31_0_0_1, &t731_TI, offsetof(t731, f3), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t731_f4_FieldInfo = 
{
	"boundary", &t730_0_0_1, &t731_TI, offsetof(t731, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t731_f5_FieldInfo = 
{
	"containsFiles", &t124_0_0_1, &t731_TI, offsetof(t731, f5), &EmptyCustomAttributesCache};
static FieldInfo* t731_FIs[] =
{
	&t731_f0_FieldInfo,
	&t731_f1_FieldInfo,
	&t731_f2_FieldInfo,
	&t731_f3_FieldInfo,
	&t731_f4_FieldInfo,
	&t731_f5_FieldInfo,
	NULL
};
extern MethodInfo m3576_MI;
static PropertyInfo t731____headers_PropertyInfo = 
{
	&t731_TI, "headers", &m3576_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3577_MI;
static PropertyInfo t731____data_PropertyInfo = 
{
	&t731_TI, "data", &m3577_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t731_PIs[] =
{
	&t731____headers_PropertyInfo,
	&t731____data_PropertyInfo,
	NULL
};
static Il2CppMethodReference t731_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t731_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t731_CustomAttributesCacheGenerator_m3573(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t874 * tmp;
		tmp = (t874 *)il2cpp_codegen_object_new (&t874_TI);
		m4220(tmp, &m4220_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t731_CustomAttributesCacheGenerator_t731_m3574_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t873 * tmp;
		tmp = (t873 *)il2cpp_codegen_object_new (&t873_TI);
		m4216(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), &m4216_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t731__CustomAttributeCache_m3573 = {
1,
NULL,
&t731_CustomAttributesCacheGenerator_m3573
};
CustomAttributesCache t731__CustomAttributeCache_t731_m3574_Arg2_ParameterInfo = {
1,
NULL,
&t731_CustomAttributesCacheGenerator_t731_m3574_Arg2_ParameterInfo
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t731_1_0_0;
struct t731;
extern CustomAttributesCache t731__CustomAttributeCache_m3573;
const Il2CppTypeDefinitionMetadata t731_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t731_VT, t731_VTIGM, NULL};
TypeInfo t731_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "WWWForm", "UnityEngine", t731_MIs, t731_PIs, t731_FIs, NULL, &t731_TI, NULL, &EmptyCustomAttributesCache, &t731_0_0_0, &t731_1_0_0, &t731_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t731), sizeof (t731), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 2, 6, 0, 0, 4, 0, 0};
#include "t733.h"
// Metadata Definition UnityEngine.WWWTranscoder
extern TypeInfo t733_TI;
#include "t733MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3578_MI = 
{
	".cctor", (methodPointerType)&m3578, &t733_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 692, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t575_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t733_m3579_ParameterInfos[] = 
{
	{"b", 0, 134218417, &EmptyCustomAttributesCache, &t575_0_0_0},
	{"hexChars", 1, 134218418, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t186_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3579_MI = 
{
	"Byte2Hex", (methodPointerType)&m3579, &t733_TI, &t730_0_0_0, RuntimeInvoker_t9_t186_t9, t733_m3579_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 693, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t733_m3580_ParameterInfos[] = 
{
	{"toEncode", 0, 134218419, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3580_MI = 
{
	"URLEncode", (methodPointerType)&m3580, &t733_TI, &t730_0_0_0, RuntimeInvoker_t9_t9, t733_m3580_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 694, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t729_0_0_0;
extern CustomAttributesCache t733__CustomAttributeCache_t733_m3581_Arg1_ParameterInfo;
static ParameterInfo t733_m3581_ParameterInfos[] = 
{
	{"toEncode", 0, 134218420, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"e", 1, 134218421, &t733__CustomAttributeCache_t733_m3581_Arg1_ParameterInfo, &t729_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3581_MI = 
{
	"QPEncode", (methodPointerType)&m3581, &t733_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t9, t733_m3581_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 695, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t575_0_0_0;
extern Il2CppType t575_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t733_m3582_ParameterInfos[] = 
{
	{"input", 0, 134218422, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"escapeChar", 1, 134218423, &EmptyCustomAttributesCache, &t575_0_0_0},
	{"space", 2, 134218424, &EmptyCustomAttributesCache, &t575_0_0_0},
	{"forbidden", 3, 134218425, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"uppercase", 4, 134218426, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186_t186_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m3582_MI = 
{
	"Encode", (methodPointerType)&m3582, &t733_TI, &t730_0_0_0, RuntimeInvoker_t9_t9_t186_t186_t9_t186, t733_m3582_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 5, false, false, 696, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t575_0_0_0;
static ParameterInfo t733_m3583_ParameterInfos[] = 
{
	{"array", 0, 134218427, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"b", 1, 134218428, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m3583_MI = 
{
	"ByteArrayContains", (methodPointerType)&m3583, &t733_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t733_m3583_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 697, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t729_0_0_0;
extern CustomAttributesCache t733__CustomAttributeCache_t733_m3584_Arg1_ParameterInfo;
static ParameterInfo t733_m3584_ParameterInfos[] = 
{
	{"s", 0, 134218429, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"e", 1, 134218430, &t733__CustomAttributeCache_t733_m3584_Arg1_ParameterInfo, &t729_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3584_MI = 
{
	"SevenBitClean", (methodPointerType)&m3584, &t733_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t733_m3584_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 698, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t733_m3585_ParameterInfos[] = 
{
	{"input", 0, 134218431, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3585_MI = 
{
	"SevenBitClean", (methodPointerType)&m3585, &t733_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t733_m3585_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 699, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t733_MIs[] =
{
	&m3578_MI,
	&m3579_MI,
	&m3580_MI,
	&m3581_MI,
	&m3582_MI,
	&m3583_MI,
	&m3584_MI,
	&m3585_MI,
	NULL
};
extern Il2CppType t730_0_0_17;
FieldInfo t733_f0_FieldInfo = 
{
	"ucHexChars", &t730_0_0_17, &t733_TI, offsetof(t733_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_17;
FieldInfo t733_f1_FieldInfo = 
{
	"lcHexChars", &t730_0_0_17, &t733_TI, offsetof(t733_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t575_0_0_17;
FieldInfo t733_f2_FieldInfo = 
{
	"urlEscapeChar", &t575_0_0_17, &t733_TI, offsetof(t733_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t575_0_0_17;
FieldInfo t733_f3_FieldInfo = 
{
	"urlSpace", &t575_0_0_17, &t733_TI, offsetof(t733_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_17;
FieldInfo t733_f4_FieldInfo = 
{
	"urlForbidden", &t730_0_0_17, &t733_TI, offsetof(t733_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t575_0_0_17;
FieldInfo t733_f5_FieldInfo = 
{
	"qpEscapeChar", &t575_0_0_17, &t733_TI, offsetof(t733_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t575_0_0_17;
FieldInfo t733_f6_FieldInfo = 
{
	"qpSpace", &t575_0_0_17, &t733_TI, offsetof(t733_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_17;
FieldInfo t733_f7_FieldInfo = 
{
	"qpForbidden", &t730_0_0_17, &t733_TI, offsetof(t733_SFs, f7), &EmptyCustomAttributesCache};
static FieldInfo* t733_FIs[] =
{
	&t733_f0_FieldInfo,
	&t733_f1_FieldInfo,
	&t733_f2_FieldInfo,
	&t733_f3_FieldInfo,
	&t733_f4_FieldInfo,
	&t733_f5_FieldInfo,
	&t733_f6_FieldInfo,
	&t733_f7_FieldInfo,
	NULL
};
static Il2CppMethodReference t733_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t733_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t733_CustomAttributesCacheGenerator_t733_m3581_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t873 * tmp;
		tmp = (t873 *)il2cpp_codegen_object_new (&t873_TI);
		m4216(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), &m4216_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t733_CustomAttributesCacheGenerator_t733_m3584_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t873 * tmp;
		tmp = (t873 *)il2cpp_codegen_object_new (&t873_TI);
		m4216(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), &m4216_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t733__CustomAttributeCache_t733_m3581_Arg1_ParameterInfo = {
1,
NULL,
&t733_CustomAttributesCacheGenerator_t733_m3581_Arg1_ParameterInfo
};
CustomAttributesCache t733__CustomAttributeCache_t733_m3584_Arg1_ParameterInfo = {
1,
NULL,
&t733_CustomAttributesCacheGenerator_t733_m3584_Arg1_ParameterInfo
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t733_0_0_0;
extern Il2CppType t733_1_0_0;
struct t733;
const Il2CppTypeDefinitionMetadata t733_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t733_VT, t733_VTIGM, NULL};
TypeInfo t733_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "WWWTranscoder", "UnityEngine", t733_MIs, NULL, t733_FIs, NULL, &t733_TI, NULL, &EmptyCustomAttributesCache, &t733_0_0_0, &t733_1_0_0, &t733_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t733), sizeof (t733), 0, -1, sizeof(t733_SFs), 0, -1, 1048832, 0, 0, false, false, false, false, false, false, false, false, true, false, 8, 0, 8, 0, 0, 4, 0, 0};
#include "t734.h"
// Metadata Definition UnityEngine.CacheIndex
extern TypeInfo t734_TI;
#include "t734MD.h"
static MethodInfo* t734_MIs[] =
{
	NULL
};
extern Il2CppType t2_0_0_6;
FieldInfo t734_f0_FieldInfo = 
{
	"name", &t2_0_0_6, &t734_TI, offsetof(t734, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t734_f1_FieldInfo = 
{
	"bytesUsed", &t125_0_0_6, &t734_TI, offsetof(t734, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t734_f2_FieldInfo = 
{
	"expires", &t125_0_0_6, &t734_TI, offsetof(t734, f2) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t734_FIs[] =
{
	&t734_f0_FieldInfo,
	&t734_f1_FieldInfo,
	&t734_f2_FieldInfo,
	NULL
};
static Il2CppMethodReference t734_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t734_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t734_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m2994(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), &m2994_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t734__CustomAttributeCache = {
1,
NULL,
&t734_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t734_0_0_0;
extern Il2CppType t734_1_0_0;
extern CustomAttributesCache t734__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t734_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t734_VT, t734_VTIGM, NULL};
TypeInfo t734_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CacheIndex", "UnityEngine", t734_MIs, NULL, t734_FIs, NULL, &t734_TI, NULL, &t734__CustomAttributeCache, &t734_0_0_0, &t734_1_0_0, &t734_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t734_marshal, (methodPointerType)t734_marshal_back, (methodPointerType)t734_marshal_cleanup, sizeof (t734)+ sizeof (Il2CppObject), sizeof (t734)+ sizeof (Il2CppObject), 0, sizeof(t734_marshaled), 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 4, 0, 0};
#include "t735.h"
// Metadata Definition UnityEngine.UnityString
extern TypeInfo t735_TI;
#include "t735MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t158_0_0_0;
extern CustomAttributesCache t735__CustomAttributeCache_t735_m3586_Arg1_ParameterInfo;
static ParameterInfo t735_m3586_ParameterInfos[] = 
{
	{"fmt", 0, 134218432, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"args", 1, 134218433, &t735__CustomAttributeCache_t735_m3586_Arg1_ParameterInfo, &t158_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3586_MI = 
{
	"Format", (methodPointerType)&m3586, &t735_TI, &t2_0_0_0, RuntimeInvoker_t9_t9_t9, t735_m3586_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 700, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t735_MIs[] =
{
	&m3586_MI,
	NULL
};
static Il2CppMethodReference t735_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t735_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t735_CustomAttributesCacheGenerator_t735_m3586_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t337 * tmp;
		tmp = (t337 *)il2cpp_codegen_object_new (&t337_TI);
		m1228(tmp, &m1228_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t735__CustomAttributeCache_t735_m3586_Arg1_ParameterInfo = {
1,
NULL,
&t735_CustomAttributesCacheGenerator_t735_m3586_Arg1_ParameterInfo
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t735_0_0_0;
extern Il2CppType t735_1_0_0;
struct t735;
const Il2CppTypeDefinitionMetadata t735_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t735_VT, t735_VTIGM, NULL};
TypeInfo t735_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityString", "UnityEngine", t735_MIs, NULL, NULL, NULL, &t735_TI, NULL, &EmptyCustomAttributesCache, &t735_0_0_0, &t735_1_0_0, &t735_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t735), sizeof (t735), 0, -1, 0, 0, -1, 1048832, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t173.h"
// Metadata Definition UnityEngine.AsyncOperation
extern TypeInfo t173_TI;
#include "t173MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3587_MI = 
{
	".ctor", (methodPointerType)&m3587, &t173_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 701, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t173__CustomAttributeCache_m3588;
MethodInfo m3588_MI = 
{
	"InternalDestroy", (methodPointerType)&m3588, &t173_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t173__CustomAttributeCache_m3588, 129, 4096, 255, 0, false, false, 702, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3589_MI = 
{
	"Finalize", (methodPointerType)&m3589, &t173_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 703, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t173_MIs[] =
{
	&m3587_MI,
	&m3588_MI,
	&m3589_MI,
	NULL
};
extern Il2CppType t58_0_0_3;
FieldInfo t173_f0_FieldInfo = 
{
	"m_Ptr", &t58_0_0_3, &t173_TI, offsetof(t173, f0), &EmptyCustomAttributesCache};
static FieldInfo* t173_FIs[] =
{
	&t173_f0_FieldInfo,
	NULL
};
static Il2CppMethodReference t173_VT[] =
{
	&m671_MI,
	&m3589_MI,
	&m672_MI,
	&m673_MI,
};
static bool t173_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t173_CustomAttributesCacheGenerator_m3588(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t173__CustomAttributeCache_m3588 = {
1,
NULL,
&t173_CustomAttributesCacheGenerator_m3588
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t173_1_0_0;
struct t173;
extern CustomAttributesCache t173__CustomAttributeCache_m3588;
const Il2CppTypeDefinitionMetadata t173_DM = 
{
	NULL, NULL, NULL, NULL, &t686_0_0_0, t173_VT, t173_VTIGM, NULL};
TypeInfo t173_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "AsyncOperation", "UnityEngine", t173_MIs, NULL, t173_FIs, NULL, &t173_TI, NULL, &EmptyCustomAttributesCache, &t173_0_0_0, &t173_1_0_0, &t173_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t173_marshal, (methodPointerType)t173_marshal_back, (methodPointerType)t173_marshal_cleanup, sizeof (t173), sizeof (t173), 0, sizeof(t173_marshaled), 0, 0, -1, 1048585, 0, 0, false, false, false, false, false, false, false, true, false, false, 3, 0, 1, 0, 0, 4, 0, 0};
#include "t736.h"
// Metadata Definition UnityEngine.Application/LogCallback
extern TypeInfo t736_TI;
#include "t736MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t58_0_0_0;
static ParameterInfo t736_m3590_ParameterInfos[] = 
{
	{"object", 0, 134218444, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"method", 1, 134218445, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m3590_MI = 
{
	".ctor", (methodPointerType)&m3590, &t736_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t58, t736_m3590_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 715, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t685_0_0_0;
static ParameterInfo t736_m3591_ParameterInfos[] = 
{
	{"condition", 0, 134218446, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"stackTrace", 1, 134218447, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"type", 2, 134218448, &EmptyCustomAttributesCache, &t685_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3591_MI = 
{
	"Invoke", (methodPointerType)&m3591, &t736_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t736_m3591_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 3, false, false, 716, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t685_0_0_0;
extern Il2CppType t470_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t736_m3592_ParameterInfos[] = 
{
	{"condition", 0, 134218449, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"stackTrace", 1, 134218450, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"type", 2, 134218451, &EmptyCustomAttributesCache, &t685_0_0_0},
	{"callback", 3, 134218452, &EmptyCustomAttributesCache, &t470_0_0_0},
	{"object", 4, 134218453, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t469_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3592_MI = 
{
	"BeginInvoke", (methodPointerType)&m3592, &t736_TI, &t469_0_0_0, RuntimeInvoker_t9_t9_t9_t125_t9_t9, t736_m3592_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 5, false, false, 717, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t469_0_0_0;
static ParameterInfo t736_m3593_ParameterInfos[] = 
{
	{"result", 0, 134218454, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m3593_MI = 
{
	"EndInvoke", (methodPointerType)&m3593, &t736_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t736_m3593_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 718, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t736_MIs[] =
{
	&m3590_MI,
	&m3591_MI,
	&m3592_MI,
	&m3593_MI,
	NULL
};
extern MethodInfo m3591_MI;
extern MethodInfo m3592_MI;
extern MethodInfo m3593_MI;
static Il2CppMethodReference t736_VT[] =
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
	&m3591_MI,
	&m3592_MI,
	&m3593_MI,
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
};
static Il2CppInterfaceOffsetPair t736_IOs[] = 
{
	{ &t622_0_0_0, 4},
	{ &t623_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t736_0_0_0;
extern Il2CppType t736_1_0_0;
extern TypeInfo t174_TI;
extern Il2CppType t174_0_0_0;
struct t736;
const Il2CppTypeDefinitionMetadata t736_DM = 
{
	&t174_0_0_0, NULL, NULL, t736_IOs, &t471_0_0_0, t736_VT, t736_VTIGM, NULL};
TypeInfo t736_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "LogCallback", "", t736_MIs, NULL, NULL, NULL, &t736_TI, NULL, &EmptyCustomAttributesCache, &t736_0_0_0, &t736_1_0_0, &t736_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t736, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t736), sizeof (t736), 0, sizeof(methodPointerType), 0, 0, -1, 258, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t174.h"
// Metadata Definition UnityEngine.Application
#include "t174MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t174__CustomAttributeCache_m1089;
MethodInfo m1089_MI = 
{
	"Quit", (methodPointerType)&m1089, &t174_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t174__CustomAttributeCache_m1089, 150, 4096, 255, 0, false, false, 704, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t174__CustomAttributeCache_m629;
MethodInfo m629_MI = 
{
	"get_loadedLevel", (methodPointerType)&m629, &t174_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t174__CustomAttributeCache_m629, 2198, 4096, 255, 0, false, false, 705, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t174__CustomAttributeCache_m593;
MethodInfo m593_MI = 
{
	"get_loadedLevelName", (methodPointerType)&m593, &t174_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &t174__CustomAttributeCache_m593, 2198, 4096, 255, 0, false, false, 706, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t174_m630_ParameterInfos[] = 
{
	{"index", 0, 134218434, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m630_MI = 
{
	"LoadLevel", (methodPointerType)&m630, &t174_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t174_m630_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 707, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t174_m594_ParameterInfos[] = 
{
	{"levelName", 0, 134218435, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t173_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m594_MI = 
{
	"LoadLevelAsync", (methodPointerType)&m594, &t174_TI, &t173_0_0_0, RuntimeInvoker_t9_t9, t174_m594_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 708, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t174_m3594_ParameterInfos[] = 
{
	{"monoLevelName", 0, 134218436, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"index", 1, 134218437, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"additive", 2, 134218438, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"mustCompleteNextFrame", 3, 134218439, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t173_0_0_0;
extern void* RuntimeInvoker_t9_t9_t125_t186_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t174__CustomAttributeCache_m3594;
MethodInfo m3594_MI = 
{
	"LoadLevelAsync", (methodPointerType)&m3594, &t174_TI, &t173_0_0_0, RuntimeInvoker_t9_t9_t125_t186_t186, t174_m3594_ParameterInfos, &t174__CustomAttributeCache_m3594, 145, 4096, 255, 4, false, false, 709, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t174__CustomAttributeCache_m642;
MethodInfo m642_MI = 
{
	"get_isPlaying", (methodPointerType)&m642, &t174_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &t174__CustomAttributeCache_m642, 2198, 4096, 255, 0, false, false, 710, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t174__CustomAttributeCache_m2818;
MethodInfo m2818_MI = 
{
	"get_isEditor", (methodPointerType)&m2818, &t174_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &t174__CustomAttributeCache_m2818, 2198, 4096, 255, 0, false, false, 711, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t305_0_0_0;
extern void* RuntimeInvoker_t305 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t174__CustomAttributeCache_m1109;
MethodInfo m1109_MI = 
{
	"get_platform", (methodPointerType)&m1109, &t174_TI, &t305_0_0_0, RuntimeInvoker_t305, NULL, &t174__CustomAttributeCache_m1109, 2198, 4096, 255, 0, false, false, 712, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t174__CustomAttributeCache_m1090;
MethodInfo m1090_MI = 
{
	"get_persistentDataPath", (methodPointerType)&m1090, &t174_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &t174__CustomAttributeCache_m1090, 2198, 4096, 255, 0, false, false, 713, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t685_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t174_m3595_ParameterInfos[] = 
{
	{"logString", 0, 134218440, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"stackTrace", 1, 134218441, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"type", 2, 134218442, &EmptyCustomAttributesCache, &t685_0_0_0},
	{"invokedOnMainThread", 3, 134218443, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m3595_MI = 
{
	"CallLogCallback", (methodPointerType)&m3595, &t174_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125_t186, t174_m3595_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 4, false, false, 714, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t174_MIs[] =
{
	&m1089_MI,
	&m629_MI,
	&m593_MI,
	&m630_MI,
	&m594_MI,
	&m3594_MI,
	&m642_MI,
	&m2818_MI,
	&m1109_MI,
	&m1090_MI,
	&m3595_MI,
	NULL
};
extern Il2CppType t736_0_0_17;
FieldInfo t174_f0_FieldInfo = 
{
	"s_LogCallbackHandler", &t736_0_0_17, &t174_TI, offsetof(t174_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t736_0_0_17;
FieldInfo t174_f1_FieldInfo = 
{
	"s_LogCallbackHandlerThreaded", &t736_0_0_17, &t174_TI, offsetof(t174_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t174_FIs[] =
{
	&t174_f0_FieldInfo,
	&t174_f1_FieldInfo,
	NULL
};
extern MethodInfo m629_MI;
static PropertyInfo t174____loadedLevel_PropertyInfo = 
{
	&t174_TI, "loadedLevel", &m629_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m593_MI;
static PropertyInfo t174____loadedLevelName_PropertyInfo = 
{
	&t174_TI, "loadedLevelName", &m593_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m642_MI;
static PropertyInfo t174____isPlaying_PropertyInfo = 
{
	&t174_TI, "isPlaying", &m642_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2818_MI;
static PropertyInfo t174____isEditor_PropertyInfo = 
{
	&t174_TI, "isEditor", &m2818_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1109_MI;
static PropertyInfo t174____platform_PropertyInfo = 
{
	&t174_TI, "platform", &m1109_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1090_MI;
extern CustomAttributesCache t174__CustomAttributeCache_t174____persistentDataPath_PropertyInfo;
static PropertyInfo t174____persistentDataPath_PropertyInfo = 
{
	&t174_TI, "persistentDataPath", &m1090_MI, NULL, 0, &t174__CustomAttributeCache_t174____persistentDataPath_PropertyInfo};
static PropertyInfo* t174_PIs[] =
{
	&t174____loadedLevel_PropertyInfo,
	&t174____loadedLevelName_PropertyInfo,
	&t174____isPlaying_PropertyInfo,
	&t174____isEditor_PropertyInfo,
	&t174____platform_PropertyInfo,
	&t174____persistentDataPath_PropertyInfo,
	NULL
};
static const Il2CppType* t174_TI__nestedTypes[1] =
{
	&t736_0_0_0,
};
static Il2CppMethodReference t174_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t174_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t174_CustomAttributesCacheGenerator_m1089(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t174_CustomAttributesCacheGenerator_m629(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t174_CustomAttributesCacheGenerator_m593(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t174_CustomAttributesCacheGenerator_m3594(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t174_CustomAttributesCacheGenerator_m642(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t174_CustomAttributesCacheGenerator_m2818(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t174_CustomAttributesCacheGenerator_m1109(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t174_CustomAttributesCacheGenerator_m1090(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t956_TI;
#include "t956.h"
#include "t956MD.h"
extern MethodInfo m4502_MI;
void t174_CustomAttributesCacheGenerator_t174____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t956 * tmp;
		tmp = (t956 *)il2cpp_codegen_object_new (&t956_TI);
		m4502(tmp, &m4502_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t174__CustomAttributeCache_m1089 = {
1,
NULL,
&t174_CustomAttributesCacheGenerator_m1089
};
CustomAttributesCache t174__CustomAttributeCache_m629 = {
1,
NULL,
&t174_CustomAttributesCacheGenerator_m629
};
CustomAttributesCache t174__CustomAttributeCache_m593 = {
1,
NULL,
&t174_CustomAttributesCacheGenerator_m593
};
CustomAttributesCache t174__CustomAttributeCache_m3594 = {
1,
NULL,
&t174_CustomAttributesCacheGenerator_m3594
};
CustomAttributesCache t174__CustomAttributeCache_m642 = {
1,
NULL,
&t174_CustomAttributesCacheGenerator_m642
};
CustomAttributesCache t174__CustomAttributeCache_m2818 = {
1,
NULL,
&t174_CustomAttributesCacheGenerator_m2818
};
CustomAttributesCache t174__CustomAttributeCache_m1109 = {
1,
NULL,
&t174_CustomAttributesCacheGenerator_m1109
};
CustomAttributesCache t174__CustomAttributeCache_m1090 = {
1,
NULL,
&t174_CustomAttributesCacheGenerator_m1090
};
CustomAttributesCache t174__CustomAttributeCache_t174____persistentDataPath_PropertyInfo = {
1,
NULL,
&t174_CustomAttributesCacheGenerator_t174____persistentDataPath_PropertyInfo
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t174_1_0_0;
struct t174;
extern CustomAttributesCache t174__CustomAttributeCache_m1089;
extern CustomAttributesCache t174__CustomAttributeCache_m629;
extern CustomAttributesCache t174__CustomAttributeCache_m593;
extern CustomAttributesCache t174__CustomAttributeCache_m3594;
extern CustomAttributesCache t174__CustomAttributeCache_m642;
extern CustomAttributesCache t174__CustomAttributeCache_m2818;
extern CustomAttributesCache t174__CustomAttributeCache_m1109;
extern CustomAttributesCache t174__CustomAttributeCache_m1090;
extern CustomAttributesCache t174__CustomAttributeCache_t174____persistentDataPath_PropertyInfo;
const Il2CppTypeDefinitionMetadata t174_DM = 
{
	NULL, t174_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t174_VT, t174_VTIGM, NULL};
TypeInfo t174_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Application", "UnityEngine", t174_MIs, t174_PIs, t174_FIs, NULL, &t174_TI, NULL, &EmptyCustomAttributesCache, &t174_0_0_0, &t174_1_0_0, &t174_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t174), sizeof (t174), 0, -1, sizeof(t174_SFs), 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 11, 6, 2, 0, 1, 4, 0, 0};
#include "t145.h"
// Metadata Definition UnityEngine.Behaviour
extern TypeInfo t145_TI;
#include "t145MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m3596_MI = 
{
	".ctor", (methodPointerType)&m3596, &t145_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 719, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t145__CustomAttributeCache_m416;
MethodInfo m416_MI = 
{
	"get_enabled", (methodPointerType)&m416, &t145_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &t145__CustomAttributeCache_m416, 2182, 4096, 255, 0, false, false, 720, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t145_m437_ParameterInfos[] = 
{
	{"value", 0, 134218455, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t145__CustomAttributeCache_m437;
MethodInfo m437_MI = 
{
	"set_enabled", (methodPointerType)&m437, &t145_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t145_m437_ParameterInfos, &t145__CustomAttributeCache_m437, 2182, 4096, 255, 1, false, false, 721, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t145__CustomAttributeCache_m2488;
MethodInfo m2488_MI = 
{
	"get_isActiveAndEnabled", (methodPointerType)&m2488, &t145_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &t145__CustomAttributeCache_m2488, 2182, 4096, 255, 0, false, false, 722, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t145_MIs[] =
{
	&m3596_MI,
	&m416_MI,
	&m437_MI,
	&m2488_MI,
	NULL
};
extern MethodInfo m416_MI;
extern MethodInfo m437_MI;
static PropertyInfo t145____enabled_PropertyInfo = 
{
	&t145_TI, "enabled", &m416_MI, &m437_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2488_MI;
static PropertyInfo t145____isActiveAndEnabled_PropertyInfo = 
{
	&t145_TI, "isActiveAndEnabled", &m2488_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t145_PIs[] =
{
	&t145____enabled_PropertyInfo,
	&t145____isActiveAndEnabled_PropertyInfo,
	NULL
};
static Il2CppMethodReference t145_VT[] =
{
	&m645_MI,
	&m646_MI,
	&m647_MI,
	&m648_MI,
};
static bool t145_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t145_CustomAttributesCacheGenerator_m416(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t145_CustomAttributesCacheGenerator_m437(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t145_CustomAttributesCacheGenerator_m2488(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t838 * tmp;
		tmp = (t838 *)il2cpp_codegen_object_new (&t838_TI);
		m4113(tmp, &m4113_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t145__CustomAttributeCache_m416 = {
1,
NULL,
&t145_CustomAttributesCacheGenerator_m416
};
CustomAttributesCache t145__CustomAttributeCache_m437 = {
1,
NULL,
&t145_CustomAttributesCacheGenerator_m437
};
CustomAttributesCache t145__CustomAttributeCache_m2488 = {
1,
NULL,
&t145_CustomAttributesCacheGenerator_m2488
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t145_1_0_0;
struct t145;
extern CustomAttributesCache t145__CustomAttributeCache_m416;
extern CustomAttributesCache t145__CustomAttributeCache_m437;
extern CustomAttributesCache t145__CustomAttributeCache_m2488;
const Il2CppTypeDefinitionMetadata t145_DM = 
{
	NULL, NULL, NULL, NULL, &t133_0_0_0, t145_VT, t145_VTIGM, NULL};
TypeInfo t145_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Behaviour", "UnityEngine", t145_MIs, t145_PIs, NULL, NULL, &t145_TI, NULL, &EmptyCustomAttributesCache, &t145_0_0_0, &t145_1_0_0, &t145_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t145), sizeof (t145), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 2, 0, 0, 0, 4, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
