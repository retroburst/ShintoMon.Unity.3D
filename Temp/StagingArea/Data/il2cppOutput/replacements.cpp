#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
#include "stringLiterals.h"

extern TypeInfo t1399_TI;
extern TypeInfo t1400_TI;
extern TypeInfo t1401_TI;
extern TypeInfo t1402_TI;
extern TypeInfo t1403_TI;
#include "utils/RegisterRuntimeInitializeAndCleanup.h"
#include <map>
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_replacements_Assembly_Types[6] = 
{
	&t1399_TI,
	&t1400_TI,
	&t1401_TI,
	&t1402_TI,
	&t1403_TI,
	NULL,
};
extern Il2CppImage g_replacements_dll_Image;
extern CustomAttributesCache g_replacements_Assembly__CustomAttributeCache;
Il2CppAssembly g_replacements_Assembly = 
{
	{ "replacements", 0, 0, 0, { 0 }, 32772, 0, 0, 0, 0, 0, 0 },
	&g_replacements_dll_Image,
	&g_replacements_Assembly__CustomAttributeCache,
};
Il2CppImage g_replacements_dll_Image = 
{
	 "replacements.dll" ,
	&g_replacements_Assembly,
	g_replacements_Assembly_Types,
	5,
	NULL,
};
static void s_replacementsRegistration()
{
	RegisterAssembly (&g_replacements_Assembly);
}
static il2cpp::utils::RegisterRuntimeInitializeAndCleanup s_replacementsRegistrationVariable(&s_replacementsRegistration, NULL);
