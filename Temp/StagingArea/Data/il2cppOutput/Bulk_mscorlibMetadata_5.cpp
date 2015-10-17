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
extern TypeInfo t2185_TI;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t2185_m12069_ParameterInfos[] = 
{
	{"obj", 0, 134222433, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12069_MI = 
{
	"DisconnectedObject", NULL, &t2185_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2185_m12069_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 3943, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1590_0_0_0;
extern Il2CppType t1590_0_0_0;
static ParameterInfo t2185_m12067_ParameterInfos[] = 
{
	{"obj", 0, 134222434, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"or", 1, 134222435, &EmptyCustomAttributesCache, &t1590_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12067_MI = 
{
	"MarshaledObject", NULL, &t2185_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2185_m12067_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, false, 3944, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1590_0_0_0;
static ParameterInfo t2185_m12068_ParameterInfos[] = 
{
	{"obj", 0, 134222436, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"or", 1, 134222437, &EmptyCustomAttributesCache, &t1590_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12068_MI = 
{
	"UnmarshaledObject", NULL, &t2185_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2185_m12068_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 2, false, false, 3945, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2185_MIs[] =
{
	&m12069_MI,
	&m12067_MI,
	&m12068_MI,
	NULL
};
extern TypeInfo t677_TI;
#include "t677.h"
#include "t677MD.h"
extern MethodInfo m3128_MI;
void t2185_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2185__CustomAttributeCache = {
1,
NULL,
&t2185_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2185_0_0_0;
extern Il2CppType t2185_1_0_0;
struct t2185;
extern CustomAttributesCache t2185__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2185_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2185_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ITrackingHandler", "System.Runtime.Remoting.Services", t2185_MIs, NULL, NULL, NULL, &t2185_TI, NULL, &t2185__CustomAttributeCache, &t2185_0_0_0, &t2185_1_0_0, &t2185_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 0, 0, 0};
#include "t1916.h"
// Metadata Definition System.Runtime.Remoting.Services.TrackingServices
extern TypeInfo t1916_TI;
#include "t1916MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10045_MI = 
{
	".cctor", (methodPointerType)&m10045, &t1916_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3946, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1590_0_0_0;
static ParameterInfo t1916_m10046_ParameterInfos[] = 
{
	{"obj", 0, 134222438, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"or", 1, 134222439, &EmptyCustomAttributesCache, &t1590_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10046_MI = 
{
	"NotifyMarshaledObject", (methodPointerType)&m10046, &t1916_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1916_m10046_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 3947, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1590_0_0_0;
static ParameterInfo t1916_m10047_ParameterInfos[] = 
{
	{"obj", 0, 134222440, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"or", 1, 134222441, &EmptyCustomAttributesCache, &t1590_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10047_MI = 
{
	"NotifyUnmarshaledObject", (methodPointerType)&m10047, &t1916_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1916_m10047_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 3948, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1916_m10048_ParameterInfos[] = 
{
	{"obj", 0, 134222442, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10048_MI = 
{
	"NotifyDisconnectedObject", (methodPointerType)&m10048, &t1916_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1916_m10048_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 3949, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1916_MIs[] =
{
	&m10045_MI,
	&m10046_MI,
	&m10047_MI,
	&m10048_MI,
	NULL
};
extern Il2CppType t1170_0_0_17;
FieldInfo t1916_f0_FieldInfo = 
{
	"_handlers", &t1170_0_0_17, &t1916_TI, offsetof(t1916_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1916_FIs[] =
{
	&t1916_f0_FieldInfo,
	NULL
};
extern MethodInfo m671_MI;
extern MethodInfo m646_MI;
extern MethodInfo m672_MI;
extern MethodInfo m673_MI;
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
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	&g_mscorlib_dll_Image, NULL, "TrackingServices", "System.Runtime.Remoting.Services", t1916_MIs, NULL, t1916_FIs, NULL, &t1916_TI, NULL, &t1916__CustomAttributeCache, &t1916_0_0_0, &t1916_1_0_0, &t1916_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1916), sizeof (t1916), 0, -1, sizeof(t1916_SFs), 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, true, false, 4, 0, 1, 0, 0, 4, 0, 0};
#include "t1917.h"
// Metadata Definition System.Runtime.Remoting.ActivatedClientTypeEntry
extern TypeInfo t1917_TI;
#include "t1917MD.h"
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10049_MI = 
{
	"get_ApplicationUrl", (methodPointerType)&m10049, &t1917_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3950, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1919_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10050_MI = 
{
	"get_ContextAttributes", (methodPointerType)&m10050, &t1917_TI, &t1919_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3951, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10051_MI = 
{
	"get_ObjectType", (methodPointerType)&m10051, &t1917_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3952, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10052_MI = 
{
	"ToString", (methodPointerType)&m10052, &t1917_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3953, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1917_MIs[] =
{
	&m10049_MI,
	&m10050_MI,
	&m10051_MI,
	&m10052_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1917_f2_FieldInfo = 
{
	"applicationUrl", &t2_0_0_1, &t1917_TI, offsetof(t1917, f2), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1917_f3_FieldInfo = 
{
	"obj_type", &t126_0_0_1, &t1917_TI, offsetof(t1917, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1917_FIs[] =
{
	&t1917_f2_FieldInfo,
	&t1917_f3_FieldInfo,
	NULL
};
extern MethodInfo m10049_MI;
static PropertyInfo t1917____ApplicationUrl_PropertyInfo = 
{
	&t1917_TI, "ApplicationUrl", &m10049_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10050_MI;
static PropertyInfo t1917____ContextAttributes_PropertyInfo = 
{
	&t1917_TI, "ContextAttributes", &m10050_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10051_MI;
static PropertyInfo t1917____ObjectType_PropertyInfo = 
{
	&t1917_TI, "ObjectType", &m10051_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1917_PIs[] =
{
	&t1917____ApplicationUrl_PropertyInfo,
	&t1917____ContextAttributes_PropertyInfo,
	&t1917____ObjectType_PropertyInfo,
	NULL
};
extern MethodInfo m10052_MI;
static Il2CppMethodReference t1917_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m10052_MI,
};
static bool t1917_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1917_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
extern Il2CppType t1918_0_0_0;
struct t1917;
extern CustomAttributesCache t1917__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1917_DM = 
{
	NULL, NULL, NULL, NULL, &t1918_0_0_0, t1917_VT, t1917_VTIGM, NULL};
TypeInfo t1917_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ActivatedClientTypeEntry", "System.Runtime.Remoting", t1917_MIs, t1917_PIs, t1917_FIs, NULL, &t1917_TI, NULL, &t1917__CustomAttributeCache, &t1917_0_0_0, &t1917_1_0_0, &t1917_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1917), sizeof (t1917), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 3, 2, 0, 0, 4, 0, 0};
#include "t1920.h"
// Metadata Definition System.Runtime.Remoting.EnvoyInfo
extern TypeInfo t1920_TI;
#include "t1920MD.h"
extern Il2CppType t1404_0_0_0;
extern Il2CppType t1404_0_0_0;
static ParameterInfo t1920_m10053_ParameterInfos[] = 
{
	{"sinks", 0, 134222443, &EmptyCustomAttributesCache, &t1404_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10053_MI = 
{
	".ctor", (methodPointerType)&m10053, &t1920_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1920_m10053_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3954, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1404_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10054_MI = 
{
	"get_EnvoySinks", (methodPointerType)&m10054, &t1920_TI, &t1404_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 3955, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1920_MIs[] =
{
	&m10053_MI,
	&m10054_MI,
	NULL
};
extern Il2CppType t1404_0_0_1;
FieldInfo t1920_f0_FieldInfo = 
{
	"envoySinks", &t1404_0_0_1, &t1920_TI, offsetof(t1920, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1920_FIs[] =
{
	&t1920_f0_FieldInfo,
	NULL
};
extern MethodInfo m10054_MI;
static PropertyInfo t1920____EnvoySinks_PropertyInfo = 
{
	&t1920_TI, "EnvoySinks", &m10054_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1920_PIs[] =
{
	&t1920____EnvoySinks_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1920_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10054_MI,
};
static bool t1920_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t1924_0_0_0;
static const Il2CppType* t1920_ITIs[] = 
{
	&t1924_0_0_0,
};
static Il2CppInterfaceOffsetPair t1920_IOs[] = 
{
	{ &t1924_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1920_0_0_0;
extern Il2CppType t1920_1_0_0;
struct t1920;
const Il2CppTypeDefinitionMetadata t1920_DM = 
{
	NULL, NULL, t1920_ITIs, t1920_IOs, &t9_0_0_0, t1920_VT, t1920_VTIGM, NULL};
TypeInfo t1920_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EnvoyInfo", "System.Runtime.Remoting", t1920_MIs, t1920_PIs, t1920_FIs, NULL, &t1920_TI, NULL, &EmptyCustomAttributesCache, &t1920_0_0_0, &t1920_1_0_0, &t1920_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1920), sizeof (t1920), 0, -1, 0, 0, -1, 1056768, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 1, 0, 0, 5, 1, 1};
// Metadata Definition System.Runtime.Remoting.IChannelInfo
extern TypeInfo t1922_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12071_MI = 
{
	"get_ChannelData", NULL, &t1922_TI, &t158_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3956, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1922_MIs[] =
{
	&m12071_MI,
	NULL
};
extern MethodInfo m12071_MI;
static PropertyInfo t1922____ChannelData_PropertyInfo = 
{
	&t1922_TI, "ChannelData", &m12071_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1922_PIs[] =
{
	&t1922____ChannelData_PropertyInfo,
	NULL
};
void t1922_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1922__CustomAttributeCache = {
1,
NULL,
&t1922_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1922_0_0_0;
extern Il2CppType t1922_1_0_0;
struct t1922;
extern CustomAttributesCache t1922__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1922_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1922_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IChannelInfo", "System.Runtime.Remoting", t1922_MIs, t1922_PIs, NULL, NULL, &t1922_TI, NULL, &t1922__CustomAttributeCache, &t1922_0_0_0, &t1922_1_0_0, &t1922_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Remoting.IEnvoyInfo
extern TypeInfo t1924_TI;
extern Il2CppType t1404_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12070_MI = 
{
	"get_EnvoySinks", NULL, &t1924_TI, &t1404_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3957, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1924_MIs[] =
{
	&m12070_MI,
	NULL
};
extern MethodInfo m12070_MI;
static PropertyInfo t1924____EnvoySinks_PropertyInfo = 
{
	&t1924_TI, "EnvoySinks", &m12070_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1924_PIs[] =
{
	&t1924____EnvoySinks_PropertyInfo,
	NULL
};
void t1924_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1924__CustomAttributeCache = {
1,
NULL,
&t1924_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1924_1_0_0;
struct t1924;
extern CustomAttributesCache t1924__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1924_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1924_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnvoyInfo", "System.Runtime.Remoting", t1924_MIs, t1924_PIs, NULL, NULL, &t1924_TI, NULL, &t1924__CustomAttributeCache, &t1924_0_0_0, &t1924_1_0_0, &t1924_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Remoting.IRemotingTypeInfo
extern TypeInfo t1923_TI;
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12065_MI = 
{
	"get_TypeName", NULL, &t1923_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3958, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1923_MIs[] =
{
	&m12065_MI,
	NULL
};
extern MethodInfo m12065_MI;
static PropertyInfo t1923____TypeName_PropertyInfo = 
{
	&t1923_TI, "TypeName", &m12065_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1923_PIs[] =
{
	&t1923____TypeName_PropertyInfo,
	NULL
};
void t1923_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1923__CustomAttributeCache = {
1,
NULL,
&t1923_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1923_0_0_0;
extern Il2CppType t1923_1_0_0;
struct t1923;
extern CustomAttributesCache t1923__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1923_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1923_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IRemotingTypeInfo", "System.Runtime.Remoting", t1923_MIs, t1923_PIs, NULL, NULL, &t1923_TI, NULL, &t1923__CustomAttributeCache, &t1923_0_0_0, &t1923_1_0_0, &t1923_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
#include "t1913.h"
// Metadata Definition System.Runtime.Remoting.Identity
extern TypeInfo t1913_TI;
#include "t1913MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1913_m10055_ParameterInfos[] = 
{
	{"objectUri", 0, 134222444, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10055_MI = 
{
	".ctor", (methodPointerType)&m10055, &t1913_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1913_m10055_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3959, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1913_m12066_ParameterInfos[] = 
{
	{"requestedType", 0, 134222445, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1590_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12066_MI = 
{
	"CreateObjRef", NULL, &t1913_TI, &t1590_0_0_0, RuntimeInvoker_t9_t9, t1913_m12066_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 3960, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1404_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10056_MI = 
{
	"get_ChannelSink", (methodPointerType)&m10056, &t1913_TI, &t1404_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3961, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1404_0_0_0;
static ParameterInfo t1913_m10057_ParameterInfos[] = 
{
	{"value", 0, 134222446, &EmptyCustomAttributesCache, &t1404_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10057_MI = 
{
	"set_ChannelSink", (methodPointerType)&m10057, &t1913_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1913_m10057_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3962, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10058_MI = 
{
	"get_ObjectUri", (methodPointerType)&m10058, &t1913_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3963, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1913_m10059_ParameterInfos[] = 
{
	{"value", 0, 134222447, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10059_MI = 
{
	"set_ObjectUri", (methodPointerType)&m10059, &t1913_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1913_m10059_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3964, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10060_MI = 
{
	"get_IsConnected", (methodPointerType)&m10060, &t1913_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3965, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10061_MI = 
{
	"get_Disposed", (methodPointerType)&m10061, &t1913_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3966, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1913_m10062_ParameterInfos[] = 
{
	{"value", 0, 134222448, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10062_MI = 
{
	"set_Disposed", (methodPointerType)&m10062, &t1913_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1913_m10062_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3967, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1913_MIs[] =
{
	&m10055_MI,
	&m12066_MI,
	&m10056_MI,
	&m10057_MI,
	&m10058_MI,
	&m10059_MI,
	&m10060_MI,
	&m10061_MI,
	&m10062_MI,
	NULL
};
extern Il2CppType t2_0_0_4;
FieldInfo t1913_f0_FieldInfo = 
{
	"_objectUri", &t2_0_0_4, &t1913_TI, offsetof(t1913, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1404_0_0_4;
FieldInfo t1913_f1_FieldInfo = 
{
	"_channelSink", &t1404_0_0_4, &t1913_TI, offsetof(t1913, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1404_0_0_4;
FieldInfo t1913_f2_FieldInfo = 
{
	"_envoySink", &t1404_0_0_4, &t1913_TI, offsetof(t1913, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1590_0_0_4;
FieldInfo t1913_f3_FieldInfo = 
{
	"_objRef", &t1590_0_0_4, &t1913_TI, offsetof(t1913, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1913_f4_FieldInfo = 
{
	"_disposed", &t124_0_0_1, &t1913_TI, offsetof(t1913, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1913_FIs[] =
{
	&t1913_f0_FieldInfo,
	&t1913_f1_FieldInfo,
	&t1913_f2_FieldInfo,
	&t1913_f3_FieldInfo,
	&t1913_f4_FieldInfo,
	NULL
};
extern MethodInfo m10056_MI;
extern MethodInfo m10057_MI;
static PropertyInfo t1913____ChannelSink_PropertyInfo = 
{
	&t1913_TI, "ChannelSink", &m10056_MI, &m10057_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10058_MI;
extern MethodInfo m10059_MI;
static PropertyInfo t1913____ObjectUri_PropertyInfo = 
{
	&t1913_TI, "ObjectUri", &m10058_MI, &m10059_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10060_MI;
static PropertyInfo t1913____IsConnected_PropertyInfo = 
{
	&t1913_TI, "IsConnected", &m10060_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10061_MI;
extern MethodInfo m10062_MI;
static PropertyInfo t1913____Disposed_PropertyInfo = 
{
	&t1913_TI, "Disposed", &m10061_MI, &m10062_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1913_PIs[] =
{
	&t1913____ChannelSink_PropertyInfo,
	&t1913____ObjectUri_PropertyInfo,
	&t1913____IsConnected_PropertyInfo,
	&t1913____Disposed_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1913_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t1913_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1913_0_0_0;
extern Il2CppType t1913_1_0_0;
struct t1913;
const Il2CppTypeDefinitionMetadata t1913_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1913_VT, t1913_VTIGM, NULL};
TypeInfo t1913_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Identity", "System.Runtime.Remoting", t1913_MIs, t1913_PIs, t1913_FIs, NULL, &t1913_TI, NULL, &EmptyCustomAttributesCache, &t1913_0_0_0, &t1913_1_0_0, &t1913_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1913), sizeof (t1913), 0, -1, 0, 0, -1, 1048704, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 4, 5, 0, 0, 5, 0, 0};
#include "t1914.h"
// Metadata Definition System.Runtime.Remoting.ClientIdentity
extern TypeInfo t1914_TI;
#include "t1914MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t1590_0_0_0;
static ParameterInfo t1914_m10063_ParameterInfos[] = 
{
	{"objectUri", 0, 134222449, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"objRef", 1, 134222450, &EmptyCustomAttributesCache, &t1590_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10063_MI = 
{
	".ctor", (methodPointerType)&m10063, &t1914_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1914_m10063_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3968, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1209_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10064_MI = 
{
	"get_ClientProxy", (methodPointerType)&m10064, &t1914_TI, &t1209_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3969, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1209_0_0_0;
extern Il2CppType t1209_0_0_0;
static ParameterInfo t1914_m10065_ParameterInfos[] = 
{
	{"value", 0, 134222451, &EmptyCustomAttributesCache, &t1209_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10065_MI = 
{
	"set_ClientProxy", (methodPointerType)&m10065, &t1914_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1914_m10065_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3970, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1914_m10066_ParameterInfos[] = 
{
	{"requestedType", 0, 134222452, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1590_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10066_MI = 
{
	"CreateObjRef", (methodPointerType)&m10066, &t1914_TI, &t1590_0_0_0, RuntimeInvoker_t9_t9, t1914_m10066_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 3971, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10067_MI = 
{
	"get_TargetUri", (methodPointerType)&m10067, &t1914_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3972, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1914_MIs[] =
{
	&m10063_MI,
	&m10064_MI,
	&m10065_MI,
	&m10066_MI,
	&m10067_MI,
	NULL
};
extern Il2CppType t1921_0_0_1;
FieldInfo t1914_f5_FieldInfo = 
{
	"_proxyReference", &t1921_0_0_1, &t1914_TI, offsetof(t1914, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1914_FIs[] =
{
	&t1914_f5_FieldInfo,
	NULL
};
extern MethodInfo m10064_MI;
extern MethodInfo m10065_MI;
static PropertyInfo t1914____ClientProxy_PropertyInfo = 
{
	&t1914_TI, "ClientProxy", &m10064_MI, &m10065_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10067_MI;
static PropertyInfo t1914____TargetUri_PropertyInfo = 
{
	&t1914_TI, "TargetUri", &m10067_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1914_PIs[] =
{
	&t1914____ClientProxy_PropertyInfo,
	&t1914____TargetUri_PropertyInfo,
	NULL
};
extern MethodInfo m10066_MI;
static Il2CppMethodReference t1914_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10066_MI,
};
static bool t1914_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1914_0_0_0;
extern Il2CppType t1914_1_0_0;
struct t1914;
const Il2CppTypeDefinitionMetadata t1914_DM = 
{
	NULL, NULL, NULL, NULL, &t1913_0_0_0, t1914_VT, t1914_VTIGM, NULL};
TypeInfo t1914_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ClientIdentity", "System.Runtime.Remoting", t1914_MIs, t1914_PIs, t1914_FIs, NULL, &t1914_TI, NULL, &EmptyCustomAttributesCache, &t1914_0_0_0, &t1914_1_0_0, &t1914_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1914), sizeof (t1914), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 5, 0, 0};
#include "t1590.h"
// Metadata Definition System.Runtime.Remoting.ObjRef
extern TypeInfo t1590_TI;
#include "t1590MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10068_MI = 
{
	".ctor", (methodPointerType)&m10068, &t1590_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3973, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1590_m10069_ParameterInfos[] = 
{
	{"info", 0, 134222453, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134222454, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10069_MI = 
{
	".ctor", (methodPointerType)&m10069, &t1590_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1590_m10069_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 3974, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10070_MI = 
{
	".cctor", (methodPointerType)&m10070, &t1590_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3975, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10071_MI = 
{
	"get_IsReferenceToWellKnow", (methodPointerType)&m10071, &t1590_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 3976, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1922_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1590__CustomAttributeCache_m10072;
MethodInfo m10072_MI = 
{
	"get_ChannelInfo", (methodPointerType)&m10072, &t1590_TI, &t1922_0_0_0, RuntimeInvoker_t9, NULL, &t1590__CustomAttributeCache_m10072, 2502, 0, 6, 0, false, false, 3977, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1924_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10073_MI = 
{
	"get_EnvoyInfo", (methodPointerType)&m10073, &t1590_TI, &t1924_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 7, 0, false, false, 3978, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1924_0_0_0;
static ParameterInfo t1590_m10074_ParameterInfos[] = 
{
	{"value", 0, 134222455, &EmptyCustomAttributesCache, &t1924_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10074_MI = 
{
	"set_EnvoyInfo", (methodPointerType)&m10074, &t1590_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1590_m10074_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 8, 1, false, false, 3979, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1923_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10075_MI = 
{
	"get_TypeInfo", (methodPointerType)&m10075, &t1590_TI, &t1923_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 3980, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1923_0_0_0;
static ParameterInfo t1590_m10076_ParameterInfos[] = 
{
	{"value", 0, 134222456, &EmptyCustomAttributesCache, &t1923_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10076_MI = 
{
	"set_TypeInfo", (methodPointerType)&m10076, &t1590_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1590_m10076_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 10, 1, false, false, 3981, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10077_MI = 
{
	"get_URI", (methodPointerType)&m10077, &t1590_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 3982, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1590_m10078_ParameterInfos[] = 
{
	{"value", 0, 134222457, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10078_MI = 
{
	"set_URI", (methodPointerType)&m10078, &t1590_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1590_m10078_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 12, 1, false, false, 3983, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1590_m10079_ParameterInfos[] = 
{
	{"info", 0, 134222458, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134222459, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10079_MI = 
{
	"GetObjectData", (methodPointerType)&m10079, &t1590_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1590_m10079_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 2, false, false, 3984, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1590_m10080_ParameterInfos[] = 
{
	{"context", 0, 134222460, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10080_MI = 
{
	"GetRealObject", (methodPointerType)&m10080, &t1590_TI, &t9_0_0_0, RuntimeInvoker_t9_t1101, t1590_m10080_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 1, false, false, 3985, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10081_MI = 
{
	"UpdateChannelInfo", (methodPointerType)&m10081, &t1590_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 3986, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10082_MI = 
{
	"get_ServerType", (methodPointerType)&m10082, &t1590_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 3987, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1590_MIs[] =
{
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
	NULL
};
extern Il2CppType t1922_0_0_1;
FieldInfo t1590_f0_FieldInfo = 
{
	"channel_info", &t1922_0_0_1, &t1590_TI, offsetof(t1590, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1590_f1_FieldInfo = 
{
	"uri", &t2_0_0_1, &t1590_TI, offsetof(t1590, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1923_0_0_1;
FieldInfo t1590_f2_FieldInfo = 
{
	"typeInfo", &t1923_0_0_1, &t1590_TI, offsetof(t1590, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1924_0_0_1;
FieldInfo t1590_f3_FieldInfo = 
{
	"envoyInfo", &t1924_0_0_1, &t1590_TI, offsetof(t1590, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1590_f4_FieldInfo = 
{
	"flags", &t125_0_0_1, &t1590_TI, offsetof(t1590, f4), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1590_f5_FieldInfo = 
{
	"_serverType", &t126_0_0_1, &t1590_TI, offsetof(t1590, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t1590_f6_FieldInfo = 
{
	"MarshalledObjectRef", &t125_0_0_17, &t1590_TI, offsetof(t1590_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t1590_f7_FieldInfo = 
{
	"WellKnowObjectRef", &t125_0_0_17, &t1590_TI, offsetof(t1590_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t720_0_0_17;
extern CustomAttributesCache t1590__CustomAttributeCache_U3CU3Ef__switch$map26;
FieldInfo t1590_f8_FieldInfo = 
{
	"<>f__switch$map26", &t720_0_0_17, &t1590_TI, offsetof(t1590_SFs, f8), &t1590__CustomAttributeCache_U3CU3Ef__switch$map26};
static FieldInfo* t1590_FIs[] =
{
	&t1590_f0_FieldInfo,
	&t1590_f1_FieldInfo,
	&t1590_f2_FieldInfo,
	&t1590_f3_FieldInfo,
	&t1590_f4_FieldInfo,
	&t1590_f5_FieldInfo,
	&t1590_f6_FieldInfo,
	&t1590_f7_FieldInfo,
	&t1590_f8_FieldInfo,
	NULL
};
extern MethodInfo m10071_MI;
static PropertyInfo t1590____IsReferenceToWellKnow_PropertyInfo = 
{
	&t1590_TI, "IsReferenceToWellKnow", &m10071_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10072_MI;
static PropertyInfo t1590____ChannelInfo_PropertyInfo = 
{
	&t1590_TI, "ChannelInfo", &m10072_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10073_MI;
extern MethodInfo m10074_MI;
static PropertyInfo t1590____EnvoyInfo_PropertyInfo = 
{
	&t1590_TI, "EnvoyInfo", &m10073_MI, &m10074_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10075_MI;
extern MethodInfo m10076_MI;
static PropertyInfo t1590____TypeInfo_PropertyInfo = 
{
	&t1590_TI, "TypeInfo", &m10075_MI, &m10076_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10077_MI;
extern MethodInfo m10078_MI;
static PropertyInfo t1590____URI_PropertyInfo = 
{
	&t1590_TI, "URI", &m10077_MI, &m10078_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10082_MI;
static PropertyInfo t1590____ServerType_PropertyInfo = 
{
	&t1590_TI, "ServerType", &m10082_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1590_PIs[] =
{
	&t1590____IsReferenceToWellKnow_PropertyInfo,
	&t1590____ChannelInfo_PropertyInfo,
	&t1590____EnvoyInfo_PropertyInfo,
	&t1590____TypeInfo_PropertyInfo,
	&t1590____URI_PropertyInfo,
	&t1590____ServerType_PropertyInfo,
	NULL
};
extern MethodInfo m10079_MI;
extern MethodInfo m10080_MI;
static Il2CppMethodReference t1590_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10079_MI,
	&m10080_MI,
	&m10072_MI,
	&m10073_MI,
	&m10074_MI,
	&m10075_MI,
	&m10076_MI,
	&m10077_MI,
	&m10078_MI,
	&m10079_MI,
	&m10080_MI,
};
static bool t1590_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
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
extern Il2CppType t2190_0_0_0;
static const Il2CppType* t1590_ITIs[] = 
{
	&t623_0_0_0,
	&t2190_0_0_0,
};
static Il2CppInterfaceOffsetPair t1590_IOs[] = 
{
	{ &t623_0_0_0, 4},
	{ &t2190_0_0_0, 5},
};
void t1590_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void t1590_CustomAttributesCacheGenerator_U3CU3Ef__switch$map26(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1836_TI;
#include "t1836.h"
#include "t1836MD.h"
extern MethodInfo m9770_MI;
void t1590_CustomAttributesCacheGenerator_m10072(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1836 * tmp;
		tmp = (t1836 *)il2cpp_codegen_object_new (&t1836_TI);
		m9770(tmp, 3, 2, &m9770_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1590__CustomAttributeCache = {
1,
NULL,
&t1590_CustomAttributesCacheGenerator
};
CustomAttributesCache t1590__CustomAttributeCache_U3CU3Ef__switch$map26 = {
1,
NULL,
&t1590_CustomAttributesCacheGenerator_U3CU3Ef__switch$map26
};
CustomAttributesCache t1590__CustomAttributeCache_m10072 = {
1,
NULL,
&t1590_CustomAttributesCacheGenerator_m10072
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1590_1_0_0;
struct t1590;
extern CustomAttributesCache t1590__CustomAttributeCache;
extern CustomAttributesCache t1590__CustomAttributeCache_U3CU3Ef__switch$map26;
extern CustomAttributesCache t1590__CustomAttributeCache_m10072;
const Il2CppTypeDefinitionMetadata t1590_DM = 
{
	NULL, NULL, t1590_ITIs, t1590_IOs, &t9_0_0_0, t1590_VT, t1590_VTIGM, NULL};
TypeInfo t1590_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjRef", "System.Runtime.Remoting", t1590_MIs, t1590_PIs, t1590_FIs, NULL, &t1590_TI, NULL, &t1590__CustomAttributeCache, &t1590_0_0_0, &t1590_1_0_0, &t1590_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1590), sizeof (t1590), 0, -1, sizeof(t1590_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 15, 6, 9, 0, 0, 15, 2, 2};
#include "t1925.h"
// Metadata Definition System.Runtime.Remoting.RemotingConfiguration
extern TypeInfo t1925_TI;
#include "t1925MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10083_MI = 
{
	".cctor", (methodPointerType)&m10083, &t1925_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3988, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10084_MI = 
{
	"get_ApplicationName", (methodPointerType)&m10084, &t1925_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 3989, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10085_MI = 
{
	"get_ProcessId", (methodPointerType)&m10085, &t1925_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 3990, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1925_m10086_ParameterInfos[] = 
{
	{"svrType", 0, 134222461, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1917_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10086_MI = 
{
	"IsRemotelyActivatedClientType", (methodPointerType)&m10086, &t1925_TI, &t1917_0_0_0, RuntimeInvoker_t9_t9, t1925_m10086_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3991, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1925_MIs[] =
{
	&m10083_MI,
	&m10084_MI,
	&m10085_MI,
	&m10086_MI,
	NULL
};
extern Il2CppType t2_0_0_17;
FieldInfo t1925_f0_FieldInfo = 
{
	"applicationID", &t2_0_0_17, &t1925_TI, offsetof(t1925_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_17;
FieldInfo t1925_f1_FieldInfo = 
{
	"applicationName", &t2_0_0_17, &t1925_TI, offsetof(t1925_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_17;
FieldInfo t1925_f2_FieldInfo = 
{
	"processGuid", &t2_0_0_17, &t1925_TI, offsetof(t1925_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_17;
FieldInfo t1925_f3_FieldInfo = 
{
	"defaultConfigRead", &t124_0_0_17, &t1925_TI, offsetof(t1925_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_17;
FieldInfo t1925_f4_FieldInfo = 
{
	"defaultDelayedConfigRead", &t124_0_0_17, &t1925_TI, offsetof(t1925_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_17;
FieldInfo t1925_f5_FieldInfo = 
{
	"wellKnownClientEntries", &t1158_0_0_17, &t1925_TI, offsetof(t1925_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_17;
FieldInfo t1925_f6_FieldInfo = 
{
	"activatedClientEntries", &t1158_0_0_17, &t1925_TI, offsetof(t1925_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_17;
FieldInfo t1925_f7_FieldInfo = 
{
	"wellKnownServiceEntries", &t1158_0_0_17, &t1925_TI, offsetof(t1925_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_17;
FieldInfo t1925_f8_FieldInfo = 
{
	"activatedServiceEntries", &t1158_0_0_17, &t1925_TI, offsetof(t1925_SFs, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_17;
FieldInfo t1925_f9_FieldInfo = 
{
	"channelTemplates", &t1158_0_0_17, &t1925_TI, offsetof(t1925_SFs, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_17;
FieldInfo t1925_f10_FieldInfo = 
{
	"clientProviderTemplates", &t1158_0_0_17, &t1925_TI, offsetof(t1925_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_17;
FieldInfo t1925_f11_FieldInfo = 
{
	"serverProviderTemplates", &t1158_0_0_17, &t1925_TI, offsetof(t1925_SFs, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1925_FIs[] =
{
	&t1925_f0_FieldInfo,
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
	NULL
};
extern MethodInfo m10084_MI;
static PropertyInfo t1925____ApplicationName_PropertyInfo = 
{
	&t1925_TI, "ApplicationName", &m10084_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10085_MI;
static PropertyInfo t1925____ProcessId_PropertyInfo = 
{
	&t1925_TI, "ProcessId", &m10085_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1925_PIs[] =
{
	&t1925____ApplicationName_PropertyInfo,
	&t1925____ProcessId_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1925_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1925_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1925_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1925__CustomAttributeCache = {
1,
NULL,
&t1925_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1925_0_0_0;
extern Il2CppType t1925_1_0_0;
struct t1925;
extern CustomAttributesCache t1925__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1925_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1925_VT, t1925_VTIGM, NULL};
TypeInfo t1925_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingConfiguration", "System.Runtime.Remoting", t1925_MIs, t1925_PIs, t1925_FIs, NULL, &t1925_TI, NULL, &t1925__CustomAttributeCache, &t1925_0_0_0, &t1925_1_0_0, &t1925_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1925), sizeof (t1925), 0, -1, sizeof(t1925_SFs), 0, -1, 1048961, 0, 0, false, false, false, false, false, false, false, false, true, false, 4, 2, 12, 0, 0, 4, 0, 0};
#include "t1926.h"
// Metadata Definition System.Runtime.Remoting.RemotingException
extern TypeInfo t1926_TI;
#include "t1926MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10087_MI = 
{
	".ctor", (methodPointerType)&m10087, &t1926_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3992, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1926_m10088_ParameterInfos[] = 
{
	{"message", 0, 134222462, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10088_MI = 
{
	".ctor", (methodPointerType)&m10088, &t1926_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1926_m10088_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3993, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1926_m10089_ParameterInfos[] = 
{
	{"info", 0, 134222463, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134222464, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10089_MI = 
{
	".ctor", (methodPointerType)&m10089, &t1926_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1926_m10089_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 3994, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1926_MIs[] =
{
	&m10087_MI,
	&m10088_MI,
	&m10089_MI,
	NULL
};
extern MethodInfo m4496_MI;
extern MethodInfo m4497_MI;
extern MethodInfo m4243_MI;
extern MethodInfo m1098_MI;
extern MethodInfo m4498_MI;
extern MethodInfo m4441_MI;
extern MethodInfo m4442_MI;
static Il2CppMethodReference t1926_VT[] =
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
};
extern Il2CppType t948_0_0_0;
static Il2CppInterfaceOffsetPair t1926_IOs[] = 
{
	{ &t623_0_0_0, 4},
	{ &t948_0_0_0, 5},
};
void t1926_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1926__CustomAttributeCache = {
1,
NULL,
&t1926_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1926_0_0_0;
extern Il2CppType t1926_1_0_0;
extern Il2CppType t1369_0_0_0;
struct t1926;
extern CustomAttributesCache t1926__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1926_DM = 
{
	NULL, NULL, NULL, t1926_IOs, &t1369_0_0_0, t1926_VT, t1926_VTIGM, NULL};
TypeInfo t1926_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingException", "System.Runtime.Remoting", t1926_MIs, NULL, NULL, NULL, &t1926_TI, NULL, &t1926__CustomAttributeCache, &t1926_0_0_0, &t1926_1_0_0, &t1926_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1926), sizeof (t1926), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1927.h"
// Metadata Definition System.Runtime.Remoting.RemotingServices
extern TypeInfo t1927_TI;
#include "t1927MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10090_MI = 
{
	".cctor", (methodPointerType)&m10090, &t1927_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3995, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t914_0_0_0;
extern Il2CppType t914_0_0_0;
static ParameterInfo t1927_m10091_ParameterInfos[] = 
{
	{"type", 0, 134222465, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"method", 1, 134222466, &EmptyCustomAttributesCache, &t914_0_0_0},
};
extern Il2CppType t914_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10091_MI = 
{
	"GetVirtualMethod", (methodPointerType)&m10091, &t1927_TI, &t914_0_0_0, RuntimeInvoker_t9_t9_t9, t1927_m10091_ParameterInfos, &EmptyCustomAttributesCache, 147, 4096, 255, 2, false, false, 3996, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1927_m10092_ParameterInfos[] = 
{
	{"proxy", 0, 134222467, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1927__CustomAttributeCache_m10092;
MethodInfo m10092_MI = 
{
	"IsTransparentProxy", (methodPointerType)&m10092, &t1927_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1927_m10092_ParameterInfos, &t1927__CustomAttributeCache_m10092, 150, 4096, 255, 1, false, false, 3997, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1927_m10093_ParameterInfos[] = 
{
	{"URI", 0, 134222468, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10093_MI = 
{
	"GetServerTypeForUri", (methodPointerType)&m10093, &t1927_TI, &t126_0_0_0, RuntimeInvoker_t9_t9, t1927_m10093_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3998, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1590_0_0_0;
static ParameterInfo t1927_m10094_ParameterInfos[] = 
{
	{"objectRef", 0, 134222469, &EmptyCustomAttributesCache, &t1590_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10094_MI = 
{
	"Unmarshal", (methodPointerType)&m10094, &t1927_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1927_m10094_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3999, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1590_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1927_m10095_ParameterInfos[] = 
{
	{"objectRef", 0, 134222470, &EmptyCustomAttributesCache, &t1590_0_0_0},
	{"fRefine", 1, 134222471, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10095_MI = 
{
	"Unmarshal", (methodPointerType)&m10095, &t1927_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t186, t1927_m10095_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4000, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1209_0_0_0;
static ParameterInfo t1927_m10096_ParameterInfos[] = 
{
	{"Obj", 0, 134222472, &EmptyCustomAttributesCache, &t1209_0_0_0},
};
extern Il2CppType t1590_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10096_MI = 
{
	"Marshal", (methodPointerType)&m10096, &t1927_TI, &t1590_0_0_0, RuntimeInvoker_t9_t9, t1927_m10096_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4001, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1209_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1927_m10097_ParameterInfos[] = 
{
	{"Obj", 0, 134222473, &EmptyCustomAttributesCache, &t1209_0_0_0},
	{"ObjURI", 1, 134222474, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"RequestedType", 2, 134222475, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1590_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10097_MI = 
{
	"Marshal", (methodPointerType)&m10097, &t1927_TI, &t1590_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t1927_m10097_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 4002, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10098_MI = 
{
	"NewUri", (methodPointerType)&m10098, &t1927_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 145, 0, 255, 0, false, false, 4003, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1927_m10099_ParameterInfos[] = 
{
	{"proxy", 0, 134222476, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t1911_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1927__CustomAttributeCache_m10099;
MethodInfo m10099_MI = 
{
	"GetRealProxy", (methodPointerType)&m10099, &t1927_TI, &t1911_0_0_0, RuntimeInvoker_t9_t9, t1927_m10099_ParameterInfos, &t1927__CustomAttributeCache_m10099, 150, 0, 255, 1, false, false, 4004, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1897_0_0_0;
extern Il2CppType t1897_0_0_0;
static ParameterInfo t1927_m10100_ParameterInfos[] = 
{
	{"msg", 0, 134222477, &EmptyCustomAttributesCache, &t1897_0_0_0},
};
extern Il2CppType t914_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10100_MI = 
{
	"GetMethodBaseFromMethodMessage", (methodPointerType)&m10100, &t1927_TI, &t914_0_0_0, RuntimeInvoker_t9_t9, t1927_m10100_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4005, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t1927_m10101_ParameterInfos[] = 
{
	{"type", 0, 134222478, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"methodName", 1, 134222479, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"signature", 2, 134222480, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t914_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10101_MI = 
{
	"GetMethodBaseFromName", (methodPointerType)&m10101, &t1927_TI, &t914_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t1927_m10101_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 4006, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t1927_m10102_ParameterInfos[] = 
{
	{"type", 0, 134222481, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"methodName", 1, 134222482, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"signature", 2, 134222483, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t914_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10102_MI = 
{
	"FindInterfaceMethod", (methodPointerType)&m10102, &t1927_TI, &t914_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t1927_m10102_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4007, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1927_m10103_ParameterInfos[] = 
{
	{"obj", 0, 134222484, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"info", 1, 134222485, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 2, 134222486, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10103_MI = 
{
	"GetObjectData", (methodPointerType)&m10103, &t1927_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t1101, t1927_m10103_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 4008, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1897_0_0_0;
static ParameterInfo t1927_m10104_ParameterInfos[] = 
{
	{"msg", 0, 134222487, &EmptyCustomAttributesCache, &t1897_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10104_MI = 
{
	"IsMethodOverloaded", (methodPointerType)&m10104, &t1927_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1927_m10104_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4009, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t914_0_0_0;
static ParameterInfo t1927_m10105_ParameterInfos[] = 
{
	{"method", 0, 134222488, &EmptyCustomAttributesCache, &t914_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10105_MI = 
{
	"IsOneWay", (methodPointerType)&m10105, &t1927_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1927_m10105_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4010, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1917_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t158_0_0_0;
static ParameterInfo t1927_m10106_ParameterInfos[] = 
{
	{"entry", 0, 134222489, &EmptyCustomAttributesCache, &t1917_0_0_0},
	{"activationAttributes", 1, 134222490, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10106_MI = 
{
	"CreateClientProxy", (methodPointerType)&m10106, &t1927_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1927_m10106_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4011, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t158_0_0_0;
static ParameterInfo t1927_m10107_ParameterInfos[] = 
{
	{"type", 0, 134222491, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"activationAttributes", 1, 134222492, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10107_MI = 
{
	"CreateClientProxyForContextBound", (methodPointerType)&m10107, &t1927_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1927_m10107_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4012, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1927_m10108_ParameterInfos[] = 
{
	{"uri", 0, 134222493, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1913_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10108_MI = 
{
	"GetIdentityForUri", (methodPointerType)&m10108, &t1927_TI, &t1913_0_0_0, RuntimeInvoker_t9_t9, t1927_m10108_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 4013, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1927_m10109_ParameterInfos[] = 
{
	{"uri", 0, 134222494, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10109_MI = 
{
	"RemoveAppNameFromUri", (methodPointerType)&m10109, &t1927_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1927_m10109_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4014, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1590_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t9_1_0_2;
extern Il2CppType t9_1_0_0;
static ParameterInfo t1927_m10110_ParameterInfos[] = 
{
	{"objRef", 0, 134222495, &EmptyCustomAttributesCache, &t1590_0_0_0},
	{"proxyType", 1, 134222496, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"clientProxy", 2, 134222497, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t1914_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t1003 (MethodInfo* method, void* obj, void** args);
MethodInfo m10110_MI = 
{
	"GetOrCreateClientIdentity", (methodPointerType)&m10110, &t1927_TI, &t1914_0_0_0, RuntimeInvoker_t9_t9_t9_t1003, t1927_m10110_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 4015, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1209_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1927_m10111_ParameterInfos[] = 
{
	{"realObject", 0, 134222498, &EmptyCustomAttributesCache, &t1209_0_0_0},
	{"objectType", 1, 134222499, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"objectUri", 2, 134222500, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1928_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10111_MI = 
{
	"CreateClientActivatedServerIdentity", (methodPointerType)&m10111, &t1927_TI, &t1928_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t1927_m10111_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 4016, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1929_0_0_0;
extern Il2CppType t1929_0_0_0;
static ParameterInfo t1927_m10112_ParameterInfos[] = 
{
	{"objectType", 0, 134222501, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"objectUri", 1, 134222502, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 2, 134222503, &EmptyCustomAttributesCache, &t1929_0_0_0},
};
extern Il2CppType t1589_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10112_MI = 
{
	"CreateWellKnownServerIdentity", (methodPointerType)&m10112, &t1927_TI, &t1589_0_0_0, RuntimeInvoker_t9_t9_t9_t125, t1927_m10112_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 4017, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1589_0_0_0;
extern Il2CppType t1589_0_0_0;
static ParameterInfo t1927_m10113_ParameterInfos[] = 
{
	{"identity", 0, 134222504, &EmptyCustomAttributesCache, &t1589_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10113_MI = 
{
	"RegisterServerIdentity", (methodPointerType)&m10113, &t1927_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1927_m10113_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4018, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1590_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1927_m10114_ParameterInfos[] = 
{
	{"objref", 0, 134222505, &EmptyCustomAttributesCache, &t1590_0_0_0},
	{"classToProxy", 1, 134222506, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10114_MI = 
{
	"GetProxyForRemoteObject", (methodPointerType)&m10114, &t1927_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1927_m10114_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4019, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1590_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1927_m10115_ParameterInfos[] = 
{
	{"objRef", 0, 134222507, &EmptyCustomAttributesCache, &t1590_0_0_0},
	{"proxyType", 1, 134222508, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10115_MI = 
{
	"GetRemoteObject", (methodPointerType)&m10115, &t1927_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1927_m10115_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4020, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10116_MI = 
{
	"RegisterInternalChannels", (methodPointerType)&m10116, &t1927_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 145, 0, 255, 0, false, false, 4021, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1913_0_0_0;
static ParameterInfo t1927_m10117_ParameterInfos[] = 
{
	{"ident", 0, 134222509, &EmptyCustomAttributesCache, &t1913_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10117_MI = 
{
	"DisposeIdentity", (methodPointerType)&m10117, &t1927_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1927_m10117_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 4022, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1927_m10118_ParameterInfos[] = 
{
	{"uri", 0, 134222510, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10118_MI = 
{
	"GetNormalizedUri", (methodPointerType)&m10118, &t1927_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1927_m10118_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4023, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1927_MIs[] =
{
	&m10090_MI,
	&m10091_MI,
	&m10092_MI,
	&m10093_MI,
	&m10094_MI,
	&m10095_MI,
	&m10096_MI,
	&m10097_MI,
	&m10098_MI,
	&m10099_MI,
	&m10100_MI,
	&m10101_MI,
	&m10102_MI,
	&m10103_MI,
	&m10104_MI,
	&m10105_MI,
	&m10106_MI,
	&m10107_MI,
	&m10108_MI,
	&m10109_MI,
	&m10110_MI,
	&m10111_MI,
	&m10112_MI,
	&m10113_MI,
	&m10114_MI,
	&m10115_MI,
	&m10116_MI,
	&m10117_MI,
	&m10118_MI,
	NULL
};
extern Il2CppType t1158_0_0_17;
FieldInfo t1927_f0_FieldInfo = 
{
	"uri_hash", &t1158_0_0_17, &t1927_TI, offsetof(t1927_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t295_0_0_17;
FieldInfo t1927_f1_FieldInfo = 
{
	"_serializationFormatter", &t295_0_0_17, &t1927_TI, offsetof(t1927_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t295_0_0_17;
FieldInfo t1927_f2_FieldInfo = 
{
	"_deserializationFormatter", &t295_0_0_17, &t1927_TI, offsetof(t1927_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_19;
FieldInfo t1927_f3_FieldInfo = 
{
	"app_id", &t2_0_0_19, &t1927_TI, offsetof(t1927_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t1927_f4_FieldInfo = 
{
	"next_id", &t125_0_0_17, &t1927_TI, offsetof(t1927_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t925_0_0_49;
FieldInfo t1927_f5_FieldInfo = 
{
	"methodBindings", &t925_0_0_49, &t1927_TI, offsetof(t1927_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t828_0_0_49;
FieldInfo t1927_f6_FieldInfo = 
{
	"FieldSetterMethod", &t828_0_0_49, &t1927_TI, offsetof(t1927_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t828_0_0_49;
FieldInfo t1927_f7_FieldInfo = 
{
	"FieldGetterMethod", &t828_0_0_49, &t1927_TI, offsetof(t1927_SFs, f7), &EmptyCustomAttributesCache};
static FieldInfo* t1927_FIs[] =
{
	&t1927_f0_FieldInfo,
	&t1927_f1_FieldInfo,
	&t1927_f2_FieldInfo,
	&t1927_f3_FieldInfo,
	&t1927_f4_FieldInfo,
	&t1927_f5_FieldInfo,
	&t1927_f6_FieldInfo,
	&t1927_f7_FieldInfo,
	NULL
};
static Il2CppMethodReference t1927_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1927_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1927_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1927_CustomAttributesCacheGenerator_m10092(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1836 * tmp;
		tmp = (t1836 *)il2cpp_codegen_object_new (&t1836_TI);
		m9770(tmp, 3, 2, &m9770_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1927_CustomAttributesCacheGenerator_m10099(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1836 * tmp;
		tmp = (t1836 *)il2cpp_codegen_object_new (&t1836_TI);
		m9770(tmp, 3, 2, &m9770_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1927__CustomAttributeCache = {
1,
NULL,
&t1927_CustomAttributesCacheGenerator
};
CustomAttributesCache t1927__CustomAttributeCache_m10092 = {
1,
NULL,
&t1927_CustomAttributesCacheGenerator_m10092
};
CustomAttributesCache t1927__CustomAttributeCache_m10099 = {
1,
NULL,
&t1927_CustomAttributesCacheGenerator_m10099
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1927_0_0_0;
extern Il2CppType t1927_1_0_0;
struct t1927;
extern CustomAttributesCache t1927__CustomAttributeCache;
extern CustomAttributesCache t1927__CustomAttributeCache_m10092;
extern CustomAttributesCache t1927__CustomAttributeCache_m10099;
const Il2CppTypeDefinitionMetadata t1927_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1927_VT, t1927_VTIGM, NULL};
TypeInfo t1927_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingServices", "System.Runtime.Remoting", t1927_MIs, NULL, t1927_FIs, NULL, &t1927_TI, NULL, &t1927__CustomAttributeCache, &t1927_0_0_0, &t1927_1_0_0, &t1927_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1927), sizeof (t1927), 0, -1, sizeof(t1927_SFs), 0, -1, 257, 0, 0, false, false, false, false, false, false, false, false, true, false, 29, 0, 8, 0, 0, 4, 0, 0};
#include "t1589.h"
// Metadata Definition System.Runtime.Remoting.ServerIdentity
extern TypeInfo t1589_TI;
#include "t1589MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t1861_0_0_0;
extern Il2CppType t1861_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1589_m10119_ParameterInfos[] = 
{
	{"objectUri", 0, 134222511, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"context", 1, 134222512, &EmptyCustomAttributesCache, &t1861_0_0_0},
	{"objectType", 2, 134222513, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10119_MI = 
{
	".ctor", (methodPointerType)&m10119, &t1589_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1589_m10119_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4024, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10120_MI = 
{
	"get_ObjectType", (methodPointerType)&m10120, &t1589_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4025, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1874_0_0_0;
extern Il2CppType t1874_0_0_0;
static ParameterInfo t1589_m10121_ParameterInfos[] = 
{
	{"lease", 0, 134222514, &EmptyCustomAttributesCache, &t1874_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10121_MI = 
{
	"StartTrackingLifetime", (methodPointerType)&m10121, &t1589_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1589_m10121_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4026, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10122_MI = 
{
	"OnLifetimeExpired", (methodPointerType)&m10122, &t1589_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 5, 0, false, false, 4027, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1589_m10123_ParameterInfos[] = 
{
	{"requestedType", 0, 134222515, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1590_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10123_MI = 
{
	"CreateObjRef", (methodPointerType)&m10123, &t1589_TI, &t1590_0_0_0, RuntimeInvoker_t9_t9, t1589_m10123_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4028, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1209_0_0_0;
extern Il2CppType t1861_0_0_0;
static ParameterInfo t1589_m10124_ParameterInfos[] = 
{
	{"serverObject", 0, 134222516, &EmptyCustomAttributesCache, &t1209_0_0_0},
	{"context", 1, 134222517, &EmptyCustomAttributesCache, &t1861_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10124_MI = 
{
	"AttachServerObject", (methodPointerType)&m10124, &t1589_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1589_m10124_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4029, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1875_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10125_MI = 
{
	"get_Lease", (methodPointerType)&m10125, &t1589_TI, &t1875_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4030, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10126_MI = 
{
	"DisposeServerObject", (methodPointerType)&m10126, &t1589_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 132, 0, 255, 0, false, false, 4031, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1589_MIs[] =
{
	&m10119_MI,
	&m10120_MI,
	&m10121_MI,
	&m10122_MI,
	&m10123_MI,
	&m10124_MI,
	&m10125_MI,
	&m10126_MI,
	NULL
};
extern Il2CppType t126_0_0_4;
FieldInfo t1589_f5_FieldInfo = 
{
	"_objectType", &t126_0_0_4, &t1589_TI, offsetof(t1589, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1209_0_0_4;
FieldInfo t1589_f6_FieldInfo = 
{
	"_serverObject", &t1209_0_0_4, &t1589_TI, offsetof(t1589, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1404_0_0_4;
FieldInfo t1589_f7_FieldInfo = 
{
	"_serverSink", &t1404_0_0_4, &t1589_TI, offsetof(t1589, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1861_0_0_4;
FieldInfo t1589_f8_FieldInfo = 
{
	"_context", &t1861_0_0_4, &t1589_TI, offsetof(t1589, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1875_0_0_4;
FieldInfo t1589_f9_FieldInfo = 
{
	"_lease", &t1875_0_0_4, &t1589_TI, offsetof(t1589, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1589_FIs[] =
{
	&t1589_f5_FieldInfo,
	&t1589_f6_FieldInfo,
	&t1589_f7_FieldInfo,
	&t1589_f8_FieldInfo,
	&t1589_f9_FieldInfo,
	NULL
};
extern MethodInfo m10120_MI;
static PropertyInfo t1589____ObjectType_PropertyInfo = 
{
	&t1589_TI, "ObjectType", &m10120_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10125_MI;
static PropertyInfo t1589____Lease_PropertyInfo = 
{
	&t1589_TI, "Lease", &m10125_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1589_PIs[] =
{
	&t1589____ObjectType_PropertyInfo,
	&t1589____Lease_PropertyInfo,
	NULL
};
extern MethodInfo m10123_MI;
extern MethodInfo m10122_MI;
static Il2CppMethodReference t1589_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10123_MI,
	&m10122_MI,
};
static bool t1589_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1589_1_0_0;
struct t1589;
const Il2CppTypeDefinitionMetadata t1589_DM = 
{
	NULL, NULL, NULL, NULL, &t1913_0_0_0, t1589_VT, t1589_VTIGM, NULL};
TypeInfo t1589_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ServerIdentity", "System.Runtime.Remoting", t1589_MIs, t1589_PIs, t1589_FIs, NULL, &t1589_TI, NULL, &EmptyCustomAttributesCache, &t1589_0_0_0, &t1589_1_0_0, &t1589_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1589), sizeof (t1589), 0, -1, 0, 0, -1, 1048704, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 2, 5, 0, 0, 6, 0, 0};
#include "t1928.h"
// Metadata Definition System.Runtime.Remoting.ClientActivatedIdentity
extern TypeInfo t1928_TI;
#include "t1928MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1928_m10127_ParameterInfos[] = 
{
	{"objectUri", 0, 134222518, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"objectType", 1, 134222519, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10127_MI = 
{
	".ctor", (methodPointerType)&m10127, &t1928_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1928_m10127_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4032, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1209_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10128_MI = 
{
	"GetServerObject", (methodPointerType)&m10128, &t1928_TI, &t1209_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4033, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10129_MI = 
{
	"OnLifetimeExpired", (methodPointerType)&m10129, &t1928_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 5, 0, false, false, 4034, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1928_MIs[] =
{
	&m10127_MI,
	&m10128_MI,
	&m10129_MI,
	NULL
};
extern MethodInfo m10129_MI;
static Il2CppMethodReference t1928_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10123_MI,
	&m10129_MI,
};
static bool t1928_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1928_0_0_0;
extern Il2CppType t1928_1_0_0;
struct t1928;
const Il2CppTypeDefinitionMetadata t1928_DM = 
{
	NULL, NULL, NULL, NULL, &t1589_0_0_0, t1928_VT, t1928_VTIGM, NULL};
TypeInfo t1928_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ClientActivatedIdentity", "System.Runtime.Remoting", t1928_MIs, NULL, NULL, NULL, &t1928_TI, NULL, &EmptyCustomAttributesCache, &t1928_0_0_0, &t1928_1_0_0, &t1928_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1928), sizeof (t1928), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 6, 0, 0};
#include "t1930.h"
// Metadata Definition System.Runtime.Remoting.SingletonIdentity
extern TypeInfo t1930_TI;
#include "t1930MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t1861_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1930_m10130_ParameterInfos[] = 
{
	{"objectUri", 0, 134222520, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"context", 1, 134222521, &EmptyCustomAttributesCache, &t1861_0_0_0},
	{"objectType", 2, 134222522, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10130_MI = 
{
	".ctor", (methodPointerType)&m10130, &t1930_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1930_m10130_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4035, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1930_MIs[] =
{
	&m10130_MI,
	NULL
};
static Il2CppMethodReference t1930_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10123_MI,
	&m10122_MI,
};
static bool t1930_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1930_0_0_0;
extern Il2CppType t1930_1_0_0;
struct t1930;
const Il2CppTypeDefinitionMetadata t1930_DM = 
{
	NULL, NULL, NULL, NULL, &t1589_0_0_0, t1930_VT, t1930_VTIGM, NULL};
TypeInfo t1930_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SingletonIdentity", "System.Runtime.Remoting", t1930_MIs, NULL, NULL, NULL, &t1930_TI, NULL, &EmptyCustomAttributesCache, &t1930_0_0_0, &t1930_1_0_0, &t1930_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1930), sizeof (t1930), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 6, 0, 0};
#include "t1931.h"
// Metadata Definition System.Runtime.Remoting.SingleCallIdentity
extern TypeInfo t1931_TI;
#include "t1931MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t1861_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1931_m10131_ParameterInfos[] = 
{
	{"objectUri", 0, 134222523, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"context", 1, 134222524, &EmptyCustomAttributesCache, &t1861_0_0_0},
	{"objectType", 2, 134222525, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10131_MI = 
{
	".ctor", (methodPointerType)&m10131, &t1931_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1931_m10131_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4036, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1931_MIs[] =
{
	&m10131_MI,
	NULL
};
static Il2CppMethodReference t1931_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10123_MI,
	&m10122_MI,
};
static bool t1931_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1931_0_0_0;
extern Il2CppType t1931_1_0_0;
struct t1931;
const Il2CppTypeDefinitionMetadata t1931_DM = 
{
	NULL, NULL, NULL, NULL, &t1589_0_0_0, t1931_VT, t1931_VTIGM, NULL};
TypeInfo t1931_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SingleCallIdentity", "System.Runtime.Remoting", t1931_MIs, NULL, NULL, NULL, &t1931_TI, NULL, &EmptyCustomAttributesCache, &t1931_0_0_0, &t1931_1_0_0, &t1931_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1931), sizeof (t1931), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 6, 0, 0};
#include "t1918.h"
// Metadata Definition System.Runtime.Remoting.TypeEntry
extern TypeInfo t1918_TI;
#include "t1918MD.h"
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10132_MI = 
{
	"get_AssemblyName", (methodPointerType)&m10132, &t1918_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4037, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10133_MI = 
{
	"get_TypeName", (methodPointerType)&m10133, &t1918_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4038, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1918_MIs[] =
{
	&m10132_MI,
	&m10133_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1918_f0_FieldInfo = 
{
	"assembly_name", &t2_0_0_1, &t1918_TI, offsetof(t1918, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1918_f1_FieldInfo = 
{
	"type_name", &t2_0_0_1, &t1918_TI, offsetof(t1918, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1918_FIs[] =
{
	&t1918_f0_FieldInfo,
	&t1918_f1_FieldInfo,
	NULL
};
extern MethodInfo m10132_MI;
static PropertyInfo t1918____AssemblyName_PropertyInfo = 
{
	&t1918_TI, "AssemblyName", &m10132_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10133_MI;
static PropertyInfo t1918____TypeName_PropertyInfo = 
{
	&t1918_TI, "TypeName", &m10133_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1918_PIs[] =
{
	&t1918____AssemblyName_PropertyInfo,
	&t1918____TypeName_PropertyInfo,
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
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1918__CustomAttributeCache = {
1,
NULL,
&t1918_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1918_1_0_0;
struct t1918;
extern CustomAttributesCache t1918__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1918_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1918_VT, t1918_VTIGM, NULL};
TypeInfo t1918_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeEntry", "System.Runtime.Remoting", t1918_MIs, t1918_PIs, t1918_FIs, NULL, &t1918_TI, NULL, &t1918__CustomAttributeCache, &t1918_0_0_0, &t1918_1_0_0, &t1918_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1918), sizeof (t1918), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 2, 2, 0, 0, 4, 0, 0};
#include "t1932.h"
// Metadata Definition System.Runtime.Remoting.TypeInfo
extern TypeInfo t1932_TI;
#include "t1932MD.h"
extern Il2CppType t126_0_0_0;
static ParameterInfo t1932_m10134_ParameterInfos[] = 
{
	{"type", 0, 134222526, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10134_MI = 
{
	".ctor", (methodPointerType)&m10134, &t1932_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1932_m10134_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4039, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10135_MI = 
{
	"get_TypeName", (methodPointerType)&m10135, &t1932_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 4040, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1932_MIs[] =
{
	&m10134_MI,
	&m10135_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1932_f0_FieldInfo = 
{
	"serverType", &t2_0_0_1, &t1932_TI, offsetof(t1932, f0), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1932_f1_FieldInfo = 
{
	"serverHierarchy", &t221_0_0_1, &t1932_TI, offsetof(t1932, f1), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1932_f2_FieldInfo = 
{
	"interfacesImplemented", &t221_0_0_1, &t1932_TI, offsetof(t1932, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1932_FIs[] =
{
	&t1932_f0_FieldInfo,
	&t1932_f1_FieldInfo,
	&t1932_f2_FieldInfo,
	NULL
};
extern MethodInfo m10135_MI;
static PropertyInfo t1932____TypeName_PropertyInfo = 
{
	&t1932_TI, "TypeName", &m10135_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1932_PIs[] =
{
	&t1932____TypeName_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1932_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10135_MI,
};
static bool t1932_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1932_ITIs[] = 
{
	&t1923_0_0_0,
};
static Il2CppInterfaceOffsetPair t1932_IOs[] = 
{
	{ &t1923_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1932_0_0_0;
extern Il2CppType t1932_1_0_0;
struct t1932;
const Il2CppTypeDefinitionMetadata t1932_DM = 
{
	NULL, NULL, t1932_ITIs, t1932_IOs, &t9_0_0_0, t1932_VT, t1932_VTIGM, NULL};
TypeInfo t1932_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeInfo", "System.Runtime.Remoting", t1932_MIs, t1932_PIs, t1932_FIs, NULL, &t1932_TI, NULL, &EmptyCustomAttributesCache, &t1932_0_0_0, &t1932_1_0_0, &t1932_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1932), sizeof (t1932), 0, -1, 0, 0, -1, 1056768, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 3, 0, 0, 5, 1, 1};
#include "t1929.h"
// Metadata Definition System.Runtime.Remoting.WellKnownObjectMode
extern TypeInfo t1929_TI;
#include "t1929MD.h"
static MethodInfo* t1929_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1929_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1929_TI, offsetof(t1929, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1929_0_0_32854;
FieldInfo t1929_f2_FieldInfo = 
{
	"Singleton", &t1929_0_0_32854, &t1929_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1929_0_0_32854;
FieldInfo t1929_f3_FieldInfo = 
{
	"SingleCall", &t1929_0_0_32854, &t1929_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1929_FIs[] =
{
	&t1929_f1_FieldInfo,
	&t1929_f2_FieldInfo,
	&t1929_f3_FieldInfo,
	NULL
};
static const int32_t t1929_f2_DefaultValueData = 1;
extern Il2CppType t125_0_0_0;
static Il2CppFieldDefaultValueEntry t1929_f2_DefaultValue = 
{
	&t1929_f2_FieldInfo, { (char*)&t1929_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1929_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1929_f3_DefaultValue = 
{
	&t1929_f3_FieldInfo, { (char*)&t1929_f3_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1929_FDVs[] = 
{
	&t1929_f2_DefaultValue,
	&t1929_f3_DefaultValue,
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
static Il2CppMethodReference t1929_VT[] =
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
static bool t1929_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
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
static Il2CppInterfaceOffsetPair t1929_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1929_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1929__CustomAttributeCache = {
1,
NULL,
&t1929_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1929_1_0_0;
extern Il2CppType t8_0_0_0;
#include "t125.h"
extern TypeInfo t125_TI;
extern CustomAttributesCache t1929__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1929_DM = 
{
	NULL, NULL, NULL, t1929_IOs, &t8_0_0_0, t1929_VT, t1929_VTIGM, NULL};
TypeInfo t1929_TI = 
{
	&g_mscorlib_dll_Image, NULL, "WellKnownObjectMode", "System.Runtime.Remoting", t1929_MIs, NULL, t1929_FIs, NULL, &t125_TI, NULL, &t1929__CustomAttributeCache, &t1929_0_0_0, &t1929_1_0_0, &t1929_DM, NULL, NULL, NULL, t1929_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1929)+ sizeof (Il2CppObject), sizeof (t1929)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t1933.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.BinaryCommon
extern TypeInfo t1933_TI;
#include "t1933MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10136_MI = 
{
	".cctor", (methodPointerType)&m10136, &t1933_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4041, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1933_m10137_ParameterInfos[] = 
{
	{"type", 0, 134222527, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10137_MI = 
{
	"IsPrimitive", (methodPointerType)&m10137, &t1933_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1933_m10137_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4042, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1933_m10138_ParameterInfos[] = 
{
	{"type", 0, 134222528, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t575_0_0_0;
extern void* RuntimeInvoker_t575_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10138_MI = 
{
	"GetTypeCode", (methodPointerType)&m10138, &t1933_TI, &t575_0_0_0, RuntimeInvoker_t575_t9, t1933_m10138_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4043, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1933_m10139_ParameterInfos[] = 
{
	{"code", 0, 134222529, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10139_MI = 
{
	"GetTypeFromCode", (methodPointerType)&m10139, &t1933_TI, &t126_0_0_0, RuntimeInvoker_t9_t125, t1933_m10139_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4044, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t1904_0_0_0;
extern Il2CppType t1904_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1933_m10140_ParameterInfos[] = 
{
	{"type", 0, 134222530, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"selector", 1, 134222531, &EmptyCustomAttributesCache, &t1904_0_0_0},
	{"context", 2, 134222532, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10140_MI = 
{
	"CheckSerializable", (methodPointerType)&m10140, &t1933_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t1101, t1933_m10140_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 4045, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1933_m10141_ParameterInfos[] = 
{
	{"byteArray", 0, 134222533, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"size", 1, 134222534, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"dataSize", 2, 134222535, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10141_MI = 
{
	"SwapBytes", (methodPointerType)&m10141, &t1933_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1933_m10141_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 4046, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1933_MIs[] =
{
	&m10136_MI,
	&m10137_MI,
	&m10138_MI,
	&m10139_MI,
	&m10140_MI,
	&m10141_MI,
	NULL
};
extern Il2CppType t730_0_0_22;
FieldInfo t1933_f0_FieldInfo = 
{
	"BinaryHeader", &t730_0_0_22, &t1933_TI, offsetof(t1933_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t152_0_0_17;
FieldInfo t1933_f1_FieldInfo = 
{
	"_typeCodesToType", &t152_0_0_17, &t1933_TI, offsetof(t1933_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_17;
FieldInfo t1933_f2_FieldInfo = 
{
	"_typeCodeMap", &t730_0_0_17, &t1933_TI, offsetof(t1933_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_22;
FieldInfo t1933_f3_FieldInfo = 
{
	"UseReflectionSerialization", &t124_0_0_22, &t1933_TI, offsetof(t1933_SFs, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1933_FIs[] =
{
	&t1933_f0_FieldInfo,
	&t1933_f1_FieldInfo,
	&t1933_f2_FieldInfo,
	&t1933_f3_FieldInfo,
	NULL
};
static Il2CppMethodReference t1933_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1933_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1933_0_0_0;
extern Il2CppType t1933_1_0_0;
struct t1933;
const Il2CppTypeDefinitionMetadata t1933_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1933_VT, t1933_VTIGM, NULL};
TypeInfo t1933_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryCommon", "System.Runtime.Serialization.Formatters.Binary", t1933_MIs, NULL, t1933_FIs, NULL, &t1933_TI, NULL, &EmptyCustomAttributesCache, &t1933_0_0_0, &t1933_1_0_0, &t1933_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1933), sizeof (t1933), 0, -1, sizeof(t1933_SFs), 0, -1, 0, 0, 0, false, false, false, false, false, false, false, false, true, false, 6, 0, 4, 0, 0, 4, 0, 0};
#include "t1934.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.BinaryElement
extern TypeInfo t1934_TI;
#include "t1934MD.h"
static MethodInfo* t1934_MIs[] =
{
	NULL
};
extern Il2CppType t575_0_0_1542;
FieldInfo t1934_f1_FieldInfo = 
{
	"value__", &t575_0_0_1542, &t1934_TI, offsetof(t1934, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f2_FieldInfo = 
{
	"Header", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f3_FieldInfo = 
{
	"RefTypeObject", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f4_FieldInfo = 
{
	"UntypedRuntimeObject", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f5_FieldInfo = 
{
	"UntypedExternalObject", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f6_FieldInfo = 
{
	"RuntimeObject", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f7_FieldInfo = 
{
	"ExternalObject", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f8_FieldInfo = 
{
	"String", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f9_FieldInfo = 
{
	"GenericArray", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f10_FieldInfo = 
{
	"BoxedPrimitiveTypeValue", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f11_FieldInfo = 
{
	"ObjectReference", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f12_FieldInfo = 
{
	"NullValue", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f13_FieldInfo = 
{
	"End", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f14_FieldInfo = 
{
	"Assembly", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f15_FieldInfo = 
{
	"ArrayFiller8b", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f16_FieldInfo = 
{
	"ArrayFiller32b", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f17_FieldInfo = 
{
	"ArrayOfPrimitiveType", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f18_FieldInfo = 
{
	"ArrayOfObject", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f19_FieldInfo = 
{
	"ArrayOfString", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f20_FieldInfo = 
{
	"Method", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f21_FieldInfo = 
{
	"_Unknown4", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f22_FieldInfo = 
{
	"_Unknown5", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f23_FieldInfo = 
{
	"MethodCall", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1934_0_0_32854;
FieldInfo t1934_f24_FieldInfo = 
{
	"MethodResponse", &t1934_0_0_32854, &t1934_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1934_FIs[] =
{
	&t1934_f1_FieldInfo,
	&t1934_f2_FieldInfo,
	&t1934_f3_FieldInfo,
	&t1934_f4_FieldInfo,
	&t1934_f5_FieldInfo,
	&t1934_f6_FieldInfo,
	&t1934_f7_FieldInfo,
	&t1934_f8_FieldInfo,
	&t1934_f9_FieldInfo,
	&t1934_f10_FieldInfo,
	&t1934_f11_FieldInfo,
	&t1934_f12_FieldInfo,
	&t1934_f13_FieldInfo,
	&t1934_f14_FieldInfo,
	&t1934_f15_FieldInfo,
	&t1934_f16_FieldInfo,
	&t1934_f17_FieldInfo,
	&t1934_f18_FieldInfo,
	&t1934_f19_FieldInfo,
	&t1934_f20_FieldInfo,
	&t1934_f21_FieldInfo,
	&t1934_f22_FieldInfo,
	&t1934_f23_FieldInfo,
	&t1934_f24_FieldInfo,
	NULL
};
static const uint8_t t1934_f2_DefaultValueData = 0;
extern Il2CppType t575_0_0_0;
static Il2CppFieldDefaultValueEntry t1934_f2_DefaultValue = 
{
	&t1934_f2_FieldInfo, { (char*)&t1934_f2_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1934_f3_DefaultValue = 
{
	&t1934_f3_FieldInfo, { (char*)&t1934_f3_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1934_f4_DefaultValue = 
{
	&t1934_f4_FieldInfo, { (char*)&t1934_f4_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1934_f5_DefaultValue = 
{
	&t1934_f5_FieldInfo, { (char*)&t1934_f5_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1934_f6_DefaultValue = 
{
	&t1934_f6_FieldInfo, { (char*)&t1934_f6_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1934_f7_DefaultValue = 
{
	&t1934_f7_FieldInfo, { (char*)&t1934_f7_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1934_f8_DefaultValue = 
{
	&t1934_f8_FieldInfo, { (char*)&t1934_f8_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1934_f9_DefaultValue = 
{
	&t1934_f9_FieldInfo, { (char*)&t1934_f9_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f10_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1934_f10_DefaultValue = 
{
	&t1934_f10_FieldInfo, { (char*)&t1934_f10_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f11_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t1934_f11_DefaultValue = 
{
	&t1934_f11_FieldInfo, { (char*)&t1934_f11_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f12_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t1934_f12_DefaultValue = 
{
	&t1934_f12_FieldInfo, { (char*)&t1934_f12_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f13_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t1934_f13_DefaultValue = 
{
	&t1934_f13_FieldInfo, { (char*)&t1934_f13_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f14_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t1934_f14_DefaultValue = 
{
	&t1934_f14_FieldInfo, { (char*)&t1934_f14_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f15_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry t1934_f15_DefaultValue = 
{
	&t1934_f15_FieldInfo, { (char*)&t1934_f15_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f16_DefaultValueData = 14;
static Il2CppFieldDefaultValueEntry t1934_f16_DefaultValue = 
{
	&t1934_f16_FieldInfo, { (char*)&t1934_f16_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f17_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t1934_f17_DefaultValue = 
{
	&t1934_f17_FieldInfo, { (char*)&t1934_f17_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f18_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1934_f18_DefaultValue = 
{
	&t1934_f18_FieldInfo, { (char*)&t1934_f18_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f19_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry t1934_f19_DefaultValue = 
{
	&t1934_f19_FieldInfo, { (char*)&t1934_f19_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f20_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry t1934_f20_DefaultValue = 
{
	&t1934_f20_FieldInfo, { (char*)&t1934_f20_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f21_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry t1934_f21_DefaultValue = 
{
	&t1934_f21_FieldInfo, { (char*)&t1934_f21_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f22_DefaultValueData = 20;
static Il2CppFieldDefaultValueEntry t1934_f22_DefaultValue = 
{
	&t1934_f22_FieldInfo, { (char*)&t1934_f22_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f23_DefaultValueData = 21;
static Il2CppFieldDefaultValueEntry t1934_f23_DefaultValue = 
{
	&t1934_f23_FieldInfo, { (char*)&t1934_f23_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1934_f24_DefaultValueData = 22;
static Il2CppFieldDefaultValueEntry t1934_f24_DefaultValue = 
{
	&t1934_f24_FieldInfo, { (char*)&t1934_f24_DefaultValueData, &t575_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1934_FDVs[] = 
{
	&t1934_f2_DefaultValue,
	&t1934_f3_DefaultValue,
	&t1934_f4_DefaultValue,
	&t1934_f5_DefaultValue,
	&t1934_f6_DefaultValue,
	&t1934_f7_DefaultValue,
	&t1934_f8_DefaultValue,
	&t1934_f9_DefaultValue,
	&t1934_f10_DefaultValue,
	&t1934_f11_DefaultValue,
	&t1934_f12_DefaultValue,
	&t1934_f13_DefaultValue,
	&t1934_f14_DefaultValue,
	&t1934_f15_DefaultValue,
	&t1934_f16_DefaultValue,
	&t1934_f17_DefaultValue,
	&t1934_f18_DefaultValue,
	&t1934_f19_DefaultValue,
	&t1934_f20_DefaultValue,
	&t1934_f21_DefaultValue,
	&t1934_f22_DefaultValue,
	&t1934_f23_DefaultValue,
	&t1934_f24_DefaultValue,
	NULL
};
static Il2CppMethodReference t1934_VT[] =
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
static bool t1934_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1934_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1934_0_0_0;
extern Il2CppType t1934_1_0_0;
#include "t575.h"
extern TypeInfo t575_TI;
const Il2CppTypeDefinitionMetadata t1934_DM = 
{
	NULL, NULL, NULL, t1934_IOs, &t8_0_0_0, t1934_VT, t1934_VTIGM, NULL};
TypeInfo t1934_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryElement", "System.Runtime.Serialization.Formatters.Binary", t1934_MIs, NULL, t1934_FIs, NULL, &t575_TI, NULL, &EmptyCustomAttributesCache, &t1934_0_0_0, &t1934_1_0_0, &t1934_DM, NULL, NULL, NULL, t1934_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1934)+ sizeof (Il2CppObject), sizeof (t1934)+ sizeof (Il2CppObject), 0, sizeof(uint8_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 24, 0, 0, 23, 0, 3};
#include "t1935.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.TypeTag
extern TypeInfo t1935_TI;
#include "t1935MD.h"
static MethodInfo* t1935_MIs[] =
{
	NULL
};
extern Il2CppType t575_0_0_1542;
FieldInfo t1935_f1_FieldInfo = 
{
	"value__", &t575_0_0_1542, &t1935_TI, offsetof(t1935, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1935_0_0_32854;
FieldInfo t1935_f2_FieldInfo = 
{
	"PrimitiveType", &t1935_0_0_32854, &t1935_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1935_0_0_32854;
FieldInfo t1935_f3_FieldInfo = 
{
	"String", &t1935_0_0_32854, &t1935_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1935_0_0_32854;
FieldInfo t1935_f4_FieldInfo = 
{
	"ObjectType", &t1935_0_0_32854, &t1935_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1935_0_0_32854;
FieldInfo t1935_f5_FieldInfo = 
{
	"RuntimeType", &t1935_0_0_32854, &t1935_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1935_0_0_32854;
FieldInfo t1935_f6_FieldInfo = 
{
	"GenericType", &t1935_0_0_32854, &t1935_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1935_0_0_32854;
FieldInfo t1935_f7_FieldInfo = 
{
	"ArrayOfObject", &t1935_0_0_32854, &t1935_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1935_0_0_32854;
FieldInfo t1935_f8_FieldInfo = 
{
	"ArrayOfString", &t1935_0_0_32854, &t1935_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1935_0_0_32854;
FieldInfo t1935_f9_FieldInfo = 
{
	"ArrayOfPrimitiveType", &t1935_0_0_32854, &t1935_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1935_FIs[] =
{
	&t1935_f1_FieldInfo,
	&t1935_f2_FieldInfo,
	&t1935_f3_FieldInfo,
	&t1935_f4_FieldInfo,
	&t1935_f5_FieldInfo,
	&t1935_f6_FieldInfo,
	&t1935_f7_FieldInfo,
	&t1935_f8_FieldInfo,
	&t1935_f9_FieldInfo,
	NULL
};
static const uint8_t t1935_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1935_f2_DefaultValue = 
{
	&t1935_f2_FieldInfo, { (char*)&t1935_f2_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1935_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1935_f3_DefaultValue = 
{
	&t1935_f3_FieldInfo, { (char*)&t1935_f3_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1935_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1935_f4_DefaultValue = 
{
	&t1935_f4_FieldInfo, { (char*)&t1935_f4_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1935_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1935_f5_DefaultValue = 
{
	&t1935_f5_FieldInfo, { (char*)&t1935_f5_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1935_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1935_f6_DefaultValue = 
{
	&t1935_f6_FieldInfo, { (char*)&t1935_f6_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1935_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1935_f7_DefaultValue = 
{
	&t1935_f7_FieldInfo, { (char*)&t1935_f7_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1935_f8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1935_f8_DefaultValue = 
{
	&t1935_f8_FieldInfo, { (char*)&t1935_f8_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1935_f9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1935_f9_DefaultValue = 
{
	&t1935_f9_FieldInfo, { (char*)&t1935_f9_DefaultValueData, &t575_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1935_FDVs[] = 
{
	&t1935_f2_DefaultValue,
	&t1935_f3_DefaultValue,
	&t1935_f4_DefaultValue,
	&t1935_f5_DefaultValue,
	&t1935_f6_DefaultValue,
	&t1935_f7_DefaultValue,
	&t1935_f8_DefaultValue,
	&t1935_f9_DefaultValue,
	NULL
};
static Il2CppMethodReference t1935_VT[] =
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
static bool t1935_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1935_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1935_0_0_0;
extern Il2CppType t1935_1_0_0;
const Il2CppTypeDefinitionMetadata t1935_DM = 
{
	NULL, NULL, NULL, t1935_IOs, &t8_0_0_0, t1935_VT, t1935_VTIGM, NULL};
TypeInfo t1935_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeTag", "System.Runtime.Serialization.Formatters.Binary", t1935_MIs, NULL, t1935_FIs, NULL, &t575_TI, NULL, &EmptyCustomAttributesCache, &t1935_0_0_0, &t1935_1_0_0, &t1935_DM, NULL, NULL, NULL, t1935_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1935)+ sizeof (Il2CppObject), sizeof (t1935)+ sizeof (Il2CppObject), 0, sizeof(uint8_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 9, 0, 0, 23, 0, 3};
#include "t1936.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.MethodFlags
extern TypeInfo t1936_TI;
#include "t1936MD.h"
static MethodInfo* t1936_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1936_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1936_TI, offsetof(t1936, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1936_0_0_32854;
FieldInfo t1936_f2_FieldInfo = 
{
	"NoArguments", &t1936_0_0_32854, &t1936_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1936_0_0_32854;
FieldInfo t1936_f3_FieldInfo = 
{
	"PrimitiveArguments", &t1936_0_0_32854, &t1936_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1936_0_0_32854;
FieldInfo t1936_f4_FieldInfo = 
{
	"ArgumentsInSimpleArray", &t1936_0_0_32854, &t1936_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1936_0_0_32854;
FieldInfo t1936_f5_FieldInfo = 
{
	"ArgumentsInMultiArray", &t1936_0_0_32854, &t1936_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1936_0_0_32854;
FieldInfo t1936_f6_FieldInfo = 
{
	"ExcludeLogicalCallContext", &t1936_0_0_32854, &t1936_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1936_0_0_32854;
FieldInfo t1936_f7_FieldInfo = 
{
	"IncludesLogicalCallContext", &t1936_0_0_32854, &t1936_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1936_0_0_32854;
FieldInfo t1936_f8_FieldInfo = 
{
	"IncludesSignature", &t1936_0_0_32854, &t1936_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1936_0_0_32854;
FieldInfo t1936_f9_FieldInfo = 
{
	"FormatMask", &t1936_0_0_32854, &t1936_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1936_0_0_32854;
FieldInfo t1936_f10_FieldInfo = 
{
	"GenericArguments", &t1936_0_0_32854, &t1936_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1936_0_0_32854;
FieldInfo t1936_f11_FieldInfo = 
{
	"NeedsInfoArrayMask", &t1936_0_0_32854, &t1936_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1936_FIs[] =
{
	&t1936_f1_FieldInfo,
	&t1936_f2_FieldInfo,
	&t1936_f3_FieldInfo,
	&t1936_f4_FieldInfo,
	&t1936_f5_FieldInfo,
	&t1936_f6_FieldInfo,
	&t1936_f7_FieldInfo,
	&t1936_f8_FieldInfo,
	&t1936_f9_FieldInfo,
	&t1936_f10_FieldInfo,
	&t1936_f11_FieldInfo,
	NULL
};
static const int32_t t1936_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1936_f2_DefaultValue = 
{
	&t1936_f2_FieldInfo, { (char*)&t1936_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1936_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1936_f3_DefaultValue = 
{
	&t1936_f3_FieldInfo, { (char*)&t1936_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1936_f4_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1936_f4_DefaultValue = 
{
	&t1936_f4_FieldInfo, { (char*)&t1936_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1936_f5_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1936_f5_DefaultValue = 
{
	&t1936_f5_FieldInfo, { (char*)&t1936_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1936_f6_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1936_f6_DefaultValue = 
{
	&t1936_f6_FieldInfo, { (char*)&t1936_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1936_f7_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1936_f7_DefaultValue = 
{
	&t1936_f7_FieldInfo, { (char*)&t1936_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1936_f8_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1936_f8_DefaultValue = 
{
	&t1936_f8_FieldInfo, { (char*)&t1936_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1936_f9_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t1936_f9_DefaultValue = 
{
	&t1936_f9_FieldInfo, { (char*)&t1936_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1936_f10_DefaultValueData = 32768;
static Il2CppFieldDefaultValueEntry t1936_f10_DefaultValue = 
{
	&t1936_f10_FieldInfo, { (char*)&t1936_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1936_f11_DefaultValueData = 32972;
static Il2CppFieldDefaultValueEntry t1936_f11_DefaultValue = 
{
	&t1936_f11_FieldInfo, { (char*)&t1936_f11_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1936_FDVs[] = 
{
	&t1936_f2_DefaultValue,
	&t1936_f3_DefaultValue,
	&t1936_f4_DefaultValue,
	&t1936_f5_DefaultValue,
	&t1936_f6_DefaultValue,
	&t1936_f7_DefaultValue,
	&t1936_f8_DefaultValue,
	&t1936_f9_DefaultValue,
	&t1936_f10_DefaultValue,
	&t1936_f11_DefaultValue,
	NULL
};
static Il2CppMethodReference t1936_VT[] =
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
static bool t1936_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1936_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1936_0_0_0;
extern Il2CppType t1936_1_0_0;
const Il2CppTypeDefinitionMetadata t1936_DM = 
{
	NULL, NULL, NULL, t1936_IOs, &t8_0_0_0, t1936_VT, t1936_VTIGM, NULL};
TypeInfo t1936_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MethodFlags", "System.Runtime.Serialization.Formatters.Binary", t1936_MIs, NULL, t1936_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t1936_0_0_0, &t1936_1_0_0, &t1936_DM, NULL, NULL, NULL, t1936_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1936)+ sizeof (Il2CppObject), sizeof (t1936)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 11, 0, 0, 23, 0, 3};
#include "t1937.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
extern TypeInfo t1937_TI;
#include "t1937MD.h"
static MethodInfo* t1937_MIs[] =
{
	NULL
};
extern Il2CppType t575_0_0_1542;
FieldInfo t1937_f1_FieldInfo = 
{
	"value__", &t575_0_0_1542, &t1937_TI, offsetof(t1937, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1937_0_0_32854;
FieldInfo t1937_f2_FieldInfo = 
{
	"Null", &t1937_0_0_32854, &t1937_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1937_0_0_32854;
FieldInfo t1937_f3_FieldInfo = 
{
	"PrimitiveType", &t1937_0_0_32854, &t1937_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1937_0_0_32854;
FieldInfo t1937_f4_FieldInfo = 
{
	"ObjectType", &t1937_0_0_32854, &t1937_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1937_0_0_32854;
FieldInfo t1937_f5_FieldInfo = 
{
	"Exception", &t1937_0_0_32854, &t1937_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1937_FIs[] =
{
	&t1937_f1_FieldInfo,
	&t1937_f2_FieldInfo,
	&t1937_f3_FieldInfo,
	&t1937_f4_FieldInfo,
	&t1937_f5_FieldInfo,
	NULL
};
static const uint8_t t1937_f2_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1937_f2_DefaultValue = 
{
	&t1937_f2_FieldInfo, { (char*)&t1937_f2_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1937_f3_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1937_f3_DefaultValue = 
{
	&t1937_f3_FieldInfo, { (char*)&t1937_f3_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1937_f4_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1937_f4_DefaultValue = 
{
	&t1937_f4_FieldInfo, { (char*)&t1937_f4_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1937_f5_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1937_f5_DefaultValue = 
{
	&t1937_f5_FieldInfo, { (char*)&t1937_f5_DefaultValueData, &t575_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1937_FDVs[] = 
{
	&t1937_f2_DefaultValue,
	&t1937_f3_DefaultValue,
	&t1937_f4_DefaultValue,
	&t1937_f5_DefaultValue,
	NULL
};
static Il2CppMethodReference t1937_VT[] =
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
static bool t1937_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1937_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1937_0_0_0;
extern Il2CppType t1937_1_0_0;
const Il2CppTypeDefinitionMetadata t1937_DM = 
{
	NULL, NULL, NULL, t1937_IOs, &t8_0_0_0, t1937_VT, t1937_VTIGM, NULL};
TypeInfo t1937_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReturnTypeTag", "System.Runtime.Serialization.Formatters.Binary", t1937_MIs, NULL, t1937_FIs, NULL, &t575_TI, NULL, &EmptyCustomAttributesCache, &t1937_0_0_0, &t1937_1_0_0, &t1937_DM, NULL, NULL, NULL, t1937_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1937)+ sizeof (Il2CppObject), sizeof (t1937)+ sizeof (Il2CppObject), 0, sizeof(uint8_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t295.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
extern TypeInfo t295_TI;
#include "t295MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m1093_MI = 
{
	".ctor", (methodPointerType)&m1093, &t295_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4047, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1904_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t295_m10142_ParameterInfos[] = 
{
	{"selector", 0, 134222536, &EmptyCustomAttributesCache, &t1904_0_0_0},
	{"context", 1, 134222537, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10142_MI = 
{
	".ctor", (methodPointerType)&m10142, &t295_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t295_m10142_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4048, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1904_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t295__CustomAttributeCache_m10143;
MethodInfo m10143_MI = 
{
	"get_DefaultSurrogateSelector", (methodPointerType)&m10143, &t295_TI, &t1904_0_0_0, RuntimeInvoker_t9, NULL, &t295__CustomAttributeCache_m10143, 2198, 0, 255, 0, false, false, 4049, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1939_0_0_0;
extern Il2CppType t1939_0_0_0;
static ParameterInfo t295_m10144_ParameterInfos[] = 
{
	{"value", 0, 134222538, &EmptyCustomAttributesCache, &t1939_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10144_MI = 
{
	"set_AssemblyFormat", (methodPointerType)&m10144, &t295_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t295_m10144_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4050, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1938_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10145_MI = 
{
	"get_Binder", (methodPointerType)&m10145, &t295_TI, &t1938_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 4051, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1101_0_0_0;
extern void* RuntimeInvoker_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10146_MI = 
{
	"get_Context", (methodPointerType)&m10146, &t295_TI, &t1101_0_0_0, RuntimeInvoker_t1101, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 4052, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1904_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10147_MI = 
{
	"get_SurrogateSelector", (methodPointerType)&m10147, &t295_TI, &t1904_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 4053, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1941_0_0_0;
extern void* RuntimeInvoker_t1941 (MethodInfo* method, void* obj, void** args);
MethodInfo m10148_MI = 
{
	"get_FilterLevel", (methodPointerType)&m10148, &t295_TI, &t1941_0_0_0, RuntimeInvoker_t1941, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4054, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t298_0_0_0;
extern Il2CppType t298_0_0_0;
static ParameterInfo t295_m1095_ParameterInfos[] = 
{
	{"serializationStream", 0, 134222539, &EmptyCustomAttributesCache, &t298_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1095_MI = 
{
	"Deserialize", (methodPointerType)&m1095, &t295_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t295_m1095_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 1, false, false, 4055, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t298_0_0_0;
extern Il2CppType t1942_0_0_0;
extern Il2CppType t1942_0_0_0;
static ParameterInfo t295_m10149_ParameterInfos[] = 
{
	{"serializationStream", 0, 134222540, &EmptyCustomAttributesCache, &t298_0_0_0},
	{"handler", 1, 134222541, &EmptyCustomAttributesCache, &t1942_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10149_MI = 
{
	"NoCheckDeserialize", (methodPointerType)&m10149, &t295_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t295_m10149_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4056, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t298_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t295_m1101_ParameterInfos[] = 
{
	{"serializationStream", 0, 134222542, &EmptyCustomAttributesCache, &t298_0_0_0},
	{"graph", 1, 134222543, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1101_MI = 
{
	"Serialize", (methodPointerType)&m1101, &t295_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t295_m1101_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 8, 2, false, false, 4057, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t298_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1895_0_0_0;
extern Il2CppType t1895_0_0_0;
static ParameterInfo t295_m10150_ParameterInfos[] = 
{
	{"serializationStream", 0, 134222544, &EmptyCustomAttributesCache, &t298_0_0_0},
	{"graph", 1, 134222545, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"headers", 2, 134222546, &EmptyCustomAttributesCache, &t1895_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10150_MI = 
{
	"Serialize", (methodPointerType)&m10150, &t295_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t295_m10150_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 9, 3, false, false, 4058, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t1714_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t295_m10151_ParameterInfos[] = 
{
	{"writer", 0, 134222547, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"hasHeaders", 1, 134222548, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10151_MI = 
{
	"WriteBinaryHeader", (methodPointerType)&m10151, &t295_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t295_m10151_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4059, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
extern Il2CppType t1712_0_0_0;
extern Il2CppType t124_1_0_2;
extern Il2CppType t124_1_0_0;
static ParameterInfo t295_m10152_ParameterInfos[] = 
{
	{"reader", 0, 134222549, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"hasHeaders", 1, 134222550, &EmptyCustomAttributesCache, &t124_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t635 (MethodInfo* method, void* obj, void** args);
MethodInfo m10152_MI = 
{
	"ReadBinaryHeader", (methodPointerType)&m10152, &t295_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t635, t295_m10152_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4060, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t295_MIs[] =
{
	&m1093_MI,
	&m10142_MI,
	&m10143_MI,
	&m10144_MI,
	&m10145_MI,
	&m10146_MI,
	&m10147_MI,
	&m10148_MI,
	&m1095_MI,
	&m10149_MI,
	&m1101_MI,
	&m10150_MI,
	&m10151_MI,
	&m10152_MI,
	NULL
};
extern Il2CppType t1939_0_0_1;
FieldInfo t295_f0_FieldInfo = 
{
	"assembly_format", &t1939_0_0_1, &t295_TI, offsetof(t295, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1938_0_0_1;
FieldInfo t295_f1_FieldInfo = 
{
	"binder", &t1938_0_0_1, &t295_TI, offsetof(t295, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1101_0_0_1;
FieldInfo t295_f2_FieldInfo = 
{
	"context", &t1101_0_0_1, &t295_TI, offsetof(t295, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1904_0_0_1;
FieldInfo t295_f3_FieldInfo = 
{
	"surrogate_selector", &t1904_0_0_1, &t295_TI, offsetof(t295, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_1;
FieldInfo t295_f4_FieldInfo = 
{
	"type_format", &t1940_0_0_1, &t295_TI, offsetof(t295, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1941_0_0_1;
FieldInfo t295_f5_FieldInfo = 
{
	"filter_level", &t1941_0_0_1, &t295_TI, offsetof(t295, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1904_0_0_17;
extern CustomAttributesCache t295__CustomAttributeCache_U3CDefaultSurrogateSelectorU3Ek__BackingField;
FieldInfo t295_f6_FieldInfo = 
{
	"<DefaultSurrogateSelector>k__BackingField", &t1904_0_0_17, &t295_TI, offsetof(t295_SFs, f6), &t295__CustomAttributeCache_U3CDefaultSurrogateSelectorU3Ek__BackingField};
static FieldInfo* t295_FIs[] =
{
	&t295_f0_FieldInfo,
	&t295_f1_FieldInfo,
	&t295_f2_FieldInfo,
	&t295_f3_FieldInfo,
	&t295_f4_FieldInfo,
	&t295_f5_FieldInfo,
	&t295_f6_FieldInfo,
	NULL
};
extern MethodInfo m10143_MI;
static PropertyInfo t295____DefaultSurrogateSelector_PropertyInfo = 
{
	&t295_TI, "DefaultSurrogateSelector", &m10143_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10144_MI;
static PropertyInfo t295____AssemblyFormat_PropertyInfo = 
{
	&t295_TI, "AssemblyFormat", NULL, &m10144_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10145_MI;
static PropertyInfo t295____Binder_PropertyInfo = 
{
	&t295_TI, "Binder", &m10145_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10146_MI;
static PropertyInfo t295____Context_PropertyInfo = 
{
	&t295_TI, "Context", &m10146_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10147_MI;
static PropertyInfo t295____SurrogateSelector_PropertyInfo = 
{
	&t295_TI, "SurrogateSelector", &m10147_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10148_MI;
static PropertyInfo t295____FilterLevel_PropertyInfo = 
{
	&t295_TI, "FilterLevel", &m10148_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t295_PIs[] =
{
	&t295____DefaultSurrogateSelector_PropertyInfo,
	&t295____AssemblyFormat_PropertyInfo,
	&t295____Binder_PropertyInfo,
	&t295____Context_PropertyInfo,
	&t295____SurrogateSelector_PropertyInfo,
	&t295____FilterLevel_PropertyInfo,
	NULL
};
extern MethodInfo m1095_MI;
extern MethodInfo m1101_MI;
extern MethodInfo m10150_MI;
static Il2CppMethodReference t295_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10145_MI,
	&m10146_MI,
	&m10147_MI,
	&m1095_MI,
	&m1101_MI,
	&m10150_MI,
};
static bool t295_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t2628_0_0_0;
extern Il2CppType t2629_0_0_0;
static const Il2CppType* t295_ITIs[] = 
{
	&t2628_0_0_0,
	&t2629_0_0_0,
};
static Il2CppInterfaceOffsetPair t295_IOs[] = 
{
	{ &t2628_0_0_0, 4},
	{ &t2629_0_0_0, 4},
};
void t295_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t295_CustomAttributesCacheGenerator_U3CDefaultSurrogateSelectorU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t295_CustomAttributesCacheGenerator_m10143(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t295__CustomAttributeCache = {
1,
NULL,
&t295_CustomAttributesCacheGenerator
};
CustomAttributesCache t295__CustomAttributeCache_U3CDefaultSurrogateSelectorU3Ek__BackingField = {
1,
NULL,
&t295_CustomAttributesCacheGenerator_U3CDefaultSurrogateSelectorU3Ek__BackingField
};
CustomAttributesCache t295__CustomAttributeCache_m10143 = {
1,
NULL,
&t295_CustomAttributesCacheGenerator_m10143
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t295_0_0_0;
extern Il2CppType t295_1_0_0;
struct t295;
extern CustomAttributesCache t295__CustomAttributeCache;
extern CustomAttributesCache t295__CustomAttributeCache_U3CDefaultSurrogateSelectorU3Ek__BackingField;
extern CustomAttributesCache t295__CustomAttributeCache_m10143;
const Il2CppTypeDefinitionMetadata t295_DM = 
{
	NULL, NULL, t295_ITIs, t295_IOs, &t9_0_0_0, t295_VT, t295_VTIGM, NULL};
TypeInfo t295_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryFormatter", "System.Runtime.Serialization.Formatters.Binary", t295_MIs, t295_PIs, t295_FIs, NULL, &t295_TI, NULL, &t295__CustomAttributeCache, &t295_0_0_0, &t295_1_0_0, &t295_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t295), sizeof (t295), 0, -1, sizeof(t295_SFs), 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 14, 6, 7, 0, 0, 10, 2, 2};
#include "t1943.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.CodeGenerator
extern TypeInfo t1943_TI;
#include "t1943MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10153_MI = 
{
	".cctor", (methodPointerType)&m10153, &t1943_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4061, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1943_m10154_ParameterInfos[] = 
{
	{"type", 0, 134222551, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"context", 1, 134222552, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10154_MI = 
{
	"GenerateMetadataType", (methodPointerType)&m10154, &t1943_TI, &t126_0_0_0, RuntimeInvoker_t9_t9_t1101, t1943_m10154_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4062, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1943_m10155_ParameterInfos[] = 
{
	{"type", 0, 134222553, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"context", 1, 134222554, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10155_MI = 
{
	"GenerateMetadataTypeInternal", (methodPointerType)&m10155, &t1943_TI, &t126_0_0_0, RuntimeInvoker_t9_t9_t1101, t1943_m10155_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4063, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1753_0_0_0;
extern Il2CppType t1753_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1943_m10156_ParameterInfos[] = 
{
	{"ig", 0, 134222555, &EmptyCustomAttributesCache, &t1753_0_0_0},
	{"t", 1, 134222556, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10156_MI = 
{
	"LoadFromPtr", (methodPointerType)&m10156, &t1943_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1943_m10156_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4064, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1753_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1943_m10157_ParameterInfos[] = 
{
	{"gen", 0, 134222557, &EmptyCustomAttributesCache, &t1753_0_0_0},
	{"type", 1, 134222558, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"member", 2, 134222559, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10157_MI = 
{
	"EmitWriteTypeSpec", (methodPointerType)&m10157, &t1943_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1943_m10157_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4065, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1753_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1943_m10158_ParameterInfos[] = 
{
	{"gen", 0, 134222560, &EmptyCustomAttributesCache, &t1753_0_0_0},
	{"type", 1, 134222561, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"member", 2, 134222562, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10158_MI = 
{
	"EmitLoadTypeAssembly", (methodPointerType)&m10158, &t1943_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1943_m10158_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4066, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1753_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1943_m10159_ParameterInfos[] = 
{
	{"gen", 0, 134222563, &EmptyCustomAttributesCache, &t1753_0_0_0},
	{"type", 1, 134222564, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10159_MI = 
{
	"EmitWrite", (methodPointerType)&m10159, &t1943_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1943_m10159_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 4067, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1753_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1943_m10160_ParameterInfos[] = 
{
	{"gen", 0, 134222565, &EmptyCustomAttributesCache, &t1753_0_0_0},
	{"type", 1, 134222566, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10160_MI = 
{
	"EmitWritePrimitiveValue", (methodPointerType)&m10160, &t1943_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1943_m10160_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4068, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1943_m10161_ParameterInfos[] = 
{
	{"t", 0, 134222567, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10161_MI = 
{
	"EnumToUnderlying", (methodPointerType)&m10161, &t1943_TI, &t126_0_0_0, RuntimeInvoker_t9_t9, t1943_m10161_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4069, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1943_MIs[] =
{
	&m10153_MI,
	&m10154_MI,
	&m10155_MI,
	&m10156_MI,
	&m10157_MI,
	&m10158_MI,
	&m10159_MI,
	&m10160_MI,
	&m10161_MI,
	NULL
};
extern Il2CppType t9_0_0_17;
FieldInfo t1943_f0_FieldInfo = 
{
	"monitor", &t9_0_0_17, &t1943_TI, offsetof(t1943_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1749_0_0_17;
FieldInfo t1943_f1_FieldInfo = 
{
	"_module", &t1749_0_0_17, &t1943_TI, offsetof(t1943_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1943_FIs[] =
{
	&t1943_f0_FieldInfo,
	&t1943_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1943_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1943_VTIGM[] =
{
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
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1943_VT, t1943_VTIGM, NULL};
TypeInfo t1943_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CodeGenerator", "System.Runtime.Serialization.Formatters.Binary", t1943_MIs, NULL, t1943_FIs, NULL, &t1943_TI, NULL, &EmptyCustomAttributesCache, &t1943_0_0_0, &t1943_1_0_0, &t1943_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1943), sizeof (t1943), 0, -1, sizeof(t1943_SFs), 0, -1, 0, 0, 0, false, false, false, false, false, false, false, false, true, false, 9, 0, 2, 0, 0, 4, 0, 0};
#include "t1944.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.MessageFormatter
extern TypeInfo t1944_TI;
#include "t1944MD.h"
extern Il2CppType t1714_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1895_0_0_0;
extern Il2CppType t1904_0_0_0;
extern Il2CppType t1101_0_0_0;
extern Il2CppType t1939_0_0_0;
extern Il2CppType t1940_0_0_0;
extern Il2CppType t1940_0_0_0;
static ParameterInfo t1944_m10162_ParameterInfos[] = 
{
	{"writer", 0, 134222568, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"obj", 1, 134222569, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"headers", 2, 134222570, &EmptyCustomAttributesCache, &t1895_0_0_0},
	{"surrogateSelector", 3, 134222571, &EmptyCustomAttributesCache, &t1904_0_0_0},
	{"context", 4, 134222572, &EmptyCustomAttributesCache, &t1101_0_0_0},
	{"assemblyFormat", 5, 134222573, &EmptyCustomAttributesCache, &t1939_0_0_0},
	{"typeFormat", 6, 134222574, &EmptyCustomAttributesCache, &t1940_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9_t9_t1101_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10162_MI = 
{
	"WriteMethodCall", (methodPointerType)&m10162, &t1944_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9_t9_t1101_t125_t125, t1944_m10162_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 7, false, false, 4070, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1895_0_0_0;
extern Il2CppType t1904_0_0_0;
extern Il2CppType t1101_0_0_0;
extern Il2CppType t1939_0_0_0;
extern Il2CppType t1940_0_0_0;
static ParameterInfo t1944_m10163_ParameterInfos[] = 
{
	{"writer", 0, 134222575, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"obj", 1, 134222576, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"headers", 2, 134222577, &EmptyCustomAttributesCache, &t1895_0_0_0},
	{"surrogateSelector", 3, 134222578, &EmptyCustomAttributesCache, &t1904_0_0_0},
	{"context", 4, 134222579, &EmptyCustomAttributesCache, &t1101_0_0_0},
	{"assemblyFormat", 5, 134222580, &EmptyCustomAttributesCache, &t1939_0_0_0},
	{"typeFormat", 6, 134222581, &EmptyCustomAttributesCache, &t1940_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9_t9_t1101_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10163_MI = 
{
	"WriteMethodResponse", (methodPointerType)&m10163, &t1944_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9_t9_t1101_t125_t125, t1944_m10163_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 7, false, false, 4071, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1934_0_0_0;
extern Il2CppType t1712_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t1942_0_0_0;
extern Il2CppType t295_0_0_0;
static ParameterInfo t1944_m10164_ParameterInfos[] = 
{
	{"elem", 0, 134222582, &EmptyCustomAttributesCache, &t1934_0_0_0},
	{"reader", 1, 134222583, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"hasHeaders", 2, 134222584, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"headerHandler", 3, 134222585, &EmptyCustomAttributesCache, &t1942_0_0_0},
	{"formatter", 4, 134222586, &EmptyCustomAttributesCache, &t295_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t575_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10164_MI = 
{
	"ReadMethodCall", (methodPointerType)&m10164, &t1944_TI, &t9_0_0_0, RuntimeInvoker_t9_t575_t9_t186_t9_t9, t1944_m10164_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 5, false, false, 4072, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1934_0_0_0;
extern Il2CppType t1712_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t1942_0_0_0;
extern Il2CppType t1909_0_0_0;
extern Il2CppType t1909_0_0_0;
extern Il2CppType t295_0_0_0;
static ParameterInfo t1944_m10165_ParameterInfos[] = 
{
	{"elem", 0, 134222587, &EmptyCustomAttributesCache, &t1934_0_0_0},
	{"reader", 1, 134222588, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"hasHeaders", 2, 134222589, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"headerHandler", 3, 134222590, &EmptyCustomAttributesCache, &t1942_0_0_0},
	{"methodCallMessage", 4, 134222591, &EmptyCustomAttributesCache, &t1909_0_0_0},
	{"formatter", 5, 134222592, &EmptyCustomAttributesCache, &t295_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t575_t9_t186_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10165_MI = 
{
	"ReadMethodResponse", (methodPointerType)&m10165, &t1944_TI, &t9_0_0_0, RuntimeInvoker_t9_t575_t9_t186_t9_t9_t9, t1944_m10165_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 6, false, false, 4073, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t1944_m10166_ParameterInfos[] = 
{
	{"objects", 0, 134222593, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10166_MI = 
{
	"AllTypesArePrimitive", (methodPointerType)&m10166, &t1944_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1944_m10166_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4074, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1944_m10167_ParameterInfos[] = 
{
	{"type", 0, 134222594, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10167_MI = 
{
	"IsMethodPrimitive", (methodPointerType)&m10167, &t1944_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1944_m10167_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4075, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1160_0_0_0;
extern Il2CppType t1160_0_0_0;
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1944_m10168_ParameterInfos[] = 
{
	{"properties", 0, 134222595, &EmptyCustomAttributesCache, &t1160_0_0_0},
	{"internalKeys", 1, 134222596, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10168_MI = 
{
	"GetExtraProperties", (methodPointerType)&m10168, &t1944_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t9, t1944_m10168_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 4076, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1944_m10169_ParameterInfos[] = 
{
	{"key", 0, 134222597, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"internalKeys", 1, 134222598, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10169_MI = 
{
	"IsInternalKey", (methodPointerType)&m10169, &t1944_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1944_m10169_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 4077, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1944_MIs[] =
{
	&m10162_MI,
	&m10163_MI,
	&m10164_MI,
	&m10165_MI,
	&m10166_MI,
	&m10167_MI,
	&m10168_MI,
	&m10169_MI,
	NULL
};
static Il2CppMethodReference t1944_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1944_VTIGM[] =
{
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
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1944_VT, t1944_VTIGM, NULL};
TypeInfo t1944_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MessageFormatter", "System.Runtime.Serialization.Formatters.Binary", t1944_MIs, NULL, NULL, NULL, &t1944_TI, NULL, &EmptyCustomAttributesCache, &t1944_0_0_0, &t1944_1_0_0, &t1944_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1944), sizeof (t1944), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 0, 0, 0, 0, 4, 0, 0};
#include "t1945.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
extern TypeInfo t1945_TI;
#include "t1945MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10170_MI = 
{
	".ctor", (methodPointerType)&m10170, &t1945_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4105, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1945_MIs[] =
{
	&m10170_MI,
	NULL
};
extern Il2CppType t126_0_0_6;
FieldInfo t1945_f0_FieldInfo = 
{
	"Type", &t126_0_0_6, &t1945_TI, offsetof(t1945, f0), &EmptyCustomAttributesCache};
extern Il2CppType t152_0_0_6;
FieldInfo t1945_f1_FieldInfo = 
{
	"MemberTypes", &t152_0_0_6, &t1945_TI, offsetof(t1945, f1), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_6;
FieldInfo t1945_f2_FieldInfo = 
{
	"MemberNames", &t221_0_0_6, &t1945_TI, offsetof(t1945, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1946_0_0_6;
FieldInfo t1945_f3_FieldInfo = 
{
	"MemberInfos", &t1946_0_0_6, &t1945_TI, offsetof(t1945, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1945_f4_FieldInfo = 
{
	"FieldCount", &t125_0_0_6, &t1945_TI, offsetof(t1945, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t1945_f5_FieldInfo = 
{
	"NeedsSerializationInfo", &t124_0_0_6, &t1945_TI, offsetof(t1945, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1945_FIs[] =
{
	&t1945_f0_FieldInfo,
	&t1945_f1_FieldInfo,
	&t1945_f2_FieldInfo,
	&t1945_f3_FieldInfo,
	&t1945_f4_FieldInfo,
	&t1945_f5_FieldInfo,
	NULL
};
static Il2CppMethodReference t1945_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1945_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1945_0_0_0;
extern Il2CppType t1945_1_0_0;
extern TypeInfo t1948_TI;
extern Il2CppType t1948_0_0_0;
struct t1945;
const Il2CppTypeDefinitionMetadata t1945_DM = 
{
	&t1948_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t1945_VT, t1945_VTIGM, NULL};
TypeInfo t1945_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeMetadata", "", t1945_MIs, NULL, t1945_FIs, NULL, &t1945_TI, NULL, &EmptyCustomAttributesCache, &t1945_0_0_0, &t1945_1_0_0, &t1945_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1945), sizeof (t1945), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 6, 0, 0, 4, 0, 0};
#include "t1947.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller
extern TypeInfo t1947_TI;
#include "t1947MD.h"
extern Il2CppType t125_0_0_0;
static ParameterInfo t1947_m10171_ParameterInfos[] = 
{
	{"count", 0, 134222693, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10171_MI = 
{
	".ctor", (methodPointerType)&m10171, &t1947_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1947_m10171_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4106, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1947_MIs[] =
{
	&m10171_MI,
	NULL
};
extern Il2CppType t125_0_0_6;
FieldInfo t1947_f0_FieldInfo = 
{
	"NullCount", &t125_0_0_6, &t1947_TI, offsetof(t1947, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1947_FIs[] =
{
	&t1947_f0_FieldInfo,
	NULL
};
static Il2CppMethodReference t1947_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1947_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1947_0_0_0;
extern Il2CppType t1947_1_0_0;
struct t1947;
const Il2CppTypeDefinitionMetadata t1947_DM = 
{
	&t1948_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t1947_VT, t1947_VTIGM, NULL};
TypeInfo t1947_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ArrayNullFiller", "", t1947_MIs, NULL, t1947_FIs, NULL, &t1947_TI, NULL, &EmptyCustomAttributesCache, &t1947_0_0_0, &t1947_1_0_0, &t1947_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1947), sizeof (t1947), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 0};
#include "t1948.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectReader
#include "t1948MD.h"
extern Il2CppType t295_0_0_0;
static ParameterInfo t1948_m10172_ParameterInfos[] = 
{
	{"formatter", 0, 134222599, &EmptyCustomAttributesCache, &t295_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10172_MI = 
{
	".ctor", (methodPointerType)&m10172, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1948_m10172_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4078, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1895_1_0_2;
extern Il2CppType t1895_1_0_0;
static ParameterInfo t1948_m10173_ParameterInfos[] = 
{
	{"reader", 0, 134222600, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"readHeaders", 1, 134222601, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"result", 2, 134222602, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"headers", 3, 134222603, &EmptyCustomAttributesCache, &t1895_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t1003_t2631 (MethodInfo* method, void* obj, void** args);
MethodInfo m10173_MI = 
{
	"ReadObjectGraph", (methodPointerType)&m10173, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t1003_t2631, t1948_m10173_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 4, false, false, 4079, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1934_0_0_0;
extern Il2CppType t1712_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1895_1_0_2;
static ParameterInfo t1948_m10174_ParameterInfos[] = 
{
	{"elem", 0, 134222604, &EmptyCustomAttributesCache, &t1934_0_0_0},
	{"reader", 1, 134222605, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"readHeaders", 2, 134222606, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"result", 3, 134222607, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"headers", 4, 134222608, &EmptyCustomAttributesCache, &t1895_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t575_t9_t186_t1003_t2631 (MethodInfo* method, void* obj, void** args);
MethodInfo m10174_MI = 
{
	"ReadObjectGraph", (methodPointerType)&m10174, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t575_t9_t186_t1003_t2631, t1948_m10174_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 5, false, false, 4080, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1934_0_0_0;
extern Il2CppType t1712_0_0_0;
static ParameterInfo t1948_m10175_ParameterInfos[] = 
{
	{"element", 0, 134222609, &EmptyCustomAttributesCache, &t1934_0_0_0},
	{"reader", 1, 134222610, &EmptyCustomAttributesCache, &t1712_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t575_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10175_MI = 
{
	"ReadNextObject", (methodPointerType)&m10175, &t1948_TI, &t124_0_0_0, RuntimeInvoker_t124_t575_t9, t1948_m10175_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4081, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
static ParameterInfo t1948_m10176_ParameterInfos[] = 
{
	{"reader", 0, 134222611, &EmptyCustomAttributesCache, &t1712_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10176_MI = 
{
	"ReadNextObject", (methodPointerType)&m10176, &t1948_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1948_m10176_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4082, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10177_MI = 
{
	"get_CurrentObject", (methodPointerType)&m10177, &t1948_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4083, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1934_0_0_0;
extern Il2CppType t1712_0_0_0;
extern Il2CppType t299_1_0_2;
extern Il2CppType t299_1_0_0;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1100_1_0_2;
extern Il2CppType t1100_1_0_0;
static ParameterInfo t1948_m10178_ParameterInfos[] = 
{
	{"element", 0, 134222612, &EmptyCustomAttributesCache, &t1934_0_0_0},
	{"reader", 1, 134222613, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"objectId", 2, 134222614, &EmptyCustomAttributesCache, &t299_1_0_2},
	{"value", 3, 134222615, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"info", 4, 134222616, &EmptyCustomAttributesCache, &t1100_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t575_t9_t2209_t1003_t2632 (MethodInfo* method, void* obj, void** args);
MethodInfo m10178_MI = 
{
	"ReadObject", (methodPointerType)&m10178, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t575_t9_t2209_t1003_t2632, t1948_m10178_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 5, false, false, 4084, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
static ParameterInfo t1948_m10179_ParameterInfos[] = 
{
	{"reader", 0, 134222617, &EmptyCustomAttributesCache, &t1712_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10179_MI = 
{
	"ReadAssembly", (methodPointerType)&m10179, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1948_m10179_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4085, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t299_1_0_2;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1100_1_0_2;
static ParameterInfo t1948_m10180_ParameterInfos[] = 
{
	{"reader", 0, 134222618, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"isRuntimeObject", 1, 134222619, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"hasTypeInfo", 2, 134222620, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"objectId", 3, 134222621, &EmptyCustomAttributesCache, &t299_1_0_2},
	{"value", 4, 134222622, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"info", 5, 134222623, &EmptyCustomAttributesCache, &t1100_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t186_t2209_t1003_t2632 (MethodInfo* method, void* obj, void** args);
MethodInfo m10180_MI = 
{
	"ReadObjectInstance", (methodPointerType)&m10180, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t186_t2209_t1003_t2632, t1948_m10180_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 4086, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
extern Il2CppType t299_1_0_2;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1100_1_0_2;
static ParameterInfo t1948_m10181_ParameterInfos[] = 
{
	{"reader", 0, 134222624, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"objectId", 1, 134222625, &EmptyCustomAttributesCache, &t299_1_0_2},
	{"value", 2, 134222626, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"info", 3, 134222627, &EmptyCustomAttributesCache, &t1100_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2209_t1003_t2632 (MethodInfo* method, void* obj, void** args);
MethodInfo m10181_MI = 
{
	"ReadRefTypeObjectInstance", (methodPointerType)&m10181, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2209_t1003_t2632, t1948_m10181_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 4087, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
extern Il2CppType t1945_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1100_1_0_2;
static ParameterInfo t1948_m10182_ParameterInfos[] = 
{
	{"reader", 0, 134222628, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"metadata", 1, 134222629, &EmptyCustomAttributesCache, &t1945_0_0_0},
	{"objectId", 2, 134222630, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"objectInstance", 3, 134222631, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"info", 4, 134222632, &EmptyCustomAttributesCache, &t1100_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t299_t1003_t2632 (MethodInfo* method, void* obj, void** args);
MethodInfo m10182_MI = 
{
	"ReadObjectContent", (methodPointerType)&m10182, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t299_t1003_t2632, t1948_m10182_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 5, false, false, 4088, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1100_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t560_0_0_0;
extern Il2CppType t560_0_0_0;
extern Il2CppType t1095_0_0_0;
extern Il2CppType t1095_0_0_0;
static ParameterInfo t1948_m10183_ParameterInfos[] = 
{
	{"objectId", 0, 134222633, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"objectInstance", 1, 134222634, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"info", 2, 134222635, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"parentObjectId", 3, 134222636, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"parentObjectMemeber", 4, 134222637, &EmptyCustomAttributesCache, &t560_0_0_0},
	{"indices", 5, 134222638, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299_t9_t9_t299_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10183_MI = 
{
	"RegisterObject", (methodPointerType)&m10183, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t299_t9_t9_t299_t9_t9, t1948_m10183_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 4089, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
extern Il2CppType t299_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1948_m10184_ParameterInfos[] = 
{
	{"reader", 0, 134222639, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"objectId", 1, 134222640, &EmptyCustomAttributesCache, &t299_1_0_2},
	{"value", 2, 134222641, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2209_t1003 (MethodInfo* method, void* obj, void** args);
MethodInfo m10184_MI = 
{
	"ReadStringIntance", (methodPointerType)&m10184, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2209_t1003, t1948_m10184_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4090, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
extern Il2CppType t299_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1948_m10185_ParameterInfos[] = 
{
	{"reader", 0, 134222642, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"objectId", 1, 134222643, &EmptyCustomAttributesCache, &t299_1_0_2},
	{"val", 2, 134222644, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2209_t1003 (MethodInfo* method, void* obj, void** args);
MethodInfo m10185_MI = 
{
	"ReadGenericArray", (methodPointerType)&m10185, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2209_t1003, t1948_m10185_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4091, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
static ParameterInfo t1948_m10186_ParameterInfos[] = 
{
	{"reader", 0, 134222645, &EmptyCustomAttributesCache, &t1712_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10186_MI = 
{
	"ReadBoxedPrimitiveTypeValue", (methodPointerType)&m10186, &t1948_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1948_m10186_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4092, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
extern Il2CppType t299_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1948_m10187_ParameterInfos[] = 
{
	{"reader", 0, 134222646, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"objectId", 1, 134222647, &EmptyCustomAttributesCache, &t299_1_0_2},
	{"val", 2, 134222648, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2209_t1003 (MethodInfo* method, void* obj, void** args);
MethodInfo m10187_MI = 
{
	"ReadArrayOfPrimitiveType", (methodPointerType)&m10187, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2209_t1003, t1948_m10187_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4093, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1948_m10188_ParameterInfos[] = 
{
	{"reader", 0, 134222649, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"array", 1, 134222650, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"dataSize", 2, 134222651, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10188_MI = 
{
	"BlockRead", (methodPointerType)&m10188, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1948_m10188_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4094, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
extern Il2CppType t299_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1948_m10189_ParameterInfos[] = 
{
	{"reader", 0, 134222652, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"objectId", 1, 134222653, &EmptyCustomAttributesCache, &t299_1_0_2},
	{"array", 2, 134222654, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2209_t1003 (MethodInfo* method, void* obj, void** args);
MethodInfo m10189_MI = 
{
	"ReadArrayOfObject", (methodPointerType)&m10189, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2209_t1003, t1948_m10189_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4095, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
extern Il2CppType t299_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1948_m10190_ParameterInfos[] = 
{
	{"reader", 0, 134222655, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"objectId", 1, 134222656, &EmptyCustomAttributesCache, &t299_1_0_2},
	{"array", 2, 134222657, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2209_t1003 (MethodInfo* method, void* obj, void** args);
MethodInfo m10190_MI = 
{
	"ReadArrayOfString", (methodPointerType)&m10190, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2209_t1003, t1948_m10190_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4096, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t299_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1948_m10191_ParameterInfos[] = 
{
	{"reader", 0, 134222658, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"elementType", 1, 134222659, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"objectId", 2, 134222660, &EmptyCustomAttributesCache, &t299_1_0_2},
	{"val", 3, 134222661, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t2209_t1003 (MethodInfo* method, void* obj, void** args);
MethodInfo m10191_MI = 
{
	"ReadSimpleArray", (methodPointerType)&m10191, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t2209_t1003, t1948_m10191_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 4097, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1948_m10192_ParameterInfos[] = 
{
	{"reader", 0, 134222662, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"isRuntimeObject", 1, 134222663, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"hasTypeInfo", 2, 134222664, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1945_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10192_MI = 
{
	"ReadTypeMetadata", (methodPointerType)&m10192, &t1948_TI, &t1945_0_0_0, RuntimeInvoker_t9_t9_t186_t186, t1948_m10192_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4098, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t1100_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t560_0_0_0;
extern Il2CppType t1095_0_0_0;
static ParameterInfo t1948_m10193_ParameterInfos[] = 
{
	{"reader", 0, 134222665, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"parentObject", 1, 134222666, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"parentObjectId", 2, 134222667, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"info", 3, 134222668, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"valueType", 4, 134222669, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"fieldName", 5, 134222670, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"memberInfo", 6, 134222671, &EmptyCustomAttributesCache, &t560_0_0_0},
	{"indices", 7, 134222672, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t299_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10193_MI = 
{
	"ReadValue", (methodPointerType)&m10193, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t299_t9_t9_t9_t9_t9, t1948_m10193_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 8, false, false, 4099, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t560_0_0_0;
extern Il2CppType t1100_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t1095_0_0_0;
static ParameterInfo t1948_m10194_ParameterInfos[] = 
{
	{"parentObject", 0, 134222673, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"fieldName", 1, 134222674, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"memberInfo", 2, 134222675, &EmptyCustomAttributesCache, &t560_0_0_0},
	{"info", 3, 134222676, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"value", 4, 134222677, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"valueType", 5, 134222678, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"indices", 6, 134222679, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10194_MI = 
{
	"SetObjectValue", (methodPointerType)&m10194, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9_t9_t9_t9_t9, t1948_m10194_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4100, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1100_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t560_0_0_0;
extern Il2CppType t1095_0_0_0;
static ParameterInfo t1948_m10195_ParameterInfos[] = 
{
	{"parentObjectId", 0, 134222680, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"childObjectId", 1, 134222681, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"parentObject", 2, 134222682, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"info", 3, 134222683, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"fieldName", 4, 134222684, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"memberInfo", 5, 134222685, &EmptyCustomAttributesCache, &t560_0_0_0},
	{"indices", 6, 134222686, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299_t299_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10195_MI = 
{
	"RecordFixup", (methodPointerType)&m10195, &t1948_TI, &t122_0_0_0, RuntimeInvoker_t122_t299_t299_t9_t9_t9_t9_t9, t1948_m10195_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4101, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1948_m10196_ParameterInfos[] = 
{
	{"assemblyId", 0, 134222687, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"className", 1, 134222688, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t299_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10196_MI = 
{
	"GetDeserializationType", (methodPointerType)&m10196, &t1948_TI, &t126_0_0_0, RuntimeInvoker_t9_t299_t9, t1948_m10196_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4102, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
extern Il2CppType t1935_0_0_0;
static ParameterInfo t1948_m10197_ParameterInfos[] = 
{
	{"reader", 0, 134222689, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"code", 1, 134222690, &EmptyCustomAttributesCache, &t1935_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9_t575 (MethodInfo* method, void* obj, void** args);
MethodInfo m10197_MI = 
{
	"ReadType", (methodPointerType)&m10197, &t1948_TI, &t126_0_0_0, RuntimeInvoker_t9_t9_t575, t1948_m10197_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4103, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1712_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1948_m10198_ParameterInfos[] = 
{
	{"reader", 0, 134222691, &EmptyCustomAttributesCache, &t1712_0_0_0},
	{"type", 1, 134222692, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10198_MI = 
{
	"ReadPrimitiveTypeValue", (methodPointerType)&m10198, &t1948_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1948_m10198_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4104, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1948_MIs[] =
{
	&m10172_MI,
	&m10173_MI,
	&m10174_MI,
	&m10175_MI,
	&m10176_MI,
	&m10177_MI,
	&m10178_MI,
	&m10179_MI,
	&m10180_MI,
	&m10181_MI,
	&m10182_MI,
	&m10183_MI,
	&m10184_MI,
	&m10185_MI,
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
	NULL
};
extern Il2CppType t1904_0_0_1;
FieldInfo t1948_f0_FieldInfo = 
{
	"_surrogateSelector", &t1904_0_0_1, &t1948_TI, offsetof(t1948, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1101_0_0_1;
FieldInfo t1948_f1_FieldInfo = 
{
	"_context", &t1101_0_0_1, &t1948_TI, offsetof(t1948, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1938_0_0_1;
FieldInfo t1948_f2_FieldInfo = 
{
	"_binder", &t1938_0_0_1, &t1948_TI, offsetof(t1948, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1941_0_0_1;
FieldInfo t1948_f3_FieldInfo = 
{
	"_filterLevel", &t1941_0_0_1, &t1948_TI, offsetof(t1948, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1949_0_0_1;
FieldInfo t1948_f4_FieldInfo = 
{
	"_manager", &t1949_0_0_1, &t1948_TI, offsetof(t1948, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_1;
FieldInfo t1948_f5_FieldInfo = 
{
	"_registeredAssemblies", &t1158_0_0_1, &t1948_TI, offsetof(t1948, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_1;
FieldInfo t1948_f6_FieldInfo = 
{
	"_typeMetadataCache", &t1158_0_0_1, &t1948_TI, offsetof(t1948, f6), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t1948_f7_FieldInfo = 
{
	"_lastObject", &t9_0_0_1, &t1948_TI, offsetof(t1948, f7), &EmptyCustomAttributesCache};
extern Il2CppType t299_0_0_1;
FieldInfo t1948_f8_FieldInfo = 
{
	"_lastObjectID", &t299_0_0_1, &t1948_TI, offsetof(t1948, f8), &EmptyCustomAttributesCache};
extern Il2CppType t299_0_0_1;
FieldInfo t1948_f9_FieldInfo = 
{
	"_rootObjectID", &t299_0_0_1, &t1948_TI, offsetof(t1948, f9), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t1948_f10_FieldInfo = 
{
	"arrayBuffer", &t730_0_0_1, &t1948_TI, offsetof(t1948, f10), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1948_f11_FieldInfo = 
{
	"ArrayBufferLength", &t125_0_0_1, &t1948_TI, offsetof(t1948, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1948_FIs[] =
{
	&t1948_f0_FieldInfo,
	&t1948_f1_FieldInfo,
	&t1948_f2_FieldInfo,
	&t1948_f3_FieldInfo,
	&t1948_f4_FieldInfo,
	&t1948_f5_FieldInfo,
	&t1948_f6_FieldInfo,
	&t1948_f7_FieldInfo,
	&t1948_f8_FieldInfo,
	&t1948_f9_FieldInfo,
	&t1948_f10_FieldInfo,
	&t1948_f11_FieldInfo,
	NULL
};
extern MethodInfo m10177_MI;
static PropertyInfo t1948____CurrentObject_PropertyInfo = 
{
	&t1948_TI, "CurrentObject", &m10177_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1948_PIs[] =
{
	&t1948____CurrentObject_PropertyInfo,
	NULL
};
static const Il2CppType* t1948_TI__nestedTypes[2] =
{
	&t1945_0_0_0,
	&t1947_0_0_0,
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
	&g_mscorlib_dll_Image, NULL, "ObjectReader", "System.Runtime.Serialization.Formatters.Binary", t1948_MIs, t1948_PIs, t1948_FIs, NULL, &t1948_TI, NULL, &EmptyCustomAttributesCache, &t1948_0_0_0, &t1948_1_0_0, &t1948_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1948), sizeof (t1948), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 27, 1, 12, 0, 2, 4, 0, 0};
#include "t1950.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.TypeMetadata
extern TypeInfo t1950_TI;
#include "t1950MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10199_MI = 
{
	".ctor", (methodPointerType)&m10199, &t1950_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4107, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1951_0_0_0;
extern Il2CppType t1951_0_0_0;
extern Il2CppType t1714_0_0_0;
static ParameterInfo t1950_m12080_ParameterInfos[] = 
{
	{"ow", 0, 134222694, &EmptyCustomAttributesCache, &t1951_0_0_0},
	{"writer", 1, 134222695, &EmptyCustomAttributesCache, &t1714_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12080_MI = 
{
	"WriteAssemblies", NULL, &t1950_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1950_m12080_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 2, false, false, 4108, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1951_0_0_0;
extern Il2CppType t1714_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1950_m12081_ParameterInfos[] = 
{
	{"ow", 0, 134222696, &EmptyCustomAttributesCache, &t1951_0_0_0},
	{"writer", 1, 134222697, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"writeTypes", 2, 134222698, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m12081_MI = 
{
	"WriteTypeData", NULL, &t1950_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1950_m12081_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 3, false, false, 4109, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1951_0_0_0;
extern Il2CppType t1714_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1950_m12078_ParameterInfos[] = 
{
	{"ow", 0, 134222699, &EmptyCustomAttributesCache, &t1951_0_0_0},
	{"writer", 1, 134222700, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"data", 2, 134222701, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12078_MI = 
{
	"WriteObjectData", NULL, &t1950_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1950_m12078_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 3, false, false, 4110, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1950_0_0_0;
extern Il2CppType t1950_0_0_0;
static ParameterInfo t1950_m10200_ParameterInfos[] = 
{
	{"other", 0, 134222702, &EmptyCustomAttributesCache, &t1950_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10200_MI = 
{
	"IsCompatible", (methodPointerType)&m10200, &t1950_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1950_m10200_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 1, false, false, 4111, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m12079_MI = 
{
	"get_RequiresTypes", NULL, &t1950_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 8, 0, false, false, 4112, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1950_MIs[] =
{
	&m10199_MI,
	&m12080_MI,
	&m12081_MI,
	&m12078_MI,
	&m10200_MI,
	&m12079_MI,
	NULL
};
extern Il2CppType t2_0_0_6;
FieldInfo t1950_f0_FieldInfo = 
{
	"TypeAssemblyName", &t2_0_0_6, &t1950_TI, offsetof(t1950, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1950_f1_FieldInfo = 
{
	"InstanceTypeName", &t2_0_0_6, &t1950_TI, offsetof(t1950, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1950_FIs[] =
{
	&t1950_f0_FieldInfo,
	&t1950_f1_FieldInfo,
	NULL
};
extern MethodInfo m12079_MI;
static PropertyInfo t1950____RequiresTypes_PropertyInfo = 
{
	&t1950_TI, "RequiresTypes", &m12079_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1950_PIs[] =
{
	&t1950____RequiresTypes_PropertyInfo,
	NULL
};
extern MethodInfo m10200_MI;
static Il2CppMethodReference t1950_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
	&m10200_MI,
	NULL,
};
static bool t1950_VTIGM[] =
{
	false,
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
extern Il2CppType t1950_1_0_0;
struct t1950;
const Il2CppTypeDefinitionMetadata t1950_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1950_VT, t1950_VTIGM, NULL};
TypeInfo t1950_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeMetadata", "System.Runtime.Serialization.Formatters.Binary", t1950_MIs, t1950_PIs, t1950_FIs, NULL, &t1950_TI, NULL, &EmptyCustomAttributesCache, &t1950_0_0_0, &t1950_1_0_0, &t1950_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1950), sizeof (t1950), 0, -1, 0, 0, -1, 1048704, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 2, 0, 0, 9, 0, 0};
#include "t1952.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ClrTypeMetadata
extern TypeInfo t1952_TI;
#include "t1952MD.h"
extern Il2CppType t126_0_0_0;
static ParameterInfo t1952_m10201_ParameterInfos[] = 
{
	{"instanceType", 0, 134222703, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10201_MI = 
{
	".ctor", (methodPointerType)&m10201, &t1952_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1952_m10201_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4113, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10202_MI = 
{
	"get_RequiresTypes", (methodPointerType)&m10202, &t1952_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 4114, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1952_MIs[] =
{
	&m10201_MI,
	&m10202_MI,
	NULL
};
extern Il2CppType t126_0_0_6;
FieldInfo t1952_f2_FieldInfo = 
{
	"InstanceType", &t126_0_0_6, &t1952_TI, offsetof(t1952, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1952_FIs[] =
{
	&t1952_f2_FieldInfo,
	NULL
};
extern MethodInfo m10202_MI;
static PropertyInfo t1952____RequiresTypes_PropertyInfo = 
{
	&t1952_TI, "RequiresTypes", &m10202_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1952_PIs[] =
{
	&t1952____RequiresTypes_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1952_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
	&m10200_MI,
	&m10202_MI,
};
static bool t1952_VTIGM[] =
{
	false,
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
extern Il2CppType t1952_0_0_0;
extern Il2CppType t1952_1_0_0;
struct t1952;
const Il2CppTypeDefinitionMetadata t1952_DM = 
{
	NULL, NULL, NULL, NULL, &t1950_0_0_0, t1952_VT, t1952_VTIGM, NULL};
TypeInfo t1952_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ClrTypeMetadata", "System.Runtime.Serialization.Formatters.Binary", t1952_MIs, t1952_PIs, t1952_FIs, NULL, &t1952_TI, NULL, &EmptyCustomAttributesCache, &t1952_0_0_0, &t1952_1_0_0, &t1952_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1952), sizeof (t1952), 0, -1, 0, 0, -1, 1048704, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 1, 0, 0, 9, 0, 0};
#include "t1953.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
extern TypeInfo t1953_TI;
#include "t1953MD.h"
extern Il2CppType t126_0_0_0;
extern Il2CppType t1100_0_0_0;
static ParameterInfo t1953_m10203_ParameterInfos[] = 
{
	{"itype", 0, 134222704, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"info", 1, 134222705, &EmptyCustomAttributesCache, &t1100_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10203_MI = 
{
	".ctor", (methodPointerType)&m10203, &t1953_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1953_m10203_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4115, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1950_0_0_0;
static ParameterInfo t1953_m10204_ParameterInfos[] = 
{
	{"other", 0, 134222706, &EmptyCustomAttributesCache, &t1950_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10204_MI = 
{
	"IsCompatible", (methodPointerType)&m10204, &t1953_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1953_m10204_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 1, false, false, 4116, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1951_0_0_0;
extern Il2CppType t1714_0_0_0;
static ParameterInfo t1953_m10205_ParameterInfos[] = 
{
	{"ow", 0, 134222707, &EmptyCustomAttributesCache, &t1951_0_0_0},
	{"writer", 1, 134222708, &EmptyCustomAttributesCache, &t1714_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10205_MI = 
{
	"WriteAssemblies", (methodPointerType)&m10205, &t1953_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1953_m10205_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 4117, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1951_0_0_0;
extern Il2CppType t1714_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1953_m10206_ParameterInfos[] = 
{
	{"ow", 0, 134222709, &EmptyCustomAttributesCache, &t1951_0_0_0},
	{"writer", 1, 134222710, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"writeTypes", 2, 134222711, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10206_MI = 
{
	"WriteTypeData", (methodPointerType)&m10206, &t1953_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1953_m10206_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 3, false, false, 4118, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1951_0_0_0;
extern Il2CppType t1714_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1953_m10207_ParameterInfos[] = 
{
	{"ow", 0, 134222712, &EmptyCustomAttributesCache, &t1951_0_0_0},
	{"writer", 1, 134222713, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"data", 2, 134222714, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10207_MI = 
{
	"WriteObjectData", (methodPointerType)&m10207, &t1953_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1953_m10207_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 3, false, false, 4119, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10208_MI = 
{
	"get_RequiresTypes", (methodPointerType)&m10208, &t1953_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 4120, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1953_MIs[] =
{
	&m10203_MI,
	&m10204_MI,
	&m10205_MI,
	&m10206_MI,
	&m10207_MI,
	&m10208_MI,
	NULL
};
extern Il2CppType t152_0_0_1;
FieldInfo t1953_f2_FieldInfo = 
{
	"types", &t152_0_0_1, &t1953_TI, offsetof(t1953, f2), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1953_f3_FieldInfo = 
{
	"names", &t221_0_0_1, &t1953_TI, offsetof(t1953, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1953_FIs[] =
{
	&t1953_f2_FieldInfo,
	&t1953_f3_FieldInfo,
	NULL
};
extern MethodInfo m10208_MI;
static PropertyInfo t1953____RequiresTypes_PropertyInfo = 
{
	&t1953_TI, "RequiresTypes", &m10208_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1953_PIs[] =
{
	&t1953____RequiresTypes_PropertyInfo,
	NULL
};
extern MethodInfo m10205_MI;
extern MethodInfo m10206_MI;
extern MethodInfo m10207_MI;
extern MethodInfo m10204_MI;
static Il2CppMethodReference t1953_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10205_MI,
	&m10206_MI,
	&m10207_MI,
	&m10204_MI,
	&m10208_MI,
};
static bool t1953_VTIGM[] =
{
	false,
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
extern Il2CppType t1953_0_0_0;
extern Il2CppType t1953_1_0_0;
struct t1953;
const Il2CppTypeDefinitionMetadata t1953_DM = 
{
	NULL, NULL, NULL, NULL, &t1950_0_0_0, t1953_VT, t1953_VTIGM, NULL};
TypeInfo t1953_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializableTypeMetadata", "System.Runtime.Serialization.Formatters.Binary", t1953_MIs, t1953_PIs, t1953_FIs, NULL, &t1953_TI, NULL, &EmptyCustomAttributesCache, &t1953_0_0_0, &t1953_1_0_0, &t1953_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1953), sizeof (t1953), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 2, 0, 0, 9, 0, 0};
#include "t1954.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
extern TypeInfo t1954_TI;
#include "t1954MD.h"
extern Il2CppType t126_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1954_m10209_ParameterInfos[] = 
{
	{"type", 0, 134222715, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"context", 1, 134222716, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10209_MI = 
{
	".ctor", (methodPointerType)&m10209, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1954_m10209_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4121, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1951_0_0_0;
extern Il2CppType t1714_0_0_0;
static ParameterInfo t1954_m10210_ParameterInfos[] = 
{
	{"ow", 0, 134222717, &EmptyCustomAttributesCache, &t1951_0_0_0},
	{"writer", 1, 134222718, &EmptyCustomAttributesCache, &t1714_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10210_MI = 
{
	"WriteAssemblies", (methodPointerType)&m10210, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1954_m10210_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 4122, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1951_0_0_0;
extern Il2CppType t1714_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1954_m10211_ParameterInfos[] = 
{
	{"ow", 0, 134222719, &EmptyCustomAttributesCache, &t1951_0_0_0},
	{"writer", 1, 134222720, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"writeTypes", 2, 134222721, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10211_MI = 
{
	"WriteTypeData", (methodPointerType)&m10211, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1954_m10211_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 3, false, false, 4123, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1951_0_0_0;
extern Il2CppType t1714_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1954_m10212_ParameterInfos[] = 
{
	{"ow", 0, 134222722, &EmptyCustomAttributesCache, &t1951_0_0_0},
	{"writer", 1, 134222723, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"data", 2, 134222724, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10212_MI = 
{
	"WriteObjectData", (methodPointerType)&m10212, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1954_m10212_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 3, false, false, 4124, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1954_MIs[] =
{
	&m10209_MI,
	&m10210_MI,
	&m10211_MI,
	&m10212_MI,
	NULL
};
extern Il2CppType t1946_0_0_1;
FieldInfo t1954_f3_FieldInfo = 
{
	"members", &t1946_0_0_1, &t1954_TI, offsetof(t1954, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1954_FIs[] =
{
	&t1954_f3_FieldInfo,
	NULL
};
extern MethodInfo m10210_MI;
extern MethodInfo m10211_MI;
extern MethodInfo m10212_MI;
static Il2CppMethodReference t1954_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10210_MI,
	&m10211_MI,
	&m10212_MI,
	&m10200_MI,
	&m10202_MI,
};
static bool t1954_VTIGM[] =
{
	false,
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
extern Il2CppType t1954_0_0_0;
extern Il2CppType t1954_1_0_0;
struct t1954;
const Il2CppTypeDefinitionMetadata t1954_DM = 
{
	NULL, NULL, NULL, NULL, &t1952_0_0_0, t1954_VT, t1954_VTIGM, NULL};
TypeInfo t1954_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MemberTypeMetadata", "System.Runtime.Serialization.Formatters.Binary", t1954_MIs, NULL, t1954_FIs, NULL, &t1954_TI, NULL, &EmptyCustomAttributesCache, &t1954_0_0_0, &t1954_1_0_0, &t1954_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1954), sizeof (t1954), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 9, 0, 0};
#include "t1955.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference
extern TypeInfo t1955_TI;
#include "t1955MD.h"
extern Il2CppType t1950_0_0_0;
extern Il2CppType t299_0_0_0;
static ParameterInfo t1955_m10213_ParameterInfos[] = 
{
	{"metadata", 0, 134222791, &EmptyCustomAttributesCache, &t1950_0_0_0},
	{"id", 1, 134222792, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10213_MI = 
{
	".ctor", (methodPointerType)&m10213, &t1955_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t299, t1955_m10213_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4155, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1955_MIs[] =
{
	&m10213_MI,
	NULL
};
extern Il2CppType t1950_0_0_6;
FieldInfo t1955_f0_FieldInfo = 
{
	"Metadata", &t1950_0_0_6, &t1955_TI, offsetof(t1955, f0), &EmptyCustomAttributesCache};
extern Il2CppType t299_0_0_6;
FieldInfo t1955_f1_FieldInfo = 
{
	"ObjectID", &t299_0_0_6, &t1955_TI, offsetof(t1955, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1955_FIs[] =
{
	&t1955_f0_FieldInfo,
	&t1955_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1955_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1955_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1955_0_0_0;
extern Il2CppType t1955_1_0_0;
extern TypeInfo t1951_TI;
struct t1955;
const Il2CppTypeDefinitionMetadata t1955_DM = 
{
	&t1951_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t1955_VT, t1955_VTIGM, NULL};
TypeInfo t1955_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MetadataReference", "", t1955_MIs, NULL, t1955_FIs, NULL, &t1955_TI, NULL, &EmptyCustomAttributesCache, &t1955_0_0_0, &t1955_1_0_0, &t1955_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1955), sizeof (t1955), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t1951.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectWriter
#include "t1951MD.h"
extern Il2CppType t1904_0_0_0;
extern Il2CppType t1101_0_0_0;
extern Il2CppType t1939_0_0_0;
extern Il2CppType t1940_0_0_0;
static ParameterInfo t1951_m10214_ParameterInfos[] = 
{
	{"surrogateSelector", 0, 134222725, &EmptyCustomAttributesCache, &t1904_0_0_0},
	{"context", 1, 134222726, &EmptyCustomAttributesCache, &t1101_0_0_0},
	{"assemblyFormat", 2, 134222727, &EmptyCustomAttributesCache, &t1939_0_0_0},
	{"typeFormat", 3, 134222728, &EmptyCustomAttributesCache, &t1940_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10214_MI = 
{
	".ctor", (methodPointerType)&m10214, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101_t125_t125, t1951_m10214_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 4125, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10215_MI = 
{
	".cctor", (methodPointerType)&m10215, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4126, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1895_0_0_0;
static ParameterInfo t1951_m10216_ParameterInfos[] = 
{
	{"writer", 0, 134222729, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"obj", 1, 134222730, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"headers", 2, 134222731, &EmptyCustomAttributesCache, &t1895_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10216_MI = 
{
	"WriteObjectGraph", (methodPointerType)&m10216, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1951_m10216_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4127, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1951_m10217_ParameterInfos[] = 
{
	{"obj", 0, 134222732, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10217_MI = 
{
	"QueueObject", (methodPointerType)&m10217, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1951_m10217_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4128, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
static ParameterInfo t1951_m10218_ParameterInfos[] = 
{
	{"writer", 0, 134222733, &EmptyCustomAttributesCache, &t1714_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10218_MI = 
{
	"WriteQueuedObjects", (methodPointerType)&m10218, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1951_m10218_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4129, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1951_m10219_ParameterInfos[] = 
{
	{"writer", 0, 134222734, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"obj", 1, 134222735, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"isValueObject", 2, 134222736, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10219_MI = 
{
	"WriteObjectInstance", (methodPointerType)&m10219, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1951_m10219_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4130, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
static ParameterInfo t1951_m10220_ParameterInfos[] = 
{
	{"writer", 0, 134222737, &EmptyCustomAttributesCache, &t1714_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10220_MI = 
{
	"WriteSerializationEnd", (methodPointerType)&m10220, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1951_m10220_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4131, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1951_m10221_ParameterInfos[] = 
{
	{"writer", 0, 134222738, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"id", 1, 134222739, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"obj", 2, 134222740, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t299_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10221_MI = 
{
	"WriteObject", (methodPointerType)&m10221, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t299_t9, t1951_m10221_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4132, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1950_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1951_m10222_ParameterInfos[] = 
{
	{"obj", 0, 134222741, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"metadata", 1, 134222742, &EmptyCustomAttributesCache, &t1950_1_0_2},
	{"data", 2, 134222743, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2633_t1003 (MethodInfo* method, void* obj, void** args);
MethodInfo m10222_MI = 
{
	"GetObjectData", (methodPointerType)&m10222, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2633_t1003, t1951_m10222_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4133, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1951_m10223_ParameterInfos[] = 
{
	{"type", 0, 134222744, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1950_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10223_MI = 
{
	"CreateMemberTypeMetadata", (methodPointerType)&m10223, &t1951_TI, &t1950_0_0_0, RuntimeInvoker_t9_t9, t1951_m10223_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4134, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t121_0_0_0;
static ParameterInfo t1951_m10224_ParameterInfos[] = 
{
	{"writer", 0, 134222745, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"id", 1, 134222746, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"array", 2, 134222747, &EmptyCustomAttributesCache, &t121_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t299_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10224_MI = 
{
	"WriteArray", (methodPointerType)&m10224, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t299_t9, t1951_m10224_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4135, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t121_0_0_0;
static ParameterInfo t1951_m10225_ParameterInfos[] = 
{
	{"writer", 0, 134222748, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"id", 1, 134222749, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"array", 2, 134222750, &EmptyCustomAttributesCache, &t121_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t299_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10225_MI = 
{
	"WriteGenericArray", (methodPointerType)&m10225, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t299_t9, t1951_m10225_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4136, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t121_0_0_0;
static ParameterInfo t1951_m10226_ParameterInfos[] = 
{
	{"writer", 0, 134222751, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"id", 1, 134222752, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"array", 2, 134222753, &EmptyCustomAttributesCache, &t121_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t299_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10226_MI = 
{
	"WriteObjectArray", (methodPointerType)&m10226, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t299_t9, t1951_m10226_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4137, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t121_0_0_0;
static ParameterInfo t1951_m10227_ParameterInfos[] = 
{
	{"writer", 0, 134222754, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"id", 1, 134222755, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"array", 2, 134222756, &EmptyCustomAttributesCache, &t121_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t299_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10227_MI = 
{
	"WriteStringArray", (methodPointerType)&m10227, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t299_t9, t1951_m10227_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4138, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t121_0_0_0;
static ParameterInfo t1951_m10228_ParameterInfos[] = 
{
	{"writer", 0, 134222757, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"id", 1, 134222758, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"array", 2, 134222759, &EmptyCustomAttributesCache, &t121_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t299_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10228_MI = 
{
	"WritePrimitiveTypeArray", (methodPointerType)&m10228, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t299_t9, t1951_m10228_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4139, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1951_m10229_ParameterInfos[] = 
{
	{"writer", 0, 134222760, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"array", 1, 134222761, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"dataSize", 2, 134222762, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10229_MI = 
{
	"BlockWrite", (methodPointerType)&m10229, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1951_m10229_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4140, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1951_m10230_ParameterInfos[] = 
{
	{"writer", 0, 134222763, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"array", 1, 134222764, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"elementType", 2, 134222765, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10230_MI = 
{
	"WriteSingleDimensionArrayElements", (methodPointerType)&m10230, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1951_m10230_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4141, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1951_m10231_ParameterInfos[] = 
{
	{"writer", 0, 134222766, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"numNulls", 1, 134222767, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10231_MI = 
{
	"WriteNullFiller", (methodPointerType)&m10231, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1951_m10231_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4142, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t299_0_0_0;
static ParameterInfo t1951_m10232_ParameterInfos[] = 
{
	{"writer", 0, 134222768, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"id", 1, 134222769, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10232_MI = 
{
	"WriteObjectReference", (methodPointerType)&m10232, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t299, t1951_m10232_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4143, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1951_m10233_ParameterInfos[] = 
{
	{"writer", 0, 134222770, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"valueType", 1, 134222771, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"val", 2, 134222772, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10233_MI = 
{
	"WriteValue", (methodPointerType)&m10233, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1951_m10233_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4144, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1951_m10234_ParameterInfos[] = 
{
	{"writer", 0, 134222773, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"id", 1, 134222774, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"str", 2, 134222775, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t299_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10234_MI = 
{
	"WriteString", (methodPointerType)&m10234, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t299_t9, t1951_m10234_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4145, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t1345_0_0_0;
extern Il2CppType t1345_0_0_0;
static ParameterInfo t1951_m10235_ParameterInfos[] = 
{
	{"writer", 0, 134222776, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"assembly", 1, 134222777, &EmptyCustomAttributesCache, &t1345_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10235_MI = 
{
	"WriteAssembly", (methodPointerType)&m10235, &t1951_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1951_m10235_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4146, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1951_m10236_ParameterInfos[] = 
{
	{"writer", 0, 134222778, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"assembly", 1, 134222779, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10236_MI = 
{
	"WriteAssemblyName", (methodPointerType)&m10236, &t1951_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1951_m10236_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4147, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1345_0_0_0;
static ParameterInfo t1951_m10237_ParameterInfos[] = 
{
	{"assembly", 0, 134222780, &EmptyCustomAttributesCache, &t1345_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10237_MI = 
{
	"GetAssemblyId", (methodPointerType)&m10237, &t1951_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1951_m10237_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4148, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1951_m10238_ParameterInfos[] = 
{
	{"assembly", 0, 134222781, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10238_MI = 
{
	"GetAssemblyNameId", (methodPointerType)&m10238, &t1951_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1951_m10238_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4149, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_1_0_2;
static ParameterInfo t1951_m10239_ParameterInfos[] = 
{
	{"assembly", 0, 134222782, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"firstTime", 1, 134222783, &EmptyCustomAttributesCache, &t124_1_0_2},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t635 (MethodInfo* method, void* obj, void** args);
MethodInfo m10239_MI = 
{
	"RegisterAssembly", (methodPointerType)&m10239, &t1951_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t635, t1951_m10239_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4150, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1951_m10240_ParameterInfos[] = 
{
	{"writer", 0, 134222784, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"value", 1, 134222785, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10240_MI = 
{
	"WritePrimitiveValue", (methodPointerType)&m10240, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1951_m10240_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4151, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1951_m10241_ParameterInfos[] = 
{
	{"writer", 0, 134222786, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"type", 1, 134222787, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10241_MI = 
{
	"WriteTypeCode", (methodPointerType)&m10241, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1951_m10241_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4152, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1951_m10242_ParameterInfos[] = 
{
	{"type", 0, 134222788, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1935_0_0_0;
extern void* RuntimeInvoker_t1935_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10242_MI = 
{
	"GetTypeTag", (methodPointerType)&m10242, &t1951_TI, &t1935_0_0_0, RuntimeInvoker_t1935_t9, t1951_m10242_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4153, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1714_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1951_m10243_ParameterInfos[] = 
{
	{"writer", 0, 134222789, &EmptyCustomAttributesCache, &t1714_0_0_0},
	{"type", 1, 134222790, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10243_MI = 
{
	"WriteTypeSpec", (methodPointerType)&m10243, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1951_m10243_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4154, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1951_MIs[] =
{
	&m10214_MI,
	&m10215_MI,
	&m10216_MI,
	&m10217_MI,
	&m10218_MI,
	&m10219_MI,
	&m10220_MI,
	&m10221_MI,
	&m10222_MI,
	&m10223_MI,
	&m10224_MI,
	&m10225_MI,
	&m10226_MI,
	&m10227_MI,
	&m10228_MI,
	&m10229_MI,
	&m10230_MI,
	&m10231_MI,
	&m10232_MI,
	&m10233_MI,
	&m10234_MI,
	&m10235_MI,
	&m10236_MI,
	&m10237_MI,
	&m10238_MI,
	&m10239_MI,
	&m10240_MI,
	&m10241_MI,
	&m10242_MI,
	&m10243_MI,
	NULL
};
extern Il2CppType t1956_0_0_1;
FieldInfo t1951_f0_FieldInfo = 
{
	"_idGenerator", &t1956_0_0_1, &t1951_TI, offsetof(t1951, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_1;
FieldInfo t1951_f1_FieldInfo = 
{
	"_cachedMetadata", &t1158_0_0_1, &t1951_TI, offsetof(t1951, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1686_0_0_1;
FieldInfo t1951_f2_FieldInfo = 
{
	"_pendingObjects", &t1686_0_0_1, &t1951_TI, offsetof(t1951, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_1;
FieldInfo t1951_f3_FieldInfo = 
{
	"_assemblyCache", &t1158_0_0_1, &t1951_TI, offsetof(t1951, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_17;
FieldInfo t1951_f4_FieldInfo = 
{
	"_cachedTypes", &t1158_0_0_17, &t1951_TI, offsetof(t1951_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1345_0_0_19;
FieldInfo t1951_f5_FieldInfo = 
{
	"CorlibAssembly", &t1345_0_0_19, &t1951_TI, offsetof(t1951_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_19;
FieldInfo t1951_f6_FieldInfo = 
{
	"CorlibAssemblyName", &t2_0_0_19, &t1951_TI, offsetof(t1951_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1904_0_0_1;
FieldInfo t1951_f7_FieldInfo = 
{
	"_surrogateSelector", &t1904_0_0_1, &t1951_TI, offsetof(t1951, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1101_0_0_1;
FieldInfo t1951_f8_FieldInfo = 
{
	"_context", &t1101_0_0_1, &t1951_TI, offsetof(t1951, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1939_0_0_1;
FieldInfo t1951_f9_FieldInfo = 
{
	"_assemblyFormat", &t1939_0_0_1, &t1951_TI, offsetof(t1951, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_1;
FieldInfo t1951_f10_FieldInfo = 
{
	"_typeFormat", &t1940_0_0_1, &t1951_TI, offsetof(t1951, f10), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t1951_f11_FieldInfo = 
{
	"arrayBuffer", &t730_0_0_1, &t1951_TI, offsetof(t1951, f11), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1951_f12_FieldInfo = 
{
	"ArrayBufferLength", &t125_0_0_1, &t1951_TI, offsetof(t1951, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1957_0_0_1;
FieldInfo t1951_f13_FieldInfo = 
{
	"_manager", &t1957_0_0_1, &t1951_TI, offsetof(t1951, f13), &EmptyCustomAttributesCache};
static FieldInfo* t1951_FIs[] =
{
	&t1951_f0_FieldInfo,
	&t1951_f1_FieldInfo,
	&t1951_f2_FieldInfo,
	&t1951_f3_FieldInfo,
	&t1951_f4_FieldInfo,
	&t1951_f5_FieldInfo,
	&t1951_f6_FieldInfo,
	&t1951_f7_FieldInfo,
	&t1951_f8_FieldInfo,
	&t1951_f9_FieldInfo,
	&t1951_f10_FieldInfo,
	&t1951_f11_FieldInfo,
	&t1951_f12_FieldInfo,
	&t1951_f13_FieldInfo,
	NULL
};
static const Il2CppType* t1951_TI__nestedTypes[1] =
{
	&t1955_0_0_0,
};
static Il2CppMethodReference t1951_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1951_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1951_1_0_0;
struct t1951;
const Il2CppTypeDefinitionMetadata t1951_DM = 
{
	NULL, t1951_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t1951_VT, t1951_VTIGM, NULL};
TypeInfo t1951_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectWriter", "System.Runtime.Serialization.Formatters.Binary", t1951_MIs, NULL, t1951_FIs, NULL, &t1951_TI, NULL, &EmptyCustomAttributesCache, &t1951_0_0_0, &t1951_1_0_0, &t1951_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1951), sizeof (t1951), 0, -1, sizeof(t1951_SFs), 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, true, false, 30, 0, 14, 0, 1, 4, 0, 0};
#include "t1939.h"
// Metadata Definition System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
extern TypeInfo t1939_TI;
#include "t1939MD.h"
static MethodInfo* t1939_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1939_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1939_TI, offsetof(t1939, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1939_0_0_32854;
FieldInfo t1939_f2_FieldInfo = 
{
	"Simple", &t1939_0_0_32854, &t1939_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1939_0_0_32854;
FieldInfo t1939_f3_FieldInfo = 
{
	"Full", &t1939_0_0_32854, &t1939_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1939_FIs[] =
{
	&t1939_f1_FieldInfo,
	&t1939_f2_FieldInfo,
	&t1939_f3_FieldInfo,
	NULL
};
static const int32_t t1939_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1939_f2_DefaultValue = 
{
	&t1939_f2_FieldInfo, { (char*)&t1939_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1939_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1939_f3_DefaultValue = 
{
	&t1939_f3_FieldInfo, { (char*)&t1939_f3_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1939_FDVs[] = 
{
	&t1939_f2_DefaultValue,
	&t1939_f3_DefaultValue,
	NULL
};
static Il2CppMethodReference t1939_VT[] =
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
static bool t1939_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1939_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1939_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1939__CustomAttributeCache = {
1,
NULL,
&t1939_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1939_1_0_0;
extern CustomAttributesCache t1939__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1939_DM = 
{
	NULL, NULL, NULL, t1939_IOs, &t8_0_0_0, t1939_VT, t1939_VTIGM, NULL};
TypeInfo t1939_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FormatterAssemblyStyle", "System.Runtime.Serialization.Formatters", t1939_MIs, NULL, t1939_FIs, NULL, &t125_TI, NULL, &t1939__CustomAttributeCache, &t1939_0_0_0, &t1939_1_0_0, &t1939_DM, NULL, NULL, NULL, t1939_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1939)+ sizeof (Il2CppObject), sizeof (t1939)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t1940.h"
// Metadata Definition System.Runtime.Serialization.Formatters.FormatterTypeStyle
extern TypeInfo t1940_TI;
#include "t1940MD.h"
static MethodInfo* t1940_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1940_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1940_TI, offsetof(t1940, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f2_FieldInfo = 
{
	"TypesWhenNeeded", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f3_FieldInfo = 
{
	"TypesAlways", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f4_FieldInfo = 
{
	"XsdString", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1940_FIs[] =
{
	&t1940_f1_FieldInfo,
	&t1940_f2_FieldInfo,
	&t1940_f3_FieldInfo,
	&t1940_f4_FieldInfo,
	NULL
};
static const int32_t t1940_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1940_f2_DefaultValue = 
{
	&t1940_f2_FieldInfo, { (char*)&t1940_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1940_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1940_f3_DefaultValue = 
{
	&t1940_f3_FieldInfo, { (char*)&t1940_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1940_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1940_f4_DefaultValue = 
{
	&t1940_f4_FieldInfo, { (char*)&t1940_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1940_FDVs[] = 
{
	&t1940_f2_DefaultValue,
	&t1940_f3_DefaultValue,
	&t1940_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t1940_VT[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1940_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1940_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1940__CustomAttributeCache = {
1,
NULL,
&t1940_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1940_1_0_0;
extern CustomAttributesCache t1940__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1940_DM = 
{
	NULL, NULL, NULL, t1940_IOs, &t8_0_0_0, t1940_VT, t1940_VTIGM, NULL};
TypeInfo t1940_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FormatterTypeStyle", "System.Runtime.Serialization.Formatters", t1940_MIs, NULL, t1940_FIs, NULL, &t125_TI, NULL, &t1940__CustomAttributeCache, &t1940_0_0_0, &t1940_1_0_0, &t1940_DM, NULL, NULL, NULL, t1940_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1940)+ sizeof (Il2CppObject), sizeof (t1940)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1941.h"
// Metadata Definition System.Runtime.Serialization.Formatters.TypeFilterLevel
extern TypeInfo t1941_TI;
#include "t1941MD.h"
static MethodInfo* t1941_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1941_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1941_TI, offsetof(t1941, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1941_0_0_32854;
FieldInfo t1941_f2_FieldInfo = 
{
	"Low", &t1941_0_0_32854, &t1941_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1941_0_0_32854;
FieldInfo t1941_f3_FieldInfo = 
{
	"Full", &t1941_0_0_32854, &t1941_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1941_FIs[] =
{
	&t1941_f1_FieldInfo,
	&t1941_f2_FieldInfo,
	&t1941_f3_FieldInfo,
	NULL
};
static const int32_t t1941_f2_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1941_f2_DefaultValue = 
{
	&t1941_f2_FieldInfo, { (char*)&t1941_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1941_f3_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1941_f3_DefaultValue = 
{
	&t1941_f3_FieldInfo, { (char*)&t1941_f3_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1941_FDVs[] = 
{
	&t1941_f2_DefaultValue,
	&t1941_f3_DefaultValue,
	NULL
};
static Il2CppMethodReference t1941_VT[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1941_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1941_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1941__CustomAttributeCache = {
1,
NULL,
&t1941_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1941_0_0_0;
extern Il2CppType t1941_1_0_0;
extern CustomAttributesCache t1941__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1941_DM = 
{
	NULL, NULL, NULL, t1941_IOs, &t8_0_0_0, t1941_VT, t1941_VTIGM, NULL};
TypeInfo t1941_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeFilterLevel", "System.Runtime.Serialization.Formatters", t1941_MIs, NULL, t1941_FIs, NULL, &t125_TI, NULL, &t1941__CustomAttributeCache, &t1941_0_0_0, &t1941_1_0_0, &t1941_DM, NULL, NULL, NULL, t1941_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1941)+ sizeof (Il2CppObject), sizeof (t1941)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 257, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t1958.h"
// Metadata Definition System.Runtime.Serialization.FormatterConverter
extern TypeInfo t1958_TI;
#include "t1958MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10244_MI = 
{
	".ctor", (methodPointerType)&m10244, &t1958_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4156, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1958_m10245_ParameterInfos[] = 
{
	{"value", 0, 134222793, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"type", 1, 134222794, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10245_MI = 
{
	"Convert", (methodPointerType)&m10245, &t1958_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1958_m10245_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 2, false, false, 4157, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1958_m10246_ParameterInfos[] = 
{
	{"value", 0, 134222795, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10246_MI = 
{
	"ToBoolean", (methodPointerType)&m10246, &t1958_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1958_m10246_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 5, 1, false, false, 4158, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1958_m10247_ParameterInfos[] = 
{
	{"value", 0, 134222796, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t334_0_0_0;
extern void* RuntimeInvoker_t334_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10247_MI = 
{
	"ToInt16", (methodPointerType)&m10247, &t1958_TI, &t334_0_0_0, RuntimeInvoker_t334_t9, t1958_m10247_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 1, false, false, 4159, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1958_m10248_ParameterInfos[] = 
{
	{"value", 0, 134222797, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10248_MI = 
{
	"ToInt32", (methodPointerType)&m10248, &t1958_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1958_m10248_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 1, false, false, 4160, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1958_m10249_ParameterInfos[] = 
{
	{"value", 0, 134222798, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10249_MI = 
{
	"ToInt64", (methodPointerType)&m10249, &t1958_TI, &t299_0_0_0, RuntimeInvoker_t299_t9, t1958_m10249_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 8, 1, false, false, 4161, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1958_m10250_ParameterInfos[] = 
{
	{"value", 0, 134222799, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10250_MI = 
{
	"ToString", (methodPointerType)&m10250, &t1958_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1958_m10250_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 9, 1, false, false, 4162, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1958_MIs[] =
{
	&m10244_MI,
	&m10245_MI,
	&m10246_MI,
	&m10247_MI,
	&m10248_MI,
	&m10249_MI,
	&m10250_MI,
	NULL
};
extern MethodInfo m10245_MI;
extern MethodInfo m10246_MI;
extern MethodInfo m10247_MI;
extern MethodInfo m10248_MI;
extern MethodInfo m10249_MI;
extern MethodInfo m10250_MI;
static Il2CppMethodReference t1958_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10245_MI,
	&m10246_MI,
	&m10247_MI,
	&m10248_MI,
	&m10249_MI,
	&m10250_MI,
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
};
extern Il2CppType t1975_0_0_0;
static const Il2CppType* t1958_ITIs[] = 
{
	&t1975_0_0_0,
};
static Il2CppInterfaceOffsetPair t1958_IOs[] = 
{
	{ &t1975_0_0_0, 4},
};
void t1958_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1958__CustomAttributeCache = {
1,
NULL,
&t1958_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1958_0_0_0;
extern Il2CppType t1958_1_0_0;
struct t1958;
extern CustomAttributesCache t1958__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1958_DM = 
{
	NULL, NULL, t1958_ITIs, t1958_IOs, &t9_0_0_0, t1958_VT, t1958_VTIGM, NULL};
TypeInfo t1958_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FormatterConverter", "System.Runtime.Serialization", t1958_MIs, NULL, NULL, NULL, &t1958_TI, NULL, &t1958__CustomAttributeCache, &t1958_0_0_0, &t1958_1_0_0, &t1958_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1958), sizeof (t1958), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 7, 0, 0, 0, 0, 10, 1, 1};
#include "t1959.h"
// Metadata Definition System.Runtime.Serialization.FormatterServices
extern TypeInfo t1959_TI;
#include "t1959MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t1946_0_0_0;
extern Il2CppType t1946_0_0_0;
static ParameterInfo t1959_m10251_ParameterInfos[] = 
{
	{"obj", 0, 134222800, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"members", 1, 134222801, &EmptyCustomAttributesCache, &t1946_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10251_MI = 
{
	"GetObjectData", (methodPointerType)&m10251, &t1959_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t9, t1959_m10251_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4163, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1959_m10252_ParameterInfos[] = 
{
	{"type", 0, 134222802, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"context", 1, 134222803, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t1946_0_0_0;
extern void* RuntimeInvoker_t9_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10252_MI = 
{
	"GetSerializableMembers", (methodPointerType)&m10252, &t1959_TI, &t1946_0_0_0, RuntimeInvoker_t9_t9_t1101, t1959_m10252_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4164, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t1170_0_0_0;
extern Il2CppType t1170_0_0_0;
static ParameterInfo t1959_m10253_ParameterInfos[] = 
{
	{"reflectedType", 0, 134222804, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"type", 1, 134222805, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"fields", 2, 134222806, &EmptyCustomAttributesCache, &t1170_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10253_MI = 
{
	"GetFields", (methodPointerType)&m10253, &t1959_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1959_m10253_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4165, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1959_m10254_ParameterInfos[] = 
{
	{"type", 0, 134222807, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10254_MI = 
{
	"GetUninitializedObject", (methodPointerType)&m10254, &t1959_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1959_m10254_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4166, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1959_m10255_ParameterInfos[] = 
{
	{"type", 0, 134222808, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10255_MI = 
{
	"GetSafeUninitializedObject", (methodPointerType)&m10255, &t1959_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1959_m10255_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4167, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1959_MIs[] =
{
	&m10251_MI,
	&m10252_MI,
	&m10253_MI,
	&m10254_MI,
	&m10255_MI,
	NULL
};
static Il2CppMethodReference t1959_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1959_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1959_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1959__CustomAttributeCache = {
1,
NULL,
&t1959_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1959_0_0_0;
extern Il2CppType t1959_1_0_0;
struct t1959;
extern CustomAttributesCache t1959__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1959_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1959_VT, t1959_VTIGM, NULL};
TypeInfo t1959_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FormatterServices", "System.Runtime.Serialization", t1959_MIs, NULL, NULL, NULL, &t1959_TI, NULL, &t1959__CustomAttributeCache, &t1959_0_0_0, &t1959_1_0_0, &t1959_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1959), sizeof (t1959), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 4, 0, 0};
// Metadata Definition System.Runtime.Serialization.IDeserializationCallback
extern TypeInfo t1106_TI;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1106_m12084_ParameterInfos[] = 
{
	{"sender", 0, 134222809, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12084_MI = 
{
	"OnDeserialization", NULL, &t1106_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1106_m12084_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 4168, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1106_MIs[] =
{
	&m12084_MI,
	NULL
};
void t1106_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1106__CustomAttributeCache = {
1,
NULL,
&t1106_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1106_1_0_0;
struct t1106;
extern CustomAttributesCache t1106__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1106_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1106_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDeserializationCallback", "System.Runtime.Serialization", t1106_MIs, NULL, NULL, NULL, &t1106_TI, NULL, &t1106__CustomAttributeCache, &t1106_0_0_0, &t1106_1_0_0, &t1106_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Serialization.IFormatter
extern TypeInfo t2629_TI;
static MethodInfo* t2629_MIs[] =
{
	NULL
};
void t2629_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	&g_mscorlib_dll_Image, NULL, "IFormatter", "System.Runtime.Serialization", t2629_MIs, NULL, NULL, NULL, &t2629_TI, NULL, &t2629__CustomAttributeCache, &t2629_0_0_0, &t2629_1_0_0, &t2629_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Serialization.IFormatterConverter
extern TypeInfo t1975_TI;
extern Il2CppType t9_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1975_m12087_ParameterInfos[] = 
{
	{"value", 0, 134222810, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"type", 1, 134222811, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12087_MI = 
{
	"Convert", NULL, &t1975_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1975_m12087_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, false, 4169, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1975_m12088_ParameterInfos[] = 
{
	{"value", 0, 134222812, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12088_MI = 
{
	"ToBoolean", NULL, &t1975_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1975_m12088_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, false, 4170, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1975_m12089_ParameterInfos[] = 
{
	{"value", 0, 134222813, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t334_0_0_0;
extern void* RuntimeInvoker_t334_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12089_MI = 
{
	"ToInt16", NULL, &t1975_TI, &t334_0_0_0, RuntimeInvoker_t334_t9, t1975_m12089_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, false, 4171, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1975_m12090_ParameterInfos[] = 
{
	{"value", 0, 134222814, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12090_MI = 
{
	"ToInt32", NULL, &t1975_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1975_m12090_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 3, 1, false, false, 4172, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1975_m12091_ParameterInfos[] = 
{
	{"value", 0, 134222815, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12091_MI = 
{
	"ToInt64", NULL, &t1975_TI, &t299_0_0_0, RuntimeInvoker_t299_t9, t1975_m12091_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4173, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1975_m12092_ParameterInfos[] = 
{
	{"value", 0, 134222816, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12092_MI = 
{
	"ToString", NULL, &t1975_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1975_m12092_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 4174, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1975_MIs[] =
{
	&m12087_MI,
	&m12088_MI,
	&m12089_MI,
	&m12090_MI,
	&m12091_MI,
	&m12092_MI,
	NULL
};
extern TypeInfo t1152_TI;
#include "t1152.h"
#include "t1152MD.h"
extern MethodInfo m4801_MI;
void t1975_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1152 * tmp;
		tmp = (t1152 *)il2cpp_codegen_object_new (&t1152_TI);
		m4801(tmp, false, &m4801_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1975__CustomAttributeCache = {
2,
NULL,
&t1975_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1975_1_0_0;
struct t1975;
extern CustomAttributesCache t1975__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1975_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1975_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IFormatterConverter", "System.Runtime.Serialization", t1975_MIs, NULL, NULL, NULL, &t1975_TI, NULL, &t1975__CustomAttributeCache, &t1975_0_0_0, &t1975_1_0_0, &t1975_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Serialization.IObjectReference
extern TypeInfo t2190_TI;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t2190_m12076_ParameterInfos[] = 
{
	{"context", 0, 134222817, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m12076_MI = 
{
	"GetRealObject", NULL, &t2190_TI, &t9_0_0_0, RuntimeInvoker_t9_t1101, t2190_m12076_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 4175, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2190_MIs[] =
{
	&m12076_MI,
	NULL
};
void t2190_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2190__CustomAttributeCache = {
1,
NULL,
&t2190_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2190_1_0_0;
struct t2190;
extern CustomAttributesCache t2190__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2190_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2190_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IObjectReference", "System.Runtime.Serialization", t2190_MIs, NULL, NULL, NULL, &t2190_TI, NULL, &t2190__CustomAttributeCache, &t2190_0_0_0, &t2190_1_0_0, &t2190_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Serialization.ISerializationSurrogate
extern TypeInfo t1907_TI;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1907_m12082_ParameterInfos[] = 
{
	{"obj", 0, 134222818, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"info", 1, 134222819, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 2, 134222820, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m12082_MI = 
{
	"GetObjectData", NULL, &t1907_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t1101, t1907_m12082_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 3, false, false, 4176, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
extern Il2CppType t1904_0_0_0;
static ParameterInfo t1907_m12086_ParameterInfos[] = 
{
	{"obj", 0, 134222821, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"info", 1, 134222822, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 2, 134222823, &EmptyCustomAttributesCache, &t1101_0_0_0},
	{"selector", 3, 134222824, &EmptyCustomAttributesCache, &t1904_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t1101_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12086_MI = 
{
	"SetObjectData", NULL, &t1907_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9_t1101_t9, t1907_m12086_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 4, false, false, 4177, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1907_MIs[] =
{
	&m12082_MI,
	&m12086_MI,
	NULL
};
void t1907_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1907_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISerializationSurrogate", "System.Runtime.Serialization", t1907_MIs, NULL, NULL, NULL, &t1907_TI, NULL, &t1907__CustomAttributeCache, &t1907_0_0_0, &t1907_1_0_0, &t1907_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Serialization.ISurrogateSelector
extern TypeInfo t1904_TI;
extern Il2CppType t126_0_0_0;
extern Il2CppType t1101_0_0_0;
extern Il2CppType t1904_1_0_2;
extern Il2CppType t1904_1_0_0;
static ParameterInfo t1904_m12063_ParameterInfos[] = 
{
	{"type", 0, 134222825, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"context", 1, 134222826, &EmptyCustomAttributesCache, &t1101_0_0_0},
	{"selector", 2, 134222827, &EmptyCustomAttributesCache, &t1904_1_0_2},
};
extern Il2CppType t1907_0_0_0;
extern void* RuntimeInvoker_t9_t9_t1101_t2630 (MethodInfo* method, void* obj, void** args);
MethodInfo m12063_MI = 
{
	"GetSurrogate", NULL, &t1904_TI, &t1907_0_0_0, RuntimeInvoker_t9_t9_t1101_t2630, t1904_m12063_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 3, false, false, 4178, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1904_MIs[] =
{
	&m12063_MI,
	NULL
};
void t1904_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1904__CustomAttributeCache = {
1,
NULL,
&t1904_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
struct t1904;
extern CustomAttributesCache t1904__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1904_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1904_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISurrogateSelector", "System.Runtime.Serialization", t1904_MIs, NULL, NULL, NULL, &t1904_TI, NULL, &t1904__CustomAttributeCache, &t1904_0_0_0, &t1904_1_0_0, &t1904_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1960.h"
// Metadata Definition System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
extern TypeInfo t1960_TI;
#include "t1960MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10256_MI = 
{
	".ctor", (methodPointerType)&m10256, &t1960_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4183, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1960_m10257_ParameterInfos[] = 
{
	{"o1", 0, 134222830, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"o2", 1, 134222831, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10257_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m10257, &t1960_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1960_m10257_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 2, false, false, 4184, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1960_m10258_ParameterInfos[] = 
{
	{"o", 0, 134222832, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10258_MI = 
{
	"System.Collections.IHashCodeProvider.GetHashCode", (methodPointerType)&m10258, &t1960_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1960_m10258_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 1, false, false, 4185, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1960_MIs[] =
{
	&m10256_MI,
	&m10257_MI,
	&m10258_MI,
	NULL
};
extern MethodInfo m10257_MI;
extern MethodInfo m10258_MI;
static Il2CppMethodReference t1960_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10257_MI,
	&m10258_MI,
};
static bool t1960_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t1165_0_0_0;
extern Il2CppType t1171_0_0_0;
static const Il2CppType* t1960_ITIs[] = 
{
	&t1165_0_0_0,
	&t1171_0_0_0,
};
static Il2CppInterfaceOffsetPair t1960_IOs[] = 
{
	{ &t1165_0_0_0, 4},
	{ &t1171_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1960_0_0_0;
extern Il2CppType t1960_1_0_0;
extern TypeInfo t1956_TI;
extern Il2CppType t1956_0_0_0;
struct t1960;
const Il2CppTypeDefinitionMetadata t1960_DM = 
{
	&t1956_0_0_0, NULL, t1960_ITIs, t1960_IOs, &t9_0_0_0, t1960_VT, t1960_VTIGM, NULL};
TypeInfo t1960_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InstanceComparer", "", t1960_MIs, NULL, NULL, NULL, &t1960_TI, NULL, &EmptyCustomAttributesCache, &t1960_0_0_0, &t1960_1_0_0, &t1960_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1960), sizeof (t1960), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 6, 2, 2};
#include "t1956.h"
// Metadata Definition System.Runtime.Serialization.ObjectIDGenerator
#include "t1956MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10259_MI = 
{
	".ctor", (methodPointerType)&m10259, &t1956_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4179, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10260_MI = 
{
	".cctor", (methodPointerType)&m10260, &t1956_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4180, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t124_1_0_2;
static ParameterInfo t1956_m10261_ParameterInfos[] = 
{
	{"obj", 0, 134222828, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"firstTime", 1, 134222829, &EmptyCustomAttributesCache, &t124_1_0_2},
};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299_t9_t635 (MethodInfo* method, void* obj, void** args);
MethodInfo m10261_MI = 
{
	"GetId", (methodPointerType)&m10261, &t1956_TI, &t299_0_0_0, RuntimeInvoker_t299_t9_t635, t1956_m10261_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 4, 2, false, false, 4181, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10262_MI = 
{
	"get_NextId", (methodPointerType)&m10262, &t1956_TI, &t299_0_0_0, RuntimeInvoker_t299, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4182, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1956_MIs[] =
{
	&m10259_MI,
	&m10260_MI,
	&m10261_MI,
	&m10262_MI,
	NULL
};
extern Il2CppType t1158_0_0_1;
FieldInfo t1956_f0_FieldInfo = 
{
	"table", &t1158_0_0_1, &t1956_TI, offsetof(t1956, f0), &EmptyCustomAttributesCache};
extern Il2CppType t299_0_0_1;
FieldInfo t1956_f1_FieldInfo = 
{
	"current", &t299_0_0_1, &t1956_TI, offsetof(t1956, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1960_0_0_17;
FieldInfo t1956_f2_FieldInfo = 
{
	"comparer", &t1960_0_0_17, &t1956_TI, offsetof(t1956_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1956_FIs[] =
{
	&t1956_f0_FieldInfo,
	&t1956_f1_FieldInfo,
	&t1956_f2_FieldInfo,
	NULL
};
extern MethodInfo m10262_MI;
static PropertyInfo t1956____NextId_PropertyInfo = 
{
	&t1956_TI, "NextId", &m10262_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1956_PIs[] =
{
	&t1956____NextId_PropertyInfo,
	NULL
};
static const Il2CppType* t1956_TI__nestedTypes[1] =
{
	&t1960_0_0_0,
};
extern MethodInfo m10261_MI;
static Il2CppMethodReference t1956_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10261_MI,
};
static bool t1956_VTIGM[] =
{
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
void t1956_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7849(tmp, il2cpp_codegen_string_new_wrapper("Serialization format not compatible with.NET"), &m7849_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1956__CustomAttributeCache = {
2,
NULL,
&t1956_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1956_1_0_0;
struct t1956;
extern CustomAttributesCache t1956__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1956_DM = 
{
	NULL, t1956_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t1956_VT, t1956_VTIGM, NULL};
TypeInfo t1956_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectIDGenerator", "System.Runtime.Serialization", t1956_MIs, t1956_PIs, t1956_FIs, NULL, &t1956_TI, NULL, &t1956__CustomAttributeCache, &t1956_0_0_0, &t1956_1_0_0, &t1956_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1956), sizeof (t1956), 0, -1, sizeof(t1956_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 4, 1, 3, 0, 1, 5, 0, 0};
#include "t1949.h"
// Metadata Definition System.Runtime.Serialization.ObjectManager
extern TypeInfo t1949_TI;
#include "t1949MD.h"
extern Il2CppType t1904_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1949_m10263_ParameterInfos[] = 
{
	{"selector", 0, 134222833, &EmptyCustomAttributesCache, &t1904_0_0_0},
	{"context", 1, 134222834, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10263_MI = 
{
	".ctor", (methodPointerType)&m10263, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1949_m10263_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4186, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10264_MI = 
{
	"DoFixups", (methodPointerType)&m10264, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 4, 0, false, false, 4187, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t1949_m10265_ParameterInfos[] = 
{
	{"objectID", 0, 134222835, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t1961_0_0_0;
extern void* RuntimeInvoker_t9_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10265_MI = 
{
	"GetObjectRecord", (methodPointerType)&m10265, &t1949_TI, &t1961_0_0_0, RuntimeInvoker_t9_t299, t1949_m10265_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4188, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t1949_m10266_ParameterInfos[] = 
{
	{"objectID", 0, 134222836, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10266_MI = 
{
	"GetObject", (methodPointerType)&m10266, &t1949_TI, &t9_0_0_0, RuntimeInvoker_t9_t299, t1949_m10266_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 1, false, false, 4189, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10267_MI = 
{
	"RaiseDeserializationEvent", (methodPointerType)&m10267, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 4190, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1949_m10268_ParameterInfos[] = 
{
	{"obj", 0, 134222837, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10268_MI = 
{
	"RaiseOnDeserializingEvent", (methodPointerType)&m10268, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1949_m10268_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4191, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1949_m10269_ParameterInfos[] = 
{
	{"obj", 0, 134222838, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10269_MI = 
{
	"RaiseOnDeserializedEvent", (methodPointerType)&m10269, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1949_m10269_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4192, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1962_0_0_0;
extern Il2CppType t1962_0_0_0;
static ParameterInfo t1949_m10270_ParameterInfos[] = 
{
	{"record", 0, 134222839, &EmptyCustomAttributesCache, &t1962_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10270_MI = 
{
	"AddFixup", (methodPointerType)&m10270, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1949_m10270_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4193, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t299_0_0_0;
static ParameterInfo t1949_m10271_ParameterInfos[] = 
{
	{"arrayToBeFixed", 0, 134222840, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"index", 1, 134222841, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"objectRequired", 2, 134222842, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299_t125_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10271_MI = 
{
	"RecordArrayElementFixup", (methodPointerType)&m10271, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122_t299_t125_t299, t1949_m10271_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 3, false, false, 4194, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern Il2CppType t1095_0_0_0;
extern Il2CppType t299_0_0_0;
static ParameterInfo t1949_m10272_ParameterInfos[] = 
{
	{"arrayToBeFixed", 0, 134222843, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"indices", 1, 134222844, &EmptyCustomAttributesCache, &t1095_0_0_0},
	{"objectRequired", 2, 134222845, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299_t9_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10272_MI = 
{
	"RecordArrayElementFixup", (methodPointerType)&m10272, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122_t299_t9_t299, t1949_m10272_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 3, false, false, 4195, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t299_0_0_0;
static ParameterInfo t1949_m10273_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222846, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"memberName", 1, 134222847, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"objectRequired", 2, 134222848, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299_t9_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10273_MI = 
{
	"RecordDelayedFixup", (methodPointerType)&m10273, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122_t299_t9_t299, t1949_m10273_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 3, false, false, 4196, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
extern Il2CppType t560_0_0_0;
extern Il2CppType t299_0_0_0;
static ParameterInfo t1949_m10274_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222849, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"member", 1, 134222850, &EmptyCustomAttributesCache, &t560_0_0_0},
	{"objectRequired", 2, 134222851, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t299_t9_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10274_MI = 
{
	"RecordFixup", (methodPointerType)&m10274, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122_t299_t9_t299, t1949_m10274_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 3, false, false, 4197, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1961_0_0_0;
extern Il2CppType t1961_0_0_0;
static ParameterInfo t1949_m10275_ParameterInfos[] = 
{
	{"obj", 0, 134222852, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"record", 1, 134222853, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10275_MI = 
{
	"RegisterObjectInternal", (methodPointerType)&m10275, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1949_m10275_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4198, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t1100_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t560_0_0_0;
extern Il2CppType t1095_0_0_0;
static ParameterInfo t1949_m10276_ParameterInfos[] = 
{
	{"obj", 0, 134222854, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"objectID", 1, 134222855, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"info", 2, 134222856, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"idOfContainingObj", 3, 134222857, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"member", 4, 134222858, &EmptyCustomAttributesCache, &t560_0_0_0},
	{"arrayIndex", 5, 134222859, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t299_t9_t299_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10276_MI = 
{
	"RegisterObject", (methodPointerType)&m10276, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t299_t9_t299_t9_t9, t1949_m10276_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 6, false, false, 4199, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1949_MIs[] =
{
	&m10263_MI,
	&m10264_MI,
	&m10265_MI,
	&m10266_MI,
	&m10267_MI,
	&m10268_MI,
	&m10269_MI,
	&m10270_MI,
	&m10271_MI,
	&m10272_MI,
	&m10273_MI,
	&m10274_MI,
	&m10275_MI,
	&m10276_MI,
	NULL
};
extern Il2CppType t1961_0_0_1;
FieldInfo t1949_f0_FieldInfo = 
{
	"_objectRecordChain", &t1961_0_0_1, &t1949_TI, offsetof(t1949, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1961_0_0_1;
FieldInfo t1949_f1_FieldInfo = 
{
	"_lastObjectRecord", &t1961_0_0_1, &t1949_TI, offsetof(t1949, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1170_0_0_1;
FieldInfo t1949_f2_FieldInfo = 
{
	"_deserializedRecords", &t1170_0_0_1, &t1949_TI, offsetof(t1949, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1170_0_0_1;
FieldInfo t1949_f3_FieldInfo = 
{
	"_onDeserializedCallbackRecords", &t1170_0_0_1, &t1949_TI, offsetof(t1949, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_1;
FieldInfo t1949_f4_FieldInfo = 
{
	"_objectRecords", &t1158_0_0_1, &t1949_TI, offsetof(t1949, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1949_f5_FieldInfo = 
{
	"_finalFixup", &t124_0_0_1, &t1949_TI, offsetof(t1949, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1904_0_0_1;
FieldInfo t1949_f6_FieldInfo = 
{
	"_selector", &t1904_0_0_1, &t1949_TI, offsetof(t1949, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1101_0_0_1;
FieldInfo t1949_f7_FieldInfo = 
{
	"_context", &t1101_0_0_1, &t1949_TI, offsetof(t1949, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1949_f8_FieldInfo = 
{
	"_registeredObjectsCount", &t125_0_0_1, &t1949_TI, offsetof(t1949, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1949_FIs[] =
{
	&t1949_f0_FieldInfo,
	&t1949_f1_FieldInfo,
	&t1949_f2_FieldInfo,
	&t1949_f3_FieldInfo,
	&t1949_f4_FieldInfo,
	&t1949_f5_FieldInfo,
	&t1949_f6_FieldInfo,
	&t1949_f7_FieldInfo,
	&t1949_f8_FieldInfo,
	NULL
};
extern MethodInfo m10264_MI;
extern MethodInfo m10266_MI;
extern MethodInfo m10267_MI;
extern MethodInfo m10271_MI;
extern MethodInfo m10272_MI;
extern MethodInfo m10273_MI;
extern MethodInfo m10274_MI;
static Il2CppMethodReference t1949_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10264_MI,
	&m10266_MI,
	&m10267_MI,
	&m10271_MI,
	&m10272_MI,
	&m10273_MI,
	&m10274_MI,
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
	false,
};
void t1949_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1949_VT, t1949_VTIGM, NULL};
TypeInfo t1949_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectManager", "System.Runtime.Serialization", t1949_MIs, NULL, t1949_FIs, NULL, &t1949_TI, NULL, &t1949__CustomAttributeCache, &t1949_0_0_0, &t1949_1_0_0, &t1949_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1949), sizeof (t1949), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 14, 0, 9, 0, 0, 11, 0, 0};
#include "t1962.h"
// Metadata Definition System.Runtime.Serialization.BaseFixupRecord
extern TypeInfo t1962_TI;
#include "t1962MD.h"
extern Il2CppType t1961_0_0_0;
extern Il2CppType t1961_0_0_0;
static ParameterInfo t1962_m10277_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222860, &EmptyCustomAttributesCache, &t1961_0_0_0},
	{"objectRequired", 1, 134222861, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10277_MI = 
{
	".ctor", (methodPointerType)&m10277, &t1962_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1962_m10277_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4200, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1949_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1962_m10278_ParameterInfos[] = 
{
	{"manager", 0, 134222862, &EmptyCustomAttributesCache, &t1949_0_0_0},
	{"strict", 1, 134222863, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10278_MI = 
{
	"DoFixup", (methodPointerType)&m10278, &t1962_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1962_m10278_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4201, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1949_0_0_0;
static ParameterInfo t1962_m12085_ParameterInfos[] = 
{
	{"manager", 0, 134222864, &EmptyCustomAttributesCache, &t1949_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12085_MI = 
{
	"FixupImpl", NULL, &t1962_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1962_m12085_ParameterInfos, &EmptyCustomAttributesCache, 1476, 0, 4, 1, false, false, 4202, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1962_MIs[] =
{
	&m10277_MI,
	&m10278_MI,
	&m12085_MI,
	NULL
};
extern Il2CppType t1961_0_0_5;
FieldInfo t1962_f0_FieldInfo = 
{
	"ObjectToBeFixed", &t1961_0_0_5, &t1962_TI, offsetof(t1962, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1961_0_0_5;
FieldInfo t1962_f1_FieldInfo = 
{
	"ObjectRequired", &t1961_0_0_5, &t1962_TI, offsetof(t1962, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1962_0_0_6;
FieldInfo t1962_f2_FieldInfo = 
{
	"NextSameContainer", &t1962_0_0_6, &t1962_TI, offsetof(t1962, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1962_0_0_6;
FieldInfo t1962_f3_FieldInfo = 
{
	"NextSameRequired", &t1962_0_0_6, &t1962_TI, offsetof(t1962, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1962_FIs[] =
{
	&t1962_f0_FieldInfo,
	&t1962_f1_FieldInfo,
	&t1962_f2_FieldInfo,
	&t1962_f3_FieldInfo,
	NULL
};
static Il2CppMethodReference t1962_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t1962_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1962_1_0_0;
struct t1962;
const Il2CppTypeDefinitionMetadata t1962_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1962_VT, t1962_VTIGM, NULL};
TypeInfo t1962_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BaseFixupRecord", "System.Runtime.Serialization", t1962_MIs, NULL, t1962_FIs, NULL, &t1962_TI, NULL, &EmptyCustomAttributesCache, &t1962_0_0_0, &t1962_1_0_0, &t1962_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1962), sizeof (t1962), 0, -1, 0, 0, -1, 1048704, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 4, 0, 0, 5, 0, 0};
#include "t1963.h"
// Metadata Definition System.Runtime.Serialization.ArrayFixupRecord
extern TypeInfo t1963_TI;
#include "t1963MD.h"
extern Il2CppType t1961_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1961_0_0_0;
static ParameterInfo t1963_m10279_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222865, &EmptyCustomAttributesCache, &t1961_0_0_0},
	{"index", 1, 134222866, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"objectRequired", 2, 134222867, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10279_MI = 
{
	".ctor", (methodPointerType)&m10279, &t1963_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t9, t1963_m10279_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4203, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1949_0_0_0;
static ParameterInfo t1963_m10280_ParameterInfos[] = 
{
	{"manager", 0, 134222868, &EmptyCustomAttributesCache, &t1949_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10280_MI = 
{
	"FixupImpl", (methodPointerType)&m10280, &t1963_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1963_m10280_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 4, 1, false, false, 4204, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1963_MIs[] =
{
	&m10279_MI,
	&m10280_MI,
	NULL
};
extern Il2CppType t125_0_0_1;
FieldInfo t1963_f4_FieldInfo = 
{
	"_index", &t125_0_0_1, &t1963_TI, offsetof(t1963, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1963_FIs[] =
{
	&t1963_f4_FieldInfo,
	NULL
};
extern MethodInfo m10280_MI;
static Il2CppMethodReference t1963_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10280_MI,
};
static bool t1963_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1963_0_0_0;
extern Il2CppType t1963_1_0_0;
struct t1963;
const Il2CppTypeDefinitionMetadata t1963_DM = 
{
	NULL, NULL, NULL, NULL, &t1962_0_0_0, t1963_VT, t1963_VTIGM, NULL};
TypeInfo t1963_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ArrayFixupRecord", "System.Runtime.Serialization", t1963_MIs, NULL, t1963_FIs, NULL, &t1963_TI, NULL, &EmptyCustomAttributesCache, &t1963_0_0_0, &t1963_1_0_0, &t1963_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1963), sizeof (t1963), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#include "t1964.h"
// Metadata Definition System.Runtime.Serialization.MultiArrayFixupRecord
extern TypeInfo t1964_TI;
#include "t1964MD.h"
extern Il2CppType t1961_0_0_0;
extern Il2CppType t1095_0_0_0;
extern Il2CppType t1961_0_0_0;
static ParameterInfo t1964_m10281_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222869, &EmptyCustomAttributesCache, &t1961_0_0_0},
	{"indices", 1, 134222870, &EmptyCustomAttributesCache, &t1095_0_0_0},
	{"objectRequired", 2, 134222871, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10281_MI = 
{
	".ctor", (methodPointerType)&m10281, &t1964_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1964_m10281_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4205, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1949_0_0_0;
static ParameterInfo t1964_m10282_ParameterInfos[] = 
{
	{"manager", 0, 134222872, &EmptyCustomAttributesCache, &t1949_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10282_MI = 
{
	"FixupImpl", (methodPointerType)&m10282, &t1964_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1964_m10282_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 4, 1, false, false, 4206, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1964_MIs[] =
{
	&m10281_MI,
	&m10282_MI,
	NULL
};
extern Il2CppType t1095_0_0_1;
FieldInfo t1964_f4_FieldInfo = 
{
	"_indices", &t1095_0_0_1, &t1964_TI, offsetof(t1964, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1964_FIs[] =
{
	&t1964_f4_FieldInfo,
	NULL
};
extern MethodInfo m10282_MI;
static Il2CppMethodReference t1964_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10282_MI,
};
static bool t1964_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1964_0_0_0;
extern Il2CppType t1964_1_0_0;
struct t1964;
const Il2CppTypeDefinitionMetadata t1964_DM = 
{
	NULL, NULL, NULL, NULL, &t1962_0_0_0, t1964_VT, t1964_VTIGM, NULL};
TypeInfo t1964_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MultiArrayFixupRecord", "System.Runtime.Serialization", t1964_MIs, NULL, t1964_FIs, NULL, &t1964_TI, NULL, &EmptyCustomAttributesCache, &t1964_0_0_0, &t1964_1_0_0, &t1964_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1964), sizeof (t1964), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#include "t1965.h"
// Metadata Definition System.Runtime.Serialization.FixupRecord
extern TypeInfo t1965_TI;
#include "t1965MD.h"
extern Il2CppType t1961_0_0_0;
extern Il2CppType t560_0_0_0;
extern Il2CppType t1961_0_0_0;
static ParameterInfo t1965_m10283_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222873, &EmptyCustomAttributesCache, &t1961_0_0_0},
	{"member", 1, 134222874, &EmptyCustomAttributesCache, &t560_0_0_0},
	{"objectRequired", 2, 134222875, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10283_MI = 
{
	".ctor", (methodPointerType)&m10283, &t1965_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1965_m10283_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4207, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1949_0_0_0;
static ParameterInfo t1965_m10284_ParameterInfos[] = 
{
	{"manager", 0, 134222876, &EmptyCustomAttributesCache, &t1949_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10284_MI = 
{
	"FixupImpl", (methodPointerType)&m10284, &t1965_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1965_m10284_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 4, 1, false, false, 4208, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1965_MIs[] =
{
	&m10283_MI,
	&m10284_MI,
	NULL
};
extern Il2CppType t560_0_0_6;
FieldInfo t1965_f4_FieldInfo = 
{
	"_member", &t560_0_0_6, &t1965_TI, offsetof(t1965, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1965_FIs[] =
{
	&t1965_f4_FieldInfo,
	NULL
};
extern MethodInfo m10284_MI;
static Il2CppMethodReference t1965_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10284_MI,
};
static bool t1965_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1965_0_0_0;
extern Il2CppType t1965_1_0_0;
struct t1965;
const Il2CppTypeDefinitionMetadata t1965_DM = 
{
	NULL, NULL, NULL, NULL, &t1962_0_0_0, t1965_VT, t1965_VTIGM, NULL};
TypeInfo t1965_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FixupRecord", "System.Runtime.Serialization", t1965_MIs, NULL, t1965_FIs, NULL, &t1965_TI, NULL, &EmptyCustomAttributesCache, &t1965_0_0_0, &t1965_1_0_0, &t1965_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1965), sizeof (t1965), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#include "t1966.h"
// Metadata Definition System.Runtime.Serialization.DelayedFixupRecord
extern TypeInfo t1966_TI;
#include "t1966MD.h"
extern Il2CppType t1961_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1961_0_0_0;
static ParameterInfo t1966_m10285_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222877, &EmptyCustomAttributesCache, &t1961_0_0_0},
	{"memberName", 1, 134222878, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"objectRequired", 2, 134222879, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10285_MI = 
{
	".ctor", (methodPointerType)&m10285, &t1966_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1966_m10285_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4209, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1949_0_0_0;
static ParameterInfo t1966_m10286_ParameterInfos[] = 
{
	{"manager", 0, 134222880, &EmptyCustomAttributesCache, &t1949_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10286_MI = 
{
	"FixupImpl", (methodPointerType)&m10286, &t1966_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1966_m10286_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 4, 1, false, false, 4210, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1966_MIs[] =
{
	&m10285_MI,
	&m10286_MI,
	NULL
};
extern Il2CppType t2_0_0_6;
FieldInfo t1966_f4_FieldInfo = 
{
	"_memberName", &t2_0_0_6, &t1966_TI, offsetof(t1966, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1966_FIs[] =
{
	&t1966_f4_FieldInfo,
	NULL
};
extern MethodInfo m10286_MI;
static Il2CppMethodReference t1966_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10286_MI,
};
static bool t1966_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1966_0_0_0;
extern Il2CppType t1966_1_0_0;
struct t1966;
const Il2CppTypeDefinitionMetadata t1966_DM = 
{
	NULL, NULL, NULL, NULL, &t1962_0_0_0, t1966_VT, t1966_VTIGM, NULL};
TypeInfo t1966_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DelayedFixupRecord", "System.Runtime.Serialization", t1966_MIs, NULL, t1966_FIs, NULL, &t1966_TI, NULL, &EmptyCustomAttributesCache, &t1966_0_0_0, &t1966_1_0_0, &t1966_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1966), sizeof (t1966), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#include "t1967.h"
// Metadata Definition System.Runtime.Serialization.ObjectRecordStatus
extern TypeInfo t1967_TI;
#include "t1967MD.h"
static MethodInfo* t1967_MIs[] =
{
	NULL
};
extern Il2CppType t575_0_0_1542;
FieldInfo t1967_f1_FieldInfo = 
{
	"value__", &t575_0_0_1542, &t1967_TI, offsetof(t1967, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1967_0_0_32854;
FieldInfo t1967_f2_FieldInfo = 
{
	"Unregistered", &t1967_0_0_32854, &t1967_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1967_0_0_32854;
FieldInfo t1967_f3_FieldInfo = 
{
	"ReferenceUnsolved", &t1967_0_0_32854, &t1967_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1967_0_0_32854;
FieldInfo t1967_f4_FieldInfo = 
{
	"ReferenceSolvingDelayed", &t1967_0_0_32854, &t1967_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1967_0_0_32854;
FieldInfo t1967_f5_FieldInfo = 
{
	"ReferenceSolved", &t1967_0_0_32854, &t1967_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1967_FIs[] =
{
	&t1967_f1_FieldInfo,
	&t1967_f2_FieldInfo,
	&t1967_f3_FieldInfo,
	&t1967_f4_FieldInfo,
	&t1967_f5_FieldInfo,
	NULL
};
static const uint8_t t1967_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1967_f2_DefaultValue = 
{
	&t1967_f2_FieldInfo, { (char*)&t1967_f2_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1967_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1967_f3_DefaultValue = 
{
	&t1967_f3_FieldInfo, { (char*)&t1967_f3_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1967_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1967_f4_DefaultValue = 
{
	&t1967_f4_FieldInfo, { (char*)&t1967_f4_DefaultValueData, &t575_0_0_0 }};
static const uint8_t t1967_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1967_f5_DefaultValue = 
{
	&t1967_f5_FieldInfo, { (char*)&t1967_f5_DefaultValueData, &t575_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1967_FDVs[] = 
{
	&t1967_f2_DefaultValue,
	&t1967_f3_DefaultValue,
	&t1967_f4_DefaultValue,
	&t1967_f5_DefaultValue,
	NULL
};
static Il2CppMethodReference t1967_VT[] =
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
static bool t1967_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1967_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1967_0_0_0;
extern Il2CppType t1967_1_0_0;
const Il2CppTypeDefinitionMetadata t1967_DM = 
{
	NULL, NULL, NULL, t1967_IOs, &t8_0_0_0, t1967_VT, t1967_VTIGM, NULL};
TypeInfo t1967_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectRecordStatus", "System.Runtime.Serialization", t1967_MIs, NULL, t1967_FIs, NULL, &t575_TI, NULL, &EmptyCustomAttributesCache, &t1967_0_0_0, &t1967_1_0_0, &t1967_DM, NULL, NULL, NULL, t1967_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1967)+ sizeof (Il2CppObject), sizeof (t1967)+ sizeof (Il2CppObject), 0, sizeof(uint8_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t1961.h"
// Metadata Definition System.Runtime.Serialization.ObjectRecord
extern TypeInfo t1961_TI;
#include "t1961MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10287_MI = 
{
	".ctor", (methodPointerType)&m10287, &t1961_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4211, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1949_0_0_0;
extern Il2CppType t560_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1961_m10288_ParameterInfos[] = 
{
	{"manager", 0, 134222881, &EmptyCustomAttributesCache, &t1949_0_0_0},
	{"member", 1, 134222882, &EmptyCustomAttributesCache, &t560_0_0_0},
	{"value", 2, 134222883, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10288_MI = 
{
	"SetMemberValue", (methodPointerType)&m10288, &t1961_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1961_m10288_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4212, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1949_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1095_0_0_0;
static ParameterInfo t1961_m10289_ParameterInfos[] = 
{
	{"manager", 0, 134222884, &EmptyCustomAttributesCache, &t1949_0_0_0},
	{"value", 1, 134222885, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"indices", 2, 134222886, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10289_MI = 
{
	"SetArrayValue", (methodPointerType)&m10289, &t1961_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1961_m10289_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4213, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1949_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1961_m10290_ParameterInfos[] = 
{
	{"manager", 0, 134222887, &EmptyCustomAttributesCache, &t1949_0_0_0},
	{"memberName", 1, 134222888, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 2, 134222889, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10290_MI = 
{
	"SetMemberValue", (methodPointerType)&m10290, &t1961_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1961_m10290_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4214, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10291_MI = 
{
	"get_IsInstanceReady", (methodPointerType)&m10291, &t1961_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4215, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10292_MI = 
{
	"get_IsUnsolvedObjectReference", (methodPointerType)&m10292, &t1961_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4216, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10293_MI = 
{
	"get_IsRegistered", (methodPointerType)&m10293, &t1961_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4217, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t1949_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1961_m10294_ParameterInfos[] = 
{
	{"asContainer", 0, 134222890, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"manager", 1, 134222891, &EmptyCustomAttributesCache, &t1949_0_0_0},
	{"strict", 2, 134222892, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t186_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10294_MI = 
{
	"DoFixups", (methodPointerType)&m10294, &t1961_TI, &t124_0_0_0, RuntimeInvoker_t124_t186_t9_t186, t1961_m10294_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4218, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1962_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1961_m10295_ParameterInfos[] = 
{
	{"fixupToRemove", 0, 134222893, &EmptyCustomAttributesCache, &t1962_0_0_0},
	{"asContainer", 1, 134222894, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10295_MI = 
{
	"RemoveFixup", (methodPointerType)&m10295, &t1961_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1961_m10295_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4219, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1962_0_0_0;
extern Il2CppType t1962_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1961_m10296_ParameterInfos[] = 
{
	{"fixup", 0, 134222895, &EmptyCustomAttributesCache, &t1962_0_0_0},
	{"prevFixup", 1, 134222896, &EmptyCustomAttributesCache, &t1962_0_0_0},
	{"asContainer", 2, 134222897, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10296_MI = 
{
	"UnchainFixup", (methodPointerType)&m10296, &t1961_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1961_m10296_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4220, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1962_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1961_m10297_ParameterInfos[] = 
{
	{"fixup", 0, 134222898, &EmptyCustomAttributesCache, &t1962_0_0_0},
	{"asContainer", 1, 134222899, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10297_MI = 
{
	"ChainFixup", (methodPointerType)&m10297, &t1961_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1961_m10297_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4221, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1949_0_0_0;
extern Il2CppType t1904_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1961_m10298_ParameterInfos[] = 
{
	{"manager", 0, 134222900, &EmptyCustomAttributesCache, &t1949_0_0_0},
	{"selector", 1, 134222901, &EmptyCustomAttributesCache, &t1904_0_0_0},
	{"context", 2, 134222902, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10298_MI = 
{
	"LoadData", (methodPointerType)&m10298, &t1961_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9_t1101, t1961_m10298_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4222, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10299_MI = 
{
	"get_HasPendingFixups", (methodPointerType)&m10299, &t1961_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4223, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1961_MIs[] =
{
	&m10287_MI,
	&m10288_MI,
	&m10289_MI,
	&m10290_MI,
	&m10291_MI,
	&m10292_MI,
	&m10293_MI,
	&m10294_MI,
	&m10295_MI,
	&m10296_MI,
	&m10297_MI,
	&m10298_MI,
	&m10299_MI,
	NULL
};
extern Il2CppType t1967_0_0_6;
FieldInfo t1961_f0_FieldInfo = 
{
	"Status", &t1967_0_0_6, &t1961_TI, offsetof(t1961, f0), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_6;
FieldInfo t1961_f1_FieldInfo = 
{
	"OriginalObject", &t9_0_0_6, &t1961_TI, offsetof(t1961, f1), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_6;
FieldInfo t1961_f2_FieldInfo = 
{
	"ObjectInstance", &t9_0_0_6, &t1961_TI, offsetof(t1961, f2), &EmptyCustomAttributesCache};
extern Il2CppType t299_0_0_6;
FieldInfo t1961_f3_FieldInfo = 
{
	"ObjectID", &t299_0_0_6, &t1961_TI, offsetof(t1961, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1100_0_0_6;
FieldInfo t1961_f4_FieldInfo = 
{
	"Info", &t1100_0_0_6, &t1961_TI, offsetof(t1961, f4), &EmptyCustomAttributesCache};
extern Il2CppType t299_0_0_6;
FieldInfo t1961_f5_FieldInfo = 
{
	"IdOfContainingObj", &t299_0_0_6, &t1961_TI, offsetof(t1961, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1907_0_0_6;
FieldInfo t1961_f6_FieldInfo = 
{
	"Surrogate", &t1907_0_0_6, &t1961_TI, offsetof(t1961, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1904_0_0_6;
FieldInfo t1961_f7_FieldInfo = 
{
	"SurrogateSelector", &t1904_0_0_6, &t1961_TI, offsetof(t1961, f7), &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_6;
FieldInfo t1961_f8_FieldInfo = 
{
	"Member", &t560_0_0_6, &t1961_TI, offsetof(t1961, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1095_0_0_6;
FieldInfo t1961_f9_FieldInfo = 
{
	"ArrayIndex", &t1095_0_0_6, &t1961_TI, offsetof(t1961, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1962_0_0_6;
FieldInfo t1961_f10_FieldInfo = 
{
	"FixupChainAsContainer", &t1962_0_0_6, &t1961_TI, offsetof(t1961, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1962_0_0_6;
FieldInfo t1961_f11_FieldInfo = 
{
	"FixupChainAsRequired", &t1962_0_0_6, &t1961_TI, offsetof(t1961, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1961_0_0_6;
FieldInfo t1961_f12_FieldInfo = 
{
	"Next", &t1961_0_0_6, &t1961_TI, offsetof(t1961, f12), &EmptyCustomAttributesCache};
static FieldInfo* t1961_FIs[] =
{
	&t1961_f0_FieldInfo,
	&t1961_f1_FieldInfo,
	&t1961_f2_FieldInfo,
	&t1961_f3_FieldInfo,
	&t1961_f4_FieldInfo,
	&t1961_f5_FieldInfo,
	&t1961_f6_FieldInfo,
	&t1961_f7_FieldInfo,
	&t1961_f8_FieldInfo,
	&t1961_f9_FieldInfo,
	&t1961_f10_FieldInfo,
	&t1961_f11_FieldInfo,
	&t1961_f12_FieldInfo,
	NULL
};
extern MethodInfo m10291_MI;
static PropertyInfo t1961____IsInstanceReady_PropertyInfo = 
{
	&t1961_TI, "IsInstanceReady", &m10291_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10292_MI;
static PropertyInfo t1961____IsUnsolvedObjectReference_PropertyInfo = 
{
	&t1961_TI, "IsUnsolvedObjectReference", &m10292_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10293_MI;
static PropertyInfo t1961____IsRegistered_PropertyInfo = 
{
	&t1961_TI, "IsRegistered", &m10293_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10299_MI;
static PropertyInfo t1961____HasPendingFixups_PropertyInfo = 
{
	&t1961_TI, "HasPendingFixups", &m10299_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1961_PIs[] =
{
	&t1961____IsInstanceReady_PropertyInfo,
	&t1961____IsUnsolvedObjectReference_PropertyInfo,
	&t1961____IsRegistered_PropertyInfo,
	&t1961____HasPendingFixups_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1961_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1961_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1961_1_0_0;
struct t1961;
const Il2CppTypeDefinitionMetadata t1961_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1961_VT, t1961_VTIGM, NULL};
TypeInfo t1961_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectRecord", "System.Runtime.Serialization", t1961_MIs, t1961_PIs, t1961_FIs, NULL, &t1961_TI, NULL, &EmptyCustomAttributesCache, &t1961_0_0_0, &t1961_1_0_0, &t1961_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1961), sizeof (t1961), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 13, 4, 13, 0, 0, 4, 0, 0};
#include "t1968.h"
// Metadata Definition System.Runtime.Serialization.OnDeserializedAttribute
extern TypeInfo t1968_TI;
#include "t1968MD.h"
static MethodInfo* t1968_MIs[] =
{
	NULL
};
extern MethodInfo m4499_MI;
extern MethodInfo m4493_MI;
static Il2CppMethodReference t1968_VT[] =
{
	&m4499_MI,
	&m646_MI,
	&m4493_MI,
	&m673_MI,
};
static bool t1968_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppType t954_0_0_0;
static Il2CppInterfaceOffsetPair t1968_IOs[] = 
{
	{ &t954_0_0_0, 4},
};
extern TypeInfo t1024_TI;
#include "t1024.h"
#include "t1024MD.h"
extern MethodInfo m4605_MI;
extern MethodInfo m4606_MI;
void t1968_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m4605(tmp, 64, &m4605_MI);
		m4606(tmp, false, &m4606_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1968__CustomAttributeCache = {
2,
NULL,
&t1968_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1968_0_0_0;
extern Il2CppType t1968_1_0_0;
extern Il2CppType t725_0_0_0;
struct t1968;
extern CustomAttributesCache t1968__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1968_DM = 
{
	NULL, NULL, NULL, t1968_IOs, &t725_0_0_0, t1968_VT, t1968_VTIGM, NULL};
TypeInfo t1968_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OnDeserializedAttribute", "System.Runtime.Serialization", t1968_MIs, NULL, NULL, NULL, &t1968_TI, NULL, &t1968__CustomAttributeCache, &t1968_0_0_0, &t1968_1_0_0, &t1968_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1968), sizeof (t1968), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#include "t1969.h"
// Metadata Definition System.Runtime.Serialization.OnDeserializingAttribute
extern TypeInfo t1969_TI;
#include "t1969MD.h"
static MethodInfo* t1969_MIs[] =
{
	NULL
};
static Il2CppMethodReference t1969_VT[] =
{
	&m4499_MI,
	&m646_MI,
	&m4493_MI,
	&m673_MI,
};
static bool t1969_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1969_IOs[] = 
{
	{ &t954_0_0_0, 4},
};
void t1969_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1024 * tmp;
		tmp = (t1024 *)il2cpp_codegen_object_new (&t1024_TI);
		m4605(tmp, 64, &m4605_MI);
		m4606(tmp, false, &m4606_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1969__CustomAttributeCache = {
2,
NULL,
&t1969_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1969_0_0_0;
extern Il2CppType t1969_1_0_0;
struct t1969;
extern CustomAttributesCache t1969__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1969_DM = 
{
	NULL, NULL, NULL, t1969_IOs, &t725_0_0_0, t1969_VT, t1969_VTIGM, NULL};
TypeInfo t1969_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OnDeserializingAttribute", "System.Runtime.Serialization", t1969_MIs, NULL, NULL, NULL, &t1969_TI, NULL, &t1969__CustomAttributeCache, &t1969_0_0_0, &t1969_1_0_0, &t1969_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1969), sizeof (t1969), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#include "t1970.h"
// Metadata Definition System.Runtime.Serialization.OnSerializedAttribute
extern TypeInfo t1970_TI;
#include "t1970MD.h"
static MethodInfo* t1970_MIs[] =
{
	NULL
};
static Il2CppMethodReference t1970_VT[] =
{
	&m4499_MI,
	&m646_MI,
	&m4493_MI,
	&m673_MI,
};
static bool t1970_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1970_IOs[] = 
{
	{ &t954_0_0_0, 4},
};
void t1970_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m4605(tmp, 64, &m4605_MI);
		m4606(tmp, false, &m4606_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1970__CustomAttributeCache = {
2,
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
	NULL, NULL, NULL, t1970_IOs, &t725_0_0_0, t1970_VT, t1970_VTIGM, NULL};
TypeInfo t1970_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OnSerializedAttribute", "System.Runtime.Serialization", t1970_MIs, NULL, NULL, NULL, &t1970_TI, NULL, &t1970__CustomAttributeCache, &t1970_0_0_0, &t1970_1_0_0, &t1970_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1970), sizeof (t1970), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#include "t1971.h"
// Metadata Definition System.Runtime.Serialization.OnSerializingAttribute
extern TypeInfo t1971_TI;
#include "t1971MD.h"
static MethodInfo* t1971_MIs[] =
{
	NULL
};
static Il2CppMethodReference t1971_VT[] =
{
	&m4499_MI,
	&m646_MI,
	&m4493_MI,
	&m673_MI,
};
static bool t1971_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1971_IOs[] = 
{
	{ &t954_0_0_0, 4},
};
void t1971_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1024 * tmp;
		tmp = (t1024 *)il2cpp_codegen_object_new (&t1024_TI);
		m4605(tmp, 64, &m4605_MI);
		m4606(tmp, false, &m4606_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1971__CustomAttributeCache = {
2,
NULL,
&t1971_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1971_0_0_0;
extern Il2CppType t1971_1_0_0;
struct t1971;
extern CustomAttributesCache t1971__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1971_DM = 
{
	NULL, NULL, NULL, t1971_IOs, &t725_0_0_0, t1971_VT, t1971_VTIGM, NULL};
TypeInfo t1971_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OnSerializingAttribute", "System.Runtime.Serialization", t1971_MIs, NULL, NULL, NULL, &t1971_TI, NULL, &t1971__CustomAttributeCache, &t1971_0_0_0, &t1971_1_0_0, &t1971_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1971), sizeof (t1971), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#include "t1938.h"
// Metadata Definition System.Runtime.Serialization.SerializationBinder
extern TypeInfo t1938_TI;
#include "t1938MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10300_MI = 
{
	".ctor", (methodPointerType)&m10300, &t1938_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4224, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1938_m12077_ParameterInfos[] = 
{
	{"assemblyName", 0, 134222903, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"typeName", 1, 134222904, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12077_MI = 
{
	"BindToType", NULL, &t1938_TI, &t126_0_0_0, RuntimeInvoker_t9_t9_t9, t1938_m12077_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 2, false, false, 4225, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1938_MIs[] =
{
	&m10300_MI,
	&m12077_MI,
	NULL
};
static Il2CppMethodReference t1938_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t1938_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
void t1938_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1938__CustomAttributeCache = {
1,
NULL,
&t1938_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1938_0_0_0;
extern Il2CppType t1938_1_0_0;
struct t1938;
extern CustomAttributesCache t1938__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1938_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1938_VT, t1938_VTIGM, NULL};
TypeInfo t1938_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationBinder", "System.Runtime.Serialization", t1938_MIs, NULL, NULL, NULL, &t1938_TI, NULL, &t1938__CustomAttributeCache, &t1938_0_0_0, &t1938_1_0_0, &t1938_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1938), sizeof (t1938), 0, -1, 0, 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 5, 0, 0};
#include "t1972.h"
// Metadata Definition System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
extern TypeInfo t1972_TI;
#include "t1972MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t58_0_0_0;
extern Il2CppType t58_0_0_0;
static ParameterInfo t1972_m10301_ParameterInfos[] = 
{
	{"object", 0, 134222920, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"method", 1, 134222921, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m10301_MI = 
{
	".ctor", (methodPointerType)&m10301, &t1972_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t58, t1972_m10301_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 4237, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1972_m10302_ParameterInfos[] = 
{
	{"context", 0, 134222922, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10302_MI = 
{
	"Invoke", (methodPointerType)&m10302, &t1972_TI, &t122_0_0_0, RuntimeInvoker_t122_t1101, t1972_m10302_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 4238, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1101_0_0_0;
extern Il2CppType t470_0_0_0;
extern Il2CppType t470_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1972_m10303_ParameterInfos[] = 
{
	{"context", 0, 134222923, &EmptyCustomAttributesCache, &t1101_0_0_0},
	{"callback", 1, 134222924, &EmptyCustomAttributesCache, &t470_0_0_0},
	{"object", 2, 134222925, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t469_0_0_0;
extern void* RuntimeInvoker_t9_t1101_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10303_MI = 
{
	"BeginInvoke", (methodPointerType)&m10303, &t1972_TI, &t469_0_0_0, RuntimeInvoker_t9_t1101_t9_t9, t1972_m10303_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 4239, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t469_0_0_0;
extern Il2CppType t469_0_0_0;
static ParameterInfo t1972_m10304_ParameterInfos[] = 
{
	{"result", 0, 134222926, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10304_MI = 
{
	"EndInvoke", (methodPointerType)&m10304, &t1972_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1972_m10304_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 4240, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1972_MIs[] =
{
	&m10301_MI,
	&m10302_MI,
	&m10303_MI,
	&m10304_MI,
	NULL
};
extern MethodInfo m3005_MI;
extern MethodInfo m3006_MI;
extern MethodInfo m3007_MI;
extern MethodInfo m3008_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m3010_MI;
extern MethodInfo m3011_MI;
extern MethodInfo m10302_MI;
extern MethodInfo m10303_MI;
extern MethodInfo m10304_MI;
static Il2CppMethodReference t1972_VT[] =
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
	&m10302_MI,
	&m10303_MI,
	&m10304_MI,
};
static bool t1972_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
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
static Il2CppInterfaceOffsetPair t1972_IOs[] = 
{
	{ &t622_0_0_0, 4},
	{ &t623_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1972_0_0_0;
extern Il2CppType t1972_1_0_0;
extern Il2CppType t471_0_0_0;
extern TypeInfo t1973_TI;
extern Il2CppType t1973_0_0_0;
struct t1972;
const Il2CppTypeDefinitionMetadata t1972_DM = 
{
	&t1973_0_0_0, NULL, NULL, t1972_IOs, &t471_0_0_0, t1972_VT, t1972_VTIGM, NULL};
TypeInfo t1972_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CallbackHandler", "", t1972_MIs, NULL, NULL, NULL, &t1972_TI, NULL, &EmptyCustomAttributesCache, &t1972_0_0_0, &t1972_1_0_0, &t1972_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t1972, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1972), sizeof (t1972), 0, sizeof(methodPointerType), 0, 0, -1, 258, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1973.h"
// Metadata Definition System.Runtime.Serialization.SerializationCallbacks
#include "t1973MD.h"
extern Il2CppType t126_0_0_0;
static ParameterInfo t1973_m10305_ParameterInfos[] = 
{
	{"type", 0, 134222905, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10305_MI = 
{
	".ctor", (methodPointerType)&m10305, &t1973_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1973_m10305_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4226, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10306_MI = 
{
	".cctor", (methodPointerType)&m10306, &t1973_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4227, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10307_MI = 
{
	"get_HasSerializedCallbacks", (methodPointerType)&m10307, &t1973_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4228, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10308_MI = 
{
	"get_HasDeserializedCallbacks", (methodPointerType)&m10308, &t1973_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4229, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1973_m10309_ParameterInfos[] = 
{
	{"type", 0, 134222906, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"attr", 1, 134222907, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1170_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10309_MI = 
{
	"GetMethodsByAttribute", (methodPointerType)&m10309, &t1973_TI, &t1170_0_0_0, RuntimeInvoker_t9_t9_t9, t1973_m10309_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 4230, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1170_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1973_m10310_ParameterInfos[] = 
{
	{"list", 0, 134222908, &EmptyCustomAttributesCache, &t1170_0_0_0},
	{"target", 1, 134222909, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"context", 2, 134222910, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10310_MI = 
{
	"Invoke", (methodPointerType)&m10310, &t1973_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t1101, t1973_m10310_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4231, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1973_m10311_ParameterInfos[] = 
{
	{"target", 0, 134222911, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"contex", 1, 134222912, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10311_MI = 
{
	"RaiseOnSerializing", (methodPointerType)&m10311, &t1973_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1973_m10311_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4232, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1973_m10312_ParameterInfos[] = 
{
	{"target", 0, 134222913, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"contex", 1, 134222914, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10312_MI = 
{
	"RaiseOnSerialized", (methodPointerType)&m10312, &t1973_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1973_m10312_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4233, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1973_m10313_ParameterInfos[] = 
{
	{"target", 0, 134222915, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"contex", 1, 134222916, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10313_MI = 
{
	"RaiseOnDeserializing", (methodPointerType)&m10313, &t1973_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1973_m10313_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4234, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1973_m10314_ParameterInfos[] = 
{
	{"target", 0, 134222917, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"contex", 1, 134222918, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10314_MI = 
{
	"RaiseOnDeserialized", (methodPointerType)&m10314, &t1973_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1973_m10314_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4235, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1973_m10315_ParameterInfos[] = 
{
	{"t", 0, 134222919, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1973_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10315_MI = 
{
	"GetSerializationCallbacks", (methodPointerType)&m10315, &t1973_TI, &t1973_0_0_0, RuntimeInvoker_t9_t9, t1973_m10315_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4236, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1973_MIs[] =
{
	&m10305_MI,
	&m10306_MI,
	&m10307_MI,
	&m10308_MI,
	&m10309_MI,
	&m10310_MI,
	&m10311_MI,
	&m10312_MI,
	&m10313_MI,
	&m10314_MI,
	&m10315_MI,
	NULL
};
extern Il2CppType t1170_0_0_33;
FieldInfo t1973_f0_FieldInfo = 
{
	"onSerializingList", &t1170_0_0_33, &t1973_TI, offsetof(t1973, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1170_0_0_33;
FieldInfo t1973_f1_FieldInfo = 
{
	"onSerializedList", &t1170_0_0_33, &t1973_TI, offsetof(t1973, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1170_0_0_33;
FieldInfo t1973_f2_FieldInfo = 
{
	"onDeserializingList", &t1170_0_0_33, &t1973_TI, offsetof(t1973, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1170_0_0_33;
FieldInfo t1973_f3_FieldInfo = 
{
	"onDeserializedList", &t1170_0_0_33, &t1973_TI, offsetof(t1973, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_17;
FieldInfo t1973_f4_FieldInfo = 
{
	"cache", &t1158_0_0_17, &t1973_TI, offsetof(t1973_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_17;
FieldInfo t1973_f5_FieldInfo = 
{
	"cache_lock", &t9_0_0_17, &t1973_TI, offsetof(t1973_SFs, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1973_FIs[] =
{
	&t1973_f0_FieldInfo,
	&t1973_f1_FieldInfo,
	&t1973_f2_FieldInfo,
	&t1973_f3_FieldInfo,
	&t1973_f4_FieldInfo,
	&t1973_f5_FieldInfo,
	NULL
};
extern MethodInfo m10307_MI;
static PropertyInfo t1973____HasSerializedCallbacks_PropertyInfo = 
{
	&t1973_TI, "HasSerializedCallbacks", &m10307_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10308_MI;
static PropertyInfo t1973____HasDeserializedCallbacks_PropertyInfo = 
{
	&t1973_TI, "HasDeserializedCallbacks", &m10308_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1973_PIs[] =
{
	&t1973____HasSerializedCallbacks_PropertyInfo,
	&t1973____HasDeserializedCallbacks_PropertyInfo,
	NULL
};
static const Il2CppType* t1973_TI__nestedTypes[1] =
{
	&t1972_0_0_0,
};
static Il2CppMethodReference t1973_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1973_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1973_1_0_0;
struct t1973;
const Il2CppTypeDefinitionMetadata t1973_DM = 
{
	NULL, t1973_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t1973_VT, t1973_VTIGM, NULL};
TypeInfo t1973_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationCallbacks", "System.Runtime.Serialization", t1973_MIs, t1973_PIs, t1973_FIs, NULL, &t1973_TI, NULL, &EmptyCustomAttributesCache, &t1973_0_0_0, &t1973_1_0_0, &t1973_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1973), sizeof (t1973), 0, -1, sizeof(t1973_SFs), 0, -1, 1048832, 0, 0, false, false, false, false, false, false, false, false, true, false, 11, 2, 6, 0, 1, 4, 0, 0};
#include "t1974.h"
// Metadata Definition System.Runtime.Serialization.SerializationEntry
extern TypeInfo t1974_TI;
#include "t1974MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1974_m10316_ParameterInfos[] = 
{
	{"name", 0, 134222927, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"type", 1, 134222928, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"value", 2, 134222929, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10316_MI = 
{
	".ctor", (methodPointerType)&m10316, &t1974_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1974_m10316_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 3, false, false, 4241, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10317_MI = 
{
	"get_Name", (methodPointerType)&m10317, &t1974_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4242, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10318_MI = 
{
	"get_ObjectType", (methodPointerType)&m10318, &t1974_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4243, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10319_MI = 
{
	"get_Value", (methodPointerType)&m10319, &t1974_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4244, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1974_MIs[] =
{
	&m10316_MI,
	&m10317_MI,
	&m10318_MI,
	&m10319_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1974_f0_FieldInfo = 
{
	"name", &t2_0_0_1, &t1974_TI, offsetof(t1974, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1974_f1_FieldInfo = 
{
	"objectType", &t126_0_0_1, &t1974_TI, offsetof(t1974, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t1974_f2_FieldInfo = 
{
	"value", &t9_0_0_1, &t1974_TI, offsetof(t1974, f2) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1974_FIs[] =
{
	&t1974_f0_FieldInfo,
	&t1974_f1_FieldInfo,
	&t1974_f2_FieldInfo,
	NULL
};
extern MethodInfo m10317_MI;
static PropertyInfo t1974____Name_PropertyInfo = 
{
	&t1974_TI, "Name", &m10317_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10318_MI;
static PropertyInfo t1974____ObjectType_PropertyInfo = 
{
	&t1974_TI, "ObjectType", &m10318_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10319_MI;
static PropertyInfo t1974____Value_PropertyInfo = 
{
	&t1974_TI, "Value", &m10319_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1974_PIs[] =
{
	&t1974____Name_PropertyInfo,
	&t1974____ObjectType_PropertyInfo,
	&t1974____Value_PropertyInfo,
	NULL
};
extern MethodInfo m680_MI;
extern MethodInfo m681_MI;
extern MethodInfo m682_MI;
static Il2CppMethodReference t1974_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1974_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1974_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
extern Il2CppType t117_0_0_0;
extern CustomAttributesCache t1974__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1974_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1974_VT, t1974_VTIGM, NULL};
TypeInfo t1974_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationEntry", "System.Runtime.Serialization", t1974_MIs, t1974_PIs, t1974_FIs, NULL, &t1974_TI, NULL, &t1974__CustomAttributeCache, &t1974_0_0_0, &t1974_1_0_0, &t1974_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1974)+ sizeof (Il2CppObject), sizeof (t1974)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, false, 4, 3, 3, 0, 0, 4, 0, 0};
#include "t1342.h"
// Metadata Definition System.Runtime.Serialization.SerializationException
extern TypeInfo t1342_TI;
#include "t1342MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10320_MI = 
{
	".ctor", (methodPointerType)&m10320, &t1342_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4245, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1342_m5732_ParameterInfos[] = 
{
	{"message", 0, 134222930, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5732_MI = 
{
	".ctor", (methodPointerType)&m5732, &t1342_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1342_m5732_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4246, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1342_m10321_ParameterInfos[] = 
{
	{"info", 0, 134222931, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134222932, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10321_MI = 
{
	".ctor", (methodPointerType)&m10321, &t1342_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1342_m10321_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 4247, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1342_MIs[] =
{
	&m10320_MI,
	&m5732_MI,
	&m10321_MI,
	NULL
};
static Il2CppMethodReference t1342_VT[] =
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
};
static Il2CppInterfaceOffsetPair t1342_IOs[] = 
{
	{ &t623_0_0_0, 4},
	{ &t948_0_0_0, 5},
};
void t1342_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1342__CustomAttributeCache = {
1,
NULL,
&t1342_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1342_0_0_0;
extern Il2CppType t1342_1_0_0;
struct t1342;
extern CustomAttributesCache t1342__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1342_DM = 
{
	NULL, NULL, NULL, t1342_IOs, &t1369_0_0_0, t1342_VT, t1342_VTIGM, NULL};
TypeInfo t1342_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationException", "System.Runtime.Serialization", t1342_MIs, NULL, NULL, NULL, &t1342_TI, NULL, &t1342__CustomAttributeCache, &t1342_0_0_0, &t1342_1_0_0, &t1342_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1342), sizeof (t1342), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1100.h"
// Metadata Definition System.Runtime.Serialization.SerializationInfo
extern TypeInfo t1100_TI;
#include "t1100MD.h"
extern Il2CppType t126_0_0_0;
extern Il2CppType t1975_0_0_0;
static ParameterInfo t1100_m10322_ParameterInfos[] = 
{
	{"type", 0, 134222933, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"converter", 1, 134222934, &EmptyCustomAttributesCache, &t1975_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1100__CustomAttributeCache_m10322;
MethodInfo m10322_MI = 
{
	".ctor", (methodPointerType)&m10322, &t1100_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1100_m10322_ParameterInfos, &t1100__CustomAttributeCache_m10322, 6278, 0, 255, 2, false, false, 4248, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10323_MI = 
{
	"get_AssemblyName", (methodPointerType)&m10323, &t1100_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4249, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10324_MI = 
{
	"get_FullTypeName", (methodPointerType)&m10324, &t1100_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4250, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10325_MI = 
{
	"get_MemberCount", (methodPointerType)&m10325, &t1100_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4251, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1100_m5728_ParameterInfos[] = 
{
	{"name", 0, 134222935, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222936, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"type", 2, 134222937, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5728_MI = 
{
	"AddValue", (methodPointerType)&m5728, &t1100_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1100_m5728_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4252, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1100_m5731_ParameterInfos[] = 
{
	{"name", 0, 134222938, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"type", 1, 134222939, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5731_MI = 
{
	"GetValue", (methodPointerType)&m5731, &t1100_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1100_m5731_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4253, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1100_m10326_ParameterInfos[] = 
{
	{"type", 0, 134222940, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10326_MI = 
{
	"SetType", (methodPointerType)&m10326, &t1100_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1100_m10326_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4254, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1976_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10327_MI = 
{
	"GetEnumerator", (methodPointerType)&m10327, &t1100_TI, &t1976_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4255, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t334_0_0_0;
extern Il2CppType t334_0_0_0;
static ParameterInfo t1100_m10328_ParameterInfos[] = 
{
	{"name", 0, 134222941, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222942, &EmptyCustomAttributesCache, &t334_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m10328_MI = 
{
	"AddValue", (methodPointerType)&m10328, &t1100_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t334, t1100_m10328_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4256, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1100_m5730_ParameterInfos[] = 
{
	{"name", 0, 134222943, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222944, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5730_MI = 
{
	"AddValue", (methodPointerType)&m5730, &t1100_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1100_m5730_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4257, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1100_m5729_ParameterInfos[] = 
{
	{"name", 0, 134222945, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222946, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m5729_MI = 
{
	"AddValue", (methodPointerType)&m5729, &t1100_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1100_m5729_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4258, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t270_0_0_0;
extern Il2CppType t270_0_0_0;
static ParameterInfo t1100_m10329_ParameterInfos[] = 
{
	{"name", 0, 134222947, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222948, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t270 (MethodInfo* method, void* obj, void** args);
MethodInfo m10329_MI = 
{
	"AddValue", (methodPointerType)&m10329, &t1100_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t270, t1100_m10329_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4259, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t1100_m10330_ParameterInfos[] = 
{
	{"name", 0, 134222949, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222950, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m10330_MI = 
{
	"AddValue", (methodPointerType)&m10330, &t1100_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t123, t1100_m10330_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4260, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t299_0_0_0;
static ParameterInfo t1100_m5744_ParameterInfos[] = 
{
	{"name", 0, 134222951, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222952, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m5744_MI = 
{
	"AddValue", (methodPointerType)&m5744, &t1100_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t299, t1100_m5744_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4261, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t889_0_0_0;
extern Il2CppType t889_0_0_0;
static ParameterInfo t1100_m10331_ParameterInfos[] = 
{
	{"name", 0, 134222953, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222954, &EmptyCustomAttributesCache, &t889_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t299 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1100__CustomAttributeCache_m10331;
MethodInfo m10331_MI = 
{
	"AddValue", (methodPointerType)&m10331, &t1100_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t299, t1100_m10331_ParameterInfos, &t1100__CustomAttributeCache_m10331, 134, 0, 255, 2, false, false, 4262, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1100_m5743_ParameterInfos[] = 
{
	{"name", 0, 134222955, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222956, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5743_MI = 
{
	"AddValue", (methodPointerType)&m5743, &t1100_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1100_m5743_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4263, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1100_m5733_ParameterInfos[] = 
{
	{"name", 0, 134222957, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5733_MI = 
{
	"GetBoolean", (methodPointerType)&m5733, &t1100_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1100_m5733_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4264, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1100_m10332_ParameterInfos[] = 
{
	{"name", 0, 134222958, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t334_0_0_0;
extern void* RuntimeInvoker_t334_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10332_MI = 
{
	"GetInt16", (methodPointerType)&m10332, &t1100_TI, &t334_0_0_0, RuntimeInvoker_t334_t9, t1100_m10332_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4265, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1100_m5742_ParameterInfos[] = 
{
	{"name", 0, 134222959, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5742_MI = 
{
	"GetInt32", (methodPointerType)&m5742, &t1100_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1100_m5742_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4266, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1100_m5741_ParameterInfos[] = 
{
	{"name", 0, 134222960, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t299_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5741_MI = 
{
	"GetInt64", (methodPointerType)&m5741, &t1100_TI, &t299_0_0_0, RuntimeInvoker_t299_t9, t1100_m5741_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4267, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1100_m5740_ParameterInfos[] = 
{
	{"name", 0, 134222961, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5740_MI = 
{
	"GetString", (methodPointerType)&m5740, &t1100_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1100_m5740_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4268, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1100_MIs[] =
{
	&m10322_MI,
	&m10323_MI,
	&m10324_MI,
	&m10325_MI,
	&m5728_MI,
	&m5731_MI,
	&m10326_MI,
	&m10327_MI,
	&m10328_MI,
	&m5730_MI,
	&m5729_MI,
	&m10329_MI,
	&m10330_MI,
	&m5744_MI,
	&m10331_MI,
	&m5743_MI,
	&m5733_MI,
	&m10332_MI,
	&m5742_MI,
	&m5741_MI,
	&m5740_MI,
	NULL
};
extern Il2CppType t1158_0_0_1;
FieldInfo t1100_f0_FieldInfo = 
{
	"serialized", &t1158_0_0_1, &t1100_TI, offsetof(t1100, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1170_0_0_1;
FieldInfo t1100_f1_FieldInfo = 
{
	"values", &t1170_0_0_1, &t1100_TI, offsetof(t1100, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1100_f2_FieldInfo = 
{
	"assemblyName", &t2_0_0_1, &t1100_TI, offsetof(t1100, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1100_f3_FieldInfo = 
{
	"fullTypeName", &t2_0_0_1, &t1100_TI, offsetof(t1100, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1975_0_0_1;
FieldInfo t1100_f4_FieldInfo = 
{
	"converter", &t1975_0_0_1, &t1100_TI, offsetof(t1100, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1100_FIs[] =
{
	&t1100_f0_FieldInfo,
	&t1100_f1_FieldInfo,
	&t1100_f2_FieldInfo,
	&t1100_f3_FieldInfo,
	&t1100_f4_FieldInfo,
	NULL
};
extern MethodInfo m10323_MI;
static PropertyInfo t1100____AssemblyName_PropertyInfo = 
{
	&t1100_TI, "AssemblyName", &m10323_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10324_MI;
static PropertyInfo t1100____FullTypeName_PropertyInfo = 
{
	&t1100_TI, "FullTypeName", &m10324_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10325_MI;
static PropertyInfo t1100____MemberCount_PropertyInfo = 
{
	&t1100_TI, "MemberCount", &m10325_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1100_PIs[] =
{
	&t1100____AssemblyName_PropertyInfo,
	&t1100____FullTypeName_PropertyInfo,
	&t1100____MemberCount_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1100_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1100_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1100_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1100_CustomAttributesCacheGenerator_m10322(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1152 * tmp;
		tmp = (t1152 *)il2cpp_codegen_object_new (&t1152_TI);
		m4801(tmp, false, &m4801_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1100_CustomAttributesCacheGenerator_m10331(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1152 * tmp;
		tmp = (t1152 *)il2cpp_codegen_object_new (&t1152_TI);
		m4801(tmp, false, &m4801_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1100__CustomAttributeCache = {
1,
NULL,
&t1100_CustomAttributesCacheGenerator
};
CustomAttributesCache t1100__CustomAttributeCache_m10322 = {
1,
NULL,
&t1100_CustomAttributesCacheGenerator_m10322
};
CustomAttributesCache t1100__CustomAttributeCache_m10331 = {
1,
NULL,
&t1100_CustomAttributesCacheGenerator_m10331
};
extern Il2CppImage g_mscorlib_dll_Image;
struct t1100;
extern CustomAttributesCache t1100__CustomAttributeCache;
extern CustomAttributesCache t1100__CustomAttributeCache_m10322;
extern CustomAttributesCache t1100__CustomAttributeCache_m10331;
const Il2CppTypeDefinitionMetadata t1100_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1100_VT, t1100_VTIGM, NULL};
TypeInfo t1100_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationInfo", "System.Runtime.Serialization", t1100_MIs, t1100_PIs, t1100_FIs, NULL, &t1100_TI, NULL, &t1100__CustomAttributeCache, &t1100_0_0_0, &t1100_1_0_0, &t1100_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1100), sizeof (t1100), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 21, 3, 5, 0, 0, 4, 0, 0};
#include "t1976.h"
// Metadata Definition System.Runtime.Serialization.SerializationInfoEnumerator
extern TypeInfo t1976_TI;
#include "t1976MD.h"
extern Il2CppType t1170_0_0_0;
static ParameterInfo t1976_m10333_ParameterInfos[] = 
{
	{"list", 0, 134222962, &EmptyCustomAttributesCache, &t1170_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10333_MI = 
{
	".ctor", (methodPointerType)&m10333, &t1976_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1976_m10333_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 4269, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10334_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10334, &t1976_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, false, 4270, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1974_0_0_0;
extern void* RuntimeInvoker_t1974 (MethodInfo* method, void* obj, void** args);
MethodInfo m10335_MI = 
{
	"get_Current", (methodPointerType)&m10335, &t1976_TI, &t1974_0_0_0, RuntimeInvoker_t1974, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4271, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10336_MI = 
{
	"get_Name", (methodPointerType)&m10336, &t1976_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4272, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10337_MI = 
{
	"get_ObjectType", (methodPointerType)&m10337, &t1976_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4273, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10338_MI = 
{
	"get_Value", (methodPointerType)&m10338, &t1976_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4274, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10339_MI = 
{
	"MoveNext", (methodPointerType)&m10339, &t1976_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 4275, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1976_MIs[] =
{
	&m10333_MI,
	&m10334_MI,
	&m10335_MI,
	&m10336_MI,
	&m10337_MI,
	&m10338_MI,
	&m10339_MI,
	NULL
};
extern Il2CppType t76_0_0_1;
FieldInfo t1976_f0_FieldInfo = 
{
	"enumerator", &t76_0_0_1, &t1976_TI, offsetof(t1976, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1976_FIs[] =
{
	&t1976_f0_FieldInfo,
	NULL
};
extern MethodInfo m10334_MI;
static PropertyInfo t1976____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1976_TI, "System.Collections.IEnumerator.Current", &m10334_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10335_MI;
static PropertyInfo t1976____Current_PropertyInfo = 
{
	&t1976_TI, "Current", &m10335_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10336_MI;
static PropertyInfo t1976____Name_PropertyInfo = 
{
	&t1976_TI, "Name", &m10336_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10337_MI;
static PropertyInfo t1976____ObjectType_PropertyInfo = 
{
	&t1976_TI, "ObjectType", &m10337_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10338_MI;
static PropertyInfo t1976____Value_PropertyInfo = 
{
	&t1976_TI, "Value", &m10338_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1976_PIs[] =
{
	&t1976____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1976____Current_PropertyInfo,
	&t1976____Name_PropertyInfo,
	&t1976____ObjectType_PropertyInfo,
	&t1976____Value_PropertyInfo,
	NULL
};
extern MethodInfo m10339_MI;
static Il2CppMethodReference t1976_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10334_MI,
	&m10339_MI,
};
static bool t1976_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t76_0_0_0;
static const Il2CppType* t1976_ITIs[] = 
{
	&t76_0_0_0,
};
static Il2CppInterfaceOffsetPair t1976_IOs[] = 
{
	{ &t76_0_0_0, 4},
};
void t1976_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, t1976_ITIs, t1976_IOs, &t9_0_0_0, t1976_VT, t1976_VTIGM, NULL};
TypeInfo t1976_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationInfoEnumerator", "System.Runtime.Serialization", t1976_MIs, t1976_PIs, t1976_FIs, NULL, &t1976_TI, NULL, &t1976__CustomAttributeCache, &t1976_0_0_0, &t1976_1_0_0, &t1976_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1976), sizeof (t1976), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 7, 5, 1, 0, 0, 6, 1, 1};
#include "t1977.h"
// Metadata Definition System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey3
extern TypeInfo t1977_TI;
#include "t1977MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10340_MI = 
{
	".ctor", (methodPointerType)&m10340, &t1977_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4279, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1977_m10341_ParameterInfos[] = 
{
	{"ctx", 0, 134222965, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10341_MI = 
{
	"<>m__2", (methodPointerType)&m10341, &t1977_TI, &t122_0_0_0, RuntimeInvoker_t122_t1101, t1977_m10341_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4280, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1977_MIs[] =
{
	&m10340_MI,
	&m10341_MI,
	NULL
};
extern Il2CppType t1973_0_0_3;
FieldInfo t1977_f0_FieldInfo = 
{
	"sc", &t1973_0_0_3, &t1977_TI, offsetof(t1977, f0), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_3;
FieldInfo t1977_f1_FieldInfo = 
{
	"obj", &t9_0_0_3, &t1977_TI, offsetof(t1977, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1977_FIs[] =
{
	&t1977_f0_FieldInfo,
	&t1977_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1977_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1977_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1977_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
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
extern TypeInfo t1957_TI;
extern Il2CppType t1957_0_0_0;
struct t1977;
extern CustomAttributesCache t1977__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1977_DM = 
{
	&t1957_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t1977_VT, t1977_VTIGM, NULL};
TypeInfo t1977_TI = 
{
	&g_mscorlib_dll_Image, NULL, "<RegisterObject>c__AnonStorey3", "", t1977_MIs, NULL, t1977_FIs, NULL, &t1977_TI, NULL, &t1977__CustomAttributeCache, &t1977_0_0_0, &t1977_1_0_0, &t1977_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1977), sizeof (t1977), 0, -1, 0, 0, -1, 1048835, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 2, 0, 0, 4, 0, 0};
#include "t1957.h"
// Metadata Definition System.Runtime.Serialization.SerializationObjectManager
#include "t1957MD.h"
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1957_m10342_ParameterInfos[] = 
{
	{"context", 0, 134222963, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10342_MI = 
{
	".ctor", (methodPointerType)&m10342, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t1101, t1957_m10342_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4276, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1957_m10343_ParameterInfos[] = 
{
	{"obj", 0, 134222964, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10343_MI = 
{
	"RegisterObject", (methodPointerType)&m10343, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1957_m10343_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4277, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10344_MI = 
{
	"RaiseOnSerializedEvent", (methodPointerType)&m10344, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4278, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1957_MIs[] =
{
	&m10342_MI,
	&m10343_MI,
	&m10344_MI,
	NULL
};
extern Il2CppType t1101_0_0_33;
FieldInfo t1957_f0_FieldInfo = 
{
	"context", &t1101_0_0_33, &t1957_TI, offsetof(t1957, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_33;
FieldInfo t1957_f1_FieldInfo = 
{
	"seen", &t1158_0_0_33, &t1957_TI, offsetof(t1957, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1972_0_0_1;
FieldInfo t1957_f2_FieldInfo = 
{
	"callbacks", &t1972_0_0_1, &t1957_TI, offsetof(t1957, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1957_FIs[] =
{
	&t1957_f0_FieldInfo,
	&t1957_f1_FieldInfo,
	&t1957_f2_FieldInfo,
	NULL
};
static const Il2CppType* t1957_TI__nestedTypes[1] =
{
	&t1977_0_0_0,
};
static Il2CppMethodReference t1957_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1957_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1957_1_0_0;
struct t1957;
const Il2CppTypeDefinitionMetadata t1957_DM = 
{
	NULL, t1957_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t1957_VT, t1957_VTIGM, NULL};
TypeInfo t1957_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationObjectManager", "System.Runtime.Serialization", t1957_MIs, NULL, t1957_FIs, NULL, &t1957_TI, NULL, &EmptyCustomAttributesCache, &t1957_0_0_0, &t1957_1_0_0, &t1957_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1957), sizeof (t1957), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 3, 0, 1, 4, 0, 0};
#include "t1101.h"
// Metadata Definition System.Runtime.Serialization.StreamingContext
extern TypeInfo t1101_TI;
#include "t1101MD.h"
extern Il2CppType t1978_0_0_0;
extern Il2CppType t1978_0_0_0;
static ParameterInfo t1101_m10345_ParameterInfos[] = 
{
	{"state", 0, 134222966, &EmptyCustomAttributesCache, &t1978_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10345_MI = 
{
	".ctor", (methodPointerType)&m10345, &t1101_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1101_m10345_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4281, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1978_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1101_m10346_ParameterInfos[] = 
{
	{"state", 0, 134222967, &EmptyCustomAttributesCache, &t1978_0_0_0},
	{"additional", 1, 134222968, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10346_MI = 
{
	".ctor", (methodPointerType)&m10346, &t1101_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9, t1101_m10346_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4282, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10347_MI = 
{
	"get_Context", (methodPointerType)&m10347, &t1101_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4283, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1978_0_0_0;
extern void* RuntimeInvoker_t1978 (MethodInfo* method, void* obj, void** args);
MethodInfo m10348_MI = 
{
	"get_State", (methodPointerType)&m10348, &t1101_TI, &t1978_0_0_0, RuntimeInvoker_t1978, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4284, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1101_m10349_ParameterInfos[] = 
{
	{"obj", 0, 134222969, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10349_MI = 
{
	"Equals", (methodPointerType)&m10349, &t1101_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1101_m10349_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4285, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10350_MI = 
{
	"GetHashCode", (methodPointerType)&m10350, &t1101_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4286, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1101_MIs[] =
{
	&m10345_MI,
	&m10346_MI,
	&m10347_MI,
	&m10348_MI,
	&m10349_MI,
	&m10350_MI,
	NULL
};
extern Il2CppType t1978_0_0_1;
FieldInfo t1101_f0_FieldInfo = 
{
	"state", &t1978_0_0_1, &t1101_TI, offsetof(t1101, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t1101_f1_FieldInfo = 
{
	"additional", &t9_0_0_1, &t1101_TI, offsetof(t1101, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1101_FIs[] =
{
	&t1101_f0_FieldInfo,
	&t1101_f1_FieldInfo,
	NULL
};
extern MethodInfo m10347_MI;
static PropertyInfo t1101____Context_PropertyInfo = 
{
	&t1101_TI, "Context", &m10347_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10348_MI;
static PropertyInfo t1101____State_PropertyInfo = 
{
	&t1101_TI, "State", &m10348_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1101_PIs[] =
{
	&t1101____Context_PropertyInfo,
	&t1101____State_PropertyInfo,
	NULL
};
extern MethodInfo m10349_MI;
extern MethodInfo m10350_MI;
static Il2CppMethodReference t1101_VT[] =
{
	&m10349_MI,
	&m646_MI,
	&m10350_MI,
	&m682_MI,
};
static bool t1101_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1101_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1101__CustomAttributeCache = {
1,
NULL,
&t1101_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1101_1_0_0;
extern CustomAttributesCache t1101__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1101_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1101_VT, t1101_VTIGM, NULL};
TypeInfo t1101_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamingContext", "System.Runtime.Serialization", t1101_MIs, t1101_PIs, t1101_FIs, NULL, &t1101_TI, NULL, &t1101__CustomAttributeCache, &t1101_0_0_0, &t1101_1_0_0, &t1101_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1101)+ sizeof (Il2CppObject), sizeof (t1101)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, 0, true, false, false, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t1978.h"
// Metadata Definition System.Runtime.Serialization.StreamingContextStates
extern TypeInfo t1978_TI;
#include "t1978MD.h"
static MethodInfo* t1978_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1978_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1978_TI, offsetof(t1978, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1978_0_0_32854;
FieldInfo t1978_f2_FieldInfo = 
{
	"CrossProcess", &t1978_0_0_32854, &t1978_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1978_0_0_32854;
FieldInfo t1978_f3_FieldInfo = 
{
	"CrossMachine", &t1978_0_0_32854, &t1978_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1978_0_0_32854;
FieldInfo t1978_f4_FieldInfo = 
{
	"File", &t1978_0_0_32854, &t1978_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1978_0_0_32854;
FieldInfo t1978_f5_FieldInfo = 
{
	"Persistence", &t1978_0_0_32854, &t1978_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1978_0_0_32854;
FieldInfo t1978_f6_FieldInfo = 
{
	"Remoting", &t1978_0_0_32854, &t1978_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1978_0_0_32854;
FieldInfo t1978_f7_FieldInfo = 
{
	"Other", &t1978_0_0_32854, &t1978_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1978_0_0_32854;
FieldInfo t1978_f8_FieldInfo = 
{
	"Clone", &t1978_0_0_32854, &t1978_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1978_0_0_32854;
FieldInfo t1978_f9_FieldInfo = 
{
	"CrossAppDomain", &t1978_0_0_32854, &t1978_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1978_0_0_32854;
FieldInfo t1978_f10_FieldInfo = 
{
	"All", &t1978_0_0_32854, &t1978_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1978_FIs[] =
{
	&t1978_f1_FieldInfo,
	&t1978_f2_FieldInfo,
	&t1978_f3_FieldInfo,
	&t1978_f4_FieldInfo,
	&t1978_f5_FieldInfo,
	&t1978_f6_FieldInfo,
	&t1978_f7_FieldInfo,
	&t1978_f8_FieldInfo,
	&t1978_f9_FieldInfo,
	&t1978_f10_FieldInfo,
	NULL
};
static const int32_t t1978_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1978_f2_DefaultValue = 
{
	&t1978_f2_FieldInfo, { (char*)&t1978_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1978_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1978_f3_DefaultValue = 
{
	&t1978_f3_FieldInfo, { (char*)&t1978_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1978_f4_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1978_f4_DefaultValue = 
{
	&t1978_f4_FieldInfo, { (char*)&t1978_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1978_f5_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1978_f5_DefaultValue = 
{
	&t1978_f5_FieldInfo, { (char*)&t1978_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1978_f6_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1978_f6_DefaultValue = 
{
	&t1978_f6_FieldInfo, { (char*)&t1978_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1978_f7_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1978_f7_DefaultValue = 
{
	&t1978_f7_FieldInfo, { (char*)&t1978_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1978_f8_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1978_f8_DefaultValue = 
{
	&t1978_f8_FieldInfo, { (char*)&t1978_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1978_f9_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1978_f9_DefaultValue = 
{
	&t1978_f9_FieldInfo, { (char*)&t1978_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1978_f10_DefaultValueData = 255;
static Il2CppFieldDefaultValueEntry t1978_f10_DefaultValue = 
{
	&t1978_f10_FieldInfo, { (char*)&t1978_f10_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1978_FDVs[] = 
{
	&t1978_f2_DefaultValue,
	&t1978_f3_DefaultValue,
	&t1978_f4_DefaultValue,
	&t1978_f5_DefaultValue,
	&t1978_f6_DefaultValue,
	&t1978_f7_DefaultValue,
	&t1978_f8_DefaultValue,
	&t1978_f9_DefaultValue,
	&t1978_f10_DefaultValue,
	NULL
};
static Il2CppMethodReference t1978_VT[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1978_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern TypeInfo t615_TI;
#include "t615.h"
#include "t615MD.h"
extern MethodInfo m2991_MI;
void t1978_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
CustomAttributesCache t1978__CustomAttributeCache = {
2,
NULL,
&t1978_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1978_1_0_0;
extern CustomAttributesCache t1978__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1978_DM = 
{
	NULL, NULL, NULL, t1978_IOs, &t8_0_0_0, t1978_VT, t1978_VTIGM, NULL};
TypeInfo t1978_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamingContextStates", "System.Runtime.Serialization", t1978_MIs, NULL, t1978_FIs, NULL, &t125_TI, NULL, &t1978__CustomAttributeCache, &t1978_0_0_0, &t1978_1_0_0, &t1978_DM, NULL, NULL, NULL, t1978_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1978)+ sizeof (Il2CppObject), sizeof (t1978)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 10, 0, 0, 23, 0, 3};
#include "t1182.h"
// Metadata Definition System.Security.Cryptography.X509Certificates.X509Certificate
extern TypeInfo t1182_TI;
#include "t1182MD.h"
extern Il2CppType t730_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1182_m10351_ParameterInfos[] = 
{
	{"data", 0, 134222970, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"dates", 1, 134222971, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10351_MI = 
{
	".ctor", (methodPointerType)&m10351, &t1182_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1182_m10351_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 4287, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1182_m7006_ParameterInfos[] = 
{
	{"data", 0, 134222972, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7006_MI = 
{
	".ctor", (methodPointerType)&m7006, &t1182_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1182_m7006_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4288, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m5825_MI = 
{
	".ctor", (methodPointerType)&m5825, &t1182_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4289, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1182_m10352_ParameterInfos[] = 
{
	{"info", 0, 134222973, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134222974, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10352_MI = 
{
	".ctor", (methodPointerType)&m10352, &t1182_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1182_m10352_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4290, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1182_m6042_ParameterInfos[] = 
{
	{"sender", 0, 134222975, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6042_MI = 
{
	"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", (methodPointerType)&m6042, &t1182_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1182_m6042_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 1, false, false, 4291, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1182_m6041_ParameterInfos[] = 
{
	{"info", 0, 134222976, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134222977, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m6041_MI = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData", (methodPointerType)&m6041, &t1182_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1182_m6041_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 2, false, false, 4292, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1182_m10353_ParameterInfos[] = 
{
	{"data", 0, 134222978, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10353_MI = 
{
	"tostr", (methodPointerType)&m10353, &t1182_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1182_m10353_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4293, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1182_0_0_0;
extern Il2CppType t1182_0_0_0;
static ParameterInfo t1182_m5849_ParameterInfos[] = 
{
	{"other", 0, 134222979, &EmptyCustomAttributesCache, &t1182_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5849_MI = 
{
	"Equals", (methodPointerType)&m5849, &t1182_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1182_m5849_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 1, false, false, 4294, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6043_MI = 
{
	"GetCertHash", (methodPointerType)&m6043, &t1182_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 4295, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5823_MI = 
{
	"GetCertHashString", (methodPointerType)&m5823, &t1182_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 8, 0, false, false, 4296, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6044_MI = 
{
	"GetEffectiveDateString", (methodPointerType)&m6044, &t1182_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 9, 0, false, false, 4297, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6045_MI = 
{
	"GetExpirationDateString", (methodPointerType)&m6045, &t1182_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 10, 0, false, false, 4298, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6040_MI = 
{
	"GetHashCode", (methodPointerType)&m6040, &t1182_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4299, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1182__CustomAttributeCache_m6046;
MethodInfo m6046_MI = 
{
	"GetIssuerName", (methodPointerType)&m6046, &t1182_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &t1182__CustomAttributeCache_m6046, 454, 0, 11, 0, false, false, 4300, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1182__CustomAttributeCache_m6047;
MethodInfo m6047_MI = 
{
	"GetName", (methodPointerType)&m6047, &t1182_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &t1182__CustomAttributeCache_m6047, 454, 0, 12, 0, false, false, 4301, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6048_MI = 
{
	"GetPublicKey", (methodPointerType)&m6048, &t1182_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 13, 0, false, false, 4302, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6049_MI = 
{
	"GetRawCertData", (methodPointerType)&m6049, &t1182_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 14, 0, false, false, 4303, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10354_MI = 
{
	"ToString", (methodPointerType)&m10354, &t1182_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4304, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1182_m5840_ParameterInfos[] = 
{
	{"fVerbose", 0, 134222980, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m5840_MI = 
{
	"ToString", (methodPointerType)&m5840, &t1182_TI, &t2_0_0_0, RuntimeInvoker_t9_t186, t1182_m5840_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 15, 1, false, false, 4305, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5843_MI = 
{
	"get_Issuer", (methodPointerType)&m5843, &t1182_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4306, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5842_MI = 
{
	"get_Subject", (methodPointerType)&m5842, &t1182_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4307, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1182_m6039_ParameterInfos[] = 
{
	{"obj", 0, 134222981, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1182__CustomAttributeCache_m6039;
MethodInfo m6039_MI = 
{
	"Equals", (methodPointerType)&m6039, &t1182_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1182_m6039_ParameterInfos, &t1182__CustomAttributeCache_m6039, 198, 0, 0, 1, false, false, 4308, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1229_0_0_0;
extern Il2CppType t1229_0_0_0;
static ParameterInfo t1182_m5837_ParameterInfos[] = 
{
	{"rawData", 0, 134222982, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"password", 1, 134222983, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"keyStorageFlags", 2, 134222984, &EmptyCustomAttributesCache, &t1229_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1182__CustomAttributeCache_m5837;
MethodInfo m5837_MI = 
{
	"Import", (methodPointerType)&m5837, &t1182_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1182_m5837_ParameterInfos, &t1182__CustomAttributeCache_m5837, 454, 0, 16, 3, false, false, 4309, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1182__CustomAttributeCache_m5839;
MethodInfo m5839_MI = 
{
	"Reset", (methodPointerType)&m5839, &t1182_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t1182__CustomAttributeCache_m5839, 454, 0, 17, 0, false, false, 4310, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1182_MIs[] =
{
	&m10351_MI,
	&m7006_MI,
	&m5825_MI,
	&m10352_MI,
	&m6042_MI,
	&m6041_MI,
	&m10353_MI,
	&m5849_MI,
	&m6043_MI,
	&m5823_MI,
	&m6044_MI,
	&m6045_MI,
	&m6040_MI,
	&m6046_MI,
	&m6047_MI,
	&m6048_MI,
	&m6049_MI,
	&m10354_MI,
	&m5840_MI,
	&m5843_MI,
	&m5842_MI,
	&m6039_MI,
	&m5837_MI,
	&m5839_MI,
	NULL
};
extern Il2CppType t1650_0_0_1;
FieldInfo t1182_f0_FieldInfo = 
{
	"x509", &t1650_0_0_1, &t1182_TI, offsetof(t1182, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1182_f1_FieldInfo = 
{
	"hideDates", &t124_0_0_1, &t1182_TI, offsetof(t1182, f1), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t1182_f2_FieldInfo = 
{
	"cachedCertificateHash", &t730_0_0_1, &t1182_TI, offsetof(t1182, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1182_f3_FieldInfo = 
{
	"issuer_name", &t2_0_0_1, &t1182_TI, offsetof(t1182, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1182_f4_FieldInfo = 
{
	"subject_name", &t2_0_0_1, &t1182_TI, offsetof(t1182, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1182_FIs[] =
{
	&t1182_f0_FieldInfo,
	&t1182_f1_FieldInfo,
	&t1182_f2_FieldInfo,
	&t1182_f3_FieldInfo,
	&t1182_f4_FieldInfo,
	NULL
};
extern MethodInfo m5843_MI;
static PropertyInfo t1182____Issuer_PropertyInfo = 
{
	&t1182_TI, "Issuer", &m5843_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5842_MI;
static PropertyInfo t1182____Subject_PropertyInfo = 
{
	&t1182_TI, "Subject", &m5842_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1182_PIs[] =
{
	&t1182____Issuer_PropertyInfo,
	&t1182____Subject_PropertyInfo,
	NULL
};
extern MethodInfo m6039_MI;
extern MethodInfo m6040_MI;
extern MethodInfo m10354_MI;
extern MethodInfo m6041_MI;
extern MethodInfo m6042_MI;
extern MethodInfo m5849_MI;
extern MethodInfo m6043_MI;
extern MethodInfo m5823_MI;
extern MethodInfo m6044_MI;
extern MethodInfo m6045_MI;
extern MethodInfo m6046_MI;
extern MethodInfo m6047_MI;
extern MethodInfo m6048_MI;
extern MethodInfo m6049_MI;
extern MethodInfo m5840_MI;
extern MethodInfo m5837_MI;
extern MethodInfo m5839_MI;
static Il2CppMethodReference t1182_VT[] =
{
	&m6039_MI,
	&m646_MI,
	&m6040_MI,
	&m10354_MI,
	&m6041_MI,
	&m6042_MI,
	&m5849_MI,
	&m6043_MI,
	&m5823_MI,
	&m6044_MI,
	&m6045_MI,
	&m6046_MI,
	&m6047_MI,
	&m6048_MI,
	&m6049_MI,
	&m5840_MI,
	&m5837_MI,
	&m5839_MI,
};
static bool t1182_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1182_ITIs[] = 
{
	&t623_0_0_0,
	&t1106_0_0_0,
};
static Il2CppInterfaceOffsetPair t1182_IOs[] = 
{
	{ &t623_0_0_0, 4},
	{ &t1106_0_0_0, 5},
};
void t1182_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m7849(tmp, il2cpp_codegen_string_new_wrapper("X509ContentType.SerializedCert isn't supported (anywhere in the class)"), &m7849_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t618_TI;
#include "t618.h"
#include "t618MD.h"
extern MethodInfo m2994_MI;
void t1182_CustomAttributesCacheGenerator_m6046(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m2994(tmp, il2cpp_codegen_string_new_wrapper("Use the Issuer property."), &m2994_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1182_CustomAttributesCacheGenerator_m6047(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m2994(tmp, il2cpp_codegen_string_new_wrapper("Use the Subject property."), &m2994_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1182_CustomAttributesCacheGenerator_m6039(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1182_CustomAttributesCacheGenerator_m5837(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1592 * tmp;
		tmp = (t1592 *)il2cpp_codegen_object_new (&t1592_TI);
		m7849(tmp, il2cpp_codegen_string_new_wrapper("missing KeyStorageFlags support"), &m7849_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t1182_CustomAttributesCacheGenerator_m5839(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1182__CustomAttributeCache = {
2,
NULL,
&t1182_CustomAttributesCacheGenerator
};
CustomAttributesCache t1182__CustomAttributeCache_m6046 = {
1,
NULL,
&t1182_CustomAttributesCacheGenerator_m6046
};
CustomAttributesCache t1182__CustomAttributeCache_m6047 = {
1,
NULL,
&t1182_CustomAttributesCacheGenerator_m6047
};
CustomAttributesCache t1182__CustomAttributeCache_m6039 = {
1,
NULL,
&t1182_CustomAttributesCacheGenerator_m6039
};
CustomAttributesCache t1182__CustomAttributeCache_m5837 = {
2,
NULL,
&t1182_CustomAttributesCacheGenerator_m5837
};
CustomAttributesCache t1182__CustomAttributeCache_m5839 = {
1,
NULL,
&t1182_CustomAttributesCacheGenerator_m5839
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1182_1_0_0;
struct t1182;
extern CustomAttributesCache t1182__CustomAttributeCache;
extern CustomAttributesCache t1182__CustomAttributeCache_m6046;
extern CustomAttributesCache t1182__CustomAttributeCache_m6047;
extern CustomAttributesCache t1182__CustomAttributeCache_m6039;
extern CustomAttributesCache t1182__CustomAttributeCache_m5837;
extern CustomAttributesCache t1182__CustomAttributeCache_m5839;
const Il2CppTypeDefinitionMetadata t1182_DM = 
{
	NULL, NULL, t1182_ITIs, t1182_IOs, &t9_0_0_0, t1182_VT, t1182_VTIGM, NULL};
TypeInfo t1182_TI = 
{
	&g_mscorlib_dll_Image, NULL, "X509Certificate", "System.Security.Cryptography.X509Certificates", t1182_MIs, t1182_PIs, t1182_FIs, NULL, &t1182_TI, NULL, &t1182__CustomAttributeCache, &t1182_0_0_0, &t1182_1_0_0, &t1182_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1182), sizeof (t1182), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 24, 2, 5, 0, 0, 18, 2, 2};
#include "t1229.h"
// Metadata Definition System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
extern TypeInfo t1229_TI;
#include "t1229MD.h"
static MethodInfo* t1229_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1229_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1229_TI, offsetof(t1229, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1229_0_0_32854;
FieldInfo t1229_f2_FieldInfo = 
{
	"DefaultKeySet", &t1229_0_0_32854, &t1229_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1229_0_0_32854;
FieldInfo t1229_f3_FieldInfo = 
{
	"UserKeySet", &t1229_0_0_32854, &t1229_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1229_0_0_32854;
FieldInfo t1229_f4_FieldInfo = 
{
	"MachineKeySet", &t1229_0_0_32854, &t1229_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1229_0_0_32854;
FieldInfo t1229_f5_FieldInfo = 
{
	"Exportable", &t1229_0_0_32854, &t1229_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1229_0_0_32854;
FieldInfo t1229_f6_FieldInfo = 
{
	"UserProtected", &t1229_0_0_32854, &t1229_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1229_0_0_32854;
FieldInfo t1229_f7_FieldInfo = 
{
	"PersistKeySet", &t1229_0_0_32854, &t1229_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1229_FIs[] =
{
	&t1229_f1_FieldInfo,
	&t1229_f2_FieldInfo,
	&t1229_f3_FieldInfo,
	&t1229_f4_FieldInfo,
	&t1229_f5_FieldInfo,
	&t1229_f6_FieldInfo,
	&t1229_f7_FieldInfo,
	NULL
};
static const int32_t t1229_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1229_f2_DefaultValue = 
{
	&t1229_f2_FieldInfo, { (char*)&t1229_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1229_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1229_f3_DefaultValue = 
{
	&t1229_f3_FieldInfo, { (char*)&t1229_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1229_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1229_f4_DefaultValue = 
{
	&t1229_f4_FieldInfo, { (char*)&t1229_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1229_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1229_f5_DefaultValue = 
{
	&t1229_f5_FieldInfo, { (char*)&t1229_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1229_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1229_f6_DefaultValue = 
{
	&t1229_f6_FieldInfo, { (char*)&t1229_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1229_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1229_f7_DefaultValue = 
{
	&t1229_f7_FieldInfo, { (char*)&t1229_f7_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1229_FDVs[] = 
{
	&t1229_f2_DefaultValue,
	&t1229_f3_DefaultValue,
	&t1229_f4_DefaultValue,
	&t1229_f5_DefaultValue,
	&t1229_f6_DefaultValue,
	&t1229_f7_DefaultValue,
	NULL
};
static Il2CppMethodReference t1229_VT[] =
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
static bool t1229_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1229_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1229_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
CustomAttributesCache t1229__CustomAttributeCache = {
2,
NULL,
&t1229_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1229_1_0_0;
extern CustomAttributesCache t1229__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1229_DM = 
{
	NULL, NULL, NULL, t1229_IOs, &t8_0_0_0, t1229_VT, t1229_VTIGM, NULL};
TypeInfo t1229_TI = 
{
	&g_mscorlib_dll_Image, NULL, "X509KeyStorageFlags", "System.Security.Cryptography.X509Certificates", t1229_MIs, NULL, t1229_FIs, NULL, &t125_TI, NULL, &t1229__CustomAttributeCache, &t1229_0_0_0, &t1229_1_0_0, &t1229_DM, NULL, NULL, NULL, t1229_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1229)+ sizeof (Il2CppObject), sizeof (t1229)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 7, 0, 0, 23, 0, 3};
#include "t1212.h"
// Metadata Definition System.Security.Cryptography.AsymmetricAlgorithm
extern TypeInfo t1212_TI;
#include "t1212MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10355_MI = 
{
	".ctor", (methodPointerType)&m10355, &t1212_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4311, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7052_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m7052, &t1212_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 4312, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5845_MI = 
{
	"get_KeySize", (methodPointerType)&m5845, &t1212_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 5, 0, false, false, 4313, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1212_m6910_ParameterInfos[] = 
{
	{"value", 0, 134222985, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6910_MI = 
{
	"set_KeySize", (methodPointerType)&m6910, &t1212_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1212_m6910_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 6, 1, false, false, 4314, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7037_MI = 
{
	"Clear", (methodPointerType)&m7037, &t1212_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4315, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1212_m12093_ParameterInfos[] = 
{
	{"disposing", 0, 134222986, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m12093_MI = 
{
	"Dispose", NULL, &t1212_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1212_m12093_ParameterInfos, &EmptyCustomAttributesCache, 1476, 0, 7, 1, false, false, 4316, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1212_m12791_ParameterInfos[] = 
{
	{"xmlString", 0, 134222987, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12791_MI = 
{
	"FromXmlString", NULL, &t1212_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1212_m12791_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, false, 4317, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1212_m12792_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134222988, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m12792_MI = 
{
	"ToXmlString", NULL, &t1212_TI, &t2_0_0_0, RuntimeInvoker_t9_t186, t1212_m12792_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 1, false, false, 4318, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1212_m10356_ParameterInfos[] = 
{
	{"xml", 0, 134222989, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"param", 1, 134222990, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10356_MI = 
{
	"GetNamedParam", (methodPointerType)&m10356, &t1212_TI, &t730_0_0_0, RuntimeInvoker_t9_t9_t9, t1212_m10356_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4319, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1212_MIs[] =
{
	&m10355_MI,
	&m7052_MI,
	&m5845_MI,
	&m6910_MI,
	&m7037_MI,
	&m12093_MI,
	&m12791_MI,
	&m12792_MI,
	&m10356_MI,
	NULL
};
extern Il2CppType t125_0_0_4;
FieldInfo t1212_f0_FieldInfo = 
{
	"KeySizeValue", &t125_0_0_4, &t1212_TI, offsetof(t1212, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1433_0_0_4;
FieldInfo t1212_f1_FieldInfo = 
{
	"LegalKeySizesValue", &t1433_0_0_4, &t1212_TI, offsetof(t1212, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1212_FIs[] =
{
	&t1212_f0_FieldInfo,
	&t1212_f1_FieldInfo,
	NULL
};
extern MethodInfo m5845_MI;
extern MethodInfo m6910_MI;
static PropertyInfo t1212____KeySize_PropertyInfo = 
{
	&t1212_TI, "KeySize", &m5845_MI, &m6910_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1212_PIs[] =
{
	&t1212____KeySize_PropertyInfo,
	NULL
};
extern MethodInfo m7052_MI;
static Il2CppMethodReference t1212_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7052_MI,
	&m5845_MI,
	&m6910_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1212_VTIGM[] =
{
	false,
	false,
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
static const Il2CppType* t1212_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1212_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1212_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1212__CustomAttributeCache = {
1,
NULL,
&t1212_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1212_0_0_0;
extern Il2CppType t1212_1_0_0;
struct t1212;
extern CustomAttributesCache t1212__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1212_DM = 
{
	NULL, NULL, t1212_ITIs, t1212_IOs, &t9_0_0_0, t1212_VT, t1212_VTIGM, NULL};
TypeInfo t1212_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsymmetricAlgorithm", "System.Security.Cryptography", t1212_MIs, t1212_PIs, t1212_FIs, NULL, &t1212_TI, NULL, &t1212__CustomAttributeCache, &t1212_0_0_0, &t1212_1_0_0, &t1212_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1212), sizeof (t1212), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 1, 2, 0, 0, 10, 1, 1};
#include "t1979.h"
// Metadata Definition System.Security.Cryptography.AsymmetricKeyExchangeFormatter
extern TypeInfo t1979_TI;
#include "t1979MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10357_MI = 
{
	".ctor", (methodPointerType)&m10357, &t1979_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4320, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1979_m12793_ParameterInfos[] = 
{
	{"data", 0, 134222991, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12793_MI = 
{
	"CreateKeyExchange", NULL, &t1979_TI, &t730_0_0_0, RuntimeInvoker_t9_t9, t1979_m12793_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4321, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1979_MIs[] =
{
	&m10357_MI,
	&m12793_MI,
	NULL
};
static Il2CppMethodReference t1979_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t1979_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
void t1979_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1979_VT, t1979_VTIGM, NULL};
TypeInfo t1979_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsymmetricKeyExchangeFormatter", "System.Security.Cryptography", t1979_MIs, NULL, NULL, NULL, &t1979_TI, NULL, &t1979__CustomAttributeCache, &t1979_0_0_0, &t1979_1_0_0, &t1979_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1979), sizeof (t1979), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 5, 0, 0};
#include "t1489.h"
// Metadata Definition System.Security.Cryptography.AsymmetricSignatureDeformatter
extern TypeInfo t1489_TI;
#include "t1489MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7002_MI = 
{
	".ctor", (methodPointerType)&m7002, &t1489_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4322, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1489_m12794_ParameterInfos[] = 
{
	{"strName", 0, 134222992, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12794_MI = 
{
	"SetHashAlgorithm", NULL, &t1489_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1489_m12794_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4323, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1212_0_0_0;
static ParameterInfo t1489_m12795_ParameterInfos[] = 
{
	{"key", 0, 134222993, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12795_MI = 
{
	"SetKey", NULL, &t1489_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1489_m12795_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 4324, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1489_m12796_ParameterInfos[] = 
{
	{"rgbHash", 0, 134222994, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"rgbSignature", 1, 134222995, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12796_MI = 
{
	"VerifySignature", NULL, &t1489_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1489_m12796_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, false, 4325, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1489_MIs[] =
{
	&m7002_MI,
	&m12794_MI,
	&m12795_MI,
	&m12796_MI,
	NULL
};
static Il2CppMethodReference t1489_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1489_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
void t1489_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1489__CustomAttributeCache = {
1,
NULL,
&t1489_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1489_0_0_0;
extern Il2CppType t1489_1_0_0;
struct t1489;
extern CustomAttributesCache t1489__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1489_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1489_VT, t1489_VTIGM, NULL};
TypeInfo t1489_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsymmetricSignatureDeformatter", "System.Security.Cryptography", t1489_MIs, NULL, NULL, NULL, &t1489_TI, NULL, &t1489__CustomAttributeCache, &t1489_0_0_0, &t1489_1_0_0, &t1489_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1489), sizeof (t1489), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 7, 0, 0};
#include "t1491.h"
// Metadata Definition System.Security.Cryptography.AsymmetricSignatureFormatter
extern TypeInfo t1491_TI;
#include "t1491MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7003_MI = 
{
	".ctor", (methodPointerType)&m7003, &t1491_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4326, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1491_m12797_ParameterInfos[] = 
{
	{"strName", 0, 134222996, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12797_MI = 
{
	"SetHashAlgorithm", NULL, &t1491_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1491_m12797_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4327, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1212_0_0_0;
static ParameterInfo t1491_m12798_ParameterInfos[] = 
{
	{"key", 0, 134222997, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12798_MI = 
{
	"SetKey", NULL, &t1491_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1491_m12798_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 4328, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1491_m12799_ParameterInfos[] = 
{
	{"rgbHash", 0, 134222998, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12799_MI = 
{
	"CreateSignature", NULL, &t1491_TI, &t730_0_0_0, RuntimeInvoker_t9_t9, t1491_m12799_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, false, 4329, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1491_MIs[] =
{
	&m7003_MI,
	&m12797_MI,
	&m12798_MI,
	&m12799_MI,
	NULL
};
static Il2CppMethodReference t1491_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1491_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
void t1491_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1491__CustomAttributeCache = {
1,
NULL,
&t1491_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1491_0_0_0;
extern Il2CppType t1491_1_0_0;
struct t1491;
extern CustomAttributesCache t1491__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1491_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1491_VT, t1491_VTIGM, NULL};
TypeInfo t1491_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsymmetricSignatureFormatter", "System.Security.Cryptography", t1491_MIs, NULL, NULL, NULL, &t1491_TI, NULL, &t1491__CustomAttributeCache, &t1491_0_0_0, &t1491_1_0_0, &t1491_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1491), sizeof (t1491), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 7, 0, 0};
#include "t1980.h"
// Metadata Definition System.Security.Cryptography.Base64Constants
extern TypeInfo t1980_TI;
#include "t1980MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10358_MI = 
{
	".cctor", (methodPointerType)&m10358, &t1980_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4330, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1980_MIs[] =
{
	&m10358_MI,
	NULL
};
extern Il2CppType t730_0_0_54;
FieldInfo t1980_f0_FieldInfo = 
{
	"EncodeTable", &t730_0_0_54, &t1980_TI, offsetof(t1980_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_54;
FieldInfo t1980_f1_FieldInfo = 
{
	"DecodeTable", &t730_0_0_54, &t1980_TI, offsetof(t1980_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1980_FIs[] =
{
	&t1980_f0_FieldInfo,
	&t1980_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1980_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1980_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1980_0_0_0;
extern Il2CppType t1980_1_0_0;
struct t1980;
const Il2CppTypeDefinitionMetadata t1980_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1980_VT, t1980_VTIGM, NULL};
TypeInfo t1980_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Base64Constants", "System.Security.Cryptography", t1980_MIs, NULL, t1980_FIs, NULL, &t1980_TI, NULL, &EmptyCustomAttributesCache, &t1980_0_0_0, &t1980_1_0_0, &t1980_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1980), sizeof (t1980), 0, -1, sizeof(t1980_SFs), 0, -1, 1048960, 0, 0, false, false, false, false, false, false, false, false, true, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t1460.h"
// Metadata Definition System.Security.Cryptography.CipherMode
extern TypeInfo t1460_TI;
#include "t1460MD.h"
static MethodInfo* t1460_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1460_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1460_TI, offsetof(t1460, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1460_0_0_32854;
FieldInfo t1460_f2_FieldInfo = 
{
	"CBC", &t1460_0_0_32854, &t1460_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1460_0_0_32854;
FieldInfo t1460_f3_FieldInfo = 
{
	"ECB", &t1460_0_0_32854, &t1460_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1460_0_0_32854;
FieldInfo t1460_f4_FieldInfo = 
{
	"OFB", &t1460_0_0_32854, &t1460_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1460_0_0_32854;
FieldInfo t1460_f5_FieldInfo = 
{
	"CFB", &t1460_0_0_32854, &t1460_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1460_0_0_32854;
FieldInfo t1460_f6_FieldInfo = 
{
	"CTS", &t1460_0_0_32854, &t1460_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1460_FIs[] =
{
	&t1460_f1_FieldInfo,
	&t1460_f2_FieldInfo,
	&t1460_f3_FieldInfo,
	&t1460_f4_FieldInfo,
	&t1460_f5_FieldInfo,
	&t1460_f6_FieldInfo,
	NULL
};
static const int32_t t1460_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1460_f2_DefaultValue = 
{
	&t1460_f2_FieldInfo, { (char*)&t1460_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1460_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1460_f3_DefaultValue = 
{
	&t1460_f3_FieldInfo, { (char*)&t1460_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1460_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1460_f4_DefaultValue = 
{
	&t1460_f4_FieldInfo, { (char*)&t1460_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1460_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1460_f5_DefaultValue = 
{
	&t1460_f5_FieldInfo, { (char*)&t1460_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1460_f6_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1460_f6_DefaultValue = 
{
	&t1460_f6_FieldInfo, { (char*)&t1460_f6_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1460_FDVs[] = 
{
	&t1460_f2_DefaultValue,
	&t1460_f3_DefaultValue,
	&t1460_f4_DefaultValue,
	&t1460_f5_DefaultValue,
	&t1460_f6_DefaultValue,
	NULL
};
static Il2CppMethodReference t1460_VT[] =
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
static bool t1460_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1460_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1460_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1460__CustomAttributeCache = {
1,
NULL,
&t1460_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1460_0_0_0;
extern Il2CppType t1460_1_0_0;
extern CustomAttributesCache t1460__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1460_DM = 
{
	NULL, NULL, NULL, t1460_IOs, &t8_0_0_0, t1460_VT, t1460_VTIGM, NULL};
TypeInfo t1460_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CipherMode", "System.Security.Cryptography", t1460_MIs, NULL, t1460_FIs, NULL, &t125_TI, NULL, &t1460__CustomAttributeCache, &t1460_0_0_0, &t1460_1_0_0, &t1460_DM, NULL, NULL, NULL, t1460_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1460)+ sizeof (Il2CppObject), sizeof (t1460)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1360.h"
// Metadata Definition System.Security.Cryptography.CryptoConfig
extern TypeInfo t1360_TI;
#include "t1360MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10359_MI = 
{
	".cctor", (methodPointerType)&m10359, &t1360_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4331, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10360_MI = 
{
	"Initialize", (methodPointerType)&m10360, &t1360_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 145, 0, 255, 0, false, false, 4332, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1360_m5846_ParameterInfos[] = 
{
	{"name", 0, 134222999, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5846_MI = 
{
	"CreateFromName", (methodPointerType)&m5846, &t1360_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1360_m5846_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4333, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t158_0_0_0;
extern CustomAttributesCache t1360__CustomAttributeCache_t1360_m5883_Arg1_ParameterInfo;
static ParameterInfo t1360_m5883_ParameterInfos[] = 
{
	{"name", 0, 134223000, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"args", 1, 134223001, &t1360__CustomAttributeCache_t1360_m5883_Arg1_ParameterInfo, &t158_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5883_MI = 
{
	"CreateFromName", (methodPointerType)&m5883, &t1360_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1360_m5883_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4334, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1360_m6902_ParameterInfos[] = 
{
	{"name", 0, 134223002, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6902_MI = 
{
	"MapNameToOID", (methodPointerType)&m6902, &t1360_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1360_m6902_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4335, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1360_m5850_ParameterInfos[] = 
{
	{"str", 0, 134223003, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5850_MI = 
{
	"EncodeOID", (methodPointerType)&m5850, &t1360_TI, &t730_0_0_0, RuntimeInvoker_t9_t9, t1360_m5850_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4336, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t1360_m10361_ParameterInfos[] = 
{
	{"x", 0, 134223004, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t299 (MethodInfo* method, void* obj, void** args);
MethodInfo m10361_MI = 
{
	"EncodeLongNumber", (methodPointerType)&m10361, &t1360_TI, &t730_0_0_0, RuntimeInvoker_t9_t299, t1360_m10361_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4337, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1360_MIs[] =
{
	&m10359_MI,
	&m10360_MI,
	&m5846_MI,
	&m5883_MI,
	&m6902_MI,
	&m5850_MI,
	&m10361_MI,
	NULL
};
extern Il2CppType t9_0_0_17;
FieldInfo t1360_f0_FieldInfo = 
{
	"lockObject", &t9_0_0_17, &t1360_TI, offsetof(t1360_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_17;
FieldInfo t1360_f1_FieldInfo = 
{
	"algorithms", &t1158_0_0_17, &t1360_TI, offsetof(t1360_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_17;
FieldInfo t1360_f2_FieldInfo = 
{
	"oid", &t1158_0_0_17, &t1360_TI, offsetof(t1360_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1360_FIs[] =
{
	&t1360_f0_FieldInfo,
	&t1360_f1_FieldInfo,
	&t1360_f2_FieldInfo,
	NULL
};
static Il2CppMethodReference t1360_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1360_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1360_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void t1360_CustomAttributesCacheGenerator_t1360_m5883_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t337 * tmp;
		tmp = (t337 *)il2cpp_codegen_object_new (&t337_TI);
		m1228(tmp, &m1228_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1360__CustomAttributeCache = {
1,
NULL,
&t1360_CustomAttributesCacheGenerator
};
CustomAttributesCache t1360__CustomAttributeCache_t1360_m5883_Arg1_ParameterInfo = {
1,
NULL,
&t1360_CustomAttributesCacheGenerator_t1360_m5883_Arg1_ParameterInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1360_0_0_0;
extern Il2CppType t1360_1_0_0;
struct t1360;
extern CustomAttributesCache t1360__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1360_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1360_VT, t1360_VTIGM, NULL};
TypeInfo t1360_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CryptoConfig", "System.Security.Cryptography", t1360_MIs, NULL, t1360_FIs, NULL, &t1360_TI, NULL, &t1360__CustomAttributeCache, &t1360_0_0_0, &t1360_1_0_0, &t1360_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1360), sizeof (t1360), 0, -1, sizeof(t1360_SFs), 0, -1, 1, 0, 0, false, false, false, false, false, false, false, false, true, false, 7, 0, 3, 0, 0, 4, 0, 0};
#include "t1353.h"
// Metadata Definition System.Security.Cryptography.CryptographicException
extern TypeInfo t1353_TI;
#include "t1353MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10362_MI = 
{
	".ctor", (methodPointerType)&m10362, &t1353_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4338, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1353_m5795_ParameterInfos[] = 
{
	{"message", 0, 134223005, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5795_MI = 
{
	".ctor", (methodPointerType)&m5795, &t1353_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1353_m5795_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4339, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t138_0_0_0;
extern Il2CppType t138_0_0_0;
static ParameterInfo t1353_m5799_ParameterInfos[] = 
{
	{"message", 0, 134223006, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"inner", 1, 134223007, &EmptyCustomAttributesCache, &t138_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5799_MI = 
{
	".ctor", (methodPointerType)&m5799, &t1353_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1353_m5799_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4340, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1353_m10363_ParameterInfos[] = 
{
	{"format", 0, 134223008, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"insert", 1, 134223009, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10363_MI = 
{
	".ctor", (methodPointerType)&m10363, &t1353_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1353_m10363_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4341, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1353_m10364_ParameterInfos[] = 
{
	{"info", 0, 134223010, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134223011, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10364_MI = 
{
	".ctor", (methodPointerType)&m10364, &t1353_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1353_m10364_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 4342, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1353_MIs[] =
{
	&m10362_MI,
	&m5795_MI,
	&m5799_MI,
	&m10363_MI,
	&m10364_MI,
	NULL
};
static Il2CppMethodReference t1353_VT[] =
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
static bool t1353_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1353_ITIs[] = 
{
	&t948_0_0_0,
};
static Il2CppInterfaceOffsetPair t1353_IOs[] = 
{
	{ &t623_0_0_0, 4},
	{ &t948_0_0_0, 5},
};
void t1353_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1353__CustomAttributeCache = {
1,
NULL,
&t1353_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1353_0_0_0;
extern Il2CppType t1353_1_0_0;
struct t1353;
extern CustomAttributesCache t1353__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1353_DM = 
{
	NULL, NULL, t1353_ITIs, t1353_IOs, &t1369_0_0_0, t1353_VT, t1353_VTIGM, NULL};
TypeInfo t1353_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CryptographicException", "System.Security.Cryptography", t1353_MIs, NULL, NULL, NULL, &t1353_TI, NULL, &t1353__CustomAttributeCache, &t1353_0_0_0, &t1353_1_0_0, &t1353_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1353), sizeof (t1353), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 11, 1, 2};
#include "t1361.h"
// Metadata Definition System.Security.Cryptography.CryptographicUnexpectedOperationException
extern TypeInfo t1361_TI;
#include "t1361MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10365_MI = 
{
	".ctor", (methodPointerType)&m10365, &t1361_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4343, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1361_m6956_ParameterInfos[] = 
{
	{"message", 0, 134223012, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6956_MI = 
{
	".ctor", (methodPointerType)&m6956, &t1361_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1361_m6956_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4344, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1361_m10366_ParameterInfos[] = 
{
	{"info", 0, 134223013, &EmptyCustomAttributesCache, &t1100_0_0_0},
	{"context", 1, 134223014, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m10366_MI = 
{
	".ctor", (methodPointerType)&m10366, &t1361_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1101, t1361_m10366_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 4345, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1361_MIs[] =
{
	&m10365_MI,
	&m6956_MI,
	&m10366_MI,
	NULL
};
static Il2CppMethodReference t1361_VT[] =
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
};
static Il2CppInterfaceOffsetPair t1361_IOs[] = 
{
	{ &t948_0_0_0, 5},
	{ &t623_0_0_0, 4},
};
void t1361_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1361__CustomAttributeCache = {
1,
NULL,
&t1361_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1361_0_0_0;
extern Il2CppType t1361_1_0_0;
struct t1361;
extern CustomAttributesCache t1361__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1361_DM = 
{
	NULL, NULL, NULL, t1361_IOs, &t1353_0_0_0, t1361_VT, t1361_VTIGM, NULL};
TypeInfo t1361_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CryptographicUnexpectedOperationException", "System.Security.Cryptography", t1361_MIs, NULL, NULL, NULL, &t1361_TI, NULL, &t1361__CustomAttributeCache, &t1361_0_0_0, &t1361_1_0_0, &t1361_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1361), sizeof (t1361), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1527.h"
// Metadata Definition System.Security.Cryptography.CspParameters
extern TypeInfo t1527_TI;
#include "t1527MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6904_MI = 
{
	".ctor", (methodPointerType)&m6904, &t1527_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4346, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1527_m10367_ParameterInfos[] = 
{
	{"dwTypeIn", 0, 134223015, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10367_MI = 
{
	".ctor", (methodPointerType)&m10367, &t1527_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1527_m10367_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4347, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1527_m10368_ParameterInfos[] = 
{
	{"dwTypeIn", 0, 134223016, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"strProviderNameIn", 1, 134223017, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10368_MI = 
{
	".ctor", (methodPointerType)&m10368, &t1527_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9, t1527_m10368_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4348, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1527_m10369_ParameterInfos[] = 
{
	{"dwTypeIn", 0, 134223018, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"strProviderNameIn", 1, 134223019, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"strContainerNameIn", 2, 134223020, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10369_MI = 
{
	".ctor", (methodPointerType)&m10369, &t1527_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9_t9, t1527_m10369_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4349, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1528_0_0_0;
extern void* RuntimeInvoker_t1528 (MethodInfo* method, void* obj, void** args);
MethodInfo m10370_MI = 
{
	"get_Flags", (methodPointerType)&m10370, &t1527_TI, &t1528_0_0_0, RuntimeInvoker_t1528, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4350, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1528_0_0_0;
extern Il2CppType t1528_0_0_0;
static ParameterInfo t1527_m6905_ParameterInfos[] = 
{
	{"value", 0, 134223021, &EmptyCustomAttributesCache, &t1528_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6905_MI = 
{
	"set_Flags", (methodPointerType)&m6905, &t1527_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1527_m6905_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4351, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1527_MIs[] =
{
	&m6904_MI,
	&m10367_MI,
	&m10368_MI,
	&m10369_MI,
	&m10370_MI,
	&m6905_MI,
	NULL
};
extern Il2CppType t1528_0_0_1;
FieldInfo t1527_f0_FieldInfo = 
{
	"_Flags", &t1528_0_0_1, &t1527_TI, offsetof(t1527, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1527_f1_FieldInfo = 
{
	"KeyContainerName", &t2_0_0_6, &t1527_TI, offsetof(t1527, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1527_f2_FieldInfo = 
{
	"KeyNumber", &t125_0_0_6, &t1527_TI, offsetof(t1527, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1527_f3_FieldInfo = 
{
	"ProviderName", &t2_0_0_6, &t1527_TI, offsetof(t1527, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1527_f4_FieldInfo = 
{
	"ProviderType", &t125_0_0_6, &t1527_TI, offsetof(t1527, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1527_FIs[] =
{
	&t1527_f0_FieldInfo,
	&t1527_f1_FieldInfo,
	&t1527_f2_FieldInfo,
	&t1527_f3_FieldInfo,
	&t1527_f4_FieldInfo,
	NULL
};
extern MethodInfo m10370_MI;
extern MethodInfo m6905_MI;
static PropertyInfo t1527____Flags_PropertyInfo = 
{
	&t1527_TI, "Flags", &m10370_MI, &m6905_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1527_PIs[] =
{
	&t1527____Flags_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1527_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1527_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1527_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
struct t1527;
extern CustomAttributesCache t1527__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1527_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1527_VT, t1527_VTIGM, NULL};
TypeInfo t1527_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CspParameters", "System.Security.Cryptography", t1527_MIs, t1527_PIs, t1527_FIs, NULL, &t1527_TI, NULL, &t1527__CustomAttributeCache, &t1527_0_0_0, &t1527_1_0_0, &t1527_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1527), sizeof (t1527), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 5, 0, 0, 4, 0, 0};
#include "t1528.h"
// Metadata Definition System.Security.Cryptography.CspProviderFlags
extern TypeInfo t1528_TI;
#include "t1528MD.h"
static MethodInfo* t1528_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1528_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1528_TI, offsetof(t1528, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1528_0_0_32854;
FieldInfo t1528_f2_FieldInfo = 
{
	"UseMachineKeyStore", &t1528_0_0_32854, &t1528_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1528_0_0_32854;
FieldInfo t1528_f3_FieldInfo = 
{
	"UseDefaultKeyContainer", &t1528_0_0_32854, &t1528_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1528_0_0_32854;
FieldInfo t1528_f4_FieldInfo = 
{
	"UseExistingKey", &t1528_0_0_32854, &t1528_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1528_0_0_32854;
FieldInfo t1528_f5_FieldInfo = 
{
	"NoFlags", &t1528_0_0_32854, &t1528_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1528_0_0_32854;
FieldInfo t1528_f6_FieldInfo = 
{
	"NoPrompt", &t1528_0_0_32854, &t1528_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1528_0_0_32854;
FieldInfo t1528_f7_FieldInfo = 
{
	"UseArchivableKey", &t1528_0_0_32854, &t1528_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1528_0_0_32854;
FieldInfo t1528_f8_FieldInfo = 
{
	"UseNonExportableKey", &t1528_0_0_32854, &t1528_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1528_0_0_32854;
FieldInfo t1528_f9_FieldInfo = 
{
	"UseUserProtectedKey", &t1528_0_0_32854, &t1528_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1528_FIs[] =
{
	&t1528_f1_FieldInfo,
	&t1528_f2_FieldInfo,
	&t1528_f3_FieldInfo,
	&t1528_f4_FieldInfo,
	&t1528_f5_FieldInfo,
	&t1528_f6_FieldInfo,
	&t1528_f7_FieldInfo,
	&t1528_f8_FieldInfo,
	&t1528_f9_FieldInfo,
	NULL
};
static const int32_t t1528_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1528_f2_DefaultValue = 
{
	&t1528_f2_FieldInfo, { (char*)&t1528_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1528_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1528_f3_DefaultValue = 
{
	&t1528_f3_FieldInfo, { (char*)&t1528_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1528_f4_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1528_f4_DefaultValue = 
{
	&t1528_f4_FieldInfo, { (char*)&t1528_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1528_f5_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1528_f5_DefaultValue = 
{
	&t1528_f5_FieldInfo, { (char*)&t1528_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1528_f6_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1528_f6_DefaultValue = 
{
	&t1528_f6_FieldInfo, { (char*)&t1528_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1528_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1528_f7_DefaultValue = 
{
	&t1528_f7_FieldInfo, { (char*)&t1528_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1528_f8_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1528_f8_DefaultValue = 
{
	&t1528_f8_FieldInfo, { (char*)&t1528_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1528_f9_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1528_f9_DefaultValue = 
{
	&t1528_f9_FieldInfo, { (char*)&t1528_f9_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1528_FDVs[] = 
{
	&t1528_f2_DefaultValue,
	&t1528_f3_DefaultValue,
	&t1528_f4_DefaultValue,
	&t1528_f5_DefaultValue,
	&t1528_f6_DefaultValue,
	&t1528_f7_DefaultValue,
	&t1528_f8_DefaultValue,
	&t1528_f9_DefaultValue,
	NULL
};
static Il2CppMethodReference t1528_VT[] =
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
	false,
	false,
	false,
	false,
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
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1528_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
CustomAttributesCache t1528__CustomAttributeCache = {
2,
NULL,
&t1528_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1528_1_0_0;
extern CustomAttributesCache t1528__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1528_DM = 
{
	NULL, NULL, NULL, t1528_IOs, &t8_0_0_0, t1528_VT, t1528_VTIGM, NULL};
TypeInfo t1528_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CspProviderFlags", "System.Security.Cryptography", t1528_MIs, NULL, t1528_FIs, NULL, &t125_TI, NULL, &t1528__CustomAttributeCache, &t1528_0_0_0, &t1528_1_0_0, &t1528_DM, NULL, NULL, NULL, t1528_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1528)+ sizeof (Il2CppObject), sizeof (t1528)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 9, 0, 0, 23, 0, 3};
#include "t1540.h"
// Metadata Definition System.Security.Cryptography.DES
extern TypeInfo t1540_TI;
#include "t1540MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10371_MI = 
{
	".ctor", (methodPointerType)&m10371, &t1540_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4352, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10372_MI = 
{
	".cctor", (methodPointerType)&m10372, &t1540_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4353, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1540_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6958_MI = 
{
	"Create", (methodPointerType)&m6958, &t1540_TI, &t1540_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4354, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1540_m10373_ParameterInfos[] = 
{
	{"algName", 0, 134223022, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1540_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10373_MI = 
{
	"Create", (methodPointerType)&m10373, &t1540_TI, &t1540_0_0_0, RuntimeInvoker_t9_t9, t1540_m10373_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4355, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1540_m10374_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223023, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10374_MI = 
{
	"IsWeakKey", (methodPointerType)&m10374, &t1540_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1540_m10374_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4356, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1540_m10375_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223024, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10375_MI = 
{
	"IsSemiWeakKey", (methodPointerType)&m10375, &t1540_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1540_m10375_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4357, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10376_MI = 
{
	"get_Key", (methodPointerType)&m10376, &t1540_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 11, 0, false, false, 4358, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1540_m10377_ParameterInfos[] = 
{
	{"value", 0, 134223025, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10377_MI = 
{
	"set_Key", (methodPointerType)&m10377, &t1540_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1540_m10377_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 12, 1, false, false, 4359, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1540_MIs[] =
{
	&m10371_MI,
	&m10372_MI,
	&m6958_MI,
	&m10373_MI,
	&m10374_MI,
	&m10375_MI,
	&m10376_MI,
	&m10377_MI,
	NULL
};
extern Il2CppType t1981_0_0_51;
FieldInfo t1540_f10_FieldInfo = 
{
	"weakKeys", &t1981_0_0_51, &t1540_TI, offsetof(t1540_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1981_0_0_51;
FieldInfo t1540_f11_FieldInfo = 
{
	"semiWeakKeys", &t1981_0_0_51, &t1540_TI, offsetof(t1540_SFs, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1540_FIs[] =
{
	&t1540_f10_FieldInfo,
	&t1540_f11_FieldInfo,
	NULL
};
extern MethodInfo m10376_MI;
extern MethodInfo m10377_MI;
static PropertyInfo t1540____Key_PropertyInfo = 
{
	&t1540_TI, "Key", &m10376_MI, &m10377_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1540_PIs[] =
{
	&t1540____Key_PropertyInfo,
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
extern MethodInfo m7043_MI;
extern MethodInfo m6963_MI;
extern MethodInfo m7044_MI;
extern MethodInfo m7045_MI;
extern MethodInfo m6924_MI;
extern MethodInfo m7046_MI;
extern MethodInfo m6962_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m6896_MI;
static Il2CppMethodReference t1540_VT[] =
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
	&m10376_MI,
	&m10377_MI,
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
	false,
	false,
	false,
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
};
void t1540_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
extern Il2CppType t1434_0_0_0;
struct t1540;
extern CustomAttributesCache t1540__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1540_DM = 
{
	NULL, NULL, NULL, t1540_IOs, &t1434_0_0_0, t1540_VT, t1540_VTIGM, NULL};
TypeInfo t1540_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DES", "System.Security.Cryptography", t1540_MIs, t1540_PIs, t1540_FIs, NULL, &t1540_TI, NULL, &t1540__CustomAttributeCache, &t1540_0_0_0, &t1540_1_0_0, &t1540_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1540), sizeof (t1540), 0, -1, sizeof(t1540_SFs), 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, true, false, 8, 1, 2, 0, 0, 26, 0, 1};
#include "t1982.h"
// Metadata Definition System.Security.Cryptography.DESTransform
extern TypeInfo t1982_TI;
#include "t1982MD.h"
extern Il2CppType t1434_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1982_m10378_ParameterInfos[] = 
{
	{"symmAlgo", 0, 134223026, &EmptyCustomAttributesCache, &t1434_0_0_0},
	{"encryption", 1, 134223027, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"key", 2, 134223028, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"iv", 3, 134223029, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10378_MI = 
{
	".ctor", (methodPointerType)&m10378, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t9_t9, t1982_m10378_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 4360, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10379_MI = 
{
	".cctor", (methodPointerType)&m10379, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4361, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1982_m10380_ParameterInfos[] = 
{
	{"r", 0, 134223030, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"n", 1, 134223031, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10380_MI = 
{
	"CipherFunct", (methodPointerType)&m10380, &t1982_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125, t1982_m10380_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4362, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
extern Il2CppType t1412_0_0_0;
extern Il2CppType t1412_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1982_m10381_ParameterInfos[] = 
{
	{"input", 0, 134223032, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"output", 1, 134223033, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"permTab", 2, 134223034, &EmptyCustomAttributesCache, &t1412_0_0_0},
	{"preSwap", 3, 134223035, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10381_MI = 
{
	"Permutation", (methodPointerType)&m10381, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9_t186, t1982_m10381_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 4, false, false, 4363, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1982_m10382_ParameterInfos[] = 
{
	{"byteBuff", 0, 134223036, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10382_MI = 
{
	"BSwap", (methodPointerType)&m10382, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1982_m10382_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4364, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1982_m10383_ParameterInfos[] = 
{
	{"key", 0, 134223037, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10383_MI = 
{
	"SetKey", (methodPointerType)&m10383, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1982_m10383_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4365, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1982_m10384_ParameterInfos[] = 
{
	{"input", 0, 134223038, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"output", 1, 134223039, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10384_MI = 
{
	"ProcessBlock", (methodPointerType)&m10384, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1982_m10384_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4366, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1982_m10385_ParameterInfos[] = 
{
	{"input", 0, 134223040, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"output", 1, 134223041, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10385_MI = 
{
	"ECB", (methodPointerType)&m10385, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1982_m10385_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 2, false, false, 4367, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10386_MI = 
{
	"GetStrongKey", (methodPointerType)&m10386, &t1982_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 4368, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1982_MIs[] =
{
	&m10378_MI,
	&m10379_MI,
	&m10380_MI,
	&m10381_MI,
	&m10382_MI,
	&m10383_MI,
	&m10384_MI,
	&m10385_MI,
	&m10386_MI,
	NULL
};
extern Il2CppType t125_0_0_51;
FieldInfo t1982_f12_FieldInfo = 
{
	"KEY_BIT_SIZE", &t125_0_0_51, &t1982_TI, offsetof(t1982_SFs, f12), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_51;
FieldInfo t1982_f13_FieldInfo = 
{
	"KEY_BYTE_SIZE", &t125_0_0_51, &t1982_TI, offsetof(t1982_SFs, f13), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_51;
FieldInfo t1982_f14_FieldInfo = 
{
	"BLOCK_BIT_SIZE", &t125_0_0_51, &t1982_TI, offsetof(t1982_SFs, f14), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_51;
FieldInfo t1982_f15_FieldInfo = 
{
	"BLOCK_BYTE_SIZE", &t125_0_0_51, &t1982_TI, offsetof(t1982_SFs, f15), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t1982_f16_FieldInfo = 
{
	"keySchedule", &t730_0_0_1, &t1982_TI, offsetof(t1982, f16), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_1;
FieldInfo t1982_f17_FieldInfo = 
{
	"byteBuff", &t730_0_0_1, &t1982_TI, offsetof(t1982, f17), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_1;
FieldInfo t1982_f18_FieldInfo = 
{
	"dwordBuff", &t1412_0_0_1, &t1982_TI, offsetof(t1982, f18), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_49;
FieldInfo t1982_f19_FieldInfo = 
{
	"spBoxes", &t1412_0_0_49, &t1982_TI, offsetof(t1982_SFs, f19), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_49;
FieldInfo t1982_f20_FieldInfo = 
{
	"PC1", &t730_0_0_49, &t1982_TI, offsetof(t1982_SFs, f20), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_49;
FieldInfo t1982_f21_FieldInfo = 
{
	"leftRotTotal", &t730_0_0_49, &t1982_TI, offsetof(t1982_SFs, f21), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_49;
FieldInfo t1982_f22_FieldInfo = 
{
	"PC2", &t730_0_0_49, &t1982_TI, offsetof(t1982_SFs, f22), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_51;
FieldInfo t1982_f23_FieldInfo = 
{
	"ipTab", &t1412_0_0_51, &t1982_TI, offsetof(t1982_SFs, f23), &EmptyCustomAttributesCache};
extern Il2CppType t1412_0_0_51;
FieldInfo t1982_f24_FieldInfo = 
{
	"fpTab", &t1412_0_0_51, &t1982_TI, offsetof(t1982_SFs, f24), &EmptyCustomAttributesCache};
static FieldInfo* t1982_FIs[] =
{
	&t1982_f12_FieldInfo,
	&t1982_f13_FieldInfo,
	&t1982_f14_FieldInfo,
	&t1982_f15_FieldInfo,
	&t1982_f16_FieldInfo,
	&t1982_f17_FieldInfo,
	&t1982_f18_FieldInfo,
	&t1982_f19_FieldInfo,
	&t1982_f20_FieldInfo,
	&t1982_f21_FieldInfo,
	&t1982_f22_FieldInfo,
	&t1982_f23_FieldInfo,
	&t1982_f24_FieldInfo,
	NULL
};
extern MethodInfo m8168_MI;
extern MethodInfo m8167_MI;
extern MethodInfo m8170_MI;
extern MethodInfo m8177_MI;
extern MethodInfo m8184_MI;
extern MethodInfo m8169_MI;
extern MethodInfo m8171_MI;
extern MethodInfo m10385_MI;
extern MethodInfo m8172_MI;
extern MethodInfo m8173_MI;
extern MethodInfo m8174_MI;
extern MethodInfo m8175_MI;
static Il2CppMethodReference t1982_VT[] =
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
	&m10385_MI,
	&m8172_MI,
	&m8173_MI,
	&m8174_MI,
	&m8175_MI,
	&m8177_MI,
	&m8184_MI,
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
	false,
	false,
	false,
};
extern Il2CppType t1425_0_0_0;
static Il2CppInterfaceOffsetPair t1982_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1982_0_0_0;
extern Il2CppType t1982_1_0_0;
extern Il2CppType t1642_0_0_0;
struct t1982;
const Il2CppTypeDefinitionMetadata t1982_DM = 
{
	NULL, NULL, NULL, t1982_IOs, &t1642_0_0_0, t1982_VT, t1982_VTIGM, NULL};
TypeInfo t1982_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DESTransform", "System.Security.Cryptography", t1982_MIs, NULL, t1982_FIs, NULL, &t1982_TI, NULL, &EmptyCustomAttributesCache, &t1982_0_0_0, &t1982_1_0_0, &t1982_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1982), sizeof (t1982), 0, -1, sizeof(t1982_SFs), 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, true, true, false, 9, 0, 13, 0, 0, 18, 0, 2};
#include "t1983.h"
// Metadata Definition System.Security.Cryptography.DESCryptoServiceProvider
extern TypeInfo t1983_TI;
#include "t1983MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10387_MI = 
{
	".ctor", (methodPointerType)&m10387, &t1983_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4369, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1983_m10388_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223042, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"rgbIV", 1, 134223043, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t1425_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10388_MI = 
{
	"CreateDecryptor", (methodPointerType)&m10388, &t1983_TI, &t1425_0_0_0, RuntimeInvoker_t9_t9_t9, t1983_m10388_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 21, 2, false, false, 4370, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1983_m10389_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223044, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"rgbIV", 1, 134223045, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t1425_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10389_MI = 
{
	"CreateEncryptor", (methodPointerType)&m10389, &t1983_TI, &t1425_0_0_0, RuntimeInvoker_t9_t9_t9, t1983_m10389_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 2, false, false, 4371, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10390_MI = 
{
	"GenerateIV", (methodPointerType)&m10390, &t1983_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 24, 0, false, false, 4372, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10391_MI = 
{
	"GenerateKey", (methodPointerType)&m10391, &t1983_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 25, 0, false, false, 4373, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1983_MIs[] =
{
	&m10387_MI,
	&m10388_MI,
	&m10389_MI,
	&m10390_MI,
	&m10391_MI,
	NULL
};
extern MethodInfo m10388_MI;
extern MethodInfo m10389_MI;
extern MethodInfo m10390_MI;
extern MethodInfo m10391_MI;
static Il2CppMethodReference t1983_VT[] =
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
	&m10376_MI,
	&m10377_MI,
	&m7043_MI,
	&m6963_MI,
	&m7044_MI,
	&m7045_MI,
	&m6924_MI,
	&m7046_MI,
	&m6962_MI,
	&m6925_MI,
	&m10388_MI,
	&m6896_MI,
	&m10389_MI,
	&m10390_MI,
	&m10391_MI,
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
};
static Il2CppInterfaceOffsetPair t1983_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1983_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, NULL, t1983_IOs, &t1540_0_0_0, t1983_VT, t1983_VTIGM, NULL};
TypeInfo t1983_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DESCryptoServiceProvider", "System.Security.Cryptography", t1983_MIs, NULL, NULL, NULL, &t1983_TI, NULL, &t1983__CustomAttributeCache, &t1983_0_0_0, &t1983_1_0_0, &t1983_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1983), sizeof (t1983), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 5, 0, 0, 0, 0, 26, 0, 1};
#include "t1216.h"
// Metadata Definition System.Security.Cryptography.DSA
extern TypeInfo t1216_TI;
#include "t1216MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10392_MI = 
{
	".ctor", (methodPointerType)&m10392, &t1216_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4374, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1216_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5788_MI = 
{
	"Create", (methodPointerType)&m5788, &t1216_TI, &t1216_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4375, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1216_m10393_ParameterInfos[] = 
{
	{"algName", 0, 134223046, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1216_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10393_MI = 
{
	"Create", (methodPointerType)&m10393, &t1216_TI, &t1216_0_0_0, RuntimeInvoker_t9_t9, t1216_m10393_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4376, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1216_m12098_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223047, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12098_MI = 
{
	"CreateSignature", NULL, &t1216_TI, &t730_0_0_0, RuntimeInvoker_t9_t9, t1216_m12098_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 10, 1, false, false, 4377, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1216_m5787_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223048, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1352_0_0_0;
extern void* RuntimeInvoker_t1352_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m5787_MI = 
{
	"ExportParameters", NULL, &t1216_TI, &t1352_0_0_0, RuntimeInvoker_t1352_t186, t1216_m5787_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 11, 1, false, false, 4378, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1352_0_0_0;
extern Il2CppType t1352_0_0_0;
static ParameterInfo t1216_m10394_ParameterInfos[] = 
{
	{"parameters", 0, 134223049, &EmptyCustomAttributesCache, &t1352_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1352 (MethodInfo* method, void* obj, void** args);
MethodInfo m10394_MI = 
{
	"ZeroizePrivateKey", (methodPointerType)&m10394, &t1216_TI, &t122_0_0_0, RuntimeInvoker_t122_t1352, t1216_m10394_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4379, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1216_m10395_ParameterInfos[] = 
{
	{"xmlString", 0, 134223050, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10395_MI = 
{
	"FromXmlString", (methodPointerType)&m10395, &t1216_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1216_m10395_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 4380, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1352_0_0_0;
static ParameterInfo t1216_m5789_ParameterInfos[] = 
{
	{"parameters", 0, 134223051, &EmptyCustomAttributesCache, &t1352_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1352 (MethodInfo* method, void* obj, void** args);
MethodInfo m5789_MI = 
{
	"ImportParameters", NULL, &t1216_TI, &t122_0_0_0, RuntimeInvoker_t122_t1352, t1216_m5789_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 12, 1, false, false, 4381, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1216_m10396_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223052, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10396_MI = 
{
	"ToXmlString", (methodPointerType)&m10396, &t1216_TI, &t2_0_0_0, RuntimeInvoker_t9_t186, t1216_m10396_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 4382, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1216_m12097_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223053, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"rgbSignature", 1, 134223054, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12097_MI = 
{
	"VerifySignature", NULL, &t1216_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1216_m12097_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 13, 2, false, false, 4383, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1216_MIs[] =
{
	&m10392_MI,
	&m5788_MI,
	&m10393_MI,
	&m12098_MI,
	&m5787_MI,
	&m10394_MI,
	&m10395_MI,
	&m5789_MI,
	&m10396_MI,
	&m12097_MI,
	NULL
};
extern MethodInfo m10395_MI;
extern MethodInfo m10396_MI;
static Il2CppMethodReference t1216_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7052_MI,
	&m5845_MI,
	&m6910_MI,
	NULL,
	&m10395_MI,
	&m10396_MI,
	NULL,
	NULL,
	NULL,
	NULL,
};
static bool t1216_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1216_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1216_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1216__CustomAttributeCache = {
1,
NULL,
&t1216_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1216_0_0_0;
extern Il2CppType t1216_1_0_0;
struct t1216;
extern CustomAttributesCache t1216__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1216_DM = 
{
	NULL, NULL, NULL, t1216_IOs, &t1212_0_0_0, t1216_VT, t1216_VTIGM, NULL};
TypeInfo t1216_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSA", "System.Security.Cryptography", t1216_MIs, NULL, NULL, NULL, &t1216_TI, NULL, &t1216__CustomAttributeCache, &t1216_0_0_0, &t1216_1_0_0, &t1216_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1216), sizeof (t1216), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 0, 0, 0, 0, 14, 0, 1};
#include "t1351.h"
// Metadata Definition System.Security.Cryptography.DSACryptoServiceProvider
extern TypeInfo t1351_TI;
#include "t1351MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10397_MI = 
{
	".ctor", (methodPointerType)&m10397, &t1351_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4384, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1351_m5800_ParameterInfos[] = 
{
	{"dwKeySize", 0, 134223055, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5800_MI = 
{
	".ctor", (methodPointerType)&m5800, &t1351_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1351_m5800_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4385, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t1527_0_0_0;
static ParameterInfo t1351_m10398_ParameterInfos[] = 
{
	{"dwKeySize", 0, 134223056, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"parameters", 1, 134223057, &EmptyCustomAttributesCache, &t1527_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10398_MI = 
{
	".ctor", (methodPointerType)&m10398, &t1351_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9, t1351_m10398_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4386, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10399_MI = 
{
	".cctor", (methodPointerType)&m10399, &t1351_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4387, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10400_MI = 
{
	"Finalize", (methodPointerType)&m10400, &t1351_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4388, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10401_MI = 
{
	"get_KeySize", (methodPointerType)&m10401, &t1351_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 5, 0, false, false, 4389, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m5786_MI = 
{
	"get_PublicOnly", (methodPointerType)&m5786, &t1351_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4390, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1351_m10402_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223058, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1352_0_0_0;
extern void* RuntimeInvoker_t1352_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10402_MI = 
{
	"ExportParameters", (methodPointerType)&m10402, &t1351_TI, &t1352_0_0_0, RuntimeInvoker_t1352_t186, t1351_m10402_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 1, false, false, 4391, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1352_0_0_0;
static ParameterInfo t1351_m10403_ParameterInfos[] = 
{
	{"parameters", 0, 134223059, &EmptyCustomAttributesCache, &t1352_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1352 (MethodInfo* method, void* obj, void** args);
MethodInfo m10403_MI = 
{
	"ImportParameters", (methodPointerType)&m10403, &t1351_TI, &t122_0_0_0, RuntimeInvoker_t122_t1352, t1351_m10403_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 4392, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1351_m10404_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223060, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10404_MI = 
{
	"CreateSignature", (methodPointerType)&m10404, &t1351_TI, &t730_0_0_0, RuntimeInvoker_t9_t9, t1351_m10404_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 4393, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1351_m10405_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223061, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"rgbSignature", 1, 134223062, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10405_MI = 
{
	"VerifySignature", (methodPointerType)&m10405, &t1351_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1351_m10405_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 4394, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1351_m10406_ParameterInfos[] = 
{
	{"disposing", 0, 134223063, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10406_MI = 
{
	"Dispose", (methodPointerType)&m10406, &t1351_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1351_m10406_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 7, 1, false, false, 4395, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1436_0_0_0;
extern Il2CppType t1436_0_0_0;
static ParameterInfo t1351_m10407_ParameterInfos[] = 
{
	{"sender", 0, 134223064, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"e", 1, 134223065, &EmptyCustomAttributesCache, &t1436_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10407_MI = 
{
	"OnKeyGenerated", (methodPointerType)&m10407, &t1351_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1351_m10407_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4396, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1351_MIs[] =
{
	&m10397_MI,
	&m5800_MI,
	&m10398_MI,
	&m10399_MI,
	&m10400_MI,
	&m10401_MI,
	&m5786_MI,
	&m10402_MI,
	&m10403_MI,
	&m10404_MI,
	&m10405_MI,
	&m10406_MI,
	&m10407_MI,
	NULL
};
extern Il2CppType t1634_0_0_1;
FieldInfo t1351_f2_FieldInfo = 
{
	"store", &t1634_0_0_1, &t1351_TI, offsetof(t1351, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1351_f3_FieldInfo = 
{
	"persistKey", &t124_0_0_1, &t1351_TI, offsetof(t1351, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1351_f4_FieldInfo = 
{
	"persisted", &t124_0_0_1, &t1351_TI, offsetof(t1351, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1351_f5_FieldInfo = 
{
	"privateKeyExportable", &t124_0_0_1, &t1351_TI, offsetof(t1351, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1351_f6_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t1351_TI, offsetof(t1351, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1633_0_0_1;
FieldInfo t1351_f7_FieldInfo = 
{
	"dsa", &t1633_0_0_1, &t1351_TI, offsetof(t1351, f7), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_17;
FieldInfo t1351_f8_FieldInfo = 
{
	"useMachineKeyStore", &t124_0_0_17, &t1351_TI, offsetof(t1351_SFs, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1351_FIs[] =
{
	&t1351_f2_FieldInfo,
	&t1351_f3_FieldInfo,
	&t1351_f4_FieldInfo,
	&t1351_f5_FieldInfo,
	&t1351_f6_FieldInfo,
	&t1351_f7_FieldInfo,
	&t1351_f8_FieldInfo,
	NULL
};
extern MethodInfo m10401_MI;
static PropertyInfo t1351____KeySize_PropertyInfo = 
{
	&t1351_TI, "KeySize", &m10401_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5786_MI;
extern CustomAttributesCache t1351__CustomAttributeCache_t1351____PublicOnly_PropertyInfo;
static PropertyInfo t1351____PublicOnly_PropertyInfo = 
{
	&t1351_TI, "PublicOnly", &m5786_MI, NULL, 0, &t1351__CustomAttributeCache_t1351____PublicOnly_PropertyInfo};
static PropertyInfo* t1351_PIs[] =
{
	&t1351____KeySize_PropertyInfo,
	&t1351____PublicOnly_PropertyInfo,
	NULL
};
extern MethodInfo m10400_MI;
extern MethodInfo m10406_MI;
extern MethodInfo m10404_MI;
extern MethodInfo m10402_MI;
extern MethodInfo m10403_MI;
extern MethodInfo m10405_MI;
static Il2CppMethodReference t1351_VT[] =
{
	&m671_MI,
	&m10400_MI,
	&m672_MI,
	&m673_MI,
	&m7052_MI,
	&m10401_MI,
	&m6910_MI,
	&m10406_MI,
	&m10395_MI,
	&m10396_MI,
	&m10404_MI,
	&m10402_MI,
	&m10403_MI,
	&m10405_MI,
};
static bool t1351_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t2634_0_0_0;
static const Il2CppType* t1351_ITIs[] = 
{
	&t2634_0_0_0,
};
static Il2CppInterfaceOffsetPair t1351_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t2634_0_0_0, 14},
};
void t1351_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1351_CustomAttributesCacheGenerator_t1351____PublicOnly_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, false, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1351__CustomAttributeCache = {
1,
NULL,
&t1351_CustomAttributesCacheGenerator
};
CustomAttributesCache t1351__CustomAttributeCache_t1351____PublicOnly_PropertyInfo = {
1,
NULL,
&t1351_CustomAttributesCacheGenerator_t1351____PublicOnly_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1351_0_0_0;
extern Il2CppType t1351_1_0_0;
struct t1351;
extern CustomAttributesCache t1351__CustomAttributeCache;
extern CustomAttributesCache t1351__CustomAttributeCache_t1351____PublicOnly_PropertyInfo;
const Il2CppTypeDefinitionMetadata t1351_DM = 
{
	NULL, NULL, t1351_ITIs, t1351_IOs, &t1216_0_0_0, t1351_VT, t1351_VTIGM, NULL};
TypeInfo t1351_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSACryptoServiceProvider", "System.Security.Cryptography", t1351_MIs, t1351_PIs, t1351_FIs, NULL, &t1351_TI, NULL, &t1351__CustomAttributeCache, &t1351_0_0_0, &t1351_1_0_0, &t1351_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1351), sizeof (t1351), 0, -1, sizeof(t1351_SFs), 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, true, false, 13, 2, 7, 0, 0, 14, 1, 2};
#include "t1352.h"
// Metadata Definition System.Security.Cryptography.DSAParameters
extern TypeInfo t1352_TI;
#include "t1352MD.h"
static MethodInfo* t1352_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_6;
FieldInfo t1352_f0_FieldInfo = 
{
	"Counter", &t125_0_0_6, &t1352_TI, offsetof(t1352, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_6;
FieldInfo t1352_f1_FieldInfo = 
{
	"G", &t730_0_0_6, &t1352_TI, offsetof(t1352, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_6;
FieldInfo t1352_f2_FieldInfo = 
{
	"J", &t730_0_0_6, &t1352_TI, offsetof(t1352, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_6;
FieldInfo t1352_f3_FieldInfo = 
{
	"P", &t730_0_0_6, &t1352_TI, offsetof(t1352, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_6;
FieldInfo t1352_f4_FieldInfo = 
{
	"Q", &t730_0_0_6, &t1352_TI, offsetof(t1352, f4) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_6;
FieldInfo t1352_f5_FieldInfo = 
{
	"Seed", &t730_0_0_6, &t1352_TI, offsetof(t1352, f5) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_134;
FieldInfo t1352_f6_FieldInfo = 
{
	"X", &t730_0_0_134, &t1352_TI, offsetof(t1352, f6) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t730_0_0_6;
FieldInfo t1352_f7_FieldInfo = 
{
	"Y", &t730_0_0_6, &t1352_TI, offsetof(t1352, f7) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1352_FIs[] =
{
	&t1352_f0_FieldInfo,
	&t1352_f1_FieldInfo,
	&t1352_f2_FieldInfo,
	&t1352_f3_FieldInfo,
	&t1352_f4_FieldInfo,
	&t1352_f5_FieldInfo,
	&t1352_f6_FieldInfo,
	&t1352_f7_FieldInfo,
	NULL
};
static Il2CppMethodReference t1352_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1352_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1352_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1352__CustomAttributeCache = {
1,
NULL,
&t1352_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1352_1_0_0;
extern CustomAttributesCache t1352__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1352_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1352_VT, t1352_VTIGM, NULL};
TypeInfo t1352_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSAParameters", "System.Security.Cryptography", t1352_MIs, NULL, t1352_FIs, NULL, &t1352_TI, NULL, &t1352__CustomAttributeCache, &t1352_0_0_0, &t1352_1_0_0, &t1352_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t1352_marshal, (methodPointerType)t1352_marshal_back, (methodPointerType)t1352_marshal_cleanup, sizeof (t1352)+ sizeof (Il2CppObject), sizeof (t1352)+ sizeof (Il2CppObject), 0, sizeof(t1352_marshaled), 0, 0, -1, 1057033, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 8, 0, 0, 4, 0, 0};
#include "t1535.h"
// Metadata Definition System.Security.Cryptography.DSASignatureDeformatter
extern TypeInfo t1535_TI;
#include "t1535MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10408_MI = 
{
	".ctor", (methodPointerType)&m10408, &t1535_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4397, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1212_0_0_0;
static ParameterInfo t1535_m6936_ParameterInfos[] = 
{
	{"key", 0, 134223066, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6936_MI = 
{
	".ctor", (methodPointerType)&m6936, &t1535_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1535_m6936_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4398, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1535_m6937_ParameterInfos[] = 
{
	{"strName", 0, 134223067, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6937_MI = 
{
	"SetHashAlgorithm", (methodPointerType)&m6937, &t1535_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1535_m6937_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4399, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1212_0_0_0;
static ParameterInfo t1535_m10409_ParameterInfos[] = 
{
	{"key", 0, 134223068, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10409_MI = 
{
	"SetKey", (methodPointerType)&m10409, &t1535_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1535_m10409_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4400, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t730_0_0_0;
static ParameterInfo t1535_m6938_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223069, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"rgbSignature", 1, 134223070, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6938_MI = 
{
	"VerifySignature", (methodPointerType)&m6938, &t1535_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1535_m6938_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, false, 4401, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1535_MIs[] =
{
	&m10408_MI,
	&m6936_MI,
	&m6937_MI,
	&m10409_MI,
	&m6938_MI,
	NULL
};
extern Il2CppType t1216_0_0_1;
FieldInfo t1535_f0_FieldInfo = 
{
	"dsa", &t1216_0_0_1, &t1535_TI, offsetof(t1535, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1535_FIs[] =
{
	&t1535_f0_FieldInfo,
	NULL
};
extern MethodInfo m6937_MI;
extern MethodInfo m10409_MI;
extern MethodInfo m6938_MI;
static Il2CppMethodReference t1535_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m6937_MI,
	&m10409_MI,
	&m6938_MI,
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
};
void t1535_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
struct t1535;
extern CustomAttributesCache t1535__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1535_DM = 
{
	NULL, NULL, NULL, NULL, &t1489_0_0_0, t1535_VT, t1535_VTIGM, NULL};
TypeInfo t1535_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSASignatureDeformatter", "System.Security.Cryptography", t1535_MIs, NULL, t1535_FIs, NULL, &t1535_TI, NULL, &t1535__CustomAttributeCache, &t1535_0_0_0, &t1535_1_0_0, &t1535_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1535), sizeof (t1535), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 1, 0, 0, 7, 0, 0};
#include "t1984.h"
// Metadata Definition System.Security.Cryptography.DSASignatureFormatter
extern TypeInfo t1984_TI;
#include "t1984MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10410_MI = 
{
	".ctor", (methodPointerType)&m10410, &t1984_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4402, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1984_m10411_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223071, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10411_MI = 
{
	"CreateSignature", (methodPointerType)&m10411, &t1984_TI, &t730_0_0_0, RuntimeInvoker_t9_t9, t1984_m10411_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 1, false, false, 4403, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1984_m10412_ParameterInfos[] = 
{
	{"strName", 0, 134223072, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10412_MI = 
{
	"SetHashAlgorithm", (methodPointerType)&m10412, &t1984_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1984_m10412_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4404, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1212_0_0_0;
static ParameterInfo t1984_m10413_ParameterInfos[] = 
{
	{"key", 0, 134223073, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10413_MI = 
{
	"SetKey", (methodPointerType)&m10413, &t1984_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1984_m10413_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4405, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1984_MIs[] =
{
	&m10410_MI,
	&m10411_MI,
	&m10412_MI,
	&m10413_MI,
	NULL
};
extern Il2CppType t1216_0_0_1;
FieldInfo t1984_f0_FieldInfo = 
{
	"dsa", &t1216_0_0_1, &t1984_TI, offsetof(t1984, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1984_FIs[] =
{
	&t1984_f0_FieldInfo,
	NULL
};
extern MethodInfo m10412_MI;
extern MethodInfo m10413_MI;
extern MethodInfo m10411_MI;
static Il2CppMethodReference t1984_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10412_MI,
	&m10413_MI,
	&m10411_MI,
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
};
void t1984_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1984__CustomAttributeCache = {
1,
NULL,
&t1984_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1984_0_0_0;
extern Il2CppType t1984_1_0_0;
struct t1984;
extern CustomAttributesCache t1984__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1984_DM = 
{
	NULL, NULL, NULL, NULL, &t1491_0_0_0, t1984_VT, t1984_VTIGM, NULL};
TypeInfo t1984_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSASignatureFormatter", "System.Security.Cryptography", t1984_MIs, NULL, t1984_FIs, NULL, &t1984_TI, NULL, &t1984__CustomAttributeCache, &t1984_0_0_0, &t1984_1_0_0, &t1984_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1984), sizeof (t1984), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 7, 0, 0};
#include "t1532.h"
// Metadata Definition System.Security.Cryptography.HMAC
extern TypeInfo t1532_TI;
#include "t1532MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10414_MI = 
{
	".ctor", (methodPointerType)&m10414, &t1532_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4406, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10415_MI = 
{
	"get_BlockSizeValue", (methodPointerType)&m10415, &t1532_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2180, 0, 255, 0, false, false, 4407, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1532_m10416_ParameterInfos[] = 
{
	{"value", 0, 134223074, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10416_MI = 
{
	"set_BlockSizeValue", (methodPointerType)&m10416, &t1532_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1532_m10416_ParameterInfos, &EmptyCustomAttributesCache, 2180, 0, 255, 1, false, false, 4408, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1532_m10417_ParameterInfos[] = 
{
	{"value", 0, 134223075, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10417_MI = 
{
	"set_HashName", (methodPointerType)&m10417, &t1532_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1532_m10417_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4409, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10418_MI = 
{
	"get_Key", (methodPointerType)&m10418, &t1532_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 4410, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1532_m6929_ParameterInfos[] = 
{
	{"value", 0, 134223076, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6929_MI = 
{
	"set_Key", (methodPointerType)&m6929, &t1532_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1532_m6929_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 16, 1, false, false, 4411, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1631_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10419_MI = 
{
	"get_Block", (methodPointerType)&m10419, &t1532_TI, &t1631_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4412, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t575_0_0_0;
static ParameterInfo t1532_m10420_ParameterInfos[] = 
{
	{"key", 0, 134223077, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"padding", 1, 134223078, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10420_MI = 
{
	"KeySetup", (methodPointerType)&m10420, &t1532_TI, &t730_0_0_0, RuntimeInvoker_t9_t9_t186, t1532_m10420_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4413, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1532_m10421_ParameterInfos[] = 
{
	{"disposing", 0, 134223079, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10421_MI = 
{
	"Dispose", (methodPointerType)&m10421, &t1532_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1532_m10421_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 14, 1, false, false, 4414, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1532_m10422_ParameterInfos[] = 
{
	{"rgb", 0, 134223080, &EmptyCustomAttributesCache, &t730_0_0_0},
	{"ib", 1, 134223081, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cb", 2, 134223082, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10422_MI = 
{
	"HashCore", (methodPointerType)&m10422, &t1532_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1532_m10422_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4415, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10423_MI = 
{
	"HashFinal", (methodPointerType)&m10423, &t1532_TI, &t730_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4416, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10424_MI = 
{
	"Initialize", (methodPointerType)&m10424, &t1532_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4417, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1532_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6928_MI = 
{
	"Create", (methodPointerType)&m6928, &t1532_TI, &t1532_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4418, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1532_m10425_ParameterInfos[] = 
{
	{"algorithmName", 0, 134223083, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1532_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10425_MI = 
{
	"Create", (methodPointerType)&m10425, &t1532_TI, &t1532_0_0_0, RuntimeInvoker_t9_t9, t1532_m10425_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4419, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1532_MIs[] =
{
	&m10414_MI,
	&m10415_MI,
	&m10416_MI,
	&m10417_MI,
	&m10418_MI,
	&m6929_MI,
	&m10419_MI,
	&m10420_MI,
	&m10421_MI,
	&m10422_MI,
	&m10423_MI,
	&m10424_MI,
	&m6928_MI,
	&m10425_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t1532_f5_FieldInfo = 
{
	"_disposed", &t124_0_0_1, &t1532_TI, offsetof(t1532, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1532_f6_FieldInfo = 
{
	"_hashName", &t2_0_0_1, &t1532_TI, offsetof(t1532, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1368_0_0_1;
FieldInfo t1532_f7_FieldInfo = 
{
	"_algo", &t1368_0_0_1, &t1532_TI, offsetof(t1532, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1631_0_0_1;
FieldInfo t1532_f8_FieldInfo = 
{
	"_block", &t1631_0_0_1, &t1532_TI, offsetof(t1532, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1532_f9_FieldInfo = 
{
	"_blockSizeValue", &t125_0_0_1, &t1532_TI, offsetof(t1532, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1532_FIs[] =
{
	&t1532_f5_FieldInfo,
	&t1532_f6_FieldInfo,
	&t1532_f7_FieldInfo,
	&t1532_f8_FieldInfo,
	&t1532_f9_FieldInfo,
	NULL
};
extern MethodInfo m10415_MI;
extern MethodInfo m10416_MI;
static PropertyInfo t1532____BlockSizeValue_PropertyInfo = 
{
	&t1532_TI, "BlockSizeValue", &m10415_MI, &m10416_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10417_MI;
static PropertyInfo t1532____HashName_PropertyInfo = 
{
	&t1532_TI, "HashName", NULL, &m10417_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10418_MI;
extern MethodInfo m6929_MI;
static PropertyInfo t1532____Key_PropertyInfo = 
{
	&t1532_TI, "Key", &m10418_MI, &m6929_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10419_MI;
static PropertyInfo t1532____Block_PropertyInfo = 
{
	&t1532_TI, "Block", &m10419_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1532_PIs[] =
{
	&t1532____BlockSizeValue_PropertyInfo,
	&t1532____HashName_PropertyInfo,
	&t1532____Key_PropertyInfo,
	&t1532____Block_PropertyInfo,
	NULL
};
extern MethodInfo m7054_MI;
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
static Il2CppMethodReference t1532_VT[] =
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
};
static Il2CppInterfaceOffsetPair t1532_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t1532_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
extern Il2CppType t1450_0_0_0;
struct t1532;
extern CustomAttributesCache t1532__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1532_DM = 
{
	NULL, NULL, NULL, t1532_IOs, &t1450_0_0_0, t1532_VT, t1532_VTIGM, NULL};
TypeInfo t1532_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMAC", "System.Security.Cryptography", t1532_MIs, t1532_PIs, t1532_FIs, NULL, &t1532_TI, NULL, &t1532__CustomAttributeCache, &t1532_0_0_0, &t1532_1_0_0, &t1532_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1532), sizeof (t1532), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 14, 4, 5, 0, 0, 17, 0, 2};
#include "t1985.h"
// Metadata Definition System.Security.Cryptography.HMACMD5
extern TypeInfo t1985_TI;
#include "t1985MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10426_MI = 
{
	".ctor", (methodPointerType)&m10426, &t1985_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4420, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1985_m10427_ParameterInfos[] = 
{
	{"key", 0, 134223084, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10427_MI = 
{
	".ctor", (methodPointerType)&m10427, &t1985_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1985_m10427_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4421, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1985_MIs[] =
{
	&m10426_MI,
	&m10427_MI,
	NULL
};
static Il2CppMethodReference t1985_VT[] =
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
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1985_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t1985_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, NULL, t1985_IOs, &t1532_0_0_0, t1985_VT, t1985_VTIGM, NULL};
TypeInfo t1985_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACMD5", "System.Security.Cryptography", t1985_MIs, NULL, NULL, NULL, &t1985_TI, NULL, &t1985__CustomAttributeCache, &t1985_0_0_0, &t1985_1_0_0, &t1985_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1985), sizeof (t1985), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 2, 0, 0, 0, 0, 17, 0, 2};
#include "t1986.h"
// Metadata Definition System.Security.Cryptography.HMACRIPEMD160
extern TypeInfo t1986_TI;
#include "t1986MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10428_MI = 
{
	".ctor", (methodPointerType)&m10428, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4422, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1986_m10429_ParameterInfos[] = 
{
	{"key", 0, 134223085, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10429_MI = 
{
	".ctor", (methodPointerType)&m10429, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1986_m10429_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4423, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1986_MIs[] =
{
	&m10428_MI,
	&m10429_MI,
	NULL
};
static Il2CppMethodReference t1986_VT[] =
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
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1986_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t1986_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
	NULL, NULL, NULL, t1986_IOs, &t1532_0_0_0, t1986_VT, t1986_VTIGM, NULL};
TypeInfo t1986_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACRIPEMD160", "System.Security.Cryptography", t1986_MIs, NULL, NULL, NULL, &t1986_TI, NULL, &t1986__CustomAttributeCache, &t1986_0_0_0, &t1986_1_0_0, &t1986_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1986), sizeof (t1986), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 2, 0, 0, 0, 0, 17, 0, 2};
#include "t1531.h"
// Metadata Definition System.Security.Cryptography.HMACSHA1
extern TypeInfo t1531_TI;
#include "t1531MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10430_MI = 
{
	".ctor", (methodPointerType)&m10430, &t1531_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4424, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1531_m10431_ParameterInfos[] = 
{
	{"key", 0, 134223086, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10431_MI = 
{
	".ctor", (methodPointerType)&m10431, &t1531_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1531_m10431_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4425, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1531_MIs[] =
{
	&m10430_MI,
	&m10431_MI,
	NULL
};
static Il2CppMethodReference t1531_VT[] =
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
};
static Il2CppInterfaceOffsetPair t1531_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t1531_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
struct t1531;
extern CustomAttributesCache t1531__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1531_DM = 
{
	NULL, NULL, NULL, t1531_IOs, &t1532_0_0_0, t1531_VT, t1531_VTIGM, NULL};
TypeInfo t1531_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACSHA1", "System.Security.Cryptography", t1531_MIs, NULL, NULL, NULL, &t1531_TI, NULL, &t1531__CustomAttributeCache, &t1531_0_0_0, &t1531_1_0_0, &t1531_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1531), sizeof (t1531), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 2, 0, 0, 0, 0, 17, 0, 2};
#include "t1987.h"
// Metadata Definition System.Security.Cryptography.HMACSHA256
extern TypeInfo t1987_TI;
#include "t1987MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10432_MI = 
{
	".ctor", (methodPointerType)&m10432, &t1987_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4426, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1987_m10433_ParameterInfos[] = 
{
	{"key", 0, 134223087, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10433_MI = 
{
	".ctor", (methodPointerType)&m10433, &t1987_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1987_m10433_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4427, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1987_MIs[] =
{
	&m10432_MI,
	&m10433_MI,
	NULL
};
static Il2CppMethodReference t1987_VT[] =
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
static bool t1987_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1987_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t1987_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1987__CustomAttributeCache = {
1,
NULL,
&t1987_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1987_0_0_0;
extern Il2CppType t1987_1_0_0;
struct t1987;
extern CustomAttributesCache t1987__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1987_DM = 
{
	NULL, NULL, NULL, t1987_IOs, &t1532_0_0_0, t1987_VT, t1987_VTIGM, NULL};
TypeInfo t1987_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACSHA256", "System.Security.Cryptography", t1987_MIs, NULL, NULL, NULL, &t1987_TI, NULL, &t1987__CustomAttributeCache, &t1987_0_0_0, &t1987_1_0_0, &t1987_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1987), sizeof (t1987), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 2, 0, 0, 0, 0, 17, 0, 2};
#include "t1988.h"
// Metadata Definition System.Security.Cryptography.HMACSHA384
extern TypeInfo t1988_TI;
#include "t1988MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10434_MI = 
{
	".ctor", (methodPointerType)&m10434, &t1988_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4428, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t730_0_0_0;
static ParameterInfo t1988_m10435_ParameterInfos[] = 
{
	{"key", 0, 134223088, &EmptyCustomAttributesCache, &t730_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10435_MI = 
{
	".ctor", (methodPointerType)&m10435, &t1988_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1988_m10435_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4429, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10436_MI = 
{
	".cctor", (methodPointerType)&m10436, &t1988_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4430, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1988_m10437_ParameterInfos[] = 
{
	{"value", 0, 134223089, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10437_MI = 
{
	"set_ProduceLegacyHmacValues", (methodPointerType)&m10437, &t1988_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1988_m10437_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4431, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1988_MIs[] =
{
	&m10434_MI,
	&m10435_MI,
	&m10436_MI,
	&m10437_MI,
	NULL
};
extern Il2CppType t124_0_0_17;
FieldInfo t1988_f10_FieldInfo = 
{
	"legacy_mode", &t124_0_0_17, &t1988_TI, offsetof(t1988_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1988_f11_FieldInfo = 
{
	"legacy", &t124_0_0_1, &t1988_TI, offsetof(t1988, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1988_FIs[] =
{
	&t1988_f10_FieldInfo,
	&t1988_f11_FieldInfo,
	NULL
};
extern MethodInfo m10437_MI;
static PropertyInfo t1988____ProduceLegacyHmacValues_PropertyInfo = 
{
	&t1988_TI, "ProduceLegacyHmacValues", NULL, &m10437_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1988_PIs[] =
{
	&t1988____ProduceLegacyHmacValues_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1988_VT[] =
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
static bool t1988_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1988_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1425_0_0_0, 5},
};
void t1988_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t677 * tmp;
		tmp = (t677 *)il2cpp_codegen_object_new (&t677_TI);
		m3128(tmp, true, &m3128_MI);
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
struct t1988;
extern CustomAttributesCache t1988__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1988_DM = 
{
	NULL, NULL, NULL, t1988_IOs, &t1532_0_0_0, t1988_VT, t1988_VTIGM, NULL};
TypeInfo t1988_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACSHA384", "System.Security.Cryptography", t1988_MIs, t1988_PIs, t1988_FIs, NULL, &t1988_TI, NULL, &t1988__CustomAttributeCache, &t1988_0_0_0, &t1988_1_0_0, &t1988_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1988), sizeof (t1988), 0, -1, sizeof(t1988_SFs), 0, -1, 1, 0, 0, false, false, false, false, false, false, false, true, true, false, 4, 1, 2, 0, 0, 17, 0, 2};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
