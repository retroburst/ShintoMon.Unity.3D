#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// Metadata Definition System.Runtime.Remoting.Services.ITrackingHandler
extern TypeInfo t2176_TI;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t2176_m12041_ParameterInfos[] = 
{
	{"obj", 0, 134222432, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12041_MI = 
{
	"DisconnectedObject", NULL, &t2176_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2176_m12041_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 3942, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1581_0_0_0;
extern Il2CppType t1581_0_0_0;
static ParameterInfo t2176_m12039_ParameterInfos[] = 
{
	{"obj", 0, 134222433, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"or", 1, 134222434, &EmptyCustomAttributesCache, &t1581_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12039_MI = 
{
	"MarshaledObject", NULL, &t2176_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2176_m12039_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, false, 3943, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1581_0_0_0;
static ParameterInfo t2176_m12040_ParameterInfos[] = 
{
	{"obj", 0, 134222435, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"or", 1, 134222436, &EmptyCustomAttributesCache, &t1581_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12040_MI = 
{
	"UnmarshaledObject", NULL, &t2176_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2176_m12040_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 2, false, false, 3944, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2176_MIs[] =
{
	&m12041_MI,
	&m12039_MI,
	&m12040_MI,
	NULL
};
extern TypeInfo t670_TI;
#include "t670.h"
#include "t670MD.h"
extern MethodInfo m3104_MI;
void t2176_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2176__CustomAttributeCache = {
1,
NULL,
&t2176_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2176_0_0_0;
extern Il2CppType t2176_1_0_0;
struct t2176;
extern CustomAttributesCache t2176__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2176_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2176_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ITrackingHandler", "System.Runtime.Remoting.Services", t2176_MIs, NULL, NULL, NULL, &t2176_TI, NULL, &t2176__CustomAttributeCache, &t2176_0_0_0, &t2176_1_0_0, &t2176_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 0, 0, 0};
#include "t1907.h"
// Metadata Definition System.Runtime.Remoting.Services.TrackingServices
extern TypeInfo t1907_TI;
#include "t1907MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10017_MI = 
{
	".cctor", (methodPointerType)&m10017, &t1907_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3945, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1581_0_0_0;
static ParameterInfo t1907_m10018_ParameterInfos[] = 
{
	{"obj", 0, 134222437, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"or", 1, 134222438, &EmptyCustomAttributesCache, &t1581_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10018_MI = 
{
	"NotifyMarshaledObject", (methodPointerType)&m10018, &t1907_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1907_m10018_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 3946, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1581_0_0_0;
static ParameterInfo t1907_m10019_ParameterInfos[] = 
{
	{"obj", 0, 134222439, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"or", 1, 134222440, &EmptyCustomAttributesCache, &t1581_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10019_MI = 
{
	"NotifyUnmarshaledObject", (methodPointerType)&m10019, &t1907_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1907_m10019_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 3947, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1907_m10020_ParameterInfos[] = 
{
	{"obj", 0, 134222441, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10020_MI = 
{
	"NotifyDisconnectedObject", (methodPointerType)&m10020, &t1907_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1907_m10020_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 3948, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1907_MIs[] =
{
	&m10017_MI,
	&m10018_MI,
	&m10019_MI,
	&m10020_MI,
	NULL
};
extern Il2CppType t1161_0_0_17;
FieldInfo t1907_f0_FieldInfo = 
{
	"_handlers", &t1161_0_0_17, &t1907_TI, offsetof(t1907_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1907_FIs[] =
{
	&t1907_f0_FieldInfo,
	NULL
};
extern MethodInfo m671_MI;
extern MethodInfo m646_MI;
extern MethodInfo m672_MI;
extern MethodInfo m673_MI;
static Il2CppMethodReference t1907_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1907_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1907_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1907__CustomAttributeCache = {
1,
NULL,
&t1907_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1907_0_0_0;
extern Il2CppType t1907_1_0_0;
struct t1907;
extern CustomAttributesCache t1907__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1907_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1907_VT, t1907_VTIGM, NULL};
TypeInfo t1907_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TrackingServices", "System.Runtime.Remoting.Services", t1907_MIs, NULL, t1907_FIs, NULL, &t1907_TI, NULL, &t1907__CustomAttributeCache, &t1907_0_0_0, &t1907_1_0_0, &t1907_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1907), sizeof (t1907), 0, -1, sizeof(t1907_SFs), 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, true, false, 4, 0, 1, 0, 0, 4, 0, 0};
#include "t1908.h"
// Metadata Definition System.Runtime.Remoting.ActivatedClientTypeEntry
extern TypeInfo t1908_TI;
#include "t1908MD.h"
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10021_MI = 
{
	"get_ApplicationUrl", (methodPointerType)&m10021, &t1908_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3949, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1910_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10022_MI = 
{
	"get_ContextAttributes", (methodPointerType)&m10022, &t1908_TI, &t1910_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3950, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10023_MI = 
{
	"get_ObjectType", (methodPointerType)&m10023, &t1908_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3951, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10024_MI = 
{
	"ToString", (methodPointerType)&m10024, &t1908_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3952, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1908_MIs[] =
{
	&m10021_MI,
	&m10022_MI,
	&m10023_MI,
	&m10024_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1908_f2_FieldInfo = 
{
	"applicationUrl", &t2_0_0_1, &t1908_TI, offsetof(t1908, f2), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1908_f3_FieldInfo = 
{
	"obj_type", &t126_0_0_1, &t1908_TI, offsetof(t1908, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1908_FIs[] =
{
	&t1908_f2_FieldInfo,
	&t1908_f3_FieldInfo,
	NULL
};
extern MethodInfo m10021_MI;
static PropertyInfo t1908____ApplicationUrl_PropertyInfo = 
{
	&t1908_TI, "ApplicationUrl", &m10021_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10022_MI;
static PropertyInfo t1908____ContextAttributes_PropertyInfo = 
{
	&t1908_TI, "ContextAttributes", &m10022_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10023_MI;
static PropertyInfo t1908____ObjectType_PropertyInfo = 
{
	&t1908_TI, "ObjectType", &m10023_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1908_PIs[] =
{
	&t1908____ApplicationUrl_PropertyInfo,
	&t1908____ContextAttributes_PropertyInfo,
	&t1908____ObjectType_PropertyInfo,
	NULL
};
extern MethodInfo m10024_MI;
static Il2CppMethodReference t1908_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m10024_MI,
};
static bool t1908_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1908_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1908__CustomAttributeCache = {
1,
NULL,
&t1908_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1908_0_0_0;
extern Il2CppType t1908_1_0_0;
extern Il2CppType t1909_0_0_0;
struct t1908;
extern CustomAttributesCache t1908__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1908_DM = 
{
	NULL, NULL, NULL, NULL, &t1909_0_0_0, t1908_VT, t1908_VTIGM, NULL};
TypeInfo t1908_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ActivatedClientTypeEntry", "System.Runtime.Remoting", t1908_MIs, t1908_PIs, t1908_FIs, NULL, &t1908_TI, NULL, &t1908__CustomAttributeCache, &t1908_0_0_0, &t1908_1_0_0, &t1908_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1908), sizeof (t1908), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 3, 2, 0, 0, 4, 0, 0};
#include "t1911.h"
// Metadata Definition System.Runtime.Remoting.EnvoyInfo
extern TypeInfo t1911_TI;
#include "t1911MD.h"
extern Il2CppType t1395_0_0_0;
extern Il2CppType t1395_0_0_0;
static ParameterInfo t1911_m10025_ParameterInfos[] = 
{
	{"sinks", 0, 134222442, &EmptyCustomAttributesCache, &t1395_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10025_MI = 
{
	".ctor", (methodPointerType)&m10025, &t1911_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1911_m10025_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3953, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1395_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10026_MI = 
{
	"get_EnvoySinks", (methodPointerType)&m10026, &t1911_TI, &t1395_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 3954, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1911_MIs[] =
{
	&m10025_MI,
	&m10026_MI,
	NULL
};
extern Il2CppType t1395_0_0_1;
FieldInfo t1911_f0_FieldInfo = 
{
	"envoySinks", &t1395_0_0_1, &t1911_TI, offsetof(t1911, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1911_FIs[] =
{
	&t1911_f0_FieldInfo,
	NULL
};
extern MethodInfo m10026_MI;
static PropertyInfo t1911____EnvoySinks_PropertyInfo = 
{
	&t1911_TI, "EnvoySinks", &m10026_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1911_PIs[] =
{
	&t1911____EnvoySinks_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1911_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10026_MI,
};
static bool t1911_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t1915_0_0_0;
static const Il2CppType* t1911_ITIs[] = 
{
	&t1915_0_0_0,
};
static Il2CppInterfaceOffsetPair t1911_IOs[] = 
{
	{ &t1915_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1911_0_0_0;
extern Il2CppType t1911_1_0_0;
struct t1911;
const Il2CppTypeDefinitionMetadata t1911_DM = 
{
	NULL, NULL, t1911_ITIs, t1911_IOs, &t9_0_0_0, t1911_VT, t1911_VTIGM, NULL};
TypeInfo t1911_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EnvoyInfo", "System.Runtime.Remoting", t1911_MIs, t1911_PIs, t1911_FIs, NULL, &t1911_TI, NULL, &EmptyCustomAttributesCache, &t1911_0_0_0, &t1911_1_0_0, &t1911_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1911), sizeof (t1911), 0, -1, 0, 0, -1, 1056768, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 1, 0, 0, 5, 1, 1};
// Metadata Definition System.Runtime.Remoting.IChannelInfo
extern TypeInfo t1913_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12043_MI = 
{
	"get_ChannelData", NULL, &t1913_TI, &t158_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3955, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1913_MIs[] =
{
	&m12043_MI,
	NULL
};
extern MethodInfo m12043_MI;
static PropertyInfo t1913____ChannelData_PropertyInfo = 
{
	&t1913_TI, "ChannelData", &m12043_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1913_PIs[] =
{
	&t1913____ChannelData_PropertyInfo,
	NULL
};
void t1913_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1913__CustomAttributeCache = {
1,
NULL,
&t1913_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1913_0_0_0;
extern Il2CppType t1913_1_0_0;
struct t1913;
extern CustomAttributesCache t1913__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1913_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1913_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IChannelInfo", "System.Runtime.Remoting", t1913_MIs, t1913_PIs, NULL, NULL, &t1913_TI, NULL, &t1913__CustomAttributeCache, &t1913_0_0_0, &t1913_1_0_0, &t1913_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Remoting.IEnvoyInfo
extern TypeInfo t1915_TI;
extern Il2CppType t1395_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12042_MI = 
{
	"get_EnvoySinks", NULL, &t1915_TI, &t1395_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3956, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1915_MIs[] =
{
	&m12042_MI,
	NULL
};
extern MethodInfo m12042_MI;
static PropertyInfo t1915____EnvoySinks_PropertyInfo = 
{
	&t1915_TI, "EnvoySinks", &m12042_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1915_PIs[] =
{
	&t1915____EnvoySinks_PropertyInfo,
	NULL
};
void t1915_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1915__CustomAttributeCache = {
1,
NULL,
&t1915_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1915_1_0_0;
struct t1915;
extern CustomAttributesCache t1915__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1915_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1915_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnvoyInfo", "System.Runtime.Remoting", t1915_MIs, t1915_PIs, NULL, NULL, &t1915_TI, NULL, &t1915__CustomAttributeCache, &t1915_0_0_0, &t1915_1_0_0, &t1915_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Remoting.IRemotingTypeInfo
extern TypeInfo t1914_TI;
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12037_MI = 
{
	"get_TypeName", NULL, &t1914_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3957, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1914_MIs[] =
{
	&m12037_MI,
	NULL
};
extern MethodInfo m12037_MI;
static PropertyInfo t1914____TypeName_PropertyInfo = 
{
	&t1914_TI, "TypeName", &m12037_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1914_PIs[] =
{
	&t1914____TypeName_PropertyInfo,
	NULL
};
void t1914_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1914__CustomAttributeCache = {
1,
NULL,
&t1914_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1914_0_0_0;
extern Il2CppType t1914_1_0_0;
struct t1914;
extern CustomAttributesCache t1914__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1914_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1914_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IRemotingTypeInfo", "System.Runtime.Remoting", t1914_MIs, t1914_PIs, NULL, NULL, &t1914_TI, NULL, &t1914__CustomAttributeCache, &t1914_0_0_0, &t1914_1_0_0, &t1914_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
#include "t1904.h"
// Metadata Definition System.Runtime.Remoting.Identity
extern TypeInfo t1904_TI;
#include "t1904MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1904_m10027_ParameterInfos[] = 
{
	{"objectUri", 0, 134222443, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10027_MI = 
{
	".ctor", (methodPointerType)&m10027, &t1904_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1904_m10027_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3958, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1904_m12038_ParameterInfos[] = 
{
	{"requestedType", 0, 134222444, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1581_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12038_MI = 
{
	"CreateObjRef", NULL, &t1904_TI, &t1581_0_0_0, RuntimeInvoker_t9_t9, t1904_m12038_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 3959, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1395_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10028_MI = 
{
	"get_ChannelSink", (methodPointerType)&m10028, &t1904_TI, &t1395_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3960, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1395_0_0_0;
static ParameterInfo t1904_m10029_ParameterInfos[] = 
{
	{"value", 0, 134222445, &EmptyCustomAttributesCache, &t1395_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10029_MI = 
{
	"set_ChannelSink", (methodPointerType)&m10029, &t1904_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1904_m10029_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3961, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10030_MI = 
{
	"get_ObjectUri", (methodPointerType)&m10030, &t1904_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3962, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1904_m10031_ParameterInfos[] = 
{
	{"value", 0, 134222446, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10031_MI = 
{
	"set_ObjectUri", (methodPointerType)&m10031, &t1904_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1904_m10031_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3963, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10032_MI = 
{
	"get_IsConnected", (methodPointerType)&m10032, &t1904_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3964, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10033_MI = 
{
	"get_Disposed", (methodPointerType)&m10033, &t1904_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3965, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1904_m10034_ParameterInfos[] = 
{
	{"value", 0, 134222447, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10034_MI = 
{
	"set_Disposed", (methodPointerType)&m10034, &t1904_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1904_m10034_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3966, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1904_MIs[] =
{
	&m10027_MI,
	&m12038_MI,
	&m10028_MI,
	&m10029_MI,
	&m10030_MI,
	&m10031_MI,
	&m10032_MI,
	&m10033_MI,
	&m10034_MI,
	NULL
};
extern Il2CppType t2_0_0_4;
FieldInfo t1904_f0_FieldInfo = 
{
	"_objectUri", &t2_0_0_4, &t1904_TI, offsetof(t1904, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1395_0_0_4;
FieldInfo t1904_f1_FieldInfo = 
{
	"_channelSink", &t1395_0_0_4, &t1904_TI, offsetof(t1904, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1395_0_0_4;
FieldInfo t1904_f2_FieldInfo = 
{
	"_envoySink", &t1395_0_0_4, &t1904_TI, offsetof(t1904, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1581_0_0_4;
FieldInfo t1904_f3_FieldInfo = 
{
	"_objRef", &t1581_0_0_4, &t1904_TI, offsetof(t1904, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1904_f4_FieldInfo = 
{
	"_disposed", &t124_0_0_1, &t1904_TI, offsetof(t1904, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1904_FIs[] =
{
	&t1904_f0_FieldInfo,
	&t1904_f1_FieldInfo,
	&t1904_f2_FieldInfo,
	&t1904_f3_FieldInfo,
	&t1904_f4_FieldInfo,
	NULL
};
extern MethodInfo m10028_MI;
extern MethodInfo m10029_MI;
static PropertyInfo t1904____ChannelSink_PropertyInfo = 
{
	&t1904_TI, "ChannelSink", &m10028_MI, &m10029_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10030_MI;
extern MethodInfo m10031_MI;
static PropertyInfo t1904____ObjectUri_PropertyInfo = 
{
	&t1904_TI, "ObjectUri", &m10030_MI, &m10031_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10032_MI;
static PropertyInfo t1904____IsConnected_PropertyInfo = 
{
	&t1904_TI, "IsConnected", &m10032_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10033_MI;
extern MethodInfo m10034_MI;
static PropertyInfo t1904____Disposed_PropertyInfo = 
{
	&t1904_TI, "Disposed", &m10033_MI, &m10034_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1904_PIs[] =
{
	&t1904____ChannelSink_PropertyInfo,
	&t1904____ObjectUri_PropertyInfo,
	&t1904____IsConnected_PropertyInfo,
	&t1904____Disposed_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1904_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t1904_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1904_0_0_0;
extern Il2CppType t1904_1_0_0;
struct t1904;
const Il2CppTypeDefinitionMetadata t1904_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1904_VT, t1904_VTIGM, NULL};
TypeInfo t1904_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Identity", "System.Runtime.Remoting", t1904_MIs, t1904_PIs, t1904_FIs, NULL, &t1904_TI, NULL, &EmptyCustomAttributesCache, &t1904_0_0_0, &t1904_1_0_0, &t1904_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1904), sizeof (t1904), 0, -1, 0, 0, -1, 1048704, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 4, 5, 0, 0, 5, 0, 0};
#include "t1905.h"
// Metadata Definition System.Runtime.Remoting.ClientIdentity
extern TypeInfo t1905_TI;
#include "t1905MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t1581_0_0_0;
static ParameterInfo t1905_m10035_ParameterInfos[] = 
{
	{"objectUri", 0, 134222448, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"objRef", 1, 134222449, &EmptyCustomAttributesCache, &t1581_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10035_MI = 
{
	".ctor", (methodPointerType)&m10035, &t1905_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1905_m10035_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3967, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1200_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10036_MI = 
{
	"get_ClientProxy", (methodPointerType)&m10036, &t1905_TI, &t1200_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3968, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1200_0_0_0;
extern Il2CppType t1200_0_0_0;
static ParameterInfo t1905_m10037_ParameterInfos[] = 
{
	{"value", 0, 134222450, &EmptyCustomAttributesCache, &t1200_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10037_MI = 
{
	"set_ClientProxy", (methodPointerType)&m10037, &t1905_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1905_m10037_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3969, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1905_m10038_ParameterInfos[] = 
{
	{"requestedType", 0, 134222451, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1581_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10038_MI = 
{
	"CreateObjRef", (methodPointerType)&m10038, &t1905_TI, &t1581_0_0_0, RuntimeInvoker_t9_t9, t1905_m10038_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 3970, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10039_MI = 
{
	"get_TargetUri", (methodPointerType)&m10039, &t1905_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3971, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1905_MIs[] =
{
	&m10035_MI,
	&m10036_MI,
	&m10037_MI,
	&m10038_MI,
	&m10039_MI,
	NULL
};
extern Il2CppType t1912_0_0_1;
FieldInfo t1905_f5_FieldInfo = 
{
	"_proxyReference", &t1912_0_0_1, &t1905_TI, offsetof(t1905, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1905_FIs[] =
{
	&t1905_f5_FieldInfo,
	NULL
};
extern MethodInfo m10036_MI;
extern MethodInfo m10037_MI;
static PropertyInfo t1905____ClientProxy_PropertyInfo = 
{
	&t1905_TI, "ClientProxy", &m10036_MI, &m10037_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10039_MI;
static PropertyInfo t1905____TargetUri_PropertyInfo = 
{
	&t1905_TI, "TargetUri", &m10039_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1905_PIs[] =
{
	&t1905____ClientProxy_PropertyInfo,
	&t1905____TargetUri_PropertyInfo,
	NULL
};
extern MethodInfo m10038_MI;
static Il2CppMethodReference t1905_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10038_MI,
};
static bool t1905_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1905_0_0_0;
extern Il2CppType t1905_1_0_0;
struct t1905;
const Il2CppTypeDefinitionMetadata t1905_DM = 
{
	NULL, NULL, NULL, NULL, &t1904_0_0_0, t1905_VT, t1905_VTIGM, NULL};
TypeInfo t1905_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ClientIdentity", "System.Runtime.Remoting", t1905_MIs, t1905_PIs, t1905_FIs, NULL, &t1905_TI, NULL, &EmptyCustomAttributesCache, &t1905_0_0_0, &t1905_1_0_0, &t1905_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1905), sizeof (t1905), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 5, 0, 0};
#include "t1581.h"
// Metadata Definition System.Runtime.Remoting.ObjRef
extern TypeInfo t1581_TI;
#include "t1581MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10040_MI = 
{
	".ctor", (methodPointerType)&m10040, &t1581_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3972, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1581_m10041_ParameterInfos[] = 
{
	{"info", 0, 134222452, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134222453, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10041_MI = 
{
	".ctor", (methodPointerType)&m10041, &t1581_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1581_m10041_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 3973, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10042_MI = 
{
	".cctor", (methodPointerType)&m10042, &t1581_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3974, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10043_MI = 
{
	"get_IsReferenceToWellKnow", (methodPointerType)&m10043, &t1581_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 3975, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1913_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1581__CustomAttributeCache_m10044;
MethodInfo m10044_MI = 
{
	"get_ChannelInfo", (methodPointerType)&m10044, &t1581_TI, &t1913_0_0_0, RuntimeInvoker_t9, NULL, &t1581__CustomAttributeCache_m10044, 2502, 0, 6, 0, false, false, 3976, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1915_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10045_MI = 
{
	"get_EnvoyInfo", (methodPointerType)&m10045, &t1581_TI, &t1915_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 7, 0, false, false, 3977, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1915_0_0_0;
static ParameterInfo t1581_m10046_ParameterInfos[] = 
{
	{"value", 0, 134222454, &EmptyCustomAttributesCache, &t1915_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10046_MI = 
{
	"set_EnvoyInfo", (methodPointerType)&m10046, &t1581_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1581_m10046_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 8, 1, false, false, 3978, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1914_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10047_MI = 
{
	"get_TypeInfo", (methodPointerType)&m10047, &t1581_TI, &t1914_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 3979, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1914_0_0_0;
static ParameterInfo t1581_m10048_ParameterInfos[] = 
{
	{"value", 0, 134222455, &EmptyCustomAttributesCache, &t1914_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10048_MI = 
{
	"set_TypeInfo", (methodPointerType)&m10048, &t1581_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1581_m10048_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 10, 1, false, false, 3980, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10049_MI = 
{
	"get_URI", (methodPointerType)&m10049, &t1581_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 3981, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1581_m10050_ParameterInfos[] = 
{
	{"value", 0, 134222456, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10050_MI = 
{
	"set_URI", (methodPointerType)&m10050, &t1581_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1581_m10050_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 12, 1, false, false, 3982, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1581_m10051_ParameterInfos[] = 
{
	{"info", 0, 134222457, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134222458, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10051_MI = 
{
	"GetObjectData", (methodPointerType)&m10051, &t1581_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1581_m10051_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 2, false, false, 3983, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1581_m10052_ParameterInfos[] = 
{
	{"context", 0, 134222459, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10052_MI = 
{
	"GetRealObject", (methodPointerType)&m10052, &t1581_TI, &t9_0_0_0, RuntimeInvoker_t9_t1094, t1581_m10052_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 1, false, false, 3984, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10053_MI = 
{
	"UpdateChannelInfo", (methodPointerType)&m10053, &t1581_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 3985, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10054_MI = 
{
	"get_ServerType", (methodPointerType)&m10054, &t1581_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 3986, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1581_MIs[] =
{
	&m10040_MI,
	&m10041_MI,
	&m10042_MI,
	&m10043_MI,
	&m10044_MI,
	&m10045_MI,
	&m10046_MI,
	&m10047_MI,
	&m10048_MI,
	&m10049_MI,
	&m10050_MI,
	&m10051_MI,
	&m10052_MI,
	&m10053_MI,
	&m10054_MI,
	NULL
};
extern Il2CppType t1913_0_0_1;
FieldInfo t1581_f0_FieldInfo = 
{
	"channel_info", &t1913_0_0_1, &t1581_TI, offsetof(t1581, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1581_f1_FieldInfo = 
{
	"uri", &t2_0_0_1, &t1581_TI, offsetof(t1581, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1914_0_0_1;
FieldInfo t1581_f2_FieldInfo = 
{
	"typeInfo", &t1914_0_0_1, &t1581_TI, offsetof(t1581, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1915_0_0_1;
FieldInfo t1581_f3_FieldInfo = 
{
	"envoyInfo", &t1915_0_0_1, &t1581_TI, offsetof(t1581, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1581_f4_FieldInfo = 
{
	"flags", &t125_0_0_1, &t1581_TI, offsetof(t1581, f4), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1581_f5_FieldInfo = 
{
	"_serverType", &t126_0_0_1, &t1581_TI, offsetof(t1581, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t1581_f6_FieldInfo = 
{
	"MarshalledObjectRef", &t125_0_0_17, &t1581_TI, offsetof(t1581_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t1581_f7_FieldInfo = 
{
	"WellKnowObjectRef", &t125_0_0_17, &t1581_TI, offsetof(t1581_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t713_0_0_17;
extern CustomAttributesCache t1581__CustomAttributeCache_U3CU3Ef__switch$map26;
FieldInfo t1581_f8_FieldInfo = 
{
	"<>f__switch$map26", &t713_0_0_17, &t1581_TI, offsetof(t1581_SFs, f8), &t1581__CustomAttributeCache_U3CU3Ef__switch$map26};
static FieldInfo* t1581_FIs[] =
{
	&t1581_f0_FieldInfo,
	&t1581_f1_FieldInfo,
	&t1581_f2_FieldInfo,
	&t1581_f3_FieldInfo,
	&t1581_f4_FieldInfo,
	&t1581_f5_FieldInfo,
	&t1581_f6_FieldInfo,
	&t1581_f7_FieldInfo,
	&t1581_f8_FieldInfo,
	NULL
};
extern MethodInfo m10043_MI;
static PropertyInfo t1581____IsReferenceToWellKnow_PropertyInfo = 
{
	&t1581_TI, "IsReferenceToWellKnow", &m10043_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10044_MI;
static PropertyInfo t1581____ChannelInfo_PropertyInfo = 
{
	&t1581_TI, "ChannelInfo", &m10044_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10045_MI;
extern MethodInfo m10046_MI;
static PropertyInfo t1581____EnvoyInfo_PropertyInfo = 
{
	&t1581_TI, "EnvoyInfo", &m10045_MI, &m10046_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10047_MI;
extern MethodInfo m10048_MI;
static PropertyInfo t1581____TypeInfo_PropertyInfo = 
{
	&t1581_TI, "TypeInfo", &m10047_MI, &m10048_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10049_MI;
extern MethodInfo m10050_MI;
static PropertyInfo t1581____URI_PropertyInfo = 
{
	&t1581_TI, "URI", &m10049_MI, &m10050_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10054_MI;
static PropertyInfo t1581____ServerType_PropertyInfo = 
{
	&t1581_TI, "ServerType", &m10054_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1581_PIs[] =
{
	&t1581____IsReferenceToWellKnow_PropertyInfo,
	&t1581____ChannelInfo_PropertyInfo,
	&t1581____EnvoyInfo_PropertyInfo,
	&t1581____TypeInfo_PropertyInfo,
	&t1581____URI_PropertyInfo,
	&t1581____ServerType_PropertyInfo,
	NULL
};
extern MethodInfo m10051_MI;
extern MethodInfo m10052_MI;
static Il2CppMethodReference t1581_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10051_MI,
	&m10052_MI,
	&m10044_MI,
	&m10045_MI,
	&m10046_MI,
	&m10047_MI,
	&m10048_MI,
	&m10049_MI,
	&m10050_MI,
	&m10051_MI,
	&m10052_MI,
};
static bool t1581_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
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
extern Il2CppType t2181_0_0_0;
static const Il2CppType* t1581_ITIs[] = 
{
	&t616_0_0_0,
	&t2181_0_0_0,
};
static Il2CppInterfaceOffsetPair t1581_IOs[] = 
{
	{ &t616_0_0_0, 4},
	{ &t2181_0_0_0, 5},
};
void t1581_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void t1581_CustomAttributesCacheGenerator_U3CU3Ef__switch$map26(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1827_TI;
#include "t1827.h"
#include "t1827MD.h"
extern MethodInfo m9742_MI;
void t1581_CustomAttributesCacheGenerator_m10044(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1827 * tmp;
		tmp = (t1827 *)il2cpp_codegen_object_new (&t1827_TI);
		m9742(tmp, 3, 2, &m9742_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1581__CustomAttributeCache = {
1,
NULL,
&t1581_CustomAttributesCacheGenerator
};
CustomAttributesCache t1581__CustomAttributeCache_U3CU3Ef__switch$map26 = {
1,
NULL,
&t1581_CustomAttributesCacheGenerator_U3CU3Ef__switch$map26
};
CustomAttributesCache t1581__CustomAttributeCache_m10044 = {
1,
NULL,
&t1581_CustomAttributesCacheGenerator_m10044
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1581_1_0_0;
struct t1581;
extern CustomAttributesCache t1581__CustomAttributeCache;
extern CustomAttributesCache t1581__CustomAttributeCache_U3CU3Ef__switch$map26;
extern CustomAttributesCache t1581__CustomAttributeCache_m10044;
const Il2CppTypeDefinitionMetadata t1581_DM = 
{
	NULL, NULL, t1581_ITIs, t1581_IOs, &t9_0_0_0, t1581_VT, t1581_VTIGM, NULL};
TypeInfo t1581_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjRef", "System.Runtime.Remoting", t1581_MIs, t1581_PIs, t1581_FIs, NULL, &t1581_TI, NULL, &t1581__CustomAttributeCache, &t1581_0_0_0, &t1581_1_0_0, &t1581_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1581), sizeof (t1581), 0, -1, sizeof(t1581_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 15, 6, 9, 0, 0, 15, 2, 2};
#include "t1916.h"
// Metadata Definition System.Runtime.Remoting.RemotingConfiguration
extern TypeInfo t1916_TI;
#include "t1916MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10055_MI = 
{
	".cctor", (methodPointerType)&m10055, &t1916_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3987, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10056_MI = 
{
	"get_ApplicationName", (methodPointerType)&m10056, &t1916_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 3988, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10057_MI = 
{
	"get_ProcessId", (methodPointerType)&m10057, &t1916_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 3989, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1916_m10058_ParameterInfos[] = 
{
	{"svrType", 0, 134222460, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1908_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10058_MI = 
{
	"IsRemotelyActivatedClientType", (methodPointerType)&m10058, &t1916_TI, &t1908_0_0_0, RuntimeInvoker_t9_t9, t1916_m10058_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3990, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1916_MIs[] =
{
	&m10055_MI,
	&m10056_MI,
	&m10057_MI,
	&m10058_MI,
	NULL
};
extern Il2CppType t2_0_0_17;
FieldInfo t1916_f0_FieldInfo = 
{
	"applicationID", &t2_0_0_17, &t1916_TI, offsetof(t1916_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_17;
FieldInfo t1916_f1_FieldInfo = 
{
	"applicationName", &t2_0_0_17, &t1916_TI, offsetof(t1916_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_17;
FieldInfo t1916_f2_FieldInfo = 
{
	"processGuid", &t2_0_0_17, &t1916_TI, offsetof(t1916_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_17;
FieldInfo t1916_f3_FieldInfo = 
{
	"defaultConfigRead", &t124_0_0_17, &t1916_TI, offsetof(t1916_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_17;
FieldInfo t1916_f4_FieldInfo = 
{
	"defaultDelayedConfigRead", &t124_0_0_17, &t1916_TI, offsetof(t1916_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_17;
FieldInfo t1916_f5_FieldInfo = 
{
	"wellKnownClientEntries", &t1149_0_0_17, &t1916_TI, offsetof(t1916_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_17;
FieldInfo t1916_f6_FieldInfo = 
{
	"activatedClientEntries", &t1149_0_0_17, &t1916_TI, offsetof(t1916_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_17;
FieldInfo t1916_f7_FieldInfo = 
{
	"wellKnownServiceEntries", &t1149_0_0_17, &t1916_TI, offsetof(t1916_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_17;
FieldInfo t1916_f8_FieldInfo = 
{
	"activatedServiceEntries", &t1149_0_0_17, &t1916_TI, offsetof(t1916_SFs, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_17;
FieldInfo t1916_f9_FieldInfo = 
{
	"channelTemplates", &t1149_0_0_17, &t1916_TI, offsetof(t1916_SFs, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_17;
FieldInfo t1916_f10_FieldInfo = 
{
	"clientProviderTemplates", &t1149_0_0_17, &t1916_TI, offsetof(t1916_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_17;
FieldInfo t1916_f11_FieldInfo = 
{
	"serverProviderTemplates", &t1149_0_0_17, &t1916_TI, offsetof(t1916_SFs, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1916_FIs[] =
{
	&t1916_f0_FieldInfo,
	&t1916_f1_FieldInfo,
	&t1916_f2_FieldInfo,
	&t1916_f3_FieldInfo,
	&t1916_f4_FieldInfo,
	&t1916_f5_FieldInfo,
	&t1916_f6_FieldInfo,
	&t1916_f7_FieldInfo,
	&t1916_f8_FieldInfo,
	&t1916_f9_FieldInfo,
	&t1916_f10_FieldInfo,
	&t1916_f11_FieldInfo,
	NULL
};
extern MethodInfo m10056_MI;
static PropertyInfo t1916____ApplicationName_PropertyInfo = 
{
	&t1916_TI, "ApplicationName", &m10056_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10057_MI;
static PropertyInfo t1916____ProcessId_PropertyInfo = 
{
	&t1916_TI, "ProcessId", &m10057_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1916_PIs[] =
{
	&t1916____ApplicationName_PropertyInfo,
	&t1916____ProcessId_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1916_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1916_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1916_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1916__CustomAttributeCache = {
1,
NULL,
&t1916_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1916_0_0_0;
extern Il2CppType t1916_1_0_0;
struct t1916;
extern CustomAttributesCache t1916__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1916_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1916_VT, t1916_VTIGM, NULL};
TypeInfo t1916_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingConfiguration", "System.Runtime.Remoting", t1916_MIs, t1916_PIs, t1916_FIs, NULL, &t1916_TI, NULL, &t1916__CustomAttributeCache, &t1916_0_0_0, &t1916_1_0_0, &t1916_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1916), sizeof (t1916), 0, -1, sizeof(t1916_SFs), 0, -1, 1048961, 0, 0, false, false, false, false, false, false, false, false, true, false, 4, 2, 12, 0, 0, 4, 0, 0};
#include "t1917.h"
// Metadata Definition System.Runtime.Remoting.RemotingException
extern TypeInfo t1917_TI;
#include "t1917MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10059_MI = 
{
	".ctor", (methodPointerType)&m10059, &t1917_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3991, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1917_m10060_ParameterInfos[] = 
{
	{"message", 0, 134222461, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10060_MI = 
{
	".ctor", (methodPointerType)&m10060, &t1917_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1917_m10060_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3992, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1917_m10061_ParameterInfos[] = 
{
	{"info", 0, 134222462, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134222463, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10061_MI = 
{
	".ctor", (methodPointerType)&m10061, &t1917_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1917_m10061_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 3993, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1917_MIs[] =
{
	&m10059_MI,
	&m10060_MI,
	&m10061_MI,
	NULL
};
extern MethodInfo m4472_MI;
extern MethodInfo m4473_MI;
extern MethodInfo m4219_MI;
extern MethodInfo m1083_MI;
extern MethodInfo m4474_MI;
extern MethodInfo m4417_MI;
extern MethodInfo m4418_MI;
static Il2CppMethodReference t1917_VT[] =
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
static bool t1917_VTIGM[] =
{
	false,
	false,
	false,
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
static Il2CppInterfaceOffsetPair t1917_IOs[] = 
{
	{ &t616_0_0_0, 4},
	{ &t941_0_0_0, 5},
};
void t1917_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1917__CustomAttributeCache = {
1,
NULL,
&t1917_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1917_0_0_0;
extern Il2CppType t1917_1_0_0;
extern Il2CppType t1360_0_0_0;
struct t1917;
extern CustomAttributesCache t1917__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1917_DM = 
{
	NULL, NULL, NULL, t1917_IOs, &t1360_0_0_0, t1917_VT, t1917_VTIGM, NULL};
TypeInfo t1917_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingException", "System.Runtime.Remoting", t1917_MIs, NULL, NULL, NULL, &t1917_TI, NULL, &t1917__CustomAttributeCache, &t1917_0_0_0, &t1917_1_0_0, &t1917_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1917), sizeof (t1917), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1918.h"
// Metadata Definition System.Runtime.Remoting.RemotingServices
extern TypeInfo t1918_TI;
#include "t1918MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10062_MI = 
{
	".cctor", (methodPointerType)&m10062, &t1918_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3994, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t907_0_0_0;
extern Il2CppType t907_0_0_0;
static ParameterInfo t1918_m10063_ParameterInfos[] = 
{
	{"type", 0, 134222464, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"method", 1, 134222465, &EmptyCustomAttributesCache, &t907_0_0_0},
};
extern Il2CppType t907_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10063_MI = 
{
	"GetVirtualMethod", (methodPointerType)&m10063, &t1918_TI, &t907_0_0_0, RuntimeInvoker_t9_t9_t9, t1918_m10063_ParameterInfos, &EmptyCustomAttributesCache, 147, 4096, 255, 2, false, false, 3995, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1918_m10064_ParameterInfos[] = 
{
	{"proxy", 0, 134222466, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1918__CustomAttributeCache_m10064;
MethodInfo m10064_MI = 
{
	"IsTransparentProxy", (methodPointerType)&m10064, &t1918_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1918_m10064_ParameterInfos, &t1918__CustomAttributeCache_m10064, 150, 4096, 255, 1, false, false, 3996, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1918_m10065_ParameterInfos[] = 
{
	{"URI", 0, 134222467, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10065_MI = 
{
	"GetServerTypeForUri", (methodPointerType)&m10065, &t1918_TI, &t126_0_0_0, RuntimeInvoker_t9_t9, t1918_m10065_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3997, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1581_0_0_0;
static ParameterInfo t1918_m10066_ParameterInfos[] = 
{
	{"objectRef", 0, 134222468, &EmptyCustomAttributesCache, &t1581_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10066_MI = 
{
	"Unmarshal", (methodPointerType)&m10066, &t1918_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1918_m10066_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3998, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1581_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1918_m10067_ParameterInfos[] = 
{
	{"objectRef", 0, 134222469, &EmptyCustomAttributesCache, &t1581_0_0_0},
	{"fRefine", 1, 134222470, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10067_MI = 
{
	"Unmarshal", (methodPointerType)&m10067, &t1918_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t186, t1918_m10067_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 3999, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1200_0_0_0;
static ParameterInfo t1918_m10068_ParameterInfos[] = 
{
	{"Obj", 0, 134222471, &EmptyCustomAttributesCache, &t1200_0_0_0},
};
extern Il2CppType t1581_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10068_MI = 
{
	"Marshal", (methodPointerType)&m10068, &t1918_TI, &t1581_0_0_0, RuntimeInvoker_t9_t9, t1918_m10068_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4000, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1200_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1918_m10069_ParameterInfos[] = 
{
	{"Obj", 0, 134222472, &EmptyCustomAttributesCache, &t1200_0_0_0},
	{"ObjURI", 1, 134222473, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"RequestedType", 2, 134222474, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1581_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10069_MI = 
{
	"Marshal", (methodPointerType)&m10069, &t1918_TI, &t1581_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t1918_m10069_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 4001, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10070_MI = 
{
	"NewUri", (methodPointerType)&m10070, &t1918_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 145, 0, 255, 0, false, false, 4002, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1918_m10071_ParameterInfos[] = 
{
	{"proxy", 0, 134222475, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t1902_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1918__CustomAttributeCache_m10071;
MethodInfo m10071_MI = 
{
	"GetRealProxy", (methodPointerType)&m10071, &t1918_TI, &t1902_0_0_0, RuntimeInvoker_t9_t9, t1918_m10071_ParameterInfos, &t1918__CustomAttributeCache_m10071, 150, 0, 255, 1, false, false, 4003, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1888_0_0_0;
extern Il2CppType t1888_0_0_0;
static ParameterInfo t1918_m10072_ParameterInfos[] = 
{
	{"msg", 0, 134222476, &EmptyCustomAttributesCache, &t1888_0_0_0},
};
extern Il2CppType t907_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10072_MI = 
{
	"GetMethodBaseFromMethodMessage", (methodPointerType)&m10072, &t1918_TI, &t907_0_0_0, RuntimeInvoker_t9_t9, t1918_m10072_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4004, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t1918_m10073_ParameterInfos[] = 
{
	{"type", 0, 134222477, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"methodName", 1, 134222478, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"signature", 2, 134222479, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t907_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10073_MI = 
{
	"GetMethodBaseFromName", (methodPointerType)&m10073, &t1918_TI, &t907_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t1918_m10073_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 4005, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t1918_m10074_ParameterInfos[] = 
{
	{"type", 0, 134222480, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"methodName", 1, 134222481, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"signature", 2, 134222482, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t907_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10074_MI = 
{
	"FindInterfaceMethod", (methodPointerType)&m10074, &t1918_TI, &t907_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t1918_m10074_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4006, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1918_m10075_ParameterInfos[] = 
{
	{"obj", 0, 134222483, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"info", 1, 134222484, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 2, 134222485, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10075_MI = 
{
	"GetObjectData", (methodPointerType)&m10075, &t1918_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t1094, t1918_m10075_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 4007, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1888_0_0_0;
static ParameterInfo t1918_m10076_ParameterInfos[] = 
{
	{"msg", 0, 134222486, &EmptyCustomAttributesCache, &t1888_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10076_MI = 
{
	"IsMethodOverloaded", (methodPointerType)&m10076, &t1918_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1918_m10076_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4008, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t907_0_0_0;
static ParameterInfo t1918_m10077_ParameterInfos[] = 
{
	{"method", 0, 134222487, &EmptyCustomAttributesCache, &t907_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10077_MI = 
{
	"IsOneWay", (methodPointerType)&m10077, &t1918_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1918_m10077_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4009, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1908_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t158_0_0_0;
static ParameterInfo t1918_m10078_ParameterInfos[] = 
{
	{"entry", 0, 134222488, &EmptyCustomAttributesCache, &t1908_0_0_0},
	{"activationAttributes", 1, 134222489, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10078_MI = 
{
	"CreateClientProxy", (methodPointerType)&m10078, &t1918_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1918_m10078_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4010, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t158_0_0_0;
static ParameterInfo t1918_m10079_ParameterInfos[] = 
{
	{"type", 0, 134222490, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"activationAttributes", 1, 134222491, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10079_MI = 
{
	"CreateClientProxyForContextBound", (methodPointerType)&m10079, &t1918_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1918_m10079_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4011, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1918_m10080_ParameterInfos[] = 
{
	{"uri", 0, 134222492, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1904_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10080_MI = 
{
	"GetIdentityForUri", (methodPointerType)&m10080, &t1918_TI, &t1904_0_0_0, RuntimeInvoker_t9_t9, t1918_m10080_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 4012, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1918_m10081_ParameterInfos[] = 
{
	{"uri", 0, 134222493, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10081_MI = 
{
	"RemoveAppNameFromUri", (methodPointerType)&m10081, &t1918_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1918_m10081_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4013, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1581_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t9_1_0_2;
extern Il2CppType t9_1_0_0;
static ParameterInfo t1918_m10082_ParameterInfos[] = 
{
	{"objRef", 0, 134222494, &EmptyCustomAttributesCache, &t1581_0_0_0},
	{"proxyType", 1, 134222495, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"clientProxy", 2, 134222496, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t1905_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m10082_MI = 
{
	"GetOrCreateClientIdentity", (methodPointerType)&m10082, &t1918_TI, &t1905_0_0_0, RuntimeInvoker_t9_t9_t9_t996, t1918_m10082_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 4014, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1200_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1918_m10083_ParameterInfos[] = 
{
	{"realObject", 0, 134222497, &EmptyCustomAttributesCache, &t1200_0_0_0},
	{"objectType", 1, 134222498, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"objectUri", 2, 134222499, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1919_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10083_MI = 
{
	"CreateClientActivatedServerIdentity", (methodPointerType)&m10083, &t1918_TI, &t1919_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t1918_m10083_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 4015, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1920_0_0_0;
extern Il2CppType t1920_0_0_0;
static ParameterInfo t1918_m10084_ParameterInfos[] = 
{
	{"objectType", 0, 134222500, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"objectUri", 1, 134222501, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 2, 134222502, &EmptyCustomAttributesCache, &t1920_0_0_0},
};
extern Il2CppType t1580_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10084_MI = 
{
	"CreateWellKnownServerIdentity", (methodPointerType)&m10084, &t1918_TI, &t1580_0_0_0, RuntimeInvoker_t9_t9_t9_t125, t1918_m10084_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 4016, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1580_0_0_0;
extern Il2CppType t1580_0_0_0;
static ParameterInfo t1918_m10085_ParameterInfos[] = 
{
	{"identity", 0, 134222503, &EmptyCustomAttributesCache, &t1580_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10085_MI = 
{
	"RegisterServerIdentity", (methodPointerType)&m10085, &t1918_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1918_m10085_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4017, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1581_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1918_m10086_ParameterInfos[] = 
{
	{"objref", 0, 134222504, &EmptyCustomAttributesCache, &t1581_0_0_0},
	{"classToProxy", 1, 134222505, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10086_MI = 
{
	"GetProxyForRemoteObject", (methodPointerType)&m10086, &t1918_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1918_m10086_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4018, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1581_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1918_m10087_ParameterInfos[] = 
{
	{"objRef", 0, 134222506, &EmptyCustomAttributesCache, &t1581_0_0_0},
	{"proxyType", 1, 134222507, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10087_MI = 
{
	"GetRemoteObject", (methodPointerType)&m10087, &t1918_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1918_m10087_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4019, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10088_MI = 
{
	"RegisterInternalChannels", (methodPointerType)&m10088, &t1918_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 145, 0, 255, 0, false, false, 4020, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1904_0_0_0;
static ParameterInfo t1918_m10089_ParameterInfos[] = 
{
	{"ident", 0, 134222508, &EmptyCustomAttributesCache, &t1904_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10089_MI = 
{
	"DisposeIdentity", (methodPointerType)&m10089, &t1918_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1918_m10089_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 4021, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1918_m10090_ParameterInfos[] = 
{
	{"uri", 0, 134222509, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10090_MI = 
{
	"GetNormalizedUri", (methodPointerType)&m10090, &t1918_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1918_m10090_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4022, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1918_MIs[] =
{
	&m10062_MI,
	&m10063_MI,
	&m10064_MI,
	&m10065_MI,
	&m10066_MI,
	&m10067_MI,
	&m10068_MI,
	&m10069_MI,
	&m10070_MI,
	&m10071_MI,
	&m10072_MI,
	&m10073_MI,
	&m10074_MI,
	&m10075_MI,
	&m10076_MI,
	&m10077_MI,
	&m10078_MI,
	&m10079_MI,
	&m10080_MI,
	&m10081_MI,
	&m10082_MI,
	&m10083_MI,
	&m10084_MI,
	&m10085_MI,
	&m10086_MI,
	&m10087_MI,
	&m10088_MI,
	&m10089_MI,
	&m10090_MI,
	NULL
};
extern Il2CppType t1149_0_0_17;
FieldInfo t1918_f0_FieldInfo = 
{
	"uri_hash", &t1149_0_0_17, &t1918_TI, offsetof(t1918_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t288_0_0_17;
FieldInfo t1918_f1_FieldInfo = 
{
	"_serializationFormatter", &t288_0_0_17, &t1918_TI, offsetof(t1918_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t288_0_0_17;
FieldInfo t1918_f2_FieldInfo = 
{
	"_deserializationFormatter", &t288_0_0_17, &t1918_TI, offsetof(t1918_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_19;
FieldInfo t1918_f3_FieldInfo = 
{
	"app_id", &t2_0_0_19, &t1918_TI, offsetof(t1918_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t1918_f4_FieldInfo = 
{
	"next_id", &t125_0_0_17, &t1918_TI, offsetof(t1918_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t918_0_0_49;
FieldInfo t1918_f5_FieldInfo = 
{
	"methodBindings", &t918_0_0_49, &t1918_TI, offsetof(t1918_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t821_0_0_49;
FieldInfo t1918_f6_FieldInfo = 
{
	"FieldSetterMethod", &t821_0_0_49, &t1918_TI, offsetof(t1918_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t821_0_0_49;
FieldInfo t1918_f7_FieldInfo = 
{
	"FieldGetterMethod", &t821_0_0_49, &t1918_TI, offsetof(t1918_SFs, f7), &EmptyCustomAttributesCache};
static FieldInfo* t1918_FIs[] =
{
	&t1918_f0_FieldInfo,
	&t1918_f1_FieldInfo,
	&t1918_f2_FieldInfo,
	&t1918_f3_FieldInfo,
	&t1918_f4_FieldInfo,
	&t1918_f5_FieldInfo,
	&t1918_f6_FieldInfo,
	&t1918_f7_FieldInfo,
	NULL
};
static Il2CppMethodReference t1918_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1918_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1918_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1918_CustomAttributesCacheGenerator_m10064(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1827 * tmp;
		tmp = (t1827 *)il2cpp_codegen_object_new (&t1827_TI);
		m9742(tmp, 3, 2, &m9742_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1918_CustomAttributesCacheGenerator_m10071(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1827 * tmp;
		tmp = (t1827 *)il2cpp_codegen_object_new (&t1827_TI);
		m9742(tmp, 3, 2, &m9742_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1918__CustomAttributeCache = {
1,
NULL,
&t1918_CustomAttributesCacheGenerator
};
CustomAttributesCache t1918__CustomAttributeCache_m10064 = {
1,
NULL,
&t1918_CustomAttributesCacheGenerator_m10064
};
CustomAttributesCache t1918__CustomAttributeCache_m10071 = {
1,
NULL,
&t1918_CustomAttributesCacheGenerator_m10071
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1918_0_0_0;
extern Il2CppType t1918_1_0_0;
struct t1918;
extern CustomAttributesCache t1918__CustomAttributeCache;
extern CustomAttributesCache t1918__CustomAttributeCache_m10064;
extern CustomAttributesCache t1918__CustomAttributeCache_m10071;
const Il2CppTypeDefinitionMetadata t1918_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1918_VT, t1918_VTIGM, NULL};
TypeInfo t1918_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingServices", "System.Runtime.Remoting", t1918_MIs, NULL, t1918_FIs, NULL, &t1918_TI, NULL, &t1918__CustomAttributeCache, &t1918_0_0_0, &t1918_1_0_0, &t1918_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1918), sizeof (t1918), 0, -1, sizeof(t1918_SFs), 0, -1, 257, 0, 0, false, false, false, false, false, false, false, false, true, false, 29, 0, 8, 0, 0, 4, 0, 0};
#include "t1580.h"
// Metadata Definition System.Runtime.Remoting.ServerIdentity
extern TypeInfo t1580_TI;
#include "t1580MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t1852_0_0_0;
extern Il2CppType t1852_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1580_m10091_ParameterInfos[] = 
{
	{"objectUri", 0, 134222510, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"context", 1, 134222511, &EmptyCustomAttributesCache, &t1852_0_0_0},
	{"objectType", 2, 134222512, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10091_MI = 
{
	".ctor", (methodPointerType)&m10091, &t1580_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1580_m10091_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4023, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10092_MI = 
{
	"get_ObjectType", (methodPointerType)&m10092, &t1580_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4024, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1865_0_0_0;
extern Il2CppType t1865_0_0_0;
static ParameterInfo t1580_m10093_ParameterInfos[] = 
{
	{"lease", 0, 134222513, &EmptyCustomAttributesCache, &t1865_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10093_MI = 
{
	"StartTrackingLifetime", (methodPointerType)&m10093, &t1580_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1580_m10093_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4025, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10094_MI = 
{
	"OnLifetimeExpired", (methodPointerType)&m10094, &t1580_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 5, 0, false, false, 4026, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1580_m10095_ParameterInfos[] = 
{
	{"requestedType", 0, 134222514, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1581_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10095_MI = 
{
	"CreateObjRef", (methodPointerType)&m10095, &t1580_TI, &t1581_0_0_0, RuntimeInvoker_t9_t9, t1580_m10095_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4027, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1200_0_0_0;
extern Il2CppType t1852_0_0_0;
static ParameterInfo t1580_m10096_ParameterInfos[] = 
{
	{"serverObject", 0, 134222515, &EmptyCustomAttributesCache, &t1200_0_0_0},
	{"context", 1, 134222516, &EmptyCustomAttributesCache, &t1852_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10096_MI = 
{
	"AttachServerObject", (methodPointerType)&m10096, &t1580_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1580_m10096_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4028, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1866_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10097_MI = 
{
	"get_Lease", (methodPointerType)&m10097, &t1580_TI, &t1866_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4029, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10098_MI = 
{
	"DisposeServerObject", (methodPointerType)&m10098, &t1580_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 132, 0, 255, 0, false, false, 4030, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1580_MIs[] =
{
	&m10091_MI,
	&m10092_MI,
	&m10093_MI,
	&m10094_MI,
	&m10095_MI,
	&m10096_MI,
	&m10097_MI,
	&m10098_MI,
	NULL
};
extern Il2CppType t126_0_0_4;
FieldInfo t1580_f5_FieldInfo = 
{
	"_objectType", &t126_0_0_4, &t1580_TI, offsetof(t1580, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1200_0_0_4;
FieldInfo t1580_f6_FieldInfo = 
{
	"_serverObject", &t1200_0_0_4, &t1580_TI, offsetof(t1580, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1395_0_0_4;
FieldInfo t1580_f7_FieldInfo = 
{
	"_serverSink", &t1395_0_0_4, &t1580_TI, offsetof(t1580, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1852_0_0_4;
FieldInfo t1580_f8_FieldInfo = 
{
	"_context", &t1852_0_0_4, &t1580_TI, offsetof(t1580, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1866_0_0_4;
FieldInfo t1580_f9_FieldInfo = 
{
	"_lease", &t1866_0_0_4, &t1580_TI, offsetof(t1580, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1580_FIs[] =
{
	&t1580_f5_FieldInfo,
	&t1580_f6_FieldInfo,
	&t1580_f7_FieldInfo,
	&t1580_f8_FieldInfo,
	&t1580_f9_FieldInfo,
	NULL
};
extern MethodInfo m10092_MI;
static PropertyInfo t1580____ObjectType_PropertyInfo = 
{
	&t1580_TI, "ObjectType", &m10092_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10097_MI;
static PropertyInfo t1580____Lease_PropertyInfo = 
{
	&t1580_TI, "Lease", &m10097_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1580_PIs[] =
{
	&t1580____ObjectType_PropertyInfo,
	&t1580____Lease_PropertyInfo,
	NULL
};
extern MethodInfo m10095_MI;
extern MethodInfo m10094_MI;
static Il2CppMethodReference t1580_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10095_MI,
	&m10094_MI,
};
static bool t1580_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1580_1_0_0;
struct t1580;
const Il2CppTypeDefinitionMetadata t1580_DM = 
{
	NULL, NULL, NULL, NULL, &t1904_0_0_0, t1580_VT, t1580_VTIGM, NULL};
TypeInfo t1580_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ServerIdentity", "System.Runtime.Remoting", t1580_MIs, t1580_PIs, t1580_FIs, NULL, &t1580_TI, NULL, &EmptyCustomAttributesCache, &t1580_0_0_0, &t1580_1_0_0, &t1580_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1580), sizeof (t1580), 0, -1, 0, 0, -1, 1048704, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 2, 5, 0, 0, 6, 0, 0};
#include "t1919.h"
// Metadata Definition System.Runtime.Remoting.ClientActivatedIdentity
extern TypeInfo t1919_TI;
#include "t1919MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1919_m10099_ParameterInfos[] = 
{
	{"objectUri", 0, 134222517, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"objectType", 1, 134222518, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10099_MI = 
{
	".ctor", (methodPointerType)&m10099, &t1919_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1919_m10099_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4031, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1200_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10100_MI = 
{
	"GetServerObject", (methodPointerType)&m10100, &t1919_TI, &t1200_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4032, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10101_MI = 
{
	"OnLifetimeExpired", (methodPointerType)&m10101, &t1919_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 5, 0, false, false, 4033, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1919_MIs[] =
{
	&m10099_MI,
	&m10100_MI,
	&m10101_MI,
	NULL
};
extern MethodInfo m10101_MI;
static Il2CppMethodReference t1919_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10095_MI,
	&m10101_MI,
};
static bool t1919_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1919_0_0_0;
extern Il2CppType t1919_1_0_0;
struct t1919;
const Il2CppTypeDefinitionMetadata t1919_DM = 
{
	NULL, NULL, NULL, NULL, &t1580_0_0_0, t1919_VT, t1919_VTIGM, NULL};
TypeInfo t1919_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ClientActivatedIdentity", "System.Runtime.Remoting", t1919_MIs, NULL, NULL, NULL, &t1919_TI, NULL, &EmptyCustomAttributesCache, &t1919_0_0_0, &t1919_1_0_0, &t1919_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1919), sizeof (t1919), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 6, 0, 0};
#include "t1921.h"
// Metadata Definition System.Runtime.Remoting.SingletonIdentity
extern TypeInfo t1921_TI;
#include "t1921MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t1852_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1921_m10102_ParameterInfos[] = 
{
	{"objectUri", 0, 134222519, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"context", 1, 134222520, &EmptyCustomAttributesCache, &t1852_0_0_0},
	{"objectType", 2, 134222521, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10102_MI = 
{
	".ctor", (methodPointerType)&m10102, &t1921_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1921_m10102_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4034, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1921_MIs[] =
{
	&m10102_MI,
	NULL
};
static Il2CppMethodReference t1921_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10095_MI,
	&m10094_MI,
};
static bool t1921_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1921_0_0_0;
extern Il2CppType t1921_1_0_0;
struct t1921;
const Il2CppTypeDefinitionMetadata t1921_DM = 
{
	NULL, NULL, NULL, NULL, &t1580_0_0_0, t1921_VT, t1921_VTIGM, NULL};
TypeInfo t1921_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SingletonIdentity", "System.Runtime.Remoting", t1921_MIs, NULL, NULL, NULL, &t1921_TI, NULL, &EmptyCustomAttributesCache, &t1921_0_0_0, &t1921_1_0_0, &t1921_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1921), sizeof (t1921), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 6, 0, 0};
#include "t1922.h"
// Metadata Definition System.Runtime.Remoting.SingleCallIdentity
extern TypeInfo t1922_TI;
#include "t1922MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t1852_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1922_m10103_ParameterInfos[] = 
{
	{"objectUri", 0, 134222522, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"context", 1, 134222523, &EmptyCustomAttributesCache, &t1852_0_0_0},
	{"objectType", 2, 134222524, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10103_MI = 
{
	".ctor", (methodPointerType)&m10103, &t1922_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1922_m10103_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4035, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1922_MIs[] =
{
	&m10103_MI,
	NULL
};
static Il2CppMethodReference t1922_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10095_MI,
	&m10094_MI,
};
static bool t1922_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1922_0_0_0;
extern Il2CppType t1922_1_0_0;
struct t1922;
const Il2CppTypeDefinitionMetadata t1922_DM = 
{
	NULL, NULL, NULL, NULL, &t1580_0_0_0, t1922_VT, t1922_VTIGM, NULL};
TypeInfo t1922_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SingleCallIdentity", "System.Runtime.Remoting", t1922_MIs, NULL, NULL, NULL, &t1922_TI, NULL, &EmptyCustomAttributesCache, &t1922_0_0_0, &t1922_1_0_0, &t1922_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1922), sizeof (t1922), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 6, 0, 0};
#include "t1909.h"
// Metadata Definition System.Runtime.Remoting.TypeEntry
extern TypeInfo t1909_TI;
#include "t1909MD.h"
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10104_MI = 
{
	"get_AssemblyName", (methodPointerType)&m10104, &t1909_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4036, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10105_MI = 
{
	"get_TypeName", (methodPointerType)&m10105, &t1909_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4037, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1909_MIs[] =
{
	&m10104_MI,
	&m10105_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1909_f0_FieldInfo = 
{
	"assembly_name", &t2_0_0_1, &t1909_TI, offsetof(t1909, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1909_f1_FieldInfo = 
{
	"type_name", &t2_0_0_1, &t1909_TI, offsetof(t1909, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1909_FIs[] =
{
	&t1909_f0_FieldInfo,
	&t1909_f1_FieldInfo,
	NULL
};
extern MethodInfo m10104_MI;
static PropertyInfo t1909____AssemblyName_PropertyInfo = 
{
	&t1909_TI, "AssemblyName", &m10104_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10105_MI;
static PropertyInfo t1909____TypeName_PropertyInfo = 
{
	&t1909_TI, "TypeName", &m10105_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1909_PIs[] =
{
	&t1909____AssemblyName_PropertyInfo,
	&t1909____TypeName_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1909_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1909_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1909_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1909__CustomAttributeCache = {
1,
NULL,
&t1909_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1909_1_0_0;
struct t1909;
extern CustomAttributesCache t1909__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1909_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1909_VT, t1909_VTIGM, NULL};
TypeInfo t1909_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeEntry", "System.Runtime.Remoting", t1909_MIs, t1909_PIs, t1909_FIs, NULL, &t1909_TI, NULL, &t1909__CustomAttributeCache, &t1909_0_0_0, &t1909_1_0_0, &t1909_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1909), sizeof (t1909), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 2, 2, 0, 0, 4, 0, 0};
#include "t1923.h"
// Metadata Definition System.Runtime.Remoting.TypeInfo
extern TypeInfo t1923_TI;
#include "t1923MD.h"
extern Il2CppType t126_0_0_0;
static ParameterInfo t1923_m10106_ParameterInfos[] = 
{
	{"type", 0, 134222525, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10106_MI = 
{
	".ctor", (methodPointerType)&m10106, &t1923_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1923_m10106_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4038, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10107_MI = 
{
	"get_TypeName", (methodPointerType)&m10107, &t1923_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 4039, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1923_MIs[] =
{
	&m10106_MI,
	&m10107_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1923_f0_FieldInfo = 
{
	"serverType", &t2_0_0_1, &t1923_TI, offsetof(t1923, f0), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1923_f1_FieldInfo = 
{
	"serverHierarchy", &t221_0_0_1, &t1923_TI, offsetof(t1923, f1), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1923_f2_FieldInfo = 
{
	"interfacesImplemented", &t221_0_0_1, &t1923_TI, offsetof(t1923, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1923_FIs[] =
{
	&t1923_f0_FieldInfo,
	&t1923_f1_FieldInfo,
	&t1923_f2_FieldInfo,
	NULL
};
extern MethodInfo m10107_MI;
static PropertyInfo t1923____TypeName_PropertyInfo = 
{
	&t1923_TI, "TypeName", &m10107_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1923_PIs[] =
{
	&t1923____TypeName_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1923_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10107_MI,
};
static bool t1923_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1923_ITIs[] = 
{
	&t1914_0_0_0,
};
static Il2CppInterfaceOffsetPair t1923_IOs[] = 
{
	{ &t1914_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1923_0_0_0;
extern Il2CppType t1923_1_0_0;
struct t1923;
const Il2CppTypeDefinitionMetadata t1923_DM = 
{
	NULL, NULL, t1923_ITIs, t1923_IOs, &t9_0_0_0, t1923_VT, t1923_VTIGM, NULL};
TypeInfo t1923_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeInfo", "System.Runtime.Remoting", t1923_MIs, t1923_PIs, t1923_FIs, NULL, &t1923_TI, NULL, &EmptyCustomAttributesCache, &t1923_0_0_0, &t1923_1_0_0, &t1923_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1923), sizeof (t1923), 0, -1, 0, 0, -1, 1056768, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 3, 0, 0, 5, 1, 1};
#include "t1920.h"
// Metadata Definition System.Runtime.Remoting.WellKnownObjectMode
extern TypeInfo t1920_TI;
#include "t1920MD.h"
static MethodInfo* t1920_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1920_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1920_TI, offsetof(t1920, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1920_0_0_32854;
FieldInfo t1920_f2_FieldInfo = 
{
	"Singleton", &t1920_0_0_32854, &t1920_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1920_0_0_32854;
FieldInfo t1920_f3_FieldInfo = 
{
	"SingleCall", &t1920_0_0_32854, &t1920_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1920_FIs[] =
{
	&t1920_f1_FieldInfo,
	&t1920_f2_FieldInfo,
	&t1920_f3_FieldInfo,
	NULL
};
static const int32_t t1920_f2_DefaultValueData = 1;
extern Il2CppType t125_0_0_0;
static Il2CppFieldDefaultValueEntry t1920_f2_DefaultValue = 
{
	&t1920_f2_FieldInfo, { (char*)&t1920_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1920_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1920_f3_DefaultValue = 
{
	&t1920_f3_FieldInfo, { (char*)&t1920_f3_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1920_FDVs[] = 
{
	&t1920_f2_DefaultValue,
	&t1920_f3_DefaultValue,
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
static Il2CppMethodReference t1920_VT[] =
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
static bool t1920_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
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
static Il2CppInterfaceOffsetPair t1920_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1920_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1920__CustomAttributeCache = {
1,
NULL,
&t1920_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1920_1_0_0;
extern Il2CppType t8_0_0_0;
#include "t125.h"
extern TypeInfo t125_TI;
extern CustomAttributesCache t1920__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1920_DM = 
{
	NULL, NULL, NULL, t1920_IOs, &t8_0_0_0, t1920_VT, t1920_VTIGM, NULL};
TypeInfo t1920_TI = 
{
	&g_mscorlib_dll_Image, NULL, "WellKnownObjectMode", "System.Runtime.Remoting", t1920_MIs, NULL, t1920_FIs, NULL, &t125_TI, NULL, &t1920__CustomAttributeCache, &t1920_0_0_0, &t1920_1_0_0, &t1920_DM, NULL, NULL, NULL, t1920_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1920)+ sizeof (Il2CppObject), sizeof (t1920)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t1924.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.BinaryCommon
extern TypeInfo t1924_TI;
#include "t1924MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10108_MI = 
{
	".cctor", (methodPointerType)&m10108, &t1924_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4040, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1924_m10109_ParameterInfos[] = 
{
	{"type", 0, 134222526, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10109_MI = 
{
	"IsPrimitive", (methodPointerType)&m10109, &t1924_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1924_m10109_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4041, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1924_m10110_ParameterInfos[] = 
{
	{"type", 0, 134222527, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t568_0_0_0;
extern void* RuntimeInvoker_t568_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10110_MI = 
{
	"GetTypeCode", (methodPointerType)&m10110, &t1924_TI, &t568_0_0_0, RuntimeInvoker_t568_t9, t1924_m10110_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4042, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1924_m10111_ParameterInfos[] = 
{
	{"code", 0, 134222528, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10111_MI = 
{
	"GetTypeFromCode", (methodPointerType)&m10111, &t1924_TI, &t126_0_0_0, RuntimeInvoker_t9_t125, t1924_m10111_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4043, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t1895_0_0_0;
extern Il2CppType t1895_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1924_m10112_ParameterInfos[] = 
{
	{"type", 0, 134222529, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"selector", 1, 134222530, &EmptyCustomAttributesCache, &t1895_0_0_0},
	{"context", 2, 134222531, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10112_MI = 
{
	"CheckSerializable", (methodPointerType)&m10112, &t1924_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t1094, t1924_m10112_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 4044, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1924_m10113_ParameterInfos[] = 
{
	{"byteArray", 0, 134222532, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"size", 1, 134222533, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"dataSize", 2, 134222534, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10113_MI = 
{
	"SwapBytes", (methodPointerType)&m10113, &t1924_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1924_m10113_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 4045, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1924_MIs[] =
{
	&m10108_MI,
	&m10109_MI,
	&m10110_MI,
	&m10111_MI,
	&m10112_MI,
	&m10113_MI,
	NULL
};
extern Il2CppType t723_0_0_22;
FieldInfo t1924_f0_FieldInfo = 
{
	"BinaryHeader", &t723_0_0_22, &t1924_TI, offsetof(t1924_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t152_0_0_17;
FieldInfo t1924_f1_FieldInfo = 
{
	"_typeCodesToType", &t152_0_0_17, &t1924_TI, offsetof(t1924_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_17;
FieldInfo t1924_f2_FieldInfo = 
{
	"_typeCodeMap", &t723_0_0_17, &t1924_TI, offsetof(t1924_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_22;
FieldInfo t1924_f3_FieldInfo = 
{
	"UseReflectionSerialization", &t124_0_0_22, &t1924_TI, offsetof(t1924_SFs, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1924_FIs[] =
{
	&t1924_f0_FieldInfo,
	&t1924_f1_FieldInfo,
	&t1924_f2_FieldInfo,
	&t1924_f3_FieldInfo,
	NULL
};
static Il2CppMethodReference t1924_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1924_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1924_0_0_0;
extern Il2CppType t1924_1_0_0;
struct t1924;
const Il2CppTypeDefinitionMetadata t1924_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1924_VT, t1924_VTIGM, NULL};
TypeInfo t1924_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryCommon", "System.Runtime.Serialization.Formatters.Binary", t1924_MIs, NULL, t1924_FIs, NULL, &t1924_TI, NULL, &EmptyCustomAttributesCache, &t1924_0_0_0, &t1924_1_0_0, &t1924_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1924), sizeof (t1924), 0, -1, sizeof(t1924_SFs), 0, -1, 0, 0, 0, false, false, false, false, false, false, false, false, true, false, 6, 0, 4, 0, 0, 4, 0, 0};
#include "t1925.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.BinaryElement
extern TypeInfo t1925_TI;
#include "t1925MD.h"
static MethodInfo* t1925_MIs[] =
{
	NULL
};
extern Il2CppType t568_0_0_1542;
FieldInfo t1925_f1_FieldInfo = 
{
	"value__", &t568_0_0_1542, &t1925_TI, offsetof(t1925, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f2_FieldInfo = 
{
	"Header", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f3_FieldInfo = 
{
	"RefTypeObject", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f4_FieldInfo = 
{
	"UntypedRuntimeObject", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f5_FieldInfo = 
{
	"UntypedExternalObject", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f6_FieldInfo = 
{
	"RuntimeObject", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f7_FieldInfo = 
{
	"ExternalObject", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f8_FieldInfo = 
{
	"String", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f9_FieldInfo = 
{
	"GenericArray", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f10_FieldInfo = 
{
	"BoxedPrimitiveTypeValue", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f11_FieldInfo = 
{
	"ObjectReference", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f12_FieldInfo = 
{
	"NullValue", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f13_FieldInfo = 
{
	"End", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f14_FieldInfo = 
{
	"Assembly", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f15_FieldInfo = 
{
	"ArrayFiller8b", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f16_FieldInfo = 
{
	"ArrayFiller32b", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f17_FieldInfo = 
{
	"ArrayOfPrimitiveType", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f18_FieldInfo = 
{
	"ArrayOfObject", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f19_FieldInfo = 
{
	"ArrayOfString", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f20_FieldInfo = 
{
	"Method", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f21_FieldInfo = 
{
	"_Unknown4", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f22_FieldInfo = 
{
	"_Unknown5", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f23_FieldInfo = 
{
	"MethodCall", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1925_0_0_32854;
FieldInfo t1925_f24_FieldInfo = 
{
	"MethodResponse", &t1925_0_0_32854, &t1925_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1925_FIs[] =
{
	&t1925_f1_FieldInfo,
	&t1925_f2_FieldInfo,
	&t1925_f3_FieldInfo,
	&t1925_f4_FieldInfo,
	&t1925_f5_FieldInfo,
	&t1925_f6_FieldInfo,
	&t1925_f7_FieldInfo,
	&t1925_f8_FieldInfo,
	&t1925_f9_FieldInfo,
	&t1925_f10_FieldInfo,
	&t1925_f11_FieldInfo,
	&t1925_f12_FieldInfo,
	&t1925_f13_FieldInfo,
	&t1925_f14_FieldInfo,
	&t1925_f15_FieldInfo,
	&t1925_f16_FieldInfo,
	&t1925_f17_FieldInfo,
	&t1925_f18_FieldInfo,
	&t1925_f19_FieldInfo,
	&t1925_f20_FieldInfo,
	&t1925_f21_FieldInfo,
	&t1925_f22_FieldInfo,
	&t1925_f23_FieldInfo,
	&t1925_f24_FieldInfo,
	NULL
};
static const uint8_t t1925_f2_DefaultValueData = 0;
extern Il2CppType t568_0_0_0;
static Il2CppFieldDefaultValueEntry t1925_f2_DefaultValue = 
{
	&t1925_f2_FieldInfo, { (char*)&t1925_f2_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1925_f3_DefaultValue = 
{
	&t1925_f3_FieldInfo, { (char*)&t1925_f3_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1925_f4_DefaultValue = 
{
	&t1925_f4_FieldInfo, { (char*)&t1925_f4_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1925_f5_DefaultValue = 
{
	&t1925_f5_FieldInfo, { (char*)&t1925_f5_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1925_f6_DefaultValue = 
{
	&t1925_f6_FieldInfo, { (char*)&t1925_f6_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1925_f7_DefaultValue = 
{
	&t1925_f7_FieldInfo, { (char*)&t1925_f7_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1925_f8_DefaultValue = 
{
	&t1925_f8_FieldInfo, { (char*)&t1925_f8_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1925_f9_DefaultValue = 
{
	&t1925_f9_FieldInfo, { (char*)&t1925_f9_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f10_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1925_f10_DefaultValue = 
{
	&t1925_f10_FieldInfo, { (char*)&t1925_f10_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f11_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t1925_f11_DefaultValue = 
{
	&t1925_f11_FieldInfo, { (char*)&t1925_f11_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f12_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t1925_f12_DefaultValue = 
{
	&t1925_f12_FieldInfo, { (char*)&t1925_f12_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f13_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t1925_f13_DefaultValue = 
{
	&t1925_f13_FieldInfo, { (char*)&t1925_f13_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f14_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t1925_f14_DefaultValue = 
{
	&t1925_f14_FieldInfo, { (char*)&t1925_f14_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f15_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry t1925_f15_DefaultValue = 
{
	&t1925_f15_FieldInfo, { (char*)&t1925_f15_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f16_DefaultValueData = 14;
static Il2CppFieldDefaultValueEntry t1925_f16_DefaultValue = 
{
	&t1925_f16_FieldInfo, { (char*)&t1925_f16_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f17_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t1925_f17_DefaultValue = 
{
	&t1925_f17_FieldInfo, { (char*)&t1925_f17_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f18_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1925_f18_DefaultValue = 
{
	&t1925_f18_FieldInfo, { (char*)&t1925_f18_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f19_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry t1925_f19_DefaultValue = 
{
	&t1925_f19_FieldInfo, { (char*)&t1925_f19_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f20_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry t1925_f20_DefaultValue = 
{
	&t1925_f20_FieldInfo, { (char*)&t1925_f20_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f21_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry t1925_f21_DefaultValue = 
{
	&t1925_f21_FieldInfo, { (char*)&t1925_f21_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f22_DefaultValueData = 20;
static Il2CppFieldDefaultValueEntry t1925_f22_DefaultValue = 
{
	&t1925_f22_FieldInfo, { (char*)&t1925_f22_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f23_DefaultValueData = 21;
static Il2CppFieldDefaultValueEntry t1925_f23_DefaultValue = 
{
	&t1925_f23_FieldInfo, { (char*)&t1925_f23_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1925_f24_DefaultValueData = 22;
static Il2CppFieldDefaultValueEntry t1925_f24_DefaultValue = 
{
	&t1925_f24_FieldInfo, { (char*)&t1925_f24_DefaultValueData, &t568_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1925_FDVs[] = 
{
	&t1925_f2_DefaultValue,
	&t1925_f3_DefaultValue,
	&t1925_f4_DefaultValue,
	&t1925_f5_DefaultValue,
	&t1925_f6_DefaultValue,
	&t1925_f7_DefaultValue,
	&t1925_f8_DefaultValue,
	&t1925_f9_DefaultValue,
	&t1925_f10_DefaultValue,
	&t1925_f11_DefaultValue,
	&t1925_f12_DefaultValue,
	&t1925_f13_DefaultValue,
	&t1925_f14_DefaultValue,
	&t1925_f15_DefaultValue,
	&t1925_f16_DefaultValue,
	&t1925_f17_DefaultValue,
	&t1925_f18_DefaultValue,
	&t1925_f19_DefaultValue,
	&t1925_f20_DefaultValue,
	&t1925_f21_DefaultValue,
	&t1925_f22_DefaultValue,
	&t1925_f23_DefaultValue,
	&t1925_f24_DefaultValue,
	NULL
};
static Il2CppMethodReference t1925_VT[] =
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
static bool t1925_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1925_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1925_0_0_0;
extern Il2CppType t1925_1_0_0;
#include "t568.h"
extern TypeInfo t568_TI;
const Il2CppTypeDefinitionMetadata t1925_DM = 
{
	NULL, NULL, NULL, t1925_IOs, &t8_0_0_0, t1925_VT, t1925_VTIGM, NULL};
TypeInfo t1925_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryElement", "System.Runtime.Serialization.Formatters.Binary", t1925_MIs, NULL, t1925_FIs, NULL, &t568_TI, NULL, &EmptyCustomAttributesCache, &t1925_0_0_0, &t1925_1_0_0, &t1925_DM, NULL, NULL, NULL, t1925_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1925)+ sizeof (Il2CppObject), sizeof (t1925)+ sizeof (Il2CppObject), 0, sizeof(uint8_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 24, 0, 0, 23, 0, 3};
#include "t1926.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.TypeTag
extern TypeInfo t1926_TI;
#include "t1926MD.h"
static MethodInfo* t1926_MIs[] =
{
	NULL
};
extern Il2CppType t568_0_0_1542;
FieldInfo t1926_f1_FieldInfo = 
{
	"value__", &t568_0_0_1542, &t1926_TI, offsetof(t1926, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1926_0_0_32854;
FieldInfo t1926_f2_FieldInfo = 
{
	"PrimitiveType", &t1926_0_0_32854, &t1926_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1926_0_0_32854;
FieldInfo t1926_f3_FieldInfo = 
{
	"String", &t1926_0_0_32854, &t1926_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1926_0_0_32854;
FieldInfo t1926_f4_FieldInfo = 
{
	"ObjectType", &t1926_0_0_32854, &t1926_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1926_0_0_32854;
FieldInfo t1926_f5_FieldInfo = 
{
	"RuntimeType", &t1926_0_0_32854, &t1926_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1926_0_0_32854;
FieldInfo t1926_f6_FieldInfo = 
{
	"GenericType", &t1926_0_0_32854, &t1926_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1926_0_0_32854;
FieldInfo t1926_f7_FieldInfo = 
{
	"ArrayOfObject", &t1926_0_0_32854, &t1926_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1926_0_0_32854;
FieldInfo t1926_f8_FieldInfo = 
{
	"ArrayOfString", &t1926_0_0_32854, &t1926_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1926_0_0_32854;
FieldInfo t1926_f9_FieldInfo = 
{
	"ArrayOfPrimitiveType", &t1926_0_0_32854, &t1926_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1926_FIs[] =
{
	&t1926_f1_FieldInfo,
	&t1926_f2_FieldInfo,
	&t1926_f3_FieldInfo,
	&t1926_f4_FieldInfo,
	&t1926_f5_FieldInfo,
	&t1926_f6_FieldInfo,
	&t1926_f7_FieldInfo,
	&t1926_f8_FieldInfo,
	&t1926_f9_FieldInfo,
	NULL
};
static const uint8_t t1926_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1926_f2_DefaultValue = 
{
	&t1926_f2_FieldInfo, { (char*)&t1926_f2_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1926_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1926_f3_DefaultValue = 
{
	&t1926_f3_FieldInfo, { (char*)&t1926_f3_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1926_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1926_f4_DefaultValue = 
{
	&t1926_f4_FieldInfo, { (char*)&t1926_f4_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1926_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1926_f5_DefaultValue = 
{
	&t1926_f5_FieldInfo, { (char*)&t1926_f5_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1926_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1926_f6_DefaultValue = 
{
	&t1926_f6_FieldInfo, { (char*)&t1926_f6_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1926_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1926_f7_DefaultValue = 
{
	&t1926_f7_FieldInfo, { (char*)&t1926_f7_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1926_f8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1926_f8_DefaultValue = 
{
	&t1926_f8_FieldInfo, { (char*)&t1926_f8_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1926_f9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1926_f9_DefaultValue = 
{
	&t1926_f9_FieldInfo, { (char*)&t1926_f9_DefaultValueData, &t568_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1926_FDVs[] = 
{
	&t1926_f2_DefaultValue,
	&t1926_f3_DefaultValue,
	&t1926_f4_DefaultValue,
	&t1926_f5_DefaultValue,
	&t1926_f6_DefaultValue,
	&t1926_f7_DefaultValue,
	&t1926_f8_DefaultValue,
	&t1926_f9_DefaultValue,
	NULL
};
static Il2CppMethodReference t1926_VT[] =
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
static bool t1926_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1926_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1926_0_0_0;
extern Il2CppType t1926_1_0_0;
const Il2CppTypeDefinitionMetadata t1926_DM = 
{
	NULL, NULL, NULL, t1926_IOs, &t8_0_0_0, t1926_VT, t1926_VTIGM, NULL};
TypeInfo t1926_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeTag", "System.Runtime.Serialization.Formatters.Binary", t1926_MIs, NULL, t1926_FIs, NULL, &t568_TI, NULL, &EmptyCustomAttributesCache, &t1926_0_0_0, &t1926_1_0_0, &t1926_DM, NULL, NULL, NULL, t1926_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1926)+ sizeof (Il2CppObject), sizeof (t1926)+ sizeof (Il2CppObject), 0, sizeof(uint8_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 9, 0, 0, 23, 0, 3};
#include "t1927.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.MethodFlags
extern TypeInfo t1927_TI;
#include "t1927MD.h"
static MethodInfo* t1927_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1927_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1927_TI, offsetof(t1927, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1927_0_0_32854;
FieldInfo t1927_f2_FieldInfo = 
{
	"NoArguments", &t1927_0_0_32854, &t1927_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1927_0_0_32854;
FieldInfo t1927_f3_FieldInfo = 
{
	"PrimitiveArguments", &t1927_0_0_32854, &t1927_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1927_0_0_32854;
FieldInfo t1927_f4_FieldInfo = 
{
	"ArgumentsInSimpleArray", &t1927_0_0_32854, &t1927_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1927_0_0_32854;
FieldInfo t1927_f5_FieldInfo = 
{
	"ArgumentsInMultiArray", &t1927_0_0_32854, &t1927_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1927_0_0_32854;
FieldInfo t1927_f6_FieldInfo = 
{
	"ExcludeLogicalCallContext", &t1927_0_0_32854, &t1927_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1927_0_0_32854;
FieldInfo t1927_f7_FieldInfo = 
{
	"IncludesLogicalCallContext", &t1927_0_0_32854, &t1927_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1927_0_0_32854;
FieldInfo t1927_f8_FieldInfo = 
{
	"IncludesSignature", &t1927_0_0_32854, &t1927_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1927_0_0_32854;
FieldInfo t1927_f9_FieldInfo = 
{
	"FormatMask", &t1927_0_0_32854, &t1927_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1927_0_0_32854;
FieldInfo t1927_f10_FieldInfo = 
{
	"GenericArguments", &t1927_0_0_32854, &t1927_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1927_0_0_32854;
FieldInfo t1927_f11_FieldInfo = 
{
	"NeedsInfoArrayMask", &t1927_0_0_32854, &t1927_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1927_FIs[] =
{
	&t1927_f1_FieldInfo,
	&t1927_f2_FieldInfo,
	&t1927_f3_FieldInfo,
	&t1927_f4_FieldInfo,
	&t1927_f5_FieldInfo,
	&t1927_f6_FieldInfo,
	&t1927_f7_FieldInfo,
	&t1927_f8_FieldInfo,
	&t1927_f9_FieldInfo,
	&t1927_f10_FieldInfo,
	&t1927_f11_FieldInfo,
	NULL
};
static const int32_t t1927_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1927_f2_DefaultValue = 
{
	&t1927_f2_FieldInfo, { (char*)&t1927_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1927_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1927_f3_DefaultValue = 
{
	&t1927_f3_FieldInfo, { (char*)&t1927_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1927_f4_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1927_f4_DefaultValue = 
{
	&t1927_f4_FieldInfo, { (char*)&t1927_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1927_f5_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1927_f5_DefaultValue = 
{
	&t1927_f5_FieldInfo, { (char*)&t1927_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1927_f6_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1927_f6_DefaultValue = 
{
	&t1927_f6_FieldInfo, { (char*)&t1927_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1927_f7_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1927_f7_DefaultValue = 
{
	&t1927_f7_FieldInfo, { (char*)&t1927_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1927_f8_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1927_f8_DefaultValue = 
{
	&t1927_f8_FieldInfo, { (char*)&t1927_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1927_f9_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t1927_f9_DefaultValue = 
{
	&t1927_f9_FieldInfo, { (char*)&t1927_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1927_f10_DefaultValueData = 32768;
static Il2CppFieldDefaultValueEntry t1927_f10_DefaultValue = 
{
	&t1927_f10_FieldInfo, { (char*)&t1927_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1927_f11_DefaultValueData = 32972;
static Il2CppFieldDefaultValueEntry t1927_f11_DefaultValue = 
{
	&t1927_f11_FieldInfo, { (char*)&t1927_f11_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1927_FDVs[] = 
{
	&t1927_f2_DefaultValue,
	&t1927_f3_DefaultValue,
	&t1927_f4_DefaultValue,
	&t1927_f5_DefaultValue,
	&t1927_f6_DefaultValue,
	&t1927_f7_DefaultValue,
	&t1927_f8_DefaultValue,
	&t1927_f9_DefaultValue,
	&t1927_f10_DefaultValue,
	&t1927_f11_DefaultValue,
	NULL
};
static Il2CppMethodReference t1927_VT[] =
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
static bool t1927_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1927_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1927_0_0_0;
extern Il2CppType t1927_1_0_0;
const Il2CppTypeDefinitionMetadata t1927_DM = 
{
	NULL, NULL, NULL, t1927_IOs, &t8_0_0_0, t1927_VT, t1927_VTIGM, NULL};
TypeInfo t1927_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MethodFlags", "System.Runtime.Serialization.Formatters.Binary", t1927_MIs, NULL, t1927_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t1927_0_0_0, &t1927_1_0_0, &t1927_DM, NULL, NULL, NULL, t1927_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1927)+ sizeof (Il2CppObject), sizeof (t1927)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 11, 0, 0, 23, 0, 3};
#include "t1928.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
extern TypeInfo t1928_TI;
#include "t1928MD.h"
static MethodInfo* t1928_MIs[] =
{
	NULL
};
extern Il2CppType t568_0_0_1542;
FieldInfo t1928_f1_FieldInfo = 
{
	"value__", &t568_0_0_1542, &t1928_TI, offsetof(t1928, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1928_0_0_32854;
FieldInfo t1928_f2_FieldInfo = 
{
	"Null", &t1928_0_0_32854, &t1928_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1928_0_0_32854;
FieldInfo t1928_f3_FieldInfo = 
{
	"PrimitiveType", &t1928_0_0_32854, &t1928_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1928_0_0_32854;
FieldInfo t1928_f4_FieldInfo = 
{
	"ObjectType", &t1928_0_0_32854, &t1928_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1928_0_0_32854;
FieldInfo t1928_f5_FieldInfo = 
{
	"Exception", &t1928_0_0_32854, &t1928_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1928_FIs[] =
{
	&t1928_f1_FieldInfo,
	&t1928_f2_FieldInfo,
	&t1928_f3_FieldInfo,
	&t1928_f4_FieldInfo,
	&t1928_f5_FieldInfo,
	NULL
};
static const uint8_t t1928_f2_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1928_f2_DefaultValue = 
{
	&t1928_f2_FieldInfo, { (char*)&t1928_f2_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1928_f3_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1928_f3_DefaultValue = 
{
	&t1928_f3_FieldInfo, { (char*)&t1928_f3_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1928_f4_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1928_f4_DefaultValue = 
{
	&t1928_f4_FieldInfo, { (char*)&t1928_f4_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1928_f5_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1928_f5_DefaultValue = 
{
	&t1928_f5_FieldInfo, { (char*)&t1928_f5_DefaultValueData, &t568_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1928_FDVs[] = 
{
	&t1928_f2_DefaultValue,
	&t1928_f3_DefaultValue,
	&t1928_f4_DefaultValue,
	&t1928_f5_DefaultValue,
	NULL
};
static Il2CppMethodReference t1928_VT[] =
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
static bool t1928_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1928_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1928_0_0_0;
extern Il2CppType t1928_1_0_0;
const Il2CppTypeDefinitionMetadata t1928_DM = 
{
	NULL, NULL, NULL, t1928_IOs, &t8_0_0_0, t1928_VT, t1928_VTIGM, NULL};
TypeInfo t1928_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReturnTypeTag", "System.Runtime.Serialization.Formatters.Binary", t1928_MIs, NULL, t1928_FIs, NULL, &t568_TI, NULL, &EmptyCustomAttributesCache, &t1928_0_0_0, &t1928_1_0_0, &t1928_DM, NULL, NULL, NULL, t1928_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1928)+ sizeof (Il2CppObject), sizeof (t1928)+ sizeof (Il2CppObject), 0, sizeof(uint8_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t288.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
extern TypeInfo t288_TI;
#include "t288MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m1078_MI = 
{
	".ctor", (methodPointerType)&m1078, &t288_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4046, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1895_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t288_m10114_ParameterInfos[] = 
{
	{"selector", 0, 134222535, &EmptyCustomAttributesCache, &t1895_0_0_0},
	{"context", 1, 134222536, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10114_MI = 
{
	".ctor", (methodPointerType)&m10114, &t288_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t288_m10114_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4047, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1895_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t288__CustomAttributeCache_m10115;
MethodInfo m10115_MI = 
{
	"get_DefaultSurrogateSelector", (methodPointerType)&m10115, &t288_TI, &t1895_0_0_0, RuntimeInvoker_t9, NULL, &t288__CustomAttributeCache_m10115, 2198, 0, 255, 0, false, false, 4048, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1930_0_0_0;
extern Il2CppType t1930_0_0_0;
static ParameterInfo t288_m10116_ParameterInfos[] = 
{
	{"value", 0, 134222537, &EmptyCustomAttributesCache, &t1930_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10116_MI = 
{
	"set_AssemblyFormat", (methodPointerType)&m10116, &t288_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t288_m10116_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4049, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1929_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10117_MI = 
{
	"get_Binder", (methodPointerType)&m10117, &t288_TI, &t1929_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 4050, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1094_0_0_0;
extern void* RuntimeInvoker_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10118_MI = 
{
	"get_Context", (methodPointerType)&m10118, &t288_TI, &t1094_0_0_0, RuntimeInvoker_t1094, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 4051, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1895_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10119_MI = 
{
	"get_SurrogateSelector", (methodPointerType)&m10119, &t288_TI, &t1895_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 4052, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1932_0_0_0;
extern void* RuntimeInvoker_t1932 (MethodInfo* method, void* obj, void** args);
MethodInfo m10120_MI = 
{
	"get_FilterLevel", (methodPointerType)&m10120, &t288_TI, &t1932_0_0_0, RuntimeInvoker_t1932, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4053, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t291_0_0_0;
extern Il2CppType t291_0_0_0;
static ParameterInfo t288_m1080_ParameterInfos[] = 
{
	{"serializationStream", 0, 134222538, &EmptyCustomAttributesCache, &t291_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1080_MI = 
{
	"Deserialize", (methodPointerType)&m1080, &t288_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t288_m1080_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 1, false, false, 4054, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t291_0_0_0;
extern Il2CppType t1933_0_0_0;
extern Il2CppType t1933_0_0_0;
static ParameterInfo t288_m10121_ParameterInfos[] = 
{
	{"serializationStream", 0, 134222539, &EmptyCustomAttributesCache, &t291_0_0_0},
	{"handler", 1, 134222540, &EmptyCustomAttributesCache, &t1933_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10121_MI = 
{
	"NoCheckDeserialize", (methodPointerType)&m10121, &t288_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t288_m10121_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4055, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t291_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t288_m1086_ParameterInfos[] = 
{
	{"serializationStream", 0, 134222541, &EmptyCustomAttributesCache, &t291_0_0_0},
	{"graph", 1, 134222542, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1086_MI = 
{
	"Serialize", (methodPointerType)&m1086, &t288_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t288_m1086_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 8, 2, false, false, 4056, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t291_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1886_0_0_0;
extern Il2CppType t1886_0_0_0;
static ParameterInfo t288_m10122_ParameterInfos[] = 
{
	{"serializationStream", 0, 134222543, &EmptyCustomAttributesCache, &t291_0_0_0},
	{"graph", 1, 134222544, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"headers", 2, 134222545, &EmptyCustomAttributesCache, &t1886_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10122_MI = 
{
	"Serialize", (methodPointerType)&m10122, &t288_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t288_m10122_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 9, 3, false, false, 4057, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t1705_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t288_m10123_ParameterInfos[] = 
{
	{"writer", 0, 134222546, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"hasHeaders", 1, 134222547, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10123_MI = 
{
	"WriteBinaryHeader", (methodPointerType)&m10123, &t288_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t288_m10123_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4058, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t1703_0_0_0;
extern Il2CppType t124_1_0_2;
extern Il2CppType t124_1_0_0;
static ParameterInfo t288_m10124_ParameterInfos[] = 
{
	{"reader", 0, 134222548, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"hasHeaders", 1, 134222549, &EmptyCustomAttributesCache, &t124_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t628 (MethodInfo* method, void* obj, void** args);
MethodInfo m10124_MI = 
{
	"ReadBinaryHeader", (methodPointerType)&m10124, &t288_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t628, t288_m10124_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4059, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t288_MIs[] =
{
	&m1078_MI,
	&m10114_MI,
	&m10115_MI,
	&m10116_MI,
	&m10117_MI,
	&m10118_MI,
	&m10119_MI,
	&m10120_MI,
	&m1080_MI,
	&m10121_MI,
	&m1086_MI,
	&m10122_MI,
	&m10123_MI,
	&m10124_MI,
	NULL
};
extern Il2CppType t1930_0_0_1;
FieldInfo t288_f0_FieldInfo = 
{
	"assembly_format", &t1930_0_0_1, &t288_TI, offsetof(t288, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1929_0_0_1;
FieldInfo t288_f1_FieldInfo = 
{
	"binder", &t1929_0_0_1, &t288_TI, offsetof(t288, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1094_0_0_1;
FieldInfo t288_f2_FieldInfo = 
{
	"context", &t1094_0_0_1, &t288_TI, offsetof(t288, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1895_0_0_1;
FieldInfo t288_f3_FieldInfo = 
{
	"surrogate_selector", &t1895_0_0_1, &t288_TI, offsetof(t288, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1931_0_0_1;
FieldInfo t288_f4_FieldInfo = 
{
	"type_format", &t1931_0_0_1, &t288_TI, offsetof(t288, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1932_0_0_1;
FieldInfo t288_f5_FieldInfo = 
{
	"filter_level", &t1932_0_0_1, &t288_TI, offsetof(t288, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1895_0_0_17;
extern CustomAttributesCache t288__CustomAttributeCache_U3CDefaultSurrogateSelectorU3Ek__BackingField;
FieldInfo t288_f6_FieldInfo = 
{
	"<DefaultSurrogateSelector>k__BackingField", &t1895_0_0_17, &t288_TI, offsetof(t288_SFs, f6), &t288__CustomAttributeCache_U3CDefaultSurrogateSelectorU3Ek__BackingField};
static FieldInfo* t288_FIs[] =
{
	&t288_f0_FieldInfo,
	&t288_f1_FieldInfo,
	&t288_f2_FieldInfo,
	&t288_f3_FieldInfo,
	&t288_f4_FieldInfo,
	&t288_f5_FieldInfo,
	&t288_f6_FieldInfo,
	NULL
};
extern MethodInfo m10115_MI;
static PropertyInfo t288____DefaultSurrogateSelector_PropertyInfo = 
{
	&t288_TI, "DefaultSurrogateSelector", &m10115_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10116_MI;
static PropertyInfo t288____AssemblyFormat_PropertyInfo = 
{
	&t288_TI, "AssemblyFormat", NULL, &m10116_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10117_MI;
static PropertyInfo t288____Binder_PropertyInfo = 
{
	&t288_TI, "Binder", &m10117_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10118_MI;
static PropertyInfo t288____Context_PropertyInfo = 
{
	&t288_TI, "Context", &m10118_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10119_MI;
static PropertyInfo t288____SurrogateSelector_PropertyInfo = 
{
	&t288_TI, "SurrogateSelector", &m10119_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10120_MI;
static PropertyInfo t288____FilterLevel_PropertyInfo = 
{
	&t288_TI, "FilterLevel", &m10120_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t288_PIs[] =
{
	&t288____DefaultSurrogateSelector_PropertyInfo,
	&t288____AssemblyFormat_PropertyInfo,
	&t288____Binder_PropertyInfo,
	&t288____Context_PropertyInfo,
	&t288____SurrogateSelector_PropertyInfo,
	&t288____FilterLevel_PropertyInfo,
	NULL
};
extern MethodInfo m1080_MI;
extern MethodInfo m1086_MI;
extern MethodInfo m10122_MI;
static Il2CppMethodReference t288_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10117_MI,
	&m10118_MI,
	&m10119_MI,
	&m1080_MI,
	&m1086_MI,
	&m10122_MI,
};
static bool t288_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t2619_0_0_0;
extern Il2CppType t2620_0_0_0;
static const Il2CppType* t288_ITIs[] = 
{
	&t2619_0_0_0,
	&t2620_0_0_0,
};
static Il2CppInterfaceOffsetPair t288_IOs[] = 
{
	{ &t2619_0_0_0, 4},
	{ &t2620_0_0_0, 4},
};
void t288_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t288_CustomAttributesCacheGenerator_U3CDefaultSurrogateSelectorU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t288_CustomAttributesCacheGenerator_m10115(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t288__CustomAttributeCache = {
1,
NULL,
&t288_CustomAttributesCacheGenerator
};
CustomAttributesCache t288__CustomAttributeCache_U3CDefaultSurrogateSelectorU3Ek__BackingField = {
1,
NULL,
&t288_CustomAttributesCacheGenerator_U3CDefaultSurrogateSelectorU3Ek__BackingField
};
CustomAttributesCache t288__CustomAttributeCache_m10115 = {
1,
NULL,
&t288_CustomAttributesCacheGenerator_m10115
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t288_0_0_0;
extern Il2CppType t288_1_0_0;
struct t288;
extern CustomAttributesCache t288__CustomAttributeCache;
extern CustomAttributesCache t288__CustomAttributeCache_U3CDefaultSurrogateSelectorU3Ek__BackingField;
extern CustomAttributesCache t288__CustomAttributeCache_m10115;
const Il2CppTypeDefinitionMetadata t288_DM = 
{
	NULL, NULL, t288_ITIs, t288_IOs, &t9_0_0_0, t288_VT, t288_VTIGM, NULL};
TypeInfo t288_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryFormatter", "System.Runtime.Serialization.Formatters.Binary", t288_MIs, t288_PIs, t288_FIs, NULL, &t288_TI, NULL, &t288__CustomAttributeCache, &t288_0_0_0, &t288_1_0_0, &t288_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t288), sizeof (t288), 0, -1, sizeof(t288_SFs), 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 14, 6, 7, 0, 0, 10, 2, 2};
#include "t1934.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.CodeGenerator
extern TypeInfo t1934_TI;
#include "t1934MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10125_MI = 
{
	".cctor", (methodPointerType)&m10125, &t1934_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4060, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1934_m10126_ParameterInfos[] = 
{
	{"type", 0, 134222550, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"context", 1, 134222551, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10126_MI = 
{
	"GenerateMetadataType", (methodPointerType)&m10126, &t1934_TI, &t126_0_0_0, RuntimeInvoker_t9_t9_t1094, t1934_m10126_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4061, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1934_m10127_ParameterInfos[] = 
{
	{"type", 0, 134222552, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"context", 1, 134222553, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10127_MI = 
{
	"GenerateMetadataTypeInternal", (methodPointerType)&m10127, &t1934_TI, &t126_0_0_0, RuntimeInvoker_t9_t9_t1094, t1934_m10127_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4062, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1744_0_0_0;
extern Il2CppType t1744_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1934_m10128_ParameterInfos[] = 
{
	{"ig", 0, 134222554, &EmptyCustomAttributesCache, &t1744_0_0_0},
	{"t", 1, 134222555, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10128_MI = 
{
	"LoadFromPtr", (methodPointerType)&m10128, &t1934_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1934_m10128_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4063, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1744_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1934_m10129_ParameterInfos[] = 
{
	{"gen", 0, 134222556, &EmptyCustomAttributesCache, &t1744_0_0_0},
	{"type", 1, 134222557, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"member", 2, 134222558, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10129_MI = 
{
	"EmitWriteTypeSpec", (methodPointerType)&m10129, &t1934_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1934_m10129_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4064, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1744_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1934_m10130_ParameterInfos[] = 
{
	{"gen", 0, 134222559, &EmptyCustomAttributesCache, &t1744_0_0_0},
	{"type", 1, 134222560, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"member", 2, 134222561, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10130_MI = 
{
	"EmitLoadTypeAssembly", (methodPointerType)&m10130, &t1934_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1934_m10130_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4065, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1744_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1934_m10131_ParameterInfos[] = 
{
	{"gen", 0, 134222562, &EmptyCustomAttributesCache, &t1744_0_0_0},
	{"type", 1, 134222563, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10131_MI = 
{
	"EmitWrite", (methodPointerType)&m10131, &t1934_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1934_m10131_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 4066, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1744_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1934_m10132_ParameterInfos[] = 
{
	{"gen", 0, 134222564, &EmptyCustomAttributesCache, &t1744_0_0_0},
	{"type", 1, 134222565, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10132_MI = 
{
	"EmitWritePrimitiveValue", (methodPointerType)&m10132, &t1934_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1934_m10132_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4067, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1934_m10133_ParameterInfos[] = 
{
	{"t", 0, 134222566, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10133_MI = 
{
	"EnumToUnderlying", (methodPointerType)&m10133, &t1934_TI, &t126_0_0_0, RuntimeInvoker_t9_t9, t1934_m10133_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4068, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1934_MIs[] =
{
	&m10125_MI,
	&m10126_MI,
	&m10127_MI,
	&m10128_MI,
	&m10129_MI,
	&m10130_MI,
	&m10131_MI,
	&m10132_MI,
	&m10133_MI,
	NULL
};
extern Il2CppType t9_0_0_17;
FieldInfo t1934_f0_FieldInfo = 
{
	"monitor", &t9_0_0_17, &t1934_TI, offsetof(t1934_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1740_0_0_17;
FieldInfo t1934_f1_FieldInfo = 
{
	"_module", &t1740_0_0_17, &t1934_TI, offsetof(t1934_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1934_FIs[] =
{
	&t1934_f0_FieldInfo,
	&t1934_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1934_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1934_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1934_0_0_0;
extern Il2CppType t1934_1_0_0;
struct t1934;
const Il2CppTypeDefinitionMetadata t1934_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1934_VT, t1934_VTIGM, NULL};
TypeInfo t1934_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CodeGenerator", "System.Runtime.Serialization.Formatters.Binary", t1934_MIs, NULL, t1934_FIs, NULL, &t1934_TI, NULL, &EmptyCustomAttributesCache, &t1934_0_0_0, &t1934_1_0_0, &t1934_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1934), sizeof (t1934), 0, -1, sizeof(t1934_SFs), 0, -1, 0, 0, 0, false, false, false, false, false, false, false, false, true, false, 9, 0, 2, 0, 0, 4, 0, 0};
#include "t1935.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.MessageFormatter
extern TypeInfo t1935_TI;
#include "t1935MD.h"
extern Il2CppType t1705_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1886_0_0_0;
extern Il2CppType t1895_0_0_0;
extern Il2CppType t1094_0_0_0;
extern Il2CppType t1930_0_0_0;
extern Il2CppType t1931_0_0_0;
extern Il2CppType t1931_0_0_0;
static ParameterInfo t1935_m10134_ParameterInfos[] = 
{
	{"writer", 0, 134222567, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"obj", 1, 134222568, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"headers", 2, 134222569, &EmptyCustomAttributesCache, &t1886_0_0_0},
	{"surrogateSelector", 3, 134222570, &EmptyCustomAttributesCache, &t1895_0_0_0},
	{"context", 4, 134222571, &EmptyCustomAttributesCache, &t1094_0_0_0},
	{"assemblyFormat", 5, 134222572, &EmptyCustomAttributesCache, &t1930_0_0_0},
	{"typeFormat", 6, 134222573, &EmptyCustomAttributesCache, &t1931_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9_t9_t1094_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10134_MI = 
{
	"WriteMethodCall", (methodPointerType)&m10134, &t1935_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9_t9_t1094_t125_t125, t1935_m10134_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 7, false, false, 4069, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1886_0_0_0;
extern Il2CppType t1895_0_0_0;
extern Il2CppType t1094_0_0_0;
extern Il2CppType t1930_0_0_0;
extern Il2CppType t1931_0_0_0;
static ParameterInfo t1935_m10135_ParameterInfos[] = 
{
	{"writer", 0, 134222574, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"obj", 1, 134222575, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"headers", 2, 134222576, &EmptyCustomAttributesCache, &t1886_0_0_0},
	{"surrogateSelector", 3, 134222577, &EmptyCustomAttributesCache, &t1895_0_0_0},
	{"context", 4, 134222578, &EmptyCustomAttributesCache, &t1094_0_0_0},
	{"assemblyFormat", 5, 134222579, &EmptyCustomAttributesCache, &t1930_0_0_0},
	{"typeFormat", 6, 134222580, &EmptyCustomAttributesCache, &t1931_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9_t9_t1094_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10135_MI = 
{
	"WriteMethodResponse", (methodPointerType)&m10135, &t1935_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9_t9_t1094_t125_t125, t1935_m10135_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 7, false, false, 4070, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1925_0_0_0;
extern Il2CppType t1703_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t1933_0_0_0;
extern Il2CppType t288_0_0_0;
static ParameterInfo t1935_m10136_ParameterInfos[] = 
{
	{"elem", 0, 134222581, &EmptyCustomAttributesCache, &t1925_0_0_0},
	{"reader", 1, 134222582, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"hasHeaders", 2, 134222583, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"headerHandler", 3, 134222584, &EmptyCustomAttributesCache, &t1933_0_0_0},
	{"formatter", 4, 134222585, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t568_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10136_MI = 
{
	"ReadMethodCall", (methodPointerType)&m10136, &t1935_TI, &t9_0_0_0, RuntimeInvoker_t9_t568_t9_t186_t9_t9, t1935_m10136_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 5, false, false, 4071, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1925_0_0_0;
extern Il2CppType t1703_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t1933_0_0_0;
extern Il2CppType t1900_0_0_0;
extern Il2CppType t1900_0_0_0;
extern Il2CppType t288_0_0_0;
static ParameterInfo t1935_m10137_ParameterInfos[] = 
{
	{"elem", 0, 134222586, &EmptyCustomAttributesCache, &t1925_0_0_0},
	{"reader", 1, 134222587, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"hasHeaders", 2, 134222588, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"headerHandler", 3, 134222589, &EmptyCustomAttributesCache, &t1933_0_0_0},
	{"methodCallMessage", 4, 134222590, &EmptyCustomAttributesCache, &t1900_0_0_0},
	{"formatter", 5, 134222591, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t568_t9_t186_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10137_MI = 
{
	"ReadMethodResponse", (methodPointerType)&m10137, &t1935_TI, &t9_0_0_0, RuntimeInvoker_t9_t568_t9_t186_t9_t9_t9, t1935_m10137_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 6, false, false, 4072, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t1935_m10138_ParameterInfos[] = 
{
	{"objects", 0, 134222592, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10138_MI = 
{
	"AllTypesArePrimitive", (methodPointerType)&m10138, &t1935_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1935_m10138_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4073, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1935_m10139_ParameterInfos[] = 
{
	{"type", 0, 134222593, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10139_MI = 
{
	"IsMethodPrimitive", (methodPointerType)&m10139, &t1935_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1935_m10139_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4074, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1151_0_0_0;
extern Il2CppType t1151_0_0_0;
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1935_m10140_ParameterInfos[] = 
{
	{"properties", 0, 134222594, &EmptyCustomAttributesCache, &t1151_0_0_0},
	{"internalKeys", 1, 134222595, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10140_MI = 
{
	"GetExtraProperties", (methodPointerType)&m10140, &t1935_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t9, t1935_m10140_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 4075, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1935_m10141_ParameterInfos[] = 
{
	{"key", 0, 134222596, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"internalKeys", 1, 134222597, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10141_MI = 
{
	"IsInternalKey", (methodPointerType)&m10141, &t1935_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1935_m10141_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 4076, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1935_MIs[] =
{
	&m10134_MI,
	&m10135_MI,
	&m10136_MI,
	&m10137_MI,
	&m10138_MI,
	&m10139_MI,
	&m10140_MI,
	&m10141_MI,
	NULL
};
static Il2CppMethodReference t1935_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1935_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1935_0_0_0;
extern Il2CppType t1935_1_0_0;
struct t1935;
const Il2CppTypeDefinitionMetadata t1935_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1935_VT, t1935_VTIGM, NULL};
TypeInfo t1935_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MessageFormatter", "System.Runtime.Serialization.Formatters.Binary", t1935_MIs, NULL, NULL, NULL, &t1935_TI, NULL, &EmptyCustomAttributesCache, &t1935_0_0_0, &t1935_1_0_0, &t1935_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1935), sizeof (t1935), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 0, 0, 0, 0, 4, 0, 0};
#include "t1936.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
extern TypeInfo t1936_TI;
#include "t1936MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10142_MI = 
{
	".ctor", (methodPointerType)&m10142, &t1936_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4104, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1936_MIs[] =
{
	&m10142_MI,
	NULL
};
extern Il2CppType t126_0_0_6;
FieldInfo t1936_f0_FieldInfo = 
{
	"Type", &t126_0_0_6, &t1936_TI, offsetof(t1936, f0), &EmptyCustomAttributesCache};
extern Il2CppType t152_0_0_6;
FieldInfo t1936_f1_FieldInfo = 
{
	"MemberTypes", &t152_0_0_6, &t1936_TI, offsetof(t1936, f1), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_6;
FieldInfo t1936_f2_FieldInfo = 
{
	"MemberNames", &t221_0_0_6, &t1936_TI, offsetof(t1936, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1937_0_0_6;
FieldInfo t1936_f3_FieldInfo = 
{
	"MemberInfos", &t1937_0_0_6, &t1936_TI, offsetof(t1936, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1936_f4_FieldInfo = 
{
	"FieldCount", &t125_0_0_6, &t1936_TI, offsetof(t1936, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t1936_f5_FieldInfo = 
{
	"NeedsSerializationInfo", &t124_0_0_6, &t1936_TI, offsetof(t1936, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1936_FIs[] =
{
	&t1936_f0_FieldInfo,
	&t1936_f1_FieldInfo,
	&t1936_f2_FieldInfo,
	&t1936_f3_FieldInfo,
	&t1936_f4_FieldInfo,
	&t1936_f5_FieldInfo,
	NULL
};
static Il2CppMethodReference t1936_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1936_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1936_0_0_0;
extern Il2CppType t1936_1_0_0;
extern TypeInfo t1939_TI;
extern Il2CppType t1939_0_0_0;
struct t1936;
const Il2CppTypeDefinitionMetadata t1936_DM = 
{
	&t1939_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t1936_VT, t1936_VTIGM, NULL};
TypeInfo t1936_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeMetadata", "", t1936_MIs, NULL, t1936_FIs, NULL, &t1936_TI, NULL, &EmptyCustomAttributesCache, &t1936_0_0_0, &t1936_1_0_0, &t1936_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1936), sizeof (t1936), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 6, 0, 0, 4, 0, 0};
#include "t1938.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller
extern TypeInfo t1938_TI;
#include "t1938MD.h"
extern Il2CppType t125_0_0_0;
static ParameterInfo t1938_m10143_ParameterInfos[] = 
{
	{"count", 0, 134222692, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10143_MI = 
{
	".ctor", (methodPointerType)&m10143, &t1938_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1938_m10143_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4105, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1938_MIs[] =
{
	&m10143_MI,
	NULL
};
extern Il2CppType t125_0_0_6;
FieldInfo t1938_f0_FieldInfo = 
{
	"NullCount", &t125_0_0_6, &t1938_TI, offsetof(t1938, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1938_FIs[] =
{
	&t1938_f0_FieldInfo,
	NULL
};
static Il2CppMethodReference t1938_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1938_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1938_0_0_0;
extern Il2CppType t1938_1_0_0;
struct t1938;
const Il2CppTypeDefinitionMetadata t1938_DM = 
{
	&t1939_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t1938_VT, t1938_VTIGM, NULL};
TypeInfo t1938_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ArrayNullFiller", "", t1938_MIs, NULL, t1938_FIs, NULL, &t1938_TI, NULL, &EmptyCustomAttributesCache, &t1938_0_0_0, &t1938_1_0_0, &t1938_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1938), sizeof (t1938), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 0};
#include "t1939.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectReader
#include "t1939MD.h"
extern Il2CppType t288_0_0_0;
static ParameterInfo t1939_m10144_ParameterInfos[] = 
{
	{"formatter", 0, 134222598, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10144_MI = 
{
	".ctor", (methodPointerType)&m10144, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1939_m10144_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4077, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1886_1_0_2;
extern Il2CppType t1886_1_0_0;
static ParameterInfo t1939_m10145_ParameterInfos[] = 
{
	{"reader", 0, 134222599, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"readHeaders", 1, 134222600, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"result", 2, 134222601, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"headers", 3, 134222602, &EmptyCustomAttributesCache, &t1886_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t996_t2622 (MethodInfo* method, void* obj, void** args);
MethodInfo m10145_MI = 
{
	"ReadObjectGraph", (methodPointerType)&m10145, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t996_t2622, t1939_m10145_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 4, false, false, 4078, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1925_0_0_0;
extern Il2CppType t1703_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1886_1_0_2;
static ParameterInfo t1939_m10146_ParameterInfos[] = 
{
	{"elem", 0, 134222603, &EmptyCustomAttributesCache, &t1925_0_0_0},
	{"reader", 1, 134222604, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"readHeaders", 2, 134222605, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"result", 3, 134222606, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"headers", 4, 134222607, &EmptyCustomAttributesCache, &t1886_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t568_t9_t186_t996_t2622 (MethodInfo* method, void* obj, void** args);
MethodInfo m10146_MI = 
{
	"ReadObjectGraph", (methodPointerType)&m10146, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t568_t9_t186_t996_t2622, t1939_m10146_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 5, false, false, 4079, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1925_0_0_0;
extern Il2CppType t1703_0_0_0;
static ParameterInfo t1939_m10147_ParameterInfos[] = 
{
	{"element", 0, 134222608, &EmptyCustomAttributesCache, &t1925_0_0_0},
	{"reader", 1, 134222609, &EmptyCustomAttributesCache, &t1703_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t568_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10147_MI = 
{
	"ReadNextObject", (methodPointerType)&m10147, &t1939_TI, &t124_0_0_0, RuntimeInvoker_t124_t568_t9, t1939_m10147_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4080, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
static ParameterInfo t1939_m10148_ParameterInfos[] = 
{
	{"reader", 0, 134222610, &EmptyCustomAttributesCache, &t1703_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10148_MI = 
{
	"ReadNextObject", (methodPointerType)&m10148, &t1939_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1939_m10148_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4081, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10149_MI = 
{
	"get_CurrentObject", (methodPointerType)&m10149, &t1939_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4082, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1925_0_0_0;
extern Il2CppType t1703_0_0_0;
extern Il2CppType t292_1_0_2;
extern Il2CppType t292_1_0_0;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1093_1_0_2;
extern Il2CppType t1093_1_0_0;
static ParameterInfo t1939_m10150_ParameterInfos[] = 
{
	{"element", 0, 134222611, &EmptyCustomAttributesCache, &t1925_0_0_0},
	{"reader", 1, 134222612, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"objectId", 2, 134222613, &EmptyCustomAttributesCache, &t292_1_0_2},
	{"value", 3, 134222614, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"info", 4, 134222615, &EmptyCustomAttributesCache, &t1093_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t568_t9_t2200_t996_t2623 (MethodInfo* method, void* obj, void** args);
MethodInfo m10150_MI = 
{
	"ReadObject", (methodPointerType)&m10150, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t568_t9_t2200_t996_t2623, t1939_m10150_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 5, false, false, 4083, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
static ParameterInfo t1939_m10151_ParameterInfos[] = 
{
	{"reader", 0, 134222616, &EmptyCustomAttributesCache, &t1703_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10151_MI = 
{
	"ReadAssembly", (methodPointerType)&m10151, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1939_m10151_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4084, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t292_1_0_2;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1093_1_0_2;
static ParameterInfo t1939_m10152_ParameterInfos[] = 
{
	{"reader", 0, 134222617, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"isRuntimeObject", 1, 134222618, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"hasTypeInfo", 2, 134222619, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"objectId", 3, 134222620, &EmptyCustomAttributesCache, &t292_1_0_2},
	{"value", 4, 134222621, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"info", 5, 134222622, &EmptyCustomAttributesCache, &t1093_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t186_t2200_t996_t2623 (MethodInfo* method, void* obj, void** args);
MethodInfo m10152_MI = 
{
	"ReadObjectInstance", (methodPointerType)&m10152, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t186_t2200_t996_t2623, t1939_m10152_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 4085, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t292_1_0_2;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1093_1_0_2;
static ParameterInfo t1939_m10153_ParameterInfos[] = 
{
	{"reader", 0, 134222623, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"objectId", 1, 134222624, &EmptyCustomAttributesCache, &t292_1_0_2},
	{"value", 2, 134222625, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"info", 3, 134222626, &EmptyCustomAttributesCache, &t1093_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2200_t996_t2623 (MethodInfo* method, void* obj, void** args);
MethodInfo m10153_MI = 
{
	"ReadRefTypeObjectInstance", (methodPointerType)&m10153, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2200_t996_t2623, t1939_m10153_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 4086, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t1936_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1093_1_0_2;
static ParameterInfo t1939_m10154_ParameterInfos[] = 
{
	{"reader", 0, 134222627, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"metadata", 1, 134222628, &EmptyCustomAttributesCache, &t1936_0_0_0},
	{"objectId", 2, 134222629, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"objectInstance", 3, 134222630, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"info", 4, 134222631, &EmptyCustomAttributesCache, &t1093_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t292_t996_t2623 (MethodInfo* method, void* obj, void** args);
MethodInfo m10154_MI = 
{
	"ReadObjectContent", (methodPointerType)&m10154, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t292_t996_t2623, t1939_m10154_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 5, false, false, 4087, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1093_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t553_0_0_0;
extern Il2CppType t553_0_0_0;
extern Il2CppType t1088_0_0_0;
extern Il2CppType t1088_0_0_0;
static ParameterInfo t1939_m10155_ParameterInfos[] = 
{
	{"objectId", 0, 134222632, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"objectInstance", 1, 134222633, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"info", 2, 134222634, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"parentObjectId", 3, 134222635, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"parentObjectMemeber", 4, 134222636, &EmptyCustomAttributesCache, &t553_0_0_0},
	{"indices", 5, 134222637, &EmptyCustomAttributesCache, &t1088_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292_t9_t9_t292_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10155_MI = 
{
	"RegisterObject", (methodPointerType)&m10155, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t292_t9_t9_t292_t9_t9, t1939_m10155_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 4088, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t292_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1939_m10156_ParameterInfos[] = 
{
	{"reader", 0, 134222638, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"objectId", 1, 134222639, &EmptyCustomAttributesCache, &t292_1_0_2},
	{"value", 2, 134222640, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2200_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m10156_MI = 
{
	"ReadStringIntance", (methodPointerType)&m10156, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2200_t996, t1939_m10156_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4089, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t292_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1939_m10157_ParameterInfos[] = 
{
	{"reader", 0, 134222641, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"objectId", 1, 134222642, &EmptyCustomAttributesCache, &t292_1_0_2},
	{"val", 2, 134222643, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2200_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m10157_MI = 
{
	"ReadGenericArray", (methodPointerType)&m10157, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2200_t996, t1939_m10157_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4090, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
static ParameterInfo t1939_m10158_ParameterInfos[] = 
{
	{"reader", 0, 134222644, &EmptyCustomAttributesCache, &t1703_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10158_MI = 
{
	"ReadBoxedPrimitiveTypeValue", (methodPointerType)&m10158, &t1939_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1939_m10158_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4091, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t292_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1939_m10159_ParameterInfos[] = 
{
	{"reader", 0, 134222645, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"objectId", 1, 134222646, &EmptyCustomAttributesCache, &t292_1_0_2},
	{"val", 2, 134222647, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2200_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m10159_MI = 
{
	"ReadArrayOfPrimitiveType", (methodPointerType)&m10159, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2200_t996, t1939_m10159_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4092, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1939_m10160_ParameterInfos[] = 
{
	{"reader", 0, 134222648, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"array", 1, 134222649, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"dataSize", 2, 134222650, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10160_MI = 
{
	"BlockRead", (methodPointerType)&m10160, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1939_m10160_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4093, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t292_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1939_m10161_ParameterInfos[] = 
{
	{"reader", 0, 134222651, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"objectId", 1, 134222652, &EmptyCustomAttributesCache, &t292_1_0_2},
	{"array", 2, 134222653, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2200_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m10161_MI = 
{
	"ReadArrayOfObject", (methodPointerType)&m10161, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2200_t996, t1939_m10161_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4094, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t292_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1939_m10162_ParameterInfos[] = 
{
	{"reader", 0, 134222654, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"objectId", 1, 134222655, &EmptyCustomAttributesCache, &t292_1_0_2},
	{"array", 2, 134222656, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2200_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m10162_MI = 
{
	"ReadArrayOfString", (methodPointerType)&m10162, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2200_t996, t1939_m10162_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4095, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t292_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1939_m10163_ParameterInfos[] = 
{
	{"reader", 0, 134222657, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"elementType", 1, 134222658, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"objectId", 2, 134222659, &EmptyCustomAttributesCache, &t292_1_0_2},
	{"val", 3, 134222660, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t2200_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m10163_MI = 
{
	"ReadSimpleArray", (methodPointerType)&m10163, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t2200_t996, t1939_m10163_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 4096, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1939_m10164_ParameterInfos[] = 
{
	{"reader", 0, 134222661, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"isRuntimeObject", 1, 134222662, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"hasTypeInfo", 2, 134222663, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1936_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10164_MI = 
{
	"ReadTypeMetadata", (methodPointerType)&m10164, &t1939_TI, &t1936_0_0_0, RuntimeInvoker_t9_t9_t186_t186, t1939_m10164_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4097, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t1093_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t553_0_0_0;
extern Il2CppType t1088_0_0_0;
static ParameterInfo t1939_m10165_ParameterInfos[] = 
{
	{"reader", 0, 134222664, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"parentObject", 1, 134222665, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"parentObjectId", 2, 134222666, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"info", 3, 134222667, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"valueType", 4, 134222668, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"fieldName", 5, 134222669, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"memberInfo", 6, 134222670, &EmptyCustomAttributesCache, &t553_0_0_0},
	{"indices", 7, 134222671, &EmptyCustomAttributesCache, &t1088_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t292_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10165_MI = 
{
	"ReadValue", (methodPointerType)&m10165, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t292_t9_t9_t9_t9_t9, t1939_m10165_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 8, false, false, 4098, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t553_0_0_0;
extern Il2CppType t1093_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t1088_0_0_0;
static ParameterInfo t1939_m10166_ParameterInfos[] = 
{
	{"parentObject", 0, 134222672, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"fieldName", 1, 134222673, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"memberInfo", 2, 134222674, &EmptyCustomAttributesCache, &t553_0_0_0},
	{"info", 3, 134222675, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"value", 4, 134222676, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"valueType", 5, 134222677, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"indices", 6, 134222678, &EmptyCustomAttributesCache, &t1088_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10166_MI = 
{
	"SetObjectValue", (methodPointerType)&m10166, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9_t9_t9_t9_t9, t1939_m10166_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4099, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1093_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t553_0_0_0;
extern Il2CppType t1088_0_0_0;
static ParameterInfo t1939_m10167_ParameterInfos[] = 
{
	{"parentObjectId", 0, 134222679, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"childObjectId", 1, 134222680, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"parentObject", 2, 134222681, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"info", 3, 134222682, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"fieldName", 4, 134222683, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"memberInfo", 5, 134222684, &EmptyCustomAttributesCache, &t553_0_0_0},
	{"indices", 6, 134222685, &EmptyCustomAttributesCache, &t1088_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292_t292_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10167_MI = 
{
	"RecordFixup", (methodPointerType)&m10167, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t292_t292_t9_t9_t9_t9_t9, t1939_m10167_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4100, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1939_m10168_ParameterInfos[] = 
{
	{"assemblyId", 0, 134222686, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"className", 1, 134222687, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t292_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10168_MI = 
{
	"GetDeserializationType", (methodPointerType)&m10168, &t1939_TI, &t126_0_0_0, RuntimeInvoker_t9_t292_t9, t1939_m10168_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4101, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t1926_0_0_0;
static ParameterInfo t1939_m10169_ParameterInfos[] = 
{
	{"reader", 0, 134222688, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"code", 1, 134222689, &EmptyCustomAttributesCache, &t1926_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9_t568 (MethodInfo* method, void* obj, void** args);
MethodInfo m10169_MI = 
{
	"ReadType", (methodPointerType)&m10169, &t1939_TI, &t126_0_0_0, RuntimeInvoker_t9_t9_t568, t1939_m10169_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4102, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1939_m10170_ParameterInfos[] = 
{
	{"reader", 0, 134222690, &EmptyCustomAttributesCache, &t1703_0_0_0},
	{"type", 1, 134222691, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10170_MI = 
{
	"ReadPrimitiveTypeValue", (methodPointerType)&m10170, &t1939_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1939_m10170_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4103, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1939_MIs[] =
{
	&m10144_MI,
	&m10145_MI,
	&m10146_MI,
	&m10147_MI,
	&m10148_MI,
	&m10149_MI,
	&m10150_MI,
	&m10151_MI,
	&m10152_MI,
	&m10153_MI,
	&m10154_MI,
	&m10155_MI,
	&m10156_MI,
	&m10157_MI,
	&m10158_MI,
	&m10159_MI,
	&m10160_MI,
	&m10161_MI,
	&m10162_MI,
	&m10163_MI,
	&m10164_MI,
	&m10165_MI,
	&m10166_MI,
	&m10167_MI,
	&m10168_MI,
	&m10169_MI,
	&m10170_MI,
	NULL
};
extern Il2CppType t1895_0_0_1;
FieldInfo t1939_f0_FieldInfo = 
{
	"_surrogateSelector", &t1895_0_0_1, &t1939_TI, offsetof(t1939, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1094_0_0_1;
FieldInfo t1939_f1_FieldInfo = 
{
	"_context", &t1094_0_0_1, &t1939_TI, offsetof(t1939, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1929_0_0_1;
FieldInfo t1939_f2_FieldInfo = 
{
	"_binder", &t1929_0_0_1, &t1939_TI, offsetof(t1939, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1932_0_0_1;
FieldInfo t1939_f3_FieldInfo = 
{
	"_filterLevel", &t1932_0_0_1, &t1939_TI, offsetof(t1939, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_1;
FieldInfo t1939_f4_FieldInfo = 
{
	"_manager", &t1940_0_0_1, &t1939_TI, offsetof(t1939, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_1;
FieldInfo t1939_f5_FieldInfo = 
{
	"_registeredAssemblies", &t1149_0_0_1, &t1939_TI, offsetof(t1939, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_1;
FieldInfo t1939_f6_FieldInfo = 
{
	"_typeMetadataCache", &t1149_0_0_1, &t1939_TI, offsetof(t1939, f6), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t1939_f7_FieldInfo = 
{
	"_lastObject", &t9_0_0_1, &t1939_TI, offsetof(t1939, f7), &EmptyCustomAttributesCache};
extern Il2CppType t292_0_0_1;
FieldInfo t1939_f8_FieldInfo = 
{
	"_lastObjectID", &t292_0_0_1, &t1939_TI, offsetof(t1939, f8), &EmptyCustomAttributesCache};
extern Il2CppType t292_0_0_1;
FieldInfo t1939_f9_FieldInfo = 
{
	"_rootObjectID", &t292_0_0_1, &t1939_TI, offsetof(t1939, f9), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t1939_f10_FieldInfo = 
{
	"arrayBuffer", &t723_0_0_1, &t1939_TI, offsetof(t1939, f10), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1939_f11_FieldInfo = 
{
	"ArrayBufferLength", &t125_0_0_1, &t1939_TI, offsetof(t1939, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1939_FIs[] =
{
	&t1939_f0_FieldInfo,
	&t1939_f1_FieldInfo,
	&t1939_f2_FieldInfo,
	&t1939_f3_FieldInfo,
	&t1939_f4_FieldInfo,
	&t1939_f5_FieldInfo,
	&t1939_f6_FieldInfo,
	&t1939_f7_FieldInfo,
	&t1939_f8_FieldInfo,
	&t1939_f9_FieldInfo,
	&t1939_f10_FieldInfo,
	&t1939_f11_FieldInfo,
	NULL
};
extern MethodInfo m10149_MI;
static PropertyInfo t1939____CurrentObject_PropertyInfo = 
{
	&t1939_TI, "CurrentObject", &m10149_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1939_PIs[] =
{
	&t1939____CurrentObject_PropertyInfo,
	NULL
};
static const Il2CppType* t1939_TI__nestedTypes[2] =
{
	&t1936_0_0_0,
	&t1938_0_0_0,
};
static Il2CppMethodReference t1939_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1939_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1939_1_0_0;
struct t1939;
const Il2CppTypeDefinitionMetadata t1939_DM = 
{
	NULL, t1939_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t1939_VT, t1939_VTIGM, NULL};
TypeInfo t1939_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectReader", "System.Runtime.Serialization.Formatters.Binary", t1939_MIs, t1939_PIs, t1939_FIs, NULL, &t1939_TI, NULL, &EmptyCustomAttributesCache, &t1939_0_0_0, &t1939_1_0_0, &t1939_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1939), sizeof (t1939), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 27, 1, 12, 0, 2, 4, 0, 0};
#include "t1941.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.TypeMetadata
extern TypeInfo t1941_TI;
#include "t1941MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10171_MI = 
{
	".ctor", (methodPointerType)&m10171, &t1941_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4106, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1942_0_0_0;
extern Il2CppType t1942_0_0_0;
extern Il2CppType t1705_0_0_0;
static ParameterInfo t1941_m12052_ParameterInfos[] = 
{
	{"ow", 0, 134222693, &EmptyCustomAttributesCache, &t1942_0_0_0},
	{"writer", 1, 134222694, &EmptyCustomAttributesCache, &t1705_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12052_MI = 
{
	"WriteAssemblies", NULL, &t1941_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1941_m12052_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 2, false, false, 4107, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1942_0_0_0;
extern Il2CppType t1705_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1941_m12053_ParameterInfos[] = 
{
	{"ow", 0, 134222695, &EmptyCustomAttributesCache, &t1942_0_0_0},
	{"writer", 1, 134222696, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"writeTypes", 2, 134222697, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m12053_MI = 
{
	"WriteTypeData", NULL, &t1941_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1941_m12053_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 3, false, false, 4108, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1942_0_0_0;
extern Il2CppType t1705_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1941_m12050_ParameterInfos[] = 
{
	{"ow", 0, 134222698, &EmptyCustomAttributesCache, &t1942_0_0_0},
	{"writer", 1, 134222699, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"data", 2, 134222700, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12050_MI = 
{
	"WriteObjectData", NULL, &t1941_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1941_m12050_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 3, false, false, 4109, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1941_0_0_0;
extern Il2CppType t1941_0_0_0;
static ParameterInfo t1941_m10172_ParameterInfos[] = 
{
	{"other", 0, 134222701, &EmptyCustomAttributesCache, &t1941_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10172_MI = 
{
	"IsCompatible", (methodPointerType)&m10172, &t1941_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1941_m10172_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 1, false, false, 4110, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m12051_MI = 
{
	"get_RequiresTypes", NULL, &t1941_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 8, 0, false, false, 4111, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1941_MIs[] =
{
	&m10171_MI,
	&m12052_MI,
	&m12053_MI,
	&m12050_MI,
	&m10172_MI,
	&m12051_MI,
	NULL
};
extern Il2CppType t2_0_0_6;
FieldInfo t1941_f0_FieldInfo = 
{
	"TypeAssemblyName", &t2_0_0_6, &t1941_TI, offsetof(t1941, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1941_f1_FieldInfo = 
{
	"InstanceTypeName", &t2_0_0_6, &t1941_TI, offsetof(t1941, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1941_FIs[] =
{
	&t1941_f0_FieldInfo,
	&t1941_f1_FieldInfo,
	NULL
};
extern MethodInfo m12051_MI;
static PropertyInfo t1941____RequiresTypes_PropertyInfo = 
{
	&t1941_TI, "RequiresTypes", &m12051_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1941_PIs[] =
{
	&t1941____RequiresTypes_PropertyInfo,
	NULL
};
extern MethodInfo m10172_MI;
static Il2CppMethodReference t1941_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
	&m10172_MI,
	NULL,
};
static bool t1941_VTIGM[] =
{
	false,
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
extern Il2CppType t1941_1_0_0;
struct t1941;
const Il2CppTypeDefinitionMetadata t1941_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1941_VT, t1941_VTIGM, NULL};
TypeInfo t1941_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeMetadata", "System.Runtime.Serialization.Formatters.Binary", t1941_MIs, t1941_PIs, t1941_FIs, NULL, &t1941_TI, NULL, &EmptyCustomAttributesCache, &t1941_0_0_0, &t1941_1_0_0, &t1941_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1941), sizeof (t1941), 0, -1, 0, 0, -1, 1048704, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 2, 0, 0, 9, 0, 0};
#include "t1943.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ClrTypeMetadata
extern TypeInfo t1943_TI;
#include "t1943MD.h"
extern Il2CppType t126_0_0_0;
static ParameterInfo t1943_m10173_ParameterInfos[] = 
{
	{"instanceType", 0, 134222702, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10173_MI = 
{
	".ctor", (methodPointerType)&m10173, &t1943_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1943_m10173_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4112, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10174_MI = 
{
	"get_RequiresTypes", (methodPointerType)&m10174, &t1943_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 4113, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1943_MIs[] =
{
	&m10173_MI,
	&m10174_MI,
	NULL
};
extern Il2CppType t126_0_0_6;
FieldInfo t1943_f2_FieldInfo = 
{
	"InstanceType", &t126_0_0_6, &t1943_TI, offsetof(t1943, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1943_FIs[] =
{
	&t1943_f2_FieldInfo,
	NULL
};
extern MethodInfo m10174_MI;
static PropertyInfo t1943____RequiresTypes_PropertyInfo = 
{
	&t1943_TI, "RequiresTypes", &m10174_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1943_PIs[] =
{
	&t1943____RequiresTypes_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1943_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
	&m10172_MI,
	&m10174_MI,
};
static bool t1943_VTIGM[] =
{
	false,
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
extern Il2CppType t1943_0_0_0;
extern Il2CppType t1943_1_0_0;
struct t1943;
const Il2CppTypeDefinitionMetadata t1943_DM = 
{
	NULL, NULL, NULL, NULL, &t1941_0_0_0, t1943_VT, t1943_VTIGM, NULL};
TypeInfo t1943_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ClrTypeMetadata", "System.Runtime.Serialization.Formatters.Binary", t1943_MIs, t1943_PIs, t1943_FIs, NULL, &t1943_TI, NULL, &EmptyCustomAttributesCache, &t1943_0_0_0, &t1943_1_0_0, &t1943_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1943), sizeof (t1943), 0, -1, 0, 0, -1, 1048704, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 1, 0, 0, 9, 0, 0};
#include "t1944.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
extern TypeInfo t1944_TI;
#include "t1944MD.h"
extern Il2CppType t126_0_0_0;
extern Il2CppType t1093_0_0_0;
static ParameterInfo t1944_m10175_ParameterInfos[] = 
{
	{"itype", 0, 134222703, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"info", 1, 134222704, &EmptyCustomAttributesCache, &t1093_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10175_MI = 
{
	".ctor", (methodPointerType)&m10175, &t1944_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1944_m10175_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4114, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1941_0_0_0;
static ParameterInfo t1944_m10176_ParameterInfos[] = 
{
	{"other", 0, 134222705, &EmptyCustomAttributesCache, &t1941_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10176_MI = 
{
	"IsCompatible", (methodPointerType)&m10176, &t1944_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1944_m10176_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 1, false, false, 4115, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1942_0_0_0;
extern Il2CppType t1705_0_0_0;
static ParameterInfo t1944_m10177_ParameterInfos[] = 
{
	{"ow", 0, 134222706, &EmptyCustomAttributesCache, &t1942_0_0_0},
	{"writer", 1, 134222707, &EmptyCustomAttributesCache, &t1705_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10177_MI = 
{
	"WriteAssemblies", (methodPointerType)&m10177, &t1944_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1944_m10177_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 4116, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1942_0_0_0;
extern Il2CppType t1705_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1944_m10178_ParameterInfos[] = 
{
	{"ow", 0, 134222708, &EmptyCustomAttributesCache, &t1942_0_0_0},
	{"writer", 1, 134222709, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"writeTypes", 2, 134222710, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10178_MI = 
{
	"WriteTypeData", (methodPointerType)&m10178, &t1944_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1944_m10178_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 3, false, false, 4117, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1942_0_0_0;
extern Il2CppType t1705_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1944_m10179_ParameterInfos[] = 
{
	{"ow", 0, 134222711, &EmptyCustomAttributesCache, &t1942_0_0_0},
	{"writer", 1, 134222712, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"data", 2, 134222713, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10179_MI = 
{
	"WriteObjectData", (methodPointerType)&m10179, &t1944_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1944_m10179_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 3, false, false, 4118, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10180_MI = 
{
	"get_RequiresTypes", (methodPointerType)&m10180, &t1944_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 4119, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1944_MIs[] =
{
	&m10175_MI,
	&m10176_MI,
	&m10177_MI,
	&m10178_MI,
	&m10179_MI,
	&m10180_MI,
	NULL
};
extern Il2CppType t152_0_0_1;
FieldInfo t1944_f2_FieldInfo = 
{
	"types", &t152_0_0_1, &t1944_TI, offsetof(t1944, f2), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1944_f3_FieldInfo = 
{
	"names", &t221_0_0_1, &t1944_TI, offsetof(t1944, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1944_FIs[] =
{
	&t1944_f2_FieldInfo,
	&t1944_f3_FieldInfo,
	NULL
};
extern MethodInfo m10180_MI;
static PropertyInfo t1944____RequiresTypes_PropertyInfo = 
{
	&t1944_TI, "RequiresTypes", &m10180_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1944_PIs[] =
{
	&t1944____RequiresTypes_PropertyInfo,
	NULL
};
extern MethodInfo m10177_MI;
extern MethodInfo m10178_MI;
extern MethodInfo m10179_MI;
extern MethodInfo m10176_MI;
static Il2CppMethodReference t1944_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10177_MI,
	&m10178_MI,
	&m10179_MI,
	&m10176_MI,
	&m10180_MI,
};
static bool t1944_VTIGM[] =
{
	false,
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
extern Il2CppType t1944_0_0_0;
extern Il2CppType t1944_1_0_0;
struct t1944;
const Il2CppTypeDefinitionMetadata t1944_DM = 
{
	NULL, NULL, NULL, NULL, &t1941_0_0_0, t1944_VT, t1944_VTIGM, NULL};
TypeInfo t1944_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializableTypeMetadata", "System.Runtime.Serialization.Formatters.Binary", t1944_MIs, t1944_PIs, t1944_FIs, NULL, &t1944_TI, NULL, &EmptyCustomAttributesCache, &t1944_0_0_0, &t1944_1_0_0, &t1944_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1944), sizeof (t1944), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 2, 0, 0, 9, 0, 0};
#include "t1945.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
extern TypeInfo t1945_TI;
#include "t1945MD.h"
extern Il2CppType t126_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1945_m10181_ParameterInfos[] = 
{
	{"type", 0, 134222714, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"context", 1, 134222715, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10181_MI = 
{
	".ctor", (methodPointerType)&m10181, &t1945_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1945_m10181_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4120, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1942_0_0_0;
extern Il2CppType t1705_0_0_0;
static ParameterInfo t1945_m10182_ParameterInfos[] = 
{
	{"ow", 0, 134222716, &EmptyCustomAttributesCache, &t1942_0_0_0},
	{"writer", 1, 134222717, &EmptyCustomAttributesCache, &t1705_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10182_MI = 
{
	"WriteAssemblies", (methodPointerType)&m10182, &t1945_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1945_m10182_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 4121, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1942_0_0_0;
extern Il2CppType t1705_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1945_m10183_ParameterInfos[] = 
{
	{"ow", 0, 134222718, &EmptyCustomAttributesCache, &t1942_0_0_0},
	{"writer", 1, 134222719, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"writeTypes", 2, 134222720, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10183_MI = 
{
	"WriteTypeData", (methodPointerType)&m10183, &t1945_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1945_m10183_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 3, false, false, 4122, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1942_0_0_0;
extern Il2CppType t1705_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1945_m10184_ParameterInfos[] = 
{
	{"ow", 0, 134222721, &EmptyCustomAttributesCache, &t1942_0_0_0},
	{"writer", 1, 134222722, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"data", 2, 134222723, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10184_MI = 
{
	"WriteObjectData", (methodPointerType)&m10184, &t1945_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1945_m10184_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 3, false, false, 4123, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1945_MIs[] =
{
	&m10181_MI,
	&m10182_MI,
	&m10183_MI,
	&m10184_MI,
	NULL
};
extern Il2CppType t1937_0_0_1;
FieldInfo t1945_f3_FieldInfo = 
{
	"members", &t1937_0_0_1, &t1945_TI, offsetof(t1945, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1945_FIs[] =
{
	&t1945_f3_FieldInfo,
	NULL
};
extern MethodInfo m10182_MI;
extern MethodInfo m10183_MI;
extern MethodInfo m10184_MI;
static Il2CppMethodReference t1945_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10182_MI,
	&m10183_MI,
	&m10184_MI,
	&m10172_MI,
	&m10174_MI,
};
static bool t1945_VTIGM[] =
{
	false,
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
extern Il2CppType t1945_0_0_0;
extern Il2CppType t1945_1_0_0;
struct t1945;
const Il2CppTypeDefinitionMetadata t1945_DM = 
{
	NULL, NULL, NULL, NULL, &t1943_0_0_0, t1945_VT, t1945_VTIGM, NULL};
TypeInfo t1945_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MemberTypeMetadata", "System.Runtime.Serialization.Formatters.Binary", t1945_MIs, NULL, t1945_FIs, NULL, &t1945_TI, NULL, &EmptyCustomAttributesCache, &t1945_0_0_0, &t1945_1_0_0, &t1945_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1945), sizeof (t1945), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 9, 0, 0};
#include "t1946.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference
extern TypeInfo t1946_TI;
#include "t1946MD.h"
extern Il2CppType t1941_0_0_0;
extern Il2CppType t292_0_0_0;
static ParameterInfo t1946_m10185_ParameterInfos[] = 
{
	{"metadata", 0, 134222790, &EmptyCustomAttributesCache, &t1941_0_0_0},
	{"id", 1, 134222791, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10185_MI = 
{
	".ctor", (methodPointerType)&m10185, &t1946_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t292, t1946_m10185_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4154, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1946_MIs[] =
{
	&m10185_MI,
	NULL
};
extern Il2CppType t1941_0_0_6;
FieldInfo t1946_f0_FieldInfo = 
{
	"Metadata", &t1941_0_0_6, &t1946_TI, offsetof(t1946, f0), &EmptyCustomAttributesCache};
extern Il2CppType t292_0_0_6;
FieldInfo t1946_f1_FieldInfo = 
{
	"ObjectID", &t292_0_0_6, &t1946_TI, offsetof(t1946, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1946_FIs[] =
{
	&t1946_f0_FieldInfo,
	&t1946_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1946_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1946_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1946_0_0_0;
extern Il2CppType t1946_1_0_0;
extern TypeInfo t1942_TI;
struct t1946;
const Il2CppTypeDefinitionMetadata t1946_DM = 
{
	&t1942_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t1946_VT, t1946_VTIGM, NULL};
TypeInfo t1946_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MetadataReference", "", t1946_MIs, NULL, t1946_FIs, NULL, &t1946_TI, NULL, &EmptyCustomAttributesCache, &t1946_0_0_0, &t1946_1_0_0, &t1946_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1946), sizeof (t1946), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t1942.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectWriter
#include "t1942MD.h"
extern Il2CppType t1895_0_0_0;
extern Il2CppType t1094_0_0_0;
extern Il2CppType t1930_0_0_0;
extern Il2CppType t1931_0_0_0;
static ParameterInfo t1942_m10186_ParameterInfos[] = 
{
	{"surrogateSelector", 0, 134222724, &EmptyCustomAttributesCache, &t1895_0_0_0},
	{"context", 1, 134222725, &EmptyCustomAttributesCache, &t1094_0_0_0},
	{"assemblyFormat", 2, 134222726, &EmptyCustomAttributesCache, &t1930_0_0_0},
	{"typeFormat", 3, 134222727, &EmptyCustomAttributesCache, &t1931_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10186_MI = 
{
	".ctor", (methodPointerType)&m10186, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094_t125_t125, t1942_m10186_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 4124, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10187_MI = 
{
	".cctor", (methodPointerType)&m10187, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4125, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1886_0_0_0;
static ParameterInfo t1942_m10188_ParameterInfos[] = 
{
	{"writer", 0, 134222728, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"obj", 1, 134222729, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"headers", 2, 134222730, &EmptyCustomAttributesCache, &t1886_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10188_MI = 
{
	"WriteObjectGraph", (methodPointerType)&m10188, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1942_m10188_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4126, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1942_m10189_ParameterInfos[] = 
{
	{"obj", 0, 134222731, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10189_MI = 
{
	"QueueObject", (methodPointerType)&m10189, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1942_m10189_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4127, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
static ParameterInfo t1942_m10190_ParameterInfos[] = 
{
	{"writer", 0, 134222732, &EmptyCustomAttributesCache, &t1705_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10190_MI = 
{
	"WriteQueuedObjects", (methodPointerType)&m10190, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1942_m10190_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4128, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1942_m10191_ParameterInfos[] = 
{
	{"writer", 0, 134222733, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"obj", 1, 134222734, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"isValueObject", 2, 134222735, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10191_MI = 
{
	"WriteObjectInstance", (methodPointerType)&m10191, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1942_m10191_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4129, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
static ParameterInfo t1942_m10192_ParameterInfos[] = 
{
	{"writer", 0, 134222736, &EmptyCustomAttributesCache, &t1705_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10192_MI = 
{
	"WriteSerializationEnd", (methodPointerType)&m10192, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1942_m10192_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4130, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1942_m10193_ParameterInfos[] = 
{
	{"writer", 0, 134222737, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"id", 1, 134222738, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"obj", 2, 134222739, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t292_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10193_MI = 
{
	"WriteObject", (methodPointerType)&m10193, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t292_t9, t1942_m10193_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4131, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1941_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1942_m10194_ParameterInfos[] = 
{
	{"obj", 0, 134222740, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"metadata", 1, 134222741, &EmptyCustomAttributesCache, &t1941_1_0_2},
	{"data", 2, 134222742, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2624_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m10194_MI = 
{
	"GetObjectData", (methodPointerType)&m10194, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2624_t996, t1942_m10194_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4132, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1942_m10195_ParameterInfos[] = 
{
	{"type", 0, 134222743, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1941_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10195_MI = 
{
	"CreateMemberTypeMetadata", (methodPointerType)&m10195, &t1942_TI, &t1941_0_0_0, RuntimeInvoker_t9_t9, t1942_m10195_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4133, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t121_0_0_0;
static ParameterInfo t1942_m10196_ParameterInfos[] = 
{
	{"writer", 0, 134222744, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"id", 1, 134222745, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"array", 2, 134222746, &EmptyCustomAttributesCache, &t121_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t292_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10196_MI = 
{
	"WriteArray", (methodPointerType)&m10196, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t292_t9, t1942_m10196_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4134, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t121_0_0_0;
static ParameterInfo t1942_m10197_ParameterInfos[] = 
{
	{"writer", 0, 134222747, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"id", 1, 134222748, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"array", 2, 134222749, &EmptyCustomAttributesCache, &t121_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t292_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10197_MI = 
{
	"WriteGenericArray", (methodPointerType)&m10197, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t292_t9, t1942_m10197_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4135, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t121_0_0_0;
static ParameterInfo t1942_m10198_ParameterInfos[] = 
{
	{"writer", 0, 134222750, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"id", 1, 134222751, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"array", 2, 134222752, &EmptyCustomAttributesCache, &t121_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t292_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10198_MI = 
{
	"WriteObjectArray", (methodPointerType)&m10198, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t292_t9, t1942_m10198_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4136, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t121_0_0_0;
static ParameterInfo t1942_m10199_ParameterInfos[] = 
{
	{"writer", 0, 134222753, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"id", 1, 134222754, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"array", 2, 134222755, &EmptyCustomAttributesCache, &t121_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t292_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10199_MI = 
{
	"WriteStringArray", (methodPointerType)&m10199, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t292_t9, t1942_m10199_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4137, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t121_0_0_0;
static ParameterInfo t1942_m10200_ParameterInfos[] = 
{
	{"writer", 0, 134222756, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"id", 1, 134222757, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"array", 2, 134222758, &EmptyCustomAttributesCache, &t121_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t292_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10200_MI = 
{
	"WritePrimitiveTypeArray", (methodPointerType)&m10200, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t292_t9, t1942_m10200_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4138, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1942_m10201_ParameterInfos[] = 
{
	{"writer", 0, 134222759, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"array", 1, 134222760, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"dataSize", 2, 134222761, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10201_MI = 
{
	"BlockWrite", (methodPointerType)&m10201, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1942_m10201_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4139, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1942_m10202_ParameterInfos[] = 
{
	{"writer", 0, 134222762, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"array", 1, 134222763, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"elementType", 2, 134222764, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10202_MI = 
{
	"WriteSingleDimensionArrayElements", (methodPointerType)&m10202, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1942_m10202_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4140, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1942_m10203_ParameterInfos[] = 
{
	{"writer", 0, 134222765, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"numNulls", 1, 134222766, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10203_MI = 
{
	"WriteNullFiller", (methodPointerType)&m10203, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1942_m10203_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4141, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t292_0_0_0;
static ParameterInfo t1942_m10204_ParameterInfos[] = 
{
	{"writer", 0, 134222767, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"id", 1, 134222768, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10204_MI = 
{
	"WriteObjectReference", (methodPointerType)&m10204, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t292, t1942_m10204_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4142, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1942_m10205_ParameterInfos[] = 
{
	{"writer", 0, 134222769, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"valueType", 1, 134222770, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"val", 2, 134222771, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10205_MI = 
{
	"WriteValue", (methodPointerType)&m10205, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1942_m10205_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4143, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1942_m10206_ParameterInfos[] = 
{
	{"writer", 0, 134222772, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"id", 1, 134222773, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"str", 2, 134222774, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t292_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10206_MI = 
{
	"WriteString", (methodPointerType)&m10206, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t292_t9, t1942_m10206_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4144, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t1336_0_0_0;
extern Il2CppType t1336_0_0_0;
static ParameterInfo t1942_m10207_ParameterInfos[] = 
{
	{"writer", 0, 134222775, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"assembly", 1, 134222776, &EmptyCustomAttributesCache, &t1336_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10207_MI = 
{
	"WriteAssembly", (methodPointerType)&m10207, &t1942_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1942_m10207_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4145, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1942_m10208_ParameterInfos[] = 
{
	{"writer", 0, 134222777, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"assembly", 1, 134222778, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10208_MI = 
{
	"WriteAssemblyName", (methodPointerType)&m10208, &t1942_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1942_m10208_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4146, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1336_0_0_0;
static ParameterInfo t1942_m10209_ParameterInfos[] = 
{
	{"assembly", 0, 134222779, &EmptyCustomAttributesCache, &t1336_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10209_MI = 
{
	"GetAssemblyId", (methodPointerType)&m10209, &t1942_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1942_m10209_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4147, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1942_m10210_ParameterInfos[] = 
{
	{"assembly", 0, 134222780, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10210_MI = 
{
	"GetAssemblyNameId", (methodPointerType)&m10210, &t1942_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1942_m10210_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4148, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_1_0_2;
static ParameterInfo t1942_m10211_ParameterInfos[] = 
{
	{"assembly", 0, 134222781, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"firstTime", 1, 134222782, &EmptyCustomAttributesCache, &t124_1_0_2},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t628 (MethodInfo* method, void* obj, void** args);
MethodInfo m10211_MI = 
{
	"RegisterAssembly", (methodPointerType)&m10211, &t1942_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t628, t1942_m10211_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4149, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1942_m10212_ParameterInfos[] = 
{
	{"writer", 0, 134222783, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"value", 1, 134222784, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10212_MI = 
{
	"WritePrimitiveValue", (methodPointerType)&m10212, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1942_m10212_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4150, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1942_m10213_ParameterInfos[] = 
{
	{"writer", 0, 134222785, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"type", 1, 134222786, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10213_MI = 
{
	"WriteTypeCode", (methodPointerType)&m10213, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1942_m10213_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4151, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1942_m10214_ParameterInfos[] = 
{
	{"type", 0, 134222787, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1926_0_0_0;
extern void* RuntimeInvoker_t1926_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10214_MI = 
{
	"GetTypeTag", (methodPointerType)&m10214, &t1942_TI, &t1926_0_0_0, RuntimeInvoker_t1926_t9, t1942_m10214_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4152, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1705_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1942_m10215_ParameterInfos[] = 
{
	{"writer", 0, 134222788, &EmptyCustomAttributesCache, &t1705_0_0_0},
	{"type", 1, 134222789, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10215_MI = 
{
	"WriteTypeSpec", (methodPointerType)&m10215, &t1942_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1942_m10215_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4153, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1942_MIs[] =
{
	&m10186_MI,
	&m10187_MI,
	&m10188_MI,
	&m10189_MI,
	&m10190_MI,
	&m10191_MI,
	&m10192_MI,
	&m10193_MI,
	&m10194_MI,
	&m10195_MI,
	&m10196_MI,
	&m10197_MI,
	&m10198_MI,
	&m10199_MI,
	&m10200_MI,
	&m10201_MI,
	&m10202_MI,
	&m10203_MI,
	&m10204_MI,
	&m10205_MI,
	&m10206_MI,
	&m10207_MI,
	&m10208_MI,
	&m10209_MI,
	&m10210_MI,
	&m10211_MI,
	&m10212_MI,
	&m10213_MI,
	&m10214_MI,
	&m10215_MI,
	NULL
};
extern Il2CppType t1947_0_0_1;
FieldInfo t1942_f0_FieldInfo = 
{
	"_idGenerator", &t1947_0_0_1, &t1942_TI, offsetof(t1942, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_1;
FieldInfo t1942_f1_FieldInfo = 
{
	"_cachedMetadata", &t1149_0_0_1, &t1942_TI, offsetof(t1942, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1677_0_0_1;
FieldInfo t1942_f2_FieldInfo = 
{
	"_pendingObjects", &t1677_0_0_1, &t1942_TI, offsetof(t1942, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_1;
FieldInfo t1942_f3_FieldInfo = 
{
	"_assemblyCache", &t1149_0_0_1, &t1942_TI, offsetof(t1942, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_17;
FieldInfo t1942_f4_FieldInfo = 
{
	"_cachedTypes", &t1149_0_0_17, &t1942_TI, offsetof(t1942_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1336_0_0_19;
FieldInfo t1942_f5_FieldInfo = 
{
	"CorlibAssembly", &t1336_0_0_19, &t1942_TI, offsetof(t1942_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_19;
FieldInfo t1942_f6_FieldInfo = 
{
	"CorlibAssemblyName", &t2_0_0_19, &t1942_TI, offsetof(t1942_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1895_0_0_1;
FieldInfo t1942_f7_FieldInfo = 
{
	"_surrogateSelector", &t1895_0_0_1, &t1942_TI, offsetof(t1942, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1094_0_0_1;
FieldInfo t1942_f8_FieldInfo = 
{
	"_context", &t1094_0_0_1, &t1942_TI, offsetof(t1942, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1930_0_0_1;
FieldInfo t1942_f9_FieldInfo = 
{
	"_assemblyFormat", &t1930_0_0_1, &t1942_TI, offsetof(t1942, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1931_0_0_1;
FieldInfo t1942_f10_FieldInfo = 
{
	"_typeFormat", &t1931_0_0_1, &t1942_TI, offsetof(t1942, f10), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t1942_f11_FieldInfo = 
{
	"arrayBuffer", &t723_0_0_1, &t1942_TI, offsetof(t1942, f11), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1942_f12_FieldInfo = 
{
	"ArrayBufferLength", &t125_0_0_1, &t1942_TI, offsetof(t1942, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1948_0_0_1;
FieldInfo t1942_f13_FieldInfo = 
{
	"_manager", &t1948_0_0_1, &t1942_TI, offsetof(t1942, f13), &EmptyCustomAttributesCache};
static FieldInfo* t1942_FIs[] =
{
	&t1942_f0_FieldInfo,
	&t1942_f1_FieldInfo,
	&t1942_f2_FieldInfo,
	&t1942_f3_FieldInfo,
	&t1942_f4_FieldInfo,
	&t1942_f5_FieldInfo,
	&t1942_f6_FieldInfo,
	&t1942_f7_FieldInfo,
	&t1942_f8_FieldInfo,
	&t1942_f9_FieldInfo,
	&t1942_f10_FieldInfo,
	&t1942_f11_FieldInfo,
	&t1942_f12_FieldInfo,
	&t1942_f13_FieldInfo,
	NULL
};
static const Il2CppType* t1942_TI__nestedTypes[1] =
{
	&t1946_0_0_0,
};
static Il2CppMethodReference t1942_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1942_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1942_1_0_0;
struct t1942;
const Il2CppTypeDefinitionMetadata t1942_DM = 
{
	NULL, t1942_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t1942_VT, t1942_VTIGM, NULL};
TypeInfo t1942_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectWriter", "System.Runtime.Serialization.Formatters.Binary", t1942_MIs, NULL, t1942_FIs, NULL, &t1942_TI, NULL, &EmptyCustomAttributesCache, &t1942_0_0_0, &t1942_1_0_0, &t1942_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1942), sizeof (t1942), 0, -1, sizeof(t1942_SFs), 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, true, false, 30, 0, 14, 0, 1, 4, 0, 0};
#include "t1930.h"
// Metadata Definition System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
extern TypeInfo t1930_TI;
#include "t1930MD.h"
static MethodInfo* t1930_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1930_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1930_TI, offsetof(t1930, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1930_0_0_32854;
FieldInfo t1930_f2_FieldInfo = 
{
	"Simple", &t1930_0_0_32854, &t1930_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1930_0_0_32854;
FieldInfo t1930_f3_FieldInfo = 
{
	"Full", &t1930_0_0_32854, &t1930_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1930_FIs[] =
{
	&t1930_f1_FieldInfo,
	&t1930_f2_FieldInfo,
	&t1930_f3_FieldInfo,
	NULL
};
static const int32_t t1930_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1930_f2_DefaultValue = 
{
	&t1930_f2_FieldInfo, { (char*)&t1930_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1930_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1930_f3_DefaultValue = 
{
	&t1930_f3_FieldInfo, { (char*)&t1930_f3_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1930_FDVs[] = 
{
	&t1930_f2_DefaultValue,
	&t1930_f3_DefaultValue,
	NULL
};
static Il2CppMethodReference t1930_VT[] =
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
static bool t1930_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1930_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1930_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1930__CustomAttributeCache = {
1,
NULL,
&t1930_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1930_1_0_0;
extern CustomAttributesCache t1930__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1930_DM = 
{
	NULL, NULL, NULL, t1930_IOs, &t8_0_0_0, t1930_VT, t1930_VTIGM, NULL};
TypeInfo t1930_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FormatterAssemblyStyle", "System.Runtime.Serialization.Formatters", t1930_MIs, NULL, t1930_FIs, NULL, &t125_TI, NULL, &t1930__CustomAttributeCache, &t1930_0_0_0, &t1930_1_0_0, &t1930_DM, NULL, NULL, NULL, t1930_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1930)+ sizeof (Il2CppObject), sizeof (t1930)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t1931.h"
// Metadata Definition System.Runtime.Serialization.Formatters.FormatterTypeStyle
extern TypeInfo t1931_TI;
#include "t1931MD.h"
static MethodInfo* t1931_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1931_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1931_TI, offsetof(t1931, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1931_0_0_32854;
FieldInfo t1931_f2_FieldInfo = 
{
	"TypesWhenNeeded", &t1931_0_0_32854, &t1931_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1931_0_0_32854;
FieldInfo t1931_f3_FieldInfo = 
{
	"TypesAlways", &t1931_0_0_32854, &t1931_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1931_0_0_32854;
FieldInfo t1931_f4_FieldInfo = 
{
	"XsdString", &t1931_0_0_32854, &t1931_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1931_FIs[] =
{
	&t1931_f1_FieldInfo,
	&t1931_f2_FieldInfo,
	&t1931_f3_FieldInfo,
	&t1931_f4_FieldInfo,
	NULL
};
static const int32_t t1931_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1931_f2_DefaultValue = 
{
	&t1931_f2_FieldInfo, { (char*)&t1931_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1931_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1931_f3_DefaultValue = 
{
	&t1931_f3_FieldInfo, { (char*)&t1931_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1931_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1931_f4_DefaultValue = 
{
	&t1931_f4_FieldInfo, { (char*)&t1931_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1931_FDVs[] = 
{
	&t1931_f2_DefaultValue,
	&t1931_f3_DefaultValue,
	&t1931_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t1931_VT[] =
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
static bool t1931_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1931_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1931_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1931__CustomAttributeCache = {
1,
NULL,
&t1931_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1931_1_0_0;
extern CustomAttributesCache t1931__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1931_DM = 
{
	NULL, NULL, NULL, t1931_IOs, &t8_0_0_0, t1931_VT, t1931_VTIGM, NULL};
TypeInfo t1931_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FormatterTypeStyle", "System.Runtime.Serialization.Formatters", t1931_MIs, NULL, t1931_FIs, NULL, &t125_TI, NULL, &t1931__CustomAttributeCache, &t1931_0_0_0, &t1931_1_0_0, &t1931_DM, NULL, NULL, NULL, t1931_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1931)+ sizeof (Il2CppObject), sizeof (t1931)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1932.h"
// Metadata Definition System.Runtime.Serialization.Formatters.TypeFilterLevel
extern TypeInfo t1932_TI;
#include "t1932MD.h"
static MethodInfo* t1932_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1932_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1932_TI, offsetof(t1932, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1932_0_0_32854;
FieldInfo t1932_f2_FieldInfo = 
{
	"Low", &t1932_0_0_32854, &t1932_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1932_0_0_32854;
FieldInfo t1932_f3_FieldInfo = 
{
	"Full", &t1932_0_0_32854, &t1932_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1932_FIs[] =
{
	&t1932_f1_FieldInfo,
	&t1932_f2_FieldInfo,
	&t1932_f3_FieldInfo,
	NULL
};
static const int32_t t1932_f2_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1932_f2_DefaultValue = 
{
	&t1932_f2_FieldInfo, { (char*)&t1932_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1932_f3_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1932_f3_DefaultValue = 
{
	&t1932_f3_FieldInfo, { (char*)&t1932_f3_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1932_FDVs[] = 
{
	&t1932_f2_DefaultValue,
	&t1932_f3_DefaultValue,
	NULL
};
static Il2CppMethodReference t1932_VT[] =
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
static bool t1932_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1932_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1932_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1932__CustomAttributeCache = {
1,
NULL,
&t1932_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1932_0_0_0;
extern Il2CppType t1932_1_0_0;
extern CustomAttributesCache t1932__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1932_DM = 
{
	NULL, NULL, NULL, t1932_IOs, &t8_0_0_0, t1932_VT, t1932_VTIGM, NULL};
TypeInfo t1932_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeFilterLevel", "System.Runtime.Serialization.Formatters", t1932_MIs, NULL, t1932_FIs, NULL, &t125_TI, NULL, &t1932__CustomAttributeCache, &t1932_0_0_0, &t1932_1_0_0, &t1932_DM, NULL, NULL, NULL, t1932_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1932)+ sizeof (Il2CppObject), sizeof (t1932)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 257, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t1949.h"
// Metadata Definition System.Runtime.Serialization.FormatterConverter
extern TypeInfo t1949_TI;
#include "t1949MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10216_MI = 
{
	".ctor", (methodPointerType)&m10216, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4155, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1949_m10217_ParameterInfos[] = 
{
	{"value", 0, 134222792, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"type", 1, 134222793, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10217_MI = 
{
	"Convert", (methodPointerType)&m10217, &t1949_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1949_m10217_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 2, false, false, 4156, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1949_m10218_ParameterInfos[] = 
{
	{"value", 0, 134222794, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10218_MI = 
{
	"ToBoolean", (methodPointerType)&m10218, &t1949_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1949_m10218_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 5, 1, false, false, 4157, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1949_m10219_ParameterInfos[] = 
{
	{"value", 0, 134222795, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t327_0_0_0;
extern void* RuntimeInvoker_t327_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10219_MI = 
{
	"ToInt16", (methodPointerType)&m10219, &t1949_TI, &t327_0_0_0, RuntimeInvoker_t327_t9, t1949_m10219_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 1, false, false, 4158, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1949_m10220_ParameterInfos[] = 
{
	{"value", 0, 134222796, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10220_MI = 
{
	"ToInt32", (methodPointerType)&m10220, &t1949_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1949_m10220_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 1, false, false, 4159, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1949_m10221_ParameterInfos[] = 
{
	{"value", 0, 134222797, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10221_MI = 
{
	"ToInt64", (methodPointerType)&m10221, &t1949_TI, &t292_0_0_0, RuntimeInvoker_t292_t9, t1949_m10221_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 8, 1, false, false, 4160, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1949_m10222_ParameterInfos[] = 
{
	{"value", 0, 134222798, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10222_MI = 
{
	"ToString", (methodPointerType)&m10222, &t1949_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1949_m10222_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 9, 1, false, false, 4161, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1949_MIs[] =
{
	&m10216_MI,
	&m10217_MI,
	&m10218_MI,
	&m10219_MI,
	&m10220_MI,
	&m10221_MI,
	&m10222_MI,
	NULL
};
extern MethodInfo m10217_MI;
extern MethodInfo m10218_MI;
extern MethodInfo m10219_MI;
extern MethodInfo m10220_MI;
extern MethodInfo m10221_MI;
extern MethodInfo m10222_MI;
static Il2CppMethodReference t1949_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10217_MI,
	&m10218_MI,
	&m10219_MI,
	&m10220_MI,
	&m10221_MI,
	&m10222_MI,
};
static bool t1949_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t1966_0_0_0;
static const Il2CppType* t1949_ITIs[] = 
{
	&t1966_0_0_0,
};
static Il2CppInterfaceOffsetPair t1949_IOs[] = 
{
	{ &t1966_0_0_0, 4},
};
void t1949_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1949__CustomAttributeCache = {
1,
NULL,
&t1949_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1949_0_0_0;
extern Il2CppType t1949_1_0_0;
struct t1949;
extern CustomAttributesCache t1949__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1949_DM = 
{
	NULL, NULL, t1949_ITIs, t1949_IOs, &t9_0_0_0, t1949_VT, t1949_VTIGM, NULL};
TypeInfo t1949_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FormatterConverter", "System.Runtime.Serialization", t1949_MIs, NULL, NULL, NULL, &t1949_TI, NULL, &t1949__CustomAttributeCache, &t1949_0_0_0, &t1949_1_0_0, &t1949_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1949), sizeof (t1949), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 7, 0, 0, 0, 0, 10, 1, 1};
#include "t1950.h"
// Metadata Definition System.Runtime.Serialization.FormatterServices
extern TypeInfo t1950_TI;
#include "t1950MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t1937_0_0_0;
extern Il2CppType t1937_0_0_0;
static ParameterInfo t1950_m10223_ParameterInfos[] = 
{
	{"obj", 0, 134222799, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"members", 1, 134222800, &EmptyCustomAttributesCache, &t1937_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10223_MI = 
{
	"GetObjectData", (methodPointerType)&m10223, &t1950_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t9, t1950_m10223_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4162, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1950_m10224_ParameterInfos[] = 
{
	{"type", 0, 134222801, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"context", 1, 134222802, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t1937_0_0_0;
extern void* RuntimeInvoker_t9_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10224_MI = 
{
	"GetSerializableMembers", (methodPointerType)&m10224, &t1950_TI, &t1937_0_0_0, RuntimeInvoker_t9_t9_t1094, t1950_m10224_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4163, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t1161_0_0_0;
extern Il2CppType t1161_0_0_0;
static ParameterInfo t1950_m10225_ParameterInfos[] = 
{
	{"reflectedType", 0, 134222803, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"type", 1, 134222804, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"fields", 2, 134222805, &EmptyCustomAttributesCache, &t1161_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10225_MI = 
{
	"GetFields", (methodPointerType)&m10225, &t1950_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1950_m10225_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4164, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1950_m10226_ParameterInfos[] = 
{
	{"type", 0, 134222806, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10226_MI = 
{
	"GetUninitializedObject", (methodPointerType)&m10226, &t1950_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1950_m10226_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4165, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1950_m10227_ParameterInfos[] = 
{
	{"type", 0, 134222807, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10227_MI = 
{
	"GetSafeUninitializedObject", (methodPointerType)&m10227, &t1950_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1950_m10227_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4166, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1950_MIs[] =
{
	&m10223_MI,
	&m10224_MI,
	&m10225_MI,
	&m10226_MI,
	&m10227_MI,
	NULL
};
static Il2CppMethodReference t1950_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1950_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1950_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1950__CustomAttributeCache = {
1,
NULL,
&t1950_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1950_0_0_0;
extern Il2CppType t1950_1_0_0;
struct t1950;
extern CustomAttributesCache t1950__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1950_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1950_VT, t1950_VTIGM, NULL};
TypeInfo t1950_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FormatterServices", "System.Runtime.Serialization", t1950_MIs, NULL, NULL, NULL, &t1950_TI, NULL, &t1950__CustomAttributeCache, &t1950_0_0_0, &t1950_1_0_0, &t1950_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1950), sizeof (t1950), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 4, 0, 0};
// Metadata Definition System.Runtime.Serialization.IDeserializationCallback
extern TypeInfo t1099_TI;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1099_m12056_ParameterInfos[] = 
{
	{"sender", 0, 134222808, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12056_MI = 
{
	"OnDeserialization", NULL, &t1099_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1099_m12056_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 4167, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1099_MIs[] =
{
	&m12056_MI,
	NULL
};
void t1099_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1099__CustomAttributeCache = {
1,
NULL,
&t1099_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1099_0_0_0;
extern Il2CppType t1099_1_0_0;
struct t1099;
extern CustomAttributesCache t1099__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1099_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1099_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDeserializationCallback", "System.Runtime.Serialization", t1099_MIs, NULL, NULL, NULL, &t1099_TI, NULL, &t1099__CustomAttributeCache, &t1099_0_0_0, &t1099_1_0_0, &t1099_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Serialization.IFormatter
extern TypeInfo t2620_TI;
static MethodInfo* t2620_MIs[] =
{
	NULL
};
void t2620_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2620__CustomAttributeCache = {
1,
NULL,
&t2620_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2620_1_0_0;
struct t2620;
extern CustomAttributesCache t2620__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2620_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2620_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IFormatter", "System.Runtime.Serialization", t2620_MIs, NULL, NULL, NULL, &t2620_TI, NULL, &t2620__CustomAttributeCache, &t2620_0_0_0, &t2620_1_0_0, &t2620_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Serialization.IFormatterConverter
extern TypeInfo t1966_TI;
extern Il2CppType t9_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1966_m12059_ParameterInfos[] = 
{
	{"value", 0, 134222809, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"type", 1, 134222810, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12059_MI = 
{
	"Convert", NULL, &t1966_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1966_m12059_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, false, 4168, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1966_m12060_ParameterInfos[] = 
{
	{"value", 0, 134222811, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12060_MI = 
{
	"ToBoolean", NULL, &t1966_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1966_m12060_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, false, 4169, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1966_m12061_ParameterInfos[] = 
{
	{"value", 0, 134222812, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t327_0_0_0;
extern void* RuntimeInvoker_t327_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12061_MI = 
{
	"ToInt16", NULL, &t1966_TI, &t327_0_0_0, RuntimeInvoker_t327_t9, t1966_m12061_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, false, 4170, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1966_m12062_ParameterInfos[] = 
{
	{"value", 0, 134222813, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12062_MI = 
{
	"ToInt32", NULL, &t1966_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1966_m12062_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 3, 1, false, false, 4171, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1966_m12063_ParameterInfos[] = 
{
	{"value", 0, 134222814, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12063_MI = 
{
	"ToInt64", NULL, &t1966_TI, &t292_0_0_0, RuntimeInvoker_t292_t9, t1966_m12063_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4172, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1966_m12064_ParameterInfos[] = 
{
	{"value", 0, 134222815, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12064_MI = 
{
	"ToString", NULL, &t1966_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1966_m12064_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 4173, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1966_MIs[] =
{
	&m12059_MI,
	&m12060_MI,
	&m12061_MI,
	&m12062_MI,
	&m12063_MI,
	&m12064_MI,
	NULL
};
extern TypeInfo t1143_TI;
#include "t1143.h"
#include "t1143MD.h"
extern MethodInfo m4773_MI;
void t1966_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1966__CustomAttributeCache = {
2,
NULL,
&t1966_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1966_1_0_0;
struct t1966;
extern CustomAttributesCache t1966__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1966_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1966_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IFormatterConverter", "System.Runtime.Serialization", t1966_MIs, NULL, NULL, NULL, &t1966_TI, NULL, &t1966__CustomAttributeCache, &t1966_0_0_0, &t1966_1_0_0, &t1966_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Serialization.IObjectReference
extern TypeInfo t2181_TI;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t2181_m12048_ParameterInfos[] = 
{
	{"context", 0, 134222816, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m12048_MI = 
{
	"GetRealObject", NULL, &t2181_TI, &t9_0_0_0, RuntimeInvoker_t9_t1094, t2181_m12048_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 4174, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2181_MIs[] =
{
	&m12048_MI,
	NULL
};
void t2181_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2181__CustomAttributeCache = {
1,
NULL,
&t2181_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2181_1_0_0;
struct t2181;
extern CustomAttributesCache t2181__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2181_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2181_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IObjectReference", "System.Runtime.Serialization", t2181_MIs, NULL, NULL, NULL, &t2181_TI, NULL, &t2181__CustomAttributeCache, &t2181_0_0_0, &t2181_1_0_0, &t2181_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Serialization.ISerializationSurrogate
extern TypeInfo t1898_TI;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1898_m12054_ParameterInfos[] = 
{
	{"obj", 0, 134222817, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"info", 1, 134222818, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 2, 134222819, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m12054_MI = 
{
	"GetObjectData", NULL, &t1898_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t1094, t1898_m12054_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 3, false, false, 4175, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
extern Il2CppType t1895_0_0_0;
static ParameterInfo t1898_m12058_ParameterInfos[] = 
{
	{"obj", 0, 134222820, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"info", 1, 134222821, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 2, 134222822, &EmptyCustomAttributesCache, &t1094_0_0_0},
	{"selector", 3, 134222823, &EmptyCustomAttributesCache, &t1895_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t1094_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12058_MI = 
{
	"SetObjectData", NULL, &t1898_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9_t1094_t9, t1898_m12058_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 4, false, false, 4176, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1898_MIs[] =
{
	&m12054_MI,
	&m12058_MI,
	NULL
};
void t1898_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1898__CustomAttributeCache = {
1,
NULL,
&t1898_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1898_0_0_0;
extern Il2CppType t1898_1_0_0;
struct t1898;
extern CustomAttributesCache t1898__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1898_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1898_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISerializationSurrogate", "System.Runtime.Serialization", t1898_MIs, NULL, NULL, NULL, &t1898_TI, NULL, &t1898__CustomAttributeCache, &t1898_0_0_0, &t1898_1_0_0, &t1898_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Serialization.ISurrogateSelector
extern TypeInfo t1895_TI;
extern Il2CppType t126_0_0_0;
extern Il2CppType t1094_0_0_0;
extern Il2CppType t1895_1_0_2;
extern Il2CppType t1895_1_0_0;
static ParameterInfo t1895_m12035_ParameterInfos[] = 
{
	{"type", 0, 134222824, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"context", 1, 134222825, &EmptyCustomAttributesCache, &t1094_0_0_0},
	{"selector", 2, 134222826, &EmptyCustomAttributesCache, &t1895_1_0_2},
};
extern Il2CppType t1898_0_0_0;
extern void* RuntimeInvoker_t9_t9_t1094_t2621 (MethodInfo* method, void* obj, void** args);
MethodInfo m12035_MI = 
{
	"GetSurrogate", NULL, &t1895_TI, &t1898_0_0_0, RuntimeInvoker_t9_t9_t1094_t2621, t1895_m12035_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 3, false, false, 4177, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1895_MIs[] =
{
	&m12035_MI,
	NULL
};
void t1895_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1895__CustomAttributeCache = {
1,
NULL,
&t1895_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
struct t1895;
extern CustomAttributesCache t1895__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1895_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1895_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISurrogateSelector", "System.Runtime.Serialization", t1895_MIs, NULL, NULL, NULL, &t1895_TI, NULL, &t1895__CustomAttributeCache, &t1895_0_0_0, &t1895_1_0_0, &t1895_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1951.h"
// Metadata Definition System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
extern TypeInfo t1951_TI;
#include "t1951MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10228_MI = 
{
	".ctor", (methodPointerType)&m10228, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4182, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1951_m10229_ParameterInfos[] = 
{
	{"o1", 0, 134222829, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"o2", 1, 134222830, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10229_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m10229, &t1951_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1951_m10229_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 2, false, false, 4183, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1951_m10230_ParameterInfos[] = 
{
	{"o", 0, 134222831, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10230_MI = 
{
	"System.Collections.IHashCodeProvider.GetHashCode", (methodPointerType)&m10230, &t1951_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1951_m10230_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 1, false, false, 4184, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1951_MIs[] =
{
	&m10228_MI,
	&m10229_MI,
	&m10230_MI,
	NULL
};
extern MethodInfo m10229_MI;
extern MethodInfo m10230_MI;
static Il2CppMethodReference t1951_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10229_MI,
	&m10230_MI,
};
static bool t1951_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t1156_0_0_0;
extern Il2CppType t1162_0_0_0;
static const Il2CppType* t1951_ITIs[] = 
{
	&t1156_0_0_0,
	&t1162_0_0_0,
};
static Il2CppInterfaceOffsetPair t1951_IOs[] = 
{
	{ &t1156_0_0_0, 4},
	{ &t1162_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1951_0_0_0;
extern Il2CppType t1951_1_0_0;
extern TypeInfo t1947_TI;
extern Il2CppType t1947_0_0_0;
struct t1951;
const Il2CppTypeDefinitionMetadata t1951_DM = 
{
	&t1947_0_0_0, NULL, t1951_ITIs, t1951_IOs, &t9_0_0_0, t1951_VT, t1951_VTIGM, NULL};
TypeInfo t1951_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InstanceComparer", "", t1951_MIs, NULL, NULL, NULL, &t1951_TI, NULL, &EmptyCustomAttributesCache, &t1951_0_0_0, &t1951_1_0_0, &t1951_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1951), sizeof (t1951), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 6, 2, 2};
#include "t1947.h"
// Metadata Definition System.Runtime.Serialization.ObjectIDGenerator
#include "t1947MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10231_MI = 
{
	".ctor", (methodPointerType)&m10231, &t1947_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4178, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10232_MI = 
{
	".cctor", (methodPointerType)&m10232, &t1947_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4179, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t124_1_0_2;
static ParameterInfo t1947_m10233_ParameterInfos[] = 
{
	{"obj", 0, 134222827, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"firstTime", 1, 134222828, &EmptyCustomAttributesCache, &t124_1_0_2},
};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292_t9_t628 (MethodInfo* method, void* obj, void** args);
MethodInfo m10233_MI = 
{
	"GetId", (methodPointerType)&m10233, &t1947_TI, &t292_0_0_0, RuntimeInvoker_t292_t9_t628, t1947_m10233_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 4, 2, false, false, 4180, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10234_MI = 
{
	"get_NextId", (methodPointerType)&m10234, &t1947_TI, &t292_0_0_0, RuntimeInvoker_t292, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4181, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1947_MIs[] =
{
	&m10231_MI,
	&m10232_MI,
	&m10233_MI,
	&m10234_MI,
	NULL
};
extern Il2CppType t1149_0_0_1;
FieldInfo t1947_f0_FieldInfo = 
{
	"table", &t1149_0_0_1, &t1947_TI, offsetof(t1947, f0), &EmptyCustomAttributesCache};
extern Il2CppType t292_0_0_1;
FieldInfo t1947_f1_FieldInfo = 
{
	"current", &t292_0_0_1, &t1947_TI, offsetof(t1947, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1951_0_0_17;
FieldInfo t1947_f2_FieldInfo = 
{
	"comparer", &t1951_0_0_17, &t1947_TI, offsetof(t1947_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1947_FIs[] =
{
	&t1947_f0_FieldInfo,
	&t1947_f1_FieldInfo,
	&t1947_f2_FieldInfo,
	NULL
};
extern MethodInfo m10234_MI;
static PropertyInfo t1947____NextId_PropertyInfo = 
{
	&t1947_TI, "NextId", &m10234_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1947_PIs[] =
{
	&t1947____NextId_PropertyInfo,
	NULL
};
static const Il2CppType* t1947_TI__nestedTypes[1] =
{
	&t1951_0_0_0,
};
extern MethodInfo m10233_MI;
static Il2CppMethodReference t1947_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10233_MI,
};
static bool t1947_VTIGM[] =
{
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
void t1947_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7821(tmp, il2cpp_codegen_string_new_wrapper("Serialization format not compatible with.NET"), &m7821_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1947__CustomAttributeCache = {
2,
NULL,
&t1947_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1947_1_0_0;
struct t1947;
extern CustomAttributesCache t1947__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1947_DM = 
{
	NULL, t1947_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t1947_VT, t1947_VTIGM, NULL};
TypeInfo t1947_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectIDGenerator", "System.Runtime.Serialization", t1947_MIs, t1947_PIs, t1947_FIs, NULL, &t1947_TI, NULL, &t1947__CustomAttributeCache, &t1947_0_0_0, &t1947_1_0_0, &t1947_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1947), sizeof (t1947), 0, -1, sizeof(t1947_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 4, 1, 3, 0, 1, 5, 0, 0};
#include "t1940.h"
// Metadata Definition System.Runtime.Serialization.ObjectManager
extern TypeInfo t1940_TI;
#include "t1940MD.h"
extern Il2CppType t1895_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1940_m10235_ParameterInfos[] = 
{
	{"selector", 0, 134222832, &EmptyCustomAttributesCache, &t1895_0_0_0},
	{"context", 1, 134222833, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10235_MI = 
{
	".ctor", (methodPointerType)&m10235, &t1940_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1940_m10235_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4185, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10236_MI = 
{
	"DoFixups", (methodPointerType)&m10236, &t1940_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 4, 0, false, false, 4186, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
static ParameterInfo t1940_m10237_ParameterInfos[] = 
{
	{"objectID", 0, 134222834, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t1952_0_0_0;
extern void* RuntimeInvoker_t9_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10237_MI = 
{
	"GetObjectRecord", (methodPointerType)&m10237, &t1940_TI, &t1952_0_0_0, RuntimeInvoker_t9_t292, t1940_m10237_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4187, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
static ParameterInfo t1940_m10238_ParameterInfos[] = 
{
	{"objectID", 0, 134222835, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10238_MI = 
{
	"GetObject", (methodPointerType)&m10238, &t1940_TI, &t9_0_0_0, RuntimeInvoker_t9_t292, t1940_m10238_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 1, false, false, 4188, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10239_MI = 
{
	"RaiseDeserializationEvent", (methodPointerType)&m10239, &t1940_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 4189, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1940_m10240_ParameterInfos[] = 
{
	{"obj", 0, 134222836, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10240_MI = 
{
	"RaiseOnDeserializingEvent", (methodPointerType)&m10240, &t1940_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1940_m10240_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4190, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1940_m10241_ParameterInfos[] = 
{
	{"obj", 0, 134222837, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10241_MI = 
{
	"RaiseOnDeserializedEvent", (methodPointerType)&m10241, &t1940_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1940_m10241_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4191, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1953_0_0_0;
extern Il2CppType t1953_0_0_0;
static ParameterInfo t1940_m10242_ParameterInfos[] = 
{
	{"record", 0, 134222838, &EmptyCustomAttributesCache, &t1953_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10242_MI = 
{
	"AddFixup", (methodPointerType)&m10242, &t1940_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1940_m10242_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4192, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t292_0_0_0;
static ParameterInfo t1940_m10243_ParameterInfos[] = 
{
	{"arrayToBeFixed", 0, 134222839, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"index", 1, 134222840, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"objectRequired", 2, 134222841, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292_t125_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10243_MI = 
{
	"RecordArrayElementFixup", (methodPointerType)&m10243, &t1940_TI, &t122_0_0_0, RuntimeInvoker_t122_t292_t125_t292, t1940_m10243_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 3, false, false, 4193, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern Il2CppType t1088_0_0_0;
extern Il2CppType t292_0_0_0;
static ParameterInfo t1940_m10244_ParameterInfos[] = 
{
	{"arrayToBeFixed", 0, 134222842, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"indices", 1, 134222843, &EmptyCustomAttributesCache, &t1088_0_0_0},
	{"objectRequired", 2, 134222844, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292_t9_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10244_MI = 
{
	"RecordArrayElementFixup", (methodPointerType)&m10244, &t1940_TI, &t122_0_0_0, RuntimeInvoker_t122_t292_t9_t292, t1940_m10244_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 3, false, false, 4194, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t292_0_0_0;
static ParameterInfo t1940_m10245_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222845, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"memberName", 1, 134222846, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"objectRequired", 2, 134222847, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292_t9_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10245_MI = 
{
	"RecordDelayedFixup", (methodPointerType)&m10245, &t1940_TI, &t122_0_0_0, RuntimeInvoker_t122_t292_t9_t292, t1940_m10245_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 3, false, false, 4195, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
extern Il2CppType t553_0_0_0;
extern Il2CppType t292_0_0_0;
static ParameterInfo t1940_m10246_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222848, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"member", 1, 134222849, &EmptyCustomAttributesCache, &t553_0_0_0},
	{"objectRequired", 2, 134222850, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t292_t9_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10246_MI = 
{
	"RecordFixup", (methodPointerType)&m10246, &t1940_TI, &t122_0_0_0, RuntimeInvoker_t122_t292_t9_t292, t1940_m10246_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 3, false, false, 4196, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1952_0_0_0;
extern Il2CppType t1952_0_0_0;
static ParameterInfo t1940_m10247_ParameterInfos[] = 
{
	{"obj", 0, 134222851, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"record", 1, 134222852, &EmptyCustomAttributesCache, &t1952_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10247_MI = 
{
	"RegisterObjectInternal", (methodPointerType)&m10247, &t1940_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1940_m10247_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4197, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t1093_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t553_0_0_0;
extern Il2CppType t1088_0_0_0;
static ParameterInfo t1940_m10248_ParameterInfos[] = 
{
	{"obj", 0, 134222853, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"objectID", 1, 134222854, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"info", 2, 134222855, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"idOfContainingObj", 3, 134222856, &EmptyCustomAttributesCache, &t292_0_0_0},
	{"member", 4, 134222857, &EmptyCustomAttributesCache, &t553_0_0_0},
	{"arrayIndex", 5, 134222858, &EmptyCustomAttributesCache, &t1088_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t292_t9_t292_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10248_MI = 
{
	"RegisterObject", (methodPointerType)&m10248, &t1940_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t292_t9_t292_t9_t9, t1940_m10248_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 6, false, false, 4198, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1940_MIs[] =
{
	&m10235_MI,
	&m10236_MI,
	&m10237_MI,
	&m10238_MI,
	&m10239_MI,
	&m10240_MI,
	&m10241_MI,
	&m10242_MI,
	&m10243_MI,
	&m10244_MI,
	&m10245_MI,
	&m10246_MI,
	&m10247_MI,
	&m10248_MI,
	NULL
};
extern Il2CppType t1952_0_0_1;
FieldInfo t1940_f0_FieldInfo = 
{
	"_objectRecordChain", &t1952_0_0_1, &t1940_TI, offsetof(t1940, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1952_0_0_1;
FieldInfo t1940_f1_FieldInfo = 
{
	"_lastObjectRecord", &t1952_0_0_1, &t1940_TI, offsetof(t1940, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1161_0_0_1;
FieldInfo t1940_f2_FieldInfo = 
{
	"_deserializedRecords", &t1161_0_0_1, &t1940_TI, offsetof(t1940, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1161_0_0_1;
FieldInfo t1940_f3_FieldInfo = 
{
	"_onDeserializedCallbackRecords", &t1161_0_0_1, &t1940_TI, offsetof(t1940, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_1;
FieldInfo t1940_f4_FieldInfo = 
{
	"_objectRecords", &t1149_0_0_1, &t1940_TI, offsetof(t1940, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1940_f5_FieldInfo = 
{
	"_finalFixup", &t124_0_0_1, &t1940_TI, offsetof(t1940, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1895_0_0_1;
FieldInfo t1940_f6_FieldInfo = 
{
	"_selector", &t1895_0_0_1, &t1940_TI, offsetof(t1940, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1094_0_0_1;
FieldInfo t1940_f7_FieldInfo = 
{
	"_context", &t1094_0_0_1, &t1940_TI, offsetof(t1940, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1940_f8_FieldInfo = 
{
	"_registeredObjectsCount", &t125_0_0_1, &t1940_TI, offsetof(t1940, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1940_FIs[] =
{
	&t1940_f0_FieldInfo,
	&t1940_f1_FieldInfo,
	&t1940_f2_FieldInfo,
	&t1940_f3_FieldInfo,
	&t1940_f4_FieldInfo,
	&t1940_f5_FieldInfo,
	&t1940_f6_FieldInfo,
	&t1940_f7_FieldInfo,
	&t1940_f8_FieldInfo,
	NULL
};
extern MethodInfo m10236_MI;
extern MethodInfo m10238_MI;
extern MethodInfo m10239_MI;
extern MethodInfo m10243_MI;
extern MethodInfo m10244_MI;
extern MethodInfo m10245_MI;
extern MethodInfo m10246_MI;
static Il2CppMethodReference t1940_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10236_MI,
	&m10238_MI,
	&m10239_MI,
	&m10243_MI,
	&m10244_MI,
	&m10245_MI,
	&m10246_MI,
};
static bool t1940_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
void t1940_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1940__CustomAttributeCache = {
1,
NULL,
&t1940_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1940_0_0_0;
extern Il2CppType t1940_1_0_0;
struct t1940;
extern CustomAttributesCache t1940__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1940_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1940_VT, t1940_VTIGM, NULL};
TypeInfo t1940_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectManager", "System.Runtime.Serialization", t1940_MIs, NULL, t1940_FIs, NULL, &t1940_TI, NULL, &t1940__CustomAttributeCache, &t1940_0_0_0, &t1940_1_0_0, &t1940_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1940), sizeof (t1940), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 14, 0, 9, 0, 0, 11, 0, 0};
#include "t1953.h"
// Metadata Definition System.Runtime.Serialization.BaseFixupRecord
extern TypeInfo t1953_TI;
#include "t1953MD.h"
extern Il2CppType t1952_0_0_0;
extern Il2CppType t1952_0_0_0;
static ParameterInfo t1953_m10249_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222859, &EmptyCustomAttributesCache, &t1952_0_0_0},
	{"objectRequired", 1, 134222860, &EmptyCustomAttributesCache, &t1952_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10249_MI = 
{
	".ctor", (methodPointerType)&m10249, &t1953_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1953_m10249_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4199, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1940_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1953_m10250_ParameterInfos[] = 
{
	{"manager", 0, 134222861, &EmptyCustomAttributesCache, &t1940_0_0_0},
	{"strict", 1, 134222862, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10250_MI = 
{
	"DoFixup", (methodPointerType)&m10250, &t1953_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1953_m10250_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4200, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1940_0_0_0;
static ParameterInfo t1953_m12057_ParameterInfos[] = 
{
	{"manager", 0, 134222863, &EmptyCustomAttributesCache, &t1940_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12057_MI = 
{
	"FixupImpl", NULL, &t1953_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1953_m12057_ParameterInfos, &EmptyCustomAttributesCache, 1476, 0, 4, 1, false, false, 4201, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1953_MIs[] =
{
	&m10249_MI,
	&m10250_MI,
	&m12057_MI,
	NULL
};
extern Il2CppType t1952_0_0_5;
FieldInfo t1953_f0_FieldInfo = 
{
	"ObjectToBeFixed", &t1952_0_0_5, &t1953_TI, offsetof(t1953, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1952_0_0_5;
FieldInfo t1953_f1_FieldInfo = 
{
	"ObjectRequired", &t1952_0_0_5, &t1953_TI, offsetof(t1953, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1953_0_0_6;
FieldInfo t1953_f2_FieldInfo = 
{
	"NextSameContainer", &t1953_0_0_6, &t1953_TI, offsetof(t1953, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1953_0_0_6;
FieldInfo t1953_f3_FieldInfo = 
{
	"NextSameRequired", &t1953_0_0_6, &t1953_TI, offsetof(t1953, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1953_FIs[] =
{
	&t1953_f0_FieldInfo,
	&t1953_f1_FieldInfo,
	&t1953_f2_FieldInfo,
	&t1953_f3_FieldInfo,
	NULL
};
static Il2CppMethodReference t1953_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t1953_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1953_1_0_0;
struct t1953;
const Il2CppTypeDefinitionMetadata t1953_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1953_VT, t1953_VTIGM, NULL};
TypeInfo t1953_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BaseFixupRecord", "System.Runtime.Serialization", t1953_MIs, NULL, t1953_FIs, NULL, &t1953_TI, NULL, &EmptyCustomAttributesCache, &t1953_0_0_0, &t1953_1_0_0, &t1953_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1953), sizeof (t1953), 0, -1, 0, 0, -1, 1048704, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 4, 0, 0, 5, 0, 0};
#include "t1954.h"
// Metadata Definition System.Runtime.Serialization.ArrayFixupRecord
extern TypeInfo t1954_TI;
#include "t1954MD.h"
extern Il2CppType t1952_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1952_0_0_0;
static ParameterInfo t1954_m10251_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222864, &EmptyCustomAttributesCache, &t1952_0_0_0},
	{"index", 1, 134222865, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"objectRequired", 2, 134222866, &EmptyCustomAttributesCache, &t1952_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10251_MI = 
{
	".ctor", (methodPointerType)&m10251, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t9, t1954_m10251_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4202, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1940_0_0_0;
static ParameterInfo t1954_m10252_ParameterInfos[] = 
{
	{"manager", 0, 134222867, &EmptyCustomAttributesCache, &t1940_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10252_MI = 
{
	"FixupImpl", (methodPointerType)&m10252, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1954_m10252_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 4, 1, false, false, 4203, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1954_MIs[] =
{
	&m10251_MI,
	&m10252_MI,
	NULL
};
extern Il2CppType t125_0_0_1;
FieldInfo t1954_f4_FieldInfo = 
{
	"_index", &t125_0_0_1, &t1954_TI, offsetof(t1954, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1954_FIs[] =
{
	&t1954_f4_FieldInfo,
	NULL
};
extern MethodInfo m10252_MI;
static Il2CppMethodReference t1954_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10252_MI,
};
static bool t1954_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1954_0_0_0;
extern Il2CppType t1954_1_0_0;
struct t1954;
const Il2CppTypeDefinitionMetadata t1954_DM = 
{
	NULL, NULL, NULL, NULL, &t1953_0_0_0, t1954_VT, t1954_VTIGM, NULL};
TypeInfo t1954_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ArrayFixupRecord", "System.Runtime.Serialization", t1954_MIs, NULL, t1954_FIs, NULL, &t1954_TI, NULL, &EmptyCustomAttributesCache, &t1954_0_0_0, &t1954_1_0_0, &t1954_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1954), sizeof (t1954), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#include "t1955.h"
// Metadata Definition System.Runtime.Serialization.MultiArrayFixupRecord
extern TypeInfo t1955_TI;
#include "t1955MD.h"
extern Il2CppType t1952_0_0_0;
extern Il2CppType t1088_0_0_0;
extern Il2CppType t1952_0_0_0;
static ParameterInfo t1955_m10253_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222868, &EmptyCustomAttributesCache, &t1952_0_0_0},
	{"indices", 1, 134222869, &EmptyCustomAttributesCache, &t1088_0_0_0},
	{"objectRequired", 2, 134222870, &EmptyCustomAttributesCache, &t1952_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10253_MI = 
{
	".ctor", (methodPointerType)&m10253, &t1955_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1955_m10253_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4204, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1940_0_0_0;
static ParameterInfo t1955_m10254_ParameterInfos[] = 
{
	{"manager", 0, 134222871, &EmptyCustomAttributesCache, &t1940_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10254_MI = 
{
	"FixupImpl", (methodPointerType)&m10254, &t1955_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1955_m10254_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 4, 1, false, false, 4205, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1955_MIs[] =
{
	&m10253_MI,
	&m10254_MI,
	NULL
};
extern Il2CppType t1088_0_0_1;
FieldInfo t1955_f4_FieldInfo = 
{
	"_indices", &t1088_0_0_1, &t1955_TI, offsetof(t1955, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1955_FIs[] =
{
	&t1955_f4_FieldInfo,
	NULL
};
extern MethodInfo m10254_MI;
static Il2CppMethodReference t1955_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10254_MI,
};
static bool t1955_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1955_0_0_0;
extern Il2CppType t1955_1_0_0;
struct t1955;
const Il2CppTypeDefinitionMetadata t1955_DM = 
{
	NULL, NULL, NULL, NULL, &t1953_0_0_0, t1955_VT, t1955_VTIGM, NULL};
TypeInfo t1955_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MultiArrayFixupRecord", "System.Runtime.Serialization", t1955_MIs, NULL, t1955_FIs, NULL, &t1955_TI, NULL, &EmptyCustomAttributesCache, &t1955_0_0_0, &t1955_1_0_0, &t1955_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1955), sizeof (t1955), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#include "t1956.h"
// Metadata Definition System.Runtime.Serialization.FixupRecord
extern TypeInfo t1956_TI;
#include "t1956MD.h"
extern Il2CppType t1952_0_0_0;
extern Il2CppType t553_0_0_0;
extern Il2CppType t1952_0_0_0;
static ParameterInfo t1956_m10255_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222872, &EmptyCustomAttributesCache, &t1952_0_0_0},
	{"member", 1, 134222873, &EmptyCustomAttributesCache, &t553_0_0_0},
	{"objectRequired", 2, 134222874, &EmptyCustomAttributesCache, &t1952_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10255_MI = 
{
	".ctor", (methodPointerType)&m10255, &t1956_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1956_m10255_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4206, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1940_0_0_0;
static ParameterInfo t1956_m10256_ParameterInfos[] = 
{
	{"manager", 0, 134222875, &EmptyCustomAttributesCache, &t1940_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10256_MI = 
{
	"FixupImpl", (methodPointerType)&m10256, &t1956_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1956_m10256_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 4, 1, false, false, 4207, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1956_MIs[] =
{
	&m10255_MI,
	&m10256_MI,
	NULL
};
extern Il2CppType t553_0_0_6;
FieldInfo t1956_f4_FieldInfo = 
{
	"_member", &t553_0_0_6, &t1956_TI, offsetof(t1956, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1956_FIs[] =
{
	&t1956_f4_FieldInfo,
	NULL
};
extern MethodInfo m10256_MI;
static Il2CppMethodReference t1956_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10256_MI,
};
static bool t1956_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1956_0_0_0;
extern Il2CppType t1956_1_0_0;
struct t1956;
const Il2CppTypeDefinitionMetadata t1956_DM = 
{
	NULL, NULL, NULL, NULL, &t1953_0_0_0, t1956_VT, t1956_VTIGM, NULL};
TypeInfo t1956_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FixupRecord", "System.Runtime.Serialization", t1956_MIs, NULL, t1956_FIs, NULL, &t1956_TI, NULL, &EmptyCustomAttributesCache, &t1956_0_0_0, &t1956_1_0_0, &t1956_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1956), sizeof (t1956), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#include "t1957.h"
// Metadata Definition System.Runtime.Serialization.DelayedFixupRecord
extern TypeInfo t1957_TI;
#include "t1957MD.h"
extern Il2CppType t1952_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1952_0_0_0;
static ParameterInfo t1957_m10257_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222876, &EmptyCustomAttributesCache, &t1952_0_0_0},
	{"memberName", 1, 134222877, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"objectRequired", 2, 134222878, &EmptyCustomAttributesCache, &t1952_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10257_MI = 
{
	".ctor", (methodPointerType)&m10257, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1957_m10257_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4208, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1940_0_0_0;
static ParameterInfo t1957_m10258_ParameterInfos[] = 
{
	{"manager", 0, 134222879, &EmptyCustomAttributesCache, &t1940_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10258_MI = 
{
	"FixupImpl", (methodPointerType)&m10258, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1957_m10258_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 4, 1, false, false, 4209, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1957_MIs[] =
{
	&m10257_MI,
	&m10258_MI,
	NULL
};
extern Il2CppType t2_0_0_6;
FieldInfo t1957_f4_FieldInfo = 
{
	"_memberName", &t2_0_0_6, &t1957_TI, offsetof(t1957, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1957_FIs[] =
{
	&t1957_f4_FieldInfo,
	NULL
};
extern MethodInfo m10258_MI;
static Il2CppMethodReference t1957_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10258_MI,
};
static bool t1957_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1957_0_0_0;
extern Il2CppType t1957_1_0_0;
struct t1957;
const Il2CppTypeDefinitionMetadata t1957_DM = 
{
	NULL, NULL, NULL, NULL, &t1953_0_0_0, t1957_VT, t1957_VTIGM, NULL};
TypeInfo t1957_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DelayedFixupRecord", "System.Runtime.Serialization", t1957_MIs, NULL, t1957_FIs, NULL, &t1957_TI, NULL, &EmptyCustomAttributesCache, &t1957_0_0_0, &t1957_1_0_0, &t1957_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1957), sizeof (t1957), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#include "t1958.h"
// Metadata Definition System.Runtime.Serialization.ObjectRecordStatus
extern TypeInfo t1958_TI;
#include "t1958MD.h"
static MethodInfo* t1958_MIs[] =
{
	NULL
};
extern Il2CppType t568_0_0_1542;
FieldInfo t1958_f1_FieldInfo = 
{
	"value__", &t568_0_0_1542, &t1958_TI, offsetof(t1958, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1958_0_0_32854;
FieldInfo t1958_f2_FieldInfo = 
{
	"Unregistered", &t1958_0_0_32854, &t1958_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1958_0_0_32854;
FieldInfo t1958_f3_FieldInfo = 
{
	"ReferenceUnsolved", &t1958_0_0_32854, &t1958_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1958_0_0_32854;
FieldInfo t1958_f4_FieldInfo = 
{
	"ReferenceSolvingDelayed", &t1958_0_0_32854, &t1958_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1958_0_0_32854;
FieldInfo t1958_f5_FieldInfo = 
{
	"ReferenceSolved", &t1958_0_0_32854, &t1958_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1958_FIs[] =
{
	&t1958_f1_FieldInfo,
	&t1958_f2_FieldInfo,
	&t1958_f3_FieldInfo,
	&t1958_f4_FieldInfo,
	&t1958_f5_FieldInfo,
	NULL
};
static const uint8_t t1958_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1958_f2_DefaultValue = 
{
	&t1958_f2_FieldInfo, { (char*)&t1958_f2_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1958_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1958_f3_DefaultValue = 
{
	&t1958_f3_FieldInfo, { (char*)&t1958_f3_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1958_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1958_f4_DefaultValue = 
{
	&t1958_f4_FieldInfo, { (char*)&t1958_f4_DefaultValueData, &t568_0_0_0 }};
static const uint8_t t1958_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1958_f5_DefaultValue = 
{
	&t1958_f5_FieldInfo, { (char*)&t1958_f5_DefaultValueData, &t568_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1958_FDVs[] = 
{
	&t1958_f2_DefaultValue,
	&t1958_f3_DefaultValue,
	&t1958_f4_DefaultValue,
	&t1958_f5_DefaultValue,
	NULL
};
static Il2CppMethodReference t1958_VT[] =
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
static bool t1958_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1958_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1958_0_0_0;
extern Il2CppType t1958_1_0_0;
const Il2CppTypeDefinitionMetadata t1958_DM = 
{
	NULL, NULL, NULL, t1958_IOs, &t8_0_0_0, t1958_VT, t1958_VTIGM, NULL};
TypeInfo t1958_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectRecordStatus", "System.Runtime.Serialization", t1958_MIs, NULL, t1958_FIs, NULL, &t568_TI, NULL, &EmptyCustomAttributesCache, &t1958_0_0_0, &t1958_1_0_0, &t1958_DM, NULL, NULL, NULL, t1958_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1958)+ sizeof (Il2CppObject), sizeof (t1958)+ sizeof (Il2CppObject), 0, sizeof(uint8_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t1952.h"
// Metadata Definition System.Runtime.Serialization.ObjectRecord
extern TypeInfo t1952_TI;
#include "t1952MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10259_MI = 
{
	".ctor", (methodPointerType)&m10259, &t1952_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4210, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1940_0_0_0;
extern Il2CppType t553_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1952_m10260_ParameterInfos[] = 
{
	{"manager", 0, 134222880, &EmptyCustomAttributesCache, &t1940_0_0_0},
	{"member", 1, 134222881, &EmptyCustomAttributesCache, &t553_0_0_0},
	{"value", 2, 134222882, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10260_MI = 
{
	"SetMemberValue", (methodPointerType)&m10260, &t1952_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1952_m10260_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4211, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1940_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1088_0_0_0;
static ParameterInfo t1952_m10261_ParameterInfos[] = 
{
	{"manager", 0, 134222883, &EmptyCustomAttributesCache, &t1940_0_0_0},
	{"value", 1, 134222884, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"indices", 2, 134222885, &EmptyCustomAttributesCache, &t1088_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10261_MI = 
{
	"SetArrayValue", (methodPointerType)&m10261, &t1952_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1952_m10261_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4212, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1940_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1952_m10262_ParameterInfos[] = 
{
	{"manager", 0, 134222886, &EmptyCustomAttributesCache, &t1940_0_0_0},
	{"memberName", 1, 134222887, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 2, 134222888, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10262_MI = 
{
	"SetMemberValue", (methodPointerType)&m10262, &t1952_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1952_m10262_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4213, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10263_MI = 
{
	"get_IsInstanceReady", (methodPointerType)&m10263, &t1952_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4214, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10264_MI = 
{
	"get_IsUnsolvedObjectReference", (methodPointerType)&m10264, &t1952_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4215, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10265_MI = 
{
	"get_IsRegistered", (methodPointerType)&m10265, &t1952_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4216, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t1940_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1952_m10266_ParameterInfos[] = 
{
	{"asContainer", 0, 134222889, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"manager", 1, 134222890, &EmptyCustomAttributesCache, &t1940_0_0_0},
	{"strict", 2, 134222891, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t186_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10266_MI = 
{
	"DoFixups", (methodPointerType)&m10266, &t1952_TI, &t124_0_0_0, RuntimeInvoker_t124_t186_t9_t186, t1952_m10266_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4217, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1953_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1952_m10267_ParameterInfos[] = 
{
	{"fixupToRemove", 0, 134222892, &EmptyCustomAttributesCache, &t1953_0_0_0},
	{"asContainer", 1, 134222893, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10267_MI = 
{
	"RemoveFixup", (methodPointerType)&m10267, &t1952_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1952_m10267_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4218, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1953_0_0_0;
extern Il2CppType t1953_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1952_m10268_ParameterInfos[] = 
{
	{"fixup", 0, 134222894, &EmptyCustomAttributesCache, &t1953_0_0_0},
	{"prevFixup", 1, 134222895, &EmptyCustomAttributesCache, &t1953_0_0_0},
	{"asContainer", 2, 134222896, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10268_MI = 
{
	"UnchainFixup", (methodPointerType)&m10268, &t1952_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1952_m10268_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4219, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1953_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1952_m10269_ParameterInfos[] = 
{
	{"fixup", 0, 134222897, &EmptyCustomAttributesCache, &t1953_0_0_0},
	{"asContainer", 1, 134222898, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10269_MI = 
{
	"ChainFixup", (methodPointerType)&m10269, &t1952_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1952_m10269_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4220, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1940_0_0_0;
extern Il2CppType t1895_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1952_m10270_ParameterInfos[] = 
{
	{"manager", 0, 134222899, &EmptyCustomAttributesCache, &t1940_0_0_0},
	{"selector", 1, 134222900, &EmptyCustomAttributesCache, &t1895_0_0_0},
	{"context", 2, 134222901, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10270_MI = 
{
	"LoadData", (methodPointerType)&m10270, &t1952_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9_t1094, t1952_m10270_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4221, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10271_MI = 
{
	"get_HasPendingFixups", (methodPointerType)&m10271, &t1952_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4222, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1952_MIs[] =
{
	&m10259_MI,
	&m10260_MI,
	&m10261_MI,
	&m10262_MI,
	&m10263_MI,
	&m10264_MI,
	&m10265_MI,
	&m10266_MI,
	&m10267_MI,
	&m10268_MI,
	&m10269_MI,
	&m10270_MI,
	&m10271_MI,
	NULL
};
extern Il2CppType t1958_0_0_6;
FieldInfo t1952_f0_FieldInfo = 
{
	"Status", &t1958_0_0_6, &t1952_TI, offsetof(t1952, f0), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_6;
FieldInfo t1952_f1_FieldInfo = 
{
	"OriginalObject", &t9_0_0_6, &t1952_TI, offsetof(t1952, f1), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_6;
FieldInfo t1952_f2_FieldInfo = 
{
	"ObjectInstance", &t9_0_0_6, &t1952_TI, offsetof(t1952, f2), &EmptyCustomAttributesCache};
extern Il2CppType t292_0_0_6;
FieldInfo t1952_f3_FieldInfo = 
{
	"ObjectID", &t292_0_0_6, &t1952_TI, offsetof(t1952, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1093_0_0_6;
FieldInfo t1952_f4_FieldInfo = 
{
	"Info", &t1093_0_0_6, &t1952_TI, offsetof(t1952, f4), &EmptyCustomAttributesCache};
extern Il2CppType t292_0_0_6;
FieldInfo t1952_f5_FieldInfo = 
{
	"IdOfContainingObj", &t292_0_0_6, &t1952_TI, offsetof(t1952, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1898_0_0_6;
FieldInfo t1952_f6_FieldInfo = 
{
	"Surrogate", &t1898_0_0_6, &t1952_TI, offsetof(t1952, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1895_0_0_6;
FieldInfo t1952_f7_FieldInfo = 
{
	"SurrogateSelector", &t1895_0_0_6, &t1952_TI, offsetof(t1952, f7), &EmptyCustomAttributesCache};
extern Il2CppType t553_0_0_6;
FieldInfo t1952_f8_FieldInfo = 
{
	"Member", &t553_0_0_6, &t1952_TI, offsetof(t1952, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1088_0_0_6;
FieldInfo t1952_f9_FieldInfo = 
{
	"ArrayIndex", &t1088_0_0_6, &t1952_TI, offsetof(t1952, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1953_0_0_6;
FieldInfo t1952_f10_FieldInfo = 
{
	"FixupChainAsContainer", &t1953_0_0_6, &t1952_TI, offsetof(t1952, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1953_0_0_6;
FieldInfo t1952_f11_FieldInfo = 
{
	"FixupChainAsRequired", &t1953_0_0_6, &t1952_TI, offsetof(t1952, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1952_0_0_6;
FieldInfo t1952_f12_FieldInfo = 
{
	"Next", &t1952_0_0_6, &t1952_TI, offsetof(t1952, f12), &EmptyCustomAttributesCache};
static FieldInfo* t1952_FIs[] =
{
	&t1952_f0_FieldInfo,
	&t1952_f1_FieldInfo,
	&t1952_f2_FieldInfo,
	&t1952_f3_FieldInfo,
	&t1952_f4_FieldInfo,
	&t1952_f5_FieldInfo,
	&t1952_f6_FieldInfo,
	&t1952_f7_FieldInfo,
	&t1952_f8_FieldInfo,
	&t1952_f9_FieldInfo,
	&t1952_f10_FieldInfo,
	&t1952_f11_FieldInfo,
	&t1952_f12_FieldInfo,
	NULL
};
extern MethodInfo m10263_MI;
static PropertyInfo t1952____IsInstanceReady_PropertyInfo = 
{
	&t1952_TI, "IsInstanceReady", &m10263_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10264_MI;
static PropertyInfo t1952____IsUnsolvedObjectReference_PropertyInfo = 
{
	&t1952_TI, "IsUnsolvedObjectReference", &m10264_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10265_MI;
static PropertyInfo t1952____IsRegistered_PropertyInfo = 
{
	&t1952_TI, "IsRegistered", &m10265_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10271_MI;
static PropertyInfo t1952____HasPendingFixups_PropertyInfo = 
{
	&t1952_TI, "HasPendingFixups", &m10271_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1952_PIs[] =
{
	&t1952____IsInstanceReady_PropertyInfo,
	&t1952____IsUnsolvedObjectReference_PropertyInfo,
	&t1952____IsRegistered_PropertyInfo,
	&t1952____HasPendingFixups_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1952_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1952_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1952_1_0_0;
struct t1952;
const Il2CppTypeDefinitionMetadata t1952_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1952_VT, t1952_VTIGM, NULL};
TypeInfo t1952_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectRecord", "System.Runtime.Serialization", t1952_MIs, t1952_PIs, t1952_FIs, NULL, &t1952_TI, NULL, &EmptyCustomAttributesCache, &t1952_0_0_0, &t1952_1_0_0, &t1952_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1952), sizeof (t1952), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 13, 4, 13, 0, 0, 4, 0, 0};
#include "t1959.h"
// Metadata Definition System.Runtime.Serialization.OnDeserializedAttribute
extern TypeInfo t1959_TI;
#include "t1959MD.h"
static MethodInfo* t1959_MIs[] =
{
	NULL
};
extern MethodInfo m4475_MI;
extern MethodInfo m4469_MI;
static Il2CppMethodReference t1959_VT[] =
{
	&m4475_MI,
	&m646_MI,
	&m4469_MI,
	&m673_MI,
};
static bool t1959_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppType t947_0_0_0;
static Il2CppInterfaceOffsetPair t1959_IOs[] = 
{
	{ &t947_0_0_0, 4},
};
extern TypeInfo t1017_TI;
#include "t1017.h"
#include "t1017MD.h"
extern MethodInfo m4581_MI;
extern MethodInfo m4582_MI;
void t1959_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1017 * tmp;
		tmp = (t1017 *)il2cpp_codegen_object_new (&t1017_TI);
		m4581(tmp, 64, &m4581_MI);
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
CustomAttributesCache t1959__CustomAttributeCache = {
2,
NULL,
&t1959_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1959_0_0_0;
extern Il2CppType t1959_1_0_0;
extern Il2CppType t718_0_0_0;
struct t1959;
extern CustomAttributesCache t1959__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1959_DM = 
{
	NULL, NULL, NULL, t1959_IOs, &t718_0_0_0, t1959_VT, t1959_VTIGM, NULL};
TypeInfo t1959_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OnDeserializedAttribute", "System.Runtime.Serialization", t1959_MIs, NULL, NULL, NULL, &t1959_TI, NULL, &t1959__CustomAttributeCache, &t1959_0_0_0, &t1959_1_0_0, &t1959_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1959), sizeof (t1959), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#include "t1960.h"
// Metadata Definition System.Runtime.Serialization.OnDeserializingAttribute
extern TypeInfo t1960_TI;
#include "t1960MD.h"
static MethodInfo* t1960_MIs[] =
{
	NULL
};
static Il2CppMethodReference t1960_VT[] =
{
	&m4475_MI,
	&m646_MI,
	&m4469_MI,
	&m673_MI,
};
static bool t1960_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1960_IOs[] = 
{
	{ &t947_0_0_0, 4},
};
void t1960_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m4581(tmp, 64, &m4581_MI);
		m4582(tmp, false, &m4582_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1960__CustomAttributeCache = {
2,
NULL,
&t1960_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1960_0_0_0;
extern Il2CppType t1960_1_0_0;
struct t1960;
extern CustomAttributesCache t1960__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1960_DM = 
{
	NULL, NULL, NULL, t1960_IOs, &t718_0_0_0, t1960_VT, t1960_VTIGM, NULL};
TypeInfo t1960_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OnDeserializingAttribute", "System.Runtime.Serialization", t1960_MIs, NULL, NULL, NULL, &t1960_TI, NULL, &t1960__CustomAttributeCache, &t1960_0_0_0, &t1960_1_0_0, &t1960_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1960), sizeof (t1960), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#include "t1961.h"
// Metadata Definition System.Runtime.Serialization.OnSerializedAttribute
extern TypeInfo t1961_TI;
#include "t1961MD.h"
static MethodInfo* t1961_MIs[] =
{
	NULL
};
static Il2CppMethodReference t1961_VT[] =
{
	&m4475_MI,
	&m646_MI,
	&m4469_MI,
	&m673_MI,
};
static bool t1961_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1961_IOs[] = 
{
	{ &t947_0_0_0, 4},
};
void t1961_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1017 * tmp;
		tmp = (t1017 *)il2cpp_codegen_object_new (&t1017_TI);
		m4581(tmp, 64, &m4581_MI);
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
CustomAttributesCache t1961__CustomAttributeCache = {
2,
NULL,
&t1961_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1961_0_0_0;
extern Il2CppType t1961_1_0_0;
struct t1961;
extern CustomAttributesCache t1961__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1961_DM = 
{
	NULL, NULL, NULL, t1961_IOs, &t718_0_0_0, t1961_VT, t1961_VTIGM, NULL};
TypeInfo t1961_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OnSerializedAttribute", "System.Runtime.Serialization", t1961_MIs, NULL, NULL, NULL, &t1961_TI, NULL, &t1961__CustomAttributeCache, &t1961_0_0_0, &t1961_1_0_0, &t1961_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1961), sizeof (t1961), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#include "t1962.h"
// Metadata Definition System.Runtime.Serialization.OnSerializingAttribute
extern TypeInfo t1962_TI;
#include "t1962MD.h"
static MethodInfo* t1962_MIs[] =
{
	NULL
};
static Il2CppMethodReference t1962_VT[] =
{
	&m4475_MI,
	&m646_MI,
	&m4469_MI,
	&m673_MI,
};
static bool t1962_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1962_IOs[] = 
{
	{ &t947_0_0_0, 4},
};
void t1962_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1017 * tmp;
		tmp = (t1017 *)il2cpp_codegen_object_new (&t1017_TI);
		m4581(tmp, 64, &m4581_MI);
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
CustomAttributesCache t1962__CustomAttributeCache = {
2,
NULL,
&t1962_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1962_0_0_0;
extern Il2CppType t1962_1_0_0;
struct t1962;
extern CustomAttributesCache t1962__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1962_DM = 
{
	NULL, NULL, NULL, t1962_IOs, &t718_0_0_0, t1962_VT, t1962_VTIGM, NULL};
TypeInfo t1962_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OnSerializingAttribute", "System.Runtime.Serialization", t1962_MIs, NULL, NULL, NULL, &t1962_TI, NULL, &t1962__CustomAttributeCache, &t1962_0_0_0, &t1962_1_0_0, &t1962_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1962), sizeof (t1962), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#include "t1929.h"
// Metadata Definition System.Runtime.Serialization.SerializationBinder
extern TypeInfo t1929_TI;
#include "t1929MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10272_MI = 
{
	".ctor", (methodPointerType)&m10272, &t1929_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4223, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1929_m12049_ParameterInfos[] = 
{
	{"assemblyName", 0, 134222902, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"typeName", 1, 134222903, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12049_MI = 
{
	"BindToType", NULL, &t1929_TI, &t126_0_0_0, RuntimeInvoker_t9_t9_t9, t1929_m12049_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 2, false, false, 4224, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1929_MIs[] =
{
	&m10272_MI,
	&m12049_MI,
	NULL
};
static Il2CppMethodReference t1929_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t1929_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
void t1929_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1929__CustomAttributeCache = {
1,
NULL,
&t1929_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1929_0_0_0;
extern Il2CppType t1929_1_0_0;
struct t1929;
extern CustomAttributesCache t1929__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1929_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1929_VT, t1929_VTIGM, NULL};
TypeInfo t1929_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationBinder", "System.Runtime.Serialization", t1929_MIs, NULL, NULL, NULL, &t1929_TI, NULL, &t1929__CustomAttributeCache, &t1929_0_0_0, &t1929_1_0_0, &t1929_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1929), sizeof (t1929), 0, -1, 0, 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 5, 0, 0};
#include "t1963.h"
// Metadata Definition System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
extern TypeInfo t1963_TI;
#include "t1963MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t58_0_0_0;
extern Il2CppType t58_0_0_0;
static ParameterInfo t1963_m10273_ParameterInfos[] = 
{
	{"object", 0, 134222919, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"method", 1, 134222920, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m10273_MI = 
{
	".ctor", (methodPointerType)&m10273, &t1963_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t58, t1963_m10273_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 4236, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1963_m10274_ParameterInfos[] = 
{
	{"context", 0, 134222921, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10274_MI = 
{
	"Invoke", (methodPointerType)&m10274, &t1963_TI, &t122_0_0_0, RuntimeInvoker_t122_t1094, t1963_m10274_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 4237, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1094_0_0_0;
extern Il2CppType t463_0_0_0;
extern Il2CppType t463_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1963_m10275_ParameterInfos[] = 
{
	{"context", 0, 134222922, &EmptyCustomAttributesCache, &t1094_0_0_0},
	{"callback", 1, 134222923, &EmptyCustomAttributesCache, &t463_0_0_0},
	{"object", 2, 134222924, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t462_0_0_0;
extern void* RuntimeInvoker_t9_t1094_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10275_MI = 
{
	"BeginInvoke", (methodPointerType)&m10275, &t1963_TI, &t462_0_0_0, RuntimeInvoker_t9_t1094_t9_t9, t1963_m10275_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 4238, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t462_0_0_0;
extern Il2CppType t462_0_0_0;
static ParameterInfo t1963_m10276_ParameterInfos[] = 
{
	{"result", 0, 134222925, &EmptyCustomAttributesCache, &t462_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10276_MI = 
{
	"EndInvoke", (methodPointerType)&m10276, &t1963_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1963_m10276_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 4239, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1963_MIs[] =
{
	&m10273_MI,
	&m10274_MI,
	&m10275_MI,
	&m10276_MI,
	NULL
};
extern MethodInfo m2981_MI;
extern MethodInfo m2982_MI;
extern MethodInfo m2983_MI;
extern MethodInfo m2984_MI;
extern MethodInfo m2985_MI;
extern MethodInfo m2986_MI;
extern MethodInfo m2987_MI;
extern MethodInfo m10274_MI;
extern MethodInfo m10275_MI;
extern MethodInfo m10276_MI;
static Il2CppMethodReference t1963_VT[] =
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
	&m10274_MI,
	&m10275_MI,
	&m10276_MI,
};
static bool t1963_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
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
static Il2CppInterfaceOffsetPair t1963_IOs[] = 
{
	{ &t615_0_0_0, 4},
	{ &t616_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1963_0_0_0;
extern Il2CppType t1963_1_0_0;
extern Il2CppType t464_0_0_0;
extern TypeInfo t1964_TI;
extern Il2CppType t1964_0_0_0;
struct t1963;
const Il2CppTypeDefinitionMetadata t1963_DM = 
{
	&t1964_0_0_0, NULL, NULL, t1963_IOs, &t464_0_0_0, t1963_VT, t1963_VTIGM, NULL};
TypeInfo t1963_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CallbackHandler", "", t1963_MIs, NULL, NULL, NULL, &t1963_TI, NULL, &EmptyCustomAttributesCache, &t1963_0_0_0, &t1963_1_0_0, &t1963_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t1963, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1963), sizeof (t1963), 0, sizeof(methodPointerType), 0, 0, -1, 258, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1964.h"
// Metadata Definition System.Runtime.Serialization.SerializationCallbacks
#include "t1964MD.h"
extern Il2CppType t126_0_0_0;
static ParameterInfo t1964_m10277_ParameterInfos[] = 
{
	{"type", 0, 134222904, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10277_MI = 
{
	".ctor", (methodPointerType)&m10277, &t1964_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1964_m10277_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4225, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10278_MI = 
{
	".cctor", (methodPointerType)&m10278, &t1964_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4226, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10279_MI = 
{
	"get_HasSerializedCallbacks", (methodPointerType)&m10279, &t1964_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4227, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10280_MI = 
{
	"get_HasDeserializedCallbacks", (methodPointerType)&m10280, &t1964_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4228, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1964_m10281_ParameterInfos[] = 
{
	{"type", 0, 134222905, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"attr", 1, 134222906, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1161_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10281_MI = 
{
	"GetMethodsByAttribute", (methodPointerType)&m10281, &t1964_TI, &t1161_0_0_0, RuntimeInvoker_t9_t9_t9, t1964_m10281_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 4229, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1161_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1964_m10282_ParameterInfos[] = 
{
	{"list", 0, 134222907, &EmptyCustomAttributesCache, &t1161_0_0_0},
	{"target", 1, 134222908, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"context", 2, 134222909, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10282_MI = 
{
	"Invoke", (methodPointerType)&m10282, &t1964_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t1094, t1964_m10282_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4230, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1964_m10283_ParameterInfos[] = 
{
	{"target", 0, 134222910, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"contex", 1, 134222911, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10283_MI = 
{
	"RaiseOnSerializing", (methodPointerType)&m10283, &t1964_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1964_m10283_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4231, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1964_m10284_ParameterInfos[] = 
{
	{"target", 0, 134222912, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"contex", 1, 134222913, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10284_MI = 
{
	"RaiseOnSerialized", (methodPointerType)&m10284, &t1964_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1964_m10284_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4232, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1964_m10285_ParameterInfos[] = 
{
	{"target", 0, 134222914, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"contex", 1, 134222915, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10285_MI = 
{
	"RaiseOnDeserializing", (methodPointerType)&m10285, &t1964_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1964_m10285_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4233, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1964_m10286_ParameterInfos[] = 
{
	{"target", 0, 134222916, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"contex", 1, 134222917, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10286_MI = 
{
	"RaiseOnDeserialized", (methodPointerType)&m10286, &t1964_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1964_m10286_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4234, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1964_m10287_ParameterInfos[] = 
{
	{"t", 0, 134222918, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1964_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10287_MI = 
{
	"GetSerializationCallbacks", (methodPointerType)&m10287, &t1964_TI, &t1964_0_0_0, RuntimeInvoker_t9_t9, t1964_m10287_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4235, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1964_MIs[] =
{
	&m10277_MI,
	&m10278_MI,
	&m10279_MI,
	&m10280_MI,
	&m10281_MI,
	&m10282_MI,
	&m10283_MI,
	&m10284_MI,
	&m10285_MI,
	&m10286_MI,
	&m10287_MI,
	NULL
};
extern Il2CppType t1161_0_0_33;
FieldInfo t1964_f0_FieldInfo = 
{
	"onSerializingList", &t1161_0_0_33, &t1964_TI, offsetof(t1964, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1161_0_0_33;
FieldInfo t1964_f1_FieldInfo = 
{
	"onSerializedList", &t1161_0_0_33, &t1964_TI, offsetof(t1964, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1161_0_0_33;
FieldInfo t1964_f2_FieldInfo = 
{
	"onDeserializingList", &t1161_0_0_33, &t1964_TI, offsetof(t1964, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1161_0_0_33;
FieldInfo t1964_f3_FieldInfo = 
{
	"onDeserializedList", &t1161_0_0_33, &t1964_TI, offsetof(t1964, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_17;
FieldInfo t1964_f4_FieldInfo = 
{
	"cache", &t1149_0_0_17, &t1964_TI, offsetof(t1964_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_17;
FieldInfo t1964_f5_FieldInfo = 
{
	"cache_lock", &t9_0_0_17, &t1964_TI, offsetof(t1964_SFs, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1964_FIs[] =
{
	&t1964_f0_FieldInfo,
	&t1964_f1_FieldInfo,
	&t1964_f2_FieldInfo,
	&t1964_f3_FieldInfo,
	&t1964_f4_FieldInfo,
	&t1964_f5_FieldInfo,
	NULL
};
extern MethodInfo m10279_MI;
static PropertyInfo t1964____HasSerializedCallbacks_PropertyInfo = 
{
	&t1964_TI, "HasSerializedCallbacks", &m10279_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10280_MI;
static PropertyInfo t1964____HasDeserializedCallbacks_PropertyInfo = 
{
	&t1964_TI, "HasDeserializedCallbacks", &m10280_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1964_PIs[] =
{
	&t1964____HasSerializedCallbacks_PropertyInfo,
	&t1964____HasDeserializedCallbacks_PropertyInfo,
	NULL
};
static const Il2CppType* t1964_TI__nestedTypes[1] =
{
	&t1963_0_0_0,
};
static Il2CppMethodReference t1964_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1964_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1964_1_0_0;
struct t1964;
const Il2CppTypeDefinitionMetadata t1964_DM = 
{
	NULL, t1964_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t1964_VT, t1964_VTIGM, NULL};
TypeInfo t1964_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationCallbacks", "System.Runtime.Serialization", t1964_MIs, t1964_PIs, t1964_FIs, NULL, &t1964_TI, NULL, &EmptyCustomAttributesCache, &t1964_0_0_0, &t1964_1_0_0, &t1964_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1964), sizeof (t1964), 0, -1, sizeof(t1964_SFs), 0, -1, 1048832, 0, 0, false, false, false, false, false, false, false, false, true, false, 11, 2, 6, 0, 1, 4, 0, 0};
#include "t1965.h"
// Metadata Definition System.Runtime.Serialization.SerializationEntry
extern TypeInfo t1965_TI;
#include "t1965MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1965_m10288_ParameterInfos[] = 
{
	{"name", 0, 134222926, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"type", 1, 134222927, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"value", 2, 134222928, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10288_MI = 
{
	".ctor", (methodPointerType)&m10288, &t1965_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1965_m10288_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 3, false, false, 4240, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10289_MI = 
{
	"get_Name", (methodPointerType)&m10289, &t1965_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4241, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10290_MI = 
{
	"get_ObjectType", (methodPointerType)&m10290, &t1965_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4242, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10291_MI = 
{
	"get_Value", (methodPointerType)&m10291, &t1965_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4243, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1965_MIs[] =
{
	&m10288_MI,
	&m10289_MI,
	&m10290_MI,
	&m10291_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1965_f0_FieldInfo = 
{
	"name", &t2_0_0_1, &t1965_TI, offsetof(t1965, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1965_f1_FieldInfo = 
{
	"objectType", &t126_0_0_1, &t1965_TI, offsetof(t1965, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t1965_f2_FieldInfo = 
{
	"value", &t9_0_0_1, &t1965_TI, offsetof(t1965, f2) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1965_FIs[] =
{
	&t1965_f0_FieldInfo,
	&t1965_f1_FieldInfo,
	&t1965_f2_FieldInfo,
	NULL
};
extern MethodInfo m10289_MI;
static PropertyInfo t1965____Name_PropertyInfo = 
{
	&t1965_TI, "Name", &m10289_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10290_MI;
static PropertyInfo t1965____ObjectType_PropertyInfo = 
{
	&t1965_TI, "ObjectType", &m10290_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10291_MI;
static PropertyInfo t1965____Value_PropertyInfo = 
{
	&t1965_TI, "Value", &m10291_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1965_PIs[] =
{
	&t1965____Name_PropertyInfo,
	&t1965____ObjectType_PropertyInfo,
	&t1965____Value_PropertyInfo,
	NULL
};
extern MethodInfo m680_MI;
extern MethodInfo m681_MI;
extern MethodInfo m682_MI;
static Il2CppMethodReference t1965_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1965_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1965_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1965__CustomAttributeCache = {
1,
NULL,
&t1965_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1965_0_0_0;
extern Il2CppType t1965_1_0_0;
extern Il2CppType t117_0_0_0;
extern CustomAttributesCache t1965__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1965_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1965_VT, t1965_VTIGM, NULL};
TypeInfo t1965_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationEntry", "System.Runtime.Serialization", t1965_MIs, t1965_PIs, t1965_FIs, NULL, &t1965_TI, NULL, &t1965__CustomAttributeCache, &t1965_0_0_0, &t1965_1_0_0, &t1965_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1965)+ sizeof (Il2CppObject), sizeof (t1965)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, false, 4, 3, 3, 0, 0, 4, 0, 0};
#include "t1333.h"
// Metadata Definition System.Runtime.Serialization.SerializationException
extern TypeInfo t1333_TI;
#include "t1333MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10292_MI = 
{
	".ctor", (methodPointerType)&m10292, &t1333_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4244, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1333_m5704_ParameterInfos[] = 
{
	{"message", 0, 134222929, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5704_MI = 
{
	".ctor", (methodPointerType)&m5704, &t1333_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1333_m5704_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4245, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1333_m10293_ParameterInfos[] = 
{
	{"info", 0, 134222930, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134222931, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10293_MI = 
{
	".ctor", (methodPointerType)&m10293, &t1333_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1333_m10293_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 4246, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1333_MIs[] =
{
	&m10292_MI,
	&m5704_MI,
	&m10293_MI,
	NULL
};
static Il2CppMethodReference t1333_VT[] =
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
static bool t1333_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1333_IOs[] = 
{
	{ &t616_0_0_0, 4},
	{ &t941_0_0_0, 5},
};
void t1333_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1333__CustomAttributeCache = {
1,
NULL,
&t1333_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1333_0_0_0;
extern Il2CppType t1333_1_0_0;
struct t1333;
extern CustomAttributesCache t1333__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1333_DM = 
{
	NULL, NULL, NULL, t1333_IOs, &t1360_0_0_0, t1333_VT, t1333_VTIGM, NULL};
TypeInfo t1333_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationException", "System.Runtime.Serialization", t1333_MIs, NULL, NULL, NULL, &t1333_TI, NULL, &t1333__CustomAttributeCache, &t1333_0_0_0, &t1333_1_0_0, &t1333_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1333), sizeof (t1333), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1093.h"
// Metadata Definition System.Runtime.Serialization.SerializationInfo
extern TypeInfo t1093_TI;
#include "t1093MD.h"
extern Il2CppType t126_0_0_0;
extern Il2CppType t1966_0_0_0;
static ParameterInfo t1093_m10294_ParameterInfos[] = 
{
	{"type", 0, 134222932, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"converter", 1, 134222933, &EmptyCustomAttributesCache, &t1966_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1093__CustomAttributeCache_m10294;
MethodInfo m10294_MI = 
{
	".ctor", (methodPointerType)&m10294, &t1093_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1093_m10294_ParameterInfos, &t1093__CustomAttributeCache_m10294, 6278, 0, 255, 2, false, false, 4247, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10295_MI = 
{
	"get_AssemblyName", (methodPointerType)&m10295, &t1093_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4248, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10296_MI = 
{
	"get_FullTypeName", (methodPointerType)&m10296, &t1093_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4249, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10297_MI = 
{
	"get_MemberCount", (methodPointerType)&m10297, &t1093_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4250, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1093_m5700_ParameterInfos[] = 
{
	{"name", 0, 134222934, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222935, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"type", 2, 134222936, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5700_MI = 
{
	"AddValue", (methodPointerType)&m5700, &t1093_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1093_m5700_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4251, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1093_m5703_ParameterInfos[] = 
{
	{"name", 0, 134222937, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"type", 1, 134222938, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5703_MI = 
{
	"GetValue", (methodPointerType)&m5703, &t1093_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1093_m5703_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4252, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1093_m10298_ParameterInfos[] = 
{
	{"type", 0, 134222939, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10298_MI = 
{
	"SetType", (methodPointerType)&m10298, &t1093_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1093_m10298_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4253, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1967_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10299_MI = 
{
	"GetEnumerator", (methodPointerType)&m10299, &t1093_TI, &t1967_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4254, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t327_0_0_0;
extern Il2CppType t327_0_0_0;
static ParameterInfo t1093_m10300_ParameterInfos[] = 
{
	{"name", 0, 134222940, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222941, &EmptyCustomAttributesCache, &t327_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t327 (MethodInfo* method, void* obj, void** args);
MethodInfo m10300_MI = 
{
	"AddValue", (methodPointerType)&m10300, &t1093_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t327, t1093_m10300_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4255, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1093_m5702_ParameterInfos[] = 
{
	{"name", 0, 134222942, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222943, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5702_MI = 
{
	"AddValue", (methodPointerType)&m5702, &t1093_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1093_m5702_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4256, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1093_m5701_ParameterInfos[] = 
{
	{"name", 0, 134222944, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222945, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m5701_MI = 
{
	"AddValue", (methodPointerType)&m5701, &t1093_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1093_m5701_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4257, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t269_0_0_0;
extern Il2CppType t269_0_0_0;
static ParameterInfo t1093_m10301_ParameterInfos[] = 
{
	{"name", 0, 134222946, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222947, &EmptyCustomAttributesCache, &t269_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t269 (MethodInfo* method, void* obj, void** args);
MethodInfo m10301_MI = 
{
	"AddValue", (methodPointerType)&m10301, &t1093_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t269, t1093_m10301_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4258, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t1093_m10302_ParameterInfos[] = 
{
	{"name", 0, 134222948, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222949, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m10302_MI = 
{
	"AddValue", (methodPointerType)&m10302, &t1093_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t123, t1093_m10302_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4259, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t292_0_0_0;
static ParameterInfo t1093_m5716_ParameterInfos[] = 
{
	{"name", 0, 134222950, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222951, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m5716_MI = 
{
	"AddValue", (methodPointerType)&m5716, &t1093_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t292, t1093_m5716_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4260, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t882_0_0_0;
extern Il2CppType t882_0_0_0;
static ParameterInfo t1093_m10303_ParameterInfos[] = 
{
	{"name", 0, 134222952, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222953, &EmptyCustomAttributesCache, &t882_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t292 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1093__CustomAttributeCache_m10303;
MethodInfo m10303_MI = 
{
	"AddValue", (methodPointerType)&m10303, &t1093_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t292, t1093_m10303_ParameterInfos, &t1093__CustomAttributeCache_m10303, 134, 0, 255, 2, false, false, 4261, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1093_m5715_ParameterInfos[] = 
{
	{"name", 0, 134222954, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222955, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5715_MI = 
{
	"AddValue", (methodPointerType)&m5715, &t1093_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1093_m5715_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4262, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1093_m5705_ParameterInfos[] = 
{
	{"name", 0, 134222956, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5705_MI = 
{
	"GetBoolean", (methodPointerType)&m5705, &t1093_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1093_m5705_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4263, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1093_m10304_ParameterInfos[] = 
{
	{"name", 0, 134222957, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t327_0_0_0;
extern void* RuntimeInvoker_t327_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10304_MI = 
{
	"GetInt16", (methodPointerType)&m10304, &t1093_TI, &t327_0_0_0, RuntimeInvoker_t327_t9, t1093_m10304_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4264, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1093_m5714_ParameterInfos[] = 
{
	{"name", 0, 134222958, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5714_MI = 
{
	"GetInt32", (methodPointerType)&m5714, &t1093_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1093_m5714_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4265, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1093_m5713_ParameterInfos[] = 
{
	{"name", 0, 134222959, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t292_0_0_0;
extern void* RuntimeInvoker_t292_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5713_MI = 
{
	"GetInt64", (methodPointerType)&m5713, &t1093_TI, &t292_0_0_0, RuntimeInvoker_t292_t9, t1093_m5713_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4266, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1093_m5712_ParameterInfos[] = 
{
	{"name", 0, 134222960, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5712_MI = 
{
	"GetString", (methodPointerType)&m5712, &t1093_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1093_m5712_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4267, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1093_MIs[] =
{
	&m10294_MI,
	&m10295_MI,
	&m10296_MI,
	&m10297_MI,
	&m5700_MI,
	&m5703_MI,
	&m10298_MI,
	&m10299_MI,
	&m10300_MI,
	&m5702_MI,
	&m5701_MI,
	&m10301_MI,
	&m10302_MI,
	&m5716_MI,
	&m10303_MI,
	&m5715_MI,
	&m5705_MI,
	&m10304_MI,
	&m5714_MI,
	&m5713_MI,
	&m5712_MI,
	NULL
};
extern Il2CppType t1149_0_0_1;
FieldInfo t1093_f0_FieldInfo = 
{
	"serialized", &t1149_0_0_1, &t1093_TI, offsetof(t1093, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1161_0_0_1;
FieldInfo t1093_f1_FieldInfo = 
{
	"values", &t1161_0_0_1, &t1093_TI, offsetof(t1093, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1093_f2_FieldInfo = 
{
	"assemblyName", &t2_0_0_1, &t1093_TI, offsetof(t1093, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1093_f3_FieldInfo = 
{
	"fullTypeName", &t2_0_0_1, &t1093_TI, offsetof(t1093, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1966_0_0_1;
FieldInfo t1093_f4_FieldInfo = 
{
	"converter", &t1966_0_0_1, &t1093_TI, offsetof(t1093, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1093_FIs[] =
{
	&t1093_f0_FieldInfo,
	&t1093_f1_FieldInfo,
	&t1093_f2_FieldInfo,
	&t1093_f3_FieldInfo,
	&t1093_f4_FieldInfo,
	NULL
};
extern MethodInfo m10295_MI;
static PropertyInfo t1093____AssemblyName_PropertyInfo = 
{
	&t1093_TI, "AssemblyName", &m10295_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10296_MI;
static PropertyInfo t1093____FullTypeName_PropertyInfo = 
{
	&t1093_TI, "FullTypeName", &m10296_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10297_MI;
static PropertyInfo t1093____MemberCount_PropertyInfo = 
{
	&t1093_TI, "MemberCount", &m10297_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1093_PIs[] =
{
	&t1093____AssemblyName_PropertyInfo,
	&t1093____FullTypeName_PropertyInfo,
	&t1093____MemberCount_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1093_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1093_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1093_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1093_CustomAttributesCacheGenerator_m10294(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1143 * tmp;
		tmp = (t1143 *)il2cpp_codegen_object_new (&t1143_TI);
		m4773(tmp, false, &m4773_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1093_CustomAttributesCacheGenerator_m10303(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1143 * tmp;
		tmp = (t1143 *)il2cpp_codegen_object_new (&t1143_TI);
		m4773(tmp, false, &m4773_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1093__CustomAttributeCache = {
1,
NULL,
&t1093_CustomAttributesCacheGenerator
};
CustomAttributesCache t1093__CustomAttributeCache_m10294 = {
1,
NULL,
&t1093_CustomAttributesCacheGenerator_m10294
};
CustomAttributesCache t1093__CustomAttributeCache_m10303 = {
1,
NULL,
&t1093_CustomAttributesCacheGenerator_m10303
};
extern Il2CppImage g_mscorlib_dll_Image;
struct t1093;
extern CustomAttributesCache t1093__CustomAttributeCache;
extern CustomAttributesCache t1093__CustomAttributeCache_m10294;
extern CustomAttributesCache t1093__CustomAttributeCache_m10303;
const Il2CppTypeDefinitionMetadata t1093_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1093_VT, t1093_VTIGM, NULL};
TypeInfo t1093_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationInfo", "System.Runtime.Serialization", t1093_MIs, t1093_PIs, t1093_FIs, NULL, &t1093_TI, NULL, &t1093__CustomAttributeCache, &t1093_0_0_0, &t1093_1_0_0, &t1093_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1093), sizeof (t1093), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 21, 3, 5, 0, 0, 4, 0, 0};
#include "t1967.h"
// Metadata Definition System.Runtime.Serialization.SerializationInfoEnumerator
extern TypeInfo t1967_TI;
#include "t1967MD.h"
extern Il2CppType t1161_0_0_0;
static ParameterInfo t1967_m10305_ParameterInfos[] = 
{
	{"list", 0, 134222961, &EmptyCustomAttributesCache, &t1161_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10305_MI = 
{
	".ctor", (methodPointerType)&m10305, &t1967_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1967_m10305_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 4268, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10306_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10306, &t1967_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, false, 4269, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1965_0_0_0;
extern void* RuntimeInvoker_t1965 (MethodInfo* method, void* obj, void** args);
MethodInfo m10307_MI = 
{
	"get_Current", (methodPointerType)&m10307, &t1967_TI, &t1965_0_0_0, RuntimeInvoker_t1965, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4270, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10308_MI = 
{
	"get_Name", (methodPointerType)&m10308, &t1967_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4271, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10309_MI = 
{
	"get_ObjectType", (methodPointerType)&m10309, &t1967_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4272, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10310_MI = 
{
	"get_Value", (methodPointerType)&m10310, &t1967_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4273, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10311_MI = 
{
	"MoveNext", (methodPointerType)&m10311, &t1967_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 4274, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1967_MIs[] =
{
	&m10305_MI,
	&m10306_MI,
	&m10307_MI,
	&m10308_MI,
	&m10309_MI,
	&m10310_MI,
	&m10311_MI,
	NULL
};
extern Il2CppType t76_0_0_1;
FieldInfo t1967_f0_FieldInfo = 
{
	"enumerator", &t76_0_0_1, &t1967_TI, offsetof(t1967, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1967_FIs[] =
{
	&t1967_f0_FieldInfo,
	NULL
};
extern MethodInfo m10306_MI;
static PropertyInfo t1967____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1967_TI, "System.Collections.IEnumerator.Current", &m10306_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10307_MI;
static PropertyInfo t1967____Current_PropertyInfo = 
{
	&t1967_TI, "Current", &m10307_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10308_MI;
static PropertyInfo t1967____Name_PropertyInfo = 
{
	&t1967_TI, "Name", &m10308_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10309_MI;
static PropertyInfo t1967____ObjectType_PropertyInfo = 
{
	&t1967_TI, "ObjectType", &m10309_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10310_MI;
static PropertyInfo t1967____Value_PropertyInfo = 
{
	&t1967_TI, "Value", &m10310_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1967_PIs[] =
{
	&t1967____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1967____Current_PropertyInfo,
	&t1967____Name_PropertyInfo,
	&t1967____ObjectType_PropertyInfo,
	&t1967____Value_PropertyInfo,
	NULL
};
extern MethodInfo m10311_MI;
static Il2CppMethodReference t1967_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10306_MI,
	&m10311_MI,
};
static bool t1967_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t76_0_0_0;
static const Il2CppType* t1967_ITIs[] = 
{
	&t76_0_0_0,
};
static Il2CppInterfaceOffsetPair t1967_IOs[] = 
{
	{ &t76_0_0_0, 4},
};
void t1967_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1967__CustomAttributeCache = {
1,
NULL,
&t1967_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1967_0_0_0;
extern Il2CppType t1967_1_0_0;
struct t1967;
extern CustomAttributesCache t1967__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1967_DM = 
{
	NULL, NULL, t1967_ITIs, t1967_IOs, &t9_0_0_0, t1967_VT, t1967_VTIGM, NULL};
TypeInfo t1967_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationInfoEnumerator", "System.Runtime.Serialization", t1967_MIs, t1967_PIs, t1967_FIs, NULL, &t1967_TI, NULL, &t1967__CustomAttributeCache, &t1967_0_0_0, &t1967_1_0_0, &t1967_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1967), sizeof (t1967), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 7, 5, 1, 0, 0, 6, 1, 1};
#include "t1968.h"
// Metadata Definition System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey3
extern TypeInfo t1968_TI;
#include "t1968MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10312_MI = 
{
	".ctor", (methodPointerType)&m10312, &t1968_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4278, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1968_m10313_ParameterInfos[] = 
{
	{"ctx", 0, 134222964, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10313_MI = 
{
	"<>m__2", (methodPointerType)&m10313, &t1968_TI, &t122_0_0_0, RuntimeInvoker_t122_t1094, t1968_m10313_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4279, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1968_MIs[] =
{
	&m10312_MI,
	&m10313_MI,
	NULL
};
extern Il2CppType t1964_0_0_3;
FieldInfo t1968_f0_FieldInfo = 
{
	"sc", &t1964_0_0_3, &t1968_TI, offsetof(t1968, f0), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_3;
FieldInfo t1968_f1_FieldInfo = 
{
	"obj", &t9_0_0_3, &t1968_TI, offsetof(t1968, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1968_FIs[] =
{
	&t1968_f0_FieldInfo,
	&t1968_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1968_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1968_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1968_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1968__CustomAttributeCache = {
1,
NULL,
&t1968_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1968_0_0_0;
extern Il2CppType t1968_1_0_0;
extern TypeInfo t1948_TI;
extern Il2CppType t1948_0_0_0;
struct t1968;
extern CustomAttributesCache t1968__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1968_DM = 
{
	&t1948_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t1968_VT, t1968_VTIGM, NULL};
TypeInfo t1968_TI = 
{
	&g_mscorlib_dll_Image, NULL, "<RegisterObject>c__AnonStorey3", "", t1968_MIs, NULL, t1968_FIs, NULL, &t1968_TI, NULL, &t1968__CustomAttributeCache, &t1968_0_0_0, &t1968_1_0_0, &t1968_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1968), sizeof (t1968), 0, -1, 0, 0, -1, 1048835, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 2, 0, 0, 4, 0, 0};
#include "t1948.h"
// Metadata Definition System.Runtime.Serialization.SerializationObjectManager
#include "t1948MD.h"
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1948_m10314_ParameterInfos[] = 
{
	{"context", 0, 134222962, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10314_MI = 
{
	".ctor", (methodPointerType)&m10314, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t1094, t1948_m10314_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4275, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1948_m10315_ParameterInfos[] = 
{
	{"obj", 0, 134222963, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10315_MI = 
{
	"RegisterObject", (methodPointerType)&m10315, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1948_m10315_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4276, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10316_MI = 
{
	"RaiseOnSerializedEvent", (methodPointerType)&m10316, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4277, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1948_MIs[] =
{
	&m10314_MI,
	&m10315_MI,
	&m10316_MI,
	NULL
};
extern Il2CppType t1094_0_0_33;
FieldInfo t1948_f0_FieldInfo = 
{
	"context", &t1094_0_0_33, &t1948_TI, offsetof(t1948, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_33;
FieldInfo t1948_f1_FieldInfo = 
{
	"seen", &t1149_0_0_33, &t1948_TI, offsetof(t1948, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1963_0_0_1;
FieldInfo t1948_f2_FieldInfo = 
{
	"callbacks", &t1963_0_0_1, &t1948_TI, offsetof(t1948, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1948_FIs[] =
{
	&t1948_f0_FieldInfo,
	&t1948_f1_FieldInfo,
	&t1948_f2_FieldInfo,
	NULL
};
static const Il2CppType* t1948_TI__nestedTypes[1] =
{
	&t1968_0_0_0,
};
static Il2CppMethodReference t1948_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1948_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1948_1_0_0;
struct t1948;
const Il2CppTypeDefinitionMetadata t1948_DM = 
{
	NULL, t1948_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t1948_VT, t1948_VTIGM, NULL};
TypeInfo t1948_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationObjectManager", "System.Runtime.Serialization", t1948_MIs, NULL, t1948_FIs, NULL, &t1948_TI, NULL, &EmptyCustomAttributesCache, &t1948_0_0_0, &t1948_1_0_0, &t1948_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1948), sizeof (t1948), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 3, 0, 1, 4, 0, 0};
#include "t1094.h"
// Metadata Definition System.Runtime.Serialization.StreamingContext
extern TypeInfo t1094_TI;
#include "t1094MD.h"
extern Il2CppType t1969_0_0_0;
extern Il2CppType t1969_0_0_0;
static ParameterInfo t1094_m10317_ParameterInfos[] = 
{
	{"state", 0, 134222965, &EmptyCustomAttributesCache, &t1969_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10317_MI = 
{
	".ctor", (methodPointerType)&m10317, &t1094_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1094_m10317_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4280, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1969_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1094_m10318_ParameterInfos[] = 
{
	{"state", 0, 134222966, &EmptyCustomAttributesCache, &t1969_0_0_0},
	{"additional", 1, 134222967, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10318_MI = 
{
	".ctor", (methodPointerType)&m10318, &t1094_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9, t1094_m10318_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4281, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10319_MI = 
{
	"get_Context", (methodPointerType)&m10319, &t1094_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4282, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1969_0_0_0;
extern void* RuntimeInvoker_t1969 (MethodInfo* method, void* obj, void** args);
MethodInfo m10320_MI = 
{
	"get_State", (methodPointerType)&m10320, &t1094_TI, &t1969_0_0_0, RuntimeInvoker_t1969, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4283, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1094_m10321_ParameterInfos[] = 
{
	{"obj", 0, 134222968, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10321_MI = 
{
	"Equals", (methodPointerType)&m10321, &t1094_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1094_m10321_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4284, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10322_MI = 
{
	"GetHashCode", (methodPointerType)&m10322, &t1094_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4285, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1094_MIs[] =
{
	&m10317_MI,
	&m10318_MI,
	&m10319_MI,
	&m10320_MI,
	&m10321_MI,
	&m10322_MI,
	NULL
};
extern Il2CppType t1969_0_0_1;
FieldInfo t1094_f0_FieldInfo = 
{
	"state", &t1969_0_0_1, &t1094_TI, offsetof(t1094, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t1094_f1_FieldInfo = 
{
	"additional", &t9_0_0_1, &t1094_TI, offsetof(t1094, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1094_FIs[] =
{
	&t1094_f0_FieldInfo,
	&t1094_f1_FieldInfo,
	NULL
};
extern MethodInfo m10319_MI;
static PropertyInfo t1094____Context_PropertyInfo = 
{
	&t1094_TI, "Context", &m10319_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10320_MI;
static PropertyInfo t1094____State_PropertyInfo = 
{
	&t1094_TI, "State", &m10320_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1094_PIs[] =
{
	&t1094____Context_PropertyInfo,
	&t1094____State_PropertyInfo,
	NULL
};
extern MethodInfo m10321_MI;
extern MethodInfo m10322_MI;
static Il2CppMethodReference t1094_VT[] =
{
	&m10321_MI,
	&m646_MI,
	&m10322_MI,
	&m682_MI,
};
static bool t1094_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1094_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1094__CustomAttributeCache = {
1,
NULL,
&t1094_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1094_1_0_0;
extern CustomAttributesCache t1094__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1094_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1094_VT, t1094_VTIGM, NULL};
TypeInfo t1094_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamingContext", "System.Runtime.Serialization", t1094_MIs, t1094_PIs, t1094_FIs, NULL, &t1094_TI, NULL, &t1094__CustomAttributeCache, &t1094_0_0_0, &t1094_1_0_0, &t1094_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1094)+ sizeof (Il2CppObject), sizeof (t1094)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, 0, true, false, false, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t1969.h"
// Metadata Definition System.Runtime.Serialization.StreamingContextStates
extern TypeInfo t1969_TI;
#include "t1969MD.h"
static MethodInfo* t1969_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1969_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1969_TI, offsetof(t1969, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1969_0_0_32854;
FieldInfo t1969_f2_FieldInfo = 
{
	"CrossProcess", &t1969_0_0_32854, &t1969_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1969_0_0_32854;
FieldInfo t1969_f3_FieldInfo = 
{
	"CrossMachine", &t1969_0_0_32854, &t1969_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1969_0_0_32854;
FieldInfo t1969_f4_FieldInfo = 
{
	"File", &t1969_0_0_32854, &t1969_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1969_0_0_32854;
FieldInfo t1969_f5_FieldInfo = 
{
	"Persistence", &t1969_0_0_32854, &t1969_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1969_0_0_32854;
FieldInfo t1969_f6_FieldInfo = 
{
	"Remoting", &t1969_0_0_32854, &t1969_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1969_0_0_32854;
FieldInfo t1969_f7_FieldInfo = 
{
	"Other", &t1969_0_0_32854, &t1969_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1969_0_0_32854;
FieldInfo t1969_f8_FieldInfo = 
{
	"Clone", &t1969_0_0_32854, &t1969_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1969_0_0_32854;
FieldInfo t1969_f9_FieldInfo = 
{
	"CrossAppDomain", &t1969_0_0_32854, &t1969_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1969_0_0_32854;
FieldInfo t1969_f10_FieldInfo = 
{
	"All", &t1969_0_0_32854, &t1969_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1969_FIs[] =
{
	&t1969_f1_FieldInfo,
	&t1969_f2_FieldInfo,
	&t1969_f3_FieldInfo,
	&t1969_f4_FieldInfo,
	&t1969_f5_FieldInfo,
	&t1969_f6_FieldInfo,
	&t1969_f7_FieldInfo,
	&t1969_f8_FieldInfo,
	&t1969_f9_FieldInfo,
	&t1969_f10_FieldInfo,
	NULL
};
static const int32_t t1969_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1969_f2_DefaultValue = 
{
	&t1969_f2_FieldInfo, { (char*)&t1969_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1969_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1969_f3_DefaultValue = 
{
	&t1969_f3_FieldInfo, { (char*)&t1969_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1969_f4_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1969_f4_DefaultValue = 
{
	&t1969_f4_FieldInfo, { (char*)&t1969_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1969_f5_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1969_f5_DefaultValue = 
{
	&t1969_f5_FieldInfo, { (char*)&t1969_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1969_f6_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1969_f6_DefaultValue = 
{
	&t1969_f6_FieldInfo, { (char*)&t1969_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1969_f7_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1969_f7_DefaultValue = 
{
	&t1969_f7_FieldInfo, { (char*)&t1969_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1969_f8_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1969_f8_DefaultValue = 
{
	&t1969_f8_FieldInfo, { (char*)&t1969_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1969_f9_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1969_f9_DefaultValue = 
{
	&t1969_f9_FieldInfo, { (char*)&t1969_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1969_f10_DefaultValueData = 255;
static Il2CppFieldDefaultValueEntry t1969_f10_DefaultValue = 
{
	&t1969_f10_FieldInfo, { (char*)&t1969_f10_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1969_FDVs[] = 
{
	&t1969_f2_DefaultValue,
	&t1969_f3_DefaultValue,
	&t1969_f4_DefaultValue,
	&t1969_f5_DefaultValue,
	&t1969_f6_DefaultValue,
	&t1969_f7_DefaultValue,
	&t1969_f8_DefaultValue,
	&t1969_f9_DefaultValue,
	&t1969_f10_DefaultValue,
	NULL
};
static Il2CppMethodReference t1969_VT[] =
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
static bool t1969_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1969_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern TypeInfo t608_TI;
#include "t608.h"
#include "t608MD.h"
extern MethodInfo m2967_MI;
void t1969_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
CustomAttributesCache t1969__CustomAttributeCache = {
2,
NULL,
&t1969_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1969_1_0_0;
extern CustomAttributesCache t1969__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1969_DM = 
{
	NULL, NULL, NULL, t1969_IOs, &t8_0_0_0, t1969_VT, t1969_VTIGM, NULL};
TypeInfo t1969_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamingContextStates", "System.Runtime.Serialization", t1969_MIs, NULL, t1969_FIs, NULL, &t125_TI, NULL, &t1969__CustomAttributeCache, &t1969_0_0_0, &t1969_1_0_0, &t1969_DM, NULL, NULL, NULL, t1969_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1969)+ sizeof (Il2CppObject), sizeof (t1969)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 10, 0, 0, 23, 0, 3};
#include "t1173.h"
// Metadata Definition System.Security.Cryptography.X509Certificates.X509Certificate
extern TypeInfo t1173_TI;
#include "t1173MD.h"
extern Il2CppType t723_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1173_m10323_ParameterInfos[] = 
{
	{"data", 0, 134222969, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"dates", 1, 134222970, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10323_MI = 
{
	".ctor", (methodPointerType)&m10323, &t1173_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1173_m10323_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 4286, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1173_m6978_ParameterInfos[] = 
{
	{"data", 0, 134222971, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6978_MI = 
{
	".ctor", (methodPointerType)&m6978, &t1173_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1173_m6978_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4287, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m5797_MI = 
{
	".ctor", (methodPointerType)&m5797, &t1173_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4288, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1173_m10324_ParameterInfos[] = 
{
	{"info", 0, 134222972, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134222973, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10324_MI = 
{
	".ctor", (methodPointerType)&m10324, &t1173_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1173_m10324_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4289, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1173_m6014_ParameterInfos[] = 
{
	{"sender", 0, 134222974, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6014_MI = 
{
	"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", (methodPointerType)&m6014, &t1173_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1173_m6014_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 1, false, false, 4290, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1173_m6013_ParameterInfos[] = 
{
	{"info", 0, 134222975, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134222976, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m6013_MI = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData", (methodPointerType)&m6013, &t1173_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1173_m6013_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 2, false, false, 4291, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1173_m10325_ParameterInfos[] = 
{
	{"data", 0, 134222977, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10325_MI = 
{
	"tostr", (methodPointerType)&m10325, &t1173_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1173_m10325_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4292, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1173_0_0_0;
extern Il2CppType t1173_0_0_0;
static ParameterInfo t1173_m5821_ParameterInfos[] = 
{
	{"other", 0, 134222978, &EmptyCustomAttributesCache, &t1173_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5821_MI = 
{
	"Equals", (methodPointerType)&m5821, &t1173_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1173_m5821_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 1, false, false, 4293, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6015_MI = 
{
	"GetCertHash", (methodPointerType)&m6015, &t1173_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 4294, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5795_MI = 
{
	"GetCertHashString", (methodPointerType)&m5795, &t1173_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 8, 0, false, false, 4295, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6016_MI = 
{
	"GetEffectiveDateString", (methodPointerType)&m6016, &t1173_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 9, 0, false, false, 4296, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6017_MI = 
{
	"GetExpirationDateString", (methodPointerType)&m6017, &t1173_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 10, 0, false, false, 4297, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6012_MI = 
{
	"GetHashCode", (methodPointerType)&m6012, &t1173_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4298, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1173__CustomAttributeCache_m6018;
MethodInfo m6018_MI = 
{
	"GetIssuerName", (methodPointerType)&m6018, &t1173_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &t1173__CustomAttributeCache_m6018, 454, 0, 11, 0, false, false, 4299, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1173__CustomAttributeCache_m6019;
MethodInfo m6019_MI = 
{
	"GetName", (methodPointerType)&m6019, &t1173_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &t1173__CustomAttributeCache_m6019, 454, 0, 12, 0, false, false, 4300, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6020_MI = 
{
	"GetPublicKey", (methodPointerType)&m6020, &t1173_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 13, 0, false, false, 4301, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6021_MI = 
{
	"GetRawCertData", (methodPointerType)&m6021, &t1173_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 14, 0, false, false, 4302, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10326_MI = 
{
	"ToString", (methodPointerType)&m10326, &t1173_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4303, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1173_m5812_ParameterInfos[] = 
{
	{"fVerbose", 0, 134222979, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m5812_MI = 
{
	"ToString", (methodPointerType)&m5812, &t1173_TI, &t2_0_0_0, RuntimeInvoker_t9_t186, t1173_m5812_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 15, 1, false, false, 4304, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5815_MI = 
{
	"get_Issuer", (methodPointerType)&m5815, &t1173_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4305, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5814_MI = 
{
	"get_Subject", (methodPointerType)&m5814, &t1173_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4306, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1173_m6011_ParameterInfos[] = 
{
	{"obj", 0, 134222980, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1173__CustomAttributeCache_m6011;
MethodInfo m6011_MI = 
{
	"Equals", (methodPointerType)&m6011, &t1173_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1173_m6011_ParameterInfos, &t1173__CustomAttributeCache_m6011, 198, 0, 0, 1, false, false, 4307, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1220_0_0_0;
extern Il2CppType t1220_0_0_0;
static ParameterInfo t1173_m5809_ParameterInfos[] = 
{
	{"rawData", 0, 134222981, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"password", 1, 134222982, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"keyStorageFlags", 2, 134222983, &EmptyCustomAttributesCache, &t1220_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1173__CustomAttributeCache_m5809;
MethodInfo m5809_MI = 
{
	"Import", (methodPointerType)&m5809, &t1173_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1173_m5809_ParameterInfos, &t1173__CustomAttributeCache_m5809, 454, 0, 16, 3, false, false, 4308, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1173__CustomAttributeCache_m5811;
MethodInfo m5811_MI = 
{
	"Reset", (methodPointerType)&m5811, &t1173_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t1173__CustomAttributeCache_m5811, 454, 0, 17, 0, false, false, 4309, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1173_MIs[] =
{
	&m10323_MI,
	&m6978_MI,
	&m5797_MI,
	&m10324_MI,
	&m6014_MI,
	&m6013_MI,
	&m10325_MI,
	&m5821_MI,
	&m6015_MI,
	&m5795_MI,
	&m6016_MI,
	&m6017_MI,
	&m6012_MI,
	&m6018_MI,
	&m6019_MI,
	&m6020_MI,
	&m6021_MI,
	&m10326_MI,
	&m5812_MI,
	&m5815_MI,
	&m5814_MI,
	&m6011_MI,
	&m5809_MI,
	&m5811_MI,
	NULL
};
extern Il2CppType t1641_0_0_1;
FieldInfo t1173_f0_FieldInfo = 
{
	"x509", &t1641_0_0_1, &t1173_TI, offsetof(t1173, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1173_f1_FieldInfo = 
{
	"hideDates", &t124_0_0_1, &t1173_TI, offsetof(t1173, f1), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t1173_f2_FieldInfo = 
{
	"cachedCertificateHash", &t723_0_0_1, &t1173_TI, offsetof(t1173, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1173_f3_FieldInfo = 
{
	"issuer_name", &t2_0_0_1, &t1173_TI, offsetof(t1173, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1173_f4_FieldInfo = 
{
	"subject_name", &t2_0_0_1, &t1173_TI, offsetof(t1173, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1173_FIs[] =
{
	&t1173_f0_FieldInfo,
	&t1173_f1_FieldInfo,
	&t1173_f2_FieldInfo,
	&t1173_f3_FieldInfo,
	&t1173_f4_FieldInfo,
	NULL
};
extern MethodInfo m5815_MI;
static PropertyInfo t1173____Issuer_PropertyInfo = 
{
	&t1173_TI, "Issuer", &m5815_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5814_MI;
static PropertyInfo t1173____Subject_PropertyInfo = 
{
	&t1173_TI, "Subject", &m5814_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1173_PIs[] =
{
	&t1173____Issuer_PropertyInfo,
	&t1173____Subject_PropertyInfo,
	NULL
};
extern MethodInfo m6011_MI;
extern MethodInfo m6012_MI;
extern MethodInfo m10326_MI;
extern MethodInfo m6013_MI;
extern MethodInfo m6014_MI;
extern MethodInfo m5821_MI;
extern MethodInfo m6015_MI;
extern MethodInfo m5795_MI;
extern MethodInfo m6016_MI;
extern MethodInfo m6017_MI;
extern MethodInfo m6018_MI;
extern MethodInfo m6019_MI;
extern MethodInfo m6020_MI;
extern MethodInfo m6021_MI;
extern MethodInfo m5812_MI;
extern MethodInfo m5809_MI;
extern MethodInfo m5811_MI;
static Il2CppMethodReference t1173_VT[] =
{
	&m6011_MI,
	&m646_MI,
	&m6012_MI,
	&m10326_MI,
	&m6013_MI,
	&m6014_MI,
	&m5821_MI,
	&m6015_MI,
	&m5795_MI,
	&m6016_MI,
	&m6017_MI,
	&m6018_MI,
	&m6019_MI,
	&m6020_MI,
	&m6021_MI,
	&m5812_MI,
	&m5809_MI,
	&m5811_MI,
};
static bool t1173_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1173_ITIs[] = 
{
	&t616_0_0_0,
	&t1099_0_0_0,
};
static Il2CppInterfaceOffsetPair t1173_IOs[] = 
{
	{ &t616_0_0_0, 4},
	{ &t1099_0_0_0, 5},
};
void t1173_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m7821(tmp, il2cpp_codegen_string_new_wrapper("X509ContentType.SerializedCert isn't supported (anywhere in the class)"), &m7821_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t611_TI;
#include "t611.h"
#include "t611MD.h"
extern MethodInfo m2970_MI;
void t1173_CustomAttributesCacheGenerator_m6018(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t611 * tmp;
		tmp = (t611 *)il2cpp_codegen_object_new (&t611_TI);
		m2970(tmp, il2cpp_codegen_string_new_wrapper("Use the Issuer property."), &m2970_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1173_CustomAttributesCacheGenerator_m6019(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t611 * tmp;
		tmp = (t611 *)il2cpp_codegen_object_new (&t611_TI);
		m2970(tmp, il2cpp_codegen_string_new_wrapper("Use the Subject property."), &m2970_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1173_CustomAttributesCacheGenerator_m6011(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1173_CustomAttributesCacheGenerator_m5809(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1583 * tmp;
		tmp = (t1583 *)il2cpp_codegen_object_new (&t1583_TI);
		m7821(tmp, il2cpp_codegen_string_new_wrapper("missing KeyStorageFlags support"), &m7821_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t1173_CustomAttributesCacheGenerator_m5811(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1173__CustomAttributeCache = {
2,
NULL,
&t1173_CustomAttributesCacheGenerator
};
CustomAttributesCache t1173__CustomAttributeCache_m6018 = {
1,
NULL,
&t1173_CustomAttributesCacheGenerator_m6018
};
CustomAttributesCache t1173__CustomAttributeCache_m6019 = {
1,
NULL,
&t1173_CustomAttributesCacheGenerator_m6019
};
CustomAttributesCache t1173__CustomAttributeCache_m6011 = {
1,
NULL,
&t1173_CustomAttributesCacheGenerator_m6011
};
CustomAttributesCache t1173__CustomAttributeCache_m5809 = {
2,
NULL,
&t1173_CustomAttributesCacheGenerator_m5809
};
CustomAttributesCache t1173__CustomAttributeCache_m5811 = {
1,
NULL,
&t1173_CustomAttributesCacheGenerator_m5811
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1173_1_0_0;
struct t1173;
extern CustomAttributesCache t1173__CustomAttributeCache;
extern CustomAttributesCache t1173__CustomAttributeCache_m6018;
extern CustomAttributesCache t1173__CustomAttributeCache_m6019;
extern CustomAttributesCache t1173__CustomAttributeCache_m6011;
extern CustomAttributesCache t1173__CustomAttributeCache_m5809;
extern CustomAttributesCache t1173__CustomAttributeCache_m5811;
const Il2CppTypeDefinitionMetadata t1173_DM = 
{
	NULL, NULL, t1173_ITIs, t1173_IOs, &t9_0_0_0, t1173_VT, t1173_VTIGM, NULL};
TypeInfo t1173_TI = 
{
	&g_mscorlib_dll_Image, NULL, "X509Certificate", "System.Security.Cryptography.X509Certificates", t1173_MIs, t1173_PIs, t1173_FIs, NULL, &t1173_TI, NULL, &t1173__CustomAttributeCache, &t1173_0_0_0, &t1173_1_0_0, &t1173_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1173), sizeof (t1173), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 24, 2, 5, 0, 0, 18, 2, 2};
#include "t1220.h"
// Metadata Definition System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
extern TypeInfo t1220_TI;
#include "t1220MD.h"
static MethodInfo* t1220_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1220_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1220_TI, offsetof(t1220, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1220_0_0_32854;
FieldInfo t1220_f2_FieldInfo = 
{
	"DefaultKeySet", &t1220_0_0_32854, &t1220_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1220_0_0_32854;
FieldInfo t1220_f3_FieldInfo = 
{
	"UserKeySet", &t1220_0_0_32854, &t1220_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1220_0_0_32854;
FieldInfo t1220_f4_FieldInfo = 
{
	"MachineKeySet", &t1220_0_0_32854, &t1220_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1220_0_0_32854;
FieldInfo t1220_f5_FieldInfo = 
{
	"Exportable", &t1220_0_0_32854, &t1220_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1220_0_0_32854;
FieldInfo t1220_f6_FieldInfo = 
{
	"UserProtected", &t1220_0_0_32854, &t1220_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1220_0_0_32854;
FieldInfo t1220_f7_FieldInfo = 
{
	"PersistKeySet", &t1220_0_0_32854, &t1220_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1220_FIs[] =
{
	&t1220_f1_FieldInfo,
	&t1220_f2_FieldInfo,
	&t1220_f3_FieldInfo,
	&t1220_f4_FieldInfo,
	&t1220_f5_FieldInfo,
	&t1220_f6_FieldInfo,
	&t1220_f7_FieldInfo,
	NULL
};
static const int32_t t1220_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1220_f2_DefaultValue = 
{
	&t1220_f2_FieldInfo, { (char*)&t1220_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1220_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1220_f3_DefaultValue = 
{
	&t1220_f3_FieldInfo, { (char*)&t1220_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1220_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1220_f4_DefaultValue = 
{
	&t1220_f4_FieldInfo, { (char*)&t1220_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1220_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1220_f5_DefaultValue = 
{
	&t1220_f5_FieldInfo, { (char*)&t1220_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1220_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1220_f6_DefaultValue = 
{
	&t1220_f6_FieldInfo, { (char*)&t1220_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1220_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1220_f7_DefaultValue = 
{
	&t1220_f7_FieldInfo, { (char*)&t1220_f7_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1220_FDVs[] = 
{
	&t1220_f2_DefaultValue,
	&t1220_f3_DefaultValue,
	&t1220_f4_DefaultValue,
	&t1220_f5_DefaultValue,
	&t1220_f6_DefaultValue,
	&t1220_f7_DefaultValue,
	NULL
};
static Il2CppMethodReference t1220_VT[] =
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
static bool t1220_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1220_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1220_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
CustomAttributesCache t1220__CustomAttributeCache = {
2,
NULL,
&t1220_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1220_1_0_0;
extern CustomAttributesCache t1220__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1220_DM = 
{
	NULL, NULL, NULL, t1220_IOs, &t8_0_0_0, t1220_VT, t1220_VTIGM, NULL};
TypeInfo t1220_TI = 
{
	&g_mscorlib_dll_Image, NULL, "X509KeyStorageFlags", "System.Security.Cryptography.X509Certificates", t1220_MIs, NULL, t1220_FIs, NULL, &t125_TI, NULL, &t1220__CustomAttributeCache, &t1220_0_0_0, &t1220_1_0_0, &t1220_DM, NULL, NULL, NULL, t1220_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1220)+ sizeof (Il2CppObject), sizeof (t1220)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 7, 0, 0, 23, 0, 3};
#include "t1203.h"
// Metadata Definition System.Security.Cryptography.AsymmetricAlgorithm
extern TypeInfo t1203_TI;
#include "t1203MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10327_MI = 
{
	".ctor", (methodPointerType)&m10327, &t1203_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4310, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7024_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m7024, &t1203_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 4311, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5817_MI = 
{
	"get_KeySize", (methodPointerType)&m5817, &t1203_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 5, 0, false, false, 4312, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1203_m6882_ParameterInfos[] = 
{
	{"value", 0, 134222984, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6882_MI = 
{
	"set_KeySize", (methodPointerType)&m6882, &t1203_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1203_m6882_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 6, 1, false, false, 4313, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7009_MI = 
{
	"Clear", (methodPointerType)&m7009, &t1203_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4314, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1203_m12065_ParameterInfos[] = 
{
	{"disposing", 0, 134222985, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m12065_MI = 
{
	"Dispose", NULL, &t1203_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1203_m12065_ParameterInfos, &EmptyCustomAttributesCache, 1476, 0, 7, 1, false, false, 4315, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1203_m12763_ParameterInfos[] = 
{
	{"xmlString", 0, 134222986, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12763_MI = 
{
	"FromXmlString", NULL, &t1203_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1203_m12763_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, false, 4316, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1203_m12764_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134222987, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m12764_MI = 
{
	"ToXmlString", NULL, &t1203_TI, &t2_0_0_0, RuntimeInvoker_t9_t186, t1203_m12764_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 1, false, false, 4317, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1203_m10328_ParameterInfos[] = 
{
	{"xml", 0, 134222988, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"param", 1, 134222989, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10328_MI = 
{
	"GetNamedParam", (methodPointerType)&m10328, &t1203_TI, &t723_0_0_0, RuntimeInvoker_t9_t9_t9, t1203_m10328_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4318, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1203_MIs[] =
{
	&m10327_MI,
	&m7024_MI,
	&m5817_MI,
	&m6882_MI,
	&m7009_MI,
	&m12065_MI,
	&m12763_MI,
	&m12764_MI,
	&m10328_MI,
	NULL
};
extern Il2CppType t125_0_0_4;
FieldInfo t1203_f0_FieldInfo = 
{
	"KeySizeValue", &t125_0_0_4, &t1203_TI, offsetof(t1203, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1424_0_0_4;
FieldInfo t1203_f1_FieldInfo = 
{
	"LegalKeySizesValue", &t1424_0_0_4, &t1203_TI, offsetof(t1203, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1203_FIs[] =
{
	&t1203_f0_FieldInfo,
	&t1203_f1_FieldInfo,
	NULL
};
extern MethodInfo m5817_MI;
extern MethodInfo m6882_MI;
static PropertyInfo t1203____KeySize_PropertyInfo = 
{
	&t1203_TI, "KeySize", &m5817_MI, &m6882_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1203_PIs[] =
{
	&t1203____KeySize_PropertyInfo,
	NULL
};
extern MethodInfo m7024_MI;
static Il2CppMethodReference t1203_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7024_MI,
	&m5817_MI,
	&m6882_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1203_VTIGM[] =
{
	false,
	false,
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
static const Il2CppType* t1203_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1203_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1203_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1203__CustomAttributeCache = {
1,
NULL,
&t1203_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1203_0_0_0;
extern Il2CppType t1203_1_0_0;
struct t1203;
extern CustomAttributesCache t1203__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1203_DM = 
{
	NULL, NULL, t1203_ITIs, t1203_IOs, &t9_0_0_0, t1203_VT, t1203_VTIGM, NULL};
TypeInfo t1203_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsymmetricAlgorithm", "System.Security.Cryptography", t1203_MIs, t1203_PIs, t1203_FIs, NULL, &t1203_TI, NULL, &t1203__CustomAttributeCache, &t1203_0_0_0, &t1203_1_0_0, &t1203_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1203), sizeof (t1203), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 1, 2, 0, 0, 10, 1, 1};
#include "t1970.h"
// Metadata Definition System.Security.Cryptography.AsymmetricKeyExchangeFormatter
extern TypeInfo t1970_TI;
#include "t1970MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10329_MI = 
{
	".ctor", (methodPointerType)&m10329, &t1970_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4319, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1970_m12765_ParameterInfos[] = 
{
	{"data", 0, 134222990, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12765_MI = 
{
	"CreateKeyExchange", NULL, &t1970_TI, &t723_0_0_0, RuntimeInvoker_t9_t9, t1970_m12765_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4320, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1970_MIs[] =
{
	&m10329_MI,
	&m12765_MI,
	NULL
};
static Il2CppMethodReference t1970_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t1970_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
void t1970_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1970__CustomAttributeCache = {
1,
NULL,
&t1970_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1970_0_0_0;
extern Il2CppType t1970_1_0_0;
struct t1970;
extern CustomAttributesCache t1970__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1970_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1970_VT, t1970_VTIGM, NULL};
TypeInfo t1970_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsymmetricKeyExchangeFormatter", "System.Security.Cryptography", t1970_MIs, NULL, NULL, NULL, &t1970_TI, NULL, &t1970__CustomAttributeCache, &t1970_0_0_0, &t1970_1_0_0, &t1970_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1970), sizeof (t1970), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 5, 0, 0};
#include "t1480.h"
// Metadata Definition System.Security.Cryptography.AsymmetricSignatureDeformatter
extern TypeInfo t1480_TI;
#include "t1480MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6974_MI = 
{
	".ctor", (methodPointerType)&m6974, &t1480_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4321, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1480_m12766_ParameterInfos[] = 
{
	{"strName", 0, 134222991, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12766_MI = 
{
	"SetHashAlgorithm", NULL, &t1480_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1480_m12766_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4322, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1203_0_0_0;
static ParameterInfo t1480_m12767_ParameterInfos[] = 
{
	{"key", 0, 134222992, &EmptyCustomAttributesCache, &t1203_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12767_MI = 
{
	"SetKey", NULL, &t1480_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1480_m12767_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 4323, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1480_m12768_ParameterInfos[] = 
{
	{"rgbHash", 0, 134222993, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"rgbSignature", 1, 134222994, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12768_MI = 
{
	"VerifySignature", NULL, &t1480_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1480_m12768_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, false, 4324, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1480_MIs[] =
{
	&m6974_MI,
	&m12766_MI,
	&m12767_MI,
	&m12768_MI,
	NULL
};
static Il2CppMethodReference t1480_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1480_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
void t1480_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1480__CustomAttributeCache = {
1,
NULL,
&t1480_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1480_0_0_0;
extern Il2CppType t1480_1_0_0;
struct t1480;
extern CustomAttributesCache t1480__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1480_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1480_VT, t1480_VTIGM, NULL};
TypeInfo t1480_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsymmetricSignatureDeformatter", "System.Security.Cryptography", t1480_MIs, NULL, NULL, NULL, &t1480_TI, NULL, &t1480__CustomAttributeCache, &t1480_0_0_0, &t1480_1_0_0, &t1480_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1480), sizeof (t1480), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 7, 0, 0};
#include "t1482.h"
// Metadata Definition System.Security.Cryptography.AsymmetricSignatureFormatter
extern TypeInfo t1482_TI;
#include "t1482MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6975_MI = 
{
	".ctor", (methodPointerType)&m6975, &t1482_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4325, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1482_m12769_ParameterInfos[] = 
{
	{"strName", 0, 134222995, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12769_MI = 
{
	"SetHashAlgorithm", NULL, &t1482_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1482_m12769_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4326, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1203_0_0_0;
static ParameterInfo t1482_m12770_ParameterInfos[] = 
{
	{"key", 0, 134222996, &EmptyCustomAttributesCache, &t1203_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12770_MI = 
{
	"SetKey", NULL, &t1482_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1482_m12770_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 4327, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1482_m12771_ParameterInfos[] = 
{
	{"rgbHash", 0, 134222997, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12771_MI = 
{
	"CreateSignature", NULL, &t1482_TI, &t723_0_0_0, RuntimeInvoker_t9_t9, t1482_m12771_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, false, 4328, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1482_MIs[] =
{
	&m6975_MI,
	&m12769_MI,
	&m12770_MI,
	&m12771_MI,
	NULL
};
static Il2CppMethodReference t1482_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1482_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
void t1482_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1482__CustomAttributeCache = {
1,
NULL,
&t1482_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1482_0_0_0;
extern Il2CppType t1482_1_0_0;
struct t1482;
extern CustomAttributesCache t1482__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1482_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1482_VT, t1482_VTIGM, NULL};
TypeInfo t1482_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsymmetricSignatureFormatter", "System.Security.Cryptography", t1482_MIs, NULL, NULL, NULL, &t1482_TI, NULL, &t1482__CustomAttributeCache, &t1482_0_0_0, &t1482_1_0_0, &t1482_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1482), sizeof (t1482), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 7, 0, 0};
#include "t1971.h"
// Metadata Definition System.Security.Cryptography.Base64Constants
extern TypeInfo t1971_TI;
#include "t1971MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10330_MI = 
{
	".cctor", (methodPointerType)&m10330, &t1971_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4329, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1971_MIs[] =
{
	&m10330_MI,
	NULL
};
extern Il2CppType t723_0_0_54;
FieldInfo t1971_f0_FieldInfo = 
{
	"EncodeTable", &t723_0_0_54, &t1971_TI, offsetof(t1971_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_54;
FieldInfo t1971_f1_FieldInfo = 
{
	"DecodeTable", &t723_0_0_54, &t1971_TI, offsetof(t1971_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1971_FIs[] =
{
	&t1971_f0_FieldInfo,
	&t1971_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1971_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1971_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1971_0_0_0;
extern Il2CppType t1971_1_0_0;
struct t1971;
const Il2CppTypeDefinitionMetadata t1971_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1971_VT, t1971_VTIGM, NULL};
TypeInfo t1971_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Base64Constants", "System.Security.Cryptography", t1971_MIs, NULL, t1971_FIs, NULL, &t1971_TI, NULL, &EmptyCustomAttributesCache, &t1971_0_0_0, &t1971_1_0_0, &t1971_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1971), sizeof (t1971), 0, -1, sizeof(t1971_SFs), 0, -1, 1048960, 0, 0, false, false, false, false, false, false, false, false, true, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t1451.h"
// Metadata Definition System.Security.Cryptography.CipherMode
extern TypeInfo t1451_TI;
#include "t1451MD.h"
static MethodInfo* t1451_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1451_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1451_TI, offsetof(t1451, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1451_0_0_32854;
FieldInfo t1451_f2_FieldInfo = 
{
	"CBC", &t1451_0_0_32854, &t1451_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1451_0_0_32854;
FieldInfo t1451_f3_FieldInfo = 
{
	"ECB", &t1451_0_0_32854, &t1451_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1451_0_0_32854;
FieldInfo t1451_f4_FieldInfo = 
{
	"OFB", &t1451_0_0_32854, &t1451_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1451_0_0_32854;
FieldInfo t1451_f5_FieldInfo = 
{
	"CFB", &t1451_0_0_32854, &t1451_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1451_0_0_32854;
FieldInfo t1451_f6_FieldInfo = 
{
	"CTS", &t1451_0_0_32854, &t1451_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1451_FIs[] =
{
	&t1451_f1_FieldInfo,
	&t1451_f2_FieldInfo,
	&t1451_f3_FieldInfo,
	&t1451_f4_FieldInfo,
	&t1451_f5_FieldInfo,
	&t1451_f6_FieldInfo,
	NULL
};
static const int32_t t1451_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1451_f2_DefaultValue = 
{
	&t1451_f2_FieldInfo, { (char*)&t1451_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1451_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1451_f3_DefaultValue = 
{
	&t1451_f3_FieldInfo, { (char*)&t1451_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1451_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1451_f4_DefaultValue = 
{
	&t1451_f4_FieldInfo, { (char*)&t1451_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1451_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1451_f5_DefaultValue = 
{
	&t1451_f5_FieldInfo, { (char*)&t1451_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1451_f6_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1451_f6_DefaultValue = 
{
	&t1451_f6_FieldInfo, { (char*)&t1451_f6_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1451_FDVs[] = 
{
	&t1451_f2_DefaultValue,
	&t1451_f3_DefaultValue,
	&t1451_f4_DefaultValue,
	&t1451_f5_DefaultValue,
	&t1451_f6_DefaultValue,
	NULL
};
static Il2CppMethodReference t1451_VT[] =
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
static bool t1451_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1451_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1451_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1451__CustomAttributeCache = {
1,
NULL,
&t1451_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1451_0_0_0;
extern Il2CppType t1451_1_0_0;
extern CustomAttributesCache t1451__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1451_DM = 
{
	NULL, NULL, NULL, t1451_IOs, &t8_0_0_0, t1451_VT, t1451_VTIGM, NULL};
TypeInfo t1451_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CipherMode", "System.Security.Cryptography", t1451_MIs, NULL, t1451_FIs, NULL, &t125_TI, NULL, &t1451__CustomAttributeCache, &t1451_0_0_0, &t1451_1_0_0, &t1451_DM, NULL, NULL, NULL, t1451_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1451)+ sizeof (Il2CppObject), sizeof (t1451)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1351.h"
// Metadata Definition System.Security.Cryptography.CryptoConfig
extern TypeInfo t1351_TI;
#include "t1351MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10331_MI = 
{
	".cctor", (methodPointerType)&m10331, &t1351_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4330, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10332_MI = 
{
	"Initialize", (methodPointerType)&m10332, &t1351_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 145, 0, 255, 0, false, false, 4331, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1351_m5818_ParameterInfos[] = 
{
	{"name", 0, 134222998, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5818_MI = 
{
	"CreateFromName", (methodPointerType)&m5818, &t1351_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1351_m5818_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4332, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t158_0_0_0;
extern CustomAttributesCache t1351__CustomAttributeCache_t1351_m5855_Arg1_ParameterInfo;
static ParameterInfo t1351_m5855_ParameterInfos[] = 
{
	{"name", 0, 134222999, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"args", 1, 134223000, &t1351__CustomAttributeCache_t1351_m5855_Arg1_ParameterInfo, &t158_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5855_MI = 
{
	"CreateFromName", (methodPointerType)&m5855, &t1351_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1351_m5855_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4333, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1351_m6874_ParameterInfos[] = 
{
	{"name", 0, 134223001, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6874_MI = 
{
	"MapNameToOID", (methodPointerType)&m6874, &t1351_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1351_m6874_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4334, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1351_m5822_ParameterInfos[] = 
{
	{"str", 0, 134223002, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5822_MI = 
{
	"EncodeOID", (methodPointerType)&m5822, &t1351_TI, &t723_0_0_0, RuntimeInvoker_t9_t9, t1351_m5822_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4335, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t292_0_0_0;
static ParameterInfo t1351_m10333_ParameterInfos[] = 
{
	{"x", 0, 134223003, &EmptyCustomAttributesCache, &t292_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t292 (MethodInfo* method, void* obj, void** args);
MethodInfo m10333_MI = 
{
	"EncodeLongNumber", (methodPointerType)&m10333, &t1351_TI, &t723_0_0_0, RuntimeInvoker_t9_t292, t1351_m10333_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4336, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1351_MIs[] =
{
	&m10331_MI,
	&m10332_MI,
	&m5818_MI,
	&m5855_MI,
	&m6874_MI,
	&m5822_MI,
	&m10333_MI,
	NULL
};
extern Il2CppType t9_0_0_17;
FieldInfo t1351_f0_FieldInfo = 
{
	"lockObject", &t9_0_0_17, &t1351_TI, offsetof(t1351_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_17;
FieldInfo t1351_f1_FieldInfo = 
{
	"algorithms", &t1149_0_0_17, &t1351_TI, offsetof(t1351_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1149_0_0_17;
FieldInfo t1351_f2_FieldInfo = 
{
	"oid", &t1149_0_0_17, &t1351_TI, offsetof(t1351_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1351_FIs[] =
{
	&t1351_f0_FieldInfo,
	&t1351_f1_FieldInfo,
	&t1351_f2_FieldInfo,
	NULL
};
static Il2CppMethodReference t1351_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1351_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1351_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void t1351_CustomAttributesCacheGenerator_t1351_m5855_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t330 * tmp;
		tmp = (t330 *)il2cpp_codegen_object_new (&t330_TI);
		m1205(tmp, &m1205_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1351__CustomAttributeCache = {
1,
NULL,
&t1351_CustomAttributesCacheGenerator
};
CustomAttributesCache t1351__CustomAttributeCache_t1351_m5855_Arg1_ParameterInfo = {
1,
NULL,
&t1351_CustomAttributesCacheGenerator_t1351_m5855_Arg1_ParameterInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1351_0_0_0;
extern Il2CppType t1351_1_0_0;
struct t1351;
extern CustomAttributesCache t1351__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1351_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1351_VT, t1351_VTIGM, NULL};
TypeInfo t1351_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CryptoConfig", "System.Security.Cryptography", t1351_MIs, NULL, t1351_FIs, NULL, &t1351_TI, NULL, &t1351__CustomAttributeCache, &t1351_0_0_0, &t1351_1_0_0, &t1351_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1351), sizeof (t1351), 0, -1, sizeof(t1351_SFs), 0, -1, 1, 0, 0, false, false, false, false, false, false, false, false, true, false, 7, 0, 3, 0, 0, 4, 0, 0};
#include "t1344.h"
// Metadata Definition System.Security.Cryptography.CryptographicException
extern TypeInfo t1344_TI;
#include "t1344MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10334_MI = 
{
	".ctor", (methodPointerType)&m10334, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4337, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1344_m5767_ParameterInfos[] = 
{
	{"message", 0, 134223004, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5767_MI = 
{
	".ctor", (methodPointerType)&m5767, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1344_m5767_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4338, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t138_0_0_0;
extern Il2CppType t138_0_0_0;
static ParameterInfo t1344_m5771_ParameterInfos[] = 
{
	{"message", 0, 134223005, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"inner", 1, 134223006, &EmptyCustomAttributesCache, &t138_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5771_MI = 
{
	".ctor", (methodPointerType)&m5771, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1344_m5771_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4339, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1344_m10335_ParameterInfos[] = 
{
	{"format", 0, 134223007, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"insert", 1, 134223008, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10335_MI = 
{
	".ctor", (methodPointerType)&m10335, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1344_m10335_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4340, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1344_m10336_ParameterInfos[] = 
{
	{"info", 0, 134223009, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134223010, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10336_MI = 
{
	".ctor", (methodPointerType)&m10336, &t1344_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1344_m10336_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 4341, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1344_MIs[] =
{
	&m10334_MI,
	&m5767_MI,
	&m5771_MI,
	&m10335_MI,
	&m10336_MI,
	NULL
};
static Il2CppMethodReference t1344_VT[] =
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
};
static const Il2CppType* t1344_ITIs[] = 
{
	&t941_0_0_0,
};
static Il2CppInterfaceOffsetPair t1344_IOs[] = 
{
	{ &t616_0_0_0, 4},
	{ &t941_0_0_0, 5},
};
void t1344_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1344__CustomAttributeCache = {
1,
NULL,
&t1344_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1344_0_0_0;
extern Il2CppType t1344_1_0_0;
struct t1344;
extern CustomAttributesCache t1344__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1344_DM = 
{
	NULL, NULL, t1344_ITIs, t1344_IOs, &t1360_0_0_0, t1344_VT, t1344_VTIGM, NULL};
TypeInfo t1344_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CryptographicException", "System.Security.Cryptography", t1344_MIs, NULL, NULL, NULL, &t1344_TI, NULL, &t1344__CustomAttributeCache, &t1344_0_0_0, &t1344_1_0_0, &t1344_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1344), sizeof (t1344), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 11, 1, 2};
#include "t1352.h"
// Metadata Definition System.Security.Cryptography.CryptographicUnexpectedOperationException
extern TypeInfo t1352_TI;
#include "t1352MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10337_MI = 
{
	".ctor", (methodPointerType)&m10337, &t1352_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4342, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1352_m6928_ParameterInfos[] = 
{
	{"message", 0, 134223011, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6928_MI = 
{
	".ctor", (methodPointerType)&m6928, &t1352_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1352_m6928_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4343, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t1352_m10338_ParameterInfos[] = 
{
	{"info", 0, 134223012, &EmptyCustomAttributesCache, &t1093_0_0_0},
	{"context", 1, 134223013, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m10338_MI = 
{
	".ctor", (methodPointerType)&m10338, &t1352_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1094, t1352_m10338_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 4344, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1352_MIs[] =
{
	&m10337_MI,
	&m6928_MI,
	&m10338_MI,
	NULL
};
static Il2CppMethodReference t1352_VT[] =
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
static bool t1352_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1352_IOs[] = 
{
	{ &t941_0_0_0, 5},
	{ &t616_0_0_0, 4},
};
void t1352_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1352__CustomAttributeCache = {
1,
NULL,
&t1352_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1352_0_0_0;
extern Il2CppType t1352_1_0_0;
struct t1352;
extern CustomAttributesCache t1352__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1352_DM = 
{
	NULL, NULL, NULL, t1352_IOs, &t1344_0_0_0, t1352_VT, t1352_VTIGM, NULL};
TypeInfo t1352_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CryptographicUnexpectedOperationException", "System.Security.Cryptography", t1352_MIs, NULL, NULL, NULL, &t1352_TI, NULL, &t1352__CustomAttributeCache, &t1352_0_0_0, &t1352_1_0_0, &t1352_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1352), sizeof (t1352), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1518.h"
// Metadata Definition System.Security.Cryptography.CspParameters
extern TypeInfo t1518_TI;
#include "t1518MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6876_MI = 
{
	".ctor", (methodPointerType)&m6876, &t1518_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4345, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1518_m10339_ParameterInfos[] = 
{
	{"dwTypeIn", 0, 134223014, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10339_MI = 
{
	".ctor", (methodPointerType)&m10339, &t1518_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1518_m10339_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4346, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1518_m10340_ParameterInfos[] = 
{
	{"dwTypeIn", 0, 134223015, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"strProviderNameIn", 1, 134223016, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10340_MI = 
{
	".ctor", (methodPointerType)&m10340, &t1518_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9, t1518_m10340_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4347, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1518_m10341_ParameterInfos[] = 
{
	{"dwTypeIn", 0, 134223017, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"strProviderNameIn", 1, 134223018, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"strContainerNameIn", 2, 134223019, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10341_MI = 
{
	".ctor", (methodPointerType)&m10341, &t1518_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9_t9, t1518_m10341_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4348, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1519_0_0_0;
extern void* RuntimeInvoker_t1519 (MethodInfo* method, void* obj, void** args);
MethodInfo m10342_MI = 
{
	"get_Flags", (methodPointerType)&m10342, &t1518_TI, &t1519_0_0_0, RuntimeInvoker_t1519, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4349, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1519_0_0_0;
extern Il2CppType t1519_0_0_0;
static ParameterInfo t1518_m6877_ParameterInfos[] = 
{
	{"value", 0, 134223020, &EmptyCustomAttributesCache, &t1519_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6877_MI = 
{
	"set_Flags", (methodPointerType)&m6877, &t1518_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1518_m6877_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4350, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1518_MIs[] =
{
	&m6876_MI,
	&m10339_MI,
	&m10340_MI,
	&m10341_MI,
	&m10342_MI,
	&m6877_MI,
	NULL
};
extern Il2CppType t1519_0_0_1;
FieldInfo t1518_f0_FieldInfo = 
{
	"_Flags", &t1519_0_0_1, &t1518_TI, offsetof(t1518, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1518_f1_FieldInfo = 
{
	"KeyContainerName", &t2_0_0_6, &t1518_TI, offsetof(t1518, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1518_f2_FieldInfo = 
{
	"KeyNumber", &t125_0_0_6, &t1518_TI, offsetof(t1518, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1518_f3_FieldInfo = 
{
	"ProviderName", &t2_0_0_6, &t1518_TI, offsetof(t1518, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1518_f4_FieldInfo = 
{
	"ProviderType", &t125_0_0_6, &t1518_TI, offsetof(t1518, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1518_FIs[] =
{
	&t1518_f0_FieldInfo,
	&t1518_f1_FieldInfo,
	&t1518_f2_FieldInfo,
	&t1518_f3_FieldInfo,
	&t1518_f4_FieldInfo,
	NULL
};
extern MethodInfo m10342_MI;
extern MethodInfo m6877_MI;
static PropertyInfo t1518____Flags_PropertyInfo = 
{
	&t1518_TI, "Flags", &m10342_MI, &m6877_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1518_PIs[] =
{
	&t1518____Flags_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1518_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1518_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1518_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1518__CustomAttributeCache = {
1,
NULL,
&t1518_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1518_0_0_0;
extern Il2CppType t1518_1_0_0;
struct t1518;
extern CustomAttributesCache t1518__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1518_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1518_VT, t1518_VTIGM, NULL};
TypeInfo t1518_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CspParameters", "System.Security.Cryptography", t1518_MIs, t1518_PIs, t1518_FIs, NULL, &t1518_TI, NULL, &t1518__CustomAttributeCache, &t1518_0_0_0, &t1518_1_0_0, &t1518_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1518), sizeof (t1518), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 5, 0, 0, 4, 0, 0};
#include "t1519.h"
// Metadata Definition System.Security.Cryptography.CspProviderFlags
extern TypeInfo t1519_TI;
#include "t1519MD.h"
static MethodInfo* t1519_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1519_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1519_TI, offsetof(t1519, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1519_0_0_32854;
FieldInfo t1519_f2_FieldInfo = 
{
	"UseMachineKeyStore", &t1519_0_0_32854, &t1519_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1519_0_0_32854;
FieldInfo t1519_f3_FieldInfo = 
{
	"UseDefaultKeyContainer", &t1519_0_0_32854, &t1519_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1519_0_0_32854;
FieldInfo t1519_f4_FieldInfo = 
{
	"UseExistingKey", &t1519_0_0_32854, &t1519_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1519_0_0_32854;
FieldInfo t1519_f5_FieldInfo = 
{
	"NoFlags", &t1519_0_0_32854, &t1519_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1519_0_0_32854;
FieldInfo t1519_f6_FieldInfo = 
{
	"NoPrompt", &t1519_0_0_32854, &t1519_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1519_0_0_32854;
FieldInfo t1519_f7_FieldInfo = 
{
	"UseArchivableKey", &t1519_0_0_32854, &t1519_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1519_0_0_32854;
FieldInfo t1519_f8_FieldInfo = 
{
	"UseNonExportableKey", &t1519_0_0_32854, &t1519_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1519_0_0_32854;
FieldInfo t1519_f9_FieldInfo = 
{
	"UseUserProtectedKey", &t1519_0_0_32854, &t1519_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1519_FIs[] =
{
	&t1519_f1_FieldInfo,
	&t1519_f2_FieldInfo,
	&t1519_f3_FieldInfo,
	&t1519_f4_FieldInfo,
	&t1519_f5_FieldInfo,
	&t1519_f6_FieldInfo,
	&t1519_f7_FieldInfo,
	&t1519_f8_FieldInfo,
	&t1519_f9_FieldInfo,
	NULL
};
static const int32_t t1519_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1519_f2_DefaultValue = 
{
	&t1519_f2_FieldInfo, { (char*)&t1519_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1519_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1519_f3_DefaultValue = 
{
	&t1519_f3_FieldInfo, { (char*)&t1519_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1519_f4_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1519_f4_DefaultValue = 
{
	&t1519_f4_FieldInfo, { (char*)&t1519_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1519_f5_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1519_f5_DefaultValue = 
{
	&t1519_f5_FieldInfo, { (char*)&t1519_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1519_f6_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1519_f6_DefaultValue = 
{
	&t1519_f6_FieldInfo, { (char*)&t1519_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1519_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1519_f7_DefaultValue = 
{
	&t1519_f7_FieldInfo, { (char*)&t1519_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1519_f8_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1519_f8_DefaultValue = 
{
	&t1519_f8_FieldInfo, { (char*)&t1519_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1519_f9_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1519_f9_DefaultValue = 
{
	&t1519_f9_FieldInfo, { (char*)&t1519_f9_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1519_FDVs[] = 
{
	&t1519_f2_DefaultValue,
	&t1519_f3_DefaultValue,
	&t1519_f4_DefaultValue,
	&t1519_f5_DefaultValue,
	&t1519_f6_DefaultValue,
	&t1519_f7_DefaultValue,
	&t1519_f8_DefaultValue,
	&t1519_f9_DefaultValue,
	NULL
};
static Il2CppMethodReference t1519_VT[] =
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
static bool t1519_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1519_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1519_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
CustomAttributesCache t1519__CustomAttributeCache = {
2,
NULL,
&t1519_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1519_1_0_0;
extern CustomAttributesCache t1519__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1519_DM = 
{
	NULL, NULL, NULL, t1519_IOs, &t8_0_0_0, t1519_VT, t1519_VTIGM, NULL};
TypeInfo t1519_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CspProviderFlags", "System.Security.Cryptography", t1519_MIs, NULL, t1519_FIs, NULL, &t125_TI, NULL, &t1519__CustomAttributeCache, &t1519_0_0_0, &t1519_1_0_0, &t1519_DM, NULL, NULL, NULL, t1519_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1519)+ sizeof (Il2CppObject), sizeof (t1519)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 9, 0, 0, 23, 0, 3};
#include "t1531.h"
// Metadata Definition System.Security.Cryptography.DES
extern TypeInfo t1531_TI;
#include "t1531MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10343_MI = 
{
	".ctor", (methodPointerType)&m10343, &t1531_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4351, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10344_MI = 
{
	".cctor", (methodPointerType)&m10344, &t1531_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4352, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1531_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6930_MI = 
{
	"Create", (methodPointerType)&m6930, &t1531_TI, &t1531_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4353, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1531_m10345_ParameterInfos[] = 
{
	{"algName", 0, 134223021, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1531_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10345_MI = 
{
	"Create", (methodPointerType)&m10345, &t1531_TI, &t1531_0_0_0, RuntimeInvoker_t9_t9, t1531_m10345_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4354, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1531_m10346_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223022, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10346_MI = 
{
	"IsWeakKey", (methodPointerType)&m10346, &t1531_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1531_m10346_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4355, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1531_m10347_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223023, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10347_MI = 
{
	"IsSemiWeakKey", (methodPointerType)&m10347, &t1531_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1531_m10347_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4356, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10348_MI = 
{
	"get_Key", (methodPointerType)&m10348, &t1531_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 11, 0, false, false, 4357, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1531_m10349_ParameterInfos[] = 
{
	{"value", 0, 134223024, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10349_MI = 
{
	"set_Key", (methodPointerType)&m10349, &t1531_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1531_m10349_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 12, 1, false, false, 4358, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1531_MIs[] =
{
	&m10343_MI,
	&m10344_MI,
	&m6930_MI,
	&m10345_MI,
	&m10346_MI,
	&m10347_MI,
	&m10348_MI,
	&m10349_MI,
	NULL
};
extern Il2CppType t1972_0_0_51;
FieldInfo t1531_f10_FieldInfo = 
{
	"weakKeys", &t1972_0_0_51, &t1531_TI, offsetof(t1531_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1972_0_0_51;
FieldInfo t1531_f11_FieldInfo = 
{
	"semiWeakKeys", &t1972_0_0_51, &t1531_TI, offsetof(t1531_SFs, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1531_FIs[] =
{
	&t1531_f10_FieldInfo,
	&t1531_f11_FieldInfo,
	NULL
};
extern MethodInfo m10348_MI;
extern MethodInfo m10349_MI;
static PropertyInfo t1531____Key_PropertyInfo = 
{
	&t1531_TI, "Key", &m10348_MI, &m10349_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1531_PIs[] =
{
	&t1531____Key_PropertyInfo,
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
extern MethodInfo m7015_MI;
extern MethodInfo m6935_MI;
extern MethodInfo m7016_MI;
extern MethodInfo m7017_MI;
extern MethodInfo m6896_MI;
extern MethodInfo m7018_MI;
extern MethodInfo m6934_MI;
extern MethodInfo m6897_MI;
extern MethodInfo m6868_MI;
static Il2CppMethodReference t1531_VT[] =
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
	&m10348_MI,
	&m10349_MI,
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
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1531_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1531_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1531__CustomAttributeCache = {
1,
NULL,
&t1531_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1531_0_0_0;
extern Il2CppType t1531_1_0_0;
extern Il2CppType t1425_0_0_0;
struct t1531;
extern CustomAttributesCache t1531__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1531_DM = 
{
	NULL, NULL, NULL, t1531_IOs, &t1425_0_0_0, t1531_VT, t1531_VTIGM, NULL};
TypeInfo t1531_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DES", "System.Security.Cryptography", t1531_MIs, t1531_PIs, t1531_FIs, NULL, &t1531_TI, NULL, &t1531__CustomAttributeCache, &t1531_0_0_0, &t1531_1_0_0, &t1531_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1531), sizeof (t1531), 0, -1, sizeof(t1531_SFs), 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, true, false, 8, 1, 2, 0, 0, 26, 0, 1};
#include "t1973.h"
// Metadata Definition System.Security.Cryptography.DESTransform
extern TypeInfo t1973_TI;
#include "t1973MD.h"
extern Il2CppType t1425_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1973_m10350_ParameterInfos[] = 
{
	{"symmAlgo", 0, 134223025, &EmptyCustomAttributesCache, &t1425_0_0_0},
	{"encryption", 1, 134223026, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"key", 2, 134223027, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"iv", 3, 134223028, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10350_MI = 
{
	".ctor", (methodPointerType)&m10350, &t1973_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t9_t9, t1973_m10350_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 4359, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10351_MI = 
{
	".cctor", (methodPointerType)&m10351, &t1973_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4360, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1973_m10352_ParameterInfos[] = 
{
	{"r", 0, 134223029, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"n", 1, 134223030, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10352_MI = 
{
	"CipherFunct", (methodPointerType)&m10352, &t1973_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125, t1973_m10352_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4361, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
extern Il2CppType t1403_0_0_0;
extern Il2CppType t1403_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1973_m10353_ParameterInfos[] = 
{
	{"input", 0, 134223031, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"output", 1, 134223032, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"permTab", 2, 134223033, &EmptyCustomAttributesCache, &t1403_0_0_0},
	{"preSwap", 3, 134223034, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10353_MI = 
{
	"Permutation", (methodPointerType)&m10353, &t1973_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9_t186, t1973_m10353_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 4, false, false, 4362, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1973_m10354_ParameterInfos[] = 
{
	{"byteBuff", 0, 134223035, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10354_MI = 
{
	"BSwap", (methodPointerType)&m10354, &t1973_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1973_m10354_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4363, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1973_m10355_ParameterInfos[] = 
{
	{"key", 0, 134223036, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10355_MI = 
{
	"SetKey", (methodPointerType)&m10355, &t1973_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1973_m10355_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4364, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1973_m10356_ParameterInfos[] = 
{
	{"input", 0, 134223037, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"output", 1, 134223038, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10356_MI = 
{
	"ProcessBlock", (methodPointerType)&m10356, &t1973_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1973_m10356_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4365, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1973_m10357_ParameterInfos[] = 
{
	{"input", 0, 134223039, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"output", 1, 134223040, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10357_MI = 
{
	"ECB", (methodPointerType)&m10357, &t1973_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1973_m10357_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 2, false, false, 4366, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10358_MI = 
{
	"GetStrongKey", (methodPointerType)&m10358, &t1973_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 4367, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1973_MIs[] =
{
	&m10350_MI,
	&m10351_MI,
	&m10352_MI,
	&m10353_MI,
	&m10354_MI,
	&m10355_MI,
	&m10356_MI,
	&m10357_MI,
	&m10358_MI,
	NULL
};
extern Il2CppType t125_0_0_51;
FieldInfo t1973_f12_FieldInfo = 
{
	"KEY_BIT_SIZE", &t125_0_0_51, &t1973_TI, offsetof(t1973_SFs, f12), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_51;
FieldInfo t1973_f13_FieldInfo = 
{
	"KEY_BYTE_SIZE", &t125_0_0_51, &t1973_TI, offsetof(t1973_SFs, f13), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_51;
FieldInfo t1973_f14_FieldInfo = 
{
	"BLOCK_BIT_SIZE", &t125_0_0_51, &t1973_TI, offsetof(t1973_SFs, f14), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_51;
FieldInfo t1973_f15_FieldInfo = 
{
	"BLOCK_BYTE_SIZE", &t125_0_0_51, &t1973_TI, offsetof(t1973_SFs, f15), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t1973_f16_FieldInfo = 
{
	"keySchedule", &t723_0_0_1, &t1973_TI, offsetof(t1973, f16), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_1;
FieldInfo t1973_f17_FieldInfo = 
{
	"byteBuff", &t723_0_0_1, &t1973_TI, offsetof(t1973, f17), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_1;
FieldInfo t1973_f18_FieldInfo = 
{
	"dwordBuff", &t1403_0_0_1, &t1973_TI, offsetof(t1973, f18), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_49;
FieldInfo t1973_f19_FieldInfo = 
{
	"spBoxes", &t1403_0_0_49, &t1973_TI, offsetof(t1973_SFs, f19), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_49;
FieldInfo t1973_f20_FieldInfo = 
{
	"PC1", &t723_0_0_49, &t1973_TI, offsetof(t1973_SFs, f20), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_49;
FieldInfo t1973_f21_FieldInfo = 
{
	"leftRotTotal", &t723_0_0_49, &t1973_TI, offsetof(t1973_SFs, f21), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_49;
FieldInfo t1973_f22_FieldInfo = 
{
	"PC2", &t723_0_0_49, &t1973_TI, offsetof(t1973_SFs, f22), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_51;
FieldInfo t1973_f23_FieldInfo = 
{
	"ipTab", &t1403_0_0_51, &t1973_TI, offsetof(t1973_SFs, f23), &EmptyCustomAttributesCache};
extern Il2CppType t1403_0_0_51;
FieldInfo t1973_f24_FieldInfo = 
{
	"fpTab", &t1403_0_0_51, &t1973_TI, offsetof(t1973_SFs, f24), &EmptyCustomAttributesCache};
static FieldInfo* t1973_FIs[] =
{
	&t1973_f12_FieldInfo,
	&t1973_f13_FieldInfo,
	&t1973_f14_FieldInfo,
	&t1973_f15_FieldInfo,
	&t1973_f16_FieldInfo,
	&t1973_f17_FieldInfo,
	&t1973_f18_FieldInfo,
	&t1973_f19_FieldInfo,
	&t1973_f20_FieldInfo,
	&t1973_f21_FieldInfo,
	&t1973_f22_FieldInfo,
	&t1973_f23_FieldInfo,
	&t1973_f24_FieldInfo,
	NULL
};
extern MethodInfo m8140_MI;
extern MethodInfo m8139_MI;
extern MethodInfo m8142_MI;
extern MethodInfo m8149_MI;
extern MethodInfo m8156_MI;
extern MethodInfo m8141_MI;
extern MethodInfo m8143_MI;
extern MethodInfo m10357_MI;
extern MethodInfo m8144_MI;
extern MethodInfo m8145_MI;
extern MethodInfo m8146_MI;
extern MethodInfo m8147_MI;
static Il2CppMethodReference t1973_VT[] =
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
	&m10357_MI,
	&m8144_MI,
	&m8145_MI,
	&m8146_MI,
	&m8147_MI,
	&m8149_MI,
	&m8156_MI,
};
static bool t1973_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t1416_0_0_0;
static Il2CppInterfaceOffsetPair t1973_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1973_0_0_0;
extern Il2CppType t1973_1_0_0;
extern Il2CppType t1633_0_0_0;
struct t1973;
const Il2CppTypeDefinitionMetadata t1973_DM = 
{
	NULL, NULL, NULL, t1973_IOs, &t1633_0_0_0, t1973_VT, t1973_VTIGM, NULL};
TypeInfo t1973_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DESTransform", "System.Security.Cryptography", t1973_MIs, NULL, t1973_FIs, NULL, &t1973_TI, NULL, &EmptyCustomAttributesCache, &t1973_0_0_0, &t1973_1_0_0, &t1973_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1973), sizeof (t1973), 0, -1, sizeof(t1973_SFs), 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, true, true, false, 9, 0, 13, 0, 0, 18, 0, 2};
#include "t1974.h"
// Metadata Definition System.Security.Cryptography.DESCryptoServiceProvider
extern TypeInfo t1974_TI;
#include "t1974MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10359_MI = 
{
	".ctor", (methodPointerType)&m10359, &t1974_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4368, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1974_m10360_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223041, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"rgbIV", 1, 134223042, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t1416_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10360_MI = 
{
	"CreateDecryptor", (methodPointerType)&m10360, &t1974_TI, &t1416_0_0_0, RuntimeInvoker_t9_t9_t9, t1974_m10360_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 21, 2, false, false, 4369, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1974_m10361_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223043, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"rgbIV", 1, 134223044, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t1416_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10361_MI = 
{
	"CreateEncryptor", (methodPointerType)&m10361, &t1974_TI, &t1416_0_0_0, RuntimeInvoker_t9_t9_t9, t1974_m10361_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 2, false, false, 4370, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10362_MI = 
{
	"GenerateIV", (methodPointerType)&m10362, &t1974_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 24, 0, false, false, 4371, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10363_MI = 
{
	"GenerateKey", (methodPointerType)&m10363, &t1974_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 25, 0, false, false, 4372, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1974_MIs[] =
{
	&m10359_MI,
	&m10360_MI,
	&m10361_MI,
	&m10362_MI,
	&m10363_MI,
	NULL
};
extern MethodInfo m10360_MI;
extern MethodInfo m10361_MI;
extern MethodInfo m10362_MI;
extern MethodInfo m10363_MI;
static Il2CppMethodReference t1974_VT[] =
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
	&m10348_MI,
	&m10349_MI,
	&m7015_MI,
	&m6935_MI,
	&m7016_MI,
	&m7017_MI,
	&m6896_MI,
	&m7018_MI,
	&m6934_MI,
	&m6897_MI,
	&m10360_MI,
	&m6868_MI,
	&m10361_MI,
	&m10362_MI,
	&m10363_MI,
};
static bool t1974_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1974_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1974_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1974__CustomAttributeCache = {
1,
NULL,
&t1974_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1974_0_0_0;
extern Il2CppType t1974_1_0_0;
struct t1974;
extern CustomAttributesCache t1974__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1974_DM = 
{
	NULL, NULL, NULL, t1974_IOs, &t1531_0_0_0, t1974_VT, t1974_VTIGM, NULL};
TypeInfo t1974_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DESCryptoServiceProvider", "System.Security.Cryptography", t1974_MIs, NULL, NULL, NULL, &t1974_TI, NULL, &t1974__CustomAttributeCache, &t1974_0_0_0, &t1974_1_0_0, &t1974_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1974), sizeof (t1974), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 5, 0, 0, 0, 0, 26, 0, 1};
#include "t1207.h"
// Metadata Definition System.Security.Cryptography.DSA
extern TypeInfo t1207_TI;
#include "t1207MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10364_MI = 
{
	".ctor", (methodPointerType)&m10364, &t1207_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4373, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1207_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5760_MI = 
{
	"Create", (methodPointerType)&m5760, &t1207_TI, &t1207_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4374, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1207_m10365_ParameterInfos[] = 
{
	{"algName", 0, 134223045, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1207_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10365_MI = 
{
	"Create", (methodPointerType)&m10365, &t1207_TI, &t1207_0_0_0, RuntimeInvoker_t9_t9, t1207_m10365_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4375, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1207_m12070_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223046, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12070_MI = 
{
	"CreateSignature", NULL, &t1207_TI, &t723_0_0_0, RuntimeInvoker_t9_t9, t1207_m12070_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 10, 1, false, false, 4376, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1207_m5759_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223047, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1343_0_0_0;
extern void* RuntimeInvoker_t1343_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m5759_MI = 
{
	"ExportParameters", NULL, &t1207_TI, &t1343_0_0_0, RuntimeInvoker_t1343_t186, t1207_m5759_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 11, 1, false, false, 4377, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1343_0_0_0;
extern Il2CppType t1343_0_0_0;
static ParameterInfo t1207_m10366_ParameterInfos[] = 
{
	{"parameters", 0, 134223048, &EmptyCustomAttributesCache, &t1343_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1343 (MethodInfo* method, void* obj, void** args);
MethodInfo m10366_MI = 
{
	"ZeroizePrivateKey", (methodPointerType)&m10366, &t1207_TI, &t122_0_0_0, RuntimeInvoker_t122_t1343, t1207_m10366_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4378, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1207_m10367_ParameterInfos[] = 
{
	{"xmlString", 0, 134223049, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10367_MI = 
{
	"FromXmlString", (methodPointerType)&m10367, &t1207_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1207_m10367_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 4379, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1343_0_0_0;
static ParameterInfo t1207_m5761_ParameterInfos[] = 
{
	{"parameters", 0, 134223050, &EmptyCustomAttributesCache, &t1343_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1343 (MethodInfo* method, void* obj, void** args);
MethodInfo m5761_MI = 
{
	"ImportParameters", NULL, &t1207_TI, &t122_0_0_0, RuntimeInvoker_t122_t1343, t1207_m5761_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 12, 1, false, false, 4380, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1207_m10368_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223051, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10368_MI = 
{
	"ToXmlString", (methodPointerType)&m10368, &t1207_TI, &t2_0_0_0, RuntimeInvoker_t9_t186, t1207_m10368_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 4381, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1207_m12069_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223052, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"rgbSignature", 1, 134223053, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12069_MI = 
{
	"VerifySignature", NULL, &t1207_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1207_m12069_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 13, 2, false, false, 4382, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1207_MIs[] =
{
	&m10364_MI,
	&m5760_MI,
	&m10365_MI,
	&m12070_MI,
	&m5759_MI,
	&m10366_MI,
	&m10367_MI,
	&m5761_MI,
	&m10368_MI,
	&m12069_MI,
	NULL
};
extern MethodInfo m10367_MI;
extern MethodInfo m10368_MI;
static Il2CppMethodReference t1207_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7024_MI,
	&m5817_MI,
	&m6882_MI,
	NULL,
	&m10367_MI,
	&m10368_MI,
	NULL,
	NULL,
	NULL,
	NULL,
};
static bool t1207_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1207_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1207_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1207__CustomAttributeCache = {
1,
NULL,
&t1207_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1207_0_0_0;
extern Il2CppType t1207_1_0_0;
struct t1207;
extern CustomAttributesCache t1207__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1207_DM = 
{
	NULL, NULL, NULL, t1207_IOs, &t1203_0_0_0, t1207_VT, t1207_VTIGM, NULL};
TypeInfo t1207_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSA", "System.Security.Cryptography", t1207_MIs, NULL, NULL, NULL, &t1207_TI, NULL, &t1207__CustomAttributeCache, &t1207_0_0_0, &t1207_1_0_0, &t1207_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1207), sizeof (t1207), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 0, 0, 0, 0, 14, 0, 1};
#include "t1342.h"
// Metadata Definition System.Security.Cryptography.DSACryptoServiceProvider
extern TypeInfo t1342_TI;
#include "t1342MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10369_MI = 
{
	".ctor", (methodPointerType)&m10369, &t1342_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4383, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1342_m5772_ParameterInfos[] = 
{
	{"dwKeySize", 0, 134223054, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5772_MI = 
{
	".ctor", (methodPointerType)&m5772, &t1342_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1342_m5772_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4384, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t1518_0_0_0;
static ParameterInfo t1342_m10370_ParameterInfos[] = 
{
	{"dwKeySize", 0, 134223055, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"parameters", 1, 134223056, &EmptyCustomAttributesCache, &t1518_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10370_MI = 
{
	".ctor", (methodPointerType)&m10370, &t1342_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9, t1342_m10370_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4385, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10371_MI = 
{
	".cctor", (methodPointerType)&m10371, &t1342_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4386, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10372_MI = 
{
	"Finalize", (methodPointerType)&m10372, &t1342_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4387, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10373_MI = 
{
	"get_KeySize", (methodPointerType)&m10373, &t1342_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 5, 0, false, false, 4388, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m5758_MI = 
{
	"get_PublicOnly", (methodPointerType)&m5758, &t1342_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4389, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1342_m10374_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223057, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1343_0_0_0;
extern void* RuntimeInvoker_t1343_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10374_MI = 
{
	"ExportParameters", (methodPointerType)&m10374, &t1342_TI, &t1343_0_0_0, RuntimeInvoker_t1343_t186, t1342_m10374_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 1, false, false, 4390, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1343_0_0_0;
static ParameterInfo t1342_m10375_ParameterInfos[] = 
{
	{"parameters", 0, 134223058, &EmptyCustomAttributesCache, &t1343_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1343 (MethodInfo* method, void* obj, void** args);
MethodInfo m10375_MI = 
{
	"ImportParameters", (methodPointerType)&m10375, &t1342_TI, &t122_0_0_0, RuntimeInvoker_t122_t1343, t1342_m10375_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 4391, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1342_m10376_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223059, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10376_MI = 
{
	"CreateSignature", (methodPointerType)&m10376, &t1342_TI, &t723_0_0_0, RuntimeInvoker_t9_t9, t1342_m10376_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 4392, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1342_m10377_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223060, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"rgbSignature", 1, 134223061, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10377_MI = 
{
	"VerifySignature", (methodPointerType)&m10377, &t1342_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1342_m10377_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 4393, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1342_m10378_ParameterInfos[] = 
{
	{"disposing", 0, 134223062, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10378_MI = 
{
	"Dispose", (methodPointerType)&m10378, &t1342_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1342_m10378_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 7, 1, false, false, 4394, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1427_0_0_0;
extern Il2CppType t1427_0_0_0;
static ParameterInfo t1342_m10379_ParameterInfos[] = 
{
	{"sender", 0, 134223063, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"e", 1, 134223064, &EmptyCustomAttributesCache, &t1427_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10379_MI = 
{
	"OnKeyGenerated", (methodPointerType)&m10379, &t1342_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1342_m10379_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4395, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1342_MIs[] =
{
	&m10369_MI,
	&m5772_MI,
	&m10370_MI,
	&m10371_MI,
	&m10372_MI,
	&m10373_MI,
	&m5758_MI,
	&m10374_MI,
	&m10375_MI,
	&m10376_MI,
	&m10377_MI,
	&m10378_MI,
	&m10379_MI,
	NULL
};
extern Il2CppType t1625_0_0_1;
FieldInfo t1342_f2_FieldInfo = 
{
	"store", &t1625_0_0_1, &t1342_TI, offsetof(t1342, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1342_f3_FieldInfo = 
{
	"persistKey", &t124_0_0_1, &t1342_TI, offsetof(t1342, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1342_f4_FieldInfo = 
{
	"persisted", &t124_0_0_1, &t1342_TI, offsetof(t1342, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1342_f5_FieldInfo = 
{
	"privateKeyExportable", &t124_0_0_1, &t1342_TI, offsetof(t1342, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1342_f6_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t1342_TI, offsetof(t1342, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1624_0_0_1;
FieldInfo t1342_f7_FieldInfo = 
{
	"dsa", &t1624_0_0_1, &t1342_TI, offsetof(t1342, f7), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_17;
FieldInfo t1342_f8_FieldInfo = 
{
	"useMachineKeyStore", &t124_0_0_17, &t1342_TI, offsetof(t1342_SFs, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1342_FIs[] =
{
	&t1342_f2_FieldInfo,
	&t1342_f3_FieldInfo,
	&t1342_f4_FieldInfo,
	&t1342_f5_FieldInfo,
	&t1342_f6_FieldInfo,
	&t1342_f7_FieldInfo,
	&t1342_f8_FieldInfo,
	NULL
};
extern MethodInfo m10373_MI;
static PropertyInfo t1342____KeySize_PropertyInfo = 
{
	&t1342_TI, "KeySize", &m10373_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5758_MI;
extern CustomAttributesCache t1342__CustomAttributeCache_t1342____PublicOnly_PropertyInfo;
static PropertyInfo t1342____PublicOnly_PropertyInfo = 
{
	&t1342_TI, "PublicOnly", &m5758_MI, NULL, 0, &t1342__CustomAttributeCache_t1342____PublicOnly_PropertyInfo};
static PropertyInfo* t1342_PIs[] =
{
	&t1342____KeySize_PropertyInfo,
	&t1342____PublicOnly_PropertyInfo,
	NULL
};
extern MethodInfo m10372_MI;
extern MethodInfo m10378_MI;
extern MethodInfo m10376_MI;
extern MethodInfo m10374_MI;
extern MethodInfo m10375_MI;
extern MethodInfo m10377_MI;
static Il2CppMethodReference t1342_VT[] =
{
	&m671_MI,
	&m10372_MI,
	&m672_MI,
	&m673_MI,
	&m7024_MI,
	&m10373_MI,
	&m6882_MI,
	&m10378_MI,
	&m10367_MI,
	&m10368_MI,
	&m10376_MI,
	&m10374_MI,
	&m10375_MI,
	&m10377_MI,
};
static bool t1342_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t2625_0_0_0;
static const Il2CppType* t1342_ITIs[] = 
{
	&t2625_0_0_0,
};
static Il2CppInterfaceOffsetPair t1342_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t2625_0_0_0, 14},
};
void t1342_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1342_CustomAttributesCacheGenerator_t1342____PublicOnly_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, false, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1342__CustomAttributeCache = {
1,
NULL,
&t1342_CustomAttributesCacheGenerator
};
CustomAttributesCache t1342__CustomAttributeCache_t1342____PublicOnly_PropertyInfo = {
1,
NULL,
&t1342_CustomAttributesCacheGenerator_t1342____PublicOnly_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1342_0_0_0;
extern Il2CppType t1342_1_0_0;
struct t1342;
extern CustomAttributesCache t1342__CustomAttributeCache;
extern CustomAttributesCache t1342__CustomAttributeCache_t1342____PublicOnly_PropertyInfo;
const Il2CppTypeDefinitionMetadata t1342_DM = 
{
	NULL, NULL, t1342_ITIs, t1342_IOs, &t1207_0_0_0, t1342_VT, t1342_VTIGM, NULL};
TypeInfo t1342_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSACryptoServiceProvider", "System.Security.Cryptography", t1342_MIs, t1342_PIs, t1342_FIs, NULL, &t1342_TI, NULL, &t1342__CustomAttributeCache, &t1342_0_0_0, &t1342_1_0_0, &t1342_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1342), sizeof (t1342), 0, -1, sizeof(t1342_SFs), 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, true, false, 13, 2, 7, 0, 0, 14, 1, 2};
#include "t1343.h"
// Metadata Definition System.Security.Cryptography.DSAParameters
extern TypeInfo t1343_TI;
#include "t1343MD.h"
static MethodInfo* t1343_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_6;
FieldInfo t1343_f0_FieldInfo = 
{
	"Counter", &t125_0_0_6, &t1343_TI, offsetof(t1343, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_6;
FieldInfo t1343_f1_FieldInfo = 
{
	"G", &t723_0_0_6, &t1343_TI, offsetof(t1343, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_6;
FieldInfo t1343_f2_FieldInfo = 
{
	"J", &t723_0_0_6, &t1343_TI, offsetof(t1343, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_6;
FieldInfo t1343_f3_FieldInfo = 
{
	"P", &t723_0_0_6, &t1343_TI, offsetof(t1343, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_6;
FieldInfo t1343_f4_FieldInfo = 
{
	"Q", &t723_0_0_6, &t1343_TI, offsetof(t1343, f4) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_6;
FieldInfo t1343_f5_FieldInfo = 
{
	"Seed", &t723_0_0_6, &t1343_TI, offsetof(t1343, f5) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_134;
FieldInfo t1343_f6_FieldInfo = 
{
	"X", &t723_0_0_134, &t1343_TI, offsetof(t1343, f6) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t723_0_0_6;
FieldInfo t1343_f7_FieldInfo = 
{
	"Y", &t723_0_0_6, &t1343_TI, offsetof(t1343, f7) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1343_FIs[] =
{
	&t1343_f0_FieldInfo,
	&t1343_f1_FieldInfo,
	&t1343_f2_FieldInfo,
	&t1343_f3_FieldInfo,
	&t1343_f4_FieldInfo,
	&t1343_f5_FieldInfo,
	&t1343_f6_FieldInfo,
	&t1343_f7_FieldInfo,
	NULL
};
static Il2CppMethodReference t1343_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1343_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1343_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1343__CustomAttributeCache = {
1,
NULL,
&t1343_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1343_1_0_0;
extern CustomAttributesCache t1343__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1343_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1343_VT, t1343_VTIGM, NULL};
TypeInfo t1343_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSAParameters", "System.Security.Cryptography", t1343_MIs, NULL, t1343_FIs, NULL, &t1343_TI, NULL, &t1343__CustomAttributeCache, &t1343_0_0_0, &t1343_1_0_0, &t1343_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t1343_marshal, (methodPointerType)t1343_marshal_back, (methodPointerType)t1343_marshal_cleanup, sizeof (t1343)+ sizeof (Il2CppObject), sizeof (t1343)+ sizeof (Il2CppObject), 0, sizeof(t1343_marshaled), 0, 0, -1, 1057033, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 8, 0, 0, 4, 0, 0};
#include "t1526.h"
// Metadata Definition System.Security.Cryptography.DSASignatureDeformatter
extern TypeInfo t1526_TI;
#include "t1526MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10380_MI = 
{
	".ctor", (methodPointerType)&m10380, &t1526_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4396, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1203_0_0_0;
static ParameterInfo t1526_m6908_ParameterInfos[] = 
{
	{"key", 0, 134223065, &EmptyCustomAttributesCache, &t1203_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6908_MI = 
{
	".ctor", (methodPointerType)&m6908, &t1526_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1526_m6908_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4397, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1526_m6909_ParameterInfos[] = 
{
	{"strName", 0, 134223066, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6909_MI = 
{
	"SetHashAlgorithm", (methodPointerType)&m6909, &t1526_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1526_m6909_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4398, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1203_0_0_0;
static ParameterInfo t1526_m10381_ParameterInfos[] = 
{
	{"key", 0, 134223067, &EmptyCustomAttributesCache, &t1203_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10381_MI = 
{
	"SetKey", (methodPointerType)&m10381, &t1526_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1526_m10381_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4399, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t1526_m6910_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223068, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"rgbSignature", 1, 134223069, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6910_MI = 
{
	"VerifySignature", (methodPointerType)&m6910, &t1526_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1526_m6910_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, false, 4400, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1526_MIs[] =
{
	&m10380_MI,
	&m6908_MI,
	&m6909_MI,
	&m10381_MI,
	&m6910_MI,
	NULL
};
extern Il2CppType t1207_0_0_1;
FieldInfo t1526_f0_FieldInfo = 
{
	"dsa", &t1207_0_0_1, &t1526_TI, offsetof(t1526, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1526_FIs[] =
{
	&t1526_f0_FieldInfo,
	NULL
};
extern MethodInfo m6909_MI;
extern MethodInfo m10381_MI;
extern MethodInfo m6910_MI;
static Il2CppMethodReference t1526_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m6909_MI,
	&m10381_MI,
	&m6910_MI,
};
static bool t1526_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
void t1526_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1526__CustomAttributeCache = {
1,
NULL,
&t1526_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1526_0_0_0;
extern Il2CppType t1526_1_0_0;
struct t1526;
extern CustomAttributesCache t1526__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1526_DM = 
{
	NULL, NULL, NULL, NULL, &t1480_0_0_0, t1526_VT, t1526_VTIGM, NULL};
TypeInfo t1526_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSASignatureDeformatter", "System.Security.Cryptography", t1526_MIs, NULL, t1526_FIs, NULL, &t1526_TI, NULL, &t1526__CustomAttributeCache, &t1526_0_0_0, &t1526_1_0_0, &t1526_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1526), sizeof (t1526), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 1, 0, 0, 7, 0, 0};
#include "t1975.h"
// Metadata Definition System.Security.Cryptography.DSASignatureFormatter
extern TypeInfo t1975_TI;
#include "t1975MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10382_MI = 
{
	".ctor", (methodPointerType)&m10382, &t1975_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4401, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1975_m10383_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223070, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10383_MI = 
{
	"CreateSignature", (methodPointerType)&m10383, &t1975_TI, &t723_0_0_0, RuntimeInvoker_t9_t9, t1975_m10383_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 1, false, false, 4402, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1975_m10384_ParameterInfos[] = 
{
	{"strName", 0, 134223071, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10384_MI = 
{
	"SetHashAlgorithm", (methodPointerType)&m10384, &t1975_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1975_m10384_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4403, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1203_0_0_0;
static ParameterInfo t1975_m10385_ParameterInfos[] = 
{
	{"key", 0, 134223072, &EmptyCustomAttributesCache, &t1203_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10385_MI = 
{
	"SetKey", (methodPointerType)&m10385, &t1975_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1975_m10385_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4404, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1975_MIs[] =
{
	&m10382_MI,
	&m10383_MI,
	&m10384_MI,
	&m10385_MI,
	NULL
};
extern Il2CppType t1207_0_0_1;
FieldInfo t1975_f0_FieldInfo = 
{
	"dsa", &t1207_0_0_1, &t1975_TI, offsetof(t1975, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1975_FIs[] =
{
	&t1975_f0_FieldInfo,
	NULL
};
extern MethodInfo m10384_MI;
extern MethodInfo m10385_MI;
extern MethodInfo m10383_MI;
static Il2CppMethodReference t1975_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10384_MI,
	&m10385_MI,
	&m10383_MI,
};
static bool t1975_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
void t1975_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1975__CustomAttributeCache = {
1,
NULL,
&t1975_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1975_0_0_0;
extern Il2CppType t1975_1_0_0;
struct t1975;
extern CustomAttributesCache t1975__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1975_DM = 
{
	NULL, NULL, NULL, NULL, &t1482_0_0_0, t1975_VT, t1975_VTIGM, NULL};
TypeInfo t1975_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSASignatureFormatter", "System.Security.Cryptography", t1975_MIs, NULL, t1975_FIs, NULL, &t1975_TI, NULL, &t1975__CustomAttributeCache, &t1975_0_0_0, &t1975_1_0_0, &t1975_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1975), sizeof (t1975), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 7, 0, 0};
#include "t1523.h"
// Metadata Definition System.Security.Cryptography.HMAC
extern TypeInfo t1523_TI;
#include "t1523MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10386_MI = 
{
	".ctor", (methodPointerType)&m10386, &t1523_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4405, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10387_MI = 
{
	"get_BlockSizeValue", (methodPointerType)&m10387, &t1523_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2180, 0, 255, 0, false, false, 4406, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1523_m10388_ParameterInfos[] = 
{
	{"value", 0, 134223073, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10388_MI = 
{
	"set_BlockSizeValue", (methodPointerType)&m10388, &t1523_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1523_m10388_ParameterInfos, &EmptyCustomAttributesCache, 2180, 0, 255, 1, false, false, 4407, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1523_m10389_ParameterInfos[] = 
{
	{"value", 0, 134223074, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10389_MI = 
{
	"set_HashName", (methodPointerType)&m10389, &t1523_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1523_m10389_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4408, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10390_MI = 
{
	"get_Key", (methodPointerType)&m10390, &t1523_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 4409, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1523_m6901_ParameterInfos[] = 
{
	{"value", 0, 134223075, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6901_MI = 
{
	"set_Key", (methodPointerType)&m6901, &t1523_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1523_m6901_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 16, 1, false, false, 4410, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1622_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10391_MI = 
{
	"get_Block", (methodPointerType)&m10391, &t1523_TI, &t1622_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4411, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t568_0_0_0;
static ParameterInfo t1523_m10392_ParameterInfos[] = 
{
	{"key", 0, 134223076, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"padding", 1, 134223077, &EmptyCustomAttributesCache, &t568_0_0_0},
};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10392_MI = 
{
	"KeySetup", (methodPointerType)&m10392, &t1523_TI, &t723_0_0_0, RuntimeInvoker_t9_t9_t186, t1523_m10392_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4412, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1523_m10393_ParameterInfos[] = 
{
	{"disposing", 0, 134223078, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10393_MI = 
{
	"Dispose", (methodPointerType)&m10393, &t1523_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1523_m10393_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 14, 1, false, false, 4413, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1523_m10394_ParameterInfos[] = 
{
	{"rgb", 0, 134223079, &EmptyCustomAttributesCache, &t723_0_0_0},
	{"ib", 1, 134223080, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cb", 2, 134223081, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10394_MI = 
{
	"HashCore", (methodPointerType)&m10394, &t1523_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1523_m10394_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4414, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10395_MI = 
{
	"HashFinal", (methodPointerType)&m10395, &t1523_TI, &t723_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4415, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10396_MI = 
{
	"Initialize", (methodPointerType)&m10396, &t1523_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4416, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1523_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6900_MI = 
{
	"Create", (methodPointerType)&m6900, &t1523_TI, &t1523_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4417, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1523_m10397_ParameterInfos[] = 
{
	{"algorithmName", 0, 134223082, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1523_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10397_MI = 
{
	"Create", (methodPointerType)&m10397, &t1523_TI, &t1523_0_0_0, RuntimeInvoker_t9_t9, t1523_m10397_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4418, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1523_MIs[] =
{
	&m10386_MI,
	&m10387_MI,
	&m10388_MI,
	&m10389_MI,
	&m10390_MI,
	&m6901_MI,
	&m10391_MI,
	&m10392_MI,
	&m10393_MI,
	&m10394_MI,
	&m10395_MI,
	&m10396_MI,
	&m6900_MI,
	&m10397_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t1523_f5_FieldInfo = 
{
	"_disposed", &t124_0_0_1, &t1523_TI, offsetof(t1523, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1523_f6_FieldInfo = 
{
	"_hashName", &t2_0_0_1, &t1523_TI, offsetof(t1523, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1359_0_0_1;
FieldInfo t1523_f7_FieldInfo = 
{
	"_algo", &t1359_0_0_1, &t1523_TI, offsetof(t1523, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1622_0_0_1;
FieldInfo t1523_f8_FieldInfo = 
{
	"_block", &t1622_0_0_1, &t1523_TI, offsetof(t1523, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1523_f9_FieldInfo = 
{
	"_blockSizeValue", &t125_0_0_1, &t1523_TI, offsetof(t1523, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1523_FIs[] =
{
	&t1523_f5_FieldInfo,
	&t1523_f6_FieldInfo,
	&t1523_f7_FieldInfo,
	&t1523_f8_FieldInfo,
	&t1523_f9_FieldInfo,
	NULL
};
extern MethodInfo m10387_MI;
extern MethodInfo m10388_MI;
static PropertyInfo t1523____BlockSizeValue_PropertyInfo = 
{
	&t1523_TI, "BlockSizeValue", &m10387_MI, &m10388_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10389_MI;
static PropertyInfo t1523____HashName_PropertyInfo = 
{
	&t1523_TI, "HashName", NULL, &m10389_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10390_MI;
extern MethodInfo m6901_MI;
static PropertyInfo t1523____Key_PropertyInfo = 
{
	&t1523_TI, "Key", &m10390_MI, &m6901_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10391_MI;
static PropertyInfo t1523____Block_PropertyInfo = 
{
	&t1523_TI, "Block", &m10391_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1523_PIs[] =
{
	&t1523____BlockSizeValue_PropertyInfo,
	&t1523____HashName_PropertyInfo,
	&t1523____Key_PropertyInfo,
	&t1523____Block_PropertyInfo,
	NULL
};
extern MethodInfo m7026_MI;
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
static Il2CppMethodReference t1523_VT[] =
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
static bool t1523_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1523_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1523_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1523__CustomAttributeCache = {
1,
NULL,
&t1523_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1523_0_0_0;
extern Il2CppType t1523_1_0_0;
extern Il2CppType t1441_0_0_0;
struct t1523;
extern CustomAttributesCache t1523__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1523_DM = 
{
	NULL, NULL, NULL, t1523_IOs, &t1441_0_0_0, t1523_VT, t1523_VTIGM, NULL};
TypeInfo t1523_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMAC", "System.Security.Cryptography", t1523_MIs, t1523_PIs, t1523_FIs, NULL, &t1523_TI, NULL, &t1523__CustomAttributeCache, &t1523_0_0_0, &t1523_1_0_0, &t1523_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1523), sizeof (t1523), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 14, 4, 5, 0, 0, 17, 0, 2};
#include "t1976.h"
// Metadata Definition System.Security.Cryptography.HMACMD5
extern TypeInfo t1976_TI;
#include "t1976MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10398_MI = 
{
	".ctor", (methodPointerType)&m10398, &t1976_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4419, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1976_m10399_ParameterInfos[] = 
{
	{"key", 0, 134223083, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10399_MI = 
{
	".ctor", (methodPointerType)&m10399, &t1976_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1976_m10399_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4420, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1976_MIs[] =
{
	&m10398_MI,
	&m10399_MI,
	NULL
};
static Il2CppMethodReference t1976_VT[] =
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
static bool t1976_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1976_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1976_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1976__CustomAttributeCache = {
1,
NULL,
&t1976_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1976_0_0_0;
extern Il2CppType t1976_1_0_0;
struct t1976;
extern CustomAttributesCache t1976__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1976_DM = 
{
	NULL, NULL, NULL, t1976_IOs, &t1523_0_0_0, t1976_VT, t1976_VTIGM, NULL};
TypeInfo t1976_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACMD5", "System.Security.Cryptography", t1976_MIs, NULL, NULL, NULL, &t1976_TI, NULL, &t1976__CustomAttributeCache, &t1976_0_0_0, &t1976_1_0_0, &t1976_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1976), sizeof (t1976), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 2, 0, 0, 0, 0, 17, 0, 2};
#include "t1977.h"
// Metadata Definition System.Security.Cryptography.HMACRIPEMD160
extern TypeInfo t1977_TI;
#include "t1977MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10400_MI = 
{
	".ctor", (methodPointerType)&m10400, &t1977_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4421, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1977_m10401_ParameterInfos[] = 
{
	{"key", 0, 134223084, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10401_MI = 
{
	".ctor", (methodPointerType)&m10401, &t1977_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1977_m10401_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4422, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1977_MIs[] =
{
	&m10400_MI,
	&m10401_MI,
	NULL
};
static Il2CppMethodReference t1977_VT[] =
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
static bool t1977_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1977_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1977_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1977__CustomAttributeCache = {
1,
NULL,
&t1977_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1977_0_0_0;
extern Il2CppType t1977_1_0_0;
struct t1977;
extern CustomAttributesCache t1977__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1977_DM = 
{
	NULL, NULL, NULL, t1977_IOs, &t1523_0_0_0, t1977_VT, t1977_VTIGM, NULL};
TypeInfo t1977_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACRIPEMD160", "System.Security.Cryptography", t1977_MIs, NULL, NULL, NULL, &t1977_TI, NULL, &t1977__CustomAttributeCache, &t1977_0_0_0, &t1977_1_0_0, &t1977_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1977), sizeof (t1977), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 2, 0, 0, 0, 0, 17, 0, 2};
#include "t1522.h"
// Metadata Definition System.Security.Cryptography.HMACSHA1
extern TypeInfo t1522_TI;
#include "t1522MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10402_MI = 
{
	".ctor", (methodPointerType)&m10402, &t1522_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4423, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1522_m10403_ParameterInfos[] = 
{
	{"key", 0, 134223085, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10403_MI = 
{
	".ctor", (methodPointerType)&m10403, &t1522_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1522_m10403_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4424, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1522_MIs[] =
{
	&m10402_MI,
	&m10403_MI,
	NULL
};
static Il2CppMethodReference t1522_VT[] =
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
static bool t1522_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1522_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1522_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1522__CustomAttributeCache = {
1,
NULL,
&t1522_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1522_0_0_0;
extern Il2CppType t1522_1_0_0;
struct t1522;
extern CustomAttributesCache t1522__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1522_DM = 
{
	NULL, NULL, NULL, t1522_IOs, &t1523_0_0_0, t1522_VT, t1522_VTIGM, NULL};
TypeInfo t1522_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACSHA1", "System.Security.Cryptography", t1522_MIs, NULL, NULL, NULL, &t1522_TI, NULL, &t1522__CustomAttributeCache, &t1522_0_0_0, &t1522_1_0_0, &t1522_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1522), sizeof (t1522), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 2, 0, 0, 0, 0, 17, 0, 2};
#include "t1978.h"
// Metadata Definition System.Security.Cryptography.HMACSHA256
extern TypeInfo t1978_TI;
#include "t1978MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10404_MI = 
{
	".ctor", (methodPointerType)&m10404, &t1978_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4425, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1978_m10405_ParameterInfos[] = 
{
	{"key", 0, 134223086, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10405_MI = 
{
	".ctor", (methodPointerType)&m10405, &t1978_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1978_m10405_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4426, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1978_MIs[] =
{
	&m10404_MI,
	&m10405_MI,
	NULL
};
static Il2CppMethodReference t1978_VT[] =
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
static bool t1978_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1978_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1978_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1978__CustomAttributeCache = {
1,
NULL,
&t1978_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1978_0_0_0;
extern Il2CppType t1978_1_0_0;
struct t1978;
extern CustomAttributesCache t1978__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1978_DM = 
{
	NULL, NULL, NULL, t1978_IOs, &t1523_0_0_0, t1978_VT, t1978_VTIGM, NULL};
TypeInfo t1978_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACSHA256", "System.Security.Cryptography", t1978_MIs, NULL, NULL, NULL, &t1978_TI, NULL, &t1978__CustomAttributeCache, &t1978_0_0_0, &t1978_1_0_0, &t1978_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1978), sizeof (t1978), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 2, 0, 0, 0, 0, 17, 0, 2};
#include "t1979.h"
// Metadata Definition System.Security.Cryptography.HMACSHA384
extern TypeInfo t1979_TI;
#include "t1979MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10406_MI = 
{
	".ctor", (methodPointerType)&m10406, &t1979_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4427, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t1979_m10407_ParameterInfos[] = 
{
	{"key", 0, 134223087, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10407_MI = 
{
	".ctor", (methodPointerType)&m10407, &t1979_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1979_m10407_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4428, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10408_MI = 
{
	".cctor", (methodPointerType)&m10408, &t1979_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4429, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1979_m10409_ParameterInfos[] = 
{
	{"value", 0, 134223088, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10409_MI = 
{
	"set_ProduceLegacyHmacValues", (methodPointerType)&m10409, &t1979_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1979_m10409_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4430, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1979_MIs[] =
{
	&m10406_MI,
	&m10407_MI,
	&m10408_MI,
	&m10409_MI,
	NULL
};
extern Il2CppType t124_0_0_17;
FieldInfo t1979_f10_FieldInfo = 
{
	"legacy_mode", &t124_0_0_17, &t1979_TI, offsetof(t1979_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1979_f11_FieldInfo = 
{
	"legacy", &t124_0_0_1, &t1979_TI, offsetof(t1979, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1979_FIs[] =
{
	&t1979_f10_FieldInfo,
	&t1979_f11_FieldInfo,
	NULL
};
extern MethodInfo m10409_MI;
static PropertyInfo t1979____ProduceLegacyHmacValues_PropertyInfo = 
{
	&t1979_TI, "ProduceLegacyHmacValues", NULL, &m10409_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1979_PIs[] =
{
	&t1979____ProduceLegacyHmacValues_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1979_VT[] =
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
static bool t1979_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1979_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1416_0_0_0, 5},
};
void t1979_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3104(tmp, true, &m3104_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1979__CustomAttributeCache = {
1,
NULL,
&t1979_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1979_0_0_0;
extern Il2CppType t1979_1_0_0;
struct t1979;
extern CustomAttributesCache t1979__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1979_DM = 
{
	NULL, NULL, NULL, t1979_IOs, &t1523_0_0_0, t1979_VT, t1979_VTIGM, NULL};
TypeInfo t1979_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACSHA384", "System.Security.Cryptography", t1979_MIs, t1979_PIs, t1979_FIs, NULL, &t1979_TI, NULL, &t1979__CustomAttributeCache, &t1979_0_0_0, &t1979_1_0_0, &t1979_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1979), sizeof (t1979), 0, -1, sizeof(t1979_SFs), 0, -1, 1, 0, 0, false, false, false, false, false, false, false, true, true, false, 4, 1, 2, 0, 0, 17, 0, 2};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
