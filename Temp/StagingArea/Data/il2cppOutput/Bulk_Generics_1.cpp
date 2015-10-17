#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2707.h"
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
extern TypeInfo t2707_TI;
#include "t2707MD.h"

#include "t9.h"
#include "t125.h"
#include "t2.h"
#include "t1341.h"
#include "t122.h"
#include "t121.h"
#include "t124.h"
extern TypeInfo t125_TI;
extern TypeInfo t1341_TI;
#include "t1341MD.h"
#include "t121MD.h"
extern Il2CppType t2707_0_0_0;
extern MethodInfo m5713_MI;
extern MethodInfo m5717_MI;
struct t121;
#include "t903.h"
extern "C" int32_t m25130_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m25130(__this, p0, method) (( int32_t (*) (t121 *, int32_t, MethodInfo*))m25130_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13012_GM;
extern Il2CppGenericMethod m25130_GM;


extern Il2CppGenericMethod m13008_GM;
extern "C" void m13008_gshared (t2707 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m13009_GM;
extern "C" t9 * m13009_gshared (t2707 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (t2707 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m13010_GM;
extern "C" void m13010_gshared (t2707 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m13011_GM;
extern "C" bool m13011_gshared (t2707 * __this, MethodInfo* method)
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
		int32_t L_2 = m5717(L_1, &m5717_MI);
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
extern "C" int32_t m13012_gshared (t2707 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_1, (t2*) &_stringLiteral1248, &m5713_MI);
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
		t1341 * L_3 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_3, (t2*) &_stringLiteral1249, &m5713_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t121 * L_4 = (__this->f0);
		t121 * L_5 = (__this->f0);
		int32_t L_6 = m5717(L_5, &m5717_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = (( int32_t (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4006_TI;

#include "mscorlib_ArrayTypes.h"


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



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4423_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4424_TI;



#include "t2708.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2708_TI;
#include "t2708MD.h"

extern TypeInfo t183_TI;
extern Il2CppType t2708_0_0_0;
struct t121;
struct t121;
extern "C" t9 * m24932_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m24932(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24932_gshared)(__this, p0, method)
#define m25141(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24932_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13017_GM;
extern Il2CppGenericMethod m25141_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4425_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4426_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4427_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4428_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2203_TI;



#include "t2709.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2709_TI;
#include "t2709MD.h"

extern Il2CppType t2709_0_0_0;
extern Il2CppType t2203_0_0_0;
struct t121;
#define m25152(__this, p0, method) (( t9* (*) (t121 *, int32_t, MethodInfo*))m24932_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13022_GM;
extern Il2CppGenericMethod m25152_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4429_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4430_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4431_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4432_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2204_TI;



#include "t2710.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2710_TI;
#include "t2710MD.h"

extern Il2CppType t2710_0_0_0;
extern Il2CppType t2204_0_0_0;
struct t121;
#define m25163(__this, p0, method) (( t9* (*) (t121 *, int32_t, MethodInfo*))m24932_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13027_GM;
extern Il2CppGenericMethod m25163_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4433_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4434_TI;

#include "t1668.h"


#include "t2711.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2711_TI;
#include "t2711MD.h"

extern TypeInfo t1668_TI;
extern Il2CppType t2711_0_0_0;
struct t121;
extern "C" t1668  m25174_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m25174(__this, p0, method) (( t1668  (*) (t121 *, int32_t, MethodInfo*))m25174_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13032_GM;
extern Il2CppGenericMethod m25174_GM;


extern Il2CppGenericMethod m13028_GM;
extern "C" void m13028_gshared (t2711 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m13029_GM;
extern "C" t9 * m13029_gshared (t2711 * __this, MethodInfo* method)
{
	{
		t1668  L_0 = (( t1668  (*) (t2711 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t1668  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m13030_GM;
extern "C" void m13030_gshared (t2711 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m13031_GM;
extern "C" bool m13031_gshared (t2711 * __this, MethodInfo* method)
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
		int32_t L_2 = m5717(L_1, &m5717_MI);
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
extern "C" t1668  m13032_gshared (t2711 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_1, (t2*) &_stringLiteral1248, &m5713_MI);
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
		t1341 * L_3 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_3, (t2*) &_stringLiteral1249, &m5713_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t121 * L_4 = (__this->f0);
		t121 * L_5 = (__this->f0);
		int32_t L_6 = m5717(L_5, &m5717_MI);
		int32_t L_7 = (__this->f1);
		t1668  L_8 = (( t1668  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4435_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4436_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4437_TI;



#include "t2712.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2712_TI;
#include "t2712MD.h"

#include "t2694.h"
#include "t132.h"
#include "t169.h"
#include "t2713.h"
#include "t2715.h"
#include "t58.h"
extern TypeInfo t998_TI;
extern TypeInfo t9_TI;
extern TypeInfo t2694_TI;
extern TypeInfo t132_TI;
extern TypeInfo t169_TI;
extern TypeInfo t124_TI;
extern TypeInfo t2713_TI;
extern TypeInfo t158_TI;
extern TypeInfo t122_TI;
extern TypeInfo t2715_TI;
#include "t2694MD.h"
#include "t9MD.h"
#include "t132MD.h"
#include "t169MD.h"
#include "t2715MD.h"
#include "t2713MD.h"
extern Il2CppType t2694_0_0_0;
extern Il2CppType t2713_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t2712_0_0_0;
extern Il2CppType t2715_0_0_0;
extern MethodInfo m11997_MI;
extern MethodInfo m12910_MI;
extern MethodInfo m336_MI;
extern MethodInfo m339_MI;
extern MethodInfo m5734_MI;
extern MethodInfo m12933_MI;
extern MethodInfo m13044_MI;
extern MethodInfo m12923_MI;
extern MethodInfo m13064_MI;
extern MethodInfo m13047_MI;
struct t2694;
#include "t126.h"
#include "t138.h"
#include "t127.h"
#include "t563.h"
extern "C" void m25185_gshared (t2694 * __this, t121 * p0, int32_t p1, t2715 * p2, MethodInfo* method);
#define m25185(__this, p0, p1, p2, method) (( void (*) (t2694 *, t121 *, int32_t, t2715 *, MethodInfo*))m25185_gshared)(__this, p0, p1, p2, method)
struct t2694;
extern "C" void m25184 (t2694 * __this, t158* p0, int32_t p1, t2715 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m12910_GM;
extern Il2CppGenericMethod m12933_GM;
extern Il2CppGenericMethod m13045_GM;
extern Il2CppGenericMethod m13044_GM;
extern Il2CppGenericMethod m12919_GM;
extern Il2CppGenericMethod m12923_GM;
extern Il2CppGenericMethod m13064_GM;
extern Il2CppGenericMethod m25185_GM;
extern Il2CppGenericMethod m25184_GM;
extern Il2CppGenericMethod m13047_GM;


extern Il2CppGenericMethod m13033_GM;
extern "C" void m13033_gshared (t2712 * __this, t2694 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2694 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1378, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2694 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern Il2CppGenericMethod m13034_GM;
extern "C" void m13034_gshared (t2712 * __this, t9 * p0, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_0, (t2*) &_stringLiteral1385, &m5734_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m13035_GM;
extern "C" void m13035_gshared (t2712 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_0, (t2*) &_stringLiteral1385, &m5734_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m13036_GM;
extern "C" bool m13036_gshared (t2712 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2694 * L_0 = (__this->f0);
		t9 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m13037_GM;
extern "C" bool m13037_gshared (t2712 * __this, t9 * p0, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_0, (t2*) &_stringLiteral1385, &m5734_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m13038_GM;
extern "C" t9* m13038_gshared (t2712 * __this, MethodInfo* method)
{
	{
		t2713  L_0 = (( t2713  (*) (t2712 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2713  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t9*)L_2;
	}
}
extern Il2CppGenericMethod m13039_GM;
extern "C" void m13039_gshared (t2712 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		t2694 * L_4 = (__this->f0);
		t121 * L_5 = p0;
		int32_t L_6 = p1;
		(( void (*) (t2694 *, t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2694 * L_7 = (__this->f0);
		t121 * L_8 = p0;
		int32_t L_9 = p1;
		t58 L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2715 * L_11 = (t2715 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2715 *, t9 *, t58, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2694 *, t121 *, int32_t, t2715 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
extern Il2CppGenericMethod m13040_GM;
extern "C" t9 * m13040_gshared (t2712 * __this, MethodInfo* method)
{
	{
		t2713  L_0 = (( t2713  (*) (t2712 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2713  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t9 *)L_2;
	}
}
extern Il2CppGenericMethod m13041_GM;
extern "C" bool m13041_gshared (t2712 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern Il2CppGenericMethod m13042_GM;
extern "C" bool m13042_gshared (t2712 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern Il2CppGenericMethod m13043_GM;
extern "C" t9 * m13043_gshared (t2712 * __this, MethodInfo* method)
{
	{
		t2694 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m11997_MI, L_0);
		return L_1;
	}
}
extern "C" void m13044_gshared (t2712 * __this, t158* p0, int32_t p1, MethodInfo* method)
{
	{
		t2694 * L_0 = (__this->f0);
		t158* L_1 = p0;
		int32_t L_2 = p1;
		(( void (*) (t2694 *, t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (t121 *)(t121 *)L_1, L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2694 * L_3 = (__this->f0);
		t158* L_4 = p0;
		int32_t L_5 = p1;
		t58 L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2715 * L_7 = (t2715 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2715 *, t9 *, t58, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2694 *, t158*, int32_t, t2715 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
extern "C" t2713  m13045_gshared (t2712 * __this, MethodInfo* method)
{
	{
		t2694 * L_0 = (__this->f0);
		t2713  L_1 = {0};
		(( void (*) (t2713 *, t2694 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern Il2CppGenericMethod m13046_GM;
extern "C" int32_t m13046_gshared (t2712 * __this, MethodInfo* method)
{
	{
		t2694 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2714.h"
#include "t2697.h"
extern TypeInfo t2714_TI;
#include "t2714MD.h"
#include "t2697MD.h"
extern Il2CppType t2714_0_0_0;
extern Il2CppGenericMethod m13059_GM;
extern Il2CppGenericMethod m12958_GM;
extern Il2CppGenericMethod m12954_GM;
extern Il2CppGenericMethod m13063_GM;
extern Il2CppGenericMethod m13057_GM;


extern "C" void m13047_gshared (t2713 * __this, t2694 * p0, MethodInfo* method)
{
	{
		t2694 * L_0 = p0;
		t2714  L_1 = (( t2714  (*) (t2694 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern Il2CppGenericMethod m13048_GM;
extern "C" t9 * m13048_gshared (t2713 * __this, MethodInfo* method)
{
	{
		t2714 * L_0 = &(__this->f0);
		t9 * L_1 = (( t9 * (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t9 * L_2 = L_1;
		return ((t9 *)L_2);
	}
}
extern Il2CppGenericMethod m13049_GM;
extern "C" void m13049_gshared (t2713 * __this, MethodInfo* method)
{
	{
		t2714 * L_0 = &(__this->f0);
		(( void (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
extern Il2CppGenericMethod m13050_GM;
extern "C" bool m13050_gshared (t2713 * __this, MethodInfo* method)
{
	{
		t2714 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern Il2CppGenericMethod m13051_GM;
extern "C" t9 * m13051_gshared (t2713 * __this, MethodInfo* method)
{
	{
		t2714 * L_0 = &(__this->f0);
		t2697 * L_1 = &(L_0->f3);
		t9 * L_2 = (( t9 * (*) (t2697 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1164.h"
#include "t1530.h"
extern TypeInfo t2697_TI;
extern TypeInfo t1164_TI;
extern TypeInfo t1530_TI;
#include "t1164MD.h"
#include "t1530MD.h"
extern Il2CppType t2697_0_0_0;
extern MethodInfo m5714_MI;
extern MethodInfo m12957_MI;
extern MethodInfo m6911_MI;
extern Il2CppGenericMethod m13062_GM;
extern Il2CppGenericMethod m12960_GM;
extern Il2CppGenericMethod m13060_GM;
extern Il2CppGenericMethod m13061_GM;
extern Il2CppGenericMethod m12957_GM;


extern Il2CppGenericMethod m13052_GM;
extern "C" void m13052_gshared (t2714 * __this, t2694 * p0, MethodInfo* method)
{
	{
		t2694 * L_0 = p0;
		__this->f0 = L_0;
		t2694 * L_1 = p0;
		int32_t L_2 = (L_1->f14);
		__this->f2 = L_2;
		return;
	}
}
extern Il2CppGenericMethod m13053_GM;
extern "C" t9 * m13053_gshared (t2714 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2697  L_0 = (__this->f3);
		t2697  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m13054_GM;
extern "C" t1164  m13054_gshared (t2714 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2697 * L_0 = &(__this->f3);
		t9 * L_1 = (( t9 * (*) (t2697 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		t9 * L_2 = L_1;
		t2697 * L_3 = &(__this->f3);
		t9 * L_4 = (( t9 * (*) (t2697 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		t9 * L_5 = L_4;
		t1164  L_6 = {0};
		m5714(&L_6, ((t9 *)L_2), ((t9 *)L_5), &m5714_MI);
		return L_6;
	}
}
extern Il2CppGenericMethod m13055_GM;
extern "C" t9 * m13055_gshared (t2714 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (( t9 * (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		t9 * L_1 = L_0;
		return ((t9 *)L_1);
	}
}
extern Il2CppGenericMethod m13056_GM;
extern "C" t9 * m13056_gshared (t2714 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (( t9 * (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		t9 * L_1 = L_0;
		return ((t9 *)L_1);
	}
}
extern "C" bool m13057_gshared (t2714 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		t2694 * L_4 = (__this->f0);
		t2515* L_5 = (L_4->f5);
		int32_t L_6 = V_0;
		int32_t L_7 = (((t1668 *)(t1668 *)SZArrayLdElema(L_5, L_6))->f0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t2694 * L_8 = (__this->f0);
		t158* L_9 = (L_8->f6);
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		t2694 * L_12 = (__this->f0);
		t158* L_13 = (L_12->f7);
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		t2697  L_16 = {0};
		(( void (*) (t2697 *, t9 *, t9 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(t9 **)(t9 **)SZArrayLdElema(L_9, L_11)), (*(t9 **)(t9 **)SZArrayLdElema(L_13, L_15)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->f3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->f1);
		t2694 * L_18 = (__this->f0);
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
extern Il2CppGenericMethod m13058_GM;
extern "C" t2697  m13058_gshared (t2714 * __this, MethodInfo* method)
{
	{
		t2697  L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" t9 * m13059_gshared (t2714 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2697 * L_0 = &(__this->f3);
		t9 * L_1 = (( t9 * (*) (t2697 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
extern "C" t9 * m13060_gshared (t2714 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2697 * L_0 = &(__this->f3);
		t9 * L_1 = (( t9 * (*) (t2697 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" void m13061_gshared (t2714 * __this, MethodInfo* method)
{
	{
		t2694 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6911(L_1, (t2*)NULL, &m6911_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t2694 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f14);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1341 * L_5 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_5, (t2*) &_stringLiteral1384, &m5713_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
extern "C" void m13062_gshared (t2714 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_1, (t2*) &_stringLiteral403, &m5713_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
extern "C" void m13063_gshared (t2714 * __this, MethodInfo* method)
{
	{
		__this->f0 = (t2694 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t470.h"


extern "C" void m13064_gshared (t2715 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m13065_GM;
extern "C" t9 * m13065_gshared (t2715 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m13065((t2715 *)__this->f9,p0, p1, method);
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
extern Il2CppGenericMethod m13066_GM;
extern "C" t9 * m13066_gshared (t2715 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m13067_GM;
extern "C" t9 * m13067_gshared (t2715 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t9 *)__result;
}
#include "t2716.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2716_TI;
#include "t2716MD.h"

#include "t2717.h"
extern TypeInfo t2717_TI;
#include "t2717MD.h"
extern Il2CppType t2717_0_0_0;
extern Il2CppType t2716_0_0_0;
extern MethodInfo m13079_MI;
extern MethodInfo m12925_MI;
extern MethodInfo m13082_MI;
extern Il2CppGenericMethod m12935_GM;
extern Il2CppGenericMethod m13080_GM;
extern Il2CppGenericMethod m13079_GM;
extern Il2CppGenericMethod m12925_GM;
extern Il2CppGenericMethod m13082_GM;


extern Il2CppGenericMethod m13068_GM;
extern "C" void m13068_gshared (t2716 * __this, t2694 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2694 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1378, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2694 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern Il2CppGenericMethod m13069_GM;
extern "C" void m13069_gshared (t2716 * __this, t9 * p0, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_0, (t2*) &_stringLiteral1385, &m5734_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m13070_GM;
extern "C" void m13070_gshared (t2716 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_0, (t2*) &_stringLiteral1385, &m5734_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m13071_GM;
extern "C" bool m13071_gshared (t2716 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2694 * L_0 = (__this->f0);
		t9 * L_1 = p0;
		bool L_2 = (( bool (*) (t2694 *, t9 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
extern Il2CppGenericMethod m13072_GM;
extern "C" bool m13072_gshared (t2716 * __this, t9 * p0, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_0, (t2*) &_stringLiteral1385, &m5734_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m13073_GM;
extern "C" t9* m13073_gshared (t2716 * __this, MethodInfo* method)
{
	{
		t2717  L_0 = (( t2717  (*) (t2716 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2717  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t9*)L_2;
	}
}
extern Il2CppGenericMethod m13074_GM;
extern "C" void m13074_gshared (t2716 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		t2694 * L_4 = (__this->f0);
		t121 * L_5 = p0;
		int32_t L_6 = p1;
		(( void (*) (t2694 *, t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2694 * L_7 = (__this->f0);
		t121 * L_8 = p0;
		int32_t L_9 = p1;
		t58 L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2715 * L_11 = (t2715 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2715 *, t9 *, t58, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2694 *, t121 *, int32_t, t2715 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
extern Il2CppGenericMethod m13075_GM;
extern "C" t9 * m13075_gshared (t2716 * __this, MethodInfo* method)
{
	{
		t2717  L_0 = (( t2717  (*) (t2716 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2717  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t9 *)L_2;
	}
}
extern Il2CppGenericMethod m13076_GM;
extern "C" bool m13076_gshared (t2716 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern Il2CppGenericMethod m13077_GM;
extern "C" bool m13077_gshared (t2716 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern Il2CppGenericMethod m13078_GM;
extern "C" t9 * m13078_gshared (t2716 * __this, MethodInfo* method)
{
	{
		t2694 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m11997_MI, L_0);
		return L_1;
	}
}
extern "C" void m13079_gshared (t2716 * __this, t158* p0, int32_t p1, MethodInfo* method)
{
	{
		t2694 * L_0 = (__this->f0);
		t158* L_1 = p0;
		int32_t L_2 = p1;
		(( void (*) (t2694 *, t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (t121 *)(t121 *)L_1, L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2694 * L_3 = (__this->f0);
		t158* L_4 = p0;
		int32_t L_5 = p1;
		t58 L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2715 * L_7 = (t2715 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2715 *, t9 *, t58, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2694 *, t158*, int32_t, t2715 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
extern "C" t2717  m13080_gshared (t2716 * __this, MethodInfo* method)
{
	{
		t2694 * L_0 = (__this->f0);
		t2717  L_1 = {0};
		(( void (*) (t2717 *, t2694 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern Il2CppGenericMethod m13081_GM;
extern "C" int32_t m13081_gshared (t2716 * __this, MethodInfo* method)
{
	{
		t2694 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m13082_gshared (t2717 * __this, t2694 * p0, MethodInfo* method)
{
	{
		t2694 * L_0 = p0;
		t2714  L_1 = (( t2714  (*) (t2694 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern Il2CppGenericMethod m13083_GM;
extern "C" t9 * m13083_gshared (t2717 * __this, MethodInfo* method)
{
	{
		t2714 * L_0 = &(__this->f0);
		t9 * L_1 = (( t9 * (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t9 * L_2 = L_1;
		return ((t9 *)L_2);
	}
}
extern Il2CppGenericMethod m13084_GM;
extern "C" void m13084_gshared (t2717 * __this, MethodInfo* method)
{
	{
		t2714 * L_0 = &(__this->f0);
		(( void (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
extern Il2CppGenericMethod m13085_GM;
extern "C" bool m13085_gshared (t2717 * __this, MethodInfo* method)
{
	{
		t2714 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern Il2CppGenericMethod m13086_GM;
extern "C" t9 * m13086_gshared (t2717 * __this, MethodInfo* method)
{
	{
		t2714 * L_0 = &(__this->f0);
		t2697 * L_1 = &(L_0->f3);
		t9 * L_2 = (( t9 * (*) (t2697 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#include "t2696.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2696_TI;
#include "t2696MD.h"



extern Il2CppGenericMethod m13087_GM;
extern "C" void m13087_gshared (t2696 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m13088_GM;
extern "C" t1164  m13088_gshared (t2696 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m13088((t2696 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t1164  (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t1164  (*FunctionPointerType) (t9 * __this, t9 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t1164  (*FunctionPointerType) (t9 * __this, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern Il2CppGenericMethod m13089_GM;
extern "C" t9 * m13089_gshared (t2696 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m13090_GM;
extern "C" t1164  m13090_gshared (t2696 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1164 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4438_TI;



#include "t2718.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2718_TI;
#include "t2718MD.h"

extern Il2CppType t2718_0_0_0;
struct t121;
extern "C" t1164  m25187_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m25187(__this, p0, method) (( t1164  (*) (t121 *, int32_t, MethodInfo*))m25187_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13095_GM;
extern Il2CppGenericMethod m25187_GM;


extern Il2CppGenericMethod m13091_GM;
extern "C" void m13091_gshared (t2718 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m13092_GM;
extern "C" t9 * m13092_gshared (t2718 * __this, MethodInfo* method)
{
	{
		t1164  L_0 = (( t1164  (*) (t2718 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t1164  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m13093_GM;
extern "C" void m13093_gshared (t2718 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m13094_GM;
extern "C" bool m13094_gshared (t2718 * __this, MethodInfo* method)
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
		int32_t L_2 = m5717(L_1, &m5717_MI);
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
extern "C" t1164  m13095_gshared (t2718 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_1, (t2*) &_stringLiteral1248, &m5713_MI);
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
		t1341 * L_3 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_3, (t2*) &_stringLiteral1249, &m5713_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t121 * L_4 = (__this->f0);
		t121 * L_5 = (__this->f0);
		int32_t L_6 = m5717(L_5, &m5717_MI);
		int32_t L_7 = (__this->f1);
		t1164  L_8 = (( t1164  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4439_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4440_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4441_TI;



#include "t2719.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2719_TI;
#include "t2719MD.h"



extern Il2CppGenericMethod m13096_GM;
extern "C" void m13096_gshared (t2719 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m13097_GM;
extern "C" t2697  m13097_gshared (t2719 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m13097((t2719 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t2697  (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t2697  (*FunctionPointerType) (t9 * __this, t9 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t2697  (*FunctionPointerType) (t9 * __this, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern Il2CppGenericMethod m13098_GM;
extern "C" t9 * m13098_gshared (t2719 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m13099_GM;
extern "C" t2697  m13099_gshared (t2719 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2697 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t2720.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2720_TI;
#include "t2720MD.h"

extern TypeInfo t1161_TI;
extern Il2CppType t2720_0_0_0;
extern MethodInfo m12000_MI;
extern MethodInfo m13102_MI;
extern Il2CppGenericMethod m13102_GM;


extern Il2CppGenericMethod m13100_GM;
extern "C" void m13100_gshared (t2720 * __this, t2694 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2694 * L_0 = p0;
		t2714  L_1 = (( t2714  (*) (t2694 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern Il2CppGenericMethod m13101_GM;
extern "C" bool m13101_gshared (t2720 * __this, MethodInfo* method)
{
	{
		t2714 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
extern "C" t1164  m13102_gshared (t2720 * __this, MethodInfo* method)
{
	{
		t2714  L_0 = (__this->f0);
		t2714  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		t1164  L_3 = (t1164 )InterfaceFuncInvoker0< t1164  >::Invoke(&m12000_MI, L_2);
		return L_3;
	}
}
extern Il2CppGenericMethod m13103_GM;
extern "C" t9 * m13103_gshared (t2720 * __this, MethodInfo* method)
{
	t2697  V_0 = {0};
	{
		t2714 * L_0 = &(__this->f0);
		t2697  L_1 = (( t2697  (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		t9 * L_2 = (( t9 * (*) (t2697 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		t9 * L_3 = L_2;
		return ((t9 *)L_3);
	}
}
extern Il2CppGenericMethod m13104_GM;
extern "C" t9 * m13104_gshared (t2720 * __this, MethodInfo* method)
{
	t2697  V_0 = {0};
	{
		t2714 * L_0 = &(__this->f0);
		t2697  L_1 = (( t2697  (*) (t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		t9 * L_2 = (( t9 * (*) (t2697 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		t9 * L_3 = L_2;
		return ((t9 *)L_3);
	}
}
extern Il2CppGenericMethod m13105_GM;
extern "C" t9 * m13105_gshared (t2720 * __this, MethodInfo* method)
{
	{
		t1164  L_0 = (t1164 )VirtFuncInvoker0< t1164  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		t1164  L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t1164_TI), &L_1);
		return L_2;
	}
}
#include "t2175.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2175_TI;
#include "t2175MD.h"

#include "t2727.h"
extern TypeInfo t126_TI;
extern TypeInfo t152_TI;
extern TypeInfo t2727_TI;
#include "t126MD.h"
#include "t1347MD.h"
#include "t2727MD.h"
extern Il2CppType t2175_0_0_0;
extern Il2CppType t4413_0_0_0;
extern Il2CppType t9_0_0_0;
extern Il2CppType t2534_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t2727_0_0_0;
extern MethodInfo m329_MI;
extern MethodInfo m4473_MI;
extern MethodInfo m4471_MI;
extern MethodInfo m11111_MI;
extern MethodInfo m13141_MI;
extern MethodInfo m29026_MI;
extern MethodInfo m25348_MI;
extern Il2CppGenericMethod m13141_GM;
extern Il2CppGenericMethod m29026_GM;
extern Il2CppGenericMethod m25348_GM;


extern Il2CppGenericMethod m13106_GM;
extern "C" void m13106_gshared (t2175 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern Il2CppGenericMethod m13107_GM;
extern "C" void m13107_gshared (t9 * __this , MethodInfo* method)
{
	t2727 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2727 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (t2727 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((t2175_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern Il2CppGenericMethod m13108_GM;
extern "C" int32_t m13108_gshared (t2175 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((t9 *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))));
		return L_1;
	}
}
extern Il2CppGenericMethod m13109_GM;
extern "C" bool m13109_gshared (t2175 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		bool L_2 = (bool)VirtFuncInvoker2< bool, t9 *, t9 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((t9 *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), ((t9 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))));
		return L_2;
	}
}
extern Il2CppGenericMethod m13110_GM;
extern "C" t2175 * m13110_gshared (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2175 * L_0 = ((t2175_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4157_TI;



#include "t2721.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2721_TI;
#include "t2721MD.h"

extern Il2CppType t2721_0_0_0;
struct t121;
#define m25201(__this, p0, method) (( t126 * (*) (t121 *, int32_t, MethodInfo*))m24932_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13115_GM;
extern Il2CppGenericMethod m25201_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4153_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4177_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3746_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4442_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4443_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4444_TI;



#include "t2722.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2722_TI;
#include "t2722MD.h"

extern TypeInfo t2419_TI;
extern Il2CppType t2722_0_0_0;
struct t121;
#define m25212(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24932_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13120_GM;
extern Il2CppGenericMethod m25212_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4445_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4446_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4447_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4448_TI;



#include "t2723.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2723_TI;
#include "t2723MD.h"

extern TypeInfo t2420_TI;
extern Il2CppType t2723_0_0_0;
struct t121;
#define m25223(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24932_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13125_GM;
extern Il2CppGenericMethod m25223_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4449_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4450_TI;

#include "t560.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4451_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4452_TI;



#include "t2724.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2724_TI;
#include "t2724MD.h"

extern TypeInfo t560_TI;
extern Il2CppType t2724_0_0_0;
struct t121;
#define m25234(__this, p0, method) (( t560 * (*) (t121 *, int32_t, MethodInfo*))m24932_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13130_GM;
extern Il2CppGenericMethod m25234_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4453_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4454_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4455_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4456_TI;



#include "t2725.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2725_TI;
#include "t2725MD.h"

extern TypeInfo t2130_TI;
extern Il2CppType t2725_0_0_0;
struct t121;
#define m25245(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24932_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13135_GM;
extern Il2CppGenericMethod m25245_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4457_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4458_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4459_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4460_TI;



#include "t2726.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2726_TI;
#include "t2726MD.h"

extern TypeInfo t2421_TI;
extern Il2CppType t2726_0_0_0;
struct t121;
#define m25256(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24932_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13140_GM;
extern Il2CppGenericMethod m25256_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4461_TI;



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m672_MI;
extern MethodInfo m671_MI;


extern "C" void m13141_gshared (t2727 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2175 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern Il2CppGenericMethod m13142_GM;
extern "C" int32_t m13142_gshared (t2727 * __this, t9 * p0, MethodInfo* method)
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
extern Il2CppGenericMethod m13143_GM;
extern "C" bool m13143_gshared (t2727 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
extern TypeInfo t4385_TI;

#include "t2728.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4386_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3960_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2728_TI;
#include "t2728MD.h"

#include "t3.h"
extern TypeInfo t221_TI;
extern TypeInfo t2_TI;
extern TypeInfo t3_TI;
#include "t2MD.h"
extern Il2CppType t221_0_0_0;
extern MethodInfo m673_MI;
extern MethodInfo m4293_MI;
extern Il2CppGenericMethod m13146_GM;
extern Il2CppGenericMethod m13148_GM;
extern Il2CppGenericMethod m13145_GM;
extern Il2CppGenericMethod m13147_GM;


#include "t2729.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2729_TI;
#include "t2729MD.h"

extern Il2CppType t2729_0_0_0;
extern Il2CppType t2728_0_0_0;
struct t121;
extern "C" t2728  m25268_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m25268(__this, p0, method) (( t2728  (*) (t121 *, int32_t, MethodInfo*))m25268_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13154_GM;
extern Il2CppGenericMethod m25268_GM;


extern Il2CppGenericMethod m13150_GM;
extern "C" void m13150_gshared (t2729 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m13151_GM;
extern "C" t9 * m13151_gshared (t2729 * __this, MethodInfo* method)
{
	{
		t2728  L_0 = (( t2728  (*) (t2729 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2728  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m13152_GM;
extern "C" void m13152_gshared (t2729 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m13153_GM;
extern "C" bool m13153_gshared (t2729 * __this, MethodInfo* method)
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
		int32_t L_2 = m5717(L_1, &m5717_MI);
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
extern "C" t2728  m13154_gshared (t2729 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_1, (t2*) &_stringLiteral1248, &m5713_MI);
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
		t1341 * L_3 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_3, (t2*) &_stringLiteral1249, &m5713_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t121 * L_4 = (__this->f0);
		t121 * L_5 = (__this->f0);
		int32_t L_6 = m5717(L_5, &m5717_MI);
		int32_t L_7 = (__this->f1);
		t2728  L_8 = (( t2728  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4462_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3958_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3957_TI;

#include "Assembly-CSharp-firstpass_ArrayTypes.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4463_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3965_TI;



#include "t2730.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2730_TI;
#include "t2730MD.h"

extern Il2CppType t2730_0_0_0;
struct t121;
#define m25279(__this, p0, method) (( t3 * (*) (t121 *, int32_t, MethodInfo*))m24932_gshared)(__this, p0, method)
extern Il2CppGenericMethod m13159_GM;
extern Il2CppGenericMethod m25279_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4464_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2667_TI;



#include "t2731.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2731_TI;
#include "t2731MD.h"

#include "t29.h"
#include "t2732.h"
#include "t2734.h"
extern TypeInfo t29_TI;
extern TypeInfo t2732_TI;
extern TypeInfo t2734_TI;
#include "t29MD.h"
#include "t2734MD.h"
#include "t2732MD.h"
extern Il2CppType t29_0_0_0;
extern Il2CppType t2732_0_0_0;
extern Il2CppType t2731_0_0_0;
extern Il2CppType t2734_0_0_0;
extern MethodInfo m12909_MI;
extern MethodInfo m370_MI;
extern MethodInfo m13171_MI;
extern MethodInfo m12922_MI;
extern MethodInfo m13191_MI;
extern MethodInfo m13174_MI;
struct t29;
#define m25290(__this, p0, p1, p2, method) (( void (*) (t29 *, t121 *, int32_t, t2734 *, MethodInfo*))m25185_gshared)(__this, p0, p1, p2, method)
struct t29;
extern "C" void m25291 (t29 * __this, t221* p0, int32_t p1, t2734 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m12909_GM;
extern Il2CppGenericMethod m370_GM;
extern Il2CppGenericMethod m13172_GM;
extern Il2CppGenericMethod m13171_GM;
extern Il2CppGenericMethod m12918_GM;
extern Il2CppGenericMethod m12922_GM;
extern Il2CppGenericMethod m13191_GM;
extern Il2CppGenericMethod m25290_GM;
extern Il2CppGenericMethod m25291_GM;
extern Il2CppGenericMethod m13174_GM;


#ifndef _MSC_VER
#else
#endif

#include "t2733.h"
extern TypeInfo t2733_TI;
#include "t2733MD.h"
extern Il2CppType t2733_0_0_0;
extern Il2CppGenericMethod m13186_GM;
extern Il2CppGenericMethod m12953_GM;
extern Il2CppGenericMethod m13190_GM;
extern Il2CppGenericMethod m13184_GM;


#ifndef _MSC_VER
#else
#endif

extern MethodInfo m13144_MI;
extern Il2CppGenericMethod m13189_GM;
extern Il2CppGenericMethod m13187_GM;
extern Il2CppGenericMethod m13188_GM;
extern Il2CppGenericMethod m13144_GM;


#ifndef _MSC_VER
#else
#endif



#include "t2735.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2735_TI;
#include "t2735MD.h"

#include "t2736.h"
#include "t2737.h"
extern TypeInfo t2736_TI;
extern TypeInfo t2692_TI;
extern TypeInfo t2737_TI;
#include "t2737MD.h"
#include "t2736MD.h"
extern Il2CppType t2736_0_0_0;
extern Il2CppType t2692_0_0_0;
extern Il2CppType t2735_0_0_0;
extern Il2CppType t2737_0_0_0;
extern MethodInfo m13206_MI;
extern MethodInfo m12924_MI;
extern MethodInfo m13214_MI;
extern MethodInfo m13209_MI;
struct t29;
#define m25293(__this, p0, p1, p2, method) (( void (*) (t29 *, t121 *, int32_t, t2737 *, MethodInfo*))m25185_gshared)(__this, p0, p1, p2, method)
struct t29;
extern "C" void m25294 (t29 * __this, t2692* p0, int32_t p1, t2737 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m12934_GM;
extern Il2CppGenericMethod m13207_GM;
extern Il2CppGenericMethod m13206_GM;
extern Il2CppGenericMethod m12924_GM;
extern Il2CppGenericMethod m13214_GM;
extern Il2CppGenericMethod m25293_GM;
extern Il2CppGenericMethod m25294_GM;
extern Il2CppGenericMethod m13209_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#include "t2693.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2693_TI;
#include "t2693MD.h"



#include "t2738.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2738_TI;
#include "t2738MD.h"



#include "t2739.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2739_TI;
#include "t2739MD.h"



extern Il2CppGenericMethod m13223_GM;
extern "C" void m13223_gshared (t2739 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m13225_GM;
extern "C" t2728  m13225_gshared (t2739 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m13225((t2739 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t2728  (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t2728  (*FunctionPointerType) (t9 * __this, t9 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t2728  (*FunctionPointerType) (t9 * __this, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern Il2CppGenericMethod m13227_GM;
extern "C" t9 * m13227_gshared (t2739 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m13229_GM;
extern "C" t2728  m13229_gshared (t2739 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2728 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t2740.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2740_TI;
#include "t2740MD.h"

extern Il2CppType t2740_0_0_0;
extern MethodInfo m13232_MI;
extern Il2CppGenericMethod m13185_GM;
extern Il2CppGenericMethod m13232_GM;


#include "t2741.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2741_TI;
#include "t2741MD.h"

#include "t2744.h"
extern TypeInfo t2744_TI;
#include "t2744MD.h"
extern Il2CppType t2741_0_0_0;
extern Il2CppType t2241_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t2744_0_0_0;
extern MethodInfo m13247_MI;
extern MethodInfo m29027_MI;
extern MethodInfo m25461_MI;
extern Il2CppGenericMethod m13247_GM;
extern Il2CppGenericMethod m29027_GM;
extern Il2CppGenericMethod m25461_GM;


#include "t2742.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2742_TI;
#include "t2742MD.h"

extern TypeInfo t2241_TI;
extern MethodInfo m29028_MI;
extern Il2CppGenericMethod m13236_GM;
extern Il2CppGenericMethod m29028_GM;


#include "t2743.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2743_TI;
#include "t2743MD.h"

extern TypeInfo t4413_TI;
extern MethodInfo m29029_MI;
extern Il2CppGenericMethod m29029_GM;


extern Il2CppGenericMethod m13242_GM;
extern "C" void m13242_gshared (t2743 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2175 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern Il2CppGenericMethod m13244_GM;
extern "C" int32_t m13244_gshared (t2743 * __this, t9 * p0, MethodInfo* method)
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
extern Il2CppGenericMethod m13246_GM;
extern "C" bool m13246_gshared (t2743 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
