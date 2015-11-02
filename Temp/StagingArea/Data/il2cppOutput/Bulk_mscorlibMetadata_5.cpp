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
extern TypeInfo t2191_TI;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t2191_m12109_ParameterInfos[] = 
{
	{"obj", 0, 134222433, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12109_MI = 
{
	"DisconnectedObject", NULL, &t2191_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t2191_m12109_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 3943, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1596_0_0_0;
extern Il2CppType t1596_0_0_0;
static ParameterInfo t2191_m12107_ParameterInfos[] = 
{
	{"obj", 0, 134222434, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"or", 1, 134222435, &EmptyCustomAttributesCache, &t1596_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12107_MI = 
{
	"MarshaledObject", NULL, &t2191_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2191_m12107_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, false, 3944, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1596_0_0_0;
static ParameterInfo t2191_m12108_ParameterInfos[] = 
{
	{"obj", 0, 134222436, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"or", 1, 134222437, &EmptyCustomAttributesCache, &t1596_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12108_MI = 
{
	"UnmarshaledObject", NULL, &t2191_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t2191_m12108_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 2, false, false, 3945, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2191_MIs[] =
{
	&m12109_MI,
	&m12107_MI,
	&m12108_MI,
	NULL
};
extern TypeInfo t684_TI;
#include "t684.h"
#include "t684MD.h"
extern MethodInfo m3168_MI;
void t2191_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2191__CustomAttributeCache = {
1,
NULL,
&t2191_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2191_0_0_0;
extern Il2CppType t2191_1_0_0;
struct t2191;
extern CustomAttributesCache t2191__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2191_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2191_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ITrackingHandler", "System.Runtime.Remoting.Services", t2191_MIs, NULL, NULL, NULL, &t2191_TI, NULL, &t2191__CustomAttributeCache, &t2191_0_0_0, &t2191_1_0_0, &t2191_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 0, 0, 0};
#include "t1922.h"
// Metadata Definition System.Runtime.Remoting.Services.TrackingServices
extern TypeInfo t1922_TI;
#include "t1922MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10087_MI = 
{
	".cctor", (methodPointerType)&m10087, &t1922_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3946, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1596_0_0_0;
static ParameterInfo t1922_m10088_ParameterInfos[] = 
{
	{"obj", 0, 134222438, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"or", 1, 134222439, &EmptyCustomAttributesCache, &t1596_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10088_MI = 
{
	"NotifyMarshaledObject", (methodPointerType)&m10088, &t1922_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1922_m10088_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 3947, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1596_0_0_0;
static ParameterInfo t1922_m10089_ParameterInfos[] = 
{
	{"obj", 0, 134222440, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"or", 1, 134222441, &EmptyCustomAttributesCache, &t1596_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10089_MI = 
{
	"NotifyUnmarshaledObject", (methodPointerType)&m10089, &t1922_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1922_m10089_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 3948, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1922_m10090_ParameterInfos[] = 
{
	{"obj", 0, 134222442, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10090_MI = 
{
	"NotifyDisconnectedObject", (methodPointerType)&m10090, &t1922_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1922_m10090_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 3949, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1922_MIs[] =
{
	&m10087_MI,
	&m10088_MI,
	&m10089_MI,
	&m10090_MI,
	NULL
};
extern Il2CppType t1176_0_0_17;
FieldInfo t1922_f0_FieldInfo = 
{
	"_handlers", &t1176_0_0_17, &t1922_TI, offsetof(t1922_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1922_FIs[] =
{
	&t1922_f0_FieldInfo,
	NULL
};
extern MethodInfo m671_MI;
extern MethodInfo m646_MI;
extern MethodInfo m672_MI;
extern MethodInfo m673_MI;
static Il2CppMethodReference t1922_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1922_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1922_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1922_VT, t1922_VTIGM, NULL};
TypeInfo t1922_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TrackingServices", "System.Runtime.Remoting.Services", t1922_MIs, NULL, t1922_FIs, NULL, &t1922_TI, NULL, &t1922__CustomAttributeCache, &t1922_0_0_0, &t1922_1_0_0, &t1922_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1922), sizeof (t1922), 0, -1, sizeof(t1922_SFs), 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, true, false, 4, 0, 1, 0, 0, 4, 0, 0};
#include "t1923.h"
// Metadata Definition System.Runtime.Remoting.ActivatedClientTypeEntry
extern TypeInfo t1923_TI;
#include "t1923MD.h"
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10091_MI = 
{
	"get_ApplicationUrl", (methodPointerType)&m10091, &t1923_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3950, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1925_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10092_MI = 
{
	"get_ContextAttributes", (methodPointerType)&m10092, &t1923_TI, &t1925_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3951, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10093_MI = 
{
	"get_ObjectType", (methodPointerType)&m10093, &t1923_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3952, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10094_MI = 
{
	"ToString", (methodPointerType)&m10094, &t1923_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3953, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1923_MIs[] =
{
	&m10091_MI,
	&m10092_MI,
	&m10093_MI,
	&m10094_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1923_f2_FieldInfo = 
{
	"applicationUrl", &t2_0_0_1, &t1923_TI, offsetof(t1923, f2), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1923_f3_FieldInfo = 
{
	"obj_type", &t126_0_0_1, &t1923_TI, offsetof(t1923, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1923_FIs[] =
{
	&t1923_f2_FieldInfo,
	&t1923_f3_FieldInfo,
	NULL
};
extern MethodInfo m10091_MI;
static PropertyInfo t1923____ApplicationUrl_PropertyInfo = 
{
	&t1923_TI, "ApplicationUrl", &m10091_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10092_MI;
static PropertyInfo t1923____ContextAttributes_PropertyInfo = 
{
	&t1923_TI, "ContextAttributes", &m10092_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10093_MI;
static PropertyInfo t1923____ObjectType_PropertyInfo = 
{
	&t1923_TI, "ObjectType", &m10093_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1923_PIs[] =
{
	&t1923____ApplicationUrl_PropertyInfo,
	&t1923____ContextAttributes_PropertyInfo,
	&t1923____ObjectType_PropertyInfo,
	NULL
};
extern MethodInfo m10094_MI;
static Il2CppMethodReference t1923_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m10094_MI,
};
static bool t1923_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1923_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
extern Il2CppType t1924_0_0_0;
struct t1923;
extern CustomAttributesCache t1923__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1923_DM = 
{
	NULL, NULL, NULL, NULL, &t1924_0_0_0, t1923_VT, t1923_VTIGM, NULL};
TypeInfo t1923_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ActivatedClientTypeEntry", "System.Runtime.Remoting", t1923_MIs, t1923_PIs, t1923_FIs, NULL, &t1923_TI, NULL, &t1923__CustomAttributeCache, &t1923_0_0_0, &t1923_1_0_0, &t1923_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1923), sizeof (t1923), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 3, 2, 0, 0, 4, 0, 0};
#include "t1926.h"
// Metadata Definition System.Runtime.Remoting.EnvoyInfo
extern TypeInfo t1926_TI;
#include "t1926MD.h"
extern Il2CppType t1410_0_0_0;
extern Il2CppType t1410_0_0_0;
static ParameterInfo t1926_m10095_ParameterInfos[] = 
{
	{"sinks", 0, 134222443, &EmptyCustomAttributesCache, &t1410_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10095_MI = 
{
	".ctor", (methodPointerType)&m10095, &t1926_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1926_m10095_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3954, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1410_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10096_MI = 
{
	"get_EnvoySinks", (methodPointerType)&m10096, &t1926_TI, &t1410_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 3955, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1926_MIs[] =
{
	&m10095_MI,
	&m10096_MI,
	NULL
};
extern Il2CppType t1410_0_0_1;
FieldInfo t1926_f0_FieldInfo = 
{
	"envoySinks", &t1410_0_0_1, &t1926_TI, offsetof(t1926, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1926_FIs[] =
{
	&t1926_f0_FieldInfo,
	NULL
};
extern MethodInfo m10096_MI;
static PropertyInfo t1926____EnvoySinks_PropertyInfo = 
{
	&t1926_TI, "EnvoySinks", &m10096_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1926_PIs[] =
{
	&t1926____EnvoySinks_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1926_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10096_MI,
};
static bool t1926_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t1930_0_0_0;
static const Il2CppType* t1926_ITIs[] = 
{
	&t1930_0_0_0,
};
static Il2CppInterfaceOffsetPair t1926_IOs[] = 
{
	{ &t1930_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1926_0_0_0;
extern Il2CppType t1926_1_0_0;
struct t1926;
const Il2CppTypeDefinitionMetadata t1926_DM = 
{
	NULL, NULL, t1926_ITIs, t1926_IOs, &t9_0_0_0, t1926_VT, t1926_VTIGM, NULL};
TypeInfo t1926_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EnvoyInfo", "System.Runtime.Remoting", t1926_MIs, t1926_PIs, t1926_FIs, NULL, &t1926_TI, NULL, &EmptyCustomAttributesCache, &t1926_0_0_0, &t1926_1_0_0, &t1926_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1926), sizeof (t1926), 0, -1, 0, 0, -1, 1056768, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 1, 0, 0, 5, 1, 1};
// Metadata Definition System.Runtime.Remoting.IChannelInfo
extern TypeInfo t1928_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12111_MI = 
{
	"get_ChannelData", NULL, &t1928_TI, &t158_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3956, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1928_MIs[] =
{
	&m12111_MI,
	NULL
};
extern MethodInfo m12111_MI;
static PropertyInfo t1928____ChannelData_PropertyInfo = 
{
	&t1928_TI, "ChannelData", &m12111_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1928_PIs[] =
{
	&t1928____ChannelData_PropertyInfo,
	NULL
};
void t1928_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1928__CustomAttributeCache = {
1,
NULL,
&t1928_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1928_0_0_0;
extern Il2CppType t1928_1_0_0;
struct t1928;
extern CustomAttributesCache t1928__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1928_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1928_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IChannelInfo", "System.Runtime.Remoting", t1928_MIs, t1928_PIs, NULL, NULL, &t1928_TI, NULL, &t1928__CustomAttributeCache, &t1928_0_0_0, &t1928_1_0_0, &t1928_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Remoting.IEnvoyInfo
extern TypeInfo t1930_TI;
extern Il2CppType t1410_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12110_MI = 
{
	"get_EnvoySinks", NULL, &t1930_TI, &t1410_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3957, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1930_MIs[] =
{
	&m12110_MI,
	NULL
};
extern MethodInfo m12110_MI;
static PropertyInfo t1930____EnvoySinks_PropertyInfo = 
{
	&t1930_TI, "EnvoySinks", &m12110_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1930_PIs[] =
{
	&t1930____EnvoySinks_PropertyInfo,
	NULL
};
void t1930_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
struct t1930;
extern CustomAttributesCache t1930__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1930_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1930_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnvoyInfo", "System.Runtime.Remoting", t1930_MIs, t1930_PIs, NULL, NULL, &t1930_TI, NULL, &t1930__CustomAttributeCache, &t1930_0_0_0, &t1930_1_0_0, &t1930_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Remoting.IRemotingTypeInfo
extern TypeInfo t1929_TI;
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12105_MI = 
{
	"get_TypeName", NULL, &t1929_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3958, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1929_MIs[] =
{
	&m12105_MI,
	NULL
};
extern MethodInfo m12105_MI;
static PropertyInfo t1929____TypeName_PropertyInfo = 
{
	&t1929_TI, "TypeName", &m12105_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1929_PIs[] =
{
	&t1929____TypeName_PropertyInfo,
	NULL
};
void t1929_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1929_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IRemotingTypeInfo", "System.Runtime.Remoting", t1929_MIs, t1929_PIs, NULL, NULL, &t1929_TI, NULL, &t1929__CustomAttributeCache, &t1929_0_0_0, &t1929_1_0_0, &t1929_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
#include "t1919.h"
// Metadata Definition System.Runtime.Remoting.Identity
extern TypeInfo t1919_TI;
#include "t1919MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1919_m10097_ParameterInfos[] = 
{
	{"objectUri", 0, 134222444, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10097_MI = 
{
	".ctor", (methodPointerType)&m10097, &t1919_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1919_m10097_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3959, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1919_m12106_ParameterInfos[] = 
{
	{"requestedType", 0, 134222445, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1596_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12106_MI = 
{
	"CreateObjRef", NULL, &t1919_TI, &t1596_0_0_0, RuntimeInvoker_t9_t9, t1919_m12106_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 3960, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1410_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10098_MI = 
{
	"get_ChannelSink", (methodPointerType)&m10098, &t1919_TI, &t1410_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3961, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1410_0_0_0;
static ParameterInfo t1919_m10099_ParameterInfos[] = 
{
	{"value", 0, 134222446, &EmptyCustomAttributesCache, &t1410_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10099_MI = 
{
	"set_ChannelSink", (methodPointerType)&m10099, &t1919_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1919_m10099_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3962, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10100_MI = 
{
	"get_ObjectUri", (methodPointerType)&m10100, &t1919_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3963, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1919_m10101_ParameterInfos[] = 
{
	{"value", 0, 134222447, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10101_MI = 
{
	"set_ObjectUri", (methodPointerType)&m10101, &t1919_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1919_m10101_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3964, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10102_MI = 
{
	"get_IsConnected", (methodPointerType)&m10102, &t1919_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3965, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10103_MI = 
{
	"get_Disposed", (methodPointerType)&m10103, &t1919_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3966, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1919_m10104_ParameterInfos[] = 
{
	{"value", 0, 134222448, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10104_MI = 
{
	"set_Disposed", (methodPointerType)&m10104, &t1919_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1919_m10104_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3967, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1919_MIs[] =
{
	&m10097_MI,
	&m12106_MI,
	&m10098_MI,
	&m10099_MI,
	&m10100_MI,
	&m10101_MI,
	&m10102_MI,
	&m10103_MI,
	&m10104_MI,
	NULL
};
extern Il2CppType t2_0_0_4;
FieldInfo t1919_f0_FieldInfo = 
{
	"_objectUri", &t2_0_0_4, &t1919_TI, offsetof(t1919, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1410_0_0_4;
FieldInfo t1919_f1_FieldInfo = 
{
	"_channelSink", &t1410_0_0_4, &t1919_TI, offsetof(t1919, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1410_0_0_4;
FieldInfo t1919_f2_FieldInfo = 
{
	"_envoySink", &t1410_0_0_4, &t1919_TI, offsetof(t1919, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1596_0_0_4;
FieldInfo t1919_f3_FieldInfo = 
{
	"_objRef", &t1596_0_0_4, &t1919_TI, offsetof(t1919, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1919_f4_FieldInfo = 
{
	"_disposed", &t124_0_0_1, &t1919_TI, offsetof(t1919, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1919_FIs[] =
{
	&t1919_f0_FieldInfo,
	&t1919_f1_FieldInfo,
	&t1919_f2_FieldInfo,
	&t1919_f3_FieldInfo,
	&t1919_f4_FieldInfo,
	NULL
};
extern MethodInfo m10098_MI;
extern MethodInfo m10099_MI;
static PropertyInfo t1919____ChannelSink_PropertyInfo = 
{
	&t1919_TI, "ChannelSink", &m10098_MI, &m10099_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10100_MI;
extern MethodInfo m10101_MI;
static PropertyInfo t1919____ObjectUri_PropertyInfo = 
{
	&t1919_TI, "ObjectUri", &m10100_MI, &m10101_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10102_MI;
static PropertyInfo t1919____IsConnected_PropertyInfo = 
{
	&t1919_TI, "IsConnected", &m10102_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10103_MI;
extern MethodInfo m10104_MI;
static PropertyInfo t1919____Disposed_PropertyInfo = 
{
	&t1919_TI, "Disposed", &m10103_MI, &m10104_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1919_PIs[] =
{
	&t1919____ChannelSink_PropertyInfo,
	&t1919____ObjectUri_PropertyInfo,
	&t1919____IsConnected_PropertyInfo,
	&t1919____Disposed_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1919_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t1919_VTIGM[] =
{
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
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1919_VT, t1919_VTIGM, NULL};
TypeInfo t1919_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Identity", "System.Runtime.Remoting", t1919_MIs, t1919_PIs, t1919_FIs, NULL, &t1919_TI, NULL, &EmptyCustomAttributesCache, &t1919_0_0_0, &t1919_1_0_0, &t1919_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1919), sizeof (t1919), 0, -1, 0, 0, -1, 1048704, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 4, 5, 0, 0, 5, 0, 0};
#include "t1920.h"
// Metadata Definition System.Runtime.Remoting.ClientIdentity
extern TypeInfo t1920_TI;
#include "t1920MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t1596_0_0_0;
static ParameterInfo t1920_m10105_ParameterInfos[] = 
{
	{"objectUri", 0, 134222449, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"objRef", 1, 134222450, &EmptyCustomAttributesCache, &t1596_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10105_MI = 
{
	".ctor", (methodPointerType)&m10105, &t1920_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1920_m10105_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3968, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1215_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10106_MI = 
{
	"get_ClientProxy", (methodPointerType)&m10106, &t1920_TI, &t1215_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3969, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1215_0_0_0;
extern Il2CppType t1215_0_0_0;
static ParameterInfo t1920_m10107_ParameterInfos[] = 
{
	{"value", 0, 134222451, &EmptyCustomAttributesCache, &t1215_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10107_MI = 
{
	"set_ClientProxy", (methodPointerType)&m10107, &t1920_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1920_m10107_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3970, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1920_m10108_ParameterInfos[] = 
{
	{"requestedType", 0, 134222452, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1596_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10108_MI = 
{
	"CreateObjRef", (methodPointerType)&m10108, &t1920_TI, &t1596_0_0_0, RuntimeInvoker_t9_t9, t1920_m10108_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 3971, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10109_MI = 
{
	"get_TargetUri", (methodPointerType)&m10109, &t1920_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3972, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1920_MIs[] =
{
	&m10105_MI,
	&m10106_MI,
	&m10107_MI,
	&m10108_MI,
	&m10109_MI,
	NULL
};
extern Il2CppType t1927_0_0_1;
FieldInfo t1920_f5_FieldInfo = 
{
	"_proxyReference", &t1927_0_0_1, &t1920_TI, offsetof(t1920, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1920_FIs[] =
{
	&t1920_f5_FieldInfo,
	NULL
};
extern MethodInfo m10106_MI;
extern MethodInfo m10107_MI;
static PropertyInfo t1920____ClientProxy_PropertyInfo = 
{
	&t1920_TI, "ClientProxy", &m10106_MI, &m10107_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10109_MI;
static PropertyInfo t1920____TargetUri_PropertyInfo = 
{
	&t1920_TI, "TargetUri", &m10109_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1920_PIs[] =
{
	&t1920____ClientProxy_PropertyInfo,
	&t1920____TargetUri_PropertyInfo,
	NULL
};
extern MethodInfo m10108_MI;
static Il2CppMethodReference t1920_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10108_MI,
};
static bool t1920_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1920_0_0_0;
extern Il2CppType t1920_1_0_0;
struct t1920;
const Il2CppTypeDefinitionMetadata t1920_DM = 
{
	NULL, NULL, NULL, NULL, &t1919_0_0_0, t1920_VT, t1920_VTIGM, NULL};
TypeInfo t1920_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ClientIdentity", "System.Runtime.Remoting", t1920_MIs, t1920_PIs, t1920_FIs, NULL, &t1920_TI, NULL, &EmptyCustomAttributesCache, &t1920_0_0_0, &t1920_1_0_0, &t1920_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1920), sizeof (t1920), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 5, 0, 0};
#include "t1596.h"
// Metadata Definition System.Runtime.Remoting.ObjRef
extern TypeInfo t1596_TI;
#include "t1596MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10110_MI = 
{
	".ctor", (methodPointerType)&m10110, &t1596_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3973, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1596_m10111_ParameterInfos[] = 
{
	{"info", 0, 134222453, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134222454, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10111_MI = 
{
	".ctor", (methodPointerType)&m10111, &t1596_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1596_m10111_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 3974, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10112_MI = 
{
	".cctor", (methodPointerType)&m10112, &t1596_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3975, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10113_MI = 
{
	"get_IsReferenceToWellKnow", (methodPointerType)&m10113, &t1596_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 3976, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1928_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1596__CustomAttributeCache_m10114;
MethodInfo m10114_MI = 
{
	"get_ChannelInfo", (methodPointerType)&m10114, &t1596_TI, &t1928_0_0_0, RuntimeInvoker_t9, NULL, &t1596__CustomAttributeCache_m10114, 2502, 0, 6, 0, false, false, 3977, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1930_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10115_MI = 
{
	"get_EnvoyInfo", (methodPointerType)&m10115, &t1596_TI, &t1930_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 7, 0, false, false, 3978, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1930_0_0_0;
static ParameterInfo t1596_m10116_ParameterInfos[] = 
{
	{"value", 0, 134222455, &EmptyCustomAttributesCache, &t1930_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10116_MI = 
{
	"set_EnvoyInfo", (methodPointerType)&m10116, &t1596_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1596_m10116_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 8, 1, false, false, 3979, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1929_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10117_MI = 
{
	"get_TypeInfo", (methodPointerType)&m10117, &t1596_TI, &t1929_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 3980, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1929_0_0_0;
static ParameterInfo t1596_m10118_ParameterInfos[] = 
{
	{"value", 0, 134222456, &EmptyCustomAttributesCache, &t1929_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10118_MI = 
{
	"set_TypeInfo", (methodPointerType)&m10118, &t1596_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1596_m10118_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 10, 1, false, false, 3981, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10119_MI = 
{
	"get_URI", (methodPointerType)&m10119, &t1596_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 3982, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1596_m10120_ParameterInfos[] = 
{
	{"value", 0, 134222457, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10120_MI = 
{
	"set_URI", (methodPointerType)&m10120, &t1596_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1596_m10120_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 12, 1, false, false, 3983, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1596_m10121_ParameterInfos[] = 
{
	{"info", 0, 134222458, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134222459, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10121_MI = 
{
	"GetObjectData", (methodPointerType)&m10121, &t1596_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1596_m10121_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 2, false, false, 3984, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1596_m10122_ParameterInfos[] = 
{
	{"context", 0, 134222460, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10122_MI = 
{
	"GetRealObject", (methodPointerType)&m10122, &t1596_TI, &t9_0_0_0, RuntimeInvoker_t9_t1107, t1596_m10122_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 1, false, false, 3985, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10123_MI = 
{
	"UpdateChannelInfo", (methodPointerType)&m10123, &t1596_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 3986, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10124_MI = 
{
	"get_ServerType", (methodPointerType)&m10124, &t1596_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 3987, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1596_MIs[] =
{
	&m10110_MI,
	&m10111_MI,
	&m10112_MI,
	&m10113_MI,
	&m10114_MI,
	&m10115_MI,
	&m10116_MI,
	&m10117_MI,
	&m10118_MI,
	&m10119_MI,
	&m10120_MI,
	&m10121_MI,
	&m10122_MI,
	&m10123_MI,
	&m10124_MI,
	NULL
};
extern Il2CppType t1928_0_0_1;
FieldInfo t1596_f0_FieldInfo = 
{
	"channel_info", &t1928_0_0_1, &t1596_TI, offsetof(t1596, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1596_f1_FieldInfo = 
{
	"uri", &t2_0_0_1, &t1596_TI, offsetof(t1596, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1929_0_0_1;
FieldInfo t1596_f2_FieldInfo = 
{
	"typeInfo", &t1929_0_0_1, &t1596_TI, offsetof(t1596, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1930_0_0_1;
FieldInfo t1596_f3_FieldInfo = 
{
	"envoyInfo", &t1930_0_0_1, &t1596_TI, offsetof(t1596, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1596_f4_FieldInfo = 
{
	"flags", &t125_0_0_1, &t1596_TI, offsetof(t1596, f4), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1596_f5_FieldInfo = 
{
	"_serverType", &t126_0_0_1, &t1596_TI, offsetof(t1596, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t1596_f6_FieldInfo = 
{
	"MarshalledObjectRef", &t125_0_0_17, &t1596_TI, offsetof(t1596_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t1596_f7_FieldInfo = 
{
	"WellKnowObjectRef", &t125_0_0_17, &t1596_TI, offsetof(t1596_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t727_0_0_17;
extern CustomAttributesCache t1596__CustomAttributeCache_U3CU3Ef__switch$map26;
FieldInfo t1596_f8_FieldInfo = 
{
	"<>f__switch$map26", &t727_0_0_17, &t1596_TI, offsetof(t1596_SFs, f8), &t1596__CustomAttributeCache_U3CU3Ef__switch$map26};
static FieldInfo* t1596_FIs[] =
{
	&t1596_f0_FieldInfo,
	&t1596_f1_FieldInfo,
	&t1596_f2_FieldInfo,
	&t1596_f3_FieldInfo,
	&t1596_f4_FieldInfo,
	&t1596_f5_FieldInfo,
	&t1596_f6_FieldInfo,
	&t1596_f7_FieldInfo,
	&t1596_f8_FieldInfo,
	NULL
};
extern MethodInfo m10113_MI;
static PropertyInfo t1596____IsReferenceToWellKnow_PropertyInfo = 
{
	&t1596_TI, "IsReferenceToWellKnow", &m10113_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10114_MI;
static PropertyInfo t1596____ChannelInfo_PropertyInfo = 
{
	&t1596_TI, "ChannelInfo", &m10114_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10115_MI;
extern MethodInfo m10116_MI;
static PropertyInfo t1596____EnvoyInfo_PropertyInfo = 
{
	&t1596_TI, "EnvoyInfo", &m10115_MI, &m10116_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10117_MI;
extern MethodInfo m10118_MI;
static PropertyInfo t1596____TypeInfo_PropertyInfo = 
{
	&t1596_TI, "TypeInfo", &m10117_MI, &m10118_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10119_MI;
extern MethodInfo m10120_MI;
static PropertyInfo t1596____URI_PropertyInfo = 
{
	&t1596_TI, "URI", &m10119_MI, &m10120_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10124_MI;
static PropertyInfo t1596____ServerType_PropertyInfo = 
{
	&t1596_TI, "ServerType", &m10124_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1596_PIs[] =
{
	&t1596____IsReferenceToWellKnow_PropertyInfo,
	&t1596____ChannelInfo_PropertyInfo,
	&t1596____EnvoyInfo_PropertyInfo,
	&t1596____TypeInfo_PropertyInfo,
	&t1596____URI_PropertyInfo,
	&t1596____ServerType_PropertyInfo,
	NULL
};
extern MethodInfo m10121_MI;
extern MethodInfo m10122_MI;
static Il2CppMethodReference t1596_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10121_MI,
	&m10122_MI,
	&m10114_MI,
	&m10115_MI,
	&m10116_MI,
	&m10117_MI,
	&m10118_MI,
	&m10119_MI,
	&m10120_MI,
	&m10121_MI,
	&m10122_MI,
};
static bool t1596_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
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
extern Il2CppType t2196_0_0_0;
static const Il2CppType* t1596_ITIs[] = 
{
	&t630_0_0_0,
	&t2196_0_0_0,
};
static Il2CppInterfaceOffsetPair t1596_IOs[] = 
{
	{ &t630_0_0_0, 4},
	{ &t2196_0_0_0, 5},
};
void t1596_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void t1596_CustomAttributesCacheGenerator_U3CU3Ef__switch$map26(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1842_TI;
#include "t1842.h"
#include "t1842MD.h"
extern MethodInfo m9812_MI;
void t1596_CustomAttributesCacheGenerator_m10114(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1842 * tmp;
		tmp = (t1842 *)il2cpp_codegen_object_new (&t1842_TI);
		m9812(tmp, 3, 2, &m9812_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1596__CustomAttributeCache = {
1,
NULL,
&t1596_CustomAttributesCacheGenerator
};
CustomAttributesCache t1596__CustomAttributeCache_U3CU3Ef__switch$map26 = {
1,
NULL,
&t1596_CustomAttributesCacheGenerator_U3CU3Ef__switch$map26
};
CustomAttributesCache t1596__CustomAttributeCache_m10114 = {
1,
NULL,
&t1596_CustomAttributesCacheGenerator_m10114
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1596_1_0_0;
struct t1596;
extern CustomAttributesCache t1596__CustomAttributeCache;
extern CustomAttributesCache t1596__CustomAttributeCache_U3CU3Ef__switch$map26;
extern CustomAttributesCache t1596__CustomAttributeCache_m10114;
const Il2CppTypeDefinitionMetadata t1596_DM = 
{
	NULL, NULL, t1596_ITIs, t1596_IOs, &t9_0_0_0, t1596_VT, t1596_VTIGM, NULL};
TypeInfo t1596_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjRef", "System.Runtime.Remoting", t1596_MIs, t1596_PIs, t1596_FIs, NULL, &t1596_TI, NULL, &t1596__CustomAttributeCache, &t1596_0_0_0, &t1596_1_0_0, &t1596_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1596), sizeof (t1596), 0, -1, sizeof(t1596_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 15, 6, 9, 0, 0, 15, 2, 2};
#include "t1931.h"
// Metadata Definition System.Runtime.Remoting.RemotingConfiguration
extern TypeInfo t1931_TI;
#include "t1931MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10125_MI = 
{
	".cctor", (methodPointerType)&m10125, &t1931_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3988, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10126_MI = 
{
	"get_ApplicationName", (methodPointerType)&m10126, &t1931_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 3989, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10127_MI = 
{
	"get_ProcessId", (methodPointerType)&m10127, &t1931_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 3990, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1931_m10128_ParameterInfos[] = 
{
	{"svrType", 0, 134222461, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1923_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10128_MI = 
{
	"IsRemotelyActivatedClientType", (methodPointerType)&m10128, &t1931_TI, &t1923_0_0_0, RuntimeInvoker_t9_t9, t1931_m10128_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3991, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1931_MIs[] =
{
	&m10125_MI,
	&m10126_MI,
	&m10127_MI,
	&m10128_MI,
	NULL
};
extern Il2CppType t2_0_0_17;
FieldInfo t1931_f0_FieldInfo = 
{
	"applicationID", &t2_0_0_17, &t1931_TI, offsetof(t1931_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_17;
FieldInfo t1931_f1_FieldInfo = 
{
	"applicationName", &t2_0_0_17, &t1931_TI, offsetof(t1931_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_17;
FieldInfo t1931_f2_FieldInfo = 
{
	"processGuid", &t2_0_0_17, &t1931_TI, offsetof(t1931_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_17;
FieldInfo t1931_f3_FieldInfo = 
{
	"defaultConfigRead", &t124_0_0_17, &t1931_TI, offsetof(t1931_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_17;
FieldInfo t1931_f4_FieldInfo = 
{
	"defaultDelayedConfigRead", &t124_0_0_17, &t1931_TI, offsetof(t1931_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_17;
FieldInfo t1931_f5_FieldInfo = 
{
	"wellKnownClientEntries", &t1164_0_0_17, &t1931_TI, offsetof(t1931_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_17;
FieldInfo t1931_f6_FieldInfo = 
{
	"activatedClientEntries", &t1164_0_0_17, &t1931_TI, offsetof(t1931_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_17;
FieldInfo t1931_f7_FieldInfo = 
{
	"wellKnownServiceEntries", &t1164_0_0_17, &t1931_TI, offsetof(t1931_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_17;
FieldInfo t1931_f8_FieldInfo = 
{
	"activatedServiceEntries", &t1164_0_0_17, &t1931_TI, offsetof(t1931_SFs, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_17;
FieldInfo t1931_f9_FieldInfo = 
{
	"channelTemplates", &t1164_0_0_17, &t1931_TI, offsetof(t1931_SFs, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_17;
FieldInfo t1931_f10_FieldInfo = 
{
	"clientProviderTemplates", &t1164_0_0_17, &t1931_TI, offsetof(t1931_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_17;
FieldInfo t1931_f11_FieldInfo = 
{
	"serverProviderTemplates", &t1164_0_0_17, &t1931_TI, offsetof(t1931_SFs, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1931_FIs[] =
{
	&t1931_f0_FieldInfo,
	&t1931_f1_FieldInfo,
	&t1931_f2_FieldInfo,
	&t1931_f3_FieldInfo,
	&t1931_f4_FieldInfo,
	&t1931_f5_FieldInfo,
	&t1931_f6_FieldInfo,
	&t1931_f7_FieldInfo,
	&t1931_f8_FieldInfo,
	&t1931_f9_FieldInfo,
	&t1931_f10_FieldInfo,
	&t1931_f11_FieldInfo,
	NULL
};
extern MethodInfo m10126_MI;
static PropertyInfo t1931____ApplicationName_PropertyInfo = 
{
	&t1931_TI, "ApplicationName", &m10126_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10127_MI;
static PropertyInfo t1931____ProcessId_PropertyInfo = 
{
	&t1931_TI, "ProcessId", &m10127_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1931_PIs[] =
{
	&t1931____ApplicationName_PropertyInfo,
	&t1931____ProcessId_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1931_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1931_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1931_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1931__CustomAttributeCache = {
1,
NULL,
&t1931_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1931_0_0_0;
extern Il2CppType t1931_1_0_0;
struct t1931;
extern CustomAttributesCache t1931__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1931_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1931_VT, t1931_VTIGM, NULL};
TypeInfo t1931_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingConfiguration", "System.Runtime.Remoting", t1931_MIs, t1931_PIs, t1931_FIs, NULL, &t1931_TI, NULL, &t1931__CustomAttributeCache, &t1931_0_0_0, &t1931_1_0_0, &t1931_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1931), sizeof (t1931), 0, -1, sizeof(t1931_SFs), 0, -1, 1048961, 0, 0, false, false, false, false, false, false, false, false, true, false, 4, 2, 12, 0, 0, 4, 0, 0};
#include "t1932.h"
// Metadata Definition System.Runtime.Remoting.RemotingException
extern TypeInfo t1932_TI;
#include "t1932MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10129_MI = 
{
	".ctor", (methodPointerType)&m10129, &t1932_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3992, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1932_m10130_ParameterInfos[] = 
{
	{"message", 0, 134222462, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10130_MI = 
{
	".ctor", (methodPointerType)&m10130, &t1932_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1932_m10130_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3993, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1932_m10131_ParameterInfos[] = 
{
	{"info", 0, 134222463, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134222464, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10131_MI = 
{
	".ctor", (methodPointerType)&m10131, &t1932_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1932_m10131_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 3994, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1932_MIs[] =
{
	&m10129_MI,
	&m10130_MI,
	&m10131_MI,
	NULL
};
extern MethodInfo m4538_MI;
extern MethodInfo m4539_MI;
extern MethodInfo m4285_MI;
extern MethodInfo m1131_MI;
extern MethodInfo m4540_MI;
extern MethodInfo m4483_MI;
extern MethodInfo m4484_MI;
static Il2CppMethodReference t1932_VT[] =
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
};
extern Il2CppType t954_0_0_0;
static Il2CppInterfaceOffsetPair t1932_IOs[] = 
{
	{ &t630_0_0_0, 4},
	{ &t954_0_0_0, 5},
};
void t1932_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
extern Il2CppType t1375_0_0_0;
struct t1932;
extern CustomAttributesCache t1932__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1932_DM = 
{
	NULL, NULL, NULL, t1932_IOs, &t1375_0_0_0, t1932_VT, t1932_VTIGM, NULL};
TypeInfo t1932_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingException", "System.Runtime.Remoting", t1932_MIs, NULL, NULL, NULL, &t1932_TI, NULL, &t1932__CustomAttributeCache, &t1932_0_0_0, &t1932_1_0_0, &t1932_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1932), sizeof (t1932), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1933.h"
// Metadata Definition System.Runtime.Remoting.RemotingServices
extern TypeInfo t1933_TI;
#include "t1933MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10132_MI = 
{
	".cctor", (methodPointerType)&m10132, &t1933_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3995, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t920_0_0_0;
extern Il2CppType t920_0_0_0;
static ParameterInfo t1933_m10133_ParameterInfos[] = 
{
	{"type", 0, 134222465, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"method", 1, 134222466, &EmptyCustomAttributesCache, &t920_0_0_0},
};
extern Il2CppType t920_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10133_MI = 
{
	"GetVirtualMethod", (methodPointerType)&m10133, &t1933_TI, &t920_0_0_0, RuntimeInvoker_t9_t9_t9, t1933_m10133_ParameterInfos, &EmptyCustomAttributesCache, 147, 4096, 255, 2, false, false, 3996, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1933_m10134_ParameterInfos[] = 
{
	{"proxy", 0, 134222467, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1933__CustomAttributeCache_m10134;
MethodInfo m10134_MI = 
{
	"IsTransparentProxy", (methodPointerType)&m10134, &t1933_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1933_m10134_ParameterInfos, &t1933__CustomAttributeCache_m10134, 150, 4096, 255, 1, false, false, 3997, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1933_m10135_ParameterInfos[] = 
{
	{"URI", 0, 134222468, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10135_MI = 
{
	"GetServerTypeForUri", (methodPointerType)&m10135, &t1933_TI, &t126_0_0_0, RuntimeInvoker_t9_t9, t1933_m10135_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3998, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1596_0_0_0;
static ParameterInfo t1933_m10136_ParameterInfos[] = 
{
	{"objectRef", 0, 134222469, &EmptyCustomAttributesCache, &t1596_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10136_MI = 
{
	"Unmarshal", (methodPointerType)&m10136, &t1933_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1933_m10136_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3999, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1596_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1933_m10137_ParameterInfos[] = 
{
	{"objectRef", 0, 134222470, &EmptyCustomAttributesCache, &t1596_0_0_0},
	{"fRefine", 1, 134222471, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10137_MI = 
{
	"Unmarshal", (methodPointerType)&m10137, &t1933_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t186, t1933_m10137_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4000, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1215_0_0_0;
static ParameterInfo t1933_m10138_ParameterInfos[] = 
{
	{"Obj", 0, 134222472, &EmptyCustomAttributesCache, &t1215_0_0_0},
};
extern Il2CppType t1596_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10138_MI = 
{
	"Marshal", (methodPointerType)&m10138, &t1933_TI, &t1596_0_0_0, RuntimeInvoker_t9_t9, t1933_m10138_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4001, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1215_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1933_m10139_ParameterInfos[] = 
{
	{"Obj", 0, 134222473, &EmptyCustomAttributesCache, &t1215_0_0_0},
	{"ObjURI", 1, 134222474, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"RequestedType", 2, 134222475, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1596_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10139_MI = 
{
	"Marshal", (methodPointerType)&m10139, &t1933_TI, &t1596_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t1933_m10139_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 4002, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10140_MI = 
{
	"NewUri", (methodPointerType)&m10140, &t1933_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 145, 0, 255, 0, false, false, 4003, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1933_m10141_ParameterInfos[] = 
{
	{"proxy", 0, 134222476, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t1917_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1933__CustomAttributeCache_m10141;
MethodInfo m10141_MI = 
{
	"GetRealProxy", (methodPointerType)&m10141, &t1933_TI, &t1917_0_0_0, RuntimeInvoker_t9_t9, t1933_m10141_ParameterInfos, &t1933__CustomAttributeCache_m10141, 150, 0, 255, 1, false, false, 4004, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1903_0_0_0;
extern Il2CppType t1903_0_0_0;
static ParameterInfo t1933_m10142_ParameterInfos[] = 
{
	{"msg", 0, 134222477, &EmptyCustomAttributesCache, &t1903_0_0_0},
};
extern Il2CppType t920_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10142_MI = 
{
	"GetMethodBaseFromMethodMessage", (methodPointerType)&m10142, &t1933_TI, &t920_0_0_0, RuntimeInvoker_t9_t9, t1933_m10142_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4005, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t1933_m10143_ParameterInfos[] = 
{
	{"type", 0, 134222478, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"methodName", 1, 134222479, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"signature", 2, 134222480, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t920_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10143_MI = 
{
	"GetMethodBaseFromName", (methodPointerType)&m10143, &t1933_TI, &t920_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t1933_m10143_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 4006, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t1933_m10144_ParameterInfos[] = 
{
	{"type", 0, 134222481, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"methodName", 1, 134222482, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"signature", 2, 134222483, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t920_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10144_MI = 
{
	"FindInterfaceMethod", (methodPointerType)&m10144, &t1933_TI, &t920_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t1933_m10144_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4007, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1933_m10145_ParameterInfos[] = 
{
	{"obj", 0, 134222484, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"info", 1, 134222485, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 2, 134222486, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10145_MI = 
{
	"GetObjectData", (methodPointerType)&m10145, &t1933_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t1107, t1933_m10145_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 4008, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1903_0_0_0;
static ParameterInfo t1933_m10146_ParameterInfos[] = 
{
	{"msg", 0, 134222487, &EmptyCustomAttributesCache, &t1903_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10146_MI = 
{
	"IsMethodOverloaded", (methodPointerType)&m10146, &t1933_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1933_m10146_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4009, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t920_0_0_0;
static ParameterInfo t1933_m10147_ParameterInfos[] = 
{
	{"method", 0, 134222488, &EmptyCustomAttributesCache, &t920_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10147_MI = 
{
	"IsOneWay", (methodPointerType)&m10147, &t1933_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1933_m10147_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4010, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1923_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t158_0_0_0;
static ParameterInfo t1933_m10148_ParameterInfos[] = 
{
	{"entry", 0, 134222489, &EmptyCustomAttributesCache, &t1923_0_0_0},
	{"activationAttributes", 1, 134222490, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10148_MI = 
{
	"CreateClientProxy", (methodPointerType)&m10148, &t1933_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1933_m10148_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4011, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t158_0_0_0;
static ParameterInfo t1933_m10149_ParameterInfos[] = 
{
	{"type", 0, 134222491, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"activationAttributes", 1, 134222492, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10149_MI = 
{
	"CreateClientProxyForContextBound", (methodPointerType)&m10149, &t1933_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1933_m10149_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4012, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1933_m10150_ParameterInfos[] = 
{
	{"uri", 0, 134222493, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1919_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10150_MI = 
{
	"GetIdentityForUri", (methodPointerType)&m10150, &t1933_TI, &t1919_0_0_0, RuntimeInvoker_t9_t9, t1933_m10150_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 4013, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1933_m10151_ParameterInfos[] = 
{
	{"uri", 0, 134222494, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10151_MI = 
{
	"RemoveAppNameFromUri", (methodPointerType)&m10151, &t1933_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1933_m10151_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4014, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1596_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t9_1_0_2;
extern Il2CppType t9_1_0_0;
static ParameterInfo t1933_m10152_ParameterInfos[] = 
{
	{"objRef", 0, 134222495, &EmptyCustomAttributesCache, &t1596_0_0_0},
	{"proxyType", 1, 134222496, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"clientProxy", 2, 134222497, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t1920_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t1009 (MethodInfo* method, void* obj, void** args);
MethodInfo m10152_MI = 
{
	"GetOrCreateClientIdentity", (methodPointerType)&m10152, &t1933_TI, &t1920_0_0_0, RuntimeInvoker_t9_t9_t9_t1009, t1933_m10152_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 4015, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1215_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1933_m10153_ParameterInfos[] = 
{
	{"realObject", 0, 134222498, &EmptyCustomAttributesCache, &t1215_0_0_0},
	{"objectType", 1, 134222499, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"objectUri", 2, 134222500, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1934_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10153_MI = 
{
	"CreateClientActivatedServerIdentity", (methodPointerType)&m10153, &t1933_TI, &t1934_0_0_0, RuntimeInvoker_t9_t9_t9_t9, t1933_m10153_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 4016, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1935_0_0_0;
extern Il2CppType t1935_0_0_0;
static ParameterInfo t1933_m10154_ParameterInfos[] = 
{
	{"objectType", 0, 134222501, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"objectUri", 1, 134222502, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"mode", 2, 134222503, &EmptyCustomAttributesCache, &t1935_0_0_0},
};
extern Il2CppType t1595_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10154_MI = 
{
	"CreateWellKnownServerIdentity", (methodPointerType)&m10154, &t1933_TI, &t1595_0_0_0, RuntimeInvoker_t9_t9_t9_t125, t1933_m10154_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 4017, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1595_0_0_0;
extern Il2CppType t1595_0_0_0;
static ParameterInfo t1933_m10155_ParameterInfos[] = 
{
	{"identity", 0, 134222504, &EmptyCustomAttributesCache, &t1595_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10155_MI = 
{
	"RegisterServerIdentity", (methodPointerType)&m10155, &t1933_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1933_m10155_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4018, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1596_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1933_m10156_ParameterInfos[] = 
{
	{"objref", 0, 134222505, &EmptyCustomAttributesCache, &t1596_0_0_0},
	{"classToProxy", 1, 134222506, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10156_MI = 
{
	"GetProxyForRemoteObject", (methodPointerType)&m10156, &t1933_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1933_m10156_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4019, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1596_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1933_m10157_ParameterInfos[] = 
{
	{"objRef", 0, 134222507, &EmptyCustomAttributesCache, &t1596_0_0_0},
	{"proxyType", 1, 134222508, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10157_MI = 
{
	"GetRemoteObject", (methodPointerType)&m10157, &t1933_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1933_m10157_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4020, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10158_MI = 
{
	"RegisterInternalChannels", (methodPointerType)&m10158, &t1933_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 145, 0, 255, 0, false, false, 4021, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1919_0_0_0;
static ParameterInfo t1933_m10159_ParameterInfos[] = 
{
	{"ident", 0, 134222509, &EmptyCustomAttributesCache, &t1919_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10159_MI = 
{
	"DisposeIdentity", (methodPointerType)&m10159, &t1933_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1933_m10159_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 4022, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1933_m10160_ParameterInfos[] = 
{
	{"uri", 0, 134222510, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10160_MI = 
{
	"GetNormalizedUri", (methodPointerType)&m10160, &t1933_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1933_m10160_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4023, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1933_MIs[] =
{
	&m10132_MI,
	&m10133_MI,
	&m10134_MI,
	&m10135_MI,
	&m10136_MI,
	&m10137_MI,
	&m10138_MI,
	&m10139_MI,
	&m10140_MI,
	&m10141_MI,
	&m10142_MI,
	&m10143_MI,
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
	NULL
};
extern Il2CppType t1164_0_0_17;
FieldInfo t1933_f0_FieldInfo = 
{
	"uri_hash", &t1164_0_0_17, &t1933_TI, offsetof(t1933_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t299_0_0_17;
FieldInfo t1933_f1_FieldInfo = 
{
	"_serializationFormatter", &t299_0_0_17, &t1933_TI, offsetof(t1933_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t299_0_0_17;
FieldInfo t1933_f2_FieldInfo = 
{
	"_deserializationFormatter", &t299_0_0_17, &t1933_TI, offsetof(t1933_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_19;
FieldInfo t1933_f3_FieldInfo = 
{
	"app_id", &t2_0_0_19, &t1933_TI, offsetof(t1933_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t1933_f4_FieldInfo = 
{
	"next_id", &t125_0_0_17, &t1933_TI, offsetof(t1933_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t931_0_0_49;
FieldInfo t1933_f5_FieldInfo = 
{
	"methodBindings", &t931_0_0_49, &t1933_TI, offsetof(t1933_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t835_0_0_49;
FieldInfo t1933_f6_FieldInfo = 
{
	"FieldSetterMethod", &t835_0_0_49, &t1933_TI, offsetof(t1933_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t835_0_0_49;
FieldInfo t1933_f7_FieldInfo = 
{
	"FieldGetterMethod", &t835_0_0_49, &t1933_TI, offsetof(t1933_SFs, f7), &EmptyCustomAttributesCache};
static FieldInfo* t1933_FIs[] =
{
	&t1933_f0_FieldInfo,
	&t1933_f1_FieldInfo,
	&t1933_f2_FieldInfo,
	&t1933_f3_FieldInfo,
	&t1933_f4_FieldInfo,
	&t1933_f5_FieldInfo,
	&t1933_f6_FieldInfo,
	&t1933_f7_FieldInfo,
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
void t1933_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1933_CustomAttributesCacheGenerator_m10134(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1842 * tmp;
		tmp = (t1842 *)il2cpp_codegen_object_new (&t1842_TI);
		m9812(tmp, 3, 2, &m9812_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1933_CustomAttributesCacheGenerator_m10141(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1842 * tmp;
		tmp = (t1842 *)il2cpp_codegen_object_new (&t1842_TI);
		m9812(tmp, 3, 2, &m9812_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1933__CustomAttributeCache = {
1,
NULL,
&t1933_CustomAttributesCacheGenerator
};
CustomAttributesCache t1933__CustomAttributeCache_m10134 = {
1,
NULL,
&t1933_CustomAttributesCacheGenerator_m10134
};
CustomAttributesCache t1933__CustomAttributeCache_m10141 = {
1,
NULL,
&t1933_CustomAttributesCacheGenerator_m10141
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1933_0_0_0;
extern Il2CppType t1933_1_0_0;
struct t1933;
extern CustomAttributesCache t1933__CustomAttributeCache;
extern CustomAttributesCache t1933__CustomAttributeCache_m10134;
extern CustomAttributesCache t1933__CustomAttributeCache_m10141;
const Il2CppTypeDefinitionMetadata t1933_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1933_VT, t1933_VTIGM, NULL};
TypeInfo t1933_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingServices", "System.Runtime.Remoting", t1933_MIs, NULL, t1933_FIs, NULL, &t1933_TI, NULL, &t1933__CustomAttributeCache, &t1933_0_0_0, &t1933_1_0_0, &t1933_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1933), sizeof (t1933), 0, -1, sizeof(t1933_SFs), 0, -1, 257, 0, 0, false, false, false, false, false, false, false, false, true, false, 29, 0, 8, 0, 0, 4, 0, 0};
#include "t1595.h"
// Metadata Definition System.Runtime.Remoting.ServerIdentity
extern TypeInfo t1595_TI;
#include "t1595MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t1867_0_0_0;
extern Il2CppType t1867_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1595_m10161_ParameterInfos[] = 
{
	{"objectUri", 0, 134222511, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"context", 1, 134222512, &EmptyCustomAttributesCache, &t1867_0_0_0},
	{"objectType", 2, 134222513, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10161_MI = 
{
	".ctor", (methodPointerType)&m10161, &t1595_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1595_m10161_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4024, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10162_MI = 
{
	"get_ObjectType", (methodPointerType)&m10162, &t1595_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4025, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1880_0_0_0;
extern Il2CppType t1880_0_0_0;
static ParameterInfo t1595_m10163_ParameterInfos[] = 
{
	{"lease", 0, 134222514, &EmptyCustomAttributesCache, &t1880_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10163_MI = 
{
	"StartTrackingLifetime", (methodPointerType)&m10163, &t1595_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1595_m10163_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4026, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10164_MI = 
{
	"OnLifetimeExpired", (methodPointerType)&m10164, &t1595_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 5, 0, false, false, 4027, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1595_m10165_ParameterInfos[] = 
{
	{"requestedType", 0, 134222515, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1596_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10165_MI = 
{
	"CreateObjRef", (methodPointerType)&m10165, &t1595_TI, &t1596_0_0_0, RuntimeInvoker_t9_t9, t1595_m10165_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4028, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1215_0_0_0;
extern Il2CppType t1867_0_0_0;
static ParameterInfo t1595_m10166_ParameterInfos[] = 
{
	{"serverObject", 0, 134222516, &EmptyCustomAttributesCache, &t1215_0_0_0},
	{"context", 1, 134222517, &EmptyCustomAttributesCache, &t1867_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10166_MI = 
{
	"AttachServerObject", (methodPointerType)&m10166, &t1595_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1595_m10166_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4029, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1881_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10167_MI = 
{
	"get_Lease", (methodPointerType)&m10167, &t1595_TI, &t1881_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4030, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10168_MI = 
{
	"DisposeServerObject", (methodPointerType)&m10168, &t1595_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 132, 0, 255, 0, false, false, 4031, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1595_MIs[] =
{
	&m10161_MI,
	&m10162_MI,
	&m10163_MI,
	&m10164_MI,
	&m10165_MI,
	&m10166_MI,
	&m10167_MI,
	&m10168_MI,
	NULL
};
extern Il2CppType t126_0_0_4;
FieldInfo t1595_f5_FieldInfo = 
{
	"_objectType", &t126_0_0_4, &t1595_TI, offsetof(t1595, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1215_0_0_4;
FieldInfo t1595_f6_FieldInfo = 
{
	"_serverObject", &t1215_0_0_4, &t1595_TI, offsetof(t1595, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1410_0_0_4;
FieldInfo t1595_f7_FieldInfo = 
{
	"_serverSink", &t1410_0_0_4, &t1595_TI, offsetof(t1595, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1867_0_0_4;
FieldInfo t1595_f8_FieldInfo = 
{
	"_context", &t1867_0_0_4, &t1595_TI, offsetof(t1595, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1881_0_0_4;
FieldInfo t1595_f9_FieldInfo = 
{
	"_lease", &t1881_0_0_4, &t1595_TI, offsetof(t1595, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1595_FIs[] =
{
	&t1595_f5_FieldInfo,
	&t1595_f6_FieldInfo,
	&t1595_f7_FieldInfo,
	&t1595_f8_FieldInfo,
	&t1595_f9_FieldInfo,
	NULL
};
extern MethodInfo m10162_MI;
static PropertyInfo t1595____ObjectType_PropertyInfo = 
{
	&t1595_TI, "ObjectType", &m10162_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10167_MI;
static PropertyInfo t1595____Lease_PropertyInfo = 
{
	&t1595_TI, "Lease", &m10167_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1595_PIs[] =
{
	&t1595____ObjectType_PropertyInfo,
	&t1595____Lease_PropertyInfo,
	NULL
};
extern MethodInfo m10165_MI;
extern MethodInfo m10164_MI;
static Il2CppMethodReference t1595_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10165_MI,
	&m10164_MI,
};
static bool t1595_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1595_1_0_0;
struct t1595;
const Il2CppTypeDefinitionMetadata t1595_DM = 
{
	NULL, NULL, NULL, NULL, &t1919_0_0_0, t1595_VT, t1595_VTIGM, NULL};
TypeInfo t1595_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ServerIdentity", "System.Runtime.Remoting", t1595_MIs, t1595_PIs, t1595_FIs, NULL, &t1595_TI, NULL, &EmptyCustomAttributesCache, &t1595_0_0_0, &t1595_1_0_0, &t1595_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1595), sizeof (t1595), 0, -1, 0, 0, -1, 1048704, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 2, 5, 0, 0, 6, 0, 0};
#include "t1934.h"
// Metadata Definition System.Runtime.Remoting.ClientActivatedIdentity
extern TypeInfo t1934_TI;
#include "t1934MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1934_m10169_ParameterInfos[] = 
{
	{"objectUri", 0, 134222518, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"objectType", 1, 134222519, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10169_MI = 
{
	".ctor", (methodPointerType)&m10169, &t1934_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1934_m10169_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4032, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1215_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10170_MI = 
{
	"GetServerObject", (methodPointerType)&m10170, &t1934_TI, &t1215_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4033, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10171_MI = 
{
	"OnLifetimeExpired", (methodPointerType)&m10171, &t1934_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 5, 0, false, false, 4034, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1934_MIs[] =
{
	&m10169_MI,
	&m10170_MI,
	&m10171_MI,
	NULL
};
extern MethodInfo m10171_MI;
static Il2CppMethodReference t1934_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10165_MI,
	&m10171_MI,
};
static bool t1934_VTIGM[] =
{
	false,
	false,
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
	NULL, NULL, NULL, NULL, &t1595_0_0_0, t1934_VT, t1934_VTIGM, NULL};
TypeInfo t1934_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ClientActivatedIdentity", "System.Runtime.Remoting", t1934_MIs, NULL, NULL, NULL, &t1934_TI, NULL, &EmptyCustomAttributesCache, &t1934_0_0_0, &t1934_1_0_0, &t1934_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1934), sizeof (t1934), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 6, 0, 0};
#include "t1936.h"
// Metadata Definition System.Runtime.Remoting.SingletonIdentity
extern TypeInfo t1936_TI;
#include "t1936MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t1867_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1936_m10172_ParameterInfos[] = 
{
	{"objectUri", 0, 134222520, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"context", 1, 134222521, &EmptyCustomAttributesCache, &t1867_0_0_0},
	{"objectType", 2, 134222522, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10172_MI = 
{
	".ctor", (methodPointerType)&m10172, &t1936_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1936_m10172_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4035, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1936_MIs[] =
{
	&m10172_MI,
	NULL
};
static Il2CppMethodReference t1936_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10165_MI,
	&m10164_MI,
};
static bool t1936_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1936_0_0_0;
extern Il2CppType t1936_1_0_0;
struct t1936;
const Il2CppTypeDefinitionMetadata t1936_DM = 
{
	NULL, NULL, NULL, NULL, &t1595_0_0_0, t1936_VT, t1936_VTIGM, NULL};
TypeInfo t1936_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SingletonIdentity", "System.Runtime.Remoting", t1936_MIs, NULL, NULL, NULL, &t1936_TI, NULL, &EmptyCustomAttributesCache, &t1936_0_0_0, &t1936_1_0_0, &t1936_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1936), sizeof (t1936), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 6, 0, 0};
#include "t1937.h"
// Metadata Definition System.Runtime.Remoting.SingleCallIdentity
extern TypeInfo t1937_TI;
#include "t1937MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t1867_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1937_m10173_ParameterInfos[] = 
{
	{"objectUri", 0, 134222523, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"context", 1, 134222524, &EmptyCustomAttributesCache, &t1867_0_0_0},
	{"objectType", 2, 134222525, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10173_MI = 
{
	".ctor", (methodPointerType)&m10173, &t1937_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1937_m10173_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4036, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1937_MIs[] =
{
	&m10173_MI,
	NULL
};
static Il2CppMethodReference t1937_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10165_MI,
	&m10164_MI,
};
static bool t1937_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1937_0_0_0;
extern Il2CppType t1937_1_0_0;
struct t1937;
const Il2CppTypeDefinitionMetadata t1937_DM = 
{
	NULL, NULL, NULL, NULL, &t1595_0_0_0, t1937_VT, t1937_VTIGM, NULL};
TypeInfo t1937_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SingleCallIdentity", "System.Runtime.Remoting", t1937_MIs, NULL, NULL, NULL, &t1937_TI, NULL, &EmptyCustomAttributesCache, &t1937_0_0_0, &t1937_1_0_0, &t1937_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1937), sizeof (t1937), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 6, 0, 0};
#include "t1924.h"
// Metadata Definition System.Runtime.Remoting.TypeEntry
extern TypeInfo t1924_TI;
#include "t1924MD.h"
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10174_MI = 
{
	"get_AssemblyName", (methodPointerType)&m10174, &t1924_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4037, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10175_MI = 
{
	"get_TypeName", (methodPointerType)&m10175, &t1924_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4038, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1924_MIs[] =
{
	&m10174_MI,
	&m10175_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1924_f0_FieldInfo = 
{
	"assembly_name", &t2_0_0_1, &t1924_TI, offsetof(t1924, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1924_f1_FieldInfo = 
{
	"type_name", &t2_0_0_1, &t1924_TI, offsetof(t1924, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1924_FIs[] =
{
	&t1924_f0_FieldInfo,
	&t1924_f1_FieldInfo,
	NULL
};
extern MethodInfo m10174_MI;
static PropertyInfo t1924____AssemblyName_PropertyInfo = 
{
	&t1924_TI, "AssemblyName", &m10174_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10175_MI;
static PropertyInfo t1924____TypeName_PropertyInfo = 
{
	&t1924_TI, "TypeName", &m10175_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1924_PIs[] =
{
	&t1924____AssemblyName_PropertyInfo,
	&t1924____TypeName_PropertyInfo,
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
void t1924_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1924_VT, t1924_VTIGM, NULL};
TypeInfo t1924_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeEntry", "System.Runtime.Remoting", t1924_MIs, t1924_PIs, t1924_FIs, NULL, &t1924_TI, NULL, &t1924__CustomAttributeCache, &t1924_0_0_0, &t1924_1_0_0, &t1924_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1924), sizeof (t1924), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 2, 2, 0, 0, 4, 0, 0};
#include "t1938.h"
// Metadata Definition System.Runtime.Remoting.TypeInfo
extern TypeInfo t1938_TI;
#include "t1938MD.h"
extern Il2CppType t126_0_0_0;
static ParameterInfo t1938_m10176_ParameterInfos[] = 
{
	{"type", 0, 134222526, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10176_MI = 
{
	".ctor", (methodPointerType)&m10176, &t1938_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1938_m10176_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4039, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10177_MI = 
{
	"get_TypeName", (methodPointerType)&m10177, &t1938_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 4040, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1938_MIs[] =
{
	&m10176_MI,
	&m10177_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1938_f0_FieldInfo = 
{
	"serverType", &t2_0_0_1, &t1938_TI, offsetof(t1938, f0), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1938_f1_FieldInfo = 
{
	"serverHierarchy", &t221_0_0_1, &t1938_TI, offsetof(t1938, f1), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1938_f2_FieldInfo = 
{
	"interfacesImplemented", &t221_0_0_1, &t1938_TI, offsetof(t1938, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1938_FIs[] =
{
	&t1938_f0_FieldInfo,
	&t1938_f1_FieldInfo,
	&t1938_f2_FieldInfo,
	NULL
};
extern MethodInfo m10177_MI;
static PropertyInfo t1938____TypeName_PropertyInfo = 
{
	&t1938_TI, "TypeName", &m10177_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1938_PIs[] =
{
	&t1938____TypeName_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1938_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10177_MI,
};
static bool t1938_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1938_ITIs[] = 
{
	&t1929_0_0_0,
};
static Il2CppInterfaceOffsetPair t1938_IOs[] = 
{
	{ &t1929_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1938_0_0_0;
extern Il2CppType t1938_1_0_0;
struct t1938;
const Il2CppTypeDefinitionMetadata t1938_DM = 
{
	NULL, NULL, t1938_ITIs, t1938_IOs, &t9_0_0_0, t1938_VT, t1938_VTIGM, NULL};
TypeInfo t1938_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeInfo", "System.Runtime.Remoting", t1938_MIs, t1938_PIs, t1938_FIs, NULL, &t1938_TI, NULL, &EmptyCustomAttributesCache, &t1938_0_0_0, &t1938_1_0_0, &t1938_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1938), sizeof (t1938), 0, -1, 0, 0, -1, 1056768, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 3, 0, 0, 5, 1, 1};
#include "t1935.h"
// Metadata Definition System.Runtime.Remoting.WellKnownObjectMode
extern TypeInfo t1935_TI;
#include "t1935MD.h"
static MethodInfo* t1935_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1935_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1935_TI, offsetof(t1935, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1935_0_0_32854;
FieldInfo t1935_f2_FieldInfo = 
{
	"Singleton", &t1935_0_0_32854, &t1935_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1935_0_0_32854;
FieldInfo t1935_f3_FieldInfo = 
{
	"SingleCall", &t1935_0_0_32854, &t1935_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1935_FIs[] =
{
	&t1935_f1_FieldInfo,
	&t1935_f2_FieldInfo,
	&t1935_f3_FieldInfo,
	NULL
};
static const int32_t t1935_f2_DefaultValueData = 1;
extern Il2CppType t125_0_0_0;
static Il2CppFieldDefaultValueEntry t1935_f2_DefaultValue = 
{
	&t1935_f2_FieldInfo, { (char*)&t1935_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1935_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1935_f3_DefaultValue = 
{
	&t1935_f3_FieldInfo, { (char*)&t1935_f3_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1935_FDVs[] = 
{
	&t1935_f2_DefaultValue,
	&t1935_f3_DefaultValue,
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
extern Il2CppType t183_0_0_0;
extern Il2CppType t184_0_0_0;
extern Il2CppType t185_0_0_0;
static Il2CppInterfaceOffsetPair t1935_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1935_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1935__CustomAttributeCache = {
1,
NULL,
&t1935_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1935_1_0_0;
extern Il2CppType t8_0_0_0;
#include "t125.h"
extern TypeInfo t125_TI;
extern CustomAttributesCache t1935__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1935_DM = 
{
	NULL, NULL, NULL, t1935_IOs, &t8_0_0_0, t1935_VT, t1935_VTIGM, NULL};
TypeInfo t1935_TI = 
{
	&g_mscorlib_dll_Image, NULL, "WellKnownObjectMode", "System.Runtime.Remoting", t1935_MIs, NULL, t1935_FIs, NULL, &t125_TI, NULL, &t1935__CustomAttributeCache, &t1935_0_0_0, &t1935_1_0_0, &t1935_DM, NULL, NULL, NULL, t1935_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1935)+ sizeof (Il2CppObject), sizeof (t1935)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t1939.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.BinaryCommon
extern TypeInfo t1939_TI;
#include "t1939MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10178_MI = 
{
	".cctor", (methodPointerType)&m10178, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4041, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1939_m10179_ParameterInfos[] = 
{
	{"type", 0, 134222527, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10179_MI = 
{
	"IsPrimitive", (methodPointerType)&m10179, &t1939_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1939_m10179_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4042, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1939_m10180_ParameterInfos[] = 
{
	{"type", 0, 134222528, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t582_0_0_0;
extern void* RuntimeInvoker_t582_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10180_MI = 
{
	"GetTypeCode", (methodPointerType)&m10180, &t1939_TI, &t582_0_0_0, RuntimeInvoker_t582_t9, t1939_m10180_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4043, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1939_m10181_ParameterInfos[] = 
{
	{"code", 0, 134222529, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10181_MI = 
{
	"GetTypeFromCode", (methodPointerType)&m10181, &t1939_TI, &t126_0_0_0, RuntimeInvoker_t9_t125, t1939_m10181_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4044, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t1910_0_0_0;
extern Il2CppType t1910_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1939_m10182_ParameterInfos[] = 
{
	{"type", 0, 134222530, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"selector", 1, 134222531, &EmptyCustomAttributesCache, &t1910_0_0_0},
	{"context", 2, 134222532, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10182_MI = 
{
	"CheckSerializable", (methodPointerType)&m10182, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t1107, t1939_m10182_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 4045, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1939_m10183_ParameterInfos[] = 
{
	{"byteArray", 0, 134222533, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"size", 1, 134222534, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"dataSize", 2, 134222535, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10183_MI = 
{
	"SwapBytes", (methodPointerType)&m10183, &t1939_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1939_m10183_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 4046, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1939_MIs[] =
{
	&m10178_MI,
	&m10179_MI,
	&m10180_MI,
	&m10181_MI,
	&m10182_MI,
	&m10183_MI,
	NULL
};
extern Il2CppType t737_0_0_22;
FieldInfo t1939_f0_FieldInfo = 
{
	"BinaryHeader", &t737_0_0_22, &t1939_TI, offsetof(t1939_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t152_0_0_17;
FieldInfo t1939_f1_FieldInfo = 
{
	"_typeCodesToType", &t152_0_0_17, &t1939_TI, offsetof(t1939_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_17;
FieldInfo t1939_f2_FieldInfo = 
{
	"_typeCodeMap", &t737_0_0_17, &t1939_TI, offsetof(t1939_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_22;
FieldInfo t1939_f3_FieldInfo = 
{
	"UseReflectionSerialization", &t124_0_0_22, &t1939_TI, offsetof(t1939_SFs, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1939_FIs[] =
{
	&t1939_f0_FieldInfo,
	&t1939_f1_FieldInfo,
	&t1939_f2_FieldInfo,
	&t1939_f3_FieldInfo,
	NULL
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
extern Il2CppType t1939_0_0_0;
extern Il2CppType t1939_1_0_0;
struct t1939;
const Il2CppTypeDefinitionMetadata t1939_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1939_VT, t1939_VTIGM, NULL};
TypeInfo t1939_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryCommon", "System.Runtime.Serialization.Formatters.Binary", t1939_MIs, NULL, t1939_FIs, NULL, &t1939_TI, NULL, &EmptyCustomAttributesCache, &t1939_0_0_0, &t1939_1_0_0, &t1939_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1939), sizeof (t1939), 0, -1, sizeof(t1939_SFs), 0, -1, 0, 0, 0, false, false, false, false, false, false, false, false, true, false, 6, 0, 4, 0, 0, 4, 0, 0};
#include "t1940.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.BinaryElement
extern TypeInfo t1940_TI;
#include "t1940MD.h"
static MethodInfo* t1940_MIs[] =
{
	NULL
};
extern Il2CppType t582_0_0_1542;
FieldInfo t1940_f1_FieldInfo = 
{
	"value__", &t582_0_0_1542, &t1940_TI, offsetof(t1940, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f2_FieldInfo = 
{
	"Header", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f3_FieldInfo = 
{
	"RefTypeObject", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f4_FieldInfo = 
{
	"UntypedRuntimeObject", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f5_FieldInfo = 
{
	"UntypedExternalObject", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f6_FieldInfo = 
{
	"RuntimeObject", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f7_FieldInfo = 
{
	"ExternalObject", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f8_FieldInfo = 
{
	"String", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f9_FieldInfo = 
{
	"GenericArray", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f10_FieldInfo = 
{
	"BoxedPrimitiveTypeValue", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f11_FieldInfo = 
{
	"ObjectReference", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f12_FieldInfo = 
{
	"NullValue", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f13_FieldInfo = 
{
	"End", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f14_FieldInfo = 
{
	"Assembly", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f15_FieldInfo = 
{
	"ArrayFiller8b", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f16_FieldInfo = 
{
	"ArrayFiller32b", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f17_FieldInfo = 
{
	"ArrayOfPrimitiveType", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f18_FieldInfo = 
{
	"ArrayOfObject", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f19_FieldInfo = 
{
	"ArrayOfString", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f20_FieldInfo = 
{
	"Method", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f21_FieldInfo = 
{
	"_Unknown4", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f22_FieldInfo = 
{
	"_Unknown5", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f23_FieldInfo = 
{
	"MethodCall", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1940_0_0_32854;
FieldInfo t1940_f24_FieldInfo = 
{
	"MethodResponse", &t1940_0_0_32854, &t1940_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1940_FIs[] =
{
	&t1940_f1_FieldInfo,
	&t1940_f2_FieldInfo,
	&t1940_f3_FieldInfo,
	&t1940_f4_FieldInfo,
	&t1940_f5_FieldInfo,
	&t1940_f6_FieldInfo,
	&t1940_f7_FieldInfo,
	&t1940_f8_FieldInfo,
	&t1940_f9_FieldInfo,
	&t1940_f10_FieldInfo,
	&t1940_f11_FieldInfo,
	&t1940_f12_FieldInfo,
	&t1940_f13_FieldInfo,
	&t1940_f14_FieldInfo,
	&t1940_f15_FieldInfo,
	&t1940_f16_FieldInfo,
	&t1940_f17_FieldInfo,
	&t1940_f18_FieldInfo,
	&t1940_f19_FieldInfo,
	&t1940_f20_FieldInfo,
	&t1940_f21_FieldInfo,
	&t1940_f22_FieldInfo,
	&t1940_f23_FieldInfo,
	&t1940_f24_FieldInfo,
	NULL
};
static const uint8_t t1940_f2_DefaultValueData = 0;
extern Il2CppType t582_0_0_0;
static Il2CppFieldDefaultValueEntry t1940_f2_DefaultValue = 
{
	&t1940_f2_FieldInfo, { (char*)&t1940_f2_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1940_f3_DefaultValue = 
{
	&t1940_f3_FieldInfo, { (char*)&t1940_f3_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1940_f4_DefaultValue = 
{
	&t1940_f4_FieldInfo, { (char*)&t1940_f4_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1940_f5_DefaultValue = 
{
	&t1940_f5_FieldInfo, { (char*)&t1940_f5_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1940_f6_DefaultValue = 
{
	&t1940_f6_FieldInfo, { (char*)&t1940_f6_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1940_f7_DefaultValue = 
{
	&t1940_f7_FieldInfo, { (char*)&t1940_f7_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1940_f8_DefaultValue = 
{
	&t1940_f8_FieldInfo, { (char*)&t1940_f8_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1940_f9_DefaultValue = 
{
	&t1940_f9_FieldInfo, { (char*)&t1940_f9_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f10_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1940_f10_DefaultValue = 
{
	&t1940_f10_FieldInfo, { (char*)&t1940_f10_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f11_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t1940_f11_DefaultValue = 
{
	&t1940_f11_FieldInfo, { (char*)&t1940_f11_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f12_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t1940_f12_DefaultValue = 
{
	&t1940_f12_FieldInfo, { (char*)&t1940_f12_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f13_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t1940_f13_DefaultValue = 
{
	&t1940_f13_FieldInfo, { (char*)&t1940_f13_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f14_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t1940_f14_DefaultValue = 
{
	&t1940_f14_FieldInfo, { (char*)&t1940_f14_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f15_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry t1940_f15_DefaultValue = 
{
	&t1940_f15_FieldInfo, { (char*)&t1940_f15_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f16_DefaultValueData = 14;
static Il2CppFieldDefaultValueEntry t1940_f16_DefaultValue = 
{
	&t1940_f16_FieldInfo, { (char*)&t1940_f16_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f17_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t1940_f17_DefaultValue = 
{
	&t1940_f17_FieldInfo, { (char*)&t1940_f17_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f18_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1940_f18_DefaultValue = 
{
	&t1940_f18_FieldInfo, { (char*)&t1940_f18_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f19_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry t1940_f19_DefaultValue = 
{
	&t1940_f19_FieldInfo, { (char*)&t1940_f19_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f20_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry t1940_f20_DefaultValue = 
{
	&t1940_f20_FieldInfo, { (char*)&t1940_f20_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f21_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry t1940_f21_DefaultValue = 
{
	&t1940_f21_FieldInfo, { (char*)&t1940_f21_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f22_DefaultValueData = 20;
static Il2CppFieldDefaultValueEntry t1940_f22_DefaultValue = 
{
	&t1940_f22_FieldInfo, { (char*)&t1940_f22_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f23_DefaultValueData = 21;
static Il2CppFieldDefaultValueEntry t1940_f23_DefaultValue = 
{
	&t1940_f23_FieldInfo, { (char*)&t1940_f23_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1940_f24_DefaultValueData = 22;
static Il2CppFieldDefaultValueEntry t1940_f24_DefaultValue = 
{
	&t1940_f24_FieldInfo, { (char*)&t1940_f24_DefaultValueData, &t582_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1940_FDVs[] = 
{
	&t1940_f2_DefaultValue,
	&t1940_f3_DefaultValue,
	&t1940_f4_DefaultValue,
	&t1940_f5_DefaultValue,
	&t1940_f6_DefaultValue,
	&t1940_f7_DefaultValue,
	&t1940_f8_DefaultValue,
	&t1940_f9_DefaultValue,
	&t1940_f10_DefaultValue,
	&t1940_f11_DefaultValue,
	&t1940_f12_DefaultValue,
	&t1940_f13_DefaultValue,
	&t1940_f14_DefaultValue,
	&t1940_f15_DefaultValue,
	&t1940_f16_DefaultValue,
	&t1940_f17_DefaultValue,
	&t1940_f18_DefaultValue,
	&t1940_f19_DefaultValue,
	&t1940_f20_DefaultValue,
	&t1940_f21_DefaultValue,
	&t1940_f22_DefaultValue,
	&t1940_f23_DefaultValue,
	&t1940_f24_DefaultValue,
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
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1940_0_0_0;
extern Il2CppType t1940_1_0_0;
#include "t582.h"
extern TypeInfo t582_TI;
const Il2CppTypeDefinitionMetadata t1940_DM = 
{
	NULL, NULL, NULL, t1940_IOs, &t8_0_0_0, t1940_VT, t1940_VTIGM, NULL};
TypeInfo t1940_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryElement", "System.Runtime.Serialization.Formatters.Binary", t1940_MIs, NULL, t1940_FIs, NULL, &t582_TI, NULL, &EmptyCustomAttributesCache, &t1940_0_0_0, &t1940_1_0_0, &t1940_DM, NULL, NULL, NULL, t1940_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1940)+ sizeof (Il2CppObject), sizeof (t1940)+ sizeof (Il2CppObject), 0, sizeof(uint8_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 24, 0, 0, 23, 0, 3};
#include "t1941.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.TypeTag
extern TypeInfo t1941_TI;
#include "t1941MD.h"
static MethodInfo* t1941_MIs[] =
{
	NULL
};
extern Il2CppType t582_0_0_1542;
FieldInfo t1941_f1_FieldInfo = 
{
	"value__", &t582_0_0_1542, &t1941_TI, offsetof(t1941, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1941_0_0_32854;
FieldInfo t1941_f2_FieldInfo = 
{
	"PrimitiveType", &t1941_0_0_32854, &t1941_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1941_0_0_32854;
FieldInfo t1941_f3_FieldInfo = 
{
	"String", &t1941_0_0_32854, &t1941_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1941_0_0_32854;
FieldInfo t1941_f4_FieldInfo = 
{
	"ObjectType", &t1941_0_0_32854, &t1941_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1941_0_0_32854;
FieldInfo t1941_f5_FieldInfo = 
{
	"RuntimeType", &t1941_0_0_32854, &t1941_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1941_0_0_32854;
FieldInfo t1941_f6_FieldInfo = 
{
	"GenericType", &t1941_0_0_32854, &t1941_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1941_0_0_32854;
FieldInfo t1941_f7_FieldInfo = 
{
	"ArrayOfObject", &t1941_0_0_32854, &t1941_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1941_0_0_32854;
FieldInfo t1941_f8_FieldInfo = 
{
	"ArrayOfString", &t1941_0_0_32854, &t1941_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1941_0_0_32854;
FieldInfo t1941_f9_FieldInfo = 
{
	"ArrayOfPrimitiveType", &t1941_0_0_32854, &t1941_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1941_FIs[] =
{
	&t1941_f1_FieldInfo,
	&t1941_f2_FieldInfo,
	&t1941_f3_FieldInfo,
	&t1941_f4_FieldInfo,
	&t1941_f5_FieldInfo,
	&t1941_f6_FieldInfo,
	&t1941_f7_FieldInfo,
	&t1941_f8_FieldInfo,
	&t1941_f9_FieldInfo,
	NULL
};
static const uint8_t t1941_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1941_f2_DefaultValue = 
{
	&t1941_f2_FieldInfo, { (char*)&t1941_f2_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1941_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1941_f3_DefaultValue = 
{
	&t1941_f3_FieldInfo, { (char*)&t1941_f3_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1941_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1941_f4_DefaultValue = 
{
	&t1941_f4_FieldInfo, { (char*)&t1941_f4_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1941_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1941_f5_DefaultValue = 
{
	&t1941_f5_FieldInfo, { (char*)&t1941_f5_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1941_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1941_f6_DefaultValue = 
{
	&t1941_f6_FieldInfo, { (char*)&t1941_f6_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1941_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1941_f7_DefaultValue = 
{
	&t1941_f7_FieldInfo, { (char*)&t1941_f7_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1941_f8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1941_f8_DefaultValue = 
{
	&t1941_f8_FieldInfo, { (char*)&t1941_f8_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1941_f9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1941_f9_DefaultValue = 
{
	&t1941_f9_FieldInfo, { (char*)&t1941_f9_DefaultValueData, &t582_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1941_FDVs[] = 
{
	&t1941_f2_DefaultValue,
	&t1941_f3_DefaultValue,
	&t1941_f4_DefaultValue,
	&t1941_f5_DefaultValue,
	&t1941_f6_DefaultValue,
	&t1941_f7_DefaultValue,
	&t1941_f8_DefaultValue,
	&t1941_f9_DefaultValue,
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
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1941_0_0_0;
extern Il2CppType t1941_1_0_0;
const Il2CppTypeDefinitionMetadata t1941_DM = 
{
	NULL, NULL, NULL, t1941_IOs, &t8_0_0_0, t1941_VT, t1941_VTIGM, NULL};
TypeInfo t1941_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeTag", "System.Runtime.Serialization.Formatters.Binary", t1941_MIs, NULL, t1941_FIs, NULL, &t582_TI, NULL, &EmptyCustomAttributesCache, &t1941_0_0_0, &t1941_1_0_0, &t1941_DM, NULL, NULL, NULL, t1941_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1941)+ sizeof (Il2CppObject), sizeof (t1941)+ sizeof (Il2CppObject), 0, sizeof(uint8_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 9, 0, 0, 23, 0, 3};
#include "t1942.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.MethodFlags
extern TypeInfo t1942_TI;
#include "t1942MD.h"
static MethodInfo* t1942_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1942_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1942_TI, offsetof(t1942, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1942_0_0_32854;
FieldInfo t1942_f2_FieldInfo = 
{
	"NoArguments", &t1942_0_0_32854, &t1942_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1942_0_0_32854;
FieldInfo t1942_f3_FieldInfo = 
{
	"PrimitiveArguments", &t1942_0_0_32854, &t1942_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1942_0_0_32854;
FieldInfo t1942_f4_FieldInfo = 
{
	"ArgumentsInSimpleArray", &t1942_0_0_32854, &t1942_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1942_0_0_32854;
FieldInfo t1942_f5_FieldInfo = 
{
	"ArgumentsInMultiArray", &t1942_0_0_32854, &t1942_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1942_0_0_32854;
FieldInfo t1942_f6_FieldInfo = 
{
	"ExcludeLogicalCallContext", &t1942_0_0_32854, &t1942_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1942_0_0_32854;
FieldInfo t1942_f7_FieldInfo = 
{
	"IncludesLogicalCallContext", &t1942_0_0_32854, &t1942_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1942_0_0_32854;
FieldInfo t1942_f8_FieldInfo = 
{
	"IncludesSignature", &t1942_0_0_32854, &t1942_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1942_0_0_32854;
FieldInfo t1942_f9_FieldInfo = 
{
	"FormatMask", &t1942_0_0_32854, &t1942_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1942_0_0_32854;
FieldInfo t1942_f10_FieldInfo = 
{
	"GenericArguments", &t1942_0_0_32854, &t1942_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1942_0_0_32854;
FieldInfo t1942_f11_FieldInfo = 
{
	"NeedsInfoArrayMask", &t1942_0_0_32854, &t1942_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1942_FIs[] =
{
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
	NULL
};
static const int32_t t1942_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1942_f2_DefaultValue = 
{
	&t1942_f2_FieldInfo, { (char*)&t1942_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1942_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1942_f3_DefaultValue = 
{
	&t1942_f3_FieldInfo, { (char*)&t1942_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1942_f4_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1942_f4_DefaultValue = 
{
	&t1942_f4_FieldInfo, { (char*)&t1942_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1942_f5_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1942_f5_DefaultValue = 
{
	&t1942_f5_FieldInfo, { (char*)&t1942_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1942_f6_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1942_f6_DefaultValue = 
{
	&t1942_f6_FieldInfo, { (char*)&t1942_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1942_f7_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1942_f7_DefaultValue = 
{
	&t1942_f7_FieldInfo, { (char*)&t1942_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1942_f8_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1942_f8_DefaultValue = 
{
	&t1942_f8_FieldInfo, { (char*)&t1942_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1942_f9_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t1942_f9_DefaultValue = 
{
	&t1942_f9_FieldInfo, { (char*)&t1942_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1942_f10_DefaultValueData = 32768;
static Il2CppFieldDefaultValueEntry t1942_f10_DefaultValue = 
{
	&t1942_f10_FieldInfo, { (char*)&t1942_f10_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1942_f11_DefaultValueData = 32972;
static Il2CppFieldDefaultValueEntry t1942_f11_DefaultValue = 
{
	&t1942_f11_FieldInfo, { (char*)&t1942_f11_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1942_FDVs[] = 
{
	&t1942_f2_DefaultValue,
	&t1942_f3_DefaultValue,
	&t1942_f4_DefaultValue,
	&t1942_f5_DefaultValue,
	&t1942_f6_DefaultValue,
	&t1942_f7_DefaultValue,
	&t1942_f8_DefaultValue,
	&t1942_f9_DefaultValue,
	&t1942_f10_DefaultValue,
	&t1942_f11_DefaultValue,
	NULL
};
static Il2CppMethodReference t1942_VT[] =
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
static bool t1942_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1942_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1942_0_0_0;
extern Il2CppType t1942_1_0_0;
const Il2CppTypeDefinitionMetadata t1942_DM = 
{
	NULL, NULL, NULL, t1942_IOs, &t8_0_0_0, t1942_VT, t1942_VTIGM, NULL};
TypeInfo t1942_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MethodFlags", "System.Runtime.Serialization.Formatters.Binary", t1942_MIs, NULL, t1942_FIs, NULL, &t125_TI, NULL, &EmptyCustomAttributesCache, &t1942_0_0_0, &t1942_1_0_0, &t1942_DM, NULL, NULL, NULL, t1942_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1942)+ sizeof (Il2CppObject), sizeof (t1942)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 11, 0, 0, 23, 0, 3};
#include "t1943.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
extern TypeInfo t1943_TI;
#include "t1943MD.h"
static MethodInfo* t1943_MIs[] =
{
	NULL
};
extern Il2CppType t582_0_0_1542;
FieldInfo t1943_f1_FieldInfo = 
{
	"value__", &t582_0_0_1542, &t1943_TI, offsetof(t1943, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1943_0_0_32854;
FieldInfo t1943_f2_FieldInfo = 
{
	"Null", &t1943_0_0_32854, &t1943_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1943_0_0_32854;
FieldInfo t1943_f3_FieldInfo = 
{
	"PrimitiveType", &t1943_0_0_32854, &t1943_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1943_0_0_32854;
FieldInfo t1943_f4_FieldInfo = 
{
	"ObjectType", &t1943_0_0_32854, &t1943_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1943_0_0_32854;
FieldInfo t1943_f5_FieldInfo = 
{
	"Exception", &t1943_0_0_32854, &t1943_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1943_FIs[] =
{
	&t1943_f1_FieldInfo,
	&t1943_f2_FieldInfo,
	&t1943_f3_FieldInfo,
	&t1943_f4_FieldInfo,
	&t1943_f5_FieldInfo,
	NULL
};
static const uint8_t t1943_f2_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1943_f2_DefaultValue = 
{
	&t1943_f2_FieldInfo, { (char*)&t1943_f2_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1943_f3_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1943_f3_DefaultValue = 
{
	&t1943_f3_FieldInfo, { (char*)&t1943_f3_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1943_f4_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1943_f4_DefaultValue = 
{
	&t1943_f4_FieldInfo, { (char*)&t1943_f4_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1943_f5_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1943_f5_DefaultValue = 
{
	&t1943_f5_FieldInfo, { (char*)&t1943_f5_DefaultValueData, &t582_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1943_FDVs[] = 
{
	&t1943_f2_DefaultValue,
	&t1943_f3_DefaultValue,
	&t1943_f4_DefaultValue,
	&t1943_f5_DefaultValue,
	NULL
};
static Il2CppMethodReference t1943_VT[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1943_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1943_0_0_0;
extern Il2CppType t1943_1_0_0;
const Il2CppTypeDefinitionMetadata t1943_DM = 
{
	NULL, NULL, NULL, t1943_IOs, &t8_0_0_0, t1943_VT, t1943_VTIGM, NULL};
TypeInfo t1943_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReturnTypeTag", "System.Runtime.Serialization.Formatters.Binary", t1943_MIs, NULL, t1943_FIs, NULL, &t582_TI, NULL, &EmptyCustomAttributesCache, &t1943_0_0_0, &t1943_1_0_0, &t1943_DM, NULL, NULL, NULL, t1943_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1943)+ sizeof (Il2CppObject), sizeof (t1943)+ sizeof (Il2CppObject), 0, sizeof(uint8_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t299.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
extern TypeInfo t299_TI;
#include "t299MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m1126_MI = 
{
	".ctor", (methodPointerType)&m1126, &t299_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4047, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1910_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t299_m10184_ParameterInfos[] = 
{
	{"selector", 0, 134222536, &EmptyCustomAttributesCache, &t1910_0_0_0},
	{"context", 1, 134222537, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10184_MI = 
{
	".ctor", (methodPointerType)&m10184, &t299_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t299_m10184_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4048, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1910_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t299__CustomAttributeCache_m10185;
MethodInfo m10185_MI = 
{
	"get_DefaultSurrogateSelector", (methodPointerType)&m10185, &t299_TI, &t1910_0_0_0, RuntimeInvoker_t9, NULL, &t299__CustomAttributeCache_m10185, 2198, 0, 255, 0, false, false, 4049, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1945_0_0_0;
extern Il2CppType t1945_0_0_0;
static ParameterInfo t299_m10186_ParameterInfos[] = 
{
	{"value", 0, 134222538, &EmptyCustomAttributesCache, &t1945_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10186_MI = 
{
	"set_AssemblyFormat", (methodPointerType)&m10186, &t299_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t299_m10186_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4050, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1944_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10187_MI = 
{
	"get_Binder", (methodPointerType)&m10187, &t299_TI, &t1944_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 4051, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1107_0_0_0;
extern void* RuntimeInvoker_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10188_MI = 
{
	"get_Context", (methodPointerType)&m10188, &t299_TI, &t1107_0_0_0, RuntimeInvoker_t1107, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 4052, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1910_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10189_MI = 
{
	"get_SurrogateSelector", (methodPointerType)&m10189, &t299_TI, &t1910_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 4053, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1947_0_0_0;
extern void* RuntimeInvoker_t1947 (MethodInfo* method, void* obj, void** args);
MethodInfo m10190_MI = 
{
	"get_FilterLevel", (methodPointerType)&m10190, &t299_TI, &t1947_0_0_0, RuntimeInvoker_t1947, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4054, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t302_0_0_0;
extern Il2CppType t302_0_0_0;
static ParameterInfo t299_m1128_ParameterInfos[] = 
{
	{"serializationStream", 0, 134222539, &EmptyCustomAttributesCache, &t302_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1128_MI = 
{
	"Deserialize", (methodPointerType)&m1128, &t299_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t299_m1128_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 1, false, false, 4055, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t302_0_0_0;
extern Il2CppType t1948_0_0_0;
extern Il2CppType t1948_0_0_0;
static ParameterInfo t299_m10191_ParameterInfos[] = 
{
	{"serializationStream", 0, 134222540, &EmptyCustomAttributesCache, &t302_0_0_0},
	{"handler", 1, 134222541, &EmptyCustomAttributesCache, &t1948_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10191_MI = 
{
	"NoCheckDeserialize", (methodPointerType)&m10191, &t299_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t299_m10191_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4056, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t302_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t299_m1134_ParameterInfos[] = 
{
	{"serializationStream", 0, 134222542, &EmptyCustomAttributesCache, &t302_0_0_0},
	{"graph", 1, 134222543, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m1134_MI = 
{
	"Serialize", (methodPointerType)&m1134, &t299_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t299_m1134_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 8, 2, false, false, 4057, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t302_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1901_0_0_0;
extern Il2CppType t1901_0_0_0;
static ParameterInfo t299_m10192_ParameterInfos[] = 
{
	{"serializationStream", 0, 134222544, &EmptyCustomAttributesCache, &t302_0_0_0},
	{"graph", 1, 134222545, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"headers", 2, 134222546, &EmptyCustomAttributesCache, &t1901_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10192_MI = 
{
	"Serialize", (methodPointerType)&m10192, &t299_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t299_m10192_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 9, 3, false, false, 4058, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t1720_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t299_m10193_ParameterInfos[] = 
{
	{"writer", 0, 134222547, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"hasHeaders", 1, 134222548, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10193_MI = 
{
	"WriteBinaryHeader", (methodPointerType)&m10193, &t299_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t299_m10193_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4059, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t1718_0_0_0;
extern Il2CppType t124_1_0_2;
extern Il2CppType t124_1_0_0;
static ParameterInfo t299_m10194_ParameterInfos[] = 
{
	{"reader", 0, 134222549, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"hasHeaders", 1, 134222550, &EmptyCustomAttributesCache, &t124_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t642 (MethodInfo* method, void* obj, void** args);
MethodInfo m10194_MI = 
{
	"ReadBinaryHeader", (methodPointerType)&m10194, &t299_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t642, t299_m10194_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4060, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t299_MIs[] =
{
	&m1126_MI,
	&m10184_MI,
	&m10185_MI,
	&m10186_MI,
	&m10187_MI,
	&m10188_MI,
	&m10189_MI,
	&m10190_MI,
	&m1128_MI,
	&m10191_MI,
	&m1134_MI,
	&m10192_MI,
	&m10193_MI,
	&m10194_MI,
	NULL
};
extern Il2CppType t1945_0_0_1;
FieldInfo t299_f0_FieldInfo = 
{
	"assembly_format", &t1945_0_0_1, &t299_TI, offsetof(t299, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1944_0_0_1;
FieldInfo t299_f1_FieldInfo = 
{
	"binder", &t1944_0_0_1, &t299_TI, offsetof(t299, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1107_0_0_1;
FieldInfo t299_f2_FieldInfo = 
{
	"context", &t1107_0_0_1, &t299_TI, offsetof(t299, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1910_0_0_1;
FieldInfo t299_f3_FieldInfo = 
{
	"surrogate_selector", &t1910_0_0_1, &t299_TI, offsetof(t299, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1946_0_0_1;
FieldInfo t299_f4_FieldInfo = 
{
	"type_format", &t1946_0_0_1, &t299_TI, offsetof(t299, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1947_0_0_1;
FieldInfo t299_f5_FieldInfo = 
{
	"filter_level", &t1947_0_0_1, &t299_TI, offsetof(t299, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1910_0_0_17;
extern CustomAttributesCache t299__CustomAttributeCache_U3CDefaultSurrogateSelectorU3Ek__BackingField;
FieldInfo t299_f6_FieldInfo = 
{
	"<DefaultSurrogateSelector>k__BackingField", &t1910_0_0_17, &t299_TI, offsetof(t299_SFs, f6), &t299__CustomAttributeCache_U3CDefaultSurrogateSelectorU3Ek__BackingField};
static FieldInfo* t299_FIs[] =
{
	&t299_f0_FieldInfo,
	&t299_f1_FieldInfo,
	&t299_f2_FieldInfo,
	&t299_f3_FieldInfo,
	&t299_f4_FieldInfo,
	&t299_f5_FieldInfo,
	&t299_f6_FieldInfo,
	NULL
};
extern MethodInfo m10185_MI;
static PropertyInfo t299____DefaultSurrogateSelector_PropertyInfo = 
{
	&t299_TI, "DefaultSurrogateSelector", &m10185_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10186_MI;
static PropertyInfo t299____AssemblyFormat_PropertyInfo = 
{
	&t299_TI, "AssemblyFormat", NULL, &m10186_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10187_MI;
static PropertyInfo t299____Binder_PropertyInfo = 
{
	&t299_TI, "Binder", &m10187_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10188_MI;
static PropertyInfo t299____Context_PropertyInfo = 
{
	&t299_TI, "Context", &m10188_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10189_MI;
static PropertyInfo t299____SurrogateSelector_PropertyInfo = 
{
	&t299_TI, "SurrogateSelector", &m10189_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10190_MI;
static PropertyInfo t299____FilterLevel_PropertyInfo = 
{
	&t299_TI, "FilterLevel", &m10190_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t299_PIs[] =
{
	&t299____DefaultSurrogateSelector_PropertyInfo,
	&t299____AssemblyFormat_PropertyInfo,
	&t299____Binder_PropertyInfo,
	&t299____Context_PropertyInfo,
	&t299____SurrogateSelector_PropertyInfo,
	&t299____FilterLevel_PropertyInfo,
	NULL
};
extern MethodInfo m1128_MI;
extern MethodInfo m1134_MI;
extern MethodInfo m10192_MI;
static Il2CppMethodReference t299_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10187_MI,
	&m10188_MI,
	&m10189_MI,
	&m1128_MI,
	&m1134_MI,
	&m10192_MI,
};
static bool t299_VTIGM[] =
{
	false,
	false,
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
extern Il2CppType t2635_0_0_0;
static const Il2CppType* t299_ITIs[] = 
{
	&t2634_0_0_0,
	&t2635_0_0_0,
};
static Il2CppInterfaceOffsetPair t299_IOs[] = 
{
	{ &t2634_0_0_0, 4},
	{ &t2635_0_0_0, 4},
};
void t299_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t299_CustomAttributesCacheGenerator_U3CDefaultSurrogateSelectorU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t299_CustomAttributesCacheGenerator_m10185(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t299__CustomAttributeCache = {
1,
NULL,
&t299_CustomAttributesCacheGenerator
};
CustomAttributesCache t299__CustomAttributeCache_U3CDefaultSurrogateSelectorU3Ek__BackingField = {
1,
NULL,
&t299_CustomAttributesCacheGenerator_U3CDefaultSurrogateSelectorU3Ek__BackingField
};
CustomAttributesCache t299__CustomAttributeCache_m10185 = {
1,
NULL,
&t299_CustomAttributesCacheGenerator_m10185
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t299_0_0_0;
extern Il2CppType t299_1_0_0;
struct t299;
extern CustomAttributesCache t299__CustomAttributeCache;
extern CustomAttributesCache t299__CustomAttributeCache_U3CDefaultSurrogateSelectorU3Ek__BackingField;
extern CustomAttributesCache t299__CustomAttributeCache_m10185;
const Il2CppTypeDefinitionMetadata t299_DM = 
{
	NULL, NULL, t299_ITIs, t299_IOs, &t9_0_0_0, t299_VT, t299_VTIGM, NULL};
TypeInfo t299_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryFormatter", "System.Runtime.Serialization.Formatters.Binary", t299_MIs, t299_PIs, t299_FIs, NULL, &t299_TI, NULL, &t299__CustomAttributeCache, &t299_0_0_0, &t299_1_0_0, &t299_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t299), sizeof (t299), 0, -1, sizeof(t299_SFs), 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 14, 6, 7, 0, 0, 10, 2, 2};
#include "t1949.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.CodeGenerator
extern TypeInfo t1949_TI;
#include "t1949MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10195_MI = 
{
	".cctor", (methodPointerType)&m10195, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4061, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1949_m10196_ParameterInfos[] = 
{
	{"type", 0, 134222551, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"context", 1, 134222552, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10196_MI = 
{
	"GenerateMetadataType", (methodPointerType)&m10196, &t1949_TI, &t126_0_0_0, RuntimeInvoker_t9_t9_t1107, t1949_m10196_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4062, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1949_m10197_ParameterInfos[] = 
{
	{"type", 0, 134222553, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"context", 1, 134222554, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10197_MI = 
{
	"GenerateMetadataTypeInternal", (methodPointerType)&m10197, &t1949_TI, &t126_0_0_0, RuntimeInvoker_t9_t9_t1107, t1949_m10197_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4063, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1759_0_0_0;
extern Il2CppType t1759_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1949_m10198_ParameterInfos[] = 
{
	{"ig", 0, 134222555, &EmptyCustomAttributesCache, &t1759_0_0_0},
	{"t", 1, 134222556, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10198_MI = 
{
	"LoadFromPtr", (methodPointerType)&m10198, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1949_m10198_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4064, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1759_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1949_m10199_ParameterInfos[] = 
{
	{"gen", 0, 134222557, &EmptyCustomAttributesCache, &t1759_0_0_0},
	{"type", 1, 134222558, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"member", 2, 134222559, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10199_MI = 
{
	"EmitWriteTypeSpec", (methodPointerType)&m10199, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1949_m10199_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4065, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1759_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1949_m10200_ParameterInfos[] = 
{
	{"gen", 0, 134222560, &EmptyCustomAttributesCache, &t1759_0_0_0},
	{"type", 1, 134222561, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"member", 2, 134222562, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10200_MI = 
{
	"EmitLoadTypeAssembly", (methodPointerType)&m10200, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1949_m10200_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4066, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1759_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1949_m10201_ParameterInfos[] = 
{
	{"gen", 0, 134222563, &EmptyCustomAttributesCache, &t1759_0_0_0},
	{"type", 1, 134222564, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10201_MI = 
{
	"EmitWrite", (methodPointerType)&m10201, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1949_m10201_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 4067, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1759_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1949_m10202_ParameterInfos[] = 
{
	{"gen", 0, 134222565, &EmptyCustomAttributesCache, &t1759_0_0_0},
	{"type", 1, 134222566, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10202_MI = 
{
	"EmitWritePrimitiveValue", (methodPointerType)&m10202, &t1949_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1949_m10202_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4068, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1949_m10203_ParameterInfos[] = 
{
	{"t", 0, 134222567, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10203_MI = 
{
	"EnumToUnderlying", (methodPointerType)&m10203, &t1949_TI, &t126_0_0_0, RuntimeInvoker_t9_t9, t1949_m10203_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4069, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1949_MIs[] =
{
	&m10195_MI,
	&m10196_MI,
	&m10197_MI,
	&m10198_MI,
	&m10199_MI,
	&m10200_MI,
	&m10201_MI,
	&m10202_MI,
	&m10203_MI,
	NULL
};
extern Il2CppType t9_0_0_17;
FieldInfo t1949_f0_FieldInfo = 
{
	"monitor", &t9_0_0_17, &t1949_TI, offsetof(t1949_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1755_0_0_17;
FieldInfo t1949_f1_FieldInfo = 
{
	"_module", &t1755_0_0_17, &t1949_TI, offsetof(t1949_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1949_FIs[] =
{
	&t1949_f0_FieldInfo,
	&t1949_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1949_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1949_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1949_0_0_0;
extern Il2CppType t1949_1_0_0;
struct t1949;
const Il2CppTypeDefinitionMetadata t1949_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1949_VT, t1949_VTIGM, NULL};
TypeInfo t1949_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CodeGenerator", "System.Runtime.Serialization.Formatters.Binary", t1949_MIs, NULL, t1949_FIs, NULL, &t1949_TI, NULL, &EmptyCustomAttributesCache, &t1949_0_0_0, &t1949_1_0_0, &t1949_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1949), sizeof (t1949), 0, -1, sizeof(t1949_SFs), 0, -1, 0, 0, 0, false, false, false, false, false, false, false, false, true, false, 9, 0, 2, 0, 0, 4, 0, 0};
#include "t1950.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.MessageFormatter
extern TypeInfo t1950_TI;
#include "t1950MD.h"
extern Il2CppType t1720_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1901_0_0_0;
extern Il2CppType t1910_0_0_0;
extern Il2CppType t1107_0_0_0;
extern Il2CppType t1945_0_0_0;
extern Il2CppType t1946_0_0_0;
extern Il2CppType t1946_0_0_0;
static ParameterInfo t1950_m10204_ParameterInfos[] = 
{
	{"writer", 0, 134222568, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"obj", 1, 134222569, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"headers", 2, 134222570, &EmptyCustomAttributesCache, &t1901_0_0_0},
	{"surrogateSelector", 3, 134222571, &EmptyCustomAttributesCache, &t1910_0_0_0},
	{"context", 4, 134222572, &EmptyCustomAttributesCache, &t1107_0_0_0},
	{"assemblyFormat", 5, 134222573, &EmptyCustomAttributesCache, &t1945_0_0_0},
	{"typeFormat", 6, 134222574, &EmptyCustomAttributesCache, &t1946_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9_t9_t1107_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10204_MI = 
{
	"WriteMethodCall", (methodPointerType)&m10204, &t1950_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9_t9_t1107_t125_t125, t1950_m10204_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 7, false, false, 4070, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1901_0_0_0;
extern Il2CppType t1910_0_0_0;
extern Il2CppType t1107_0_0_0;
extern Il2CppType t1945_0_0_0;
extern Il2CppType t1946_0_0_0;
static ParameterInfo t1950_m10205_ParameterInfos[] = 
{
	{"writer", 0, 134222575, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"obj", 1, 134222576, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"headers", 2, 134222577, &EmptyCustomAttributesCache, &t1901_0_0_0},
	{"surrogateSelector", 3, 134222578, &EmptyCustomAttributesCache, &t1910_0_0_0},
	{"context", 4, 134222579, &EmptyCustomAttributesCache, &t1107_0_0_0},
	{"assemblyFormat", 5, 134222580, &EmptyCustomAttributesCache, &t1945_0_0_0},
	{"typeFormat", 6, 134222581, &EmptyCustomAttributesCache, &t1946_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9_t9_t1107_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10205_MI = 
{
	"WriteMethodResponse", (methodPointerType)&m10205, &t1950_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9_t9_t1107_t125_t125, t1950_m10205_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 7, false, false, 4071, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1940_0_0_0;
extern Il2CppType t1718_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t1948_0_0_0;
extern Il2CppType t299_0_0_0;
static ParameterInfo t1950_m10206_ParameterInfos[] = 
{
	{"elem", 0, 134222582, &EmptyCustomAttributesCache, &t1940_0_0_0},
	{"reader", 1, 134222583, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"hasHeaders", 2, 134222584, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"headerHandler", 3, 134222585, &EmptyCustomAttributesCache, &t1948_0_0_0},
	{"formatter", 4, 134222586, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t582_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10206_MI = 
{
	"ReadMethodCall", (methodPointerType)&m10206, &t1950_TI, &t9_0_0_0, RuntimeInvoker_t9_t582_t9_t186_t9_t9, t1950_m10206_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 5, false, false, 4072, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1940_0_0_0;
extern Il2CppType t1718_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t1948_0_0_0;
extern Il2CppType t1915_0_0_0;
extern Il2CppType t1915_0_0_0;
extern Il2CppType t299_0_0_0;
static ParameterInfo t1950_m10207_ParameterInfos[] = 
{
	{"elem", 0, 134222587, &EmptyCustomAttributesCache, &t1940_0_0_0},
	{"reader", 1, 134222588, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"hasHeaders", 2, 134222589, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"headerHandler", 3, 134222590, &EmptyCustomAttributesCache, &t1948_0_0_0},
	{"methodCallMessage", 4, 134222591, &EmptyCustomAttributesCache, &t1915_0_0_0},
	{"formatter", 5, 134222592, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t582_t9_t186_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10207_MI = 
{
	"ReadMethodResponse", (methodPointerType)&m10207, &t1950_TI, &t9_0_0_0, RuntimeInvoker_t9_t582_t9_t186_t9_t9_t9, t1950_m10207_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 6, false, false, 4073, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t1950_m10208_ParameterInfos[] = 
{
	{"objects", 0, 134222593, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10208_MI = 
{
	"AllTypesArePrimitive", (methodPointerType)&m10208, &t1950_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1950_m10208_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4074, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1950_m10209_ParameterInfos[] = 
{
	{"type", 0, 134222594, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10209_MI = 
{
	"IsMethodPrimitive", (methodPointerType)&m10209, &t1950_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1950_m10209_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4075, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1166_0_0_0;
extern Il2CppType t1166_0_0_0;
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1950_m10210_ParameterInfos[] = 
{
	{"properties", 0, 134222595, &EmptyCustomAttributesCache, &t1166_0_0_0},
	{"internalKeys", 1, 134222596, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10210_MI = 
{
	"GetExtraProperties", (methodPointerType)&m10210, &t1950_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t9, t1950_m10210_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 4076, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1950_m10211_ParameterInfos[] = 
{
	{"key", 0, 134222597, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"internalKeys", 1, 134222598, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10211_MI = 
{
	"IsInternalKey", (methodPointerType)&m10211, &t1950_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1950_m10211_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 4077, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1950_MIs[] =
{
	&m10204_MI,
	&m10205_MI,
	&m10206_MI,
	&m10207_MI,
	&m10208_MI,
	&m10209_MI,
	&m10210_MI,
	&m10211_MI,
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
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1950_0_0_0;
extern Il2CppType t1950_1_0_0;
struct t1950;
const Il2CppTypeDefinitionMetadata t1950_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1950_VT, t1950_VTIGM, NULL};
TypeInfo t1950_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MessageFormatter", "System.Runtime.Serialization.Formatters.Binary", t1950_MIs, NULL, NULL, NULL, &t1950_TI, NULL, &EmptyCustomAttributesCache, &t1950_0_0_0, &t1950_1_0_0, &t1950_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1950), sizeof (t1950), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 8, 0, 0, 0, 0, 4, 0, 0};
#include "t1951.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
extern TypeInfo t1951_TI;
#include "t1951MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10212_MI = 
{
	".ctor", (methodPointerType)&m10212, &t1951_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4105, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1951_MIs[] =
{
	&m10212_MI,
	NULL
};
extern Il2CppType t126_0_0_6;
FieldInfo t1951_f0_FieldInfo = 
{
	"Type", &t126_0_0_6, &t1951_TI, offsetof(t1951, f0), &EmptyCustomAttributesCache};
extern Il2CppType t152_0_0_6;
FieldInfo t1951_f1_FieldInfo = 
{
	"MemberTypes", &t152_0_0_6, &t1951_TI, offsetof(t1951, f1), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_6;
FieldInfo t1951_f2_FieldInfo = 
{
	"MemberNames", &t221_0_0_6, &t1951_TI, offsetof(t1951, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1952_0_0_6;
FieldInfo t1951_f3_FieldInfo = 
{
	"MemberInfos", &t1952_0_0_6, &t1951_TI, offsetof(t1951, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1951_f4_FieldInfo = 
{
	"FieldCount", &t125_0_0_6, &t1951_TI, offsetof(t1951, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t1951_f5_FieldInfo = 
{
	"NeedsSerializationInfo", &t124_0_0_6, &t1951_TI, offsetof(t1951, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1951_FIs[] =
{
	&t1951_f0_FieldInfo,
	&t1951_f1_FieldInfo,
	&t1951_f2_FieldInfo,
	&t1951_f3_FieldInfo,
	&t1951_f4_FieldInfo,
	&t1951_f5_FieldInfo,
	NULL
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
extern Il2CppType t1951_0_0_0;
extern Il2CppType t1951_1_0_0;
extern TypeInfo t1954_TI;
extern Il2CppType t1954_0_0_0;
struct t1951;
const Il2CppTypeDefinitionMetadata t1951_DM = 
{
	&t1954_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t1951_VT, t1951_VTIGM, NULL};
TypeInfo t1951_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeMetadata", "", t1951_MIs, NULL, t1951_FIs, NULL, &t1951_TI, NULL, &EmptyCustomAttributesCache, &t1951_0_0_0, &t1951_1_0_0, &t1951_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1951), sizeof (t1951), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 6, 0, 0, 4, 0, 0};
#include "t1953.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller
extern TypeInfo t1953_TI;
#include "t1953MD.h"
extern Il2CppType t125_0_0_0;
static ParameterInfo t1953_m10213_ParameterInfos[] = 
{
	{"count", 0, 134222693, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10213_MI = 
{
	".ctor", (methodPointerType)&m10213, &t1953_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1953_m10213_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4106, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1953_MIs[] =
{
	&m10213_MI,
	NULL
};
extern Il2CppType t125_0_0_6;
FieldInfo t1953_f0_FieldInfo = 
{
	"NullCount", &t125_0_0_6, &t1953_TI, offsetof(t1953, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1953_FIs[] =
{
	&t1953_f0_FieldInfo,
	NULL
};
static Il2CppMethodReference t1953_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1953_VTIGM[] =
{
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
	&t1954_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t1953_VT, t1953_VTIGM, NULL};
TypeInfo t1953_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ArrayNullFiller", "", t1953_MIs, NULL, t1953_FIs, NULL, &t1953_TI, NULL, &EmptyCustomAttributesCache, &t1953_0_0_0, &t1953_1_0_0, &t1953_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1953), sizeof (t1953), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 0};
#include "t1954.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectReader
#include "t1954MD.h"
extern Il2CppType t299_0_0_0;
static ParameterInfo t1954_m10214_ParameterInfos[] = 
{
	{"formatter", 0, 134222599, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10214_MI = 
{
	".ctor", (methodPointerType)&m10214, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1954_m10214_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4078, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1901_1_0_2;
extern Il2CppType t1901_1_0_0;
static ParameterInfo t1954_m10215_ParameterInfos[] = 
{
	{"reader", 0, 134222600, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"readHeaders", 1, 134222601, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"result", 2, 134222602, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"headers", 3, 134222603, &EmptyCustomAttributesCache, &t1901_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t1009_t2637 (MethodInfo* method, void* obj, void** args);
MethodInfo m10215_MI = 
{
	"ReadObjectGraph", (methodPointerType)&m10215, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t1009_t2637, t1954_m10215_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 4, false, false, 4079, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1940_0_0_0;
extern Il2CppType t1718_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1901_1_0_2;
static ParameterInfo t1954_m10216_ParameterInfos[] = 
{
	{"elem", 0, 134222604, &EmptyCustomAttributesCache, &t1940_0_0_0},
	{"reader", 1, 134222605, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"readHeaders", 2, 134222606, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"result", 3, 134222607, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"headers", 4, 134222608, &EmptyCustomAttributesCache, &t1901_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t582_t9_t186_t1009_t2637 (MethodInfo* method, void* obj, void** args);
MethodInfo m10216_MI = 
{
	"ReadObjectGraph", (methodPointerType)&m10216, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t582_t9_t186_t1009_t2637, t1954_m10216_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 5, false, false, 4080, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1940_0_0_0;
extern Il2CppType t1718_0_0_0;
static ParameterInfo t1954_m10217_ParameterInfos[] = 
{
	{"element", 0, 134222609, &EmptyCustomAttributesCache, &t1940_0_0_0},
	{"reader", 1, 134222610, &EmptyCustomAttributesCache, &t1718_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t582_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10217_MI = 
{
	"ReadNextObject", (methodPointerType)&m10217, &t1954_TI, &t124_0_0_0, RuntimeInvoker_t124_t582_t9, t1954_m10217_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4081, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
static ParameterInfo t1954_m10218_ParameterInfos[] = 
{
	{"reader", 0, 134222611, &EmptyCustomAttributesCache, &t1718_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10218_MI = 
{
	"ReadNextObject", (methodPointerType)&m10218, &t1954_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1954_m10218_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4082, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10219_MI = 
{
	"get_CurrentObject", (methodPointerType)&m10219, &t1954_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4083, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1940_0_0_0;
extern Il2CppType t1718_0_0_0;
extern Il2CppType t303_1_0_2;
extern Il2CppType t303_1_0_0;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1106_1_0_2;
extern Il2CppType t1106_1_0_0;
static ParameterInfo t1954_m10220_ParameterInfos[] = 
{
	{"element", 0, 134222612, &EmptyCustomAttributesCache, &t1940_0_0_0},
	{"reader", 1, 134222613, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"objectId", 2, 134222614, &EmptyCustomAttributesCache, &t303_1_0_2},
	{"value", 3, 134222615, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"info", 4, 134222616, &EmptyCustomAttributesCache, &t1106_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t582_t9_t2215_t1009_t2638 (MethodInfo* method, void* obj, void** args);
MethodInfo m10220_MI = 
{
	"ReadObject", (methodPointerType)&m10220, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t582_t9_t2215_t1009_t2638, t1954_m10220_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 5, false, false, 4084, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
static ParameterInfo t1954_m10221_ParameterInfos[] = 
{
	{"reader", 0, 134222617, &EmptyCustomAttributesCache, &t1718_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10221_MI = 
{
	"ReadAssembly", (methodPointerType)&m10221, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1954_m10221_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4085, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t303_1_0_2;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1106_1_0_2;
static ParameterInfo t1954_m10222_ParameterInfos[] = 
{
	{"reader", 0, 134222618, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"isRuntimeObject", 1, 134222619, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"hasTypeInfo", 2, 134222620, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"objectId", 3, 134222621, &EmptyCustomAttributesCache, &t303_1_0_2},
	{"value", 4, 134222622, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"info", 5, 134222623, &EmptyCustomAttributesCache, &t1106_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t186_t2215_t1009_t2638 (MethodInfo* method, void* obj, void** args);
MethodInfo m10222_MI = 
{
	"ReadObjectInstance", (methodPointerType)&m10222, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t186_t2215_t1009_t2638, t1954_m10222_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 4086, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t303_1_0_2;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1106_1_0_2;
static ParameterInfo t1954_m10223_ParameterInfos[] = 
{
	{"reader", 0, 134222624, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"objectId", 1, 134222625, &EmptyCustomAttributesCache, &t303_1_0_2},
	{"value", 2, 134222626, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"info", 3, 134222627, &EmptyCustomAttributesCache, &t1106_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2215_t1009_t2638 (MethodInfo* method, void* obj, void** args);
MethodInfo m10223_MI = 
{
	"ReadRefTypeObjectInstance", (methodPointerType)&m10223, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2215_t1009_t2638, t1954_m10223_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 4087, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t1951_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t9_1_0_2;
extern Il2CppType t1106_1_0_2;
static ParameterInfo t1954_m10224_ParameterInfos[] = 
{
	{"reader", 0, 134222628, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"metadata", 1, 134222629, &EmptyCustomAttributesCache, &t1951_0_0_0},
	{"objectId", 2, 134222630, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"objectInstance", 3, 134222631, &EmptyCustomAttributesCache, &t9_1_0_2},
	{"info", 4, 134222632, &EmptyCustomAttributesCache, &t1106_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t303_t1009_t2638 (MethodInfo* method, void* obj, void** args);
MethodInfo m10224_MI = 
{
	"ReadObjectContent", (methodPointerType)&m10224, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t303_t1009_t2638, t1954_m10224_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 5, false, false, 4088, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1106_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t567_0_0_0;
extern Il2CppType t567_0_0_0;
extern Il2CppType t1101_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1954_m10225_ParameterInfos[] = 
{
	{"objectId", 0, 134222633, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"objectInstance", 1, 134222634, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"info", 2, 134222635, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"parentObjectId", 3, 134222636, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"parentObjectMemeber", 4, 134222637, &EmptyCustomAttributesCache, &t567_0_0_0},
	{"indices", 5, 134222638, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303_t9_t9_t303_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10225_MI = 
{
	"RegisterObject", (methodPointerType)&m10225, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t303_t9_t9_t303_t9_t9, t1954_m10225_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 4089, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t303_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1954_m10226_ParameterInfos[] = 
{
	{"reader", 0, 134222639, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"objectId", 1, 134222640, &EmptyCustomAttributesCache, &t303_1_0_2},
	{"value", 2, 134222641, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2215_t1009 (MethodInfo* method, void* obj, void** args);
MethodInfo m10226_MI = 
{
	"ReadStringIntance", (methodPointerType)&m10226, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2215_t1009, t1954_m10226_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4090, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t303_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1954_m10227_ParameterInfos[] = 
{
	{"reader", 0, 134222642, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"objectId", 1, 134222643, &EmptyCustomAttributesCache, &t303_1_0_2},
	{"val", 2, 134222644, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2215_t1009 (MethodInfo* method, void* obj, void** args);
MethodInfo m10227_MI = 
{
	"ReadGenericArray", (methodPointerType)&m10227, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2215_t1009, t1954_m10227_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4091, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
static ParameterInfo t1954_m10228_ParameterInfos[] = 
{
	{"reader", 0, 134222645, &EmptyCustomAttributesCache, &t1718_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10228_MI = 
{
	"ReadBoxedPrimitiveTypeValue", (methodPointerType)&m10228, &t1954_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1954_m10228_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4092, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t303_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1954_m10229_ParameterInfos[] = 
{
	{"reader", 0, 134222646, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"objectId", 1, 134222647, &EmptyCustomAttributesCache, &t303_1_0_2},
	{"val", 2, 134222648, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2215_t1009 (MethodInfo* method, void* obj, void** args);
MethodInfo m10229_MI = 
{
	"ReadArrayOfPrimitiveType", (methodPointerType)&m10229, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2215_t1009, t1954_m10229_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4093, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1954_m10230_ParameterInfos[] = 
{
	{"reader", 0, 134222649, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"array", 1, 134222650, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"dataSize", 2, 134222651, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10230_MI = 
{
	"BlockRead", (methodPointerType)&m10230, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1954_m10230_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4094, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t303_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1954_m10231_ParameterInfos[] = 
{
	{"reader", 0, 134222652, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"objectId", 1, 134222653, &EmptyCustomAttributesCache, &t303_1_0_2},
	{"array", 2, 134222654, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2215_t1009 (MethodInfo* method, void* obj, void** args);
MethodInfo m10231_MI = 
{
	"ReadArrayOfObject", (methodPointerType)&m10231, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2215_t1009, t1954_m10231_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4095, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t303_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1954_m10232_ParameterInfos[] = 
{
	{"reader", 0, 134222655, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"objectId", 1, 134222656, &EmptyCustomAttributesCache, &t303_1_0_2},
	{"array", 2, 134222657, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2215_t1009 (MethodInfo* method, void* obj, void** args);
MethodInfo m10232_MI = 
{
	"ReadArrayOfString", (methodPointerType)&m10232, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2215_t1009, t1954_m10232_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4096, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t303_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1954_m10233_ParameterInfos[] = 
{
	{"reader", 0, 134222658, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"elementType", 1, 134222659, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"objectId", 2, 134222660, &EmptyCustomAttributesCache, &t303_1_0_2},
	{"val", 3, 134222661, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t2215_t1009 (MethodInfo* method, void* obj, void** args);
MethodInfo m10233_MI = 
{
	"ReadSimpleArray", (methodPointerType)&m10233, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t2215_t1009, t1954_m10233_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 4097, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1954_m10234_ParameterInfos[] = 
{
	{"reader", 0, 134222662, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"isRuntimeObject", 1, 134222663, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"hasTypeInfo", 2, 134222664, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1951_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10234_MI = 
{
	"ReadTypeMetadata", (methodPointerType)&m10234, &t1954_TI, &t1951_0_0_0, RuntimeInvoker_t9_t9_t186_t186, t1954_m10234_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4098, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t1106_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t567_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1954_m10235_ParameterInfos[] = 
{
	{"reader", 0, 134222665, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"parentObject", 1, 134222666, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"parentObjectId", 2, 134222667, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"info", 3, 134222668, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"valueType", 4, 134222669, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"fieldName", 5, 134222670, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"memberInfo", 6, 134222671, &EmptyCustomAttributesCache, &t567_0_0_0},
	{"indices", 7, 134222672, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t303_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10235_MI = 
{
	"ReadValue", (methodPointerType)&m10235, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t303_t9_t9_t9_t9_t9, t1954_m10235_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 8, false, false, 4099, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t567_0_0_0;
extern Il2CppType t1106_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1954_m10236_ParameterInfos[] = 
{
	{"parentObject", 0, 134222673, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"fieldName", 1, 134222674, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"memberInfo", 2, 134222675, &EmptyCustomAttributesCache, &t567_0_0_0},
	{"info", 3, 134222676, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"value", 4, 134222677, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"valueType", 5, 134222678, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"indices", 6, 134222679, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10236_MI = 
{
	"SetObjectValue", (methodPointerType)&m10236, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9_t9_t9_t9_t9, t1954_m10236_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4100, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1106_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t567_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1954_m10237_ParameterInfos[] = 
{
	{"parentObjectId", 0, 134222680, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"childObjectId", 1, 134222681, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"parentObject", 2, 134222682, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"info", 3, 134222683, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"fieldName", 4, 134222684, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"memberInfo", 5, 134222685, &EmptyCustomAttributesCache, &t567_0_0_0},
	{"indices", 6, 134222686, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303_t303_t9_t9_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10237_MI = 
{
	"RecordFixup", (methodPointerType)&m10237, &t1954_TI, &t122_0_0_0, RuntimeInvoker_t122_t303_t303_t9_t9_t9_t9_t9, t1954_m10237_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 4101, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1954_m10238_ParameterInfos[] = 
{
	{"assemblyId", 0, 134222687, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"className", 1, 134222688, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t303_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10238_MI = 
{
	"GetDeserializationType", (methodPointerType)&m10238, &t1954_TI, &t126_0_0_0, RuntimeInvoker_t9_t303_t9, t1954_m10238_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4102, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t1941_0_0_0;
static ParameterInfo t1954_m10239_ParameterInfos[] = 
{
	{"reader", 0, 134222689, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"code", 1, 134222690, &EmptyCustomAttributesCache, &t1941_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9_t582 (MethodInfo* method, void* obj, void** args);
MethodInfo m10239_MI = 
{
	"ReadType", (methodPointerType)&m10239, &t1954_TI, &t126_0_0_0, RuntimeInvoker_t9_t9_t582, t1954_m10239_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4103, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1954_m10240_ParameterInfos[] = 
{
	{"reader", 0, 134222691, &EmptyCustomAttributesCache, &t1718_0_0_0},
	{"type", 1, 134222692, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10240_MI = 
{
	"ReadPrimitiveTypeValue", (methodPointerType)&m10240, &t1954_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1954_m10240_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4104, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1954_MIs[] =
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
	NULL
};
extern Il2CppType t1910_0_0_1;
FieldInfo t1954_f0_FieldInfo = 
{
	"_surrogateSelector", &t1910_0_0_1, &t1954_TI, offsetof(t1954, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1107_0_0_1;
FieldInfo t1954_f1_FieldInfo = 
{
	"_context", &t1107_0_0_1, &t1954_TI, offsetof(t1954, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1944_0_0_1;
FieldInfo t1954_f2_FieldInfo = 
{
	"_binder", &t1944_0_0_1, &t1954_TI, offsetof(t1954, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1947_0_0_1;
FieldInfo t1954_f3_FieldInfo = 
{
	"_filterLevel", &t1947_0_0_1, &t1954_TI, offsetof(t1954, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1955_0_0_1;
FieldInfo t1954_f4_FieldInfo = 
{
	"_manager", &t1955_0_0_1, &t1954_TI, offsetof(t1954, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_1;
FieldInfo t1954_f5_FieldInfo = 
{
	"_registeredAssemblies", &t1164_0_0_1, &t1954_TI, offsetof(t1954, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_1;
FieldInfo t1954_f6_FieldInfo = 
{
	"_typeMetadataCache", &t1164_0_0_1, &t1954_TI, offsetof(t1954, f6), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t1954_f7_FieldInfo = 
{
	"_lastObject", &t9_0_0_1, &t1954_TI, offsetof(t1954, f7), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_1;
FieldInfo t1954_f8_FieldInfo = 
{
	"_lastObjectID", &t303_0_0_1, &t1954_TI, offsetof(t1954, f8), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_1;
FieldInfo t1954_f9_FieldInfo = 
{
	"_rootObjectID", &t303_0_0_1, &t1954_TI, offsetof(t1954, f9), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t1954_f10_FieldInfo = 
{
	"arrayBuffer", &t737_0_0_1, &t1954_TI, offsetof(t1954, f10), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1954_f11_FieldInfo = 
{
	"ArrayBufferLength", &t125_0_0_1, &t1954_TI, offsetof(t1954, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1954_FIs[] =
{
	&t1954_f0_FieldInfo,
	&t1954_f1_FieldInfo,
	&t1954_f2_FieldInfo,
	&t1954_f3_FieldInfo,
	&t1954_f4_FieldInfo,
	&t1954_f5_FieldInfo,
	&t1954_f6_FieldInfo,
	&t1954_f7_FieldInfo,
	&t1954_f8_FieldInfo,
	&t1954_f9_FieldInfo,
	&t1954_f10_FieldInfo,
	&t1954_f11_FieldInfo,
	NULL
};
extern MethodInfo m10219_MI;
static PropertyInfo t1954____CurrentObject_PropertyInfo = 
{
	&t1954_TI, "CurrentObject", &m10219_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1954_PIs[] =
{
	&t1954____CurrentObject_PropertyInfo,
	NULL
};
static const Il2CppType* t1954_TI__nestedTypes[2] =
{
	&t1951_0_0_0,
	&t1953_0_0_0,
};
static Il2CppMethodReference t1954_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1954_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1954_1_0_0;
struct t1954;
const Il2CppTypeDefinitionMetadata t1954_DM = 
{
	NULL, t1954_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t1954_VT, t1954_VTIGM, NULL};
TypeInfo t1954_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectReader", "System.Runtime.Serialization.Formatters.Binary", t1954_MIs, t1954_PIs, t1954_FIs, NULL, &t1954_TI, NULL, &EmptyCustomAttributesCache, &t1954_0_0_0, &t1954_1_0_0, &t1954_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1954), sizeof (t1954), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 27, 1, 12, 0, 2, 4, 0, 0};
#include "t1956.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.TypeMetadata
extern TypeInfo t1956_TI;
#include "t1956MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10241_MI = 
{
	".ctor", (methodPointerType)&m10241, &t1956_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4107, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1957_0_0_0;
extern Il2CppType t1957_0_0_0;
extern Il2CppType t1720_0_0_0;
static ParameterInfo t1956_m12120_ParameterInfos[] = 
{
	{"ow", 0, 134222694, &EmptyCustomAttributesCache, &t1957_0_0_0},
	{"writer", 1, 134222695, &EmptyCustomAttributesCache, &t1720_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12120_MI = 
{
	"WriteAssemblies", NULL, &t1956_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1956_m12120_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 2, false, false, 4108, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1957_0_0_0;
extern Il2CppType t1720_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1956_m12121_ParameterInfos[] = 
{
	{"ow", 0, 134222696, &EmptyCustomAttributesCache, &t1957_0_0_0},
	{"writer", 1, 134222697, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"writeTypes", 2, 134222698, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m12121_MI = 
{
	"WriteTypeData", NULL, &t1956_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1956_m12121_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 3, false, false, 4109, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1957_0_0_0;
extern Il2CppType t1720_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1956_m12118_ParameterInfos[] = 
{
	{"ow", 0, 134222699, &EmptyCustomAttributesCache, &t1957_0_0_0},
	{"writer", 1, 134222700, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"data", 2, 134222701, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12118_MI = 
{
	"WriteObjectData", NULL, &t1956_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1956_m12118_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 3, false, false, 4110, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1956_0_0_0;
extern Il2CppType t1956_0_0_0;
static ParameterInfo t1956_m10242_ParameterInfos[] = 
{
	{"other", 0, 134222702, &EmptyCustomAttributesCache, &t1956_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10242_MI = 
{
	"IsCompatible", (methodPointerType)&m10242, &t1956_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1956_m10242_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 1, false, false, 4111, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m12119_MI = 
{
	"get_RequiresTypes", NULL, &t1956_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 3526, 0, 8, 0, false, false, 4112, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1956_MIs[] =
{
	&m10241_MI,
	&m12120_MI,
	&m12121_MI,
	&m12118_MI,
	&m10242_MI,
	&m12119_MI,
	NULL
};
extern Il2CppType t2_0_0_6;
FieldInfo t1956_f0_FieldInfo = 
{
	"TypeAssemblyName", &t2_0_0_6, &t1956_TI, offsetof(t1956, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1956_f1_FieldInfo = 
{
	"InstanceTypeName", &t2_0_0_6, &t1956_TI, offsetof(t1956, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1956_FIs[] =
{
	&t1956_f0_FieldInfo,
	&t1956_f1_FieldInfo,
	NULL
};
extern MethodInfo m12119_MI;
static PropertyInfo t1956____RequiresTypes_PropertyInfo = 
{
	&t1956_TI, "RequiresTypes", &m12119_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1956_PIs[] =
{
	&t1956____RequiresTypes_PropertyInfo,
	NULL
};
extern MethodInfo m10242_MI;
static Il2CppMethodReference t1956_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
	&m10242_MI,
	NULL,
};
static bool t1956_VTIGM[] =
{
	false,
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
extern Il2CppType t1956_1_0_0;
struct t1956;
const Il2CppTypeDefinitionMetadata t1956_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1956_VT, t1956_VTIGM, NULL};
TypeInfo t1956_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeMetadata", "System.Runtime.Serialization.Formatters.Binary", t1956_MIs, t1956_PIs, t1956_FIs, NULL, &t1956_TI, NULL, &EmptyCustomAttributesCache, &t1956_0_0_0, &t1956_1_0_0, &t1956_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1956), sizeof (t1956), 0, -1, 0, 0, -1, 1048704, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 2, 0, 0, 9, 0, 0};
#include "t1958.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ClrTypeMetadata
extern TypeInfo t1958_TI;
#include "t1958MD.h"
extern Il2CppType t126_0_0_0;
static ParameterInfo t1958_m10243_ParameterInfos[] = 
{
	{"instanceType", 0, 134222703, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10243_MI = 
{
	".ctor", (methodPointerType)&m10243, &t1958_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1958_m10243_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4113, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10244_MI = 
{
	"get_RequiresTypes", (methodPointerType)&m10244, &t1958_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 4114, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1958_MIs[] =
{
	&m10243_MI,
	&m10244_MI,
	NULL
};
extern Il2CppType t126_0_0_6;
FieldInfo t1958_f2_FieldInfo = 
{
	"InstanceType", &t126_0_0_6, &t1958_TI, offsetof(t1958, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1958_FIs[] =
{
	&t1958_f2_FieldInfo,
	NULL
};
extern MethodInfo m10244_MI;
static PropertyInfo t1958____RequiresTypes_PropertyInfo = 
{
	&t1958_TI, "RequiresTypes", &m10244_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1958_PIs[] =
{
	&t1958____RequiresTypes_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1958_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
	&m10242_MI,
	&m10244_MI,
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
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1958_0_0_0;
extern Il2CppType t1958_1_0_0;
struct t1958;
const Il2CppTypeDefinitionMetadata t1958_DM = 
{
	NULL, NULL, NULL, NULL, &t1956_0_0_0, t1958_VT, t1958_VTIGM, NULL};
TypeInfo t1958_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ClrTypeMetadata", "System.Runtime.Serialization.Formatters.Binary", t1958_MIs, t1958_PIs, t1958_FIs, NULL, &t1958_TI, NULL, &EmptyCustomAttributesCache, &t1958_0_0_0, &t1958_1_0_0, &t1958_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1958), sizeof (t1958), 0, -1, 0, 0, -1, 1048704, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 1, 1, 0, 0, 9, 0, 0};
#include "t1959.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
extern TypeInfo t1959_TI;
#include "t1959MD.h"
extern Il2CppType t126_0_0_0;
extern Il2CppType t1106_0_0_0;
static ParameterInfo t1959_m10245_ParameterInfos[] = 
{
	{"itype", 0, 134222704, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"info", 1, 134222705, &EmptyCustomAttributesCache, &t1106_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10245_MI = 
{
	".ctor", (methodPointerType)&m10245, &t1959_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1959_m10245_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4115, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1956_0_0_0;
static ParameterInfo t1959_m10246_ParameterInfos[] = 
{
	{"other", 0, 134222706, &EmptyCustomAttributesCache, &t1956_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10246_MI = 
{
	"IsCompatible", (methodPointerType)&m10246, &t1959_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1959_m10246_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 1, false, false, 4116, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1957_0_0_0;
extern Il2CppType t1720_0_0_0;
static ParameterInfo t1959_m10247_ParameterInfos[] = 
{
	{"ow", 0, 134222707, &EmptyCustomAttributesCache, &t1957_0_0_0},
	{"writer", 1, 134222708, &EmptyCustomAttributesCache, &t1720_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10247_MI = 
{
	"WriteAssemblies", (methodPointerType)&m10247, &t1959_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1959_m10247_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 4117, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1957_0_0_0;
extern Il2CppType t1720_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1959_m10248_ParameterInfos[] = 
{
	{"ow", 0, 134222709, &EmptyCustomAttributesCache, &t1957_0_0_0},
	{"writer", 1, 134222710, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"writeTypes", 2, 134222711, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10248_MI = 
{
	"WriteTypeData", (methodPointerType)&m10248, &t1959_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1959_m10248_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 3, false, false, 4118, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1957_0_0_0;
extern Il2CppType t1720_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1959_m10249_ParameterInfos[] = 
{
	{"ow", 0, 134222712, &EmptyCustomAttributesCache, &t1957_0_0_0},
	{"writer", 1, 134222713, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"data", 2, 134222714, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10249_MI = 
{
	"WriteObjectData", (methodPointerType)&m10249, &t1959_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1959_m10249_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 3, false, false, 4119, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10250_MI = 
{
	"get_RequiresTypes", (methodPointerType)&m10250, &t1959_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 4120, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1959_MIs[] =
{
	&m10245_MI,
	&m10246_MI,
	&m10247_MI,
	&m10248_MI,
	&m10249_MI,
	&m10250_MI,
	NULL
};
extern Il2CppType t152_0_0_1;
FieldInfo t1959_f2_FieldInfo = 
{
	"types", &t152_0_0_1, &t1959_TI, offsetof(t1959, f2), &EmptyCustomAttributesCache};
extern Il2CppType t221_0_0_1;
FieldInfo t1959_f3_FieldInfo = 
{
	"names", &t221_0_0_1, &t1959_TI, offsetof(t1959, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1959_FIs[] =
{
	&t1959_f2_FieldInfo,
	&t1959_f3_FieldInfo,
	NULL
};
extern MethodInfo m10250_MI;
static PropertyInfo t1959____RequiresTypes_PropertyInfo = 
{
	&t1959_TI, "RequiresTypes", &m10250_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1959_PIs[] =
{
	&t1959____RequiresTypes_PropertyInfo,
	NULL
};
extern MethodInfo m10247_MI;
extern MethodInfo m10248_MI;
extern MethodInfo m10249_MI;
extern MethodInfo m10246_MI;
static Il2CppMethodReference t1959_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10247_MI,
	&m10248_MI,
	&m10249_MI,
	&m10246_MI,
	&m10250_MI,
};
static bool t1959_VTIGM[] =
{
	false,
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
extern Il2CppType t1959_0_0_0;
extern Il2CppType t1959_1_0_0;
struct t1959;
const Il2CppTypeDefinitionMetadata t1959_DM = 
{
	NULL, NULL, NULL, NULL, &t1956_0_0_0, t1959_VT, t1959_VTIGM, NULL};
TypeInfo t1959_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializableTypeMetadata", "System.Runtime.Serialization.Formatters.Binary", t1959_MIs, t1959_PIs, t1959_FIs, NULL, &t1959_TI, NULL, &EmptyCustomAttributesCache, &t1959_0_0_0, &t1959_1_0_0, &t1959_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1959), sizeof (t1959), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 2, 0, 0, 9, 0, 0};
#include "t1960.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
extern TypeInfo t1960_TI;
#include "t1960MD.h"
extern Il2CppType t126_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1960_m10251_ParameterInfos[] = 
{
	{"type", 0, 134222715, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"context", 1, 134222716, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10251_MI = 
{
	".ctor", (methodPointerType)&m10251, &t1960_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1960_m10251_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4121, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1957_0_0_0;
extern Il2CppType t1720_0_0_0;
static ParameterInfo t1960_m10252_ParameterInfos[] = 
{
	{"ow", 0, 134222717, &EmptyCustomAttributesCache, &t1957_0_0_0},
	{"writer", 1, 134222718, &EmptyCustomAttributesCache, &t1720_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10252_MI = 
{
	"WriteAssemblies", (methodPointerType)&m10252, &t1960_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1960_m10252_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 4122, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1957_0_0_0;
extern Il2CppType t1720_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1960_m10253_ParameterInfos[] = 
{
	{"ow", 0, 134222719, &EmptyCustomAttributesCache, &t1957_0_0_0},
	{"writer", 1, 134222720, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"writeTypes", 2, 134222721, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10253_MI = 
{
	"WriteTypeData", (methodPointerType)&m10253, &t1960_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1960_m10253_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 3, false, false, 4123, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1957_0_0_0;
extern Il2CppType t1720_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1960_m10254_ParameterInfos[] = 
{
	{"ow", 0, 134222722, &EmptyCustomAttributesCache, &t1957_0_0_0},
	{"writer", 1, 134222723, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"data", 2, 134222724, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10254_MI = 
{
	"WriteObjectData", (methodPointerType)&m10254, &t1960_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1960_m10254_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 3, false, false, 4124, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1960_MIs[] =
{
	&m10251_MI,
	&m10252_MI,
	&m10253_MI,
	&m10254_MI,
	NULL
};
extern Il2CppType t1952_0_0_1;
FieldInfo t1960_f3_FieldInfo = 
{
	"members", &t1952_0_0_1, &t1960_TI, offsetof(t1960, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1960_FIs[] =
{
	&t1960_f3_FieldInfo,
	NULL
};
extern MethodInfo m10252_MI;
extern MethodInfo m10253_MI;
extern MethodInfo m10254_MI;
static Il2CppMethodReference t1960_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10252_MI,
	&m10253_MI,
	&m10254_MI,
	&m10242_MI,
	&m10244_MI,
};
static bool t1960_VTIGM[] =
{
	false,
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
extern Il2CppType t1960_0_0_0;
extern Il2CppType t1960_1_0_0;
struct t1960;
const Il2CppTypeDefinitionMetadata t1960_DM = 
{
	NULL, NULL, NULL, NULL, &t1958_0_0_0, t1960_VT, t1960_VTIGM, NULL};
TypeInfo t1960_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MemberTypeMetadata", "System.Runtime.Serialization.Formatters.Binary", t1960_MIs, NULL, t1960_FIs, NULL, &t1960_TI, NULL, &EmptyCustomAttributesCache, &t1960_0_0_0, &t1960_1_0_0, &t1960_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1960), sizeof (t1960), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 9, 0, 0};
#include "t1961.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference
extern TypeInfo t1961_TI;
#include "t1961MD.h"
extern Il2CppType t1956_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t1961_m10255_ParameterInfos[] = 
{
	{"metadata", 0, 134222791, &EmptyCustomAttributesCache, &t1956_0_0_0},
	{"id", 1, 134222792, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10255_MI = 
{
	".ctor", (methodPointerType)&m10255, &t1961_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t303, t1961_m10255_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4155, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1961_MIs[] =
{
	&m10255_MI,
	NULL
};
extern Il2CppType t1956_0_0_6;
FieldInfo t1961_f0_FieldInfo = 
{
	"Metadata", &t1956_0_0_6, &t1961_TI, offsetof(t1961, f0), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_6;
FieldInfo t1961_f1_FieldInfo = 
{
	"ObjectID", &t303_0_0_6, &t1961_TI, offsetof(t1961, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1961_FIs[] =
{
	&t1961_f0_FieldInfo,
	&t1961_f1_FieldInfo,
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
extern Il2CppType t1961_0_0_0;
extern Il2CppType t1961_1_0_0;
extern TypeInfo t1957_TI;
struct t1961;
const Il2CppTypeDefinitionMetadata t1961_DM = 
{
	&t1957_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t1961_VT, t1961_VTIGM, NULL};
TypeInfo t1961_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MetadataReference", "", t1961_MIs, NULL, t1961_FIs, NULL, &t1961_TI, NULL, &EmptyCustomAttributesCache, &t1961_0_0_0, &t1961_1_0_0, &t1961_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1961), sizeof (t1961), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t1957.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectWriter
#include "t1957MD.h"
extern Il2CppType t1910_0_0_0;
extern Il2CppType t1107_0_0_0;
extern Il2CppType t1945_0_0_0;
extern Il2CppType t1946_0_0_0;
static ParameterInfo t1957_m10256_ParameterInfos[] = 
{
	{"surrogateSelector", 0, 134222725, &EmptyCustomAttributesCache, &t1910_0_0_0},
	{"context", 1, 134222726, &EmptyCustomAttributesCache, &t1107_0_0_0},
	{"assemblyFormat", 2, 134222727, &EmptyCustomAttributesCache, &t1945_0_0_0},
	{"typeFormat", 3, 134222728, &EmptyCustomAttributesCache, &t1946_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10256_MI = 
{
	".ctor", (methodPointerType)&m10256, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107_t125_t125, t1957_m10256_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 4125, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10257_MI = 
{
	".cctor", (methodPointerType)&m10257, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4126, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1901_0_0_0;
static ParameterInfo t1957_m10258_ParameterInfos[] = 
{
	{"writer", 0, 134222729, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"obj", 1, 134222730, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"headers", 2, 134222731, &EmptyCustomAttributesCache, &t1901_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10258_MI = 
{
	"WriteObjectGraph", (methodPointerType)&m10258, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1957_m10258_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4127, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1957_m10259_ParameterInfos[] = 
{
	{"obj", 0, 134222732, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10259_MI = 
{
	"QueueObject", (methodPointerType)&m10259, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1957_m10259_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4128, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
static ParameterInfo t1957_m10260_ParameterInfos[] = 
{
	{"writer", 0, 134222733, &EmptyCustomAttributesCache, &t1720_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10260_MI = 
{
	"WriteQueuedObjects", (methodPointerType)&m10260, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1957_m10260_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4129, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1957_m10261_ParameterInfos[] = 
{
	{"writer", 0, 134222734, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"obj", 1, 134222735, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"isValueObject", 2, 134222736, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10261_MI = 
{
	"WriteObjectInstance", (methodPointerType)&m10261, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1957_m10261_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4130, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
static ParameterInfo t1957_m10262_ParameterInfos[] = 
{
	{"writer", 0, 134222737, &EmptyCustomAttributesCache, &t1720_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10262_MI = 
{
	"WriteSerializationEnd", (methodPointerType)&m10262, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1957_m10262_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4131, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1957_m10263_ParameterInfos[] = 
{
	{"writer", 0, 134222738, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"id", 1, 134222739, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"obj", 2, 134222740, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t303_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10263_MI = 
{
	"WriteObject", (methodPointerType)&m10263, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t303_t9, t1957_m10263_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4132, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1956_1_0_2;
extern Il2CppType t9_1_0_2;
static ParameterInfo t1957_m10264_ParameterInfos[] = 
{
	{"obj", 0, 134222741, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"metadata", 1, 134222742, &EmptyCustomAttributesCache, &t1956_1_0_2},
	{"data", 2, 134222743, &EmptyCustomAttributesCache, &t9_1_0_2},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t2639_t1009 (MethodInfo* method, void* obj, void** args);
MethodInfo m10264_MI = 
{
	"GetObjectData", (methodPointerType)&m10264, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t2639_t1009, t1957_m10264_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4133, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1957_m10265_ParameterInfos[] = 
{
	{"type", 0, 134222744, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1956_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10265_MI = 
{
	"CreateMemberTypeMetadata", (methodPointerType)&m10265, &t1957_TI, &t1956_0_0_0, RuntimeInvoker_t9_t9, t1957_m10265_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4134, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t121_0_0_0;
static ParameterInfo t1957_m10266_ParameterInfos[] = 
{
	{"writer", 0, 134222745, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"id", 1, 134222746, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"array", 2, 134222747, &EmptyCustomAttributesCache, &t121_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t303_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10266_MI = 
{
	"WriteArray", (methodPointerType)&m10266, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t303_t9, t1957_m10266_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4135, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t121_0_0_0;
static ParameterInfo t1957_m10267_ParameterInfos[] = 
{
	{"writer", 0, 134222748, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"id", 1, 134222749, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"array", 2, 134222750, &EmptyCustomAttributesCache, &t121_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t303_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10267_MI = 
{
	"WriteGenericArray", (methodPointerType)&m10267, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t303_t9, t1957_m10267_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4136, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t121_0_0_0;
static ParameterInfo t1957_m10268_ParameterInfos[] = 
{
	{"writer", 0, 134222751, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"id", 1, 134222752, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"array", 2, 134222753, &EmptyCustomAttributesCache, &t121_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t303_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10268_MI = 
{
	"WriteObjectArray", (methodPointerType)&m10268, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t303_t9, t1957_m10268_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4137, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t121_0_0_0;
static ParameterInfo t1957_m10269_ParameterInfos[] = 
{
	{"writer", 0, 134222754, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"id", 1, 134222755, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"array", 2, 134222756, &EmptyCustomAttributesCache, &t121_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t303_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10269_MI = 
{
	"WriteStringArray", (methodPointerType)&m10269, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t303_t9, t1957_m10269_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4138, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t121_0_0_0;
static ParameterInfo t1957_m10270_ParameterInfos[] = 
{
	{"writer", 0, 134222757, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"id", 1, 134222758, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"array", 2, 134222759, &EmptyCustomAttributesCache, &t121_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t303_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10270_MI = 
{
	"WritePrimitiveTypeArray", (methodPointerType)&m10270, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t303_t9, t1957_m10270_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4139, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1957_m10271_ParameterInfos[] = 
{
	{"writer", 0, 134222760, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"array", 1, 134222761, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"dataSize", 2, 134222762, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10271_MI = 
{
	"BlockWrite", (methodPointerType)&m10271, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1957_m10271_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4140, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t121_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1957_m10272_ParameterInfos[] = 
{
	{"writer", 0, 134222763, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"array", 1, 134222764, &EmptyCustomAttributesCache, &t121_0_0_0},
	{"elementType", 2, 134222765, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10272_MI = 
{
	"WriteSingleDimensionArrayElements", (methodPointerType)&m10272, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1957_m10272_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4141, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1957_m10273_ParameterInfos[] = 
{
	{"writer", 0, 134222766, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"numNulls", 1, 134222767, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10273_MI = 
{
	"WriteNullFiller", (methodPointerType)&m10273, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1957_m10273_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4142, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t1957_m10274_ParameterInfos[] = 
{
	{"writer", 0, 134222768, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"id", 1, 134222769, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10274_MI = 
{
	"WriteObjectReference", (methodPointerType)&m10274, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t303, t1957_m10274_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4143, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1957_m10275_ParameterInfos[] = 
{
	{"writer", 0, 134222770, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"valueType", 1, 134222771, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"val", 2, 134222772, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10275_MI = 
{
	"WriteValue", (methodPointerType)&m10275, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1957_m10275_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4144, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1957_m10276_ParameterInfos[] = 
{
	{"writer", 0, 134222773, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"id", 1, 134222774, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"str", 2, 134222775, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t303_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10276_MI = 
{
	"WriteString", (methodPointerType)&m10276, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t303_t9, t1957_m10276_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4145, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t1351_0_0_0;
extern Il2CppType t1351_0_0_0;
static ParameterInfo t1957_m10277_ParameterInfos[] = 
{
	{"writer", 0, 134222776, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"assembly", 1, 134222777, &EmptyCustomAttributesCache, &t1351_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10277_MI = 
{
	"WriteAssembly", (methodPointerType)&m10277, &t1957_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1957_m10277_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4146, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1957_m10278_ParameterInfos[] = 
{
	{"writer", 0, 134222778, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"assembly", 1, 134222779, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10278_MI = 
{
	"WriteAssemblyName", (methodPointerType)&m10278, &t1957_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1957_m10278_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4147, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1351_0_0_0;
static ParameterInfo t1957_m10279_ParameterInfos[] = 
{
	{"assembly", 0, 134222780, &EmptyCustomAttributesCache, &t1351_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10279_MI = 
{
	"GetAssemblyId", (methodPointerType)&m10279, &t1957_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1957_m10279_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4148, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1957_m10280_ParameterInfos[] = 
{
	{"assembly", 0, 134222781, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10280_MI = 
{
	"GetAssemblyNameId", (methodPointerType)&m10280, &t1957_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1957_m10280_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4149, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_1_0_2;
static ParameterInfo t1957_m10281_ParameterInfos[] = 
{
	{"assembly", 0, 134222782, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"firstTime", 1, 134222783, &EmptyCustomAttributesCache, &t124_1_0_2},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t642 (MethodInfo* method, void* obj, void** args);
MethodInfo m10281_MI = 
{
	"RegisterAssembly", (methodPointerType)&m10281, &t1957_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t642, t1957_m10281_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4150, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1957_m10282_ParameterInfos[] = 
{
	{"writer", 0, 134222784, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"value", 1, 134222785, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10282_MI = 
{
	"WritePrimitiveValue", (methodPointerType)&m10282, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1957_m10282_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4151, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1957_m10283_ParameterInfos[] = 
{
	{"writer", 0, 134222786, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"type", 1, 134222787, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10283_MI = 
{
	"WriteTypeCode", (methodPointerType)&m10283, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1957_m10283_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4152, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1957_m10284_ParameterInfos[] = 
{
	{"type", 0, 134222788, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1941_0_0_0;
extern void* RuntimeInvoker_t1941_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10284_MI = 
{
	"GetTypeTag", (methodPointerType)&m10284, &t1957_TI, &t1941_0_0_0, RuntimeInvoker_t1941_t9, t1957_m10284_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4153, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1957_m10285_ParameterInfos[] = 
{
	{"writer", 0, 134222789, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"type", 1, 134222790, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10285_MI = 
{
	"WriteTypeSpec", (methodPointerType)&m10285, &t1957_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1957_m10285_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4154, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1957_MIs[] =
{
	&m10256_MI,
	&m10257_MI,
	&m10258_MI,
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
	&m10272_MI,
	&m10273_MI,
	&m10274_MI,
	&m10275_MI,
	&m10276_MI,
	&m10277_MI,
	&m10278_MI,
	&m10279_MI,
	&m10280_MI,
	&m10281_MI,
	&m10282_MI,
	&m10283_MI,
	&m10284_MI,
	&m10285_MI,
	NULL
};
extern Il2CppType t1962_0_0_1;
FieldInfo t1957_f0_FieldInfo = 
{
	"_idGenerator", &t1962_0_0_1, &t1957_TI, offsetof(t1957, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_1;
FieldInfo t1957_f1_FieldInfo = 
{
	"_cachedMetadata", &t1164_0_0_1, &t1957_TI, offsetof(t1957, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1692_0_0_1;
FieldInfo t1957_f2_FieldInfo = 
{
	"_pendingObjects", &t1692_0_0_1, &t1957_TI, offsetof(t1957, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_1;
FieldInfo t1957_f3_FieldInfo = 
{
	"_assemblyCache", &t1164_0_0_1, &t1957_TI, offsetof(t1957, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_17;
FieldInfo t1957_f4_FieldInfo = 
{
	"_cachedTypes", &t1164_0_0_17, &t1957_TI, offsetof(t1957_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1351_0_0_19;
FieldInfo t1957_f5_FieldInfo = 
{
	"CorlibAssembly", &t1351_0_0_19, &t1957_TI, offsetof(t1957_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_19;
FieldInfo t1957_f6_FieldInfo = 
{
	"CorlibAssemblyName", &t2_0_0_19, &t1957_TI, offsetof(t1957_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1910_0_0_1;
FieldInfo t1957_f7_FieldInfo = 
{
	"_surrogateSelector", &t1910_0_0_1, &t1957_TI, offsetof(t1957, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1107_0_0_1;
FieldInfo t1957_f8_FieldInfo = 
{
	"_context", &t1107_0_0_1, &t1957_TI, offsetof(t1957, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1945_0_0_1;
FieldInfo t1957_f9_FieldInfo = 
{
	"_assemblyFormat", &t1945_0_0_1, &t1957_TI, offsetof(t1957, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1946_0_0_1;
FieldInfo t1957_f10_FieldInfo = 
{
	"_typeFormat", &t1946_0_0_1, &t1957_TI, offsetof(t1957, f10), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t1957_f11_FieldInfo = 
{
	"arrayBuffer", &t737_0_0_1, &t1957_TI, offsetof(t1957, f11), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1957_f12_FieldInfo = 
{
	"ArrayBufferLength", &t125_0_0_1, &t1957_TI, offsetof(t1957, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1963_0_0_1;
FieldInfo t1957_f13_FieldInfo = 
{
	"_manager", &t1963_0_0_1, &t1957_TI, offsetof(t1957, f13), &EmptyCustomAttributesCache};
static FieldInfo* t1957_FIs[] =
{
	&t1957_f0_FieldInfo,
	&t1957_f1_FieldInfo,
	&t1957_f2_FieldInfo,
	&t1957_f3_FieldInfo,
	&t1957_f4_FieldInfo,
	&t1957_f5_FieldInfo,
	&t1957_f6_FieldInfo,
	&t1957_f7_FieldInfo,
	&t1957_f8_FieldInfo,
	&t1957_f9_FieldInfo,
	&t1957_f10_FieldInfo,
	&t1957_f11_FieldInfo,
	&t1957_f12_FieldInfo,
	&t1957_f13_FieldInfo,
	NULL
};
static const Il2CppType* t1957_TI__nestedTypes[1] =
{
	&t1961_0_0_0,
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
	&g_mscorlib_dll_Image, NULL, "ObjectWriter", "System.Runtime.Serialization.Formatters.Binary", t1957_MIs, NULL, t1957_FIs, NULL, &t1957_TI, NULL, &EmptyCustomAttributesCache, &t1957_0_0_0, &t1957_1_0_0, &t1957_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1957), sizeof (t1957), 0, -1, sizeof(t1957_SFs), 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, true, false, 30, 0, 14, 0, 1, 4, 0, 0};
#include "t1945.h"
// Metadata Definition System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
extern TypeInfo t1945_TI;
#include "t1945MD.h"
static MethodInfo* t1945_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1945_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1945_TI, offsetof(t1945, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1945_0_0_32854;
FieldInfo t1945_f2_FieldInfo = 
{
	"Simple", &t1945_0_0_32854, &t1945_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1945_0_0_32854;
FieldInfo t1945_f3_FieldInfo = 
{
	"Full", &t1945_0_0_32854, &t1945_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1945_FIs[] =
{
	&t1945_f1_FieldInfo,
	&t1945_f2_FieldInfo,
	&t1945_f3_FieldInfo,
	NULL
};
static const int32_t t1945_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1945_f2_DefaultValue = 
{
	&t1945_f2_FieldInfo, { (char*)&t1945_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1945_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1945_f3_DefaultValue = 
{
	&t1945_f3_FieldInfo, { (char*)&t1945_f3_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1945_FDVs[] = 
{
	&t1945_f2_DefaultValue,
	&t1945_f3_DefaultValue,
	NULL
};
static Il2CppMethodReference t1945_VT[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1945_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1945_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1945__CustomAttributeCache = {
1,
NULL,
&t1945_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1945_1_0_0;
extern CustomAttributesCache t1945__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1945_DM = 
{
	NULL, NULL, NULL, t1945_IOs, &t8_0_0_0, t1945_VT, t1945_VTIGM, NULL};
TypeInfo t1945_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FormatterAssemblyStyle", "System.Runtime.Serialization.Formatters", t1945_MIs, NULL, t1945_FIs, NULL, &t125_TI, NULL, &t1945__CustomAttributeCache, &t1945_0_0_0, &t1945_1_0_0, &t1945_DM, NULL, NULL, NULL, t1945_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1945)+ sizeof (Il2CppObject), sizeof (t1945)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t1946.h"
// Metadata Definition System.Runtime.Serialization.Formatters.FormatterTypeStyle
extern TypeInfo t1946_TI;
#include "t1946MD.h"
static MethodInfo* t1946_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1946_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1946_TI, offsetof(t1946, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1946_0_0_32854;
FieldInfo t1946_f2_FieldInfo = 
{
	"TypesWhenNeeded", &t1946_0_0_32854, &t1946_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1946_0_0_32854;
FieldInfo t1946_f3_FieldInfo = 
{
	"TypesAlways", &t1946_0_0_32854, &t1946_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1946_0_0_32854;
FieldInfo t1946_f4_FieldInfo = 
{
	"XsdString", &t1946_0_0_32854, &t1946_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1946_FIs[] =
{
	&t1946_f1_FieldInfo,
	&t1946_f2_FieldInfo,
	&t1946_f3_FieldInfo,
	&t1946_f4_FieldInfo,
	NULL
};
static const int32_t t1946_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1946_f2_DefaultValue = 
{
	&t1946_f2_FieldInfo, { (char*)&t1946_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1946_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1946_f3_DefaultValue = 
{
	&t1946_f3_FieldInfo, { (char*)&t1946_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1946_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1946_f4_DefaultValue = 
{
	&t1946_f4_FieldInfo, { (char*)&t1946_f4_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1946_FDVs[] = 
{
	&t1946_f2_DefaultValue,
	&t1946_f3_DefaultValue,
	&t1946_f4_DefaultValue,
	NULL
};
static Il2CppMethodReference t1946_VT[] =
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
static bool t1946_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1946_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1946_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1946__CustomAttributeCache = {
1,
NULL,
&t1946_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1946_1_0_0;
extern CustomAttributesCache t1946__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1946_DM = 
{
	NULL, NULL, NULL, t1946_IOs, &t8_0_0_0, t1946_VT, t1946_VTIGM, NULL};
TypeInfo t1946_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FormatterTypeStyle", "System.Runtime.Serialization.Formatters", t1946_MIs, NULL, t1946_FIs, NULL, &t125_TI, NULL, &t1946__CustomAttributeCache, &t1946_0_0_0, &t1946_1_0_0, &t1946_DM, NULL, NULL, NULL, t1946_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1946)+ sizeof (Il2CppObject), sizeof (t1946)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1947.h"
// Metadata Definition System.Runtime.Serialization.Formatters.TypeFilterLevel
extern TypeInfo t1947_TI;
#include "t1947MD.h"
static MethodInfo* t1947_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1947_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1947_TI, offsetof(t1947, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1947_0_0_32854;
FieldInfo t1947_f2_FieldInfo = 
{
	"Low", &t1947_0_0_32854, &t1947_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1947_0_0_32854;
FieldInfo t1947_f3_FieldInfo = 
{
	"Full", &t1947_0_0_32854, &t1947_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1947_FIs[] =
{
	&t1947_f1_FieldInfo,
	&t1947_f2_FieldInfo,
	&t1947_f3_FieldInfo,
	NULL
};
static const int32_t t1947_f2_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1947_f2_DefaultValue = 
{
	&t1947_f2_FieldInfo, { (char*)&t1947_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1947_f3_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1947_f3_DefaultValue = 
{
	&t1947_f3_FieldInfo, { (char*)&t1947_f3_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1947_FDVs[] = 
{
	&t1947_f2_DefaultValue,
	&t1947_f3_DefaultValue,
	NULL
};
static Il2CppMethodReference t1947_VT[] =
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
static bool t1947_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1947_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1947_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1947__CustomAttributeCache = {
1,
NULL,
&t1947_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1947_0_0_0;
extern Il2CppType t1947_1_0_0;
extern CustomAttributesCache t1947__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1947_DM = 
{
	NULL, NULL, NULL, t1947_IOs, &t8_0_0_0, t1947_VT, t1947_VTIGM, NULL};
TypeInfo t1947_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeFilterLevel", "System.Runtime.Serialization.Formatters", t1947_MIs, NULL, t1947_FIs, NULL, &t125_TI, NULL, &t1947__CustomAttributeCache, &t1947_0_0_0, &t1947_1_0_0, &t1947_DM, NULL, NULL, NULL, t1947_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1947)+ sizeof (Il2CppObject), sizeof (t1947)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 257, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t1964.h"
// Metadata Definition System.Runtime.Serialization.FormatterConverter
extern TypeInfo t1964_TI;
#include "t1964MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10286_MI = 
{
	".ctor", (methodPointerType)&m10286, &t1964_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4156, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1964_m10287_ParameterInfos[] = 
{
	{"value", 0, 134222793, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"type", 1, 134222794, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10287_MI = 
{
	"Convert", (methodPointerType)&m10287, &t1964_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1964_m10287_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 2, false, false, 4157, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1964_m10288_ParameterInfos[] = 
{
	{"value", 0, 134222795, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10288_MI = 
{
	"ToBoolean", (methodPointerType)&m10288, &t1964_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1964_m10288_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 5, 1, false, false, 4158, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1964_m10289_ParameterInfos[] = 
{
	{"value", 0, 134222796, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t341_0_0_0;
extern void* RuntimeInvoker_t341_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10289_MI = 
{
	"ToInt16", (methodPointerType)&m10289, &t1964_TI, &t341_0_0_0, RuntimeInvoker_t341_t9, t1964_m10289_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 1, false, false, 4159, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1964_m10290_ParameterInfos[] = 
{
	{"value", 0, 134222797, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10290_MI = 
{
	"ToInt32", (methodPointerType)&m10290, &t1964_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1964_m10290_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 1, false, false, 4160, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1964_m10291_ParameterInfos[] = 
{
	{"value", 0, 134222798, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10291_MI = 
{
	"ToInt64", (methodPointerType)&m10291, &t1964_TI, &t303_0_0_0, RuntimeInvoker_t303_t9, t1964_m10291_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 8, 1, false, false, 4161, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1964_m10292_ParameterInfos[] = 
{
	{"value", 0, 134222799, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10292_MI = 
{
	"ToString", (methodPointerType)&m10292, &t1964_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1964_m10292_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 9, 1, false, false, 4162, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1964_MIs[] =
{
	&m10286_MI,
	&m10287_MI,
	&m10288_MI,
	&m10289_MI,
	&m10290_MI,
	&m10291_MI,
	&m10292_MI,
	NULL
};
extern MethodInfo m10287_MI;
extern MethodInfo m10288_MI;
extern MethodInfo m10289_MI;
extern MethodInfo m10290_MI;
extern MethodInfo m10291_MI;
extern MethodInfo m10292_MI;
static Il2CppMethodReference t1964_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10287_MI,
	&m10288_MI,
	&m10289_MI,
	&m10290_MI,
	&m10291_MI,
	&m10292_MI,
};
static bool t1964_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t1981_0_0_0;
static const Il2CppType* t1964_ITIs[] = 
{
	&t1981_0_0_0,
};
static Il2CppInterfaceOffsetPair t1964_IOs[] = 
{
	{ &t1981_0_0_0, 4},
};
void t1964_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1964__CustomAttributeCache = {
1,
NULL,
&t1964_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1964_0_0_0;
extern Il2CppType t1964_1_0_0;
struct t1964;
extern CustomAttributesCache t1964__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1964_DM = 
{
	NULL, NULL, t1964_ITIs, t1964_IOs, &t9_0_0_0, t1964_VT, t1964_VTIGM, NULL};
TypeInfo t1964_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FormatterConverter", "System.Runtime.Serialization", t1964_MIs, NULL, NULL, NULL, &t1964_TI, NULL, &t1964__CustomAttributeCache, &t1964_0_0_0, &t1964_1_0_0, &t1964_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1964), sizeof (t1964), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 7, 0, 0, 0, 0, 10, 1, 1};
#include "t1965.h"
// Metadata Definition System.Runtime.Serialization.FormatterServices
extern TypeInfo t1965_TI;
#include "t1965MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t1952_0_0_0;
extern Il2CppType t1952_0_0_0;
static ParameterInfo t1965_m10293_ParameterInfos[] = 
{
	{"obj", 0, 134222800, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"members", 1, 134222801, &EmptyCustomAttributesCache, &t1952_0_0_0},
};
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10293_MI = 
{
	"GetObjectData", (methodPointerType)&m10293, &t1965_TI, &t158_0_0_0, RuntimeInvoker_t9_t9_t9, t1965_m10293_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4163, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1965_m10294_ParameterInfos[] = 
{
	{"type", 0, 134222802, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"context", 1, 134222803, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t1952_0_0_0;
extern void* RuntimeInvoker_t9_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10294_MI = 
{
	"GetSerializableMembers", (methodPointerType)&m10294, &t1965_TI, &t1952_0_0_0, RuntimeInvoker_t9_t9_t1107, t1965_m10294_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4164, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t1176_0_0_0;
extern Il2CppType t1176_0_0_0;
static ParameterInfo t1965_m10295_ParameterInfos[] = 
{
	{"reflectedType", 0, 134222804, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"type", 1, 134222805, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"fields", 2, 134222806, &EmptyCustomAttributesCache, &t1176_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10295_MI = 
{
	"GetFields", (methodPointerType)&m10295, &t1965_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1965_m10295_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4165, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1965_m10296_ParameterInfos[] = 
{
	{"type", 0, 134222807, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10296_MI = 
{
	"GetUninitializedObject", (methodPointerType)&m10296, &t1965_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1965_m10296_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4166, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1965_m10297_ParameterInfos[] = 
{
	{"type", 0, 134222808, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10297_MI = 
{
	"GetSafeUninitializedObject", (methodPointerType)&m10297, &t1965_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1965_m10297_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4167, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1965_MIs[] =
{
	&m10293_MI,
	&m10294_MI,
	&m10295_MI,
	&m10296_MI,
	&m10297_MI,
	NULL
};
static Il2CppMethodReference t1965_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
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
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
struct t1965;
extern CustomAttributesCache t1965__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1965_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1965_VT, t1965_VTIGM, NULL};
TypeInfo t1965_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FormatterServices", "System.Runtime.Serialization", t1965_MIs, NULL, NULL, NULL, &t1965_TI, NULL, &t1965__CustomAttributeCache, &t1965_0_0_0, &t1965_1_0_0, &t1965_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1965), sizeof (t1965), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 4, 0, 0};
// Metadata Definition System.Runtime.Serialization.IDeserializationCallback
extern TypeInfo t1112_TI;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1112_m12124_ParameterInfos[] = 
{
	{"sender", 0, 134222809, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12124_MI = 
{
	"OnDeserialization", NULL, &t1112_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1112_m12124_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 4168, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1112_MIs[] =
{
	&m12124_MI,
	NULL
};
void t1112_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1112__CustomAttributeCache = {
1,
NULL,
&t1112_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1112_0_0_0;
extern Il2CppType t1112_1_0_0;
struct t1112;
extern CustomAttributesCache t1112__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1112_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1112_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDeserializationCallback", "System.Runtime.Serialization", t1112_MIs, NULL, NULL, NULL, &t1112_TI, NULL, &t1112__CustomAttributeCache, &t1112_0_0_0, &t1112_1_0_0, &t1112_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Serialization.IFormatter
extern TypeInfo t2635_TI;
static MethodInfo* t2635_MIs[] =
{
	NULL
};
void t2635_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2635__CustomAttributeCache = {
1,
NULL,
&t2635_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2635_1_0_0;
struct t2635;
extern CustomAttributesCache t2635__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2635_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2635_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IFormatter", "System.Runtime.Serialization", t2635_MIs, NULL, NULL, NULL, &t2635_TI, NULL, &t2635__CustomAttributeCache, &t2635_0_0_0, &t2635_1_0_0, &t2635_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Serialization.IFormatterConverter
extern TypeInfo t1981_TI;
extern Il2CppType t9_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1981_m12127_ParameterInfos[] = 
{
	{"value", 0, 134222810, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"type", 1, 134222811, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12127_MI = 
{
	"Convert", NULL, &t1981_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1981_m12127_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, false, 4169, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1981_m12128_ParameterInfos[] = 
{
	{"value", 0, 134222812, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12128_MI = 
{
	"ToBoolean", NULL, &t1981_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1981_m12128_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, false, 4170, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1981_m12129_ParameterInfos[] = 
{
	{"value", 0, 134222813, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t341_0_0_0;
extern void* RuntimeInvoker_t341_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12129_MI = 
{
	"ToInt16", NULL, &t1981_TI, &t341_0_0_0, RuntimeInvoker_t341_t9, t1981_m12129_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, false, 4171, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1981_m12130_ParameterInfos[] = 
{
	{"value", 0, 134222814, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12130_MI = 
{
	"ToInt32", NULL, &t1981_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1981_m12130_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 3, 1, false, false, 4172, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1981_m12131_ParameterInfos[] = 
{
	{"value", 0, 134222815, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12131_MI = 
{
	"ToInt64", NULL, &t1981_TI, &t303_0_0_0, RuntimeInvoker_t303_t9, t1981_m12131_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4173, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1981_m12132_ParameterInfos[] = 
{
	{"value", 0, 134222816, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12132_MI = 
{
	"ToString", NULL, &t1981_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1981_m12132_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 4174, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1981_MIs[] =
{
	&m12127_MI,
	&m12128_MI,
	&m12129_MI,
	&m12130_MI,
	&m12131_MI,
	&m12132_MI,
	NULL
};
extern TypeInfo t1158_TI;
#include "t1158.h"
#include "t1158MD.h"
extern MethodInfo m4843_MI;
void t1981_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1158 * tmp;
		tmp = (t1158 *)il2cpp_codegen_object_new (&t1158_TI);
		m4843(tmp, false, &m4843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1981__CustomAttributeCache = {
2,
NULL,
&t1981_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1981_1_0_0;
struct t1981;
extern CustomAttributesCache t1981__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1981_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1981_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IFormatterConverter", "System.Runtime.Serialization", t1981_MIs, NULL, NULL, NULL, &t1981_TI, NULL, &t1981__CustomAttributeCache, &t1981_0_0_0, &t1981_1_0_0, &t1981_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Serialization.IObjectReference
extern TypeInfo t2196_TI;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t2196_m12116_ParameterInfos[] = 
{
	{"context", 0, 134222817, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m12116_MI = 
{
	"GetRealObject", NULL, &t2196_TI, &t9_0_0_0, RuntimeInvoker_t9_t1107, t2196_m12116_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 4175, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2196_MIs[] =
{
	&m12116_MI,
	NULL
};
void t2196_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2196__CustomAttributeCache = {
1,
NULL,
&t2196_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2196_1_0_0;
struct t2196;
extern CustomAttributesCache t2196__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t2196_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t2196_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IObjectReference", "System.Runtime.Serialization", t2196_MIs, NULL, NULL, NULL, &t2196_TI, NULL, &t2196__CustomAttributeCache, &t2196_0_0_0, &t2196_1_0_0, &t2196_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Serialization.ISerializationSurrogate
extern TypeInfo t1913_TI;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1913_m12122_ParameterInfos[] = 
{
	{"obj", 0, 134222818, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"info", 1, 134222819, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 2, 134222820, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m12122_MI = 
{
	"GetObjectData", NULL, &t1913_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t1107, t1913_m12122_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 3, false, false, 4176, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
extern Il2CppType t1910_0_0_0;
static ParameterInfo t1913_m12126_ParameterInfos[] = 
{
	{"obj", 0, 134222821, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"info", 1, 134222822, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 2, 134222823, &EmptyCustomAttributesCache, &t1107_0_0_0},
	{"selector", 3, 134222824, &EmptyCustomAttributesCache, &t1910_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9_t1107_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12126_MI = 
{
	"SetObjectData", NULL, &t1913_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9_t1107_t9, t1913_m12126_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 4, false, false, 4177, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1913_MIs[] =
{
	&m12122_MI,
	&m12126_MI,
	NULL
};
void t1913_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	&g_mscorlib_dll_Image, NULL, "ISerializationSurrogate", "System.Runtime.Serialization", t1913_MIs, NULL, NULL, NULL, &t1913_TI, NULL, &t1913__CustomAttributeCache, &t1913_0_0_0, &t1913_1_0_0, &t1913_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
// Metadata Definition System.Runtime.Serialization.ISurrogateSelector
extern TypeInfo t1910_TI;
extern Il2CppType t126_0_0_0;
extern Il2CppType t1107_0_0_0;
extern Il2CppType t1910_1_0_2;
extern Il2CppType t1910_1_0_0;
static ParameterInfo t1910_m12103_ParameterInfos[] = 
{
	{"type", 0, 134222825, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"context", 1, 134222826, &EmptyCustomAttributesCache, &t1107_0_0_0},
	{"selector", 2, 134222827, &EmptyCustomAttributesCache, &t1910_1_0_2},
};
extern Il2CppType t1913_0_0_0;
extern void* RuntimeInvoker_t9_t9_t1107_t2636 (MethodInfo* method, void* obj, void** args);
MethodInfo m12103_MI = 
{
	"GetSurrogate", NULL, &t1910_TI, &t1913_0_0_0, RuntimeInvoker_t9_t9_t1107_t2636, t1910_m12103_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 3, false, false, 4178, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1910_MIs[] =
{
	&m12103_MI,
	NULL
};
void t1910_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1910__CustomAttributeCache = {
1,
NULL,
&t1910_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
struct t1910;
extern CustomAttributesCache t1910__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1910_DM = 
{
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
TypeInfo t1910_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISurrogateSelector", "System.Runtime.Serialization", t1910_MIs, NULL, NULL, NULL, &t1910_TI, NULL, &t1910__CustomAttributeCache, &t1910_0_0_0, &t1910_1_0_0, &t1910_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, 0, -1, 0, 0, -1, 161, 0, 0, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1966.h"
// Metadata Definition System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
extern TypeInfo t1966_TI;
#include "t1966MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10298_MI = 
{
	".ctor", (methodPointerType)&m10298, &t1966_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4183, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1966_m10299_ParameterInfos[] = 
{
	{"o1", 0, 134222830, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"o2", 1, 134222831, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10299_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m10299, &t1966_TI, &t125_0_0_0, RuntimeInvoker_t125_t9_t9, t1966_m10299_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 2, false, false, 4184, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1966_m10300_ParameterInfos[] = 
{
	{"o", 0, 134222832, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10300_MI = 
{
	"System.Collections.IHashCodeProvider.GetHashCode", (methodPointerType)&m10300, &t1966_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1966_m10300_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 1, false, false, 4185, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1966_MIs[] =
{
	&m10298_MI,
	&m10299_MI,
	&m10300_MI,
	NULL
};
extern MethodInfo m10299_MI;
extern MethodInfo m10300_MI;
static Il2CppMethodReference t1966_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10299_MI,
	&m10300_MI,
};
static bool t1966_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t1171_0_0_0;
extern Il2CppType t1177_0_0_0;
static const Il2CppType* t1966_ITIs[] = 
{
	&t1171_0_0_0,
	&t1177_0_0_0,
};
static Il2CppInterfaceOffsetPair t1966_IOs[] = 
{
	{ &t1171_0_0_0, 4},
	{ &t1177_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1966_0_0_0;
extern Il2CppType t1966_1_0_0;
extern TypeInfo t1962_TI;
extern Il2CppType t1962_0_0_0;
struct t1966;
const Il2CppTypeDefinitionMetadata t1966_DM = 
{
	&t1962_0_0_0, NULL, t1966_ITIs, t1966_IOs, &t9_0_0_0, t1966_VT, t1966_VTIGM, NULL};
TypeInfo t1966_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InstanceComparer", "", t1966_MIs, NULL, NULL, NULL, &t1966_TI, NULL, &EmptyCustomAttributesCache, &t1966_0_0_0, &t1966_1_0_0, &t1966_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1966), sizeof (t1966), 0, -1, 0, 0, -1, 1048579, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 6, 2, 2};
#include "t1962.h"
// Metadata Definition System.Runtime.Serialization.ObjectIDGenerator
#include "t1962MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10301_MI = 
{
	".ctor", (methodPointerType)&m10301, &t1962_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4179, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10302_MI = 
{
	".cctor", (methodPointerType)&m10302, &t1962_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4180, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t124_1_0_2;
static ParameterInfo t1962_m10303_ParameterInfos[] = 
{
	{"obj", 0, 134222828, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"firstTime", 1, 134222829, &EmptyCustomAttributesCache, &t124_1_0_2},
};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303_t9_t642 (MethodInfo* method, void* obj, void** args);
MethodInfo m10303_MI = 
{
	"GetId", (methodPointerType)&m10303, &t1962_TI, &t303_0_0_0, RuntimeInvoker_t303_t9_t642, t1962_m10303_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 4, 2, false, false, 4181, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10304_MI = 
{
	"get_NextId", (methodPointerType)&m10304, &t1962_TI, &t303_0_0_0, RuntimeInvoker_t303, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4182, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1962_MIs[] =
{
	&m10301_MI,
	&m10302_MI,
	&m10303_MI,
	&m10304_MI,
	NULL
};
extern Il2CppType t1164_0_0_1;
FieldInfo t1962_f0_FieldInfo = 
{
	"table", &t1164_0_0_1, &t1962_TI, offsetof(t1962, f0), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_1;
FieldInfo t1962_f1_FieldInfo = 
{
	"current", &t303_0_0_1, &t1962_TI, offsetof(t1962, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1966_0_0_17;
FieldInfo t1962_f2_FieldInfo = 
{
	"comparer", &t1966_0_0_17, &t1962_TI, offsetof(t1962_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1962_FIs[] =
{
	&t1962_f0_FieldInfo,
	&t1962_f1_FieldInfo,
	&t1962_f2_FieldInfo,
	NULL
};
extern MethodInfo m10304_MI;
static PropertyInfo t1962____NextId_PropertyInfo = 
{
	&t1962_TI, "NextId", &m10304_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1962_PIs[] =
{
	&t1962____NextId_PropertyInfo,
	NULL
};
static const Il2CppType* t1962_TI__nestedTypes[1] =
{
	&t1966_0_0_0,
};
extern MethodInfo m10303_MI;
static Il2CppMethodReference t1962_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10303_MI,
};
static bool t1962_VTIGM[] =
{
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
void t1962_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7891(tmp, il2cpp_codegen_string_new_wrapper("Serialization format not compatible with.NET"), &m7891_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1962__CustomAttributeCache = {
2,
NULL,
&t1962_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1962_1_0_0;
struct t1962;
extern CustomAttributesCache t1962__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1962_DM = 
{
	NULL, t1962_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t1962_VT, t1962_VTIGM, NULL};
TypeInfo t1962_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectIDGenerator", "System.Runtime.Serialization", t1962_MIs, t1962_PIs, t1962_FIs, NULL, &t1962_TI, NULL, &t1962__CustomAttributeCache, &t1962_0_0_0, &t1962_1_0_0, &t1962_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1962), sizeof (t1962), 0, -1, sizeof(t1962_SFs), 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, true, false, 4, 1, 3, 0, 1, 5, 0, 0};
#include "t1955.h"
// Metadata Definition System.Runtime.Serialization.ObjectManager
extern TypeInfo t1955_TI;
#include "t1955MD.h"
extern Il2CppType t1910_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1955_m10305_ParameterInfos[] = 
{
	{"selector", 0, 134222833, &EmptyCustomAttributesCache, &t1910_0_0_0},
	{"context", 1, 134222834, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10305_MI = 
{
	".ctor", (methodPointerType)&m10305, &t1955_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1955_m10305_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4186, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10306_MI = 
{
	"DoFixups", (methodPointerType)&m10306, &t1955_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 4, 0, false, false, 4187, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t1955_m10307_ParameterInfos[] = 
{
	{"objectID", 0, 134222835, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t1967_0_0_0;
extern void* RuntimeInvoker_t9_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10307_MI = 
{
	"GetObjectRecord", (methodPointerType)&m10307, &t1955_TI, &t1967_0_0_0, RuntimeInvoker_t9_t303, t1955_m10307_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4188, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t1955_m10308_ParameterInfos[] = 
{
	{"objectID", 0, 134222836, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10308_MI = 
{
	"GetObject", (methodPointerType)&m10308, &t1955_TI, &t9_0_0_0, RuntimeInvoker_t9_t303, t1955_m10308_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 1, false, false, 4189, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10309_MI = 
{
	"RaiseDeserializationEvent", (methodPointerType)&m10309, &t1955_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 4190, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1955_m10310_ParameterInfos[] = 
{
	{"obj", 0, 134222837, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10310_MI = 
{
	"RaiseOnDeserializingEvent", (methodPointerType)&m10310, &t1955_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1955_m10310_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4191, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1955_m10311_ParameterInfos[] = 
{
	{"obj", 0, 134222838, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10311_MI = 
{
	"RaiseOnDeserializedEvent", (methodPointerType)&m10311, &t1955_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1955_m10311_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4192, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1968_0_0_0;
extern Il2CppType t1968_0_0_0;
static ParameterInfo t1955_m10312_ParameterInfos[] = 
{
	{"record", 0, 134222839, &EmptyCustomAttributesCache, &t1968_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10312_MI = 
{
	"AddFixup", (methodPointerType)&m10312, &t1955_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1955_m10312_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4193, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t1955_m10313_ParameterInfos[] = 
{
	{"arrayToBeFixed", 0, 134222840, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"index", 1, 134222841, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"objectRequired", 2, 134222842, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303_t125_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10313_MI = 
{
	"RecordArrayElementFixup", (methodPointerType)&m10313, &t1955_TI, &t122_0_0_0, RuntimeInvoker_t122_t303_t125_t303, t1955_m10313_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 3, false, false, 4194, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t1101_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t1955_m10314_ParameterInfos[] = 
{
	{"arrayToBeFixed", 0, 134222843, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"indices", 1, 134222844, &EmptyCustomAttributesCache, &t1101_0_0_0},
	{"objectRequired", 2, 134222845, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303_t9_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10314_MI = 
{
	"RecordArrayElementFixup", (methodPointerType)&m10314, &t1955_TI, &t122_0_0_0, RuntimeInvoker_t122_t303_t9_t303, t1955_m10314_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 3, false, false, 4195, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t1955_m10315_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222846, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"memberName", 1, 134222847, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"objectRequired", 2, 134222848, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303_t9_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10315_MI = 
{
	"RecordDelayedFixup", (methodPointerType)&m10315, &t1955_TI, &t122_0_0_0, RuntimeInvoker_t122_t303_t9_t303, t1955_m10315_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 3, false, false, 4196, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t567_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t1955_m10316_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222849, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"member", 1, 134222850, &EmptyCustomAttributesCache, &t567_0_0_0},
	{"objectRequired", 2, 134222851, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t303_t9_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10316_MI = 
{
	"RecordFixup", (methodPointerType)&m10316, &t1955_TI, &t122_0_0_0, RuntimeInvoker_t122_t303_t9_t303, t1955_m10316_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 3, false, false, 4197, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1967_0_0_0;
extern Il2CppType t1967_0_0_0;
static ParameterInfo t1955_m10317_ParameterInfos[] = 
{
	{"obj", 0, 134222852, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"record", 1, 134222853, &EmptyCustomAttributesCache, &t1967_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10317_MI = 
{
	"RegisterObjectInternal", (methodPointerType)&m10317, &t1955_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1955_m10317_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4198, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t1106_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t567_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1955_m10318_ParameterInfos[] = 
{
	{"obj", 0, 134222854, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"objectID", 1, 134222855, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"info", 2, 134222856, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"idOfContainingObj", 3, 134222857, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"member", 4, 134222858, &EmptyCustomAttributesCache, &t567_0_0_0},
	{"arrayIndex", 5, 134222859, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t303_t9_t303_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10318_MI = 
{
	"RegisterObject", (methodPointerType)&m10318, &t1955_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t303_t9_t303_t9_t9, t1955_m10318_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 6, false, false, 4199, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1955_MIs[] =
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
	&m10316_MI,
	&m10317_MI,
	&m10318_MI,
	NULL
};
extern Il2CppType t1967_0_0_1;
FieldInfo t1955_f0_FieldInfo = 
{
	"_objectRecordChain", &t1967_0_0_1, &t1955_TI, offsetof(t1955, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1967_0_0_1;
FieldInfo t1955_f1_FieldInfo = 
{
	"_lastObjectRecord", &t1967_0_0_1, &t1955_TI, offsetof(t1955, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1176_0_0_1;
FieldInfo t1955_f2_FieldInfo = 
{
	"_deserializedRecords", &t1176_0_0_1, &t1955_TI, offsetof(t1955, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1176_0_0_1;
FieldInfo t1955_f3_FieldInfo = 
{
	"_onDeserializedCallbackRecords", &t1176_0_0_1, &t1955_TI, offsetof(t1955, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_1;
FieldInfo t1955_f4_FieldInfo = 
{
	"_objectRecords", &t1164_0_0_1, &t1955_TI, offsetof(t1955, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1955_f5_FieldInfo = 
{
	"_finalFixup", &t124_0_0_1, &t1955_TI, offsetof(t1955, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1910_0_0_1;
FieldInfo t1955_f6_FieldInfo = 
{
	"_selector", &t1910_0_0_1, &t1955_TI, offsetof(t1955, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1107_0_0_1;
FieldInfo t1955_f7_FieldInfo = 
{
	"_context", &t1107_0_0_1, &t1955_TI, offsetof(t1955, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1955_f8_FieldInfo = 
{
	"_registeredObjectsCount", &t125_0_0_1, &t1955_TI, offsetof(t1955, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1955_FIs[] =
{
	&t1955_f0_FieldInfo,
	&t1955_f1_FieldInfo,
	&t1955_f2_FieldInfo,
	&t1955_f3_FieldInfo,
	&t1955_f4_FieldInfo,
	&t1955_f5_FieldInfo,
	&t1955_f6_FieldInfo,
	&t1955_f7_FieldInfo,
	&t1955_f8_FieldInfo,
	NULL
};
extern MethodInfo m10306_MI;
extern MethodInfo m10308_MI;
extern MethodInfo m10309_MI;
extern MethodInfo m10313_MI;
extern MethodInfo m10314_MI;
extern MethodInfo m10315_MI;
extern MethodInfo m10316_MI;
static Il2CppMethodReference t1955_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10306_MI,
	&m10308_MI,
	&m10309_MI,
	&m10313_MI,
	&m10314_MI,
	&m10315_MI,
	&m10316_MI,
};
static bool t1955_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
void t1955_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1955__CustomAttributeCache = {
1,
NULL,
&t1955_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1955_0_0_0;
extern Il2CppType t1955_1_0_0;
struct t1955;
extern CustomAttributesCache t1955__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1955_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1955_VT, t1955_VTIGM, NULL};
TypeInfo t1955_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectManager", "System.Runtime.Serialization", t1955_MIs, NULL, t1955_FIs, NULL, &t1955_TI, NULL, &t1955__CustomAttributeCache, &t1955_0_0_0, &t1955_1_0_0, &t1955_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1955), sizeof (t1955), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 14, 0, 9, 0, 0, 11, 0, 0};
#include "t1968.h"
// Metadata Definition System.Runtime.Serialization.BaseFixupRecord
extern TypeInfo t1968_TI;
#include "t1968MD.h"
extern Il2CppType t1967_0_0_0;
extern Il2CppType t1967_0_0_0;
static ParameterInfo t1968_m10319_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222860, &EmptyCustomAttributesCache, &t1967_0_0_0},
	{"objectRequired", 1, 134222861, &EmptyCustomAttributesCache, &t1967_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10319_MI = 
{
	".ctor", (methodPointerType)&m10319, &t1968_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1968_m10319_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4200, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1955_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1968_m10320_ParameterInfos[] = 
{
	{"manager", 0, 134222862, &EmptyCustomAttributesCache, &t1955_0_0_0},
	{"strict", 1, 134222863, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10320_MI = 
{
	"DoFixup", (methodPointerType)&m10320, &t1968_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t186, t1968_m10320_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4201, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1955_0_0_0;
static ParameterInfo t1968_m12125_ParameterInfos[] = 
{
	{"manager", 0, 134222864, &EmptyCustomAttributesCache, &t1955_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12125_MI = 
{
	"FixupImpl", NULL, &t1968_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1968_m12125_ParameterInfos, &EmptyCustomAttributesCache, 1476, 0, 4, 1, false, false, 4202, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1968_MIs[] =
{
	&m10319_MI,
	&m10320_MI,
	&m12125_MI,
	NULL
};
extern Il2CppType t1967_0_0_5;
FieldInfo t1968_f0_FieldInfo = 
{
	"ObjectToBeFixed", &t1967_0_0_5, &t1968_TI, offsetof(t1968, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1967_0_0_5;
FieldInfo t1968_f1_FieldInfo = 
{
	"ObjectRequired", &t1967_0_0_5, &t1968_TI, offsetof(t1968, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1968_0_0_6;
FieldInfo t1968_f2_FieldInfo = 
{
	"NextSameContainer", &t1968_0_0_6, &t1968_TI, offsetof(t1968, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1968_0_0_6;
FieldInfo t1968_f3_FieldInfo = 
{
	"NextSameRequired", &t1968_0_0_6, &t1968_TI, offsetof(t1968, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1968_FIs[] =
{
	&t1968_f0_FieldInfo,
	&t1968_f1_FieldInfo,
	&t1968_f2_FieldInfo,
	&t1968_f3_FieldInfo,
	NULL
};
static Il2CppMethodReference t1968_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t1968_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1968_1_0_0;
struct t1968;
const Il2CppTypeDefinitionMetadata t1968_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1968_VT, t1968_VTIGM, NULL};
TypeInfo t1968_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BaseFixupRecord", "System.Runtime.Serialization", t1968_MIs, NULL, t1968_FIs, NULL, &t1968_TI, NULL, &EmptyCustomAttributesCache, &t1968_0_0_0, &t1968_1_0_0, &t1968_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1968), sizeof (t1968), 0, -1, 0, 0, -1, 1048704, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 4, 0, 0, 5, 0, 0};
#include "t1969.h"
// Metadata Definition System.Runtime.Serialization.ArrayFixupRecord
extern TypeInfo t1969_TI;
#include "t1969MD.h"
extern Il2CppType t1967_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1967_0_0_0;
static ParameterInfo t1969_m10321_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222865, &EmptyCustomAttributesCache, &t1967_0_0_0},
	{"index", 1, 134222866, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"objectRequired", 2, 134222867, &EmptyCustomAttributesCache, &t1967_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10321_MI = 
{
	".ctor", (methodPointerType)&m10321, &t1969_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t9, t1969_m10321_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4203, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1955_0_0_0;
static ParameterInfo t1969_m10322_ParameterInfos[] = 
{
	{"manager", 0, 134222868, &EmptyCustomAttributesCache, &t1955_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10322_MI = 
{
	"FixupImpl", (methodPointerType)&m10322, &t1969_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1969_m10322_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 4, 1, false, false, 4204, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1969_MIs[] =
{
	&m10321_MI,
	&m10322_MI,
	NULL
};
extern Il2CppType t125_0_0_1;
FieldInfo t1969_f4_FieldInfo = 
{
	"_index", &t125_0_0_1, &t1969_TI, offsetof(t1969, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1969_FIs[] =
{
	&t1969_f4_FieldInfo,
	NULL
};
extern MethodInfo m10322_MI;
static Il2CppMethodReference t1969_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10322_MI,
};
static bool t1969_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1969_0_0_0;
extern Il2CppType t1969_1_0_0;
struct t1969;
const Il2CppTypeDefinitionMetadata t1969_DM = 
{
	NULL, NULL, NULL, NULL, &t1968_0_0_0, t1969_VT, t1969_VTIGM, NULL};
TypeInfo t1969_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ArrayFixupRecord", "System.Runtime.Serialization", t1969_MIs, NULL, t1969_FIs, NULL, &t1969_TI, NULL, &EmptyCustomAttributesCache, &t1969_0_0_0, &t1969_1_0_0, &t1969_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1969), sizeof (t1969), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#include "t1970.h"
// Metadata Definition System.Runtime.Serialization.MultiArrayFixupRecord
extern TypeInfo t1970_TI;
#include "t1970MD.h"
extern Il2CppType t1967_0_0_0;
extern Il2CppType t1101_0_0_0;
extern Il2CppType t1967_0_0_0;
static ParameterInfo t1970_m10323_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222869, &EmptyCustomAttributesCache, &t1967_0_0_0},
	{"indices", 1, 134222870, &EmptyCustomAttributesCache, &t1101_0_0_0},
	{"objectRequired", 2, 134222871, &EmptyCustomAttributesCache, &t1967_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10323_MI = 
{
	".ctor", (methodPointerType)&m10323, &t1970_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1970_m10323_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4205, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1955_0_0_0;
static ParameterInfo t1970_m10324_ParameterInfos[] = 
{
	{"manager", 0, 134222872, &EmptyCustomAttributesCache, &t1955_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10324_MI = 
{
	"FixupImpl", (methodPointerType)&m10324, &t1970_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1970_m10324_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 4, 1, false, false, 4206, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1970_MIs[] =
{
	&m10323_MI,
	&m10324_MI,
	NULL
};
extern Il2CppType t1101_0_0_1;
FieldInfo t1970_f4_FieldInfo = 
{
	"_indices", &t1101_0_0_1, &t1970_TI, offsetof(t1970, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1970_FIs[] =
{
	&t1970_f4_FieldInfo,
	NULL
};
extern MethodInfo m10324_MI;
static Il2CppMethodReference t1970_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10324_MI,
};
static bool t1970_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1970_0_0_0;
extern Il2CppType t1970_1_0_0;
struct t1970;
const Il2CppTypeDefinitionMetadata t1970_DM = 
{
	NULL, NULL, NULL, NULL, &t1968_0_0_0, t1970_VT, t1970_VTIGM, NULL};
TypeInfo t1970_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MultiArrayFixupRecord", "System.Runtime.Serialization", t1970_MIs, NULL, t1970_FIs, NULL, &t1970_TI, NULL, &EmptyCustomAttributesCache, &t1970_0_0_0, &t1970_1_0_0, &t1970_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1970), sizeof (t1970), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#include "t1971.h"
// Metadata Definition System.Runtime.Serialization.FixupRecord
extern TypeInfo t1971_TI;
#include "t1971MD.h"
extern Il2CppType t1967_0_0_0;
extern Il2CppType t567_0_0_0;
extern Il2CppType t1967_0_0_0;
static ParameterInfo t1971_m10325_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222873, &EmptyCustomAttributesCache, &t1967_0_0_0},
	{"member", 1, 134222874, &EmptyCustomAttributesCache, &t567_0_0_0},
	{"objectRequired", 2, 134222875, &EmptyCustomAttributesCache, &t1967_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10325_MI = 
{
	".ctor", (methodPointerType)&m10325, &t1971_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1971_m10325_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4207, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1955_0_0_0;
static ParameterInfo t1971_m10326_ParameterInfos[] = 
{
	{"manager", 0, 134222876, &EmptyCustomAttributesCache, &t1955_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10326_MI = 
{
	"FixupImpl", (methodPointerType)&m10326, &t1971_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1971_m10326_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 4, 1, false, false, 4208, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1971_MIs[] =
{
	&m10325_MI,
	&m10326_MI,
	NULL
};
extern Il2CppType t567_0_0_6;
FieldInfo t1971_f4_FieldInfo = 
{
	"_member", &t567_0_0_6, &t1971_TI, offsetof(t1971, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1971_FIs[] =
{
	&t1971_f4_FieldInfo,
	NULL
};
extern MethodInfo m10326_MI;
static Il2CppMethodReference t1971_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10326_MI,
};
static bool t1971_VTIGM[] =
{
	false,
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
	NULL, NULL, NULL, NULL, &t1968_0_0_0, t1971_VT, t1971_VTIGM, NULL};
TypeInfo t1971_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FixupRecord", "System.Runtime.Serialization", t1971_MIs, NULL, t1971_FIs, NULL, &t1971_TI, NULL, &EmptyCustomAttributesCache, &t1971_0_0_0, &t1971_1_0_0, &t1971_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1971), sizeof (t1971), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#include "t1972.h"
// Metadata Definition System.Runtime.Serialization.DelayedFixupRecord
extern TypeInfo t1972_TI;
#include "t1972MD.h"
extern Il2CppType t1967_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1967_0_0_0;
static ParameterInfo t1972_m10327_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134222877, &EmptyCustomAttributesCache, &t1967_0_0_0},
	{"memberName", 1, 134222878, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"objectRequired", 2, 134222879, &EmptyCustomAttributesCache, &t1967_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10327_MI = 
{
	".ctor", (methodPointerType)&m10327, &t1972_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1972_m10327_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4209, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1955_0_0_0;
static ParameterInfo t1972_m10328_ParameterInfos[] = 
{
	{"manager", 0, 134222880, &EmptyCustomAttributesCache, &t1955_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10328_MI = 
{
	"FixupImpl", (methodPointerType)&m10328, &t1972_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1972_m10328_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 4, 1, false, false, 4210, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1972_MIs[] =
{
	&m10327_MI,
	&m10328_MI,
	NULL
};
extern Il2CppType t2_0_0_6;
FieldInfo t1972_f4_FieldInfo = 
{
	"_memberName", &t2_0_0_6, &t1972_TI, offsetof(t1972, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1972_FIs[] =
{
	&t1972_f4_FieldInfo,
	NULL
};
extern MethodInfo m10328_MI;
static Il2CppMethodReference t1972_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10328_MI,
};
static bool t1972_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1972_0_0_0;
extern Il2CppType t1972_1_0_0;
struct t1972;
const Il2CppTypeDefinitionMetadata t1972_DM = 
{
	NULL, NULL, NULL, NULL, &t1968_0_0_0, t1972_VT, t1972_VTIGM, NULL};
TypeInfo t1972_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DelayedFixupRecord", "System.Runtime.Serialization", t1972_MIs, NULL, t1972_FIs, NULL, &t1972_TI, NULL, &EmptyCustomAttributesCache, &t1972_0_0_0, &t1972_1_0_0, &t1972_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1972), sizeof (t1972), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#include "t1973.h"
// Metadata Definition System.Runtime.Serialization.ObjectRecordStatus
extern TypeInfo t1973_TI;
#include "t1973MD.h"
static MethodInfo* t1973_MIs[] =
{
	NULL
};
extern Il2CppType t582_0_0_1542;
FieldInfo t1973_f1_FieldInfo = 
{
	"value__", &t582_0_0_1542, &t1973_TI, offsetof(t1973, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1973_0_0_32854;
FieldInfo t1973_f2_FieldInfo = 
{
	"Unregistered", &t1973_0_0_32854, &t1973_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1973_0_0_32854;
FieldInfo t1973_f3_FieldInfo = 
{
	"ReferenceUnsolved", &t1973_0_0_32854, &t1973_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1973_0_0_32854;
FieldInfo t1973_f4_FieldInfo = 
{
	"ReferenceSolvingDelayed", &t1973_0_0_32854, &t1973_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1973_0_0_32854;
FieldInfo t1973_f5_FieldInfo = 
{
	"ReferenceSolved", &t1973_0_0_32854, &t1973_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1973_FIs[] =
{
	&t1973_f1_FieldInfo,
	&t1973_f2_FieldInfo,
	&t1973_f3_FieldInfo,
	&t1973_f4_FieldInfo,
	&t1973_f5_FieldInfo,
	NULL
};
static const uint8_t t1973_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1973_f2_DefaultValue = 
{
	&t1973_f2_FieldInfo, { (char*)&t1973_f2_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1973_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1973_f3_DefaultValue = 
{
	&t1973_f3_FieldInfo, { (char*)&t1973_f3_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1973_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1973_f4_DefaultValue = 
{
	&t1973_f4_FieldInfo, { (char*)&t1973_f4_DefaultValueData, &t582_0_0_0 }};
static const uint8_t t1973_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1973_f5_DefaultValue = 
{
	&t1973_f5_FieldInfo, { (char*)&t1973_f5_DefaultValueData, &t582_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1973_FDVs[] = 
{
	&t1973_f2_DefaultValue,
	&t1973_f3_DefaultValue,
	&t1973_f4_DefaultValue,
	&t1973_f5_DefaultValue,
	NULL
};
static Il2CppMethodReference t1973_VT[] =
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
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1973_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1973_0_0_0;
extern Il2CppType t1973_1_0_0;
const Il2CppTypeDefinitionMetadata t1973_DM = 
{
	NULL, NULL, NULL, t1973_IOs, &t8_0_0_0, t1973_VT, t1973_VTIGM, NULL};
TypeInfo t1973_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectRecordStatus", "System.Runtime.Serialization", t1973_MIs, NULL, t1973_FIs, NULL, &t582_TI, NULL, &EmptyCustomAttributesCache, &t1973_0_0_0, &t1973_1_0_0, &t1973_DM, NULL, NULL, NULL, t1973_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1973)+ sizeof (Il2CppObject), sizeof (t1973)+ sizeof (Il2CppObject), 0, sizeof(uint8_t), 0, 0, -1, 256, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t1967.h"
// Metadata Definition System.Runtime.Serialization.ObjectRecord
extern TypeInfo t1967_TI;
#include "t1967MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10329_MI = 
{
	".ctor", (methodPointerType)&m10329, &t1967_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4211, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1955_0_0_0;
extern Il2CppType t567_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1967_m10330_ParameterInfos[] = 
{
	{"manager", 0, 134222881, &EmptyCustomAttributesCache, &t1955_0_0_0},
	{"member", 1, 134222882, &EmptyCustomAttributesCache, &t567_0_0_0},
	{"value", 2, 134222883, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10330_MI = 
{
	"SetMemberValue", (methodPointerType)&m10330, &t1967_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1967_m10330_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4212, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1955_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1967_m10331_ParameterInfos[] = 
{
	{"manager", 0, 134222884, &EmptyCustomAttributesCache, &t1955_0_0_0},
	{"value", 1, 134222885, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"indices", 2, 134222886, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10331_MI = 
{
	"SetArrayValue", (methodPointerType)&m10331, &t1967_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1967_m10331_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4213, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1955_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1967_m10332_ParameterInfos[] = 
{
	{"manager", 0, 134222887, &EmptyCustomAttributesCache, &t1955_0_0_0},
	{"memberName", 1, 134222888, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 2, 134222889, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10332_MI = 
{
	"SetMemberValue", (methodPointerType)&m10332, &t1967_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1967_m10332_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4214, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10333_MI = 
{
	"get_IsInstanceReady", (methodPointerType)&m10333, &t1967_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4215, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10334_MI = 
{
	"get_IsUnsolvedObjectReference", (methodPointerType)&m10334, &t1967_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4216, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10335_MI = 
{
	"get_IsRegistered", (methodPointerType)&m10335, &t1967_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4217, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t1955_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1967_m10336_ParameterInfos[] = 
{
	{"asContainer", 0, 134222890, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"manager", 1, 134222891, &EmptyCustomAttributesCache, &t1955_0_0_0},
	{"strict", 2, 134222892, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t186_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10336_MI = 
{
	"DoFixups", (methodPointerType)&m10336, &t1967_TI, &t124_0_0_0, RuntimeInvoker_t124_t186_t9_t186, t1967_m10336_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4218, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1968_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1967_m10337_ParameterInfos[] = 
{
	{"fixupToRemove", 0, 134222893, &EmptyCustomAttributesCache, &t1968_0_0_0},
	{"asContainer", 1, 134222894, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10337_MI = 
{
	"RemoveFixup", (methodPointerType)&m10337, &t1967_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1967_m10337_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4219, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1968_0_0_0;
extern Il2CppType t1968_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1967_m10338_ParameterInfos[] = 
{
	{"fixup", 0, 134222895, &EmptyCustomAttributesCache, &t1968_0_0_0},
	{"prevFixup", 1, 134222896, &EmptyCustomAttributesCache, &t1968_0_0_0},
	{"asContainer", 2, 134222897, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10338_MI = 
{
	"UnchainFixup", (methodPointerType)&m10338, &t1967_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t186, t1967_m10338_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 4220, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1968_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1967_m10339_ParameterInfos[] = 
{
	{"fixup", 0, 134222898, &EmptyCustomAttributesCache, &t1968_0_0_0},
	{"asContainer", 1, 134222899, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10339_MI = 
{
	"ChainFixup", (methodPointerType)&m10339, &t1967_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1967_m10339_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4221, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1955_0_0_0;
extern Il2CppType t1910_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1967_m10340_ParameterInfos[] = 
{
	{"manager", 0, 134222900, &EmptyCustomAttributesCache, &t1955_0_0_0},
	{"selector", 1, 134222901, &EmptyCustomAttributesCache, &t1910_0_0_0},
	{"context", 2, 134222902, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10340_MI = 
{
	"LoadData", (methodPointerType)&m10340, &t1967_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9_t1107, t1967_m10340_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4222, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10341_MI = 
{
	"get_HasPendingFixups", (methodPointerType)&m10341, &t1967_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4223, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1967_MIs[] =
{
	&m10329_MI,
	&m10330_MI,
	&m10331_MI,
	&m10332_MI,
	&m10333_MI,
	&m10334_MI,
	&m10335_MI,
	&m10336_MI,
	&m10337_MI,
	&m10338_MI,
	&m10339_MI,
	&m10340_MI,
	&m10341_MI,
	NULL
};
extern Il2CppType t1973_0_0_6;
FieldInfo t1967_f0_FieldInfo = 
{
	"Status", &t1973_0_0_6, &t1967_TI, offsetof(t1967, f0), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_6;
FieldInfo t1967_f1_FieldInfo = 
{
	"OriginalObject", &t9_0_0_6, &t1967_TI, offsetof(t1967, f1), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_6;
FieldInfo t1967_f2_FieldInfo = 
{
	"ObjectInstance", &t9_0_0_6, &t1967_TI, offsetof(t1967, f2), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_6;
FieldInfo t1967_f3_FieldInfo = 
{
	"ObjectID", &t303_0_0_6, &t1967_TI, offsetof(t1967, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1106_0_0_6;
FieldInfo t1967_f4_FieldInfo = 
{
	"Info", &t1106_0_0_6, &t1967_TI, offsetof(t1967, f4), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_6;
FieldInfo t1967_f5_FieldInfo = 
{
	"IdOfContainingObj", &t303_0_0_6, &t1967_TI, offsetof(t1967, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1913_0_0_6;
FieldInfo t1967_f6_FieldInfo = 
{
	"Surrogate", &t1913_0_0_6, &t1967_TI, offsetof(t1967, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1910_0_0_6;
FieldInfo t1967_f7_FieldInfo = 
{
	"SurrogateSelector", &t1910_0_0_6, &t1967_TI, offsetof(t1967, f7), &EmptyCustomAttributesCache};
extern Il2CppType t567_0_0_6;
FieldInfo t1967_f8_FieldInfo = 
{
	"Member", &t567_0_0_6, &t1967_TI, offsetof(t1967, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1101_0_0_6;
FieldInfo t1967_f9_FieldInfo = 
{
	"ArrayIndex", &t1101_0_0_6, &t1967_TI, offsetof(t1967, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1968_0_0_6;
FieldInfo t1967_f10_FieldInfo = 
{
	"FixupChainAsContainer", &t1968_0_0_6, &t1967_TI, offsetof(t1967, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1968_0_0_6;
FieldInfo t1967_f11_FieldInfo = 
{
	"FixupChainAsRequired", &t1968_0_0_6, &t1967_TI, offsetof(t1967, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1967_0_0_6;
FieldInfo t1967_f12_FieldInfo = 
{
	"Next", &t1967_0_0_6, &t1967_TI, offsetof(t1967, f12), &EmptyCustomAttributesCache};
static FieldInfo* t1967_FIs[] =
{
	&t1967_f0_FieldInfo,
	&t1967_f1_FieldInfo,
	&t1967_f2_FieldInfo,
	&t1967_f3_FieldInfo,
	&t1967_f4_FieldInfo,
	&t1967_f5_FieldInfo,
	&t1967_f6_FieldInfo,
	&t1967_f7_FieldInfo,
	&t1967_f8_FieldInfo,
	&t1967_f9_FieldInfo,
	&t1967_f10_FieldInfo,
	&t1967_f11_FieldInfo,
	&t1967_f12_FieldInfo,
	NULL
};
extern MethodInfo m10333_MI;
static PropertyInfo t1967____IsInstanceReady_PropertyInfo = 
{
	&t1967_TI, "IsInstanceReady", &m10333_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10334_MI;
static PropertyInfo t1967____IsUnsolvedObjectReference_PropertyInfo = 
{
	&t1967_TI, "IsUnsolvedObjectReference", &m10334_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10335_MI;
static PropertyInfo t1967____IsRegistered_PropertyInfo = 
{
	&t1967_TI, "IsRegistered", &m10335_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10341_MI;
static PropertyInfo t1967____HasPendingFixups_PropertyInfo = 
{
	&t1967_TI, "HasPendingFixups", &m10341_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1967_PIs[] =
{
	&t1967____IsInstanceReady_PropertyInfo,
	&t1967____IsUnsolvedObjectReference_PropertyInfo,
	&t1967____IsRegistered_PropertyInfo,
	&t1967____HasPendingFixups_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1967_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1967_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1967_1_0_0;
struct t1967;
const Il2CppTypeDefinitionMetadata t1967_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1967_VT, t1967_VTIGM, NULL};
TypeInfo t1967_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectRecord", "System.Runtime.Serialization", t1967_MIs, t1967_PIs, t1967_FIs, NULL, &t1967_TI, NULL, &EmptyCustomAttributesCache, &t1967_0_0_0, &t1967_1_0_0, &t1967_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1967), sizeof (t1967), 0, -1, 0, 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, false, false, false, 13, 4, 13, 0, 0, 4, 0, 0};
#include "t1974.h"
// Metadata Definition System.Runtime.Serialization.OnDeserializedAttribute
extern TypeInfo t1974_TI;
#include "t1974MD.h"
static MethodInfo* t1974_MIs[] =
{
	NULL
};
extern MethodInfo m4541_MI;
extern MethodInfo m4535_MI;
static Il2CppMethodReference t1974_VT[] =
{
	&m4541_MI,
	&m646_MI,
	&m4535_MI,
	&m673_MI,
};
static bool t1974_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppType t960_0_0_0;
static Il2CppInterfaceOffsetPair t1974_IOs[] = 
{
	{ &t960_0_0_0, 4},
};
extern TypeInfo t1030_TI;
#include "t1030.h"
#include "t1030MD.h"
extern MethodInfo m4647_MI;
extern MethodInfo m4648_MI;
void t1974_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m4647(tmp, 64, &m4647_MI);
		m4648(tmp, false, &m4648_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1974__CustomAttributeCache = {
2,
NULL,
&t1974_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1974_0_0_0;
extern Il2CppType t1974_1_0_0;
extern Il2CppType t732_0_0_0;
struct t1974;
extern CustomAttributesCache t1974__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1974_DM = 
{
	NULL, NULL, NULL, t1974_IOs, &t732_0_0_0, t1974_VT, t1974_VTIGM, NULL};
TypeInfo t1974_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OnDeserializedAttribute", "System.Runtime.Serialization", t1974_MIs, NULL, NULL, NULL, &t1974_TI, NULL, &t1974__CustomAttributeCache, &t1974_0_0_0, &t1974_1_0_0, &t1974_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1974), sizeof (t1974), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#include "t1975.h"
// Metadata Definition System.Runtime.Serialization.OnDeserializingAttribute
extern TypeInfo t1975_TI;
#include "t1975MD.h"
static MethodInfo* t1975_MIs[] =
{
	NULL
};
static Il2CppMethodReference t1975_VT[] =
{
	&m4541_MI,
	&m646_MI,
	&m4535_MI,
	&m673_MI,
};
static bool t1975_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1975_IOs[] = 
{
	{ &t960_0_0_0, 4},
};
void t1975_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1030 * tmp;
		tmp = (t1030 *)il2cpp_codegen_object_new (&t1030_TI);
		m4647(tmp, 64, &m4647_MI);
		m4648(tmp, false, &m4648_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1975__CustomAttributeCache = {
2,
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
	NULL, NULL, NULL, t1975_IOs, &t732_0_0_0, t1975_VT, t1975_VTIGM, NULL};
TypeInfo t1975_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OnDeserializingAttribute", "System.Runtime.Serialization", t1975_MIs, NULL, NULL, NULL, &t1975_TI, NULL, &t1975__CustomAttributeCache, &t1975_0_0_0, &t1975_1_0_0, &t1975_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1975), sizeof (t1975), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#include "t1976.h"
// Metadata Definition System.Runtime.Serialization.OnSerializedAttribute
extern TypeInfo t1976_TI;
#include "t1976MD.h"
static MethodInfo* t1976_MIs[] =
{
	NULL
};
static Il2CppMethodReference t1976_VT[] =
{
	&m4541_MI,
	&m646_MI,
	&m4535_MI,
	&m673_MI,
};
static bool t1976_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1976_IOs[] = 
{
	{ &t960_0_0_0, 4},
};
void t1976_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m4647(tmp, 64, &m4647_MI);
		m4648(tmp, false, &m4648_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1976__CustomAttributeCache = {
2,
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
	NULL, NULL, NULL, t1976_IOs, &t732_0_0_0, t1976_VT, t1976_VTIGM, NULL};
TypeInfo t1976_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OnSerializedAttribute", "System.Runtime.Serialization", t1976_MIs, NULL, NULL, NULL, &t1976_TI, NULL, &t1976__CustomAttributeCache, &t1976_0_0_0, &t1976_1_0_0, &t1976_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1976), sizeof (t1976), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#include "t1977.h"
// Metadata Definition System.Runtime.Serialization.OnSerializingAttribute
extern TypeInfo t1977_TI;
#include "t1977MD.h"
static MethodInfo* t1977_MIs[] =
{
	NULL
};
static Il2CppMethodReference t1977_VT[] =
{
	&m4541_MI,
	&m646_MI,
	&m4535_MI,
	&m673_MI,
};
static bool t1977_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1977_IOs[] = 
{
	{ &t960_0_0_0, 4},
};
void t1977_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1030 * tmp;
		tmp = (t1030 *)il2cpp_codegen_object_new (&t1030_TI);
		m4647(tmp, 64, &m4647_MI);
		m4648(tmp, false, &m4648_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1977__CustomAttributeCache = {
2,
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
	NULL, NULL, NULL, t1977_IOs, &t732_0_0_0, t1977_VT, t1977_VTIGM, NULL};
TypeInfo t1977_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OnSerializingAttribute", "System.Runtime.Serialization", t1977_MIs, NULL, NULL, NULL, &t1977_TI, NULL, &t1977__CustomAttributeCache, &t1977_0_0_0, &t1977_1_0_0, &t1977_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1977), sizeof (t1977), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#include "t1944.h"
// Metadata Definition System.Runtime.Serialization.SerializationBinder
extern TypeInfo t1944_TI;
#include "t1944MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10342_MI = 
{
	".ctor", (methodPointerType)&m10342, &t1944_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4224, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1944_m12117_ParameterInfos[] = 
{
	{"assemblyName", 0, 134222903, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"typeName", 1, 134222904, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12117_MI = 
{
	"BindToType", NULL, &t1944_TI, &t126_0_0_0, RuntimeInvoker_t9_t9_t9, t1944_m12117_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 2, false, false, 4225, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1944_MIs[] =
{
	&m10342_MI,
	&m12117_MI,
	NULL
};
static Il2CppMethodReference t1944_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t1944_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
void t1944_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1944__CustomAttributeCache = {
1,
NULL,
&t1944_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1944_0_0_0;
extern Il2CppType t1944_1_0_0;
struct t1944;
extern CustomAttributesCache t1944__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1944_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1944_VT, t1944_VTIGM, NULL};
TypeInfo t1944_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationBinder", "System.Runtime.Serialization", t1944_MIs, NULL, NULL, NULL, &t1944_TI, NULL, &t1944__CustomAttributeCache, &t1944_0_0_0, &t1944_1_0_0, &t1944_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1944), sizeof (t1944), 0, -1, 0, 0, -1, 1056897, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 5, 0, 0};
#include "t1978.h"
// Metadata Definition System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
extern TypeInfo t1978_TI;
#include "t1978MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t58_0_0_0;
extern Il2CppType t58_0_0_0;
static ParameterInfo t1978_m10343_ParameterInfos[] = 
{
	{"object", 0, 134222920, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"method", 1, 134222921, &EmptyCustomAttributesCache, &t58_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t58 (MethodInfo* method, void* obj, void** args);
MethodInfo m10343_MI = 
{
	".ctor", (methodPointerType)&m10343, &t1978_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t58, t1978_m10343_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 4237, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1978_m10344_ParameterInfos[] = 
{
	{"context", 0, 134222922, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10344_MI = 
{
	"Invoke", (methodPointerType)&m10344, &t1978_TI, &t122_0_0_0, RuntimeInvoker_t122_t1107, t1978_m10344_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 4238, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1107_0_0_0;
extern Il2CppType t477_0_0_0;
extern Il2CppType t477_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1978_m10345_ParameterInfos[] = 
{
	{"context", 0, 134222923, &EmptyCustomAttributesCache, &t1107_0_0_0},
	{"callback", 1, 134222924, &EmptyCustomAttributesCache, &t477_0_0_0},
	{"object", 2, 134222925, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t476_0_0_0;
extern void* RuntimeInvoker_t9_t1107_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10345_MI = 
{
	"BeginInvoke", (methodPointerType)&m10345, &t1978_TI, &t476_0_0_0, RuntimeInvoker_t9_t1107_t9_t9, t1978_m10345_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 4239, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t476_0_0_0;
extern Il2CppType t476_0_0_0;
static ParameterInfo t1978_m10346_ParameterInfos[] = 
{
	{"result", 0, 134222926, &EmptyCustomAttributesCache, &t476_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10346_MI = 
{
	"EndInvoke", (methodPointerType)&m10346, &t1978_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1978_m10346_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 4240, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1978_MIs[] =
{
	&m10343_MI,
	&m10344_MI,
	&m10345_MI,
	&m10346_MI,
	NULL
};
extern MethodInfo m3045_MI;
extern MethodInfo m3046_MI;
extern MethodInfo m3047_MI;
extern MethodInfo m3048_MI;
extern MethodInfo m3049_MI;
extern MethodInfo m3050_MI;
extern MethodInfo m3051_MI;
extern MethodInfo m10344_MI;
extern MethodInfo m10345_MI;
extern MethodInfo m10346_MI;
static Il2CppMethodReference t1978_VT[] =
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
	&m10344_MI,
	&m10345_MI,
	&m10346_MI,
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
};
extern Il2CppType t629_0_0_0;
static Il2CppInterfaceOffsetPair t1978_IOs[] = 
{
	{ &t629_0_0_0, 4},
	{ &t630_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1978_0_0_0;
extern Il2CppType t1978_1_0_0;
extern Il2CppType t478_0_0_0;
extern TypeInfo t1979_TI;
extern Il2CppType t1979_0_0_0;
struct t1978;
const Il2CppTypeDefinitionMetadata t1978_DM = 
{
	&t1979_0_0_0, NULL, NULL, t1978_IOs, &t478_0_0_0, t1978_VT, t1978_VTIGM, NULL};
TypeInfo t1978_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CallbackHandler", "", t1978_MIs, NULL, NULL, NULL, &t1978_TI, NULL, &EmptyCustomAttributesCache, &t1978_0_0_0, &t1978_1_0_0, &t1978_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t1978, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1978), sizeof (t1978), 0, sizeof(methodPointerType), 0, 0, -1, 258, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1979.h"
// Metadata Definition System.Runtime.Serialization.SerializationCallbacks
#include "t1979MD.h"
extern Il2CppType t126_0_0_0;
static ParameterInfo t1979_m10347_ParameterInfos[] = 
{
	{"type", 0, 134222905, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10347_MI = 
{
	".ctor", (methodPointerType)&m10347, &t1979_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1979_m10347_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4226, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10348_MI = 
{
	".cctor", (methodPointerType)&m10348, &t1979_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4227, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10349_MI = 
{
	"get_HasSerializedCallbacks", (methodPointerType)&m10349, &t1979_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4228, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10350_MI = 
{
	"get_HasDeserializedCallbacks", (methodPointerType)&m10350, &t1979_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4229, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1979_m10351_ParameterInfos[] = 
{
	{"type", 0, 134222906, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"attr", 1, 134222907, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1176_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10351_MI = 
{
	"GetMethodsByAttribute", (methodPointerType)&m10351, &t1979_TI, &t1176_0_0_0, RuntimeInvoker_t9_t9_t9, t1979_m10351_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 4230, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1176_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1979_m10352_ParameterInfos[] = 
{
	{"list", 0, 134222908, &EmptyCustomAttributesCache, &t1176_0_0_0},
	{"target", 1, 134222909, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"context", 2, 134222910, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10352_MI = 
{
	"Invoke", (methodPointerType)&m10352, &t1979_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t1107, t1979_m10352_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 4231, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1979_m10353_ParameterInfos[] = 
{
	{"target", 0, 134222911, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"contex", 1, 134222912, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10353_MI = 
{
	"RaiseOnSerializing", (methodPointerType)&m10353, &t1979_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1979_m10353_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4232, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1979_m10354_ParameterInfos[] = 
{
	{"target", 0, 134222913, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"contex", 1, 134222914, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10354_MI = 
{
	"RaiseOnSerialized", (methodPointerType)&m10354, &t1979_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1979_m10354_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4233, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1979_m10355_ParameterInfos[] = 
{
	{"target", 0, 134222915, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"contex", 1, 134222916, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10355_MI = 
{
	"RaiseOnDeserializing", (methodPointerType)&m10355, &t1979_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1979_m10355_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4234, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1979_m10356_ParameterInfos[] = 
{
	{"target", 0, 134222917, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"contex", 1, 134222918, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10356_MI = 
{
	"RaiseOnDeserialized", (methodPointerType)&m10356, &t1979_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1979_m10356_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4235, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1979_m10357_ParameterInfos[] = 
{
	{"t", 0, 134222919, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t1979_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10357_MI = 
{
	"GetSerializationCallbacks", (methodPointerType)&m10357, &t1979_TI, &t1979_0_0_0, RuntimeInvoker_t9_t9, t1979_m10357_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4236, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1979_MIs[] =
{
	&m10347_MI,
	&m10348_MI,
	&m10349_MI,
	&m10350_MI,
	&m10351_MI,
	&m10352_MI,
	&m10353_MI,
	&m10354_MI,
	&m10355_MI,
	&m10356_MI,
	&m10357_MI,
	NULL
};
extern Il2CppType t1176_0_0_33;
FieldInfo t1979_f0_FieldInfo = 
{
	"onSerializingList", &t1176_0_0_33, &t1979_TI, offsetof(t1979, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1176_0_0_33;
FieldInfo t1979_f1_FieldInfo = 
{
	"onSerializedList", &t1176_0_0_33, &t1979_TI, offsetof(t1979, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1176_0_0_33;
FieldInfo t1979_f2_FieldInfo = 
{
	"onDeserializingList", &t1176_0_0_33, &t1979_TI, offsetof(t1979, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1176_0_0_33;
FieldInfo t1979_f3_FieldInfo = 
{
	"onDeserializedList", &t1176_0_0_33, &t1979_TI, offsetof(t1979, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_17;
FieldInfo t1979_f4_FieldInfo = 
{
	"cache", &t1164_0_0_17, &t1979_TI, offsetof(t1979_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_17;
FieldInfo t1979_f5_FieldInfo = 
{
	"cache_lock", &t9_0_0_17, &t1979_TI, offsetof(t1979_SFs, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1979_FIs[] =
{
	&t1979_f0_FieldInfo,
	&t1979_f1_FieldInfo,
	&t1979_f2_FieldInfo,
	&t1979_f3_FieldInfo,
	&t1979_f4_FieldInfo,
	&t1979_f5_FieldInfo,
	NULL
};
extern MethodInfo m10349_MI;
static PropertyInfo t1979____HasSerializedCallbacks_PropertyInfo = 
{
	&t1979_TI, "HasSerializedCallbacks", &m10349_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10350_MI;
static PropertyInfo t1979____HasDeserializedCallbacks_PropertyInfo = 
{
	&t1979_TI, "HasDeserializedCallbacks", &m10350_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1979_PIs[] =
{
	&t1979____HasSerializedCallbacks_PropertyInfo,
	&t1979____HasDeserializedCallbacks_PropertyInfo,
	NULL
};
static const Il2CppType* t1979_TI__nestedTypes[1] =
{
	&t1978_0_0_0,
};
static Il2CppMethodReference t1979_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1979_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1979_1_0_0;
struct t1979;
const Il2CppTypeDefinitionMetadata t1979_DM = 
{
	NULL, t1979_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t1979_VT, t1979_VTIGM, NULL};
TypeInfo t1979_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationCallbacks", "System.Runtime.Serialization", t1979_MIs, t1979_PIs, t1979_FIs, NULL, &t1979_TI, NULL, &EmptyCustomAttributesCache, &t1979_0_0_0, &t1979_1_0_0, &t1979_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1979), sizeof (t1979), 0, -1, sizeof(t1979_SFs), 0, -1, 1048832, 0, 0, false, false, false, false, false, false, false, false, true, false, 11, 2, 6, 0, 1, 4, 0, 0};
#include "t1980.h"
// Metadata Definition System.Runtime.Serialization.SerializationEntry
extern TypeInfo t1980_TI;
#include "t1980MD.h"
extern Il2CppType t2_0_0_0;
extern Il2CppType t126_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1980_m10358_ParameterInfos[] = 
{
	{"name", 0, 134222927, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"type", 1, 134222928, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"value", 2, 134222929, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10358_MI = 
{
	".ctor", (methodPointerType)&m10358, &t1980_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1980_m10358_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 3, false, false, 4241, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10359_MI = 
{
	"get_Name", (methodPointerType)&m10359, &t1980_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4242, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10360_MI = 
{
	"get_ObjectType", (methodPointerType)&m10360, &t1980_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4243, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10361_MI = 
{
	"get_Value", (methodPointerType)&m10361, &t1980_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4244, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1980_MIs[] =
{
	&m10358_MI,
	&m10359_MI,
	&m10360_MI,
	&m10361_MI,
	NULL
};
extern Il2CppType t2_0_0_1;
FieldInfo t1980_f0_FieldInfo = 
{
	"name", &t2_0_0_1, &t1980_TI, offsetof(t1980, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t126_0_0_1;
FieldInfo t1980_f1_FieldInfo = 
{
	"objectType", &t126_0_0_1, &t1980_TI, offsetof(t1980, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t1980_f2_FieldInfo = 
{
	"value", &t9_0_0_1, &t1980_TI, offsetof(t1980, f2) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1980_FIs[] =
{
	&t1980_f0_FieldInfo,
	&t1980_f1_FieldInfo,
	&t1980_f2_FieldInfo,
	NULL
};
extern MethodInfo m10359_MI;
static PropertyInfo t1980____Name_PropertyInfo = 
{
	&t1980_TI, "Name", &m10359_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10360_MI;
static PropertyInfo t1980____ObjectType_PropertyInfo = 
{
	&t1980_TI, "ObjectType", &m10360_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10361_MI;
static PropertyInfo t1980____Value_PropertyInfo = 
{
	&t1980_TI, "Value", &m10361_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1980_PIs[] =
{
	&t1980____Name_PropertyInfo,
	&t1980____ObjectType_PropertyInfo,
	&t1980____Value_PropertyInfo,
	NULL
};
extern MethodInfo m680_MI;
extern MethodInfo m681_MI;
extern MethodInfo m682_MI;
static Il2CppMethodReference t1980_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1980_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1980_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
extern Il2CppType t117_0_0_0;
extern CustomAttributesCache t1980__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1980_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1980_VT, t1980_VTIGM, NULL};
TypeInfo t1980_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationEntry", "System.Runtime.Serialization", t1980_MIs, t1980_PIs, t1980_FIs, NULL, &t1980_TI, NULL, &t1980__CustomAttributeCache, &t1980_0_0_0, &t1980_1_0_0, &t1980_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1980)+ sizeof (Il2CppObject), sizeof (t1980)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048841, 0, 0, true, false, false, false, false, false, false, false, false, false, 4, 3, 3, 0, 0, 4, 0, 0};
#include "t1348.h"
// Metadata Definition System.Runtime.Serialization.SerializationException
extern TypeInfo t1348_TI;
#include "t1348MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10362_MI = 
{
	".ctor", (methodPointerType)&m10362, &t1348_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4245, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1348_m5774_ParameterInfos[] = 
{
	{"message", 0, 134222930, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5774_MI = 
{
	".ctor", (methodPointerType)&m5774, &t1348_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1348_m5774_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4246, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1348_m10363_ParameterInfos[] = 
{
	{"info", 0, 134222931, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134222932, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10363_MI = 
{
	".ctor", (methodPointerType)&m10363, &t1348_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1348_m10363_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 4247, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1348_MIs[] =
{
	&m10362_MI,
	&m5774_MI,
	&m10363_MI,
	NULL
};
static Il2CppMethodReference t1348_VT[] =
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
};
static Il2CppInterfaceOffsetPair t1348_IOs[] = 
{
	{ &t630_0_0_0, 4},
	{ &t954_0_0_0, 5},
};
void t1348_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1348__CustomAttributeCache = {
1,
NULL,
&t1348_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1348_0_0_0;
extern Il2CppType t1348_1_0_0;
struct t1348;
extern CustomAttributesCache t1348__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1348_DM = 
{
	NULL, NULL, NULL, t1348_IOs, &t1375_0_0_0, t1348_VT, t1348_VTIGM, NULL};
TypeInfo t1348_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationException", "System.Runtime.Serialization", t1348_MIs, NULL, NULL, NULL, &t1348_TI, NULL, &t1348__CustomAttributeCache, &t1348_0_0_0, &t1348_1_0_0, &t1348_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1348), sizeof (t1348), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1106.h"
// Metadata Definition System.Runtime.Serialization.SerializationInfo
extern TypeInfo t1106_TI;
#include "t1106MD.h"
extern Il2CppType t126_0_0_0;
extern Il2CppType t1981_0_0_0;
static ParameterInfo t1106_m10364_ParameterInfos[] = 
{
	{"type", 0, 134222933, &EmptyCustomAttributesCache, &t126_0_0_0},
	{"converter", 1, 134222934, &EmptyCustomAttributesCache, &t1981_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1106__CustomAttributeCache_m10364;
MethodInfo m10364_MI = 
{
	".ctor", (methodPointerType)&m10364, &t1106_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1106_m10364_ParameterInfos, &t1106__CustomAttributeCache_m10364, 6278, 0, 255, 2, false, false, 4248, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10365_MI = 
{
	"get_AssemblyName", (methodPointerType)&m10365, &t1106_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4249, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10366_MI = 
{
	"get_FullTypeName", (methodPointerType)&m10366, &t1106_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4250, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10367_MI = 
{
	"get_MemberCount", (methodPointerType)&m10367, &t1106_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4251, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1106_m5770_ParameterInfos[] = 
{
	{"name", 0, 134222935, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222936, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"type", 2, 134222937, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5770_MI = 
{
	"AddValue", (methodPointerType)&m5770, &t1106_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9, t1106_m5770_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 4252, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t126_0_0_0;
static ParameterInfo t1106_m5773_ParameterInfos[] = 
{
	{"name", 0, 134222938, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"type", 1, 134222939, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5773_MI = 
{
	"GetValue", (methodPointerType)&m5773, &t1106_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1106_m5773_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4253, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
static ParameterInfo t1106_m10368_ParameterInfos[] = 
{
	{"type", 0, 134222940, &EmptyCustomAttributesCache, &t126_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10368_MI = 
{
	"SetType", (methodPointerType)&m10368, &t1106_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1106_m10368_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4254, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1982_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10369_MI = 
{
	"GetEnumerator", (methodPointerType)&m10369, &t1106_TI, &t1982_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4255, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t341_0_0_0;
extern Il2CppType t341_0_0_0;
static ParameterInfo t1106_m10370_ParameterInfos[] = 
{
	{"name", 0, 134222941, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222942, &EmptyCustomAttributesCache, &t341_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t341 (MethodInfo* method, void* obj, void** args);
MethodInfo m10370_MI = 
{
	"AddValue", (methodPointerType)&m10370, &t1106_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t341, t1106_m10370_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4256, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1106_m5772_ParameterInfos[] = 
{
	{"name", 0, 134222943, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222944, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5772_MI = 
{
	"AddValue", (methodPointerType)&m5772, &t1106_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125, t1106_m5772_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4257, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1106_m5771_ParameterInfos[] = 
{
	{"name", 0, 134222945, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222946, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m5771_MI = 
{
	"AddValue", (methodPointerType)&m5771, &t1106_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1106_m5771_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4258, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t272_0_0_0;
extern Il2CppType t272_0_0_0;
static ParameterInfo t1106_m10371_ParameterInfos[] = 
{
	{"name", 0, 134222947, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222948, &EmptyCustomAttributesCache, &t272_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t272 (MethodInfo* method, void* obj, void** args);
MethodInfo m10371_MI = 
{
	"AddValue", (methodPointerType)&m10371, &t1106_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t272, t1106_m10371_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4259, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_0_0_0;
static ParameterInfo t1106_m10372_ParameterInfos[] = 
{
	{"name", 0, 134222949, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222950, &EmptyCustomAttributesCache, &t123_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m10372_MI = 
{
	"AddValue", (methodPointerType)&m10372, &t1106_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t123, t1106_m10372_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4260, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t1106_m5786_ParameterInfos[] = 
{
	{"name", 0, 134222951, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222952, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m5786_MI = 
{
	"AddValue", (methodPointerType)&m5786, &t1106_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t303, t1106_m5786_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4261, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t896_0_0_0;
extern Il2CppType t896_0_0_0;
static ParameterInfo t1106_m10373_ParameterInfos[] = 
{
	{"name", 0, 134222953, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222954, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t303 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1106__CustomAttributeCache_m10373;
MethodInfo m10373_MI = 
{
	"AddValue", (methodPointerType)&m10373, &t1106_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t303, t1106_m10373_ParameterInfos, &t1106__CustomAttributeCache_m10373, 134, 0, 255, 2, false, false, 4262, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1106_m5785_ParameterInfos[] = 
{
	{"name", 0, 134222955, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"value", 1, 134222956, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5785_MI = 
{
	"AddValue", (methodPointerType)&m5785, &t1106_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1106_m5785_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4263, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1106_m5775_ParameterInfos[] = 
{
	{"name", 0, 134222957, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5775_MI = 
{
	"GetBoolean", (methodPointerType)&m5775, &t1106_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1106_m5775_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4264, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1106_m10374_ParameterInfos[] = 
{
	{"name", 0, 134222958, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t341_0_0_0;
extern void* RuntimeInvoker_t341_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10374_MI = 
{
	"GetInt16", (methodPointerType)&m10374, &t1106_TI, &t341_0_0_0, RuntimeInvoker_t341_t9, t1106_m10374_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4265, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1106_m5784_ParameterInfos[] = 
{
	{"name", 0, 134222959, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5784_MI = 
{
	"GetInt32", (methodPointerType)&m5784, &t1106_TI, &t125_0_0_0, RuntimeInvoker_t125_t9, t1106_m5784_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4266, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1106_m5783_ParameterInfos[] = 
{
	{"name", 0, 134222960, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t303_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5783_MI = 
{
	"GetInt64", (methodPointerType)&m5783, &t1106_TI, &t303_0_0_0, RuntimeInvoker_t303_t9, t1106_m5783_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4267, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1106_m5782_ParameterInfos[] = 
{
	{"name", 0, 134222961, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5782_MI = 
{
	"GetString", (methodPointerType)&m5782, &t1106_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1106_m5782_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4268, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1106_MIs[] =
{
	&m10364_MI,
	&m10365_MI,
	&m10366_MI,
	&m10367_MI,
	&m5770_MI,
	&m5773_MI,
	&m10368_MI,
	&m10369_MI,
	&m10370_MI,
	&m5772_MI,
	&m5771_MI,
	&m10371_MI,
	&m10372_MI,
	&m5786_MI,
	&m10373_MI,
	&m5785_MI,
	&m5775_MI,
	&m10374_MI,
	&m5784_MI,
	&m5783_MI,
	&m5782_MI,
	NULL
};
extern Il2CppType t1164_0_0_1;
FieldInfo t1106_f0_FieldInfo = 
{
	"serialized", &t1164_0_0_1, &t1106_TI, offsetof(t1106, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1176_0_0_1;
FieldInfo t1106_f1_FieldInfo = 
{
	"values", &t1176_0_0_1, &t1106_TI, offsetof(t1106, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1106_f2_FieldInfo = 
{
	"assemblyName", &t2_0_0_1, &t1106_TI, offsetof(t1106, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1106_f3_FieldInfo = 
{
	"fullTypeName", &t2_0_0_1, &t1106_TI, offsetof(t1106, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1981_0_0_1;
FieldInfo t1106_f4_FieldInfo = 
{
	"converter", &t1981_0_0_1, &t1106_TI, offsetof(t1106, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1106_FIs[] =
{
	&t1106_f0_FieldInfo,
	&t1106_f1_FieldInfo,
	&t1106_f2_FieldInfo,
	&t1106_f3_FieldInfo,
	&t1106_f4_FieldInfo,
	NULL
};
extern MethodInfo m10365_MI;
static PropertyInfo t1106____AssemblyName_PropertyInfo = 
{
	&t1106_TI, "AssemblyName", &m10365_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10366_MI;
static PropertyInfo t1106____FullTypeName_PropertyInfo = 
{
	&t1106_TI, "FullTypeName", &m10366_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10367_MI;
static PropertyInfo t1106____MemberCount_PropertyInfo = 
{
	&t1106_TI, "MemberCount", &m10367_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1106_PIs[] =
{
	&t1106____AssemblyName_PropertyInfo,
	&t1106____FullTypeName_PropertyInfo,
	&t1106____MemberCount_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1106_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1106_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1106_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1106_CustomAttributesCacheGenerator_m10364(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1158 * tmp;
		tmp = (t1158 *)il2cpp_codegen_object_new (&t1158_TI);
		m4843(tmp, false, &m4843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1106_CustomAttributesCacheGenerator_m10373(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1158 * tmp;
		tmp = (t1158 *)il2cpp_codegen_object_new (&t1158_TI);
		m4843(tmp, false, &m4843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1106__CustomAttributeCache = {
1,
NULL,
&t1106_CustomAttributesCacheGenerator
};
CustomAttributesCache t1106__CustomAttributeCache_m10364 = {
1,
NULL,
&t1106_CustomAttributesCacheGenerator_m10364
};
CustomAttributesCache t1106__CustomAttributeCache_m10373 = {
1,
NULL,
&t1106_CustomAttributesCacheGenerator_m10373
};
extern Il2CppImage g_mscorlib_dll_Image;
struct t1106;
extern CustomAttributesCache t1106__CustomAttributeCache;
extern CustomAttributesCache t1106__CustomAttributeCache_m10364;
extern CustomAttributesCache t1106__CustomAttributeCache_m10373;
const Il2CppTypeDefinitionMetadata t1106_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1106_VT, t1106_VTIGM, NULL};
TypeInfo t1106_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationInfo", "System.Runtime.Serialization", t1106_MIs, t1106_PIs, t1106_FIs, NULL, &t1106_TI, NULL, &t1106__CustomAttributeCache, &t1106_0_0_0, &t1106_1_0_0, &t1106_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1106), sizeof (t1106), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 21, 3, 5, 0, 0, 4, 0, 0};
#include "t1982.h"
// Metadata Definition System.Runtime.Serialization.SerializationInfoEnumerator
extern TypeInfo t1982_TI;
#include "t1982MD.h"
extern Il2CppType t1176_0_0_0;
static ParameterInfo t1982_m10375_ParameterInfos[] = 
{
	{"list", 0, 134222962, &EmptyCustomAttributesCache, &t1176_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10375_MI = 
{
	".ctor", (methodPointerType)&m10375, &t1982_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1982_m10375_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 4269, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10376_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10376, &t1982_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, false, 4270, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1980_0_0_0;
extern void* RuntimeInvoker_t1980 (MethodInfo* method, void* obj, void** args);
MethodInfo m10377_MI = 
{
	"get_Current", (methodPointerType)&m10377, &t1982_TI, &t1980_0_0_0, RuntimeInvoker_t1980, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4271, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10378_MI = 
{
	"get_Name", (methodPointerType)&m10378, &t1982_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4272, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t126_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10379_MI = 
{
	"get_ObjectType", (methodPointerType)&m10379, &t1982_TI, &t126_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4273, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10380_MI = 
{
	"get_Value", (methodPointerType)&m10380, &t1982_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4274, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m10381_MI = 
{
	"MoveNext", (methodPointerType)&m10381, &t1982_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 4275, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1982_MIs[] =
{
	&m10375_MI,
	&m10376_MI,
	&m10377_MI,
	&m10378_MI,
	&m10379_MI,
	&m10380_MI,
	&m10381_MI,
	NULL
};
extern Il2CppType t76_0_0_1;
FieldInfo t1982_f0_FieldInfo = 
{
	"enumerator", &t76_0_0_1, &t1982_TI, offsetof(t1982, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1982_FIs[] =
{
	&t1982_f0_FieldInfo,
	NULL
};
extern MethodInfo m10376_MI;
static PropertyInfo t1982____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1982_TI, "System.Collections.IEnumerator.Current", &m10376_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10377_MI;
static PropertyInfo t1982____Current_PropertyInfo = 
{
	&t1982_TI, "Current", &m10377_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10378_MI;
static PropertyInfo t1982____Name_PropertyInfo = 
{
	&t1982_TI, "Name", &m10378_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10379_MI;
static PropertyInfo t1982____ObjectType_PropertyInfo = 
{
	&t1982_TI, "ObjectType", &m10379_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10380_MI;
static PropertyInfo t1982____Value_PropertyInfo = 
{
	&t1982_TI, "Value", &m10380_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1982_PIs[] =
{
	&t1982____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1982____Current_PropertyInfo,
	&t1982____Name_PropertyInfo,
	&t1982____ObjectType_PropertyInfo,
	&t1982____Value_PropertyInfo,
	NULL
};
extern MethodInfo m10381_MI;
static Il2CppMethodReference t1982_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10376_MI,
	&m10381_MI,
};
static bool t1982_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType t76_0_0_0;
static const Il2CppType* t1982_ITIs[] = 
{
	&t76_0_0_0,
};
static Il2CppInterfaceOffsetPair t1982_IOs[] = 
{
	{ &t76_0_0_0, 4},
};
void t1982_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, t1982_ITIs, t1982_IOs, &t9_0_0_0, t1982_VT, t1982_VTIGM, NULL};
TypeInfo t1982_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationInfoEnumerator", "System.Runtime.Serialization", t1982_MIs, t1982_PIs, t1982_FIs, NULL, &t1982_TI, NULL, &t1982__CustomAttributeCache, &t1982_0_0_0, &t1982_1_0_0, &t1982_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1982), sizeof (t1982), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 7, 5, 1, 0, 0, 6, 1, 1};
#include "t1983.h"
// Metadata Definition System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey3
extern TypeInfo t1983_TI;
#include "t1983MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10382_MI = 
{
	".ctor", (methodPointerType)&m10382, &t1983_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4279, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1983_m10383_ParameterInfos[] = 
{
	{"ctx", 0, 134222965, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10383_MI = 
{
	"<>m__2", (methodPointerType)&m10383, &t1983_TI, &t122_0_0_0, RuntimeInvoker_t122_t1107, t1983_m10383_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4280, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1983_MIs[] =
{
	&m10382_MI,
	&m10383_MI,
	NULL
};
extern Il2CppType t1979_0_0_3;
FieldInfo t1983_f0_FieldInfo = 
{
	"sc", &t1979_0_0_3, &t1983_TI, offsetof(t1983, f0), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_3;
FieldInfo t1983_f1_FieldInfo = 
{
	"obj", &t9_0_0_3, &t1983_TI, offsetof(t1983, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1983_FIs[] =
{
	&t1983_f0_FieldInfo,
	&t1983_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1983_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1983_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1983_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t187 * tmp;
		tmp = (t187 *)il2cpp_codegen_object_new (&t187_TI);
		m674(tmp, &m674_MI);
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
extern TypeInfo t1963_TI;
extern Il2CppType t1963_0_0_0;
struct t1983;
extern CustomAttributesCache t1983__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1983_DM = 
{
	&t1963_0_0_0, NULL, NULL, NULL, &t9_0_0_0, t1983_VT, t1983_VTIGM, NULL};
TypeInfo t1983_TI = 
{
	&g_mscorlib_dll_Image, NULL, "<RegisterObject>c__AnonStorey3", "", t1983_MIs, NULL, t1983_FIs, NULL, &t1983_TI, NULL, &t1983__CustomAttributeCache, &t1983_0_0_0, &t1983_1_0_0, &t1983_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1983), sizeof (t1983), 0, -1, 0, 0, -1, 1048835, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 2, 0, 0, 4, 0, 0};
#include "t1963.h"
// Metadata Definition System.Runtime.Serialization.SerializationObjectManager
#include "t1963MD.h"
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1963_m10384_ParameterInfos[] = 
{
	{"context", 0, 134222963, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10384_MI = 
{
	".ctor", (methodPointerType)&m10384, &t1963_TI, &t122_0_0_0, RuntimeInvoker_t122_t1107, t1963_m10384_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4276, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1963_m10385_ParameterInfos[] = 
{
	{"obj", 0, 134222964, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10385_MI = 
{
	"RegisterObject", (methodPointerType)&m10385, &t1963_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1963_m10385_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4277, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10386_MI = 
{
	"RaiseOnSerializedEvent", (methodPointerType)&m10386, &t1963_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4278, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1963_MIs[] =
{
	&m10384_MI,
	&m10385_MI,
	&m10386_MI,
	NULL
};
extern Il2CppType t1107_0_0_33;
FieldInfo t1963_f0_FieldInfo = 
{
	"context", &t1107_0_0_33, &t1963_TI, offsetof(t1963, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_33;
FieldInfo t1963_f1_FieldInfo = 
{
	"seen", &t1164_0_0_33, &t1963_TI, offsetof(t1963, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1978_0_0_1;
FieldInfo t1963_f2_FieldInfo = 
{
	"callbacks", &t1978_0_0_1, &t1963_TI, offsetof(t1963, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1963_FIs[] =
{
	&t1963_f0_FieldInfo,
	&t1963_f1_FieldInfo,
	&t1963_f2_FieldInfo,
	NULL
};
static const Il2CppType* t1963_TI__nestedTypes[1] =
{
	&t1983_0_0_0,
};
static Il2CppMethodReference t1963_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1963_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1963_1_0_0;
struct t1963;
const Il2CppTypeDefinitionMetadata t1963_DM = 
{
	NULL, t1963_TI__nestedTypes, NULL, NULL, &t9_0_0_0, t1963_VT, t1963_VTIGM, NULL};
TypeInfo t1963_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationObjectManager", "System.Runtime.Serialization", t1963_MIs, NULL, t1963_FIs, NULL, &t1963_TI, NULL, &EmptyCustomAttributesCache, &t1963_0_0_0, &t1963_1_0_0, &t1963_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1963), sizeof (t1963), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 3, 0, 1, 4, 0, 0};
#include "t1107.h"
// Metadata Definition System.Runtime.Serialization.StreamingContext
extern TypeInfo t1107_TI;
#include "t1107MD.h"
extern Il2CppType t1984_0_0_0;
extern Il2CppType t1984_0_0_0;
static ParameterInfo t1107_m10387_ParameterInfos[] = 
{
	{"state", 0, 134222966, &EmptyCustomAttributesCache, &t1984_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10387_MI = 
{
	".ctor", (methodPointerType)&m10387, &t1107_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1107_m10387_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4281, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1984_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t1107_m10388_ParameterInfos[] = 
{
	{"state", 0, 134222967, &EmptyCustomAttributesCache, &t1984_0_0_0},
	{"additional", 1, 134222968, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10388_MI = 
{
	".ctor", (methodPointerType)&m10388, &t1107_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9, t1107_m10388_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4282, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10389_MI = 
{
	"get_Context", (methodPointerType)&m10389, &t1107_TI, &t9_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4283, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1984_0_0_0;
extern void* RuntimeInvoker_t1984 (MethodInfo* method, void* obj, void** args);
MethodInfo m10390_MI = 
{
	"get_State", (methodPointerType)&m10390, &t1107_TI, &t1984_0_0_0, RuntimeInvoker_t1984, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4284, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1107_m10391_ParameterInfos[] = 
{
	{"obj", 0, 134222969, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10391_MI = 
{
	"Equals", (methodPointerType)&m10391, &t1107_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1107_m10391_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 4285, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10392_MI = 
{
	"GetHashCode", (methodPointerType)&m10392, &t1107_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4286, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1107_MIs[] =
{
	&m10387_MI,
	&m10388_MI,
	&m10389_MI,
	&m10390_MI,
	&m10391_MI,
	&m10392_MI,
	NULL
};
extern Il2CppType t1984_0_0_1;
FieldInfo t1107_f0_FieldInfo = 
{
	"state", &t1984_0_0_1, &t1107_TI, offsetof(t1107, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t1107_f1_FieldInfo = 
{
	"additional", &t9_0_0_1, &t1107_TI, offsetof(t1107, f1) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1107_FIs[] =
{
	&t1107_f0_FieldInfo,
	&t1107_f1_FieldInfo,
	NULL
};
extern MethodInfo m10389_MI;
static PropertyInfo t1107____Context_PropertyInfo = 
{
	&t1107_TI, "Context", &m10389_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10390_MI;
static PropertyInfo t1107____State_PropertyInfo = 
{
	&t1107_TI, "State", &m10390_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1107_PIs[] =
{
	&t1107____Context_PropertyInfo,
	&t1107____State_PropertyInfo,
	NULL
};
extern MethodInfo m10391_MI;
extern MethodInfo m10392_MI;
static Il2CppMethodReference t1107_VT[] =
{
	&m10391_MI,
	&m646_MI,
	&m10392_MI,
	&m682_MI,
};
static bool t1107_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1107_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1107__CustomAttributeCache = {
1,
NULL,
&t1107_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1107_1_0_0;
extern CustomAttributesCache t1107__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1107_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1107_VT, t1107_VTIGM, NULL};
TypeInfo t1107_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamingContext", "System.Runtime.Serialization", t1107_MIs, t1107_PIs, t1107_FIs, NULL, &t1107_TI, NULL, &t1107__CustomAttributeCache, &t1107_0_0_0, &t1107_1_0_0, &t1107_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1107)+ sizeof (Il2CppObject), sizeof (t1107)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, 0, true, false, false, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t1984.h"
// Metadata Definition System.Runtime.Serialization.StreamingContextStates
extern TypeInfo t1984_TI;
#include "t1984MD.h"
static MethodInfo* t1984_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1984_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1984_TI, offsetof(t1984, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1984_0_0_32854;
FieldInfo t1984_f2_FieldInfo = 
{
	"CrossProcess", &t1984_0_0_32854, &t1984_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1984_0_0_32854;
FieldInfo t1984_f3_FieldInfo = 
{
	"CrossMachine", &t1984_0_0_32854, &t1984_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1984_0_0_32854;
FieldInfo t1984_f4_FieldInfo = 
{
	"File", &t1984_0_0_32854, &t1984_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1984_0_0_32854;
FieldInfo t1984_f5_FieldInfo = 
{
	"Persistence", &t1984_0_0_32854, &t1984_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1984_0_0_32854;
FieldInfo t1984_f6_FieldInfo = 
{
	"Remoting", &t1984_0_0_32854, &t1984_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1984_0_0_32854;
FieldInfo t1984_f7_FieldInfo = 
{
	"Other", &t1984_0_0_32854, &t1984_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1984_0_0_32854;
FieldInfo t1984_f8_FieldInfo = 
{
	"Clone", &t1984_0_0_32854, &t1984_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1984_0_0_32854;
FieldInfo t1984_f9_FieldInfo = 
{
	"CrossAppDomain", &t1984_0_0_32854, &t1984_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1984_0_0_32854;
FieldInfo t1984_f10_FieldInfo = 
{
	"All", &t1984_0_0_32854, &t1984_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1984_FIs[] =
{
	&t1984_f1_FieldInfo,
	&t1984_f2_FieldInfo,
	&t1984_f3_FieldInfo,
	&t1984_f4_FieldInfo,
	&t1984_f5_FieldInfo,
	&t1984_f6_FieldInfo,
	&t1984_f7_FieldInfo,
	&t1984_f8_FieldInfo,
	&t1984_f9_FieldInfo,
	&t1984_f10_FieldInfo,
	NULL
};
static const int32_t t1984_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1984_f2_DefaultValue = 
{
	&t1984_f2_FieldInfo, { (char*)&t1984_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1984_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1984_f3_DefaultValue = 
{
	&t1984_f3_FieldInfo, { (char*)&t1984_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1984_f4_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1984_f4_DefaultValue = 
{
	&t1984_f4_FieldInfo, { (char*)&t1984_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1984_f5_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1984_f5_DefaultValue = 
{
	&t1984_f5_FieldInfo, { (char*)&t1984_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1984_f6_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1984_f6_DefaultValue = 
{
	&t1984_f6_FieldInfo, { (char*)&t1984_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1984_f7_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1984_f7_DefaultValue = 
{
	&t1984_f7_FieldInfo, { (char*)&t1984_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1984_f8_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1984_f8_DefaultValue = 
{
	&t1984_f8_FieldInfo, { (char*)&t1984_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1984_f9_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1984_f9_DefaultValue = 
{
	&t1984_f9_FieldInfo, { (char*)&t1984_f9_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1984_f10_DefaultValueData = 255;
static Il2CppFieldDefaultValueEntry t1984_f10_DefaultValue = 
{
	&t1984_f10_FieldInfo, { (char*)&t1984_f10_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1984_FDVs[] = 
{
	&t1984_f2_DefaultValue,
	&t1984_f3_DefaultValue,
	&t1984_f4_DefaultValue,
	&t1984_f5_DefaultValue,
	&t1984_f6_DefaultValue,
	&t1984_f7_DefaultValue,
	&t1984_f8_DefaultValue,
	&t1984_f9_DefaultValue,
	&t1984_f10_DefaultValue,
	NULL
};
static Il2CppMethodReference t1984_VT[] =
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
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1984_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
extern TypeInfo t622_TI;
#include "t622.h"
#include "t622MD.h"
extern MethodInfo m3031_MI;
void t1984_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
CustomAttributesCache t1984__CustomAttributeCache = {
2,
NULL,
&t1984_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1984_1_0_0;
extern CustomAttributesCache t1984__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1984_DM = 
{
	NULL, NULL, NULL, t1984_IOs, &t8_0_0_0, t1984_VT, t1984_VTIGM, NULL};
TypeInfo t1984_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamingContextStates", "System.Runtime.Serialization", t1984_MIs, NULL, t1984_FIs, NULL, &t125_TI, NULL, &t1984__CustomAttributeCache, &t1984_0_0_0, &t1984_1_0_0, &t1984_DM, NULL, NULL, NULL, t1984_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1984)+ sizeof (Il2CppObject), sizeof (t1984)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 10, 0, 0, 23, 0, 3};
#include "t1188.h"
// Metadata Definition System.Security.Cryptography.X509Certificates.X509Certificate
extern TypeInfo t1188_TI;
#include "t1188MD.h"
extern Il2CppType t737_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1188_m10393_ParameterInfos[] = 
{
	{"data", 0, 134222970, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"dates", 1, 134222971, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10393_MI = 
{
	".ctor", (methodPointerType)&m10393, &t1188_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186, t1188_m10393_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 4287, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1188_m7048_ParameterInfos[] = 
{
	{"data", 0, 134222972, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7048_MI = 
{
	".ctor", (methodPointerType)&m7048, &t1188_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1188_m7048_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4288, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m5867_MI = 
{
	".ctor", (methodPointerType)&m5867, &t1188_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4289, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1188_m10394_ParameterInfos[] = 
{
	{"info", 0, 134222973, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134222974, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10394_MI = 
{
	".ctor", (methodPointerType)&m10394, &t1188_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1188_m10394_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4290, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1188_m6084_ParameterInfos[] = 
{
	{"sender", 0, 134222975, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6084_MI = 
{
	"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", (methodPointerType)&m6084, &t1188_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1188_m6084_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 1, false, false, 4291, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1188_m6083_ParameterInfos[] = 
{
	{"info", 0, 134222976, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134222977, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m6083_MI = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData", (methodPointerType)&m6083, &t1188_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1188_m6083_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 2, false, false, 4292, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1188_m10395_ParameterInfos[] = 
{
	{"data", 0, 134222978, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10395_MI = 
{
	"tostr", (methodPointerType)&m10395, &t1188_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1188_m10395_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 4293, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1188_0_0_0;
extern Il2CppType t1188_0_0_0;
static ParameterInfo t1188_m5891_ParameterInfos[] = 
{
	{"other", 0, 134222979, &EmptyCustomAttributesCache, &t1188_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5891_MI = 
{
	"Equals", (methodPointerType)&m5891, &t1188_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1188_m5891_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 1, false, false, 4294, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6085_MI = 
{
	"GetCertHash", (methodPointerType)&m6085, &t1188_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 7, 0, false, false, 4295, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5865_MI = 
{
	"GetCertHashString", (methodPointerType)&m5865, &t1188_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 8, 0, false, false, 4296, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6086_MI = 
{
	"GetEffectiveDateString", (methodPointerType)&m6086, &t1188_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 9, 0, false, false, 4297, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6087_MI = 
{
	"GetExpirationDateString", (methodPointerType)&m6087, &t1188_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 10, 0, false, false, 4298, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6082_MI = 
{
	"GetHashCode", (methodPointerType)&m6082, &t1188_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 4299, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1188__CustomAttributeCache_m6088;
MethodInfo m6088_MI = 
{
	"GetIssuerName", (methodPointerType)&m6088, &t1188_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &t1188__CustomAttributeCache_m6088, 454, 0, 11, 0, false, false, 4300, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1188__CustomAttributeCache_m6089;
MethodInfo m6089_MI = 
{
	"GetName", (methodPointerType)&m6089, &t1188_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &t1188__CustomAttributeCache_m6089, 454, 0, 12, 0, false, false, 4301, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6090_MI = 
{
	"GetPublicKey", (methodPointerType)&m6090, &t1188_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 13, 0, false, false, 4302, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6091_MI = 
{
	"GetRawCertData", (methodPointerType)&m6091, &t1188_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 454, 0, 14, 0, false, false, 4303, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10396_MI = 
{
	"ToString", (methodPointerType)&m10396, &t1188_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 4304, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1188_m5882_ParameterInfos[] = 
{
	{"fVerbose", 0, 134222980, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m5882_MI = 
{
	"ToString", (methodPointerType)&m5882, &t1188_TI, &t2_0_0_0, RuntimeInvoker_t9_t186, t1188_m5882_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 15, 1, false, false, 4305, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5885_MI = 
{
	"get_Issuer", (methodPointerType)&m5885, &t1188_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4306, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5884_MI = 
{
	"get_Subject", (methodPointerType)&m5884, &t1188_TI, &t2_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4307, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t1188_m6081_ParameterInfos[] = 
{
	{"obj", 0, 134222981, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1188__CustomAttributeCache_m6081;
MethodInfo m6081_MI = 
{
	"Equals", (methodPointerType)&m6081, &t1188_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1188_m6081_ParameterInfos, &t1188__CustomAttributeCache_m6081, 198, 0, 0, 1, false, false, 4308, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t1235_0_0_0;
extern Il2CppType t1235_0_0_0;
static ParameterInfo t1188_m5879_ParameterInfos[] = 
{
	{"rawData", 0, 134222982, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"password", 1, 134222983, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"keyStorageFlags", 2, 134222984, &EmptyCustomAttributesCache, &t1235_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1188__CustomAttributeCache_m5879;
MethodInfo m5879_MI = 
{
	"Import", (methodPointerType)&m5879, &t1188_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t125, t1188_m5879_ParameterInfos, &t1188__CustomAttributeCache_m5879, 454, 0, 16, 3, false, false, 4309, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1188__CustomAttributeCache_m5881;
MethodInfo m5881_MI = 
{
	"Reset", (methodPointerType)&m5881, &t1188_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &t1188__CustomAttributeCache_m5881, 454, 0, 17, 0, false, false, 4310, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1188_MIs[] =
{
	&m10393_MI,
	&m7048_MI,
	&m5867_MI,
	&m10394_MI,
	&m6084_MI,
	&m6083_MI,
	&m10395_MI,
	&m5891_MI,
	&m6085_MI,
	&m5865_MI,
	&m6086_MI,
	&m6087_MI,
	&m6082_MI,
	&m6088_MI,
	&m6089_MI,
	&m6090_MI,
	&m6091_MI,
	&m10396_MI,
	&m5882_MI,
	&m5885_MI,
	&m5884_MI,
	&m6081_MI,
	&m5879_MI,
	&m5881_MI,
	NULL
};
extern Il2CppType t1656_0_0_1;
FieldInfo t1188_f0_FieldInfo = 
{
	"x509", &t1656_0_0_1, &t1188_TI, offsetof(t1188, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1188_f1_FieldInfo = 
{
	"hideDates", &t124_0_0_1, &t1188_TI, offsetof(t1188, f1), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t1188_f2_FieldInfo = 
{
	"cachedCertificateHash", &t737_0_0_1, &t1188_TI, offsetof(t1188, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1188_f3_FieldInfo = 
{
	"issuer_name", &t2_0_0_1, &t1188_TI, offsetof(t1188, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1188_f4_FieldInfo = 
{
	"subject_name", &t2_0_0_1, &t1188_TI, offsetof(t1188, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1188_FIs[] =
{
	&t1188_f0_FieldInfo,
	&t1188_f1_FieldInfo,
	&t1188_f2_FieldInfo,
	&t1188_f3_FieldInfo,
	&t1188_f4_FieldInfo,
	NULL
};
extern MethodInfo m5885_MI;
static PropertyInfo t1188____Issuer_PropertyInfo = 
{
	&t1188_TI, "Issuer", &m5885_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5884_MI;
static PropertyInfo t1188____Subject_PropertyInfo = 
{
	&t1188_TI, "Subject", &m5884_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1188_PIs[] =
{
	&t1188____Issuer_PropertyInfo,
	&t1188____Subject_PropertyInfo,
	NULL
};
extern MethodInfo m6081_MI;
extern MethodInfo m6082_MI;
extern MethodInfo m10396_MI;
extern MethodInfo m6083_MI;
extern MethodInfo m6084_MI;
extern MethodInfo m5891_MI;
extern MethodInfo m6085_MI;
extern MethodInfo m5865_MI;
extern MethodInfo m6086_MI;
extern MethodInfo m6087_MI;
extern MethodInfo m6088_MI;
extern MethodInfo m6089_MI;
extern MethodInfo m6090_MI;
extern MethodInfo m6091_MI;
extern MethodInfo m5882_MI;
extern MethodInfo m5879_MI;
extern MethodInfo m5881_MI;
static Il2CppMethodReference t1188_VT[] =
{
	&m6081_MI,
	&m646_MI,
	&m6082_MI,
	&m10396_MI,
	&m6083_MI,
	&m6084_MI,
	&m5891_MI,
	&m6085_MI,
	&m5865_MI,
	&m6086_MI,
	&m6087_MI,
	&m6088_MI,
	&m6089_MI,
	&m6090_MI,
	&m6091_MI,
	&m5882_MI,
	&m5879_MI,
	&m5881_MI,
};
static bool t1188_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* t1188_ITIs[] = 
{
	&t630_0_0_0,
	&t1112_0_0_0,
};
static Il2CppInterfaceOffsetPair t1188_IOs[] = 
{
	{ &t630_0_0_0, 4},
	{ &t1112_0_0_0, 5},
};
void t1188_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m7891(tmp, il2cpp_codegen_string_new_wrapper("X509ContentType.SerializedCert isn't supported (anywhere in the class)"), &m7891_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t625_TI;
#include "t625.h"
#include "t625MD.h"
extern MethodInfo m3034_MI;
void t1188_CustomAttributesCacheGenerator_m6088(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t625 * tmp;
		tmp = (t625 *)il2cpp_codegen_object_new (&t625_TI);
		m3034(tmp, il2cpp_codegen_string_new_wrapper("Use the Issuer property."), &m3034_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1188_CustomAttributesCacheGenerator_m6089(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t625 * tmp;
		tmp = (t625 *)il2cpp_codegen_object_new (&t625_TI);
		m3034(tmp, il2cpp_codegen_string_new_wrapper("Use the Subject property."), &m3034_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1188_CustomAttributesCacheGenerator_m6081(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1188_CustomAttributesCacheGenerator_m5879(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t1598 * tmp;
		tmp = (t1598 *)il2cpp_codegen_object_new (&t1598_TI);
		m7891(tmp, il2cpp_codegen_string_new_wrapper("missing KeyStorageFlags support"), &m7891_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t1188_CustomAttributesCacheGenerator_m5881(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1188__CustomAttributeCache = {
2,
NULL,
&t1188_CustomAttributesCacheGenerator
};
CustomAttributesCache t1188__CustomAttributeCache_m6088 = {
1,
NULL,
&t1188_CustomAttributesCacheGenerator_m6088
};
CustomAttributesCache t1188__CustomAttributeCache_m6089 = {
1,
NULL,
&t1188_CustomAttributesCacheGenerator_m6089
};
CustomAttributesCache t1188__CustomAttributeCache_m6081 = {
1,
NULL,
&t1188_CustomAttributesCacheGenerator_m6081
};
CustomAttributesCache t1188__CustomAttributeCache_m5879 = {
2,
NULL,
&t1188_CustomAttributesCacheGenerator_m5879
};
CustomAttributesCache t1188__CustomAttributeCache_m5881 = {
1,
NULL,
&t1188_CustomAttributesCacheGenerator_m5881
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1188_1_0_0;
struct t1188;
extern CustomAttributesCache t1188__CustomAttributeCache;
extern CustomAttributesCache t1188__CustomAttributeCache_m6088;
extern CustomAttributesCache t1188__CustomAttributeCache_m6089;
extern CustomAttributesCache t1188__CustomAttributeCache_m6081;
extern CustomAttributesCache t1188__CustomAttributeCache_m5879;
extern CustomAttributesCache t1188__CustomAttributeCache_m5881;
const Il2CppTypeDefinitionMetadata t1188_DM = 
{
	NULL, NULL, t1188_ITIs, t1188_IOs, &t9_0_0_0, t1188_VT, t1188_VTIGM, NULL};
TypeInfo t1188_TI = 
{
	&g_mscorlib_dll_Image, NULL, "X509Certificate", "System.Security.Cryptography.X509Certificates", t1188_MIs, t1188_PIs, t1188_FIs, NULL, &t1188_TI, NULL, &t1188__CustomAttributeCache, &t1188_0_0_0, &t1188_1_0_0, &t1188_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1188), sizeof (t1188), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 24, 2, 5, 0, 0, 18, 2, 2};
#include "t1235.h"
// Metadata Definition System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
extern TypeInfo t1235_TI;
#include "t1235MD.h"
static MethodInfo* t1235_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1235_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1235_TI, offsetof(t1235, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1235_0_0_32854;
FieldInfo t1235_f2_FieldInfo = 
{
	"DefaultKeySet", &t1235_0_0_32854, &t1235_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1235_0_0_32854;
FieldInfo t1235_f3_FieldInfo = 
{
	"UserKeySet", &t1235_0_0_32854, &t1235_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1235_0_0_32854;
FieldInfo t1235_f4_FieldInfo = 
{
	"MachineKeySet", &t1235_0_0_32854, &t1235_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1235_0_0_32854;
FieldInfo t1235_f5_FieldInfo = 
{
	"Exportable", &t1235_0_0_32854, &t1235_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1235_0_0_32854;
FieldInfo t1235_f6_FieldInfo = 
{
	"UserProtected", &t1235_0_0_32854, &t1235_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1235_0_0_32854;
FieldInfo t1235_f7_FieldInfo = 
{
	"PersistKeySet", &t1235_0_0_32854, &t1235_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1235_FIs[] =
{
	&t1235_f1_FieldInfo,
	&t1235_f2_FieldInfo,
	&t1235_f3_FieldInfo,
	&t1235_f4_FieldInfo,
	&t1235_f5_FieldInfo,
	&t1235_f6_FieldInfo,
	&t1235_f7_FieldInfo,
	NULL
};
static const int32_t t1235_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1235_f2_DefaultValue = 
{
	&t1235_f2_FieldInfo, { (char*)&t1235_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1235_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1235_f3_DefaultValue = 
{
	&t1235_f3_FieldInfo, { (char*)&t1235_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1235_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1235_f4_DefaultValue = 
{
	&t1235_f4_FieldInfo, { (char*)&t1235_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1235_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1235_f5_DefaultValue = 
{
	&t1235_f5_FieldInfo, { (char*)&t1235_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1235_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1235_f6_DefaultValue = 
{
	&t1235_f6_FieldInfo, { (char*)&t1235_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1235_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1235_f7_DefaultValue = 
{
	&t1235_f7_FieldInfo, { (char*)&t1235_f7_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1235_FDVs[] = 
{
	&t1235_f2_DefaultValue,
	&t1235_f3_DefaultValue,
	&t1235_f4_DefaultValue,
	&t1235_f5_DefaultValue,
	&t1235_f6_DefaultValue,
	&t1235_f7_DefaultValue,
	NULL
};
static Il2CppMethodReference t1235_VT[] =
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
static bool t1235_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1235_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1235_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
CustomAttributesCache t1235__CustomAttributeCache = {
2,
NULL,
&t1235_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1235_1_0_0;
extern CustomAttributesCache t1235__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1235_DM = 
{
	NULL, NULL, NULL, t1235_IOs, &t8_0_0_0, t1235_VT, t1235_VTIGM, NULL};
TypeInfo t1235_TI = 
{
	&g_mscorlib_dll_Image, NULL, "X509KeyStorageFlags", "System.Security.Cryptography.X509Certificates", t1235_MIs, NULL, t1235_FIs, NULL, &t125_TI, NULL, &t1235__CustomAttributeCache, &t1235_0_0_0, &t1235_1_0_0, &t1235_DM, NULL, NULL, NULL, t1235_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1235)+ sizeof (Il2CppObject), sizeof (t1235)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 7, 0, 0, 23, 0, 3};
#include "t1218.h"
// Metadata Definition System.Security.Cryptography.AsymmetricAlgorithm
extern TypeInfo t1218_TI;
#include "t1218MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10397_MI = 
{
	".ctor", (methodPointerType)&m10397, &t1218_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4311, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7094_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m7094, &t1218_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 4312, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5887_MI = 
{
	"get_KeySize", (methodPointerType)&m5887, &t1218_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 5, 0, false, false, 4313, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1218_m6952_ParameterInfos[] = 
{
	{"value", 0, 134222985, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6952_MI = 
{
	"set_KeySize", (methodPointerType)&m6952, &t1218_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1218_m6952_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 6, 1, false, false, 4314, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7079_MI = 
{
	"Clear", (methodPointerType)&m7079, &t1218_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 4315, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1218_m12133_ParameterInfos[] = 
{
	{"disposing", 0, 134222986, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m12133_MI = 
{
	"Dispose", NULL, &t1218_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1218_m12133_ParameterInfos, &EmptyCustomAttributesCache, 1476, 0, 7, 1, false, false, 4316, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1218_m12831_ParameterInfos[] = 
{
	{"xmlString", 0, 134222987, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12831_MI = 
{
	"FromXmlString", NULL, &t1218_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1218_m12831_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, false, 4317, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1218_m12832_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134222988, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m12832_MI = 
{
	"ToXmlString", NULL, &t1218_TI, &t2_0_0_0, RuntimeInvoker_t9_t186, t1218_m12832_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 1, false, false, 4318, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1218_m10398_ParameterInfos[] = 
{
	{"xml", 0, 134222989, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"param", 1, 134222990, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10398_MI = 
{
	"GetNamedParam", (methodPointerType)&m10398, &t1218_TI, &t737_0_0_0, RuntimeInvoker_t9_t9_t9, t1218_m10398_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 4319, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1218_MIs[] =
{
	&m10397_MI,
	&m7094_MI,
	&m5887_MI,
	&m6952_MI,
	&m7079_MI,
	&m12133_MI,
	&m12831_MI,
	&m12832_MI,
	&m10398_MI,
	NULL
};
extern Il2CppType t125_0_0_4;
FieldInfo t1218_f0_FieldInfo = 
{
	"KeySizeValue", &t125_0_0_4, &t1218_TI, offsetof(t1218, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1439_0_0_4;
FieldInfo t1218_f1_FieldInfo = 
{
	"LegalKeySizesValue", &t1439_0_0_4, &t1218_TI, offsetof(t1218, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1218_FIs[] =
{
	&t1218_f0_FieldInfo,
	&t1218_f1_FieldInfo,
	NULL
};
extern MethodInfo m5887_MI;
extern MethodInfo m6952_MI;
static PropertyInfo t1218____KeySize_PropertyInfo = 
{
	&t1218_TI, "KeySize", &m5887_MI, &m6952_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1218_PIs[] =
{
	&t1218____KeySize_PropertyInfo,
	NULL
};
extern MethodInfo m7094_MI;
static Il2CppMethodReference t1218_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7094_MI,
	&m5887_MI,
	&m6952_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1218_VTIGM[] =
{
	false,
	false,
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
static const Il2CppType* t1218_ITIs[] = 
{
	&t137_0_0_0,
};
static Il2CppInterfaceOffsetPair t1218_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1218_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1218__CustomAttributeCache = {
1,
NULL,
&t1218_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1218_0_0_0;
extern Il2CppType t1218_1_0_0;
struct t1218;
extern CustomAttributesCache t1218__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1218_DM = 
{
	NULL, NULL, t1218_ITIs, t1218_IOs, &t9_0_0_0, t1218_VT, t1218_VTIGM, NULL};
TypeInfo t1218_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsymmetricAlgorithm", "System.Security.Cryptography", t1218_MIs, t1218_PIs, t1218_FIs, NULL, &t1218_TI, NULL, &t1218__CustomAttributeCache, &t1218_0_0_0, &t1218_1_0_0, &t1218_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1218), sizeof (t1218), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 9, 1, 2, 0, 0, 10, 1, 1};
#include "t1985.h"
// Metadata Definition System.Security.Cryptography.AsymmetricKeyExchangeFormatter
extern TypeInfo t1985_TI;
#include "t1985MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10399_MI = 
{
	".ctor", (methodPointerType)&m10399, &t1985_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4320, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1985_m12833_ParameterInfos[] = 
{
	{"data", 0, 134222991, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12833_MI = 
{
	"CreateKeyExchange", NULL, &t1985_TI, &t737_0_0_0, RuntimeInvoker_t9_t9, t1985_m12833_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4321, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1985_MIs[] =
{
	&m10399_MI,
	&m12833_MI,
	NULL
};
static Il2CppMethodReference t1985_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
};
static bool t1985_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
};
void t1985_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1985_VT, t1985_VTIGM, NULL};
TypeInfo t1985_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsymmetricKeyExchangeFormatter", "System.Security.Cryptography", t1985_MIs, NULL, NULL, NULL, &t1985_TI, NULL, &t1985__CustomAttributeCache, &t1985_0_0_0, &t1985_1_0_0, &t1985_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1985), sizeof (t1985), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 5, 0, 0};
#include "t1495.h"
// Metadata Definition System.Security.Cryptography.AsymmetricSignatureDeformatter
extern TypeInfo t1495_TI;
#include "t1495MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7044_MI = 
{
	".ctor", (methodPointerType)&m7044, &t1495_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4322, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1495_m12834_ParameterInfos[] = 
{
	{"strName", 0, 134222992, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12834_MI = 
{
	"SetHashAlgorithm", NULL, &t1495_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1495_m12834_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4323, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1218_0_0_0;
static ParameterInfo t1495_m12835_ParameterInfos[] = 
{
	{"key", 0, 134222993, &EmptyCustomAttributesCache, &t1218_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12835_MI = 
{
	"SetKey", NULL, &t1495_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1495_m12835_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 4324, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1495_m12836_ParameterInfos[] = 
{
	{"rgbHash", 0, 134222994, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"rgbSignature", 1, 134222995, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12836_MI = 
{
	"VerifySignature", NULL, &t1495_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1495_m12836_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, false, 4325, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1495_MIs[] =
{
	&m7044_MI,
	&m12834_MI,
	&m12835_MI,
	&m12836_MI,
	NULL
};
static Il2CppMethodReference t1495_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1495_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
void t1495_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1495__CustomAttributeCache = {
1,
NULL,
&t1495_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1495_0_0_0;
extern Il2CppType t1495_1_0_0;
struct t1495;
extern CustomAttributesCache t1495__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1495_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1495_VT, t1495_VTIGM, NULL};
TypeInfo t1495_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsymmetricSignatureDeformatter", "System.Security.Cryptography", t1495_MIs, NULL, NULL, NULL, &t1495_TI, NULL, &t1495__CustomAttributeCache, &t1495_0_0_0, &t1495_1_0_0, &t1495_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1495), sizeof (t1495), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 7, 0, 0};
#include "t1497.h"
// Metadata Definition System.Security.Cryptography.AsymmetricSignatureFormatter
extern TypeInfo t1497_TI;
#include "t1497MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m7045_MI = 
{
	".ctor", (methodPointerType)&m7045, &t1497_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4326, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1497_m12837_ParameterInfos[] = 
{
	{"strName", 0, 134222996, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12837_MI = 
{
	"SetHashAlgorithm", NULL, &t1497_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1497_m12837_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 4327, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1218_0_0_0;
static ParameterInfo t1497_m12838_ParameterInfos[] = 
{
	{"key", 0, 134222997, &EmptyCustomAttributesCache, &t1218_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12838_MI = 
{
	"SetKey", NULL, &t1497_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1497_m12838_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 4328, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1497_m12839_ParameterInfos[] = 
{
	{"rgbHash", 0, 134222998, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12839_MI = 
{
	"CreateSignature", NULL, &t1497_TI, &t737_0_0_0, RuntimeInvoker_t9_t9, t1497_m12839_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, false, 4329, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1497_MIs[] =
{
	&m7045_MI,
	&m12837_MI,
	&m12838_MI,
	&m12839_MI,
	NULL
};
static Il2CppMethodReference t1497_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	NULL,
	NULL,
	NULL,
};
static bool t1497_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
void t1497_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1497__CustomAttributeCache = {
1,
NULL,
&t1497_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1497_0_0_0;
extern Il2CppType t1497_1_0_0;
struct t1497;
extern CustomAttributesCache t1497__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1497_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1497_VT, t1497_VTIGM, NULL};
TypeInfo t1497_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsymmetricSignatureFormatter", "System.Security.Cryptography", t1497_MIs, NULL, NULL, NULL, &t1497_TI, NULL, &t1497__CustomAttributeCache, &t1497_0_0_0, &t1497_1_0_0, &t1497_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1497), sizeof (t1497), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 7, 0, 0};
#include "t1986.h"
// Metadata Definition System.Security.Cryptography.Base64Constants
extern TypeInfo t1986_TI;
#include "t1986MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10400_MI = 
{
	".cctor", (methodPointerType)&m10400, &t1986_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4330, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1986_MIs[] =
{
	&m10400_MI,
	NULL
};
extern Il2CppType t737_0_0_54;
FieldInfo t1986_f0_FieldInfo = 
{
	"EncodeTable", &t737_0_0_54, &t1986_TI, offsetof(t1986_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_54;
FieldInfo t1986_f1_FieldInfo = 
{
	"DecodeTable", &t737_0_0_54, &t1986_TI, offsetof(t1986_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1986_FIs[] =
{
	&t1986_f0_FieldInfo,
	&t1986_f1_FieldInfo,
	NULL
};
static Il2CppMethodReference t1986_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1986_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1986_0_0_0;
extern Il2CppType t1986_1_0_0;
struct t1986;
const Il2CppTypeDefinitionMetadata t1986_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1986_VT, t1986_VTIGM, NULL};
TypeInfo t1986_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Base64Constants", "System.Security.Cryptography", t1986_MIs, NULL, t1986_FIs, NULL, &t1986_TI, NULL, &EmptyCustomAttributesCache, &t1986_0_0_0, &t1986_1_0_0, &t1986_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1986), sizeof (t1986), 0, -1, sizeof(t1986_SFs), 0, -1, 1048960, 0, 0, false, false, false, false, false, false, false, false, true, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t1466.h"
// Metadata Definition System.Security.Cryptography.CipherMode
extern TypeInfo t1466_TI;
#include "t1466MD.h"
static MethodInfo* t1466_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1466_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1466_TI, offsetof(t1466, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1466_0_0_32854;
FieldInfo t1466_f2_FieldInfo = 
{
	"CBC", &t1466_0_0_32854, &t1466_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1466_0_0_32854;
FieldInfo t1466_f3_FieldInfo = 
{
	"ECB", &t1466_0_0_32854, &t1466_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1466_0_0_32854;
FieldInfo t1466_f4_FieldInfo = 
{
	"OFB", &t1466_0_0_32854, &t1466_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1466_0_0_32854;
FieldInfo t1466_f5_FieldInfo = 
{
	"CFB", &t1466_0_0_32854, &t1466_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1466_0_0_32854;
FieldInfo t1466_f6_FieldInfo = 
{
	"CTS", &t1466_0_0_32854, &t1466_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1466_FIs[] =
{
	&t1466_f1_FieldInfo,
	&t1466_f2_FieldInfo,
	&t1466_f3_FieldInfo,
	&t1466_f4_FieldInfo,
	&t1466_f5_FieldInfo,
	&t1466_f6_FieldInfo,
	NULL
};
static const int32_t t1466_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1466_f2_DefaultValue = 
{
	&t1466_f2_FieldInfo, { (char*)&t1466_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1466_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1466_f3_DefaultValue = 
{
	&t1466_f3_FieldInfo, { (char*)&t1466_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1466_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1466_f4_DefaultValue = 
{
	&t1466_f4_FieldInfo, { (char*)&t1466_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1466_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1466_f5_DefaultValue = 
{
	&t1466_f5_FieldInfo, { (char*)&t1466_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1466_f6_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1466_f6_DefaultValue = 
{
	&t1466_f6_FieldInfo, { (char*)&t1466_f6_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1466_FDVs[] = 
{
	&t1466_f2_DefaultValue,
	&t1466_f3_DefaultValue,
	&t1466_f4_DefaultValue,
	&t1466_f5_DefaultValue,
	&t1466_f6_DefaultValue,
	NULL
};
static Il2CppMethodReference t1466_VT[] =
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
static bool t1466_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1466_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1466_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1466__CustomAttributeCache = {
1,
NULL,
&t1466_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1466_0_0_0;
extern Il2CppType t1466_1_0_0;
extern CustomAttributesCache t1466__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1466_DM = 
{
	NULL, NULL, NULL, t1466_IOs, &t8_0_0_0, t1466_VT, t1466_VTIGM, NULL};
TypeInfo t1466_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CipherMode", "System.Security.Cryptography", t1466_MIs, NULL, t1466_FIs, NULL, &t125_TI, NULL, &t1466__CustomAttributeCache, &t1466_0_0_0, &t1466_1_0_0, &t1466_DM, NULL, NULL, NULL, t1466_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1466)+ sizeof (Il2CppObject), sizeof (t1466)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1366.h"
// Metadata Definition System.Security.Cryptography.CryptoConfig
extern TypeInfo t1366_TI;
#include "t1366MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10401_MI = 
{
	".cctor", (methodPointerType)&m10401, &t1366_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4331, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10402_MI = 
{
	"Initialize", (methodPointerType)&m10402, &t1366_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 145, 0, 255, 0, false, false, 4332, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1366_m5888_ParameterInfos[] = 
{
	{"name", 0, 134222999, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5888_MI = 
{
	"CreateFromName", (methodPointerType)&m5888, &t1366_TI, &t9_0_0_0, RuntimeInvoker_t9_t9, t1366_m5888_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4333, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t158_0_0_0;
extern CustomAttributesCache t1366__CustomAttributeCache_t1366_m5925_Arg1_ParameterInfo;
static ParameterInfo t1366_m5925_ParameterInfos[] = 
{
	{"name", 0, 134223000, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"args", 1, 134223001, &t1366__CustomAttributeCache_t1366_m5925_Arg1_ParameterInfo, &t158_0_0_0},
};
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5925_MI = 
{
	"CreateFromName", (methodPointerType)&m5925, &t1366_TI, &t9_0_0_0, RuntimeInvoker_t9_t9_t9, t1366_m5925_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 4334, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1366_m6944_ParameterInfos[] = 
{
	{"name", 0, 134223002, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6944_MI = 
{
	"MapNameToOID", (methodPointerType)&m6944, &t1366_TI, &t2_0_0_0, RuntimeInvoker_t9_t9, t1366_m6944_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4335, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1366_m5892_ParameterInfos[] = 
{
	{"str", 0, 134223003, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5892_MI = 
{
	"EncodeOID", (methodPointerType)&m5892, &t1366_TI, &t737_0_0_0, RuntimeInvoker_t9_t9, t1366_m5892_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4336, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t1366_m10403_ParameterInfos[] = 
{
	{"x", 0, 134223004, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t303 (MethodInfo* method, void* obj, void** args);
MethodInfo m10403_MI = 
{
	"EncodeLongNumber", (methodPointerType)&m10403, &t1366_TI, &t737_0_0_0, RuntimeInvoker_t9_t303, t1366_m10403_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4337, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1366_MIs[] =
{
	&m10401_MI,
	&m10402_MI,
	&m5888_MI,
	&m5925_MI,
	&m6944_MI,
	&m5892_MI,
	&m10403_MI,
	NULL
};
extern Il2CppType t9_0_0_17;
FieldInfo t1366_f0_FieldInfo = 
{
	"lockObject", &t9_0_0_17, &t1366_TI, offsetof(t1366_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_17;
FieldInfo t1366_f1_FieldInfo = 
{
	"algorithms", &t1164_0_0_17, &t1366_TI, offsetof(t1366_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1164_0_0_17;
FieldInfo t1366_f2_FieldInfo = 
{
	"oid", &t1164_0_0_17, &t1366_TI, offsetof(t1366_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1366_FIs[] =
{
	&t1366_f0_FieldInfo,
	&t1366_f1_FieldInfo,
	&t1366_f2_FieldInfo,
	NULL
};
static Il2CppMethodReference t1366_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1366_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1366_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void t1366_CustomAttributesCacheGenerator_t1366_m5925_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t344 * tmp;
		tmp = (t344 *)il2cpp_codegen_object_new (&t344_TI);
		m1268(tmp, &m1268_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1366__CustomAttributeCache = {
1,
NULL,
&t1366_CustomAttributesCacheGenerator
};
CustomAttributesCache t1366__CustomAttributeCache_t1366_m5925_Arg1_ParameterInfo = {
1,
NULL,
&t1366_CustomAttributesCacheGenerator_t1366_m5925_Arg1_ParameterInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1366_0_0_0;
extern Il2CppType t1366_1_0_0;
struct t1366;
extern CustomAttributesCache t1366__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1366_DM = 
{
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1366_VT, t1366_VTIGM, NULL};
TypeInfo t1366_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CryptoConfig", "System.Security.Cryptography", t1366_MIs, NULL, t1366_FIs, NULL, &t1366_TI, NULL, &t1366__CustomAttributeCache, &t1366_0_0_0, &t1366_1_0_0, &t1366_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1366), sizeof (t1366), 0, -1, sizeof(t1366_SFs), 0, -1, 1, 0, 0, false, false, false, false, false, false, false, false, true, false, 7, 0, 3, 0, 0, 4, 0, 0};
#include "t1359.h"
// Metadata Definition System.Security.Cryptography.CryptographicException
extern TypeInfo t1359_TI;
#include "t1359MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10404_MI = 
{
	".ctor", (methodPointerType)&m10404, &t1359_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4338, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1359_m5837_ParameterInfos[] = 
{
	{"message", 0, 134223005, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5837_MI = 
{
	".ctor", (methodPointerType)&m5837, &t1359_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1359_m5837_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4339, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t138_0_0_0;
extern Il2CppType t138_0_0_0;
static ParameterInfo t1359_m5841_ParameterInfos[] = 
{
	{"message", 0, 134223006, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"inner", 1, 134223007, &EmptyCustomAttributesCache, &t138_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5841_MI = 
{
	".ctor", (methodPointerType)&m5841, &t1359_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1359_m5841_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4340, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1359_m10405_ParameterInfos[] = 
{
	{"format", 0, 134223008, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"insert", 1, 134223009, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10405_MI = 
{
	".ctor", (methodPointerType)&m10405, &t1359_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1359_m10405_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4341, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1359_m10406_ParameterInfos[] = 
{
	{"info", 0, 134223010, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134223011, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10406_MI = 
{
	".ctor", (methodPointerType)&m10406, &t1359_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1359_m10406_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 4342, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1359_MIs[] =
{
	&m10404_MI,
	&m5837_MI,
	&m5841_MI,
	&m10405_MI,
	&m10406_MI,
	NULL
};
static Il2CppMethodReference t1359_VT[] =
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
};
static const Il2CppType* t1359_ITIs[] = 
{
	&t954_0_0_0,
};
static Il2CppInterfaceOffsetPair t1359_IOs[] = 
{
	{ &t630_0_0_0, 4},
	{ &t954_0_0_0, 5},
};
void t1359_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
struct t1359;
extern CustomAttributesCache t1359__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1359_DM = 
{
	NULL, NULL, t1359_ITIs, t1359_IOs, &t1375_0_0_0, t1359_VT, t1359_VTIGM, NULL};
TypeInfo t1359_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CryptographicException", "System.Security.Cryptography", t1359_MIs, NULL, NULL, NULL, &t1359_TI, NULL, &t1359__CustomAttributeCache, &t1359_0_0_0, &t1359_1_0_0, &t1359_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1359), sizeof (t1359), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 11, 1, 2};
#include "t1367.h"
// Metadata Definition System.Security.Cryptography.CryptographicUnexpectedOperationException
extern TypeInfo t1367_TI;
#include "t1367MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10407_MI = 
{
	".ctor", (methodPointerType)&m10407, &t1367_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4343, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1367_m6998_ParameterInfos[] = 
{
	{"message", 0, 134223012, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6998_MI = 
{
	".ctor", (methodPointerType)&m6998, &t1367_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1367_m6998_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4344, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1367_m10408_ParameterInfos[] = 
{
	{"info", 0, 134223013, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"context", 1, 134223014, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10408_MI = 
{
	".ctor", (methodPointerType)&m10408, &t1367_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t1107, t1367_m10408_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 4345, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1367_MIs[] =
{
	&m10407_MI,
	&m6998_MI,
	&m10408_MI,
	NULL
};
static Il2CppMethodReference t1367_VT[] =
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
static bool t1367_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1367_IOs[] = 
{
	{ &t954_0_0_0, 5},
	{ &t630_0_0_0, 4},
};
void t1367_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1367__CustomAttributeCache = {
1,
NULL,
&t1367_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1367_0_0_0;
extern Il2CppType t1367_1_0_0;
struct t1367;
extern CustomAttributesCache t1367__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1367_DM = 
{
	NULL, NULL, NULL, t1367_IOs, &t1359_0_0_0, t1367_VT, t1367_VTIGM, NULL};
TypeInfo t1367_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CryptographicUnexpectedOperationException", "System.Security.Cryptography", t1367_MIs, NULL, NULL, NULL, &t1367_TI, NULL, &t1367__CustomAttributeCache, &t1367_0_0_0, &t1367_1_0_0, &t1367_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1367), sizeof (t1367), 0, -1, 0, 0, -1, 1056769, 0, 0, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1533.h"
// Metadata Definition System.Security.Cryptography.CspParameters
extern TypeInfo t1533_TI;
#include "t1533MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m6946_MI = 
{
	".ctor", (methodPointerType)&m6946, &t1533_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4346, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1533_m10409_ParameterInfos[] = 
{
	{"dwTypeIn", 0, 134223015, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10409_MI = 
{
	".ctor", (methodPointerType)&m10409, &t1533_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1533_m10409_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4347, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1533_m10410_ParameterInfos[] = 
{
	{"dwTypeIn", 0, 134223016, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"strProviderNameIn", 1, 134223017, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10410_MI = 
{
	".ctor", (methodPointerType)&m10410, &t1533_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9, t1533_m10410_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4348, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1533_m10411_ParameterInfos[] = 
{
	{"dwTypeIn", 0, 134223018, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"strProviderNameIn", 1, 134223019, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"strContainerNameIn", 2, 134223020, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10411_MI = 
{
	".ctor", (methodPointerType)&m10411, &t1533_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9_t9, t1533_m10411_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 4349, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1534_0_0_0;
extern void* RuntimeInvoker_t1534 (MethodInfo* method, void* obj, void** args);
MethodInfo m10412_MI = 
{
	"get_Flags", (methodPointerType)&m10412, &t1533_TI, &t1534_0_0_0, RuntimeInvoker_t1534, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4350, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1534_0_0_0;
extern Il2CppType t1534_0_0_0;
static ParameterInfo t1533_m6947_ParameterInfos[] = 
{
	{"value", 0, 134223021, &EmptyCustomAttributesCache, &t1534_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6947_MI = 
{
	"set_Flags", (methodPointerType)&m6947, &t1533_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1533_m6947_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4351, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1533_MIs[] =
{
	&m6946_MI,
	&m10409_MI,
	&m10410_MI,
	&m10411_MI,
	&m10412_MI,
	&m6947_MI,
	NULL
};
extern Il2CppType t1534_0_0_1;
FieldInfo t1533_f0_FieldInfo = 
{
	"_Flags", &t1534_0_0_1, &t1533_TI, offsetof(t1533, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1533_f1_FieldInfo = 
{
	"KeyContainerName", &t2_0_0_6, &t1533_TI, offsetof(t1533, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1533_f2_FieldInfo = 
{
	"KeyNumber", &t125_0_0_6, &t1533_TI, offsetof(t1533, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1533_f3_FieldInfo = 
{
	"ProviderName", &t2_0_0_6, &t1533_TI, offsetof(t1533, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1533_f4_FieldInfo = 
{
	"ProviderType", &t125_0_0_6, &t1533_TI, offsetof(t1533, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1533_FIs[] =
{
	&t1533_f0_FieldInfo,
	&t1533_f1_FieldInfo,
	&t1533_f2_FieldInfo,
	&t1533_f3_FieldInfo,
	&t1533_f4_FieldInfo,
	NULL
};
extern MethodInfo m10412_MI;
extern MethodInfo m6947_MI;
static PropertyInfo t1533____Flags_PropertyInfo = 
{
	&t1533_TI, "Flags", &m10412_MI, &m6947_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1533_PIs[] =
{
	&t1533____Flags_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1533_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
};
static bool t1533_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1533_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, NULL, &t9_0_0_0, t1533_VT, t1533_VTIGM, NULL};
TypeInfo t1533_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CspParameters", "System.Security.Cryptography", t1533_MIs, t1533_PIs, t1533_FIs, NULL, &t1533_TI, NULL, &t1533__CustomAttributeCache, &t1533_0_0_0, &t1533_1_0_0, &t1533_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1533), sizeof (t1533), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, false, false, false, 6, 1, 5, 0, 0, 4, 0, 0};
#include "t1534.h"
// Metadata Definition System.Security.Cryptography.CspProviderFlags
extern TypeInfo t1534_TI;
#include "t1534MD.h"
static MethodInfo* t1534_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_1542;
FieldInfo t1534_f1_FieldInfo = 
{
	"value__", &t125_0_0_1542, &t1534_TI, offsetof(t1534, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t1534_0_0_32854;
FieldInfo t1534_f2_FieldInfo = 
{
	"UseMachineKeyStore", &t1534_0_0_32854, &t1534_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1534_0_0_32854;
FieldInfo t1534_f3_FieldInfo = 
{
	"UseDefaultKeyContainer", &t1534_0_0_32854, &t1534_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1534_0_0_32854;
FieldInfo t1534_f4_FieldInfo = 
{
	"UseExistingKey", &t1534_0_0_32854, &t1534_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1534_0_0_32854;
FieldInfo t1534_f5_FieldInfo = 
{
	"NoFlags", &t1534_0_0_32854, &t1534_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1534_0_0_32854;
FieldInfo t1534_f6_FieldInfo = 
{
	"NoPrompt", &t1534_0_0_32854, &t1534_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1534_0_0_32854;
FieldInfo t1534_f7_FieldInfo = 
{
	"UseArchivableKey", &t1534_0_0_32854, &t1534_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1534_0_0_32854;
FieldInfo t1534_f8_FieldInfo = 
{
	"UseNonExportableKey", &t1534_0_0_32854, &t1534_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1534_0_0_32854;
FieldInfo t1534_f9_FieldInfo = 
{
	"UseUserProtectedKey", &t1534_0_0_32854, &t1534_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1534_FIs[] =
{
	&t1534_f1_FieldInfo,
	&t1534_f2_FieldInfo,
	&t1534_f3_FieldInfo,
	&t1534_f4_FieldInfo,
	&t1534_f5_FieldInfo,
	&t1534_f6_FieldInfo,
	&t1534_f7_FieldInfo,
	&t1534_f8_FieldInfo,
	&t1534_f9_FieldInfo,
	NULL
};
static const int32_t t1534_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1534_f2_DefaultValue = 
{
	&t1534_f2_FieldInfo, { (char*)&t1534_f2_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1534_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1534_f3_DefaultValue = 
{
	&t1534_f3_FieldInfo, { (char*)&t1534_f3_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1534_f4_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1534_f4_DefaultValue = 
{
	&t1534_f4_FieldInfo, { (char*)&t1534_f4_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1534_f5_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1534_f5_DefaultValue = 
{
	&t1534_f5_FieldInfo, { (char*)&t1534_f5_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1534_f6_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1534_f6_DefaultValue = 
{
	&t1534_f6_FieldInfo, { (char*)&t1534_f6_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1534_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1534_f7_DefaultValue = 
{
	&t1534_f7_FieldInfo, { (char*)&t1534_f7_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1534_f8_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1534_f8_DefaultValue = 
{
	&t1534_f8_FieldInfo, { (char*)&t1534_f8_DefaultValueData, &t125_0_0_0 }};
static const int32_t t1534_f9_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1534_f9_DefaultValue = 
{
	&t1534_f9_FieldInfo, { (char*)&t1534_f9_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1534_FDVs[] = 
{
	&t1534_f2_DefaultValue,
	&t1534_f3_DefaultValue,
	&t1534_f4_DefaultValue,
	&t1534_f5_DefaultValue,
	&t1534_f6_DefaultValue,
	&t1534_f7_DefaultValue,
	&t1534_f8_DefaultValue,
	&t1534_f9_DefaultValue,
	NULL
};
static Il2CppMethodReference t1534_VT[] =
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
};
static Il2CppInterfaceOffsetPair t1534_IOs[] = 
{
	{ &t183_0_0_0, 4},
	{ &t184_0_0_0, 5},
	{ &t185_0_0_0, 21},
};
void t1534_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
CustomAttributesCache t1534__CustomAttributeCache = {
2,
NULL,
&t1534_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1534_1_0_0;
extern CustomAttributesCache t1534__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1534_DM = 
{
	NULL, NULL, NULL, t1534_IOs, &t8_0_0_0, t1534_VT, t1534_VTIGM, NULL};
TypeInfo t1534_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CspProviderFlags", "System.Security.Cryptography", t1534_MIs, NULL, t1534_FIs, NULL, &t125_TI, NULL, &t1534__CustomAttributeCache, &t1534_0_0_0, &t1534_1_0_0, &t1534_DM, NULL, NULL, NULL, t1534_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1534)+ sizeof (Il2CppObject), sizeof (t1534)+ sizeof (Il2CppObject), 0, sizeof(int32_t), 0, 0, -1, 8449, 0, 0, true, false, true, false, false, false, false, false, false, false, 0, 0, 9, 0, 0, 23, 0, 3};
#include "t1546.h"
// Metadata Definition System.Security.Cryptography.DES
extern TypeInfo t1546_TI;
#include "t1546MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10413_MI = 
{
	".ctor", (methodPointerType)&m10413, &t1546_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4352, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10414_MI = 
{
	".cctor", (methodPointerType)&m10414, &t1546_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4353, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1546_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m7000_MI = 
{
	"Create", (methodPointerType)&m7000, &t1546_TI, &t1546_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4354, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1546_m10415_ParameterInfos[] = 
{
	{"algName", 0, 134223022, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1546_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10415_MI = 
{
	"Create", (methodPointerType)&m10415, &t1546_TI, &t1546_0_0_0, RuntimeInvoker_t9_t9, t1546_m10415_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4355, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1546_m10416_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223023, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10416_MI = 
{
	"IsWeakKey", (methodPointerType)&m10416, &t1546_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1546_m10416_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4356, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1546_m10417_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223024, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10417_MI = 
{
	"IsSemiWeakKey", (methodPointerType)&m10417, &t1546_TI, &t124_0_0_0, RuntimeInvoker_t124_t9, t1546_m10417_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4357, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10418_MI = 
{
	"get_Key", (methodPointerType)&m10418, &t1546_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 11, 0, false, false, 4358, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1546_m10419_ParameterInfos[] = 
{
	{"value", 0, 134223025, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10419_MI = 
{
	"set_Key", (methodPointerType)&m10419, &t1546_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1546_m10419_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 12, 1, false, false, 4359, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1546_MIs[] =
{
	&m10413_MI,
	&m10414_MI,
	&m7000_MI,
	&m10415_MI,
	&m10416_MI,
	&m10417_MI,
	&m10418_MI,
	&m10419_MI,
	NULL
};
extern Il2CppType t1987_0_0_51;
FieldInfo t1546_f10_FieldInfo = 
{
	"weakKeys", &t1987_0_0_51, &t1546_TI, offsetof(t1546_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1987_0_0_51;
FieldInfo t1546_f11_FieldInfo = 
{
	"semiWeakKeys", &t1987_0_0_51, &t1546_TI, offsetof(t1546_SFs, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1546_FIs[] =
{
	&t1546_f10_FieldInfo,
	&t1546_f11_FieldInfo,
	NULL
};
extern MethodInfo m10418_MI;
extern MethodInfo m10419_MI;
static PropertyInfo t1546____Key_PropertyInfo = 
{
	&t1546_TI, "Key", &m10418_MI, &m10419_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1546_PIs[] =
{
	&t1546____Key_PropertyInfo,
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
extern MethodInfo m7085_MI;
extern MethodInfo m7005_MI;
extern MethodInfo m7086_MI;
extern MethodInfo m7087_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m7088_MI;
extern MethodInfo m7004_MI;
extern MethodInfo m6967_MI;
extern MethodInfo m6938_MI;
static Il2CppMethodReference t1546_VT[] =
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
	&m10418_MI,
	&m10419_MI,
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
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1546_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1546_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
extern Il2CppType t1440_0_0_0;
struct t1546;
extern CustomAttributesCache t1546__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1546_DM = 
{
	NULL, NULL, NULL, t1546_IOs, &t1440_0_0_0, t1546_VT, t1546_VTIGM, NULL};
TypeInfo t1546_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DES", "System.Security.Cryptography", t1546_MIs, t1546_PIs, t1546_FIs, NULL, &t1546_TI, NULL, &t1546__CustomAttributeCache, &t1546_0_0_0, &t1546_1_0_0, &t1546_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1546), sizeof (t1546), 0, -1, sizeof(t1546_SFs), 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, true, false, 8, 1, 2, 0, 0, 26, 0, 1};
#include "t1988.h"
// Metadata Definition System.Security.Cryptography.DESTransform
extern TypeInfo t1988_TI;
#include "t1988MD.h"
extern Il2CppType t1440_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1988_m10420_ParameterInfos[] = 
{
	{"symmAlgo", 0, 134223026, &EmptyCustomAttributesCache, &t1440_0_0_0},
	{"encryption", 1, 134223027, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"key", 2, 134223028, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"iv", 3, 134223029, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t186_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10420_MI = 
{
	".ctor", (methodPointerType)&m10420, &t1988_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t186_t9_t9, t1988_m10420_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 4360, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10421_MI = 
{
	".cctor", (methodPointerType)&m10421, &t1988_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4361, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1988_m10422_ParameterInfos[] = 
{
	{"r", 0, 134223030, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"n", 1, 134223031, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t168_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10422_MI = 
{
	"CipherFunct", (methodPointerType)&m10422, &t1988_TI, &t168_0_0_0, RuntimeInvoker_t168_t125_t125, t1988_m10422_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4362, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
extern Il2CppType t1418_0_0_0;
extern Il2CppType t1418_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1988_m10423_ParameterInfos[] = 
{
	{"input", 0, 134223032, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"output", 1, 134223033, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"permTab", 2, 134223034, &EmptyCustomAttributesCache, &t1418_0_0_0},
	{"preSwap", 3, 134223035, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10423_MI = 
{
	"Permutation", (methodPointerType)&m10423, &t1988_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9_t9_t186, t1988_m10423_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 4, false, false, 4363, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1988_m10424_ParameterInfos[] = 
{
	{"byteBuff", 0, 134223036, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10424_MI = 
{
	"BSwap", (methodPointerType)&m10424, &t1988_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1988_m10424_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 4364, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1988_m10425_ParameterInfos[] = 
{
	{"key", 0, 134223037, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10425_MI = 
{
	"SetKey", (methodPointerType)&m10425, &t1988_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1988_m10425_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4365, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1988_m10426_ParameterInfos[] = 
{
	{"input", 0, 134223038, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"output", 1, 134223039, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10426_MI = 
{
	"ProcessBlock", (methodPointerType)&m10426, &t1988_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1988_m10426_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 4366, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1988_m10427_ParameterInfos[] = 
{
	{"input", 0, 134223040, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"output", 1, 134223041, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10427_MI = 
{
	"ECB", (methodPointerType)&m10427, &t1988_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1988_m10427_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 2, false, false, 4367, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10428_MI = 
{
	"GetStrongKey", (methodPointerType)&m10428, &t1988_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 4368, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1988_MIs[] =
{
	&m10420_MI,
	&m10421_MI,
	&m10422_MI,
	&m10423_MI,
	&m10424_MI,
	&m10425_MI,
	&m10426_MI,
	&m10427_MI,
	&m10428_MI,
	NULL
};
extern Il2CppType t125_0_0_51;
FieldInfo t1988_f12_FieldInfo = 
{
	"KEY_BIT_SIZE", &t125_0_0_51, &t1988_TI, offsetof(t1988_SFs, f12), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_51;
FieldInfo t1988_f13_FieldInfo = 
{
	"KEY_BYTE_SIZE", &t125_0_0_51, &t1988_TI, offsetof(t1988_SFs, f13), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_51;
FieldInfo t1988_f14_FieldInfo = 
{
	"BLOCK_BIT_SIZE", &t125_0_0_51, &t1988_TI, offsetof(t1988_SFs, f14), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_51;
FieldInfo t1988_f15_FieldInfo = 
{
	"BLOCK_BYTE_SIZE", &t125_0_0_51, &t1988_TI, offsetof(t1988_SFs, f15), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t1988_f16_FieldInfo = 
{
	"keySchedule", &t737_0_0_1, &t1988_TI, offsetof(t1988, f16), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_1;
FieldInfo t1988_f17_FieldInfo = 
{
	"byteBuff", &t737_0_0_1, &t1988_TI, offsetof(t1988, f17), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_1;
FieldInfo t1988_f18_FieldInfo = 
{
	"dwordBuff", &t1418_0_0_1, &t1988_TI, offsetof(t1988, f18), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_49;
FieldInfo t1988_f19_FieldInfo = 
{
	"spBoxes", &t1418_0_0_49, &t1988_TI, offsetof(t1988_SFs, f19), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_49;
FieldInfo t1988_f20_FieldInfo = 
{
	"PC1", &t737_0_0_49, &t1988_TI, offsetof(t1988_SFs, f20), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_49;
FieldInfo t1988_f21_FieldInfo = 
{
	"leftRotTotal", &t737_0_0_49, &t1988_TI, offsetof(t1988_SFs, f21), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_49;
FieldInfo t1988_f22_FieldInfo = 
{
	"PC2", &t737_0_0_49, &t1988_TI, offsetof(t1988_SFs, f22), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_51;
FieldInfo t1988_f23_FieldInfo = 
{
	"ipTab", &t1418_0_0_51, &t1988_TI, offsetof(t1988_SFs, f23), &EmptyCustomAttributesCache};
extern Il2CppType t1418_0_0_51;
FieldInfo t1988_f24_FieldInfo = 
{
	"fpTab", &t1418_0_0_51, &t1988_TI, offsetof(t1988_SFs, f24), &EmptyCustomAttributesCache};
static FieldInfo* t1988_FIs[] =
{
	&t1988_f12_FieldInfo,
	&t1988_f13_FieldInfo,
	&t1988_f14_FieldInfo,
	&t1988_f15_FieldInfo,
	&t1988_f16_FieldInfo,
	&t1988_f17_FieldInfo,
	&t1988_f18_FieldInfo,
	&t1988_f19_FieldInfo,
	&t1988_f20_FieldInfo,
	&t1988_f21_FieldInfo,
	&t1988_f22_FieldInfo,
	&t1988_f23_FieldInfo,
	&t1988_f24_FieldInfo,
	NULL
};
extern MethodInfo m8210_MI;
extern MethodInfo m8209_MI;
extern MethodInfo m8212_MI;
extern MethodInfo m8219_MI;
extern MethodInfo m8226_MI;
extern MethodInfo m8211_MI;
extern MethodInfo m8213_MI;
extern MethodInfo m10427_MI;
extern MethodInfo m8214_MI;
extern MethodInfo m8215_MI;
extern MethodInfo m8216_MI;
extern MethodInfo m8217_MI;
static Il2CppMethodReference t1988_VT[] =
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
	&m10427_MI,
	&m8214_MI,
	&m8215_MI,
	&m8216_MI,
	&m8217_MI,
	&m8219_MI,
	&m8226_MI,
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
	false,
};
extern Il2CppType t1431_0_0_0;
static Il2CppInterfaceOffsetPair t1988_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1988_0_0_0;
extern Il2CppType t1988_1_0_0;
extern Il2CppType t1648_0_0_0;
struct t1988;
const Il2CppTypeDefinitionMetadata t1988_DM = 
{
	NULL, NULL, NULL, t1988_IOs, &t1648_0_0_0, t1988_VT, t1988_VTIGM, NULL};
TypeInfo t1988_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DESTransform", "System.Security.Cryptography", t1988_MIs, NULL, t1988_FIs, NULL, &t1988_TI, NULL, &EmptyCustomAttributesCache, &t1988_0_0_0, &t1988_1_0_0, &t1988_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1988), sizeof (t1988), 0, -1, sizeof(t1988_SFs), 0, -1, 1048576, 0, 0, false, false, false, false, false, false, false, true, true, false, 9, 0, 13, 0, 0, 18, 0, 2};
#include "t1989.h"
// Metadata Definition System.Security.Cryptography.DESCryptoServiceProvider
extern TypeInfo t1989_TI;
#include "t1989MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10429_MI = 
{
	".ctor", (methodPointerType)&m10429, &t1989_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4369, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1989_m10430_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223042, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"rgbIV", 1, 134223043, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t1431_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10430_MI = 
{
	"CreateDecryptor", (methodPointerType)&m10430, &t1989_TI, &t1431_0_0_0, RuntimeInvoker_t9_t9_t9, t1989_m10430_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 21, 2, false, false, 4370, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1989_m10431_ParameterInfos[] = 
{
	{"rgbKey", 0, 134223044, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"rgbIV", 1, 134223045, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t1431_0_0_0;
extern void* RuntimeInvoker_t9_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10431_MI = 
{
	"CreateEncryptor", (methodPointerType)&m10431, &t1989_TI, &t1431_0_0_0, RuntimeInvoker_t9_t9_t9, t1989_m10431_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 2, false, false, 4371, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10432_MI = 
{
	"GenerateIV", (methodPointerType)&m10432, &t1989_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 24, 0, false, false, 4372, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10433_MI = 
{
	"GenerateKey", (methodPointerType)&m10433, &t1989_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 25, 0, false, false, 4373, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1989_MIs[] =
{
	&m10429_MI,
	&m10430_MI,
	&m10431_MI,
	&m10432_MI,
	&m10433_MI,
	NULL
};
extern MethodInfo m10430_MI;
extern MethodInfo m10431_MI;
extern MethodInfo m10432_MI;
extern MethodInfo m10433_MI;
static Il2CppMethodReference t1989_VT[] =
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
	&m10418_MI,
	&m10419_MI,
	&m7085_MI,
	&m7005_MI,
	&m7086_MI,
	&m7087_MI,
	&m6966_MI,
	&m7088_MI,
	&m7004_MI,
	&m6967_MI,
	&m10430_MI,
	&m6938_MI,
	&m10431_MI,
	&m10432_MI,
	&m10433_MI,
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
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t1989_IOs, &t1546_0_0_0, t1989_VT, t1989_VTIGM, NULL};
TypeInfo t1989_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DESCryptoServiceProvider", "System.Security.Cryptography", t1989_MIs, NULL, NULL, NULL, &t1989_TI, NULL, &t1989__CustomAttributeCache, &t1989_0_0_0, &t1989_1_0_0, &t1989_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1989), sizeof (t1989), 0, -1, 0, 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, false, false, 5, 0, 0, 0, 0, 26, 0, 1};
#include "t1222.h"
// Metadata Definition System.Security.Cryptography.DSA
extern TypeInfo t1222_TI;
#include "t1222MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10434_MI = 
{
	".ctor", (methodPointerType)&m10434, &t1222_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4374, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1222_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m5830_MI = 
{
	"Create", (methodPointerType)&m5830, &t1222_TI, &t1222_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4375, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1222_m10435_ParameterInfos[] = 
{
	{"algName", 0, 134223046, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1222_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10435_MI = 
{
	"Create", (methodPointerType)&m10435, &t1222_TI, &t1222_0_0_0, RuntimeInvoker_t9_t9, t1222_m10435_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4376, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1222_m12138_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223047, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12138_MI = 
{
	"CreateSignature", NULL, &t1222_TI, &t737_0_0_0, RuntimeInvoker_t9_t9, t1222_m12138_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 10, 1, false, false, 4377, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1222_m5829_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223048, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1358_0_0_0;
extern void* RuntimeInvoker_t1358_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m5829_MI = 
{
	"ExportParameters", NULL, &t1222_TI, &t1358_0_0_0, RuntimeInvoker_t1358_t186, t1222_m5829_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 11, 1, false, false, 4378, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1358_0_0_0;
extern Il2CppType t1358_0_0_0;
static ParameterInfo t1222_m10436_ParameterInfos[] = 
{
	{"parameters", 0, 134223049, &EmptyCustomAttributesCache, &t1358_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1358 (MethodInfo* method, void* obj, void** args);
MethodInfo m10436_MI = 
{
	"ZeroizePrivateKey", (methodPointerType)&m10436, &t1222_TI, &t122_0_0_0, RuntimeInvoker_t122_t1358, t1222_m10436_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 4379, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1222_m10437_ParameterInfos[] = 
{
	{"xmlString", 0, 134223050, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10437_MI = 
{
	"FromXmlString", (methodPointerType)&m10437, &t1222_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1222_m10437_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 4380, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1358_0_0_0;
static ParameterInfo t1222_m5831_ParameterInfos[] = 
{
	{"parameters", 0, 134223051, &EmptyCustomAttributesCache, &t1358_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1358 (MethodInfo* method, void* obj, void** args);
MethodInfo m5831_MI = 
{
	"ImportParameters", NULL, &t1222_TI, &t122_0_0_0, RuntimeInvoker_t122_t1358, t1222_m5831_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 12, 1, false, false, 4381, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1222_m10438_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223052, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10438_MI = 
{
	"ToXmlString", (methodPointerType)&m10438, &t1222_TI, &t2_0_0_0, RuntimeInvoker_t9_t186, t1222_m10438_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 4382, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1222_m12137_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223053, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"rgbSignature", 1, 134223054, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m12137_MI = 
{
	"VerifySignature", NULL, &t1222_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1222_m12137_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 13, 2, false, false, 4383, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1222_MIs[] =
{
	&m10434_MI,
	&m5830_MI,
	&m10435_MI,
	&m12138_MI,
	&m5829_MI,
	&m10436_MI,
	&m10437_MI,
	&m5831_MI,
	&m10438_MI,
	&m12137_MI,
	NULL
};
extern MethodInfo m10437_MI;
extern MethodInfo m10438_MI;
static Il2CppMethodReference t1222_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m7094_MI,
	&m5887_MI,
	&m6952_MI,
	NULL,
	&m10437_MI,
	&m10438_MI,
	NULL,
	NULL,
	NULL,
	NULL,
};
static bool t1222_VTIGM[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1222_IOs[] = 
{
	{ &t137_0_0_0, 4},
};
void t1222_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1222__CustomAttributeCache = {
1,
NULL,
&t1222_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1222_0_0_0;
extern Il2CppType t1222_1_0_0;
struct t1222;
extern CustomAttributesCache t1222__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1222_DM = 
{
	NULL, NULL, NULL, t1222_IOs, &t1218_0_0_0, t1222_VT, t1222_VTIGM, NULL};
TypeInfo t1222_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSA", "System.Security.Cryptography", t1222_MIs, NULL, NULL, NULL, &t1222_TI, NULL, &t1222__CustomAttributeCache, &t1222_0_0_0, &t1222_1_0_0, &t1222_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1222), sizeof (t1222), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, false, false, false, 10, 0, 0, 0, 0, 14, 0, 1};
#include "t1357.h"
// Metadata Definition System.Security.Cryptography.DSACryptoServiceProvider
extern TypeInfo t1357_TI;
#include "t1357MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10439_MI = 
{
	".ctor", (methodPointerType)&m10439, &t1357_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4384, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1357_m5842_ParameterInfos[] = 
{
	{"dwKeySize", 0, 134223055, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5842_MI = 
{
	".ctor", (methodPointerType)&m5842, &t1357_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1357_m5842_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4385, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t1533_0_0_0;
static ParameterInfo t1357_m10440_ParameterInfos[] = 
{
	{"dwKeySize", 0, 134223056, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"parameters", 1, 134223057, &EmptyCustomAttributesCache, &t1533_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10440_MI = 
{
	".ctor", (methodPointerType)&m10440, &t1357_TI, &t122_0_0_0, RuntimeInvoker_t122_t125_t9, t1357_m10440_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 4386, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10441_MI = 
{
	".cctor", (methodPointerType)&m10441, &t1357_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4387, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10442_MI = 
{
	"Finalize", (methodPointerType)&m10442, &t1357_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 4388, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10443_MI = 
{
	"get_KeySize", (methodPointerType)&m10443, &t1357_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2246, 0, 5, 0, false, false, 4389, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m5828_MI = 
{
	"get_PublicOnly", (methodPointerType)&m5828, &t1357_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 4390, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1357_m10444_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134223058, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1358_0_0_0;
extern void* RuntimeInvoker_t1358_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10444_MI = 
{
	"ExportParameters", (methodPointerType)&m10444, &t1357_TI, &t1358_0_0_0, RuntimeInvoker_t1358_t186, t1357_m10444_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 1, false, false, 4391, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1358_0_0_0;
static ParameterInfo t1357_m10445_ParameterInfos[] = 
{
	{"parameters", 0, 134223059, &EmptyCustomAttributesCache, &t1358_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t1358 (MethodInfo* method, void* obj, void** args);
MethodInfo m10445_MI = 
{
	"ImportParameters", (methodPointerType)&m10445, &t1357_TI, &t122_0_0_0, RuntimeInvoker_t122_t1358, t1357_m10445_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 4392, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1357_m10446_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223060, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10446_MI = 
{
	"CreateSignature", (methodPointerType)&m10446, &t1357_TI, &t737_0_0_0, RuntimeInvoker_t9_t9, t1357_m10446_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 4393, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1357_m10447_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223061, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"rgbSignature", 1, 134223062, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10447_MI = 
{
	"VerifySignature", (methodPointerType)&m10447, &t1357_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1357_m10447_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 4394, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1357_m10448_ParameterInfos[] = 
{
	{"disposing", 0, 134223063, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10448_MI = 
{
	"Dispose", (methodPointerType)&m10448, &t1357_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1357_m10448_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 7, 1, false, false, 4395, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t1442_0_0_0;
extern Il2CppType t1442_0_0_0;
static ParameterInfo t1357_m10449_ParameterInfos[] = 
{
	{"sender", 0, 134223064, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"e", 1, 134223065, &EmptyCustomAttributesCache, &t1442_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10449_MI = 
{
	"OnKeyGenerated", (methodPointerType)&m10449, &t1357_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t9, t1357_m10449_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4396, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1357_MIs[] =
{
	&m10439_MI,
	&m5842_MI,
	&m10440_MI,
	&m10441_MI,
	&m10442_MI,
	&m10443_MI,
	&m5828_MI,
	&m10444_MI,
	&m10445_MI,
	&m10446_MI,
	&m10447_MI,
	&m10448_MI,
	&m10449_MI,
	NULL
};
extern Il2CppType t1640_0_0_1;
FieldInfo t1357_f2_FieldInfo = 
{
	"store", &t1640_0_0_1, &t1357_TI, offsetof(t1357, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1357_f3_FieldInfo = 
{
	"persistKey", &t124_0_0_1, &t1357_TI, offsetof(t1357, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1357_f4_FieldInfo = 
{
	"persisted", &t124_0_0_1, &t1357_TI, offsetof(t1357, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1357_f5_FieldInfo = 
{
	"privateKeyExportable", &t124_0_0_1, &t1357_TI, offsetof(t1357, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1357_f6_FieldInfo = 
{
	"m_disposed", &t124_0_0_1, &t1357_TI, offsetof(t1357, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1639_0_0_1;
FieldInfo t1357_f7_FieldInfo = 
{
	"dsa", &t1639_0_0_1, &t1357_TI, offsetof(t1357, f7), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_17;
FieldInfo t1357_f8_FieldInfo = 
{
	"useMachineKeyStore", &t124_0_0_17, &t1357_TI, offsetof(t1357_SFs, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1357_FIs[] =
{
	&t1357_f2_FieldInfo,
	&t1357_f3_FieldInfo,
	&t1357_f4_FieldInfo,
	&t1357_f5_FieldInfo,
	&t1357_f6_FieldInfo,
	&t1357_f7_FieldInfo,
	&t1357_f8_FieldInfo,
	NULL
};
extern MethodInfo m10443_MI;
static PropertyInfo t1357____KeySize_PropertyInfo = 
{
	&t1357_TI, "KeySize", &m10443_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5828_MI;
extern CustomAttributesCache t1357__CustomAttributeCache_t1357____PublicOnly_PropertyInfo;
static PropertyInfo t1357____PublicOnly_PropertyInfo = 
{
	&t1357_TI, "PublicOnly", &m5828_MI, NULL, 0, &t1357__CustomAttributeCache_t1357____PublicOnly_PropertyInfo};
static PropertyInfo* t1357_PIs[] =
{
	&t1357____KeySize_PropertyInfo,
	&t1357____PublicOnly_PropertyInfo,
	NULL
};
extern MethodInfo m10442_MI;
extern MethodInfo m10448_MI;
extern MethodInfo m10446_MI;
extern MethodInfo m10444_MI;
extern MethodInfo m10445_MI;
extern MethodInfo m10447_MI;
static Il2CppMethodReference t1357_VT[] =
{
	&m671_MI,
	&m10442_MI,
	&m672_MI,
	&m673_MI,
	&m7094_MI,
	&m10443_MI,
	&m6952_MI,
	&m10448_MI,
	&m10437_MI,
	&m10438_MI,
	&m10446_MI,
	&m10444_MI,
	&m10445_MI,
	&m10447_MI,
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
};
extern Il2CppType t2640_0_0_0;
static const Il2CppType* t1357_ITIs[] = 
{
	&t2640_0_0_0,
};
static Il2CppInterfaceOffsetPair t1357_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t2640_0_0_0, 14},
};
void t1357_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1357_CustomAttributesCacheGenerator_t1357____PublicOnly_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, false, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1357__CustomAttributeCache = {
1,
NULL,
&t1357_CustomAttributesCacheGenerator
};
CustomAttributesCache t1357__CustomAttributeCache_t1357____PublicOnly_PropertyInfo = {
1,
NULL,
&t1357_CustomAttributesCacheGenerator_t1357____PublicOnly_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1357_0_0_0;
extern Il2CppType t1357_1_0_0;
struct t1357;
extern CustomAttributesCache t1357__CustomAttributeCache;
extern CustomAttributesCache t1357__CustomAttributeCache_t1357____PublicOnly_PropertyInfo;
const Il2CppTypeDefinitionMetadata t1357_DM = 
{
	NULL, NULL, t1357_ITIs, t1357_IOs, &t1222_0_0_0, t1357_VT, t1357_VTIGM, NULL};
TypeInfo t1357_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSACryptoServiceProvider", "System.Security.Cryptography", t1357_MIs, t1357_PIs, t1357_FIs, NULL, &t1357_TI, NULL, &t1357__CustomAttributeCache, &t1357_0_0_0, &t1357_1_0_0, &t1357_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1357), sizeof (t1357), 0, -1, sizeof(t1357_SFs), 0, -1, 1048833, 0, 0, false, false, false, false, false, false, false, true, true, false, 13, 2, 7, 0, 0, 14, 1, 2};
#include "t1358.h"
// Metadata Definition System.Security.Cryptography.DSAParameters
extern TypeInfo t1358_TI;
#include "t1358MD.h"
static MethodInfo* t1358_MIs[] =
{
	NULL
};
extern Il2CppType t125_0_0_6;
FieldInfo t1358_f0_FieldInfo = 
{
	"Counter", &t125_0_0_6, &t1358_TI, offsetof(t1358, f0) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_6;
FieldInfo t1358_f1_FieldInfo = 
{
	"G", &t737_0_0_6, &t1358_TI, offsetof(t1358, f1) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_6;
FieldInfo t1358_f2_FieldInfo = 
{
	"J", &t737_0_0_6, &t1358_TI, offsetof(t1358, f2) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_6;
FieldInfo t1358_f3_FieldInfo = 
{
	"P", &t737_0_0_6, &t1358_TI, offsetof(t1358, f3) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_6;
FieldInfo t1358_f4_FieldInfo = 
{
	"Q", &t737_0_0_6, &t1358_TI, offsetof(t1358, f4) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_6;
FieldInfo t1358_f5_FieldInfo = 
{
	"Seed", &t737_0_0_6, &t1358_TI, offsetof(t1358, f5) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_134;
FieldInfo t1358_f6_FieldInfo = 
{
	"X", &t737_0_0_134, &t1358_TI, offsetof(t1358, f6) + sizeof(t9), &EmptyCustomAttributesCache};
extern Il2CppType t737_0_0_6;
FieldInfo t1358_f7_FieldInfo = 
{
	"Y", &t737_0_0_6, &t1358_TI, offsetof(t1358, f7) + sizeof(t9), &EmptyCustomAttributesCache};
static FieldInfo* t1358_FIs[] =
{
	&t1358_f0_FieldInfo,
	&t1358_f1_FieldInfo,
	&t1358_f2_FieldInfo,
	&t1358_f3_FieldInfo,
	&t1358_f4_FieldInfo,
	&t1358_f5_FieldInfo,
	&t1358_f6_FieldInfo,
	&t1358_f7_FieldInfo,
	NULL
};
static Il2CppMethodReference t1358_VT[] =
{
	&m680_MI,
	&m646_MI,
	&m681_MI,
	&m682_MI,
};
static bool t1358_VTIGM[] =
{
	false,
	false,
	false,
	false,
};
void t1358_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1358__CustomAttributeCache = {
1,
NULL,
&t1358_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1358_1_0_0;
extern CustomAttributesCache t1358__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1358_DM = 
{
	NULL, NULL, NULL, NULL, &t117_0_0_0, t1358_VT, t1358_VTIGM, NULL};
TypeInfo t1358_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSAParameters", "System.Security.Cryptography", t1358_MIs, NULL, t1358_FIs, NULL, &t1358_TI, NULL, &t1358__CustomAttributeCache, &t1358_0_0_0, &t1358_1_0_0, &t1358_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t1358_marshal, (methodPointerType)t1358_marshal_back, (methodPointerType)t1358_marshal_cleanup, sizeof (t1358)+ sizeof (Il2CppObject), sizeof (t1358)+ sizeof (Il2CppObject), 0, sizeof(t1358_marshaled), 0, 0, -1, 1057033, 0, 0, true, false, false, false, false, false, false, false, false, false, 0, 0, 8, 0, 0, 4, 0, 0};
#include "t1541.h"
// Metadata Definition System.Security.Cryptography.DSASignatureDeformatter
extern TypeInfo t1541_TI;
#include "t1541MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10450_MI = 
{
	".ctor", (methodPointerType)&m10450, &t1541_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4397, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1218_0_0_0;
static ParameterInfo t1541_m6978_ParameterInfos[] = 
{
	{"key", 0, 134223066, &EmptyCustomAttributesCache, &t1218_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6978_MI = 
{
	".ctor", (methodPointerType)&m6978, &t1541_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1541_m6978_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4398, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1541_m6979_ParameterInfos[] = 
{
	{"strName", 0, 134223067, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6979_MI = 
{
	"SetHashAlgorithm", (methodPointerType)&m6979, &t1541_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1541_m6979_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4399, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1218_0_0_0;
static ParameterInfo t1541_m10451_ParameterInfos[] = 
{
	{"key", 0, 134223068, &EmptyCustomAttributesCache, &t1218_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10451_MI = 
{
	"SetKey", (methodPointerType)&m10451, &t1541_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1541_m10451_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4400, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t737_0_0_0;
static ParameterInfo t1541_m6980_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223069, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"rgbSignature", 1, 134223070, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6980_MI = 
{
	"VerifySignature", (methodPointerType)&m6980, &t1541_TI, &t124_0_0_0, RuntimeInvoker_t124_t9_t9, t1541_m6980_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, false, 4401, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1541_MIs[] =
{
	&m10450_MI,
	&m6978_MI,
	&m6979_MI,
	&m10451_MI,
	&m6980_MI,
	NULL
};
extern Il2CppType t1222_0_0_1;
FieldInfo t1541_f0_FieldInfo = 
{
	"dsa", &t1222_0_0_1, &t1541_TI, offsetof(t1541, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1541_FIs[] =
{
	&t1541_f0_FieldInfo,
	NULL
};
extern MethodInfo m6979_MI;
extern MethodInfo m10451_MI;
extern MethodInfo m6980_MI;
static Il2CppMethodReference t1541_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m6979_MI,
	&m10451_MI,
	&m6980_MI,
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
};
void t1541_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
struct t1541;
extern CustomAttributesCache t1541__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1541_DM = 
{
	NULL, NULL, NULL, NULL, &t1495_0_0_0, t1541_VT, t1541_VTIGM, NULL};
TypeInfo t1541_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSASignatureDeformatter", "System.Security.Cryptography", t1541_MIs, NULL, t1541_FIs, NULL, &t1541_TI, NULL, &t1541__CustomAttributeCache, &t1541_0_0_0, &t1541_1_0_0, &t1541_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1541), sizeof (t1541), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 5, 0, 1, 0, 0, 7, 0, 0};
#include "t1990.h"
// Metadata Definition System.Security.Cryptography.DSASignatureFormatter
extern TypeInfo t1990_TI;
#include "t1990MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10452_MI = 
{
	".ctor", (methodPointerType)&m10452, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4402, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1990_m10453_ParameterInfos[] = 
{
	{"rgbHash", 0, 134223071, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10453_MI = 
{
	"CreateSignature", (methodPointerType)&m10453, &t1990_TI, &t737_0_0_0, RuntimeInvoker_t9_t9, t1990_m10453_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 1, false, false, 4403, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1990_m10454_ParameterInfos[] = 
{
	{"strName", 0, 134223072, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10454_MI = 
{
	"SetHashAlgorithm", (methodPointerType)&m10454, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1990_m10454_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 4404, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1218_0_0_0;
static ParameterInfo t1990_m10455_ParameterInfos[] = 
{
	{"key", 0, 134223073, &EmptyCustomAttributesCache, &t1218_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10455_MI = 
{
	"SetKey", (methodPointerType)&m10455, &t1990_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1990_m10455_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 4405, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1990_MIs[] =
{
	&m10452_MI,
	&m10453_MI,
	&m10454_MI,
	&m10455_MI,
	NULL
};
extern Il2CppType t1222_0_0_1;
FieldInfo t1990_f0_FieldInfo = 
{
	"dsa", &t1222_0_0_1, &t1990_TI, offsetof(t1990, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1990_FIs[] =
{
	&t1990_f0_FieldInfo,
	NULL
};
extern MethodInfo m10454_MI;
extern MethodInfo m10455_MI;
extern MethodInfo m10453_MI;
static Il2CppMethodReference t1990_VT[] =
{
	&m671_MI,
	&m646_MI,
	&m672_MI,
	&m673_MI,
	&m10454_MI,
	&m10455_MI,
	&m10453_MI,
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
};
void t1990_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, NULL, &t1497_0_0_0, t1990_VT, t1990_VTIGM, NULL};
TypeInfo t1990_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSASignatureFormatter", "System.Security.Cryptography", t1990_MIs, NULL, t1990_FIs, NULL, &t1990_TI, NULL, &t1990__CustomAttributeCache, &t1990_0_0_0, &t1990_1_0_0, &t1990_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1990), sizeof (t1990), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 7, 0, 0};
#include "t1538.h"
// Metadata Definition System.Security.Cryptography.HMAC
extern TypeInfo t1538_TI;
#include "t1538MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10456_MI = 
{
	".ctor", (methodPointerType)&m10456, &t1538_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 4406, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10457_MI = 
{
	"get_BlockSizeValue", (methodPointerType)&m10457, &t1538_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2180, 0, 255, 0, false, false, 4407, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1538_m10458_ParameterInfos[] = 
{
	{"value", 0, 134223074, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10458_MI = 
{
	"set_BlockSizeValue", (methodPointerType)&m10458, &t1538_TI, &t122_0_0_0, RuntimeInvoker_t122_t125, t1538_m10458_ParameterInfos, &EmptyCustomAttributesCache, 2180, 0, 255, 1, false, false, 4408, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1538_m10459_ParameterInfos[] = 
{
	{"value", 0, 134223075, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10459_MI = 
{
	"set_HashName", (methodPointerType)&m10459, &t1538_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1538_m10459_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4409, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10460_MI = 
{
	"get_Key", (methodPointerType)&m10460, &t1538_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 4410, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1538_m6971_ParameterInfos[] = 
{
	{"value", 0, 134223076, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6971_MI = 
{
	"set_Key", (methodPointerType)&m6971, &t1538_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1538_m6971_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 16, 1, false, false, 4411, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1637_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10461_MI = 
{
	"get_Block", (methodPointerType)&m10461, &t1538_TI, &t1637_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 4412, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t582_0_0_0;
static ParameterInfo t1538_m10462_ParameterInfos[] = 
{
	{"key", 0, 134223077, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"padding", 1, 134223078, &EmptyCustomAttributesCache, &t582_0_0_0},
};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9_t9_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10462_MI = 
{
	"KeySetup", (methodPointerType)&m10462, &t1538_TI, &t737_0_0_0, RuntimeInvoker_t9_t9_t186, t1538_m10462_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 4413, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1538_m10463_ParameterInfos[] = 
{
	{"disposing", 0, 134223079, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10463_MI = 
{
	"Dispose", (methodPointerType)&m10463, &t1538_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1538_m10463_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 14, 1, false, false, 4414, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1538_m10464_ParameterInfos[] = 
{
	{"rgb", 0, 134223080, &EmptyCustomAttributesCache, &t737_0_0_0},
	{"ib", 1, 134223081, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"cb", 2, 134223082, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9_t125_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m10464_MI = 
{
	"HashCore", (methodPointerType)&m10464, &t1538_TI, &t122_0_0_0, RuntimeInvoker_t122_t9_t125_t125, t1538_m10464_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 4415, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10465_MI = 
{
	"HashFinal", (methodPointerType)&m10465, &t1538_TI, &t737_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 4416, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10466_MI = 
{
	"Initialize", (methodPointerType)&m10466, &t1538_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 198, 0, 13, 0, false, false, 4417, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1538_0_0_0;
extern void* RuntimeInvoker_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m6970_MI = 
{
	"Create", (methodPointerType)&m6970, &t1538_TI, &t1538_0_0_0, RuntimeInvoker_t9, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 4418, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1538_m10467_ParameterInfos[] = 
{
	{"algorithmName", 0, 134223083, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern Il2CppType t1538_0_0_0;
extern void* RuntimeInvoker_t9_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10467_MI = 
{
	"Create", (methodPointerType)&m10467, &t1538_TI, &t1538_0_0_0, RuntimeInvoker_t9_t9, t1538_m10467_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 4419, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1538_MIs[] =
{
	&m10456_MI,
	&m10457_MI,
	&m10458_MI,
	&m10459_MI,
	&m10460_MI,
	&m6971_MI,
	&m10461_MI,
	&m10462_MI,
	&m10463_MI,
	&m10464_MI,
	&m10465_MI,
	&m10466_MI,
	&m6970_MI,
	&m10467_MI,
	NULL
};
extern Il2CppType t124_0_0_1;
FieldInfo t1538_f5_FieldInfo = 
{
	"_disposed", &t124_0_0_1, &t1538_TI, offsetof(t1538, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1538_f6_FieldInfo = 
{
	"_hashName", &t2_0_0_1, &t1538_TI, offsetof(t1538, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1374_0_0_1;
FieldInfo t1538_f7_FieldInfo = 
{
	"_algo", &t1374_0_0_1, &t1538_TI, offsetof(t1538, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1637_0_0_1;
FieldInfo t1538_f8_FieldInfo = 
{
	"_block", &t1637_0_0_1, &t1538_TI, offsetof(t1538, f8), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1538_f9_FieldInfo = 
{
	"_blockSizeValue", &t125_0_0_1, &t1538_TI, offsetof(t1538, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1538_FIs[] =
{
	&t1538_f5_FieldInfo,
	&t1538_f6_FieldInfo,
	&t1538_f7_FieldInfo,
	&t1538_f8_FieldInfo,
	&t1538_f9_FieldInfo,
	NULL
};
extern MethodInfo m10457_MI;
extern MethodInfo m10458_MI;
static PropertyInfo t1538____BlockSizeValue_PropertyInfo = 
{
	&t1538_TI, "BlockSizeValue", &m10457_MI, &m10458_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10459_MI;
static PropertyInfo t1538____HashName_PropertyInfo = 
{
	&t1538_TI, "HashName", NULL, &m10459_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10460_MI;
extern MethodInfo m6971_MI;
static PropertyInfo t1538____Key_PropertyInfo = 
{
	&t1538_TI, "Key", &m10460_MI, &m6971_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10461_MI;
static PropertyInfo t1538____Block_PropertyInfo = 
{
	&t1538_TI, "Block", &m10461_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1538_PIs[] =
{
	&t1538____BlockSizeValue_PropertyInfo,
	&t1538____HashName_PropertyInfo,
	&t1538____Key_PropertyInfo,
	&t1538____Block_PropertyInfo,
	NULL
};
extern MethodInfo m7096_MI;
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
static Il2CppMethodReference t1538_VT[] =
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
};
static Il2CppInterfaceOffsetPair t1538_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t1538_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
extern Il2CppType t1456_0_0_0;
struct t1538;
extern CustomAttributesCache t1538__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata t1538_DM = 
{
	NULL, NULL, NULL, t1538_IOs, &t1456_0_0_0, t1538_VT, t1538_VTIGM, NULL};
TypeInfo t1538_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMAC", "System.Security.Cryptography", t1538_MIs, t1538_PIs, t1538_FIs, NULL, &t1538_TI, NULL, &t1538__CustomAttributeCache, &t1538_0_0_0, &t1538_1_0_0, &t1538_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1538), sizeof (t1538), 0, -1, 0, 0, -1, 1048705, 0, 0, false, false, false, false, false, false, false, true, false, false, 14, 4, 5, 0, 0, 17, 0, 2};
#include "t1991.h"
// Metadata Definition System.Security.Cryptography.HMACMD5
extern TypeInfo t1991_TI;
#include "t1991MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10468_MI = 
{
	".ctor", (methodPointerType)&m10468, &t1991_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4420, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1991_m10469_ParameterInfos[] = 
{
	{"key", 0, 134223084, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10469_MI = 
{
	".ctor", (methodPointerType)&m10469, &t1991_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1991_m10469_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4421, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1991_MIs[] =
{
	&m10468_MI,
	&m10469_MI,
	NULL
};
static Il2CppMethodReference t1991_VT[] =
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
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1991_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t1991_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t1991_IOs, &t1538_0_0_0, t1991_VT, t1991_VTIGM, NULL};
TypeInfo t1991_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACMD5", "System.Security.Cryptography", t1991_MIs, NULL, NULL, NULL, &t1991_TI, NULL, &t1991__CustomAttributeCache, &t1991_0_0_0, &t1991_1_0_0, &t1991_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1991), sizeof (t1991), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 2, 0, 0, 0, 0, 17, 0, 2};
#include "t1992.h"
// Metadata Definition System.Security.Cryptography.HMACRIPEMD160
extern TypeInfo t1992_TI;
#include "t1992MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10470_MI = 
{
	".ctor", (methodPointerType)&m10470, &t1992_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4422, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1992_m10471_ParameterInfos[] = 
{
	{"key", 0, 134223085, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10471_MI = 
{
	".ctor", (methodPointerType)&m10471, &t1992_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1992_m10471_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4423, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1992_MIs[] =
{
	&m10470_MI,
	&m10471_MI,
	NULL
};
static Il2CppMethodReference t1992_VT[] =
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
};
static Il2CppInterfaceOffsetPair t1992_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t1992_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t1992_IOs, &t1538_0_0_0, t1992_VT, t1992_VTIGM, NULL};
TypeInfo t1992_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACRIPEMD160", "System.Security.Cryptography", t1992_MIs, NULL, NULL, NULL, &t1992_TI, NULL, &t1992__CustomAttributeCache, &t1992_0_0_0, &t1992_1_0_0, &t1992_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1992), sizeof (t1992), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 2, 0, 0, 0, 0, 17, 0, 2};
#include "t1537.h"
// Metadata Definition System.Security.Cryptography.HMACSHA1
extern TypeInfo t1537_TI;
#include "t1537MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10472_MI = 
{
	".ctor", (methodPointerType)&m10472, &t1537_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4424, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1537_m10473_ParameterInfos[] = 
{
	{"key", 0, 134223086, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10473_MI = 
{
	".ctor", (methodPointerType)&m10473, &t1537_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1537_m10473_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4425, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1537_MIs[] =
{
	&m10472_MI,
	&m10473_MI,
	NULL
};
static Il2CppMethodReference t1537_VT[] =
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
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1537_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t1537_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t1537_IOs, &t1538_0_0_0, t1537_VT, t1537_VTIGM, NULL};
TypeInfo t1537_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACSHA1", "System.Security.Cryptography", t1537_MIs, NULL, NULL, NULL, &t1537_TI, NULL, &t1537__CustomAttributeCache, &t1537_0_0_0, &t1537_1_0_0, &t1537_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1537), sizeof (t1537), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 2, 0, 0, 0, 0, 17, 0, 2};
#include "t1993.h"
// Metadata Definition System.Security.Cryptography.HMACSHA256
extern TypeInfo t1993_TI;
#include "t1993MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10474_MI = 
{
	".ctor", (methodPointerType)&m10474, &t1993_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4426, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1993_m10475_ParameterInfos[] = 
{
	{"key", 0, 134223087, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10475_MI = 
{
	".ctor", (methodPointerType)&m10475, &t1993_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1993_m10475_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4427, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1993_MIs[] =
{
	&m10474_MI,
	&m10475_MI,
	NULL
};
static Il2CppMethodReference t1993_VT[] =
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
};
static Il2CppInterfaceOffsetPair t1993_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t1993_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t1993_IOs, &t1538_0_0_0, t1993_VT, t1993_VTIGM, NULL};
TypeInfo t1993_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACSHA256", "System.Security.Cryptography", t1993_MIs, NULL, NULL, NULL, &t1993_TI, NULL, &t1993__CustomAttributeCache, &t1993_0_0_0, &t1993_1_0_0, &t1993_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1993), sizeof (t1993), 0, -1, 0, 0, -1, 1048577, 0, 0, false, false, false, false, false, false, false, true, false, false, 2, 0, 0, 0, 0, 17, 0, 2};
#include "t1994.h"
// Metadata Definition System.Security.Cryptography.HMACSHA384
extern TypeInfo t1994_TI;
#include "t1994MD.h"
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10476_MI = 
{
	".ctor", (methodPointerType)&m10476, &t1994_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4428, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t737_0_0_0;
static ParameterInfo t1994_m10477_ParameterInfos[] = 
{
	{"key", 0, 134223088, &EmptyCustomAttributesCache, &t737_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t9 (MethodInfo* method, void* obj, void** args);
MethodInfo m10477_MI = 
{
	".ctor", (methodPointerType)&m10477, &t1994_TI, &t122_0_0_0, RuntimeInvoker_t122_t9, t1994_m10477_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 4429, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122 (MethodInfo* method, void* obj, void** args);
MethodInfo m10478_MI = 
{
	".cctor", (methodPointerType)&m10478, &t1994_TI, &t122_0_0_0, RuntimeInvoker_t122, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 4430, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1994_m10479_ParameterInfos[] = 
{
	{"value", 0, 134223089, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t122_0_0_0;
extern void* RuntimeInvoker_t122_t186 (MethodInfo* method, void* obj, void** args);
MethodInfo m10479_MI = 
{
	"set_ProduceLegacyHmacValues", (methodPointerType)&m10479, &t1994_TI, &t122_0_0_0, RuntimeInvoker_t122_t186, t1994_m10479_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 4431, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1994_MIs[] =
{
	&m10476_MI,
	&m10477_MI,
	&m10478_MI,
	&m10479_MI,
	NULL
};
extern Il2CppType t124_0_0_17;
FieldInfo t1994_f10_FieldInfo = 
{
	"legacy_mode", &t124_0_0_17, &t1994_TI, offsetof(t1994_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1994_f11_FieldInfo = 
{
	"legacy", &t124_0_0_1, &t1994_TI, offsetof(t1994, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1994_FIs[] =
{
	&t1994_f10_FieldInfo,
	&t1994_f11_FieldInfo,
	NULL
};
extern MethodInfo m10479_MI;
static PropertyInfo t1994____ProduceLegacyHmacValues_PropertyInfo = 
{
	&t1994_TI, "ProduceLegacyHmacValues", NULL, &m10479_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1994_PIs[] =
{
	&t1994____ProduceLegacyHmacValues_PropertyInfo,
	NULL
};
static Il2CppMethodReference t1994_VT[] =
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
	false,
	false,
};
static Il2CppInterfaceOffsetPair t1994_IOs[] = 
{
	{ &t137_0_0_0, 4},
	{ &t1431_0_0_0, 5},
};
void t1994_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t684 * tmp;
		tmp = (t684 *)il2cpp_codegen_object_new (&t684_TI);
		m3168(tmp, true, &m3168_MI);
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
	NULL, NULL, NULL, t1994_IOs, &t1538_0_0_0, t1994_VT, t1994_VTIGM, NULL};
TypeInfo t1994_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACSHA384", "System.Security.Cryptography", t1994_MIs, t1994_PIs, t1994_FIs, NULL, &t1994_TI, NULL, &t1994__CustomAttributeCache, &t1994_0_0_0, &t1994_1_0_0, &t1994_DM, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1994), sizeof (t1994), 0, -1, sizeof(t1994_SFs), 0, -1, 1, 0, 0, false, false, false, false, false, false, false, true, true, false, 4, 1, 2, 0, 0, 17, 0, 2};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
