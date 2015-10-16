#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t3367.h"
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
extern TypeInfo t3367_TI;
#include "t3367MD.h"

#include "t9.h"
#include "t3366.h"
#include "t125.h"
#include "t2.h"
#include "t1332.h"
#include "t122.h"
#include "t121.h"
#include "t124.h"
extern TypeInfo t3366_TI;
extern TypeInfo t1332_TI;
#include "t1332MD.h"
#include "t121MD.h"
extern Il2CppType t3367_0_0_0;
extern Il2CppType t3366_0_0_0;
extern MethodInfo m5685_MI;
extern MethodInfo m5689_MI;
struct t121;
#include "t896.h"
extern "C" t3366  m26812_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m26812(__this, p0, method) (( t3366  (*) (t121 *, int32_t, MethodInfo*))m26812_gshared)(__this, p0, method)
extern Il2CppGenericMethod m19719_GM;
extern Il2CppGenericMethod m26812_GM;


extern Il2CppGenericMethod m19715_GM;
extern "C" void m19715_gshared (t3367 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m19716_GM;
extern "C" t9 * m19716_gshared (t3367 * __this, MethodInfo* method)
{
	{
		t3366  L_0 = (( t3366  (*) (t3367 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t3366  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m19717_GM;
extern "C" void m19717_gshared (t3367 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m19718_GM;
extern "C" bool m19718_gshared (t3367 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		t121 * L_1 = (__this->f0);
		int32_t L_2 = m5689(L_1, &m5689_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->f1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern "C" t3366  m19719_gshared (t3367 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_1, (t2*) &_stringLiteral1249, &m5685_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		t1332 * L_3 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_3, (t2*) &_stringLiteral1250, &m5685_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t121 * L_4 = (__this->f0);
		t121 * L_5 = (__this->f0);
		int32_t L_6 = m5689(L_5, &m5689_MI);
		int32_t L_7 = (__this->f1);
		t3366  L_8 = (( t3366  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4736_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4061_TI;

#include "t697.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4060_TI;

#include "UnityEngine_ArrayTypes.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4737_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4064_TI;



#include "t3368.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3368_TI;
#include "t3368MD.h"

extern TypeInfo t697_TI;
extern Il2CppType t3368_0_0_0;
struct t121;
struct t121;
extern "C" t9 * m24739_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m24739(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
#define m26823(__this, p0, method) (( t697 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m19724_GM;
extern Il2CppGenericMethod m26823_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4738_TI;



#include "t3369.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3369_TI;
#include "t3369MD.h"

#include "t700.h"
#include "t132.h"
#include "t169.h"
#include "t3370.h"
#include "mscorlib_ArrayTypes.h"
#include "t3372.h"
#include "t58.h"
extern TypeInfo t991_TI;
extern TypeInfo t9_TI;
extern TypeInfo t700_TI;
extern TypeInfo t125_TI;
extern TypeInfo t132_TI;
extern TypeInfo t169_TI;
extern TypeInfo t124_TI;
extern TypeInfo t3370_TI;
extern TypeInfo t1088_TI;
extern TypeInfo t122_TI;
extern TypeInfo t3372_TI;
#include "t700MD.h"
#include "t9MD.h"
#include "t132MD.h"
#include "t169MD.h"
#include "t3372MD.h"
#include "t3370MD.h"
extern Il2CppType t700_0_0_0;
extern Il2CppType t3370_0_0_0;
extern Il2CppType t1088_0_0_0;
extern Il2CppType t3369_0_0_0;
extern Il2CppType t3372_0_0_0;
extern MethodInfo m11969_MI;
extern MethodInfo m19685_MI;
extern MethodInfo m336_MI;
extern MethodInfo m339_MI;
extern MethodInfo m5706_MI;
extern MethodInfo m19697_MI;
extern MethodInfo m19736_MI;
extern MethodInfo m19691_MI;
extern MethodInfo m19756_MI;
extern MethodInfo m19739_MI;
struct t700;
#include "t126.h"
#include "t138.h"
#include "t127.h"
#include "t556.h"
struct t2962;
#include "t2962.h"
#include "t2970.h"
extern "C" void m25848_gshared (t2962 * __this, t121 * p0, int32_t p1, t2970 * p2, MethodInfo* method);
#define m25848(__this, p0, p1, p2, method) (( void (*) (t2962 *, t121 *, int32_t, t2970 *, MethodInfo*))m25848_gshared)(__this, p0, p1, p2, method)
#define m26834(__this, p0, p1, p2, method) (( void (*) (t700 *, t121 *, int32_t, t3372 *, MethodInfo*))m25848_gshared)(__this, p0, p1, p2, method)
struct t700;
#include "t1659.h"
extern "C" void m26835 (t700 * __this, t1088* p0, int32_t p1, t3372 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m19685_GM;
extern Il2CppGenericMethod m19697_GM;
extern Il2CppGenericMethod m19737_GM;
extern Il2CppGenericMethod m19736_GM;
extern Il2CppGenericMethod m19689_GM;
extern Il2CppGenericMethod m19691_GM;
extern Il2CppGenericMethod m19756_GM;
extern Il2CppGenericMethod m26834_GM;
extern Il2CppGenericMethod m26835_GM;
extern Il2CppGenericMethod m19739_GM;


#ifndef _MSC_VER
#else
#endif

#include "t3371.h"
extern TypeInfo t3371_TI;
#include "t3371MD.h"
#include "t3366MD.h"
extern Il2CppType t3371_0_0_0;
extern Il2CppGenericMethod m19751_GM;
extern Il2CppGenericMethod m19710_GM;
extern Il2CppGenericMethod m19707_GM;
extern Il2CppGenericMethod m19755_GM;
extern Il2CppGenericMethod m19749_GM;


#ifndef _MSC_VER
#else
#endif

#include "t1155.h"
#include "t1521.h"
extern TypeInfo t1155_TI;
extern TypeInfo t1659_TI;
extern TypeInfo t1521_TI;
#include "t1155MD.h"
#include "t1521MD.h"
extern MethodInfo m5686_MI;
extern MethodInfo m19709_MI;
extern MethodInfo m6883_MI;
extern Il2CppGenericMethod m19754_GM;
extern Il2CppGenericMethod m19712_GM;
extern Il2CppGenericMethod m19752_GM;
extern Il2CppGenericMethod m19753_GM;
extern Il2CppGenericMethod m19709_GM;


#ifndef _MSC_VER
#else
#endif

#include "t463.h"


#include "t3373.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3373_TI;
#include "t3373MD.h"

#include "t3374.h"
#include "t3375.h"
extern TypeInfo t3374_TI;
extern TypeInfo t3364_TI;
extern TypeInfo t3375_TI;
#include "t3375MD.h"
#include "t3374MD.h"
extern Il2CppType t3374_0_0_0;
extern Il2CppType t3364_0_0_0;
extern Il2CppType t3373_0_0_0;
extern Il2CppType t3375_0_0_0;
extern MethodInfo m19771_MI;
extern MethodInfo m19692_MI;
extern MethodInfo m19779_MI;
extern MethodInfo m19774_MI;
struct t700;
struct t2962;
#include "t2973.h"
extern "C" void m25851_gshared (t2962 * __this, t121 * p0, int32_t p1, t2973 * p2, MethodInfo* method);
#define m25851(__this, p0, p1, p2, method) (( void (*) (t2962 *, t121 *, int32_t, t2973 *, MethodInfo*))m25851_gshared)(__this, p0, p1, p2, method)
#define m26837(__this, p0, p1, p2, method) (( void (*) (t700 *, t121 *, int32_t, t3375 *, MethodInfo*))m25851_gshared)(__this, p0, p1, p2, method)
struct t700;
extern "C" void m26838 (t700 * __this, t3364* p0, int32_t p1, t3375 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m19698_GM;
extern Il2CppGenericMethod m19772_GM;
extern Il2CppGenericMethod m19771_GM;
extern Il2CppGenericMethod m19692_GM;
extern Il2CppGenericMethod m19779_GM;
extern Il2CppGenericMethod m26837_GM;
extern Il2CppGenericMethod m26838_GM;
extern Il2CppGenericMethod m19774_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#include "t3365.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3365_TI;
#include "t3365MD.h"



#include "t3376.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3376_TI;
#include "t3376MD.h"



#include "t3377.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3377_TI;
#include "t3377MD.h"



extern Il2CppGenericMethod m19788_GM;
extern "C" void m19788_gshared (t3377 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m19790_GM;
extern "C" t3366  m19790_gshared (t3377 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m19790((t3377 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t3366  (*FunctionPointerType) (t9 *, t9 * __this, int32_t p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef t3366  (*FunctionPointerType) (t9 * __this, int32_t p0, t9 * p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern Il2CppGenericMethod m19792_GM;
extern "C" t9 * m19792_gshared (t3377 * __this, int32_t p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m19794_GM;
extern "C" t3366  m19794_gshared (t3377 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t3366 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t3378.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3378_TI;
#include "t3378MD.h"

extern TypeInfo t1152_TI;
extern Il2CppType t3378_0_0_0;
extern MethodInfo m11972_MI;
extern MethodInfo m19797_MI;
extern Il2CppGenericMethod m19750_GM;
extern Il2CppGenericMethod m19797_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4735_TI;



#include "t3379.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3379_TI;
#include "t3379MD.h"

#include "t3380.h"
extern TypeInfo t126_TI;
extern TypeInfo t152_TI;
extern TypeInfo t3380_TI;
#include "t126MD.h"
#include "t1338MD.h"
#include "t3380MD.h"
extern Il2CppType t3379_0_0_0;
extern Il2CppType t4739_0_0_0;
extern Il2CppType t697_0_0_0;
extern Il2CppType t2525_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t3380_0_0_0;
extern MethodInfo m329_MI;
extern MethodInfo m4449_MI;
extern MethodInfo m4447_MI;
extern MethodInfo m11083_MI;
extern MethodInfo m19806_MI;
extern MethodInfo m29229_MI;
extern MethodInfo m29228_MI;
extern Il2CppGenericMethod m19806_GM;
extern Il2CppGenericMethod m29229_GM;
extern Il2CppGenericMethod m29228_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4739_TI;



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m672_MI;
extern MethodInfo m671_MI;
extern Il2CppGenericMethod m19801_GM;


#include "t872.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t872_TI;
#include "t872MD.h"

#include "t702.h"
#include "t703.h"
extern TypeInfo t702_TI;
extern TypeInfo t703_TI;
extern TypeInfo t2_TI;
extern Il2CppType t872_0_0_0;
extern MethodInfo m5692_MI;
extern MethodInfo m2486_MI;
extern MethodInfo m4385_MI;
extern Il2CppGenericMethod m19812_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4066_TI;



#ifndef _MSC_VER
#else
#endif
#include "t703MD.h"

#include "t3383.h"
#include "t3388.h"
#include "t3389.h"
#include "t3390.h"
#include "t3392.h"
extern TypeInfo t556_TI;
extern TypeInfo t871_TI;
extern TypeInfo t2113_TI;
extern TypeInfo t896_TI;
extern TypeInfo t4067_TI;
extern TypeInfo t3381_TI;
extern TypeInfo t4065_TI;
extern TypeInfo t76_TI;
extern TypeInfo t137_TI;
extern TypeInfo t3383_TI;
extern TypeInfo t3388_TI;
extern TypeInfo t3389_TI;
extern TypeInfo t3390_TI;
#include "t556MD.h"
#include "t896MD.h"
#include "t160MD.h"
#include "t3383MD.h"
#include "t3388MD.h"
#include "t3389MD.h"
#include "t3390MD.h"
extern Il2CppType t703_0_0_0;
extern Il2CppType t4067_0_0_0;
extern Il2CppType t3381_0_0_0;
extern Il2CppType t4065_0_0_0;
extern Il2CppType t4066_0_0_0;
extern Il2CppType t3383_0_0_0;
extern Il2CppType t3388_0_0_0;
extern Il2CppType t3389_0_0_0;
extern Il2CppType t3390_0_0_0;
extern MethodInfo m4218_MI;
extern MethodInfo m19859_MI;
extern MethodInfo m2885_MI;
extern MethodInfo m5870_MI;
extern MethodInfo m5693_MI;
extern MethodInfo m29230_MI;
extern MethodInfo m7682_MI;
extern MethodInfo m19831_MI;
extern MethodInfo m19838_MI;
extern MethodInfo m19844_MI;
extern MethodInfo m19847_MI;
extern MethodInfo m19849_MI;
extern MethodInfo m6875_MI;
extern MethodInfo m29231_MI;
extern MethodInfo m29232_MI;
extern MethodInfo m29233_MI;
extern MethodInfo m364_MI;
extern MethodInfo m365_MI;
extern MethodInfo m19865_MI;
extern MethodInfo m1146_MI;
extern MethodInfo m19940_MI;
extern MethodInfo m19944_MI;
extern MethodInfo m19809_MI;
extern MethodInfo m19851_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m5912_MI;
struct t121;
struct t121;
extern "C" void m25154_gshared (t9 * __this , t158** p0, int32_t p1, MethodInfo* method);
#define m25154(__this , p0, p1, method) (( void (*) (t9 * , t158**, int32_t, MethodInfo*))m25154_gshared)(__this , p0, p1, method)
#define m26857(__this , p0, p1, method) (( void (*) (t9 * , t3381**, int32_t, MethodInfo*))m25154_gshared)(__this , p0, p1, method)
struct t121;
#include "t3386.h"
struct t121;
#include "t2166.h"
extern "C" int32_t m11970_gshared (t9 * __this , t158* p0, t9 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m11970(__this , p0, p1, p2, p3, method) (( int32_t (*) (t9 * , t158*, t9 *, int32_t, int32_t, MethodInfo*))m11970_gshared)(__this , p0, p1, p2, p3, method)
#define m26859(__this , p0, p1, p2, p3, method) (( int32_t (*) (t9 * , t3381*, t702 *, int32_t, int32_t, MethodInfo*))m11970_gshared)(__this , p0, p1, p2, p3, method)
struct t121;
struct t121;
extern "C" void m25157_gshared (t9 * __this , t158* p0, int32_t p1, int32_t p2, t9* p3, MethodInfo* method);
#define m25157(__this , p0, p1, p2, p3, method) (( void (*) (t9 * , t158*, int32_t, int32_t, t9*, MethodInfo*))m25157_gshared)(__this , p0, p1, p2, p3, method)
#define m26861(__this , p0, p1, p2, p3, method) (( void (*) (t9 * , t3381*, int32_t, int32_t, t9*, MethodInfo*))m25157_gshared)(__this , p0, p1, p2, p3, method)
struct t121;
struct t121;
#include "t2770.h"
extern "C" void m25264_gshared (t9 * __this , t158* p0, int32_t p1, t2770 * p2, MethodInfo* method);
#define m25264(__this , p0, p1, p2, method) (( void (*) (t9 * , t158*, int32_t, t2770 *, MethodInfo*))m25264_gshared)(__this , p0, p1, p2, method)
#define m26869(__this , p0, p1, p2, method) (( void (*) (t9 * , t3381*, int32_t, t3392 *, MethodInfo*))m25264_gshared)(__this , p0, p1, p2, method)
extern Il2CppGenericMethod m4218_GM;
extern Il2CppGenericMethod m19859_GM;
extern Il2CppGenericMethod m26857_GM;
extern Il2CppGenericMethod m19846_GM;
extern Il2CppGenericMethod m19848_GM;
extern Il2CppGenericMethod m19834_GM;
extern Il2CppGenericMethod m29230_GM;
extern Il2CppGenericMethod m19833_GM;
extern Il2CppGenericMethod m4213_GM;
extern Il2CppGenericMethod m19831_GM;
extern Il2CppGenericMethod m19838_GM;
extern Il2CppGenericMethod m19844_GM;
extern Il2CppGenericMethod m19847_GM;
extern Il2CppGenericMethod m19849_GM;
extern Il2CppGenericMethod m19832_GM;
extern Il2CppGenericMethod m19857_GM;
extern Il2CppGenericMethod m19858_GM;
extern Il2CppGenericMethod m29231_GM;
extern Il2CppGenericMethod m29232_GM;
extern Il2CppGenericMethod m29233_GM;
extern Il2CppGenericMethod m19865_GM;
extern Il2CppGenericMethod m26859_GM;
extern Il2CppGenericMethod m19841_GM;
extern Il2CppGenericMethod m19842_GM;
extern Il2CppGenericMethod m19940_GM;
extern Il2CppGenericMethod m19944_GM;
extern Il2CppGenericMethod m19809_GM;
extern Il2CppGenericMethod m19845_GM;
extern Il2CppGenericMethod m19851_GM;
extern Il2CppGenericMethod m19950_GM;
extern Il2CppGenericMethod m26861_GM;
extern Il2CppGenericMethod m26869_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#include "t3382.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3382_TI;
#include "t3382MD.h"

extern Il2CppType t3382_0_0_0;
struct t121;
#define m26846(__this, p0, method) (( t702 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m19864_GM;
extern Il2CppGenericMethod m26846_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3384_TI;



#ifndef _MSC_VER
#else
#endif

extern TypeInfo t121_TI;
extern TypeInfo t658_TI;
#include "t3385MD.h"
extern Il2CppType t3384_0_0_0;
extern MethodInfo m19894_MI;
extern MethodInfo m561_MI;
extern MethodInfo m29234_MI;
extern MethodInfo m5681_MI;
extern MethodInfo m4344_MI;
extern MethodInfo m29235_MI;
extern MethodInfo m29236_MI;
extern Il2CppGenericMethod m19894_GM;
extern Il2CppGenericMethod m29234_GM;
extern Il2CppGenericMethod m19926_GM;
extern Il2CppGenericMethod m29235_GM;
extern Il2CppGenericMethod m29236_GM;


#include "t3385.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3385_TI;

extern TypeInfo t992_TI;
extern Il2CppType t3385_0_0_0;
extern Il2CppType t702_0_0_0;
extern MethodInfo m29237_MI;
extern MethodInfo m19925_MI;
extern MethodInfo m4216_MI;
extern MethodInfo m19918_MI;
extern MethodInfo m19916_MI;
extern MethodInfo m19921_MI;
extern MethodInfo m19912_MI;
extern MethodInfo m29238_MI;
extern MethodInfo m29239_MI;
extern MethodInfo m29240_MI;
extern MethodInfo m29241_MI;
extern MethodInfo m7733_MI;
extern MethodInfo m12272_MI;
extern MethodInfo m12273_MI;
extern Il2CppGenericMethod m29237_GM;
extern Il2CppGenericMethod m19929_GM;
extern Il2CppGenericMethod m19930_GM;
extern Il2CppGenericMethod m19927_GM;
extern Il2CppGenericMethod m19925_GM;
extern Il2CppGenericMethod m4216_GM;
extern Il2CppGenericMethod m19918_GM;
extern Il2CppGenericMethod m19928_GM;
extern Il2CppGenericMethod m19916_GM;
extern Il2CppGenericMethod m19921_GM;
extern Il2CppGenericMethod m19912_GM;
extern Il2CppGenericMethod m29238_GM;
extern Il2CppGenericMethod m29239_GM;
extern Il2CppGenericMethod m29240_GM;
extern Il2CppGenericMethod m29241_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3386_TI;
#include "t3386MD.h"

#include "t3387.h"
extern TypeInfo t3387_TI;
#include "t3387MD.h"
extern Il2CppType t3386_0_0_0;
extern Il2CppType t4740_0_0_0;
extern Il2CppType t3387_0_0_0;
extern MethodInfo m19936_MI;
extern MethodInfo m29242_MI;
extern MethodInfo m26858_MI;
extern Il2CppGenericMethod m19936_GM;
extern Il2CppGenericMethod m29242_GM;
extern Il2CppGenericMethod m26858_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4741_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4740_TI;



#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m19931_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t3391.h"
extern TypeInfo t3391_TI;
#include "t3391MD.h"
extern Il2CppType t4302_0_0_0;
extern Il2CppType t2436_0_0_0;
extern Il2CppType t3391_0_0_0;
extern MethodInfo m19951_MI;
extern MethodInfo m29243_MI;
extern MethodInfo m11109_MI;
extern Il2CppGenericMethod m19951_GM;
extern Il2CppGenericMethod m29243_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4301_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4302_TI;



#ifndef _MSC_VER
#else
#endif

extern TypeInfo t185_TI;
extern MethodInfo m26867_MI;
extern MethodInfo m11940_MI;
extern Il2CppGenericMethod m19947_GM;
extern Il2CppGenericMethod m26867_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3392_TI;
#include "t3392MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4072_TI;

#include "t694.h"


#include "t3393.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3393_TI;
#include "t3393MD.h"

extern TypeInfo t694_TI;
extern Il2CppType t3393_0_0_0;
struct t121;
#define m26872(__this, p0, method) (( t694 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m19961_GM;
extern Il2CppGenericMethod m26872_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4068_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4742_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4743_TI;



#include "t711.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t711_TI;
#include "t711MD.h"

#include "t3397.h"
#include "t874.h"
#include "t1660.h"
#include "t3395.h"
#include "t1093.h"
#include "t1094.h"
#include "t3394.h"
#include "t3402.h"
#include "t3399.h"
#include "t3404.h"
#include "t2732.h"
#include "t3405.h"
extern TypeInfo t2658_TI;
extern TypeInfo t1660_TI;
extern TypeInfo t3397_TI;
extern TypeInfo t874_TI;
extern TypeInfo t4744_TI;
extern TypeInfo t4745_TI;
extern TypeInfo t4071_TI;
extern TypeInfo t3395_TI;
extern TypeInfo t4070_TI;
extern TypeInfo t4172_TI;
extern TypeInfo t3394_TI;
extern TypeInfo t3402_TI;
extern TypeInfo t3399_TI;
extern TypeInfo t3404_TI;
extern TypeInfo t2732_TI;
extern TypeInfo t2506_TI;
extern TypeInfo t221_TI;
extern TypeInfo t710_TI;
extern TypeInfo t1149_TI;
extern TypeInfo t3405_TI;
extern TypeInfo t4746_TI;
#include "t1660MD.h"
#include "t3397MD.h"
#include "t874MD.h"
#include "t3395MD.h"
#include "t3394MD.h"
#include "t3402MD.h"
#include "t3399MD.h"
#include "t3404MD.h"
#include "t2732MD.h"
#include "t1149MD.h"
#include "t3405MD.h"
#include "t1093MD.h"
#include "t2MD.h"
extern Il2CppType t711_0_0_0;
extern Il2CppType t2658_0_0_0;
extern Il2CppType t3397_0_0_0;
extern Il2CppType t874_0_0_0;
extern Il2CppType t4744_0_0_0;
extern Il2CppType t4745_0_0_0;
extern Il2CppType t4071_0_0_0;
extern Il2CppType t4070_0_0_0;
extern Il2CppType t3395_0_0_0;
extern Il2CppType t4172_0_0_0;
extern Il2CppType t3394_0_0_0;
extern Il2CppType t3402_0_0_0;
extern Il2CppType t3399_0_0_0;
extern Il2CppType t3404_0_0_0;
extern Il2CppType t2732_0_0_0;
extern Il2CppType t2506_0_0_0;
extern Il2CppType t221_0_0_0;
extern Il2CppType t710_0_0_0;
extern Il2CppType t3405_0_0_0;
extern Il2CppType t4746_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t694_0_0_0;
extern MethodInfo m19997_MI;
extern MethodInfo m19986_MI;
extern MethodInfo m4222_MI;
extern MethodInfo m28777_MI;
extern MethodInfo m28778_MI;
extern MethodInfo m8320_MI;
extern MethodInfo m20019_MI;
extern MethodInfo m20054_MI;
extern MethodInfo m29244_MI;
extern MethodInfo m29245_MI;
extern MethodInfo m29246_MI;
extern MethodInfo m19995_MI;
extern MethodInfo m20001_MI;
extern MethodInfo m20007_MI;
extern MethodInfo m20076_MI;
extern MethodInfo m19990_MI;
extern MethodInfo m20080_MI;
extern MethodInfo m20038_MI;
extern MethodInfo m20088_MI;
extern MethodInfo m19985_MI;
extern MethodInfo m20008_MI;
extern MethodInfo m8499_MI;
extern MethodInfo m29247_MI;
extern MethodInfo m5702_MI;
extern MethodInfo m5715_MI;
extern MethodInfo m5714_MI;
extern MethodInfo m5703_MI;
extern MethodInfo m7770_MI;
extern MethodInfo m610_MI;
extern MethodInfo m5691_MI;
extern MethodInfo m4223_MI;
extern MethodInfo m29248_MI;
struct t711;
extern "C" void m26899 (t711 * __this, t4172* p0, int32_t p1, t3394 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t711;
struct t2685;
#include "t2685.h"
#include "t3403.h"
extern "C" void m26902_gshared (t2685 * __this, t121 * p0, int32_t p1, t3403 * p2, MethodInfo* method);
#define m26902(__this, p0, p1, p2, method) (( void (*) (t2685 *, t121 *, int32_t, t3403 *, MethodInfo*))m26902_gshared)(__this, p0, p1, p2, method)
#define m26901(__this, p0, p1, p2, method) (( void (*) (t711 *, t121 *, int32_t, t3402 *, MethodInfo*))m26902_gshared)(__this, p0, p1, p2, method)
struct t711;
extern "C" void m26904 (t711 * __this, t4070* p0, int32_t p1, t3402 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m20002_GM;
extern Il2CppGenericMethod m4224_GM;
extern Il2CppGenericMethod m19997_GM;
extern Il2CppGenericMethod m20003_GM;
extern Il2CppGenericMethod m19986_GM;
extern Il2CppGenericMethod m20004_GM;
extern Il2CppGenericMethod m4222_GM;
extern Il2CppGenericMethod m28777_GM;
extern Il2CppGenericMethod m28778_GM;
extern Il2CppGenericMethod m19994_GM;
extern Il2CppGenericMethod m20019_GM;
extern Il2CppGenericMethod m20054_GM;
extern Il2CppGenericMethod m19987_GM;
extern Il2CppGenericMethod m19965_GM;
extern Il2CppGenericMethod m29244_GM;
extern Il2CppGenericMethod m29245_GM;
extern Il2CppGenericMethod m29246_GM;
extern Il2CppGenericMethod m20009_GM;
extern Il2CppGenericMethod m20011_GM;
extern Il2CppGenericMethod m19995_GM;
extern Il2CppGenericMethod m20001_GM;
extern Il2CppGenericMethod m20005_GM;
extern Il2CppGenericMethod m19993_GM;
extern Il2CppGenericMethod m19989_GM;
extern Il2CppGenericMethod m20007_GM;
extern Il2CppGenericMethod m20076_GM;
extern Il2CppGenericMethod m26899_GM;
extern Il2CppGenericMethod m19990_GM;
extern Il2CppGenericMethod m20080_GM;
extern Il2CppGenericMethod m26901_GM;
extern Il2CppGenericMethod m20038_GM;
extern Il2CppGenericMethod m20088_GM;
extern Il2CppGenericMethod m13212_GM;
extern Il2CppGenericMethod m19988_GM;
extern Il2CppGenericMethod m19985_GM;
extern Il2CppGenericMethod m20008_GM;
extern Il2CppGenericMethod m26904_GM;
extern Il2CppGenericMethod m20098_GM;
extern Il2CppGenericMethod m29247_GM;
extern Il2CppGenericMethod m4223_GM;
extern Il2CppGenericMethod m29248_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m673_MI;
extern MethodInfo m4269_MI;
extern Il2CppGenericMethod m20010_GM;
extern Il2CppGenericMethod m20012_GM;


#include "t3396.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3396_TI;
#include "t3396MD.h"

extern Il2CppType t3396_0_0_0;
struct t121;
extern "C" t3395  m26883_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m26883(__this, p0, method) (( t3395  (*) (t121 *, int32_t, MethodInfo*))m26883_gshared)(__this, p0, method)
extern Il2CppGenericMethod m20018_GM;
extern Il2CppGenericMethod m26883_GM;


extern Il2CppGenericMethod m20014_GM;
extern "C" void m20014_gshared (t3396 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m20015_GM;
extern "C" t9 * m20015_gshared (t3396 * __this, MethodInfo* method)
{
	{
		t3395  L_0 = (( t3395  (*) (t3396 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t3395  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m20016_GM;
extern "C" void m20016_gshared (t3396 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m20017_GM;
extern "C" bool m20017_gshared (t3396 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		t121 * L_1 = (__this->f0);
		int32_t L_2 = m5689(L_1, &m5689_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->f1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern "C" t3395  m20018_gshared (t3396 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_1, (t2*) &_stringLiteral1249, &m5685_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		t1332 * L_3 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_3, (t2*) &_stringLiteral1250, &m5685_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t121 * L_4 = (__this->f0);
		t121 * L_5 = (__this->f0);
		int32_t L_6 = m5689(L_5, &m5689_MI);
		int32_t L_7 = (__this->f1);
		t3395  L_8 = (( t3395  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4747_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4069_TI;



#ifndef _MSC_VER
#else
#endif

#include "t3398.h"
#include "t3400.h"
extern TypeInfo t3398_TI;
extern TypeInfo t3400_TI;
#include "t3400MD.h"
#include "t3398MD.h"
extern Il2CppType t3398_0_0_0;
extern Il2CppType t3400_0_0_0;
extern MethodInfo m20030_MI;
extern MethodInfo m19991_MI;
extern MethodInfo m20050_MI;
extern MethodInfo m20033_MI;
struct t711;
struct t2685;
#include "t2706.h"
extern "C" void m24992_gshared (t2685 * __this, t121 * p0, int32_t p1, t2706 * p2, MethodInfo* method);
#define m24992(__this, p0, p1, p2, method) (( void (*) (t2685 *, t121 *, int32_t, t2706 *, MethodInfo*))m24992_gshared)(__this, p0, p1, p2, method)
#define m26894(__this, p0, p1, p2, method) (( void (*) (t711 *, t121 *, int32_t, t3400 *, MethodInfo*))m24992_gshared)(__this, p0, p1, p2, method)
struct t711;
extern "C" void m26895 (t711 * __this, t221* p0, int32_t p1, t3400 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m20031_GM;
extern Il2CppGenericMethod m20030_GM;
extern Il2CppGenericMethod m19991_GM;
extern Il2CppGenericMethod m20050_GM;
extern Il2CppGenericMethod m26894_GM;
extern Il2CppGenericMethod m26895_GM;
extern Il2CppGenericMethod m20033_GM;


#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m20045_GM;
extern Il2CppGenericMethod m20006_GM;
extern Il2CppGenericMethod m20049_GM;
extern Il2CppGenericMethod m20043_GM;


#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m20048_GM;
extern Il2CppGenericMethod m20046_GM;
extern Il2CppGenericMethod m20047_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t875.h"
#include "t3401.h"
extern TypeInfo t875_TI;
extern TypeInfo t3401_TI;
#include "t3401MD.h"
#include "t875MD.h"
extern Il2CppType t875_0_0_0;
extern Il2CppType t3401_0_0_0;
extern MethodInfo m20065_MI;
extern MethodInfo m19992_MI;
extern MethodInfo m20072_MI;
extern MethodInfo m20067_MI;
struct t711;
#define m26897(__this, p0, p1, p2, method) (( void (*) (t711 *, t121 *, int32_t, t3401 *, MethodInfo*))m24992_gshared)(__this, p0, p1, p2, method)
struct t711;
extern "C" void m26898 (t711 * __this, t710* p0, int32_t p1, t3401 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m19998_GM;
extern Il2CppGenericMethod m4225_GM;
extern Il2CppGenericMethod m20065_GM;
extern Il2CppGenericMethod m19992_GM;
extern Il2CppGenericMethod m20072_GM;
extern Il2CppGenericMethod m26897_GM;
extern Il2CppGenericMethod m26898_GM;
extern Il2CppGenericMethod m20067_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3403_TI;
#include "t3403MD.h"



extern Il2CppGenericMethod m20081_GM;
extern "C" void m20081_gshared (t3403 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m20083_GM;
extern "C" t3395  m20083_gshared (t3403 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m20083((t3403 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t3395  (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t3395  (*FunctionPointerType) (t9 * __this, t9 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t3395  (*FunctionPointerType) (t9 * __this, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern Il2CppGenericMethod m20085_GM;
extern "C" t9 * m20085_gshared (t3403 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m20087_GM;
extern "C" t3395  m20087_gshared (t3403 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t3395 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m20090_MI;
extern Il2CppGenericMethod m20044_GM;
extern Il2CppGenericMethod m20090_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t3406.h"
extern TypeInfo t3406_TI;
#include "t3406MD.h"
extern Il2CppType t4748_0_0_0;
extern Il2CppType t3406_0_0_0;
extern MethodInfo m20099_MI;
extern MethodInfo m29249_MI;
extern Il2CppGenericMethod m20099_GM;
extern Il2CppGenericMethod m29249_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4748_TI;



#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m20094_GM;


#include "t713.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t713_TI;
#include "t713MD.h"

#include "t3410.h"
#include "t3414.h"
#include "t3408.h"
#include "t3407.h"
#include "t3417.h"
#include "t3412.h"
#include "t3419.h"
#include "t2976.h"
extern TypeInfo t3410_TI;
extern TypeInfo t3414_TI;
extern TypeInfo t4749_TI;
extern TypeInfo t4750_TI;
extern TypeInfo t4075_TI;
extern TypeInfo t3408_TI;
extern TypeInfo t4074_TI;
extern TypeInfo t3407_TI;
extern TypeInfo t3417_TI;
extern TypeInfo t3412_TI;
extern TypeInfo t3419_TI;
extern TypeInfo t2976_TI;
extern TypeInfo t2963_TI;
#include "t3410MD.h"
#include "t3414MD.h"
#include "t3408MD.h"
#include "t3407MD.h"
#include "t3417MD.h"
#include "t3412MD.h"
#include "t3419MD.h"
#include "t2976MD.h"
extern Il2CppType t713_0_0_0;
extern Il2CppType t3410_0_0_0;
extern Il2CppType t3414_0_0_0;
extern Il2CppType t4749_0_0_0;
extern Il2CppType t4750_0_0_0;
extern Il2CppType t4075_0_0_0;
extern Il2CppType t4074_0_0_0;
extern Il2CppType t3408_0_0_0;
extern Il2CppType t3407_0_0_0;
extern Il2CppType t3417_0_0_0;
extern Il2CppType t3412_0_0_0;
extern Il2CppType t3419_0_0_0;
extern Il2CppType t2976_0_0_0;
extern Il2CppType t2963_0_0_0;
extern Il2CppType t125_0_0_0;
extern MethodInfo m20137_MI;
extern MethodInfo m20126_MI;
extern MethodInfo m20127_MI;
extern MethodInfo m20160_MI;
extern MethodInfo m20195_MI;
extern MethodInfo m29250_MI;
extern MethodInfo m29251_MI;
extern MethodInfo m29252_MI;
extern MethodInfo m5748_MI;
extern MethodInfo m20141_MI;
extern MethodInfo m20148_MI;
extern MethodInfo m20218_MI;
extern MethodInfo m20131_MI;
extern MethodInfo m20222_MI;
extern MethodInfo m20179_MI;
extern MethodInfo m20230_MI;
extern MethodInfo m20125_MI;
extern MethodInfo m20149_MI;
extern MethodInfo m28930_MI;
extern MethodInfo m5749_MI;
extern MethodInfo m28935_MI;
struct t713;
extern "C" void m26922 (t713 * __this, t4172* p0, int32_t p1, t3407 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t713;
struct t3125;
#include "t3125.h"
#include "t3418.h"
extern "C" void m26925_gshared (t3125 * __this, t121 * p0, int32_t p1, t3418 * p2, MethodInfo* method);
#define m26925(__this, p0, p1, p2, method) (( void (*) (t3125 *, t121 *, int32_t, t3418 *, MethodInfo*))m26925_gshared)(__this, p0, p1, p2, method)
#define m26924(__this, p0, p1, p2, method) (( void (*) (t713 *, t121 *, int32_t, t3417 *, MethodInfo*))m26925_gshared)(__this, p0, p1, p2, method)
struct t713;
extern "C" void m26927 (t713 * __this, t4074* p0, int32_t p1, t3417 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m20142_GM;
extern Il2CppGenericMethod m20143_GM;
extern Il2CppGenericMethod m20137_GM;
extern Il2CppGenericMethod m20144_GM;
extern Il2CppGenericMethod m20126_GM;
extern Il2CppGenericMethod m20145_GM;
extern Il2CppGenericMethod m20127_GM;
extern Il2CppGenericMethod m20135_GM;
extern Il2CppGenericMethod m20160_GM;
extern Il2CppGenericMethod m20195_GM;
extern Il2CppGenericMethod m20128_GM;
extern Il2CppGenericMethod m20105_GM;
extern Il2CppGenericMethod m29250_GM;
extern Il2CppGenericMethod m29251_GM;
extern Il2CppGenericMethod m29252_GM;
extern Il2CppGenericMethod m20150_GM;
extern Il2CppGenericMethod m20152_GM;
extern Il2CppGenericMethod m5748_GM;
extern Il2CppGenericMethod m20141_GM;
extern Il2CppGenericMethod m20146_GM;
extern Il2CppGenericMethod m20134_GM;
extern Il2CppGenericMethod m20130_GM;
extern Il2CppGenericMethod m20148_GM;
extern Il2CppGenericMethod m20218_GM;
extern Il2CppGenericMethod m26922_GM;
extern Il2CppGenericMethod m20131_GM;
extern Il2CppGenericMethod m20222_GM;
extern Il2CppGenericMethod m26924_GM;
extern Il2CppGenericMethod m20179_GM;
extern Il2CppGenericMethod m20230_GM;
extern Il2CppGenericMethod m20129_GM;
extern Il2CppGenericMethod m20125_GM;
extern Il2CppGenericMethod m20149_GM;
extern Il2CppGenericMethod m26927_GM;
extern Il2CppGenericMethod m15599_GM;
extern Il2CppGenericMethod m28930_GM;
extern Il2CppGenericMethod m5749_GM;
extern Il2CppGenericMethod m28935_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m20151_GM;
extern Il2CppGenericMethod m20153_GM;


#include "t3409.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3409_TI;
#include "t3409MD.h"

extern Il2CppType t3409_0_0_0;
struct t121;
extern "C" t3408  m26906_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m26906(__this, p0, method) (( t3408  (*) (t121 *, int32_t, MethodInfo*))m26906_gshared)(__this, p0, method)
extern Il2CppGenericMethod m20159_GM;
extern Il2CppGenericMethod m26906_GM;


extern Il2CppGenericMethod m20155_GM;
extern "C" void m20155_gshared (t3409 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m20156_GM;
extern "C" t9 * m20156_gshared (t3409 * __this, MethodInfo* method)
{
	{
		t3408  L_0 = (( t3408  (*) (t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t3408  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m20157_GM;
extern "C" void m20157_gshared (t3409 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m20158_GM;
extern "C" bool m20158_gshared (t3409 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		t121 * L_1 = (__this->f0);
		int32_t L_2 = m5689(L_1, &m5689_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->f1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern "C" t3408  m20159_gshared (t3409 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_1, (t2*) &_stringLiteral1249, &m5685_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		t1332 * L_3 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_3, (t2*) &_stringLiteral1250, &m5685_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t121 * L_4 = (__this->f0);
		t121 * L_5 = (__this->f0);
		int32_t L_6 = m5689(L_5, &m5689_MI);
		int32_t L_7 = (__this->f1);
		t3408  L_8 = (( t3408  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4751_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4073_TI;



#ifndef _MSC_VER
#else
#endif

#include "t3411.h"
#include "t3413.h"
extern TypeInfo t3411_TI;
extern TypeInfo t3413_TI;
#include "t3413MD.h"
#include "t3411MD.h"
extern Il2CppType t3411_0_0_0;
extern Il2CppType t3413_0_0_0;
extern MethodInfo m20171_MI;
extern MethodInfo m20132_MI;
extern MethodInfo m20191_MI;
extern MethodInfo m20174_MI;
struct t713;
struct t3125;
#include "t3132.h"
extern "C" void m26256_gshared (t3125 * __this, t121 * p0, int32_t p1, t3132 * p2, MethodInfo* method);
#define m26256(__this, p0, p1, p2, method) (( void (*) (t3125 *, t121 *, int32_t, t3132 *, MethodInfo*))m26256_gshared)(__this, p0, p1, p2, method)
#define m26917(__this, p0, p1, p2, method) (( void (*) (t713 *, t121 *, int32_t, t3413 *, MethodInfo*))m26256_gshared)(__this, p0, p1, p2, method)
struct t713;
extern "C" void m26918 (t713 * __this, t221* p0, int32_t p1, t3413 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m20172_GM;
extern Il2CppGenericMethod m20171_GM;
extern Il2CppGenericMethod m20132_GM;
extern Il2CppGenericMethod m20191_GM;
extern Il2CppGenericMethod m26917_GM;
extern Il2CppGenericMethod m26918_GM;
extern Il2CppGenericMethod m20174_GM;


#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m20186_GM;
extern Il2CppGenericMethod m20147_GM;
extern Il2CppGenericMethod m20190_GM;
extern Il2CppGenericMethod m20184_GM;


#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m20189_GM;
extern Il2CppGenericMethod m20187_GM;
extern Il2CppGenericMethod m20188_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t3415.h"
#include "t3416.h"
extern TypeInfo t3415_TI;
extern TypeInfo t3416_TI;
#include "t3416MD.h"
#include "t3415MD.h"
extern Il2CppType t3415_0_0_0;
extern Il2CppType t3416_0_0_0;
extern MethodInfo m20206_MI;
extern MethodInfo m20133_MI;
extern MethodInfo m20214_MI;
extern MethodInfo m20209_MI;
struct t713;
struct t3125;
#include "t3135.h"
extern "C" void m26258_gshared (t3125 * __this, t121 * p0, int32_t p1, t3135 * p2, MethodInfo* method);
#define m26258(__this, p0, p1, p2, method) (( void (*) (t3125 *, t121 *, int32_t, t3135 *, MethodInfo*))m26258_gshared)(__this, p0, p1, p2, method)
#define m26920(__this, p0, p1, p2, method) (( void (*) (t713 *, t121 *, int32_t, t3416 *, MethodInfo*))m26258_gshared)(__this, p0, p1, p2, method)
struct t713;
extern "C" void m26921 (t713 * __this, t1088* p0, int32_t p1, t3416 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m20138_GM;
extern Il2CppGenericMethod m20207_GM;
extern Il2CppGenericMethod m20206_GM;
extern Il2CppGenericMethod m20133_GM;
extern Il2CppGenericMethod m20214_GM;
extern Il2CppGenericMethod m26920_GM;
extern Il2CppGenericMethod m26921_GM;
extern Il2CppGenericMethod m20209_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3418_TI;
#include "t3418MD.h"



extern Il2CppGenericMethod m20223_GM;
extern "C" void m20223_gshared (t3418 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m20225_GM;
extern "C" t3408  m20225_gshared (t3418 * __this, t9 * p0, int32_t p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m20225((t3418 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t3408  (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, int32_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t3408  (*FunctionPointerType) (t9 * __this, t9 * p0, int32_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t3408  (*FunctionPointerType) (t9 * __this, int32_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern Il2CppGenericMethod m20227_GM;
extern "C" t9 * m20227_gshared (t3418 * __this, t9 * p0, int32_t p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t125_TI), &p1);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m20229_GM;
extern "C" t3408  m20229_gshared (t3418 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t3408 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m20232_MI;
extern Il2CppGenericMethod m20185_GM;
extern Il2CppGenericMethod m20232_GM;


#include "t721.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t721_TI;
#include "t721MD.h"

#include "t3422.h"
#include "t3425.h"
#include "t878.h"
#include "t3420.h"
#include "t3427.h"
#include "t879.h"
#include "t3429.h"
extern TypeInfo t3422_TI;
extern TypeInfo t3425_TI;
extern TypeInfo t4752_TI;
extern TypeInfo t4753_TI;
extern TypeInfo t4077_TI;
extern TypeInfo t878_TI;
extern TypeInfo t4076_TI;
extern TypeInfo t3420_TI;
extern TypeInfo t3427_TI;
extern TypeInfo t879_TI;
extern TypeInfo t3429_TI;
#include "t3422MD.h"
#include "t3425MD.h"
#include "t878MD.h"
#include "t3420MD.h"
#include "t3427MD.h"
#include "t879MD.h"
#include "t3429MD.h"
extern Il2CppType t721_0_0_0;
extern Il2CppType t3422_0_0_0;
extern Il2CppType t3425_0_0_0;
extern Il2CppType t4752_0_0_0;
extern Il2CppType t4753_0_0_0;
extern Il2CppType t4077_0_0_0;
extern Il2CppType t4076_0_0_0;
extern Il2CppType t878_0_0_0;
extern Il2CppType t3420_0_0_0;
extern Il2CppType t3427_0_0_0;
extern Il2CppType t879_0_0_0;
extern Il2CppType t3429_0_0_0;
extern MethodInfo m20270_MI;
extern MethodInfo m20259_MI;
extern MethodInfo m4256_MI;
extern MethodInfo m20290_MI;
extern MethodInfo m20323_MI;
extern MethodInfo m29253_MI;
extern MethodInfo m29254_MI;
extern MethodInfo m29255_MI;
extern MethodInfo m20268_MI;
extern MethodInfo m20274_MI;
extern MethodInfo m20280_MI;
extern MethodInfo m20342_MI;
extern MethodInfo m20263_MI;
extern MethodInfo m20346_MI;
extern MethodInfo m20309_MI;
extern MethodInfo m20354_MI;
extern MethodInfo m4250_MI;
extern MethodInfo m20281_MI;
extern MethodInfo m4243_MI;
extern MethodInfo m25268_MI;
struct t721;
extern "C" void m26942 (t721 * __this, t4172* p0, int32_t p1, t3420 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t721;
struct t2685;
#include "t3428.h"
extern "C" void m26945_gshared (t2685 * __this, t121 * p0, int32_t p1, t3428 * p2, MethodInfo* method);
#define m26945(__this, p0, p1, p2, method) (( void (*) (t2685 *, t121 *, int32_t, t3428 *, MethodInfo*))m26945_gshared)(__this, p0, p1, p2, method)
#define m26944(__this, p0, p1, p2, method) (( void (*) (t721 *, t121 *, int32_t, t3427 *, MethodInfo*))m26945_gshared)(__this, p0, p1, p2, method)
struct t721;
extern "C" void m26947 (t721 * __this, t4076* p0, int32_t p1, t3427 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m20275_GM;
extern Il2CppGenericMethod m20276_GM;
extern Il2CppGenericMethod m20270_GM;
extern Il2CppGenericMethod m20277_GM;
extern Il2CppGenericMethod m20259_GM;
extern Il2CppGenericMethod m20278_GM;
extern Il2CppGenericMethod m4256_GM;
extern Il2CppGenericMethod m20267_GM;
extern Il2CppGenericMethod m20290_GM;
extern Il2CppGenericMethod m20323_GM;
extern Il2CppGenericMethod m20260_GM;
extern Il2CppGenericMethod m20239_GM;
extern Il2CppGenericMethod m29253_GM;
extern Il2CppGenericMethod m29254_GM;
extern Il2CppGenericMethod m29255_GM;
extern Il2CppGenericMethod m4261_GM;
extern Il2CppGenericMethod m4262_GM;
extern Il2CppGenericMethod m20268_GM;
extern Il2CppGenericMethod m20274_GM;
extern Il2CppGenericMethod m20279_GM;
extern Il2CppGenericMethod m20266_GM;
extern Il2CppGenericMethod m20262_GM;
extern Il2CppGenericMethod m20280_GM;
extern Il2CppGenericMethod m20342_GM;
extern Il2CppGenericMethod m26942_GM;
extern Il2CppGenericMethod m20263_GM;
extern Il2CppGenericMethod m20346_GM;
extern Il2CppGenericMethod m26944_GM;
extern Il2CppGenericMethod m20309_GM;
extern Il2CppGenericMethod m20354_GM;
extern Il2CppGenericMethod m20261_GM;
extern Il2CppGenericMethod m4250_GM;
extern Il2CppGenericMethod m20281_GM;
extern Il2CppGenericMethod m26947_GM;
extern Il2CppGenericMethod m4243_GM;
extern Il2CppGenericMethod m25268_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m20282_GM;
extern Il2CppGenericMethod m20283_GM;


#include "t3421.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3421_TI;
#include "t3421MD.h"

extern Il2CppType t3421_0_0_0;
struct t121;
extern "C" t878  m26929_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m26929(__this, p0, method) (( t878  (*) (t121 *, int32_t, MethodInfo*))m26929_gshared)(__this, p0, method)
extern Il2CppGenericMethod m20289_GM;
extern Il2CppGenericMethod m26929_GM;


extern Il2CppGenericMethod m20285_GM;
extern "C" void m20285_gshared (t3421 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m20286_GM;
extern "C" t9 * m20286_gshared (t3421 * __this, MethodInfo* method)
{
	{
		t878  L_0 = (( t878  (*) (t3421 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t878  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m20287_GM;
extern "C" void m20287_gshared (t3421 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m20288_GM;
extern "C" bool m20288_gshared (t3421 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		t121 * L_1 = (__this->f0);
		int32_t L_2 = m5689(L_1, &m5689_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->f1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern "C" t878  m20289_gshared (t3421 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_1, (t2*) &_stringLiteral1249, &m5685_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		t1332 * L_3 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_3, (t2*) &_stringLiteral1250, &m5685_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t121 * L_4 = (__this->f0);
		t121 * L_5 = (__this->f0);
		int32_t L_6 = m5689(L_5, &m5689_MI);
		int32_t L_7 = (__this->f1);
		t878  L_8 = (( t878  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4754_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t898_TI;



#ifndef _MSC_VER
#else
#endif

#include "t3423.h"
#include "t3424.h"
extern TypeInfo t3423_TI;
extern TypeInfo t3424_TI;
#include "t3424MD.h"
#include "t3423MD.h"
extern Il2CppType t3423_0_0_0;
extern Il2CppType t3424_0_0_0;
extern MethodInfo m20301_MI;
extern MethodInfo m20264_MI;
extern MethodInfo m20319_MI;
extern MethodInfo m20304_MI;
struct t721;
#define m26940(__this, p0, p1, p2, method) (( void (*) (t721 *, t121 *, int32_t, t3424 *, MethodInfo*))m24992_gshared)(__this, p0, p1, p2, method)
struct t721;
extern "C" void m26941 (t721 * __this, t221* p0, int32_t p1, t3424 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m20302_GM;
extern Il2CppGenericMethod m20301_GM;
extern Il2CppGenericMethod m20264_GM;
extern Il2CppGenericMethod m20319_GM;
extern Il2CppGenericMethod m26940_GM;
extern Il2CppGenericMethod m26941_GM;
extern Il2CppGenericMethod m20304_GM;


#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m20314_GM;
extern Il2CppGenericMethod m4259_GM;
extern Il2CppGenericMethod m20318_GM;
extern Il2CppGenericMethod m4263_GM;


#ifdef __clang__
#pragma clang diagnostic pop
#endif
