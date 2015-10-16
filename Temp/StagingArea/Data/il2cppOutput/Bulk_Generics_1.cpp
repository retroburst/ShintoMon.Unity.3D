#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2698.h"
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
extern TypeInfo t2698_TI;
#include "t2698MD.h"

#include "t9.h"
#include "t125.h"
#include "t2.h"
#include "t1332.h"
#include "t122.h"
#include "t121.h"
#include "t124.h"
extern TypeInfo t125_TI;
extern TypeInfo t1332_TI;
#include "t1332MD.h"
#include "t121MD.h"
extern Il2CppType t2698_0_0_0;
extern MethodInfo m5685_MI;
extern MethodInfo m5689_MI;
struct t121;
#include "t896.h"
extern "C" int32_t m24937_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m24937(__this, p0, method) (( int32_t (*) (t121 *, int32_t, MethodInfo*))m24937_gshared)(__this, p0, method)
extern Il2CppGenericMethod m12984_GM;
extern Il2CppGenericMethod m24937_GM;


extern Il2CppGenericMethod m12980_GM;
extern "C" void m12980_gshared (t2698 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m12981_GM;
extern "C" t9 * m12981_gshared (t2698 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (t2698 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m12982_GM;
extern "C" void m12982_gshared (t2698 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m12983_GM;
extern "C" bool m12983_gshared (t2698 * __this, MethodInfo* method)
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
extern "C" int32_t m12984_gshared (t2698 * __this, MethodInfo* method)
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
		int32_t L_8 = (( int32_t (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3975_TI;

#include "mscorlib_ArrayTypes.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4382_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4383_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4384_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4385_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4386_TI;



#include "t2699.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2699_TI;
#include "t2699MD.h"

extern TypeInfo t183_TI;
extern Il2CppType t2699_0_0_0;
struct t121;
struct t121;
extern "C" t9 * m24739_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m24739(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
#define m24948(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m12989_GM;
extern Il2CppGenericMethod m24948_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4387_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4388_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4389_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4390_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2194_TI;



#include "t2700.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2700_TI;
#include "t2700MD.h"

extern Il2CppType t2700_0_0_0;
extern Il2CppType t2194_0_0_0;
struct t121;
#define m24959(__this, p0, method) (( t9* (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m12994_GM;
extern Il2CppGenericMethod m24959_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4391_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4392_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4393_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4394_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2195_TI;



#include "t2701.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2701_TI;
#include "t2701MD.h"

extern Il2CppType t2701_0_0_0;
extern Il2CppType t2195_0_0_0;
struct t121;
#define m24970(__this, p0, method) (( t9* (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m12999_GM;
extern Il2CppGenericMethod m24970_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4395_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4396_TI;

#include "t1659.h"


#include "t2702.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2702_TI;
#include "t2702MD.h"

extern TypeInfo t1659_TI;
extern Il2CppType t2702_0_0_0;
struct t121;
extern "C" t1659  m24981_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m24981(__this, p0, method) (( t1659  (*) (t121 *, int32_t, MethodInfo*))m24981_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13004_GM;
extern Il2CppGenericMethod m24981_GM;


extern Il2CppGenericMethod m13000_GM;
extern "C" void m13000_gshared (t2702 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m13001_GM;
extern "C" t9 * m13001_gshared (t2702 * __this, MethodInfo* method)
{
	{
		t1659  L_0 = (( t1659  (*) (t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t1659  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m13002_GM;
extern "C" void m13002_gshared (t2702 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m13003_GM;
extern "C" bool m13003_gshared (t2702 * __this, MethodInfo* method)
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
extern "C" t1659  m13004_gshared (t2702 * __this, MethodInfo* method)
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
		t1659  L_8 = (( t1659  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4397_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4398_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4399_TI;



#include "t2703.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2703_TI;
#include "t2703MD.h"

#include "t2685.h"
#include "t132.h"
#include "t169.h"
#include "t2704.h"
#include "t2706.h"
#include "t58.h"
extern TypeInfo t991_TI;
extern TypeInfo t9_TI;
extern TypeInfo t2685_TI;
extern TypeInfo t132_TI;
extern TypeInfo t169_TI;
extern TypeInfo t124_TI;
extern TypeInfo t2704_TI;
extern TypeInfo t158_TI;
extern TypeInfo t122_TI;
extern TypeInfo t2706_TI;
#include "t2685MD.h"
#include "t9MD.h"
#include "t132MD.h"
#include "t169MD.h"
#include "t2706MD.h"
#include "t2704MD.h"
extern Il2CppType t2685_0_0_0;
extern Il2CppType t2704_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t2703_0_0_0;
extern Il2CppType t2706_0_0_0;
extern MethodInfo m11969_MI;
extern MethodInfo m12882_MI;
extern MethodInfo m336_MI;
extern MethodInfo m339_MI;
extern MethodInfo m5706_MI;
extern MethodInfo m12905_MI;
extern MethodInfo m13016_MI;
extern MethodInfo m12895_MI;
extern MethodInfo m13036_MI;
extern MethodInfo m13019_MI;
struct t2685;
#include "t126.h"
#include "t138.h"
#include "t127.h"
#include "t556.h"
extern "C" void m24992_gshared (t2685 * __this, t121 * p0, int32_t p1, t2706 * p2, MethodInfo* method);
#define m24992(__this, p0, p1, p2, method) (( void (*) (t2685 *, t121 *, int32_t, t2706 *, MethodInfo*))m24992_gshared)(__this, p0, p1, p2, method)
struct t2685;
extern "C" void m24991 (t2685 * __this, t158* p0, int32_t p1, t2706 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m12882_GM;
extern Il2CppGenericMethod m12905_GM;
extern Il2CppGenericMethod m13017_GM;
extern Il2CppGenericMethod m13016_GM;
extern Il2CppGenericMethod m12891_GM;
extern Il2CppGenericMethod m12895_GM;
extern Il2CppGenericMethod m13036_GM;
extern Il2CppGenericMethod m24992_GM;
extern Il2CppGenericMethod m24991_GM;
extern Il2CppGenericMethod m13019_GM;


extern Il2CppGenericMethod m13005_GM;
extern "C" void m13005_gshared (t2703 * __this, t2685 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2685 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1379, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2685 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern Il2CppGenericMethod m13006_GM;
extern "C" void m13006_gshared (t2703 * __this, t9 * p0, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1386, &m5706_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m13007_GM;
extern "C" void m13007_gshared (t2703 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1386, &m5706_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m13008_GM;
extern "C" bool m13008_gshared (t2703 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2685 * L_0 = (__this->f0);
		t9 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m13009_GM;
extern "C" bool m13009_gshared (t2703 * __this, t9 * p0, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1386, &m5706_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m13010_GM;
extern "C" t9* m13010_gshared (t2703 * __this, MethodInfo* method)
{
	{
		t2704  L_0 = (( t2704  (*) (t2703 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2704  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t9*)L_2;
	}
}
extern Il2CppGenericMethod m13011_GM;
extern "C" void m13011_gshared (t2703 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	t158* V_0 = {0};
	{
		t121 * L_0 = p0;
		V_0 = ((t158*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		t158* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t158* L_2 = V_0;
		int32_t L_3 = p1;
		VirtActionInvoker2< t158*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		t2685 * L_4 = (__this->f0);
		t121 * L_5 = p0;
		int32_t L_6 = p1;
		(( void (*) (t2685 *, t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2685 * L_7 = (__this->f0);
		t121 * L_8 = p0;
		int32_t L_9 = p1;
		t58 L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2706 * L_11 = (t2706 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2706 *, t9 *, t58, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2685 *, t121 *, int32_t, t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
extern Il2CppGenericMethod m13012_GM;
extern "C" t9 * m13012_gshared (t2703 * __this, MethodInfo* method)
{
	{
		t2704  L_0 = (( t2704  (*) (t2703 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2704  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t9 *)L_2;
	}
}
extern Il2CppGenericMethod m13013_GM;
extern "C" bool m13013_gshared (t2703 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern Il2CppGenericMethod m13014_GM;
extern "C" bool m13014_gshared (t2703 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern Il2CppGenericMethod m13015_GM;
extern "C" t9 * m13015_gshared (t2703 * __this, MethodInfo* method)
{
	{
		t2685 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m11969_MI, L_0);
		return L_1;
	}
}
extern "C" void m13016_gshared (t2703 * __this, t158* p0, int32_t p1, MethodInfo* method)
{
	{
		t2685 * L_0 = (__this->f0);
		t158* L_1 = p0;
		int32_t L_2 = p1;
		(( void (*) (t2685 *, t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (t121 *)(t121 *)L_1, L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2685 * L_3 = (__this->f0);
		t158* L_4 = p0;
		int32_t L_5 = p1;
		t58 L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2706 * L_7 = (t2706 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2706 *, t9 *, t58, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2685 *, t158*, int32_t, t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
extern "C" t2704  m13017_gshared (t2703 * __this, MethodInfo* method)
{
	{
		t2685 * L_0 = (__this->f0);
		t2704  L_1 = {0};
		(( void (*) (t2704 *, t2685 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern Il2CppGenericMethod m13018_GM;
extern "C" int32_t m13018_gshared (t2703 * __this, MethodInfo* method)
{
	{
		t2685 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2705.h"
#include "t2688.h"
extern TypeInfo t2705_TI;
#include "t2705MD.h"
#include "t2688MD.h"
extern Il2CppType t2705_0_0_0;
extern Il2CppGenericMethod m13031_GM;
extern Il2CppGenericMethod m12930_GM;
extern Il2CppGenericMethod m12926_GM;
extern Il2CppGenericMethod m13035_GM;
extern Il2CppGenericMethod m13029_GM;


extern "C" void m13019_gshared (t2704 * __this, t2685 * p0, MethodInfo* method)
{
	{
		t2685 * L_0 = p0;
		t2705  L_1 = (( t2705  (*) (t2685 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern Il2CppGenericMethod m13020_GM;
extern "C" t9 * m13020_gshared (t2704 * __this, MethodInfo* method)
{
	{
		t2705 * L_0 = &(__this->f0);
		t9 * L_1 = (( t9 * (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t9 * L_2 = L_1;
		return ((t9 *)L_2);
	}
}
extern Il2CppGenericMethod m13021_GM;
extern "C" void m13021_gshared (t2704 * __this, MethodInfo* method)
{
	{
		t2705 * L_0 = &(__this->f0);
		(( void (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
extern Il2CppGenericMethod m13022_GM;
extern "C" bool m13022_gshared (t2704 * __this, MethodInfo* method)
{
	{
		t2705 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern Il2CppGenericMethod m13023_GM;
extern "C" t9 * m13023_gshared (t2704 * __this, MethodInfo* method)
{
	{
		t2705 * L_0 = &(__this->f0);
		t2688 * L_1 = &(L_0->f3);
		t9 * L_2 = (( t9 * (*) (t2688 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1155.h"
#include "t1521.h"
extern TypeInfo t2688_TI;
extern TypeInfo t1155_TI;
extern TypeInfo t1521_TI;
#include "t1155MD.h"
#include "t1521MD.h"
extern Il2CppType t2688_0_0_0;
extern MethodInfo m5686_MI;
extern MethodInfo m12929_MI;
extern MethodInfo m6883_MI;
extern Il2CppGenericMethod m13034_GM;
extern Il2CppGenericMethod m12932_GM;
extern Il2CppGenericMethod m13032_GM;
extern Il2CppGenericMethod m13033_GM;
extern Il2CppGenericMethod m12929_GM;


extern Il2CppGenericMethod m13024_GM;
extern "C" void m13024_gshared (t2705 * __this, t2685 * p0, MethodInfo* method)
{
	{
		t2685 * L_0 = p0;
		__this->f0 = L_0;
		t2685 * L_1 = p0;
		int32_t L_2 = (L_1->f14);
		__this->f2 = L_2;
		return;
	}
}
extern Il2CppGenericMethod m13025_GM;
extern "C" t9 * m13025_gshared (t2705 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2688  L_0 = (__this->f3);
		t2688  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m13026_GM;
extern "C" t1155  m13026_gshared (t2705 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2688 * L_0 = &(__this->f3);
		t9 * L_1 = (( t9 * (*) (t2688 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		t9 * L_2 = L_1;
		t2688 * L_3 = &(__this->f3);
		t9 * L_4 = (( t9 * (*) (t2688 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		t9 * L_5 = L_4;
		t1155  L_6 = {0};
		m5686(&L_6, ((t9 *)L_2), ((t9 *)L_5), &m5686_MI);
		return L_6;
	}
}
extern Il2CppGenericMethod m13027_GM;
extern "C" t9 * m13027_gshared (t2705 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (( t9 * (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		t9 * L_1 = L_0;
		return ((t9 *)L_1);
	}
}
extern Il2CppGenericMethod m13028_GM;
extern "C" t9 * m13028_gshared (t2705 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (( t9 * (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		t9 * L_1 = L_0;
		return ((t9 *)L_1);
	}
}
extern "C" bool m13029_gshared (t2705 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->f1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = L_3;
		t2685 * L_4 = (__this->f0);
		t2506* L_5 = (L_4->f5);
		int32_t L_6 = V_0;
		int32_t L_7 = (((t1659 *)(t1659 *)SZArrayLdElema(L_5, L_6))->f0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t2685 * L_8 = (__this->f0);
		t158* L_9 = (L_8->f6);
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		t2685 * L_12 = (__this->f0);
		t158* L_13 = (L_12->f7);
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		t2688  L_16 = {0};
		(( void (*) (t2688 *, t9 *, t9 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(t9 **)(t9 **)SZArrayLdElema(L_9, L_11)), (*(t9 **)(t9 **)SZArrayLdElema(L_13, L_15)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->f3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->f1);
		t2685 * L_18 = (__this->f0);
		int32_t L_19 = (L_18->f8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern Il2CppGenericMethod m13030_GM;
extern "C" t2688  m13030_gshared (t2705 * __this, MethodInfo* method)
{
	{
		t2688  L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" t9 * m13031_gshared (t2705 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2688 * L_0 = &(__this->f3);
		t9 * L_1 = (( t9 * (*) (t2688 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
extern "C" t9 * m13032_gshared (t2705 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2688 * L_0 = &(__this->f3);
		t9 * L_1 = (( t9 * (*) (t2688 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" void m13033_gshared (t2705 * __this, MethodInfo* method)
{
	{
		t2685 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_1, (t2*)NULL, &m6883_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t2685 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f14);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1332 * L_5 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_5, (t2*) &_stringLiteral1385, &m5685_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
extern "C" void m13034_gshared (t2705 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_1, (t2*) &_stringLiteral404, &m5685_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
extern "C" void m13035_gshared (t2705 * __this, MethodInfo* method)
{
	{
		__this->f0 = (t2685 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t463.h"


extern "C" void m13036_gshared (t2706 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m13037_GM;
extern "C" t9 * m13037_gshared (t2706 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m13037((t2706 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t9 * (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t9 * (*FunctionPointerType) (t9 * __this, t9 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t9 * (*FunctionPointerType) (t9 * __this, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern Il2CppGenericMethod m13038_GM;
extern "C" t9 * m13038_gshared (t2706 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m13039_GM;
extern "C" t9 * m13039_gshared (t2706 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t9 *)__result;
}
#include "t2707.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2707_TI;
#include "t2707MD.h"

#include "t2708.h"
extern TypeInfo t2708_TI;
#include "t2708MD.h"
extern Il2CppType t2708_0_0_0;
extern Il2CppType t2707_0_0_0;
extern MethodInfo m13051_MI;
extern MethodInfo m12897_MI;
extern MethodInfo m13054_MI;
extern Il2CppGenericMethod m12907_GM;
extern Il2CppGenericMethod m13052_GM;
extern Il2CppGenericMethod m13051_GM;
extern Il2CppGenericMethod m12897_GM;
extern Il2CppGenericMethod m13054_GM;


extern Il2CppGenericMethod m13040_GM;
extern "C" void m13040_gshared (t2707 * __this, t2685 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2685 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1379, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2685 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern Il2CppGenericMethod m13041_GM;
extern "C" void m13041_gshared (t2707 * __this, t9 * p0, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1386, &m5706_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m13042_GM;
extern "C" void m13042_gshared (t2707 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1386, &m5706_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m13043_GM;
extern "C" bool m13043_gshared (t2707 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2685 * L_0 = (__this->f0);
		t9 * L_1 = p0;
		bool L_2 = (( bool (*) (t2685 *, t9 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
extern Il2CppGenericMethod m13044_GM;
extern "C" bool m13044_gshared (t2707 * __this, t9 * p0, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1386, &m5706_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m13045_GM;
extern "C" t9* m13045_gshared (t2707 * __this, MethodInfo* method)
{
	{
		t2708  L_0 = (( t2708  (*) (t2707 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2708  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t9*)L_2;
	}
}
extern Il2CppGenericMethod m13046_GM;
extern "C" void m13046_gshared (t2707 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	t158* V_0 = {0};
	{
		t121 * L_0 = p0;
		V_0 = ((t158*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		t158* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t158* L_2 = V_0;
		int32_t L_3 = p1;
		VirtActionInvoker2< t158*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		t2685 * L_4 = (__this->f0);
		t121 * L_5 = p0;
		int32_t L_6 = p1;
		(( void (*) (t2685 *, t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2685 * L_7 = (__this->f0);
		t121 * L_8 = p0;
		int32_t L_9 = p1;
		t58 L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2706 * L_11 = (t2706 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2706 *, t9 *, t58, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2685 *, t121 *, int32_t, t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
extern Il2CppGenericMethod m13047_GM;
extern "C" t9 * m13047_gshared (t2707 * __this, MethodInfo* method)
{
	{
		t2708  L_0 = (( t2708  (*) (t2707 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2708  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t9 *)L_2;
	}
}
extern Il2CppGenericMethod m13048_GM;
extern "C" bool m13048_gshared (t2707 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern Il2CppGenericMethod m13049_GM;
extern "C" bool m13049_gshared (t2707 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern Il2CppGenericMethod m13050_GM;
extern "C" t9 * m13050_gshared (t2707 * __this, MethodInfo* method)
{
	{
		t2685 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m11969_MI, L_0);
		return L_1;
	}
}
extern "C" void m13051_gshared (t2707 * __this, t158* p0, int32_t p1, MethodInfo* method)
{
	{
		t2685 * L_0 = (__this->f0);
		t158* L_1 = p0;
		int32_t L_2 = p1;
		(( void (*) (t2685 *, t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (t121 *)(t121 *)L_1, L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2685 * L_3 = (__this->f0);
		t158* L_4 = p0;
		int32_t L_5 = p1;
		t58 L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2706 * L_7 = (t2706 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2706 *, t9 *, t58, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2685 *, t158*, int32_t, t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
extern "C" t2708  m13052_gshared (t2707 * __this, MethodInfo* method)
{
	{
		t2685 * L_0 = (__this->f0);
		t2708  L_1 = {0};
		(( void (*) (t2708 *, t2685 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern Il2CppGenericMethod m13053_GM;
extern "C" int32_t m13053_gshared (t2707 * __this, MethodInfo* method)
{
	{
		t2685 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m13054_gshared (t2708 * __this, t2685 * p0, MethodInfo* method)
{
	{
		t2685 * L_0 = p0;
		t2705  L_1 = (( t2705  (*) (t2685 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern Il2CppGenericMethod m13055_GM;
extern "C" t9 * m13055_gshared (t2708 * __this, MethodInfo* method)
{
	{
		t2705 * L_0 = &(__this->f0);
		t9 * L_1 = (( t9 * (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t9 * L_2 = L_1;
		return ((t9 *)L_2);
	}
}
extern Il2CppGenericMethod m13056_GM;
extern "C" void m13056_gshared (t2708 * __this, MethodInfo* method)
{
	{
		t2705 * L_0 = &(__this->f0);
		(( void (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
extern Il2CppGenericMethod m13057_GM;
extern "C" bool m13057_gshared (t2708 * __this, MethodInfo* method)
{
	{
		t2705 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern Il2CppGenericMethod m13058_GM;
extern "C" t9 * m13058_gshared (t2708 * __this, MethodInfo* method)
{
	{
		t2705 * L_0 = &(__this->f0);
		t2688 * L_1 = &(L_0->f3);
		t9 * L_2 = (( t9 * (*) (t2688 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#include "t2687.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2687_TI;
#include "t2687MD.h"



extern Il2CppGenericMethod m13059_GM;
extern "C" void m13059_gshared (t2687 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m13060_GM;
extern "C" t1155  m13060_gshared (t2687 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m13060((t2687 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t1155  (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t1155  (*FunctionPointerType) (t9 * __this, t9 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t1155  (*FunctionPointerType) (t9 * __this, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern Il2CppGenericMethod m13061_GM;
extern "C" t9 * m13061_gshared (t2687 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m13062_GM;
extern "C" t1155  m13062_gshared (t2687 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1155 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4400_TI;



#include "t2709.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2709_TI;
#include "t2709MD.h"

extern Il2CppType t2709_0_0_0;
struct t121;
extern "C" t1155  m24994_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m24994(__this, p0, method) (( t1155  (*) (t121 *, int32_t, MethodInfo*))m24994_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13067_GM;
extern Il2CppGenericMethod m24994_GM;


extern Il2CppGenericMethod m13063_GM;
extern "C" void m13063_gshared (t2709 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m13064_GM;
extern "C" t9 * m13064_gshared (t2709 * __this, MethodInfo* method)
{
	{
		t1155  L_0 = (( t1155  (*) (t2709 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t1155  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m13065_GM;
extern "C" void m13065_gshared (t2709 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m13066_GM;
extern "C" bool m13066_gshared (t2709 * __this, MethodInfo* method)
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
extern "C" t1155  m13067_gshared (t2709 * __this, MethodInfo* method)
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
		t1155  L_8 = (( t1155  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4401_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4402_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4403_TI;



#include "t2710.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2710_TI;
#include "t2710MD.h"



extern Il2CppGenericMethod m13068_GM;
extern "C" void m13068_gshared (t2710 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m13069_GM;
extern "C" t2688  m13069_gshared (t2710 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m13069((t2710 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t2688  (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t2688  (*FunctionPointerType) (t9 * __this, t9 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t2688  (*FunctionPointerType) (t9 * __this, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern Il2CppGenericMethod m13070_GM;
extern "C" t9 * m13070_gshared (t2710 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m13071_GM;
extern "C" t2688  m13071_gshared (t2710 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2688 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t2711.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2711_TI;
#include "t2711MD.h"

extern TypeInfo t1152_TI;
extern Il2CppType t2711_0_0_0;
extern MethodInfo m11972_MI;
extern MethodInfo m13074_MI;
extern Il2CppGenericMethod m13074_GM;


extern Il2CppGenericMethod m13072_GM;
extern "C" void m13072_gshared (t2711 * __this, t2685 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2685 * L_0 = p0;
		t2705  L_1 = (( t2705  (*) (t2685 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern Il2CppGenericMethod m13073_GM;
extern "C" bool m13073_gshared (t2711 * __this, MethodInfo* method)
{
	{
		t2705 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
extern "C" t1155  m13074_gshared (t2711 * __this, MethodInfo* method)
{
	{
		t2705  L_0 = (__this->f0);
		t2705  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		t1155  L_3 = (t1155 )InterfaceFuncInvoker0< t1155  >::Invoke(&m11972_MI, L_2);
		return L_3;
	}
}
extern Il2CppGenericMethod m13075_GM;
extern "C" t9 * m13075_gshared (t2711 * __this, MethodInfo* method)
{
	t2688  V_0 = {0};
	{
		t2705 * L_0 = &(__this->f0);
		t2688  L_1 = (( t2688  (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		t9 * L_2 = (( t9 * (*) (t2688 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		t9 * L_3 = L_2;
		return ((t9 *)L_3);
	}
}
extern Il2CppGenericMethod m13076_GM;
extern "C" t9 * m13076_gshared (t2711 * __this, MethodInfo* method)
{
	t2688  V_0 = {0};
	{
		t2705 * L_0 = &(__this->f0);
		t2688  L_1 = (( t2688  (*) (t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		t9 * L_2 = (( t9 * (*) (t2688 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		t9 * L_3 = L_2;
		return ((t9 *)L_3);
	}
}
extern Il2CppGenericMethod m13077_GM;
extern "C" t9 * m13077_gshared (t2711 * __this, MethodInfo* method)
{
	{
		t1155  L_0 = (t1155 )VirtFuncInvoker0< t1155  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		t1155  L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t1155_TI), &L_1);
		return L_2;
	}
}
#include "t2166.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2166_TI;
#include "t2166MD.h"

#include "t2718.h"
extern TypeInfo t126_TI;
extern TypeInfo t152_TI;
extern TypeInfo t2718_TI;
#include "t126MD.h"
#include "t1338MD.h"
#include "t2718MD.h"
extern Il2CppType t2166_0_0_0;
extern Il2CppType t4375_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t2525_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t2718_0_0_0;
extern MethodInfo m329_MI;
extern MethodInfo m4449_MI;
extern MethodInfo m4447_MI;
extern MethodInfo m11083_MI;
extern MethodInfo m13113_MI;
extern MethodInfo m28788_MI;
extern MethodInfo m25155_MI;
extern Il2CppGenericMethod m13113_GM;
extern Il2CppGenericMethod m28788_GM;
extern Il2CppGenericMethod m25155_GM;


extern Il2CppGenericMethod m13078_GM;
extern "C" void m13078_gshared (t2166 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern Il2CppGenericMethod m13079_GM;
extern "C" void m13079_gshared (t9 * __this , MethodInfo* method)
{
	t2718 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2718 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (t2718 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((t2166_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern Il2CppGenericMethod m13080_GM;
extern "C" int32_t m13080_gshared (t2166 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((t9 *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))));
		return L_1;
	}
}
extern Il2CppGenericMethod m13081_GM;
extern "C" bool m13081_gshared (t2166 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		bool L_2 = (bool)VirtFuncInvoker2< bool, t9 *, t9 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((t9 *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), ((t9 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))));
		return L_2;
	}
}
extern Il2CppGenericMethod m13082_GM;
extern "C" t2166 * m13082_gshared (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2166 * L_0 = ((t2166_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4119_TI;



#include "t2712.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2712_TI;
#include "t2712MD.h"

extern Il2CppType t2712_0_0_0;
struct t121;
#define m25008(__this, p0, method) (( t126 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13087_GM;
extern Il2CppGenericMethod m25008_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4115_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4139_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3715_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4404_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4405_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4406_TI;



#include "t2713.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2713_TI;
#include "t2713MD.h"

extern TypeInfo t2410_TI;
extern Il2CppType t2713_0_0_0;
struct t121;
#define m25019(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13092_GM;
extern Il2CppGenericMethod m25019_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4407_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4408_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4409_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4410_TI;



#include "t2714.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2714_TI;
#include "t2714MD.h"

extern TypeInfo t2411_TI;
extern Il2CppType t2714_0_0_0;
struct t121;
#define m25030(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13097_GM;
extern Il2CppGenericMethod m25030_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4411_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4412_TI;

#include "t553.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4413_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4414_TI;



#include "t2715.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2715_TI;
#include "t2715MD.h"

extern TypeInfo t553_TI;
extern Il2CppType t2715_0_0_0;
struct t121;
#define m25041(__this, p0, method) (( t553 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13102_GM;
extern Il2CppGenericMethod m25041_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4415_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4416_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4417_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4418_TI;



#include "t2716.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2716_TI;
#include "t2716MD.h"

extern TypeInfo t2121_TI;
extern Il2CppType t2716_0_0_0;
struct t121;
#define m25052(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13107_GM;
extern Il2CppGenericMethod m25052_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4419_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4420_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4421_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4422_TI;



#include "t2717.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2717_TI;
#include "t2717MD.h"

extern TypeInfo t2412_TI;
extern Il2CppType t2717_0_0_0;
struct t121;
#define m25063(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13112_GM;
extern Il2CppGenericMethod m25063_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4423_TI;



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m672_MI;
extern MethodInfo m671_MI;


extern "C" void m13113_gshared (t2718 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2166 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern Il2CppGenericMethod m13114_GM;
extern "C" int32_t m13114_gshared (t2718 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = L_0;
		if (((t9 *)L_1))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m672_MI, (*(&p0)));
		return L_2;
	}
}
extern Il2CppGenericMethod m13115_GM;
extern "C" bool m13115_gshared (t2718 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = L_0;
		if (((t9 *)L_1))
		{
			goto IL_0012;
		}
	}
	{
		t9 * L_2 = p1;
		t9 * L_3 = L_2;
		return ((((t9*)(t9 *)((t9 *)L_3)) == ((t9*)(t9 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t9 * L_4 = p1;
		t9 * L_5 = L_4;
		bool L_6 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m671_MI, (*(&p0)), ((t9 *)L_5));
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4347_TI;

#include "t2719.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4348_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3929_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2719_TI;
#include "t2719MD.h"

#include "t3.h"
extern TypeInfo t221_TI;
extern TypeInfo t2_TI;
extern TypeInfo t3_TI;
#include "t2MD.h"
extern Il2CppType t221_0_0_0;
extern MethodInfo m673_MI;
extern MethodInfo m4269_MI;
extern Il2CppGenericMethod m13118_GM;
extern Il2CppGenericMethod m13120_GM;
extern Il2CppGenericMethod m13117_GM;
extern Il2CppGenericMethod m13119_GM;


#include "t2720.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2720_TI;
#include "t2720MD.h"

extern Il2CppType t2720_0_0_0;
extern Il2CppType t2719_0_0_0;
struct t121;
extern "C" t2719  m25075_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m25075(__this, p0, method) (( t2719  (*) (t121 *, int32_t, MethodInfo*))m25075_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13126_GM;
extern Il2CppGenericMethod m25075_GM;


extern Il2CppGenericMethod m13122_GM;
extern "C" void m13122_gshared (t2720 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m13123_GM;
extern "C" t9 * m13123_gshared (t2720 * __this, MethodInfo* method)
{
	{
		t2719  L_0 = (( t2719  (*) (t2720 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2719  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m13124_GM;
extern "C" void m13124_gshared (t2720 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m13125_GM;
extern "C" bool m13125_gshared (t2720 * __this, MethodInfo* method)
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
extern "C" t2719  m13126_gshared (t2720 * __this, MethodInfo* method)
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
		t2719  L_8 = (( t2719  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4424_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3927_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3926_TI;

#include "Assembly-CSharp-firstpass_ArrayTypes.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4425_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3934_TI;



#include "t2721.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2721_TI;
#include "t2721MD.h"

extern Il2CppType t2721_0_0_0;
struct t121;
#define m25086(__this, p0, method) (( t3 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13131_GM;
extern Il2CppGenericMethod m25086_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4426_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2658_TI;



#include "t2722.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2722_TI;
#include "t2722MD.h"

#include "t29.h"
#include "t2723.h"
#include "t2725.h"
extern TypeInfo t29_TI;
extern TypeInfo t2723_TI;
extern TypeInfo t2725_TI;
#include "t29MD.h"
#include "t2725MD.h"
#include "t2723MD.h"
extern Il2CppType t29_0_0_0;
extern Il2CppType t2723_0_0_0;
extern Il2CppType t2722_0_0_0;
extern Il2CppType t2725_0_0_0;
extern MethodInfo m12881_MI;
extern MethodInfo m370_MI;
extern MethodInfo m13143_MI;
extern MethodInfo m12894_MI;
extern MethodInfo m13163_MI;
extern MethodInfo m13146_MI;
struct t29;
#define m25097(__this, p0, p1, p2, method) (( void (*) (t29 *, t121 *, int32_t, t2725 *, MethodInfo*))m24992_gshared)(__this, p0, p1, p2, method)
struct t29;
extern "C" void m25098 (t29 * __this, t221* p0, int32_t p1, t2725 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m12881_GM;
extern Il2CppGenericMethod m370_GM;
extern Il2CppGenericMethod m13144_GM;
extern Il2CppGenericMethod m13143_GM;
extern Il2CppGenericMethod m12890_GM;
extern Il2CppGenericMethod m12894_GM;
extern Il2CppGenericMethod m13163_GM;
extern Il2CppGenericMethod m25097_GM;
extern Il2CppGenericMethod m25098_GM;
extern Il2CppGenericMethod m13146_GM;


#ifndef _MSC_VER
#else
#endif

#include "t2724.h"
extern TypeInfo t2724_TI;
#include "t2724MD.h"
extern Il2CppType t2724_0_0_0;
extern Il2CppGenericMethod m13158_GM;
extern Il2CppGenericMethod m12925_GM;
extern Il2CppGenericMethod m13162_GM;
extern Il2CppGenericMethod m13156_GM;


#ifndef _MSC_VER
#else
#endif

extern MethodInfo m13116_MI;
extern Il2CppGenericMethod m13161_GM;
extern Il2CppGenericMethod m13159_GM;
extern Il2CppGenericMethod m13160_GM;
extern Il2CppGenericMethod m13116_GM;


#ifndef _MSC_VER
#else
#endif



#include "t2726.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2726_TI;
#include "t2726MD.h"

#include "t2727.h"
#include "t2728.h"
extern TypeInfo t2727_TI;
extern TypeInfo t2683_TI;
extern TypeInfo t2728_TI;
#include "t2728MD.h"
#include "t2727MD.h"
extern Il2CppType t2727_0_0_0;
extern Il2CppType t2683_0_0_0;
extern Il2CppType t2726_0_0_0;
extern Il2CppType t2728_0_0_0;
extern MethodInfo m13178_MI;
extern MethodInfo m12896_MI;
extern MethodInfo m13186_MI;
extern MethodInfo m13181_MI;
struct t29;
#define m25100(__this, p0, p1, p2, method) (( void (*) (t29 *, t121 *, int32_t, t2728 *, MethodInfo*))m24992_gshared)(__this, p0, p1, p2, method)
struct t29;
extern "C" void m25101 (t29 * __this, t2683* p0, int32_t p1, t2728 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m12906_GM;
extern Il2CppGenericMethod m13179_GM;
extern Il2CppGenericMethod m13178_GM;
extern Il2CppGenericMethod m12896_GM;
extern Il2CppGenericMethod m13186_GM;
extern Il2CppGenericMethod m25100_GM;
extern Il2CppGenericMethod m25101_GM;
extern Il2CppGenericMethod m13181_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#include "t2684.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2684_TI;
#include "t2684MD.h"



#include "t2729.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2729_TI;
#include "t2729MD.h"



#include "t2730.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2730_TI;
#include "t2730MD.h"



extern Il2CppGenericMethod m13195_GM;
extern "C" void m13195_gshared (t2730 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m13197_GM;
extern "C" t2719  m13197_gshared (t2730 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m13197((t2730 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t2719  (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t2719  (*FunctionPointerType) (t9 * __this, t9 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t2719  (*FunctionPointerType) (t9 * __this, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern Il2CppGenericMethod m13199_GM;
extern "C" t9 * m13199_gshared (t2730 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m13201_GM;
extern "C" t2719  m13201_gshared (t2730 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2719 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t2731.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2731_TI;
#include "t2731MD.h"

extern Il2CppType t2731_0_0_0;
extern MethodInfo m13204_MI;
extern Il2CppGenericMethod m13157_GM;
extern Il2CppGenericMethod m13204_GM;


#include "t2732.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2732_TI;
#include "t2732MD.h"

#include "t2735.h"
extern TypeInfo t2735_TI;
#include "t2735MD.h"
extern Il2CppType t2732_0_0_0;
extern Il2CppType t2232_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t2735_0_0_0;
extern MethodInfo m13219_MI;
extern MethodInfo m28789_MI;
extern MethodInfo m25268_MI;
extern Il2CppGenericMethod m13219_GM;
extern Il2CppGenericMethod m28789_GM;
extern Il2CppGenericMethod m25268_GM;


#include "t2733.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2733_TI;
#include "t2733MD.h"

extern TypeInfo t2232_TI;
extern MethodInfo m28790_MI;
extern Il2CppGenericMethod m13208_GM;
extern Il2CppGenericMethod m28790_GM;


#include "t2734.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2734_TI;
#include "t2734MD.h"

extern TypeInfo t4375_TI;
extern MethodInfo m28791_MI;
extern Il2CppGenericMethod m28791_GM;


extern Il2CppGenericMethod m13214_GM;
extern "C" void m13214_gshared (t2734 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2166 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern Il2CppGenericMethod m13216_GM;
extern "C" int32_t m13216_gshared (t2734 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = L_0;
		if (((t9 *)L_1))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m672_MI, (*(&p0)));
		return L_2;
	}
}
extern Il2CppGenericMethod m13218_GM;
extern "C" bool m13218_gshared (t2734 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = L_0;
		if (((t9 *)L_1))
		{
			goto IL_0012;
		}
	}
	{
		t9 * L_2 = p1;
		t9 * L_3 = L_2;
		return ((((t9*)(t9 *)((t9 *)L_3)) == ((t9*)(t9 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t9 * L_4 = p1;
		bool L_5 = (bool)InterfaceFuncInvoker1< bool, t9 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (*(&p0)), L_4);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifdef __clang__
#pragma clang diagnostic pop
#endif
