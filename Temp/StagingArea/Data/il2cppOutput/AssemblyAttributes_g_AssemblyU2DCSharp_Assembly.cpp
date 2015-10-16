#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t198_TI;
#include "t198.h"
#include "t198MD.h"
extern MethodInfo m683_MI;
extern MethodInfo m684_MI;
extern TypeInfo t328_TI;
#include "t328.h"
#include "t328MD.h"
extern MethodInfo m1204_MI;
void g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t9 *) * cache->count, 0);
	{
		t198 * tmp;
		tmp = (t198 *)il2cpp_codegen_object_new (&t198_TI);
		m683(tmp, &m683_MI);
		m684(tmp, true, &m684_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t328 * tmp;
		tmp = (t328 *)il2cpp_codegen_object_new (&t328_TI);
		m1204(tmp, &m1204_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_AssemblyU2DCSharp_Assembly__CustomAttributeCache = {
2,
NULL,
&g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator
};
