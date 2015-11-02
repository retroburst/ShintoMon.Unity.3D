#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1731.h"
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
extern TypeInfo t1731_TI;
#include "t1731MD.h"

#include "t9.h"
#include "t1492.h"
#include "t1491.h"
#include "t124.h"
#include "t122.h"
#include "t477.h"
#include "t58.h"
extern TypeInfo t477_TI;
extern TypeInfo t1491_TI;
extern TypeInfo t476_TI;
extern TypeInfo t9_TI;
#include "t9MD.h"
#include "t477MD.h"
#include "t1491MD.h"
extern MethodInfo m336_MI;
extern MethodInfo m8940_MI;
extern MethodInfo m7028_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m7026_MI;

#include "t121.h"

extern MethodInfo m8939_MI;
extern "C" void m8939 (t1731 * __this, t477 * p0, t9 * p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t9 * L_0 = p1;
		__this->f0 = L_0;
		t477 * L_1 = p0;
		__this->f7 = L_1;
		t477 * L_2 = (__this->f7);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		t58 L_3 = { &m8940_MI };
		t477 * L_4 = (t477 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t477_TI));
		m7028(L_4, NULL, L_3, &m7028_MI);
		__this->f3 = L_4;
	}

IL_002e:
	{
		t1491 * L_5 = (t1491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1491_TI));
		m7024(L_5, 0, &m7024_MI);
		__this->f2 = L_5;
		return;
	}
}
extern "C" void m8940 (t9 * __this , t9 * p0, MethodInfo* method)
{
	t1731 * V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t1731 *)Castclass(L_0, InitializedTypeInfo(&t1731_TI)));
		t1731 * L_1 = V_0;
		t477 * L_2 = (L_1->f7);
		t9 * L_3 = p0;
		VirtFuncInvoker3< t9 *, t9 *, t477 *, t9 * >::Invoke(&m7026_MI, L_2, L_3, (t477 *)NULL, NULL);
		return;
	}
}
extern MethodInfo m8941_MI;
extern "C" t9 * m8941 (t1731 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8942_MI;
extern "C" t1492 * m8942 (t1731 * __this, MethodInfo* method)
{
	{
		t1491 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8943_MI;
extern "C" bool m8943 (t1731 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f1);
		return L_0;
	}
}
#include "t1722.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1722_TI;
#include "t1722MD.h"

#include "t2.h"
#include "t1106.h"
#include "t1107.h"
#include "t132.h"
#include "t126.h"
#include "t127.h"
#include "t1735.h"
#include "t1732.h"
#include "t125.h"
#include "t570.h"
#include "t304.h"
#include "mscorlib_ArrayTypes.h"
#include "t309.h"
extern TypeInfo t132_TI;
extern TypeInfo t126_TI;
extern TypeInfo t2_TI;
extern TypeInfo t1734_TI;
extern TypeInfo t122_TI;
extern TypeInfo t570_TI;
extern TypeInfo t304_TI;
#include "t1215MD.h"
#include "t132MD.h"
#include "t1106MD.h"
#include "t126MD.h"
#include "t1734MD.h"
#include "t2MD.h"
#include "t570MD.h"
#include "t304MD.h"
extern Il2CppType t2_0_0_0;
extern MethodInfo m5812_MI;
extern MethodInfo m339_MI;
extern MethodInfo m5782_MI;
extern MethodInfo m329_MI;
extern MethodInfo m5770_MI;
extern MethodInfo m8947_MI;
extern MethodInfo m8975_MI;
extern MethodInfo m8949_MI;
extern MethodInfo m2763_MI;
extern MethodInfo m2949_MI;
extern MethodInfo m6022_MI;


extern MethodInfo m8944_MI;
extern "C" void m8944 (t1722 * __this, MethodInfo* method)
{
	{
		m5812(__this, &m5812_MI);
		__this->f4 = 0;
		__this->f1 = (t2*)NULL;
		return;
	}
}
extern MethodInfo m8945_MI;
extern "C" void m8945 (t1722 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		m5812(__this, &m5812_MI);
		t1106 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral414, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t1106 * L_2 = p0;
		t2* L_3 = m5782(L_2, (t2*) &_stringLiteral1647, &m5782_MI);
		__this->f1 = L_3;
		t1106 * L_4 = p0;
		t2* L_5 = m5782(L_4, (t2*) &_stringLiteral1648, &m5782_MI);
		__this->f2 = L_5;
		return;
	}
}
extern MethodInfo m8946_MI;
extern "C" void m8946 (t1722 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t2* L_1 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_2 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5770(L_0, (t2*) &_stringLiteral1648, L_1, L_2, &m5770_MI);
		t1106 * L_3 = p0;
		t2* L_4 = (__this->f1);
		t126 * L_5 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5770(L_3, (t2*) &_stringLiteral1647, L_4, L_5, &m5770_MI);
		return;
	}
}
extern "C" t2* m8947 (t1722 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8948_MI;
extern "C" void m8948 (t1722 * __this, bool p0, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		bool L_1 = p0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8947_MI, __this);
		t1732 * L_3 = &(__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		m8975(NULL, L_2, L_3, (&V_0), &m8975_MI);
		__this->f4 = 1;
		VirtActionInvoker0::Invoke(&m8949_MI, __this);
		return;
	}
}
extern "C" void m8949 (t1722 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8950_MI;
extern "C" void m8950 (t1722 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1584, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2763(L_2, &m2763_MI);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_4, (t2*) &_stringLiteral1649, &m2949_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t318* L_6 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f0;
		int32_t L_7 = m6022(L_5, L_6, &m6022_MI);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_003a;
		}
	}
	{
		t570 * L_8 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_8, (t2*) &_stringLiteral1650, &m2949_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003a:
	{
		return;
	}
}
#include "t1555.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1555_TI;
#include "t1555MD.h"

#include "t138.h"
#include "t1375MD.h"
#include "t138MD.h"
extern MethodInfo m5942_MI;
extern MethodInfo m11849_MI;
extern MethodInfo m11848_MI;
extern MethodInfo m4499_MI;


extern MethodInfo m8951_MI;
extern "C" void m8951 (t1555 * __this, MethodInfo* method)
{
	{
		m5942(__this, (t2*) &_stringLiteral1651, &m5942_MI);
		return;
	}
}
extern MethodInfo m8952_MI;
extern "C" void m8952 (t1555 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		return;
	}
}
extern MethodInfo m7046_MI;
extern "C" void m7046 (t1555 * __this, t2* p0, t138 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p1;
		m11849(__this, L_0, L_1, &m11849_MI);
		return;
	}
}
extern MethodInfo m8953_MI;
extern "C" void m8953 (t1555 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
extern MethodInfo m8954_MI;
extern "C" void m8954 (t1555 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		int32_t L_1 = p1;
		m4499(__this, L_1, &m4499_MI);
		return;
	}
}
#include "t895.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t895_TI;
#include "t895MD.h"

#include "t582.h"
#include "t169.h"
#include "t909.h"
#include "t303.h"
#include "t1536.h"
#include "t1505.h"
extern TypeInfo t169_TI;
extern TypeInfo t158_TI;
extern TypeInfo t125_TI;
extern TypeInfo t909_TI;
extern TypeInfo t737_TI;
extern TypeInfo t582_TI;
extern TypeInfo t1536_TI;
extern TypeInfo t303_TI;
#include "t169MD.h"
#include "t909MD.h"
#include "t1360MD.h"
#include "t302MD.h"
#include "t1536MD.h"
#include "t121MD.h"
#include "t1597MD.h"
extern Il2CppType t158_0_0_0;
extern Il2CppType t737_0_0_0;
extern MethodInfo m8956_MI;
extern MethodInfo m5776_MI;
extern MethodInfo m515_MI;
extern MethodInfo m4402_MI;
extern MethodInfo m5834_MI;
extern MethodInfo m4331_MI;
extern MethodInfo m7052_MI;
extern MethodInfo m5763_MI;
extern MethodInfo m8955_MI;
extern MethodInfo m5761_MI;
extern MethodInfo m6953_MI;
extern MethodInfo m511_MI;
extern MethodInfo m8962_MI;
extern MethodInfo m8959_MI;
extern MethodInfo m1199_MI;
extern MethodInfo m7888_MI;
extern MethodInfo m5940_MI;
extern MethodInfo m8963_MI;


extern MethodInfo m7051_MI;
extern "C" void m7051 (t895 * __this, MethodInfo* method)
{
	{
		m4331(__this, 0, &m4331_MI);
		return;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" void m4331 (t895 * __this, int32_t p0, MethodInfo* method)
{
	static bool m4331_init;
	if (!m4331_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m4331_init = true;
	}
	{
		m7052(__this, &m7052_MI);
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t909 * L_1 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_1, (t2*) &_stringLiteral396, &m5763_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		__this->f1 = 1;
		int32_t L_2 = p0;
		__this->f3 = L_2;
		int32_t L_3 = p0;
		__this->f5 = ((t737*)SZArrayNew(t737_TI_var, L_3));
		__this->f7 = 1;
		__this->f2 = 1;
		return;
	}
}
extern MethodInfo m7072_MI;
extern "C" void m7072 (t895 * __this, t737* p0, MethodInfo* method)
{
	{
		m7052(__this, &m7052_MI);
		t737* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1050, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t737* L_2 = p0;
		t737* L_3 = p0;
		m8955(__this, L_2, 0, (((int32_t)(((t121 *)L_3)->max_length))), 1, 0, &m8955_MI);
		return;
	}
}
extern "C" void m8955 (t895 * __this, t737* p0, int32_t p1, int32_t p2, bool p3, bool p4, MethodInfo* method)
{
	{
		t737* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1050, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = p2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}

IL_0016:
	{
		t909 * L_4 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_4, (t2*) &_stringLiteral1656, &m5763_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t737* L_5 = p0;
		int32_t L_6 = p1;
		int32_t L_7 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_5)->max_length)))-(int32_t)L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0039;
		}
	}
	{
		t570 * L_8 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_8, (t2*) &_stringLiteral1657, (t2*) &_stringLiteral1658, &m5761_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0039:
	{
		bool L_9 = p3;
		__this->f1 = L_9;
		t737* L_10 = p0;
		__this->f5 = L_10;
		int32_t L_11 = p2;
		int32_t L_12 = p1;
		__this->f3 = ((int32_t)((int32_t)L_11+(int32_t)L_12));
		int32_t L_13 = (__this->f3);
		__this->f4 = L_13;
		int32_t L_14 = p1;
		__this->f9 = L_14;
		int32_t L_15 = p1;
		__this->f6 = L_15;
		bool L_16 = p4;
		__this->f2 = L_16;
		__this->f7 = 0;
		return;
	}
}
extern "C" void m8956 (t895 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f8);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_1, (t2*) &_stringLiteral1659, &m6953_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
extern MethodInfo m8957_MI;
extern "C" bool m8957 (t895 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f8);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m7071_MI;
extern "C" bool m7071 (t895 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f8);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8958_MI;
extern "C" bool m8958 (t895 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = (__this->f1);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		return G_B3_0;
	}
}
extern TypeInfo* t158_TI_var;
extern TypeInfo* t737_TI_var;
extern "C" void m8959 (t895 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8959_init;
	if (!m8959_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8959_init = true;
	}
	t737* V_0 = {0};
	{
		m8956(__this, &m8956_MI);
		int32_t L_0 = p0;
		int32_t L_1 = (__this->f3);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		bool L_2 = (__this->f7);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		t169 * L_3 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_3, (t2*) &_stringLiteral1652, &m5776_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0023:
	{
		int32_t L_4 = p0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = p0;
		int32_t L_6 = (__this->f4);
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_006d;
		}
	}

IL_0030:
	{
		t158* L_7 = ((t158*)SZArrayNew(t158_TI_var, 4));
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral1653);
		*((t9 **)(t9 **)SZArrayLdElema(L_7, 0)) = (t9 *)(t2*) &_stringLiteral1653;
		t158* L_8 = L_7;
		int32_t L_9 = p0;
		int32_t L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t125_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 1)) = (t9 *)L_11;
		t158* L_12 = L_8;
		ArrayElementTypeCheck (L_12, (t2*) &_stringLiteral163);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 2)) = (t9 *)(t2*) &_stringLiteral163;
		t158* L_13 = L_12;
		int32_t L_14 = (__this->f3);
		int32_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t125_TI), &L_15);
		ArrayElementTypeCheck (L_13, L_16);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 3)) = (t9 *)L_16;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_17 = m515(NULL, L_13, &m515_MI);
		t909 * L_18 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_18, (t2*) &_stringLiteral607, L_17, &m4402_MI);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_006d:
	{
		V_0 = (t737*)NULL;
		int32_t L_19 = p0;
		if (!L_19)
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_20 = p0;
		V_0 = ((t737*)SZArrayNew(t737_TI_var, L_20));
		t737* L_21 = (__this->f5);
		t737* L_22 = V_0;
		int32_t L_23 = (__this->f4);
		m5834(NULL, (t121 *)(t121 *)L_21, 0, (t121 *)(t121 *)L_22, 0, L_23, &m5834_MI);
	}

IL_008d:
	{
		__this->f10 = 0;
		t737* L_24 = V_0;
		__this->f5 = L_24;
		int32_t L_25 = p0;
		__this->f3 = L_25;
		return;
	}
}
extern MethodInfo m7060_MI;
extern "C" int64_t m7060 (t895 * __this, MethodInfo* method)
{
	{
		m8956(__this, &m8956_MI);
		int32_t L_0 = (__this->f4);
		int32_t L_1 = (__this->f6);
		return (((int64_t)((int32_t)((int32_t)L_0-(int32_t)L_1))));
	}
}
extern MethodInfo m7059_MI;
extern "C" int64_t m7059 (t895 * __this, MethodInfo* method)
{
	{
		m8956(__this, &m8956_MI);
		int32_t L_0 = (__this->f9);
		int32_t L_1 = (__this->f6);
		return (((int64_t)((int32_t)((int32_t)L_0-(int32_t)L_1))));
	}
}
extern MethodInfo m7062_MI;
extern "C" void m7062 (t895 * __this, int64_t p0, MethodInfo* method)
{
	{
		m8956(__this, &m8956_MI);
		int64_t L_0 = p0;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_001b;
		}
	}
	{
		t909 * L_1 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_1, (t2*) &_stringLiteral607, (t2*) &_stringLiteral1654, &m4402_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001b:
	{
		int64_t L_2 = p0;
		if ((((int64_t)L_2) <= ((int64_t)(((int64_t)((int32_t)2147483647))))))
		{
			goto IL_0034;
		}
	}
	{
		t909 * L_3 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_3, (t2*) &_stringLiteral607, (t2*) &_stringLiteral1655, &m4402_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0034:
	{
		int32_t L_4 = (__this->f6);
		int64_t L_5 = p0;
		__this->f9 = ((int32_t)((int32_t)L_4+(int32_t)(((int32_t)L_5))));
		return;
	}
}
extern MethodInfo m8960_MI;
extern "C" void m8960 (t895 * __this, bool p0, MethodInfo* method)
{
	{
		__this->f8 = 1;
		__this->f7 = 0;
		return;
	}
}
extern MethodInfo m7073_MI;
extern "C" void m7073 (t895 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m7061_MI;
extern "C" int32_t m7061 (t895 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		m8956(__this, &m8956_MI);
		t737* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1050, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_3 = p2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}

IL_001c:
	{
		t909 * L_4 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_4, (t2*) &_stringLiteral1660, &m5763_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		t737* L_5 = p0;
		int32_t L_6 = p1;
		int32_t L_7 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_5)->max_length)))-(int32_t)L_6))) >= ((int32_t)L_7)))
		{
			goto IL_003f;
		}
	}
	{
		t570 * L_8 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_8, (t2*) &_stringLiteral1661, (t2*) &_stringLiteral1662, &m5761_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003f:
	{
		int32_t L_9 = (__this->f9);
		int32_t L_10 = (__this->f4);
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = p2;
		if (L_11)
		{
			goto IL_0052;
		}
	}

IL_0050:
	{
		return 0;
	}

IL_0052:
	{
		int32_t L_12 = (__this->f9);
		int32_t L_13 = (__this->f4);
		int32_t L_14 = p2;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)((int32_t)L_13-(int32_t)L_14)))))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_15 = (__this->f4);
		int32_t L_16 = (__this->f9);
		p2 = ((int32_t)((int32_t)L_15-(int32_t)L_16));
	}

IL_0073:
	{
		t737* L_17 = (__this->f5);
		int32_t L_18 = (__this->f9);
		t737* L_19 = p0;
		int32_t L_20 = p1;
		int32_t L_21 = p2;
		m5834(NULL, (t121 *)(t121 *)L_17, L_18, (t121 *)(t121 *)L_19, L_20, L_21, &m5834_MI);
		int32_t L_22 = (__this->f9);
		int32_t L_23 = p2;
		__this->f9 = ((int32_t)((int32_t)L_22+(int32_t)L_23));
		int32_t L_24 = p2;
		return L_24;
	}
}
extern MethodInfo m8961_MI;
extern "C" int32_t m8961 (t895 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m8956(__this, &m8956_MI);
		int32_t L_0 = (__this->f9);
		int32_t L_1 = (__this->f4);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		t737* L_2 = (__this->f5);
		int32_t L_3 = (__this->f9);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->f9 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_6));
	}
}
extern MethodInfo m7063_MI;
extern "C" int64_t m7063 (t895 * __this, int64_t p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	{
		m8956(__this, &m8956_MI);
		int64_t L_0 = p0;
		if ((((int64_t)L_0) <= ((int64_t)(((int64_t)((int32_t)2147483647))))))
		{
			goto IL_0025;
		}
	}
	{
		int64_t L_1 = p0;
		int64_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t303_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m511(NULL, (t2*) &_stringLiteral1663, L_3, &m511_MI);
		t909 * L_5 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_5, L_4, &m5763_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0025:
	{
		int32_t L_6 = p1;
		V_1 = L_6;
		int32_t L_7 = V_1;
		if (L_7 == 0)
		{
			goto IL_003b;
		}
		if (L_7 == 1)
		{
			goto IL_0054;
		}
		if (L_7 == 2)
		{
			goto IL_005d;
		}
	}
	{
		goto IL_0066;
	}

IL_003b:
	{
		int64_t L_8 = p0;
		if ((((int64_t)L_8) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_004b;
		}
	}
	{
		t1555 * L_9 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8952(L_9, (t2*) &_stringLiteral1664, &m8952_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_004b:
	{
		int32_t L_10 = (__this->f6);
		V_0 = L_10;
		goto IL_0076;
	}

IL_0054:
	{
		int32_t L_11 = (__this->f9);
		V_0 = L_11;
		goto IL_0076;
	}

IL_005d:
	{
		int32_t L_12 = (__this->f4);
		V_0 = L_12;
		goto IL_0076;
	}

IL_0066:
	{
		t570 * L_13 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_13, (t2*) &_stringLiteral1665, (t2*) &_stringLiteral1642, &m5761_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0076:
	{
		int32_t L_14 = V_0;
		int64_t L_15 = p0;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)(((int32_t)L_15))));
		int32_t L_16 = V_0;
		int32_t L_17 = (__this->f6);
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_008f;
		}
	}
	{
		t1555 * L_18 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8952(L_18, (t2*) &_stringLiteral1664, &m8952_MI);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_008f:
	{
		int32_t L_19 = V_0;
		__this->f9 = L_19;
		int32_t L_20 = (__this->f9);
		return (((int64_t)L_20));
	}
}
extern "C" int32_t m8962 (t895 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0011;
		}
	}
	{
		p0 = ((int32_t)256);
	}

IL_0011:
	{
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f3);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)((int32_t)L_2*(int32_t)2)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = (__this->f3);
		p0 = ((int32_t)((int32_t)L_3*(int32_t)2));
	}

IL_0028:
	{
		int32_t L_4 = p0;
		return L_4;
	}
}
extern "C" void m8963 (t895 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = (__this->f3);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = p0;
		int32_t L_3 = m8962(__this, L_2, &m8962_MI);
		VirtActionInvoker1< int32_t >::Invoke(&m8959_MI, __this, L_3);
		goto IL_003f;
	}

IL_0018:
	{
		int32_t L_4 = (__this->f10);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		t737* L_5 = (__this->f5);
		int32_t L_6 = (__this->f4);
		int32_t L_7 = (__this->f10);
		m1199(NULL, (t121 *)(t121 *)L_5, L_6, L_7, &m1199_MI);
		__this->f10 = 0;
	}

IL_003f:
	{
		return;
	}
}
extern MethodInfo m7064_MI;
extern "C" void m7064 (t895 * __this, int64_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		int64_t L_1 = p0;
		int32_t L_2 = (__this->f3);
		if ((((int64_t)L_1) <= ((int64_t)(((int64_t)L_2)))))
		{
			goto IL_001d;
		}
	}
	{
		t169 * L_3 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_3, (t2*) &_stringLiteral1666, &m5776_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		m8956(__this, &m8956_MI);
		bool L_4 = (__this->f1);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		t2* L_5 = m7888(NULL, (t2*) &_stringLiteral1667, &m7888_MI);
		t169 * L_6 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_6, L_5, &m5776_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003b:
	{
		int64_t L_7 = p0;
		if ((((int64_t)L_7) < ((int64_t)(((int64_t)0)))))
		{
			goto IL_0051;
		}
	}
	{
		int64_t L_8 = p0;
		int32_t L_9 = (__this->f6);
		if ((((int64_t)((int64_t)((int64_t)L_8+(int64_t)(((int64_t)L_9))))) <= ((int64_t)(((int64_t)((int32_t)2147483647))))))
		{
			goto IL_0057;
		}
	}

IL_0051:
	{
		t909 * L_10 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5940(L_10, &m5940_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0057:
	{
		int64_t L_11 = p0;
		int32_t L_12 = (__this->f6);
		V_0 = ((int32_t)((int32_t)(((int32_t)L_11))+(int32_t)L_12));
		int32_t L_13 = V_0;
		int32_t L_14 = (__this->f4);
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_15 = V_0;
		m8963(__this, L_15, &m8963_MI);
		goto IL_0091;
	}

IL_0073:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (__this->f4);
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_18 = (__this->f10);
		int32_t L_19 = (__this->f4);
		int32_t L_20 = V_0;
		__this->f10 = ((int32_t)((int32_t)L_18+(int32_t)((int32_t)((int32_t)L_19-(int32_t)L_20))));
	}

IL_0091:
	{
		int32_t L_21 = V_0;
		__this->f4 = L_21;
		int32_t L_22 = (__this->f9);
		int32_t L_23 = (__this->f4);
		if ((((int32_t)L_22) <= ((int32_t)L_23)))
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_24 = (__this->f4);
		__this->f9 = L_24;
	}

IL_00b2:
	{
		return;
	}
}
extern MethodInfo m4338_MI;
extern TypeInfo* t737_TI_var;
extern "C" t737* m4338 (t895 * __this, MethodInfo* method)
{
	static bool m4338_init;
	if (!m4338_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m4338_init = true;
	}
	int32_t V_0 = 0;
	t737* V_1 = {0};
	{
		int32_t L_0 = (__this->f4);
		int32_t L_1 = (__this->f6);
		V_0 = ((int32_t)((int32_t)L_0-(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = ((t737*)SZArrayNew(t737_TI_var, L_2));
		t737* L_3 = (__this->f5);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		t737* L_4 = (__this->f5);
		int32_t L_5 = (__this->f6);
		t737* L_6 = V_1;
		int32_t L_7 = V_0;
		m5834(NULL, (t121 *)(t121 *)L_4, L_5, (t121 *)(t121 *)L_6, 0, L_7, &m5834_MI);
	}

IL_0031:
	{
		t737* L_8 = V_1;
		return L_8;
	}
}
extern MethodInfo m4332_MI;
extern "C" void m4332 (t895 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		m8956(__this, &m8956_MI);
		bool L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_1, (t2*) &_stringLiteral1668, &m5776_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0019:
	{
		t737* L_2 = p0;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1050, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = p1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_5 = p2;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}

IL_002f:
	{
		t909 * L_6 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5940(L_6, &m5940_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0035:
	{
		t737* L_7 = p0;
		int32_t L_8 = p1;
		int32_t L_9 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))-(int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_004d;
		}
	}
	{
		t570 * L_10 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_10, (t2*) &_stringLiteral1661, (t2*) &_stringLiteral1662, &m5761_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_004d:
	{
		int32_t L_11 = (__this->f9);
		int32_t L_12 = (__this->f4);
		int32_t L_13 = p2;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)((int32_t)L_12-(int32_t)L_13)))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_14 = (__this->f9);
		int32_t L_15 = p2;
		m8963(__this, ((int32_t)((int32_t)L_14+(int32_t)L_15)), &m8963_MI);
	}

IL_006b:
	{
		t737* L_16 = p0;
		int32_t L_17 = p1;
		t737* L_18 = (__this->f5);
		int32_t L_19 = (__this->f9);
		int32_t L_20 = p2;
		m5834(NULL, (t121 *)(t121 *)L_16, L_17, (t121 *)(t121 *)L_18, L_19, L_20, &m5834_MI);
		int32_t L_21 = (__this->f9);
		int32_t L_22 = p2;
		__this->f9 = ((int32_t)((int32_t)L_21+(int32_t)L_22));
		int32_t L_23 = (__this->f9);
		int32_t L_24 = (__this->f4);
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_25 = (__this->f9);
		__this->f4 = L_25;
	}

IL_00a7:
	{
		return;
	}
}
extern MethodInfo m4343_MI;
extern "C" void m4343 (t895 * __this, uint8_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m8956(__this, &m8956_MI);
		bool L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_1, (t2*) &_stringLiteral1668, &m5776_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0019:
	{
		int32_t L_2 = (__this->f9);
		int32_t L_3 = (__this->f4);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (__this->f9);
		m8963(__this, ((int32_t)((int32_t)L_4+(int32_t)1)), &m8963_MI);
		int32_t L_5 = (__this->f9);
		__this->f4 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0043:
	{
		t737* L_6 = (__this->f5);
		int32_t L_7 = (__this->f9);
		int32_t L_8 = L_7;
		V_0 = L_8;
		__this->f9 = ((int32_t)((int32_t)L_8+(int32_t)1));
		int32_t L_9 = V_0;
		uint8_t L_10 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_9)) = (uint8_t)L_10;
		return;
	}
}
#include "t1733.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1733_TI;
#include "t1733MD.h"



#include "t1734.h"
#ifndef _MSC_VER
#else
#endif

#include "t1721.h"
#include "t2154.h"
#include "t1717.h"
#include "t1736.h"
#include "t301.h"
#include "t1193.h"
#include "t1728.h"
#include "t1727.h"
extern TypeInfo t2154_TI;
extern TypeInfo t1717_TI;
extern TypeInfo t1736_TI;
extern TypeInfo t1735_TI;
#include "t58MD.h"
#include "t2154MD.h"
#include "t1717MD.h"
#include "t1736MD.h"
extern MethodInfo m7622_MI;
extern MethodInfo m11913_MI;
extern MethodInfo m8966_MI;
extern MethodInfo m590_MI;
extern MethodInfo m8821_MI;
extern MethodInfo m9007_MI;
extern MethodInfo m2948_MI;
extern MethodInfo m1251_MI;
extern MethodInfo m8971_MI;


extern MethodInfo m8964_MI;
extern "C" void m8964 (t9 * __this , MethodInfo* method)
{
	{
		((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f0 = (-1);
		t58 L_0 = m7622(NULL, (((int64_t)(-1))), &m7622_MI);
		((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1 = L_0;
		return;
	}
}
extern MethodInfo m8965_MI;
extern "C" t138 * m8965 (t9 * __this , int32_t p0, MethodInfo* method)
{
	t2* V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = p0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)80))))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_002c;
	}

IL_000d:
	{
		t2154 * L_3 = (t2154 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2154_TI));
		m11913(L_3, (t2*) &_stringLiteral1669, &m11913_MI);
		return L_3;
	}

IL_0018:
	{
		V_0 = (t2*) &_stringLiteral1670;
		t2* L_4 = V_0;
		int32_t L_5 = p0;
		t1555 * L_6 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8954(L_6, L_4, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_5)), &m8954_MI);
		return L_6;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		int32_t L_8 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_9 = m8966(NULL, L_7, L_8, &m8966_MI);
		return L_9;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t138 * m8966 (t9 * __this , t2* p0, int32_t p1, MethodInfo* method)
{
	static bool m8966_init;
	if (!m8966_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8966_init = true;
	}
	t2* V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = p1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 0)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 1)
		{
			goto IL_00c0;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 2)
		{
			goto IL_00ae;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 3)
		{
			goto IL_00d3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 4)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_2 = V_1;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 0)
		{
			goto IL_0166;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 1)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 2)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 3)
		{
			goto IL_0180;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 4)
		{
			goto IL_019a;
		}
	}

IL_003b:
	{
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)15))) == 0)
		{
			goto IL_0100;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)15))) == 1)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)15))) == 2)
		{
			goto IL_0214;
		}
	}

IL_0050:
	{
		int32_t L_4 = V_1;
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)80))) == 0)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)80))) == 1)
		{
			goto IL_0065;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)80))) == 2)
		{
			goto IL_01fa;
		}
	}

IL_0065:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)39))))
		{
			goto IL_01b4;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)87))))
		{
			goto IL_0147;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)145))))
		{
			goto IL_01ce;
		}
	}
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)206))))
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)6000))))
		{
			goto IL_01e8;
		}
	}
	{
		goto IL_0228;
	}

IL_009b:
	{
		t2* L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = m590(NULL, (t2*) &_stringLiteral1671, L_10, &m590_MI);
		V_0 = L_11;
		t2* L_12 = V_0;
		t1717 * L_13 = (t1717 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1717_TI));
		m8821(L_13, L_12, &m8821_MI);
		return L_13;
	}

IL_00ae:
	{
		int32_t L_14 = p1;
		t1555 * L_15 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8954(L_15, (t2*) &_stringLiteral1672, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_14)), &m8954_MI);
		return L_15;
	}

IL_00c0:
	{
		t2* L_16 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_17 = m590(NULL, (t2*) &_stringLiteral1673, L_16, &m590_MI);
		V_0 = L_17;
		t2* L_18 = V_0;
		t1717 * L_19 = (t1717 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1717_TI));
		m8821(L_19, L_18, &m8821_MI);
		return L_19;
	}

IL_00d3:
	{
		t2* L_20 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_21 = m590(NULL, (t2*) &_stringLiteral1674, L_20, &m590_MI);
		V_0 = L_21;
		t2* L_22 = V_0;
		t2154 * L_23 = (t2154 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2154_TI));
		m11913(L_23, L_22, &m11913_MI);
		return L_23;
	}

IL_00e6:
	{
		t2* L_24 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_25 = m590(NULL, (t2*) &_stringLiteral1675, L_24, &m590_MI);
		V_0 = L_25;
		t2* L_26 = V_0;
		int32_t L_27 = p1;
		t1555 * L_28 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8954(L_28, L_26, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_27)), &m8954_MI);
		return L_28;
	}

IL_0100:
	{
		t2* L_29 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_30 = m590(NULL, (t2*) &_stringLiteral1676, L_29, &m590_MI);
		V_0 = L_30;
		t2* L_31 = V_0;
		int32_t L_32 = p1;
		t1555 * L_33 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8954(L_33, L_31, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_32)), &m8954_MI);
		return L_33;
	}

IL_011a:
	{
		t2* L_34 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_35 = m590(NULL, (t2*) &_stringLiteral1677, L_34, &m590_MI);
		V_0 = L_35;
		t2* L_36 = V_0;
		int32_t L_37 = p1;
		t1555 * L_38 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8954(L_38, L_36, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_37)), &m8954_MI);
		return L_38;
	}

IL_0134:
	{
		t2* L_39 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_40 = m590(NULL, (t2*) &_stringLiteral1678, L_39, &m590_MI);
		V_0 = L_40;
		t2* L_41 = V_0;
		t1736 * L_42 = (t1736 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1736_TI));
		m9007(L_42, L_41, &m9007_MI);
		return L_42;
	}

IL_0147:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_43 = m2948(NULL, (t2*) &_stringLiteral1679, ((t158*)SZArrayNew(t158_TI_var, 0)), &m2948_MI);
		V_0 = L_43;
		t2* L_44 = V_0;
		int32_t L_45 = p1;
		t1555 * L_46 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8954(L_46, L_44, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_45)), &m8954_MI);
		return L_46;
	}

IL_0166:
	{
		t2* L_47 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_48 = m590(NULL, (t2*) &_stringLiteral1680, L_47, &m590_MI);
		V_0 = L_48;
		t2* L_49 = V_0;
		int32_t L_50 = p1;
		t1555 * L_51 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8954(L_51, L_49, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_50)), &m8954_MI);
		return L_51;
	}

IL_0180:
	{
		t2* L_52 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_53 = m590(NULL, (t2*) &_stringLiteral1681, L_52, &m590_MI);
		V_0 = L_53;
		t2* L_54 = V_0;
		int32_t L_55 = p1;
		t1555 * L_56 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8954(L_56, L_54, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_55)), &m8954_MI);
		return L_56;
	}

IL_019a:
	{
		t2* L_57 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_58 = m590(NULL, (t2*) &_stringLiteral1682, L_57, &m590_MI);
		V_0 = L_58;
		t2* L_59 = V_0;
		int32_t L_60 = p1;
		t1555 * L_61 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8954(L_61, L_59, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_60)), &m8954_MI);
		return L_61;
	}

IL_01b4:
	{
		t2* L_62 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_63 = m590(NULL, (t2*) &_stringLiteral1683, L_62, &m590_MI);
		V_0 = L_63;
		t2* L_64 = V_0;
		int32_t L_65 = p1;
		t1555 * L_66 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8954(L_66, L_64, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_65)), &m8954_MI);
		return L_66;
	}

IL_01ce:
	{
		t2* L_67 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_68 = m590(NULL, (t2*) &_stringLiteral1684, L_67, &m590_MI);
		V_0 = L_68;
		t2* L_69 = V_0;
		int32_t L_70 = p1;
		t1555 * L_71 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8954(L_71, L_69, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_70)), &m8954_MI);
		return L_71;
	}

IL_01e8:
	{
		int32_t L_72 = p1;
		t1555 * L_73 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8954(L_73, (t2*) &_stringLiteral1685, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_72)), &m8954_MI);
		return L_73;
	}

IL_01fa:
	{
		t2* L_74 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_75 = m590(NULL, (t2*) &_stringLiteral1686, L_74, &m590_MI);
		V_0 = L_75;
		t2* L_76 = V_0;
		int32_t L_77 = p1;
		t1555 * L_78 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8954(L_78, L_76, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_77)), &m8954_MI);
		return L_78;
	}

IL_0214:
	{
		V_0 = (t2*) &_stringLiteral1687;
		t2* L_79 = V_0;
		int32_t L_80 = p1;
		t1555 * L_81 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8954(L_81, L_79, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_80)), &m8954_MI);
		return L_81;
	}

IL_0228:
	{
		int32_t L_82 = p1;
		int32_t L_83 = L_82;
		t9 * L_84 = Box(InitializedTypeInfo(&t1735_TI), &L_83);
		t2* L_85 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_86 = m1251(NULL, (t2*) &_stringLiteral1688, L_84, L_85, &m1251_MI);
		V_0 = L_86;
		t2* L_87 = V_0;
		int32_t L_88 = p1;
		t1555 * L_89 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8954(L_89, L_87, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_88)), &m8954_MI);
		return L_89;
	}
}
extern MethodInfo m8967_MI;
extern "C" bool m8967 (t9 * __this , t2* p0, int32_t* p1, MethodInfo* method)
{
	typedef bool (*m8967_ftn) (t2*, int32_t*);
	static m8967_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8967_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8968_MI;
extern "C" t221* m8968 (t9 * __this , t2* p0, t2* p1, int32_t p2, int32_t p3, int32_t* p4, MethodInfo* method)
{
	typedef t221* (*m8968_ftn) (t2*, t2*, int32_t, int32_t, int32_t*);
	static m8968_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8968_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern MethodInfo m8969_MI;
extern "C" t2* m8969 (t9 * __this , int32_t* p0, MethodInfo* method)
{
	typedef t2* (*m8969_ftn) (int32_t*);
	static m8969_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8969_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m8970_MI;
extern "C" bool m8970 (t9 * __this , t2* p0, int32_t* p1, MethodInfo* method)
{
	typedef bool (*m8970_ftn) (t2*, int32_t*);
	static m8970_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8970_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m8971 (t9 * __this , t2* p0, int32_t* p1, MethodInfo* method)
{
	typedef int32_t (*m8971_ftn) (t2*, int32_t*);
	static m8971_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8971_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8972_MI;
extern "C" int32_t m8972 (t9 * __this , t58 p0, int32_t* p1, MethodInfo* method)
{
	typedef int32_t (*m8972_ftn) (t58, int32_t*);
	static m8972_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8972_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8973_MI;
extern "C" bool m8973 (t9 * __this , t2* p0, int32_t* p1, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		t2* L_0 = p0;
		int32_t* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		int32_t L_2 = m8971(NULL, L_0, L_1, &m8971_MI);
		V_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f0;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		int32_t L_5 = V_0;
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)16))))
		{
			goto IL_001a;
		}
	}
	{
		return 0;
	}

IL_001a:
	{
		return 1;
	}
}
extern MethodInfo m8974_MI;
extern "C" bool m8974 (t9 * __this , t2* p0, int32_t* p1, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		t2* L_0 = p0;
		int32_t* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		int32_t L_2 = m8971(NULL, L_0, L_1, &m8971_MI);
		V_0 = L_2;
		int32_t* L_3 = p1;
		if ((!(((uint32_t)(*((int32_t*)L_3))) == ((uint32_t)2))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t* L_4 = p1;
		*((int32_t*)(L_4)) = (int32_t)3;
	}

IL_0010:
	{
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		int32_t L_6 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_001a;
		}
	}
	{
		return 0;
	}

IL_001a:
	{
		int32_t L_7 = V_0;
		if (((int32_t)((int32_t)L_7&(int32_t)((int32_t)16))))
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}

IL_0022:
	{
		return 1;
	}
}
extern "C" bool m8975 (t9 * __this , t2* p0, t1732 * p1, int32_t* p2, MethodInfo* method)
{
	typedef bool (*m8975_ftn) (t2*, t1732 *, int32_t*);
	static m8975_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8975_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m8976_MI;
extern "C" t58 m8976 (t9 * __this , t2* p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t* p5, MethodInfo* method)
{
	typedef t58 (*m8976_ftn) (t2*, int32_t, int32_t, int32_t, int32_t, int32_t*);
	static m8976_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8976_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5);
}
extern MethodInfo m8977_MI;
extern "C" bool m8977 (t9 * __this , t58 p0, int32_t* p1, MethodInfo* method)
{
	typedef bool (*m8977_ftn) (t58, int32_t*);
	static m8977_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8977_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8978_MI;
extern "C" int32_t m8978 (t9 * __this , t58 p0, t737* p1, int32_t p2, int32_t p3, int32_t* p4, MethodInfo* method)
{
	typedef int32_t (*m8978_ftn) (t58, t737*, int32_t, int32_t, int32_t*);
	static m8978_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8978_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern MethodInfo m8979_MI;
extern "C" int32_t m8979 (t9 * __this , t58 p0, t737* p1, int32_t p2, int32_t p3, int32_t* p4, MethodInfo* method)
{
	typedef int32_t (*m8979_ftn) (t58, t737*, int32_t, int32_t, int32_t*);
	static m8979_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8979_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern MethodInfo m8980_MI;
extern "C" int64_t m8980 (t9 * __this , t58 p0, int64_t p1, int32_t p2, int32_t* p3, MethodInfo* method)
{
	typedef int64_t (*m8980_ftn) (t58, int64_t, int32_t, int32_t*);
	static m8980_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8980_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m8981_MI;
extern "C" int64_t m8981 (t9 * __this , t58 p0, int32_t* p1, MethodInfo* method)
{
	typedef int64_t (*m8981_ftn) (t58, int32_t*);
	static m8981_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8981_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8982_MI;
extern "C" bool m8982 (t9 * __this , t58 p0, int64_t p1, int32_t* p2, MethodInfo* method)
{
	typedef bool (*m8982_ftn) (t58, int64_t, int32_t*);
	static m8982_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8982_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m8983_MI;
extern "C" t58 m8983 (t9 * __this , MethodInfo* method)
{
	typedef t58 (*m8983_ftn) ();
	static m8983_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8983_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleOutput()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8984_MI;
extern "C" t58 m8984 (t9 * __this , MethodInfo* method)
{
	typedef t58 (*m8984_ftn) ();
	static m8984_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8984_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleInput()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8985_MI;
extern "C" t58 m8985 (t9 * __this , MethodInfo* method)
{
	typedef t58 (*m8985_ftn) ();
	static m8985_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8985_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleError()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8986_MI;
extern "C" uint16_t m8986 (t9 * __this , MethodInfo* method)
{
	typedef uint16_t (*m8986_ftn) ();
	static m8986_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8986_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_VolumeSeparatorChar()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8987_MI;
extern "C" uint16_t m8987 (t9 * __this , MethodInfo* method)
{
	typedef uint16_t (*m8987_ftn) ();
	static m8987_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8987_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_DirectorySeparatorChar()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8988_MI;
extern "C" uint16_t m8988 (t9 * __this , MethodInfo* method)
{
	typedef uint16_t (*m8988_ftn) ();
	static m8988_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8988_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_AltDirectorySeparatorChar()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8989_MI;
extern "C" uint16_t m8989 (t9 * __this , MethodInfo* method)
{
	typedef uint16_t (*m8989_ftn) ();
	static m8989_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8989_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_PathSeparator()");
	return _il2cpp_icall_func();
}
#ifndef _MSC_VER
#else
#endif
#include "t1735MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1732_TI;
#include "t1732MD.h"



// Conversion methods for marshalling of: System.IO.MonoIOStat
void t1732_marshal(const t1732& unmarshaled, t1732_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
	marshaled.f5 = unmarshaled.f5;
}
void t1732_marshal_back(const t1732_marshaled& marshaled, t1732& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
	unmarshaled.f5 = marshaled.f5;
}
// Conversion method for clean up from marshalling of: System.IO.MonoIOStat
void t1732_marshal_cleanup(t1732_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
}
#ifndef _MSC_VER
#else
#endif

#include "t2178.h"
#include "t2169.h"
#include "t319.h"
#include "t907.h"
extern TypeInfo t309_TI;
extern TypeInfo t318_TI;
extern TypeInfo t2178_TI;
extern TypeInfo t907_TI;
extern TypeInfo t124_TI;
#include "t309MD.h"
#include "t1544MD.h"
#include "t899MD.h"
#include "t2178MD.h"
#include "t320MD.h"
#include "t907MD.h"
extern Il2CppType t318_0_0_0;
extern MethodInfo m9001_MI;
extern MethodInfo m2803_MI;
extern MethodInfo m9000_MI;
extern MethodInfo m2778_MI;
extern MethodInfo m399_MI;
extern MethodInfo m610_MI;
extern MethodInfo m1143_MI;
extern MethodInfo m331_MI;
extern MethodInfo m8999_MI;
extern MethodInfo m4312_MI;
extern MethodInfo m7408_MI;
extern MethodInfo m2779_MI;
extern MethodInfo m8991_MI;
extern MethodInfo m9002_MI;
extern MethodInfo m2805_MI;
extern MethodInfo m8997_MI;
extern MethodInfo m2829_MI;
extern MethodInfo m8874_MI;
extern MethodInfo m1124_MI;
extern MethodInfo m11570_MI;
extern MethodInfo m8996_MI;
extern MethodInfo m8998_MI;
extern MethodInfo m4311_MI;
extern MethodInfo m4490_MI;
extern MethodInfo m9005_MI;
extern MethodInfo m4323_MI;
extern MethodInfo m1160_MI;
extern MethodInfo m5791_MI;
extern MethodInfo m9003_MI;
extern MethodInfo m4400_MI;
extern MethodInfo m5811_MI;
extern MethodInfo m7357_MI;
extern MethodInfo m4486_MI;
extern MethodInfo m5847_MI;
extern MethodInfo m7423_MI;
extern MethodInfo m9004_MI;
extern MethodInfo m4487_MI;
extern FieldInfo t2178_f20_FieldInfo;


extern MethodInfo m8990_MI;
extern TypeInfo* t318_TI_var;
extern "C" void m8990 (t9 * __this , MethodInfo* method)
{
	static bool m8990_init;
	if (!m8990_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m8990_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		uint16_t L_0 = m8986(NULL, &m8986_MI);
		((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f5 = L_0;
		uint16_t L_1 = m8987(NULL, &m8987_MI);
		((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2 = L_1;
		uint16_t L_2 = m8988(NULL, &m8988_MI);
		((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1 = L_2;
		uint16_t L_3 = m8989(NULL, &m8989_MI);
		((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f3 = L_3;
		t318* L_4 = m9001(NULL, &m9001_MI);
		((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f0 = L_4;
		t2* L_5 = m2803((&((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2), &m2803_MI);
		((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f4 = L_5;
		t318* L_6 = ((t318*)SZArrayNew(t318_TI_var, 3));
		uint16_t L_7 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_6, 0)) = (uint16_t)L_7;
		t318* L_8 = L_6;
		uint16_t L_9 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_8, 1)) = (uint16_t)L_9;
		t318* L_10 = L_8;
		uint16_t L_11 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f5;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 2)) = (uint16_t)L_11;
		((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f6 = L_10;
		uint16_t L_12 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		uint16_t L_13 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f5;
		((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f7 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		return;
	}
}
extern "C" t2* m1124 (t9 * __this , t2* p0, t2* p1, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1689, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1690, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t2* L_4 = p0;
		int32_t L_5 = m2763(L_4, &m2763_MI);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		t2* L_6 = p1;
		return L_6;
	}

IL_0026:
	{
		t2* L_7 = p1;
		int32_t L_8 = m2763(L_7, &m2763_MI);
		if (L_8)
		{
			goto IL_0030;
		}
	}
	{
		t2* L_9 = p0;
		return L_9;
	}

IL_0030:
	{
		t2* L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t318* L_11 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f0;
		int32_t L_12 = m6022(L_10, L_11, &m6022_MI);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0049;
		}
	}
	{
		t570 * L_13 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_13, (t2*) &_stringLiteral1650, &m2949_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0049:
	{
		t2* L_14 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t318* L_15 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f0;
		int32_t L_16 = m6022(L_14, L_15, &m6022_MI);
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0062;
		}
	}
	{
		t570 * L_17 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_17, (t2*) &_stringLiteral1650, &m2949_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0062:
	{
		t2* L_18 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_19 = m9000(NULL, L_18, &m9000_MI);
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		t2* L_20 = p1;
		return L_20;
	}

IL_006c:
	{
		t2* L_21 = p0;
		t2* L_22 = p0;
		int32_t L_23 = m2763(L_22, &m2763_MI);
		uint16_t L_24 = m2778(L_21, ((int32_t)((int32_t)L_23-(int32_t)1)), &m2778_MI);
		V_0 = L_24;
		uint16_t L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_26 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00a0;
		}
	}
	{
		uint16_t L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_28 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		if ((((int32_t)L_27) == ((int32_t)L_28)))
		{
			goto IL_00a0;
		}
	}
	{
		uint16_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_30 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f5;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00a0;
		}
	}
	{
		t2* L_31 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_32 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f4;
		t2* L_33 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_34 = m399(NULL, L_31, L_32, L_33, &m399_MI);
		return L_34;
	}

IL_00a0:
	{
		t2* L_35 = p0;
		t2* L_36 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_37 = m610(NULL, L_35, L_36, &m610_MI);
		return L_37;
	}
}
extern TypeInfo* t318_TI_var;
extern "C" t2* m8991 (t9 * __this , t2* p0, MethodInfo* method)
{
	static bool m8991_init;
	if (!m8991_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m8991_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	t318* V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint16_t V_9 = 0x0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2763(L_0, &m2763_MI);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		t2* L_2 = p0;
		uint16_t L_3 = m2778(L_2, 0, &m2778_MI);
		V_3 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) <= ((int32_t)2)))
		{
			goto IL_0029;
		}
	}
	{
		uint16_t L_5 = V_3;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0029;
		}
	}
	{
		t2* L_6 = p0;
		uint16_t L_7 = m2778(L_6, 1, &m2778_MI);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0029;
		}
	}
	{
		V_2 = 2;
	}

IL_0029:
	{
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		uint16_t L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_10 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_003d;
		}
	}
	{
		uint16_t L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_12 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_003f;
		}
	}

IL_003d:
	{
		t2* L_13 = p0;
		return L_13;
	}

IL_003f:
	{
		int32_t L_14 = V_2;
		V_4 = L_14;
		goto IL_0097;
	}

IL_0044:
	{
		t2* L_15 = p0;
		int32_t L_16 = V_4;
		uint16_t L_17 = m2778(L_15, L_16, &m2778_MI);
		V_5 = L_17;
		uint16_t L_18 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_19 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_0062;
		}
	}
	{
		uint16_t L_20 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_21 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		goto IL_0091;
	}

IL_0062:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_22+(int32_t)1))) == ((uint32_t)L_23))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
		goto IL_0091;
	}

IL_006f:
	{
		t2* L_25 = p0;
		int32_t L_26 = V_4;
		uint16_t L_27 = m2778(L_25, ((int32_t)((int32_t)L_26+(int32_t)1)), &m2778_MI);
		V_5 = L_27;
		uint16_t L_28 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_29 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		if ((((int32_t)L_28) == ((int32_t)L_29)))
		{
			goto IL_008d;
		}
	}
	{
		uint16_t L_30 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_31 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_0091;
		}
	}

IL_008d:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_0091:
	{
		int32_t L_33 = V_4;
		V_4 = ((int32_t)((int32_t)L_33+(int32_t)1));
	}

IL_0097:
	{
		int32_t L_34 = V_4;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_36 = V_1;
		if (L_36)
		{
			goto IL_00a1;
		}
	}
	{
		t2* L_37 = p0;
		return L_37;
	}

IL_00a1:
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_1;
		V_6 = ((t318*)SZArrayNew(t318_TI_var, ((int32_t)((int32_t)L_38-(int32_t)L_39))));
		int32_t L_40 = V_2;
		if (!L_40)
		{
			goto IL_00ba;
		}
	}
	{
		t318* L_41 = V_6;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_41, 0)) = (uint16_t)((int32_t)92);
		t318* L_42 = V_6;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_42, 1)) = (uint16_t)((int32_t)92);
	}

IL_00ba:
	{
		int32_t L_43 = V_2;
		V_7 = L_43;
		int32_t L_44 = V_2;
		V_8 = L_44;
		goto IL_013d;
	}

IL_00c5:
	{
		t2* L_45 = p0;
		int32_t L_46 = V_7;
		uint16_t L_47 = m2778(L_45, L_46, &m2778_MI);
		V_9 = L_47;
		uint16_t L_48 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_49 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		if ((((int32_t)L_48) == ((int32_t)L_49)))
		{
			goto IL_00ef;
		}
	}
	{
		uint16_t L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_51 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		if ((((int32_t)L_50) == ((int32_t)L_51)))
		{
			goto IL_00ef;
		}
	}
	{
		t318* L_52 = V_6;
		int32_t L_53 = V_8;
		int32_t L_54 = L_53;
		V_8 = ((int32_t)((int32_t)L_54+(int32_t)1));
		uint16_t L_55 = V_9;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_52, L_54)) = (uint16_t)L_55;
		goto IL_0137;
	}

IL_00ef:
	{
		int32_t L_56 = V_8;
		t318* L_57 = V_6;
		if ((((int32_t)((int32_t)((int32_t)L_56+(int32_t)1))) == ((int32_t)(((int32_t)(((t121 *)L_57)->max_length))))))
		{
			goto IL_0137;
		}
	}
	{
		t318* L_58 = V_6;
		int32_t L_59 = V_8;
		int32_t L_60 = L_59;
		V_8 = ((int32_t)((int32_t)L_60+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_61 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_58, L_60)) = (uint16_t)L_61;
		goto IL_0130;
	}

IL_010a:
	{
		t2* L_62 = p0;
		int32_t L_63 = V_7;
		uint16_t L_64 = m2778(L_62, ((int32_t)((int32_t)L_63+(int32_t)1)), &m2778_MI);
		V_9 = L_64;
		uint16_t L_65 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_66 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_012a;
		}
	}
	{
		uint16_t L_67 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_68 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		if ((((int32_t)L_67) == ((int32_t)L_68)))
		{
			goto IL_012a;
		}
	}
	{
		goto IL_0137;
	}

IL_012a:
	{
		int32_t L_69 = V_7;
		V_7 = ((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0130:
	{
		int32_t L_70 = V_7;
		int32_t L_71 = V_0;
		if ((((int32_t)L_70) < ((int32_t)((int32_t)((int32_t)L_71-(int32_t)1)))))
		{
			goto IL_010a;
		}
	}

IL_0137:
	{
		int32_t L_72 = V_7;
		V_7 = ((int32_t)((int32_t)L_72+(int32_t)1));
	}

IL_013d:
	{
		int32_t L_73 = V_7;
		int32_t L_74 = V_0;
		if ((((int32_t)L_73) >= ((int32_t)L_74)))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_75 = V_8;
		t318* L_76 = V_6;
		if ((((int32_t)L_75) < ((int32_t)(((int32_t)(((t121 *)L_76)->max_length))))))
		{
			goto IL_00c5;
		}
	}

IL_014d:
	{
		t318* L_77 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_78 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_78 = m1155(L_78, L_77, &m1143_MI);
		return L_78;
	}
}
extern MethodInfo m8992_MI;
extern "C" t2* m8992 (t9 * __this , t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t2* V_1 = {0};
	int32_t V_2 = 0;
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_1 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_2 = m331(NULL, L_0, L_1, &m331_MI);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		t570 * L_3 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_3, (t2*) &_stringLiteral1691, &m2949_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		t2* L_4 = p0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_6 = m8999(NULL, L_5, &m8999_MI);
		t2* L_7 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_8 = m331(NULL, L_6, L_7, &m331_MI);
		if (!L_8)
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (t2*)NULL;
	}

IL_002b:
	{
		t2* L_9 = p0;
		t2* L_10 = m4312(L_9, &m4312_MI);
		int32_t L_11 = m2763(L_10, &m2763_MI);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		t570 * L_12 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_12, (t2*) &_stringLiteral1692, &m2949_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0043:
	{
		t2* L_13 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t318* L_14 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f0;
		int32_t L_15 = m6022(L_13, L_14, &m6022_MI);
		if ((((int32_t)L_15) <= ((int32_t)(-1))))
		{
			goto IL_005c;
		}
	}
	{
		t570 * L_16 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_16, (t2*) &_stringLiteral1592, &m2949_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_005c:
	{
		t2* L_17 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t318* L_18 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f6;
		int32_t L_19 = m7408(L_17, L_18, &m7408_MI);
		V_0 = L_19;
		int32_t L_20 = V_0;
		if (L_20)
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_006f:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00b8;
		}
	}
	{
		t2* L_23 = p0;
		int32_t L_24 = V_0;
		t2* L_25 = m2779(L_23, 0, L_24, &m2779_MI);
		V_1 = L_25;
		t2* L_26 = V_1;
		int32_t L_27 = m2763(L_26, &m2763_MI);
		V_2 = L_27;
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) < ((int32_t)2)))
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_29 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00b1;
		}
	}
	{
		t2* L_30 = V_1;
		int32_t L_31 = V_2;
		uint16_t L_32 = m2778(L_30, ((int32_t)((int32_t)L_31-(int32_t)1)), &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_33 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f5;
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_00b1;
		}
	}
	{
		t2* L_34 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_35 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		uint16_t L_36 = L_35;
		t9 * L_37 = Box(InitializedTypeInfo(&t309_TI), &L_36);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_38 = m511(NULL, L_34, L_37, &m511_MI);
		return L_38;
	}

IL_00b1:
	{
		t2* L_39 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_40 = m8991(NULL, L_39, &m8991_MI);
		return L_40;
	}

IL_00b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_41 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_41;
	}
}
extern MethodInfo m8993_MI;
extern "C" t2* m8993 (t9 * __this , t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (t2*)NULL;
	}

IL_0005:
	{
		t2* L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t318* L_2 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f0;
		int32_t L_3 = m6022(L_1, L_2, &m6022_MI);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_001e;
		}
	}
	{
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_4, (t2*) &_stringLiteral1650, &m2949_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001e:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		int32_t L_6 = m9002(NULL, L_5, &m9002_MI);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)(-1))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_8 = V_0;
		t2* L_9 = p0;
		int32_t L_10 = m2763(L_9, &m2763_MI);
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)((int32_t)L_10-(int32_t)1)))))
		{
			goto IL_003c;
		}
	}
	{
		t2* L_11 = p0;
		int32_t L_12 = V_0;
		t2* L_13 = m2805(L_11, L_12, &m2805_MI);
		return L_13;
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_14 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_14;
	}
}
extern MethodInfo m8994_MI;
extern "C" t2* m8994 (t9 * __this , t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t2* L_0 = p0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		t2* L_1 = p0;
		int32_t L_2 = m2763(L_1, &m2763_MI);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		t2* L_3 = p0;
		return L_3;
	}

IL_000d:
	{
		t2* L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t318* L_5 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f0;
		int32_t L_6 = m6022(L_4, L_5, &m6022_MI);
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		t570 * L_7 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_7, (t2*) &_stringLiteral1650, &m2949_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0026:
	{
		t2* L_8 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t318* L_9 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f6;
		int32_t L_10 = m7408(L_8, L_9, &m7408_MI);
		V_0 = L_10;
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		t2* L_12 = p0;
		int32_t L_13 = V_0;
		t2* L_14 = m2805(L_12, ((int32_t)((int32_t)L_13+(int32_t)1)), &m2805_MI);
		return L_14;
	}

IL_0040:
	{
		t2* L_15 = p0;
		return L_15;
	}
}
extern MethodInfo m8995_MI;
extern "C" t2* m8995 (t9 * __this , t2* p0, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_1 = m8997(NULL, L_0, &m8997_MI);
		V_0 = L_1;
		t2* L_2 = V_0;
		return L_2;
	}
}
extern "C" t2* m8996 (t9 * __this , t2* p0, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t2* L_0 = p0;
		int32_t L_1 = m2763(L_0, &m2763_MI);
		if ((((int32_t)L_1) >= ((int32_t)2)))
		{
			goto IL_000b;
		}
	}
	{
		t2* L_2 = p0;
		return L_2;
	}

IL_000b:
	{
		t2* L_3 = p0;
		uint16_t L_4 = m2778(L_3, 1, &m2778_MI);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0024;
		}
	}
	{
		t2* L_5 = p0;
		uint16_t L_6 = m2778(L_5, 0, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_7 = m2829(NULL, L_6, &m2829_MI);
		if (L_7)
		{
			goto IL_0026;
		}
	}

IL_0024:
	{
		t2* L_8 = p0;
		return L_8;
	}

IL_0026:
	{
		t2* L_9 = m8874(NULL, &m8874_MI);
		V_0 = L_9;
		t2* L_10 = p0;
		int32_t L_11 = m2763(L_10, &m2763_MI);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_005f;
		}
	}
	{
		t2* L_12 = V_0;
		uint16_t L_13 = m2778(L_12, 0, &m2778_MI);
		t2* L_14 = p0;
		uint16_t L_15 = m2778(L_14, 0, &m2778_MI);
		if ((!(((uint32_t)L_13) == ((uint32_t)L_15))))
		{
			goto IL_004c;
		}
	}
	{
		t2* L_16 = V_0;
		p0 = L_16;
		goto IL_005d;
	}

IL_004c:
	{
		t2* L_17 = p0;
		uint16_t L_18 = ((int32_t)92);
		t9 * L_19 = Box(InitializedTypeInfo(&t309_TI), &L_18);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_20 = m511(NULL, L_17, L_19, &m511_MI);
		p0 = L_20;
	}

IL_005d:
	{
		goto IL_00cb;
	}

IL_005f:
	{
		t2* L_21 = p0;
		uint16_t L_22 = m2778(L_21, 2, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_23 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_00cb;
		}
	}
	{
		t2* L_24 = p0;
		uint16_t L_25 = m2778(L_24, 2, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_26 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00cb;
		}
	}
	{
		t2* L_27 = V_0;
		uint16_t L_28 = m2778(L_27, 0, &m2778_MI);
		t2* L_29 = p0;
		uint16_t L_30 = m2778(L_29, 0, &m2778_MI);
		if ((!(((uint32_t)L_28) == ((uint32_t)L_30))))
		{
			goto IL_00a6;
		}
	}
	{
		t2* L_31 = V_0;
		t2* L_32 = p0;
		t2* L_33 = p0;
		int32_t L_34 = m2763(L_33, &m2763_MI);
		t2* L_35 = m2779(L_32, 2, ((int32_t)((int32_t)L_34-(int32_t)2)), &m2779_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_36 = m1124(NULL, L_31, L_35, &m1124_MI);
		p0 = L_36;
		goto IL_00cb;
	}

IL_00a6:
	{
		t2* L_37 = p0;
		t2* L_38 = m2779(L_37, 0, 2, &m2779_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_39 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f4;
		t2* L_40 = p0;
		t2* L_41 = p0;
		int32_t L_42 = m2763(L_41, &m2763_MI);
		t2* L_43 = m2779(L_40, 2, ((int32_t)((int32_t)L_42-(int32_t)2)), &m2779_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_44 = m399(NULL, L_38, L_39, L_43, &m399_MI);
		p0 = L_44;
	}

IL_00cb:
	{
		t2* L_45 = p0;
		return L_45;
	}
}
extern "C" t2* m8997 (t9 * __this , t2* p0, MethodInfo* method)
{
	t2* V_0 = {0};
	uint16_t V_1 = 0x0;
	t2* V_2 = {0};
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1584, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		t2* L_3 = m4312(L_2, &m4312_MI);
		int32_t L_4 = m2763(L_3, &m2763_MI);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		t2* L_5 = m7888(NULL, (t2*) &_stringLiteral1693, &m7888_MI);
		V_0 = L_5;
		t2* L_6 = V_0;
		t570 * L_7 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_7, L_6, &m2949_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002d:
	{
		bool L_8 = m11570(NULL, &m11570_MI);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		t2* L_9 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_10 = m8996(NULL, L_9, &m8996_MI);
		p0 = L_10;
	}

IL_003e:
	{
		t2* L_11 = p0;
		t2* L_12 = p0;
		int32_t L_13 = m2763(L_12, &m2763_MI);
		uint16_t L_14 = m2778(L_11, ((int32_t)((int32_t)L_13-(int32_t)1)), &m2778_MI);
		V_1 = L_14;
		t2* L_15 = p0;
		int32_t L_16 = m2763(L_15, &m2763_MI);
		if ((((int32_t)L_16) < ((int32_t)2)))
		{
			goto IL_00cb;
		}
	}
	{
		t2* L_17 = p0;
		uint16_t L_18 = m2778(L_17, 0, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_19 = m8998(NULL, L_18, &m8998_MI);
		if (!L_19)
		{
			goto IL_00cb;
		}
	}
	{
		t2* L_20 = p0;
		uint16_t L_21 = m2778(L_20, 1, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_22 = m8998(NULL, L_21, &m8998_MI);
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		t2* L_23 = p0;
		int32_t L_24 = m2763(L_23, &m2763_MI);
		if ((((int32_t)L_24) == ((int32_t)2)))
		{
			goto IL_008f;
		}
	}
	{
		t2* L_25 = p0;
		t2* L_26 = p0;
		uint16_t L_27 = m2778(L_26, 0, &m2778_MI);
		int32_t L_28 = m4311(L_25, L_27, 2, &m4311_MI);
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_009a;
		}
	}

IL_008f:
	{
		t570 * L_29 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_29, (t2*) &_stringLiteral1694, &m2949_MI);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_009a:
	{
		t2* L_30 = p0;
		uint16_t L_31 = m2778(L_30, 0, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_32 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_00bc;
		}
	}
	{
		t2* L_33 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_34 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		uint16_t L_35 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		t2* L_36 = m4490(L_33, L_34, L_35, &m4490_MI);
		p0 = L_36;
	}

IL_00bc:
	{
		t2* L_37 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_38 = m9005(NULL, L_37, &m9005_MI);
		p0 = L_38;
		goto IL_016c;
	}

IL_00cb:
	{
		t2* L_39 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_40 = m9000(NULL, L_39, &m9000_MI);
		if (L_40)
		{
			goto IL_00ec;
		}
	}
	{
		t2* L_41 = m8874(NULL, &m8874_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_42 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f4;
		t2* L_43 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_44 = m399(NULL, L_41, L_42, L_43, &m399_MI);
		p0 = L_44;
		goto IL_0162;
	}

IL_00ec:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_45 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0162;
		}
	}
	{
		t2* L_46 = p0;
		int32_t L_47 = m2763(L_46, &m2763_MI);
		if ((((int32_t)L_47) < ((int32_t)2)))
		{
			goto IL_0162;
		}
	}
	{
		t2* L_48 = p0;
		uint16_t L_49 = m2778(L_48, 0, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_50 = m8998(NULL, L_49, &m8998_MI);
		if (!L_50)
		{
			goto IL_0162;
		}
	}
	{
		t2* L_51 = p0;
		uint16_t L_52 = m2778(L_51, 1, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_53 = m8998(NULL, L_52, &m8998_MI);
		if (L_53)
		{
			goto IL_0162;
		}
	}
	{
		t2* L_54 = m8874(NULL, &m8874_MI);
		V_2 = L_54;
		t2* L_55 = V_2;
		uint16_t L_56 = m2778(L_55, 1, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_57 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f5;
		if ((!(((uint32_t)L_56) == ((uint32_t)L_57))))
		{
			goto IL_0142;
		}
	}
	{
		t2* L_58 = V_2;
		t2* L_59 = m2779(L_58, 0, 2, &m2779_MI);
		t2* L_60 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_61 = m610(NULL, L_59, L_60, &m610_MI);
		p0 = L_61;
		goto IL_0162;
	}

IL_0142:
	{
		t2* L_62 = V_2;
		t2* L_63 = V_2;
		t2* L_64 = V_2;
		int32_t L_65 = m4323(L_64, (t2*) &_stringLiteral343, &m4323_MI);
		int32_t L_66 = m4311(L_63, ((int32_t)92), ((int32_t)((int32_t)L_65+(int32_t)1)), &m4311_MI);
		t2* L_67 = m2779(L_62, 0, L_66, &m2779_MI);
		p0 = L_67;
	}

IL_0162:
	{
		t2* L_68 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_69 = m9005(NULL, L_68, &m9005_MI);
		p0 = L_69;
	}

IL_016c:
	{
		uint16_t L_70 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_71 = m8998(NULL, L_70, &m8998_MI);
		if (!L_71)
		{
			goto IL_019d;
		}
	}
	{
		t2* L_72 = p0;
		t2* L_73 = p0;
		int32_t L_74 = m2763(L_73, &m2763_MI);
		uint16_t L_75 = m2778(L_72, ((int32_t)((int32_t)L_74-(int32_t)1)), &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_76 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		if ((((int32_t)L_75) == ((int32_t)L_76)))
		{
			goto IL_019d;
		}
	}
	{
		t2* L_77 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_78 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		uint16_t L_79 = L_78;
		t9 * L_80 = Box(InitializedTypeInfo(&t309_TI), &L_79);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_81 = m511(NULL, L_77, L_80, &m511_MI);
		p0 = L_81;
	}

IL_019d:
	{
		t2* L_82 = p0;
		return L_82;
	}
}
extern "C" bool m8998 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		uint16_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_1 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		uint16_t L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_3 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
extern "C" t2* m8999 (t9 * __this , t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t2* G_B10_0 = {0};
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (t2*)NULL;
	}

IL_0005:
	{
		t2* L_1 = p0;
		t2* L_2 = m4312(L_1, &m4312_MI);
		int32_t L_3 = m2763(L_2, &m2763_MI);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_4, (t2*) &_stringLiteral1695, &m2949_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001d:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_6 = m9000(NULL, L_5, &m9000_MI);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_7;
	}

IL_002b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_8 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_004f;
		}
	}
	{
		t2* L_9 = p0;
		uint16_t L_10 = m2778(L_9, 0, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_11 = m8998(NULL, L_10, &m8998_MI);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_12 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f4;
		G_B10_0 = L_12;
		goto IL_004e;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_13 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		G_B10_0 = L_13;
	}

IL_004e:
	{
		return G_B10_0;
	}

IL_004f:
	{
		V_0 = 2;
		t2* L_14 = p0;
		int32_t L_15 = m2763(L_14, &m2763_MI);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_006e;
		}
	}
	{
		t2* L_16 = p0;
		uint16_t L_17 = m2778(L_16, 0, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_18 = m8998(NULL, L_17, &m8998_MI);
		if (!L_18)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_19 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f4;
		return L_19;
	}

IL_006e:
	{
		t2* L_20 = p0;
		int32_t L_21 = m2763(L_20, &m2763_MI);
		if ((((int32_t)L_21) >= ((int32_t)2)))
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_22 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_22;
	}

IL_007d:
	{
		t2* L_23 = p0;
		uint16_t L_24 = m2778(L_23, 0, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_25 = m8998(NULL, L_24, &m8998_MI);
		if (!L_25)
		{
			goto IL_010f;
		}
	}
	{
		t2* L_26 = p0;
		uint16_t L_27 = m2778(L_26, 1, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_28 = m8998(NULL, L_27, &m8998_MI);
		if (!L_28)
		{
			goto IL_010f;
		}
	}
	{
		goto IL_00a5;
	}

IL_00a1:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00a5:
	{
		int32_t L_30 = V_0;
		t2* L_31 = p0;
		int32_t L_32 = m2763(L_31, &m2763_MI);
		if ((((int32_t)L_30) >= ((int32_t)L_32)))
		{
			goto IL_00bc;
		}
	}
	{
		t2* L_33 = p0;
		int32_t L_34 = V_0;
		uint16_t L_35 = m2778(L_33, L_34, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_36 = m8998(NULL, L_35, &m8998_MI);
		if (!L_36)
		{
			goto IL_00a1;
		}
	}

IL_00bc:
	{
		int32_t L_37 = V_0;
		t2* L_38 = p0;
		int32_t L_39 = m2763(L_38, &m2763_MI);
		if ((((int32_t)L_37) >= ((int32_t)L_39)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)((int32_t)L_40+(int32_t)1));
		goto IL_00cf;
	}

IL_00cb:
	{
		int32_t L_41 = V_0;
		V_0 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00cf:
	{
		int32_t L_42 = V_0;
		t2* L_43 = p0;
		int32_t L_44 = m2763(L_43, &m2763_MI);
		if ((((int32_t)L_42) >= ((int32_t)L_44)))
		{
			goto IL_00e6;
		}
	}
	{
		t2* L_45 = p0;
		int32_t L_46 = V_0;
		uint16_t L_47 = m2778(L_45, L_46, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_48 = m8998(NULL, L_47, &m8998_MI);
		if (!L_48)
		{
			goto IL_00cb;
		}
	}

IL_00e6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_49 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f4;
		t2* L_50 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f4;
		t2* L_51 = p0;
		int32_t L_52 = V_0;
		t2* L_53 = m2779(L_51, 2, ((int32_t)((int32_t)L_52-(int32_t)2)), &m2779_MI);
		uint16_t L_54 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		uint16_t L_55 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		t2* L_56 = m4490(L_53, L_54, L_55, &m4490_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_57 = m399(NULL, L_49, L_50, L_56, &m399_MI);
		return L_57;
	}

IL_010f:
	{
		t2* L_58 = p0;
		uint16_t L_59 = m2778(L_58, 0, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_60 = m8998(NULL, L_59, &m8998_MI);
		if (!L_60)
		{
			goto IL_0123;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_61 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f4;
		return L_61;
	}

IL_0123:
	{
		t2* L_62 = p0;
		uint16_t L_63 = m2778(L_62, 1, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_64 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f5;
		if ((!(((uint32_t)L_63) == ((uint32_t)L_64))))
		{
			goto IL_014e;
		}
	}
	{
		t2* L_65 = p0;
		int32_t L_66 = m2763(L_65, &m2763_MI);
		if ((((int32_t)L_66) < ((int32_t)3)))
		{
			goto IL_014c;
		}
	}
	{
		t2* L_67 = p0;
		uint16_t L_68 = m2778(L_67, 2, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_69 = m8998(NULL, L_68, &m8998_MI);
		if (!L_69)
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_70 = V_0;
		V_0 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_014c:
	{
		goto IL_015b;
	}

IL_014e:
	{
		t2* L_71 = m8874(NULL, &m8874_MI);
		t2* L_72 = m2779(L_71, 0, 2, &m2779_MI);
		return L_72;
	}

IL_015b:
	{
		t2* L_73 = p0;
		int32_t L_74 = V_0;
		t2* L_75 = m2779(L_73, 0, L_74, &m2779_MI);
		return L_75;
	}
}
extern "C" bool m9000 (t9 * __this , t2* p0, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	{
		t2* L_0 = p0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		t2* L_1 = p0;
		int32_t L_2 = m2763(L_1, &m2763_MI);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return 0;
	}

IL_000d:
	{
		t2* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t318* L_4 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f0;
		int32_t L_5 = m6022(L_3, L_4, &m6022_MI);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		t570 * L_6 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_6, (t2*) &_stringLiteral1650, &m2949_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0026:
	{
		t2* L_7 = p0;
		uint16_t L_8 = m2778(L_7, 0, &m2778_MI);
		V_0 = L_8;
		uint16_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_10 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0061;
		}
	}
	{
		uint16_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_12 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_13 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f7;
		if (L_13)
		{
			goto IL_005e;
		}
	}
	{
		t2* L_14 = p0;
		int32_t L_15 = m2763(L_14, &m2763_MI);
		if ((((int32_t)L_15) <= ((int32_t)1)))
		{
			goto IL_005e;
		}
	}
	{
		t2* L_16 = p0;
		uint16_t L_17 = m2778(L_16, 1, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_18 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f5;
		G_B11_0 = ((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B11_0 = 0;
	}

IL_005f:
	{
		G_B13_0 = G_B11_0;
		goto IL_0062;
	}

IL_0061:
	{
		G_B13_0 = 1;
	}

IL_0062:
	{
		return G_B13_0;
	}
}
extern TypeInfo* t318_TI_var;
extern "C" t318* m9001 (t9 * __this , MethodInfo* method)
{
	static bool m9001_init;
	if (!m9001_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m9001_init = true;
	}
	{
		bool L_0 = m11570(NULL, &m11570_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t318* L_1 = ((t318*)SZArrayNew(t318_TI_var, ((int32_t)36)));
		m1160(NULL, (t121 *)(t121 *)L_1, LoadFieldToken(&t2178_f20_FieldInfo), &m1160_MI);
		return L_1;
	}

IL_001a:
	{
		return ((t318*)SZArrayNew(t318_TI_var, 1));
	}
}
extern "C" int32_t m9002 (t9 * __this , t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t2* L_0 = p0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		t2* L_1 = p0;
		int32_t L_2 = m5791(L_1, ((int32_t)46), &m5791_MI);
		V_0 = L_2;
		t2* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t318* L_4 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f6;
		int32_t L_5 = m7408(L_3, L_4, &m7408_MI);
		V_1 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_8 = V_0;
		return L_8;
	}

IL_001e:
	{
		return (-1);
	}
}
extern "C" t2* m9003 (t9 * __this , t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 2;
		goto IL_0008;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)1));
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		t2* L_2 = p0;
		int32_t L_3 = m2763(L_2, &m2763_MI);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}
	{
		t2* L_4 = p0;
		int32_t L_5 = V_0;
		uint16_t L_6 = m2778(L_4, L_5, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_7 = m8998(NULL, L_6, &m8998_MI);
		if (!L_7)
		{
			goto IL_0004;
		}
	}

IL_001f:
	{
		int32_t L_8 = V_0;
		t2* L_9 = p0;
		int32_t L_10 = m2763(L_9, &m2763_MI);
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
		goto IL_0032;
	}

IL_002e:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_13 = V_0;
		t2* L_14 = p0;
		int32_t L_15 = m2763(L_14, &m2763_MI);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_0049;
		}
	}
	{
		t2* L_16 = p0;
		int32_t L_17 = V_0;
		uint16_t L_18 = m2778(L_16, L_17, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_19 = m8998(NULL, L_18, &m8998_MI);
		if (!L_19)
		{
			goto IL_002e;
		}
	}

IL_0049:
	{
		t2* L_20 = p0;
		int32_t L_21 = V_0;
		t2* L_22 = m2779(L_20, 2, ((int32_t)((int32_t)L_21-(int32_t)2)), &m2779_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_23 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		uint16_t L_24 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		t2* L_25 = m4490(L_22, L_23, L_24, &m4490_MI);
		return L_25;
	}
}
extern "C" bool m9004 (t9 * __this , t2* p0, t2* p1, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	uint16_t V_2 = 0x0;
	int32_t G_B18_0 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2763(L_0, &m2763_MI);
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		t2* L_2 = p1;
		int32_t L_3 = m2763(L_2, &m2763_MI);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return 0;
	}

IL_0014:
	{
		t2* L_4 = p0;
		uint16_t L_5 = m2778(L_4, 0, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_6 = m8998(NULL, L_5, &m8998_MI);
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		t2* L_7 = p0;
		uint16_t L_8 = m2778(L_7, 1, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_9 = m8998(NULL, L_8, &m8998_MI);
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		t2* L_10 = p1;
		uint16_t L_11 = m2778(L_10, 0, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_12 = m8998(NULL, L_11, &m8998_MI);
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		t2* L_13 = p1;
		uint16_t L_14 = m2778(L_13, 1, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_15 = m8998(NULL, L_14, &m8998_MI);
		if (L_15)
		{
			goto IL_004e;
		}
	}

IL_004c:
	{
		return 0;
	}

IL_004e:
	{
		t2* L_16 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_17 = m9003(NULL, L_16, &m9003_MI);
		V_0 = L_17;
		t2* L_18 = p1;
		t2* L_19 = m9003(NULL, L_18, &m9003_MI);
		V_1 = L_19;
		t2* L_20 = V_0;
		t2* L_21 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_22 = m4400(NULL, &m4400_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_23 = m5811(NULL, L_20, L_21, 1, L_22, &m5811_MI);
		return ((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		t2* L_24 = p0;
		uint16_t L_25 = m2778(L_24, 0, &m2778_MI);
		V_2 = L_25;
		t2* L_26 = p1;
		uint16_t L_27 = m2778(L_26, 0, &m2778_MI);
		bool L_28 = m7357((&V_2), L_27, &m7357_MI);
		if (L_28)
		{
			goto IL_0087;
		}
	}
	{
		return 0;
	}

IL_0087:
	{
		t2* L_29 = p1;
		uint16_t L_30 = m2778(L_29, 1, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_31 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f5;
		if ((((int32_t)L_30) == ((int32_t)L_31)))
		{
			goto IL_0097;
		}
	}
	{
		return 0;
	}

IL_0097:
	{
		t2* L_32 = p0;
		int32_t L_33 = m2763(L_32, &m2763_MI);
		if ((((int32_t)L_33) <= ((int32_t)2)))
		{
			goto IL_00c7;
		}
	}
	{
		t2* L_34 = p1;
		int32_t L_35 = m2763(L_34, &m2763_MI);
		if ((((int32_t)L_35) <= ((int32_t)2)))
		{
			goto IL_00c7;
		}
	}
	{
		t2* L_36 = p0;
		uint16_t L_37 = m2778(L_36, 2, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_38 = m8998(NULL, L_37, &m8998_MI);
		if (!L_38)
		{
			goto IL_00c5;
		}
	}
	{
		t2* L_39 = p1;
		uint16_t L_40 = m2778(L_39, 2, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_41 = m8998(NULL, L_40, &m8998_MI);
		G_B18_0 = ((int32_t)(L_41));
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B18_0 = 0;
	}

IL_00c6:
	{
		return G_B18_0;
	}

IL_00c7:
	{
		return 1;
	}
}
extern TypeInfo* t318_TI_var;
extern "C" t2* m9005 (t9 * __this , t2* p0, MethodInfo* method)
{
	static bool m9005_init;
	if (!m9005_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m9005_init = true;
	}
	t2* V_0 = {0};
	t221* V_1 = {0};
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	t2* V_6 = {0};
	t2* V_7 = {0};
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		t2* L_1 = p0;
		return L_1;
	}

IL_0005:
	{
		bool L_2 = m11570(NULL, &m11570_MI);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		t2* L_3 = p0;
		t2* L_4 = m4312(L_3, &m4312_MI);
		p0 = L_4;
	}

IL_0016:
	{
		t2* L_5 = p0;
		int32_t L_6 = m2763(L_5, &m2763_MI);
		if (L_6)
		{
			goto IL_0020;
		}
	}
	{
		t2* L_7 = p0;
		return L_7;
	}

IL_0020:
	{
		t2* L_8 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_9 = m8999(NULL, L_8, &m8999_MI);
		V_0 = L_9;
		t2* L_10 = p0;
		t318* L_11 = ((t318*)SZArrayNew(t318_TI_var, 2));
		uint16_t L_12 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_11, 0)) = (uint16_t)L_12;
		t318* L_13 = L_11;
		uint16_t L_14 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 1)) = (uint16_t)L_14;
		t221* L_15 = m4486(L_10, L_13, &m4486_MI);
		V_1 = L_15;
		V_2 = 0;
		bool L_16 = m11570(NULL, &m11570_MI);
		if (!L_16)
		{
			goto IL_0072;
		}
	}
	{
		t2* L_17 = V_0;
		int32_t L_18 = m2763(L_17, &m2763_MI);
		if ((((int32_t)L_18) <= ((int32_t)2)))
		{
			goto IL_0072;
		}
	}
	{
		t2* L_19 = V_0;
		uint16_t L_20 = m2778(L_19, 0, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_21 = m8998(NULL, L_20, &m8998_MI);
		if (!L_21)
		{
			goto IL_0072;
		}
	}
	{
		t2* L_22 = V_0;
		uint16_t L_23 = m2778(L_22, 1, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_24 = m8998(NULL, L_23, &m8998_MI);
		G_B11_0 = ((int32_t)(L_24));
		goto IL_0073;
	}

IL_0072:
	{
		G_B11_0 = 0;
	}

IL_0073:
	{
		V_3 = G_B11_0;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_007a;
		}
	}
	{
		G_B14_0 = 3;
		goto IL_007b;
	}

IL_007a:
	{
		G_B14_0 = 0;
	}

IL_007b:
	{
		V_4 = G_B14_0;
		V_5 = 0;
		goto IL_00e9;
	}

IL_0082:
	{
		bool L_26 = m11570(NULL, &m11570_MI);
		if (!L_26)
		{
			goto IL_009c;
		}
	}
	{
		t221* L_27 = V_1;
		int32_t L_28 = V_5;
		t221* L_29 = V_1;
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		t2* L_32 = m5847((*(t2**)(t2**)SZArrayLdElema(L_29, L_31)), ((t318*)SZArrayNew(t318_TI_var, 0)), &m5847_MI);
		ArrayElementTypeCheck (L_27, L_32);
		*((t2**)(t2**)SZArrayLdElema(L_27, L_28)) = (t2*)L_32;
	}

IL_009c:
	{
		t221* L_33 = V_1;
		int32_t L_34 = V_5;
		int32_t L_35 = L_34;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_36 = m331(NULL, (*(t2**)(t2**)SZArrayLdElema(L_33, L_35)), (t2*) &_stringLiteral135, &m331_MI);
		if (L_36)
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_37 = V_5;
		if (!L_37)
		{
			goto IL_00bd;
		}
	}
	{
		t221* L_38 = V_1;
		int32_t L_39 = V_5;
		int32_t L_40 = L_39;
		int32_t L_41 = m2763((*(t2**)(t2**)SZArrayLdElema(L_38, L_40)), &m2763_MI);
		if (L_41)
		{
			goto IL_00bd;
		}
	}

IL_00bb:
	{
		goto IL_00e3;
	}

IL_00bd:
	{
		t221* L_42 = V_1;
		int32_t L_43 = V_5;
		int32_t L_44 = L_43;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_45 = m331(NULL, (*(t2**)(t2**)SZArrayLdElema(L_42, L_44)), (t2*) &_stringLiteral735, &m331_MI);
		if (!L_45)
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_4;
		if ((((int32_t)L_46) <= ((int32_t)L_47)))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_48 = V_2;
		V_2 = ((int32_t)((int32_t)L_48-(int32_t)1));
	}

IL_00d6:
	{
		goto IL_00e3;
	}

IL_00d8:
	{
		t221* L_49 = V_1;
		int32_t L_50 = V_2;
		int32_t L_51 = L_50;
		V_2 = ((int32_t)((int32_t)L_51+(int32_t)1));
		t221* L_52 = V_1;
		int32_t L_53 = V_5;
		int32_t L_54 = L_53;
		ArrayElementTypeCheck (L_49, (*(t2**)(t2**)SZArrayLdElema(L_52, L_54)));
		*((t2**)(t2**)SZArrayLdElema(L_49, L_51)) = (t2*)(*(t2**)(t2**)SZArrayLdElema(L_52, L_54));
	}

IL_00e3:
	{
		int32_t L_55 = V_5;
		V_5 = ((int32_t)((int32_t)L_55+(int32_t)1));
	}

IL_00e9:
	{
		int32_t L_56 = V_5;
		t221* L_57 = V_1;
		if ((((int32_t)L_56) < ((int32_t)(((int32_t)(((t121 *)L_57)->max_length))))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_58 = V_2;
		if (!L_58)
		{
			goto IL_0106;
		}
	}
	{
		int32_t L_59 = V_2;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0108;
		}
	}
	{
		t221* L_60 = V_1;
		int32_t L_61 = 0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_62 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_63 = m331(NULL, (*(t2**)(t2**)SZArrayLdElema(L_60, L_61)), L_62, &m331_MI);
		if (!L_63)
		{
			goto IL_0108;
		}
	}

IL_0106:
	{
		t2* L_64 = V_0;
		return L_64;
	}

IL_0108:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_65 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f4;
		t221* L_66 = V_1;
		int32_t L_67 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_68 = m7423(NULL, L_65, L_66, 0, L_67, &m7423_MI);
		V_6 = L_68;
		bool L_69 = m11570(NULL, &m11570_MI);
		if (!L_69)
		{
			goto IL_022a;
		}
	}
	{
		bool L_70 = V_3;
		if (!L_70)
		{
			goto IL_0132;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_71 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f4;
		t2* L_72 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_73 = m610(NULL, L_71, L_72, &m610_MI);
		V_6 = L_73;
	}

IL_0132:
	{
		t2* L_74 = V_0;
		t2* L_75 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_76 = m9004(NULL, L_74, L_75, &m9004_MI);
		if (L_76)
		{
			goto IL_0146;
		}
	}
	{
		t2* L_77 = V_0;
		t2* L_78 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_79 = m610(NULL, L_77, L_78, &m610_MI);
		V_6 = L_79;
	}

IL_0146:
	{
		bool L_80 = V_3;
		if (!L_80)
		{
			goto IL_014c;
		}
	}
	{
		t2* L_81 = V_6;
		return L_81;
	}

IL_014c:
	{
		t2* L_82 = p0;
		uint16_t L_83 = m2778(L_82, 0, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_84 = m8998(NULL, L_83, &m8998_MI);
		if (L_84)
		{
			goto IL_0191;
		}
	}
	{
		t2* L_85 = V_0;
		t2* L_86 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_87 = m9004(NULL, L_85, L_86, &m9004_MI);
		if (!L_87)
		{
			goto IL_0191;
		}
	}
	{
		t2* L_88 = V_6;
		int32_t L_89 = m2763(L_88, &m2763_MI);
		if ((((int32_t)L_89) > ((int32_t)2)))
		{
			goto IL_018e;
		}
	}
	{
		t2* L_90 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_91 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f4;
		bool L_92 = m4487(L_90, L_91, &m4487_MI);
		if (L_92)
		{
			goto IL_018e;
		}
	}
	{
		t2* L_93 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_94 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		uint16_t L_95 = L_94;
		t9 * L_96 = Box(InitializedTypeInfo(&t309_TI), &L_95);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_97 = m511(NULL, L_93, L_96, &m511_MI);
		V_6 = L_97;
	}

IL_018e:
	{
		t2* L_98 = V_6;
		return L_98;
	}

IL_0191:
	{
		t2* L_99 = m8874(NULL, &m8874_MI);
		V_7 = L_99;
		t2* L_100 = V_7;
		int32_t L_101 = m2763(L_100, &m2763_MI);
		if ((((int32_t)L_101) <= ((int32_t)1)))
		{
			goto IL_01ea;
		}
	}
	{
		t2* L_102 = V_7;
		uint16_t L_103 = m2778(L_102, 1, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_104 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f5;
		if ((!(((uint32_t)L_103) == ((uint32_t)L_104))))
		{
			goto IL_01ea;
		}
	}
	{
		t2* L_105 = V_6;
		int32_t L_106 = m2763(L_105, &m2763_MI);
		if (!L_106)
		{
			goto IL_01c9;
		}
	}
	{
		t2* L_107 = V_6;
		uint16_t L_108 = m2778(L_107, 0, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_109 = m8998(NULL, L_108, &m8998_MI);
		if (!L_109)
		{
			goto IL_01d9;
		}
	}

IL_01c9:
	{
		t2* L_110 = V_6;
		uint16_t L_111 = ((int32_t)92);
		t9 * L_112 = Box(InitializedTypeInfo(&t309_TI), &L_111);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_113 = m511(NULL, L_110, L_112, &m511_MI);
		V_6 = L_113;
	}

IL_01d9:
	{
		t2* L_114 = V_7;
		t2* L_115 = m2779(L_114, 0, 2, &m2779_MI);
		t2* L_116 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_117 = m610(NULL, L_115, L_116, &m610_MI);
		return L_117;
	}

IL_01ea:
	{
		t2* L_118 = V_7;
		t2* L_119 = V_7;
		int32_t L_120 = m2763(L_119, &m2763_MI);
		uint16_t L_121 = m2778(L_118, ((int32_t)((int32_t)L_120-(int32_t)1)), &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_122 = m8998(NULL, L_121, &m8998_MI);
		if (!L_122)
		{
			goto IL_0220;
		}
	}
	{
		t2* L_123 = V_6;
		uint16_t L_124 = m2778(L_123, 0, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_125 = m8998(NULL, L_124, &m8998_MI);
		if (!L_125)
		{
			goto IL_0220;
		}
	}
	{
		t2* L_126 = V_7;
		t2* L_127 = V_6;
		t2* L_128 = m2805(L_127, 1, &m2805_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_129 = m610(NULL, L_126, L_128, &m610_MI);
		return L_129;
	}

IL_0220:
	{
		t2* L_130 = V_7;
		t2* L_131 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_132 = m610(NULL, L_130, L_131, &m610_MI);
		return L_132;
	}

IL_022a:
	{
		t2* L_133 = V_6;
		return L_133;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m9006_MI;
extern "C" void m9006 (t1736 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral1696, &m7888_MI);
		m8952(__this, L_0, &m8952_MI);
		return;
	}
}
extern "C" void m9007 (t1736 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m8952(__this, L_0, &m8952_MI);
		return;
	}
}
extern MethodInfo m9008_MI;
extern "C" void m9008 (t1736 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m8953(__this, L_0, L_1, &m8953_MI);
		return;
	}
}
#include "t1737.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1737_TI;
#include "t1737MD.h"



extern MethodInfo m9009_MI;
extern TypeInfo* t318_TI_var;
extern "C" void m9009 (t9 * __this , MethodInfo* method)
{
	static bool m9009_init;
	if (!m9009_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m9009_init = true;
	}
	{
		t318* L_0 = ((t318*)SZArrayNew(t318_TI_var, 2));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)42);
		t318* L_1 = L_0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 1)) = (uint16_t)((int32_t)63);
		((t1737_SFs*)InitializedTypeInfo(&t1737_TI)->static_fields)->f0 = L_1;
		t318* L_2 = ((t318*)SZArrayNew(t318_TI_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_3 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 0)) = (uint16_t)L_3;
		t318* L_4 = L_2;
		uint16_t L_5 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, 1)) = (uint16_t)L_5;
		((t1737_SFs*)InitializedTypeInfo(&t1737_TI)->static_fields)->f1 = L_4;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1505_TI;
#include "t1505MD.h"



#include "t302.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t302_TI;

#include "t1738.h"
#include "t1739.h"
#include "t1347.h"
extern TypeInfo t1738_TI;
extern TypeInfo t1739_TI;
extern TypeInfo t138_TI;
extern TypeInfo t1347_TI;
#include "t1738MD.h"
#include "t1739MD.h"
#include "t1347MD.h"
extern MethodInfo m9011_MI;
extern MethodInfo m1129_MI;
extern MethodInfo m7069_MI;
extern MethodInfo m7039_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m7049_MI;
extern MethodInfo m9025_MI;
extern MethodInfo m9027_MI;
extern MethodInfo m7878_MI;
extern MethodInfo m7050_MI;
extern MethodInfo m9026_MI;
extern MethodInfo m9032_MI;
extern MethodInfo m9033_MI;
extern MethodInfo m5755_MI;
extern MethodInfo m9034_MI;
extern MethodInfo m9031_MI;


extern "C" void m7052 (t302 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9010_MI;
extern "C" void m9010 (t9 * __this , MethodInfo* method)
{
	{
		t1738 * L_0 = (t1738 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1738_TI));
		m9011(L_0, &m9011_MI);
		((t302_SFs*)InitializedTypeInfo(&t302_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m7098_MI;
extern "C" void m7098 (t302 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&m1129_MI, __this);
		return;
	}
}
extern "C" void m7069 (t302 * __this, bool p0, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m1129 (t302 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m7069_MI, __this, 1);
		return;
	}
}
extern MethodInfo m7037_MI;
extern TypeInfo* t737_TI_var;
extern "C" int32_t m7037 (t302 * __this, MethodInfo* method)
{
	static bool m7037_init;
	if (!m7037_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m7037_init = true;
	}
	t737* V_0 = {0};
	{
		V_0 = ((t737*)SZArrayNew(t737_TI_var, 1));
		t737* L_0 = V_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker3< int32_t, t737*, int32_t, int32_t >::Invoke(&m7039_MI, __this, L_0, 0, 1);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		t737* L_2 = V_0;
		int32_t L_3 = 0;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3));
	}

IL_0017:
	{
		return (-1);
	}
}
extern MethodInfo m7014_MI;
extern TypeInfo* t737_TI_var;
extern "C" void m7014 (t302 * __this, uint8_t p0, MethodInfo* method)
{
	static bool m7014_init;
	if (!m7014_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m7014_init = true;
	}
	t737* V_0 = {0};
	{
		V_0 = ((t737*)SZArrayNew(t737_TI_var, 1));
		t737* L_0 = V_0;
		uint8_t L_1 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)L_1;
		t737* L_2 = V_0;
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, __this, L_2, 0, 1);
		return;
	}
}
extern MethodInfo m7029_MI;
extern "C" t9 * m7029 (t302 * __this, t737* p0, int32_t p1, int32_t p2, t477 * p3, t9 * p4, MethodInfo* method)
{
	t1739 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7049_MI, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_1, (t2*) &_stringLiteral1633, &m5776_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t9 * L_2 = p4;
		t1739 * L_3 = (t1739 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1739_TI));
		m9025(L_3, L_2, &m9025_MI);
		V_0 = L_3;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		t737* L_4 = p0;
		int32_t L_5 = p1;
		int32_t L_6 = p2;
		int32_t L_7 = (int32_t)VirtFuncInvoker3< int32_t, t737*, int32_t, int32_t >::Invoke(&m7039_MI, __this, L_4, L_5, L_6);
		V_1 = L_7;
		t1739 * L_8 = V_0;
		int32_t L_9 = V_1;
		m9027(L_8, (t138 *)NULL, L_9, &m9027_MI);
		goto IL_003a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_002f;
		throw e;
	}

CATCH_002f:
	{ // begin catch(System.Exception)
		V_2 = ((t138 *)__exception_local);
		t1739 * L_10 = V_0;
		t138 * L_11 = V_2;
		m9027(L_10, L_11, 0, &m9027_MI);
		goto IL_003a;
	} // end catch (depth: 1)

IL_003a:
	{
		t477 * L_12 = p3;
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		t477 * L_13 = p3;
		t1739 * L_14 = V_0;
		VirtActionInvoker1< t9 * >::Invoke(&m7878_MI, L_13, L_14);
	}

IL_0046:
	{
		t1739 * L_15 = V_0;
		return L_15;
	}
}
extern MethodInfo m7040_MI;
extern "C" t9 * m7040 (t302 * __this, t737* p0, int32_t p1, int32_t p2, t477 * p3, t9 * p4, MethodInfo* method)
{
	t1739 * V_0 = {0};
	t138 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7050_MI, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_1, (t2*) &_stringLiteral1639, &m5776_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t9 * L_2 = p4;
		t1739 * L_3 = (t1739 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1739_TI));
		m9025(L_3, L_2, &m9025_MI);
		V_0 = L_3;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		t737* L_4 = p0;
		int32_t L_5 = p1;
		int32_t L_6 = p2;
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, __this, L_4, L_5, L_6);
		t1739 * L_7 = V_0;
		m9026(L_7, (t138 *)NULL, &m9026_MI);
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_002d;
		throw e;
	}

CATCH_002d:
	{ // begin catch(System.Exception)
		V_1 = ((t138 *)__exception_local);
		t1739 * L_8 = V_0;
		t138 * L_9 = V_1;
		m9026(L_8, L_9, &m9026_MI);
		goto IL_0037;
	} // end catch (depth: 1)

IL_0037:
	{
		t477 * L_10 = p3;
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		t477 * L_11 = p3;
		t1739 * L_12 = V_0;
		VirtFuncInvoker3< t9 *, t9 *, t477 *, t9 * >::Invoke(&m7026_MI, L_11, L_12, (t477 *)NULL, NULL);
	}

IL_0046:
	{
		t1739 * L_13 = V_0;
		return L_13;
	}
}
extern MethodInfo m7031_MI;
extern "C" int32_t m7031 (t302 * __this, t9 * p0, MethodInfo* method)
{
	t1739 * V_0 = {0};
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1637, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		V_0 = ((t1739 *)IsInst(L_2, InitializedTypeInfo(&t1739_TI)));
		t1739 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		t1739 * L_4 = V_0;
		int32_t L_5 = m9032(L_4, &m9032_MI);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}

IL_0021:
	{
		t570 * L_6 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_6, (t2*) &_stringLiteral1638, (t2*) &_stringLiteral1637, &m5761_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		t1739 * L_7 = V_0;
		bool L_8 = m9033(L_7, &m9033_MI);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		t1347 * L_9 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_9, (t2*) &_stringLiteral1697, &m5755_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0044:
	{
		t1739 * L_10 = V_0;
		m9034(L_10, 1, &m9034_MI);
		t1739 * L_11 = V_0;
		t138 * L_12 = m9031(L_11, &m9031_MI);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		t1739 * L_13 = V_0;
		t138 * L_14 = m9031(L_13, &m9031_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		t1739 * L_15 = V_0;
		int32_t L_16 = m9032(L_15, &m9032_MI);
		return L_16;
	}
}
extern MethodInfo m7041_MI;
extern "C" void m7041 (t302 * __this, t9 * p0, MethodInfo* method)
{
	t1739 * V_0 = {0};
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1637, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		V_0 = ((t1739 *)IsInst(L_2, InitializedTypeInfo(&t1739_TI)));
		t1739 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		t1739 * L_4 = V_0;
		int32_t L_5 = m9032(L_4, &m9032_MI);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0031;
		}
	}

IL_0021:
	{
		t570 * L_6 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_6, (t2*) &_stringLiteral1638, (t2*) &_stringLiteral1637, &m5761_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		t1739 * L_7 = V_0;
		bool L_8 = m9033(L_7, &m9033_MI);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		t1347 * L_9 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_9, (t2*) &_stringLiteral1698, &m5755_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0044:
	{
		t1739 * L_10 = V_0;
		m9034(L_10, 1, &m9034_MI);
		t1739 * L_11 = V_0;
		t138 * L_12 = m9031(L_11, &m9031_MI);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		t1739 * L_13 = V_0;
		t138 * L_14 = m9031(L_13, &m9031_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9011 (t1738 * __this, MethodInfo* method)
{
	{
		m7052(__this, &m7052_MI);
		return;
	}
}
extern MethodInfo m9012_MI;
extern "C" bool m9012 (t1738 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m9013_MI;
extern "C" bool m9013 (t1738 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m9014_MI;
extern "C" bool m9014 (t1738 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m9015_MI;
extern "C" int64_t m9015 (t1738 * __this, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
extern MethodInfo m9016_MI;
extern "C" int64_t m9016 (t1738 * __this, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
extern MethodInfo m9017_MI;
extern "C" void m9017 (t1738 * __this, int64_t p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9018_MI;
extern "C" void m9018 (t1738 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9019_MI;
extern "C" int32_t m9019 (t1738 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9020_MI;
extern "C" int32_t m9020 (t1738 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
extern MethodInfo m9021_MI;
extern "C" int64_t m9021 (t1738 * __this, int64_t p0, int32_t p1, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
extern MethodInfo m9022_MI;
extern "C" void m9022 (t1738 * __this, int64_t p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9023_MI;
extern "C" void m9023 (t1738 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9024_MI;
extern "C" void m9024 (t1738 * __this, uint8_t p0, MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t306MD.h"
#include "t1554MD.h"
extern MethodInfo m1115_MI;
extern MethodInfo m1117_MI;
extern MethodInfo m7025_MI;


extern "C" void m9025 (t1739 * __this, t9 * p0, MethodInfo* method)
{
	{
		__this->f4 = (-1);
		m336(__this, &m336_MI);
		t9 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" void m9026 (t1739 * __this, t138 * p0, MethodInfo* method)
{
	t1739 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t138 * L_0 = p0;
		__this->f3 = L_0;
		__this->f1 = 1;
		V_0 = __this;
		t1739 * L_1 = V_0;
		m1115(NULL, L_1, &m1115_MI);
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			t1491 * L_2 = (__this->f5);
			if (!L_2)
			{
				goto IL_002a;
			}
		}

IL_001e:
		{
			t1491 * L_3 = (__this->f5);
			m7025(L_3, &m7025_MI);
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		t1739 * L_4 = V_0;
		m1117(NULL, L_4, &m1117_MI);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0033:
	{
		return;
	}
}
extern "C" void m9027 (t1739 * __this, t138 * p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p1;
		__this->f4 = L_0;
		t138 * L_1 = p0;
		m9026(__this, L_1, &m9026_MI);
		return;
	}
}
extern MethodInfo m9028_MI;
extern "C" t9 * m9028 (t1739 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9029_MI;
extern "C" t1492 * m9029 (t1739 * __this, MethodInfo* method)
{
	t1739 * V_0 = {0};
	t1492 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1739 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1491 * L_1 = (__this->f5);
			if (L_1)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_2 = (__this->f1);
			t1491 * L_3 = (t1491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1491_TI));
			m7024(L_3, L_2, &m7024_MI);
			__this->f5 = L_3;
		}

IL_0021:
		{
			t1491 * L_4 = (__this->f5);
			V_1 = L_4;
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		t1739 * L_5 = V_0;
		m1117(NULL, L_5, &m1117_MI);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0033:
	{
		t1492 * L_6 = V_1;
		return L_6;
	}
}
extern MethodInfo m9030_MI;
extern "C" bool m9030 (t1739 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" t138 * m9031 (t1739 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" int32_t m9032 (t1739 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" bool m9033 (t1739 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m9034 (t1739 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
#include "t1740.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1740_TI;
#include "t1740MD.h"

#include "t1725MD.h"
extern MethodInfo m9041_MI;


extern MethodInfo m9035_MI;
extern "C" void m9035 (t1740 * __this, MethodInfo* method)
{
	{
		m9041(__this, &m9041_MI);
		return;
	}
}
extern MethodInfo m9036_MI;
extern "C" int32_t m9036 (t1740 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
extern MethodInfo m9037_MI;
extern "C" int32_t m9037 (t1740 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
extern MethodInfo m9038_MI;
extern "C" int32_t m9038 (t1740 * __this, t318* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9039_MI;
extern "C" t2* m9039 (t1740 * __this, MethodInfo* method)
{
	{
		return (t2*)NULL;
	}
}
extern MethodInfo m9040_MI;
extern "C" t2* m9040 (t1740 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
#include "t1725.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1725_TI;

#include "t736.h"
#include "t300.h"
#include "t1719.h"
#include "t1671.h"
#include "t328.h"
extern TypeInfo t736_TI;
extern TypeInfo t1719_TI;
extern TypeInfo t1671_TI;
extern TypeInfo t328_TI;
#include "t1671MD.h"
#include "t736MD.h"
#include "t307MD.h"
#include "t1719MD.h"
#include "t160MD.h"
#include "t328MD.h"
extern MethodInfo m9082_MI;
extern MethodInfo m9043_MI;
extern MethodInfo m9047_MI;
extern MethodInfo m10904_MI;
extern MethodInfo m9045_MI;
extern MethodInfo m6987_MI;
extern MethodInfo m10896_MI;
extern MethodInfo m10900_MI;
extern MethodInfo m12048_MI;
extern MethodInfo m9085_MI;
extern MethodInfo m6960_MI;
extern MethodInfo m10906_MI;
extern MethodInfo m10908_MI;
extern MethodInfo m10907_MI;
extern MethodInfo m9049_MI;
extern MethodInfo m12046_MI;
extern MethodInfo m11811_MI;
extern MethodInfo m9050_MI;
extern MethodInfo m11611_MI;
extern MethodInfo m7752_MI;
extern MethodInfo m9054_MI;
extern MethodInfo m4399_MI;
extern MethodInfo m5926_MI;
extern MethodInfo m10934_MI;
extern MethodInfo m1203_MI;
extern MethodInfo m6031_MI;
extern MethodInfo m10939_MI;
extern MethodInfo m10930_MI;
extern MethodInfo m9053_MI;
extern MethodInfo m1209_MI;


extern "C" void m9041 (t1725 * __this, MethodInfo* method)
{
	{
		m9082(__this, &m9082_MI);
		return;
	}
}
extern MethodInfo m9042_MI;
extern "C" void m9042 (t1725 * __this, t302 * p0, t736 * p1, MethodInfo* method)
{
	{
		t302 * L_0 = p0;
		t736 * L_1 = p1;
		m9043(__this, L_0, L_1, 1, ((int32_t)1024), &m9043_MI);
		return;
	}
}
extern "C" void m9043 (t1725 * __this, t302 * p0, t736 * p1, bool p2, int32_t p3, MethodInfo* method)
{
	{
		m9082(__this, &m9082_MI);
		t302 * L_0 = p0;
		t736 * L_1 = p1;
		bool L_2 = p2;
		int32_t L_3 = p3;
		m9047(__this, L_0, L_1, L_2, L_3, &m9047_MI);
		return;
	}
}
extern MethodInfo m9044_MI;
extern "C" void m9044 (t1725 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_1 = m10904(NULL, &m10904_MI);
		m9045(__this, L_0, L_1, 1, ((int32_t)4096), &m9045_MI);
		return;
	}
}
extern "C" void m9045 (t1725 * __this, t2* p0, t736 * p1, bool p2, int32_t p3, MethodInfo* method)
{
	t302 * V_0 = {0};
	{
		m9082(__this, &m9082_MI);
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1584, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		t2* L_3 = p0;
		bool L_4 = m331(NULL, L_2, L_3, &m331_MI);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		t570 * L_5 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_5, (t2*) &_stringLiteral1699, &m2949_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002c:
	{
		t2* L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t318* L_7 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f0;
		int32_t L_8 = m6022(L_6, L_7, &m6022_MI);
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_0045;
		}
	}
	{
		t570 * L_9 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_9, (t2*) &_stringLiteral1700, &m2949_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0045:
	{
		t736 * L_10 = p1;
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		t132 * L_11 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_11, (t2*) &_stringLiteral1579, &m339_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0053:
	{
		int32_t L_12 = p3;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		t909 * L_13 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_13, (t2*) &_stringLiteral1618, (t2*) &_stringLiteral1701, &m4402_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0068:
	{
		t2* L_14 = p0;
		t300 * L_15 = m6987(NULL, L_14, &m6987_MI);
		V_0 = L_15;
		t302 * L_16 = V_0;
		t736 * L_17 = p1;
		bool L_18 = p2;
		int32_t L_19 = p3;
		m9047(__this, L_16, L_17, L_18, L_19, &m9047_MI);
		return;
	}
}
extern MethodInfo m9046_MI;
extern "C" void m9046 (t9 * __this , MethodInfo* method)
{
	{
		t1740 * L_0 = (t1740 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1740_TI));
		m9035(L_0, &m9035_MI);
		((t1725_SFs*)InitializedTypeInfo(&t1725_TI)->static_fields)->f12 = L_0;
		return;
	}
}
extern TypeInfo* t737_TI_var;
extern TypeInfo* t318_TI_var;
extern "C" void m9047 (t1725 * __this, t302 * p0, t736 * p1, bool p2, int32_t p3, MethodInfo* method)
{
	static bool m9047_init;
	if (!m9047_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m9047_init = true;
	}
	t737* V_0 = {0};
	t1725 * G_B12_0 = {0};
	t1725 * G_B11_0 = {0};
	int32_t G_B13_0 = 0;
	t1725 * G_B13_1 = {0};
	int32_t G_B15_0 = 0;
	t1725 * G_B15_1 = {0};
	int32_t G_B14_0 = 0;
	t1725 * G_B14_1 = {0};
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	t1725 * G_B16_2 = {0};
	{
		t302 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1702, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t736 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1579, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t302 * L_4 = p0;
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7049_MI, L_4);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		t570 * L_6 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_6, (t2*) &_stringLiteral1703, &m2949_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002f:
	{
		int32_t L_7 = p3;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		t909 * L_8 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_8, (t2*) &_stringLiteral1618, (t2*) &_stringLiteral1701, &m4402_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0044:
	{
		int32_t L_9 = p3;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0056;
		}
	}
	{
		p3 = ((int32_t)128);
	}

IL_0056:
	{
		t302 * L_10 = p0;
		__this->f9 = L_10;
		int32_t L_11 = p3;
		__this->f1 = ((t737*)SZArrayNew(t737_TI_var, L_11));
		int32_t L_12 = p3;
		__this->f5 = L_12;
		t736 * L_13 = p1;
		__this->f7 = L_13;
		t736 * L_14 = p1;
		t1719 * L_15 = (t1719 *)VirtFuncInvoker0< t1719 * >::Invoke(&m10896_MI, L_14);
		__this->f8 = L_15;
		t736 * L_16 = p1;
		t737* L_17 = (t737*)VirtFuncInvoker0< t737* >::Invoke(&m10900_MI, L_16);
		V_0 = L_17;
		bool L_18 = p2;
		G_B11_0 = __this;
		if (!L_18)
		{
			G_B12_0 = __this;
			goto IL_0093;
		}
	}
	{
		G_B13_0 = 1;
		G_B13_1 = G_B11_0;
		goto IL_0094;
	}

IL_0093:
	{
		G_B13_0 = 0;
		G_B13_1 = G_B12_0;
	}

IL_0094:
	{
		G_B13_1->f6 = G_B13_0;
		int32_t L_19 = (__this->f6);
		t737* L_20 = V_0;
		G_B14_0 = L_19;
		G_B14_1 = __this;
		if ((((int32_t)(((t121 *)L_20)->max_length))))
		{
			G_B15_0 = L_19;
			G_B15_1 = __this;
			goto IL_00a8;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B16_0 = 2;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_00a9:
	{
		G_B16_2->f6 = ((int32_t)((int32_t)G_B16_1+(int32_t)G_B16_0));
		t736 * L_21 = p1;
		int32_t L_22 = p3;
		int32_t L_23 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m12048_MI, L_21, L_22);
		__this->f2 = ((t318*)SZArrayNew(t318_TI_var, ((int32_t)((int32_t)L_23+(int32_t)1))));
		__this->f3 = 0;
		__this->f4 = 0;
		return;
	}
}
extern MethodInfo m9048_MI;
extern "C" void m9048 (t1725 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t302 * L_1 = (__this->f9);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t302 * L_2 = (__this->f9);
		VirtActionInvoker0::Invoke(&m1129_MI, L_2);
	}

IL_0016:
	{
		__this->f1 = (t737*)NULL;
		__this->f2 = (t318*)NULL;
		__this->f7 = (t736 *)NULL;
		__this->f8 = (t1719 *)NULL;
		__this->f9 = (t302 *)NULL;
		bool L_3 = p0;
		m9085(__this, L_3, &m9085_MI);
		return;
	}
}
extern "C" int32_t m9049 (t1725 * __this, int32_t p0, MethodInfo* method)
{
	t737* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->f6);
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((uint32_t)2))))
		{
			goto IL_0040;
		}
	}
	{
		t736 * L_1 = (__this->f7);
		t737* L_2 = (t737*)VirtFuncInvoker0< t737* >::Invoke(&m10900_MI, L_1);
		V_0 = L_2;
		t737* L_3 = V_0;
		V_1 = (((int32_t)(((t121 *)L_3)->max_length)));
		int32_t L_4 = p0;
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0040;
		}
	}
	{
		V_2 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		t737* L_6 = (__this->f1);
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		t737* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8))) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_11)))))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_003a;
	}

IL_0032:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0036:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0023;
		}
	}

IL_003a:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_17 = V_2;
		return L_17;
	}

IL_0040:
	{
		int32_t L_18 = (__this->f6);
		if ((!(((uint32_t)((int32_t)((int32_t)L_18&(int32_t)1))) == ((uint32_t)1))))
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_19 = p0;
		if ((((int32_t)L_19) >= ((int32_t)2)))
		{
			goto IL_0054;
		}
	}
	{
		return 0;
	}

IL_0054:
	{
		t737* L_20 = (__this->f1);
		int32_t L_21 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_21))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_007f;
		}
	}
	{
		t737* L_22 = (__this->f1);
		int32_t L_23 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_22, L_23))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_24 = m6960(NULL, &m6960_MI);
		__this->f7 = L_24;
		return 2;
	}

IL_007f:
	{
		int32_t L_25 = p0;
		if ((((int32_t)L_25) >= ((int32_t)3)))
		{
			goto IL_0085;
		}
	}
	{
		return 0;
	}

IL_0085:
	{
		t737* L_26 = (__this->f1);
		int32_t L_27 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_27))) == ((uint32_t)((int32_t)239)))))
		{
			goto IL_00bf;
		}
	}
	{
		t737* L_28 = (__this->f1);
		int32_t L_29 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_28, L_29))) == ((uint32_t)((int32_t)187)))))
		{
			goto IL_00bf;
		}
	}
	{
		t737* L_30 = (__this->f1);
		int32_t L_31 = 2;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_31))) == ((uint32_t)((int32_t)191)))))
		{
			goto IL_00bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_32 = m10904(NULL, &m10904_MI);
		__this->f7 = L_32;
		return 3;
	}

IL_00bf:
	{
		int32_t L_33 = p0;
		if ((((int32_t)L_33) >= ((int32_t)4)))
		{
			goto IL_00fa;
		}
	}
	{
		t737* L_34 = (__this->f1);
		int32_t L_35 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_34, L_35))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00f8;
		}
	}
	{
		t737* L_36 = (__this->f1);
		int32_t L_37 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_36, L_37))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_00f8;
		}
	}
	{
		t737* L_38 = (__this->f1);
		int32_t L_39 = 2;
		if (!(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_38, L_39)))
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_40 = m10906(NULL, &m10906_MI);
		__this->f7 = L_40;
		return 2;
	}

IL_00f8:
	{
		return 0;
	}

IL_00fa:
	{
		t737* L_41 = (__this->f1);
		int32_t L_42 = 0;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_41, L_42)))
		{
			goto IL_0139;
		}
	}
	{
		t737* L_43 = (__this->f1);
		int32_t L_44 = 1;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_43, L_44)))
		{
			goto IL_0139;
		}
	}
	{
		t737* L_45 = (__this->f1);
		int32_t L_46 = 2;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_45, L_46))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_0139;
		}
	}
	{
		t737* L_47 = (__this->f1);
		int32_t L_48 = 3;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_47, L_48))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0139;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_49 = m10908(NULL, &m10908_MI);
		__this->f7 = L_49;
		return 4;
	}

IL_0139:
	{
		t737* L_50 = (__this->f1);
		int32_t L_51 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_50, L_51))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0185;
		}
	}
	{
		t737* L_52 = (__this->f1);
		int32_t L_53 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_52, L_53))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_0185;
		}
	}
	{
		t737* L_54 = (__this->f1);
		int32_t L_55 = 2;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_54, L_55)))
		{
			goto IL_0178;
		}
	}
	{
		t737* L_56 = (__this->f1);
		int32_t L_57 = 3;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_56, L_57)))
		{
			goto IL_0178;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_58 = m10907(NULL, &m10907_MI);
		__this->f7 = L_58;
		return 4;
	}

IL_0178:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_59 = m10906(NULL, &m10906_MI);
		__this->f7 = L_59;
		return 2;
	}

IL_0185:
	{
		return 0;
	}
}
extern TypeInfo* t318_TI_var;
extern "C" int32_t m9050 (t1725 * __this, MethodInfo* method)
{
	static bool m9050_init;
	if (!m9050_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m9050_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t736 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		__this->f4 = 0;
		V_0 = 0;
		__this->f3 = 0;
		V_1 = 0;
	}

IL_0012:
	{
		t302 * L_0 = (__this->f9);
		t737* L_1 = (__this->f1);
		int32_t L_2 = (__this->f5);
		int32_t L_3 = (int32_t)VirtFuncInvoker3< int32_t, t737*, int32_t, int32_t >::Invoke(&m7039_MI, L_0, L_1, 0, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		return 0;
	}

IL_0031:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = (__this->f5);
		__this->f10 = ((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
		int32_t L_7 = (__this->f6);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		t736 * L_8 = (__this->f7);
		V_2 = L_8;
		int32_t L_9 = V_0;
		int32_t L_10 = m9049(__this, L_9, &m9049_MI);
		V_1 = L_10;
		t736 * L_11 = V_2;
		t736 * L_12 = (__this->f7);
		if ((((t9*)(t736 *)L_11) == ((t9*)(t736 *)L_12)))
		{
			goto IL_00a8;
		}
	}
	{
		t736 * L_13 = V_2;
		int32_t L_14 = (__this->f5);
		int32_t L_15 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m12048_MI, L_13, L_14);
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
		t736 * L_16 = (__this->f7);
		int32_t L_17 = (__this->f5);
		int32_t L_18 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m12048_MI, L_16, L_17);
		V_4 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_3;
		int32_t L_20 = V_4;
		if ((((int32_t)L_19) == ((int32_t)L_20)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_21 = V_4;
		__this->f2 = ((t318*)SZArrayNew(t318_TI_var, L_21));
	}

IL_0097:
	{
		t736 * L_22 = (__this->f7);
		t1719 * L_23 = (t1719 *)VirtFuncInvoker0< t1719 * >::Invoke(&m10896_MI, L_22);
		__this->f8 = L_23;
	}

IL_00a8:
	{
		__this->f6 = 0;
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)((int32_t)L_24-(int32_t)L_25));
	}

IL_00b3:
	{
		int32_t L_26 = (__this->f3);
		t1719 * L_27 = (__this->f8);
		t737* L_28 = (__this->f1);
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		t318* L_31 = (__this->f2);
		int32_t L_32 = (int32_t)VirtFuncInvoker5< int32_t, t737*, int32_t, int32_t, t318*, int32_t >::Invoke(&m12046_MI, L_27, L_28, L_29, L_30, L_31, 0);
		__this->f3 = ((int32_t)((int32_t)L_26+(int32_t)L_32));
		V_1 = 0;
		int32_t L_33 = (__this->f3);
		if (!L_33)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_34 = (__this->f3);
		return L_34;
	}
}
extern MethodInfo m9051_MI;
extern "C" int32_t m9051 (t1725 * __this, MethodInfo* method)
{
	{
		t302 * L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1704, (t2*) &_stringLiteral1705, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->f4);
		int32_t L_3 = (__this->f3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = m9050(__this, &m9050_MI);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (-1);
	}

IL_0030:
	{
		t318* L_5 = (__this->f2);
		int32_t L_6 = (__this->f4);
		int32_t L_7 = L_6;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_7));
	}
}
extern MethodInfo m9052_MI;
extern "C" int32_t m9052 (t1725 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t302 * L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1704, (t2*) &_stringLiteral1705, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->f4);
		int32_t L_3 = (__this->f3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = m9050(__this, &m9050_MI);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (-1);
	}

IL_0030:
	{
		t318* L_5 = (__this->f2);
		int32_t L_6 = (__this->f4);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f4 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_9));
	}
}
extern "C" int32_t m9053 (t1725 * __this, t318* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B16_0 = 0;
	{
		t302 * L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1704, (t2*) &_stringLiteral1705, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t318* L_2 = p0;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1050, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0026:
	{
		int32_t L_4 = p1;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		t909 * L_5 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_5, (t2*) &_stringLiteral397, (t2*) &_stringLiteral808, &m4402_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003a:
	{
		int32_t L_6 = p2;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		t909 * L_7 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_7, (t2*) &_stringLiteral489, (t2*) &_stringLiteral808, &m4402_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004e:
	{
		int32_t L_8 = p1;
		t318* L_9 = p0;
		int32_t L_10 = p2;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_0061;
		}
	}
	{
		t570 * L_11 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_11, (t2*) &_stringLiteral1706, &m2949_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0061:
	{
		V_0 = 0;
		goto IL_00d9;
	}

IL_0068:
	{
		int32_t L_12 = (__this->f4);
		int32_t L_13 = (__this->f3);
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_14 = m9050(__this, &m9050_MI);
		if (L_14)
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_16 = V_0;
		G_B16_0 = L_16;
		goto IL_0086;
	}

IL_0085:
	{
		G_B16_0 = 0;
	}

IL_0086:
	{
		return G_B16_0;
	}

IL_0087:
	{
		int32_t L_17 = (__this->f3);
		int32_t L_18 = (__this->f4);
		int32_t L_19 = p2;
		int32_t L_20 = m11611(NULL, ((int32_t)((int32_t)L_17-(int32_t)L_18)), L_19, &m11611_MI);
		V_1 = L_20;
		t318* L_21 = (__this->f2);
		int32_t L_22 = (__this->f4);
		t318* L_23 = p0;
		int32_t L_24 = p1;
		int32_t L_25 = V_1;
		m7752(NULL, (t121 *)(t121 *)L_21, L_22, (t121 *)(t121 *)L_23, L_24, L_25, &m7752_MI);
		int32_t L_26 = (__this->f4);
		int32_t L_27 = V_1;
		__this->f4 = ((int32_t)((int32_t)L_26+(int32_t)L_27));
		int32_t L_28 = p1;
		int32_t L_29 = V_1;
		p1 = ((int32_t)((int32_t)L_28+(int32_t)L_29));
		int32_t L_30 = p2;
		int32_t L_31 = V_1;
		p2 = ((int32_t)((int32_t)L_30-(int32_t)L_31));
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		V_0 = ((int32_t)((int32_t)L_32+(int32_t)L_33));
		bool L_34 = (__this->f10);
		if (!L_34)
		{
			goto IL_00d9;
		}
	}
	{
		goto IL_00dd;
	}

IL_00d9:
	{
		int32_t L_35 = p2;
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_0068;
		}
	}

IL_00dd:
	{
		int32_t L_36 = V_0;
		return L_36;
	}
}
extern "C" int32_t m9054 (t1725 * __this, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = 0;
		goto IL_008e;
	}

IL_0007:
	{
		t318* L_0 = (__this->f2);
		int32_t L_1 = (__this->f4);
		int32_t L_2 = L_1;
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2));
		uint16_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = (__this->f4);
		__this->f4 = ((int32_t)((int32_t)L_4+(int32_t)1));
		bool L_5 = (__this->f13);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_6 = (__this->f4);
		G_B5_0 = ((int32_t)((int32_t)L_6-(int32_t)2));
		goto IL_0042;
	}

IL_003a:
	{
		int32_t L_7 = (__this->f4);
		G_B5_0 = ((int32_t)((int32_t)L_7-(int32_t)1));
	}

IL_0042:
	{
		V_1 = G_B5_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
	}

IL_0049:
	{
		__this->f13 = 0;
		int32_t L_9 = V_1;
		return L_9;
	}

IL_0052:
	{
		bool L_10 = (__this->f13);
		if (!L_10)
		{
			goto IL_0075;
		}
	}
	{
		__this->f13 = 0;
		int32_t L_11 = (__this->f4);
		if (L_11)
		{
			goto IL_006c;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_006c:
	{
		int32_t L_12 = (__this->f4);
		return ((int32_t)((int32_t)L_12-(int32_t)1));
	}

IL_0075:
	{
		uint16_t L_13 = V_0;
		__this->f13 = ((((int32_t)L_13) == ((int32_t)((int32_t)13)))? 1 : 0);
		int32_t L_14 = (__this->f4);
		__this->f4 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_008e:
	{
		int32_t L_15 = (__this->f4);
		int32_t L_16 = (__this->f3);
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}
}
extern MethodInfo m9055_MI;
extern "C" t2* m9055 (t1725 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t328 * V_2 = {0};
	t328 * V_3 = {0};
	{
		t302 * L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1704, (t2*) &_stringLiteral1705, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->f4);
		int32_t L_3 = (__this->f3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = m9050(__this, &m9050_MI);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (t2*)NULL;
	}

IL_0030:
	{
		int32_t L_5 = (__this->f4);
		V_0 = L_5;
		int32_t L_6 = m9054(__this, &m9054_MI);
		V_1 = L_6;
		int32_t L_7 = V_1;
		int32_t L_8 = (__this->f3);
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		t318* L_11 = (__this->f2);
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_15 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_15 = m4419(L_15, L_11, L_12, ((int32_t)((int32_t)L_13-(int32_t)L_14)), &m4399_MI);
		return L_15;
	}

IL_005b:
	{
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0078;
		}
	}
	{
		t328 * L_17 = (__this->f11);
		t328 * L_18 = (__this->f11);
		int32_t L_19 = m5926(L_18, &m5926_MI);
		t2* L_20 = m10934(L_17, 0, L_19, &m10934_MI);
		return L_20;
	}

IL_0078:
	{
		t328 * L_21 = (__this->f11);
		if (L_21)
		{
			goto IL_008d;
		}
	}
	{
		t328 * L_22 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m1203(L_22, &m1203_MI);
		__this->f11 = L_22;
		goto IL_0099;
	}

IL_008d:
	{
		t328 * L_23 = (__this->f11);
		m6031(L_23, 0, &m6031_MI);
	}

IL_0099:
	{
		bool L_24 = (__this->f13);
		if (!L_24)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_25 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_25-(int32_t)1));
	}

IL_00af:
	{
		t328 * L_26 = (__this->f11);
		t318* L_27 = (__this->f2);
		int32_t L_28 = V_0;
		int32_t L_29 = (__this->f3);
		int32_t L_30 = V_0;
		m10939(L_26, L_27, L_28, ((int32_t)((int32_t)L_29-(int32_t)L_30)), &m10939_MI);
		int32_t L_31 = m9050(__this, &m9050_MI);
		if (L_31)
		{
			goto IL_0118;
		}
	}
	{
		t328 * L_32 = (__this->f11);
		int32_t L_33 = m10930(L_32, &m10930_MI);
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0100;
		}
	}
	{
		t328 * L_34 = (__this->f11);
		V_2 = L_34;
		__this->f11 = (t328 *)NULL;
		t328 * L_35 = V_2;
		t328 * L_36 = V_2;
		int32_t L_37 = m5926(L_36, &m5926_MI);
		t2* L_38 = m10934(L_35, 0, L_37, &m10934_MI);
		return L_38;
	}

IL_0100:
	{
		t328 * L_39 = (__this->f11);
		t328 * L_40 = (__this->f11);
		int32_t L_41 = m5926(L_40, &m5926_MI);
		t2* L_42 = m10934(L_39, 0, L_41, &m10934_MI);
		return L_42;
	}

IL_0118:
	{
		int32_t L_43 = (__this->f4);
		V_0 = L_43;
		int32_t L_44 = m9054(__this, &m9054_MI);
		V_1 = L_44;
		int32_t L_45 = V_1;
		int32_t L_46 = (__this->f3);
		if ((((int32_t)L_45) >= ((int32_t)L_46)))
		{
			goto IL_018f;
		}
	}
	{
		int32_t L_47 = V_1;
		int32_t L_48 = V_0;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_018f;
		}
	}
	{
		t328 * L_49 = (__this->f11);
		t318* L_50 = (__this->f2);
		int32_t L_51 = V_0;
		int32_t L_52 = V_1;
		int32_t L_53 = V_0;
		m10939(L_49, L_50, L_51, ((int32_t)((int32_t)L_52-(int32_t)L_53)), &m10939_MI);
		t328 * L_54 = (__this->f11);
		int32_t L_55 = m10930(L_54, &m10930_MI);
		if ((((int32_t)L_55) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0177;
		}
	}
	{
		t328 * L_56 = (__this->f11);
		V_3 = L_56;
		__this->f11 = (t328 *)NULL;
		t328 * L_57 = V_3;
		t328 * L_58 = V_3;
		int32_t L_59 = m5926(L_58, &m5926_MI);
		t2* L_60 = m10934(L_57, 0, L_59, &m10934_MI);
		return L_60;
	}

IL_0177:
	{
		t328 * L_61 = (__this->f11);
		t328 * L_62 = (__this->f11);
		int32_t L_63 = m5926(L_62, &m5926_MI);
		t2* L_64 = m10934(L_61, 0, L_63, &m10934_MI);
		return L_64;
	}

IL_018f:
	{
		int32_t L_65 = V_1;
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_01ac;
		}
	}
	{
		t328 * L_66 = (__this->f11);
		t328 * L_67 = (__this->f11);
		int32_t L_68 = m5926(L_67, &m5926_MI);
		t2* L_69 = m10934(L_66, 0, L_68, &m10934_MI);
		return L_69;
	}

IL_01ac:
	{
		goto IL_0099;
	}
}
extern MethodInfo m9056_MI;
extern TypeInfo* t318_TI_var;
extern "C" t2* m9056 (t1725 * __this, MethodInfo* method)
{
	static bool m9056_init;
	if (!m9056_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m9056_init = true;
	}
	t328 * V_0 = {0};
	int32_t V_1 = 0;
	t318* V_2 = {0};
	int32_t V_3 = 0;
	{
		t302 * L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1704, (t2*) &_stringLiteral1705, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t328 * L_2 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m1203(L_2, &m1203_MI);
		V_0 = L_2;
		t318* L_3 = (__this->f2);
		V_1 = (((int32_t)(((t121 *)L_3)->max_length)));
		int32_t L_4 = V_1;
		V_2 = ((t318*)SZArrayNew(t318_TI_var, L_4));
		goto IL_003a;
	}

IL_0030:
	{
		t328 * L_5 = V_0;
		t318* L_6 = V_2;
		int32_t L_7 = V_3;
		m10939(L_5, L_6, 0, L_7, &m10939_MI);
	}

IL_003a:
	{
		t318* L_8 = V_2;
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)VirtFuncInvoker3< int32_t, t318*, int32_t, int32_t >::Invoke(&m9053_MI, __this, L_8, 0, L_9);
		int32_t L_11 = L_10;
		V_3 = L_11;
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		t328 * L_12 = V_0;
		t2* L_13 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_12);
		return L_13;
	}
}
#include "t1741.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1741_TI;
#include "t1741MD.h"

#include "t1376MD.h"
extern MethodInfo m9063_MI;
extern MethodInfo m9058_MI;
extern MethodInfo m9102_MI;
extern MethodInfo m9060_MI;
extern MethodInfo m6945_MI;
extern MethodInfo m12047_MI;
extern MethodInfo m7032_MI;
extern MethodInfo m12049_MI;
extern MethodInfo m9065_MI;
extern MethodInfo m9064_MI;
extern MethodInfo m7068_MI;
extern MethodInfo m12050_MI;
extern MethodInfo m9067_MI;
extern MethodInfo m9068_MI;
extern MethodInfo m9062_MI;
extern MethodInfo m646_MI;


extern MethodInfo m9057_MI;
extern "C" void m9057 (t1741 * __this, t302 * p0, t736 * p1, MethodInfo* method)
{
	{
		t302 * L_0 = p0;
		t736 * L_1 = p1;
		m9058(__this, L_0, L_1, ((int32_t)1024), &m9058_MI);
		return;
	}
}
extern "C" void m9058 (t1741 * __this, t302 * p0, t736 * p1, int32_t p2, MethodInfo* method)
{
	{
		m9102(__this, &m9102_MI);
		t302 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1702, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t736 * L_2 = p1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1579, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int32_t L_4 = p2;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		t909 * L_5 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_5, (t2*) &_stringLiteral1618, &m5763_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0031:
	{
		t302 * L_6 = p0;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7050_MI, L_6);
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		t570 * L_8 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_8, (t2*) &_stringLiteral1707, &m2949_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0044:
	{
		t302 * L_9 = p0;
		__this->f3 = L_9;
		t736 * L_10 = p1;
		int32_t L_11 = p2;
		m9060(__this, L_10, L_11, &m9060_MI);
		return;
	}
}
extern MethodInfo m9059_MI;
extern "C" void m9059 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t302_TI));
		t302 * L_0 = ((t302_SFs*)InitializedTypeInfo(&t302_TI)->static_fields)->f0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_1 = m10904(NULL, &m10904_MI);
		t1741 * L_2 = (t1741 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1741_TI));
		m9058(L_2, L_0, L_1, 1, &m9058_MI);
		((t1741_SFs*)InitializedTypeInfo(&t1741_TI)->static_fields)->f11 = L_2;
		return;
	}
}
extern TypeInfo* t318_TI_var;
extern TypeInfo* t737_TI_var;
extern "C" void m9060 (t1741 * __this, t736 * p0, int32_t p1, MethodInfo* method)
{
	static bool m9060_init;
	if (!m9060_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m9060_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t736 * L_0 = p0;
		__this->f2 = L_0;
		int32_t L_1 = 0;
		V_1 = L_1;
		__this->f6 = L_1;
		int32_t L_2 = V_1;
		__this->f8 = L_2;
		int32_t L_3 = p1;
		int32_t L_4 = m6945(NULL, L_3, ((int32_t)256), &m6945_MI);
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->f7 = ((t318*)SZArrayNew(t318_TI_var, L_5));
		t736 * L_6 = p0;
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m12047_MI, L_6, L_7);
		__this->f5 = ((t737*)SZArrayNew(t737_TI_var, L_8));
		t302 * L_9 = (__this->f3);
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7032_MI, L_9);
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		t302 * L_11 = (__this->f3);
		int64_t L_12 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m12049_MI, L_11);
		if ((((int64_t)L_12) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0064;
		}
	}
	{
		__this->f10 = 1;
	}

IL_0064:
	{
		return;
	}
}
extern MethodInfo m9061_MI;
extern "C" void m9061 (t1741 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f4 = L_0;
		bool L_1 = (__this->f4);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		VirtActionInvoker0::Invoke(&m9063_MI, __this);
	}

IL_0015:
	{
		return;
	}
}
extern "C" void m9062 (t1741 * __this, bool p0, MethodInfo* method)
{
	t138 * V_0 = {0};
	t138 * V_1 = {0};
	t138 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (t138 *)NULL;
		bool L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		bool L_1 = p0;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		t302 * L_2 = (__this->f3);
		if (!L_2)
		{
			goto IL_003e;
		}
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(&m9063_MI, __this);
		goto IL_0022;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_001d:
	{ // begin catch(System.Exception)
		V_1 = ((t138 *)__exception_local);
		t138 * L_3 = V_1;
		V_0 = L_3;
		goto IL_0022;
	} // end catch (depth: 1)

IL_0022:
	{
		__this->f9 = 1;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		t302 * L_4 = (__this->f3);
		VirtActionInvoker0::Invoke(&m1129_MI, L_4);
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Exception)
		{
			V_2 = ((t138 *)__exception_local);
			t138 * L_5 = V_0;
			if (L_5)
			{
				goto IL_003c;
			}
		}

IL_003a:
		{
			t138 * L_6 = V_2;
			V_0 = L_6;
		}

IL_003c:
		{
			goto IL_003e;
		}
	} // end catch (depth: 1)

IL_003e:
	{
		__this->f3 = (t302 *)NULL;
		__this->f5 = (t737*)NULL;
		__this->f2 = (t736 *)NULL;
		__this->f7 = (t318*)NULL;
		t138 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		t138 * L_8 = V_0;
		il2cpp_codegen_raise_exception(L_8);
	}

IL_005f:
	{
		return;
	}
}
extern "C" void m9063 (t1741 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_1, (t2*) &_stringLiteral1708, &m6953_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		m9065(__this, &m9065_MI);
		int32_t L_2 = (__this->f6);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		m9064(__this, &m9064_MI);
		t302 * L_3 = (__this->f3);
		VirtActionInvoker0::Invoke(&m7068_MI, L_3);
	}

IL_0033:
	{
		return;
	}
}
extern "C" void m9064 (t1741 * __this, MethodInfo* method)
{
	t737* V_0 = {0};
	{
		bool L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_1 = (__this->f6);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		t736 * L_2 = (__this->f2);
		t737* L_3 = (t737*)VirtFuncInvoker0< t737* >::Invoke(&m10900_MI, L_2);
		V_0 = L_3;
		t737* L_4 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_4)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		t302 * L_5 = (__this->f3);
		t737* L_6 = V_0;
		t737* L_7 = V_0;
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_5, L_6, 0, (((int32_t)(((t121 *)L_7)->max_length))));
	}

IL_0033:
	{
		__this->f10 = 1;
	}

IL_003a:
	{
		t302 * L_8 = (__this->f3);
		t737* L_9 = (__this->f5);
		int32_t L_10 = (__this->f6);
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_8, L_9, 0, L_10);
		__this->f6 = 0;
		return;
	}
}
extern "C" void m9065 (t1741 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f6);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		m9064(__this, &m9064_MI);
	}

IL_000f:
	{
		int32_t L_1 = (__this->f8);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		t736 * L_2 = (__this->f2);
		t318* L_3 = (__this->f7);
		int32_t L_4 = (__this->f8);
		t737* L_5 = (__this->f5);
		int32_t L_6 = (__this->f6);
		int32_t L_7 = (int32_t)VirtFuncInvoker5< int32_t, t318*, int32_t, int32_t, t737*, int32_t >::Invoke(&m12050_MI, L_2, L_3, 0, L_4, L_5, L_6);
		V_0 = L_7;
		int32_t L_8 = (__this->f6);
		int32_t L_9 = V_0;
		__this->f6 = ((int32_t)((int32_t)L_8+(int32_t)L_9));
		__this->f8 = 0;
	}

IL_0052:
	{
		return;
	}
}
extern MethodInfo m9066_MI;
extern "C" void m9066 (t1741 * __this, t318* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_1, (t2*) &_stringLiteral1708, &m6953_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t318* L_2 = p0;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1050, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0021:
	{
		int32_t L_4 = p1;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		t909 * L_5 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_5, (t2*) &_stringLiteral397, (t2*) &_stringLiteral808, &m4402_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0035:
	{
		int32_t L_6 = p2;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		t909 * L_7 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_7, (t2*) &_stringLiteral489, (t2*) &_stringLiteral808, &m4402_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0049:
	{
		int32_t L_8 = p1;
		t318* L_9 = p0;
		int32_t L_10 = p2;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_005c;
		}
	}
	{
		t570 * L_11 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_11, (t2*) &_stringLiteral1706, &m2949_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_005c:
	{
		t318* L_12 = p0;
		int32_t L_13 = p1;
		int32_t L_14 = p2;
		m9067(__this, L_12, L_13, L_14, &m9067_MI);
		bool L_15 = (__this->f4);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		VirtActionInvoker0::Invoke(&m9063_MI, __this);
	}

IL_0073:
	{
		return;
	}
}
extern "C" void m9067 (t1741 * __this, t318* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0060;
	}

IL_0002:
	{
		t318* L_0 = (__this->f7);
		int32_t L_1 = (__this->f8);
		V_0 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))-(int32_t)L_1));
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		m9065(__this, &m9065_MI);
		t318* L_3 = (__this->f7);
		V_0 = (((int32_t)(((t121 *)L_3)->max_length)));
	}

IL_0024:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = p2;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = p2;
		V_0 = L_6;
	}

IL_002a:
	{
		t318* L_7 = p0;
		int32_t L_8 = p1;
		t318* L_9 = (__this->f7);
		int32_t L_10 = (__this->f8);
		int32_t L_11 = V_0;
		m5834(NULL, (t121 *)(t121 *)L_7, ((int32_t)((int32_t)L_8*(int32_t)2)), (t121 *)(t121 *)L_9, ((int32_t)((int32_t)L_10*(int32_t)2)), ((int32_t)((int32_t)L_11*(int32_t)2)), &m5834_MI);
		int32_t L_12 = p2;
		int32_t L_13 = V_0;
		p2 = ((int32_t)((int32_t)L_12-(int32_t)L_13));
		int32_t L_14 = p1;
		int32_t L_15 = V_0;
		p1 = ((int32_t)((int32_t)L_14+(int32_t)L_15));
		int32_t L_16 = (__this->f8);
		int32_t L_17 = V_0;
		__this->f8 = ((int32_t)((int32_t)L_16+(int32_t)L_17));
	}

IL_0060:
	{
		int32_t L_18 = p2;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
extern "C" void m9068 (t1741 * __this, t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2763(L_0, &m2763_MI);
		V_0 = L_1;
		V_1 = 0;
		goto IL_006d;
	}

IL_000b:
	{
		t318* L_2 = (__this->f7);
		int32_t L_3 = (__this->f8);
		V_2 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_2)->max_length)))-(int32_t)L_3));
		int32_t L_4 = V_2;
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		m9065(__this, &m9065_MI);
		t318* L_5 = (__this->f7);
		V_2 = (((int32_t)(((t121 *)L_5)->max_length)));
	}

IL_002d:
	{
		int32_t L_6 = V_2;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_8 = V_0;
		V_2 = L_8;
	}

IL_0033:
	{
		V_3 = 0;
		goto IL_0053;
	}

IL_0037:
	{
		t318* L_9 = (__this->f7);
		int32_t L_10 = V_3;
		int32_t L_11 = (__this->f8);
		t2* L_12 = p0;
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		uint16_t L_15 = m2778(L_12, ((int32_t)((int32_t)L_13+(int32_t)L_14)), &m2778_MI);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_9, ((int32_t)((int32_t)L_10+(int32_t)L_11)))) = (uint16_t)L_15;
		int32_t L_16 = V_3;
		V_3 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_2;
		V_0 = ((int32_t)((int32_t)L_19-(int32_t)L_20));
		int32_t L_21 = V_1;
		int32_t L_22 = V_2;
		V_1 = ((int32_t)((int32_t)L_21+(int32_t)L_22));
		int32_t L_23 = (__this->f8);
		int32_t L_24 = V_2;
		__this->f8 = ((int32_t)((int32_t)L_23+(int32_t)L_24));
	}

IL_006d:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
extern MethodInfo m9069_MI;
extern "C" void m9069 (t1741 * __this, uint16_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_1, (t2*) &_stringLiteral1708, &m6953_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		int32_t L_2 = (__this->f8);
		t318* L_3 = (__this->f7);
		if ((((int32_t)L_2) < ((int32_t)(((int32_t)(((t121 *)L_3)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		m9065(__this, &m9065_MI);
	}

IL_0029:
	{
		t318* L_4 = (__this->f7);
		int32_t L_5 = (__this->f8);
		int32_t L_6 = L_5;
		V_0 = L_6;
		__this->f8 = ((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_0;
		uint16_t L_8 = p0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_7)) = (uint16_t)L_8;
		bool L_9 = (__this->f4);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		VirtActionInvoker0::Invoke(&m9063_MI, __this);
	}

IL_0050:
	{
		return;
	}
}
extern MethodInfo m9070_MI;
extern "C" void m9070 (t1741 * __this, t318* p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_1, (t2*) &_stringLiteral1708, &m6953_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t318* L_2 = p0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		t318* L_3 = p0;
		t318* L_4 = p0;
		m9067(__this, L_3, 0, (((int32_t)(((t121 *)L_4)->max_length))), &m9067_MI);
	}

IL_0021:
	{
		bool L_5 = (__this->f4);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(&m9063_MI, __this);
	}

IL_002f:
	{
		return;
	}
}
extern MethodInfo m9071_MI;
extern "C" void m9071 (t1741 * __this, t2* p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_1, (t2*) &_stringLiteral1708, &m6953_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t2* L_2 = p0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t2* L_3 = p0;
		m9068(__this, L_3, &m9068_MI);
	}

IL_001d:
	{
		bool L_4 = (__this->f4);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(&m9063_MI, __this);
	}

IL_002b:
	{
		return;
	}
}
extern MethodInfo m9072_MI;
extern "C" void m9072 (t1741 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m9062_MI, __this, 1);
		return;
	}
}
extern MethodInfo m9073_MI;
extern "C" void m9073 (t1741 * __this, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(&m9062_MI, __this, 0);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0010:
	{
		return;
	}
}
#include "t894.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t894_TI;
#include "t894MD.h"

extern MethodInfo m9079_MI;
extern MethodInfo m11179_MI;
extern MethodInfo m7387_MI;
extern MethodInfo m9078_MI;


extern MethodInfo m4319_MI;
extern "C" void m4319 (t894 * __this, t2* p0, MethodInfo* method)
{
	{
		m9082(__this, &m9082_MI);
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1077, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2* L_2 = p0;
		__this->f1 = L_2;
		__this->f2 = 0;
		t2* L_3 = p0;
		int32_t L_4 = m2763(L_3, &m2763_MI);
		__this->f3 = L_4;
		return;
	}
}
extern MethodInfo m9074_MI;
extern "C" void m9074 (t894 * __this, bool p0, MethodInfo* method)
{
	{
		__this->f1 = (t2*)NULL;
		bool L_0 = p0;
		m9085(__this, L_0, &m9085_MI);
		return;
	}
}
extern MethodInfo m9075_MI;
extern "C" int32_t m9075 (t894 * __this, MethodInfo* method)
{
	{
		m9079(__this, &m9079_MI);
		int32_t L_0 = (__this->f2);
		int32_t L_1 = (__this->f3);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		t2* L_2 = (__this->f1);
		int32_t L_3 = (__this->f2);
		uint16_t L_4 = m2778(L_2, L_3, &m2778_MI);
		return L_4;
	}
}
extern MethodInfo m9076_MI;
extern "C" int32_t m9076 (t894 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m9079(__this, &m9079_MI);
		int32_t L_0 = (__this->f2);
		int32_t L_1 = (__this->f3);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		t2* L_2 = (__this->f1);
		int32_t L_3 = (__this->f2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->f2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		uint16_t L_6 = m2778(L_2, L_5, &m2778_MI);
		return L_6;
	}
}
extern MethodInfo m9077_MI;
extern "C" int32_t m9077 (t894 * __this, t318* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m9079(__this, &m9079_MI);
		t318* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1050, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t318* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_2)->max_length)))-(int32_t)L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0022;
		}
	}
	{
		t570 * L_5 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m11179(L_5, &m11179_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0022:
	{
		int32_t L_6 = p1;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_7 = p2;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		t909 * L_8 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5940(L_8, &m5940_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0030:
	{
		int32_t L_9 = (__this->f2);
		int32_t L_10 = (__this->f3);
		int32_t L_11 = p2;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_12 = (__this->f3);
		int32_t L_13 = (__this->f2);
		V_0 = ((int32_t)((int32_t)L_12-(int32_t)L_13));
		goto IL_0052;
	}

IL_0050:
	{
		int32_t L_14 = p2;
		V_0 = L_14;
	}

IL_0052:
	{
		t2* L_15 = (__this->f1);
		int32_t L_16 = (__this->f2);
		t318* L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = V_0;
		m7387(L_15, L_16, L_17, L_18, L_19, &m7387_MI);
		int32_t L_20 = (__this->f2);
		int32_t L_21 = V_0;
		__this->f2 = ((int32_t)((int32_t)L_20+(int32_t)L_21));
		int32_t L_22 = V_0;
		return L_22;
	}
}
extern MethodInfo m4320_MI;
extern "C" t2* m4320 (t894 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	t2* V_4 = {0};
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	t894 * G_B14_1 = {0};
	int32_t G_B13_0 = 0;
	t894 * G_B13_1 = {0};
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	t894 * G_B15_2 = {0};
	{
		m9079(__this, &m9079_MI);
		int32_t L_0 = (__this->f2);
		t2* L_1 = (__this->f1);
		int32_t L_2 = m2763(L_1, &m2763_MI);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_001b;
		}
	}
	{
		return (t2*)NULL;
	}

IL_001b:
	{
		t2* L_3 = (__this->f1);
		int32_t L_4 = (__this->f2);
		int32_t L_5 = m4311(L_3, ((int32_t)13), L_4, &m4311_MI);
		V_0 = L_5;
		t2* L_6 = (__this->f1);
		int32_t L_7 = (__this->f2);
		int32_t L_8 = m4311(L_6, ((int32_t)10), L_7, &m4311_MI);
		V_1 = L_8;
		V_3 = 0;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_0054;
		}
	}
	{
		t2* L_11 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9078_MI, __this);
		return L_11;
	}

IL_0054:
	{
		int32_t L_12 = V_1;
		V_2 = L_12;
		goto IL_0070;
	}

IL_0058:
	{
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_14 = V_0;
		V_2 = L_14;
		goto IL_0070;
	}

IL_0060:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_17 = V_1;
		G_B11_0 = L_17;
		goto IL_0068;
	}

IL_0067:
	{
		int32_t L_18 = V_0;
		G_B11_0 = L_18;
	}

IL_0068:
	{
		V_2 = G_B11_0;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		V_3 = ((((int32_t)((int32_t)((int32_t)L_19+(int32_t)1))) == ((int32_t)L_20))? 1 : 0);
	}

IL_0070:
	{
		t2* L_21 = (__this->f1);
		int32_t L_22 = (__this->f2);
		int32_t L_23 = V_2;
		int32_t L_24 = (__this->f2);
		t2* L_25 = m2779(L_21, L_22, ((int32_t)((int32_t)L_23-(int32_t)L_24)), &m2779_MI);
		V_4 = L_25;
		int32_t L_26 = V_2;
		bool L_27 = V_3;
		G_B13_0 = L_26;
		G_B13_1 = __this;
		if (!L_27)
		{
			G_B14_0 = L_26;
			G_B14_1 = __this;
			goto IL_0093;
		}
	}
	{
		G_B15_0 = 2;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_0094;
	}

IL_0093:
	{
		G_B15_0 = 1;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_0094:
	{
		G_B15_2->f2 = ((int32_t)((int32_t)G_B15_1+(int32_t)G_B15_0));
		t2* L_28 = V_4;
		return L_28;
	}
}
extern "C" t2* m9078 (t894 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		m9079(__this, &m9079_MI);
		t2* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		int32_t L_2 = (__this->f3);
		int32_t L_3 = (__this->f2);
		t2* L_4 = m2779(L_0, L_1, ((int32_t)((int32_t)L_2-(int32_t)L_3)), &m2779_MI);
		V_0 = L_4;
		int32_t L_5 = (__this->f3);
		__this->f2 = L_5;
		t2* L_6 = V_0;
		return L_6;
	}
}
extern "C" void m9079 (t894 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral1710, &m7888_MI);
		t1536 * L_2 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_2, (t2*) &_stringLiteral1709, L_1, &m11811_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		return;
	}
}
#include "t1742.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1742_TI;
#include "t1742MD.h"



extern MethodInfo m9080_MI;
extern "C" void m9080 (t1742 * __this, MethodInfo* method)
{
	{
		m9082(__this, &m9082_MI);
		return;
	}
}
extern MethodInfo m9081_MI;
extern "C" t2* m9081 (t1742 * __this, MethodInfo* method)
{
	{
		return (t2*)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1743.h"
extern TypeInfo t1743_TI;
#include "t1532MD.h"
#include "t1743MD.h"
extern MethodInfo m6937_MI;
extern MethodInfo m9087_MI;
extern MethodInfo m9092_MI;


extern "C" void m9082 (t1671 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9083_MI;
extern "C" void m9083 (t9 * __this , MethodInfo* method)
{
	{
		t1742 * L_0 = (t1742 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1742_TI));
		m9080(L_0, &m9080_MI);
		((t1671_SFs*)InitializedTypeInfo(&t1671_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m9084_MI;
extern "C" void m9084 (t1671 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m9085_MI, __this, 1);
		return;
	}
}
extern "C" void m9085 (t1671 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		m6937(NULL, __this, &m6937_MI);
	}

IL_0009:
	{
		return;
	}
}
extern MethodInfo m9086_MI;
extern "C" int32_t m9086 (t1671 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
extern "C" int32_t m9087 (t1671 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
extern MethodInfo m9088_MI;
extern "C" int32_t m9088 (t1671 * __this, t318* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_001c;
	}

IL_0004:
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9087_MI, __this);
		int32_t L_1 = L_0;
		V_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_1;
		return L_2;
	}

IL_0011:
	{
		t318* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, ((int32_t)((int32_t)L_4+(int32_t)L_5)))) = (uint16_t)(((uint16_t)L_6));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_001c:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = p2;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_10 = V_1;
		return L_10;
	}
}
extern MethodInfo m9089_MI;
extern "C" t2* m9089 (t1671 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m9090_MI;
extern "C" t2* m9090 (t1671 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m9091_MI;
extern "C" t1671 * m9091 (t9 * __this , t1671 * p0, MethodInfo* method)
{
	{
		t1671 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1711, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1671 * L_2 = p0;
		if (!((t1743 *)IsInst(L_2, InitializedTypeInfo(&t1743_TI))))
		{
			goto IL_0018;
		}
	}
	{
		t1671 * L_3 = p0;
		return L_3;
	}

IL_0018:
	{
		t1671 * L_4 = p0;
		t1743 * L_5 = (t1743 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1743_TI));
		m9092(L_5, L_4, &m9092_MI);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9092 (t1743 * __this, t1671 * p0, MethodInfo* method)
{
	{
		m9082(__this, &m9082_MI);
		t1671 * L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m9093_MI;
extern "C" int32_t m9093 (t1743 * __this, MethodInfo* method)
{
	t1743 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1743 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1671 * L_1 = (__this->f1);
			int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9086_MI, L_1);
			V_1 = L_2;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		t1743 * L_3 = V_0;
		m1117(NULL, L_3, &m1117_MI);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
extern MethodInfo m9094_MI;
extern "C" t2* m9094 (t1743 * __this, MethodInfo* method)
{
	t1743 * V_0 = {0};
	t2* V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1743 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1671 * L_1 = (__this->f1);
			t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9089_MI, L_1);
			V_1 = L_2;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		t1743 * L_3 = V_0;
		m1117(NULL, L_3, &m1117_MI);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_001f:
	{
		t2* L_4 = V_1;
		return L_4;
	}
}
extern MethodInfo m9095_MI;
extern "C" t2* m9095 (t1743 * __this, MethodInfo* method)
{
	t1743 * V_0 = {0};
	t2* V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1743 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1671 * L_1 = (__this->f1);
			t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9090_MI, L_1);
			V_1 = L_2;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		t1743 * L_3 = V_0;
		m1117(NULL, L_3, &m1117_MI);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_001f:
	{
		t2* L_4 = V_1;
		return L_4;
	}
}
extern MethodInfo m9096_MI;
extern "C" int32_t m9096 (t1743 * __this, MethodInfo* method)
{
	t1743 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1743 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1671 * L_1 = (__this->f1);
			int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9087_MI, L_1);
			V_1 = L_2;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		t1743 * L_3 = V_0;
		m1117(NULL, L_3, &m1117_MI);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
extern MethodInfo m9097_MI;
extern "C" int32_t m9097 (t1743 * __this, t318* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t1743 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1743 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1671 * L_1 = (__this->f1);
			t318* L_2 = p0;
			int32_t L_3 = p1;
			int32_t L_4 = p2;
			int32_t L_5 = (int32_t)VirtFuncInvoker3< int32_t, t318*, int32_t, int32_t >::Invoke(&m9088_MI, L_1, L_2, L_3, L_4);
			V_1 = L_5;
			IL2CPP_LEAVE(0x22, FINALLY_001b);
		}

IL_0019:
		{
			IL2CPP_LEAVE(0x22, FINALLY_001b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		t1743 * L_6 = V_0;
		m1117(NULL, L_6, &m1117_MI);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0022:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
#include "t1744.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1744_TI;
#include "t1744MD.h"



extern MethodInfo m9098_MI;
extern "C" void m9098 (t1744 * __this, MethodInfo* method)
{
	{
		m9102(__this, &m9102_MI);
		return;
	}
}
extern MethodInfo m9099_MI;
extern "C" void m9099 (t1744 * __this, t2* p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9100_MI;
extern "C" void m9100 (t1744 * __this, uint16_t p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9101_MI;
extern "C" void m9101 (t1744 * __this, t318* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		return;
	}
}
#include "t1376.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1376_TI;

#include "t1745.h"
extern TypeInfo t1745_TI;
#include "t1745MD.h"
extern MethodInfo m5845_MI;
extern MethodInfo m4395_MI;
extern MethodInfo m9105_MI;
extern MethodInfo m9114_MI;
extern MethodInfo m9112_MI;
extern MethodInfo m9110_MI;
extern MethodInfo m9109_MI;
extern MethodInfo m9111_MI;
extern MethodInfo m9113_MI;


extern "C" void m9102 (t1376 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2* L_0 = m5845(NULL, &m5845_MI);
		t318* L_1 = m4395(L_0, &m4395_MI);
		__this->f0 = L_1;
		return;
	}
}
extern MethodInfo m9103_MI;
extern "C" void m9103 (t9 * __this , MethodInfo* method)
{
	{
		t1744 * L_0 = (t1744 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1744_TI));
		m9098(L_0, &m9098_MI);
		((t1376_SFs*)InitializedTypeInfo(&t1376_TI)->static_fields)->f1 = L_0;
		return;
	}
}
extern MethodInfo m9104_MI;
extern "C" void m9104 (t1376 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m9105_MI, __this, 1);
		return;
	}
}
extern "C" void m9105 (t1376 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		m6937(NULL, __this, &m6937_MI);
	}

IL_0009:
	{
		return;
	}
}
extern MethodInfo m9106_MI;
extern "C" void m9106 (t1376 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m9105_MI, __this, 1);
		m6937(NULL, __this, &m6937_MI);
		return;
	}
}
extern MethodInfo m9107_MI;
extern "C" void m9107 (t1376 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9108_MI;
extern "C" t1376 * m9108 (t9 * __this , t1376 * p0, bool p1, MethodInfo* method)
{
	{
		t1376 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1712, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1376 * L_2 = p0;
		if (!((t1745 *)IsInst(L_2, InitializedTypeInfo(&t1745_TI))))
		{
			goto IL_0018;
		}
	}
	{
		t1376 * L_3 = p0;
		return L_3;
	}

IL_0018:
	{
		t1376 * L_4 = p0;
		bool L_5 = p1;
		t1745 * L_6 = (t1745 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1745_TI));
		m9114(L_6, L_4, L_5, &m9114_MI);
		return L_6;
	}
}
extern "C" void m9109 (t1376 * __this, uint16_t p0, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m9110 (t1376 * __this, t318* p0, MethodInfo* method)
{
	{
		t318* L_0 = p0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		t318* L_1 = p0;
		t318* L_2 = p0;
		VirtActionInvoker3< t318*, int32_t, int32_t >::Invoke(&m9112_MI, __this, L_1, 0, (((int32_t)(((t121 *)L_2)->max_length))));
		return;
	}
}
extern "C" void m9111 (t1376 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t2* L_1 = p0;
		t318* L_2 = m4395(L_1, &m4395_MI);
		VirtActionInvoker1< t318* >::Invoke(&m9110_MI, __this, L_2);
	}

IL_000f:
	{
		return;
	}
}
extern "C" void m9112 (t1376 * __this, t318* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		t318* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1050, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = p1;
		t318* L_4 = p0;
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)(((t121 *)L_4)->max_length))))))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		t909 * L_5 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_5, (t2*) &_stringLiteral397, &m5763_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = p2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_7 = p1;
		t318* L_8 = p0;
		int32_t L_9 = p2;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_8)->max_length)))-(int32_t)L_9)))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		t909 * L_10 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_10, (t2*) &_stringLiteral489, &m5763_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_003a:
	{
		goto IL_0053;
	}

IL_003c:
	{
		t318* L_11 = p0;
		int32_t L_12 = p1;
		int32_t L_13 = L_12;
		VirtActionInvoker1< uint16_t >::Invoke(&m9109_MI, __this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_13)));
		int32_t L_14 = p2;
		p2 = ((int32_t)((int32_t)L_14-(int32_t)1));
		int32_t L_15 = p1;
		p1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_16 = p2;
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		return;
	}
}
extern "C" void m9113 (t1376 * __this, MethodInfo* method)
{
	{
		t318* L_0 = (__this->f0);
		VirtActionInvoker1< t318* >::Invoke(&m9110_MI, __this, L_0);
		return;
	}
}
extern MethodInfo m5990_MI;
extern "C" void m5990 (t1376 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m9111_MI, __this, L_0);
		VirtActionInvoker0::Invoke(&m9113_MI, __this);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9114 (t1745 * __this, t1376 * p0, bool p1, MethodInfo* method)
{
	{
		m9102(__this, &m9102_MI);
		t1376 * L_0 = p0;
		__this->f2 = L_0;
		bool L_1 = p1;
		__this->f3 = L_1;
		return;
	}
}
extern MethodInfo m9115_MI;
extern "C" void m9115 (t1745 * __this, MethodInfo* method)
{
	t1745 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		V_0 = __this;
		t1745 * L_1 = V_0;
		m1115(NULL, L_1, &m1115_MI);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		t1376 * L_2 = (__this->f2);
		VirtActionInvoker0::Invoke(&m9104_MI, L_2);
		IL2CPP_LEAVE(0x25, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		t1745 * L_3 = V_0;
		m1117(NULL, L_3, &m1117_MI);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0025:
	{
		return;
	}
}
extern MethodInfo m9116_MI;
extern "C" void m9116 (t1745 * __this, MethodInfo* method)
{
	t1745 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1745 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1376 * L_1 = (__this->f2);
		VirtActionInvoker0::Invoke(&m9107_MI, L_1);
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		t1745 * L_2 = V_0;
		m1117(NULL, L_2, &m1117_MI);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_001c:
	{
		return;
	}
}
extern MethodInfo m9117_MI;
extern "C" void m9117 (t1745 * __this, uint16_t p0, MethodInfo* method)
{
	t1745 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1745 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1376 * L_1 = (__this->f2);
		uint16_t L_2 = p0;
		VirtActionInvoker1< uint16_t >::Invoke(&m9109_MI, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		t1745 * L_3 = V_0;
		m1117(NULL, L_3, &m1117_MI);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_001d:
	{
		return;
	}
}
extern MethodInfo m9118_MI;
extern "C" void m9118 (t1745 * __this, t318* p0, MethodInfo* method)
{
	t1745 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1745 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1376 * L_1 = (__this->f2);
		t318* L_2 = p0;
		VirtActionInvoker1< t318* >::Invoke(&m9110_MI, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		t1745 * L_3 = V_0;
		m1117(NULL, L_3, &m1117_MI);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_001d:
	{
		return;
	}
}
extern MethodInfo m9119_MI;
extern "C" void m9119 (t1745 * __this, t2* p0, MethodInfo* method)
{
	t1745 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1745 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1376 * L_1 = (__this->f2);
		t2* L_2 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m9111_MI, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		t1745 * L_3 = V_0;
		m1117(NULL, L_3, &m1117_MI);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_001d:
	{
		return;
	}
}
extern MethodInfo m9120_MI;
extern "C" void m9120 (t1745 * __this, t318* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t1745 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1745 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1376 * L_1 = (__this->f2);
		t318* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		VirtActionInvoker3< t318*, int32_t, int32_t >::Invoke(&m9112_MI, L_1, L_2, L_3, L_4);
		IL2CPP_LEAVE(0x1F, FINALLY_0018);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		t1745 * L_5 = V_0;
		m1117(NULL, L_5, &m1117_MI);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_001f:
	{
		return;
	}
}
extern MethodInfo m9121_MI;
extern "C" void m9121 (t1745 * __this, MethodInfo* method)
{
	t1745 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1745 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1376 * L_1 = (__this->f2);
		VirtActionInvoker0::Invoke(&m9113_MI, L_1);
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		t1745 * L_2 = V_0;
		m1117(NULL, L_2, &m1117_MI);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_001c:
	{
		return;
	}
}
extern MethodInfo m9122_MI;
extern "C" void m9122 (t1745 * __this, t2* p0, MethodInfo* method)
{
	t1745 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1745 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1376 * L_1 = (__this->f2);
		t2* L_2 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m5990_MI, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		t1745 * L_3 = V_0;
		m1117(NULL, L_3, &m1117_MI);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_001d:
	{
		return;
	}
}
#include "t1746.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1746_TI;
#include "t1746MD.h"

extern TypeInfo t1212_TI;
extern Il2CppType t1212_0_0_0;
extern MethodInfo m9128_MI;


extern MethodInfo m9123_MI;
extern "C" void m9123 (t1746 * __this, t302 * p0, t736 * p1, MethodInfo* method)
{
	{
		t302 * L_0 = p0;
		t736 * L_1 = p1;
		m9042(__this, L_0, L_1, &m9042_MI);
		return;
	}
}
extern MethodInfo m9124_MI;
extern TypeInfo* t1212_TI_var;
extern "C" void m9124 (t9 * __this , MethodInfo* method)
{
	static bool m9124_init;
	if (!m9124_init)
	{
		t1212_TI_var = il2cpp_codegen_class_from_type(&t1212_0_0_0);
		m9124_init = true;
	}
	t2* V_0 = {0};
	{
		t2* L_0 = m5845(NULL, &m5845_MI);
		int32_t L_1 = m2763(L_0, &m2763_MI);
		((t1746_SFs*)InitializedTypeInfo(&t1746_TI)->static_fields)->f14 = ((t1212*)SZArrayNew(t1212_TI_var, L_1));
		t2* L_2 = m5845(NULL, &m5845_MI);
		V_0 = L_2;
		t2* L_3 = V_0;
		int32_t L_4 = m2763(L_3, &m2763_MI);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		t2* L_5 = V_0;
		uint16_t L_6 = m2778(L_5, 0, &m2778_MI);
		((t1746_SFs*)InitializedTypeInfo(&t1746_TI)->static_fields)->f15 = L_6;
	}

IL_002f:
	{
		return;
	}
}
extern MethodInfo m9125_MI;
extern "C" int32_t m9125 (t1746 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = m9051(__this, &m9051_MI);
			V_0 = L_0;
			goto IL_0010;
		}

IL_0009:
		{
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1555_TI, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.IO.IOException)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (-1);
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m9126_MI;
extern "C" int32_t m9126 (t1746 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = m9052(__this, &m9052_MI);
			V_0 = L_0;
			goto IL_0010;
		}

IL_0009:
		{
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1555_TI, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.IO.IOException)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (-1);
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m9127_MI;
extern "C" int32_t m9127 (t1746 * __this, t318* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	uint16_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t318* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1713, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		t909 * L_3 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_3, (t2*) &_stringLiteral397, (t2*) &_stringLiteral808, &m4402_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int32_t L_4 = p2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		t909 * L_5 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_5, (t2*) &_stringLiteral489, (t2*) &_stringLiteral808, &m4402_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0036:
	{
		int32_t L_6 = p1;
		t318* L_7 = p0;
		int32_t L_8 = p2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))-(int32_t)L_8)))))
		{
			goto IL_0049;
		}
	}
	{
		t570 * L_9 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_9, (t2*) &_stringLiteral1714, &m2949_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0049:
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1746_TI));
		uint16_t L_10 = ((t1746_SFs*)InitializedTypeInfo(&t1746_TI)->static_fields)->f15;
		V_1 = L_10;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0053:
		{
			int32_t L_11 = m9052(__this, &m9052_MI);
			V_2 = L_11;
			int32_t L_12 = V_2;
			if ((((int32_t)L_12) >= ((int32_t)0)))
			{
				goto IL_0060;
			}
		}

IL_005e:
		{
			goto IL_0097;
		}

IL_0060:
		{
			int32_t L_13 = V_0;
			V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
			int32_t L_14 = p2;
			p2 = ((int32_t)((int32_t)L_14-(int32_t)1));
			t318* L_15 = p0;
			int32_t L_16 = p1;
			int32_t L_17 = V_2;
			*((uint16_t*)(uint16_t*)SZArrayLdElema(L_15, L_16)) = (uint16_t)(((uint16_t)L_17));
			uint16_t L_18 = V_1;
			if (!L_18)
			{
				goto IL_007e;
			}
		}

IL_0073:
		{
			int32_t L_19 = V_2;
			uint16_t L_20 = V_1;
			if ((!(((uint32_t)(((uint16_t)L_19))) == ((uint32_t)L_20))))
			{
				goto IL_007c;
			}
		}

IL_0078:
		{
			int32_t L_21 = V_0;
			V_3 = L_21;
			goto IL_009e;
		}

IL_007c:
		{
			goto IL_008c;
		}

IL_007e:
		{
			int32_t L_22 = V_2;
			bool L_23 = m9128(__this, (((uint16_t)L_22)), &m9128_MI);
			if (!L_23)
			{
				goto IL_008c;
			}
		}

IL_0088:
		{
			int32_t L_24 = V_0;
			V_3 = L_24;
			goto IL_009e;
		}

IL_008c:
		{
			int32_t L_25 = p1;
			p1 = ((int32_t)((int32_t)L_25+(int32_t)1));
		}

IL_0093:
		{
			int32_t L_26 = p2;
			if ((((int32_t)L_26) > ((int32_t)0)))
			{
				goto IL_0053;
			}
		}

IL_0097:
		{
			goto IL_009c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1555_TI, e.ex->object.klass))
			goto CATCH_0099;
		throw e;
	}

CATCH_0099:
	{ // begin catch(System.IO.IOException)
		goto IL_009c;
	} // end catch (depth: 1)

IL_009c:
	{
		int32_t L_27 = V_0;
		return L_27;
	}

IL_009e:
	{
		int32_t L_28 = V_3;
		return L_28;
	}
}
extern "C" bool m9128 (t1746 * __this, uint16_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0036;
	}

IL_0004:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1746_TI));
		t1212* L_0 = ((t1746_SFs*)InitializedTypeInfo(&t1746_TI)->static_fields)->f14;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		if ((*(uint8_t*)(bool*)SZArrayLdElema(L_0, L_2)))
		{
			goto IL_0032;
		}
	}
	{
		uint16_t L_3 = p0;
		t2* L_4 = m5845(NULL, &m5845_MI);
		int32_t L_5 = V_0;
		uint16_t L_6 = m2778(L_4, L_5, &m2778_MI);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_6))))
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1746_TI));
		t1212* L_7 = ((t1746_SFs*)InitializedTypeInfo(&t1746_TI)->static_fields)->f14;
		int32_t L_8 = V_0;
		*((bool*)(bool*)SZArrayLdElema(L_7, L_8)) = (bool)1;
		int32_t L_9 = V_0;
		t1212* L_10 = ((t1746_SFs*)InitializedTypeInfo(&t1746_TI)->static_fields)->f14;
		return ((((int32_t)L_9) == ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_10)->max_length)))-(int32_t)1))))? 1 : 0);
	}

IL_0030:
	{
		goto IL_0040;
	}

IL_0032:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0036:
	{
		int32_t L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1746_TI));
		t1212* L_13 = ((t1746_SFs*)InitializedTypeInfo(&t1746_TI)->static_fields)->f14;
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((t121 *)L_13)->max_length))))))
		{
			goto IL_0004;
		}
	}

IL_0040:
	{
		V_1 = 0;
		goto IL_0050;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1746_TI));
		t1212* L_14 = ((t1746_SFs*)InitializedTypeInfo(&t1746_TI)->static_fields)->f14;
		int32_t L_15 = V_1;
		*((bool*)(bool*)SZArrayLdElema(L_14, L_15)) = (bool)0;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1746_TI));
		t1212* L_18 = ((t1746_SFs*)InitializedTypeInfo(&t1746_TI)->static_fields)->f14;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((t121 *)L_18)->max_length))))))
		{
			goto IL_0044;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m9129_MI;
extern "C" t2* m9129 (t1746 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			t2* L_0 = m9055(__this, &m9055_MI);
			V_0 = L_0;
			goto IL_0010;
		}

IL_0009:
		{
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1555_TI, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.IO.IOException)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (t2*)NULL;
	}

IL_0010:
	{
		t2* L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m9130_MI;
extern "C" t2* m9130 (t1746 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			t2* L_0 = m9056(__this, &m9056_MI);
			V_0 = L_0;
			goto IL_0010;
		}

IL_0009:
		{
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1555_TI, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.IO.IOException)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (t2*)NULL;
	}

IL_0010:
	{
		t2* L_1 = V_0;
		return L_1;
	}
}
#include "t1747.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1747_TI;
#include "t1747MD.h"



extern MethodInfo m9131_MI;
extern "C" void m9131 (t1747 * __this, t302 * p0, t736 * p1, MethodInfo* method)
{
	{
		t302 * L_0 = p0;
		t736 * L_1 = p1;
		m9057(__this, L_0, L_1, &m9057_MI);
		return;
	}
}
extern MethodInfo m9132_MI;
extern "C" void m9132 (t1747 * __this, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		m9063(__this, &m9063_MI);
		goto IL_000b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_0008;
		throw e;
	}

CATCH_0008:
	{ // begin catch(System.Exception)
		goto IL_000b;
	} // end catch (depth: 1)

IL_000b:
	{
		return;
	}
}
extern MethodInfo m9133_MI;
extern "C" void m9133 (t1747 * __this, t318* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		t318* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		m9066(__this, L_0, L_1, L_2, &m9066_MI);
		goto IL_000e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.Exception)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return;
	}
}
extern MethodInfo m9134_MI;
extern "C" void m9134 (t1747 * __this, uint16_t p0, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		uint16_t L_0 = p0;
		m9069(__this, L_0, &m9069_MI);
		goto IL_000c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_0009;
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.Exception)
		goto IL_000c;
	} // end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
extern MethodInfo m9135_MI;
extern "C" void m9135 (t1747 * __this, t318* p0, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		t318* L_0 = p0;
		m9070(__this, L_0, &m9070_MI);
		goto IL_000c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_0009;
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.Exception)
		goto IL_000c;
	} // end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
extern MethodInfo m9136_MI;
extern "C" void m9136 (t1747 * __this, t2* p0, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		t2* L_0 = p0;
		m9071(__this, L_0, &m9071_MI);
		goto IL_000c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_0009;
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.Exception)
		goto IL_000c;
	} // end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
#include "t1748.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1748_TI;
#include "t1748MD.h"



#include "t1750.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1750_TI;
#include "t1750MD.h"

#include "t168.h"
#include "t1754.h"
#include "t1757.h"
#include "t1202.h"
#include "t1753.h"
#include "t1809.h"
#include "t1808.h"
#include "t1664.h"
#include "t1755.h"
#include "t1574.h"
#include "t1726.h"
#include "t1351.h"
extern TypeInfo t1757_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1202_TI;
extern TypeInfo t1664_TI;
extern TypeInfo t1755_TI;
extern TypeInfo t1751_TI;
extern TypeInfo t1756_TI;
extern TypeInfo t1574_TI;
extern TypeInfo t121_TI;
extern TypeInfo t1726_TI;
extern TypeInfo t1351_TI;
extern TypeInfo t1754_TI;
#include "t1351MD.h"
#include "t8MD.h"
#include "t1754MD.h"
#include "t1202MD.h"
#include "t1808MD.h"
#include "t1664MD.h"
#include "t582MD.h"
#include "t1755MD.h"
#include "t1726MD.h"
#include "t1574MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t117_0_0_0;
extern Il2CppType t8_0_0_0;
extern Il2CppType t122_0_0_0;
extern Il2CppType t1757_0_0_0;
extern Il2CppType t1751_0_0_0;
extern Il2CppType t1756_0_0_0;
extern MethodInfo m9147_MI;
extern MethodInfo m9490_MI;
extern MethodInfo m7036_MI;
extern MethodInfo m7016_MI;
extern MethodInfo m9515_MI;
extern MethodInfo m9518_MI;
extern MethodInfo m9144_MI;
extern MethodInfo m9517_MI;
extern MethodInfo m8696_MI;
extern MethodInfo m9521_MI;
extern MethodInfo m11937_MI;
extern MethodInfo m11934_MI;
extern MethodInfo m9520_MI;
extern MethodInfo m9766_MI;
extern MethodInfo m9524_MI;
extern MethodInfo m8341_MI;
extern MethodInfo m8347_MI;
extern MethodInfo m5862_MI;
extern MethodInfo m9138_MI;
extern MethodInfo m9141_MI;
extern MethodInfo m9148_MI;
extern MethodInfo m9355_MI;
extern MethodInfo m5982_MI;
extern MethodInfo m5788_MI;
extern MethodInfo m2777_MI;
extern MethodInfo m1125_MI;
extern MethodInfo m8892_MI;
extern MethodInfo m9359_MI;
extern MethodInfo m9379_MI;
extern MethodInfo m9607_MI;
extern MethodInfo m9502_MI;
extern MethodInfo m8346_MI;
extern MethodInfo m9528_MI;
extern MethodInfo m9529_MI;


extern MethodInfo m9137_MI;
extern TypeInfo* t158_TI_var;
extern TypeInfo* t737_TI_var;
extern "C" void m9137 (t1750 * __this, t1754 * p0, t2* p1, int32_t p2, bool p3, MethodInfo* method)
{
	static bool m9137_init;
	if (!m9137_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m9137_init = true;
	}
	t1202 * V_0 = {0};
	t737* V_1 = {0};
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	t737* V_4 = {0};
	int32_t V_5 = 0;
	t2* V_6 = {0};
	{
		__this->f17 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_0 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		__this->f21 = L_0;
		t126 * L_1 = m329(NULL, LoadTypeToken(&t117_0_0_0), &m329_MI);
		__this->f22 = L_1;
		t126 * L_2 = m329(NULL, LoadTypeToken(&t8_0_0_0), &m329_MI);
		__this->f23 = L_2;
		t126 * L_3 = m329(NULL, LoadTypeToken(&t122_0_0_0), &m329_MI);
		__this->f24 = L_3;
		m9490(__this, &m9490_MI);
		int32_t L_4 = p2;
		__this->f28 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)2048)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_5 = p2;
		p2 = ((int32_t)((int32_t)L_5&(int32_t)((int32_t)-2049)));
		t126 * L_6 = m329(NULL, LoadTypeToken(&t1757_0_0_0), &m329_MI);
		int32_t L_7 = p2;
		int32_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t1757_TI), &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t8_TI));
		bool L_10 = m7036(NULL, L_6, L_9, &m7036_MI);
		if (L_10)
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_11 = m4400(NULL, &m4400_MI);
		t158* L_12 = ((t158*)SZArrayNew(t158_TI_var, 1));
		int32_t L_13 = p2;
		int32_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t125_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 0)) = (t9 *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = m7016(NULL, L_11, (t2*) &_stringLiteral1715, L_12, &m7016_MI);
		t570 * L_17 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_17, L_16, (t2*) &_stringLiteral1616, &m5761_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00ab:
	{
		t1754 * L_18 = p0;
		t2* L_19 = m9515(L_18, &m9515_MI);
		__this->f11 = L_19;
		int32_t L_20 = p2;
		__this->f18 = L_20;
		t1754 * L_21 = p0;
		int32_t L_22 = m9518(L_21, &m9518_MI);
		__this->f16 = L_22;
		bool L_23 = m9144(__this, &m9144_MI);
		if (!L_23)
		{
			goto IL_00ea;
		}
	}
	{
		t2* L_24 = p1;
		if (!L_24)
		{
			goto IL_00dd;
		}
	}
	{
		t2* L_25 = p1;
		int32_t L_26 = m2763(L_25, &m2763_MI);
		if (L_26)
		{
			goto IL_00ea;
		}
	}

IL_00dd:
	{
		t2* L_27 = m8874(NULL, &m8874_MI);
		__this->f12 = L_27;
		goto IL_00f1;
	}

IL_00ea:
	{
		t2* L_28 = p1;
		__this->f12 = L_28;
	}

IL_00f1:
	{
		t1754 * L_29 = p0;
		t907 * L_30 = m9517(L_29, &m9517_MI);
		if (!L_30)
		{
			goto IL_011b;
		}
	}
	{
		t1754 * L_31 = p0;
		t907 * L_32 = m9517(L_31, &m9517_MI);
		t2* L_33 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8696_MI, L_32);
		__this->f15 = L_33;
		t1754 * L_34 = p0;
		t907 * L_35 = m9517(L_34, &m9517_MI);
		t2* L_36 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8696_MI, L_35);
		__this->f29 = L_36;
	}

IL_011b:
	{
		t1754 * L_37 = p0;
		t1202 * L_38 = m9521(L_37, &m9521_MI);
		V_0 = L_38;
		t1202 * L_39 = V_0;
		bool L_40 = m11937(NULL, L_39, (t1202 *)NULL, &m11937_MI);
		if (!L_40)
		{
			goto IL_0137;
		}
	}
	{
		t1202 * L_41 = V_0;
		t2* L_42 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11934_MI, L_41);
		__this->f14 = L_42;
	}

IL_0137:
	{
		t1754 * L_43 = p0;
		t1808 * L_44 = m9520(L_43, &m9520_MI);
		if (!L_44)
		{
			goto IL_0152;
		}
	}
	{
		t1754 * L_45 = p0;
		t1808 * L_46 = m9520(L_45, &m9520_MI);
		t1664 * L_47 = m9766(L_46, &m9766_MI);
		__this->f27 = L_47;
		goto IL_016e;
	}

IL_0152:
	{
		t1754 * L_48 = p0;
		t737* L_49 = m9524(L_48, &m9524_MI);
		V_1 = L_49;
		t737* L_50 = V_1;
		if (!L_50)
		{
			goto IL_016e;
		}
	}
	{
		t737* L_51 = V_1;
		if ((((int32_t)(((int32_t)(((t121 *)L_51)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_016e;
		}
	}
	{
		t737* L_52 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1664_TI));
		t1664 * L_53 = (t1664 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1664_TI));
		m8341(L_53, L_52, &m8341_MI);
		__this->f27 = L_53;
	}

IL_016e:
	{
		t1664 * L_54 = (__this->f27);
		if (!L_54)
		{
			goto IL_0184;
		}
	}
	{
		uint32_t L_55 = (__this->f16);
		__this->f16 = ((int32_t)((int32_t)L_55|(int32_t)1));
	}

IL_0184:
	{
		bool L_56 = p3;
		__this->f19 = L_56;
		t1664 * L_57 = (__this->f27);
		if (!L_57)
		{
			goto IL_0211;
		}
	}
	{
		t1664 * L_58 = (__this->f27);
		t737* L_59 = m8347(L_58, &m8347_MI);
		__this->f20 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_59)->max_length)))*(int32_t)2))));
		V_2 = 0;
		t1664 * L_60 = (__this->f27);
		t737* L_61 = m8347(L_60, &m8347_MI);
		V_4 = L_61;
		V_5 = 0;
		goto IL_0209;
	}

IL_01c5:
	{
		t737* L_62 = V_4;
		int32_t L_63 = V_5;
		int32_t L_64 = L_63;
		V_3 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_62, L_64));
		t2* L_65 = m5862((&V_3), (t2*) &_stringLiteral593, &m5862_MI);
		V_6 = L_65;
		t737* L_66 = (__this->f20);
		int32_t L_67 = V_2;
		int32_t L_68 = L_67;
		V_2 = ((int32_t)((int32_t)L_68+(int32_t)1));
		t2* L_69 = V_6;
		uint16_t L_70 = m2778(L_69, 0, &m2778_MI);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_66, L_68)) = (uint8_t)(((uint8_t)L_70));
		t737* L_71 = (__this->f20);
		int32_t L_72 = V_2;
		int32_t L_73 = L_72;
		V_2 = ((int32_t)((int32_t)L_73+(int32_t)1));
		t2* L_74 = V_6;
		uint16_t L_75 = m2778(L_74, 1, &m2778_MI);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_71, L_73)) = (uint8_t)(((uint8_t)L_75));
		int32_t L_76 = V_5;
		V_5 = ((int32_t)((int32_t)L_76+(int32_t)1));
	}

IL_0209:
	{
		int32_t L_77 = V_5;
		t737* L_78 = V_4;
		if ((((int32_t)L_77) < ((int32_t)(((int32_t)(((t121 *)L_78)->max_length))))))
		{
			goto IL_01c5;
		}
	}

IL_0211:
	{
		m9138(NULL, __this, &m9138_MI);
		return;
	}
}
extern "C" void m9138 (t9 * __this , t1750 * p0, MethodInfo* method)
{
	typedef void (*m9138_ftn) (t1750 *);
	static m9138_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9138_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.AssemblyBuilder::basic_init(System.Reflection.Emit.AssemblyBuilder)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m9139_MI;
extern "C" t2* m9139 (t1750 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9147(__this, &m9147_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9140_MI;
extern "C" t1755 * m9140 (t1750 * __this, t2* p0, bool p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p0;
		bool L_2 = p1;
		t1755 * L_3 = m9141(__this, L_0, L_1, L_2, 1, &m9141_MI);
		return L_3;
	}
}
extern TypeInfo* t1751_TI_var;
extern "C" t1755 * m9141 (t1750 * __this, t2* p0, t2* p1, bool p2, bool p3, MethodInfo* method)
{
	static bool m9141_init;
	if (!m9141_init)
	{
		t1751_TI_var = il2cpp_codegen_class_from_type(&t1751_0_0_0);
		m9141_init = true;
	}
	t1755 * V_0 = {0};
	t1751* V_1 = {0};
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		m9148(__this, L_0, L_1, 0, &m9148_MI);
		bool L_2 = p3;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		t2* L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_4 = m8993(NULL, L_3, &m8993_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_5 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_6 = m331(NULL, L_4, L_5, &m331_MI);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		t2* L_7 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = m399(NULL, (t2*) &_stringLiteral1716, L_7, (t2*) &_stringLiteral1717, &m399_MI);
		t570 * L_9 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_9, L_8, &m2949_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0035:
	{
		bool L_10 = m9144(__this, &m9144_MI);
		if (L_10)
		{
			goto IL_0048;
		}
	}
	{
		t169 * L_11 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_11, (t2*) &_stringLiteral1718, &m5776_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0048:
	{
		bool L_12 = (__this->f25);
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		t1347 * L_13 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_13, (t2*) &_stringLiteral1719, &m5755_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_005b:
	{
		t2* L_14 = p0;
		t2* L_15 = p1;
		bool L_16 = p2;
		bool L_17 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1755_TI));
		t1755 * L_18 = (t1755 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1755_TI));
		m9355(L_18, __this, L_14, L_15, L_16, L_17, &m9355_MI);
		V_0 = L_18;
		t1751* L_19 = (__this->f10);
		if (!L_19)
		{
			goto IL_0082;
		}
	}
	{
		bool L_20 = (__this->f26);
		if (!L_20)
		{
			goto IL_0082;
		}
	}
	{
		t1347 * L_21 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_21, (t2*) &_stringLiteral1720, &m5755_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_0082:
	{
		t1751* L_22 = (__this->f10);
		if (!L_22)
		{
			goto IL_00b7;
		}
	}
	{
		t1751* L_23 = (__this->f10);
		V_1 = ((t1751*)SZArrayNew(t1751_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_23)->max_length)))+(int32_t)1))));
		t1751* L_24 = (__this->f10);
		t1751* L_25 = V_1;
		t1751* L_26 = (__this->f10);
		m5982(NULL, (t121 *)(t121 *)L_24, (t121 *)(t121 *)L_25, (((int32_t)(((t121 *)L_26)->max_length))), &m5982_MI);
		t1751* L_27 = V_1;
		__this->f10 = L_27;
		goto IL_00c3;
	}

IL_00b7:
	{
		__this->f10 = ((t1751*)SZArrayNew(t1751_TI_var, 1));
	}

IL_00c3:
	{
		t1751* L_28 = (__this->f10);
		t1751* L_29 = (__this->f10);
		t1755 * L_30 = V_0;
		ArrayElementTypeCheck (L_28, L_30);
		*((t1755 **)(t1755 **)SZArrayLdElema(L_28, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_29)->max_length)))-(int32_t)1)))) = (t1755 *)L_30;
		t1755 * L_31 = V_0;
		return L_31;
	}
}
extern MethodInfo m9142_MI;
extern TypeInfo* t1756_TI_var;
extern "C" t1756* m9142 (t1750 * __this, MethodInfo* method)
{
	static bool m9142_init;
	if (!m9142_init)
	{
		t1756_TI_var = il2cpp_codegen_class_from_type(&t1756_0_0_0);
		m9142_init = true;
	}
	{
		t1751* L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((t1756*)SZArrayNew(t1756_TI_var, 0));
	}

IL_000f:
	{
		t1751* L_1 = (__this->f10);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_1);
		return ((t1756*)Castclass(L_2, t1756_TI_var));
	}
}
extern MethodInfo m9143_MI;
extern "C" bool m9143 (t1750 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f28);
		return L_0;
	}
}
extern "C" bool m9144 (t1750 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->f18);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9145_MI;
extern "C" bool m9145 (t1750 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		uint32_t L_0 = (__this->f18);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		uint32_t L_1 = (__this->f18);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
extern MethodInfo m9146_MI;
extern "C" t2* m9146 (t1750 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f12);
		return L_0;
	}
}
extern "C" t138 * m9147 (t1750 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_0, (t2*) &_stringLiteral1721, &m5776_MI);
		return L_0;
	}
}
extern "C" void m9148 (t1750 * __this, t2* p0, t2* p1, bool p2, MethodInfo* method)
{
	t2* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1722, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t2* L_4 = p0;
		int32_t L_5 = m2763(L_4, &m2763_MI);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		t570 * L_6 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_6, (t2*) &_stringLiteral1723, (t2*) &_stringLiteral2, &m5761_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0034:
	{
		t2* L_7 = p1;
		int32_t L_8 = m2763(L_7, &m2763_MI);
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		t570 * L_9 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_9, (t2*) &_stringLiteral1724, (t2*) &_stringLiteral1722, &m5761_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_004c:
	{
		t2* L_10 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_11 = m8994(NULL, L_10, &m8994_MI);
		t2* L_12 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_13 = m2777(NULL, L_11, L_12, &m2777_MI);
		if (!L_13)
		{
			goto IL_0075;
		}
	}
	{
		t2* L_14 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_15 = m399(NULL, (t2*) &_stringLiteral1725, L_14, (t2*) &_stringLiteral1726, &m399_MI);
		t570 * L_16 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_16, L_15, (t2*) &_stringLiteral1722, &m5761_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0075:
	{
		t2* L_17 = p1;
		V_0 = L_17;
		t2* L_18 = (__this->f12);
		if (!L_18)
		{
			goto IL_008c;
		}
	}
	{
		t2* L_19 = (__this->f12);
		t2* L_20 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_21 = m1124(NULL, L_19, L_20, &m1124_MI);
		V_0 = L_21;
	}

IL_008c:
	{
		bool L_22 = p2;
		if (!L_22)
		{
			goto IL_00ad;
		}
	}
	{
		t2* L_23 = V_0;
		bool L_24 = m1125(NULL, L_23, &m1125_MI);
		if (L_24)
		{
			goto IL_00ad;
		}
	}
	{
		t2* L_25 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_26 = m399(NULL, (t2*) &_stringLiteral1727, L_25, (t2*) &_stringLiteral136, &m399_MI);
		t1726 * L_27 = (t1726 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1726_TI));
		m8892(L_27, L_26, &m8892_MI);
		il2cpp_codegen_raise_exception(L_27);
	}

IL_00ad:
	{
		t1752* L_28 = (__this->f13);
		if (!L_28)
		{
			goto IL_0126;
		}
	}
	{
		V_1 = 0;
		goto IL_011b;
	}

IL_00b9:
	{
		t1752* L_29 = (__this->f13);
		int32_t L_30 = V_1;
		t2* L_31 = (((t1748 *)(t1748 *)SZArrayLdElema(L_29, L_30))->f2);
		t2* L_32 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_33 = m331(NULL, L_31, L_32, &m331_MI);
		if (!L_33)
		{
			goto IL_00e8;
		}
	}
	{
		t2* L_34 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_35 = m399(NULL, (t2*) &_stringLiteral1728, L_34, (t2*) &_stringLiteral136, &m399_MI);
		t570 * L_36 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_36, L_35, &m2949_MI);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_00e8:
	{
		t1752* L_37 = (__this->f13);
		int32_t L_38 = V_1;
		t2* L_39 = (((t1748 *)(t1748 *)SZArrayLdElema(L_37, L_38))->f1);
		t2* L_40 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_41 = m331(NULL, L_39, L_40, &m331_MI);
		if (!L_41)
		{
			goto IL_0117;
		}
	}
	{
		t2* L_42 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_43 = m399(NULL, (t2*) &_stringLiteral1729, L_42, (t2*) &_stringLiteral136, &m399_MI);
		t570 * L_44 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_44, L_43, &m2949_MI);
		il2cpp_codegen_raise_exception(L_44);
	}

IL_0117:
	{
		int32_t L_45 = V_1;
		V_1 = ((int32_t)((int32_t)L_45+(int32_t)1));
	}

IL_011b:
	{
		int32_t L_46 = V_1;
		t1752* L_47 = (__this->f13);
		if ((((int32_t)L_46) < ((int32_t)(((int32_t)(((t121 *)L_47)->max_length))))))
		{
			goto IL_00b9;
		}
	}

IL_0126:
	{
		t1751* L_48 = (__this->f10);
		if (!L_48)
		{
			goto IL_01a9;
		}
	}
	{
		V_2 = 0;
		goto IL_019e;
	}

IL_0135:
	{
		t1751* L_49 = (__this->f10);
		int32_t L_50 = V_2;
		int32_t L_51 = L_50;
		bool L_52 = m9359((*(t1755 **)(t1755 **)SZArrayLdElema(L_49, L_51)), &m9359_MI);
		if (L_52)
		{
			goto IL_016f;
		}
	}
	{
		t1751* L_53 = (__this->f10);
		int32_t L_54 = V_2;
		int32_t L_55 = L_54;
		t2* L_56 = m9379((*(t1755 **)(t1755 **)SZArrayLdElema(L_53, L_55)), &m9379_MI);
		t2* L_57 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_58 = m331(NULL, L_56, L_57, &m331_MI);
		if (!L_58)
		{
			goto IL_016f;
		}
	}
	{
		t2* L_59 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_60 = m399(NULL, (t2*) &_stringLiteral1728, L_59, (t2*) &_stringLiteral136, &m399_MI);
		t570 * L_61 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_61, L_60, &m2949_MI);
		il2cpp_codegen_raise_exception(L_61);
	}

IL_016f:
	{
		t1751* L_62 = (__this->f10);
		int32_t L_63 = V_2;
		int32_t L_64 = L_63;
		t2* L_65 = m9607((*(t1755 **)(t1755 **)SZArrayLdElema(L_62, L_64)), &m9607_MI);
		t2* L_66 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_67 = m331(NULL, L_65, L_66, &m331_MI);
		if (!L_67)
		{
			goto IL_019a;
		}
	}
	{
		t2* L_68 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_69 = m399(NULL, (t2*) &_stringLiteral1729, L_68, (t2*) &_stringLiteral136, &m399_MI);
		t570 * L_70 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_70, L_69, &m2949_MI);
		il2cpp_codegen_raise_exception(L_70);
	}

IL_019a:
	{
		int32_t L_71 = V_2;
		V_2 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_019e:
	{
		int32_t L_72 = V_2;
		t1751* L_73 = (__this->f10);
		if ((((int32_t)L_72) < ((int32_t)(((int32_t)(((t121 *)L_73)->max_length))))))
		{
			goto IL_0135;
		}
	}

IL_01a9:
	{
		return;
	}
}
extern MethodInfo m9149_MI;
extern "C" t1754 * m9149 (t1750 * __this, MethodInfo* method)
{
	t1754 * V_0 = {0};
	{
		t1754 * L_0 = m9502(__this, &m9502_MI);
		V_0 = L_0;
		t1664 * L_1 = (__this->f27);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		t1754 * L_2 = V_0;
		t1664 * L_3 = (__this->f27);
		t737* L_4 = m8346(L_3, &m8346_MI);
		m9528(L_2, L_4, &m9528_MI);
		t1754 * L_5 = V_0;
		t1664 * L_6 = (__this->f27);
		t737* L_7 = m8347(L_6, &m8347_MI);
		m9529(L_5, L_7, &m9529_MI);
	}

IL_0031:
	{
		t1754 * L_8 = V_0;
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1757MD.h"



#include "t1758.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1758_TI;
#include "t1758MD.h"

#include "t1579.h"
#include "t1760.h"
#include "t1764.h"
#include "t1763.h"
#include "t833.h"
#include "t567.h"
#include "t1765.h"
#include "t930.h"
#include "t1796.h"
#include "t931.h"
#include "t939.h"
#include "t1759.h"
extern TypeInfo t833_TI;
extern TypeInfo t567_TI;
extern TypeInfo t1760_TI;
extern TypeInfo t152_TI;
extern TypeInfo t934_TI;
extern TypeInfo t930_TI;
extern TypeInfo t2135_TI;
extern TypeInfo t1759_TI;
extern TypeInfo t1765_TI;
#include "t833MD.h"
#include "t567MD.h"
#include "t1760MD.h"
#include "t1765MD.h"
#include "t930MD.h"
#include "t2135MD.h"
#include "t1759MD.h"
extern Il2CppType t152_0_0_0;
extern Il2CppType t934_0_0_0;
extern MethodInfo m9173_MI;
extern MethodInfo m7854_MI;
extern MethodInfo m9152_MI;
extern MethodInfo m9432_MI;
extern MethodInfo m9606_MI;
extern MethodInfo m9553_MI;
extern MethodInfo m9171_MI;
extern MethodInfo m9168_MI;
extern MethodInfo m9354_MI;
extern MethodInfo m9377_MI;
extern MethodInfo m9470_MI;
extern MethodInfo m9172_MI;
extern MethodInfo m9174_MI;
extern MethodInfo m9154_MI;
extern MethodInfo m9739_MI;
extern MethodInfo m11645_MI;
extern MethodInfo m11644_MI;
extern MethodInfo m9167_MI;
extern MethodInfo m9378_MI;
extern MethodInfo m9291_MI;
extern MethodInfo m9350_MI;
extern MethodInfo m9433_MI;
extern MethodInfo m9468_MI;


extern MethodInfo m9150_MI;
extern TypeInfo* t152_TI_var;
extern "C" void m9150 (t1758 * __this, t1760 * p0, int32_t p1, int32_t p2, t152* p3, t1762* p4, t1762* p5, MethodInfo* method)
{
	static bool m9150_init;
	if (!m9150_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9150_init = true;
	}
	int32_t V_0 = 0;
	t1765  V_1 = {0};
	{
		__this->f9 = 1;
		m9553(__this, &m9553_MI);
		int32_t L_0 = p1;
		__this->f4 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0|(int32_t)((int32_t)2048)))|(int32_t)((int32_t)4096)));
		int32_t L_1 = p2;
		__this->f6 = L_1;
		t152* L_2 = p3;
		if (!L_2)
		{
			goto IL_0070;
		}
	}
	{
		V_0 = 0;
		goto IL_0049;
	}

IL_002f:
	{
		t152* L_3 = p3;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		if ((*(t126 **)(t126 **)SZArrayLdElema(L_3, L_5)))
		{
			goto IL_0045;
		}
	}
	{
		t570 * L_6 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_6, (t2*) &_stringLiteral1730, (t2*) &_stringLiteral1731, &m5761_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0045:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_8 = V_0;
		t152* L_9 = p3;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((t121 *)L_9)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		t152* L_10 = p3;
		__this->f3 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_10)->max_length)))));
		t152* L_11 = p3;
		t152* L_12 = (__this->f3);
		t152* L_13 = p3;
		m5982(NULL, (t121 *)(t121 *)L_11, (t121 *)(t121 *)L_12, (((int32_t)(((t121 *)L_13)->max_length))), &m5982_MI);
	}

IL_0070:
	{
		t1760 * L_14 = p0;
		__this->f7 = L_14;
		t1762* L_15 = p4;
		__this->f10 = L_15;
		t1762* L_16 = p5;
		__this->f11 = L_16;
		int32_t L_17 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, bool >::Invoke(&m9171_MI, __this, __this, 6, 1);
		__this->f5 = L_17;
		t1760 * L_18 = p0;
		t1574 * L_19 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m9432_MI, L_18);
		t1765  L_20 = m9168(__this, &m9168_MI);
		V_1 = L_20;
		int32_t L_21 = m9354((&V_1), &m9354_MI);
		m9377(((t1755 *)Castclass(L_19, InitializedTypeInfo(&t1755_TI))), __this, L_21, &m9377_MI);
		return;
	}
}
extern MethodInfo m9151_MI;
extern "C" int32_t m9151 (t1758 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" t1760 * m9152 (t1758 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9153_MI;
extern "C" t934* m9153 (t1758 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f7);
		bool L_1 = m9470(L_0, &m9470_MI);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = m9172(__this, &m9172_MI);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t138 * L_3 = m9174(__this, &m9174_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t934* L_4 = m9154(__this, &m9154_MI);
		return L_4;
	}
}
extern TypeInfo* t934_TI_var;
extern "C" t934* m9154 (t1758 * __this, MethodInfo* method)
{
	static bool m9154_init;
	if (!m9154_init)
	{
		t934_TI_var = il2cpp_codegen_class_from_type(&t934_0_0_0);
		m9154_init = true;
	}
	t934* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	t934* G_B5_1 = {0};
	int32_t G_B4_0 = 0;
	t934* G_B4_1 = {0};
	t1796 * G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t934* G_B6_2 = {0};
	{
		t152* L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((t934*)SZArrayNew(t934_TI_var, 0));
	}

IL_000f:
	{
		t152* L_1 = (__this->f3);
		V_0 = ((t934*)SZArrayNew(t934_TI_var, (((int32_t)(((t121 *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		t934* L_2 = V_0;
		int32_t L_3 = V_1;
		t1761* L_4 = (__this->f8);
		G_B4_0 = L_3;
		G_B4_1 = L_2;
		if (L_4)
		{
			G_B5_0 = L_3;
			G_B5_1 = L_2;
			goto IL_002e;
		}
	}
	{
		G_B6_0 = ((t1796 *)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0038;
	}

IL_002e:
	{
		t1761* L_5 = (__this->f8);
		int32_t L_6 = V_1;
		int32_t L_7 = ((int32_t)((int32_t)L_6+(int32_t)1));
		G_B6_0 = (*(t1796 **)(t1796 **)SZArrayLdElema(L_5, L_7));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0038:
	{
		t152* L_8 = (__this->f3);
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		int32_t L_11 = V_1;
		t930 * L_12 = (t930 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t930_TI));
		m9739(L_12, G_B6_0, (*(t126 **)(t126 **)SZArrayLdElema(L_8, L_10)), __this, ((int32_t)((int32_t)L_11+(int32_t)1)), &m9739_MI);
		ArrayElementTypeCheck (G_B6_2, L_12);
		*((t930 **)(t930 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (t930 *)L_12;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_14 = V_1;
		t152* L_15 = (__this->f3);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((t121 *)L_15)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		t934* L_16 = V_0;
		return L_16;
	}
}
extern MethodInfo m9155_MI;
extern "C" int32_t m9155 (t1758 * __this, MethodInfo* method)
{
	{
		t152* L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		t152* L_1 = (__this->f3);
		return (((int32_t)(((t121 *)L_1)->max_length)));
	}
}
extern MethodInfo m9156_MI;
extern "C" t9 * m9156 (t1758 * __this, t9 * p0, int32_t p1, t939 * p2, t158* p3, t907 * p4, MethodInfo* method)
{
	{
		t138 * L_0 = m9173(__this, &m9173_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9157_MI;
extern "C" t9 * m9157 (t1758 * __this, int32_t p0, t939 * p1, t158* p2, t907 * p3, MethodInfo* method)
{
	{
		t138 * L_0 = m9173(__this, &m9173_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9158_MI;
extern "C" t1764  m9158 (t1758 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9173(__this, &m9173_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9159_MI;
extern "C" int32_t m9159 (t1758 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9160_MI;
extern "C" t126 * m9160 (t1758 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9161_MI;
extern "C" t126 * m9161 (t1758 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9162_MI;
extern "C" t2* m9162 (t1758 * __this, MethodInfo* method)
{
	t2* G_B3_0 = {0};
	{
		int32_t L_0 = (__this->f4);
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)16))))
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t833_TI));
		t2* L_1 = ((t833_SFs*)InitializedTypeInfo(&t833_TI)->static_fields)->f1;
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t833_TI));
		t2* L_2 = ((t833_SFs*)InitializedTypeInfo(&t833_TI)->static_fields)->f0;
		G_B3_0 = L_2;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
extern MethodInfo m9163_MI;
extern "C" bool m9163 (t1758 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9173(__this, &m9173_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9164_MI;
extern "C" t158* m9164 (t1758 * __this, bool p0, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f7);
		bool L_1 = m9470(L_0, &m9470_MI);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = m9172(__this, &m9172_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_4 = m11645(NULL, __this, L_3, &m11645_MI);
		return L_4;
	}

IL_001d:
	{
		t138 * L_5 = m9173(__this, &m9173_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m9165_MI;
extern "C" t158* m9165 (t1758 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f7);
		bool L_1 = m9470(L_0, &m9470_MI);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		bool L_2 = m9172(__this, &m9172_MI);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		t126 * L_3 = p0;
		bool L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_5 = m11644(NULL, __this, L_3, L_4, &m11644_MI);
		return L_5;
	}

IL_001e:
	{
		t138 * L_6 = m9173(__this, &m9173_MI);
		il2cpp_codegen_raise_exception(L_6);
	}
}
extern MethodInfo m9166_MI;
extern "C" t1759 * m9166 (t1758 * __this, MethodInfo* method)
{
	{
		t1759 * L_0 = m9167(__this, ((int32_t)64), &m9167_MI);
		return L_0;
	}
}
extern "C" t1759 * m9167 (t1758 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1759 * L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1759 * L_1 = (__this->f2);
		return L_1;
	}

IL_000f:
	{
		t1760 * L_2 = (__this->f7);
		t1574 * L_3 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m9432_MI, L_2);
		t1760 * L_4 = (__this->f7);
		t1574 * L_5 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m9432_MI, L_4);
		t9 * L_6 = m9378(((t1755 *)Castclass(L_5, InitializedTypeInfo(&t1755_TI))), &m9378_MI);
		int32_t L_7 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1759_TI));
		t1759 * L_8 = (t1759 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1759_TI));
		m9291(L_8, L_3, L_6, L_7, &m9291_MI);
		__this->f2 = L_8;
		t1759 * L_9 = (__this->f2);
		return L_9;
	}
}
extern "C" t1765  m9168 (t1758 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		t1765  L_1 = {0};
		m9350(&L_1, ((int32_t)((int32_t)((int32_t)100663296)|(int32_t)L_0)), &m9350_MI);
		return L_1;
	}
}
extern MethodInfo m9169_MI;
extern "C" t1574 * m9169 (t1758 * __this, MethodInfo* method)
{
	{
		t1574 * L_0 = m7854(__this, &m7854_MI);
		return L_0;
	}
}
extern MethodInfo m9170_MI;
extern "C" t2* m9170 (t1758 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f7);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9433_MI, L_0);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m399(NULL, (t2*) &_stringLiteral1732, L_1, (t2*) &_stringLiteral1733, &m399_MI);
		return L_2;
	}
}
extern "C" int32_t m9171 (t1758 * __this, t9 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f7);
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = p2;
		int32_t L_4 = m9468(L_0, L_1, L_2, L_3, &m9468_MI);
		return L_4;
	}
}
extern "C" bool m9172 (t1758 * __this, MethodInfo* method)
{
	t1755 * V_0 = {0};
	t1750 * V_1 = {0};
	{
		t1760 * L_0 = m9152(__this, &m9152_MI);
		t1574 * L_1 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m9432_MI, L_0);
		V_0 = ((t1755 *)Castclass(L_1, InitializedTypeInfo(&t1755_TI)));
		t1755 * L_2 = V_0;
		t1351 * L_3 = m9606(L_2, &m9606_MI);
		V_1 = ((t1750 *)Castclass(L_3, InitializedTypeInfo(&t1750_TI)));
		t1750 * L_4 = V_1;
		bool L_5 = m9143(L_4, &m9143_MI);
		return L_5;
	}
}
extern "C" t138 * m9173 (t1758 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_0, (t2*) &_stringLiteral1721, &m5776_MI);
		return L_0;
	}
}
extern "C" t138 * m9174 (t1758 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_0, (t2*) &_stringLiteral1734, &m5776_MI);
		return L_0;
	}
}
#include "t1766.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1766_TI;
#include "t1766MD.h"

#include "t835.h"
#include "t1352.h"
#include "t2129.h"
#include "t1767.h"
#include "t920.h"
#include "t1831.h"
extern TypeInfo t58_TI;
extern TypeInfo t1352_TI;
extern TypeInfo t1767_TI;
extern TypeInfo t920_TI;
extern TypeInfo t1831_TI;
extern TypeInfo t2129_TI;
extern TypeInfo t221_TI;
#include "t1764MD.h"
#include "t1352MD.h"
#include "t1767MD.h"
#include "t920MD.h"
#include "t1831MD.h"
extern Il2CppType t221_0_0_0;
extern MethodInfo m11830_MI;
extern MethodInfo m4502_MI;
extern MethodInfo m9315_MI;
extern MethodInfo m9314_MI;
extern MethodInfo m9177_MI;
extern MethodInfo m9175_MI;
extern MethodInfo m9176_MI;
extern MethodInfo m11708_MI;
extern MethodInfo m9664_MI;
extern MethodInfo m4459_MI;
extern MethodInfo m9771_MI;
extern MethodInfo m9182_MI;
extern MethodInfo m4466_MI;
extern MethodInfo m4433_MI;
extern MethodInfo m9193_MI;
extern MethodInfo m9191_MI;
extern MethodInfo m4335_MI;


extern "C" void m9175 (t1766 * __this, t1766 * p0, MethodInfo* method)
{
	typedef void (*m9175_ftn) (t1766 *, t1766 *);
	static m9175_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9175_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.DynamicMethod::create_dynamic_method(System.Reflection.Emit.DynamicMethod)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m9176 (t1766 * __this, t1766 * p0, MethodInfo* method)
{
	typedef void (*m9176_ftn) (t1766 *, t1766 *);
	static m9176_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9176_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.DynamicMethod::destroy_dynamic_method(System.Reflection.Emit.DynamicMethod)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m9177 (t1766 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	t1766 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1764 * L_0 = &(__this->f0);
		t58 L_1 = m11830(L_0, &m11830_MI);
		t58 L_2 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_3 = m4502(NULL, L_1, L_2, &m4502_MI);
		if (!L_3)
		{
			goto IL_00b3;
		}
	}
	{
		t1759 * L_4 = (__this->f7);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		t1759 * L_5 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1759_TI));
		int32_t L_6 = m9315(NULL, L_5, &m9315_MI);
		if (L_6)
		{
			goto IL_004a;
		}
	}

IL_002f:
	{
		t2* L_7 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = m399(NULL, (t2*) &_stringLiteral1735, L_7, (t2*) &_stringLiteral1736, &m399_MI);
		t1347 * L_9 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_9, L_8, &m5755_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_004a:
	{
		t1759 * L_10 = (__this->f7);
		m9314(L_10, &m9314_MI);
	}

IL_0055:
	try
	{ // begin try (depth: 1)
		{
			__this->f11 = 1;
			t158* L_11 = (__this->f8);
			if (!L_11)
			{
				goto IL_00a2;
			}
		}

IL_0064:
		{
			V_0 = 0;
			goto IL_0097;
		}

IL_0068:
		{
			t158* L_12 = (__this->f8);
			int32_t L_13 = V_0;
			int32_t L_14 = L_13;
			if (!((t1766 *)IsInst((*(t9 **)(t9 **)SZArrayLdElema(L_12, L_14)), InitializedTypeInfo(&t1766_TI))))
			{
				goto IL_0093;
			}
		}

IL_0077:
		{
			t158* L_15 = (__this->f8);
			int32_t L_16 = V_0;
			int32_t L_17 = L_16;
			V_1 = ((t1766 *)Castclass((*(t9 **)(t9 **)SZArrayLdElema(L_15, L_17)), InitializedTypeInfo(&t1766_TI)));
			t1766 * L_18 = V_1;
			bool L_19 = (L_18->f11);
			if (L_19)
			{
				goto IL_0093;
			}
		}

IL_008d:
		{
			t1766 * L_20 = V_1;
			m9177(L_20, &m9177_MI);
		}

IL_0093:
		{
			int32_t L_21 = V_0;
			V_0 = ((int32_t)((int32_t)L_21+(int32_t)1));
		}

IL_0097:
		{
			int32_t L_22 = V_0;
			t158* L_23 = (__this->f8);
			if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((t121 *)L_23)->max_length))))))
			{
				goto IL_0068;
			}
		}

IL_00a2:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_00a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_00a4;
	}

FINALLY_00a4:
	{ // begin finally (depth: 1)
		__this->f11 = 0;
		IL2CPP_END_FINALLY(164)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(164)
	{
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_00ac:
	{
		m9175(__this, __this, &m9175_MI);
	}

IL_00b3:
	{
		return;
	}
}
extern MethodInfo m9178_MI;
extern "C" void m9178 (t1766 * __this, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		m9176(__this, __this, &m9176_MI);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0010:
	{
		return;
	}
}
extern MethodInfo m9179_MI;
extern "C" t835 * m9179 (t1766 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m9180_MI;
extern "C" t158* m9180 (t1766 * __this, bool p0, MethodInfo* method)
{
	{
		t1352 * L_0 = (t1352 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1352_TI));
		m11708(L_0, &m11708_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9181_MI;
extern "C" t158* m9181 (t1766 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1352 * L_0 = (t1352 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1352_TI));
		m11708(L_0, &m11708_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t934_TI_var;
extern "C" t934* m9182 (t1766 * __this, MethodInfo* method)
{
	static bool m9182_init;
	if (!m9182_init)
	{
		t934_TI_var = il2cpp_codegen_class_from_type(&t934_0_0_0);
		m9182_init = true;
	}
	t934* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	t934* G_B5_1 = {0};
	int32_t G_B4_0 = 0;
	t934* G_B4_1 = {0};
	t1796 * G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t934* G_B6_2 = {0};
	{
		t152* L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((t934*)SZArrayNew(t934_TI_var, 0));
	}

IL_000f:
	{
		t152* L_1 = (__this->f3);
		V_0 = ((t934*)SZArrayNew(t934_TI_var, (((int32_t)(((t121 *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		t934* L_2 = V_0;
		int32_t L_3 = V_1;
		t1761* L_4 = (__this->f10);
		G_B4_0 = L_3;
		G_B4_1 = L_2;
		if (L_4)
		{
			G_B5_0 = L_3;
			G_B5_1 = L_2;
			goto IL_002e;
		}
	}
	{
		G_B6_0 = ((t1796 *)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0038;
	}

IL_002e:
	{
		t1761* L_5 = (__this->f10);
		int32_t L_6 = V_1;
		int32_t L_7 = ((int32_t)((int32_t)L_6+(int32_t)1));
		G_B6_0 = (*(t1796 **)(t1796 **)SZArrayLdElema(L_5, L_7));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0038:
	{
		t152* L_8 = (__this->f3);
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		int32_t L_11 = V_1;
		t930 * L_12 = (t930 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t930_TI));
		m9739(L_12, G_B6_0, (*(t126 **)(t126 **)SZArrayLdElema(L_8, L_10)), __this, ((int32_t)((int32_t)L_11+(int32_t)1)), &m9739_MI);
		ArrayElementTypeCheck (G_B6_2, L_12);
		*((t930 **)(t930 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (t930 *)L_12;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_14 = V_1;
		t152* L_15 = (__this->f3);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((t121 *)L_15)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		t934* L_16 = V_0;
		return L_16;
	}
}
extern MethodInfo m9183_MI;
extern "C" t9 * m9183 (t1766 * __this, t9 * p0, int32_t p1, t939 * p2, t158* p3, t907 * p4, MethodInfo* method)
{
	t2129 * V_0 = {0};
	t9 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			m9177(__this, &m9177_MI);
			t1767 * L_0 = (__this->f9);
			if (L_0)
			{
				goto IL_001f;
			}
		}

IL_000e:
		{
			t1764  L_1 = (__this->f0);
			t1767 * L_2 = (t1767 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1767_TI));
			m9664(L_2, L_1, &m9664_MI);
			__this->f9 = L_2;
		}

IL_001f:
		{
			t1767 * L_3 = (__this->f9);
			t9 * L_4 = p0;
			t158* L_5 = p3;
			t9 * L_6 = (t9 *)VirtFuncInvoker2< t9 *, t9 *, t158* >::Invoke(&m4459_MI, L_3, L_4, L_5);
			V_1 = L_6;
			goto IL_0041;
		}

IL_0030:
		{
			goto IL_0041;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t2129_TI, e.ex->object.klass))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.MethodAccessException)
		V_0 = ((t2129 *)__exception_local);
		t2129 * L_7 = V_0;
		t1831 * L_8 = (t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1831_TI));
		m9771(L_8, (t2*) &_stringLiteral1737, L_7, &m9771_MI);
		il2cpp_codegen_raise_exception(L_8);
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		t9 * L_9 = V_1;
		return L_9;
	}
}
extern MethodInfo m9184_MI;
extern "C" bool m9184 (t1766 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1352 * L_0 = (t1352 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1352_TI));
		m11708(L_0, &m11708_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9185_MI;
extern TypeInfo* t221_TI_var;
extern "C" t2* m9185 (t1766 * __this, MethodInfo* method)
{
	static bool m9185_init;
	if (!m9185_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9185_init = true;
	}
	t2* V_0 = {0};
	t934* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		V_0 = L_0;
		t934* L_1 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m9182_MI, __this);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0039;
	}

IL_0011:
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		t2* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m610(NULL, L_3, (t2*) &_stringLiteral384, &m610_MI);
		V_0 = L_4;
	}

IL_0021:
	{
		t2* L_5 = V_0;
		t934* L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		t126 * L_9 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_6, L_8)));
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_9);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = m610(NULL, L_5, L_10, &m610_MI);
		V_0 = L_11;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_13 = V_2;
		t934* L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((t121 *)L_14)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		t221* L_15 = ((t221*)SZArrayNew(t221_TI_var, 6));
		t126 * L_16 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9193_MI, __this);
		t2* L_17 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_16);
		ArrayElementTypeCheck (L_15, L_17);
		*((t2**)(t2**)SZArrayLdElema(L_15, 0)) = (t2*)L_17;
		t221* L_18 = L_15;
		ArrayElementTypeCheck (L_18, (t2*) &_stringLiteral163);
		*((t2**)(t2**)SZArrayLdElema(L_18, 1)) = (t2*)(t2*) &_stringLiteral163;
		t221* L_19 = L_18;
		t2* L_20 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9191_MI, __this);
		ArrayElementTypeCheck (L_19, L_20);
		*((t2**)(t2**)SZArrayLdElema(L_19, 2)) = (t2*)L_20;
		t221* L_21 = L_19;
		ArrayElementTypeCheck (L_21, (t2*) &_stringLiteral383);
		*((t2**)(t2**)SZArrayLdElema(L_21, 3)) = (t2*)(t2*) &_stringLiteral383;
		t221* L_22 = L_21;
		t2* L_23 = V_0;
		ArrayElementTypeCheck (L_22, L_23);
		*((t2**)(t2**)SZArrayLdElema(L_22, 4)) = (t2*)L_23;
		t221* L_24 = L_22;
		ArrayElementTypeCheck (L_24, (t2*) &_stringLiteral143);
		*((t2**)(t2**)SZArrayLdElema(L_24, 5)) = (t2*)(t2*) &_stringLiteral143;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_25 = m4335(NULL, L_24, &m4335_MI);
		return L_25;
	}
}
extern MethodInfo m9186_MI;
extern "C" int32_t m9186 (t1766 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9187_MI;
extern "C" int32_t m9187 (t1766 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m9188_MI;
extern "C" t126 * m9188 (t1766 * __this, MethodInfo* method)
{
	{
		return (t126 *)NULL;
	}
}
extern MethodInfo m9189_MI;
extern "C" t1764  m9189 (t1766 * __this, MethodInfo* method)
{
	{
		t1764  L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9190_MI;
extern "C" t1574 * m9190 (t1766 * __this, MethodInfo* method)
{
	{
		t1574 * L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" t2* m9191 (t1766 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9192_MI;
extern "C" t126 * m9192 (t1766 * __this, MethodInfo* method)
{
	{
		return (t126 *)NULL;
	}
}
extern "C" t126 * m9193 (t1766 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f2);
		return L_0;
	}
}
#include "t1768.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1768_TI;
#include "t1768MD.h"

#include "t1577.h"
#include "t940.h"
#include "t1575.h"
#include "t837.h"
#include "t844.h"
extern TypeInfo t127_TI;
extern TypeInfo t931_TI;
extern TypeInfo t939_TI;
extern TypeInfo t1579_TI;
extern TypeInfo t941_TI;
extern TypeInfo t940_TI;
extern TypeInfo t932_TI;
extern TypeInfo t1575_TI;
extern TypeInfo t837_TI;
extern TypeInfo t936_TI;
extern TypeInfo t835_TI;
extern TypeInfo t1576_TI;
extern TypeInfo t935_TI;
extern TypeInfo t844_TI;
extern MethodInfo m9425_MI;
extern MethodInfo m9426_MI;
extern MethodInfo m9427_MI;
extern MethodInfo m9428_MI;
extern MethodInfo m9431_MI;
extern MethodInfo m9434_MI;
extern MethodInfo m9435_MI;
extern MethodInfo m9467_MI;
extern MethodInfo m7839_MI;
extern MethodInfo m9447_MI;
extern MethodInfo m9438_MI;
extern MethodInfo m9439_MI;
extern MethodInfo m9449_MI;
extern MethodInfo m9450_MI;
extern MethodInfo m9451_MI;
extern MethodInfo m9452_MI;
extern MethodInfo m9453_MI;
extern MethodInfo m7824_MI;
extern MethodInfo m7826_MI;
extern MethodInfo m9455_MI;
extern MethodInfo m9457_MI;
extern MethodInfo m9227_MI;
extern MethodInfo m7791_MI;
extern MethodInfo m9460_MI;
extern MethodInfo m9437_MI;


extern MethodInfo m9194_MI;
extern "C" t1351 * m9194 (t1768 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t1351 * L_1 = (t1351 *)VirtFuncInvoker0< t1351 * >::Invoke(&m9425_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9195_MI;
extern "C" t2* m9195 (t1768 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9426_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9196_MI;
extern "C" t126 * m9196 (t1768 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9427_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9197_MI;
extern "C" t126 * m9197 (t1768 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9428_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9198_MI;
extern "C" t2* m9198 (t1768 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9431_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9199_MI;
extern "C" t1574 * m9199 (t1768 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t1574 * L_1 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m9432_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9200_MI;
extern "C" t2* m9200 (t1768 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9433_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9201_MI;
extern "C" t2* m9201 (t1768 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9434_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9202_MI;
extern "C" t126 * m9202 (t1768 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9435_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9203_MI;
extern "C" t127  m9203 (t1768 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t127  L_1 = (t127 )VirtFuncInvoker0< t127  >::Invoke(&m9467_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9204_MI;
extern "C" t126 * m9204 (t1768 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m9205_MI;
extern "C" int32_t m9205 (t1768 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		int32_t L_1 = (L_0->f19);
		return L_1;
	}
}
extern MethodInfo m9206_MI;
extern "C" t833 * m9206 (t1768 * __this, int32_t p0, t939 * p1, int32_t p2, t152* p3, t941* p4, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t939 * L_2 = p1;
		int32_t L_3 = p2;
		t152* L_4 = p3;
		t941* L_5 = p4;
		t833 * L_6 = (t833 *)VirtFuncInvoker5< t833 *, int32_t, t939 *, int32_t, t152*, t941* >::Invoke(&m7839_MI, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
extern MethodInfo m9207_MI;
extern "C" t932* m9207 (t1768 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t932* L_2 = (t932*)VirtFuncInvoker1< t932*, int32_t >::Invoke(&m9447_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9208_MI;
extern "C" t158* m9208 (t1768 * __this, bool p0, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		bool L_1 = p0;
		t158* L_2 = (t158*)VirtFuncInvoker1< t158*, bool >::Invoke(&m9438_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9209_MI;
extern "C" t158* m9209 (t1768 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t126 * L_1 = p0;
		bool L_2 = p1;
		t158* L_3 = (t158*)VirtFuncInvoker2< t158*, t126 *, bool >::Invoke(&m9439_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9210_MI;
extern "C" t126 * m9210 (t1768 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9449_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9211_MI;
extern "C" t1575 * m9211 (t1768 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t1575 * L_3 = (t1575 *)VirtFuncInvoker2< t1575 *, t2*, int32_t >::Invoke(&m9450_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9212_MI;
extern "C" t837 * m9212 (t1768 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t837 * L_3 = (t837 *)VirtFuncInvoker2< t837 *, t2*, int32_t >::Invoke(&m9451_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9213_MI;
extern "C" t936* m9213 (t1768 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t936* L_2 = (t936*)VirtFuncInvoker1< t936*, int32_t >::Invoke(&m9452_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9214_MI;
extern "C" t152* m9214 (t1768 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t152* L_1 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9453_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9215_MI;
extern "C" t835 * m9215 (t1768 * __this, t2* p0, int32_t p1, t939 * p2, int32_t p3, t152* p4, t941* p5, MethodInfo* method)
{
	{
		t152* L_0 = p4;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		t1760 * L_1 = (__this->f8);
		t2* L_2 = p0;
		int32_t L_3 = p1;
		t835 * L_4 = (t835 *)VirtFuncInvoker2< t835 *, t2*, int32_t >::Invoke(&m7824_MI, L_1, L_2, L_3);
		return L_4;
	}

IL_0012:
	{
		t1760 * L_5 = (__this->f8);
		t2* L_6 = p0;
		int32_t L_7 = p1;
		t939 * L_8 = p2;
		int32_t L_9 = p3;
		t152* L_10 = p4;
		t941* L_11 = p5;
		t835 * L_12 = (t835 *)VirtFuncInvoker6< t835 *, t2*, int32_t, t939 *, int32_t, t152*, t941* >::Invoke(&m7826_MI, L_5, L_6, L_7, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
extern MethodInfo m9216_MI;
extern "C" t1576* m9216 (t1768 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t1576* L_2 = (t1576*)VirtFuncInvoker1< t1576*, int32_t >::Invoke(&m9455_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9217_MI;
extern "C" t935* m9217 (t1768 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t935* L_2 = (t935*)VirtFuncInvoker1< t935*, int32_t >::Invoke(&m9457_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9218_MI;
extern "C" t844 * m9218 (t1768 * __this, t2* p0, int32_t p1, t939 * p2, t126 * p3, t152* p4, t941* p5, MethodInfo* method)
{
	{
		t138 * L_0 = m9227(__this, &m9227_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9219_MI;
extern "C" bool m9219 (t1768 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7791_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9220_MI;
extern "C" t9 * m9220 (t1768 * __this, t2* p0, int32_t p1, t939 * p2, t9 * p3, t158* p4, t941* p5, t907 * p6, t221* p7, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t939 * L_3 = p2;
		t9 * L_4 = p3;
		t158* L_5 = p4;
		t941* L_6 = p5;
		t907 * L_7 = p6;
		t221* L_8 = p7;
		t9 * L_9 = (t9 *)VirtFuncInvoker8< t9 *, t2*, int32_t, t939 *, t9 *, t158*, t941*, t907 *, t221* >::Invoke(&m9460_MI, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
extern MethodInfo m9221_MI;
extern "C" bool m9221 (t1768 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9222_MI;
extern "C" bool m9222 (t1768 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9223_MI;
extern "C" bool m9223 (t1768 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9224_MI;
extern "C" bool m9224 (t1768 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9225_MI;
extern "C" bool m9225 (t1768 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m9226_MI;
extern "C" bool m9226 (t1768 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t126 * L_1 = p0;
		bool L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker2< bool, t126 *, bool >::Invoke(&m9437_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern "C" t138 * m9227 (t1768 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_0, (t2*) &_stringLiteral1721, &m5776_MI);
		return L_0;
	}
}
#include "t1769.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1769_TI;
#include "t1769MD.h"

#include "t1771.h"
#include "t1770.h"
extern MethodInfo m9241_MI;


extern MethodInfo m9228_MI;
extern "C" int32_t m9228 (t1769 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9229_MI;
extern "C" t126 * m9229 (t1769 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9230_MI;
extern "C" t319  m9230 (t1769 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9241(__this, &m9241_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9231_MI;
extern "C" t126 * m9231 (t1769 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9232_MI;
extern "C" t2* m9232 (t1769 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9233_MI;
extern "C" t126 * m9233 (t1769 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9234_MI;
extern "C" t158* m9234 (t1769 * __this, bool p0, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f3);
		bool L_1 = m9470(L_0, &m9470_MI);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_3 = m11645(NULL, __this, L_2, &m11645_MI);
		return L_3;
	}

IL_0015:
	{
		t138 * L_4 = m9241(__this, &m9241_MI);
		il2cpp_codegen_raise_exception(L_4);
	}
}
extern MethodInfo m9235_MI;
extern "C" t158* m9235 (t1769 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f3);
		bool L_1 = m9470(L_0, &m9470_MI);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t126 * L_2 = p0;
		bool L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_4 = m11644(NULL, __this, L_2, L_3, &m11644_MI);
		return L_4;
	}

IL_0016:
	{
		t138 * L_5 = m9241(__this, &m9241_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m9236_MI;
extern "C" t9 * m9236 (t1769 * __this, t9 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9241(__this, &m9241_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9237_MI;
extern "C" bool m9237 (t1769 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9241(__this, &m9241_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9238_MI;
extern "C" int32_t m9238 (t1769 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9239_MI;
extern "C" void m9239 (t1769 * __this, t9 * p0, t9 * p1, int32_t p2, t939 * p3, t907 * p4, MethodInfo* method)
{
	{
		t138 * L_0 = m9241(__this, &m9241_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9240_MI;
extern "C" t1770 * m9240 (t1769 * __this, MethodInfo* method)
{
	{
		t1770 * L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t138 * m9241 (t1769 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_0, (t2*) &_stringLiteral1721, &m5776_MI);
		return L_0;
	}
}
extern MethodInfo m9242_MI;
extern "C" t1574 * m9242 (t1769 * __this, MethodInfo* method)
{
	{
		t1574 * L_0 = m7854(__this, &m7854_MI);
		return L_0;
	}
}
#include "t1772.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1772_TI;
#include "t1772MD.h"

#include "t1773.h"
extern TypeInfo t1773_TI;
#include "t1773MD.h"
extern MethodInfo m9325_MI;
extern MethodInfo m9276_MI;
extern MethodInfo m9285_MI;
extern MethodInfo m9268_MI;
extern MethodInfo m7819_MI;
extern MethodInfo m7803_MI;
extern MethodInfo m5762_MI;
extern MethodInfo m561_MI;
extern MethodInfo m7807_MI;
extern MethodInfo m7822_MI;
extern MethodInfo m4513_MI;


extern MethodInfo m9243_MI;
extern "C" bool m9243 (t1772 * __this, t126 * p0, MethodInfo* method)
{
	int32_t G_B7_0 = 0;
	{
		t1760 * L_0 = (__this->f8);
		t1574 * L_1 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m9432_MI, L_0);
		t1750 * L_2 = (((t1755 *)Castclass(L_1, InitializedTypeInfo(&t1755_TI)))->f14);
		bool L_3 = m9143(L_2, &m9143_MI);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		t138 * L_4 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0023:
	{
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9268_MI, __this);
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		return 0;
	}

IL_002d:
	{
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9268_MI, __this);
		t126 * L_7 = p0;
		if ((((t9*)(t126 *)L_6) == ((t9*)(t126 *)L_7)))
		{
			goto IL_0044;
		}
	}
	{
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9268_MI, __this);
		t126 * L_9 = p0;
		bool L_10 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m7819_MI, L_8, L_9);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0045;
	}

IL_0044:
	{
		G_B7_0 = 1;
	}

IL_0045:
	{
		return G_B7_0;
	}
}
extern MethodInfo m9244_MI;
extern "C" int32_t m9244 (t1772 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t1574 * L_1 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m9432_MI, L_0);
		t1750 * L_2 = (((t1755 *)Castclass(L_1, InitializedTypeInfo(&t1755_TI)))->f14);
		bool L_3 = m9143(L_2, &m9143_MI);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (int32_t)(1);
	}

IL_001e:
	{
		t138 * L_4 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_4);
	}
}
extern MethodInfo m9245_MI;
extern "C" t833 * m9245 (t1772 * __this, int32_t p0, t939 * p1, int32_t p2, t152* p3, t941* p4, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9246_MI;
extern "C" t932* m9246 (t1772 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9247_MI;
extern "C" t1575 * m9247 (t1772 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9248_MI;
extern "C" t837 * m9248 (t1772 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9249_MI;
extern "C" t936* m9249 (t1772 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9250_MI;
extern "C" t152* m9250 (t1772 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9251_MI;
extern "C" t1576* m9251 (t1772 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9252_MI;
extern "C" t835 * m9252 (t1772 * __this, t2* p0, int32_t p1, t939 * p2, int32_t p3, t152* p4, t941* p5, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9253_MI;
extern "C" t935* m9253 (t1772 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9254_MI;
extern "C" t844 * m9254 (t1772 * __this, t2* p0, int32_t p1, t939 * p2, t126 * p3, t152* p4, t941* p5, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9255_MI;
extern "C" bool m9255 (t1772 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9256_MI;
extern "C" bool m9256 (t1772 * __this, t126 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9257_MI;
extern "C" bool m9257 (t1772 * __this, t9 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9258_MI;
extern "C" bool m9258 (t1772 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9259_MI;
extern "C" bool m9259 (t1772 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9260_MI;
extern "C" bool m9260 (t1772 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9261_MI;
extern "C" bool m9261 (t1772 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9262_MI;
extern "C" bool m9262 (t1772 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t126 * L_0 = (__this->f11);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t126 * L_1 = (__this->f11);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7803_MI, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		return G_B3_0;
	}
}
extern MethodInfo m9263_MI;
extern "C" t9 * m9263 (t1772 * __this, t2* p0, int32_t p1, t939 * p2, t9 * p3, t158* p4, t941* p5, t907 * p6, t221* p7, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9264_MI;
extern "C" t126 * m9264 (t1772 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9265_MI;
extern "C" t126 * m9265 (t1772 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m9266_MI;
extern "C" t1351 * m9266 (t1772 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t1351 * L_1 = (t1351 *)VirtFuncInvoker0< t1351 * >::Invoke(&m9425_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9267_MI;
extern "C" t2* m9267 (t1772 * __this, MethodInfo* method)
{
	{
		return (t2*)NULL;
	}
}
extern "C" t126 * m9268 (t1772 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m9269_MI;
extern "C" t2* m9269 (t1772 * __this, MethodInfo* method)
{
	{
		return (t2*)NULL;
	}
}
extern MethodInfo m9270_MI;
extern "C" bool m9270 (t1772 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9271_MI;
extern "C" t158* m9271 (t1772 * __this, bool p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9272_MI;
extern "C" t158* m9272 (t1772 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9273_MI;
extern "C" t2* m9273 (t1772 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m9274_MI;
extern "C" t2* m9274 (t1772 * __this, MethodInfo* method)
{
	{
		return (t2*)NULL;
	}
}
extern MethodInfo m9275_MI;
extern "C" t1574 * m9275 (t1772 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f8);
		t1574 * L_1 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m9432_MI, L_0);
		return L_1;
	}
}
extern "C" t126 * m9276 (t1772 * __this, MethodInfo* method)
{
	t126 * G_B3_0 = {0};
	{
		t1773 * L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t1773 * L_1 = (__this->f9);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9325_MI, L_1);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		t1760 * L_3 = (__this->f8);
		G_B3_0 = ((t126 *)(L_3));
	}

IL_001b:
	{
		return G_B3_0;
	}
}
extern MethodInfo m9277_MI;
extern "C" t126 * m9277 (t1772 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9276_MI, __this);
		return L_0;
	}
}
extern MethodInfo m9278_MI;
extern "C" t127  m9278 (t1772 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9285(__this, &m9285_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9279_MI;
extern "C" t152* m9279 (t1772 * __this, MethodInfo* method)
{
	{
		t1347 * L_0 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_0, &m5762_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9280_MI;
extern "C" t126 * m9280 (t1772 * __this, MethodInfo* method)
{
	{
		t1347 * L_0 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_0, &m5762_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9281_MI;
extern "C" bool m9281 (t1772 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m9282_MI;
extern "C" bool m9282 (t1772 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m9283_MI;
extern "C" bool m9283 (t1772 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9284_MI;
extern "C" bool m9284 (t1772 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t138 * m9285 (t1772 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		return L_0;
	}
}
extern MethodInfo m9286_MI;
extern "C" t2* m9286 (t1772 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m9287_MI;
extern "C" bool m9287 (t1772 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		bool L_1 = m7807(__this, L_0, &m7807_MI);
		return L_1;
	}
}
extern MethodInfo m9288_MI;
extern "C" int32_t m9288 (t1772 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m7822(__this, &m7822_MI);
		return L_0;
	}
}
extern MethodInfo m9289_MI;
extern "C" t126 * m9289 (t1772 * __this, t152* p0, MethodInfo* method)
{
	{
		t152* L_0 = p0;
		t126 * L_1 = m4513(__this, L_0, &m4513_MI);
		return L_1;
	}
}
#include "t1774.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1774_TI;
#include "t1774MD.h"



#include "t1775.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1775_TI;
#include "t1775MD.h"



#include "t1776.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1776_TI;
#include "t1776MD.h"



extern MethodInfo m9290_MI;
extern "C" void m9290 (t1776 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1783.h"
#include "t1793.h"
#include "t1792.h"
#include "t1782.h"
#include "t1785.h"
#include "t315.h"
#include "t1784.h"
#include "t1795.h"
#include "t341.h"
extern TypeInfo t1778_TI;
extern TypeInfo t1783_TI;
extern TypeInfo t1782_TI;
extern TypeInfo t1785_TI;
extern TypeInfo t1777_TI;
extern TypeInfo t1779_TI;
extern TypeInfo t1784_TI;
extern TypeInfo t1781_TI;
extern TypeInfo t1780_TI;
extern TypeInfo t1795_TI;
#include "t1783MD.h"
#include "t1782MD.h"
#include "t1784MD.h"
#include "t1795MD.h"
#include "t835MD.h"
extern Il2CppType t1778_0_0_0;
extern Il2CppType t1777_0_0_0;
extern Il2CppType t1779_0_0_0;
extern Il2CppType t1780_0_0_0;
extern MethodInfo m5944_MI;
extern MethodInfo m9390_MI;
extern MethodInfo m9393_MI;
extern MethodInfo m9392_MI;
extern MethodInfo m9391_MI;
extern MethodInfo m9299_MI;
extern MethodInfo m7852_MI;
extern MethodInfo m9319_MI;
extern MethodInfo m9316_MI;
extern MethodInfo m9294_MI;
extern MethodInfo m9296_MI;
extern MethodInfo m12051_MI;
extern MethodInfo m4494_MI;
extern MethodInfo m12024_MI;
extern MethodInfo m9293_MI;
extern MethodInfo m9295_MI;
extern MethodInfo m9585_MI;
extern MethodInfo m9297_MI;
extern MethodInfo m9395_MI;
extern MethodInfo m9595_MI;
extern MethodInfo m12052_MI;
extern MethodInfo m9394_MI;
extern MethodInfo m9586_MI;
extern MethodInfo m12053_MI;
extern MethodInfo m9309_MI;
extern MethodInfo m9308_MI;


extern TypeInfo* t737_TI_var;
extern TypeInfo* t1778_TI_var;
extern "C" void m9291 (t1759 * __this, t1574 * p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	static bool m9291_init;
	if (!m9291_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		t1778_TI_var = il2cpp_codegen_class_from_type(&t1778_0_0_0);
		m9291_init = true;
	}
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p2;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		p2 = ((int32_t)128);
	}

IL_0013:
	{
		int32_t L_1 = p2;
		__this->f1 = ((t737*)SZArrayNew(t737_TI_var, L_1));
		__this->f7 = ((t1778*)SZArrayNew(t1778_TI_var, 8));
		t1574 * L_2 = p0;
		__this->f12 = L_2;
		t9 * L_3 = p1;
		__this->f13 = L_3;
		return;
	}
}
extern MethodInfo m9292_MI;
extern "C" void m9292 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_0 = m329(NULL, LoadTypeToken(&t122_0_0_0), &m329_MI);
		((t1759_SFs*)InitializedTypeInfo(&t1759_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern TypeInfo* t1778_TI_var;
extern "C" void m9293 (t1759 * __this, t567 * p0, MethodInfo* method)
{
	static bool m9293_init;
	if (!m9293_init)
	{
		t1778_TI_var = il2cpp_codegen_class_from_type(&t1778_0_0_0);
		m9293_init = true;
	}
	t1778* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f6);
		t1778* L_1 = (__this->f7);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = (__this->f6);
		V_0 = ((t1778*)SZArrayNew(t1778_TI_var, ((int32_t)((int32_t)L_2*(int32_t)2))));
		t1778* L_3 = (__this->f7);
		t1778* L_4 = V_0;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5944_MI, L_3, (t121 *)(t121 *)L_4, 0);
		t1778* L_5 = V_0;
		__this->f7 = L_5;
	}

IL_0032:
	{
		t1778* L_6 = (__this->f7);
		int32_t L_7 = (__this->f6);
		t567 * L_8 = p0;
		((t1774 *)(t1774 *)SZArrayLdElema(L_6, L_7))->f0 = L_8;
		t1778* L_9 = (__this->f7);
		int32_t L_10 = (__this->f6);
		int32_t L_11 = L_10;
		V_1 = L_11;
		__this->f6 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_1;
		int32_t L_13 = (__this->f2);
		((t1774 *)(t1774 *)SZArrayLdElema(L_9, L_12))->f1 = L_13;
		return;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" void m9294 (t1759 * __this, int32_t p0, MethodInfo* method)
{
	static bool m9294_init;
	if (!m9294_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m9294_init = true;
	}
	t737* V_0 = {0};
	{
		int32_t L_0 = (__this->f2);
		int32_t L_1 = p0;
		t737* L_2 = (__this->f1);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1))) >= ((int32_t)(((int32_t)(((t121 *)L_2)->max_length))))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int32_t L_3 = (__this->f2);
		int32_t L_4 = p0;
		V_0 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)L_4))*(int32_t)2))+(int32_t)((int32_t)128)))));
		t737* L_5 = (__this->f1);
		t737* L_6 = V_0;
		t737* L_7 = (__this->f1);
		m7752(NULL, (t121 *)(t121 *)L_5, 0, (t121 *)(t121 *)L_6, 0, (((int32_t)(((t121 *)L_7)->max_length))), &m7752_MI);
		t737* L_8 = V_0;
		__this->f1 = L_8;
		return;
	}
}
extern "C" void m9295 (t1759 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t737* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->f2 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_0;
		int32_t L_4 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_3)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)255)))));
		t737* L_5 = (__this->f1);
		int32_t L_6 = (__this->f2);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		int32_t L_9 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_8)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9>>(int32_t)8))&(int32_t)((int32_t)255)))));
		t737* L_10 = (__this->f1);
		int32_t L_11 = (__this->f2);
		int32_t L_12 = L_11;
		V_0 = L_12;
		__this->f2 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_0;
		int32_t L_14 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_13)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_14>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)255)))));
		t737* L_15 = (__this->f1);
		int32_t L_16 = (__this->f2);
		int32_t L_17 = L_16;
		V_0 = L_17;
		__this->f2 = ((int32_t)((int32_t)L_17+(int32_t)1));
		int32_t L_18 = V_0;
		int32_t L_19 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_18)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_19>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)255)))));
		return;
	}
}
extern "C" void m9296 (t1759 * __this, t1783  p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	{
		int32_t L_0 = m9390((&p0), &m9390_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0029;
		}
	}
	{
		t737* L_1 = (__this->f1);
		int32_t L_2 = (__this->f2);
		int32_t L_3 = L_2;
		V_0 = L_3;
		__this->f2 = ((int32_t)((int32_t)L_3+(int32_t)1));
		int32_t L_4 = V_0;
		uint8_t L_5 = ((&p0)->f0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_4)) = (uint8_t)L_5;
	}

IL_0029:
	{
		t737* L_6 = (__this->f1);
		int32_t L_7 = (__this->f2);
		int32_t L_8 = L_7;
		V_0 = L_8;
		__this->f2 = ((int32_t)((int32_t)L_8+(int32_t)1));
		int32_t L_9 = V_0;
		uint8_t L_10 = ((&p0)->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_9)) = (uint8_t)L_10;
		int32_t L_11 = m9393((&p0), &m9393_MI);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 0)
		{
			goto IL_007f;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 1)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 2)
		{
			goto IL_007f;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 3)
		{
			goto IL_007f;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 4)
		{
			goto IL_007f;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 5)
		{
			goto IL_007f;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 6)
		{
			goto IL_007f;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 7)
		{
			goto IL_009f;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 8)
		{
			goto IL_007f;
		}
	}
	{
		goto IL_009f;
	}

IL_007f:
	{
		int32_t L_13 = (__this->f4);
		__this->f4 = ((int32_t)((int32_t)L_13+(int32_t)1));
		goto IL_009f;
	}

IL_008f:
	{
		int32_t L_14 = (__this->f4);
		__this->f4 = ((int32_t)((int32_t)L_14+(int32_t)2));
		goto IL_009f;
	}

IL_009f:
	{
		int32_t L_15 = (__this->f3);
		int32_t L_16 = (__this->f4);
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_17 = (__this->f4);
		__this->f3 = L_17;
	}

IL_00b9:
	{
		int32_t L_18 = m9392((&p0), &m9392_MI);
		V_1 = L_18;
		int32_t L_19 = V_1;
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 0)
		{
			goto IL_0135;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 1)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 2)
		{
			goto IL_0135;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 3)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 4)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 5)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 6)
		{
			goto IL_0155;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 7)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 8)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 9)
		{
			goto IL_0135;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 10)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 11)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 12)
		{
			goto IL_0155;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 13)
		{
			goto IL_0155;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 14)
		{
			goto IL_0155;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 15)
		{
			goto IL_0155;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 16)
		{
			goto IL_0155;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 17)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 18)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 19)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 20)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 21)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 22)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 23)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 24)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 25)
		{
			goto IL_0133;
		}
	}
	{
		goto IL_0165;
	}

IL_0133:
	{
		goto IL_0165;
	}

IL_0135:
	{
		int32_t L_20 = (__this->f4);
		__this->f4 = ((int32_t)((int32_t)L_20-(int32_t)1));
		goto IL_0165;
	}

IL_0145:
	{
		int32_t L_21 = (__this->f4);
		__this->f4 = ((int32_t)((int32_t)L_21-(int32_t)2));
		goto IL_0165;
	}

IL_0155:
	{
		int32_t L_22 = (__this->f4);
		__this->f4 = ((int32_t)((int32_t)L_22-(int32_t)3));
		goto IL_0165;
	}

IL_0165:
	{
		return;
	}
}
extern "C" int32_t m9297 (t9 * __this , t1783  p0, MethodInfo* method)
{
	{
		int32_t L_0 = m9391((&p0), &m9391_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 4;
	}

IL_000b:
	{
		return 1;
	}
}
extern MethodInfo m9298_MI;
extern "C" t1782 * m9298 (t1759 * __this, t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t1782 * L_1 = (t1782 *)VirtFuncInvoker2< t1782 *, t126 *, bool >::Invoke(&m9299_MI, __this, L_0, 0);
		return L_1;
	}
}
extern TypeInfo* t1777_TI_var;
extern "C" t1782 * m9299 (t1759 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	static bool m9299_init;
	if (!m9299_init)
	{
		t1777_TI_var = il2cpp_codegen_class_from_type(&t1777_0_0_0);
		m9299_init = true;
	}
	t1782 * V_0 = {0};
	t1777* V_1 = {0};
	{
		t126 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1738, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t126 * L_2 = p0;
		bool L_3 = m7852(L_2, &m7852_MI);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		t169 * L_4 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_4, (t2*) &_stringLiteral1739, &m5776_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t126 * L_5 = p0;
		t1782 * L_6 = (t1782 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1782_TI));
		m9319(L_6, L_5, __this, &m9319_MI);
		V_0 = L_6;
		t1782 * L_7 = V_0;
		bool L_8 = p1;
		L_7->f1 = L_8;
		t1777* L_9 = (__this->f5);
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		t1777* L_10 = (__this->f5);
		V_1 = ((t1777*)SZArrayNew(t1777_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_10)->max_length)))+(int32_t)1))));
		t1777* L_11 = (__this->f5);
		t1777* L_12 = V_1;
		t1777* L_13 = (__this->f5);
		m5982(NULL, (t121 *)(t121 *)L_11, (t121 *)(t121 *)L_12, (((int32_t)(((t121 *)L_13)->max_length))), &m5982_MI);
		t1777* L_14 = V_1;
		t1777* L_15 = (__this->f5);
		t1782 * L_16 = V_0;
		ArrayElementTypeCheck (L_14, L_16);
		*((t1782 **)(t1782 **)SZArrayLdElema(L_14, (((int32_t)(((t121 *)L_15)->max_length))))) = (t1782 *)L_16;
		t1777* L_17 = V_1;
		__this->f5 = L_17;
		goto IL_0085;
	}

IL_0070:
	{
		__this->f5 = ((t1777*)SZArrayNew(t1777_TI_var, 1));
		t1777* L_18 = (__this->f5);
		t1782 * L_19 = V_0;
		ArrayElementTypeCheck (L_18, L_19);
		*((t1782 **)(t1782 **)SZArrayLdElema(L_18, 0)) = (t1782 *)L_19;
	}

IL_0085:
	{
		t1782 * L_20 = V_0;
		t1777* L_21 = (__this->f5);
		L_20->f2 = (((uint16_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_21)->max_length)))-(int32_t)1))));
		t1782 * L_22 = V_0;
		return L_22;
	}
}
extern MethodInfo m9300_MI;
extern TypeInfo* t1779_TI_var;
extern "C" t1784  m9300 (t1759 * __this, MethodInfo* method)
{
	static bool m9300_init;
	if (!m9300_init)
	{
		t1779_TI_var = il2cpp_codegen_class_from_type(&t1779_0_0_0);
		m9300_init = true;
	}
	t1779* V_0 = {0};
	int32_t V_1 = 0;
	{
		t1779* L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		__this->f8 = ((t1779*)SZArrayNew(t1779_TI_var, 4));
		goto IL_0051;
	}

IL_0016:
	{
		int32_t L_1 = (__this->f9);
		t1779* L_2 = (__this->f8);
		if ((((int32_t)L_1) < ((int32_t)(((int32_t)(((t121 *)L_2)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		t1779* L_3 = (__this->f8);
		V_0 = ((t1779*)SZArrayNew(t1779_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_3)->max_length)))*(int32_t)2))));
		t1779* L_4 = (__this->f8);
		t1779* L_5 = V_0;
		t1779* L_6 = (__this->f8);
		m5982(NULL, (t121 *)(t121 *)L_4, (t121 *)(t121 *)L_5, (((int32_t)(((t121 *)L_6)->max_length))), &m5982_MI);
		t1779* L_7 = V_0;
		__this->f8 = L_7;
	}

IL_0051:
	{
		t1779* L_8 = (__this->f8);
		int32_t L_9 = (__this->f9);
		t1776  L_10 = {0};
		m9290(&L_10, (-1), 0, &m9290_MI);
		*((t1776 *)(t1776 *)SZArrayLdElema(L_8, L_9)) = L_10;
		int32_t L_11 = (__this->f9);
		int32_t L_12 = L_11;
		V_1 = L_12;
		__this->f9 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_1;
		t1784  L_14 = {0};
		m9316(&L_14, L_13, &m9316_MI);
		return L_14;
	}
}
extern MethodInfo m9301_MI;
extern "C" void m9301 (t1759 * __this, t1783  p0, MethodInfo* method)
{
	{
		m9294(__this, 2, &m9294_MI);
		t1783  L_0 = p0;
		m9296(__this, L_0, &m9296_MI);
		return;
	}
}
extern MethodInfo m9302_MI;
extern "C" void m9302 (t1759 * __this, t1783  p0, uint8_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m9294(__this, 3, &m9294_MI);
		t1783  L_0 = p0;
		m9296(__this, L_0, &m9296_MI);
		t737* L_1 = (__this->f1);
		int32_t L_2 = (__this->f2);
		int32_t L_3 = L_2;
		V_0 = L_3;
		__this->f2 = ((int32_t)((int32_t)L_3+(int32_t)1));
		int32_t L_4 = V_0;
		uint8_t L_5 = p1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_4)) = (uint8_t)L_5;
		return;
	}
}
extern MethodInfo m9303_MI;
extern "C" void m9303 (t1759 * __this, t1783  p0, t833 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = (__this->f13);
		t833 * L_1 = p1;
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t567 * >::Invoke(&m12051_MI, L_0, L_1);
		V_0 = L_2;
		m9294(__this, 6, &m9294_MI);
		t1783  L_3 = p0;
		m9296(__this, L_3, &m9296_MI);
		t833 * L_4 = p1;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_4);
		t1574 * L_6 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m12024_MI, L_5);
		t1574 * L_7 = (__this->f12);
		if ((!(((t9*)(t1574 *)L_6) == ((t9*)(t1574 *)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		t833 * L_8 = p1;
		m9293(__this, L_8, &m9293_MI);
	}

IL_0035:
	{
		int32_t L_9 = V_0;
		m9295(__this, L_9, &m9295_MI);
		int32_t L_10 = m9392((&p0), &m9392_MI);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_11 = (__this->f4);
		t833 * L_12 = p1;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9585_MI, L_12);
		__this->f4 = ((int32_t)((int32_t)L_11-(int32_t)L_13));
	}

IL_005a:
	{
		return;
	}
}
extern MethodInfo m9304_MI;
extern "C" void m9304 (t1759 * __this, t1783  p0, t837 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = (__this->f13);
		t837 * L_1 = p1;
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t567 * >::Invoke(&m12051_MI, L_0, L_1);
		V_0 = L_2;
		m9294(__this, 6, &m9294_MI);
		t1783  L_3 = p0;
		m9296(__this, L_3, &m9296_MI);
		t837 * L_4 = p1;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_4);
		t1574 * L_6 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m12024_MI, L_5);
		t1574 * L_7 = (__this->f12);
		if ((!(((t9*)(t1574 *)L_6) == ((t9*)(t1574 *)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		t837 * L_8 = p1;
		m9293(__this, L_8, &m9293_MI);
	}

IL_0035:
	{
		int32_t L_9 = V_0;
		m9295(__this, L_9, &m9295_MI);
		return;
	}
}
extern MethodInfo m9305_MI;
extern "C" void m9305 (t1759 * __this, t1783  p0, int32_t p1, MethodInfo* method)
{
	{
		m9294(__this, 6, &m9294_MI);
		t1783  L_0 = p0;
		m9296(__this, L_0, &m9296_MI);
		int32_t L_1 = p1;
		m9295(__this, L_1, &m9295_MI);
		return;
	}
}
extern MethodInfo m9306_MI;
extern TypeInfo* t1780_TI_var;
extern "C" void m9306 (t1759 * __this, t1783  p0, t1784  p1, MethodInfo* method)
{
	static bool m9306_init;
	if (!m9306_init)
	{
		t1780_TI_var = il2cpp_codegen_class_from_type(&t1780_0_0_0);
		m9306_init = true;
	}
	int32_t V_0 = 0;
	t1780* V_1 = {0};
	{
		t1783  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1759_TI));
		int32_t L_1 = m9297(NULL, L_0, &m9297_MI);
		V_0 = L_1;
		m9294(__this, 6, &m9294_MI);
		t1783  L_2 = p0;
		m9296(__this, L_2, &m9296_MI);
		int32_t L_3 = (__this->f4);
		t1779* L_4 = (__this->f8);
		int32_t L_5 = ((&p1)->f0);
		int32_t L_6 = (((t1776 *)(t1776 *)SZArrayLdElema(L_4, L_5))->f1);
		if ((((int32_t)L_3) <= ((int32_t)L_6)))
		{
			goto IL_0051;
		}
	}
	{
		t1779* L_7 = (__this->f8);
		int32_t L_8 = ((&p1)->f0);
		int32_t L_9 = (__this->f4);
		((t1776 *)(t1776 *)SZArrayLdElema(L_7, L_8))->f1 = L_9;
	}

IL_0051:
	{
		t1780* L_10 = (__this->f10);
		if (L_10)
		{
			goto IL_0067;
		}
	}
	{
		__this->f10 = ((t1780*)SZArrayNew(t1780_TI_var, 4));
		goto IL_00a2;
	}

IL_0067:
	{
		int32_t L_11 = (__this->f11);
		t1780* L_12 = (__this->f10);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((t121 *)L_12)->max_length))))))
		{
			goto IL_00a2;
		}
	}
	{
		t1780* L_13 = (__this->f10);
		V_1 = ((t1780*)SZArrayNew(t1780_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_13)->max_length)))*(int32_t)2))));
		t1780* L_14 = (__this->f10);
		t1780* L_15 = V_1;
		t1780* L_16 = (__this->f10);
		m5982(NULL, (t121 *)(t121 *)L_14, (t121 *)(t121 *)L_15, (((int32_t)(((t121 *)L_16)->max_length))), &m5982_MI);
		t1780* L_17 = V_1;
		__this->f10 = L_17;
	}

IL_00a2:
	{
		t1780* L_18 = (__this->f10);
		int32_t L_19 = (__this->f11);
		int32_t L_20 = V_0;
		((t1775 *)(t1775 *)SZArrayLdElema(L_18, L_19))->f0 = L_20;
		t1780* L_21 = (__this->f10);
		int32_t L_22 = (__this->f11);
		int32_t L_23 = (__this->f2);
		((t1775 *)(t1775 *)SZArrayLdElema(L_21, L_22))->f1 = L_23;
		t1780* L_24 = (__this->f10);
		int32_t L_25 = (__this->f11);
		int32_t L_26 = ((&p1)->f0);
		((t1775 *)(t1775 *)SZArrayLdElema(L_24, L_25))->f2 = L_26;
		int32_t L_27 = (__this->f11);
		__this->f11 = ((int32_t)((int32_t)L_27+(int32_t)1));
		int32_t L_28 = (__this->f2);
		int32_t L_29 = V_0;
		__this->f2 = ((int32_t)((int32_t)L_28+(int32_t)L_29));
		return;
	}
}
extern MethodInfo m9307_MI;
extern "C" void m9307 (t1759 * __this, t1783  p0, t1782 * p1, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		t1782 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1740, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1782 * L_2 = p1;
		uint16_t L_3 = (L_2->f2);
		V_0 = L_3;
		V_1 = 0;
		V_2 = 0;
		m9294(__this, 6, &m9294_MI);
		t1782 * L_4 = p1;
		t1759 * L_5 = (L_4->f3);
		if ((((t9*)(t1759 *)L_5) == ((t9*)(t1759 *)__this)))
		{
			goto IL_0034;
		}
	}
	{
		t570 * L_6 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_6, (t2*) &_stringLiteral1741, &m2949_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0034:
	{
		int32_t L_7 = m9392((&p0), &m9392_MI);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_8 = (__this->f4);
		__this->f4 = ((int32_t)((int32_t)L_8-(int32_t)1));
		V_2 = 1;
		goto IL_0084;
	}

IL_0050:
	{
		int32_t L_9 = (__this->f4);
		__this->f4 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = (__this->f4);
		int32_t L_11 = (__this->f3);
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_12 = (__this->f4);
		__this->f3 = L_12;
	}

IL_0078:
	{
		int32_t L_13 = m9393((&p0), &m9393_MI);
		V_1 = ((((int32_t)L_13) == ((int32_t)((int32_t)21)))? 1 : 0);
	}

IL_0084:
	{
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0146;
		}
	}
	{
		uint32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) < ((uint32_t)((int32_t)256)))))
		{
			goto IL_00c8;
		}
	}
	{
		t737* L_16 = (__this->f1);
		int32_t L_17 = (__this->f2);
		int32_t L_18 = L_17;
		V_3 = L_18;
		__this->f2 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_19)) = (uint8_t)((int32_t)18);
		t737* L_20 = (__this->f1);
		int32_t L_21 = (__this->f2);
		int32_t L_22 = L_21;
		V_3 = L_22;
		__this->f2 = ((int32_t)((int32_t)L_22+(int32_t)1));
		int32_t L_23 = V_3;
		uint32_t L_24 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_23)) = (uint8_t)(((uint8_t)L_24));
		goto IL_0141;
	}

IL_00c8:
	{
		t737* L_25 = (__this->f1);
		int32_t L_26 = (__this->f2);
		int32_t L_27 = L_26;
		V_3 = L_27;
		__this->f2 = ((int32_t)((int32_t)L_27+(int32_t)1));
		int32_t L_28 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_25, L_28)) = (uint8_t)((int32_t)254);
		t737* L_29 = (__this->f1);
		int32_t L_30 = (__this->f2);
		int32_t L_31 = L_30;
		V_3 = L_31;
		__this->f2 = ((int32_t)((int32_t)L_31+(int32_t)1));
		int32_t L_32 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_29, L_32)) = (uint8_t)((int32_t)13);
		t737* L_33 = (__this->f1);
		int32_t L_34 = (__this->f2);
		int32_t L_35 = L_34;
		V_3 = L_35;
		__this->f2 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		uint32_t L_37 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_33, L_36)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_37&(int32_t)((int32_t)255)))));
		t737* L_38 = (__this->f1);
		int32_t L_39 = (__this->f2);
		int32_t L_40 = L_39;
		V_3 = L_40;
		__this->f2 = ((int32_t)((int32_t)L_40+(int32_t)1));
		int32_t L_41 = V_3;
		uint32_t L_42 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_38, L_41)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_42>>8))&(int32_t)((int32_t)255)))));
	}

IL_0141:
	{
		goto IL_030a;
	}

IL_0146:
	{
		bool L_43 = V_2;
		if (!L_43)
		{
			goto IL_022e;
		}
	}
	{
		uint32_t L_44 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)4))))
		{
			goto IL_0172;
		}
	}
	{
		t737* L_45 = (__this->f1);
		int32_t L_46 = (__this->f2);
		int32_t L_47 = L_46;
		V_3 = L_47;
		__this->f2 = ((int32_t)((int32_t)L_47+(int32_t)1));
		int32_t L_48 = V_3;
		uint32_t L_49 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_45, L_48)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)10)+(int32_t)L_49))));
		goto IL_0229;
	}

IL_0172:
	{
		uint32_t L_50 = V_0;
		if ((!(((uint32_t)L_50) < ((uint32_t)((int32_t)256)))))
		{
			goto IL_01b0;
		}
	}
	{
		t737* L_51 = (__this->f1);
		int32_t L_52 = (__this->f2);
		int32_t L_53 = L_52;
		V_3 = L_53;
		__this->f2 = ((int32_t)((int32_t)L_53+(int32_t)1));
		int32_t L_54 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_51, L_54)) = (uint8_t)((int32_t)19);
		t737* L_55 = (__this->f1);
		int32_t L_56 = (__this->f2);
		int32_t L_57 = L_56;
		V_3 = L_57;
		__this->f2 = ((int32_t)((int32_t)L_57+(int32_t)1));
		int32_t L_58 = V_3;
		uint32_t L_59 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_55, L_58)) = (uint8_t)(((uint8_t)L_59));
		goto IL_0229;
	}

IL_01b0:
	{
		t737* L_60 = (__this->f1);
		int32_t L_61 = (__this->f2);
		int32_t L_62 = L_61;
		V_3 = L_62;
		__this->f2 = ((int32_t)((int32_t)L_62+(int32_t)1));
		int32_t L_63 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_60, L_63)) = (uint8_t)((int32_t)254);
		t737* L_64 = (__this->f1);
		int32_t L_65 = (__this->f2);
		int32_t L_66 = L_65;
		V_3 = L_66;
		__this->f2 = ((int32_t)((int32_t)L_66+(int32_t)1));
		int32_t L_67 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_64, L_67)) = (uint8_t)((int32_t)14);
		t737* L_68 = (__this->f1);
		int32_t L_69 = (__this->f2);
		int32_t L_70 = L_69;
		V_3 = L_70;
		__this->f2 = ((int32_t)((int32_t)L_70+(int32_t)1));
		int32_t L_71 = V_3;
		uint32_t L_72 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_68, L_71)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_72&(int32_t)((int32_t)255)))));
		t737* L_73 = (__this->f1);
		int32_t L_74 = (__this->f2);
		int32_t L_75 = L_74;
		V_3 = L_75;
		__this->f2 = ((int32_t)((int32_t)L_75+(int32_t)1));
		int32_t L_76 = V_3;
		uint32_t L_77 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_73, L_76)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_77>>8))&(int32_t)((int32_t)255)))));
	}

IL_0229:
	{
		goto IL_030a;
	}

IL_022e:
	{
		uint32_t L_78 = V_0;
		if ((!(((uint32_t)L_78) < ((uint32_t)4))))
		{
			goto IL_0253;
		}
	}
	{
		t737* L_79 = (__this->f1);
		int32_t L_80 = (__this->f2);
		int32_t L_81 = L_80;
		V_3 = L_81;
		__this->f2 = ((int32_t)((int32_t)L_81+(int32_t)1));
		int32_t L_82 = V_3;
		uint32_t L_83 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_79, L_82)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)6+(int32_t)L_83))));
		goto IL_030a;
	}

IL_0253:
	{
		uint32_t L_84 = V_0;
		if ((!(((uint32_t)L_84) < ((uint32_t)((int32_t)256)))))
		{
			goto IL_0291;
		}
	}
	{
		t737* L_85 = (__this->f1);
		int32_t L_86 = (__this->f2);
		int32_t L_87 = L_86;
		V_3 = L_87;
		__this->f2 = ((int32_t)((int32_t)L_87+(int32_t)1));
		int32_t L_88 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_85, L_88)) = (uint8_t)((int32_t)17);
		t737* L_89 = (__this->f1);
		int32_t L_90 = (__this->f2);
		int32_t L_91 = L_90;
		V_3 = L_91;
		__this->f2 = ((int32_t)((int32_t)L_91+(int32_t)1));
		int32_t L_92 = V_3;
		uint32_t L_93 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_89, L_92)) = (uint8_t)(((uint8_t)L_93));
		goto IL_030a;
	}

IL_0291:
	{
		t737* L_94 = (__this->f1);
		int32_t L_95 = (__this->f2);
		int32_t L_96 = L_95;
		V_3 = L_96;
		__this->f2 = ((int32_t)((int32_t)L_96+(int32_t)1));
		int32_t L_97 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_94, L_97)) = (uint8_t)((int32_t)254);
		t737* L_98 = (__this->f1);
		int32_t L_99 = (__this->f2);
		int32_t L_100 = L_99;
		V_3 = L_100;
		__this->f2 = ((int32_t)((int32_t)L_100+(int32_t)1));
		int32_t L_101 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_98, L_101)) = (uint8_t)((int32_t)12);
		t737* L_102 = (__this->f1);
		int32_t L_103 = (__this->f2);
		int32_t L_104 = L_103;
		V_3 = L_104;
		__this->f2 = ((int32_t)((int32_t)L_104+(int32_t)1));
		int32_t L_105 = V_3;
		uint32_t L_106 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_102, L_105)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_106&(int32_t)((int32_t)255)))));
		t737* L_107 = (__this->f1);
		int32_t L_108 = (__this->f2);
		int32_t L_109 = L_108;
		V_3 = L_109;
		__this->f2 = ((int32_t)((int32_t)L_109+(int32_t)1));
		int32_t L_110 = V_3;
		uint32_t L_111 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_107, L_110)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_111>>8))&(int32_t)((int32_t)255)))));
	}

IL_030a:
	{
		return;
	}
}
extern "C" void m9308 (t1759 * __this, t1783  p0, t835 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	t126 * V_1 = {0};
	{
		t835 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1742, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t835 * L_2 = p1;
		if (!((t1766 *)IsInst(L_2, InitializedTypeInfo(&t1766_TI))))
		{
			goto IL_0048;
		}
	}
	{
		t1783  L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1795_TI));
		t1783  L_4 = ((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f205;
		bool L_5 = m9395(NULL, L_3, L_4, &m9395_MI);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		t1783  L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1795_TI));
		t1783  L_7 = ((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f206;
		bool L_8 = m9395(NULL, L_6, L_7, &m9395_MI);
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		t1783  L_9 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1795_TI));
		t1783  L_10 = ((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f174;
		bool L_11 = m9395(NULL, L_9, L_10, &m9395_MI);
		if (!L_11)
		{
			goto IL_0048;
		}
	}

IL_003d:
	{
		t570 * L_12 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_12, (t2*) &_stringLiteral1743, &m2949_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0048:
	{
		t9 * L_13 = (__this->f13);
		t835 * L_14 = p1;
		int32_t L_15 = (int32_t)InterfaceFuncInvoker1< int32_t, t567 * >::Invoke(&m12051_MI, L_13, L_14);
		V_0 = L_15;
		m9294(__this, 6, &m9294_MI);
		t1783  L_16 = p0;
		m9296(__this, L_16, &m9296_MI);
		t835 * L_17 = p1;
		t126 * L_18 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_17);
		V_1 = L_18;
		t126 * L_19 = V_1;
		if (!L_19)
		{
			goto IL_0082;
		}
	}
	{
		t126 * L_20 = V_1;
		t1574 * L_21 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m12024_MI, L_20);
		t1574 * L_22 = (__this->f12);
		if ((!(((t9*)(t1574 *)L_21) == ((t9*)(t1574 *)L_22))))
		{
			goto IL_0082;
		}
	}
	{
		t835 * L_23 = p1;
		m9293(__this, L_23, &m9293_MI);
	}

IL_0082:
	{
		int32_t L_24 = V_0;
		m9295(__this, L_24, &m9295_MI);
		t835 * L_25 = p1;
		t126 * L_26 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9595_MI, L_25);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1759_TI));
		t126 * L_27 = ((t1759_SFs*)InitializedTypeInfo(&t1759_TI)->static_fields)->f0;
		if ((((t9*)(t126 *)L_26) == ((t9*)(t126 *)L_27)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_28 = (__this->f4);
		__this->f4 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00a4:
	{
		int32_t L_29 = m9392((&p0), &m9392_MI);
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_30 = (__this->f4);
		t835 * L_31 = p1;
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9585_MI, L_31);
		__this->f4 = ((int32_t)((int32_t)L_30-(int32_t)L_32));
	}

IL_00c2:
	{
		return;
	}
}
extern "C" void m9309 (t1759 * __this, t1783  p0, t835 * p1, int32_t p2, MethodInfo* method)
{
	t126 * V_0 = {0};
	{
		m9294(__this, 6, &m9294_MI);
		t1783  L_0 = p0;
		m9296(__this, L_0, &m9296_MI);
		t835 * L_1 = p1;
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_1);
		V_0 = L_2;
		t126 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		t126 * L_4 = V_0;
		t1574 * L_5 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m12024_MI, L_4);
		t1574 * L_6 = (__this->f12);
		if ((!(((t9*)(t1574 *)L_5) == ((t9*)(t1574 *)L_6))))
		{
			goto IL_002d;
		}
	}
	{
		t835 * L_7 = p1;
		m9293(__this, L_7, &m9293_MI);
	}

IL_002d:
	{
		int32_t L_8 = p2;
		m9295(__this, L_8, &m9295_MI);
		t835 * L_9 = p1;
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9595_MI, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1759_TI));
		t126 * L_11 = ((t1759_SFs*)InitializedTypeInfo(&t1759_TI)->static_fields)->f0;
		if ((((t9*)(t126 *)L_10) == ((t9*)(t126 *)L_11)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_12 = (__this->f4);
		__this->f4 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_13 = m9392((&p0), &m9392_MI);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_14 = (__this->f4);
		t835 * L_15 = p1;
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9585_MI, L_15);
		__this->f4 = ((int32_t)((int32_t)L_14-(int32_t)L_16));
	}

IL_006d:
	{
		return;
	}
}
extern MethodInfo m9310_MI;
extern "C" void m9310 (t1759 * __this, t1783  p0, t2* p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = (__this->f13);
		t2* L_1 = p1;
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t2* >::Invoke(&m12052_MI, L_0, L_1);
		V_0 = L_2;
		m9294(__this, 6, &m9294_MI);
		t1783  L_3 = p0;
		m9296(__this, L_3, &m9296_MI);
		int32_t L_4 = V_0;
		m9295(__this, L_4, &m9295_MI);
		return;
	}
}
extern MethodInfo m9311_MI;
extern "C" void m9311 (t1759 * __this, t1783  p0, t126 * p1, MethodInfo* method)
{
	{
		m9294(__this, 6, &m9294_MI);
		t1783  L_0 = p0;
		m9296(__this, L_0, &m9296_MI);
		t9 * L_1 = (__this->f13);
		t126 * L_2 = p1;
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t567 * >::Invoke(&m12051_MI, L_1, L_2);
		m9295(__this, L_3, &m9295_MI);
		return;
	}
}
extern MethodInfo m9312_MI;
extern "C" void m9312 (t1759 * __this, t1783  p0, t835 * p1, t152* p2, MethodInfo* method)
{
	int16_t V_0 = 0;
	int32_t V_1 = 0;
	t1783  V_2 = {0};
	t1783  V_3 = {0};
	{
		t835 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1744, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int16_t L_2 = m9394((&p0), &m9394_MI);
		V_0 = L_2;
		int16_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1795_TI));
		t1783  L_4 = ((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f39;
		V_2 = L_4;
		int16_t L_5 = m9394((&V_2), &m9394_MI);
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0041;
		}
	}
	{
		int16_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1795_TI));
		t1783  L_7 = ((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f110;
		V_3 = L_7;
		int16_t L_8 = m9394((&V_3), &m9394_MI);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		t169 * L_9 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_9, (t2*) &_stringLiteral1745, &m5776_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		t835 * L_10 = p1;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9586_MI, L_10);
		if (((int32_t)((int32_t)L_11&(int32_t)2)))
		{
			goto IL_0050;
		}
	}
	{
		p2 = (t152*)NULL;
	}

IL_0050:
	{
		t152* L_12 = p2;
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		t835 * L_13 = p1;
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9586_MI, L_13);
		if (((int32_t)((int32_t)L_14&(int32_t)2)))
		{
			goto IL_0068;
		}
	}
	{
		t1347 * L_15 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_15, (t2*) &_stringLiteral1746, &m5755_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0068:
	{
		t9 * L_16 = (__this->f13);
		t835 * L_17 = p1;
		t152* L_18 = p2;
		int32_t L_19 = (int32_t)InterfaceFuncInvoker2< int32_t, t835 *, t152* >::Invoke(&m12053_MI, L_16, L_17, L_18);
		V_1 = L_19;
		t1783  L_20 = p0;
		t835 * L_21 = p1;
		int32_t L_22 = V_1;
		m9309(__this, L_20, L_21, L_22, &m9309_MI);
		return;
	}

IL_0080:
	{
		t1783  L_23 = p0;
		t835 * L_24 = p1;
		VirtActionInvoker2< t1783 , t835 * >::Invoke(&m9308_MI, __this, L_23, L_24);
		return;
	}
}
extern MethodInfo m9313_MI;
extern "C" void m9313 (t1759 * __this, t1784  p0, MethodInfo* method)
{
	{
		int32_t L_0 = ((&p0)->f0);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = ((&p0)->f0);
		int32_t L_2 = (__this->f9);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0024;
		}
	}

IL_0019:
	{
		t570 * L_3 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_3, (t2*) &_stringLiteral1747, &m2949_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0024:
	{
		t1779* L_4 = (__this->f8);
		int32_t L_5 = ((&p0)->f0);
		int32_t L_6 = (((t1776 *)(t1776 *)SZArrayLdElema(L_4, L_5))->f0);
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		t570 * L_7 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_7, (t2*) &_stringLiteral1748, &m2949_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0049:
	{
		t1779* L_8 = (__this->f8);
		int32_t L_9 = ((&p0)->f0);
		int32_t L_10 = (__this->f2);
		((t1776 *)(t1776 *)SZArrayLdElema(L_8, L_9))->f0 = L_10;
		t1779* L_11 = (__this->f8);
		int32_t L_12 = ((&p0)->f0);
		int32_t L_13 = (((t1776 *)(t1776 *)SZArrayLdElema(L_11, L_12))->f1);
		int32_t L_14 = (__this->f4);
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_00a2;
		}
	}
	{
		t1779* L_15 = (__this->f8);
		int32_t L_16 = ((&p0)->f0);
		int32_t L_17 = (((t1776 *)(t1776 *)SZArrayLdElema(L_15, L_16))->f1);
		__this->f4 = L_17;
	}

IL_00a2:
	{
		return;
	}
}
extern "C" void m9314 (t1759 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_00dd;
	}

IL_0007:
	{
		t1779* L_0 = (__this->f8);
		t1780* L_1 = (__this->f10);
		int32_t L_2 = V_0;
		int32_t L_3 = (((t1775 *)(t1775 *)SZArrayLdElema(L_1, L_2))->f2);
		int32_t L_4 = (((t1776 *)(t1776 *)SZArrayLdElema(L_0, L_3))->f0);
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		t570 * L_5 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_5, (t2*) &_stringLiteral1749, &m2949_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0036:
	{
		t1779* L_6 = (__this->f8);
		t1780* L_7 = (__this->f10);
		int32_t L_8 = V_0;
		int32_t L_9 = (((t1775 *)(t1775 *)SZArrayLdElema(L_7, L_8))->f2);
		int32_t L_10 = (((t1776 *)(t1776 *)SZArrayLdElema(L_6, L_9))->f0);
		t1780* L_11 = (__this->f10);
		int32_t L_12 = V_0;
		int32_t L_13 = (((t1775 *)(t1775 *)SZArrayLdElema(L_11, L_12))->f1);
		t1780* L_14 = (__this->f10);
		int32_t L_15 = V_0;
		int32_t L_16 = (((t1775 *)(t1775 *)SZArrayLdElema(L_14, L_15))->f0);
		V_1 = ((int32_t)((int32_t)L_10-(int32_t)((int32_t)((int32_t)L_13+(int32_t)L_16))));
		t1780* L_17 = (__this->f10);
		int32_t L_18 = V_0;
		int32_t L_19 = (((t1775 *)(t1775 *)SZArrayLdElema(L_17, L_18))->f0);
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00ad;
		}
	}
	{
		t737* L_20 = (__this->f1);
		t1780* L_21 = (__this->f10);
		int32_t L_22 = V_0;
		int32_t L_23 = (((t1775 *)(t1775 *)SZArrayLdElema(L_21, L_22))->f1);
		int32_t L_24 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_23)) = (uint8_t)(((uint8_t)(((int8_t)L_24))));
		goto IL_00d9;
	}

IL_00ad:
	{
		int32_t L_25 = (__this->f2);
		V_2 = L_25;
		t1780* L_26 = (__this->f10);
		int32_t L_27 = V_0;
		int32_t L_28 = (((t1775 *)(t1775 *)SZArrayLdElema(L_26, L_27))->f1);
		__this->f2 = L_28;
		int32_t L_29 = V_1;
		m9295(__this, L_29, &m9295_MI);
		int32_t L_30 = V_2;
		__this->f2 = L_30;
	}

IL_00d9:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_00dd:
	{
		int32_t L_32 = V_0;
		int32_t L_33 = (__this->f11);
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
extern "C" int32_t m9315 (t9 * __this , t1759 * p0, MethodInfo* method)
{
	{
		t1759 * L_0 = p0;
		int32_t L_1 = (L_0->f2);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t125MD.h"
extern MethodInfo m4270_MI;


extern "C" void m9316 (t1784 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9317_MI;
extern "C" bool m9317 (t1784 * __this, t9 * p0, MethodInfo* method)
{
	bool V_0 = false;
	t1784  V_1 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((!(((t9*)(t9 *)((t9 *)IsInst(L_0, InitializedTypeInfo(&t1784_TI)))) <= ((t9*)(t9 *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		t9 * L_2 = p0;
		V_1 = ((*(t1784 *)((t1784 *)UnBox (L_2, InitializedTypeInfo(&t1784_TI)))));
		int32_t L_3 = (__this->f0);
		int32_t L_4 = ((&V_1)->f0);
		V_0 = ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0024:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
extern MethodInfo m9318_MI;
extern "C" int32_t m9318 (t1784 * __this, MethodInfo* method)
{
	{
		int32_t* L_0 = &(__this->f0);
		int32_t L_1 = m4270(L_0, &m4270_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1785MD.h"
extern MethodInfo m9573_MI;


extern "C" void m9319 (t1782 * __this, t126 * p0, t1759 * p1, MethodInfo* method)
{
	{
		m9573(__this, &m9573_MI);
		t126 * L_0 = p0;
		__this->f0 = L_0;
		t1759 * L_1 = p1;
		__this->f3 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1787.h"
extern MethodInfo m9344_MI;
extern MethodInfo m9593_MI;
extern MethodInfo m9342_MI;
extern MethodInfo m9329_MI;
extern MethodInfo m9338_MI;
extern MethodInfo m671_MI;
extern MethodInfo m4273_MI;


extern MethodInfo m9320_MI;
extern TypeInfo* t152_TI_var;
extern "C" void m9320 (t1773 * __this, t1760 * p0, t2* p1, int32_t p2, int32_t p3, t126 * p4, t152* p5, t152* p6, t152* p7, t1762* p8, t1762* p9, MethodInfo* method)
{
	static bool m9320_init;
	if (!m9320_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9320_init = true;
	}
	int32_t V_0 = 0;
	t1765  V_1 = {0};
	{
		__this->f11 = 1;
		m9593(__this, &m9593_MI);
		t2* L_0 = p1;
		__this->f4 = L_0;
		int32_t L_1 = p2;
		__this->f2 = L_1;
		int32_t L_2 = p3;
		__this->f10 = L_2;
		t126 * L_3 = p4;
		__this->f0 = L_3;
		t152* L_4 = p5;
		__this->f13 = L_4;
		t152* L_5 = p6;
		__this->f14 = L_5;
		t1762* L_6 = p8;
		__this->f15 = L_6;
		t1762* L_7 = p9;
		__this->f16 = L_7;
		int32_t L_8 = p2;
		if (((int32_t)((int32_t)L_8&(int32_t)((int32_t)16))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_9 = (__this->f10);
		__this->f10 = ((int32_t)((int32_t)L_9|(int32_t)((int32_t)32)));
	}

IL_0060:
	{
		t152* L_10 = p7;
		if (!L_10)
		{
			goto IL_00a9;
		}
	}
	{
		V_0 = 0;
		goto IL_0082;
	}

IL_0068:
	{
		t152* L_11 = p7;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		if ((*(t126 **)(t126 **)SZArrayLdElema(L_11, L_13)))
		{
			goto IL_007e;
		}
	}
	{
		t570 * L_14 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_14, (t2*) &_stringLiteral1730, (t2*) &_stringLiteral1731, &m5761_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_007e:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0082:
	{
		int32_t L_16 = V_0;
		t152* L_17 = p7;
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((t121 *)L_17)->max_length))))))
		{
			goto IL_0068;
		}
	}
	{
		t152* L_18 = p7;
		__this->f1 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_18)->max_length)))));
		t152* L_19 = p7;
		t152* L_20 = (__this->f1);
		t152* L_21 = p7;
		m5982(NULL, (t121 *)(t121 *)L_19, (t121 *)(t121 *)L_20, (((int32_t)(((t121 *)L_21)->max_length))), &m5982_MI);
	}

IL_00a9:
	{
		t1760 * L_22 = p0;
		__this->f7 = L_22;
		int32_t L_23 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, bool >::Invoke(&m9342_MI, __this, __this, 6, 1);
		__this->f5 = L_23;
		t1760 * L_24 = p0;
		t1574 * L_25 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m9432_MI, L_24);
		t1765  L_26 = m9329(__this, &m9329_MI);
		V_1 = L_26;
		int32_t L_27 = m9354((&V_1), &m9354_MI);
		m9377(((t1755 *)Castclass(L_25, InitializedTypeInfo(&t1755_TI))), __this, L_27, &m9377_MI);
		return;
	}
}
extern MethodInfo m9321_MI;
extern "C" bool m9321 (t1773 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9322_MI;
extern "C" t1764  m9322 (t1773 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9344(__this, &m9344_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9323_MI;
extern "C" t126 * m9323 (t1773 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9324_MI;
extern "C" t126 * m9324 (t1773 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" t126 * m9325 (t1773 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9326_MI;
extern "C" t2* m9326 (t1773 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9327_MI;
extern "C" int32_t m9327 (t1773 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9328_MI;
extern "C" int32_t m9328 (t1773 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern "C" t1765  m9329 (t1773 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		t1765  L_1 = {0};
		m9350(&L_1, ((int32_t)((int32_t)((int32_t)100663296)|(int32_t)L_0)), &m9350_MI);
		return L_1;
	}
}
extern MethodInfo m9330_MI;
extern "C" t835 * m9330 (t1773 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m9331_MI;
extern TypeInfo* t934_TI_var;
extern "C" t934* m9331 (t1773 * __this, MethodInfo* method)
{
	static bool m9331_init;
	if (!m9331_init)
	{
		t934_TI_var = il2cpp_codegen_class_from_type(&t934_0_0_0);
		m9331_init = true;
	}
	t934* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B7_0 = 0;
	t934* G_B7_1 = {0};
	int32_t G_B6_0 = 0;
	t934* G_B6_1 = {0};
	t1796 * G_B8_0 = {0};
	int32_t G_B8_1 = 0;
	t934* G_B8_2 = {0};
	{
		t1760 * L_0 = (__this->f7);
		bool L_1 = m9470(L_0, &m9470_MI);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		t138 * L_2 = m9344(__this, &m9344_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		t152* L_3 = (__this->f1);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (t934*)NULL;
	}

IL_001e:
	{
		t152* L_4 = (__this->f1);
		V_0 = ((t934*)SZArrayNew(t934_TI_var, (((int32_t)(((t121 *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_005d;
	}

IL_0030:
	{
		t934* L_5 = V_0;
		int32_t L_6 = V_1;
		t1761* L_7 = (__this->f8);
		G_B6_0 = L_6;
		G_B6_1 = L_5;
		if (L_7)
		{
			G_B7_0 = L_6;
			G_B7_1 = L_5;
			goto IL_003d;
		}
	}
	{
		G_B8_0 = ((t1796 *)(NULL));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0047;
	}

IL_003d:
	{
		t1761* L_8 = (__this->f8);
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)((int32_t)L_9+(int32_t)1));
		G_B8_0 = (*(t1796 **)(t1796 **)SZArrayLdElema(L_8, L_10));
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0047:
	{
		t152* L_11 = (__this->f1);
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		int32_t L_14 = V_1;
		t930 * L_15 = (t930 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t930_TI));
		m9739(L_15, G_B8_0, (*(t126 **)(t126 **)SZArrayLdElema(L_11, L_13)), __this, ((int32_t)((int32_t)L_14+(int32_t)1)), &m9739_MI);
		ArrayElementTypeCheck (G_B8_2, L_15);
		*((t930 **)(t930 **)SZArrayLdElema(G_B8_2, G_B8_1)) = (t930 *)L_15;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_005d:
	{
		int32_t L_17 = V_1;
		t152* L_18 = (__this->f1);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((t121 *)L_18)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		t934* L_19 = V_0;
		return L_19;
	}
}
extern MethodInfo m9332_MI;
extern "C" int32_t m9332 (t1773 * __this, MethodInfo* method)
{
	{
		t152* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		t152* L_1 = (__this->f1);
		return (((int32_t)(((t121 *)L_1)->max_length)));
	}
}
extern MethodInfo m9333_MI;
extern "C" t9 * m9333 (t1773 * __this, t9 * p0, int32_t p1, t939 * p2, t158* p3, t907 * p4, MethodInfo* method)
{
	{
		t138 * L_0 = m9344(__this, &m9344_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9334_MI;
extern "C" bool m9334 (t1773 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9344(__this, &m9344_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9335_MI;
extern "C" t158* m9335 (t1773 * __this, bool p0, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f7);
		bool L_1 = m9470(L_0, &m9470_MI);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_3 = m11645(NULL, __this, L_2, &m11645_MI);
		return L_3;
	}

IL_0015:
	{
		t138 * L_4 = m9344(__this, &m9344_MI);
		il2cpp_codegen_raise_exception(L_4);
	}
}
extern MethodInfo m9336_MI;
extern "C" t158* m9336 (t1773 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f7);
		bool L_1 = m9470(L_0, &m9470_MI);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t126 * L_2 = p0;
		bool L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_4 = m11644(NULL, __this, L_2, L_3, &m11644_MI);
		return L_4;
	}

IL_0016:
	{
		t138 * L_5 = m9344(__this, &m9344_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m9337_MI;
extern "C" t1759 * m9337 (t1773 * __this, MethodInfo* method)
{
	{
		t1759 * L_0 = m9338(__this, ((int32_t)64), &m9338_MI);
		return L_0;
	}
}
extern "C" t1759 * m9338 (t1773 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		if (((int32_t)((int32_t)L_0&(int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = (__this->f3);
		if (!((int32_t)((int32_t)L_1&(int32_t)4)))
		{
			goto IL_001f;
		}
	}

IL_0014:
	{
		t1347 * L_2 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_2, (t2*) &_stringLiteral1750, &m5755_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001f:
	{
		t1759 * L_3 = (__this->f6);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		t1759 * L_4 = (__this->f6);
		return L_4;
	}

IL_002e:
	{
		t1760 * L_5 = (__this->f7);
		t1574 * L_6 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m9432_MI, L_5);
		t1760 * L_7 = (__this->f7);
		t1574 * L_8 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m9432_MI, L_7);
		t9 * L_9 = m9378(((t1755 *)Castclass(L_8, InitializedTypeInfo(&t1755_TI))), &m9378_MI);
		int32_t L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1759_TI));
		t1759 * L_11 = (t1759 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1759_TI));
		m9291(L_11, L_6, L_9, L_10, &m9291_MI);
		__this->f6 = L_11;
		t1759 * L_12 = (__this->f6);
		return L_12;
	}
}
extern MethodInfo m9339_MI;
extern TypeInfo* t221_TI_var;
extern "C" t2* m9339 (t1773 * __this, MethodInfo* method)
{
	static bool m9339_init;
	if (!m9339_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9339_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, 5));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral1751);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral1751;
		t221* L_1 = L_0;
		t1760 * L_2 = (__this->f7);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9433_MI, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)L_3;
		t221* L_4 = L_1;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral473);
		*((t2**)(t2**)SZArrayLdElema(L_4, 2)) = (t2*)(t2*) &_stringLiteral473;
		t221* L_5 = L_4;
		t2* L_6 = (__this->f4);
		ArrayElementTypeCheck (L_5, L_6);
		*((t2**)(t2**)SZArrayLdElema(L_5, 3)) = (t2*)L_6;
		t221* L_7 = L_5;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral341);
		*((t2**)(t2**)SZArrayLdElema(L_7, 4)) = (t2*)(t2*) &_stringLiteral341;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = m4335(NULL, L_7, &m4335_MI);
		return L_8;
	}
}
extern MethodInfo m9340_MI;
extern "C" bool m9340 (t1773 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		bool L_1 = m671(__this, L_0, &m671_MI);
		return L_1;
	}
}
extern MethodInfo m9341_MI;
extern "C" int32_t m9341 (t1773 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f4);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4273_MI, L_0);
		return L_1;
	}
}
extern "C" int32_t m9342 (t1773 * __this, t9 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f7);
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = p2;
		int32_t L_4 = m9468(L_0, L_1, L_2, L_3, &m9468_MI);
		return L_4;
	}
}
extern MethodInfo m9343_MI;
extern "C" void m9343 (t1773 * __this, t835 * p0, MethodInfo* method)
{
	{
		t835 * L_0 = p0;
		__this->f9 = L_0;
		return;
	}
}
extern "C" t138 * m9344 (t1773 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_0, (t2*) &_stringLiteral1721, &m5776_MI);
		return L_0;
	}
}
extern MethodInfo m9345_MI;
extern "C" t835 * m9345 (t1773 * __this, t152* p0, MethodInfo* method)
{
	typedef t835 * (*m9345_ftn) (t1773 *, t152*);
	static m9345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9345_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m9346_MI;
extern "C" bool m9346 (t1773 * __this, MethodInfo* method)
{
	{
		t1786* L_0 = (__this->f12);
		return ((((int32_t)((((t9*)(t1786*)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9347_MI;
extern "C" bool m9347 (t1773 * __this, MethodInfo* method)
{
	{
		t1786* L_0 = (__this->f12);
		return ((((int32_t)((((t9*)(t1786*)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9348_MI;
extern TypeInfo* t152_TI_var;
extern "C" t152* m9348 (t1773 * __this, MethodInfo* method)
{
	static bool m9348_init;
	if (!m9348_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9348_init = true;
	}
	t152* V_0 = {0};
	int32_t V_1 = 0;
	{
		t1786* L_0 = (__this->f12);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_1 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		return L_1;
	}

IL_000e:
	{
		t1786* L_2 = (__this->f12);
		V_0 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_2)->max_length)))));
		V_1 = 0;
		goto IL_002f;
	}

IL_0020:
	{
		t152* L_3 = V_0;
		int32_t L_4 = V_1;
		t1786* L_5 = (__this->f12);
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		ArrayElementTypeCheck (L_3, (*(t1772 **)(t1772 **)SZArrayLdElema(L_5, L_7)));
		*((t126 **)(t126 **)SZArrayLdElema(L_3, L_4)) = (t126 *)(*(t1772 **)(t1772 **)SZArrayLdElema(L_5, L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_9 = V_1;
		t1786* L_10 = (__this->f12);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((t121 *)L_10)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		t152* L_11 = V_0;
		return L_11;
	}
}
extern MethodInfo m9349_MI;
extern "C" t1574 * m9349 (t1773 * __this, MethodInfo* method)
{
	{
		t1574 * L_0 = m7854(__this, &m7854_MI);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9350 (t1765 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9351_MI;
extern "C" void m9351 (t9 * __this , MethodInfo* method)
{
	t1765  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&t1765_TI), (&V_0));
		t1765  L_0 = V_0;
		((t1765_SFs*)InitializedTypeInfo(&t1765_TI)->static_fields)->f1 = L_0;
		return;
	}
}
extern MethodInfo m9352_MI;
extern "C" bool m9352 (t1765 * __this, t9 * p0, MethodInfo* method)
{
	bool V_0 = false;
	t1765  V_1 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((!(((t9*)(t9 *)((t9 *)IsInst(L_0, InitializedTypeInfo(&t1765_TI)))) <= ((t9*)(t9 *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		t9 * L_2 = p0;
		V_1 = ((*(t1765 *)((t1765 *)UnBox (L_2, InitializedTypeInfo(&t1765_TI)))));
		int32_t L_3 = (__this->f0);
		int32_t L_4 = ((&V_1)->f0);
		V_0 = ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0024:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
extern MethodInfo m9353_MI;
extern "C" int32_t m9353 (t1765 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" int32_t m9354 (t1765 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1164.h"
#include "t2125.h"
#include "t1791.h"
#include "t2116.h"
#include "t1789.h"
extern TypeInfo t1164_TI;
extern TypeInfo t924_TI;
extern TypeInfo t2125_TI;
extern TypeInfo t1790_TI;
extern TypeInfo t1788_TI;
extern TypeInfo t2116_TI;
extern TypeInfo t1101_TI;
extern TypeInfo t1789_TI;
#include "t1164MD.h"
#include "t924MD.h"
#include "t1407MD.h"
#include "t2125MD.h"
#include "t1353MD.h"
#include "t2116MD.h"
#include "t1789MD.h"
extern Il2CppType t1788_0_0_0;
extern Il2CppType t1101_0_0_0;
extern MethodInfo m5953_MI;
extern MethodInfo m9604_MI;
extern MethodInfo m11595_MI;
extern MethodInfo m9370_MI;
extern MethodInfo m9357_MI;
extern MethodInfo m9380_MI;
extern MethodInfo m9421_MI;
extern MethodInfo m6116_MI;
extern MethodInfo m9358_MI;
extern MethodInfo m9505_MI;
extern MethodInfo m11575_MI;
extern MethodInfo m5814_MI;
extern MethodInfo m11154_MI;
extern MethodInfo m12054_MI;
extern MethodInfo m9363_MI;
extern MethodInfo m5809_MI;
extern MethodInfo m9422_MI;
extern MethodInfo m9361_MI;
extern MethodInfo m5778_MI;
extern MethodInfo m9362_MI;
extern MethodInfo m9369_MI;
extern MethodInfo m2834_MI;
extern MethodInfo m9366_MI;
extern MethodInfo m9368_MI;
extern MethodInfo m11908_MI;
extern MethodInfo m5777_MI;
extern MethodInfo m9365_MI;
extern MethodInfo m9367_MI;
extern MethodInfo m5964_MI;
extern MethodInfo m9371_MI;
extern MethodInfo m5961_MI;
extern MethodInfo m9372_MI;
extern MethodInfo m9373_MI;
extern MethodInfo m9381_MI;


extern TypeInfo* t158_TI_var;
extern "C" void m9355 (t1755 * __this, t1750 * p0, t2* p1, t2* p2, bool p3, bool p4, MethodInfo* method)
{
	static bool m9355_init;
	if (!m9355_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9355_init = true;
	}
	t1760 * V_0 = {0};
	t126 * V_1 = {0};
	t1351 * V_2 = {0};
	t126 * V_3 = {0};
	t2* V_4 = {0};
	t2* V_5 = {0};
	t1750 * V_6 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		t1164 * L_0 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5953(L_0, &m5953_MI);
		__this->f17 = L_0;
		m9604(__this, &m9604_MI);
		t2* L_1 = p1;
		t2* L_2 = L_1;
		V_5 = L_2;
		__this->f7 = L_2;
		t2* L_3 = V_5;
		__this->f6 = L_3;
		t2* L_4 = p2;
		__this->f5 = L_4;
		t1750 * L_5 = p0;
		t1750 * L_6 = L_5;
		V_6 = L_6;
		__this->f14 = L_6;
		t1750 * L_7 = V_6;
		__this->f4 = L_7;
		bool L_8 = p4;
		__this->f19 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		t737* L_9 = m11595(NULL, &m11595_MI);
		__this->f12 = L_9;
		int32_t L_10 = m9370(__this, __this, 0, 1, &m9370_MI);
		__this->f13 = L_10;
		t1164 * L_11 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5953(L_11, &m5953_MI);
		__this->f16 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1755_TI));
		m9357(NULL, __this, &m9357_MI);
		m9380(__this, &m9380_MI);
		t1750 * L_12 = p0;
		bool L_13 = m9145(L_12, &m9145_MI);
		if (!L_13)
		{
			goto IL_009c;
		}
	}
	{
		t1760 * L_14 = (t1760 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1760_TI));
		m9421(L_14, __this, ((int32_t)128), ((int32_t)16777215), &m9421_MI);
		V_0 = L_14;
		t1760 * L_15 = V_0;
		t126 * L_16 = m6116(NULL, L_15, &m6116_MI);
		V_1 = L_16;
		t126 * L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1755_TI));
		m9358(NULL, __this, L_17, &m9358_MI);
	}

IL_009c:
	{
		bool L_18 = p3;
		if (!L_18)
		{
			goto IL_012d;
		}
	}
	{
		t1351 * L_19 = m9505(NULL, (t2*) &_stringLiteral1752, &m9505_MI);
		V_2 = L_19;
		t1351 * L_20 = V_2;
		if (L_20)
		{
			goto IL_00bc;
		}
	}
	{
		t2125 * L_21 = (t2125 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2125_TI));
		m11575(L_21, (t2*) &_stringLiteral1753, &m11575_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_00bc:
	{
		t1351 * L_22 = V_2;
		t126 * L_23 = (t126 *)VirtFuncInvoker1< t126 *, t2* >::Invoke(&m5814_MI, L_22, (t2*) &_stringLiteral1754);
		V_3 = L_23;
		t126 * L_24 = V_3;
		if (L_24)
		{
			goto IL_00d6;
		}
	}
	{
		t2125 * L_25 = (t2125 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2125_TI));
		m11575(L_25, (t2*) &_stringLiteral1755, &m11575_MI);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_00d6:
	{
		t126 * L_26 = V_3;
		t158* L_27 = ((t158*)SZArrayNew(t158_TI_var, 1));
		ArrayElementTypeCheck (L_27, __this);
		*((t9 **)(t9 **)SZArrayLdElema(L_27, 0)) = (t9 *)__this;
		t9 * L_28 = m11154(NULL, L_26, L_27, &m11154_MI);
		__this->f21 = ((t9 *)Castclass(L_28, InitializedTypeInfo(&t1790_TI)));
		t2* L_29 = (__this->f5);
		V_4 = L_29;
		t1750 * L_30 = (__this->f14);
		t2* L_31 = m9146(L_30, &m9146_MI);
		if (!L_31)
		{
			goto IL_011a;
		}
	}
	{
		t1750 * L_32 = (__this->f14);
		t2* L_33 = m9146(L_32, &m9146_MI);
		t2* L_34 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_35 = m1124(NULL, L_33, L_34, &m1124_MI);
		V_4 = L_35;
	}

IL_011a:
	{
		t9 * L_36 = (__this->f21);
		t58 L_37 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		t2* L_38 = V_4;
		InterfaceActionInvoker3< t58, t2*, bool >::Invoke(&m12054_MI, L_36, L_37, L_38, 1);
	}

IL_012d:
	{
		return;
	}
}
extern MethodInfo m9356_MI;
extern TypeInfo* t318_TI_var;
extern "C" void m9356 (t9 * __this , MethodInfo* method)
{
	static bool m9356_init;
	if (!m9356_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m9356_init = true;
	}
	{
		t318* L_0 = ((t318*)SZArrayNew(t318_TI_var, 3));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)38);
		t318* L_1 = L_0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 1)) = (uint16_t)((int32_t)91);
		t318* L_2 = L_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 2)) = (uint16_t)((int32_t)42);
		((t1755_SFs*)InitializedTypeInfo(&t1755_TI)->static_fields)->f22 = L_2;
		return;
	}
}
extern "C" void m9357 (t9 * __this , t1755 * p0, MethodInfo* method)
{
	typedef void (*m9357_ftn) (t1755 *);
	static m9357_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9357_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::basic_init(System.Reflection.Emit.ModuleBuilder)");
	_il2cpp_icall_func(p0);
}
extern "C" void m9358 (t9 * __this , t1755 * p0, t126 * p1, MethodInfo* method)
{
	typedef void (*m9358_ftn) (t1755 *, t126 *);
	static m9358_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9358_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::set_wrappers_type(System.Reflection.Emit.ModuleBuilder,System.Type)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" bool m9359 (t1755 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f19);
		return L_0;
	}
}
extern MethodInfo m9360_MI;
extern "C" t1760 * m9360 (t1755 * __this, t2* p0, int32_t p1, t126 * p2, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		t126 * L_2 = p2;
		t1760 * L_3 = m9363(__this, L_0, L_1, L_2, (t152*)(t152*)NULL, &m9363_MI);
		return L_3;
	}
}
extern TypeInfo* t1788_TI_var;
extern "C" void m9361 (t1755 * __this, t1760 * p0, MethodInfo* method)
{
	static bool m9361_init;
	if (!m9361_init)
	{
		t1788_TI_var = il2cpp_codegen_class_from_type(&t1788_0_0_0);
		m9361_init = true;
	}
	t1788* V_0 = {0};
	{
		t1788* L_0 = (__this->f11);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		t1788* L_1 = (__this->f11);
		int32_t L_2 = (__this->f10);
		if ((!(((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))) == ((uint32_t)L_2))))
		{
			goto IL_0041;
		}
	}
	{
		t1788* L_3 = (__this->f11);
		V_0 = ((t1788*)SZArrayNew(t1788_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_3)->max_length)))*(int32_t)2))));
		t1788* L_4 = (__this->f11);
		t1788* L_5 = V_0;
		int32_t L_6 = (__this->f10);
		m5982(NULL, (t121 *)(t121 *)L_4, (t121 *)(t121 *)L_5, L_6, &m5982_MI);
		t1788* L_7 = V_0;
		__this->f11 = L_7;
	}

IL_0041:
	{
		goto IL_004f;
	}

IL_0043:
	{
		__this->f11 = ((t1788*)SZArrayNew(t1788_TI_var, 1));
	}

IL_004f:
	{
		t1788* L_8 = (__this->f11);
		int32_t L_9 = (__this->f10);
		t1760 * L_10 = p0;
		ArrayElementTypeCheck (L_8, L_10);
		*((t1760 **)(t1760 **)SZArrayLdElema(L_8, L_9)) = (t1760 *)L_10;
		int32_t L_11 = (__this->f10);
		__this->f10 = ((int32_t)((int32_t)L_11+(int32_t)1));
		return;
	}
}
extern "C" t1760 * m9362 (t1755 * __this, t2* p0, int32_t p1, t126 * p2, t152* p3, int32_t p4, int32_t p5, MethodInfo* method)
{
	t1760 * V_0 = {0};
	{
		t1164 * L_0 = (__this->f16);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m5809_MI, L_0, L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		t570 * L_3 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_3, (t2*) &_stringLiteral1756, &m2949_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0019:
	{
		t2* L_4 = p0;
		int32_t L_5 = p1;
		t126 * L_6 = p2;
		t152* L_7 = p3;
		int32_t L_8 = p4;
		int32_t L_9 = p5;
		t1760 * L_10 = (t1760 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1760_TI));
		m9422(L_10, __this, L_4, L_5, L_6, L_7, L_8, L_9, (t126 *)NULL, &m9422_MI);
		V_0 = L_10;
		t1760 * L_11 = V_0;
		m9361(__this, L_11, &m9361_MI);
		t1164 * L_12 = (__this->f16);
		t2* L_13 = p0;
		t1760 * L_14 = V_0;
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5778_MI, L_12, L_13, L_14);
		t1760 * L_15 = V_0;
		return L_15;
	}
}
extern "C" t1760 * m9363 (t1755 * __this, t2* p0, int32_t p1, t126 * p2, t152* p3, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		t126 * L_2 = p2;
		t152* L_3 = p3;
		t1760 * L_4 = m9362(__this, L_0, L_1, L_2, L_3, 0, 0, &m9362_MI);
		return L_4;
	}
}
extern MethodInfo m9364_MI;
extern "C" t126 * m9364 (t1755 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t126 * L_1 = (t126 *)VirtFuncInvoker3< t126 *, t2*, bool, bool >::Invoke(&m9369_MI, __this, L_0, 0, 0);
		return L_1;
	}
}
extern "C" t1760 * m9365 (t1755 * __this, t1788* p0, int32_t p1, t2* p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		t2* L_0 = p2;
		t1788* L_1 = p0;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9431_MI, (*(t1760 **)(t1760 **)SZArrayLdElema(L_1, L_3)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_5 = m4400(NULL, &m4400_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_6 = m5811(NULL, L_0, L_4, 1, L_5, &m5811_MI);
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		t1788* L_7 = p0;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		return (*(t1760 **)(t1760 **)SZArrayLdElema(L_7, L_9));
	}

IL_001e:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = p1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		return (t1760 *)NULL;
	}
}
extern "C" t1760 * m9366 (t1755 * __this, t1788* p0, int32_t p1, t2* p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		t2* L_0 = p2;
		t1788* L_1 = p0;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9433_MI, (*(t1760 **)(t1760 **)SZArrayLdElema(L_1, L_3)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_5 = m4400(NULL, &m4400_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_6 = m5811(NULL, L_0, L_4, 1, L_5, &m5811_MI);
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		t1788* L_7 = p0;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		return (*(t1760 **)(t1760 **)SZArrayLdElema(L_7, L_9));
	}

IL_001e:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = p1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		return (t1760 *)NULL;
	}
}
extern "C" t126 * m9367 (t9 * __this , t1760 * p0, t2* p1, MethodInfo* method)
{
	typedef t126 * (*m9367_ftn) (t1760 *, t2*);
	static m9367_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9367_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::create_modified_type(System.Reflection.Emit.TypeBuilder,System.String)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" t1760 * m9368 (t1755 * __this, t1760 * p0, t2* p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	t2* V_1 = {0};
	t2* V_2 = {0};
	t1760 * V_3 = {0};
	{
		t2* L_0 = p1;
		int32_t L_1 = m2834(L_0, ((int32_t)43), &m2834_MI);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		t1760 * L_3 = p0;
		t1788* L_4 = (L_3->f18);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		t1760 * L_5 = p0;
		t1788* L_6 = (L_5->f18);
		t1760 * L_7 = p0;
		t1788* L_8 = (L_7->f18);
		t2* L_9 = p1;
		t1760 * L_10 = m9366(__this, L_6, (((int32_t)(((t121 *)L_8)->max_length))), L_9, &m9366_MI);
		return L_10;
	}

IL_002b:
	{
		return (t1760 *)NULL;
	}

IL_002d:
	{
		t1760 * L_11 = p0;
		t1788* L_12 = (L_11->f18);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		t2* L_13 = p1;
		int32_t L_14 = V_0;
		t2* L_15 = m2779(L_13, 0, L_14, &m2779_MI);
		V_1 = L_15;
		t2* L_16 = p1;
		int32_t L_17 = V_0;
		t2* L_18 = m2805(L_16, ((int32_t)((int32_t)L_17+(int32_t)1)), &m2805_MI);
		V_2 = L_18;
		t1760 * L_19 = p0;
		t1788* L_20 = (L_19->f18);
		t1760 * L_21 = p0;
		t1788* L_22 = (L_21->f18);
		t2* L_23 = V_1;
		t1760 * L_24 = m9366(__this, L_20, (((int32_t)(((t121 *)L_22)->max_length))), L_23, &m9366_MI);
		V_3 = L_24;
		t1760 * L_25 = V_3;
		if (!L_25)
		{
			goto IL_006a;
		}
	}
	{
		t1760 * L_26 = V_3;
		t2* L_27 = V_2;
		t1760 * L_28 = m9368(__this, L_26, L_27, &m9368_MI);
		return L_28;
	}

IL_006a:
	{
		return (t1760 *)NULL;
	}
}
extern "C" t126 * m9369 (t1755 * __this, t2* p0, bool p1, bool p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	t2* V_1 = {0};
	t2* V_2 = {0};
	t1760 * V_3 = {0};
	t2* V_4 = {0};
	t2* V_5 = {0};
	t126 * V_6 = {0};
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1757, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2763(L_2, &m2763_MI);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_4, (t2*) &_stringLiteral1757, &m2949_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t2* L_5 = p0;
		V_1 = L_5;
		V_3 = (t1760 *)NULL;
		t1788* L_6 = (__this->f11);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		bool L_7 = p1;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		t2* L_8 = p0;
		t2116 * L_9 = (t2116 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2116_TI));
		m11908(L_9, L_8, &m11908_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0037:
	{
		t2* L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1755_TI));
		t318* L_11 = ((t1755_SFs*)InitializedTypeInfo(&t1755_TI)->static_fields)->f22;
		int32_t L_12 = m6022(L_10, L_11, &m6022_MI);
		V_0 = L_12;
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		t2* L_14 = p0;
		int32_t L_15 = V_0;
		t2* L_16 = m2805(L_14, L_15, &m2805_MI);
		V_2 = L_16;
		t2* L_17 = p0;
		int32_t L_18 = V_0;
		t2* L_19 = m2779(L_17, 0, L_18, &m2779_MI);
		p0 = L_19;
		goto IL_005f;
	}

IL_005d:
	{
		V_2 = (t2*)NULL;
	}

IL_005f:
	{
		bool L_20 = p2;
		if (L_20)
		{
			goto IL_0076;
		}
	}
	{
		t1164 * L_21 = (__this->f16);
		t2* L_22 = p0;
		t9 * L_23 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5777_MI, L_21, L_22);
		V_3 = ((t1760 *)IsInst(L_23, InitializedTypeInfo(&t1760_TI)));
		goto IL_00d8;
	}

IL_0076:
	{
		t2* L_24 = p0;
		int32_t L_25 = m2834(L_24, ((int32_t)43), &m2834_MI);
		V_0 = L_25;
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		t1788* L_27 = (__this->f11);
		if (!L_27)
		{
			goto IL_009f;
		}
	}
	{
		t1788* L_28 = (__this->f11);
		int32_t L_29 = (__this->f10);
		t2* L_30 = p0;
		t1760 * L_31 = m9365(__this, L_28, L_29, L_30, &m9365_MI);
		V_3 = L_31;
	}

IL_009f:
	{
		goto IL_00d8;
	}

IL_00a1:
	{
		t2* L_32 = p0;
		int32_t L_33 = V_0;
		t2* L_34 = m2779(L_32, 0, L_33, &m2779_MI);
		V_4 = L_34;
		t2* L_35 = p0;
		int32_t L_36 = V_0;
		t2* L_37 = m2805(L_35, ((int32_t)((int32_t)L_36+(int32_t)1)), &m2805_MI);
		V_5 = L_37;
		t1788* L_38 = (__this->f11);
		int32_t L_39 = (__this->f10);
		t2* L_40 = V_4;
		t1760 * L_41 = m9365(__this, L_38, L_39, L_40, &m9365_MI);
		V_3 = L_41;
		t1760 * L_42 = V_3;
		if (!L_42)
		{
			goto IL_00d8;
		}
	}
	{
		t1760 * L_43 = V_3;
		t2* L_44 = V_5;
		t1760 * L_45 = m9368(__this, L_43, L_44, &m9368_MI);
		V_3 = L_45;
	}

IL_00d8:
	{
		t1760 * L_46 = V_3;
		if (L_46)
		{
			goto IL_00e5;
		}
	}
	{
		bool L_47 = p1;
		if (!L_47)
		{
			goto IL_00e5;
		}
	}
	{
		t2* L_48 = V_1;
		t2116 * L_49 = (t2116 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2116_TI));
		m11908(L_49, L_48, &m11908_MI);
		il2cpp_codegen_raise_exception(L_49);
	}

IL_00e5:
	{
		t1760 * L_50 = V_3;
		if (!L_50)
		{
			goto IL_0102;
		}
	}
	{
		t2* L_51 = V_2;
		if (!L_51)
		{
			goto IL_0102;
		}
	}
	{
		t1760 * L_52 = V_3;
		t2* L_53 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1755_TI));
		t126 * L_54 = m9367(NULL, L_52, L_53, &m9367_MI);
		V_6 = L_54;
		t126 * L_55 = V_6;
		V_3 = ((t1760 *)IsInst(L_55, InitializedTypeInfo(&t1760_TI)));
		t1760 * L_56 = V_3;
		if (L_56)
		{
			goto IL_0102;
		}
	}
	{
		t126 * L_57 = V_6;
		return L_57;
	}

IL_0102:
	{
		t1760 * L_58 = V_3;
		if (!L_58)
		{
			goto IL_0114;
		}
	}
	{
		t1760 * L_59 = V_3;
		bool L_60 = m9470(L_59, &m9470_MI);
		if (!L_60)
		{
			goto IL_0114;
		}
	}
	{
		t1760 * L_61 = V_3;
		t126 * L_62 = m6116(NULL, L_61, &m6116_MI);
		return L_62;
	}

IL_0114:
	{
		t1760 * L_63 = V_3;
		return L_63;
	}
}
extern TypeInfo* t1101_TI_var;
extern "C" int32_t m9370 (t1755 * __this, t9 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	static bool m9370_init;
	if (!m9370_init)
	{
		t1101_TI_var = il2cpp_codegen_class_from_type(&t1101_0_0_0);
		m9370_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t1101* L_0 = (__this->f18);
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		__this->f18 = ((t1101*)SZArrayNew(t1101_TI_var, ((int32_t)64)));
		V_0 = 0;
		goto IL_0026;
	}

IL_0019:
	{
		t1101* L_1 = (__this->f18);
		int32_t L_2 = V_0;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2)) = (int32_t)1;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)64))))
		{
			goto IL_0019;
		}
	}
	{
		t1101* L_5 = (__this->f18);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_5, 2)) = (int32_t)2;
	}

IL_0034:
	{
		bool L_6 = p2;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		t1101* L_7 = (__this->f18);
		int32_t L_8 = p1;
		int32_t* L_9 = ((int32_t*)(int32_t*)SZArrayLdElema(L_7, L_8));
		int32_t L_10 = (*((int32_t*)L_9));
		V_1 = L_10;
		*((int32_t*)(L_9)) = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
		int32_t L_11 = V_1;
		return L_11;
	}

IL_004c:
	{
		t1101* L_12 = (__this->f18);
		int32_t L_13 = p1;
		int32_t L_14 = L_13;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_12, L_14));
	}
}
extern "C" int32_t m9371 (t9 * __this , t1755 * p0, t2* p1, MethodInfo* method)
{
	typedef int32_t (*m9371_ftn) (t1755 *, t2*);
	static m9371_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9371_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::getUSIndex(System.Reflection.Emit.ModuleBuilder,System.String)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m9372 (t9 * __this , t1755 * p0, t9 * p1, MethodInfo* method)
{
	typedef int32_t (*m9372_ftn) (t1755 *, t9 *);
	static m9372_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9372_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::getToken(System.Reflection.Emit.ModuleBuilder,System.Object)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m9373 (t9 * __this , t1755 * p0, t835 * p1, t152* p2, MethodInfo* method)
{
	typedef int32_t (*m9373_ftn) (t1755 *, t835 *, t152*);
	static m9373_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9373_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::getMethodToken(System.Reflection.Emit.ModuleBuilder,System.Reflection.MethodInfo,System.Type[])");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m9374_MI;
extern "C" int32_t m9374 (t1755 * __this, t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t1164 * L_0 = (__this->f17);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m5964_MI, L_0, L_1);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		t1164 * L_3 = (__this->f17);
		t2* L_4 = p0;
		t9 * L_5 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5777_MI, L_3, L_4);
		return ((*(int32_t*)((int32_t*)UnBox (L_5, InitializedTypeInfo(&t125_TI)))));
	}

IL_0020:
	{
		t2* L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1755_TI));
		int32_t L_7 = m9371(NULL, __this, L_6, &m9371_MI);
		V_0 = L_7;
		t1164 * L_8 = (__this->f17);
		t2* L_9 = p0;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		t9 * L_12 = Box(InitializedTypeInfo(&t125_TI), &L_11);
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5961_MI, L_8, L_9, L_12);
		int32_t L_13 = V_0;
		return L_13;
	}
}
extern MethodInfo m9375_MI;
extern "C" int32_t m9375 (t1755 * __this, t567 * p0, MethodInfo* method)
{
	{
		t567 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1755_TI));
		int32_t L_1 = m9372(NULL, __this, L_0, &m9372_MI);
		return L_1;
	}
}
extern MethodInfo m9376_MI;
extern "C" int32_t m9376 (t1755 * __this, t835 * p0, t152* p1, MethodInfo* method)
{
	{
		t835 * L_0 = p0;
		t152* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1755_TI));
		int32_t L_2 = m9373(NULL, __this, L_0, L_1, &m9373_MI);
		return L_2;
	}
}
extern "C" void m9377 (t1755 * __this, t9 * p0, int32_t p1, MethodInfo* method)
{
	typedef void (*m9377_ftn) (t1755 *, t9 *, int32_t);
	static m9377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9377_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::RegisterToken(System.Object,System.Int32)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern "C" t9 * m9378 (t1755 * __this, MethodInfo* method)
{
	{
		t1789 * L_0 = (__this->f20);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t1789 * L_1 = (t1789 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1789_TI));
		m9381(L_1, __this, &m9381_MI);
		__this->f20 = L_1;
	}

IL_0014:
	{
		t1789 * L_2 = (__this->f20);
		return L_2;
	}
}
extern "C" t2* m9379 (t1755 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m9380 (t1755 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f15);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t1760 * L_1 = (t1760 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1760_TI));
		m9421(L_1, __this, 0, 1, &m9421_MI);
		__this->f15 = L_1;
	}

IL_0016:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9381 (t1789 * __this, t1755 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1755 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9382_MI;
extern "C" int32_t m9382 (t1789 * __this, t2* p0, MethodInfo* method)
{
	{
		t1755 * L_0 = (__this->f0);
		t2* L_1 = p0;
		int32_t L_2 = m9374(L_0, L_1, &m9374_MI);
		return L_2;
	}
}
extern MethodInfo m9383_MI;
extern "C" int32_t m9383 (t1789 * __this, t567 * p0, MethodInfo* method)
{
	{
		t1755 * L_0 = (__this->f0);
		t567 * L_1 = p0;
		int32_t L_2 = m9375(L_0, L_1, &m9375_MI);
		return L_2;
	}
}
extern MethodInfo m9384_MI;
extern "C" int32_t m9384 (t1789 * __this, t835 * p0, t152* p1, MethodInfo* method)
{
	{
		t1755 * L_0 = (__this->f0);
		t835 * L_1 = p0;
		t152* L_2 = p1;
		int32_t L_3 = m9376(L_0, L_1, L_2, &m9376_MI);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1794.h"
extern TypeInfo t1794_TI;
#include "t1794MD.h"
extern MethodInfo m9389_MI;


extern MethodInfo m9385_MI;
extern "C" void m9385 (t1783 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = (((uint8_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)255)))));
		int32_t L_1 = p0;
		__this->f1 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)8))&(int32_t)((int32_t)255)))));
		int32_t L_2 = p0;
		__this->f2 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)255)))));
		int32_t L_3 = p0;
		__this->f3 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)255)))));
		int32_t L_4 = p1;
		__this->f4 = (((uint8_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)255)))));
		int32_t L_5 = p1;
		__this->f5 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5>>(int32_t)8))&(int32_t)((int32_t)255)))));
		int32_t L_6 = p1;
		__this->f6 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)255)))));
		int32_t L_7 = p1;
		__this->f7 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)255)))));
		return;
	}
}
extern MethodInfo m9386_MI;
extern "C" int32_t m9386 (t1783 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m9389(__this, &m9389_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4273_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9387_MI;
extern "C" bool m9387 (t1783 * __this, t9 * p0, MethodInfo* method)
{
	t1783  V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		t9 * L_0 = p0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		t9 * L_1 = p0;
		if (((t9 *)IsInst(L_1, InitializedTypeInfo(&t1783_TI))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return 0;
	}

IL_000d:
	{
		t9 * L_2 = p0;
		V_0 = ((*(t1783 *)((t1783 *)UnBox (L_2, InitializedTypeInfo(&t1783_TI)))));
		uint8_t L_3 = ((&V_0)->f0);
		uint8_t L_4 = (__this->f0);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0034;
		}
	}
	{
		uint8_t L_5 = ((&V_0)->f1);
		uint8_t L_6 = (__this->f1);
		G_B6_0 = ((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 0;
	}

IL_0035:
	{
		return G_B6_0;
	}
}
extern MethodInfo m9388_MI;
extern "C" t2* m9388 (t1783 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m9389(__this, &m9389_MI);
		return L_0;
	}
}
extern "C" t2* m9389 (t1783 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f0);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1794_TI));
		t221* L_1 = ((t1794_SFs*)InitializedTypeInfo(&t1794_TI)->static_fields)->f0;
		uint8_t L_2 = (__this->f1);
		uint8_t L_3 = L_2;
		return (*(t2**)(t2**)SZArrayLdElema(L_1, L_3));
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1794_TI));
		t221* L_4 = ((t1794_SFs*)InitializedTypeInfo(&t1794_TI)->static_fields)->f0;
		uint8_t L_5 = (__this->f1);
		int32_t L_6 = ((int32_t)((int32_t)((int32_t)256)+(int32_t)L_5));
		return (*(t2**)(t2**)SZArrayLdElema(L_4, L_6));
	}
}
extern "C" int32_t m9390 (t1783 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" int32_t m9391 (t1783 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f6);
		return (int32_t)(L_0);
	}
}
extern "C" int32_t m9392 (t1783 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f3);
		return (int32_t)(L_0);
	}
}
extern "C" int32_t m9393 (t1783 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f2);
		return (int32_t)(L_0);
	}
}
extern "C" int16_t m9394 (t1783 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f4);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		uint8_t L_1 = (__this->f1);
		return L_1;
	}

IL_0010:
	{
		uint8_t L_2 = (__this->f0);
		uint8_t L_3 = (__this->f1);
		return (((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)8))|(int32_t)L_3))));
	}
}
extern "C" bool m9395 (t9 * __this , t1783  p0, t1783  p1, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = ((&p0)->f0);
		uint8_t L_1 = ((&p1)->f0);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0022;
		}
	}
	{
		uint8_t L_2 = ((&p0)->f1);
		uint8_t L_3 = ((&p1)->f1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m9396_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m9396 (t9 * __this , MethodInfo* method)
{
	static bool m9396_init;
	if (!m9396_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9396_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)304)));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral1758);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral1758;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral1759);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral1759;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral1760);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral1760;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral1761);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral1761;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral1762);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral1762;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral1763);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral1763;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral1764);
		*((t2**)(t2**)SZArrayLdElema(L_6, 6)) = (t2*)(t2*) &_stringLiteral1764;
		t221* L_7 = L_6;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral1765);
		*((t2**)(t2**)SZArrayLdElema(L_7, 7)) = (t2*)(t2*) &_stringLiteral1765;
		t221* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral1766);
		*((t2**)(t2**)SZArrayLdElema(L_8, 8)) = (t2*)(t2*) &_stringLiteral1766;
		t221* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t2*) &_stringLiteral1767);
		*((t2**)(t2**)SZArrayLdElema(L_9, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral1767;
		t221* L_10 = L_9;
		ArrayElementTypeCheck (L_10, (t2*) &_stringLiteral1768);
		*((t2**)(t2**)SZArrayLdElema(L_10, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral1768;
		t221* L_11 = L_10;
		ArrayElementTypeCheck (L_11, (t2*) &_stringLiteral1769);
		*((t2**)(t2**)SZArrayLdElema(L_11, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral1769;
		t221* L_12 = L_11;
		ArrayElementTypeCheck (L_12, (t2*) &_stringLiteral1770);
		*((t2**)(t2**)SZArrayLdElema(L_12, ((int32_t)12))) = (t2*)(t2*) &_stringLiteral1770;
		t221* L_13 = L_12;
		ArrayElementTypeCheck (L_13, (t2*) &_stringLiteral1771);
		*((t2**)(t2**)SZArrayLdElema(L_13, ((int32_t)13))) = (t2*)(t2*) &_stringLiteral1771;
		t221* L_14 = L_13;
		ArrayElementTypeCheck (L_14, (t2*) &_stringLiteral1772);
		*((t2**)(t2**)SZArrayLdElema(L_14, ((int32_t)14))) = (t2*)(t2*) &_stringLiteral1772;
		t221* L_15 = L_14;
		ArrayElementTypeCheck (L_15, (t2*) &_stringLiteral1773);
		*((t2**)(t2**)SZArrayLdElema(L_15, ((int32_t)15))) = (t2*)(t2*) &_stringLiteral1773;
		t221* L_16 = L_15;
		ArrayElementTypeCheck (L_16, (t2*) &_stringLiteral1774);
		*((t2**)(t2**)SZArrayLdElema(L_16, ((int32_t)16))) = (t2*)(t2*) &_stringLiteral1774;
		t221* L_17 = L_16;
		ArrayElementTypeCheck (L_17, (t2*) &_stringLiteral1775);
		*((t2**)(t2**)SZArrayLdElema(L_17, ((int32_t)17))) = (t2*)(t2*) &_stringLiteral1775;
		t221* L_18 = L_17;
		ArrayElementTypeCheck (L_18, (t2*) &_stringLiteral1776);
		*((t2**)(t2**)SZArrayLdElema(L_18, ((int32_t)18))) = (t2*)(t2*) &_stringLiteral1776;
		t221* L_19 = L_18;
		ArrayElementTypeCheck (L_19, (t2*) &_stringLiteral1777);
		*((t2**)(t2**)SZArrayLdElema(L_19, ((int32_t)19))) = (t2*)(t2*) &_stringLiteral1777;
		t221* L_20 = L_19;
		ArrayElementTypeCheck (L_20, (t2*) &_stringLiteral1778);
		*((t2**)(t2**)SZArrayLdElema(L_20, ((int32_t)20))) = (t2*)(t2*) &_stringLiteral1778;
		t221* L_21 = L_20;
		ArrayElementTypeCheck (L_21, (t2*) &_stringLiteral1779);
		*((t2**)(t2**)SZArrayLdElema(L_21, ((int32_t)21))) = (t2*)(t2*) &_stringLiteral1779;
		t221* L_22 = L_21;
		ArrayElementTypeCheck (L_22, (t2*) &_stringLiteral1780);
		*((t2**)(t2**)SZArrayLdElema(L_22, ((int32_t)22))) = (t2*)(t2*) &_stringLiteral1780;
		t221* L_23 = L_22;
		ArrayElementTypeCheck (L_23, (t2*) &_stringLiteral1781);
		*((t2**)(t2**)SZArrayLdElema(L_23, ((int32_t)23))) = (t2*)(t2*) &_stringLiteral1781;
		t221* L_24 = L_23;
		ArrayElementTypeCheck (L_24, (t2*) &_stringLiteral1782);
		*((t2**)(t2**)SZArrayLdElema(L_24, ((int32_t)24))) = (t2*)(t2*) &_stringLiteral1782;
		t221* L_25 = L_24;
		ArrayElementTypeCheck (L_25, (t2*) &_stringLiteral1783);
		*((t2**)(t2**)SZArrayLdElema(L_25, ((int32_t)25))) = (t2*)(t2*) &_stringLiteral1783;
		t221* L_26 = L_25;
		ArrayElementTypeCheck (L_26, (t2*) &_stringLiteral1784);
		*((t2**)(t2**)SZArrayLdElema(L_26, ((int32_t)26))) = (t2*)(t2*) &_stringLiteral1784;
		t221* L_27 = L_26;
		ArrayElementTypeCheck (L_27, (t2*) &_stringLiteral1785);
		*((t2**)(t2**)SZArrayLdElema(L_27, ((int32_t)27))) = (t2*)(t2*) &_stringLiteral1785;
		t221* L_28 = L_27;
		ArrayElementTypeCheck (L_28, (t2*) &_stringLiteral1786);
		*((t2**)(t2**)SZArrayLdElema(L_28, ((int32_t)28))) = (t2*)(t2*) &_stringLiteral1786;
		t221* L_29 = L_28;
		ArrayElementTypeCheck (L_29, (t2*) &_stringLiteral1787);
		*((t2**)(t2**)SZArrayLdElema(L_29, ((int32_t)29))) = (t2*)(t2*) &_stringLiteral1787;
		t221* L_30 = L_29;
		ArrayElementTypeCheck (L_30, (t2*) &_stringLiteral1788);
		*((t2**)(t2**)SZArrayLdElema(L_30, ((int32_t)30))) = (t2*)(t2*) &_stringLiteral1788;
		t221* L_31 = L_30;
		ArrayElementTypeCheck (L_31, (t2*) &_stringLiteral1789);
		*((t2**)(t2**)SZArrayLdElema(L_31, ((int32_t)31))) = (t2*)(t2*) &_stringLiteral1789;
		t221* L_32 = L_31;
		ArrayElementTypeCheck (L_32, (t2*) &_stringLiteral1790);
		*((t2**)(t2**)SZArrayLdElema(L_32, ((int32_t)32))) = (t2*)(t2*) &_stringLiteral1790;
		t221* L_33 = L_32;
		ArrayElementTypeCheck (L_33, (t2*) &_stringLiteral1791);
		*((t2**)(t2**)SZArrayLdElema(L_33, ((int32_t)33))) = (t2*)(t2*) &_stringLiteral1791;
		t221* L_34 = L_33;
		ArrayElementTypeCheck (L_34, (t2*) &_stringLiteral1792);
		*((t2**)(t2**)SZArrayLdElema(L_34, ((int32_t)34))) = (t2*)(t2*) &_stringLiteral1792;
		t221* L_35 = L_34;
		ArrayElementTypeCheck (L_35, (t2*) &_stringLiteral1793);
		*((t2**)(t2**)SZArrayLdElema(L_35, ((int32_t)35))) = (t2*)(t2*) &_stringLiteral1793;
		t221* L_36 = L_35;
		ArrayElementTypeCheck (L_36, (t2*) &_stringLiteral1794);
		*((t2**)(t2**)SZArrayLdElema(L_36, ((int32_t)37))) = (t2*)(t2*) &_stringLiteral1794;
		t221* L_37 = L_36;
		ArrayElementTypeCheck (L_37, (t2*) &_stringLiteral1795);
		*((t2**)(t2**)SZArrayLdElema(L_37, ((int32_t)38))) = (t2*)(t2*) &_stringLiteral1795;
		t221* L_38 = L_37;
		ArrayElementTypeCheck (L_38, (t2*) &_stringLiteral1796);
		*((t2**)(t2**)SZArrayLdElema(L_38, ((int32_t)39))) = (t2*)(t2*) &_stringLiteral1796;
		t221* L_39 = L_38;
		ArrayElementTypeCheck (L_39, (t2*) &_stringLiteral1797);
		*((t2**)(t2**)SZArrayLdElema(L_39, ((int32_t)40))) = (t2*)(t2*) &_stringLiteral1797;
		t221* L_40 = L_39;
		ArrayElementTypeCheck (L_40, (t2*) &_stringLiteral1798);
		*((t2**)(t2**)SZArrayLdElema(L_40, ((int32_t)41))) = (t2*)(t2*) &_stringLiteral1798;
		t221* L_41 = L_40;
		ArrayElementTypeCheck (L_41, (t2*) &_stringLiteral1799);
		*((t2**)(t2**)SZArrayLdElema(L_41, ((int32_t)42))) = (t2*)(t2*) &_stringLiteral1799;
		t221* L_42 = L_41;
		ArrayElementTypeCheck (L_42, (t2*) &_stringLiteral1800);
		*((t2**)(t2**)SZArrayLdElema(L_42, ((int32_t)43))) = (t2*)(t2*) &_stringLiteral1800;
		t221* L_43 = L_42;
		ArrayElementTypeCheck (L_43, (t2*) &_stringLiteral1801);
		*((t2**)(t2**)SZArrayLdElema(L_43, ((int32_t)44))) = (t2*)(t2*) &_stringLiteral1801;
		t221* L_44 = L_43;
		ArrayElementTypeCheck (L_44, (t2*) &_stringLiteral1802);
		*((t2**)(t2**)SZArrayLdElema(L_44, ((int32_t)45))) = (t2*)(t2*) &_stringLiteral1802;
		t221* L_45 = L_44;
		ArrayElementTypeCheck (L_45, (t2*) &_stringLiteral1803);
		*((t2**)(t2**)SZArrayLdElema(L_45, ((int32_t)46))) = (t2*)(t2*) &_stringLiteral1803;
		t221* L_46 = L_45;
		ArrayElementTypeCheck (L_46, (t2*) &_stringLiteral1804);
		*((t2**)(t2**)SZArrayLdElema(L_46, ((int32_t)47))) = (t2*)(t2*) &_stringLiteral1804;
		t221* L_47 = L_46;
		ArrayElementTypeCheck (L_47, (t2*) &_stringLiteral1805);
		*((t2**)(t2**)SZArrayLdElema(L_47, ((int32_t)48))) = (t2*)(t2*) &_stringLiteral1805;
		t221* L_48 = L_47;
		ArrayElementTypeCheck (L_48, (t2*) &_stringLiteral1806);
		*((t2**)(t2**)SZArrayLdElema(L_48, ((int32_t)49))) = (t2*)(t2*) &_stringLiteral1806;
		t221* L_49 = L_48;
		ArrayElementTypeCheck (L_49, (t2*) &_stringLiteral1807);
		*((t2**)(t2**)SZArrayLdElema(L_49, ((int32_t)50))) = (t2*)(t2*) &_stringLiteral1807;
		t221* L_50 = L_49;
		ArrayElementTypeCheck (L_50, (t2*) &_stringLiteral1808);
		*((t2**)(t2**)SZArrayLdElema(L_50, ((int32_t)51))) = (t2*)(t2*) &_stringLiteral1808;
		t221* L_51 = L_50;
		ArrayElementTypeCheck (L_51, (t2*) &_stringLiteral1809);
		*((t2**)(t2**)SZArrayLdElema(L_51, ((int32_t)52))) = (t2*)(t2*) &_stringLiteral1809;
		t221* L_52 = L_51;
		ArrayElementTypeCheck (L_52, (t2*) &_stringLiteral1810);
		*((t2**)(t2**)SZArrayLdElema(L_52, ((int32_t)53))) = (t2*)(t2*) &_stringLiteral1810;
		t221* L_53 = L_52;
		ArrayElementTypeCheck (L_53, (t2*) &_stringLiteral1811);
		*((t2**)(t2**)SZArrayLdElema(L_53, ((int32_t)54))) = (t2*)(t2*) &_stringLiteral1811;
		t221* L_54 = L_53;
		ArrayElementTypeCheck (L_54, (t2*) &_stringLiteral1812);
		*((t2**)(t2**)SZArrayLdElema(L_54, ((int32_t)55))) = (t2*)(t2*) &_stringLiteral1812;
		t221* L_55 = L_54;
		ArrayElementTypeCheck (L_55, (t2*) &_stringLiteral1813);
		*((t2**)(t2**)SZArrayLdElema(L_55, ((int32_t)56))) = (t2*)(t2*) &_stringLiteral1813;
		t221* L_56 = L_55;
		ArrayElementTypeCheck (L_56, (t2*) &_stringLiteral1814);
		*((t2**)(t2**)SZArrayLdElema(L_56, ((int32_t)57))) = (t2*)(t2*) &_stringLiteral1814;
		t221* L_57 = L_56;
		ArrayElementTypeCheck (L_57, (t2*) &_stringLiteral1815);
		*((t2**)(t2**)SZArrayLdElema(L_57, ((int32_t)58))) = (t2*)(t2*) &_stringLiteral1815;
		t221* L_58 = L_57;
		ArrayElementTypeCheck (L_58, (t2*) &_stringLiteral1816);
		*((t2**)(t2**)SZArrayLdElema(L_58, ((int32_t)59))) = (t2*)(t2*) &_stringLiteral1816;
		t221* L_59 = L_58;
		ArrayElementTypeCheck (L_59, (t2*) &_stringLiteral1817);
		*((t2**)(t2**)SZArrayLdElema(L_59, ((int32_t)60))) = (t2*)(t2*) &_stringLiteral1817;
		t221* L_60 = L_59;
		ArrayElementTypeCheck (L_60, (t2*) &_stringLiteral1818);
		*((t2**)(t2**)SZArrayLdElema(L_60, ((int32_t)61))) = (t2*)(t2*) &_stringLiteral1818;
		t221* L_61 = L_60;
		ArrayElementTypeCheck (L_61, (t2*) &_stringLiteral1819);
		*((t2**)(t2**)SZArrayLdElema(L_61, ((int32_t)62))) = (t2*)(t2*) &_stringLiteral1819;
		t221* L_62 = L_61;
		ArrayElementTypeCheck (L_62, (t2*) &_stringLiteral1820);
		*((t2**)(t2**)SZArrayLdElema(L_62, ((int32_t)63))) = (t2*)(t2*) &_stringLiteral1820;
		t221* L_63 = L_62;
		ArrayElementTypeCheck (L_63, (t2*) &_stringLiteral1821);
		*((t2**)(t2**)SZArrayLdElema(L_63, ((int32_t)64))) = (t2*)(t2*) &_stringLiteral1821;
		t221* L_64 = L_63;
		ArrayElementTypeCheck (L_64, (t2*) &_stringLiteral1822);
		*((t2**)(t2**)SZArrayLdElema(L_64, ((int32_t)65))) = (t2*)(t2*) &_stringLiteral1822;
		t221* L_65 = L_64;
		ArrayElementTypeCheck (L_65, (t2*) &_stringLiteral1823);
		*((t2**)(t2**)SZArrayLdElema(L_65, ((int32_t)66))) = (t2*)(t2*) &_stringLiteral1823;
		t221* L_66 = L_65;
		ArrayElementTypeCheck (L_66, (t2*) &_stringLiteral1824);
		*((t2**)(t2**)SZArrayLdElema(L_66, ((int32_t)67))) = (t2*)(t2*) &_stringLiteral1824;
		t221* L_67 = L_66;
		ArrayElementTypeCheck (L_67, (t2*) &_stringLiteral1825);
		*((t2**)(t2**)SZArrayLdElema(L_67, ((int32_t)68))) = (t2*)(t2*) &_stringLiteral1825;
		t221* L_68 = L_67;
		ArrayElementTypeCheck (L_68, (t2*) &_stringLiteral1826);
		*((t2**)(t2**)SZArrayLdElema(L_68, ((int32_t)69))) = (t2*)(t2*) &_stringLiteral1826;
		t221* L_69 = L_68;
		ArrayElementTypeCheck (L_69, (t2*) &_stringLiteral1827);
		*((t2**)(t2**)SZArrayLdElema(L_69, ((int32_t)70))) = (t2*)(t2*) &_stringLiteral1827;
		t221* L_70 = L_69;
		ArrayElementTypeCheck (L_70, (t2*) &_stringLiteral1828);
		*((t2**)(t2**)SZArrayLdElema(L_70, ((int32_t)71))) = (t2*)(t2*) &_stringLiteral1828;
		t221* L_71 = L_70;
		ArrayElementTypeCheck (L_71, (t2*) &_stringLiteral1829);
		*((t2**)(t2**)SZArrayLdElema(L_71, ((int32_t)72))) = (t2*)(t2*) &_stringLiteral1829;
		t221* L_72 = L_71;
		ArrayElementTypeCheck (L_72, (t2*) &_stringLiteral1830);
		*((t2**)(t2**)SZArrayLdElema(L_72, ((int32_t)73))) = (t2*)(t2*) &_stringLiteral1830;
		t221* L_73 = L_72;
		ArrayElementTypeCheck (L_73, (t2*) &_stringLiteral1831);
		*((t2**)(t2**)SZArrayLdElema(L_73, ((int32_t)74))) = (t2*)(t2*) &_stringLiteral1831;
		t221* L_74 = L_73;
		ArrayElementTypeCheck (L_74, (t2*) &_stringLiteral1832);
		*((t2**)(t2**)SZArrayLdElema(L_74, ((int32_t)75))) = (t2*)(t2*) &_stringLiteral1832;
		t221* L_75 = L_74;
		ArrayElementTypeCheck (L_75, (t2*) &_stringLiteral1833);
		*((t2**)(t2**)SZArrayLdElema(L_75, ((int32_t)76))) = (t2*)(t2*) &_stringLiteral1833;
		t221* L_76 = L_75;
		ArrayElementTypeCheck (L_76, (t2*) &_stringLiteral1834);
		*((t2**)(t2**)SZArrayLdElema(L_76, ((int32_t)77))) = (t2*)(t2*) &_stringLiteral1834;
		t221* L_77 = L_76;
		ArrayElementTypeCheck (L_77, (t2*) &_stringLiteral1835);
		*((t2**)(t2**)SZArrayLdElema(L_77, ((int32_t)78))) = (t2*)(t2*) &_stringLiteral1835;
		t221* L_78 = L_77;
		ArrayElementTypeCheck (L_78, (t2*) &_stringLiteral1836);
		*((t2**)(t2**)SZArrayLdElema(L_78, ((int32_t)79))) = (t2*)(t2*) &_stringLiteral1836;
		t221* L_79 = L_78;
		ArrayElementTypeCheck (L_79, (t2*) &_stringLiteral1837);
		*((t2**)(t2**)SZArrayLdElema(L_79, ((int32_t)80))) = (t2*)(t2*) &_stringLiteral1837;
		t221* L_80 = L_79;
		ArrayElementTypeCheck (L_80, (t2*) &_stringLiteral1838);
		*((t2**)(t2**)SZArrayLdElema(L_80, ((int32_t)81))) = (t2*)(t2*) &_stringLiteral1838;
		t221* L_81 = L_80;
		ArrayElementTypeCheck (L_81, (t2*) &_stringLiteral1839);
		*((t2**)(t2**)SZArrayLdElema(L_81, ((int32_t)82))) = (t2*)(t2*) &_stringLiteral1839;
		t221* L_82 = L_81;
		ArrayElementTypeCheck (L_82, (t2*) &_stringLiteral1840);
		*((t2**)(t2**)SZArrayLdElema(L_82, ((int32_t)83))) = (t2*)(t2*) &_stringLiteral1840;
		t221* L_83 = L_82;
		ArrayElementTypeCheck (L_83, (t2*) &_stringLiteral1841);
		*((t2**)(t2**)SZArrayLdElema(L_83, ((int32_t)84))) = (t2*)(t2*) &_stringLiteral1841;
		t221* L_84 = L_83;
		ArrayElementTypeCheck (L_84, (t2*) &_stringLiteral1842);
		*((t2**)(t2**)SZArrayLdElema(L_84, ((int32_t)85))) = (t2*)(t2*) &_stringLiteral1842;
		t221* L_85 = L_84;
		ArrayElementTypeCheck (L_85, (t2*) &_stringLiteral1843);
		*((t2**)(t2**)SZArrayLdElema(L_85, ((int32_t)86))) = (t2*)(t2*) &_stringLiteral1843;
		t221* L_86 = L_85;
		ArrayElementTypeCheck (L_86, (t2*) &_stringLiteral1844);
		*((t2**)(t2**)SZArrayLdElema(L_86, ((int32_t)87))) = (t2*)(t2*) &_stringLiteral1844;
		t221* L_87 = L_86;
		ArrayElementTypeCheck (L_87, (t2*) &_stringLiteral1845);
		*((t2**)(t2**)SZArrayLdElema(L_87, ((int32_t)88))) = (t2*)(t2*) &_stringLiteral1845;
		t221* L_88 = L_87;
		ArrayElementTypeCheck (L_88, (t2*) &_stringLiteral1846);
		*((t2**)(t2**)SZArrayLdElema(L_88, ((int32_t)89))) = (t2*)(t2*) &_stringLiteral1846;
		t221* L_89 = L_88;
		ArrayElementTypeCheck (L_89, (t2*) &_stringLiteral1847);
		*((t2**)(t2**)SZArrayLdElema(L_89, ((int32_t)90))) = (t2*)(t2*) &_stringLiteral1847;
		t221* L_90 = L_89;
		ArrayElementTypeCheck (L_90, (t2*) &_stringLiteral1848);
		*((t2**)(t2**)SZArrayLdElema(L_90, ((int32_t)91))) = (t2*)(t2*) &_stringLiteral1848;
		t221* L_91 = L_90;
		ArrayElementTypeCheck (L_91, (t2*) &_stringLiteral1849);
		*((t2**)(t2**)SZArrayLdElema(L_91, ((int32_t)92))) = (t2*)(t2*) &_stringLiteral1849;
		t221* L_92 = L_91;
		ArrayElementTypeCheck (L_92, (t2*) &_stringLiteral1850);
		*((t2**)(t2**)SZArrayLdElema(L_92, ((int32_t)93))) = (t2*)(t2*) &_stringLiteral1850;
		t221* L_93 = L_92;
		ArrayElementTypeCheck (L_93, (t2*) &_stringLiteral1851);
		*((t2**)(t2**)SZArrayLdElema(L_93, ((int32_t)94))) = (t2*)(t2*) &_stringLiteral1851;
		t221* L_94 = L_93;
		ArrayElementTypeCheck (L_94, (t2*) &_stringLiteral1852);
		*((t2**)(t2**)SZArrayLdElema(L_94, ((int32_t)95))) = (t2*)(t2*) &_stringLiteral1852;
		t221* L_95 = L_94;
		ArrayElementTypeCheck (L_95, (t2*) &_stringLiteral1853);
		*((t2**)(t2**)SZArrayLdElema(L_95, ((int32_t)96))) = (t2*)(t2*) &_stringLiteral1853;
		t221* L_96 = L_95;
		ArrayElementTypeCheck (L_96, (t2*) &_stringLiteral1854);
		*((t2**)(t2**)SZArrayLdElema(L_96, ((int32_t)97))) = (t2*)(t2*) &_stringLiteral1854;
		t221* L_97 = L_96;
		ArrayElementTypeCheck (L_97, (t2*) &_stringLiteral1855);
		*((t2**)(t2**)SZArrayLdElema(L_97, ((int32_t)98))) = (t2*)(t2*) &_stringLiteral1855;
		t221* L_98 = L_97;
		ArrayElementTypeCheck (L_98, (t2*) &_stringLiteral1856);
		*((t2**)(t2**)SZArrayLdElema(L_98, ((int32_t)99))) = (t2*)(t2*) &_stringLiteral1856;
		t221* L_99 = L_98;
		ArrayElementTypeCheck (L_99, (t2*) &_stringLiteral1857);
		*((t2**)(t2**)SZArrayLdElema(L_99, ((int32_t)100))) = (t2*)(t2*) &_stringLiteral1857;
		t221* L_100 = L_99;
		ArrayElementTypeCheck (L_100, (t2*) &_stringLiteral1858);
		*((t2**)(t2**)SZArrayLdElema(L_100, ((int32_t)101))) = (t2*)(t2*) &_stringLiteral1858;
		t221* L_101 = L_100;
		ArrayElementTypeCheck (L_101, (t2*) &_stringLiteral1859);
		*((t2**)(t2**)SZArrayLdElema(L_101, ((int32_t)102))) = (t2*)(t2*) &_stringLiteral1859;
		t221* L_102 = L_101;
		ArrayElementTypeCheck (L_102, (t2*) &_stringLiteral1860);
		*((t2**)(t2**)SZArrayLdElema(L_102, ((int32_t)103))) = (t2*)(t2*) &_stringLiteral1860;
		t221* L_103 = L_102;
		ArrayElementTypeCheck (L_103, (t2*) &_stringLiteral1861);
		*((t2**)(t2**)SZArrayLdElema(L_103, ((int32_t)104))) = (t2*)(t2*) &_stringLiteral1861;
		t221* L_104 = L_103;
		ArrayElementTypeCheck (L_104, (t2*) &_stringLiteral1862);
		*((t2**)(t2**)SZArrayLdElema(L_104, ((int32_t)105))) = (t2*)(t2*) &_stringLiteral1862;
		t221* L_105 = L_104;
		ArrayElementTypeCheck (L_105, (t2*) &_stringLiteral1863);
		*((t2**)(t2**)SZArrayLdElema(L_105, ((int32_t)106))) = (t2*)(t2*) &_stringLiteral1863;
		t221* L_106 = L_105;
		ArrayElementTypeCheck (L_106, (t2*) &_stringLiteral1864);
		*((t2**)(t2**)SZArrayLdElema(L_106, ((int32_t)107))) = (t2*)(t2*) &_stringLiteral1864;
		t221* L_107 = L_106;
		ArrayElementTypeCheck (L_107, (t2*) &_stringLiteral1865);
		*((t2**)(t2**)SZArrayLdElema(L_107, ((int32_t)108))) = (t2*)(t2*) &_stringLiteral1865;
		t221* L_108 = L_107;
		ArrayElementTypeCheck (L_108, (t2*) &_stringLiteral1866);
		*((t2**)(t2**)SZArrayLdElema(L_108, ((int32_t)109))) = (t2*)(t2*) &_stringLiteral1866;
		t221* L_109 = L_108;
		ArrayElementTypeCheck (L_109, (t2*) &_stringLiteral1867);
		*((t2**)(t2**)SZArrayLdElema(L_109, ((int32_t)110))) = (t2*)(t2*) &_stringLiteral1867;
		t221* L_110 = L_109;
		ArrayElementTypeCheck (L_110, (t2*) &_stringLiteral1868);
		*((t2**)(t2**)SZArrayLdElema(L_110, ((int32_t)111))) = (t2*)(t2*) &_stringLiteral1868;
		t221* L_111 = L_110;
		ArrayElementTypeCheck (L_111, (t2*) &_stringLiteral1869);
		*((t2**)(t2**)SZArrayLdElema(L_111, ((int32_t)112))) = (t2*)(t2*) &_stringLiteral1869;
		t221* L_112 = L_111;
		ArrayElementTypeCheck (L_112, (t2*) &_stringLiteral1870);
		*((t2**)(t2**)SZArrayLdElema(L_112, ((int32_t)113))) = (t2*)(t2*) &_stringLiteral1870;
		t221* L_113 = L_112;
		ArrayElementTypeCheck (L_113, (t2*) &_stringLiteral1871);
		*((t2**)(t2**)SZArrayLdElema(L_113, ((int32_t)114))) = (t2*)(t2*) &_stringLiteral1871;
		t221* L_114 = L_113;
		ArrayElementTypeCheck (L_114, (t2*) &_stringLiteral1872);
		*((t2**)(t2**)SZArrayLdElema(L_114, ((int32_t)115))) = (t2*)(t2*) &_stringLiteral1872;
		t221* L_115 = L_114;
		ArrayElementTypeCheck (L_115, (t2*) &_stringLiteral1873);
		*((t2**)(t2**)SZArrayLdElema(L_115, ((int32_t)116))) = (t2*)(t2*) &_stringLiteral1873;
		t221* L_116 = L_115;
		ArrayElementTypeCheck (L_116, (t2*) &_stringLiteral1874);
		*((t2**)(t2**)SZArrayLdElema(L_116, ((int32_t)117))) = (t2*)(t2*) &_stringLiteral1874;
		t221* L_117 = L_116;
		ArrayElementTypeCheck (L_117, (t2*) &_stringLiteral1875);
		*((t2**)(t2**)SZArrayLdElema(L_117, ((int32_t)118))) = (t2*)(t2*) &_stringLiteral1875;
		t221* L_118 = L_117;
		ArrayElementTypeCheck (L_118, (t2*) &_stringLiteral1876);
		*((t2**)(t2**)SZArrayLdElema(L_118, ((int32_t)121))) = (t2*)(t2*) &_stringLiteral1876;
		t221* L_119 = L_118;
		ArrayElementTypeCheck (L_119, (t2*) &_stringLiteral1877);
		*((t2**)(t2**)SZArrayLdElema(L_119, ((int32_t)122))) = (t2*)(t2*) &_stringLiteral1877;
		t221* L_120 = L_119;
		ArrayElementTypeCheck (L_120, (t2*) &_stringLiteral1878);
		*((t2**)(t2**)SZArrayLdElema(L_120, ((int32_t)123))) = (t2*)(t2*) &_stringLiteral1878;
		t221* L_121 = L_120;
		ArrayElementTypeCheck (L_121, (t2*) &_stringLiteral1879);
		*((t2**)(t2**)SZArrayLdElema(L_121, ((int32_t)124))) = (t2*)(t2*) &_stringLiteral1879;
		t221* L_122 = L_121;
		ArrayElementTypeCheck (L_122, (t2*) &_stringLiteral1880);
		*((t2**)(t2**)SZArrayLdElema(L_122, ((int32_t)125))) = (t2*)(t2*) &_stringLiteral1880;
		t221* L_123 = L_122;
		ArrayElementTypeCheck (L_123, (t2*) &_stringLiteral1881);
		*((t2**)(t2**)SZArrayLdElema(L_123, ((int32_t)126))) = (t2*)(t2*) &_stringLiteral1881;
		t221* L_124 = L_123;
		ArrayElementTypeCheck (L_124, (t2*) &_stringLiteral1882);
		*((t2**)(t2**)SZArrayLdElema(L_124, ((int32_t)127))) = (t2*)(t2*) &_stringLiteral1882;
		t221* L_125 = L_124;
		ArrayElementTypeCheck (L_125, (t2*) &_stringLiteral1883);
		*((t2**)(t2**)SZArrayLdElema(L_125, ((int32_t)128))) = (t2*)(t2*) &_stringLiteral1883;
		t221* L_126 = L_125;
		ArrayElementTypeCheck (L_126, (t2*) &_stringLiteral1884);
		*((t2**)(t2**)SZArrayLdElema(L_126, ((int32_t)129))) = (t2*)(t2*) &_stringLiteral1884;
		t221* L_127 = L_126;
		ArrayElementTypeCheck (L_127, (t2*) &_stringLiteral1885);
		*((t2**)(t2**)SZArrayLdElema(L_127, ((int32_t)130))) = (t2*)(t2*) &_stringLiteral1885;
		t221* L_128 = L_127;
		ArrayElementTypeCheck (L_128, (t2*) &_stringLiteral1886);
		*((t2**)(t2**)SZArrayLdElema(L_128, ((int32_t)131))) = (t2*)(t2*) &_stringLiteral1886;
		t221* L_129 = L_128;
		ArrayElementTypeCheck (L_129, (t2*) &_stringLiteral1887);
		*((t2**)(t2**)SZArrayLdElema(L_129, ((int32_t)132))) = (t2*)(t2*) &_stringLiteral1887;
		t221* L_130 = L_129;
		ArrayElementTypeCheck (L_130, (t2*) &_stringLiteral1888);
		*((t2**)(t2**)SZArrayLdElema(L_130, ((int32_t)133))) = (t2*)(t2*) &_stringLiteral1888;
		t221* L_131 = L_130;
		ArrayElementTypeCheck (L_131, (t2*) &_stringLiteral1889);
		*((t2**)(t2**)SZArrayLdElema(L_131, ((int32_t)134))) = (t2*)(t2*) &_stringLiteral1889;
		t221* L_132 = L_131;
		ArrayElementTypeCheck (L_132, (t2*) &_stringLiteral1890);
		*((t2**)(t2**)SZArrayLdElema(L_132, ((int32_t)135))) = (t2*)(t2*) &_stringLiteral1890;
		t221* L_133 = L_132;
		ArrayElementTypeCheck (L_133, (t2*) &_stringLiteral1891);
		*((t2**)(t2**)SZArrayLdElema(L_133, ((int32_t)136))) = (t2*)(t2*) &_stringLiteral1891;
		t221* L_134 = L_133;
		ArrayElementTypeCheck (L_134, (t2*) &_stringLiteral1892);
		*((t2**)(t2**)SZArrayLdElema(L_134, ((int32_t)137))) = (t2*)(t2*) &_stringLiteral1892;
		t221* L_135 = L_134;
		ArrayElementTypeCheck (L_135, (t2*) &_stringLiteral1893);
		*((t2**)(t2**)SZArrayLdElema(L_135, ((int32_t)138))) = (t2*)(t2*) &_stringLiteral1893;
		t221* L_136 = L_135;
		ArrayElementTypeCheck (L_136, (t2*) &_stringLiteral1894);
		*((t2**)(t2**)SZArrayLdElema(L_136, ((int32_t)139))) = (t2*)(t2*) &_stringLiteral1894;
		t221* L_137 = L_136;
		ArrayElementTypeCheck (L_137, (t2*) &_stringLiteral176);
		*((t2**)(t2**)SZArrayLdElema(L_137, ((int32_t)140))) = (t2*)(t2*) &_stringLiteral176;
		t221* L_138 = L_137;
		ArrayElementTypeCheck (L_138, (t2*) &_stringLiteral1895);
		*((t2**)(t2**)SZArrayLdElema(L_138, ((int32_t)141))) = (t2*)(t2*) &_stringLiteral1895;
		t221* L_139 = L_138;
		ArrayElementTypeCheck (L_139, (t2*) &_stringLiteral1896);
		*((t2**)(t2**)SZArrayLdElema(L_139, ((int32_t)142))) = (t2*)(t2*) &_stringLiteral1896;
		t221* L_140 = L_139;
		ArrayElementTypeCheck (L_140, (t2*) &_stringLiteral1897);
		*((t2**)(t2**)SZArrayLdElema(L_140, ((int32_t)143))) = (t2*)(t2*) &_stringLiteral1897;
		t221* L_141 = L_140;
		ArrayElementTypeCheck (L_141, (t2*) &_stringLiteral1898);
		*((t2**)(t2**)SZArrayLdElema(L_141, ((int32_t)144))) = (t2*)(t2*) &_stringLiteral1898;
		t221* L_142 = L_141;
		ArrayElementTypeCheck (L_142, (t2*) &_stringLiteral1899);
		*((t2**)(t2**)SZArrayLdElema(L_142, ((int32_t)145))) = (t2*)(t2*) &_stringLiteral1899;
		t221* L_143 = L_142;
		ArrayElementTypeCheck (L_143, (t2*) &_stringLiteral1900);
		*((t2**)(t2**)SZArrayLdElema(L_143, ((int32_t)146))) = (t2*)(t2*) &_stringLiteral1900;
		t221* L_144 = L_143;
		ArrayElementTypeCheck (L_144, (t2*) &_stringLiteral1901);
		*((t2**)(t2**)SZArrayLdElema(L_144, ((int32_t)147))) = (t2*)(t2*) &_stringLiteral1901;
		t221* L_145 = L_144;
		ArrayElementTypeCheck (L_145, (t2*) &_stringLiteral1902);
		*((t2**)(t2**)SZArrayLdElema(L_145, ((int32_t)148))) = (t2*)(t2*) &_stringLiteral1902;
		t221* L_146 = L_145;
		ArrayElementTypeCheck (L_146, (t2*) &_stringLiteral1903);
		*((t2**)(t2**)SZArrayLdElema(L_146, ((int32_t)149))) = (t2*)(t2*) &_stringLiteral1903;
		t221* L_147 = L_146;
		ArrayElementTypeCheck (L_147, (t2*) &_stringLiteral1904);
		*((t2**)(t2**)SZArrayLdElema(L_147, ((int32_t)150))) = (t2*)(t2*) &_stringLiteral1904;
		t221* L_148 = L_147;
		ArrayElementTypeCheck (L_148, (t2*) &_stringLiteral1905);
		*((t2**)(t2**)SZArrayLdElema(L_148, ((int32_t)151))) = (t2*)(t2*) &_stringLiteral1905;
		t221* L_149 = L_148;
		ArrayElementTypeCheck (L_149, (t2*) &_stringLiteral1906);
		*((t2**)(t2**)SZArrayLdElema(L_149, ((int32_t)152))) = (t2*)(t2*) &_stringLiteral1906;
		t221* L_150 = L_149;
		ArrayElementTypeCheck (L_150, (t2*) &_stringLiteral1907);
		*((t2**)(t2**)SZArrayLdElema(L_150, ((int32_t)153))) = (t2*)(t2*) &_stringLiteral1907;
		t221* L_151 = L_150;
		ArrayElementTypeCheck (L_151, (t2*) &_stringLiteral1908);
		*((t2**)(t2**)SZArrayLdElema(L_151, ((int32_t)154))) = (t2*)(t2*) &_stringLiteral1908;
		t221* L_152 = L_151;
		ArrayElementTypeCheck (L_152, (t2*) &_stringLiteral1909);
		*((t2**)(t2**)SZArrayLdElema(L_152, ((int32_t)155))) = (t2*)(t2*) &_stringLiteral1909;
		t221* L_153 = L_152;
		ArrayElementTypeCheck (L_153, (t2*) &_stringLiteral1910);
		*((t2**)(t2**)SZArrayLdElema(L_153, ((int32_t)156))) = (t2*)(t2*) &_stringLiteral1910;
		t221* L_154 = L_153;
		ArrayElementTypeCheck (L_154, (t2*) &_stringLiteral1911);
		*((t2**)(t2**)SZArrayLdElema(L_154, ((int32_t)157))) = (t2*)(t2*) &_stringLiteral1911;
		t221* L_155 = L_154;
		ArrayElementTypeCheck (L_155, (t2*) &_stringLiteral1912);
		*((t2**)(t2**)SZArrayLdElema(L_155, ((int32_t)158))) = (t2*)(t2*) &_stringLiteral1912;
		t221* L_156 = L_155;
		ArrayElementTypeCheck (L_156, (t2*) &_stringLiteral1913);
		*((t2**)(t2**)SZArrayLdElema(L_156, ((int32_t)159))) = (t2*)(t2*) &_stringLiteral1913;
		t221* L_157 = L_156;
		ArrayElementTypeCheck (L_157, (t2*) &_stringLiteral1914);
		*((t2**)(t2**)SZArrayLdElema(L_157, ((int32_t)160))) = (t2*)(t2*) &_stringLiteral1914;
		t221* L_158 = L_157;
		ArrayElementTypeCheck (L_158, (t2*) &_stringLiteral1915);
		*((t2**)(t2**)SZArrayLdElema(L_158, ((int32_t)161))) = (t2*)(t2*) &_stringLiteral1915;
		t221* L_159 = L_158;
		ArrayElementTypeCheck (L_159, (t2*) &_stringLiteral1916);
		*((t2**)(t2**)SZArrayLdElema(L_159, ((int32_t)162))) = (t2*)(t2*) &_stringLiteral1916;
		t221* L_160 = L_159;
		ArrayElementTypeCheck (L_160, (t2*) &_stringLiteral1917);
		*((t2**)(t2**)SZArrayLdElema(L_160, ((int32_t)163))) = (t2*)(t2*) &_stringLiteral1917;
		t221* L_161 = L_160;
		ArrayElementTypeCheck (L_161, (t2*) &_stringLiteral1918);
		*((t2**)(t2**)SZArrayLdElema(L_161, ((int32_t)164))) = (t2*)(t2*) &_stringLiteral1918;
		t221* L_162 = L_161;
		ArrayElementTypeCheck (L_162, (t2*) &_stringLiteral1919);
		*((t2**)(t2**)SZArrayLdElema(L_162, ((int32_t)165))) = (t2*)(t2*) &_stringLiteral1919;
		t221* L_163 = L_162;
		ArrayElementTypeCheck (L_163, (t2*) &_stringLiteral1920);
		*((t2**)(t2**)SZArrayLdElema(L_163, ((int32_t)179))) = (t2*)(t2*) &_stringLiteral1920;
		t221* L_164 = L_163;
		ArrayElementTypeCheck (L_164, (t2*) &_stringLiteral1921);
		*((t2**)(t2**)SZArrayLdElema(L_164, ((int32_t)180))) = (t2*)(t2*) &_stringLiteral1921;
		t221* L_165 = L_164;
		ArrayElementTypeCheck (L_165, (t2*) &_stringLiteral1922);
		*((t2**)(t2**)SZArrayLdElema(L_165, ((int32_t)181))) = (t2*)(t2*) &_stringLiteral1922;
		t221* L_166 = L_165;
		ArrayElementTypeCheck (L_166, (t2*) &_stringLiteral1923);
		*((t2**)(t2**)SZArrayLdElema(L_166, ((int32_t)182))) = (t2*)(t2*) &_stringLiteral1923;
		t221* L_167 = L_166;
		ArrayElementTypeCheck (L_167, (t2*) &_stringLiteral1924);
		*((t2**)(t2**)SZArrayLdElema(L_167, ((int32_t)183))) = (t2*)(t2*) &_stringLiteral1924;
		t221* L_168 = L_167;
		ArrayElementTypeCheck (L_168, (t2*) &_stringLiteral1925);
		*((t2**)(t2**)SZArrayLdElema(L_168, ((int32_t)184))) = (t2*)(t2*) &_stringLiteral1925;
		t221* L_169 = L_168;
		ArrayElementTypeCheck (L_169, (t2*) &_stringLiteral1926);
		*((t2**)(t2**)SZArrayLdElema(L_169, ((int32_t)185))) = (t2*)(t2*) &_stringLiteral1926;
		t221* L_170 = L_169;
		ArrayElementTypeCheck (L_170, (t2*) &_stringLiteral1927);
		*((t2**)(t2**)SZArrayLdElema(L_170, ((int32_t)186))) = (t2*)(t2*) &_stringLiteral1927;
		t221* L_171 = L_170;
		ArrayElementTypeCheck (L_171, (t2*) &_stringLiteral1928);
		*((t2**)(t2**)SZArrayLdElema(L_171, ((int32_t)194))) = (t2*)(t2*) &_stringLiteral1928;
		t221* L_172 = L_171;
		ArrayElementTypeCheck (L_172, (t2*) &_stringLiteral1929);
		*((t2**)(t2**)SZArrayLdElema(L_172, ((int32_t)195))) = (t2*)(t2*) &_stringLiteral1929;
		t221* L_173 = L_172;
		ArrayElementTypeCheck (L_173, (t2*) &_stringLiteral1930);
		*((t2**)(t2**)SZArrayLdElema(L_173, ((int32_t)198))) = (t2*)(t2*) &_stringLiteral1930;
		t221* L_174 = L_173;
		ArrayElementTypeCheck (L_174, (t2*) &_stringLiteral1931);
		*((t2**)(t2**)SZArrayLdElema(L_174, ((int32_t)208))) = (t2*)(t2*) &_stringLiteral1931;
		t221* L_175 = L_174;
		ArrayElementTypeCheck (L_175, (t2*) &_stringLiteral1932);
		*((t2**)(t2**)SZArrayLdElema(L_175, ((int32_t)209))) = (t2*)(t2*) &_stringLiteral1932;
		t221* L_176 = L_175;
		ArrayElementTypeCheck (L_176, (t2*) &_stringLiteral1933);
		*((t2**)(t2**)SZArrayLdElema(L_176, ((int32_t)210))) = (t2*)(t2*) &_stringLiteral1933;
		t221* L_177 = L_176;
		ArrayElementTypeCheck (L_177, (t2*) &_stringLiteral1934);
		*((t2**)(t2**)SZArrayLdElema(L_177, ((int32_t)211))) = (t2*)(t2*) &_stringLiteral1934;
		t221* L_178 = L_177;
		ArrayElementTypeCheck (L_178, (t2*) &_stringLiteral1935);
		*((t2**)(t2**)SZArrayLdElema(L_178, ((int32_t)212))) = (t2*)(t2*) &_stringLiteral1935;
		t221* L_179 = L_178;
		ArrayElementTypeCheck (L_179, (t2*) &_stringLiteral1936);
		*((t2**)(t2**)SZArrayLdElema(L_179, ((int32_t)213))) = (t2*)(t2*) &_stringLiteral1936;
		t221* L_180 = L_179;
		ArrayElementTypeCheck (L_180, (t2*) &_stringLiteral1937);
		*((t2**)(t2**)SZArrayLdElema(L_180, ((int32_t)214))) = (t2*)(t2*) &_stringLiteral1937;
		t221* L_181 = L_180;
		ArrayElementTypeCheck (L_181, (t2*) &_stringLiteral1938);
		*((t2**)(t2**)SZArrayLdElema(L_181, ((int32_t)215))) = (t2*)(t2*) &_stringLiteral1938;
		t221* L_182 = L_181;
		ArrayElementTypeCheck (L_182, (t2*) &_stringLiteral1939);
		*((t2**)(t2**)SZArrayLdElema(L_182, ((int32_t)216))) = (t2*)(t2*) &_stringLiteral1939;
		t221* L_183 = L_182;
		ArrayElementTypeCheck (L_183, (t2*) &_stringLiteral1940);
		*((t2**)(t2**)SZArrayLdElema(L_183, ((int32_t)217))) = (t2*)(t2*) &_stringLiteral1940;
		t221* L_184 = L_183;
		ArrayElementTypeCheck (L_184, (t2*) &_stringLiteral1941);
		*((t2**)(t2**)SZArrayLdElema(L_184, ((int32_t)218))) = (t2*)(t2*) &_stringLiteral1941;
		t221* L_185 = L_184;
		ArrayElementTypeCheck (L_185, (t2*) &_stringLiteral1942);
		*((t2**)(t2**)SZArrayLdElema(L_185, ((int32_t)219))) = (t2*)(t2*) &_stringLiteral1942;
		t221* L_186 = L_185;
		ArrayElementTypeCheck (L_186, (t2*) &_stringLiteral1943);
		*((t2**)(t2**)SZArrayLdElema(L_186, ((int32_t)220))) = (t2*)(t2*) &_stringLiteral1943;
		t221* L_187 = L_186;
		ArrayElementTypeCheck (L_187, (t2*) &_stringLiteral1944);
		*((t2**)(t2**)SZArrayLdElema(L_187, ((int32_t)221))) = (t2*)(t2*) &_stringLiteral1944;
		t221* L_188 = L_187;
		ArrayElementTypeCheck (L_188, (t2*) &_stringLiteral1945);
		*((t2**)(t2**)SZArrayLdElema(L_188, ((int32_t)222))) = (t2*)(t2*) &_stringLiteral1945;
		t221* L_189 = L_188;
		ArrayElementTypeCheck (L_189, (t2*) &_stringLiteral1946);
		*((t2**)(t2**)SZArrayLdElema(L_189, ((int32_t)223))) = (t2*)(t2*) &_stringLiteral1946;
		t221* L_190 = L_189;
		ArrayElementTypeCheck (L_190, (t2*) &_stringLiteral1947);
		*((t2**)(t2**)SZArrayLdElema(L_190, ((int32_t)224))) = (t2*)(t2*) &_stringLiteral1947;
		t221* L_191 = L_190;
		ArrayElementTypeCheck (L_191, (t2*) &_stringLiteral1948);
		*((t2**)(t2**)SZArrayLdElema(L_191, ((int32_t)248))) = (t2*)(t2*) &_stringLiteral1948;
		t221* L_192 = L_191;
		ArrayElementTypeCheck (L_192, (t2*) &_stringLiteral1949);
		*((t2**)(t2**)SZArrayLdElema(L_192, ((int32_t)249))) = (t2*)(t2*) &_stringLiteral1949;
		t221* L_193 = L_192;
		ArrayElementTypeCheck (L_193, (t2*) &_stringLiteral1950);
		*((t2**)(t2**)SZArrayLdElema(L_193, ((int32_t)250))) = (t2*)(t2*) &_stringLiteral1950;
		t221* L_194 = L_193;
		ArrayElementTypeCheck (L_194, (t2*) &_stringLiteral1951);
		*((t2**)(t2**)SZArrayLdElema(L_194, ((int32_t)251))) = (t2*)(t2*) &_stringLiteral1951;
		t221* L_195 = L_194;
		ArrayElementTypeCheck (L_195, (t2*) &_stringLiteral1952);
		*((t2**)(t2**)SZArrayLdElema(L_195, ((int32_t)252))) = (t2*)(t2*) &_stringLiteral1952;
		t221* L_196 = L_195;
		ArrayElementTypeCheck (L_196, (t2*) &_stringLiteral1953);
		*((t2**)(t2**)SZArrayLdElema(L_196, ((int32_t)253))) = (t2*)(t2*) &_stringLiteral1953;
		t221* L_197 = L_196;
		ArrayElementTypeCheck (L_197, (t2*) &_stringLiteral1954);
		*((t2**)(t2**)SZArrayLdElema(L_197, ((int32_t)254))) = (t2*)(t2*) &_stringLiteral1954;
		t221* L_198 = L_197;
		ArrayElementTypeCheck (L_198, (t2*) &_stringLiteral1955);
		*((t2**)(t2**)SZArrayLdElema(L_198, ((int32_t)255))) = (t2*)(t2*) &_stringLiteral1955;
		t221* L_199 = L_198;
		ArrayElementTypeCheck (L_199, (t2*) &_stringLiteral1956);
		*((t2**)(t2**)SZArrayLdElema(L_199, ((int32_t)256))) = (t2*)(t2*) &_stringLiteral1956;
		t221* L_200 = L_199;
		ArrayElementTypeCheck (L_200, (t2*) &_stringLiteral1957);
		*((t2**)(t2**)SZArrayLdElema(L_200, ((int32_t)257))) = (t2*)(t2*) &_stringLiteral1957;
		t221* L_201 = L_200;
		ArrayElementTypeCheck (L_201, (t2*) &_stringLiteral1958);
		*((t2**)(t2**)SZArrayLdElema(L_201, ((int32_t)258))) = (t2*)(t2*) &_stringLiteral1958;
		t221* L_202 = L_201;
		ArrayElementTypeCheck (L_202, (t2*) &_stringLiteral1959);
		*((t2**)(t2**)SZArrayLdElema(L_202, ((int32_t)259))) = (t2*)(t2*) &_stringLiteral1959;
		t221* L_203 = L_202;
		ArrayElementTypeCheck (L_203, (t2*) &_stringLiteral1960);
		*((t2**)(t2**)SZArrayLdElema(L_203, ((int32_t)260))) = (t2*)(t2*) &_stringLiteral1960;
		t221* L_204 = L_203;
		ArrayElementTypeCheck (L_204, (t2*) &_stringLiteral1961);
		*((t2**)(t2**)SZArrayLdElema(L_204, ((int32_t)261))) = (t2*)(t2*) &_stringLiteral1961;
		t221* L_205 = L_204;
		ArrayElementTypeCheck (L_205, (t2*) &_stringLiteral1962);
		*((t2**)(t2**)SZArrayLdElema(L_205, ((int32_t)262))) = (t2*)(t2*) &_stringLiteral1962;
		t221* L_206 = L_205;
		ArrayElementTypeCheck (L_206, (t2*) &_stringLiteral1963);
		*((t2**)(t2**)SZArrayLdElema(L_206, ((int32_t)263))) = (t2*)(t2*) &_stringLiteral1963;
		t221* L_207 = L_206;
		ArrayElementTypeCheck (L_207, (t2*) &_stringLiteral1964);
		*((t2**)(t2**)SZArrayLdElema(L_207, ((int32_t)265))) = (t2*)(t2*) &_stringLiteral1964;
		t221* L_208 = L_207;
		ArrayElementTypeCheck (L_208, (t2*) &_stringLiteral1965);
		*((t2**)(t2**)SZArrayLdElema(L_208, ((int32_t)266))) = (t2*)(t2*) &_stringLiteral1965;
		t221* L_209 = L_208;
		ArrayElementTypeCheck (L_209, (t2*) &_stringLiteral1966);
		*((t2**)(t2**)SZArrayLdElema(L_209, ((int32_t)267))) = (t2*)(t2*) &_stringLiteral1966;
		t221* L_210 = L_209;
		ArrayElementTypeCheck (L_210, (t2*) &_stringLiteral1967);
		*((t2**)(t2**)SZArrayLdElema(L_210, ((int32_t)268))) = (t2*)(t2*) &_stringLiteral1967;
		t221* L_211 = L_210;
		ArrayElementTypeCheck (L_211, (t2*) &_stringLiteral1968);
		*((t2**)(t2**)SZArrayLdElema(L_211, ((int32_t)269))) = (t2*)(t2*) &_stringLiteral1968;
		t221* L_212 = L_211;
		ArrayElementTypeCheck (L_212, (t2*) &_stringLiteral1969);
		*((t2**)(t2**)SZArrayLdElema(L_212, ((int32_t)270))) = (t2*)(t2*) &_stringLiteral1969;
		t221* L_213 = L_212;
		ArrayElementTypeCheck (L_213, (t2*) &_stringLiteral1970);
		*((t2**)(t2**)SZArrayLdElema(L_213, ((int32_t)271))) = (t2*)(t2*) &_stringLiteral1970;
		t221* L_214 = L_213;
		ArrayElementTypeCheck (L_214, (t2*) &_stringLiteral1971);
		*((t2**)(t2**)SZArrayLdElema(L_214, ((int32_t)273))) = (t2*)(t2*) &_stringLiteral1971;
		t221* L_215 = L_214;
		ArrayElementTypeCheck (L_215, (t2*) &_stringLiteral1972);
		*((t2**)(t2**)SZArrayLdElema(L_215, ((int32_t)274))) = (t2*)(t2*) &_stringLiteral1972;
		t221* L_216 = L_215;
		ArrayElementTypeCheck (L_216, (t2*) &_stringLiteral1973);
		*((t2**)(t2**)SZArrayLdElema(L_216, ((int32_t)275))) = (t2*)(t2*) &_stringLiteral1973;
		t221* L_217 = L_216;
		ArrayElementTypeCheck (L_217, (t2*) &_stringLiteral1974);
		*((t2**)(t2**)SZArrayLdElema(L_217, ((int32_t)276))) = (t2*)(t2*) &_stringLiteral1974;
		t221* L_218 = L_217;
		ArrayElementTypeCheck (L_218, (t2*) &_stringLiteral1975);
		*((t2**)(t2**)SZArrayLdElema(L_218, ((int32_t)277))) = (t2*)(t2*) &_stringLiteral1975;
		t221* L_219 = L_218;
		ArrayElementTypeCheck (L_219, (t2*) &_stringLiteral1976);
		*((t2**)(t2**)SZArrayLdElema(L_219, ((int32_t)278))) = (t2*)(t2*) &_stringLiteral1976;
		t221* L_220 = L_219;
		ArrayElementTypeCheck (L_220, (t2*) &_stringLiteral1977);
		*((t2**)(t2**)SZArrayLdElema(L_220, ((int32_t)279))) = (t2*)(t2*) &_stringLiteral1977;
		t221* L_221 = L_220;
		ArrayElementTypeCheck (L_221, (t2*) &_stringLiteral1978);
		*((t2**)(t2**)SZArrayLdElema(L_221, ((int32_t)280))) = (t2*)(t2*) &_stringLiteral1978;
		t221* L_222 = L_221;
		ArrayElementTypeCheck (L_222, (t2*) &_stringLiteral1979);
		*((t2**)(t2**)SZArrayLdElema(L_222, ((int32_t)282))) = (t2*)(t2*) &_stringLiteral1979;
		t221* L_223 = L_222;
		ArrayElementTypeCheck (L_223, (t2*) &_stringLiteral1980);
		*((t2**)(t2**)SZArrayLdElema(L_223, ((int32_t)284))) = (t2*)(t2*) &_stringLiteral1980;
		t221* L_224 = L_223;
		ArrayElementTypeCheck (L_224, (t2*) &_stringLiteral1981);
		*((t2**)(t2**)SZArrayLdElema(L_224, ((int32_t)285))) = (t2*)(t2*) &_stringLiteral1981;
		t221* L_225 = L_224;
		ArrayElementTypeCheck (L_225, (t2*) &_stringLiteral1982);
		*((t2**)(t2**)SZArrayLdElema(L_225, ((int32_t)286))) = (t2*)(t2*) &_stringLiteral1982;
		((t1794_SFs*)InitializedTypeInfo(&t1794_TI)->static_fields)->f0 = L_225;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m9397_MI;
extern "C" void m9397 (t9 * __this , MethodInfo* method)
{
	{
		t1783  L_0 = {0};
		m9385(&L_0, ((int32_t)1179903), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f0 = L_0;
		t1783  L_1 = {0};
		m9385(&L_1, ((int32_t)1180159), ((int32_t)17106177), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f1 = L_1;
		t1783  L_2 = {0};
		m9385(&L_2, ((int32_t)1245951), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f2 = L_2;
		t1783  L_3 = {0};
		m9385(&L_3, ((int32_t)1246207), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f3 = L_3;
		t1783  L_4 = {0};
		m9385(&L_4, ((int32_t)1246463), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f4 = L_4;
		t1783  L_5 = {0};
		m9385(&L_5, ((int32_t)1246719), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f5 = L_5;
		t1783  L_6 = {0};
		m9385(&L_6, ((int32_t)1246975), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f6 = L_6;
		t1783  L_7 = {0};
		m9385(&L_7, ((int32_t)1247231), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f7 = L_7;
		t1783  L_8 = {0};
		m9385(&L_8, ((int32_t)1247487), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f8 = L_8;
		t1783  L_9 = {0};
		m9385(&L_9, ((int32_t)1247743), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f9 = L_9;
		t1783  L_10 = {0};
		m9385(&L_10, ((int32_t)17959679), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f10 = L_10;
		t1783  L_11 = {0};
		m9385(&L_11, ((int32_t)17959935), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f11 = L_11;
		t1783  L_12 = {0};
		m9385(&L_12, ((int32_t)17960191), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f12 = L_12;
		t1783  L_13 = {0};
		m9385(&L_13, ((int32_t)17960447), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f13 = L_13;
		t1783  L_14 = {0};
		m9385(&L_14, ((int32_t)1249023), ((int32_t)85065985), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f14 = L_14;
		t1783  L_15 = {0};
		m9385(&L_15, ((int32_t)1380351), ((int32_t)85065985), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f15 = L_15;
		t1783  L_16 = {0};
		m9385(&L_16, ((int32_t)17961215), ((int32_t)85065985), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f16 = L_16;
		t1783  L_17 = {0};
		m9385(&L_17, ((int32_t)1249791), ((int32_t)85065985), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f17 = L_17;
		t1783  L_18 = {0};
		m9385(&L_18, ((int32_t)1381119), ((int32_t)85065985), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f18 = L_18;
		t1783  L_19 = {0};
		m9385(&L_19, ((int32_t)17961983), ((int32_t)85065985), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f19 = L_19;
		t1783  L_20 = {0};
		m9385(&L_20, ((int32_t)1643775), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f20 = L_20;
		t1783  L_21 = {0};
		m9385(&L_21, ((int32_t)1381887), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f21 = L_21;
		t1783  L_22 = {0};
		m9385(&L_22, ((int32_t)1382143), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f22 = L_22;
		t1783  L_23 = {0};
		m9385(&L_23, ((int32_t)1382399), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f23 = L_23;
		t1783  L_24 = {0};
		m9385(&L_24, ((int32_t)1382655), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f24 = L_24;
		t1783  L_25 = {0};
		m9385(&L_25, ((int32_t)1382911), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f25 = L_25;
		t1783  L_26 = {0};
		m9385(&L_26, ((int32_t)1383167), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f26 = L_26;
		t1783  L_27 = {0};
		m9385(&L_27, ((int32_t)1383423), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f27 = L_27;
		t1783  L_28 = {0};
		m9385(&L_28, ((int32_t)1383679), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f28 = L_28;
		t1783  L_29 = {0};
		m9385(&L_29, ((int32_t)1383935), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f29 = L_29;
		t1783  L_30 = {0};
		m9385(&L_30, ((int32_t)1384191), ((int32_t)84214017), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f30 = L_30;
		t1783  L_31 = {0};
		m9385(&L_31, ((int32_t)1384447), ((int32_t)84934913), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f31 = L_31;
		t1783  L_32 = {0};
		m9385(&L_32, ((int32_t)1384703), ((int32_t)84018433), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f32 = L_32;
		t1783  L_33 = {0};
		m9385(&L_33, ((int32_t)1450495), ((int32_t)84083969), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f33 = L_33;
		t1783  L_34 = {0};
		m9385(&L_34, ((int32_t)1516287), ((int32_t)85001473), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f34 = L_34;
		t1783  L_35 = {0};
		m9385(&L_35, ((int32_t)1582079), ((int32_t)84346113), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f35 = L_35;
		t1783  L_36 = {0};
		m9385(&L_36, ((int32_t)18097663), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f36 = L_36;
		t1783  L_37 = {0};
		m9385(&L_37, ((int32_t)17966847), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f37 = L_37;
		t1783  L_38 = {0};
		m9385(&L_38, ((int32_t)1189887), ((int32_t)33817857), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f38 = L_38;
		t1783  L_39 = {0};
		m9385(&L_39, ((int32_t)437987583), ((int32_t)33817857), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f39 = L_39;
		t1783  L_40 = {0};
		m9385(&L_40, ((int32_t)437987839), ((int32_t)34145537), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f40 = L_40;
		t1783  L_41 = {0};
		m9385(&L_41, ((int32_t)437398271), ((int32_t)117769473), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f41 = L_41;
		t1783  L_42 = {0};
		m9385(&L_42, ((int32_t)1190911), ((int32_t)983297), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f42 = L_42;
		t1783  L_43 = {0};
		m9385(&L_43, ((int32_t)51522815), ((int32_t)51314945), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f43 = L_43;
		t1783  L_44 = {0};
		m9385(&L_44, ((int32_t)51523071), ((int32_t)51314945), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f44 = L_44;
		t1783  L_45 = {0};
		m9385(&L_45, ((int32_t)34746111), ((int32_t)51314945), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f45 = L_45;
		t1783  L_46 = {0};
		m9385(&L_46, ((int32_t)34746367), ((int32_t)51314945), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f46 = L_46;
		t1783  L_47 = {0};
		m9385(&L_47, ((int32_t)34746623), ((int32_t)51314945), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f47 = L_47;
		t1783  L_48 = {0};
		m9385(&L_48, ((int32_t)34746879), ((int32_t)51314945), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f48 = L_48;
		t1783  L_49 = {0};
		m9385(&L_49, ((int32_t)34747135), ((int32_t)51314945), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f49 = L_49;
		t1783  L_50 = {0};
		m9385(&L_50, ((int32_t)34747391), ((int32_t)51314945), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f50 = L_50;
		t1783  L_51 = {0};
		m9385(&L_51, ((int32_t)34747647), ((int32_t)51314945), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f51 = L_51;
		t1783  L_52 = {0};
		m9385(&L_52, ((int32_t)34747903), ((int32_t)51314945), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f52 = L_52;
		t1783  L_53 = {0};
		m9385(&L_53, ((int32_t)34748159), ((int32_t)51314945), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f53 = L_53;
		t1783  L_54 = {0};
		m9385(&L_54, ((int32_t)34748415), ((int32_t)51314945), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f54 = L_54;
		t1783  L_55 = {0};
		m9385(&L_55, ((int32_t)1194239), ((int32_t)1281), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f55 = L_55;
		t1783  L_56 = {0};
		m9385(&L_56, ((int32_t)51526143), ((int32_t)50332929), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f56 = L_56;
		t1783  L_57 = {0};
		m9385(&L_57, ((int32_t)51526399), ((int32_t)50332929), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f57 = L_57;
		t1783  L_58 = {0};
		m9385(&L_58, ((int32_t)34749439), ((int32_t)50331905), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f58 = L_58;
		t1783  L_59 = {0};
		m9385(&L_59, ((int32_t)34749695), ((int32_t)50331905), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f59 = L_59;
		t1783  L_60 = {0};
		m9385(&L_60, ((int32_t)34749951), ((int32_t)50331905), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f60 = L_60;
		t1783  L_61 = {0};
		m9385(&L_61, ((int32_t)34750207), ((int32_t)50331905), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f61 = L_61;
		t1783  L_62 = {0};
		m9385(&L_62, ((int32_t)34750463), ((int32_t)50331905), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f62 = L_62;
		t1783  L_63 = {0};
		m9385(&L_63, ((int32_t)34750719), ((int32_t)50331905), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f63 = L_63;
		t1783  L_64 = {0};
		m9385(&L_64, ((int32_t)34750975), ((int32_t)50331905), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f64 = L_64;
		t1783  L_65 = {0};
		m9385(&L_65, ((int32_t)34751231), ((int32_t)50331905), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f65 = L_65;
		t1783  L_66 = {0};
		m9385(&L_66, ((int32_t)34751487), ((int32_t)50331905), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f66 = L_66;
		t1783  L_67 = {0};
		m9385(&L_67, ((int32_t)34751743), ((int32_t)50331905), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f67 = L_67;
		t1783  L_68 = {0};
		m9385(&L_68, ((int32_t)51529215), ((int32_t)51053825), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f68 = L_68;
		t1783  L_69 = {0};
		m9385(&L_69, ((int32_t)51726079), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f69 = L_69;
		t1783  L_70 = {0};
		m9385(&L_70, ((int32_t)51726335), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f70 = L_70;
		t1783  L_71 = {0};
		m9385(&L_71, ((int32_t)51726591), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f71 = L_71;
		t1783  L_72 = {0};
		m9385(&L_72, ((int32_t)51726847), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f72 = L_72;
		t1783  L_73 = {0};
		m9385(&L_73, ((int32_t)51727103), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f73 = L_73;
		t1783  L_74 = {0};
		m9385(&L_74, ((int32_t)51727359), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f74 = L_74;
		t1783  L_75 = {0};
		m9385(&L_75, ((int32_t)51793151), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f75 = L_75;
		t1783  L_76 = {0};
		m9385(&L_76, ((int32_t)51727871), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f76 = L_76;
		t1783  L_77 = {0};
		m9385(&L_77, ((int32_t)51859199), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f77 = L_77;
		t1783  L_78 = {0};
		m9385(&L_78, ((int32_t)51924991), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f78 = L_78;
		t1783  L_79 = {0};
		m9385(&L_79, ((int32_t)51990783), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f79 = L_79;
		t1783  L_80 = {0};
		m9385(&L_80, ((int32_t)85086719), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f80 = L_80;
		t1783  L_81 = {0};
		m9385(&L_81, ((int32_t)85086975), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f81 = L_81;
		t1783  L_82 = {0};
		m9385(&L_82, ((int32_t)85087231), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f82 = L_82;
		t1783  L_83 = {0};
		m9385(&L_83, ((int32_t)85087487), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f83 = L_83;
		t1783  L_84 = {0};
		m9385(&L_84, ((int32_t)101864959), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f84 = L_84;
		t1783  L_85 = {0};
		m9385(&L_85, ((int32_t)135419647), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f85 = L_85;
		t1783  L_86 = {0};
		m9385(&L_86, ((int32_t)152197119), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f86 = L_86;
		t1783  L_87 = {0};
		m9385(&L_87, ((int32_t)34822399), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f87 = L_87;
		t1783  L_88 = {0};
		m9385(&L_88, ((int32_t)34822655), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f88 = L_88;
		t1783  L_89 = {0};
		m9385(&L_89, ((int32_t)34822911), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f89 = L_89;
		t1783  L_90 = {0};
		m9385(&L_90, ((int32_t)34823167), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f90 = L_90;
		t1783  L_91 = {0};
		m9385(&L_91, ((int32_t)34823423), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f91 = L_91;
		t1783  L_92 = {0};
		m9385(&L_92, ((int32_t)34823679), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f92 = L_92;
		t1783  L_93 = {0};
		m9385(&L_93, ((int32_t)34823935), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f93 = L_93;
		t1783  L_94 = {0};
		m9385(&L_94, ((int32_t)34824191), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f94 = L_94;
		t1783  L_95 = {0};
		m9385(&L_95, ((int32_t)34824447), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f95 = L_95;
		t1783  L_96 = {0};
		m9385(&L_96, ((int32_t)34824703), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f96 = L_96;
		t1783  L_97 = {0};
		m9385(&L_97, ((int32_t)34824959), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f97 = L_97;
		t1783  L_98 = {0};
		m9385(&L_98, ((int32_t)34825215), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f98 = L_98;
		t1783  L_99 = {0};
		m9385(&L_99, ((int32_t)34825471), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f99 = L_99;
		t1783  L_100 = {0};
		m9385(&L_100, ((int32_t)18048511), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f100 = L_100;
		t1783  L_101 = {0};
		m9385(&L_101, ((int32_t)18048767), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f101 = L_101;
		t1783  L_102 = {0};
		m9385(&L_102, ((int32_t)18180095), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f102 = L_102;
		t1783  L_103 = {0};
		m9385(&L_103, ((int32_t)18180351), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f103 = L_103;
		t1783  L_104 = {0};
		m9385(&L_104, ((int32_t)18180607), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f104 = L_104;
		t1783  L_105 = {0};
		m9385(&L_105, ((int32_t)18246399), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f105 = L_105;
		t1783  L_106 = {0};
		m9385(&L_106, ((int32_t)18312191), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f106 = L_106;
		t1783  L_107 = {0};
		m9385(&L_107, ((int32_t)18377983), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f107 = L_107;
		t1783  L_108 = {0};
		m9385(&L_108, ((int32_t)18181631), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f108 = L_108;
		t1783  L_109 = {0};
		m9385(&L_109, ((int32_t)18247423), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f109 = L_109;
		t1783  L_110 = {0};
		m9385(&L_110, ((int32_t)438005759), ((int32_t)33817345), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f110 = L_110;
		t1783  L_111 = {0};
		m9385(&L_111, ((int32_t)85094655), ((int32_t)84738817), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f111 = L_111;
		t1783  L_112 = {0};
		m9385(&L_112, ((int32_t)51606015), ((int32_t)84738817), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f112 = L_112;
		t1783  L_113 = {0};
		m9385(&L_113, ((int32_t)1667839), ((int32_t)84542209), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f113 = L_113;
		t1783  L_114 = {0};
		m9385(&L_114, ((int32_t)437875711), ((int32_t)33817345), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f114 = L_114;
		t1783  L_115 = {0};
		m9385(&L_115, ((int32_t)169440511), ((int32_t)84738817), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f115 = L_115;
		t1783  L_116 = {0};
		m9385(&L_116, ((int32_t)169178623), ((int32_t)84738817), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f116 = L_116;
		t1783  L_117 = {0};
		m9385(&L_117, ((int32_t)18380543), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f117 = L_117;
		t1783  L_118 = {0};
		m9385(&L_118, ((int32_t)169179647), ((int32_t)84739329), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f118 = L_118;
		t1783  L_119 = {0};
		m9385(&L_119, ((int32_t)168983295), ((int32_t)134546177), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f119 = L_119;
		t1783  L_120 = {0};
		m9385(&L_120, ((int32_t)169049087), ((int32_t)83952385), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f120 = L_120;
		t1783  L_121 = {0};
		m9385(&L_121, ((int32_t)169180415), ((int32_t)83952385), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f121 = L_121;
		t1783  L_122 = {0};
		m9385(&L_122, ((int32_t)185761279), ((int32_t)83952385), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f122 = L_122;
		t1783  L_123 = {0};
		m9385(&L_123, ((int32_t)1277695), ((int32_t)83952385), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f123 = L_123;
		t1783  L_124 = {0};
		m9385(&L_124, ((int32_t)1409023), ((int32_t)83952385), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f124 = L_124;
		t1783  L_125 = {0};
		m9385(&L_125, ((int32_t)17989887), ((int32_t)83952385), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f125 = L_125;
		t1783  L_126 = {0};
		m9385(&L_126, ((int32_t)68321791), ((int32_t)84739329), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f126 = L_126;
		t1783  L_127 = {0};
		m9385(&L_127, ((int32_t)18187007), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f127 = L_127;
		t1783  L_128 = {0};
		m9385(&L_128, ((int32_t)18187263), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f128 = L_128;
		t1783  L_129 = {0};
		m9385(&L_129, ((int32_t)18187519), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f129 = L_129;
		t1783  L_130 = {0};
		m9385(&L_130, ((int32_t)18253311), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f130 = L_130;
		t1783  L_131 = {0};
		m9385(&L_131, ((int32_t)18188031), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f131 = L_131;
		t1783  L_132 = {0};
		m9385(&L_132, ((int32_t)18188287), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f132 = L_132;
		t1783  L_133 = {0};
		m9385(&L_133, ((int32_t)18188543), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f133 = L_133;
		t1783  L_134 = {0};
		m9385(&L_134, ((int32_t)18254335), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f134 = L_134;
		t1783  L_135 = {0};
		m9385(&L_135, ((int32_t)18189055), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f135 = L_135;
		t1783  L_136 = {0};
		m9385(&L_136, ((int32_t)18189311), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f136 = L_136;
		t1783  L_137 = {0};
		m9385(&L_137, ((int32_t)18451711), ((int32_t)84739329), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f137 = L_137;
		t1783  L_138 = {0};
		m9385(&L_138, ((int32_t)52006399), ((int32_t)84738817), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f138 = L_138;
		t1783  L_139 = {0};
		m9385(&L_139, ((int32_t)169185023), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f139 = L_139;
		t1783  L_140 = {0};
		m9385(&L_140, ((int32_t)202739711), ((int32_t)84738817), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f140 = L_140;
		t1783  L_141 = {0};
		m9385(&L_141, ((int32_t)202739967), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f141 = L_141;
		t1783  L_142 = {0};
		m9385(&L_142, ((int32_t)202740223), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f142 = L_142;
		t1783  L_143 = {0};
		m9385(&L_143, ((int32_t)202740479), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f143 = L_143;
		t1783  L_144 = {0};
		m9385(&L_144, ((int32_t)202740735), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f144 = L_144;
		t1783  L_145 = {0};
		m9385(&L_145, ((int32_t)202740991), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f145 = L_145;
		t1783  L_146 = {0};
		m9385(&L_146, ((int32_t)202741247), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f146 = L_146;
		t1783  L_147 = {0};
		m9385(&L_147, ((int32_t)202807039), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f147 = L_147;
		t1783  L_148 = {0};
		m9385(&L_148, ((int32_t)202741759), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f148 = L_148;
		t1783  L_149 = {0};
		m9385(&L_149, ((int32_t)202873087), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f149 = L_149;
		t1783  L_150 = {0};
		m9385(&L_150, ((int32_t)202938879), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f150 = L_150;
		t1783  L_151 = {0};
		m9385(&L_151, ((int32_t)203004671), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f151 = L_151;
		t1783  L_152 = {0};
		m9385(&L_152, ((int32_t)219323391), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f152 = L_152;
		t1783  L_153 = {0};
		m9385(&L_153, ((int32_t)219323647), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f153 = L_153;
		t1783  L_154 = {0};
		m9385(&L_154, ((int32_t)219323903), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f154 = L_154;
		t1783  L_155 = {0};
		m9385(&L_155, ((int32_t)219324159), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f155 = L_155;
		t1783  L_156 = {0};
		m9385(&L_156, ((int32_t)236101631), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f156 = L_156;
		t1783  L_157 = {0};
		m9385(&L_157, ((int32_t)252879103), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f157 = L_157;
		t1783  L_158 = {0};
		m9385(&L_158, ((int32_t)269656575), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f158 = L_158;
		t1783  L_159 = {0};
		m9385(&L_159, ((int32_t)286434047), ((int32_t)84214529), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f159 = L_159;
		t1783  L_160 = {0};
		m9385(&L_160, ((int32_t)202613759), ((int32_t)84738817), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f160 = L_160;
		t1783  L_161 = {0};
		m9385(&L_161, ((int32_t)470983935), ((int32_t)84738817), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f161 = L_161;
		t1783  L_162 = {0};
		m9385(&L_162, ((int32_t)169059839), ((int32_t)84738817), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f162 = L_162;
		t1783  L_163 = {0};
		m9385(&L_163, ((int32_t)18199551), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f163 = L_163;
		t1783  L_164 = {0};
		m9385(&L_164, ((int32_t)18199807), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f164 = L_164;
		t1783  L_165 = {0};
		m9385(&L_165, ((int32_t)18200063), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f165 = L_165;
		t1783  L_166 = {0};
		m9385(&L_166, ((int32_t)18200319), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f166 = L_166;
		t1783  L_167 = {0};
		m9385(&L_167, ((int32_t)18200575), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f167 = L_167;
		t1783  L_168 = {0};
		m9385(&L_168, ((int32_t)18200831), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f168 = L_168;
		t1783  L_169 = {0};
		m9385(&L_169, ((int32_t)18266623), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f169 = L_169;
		t1783  L_170 = {0};
		m9385(&L_170, ((int32_t)18266879), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f170 = L_170;
		t1783  L_171 = {0};
		m9385(&L_171, ((int32_t)18203391), ((int32_t)84739329), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f171 = L_171;
		t1783  L_172 = {0};
		m9385(&L_172, ((int32_t)18400255), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f172 = L_172;
		t1783  L_173 = {0};
		m9385(&L_173, ((int32_t)51627775), ((int32_t)84739329), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f173 = L_173;
		t1783  L_174 = {0};
		m9385(&L_174, ((int32_t)1429759), ((int32_t)84673793), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f174 = L_174;
		t1783  L_175 = {0};
		m9385(&L_175, ((int32_t)18207231), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f175 = L_175;
		t1783  L_176 = {0};
		m9385(&L_176, ((int32_t)18207487), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f176 = L_176;
		t1783  L_177 = {0};
		m9385(&L_177, ((int32_t)18207743), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f177 = L_177;
		t1783  L_178 = {0};
		m9385(&L_178, ((int32_t)18207999), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f178 = L_178;
		t1783  L_179 = {0};
		m9385(&L_179, ((int32_t)18208255), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f179 = L_179;
		t1783  L_180 = {0};
		m9385(&L_180, ((int32_t)34854655), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f180 = L_180;
		t1783  L_181 = {0};
		m9385(&L_181, ((int32_t)34854911), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f181 = L_181;
		t1783  L_182 = {0};
		m9385(&L_182, ((int32_t)34855167), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f182 = L_182;
		t1783  L_183 = {0};
		m9385(&L_183, ((int32_t)34855423), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f183 = L_183;
		t1783  L_184 = {0};
		m9385(&L_184, ((int32_t)34855679), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f184 = L_184;
		t1783  L_185 = {0};
		m9385(&L_185, ((int32_t)34855935), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f185 = L_185;
		t1783  L_186 = {0};
		m9385(&L_186, ((int32_t)1236223), ((int32_t)117769473), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f186 = L_186;
		t1783  L_187 = {0};
		m9385(&L_187, ((int32_t)1236479), ((int32_t)1281), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f187 = L_187;
		t1783  L_188 = {0};
		m9385(&L_188, ((int32_t)1236735), ((int32_t)984321), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f188 = L_188;
		t1783  L_189 = {0};
		m9385(&L_189, ((int32_t)85123071), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f189 = L_189;
		t1783  L_190 = {0};
		m9385(&L_190, ((int32_t)18211071), ((int32_t)84215041), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f190 = L_190;
		t1783  L_191 = {0};
		m9385(&L_191, ((int32_t)1243391), ((int32_t)67437057), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f191 = L_191;
		t1783  L_192 = {0};
		m9385(&L_192, ((int32_t)1243647), ((int32_t)67437057), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f192 = L_192;
		t1783  L_193 = {0};
		m9385(&L_193, ((int32_t)1243903), ((int32_t)67437057), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f193 = L_193;
		t1783  L_194 = {0};
		m9385(&L_194, ((int32_t)1244159), ((int32_t)67437057), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f194 = L_194;
		t1783  L_195 = {0};
		m9385(&L_195, ((int32_t)1244415), ((int32_t)67437057), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f195 = L_195;
		t1783  L_196 = {0};
		m9385(&L_196, ((int32_t)1244671), ((int32_t)67437057), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f196 = L_196;
		t1783  L_197 = {0};
		m9385(&L_197, ((int32_t)1244927), ((int32_t)67437057), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f197 = L_197;
		t1783  L_198 = {0};
		m9385(&L_198, ((int32_t)1245183), ((int32_t)67437057), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f198 = L_198;
		t1783  L_199 = {0};
		m9385(&L_199, ((int32_t)1376510), ((int32_t)84215042), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f199 = L_199;
		t1783  L_200 = {0};
		m9385(&L_200, ((int32_t)34931198), ((int32_t)84215042), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f200 = L_200;
		t1783  L_201 = {0};
		m9385(&L_201, ((int32_t)34931454), ((int32_t)84215042), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f201 = L_201;
		t1783  L_202 = {0};
		m9385(&L_202, ((int32_t)34931710), ((int32_t)84215042), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f202 = L_202;
		t1783  L_203 = {0};
		m9385(&L_203, ((int32_t)34931966), ((int32_t)84215042), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f203 = L_203;
		t1783  L_204 = {0};
		m9385(&L_204, ((int32_t)34932222), ((int32_t)84215042), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f204 = L_204;
		t1783  L_205 = {0};
		m9385(&L_205, ((int32_t)1378046), ((int32_t)84149506), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f205 = L_205;
		t1783  L_206 = {0};
		m9385(&L_206, ((int32_t)169150462), ((int32_t)84149506), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f206 = L_206;
		t1783  L_207 = {0};
		m9385(&L_207, ((int32_t)1247742), ((int32_t)84804866), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f207 = L_207;
		t1783  L_208 = {0};
		m9385(&L_208, ((int32_t)1379070), ((int32_t)84804866), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f208 = L_208;
		t1783  L_209 = {0};
		m9385(&L_209, ((int32_t)17959934), ((int32_t)84804866), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f209 = L_209;
		t1783  L_210 = {0};
		m9385(&L_210, ((int32_t)1248510), ((int32_t)84804866), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f210 = L_210;
		t1783  L_211 = {0};
		m9385(&L_211, ((int32_t)1379838), ((int32_t)84804866), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f211 = L_211;
		t1783  L_212 = {0};
		m9385(&L_212, ((int32_t)17960702), ((int32_t)84804866), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f212 = L_212;
		t1783  L_213 = {0};
		m9385(&L_213, ((int32_t)51711998), ((int32_t)84215042), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f213 = L_213;
		t1783  L_214 = {0};
		m9385(&L_214, ((int32_t)51515902), ((int32_t)117769474), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f214 = L_214;
		t1783  L_215 = {0};
		m9385(&L_215, ((int32_t)1184510), ((int32_t)68158466), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f215 = L_215;
		t1783  L_216 = {0};
		m9385(&L_216, ((int32_t)1184766), ((int32_t)67437570), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f216 = L_216;
		t1783  L_217 = {0};
		m9385(&L_217, ((int32_t)1185022), ((int32_t)67437570), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f217 = L_217;
		t1783  L_218 = {0};
		m9385(&L_218, ((int32_t)51516926), ((int32_t)84738818), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f218 = L_218;
		t1783  L_219 = {0};
		m9385(&L_219, ((int32_t)1185534), ((int32_t)67961858), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f219 = L_219;
		t1783  L_220 = {0};
		m9385(&L_220, ((int32_t)118626302), ((int32_t)84215042), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f220 = L_220;
		t1783  L_221 = {0};
		m9385(&L_221, ((int32_t)118626558), ((int32_t)84215042), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f221 = L_221;
		t1783  L_222 = {0};
		m9385(&L_222, ((int32_t)1186558), ((int32_t)134546178), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f222 = L_222;
		t1783  L_223 = {0};
		m9385(&L_223, ((int32_t)1383678), ((int32_t)84739330), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f223 = L_223;
		t1783  L_224 = {0};
		m9385(&L_224, ((int32_t)18161150), ((int32_t)84215042), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f224 = L_224;
		t1783  L_225 = {0};
		m9385(&L_225, ((int32_t)1187582), ((int32_t)67437570), &m9385_MI);
		((t1795_SFs*)InitializedTypeInfo(&t1795_TI)->static_fields)->f225 = L_225;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1792_TI;
#include "t1792MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1753_TI;
#include "t1753MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1791_TI;
#include "t1791MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1796_TI;
#include "t1796MD.h"

#include "t1797.h"


extern MethodInfo m9398_MI;
extern "C" int32_t m9398 (t1796 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9399_MI;
extern "C" t2* m9399 (t1796 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9400_MI;
extern "C" int32_t m9400 (t1796 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
#include "t1798.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1798_TI;
#include "t1798MD.h"

#include "t1799.h"
extern MethodInfo m9420_MI;


extern MethodInfo m9401_MI;
extern "C" int32_t m9401 (t1798 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9402_MI;
extern "C" bool m9402 (t1798 * __this, MethodInfo* method)
{
	{
		t1773 * L_0 = (__this->f4);
		return ((((int32_t)((((t9*)(t1773 *)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9403_MI;
extern "C" bool m9403 (t1798 * __this, MethodInfo* method)
{
	{
		t1773 * L_0 = (__this->f3);
		return ((((int32_t)((((t9*)(t1773 *)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9404_MI;
extern "C" t126 * m9404 (t1798 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m9405_MI;
extern "C" t2* m9405 (t1798 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9406_MI;
extern "C" t126 * m9406 (t1798 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9407_MI;
extern "C" t126 * m9407 (t1798 * __this, MethodInfo* method)
{
	{
		t1760 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m9408_MI;
extern "C" t1576* m9408 (t1798 * __this, bool p0, MethodInfo* method)
{
	{
		return (t1576*)NULL;
	}
}
extern MethodInfo m9409_MI;
extern "C" t158* m9409 (t1798 * __this, bool p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9420(__this, &m9420_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9410_MI;
extern "C" t158* m9410 (t1798 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9420(__this, &m9420_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9411_MI;
extern "C" t835 * m9411 (t1798 * __this, bool p0, MethodInfo* method)
{
	{
		t1773 * L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9412_MI;
extern "C" t934* m9412 (t1798 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9420(__this, &m9420_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9413_MI;
extern "C" t835 * m9413 (t1798 * __this, bool p0, MethodInfo* method)
{
	{
		t1773 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9414_MI;
extern "C" t9 * m9414 (t1798 * __this, t9 * p0, t158* p1, MethodInfo* method)
{
	{
		return NULL;
	}
}
extern MethodInfo m9415_MI;
extern "C" t9 * m9415 (t1798 * __this, t9 * p0, int32_t p1, t939 * p2, t158* p3, t907 * p4, MethodInfo* method)
{
	{
		t138 * L_0 = m9420(__this, &m9420_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9416_MI;
extern "C" bool m9416 (t1798 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9420(__this, &m9420_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9417_MI;
extern "C" void m9417 (t1798 * __this, t9 * p0, t9 * p1, t158* p2, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9418_MI;
extern "C" void m9418 (t1798 * __this, t9 * p0, t9 * p1, int32_t p2, t939 * p3, t158* p4, t907 * p5, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9419_MI;
extern "C" t1574 * m9419 (t1798 * __this, MethodInfo* method)
{
	{
		t1574 * L_0 = m7854(__this, &m7854_MI);
		return L_0;
	}
}
extern "C" t138 * m9420 (t1798 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_0, (t2*) &_stringLiteral1721, &m5776_MI);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1793_TI;
#include "t1793MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1804.h"
#include "t1176.h"
extern TypeInfo t1804_TI;
extern TypeInfo t1812_TI;
extern TypeInfo t1801_TI;
extern TypeInfo t1800_TI;
extern TypeInfo t1176_TI;
extern TypeInfo t1763_TI;
extern TypeInfo t1771_TI;
#include "t1804MD.h"
#include "t939MD.h"
#include "t1176MD.h"
#include "t837MD.h"
#include "t844MD.h"
extern Il2CppType t1812_0_0_0;
extern Il2CppType t1801_0_0_0;
extern Il2CppType t1800_0_0_0;
extern Il2CppType t932_0_0_0;
extern Il2CppType t936_0_0_0;
extern Il2CppType t1576_0_0_0;
extern Il2CppType t935_0_0_0;
extern MethodInfo m9493_MI;
extern MethodInfo m12006_MI;
extern MethodInfo m7796_MI;
extern MethodInfo m9469_MI;
extern MethodInfo m9473_MI;
extern MethodInfo m7806_MI;
extern MethodInfo m9483_MI;
extern MethodInfo m7784_MI;
extern MethodInfo m9424_MI;
extern MethodInfo m9474_MI;
extern MethodInfo m9430_MI;
extern MethodInfo m4451_MI;
extern MethodInfo m9486_MI;
extern MethodInfo m9549_MI;
extern MethodInfo m12055_MI;
extern MethodInfo m11646_MI;
extern MethodInfo m12056_MI;
extern MethodInfo m4473_MI;
extern MethodInfo m9441_MI;
extern MethodInfo m9472_MI;
extern MethodInfo m9444_MI;
extern MethodInfo m9445_MI;
extern MethodInfo m7798_MI;
extern MethodInfo m9442_MI;
extern MethodInfo m12023_MI;
extern MethodInfo m9448_MI;
extern MethodInfo m5768_MI;
extern MethodInfo m5779_MI;
extern MethodInfo m5764_MI;
extern MethodInfo m5970_MI;
extern MethodInfo m12057_MI;
extern MethodInfo m12058_MI;
extern MethodInfo m12017_MI;
extern MethodInfo m4468_MI;
extern MethodInfo m12059_MI;
extern MethodInfo m12060_MI;
extern MethodInfo m5923_MI;
extern MethodInfo m12016_MI;
extern MethodInfo m4431_MI;
extern MethodInfo m5919_MI;
extern MethodInfo m7396_MI;
extern MethodInfo m9454_MI;
extern MethodInfo m9552_MI;
extern MethodInfo m4467_MI;
extern MethodInfo m4469_MI;
extern MethodInfo m4470_MI;
extern MethodInfo m9471_MI;
extern MethodInfo m4480_MI;
extern MethodInfo m7816_MI;
extern MethodInfo m4515_MI;


extern "C" void m9421 (t1760 * __this, t1755 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t2* V_0 = {0};
	t1760 * G_B2_0 = {0};
	t1760 * G_B2_1 = {0};
	t1760 * G_B1_0 = {0};
	t1760 * G_B1_1 = {0};
	t2* G_B3_0 = {0};
	t1760 * G_B3_1 = {0};
	t1760 * G_B3_2 = {0};
	{
		m7784(__this, &m7784_MI);
		__this->f10 = (t126 *)NULL;
		int32_t L_0 = p1;
		__this->f19 = L_0;
		__this->f22 = 0;
		int32_t L_1 = p2;
		__this->f20 = L_1;
		int32_t L_2 = p2;
		G_B1_0 = __this;
		G_B1_1 = __this;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = __this;
			G_B2_1 = __this;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = (t2*) &_stringLiteral1984;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_003f;
	}

IL_002f:
	{
		int32_t L_3 = p2;
		int32_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t125_TI), &L_4);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m511(NULL, (t2*) &_stringLiteral1985, L_5, &m511_MI);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_003f:
	{
		t2* L_7 = G_B3_0;
		V_0 = L_7;
		G_B3_1->f8 = L_7;
		t2* L_8 = V_0;
		G_B3_2->f26 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_9 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		__this->f9 = L_9;
		t1755 * L_10 = p0;
		__this->f21 = L_10;
		m9424(__this, __this, &m9424_MI);
		return;
	}
}
extern TypeInfo* t152_TI_var;
extern "C" void m9422 (t1760 * __this, t1755 * p0, t2* p1, int32_t p2, t126 * p3, t152* p4, int32_t p5, int32_t p6, t126 * p7, MethodInfo* method)
{
	static bool m9422_init;
	if (!m9422_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9422_init = true;
	}
	int32_t V_0 = 0;
	{
		m7784(__this, &m7784_MI);
		t126 * L_0 = p3;
		__this->f10 = L_0;
		int32_t L_1 = p2;
		__this->f19 = L_1;
		int32_t L_2 = p6;
		__this->f22 = L_2;
		int32_t L_3 = p5;
		__this->f23 = L_3;
		t126 * L_4 = p7;
		__this->f11 = L_4;
		t2* L_5 = p1;
		m9474(__this, (t2*) &_stringLiteral1986, L_5, &m9474_MI);
		t126 * L_6 = p3;
		if (L_6)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_7 = p2;
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)32))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_8 = p2;
		if (((int32_t)((int32_t)L_8&(int32_t)((int32_t)128))))
		{
			goto IL_0057;
		}
	}
	{
		t1347 * L_9 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_9, (t2*) &_stringLiteral1987, &m5755_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0057:
	{
		t2* L_10 = p1;
		int32_t L_11 = m5791(L_10, ((int32_t)46), &m5791_MI);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0083;
		}
	}
	{
		t2* L_13 = p1;
		int32_t L_14 = V_0;
		t2* L_15 = m2805(L_13, ((int32_t)((int32_t)L_14+(int32_t)1)), &m2805_MI);
		__this->f8 = L_15;
		t2* L_16 = p1;
		int32_t L_17 = V_0;
		t2* L_18 = m2779(L_16, 0, L_17, &m2779_MI);
		__this->f9 = L_18;
		goto IL_0095;
	}

IL_0083:
	{
		t2* L_19 = p1;
		__this->f8 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_20 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		__this->f9 = L_20;
	}

IL_0095:
	{
		t152* L_21 = p4;
		if (!L_21)
		{
			goto IL_00b9;
		}
	}
	{
		t152* L_22 = p4;
		__this->f12 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_22)->max_length)))));
		t152* L_23 = p4;
		t152* L_24 = (__this->f12);
		t152* L_25 = p4;
		m5982(NULL, (t121 *)(t121 *)L_23, (t121 *)(t121 *)L_24, (((int32_t)(((t121 *)L_25)->max_length))), &m5982_MI);
	}

IL_00b9:
	{
		t1755 * L_26 = p0;
		__this->f21 = L_26;
		int32_t L_27 = p2;
		if (((int32_t)((int32_t)L_27&(int32_t)((int32_t)32))))
		{
			goto IL_00e2;
		}
	}
	{
		t126 * L_28 = p3;
		if (L_28)
		{
			goto IL_00e2;
		}
	}
	{
		bool L_29 = m9469(__this, &m9469_MI);
		if (L_29)
		{
			goto IL_00e2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_30 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		__this->f10 = L_30;
	}

IL_00e2:
	{
		t1755 * L_31 = p0;
		int32_t L_32 = m9370(L_31, __this, 2, 1, &m9370_MI);
		__this->f20 = L_32;
		m9424(__this, __this, &m9424_MI);
		t2* L_33 = m9430(__this, &m9430_MI);
		__this->f26 = L_33;
		return;
	}
}
extern MethodInfo m9423_MI;
extern "C" int32_t m9423 (t1760 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f19);
		return L_0;
	}
}
extern "C" void m9424 (t1760 * __this, t1760 * p0, MethodInfo* method)
{
	typedef void (*m9424_ftn) (t1760 *, t1760 *);
	static m9424_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9424_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.TypeBuilder::setup_internal_class(System.Reflection.Emit.TypeBuilder)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t1351 * m9425 (t1760 * __this, MethodInfo* method)
{
	{
		t1755 * L_0 = (__this->f21);
		t1351 * L_1 = m9606(L_0, &m9606_MI);
		return L_1;
	}
}
extern "C" t2* m9426 (t1760 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f26);
		t1351 * L_1 = (t1351 *)VirtFuncInvoker0< t1351 * >::Invoke(&m9425_MI, __this);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9493_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m399(NULL, L_0, (t2*) &_stringLiteral384, L_2, &m399_MI);
		return L_3;
	}
}
extern "C" t126 * m9427 (t1760 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f10);
		return L_0;
	}
}
extern "C" t126 * m9428 (t1760 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m9429_MI;
extern "C" t126 * m9429 (t1760 * __this, MethodInfo* method)
{
	{
		bool L_0 = m9470(__this, &m9470_MI);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t126 * L_1 = (__this->f25);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12006_MI, L_1);
		return L_2;
	}

IL_0014:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, __this);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		bool L_4 = m9469(__this, &m9469_MI);
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		t126 * L_5 = (__this->f27);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		t126 * L_6 = (__this->f27);
		return L_6;
	}

IL_0033:
	{
		t1347 * L_7 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_7, (t2*) &_stringLiteral1983, &m5755_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003e:
	{
		return __this;
	}
}
extern "C" t2* m9430 (t1760 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f11);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		t126 * L_1 = (__this->f11);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_1);
		t2* L_3 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m399(NULL, L_2, (t2*) &_stringLiteral168, L_3, &m399_MI);
		return L_4;
	}

IL_0024:
	{
		t2* L_5 = (__this->f9);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		t2* L_6 = (__this->f9);
		int32_t L_7 = m2763(L_6, &m2763_MI);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		t2* L_8 = (__this->f9);
		t2* L_9 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m399(NULL, L_8, (t2*) &_stringLiteral135, L_9, &m399_MI);
		return L_10;
	}

IL_0051:
	{
		t2* L_11 = (__this->f8);
		return L_11;
	}
}
extern "C" t2* m9431 (t1760 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f26);
		return L_0;
	}
}
extern "C" t1574 * m9432 (t1760 * __this, MethodInfo* method)
{
	{
		t1755 * L_0 = (__this->f21);
		return L_0;
	}
}
extern "C" t2* m9433 (t1760 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f8);
		return L_0;
	}
}
extern "C" t2* m9434 (t1760 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f9);
		return L_0;
	}
}
extern "C" t126 * m9435 (t1760 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m9436_MI;
extern TypeInfo* t1812_TI_var;
extern "C" t833 * m9436 (t1760 * __this, int32_t p0, t939 * p1, int32_t p2, t152* p3, t941* p4, MethodInfo* method)
{
	static bool m9436_init;
	if (!m9436_init)
	{
		t1812_TI_var = il2cpp_codegen_class_from_type(&t1812_0_0_0);
		m9436_init = true;
	}
	t1758 * V_0 = {0};
	int32_t V_1 = 0;
	t1758 * V_2 = {0};
	t1801* V_3 = {0};
	int32_t V_4 = 0;
	t1812* V_5 = {0};
	t833 * V_6 = {0};
	t1801* V_7 = {0};
	int32_t V_8 = 0;
	{
		m9473(__this, &m9473_MI);
		t126 * L_0 = (__this->f25);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t126 *)L_1))))
		{
			goto IL_00e1;
		}
	}
	{
		t1801* L_2 = (__this->f15);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		return (t833 *)NULL;
	}

IL_0025:
	{
		V_0 = (t1758 *)NULL;
		V_1 = 0;
		t1801* L_3 = (__this->f15);
		V_3 = L_3;
		V_4 = 0;
		goto IL_0055;
	}

IL_0035:
	{
		t1801* L_4 = V_3;
		int32_t L_5 = V_4;
		int32_t L_6 = L_5;
		V_2 = (*(t1758 **)(t1758 **)SZArrayLdElema(L_4, L_6));
		int32_t L_7 = p2;
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_0049;
		}
	}
	{
		t1758 * L_8 = V_2;
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9151_MI, L_8);
		int32_t L_10 = p2;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_004f;
	}

IL_0049:
	{
		t1758 * L_11 = V_2;
		V_0 = L_11;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_13 = V_4;
		V_4 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0055:
	{
		int32_t L_14 = V_4;
		t1801* L_15 = V_3;
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((t121 *)L_15)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_16 = V_1;
		if (L_16)
		{
			goto IL_0061;
		}
	}
	{
		return (t833 *)NULL;
	}

IL_0061:
	{
		t152* L_17 = p3;
		if (L_17)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_006f;
		}
	}
	{
		t1804 * L_19 = (t1804 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1804_TI));
		m9486(L_19, &m9486_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_006f:
	{
		t1758 * L_20 = V_0;
		return L_20;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		V_5 = ((t1812*)SZArrayNew(t1812_TI_var, L_21));
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		t1812* L_23 = V_5;
		t1758 * L_24 = V_0;
		ArrayElementTypeCheck (L_23, L_24);
		*((t920 **)(t920 **)SZArrayLdElema(L_23, 0)) = (t920 *)L_24;
		goto IL_00c2;
	}

IL_0084:
	{
		V_1 = 0;
		t1801* L_25 = (__this->f15);
		V_7 = L_25;
		V_8 = 0;
		goto IL_00ba;
	}

IL_0093:
	{
		t1801* L_26 = V_7;
		int32_t L_27 = V_8;
		int32_t L_28 = L_27;
		V_6 = (*(t1758 **)(t1758 **)SZArrayLdElema(L_26, L_28));
		int32_t L_29 = p2;
		if ((((int32_t)L_29) == ((int32_t)3)))
		{
			goto IL_00aa;
		}
	}
	{
		t833 * L_30 = V_6;
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9586_MI, L_30);
		int32_t L_32 = p2;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_00aa;
		}
	}
	{
		goto IL_00b4;
	}

IL_00aa:
	{
		t1812* L_33 = V_5;
		int32_t L_34 = V_1;
		int32_t L_35 = L_34;
		V_1 = ((int32_t)((int32_t)L_35+(int32_t)1));
		t833 * L_36 = V_6;
		ArrayElementTypeCheck (L_33, L_36);
		*((t920 **)(t920 **)SZArrayLdElema(L_33, L_35)) = (t920 *)L_36;
	}

IL_00b4:
	{
		int32_t L_37 = V_8;
		V_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_00ba:
	{
		int32_t L_38 = V_8;
		t1801* L_39 = V_7;
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)(((t121 *)L_39)->max_length))))))
		{
			goto IL_0093;
		}
	}

IL_00c2:
	{
		t939 * L_40 = p1;
		if (L_40)
		{
			goto IL_00ce;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		t939 * L_41 = m9549(NULL, &m9549_MI);
		p1 = L_41;
	}

IL_00ce:
	{
		t939 * L_42 = p1;
		int32_t L_43 = p0;
		t1812* L_44 = V_5;
		t152* L_45 = p3;
		t941* L_46 = p4;
		t920 * L_47 = (t920 *)VirtFuncInvoker4< t920 *, int32_t, t1812*, t152*, t941* >::Invoke(&m12055_MI, L_42, L_43, L_44, L_45, L_46);
		return ((t833 *)Castclass(L_47, InitializedTypeInfo(&t833_TI)));
	}

IL_00e1:
	{
		t126 * L_48 = (__this->f25);
		int32_t L_49 = p0;
		t939 * L_50 = p1;
		int32_t L_51 = p2;
		t152* L_52 = p3;
		t941* L_53 = p4;
		t833 * L_54 = (t833 *)VirtFuncInvoker5< t833 *, int32_t, t939 *, int32_t, t152*, t941* >::Invoke(&m7839_MI, L_48, L_49, L_50, L_51, L_52, L_53);
		return L_54;
	}
}
extern "C" bool m9437 (t1760 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		bool L_0 = m9470(__this, &m9470_MI);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = m9469(__this, &m9469_MI);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		t169 * L_2 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_2, &m561_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		t126 * L_3 = p0;
		bool L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		bool L_5 = m11646(NULL, __this, L_3, L_4, &m11646_MI);
		return L_5;
	}
}
extern "C" t158* m9438 (t1760 * __this, bool p0, MethodInfo* method)
{
	{
		m9473(__this, &m9473_MI);
		t126 * L_0 = (__this->f25);
		bool L_1 = p0;
		t158* L_2 = (t158*)VirtFuncInvoker1< t158*, bool >::Invoke(&m12056_MI, L_0, L_1);
		return L_2;
	}
}
extern "C" t158* m9439 (t1760 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		m9473(__this, &m9473_MI);
		t126 * L_0 = (__this->f25);
		t126 * L_1 = p0;
		bool L_2 = p1;
		t158* L_3 = (t158*)VirtFuncInvoker2< t158*, t126 *, bool >::Invoke(&m4473_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9440_MI;
extern "C" t1758 * m9440 (t1760 * __this, int32_t p0, int32_t p1, t152* p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		t152* L_2 = p2;
		t1758 * L_3 = m9441(__this, L_0, L_1, L_2, (t1762*)(t1762*)NULL, (t1762*)(t1762*)NULL, &m9441_MI);
		return L_3;
	}
}
extern TypeInfo* t1801_TI_var;
extern "C" t1758 * m9441 (t1760 * __this, int32_t p0, int32_t p1, t152* p2, t1762* p3, t1762* p4, MethodInfo* method)
{
	static bool m9441_init;
	if (!m9441_init)
	{
		t1801_TI_var = il2cpp_codegen_class_from_type(&t1801_0_0_0);
		m9441_init = true;
	}
	t1758 * V_0 = {0};
	t1801* V_1 = {0};
	{
		m9472(__this, &m9472_MI);
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		t152* L_2 = p2;
		t1762* L_3 = p3;
		t1762* L_4 = p4;
		t1758 * L_5 = (t1758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1758_TI));
		m9150(L_5, __this, L_0, L_1, L_2, L_3, L_4, &m9150_MI);
		V_0 = L_5;
		t1801* L_6 = (__this->f15);
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		t1801* L_7 = (__this->f15);
		V_1 = ((t1801*)SZArrayNew(t1801_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))+(int32_t)1))));
		t1801* L_8 = (__this->f15);
		t1801* L_9 = V_1;
		t1801* L_10 = (__this->f15);
		m5982(NULL, (t121 *)(t121 *)L_8, (t121 *)(t121 *)L_9, (((int32_t)(((t121 *)L_10)->max_length))), &m5982_MI);
		t1801* L_11 = V_1;
		t1801* L_12 = (__this->f15);
		t1758 * L_13 = V_0;
		ArrayElementTypeCheck (L_11, L_13);
		*((t1758 **)(t1758 **)SZArrayLdElema(L_11, (((int32_t)(((t121 *)L_12)->max_length))))) = (t1758 *)L_13;
		t1801* L_14 = V_1;
		__this->f15 = L_14;
		goto IL_0069;
	}

IL_0054:
	{
		__this->f15 = ((t1801*)SZArrayNew(t1801_TI_var, 1));
		t1801* L_15 = (__this->f15);
		t1758 * L_16 = V_0;
		ArrayElementTypeCheck (L_15, L_16);
		*((t1758 **)(t1758 **)SZArrayLdElema(L_15, 0)) = (t1758 *)L_16;
	}

IL_0069:
	{
		t1758 * L_17 = V_0;
		return L_17;
	}
}
extern TypeInfo* t1800_TI_var;
extern "C" void m9442 (t1760 * __this, t1773 * p0, MethodInfo* method)
{
	static bool m9442_init;
	if (!m9442_init)
	{
		t1800_TI_var = il2cpp_codegen_class_from_type(&t1800_0_0_0);
		m9442_init = true;
	}
	t1800* V_0 = {0};
	{
		t1800* L_0 = (__this->f14);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		t1800* L_1 = (__this->f14);
		int32_t L_2 = (__this->f13);
		if ((!(((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))) == ((uint32_t)L_2))))
		{
			goto IL_0041;
		}
	}
	{
		t1800* L_3 = (__this->f14);
		V_0 = ((t1800*)SZArrayNew(t1800_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_3)->max_length)))*(int32_t)2))));
		t1800* L_4 = (__this->f14);
		t1800* L_5 = V_0;
		int32_t L_6 = (__this->f13);
		m5982(NULL, (t121 *)(t121 *)L_4, (t121 *)(t121 *)L_5, L_6, &m5982_MI);
		t1800* L_7 = V_0;
		__this->f14 = L_7;
	}

IL_0041:
	{
		goto IL_004f;
	}

IL_0043:
	{
		__this->f14 = ((t1800*)SZArrayNew(t1800_TI_var, 1));
	}

IL_004f:
	{
		t1800* L_8 = (__this->f14);
		int32_t L_9 = (__this->f13);
		t1773 * L_10 = p0;
		ArrayElementTypeCheck (L_8, L_10);
		*((t1773 **)(t1773 **)SZArrayLdElema(L_8, L_9)) = (t1773 *)L_10;
		int32_t L_11 = (__this->f13);
		__this->f13 = ((int32_t)((int32_t)L_11+(int32_t)1));
		return;
	}
}
extern MethodInfo m9443_MI;
extern "C" t1773 * m9443 (t1760 * __this, t2* p0, int32_t p1, t126 * p2, t152* p3, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		t126 * L_2 = p2;
		t152* L_3 = p3;
		t1773 * L_4 = m9444(__this, L_0, L_1, 1, L_2, L_3, &m9444_MI);
		return L_4;
	}
}
extern "C" t1773 * m9444 (t1760 * __this, t2* p0, int32_t p1, int32_t p2, t126 * p3, t152* p4, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		t126 * L_3 = p3;
		t152* L_4 = p4;
		t1773 * L_5 = m9445(__this, L_0, L_1, L_2, L_3, (t152*)(t152*)NULL, (t152*)(t152*)NULL, L_4, (t1762*)(t1762*)NULL, (t1762*)(t1762*)NULL, &m9445_MI);
		return L_5;
	}
}
extern "C" t1773 * m9445 (t1760 * __this, t2* p0, int32_t p1, int32_t p2, t126 * p3, t152* p4, t152* p5, t152* p6, t1762* p7, t1762* p8, MethodInfo* method)
{
	t1773 * V_0 = {0};
	{
		t2* L_0 = p0;
		m9474(__this, (t2*) &_stringLiteral2, L_0, &m9474_MI);
		m9472(__this, &m9472_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7798_MI, __this);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_2 = p1;
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)1024))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = p1;
		if (((int32_t)((int32_t)L_3&(int32_t)((int32_t)64))))
		{
			goto IL_003a;
		}
	}

IL_0029:
	{
		int32_t L_4 = p1;
		if (((int32_t)((int32_t)L_4&(int32_t)((int32_t)16))))
		{
			goto IL_003a;
		}
	}
	{
		t570 * L_5 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_5, (t2*) &_stringLiteral1988, &m2949_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003a:
	{
		t126 * L_6 = p3;
		if (L_6)
		{
			goto IL_0052;
		}
	}
	{
		t1755 * L_7 = (__this->f21);
		t1750 * L_8 = (L_7->f14);
		t126 * L_9 = (L_8->f24);
		p3 = L_9;
	}

IL_0052:
	{
		t2* L_10 = p0;
		int32_t L_11 = p1;
		int32_t L_12 = p2;
		t126 * L_13 = p3;
		t152* L_14 = p4;
		t152* L_15 = p5;
		t152* L_16 = p6;
		t1762* L_17 = p7;
		t1762* L_18 = p8;
		t1773 * L_19 = (t1773 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1773_TI));
		m9320(L_19, __this, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, &m9320_MI);
		V_0 = L_19;
		t1773 * L_20 = V_0;
		m9442(__this, L_20, &m9442_MI);
		t1773 * L_21 = V_0;
		return L_21;
	}
}
extern MethodInfo m9446_MI;
extern "C" void m9446 (t1760 * __this, t835 * p0, t835 * p1, MethodInfo* method)
{
	t1773 * V_0 = {0};
	{
		t835 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1989, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t835 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1990, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		m9472(__this, &m9472_MI);
		t835 * L_4 = p0;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_4);
		if ((((t9*)(t126 *)L_5) == ((t9*)(t1760 *)__this)))
		{
			goto IL_0036;
		}
	}
	{
		t570 * L_6 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_6, (t2*) &_stringLiteral1991, &m2949_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0036:
	{
		t835 * L_7 = p0;
		if (!((t1773 *)IsInst(L_7, InitializedTypeInfo(&t1773_TI))))
		{
			goto IL_004c;
		}
	}
	{
		t835 * L_8 = p0;
		V_0 = ((t1773 *)Castclass(L_8, InitializedTypeInfo(&t1773_TI)));
		t1773 * L_9 = V_0;
		t835 * L_10 = p1;
		m9343(L_9, L_10, &m9343_MI);
	}

IL_004c:
	{
		return;
	}
}
extern "C" t932* m9447 (t1760 * __this, int32_t p0, MethodInfo* method)
{
	{
		bool L_0 = m9470(__this, &m9470_MI);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t126 * L_1 = (__this->f25);
		int32_t L_2 = p0;
		t932* L_3 = (t932*)VirtFuncInvoker1< t932*, int32_t >::Invoke(&m12023_MI, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		bool L_4 = m9469(__this, &m9469_MI);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_5, &m561_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = p0;
		t932* L_7 = m9448(__this, L_6, &m9448_MI);
		return L_7;
	}
}
extern TypeInfo* t932_TI_var;
extern "C" t932* m9448 (t1760 * __this, int32_t p0, MethodInfo* method)
{
	static bool m9448_init;
	if (!m9448_init)
	{
		t932_TI_var = il2cpp_codegen_class_from_type(&t932_0_0_0);
		m9448_init = true;
	}
	t1176 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	t1758 * V_3 = {0};
	t1801* V_4 = {0};
	int32_t V_5 = 0;
	t932* V_6 = {0};
	{
		t1801* L_0 = (__this->f15);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((t932*)SZArrayNew(t932_TI_var, 0));
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_1 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_1, &m5768_MI);
		V_0 = L_1;
		t1801* L_2 = (__this->f15);
		V_4 = L_2;
		V_5 = 0;
		goto IL_0079;
	}

IL_0022:
	{
		t1801* L_3 = V_4;
		int32_t L_4 = V_5;
		int32_t L_5 = L_4;
		V_3 = (*(t1758 **)(t1758 **)SZArrayLdElema(L_3, L_5));
		V_1 = 0;
		t1758 * L_6 = V_3;
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9159_MI, L_6);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_9 = p0;
		if (!((int32_t)((int32_t)L_9&(int32_t)((int32_t)16))))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = 1;
	}

IL_003f:
	{
		goto IL_0049;
	}

IL_0041:
	{
		int32_t L_10 = p0;
		if (!((int32_t)((int32_t)L_10&(int32_t)((int32_t)32))))
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 1;
	}

IL_0049:
	{
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0073;
	}

IL_004e:
	{
		V_1 = 0;
		int32_t L_12 = V_2;
		if (!((int32_t)((int32_t)L_12&(int32_t)((int32_t)16))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_13 = p0;
		if (!((int32_t)((int32_t)L_13&(int32_t)8)))
		{
			goto IL_005d;
		}
	}
	{
		V_1 = 1;
	}

IL_005d:
	{
		goto IL_0066;
	}

IL_005f:
	{
		int32_t L_14 = p0;
		if (!((int32_t)((int32_t)L_14&(int32_t)4)))
		{
			goto IL_0066;
		}
	}
	{
		V_1 = 1;
	}

IL_0066:
	{
		bool L_15 = V_1;
		if (L_15)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0073;
	}

IL_006b:
	{
		t1176 * L_16 = V_0;
		t1758 * L_17 = V_3;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_16, L_17);
	}

IL_0073:
	{
		int32_t L_18 = V_5;
		V_5 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_19 = V_5;
		t1801* L_20 = V_4;
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((t121 *)L_20)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		t1176 * L_21 = V_0;
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_21);
		V_6 = ((t932*)SZArrayNew(t932_TI_var, L_22));
		t1176 * L_23 = V_0;
		t932* L_24 = V_6;
		VirtActionInvoker1< t121 * >::Invoke(&m5970_MI, L_23, (t121 *)(t121 *)L_24);
		t932* L_25 = V_6;
		return L_25;
	}
}
extern "C" t126 * m9449 (t1760 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" t1575 * m9450 (t1760 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		m9473(__this, &m9473_MI);
		t126 * L_0 = (__this->f25);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t1575 * L_3 = (t1575 *)VirtFuncInvoker2< t1575 *, t2*, int32_t >::Invoke(&m12057_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern "C" t837 * m9451 (t1760 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = {0};
	t837 * V_2 = {0};
	t1803* V_3 = {0};
	int32_t V_4 = 0;
	{
		t126 * L_0 = (__this->f25);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t126 * L_1 = (__this->f25);
		t2* L_2 = p0;
		int32_t L_3 = p1;
		t837 * L_4 = (t837 *)VirtFuncInvoker2< t837 *, t2*, int32_t >::Invoke(&m12058_MI, L_1, L_2, L_3);
		return L_4;
	}

IL_0016:
	{
		t1803* L_5 = (__this->f17);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return (t837 *)NULL;
	}

IL_0020:
	{
		t1803* L_6 = (__this->f17);
		V_3 = L_6;
		V_4 = 0;
		goto IL_0094;
	}

IL_002f:
	{
		t1803* L_7 = V_3;
		int32_t L_8 = V_4;
		int32_t L_9 = L_8;
		V_2 = (*(t1769 **)(t1769 **)SZArrayLdElema(L_7, L_9));
		t837 * L_10 = V_2;
		if (L_10)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_008e;
	}

IL_0039:
	{
		t837 * L_11 = V_2;
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_11);
		t2* L_13 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_14 = m2777(NULL, L_12, L_13, &m2777_MI);
		if (!L_14)
		{
			goto IL_0049;
		}
	}
	{
		goto IL_008e;
	}

IL_0049:
	{
		V_0 = 0;
		t837 * L_15 = V_2;
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12017_MI, L_15);
		V_1 = L_16;
		int32_t L_17 = V_1;
		if ((!(((uint32_t)((int32_t)((int32_t)L_17&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_18 = p1;
		if (!((int32_t)((int32_t)L_18&(int32_t)((int32_t)16))))
		{
			goto IL_0060;
		}
	}
	{
		V_0 = 1;
	}

IL_0060:
	{
		goto IL_006a;
	}

IL_0062:
	{
		int32_t L_19 = p1;
		if (!((int32_t)((int32_t)L_19&(int32_t)((int32_t)32))))
		{
			goto IL_006a;
		}
	}
	{
		V_0 = 1;
	}

IL_006a:
	{
		bool L_20 = V_0;
		if (L_20)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_008e;
	}

IL_006f:
	{
		V_0 = 0;
		int32_t L_21 = V_1;
		if (!((int32_t)((int32_t)L_21&(int32_t)((int32_t)16))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_22 = p1;
		if (!((int32_t)((int32_t)L_22&(int32_t)8)))
		{
			goto IL_007e;
		}
	}
	{
		V_0 = 1;
	}

IL_007e:
	{
		goto IL_0087;
	}

IL_0080:
	{
		int32_t L_23 = p1;
		if (!((int32_t)((int32_t)L_23&(int32_t)4)))
		{
			goto IL_0087;
		}
	}
	{
		V_0 = 1;
	}

IL_0087:
	{
		bool L_24 = V_0;
		if (L_24)
		{
			goto IL_008c;
		}
	}
	{
		goto IL_008e;
	}

IL_008c:
	{
		t837 * L_25 = V_2;
		return L_25;
	}

IL_008e:
	{
		int32_t L_26 = V_4;
		V_4 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0094:
	{
		int32_t L_27 = V_4;
		t1803* L_28 = V_3;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((t121 *)L_28)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (t837 *)NULL;
	}
}
extern TypeInfo* t936_TI_var;
extern "C" t936* m9452 (t1760 * __this, int32_t p0, MethodInfo* method)
{
	static bool m9452_init;
	if (!m9452_init)
	{
		t936_TI_var = il2cpp_codegen_class_from_type(&t936_0_0_0);
		m9452_init = true;
	}
	t1176 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	t837 * V_3 = {0};
	t1803* V_4 = {0};
	int32_t V_5 = 0;
	t936* V_6 = {0};
	{
		t126 * L_0 = (__this->f25);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t126 * L_1 = (__this->f25);
		int32_t L_2 = p0;
		t936* L_3 = (t936*)VirtFuncInvoker1< t936*, int32_t >::Invoke(&m4468_MI, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		t1803* L_4 = (__this->f17);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return ((t936*)SZArrayNew(t936_TI_var, 0));
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_5 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_5, &m5768_MI);
		V_0 = L_5;
		t1803* L_6 = (__this->f17);
		V_4 = L_6;
		V_5 = 0;
		goto IL_0096;
	}

IL_003a:
	{
		t1803* L_7 = V_4;
		int32_t L_8 = V_5;
		int32_t L_9 = L_8;
		V_3 = (*(t1769 **)(t1769 **)SZArrayLdElema(L_7, L_9));
		t837 * L_10 = V_3;
		if (L_10)
		{
			goto IL_0045;
		}
	}
	{
		goto IL_0090;
	}

IL_0045:
	{
		V_1 = 0;
		t837 * L_11 = V_3;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12017_MI, L_11);
		V_2 = L_12;
		int32_t L_13 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_13&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_14 = p0;
		if (!((int32_t)((int32_t)L_14&(int32_t)((int32_t)16))))
		{
			goto IL_005c;
		}
	}
	{
		V_1 = 1;
	}

IL_005c:
	{
		goto IL_0066;
	}

IL_005e:
	{
		int32_t L_15 = p0;
		if (!((int32_t)((int32_t)L_15&(int32_t)((int32_t)32))))
		{
			goto IL_0066;
		}
	}
	{
		V_1 = 1;
	}

IL_0066:
	{
		bool L_16 = V_1;
		if (L_16)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0090;
	}

IL_006b:
	{
		V_1 = 0;
		int32_t L_17 = V_2;
		if (!((int32_t)((int32_t)L_17&(int32_t)((int32_t)16))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_18 = p0;
		if (!((int32_t)((int32_t)L_18&(int32_t)8)))
		{
			goto IL_007a;
		}
	}
	{
		V_1 = 1;
	}

IL_007a:
	{
		goto IL_0083;
	}

IL_007c:
	{
		int32_t L_19 = p0;
		if (!((int32_t)((int32_t)L_19&(int32_t)4)))
		{
			goto IL_0083;
		}
	}
	{
		V_1 = 1;
	}

IL_0083:
	{
		bool L_20 = V_1;
		if (L_20)
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0090;
	}

IL_0088:
	{
		t1176 * L_21 = V_0;
		t837 * L_22 = V_3;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_21, L_22);
	}

IL_0090:
	{
		int32_t L_23 = V_5;
		V_5 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0096:
	{
		int32_t L_24 = V_5;
		t1803* L_25 = V_4;
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((t121 *)L_25)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		t1176 * L_26 = V_0;
		int32_t L_27 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_26);
		V_6 = ((t936*)SZArrayNew(t936_TI_var, L_27));
		t1176 * L_28 = V_0;
		t936* L_29 = V_6;
		VirtActionInvoker1< t121 * >::Invoke(&m5970_MI, L_28, (t121 *)(t121 *)L_29);
		t936* L_30 = V_6;
		return L_30;
	}
}
extern TypeInfo* t152_TI_var;
extern "C" t152* m9453 (t1760 * __this, MethodInfo* method)
{
	static bool m9453_init;
	if (!m9453_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9453_init = true;
	}
	t152* V_0 = {0};
	{
		bool L_0 = m9470(__this, &m9470_MI);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t126 * L_1 = (__this->f25);
		t152* L_2 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m12059_MI, L_1);
		return L_2;
	}

IL_0014:
	{
		t152* L_3 = (__this->f12);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		t152* L_4 = (__this->f12);
		V_0 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_4)->max_length)))));
		t152* L_5 = (__this->f12);
		t152* L_6 = V_0;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5944_MI, L_5, (t121 *)(t121 *)L_6, 0);
		t152* L_7 = V_0;
		return L_7;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_8 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		return L_8;
	}
}
extern TypeInfo* t1576_TI_var;
extern "C" t1576* m9454 (t1760 * __this, t2* p0, int32_t p1, bool p2, t126 * p3, MethodInfo* method)
{
	static bool m9454_init;
	if (!m9454_init)
	{
		t1576_TI_var = il2cpp_codegen_class_from_type(&t1576_0_0_0);
		m9454_init = true;
	}
	t1576* V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	t1576* V_3 = {0};
	t1176 * V_4 = {0};
	bool V_5 = false;
	int32_t V_6 = 0;
	t835 * V_7 = {0};
	t1176 * V_8 = {0};
	t835 * V_9 = {0};
	t1576* V_10 = {0};
	int32_t V_11 = 0;
	t1576* V_12 = {0};
	int32_t V_13 = {0};
	{
		int32_t L_0 = p1;
		if (((int32_t)((int32_t)L_0&(int32_t)2)))
		{
			goto IL_011e;
		}
	}
	{
		t126 * L_1 = (__this->f10);
		if (!L_1)
		{
			goto IL_011e;
		}
	}
	{
		t126 * L_2 = (__this->f10);
		int32_t L_3 = p1;
		t1576* L_4 = (t1576*)VirtFuncInvoker1< t1576*, int32_t >::Invoke(&m12060_MI, L_2, L_3);
		V_3 = L_4;
		t1576* L_5 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_6 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5923(L_6, (((int32_t)(((t121 *)L_5)->max_length))), &m5923_MI);
		V_4 = L_6;
		int32_t L_7 = p1;
		V_5 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_6 = 0;
		goto IL_00c1;
	}

IL_003e:
	{
		t1576* L_8 = V_3;
		int32_t L_9 = V_6;
		int32_t L_10 = L_9;
		V_7 = (*(t835 **)(t835 **)SZArrayLdElema(L_8, L_10));
		t835 * L_11 = V_7;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12016_MI, L_11);
		V_2 = L_12;
		t835 * L_13 = V_7;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4431_MI, L_13);
		if (!L_14)
		{
			goto IL_005b;
		}
	}
	{
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_005b;
		}
	}
	{
		goto IL_00bb;
	}

IL_005b:
	{
		int32_t L_16 = V_2;
		V_13 = ((int32_t)((int32_t)L_16&(int32_t)7));
		int32_t L_17 = V_13;
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 0)
		{
			goto IL_009d;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 1)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 2)
		{
			goto IL_0090;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 3)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 4)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 5)
		{
			goto IL_0083;
		}
	}
	{
		goto IL_00a1;
	}

IL_0083:
	{
		int32_t L_18 = p1;
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_0090:
	{
		int32_t L_19 = p1;
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_009d:
	{
		V_1 = 0;
		goto IL_00ae;
	}

IL_00a1:
	{
		int32_t L_20 = p1;
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_00ae:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_00bb;
		}
	}
	{
		t1176 * L_22 = V_4;
		t835 * L_23 = V_7;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_22, L_23);
	}

IL_00bb:
	{
		int32_t L_24 = V_6;
		V_6 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00c1:
	{
		int32_t L_25 = V_6;
		t1576* L_26 = V_3;
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((t121 *)L_26)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		t1800* L_27 = (__this->f14);
		if (L_27)
		{
			goto IL_00ea;
		}
	}
	{
		t1176 * L_28 = V_4;
		int32_t L_29 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_28);
		V_0 = ((t1576*)SZArrayNew(t1576_TI_var, L_29));
		t1176 * L_30 = V_4;
		t1576* L_31 = V_0;
		VirtActionInvoker1< t121 * >::Invoke(&m5970_MI, L_30, (t121 *)(t121 *)L_31);
		goto IL_011c;
	}

IL_00ea:
	{
		t1800* L_32 = (__this->f14);
		t1176 * L_33 = V_4;
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_33);
		V_0 = ((t1576*)SZArrayNew(t1576_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_32)->max_length)))+(int32_t)L_34))));
		t1176 * L_35 = V_4;
		t1576* L_36 = V_0;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5919_MI, L_35, (t121 *)(t121 *)L_36, 0);
		t1800* L_37 = (__this->f14);
		t1576* L_38 = V_0;
		t1176 * L_39 = V_4;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_39);
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5944_MI, L_37, (t121 *)(t121 *)L_38, L_40);
	}

IL_011c:
	{
		goto IL_0125;
	}

IL_011e:
	{
		t1800* L_41 = (__this->f14);
		V_0 = (t1576*)L_41;
	}

IL_0125:
	{
		t1576* L_42 = V_0;
		if (L_42)
		{
			goto IL_012f;
		}
	}
	{
		return ((t1576*)SZArrayNew(t1576_TI_var, 0));
	}

IL_012f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_43 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_43, &m5768_MI);
		V_8 = L_43;
		t1576* L_44 = V_0;
		V_10 = L_44;
		V_11 = 0;
		goto IL_01ba;
	}

IL_0141:
	{
		t1576* L_45 = V_10;
		int32_t L_46 = V_11;
		int32_t L_47 = L_46;
		V_9 = (*(t835 **)(t835 **)SZArrayLdElema(L_45, L_47));
		t835 * L_48 = V_9;
		if (L_48)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_01b4;
	}

IL_0151:
	{
		t2* L_49 = p0;
		if (!L_49)
		{
			goto IL_0166;
		}
	}
	{
		t835 * L_50 = V_9;
		t2* L_51 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_50);
		t2* L_52 = p0;
		bool L_53 = p2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_54 = m7396(NULL, L_51, L_52, L_53, &m7396_MI);
		if (!L_54)
		{
			goto IL_0166;
		}
	}
	{
		goto IL_01b4;
	}

IL_0166:
	{
		V_1 = 0;
		t835 * L_55 = V_9;
		int32_t L_56 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12016_MI, L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_57&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_58 = p1;
		if (!((int32_t)((int32_t)L_58&(int32_t)((int32_t)16))))
		{
			goto IL_017e;
		}
	}
	{
		V_1 = 1;
	}

IL_017e:
	{
		goto IL_0188;
	}

IL_0180:
	{
		int32_t L_59 = p1;
		if (!((int32_t)((int32_t)L_59&(int32_t)((int32_t)32))))
		{
			goto IL_0188;
		}
	}
	{
		V_1 = 1;
	}

IL_0188:
	{
		bool L_60 = V_1;
		if (L_60)
		{
			goto IL_018d;
		}
	}
	{
		goto IL_01b4;
	}

IL_018d:
	{
		V_1 = 0;
		int32_t L_61 = V_2;
		if (!((int32_t)((int32_t)L_61&(int32_t)((int32_t)16))))
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_62 = p1;
		if (!((int32_t)((int32_t)L_62&(int32_t)8)))
		{
			goto IL_019c;
		}
	}
	{
		V_1 = 1;
	}

IL_019c:
	{
		goto IL_01a5;
	}

IL_019e:
	{
		int32_t L_63 = p1;
		if (!((int32_t)((int32_t)L_63&(int32_t)4)))
		{
			goto IL_01a5;
		}
	}
	{
		V_1 = 1;
	}

IL_01a5:
	{
		bool L_64 = V_1;
		if (L_64)
		{
			goto IL_01aa;
		}
	}
	{
		goto IL_01b4;
	}

IL_01aa:
	{
		t1176 * L_65 = V_8;
		t835 * L_66 = V_9;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_65, L_66);
	}

IL_01b4:
	{
		int32_t L_67 = V_11;
		V_11 = ((int32_t)((int32_t)L_67+(int32_t)1));
	}

IL_01ba:
	{
		int32_t L_68 = V_11;
		t1576* L_69 = V_10;
		if ((((int32_t)L_68) < ((int32_t)(((int32_t)(((t121 *)L_69)->max_length))))))
		{
			goto IL_0141;
		}
	}
	{
		t1176 * L_70 = V_8;
		int32_t L_71 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_70);
		V_12 = ((t1576*)SZArrayNew(t1576_TI_var, L_71));
		t1176 * L_72 = V_8;
		t1576* L_73 = V_12;
		VirtActionInvoker1< t121 * >::Invoke(&m5970_MI, L_72, (t121 *)(t121 *)L_73);
		t1576* L_74 = V_12;
		return L_74;
	}
}
extern "C" t1576* m9455 (t1760 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t1576* L_1 = m9454(__this, (t2*)NULL, L_0, 0, __this, &m9454_MI);
		return L_1;
	}
}
extern MethodInfo m9456_MI;
extern TypeInfo* t1812_TI_var;
extern "C" t835 * m9456 (t1760 * __this, t2* p0, int32_t p1, t939 * p2, int32_t p3, t152* p4, t941* p5, MethodInfo* method)
{
	static bool m9456_init;
	if (!m9456_init)
	{
		t1812_TI_var = il2cpp_codegen_class_from_type(&t1812_0_0_0);
		m9456_init = true;
	}
	bool V_0 = false;
	t1576* V_1 = {0};
	t835 * V_2 = {0};
	t1812* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	t835 * V_6 = {0};
	t1576* V_7 = {0};
	int32_t V_8 = 0;
	t835 * V_9 = {0};
	t1576* V_10 = {0};
	int32_t V_11 = 0;
	int32_t G_B3_0 = 0;
	{
		m9473(__this, &m9473_MI);
		int32_t L_0 = p1;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = V_0;
		t1576* L_4 = m9454(__this, L_1, L_2, L_3, __this, &m9454_MI);
		V_1 = L_4;
		V_2 = (t835 *)NULL;
		t152* L_5 = p4;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		t152* L_6 = p4;
		G_B3_0 = (((int32_t)(((t121 *)L_6)->max_length)));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_4 = G_B3_0;
		V_5 = 0;
		t1576* L_7 = V_1;
		V_7 = L_7;
		V_8 = 0;
		goto IL_0060;
	}

IL_0035:
	{
		t1576* L_8 = V_7;
		int32_t L_9 = V_8;
		int32_t L_10 = L_9;
		V_6 = (*(t835 **)(t835 **)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = p3;
		if ((((int32_t)L_11) == ((int32_t)3)))
		{
			goto IL_0051;
		}
	}
	{
		t835 * L_12 = V_6;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9586_MI, L_12);
		int32_t L_14 = p3;
		int32_t L_15 = p3;
		if ((((int32_t)((int32_t)((int32_t)L_13&(int32_t)L_14))) == ((int32_t)L_15)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_005a;
	}

IL_0051:
	{
		t835 * L_16 = V_6;
		V_2 = L_16;
		int32_t L_17 = V_5;
		V_5 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_005a:
	{
		int32_t L_18 = V_8;
		V_8 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0060:
	{
		int32_t L_19 = V_8;
		t1576* L_20 = V_7;
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((t121 *)L_20)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_21 = V_5;
		if (L_21)
		{
			goto IL_006e;
		}
	}
	{
		return (t835 *)NULL;
	}

IL_006e:
	{
		int32_t L_22 = V_5;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_23 = V_4;
		if (L_23)
		{
			goto IL_0079;
		}
	}
	{
		t835 * L_24 = V_2;
		return L_24;
	}

IL_0079:
	{
		int32_t L_25 = V_5;
		V_3 = ((t1812*)SZArrayNew(t1812_TI_var, L_25));
		int32_t L_26 = V_5;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_008c;
		}
	}
	{
		t1812* L_27 = V_3;
		t835 * L_28 = V_2;
		ArrayElementTypeCheck (L_27, L_28);
		*((t920 **)(t920 **)SZArrayLdElema(L_27, 0)) = (t920 *)L_28;
		goto IL_00cc;
	}

IL_008c:
	{
		V_5 = 0;
		t1576* L_29 = V_1;
		V_10 = L_29;
		V_11 = 0;
		goto IL_00c4;
	}

IL_0097:
	{
		t1576* L_30 = V_10;
		int32_t L_31 = V_11;
		int32_t L_32 = L_31;
		V_9 = (*(t835 **)(t835 **)SZArrayLdElema(L_30, L_32));
		int32_t L_33 = p3;
		if ((((int32_t)L_33) == ((int32_t)3)))
		{
			goto IL_00b3;
		}
	}
	{
		t835 * L_34 = V_9;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9586_MI, L_34);
		int32_t L_36 = p3;
		int32_t L_37 = p3;
		if ((((int32_t)((int32_t)((int32_t)L_35&(int32_t)L_36))) == ((int32_t)L_37)))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_00be;
	}

IL_00b3:
	{
		t1812* L_38 = V_3;
		int32_t L_39 = V_5;
		int32_t L_40 = L_39;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
		t835 * L_41 = V_9;
		ArrayElementTypeCheck (L_38, L_41);
		*((t920 **)(t920 **)SZArrayLdElema(L_38, L_40)) = (t920 *)L_41;
	}

IL_00be:
	{
		int32_t L_42 = V_11;
		V_11 = ((int32_t)((int32_t)L_42+(int32_t)1));
	}

IL_00c4:
	{
		int32_t L_43 = V_11;
		t1576* L_44 = V_10;
		if ((((int32_t)L_43) < ((int32_t)(((int32_t)(((t121 *)L_44)->max_length))))))
		{
			goto IL_0097;
		}
	}

IL_00cc:
	{
		t152* L_45 = p4;
		if (L_45)
		{
			goto IL_00dc;
		}
	}
	{
		t1812* L_46 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		t920 * L_47 = m9552(NULL, L_46, &m9552_MI);
		return ((t835 *)Castclass(L_47, InitializedTypeInfo(&t835_TI)));
	}

IL_00dc:
	{
		t939 * L_48 = p2;
		if (L_48)
		{
			goto IL_00e8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		t939 * L_49 = m9549(NULL, &m9549_MI);
		p2 = L_49;
	}

IL_00e8:
	{
		t939 * L_50 = p2;
		int32_t L_51 = p1;
		t1812* L_52 = V_3;
		t152* L_53 = p4;
		t941* L_54 = p5;
		t920 * L_55 = (t920 *)VirtFuncInvoker4< t920 *, int32_t, t1812*, t152*, t941* >::Invoke(&m12055_MI, L_50, L_51, L_52, L_53, L_54);
		return ((t835 *)Castclass(L_55, InitializedTypeInfo(&t835_TI)));
	}
}
extern TypeInfo* t935_TI_var;
extern "C" t935* m9457 (t1760 * __this, int32_t p0, MethodInfo* method)
{
	static bool m9457_init;
	if (!m9457_init)
	{
		t935_TI_var = il2cpp_codegen_class_from_type(&t935_0_0_0);
		m9457_init = true;
	}
	t1176 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	t835 * V_3 = {0};
	t844 * V_4 = {0};
	t1802* V_5 = {0};
	int32_t V_6 = 0;
	t935* V_7 = {0};
	{
		bool L_0 = m9470(__this, &m9470_MI);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t126 * L_1 = (__this->f25);
		int32_t L_2 = p0;
		t935* L_3 = (t935*)VirtFuncInvoker1< t935*, int32_t >::Invoke(&m4467_MI, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		t1802* L_4 = (__this->f16);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return ((t935*)SZArrayNew(t935_TI_var, 0));
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_5 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_5, &m5768_MI);
		V_0 = L_5;
		t1802* L_6 = (__this->f16);
		V_5 = L_6;
		V_6 = 0;
		goto IL_00ad;
	}

IL_003a:
	{
		t1802* L_7 = V_5;
		int32_t L_8 = V_6;
		int32_t L_9 = L_8;
		V_4 = (*(t1798 **)(t1798 **)SZArrayLdElema(L_7, L_9));
		V_1 = 0;
		t844 * L_10 = V_4;
		t835 * L_11 = (t835 *)VirtFuncInvoker1< t835 *, bool >::Invoke(&m4469_MI, L_10, 1);
		V_3 = L_11;
		t835 * L_12 = V_3;
		if (L_12)
		{
			goto IL_0058;
		}
	}
	{
		t844 * L_13 = V_4;
		t835 * L_14 = (t835 *)VirtFuncInvoker1< t835 *, bool >::Invoke(&m4470_MI, L_13, 1);
		V_3 = L_14;
	}

IL_0058:
	{
		t835 * L_15 = V_3;
		if (L_15)
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00a7;
	}

IL_005d:
	{
		t835 * L_16 = V_3;
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12016_MI, L_16);
		V_2 = L_17;
		int32_t L_18 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_18&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_19 = p0;
		if (!((int32_t)((int32_t)L_19&(int32_t)((int32_t)16))))
		{
			goto IL_0072;
		}
	}
	{
		V_1 = 1;
	}

IL_0072:
	{
		goto IL_007c;
	}

IL_0074:
	{
		int32_t L_20 = p0;
		if (!((int32_t)((int32_t)L_20&(int32_t)((int32_t)32))))
		{
			goto IL_007c;
		}
	}
	{
		V_1 = 1;
	}

IL_007c:
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		goto IL_00a7;
	}

IL_0081:
	{
		V_1 = 0;
		int32_t L_22 = V_2;
		if (!((int32_t)((int32_t)L_22&(int32_t)((int32_t)16))))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_23 = p0;
		if (!((int32_t)((int32_t)L_23&(int32_t)8)))
		{
			goto IL_0090;
		}
	}
	{
		V_1 = 1;
	}

IL_0090:
	{
		goto IL_0099;
	}

IL_0092:
	{
		int32_t L_24 = p0;
		if (!((int32_t)((int32_t)L_24&(int32_t)4)))
		{
			goto IL_0099;
		}
	}
	{
		V_1 = 1;
	}

IL_0099:
	{
		bool L_25 = V_1;
		if (L_25)
		{
			goto IL_009e;
		}
	}
	{
		goto IL_00a7;
	}

IL_009e:
	{
		t1176 * L_26 = V_0;
		t844 * L_27 = V_4;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_26, L_27);
	}

IL_00a7:
	{
		int32_t L_28 = V_6;
		V_6 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00ad:
	{
		int32_t L_29 = V_6;
		t1802* L_30 = V_5;
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)(((t121 *)L_30)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		t1176 * L_31 = V_0;
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_31);
		V_7 = ((t935*)SZArrayNew(t935_TI_var, L_32));
		t1176 * L_33 = V_0;
		t935* L_34 = V_7;
		VirtActionInvoker1< t121 * >::Invoke(&m5970_MI, L_33, (t121 *)(t121 *)L_34);
		t935* L_35 = V_7;
		return L_35;
	}
}
extern MethodInfo m9458_MI;
extern "C" t844 * m9458 (t1760 * __this, t2* p0, int32_t p1, t939 * p2, t126 * p3, t152* p4, t941* p5, MethodInfo* method)
{
	{
		t138 * L_0 = m9471(__this, &m9471_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9459_MI;
extern "C" bool m9459 (t1760 * __this, MethodInfo* method)
{
	{
		bool L_0 = m9470(__this, &m9470_MI);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		t126 * L_1 = (__this->f25);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7791_MI, L_1);
		return L_2;
	}
}
extern "C" t9 * m9460 (t1760 * __this, t2* p0, int32_t p1, t939 * p2, t9 * p3, t158* p4, t941* p5, t907 * p6, t221* p7, MethodInfo* method)
{
	{
		m9473(__this, &m9473_MI);
		t126 * L_0 = (__this->f25);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t939 * L_3 = p2;
		t9 * L_4 = p3;
		t158* L_5 = p4;
		t941* L_6 = p5;
		t907 * L_7 = p6;
		t221* L_8 = p7;
		t9 * L_9 = (t9 *)VirtFuncInvoker8< t9 *, t2*, int32_t, t939 *, t9 *, t158*, t941*, t907 *, t221* >::Invoke(&m4480_MI, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
extern MethodInfo m9461_MI;
extern "C" bool m9461 (t1760 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9462_MI;
extern "C" bool m9462 (t1760 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9463_MI;
extern "C" bool m9463 (t1760 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9464_MI;
extern "C" bool m9464 (t1760 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9465_MI;
extern "C" bool m9465 (t1760 * __this, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		t1755 * L_0 = (__this->f21);
		t1750 * L_1 = (L_0->f14);
		t126 * L_2 = (L_1->f22);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		bool L_3 = m7816(NULL, __this, L_2, 0, &m7816_MI);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_4 = m329(NULL, LoadTypeToken(&t117_0_0_0), &m329_MI);
		bool L_5 = m7816(NULL, __this, L_4, 0, &m7816_MI);
		if (!L_5)
		{
			goto IL_0057;
		}
	}

IL_002c:
	{
		t1755 * L_6 = (__this->f21);
		t1750 * L_7 = (L_6->f14);
		t126 * L_8 = (L_7->f22);
		if ((((t9*)(t1760 *)__this) == ((t9*)(t126 *)L_8)))
		{
			goto IL_0057;
		}
	}
	{
		t1755 * L_9 = (__this->f21);
		t1750 * L_10 = (L_9->f14);
		t126 * L_11 = (L_10->f23);
		G_B5_0 = ((((int32_t)((((t9*)(t1760 *)__this) == ((t9*)(t126 *)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B5_0 = 0;
	}

IL_0058:
	{
		return G_B5_0;
	}
}
extern MethodInfo m9466_MI;
extern "C" t126 * m9466 (t1760 * __this, t152* p0, MethodInfo* method)
{
	{
		t152* L_0 = p0;
		t126 * L_1 = m4513(__this, L_0, &m4513_MI);
		return L_1;
	}
}
extern "C" t127  m9467 (t1760 * __this, MethodInfo* method)
{
	{
		m9473(__this, &m9473_MI);
		t126 * L_0 = (__this->f25);
		t127  L_1 = (t127 )VirtFuncInvoker0< t127  >::Invoke(&m7806_MI, L_0);
		return L_1;
	}
}
extern "C" int32_t m9468 (t1760 * __this, t9 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	{
		t1755 * L_0 = (__this->f21);
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = p2;
		int32_t L_4 = m9370(L_0, L_1, L_2, L_3, &m9370_MI);
		return L_4;
	}
}
extern "C" bool m9469 (t1760 * __this, MethodInfo* method)
{
	{
		t1755 * L_0 = (__this->f21);
		t1750 * L_1 = (L_0->f14);
		bool L_2 = m9143(L_1, &m9143_MI);
		return L_2;
	}
}
extern "C" bool m9470 (t1760 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f25);
		return ((((int32_t)((((t9*)(t126 *)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t138 * m9471 (t1760 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_0, (t2*) &_stringLiteral1721, &m5776_MI);
		return L_0;
	}
}
extern "C" void m9472 (t1760 * __this, MethodInfo* method)
{
	{
		bool L_0 = m9470(__this, &m9470_MI);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1347 * L_1 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_1, (t2*) &_stringLiteral1992, &m5755_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
extern "C" void m9473 (t1760 * __this, MethodInfo* method)
{
	{
		bool L_0 = m9470(__this, &m9470_MI);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t138 * L_1 = m9471(__this, &m9471_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		return;
	}
}
extern "C" void m9474 (t1760 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		t2* L_1 = p0;
		t132 * L_2 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_2, L_1, &m339_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000a:
	{
		t2* L_3 = p1;
		int32_t L_4 = m2763(L_3, &m2763_MI);
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		t2* L_5 = p0;
		t570 * L_6 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_6, (t2*) &_stringLiteral1993, L_5, &m5761_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_001e:
	{
		t2* L_7 = p1;
		uint16_t L_8 = m2778(L_7, 0, &m2778_MI);
		if (L_8)
		{
			goto IL_0033;
		}
	}
	{
		t2* L_9 = p0;
		t570 * L_10 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_10, (t2*) &_stringLiteral1994, L_9, &m5761_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0033:
	{
		return;
	}
}
extern MethodInfo m9475_MI;
extern "C" t2* m9475 (t1760 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9431_MI, __this);
		return L_0;
	}
}
extern MethodInfo m9476_MI;
extern "C" bool m9476 (t1760 * __this, t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = m4515(__this, L_0, &m4515_MI);
		return L_1;
	}
}
extern MethodInfo m9477_MI;
extern "C" bool m9477 (t1760 * __this, t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = m7819(__this, L_0, &m7819_MI);
		return L_1;
	}
}
extern MethodInfo m9478_MI;
extern "C" bool m9478 (t1760 * __this, t126 * p0, MethodInfo* method)
{
	t126 * V_0 = {0};
	t152* V_1 = {0};
	int32_t V_2 = 0;
	{
		t126 * L_0 = p0;
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t1760 *)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		t126 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7798_MI, L_1);
		if (!L_2)
		{
			goto IL_0066;
		}
	}
	{
		t126 * L_3 = (__this->f10);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		bool L_4 = m9470(__this, &m9470_MI);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		t126 * L_5 = p0;
		t126 * L_6 = (__this->f10);
		bool L_7 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4515_MI, L_5, L_6);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		t152* L_8 = (__this->f12);
		if (L_8)
		{
			goto IL_0038;
		}
	}
	{
		return 0;
	}

IL_0038:
	{
		t152* L_9 = (__this->f12);
		V_1 = L_9;
		V_2 = 0;
		goto IL_0056;
	}

IL_0043:
	{
		t152* L_10 = V_1;
		int32_t L_11 = V_2;
		int32_t L_12 = L_11;
		V_0 = (*(t126 **)(t126 **)SZArrayLdElema(L_10, L_12));
		t126 * L_13 = p0;
		t126 * L_14 = V_0;
		bool L_15 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4515_MI, L_13, L_14);
		if (!L_15)
		{
			goto IL_0052;
		}
	}
	{
		return 1;
	}

IL_0052:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0056:
	{
		int32_t L_17 = V_2;
		t152* L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((t121 *)L_18)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		bool L_19 = m9470(__this, &m9470_MI);
		if (L_19)
		{
			goto IL_0066;
		}
	}
	{
		return 0;
	}

IL_0066:
	{
		t126 * L_20 = (__this->f10);
		if (L_20)
		{
			goto IL_007c;
		}
	}
	{
		t126 * L_21 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_22 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		return ((((t9*)(t126 *)L_21) == ((t9*)(t126 *)L_22))? 1 : 0);
	}

IL_007c:
	{
		t126 * L_23 = p0;
		t126 * L_24 = (__this->f10);
		bool L_25 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4515_MI, L_23, L_24);
		return L_25;
	}
}
extern MethodInfo m9479_MI;
extern TypeInfo* t152_TI_var;
extern "C" t152* m9479 (t1760 * __this, MethodInfo* method)
{
	static bool m9479_init;
	if (!m9479_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9479_init = true;
	}
	t152* V_0 = {0};
	{
		t1786* L_0 = (__this->f24);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t152*)NULL;
	}

IL_000a:
	{
		t1786* L_1 = (__this->f24);
		V_0 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_1)->max_length)))));
		t1786* L_2 = (__this->f24);
		t152* L_3 = V_0;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5944_MI, L_2, (t121 *)(t121 *)L_3, 0);
		t152* L_4 = V_0;
		return L_4;
	}
}
extern MethodInfo m9480_MI;
extern "C" t126 * m9480 (t1760 * __this, MethodInfo* method)
{
	{
		t1786* L_0 = (__this->f24);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1347 * L_1 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_1, (t2*) &_stringLiteral1995, &m5755_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return __this;
	}
}
extern MethodInfo m9481_MI;
extern "C" bool m9481 (t1760 * __this, MethodInfo* method)
{
	{
		t1786* L_0 = (__this->f24);
		return ((((int32_t)((((t9*)(t1786*)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9482_MI;
extern "C" bool m9482 (t1760 * __this, MethodInfo* method)
{
	typedef bool (*m9482_ftn) (t1760 *);
	static m9482_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9482_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m9483 (t1760 * __this, MethodInfo* method)
{
	{
		t1786* L_0 = (__this->f24);
		return ((((int32_t)((((t9*)(t1786*)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9484_MI;
extern "C" bool m9484 (t1760 * __this, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9483_MI, __this);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1770_TI;
#include "t1770MD.h"

#include "t1584.h"
#include "t1585.h"
extern TypeInfo t1584_TI;
#include "t1584MD.h"
extern MethodInfo m7870_MI;


extern MethodInfo m9485_MI;
extern "C" t1584 * m9485 (t1770 * __this, MethodInfo* method)
{
	t1584 * V_0 = {0};
	{
		int32_t L_0 = (__this->f1);
		t1584 * L_1 = (t1584 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1584_TI));
		m7870(L_1, L_0, &m7870_MI);
		V_0 = L_1;
		t1584 * L_2 = V_0;
		int32_t L_3 = (__this->f2);
		L_2->f1 = L_3;
		t1584 * L_4 = V_0;
		t2* L_5 = (__this->f4);
		L_4->f2 = L_5;
		t1584 * L_6 = V_0;
		t2* L_7 = (__this->f5);
		L_6->f3 = L_7;
		t1584 * L_8 = V_0;
		t126 * L_9 = (__this->f6);
		L_8->f4 = L_9;
		int32_t L_10 = (__this->f0);
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		t1584 * L_11 = V_0;
		L_11->f5 = 0;
		goto IL_005a;
	}

IL_004e:
	{
		t1584 * L_12 = V_0;
		int32_t L_13 = (__this->f0);
		L_12->f5 = L_13;
	}

IL_005a:
	{
		int32_t L_14 = (__this->f7);
		if ((!(((uint32_t)L_14) == ((uint32_t)(-1)))))
		{
			goto IL_006c;
		}
	}
	{
		t1584 * L_15 = V_0;
		L_15->f6 = 0;
		goto IL_0079;
	}

IL_006c:
	{
		t1584 * L_16 = V_0;
		int32_t L_17 = (__this->f7);
		L_16->f6 = (((int16_t)L_17));
	}

IL_0079:
	{
		t1584 * L_18 = V_0;
		return L_18;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9486 (t1804 * __this, MethodInfo* method)
{
	{
		m5942(__this, (t2*) &_stringLiteral1996, &m5942_MI);
		return;
	}
}
extern MethodInfo m9487_MI;
extern "C" void m9487 (t1804 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		return;
	}
}
extern MethodInfo m9488_MI;
extern "C" void m9488 (t1804 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#include "t1805.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1805_TI;
#include "t1805MD.h"



extern MethodInfo m9489_MI;
extern "C" void m9489 (t1805 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2042.h"
#include "t1806.h"
#include "t885.h"
extern TypeInfo t885_TI;
#include "t2042MD.h"
#include "t885MD.h"
extern Il2CppType t1574_0_0_0;
extern MethodInfo m9503_MI;
extern MethodInfo m9492_MI;
extern MethodInfo m9500_MI;
extern MethodInfo m9499_MI;
extern MethodInfo m9513_MI;
extern MethodInfo m9501_MI;
extern MethodInfo m9491_MI;
extern MethodInfo m11162_MI;
extern MethodInfo m11166_MI;
extern MethodInfo m9507_MI;
extern MethodInfo m9508_MI;
extern MethodInfo m11711_MI;
extern MethodInfo m9506_MI;
extern MethodInfo m9511_MI;
extern MethodInfo m9608_MI;
extern MethodInfo m9510_MI;
extern MethodInfo m9614_MI;
extern MethodInfo m5899_MI;


extern "C" void m9490 (t1351 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1805 * L_0 = (t1805 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1805_TI));
		m9489(L_0, &m9489_MI);
		__this->f1 = L_0;
		return;
	}
}
extern "C" t2* m9491 (t1351 * __this, MethodInfo* method)
{
	typedef t2* (*m9491_ftn) (t1351 *);
	static m9491_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9491_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::get_fullname()");
	return _il2cpp_icall_func(__this);
}
extern "C" t2* m9492 (t1351 * __this, MethodInfo* method)
{
	typedef t2* (*m9492_ftn) (t1351 *);
	static m9492_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9492_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::get_location()");
	return _il2cpp_icall_func(__this);
}
extern "C" t2* m9493 (t1351 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9503_MI, __this);
		return L_0;
	}
}
extern MethodInfo m9494_MI;
extern "C" t2* m9494 (t1351 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		bool L_0 = (__this->f8);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_1 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_1;
	}

IL_000e:
	{
		t2* L_2 = m9492(__this, &m9492_MI);
		V_0 = L_2;
		t2* L_3 = V_0;
		return L_3;
	}
}
extern MethodInfo m9495_MI;
extern "C" bool m9495 (t1351 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		bool L_2 = m11646(NULL, __this, L_0, L_1, &m11646_MI);
		return L_2;
	}
}
extern MethodInfo m9496_MI;
extern "C" t158* m9496 (t1351 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_2 = m11644(NULL, __this, L_0, L_1, &m11644_MI);
		return L_2;
	}
}
extern MethodInfo m9497_MI;
extern "C" t58 m9497 (t1351 * __this, t2* p0, int32_t* p1, t1574 ** p2, MethodInfo* method)
{
	typedef t58 (*m9497_ftn) (t1351 *, t2*, int32_t*, t1574 **);
	static m9497_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9497_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m9498_MI;
extern "C" t126 * m9498 (t1351 * __this, t2* p0, bool p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		bool L_1 = p1;
		t126 * L_2 = (t126 *)VirtFuncInvoker3< t126 *, t2*, bool, bool >::Invoke(&m9500_MI, __this, L_0, L_1, 0);
		return L_2;
	}
}
extern "C" t126 * m5814 (t1351 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t126 * L_1 = (t126 *)VirtFuncInvoker3< t126 *, t2*, bool, bool >::Invoke(&m9500_MI, __this, L_0, 0, 0);
		return L_1;
	}
}
extern "C" t126 * m9499 (t1351 * __this, t1574 * p0, t2* p1, bool p2, bool p3, MethodInfo* method)
{
	typedef t126 * (*m9499_ftn) (t1351 *, t1574 *, t2*, bool, bool);
	static m9499_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9499_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3);
}
extern "C" t126 * m9500 (t1351 * __this, t2* p0, bool p1, bool p2, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		t2* L_1 = p0;
		t132 * L_2 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_2, L_1, &m339_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000a:
	{
		t2* L_3 = p0;
		int32_t L_4 = m2763(L_3, &m2763_MI);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		t570 * L_5 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_5, (t2*) &_stringLiteral2, (t2*) &_stringLiteral1997, &m5761_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0022:
	{
		t2* L_6 = p0;
		bool L_7 = p1;
		bool L_8 = p2;
		t126 * L_9 = m9499(__this, (t1574 *)NULL, L_6, L_7, L_8, &m9499_MI);
		return L_9;
	}
}
extern "C" void m9501 (t9 * __this , t1351 * p0, t1754 * p1, MethodInfo* method)
{
	typedef void (*m9501_ftn) (t1351 *, t1754 *);
	static m9501_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9501_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" t1754 * m9502 (t1351 * __this, MethodInfo* method)
{
	t1754 * V_0 = {0};
	{
		t1754 * L_0 = (t1754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1754_TI));
		m9513(L_0, &m9513_MI);
		V_0 = L_0;
		t1754 * L_1 = V_0;
		m9501(NULL, __this, L_1, &m9501_MI);
		t1754 * L_2 = V_0;
		return L_2;
	}
}
extern "C" t2* m9503 (t1351 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t2* L_1 = (__this->f9);
		return L_1;
	}

IL_000f:
	{
		t2* L_2 = m9491(__this, &m9491_MI);
		__this->f9 = L_2;
		t2* L_3 = (__this->f9);
		return L_3;
	}
}
extern MethodInfo m9504_MI;
extern "C" t1351 * m9504 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2042 * L_0 = m11162(NULL, &m11162_MI);
		t2* L_1 = p0;
		t1351 * L_2 = m11166(L_0, L_1, &m11166_MI);
		return L_2;
	}
}
extern "C" t1351 * m9505 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t1351 * L_1 = m9507(NULL, L_0, (t1806 *)NULL, &m9507_MI);
		return L_1;
	}
}
extern "C" t1351 * m9506 (t9 * __this , t2* p0, t1806 * p1, MethodInfo* method)
{
	typedef t1351 * (*m9506_ftn) (t2*, t1806 *);
	static m9506_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9506_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::load_with_partial_name(System.String,System.Security.Policy.Evidence)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" t1351 * m9507 (t9 * __this , t2* p0, t1806 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t1806 * L_1 = p1;
		t1351 * L_2 = m9508(NULL, L_0, L_1, 1, &m9508_MI);
		return L_2;
	}
}
extern "C" t1351 * m9508 (t9 * __this , t2* p0, t1806 * p1, bool p2, MethodInfo* method)
{
	{
		bool L_0 = p2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		t1352 * L_1 = (t1352 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1352_TI));
		m11708(L_1, &m11708_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	{
		t2* L_2 = p0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		t885 * L_3 = (t885 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t885_TI));
		m11711(L_3, &m11711_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0012:
	{
		t2* L_4 = p0;
		t1806 * L_5 = p1;
		t1351 * L_6 = m9506(NULL, L_4, L_5, &m9506_MI);
		return L_6;
	}
}
extern MethodInfo m9509_MI;
extern "C" t1574 * m9509 (t1351 * __this, t2* p0, MethodInfo* method)
{
	t1756* V_0 = {0};
	t1574 * V_1 = {0};
	t1756* V_2 = {0};
	int32_t V_3 = 0;
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2763(L_2, &m2763_MI);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_4, (t2*) &_stringLiteral1998, &m2949_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t1756* L_5 = (t1756*)VirtFuncInvoker1< t1756*, bool >::Invoke(&m9511_MI, __this, 1);
		V_0 = L_5;
		t1756* L_6 = V_0;
		V_2 = L_6;
		V_3 = 0;
		goto IL_0047;
	}

IL_002f:
	{
		t1756* L_7 = V_2;
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_1 = (*(t1574 **)(t1574 **)SZArrayLdElema(L_7, L_9));
		t1574 * L_10 = V_1;
		t2* L_11 = m9608(L_10, &m9608_MI);
		t2* L_12 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_13 = m331(NULL, L_11, L_12, &m331_MI);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		t1574 * L_14 = V_1;
		return L_14;
	}

IL_0043:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		t1756* L_17 = V_2;
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((t121 *)L_17)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (t1574 *)NULL;
	}
}
extern "C" t1756* m9510 (t1351 * __this, MethodInfo* method)
{
	typedef t1756* (*m9510_ftn) (t1351 *);
	static m9510_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9510_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetModulesInternal()");
	return _il2cpp_icall_func(__this);
}
extern TypeInfo* t1756_TI_var;
extern "C" t1756* m9511 (t1351 * __this, bool p0, MethodInfo* method)
{
	static bool m9511_init;
	if (!m9511_init)
	{
		t1756_TI_var = il2cpp_codegen_class_from_type(&t1756_0_0_0);
		m9511_init = true;
	}
	t1756* V_0 = {0};
	t1176 * V_1 = {0};
	t1574 * V_2 = {0};
	t1756* V_3 = {0};
	int32_t V_4 = 0;
	{
		t1756* L_0 = (t1756*)VirtFuncInvoker0< t1756* >::Invoke(&m9510_MI, __this);
		V_0 = L_0;
		bool L_1 = p0;
		if (L_1)
		{
			goto IL_0052;
		}
	}
	{
		t1756* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_3 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5923(L_3, (((int32_t)(((t121 *)L_2)->max_length))), &m5923_MI);
		V_1 = L_3;
		t1756* L_4 = V_0;
		V_3 = L_4;
		V_4 = 0;
		goto IL_0035;
	}

IL_001a:
	{
		t1756* L_5 = V_3;
		int32_t L_6 = V_4;
		int32_t L_7 = L_6;
		V_2 = (*(t1574 **)(t1574 **)SZArrayLdElema(L_5, L_7));
		t1574 * L_8 = V_2;
		bool L_9 = m9614(L_8, &m9614_MI);
		if (L_9)
		{
			goto IL_002f;
		}
	}
	{
		t1176 * L_10 = V_1;
		t1574 * L_11 = V_2;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_10, L_11);
	}

IL_002f:
	{
		int32_t L_12 = V_4;
		V_4 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_13 = V_4;
		t1756* L_14 = V_3;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((t121 *)L_14)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		t1176 * L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_16 = m329(NULL, LoadTypeToken(&t1574_0_0_0), &m329_MI);
		t121 * L_17 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5899_MI, L_15, L_16);
		return ((t1756*)Castclass(L_17, t1756_TI_var));
	}

IL_0052:
	{
		t1756* L_18 = V_0;
		return L_18;
	}
}
extern MethodInfo m9512_MI;
extern "C" t1351 * m9512 (t9 * __this , MethodInfo* method)
{
	typedef t1351 * (*m9512_ftn) ();
	static m9512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9512_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetExecutingAssembly()");
	return _il2cpp_icall_func();
}
#include "t681.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t681_TI;
#include "t681MD.h"

#include "t732MD.h"
extern MethodInfo m4306_MI;


extern MethodInfo m3165_MI;
extern "C" void m3165 (t681 * __this, t2* p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t680.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t680_TI;
#include "t680MD.h"



extern MethodInfo m3164_MI;
extern "C" void m3164 (t680 * __this, t2* p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t683.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t683_TI;
#include "t683MD.h"



extern MethodInfo m3167_MI;
extern "C" void m3167 (t683 * __this, t2* p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1153.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1153_TI;
#include "t1153MD.h"



extern MethodInfo m4838_MI;
extern "C" void m4838 (t1153 * __this, t2* p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1157.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1157_TI;
#include "t1157MD.h"



extern MethodInfo m4842_MI;
extern "C" void m4842 (t1157 * __this, bool p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		bool L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t679.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t679_TI;
#include "t679MD.h"



extern MethodInfo m3163_MI;
extern "C" void m3163 (t679 * __this, t2* p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t686.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t686_TI;
#include "t686MD.h"



extern MethodInfo m3170_MI;
extern "C" void m3170 (t686 * __this, t2* p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral467, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2* L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
#include "t1151.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1151_TI;
#include "t1151MD.h"



extern MethodInfo m4836_MI;
extern "C" void m4836 (t1151 * __this, t2* p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1156.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1156_TI;
#include "t1156MD.h"



extern MethodInfo m4841_MI;
extern "C" void m4841 (t1156 * __this, t2* p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1223.h"
#include "t1699.h"
#include "t1698.h"
#include "t2039.h"
#include "t1374.h"
#include "t1372.h"
extern TypeInfo t1359_TI;
extern TypeInfo t1808_TI;
extern TypeInfo t2039_TI;
extern TypeInfo t1698_TI;
extern TypeInfo t1699_TI;
extern TypeInfo t1809_TI;
#include "t1635MD.h"
#include "t2039MD.h"
#include "t1372MD.h"
#include "t1374MD.h"
extern Il2CppType t1202_0_0_0;
extern Il2CppType t1698_0_0_0;
extern Il2CppType t1808_0_0_0;
extern Il2CppType t1699_0_0_0;
extern Il2CppType t1809_0_0_0;
extern MethodInfo m1207_MI;
extern MethodInfo m8695_MI;
extern MethodInfo m9526_MI;
extern MethodInfo m11936_MI;
extern MethodInfo m11926_MI;
extern MethodInfo m11927_MI;
extern MethodInfo m11925_MI;
extern MethodInfo m11928_MI;
extern MethodInfo m8095_MI;
extern MethodInfo m8094_MI;
extern MethodInfo m5773_MI;
extern MethodInfo m5784_MI;
extern MethodInfo m8687_MI;
extern MethodInfo m9519_MI;
extern MethodInfo m673_MI;
extern MethodInfo m9525_MI;
extern MethodInfo m10778_MI;
extern MethodInfo m9527_MI;
extern MethodInfo m5937_MI;
extern MethodInfo m5938_MI;
extern MethodInfo m6977_MI;
extern MethodInfo m5785_MI;
extern MethodInfo m5772_MI;
extern MethodInfo m9522_MI;


extern "C" void m9513 (t1754 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		__this->f12 = 1;
		return;
	}
}
extern MethodInfo m9514_MI;
extern TypeInfo* t737_TI_var;
extern "C" void m9514 (t1754 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	static bool m9514_init;
	if (!m9514_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m9514_init = true;
	}
	int32_t V_0 = 0;
	{
		m336(__this, &m336_MI);
		t1106 * L_0 = p0;
		t2* L_1 = m5782(L_0, (t2*) &_stringLiteral2005, &m5782_MI);
		__this->f0 = L_1;
		t1106 * L_2 = p0;
		t2* L_3 = m5782(L_2, (t2*) &_stringLiteral2006, &m5782_MI);
		__this->f1 = L_3;
		t1106 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t1202_0_0_0), &m329_MI);
		t9 * L_6 = m5773(L_4, (t2*) &_stringLiteral2007, L_5, &m5773_MI);
		__this->f13 = ((t1202 *)Castclass(L_6, InitializedTypeInfo(&t1202_TI)));
		t1106 * L_7 = p0;
		t126 * L_8 = m329(NULL, LoadTypeToken(&t737_0_0_0), &m329_MI);
		t9 * L_9 = m5773(L_7, (t2*) &_stringLiteral2008, L_8, &m5773_MI);
		__this->f10 = ((t737*)Castclass(L_9, t737_TI_var));
		t1106 * L_10 = p0;
		t126 * L_11 = m329(NULL, LoadTypeToken(&t737_0_0_0), &m329_MI);
		t9 * L_12 = m5773(L_10, (t2*) &_stringLiteral2009, L_11, &m5773_MI);
		__this->f11 = ((t737*)Castclass(L_12, t737_TI_var));
		t1106 * L_13 = p0;
		t126 * L_14 = m329(NULL, LoadTypeToken(&t1698_0_0_0), &m329_MI);
		t9 * L_15 = m5773(L_13, (t2*) &_stringLiteral2010, L_14, &m5773_MI);
		__this->f8 = ((*(int32_t*)((int32_t*)UnBox (L_15, InitializedTypeInfo(&t125_TI)))));
		t1106 * L_16 = p0;
		t126 * L_17 = m329(NULL, LoadTypeToken(&t1808_0_0_0), &m329_MI);
		t9 * L_18 = m5773(L_16, (t2*) &_stringLiteral2011, L_17, &m5773_MI);
		__this->f9 = ((t1808 *)Castclass(L_18, InitializedTypeInfo(&t1808_TI)));
		t1106 * L_19 = p0;
		t126 * L_20 = m329(NULL, LoadTypeToken(&t1699_0_0_0), &m329_MI);
		t9 * L_21 = m5773(L_19, (t2*) &_stringLiteral2012, L_20, &m5773_MI);
		__this->f12 = ((*(int32_t*)((int32_t*)UnBox (L_21, InitializedTypeInfo(&t125_TI)))));
		t1106 * L_22 = p0;
		t126 * L_23 = m329(NULL, LoadTypeToken(&t1809_0_0_0), &m329_MI);
		t9 * L_24 = m5773(L_22, (t2*) &_stringLiteral2013, L_23, &m5773_MI);
		__this->f7 = ((*(int32_t*)((int32_t*)UnBox (L_24, InitializedTypeInfo(&t125_TI)))));
		t1106 * L_25 = p0;
		int32_t L_26 = m5784(L_25, (t2*) &_stringLiteral2014, &m5784_MI);
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)(-1))))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_28 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_29 = (t907 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t907_TI));
		m8687(L_29, L_28, &m8687_MI);
		__this->f6 = L_29;
	}

IL_0124:
	{
		return;
	}
}
extern "C" t2* m9515 (t1754 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9516_MI;
extern "C" void m9516 (t1754 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t907 * m9517 (t1754 * __this, MethodInfo* method)
{
	{
		t907 * L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" int32_t m9518 (t1754 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" t2* m9519 (t1754 * __this, MethodInfo* method)
{
	t328 * V_0 = {0};
	t737* V_1 = {0};
	int32_t V_2 = 0;
	{
		t2* L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_1 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_1;
	}

IL_000e:
	{
		t328 * L_2 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m1203(L_2, &m1203_MI);
		V_0 = L_2;
		t328 * L_3 = V_0;
		t2* L_4 = (__this->f0);
		m1207(L_3, L_4, &m1207_MI);
		t1202 * L_5 = m9521(__this, &m9521_MI);
		bool L_6 = m11937(NULL, L_5, (t1202 *)NULL, &m11937_MI);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		t328 * L_7 = V_0;
		m1207(L_7, (t2*) &_stringLiteral1999, &m1207_MI);
		t328 * L_8 = V_0;
		t1202 * L_9 = m9521(__this, &m9521_MI);
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11934_MI, L_9);
		m1207(L_8, L_10, &m1207_MI);
	}

IL_004d:
	{
		t907 * L_11 = (__this->f6);
		if (!L_11)
		{
			goto IL_0098;
		}
	}
	{
		t328 * L_12 = V_0;
		m1207(L_12, (t2*) &_stringLiteral2000, &m1207_MI);
		t907 * L_13 = (__this->f6);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8695_MI, L_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_15 = m4400(NULL, &m4400_MI);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8695_MI, L_15);
		if ((!(((uint32_t)L_14) == ((uint32_t)L_16))))
		{
			goto IL_0086;
		}
	}
	{
		t328 * L_17 = V_0;
		m1207(L_17, (t2*) &_stringLiteral2001, &m1207_MI);
		goto IL_0098;
	}

IL_0086:
	{
		t328 * L_18 = V_0;
		t907 * L_19 = (__this->f6);
		t2* L_20 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8696_MI, L_19);
		m1207(L_18, L_20, &m1207_MI);
	}

IL_0098:
	{
		t737* L_21 = m9526(__this, &m9526_MI);
		V_1 = L_21;
		t737* L_22 = V_1;
		if (!L_22)
		{
			goto IL_00e7;
		}
	}
	{
		t737* L_23 = V_1;
		if ((((int32_t)(((t121 *)L_23)->max_length))))
		{
			goto IL_00b5;
		}
	}
	{
		t328 * L_24 = V_0;
		m1207(L_24, (t2*) &_stringLiteral2002, &m1207_MI);
		goto IL_00e7;
	}

IL_00b5:
	{
		t328 * L_25 = V_0;
		m1207(L_25, (t2*) &_stringLiteral2003, &m1207_MI);
		V_2 = 0;
		goto IL_00e1;
	}

IL_00c5:
	{
		t328 * L_26 = V_0;
		t737* L_27 = V_1;
		int32_t L_28 = V_2;
		t2* L_29 = m5862(((uint8_t*)(uint8_t*)SZArrayLdElema(L_27, L_28)), (t2*) &_stringLiteral593, &m5862_MI);
		m1207(L_26, L_29, &m1207_MI);
		int32_t L_30 = V_2;
		V_2 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00e1:
	{
		int32_t L_31 = V_2;
		t737* L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((t121 *)L_32)->max_length))))))
		{
			goto IL_00c5;
		}
	}

IL_00e7:
	{
		int32_t L_33 = m9518(__this, &m9518_MI);
		if (!((int32_t)((int32_t)L_33&(int32_t)((int32_t)256))))
		{
			goto IL_0101;
		}
	}
	{
		t328 * L_34 = V_0;
		m1207(L_34, (t2*) &_stringLiteral2004, &m1207_MI);
	}

IL_0101:
	{
		t328 * L_35 = V_0;
		t2* L_36 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_35);
		return L_36;
	}
}
extern "C" t1808 * m9520 (t1754 * __this, MethodInfo* method)
{
	{
		t1808 * L_0 = (__this->f9);
		return L_0;
	}
}
extern "C" t1202 * m9521 (t1754 * __this, MethodInfo* method)
{
	{
		t1202 * L_0 = (__this->f13);
		return L_0;
	}
}
extern "C" void m9522 (t1754 * __this, t1202 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t1202 * L_0 = p0;
		__this->f13 = L_0;
		t1202 * L_1 = p0;
		bool L_2 = m11936(NULL, L_1, (t1202 *)NULL, &m11936_MI);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = 0;
		V_0 = L_3;
		__this->f5 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		V_0 = L_5;
		__this->f4 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f3 = L_7;
		int32_t L_8 = V_0;
		__this->f2 = L_8;
		goto IL_0064;
	}

IL_0034:
	{
		t1202 * L_9 = p0;
		int32_t L_10 = m11926(L_9, &m11926_MI);
		__this->f2 = L_10;
		t1202 * L_11 = p0;
		int32_t L_12 = m11927(L_11, &m11927_MI);
		__this->f3 = L_12;
		t1202 * L_13 = p0;
		int32_t L_14 = m11925(L_13, &m11925_MI);
		__this->f4 = L_14;
		t1202 * L_15 = p0;
		int32_t L_16 = m11928(L_15, &m11928_MI);
		__this->f5 = L_16;
	}

IL_0064:
	{
		return;
	}
}
extern MethodInfo m9523_MI;
extern "C" t2* m9523 (t1754 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* G_B3_0 = {0};
	{
		t2* L_0 = m9519(__this, &m9519_MI);
		V_0 = L_0;
		t2* L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		t2* L_2 = V_0;
		G_B3_0 = L_2;
		goto IL_0013;
	}

IL_000d:
	{
		t2* L_3 = m673(__this, &m673_MI);
		G_B3_0 = L_3;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
extern "C" t737* m9524 (t1754 * __this, MethodInfo* method)
{
	{
		t737* L_0 = (__this->f10);
		return L_0;
	}
}
extern "C" bool m9525 (t1754 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	bool V_3 = false;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t737* L_0 = (__this->f10);
		if ((!(((uint32_t)(((int32_t)(((t121 *)L_0)->max_length)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0032;
		}
	}
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0021;
	}

IL_0012:
	{
		int32_t L_1 = V_1;
		t737* L_2 = (__this->f10);
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = L_4;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_5))));
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		t737* L_7 = (__this->f10);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((t121 *)L_7)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)4))))
		{
			goto IL_0032;
		}
	}
	{
		return 1;
	}

IL_0032:
	{
		t737* L_9 = (__this->f10);
		int32_t L_10 = 0;
		V_2 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10));
		uint8_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)6)))
		{
			goto IL_007a;
		}
	}
	{
		uint8_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)7)))
		{
			goto IL_0091;
		}
	}
	{
		uint8_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_0093;
	}

IL_0049:
	{
		t737* L_14 = (__this->f10);
		if ((((int32_t)(((int32_t)(((t121 *)L_14)->max_length)))) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0078;
		}
	}
	{
		t737* L_15 = (__this->f10);
		int32_t L_16 = ((int32_t)12);
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_16))) == ((uint32_t)6))))
		{
			goto IL_0078;
		}
	}

IL_0061:
	try
	{ // begin try (depth: 1)
		{
			t737* L_17 = (__this->f10);
			m8095(NULL, L_17, ((int32_t)12), &m8095_MI);
			V_3 = 1;
			goto IL_0095;
		}

IL_0073:
		{
			goto IL_0078;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1359_TI, e.ex->object.klass))
			goto CATCH_0075;
		throw e;
	}

CATCH_0075:
	{ // begin catch(System.Security.Cryptography.CryptographicException)
		goto IL_0078;
	} // end catch (depth: 1)

IL_0078:
	{
		goto IL_0093;
	}

IL_007a:
	try
	{ // begin try (depth: 1)
		{
			t737* L_18 = (__this->f10);
			m8094(NULL, L_18, &m8094_MI);
			V_3 = 1;
			goto IL_0095;
		}

IL_008a:
		{
			goto IL_008f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1359_TI, e.ex->object.klass))
			goto CATCH_008c;
		throw e;
	}

CATCH_008c:
	{ // begin catch(System.Security.Cryptography.CryptographicException)
		goto IL_008f;
	} // end catch (depth: 1)

IL_008f:
	{
		goto IL_0093;
	}

IL_0091:
	{
		goto IL_0093;
	}

IL_0093:
	{
		return 0;
	}

IL_0095:
	{
		bool L_19 = V_3;
		return L_19;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" t737* m9526 (t1754 * __this, MethodInfo* method)
{
	static bool m9526_init;
	if (!m9526_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m9526_init = true;
	}
	{
		t737* L_0 = (__this->f11);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t737* L_1 = (__this->f11);
		return L_1;
	}

IL_000f:
	{
		t737* L_2 = (__this->f10);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		return (t737*)NULL;
	}

IL_0019:
	{
		t737* L_3 = (__this->f10);
		if ((((int32_t)(((t121 *)L_3)->max_length))))
		{
			goto IL_002a;
		}
	}
	{
		return ((t737*)SZArrayNew(t737_TI_var, 0));
	}

IL_002a:
	{
		bool L_4 = m9525(__this, &m9525_MI);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		t2039 * L_5 = (t2039 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2039_TI));
		m10778(L_5, (t2*) &_stringLiteral2015, &m10778_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003d:
	{
		t737* L_6 = m9527(__this, &m9527_MI);
		return L_6;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" t737* m9527 (t1754 * __this, MethodInfo* method)
{
	static bool m9527_init;
	if (!m9527_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m9527_init = true;
	}
	t1374 * V_0 = {0};
	t737* V_1 = {0};
	t737* V_2 = {0};
	{
		t1372 * L_0 = m5937(NULL, &m5937_MI);
		V_0 = L_0;
		t1374 * L_1 = V_0;
		t737* L_2 = (__this->f10);
		t737* L_3 = m5938(L_1, L_2, &m5938_MI);
		V_1 = L_3;
		V_2 = ((t737*)SZArrayNew(t737_TI_var, 8));
		t737* L_4 = V_1;
		t737* L_5 = V_1;
		t737* L_6 = V_2;
		m7752(NULL, (t121 *)(t121 *)L_4, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_5)->max_length)))-(int32_t)8)), (t121 *)(t121 *)L_6, 0, 8, &m7752_MI);
		t737* L_7 = V_2;
		m6977(NULL, (t121 *)(t121 *)L_7, 0, 8, &m6977_MI);
		t737* L_8 = V_2;
		return L_8;
	}
}
extern "C" void m9528 (t1754 * __this, t737* p0, MethodInfo* method)
{
	{
		t737* L_0 = p0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = (__this->f7);
		__this->f7 = ((int32_t)((int32_t)L_1^(int32_t)1));
		goto IL_0021;
	}

IL_0013:
	{
		int32_t L_2 = (__this->f7);
		__this->f7 = ((int32_t)((int32_t)L_2|(int32_t)1));
	}

IL_0021:
	{
		t737* L_3 = p0;
		__this->f10 = L_3;
		return;
	}
}
extern "C" void m9529 (t1754 * __this, t737* p0, MethodInfo* method)
{
	{
		t737* L_0 = p0;
		__this->f11 = L_0;
		return;
	}
}
extern MethodInfo m9530_MI;
extern "C" void m9530 (t1754 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	t2* G_B4_0 = {0};
	t1106 * G_B4_1 = {0};
	t2* G_B3_0 = {0};
	t1106 * G_B3_1 = {0};
	int32_t G_B5_0 = 0;
	t2* G_B5_1 = {0};
	t1106 * G_B5_2 = {0};
	{
		t1106 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral414, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1106 * L_2 = p0;
		t2* L_3 = (__this->f0);
		m5785(L_2, (t2*) &_stringLiteral2005, L_3, &m5785_MI);
		t1106 * L_4 = p0;
		t737* L_5 = (__this->f10);
		m5785(L_4, (t2*) &_stringLiteral2008, (t9 *)(t9 *)L_5, &m5785_MI);
		t1106 * L_6 = p0;
		t737* L_7 = (__this->f11);
		m5785(L_6, (t2*) &_stringLiteral2009, (t9 *)(t9 *)L_7, &m5785_MI);
		t1106 * L_8 = p0;
		t907 * L_9 = (__this->f6);
		G_B3_0 = (t2*) &_stringLiteral2014;
		G_B3_1 = L_8;
		if (!L_9)
		{
			G_B4_0 = (t2*) &_stringLiteral2014;
			G_B4_1 = L_8;
			goto IL_005c;
		}
	}
	{
		t907 * L_10 = (__this->f6);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8695_MI, L_10);
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_005d;
	}

IL_005c:
	{
		G_B5_0 = (-1);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_005d:
	{
		m5772(G_B5_2, G_B5_1, G_B5_0, &m5772_MI);
		t1106 * L_12 = p0;
		t2* L_13 = (__this->f1);
		m5785(L_12, (t2*) &_stringLiteral2006, L_13, &m5785_MI);
		t1106 * L_14 = p0;
		t1202 * L_15 = m9521(__this, &m9521_MI);
		m5785(L_14, (t2*) &_stringLiteral2007, L_15, &m5785_MI);
		t1106 * L_16 = p0;
		int32_t L_17 = (__this->f8);
		int32_t L_18 = L_17;
		t9 * L_19 = Box(InitializedTypeInfo(&t1698_TI), &L_18);
		m5785(L_16, (t2*) &_stringLiteral2010, L_19, &m5785_MI);
		t1106 * L_20 = p0;
		int32_t L_21 = 0;
		t9 * L_22 = Box(InitializedTypeInfo(&t1698_TI), &L_21);
		m5785(L_20, (t2*) &_stringLiteral2016, L_22, &m5785_MI);
		t1106 * L_23 = p0;
		t1808 * L_24 = (__this->f9);
		m5785(L_23, (t2*) &_stringLiteral2011, L_24, &m5785_MI);
		t1106 * L_25 = p0;
		int32_t L_26 = (__this->f12);
		int32_t L_27 = L_26;
		t9 * L_28 = Box(InitializedTypeInfo(&t1699_TI), &L_27);
		m5785(L_25, (t2*) &_stringLiteral2012, L_28, &m5785_MI);
		t1106 * L_29 = p0;
		int32_t L_30 = (__this->f7);
		int32_t L_31 = L_30;
		t9 * L_32 = Box(InitializedTypeInfo(&t1809_TI), &L_31);
		m5785(L_29, (t2*) &_stringLiteral2013, L_32, &m5785_MI);
		t1106 * L_33 = p0;
		m5785(L_33, (t2*) &_stringLiteral2017, NULL, &m5785_MI);
		return;
	}
}
extern MethodInfo m9531_MI;
extern "C" void m9531 (t1754 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1202 * L_0 = (__this->f13);
		m9522(__this, L_0, &m9522_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1809MD.h"



#include "t682.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t682_TI;
#include "t682MD.h"



extern MethodInfo m3166_MI;
extern "C" void m3166 (t682 * __this, t2* p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t685.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t685_TI;
#include "t685MD.h"



extern MethodInfo m3169_MI;
extern "C" void m3169 (t685 * __this, t2* p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t687.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t687_TI;
#include "t687MD.h"



extern MethodInfo m3171_MI;
extern "C" void m3171 (t687 * __this, t2* p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1811.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1811_TI;
#include "t1811MD.h"

#include "t156.h"
#include "t123.h"
#include "t1562.h"
extern TypeInfo t156_TI;
extern TypeInfo t123_TI;
extern TypeInfo t305_TI;
#include "t305MD.h"
extern Il2CppType t309_0_0_0;
extern Il2CppType t156_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t58_0_0_0;
extern Il2CppType t2182_0_0_0;
extern Il2CppType t344_0_0_0;
extern MethodInfo m9547_MI;
extern MethodInfo m2550_MI;
extern MethodInfo m9541_MI;
extern MethodInfo m9534_MI;
extern MethodInfo m4465_MI;
extern MethodInfo m9748_MI;
extern MethodInfo m4426_MI;
extern MethodInfo m12007_MI;
extern MethodInfo m9535_MI;
extern MethodInfo m7793_MI;
extern MethodInfo m7820_MI;
extern MethodInfo m9538_MI;
extern MethodInfo m7681_MI;
extern MethodInfo m7800_MI;
extern MethodInfo m11415_MI;
extern MethodInfo m7673_MI;
extern MethodInfo m7847_MI;
extern MethodInfo m7846_MI;
extern MethodInfo m7842_MI;
extern MethodInfo m7814_MI;
extern MethodInfo m7109_MI;
extern MethodInfo m9539_MI;
extern MethodInfo m9542_MI;
extern MethodInfo m9591_MI;
extern MethodInfo m9543_MI;
extern MethodInfo m7849_MI;
extern MethodInfo m12061_MI;
extern MethodInfo m4441_MI;
extern MethodInfo m9545_MI;
extern MethodInfo m9551_MI;
extern MethodInfo m9546_MI;
struct t121;
struct t121;
extern "C" int32_t m12063_gshared (t9 * __this , t158* p0, t9 * p1, MethodInfo* method);
#define m12063(__this , p0, p1, method) (( int32_t (*) (t9 * , t158*, t9 *, MethodInfo*))m12063_gshared)(__this , p0, p1, method)
#define m12062(__this , p0, p1, method) (( int32_t (*) (t9 * , t152*, t126 *, MethodInfo*))m12063_gshared)(__this , p0, p1, method)
extern Il2CppGenericMethod m12062_GM;


extern MethodInfo m9532_MI;
extern "C" void m9532 (t1811 * __this, MethodInfo* method)
{
	{
		m9547(__this, &m9547_MI);
		return;
	}
}
extern MethodInfo m9533_MI;
extern TypeInfo* t152_TI_var;
extern "C" t920 * m9533 (t1811 * __this, int32_t p0, t1812* p1, t158** p2, t941* p3, t907 * p4, t221* p5, t9 ** p6, MethodInfo* method)
{
	static bool m9533_init;
	if (!m9533_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9533_init = true;
	}
	t152* V_0 = {0};
	int32_t V_1 = 0;
	t920 * V_2 = {0};
	{
		t158** L_0 = p2;
		if ((*((t158**)L_0)))
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_1 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		V_0 = L_1;
		goto IL_0037;
	}

IL_000c:
	{
		t158** L_2 = p2;
		V_0 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)(*((t158**)L_2)))->max_length)))));
		V_1 = 0;
		goto IL_0030;
	}

IL_001a:
	{
		t158** L_3 = p2;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		if (!(*(t9 **)(t9 **)SZArrayLdElema((*((t158**)L_3)), L_5)))
		{
			goto IL_002c;
		}
	}
	{
		t152* L_6 = V_0;
		int32_t L_7 = V_1;
		t158** L_8 = p2;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		t126 * L_11 = m2550((*(t9 **)(t9 **)SZArrayLdElema((*((t158**)L_8)), L_10)), &m2550_MI);
		ArrayElementTypeCheck (L_6, L_11);
		*((t126 **)(t126 **)SZArrayLdElema(L_6, L_7)) = (t126 *)L_11;
	}

IL_002c:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_13 = V_1;
		t158** L_14 = p2;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((t121 *)(*((t158**)L_14)))->max_length))))))
		{
			goto IL_001a;
		}
	}

IL_0037:
	{
		int32_t L_15 = p0;
		t1812* L_16 = p1;
		t152* L_17 = V_0;
		t941* L_18 = p3;
		t920 * L_19 = m9541(__this, L_15, L_16, L_17, L_18, 1, &m9541_MI);
		V_2 = L_19;
		t9 ** L_20 = p6;
		*((t9 **)(L_20)) = (t9 *)NULL;
		t221* L_21 = p5;
		if (!L_21)
		{
			goto IL_0056;
		}
	}
	{
		t221* L_22 = p5;
		t158** L_23 = p2;
		t920 * L_24 = V_2;
		m9534(__this, L_22, L_23, L_24, &m9534_MI);
	}

IL_0056:
	{
		t920 * L_25 = V_2;
		return L_25;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m9534 (t1811 * __this, t221* p0, t158** p1, t920 * p2, MethodInfo* method)
{
	static bool m9534_init;
	if (!m9534_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9534_init = true;
	}
	t158* V_0 = {0};
	t934* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t158** L_0 = p1;
		V_0 = ((t158*)SZArrayNew(t158_TI_var, (((int32_t)(((t121 *)(*((t158**)L_0)))->max_length)))));
		t158** L_1 = p1;
		t158* L_2 = V_0;
		t158** L_3 = p1;
		m5982(NULL, (t121 *)(t121 *)(*((t158**)L_1)), (t121 *)(t121 *)L_2, (((int32_t)(((t121 *)(*((t158**)L_3)))->max_length))), &m5982_MI);
		t920 * L_4 = p2;
		t934* L_5 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		V_3 = 0;
		goto IL_0044;
	}

IL_0025:
	{
		t221* L_6 = p0;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		t934* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9748_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_9, L_11)));
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_13 = m331(NULL, (*(t2**)(t2**)SZArrayLdElema(L_6, L_8)), L_12, &m331_MI);
		if (!L_13)
		{
			goto IL_0040;
		}
	}
	{
		t158* L_14 = V_0;
		int32_t L_15 = V_3;
		t158** L_16 = p1;
		int32_t L_17 = V_2;
		int32_t L_18 = L_17;
		ArrayElementTypeCheck (L_14, (*(t9 **)(t9 **)SZArrayLdElema((*((t158**)L_16)), L_18)));
		*((t9 **)(t9 **)SZArrayLdElema(L_14, L_15)) = (t9 *)(*(t9 **)(t9 **)SZArrayLdElema((*((t158**)L_16)), L_18));
		goto IL_004a;
	}

IL_0040:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0044:
	{
		int32_t L_20 = V_3;
		t934* L_21 = V_1;
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)(((t121 *)L_21)->max_length))))))
		{
			goto IL_0025;
		}
	}

IL_004a:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_23 = V_2;
		t221* L_24 = p0;
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((t121 *)L_24)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		t158* L_25 = V_0;
		t158** L_26 = p1;
		t158** L_27 = p1;
		m5982(NULL, (t121 *)(t121 *)L_25, (t121 *)(t121 *)(*((t158**)L_26)), (((int32_t)(((t121 *)(*((t158**)L_27)))->max_length))), &m5982_MI);
		return;
	}
}
extern "C" bool m9535 (t9 * __this , t126 * p0, t126 * p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4426_MI, L_0);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		t126 * L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4426_MI, L_2);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		t126 * L_4 = p0;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12007_MI, L_4);
		t126 * L_6 = p1;
		t126 * L_7 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12007_MI, L_6);
		bool L_8 = m9535(NULL, L_5, L_7, &m9535_MI);
		return L_8;
	}

IL_0022:
	{
		t126 * L_9 = p1;
		t126 * L_10 = p0;
		bool L_11 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4515_MI, L_9, L_10);
		if (!L_11)
		{
			goto IL_002d;
		}
	}
	{
		return 1;
	}

IL_002d:
	{
		return 0;
	}
}
extern MethodInfo m9536_MI;
extern "C" t9 * m9536 (t1811 * __this, t9 * p0, t126 * p1, t907 * p2, MethodInfo* method)
{
	t126 * V_0 = {0};
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return NULL;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		t126 * L_2 = m2550(L_1, &m2550_MI);
		V_0 = L_2;
		t126 * L_3 = p1;
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7793_MI, L_3);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		t126 * L_5 = p1;
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12007_MI, L_5);
		p1 = L_6;
	}

IL_001e:
	{
		t126 * L_7 = V_0;
		t126 * L_8 = p1;
		if ((((t9*)(t126 *)L_7) == ((t9*)(t126 *)L_8)))
		{
			goto IL_002b;
		}
	}
	{
		t126 * L_9 = p1;
		t9 * L_10 = p0;
		bool L_11 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m7820_MI, L_9, L_10);
		if (!L_11)
		{
			goto IL_002d;
		}
	}

IL_002b:
	{
		t9 * L_12 = p0;
		return L_12;
	}

IL_002d:
	{
		t126 * L_13 = V_0;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4426_MI, L_13);
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		t126 * L_15 = p1;
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4426_MI, L_15);
		if (!L_16)
		{
			goto IL_0052;
		}
	}
	{
		t126 * L_17 = V_0;
		t126 * L_18 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12007_MI, L_17);
		t126 * L_19 = p1;
		t126 * L_20 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12007_MI, L_19);
		bool L_21 = m9535(NULL, L_18, L_20, &m9535_MI);
		if (!L_21)
		{
			goto IL_0052;
		}
	}
	{
		t9 * L_22 = p0;
		return L_22;
	}

IL_0052:
	{
		t126 * L_23 = V_0;
		t126 * L_24 = p1;
		bool L_25 = m9538(NULL, L_23, L_24, &m9538_MI);
		if (!L_25)
		{
			goto IL_00ce;
		}
	}
	{
		t126 * L_26 = p1;
		bool L_27 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, L_26);
		if (!L_27)
		{
			goto IL_006e;
		}
	}
	{
		t126 * L_28 = p1;
		t9 * L_29 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t8_TI));
		t9 * L_30 = m7681(NULL, L_28, L_29, &m7681_MI);
		return L_30;
	}

IL_006e:
	{
		t126 * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_32 = m329(NULL, LoadTypeToken(&t309_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_31) == ((t9*)(t126 *)L_32))))
		{
			goto IL_00af;
		}
	}
	{
		t126 * L_33 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_34 = m329(NULL, LoadTypeToken(&t156_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_33) == ((t9*)(t126 *)L_34))))
		{
			goto IL_0095;
		}
	}
	{
		t9 * L_35 = p0;
		double L_36 = (((double)((*(uint16_t*)((uint16_t*)UnBox (L_35, InitializedTypeInfo(&t309_TI)))))));
		t9 * L_37 = Box(InitializedTypeInfo(&t156_TI), &L_36);
		return L_37;
	}

IL_0095:
	{
		t126 * L_38 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_39 = m329(NULL, LoadTypeToken(&t123_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_38) == ((t9*)(t126 *)L_39))))
		{
			goto IL_00af;
		}
	}
	{
		t9 * L_40 = p0;
		float L_41 = (((float)((*(uint16_t*)((uint16_t*)UnBox (L_40, InitializedTypeInfo(&t309_TI)))))));
		t9 * L_42 = Box(InitializedTypeInfo(&t123_TI), &L_41);
		return L_42;
	}

IL_00af:
	{
		t126 * L_43 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_44 = m329(NULL, LoadTypeToken(&t58_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_43) == ((t9*)(t126 *)L_44))))
		{
			goto IL_00c6;
		}
	}
	{
		t126 * L_45 = p1;
		bool L_46 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7800_MI, L_45);
		if (!L_46)
		{
			goto IL_00c6;
		}
	}
	{
		t9 * L_47 = p0;
		return L_47;
	}

IL_00c6:
	{
		t9 * L_48 = p0;
		t126 * L_49 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t9 * L_50 = m11415(NULL, L_48, L_49, &m11415_MI);
		return L_50;
	}

IL_00ce:
	{
		return NULL;
	}
}
extern MethodInfo m9537_MI;
extern "C" void m9537 (t1811 * __this, t158** p0, t9 * p1, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" bool m9538 (t9 * __this , t126 * p0, t126 * p1, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	int32_t G_B28_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B78_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B89_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B95_0 = 0;
	{
		t126 * L_0 = p0;
		t126 * L_1 = p1;
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t126 *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		t126 * L_2 = p0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		t126 * L_3 = p1;
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7793_MI, L_3);
		t126 * L_5 = p0;
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7793_MI, L_5);
		if ((((int32_t)L_4) == ((int32_t)L_6)))
		{
			goto IL_001b;
		}
	}
	{
		return 0;
	}

IL_001b:
	{
		t126 * L_7 = p1;
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7798_MI, L_7);
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		t126 * L_9 = p1;
		t126 * L_10 = p0;
		bool L_11 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4515_MI, L_9, L_10);
		return L_11;
	}

IL_002b:
	{
		t126 * L_12 = p1;
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, L_12);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		t126 * L_14 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t8_TI));
		t126 * L_15 = m7673(NULL, L_14, &m7673_MI);
		p1 = L_15;
		t126 * L_16 = p0;
		t126 * L_17 = p1;
		if ((!(((t9*)(t126 *)L_16) == ((t9*)(t126 *)L_17))))
		{
			goto IL_0043;
		}
	}
	{
		return 1;
	}

IL_0043:
	{
		t126 * L_18 = p1;
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7847_MI, L_18);
		if (!L_19)
		{
			goto IL_006a;
		}
	}
	{
		t126 * L_20 = p1;
		t126 * L_21 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m7846_MI, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_22 = m329(NULL, LoadTypeToken(&t2182_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_21) == ((t9*)(t126 *)L_22))))
		{
			goto IL_006a;
		}
	}
	{
		t126 * L_23 = p1;
		t152* L_24 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m7842_MI, L_23);
		int32_t L_25 = 0;
		t126 * L_26 = p0;
		if ((!(((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_24, L_25))) == ((t9*)(t126 *)L_26))))
		{
			goto IL_006a;
		}
	}
	{
		return 1;
	}

IL_006a:
	{
		t126 * L_27 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		int32_t L_28 = m7814(NULL, L_27, &m7814_MI);
		V_0 = L_28;
		t126 * L_29 = p1;
		int32_t L_30 = m7814(NULL, L_29, &m7814_MI);
		V_1 = L_30;
		int32_t L_31 = V_0;
		V_2 = L_31;
		int32_t L_32 = V_2;
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 0)
		{
			goto IL_00af;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 1)
		{
			goto IL_014a;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 2)
		{
			goto IL_00e7;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 3)
		{
			goto IL_01f1;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 4)
		{
			goto IL_01a1;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 5)
		{
			goto IL_0289;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 6)
		{
			goto IL_0241;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 7)
		{
			goto IL_02d1;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 8)
		{
			goto IL_02d1;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 9)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0320;
	}

IL_00af:
	{
		int32_t L_33 = V_1;
		V_3 = L_33;
		int32_t L_34 = V_3;
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 0)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 1)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 2)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 3)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 4)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 5)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 6)
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_00d9;
	}

IL_00d7:
	{
		return 1;
	}

IL_00d9:
	{
		t126 * L_35 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_36 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		return ((((t9*)(t126 *)L_35) == ((t9*)(t126 *)L_36))? 1 : 0);
	}

IL_00e7:
	{
		int32_t L_37 = V_1;
		V_3 = L_37;
		int32_t L_38 = V_3;
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 0)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 1)
		{
			goto IL_0121;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 2)
		{
			goto IL_0121;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 3)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 4)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 5)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 6)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 7)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 8)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 9)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 10)
		{
			goto IL_011f;
		}
	}
	{
		goto IL_0121;
	}

IL_011f:
	{
		return 1;
	}

IL_0121:
	{
		t126 * L_39 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_40 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		if ((((t9*)(t126 *)L_39) == ((t9*)(t126 *)L_40)))
		{
			goto IL_0148;
		}
	}
	{
		t126 * L_41 = p0;
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, L_41);
		if (!L_42)
		{
			goto IL_0145;
		}
	}
	{
		t126 * L_43 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_44 = m329(NULL, LoadTypeToken(&t8_0_0_0), &m329_MI);
		G_B28_0 = ((((t9*)(t126 *)L_43) == ((t9*)(t126 *)L_44))? 1 : 0);
		goto IL_0146;
	}

IL_0145:
	{
		G_B28_0 = 0;
	}

IL_0146:
	{
		G_B30_0 = G_B28_0;
		goto IL_0149;
	}

IL_0148:
	{
		G_B30_0 = 1;
	}

IL_0149:
	{
		return G_B30_0;
	}

IL_014a:
	{
		int32_t L_45 = V_1;
		V_3 = L_45;
		int32_t L_46 = V_3;
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 0)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 1)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 2)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 3)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 4)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 5)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 6)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 7)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_0178;
	}

IL_0176:
	{
		return 1;
	}

IL_0178:
	{
		t126 * L_47 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_48 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		if ((((t9*)(t126 *)L_47) == ((t9*)(t126 *)L_48)))
		{
			goto IL_019f;
		}
	}
	{
		t126 * L_49 = p0;
		bool L_50 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, L_49);
		if (!L_50)
		{
			goto IL_019c;
		}
	}
	{
		t126 * L_51 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_52 = m329(NULL, LoadTypeToken(&t8_0_0_0), &m329_MI);
		G_B38_0 = ((((t9*)(t126 *)L_51) == ((t9*)(t126 *)L_52))? 1 : 0);
		goto IL_019d;
	}

IL_019c:
	{
		G_B38_0 = 0;
	}

IL_019d:
	{
		G_B40_0 = G_B38_0;
		goto IL_01a0;
	}

IL_019f:
	{
		G_B40_0 = 1;
	}

IL_01a0:
	{
		return G_B40_0;
	}

IL_01a1:
	{
		int32_t L_53 = V_1;
		V_3 = L_53;
		int32_t L_54 = V_3;
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_01c6;
		}
	}
	{
		goto IL_01c8;
	}

IL_01c6:
	{
		return 1;
	}

IL_01c8:
	{
		t126 * L_55 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_56 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		if ((((t9*)(t126 *)L_55) == ((t9*)(t126 *)L_56)))
		{
			goto IL_01ef;
		}
	}
	{
		t126 * L_57 = p0;
		bool L_58 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, L_57);
		if (!L_58)
		{
			goto IL_01ec;
		}
	}
	{
		t126 * L_59 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_60 = m329(NULL, LoadTypeToken(&t8_0_0_0), &m329_MI);
		G_B48_0 = ((((t9*)(t126 *)L_59) == ((t9*)(t126 *)L_60))? 1 : 0);
		goto IL_01ed;
	}

IL_01ec:
	{
		G_B48_0 = 0;
	}

IL_01ed:
	{
		G_B50_0 = G_B48_0;
		goto IL_01f0;
	}

IL_01ef:
	{
		G_B50_0 = 1;
	}

IL_01f0:
	{
		return G_B50_0;
	}

IL_01f1:
	{
		int32_t L_61 = V_1;
		V_3 = L_61;
		int32_t L_62 = V_3;
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0216;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_0218;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_0216;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_0218;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_0216;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_0216;
		}
	}
	{
		goto IL_0218;
	}

IL_0216:
	{
		return 1;
	}

IL_0218:
	{
		t126 * L_63 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_64 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		if ((((t9*)(t126 *)L_63) == ((t9*)(t126 *)L_64)))
		{
			goto IL_023f;
		}
	}
	{
		t126 * L_65 = p0;
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, L_65);
		if (!L_66)
		{
			goto IL_023c;
		}
	}
	{
		t126 * L_67 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_68 = m329(NULL, LoadTypeToken(&t8_0_0_0), &m329_MI);
		G_B58_0 = ((((t9*)(t126 *)L_67) == ((t9*)(t126 *)L_68))? 1 : 0);
		goto IL_023d;
	}

IL_023c:
	{
		G_B58_0 = 0;
	}

IL_023d:
	{
		G_B60_0 = G_B58_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B60_0 = 1;
	}

IL_0240:
	{
		return G_B60_0;
	}

IL_0241:
	{
		int32_t L_69 = V_1;
		V_3 = L_69;
		int32_t L_70 = V_3;
		if (((int32_t)((int32_t)L_70-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_025e;
		}
		if (((int32_t)((int32_t)L_70-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_025e;
		}
		if (((int32_t)((int32_t)L_70-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_025e;
		}
		if (((int32_t)((int32_t)L_70-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_025e;
		}
	}
	{
		goto IL_0260;
	}

IL_025e:
	{
		return 1;
	}

IL_0260:
	{
		t126 * L_71 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_72 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		if ((((t9*)(t126 *)L_71) == ((t9*)(t126 *)L_72)))
		{
			goto IL_0287;
		}
	}
	{
		t126 * L_73 = p0;
		bool L_74 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, L_73);
		if (!L_74)
		{
			goto IL_0284;
		}
	}
	{
		t126 * L_75 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_76 = m329(NULL, LoadTypeToken(&t8_0_0_0), &m329_MI);
		G_B68_0 = ((((t9*)(t126 *)L_75) == ((t9*)(t126 *)L_76))? 1 : 0);
		goto IL_0285;
	}

IL_0284:
	{
		G_B68_0 = 0;
	}

IL_0285:
	{
		G_B70_0 = G_B68_0;
		goto IL_0288;
	}

IL_0287:
	{
		G_B70_0 = 1;
	}

IL_0288:
	{
		return G_B70_0;
	}

IL_0289:
	{
		int32_t L_77 = V_1;
		V_3 = L_77;
		int32_t L_78 = V_3;
		if (((int32_t)((int32_t)L_78-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_02a6;
		}
		if (((int32_t)((int32_t)L_78-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_02a8;
		}
		if (((int32_t)((int32_t)L_78-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_02a6;
		}
		if (((int32_t)((int32_t)L_78-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_02a6;
		}
	}
	{
		goto IL_02a8;
	}

IL_02a6:
	{
		return 1;
	}

IL_02a8:
	{
		t126 * L_79 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_80 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		if ((((t9*)(t126 *)L_79) == ((t9*)(t126 *)L_80)))
		{
			goto IL_02cf;
		}
	}
	{
		t126 * L_81 = p0;
		bool L_82 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, L_81);
		if (!L_82)
		{
			goto IL_02cc;
		}
	}
	{
		t126 * L_83 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_84 = m329(NULL, LoadTypeToken(&t8_0_0_0), &m329_MI);
		G_B78_0 = ((((t9*)(t126 *)L_83) == ((t9*)(t126 *)L_84))? 1 : 0);
		goto IL_02cd;
	}

IL_02cc:
	{
		G_B78_0 = 0;
	}

IL_02cd:
	{
		G_B80_0 = G_B78_0;
		goto IL_02d0;
	}

IL_02cf:
	{
		G_B80_0 = 1;
	}

IL_02d0:
	{
		return G_B80_0;
	}

IL_02d1:
	{
		int32_t L_85 = V_1;
		V_3 = L_85;
		int32_t L_86 = V_3;
		if ((((int32_t)L_86) == ((int32_t)((int32_t)13))))
		{
			goto IL_02df;
		}
	}
	{
		int32_t L_87 = V_3;
		if ((((int32_t)L_87) == ((int32_t)((int32_t)14))))
		{
			goto IL_02df;
		}
	}
	{
		goto IL_02e1;
	}

IL_02df:
	{
		return 1;
	}

IL_02e1:
	{
		t126 * L_88 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_89 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		if ((((t9*)(t126 *)L_88) == ((t9*)(t126 *)L_89)))
		{
			goto IL_0308;
		}
	}
	{
		t126 * L_90 = p0;
		bool L_91 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, L_90);
		if (!L_91)
		{
			goto IL_0305;
		}
	}
	{
		t126 * L_92 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_93 = m329(NULL, LoadTypeToken(&t8_0_0_0), &m329_MI);
		G_B89_0 = ((((t9*)(t126 *)L_92) == ((t9*)(t126 *)L_93))? 1 : 0);
		goto IL_0306;
	}

IL_0305:
	{
		G_B89_0 = 0;
	}

IL_0306:
	{
		G_B91_0 = G_B89_0;
		goto IL_0309;
	}

IL_0308:
	{
		G_B91_0 = 1;
	}

IL_0309:
	{
		return G_B91_0;
	}

IL_030a:
	{
		int32_t L_94 = V_1;
		if ((((int32_t)L_94) == ((int32_t)((int32_t)14))))
		{
			goto IL_031e;
		}
	}
	{
		t126 * L_95 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_96 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		G_B95_0 = ((((t9*)(t126 *)L_95) == ((t9*)(t126 *)L_96))? 1 : 0);
		goto IL_031f;
	}

IL_031e:
	{
		G_B95_0 = 1;
	}

IL_031f:
	{
		return G_B95_0;
	}

IL_0320:
	{
		t126 * L_97 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_98 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_97) == ((t9*)(t126 *)L_98))))
		{
			goto IL_0337;
		}
	}
	{
		t126 * L_99 = p0;
		bool L_100 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7803_MI, L_99);
		if (!L_100)
		{
			goto IL_0337;
		}
	}
	{
		return 1;
	}

IL_0337:
	{
		t126 * L_101 = p1;
		bool L_102 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7800_MI, L_101);
		if (!L_102)
		{
			goto IL_034e;
		}
	}
	{
		t126 * L_103 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_104 = m329(NULL, LoadTypeToken(&t58_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_103) == ((t9*)(t126 *)L_104))))
		{
			goto IL_034e;
		}
	}
	{
		return 1;
	}

IL_034e:
	{
		t126 * L_105 = p1;
		t126 * L_106 = p0;
		bool L_107 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4515_MI, L_105, L_106);
		return L_107;
	}
}
extern "C" bool m9539 (t9 * __this , t152* p0, t934* p1, bool p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	t126 * V_2 = {0};
	{
		V_0 = 0;
		goto IL_0044;
	}

IL_0004:
	{
		t152* L_0 = p0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		t934* L_3 = p1;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_3, L_5)));
		bool L_7 = m9538(NULL, (*(t126 **)(t126 **)SZArrayLdElema(L_0, L_2)), L_6, &m9538_MI);
		V_1 = L_7;
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		bool L_9 = p2;
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		t934* L_10 = p1;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t126 * L_13 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_10, L_12)));
		V_2 = L_13;
		t126 * L_14 = V_2;
		bool L_15 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7793_MI, L_14);
		if (!L_15)
		{
			goto IL_003b;
		}
	}
	{
		t152* L_16 = p0;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		t126 * L_19 = V_2;
		t126 * L_20 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12007_MI, L_19);
		bool L_21 = m9538(NULL, (*(t126 **)(t126 **)SZArrayLdElema(L_16, L_18)), L_20, &m9538_MI);
		V_1 = L_21;
	}

IL_003b:
	{
		bool L_22 = V_1;
		if (L_22)
		{
			goto IL_0040;
		}
	}
	{
		return 0;
	}

IL_0040:
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0044:
	{
		int32_t L_24 = V_0;
		t152* L_25 = p0;
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((t121 *)L_25)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return 1;
	}
}
extern MethodInfo m9540_MI;
extern "C" t920 * m9540 (t1811 * __this, int32_t p0, t1812* p1, t152* p2, t941* p3, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t1812* L_1 = p1;
		t152* L_2 = p2;
		t941* L_3 = p3;
		t920 * L_4 = m9541(__this, L_0, L_1, L_2, L_3, 0, &m9541_MI);
		return L_4;
	}
}
extern "C" t920 * m9541 (t1811 * __this, int32_t p0, t1812* p1, t152* p2, t941* p3, bool p4, MethodInfo* method)
{
	t920 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t934* V_3 = {0};
	bool V_4 = false;
	t126 * V_5 = {0};
	t934* V_6 = {0};
	t920 * V_7 = {0};
	t934* V_8 = {0};
	{
		t1812* L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1242, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		V_1 = 0;
		goto IL_0050;
	}

IL_0012:
	{
		t1812* L_2 = p1;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		V_0 = (*(t920 **)(t920 **)SZArrayLdElema(L_2, L_4));
		t920 * L_5 = V_0;
		t934* L_6 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_5);
		V_3 = L_6;
		t934* L_7 = V_3;
		t152* L_8 = p2;
		if ((((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_8)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_004c;
	}

IL_0027:
	{
		V_2 = 0;
		goto IL_003e;
	}

IL_002b:
	{
		t152* L_9 = p2;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		t934* L_12 = V_3;
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		t126 * L_15 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_12, L_14)));
		if ((((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_9, L_11))) == ((t9*)(t126 *)L_15)))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0044;
	}

IL_003a:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_003e:
	{
		int32_t L_17 = V_2;
		t152* L_18 = p2;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((t121 *)L_18)->max_length))))))
		{
			goto IL_002b;
		}
	}

IL_0044:
	{
		int32_t L_19 = V_2;
		t152* L_20 = p2;
		if ((!(((uint32_t)L_19) == ((uint32_t)(((int32_t)(((t121 *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		t920 * L_21 = V_0;
		return L_21;
	}

IL_004c:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_23 = V_1;
		t1812* L_24 = p1;
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((t121 *)L_24)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_4 = 0;
		V_5 = (t126 *)NULL;
		V_1 = 0;
		goto IL_0102;
	}

IL_0063:
	{
		t1812* L_25 = p1;
		int32_t L_26 = V_1;
		int32_t L_27 = L_26;
		V_0 = (*(t920 **)(t920 **)SZArrayLdElema(L_25, L_27));
		t920 * L_28 = V_0;
		t934* L_29 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_28);
		V_6 = L_29;
		t934* L_30 = V_6;
		t152* L_31 = p2;
		if ((((int32_t)(((int32_t)(((t121 *)L_30)->max_length)))) <= ((int32_t)(((int32_t)(((t121 *)L_31)->max_length))))))
		{
			goto IL_007d;
		}
	}
	{
		goto IL_00fe;
	}

IL_007d:
	{
		t934* L_32 = V_6;
		if ((((int32_t)(((t121 *)L_32)->max_length))))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_00fe;
	}

IL_0088:
	{
		t934* L_33 = V_6;
		t934* L_34 = V_6;
		int32_t L_35 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_34)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_36 = m329(NULL, LoadTypeToken(&t344_0_0_0), &m329_MI);
		bool L_37 = m7109(NULL, (*(t930 **)(t930 **)SZArrayLdElema(L_33, L_35)), L_36, &m7109_MI);
		V_4 = L_37;
		bool L_38 = V_4;
		if (L_38)
		{
			goto IL_00a8;
		}
	}
	{
		goto IL_00fe;
	}

IL_00a8:
	{
		t934* L_39 = V_6;
		t934* L_40 = V_6;
		int32_t L_41 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_40)->max_length)))-(int32_t)1));
		t126 * L_42 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_39, L_41)));
		t126 * L_43 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12007_MI, L_42);
		V_5 = L_43;
		V_2 = 0;
		goto IL_00f0;
	}

IL_00c1:
	{
		int32_t L_44 = V_2;
		t934* L_45 = V_6;
		if ((((int32_t)L_44) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_45)->max_length)))-(int32_t)1)))))
		{
			goto IL_00da;
		}
	}
	{
		t152* L_46 = p2;
		int32_t L_47 = V_2;
		int32_t L_48 = L_47;
		t934* L_49 = V_6;
		int32_t L_50 = V_2;
		int32_t L_51 = L_50;
		t126 * L_52 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_49, L_51)));
		if ((((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_46, L_48))) == ((t9*)(t126 *)L_52)))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_00f6;
	}

IL_00da:
	{
		int32_t L_53 = V_2;
		t934* L_54 = V_6;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_54)->max_length)))-(int32_t)1)))))
		{
			goto IL_00ec;
		}
	}
	{
		t152* L_55 = p2;
		int32_t L_56 = V_2;
		int32_t L_57 = L_56;
		t126 * L_58 = V_5;
		if ((((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_55, L_57))) == ((t9*)(t126 *)L_58)))
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_00f6;
	}

IL_00ec:
	{
		int32_t L_59 = V_2;
		V_2 = ((int32_t)((int32_t)L_59+(int32_t)1));
	}

IL_00f0:
	{
		int32_t L_60 = V_2;
		t152* L_61 = p2;
		if ((((int32_t)L_60) < ((int32_t)(((int32_t)(((t121 *)L_61)->max_length))))))
		{
			goto IL_00c1;
		}
	}

IL_00f6:
	{
		int32_t L_62 = V_2;
		t152* L_63 = p2;
		if ((!(((uint32_t)L_62) == ((uint32_t)(((int32_t)(((t121 *)L_63)->max_length)))))))
		{
			goto IL_00fe;
		}
	}
	{
		t920 * L_64 = V_0;
		return L_64;
	}

IL_00fe:
	{
		int32_t L_65 = V_1;
		V_1 = ((int32_t)((int32_t)L_65+(int32_t)1));
	}

IL_0102:
	{
		int32_t L_66 = V_1;
		t1812* L_67 = p1;
		if ((((int32_t)L_66) < ((int32_t)(((int32_t)(((t121 *)L_67)->max_length))))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_68 = p0;
		if (!((int32_t)((int32_t)L_68&(int32_t)((int32_t)65536))))
		{
			goto IL_0116;
		}
	}
	{
		return (t920 *)NULL;
	}

IL_0116:
	{
		V_7 = (t920 *)NULL;
		V_1 = 0;
		goto IL_015b;
	}

IL_011d:
	{
		t1812* L_69 = p1;
		int32_t L_70 = V_1;
		int32_t L_71 = L_70;
		V_0 = (*(t920 **)(t920 **)SZArrayLdElema(L_69, L_71));
		t920 * L_72 = V_0;
		t934* L_73 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_72);
		V_8 = L_73;
		t934* L_74 = V_8;
		t152* L_75 = p2;
		if ((((int32_t)(((int32_t)(((t121 *)L_74)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_75)->max_length))))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0157;
	}

IL_0134:
	{
		t152* L_76 = p2;
		t934* L_77 = V_8;
		bool L_78 = p4;
		bool L_79 = m9539(NULL, L_76, L_77, L_78, &m9539_MI);
		if (L_79)
		{
			goto IL_0142;
		}
	}
	{
		goto IL_0157;
	}

IL_0142:
	{
		t920 * L_80 = V_7;
		if (!L_80)
		{
			goto IL_0154;
		}
	}
	{
		t920 * L_81 = V_7;
		t920 * L_82 = V_0;
		t152* L_83 = p2;
		t920 * L_84 = m9542(__this, L_81, L_82, L_83, &m9542_MI);
		V_7 = L_84;
		goto IL_0157;
	}

IL_0154:
	{
		t920 * L_85 = V_0;
		V_7 = L_85;
	}

IL_0157:
	{
		int32_t L_86 = V_1;
		V_1 = ((int32_t)((int32_t)L_86+(int32_t)1));
	}

IL_015b:
	{
		int32_t L_87 = V_1;
		t1812* L_88 = p1;
		if ((((int32_t)L_87) < ((int32_t)(((int32_t)(((t121 *)L_88)->max_length))))))
		{
			goto IL_011d;
		}
	}
	{
		t920 * L_89 = V_7;
		return L_89;
	}
}
extern "C" t920 * m9542 (t1811 * __this, t920 * p0, t920 * p1, t152* p2, MethodInfo* method)
{
	t934* V_0 = {0};
	t934* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t126 * V_5 = {0};
	t126 * V_6 = {0};
	bool V_7 = false;
	bool V_8 = false;
	t920 * G_B19_0 = {0};
	{
		t920 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9591_MI, L_0);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		t920 * L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9591_MI, L_2);
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		t920 * L_4 = p1;
		return L_4;
	}

IL_0012:
	{
		t920 * L_5 = p1;
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9591_MI, L_5);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		t920 * L_7 = p0;
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9591_MI, L_7);
		if (L_8)
		{
			goto IL_0024;
		}
	}
	{
		t920 * L_9 = p0;
		return L_9;
	}

IL_0024:
	{
		t920 * L_10 = p0;
		t934* L_11 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_10);
		V_0 = L_11;
		t920 * L_12 = p1;
		t934* L_13 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_12);
		V_1 = L_13;
		V_2 = 0;
		V_3 = 0;
		goto IL_006d;
	}

IL_0038:
	{
		t934* L_14 = V_0;
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		t126 * L_17 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_14, L_16)));
		t934* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		t126 * L_21 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_18, L_20)));
		int32_t L_22 = m9543(__this, L_17, L_21, &m9543_MI);
		V_4 = L_22;
		int32_t L_23 = V_4;
		if (!L_23)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_24 = V_2;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_4;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_0062;
		}
	}
	{
		t1804 * L_27 = (t1804 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1804_TI));
		m9486(L_27, &m9486_MI);
		il2cpp_codegen_raise_exception(L_27);
	}

IL_0062:
	{
		int32_t L_28 = V_4;
		if (!L_28)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_29 = V_4;
		V_2 = L_29;
	}

IL_0069:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_006d:
	{
		int32_t L_31 = V_3;
		t934* L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((t121 *)L_32)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_33 = V_2;
		if (!L_33)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_34 = V_2;
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		t920 * L_35 = p1;
		G_B19_0 = L_35;
		goto IL_007e;
	}

IL_007d:
	{
		t920 * L_36 = p0;
		G_B19_0 = L_36;
	}

IL_007e:
	{
		return G_B19_0;
	}

IL_007f:
	{
		t920 * L_37 = p0;
		t126 * L_38 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_37);
		V_5 = L_38;
		t920 * L_39 = p1;
		t126 * L_40 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_39);
		V_6 = L_40;
		t126 * L_41 = V_5;
		t126 * L_42 = V_6;
		if ((((t9*)(t126 *)L_41) == ((t9*)(t126 *)L_42)))
		{
			goto IL_00af;
		}
	}
	{
		t126 * L_43 = V_5;
		t126 * L_44 = V_6;
		bool L_45 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m7819_MI, L_43, L_44);
		if (!L_45)
		{
			goto IL_00a2;
		}
	}
	{
		t920 * L_46 = p0;
		return L_46;
	}

IL_00a2:
	{
		t126 * L_47 = V_6;
		t126 * L_48 = V_5;
		bool L_49 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m7819_MI, L_47, L_48);
		if (!L_49)
		{
			goto IL_00af;
		}
	}
	{
		t920 * L_50 = p1;
		return L_50;
	}

IL_00af:
	{
		t920 * L_51 = p0;
		int32_t L_52 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9586_MI, L_51);
		V_7 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_52&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t920 * L_53 = p1;
		int32_t L_54 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9586_MI, L_53);
		V_8 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_54&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_55 = V_7;
		if (!L_55)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_00d9;
		}
	}
	{
		t920 * L_57 = p1;
		return L_57;
	}

IL_00d9:
	{
		bool L_58 = V_8;
		if (!L_58)
		{
			goto IL_00e3;
		}
	}
	{
		bool L_59 = V_7;
		if (L_59)
		{
			goto IL_00e3;
		}
	}
	{
		t920 * L_60 = p0;
		return L_60;
	}

IL_00e3:
	{
		t1804 * L_61 = (t1804 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1804_TI));
		m9486(L_61, &m9486_MI);
		il2cpp_codegen_raise_exception(L_61);
	}
}
extern MethodInfo* m12062_MI_var;
extern "C" int32_t m9543 (t1811 * __this, t126 * p0, t126 * p1, MethodInfo* method)
{
	static bool m9543_init;
	if (!m9543_init)
	{
		m12062_MI_var = il2cpp_codegen_genericmethod_get_method(&m12062_GM);
		m9543_init = true;
	}
	{
		t126 * L_0 = p0;
		t126 * L_1 = p1;
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t126 *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		t126 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7849_MI, L_2);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		t126 * L_4 = p1;
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7849_MI, L_4);
		if (L_5)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		t126 * L_6 = p0;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7849_MI, L_6);
		if (L_7)
		{
			goto IL_002a;
		}
	}
	{
		t126 * L_8 = p1;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7849_MI, L_8);
		if (!L_9)
		{
			goto IL_002a;
		}
	}
	{
		return (-1);
	}

IL_002a:
	{
		t126 * L_10 = p0;
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7791_MI, L_10);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		t126 * L_12 = p1;
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7791_MI, L_12);
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		t126 * L_14 = p0;
		t126 * L_15 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12007_MI, L_14);
		t126 * L_16 = p1;
		t126 * L_17 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12007_MI, L_16);
		int32_t L_18 = m9543(__this, L_15, L_17, &m9543_MI);
		return L_18;
	}

IL_004d:
	{
		t126 * L_19 = p0;
		t126 * L_20 = p1;
		bool L_21 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m7819_MI, L_19, L_20);
		if (!L_21)
		{
			goto IL_0058;
		}
	}
	{
		return (-1);
	}

IL_0058:
	{
		t126 * L_22 = p1;
		t126 * L_23 = p0;
		bool L_24 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m7819_MI, L_22, L_23);
		if (!L_24)
		{
			goto IL_0063;
		}
	}
	{
		return 1;
	}

IL_0063:
	{
		t126 * L_25 = p0;
		bool L_26 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7798_MI, L_25);
		if (!L_26)
		{
			goto IL_007c;
		}
	}
	{
		t126 * L_27 = p1;
		t152* L_28 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m12059_MI, L_27);
		t126 * L_29 = p0;
		int32_t L_30 = m12062(NULL, L_28, L_29, m12062_MI_var);
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		return 1;
	}

IL_007c:
	{
		t126 * L_31 = p1;
		bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7798_MI, L_31);
		if (!L_32)
		{
			goto IL_0095;
		}
	}
	{
		t126 * L_33 = p0;
		t152* L_34 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m12059_MI, L_33);
		t126 * L_35 = p1;
		int32_t L_36 = m12062(NULL, L_34, L_35, m12062_MI_var);
		if ((((int32_t)L_36) < ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		return (-1);
	}

IL_0095:
	{
		return 0;
	}
}
extern MethodInfo m9544_MI;
extern "C" t844 * m9544 (t1811 * __this, int32_t p0, t935* p1, t126 * p2, t152* p3, t941* p4, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	t844 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t844 * V_7 = {0};
	t934* V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B6_0 = 0;
	{
		t935* L_0 = p1;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		t935* L_1 = p1;
		if ((((int32_t)(((t121 *)L_1)->max_length))))
		{
			goto IL_0018;
		}
	}

IL_0008:
	{
		t570 * L_2 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_2, (t2*) &_stringLiteral2018, (t2*) &_stringLiteral1242, &m5761_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		t126 * L_3 = p2;
		V_0 = ((((int32_t)((((t9*)(t126 *)L_3) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t152* L_4 = p3;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		t152* L_5 = p3;
		G_B6_0 = (((int32_t)(((t121 *)L_5)->max_length)));
		goto IL_002b;
	}

IL_002a:
	{
		G_B6_0 = (-1);
	}

IL_002b:
	{
		V_1 = G_B6_0;
		V_2 = (t844 *)NULL;
		V_4 = ((int32_t)2147483646);
		V_5 = ((int32_t)2147483647);
		V_6 = 0;
		t935* L_6 = p1;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_6)->max_length)))-(int32_t)1));
		goto IL_00d6;
	}

IL_004a:
	{
		t935* L_7 = p1;
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_7 = (*(t844 **)(t844 **)SZArrayLdElema(L_7, L_9));
		t844 * L_10 = V_7;
		t934* L_11 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m12061_MI, L_10);
		V_8 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_13 = V_1;
		t934* L_14 = V_8;
		if ((((int32_t)L_13) == ((int32_t)(((int32_t)(((t121 *)L_14)->max_length))))))
		{
			goto IL_0068;
		}
	}
	{
		goto IL_00d2;
	}

IL_0068:
	{
		bool L_15 = V_0;
		if (!L_15)
		{
			goto IL_0077;
		}
	}
	{
		t844 * L_16 = V_7;
		t126 * L_17 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4441_MI, L_16);
		t126 * L_18 = p2;
		if ((((t9*)(t126 *)L_17) == ((t9*)(t126 *)L_18)))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_00d2;
	}

IL_0077:
	{
		V_9 = ((int32_t)2147483646);
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		t152* L_20 = p3;
		t934* L_21 = V_8;
		int32_t L_22 = m9545(NULL, L_20, L_21, &m9545_MI);
		V_9 = L_22;
		int32_t L_23 = V_9;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0094;
		}
	}
	{
		goto IL_00d2;
	}

IL_0094:
	{
		t844 * L_24 = V_7;
		t126 * L_25 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		int32_t L_26 = m9551(NULL, L_25, &m9551_MI);
		V_10 = L_26;
		t844 * L_27 = V_2;
		if (!L_27)
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_9;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_00ad;
		}
	}
	{
		goto IL_00d2;
	}

IL_00ad:
	{
		int32_t L_30 = V_4;
		int32_t L_31 = V_9;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_32 = V_6;
		int32_t L_33 = V_10;
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_34 = V_9;
		V_5 = L_34;
		goto IL_00d2;
	}

IL_00bf:
	{
		int32_t L_35 = V_6;
		int32_t L_36 = V_10;
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_00d2;
	}

IL_00c7:
	{
		t844 * L_37 = V_7;
		V_2 = L_37;
		int32_t L_38 = V_9;
		V_4 = L_38;
		int32_t L_39 = V_10;
		V_6 = L_39;
	}

IL_00d2:
	{
		int32_t L_40 = V_3;
		V_3 = ((int32_t)((int32_t)L_40-(int32_t)1));
	}

IL_00d6:
	{
		int32_t L_41 = V_3;
		if ((((int32_t)L_41) >= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_42 = V_5;
		int32_t L_43 = V_4;
		if ((((int32_t)L_42) > ((int32_t)L_43)))
		{
			goto IL_00e9;
		}
	}
	{
		t1804 * L_44 = (t1804 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1804_TI));
		m9486(L_44, &m9486_MI);
		il2cpp_codegen_raise_exception(L_44);
	}

IL_00e9:
	{
		t844 * L_45 = V_2;
		return L_45;
	}
}
extern "C" int32_t m9545 (t9 * __this , t152* p0, t934* p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_0027;
	}

IL_0006:
	{
		t152* L_0 = p0;
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		t934* L_3 = p1;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_3, L_5)));
		int32_t L_7 = m9546(NULL, (*(t126 **)(t126 **)SZArrayLdElema(L_0, L_2)), L_6, &m9546_MI);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		return (-1);
	}

IL_001d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_11 = V_2;
		V_0 = L_11;
	}

IL_0023:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_13 = V_1;
		t152* L_14 = p0;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((t121 *)L_14)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
extern "C" int32_t m9546 (t9 * __this , t126 * p0, t126 * p1, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	int32_t G_B4_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B63_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B76_0 = 0;
	int32_t G_B80_0 = 0;
	{
		t126 * L_0 = p0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		t126 * L_1 = p1;
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7803_MI, L_1);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_000f;
	}

IL_000e:
	{
		G_B4_0 = 0;
	}

IL_000f:
	{
		return G_B4_0;
	}

IL_0010:
	{
		t126 * L_3 = p0;
		t126 * L_4 = p1;
		if ((!(((t9*)(t126 *)L_3) == ((t9*)(t126 *)L_4))))
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		t126 * L_5 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_6 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_5) == ((t9*)(t126 *)L_6))))
		{
			goto IL_0025;
		}
	}
	{
		return 4;
	}

IL_0025:
	{
		t126 * L_7 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		int32_t L_8 = m7814(NULL, L_7, &m7814_MI);
		V_0 = L_8;
		t126 * L_9 = p1;
		int32_t L_10 = m7814(NULL, L_9, &m7814_MI);
		V_1 = L_10;
		int32_t L_11 = V_0;
		V_2 = L_11;
		int32_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 0)
		{
			goto IL_006a;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 1)
		{
			goto IL_00ec;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 2)
		{
			goto IL_0098;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 3)
		{
			goto IL_0175;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 4)
		{
			goto IL_0134;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 5)
		{
			goto IL_01ef;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 6)
		{
			goto IL_01b6;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 7)
		{
			goto IL_0228;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 8)
		{
			goto IL_0228;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 9)
		{
			goto IL_0252;
		}
	}
	{
		goto IL_025c;
	}

IL_006a:
	{
		int32_t L_13 = V_1;
		V_3 = L_13;
		int32_t L_14 = V_3;
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 0)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 1)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 2)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 3)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 4)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 5)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 6)
		{
			goto IL_0094;
		}
	}
	{
		goto IL_0096;
	}

IL_0092:
	{
		return 0;
	}

IL_0094:
	{
		return 2;
	}

IL_0096:
	{
		return (-1);
	}

IL_0098:
	{
		int32_t L_15 = V_1;
		V_3 = L_15;
		int32_t L_16 = V_3;
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 0)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 1)
		{
			goto IL_00d2;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 2)
		{
			goto IL_00d2;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 3)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 4)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 5)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 6)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 7)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 8)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 9)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 10)
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_00d2;
	}

IL_00d0:
	{
		return 2;
	}

IL_00d2:
	{
		t126 * L_17 = p0;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, L_17);
		if (!L_18)
		{
			goto IL_00ea;
		}
	}
	{
		t126 * L_19 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_20 = m329(NULL, LoadTypeToken(&t8_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_19) == ((t9*)(t126 *)L_20))))
		{
			goto IL_00ea;
		}
	}
	{
		G_B23_0 = 1;
		goto IL_00eb;
	}

IL_00ea:
	{
		G_B23_0 = (-1);
	}

IL_00eb:
	{
		return G_B23_0;
	}

IL_00ec:
	{
		int32_t L_21 = V_1;
		V_3 = L_21;
		int32_t L_22 = V_3;
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 0)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 1)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 2)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 3)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 4)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 5)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 6)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 7)
		{
			goto IL_0118;
		}
	}
	{
		goto IL_011a;
	}

IL_0118:
	{
		return 2;
	}

IL_011a:
	{
		t126 * L_23 = p0;
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, L_23);
		if (!L_24)
		{
			goto IL_0132;
		}
	}
	{
		t126 * L_25 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_26 = m329(NULL, LoadTypeToken(&t8_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_25) == ((t9*)(t126 *)L_26))))
		{
			goto IL_0132;
		}
	}
	{
		G_B31_0 = 1;
		goto IL_0133;
	}

IL_0132:
	{
		G_B31_0 = (-1);
	}

IL_0133:
	{
		return G_B31_0;
	}

IL_0134:
	{
		int32_t L_27 = V_1;
		V_3 = L_27;
		int32_t L_28 = V_3;
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_015b;
	}

IL_0159:
	{
		return 2;
	}

IL_015b:
	{
		t126 * L_29 = p0;
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, L_29);
		if (!L_30)
		{
			goto IL_0173;
		}
	}
	{
		t126 * L_31 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_32 = m329(NULL, LoadTypeToken(&t8_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_31) == ((t9*)(t126 *)L_32))))
		{
			goto IL_0173;
		}
	}
	{
		G_B39_0 = 1;
		goto IL_0174;
	}

IL_0173:
	{
		G_B39_0 = (-1);
	}

IL_0174:
	{
		return G_B39_0;
	}

IL_0175:
	{
		int32_t L_33 = V_1;
		V_3 = L_33;
		int32_t L_34 = V_3;
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_019a;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_019c;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_019a;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_019c;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_019a;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_019a;
		}
	}
	{
		goto IL_019c;
	}

IL_019a:
	{
		return 2;
	}

IL_019c:
	{
		t126 * L_35 = p0;
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, L_35);
		if (!L_36)
		{
			goto IL_01b4;
		}
	}
	{
		t126 * L_37 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_38 = m329(NULL, LoadTypeToken(&t8_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_37) == ((t9*)(t126 *)L_38))))
		{
			goto IL_01b4;
		}
	}
	{
		G_B47_0 = 1;
		goto IL_01b5;
	}

IL_01b4:
	{
		G_B47_0 = (-1);
	}

IL_01b5:
	{
		return G_B47_0;
	}

IL_01b6:
	{
		int32_t L_39 = V_1;
		V_3 = L_39;
		int32_t L_40 = V_3;
		if (((int32_t)((int32_t)L_40-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_01d3;
		}
		if (((int32_t)((int32_t)L_40-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_01d3;
		}
		if (((int32_t)((int32_t)L_40-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_01d3;
		}
		if (((int32_t)((int32_t)L_40-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_01d3;
		}
	}
	{
		goto IL_01d5;
	}

IL_01d3:
	{
		return 2;
	}

IL_01d5:
	{
		t126 * L_41 = p0;
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, L_41);
		if (!L_42)
		{
			goto IL_01ed;
		}
	}
	{
		t126 * L_43 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_44 = m329(NULL, LoadTypeToken(&t8_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_43) == ((t9*)(t126 *)L_44))))
		{
			goto IL_01ed;
		}
	}
	{
		G_B55_0 = 1;
		goto IL_01ee;
	}

IL_01ed:
	{
		G_B55_0 = (-1);
	}

IL_01ee:
	{
		return G_B55_0;
	}

IL_01ef:
	{
		int32_t L_45 = V_1;
		V_3 = L_45;
		int32_t L_46 = V_3;
		if (((int32_t)((int32_t)L_46-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_020c;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_020e;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_020c;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_020e;
	}

IL_020c:
	{
		return 2;
	}

IL_020e:
	{
		t126 * L_47 = p0;
		bool L_48 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, L_47);
		if (!L_48)
		{
			goto IL_0226;
		}
	}
	{
		t126 * L_49 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_50 = m329(NULL, LoadTypeToken(&t8_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_49) == ((t9*)(t126 *)L_50))))
		{
			goto IL_0226;
		}
	}
	{
		G_B63_0 = 1;
		goto IL_0227;
	}

IL_0226:
	{
		G_B63_0 = (-1);
	}

IL_0227:
	{
		return G_B63_0;
	}

IL_0228:
	{
		int32_t L_51 = V_1;
		V_3 = L_51;
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) == ((int32_t)((int32_t)13))))
		{
			goto IL_0236;
		}
	}
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) == ((int32_t)((int32_t)14))))
		{
			goto IL_0236;
		}
	}
	{
		goto IL_0238;
	}

IL_0236:
	{
		return 2;
	}

IL_0238:
	{
		t126 * L_54 = p0;
		bool L_55 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7796_MI, L_54);
		if (!L_55)
		{
			goto IL_0250;
		}
	}
	{
		t126 * L_56 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_57 = m329(NULL, LoadTypeToken(&t8_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_56) == ((t9*)(t126 *)L_57))))
		{
			goto IL_0250;
		}
	}
	{
		G_B72_0 = 1;
		goto IL_0251;
	}

IL_0250:
	{
		G_B72_0 = (-1);
	}

IL_0251:
	{
		return G_B72_0;
	}

IL_0252:
	{
		int32_t L_58 = V_1;
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_025a;
		}
	}
	{
		G_B76_0 = 2;
		goto IL_025b;
	}

IL_025a:
	{
		G_B76_0 = (-1);
	}

IL_025b:
	{
		return G_B76_0;
	}

IL_025c:
	{
		t126 * L_59 = p1;
		t126 * L_60 = p0;
		bool L_61 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4515_MI, L_59, L_60);
		if (!L_61)
		{
			goto IL_0268;
		}
	}
	{
		G_B80_0 = 3;
		goto IL_0269;
	}

IL_0268:
	{
		G_B80_0 = (-1);
	}

IL_0269:
	{
		return G_B80_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1832.h"
extern TypeInfo t1832_TI;
#include "t1832MD.h"
extern MethodInfo m9773_MI;
extern MethodInfo m12064_MI;
extern MethodInfo m4472_MI;


extern "C" void m9547 (t939 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9548_MI;
extern "C" void m9548 (t9 * __this , MethodInfo* method)
{
	{
		t1811 * L_0 = (t1811 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1811_TI));
		m9532(L_0, &m9532_MI);
		((t939_SFs*)InitializedTypeInfo(&t939_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern "C" t939 * m9549 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		t939 * L_0 = ((t939_SFs*)InitializedTypeInfo(&t939_TI)->static_fields)->f0;
		return L_0;
	}
}
extern MethodInfo m9550_MI;
extern "C" bool m9550 (t9 * __this , t939 * p0, t158* p1, t934* p2, t907 * p3, MethodInfo* method)
{
	int32_t V_0 = 0;
	t9 * V_1 = {0};
	{
		t158* L_0 = p1;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		t934* L_1 = p2;
		if ((((int32_t)(((t121 *)L_1)->max_length))))
		{
			goto IL_000a;
		}
	}
	{
		return 1;
	}

IL_000a:
	{
		t1832 * L_2 = (t1832 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1832_TI));
		m9773(L_2, &m9773_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0010:
	{
		t934* L_3 = p2;
		t158* L_4 = p1;
		if ((((int32_t)(((int32_t)(((t121 *)L_3)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_4)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		t1832 * L_5 = (t1832 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1832_TI));
		m9773(L_5, &m9773_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001e:
	{
		V_0 = 0;
		goto IL_0047;
	}

IL_0022:
	{
		t939 * L_6 = p0;
		t158* L_7 = p1;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t934* L_10 = p2;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t126 * L_13 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_10, L_12)));
		t907 * L_14 = p3;
		t9 * L_15 = (t9 *)VirtFuncInvoker3< t9 *, t9 *, t126 *, t907 * >::Invoke(&m12064_MI, L_6, (*(t9 **)(t9 **)SZArrayLdElema(L_7, L_9)), L_13, L_14);
		V_1 = L_15;
		t9 * L_16 = V_1;
		if (L_16)
		{
			goto IL_003f;
		}
	}
	{
		t158* L_17 = p1;
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		if (!(*(t9 **)(t9 **)SZArrayLdElema(L_17, L_19)))
		{
			goto IL_003f;
		}
	}
	{
		return 0;
	}

IL_003f:
	{
		t158* L_20 = p1;
		int32_t L_21 = V_0;
		t9 * L_22 = V_1;
		ArrayElementTypeCheck (L_20, L_22);
		*((t9 **)(t9 **)SZArrayLdElema(L_20, L_21)) = (t9 *)L_22;
		int32_t L_23 = V_0;
		V_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_24 = V_0;
		t158* L_25 = p1;
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((t121 *)L_25)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}
}
extern "C" int32_t m9551 (t9 * __this , t126 * p0, MethodInfo* method)
{
	t126 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t126 * L_0 = p0;
		V_0 = L_0;
		V_1 = 1;
		goto IL_0011;
	}

IL_0006:
	{
		int32_t L_1 = V_1;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)1));
		t126 * L_2 = V_0;
		t126 * L_3 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4472_MI, L_2);
		V_0 = L_3;
	}

IL_0011:
	{
		t126 * L_4 = V_0;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4472_MI, L_4);
		if (L_5)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
extern "C" t920 * m9552 (t9 * __this , t1812* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t920 * V_4 = {0};
	int32_t V_5 = 0;
	t934* V_6 = {0};
	t934* V_7 = {0};
	bool V_8 = false;
	int32_t V_9 = 0;
	{
		V_0 = 0;
		V_1 = (-1);
		t1812* L_0 = p0;
		V_2 = (((int32_t)(((t121 *)L_0)->max_length)));
		V_3 = 0;
		goto IL_009c;
	}

IL_000f:
	{
		t1812* L_1 = p0;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		V_4 = (*(t920 **)(t920 **)SZArrayLdElema(L_1, L_3));
		t920 * L_4 = V_4;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		int32_t L_6 = m9551(NULL, L_5, &m9551_MI);
		V_5 = L_6;
		int32_t L_7 = V_5;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_002d;
		}
	}
	{
		t1804 * L_9 = (t1804 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1804_TI));
		m9486(L_9, &m9486_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_002d:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		t920 * L_11 = V_4;
		t934* L_12 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_11);
		V_6 = L_12;
		t1812* L_13 = p0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		t934* L_16 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, (*(t920 **)(t920 **)SZArrayLdElema(L_13, L_15)));
		V_7 = L_16;
		V_8 = 1;
		t934* L_17 = V_6;
		t934* L_18 = V_7;
		if ((((int32_t)(((int32_t)(((t121 *)L_17)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_18)->max_length))))))
		{
			goto IL_0056;
		}
	}
	{
		V_8 = 0;
		goto IL_0084;
	}

IL_0056:
	{
		V_9 = 0;
		goto IL_007c;
	}

IL_005b:
	{
		t934* L_19 = V_6;
		int32_t L_20 = V_9;
		int32_t L_21 = L_20;
		t126 * L_22 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_19, L_21)));
		t934* L_23 = V_7;
		int32_t L_24 = V_9;
		int32_t L_25 = L_24;
		t126 * L_26 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_23, L_25)));
		if ((((t9*)(t126 *)L_22) == ((t9*)(t126 *)L_26)))
		{
			goto IL_0076;
		}
	}
	{
		V_8 = 0;
		goto IL_0084;
	}

IL_0076:
	{
		int32_t L_27 = V_9;
		V_9 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_007c:
	{
		int32_t L_28 = V_9;
		t934* L_29 = V_6;
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)(((t121 *)L_29)->max_length))))))
		{
			goto IL_005b;
		}
	}

IL_0084:
	{
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_008e;
		}
	}
	{
		t1804 * L_31 = (t1804 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1804_TI));
		m9486(L_31, &m9486_MI);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_008e:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_0;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_34 = V_5;
		V_0 = L_34;
		int32_t L_35 = V_3;
		V_1 = L_35;
	}

IL_0098:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_009c:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_000f;
		}
	}
	{
		t1812* L_39 = p0;
		int32_t L_40 = V_1;
		int32_t L_41 = L_40;
		return (*(t920 **)(t920 **)SZArrayLdElema(L_39, L_41));
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t931MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t1579MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1578.h"
extern MethodInfo m9580_MI;
extern MethodInfo m12065_MI;


extern "C" void m9553 (t833 * __this, MethodInfo* method)
{
	{
		m9580(__this, &m9580_MI);
		return;
	}
}
extern MethodInfo m9554_MI;
extern "C" void m9554 (t9 * __this , MethodInfo* method)
{
	{
		((t833_SFs*)InitializedTypeInfo(&t833_TI)->static_fields)->f0 = (t2*) &_stringLiteral2019;
		((t833_SFs*)InitializedTypeInfo(&t833_TI)->static_fields)->f1 = (t2*) &_stringLiteral2020;
		return;
	}
}
extern MethodInfo m9555_MI;
extern "C" int32_t m9555 (t833 * __this, MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
extern MethodInfo m4458_MI;
extern TypeInfo* t158_TI_var;
extern "C" t9 * m4458 (t833 * __this, t158* p0, MethodInfo* method)
{
	static bool m4458_init;
	if (!m4458_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4458_init = true;
	}
	{
		t158* L_0 = p0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		p0 = ((t158*)SZArrayNew(t158_TI_var, 0));
	}

IL_000d:
	{
		t158* L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker4< t9 *, int32_t, t939 *, t158*, t907 * >::Invoke(&m12065_MI, __this, ((int32_t)512), (t939 *)NULL, L_1, (t907 *)NULL);
		return L_2;
	}
}
#include "t1813.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1813_TI;
#include "t1813MD.h"



#include "t1814.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1814_TI;
#include "t1814MD.h"

#include "t297.h"


extern MethodInfo m9556_MI;
extern "C" void m9556 (t1814 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m9557_MI;
extern "C" void m9557 (t1814 * __this, t9 * p0, t297 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m9557((t1814 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t297 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, t297 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, t297 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1814(Il2CppObject* delegate, t9 * p0, t297 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m9558_MI;
extern "C" t9 * m9558 (t1814 * __this, t9 * p0, t297 * p1, t477 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m9559_MI;
extern "C" void m9559 (t1814 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif
#include "t1575MD.h"

extern MethodInfo m12066_MI;
extern MethodInfo m7853_MI;


extern MethodInfo m9560_MI;
extern "C" void m9560 (t1575 * __this, MethodInfo* method)
{
	{
		m7853(__this, &m7853_MI);
		return;
	}
}
extern MethodInfo m9561_MI;
extern "C" t126 * m9561 (t1575 * __this, MethodInfo* method)
{
	t934* V_0 = {0};
	t835 * V_1 = {0};
	t126 * V_2 = {0};
	{
		t835 * L_0 = (t835 *)VirtFuncInvoker1< t835 *, bool >::Invoke(&m12066_MI, __this, 1);
		V_1 = L_0;
		t835 * L_1 = V_1;
		t934* L_2 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_1);
		V_0 = L_2;
		t934* L_3 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_3)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		t934* L_4 = V_0;
		int32_t L_5 = 0;
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_4, L_5)));
		V_2 = L_6;
		t126 * L_7 = V_2;
		return L_7;
	}

IL_0020:
	{
		return (t126 *)NULL;
	}
}
extern MethodInfo m9562_MI;
extern "C" int32_t m9562 (t1575 * __this, MethodInfo* method)
{
	{
		return (int32_t)(2);
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1771MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1375.h"
#include "t2141.h"
#include "t1591.h"
extern TypeInfo t1375_TI;
extern TypeInfo t2141_TI;
extern TypeInfo t1591_TI;
#include "t319MD.h"
#include "t2141MD.h"
#include "t1591MD.h"
extern MethodInfo m9570_MI;
extern MethodInfo m12067_MI;
extern MethodInfo m7858_MI;
extern MethodInfo m9567_MI;
extern MethodInfo m9566_MI;
extern MethodInfo m7797_MI;
extern MethodInfo m9571_MI;
extern MethodInfo m11707_MI;
extern MethodInfo m9569_MI;
extern MethodInfo m7877_MI;


extern MethodInfo m9563_MI;
extern "C" void m9563 (t837 * __this, MethodInfo* method)
{
	{
		m7853(__this, &m7853_MI);
		return;
	}
}
extern MethodInfo m9564_MI;
extern "C" int32_t m9564 (t837 * __this, MethodInfo* method)
{
	{
		return (int32_t)(4);
	}
}
extern MethodInfo m9565_MI;
extern "C" bool m9565 (t837 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12017_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4437_MI;
extern "C" bool m4437 (t837 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12017_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4444_MI;
extern "C" bool m4444 (t837 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12017_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4438_MI;
extern "C" bool m4438 (t837 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12017_MI, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)6))? 1 : 0);
	}
}
extern "C" bool m9566 (t837 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12017_MI, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128)))? 1 : 0);
	}
}
extern MethodInfo m4461_MI;
extern "C" void m4461 (t837 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		VirtActionInvoker5< t9 *, t9 *, int32_t, t939 *, t907 * >::Invoke(&m12067_MI, __this, L_0, L_1, 0, (t939 *)NULL, (t907 *)NULL);
		return;
	}
}
extern "C" t837 * m9567 (t9 * __this , t58 p0, t58 p1, MethodInfo* method)
{
	typedef t837 * (*m9567_ftn) (t58, t58);
	static m9567_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9567_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m9568_MI;
extern "C" t837 * m9568 (t9 * __this , t319  p0, MethodInfo* method)
{
	{
		t58 L_0 = m7858((&p0), &m7858_MI);
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_2 = m4502(NULL, L_0, L_1, &m4502_MI);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		t570 * L_3 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_3, (t2*) &_stringLiteral2021, &m2949_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		t58 L_4 = m7858((&p0), &m7858_MI);
		t58 L_5 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		t837 * L_6 = m9567(NULL, L_4, L_5, &m9567_MI);
		return L_6;
	}
}
extern "C" int32_t m9569 (t837 * __this, MethodInfo* method)
{
	{
		t1375 * L_0 = (t1375 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1375_TI));
		m5942(L_0, (t2*) &_stringLiteral2022, &m5942_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" t1770 * m9570 (t837 * __this, MethodInfo* method)
{
	typedef t1770 * (*m9570_ftn) (t837 *);
	static m9570_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9570_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::GetUnmanagedMarshal()");
	return _il2cpp_icall_func(__this);
}
extern "C" t1770 * m9571 (t837 * __this, MethodInfo* method)
{
	{
		t1770 * L_0 = m9570(__this, &m9570_MI);
		return L_0;
	}
}
extern MethodInfo m9572_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m9572 (t837 * __this, MethodInfo* method)
{
	static bool m9572_init;
	if (!m9572_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9572_init = true;
	}
	int32_t V_0 = 0;
	t1770 * V_1 = {0};
	t158* V_2 = {0};
	{
		V_0 = 0;
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9566_MI, __this);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
	}

IL_000e:
	{
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, __this);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7797_MI, L_2);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_001f:
	{
		t1770 * L_5 = (t1770 *)VirtFuncInvoker0< t1770 * >::Invoke(&m9571_MI, __this);
		V_1 = L_5;
		t1770 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0032;
		}
	}
	{
		return (t158*)NULL;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		V_2 = ((t158*)SZArrayNew(t158_TI_var, L_9));
		V_0 = 0;
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9566_MI, __this);
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		t158* L_11 = V_2;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
		t2141 * L_14 = (t2141 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2141_TI));
		m11707(L_14, &m11707_MI);
		ArrayElementTypeCheck (L_11, L_14);
		*((t9 **)(t9 **)SZArrayLdElema(L_11, L_13)) = (t9 *)L_14;
	}

IL_004f:
	{
		t126 * L_15 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, __this);
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7797_MI, L_15);
		if (!L_16)
		{
			goto IL_006e;
		}
	}
	{
		t158* L_17 = V_2;
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)1));
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9569_MI, __this);
		t1591 * L_21 = (t1591 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1591_TI));
		m7877(L_21, L_20, &m7877_MI);
		ArrayElementTypeCheck (L_17, L_21);
		*((t9 **)(t9 **)SZArrayLdElema(L_17, L_19)) = (t9 *)L_21;
	}

IL_006e:
	{
		t1770 * L_22 = V_1;
		if (!L_22)
		{
			goto IL_007e;
		}
	}
	{
		t158* L_23 = V_2;
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		V_0 = ((int32_t)((int32_t)L_25+(int32_t)1));
		t1770 * L_26 = V_1;
		t1584 * L_27 = m9485(L_26, &m9485_MI);
		ArrayElementTypeCheck (L_23, L_27);
		*((t9 **)(t9 **)SZArrayLdElema(L_23, L_25)) = (t9 *)L_27;
	}

IL_007e:
	{
		t158* L_28 = V_2;
		return L_28;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t315_TI;


extern "C" void m9573 (t1785 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9574_MI;
extern "C" t2* m9574 (t1785 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		t126 * L_1 = (__this->f0);
		uint16_t L_2 = (__this->f2);
		uint16_t L_3 = L_2;
		t9 * L_4 = Box(InitializedTypeInfo(&t315_TI), &L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_5 = m1251(NULL, (t2*) &_stringLiteral2023, L_1, L_4, &m1251_MI);
		return L_5;
	}

IL_0024:
	{
		t126 * L_6 = (__this->f0);
		uint16_t L_7 = (__this->f2);
		uint16_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t315_TI), &L_8);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m1251(NULL, (t2*) &_stringLiteral2024, L_6, L_9, &m1251_MI);
		return L_10;
	}
}
#include "t1815.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1815_TI;
#include "t1815MD.h"

#include "t1348.h"
extern TypeInfo t1348_TI;
extern TypeInfo t1578_TI;
#include "t1348MD.h"
extern Il2CppType t1815_0_0_0;
extern MethodInfo m9577_MI;
extern MethodInfo m10368_MI;
extern MethodInfo m5922_MI;
extern MethodInfo m5774_MI;
extern MethodInfo m9598_MI;
extern MethodInfo m9597_MI;
extern MethodInfo m9596_MI;
extern MethodInfo m7829_MI;


extern MethodInfo m9575_MI;
extern "C" void m9575 (t1815 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t1351 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		m336(__this, &m336_MI);
		t1106 * L_0 = p0;
		t2* L_1 = m5782(L_0, (t2*) &_stringLiteral2025, &m5782_MI);
		V_0 = L_1;
		t1106 * L_2 = p0;
		t2* L_3 = m5782(L_2, (t2*) &_stringLiteral1266, &m5782_MI);
		V_1 = L_3;
		t1106 * L_4 = p0;
		t2* L_5 = m5782(L_4, (t2*) &_stringLiteral2026, &m5782_MI);
		__this->f0 = L_5;
		t1106 * L_6 = p0;
		t2* L_7 = m5782(L_6, (t2*) &_stringLiteral651, &m5782_MI);
		__this->f1 = L_7;
		t1106 * L_8 = p0;
		int32_t L_9 = m5784(L_8, (t2*) &_stringLiteral2027, &m5784_MI);
		__this->f2 = L_9;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		__this->f4 = (t152*)NULL;
		goto IL_005d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1348_TI, e.ex->object.klass))
			goto CATCH_005a;
		throw e;
	}

CATCH_005a:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		goto IL_005d;
	} // end catch (depth: 1)

IL_005d:
	{
		t2* L_10 = V_0;
		t1351 * L_11 = m9504(NULL, L_10, &m9504_MI);
		V_2 = L_11;
		t1351 * L_12 = V_2;
		t2* L_13 = V_1;
		t126 * L_14 = (t126 *)VirtFuncInvoker3< t126 *, t2*, bool, bool >::Invoke(&m9500_MI, L_12, L_13, 1, 1);
		__this->f3 = L_14;
		return;
	}
}
extern MethodInfo m9576_MI;
extern "C" void m9576 (t9 * __this , t1106 * p0, t2* p1, t126 * p2, t2* p3, int32_t p4, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t2* L_1 = p1;
		t126 * L_2 = p2;
		t2* L_3 = p3;
		int32_t L_4 = p4;
		m9577(NULL, L_0, L_1, L_2, L_3, L_4, (t152*)(t152*)NULL, &m9577_MI);
		return;
	}
}
extern "C" void m9577 (t9 * __this , t1106 * p0, t2* p1, t126 * p2, t2* p3, int32_t p4, t152* p5, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t1815_0_0_0), &m329_MI);
		m10368(L_0, L_1, &m10368_MI);
		t1106 * L_2 = p0;
		t126 * L_3 = p2;
		t1574 * L_4 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m12024_MI, L_3);
		t1351 * L_5 = m9606(L_4, &m9606_MI);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9493_MI, L_5);
		t126 * L_7 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5770(L_2, (t2*) &_stringLiteral2025, L_6, L_7, &m5770_MI);
		t1106 * L_8 = p0;
		t126 * L_9 = p2;
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_9);
		t126 * L_11 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5770(L_8, (t2*) &_stringLiteral1266, L_10, L_11, &m5770_MI);
		t1106 * L_12 = p0;
		t2* L_13 = p1;
		t126 * L_14 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5770(L_12, (t2*) &_stringLiteral2026, L_13, L_14, &m5770_MI);
		t1106 * L_15 = p0;
		t2* L_16 = p3;
		t126 * L_17 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5770(L_15, (t2*) &_stringLiteral651, L_16, L_17, &m5770_MI);
		t1106 * L_18 = p0;
		int32_t L_19 = p4;
		m5772(L_18, (t2*) &_stringLiteral2027, L_19, &m5772_MI);
		t1106 * L_20 = p0;
		t152* L_21 = p5;
		t126 * L_22 = m329(NULL, LoadTypeToken(&t152_0_0_0), &m329_MI);
		m5770(L_20, (t2*) &_stringLiteral2028, (t9 *)(t9 *)L_21, L_22, &m5770_MI);
		return;
	}
}
extern MethodInfo m9578_MI;
extern "C" void m9578 (t1815 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9579_MI;
extern "C" t9 * m9579 (t1815 * __this, t1107  p0, MethodInfo* method)
{
	t932* V_0 = {0};
	int32_t V_1 = 0;
	t1576* V_2 = {0};
	int32_t V_3 = 0;
	t835 * V_4 = {0};
	t837 * V_5 = {0};
	t844 * V_6 = {0};
	t1575 * V_7 = {0};
	int32_t V_8 = {0};
	{
		int32_t L_0 = (__this->f2);
		V_8 = L_0;
		int32_t L_1 = V_8;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_003f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_019e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_012e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_0090;
		}
	}

IL_0031:
	{
		int32_t L_2 = V_8;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)16))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_01d6;
	}

IL_003f:
	{
		t126 * L_3 = (__this->f3);
		t932* L_4 = (t932*)VirtFuncInvoker1< t932*, int32_t >::Invoke(&m12023_MI, L_3, ((int32_t)60));
		V_0 = L_4;
		V_1 = 0;
		goto IL_006e;
	}

IL_0051:
	{
		t932* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		t2* L_8 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, (*(t833 **)(t833 **)SZArrayLdElema(L_5, L_7)));
		t2* L_9 = (__this->f1);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(&m5922_MI, L_8, L_9);
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		t932* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		return (*(t833 **)(t833 **)SZArrayLdElema(L_11, L_13));
	}

IL_006a:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_15 = V_1;
		t932* L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t121 *)L_16)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		t2* L_17 = (__this->f1);
		t126 * L_18 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_19 = m1251(NULL, (t2*) &_stringLiteral2029, L_17, L_18, &m1251_MI);
		t1348 * L_20 = (t1348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1348_TI));
		m5774(L_20, L_19, &m5774_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0090:
	{
		t126 * L_21 = (__this->f3);
		t1576* L_22 = (t1576*)VirtFuncInvoker1< t1576*, int32_t >::Invoke(&m12060_MI, L_21, ((int32_t)60));
		V_2 = L_22;
		V_3 = 0;
		goto IL_010c;
	}

IL_00a2:
	{
		t1576* L_23 = V_2;
		int32_t L_24 = V_3;
		int32_t L_25 = L_24;
		t2* L_26 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, (*(t835 **)(t835 **)SZArrayLdElema(L_23, L_25)));
		t2* L_27 = (__this->f1);
		bool L_28 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(&m5922_MI, L_26, L_27);
		if (!L_28)
		{
			goto IL_00bb;
		}
	}
	{
		t1576* L_29 = V_2;
		int32_t L_30 = V_3;
		int32_t L_31 = L_30;
		return (*(t835 **)(t835 **)SZArrayLdElema(L_29, L_31));
	}

IL_00bb:
	{
		t152* L_32 = (__this->f4);
		if (!L_32)
		{
			goto IL_0108;
		}
	}
	{
		t1576* L_33 = V_2;
		int32_t L_34 = V_3;
		int32_t L_35 = L_34;
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9598_MI, (*(t835 **)(t835 **)SZArrayLdElema(L_33, L_35)));
		if (!L_36)
		{
			goto IL_0108;
		}
	}
	{
		t1576* L_37 = V_2;
		int32_t L_38 = V_3;
		int32_t L_39 = L_38;
		t152* L_40 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9597_MI, (*(t835 **)(t835 **)SZArrayLdElema(L_37, L_39)));
		t152* L_41 = (__this->f4);
		if ((!(((uint32_t)(((int32_t)(((t121 *)L_40)->max_length)))) == ((uint32_t)(((int32_t)(((t121 *)L_41)->max_length)))))))
		{
			goto IL_0108;
		}
	}
	{
		t1576* L_42 = V_2;
		int32_t L_43 = V_3;
		int32_t L_44 = L_43;
		t152* L_45 = (__this->f4);
		t835 * L_46 = (t835 *)VirtFuncInvoker1< t835 *, t152* >::Invoke(&m9596_MI, (*(t835 **)(t835 **)SZArrayLdElema(L_42, L_44)), L_45);
		V_4 = L_46;
		t835 * L_47 = V_4;
		t2* L_48 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_47);
		t2* L_49 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_50 = m331(NULL, L_48, L_49, &m331_MI);
		if (!L_50)
		{
			goto IL_0108;
		}
	}
	{
		t835 * L_51 = V_4;
		return L_51;
	}

IL_0108:
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)((int32_t)L_52+(int32_t)1));
	}

IL_010c:
	{
		int32_t L_53 = V_3;
		t1576* L_54 = V_2;
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)(((t121 *)L_54)->max_length))))))
		{
			goto IL_00a2;
		}
	}
	{
		t2* L_55 = (__this->f1);
		t126 * L_56 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_57 = m1251(NULL, (t2*) &_stringLiteral2030, L_55, L_56, &m1251_MI);
		t1348 * L_58 = (t1348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1348_TI));
		m5774(L_58, L_57, &m5774_MI);
		il2cpp_codegen_raise_exception(L_58);
	}

IL_012e:
	{
		t126 * L_59 = (__this->f3);
		t2* L_60 = (__this->f0);
		t837 * L_61 = (t837 *)VirtFuncInvoker2< t837 *, t2*, int32_t >::Invoke(&m12058_MI, L_59, L_60, ((int32_t)60));
		V_5 = L_61;
		t837 * L_62 = V_5;
		if (!L_62)
		{
			goto IL_014a;
		}
	}
	{
		t837 * L_63 = V_5;
		return L_63;
	}

IL_014a:
	{
		t2* L_64 = (__this->f0);
		t126 * L_65 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_66 = m1251(NULL, (t2*) &_stringLiteral2031, L_64, L_65, &m1251_MI);
		t1348 * L_67 = (t1348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1348_TI));
		m5774(L_67, L_66, &m5774_MI);
		il2cpp_codegen_raise_exception(L_67);
	}

IL_0166:
	{
		t126 * L_68 = (__this->f3);
		t2* L_69 = (__this->f0);
		t844 * L_70 = (t844 *)VirtFuncInvoker2< t844 *, t2*, int32_t >::Invoke(&m7829_MI, L_68, L_69, ((int32_t)60));
		V_6 = L_70;
		t844 * L_71 = V_6;
		if (!L_71)
		{
			goto IL_0182;
		}
	}
	{
		t844 * L_72 = V_6;
		return L_72;
	}

IL_0182:
	{
		t2* L_73 = (__this->f0);
		t126 * L_74 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_75 = m1251(NULL, (t2*) &_stringLiteral2032, L_73, L_74, &m1251_MI);
		t1348 * L_76 = (t1348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1348_TI));
		m5774(L_76, L_75, &m5774_MI);
		il2cpp_codegen_raise_exception(L_76);
	}

IL_019e:
	{
		t126 * L_77 = (__this->f3);
		t2* L_78 = (__this->f0);
		t1575 * L_79 = (t1575 *)VirtFuncInvoker2< t1575 *, t2*, int32_t >::Invoke(&m12057_MI, L_77, L_78, ((int32_t)60));
		V_7 = L_79;
		t1575 * L_80 = V_7;
		if (!L_80)
		{
			goto IL_01ba;
		}
	}
	{
		t1575 * L_81 = V_7;
		return L_81;
	}

IL_01ba:
	{
		t2* L_82 = (__this->f0);
		t126 * L_83 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_84 = m1251(NULL, (t2*) &_stringLiteral2033, L_82, L_83, &m1251_MI);
		t1348 * L_85 = (t1348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1348_TI));
		m5774(L_85, L_84, &m5774_MI);
		il2cpp_codegen_raise_exception(L_85);
	}

IL_01d6:
	{
		int32_t L_86 = (__this->f2);
		int32_t L_87 = L_86;
		t9 * L_88 = Box(InitializedTypeInfo(&t1578_TI), &L_87);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_89 = m590(NULL, (t2*) &_stringLiteral2034, L_88, &m590_MI);
		t1348 * L_90 = (t1348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1348_TI));
		m5774(L_90, L_89, &m5774_MI);
		il2cpp_codegen_raise_exception(L_90);
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1578MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t1763MD.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m9582_MI;
extern MethodInfo m9584_MI;
extern MethodInfo m7844_MI;
extern MethodInfo m12068_MI;
extern MethodInfo m379_MI;


extern "C" void m9580 (t920 * __this, MethodInfo* method)
{
	{
		m7853(__this, &m7853_MI);
		return;
	}
}
extern MethodInfo m9581_MI;
extern "C" t920 * m9581 (t9 * __this , t1764  p0, MethodInfo* method)
{
	{
		t58 L_0 = m11830((&p0), &m11830_MI);
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		t920 * L_2 = m9582(NULL, L_0, L_1, &m9582_MI);
		return L_2;
	}
}
extern "C" t920 * m9582 (t9 * __this , t58 p0, t58 p1, MethodInfo* method)
{
	t920 * V_0 = {0};
	{
		t58 L_0 = p0;
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_2 = m4502(NULL, L_0, L_1, &m4502_MI);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		t570 * L_3 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_3, (t2*) &_stringLiteral2021, &m2949_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		t58 L_4 = p0;
		t58 L_5 = p1;
		t920 * L_6 = m9584(NULL, L_4, L_5, &m9584_MI);
		V_0 = L_6;
		t920 * L_7 = V_0;
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		t570 * L_8 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_8, (t2*) &_stringLiteral2021, &m2949_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_002e:
	{
		t920 * L_9 = V_0;
		return L_9;
	}
}
extern MethodInfo m9583_MI;
extern "C" t920 * m9583 (t9 * __this , t1764  p0, MethodInfo* method)
{
	t920 * V_0 = {0};
	t126 * V_1 = {0};
	{
		t58 L_0 = m11830((&p0), &m11830_MI);
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		t920 * L_2 = m9582(NULL, L_0, L_1, &m9582_MI);
		V_0 = L_2;
		t920 * L_3 = V_0;
		t126 * L_4 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_3);
		V_1 = L_4;
		t126 * L_5 = V_1;
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7847_MI, L_5);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		t126 * L_7 = V_1;
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7844_MI, L_7);
		if (!L_8)
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		t570 * L_9 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_9, (t2*) &_stringLiteral2035, &m2949_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0034:
	{
		t920 * L_10 = V_0;
		return L_10;
	}
}
extern "C" t920 * m9584 (t9 * __this , t58 p0, t58 p1, MethodInfo* method)
{
	typedef t920 * (*m9584_ftn) (t58, t58);
	static m9584_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9584_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m9585 (t920 * __this, MethodInfo* method)
{
	t934* V_0 = {0};
	{
		t934* L_0 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, __this);
		V_0 = L_0;
		t934* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		t934* L_2 = V_0;
		return (((int32_t)(((t121 *)L_2)->max_length)));
	}
}
extern "C" t9 * m4459 (t920 * __this, t9 * p0, t158* p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t158* L_1 = p1;
		t9 * L_2 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t939 *, t158*, t907 * >::Invoke(&m12068_MI, __this, L_0, 0, (t939 *)NULL, L_1, (t907 *)NULL);
		return L_2;
	}
}
extern "C" int32_t m9586 (t920 * __this, MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
extern MethodInfo m4432_MI;
extern "C" bool m4432 (t920 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12016_MI, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)6))? 1 : 0);
	}
}
extern "C" bool m4431 (t920 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12016_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9587_MI;
extern "C" bool m9587 (t920 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12016_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9588_MI;
extern "C" int32_t m9588 (t920 * __this, t9 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	t1773 * V_0 = {0};
	t1758 * V_1 = {0};
	{
		if (!((t1773 *)IsInst(__this, InitializedTypeInfo(&t1773_TI))))
		{
			goto IL_0019;
		}
	}
	{
		V_0 = ((t1773 *)Castclass(__this, InitializedTypeInfo(&t1773_TI)));
		t1773 * L_0 = V_0;
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = p2;
		int32_t L_4 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, bool >::Invoke(&m9342_MI, L_0, L_1, L_2, L_3);
		return L_4;
	}

IL_0019:
	{
		if (!((t1758 *)IsInst(__this, InitializedTypeInfo(&t1758_TI))))
		{
			goto IL_0032;
		}
	}
	{
		V_1 = ((t1758 *)Castclass(__this, InitializedTypeInfo(&t1758_TI)));
		t1758 * L_5 = V_1;
		t9 * L_6 = p0;
		int32_t L_7 = p1;
		bool L_8 = p2;
		int32_t L_9 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, bool >::Invoke(&m9171_MI, L_5, L_6, L_7, L_8);
		return L_9;
	}

IL_0032:
	{
		t138 * L_10 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_10, (t2*) &_stringLiteral2036, &m379_MI);
		il2cpp_codegen_raise_exception(L_10);
	}
}
extern MethodInfo m9589_MI;
extern "C" t152* m9589 (t920 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9590_MI;
extern "C" bool m9590 (t920 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m9591 (t920 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9592_MI;
extern "C" bool m9592 (t920 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1787_TI;
#include "t1787MD.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m7840_MI;


extern "C" void m9593 (t835 * __this, MethodInfo* method)
{
	{
		m9580(__this, &m9580_MI);
		return;
	}
}
extern MethodInfo m9594_MI;
extern "C" int32_t m9594 (t835 * __this, MethodInfo* method)
{
	{
		return (int32_t)(8);
	}
}
extern "C" t126 * m9595 (t835 * __this, MethodInfo* method)
{
	{
		return (t126 *)NULL;
	}
}
extern "C" t835 * m9596 (t835 * __this, t152* p0, MethodInfo* method)
{
	{
		t126 * L_0 = m2550(__this, &m2550_MI);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7840_MI, L_0);
		t169 * L_2 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_2, L_1, &m5776_MI);
		il2cpp_codegen_raise_exception(L_2);
	}
}
extern "C" t152* m9597 (t835 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_0 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		return L_0;
	}
}
extern "C" bool m9598 (t835 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9599_MI;
extern "C" bool m9599 (t835 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9600_MI;
extern "C" bool m9600 (t835 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
#include "t1816.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1816_TI;
#include "t1816MD.h"

extern MethodInfo m9601_MI;


extern "C" void m9601 (t1816 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9602_MI;
extern "C" void m9602 (t9 * __this , MethodInfo* method)
{
	{
		t1816 * L_0 = (t1816 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1816_TI));
		m9601(L_0, &m9601_MI);
		((t1816_SFs*)InitializedTypeInfo(&t1816_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m9603_MI;
extern "C" void m9603 (t1816 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1817.h"
extern TypeInfo t1817_TI;
#include "t1817MD.h"
#include "t2157MD.h"
extern MethodInfo m9616_MI;
extern MethodInfo m11955_MI;
extern MethodInfo m9617_MI;
extern MethodInfo m11918_MI;
extern MethodInfo m9612_MI;
extern MethodInfo m4321_MI;
extern MethodInfo m5973_MI;


extern "C" void m9604 (t1574 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9605_MI;
extern "C" void m9605 (t9 * __this , MethodInfo* method)
{
	{
		t58 L_0 = { &m9616_MI };
		t1817 * L_1 = (t1817 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1817_TI));
		m11955(L_1, NULL, L_0, &m11955_MI);
		((t1574_SFs*)InitializedTypeInfo(&t1574_TI)->static_fields)->f1 = L_1;
		t58 L_2 = { &m9617_MI };
		t1817 * L_3 = (t1817 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1817_TI));
		m11955(L_3, NULL, L_2, &m11955_MI);
		((t1574_SFs*)InitializedTypeInfo(&t1574_TI)->static_fields)->f2 = L_3;
		return;
	}
}
extern "C" t1351 * m9606 (t1574 * __this, MethodInfo* method)
{
	{
		t1351 * L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t2* m9607 (t1574 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" t2* m9608 (t1574 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9609_MI;
extern "C" t158* m9609 (t1574 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_2 = m11644(NULL, __this, L_0, L_1, &m11644_MI);
		return L_2;
	}
}
extern MethodInfo m9610_MI;
extern "C" void m9610 (t1574 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral414, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1106 * L_2 = p0;
		t1107  L_3 = p1;
		m11918(NULL, __this, L_2, L_3, &m11918_MI);
		return;
	}
}
extern MethodInfo m9611_MI;
extern "C" t126 * m9611 (t1574 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t126 * L_1 = (t126 *)VirtFuncInvoker3< t126 *, t2*, bool, bool >::Invoke(&m9612_MI, __this, L_0, 0, 0);
		return L_1;
	}
}
extern "C" t126 * m9612 (t1574 * __this, t2* p0, bool p1, bool p2, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1757, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_4 = m331(NULL, L_2, L_3, &m331_MI);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		t570 * L_5 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_5, (t2*) &_stringLiteral2037, &m2949_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0026:
	{
		t1351 * L_6 = (__this->f4);
		t2* L_7 = p0;
		bool L_8 = p1;
		bool L_9 = p2;
		t126 * L_10 = m9499(L_6, __this, L_7, L_8, L_9, &m9499_MI);
		return L_10;
	}
}
extern MethodInfo m9613_MI;
extern "C" bool m9613 (t1574 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		bool L_2 = m11646(NULL, __this, L_0, L_1, &m11646_MI);
		return L_2;
	}
}
extern "C" bool m9614 (t1574 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m9615_MI;
extern "C" t2* m9615 (t1574 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" bool m9616 (t9 * __this , t126 * p0, t9 * p1, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t9 * L_0 = p1;
		V_0 = ((t2*)Castclass(L_0, (&t2_TI)));
		t2* L_1 = V_0;
		bool L_2 = m4487(L_1, (t2*) &_stringLiteral722, &m4487_MI);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		t126 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_3);
		t2* L_5 = V_0;
		t2* L_6 = V_0;
		int32_t L_7 = m2763(L_6, &m2763_MI);
		t2* L_8 = m2779(L_5, 0, ((int32_t)((int32_t)L_7-(int32_t)1)), &m2779_MI);
		bool L_9 = m4321(L_4, L_8, &m4321_MI);
		return L_9;
	}

IL_002f:
	{
		t126 * L_10 = p0;
		t2* L_11 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_10);
		t2* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_13 = m331(NULL, L_11, L_12, &m331_MI);
		return L_13;
	}
}
extern "C" bool m9617 (t9 * __this , t126 * p0, t9 * p1, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t9 * L_0 = p1;
		V_0 = ((t2*)Castclass(L_0, (&t2_TI)));
		t2* L_1 = V_0;
		bool L_2 = m4487(L_1, (t2*) &_stringLiteral722, &m4487_MI);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		t126 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_3);
		t2* L_5 = m5973(L_4, &m5973_MI);
		t2* L_6 = V_0;
		t2* L_7 = V_0;
		int32_t L_8 = m2763(L_7, &m2763_MI);
		t2* L_9 = m2779(L_6, 0, ((int32_t)((int32_t)L_8-(int32_t)1)), &m2779_MI);
		t2* L_10 = m5973(L_9, &m5973_MI);
		bool L_11 = m4321(L_5, L_10, &m4321_MI);
		return L_11;
	}

IL_0039:
	{
		t126 * L_12 = p0;
		t2* L_13 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_12);
		t2* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_15 = m7396(NULL, L_13, L_14, 1, &m7396_MI);
		return ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
	}
}
#include "t1818.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1818_TI;
#include "t1818MD.h"

#include "t1819.h"
extern MethodInfo m9618_MI;


extern "C" void m9618 (t9 * __this , t1819 * p0, t1818 * p1, MethodInfo* method)
{
	typedef void (*m9618_ftn) (t1819 *, t1818 *);
	static m9618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9618_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m9619_MI;
extern "C" t1818  m9619 (t9 * __this , t1819 * p0, MethodInfo* method)
{
	t1818  V_0 = {0};
	{
		t1819 * L_0 = p0;
		m9618(NULL, L_0, (&V_0), &m9618_MI);
		t1818  L_1 = V_0;
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1819_TI;
#include "t1819MD.h"

extern MethodInfo m9625_MI;
extern MethodInfo m2459_MI;
extern MethodInfo m9624_MI;
extern MethodInfo m9626_MI;


extern MethodInfo m9620_MI;
extern "C" void m9620 (t1819 * __this, MethodInfo* method)
{
	{
		m9560(__this, &m9560_MI);
		return;
	}
}
extern MethodInfo m9621_MI;
extern "C" int32_t m9621 (t1819 * __this, MethodInfo* method)
{
	t1818  V_0 = {0};
	{
		t1818  L_0 = m9619(NULL, __this, &m9619_MI);
		V_0 = L_0;
		int32_t L_1 = ((&V_0)->f6);
		return L_1;
	}
}
extern MethodInfo m9622_MI;
extern "C" t835 * m9622 (t1819 * __this, bool p0, MethodInfo* method)
{
	t1818  V_0 = {0};
	{
		t1818  L_0 = m9619(NULL, __this, &m9619_MI);
		V_0 = L_0;
		bool L_1 = p0;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		t835 * L_2 = ((&V_0)->f3);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		t835 * L_3 = ((&V_0)->f3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4432_MI, L_3);
		if (!L_4)
		{
			goto IL_0029;
		}
	}

IL_0021:
	{
		t835 * L_5 = ((&V_0)->f3);
		return L_5;
	}

IL_0029:
	{
		return (t835 *)NULL;
	}
}
extern MethodInfo m9623_MI;
extern "C" t126 * m9623 (t1819 * __this, MethodInfo* method)
{
	t1818  V_0 = {0};
	{
		t1818  L_0 = m9619(NULL, __this, &m9619_MI);
		V_0 = L_0;
		t126 * L_1 = ((&V_0)->f0);
		return L_1;
	}
}
extern "C" t126 * m9624 (t1819 * __this, MethodInfo* method)
{
	t1818  V_0 = {0};
	{
		t1818  L_0 = m9619(NULL, __this, &m9619_MI);
		V_0 = L_0;
		t126 * L_1 = ((&V_0)->f1);
		return L_1;
	}
}
extern "C" t2* m9625 (t1819 * __this, MethodInfo* method)
{
	t1818  V_0 = {0};
	{
		t1818  L_0 = m9619(NULL, __this, &m9619_MI);
		V_0 = L_0;
		t2* L_1 = ((&V_0)->f2);
		return L_1;
	}
}
extern "C" t2* m9626 (t1819 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9561_MI, __this);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9625_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2459(NULL, L_0, (t2*) &_stringLiteral163, L_1, &m2459_MI);
		return L_2;
	}
}
extern MethodInfo m9627_MI;
extern "C" bool m9627 (t1819 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		bool L_2 = m11646(NULL, __this, L_0, L_1, &m11646_MI);
		return L_2;
	}
}
extern MethodInfo m9628_MI;
extern "C" t158* m9628 (t1819 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_1 = m11645(NULL, __this, L_0, &m11645_MI);
		return L_1;
	}
}
extern MethodInfo m9629_MI;
extern "C" t158* m9629 (t1819 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_2 = m11644(NULL, __this, L_0, L_1, &m11644_MI);
		return L_2;
	}
}
extern MethodInfo m9630_MI;
extern "C" void m9630 (t1819 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9625_MI, __this);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9624_MI, __this);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9626_MI, __this);
		m9576(NULL, L_0, L_1, L_2, L_3, 2, &m9576_MI);
		return;
	}
}
#include "t1820.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1820_TI;
#include "t1820MD.h"

#include "t1830.h"
#include "t2126.h"
extern TypeInfo t1830_TI;
extern TypeInfo t2126_TI;
#include "t1830MD.h"
#include "t2126MD.h"
extern MethodInfo m9635_MI;
extern MethodInfo m9768_MI;
extern MethodInfo m9650_MI;
extern MethodInfo m9643_MI;
extern MethodInfo m11578_MI;
extern MethodInfo m9646_MI;
extern MethodInfo m9631_MI;
extern MethodInfo m9638_MI;
extern MethodInfo m9636_MI;
extern MethodInfo m9645_MI;
extern MethodInfo m9637_MI;
extern MethodInfo m7843_MI;


extern "C" void m9631 (t1820 * __this, MethodInfo* method)
{
	{
		m9563(__this, &m9563_MI);
		return;
	}
}
extern MethodInfo m9632_MI;
extern "C" int32_t m9632 (t1820 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9633_MI;
extern "C" t319  m9633 (t1820 * __this, MethodInfo* method)
{
	{
		t319  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9634_MI;
extern "C" t126 * m9634 (t1820 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" t126 * m9635 (t1820 * __this, bool p0, MethodInfo* method)
{
	typedef t126 * (*m9635_ftn) (t1820 *, bool);
	static m9635_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9635_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetParentType(System.Boolean)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t126 * m9636 (t1820 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = m9635(__this, 0, &m9635_MI);
		return L_0;
	}
}
extern "C" t126 * m9637 (t1820 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = m9635(__this, 1, &m9635_MI);
		return L_0;
	}
}
extern "C" t2* m9638 (t1820 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9639_MI;
extern "C" bool m9639 (t1820 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		bool L_2 = m11646(NULL, __this, L_0, L_1, &m11646_MI);
		return L_2;
	}
}
extern MethodInfo m9640_MI;
extern "C" t158* m9640 (t1820 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_1 = m11645(NULL, __this, L_0, &m11645_MI);
		return L_1;
	}
}
extern MethodInfo m9641_MI;
extern "C" t158* m9641 (t1820 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_2 = m11644(NULL, __this, L_0, L_1, &m11644_MI);
		return L_2;
	}
}
extern MethodInfo m9642_MI;
extern "C" int32_t m9642 (t1820 * __this, MethodInfo* method)
{
	typedef int32_t (*m9642_ftn) (t1820 *);
	static m9642_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9642_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetFieldOffset()");
	return _il2cpp_icall_func(__this);
}
extern "C" t9 * m9643 (t1820 * __this, t9 * p0, MethodInfo* method)
{
	typedef t9 * (*m9643_ftn) (t1820 *, t9 *);
	static m9643_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9643_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetValueInternal(System.Object)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m9644_MI;
extern "C" t9 * m9644 (t1820 * __this, t9 * p0, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4437_MI, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t9 * L_1 = p0;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		t1830 * L_2 = (t1830 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1830_TI));
		m9768(L_2, (t2*) &_stringLiteral2038, &m9768_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9565_MI, __this);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		m9650(__this, &m9650_MI);
	}

IL_0024:
	{
		t9 * L_4 = p0;
		t9 * L_5 = m9643(__this, L_4, &m9643_MI);
		return L_5;
	}
}
extern "C" t2* m9645 (t1820 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f3);
		t2* L_1 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m1251(NULL, (t2*) &_stringLiteral2039, L_0, L_1, &m1251_MI);
		return L_2;
	}
}
extern "C" void m9646 (t9 * __this , t837 * p0, t9 * p1, t9 * p2, MethodInfo* method)
{
	typedef void (*m9646_ftn) (t837 *, t9 *, t9 *);
	static m9646_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9646_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m9647_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m9647 (t1820 * __this, t9 * p0, t9 * p1, int32_t p2, t939 * p3, t907 * p4, MethodInfo* method)
{
	static bool m9647_init;
	if (!m9647_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9647_init = true;
	}
	t9 * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4437_MI, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t9 * L_1 = p0;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		t1830 * L_2 = (t1830 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1830_TI));
		m9768(L_2, (t2*) &_stringLiteral2038, &m9768_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9565_MI, __this);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		t2126 * L_4 = (t2126 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2126_TI));
		m11578(L_4, (t2*) &_stringLiteral2040, &m11578_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		t939 * L_5 = p3;
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		t939 * L_6 = m9549(NULL, &m9549_MI);
		p3 = L_6;
	}

IL_0036:
	{
		m9650(__this, &m9650_MI);
		t9 * L_7 = p1;
		if (!L_7)
		{
			goto IL_0090;
		}
	}
	{
		t939 * L_8 = p3;
		t9 * L_9 = p1;
		t126 * L_10 = (__this->f3);
		t907 * L_11 = p4;
		t9 * L_12 = (t9 *)VirtFuncInvoker3< t9 *, t9 *, t126 *, t907 * >::Invoke(&m12064_MI, L_8, L_9, L_10, L_11);
		V_0 = L_12;
		t9 * L_13 = V_0;
		if (L_13)
		{
			goto IL_008b;
		}
	}
	{
		t158* L_14 = ((t158*)SZArrayNew(t158_TI_var, 4));
		ArrayElementTypeCheck (L_14, (t2*) &_stringLiteral2041);
		*((t9 **)(t9 **)SZArrayLdElema(L_14, 0)) = (t9 *)(t2*) &_stringLiteral2041;
		t158* L_15 = L_14;
		t9 * L_16 = p1;
		t126 * L_17 = m2550(L_16, &m2550_MI);
		ArrayElementTypeCheck (L_15, L_17);
		*((t9 **)(t9 **)SZArrayLdElema(L_15, 1)) = (t9 *)L_17;
		t158* L_18 = L_15;
		ArrayElementTypeCheck (L_18, (t2*) &_stringLiteral2042);
		*((t9 **)(t9 **)SZArrayLdElema(L_18, 2)) = (t9 *)(t2*) &_stringLiteral2042;
		t158* L_19 = L_18;
		t126 * L_20 = (__this->f3);
		ArrayElementTypeCheck (L_19, L_20);
		*((t9 **)(t9 **)SZArrayLdElema(L_19, 3)) = (t9 *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_21 = m515(NULL, L_19, &m515_MI);
		t570 * L_22 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_22, L_21, (t2*) &_stringLiteral2043, &m5761_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_008b:
	{
		t9 * L_23 = V_0;
		p1 = L_23;
	}

IL_0090:
	{
		t9 * L_24 = p0;
		t9 * L_25 = p1;
		m9646(NULL, __this, L_24, L_25, &m9646_MI);
		return;
	}
}
extern MethodInfo m9648_MI;
extern "C" t1820 * m9648 (t1820 * __this, t2* p0, MethodInfo* method)
{
	t1820 * V_0 = {0};
	{
		t1820 * L_0 = (t1820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1820_TI));
		m9631(L_0, &m9631_MI);
		V_0 = L_0;
		t1820 * L_1 = V_0;
		t2* L_2 = p0;
		L_1->f2 = L_2;
		t1820 * L_3 = V_0;
		t126 * L_4 = (__this->f3);
		L_3->f3 = L_4;
		t1820 * L_5 = V_0;
		int32_t L_6 = (__this->f4);
		L_5->f4 = L_6;
		t1820 * L_7 = V_0;
		t58 L_8 = (__this->f0);
		L_7->f0 = L_8;
		t1820 * L_9 = V_0;
		t319  L_10 = (__this->f1);
		L_9->f1 = L_10;
		t1820 * L_11 = V_0;
		return L_11;
	}
}
extern MethodInfo m9649_MI;
extern "C" void m9649 (t1820 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9638_MI, __this);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9636_MI, __this);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9645_MI, __this);
		m9576(NULL, L_0, L_1, L_2, L_3, 4, &m9576_MI);
		return;
	}
}
extern "C" void m9650 (t1820 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9637_MI, __this);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7843_MI, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		t1347 * L_2 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_2, (t2*) &_stringLiteral2044, &m5755_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		return;
	}
}
#include "t1821.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1821_TI;
#include "t1821MD.h"

extern MethodInfo m9663_MI;


extern MethodInfo m9651_MI;
extern "C" void m9651 (t1821 * __this, MethodInfo* method)
{
	{
		m9663(__this, &m9663_MI);
		t1347 * L_0 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_0, &m5762_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9652_MI;
extern "C" t126 * m9652 (t1821 * __this, MethodInfo* method)
{
	typedef t126 * (*m9652_ftn) (t1821 *);
	static m9652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9652_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
#include "t1822.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1822_TI;
#include "t1822MD.h"

#include "t1823MD.h"
extern MethodInfo m9692_MI;


extern MethodInfo m9653_MI;
extern "C" void m9653 (t1822 * __this, MethodInfo* method)
{
	{
		m9692(__this, &m9692_MI);
		t1347 * L_0 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_0, &m5762_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9654_MI;
extern "C" t126 * m9654 (t1822 * __this, MethodInfo* method)
{
	typedef t126 * (*m9654_ftn) (t1822 *);
	static m9654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9654_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericCMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
#include "t1824.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1824_TI;
#include "t1824MD.h"

extern MethodInfo m9655_MI;
extern MethodInfo m9656_MI;
extern MethodInfo m9661_MI;


extern "C" void m9655 (t9 * __this , t58 p0, t1824 * p1, MethodInfo* method)
{
	typedef void (*m9655_ftn) (t58, t1824 *);
	static m9655_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9655_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" t1824  m9656 (t9 * __this , t58 p0, MethodInfo* method)
{
	t1824  V_0 = {0};
	{
		t58 L_0 = p0;
		m9655(NULL, L_0, (&V_0), &m9655_MI);
		t1824  L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m9657_MI;
extern "C" t126 * m9657 (t9 * __this , t58 p0, MethodInfo* method)
{
	t1824  V_0 = {0};
	{
		t58 L_0 = p0;
		t1824  L_1 = m9656(NULL, L_0, &m9656_MI);
		V_0 = L_1;
		t126 * L_2 = ((&V_0)->f0);
		return L_2;
	}
}
extern MethodInfo m9658_MI;
extern "C" t126 * m9658 (t9 * __this , t58 p0, MethodInfo* method)
{
	t1824  V_0 = {0};
	{
		t58 L_0 = p0;
		t1824  L_1 = m9656(NULL, L_0, &m9656_MI);
		V_0 = L_1;
		t126 * L_2 = ((&V_0)->f1);
		return L_2;
	}
}
extern MethodInfo m9659_MI;
extern "C" int32_t m9659 (t9 * __this , t58 p0, MethodInfo* method)
{
	t1824  V_0 = {0};
	{
		t58 L_0 = p0;
		t1824  L_1 = m9656(NULL, L_0, &m9656_MI);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->f2);
		return L_2;
	}
}
extern MethodInfo m9660_MI;
extern "C" int32_t m9660 (t9 * __this , t58 p0, MethodInfo* method)
{
	t1824  V_0 = {0};
	{
		t58 L_0 = p0;
		t1824  L_1 = m9656(NULL, L_0, &m9656_MI);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->f4);
		return L_2;
	}
}
extern "C" t934* m9661 (t9 * __this , t58 p0, t567 * p1, MethodInfo* method)
{
	typedef t934* (*m9661_ftn) (t58, t567 *);
	static m9661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9661_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m9662_MI;
extern "C" t934* m9662 (t9 * __this , t58 p0, t567 * p1, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		t567 * L_1 = p1;
		t934* L_2 = m9661(NULL, L_0, L_1, &m9661_MI);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1581.h"
#include "t1854.h"
extern TypeInfo t1764_TI;
extern TypeInfo t2082_TI;
extern TypeInfo t1854_TI;
extern TypeInfo t1581_TI;
#include "t1854MD.h"
extern MethodInfo m11828_MI;
extern MethodInfo m9665_MI;
extern MethodInfo m9690_MI;
extern MethodInfo m9688_MI;
extern MethodInfo m9676_MI;
extern MethodInfo m9666_MI;
extern MethodInfo m9774_MI;
extern MethodInfo m9691_MI;
extern MethodInfo m9670_MI;
extern MethodInfo m9770_MI;
extern MethodInfo m9833_MI;
extern MethodInfo m9681_MI;
extern MethodInfo m7794_MI;
extern MethodInfo m4534_MI;
extern MethodInfo m7850_MI;
extern MethodInfo m9668_MI;
extern MethodInfo m9683_MI;
extern MethodInfo m9677_MI;
extern MethodInfo m9669_MI;
extern MethodInfo m9674_MI;
extern MethodInfo m9689_MI;
extern MethodInfo m9675_MI;
extern MethodInfo m9684_MI;
extern MethodInfo m11185_MI;
extern MethodInfo m9687_MI;


extern "C" void m9663 (t1767 * __this, MethodInfo* method)
{
	{
		m9593(__this, &m9593_MI);
		return;
	}
}
extern "C" void m9664 (t1767 * __this, t1764  p0, MethodInfo* method)
{
	{
		m9593(__this, &m9593_MI);
		t58 L_0 = m11830((&p0), &m11830_MI);
		__this->f0 = L_0;
		return;
	}
}
extern "C" t2* m9665 (t9 * __this , t920 * p0, MethodInfo* method)
{
	typedef t2* (*m9665_ftn) (t920 *);
	static m9665_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9665_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)");
	return _il2cpp_icall_func(p0);
}
extern "C" t1767 * m9666 (t9 * __this , t1767 * p0, MethodInfo* method)
{
	typedef t1767 * (*m9666_ftn) (t1767 *);
	static m9666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9666_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m9667_MI;
extern "C" t835 * m9667 (t1767 * __this, MethodInfo* method)
{
	{
		t1767 * L_0 = m9666(NULL, __this, &m9666_MI);
		return L_0;
	}
}
extern "C" t126 * m9668 (t1767 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		t126 * L_1 = m9658(NULL, L_0, &m9658_MI);
		return L_1;
	}
}
extern TypeInfo* t934_TI_var;
extern "C" t934* m9669 (t1767 * __this, MethodInfo* method)
{
	static bool m9669_init;
	if (!m9669_init)
	{
		t934_TI_var = il2cpp_codegen_class_from_type(&t934_0_0_0);
		m9669_init = true;
	}
	t934* V_0 = {0};
	t934* V_1 = {0};
	{
		t58 L_0 = (__this->f0);
		t934* L_1 = m9662(NULL, L_0, __this, &m9662_MI);
		V_0 = L_1;
		t934* L_2 = V_0;
		V_1 = ((t934*)SZArrayNew(t934_TI_var, (((int32_t)(((t121 *)L_2)->max_length)))));
		t934* L_3 = V_0;
		t934* L_4 = V_1;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5944_MI, L_3, (t121 *)(t121 *)L_4, 0);
		t934* L_5 = V_1;
		return L_5;
	}
}
extern "C" t9 * m9670 (t1767 * __this, t9 * p0, t158* p1, t138 ** p2, MethodInfo* method)
{
	typedef t9 * (*m9670_ftn) (t1767 *, t9 *, t158*, t138 **);
	static m9670_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9670_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m9671_MI;
extern "C" t9 * m9671 (t1767 * __this, t9 * p0, int32_t p1, t939 * p2, t158* p3, t907 * p4, MethodInfo* method)
{
	t934* V_0 = {0};
	int32_t V_1 = 0;
	t138 * V_2 = {0};
	t9 * V_3 = {0};
	t138 * V_4 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t939 * L_0 = p2;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		t939 * L_1 = m9549(NULL, &m9549_MI);
		p2 = L_1;
	}

IL_000c:
	{
		t58 L_2 = (__this->f0);
		t934* L_3 = m9662(NULL, L_2, __this, &m9662_MI);
		V_0 = L_3;
		t158* L_4 = p3;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		t934* L_5 = V_0;
		if ((((int32_t)(((t121 *)L_5)->max_length))))
		{
			goto IL_002f;
		}
	}

IL_0022:
	{
		t158* L_6 = p3;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		t158* L_7 = p3;
		t934* L_8 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_8)->max_length))))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		t1832 * L_9 = (t1832 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1832_TI));
		m9774(L_9, (t2*) &_stringLiteral2045, &m9774_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_003a:
	{
		int32_t L_10 = p1;
		if (((int32_t)((int32_t)L_10&(int32_t)((int32_t)65536))))
		{
			goto IL_005d;
		}
	}
	{
		t939 * L_11 = p2;
		t158* L_12 = p3;
		t934* L_13 = V_0;
		t907 * L_14 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		bool L_15 = m9550(NULL, L_11, L_12, L_13, L_14, &m9550_MI);
		if (L_15)
		{
			goto IL_005b;
		}
	}
	{
		t570 * L_16 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_16, (t2*) &_stringLiteral2046, &m2949_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_005b:
	{
		goto IL_0089;
	}

IL_005d:
	{
		V_1 = 0;
		goto IL_0083;
	}

IL_0061:
	{
		t158* L_17 = p3;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		t126 * L_20 = m2550((*(t9 **)(t9 **)SZArrayLdElema(L_17, L_19)), &m2550_MI);
		t934* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		t126 * L_24 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_21, L_23)));
		if ((((t9*)(t126 *)L_20) == ((t9*)(t126 *)L_24)))
		{
			goto IL_007f;
		}
	}
	{
		t570 * L_25 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_25, (t2*) &_stringLiteral2045, &m2949_MI);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_007f:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_27 = V_1;
		t934* L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((t121 *)L_28)->max_length))))))
		{
			goto IL_0061;
		}
	}

IL_0089:
	{
		bool L_29 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9691_MI, __this);
		if (!L_29)
		{
			goto IL_009c;
		}
	}
	{
		t1347 * L_30 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_30, (t2*) &_stringLiteral2047, &m5755_MI);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_009c:
	{
		V_3 = NULL;
	}

IL_009e:
	try
	{ // begin try (depth: 1)
		t9 * L_31 = p0;
		t158* L_32 = p3;
		t9 * L_33 = m9670(__this, L_31, L_32, (&V_2), &m9670_MI);
		V_3 = L_33;
		goto IL_00c2;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t2082_TI, e.ex->object.klass))
			goto CATCH_00ac;
		if(il2cpp_codegen_class_is_assignable_from (&t2129_TI, e.ex->object.klass))
			goto CATCH_00b1;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_00b6;
		throw e;
	}

CATCH_00ac:
	{ // begin catch(System.Threading.ThreadAbortException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_00c2;
	} // end catch (depth: 1)

CATCH_00b1:
	{ // begin catch(System.MethodAccessException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_00c2;
	} // end catch (depth: 1)

CATCH_00b6:
	{ // begin catch(System.Exception)
		V_4 = ((t138 *)__exception_local);
		t138 * L_34 = V_4;
		t1831 * L_35 = (t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1831_TI));
		m9770(L_35, L_34, &m9770_MI);
		il2cpp_codegen_raise_exception(L_35);
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00c2:
	{
		t138 * L_36 = V_2;
		if (!L_36)
		{
			goto IL_00c7;
		}
	}
	{
		t138 * L_37 = V_2;
		il2cpp_codegen_raise_exception(L_37);
	}

IL_00c7:
	{
		t9 * L_38 = V_3;
		return L_38;
	}
}
extern MethodInfo m9672_MI;
extern "C" t1764  m9672 (t1767 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		t1764  L_1 = {0};
		m11828(&L_1, L_0, &m11828_MI);
		return L_1;
	}
}
extern MethodInfo m9673_MI;
extern "C" int32_t m9673 (t1767 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		int32_t L_1 = m9659(NULL, L_0, &m9659_MI);
		return L_1;
	}
}
extern "C" int32_t m9674 (t1767 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		int32_t L_1 = m9660(NULL, L_0, &m9660_MI);
		return L_1;
	}
}
extern "C" t126 * m9675 (t1767 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" t126 * m9676 (t1767 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		t126 * L_1 = m9657(NULL, L_0, &m9657_MI);
		return L_1;
	}
}
extern "C" t2* m9677 (t1767 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t2* L_1 = (__this->f1);
		return L_1;
	}

IL_000f:
	{
		t2* L_2 = m9665(NULL, __this, &m9665_MI);
		return L_2;
	}
}
extern MethodInfo m9678_MI;
extern "C" bool m9678 (t1767 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		bool L_2 = m11646(NULL, __this, L_0, L_1, &m11646_MI);
		return L_2;
	}
}
extern MethodInfo m9679_MI;
extern "C" t158* m9679 (t1767 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_1 = m11645(NULL, __this, L_0, &m11645_MI);
		return L_1;
	}
}
extern MethodInfo m9680_MI;
extern "C" t158* m9680 (t1767 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_2 = m11644(NULL, __this, L_0, L_1, &m11644_MI);
		return L_2;
	}
}
extern "C" t1581 * m9681 (t9 * __this , t58 p0, MethodInfo* method)
{
	typedef t1581 * (*m9681_ftn) (t58);
	static m9681_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9681_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m9682_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m9682 (t1767 * __this, MethodInfo* method)
{
	static bool m9682_init;
	if (!m9682_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9682_init = true;
	}
	int32_t V_0 = 0;
	t1824  V_1 = {0};
	t158* V_2 = {0};
	t1581 * V_3 = {0};
	{
		V_0 = 0;
		t58 L_0 = (__this->f0);
		t1824  L_1 = m9656(NULL, L_0, &m9656_MI);
		V_1 = L_1;
		int32_t L_2 = ((&V_1)->f3);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)128))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_4 = ((&V_1)->f2);
		if (!((int32_t)((int32_t)L_4&(int32_t)((int32_t)8192))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0039;
		}
	}
	{
		return (t158*)NULL;
	}

IL_0039:
	{
		int32_t L_7 = V_0;
		V_2 = ((t158*)SZArrayNew(t158_TI_var, L_7));
		V_0 = 0;
		int32_t L_8 = ((&V_1)->f3);
		if (!((int32_t)((int32_t)L_8&(int32_t)((int32_t)128))))
		{
			goto IL_005d;
		}
	}
	{
		t158* L_9 = V_2;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
		t1854 * L_12 = (t1854 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1854_TI));
		m9833(L_12, &m9833_MI);
		ArrayElementTypeCheck (L_9, L_12);
		*((t9 **)(t9 **)SZArrayLdElema(L_9, L_11)) = (t9 *)L_12;
	}

IL_005d:
	{
		int32_t L_13 = ((&V_1)->f2);
		if (!((int32_t)((int32_t)L_13&(int32_t)((int32_t)8192))))
		{
			goto IL_0096;
		}
	}
	{
		t58 L_14 = (__this->f0);
		t1581 * L_15 = m9681(NULL, L_14, &m9681_MI);
		V_3 = L_15;
		int32_t L_16 = ((&V_1)->f3);
		if (!((int32_t)((int32_t)L_16&(int32_t)((int32_t)128))))
		{
			goto IL_008e;
		}
	}
	{
		t1581 * L_17 = V_3;
		L_17->f5 = 1;
	}

IL_008e:
	{
		t158* L_18 = V_2;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		t1581 * L_21 = V_3;
		ArrayElementTypeCheck (L_18, L_21);
		*((t9 **)(t9 **)SZArrayLdElema(L_18, L_20)) = (t9 *)L_21;
	}

IL_0096:
	{
		t158* L_22 = V_2;
		return L_22;
	}
}
extern "C" bool m9683 (t9 * __this , t126 * p0, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		t126 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7794_MI, L_0);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		t126 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7800_MI, L_2);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		t126 * L_4 = p0;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12007_MI, L_4);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4534_MI, L_5);
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		t126 * L_7 = p0;
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12007_MI, L_7);
		bool L_9 = m7850(L_8, &m7850_MI);
		G_B5_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B5_0 = 0;
	}

IL_002e:
	{
		G_B7_0 = G_B5_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B7_0 = 1;
	}

IL_0031:
	{
		G_B9_0 = G_B7_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B9_0 = 0;
	}

IL_0034:
	{
		return G_B9_0;
	}
}
extern "C" t2* m9684 (t1767 * __this, MethodInfo* method)
{
	t328 * V_0 = {0};
	t126 * V_1 = {0};
	t152* V_2 = {0};
	int32_t V_3 = 0;
	t934* V_4 = {0};
	int32_t V_5 = 0;
	t126 * V_6 = {0};
	bool V_7 = false;
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m1203(L_0, &m1203_MI);
		V_0 = L_0;
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9668_MI, __this);
		V_1 = L_1;
		t126 * L_2 = V_1;
		bool L_3 = m9683(NULL, L_2, &m9683_MI);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		t328 * L_4 = V_0;
		t126 * L_5 = V_1;
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7840_MI, L_5);
		m1207(L_4, L_6, &m1207_MI);
		goto IL_0031;
	}

IL_0024:
	{
		t328 * L_7 = V_0;
		t126 * L_8 = V_1;
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_8);
		m1207(L_7, L_9, &m1207_MI);
	}

IL_0031:
	{
		t328 * L_10 = V_0;
		m1207(L_10, (t2*) &_stringLiteral163, &m1207_MI);
		t328 * L_11 = V_0;
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9677_MI, __this);
		m1207(L_11, L_12, &m1207_MI);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9690_MI, __this);
		if (!L_13)
		{
			goto IL_009e;
		}
	}
	{
		t152* L_14 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9688_MI, __this);
		V_2 = L_14;
		t328 * L_15 = V_0;
		m1207(L_15, (t2*) &_stringLiteral340, &m1207_MI);
		V_3 = 0;
		goto IL_008c;
	}

IL_0069:
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		t328 * L_17 = V_0;
		m1207(L_17, (t2*) &_stringLiteral338, &m1207_MI);
	}

IL_0079:
	{
		t328 * L_18 = V_0;
		t152* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = L_20;
		t2* L_22 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, (*(t126 **)(t126 **)SZArrayLdElema(L_19, L_21)));
		m1207(L_18, L_22, &m1207_MI);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_008c:
	{
		int32_t L_24 = V_3;
		t152* L_25 = V_2;
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((t121 *)L_25)->max_length))))))
		{
			goto IL_0069;
		}
	}
	{
		t328 * L_26 = V_0;
		m1207(L_26, (t2*) &_stringLiteral341, &m1207_MI);
	}

IL_009e:
	{
		t328 * L_27 = V_0;
		m1207(L_27, (t2*) &_stringLiteral383, &m1207_MI);
		t934* L_28 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m9669_MI, __this);
		V_4 = L_28;
		V_5 = 0;
		goto IL_0127;
	}

IL_00b7:
	{
		int32_t L_29 = V_5;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		t328 * L_30 = V_0;
		m1207(L_30, (t2*) &_stringLiteral384, &m1207_MI);
	}

IL_00c8:
	{
		t934* L_31 = V_4;
		int32_t L_32 = V_5;
		int32_t L_33 = L_32;
		t126 * L_34 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_31, L_33)));
		V_6 = L_34;
		t126 * L_35 = V_6;
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7793_MI, L_35);
		V_7 = L_36;
		bool L_37 = V_7;
		if (!L_37)
		{
			goto IL_00ea;
		}
	}
	{
		t126 * L_38 = V_6;
		t126 * L_39 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12007_MI, L_38);
		V_6 = L_39;
	}

IL_00ea:
	{
		t126 * L_40 = V_6;
		bool L_41 = m9683(NULL, L_40, &m9683_MI);
		if (!L_41)
		{
			goto IL_0103;
		}
	}
	{
		t328 * L_42 = V_0;
		t126 * L_43 = V_6;
		t2* L_44 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7840_MI, L_43);
		m1207(L_42, L_44, &m1207_MI);
		goto IL_0111;
	}

IL_0103:
	{
		t328 * L_45 = V_0;
		t126 * L_46 = V_6;
		t2* L_47 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_46);
		m1207(L_45, L_47, &m1207_MI);
	}

IL_0111:
	{
		bool L_48 = V_7;
		if (!L_48)
		{
			goto IL_0121;
		}
	}
	{
		t328 * L_49 = V_0;
		m1207(L_49, (t2*) &_stringLiteral1455, &m1207_MI);
	}

IL_0121:
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)((int32_t)L_50+(int32_t)1));
	}

IL_0127:
	{
		int32_t L_51 = V_5;
		t934* L_52 = V_4;
		if ((((int32_t)L_51) < ((int32_t)(((int32_t)(((t121 *)L_52)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_53 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9674_MI, __this);
		if (!((int32_t)((int32_t)L_53&(int32_t)2)))
		{
			goto IL_0158;
		}
	}
	{
		t934* L_54 = V_4;
		if ((((int32_t)(((int32_t)(((t121 *)L_54)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_014c;
		}
	}
	{
		t328 * L_55 = V_0;
		m1207(L_55, (t2*) &_stringLiteral384, &m1207_MI);
	}

IL_014c:
	{
		t328 * L_56 = V_0;
		m1207(L_56, (t2*) &_stringLiteral2048, &m1207_MI);
	}

IL_0158:
	{
		t328 * L_57 = V_0;
		m1207(L_57, (t2*) &_stringLiteral143, &m1207_MI);
		t328 * L_58 = V_0;
		t2* L_59 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_58);
		return L_59;
	}
}
extern MethodInfo m9685_MI;
extern "C" void m9685 (t1767 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	t152* V_0 = {0};
	t152* G_B4_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9690_MI, __this);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9689_MI, __this);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		t152* L_2 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9688_MI, __this);
		G_B4_0 = L_2;
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = ((t152*)(NULL));
	}

IL_0019:
	{
		V_0 = G_B4_0;
		t1106 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9677_MI, __this);
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9675_MI, __this);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9684_MI, __this);
		t152* L_7 = V_0;
		m9577(NULL, L_3, L_4, L_5, L_6, 8, L_7, &m9577_MI);
		return;
	}
}
extern MethodInfo m9686_MI;
extern "C" t835 * m9686 (t1767 * __this, t152* p0, MethodInfo* method)
{
	t126 * V_0 = {0};
	t152* V_1 = {0};
	int32_t V_2 = 0;
	t835 * V_3 = {0};
	{
		t152* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2049, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t152* L_2 = p0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		t152* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		V_0 = (*(t126 **)(t126 **)SZArrayLdElema(L_3, L_5));
		t126 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		t132 * L_7 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11185(L_7, &m11185_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0021:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_9 = V_2;
		t152* L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((t121 *)L_10)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		t152* L_11 = p0;
		t835 * L_12 = m9687(__this, L_11, &m9687_MI);
		V_3 = L_12;
		t835 * L_13 = V_3;
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		t152* L_14 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9688_MI, __this);
		int32_t L_15 = (((int32_t)(((t121 *)L_14)->max_length)));
		t9 * L_16 = Box(InitializedTypeInfo(&t125_TI), &L_15);
		t152* L_17 = p0;
		int32_t L_18 = (((int32_t)(((t121 *)L_17)->max_length)));
		t9 * L_19 = Box(InitializedTypeInfo(&t125_TI), &L_18);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_20 = m1251(NULL, (t2*) &_stringLiteral2050, L_16, L_19, &m1251_MI);
		t570 * L_21 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_21, L_20, &m2949_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_005b:
	{
		t835 * L_22 = V_3;
		return L_22;
	}
}
extern "C" t835 * m9687 (t1767 * __this, t152* p0, MethodInfo* method)
{
	typedef t835 * (*m9687_ftn) (t1767 *, t152*);
	static m9687_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9687_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t152* m9688 (t1767 * __this, MethodInfo* method)
{
	typedef t152* (*m9688_ftn) (t1767 *);
	static m9688_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9688_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetGenericArguments()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m9689 (t1767 * __this, MethodInfo* method)
{
	typedef bool (*m9689_ftn) (t1767 *);
	static m9689_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9689_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethodDefinition()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m9690 (t1767 * __this, MethodInfo* method)
{
	typedef bool (*m9690_ftn) (t1767 *);
	static m9690_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9690_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethod()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m9691 (t1767 * __this, MethodInfo* method)
{
	t126 * V_0 = {0};
	t152* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9690_MI, __this);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		t152* L_1 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9688_MI, __this);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0025;
	}

IL_0013:
	{
		t152* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_0 = (*(t126 **)(t126 **)SZArrayLdElema(L_2, L_4));
		t126 * L_5 = V_0;
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7843_MI, L_5);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_8 = V_2;
		t152* L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((t121 *)L_9)->max_length))))))
		{
			goto IL_0013;
		}
	}

IL_002b:
	{
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9676_MI, __this);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7843_MI, L_10);
		return L_11;
	}
}
#include "t1823.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1823_TI;

#include "t2127.h"
extern TypeInfo t2127_TI;
#include "t2127MD.h"
extern MethodInfo m9693_MI;
extern MethodInfo m9701_MI;
extern MethodInfo m11615_MI;
extern MethodInfo m7792_MI;
extern MethodInfo m9694_MI;
extern MethodInfo m9695_MI;
extern MethodInfo m9702_MI;
extern MethodInfo m9699_MI;
extern MethodInfo m9700_MI;
extern MethodInfo m9706_MI;


extern "C" void m9692 (t1823 * __this, MethodInfo* method)
{
	{
		m9553(__this, &m9553_MI);
		return;
	}
}
extern "C" t934* m9693 (t1823 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f2);
		t934* L_1 = m9662(NULL, L_0, __this, &m9662_MI);
		return L_1;
	}
}
extern "C" t9 * m9694 (t1823 * __this, t9 * p0, t158* p1, t138 ** p2, MethodInfo* method)
{
	typedef t9 * (*m9694_ftn) (t1823 *, t9 *, t158*, t138 **);
	static m9694_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9694_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern "C" t9 * m9695 (t1823 * __this, t9 * p0, int32_t p1, t939 * p2, t158* p3, t907 * p4, MethodInfo* method)
{
	t934* V_0 = {0};
	int32_t V_1 = 0;
	t138 * V_2 = {0};
	t9 * V_3 = {0};
	t138 * V_4 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	t9 * G_B31_0 = {0};
	{
		t939 * L_0 = p2;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		t939 * L_1 = m9549(NULL, &m9549_MI);
		p2 = L_1;
	}

IL_000c:
	{
		t934* L_2 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m9693_MI, __this);
		V_0 = L_2;
		t158* L_3 = p3;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		t934* L_4 = V_0;
		if ((((int32_t)(((t121 *)L_4)->max_length))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		t158* L_5 = p3;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		t158* L_6 = p3;
		t934* L_7 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_6)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_7)->max_length))))))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		t1832 * L_8 = (t1832 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1832_TI));
		m9774(L_8, (t2*) &_stringLiteral2045, &m9774_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0034:
	{
		int32_t L_9 = p1;
		if (((int32_t)((int32_t)L_9&(int32_t)((int32_t)65536))))
		{
			goto IL_0057;
		}
	}
	{
		t939 * L_10 = p2;
		t158* L_11 = p3;
		t934* L_12 = V_0;
		t907 * L_13 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		bool L_14 = m9550(NULL, L_10, L_11, L_12, L_13, &m9550_MI);
		if (L_14)
		{
			goto IL_0055;
		}
	}
	{
		t570 * L_15 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_15, (t2*) &_stringLiteral2046, &m2949_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0055:
	{
		goto IL_0083;
	}

IL_0057:
	{
		V_1 = 0;
		goto IL_007d;
	}

IL_005b:
	{
		t158* L_16 = p3;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		t126 * L_19 = m2550((*(t9 **)(t9 **)SZArrayLdElema(L_16, L_18)), &m2550_MI);
		t934* L_20 = V_0;
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		t126 * L_23 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_20, L_22)));
		if ((((t9*)(t126 *)L_19) == ((t9*)(t126 *)L_23)))
		{
			goto IL_0079;
		}
	}
	{
		t570 * L_24 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_24, (t2*) &_stringLiteral2045, &m2949_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_0079:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_007d:
	{
		int32_t L_26 = V_1;
		t934* L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)(((t121 *)L_27)->max_length))))))
		{
			goto IL_005b;
		}
	}

IL_0083:
	{
		t9 * L_28 = p0;
		if (L_28)
		{
			goto IL_00ae;
		}
	}
	{
		t126 * L_29 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9701_MI, __this);
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7843_MI, L_29);
		if (!L_30)
		{
			goto IL_00ae;
		}
	}
	{
		t126 * L_31 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9701_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_32 = m2459(NULL, (t2*) &_stringLiteral2051, L_31, (t2*) &_stringLiteral2052, &m2459_MI);
		t2127 * L_33 = (t2127 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2127_TI));
		m11615(L_33, L_32, &m11615_MI);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_00ae:
	{
		int32_t L_34 = p1;
		if (!((int32_t)((int32_t)L_34&(int32_t)((int32_t)512))))
		{
			goto IL_00da;
		}
	}
	{
		t126 * L_35 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9701_MI, __this);
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7792_MI, L_35);
		if (!L_36)
		{
			goto IL_00da;
		}
	}
	{
		t126 * L_37 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9701_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_38 = m590(NULL, (t2*) &_stringLiteral2053, L_37, &m590_MI);
		t2127 * L_39 = (t2127 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2127_TI));
		m11615(L_39, L_38, &m11615_MI);
		il2cpp_codegen_raise_exception(L_39);
	}

IL_00da:
	{
		V_2 = (t138 *)NULL;
		V_3 = NULL;
	}

IL_00de:
	try
	{ // begin try (depth: 1)
		t9 * L_40 = p0;
		t158* L_41 = p3;
		t9 * L_42 = m9694(__this, L_40, L_41, (&V_2), &m9694_MI);
		V_3 = L_42;
		goto IL_00fd;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t2129_TI, e.ex->object.klass))
			goto CATCH_00ec;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_00f1;
		throw e;
	}

CATCH_00ec:
	{ // begin catch(System.MethodAccessException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_00fd;
	} // end catch (depth: 1)

CATCH_00f1:
	{ // begin catch(System.Exception)
		V_4 = ((t138 *)__exception_local);
		t138 * L_43 = V_4;
		t1831 * L_44 = (t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1831_TI));
		m9770(L_44, L_43, &m9770_MI);
		il2cpp_codegen_raise_exception(L_44);
		goto IL_00fd;
	} // end catch (depth: 1)

IL_00fd:
	{
		t138 * L_45 = V_2;
		if (!L_45)
		{
			goto IL_0102;
		}
	}
	{
		t138 * L_46 = V_2;
		il2cpp_codegen_raise_exception(L_46);
	}

IL_0102:
	{
		t9 * L_47 = p0;
		if (L_47)
		{
			goto IL_0108;
		}
	}
	{
		t9 * L_48 = V_3;
		G_B31_0 = L_48;
		goto IL_0109;
	}

IL_0108:
	{
		G_B31_0 = NULL;
	}

IL_0109:
	{
		return G_B31_0;
	}
}
extern MethodInfo m9696_MI;
extern "C" t9 * m9696 (t1823 * __this, int32_t p0, t939 * p1, t158* p2, t907 * p3, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t939 * L_1 = p1;
		t158* L_2 = p2;
		t907 * L_3 = p3;
		t9 * L_4 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t939 *, t158*, t907 * >::Invoke(&m9695_MI, __this, NULL, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
extern MethodInfo m9697_MI;
extern "C" t1764  m9697 (t1823 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f2);
		t1764  L_1 = {0};
		m11828(&L_1, L_0, &m11828_MI);
		return L_1;
	}
}
extern MethodInfo m9698_MI;
extern "C" int32_t m9698 (t1823 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f2);
		int32_t L_1 = m9659(NULL, L_0, &m9659_MI);
		return L_1;
	}
}
extern "C" int32_t m9699 (t1823 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f2);
		int32_t L_1 = m9660(NULL, L_0, &m9660_MI);
		return L_1;
	}
}
extern "C" t126 * m9700 (t1823 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t126 * m9701 (t1823 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f2);
		t126 * L_1 = m9657(NULL, L_0, &m9657_MI);
		return L_1;
	}
}
extern "C" t2* m9702 (t1823 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t2* L_1 = (__this->f3);
		return L_1;
	}

IL_000f:
	{
		t2* L_2 = m9665(NULL, __this, &m9665_MI);
		return L_2;
	}
}
extern MethodInfo m9703_MI;
extern "C" bool m9703 (t1823 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		bool L_2 = m11646(NULL, __this, L_0, L_1, &m11646_MI);
		return L_2;
	}
}
extern MethodInfo m9704_MI;
extern "C" t158* m9704 (t1823 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_1 = m11645(NULL, __this, L_0, &m11645_MI);
		return L_1;
	}
}
extern MethodInfo m9705_MI;
extern "C" t158* m9705 (t1823 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_2 = m11644(NULL, __this, L_0, L_1, &m11644_MI);
		return L_2;
	}
}
extern "C" t2* m9706 (t1823 * __this, MethodInfo* method)
{
	t328 * V_0 = {0};
	t934* V_1 = {0};
	int32_t V_2 = 0;
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m1203(L_0, &m1203_MI);
		V_0 = L_0;
		t328 * L_1 = V_0;
		m1207(L_1, (t2*) &_stringLiteral2054, &m1207_MI);
		t328 * L_2 = V_0;
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9702_MI, __this);
		m1207(L_2, L_3, &m1207_MI);
		t328 * L_4 = V_0;
		m1207(L_4, (t2*) &_stringLiteral383, &m1207_MI);
		t934* L_5 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m9693_MI, __this);
		V_1 = L_5;
		V_2 = 0;
		goto IL_005e;
	}

IL_0036:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		t328 * L_7 = V_0;
		m1207(L_7, (t2*) &_stringLiteral384, &m1207_MI);
	}

IL_0046:
	{
		t328 * L_8 = V_0;
		t934* L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		t126 * L_12 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_9, L_11)));
		t2* L_13 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_12);
		m1207(L_8, L_13, &m1207_MI);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_15 = V_2;
		t934* L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t121 *)L_16)->max_length))))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9699_MI, __this);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_0079;
		}
	}
	{
		t328 * L_18 = V_0;
		m1207(L_18, (t2*) &_stringLiteral2055, &m1207_MI);
	}

IL_0079:
	{
		t328 * L_19 = V_0;
		m1207(L_19, (t2*) &_stringLiteral143, &m1207_MI);
		t328 * L_20 = V_0;
		t2* L_21 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_20);
		return L_21;
	}
}
extern MethodInfo m9707_MI;
extern "C" void m9707 (t1823 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9702_MI, __this);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9700_MI, __this);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9706_MI, __this);
		m9576(NULL, L_0, L_1, L_2, L_3, 1, &m9576_MI);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
