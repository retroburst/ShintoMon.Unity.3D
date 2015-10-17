#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1725.h"
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
extern TypeInfo t1725_TI;
#include "t1725MD.h"

#include "t9.h"
#include "t1486.h"
#include "t1485.h"
#include "t124.h"
#include "t122.h"
#include "t470.h"
#include "t58.h"
extern TypeInfo t470_TI;
extern TypeInfo t1485_TI;
extern TypeInfo t469_TI;
extern TypeInfo t9_TI;
#include "t9MD.h"
#include "t470MD.h"
#include "t1485MD.h"
extern MethodInfo m336_MI;
extern MethodInfo m8898_MI;
extern MethodInfo m6986_MI;
extern MethodInfo m6982_MI;
extern MethodInfo m6984_MI;

#include "t121.h"

extern MethodInfo m8897_MI;
extern "C" void m8897 (t1725 * __this, t470 * p0, t9 * p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t9 * L_0 = p1;
		__this->f0 = L_0;
		t470 * L_1 = p0;
		__this->f7 = L_1;
		t470 * L_2 = (__this->f7);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		t58 L_3 = { &m8898_MI };
		t470 * L_4 = (t470 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t470_TI));
		m6986(L_4, NULL, L_3, &m6986_MI);
		__this->f3 = L_4;
	}

IL_002e:
	{
		t1485 * L_5 = (t1485 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1485_TI));
		m6982(L_5, 0, &m6982_MI);
		__this->f2 = L_5;
		return;
	}
}
extern "C" void m8898 (t9 * __this , t9 * p0, MethodInfo* method)
{
	t1725 * V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t1725 *)Castclass(L_0, InitializedTypeInfo(&t1725_TI)));
		t1725 * L_1 = V_0;
		t470 * L_2 = (L_1->f7);
		t9 * L_3 = p0;
		VirtFuncInvoker3< t9 *, t9 *, t470 *, t9 * >::Invoke(&m6984_MI, L_2, L_3, (t470 *)NULL, NULL);
		return;
	}
}
extern MethodInfo m8899_MI;
extern "C" t9 * m8899 (t1725 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8900_MI;
extern "C" t1486 * m8900 (t1725 * __this, MethodInfo* method)
{
	{
		t1485 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8901_MI;
extern "C" bool m8901 (t1725 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f1);
		return L_0;
	}
}
#include "t1716.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1716_TI;
#include "t1716MD.h"

#include "t2.h"
#include "t1100.h"
#include "t1101.h"
#include "t132.h"
#include "t126.h"
#include "t127.h"
#include "t1729.h"
#include "t1726.h"
#include "t125.h"
#include "t563.h"
#include "t300.h"
#include "mscorlib_ArrayTypes.h"
#include "t303.h"
extern TypeInfo t132_TI;
extern TypeInfo t126_TI;
extern TypeInfo t2_TI;
extern TypeInfo t1728_TI;
extern TypeInfo t122_TI;
extern TypeInfo t563_TI;
extern TypeInfo t300_TI;
#include "t1209MD.h"
#include "t132MD.h"
#include "t1100MD.h"
#include "t126MD.h"
#include "t1728MD.h"
#include "t2MD.h"
#include "t563MD.h"
#include "t300MD.h"
extern Il2CppType t2_0_0_0;
extern MethodInfo m5770_MI;
extern MethodInfo m339_MI;
extern MethodInfo m5740_MI;
extern MethodInfo m329_MI;
extern MethodInfo m5728_MI;
extern MethodInfo m8905_MI;
extern MethodInfo m8933_MI;
extern MethodInfo m8907_MI;
extern MethodInfo m2723_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m5980_MI;


extern MethodInfo m8902_MI;
extern "C" void m8902 (t1716 * __this, MethodInfo* method)
{
	{
		m5770(__this, &m5770_MI);
		__this->f4 = 0;
		__this->f1 = (t2*)NULL;
		return;
	}
}
extern MethodInfo m8903_MI;
extern "C" void m8903 (t1716 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		m5770(__this, &m5770_MI);
		t1100 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral417, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t1100 * L_2 = p0;
		t2* L_3 = m5740(L_2, (t2*) &_stringLiteral1650, &m5740_MI);
		__this->f1 = L_3;
		t1100 * L_4 = p0;
		t2* L_5 = m5740(L_4, (t2*) &_stringLiteral1651, &m5740_MI);
		__this->f2 = L_5;
		return;
	}
}
extern MethodInfo m8904_MI;
extern "C" void m8904 (t1716 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t2* L_1 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_2 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5728(L_0, (t2*) &_stringLiteral1651, L_1, L_2, &m5728_MI);
		t1100 * L_3 = p0;
		t2* L_4 = (__this->f1);
		t126 * L_5 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5728(L_3, (t2*) &_stringLiteral1650, L_4, L_5, &m5728_MI);
		return;
	}
}
extern "C" t2* m8905 (t1716 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8906_MI;
extern "C" void m8906 (t1716 * __this, bool p0, MethodInfo* method)
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
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8905_MI, __this);
		t1726 * L_3 = &(__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		m8933(NULL, L_2, L_3, (&V_0), &m8933_MI);
		__this->f4 = 1;
		VirtActionInvoker0::Invoke(&m8907_MI, __this);
		return;
	}
}
extern "C" void m8907 (t1716 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8908_MI;
extern "C" void m8908 (t1716 * __this, t2* p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1587, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2723(L_2, &m2723_MI);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_4, (t2*) &_stringLiteral1652, &m2909_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t312* L_6 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f0;
		int32_t L_7 = m5980(L_5, L_6, &m5980_MI);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_003a;
		}
	}
	{
		t563 * L_8 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_8, (t2*) &_stringLiteral1653, &m2909_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003a:
	{
		return;
	}
}
#include "t1549.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1549_TI;
#include "t1549MD.h"

#include "t138.h"
#include "t1369MD.h"
#include "t138MD.h"
extern MethodInfo m5900_MI;
extern MethodInfo m11809_MI;
extern MethodInfo m11808_MI;
extern MethodInfo m4457_MI;


extern MethodInfo m8909_MI;
extern "C" void m8909 (t1549 * __this, MethodInfo* method)
{
	{
		m5900(__this, (t2*) &_stringLiteral1654, &m5900_MI);
		return;
	}
}
extern MethodInfo m8910_MI;
extern "C" void m8910 (t1549 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5900(__this, L_0, &m5900_MI);
		return;
	}
}
extern MethodInfo m7004_MI;
extern "C" void m7004 (t1549 * __this, t2* p0, t138 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
extern MethodInfo m8911_MI;
extern "C" void m8911 (t1549 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11808(__this, L_0, L_1, &m11808_MI);
		return;
	}
}
extern MethodInfo m8912_MI;
extern "C" void m8912 (t1549 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5900(__this, L_0, &m5900_MI);
		int32_t L_1 = p1;
		m4457(__this, L_1, &m4457_MI);
		return;
	}
}
#include "t888.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t888_TI;
#include "t888MD.h"

#include "t575.h"
#include "t169.h"
#include "t903.h"
#include "t299.h"
#include "t1530.h"
#include "t1499.h"
extern TypeInfo t169_TI;
extern TypeInfo t158_TI;
extern TypeInfo t125_TI;
extern TypeInfo t903_TI;
extern TypeInfo t730_TI;
extern TypeInfo t575_TI;
extern TypeInfo t1530_TI;
extern TypeInfo t299_TI;
#include "t169MD.h"
#include "t903MD.h"
#include "t1354MD.h"
#include "t298MD.h"
#include "t1530MD.h"
#include "t121MD.h"
#include "t1591MD.h"
extern Il2CppType t158_0_0_0;
extern Il2CppType t730_0_0_0;
extern MethodInfo m8914_MI;
extern MethodInfo m5734_MI;
extern MethodInfo m515_MI;
extern MethodInfo m4360_MI;
extern MethodInfo m5792_MI;
extern MethodInfo m4289_MI;
extern MethodInfo m7010_MI;
extern MethodInfo m5721_MI;
extern MethodInfo m8913_MI;
extern MethodInfo m5719_MI;
extern MethodInfo m6911_MI;
extern MethodInfo m511_MI;
extern MethodInfo m8920_MI;
extern MethodInfo m8917_MI;
extern MethodInfo m1161_MI;
extern MethodInfo m7846_MI;
extern MethodInfo m5898_MI;
extern MethodInfo m8921_MI;


extern MethodInfo m7009_MI;
extern "C" void m7009 (t888 * __this, MethodInfo* method)
{
	{
		m4289(__this, 0, &m4289_MI);
		return;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" void m4289 (t888 * __this, int32_t p0, MethodInfo* method)
{
	static bool m4289_init;
	if (!m4289_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m4289_init = true;
	}
	{
		m7010(__this, &m7010_MI);
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t903 * L_1 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5721(L_1, (t2*) &_stringLiteral399, &m5721_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		__this->f1 = 1;
		int32_t L_2 = p0;
		__this->f3 = L_2;
		int32_t L_3 = p0;
		__this->f5 = ((t730*)SZArrayNew(t730_TI_var, L_3));
		__this->f7 = 1;
		__this->f2 = 1;
		return;
	}
}
extern MethodInfo m7030_MI;
extern "C" void m7030 (t888 * __this, t730* p0, MethodInfo* method)
{
	{
		m7010(__this, &m7010_MI);
		t730* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1053, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t730* L_2 = p0;
		t730* L_3 = p0;
		m8913(__this, L_2, 0, (((int32_t)(((t121 *)L_3)->max_length))), 1, 0, &m8913_MI);
		return;
	}
}
extern "C" void m8913 (t888 * __this, t730* p0, int32_t p1, int32_t p2, bool p3, bool p4, MethodInfo* method)
{
	{
		t730* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1053, &m339_MI);
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
		t903 * L_4 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5721(L_4, (t2*) &_stringLiteral1659, &m5721_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t730* L_5 = p0;
		int32_t L_6 = p1;
		int32_t L_7 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_5)->max_length)))-(int32_t)L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0039;
		}
	}
	{
		t563 * L_8 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_8, (t2*) &_stringLiteral1660, (t2*) &_stringLiteral1661, &m5719_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0039:
	{
		bool L_9 = p3;
		__this->f1 = L_9;
		t730* L_10 = p0;
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
extern "C" void m8914 (t888 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f8);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6911(L_1, (t2*) &_stringLiteral1662, &m6911_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
extern MethodInfo m8915_MI;
extern "C" bool m8915 (t888 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f8);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m7029_MI;
extern "C" bool m7029 (t888 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f8);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8916_MI;
extern "C" bool m8916 (t888 * __this, MethodInfo* method)
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
extern TypeInfo* t730_TI_var;
extern "C" void m8917 (t888 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8917_init;
	if (!m8917_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8917_init = true;
	}
	t730* V_0 = {0};
	{
		m8914(__this, &m8914_MI);
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
		m5734(L_3, (t2*) &_stringLiteral1655, &m5734_MI);
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
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral1656);
		*((t9 **)(t9 **)SZArrayLdElema(L_7, 0)) = (t9 *)(t2*) &_stringLiteral1656;
		t158* L_8 = L_7;
		int32_t L_9 = p0;
		int32_t L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t125_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 1)) = (t9 *)L_11;
		t158* L_12 = L_8;
		ArrayElementTypeCheck (L_12, (t2*) &_stringLiteral167);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 2)) = (t9 *)(t2*) &_stringLiteral167;
		t158* L_13 = L_12;
		int32_t L_14 = (__this->f3);
		int32_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t125_TI), &L_15);
		ArrayElementTypeCheck (L_13, L_16);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 3)) = (t9 *)L_16;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_17 = m515(NULL, L_13, &m515_MI);
		t903 * L_18 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4360(L_18, (t2*) &_stringLiteral610, L_17, &m4360_MI);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_006d:
	{
		V_0 = (t730*)NULL;
		int32_t L_19 = p0;
		if (!L_19)
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_20 = p0;
		V_0 = ((t730*)SZArrayNew(t730_TI_var, L_20));
		t730* L_21 = (__this->f5);
		t730* L_22 = V_0;
		int32_t L_23 = (__this->f4);
		m5792(NULL, (t121 *)(t121 *)L_21, 0, (t121 *)(t121 *)L_22, 0, L_23, &m5792_MI);
	}

IL_008d:
	{
		__this->f10 = 0;
		t730* L_24 = V_0;
		__this->f5 = L_24;
		int32_t L_25 = p0;
		__this->f3 = L_25;
		return;
	}
}
extern MethodInfo m7018_MI;
extern "C" int64_t m7018 (t888 * __this, MethodInfo* method)
{
	{
		m8914(__this, &m8914_MI);
		int32_t L_0 = (__this->f4);
		int32_t L_1 = (__this->f6);
		return (((int64_t)((int32_t)((int32_t)L_0-(int32_t)L_1))));
	}
}
extern MethodInfo m7017_MI;
extern "C" int64_t m7017 (t888 * __this, MethodInfo* method)
{
	{
		m8914(__this, &m8914_MI);
		int32_t L_0 = (__this->f9);
		int32_t L_1 = (__this->f6);
		return (((int64_t)((int32_t)((int32_t)L_0-(int32_t)L_1))));
	}
}
extern MethodInfo m7020_MI;
extern "C" void m7020 (t888 * __this, int64_t p0, MethodInfo* method)
{
	{
		m8914(__this, &m8914_MI);
		int64_t L_0 = p0;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_001b;
		}
	}
	{
		t903 * L_1 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4360(L_1, (t2*) &_stringLiteral610, (t2*) &_stringLiteral1657, &m4360_MI);
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
		t903 * L_3 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4360(L_3, (t2*) &_stringLiteral610, (t2*) &_stringLiteral1658, &m4360_MI);
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
extern MethodInfo m8918_MI;
extern "C" void m8918 (t888 * __this, bool p0, MethodInfo* method)
{
	{
		__this->f8 = 1;
		__this->f7 = 0;
		return;
	}
}
extern MethodInfo m7031_MI;
extern "C" void m7031 (t888 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m7019_MI;
extern "C" int32_t m7019 (t888 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		m8914(__this, &m8914_MI);
		t730* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1053, &m339_MI);
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
		t903 * L_4 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5721(L_4, (t2*) &_stringLiteral1663, &m5721_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		t730* L_5 = p0;
		int32_t L_6 = p1;
		int32_t L_7 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_5)->max_length)))-(int32_t)L_6))) >= ((int32_t)L_7)))
		{
			goto IL_003f;
		}
	}
	{
		t563 * L_8 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_8, (t2*) &_stringLiteral1664, (t2*) &_stringLiteral1665, &m5719_MI);
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
		t730* L_17 = (__this->f5);
		int32_t L_18 = (__this->f9);
		t730* L_19 = p0;
		int32_t L_20 = p1;
		int32_t L_21 = p2;
		m5792(NULL, (t121 *)(t121 *)L_17, L_18, (t121 *)(t121 *)L_19, L_20, L_21, &m5792_MI);
		int32_t L_22 = (__this->f9);
		int32_t L_23 = p2;
		__this->f9 = ((int32_t)((int32_t)L_22+(int32_t)L_23));
		int32_t L_24 = p2;
		return L_24;
	}
}
extern MethodInfo m8919_MI;
extern "C" int32_t m8919 (t888 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m8914(__this, &m8914_MI);
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
		t730* L_2 = (__this->f5);
		int32_t L_3 = (__this->f9);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->f9 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_6));
	}
}
extern MethodInfo m7021_MI;
extern "C" int64_t m7021 (t888 * __this, int64_t p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	{
		m8914(__this, &m8914_MI);
		int64_t L_0 = p0;
		if ((((int64_t)L_0) <= ((int64_t)(((int64_t)((int32_t)2147483647))))))
		{
			goto IL_0025;
		}
	}
	{
		int64_t L_1 = p0;
		int64_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t299_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m511(NULL, (t2*) &_stringLiteral1666, L_3, &m511_MI);
		t903 * L_5 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5721(L_5, L_4, &m5721_MI);
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
		t1549 * L_9 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8910(L_9, (t2*) &_stringLiteral1667, &m8910_MI);
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
		t563 * L_13 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_13, (t2*) &_stringLiteral1668, (t2*) &_stringLiteral1645, &m5719_MI);
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
		t1549 * L_18 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8910(L_18, (t2*) &_stringLiteral1667, &m8910_MI);
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
extern "C" int32_t m8920 (t888 * __this, int32_t p0, MethodInfo* method)
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
extern "C" void m8921 (t888 * __this, int32_t p0, MethodInfo* method)
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
		int32_t L_3 = m8920(__this, L_2, &m8920_MI);
		VirtActionInvoker1< int32_t >::Invoke(&m8917_MI, __this, L_3);
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
		t730* L_5 = (__this->f5);
		int32_t L_6 = (__this->f4);
		int32_t L_7 = (__this->f10);
		m1161(NULL, (t121 *)(t121 *)L_5, L_6, L_7, &m1161_MI);
		__this->f10 = 0;
	}

IL_003f:
	{
		return;
	}
}
extern MethodInfo m7022_MI;
extern "C" void m7022 (t888 * __this, int64_t p0, MethodInfo* method)
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
		m5734(L_3, (t2*) &_stringLiteral1669, &m5734_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		m8914(__this, &m8914_MI);
		bool L_4 = (__this->f1);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		t2* L_5 = m7846(NULL, (t2*) &_stringLiteral1670, &m7846_MI);
		t169 * L_6 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_6, L_5, &m5734_MI);
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
		t903 * L_10 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5898(L_10, &m5898_MI);
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
		m8921(__this, L_15, &m8921_MI);
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
extern MethodInfo m4296_MI;
extern TypeInfo* t730_TI_var;
extern "C" t730* m4296 (t888 * __this, MethodInfo* method)
{
	static bool m4296_init;
	if (!m4296_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m4296_init = true;
	}
	int32_t V_0 = 0;
	t730* V_1 = {0};
	{
		int32_t L_0 = (__this->f4);
		int32_t L_1 = (__this->f6);
		V_0 = ((int32_t)((int32_t)L_0-(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = ((t730*)SZArrayNew(t730_TI_var, L_2));
		t730* L_3 = (__this->f5);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		t730* L_4 = (__this->f5);
		int32_t L_5 = (__this->f6);
		t730* L_6 = V_1;
		int32_t L_7 = V_0;
		m5792(NULL, (t121 *)(t121 *)L_4, L_5, (t121 *)(t121 *)L_6, 0, L_7, &m5792_MI);
	}

IL_0031:
	{
		t730* L_8 = V_1;
		return L_8;
	}
}
extern MethodInfo m4290_MI;
extern "C" void m4290 (t888 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		m8914(__this, &m8914_MI);
		bool L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_1, (t2*) &_stringLiteral1671, &m5734_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0019:
	{
		t730* L_2 = p0;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1053, &m339_MI);
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
		t903 * L_6 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5898(L_6, &m5898_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0035:
	{
		t730* L_7 = p0;
		int32_t L_8 = p1;
		int32_t L_9 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))-(int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_004d;
		}
	}
	{
		t563 * L_10 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_10, (t2*) &_stringLiteral1664, (t2*) &_stringLiteral1665, &m5719_MI);
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
		m8921(__this, ((int32_t)((int32_t)L_14+(int32_t)L_15)), &m8921_MI);
	}

IL_006b:
	{
		t730* L_16 = p0;
		int32_t L_17 = p1;
		t730* L_18 = (__this->f5);
		int32_t L_19 = (__this->f9);
		int32_t L_20 = p2;
		m5792(NULL, (t121 *)(t121 *)L_16, L_17, (t121 *)(t121 *)L_18, L_19, L_20, &m5792_MI);
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
extern MethodInfo m4301_MI;
extern "C" void m4301 (t888 * __this, uint8_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m8914(__this, &m8914_MI);
		bool L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_1, (t2*) &_stringLiteral1671, &m5734_MI);
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
		m8921(__this, ((int32_t)((int32_t)L_4+(int32_t)1)), &m8921_MI);
		int32_t L_5 = (__this->f9);
		__this->f4 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0043:
	{
		t730* L_6 = (__this->f5);
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
#include "t1727.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1727_TI;
#include "t1727MD.h"



#include "t1728.h"
#ifndef _MSC_VER
#else
#endif

#include "t1715.h"
#include "t2148.h"
#include "t1711.h"
#include "t1730.h"
#include "t297.h"
#include "t1187.h"
#include "t1722.h"
#include "t1721.h"
extern TypeInfo t2148_TI;
extern TypeInfo t1711_TI;
extern TypeInfo t1730_TI;
extern TypeInfo t1729_TI;
#include "t58MD.h"
#include "t2148MD.h"
#include "t1711MD.h"
#include "t1730MD.h"
extern MethodInfo m7580_MI;
extern MethodInfo m11873_MI;
extern MethodInfo m8924_MI;
extern MethodInfo m590_MI;
extern MethodInfo m8779_MI;
extern MethodInfo m8965_MI;
extern MethodInfo m2908_MI;
extern MethodInfo m1213_MI;
extern MethodInfo m8929_MI;


extern MethodInfo m8922_MI;
extern "C" void m8922 (t9 * __this , MethodInfo* method)
{
	{
		((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f0 = (-1);
		t58 L_0 = m7580(NULL, (((int64_t)(-1))), &m7580_MI);
		((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1 = L_0;
		return;
	}
}
extern MethodInfo m8923_MI;
extern "C" t138 * m8923 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t2148 * L_3 = (t2148 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2148_TI));
		m11873(L_3, (t2*) &_stringLiteral1672, &m11873_MI);
		return L_3;
	}

IL_0018:
	{
		V_0 = (t2*) &_stringLiteral1673;
		t2* L_4 = V_0;
		int32_t L_5 = p0;
		t1549 * L_6 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8912(L_6, L_4, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_5)), &m8912_MI);
		return L_6;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		int32_t L_8 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_9 = m8924(NULL, L_7, L_8, &m8924_MI);
		return L_9;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t138 * m8924 (t9 * __this , t2* p0, int32_t p1, MethodInfo* method)
{
	static bool m8924_init;
	if (!m8924_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8924_init = true;
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
		t2* L_11 = m590(NULL, (t2*) &_stringLiteral1674, L_10, &m590_MI);
		V_0 = L_11;
		t2* L_12 = V_0;
		t1711 * L_13 = (t1711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1711_TI));
		m8779(L_13, L_12, &m8779_MI);
		return L_13;
	}

IL_00ae:
	{
		int32_t L_14 = p1;
		t1549 * L_15 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8912(L_15, (t2*) &_stringLiteral1675, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_14)), &m8912_MI);
		return L_15;
	}

IL_00c0:
	{
		t2* L_16 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_17 = m590(NULL, (t2*) &_stringLiteral1676, L_16, &m590_MI);
		V_0 = L_17;
		t2* L_18 = V_0;
		t1711 * L_19 = (t1711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1711_TI));
		m8779(L_19, L_18, &m8779_MI);
		return L_19;
	}

IL_00d3:
	{
		t2* L_20 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_21 = m590(NULL, (t2*) &_stringLiteral1677, L_20, &m590_MI);
		V_0 = L_21;
		t2* L_22 = V_0;
		t2148 * L_23 = (t2148 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2148_TI));
		m11873(L_23, L_22, &m11873_MI);
		return L_23;
	}

IL_00e6:
	{
		t2* L_24 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_25 = m590(NULL, (t2*) &_stringLiteral1678, L_24, &m590_MI);
		V_0 = L_25;
		t2* L_26 = V_0;
		int32_t L_27 = p1;
		t1549 * L_28 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8912(L_28, L_26, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_27)), &m8912_MI);
		return L_28;
	}

IL_0100:
	{
		t2* L_29 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_30 = m590(NULL, (t2*) &_stringLiteral1679, L_29, &m590_MI);
		V_0 = L_30;
		t2* L_31 = V_0;
		int32_t L_32 = p1;
		t1549 * L_33 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8912(L_33, L_31, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_32)), &m8912_MI);
		return L_33;
	}

IL_011a:
	{
		t2* L_34 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_35 = m590(NULL, (t2*) &_stringLiteral1680, L_34, &m590_MI);
		V_0 = L_35;
		t2* L_36 = V_0;
		int32_t L_37 = p1;
		t1549 * L_38 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8912(L_38, L_36, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_37)), &m8912_MI);
		return L_38;
	}

IL_0134:
	{
		t2* L_39 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_40 = m590(NULL, (t2*) &_stringLiteral1681, L_39, &m590_MI);
		V_0 = L_40;
		t2* L_41 = V_0;
		t1730 * L_42 = (t1730 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1730_TI));
		m8965(L_42, L_41, &m8965_MI);
		return L_42;
	}

IL_0147:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_43 = m2908(NULL, (t2*) &_stringLiteral1682, ((t158*)SZArrayNew(t158_TI_var, 0)), &m2908_MI);
		V_0 = L_43;
		t2* L_44 = V_0;
		int32_t L_45 = p1;
		t1549 * L_46 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8912(L_46, L_44, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_45)), &m8912_MI);
		return L_46;
	}

IL_0166:
	{
		t2* L_47 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_48 = m590(NULL, (t2*) &_stringLiteral1683, L_47, &m590_MI);
		V_0 = L_48;
		t2* L_49 = V_0;
		int32_t L_50 = p1;
		t1549 * L_51 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8912(L_51, L_49, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_50)), &m8912_MI);
		return L_51;
	}

IL_0180:
	{
		t2* L_52 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_53 = m590(NULL, (t2*) &_stringLiteral1684, L_52, &m590_MI);
		V_0 = L_53;
		t2* L_54 = V_0;
		int32_t L_55 = p1;
		t1549 * L_56 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8912(L_56, L_54, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_55)), &m8912_MI);
		return L_56;
	}

IL_019a:
	{
		t2* L_57 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_58 = m590(NULL, (t2*) &_stringLiteral1685, L_57, &m590_MI);
		V_0 = L_58;
		t2* L_59 = V_0;
		int32_t L_60 = p1;
		t1549 * L_61 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8912(L_61, L_59, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_60)), &m8912_MI);
		return L_61;
	}

IL_01b4:
	{
		t2* L_62 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_63 = m590(NULL, (t2*) &_stringLiteral1686, L_62, &m590_MI);
		V_0 = L_63;
		t2* L_64 = V_0;
		int32_t L_65 = p1;
		t1549 * L_66 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8912(L_66, L_64, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_65)), &m8912_MI);
		return L_66;
	}

IL_01ce:
	{
		t2* L_67 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_68 = m590(NULL, (t2*) &_stringLiteral1687, L_67, &m590_MI);
		V_0 = L_68;
		t2* L_69 = V_0;
		int32_t L_70 = p1;
		t1549 * L_71 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8912(L_71, L_69, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_70)), &m8912_MI);
		return L_71;
	}

IL_01e8:
	{
		int32_t L_72 = p1;
		t1549 * L_73 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8912(L_73, (t2*) &_stringLiteral1688, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_72)), &m8912_MI);
		return L_73;
	}

IL_01fa:
	{
		t2* L_74 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_75 = m590(NULL, (t2*) &_stringLiteral1689, L_74, &m590_MI);
		V_0 = L_75;
		t2* L_76 = V_0;
		int32_t L_77 = p1;
		t1549 * L_78 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8912(L_78, L_76, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_77)), &m8912_MI);
		return L_78;
	}

IL_0214:
	{
		V_0 = (t2*) &_stringLiteral1690;
		t2* L_79 = V_0;
		int32_t L_80 = p1;
		t1549 * L_81 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8912(L_81, L_79, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_80)), &m8912_MI);
		return L_81;
	}

IL_0228:
	{
		int32_t L_82 = p1;
		int32_t L_83 = L_82;
		t9 * L_84 = Box(InitializedTypeInfo(&t1729_TI), &L_83);
		t2* L_85 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_86 = m1213(NULL, (t2*) &_stringLiteral1691, L_84, L_85, &m1213_MI);
		V_0 = L_86;
		t2* L_87 = V_0;
		int32_t L_88 = p1;
		t1549 * L_89 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8912(L_89, L_87, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_88)), &m8912_MI);
		return L_89;
	}
}
extern MethodInfo m8925_MI;
extern "C" bool m8925 (t9 * __this , t2* p0, int32_t* p1, MethodInfo* method)
{
	typedef bool (*m8925_ftn) (t2*, int32_t*);
	static m8925_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8925_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8926_MI;
extern "C" t221* m8926 (t9 * __this , t2* p0, t2* p1, int32_t p2, int32_t p3, int32_t* p4, MethodInfo* method)
{
	typedef t221* (*m8926_ftn) (t2*, t2*, int32_t, int32_t, int32_t*);
	static m8926_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8926_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern MethodInfo m8927_MI;
extern "C" t2* m8927 (t9 * __this , int32_t* p0, MethodInfo* method)
{
	typedef t2* (*m8927_ftn) (int32_t*);
	static m8927_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8927_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m8928_MI;
extern "C" bool m8928 (t9 * __this , t2* p0, int32_t* p1, MethodInfo* method)
{
	typedef bool (*m8928_ftn) (t2*, int32_t*);
	static m8928_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8928_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m8929 (t9 * __this , t2* p0, int32_t* p1, MethodInfo* method)
{
	typedef int32_t (*m8929_ftn) (t2*, int32_t*);
	static m8929_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8929_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8930_MI;
extern "C" int32_t m8930 (t9 * __this , t58 p0, int32_t* p1, MethodInfo* method)
{
	typedef int32_t (*m8930_ftn) (t58, int32_t*);
	static m8930_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8930_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8931_MI;
extern "C" bool m8931 (t9 * __this , t2* p0, int32_t* p1, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		t2* L_0 = p0;
		int32_t* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		int32_t L_2 = m8929(NULL, L_0, L_1, &m8929_MI);
		V_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f0;
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
extern MethodInfo m8932_MI;
extern "C" bool m8932 (t9 * __this , t2* p0, int32_t* p1, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		t2* L_0 = p0;
		int32_t* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		int32_t L_2 = m8929(NULL, L_0, L_1, &m8929_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		int32_t L_6 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f0;
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
extern "C" bool m8933 (t9 * __this , t2* p0, t1726 * p1, int32_t* p2, MethodInfo* method)
{
	typedef bool (*m8933_ftn) (t2*, t1726 *, int32_t*);
	static m8933_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8933_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m8934_MI;
extern "C" t58 m8934 (t9 * __this , t2* p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t* p5, MethodInfo* method)
{
	typedef t58 (*m8934_ftn) (t2*, int32_t, int32_t, int32_t, int32_t, int32_t*);
	static m8934_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8934_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5);
}
extern MethodInfo m8935_MI;
extern "C" bool m8935 (t9 * __this , t58 p0, int32_t* p1, MethodInfo* method)
{
	typedef bool (*m8935_ftn) (t58, int32_t*);
	static m8935_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8935_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8936_MI;
extern "C" int32_t m8936 (t9 * __this , t58 p0, t730* p1, int32_t p2, int32_t p3, int32_t* p4, MethodInfo* method)
{
	typedef int32_t (*m8936_ftn) (t58, t730*, int32_t, int32_t, int32_t*);
	static m8936_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8936_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern MethodInfo m8937_MI;
extern "C" int32_t m8937 (t9 * __this , t58 p0, t730* p1, int32_t p2, int32_t p3, int32_t* p4, MethodInfo* method)
{
	typedef int32_t (*m8937_ftn) (t58, t730*, int32_t, int32_t, int32_t*);
	static m8937_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8937_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern MethodInfo m8938_MI;
extern "C" int64_t m8938 (t9 * __this , t58 p0, int64_t p1, int32_t p2, int32_t* p3, MethodInfo* method)
{
	typedef int64_t (*m8938_ftn) (t58, int64_t, int32_t, int32_t*);
	static m8938_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8938_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m8939_MI;
extern "C" int64_t m8939 (t9 * __this , t58 p0, int32_t* p1, MethodInfo* method)
{
	typedef int64_t (*m8939_ftn) (t58, int32_t*);
	static m8939_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8939_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8940_MI;
extern "C" bool m8940 (t9 * __this , t58 p0, int64_t p1, int32_t* p2, MethodInfo* method)
{
	typedef bool (*m8940_ftn) (t58, int64_t, int32_t*);
	static m8940_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8940_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m8941_MI;
extern "C" t58 m8941 (t9 * __this , MethodInfo* method)
{
	typedef t58 (*m8941_ftn) ();
	static m8941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8941_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleOutput()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8942_MI;
extern "C" t58 m8942 (t9 * __this , MethodInfo* method)
{
	typedef t58 (*m8942_ftn) ();
	static m8942_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8942_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleInput()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8943_MI;
extern "C" t58 m8943 (t9 * __this , MethodInfo* method)
{
	typedef t58 (*m8943_ftn) ();
	static m8943_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8943_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleError()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8944_MI;
extern "C" uint16_t m8944 (t9 * __this , MethodInfo* method)
{
	typedef uint16_t (*m8944_ftn) ();
	static m8944_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8944_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_VolumeSeparatorChar()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8945_MI;
extern "C" uint16_t m8945 (t9 * __this , MethodInfo* method)
{
	typedef uint16_t (*m8945_ftn) ();
	static m8945_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8945_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_DirectorySeparatorChar()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8946_MI;
extern "C" uint16_t m8946 (t9 * __this , MethodInfo* method)
{
	typedef uint16_t (*m8946_ftn) ();
	static m8946_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8946_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_AltDirectorySeparatorChar()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8947_MI;
extern "C" uint16_t m8947 (t9 * __this , MethodInfo* method)
{
	typedef uint16_t (*m8947_ftn) ();
	static m8947_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8947_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_PathSeparator()");
	return _il2cpp_icall_func();
}
#ifndef _MSC_VER
#else
#endif
#include "t1729MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1726_TI;
#include "t1726MD.h"



// Conversion methods for marshalling of: System.IO.MonoIOStat
void t1726_marshal(const t1726& unmarshaled, t1726_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
	marshaled.f5 = unmarshaled.f5;
}
void t1726_marshal_back(const t1726_marshaled& marshaled, t1726& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
	unmarshaled.f5 = marshaled.f5;
}
// Conversion method for clean up from marshalling of: System.IO.MonoIOStat
void t1726_marshal_cleanup(t1726_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
}
#ifndef _MSC_VER
#else
#endif

#include "t2172.h"
#include "t2163.h"
#include "t313.h"
#include "t901.h"
extern TypeInfo t303_TI;
extern TypeInfo t312_TI;
extern TypeInfo t2172_TI;
extern TypeInfo t901_TI;
extern TypeInfo t124_TI;
#include "t303MD.h"
#include "t1538MD.h"
#include "t893MD.h"
#include "t2172MD.h"
#include "t314MD.h"
#include "t901MD.h"
extern Il2CppType t312_0_0_0;
extern MethodInfo m8959_MI;
extern MethodInfo m2763_MI;
extern MethodInfo m8958_MI;
extern MethodInfo m2738_MI;
extern MethodInfo m399_MI;
extern MethodInfo m610_MI;
extern MethodInfo m1105_MI;
extern MethodInfo m331_MI;
extern MethodInfo m8957_MI;
extern MethodInfo m4270_MI;
extern MethodInfo m7366_MI;
extern MethodInfo m2739_MI;
extern MethodInfo m8949_MI;
extern MethodInfo m8960_MI;
extern MethodInfo m2765_MI;
extern MethodInfo m8955_MI;
extern MethodInfo m2789_MI;
extern MethodInfo m8832_MI;
extern MethodInfo m1091_MI;
extern MethodInfo m11530_MI;
extern MethodInfo m8954_MI;
extern MethodInfo m8956_MI;
extern MethodInfo m4269_MI;
extern MethodInfo m4448_MI;
extern MethodInfo m8963_MI;
extern MethodInfo m4281_MI;
extern MethodInfo m1122_MI;
extern MethodInfo m5749_MI;
extern MethodInfo m8961_MI;
extern MethodInfo m4358_MI;
extern MethodInfo m5769_MI;
extern MethodInfo m7315_MI;
extern MethodInfo m4444_MI;
extern MethodInfo m5805_MI;
extern MethodInfo m7381_MI;
extern MethodInfo m8962_MI;
extern MethodInfo m4445_MI;
extern FieldInfo t2172_f20_FieldInfo;


extern MethodInfo m8948_MI;
extern TypeInfo* t312_TI_var;
extern "C" void m8948 (t9 * __this , MethodInfo* method)
{
	static bool m8948_init;
	if (!m8948_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m8948_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		uint16_t L_0 = m8944(NULL, &m8944_MI);
		((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f5 = L_0;
		uint16_t L_1 = m8945(NULL, &m8945_MI);
		((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2 = L_1;
		uint16_t L_2 = m8946(NULL, &m8946_MI);
		((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f1 = L_2;
		uint16_t L_3 = m8947(NULL, &m8947_MI);
		((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f3 = L_3;
		t312* L_4 = m8959(NULL, &m8959_MI);
		((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f0 = L_4;
		t2* L_5 = m2763((&((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2), &m2763_MI);
		((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f4 = L_5;
		t312* L_6 = ((t312*)SZArrayNew(t312_TI_var, 3));
		uint16_t L_7 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_6, 0)) = (uint16_t)L_7;
		t312* L_8 = L_6;
		uint16_t L_9 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_8, 1)) = (uint16_t)L_9;
		t312* L_10 = L_8;
		uint16_t L_11 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f5;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 2)) = (uint16_t)L_11;
		((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f6 = L_10;
		uint16_t L_12 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		uint16_t L_13 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f5;
		((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f7 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		return;
	}
}
extern "C" t2* m1091 (t9 * __this , t2* p0, t2* p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1692, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral1693, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t2* L_4 = p0;
		int32_t L_5 = m2723(L_4, &m2723_MI);
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
		int32_t L_8 = m2723(L_7, &m2723_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t312* L_11 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f0;
		int32_t L_12 = m5980(L_10, L_11, &m5980_MI);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0049;
		}
	}
	{
		t563 * L_13 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_13, (t2*) &_stringLiteral1653, &m2909_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0049:
	{
		t2* L_14 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t312* L_15 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f0;
		int32_t L_16 = m5980(L_14, L_15, &m5980_MI);
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0062;
		}
	}
	{
		t563 * L_17 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_17, (t2*) &_stringLiteral1653, &m2909_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0062:
	{
		t2* L_18 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_19 = m8958(NULL, L_18, &m8958_MI);
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
		int32_t L_23 = m2723(L_22, &m2723_MI);
		uint16_t L_24 = m2738(L_21, ((int32_t)((int32_t)L_23-(int32_t)1)), &m2738_MI);
		V_0 = L_24;
		uint16_t L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_26 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00a0;
		}
	}
	{
		uint16_t L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_28 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f1;
		if ((((int32_t)L_27) == ((int32_t)L_28)))
		{
			goto IL_00a0;
		}
	}
	{
		uint16_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_30 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f5;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00a0;
		}
	}
	{
		t2* L_31 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_32 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f4;
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
extern TypeInfo* t312_TI_var;
extern "C" t2* m8949 (t9 * __this , t2* p0, MethodInfo* method)
{
	static bool m8949_init;
	if (!m8949_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m8949_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	t312* V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint16_t V_9 = 0x0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2723(L_0, &m2723_MI);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		t2* L_2 = p0;
		uint16_t L_3 = m2738(L_2, 0, &m2738_MI);
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
		uint16_t L_7 = m2738(L_6, 1, &m2738_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_10 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_003d;
		}
	}
	{
		uint16_t L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_12 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f1;
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
		uint16_t L_17 = m2738(L_15, L_16, &m2738_MI);
		V_5 = L_17;
		uint16_t L_18 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_19 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_0062;
		}
	}
	{
		uint16_t L_20 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_21 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f1;
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
		uint16_t L_27 = m2738(L_25, ((int32_t)((int32_t)L_26+(int32_t)1)), &m2738_MI);
		V_5 = L_27;
		uint16_t L_28 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_29 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		if ((((int32_t)L_28) == ((int32_t)L_29)))
		{
			goto IL_008d;
		}
	}
	{
		uint16_t L_30 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_31 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f1;
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
		V_6 = ((t312*)SZArrayNew(t312_TI_var, ((int32_t)((int32_t)L_38-(int32_t)L_39))));
		int32_t L_40 = V_2;
		if (!L_40)
		{
			goto IL_00ba;
		}
	}
	{
		t312* L_41 = V_6;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_41, 0)) = (uint16_t)((int32_t)92);
		t312* L_42 = V_6;
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
		uint16_t L_47 = m2738(L_45, L_46, &m2738_MI);
		V_9 = L_47;
		uint16_t L_48 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_49 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		if ((((int32_t)L_48) == ((int32_t)L_49)))
		{
			goto IL_00ef;
		}
	}
	{
		uint16_t L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_51 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f1;
		if ((((int32_t)L_50) == ((int32_t)L_51)))
		{
			goto IL_00ef;
		}
	}
	{
		t312* L_52 = V_6;
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
		t312* L_57 = V_6;
		if ((((int32_t)((int32_t)((int32_t)L_56+(int32_t)1))) == ((int32_t)(((int32_t)(((t121 *)L_57)->max_length))))))
		{
			goto IL_0137;
		}
	}
	{
		t312* L_58 = V_6;
		int32_t L_59 = V_8;
		int32_t L_60 = L_59;
		V_8 = ((int32_t)((int32_t)L_60+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_61 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_58, L_60)) = (uint16_t)L_61;
		goto IL_0130;
	}

IL_010a:
	{
		t2* L_62 = p0;
		int32_t L_63 = V_7;
		uint16_t L_64 = m2738(L_62, ((int32_t)((int32_t)L_63+(int32_t)1)), &m2738_MI);
		V_9 = L_64;
		uint16_t L_65 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_66 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_012a;
		}
	}
	{
		uint16_t L_67 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_68 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f1;
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
		t312* L_76 = V_6;
		if ((((int32_t)L_75) < ((int32_t)(((int32_t)(((t121 *)L_76)->max_length))))))
		{
			goto IL_00c5;
		}
	}

IL_014d:
	{
		t312* L_77 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_78 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_78 = m1117(L_78, L_77, &m1105_MI);
		return L_78;
	}
}
extern MethodInfo m8950_MI;
extern "C" t2* m8950 (t9 * __this , t2* p0, MethodInfo* method)
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
		t563 * L_3 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_3, (t2*) &_stringLiteral1694, &m2909_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_6 = m8957(NULL, L_5, &m8957_MI);
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
		t2* L_10 = m4270(L_9, &m4270_MI);
		int32_t L_11 = m2723(L_10, &m2723_MI);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		t563 * L_12 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_12, (t2*) &_stringLiteral1695, &m2909_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0043:
	{
		t2* L_13 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t312* L_14 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f0;
		int32_t L_15 = m5980(L_13, L_14, &m5980_MI);
		if ((((int32_t)L_15) <= ((int32_t)(-1))))
		{
			goto IL_005c;
		}
	}
	{
		t563 * L_16 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_16, (t2*) &_stringLiteral1595, &m2909_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_005c:
	{
		t2* L_17 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t312* L_18 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f6;
		int32_t L_19 = m7366(L_17, L_18, &m7366_MI);
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
		t2* L_25 = m2739(L_23, 0, L_24, &m2739_MI);
		V_1 = L_25;
		t2* L_26 = V_1;
		int32_t L_27 = m2723(L_26, &m2723_MI);
		V_2 = L_27;
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) < ((int32_t)2)))
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_29 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00b1;
		}
	}
	{
		t2* L_30 = V_1;
		int32_t L_31 = V_2;
		uint16_t L_32 = m2738(L_30, ((int32_t)((int32_t)L_31-(int32_t)1)), &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_33 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f5;
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_00b1;
		}
	}
	{
		t2* L_34 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_35 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		uint16_t L_36 = L_35;
		t9 * L_37 = Box(InitializedTypeInfo(&t303_TI), &L_36);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_38 = m511(NULL, L_34, L_37, &m511_MI);
		return L_38;
	}

IL_00b1:
	{
		t2* L_39 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_40 = m8949(NULL, L_39, &m8949_MI);
		return L_40;
	}

IL_00b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_41 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_41;
	}
}
extern MethodInfo m8951_MI;
extern "C" t2* m8951 (t9 * __this , t2* p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t312* L_2 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f0;
		int32_t L_3 = m5980(L_1, L_2, &m5980_MI);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_001e;
		}
	}
	{
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_4, (t2*) &_stringLiteral1653, &m2909_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001e:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		int32_t L_6 = m8960(NULL, L_5, &m8960_MI);
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
		int32_t L_10 = m2723(L_9, &m2723_MI);
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)((int32_t)L_10-(int32_t)1)))))
		{
			goto IL_003c;
		}
	}
	{
		t2* L_11 = p0;
		int32_t L_12 = V_0;
		t2* L_13 = m2765(L_11, L_12, &m2765_MI);
		return L_13;
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_14 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_14;
	}
}
extern MethodInfo m8952_MI;
extern "C" t2* m8952 (t9 * __this , t2* p0, MethodInfo* method)
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
		int32_t L_2 = m2723(L_1, &m2723_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t312* L_5 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f0;
		int32_t L_6 = m5980(L_4, L_5, &m5980_MI);
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		t563 * L_7 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_7, (t2*) &_stringLiteral1653, &m2909_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0026:
	{
		t2* L_8 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t312* L_9 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f6;
		int32_t L_10 = m7366(L_8, L_9, &m7366_MI);
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
		t2* L_14 = m2765(L_12, ((int32_t)((int32_t)L_13+(int32_t)1)), &m2765_MI);
		return L_14;
	}

IL_0040:
	{
		t2* L_15 = p0;
		return L_15;
	}
}
extern MethodInfo m8953_MI;
extern "C" t2* m8953 (t9 * __this , t2* p0, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_1 = m8955(NULL, L_0, &m8955_MI);
		V_0 = L_1;
		t2* L_2 = V_0;
		return L_2;
	}
}
extern "C" t2* m8954 (t9 * __this , t2* p0, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t2* L_0 = p0;
		int32_t L_1 = m2723(L_0, &m2723_MI);
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
		uint16_t L_4 = m2738(L_3, 1, &m2738_MI);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0024;
		}
	}
	{
		t2* L_5 = p0;
		uint16_t L_6 = m2738(L_5, 0, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_7 = m2789(NULL, L_6, &m2789_MI);
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
		t2* L_9 = m8832(NULL, &m8832_MI);
		V_0 = L_9;
		t2* L_10 = p0;
		int32_t L_11 = m2723(L_10, &m2723_MI);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_005f;
		}
	}
	{
		t2* L_12 = V_0;
		uint16_t L_13 = m2738(L_12, 0, &m2738_MI);
		t2* L_14 = p0;
		uint16_t L_15 = m2738(L_14, 0, &m2738_MI);
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
		t9 * L_19 = Box(InitializedTypeInfo(&t303_TI), &L_18);
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
		uint16_t L_22 = m2738(L_21, 2, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_23 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_00cb;
		}
	}
	{
		t2* L_24 = p0;
		uint16_t L_25 = m2738(L_24, 2, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_26 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f1;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00cb;
		}
	}
	{
		t2* L_27 = V_0;
		uint16_t L_28 = m2738(L_27, 0, &m2738_MI);
		t2* L_29 = p0;
		uint16_t L_30 = m2738(L_29, 0, &m2738_MI);
		if ((!(((uint32_t)L_28) == ((uint32_t)L_30))))
		{
			goto IL_00a6;
		}
	}
	{
		t2* L_31 = V_0;
		t2* L_32 = p0;
		t2* L_33 = p0;
		int32_t L_34 = m2723(L_33, &m2723_MI);
		t2* L_35 = m2739(L_32, 2, ((int32_t)((int32_t)L_34-(int32_t)2)), &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_36 = m1091(NULL, L_31, L_35, &m1091_MI);
		p0 = L_36;
		goto IL_00cb;
	}

IL_00a6:
	{
		t2* L_37 = p0;
		t2* L_38 = m2739(L_37, 0, 2, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_39 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f4;
		t2* L_40 = p0;
		t2* L_41 = p0;
		int32_t L_42 = m2723(L_41, &m2723_MI);
		t2* L_43 = m2739(L_40, 2, ((int32_t)((int32_t)L_42-(int32_t)2)), &m2739_MI);
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
extern "C" t2* m8955 (t9 * __this , t2* p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1587, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		t2* L_3 = m4270(L_2, &m4270_MI);
		int32_t L_4 = m2723(L_3, &m2723_MI);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		t2* L_5 = m7846(NULL, (t2*) &_stringLiteral1696, &m7846_MI);
		V_0 = L_5;
		t2* L_6 = V_0;
		t563 * L_7 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_7, L_6, &m2909_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002d:
	{
		bool L_8 = m11530(NULL, &m11530_MI);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		t2* L_9 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_10 = m8954(NULL, L_9, &m8954_MI);
		p0 = L_10;
	}

IL_003e:
	{
		t2* L_11 = p0;
		t2* L_12 = p0;
		int32_t L_13 = m2723(L_12, &m2723_MI);
		uint16_t L_14 = m2738(L_11, ((int32_t)((int32_t)L_13-(int32_t)1)), &m2738_MI);
		V_1 = L_14;
		t2* L_15 = p0;
		int32_t L_16 = m2723(L_15, &m2723_MI);
		if ((((int32_t)L_16) < ((int32_t)2)))
		{
			goto IL_00cb;
		}
	}
	{
		t2* L_17 = p0;
		uint16_t L_18 = m2738(L_17, 0, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_19 = m8956(NULL, L_18, &m8956_MI);
		if (!L_19)
		{
			goto IL_00cb;
		}
	}
	{
		t2* L_20 = p0;
		uint16_t L_21 = m2738(L_20, 1, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_22 = m8956(NULL, L_21, &m8956_MI);
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		t2* L_23 = p0;
		int32_t L_24 = m2723(L_23, &m2723_MI);
		if ((((int32_t)L_24) == ((int32_t)2)))
		{
			goto IL_008f;
		}
	}
	{
		t2* L_25 = p0;
		t2* L_26 = p0;
		uint16_t L_27 = m2738(L_26, 0, &m2738_MI);
		int32_t L_28 = m4269(L_25, L_27, 2, &m4269_MI);
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_009a;
		}
	}

IL_008f:
	{
		t563 * L_29 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_29, (t2*) &_stringLiteral1697, &m2909_MI);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_009a:
	{
		t2* L_30 = p0;
		uint16_t L_31 = m2738(L_30, 0, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_32 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_00bc;
		}
	}
	{
		t2* L_33 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_34 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f1;
		uint16_t L_35 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		t2* L_36 = m4448(L_33, L_34, L_35, &m4448_MI);
		p0 = L_36;
	}

IL_00bc:
	{
		t2* L_37 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_38 = m8963(NULL, L_37, &m8963_MI);
		p0 = L_38;
		goto IL_016c;
	}

IL_00cb:
	{
		t2* L_39 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_40 = m8958(NULL, L_39, &m8958_MI);
		if (L_40)
		{
			goto IL_00ec;
		}
	}
	{
		t2* L_41 = m8832(NULL, &m8832_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_42 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f4;
		t2* L_43 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_44 = m399(NULL, L_41, L_42, L_43, &m399_MI);
		p0 = L_44;
		goto IL_0162;
	}

IL_00ec:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_45 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0162;
		}
	}
	{
		t2* L_46 = p0;
		int32_t L_47 = m2723(L_46, &m2723_MI);
		if ((((int32_t)L_47) < ((int32_t)2)))
		{
			goto IL_0162;
		}
	}
	{
		t2* L_48 = p0;
		uint16_t L_49 = m2738(L_48, 0, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_50 = m8956(NULL, L_49, &m8956_MI);
		if (!L_50)
		{
			goto IL_0162;
		}
	}
	{
		t2* L_51 = p0;
		uint16_t L_52 = m2738(L_51, 1, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_53 = m8956(NULL, L_52, &m8956_MI);
		if (L_53)
		{
			goto IL_0162;
		}
	}
	{
		t2* L_54 = m8832(NULL, &m8832_MI);
		V_2 = L_54;
		t2* L_55 = V_2;
		uint16_t L_56 = m2738(L_55, 1, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_57 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f5;
		if ((!(((uint32_t)L_56) == ((uint32_t)L_57))))
		{
			goto IL_0142;
		}
	}
	{
		t2* L_58 = V_2;
		t2* L_59 = m2739(L_58, 0, 2, &m2739_MI);
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
		int32_t L_65 = m4281(L_64, (t2*) &_stringLiteral346, &m4281_MI);
		int32_t L_66 = m4269(L_63, ((int32_t)92), ((int32_t)((int32_t)L_65+(int32_t)1)), &m4269_MI);
		t2* L_67 = m2739(L_62, 0, L_66, &m2739_MI);
		p0 = L_67;
	}

IL_0162:
	{
		t2* L_68 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_69 = m8963(NULL, L_68, &m8963_MI);
		p0 = L_69;
	}

IL_016c:
	{
		uint16_t L_70 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_71 = m8956(NULL, L_70, &m8956_MI);
		if (!L_71)
		{
			goto IL_019d;
		}
	}
	{
		t2* L_72 = p0;
		t2* L_73 = p0;
		int32_t L_74 = m2723(L_73, &m2723_MI);
		uint16_t L_75 = m2738(L_72, ((int32_t)((int32_t)L_74-(int32_t)1)), &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_76 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		if ((((int32_t)L_75) == ((int32_t)L_76)))
		{
			goto IL_019d;
		}
	}
	{
		t2* L_77 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_78 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		uint16_t L_79 = L_78;
		t9 * L_80 = Box(InitializedTypeInfo(&t303_TI), &L_79);
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
extern "C" bool m8956 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		uint16_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_1 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		uint16_t L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_3 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f1;
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
extern "C" t2* m8957 (t9 * __this , t2* p0, MethodInfo* method)
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
		t2* L_2 = m4270(L_1, &m4270_MI);
		int32_t L_3 = m2723(L_2, &m2723_MI);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_4, (t2*) &_stringLiteral1698, &m2909_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001d:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_6 = m8958(NULL, L_5, &m8958_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_8 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_004f;
		}
	}
	{
		t2* L_9 = p0;
		uint16_t L_10 = m2738(L_9, 0, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_11 = m8956(NULL, L_10, &m8956_MI);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_12 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f4;
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
		int32_t L_15 = m2723(L_14, &m2723_MI);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_006e;
		}
	}
	{
		t2* L_16 = p0;
		uint16_t L_17 = m2738(L_16, 0, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_18 = m8956(NULL, L_17, &m8956_MI);
		if (!L_18)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_19 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f4;
		return L_19;
	}

IL_006e:
	{
		t2* L_20 = p0;
		int32_t L_21 = m2723(L_20, &m2723_MI);
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
		uint16_t L_24 = m2738(L_23, 0, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_25 = m8956(NULL, L_24, &m8956_MI);
		if (!L_25)
		{
			goto IL_010f;
		}
	}
	{
		t2* L_26 = p0;
		uint16_t L_27 = m2738(L_26, 1, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_28 = m8956(NULL, L_27, &m8956_MI);
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
		int32_t L_32 = m2723(L_31, &m2723_MI);
		if ((((int32_t)L_30) >= ((int32_t)L_32)))
		{
			goto IL_00bc;
		}
	}
	{
		t2* L_33 = p0;
		int32_t L_34 = V_0;
		uint16_t L_35 = m2738(L_33, L_34, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_36 = m8956(NULL, L_35, &m8956_MI);
		if (!L_36)
		{
			goto IL_00a1;
		}
	}

IL_00bc:
	{
		int32_t L_37 = V_0;
		t2* L_38 = p0;
		int32_t L_39 = m2723(L_38, &m2723_MI);
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
		int32_t L_44 = m2723(L_43, &m2723_MI);
		if ((((int32_t)L_42) >= ((int32_t)L_44)))
		{
			goto IL_00e6;
		}
	}
	{
		t2* L_45 = p0;
		int32_t L_46 = V_0;
		uint16_t L_47 = m2738(L_45, L_46, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_48 = m8956(NULL, L_47, &m8956_MI);
		if (!L_48)
		{
			goto IL_00cb;
		}
	}

IL_00e6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_49 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f4;
		t2* L_50 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f4;
		t2* L_51 = p0;
		int32_t L_52 = V_0;
		t2* L_53 = m2739(L_51, 2, ((int32_t)((int32_t)L_52-(int32_t)2)), &m2739_MI);
		uint16_t L_54 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f1;
		uint16_t L_55 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		t2* L_56 = m4448(L_53, L_54, L_55, &m4448_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_57 = m399(NULL, L_49, L_50, L_56, &m399_MI);
		return L_57;
	}

IL_010f:
	{
		t2* L_58 = p0;
		uint16_t L_59 = m2738(L_58, 0, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_60 = m8956(NULL, L_59, &m8956_MI);
		if (!L_60)
		{
			goto IL_0123;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_61 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f4;
		return L_61;
	}

IL_0123:
	{
		t2* L_62 = p0;
		uint16_t L_63 = m2738(L_62, 1, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_64 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f5;
		if ((!(((uint32_t)L_63) == ((uint32_t)L_64))))
		{
			goto IL_014e;
		}
	}
	{
		t2* L_65 = p0;
		int32_t L_66 = m2723(L_65, &m2723_MI);
		if ((((int32_t)L_66) < ((int32_t)3)))
		{
			goto IL_014c;
		}
	}
	{
		t2* L_67 = p0;
		uint16_t L_68 = m2738(L_67, 2, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_69 = m8956(NULL, L_68, &m8956_MI);
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
		t2* L_71 = m8832(NULL, &m8832_MI);
		t2* L_72 = m2739(L_71, 0, 2, &m2739_MI);
		return L_72;
	}

IL_015b:
	{
		t2* L_73 = p0;
		int32_t L_74 = V_0;
		t2* L_75 = m2739(L_73, 0, L_74, &m2739_MI);
		return L_75;
	}
}
extern "C" bool m8958 (t9 * __this , t2* p0, MethodInfo* method)
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
		int32_t L_2 = m2723(L_1, &m2723_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t312* L_4 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f0;
		int32_t L_5 = m5980(L_3, L_4, &m5980_MI);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		t563 * L_6 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_6, (t2*) &_stringLiteral1653, &m2909_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0026:
	{
		t2* L_7 = p0;
		uint16_t L_8 = m2738(L_7, 0, &m2738_MI);
		V_0 = L_8;
		uint16_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_10 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0061;
		}
	}
	{
		uint16_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_12 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f1;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_13 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f7;
		if (L_13)
		{
			goto IL_005e;
		}
	}
	{
		t2* L_14 = p0;
		int32_t L_15 = m2723(L_14, &m2723_MI);
		if ((((int32_t)L_15) <= ((int32_t)1)))
		{
			goto IL_005e;
		}
	}
	{
		t2* L_16 = p0;
		uint16_t L_17 = m2738(L_16, 1, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_18 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f5;
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
extern TypeInfo* t312_TI_var;
extern "C" t312* m8959 (t9 * __this , MethodInfo* method)
{
	static bool m8959_init;
	if (!m8959_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m8959_init = true;
	}
	{
		bool L_0 = m11530(NULL, &m11530_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t312* L_1 = ((t312*)SZArrayNew(t312_TI_var, ((int32_t)36)));
		m1122(NULL, (t121 *)(t121 *)L_1, LoadFieldToken(&t2172_f20_FieldInfo), &m1122_MI);
		return L_1;
	}

IL_001a:
	{
		return ((t312*)SZArrayNew(t312_TI_var, 1));
	}
}
extern "C" int32_t m8960 (t9 * __this , t2* p0, MethodInfo* method)
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
		int32_t L_2 = m5749(L_1, ((int32_t)46), &m5749_MI);
		V_0 = L_2;
		t2* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t312* L_4 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f6;
		int32_t L_5 = m7366(L_3, L_4, &m7366_MI);
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
extern "C" t2* m8961 (t9 * __this , t2* p0, MethodInfo* method)
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
		int32_t L_3 = m2723(L_2, &m2723_MI);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}
	{
		t2* L_4 = p0;
		int32_t L_5 = V_0;
		uint16_t L_6 = m2738(L_4, L_5, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_7 = m8956(NULL, L_6, &m8956_MI);
		if (!L_7)
		{
			goto IL_0004;
		}
	}

IL_001f:
	{
		int32_t L_8 = V_0;
		t2* L_9 = p0;
		int32_t L_10 = m2723(L_9, &m2723_MI);
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
		int32_t L_15 = m2723(L_14, &m2723_MI);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_0049;
		}
	}
	{
		t2* L_16 = p0;
		int32_t L_17 = V_0;
		uint16_t L_18 = m2738(L_16, L_17, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_19 = m8956(NULL, L_18, &m8956_MI);
		if (!L_19)
		{
			goto IL_002e;
		}
	}

IL_0049:
	{
		t2* L_20 = p0;
		int32_t L_21 = V_0;
		t2* L_22 = m2739(L_20, 2, ((int32_t)((int32_t)L_21-(int32_t)2)), &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_23 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f1;
		uint16_t L_24 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		t2* L_25 = m4448(L_22, L_23, L_24, &m4448_MI);
		return L_25;
	}
}
extern "C" bool m8962 (t9 * __this , t2* p0, t2* p1, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	uint16_t V_2 = 0x0;
	int32_t G_B18_0 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2723(L_0, &m2723_MI);
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		t2* L_2 = p1;
		int32_t L_3 = m2723(L_2, &m2723_MI);
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
		uint16_t L_5 = m2738(L_4, 0, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_6 = m8956(NULL, L_5, &m8956_MI);
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		t2* L_7 = p0;
		uint16_t L_8 = m2738(L_7, 1, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_9 = m8956(NULL, L_8, &m8956_MI);
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		t2* L_10 = p1;
		uint16_t L_11 = m2738(L_10, 0, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_12 = m8956(NULL, L_11, &m8956_MI);
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		t2* L_13 = p1;
		uint16_t L_14 = m2738(L_13, 1, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_15 = m8956(NULL, L_14, &m8956_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_17 = m8961(NULL, L_16, &m8961_MI);
		V_0 = L_17;
		t2* L_18 = p1;
		t2* L_19 = m8961(NULL, L_18, &m8961_MI);
		V_1 = L_19;
		t2* L_20 = V_0;
		t2* L_21 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_22 = m4358(NULL, &m4358_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_23 = m5769(NULL, L_20, L_21, 1, L_22, &m5769_MI);
		return ((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		t2* L_24 = p0;
		uint16_t L_25 = m2738(L_24, 0, &m2738_MI);
		V_2 = L_25;
		t2* L_26 = p1;
		uint16_t L_27 = m2738(L_26, 0, &m2738_MI);
		bool L_28 = m7315((&V_2), L_27, &m7315_MI);
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
		uint16_t L_30 = m2738(L_29, 1, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_31 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f5;
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
		int32_t L_33 = m2723(L_32, &m2723_MI);
		if ((((int32_t)L_33) <= ((int32_t)2)))
		{
			goto IL_00c7;
		}
	}
	{
		t2* L_34 = p1;
		int32_t L_35 = m2723(L_34, &m2723_MI);
		if ((((int32_t)L_35) <= ((int32_t)2)))
		{
			goto IL_00c7;
		}
	}
	{
		t2* L_36 = p0;
		uint16_t L_37 = m2738(L_36, 2, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_38 = m8956(NULL, L_37, &m8956_MI);
		if (!L_38)
		{
			goto IL_00c5;
		}
	}
	{
		t2* L_39 = p1;
		uint16_t L_40 = m2738(L_39, 2, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_41 = m8956(NULL, L_40, &m8956_MI);
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
extern TypeInfo* t312_TI_var;
extern "C" t2* m8963 (t9 * __this , t2* p0, MethodInfo* method)
{
	static bool m8963_init;
	if (!m8963_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m8963_init = true;
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
		bool L_2 = m11530(NULL, &m11530_MI);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		t2* L_3 = p0;
		t2* L_4 = m4270(L_3, &m4270_MI);
		p0 = L_4;
	}

IL_0016:
	{
		t2* L_5 = p0;
		int32_t L_6 = m2723(L_5, &m2723_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_9 = m8957(NULL, L_8, &m8957_MI);
		V_0 = L_9;
		t2* L_10 = p0;
		t312* L_11 = ((t312*)SZArrayNew(t312_TI_var, 2));
		uint16_t L_12 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_11, 0)) = (uint16_t)L_12;
		t312* L_13 = L_11;
		uint16_t L_14 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 1)) = (uint16_t)L_14;
		t221* L_15 = m4444(L_10, L_13, &m4444_MI);
		V_1 = L_15;
		V_2 = 0;
		bool L_16 = m11530(NULL, &m11530_MI);
		if (!L_16)
		{
			goto IL_0072;
		}
	}
	{
		t2* L_17 = V_0;
		int32_t L_18 = m2723(L_17, &m2723_MI);
		if ((((int32_t)L_18) <= ((int32_t)2)))
		{
			goto IL_0072;
		}
	}
	{
		t2* L_19 = V_0;
		uint16_t L_20 = m2738(L_19, 0, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_21 = m8956(NULL, L_20, &m8956_MI);
		if (!L_21)
		{
			goto IL_0072;
		}
	}
	{
		t2* L_22 = V_0;
		uint16_t L_23 = m2738(L_22, 1, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_24 = m8956(NULL, L_23, &m8956_MI);
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
		bool L_26 = m11530(NULL, &m11530_MI);
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
		t2* L_32 = m5805((*(t2**)(t2**)SZArrayLdElema(L_29, L_31)), ((t312*)SZArrayNew(t312_TI_var, 0)), &m5805_MI);
		ArrayElementTypeCheck (L_27, L_32);
		*((t2**)(t2**)SZArrayLdElema(L_27, L_28)) = (t2*)L_32;
	}

IL_009c:
	{
		t221* L_33 = V_1;
		int32_t L_34 = V_5;
		int32_t L_35 = L_34;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_36 = m331(NULL, (*(t2**)(t2**)SZArrayLdElema(L_33, L_35)), (t2*) &_stringLiteral139, &m331_MI);
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
		int32_t L_41 = m2723((*(t2**)(t2**)SZArrayLdElema(L_38, L_40)), &m2723_MI);
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
		bool L_45 = m331(NULL, (*(t2**)(t2**)SZArrayLdElema(L_42, L_44)), (t2*) &_stringLiteral738, &m331_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_65 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f4;
		t221* L_66 = V_1;
		int32_t L_67 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_68 = m7381(NULL, L_65, L_66, 0, L_67, &m7381_MI);
		V_6 = L_68;
		bool L_69 = m11530(NULL, &m11530_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_71 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f4;
		t2* L_72 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_73 = m610(NULL, L_71, L_72, &m610_MI);
		V_6 = L_73;
	}

IL_0132:
	{
		t2* L_74 = V_0;
		t2* L_75 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_76 = m8962(NULL, L_74, L_75, &m8962_MI);
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
		uint16_t L_83 = m2738(L_82, 0, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_84 = m8956(NULL, L_83, &m8956_MI);
		if (L_84)
		{
			goto IL_0191;
		}
	}
	{
		t2* L_85 = V_0;
		t2* L_86 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_87 = m8962(NULL, L_85, L_86, &m8962_MI);
		if (!L_87)
		{
			goto IL_0191;
		}
	}
	{
		t2* L_88 = V_6;
		int32_t L_89 = m2723(L_88, &m2723_MI);
		if ((((int32_t)L_89) > ((int32_t)2)))
		{
			goto IL_018e;
		}
	}
	{
		t2* L_90 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_91 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f4;
		bool L_92 = m4445(L_90, L_91, &m4445_MI);
		if (L_92)
		{
			goto IL_018e;
		}
	}
	{
		t2* L_93 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_94 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		uint16_t L_95 = L_94;
		t9 * L_96 = Box(InitializedTypeInfo(&t303_TI), &L_95);
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
		t2* L_99 = m8832(NULL, &m8832_MI);
		V_7 = L_99;
		t2* L_100 = V_7;
		int32_t L_101 = m2723(L_100, &m2723_MI);
		if ((((int32_t)L_101) <= ((int32_t)1)))
		{
			goto IL_01ea;
		}
	}
	{
		t2* L_102 = V_7;
		uint16_t L_103 = m2738(L_102, 1, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_104 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f5;
		if ((!(((uint32_t)L_103) == ((uint32_t)L_104))))
		{
			goto IL_01ea;
		}
	}
	{
		t2* L_105 = V_6;
		int32_t L_106 = m2723(L_105, &m2723_MI);
		if (!L_106)
		{
			goto IL_01c9;
		}
	}
	{
		t2* L_107 = V_6;
		uint16_t L_108 = m2738(L_107, 0, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_109 = m8956(NULL, L_108, &m8956_MI);
		if (!L_109)
		{
			goto IL_01d9;
		}
	}

IL_01c9:
	{
		t2* L_110 = V_6;
		uint16_t L_111 = ((int32_t)92);
		t9 * L_112 = Box(InitializedTypeInfo(&t303_TI), &L_111);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_113 = m511(NULL, L_110, L_112, &m511_MI);
		V_6 = L_113;
	}

IL_01d9:
	{
		t2* L_114 = V_7;
		t2* L_115 = m2739(L_114, 0, 2, &m2739_MI);
		t2* L_116 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_117 = m610(NULL, L_115, L_116, &m610_MI);
		return L_117;
	}

IL_01ea:
	{
		t2* L_118 = V_7;
		t2* L_119 = V_7;
		int32_t L_120 = m2723(L_119, &m2723_MI);
		uint16_t L_121 = m2738(L_118, ((int32_t)((int32_t)L_120-(int32_t)1)), &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_122 = m8956(NULL, L_121, &m8956_MI);
		if (!L_122)
		{
			goto IL_0220;
		}
	}
	{
		t2* L_123 = V_6;
		uint16_t L_124 = m2738(L_123, 0, &m2738_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		bool L_125 = m8956(NULL, L_124, &m8956_MI);
		if (!L_125)
		{
			goto IL_0220;
		}
	}
	{
		t2* L_126 = V_7;
		t2* L_127 = V_6;
		t2* L_128 = m2765(L_127, 1, &m2765_MI);
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



extern MethodInfo m8964_MI;
extern "C" void m8964 (t1730 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7846(NULL, (t2*) &_stringLiteral1699, &m7846_MI);
		m8910(__this, L_0, &m8910_MI);
		return;
	}
}
extern "C" void m8965 (t1730 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m8910(__this, L_0, &m8910_MI);
		return;
	}
}
extern MethodInfo m8966_MI;
extern "C" void m8966 (t1730 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m8911(__this, L_0, L_1, &m8911_MI);
		return;
	}
}
#include "t1731.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1731_TI;
#include "t1731MD.h"



extern MethodInfo m8967_MI;
extern TypeInfo* t312_TI_var;
extern "C" void m8967 (t9 * __this , MethodInfo* method)
{
	static bool m8967_init;
	if (!m8967_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m8967_init = true;
	}
	{
		t312* L_0 = ((t312*)SZArrayNew(t312_TI_var, 2));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)42);
		t312* L_1 = L_0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 1)) = (uint16_t)((int32_t)63);
		((t1731_SFs*)InitializedTypeInfo(&t1731_TI)->static_fields)->f0 = L_1;
		t312* L_2 = ((t312*)SZArrayNew(t312_TI_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_3 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 0)) = (uint16_t)L_3;
		t312* L_4 = L_2;
		uint16_t L_5 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, 1)) = (uint16_t)L_5;
		((t1731_SFs*)InitializedTypeInfo(&t1731_TI)->static_fields)->f1 = L_4;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1499_TI;
#include "t1499MD.h"



#include "t298.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t298_TI;

#include "t1732.h"
#include "t1733.h"
#include "t1341.h"
extern TypeInfo t1732_TI;
extern TypeInfo t1733_TI;
extern TypeInfo t138_TI;
extern TypeInfo t1341_TI;
#include "t1732MD.h"
#include "t1733MD.h"
#include "t1341MD.h"
extern MethodInfo m8969_MI;
extern MethodInfo m1096_MI;
extern MethodInfo m7027_MI;
extern MethodInfo m6997_MI;
extern MethodInfo m6981_MI;
extern MethodInfo m7007_MI;
extern MethodInfo m8983_MI;
extern MethodInfo m8985_MI;
extern MethodInfo m7836_MI;
extern MethodInfo m7008_MI;
extern MethodInfo m8984_MI;
extern MethodInfo m8990_MI;
extern MethodInfo m8991_MI;
extern MethodInfo m5713_MI;
extern MethodInfo m8992_MI;
extern MethodInfo m8989_MI;


extern "C" void m7010 (t298 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8968_MI;
extern "C" void m8968 (t9 * __this , MethodInfo* method)
{
	{
		t1732 * L_0 = (t1732 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1732_TI));
		m8969(L_0, &m8969_MI);
		((t298_SFs*)InitializedTypeInfo(&t298_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m7056_MI;
extern "C" void m7056 (t298 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&m1096_MI, __this);
		return;
	}
}
extern "C" void m7027 (t298 * __this, bool p0, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m1096 (t298 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m7027_MI, __this, 1);
		return;
	}
}
extern MethodInfo m6995_MI;
extern TypeInfo* t730_TI_var;
extern "C" int32_t m6995 (t298 * __this, MethodInfo* method)
{
	static bool m6995_init;
	if (!m6995_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m6995_init = true;
	}
	t730* V_0 = {0};
	{
		V_0 = ((t730*)SZArrayNew(t730_TI_var, 1));
		t730* L_0 = V_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker3< int32_t, t730*, int32_t, int32_t >::Invoke(&m6997_MI, __this, L_0, 0, 1);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		t730* L_2 = V_0;
		int32_t L_3 = 0;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3));
	}

IL_0017:
	{
		return (-1);
	}
}
extern MethodInfo m6972_MI;
extern TypeInfo* t730_TI_var;
extern "C" void m6972 (t298 * __this, uint8_t p0, MethodInfo* method)
{
	static bool m6972_init;
	if (!m6972_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m6972_init = true;
	}
	t730* V_0 = {0};
	{
		V_0 = ((t730*)SZArrayNew(t730_TI_var, 1));
		t730* L_0 = V_0;
		uint8_t L_1 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)L_1;
		t730* L_2 = V_0;
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6981_MI, __this, L_2, 0, 1);
		return;
	}
}
extern MethodInfo m6987_MI;
extern "C" t9 * m6987 (t298 * __this, t730* p0, int32_t p1, int32_t p2, t470 * p3, t9 * p4, MethodInfo* method)
{
	t1733 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7007_MI, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_1, (t2*) &_stringLiteral1636, &m5734_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t9 * L_2 = p4;
		t1733 * L_3 = (t1733 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1733_TI));
		m8983(L_3, L_2, &m8983_MI);
		V_0 = L_3;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		t730* L_4 = p0;
		int32_t L_5 = p1;
		int32_t L_6 = p2;
		int32_t L_7 = (int32_t)VirtFuncInvoker3< int32_t, t730*, int32_t, int32_t >::Invoke(&m6997_MI, __this, L_4, L_5, L_6);
		V_1 = L_7;
		t1733 * L_8 = V_0;
		int32_t L_9 = V_1;
		m8985(L_8, (t138 *)NULL, L_9, &m8985_MI);
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
		t1733 * L_10 = V_0;
		t138 * L_11 = V_2;
		m8985(L_10, L_11, 0, &m8985_MI);
		goto IL_003a;
	} // end catch (depth: 1)

IL_003a:
	{
		t470 * L_12 = p3;
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		t470 * L_13 = p3;
		t1733 * L_14 = V_0;
		VirtActionInvoker1< t9 * >::Invoke(&m7836_MI, L_13, L_14);
	}

IL_0046:
	{
		t1733 * L_15 = V_0;
		return L_15;
	}
}
extern MethodInfo m6998_MI;
extern "C" t9 * m6998 (t298 * __this, t730* p0, int32_t p1, int32_t p2, t470 * p3, t9 * p4, MethodInfo* method)
{
	t1733 * V_0 = {0};
	t138 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7008_MI, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_1, (t2*) &_stringLiteral1642, &m5734_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t9 * L_2 = p4;
		t1733 * L_3 = (t1733 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1733_TI));
		m8983(L_3, L_2, &m8983_MI);
		V_0 = L_3;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		t730* L_4 = p0;
		int32_t L_5 = p1;
		int32_t L_6 = p2;
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6981_MI, __this, L_4, L_5, L_6);
		t1733 * L_7 = V_0;
		m8984(L_7, (t138 *)NULL, &m8984_MI);
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
		t1733 * L_8 = V_0;
		t138 * L_9 = V_1;
		m8984(L_8, L_9, &m8984_MI);
		goto IL_0037;
	} // end catch (depth: 1)

IL_0037:
	{
		t470 * L_10 = p3;
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		t470 * L_11 = p3;
		t1733 * L_12 = V_0;
		VirtFuncInvoker3< t9 *, t9 *, t470 *, t9 * >::Invoke(&m6984_MI, L_11, L_12, (t470 *)NULL, NULL);
	}

IL_0046:
	{
		t1733 * L_13 = V_0;
		return L_13;
	}
}
extern MethodInfo m6989_MI;
extern "C" int32_t m6989 (t298 * __this, t9 * p0, MethodInfo* method)
{
	t1733 * V_0 = {0};
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1640, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		V_0 = ((t1733 *)IsInst(L_2, InitializedTypeInfo(&t1733_TI)));
		t1733 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		t1733 * L_4 = V_0;
		int32_t L_5 = m8990(L_4, &m8990_MI);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}

IL_0021:
	{
		t563 * L_6 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_6, (t2*) &_stringLiteral1641, (t2*) &_stringLiteral1640, &m5719_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		t1733 * L_7 = V_0;
		bool L_8 = m8991(L_7, &m8991_MI);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		t1341 * L_9 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_9, (t2*) &_stringLiteral1700, &m5713_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0044:
	{
		t1733 * L_10 = V_0;
		m8992(L_10, 1, &m8992_MI);
		t1733 * L_11 = V_0;
		t138 * L_12 = m8989(L_11, &m8989_MI);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		t1733 * L_13 = V_0;
		t138 * L_14 = m8989(L_13, &m8989_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		t1733 * L_15 = V_0;
		int32_t L_16 = m8990(L_15, &m8990_MI);
		return L_16;
	}
}
extern MethodInfo m6999_MI;
extern "C" void m6999 (t298 * __this, t9 * p0, MethodInfo* method)
{
	t1733 * V_0 = {0};
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1640, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		V_0 = ((t1733 *)IsInst(L_2, InitializedTypeInfo(&t1733_TI)));
		t1733 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		t1733 * L_4 = V_0;
		int32_t L_5 = m8990(L_4, &m8990_MI);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0031;
		}
	}

IL_0021:
	{
		t563 * L_6 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_6, (t2*) &_stringLiteral1641, (t2*) &_stringLiteral1640, &m5719_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		t1733 * L_7 = V_0;
		bool L_8 = m8991(L_7, &m8991_MI);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		t1341 * L_9 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_9, (t2*) &_stringLiteral1701, &m5713_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0044:
	{
		t1733 * L_10 = V_0;
		m8992(L_10, 1, &m8992_MI);
		t1733 * L_11 = V_0;
		t138 * L_12 = m8989(L_11, &m8989_MI);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		t1733 * L_13 = V_0;
		t138 * L_14 = m8989(L_13, &m8989_MI);
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



extern "C" void m8969 (t1732 * __this, MethodInfo* method)
{
	{
		m7010(__this, &m7010_MI);
		return;
	}
}
extern MethodInfo m8970_MI;
extern "C" bool m8970 (t1732 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8971_MI;
extern "C" bool m8971 (t1732 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8972_MI;
extern "C" bool m8972 (t1732 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8973_MI;
extern "C" int64_t m8973 (t1732 * __this, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
extern MethodInfo m8974_MI;
extern "C" int64_t m8974 (t1732 * __this, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
extern MethodInfo m8975_MI;
extern "C" void m8975 (t1732 * __this, int64_t p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8976_MI;
extern "C" void m8976 (t1732 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8977_MI;
extern "C" int32_t m8977 (t1732 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m8978_MI;
extern "C" int32_t m8978 (t1732 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
extern MethodInfo m8979_MI;
extern "C" int64_t m8979 (t1732 * __this, int64_t p0, int32_t p1, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
extern MethodInfo m8980_MI;
extern "C" void m8980 (t1732 * __this, int64_t p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8981_MI;
extern "C" void m8981 (t1732 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8982_MI;
extern "C" void m8982 (t1732 * __this, uint8_t p0, MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t301MD.h"
#include "t1548MD.h"
extern MethodInfo m1082_MI;
extern MethodInfo m1084_MI;
extern MethodInfo m6983_MI;


extern "C" void m8983 (t1733 * __this, t9 * p0, MethodInfo* method)
{
	{
		__this->f4 = (-1);
		m336(__this, &m336_MI);
		t9 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" void m8984 (t1733 * __this, t138 * p0, MethodInfo* method)
{
	t1733 * V_0 = {0};
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
		t1733 * L_1 = V_0;
		m1082(NULL, L_1, &m1082_MI);
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			t1485 * L_2 = (__this->f5);
			if (!L_2)
			{
				goto IL_002a;
			}
		}

IL_001e:
		{
			t1485 * L_3 = (__this->f5);
			m6983(L_3, &m6983_MI);
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
		t1733 * L_4 = V_0;
		m1084(NULL, L_4, &m1084_MI);
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
extern "C" void m8985 (t1733 * __this, t138 * p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p1;
		__this->f4 = L_0;
		t138 * L_1 = p0;
		m8984(__this, L_1, &m8984_MI);
		return;
	}
}
extern MethodInfo m8986_MI;
extern "C" t9 * m8986 (t1733 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8987_MI;
extern "C" t1486 * m8987 (t1733 * __this, MethodInfo* method)
{
	t1733 * V_0 = {0};
	t1486 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1733 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1485 * L_1 = (__this->f5);
			if (L_1)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_2 = (__this->f1);
			t1485 * L_3 = (t1485 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1485_TI));
			m6982(L_3, L_2, &m6982_MI);
			__this->f5 = L_3;
		}

IL_0021:
		{
			t1485 * L_4 = (__this->f5);
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
		t1733 * L_5 = V_0;
		m1084(NULL, L_5, &m1084_MI);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0033:
	{
		t1486 * L_6 = V_1;
		return L_6;
	}
}
extern MethodInfo m8988_MI;
extern "C" bool m8988 (t1733 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" t138 * m8989 (t1733 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" int32_t m8990 (t1733 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" bool m8991 (t1733 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m8992 (t1733 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
#include "t1734.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1734_TI;
#include "t1734MD.h"

#include "t1719MD.h"
extern MethodInfo m8999_MI;


extern MethodInfo m8993_MI;
extern "C" void m8993 (t1734 * __this, MethodInfo* method)
{
	{
		m8999(__this, &m8999_MI);
		return;
	}
}
extern MethodInfo m8994_MI;
extern "C" int32_t m8994 (t1734 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
extern MethodInfo m8995_MI;
extern "C" int32_t m8995 (t1734 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
extern MethodInfo m8996_MI;
extern "C" int32_t m8996 (t1734 * __this, t312* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m8997_MI;
extern "C" t2* m8997 (t1734 * __this, MethodInfo* method)
{
	{
		return (t2*)NULL;
	}
}
extern MethodInfo m8998_MI;
extern "C" t2* m8998 (t1734 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
#include "t1719.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1719_TI;

#include "t729.h"
#include "t296.h"
#include "t1713.h"
#include "t1665.h"
#include "t322.h"
extern TypeInfo t729_TI;
extern TypeInfo t1713_TI;
extern TypeInfo t1665_TI;
extern TypeInfo t322_TI;
#include "t1665MD.h"
#include "t729MD.h"
#include "t302MD.h"
#include "t1713MD.h"
#include "t160MD.h"
#include "t322MD.h"
extern MethodInfo m9040_MI;
extern MethodInfo m9001_MI;
extern MethodInfo m9005_MI;
extern MethodInfo m10862_MI;
extern MethodInfo m9003_MI;
extern MethodInfo m6945_MI;
extern MethodInfo m10854_MI;
extern MethodInfo m10858_MI;
extern MethodInfo m12008_MI;
extern MethodInfo m9043_MI;
extern MethodInfo m6918_MI;
extern MethodInfo m10864_MI;
extern MethodInfo m10866_MI;
extern MethodInfo m10865_MI;
extern MethodInfo m9007_MI;
extern MethodInfo m12006_MI;
extern MethodInfo m11771_MI;
extern MethodInfo m9008_MI;
extern MethodInfo m11571_MI;
extern MethodInfo m7710_MI;
extern MethodInfo m9012_MI;
extern MethodInfo m4357_MI;
extern MethodInfo m5884_MI;
extern MethodInfo m10892_MI;
extern MethodInfo m1165_MI;
extern MethodInfo m5989_MI;
extern MethodInfo m10897_MI;
extern MethodInfo m10888_MI;
extern MethodInfo m9011_MI;
extern MethodInfo m1171_MI;


extern "C" void m8999 (t1719 * __this, MethodInfo* method)
{
	{
		m9040(__this, &m9040_MI);
		return;
	}
}
extern MethodInfo m9000_MI;
extern "C" void m9000 (t1719 * __this, t298 * p0, t729 * p1, MethodInfo* method)
{
	{
		t298 * L_0 = p0;
		t729 * L_1 = p1;
		m9001(__this, L_0, L_1, 1, ((int32_t)1024), &m9001_MI);
		return;
	}
}
extern "C" void m9001 (t1719 * __this, t298 * p0, t729 * p1, bool p2, int32_t p3, MethodInfo* method)
{
	{
		m9040(__this, &m9040_MI);
		t298 * L_0 = p0;
		t729 * L_1 = p1;
		bool L_2 = p2;
		int32_t L_3 = p3;
		m9005(__this, L_0, L_1, L_2, L_3, &m9005_MI);
		return;
	}
}
extern MethodInfo m9002_MI;
extern "C" void m9002 (t1719 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_1 = m10862(NULL, &m10862_MI);
		m9003(__this, L_0, L_1, 1, ((int32_t)4096), &m9003_MI);
		return;
	}
}
extern "C" void m9003 (t1719 * __this, t2* p0, t729 * p1, bool p2, int32_t p3, MethodInfo* method)
{
	t298 * V_0 = {0};
	{
		m9040(__this, &m9040_MI);
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1587, &m339_MI);
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
		t563 * L_5 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_5, (t2*) &_stringLiteral1702, &m2909_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002c:
	{
		t2* L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t312* L_7 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f0;
		int32_t L_8 = m5980(L_6, L_7, &m5980_MI);
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_0045;
		}
	}
	{
		t563 * L_9 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_9, (t2*) &_stringLiteral1703, &m2909_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0045:
	{
		t729 * L_10 = p1;
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		t132 * L_11 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_11, (t2*) &_stringLiteral1582, &m339_MI);
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
		t903 * L_13 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4360(L_13, (t2*) &_stringLiteral1621, (t2*) &_stringLiteral1704, &m4360_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0068:
	{
		t2* L_14 = p0;
		t296 * L_15 = m6945(NULL, L_14, &m6945_MI);
		V_0 = L_15;
		t298 * L_16 = V_0;
		t729 * L_17 = p1;
		bool L_18 = p2;
		int32_t L_19 = p3;
		m9005(__this, L_16, L_17, L_18, L_19, &m9005_MI);
		return;
	}
}
extern MethodInfo m9004_MI;
extern "C" void m9004 (t9 * __this , MethodInfo* method)
{
	{
		t1734 * L_0 = (t1734 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1734_TI));
		m8993(L_0, &m8993_MI);
		((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f12 = L_0;
		return;
	}
}
extern TypeInfo* t730_TI_var;
extern TypeInfo* t312_TI_var;
extern "C" void m9005 (t1719 * __this, t298 * p0, t729 * p1, bool p2, int32_t p3, MethodInfo* method)
{
	static bool m9005_init;
	if (!m9005_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m9005_init = true;
	}
	t730* V_0 = {0};
	t1719 * G_B12_0 = {0};
	t1719 * G_B11_0 = {0};
	int32_t G_B13_0 = 0;
	t1719 * G_B13_1 = {0};
	int32_t G_B15_0 = 0;
	t1719 * G_B15_1 = {0};
	int32_t G_B14_0 = 0;
	t1719 * G_B14_1 = {0};
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	t1719 * G_B16_2 = {0};
	{
		t298 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1705, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t729 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1582, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t298 * L_4 = p0;
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7007_MI, L_4);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		t563 * L_6 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_6, (t2*) &_stringLiteral1706, &m2909_MI);
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
		t903 * L_8 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4360(L_8, (t2*) &_stringLiteral1621, (t2*) &_stringLiteral1704, &m4360_MI);
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
		t298 * L_10 = p0;
		__this->f9 = L_10;
		int32_t L_11 = p3;
		__this->f1 = ((t730*)SZArrayNew(t730_TI_var, L_11));
		int32_t L_12 = p3;
		__this->f5 = L_12;
		t729 * L_13 = p1;
		__this->f7 = L_13;
		t729 * L_14 = p1;
		t1713 * L_15 = (t1713 *)VirtFuncInvoker0< t1713 * >::Invoke(&m10854_MI, L_14);
		__this->f8 = L_15;
		t729 * L_16 = p1;
		t730* L_17 = (t730*)VirtFuncInvoker0< t730* >::Invoke(&m10858_MI, L_16);
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
		t730* L_20 = V_0;
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
		t729 * L_21 = p1;
		int32_t L_22 = p3;
		int32_t L_23 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m12008_MI, L_21, L_22);
		__this->f2 = ((t312*)SZArrayNew(t312_TI_var, ((int32_t)((int32_t)L_23+(int32_t)1))));
		__this->f3 = 0;
		__this->f4 = 0;
		return;
	}
}
extern MethodInfo m9006_MI;
extern "C" void m9006 (t1719 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t298 * L_1 = (__this->f9);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t298 * L_2 = (__this->f9);
		VirtActionInvoker0::Invoke(&m1096_MI, L_2);
	}

IL_0016:
	{
		__this->f1 = (t730*)NULL;
		__this->f2 = (t312*)NULL;
		__this->f7 = (t729 *)NULL;
		__this->f8 = (t1713 *)NULL;
		__this->f9 = (t298 *)NULL;
		bool L_3 = p0;
		m9043(__this, L_3, &m9043_MI);
		return;
	}
}
extern "C" int32_t m9007 (t1719 * __this, int32_t p0, MethodInfo* method)
{
	t730* V_0 = {0};
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
		t729 * L_1 = (__this->f7);
		t730* L_2 = (t730*)VirtFuncInvoker0< t730* >::Invoke(&m10858_MI, L_1);
		V_0 = L_2;
		t730* L_3 = V_0;
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
		t730* L_6 = (__this->f1);
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		t730* L_9 = V_0;
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
		t730* L_20 = (__this->f1);
		int32_t L_21 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_21))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_007f;
		}
	}
	{
		t730* L_22 = (__this->f1);
		int32_t L_23 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_22, L_23))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_24 = m6918(NULL, &m6918_MI);
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
		t730* L_26 = (__this->f1);
		int32_t L_27 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_27))) == ((uint32_t)((int32_t)239)))))
		{
			goto IL_00bf;
		}
	}
	{
		t730* L_28 = (__this->f1);
		int32_t L_29 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_28, L_29))) == ((uint32_t)((int32_t)187)))))
		{
			goto IL_00bf;
		}
	}
	{
		t730* L_30 = (__this->f1);
		int32_t L_31 = 2;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_31))) == ((uint32_t)((int32_t)191)))))
		{
			goto IL_00bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_32 = m10862(NULL, &m10862_MI);
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
		t730* L_34 = (__this->f1);
		int32_t L_35 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_34, L_35))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00f8;
		}
	}
	{
		t730* L_36 = (__this->f1);
		int32_t L_37 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_36, L_37))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_00f8;
		}
	}
	{
		t730* L_38 = (__this->f1);
		int32_t L_39 = 2;
		if (!(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_38, L_39)))
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_40 = m10864(NULL, &m10864_MI);
		__this->f7 = L_40;
		return 2;
	}

IL_00f8:
	{
		return 0;
	}

IL_00fa:
	{
		t730* L_41 = (__this->f1);
		int32_t L_42 = 0;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_41, L_42)))
		{
			goto IL_0139;
		}
	}
	{
		t730* L_43 = (__this->f1);
		int32_t L_44 = 1;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_43, L_44)))
		{
			goto IL_0139;
		}
	}
	{
		t730* L_45 = (__this->f1);
		int32_t L_46 = 2;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_45, L_46))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_0139;
		}
	}
	{
		t730* L_47 = (__this->f1);
		int32_t L_48 = 3;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_47, L_48))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0139;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_49 = m10866(NULL, &m10866_MI);
		__this->f7 = L_49;
		return 4;
	}

IL_0139:
	{
		t730* L_50 = (__this->f1);
		int32_t L_51 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_50, L_51))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0185;
		}
	}
	{
		t730* L_52 = (__this->f1);
		int32_t L_53 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_52, L_53))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_0185;
		}
	}
	{
		t730* L_54 = (__this->f1);
		int32_t L_55 = 2;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_54, L_55)))
		{
			goto IL_0178;
		}
	}
	{
		t730* L_56 = (__this->f1);
		int32_t L_57 = 3;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_56, L_57)))
		{
			goto IL_0178;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_58 = m10865(NULL, &m10865_MI);
		__this->f7 = L_58;
		return 4;
	}

IL_0178:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_59 = m10864(NULL, &m10864_MI);
		__this->f7 = L_59;
		return 2;
	}

IL_0185:
	{
		return 0;
	}
}
extern TypeInfo* t312_TI_var;
extern "C" int32_t m9008 (t1719 * __this, MethodInfo* method)
{
	static bool m9008_init;
	if (!m9008_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m9008_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t729 * V_2 = {0};
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
		t298 * L_0 = (__this->f9);
		t730* L_1 = (__this->f1);
		int32_t L_2 = (__this->f5);
		int32_t L_3 = (int32_t)VirtFuncInvoker3< int32_t, t730*, int32_t, int32_t >::Invoke(&m6997_MI, L_0, L_1, 0, L_2);
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
		t729 * L_8 = (__this->f7);
		V_2 = L_8;
		int32_t L_9 = V_0;
		int32_t L_10 = m9007(__this, L_9, &m9007_MI);
		V_1 = L_10;
		t729 * L_11 = V_2;
		t729 * L_12 = (__this->f7);
		if ((((t9*)(t729 *)L_11) == ((t9*)(t729 *)L_12)))
		{
			goto IL_00a8;
		}
	}
	{
		t729 * L_13 = V_2;
		int32_t L_14 = (__this->f5);
		int32_t L_15 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m12008_MI, L_13, L_14);
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
		t729 * L_16 = (__this->f7);
		int32_t L_17 = (__this->f5);
		int32_t L_18 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m12008_MI, L_16, L_17);
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
		__this->f2 = ((t312*)SZArrayNew(t312_TI_var, L_21));
	}

IL_0097:
	{
		t729 * L_22 = (__this->f7);
		t1713 * L_23 = (t1713 *)VirtFuncInvoker0< t1713 * >::Invoke(&m10854_MI, L_22);
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
		t1713 * L_27 = (__this->f8);
		t730* L_28 = (__this->f1);
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		t312* L_31 = (__this->f2);
		int32_t L_32 = (int32_t)VirtFuncInvoker5< int32_t, t730*, int32_t, int32_t, t312*, int32_t >::Invoke(&m12006_MI, L_27, L_28, L_29, L_30, L_31, 0);
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
extern MethodInfo m9009_MI;
extern "C" int32_t m9009 (t1719 * __this, MethodInfo* method)
{
	{
		t298 * L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11771(L_1, (t2*) &_stringLiteral1707, (t2*) &_stringLiteral1708, &m11771_MI);
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
		int32_t L_4 = m9008(__this, &m9008_MI);
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
		t312* L_5 = (__this->f2);
		int32_t L_6 = (__this->f4);
		int32_t L_7 = L_6;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_7));
	}
}
extern MethodInfo m9010_MI;
extern "C" int32_t m9010 (t1719 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t298 * L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11771(L_1, (t2*) &_stringLiteral1707, (t2*) &_stringLiteral1708, &m11771_MI);
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
		int32_t L_4 = m9008(__this, &m9008_MI);
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
		t312* L_5 = (__this->f2);
		int32_t L_6 = (__this->f4);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f4 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_9));
	}
}
extern "C" int32_t m9011 (t1719 * __this, t312* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B16_0 = 0;
	{
		t298 * L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11771(L_1, (t2*) &_stringLiteral1707, (t2*) &_stringLiteral1708, &m11771_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t312* L_2 = p0;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1053, &m339_MI);
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
		t903 * L_5 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4360(L_5, (t2*) &_stringLiteral400, (t2*) &_stringLiteral811, &m4360_MI);
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
		t903 * L_7 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4360(L_7, (t2*) &_stringLiteral492, (t2*) &_stringLiteral811, &m4360_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004e:
	{
		int32_t L_8 = p1;
		t312* L_9 = p0;
		int32_t L_10 = p2;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_0061;
		}
	}
	{
		t563 * L_11 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_11, (t2*) &_stringLiteral1709, &m2909_MI);
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
		int32_t L_14 = m9008(__this, &m9008_MI);
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
		int32_t L_20 = m11571(NULL, ((int32_t)((int32_t)L_17-(int32_t)L_18)), L_19, &m11571_MI);
		V_1 = L_20;
		t312* L_21 = (__this->f2);
		int32_t L_22 = (__this->f4);
		t312* L_23 = p0;
		int32_t L_24 = p1;
		int32_t L_25 = V_1;
		m7710(NULL, (t121 *)(t121 *)L_21, L_22, (t121 *)(t121 *)L_23, L_24, L_25, &m7710_MI);
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
extern "C" int32_t m9012 (t1719 * __this, MethodInfo* method)
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
		t312* L_0 = (__this->f2);
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
extern MethodInfo m9013_MI;
extern "C" t2* m9013 (t1719 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t322 * V_2 = {0};
	t322 * V_3 = {0};
	{
		t298 * L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11771(L_1, (t2*) &_stringLiteral1707, (t2*) &_stringLiteral1708, &m11771_MI);
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
		int32_t L_4 = m9008(__this, &m9008_MI);
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
		int32_t L_6 = m9012(__this, &m9012_MI);
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
		t312* L_11 = (__this->f2);
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_15 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_15 = m4377(L_15, L_11, L_12, ((int32_t)((int32_t)L_13-(int32_t)L_14)), &m4357_MI);
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
		t322 * L_17 = (__this->f11);
		t322 * L_18 = (__this->f11);
		int32_t L_19 = m5884(L_18, &m5884_MI);
		t2* L_20 = m10892(L_17, 0, L_19, &m10892_MI);
		return L_20;
	}

IL_0078:
	{
		t322 * L_21 = (__this->f11);
		if (L_21)
		{
			goto IL_008d;
		}
	}
	{
		t322 * L_22 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m1165(L_22, &m1165_MI);
		__this->f11 = L_22;
		goto IL_0099;
	}

IL_008d:
	{
		t322 * L_23 = (__this->f11);
		m5989(L_23, 0, &m5989_MI);
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
		t322 * L_26 = (__this->f11);
		t312* L_27 = (__this->f2);
		int32_t L_28 = V_0;
		int32_t L_29 = (__this->f3);
		int32_t L_30 = V_0;
		m10897(L_26, L_27, L_28, ((int32_t)((int32_t)L_29-(int32_t)L_30)), &m10897_MI);
		int32_t L_31 = m9008(__this, &m9008_MI);
		if (L_31)
		{
			goto IL_0118;
		}
	}
	{
		t322 * L_32 = (__this->f11);
		int32_t L_33 = m10888(L_32, &m10888_MI);
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0100;
		}
	}
	{
		t322 * L_34 = (__this->f11);
		V_2 = L_34;
		__this->f11 = (t322 *)NULL;
		t322 * L_35 = V_2;
		t322 * L_36 = V_2;
		int32_t L_37 = m5884(L_36, &m5884_MI);
		t2* L_38 = m10892(L_35, 0, L_37, &m10892_MI);
		return L_38;
	}

IL_0100:
	{
		t322 * L_39 = (__this->f11);
		t322 * L_40 = (__this->f11);
		int32_t L_41 = m5884(L_40, &m5884_MI);
		t2* L_42 = m10892(L_39, 0, L_41, &m10892_MI);
		return L_42;
	}

IL_0118:
	{
		int32_t L_43 = (__this->f4);
		V_0 = L_43;
		int32_t L_44 = m9012(__this, &m9012_MI);
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
		t322 * L_49 = (__this->f11);
		t312* L_50 = (__this->f2);
		int32_t L_51 = V_0;
		int32_t L_52 = V_1;
		int32_t L_53 = V_0;
		m10897(L_49, L_50, L_51, ((int32_t)((int32_t)L_52-(int32_t)L_53)), &m10897_MI);
		t322 * L_54 = (__this->f11);
		int32_t L_55 = m10888(L_54, &m10888_MI);
		if ((((int32_t)L_55) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0177;
		}
	}
	{
		t322 * L_56 = (__this->f11);
		V_3 = L_56;
		__this->f11 = (t322 *)NULL;
		t322 * L_57 = V_3;
		t322 * L_58 = V_3;
		int32_t L_59 = m5884(L_58, &m5884_MI);
		t2* L_60 = m10892(L_57, 0, L_59, &m10892_MI);
		return L_60;
	}

IL_0177:
	{
		t322 * L_61 = (__this->f11);
		t322 * L_62 = (__this->f11);
		int32_t L_63 = m5884(L_62, &m5884_MI);
		t2* L_64 = m10892(L_61, 0, L_63, &m10892_MI);
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
		t322 * L_66 = (__this->f11);
		t322 * L_67 = (__this->f11);
		int32_t L_68 = m5884(L_67, &m5884_MI);
		t2* L_69 = m10892(L_66, 0, L_68, &m10892_MI);
		return L_69;
	}

IL_01ac:
	{
		goto IL_0099;
	}
}
extern MethodInfo m9014_MI;
extern TypeInfo* t312_TI_var;
extern "C" t2* m9014 (t1719 * __this, MethodInfo* method)
{
	static bool m9014_init;
	if (!m9014_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m9014_init = true;
	}
	t322 * V_0 = {0};
	int32_t V_1 = 0;
	t312* V_2 = {0};
	int32_t V_3 = 0;
	{
		t298 * L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11771(L_1, (t2*) &_stringLiteral1707, (t2*) &_stringLiteral1708, &m11771_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t322 * L_2 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m1165(L_2, &m1165_MI);
		V_0 = L_2;
		t312* L_3 = (__this->f2);
		V_1 = (((int32_t)(((t121 *)L_3)->max_length)));
		int32_t L_4 = V_1;
		V_2 = ((t312*)SZArrayNew(t312_TI_var, L_4));
		goto IL_003a;
	}

IL_0030:
	{
		t322 * L_5 = V_0;
		t312* L_6 = V_2;
		int32_t L_7 = V_3;
		m10897(L_5, L_6, 0, L_7, &m10897_MI);
	}

IL_003a:
	{
		t312* L_8 = V_2;
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)VirtFuncInvoker3< int32_t, t312*, int32_t, int32_t >::Invoke(&m9011_MI, __this, L_8, 0, L_9);
		int32_t L_11 = L_10;
		V_3 = L_11;
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		t322 * L_12 = V_0;
		t2* L_13 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1171_MI, L_12);
		return L_13;
	}
}
#include "t1735.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1735_TI;
#include "t1735MD.h"

#include "t1370MD.h"
extern MethodInfo m9021_MI;
extern MethodInfo m9016_MI;
extern MethodInfo m9060_MI;
extern MethodInfo m9018_MI;
extern MethodInfo m6903_MI;
extern MethodInfo m12007_MI;
extern MethodInfo m6990_MI;
extern MethodInfo m12009_MI;
extern MethodInfo m9023_MI;
extern MethodInfo m9022_MI;
extern MethodInfo m7026_MI;
extern MethodInfo m12010_MI;
extern MethodInfo m9025_MI;
extern MethodInfo m9026_MI;
extern MethodInfo m9020_MI;
extern MethodInfo m646_MI;


extern MethodInfo m9015_MI;
extern "C" void m9015 (t1735 * __this, t298 * p0, t729 * p1, MethodInfo* method)
{
	{
		t298 * L_0 = p0;
		t729 * L_1 = p1;
		m9016(__this, L_0, L_1, ((int32_t)1024), &m9016_MI);
		return;
	}
}
extern "C" void m9016 (t1735 * __this, t298 * p0, t729 * p1, int32_t p2, MethodInfo* method)
{
	{
		m9060(__this, &m9060_MI);
		t298 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1705, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t729 * L_2 = p1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1582, &m339_MI);
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
		t903 * L_5 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5721(L_5, (t2*) &_stringLiteral1621, &m5721_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0031:
	{
		t298 * L_6 = p0;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7008_MI, L_6);
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		t563 * L_8 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_8, (t2*) &_stringLiteral1710, &m2909_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0044:
	{
		t298 * L_9 = p0;
		__this->f3 = L_9;
		t729 * L_10 = p1;
		int32_t L_11 = p2;
		m9018(__this, L_10, L_11, &m9018_MI);
		return;
	}
}
extern MethodInfo m9017_MI;
extern "C" void m9017 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t298_TI));
		t298 * L_0 = ((t298_SFs*)InitializedTypeInfo(&t298_TI)->static_fields)->f0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_1 = m10862(NULL, &m10862_MI);
		t1735 * L_2 = (t1735 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1735_TI));
		m9016(L_2, L_0, L_1, 1, &m9016_MI);
		((t1735_SFs*)InitializedTypeInfo(&t1735_TI)->static_fields)->f11 = L_2;
		return;
	}
}
extern TypeInfo* t312_TI_var;
extern TypeInfo* t730_TI_var;
extern "C" void m9018 (t1735 * __this, t729 * p0, int32_t p1, MethodInfo* method)
{
	static bool m9018_init;
	if (!m9018_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m9018_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t729 * L_0 = p0;
		__this->f2 = L_0;
		int32_t L_1 = 0;
		V_1 = L_1;
		__this->f6 = L_1;
		int32_t L_2 = V_1;
		__this->f8 = L_2;
		int32_t L_3 = p1;
		int32_t L_4 = m6903(NULL, L_3, ((int32_t)256), &m6903_MI);
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->f7 = ((t312*)SZArrayNew(t312_TI_var, L_5));
		t729 * L_6 = p0;
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m12007_MI, L_6, L_7);
		__this->f5 = ((t730*)SZArrayNew(t730_TI_var, L_8));
		t298 * L_9 = (__this->f3);
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6990_MI, L_9);
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		t298 * L_11 = (__this->f3);
		int64_t L_12 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m12009_MI, L_11);
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
extern MethodInfo m9019_MI;
extern "C" void m9019 (t1735 * __this, bool p0, MethodInfo* method)
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
		VirtActionInvoker0::Invoke(&m9021_MI, __this);
	}

IL_0015:
	{
		return;
	}
}
extern "C" void m9020 (t1735 * __this, bool p0, MethodInfo* method)
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
		t298 * L_2 = (__this->f3);
		if (!L_2)
		{
			goto IL_003e;
		}
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(&m9021_MI, __this);
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
		t298 * L_4 = (__this->f3);
		VirtActionInvoker0::Invoke(&m1096_MI, L_4);
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
		__this->f3 = (t298 *)NULL;
		__this->f5 = (t730*)NULL;
		__this->f2 = (t729 *)NULL;
		__this->f7 = (t312*)NULL;
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
extern "C" void m9021 (t1735 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6911(L_1, (t2*) &_stringLiteral1711, &m6911_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		m9023(__this, &m9023_MI);
		int32_t L_2 = (__this->f6);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		m9022(__this, &m9022_MI);
		t298 * L_3 = (__this->f3);
		VirtActionInvoker0::Invoke(&m7026_MI, L_3);
	}

IL_0033:
	{
		return;
	}
}
extern "C" void m9022 (t1735 * __this, MethodInfo* method)
{
	t730* V_0 = {0};
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
		t729 * L_2 = (__this->f2);
		t730* L_3 = (t730*)VirtFuncInvoker0< t730* >::Invoke(&m10858_MI, L_2);
		V_0 = L_3;
		t730* L_4 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_4)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		t298 * L_5 = (__this->f3);
		t730* L_6 = V_0;
		t730* L_7 = V_0;
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6981_MI, L_5, L_6, 0, (((int32_t)(((t121 *)L_7)->max_length))));
	}

IL_0033:
	{
		__this->f10 = 1;
	}

IL_003a:
	{
		t298 * L_8 = (__this->f3);
		t730* L_9 = (__this->f5);
		int32_t L_10 = (__this->f6);
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6981_MI, L_8, L_9, 0, L_10);
		__this->f6 = 0;
		return;
	}
}
extern "C" void m9023 (t1735 * __this, MethodInfo* method)
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
		m9022(__this, &m9022_MI);
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
		t729 * L_2 = (__this->f2);
		t312* L_3 = (__this->f7);
		int32_t L_4 = (__this->f8);
		t730* L_5 = (__this->f5);
		int32_t L_6 = (__this->f6);
		int32_t L_7 = (int32_t)VirtFuncInvoker5< int32_t, t312*, int32_t, int32_t, t730*, int32_t >::Invoke(&m12010_MI, L_2, L_3, 0, L_4, L_5, L_6);
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
extern MethodInfo m9024_MI;
extern "C" void m9024 (t1735 * __this, t312* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6911(L_1, (t2*) &_stringLiteral1711, &m6911_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t312* L_2 = p0;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1053, &m339_MI);
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
		t903 * L_5 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4360(L_5, (t2*) &_stringLiteral400, (t2*) &_stringLiteral811, &m4360_MI);
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
		t903 * L_7 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4360(L_7, (t2*) &_stringLiteral492, (t2*) &_stringLiteral811, &m4360_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0049:
	{
		int32_t L_8 = p1;
		t312* L_9 = p0;
		int32_t L_10 = p2;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_005c;
		}
	}
	{
		t563 * L_11 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_11, (t2*) &_stringLiteral1709, &m2909_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_005c:
	{
		t312* L_12 = p0;
		int32_t L_13 = p1;
		int32_t L_14 = p2;
		m9025(__this, L_12, L_13, L_14, &m9025_MI);
		bool L_15 = (__this->f4);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		VirtActionInvoker0::Invoke(&m9021_MI, __this);
	}

IL_0073:
	{
		return;
	}
}
extern "C" void m9025 (t1735 * __this, t312* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0060;
	}

IL_0002:
	{
		t312* L_0 = (__this->f7);
		int32_t L_1 = (__this->f8);
		V_0 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))-(int32_t)L_1));
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		m9023(__this, &m9023_MI);
		t312* L_3 = (__this->f7);
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
		t312* L_7 = p0;
		int32_t L_8 = p1;
		t312* L_9 = (__this->f7);
		int32_t L_10 = (__this->f8);
		int32_t L_11 = V_0;
		m5792(NULL, (t121 *)(t121 *)L_7, ((int32_t)((int32_t)L_8*(int32_t)2)), (t121 *)(t121 *)L_9, ((int32_t)((int32_t)L_10*(int32_t)2)), ((int32_t)((int32_t)L_11*(int32_t)2)), &m5792_MI);
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
extern "C" void m9026 (t1735 * __this, t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2723(L_0, &m2723_MI);
		V_0 = L_1;
		V_1 = 0;
		goto IL_006d;
	}

IL_000b:
	{
		t312* L_2 = (__this->f7);
		int32_t L_3 = (__this->f8);
		V_2 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_2)->max_length)))-(int32_t)L_3));
		int32_t L_4 = V_2;
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		m9023(__this, &m9023_MI);
		t312* L_5 = (__this->f7);
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
		t312* L_9 = (__this->f7);
		int32_t L_10 = V_3;
		int32_t L_11 = (__this->f8);
		t2* L_12 = p0;
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		uint16_t L_15 = m2738(L_12, ((int32_t)((int32_t)L_13+(int32_t)L_14)), &m2738_MI);
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
extern MethodInfo m9027_MI;
extern "C" void m9027 (t1735 * __this, uint16_t p0, MethodInfo* method)
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
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6911(L_1, (t2*) &_stringLiteral1711, &m6911_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		int32_t L_2 = (__this->f8);
		t312* L_3 = (__this->f7);
		if ((((int32_t)L_2) < ((int32_t)(((int32_t)(((t121 *)L_3)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		m9023(__this, &m9023_MI);
	}

IL_0029:
	{
		t312* L_4 = (__this->f7);
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
		VirtActionInvoker0::Invoke(&m9021_MI, __this);
	}

IL_0050:
	{
		return;
	}
}
extern MethodInfo m9028_MI;
extern "C" void m9028 (t1735 * __this, t312* p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6911(L_1, (t2*) &_stringLiteral1711, &m6911_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t312* L_2 = p0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		t312* L_3 = p0;
		t312* L_4 = p0;
		m9025(__this, L_3, 0, (((int32_t)(((t121 *)L_4)->max_length))), &m9025_MI);
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
		VirtActionInvoker0::Invoke(&m9021_MI, __this);
	}

IL_002f:
	{
		return;
	}
}
extern MethodInfo m9029_MI;
extern "C" void m9029 (t1735 * __this, t2* p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6911(L_1, (t2*) &_stringLiteral1711, &m6911_MI);
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
		m9026(__this, L_3, &m9026_MI);
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
		VirtActionInvoker0::Invoke(&m9021_MI, __this);
	}

IL_002b:
	{
		return;
	}
}
extern MethodInfo m9030_MI;
extern "C" void m9030 (t1735 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m9020_MI, __this, 1);
		return;
	}
}
extern MethodInfo m9031_MI;
extern "C" void m9031 (t1735 * __this, MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(&m9020_MI, __this, 0);
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
#include "t887.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t887_TI;
#include "t887MD.h"

extern MethodInfo m9037_MI;
extern MethodInfo m11137_MI;
extern MethodInfo m7345_MI;
extern MethodInfo m9036_MI;


extern MethodInfo m4277_MI;
extern "C" void m4277 (t887 * __this, t2* p0, MethodInfo* method)
{
	{
		m9040(__this, &m9040_MI);
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1080, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2* L_2 = p0;
		__this->f1 = L_2;
		__this->f2 = 0;
		t2* L_3 = p0;
		int32_t L_4 = m2723(L_3, &m2723_MI);
		__this->f3 = L_4;
		return;
	}
}
extern MethodInfo m9032_MI;
extern "C" void m9032 (t887 * __this, bool p0, MethodInfo* method)
{
	{
		__this->f1 = (t2*)NULL;
		bool L_0 = p0;
		m9043(__this, L_0, &m9043_MI);
		return;
	}
}
extern MethodInfo m9033_MI;
extern "C" int32_t m9033 (t887 * __this, MethodInfo* method)
{
	{
		m9037(__this, &m9037_MI);
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
		uint16_t L_4 = m2738(L_2, L_3, &m2738_MI);
		return L_4;
	}
}
extern MethodInfo m9034_MI;
extern "C" int32_t m9034 (t887 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m9037(__this, &m9037_MI);
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
		uint16_t L_6 = m2738(L_2, L_5, &m2738_MI);
		return L_6;
	}
}
extern MethodInfo m9035_MI;
extern "C" int32_t m9035 (t887 * __this, t312* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m9037(__this, &m9037_MI);
		t312* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1053, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t312* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_2)->max_length)))-(int32_t)L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0022;
		}
	}
	{
		t563 * L_5 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m11137(L_5, &m11137_MI);
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
		t903 * L_8 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5898(L_8, &m5898_MI);
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
		t312* L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = V_0;
		m7345(L_15, L_16, L_17, L_18, L_19, &m7345_MI);
		int32_t L_20 = (__this->f2);
		int32_t L_21 = V_0;
		__this->f2 = ((int32_t)((int32_t)L_20+(int32_t)L_21));
		int32_t L_22 = V_0;
		return L_22;
	}
}
extern MethodInfo m4278_MI;
extern "C" t2* m4278 (t887 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	t2* V_4 = {0};
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	t887 * G_B14_1 = {0};
	int32_t G_B13_0 = 0;
	t887 * G_B13_1 = {0};
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	t887 * G_B15_2 = {0};
	{
		m9037(__this, &m9037_MI);
		int32_t L_0 = (__this->f2);
		t2* L_1 = (__this->f1);
		int32_t L_2 = m2723(L_1, &m2723_MI);
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
		int32_t L_5 = m4269(L_3, ((int32_t)13), L_4, &m4269_MI);
		V_0 = L_5;
		t2* L_6 = (__this->f1);
		int32_t L_7 = (__this->f2);
		int32_t L_8 = m4269(L_6, ((int32_t)10), L_7, &m4269_MI);
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
		t2* L_11 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9036_MI, __this);
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
		t2* L_25 = m2739(L_21, L_22, ((int32_t)((int32_t)L_23-(int32_t)L_24)), &m2739_MI);
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
extern "C" t2* m9036 (t887 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		m9037(__this, &m9037_MI);
		t2* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		int32_t L_2 = (__this->f3);
		int32_t L_3 = (__this->f2);
		t2* L_4 = m2739(L_0, L_1, ((int32_t)((int32_t)L_2-(int32_t)L_3)), &m2739_MI);
		V_0 = L_4;
		int32_t L_5 = (__this->f3);
		__this->f2 = L_5;
		t2* L_6 = V_0;
		return L_6;
	}
}
extern "C" void m9037 (t887 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		t2* L_1 = m7846(NULL, (t2*) &_stringLiteral1713, &m7846_MI);
		t1530 * L_2 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11771(L_2, (t2*) &_stringLiteral1712, L_1, &m11771_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		return;
	}
}
#include "t1736.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1736_TI;
#include "t1736MD.h"



extern MethodInfo m9038_MI;
extern "C" void m9038 (t1736 * __this, MethodInfo* method)
{
	{
		m9040(__this, &m9040_MI);
		return;
	}
}
extern MethodInfo m9039_MI;
extern "C" t2* m9039 (t1736 * __this, MethodInfo* method)
{
	{
		return (t2*)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1737.h"
extern TypeInfo t1737_TI;
#include "t1526MD.h"
#include "t1737MD.h"
extern MethodInfo m6895_MI;
extern MethodInfo m9045_MI;
extern MethodInfo m9050_MI;


extern "C" void m9040 (t1665 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9041_MI;
extern "C" void m9041 (t9 * __this , MethodInfo* method)
{
	{
		t1736 * L_0 = (t1736 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1736_TI));
		m9038(L_0, &m9038_MI);
		((t1665_SFs*)InitializedTypeInfo(&t1665_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m9042_MI;
extern "C" void m9042 (t1665 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m9043_MI, __this, 1);
		return;
	}
}
extern "C" void m9043 (t1665 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		m6895(NULL, __this, &m6895_MI);
	}

IL_0009:
	{
		return;
	}
}
extern MethodInfo m9044_MI;
extern "C" int32_t m9044 (t1665 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
extern "C" int32_t m9045 (t1665 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
extern MethodInfo m9046_MI;
extern "C" int32_t m9046 (t1665 * __this, t312* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_001c;
	}

IL_0004:
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9045_MI, __this);
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
		t312* L_3 = p0;
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
extern MethodInfo m9047_MI;
extern "C" t2* m9047 (t1665 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m9048_MI;
extern "C" t2* m9048 (t1665 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m9049_MI;
extern "C" t1665 * m9049 (t9 * __this , t1665 * p0, MethodInfo* method)
{
	{
		t1665 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1714, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1665 * L_2 = p0;
		if (!((t1737 *)IsInst(L_2, InitializedTypeInfo(&t1737_TI))))
		{
			goto IL_0018;
		}
	}
	{
		t1665 * L_3 = p0;
		return L_3;
	}

IL_0018:
	{
		t1665 * L_4 = p0;
		t1737 * L_5 = (t1737 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1737_TI));
		m9050(L_5, L_4, &m9050_MI);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9050 (t1737 * __this, t1665 * p0, MethodInfo* method)
{
	{
		m9040(__this, &m9040_MI);
		t1665 * L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m9051_MI;
extern "C" int32_t m9051 (t1737 * __this, MethodInfo* method)
{
	t1737 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1737 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1665 * L_1 = (__this->f1);
			int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9044_MI, L_1);
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
		t1737 * L_3 = V_0;
		m1084(NULL, L_3, &m1084_MI);
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
extern MethodInfo m9052_MI;
extern "C" t2* m9052 (t1737 * __this, MethodInfo* method)
{
	t1737 * V_0 = {0};
	t2* V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1737 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1665 * L_1 = (__this->f1);
			t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9047_MI, L_1);
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
		t1737 * L_3 = V_0;
		m1084(NULL, L_3, &m1084_MI);
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
extern MethodInfo m9053_MI;
extern "C" t2* m9053 (t1737 * __this, MethodInfo* method)
{
	t1737 * V_0 = {0};
	t2* V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1737 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1665 * L_1 = (__this->f1);
			t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9048_MI, L_1);
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
		t1737 * L_3 = V_0;
		m1084(NULL, L_3, &m1084_MI);
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
extern MethodInfo m9054_MI;
extern "C" int32_t m9054 (t1737 * __this, MethodInfo* method)
{
	t1737 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1737 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1665 * L_1 = (__this->f1);
			int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9045_MI, L_1);
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
		t1737 * L_3 = V_0;
		m1084(NULL, L_3, &m1084_MI);
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
extern MethodInfo m9055_MI;
extern "C" int32_t m9055 (t1737 * __this, t312* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t1737 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1737 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1665 * L_1 = (__this->f1);
			t312* L_2 = p0;
			int32_t L_3 = p1;
			int32_t L_4 = p2;
			int32_t L_5 = (int32_t)VirtFuncInvoker3< int32_t, t312*, int32_t, int32_t >::Invoke(&m9046_MI, L_1, L_2, L_3, L_4);
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
		t1737 * L_6 = V_0;
		m1084(NULL, L_6, &m1084_MI);
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
#include "t1738.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1738_TI;
#include "t1738MD.h"



extern MethodInfo m9056_MI;
extern "C" void m9056 (t1738 * __this, MethodInfo* method)
{
	{
		m9060(__this, &m9060_MI);
		return;
	}
}
extern MethodInfo m9057_MI;
extern "C" void m9057 (t1738 * __this, t2* p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9058_MI;
extern "C" void m9058 (t1738 * __this, uint16_t p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9059_MI;
extern "C" void m9059 (t1738 * __this, t312* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		return;
	}
}
#include "t1370.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1370_TI;

#include "t1739.h"
extern TypeInfo t1739_TI;
#include "t1739MD.h"
extern MethodInfo m5803_MI;
extern MethodInfo m4353_MI;
extern MethodInfo m9063_MI;
extern MethodInfo m9072_MI;
extern MethodInfo m9070_MI;
extern MethodInfo m9068_MI;
extern MethodInfo m9067_MI;
extern MethodInfo m9069_MI;
extern MethodInfo m9071_MI;


extern "C" void m9060 (t1370 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2* L_0 = m5803(NULL, &m5803_MI);
		t312* L_1 = m4353(L_0, &m4353_MI);
		__this->f0 = L_1;
		return;
	}
}
extern MethodInfo m9061_MI;
extern "C" void m9061 (t9 * __this , MethodInfo* method)
{
	{
		t1738 * L_0 = (t1738 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1738_TI));
		m9056(L_0, &m9056_MI);
		((t1370_SFs*)InitializedTypeInfo(&t1370_TI)->static_fields)->f1 = L_0;
		return;
	}
}
extern MethodInfo m9062_MI;
extern "C" void m9062 (t1370 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m9063_MI, __this, 1);
		return;
	}
}
extern "C" void m9063 (t1370 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		m6895(NULL, __this, &m6895_MI);
	}

IL_0009:
	{
		return;
	}
}
extern MethodInfo m9064_MI;
extern "C" void m9064 (t1370 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m9063_MI, __this, 1);
		m6895(NULL, __this, &m6895_MI);
		return;
	}
}
extern MethodInfo m9065_MI;
extern "C" void m9065 (t1370 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9066_MI;
extern "C" t1370 * m9066 (t9 * __this , t1370 * p0, bool p1, MethodInfo* method)
{
	{
		t1370 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1715, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1370 * L_2 = p0;
		if (!((t1739 *)IsInst(L_2, InitializedTypeInfo(&t1739_TI))))
		{
			goto IL_0018;
		}
	}
	{
		t1370 * L_3 = p0;
		return L_3;
	}

IL_0018:
	{
		t1370 * L_4 = p0;
		bool L_5 = p1;
		t1739 * L_6 = (t1739 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1739_TI));
		m9072(L_6, L_4, L_5, &m9072_MI);
		return L_6;
	}
}
extern "C" void m9067 (t1370 * __this, uint16_t p0, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m9068 (t1370 * __this, t312* p0, MethodInfo* method)
{
	{
		t312* L_0 = p0;
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
		t312* L_1 = p0;
		t312* L_2 = p0;
		VirtActionInvoker3< t312*, int32_t, int32_t >::Invoke(&m9070_MI, __this, L_1, 0, (((int32_t)(((t121 *)L_2)->max_length))));
		return;
	}
}
extern "C" void m9069 (t1370 * __this, t2* p0, MethodInfo* method)
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
		t312* L_2 = m4353(L_1, &m4353_MI);
		VirtActionInvoker1< t312* >::Invoke(&m9068_MI, __this, L_2);
	}

IL_000f:
	{
		return;
	}
}
extern "C" void m9070 (t1370 * __this, t312* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		t312* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1053, &m339_MI);
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
		t312* L_4 = p0;
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)(((t121 *)L_4)->max_length))))))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		t903 * L_5 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5721(L_5, (t2*) &_stringLiteral400, &m5721_MI);
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
		t312* L_8 = p0;
		int32_t L_9 = p2;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_8)->max_length)))-(int32_t)L_9)))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		t903 * L_10 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5721(L_10, (t2*) &_stringLiteral492, &m5721_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_003a:
	{
		goto IL_0053;
	}

IL_003c:
	{
		t312* L_11 = p0;
		int32_t L_12 = p1;
		int32_t L_13 = L_12;
		VirtActionInvoker1< uint16_t >::Invoke(&m9067_MI, __this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_13)));
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
extern "C" void m9071 (t1370 * __this, MethodInfo* method)
{
	{
		t312* L_0 = (__this->f0);
		VirtActionInvoker1< t312* >::Invoke(&m9068_MI, __this, L_0);
		return;
	}
}
extern MethodInfo m5948_MI;
extern "C" void m5948 (t1370 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m9069_MI, __this, L_0);
		VirtActionInvoker0::Invoke(&m9071_MI, __this);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9072 (t1739 * __this, t1370 * p0, bool p1, MethodInfo* method)
{
	{
		m9060(__this, &m9060_MI);
		t1370 * L_0 = p0;
		__this->f2 = L_0;
		bool L_1 = p1;
		__this->f3 = L_1;
		return;
	}
}
extern MethodInfo m9073_MI;
extern "C" void m9073 (t1739 * __this, MethodInfo* method)
{
	t1739 * V_0 = {0};
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
		t1739 * L_1 = V_0;
		m1082(NULL, L_1, &m1082_MI);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		t1370 * L_2 = (__this->f2);
		VirtActionInvoker0::Invoke(&m9062_MI, L_2);
		IL2CPP_LEAVE(0x25, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		t1739 * L_3 = V_0;
		m1084(NULL, L_3, &m1084_MI);
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
extern MethodInfo m9074_MI;
extern "C" void m9074 (t1739 * __this, MethodInfo* method)
{
	t1739 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1739 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1370 * L_1 = (__this->f2);
		VirtActionInvoker0::Invoke(&m9065_MI, L_1);
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		t1739 * L_2 = V_0;
		m1084(NULL, L_2, &m1084_MI);
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
extern MethodInfo m9075_MI;
extern "C" void m9075 (t1739 * __this, uint16_t p0, MethodInfo* method)
{
	t1739 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1739 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1370 * L_1 = (__this->f2);
		uint16_t L_2 = p0;
		VirtActionInvoker1< uint16_t >::Invoke(&m9067_MI, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		t1739 * L_3 = V_0;
		m1084(NULL, L_3, &m1084_MI);
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
extern MethodInfo m9076_MI;
extern "C" void m9076 (t1739 * __this, t312* p0, MethodInfo* method)
{
	t1739 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1739 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1370 * L_1 = (__this->f2);
		t312* L_2 = p0;
		VirtActionInvoker1< t312* >::Invoke(&m9068_MI, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		t1739 * L_3 = V_0;
		m1084(NULL, L_3, &m1084_MI);
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
extern MethodInfo m9077_MI;
extern "C" void m9077 (t1739 * __this, t2* p0, MethodInfo* method)
{
	t1739 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1739 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1370 * L_1 = (__this->f2);
		t2* L_2 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m9069_MI, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		t1739 * L_3 = V_0;
		m1084(NULL, L_3, &m1084_MI);
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
extern MethodInfo m9078_MI;
extern "C" void m9078 (t1739 * __this, t312* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t1739 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1739 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1370 * L_1 = (__this->f2);
		t312* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		VirtActionInvoker3< t312*, int32_t, int32_t >::Invoke(&m9070_MI, L_1, L_2, L_3, L_4);
		IL2CPP_LEAVE(0x1F, FINALLY_0018);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		t1739 * L_5 = V_0;
		m1084(NULL, L_5, &m1084_MI);
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
extern MethodInfo m9079_MI;
extern "C" void m9079 (t1739 * __this, MethodInfo* method)
{
	t1739 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1739 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1370 * L_1 = (__this->f2);
		VirtActionInvoker0::Invoke(&m9071_MI, L_1);
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		t1739 * L_2 = V_0;
		m1084(NULL, L_2, &m1084_MI);
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
extern MethodInfo m9080_MI;
extern "C" void m9080 (t1739 * __this, t2* p0, MethodInfo* method)
{
	t1739 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1739 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1370 * L_1 = (__this->f2);
		t2* L_2 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m5948_MI, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		t1739 * L_3 = V_0;
		m1084(NULL, L_3, &m1084_MI);
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
#include "t1740.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1740_TI;
#include "t1740MD.h"

extern TypeInfo t1206_TI;
extern Il2CppType t1206_0_0_0;
extern MethodInfo m9086_MI;


extern MethodInfo m9081_MI;
extern "C" void m9081 (t1740 * __this, t298 * p0, t729 * p1, MethodInfo* method)
{
	{
		t298 * L_0 = p0;
		t729 * L_1 = p1;
		m9000(__this, L_0, L_1, &m9000_MI);
		return;
	}
}
extern MethodInfo m9082_MI;
extern TypeInfo* t1206_TI_var;
extern "C" void m9082 (t9 * __this , MethodInfo* method)
{
	static bool m9082_init;
	if (!m9082_init)
	{
		t1206_TI_var = il2cpp_codegen_class_from_type(&t1206_0_0_0);
		m9082_init = true;
	}
	t2* V_0 = {0};
	{
		t2* L_0 = m5803(NULL, &m5803_MI);
		int32_t L_1 = m2723(L_0, &m2723_MI);
		((t1740_SFs*)InitializedTypeInfo(&t1740_TI)->static_fields)->f14 = ((t1206*)SZArrayNew(t1206_TI_var, L_1));
		t2* L_2 = m5803(NULL, &m5803_MI);
		V_0 = L_2;
		t2* L_3 = V_0;
		int32_t L_4 = m2723(L_3, &m2723_MI);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		t2* L_5 = V_0;
		uint16_t L_6 = m2738(L_5, 0, &m2738_MI);
		((t1740_SFs*)InitializedTypeInfo(&t1740_TI)->static_fields)->f15 = L_6;
	}

IL_002f:
	{
		return;
	}
}
extern MethodInfo m9083_MI;
extern "C" int32_t m9083 (t1740 * __this, MethodInfo* method)
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
			int32_t L_0 = m9009(__this, &m9009_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1549_TI, e.ex->object.klass))
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
extern MethodInfo m9084_MI;
extern "C" int32_t m9084 (t1740 * __this, MethodInfo* method)
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
			int32_t L_0 = m9010(__this, &m9010_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1549_TI, e.ex->object.klass))
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
extern MethodInfo m9085_MI;
extern "C" int32_t m9085 (t1740 * __this, t312* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		t312* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1716, &m339_MI);
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
		t903 * L_3 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4360(L_3, (t2*) &_stringLiteral400, (t2*) &_stringLiteral811, &m4360_MI);
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
		t903 * L_5 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4360(L_5, (t2*) &_stringLiteral492, (t2*) &_stringLiteral811, &m4360_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0036:
	{
		int32_t L_6 = p1;
		t312* L_7 = p0;
		int32_t L_8 = p2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))-(int32_t)L_8)))))
		{
			goto IL_0049;
		}
	}
	{
		t563 * L_9 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_9, (t2*) &_stringLiteral1717, &m2909_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0049:
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1740_TI));
		uint16_t L_10 = ((t1740_SFs*)InitializedTypeInfo(&t1740_TI)->static_fields)->f15;
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
			int32_t L_11 = m9010(__this, &m9010_MI);
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
			t312* L_15 = p0;
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
			bool L_23 = m9086(__this, (((uint16_t)L_22)), &m9086_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1549_TI, e.ex->object.klass))
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
extern "C" bool m9086 (t1740 * __this, uint16_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0036;
	}

IL_0004:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1740_TI));
		t1206* L_0 = ((t1740_SFs*)InitializedTypeInfo(&t1740_TI)->static_fields)->f14;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		if ((*(uint8_t*)(bool*)SZArrayLdElema(L_0, L_2)))
		{
			goto IL_0032;
		}
	}
	{
		uint16_t L_3 = p0;
		t2* L_4 = m5803(NULL, &m5803_MI);
		int32_t L_5 = V_0;
		uint16_t L_6 = m2738(L_4, L_5, &m2738_MI);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_6))))
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1740_TI));
		t1206* L_7 = ((t1740_SFs*)InitializedTypeInfo(&t1740_TI)->static_fields)->f14;
		int32_t L_8 = V_0;
		*((bool*)(bool*)SZArrayLdElema(L_7, L_8)) = (bool)1;
		int32_t L_9 = V_0;
		t1206* L_10 = ((t1740_SFs*)InitializedTypeInfo(&t1740_TI)->static_fields)->f14;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1740_TI));
		t1206* L_13 = ((t1740_SFs*)InitializedTypeInfo(&t1740_TI)->static_fields)->f14;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1740_TI));
		t1206* L_14 = ((t1740_SFs*)InitializedTypeInfo(&t1740_TI)->static_fields)->f14;
		int32_t L_15 = V_1;
		*((bool*)(bool*)SZArrayLdElema(L_14, L_15)) = (bool)0;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1740_TI));
		t1206* L_18 = ((t1740_SFs*)InitializedTypeInfo(&t1740_TI)->static_fields)->f14;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((t121 *)L_18)->max_length))))))
		{
			goto IL_0044;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m9087_MI;
extern "C" t2* m9087 (t1740 * __this, MethodInfo* method)
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
			t2* L_0 = m9013(__this, &m9013_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1549_TI, e.ex->object.klass))
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
extern MethodInfo m9088_MI;
extern "C" t2* m9088 (t1740 * __this, MethodInfo* method)
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
			t2* L_0 = m9014(__this, &m9014_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1549_TI, e.ex->object.klass))
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
#include "t1741.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1741_TI;
#include "t1741MD.h"



extern MethodInfo m9089_MI;
extern "C" void m9089 (t1741 * __this, t298 * p0, t729 * p1, MethodInfo* method)
{
	{
		t298 * L_0 = p0;
		t729 * L_1 = p1;
		m9015(__this, L_0, L_1, &m9015_MI);
		return;
	}
}
extern MethodInfo m9090_MI;
extern "C" void m9090 (t1741 * __this, MethodInfo* method)
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
		m9021(__this, &m9021_MI);
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
extern MethodInfo m9091_MI;
extern "C" void m9091 (t1741 * __this, t312* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		t312* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		m9024(__this, L_0, L_1, L_2, &m9024_MI);
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
extern MethodInfo m9092_MI;
extern "C" void m9092 (t1741 * __this, uint16_t p0, MethodInfo* method)
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
		m9027(__this, L_0, &m9027_MI);
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
extern MethodInfo m9093_MI;
extern "C" void m9093 (t1741 * __this, t312* p0, MethodInfo* method)
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
		t312* L_0 = p0;
		m9028(__this, L_0, &m9028_MI);
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
extern MethodInfo m9094_MI;
extern "C" void m9094 (t1741 * __this, t2* p0, MethodInfo* method)
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
		m9029(__this, L_0, &m9029_MI);
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
#include "t1742.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1742_TI;
#include "t1742MD.h"



#include "t1744.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1744_TI;
#include "t1744MD.h"

#include "t168.h"
#include "t1748.h"
#include "t1751.h"
#include "t1196.h"
#include "t1747.h"
#include "t1803.h"
#include "t1802.h"
#include "t1658.h"
#include "t1749.h"
#include "t1568.h"
#include "t1720.h"
#include "t1345.h"
extern TypeInfo t1751_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1196_TI;
extern TypeInfo t1658_TI;
extern TypeInfo t1749_TI;
extern TypeInfo t1745_TI;
extern TypeInfo t1750_TI;
extern TypeInfo t1568_TI;
extern TypeInfo t121_TI;
extern TypeInfo t1720_TI;
extern TypeInfo t1345_TI;
extern TypeInfo t1748_TI;
#include "t1345MD.h"
#include "t8MD.h"
#include "t1748MD.h"
#include "t1196MD.h"
#include "t1802MD.h"
#include "t1658MD.h"
#include "t575MD.h"
#include "t1749MD.h"
#include "t1720MD.h"
#include "t1568MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t117_0_0_0;
extern Il2CppType t8_0_0_0;
extern Il2CppType t122_0_0_0;
extern Il2CppType t1751_0_0_0;
extern Il2CppType t1745_0_0_0;
extern Il2CppType t1750_0_0_0;
extern MethodInfo m9105_MI;
extern MethodInfo m9448_MI;
extern MethodInfo m6994_MI;
extern MethodInfo m6974_MI;
extern MethodInfo m9473_MI;
extern MethodInfo m9476_MI;
extern MethodInfo m9102_MI;
extern MethodInfo m9475_MI;
extern MethodInfo m8654_MI;
extern MethodInfo m9479_MI;
extern MethodInfo m11897_MI;
extern MethodInfo m11894_MI;
extern MethodInfo m9478_MI;
extern MethodInfo m9724_MI;
extern MethodInfo m9482_MI;
extern MethodInfo m8299_MI;
extern MethodInfo m8305_MI;
extern MethodInfo m5820_MI;
extern MethodInfo m9096_MI;
extern MethodInfo m9099_MI;
extern MethodInfo m9106_MI;
extern MethodInfo m9313_MI;
extern MethodInfo m5940_MI;
extern MethodInfo m5746_MI;
extern MethodInfo m2737_MI;
extern MethodInfo m1092_MI;
extern MethodInfo m8850_MI;
extern MethodInfo m9317_MI;
extern MethodInfo m9337_MI;
extern MethodInfo m9565_MI;
extern MethodInfo m9460_MI;
extern MethodInfo m8304_MI;
extern MethodInfo m9486_MI;
extern MethodInfo m9487_MI;


extern MethodInfo m9095_MI;
extern TypeInfo* t158_TI_var;
extern TypeInfo* t730_TI_var;
extern "C" void m9095 (t1744 * __this, t1748 * p0, t2* p1, int32_t p2, bool p3, MethodInfo* method)
{
	static bool m9095_init;
	if (!m9095_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m9095_init = true;
	}
	t1196 * V_0 = {0};
	t730* V_1 = {0};
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	t730* V_4 = {0};
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
		m9448(__this, &m9448_MI);
		int32_t L_4 = p2;
		__this->f28 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)2048)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_5 = p2;
		p2 = ((int32_t)((int32_t)L_5&(int32_t)((int32_t)-2049)));
		t126 * L_6 = m329(NULL, LoadTypeToken(&t1751_0_0_0), &m329_MI);
		int32_t L_7 = p2;
		int32_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t1751_TI), &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t8_TI));
		bool L_10 = m6994(NULL, L_6, L_9, &m6994_MI);
		if (L_10)
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_11 = m4358(NULL, &m4358_MI);
		t158* L_12 = ((t158*)SZArrayNew(t158_TI_var, 1));
		int32_t L_13 = p2;
		int32_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t125_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 0)) = (t9 *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = m6974(NULL, L_11, (t2*) &_stringLiteral1718, L_12, &m6974_MI);
		t563 * L_17 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_17, L_16, (t2*) &_stringLiteral1619, &m5719_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00ab:
	{
		t1748 * L_18 = p0;
		t2* L_19 = m9473(L_18, &m9473_MI);
		__this->f11 = L_19;
		int32_t L_20 = p2;
		__this->f18 = L_20;
		t1748 * L_21 = p0;
		int32_t L_22 = m9476(L_21, &m9476_MI);
		__this->f16 = L_22;
		bool L_23 = m9102(__this, &m9102_MI);
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
		int32_t L_26 = m2723(L_25, &m2723_MI);
		if (L_26)
		{
			goto IL_00ea;
		}
	}

IL_00dd:
	{
		t2* L_27 = m8832(NULL, &m8832_MI);
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
		t1748 * L_29 = p0;
		t901 * L_30 = m9475(L_29, &m9475_MI);
		if (!L_30)
		{
			goto IL_011b;
		}
	}
	{
		t1748 * L_31 = p0;
		t901 * L_32 = m9475(L_31, &m9475_MI);
		t2* L_33 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8654_MI, L_32);
		__this->f15 = L_33;
		t1748 * L_34 = p0;
		t901 * L_35 = m9475(L_34, &m9475_MI);
		t2* L_36 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8654_MI, L_35);
		__this->f29 = L_36;
	}

IL_011b:
	{
		t1748 * L_37 = p0;
		t1196 * L_38 = m9479(L_37, &m9479_MI);
		V_0 = L_38;
		t1196 * L_39 = V_0;
		bool L_40 = m11897(NULL, L_39, (t1196 *)NULL, &m11897_MI);
		if (!L_40)
		{
			goto IL_0137;
		}
	}
	{
		t1196 * L_41 = V_0;
		t2* L_42 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11894_MI, L_41);
		__this->f14 = L_42;
	}

IL_0137:
	{
		t1748 * L_43 = p0;
		t1802 * L_44 = m9478(L_43, &m9478_MI);
		if (!L_44)
		{
			goto IL_0152;
		}
	}
	{
		t1748 * L_45 = p0;
		t1802 * L_46 = m9478(L_45, &m9478_MI);
		t1658 * L_47 = m9724(L_46, &m9724_MI);
		__this->f27 = L_47;
		goto IL_016e;
	}

IL_0152:
	{
		t1748 * L_48 = p0;
		t730* L_49 = m9482(L_48, &m9482_MI);
		V_1 = L_49;
		t730* L_50 = V_1;
		if (!L_50)
		{
			goto IL_016e;
		}
	}
	{
		t730* L_51 = V_1;
		if ((((int32_t)(((int32_t)(((t121 *)L_51)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_016e;
		}
	}
	{
		t730* L_52 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1658_TI));
		t1658 * L_53 = (t1658 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1658_TI));
		m8299(L_53, L_52, &m8299_MI);
		__this->f27 = L_53;
	}

IL_016e:
	{
		t1658 * L_54 = (__this->f27);
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
		t1658 * L_57 = (__this->f27);
		if (!L_57)
		{
			goto IL_0211;
		}
	}
	{
		t1658 * L_58 = (__this->f27);
		t730* L_59 = m8305(L_58, &m8305_MI);
		__this->f20 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_59)->max_length)))*(int32_t)2))));
		V_2 = 0;
		t1658 * L_60 = (__this->f27);
		t730* L_61 = m8305(L_60, &m8305_MI);
		V_4 = L_61;
		V_5 = 0;
		goto IL_0209;
	}

IL_01c5:
	{
		t730* L_62 = V_4;
		int32_t L_63 = V_5;
		int32_t L_64 = L_63;
		V_3 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_62, L_64));
		t2* L_65 = m5820((&V_3), (t2*) &_stringLiteral596, &m5820_MI);
		V_6 = L_65;
		t730* L_66 = (__this->f20);
		int32_t L_67 = V_2;
		int32_t L_68 = L_67;
		V_2 = ((int32_t)((int32_t)L_68+(int32_t)1));
		t2* L_69 = V_6;
		uint16_t L_70 = m2738(L_69, 0, &m2738_MI);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_66, L_68)) = (uint8_t)(((uint8_t)L_70));
		t730* L_71 = (__this->f20);
		int32_t L_72 = V_2;
		int32_t L_73 = L_72;
		V_2 = ((int32_t)((int32_t)L_73+(int32_t)1));
		t2* L_74 = V_6;
		uint16_t L_75 = m2738(L_74, 1, &m2738_MI);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_71, L_73)) = (uint8_t)(((uint8_t)L_75));
		int32_t L_76 = V_5;
		V_5 = ((int32_t)((int32_t)L_76+(int32_t)1));
	}

IL_0209:
	{
		int32_t L_77 = V_5;
		t730* L_78 = V_4;
		if ((((int32_t)L_77) < ((int32_t)(((int32_t)(((t121 *)L_78)->max_length))))))
		{
			goto IL_01c5;
		}
	}

IL_0211:
	{
		m9096(NULL, __this, &m9096_MI);
		return;
	}
}
extern "C" void m9096 (t9 * __this , t1744 * p0, MethodInfo* method)
{
	typedef void (*m9096_ftn) (t1744 *);
	static m9096_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9096_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.AssemblyBuilder::basic_init(System.Reflection.Emit.AssemblyBuilder)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m9097_MI;
extern "C" t2* m9097 (t1744 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9105(__this, &m9105_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9098_MI;
extern "C" t1749 * m9098 (t1744 * __this, t2* p0, bool p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p0;
		bool L_2 = p1;
		t1749 * L_3 = m9099(__this, L_0, L_1, L_2, 1, &m9099_MI);
		return L_3;
	}
}
extern TypeInfo* t1745_TI_var;
extern "C" t1749 * m9099 (t1744 * __this, t2* p0, t2* p1, bool p2, bool p3, MethodInfo* method)
{
	static bool m9099_init;
	if (!m9099_init)
	{
		t1745_TI_var = il2cpp_codegen_class_from_type(&t1745_0_0_0);
		m9099_init = true;
	}
	t1749 * V_0 = {0};
	t1745* V_1 = {0};
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		m9106(__this, L_0, L_1, 0, &m9106_MI);
		bool L_2 = p3;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		t2* L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_4 = m8951(NULL, L_3, &m8951_MI);
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
		t2* L_8 = m399(NULL, (t2*) &_stringLiteral1719, L_7, (t2*) &_stringLiteral1720, &m399_MI);
		t563 * L_9 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_9, L_8, &m2909_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0035:
	{
		bool L_10 = m9102(__this, &m9102_MI);
		if (L_10)
		{
			goto IL_0048;
		}
	}
	{
		t169 * L_11 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_11, (t2*) &_stringLiteral1721, &m5734_MI);
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
		t1341 * L_13 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_13, (t2*) &_stringLiteral1722, &m5713_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_005b:
	{
		t2* L_14 = p0;
		t2* L_15 = p1;
		bool L_16 = p2;
		bool L_17 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1749_TI));
		t1749 * L_18 = (t1749 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1749_TI));
		m9313(L_18, __this, L_14, L_15, L_16, L_17, &m9313_MI);
		V_0 = L_18;
		t1745* L_19 = (__this->f10);
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
		t1341 * L_21 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_21, (t2*) &_stringLiteral1723, &m5713_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_0082:
	{
		t1745* L_22 = (__this->f10);
		if (!L_22)
		{
			goto IL_00b7;
		}
	}
	{
		t1745* L_23 = (__this->f10);
		V_1 = ((t1745*)SZArrayNew(t1745_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_23)->max_length)))+(int32_t)1))));
		t1745* L_24 = (__this->f10);
		t1745* L_25 = V_1;
		t1745* L_26 = (__this->f10);
		m5940(NULL, (t121 *)(t121 *)L_24, (t121 *)(t121 *)L_25, (((int32_t)(((t121 *)L_26)->max_length))), &m5940_MI);
		t1745* L_27 = V_1;
		__this->f10 = L_27;
		goto IL_00c3;
	}

IL_00b7:
	{
		__this->f10 = ((t1745*)SZArrayNew(t1745_TI_var, 1));
	}

IL_00c3:
	{
		t1745* L_28 = (__this->f10);
		t1745* L_29 = (__this->f10);
		t1749 * L_30 = V_0;
		ArrayElementTypeCheck (L_28, L_30);
		*((t1749 **)(t1749 **)SZArrayLdElema(L_28, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_29)->max_length)))-(int32_t)1)))) = (t1749 *)L_30;
		t1749 * L_31 = V_0;
		return L_31;
	}
}
extern MethodInfo m9100_MI;
extern TypeInfo* t1750_TI_var;
extern "C" t1750* m9100 (t1744 * __this, MethodInfo* method)
{
	static bool m9100_init;
	if (!m9100_init)
	{
		t1750_TI_var = il2cpp_codegen_class_from_type(&t1750_0_0_0);
		m9100_init = true;
	}
	{
		t1745* L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((t1750*)SZArrayNew(t1750_TI_var, 0));
	}

IL_000f:
	{
		t1745* L_1 = (__this->f10);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5746_MI, L_1);
		return ((t1750*)Castclass(L_2, t1750_TI_var));
	}
}
extern MethodInfo m9101_MI;
extern "C" bool m9101 (t1744 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f28);
		return L_0;
	}
}
extern "C" bool m9102 (t1744 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->f18);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9103_MI;
extern "C" bool m9103 (t1744 * __this, MethodInfo* method)
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
extern MethodInfo m9104_MI;
extern "C" t2* m9104 (t1744 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f12);
		return L_0;
	}
}
extern "C" t138 * m9105 (t1744 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_0, (t2*) &_stringLiteral1724, &m5734_MI);
		return L_0;
	}
}
extern "C" void m9106 (t1744 * __this, t2* p0, t2* p1, bool p2, MethodInfo* method)
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
		m339(L_3, (t2*) &_stringLiteral1725, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t2* L_4 = p0;
		int32_t L_5 = m2723(L_4, &m2723_MI);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		t563 * L_6 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_6, (t2*) &_stringLiteral1726, (t2*) &_stringLiteral2, &m5719_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0034:
	{
		t2* L_7 = p1;
		int32_t L_8 = m2723(L_7, &m2723_MI);
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		t563 * L_9 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_9, (t2*) &_stringLiteral1727, (t2*) &_stringLiteral1725, &m5719_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_004c:
	{
		t2* L_10 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_11 = m8952(NULL, L_10, &m8952_MI);
		t2* L_12 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_13 = m2737(NULL, L_11, L_12, &m2737_MI);
		if (!L_13)
		{
			goto IL_0075;
		}
	}
	{
		t2* L_14 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_15 = m399(NULL, (t2*) &_stringLiteral1728, L_14, (t2*) &_stringLiteral1729, &m399_MI);
		t563 * L_16 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_16, L_15, (t2*) &_stringLiteral1725, &m5719_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_21 = m1091(NULL, L_19, L_20, &m1091_MI);
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
		bool L_24 = m1092(NULL, L_23, &m1092_MI);
		if (L_24)
		{
			goto IL_00ad;
		}
	}
	{
		t2* L_25 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_26 = m399(NULL, (t2*) &_stringLiteral1730, L_25, (t2*) &_stringLiteral140, &m399_MI);
		t1720 * L_27 = (t1720 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1720_TI));
		m8850(L_27, L_26, &m8850_MI);
		il2cpp_codegen_raise_exception(L_27);
	}

IL_00ad:
	{
		t1746* L_28 = (__this->f13);
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
		t1746* L_29 = (__this->f13);
		int32_t L_30 = V_1;
		t2* L_31 = (((t1742 *)(t1742 *)SZArrayLdElema(L_29, L_30))->f2);
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
		t2* L_35 = m399(NULL, (t2*) &_stringLiteral1731, L_34, (t2*) &_stringLiteral140, &m399_MI);
		t563 * L_36 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_36, L_35, &m2909_MI);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_00e8:
	{
		t1746* L_37 = (__this->f13);
		int32_t L_38 = V_1;
		t2* L_39 = (((t1742 *)(t1742 *)SZArrayLdElema(L_37, L_38))->f1);
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
		t2* L_43 = m399(NULL, (t2*) &_stringLiteral1732, L_42, (t2*) &_stringLiteral140, &m399_MI);
		t563 * L_44 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_44, L_43, &m2909_MI);
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
		t1746* L_47 = (__this->f13);
		if ((((int32_t)L_46) < ((int32_t)(((int32_t)(((t121 *)L_47)->max_length))))))
		{
			goto IL_00b9;
		}
	}

IL_0126:
	{
		t1745* L_48 = (__this->f10);
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
		t1745* L_49 = (__this->f10);
		int32_t L_50 = V_2;
		int32_t L_51 = L_50;
		bool L_52 = m9317((*(t1749 **)(t1749 **)SZArrayLdElema(L_49, L_51)), &m9317_MI);
		if (L_52)
		{
			goto IL_016f;
		}
	}
	{
		t1745* L_53 = (__this->f10);
		int32_t L_54 = V_2;
		int32_t L_55 = L_54;
		t2* L_56 = m9337((*(t1749 **)(t1749 **)SZArrayLdElema(L_53, L_55)), &m9337_MI);
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
		t2* L_60 = m399(NULL, (t2*) &_stringLiteral1731, L_59, (t2*) &_stringLiteral140, &m399_MI);
		t563 * L_61 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_61, L_60, &m2909_MI);
		il2cpp_codegen_raise_exception(L_61);
	}

IL_016f:
	{
		t1745* L_62 = (__this->f10);
		int32_t L_63 = V_2;
		int32_t L_64 = L_63;
		t2* L_65 = m9565((*(t1749 **)(t1749 **)SZArrayLdElema(L_62, L_64)), &m9565_MI);
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
		t2* L_69 = m399(NULL, (t2*) &_stringLiteral1732, L_68, (t2*) &_stringLiteral140, &m399_MI);
		t563 * L_70 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_70, L_69, &m2909_MI);
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
		t1745* L_73 = (__this->f10);
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
extern MethodInfo m9107_MI;
extern "C" t1748 * m9107 (t1744 * __this, MethodInfo* method)
{
	t1748 * V_0 = {0};
	{
		t1748 * L_0 = m9460(__this, &m9460_MI);
		V_0 = L_0;
		t1658 * L_1 = (__this->f27);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		t1748 * L_2 = V_0;
		t1658 * L_3 = (__this->f27);
		t730* L_4 = m8304(L_3, &m8304_MI);
		m9486(L_2, L_4, &m9486_MI);
		t1748 * L_5 = V_0;
		t1658 * L_6 = (__this->f27);
		t730* L_7 = m8305(L_6, &m8305_MI);
		m9487(L_5, L_7, &m9487_MI);
	}

IL_0031:
	{
		t1748 * L_8 = V_0;
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1751MD.h"



#include "t1752.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1752_TI;
#include "t1752MD.h"

#include "t1573.h"
#include "t1754.h"
#include "t1758.h"
#include "t1757.h"
#include "t826.h"
#include "t560.h"
#include "t1759.h"
#include "t924.h"
#include "t1790.h"
#include "t925.h"
#include "t933.h"
#include "t1753.h"
extern TypeInfo t826_TI;
extern TypeInfo t560_TI;
extern TypeInfo t1754_TI;
extern TypeInfo t152_TI;
extern TypeInfo t928_TI;
extern TypeInfo t924_TI;
extern TypeInfo t2129_TI;
extern TypeInfo t1753_TI;
extern TypeInfo t1759_TI;
#include "t826MD.h"
#include "t560MD.h"
#include "t1754MD.h"
#include "t1759MD.h"
#include "t924MD.h"
#include "t2129MD.h"
#include "t1753MD.h"
extern Il2CppType t152_0_0_0;
extern Il2CppType t928_0_0_0;
extern MethodInfo m9131_MI;
extern MethodInfo m7812_MI;
extern MethodInfo m9110_MI;
extern MethodInfo m9390_MI;
extern MethodInfo m9564_MI;
extern MethodInfo m9511_MI;
extern MethodInfo m9129_MI;
extern MethodInfo m9126_MI;
extern MethodInfo m9312_MI;
extern MethodInfo m9335_MI;
extern MethodInfo m9428_MI;
extern MethodInfo m9130_MI;
extern MethodInfo m9132_MI;
extern MethodInfo m9112_MI;
extern MethodInfo m9697_MI;
extern MethodInfo m11605_MI;
extern MethodInfo m11604_MI;
extern MethodInfo m9125_MI;
extern MethodInfo m9336_MI;
extern MethodInfo m9249_MI;
extern MethodInfo m9308_MI;
extern MethodInfo m9391_MI;
extern MethodInfo m9426_MI;


extern MethodInfo m9108_MI;
extern TypeInfo* t152_TI_var;
extern "C" void m9108 (t1752 * __this, t1754 * p0, int32_t p1, int32_t p2, t152* p3, t1756* p4, t1756* p5, MethodInfo* method)
{
	static bool m9108_init;
	if (!m9108_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9108_init = true;
	}
	int32_t V_0 = 0;
	t1759  V_1 = {0};
	{
		__this->f9 = 1;
		m9511(__this, &m9511_MI);
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
		t563 * L_6 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_6, (t2*) &_stringLiteral1733, (t2*) &_stringLiteral1734, &m5719_MI);
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
		m5940(NULL, (t121 *)(t121 *)L_11, (t121 *)(t121 *)L_12, (((int32_t)(((t121 *)L_13)->max_length))), &m5940_MI);
	}

IL_0070:
	{
		t1754 * L_14 = p0;
		__this->f7 = L_14;
		t1756* L_15 = p4;
		__this->f10 = L_15;
		t1756* L_16 = p5;
		__this->f11 = L_16;
		int32_t L_17 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, bool >::Invoke(&m9129_MI, __this, __this, 6, 1);
		__this->f5 = L_17;
		t1754 * L_18 = p0;
		t1568 * L_19 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m9390_MI, L_18);
		t1759  L_20 = m9126(__this, &m9126_MI);
		V_1 = L_20;
		int32_t L_21 = m9312((&V_1), &m9312_MI);
		m9335(((t1749 *)Castclass(L_19, InitializedTypeInfo(&t1749_TI))), __this, L_21, &m9335_MI);
		return;
	}
}
extern MethodInfo m9109_MI;
extern "C" int32_t m9109 (t1752 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" t1754 * m9110 (t1752 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9111_MI;
extern "C" t928* m9111 (t1752 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f7);
		bool L_1 = m9428(L_0, &m9428_MI);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = m9130(__this, &m9130_MI);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t138 * L_3 = m9132(__this, &m9132_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t928* L_4 = m9112(__this, &m9112_MI);
		return L_4;
	}
}
extern TypeInfo* t928_TI_var;
extern "C" t928* m9112 (t1752 * __this, MethodInfo* method)
{
	static bool m9112_init;
	if (!m9112_init)
	{
		t928_TI_var = il2cpp_codegen_class_from_type(&t928_0_0_0);
		m9112_init = true;
	}
	t928* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	t928* G_B5_1 = {0};
	int32_t G_B4_0 = 0;
	t928* G_B4_1 = {0};
	t1790 * G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t928* G_B6_2 = {0};
	{
		t152* L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((t928*)SZArrayNew(t928_TI_var, 0));
	}

IL_000f:
	{
		t152* L_1 = (__this->f3);
		V_0 = ((t928*)SZArrayNew(t928_TI_var, (((int32_t)(((t121 *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		t928* L_2 = V_0;
		int32_t L_3 = V_1;
		t1755* L_4 = (__this->f8);
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
		G_B6_0 = ((t1790 *)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0038;
	}

IL_002e:
	{
		t1755* L_5 = (__this->f8);
		int32_t L_6 = V_1;
		int32_t L_7 = ((int32_t)((int32_t)L_6+(int32_t)1));
		G_B6_0 = (*(t1790 **)(t1790 **)SZArrayLdElema(L_5, L_7));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0038:
	{
		t152* L_8 = (__this->f3);
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		int32_t L_11 = V_1;
		t924 * L_12 = (t924 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t924_TI));
		m9697(L_12, G_B6_0, (*(t126 **)(t126 **)SZArrayLdElema(L_8, L_10)), __this, ((int32_t)((int32_t)L_11+(int32_t)1)), &m9697_MI);
		ArrayElementTypeCheck (G_B6_2, L_12);
		*((t924 **)(t924 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (t924 *)L_12;
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
		t928* L_16 = V_0;
		return L_16;
	}
}
extern MethodInfo m9113_MI;
extern "C" int32_t m9113 (t1752 * __this, MethodInfo* method)
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
extern MethodInfo m9114_MI;
extern "C" t9 * m9114 (t1752 * __this, t9 * p0, int32_t p1, t933 * p2, t158* p3, t901 * p4, MethodInfo* method)
{
	{
		t138 * L_0 = m9131(__this, &m9131_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9115_MI;
extern "C" t9 * m9115 (t1752 * __this, int32_t p0, t933 * p1, t158* p2, t901 * p3, MethodInfo* method)
{
	{
		t138 * L_0 = m9131(__this, &m9131_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9116_MI;
extern "C" t1758  m9116 (t1752 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9131(__this, &m9131_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9117_MI;
extern "C" int32_t m9117 (t1752 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9118_MI;
extern "C" t126 * m9118 (t1752 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9119_MI;
extern "C" t126 * m9119 (t1752 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9120_MI;
extern "C" t2* m9120 (t1752 * __this, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t826_TI));
		t2* L_1 = ((t826_SFs*)InitializedTypeInfo(&t826_TI)->static_fields)->f1;
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t826_TI));
		t2* L_2 = ((t826_SFs*)InitializedTypeInfo(&t826_TI)->static_fields)->f0;
		G_B3_0 = L_2;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
extern MethodInfo m9121_MI;
extern "C" bool m9121 (t1752 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9131(__this, &m9131_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9122_MI;
extern "C" t158* m9122 (t1752 * __this, bool p0, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f7);
		bool L_1 = m9428(L_0, &m9428_MI);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = m9130(__this, &m9130_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_4 = m11605(NULL, __this, L_3, &m11605_MI);
		return L_4;
	}

IL_001d:
	{
		t138 * L_5 = m9131(__this, &m9131_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m9123_MI;
extern "C" t158* m9123 (t1752 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f7);
		bool L_1 = m9428(L_0, &m9428_MI);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		bool L_2 = m9130(__this, &m9130_MI);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		t126 * L_3 = p0;
		bool L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_5 = m11604(NULL, __this, L_3, L_4, &m11604_MI);
		return L_5;
	}

IL_001e:
	{
		t138 * L_6 = m9131(__this, &m9131_MI);
		il2cpp_codegen_raise_exception(L_6);
	}
}
extern MethodInfo m9124_MI;
extern "C" t1753 * m9124 (t1752 * __this, MethodInfo* method)
{
	{
		t1753 * L_0 = m9125(__this, ((int32_t)64), &m9125_MI);
		return L_0;
	}
}
extern "C" t1753 * m9125 (t1752 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1753 * L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1753 * L_1 = (__this->f2);
		return L_1;
	}

IL_000f:
	{
		t1754 * L_2 = (__this->f7);
		t1568 * L_3 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m9390_MI, L_2);
		t1754 * L_4 = (__this->f7);
		t1568 * L_5 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m9390_MI, L_4);
		t9 * L_6 = m9336(((t1749 *)Castclass(L_5, InitializedTypeInfo(&t1749_TI))), &m9336_MI);
		int32_t L_7 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1753_TI));
		t1753 * L_8 = (t1753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1753_TI));
		m9249(L_8, L_3, L_6, L_7, &m9249_MI);
		__this->f2 = L_8;
		t1753 * L_9 = (__this->f2);
		return L_9;
	}
}
extern "C" t1759  m9126 (t1752 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		t1759  L_1 = {0};
		m9308(&L_1, ((int32_t)((int32_t)((int32_t)100663296)|(int32_t)L_0)), &m9308_MI);
		return L_1;
	}
}
extern MethodInfo m9127_MI;
extern "C" t1568 * m9127 (t1752 * __this, MethodInfo* method)
{
	{
		t1568 * L_0 = m7812(__this, &m7812_MI);
		return L_0;
	}
}
extern MethodInfo m9128_MI;
extern "C" t2* m9128 (t1752 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f7);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9391_MI, L_0);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m399(NULL, (t2*) &_stringLiteral1735, L_1, (t2*) &_stringLiteral1736, &m399_MI);
		return L_2;
	}
}
extern "C" int32_t m9129 (t1752 * __this, t9 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f7);
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = p2;
		int32_t L_4 = m9426(L_0, L_1, L_2, L_3, &m9426_MI);
		return L_4;
	}
}
extern "C" bool m9130 (t1752 * __this, MethodInfo* method)
{
	t1749 * V_0 = {0};
	t1744 * V_1 = {0};
	{
		t1754 * L_0 = m9110(__this, &m9110_MI);
		t1568 * L_1 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m9390_MI, L_0);
		V_0 = ((t1749 *)Castclass(L_1, InitializedTypeInfo(&t1749_TI)));
		t1749 * L_2 = V_0;
		t1345 * L_3 = m9564(L_2, &m9564_MI);
		V_1 = ((t1744 *)Castclass(L_3, InitializedTypeInfo(&t1744_TI)));
		t1744 * L_4 = V_1;
		bool L_5 = m9101(L_4, &m9101_MI);
		return L_5;
	}
}
extern "C" t138 * m9131 (t1752 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_0, (t2*) &_stringLiteral1724, &m5734_MI);
		return L_0;
	}
}
extern "C" t138 * m9132 (t1752 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_0, (t2*) &_stringLiteral1737, &m5734_MI);
		return L_0;
	}
}
#include "t1760.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1760_TI;
#include "t1760MD.h"

#include "t828.h"
#include "t1346.h"
#include "t2123.h"
#include "t1761.h"
#include "t914.h"
#include "t1825.h"
extern TypeInfo t58_TI;
extern TypeInfo t1346_TI;
extern TypeInfo t1761_TI;
extern TypeInfo t914_TI;
extern TypeInfo t1825_TI;
extern TypeInfo t2123_TI;
extern TypeInfo t221_TI;
#include "t1758MD.h"
#include "t1346MD.h"
#include "t1761MD.h"
#include "t914MD.h"
#include "t1825MD.h"
extern Il2CppType t221_0_0_0;
extern MethodInfo m11790_MI;
extern MethodInfo m4460_MI;
extern MethodInfo m9273_MI;
extern MethodInfo m9272_MI;
extern MethodInfo m9135_MI;
extern MethodInfo m9133_MI;
extern MethodInfo m9134_MI;
extern MethodInfo m11668_MI;
extern MethodInfo m9622_MI;
extern MethodInfo m4417_MI;
extern MethodInfo m9729_MI;
extern MethodInfo m9140_MI;
extern MethodInfo m4424_MI;
extern MethodInfo m4391_MI;
extern MethodInfo m9151_MI;
extern MethodInfo m9149_MI;
extern MethodInfo m4293_MI;


extern "C" void m9133 (t1760 * __this, t1760 * p0, MethodInfo* method)
{
	typedef void (*m9133_ftn) (t1760 *, t1760 *);
	static m9133_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9133_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.DynamicMethod::create_dynamic_method(System.Reflection.Emit.DynamicMethod)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m9134 (t1760 * __this, t1760 * p0, MethodInfo* method)
{
	typedef void (*m9134_ftn) (t1760 *, t1760 *);
	static m9134_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9134_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.DynamicMethod::destroy_dynamic_method(System.Reflection.Emit.DynamicMethod)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m9135 (t1760 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	t1760 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1758 * L_0 = &(__this->f0);
		t58 L_1 = m11790(L_0, &m11790_MI);
		t58 L_2 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_3 = m4460(NULL, L_1, L_2, &m4460_MI);
		if (!L_3)
		{
			goto IL_00b3;
		}
	}
	{
		t1753 * L_4 = (__this->f7);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		t1753 * L_5 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1753_TI));
		int32_t L_6 = m9273(NULL, L_5, &m9273_MI);
		if (L_6)
		{
			goto IL_004a;
		}
	}

IL_002f:
	{
		t2* L_7 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = m399(NULL, (t2*) &_stringLiteral1738, L_7, (t2*) &_stringLiteral1739, &m399_MI);
		t1341 * L_9 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_9, L_8, &m5713_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_004a:
	{
		t1753 * L_10 = (__this->f7);
		m9272(L_10, &m9272_MI);
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
			if (!((t1760 *)IsInst((*(t9 **)(t9 **)SZArrayLdElema(L_12, L_14)), InitializedTypeInfo(&t1760_TI))))
			{
				goto IL_0093;
			}
		}

IL_0077:
		{
			t158* L_15 = (__this->f8);
			int32_t L_16 = V_0;
			int32_t L_17 = L_16;
			V_1 = ((t1760 *)Castclass((*(t9 **)(t9 **)SZArrayLdElema(L_15, L_17)), InitializedTypeInfo(&t1760_TI)));
			t1760 * L_18 = V_1;
			bool L_19 = (L_18->f11);
			if (L_19)
			{
				goto IL_0093;
			}
		}

IL_008d:
		{
			t1760 * L_20 = V_1;
			m9135(L_20, &m9135_MI);
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
		m9133(__this, __this, &m9133_MI);
	}

IL_00b3:
	{
		return;
	}
}
extern MethodInfo m9136_MI;
extern "C" void m9136 (t1760 * __this, MethodInfo* method)
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
		m9134(__this, __this, &m9134_MI);
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
extern MethodInfo m9137_MI;
extern "C" t828 * m9137 (t1760 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m9138_MI;
extern "C" t158* m9138 (t1760 * __this, bool p0, MethodInfo* method)
{
	{
		t1346 * L_0 = (t1346 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1346_TI));
		m11668(L_0, &m11668_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9139_MI;
extern "C" t158* m9139 (t1760 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1346 * L_0 = (t1346 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1346_TI));
		m11668(L_0, &m11668_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t928_TI_var;
extern "C" t928* m9140 (t1760 * __this, MethodInfo* method)
{
	static bool m9140_init;
	if (!m9140_init)
	{
		t928_TI_var = il2cpp_codegen_class_from_type(&t928_0_0_0);
		m9140_init = true;
	}
	t928* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	t928* G_B5_1 = {0};
	int32_t G_B4_0 = 0;
	t928* G_B4_1 = {0};
	t1790 * G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t928* G_B6_2 = {0};
	{
		t152* L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((t928*)SZArrayNew(t928_TI_var, 0));
	}

IL_000f:
	{
		t152* L_1 = (__this->f3);
		V_0 = ((t928*)SZArrayNew(t928_TI_var, (((int32_t)(((t121 *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		t928* L_2 = V_0;
		int32_t L_3 = V_1;
		t1755* L_4 = (__this->f10);
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
		G_B6_0 = ((t1790 *)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0038;
	}

IL_002e:
	{
		t1755* L_5 = (__this->f10);
		int32_t L_6 = V_1;
		int32_t L_7 = ((int32_t)((int32_t)L_6+(int32_t)1));
		G_B6_0 = (*(t1790 **)(t1790 **)SZArrayLdElema(L_5, L_7));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0038:
	{
		t152* L_8 = (__this->f3);
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		int32_t L_11 = V_1;
		t924 * L_12 = (t924 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t924_TI));
		m9697(L_12, G_B6_0, (*(t126 **)(t126 **)SZArrayLdElema(L_8, L_10)), __this, ((int32_t)((int32_t)L_11+(int32_t)1)), &m9697_MI);
		ArrayElementTypeCheck (G_B6_2, L_12);
		*((t924 **)(t924 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (t924 *)L_12;
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
		t928* L_16 = V_0;
		return L_16;
	}
}
extern MethodInfo m9141_MI;
extern "C" t9 * m9141 (t1760 * __this, t9 * p0, int32_t p1, t933 * p2, t158* p3, t901 * p4, MethodInfo* method)
{
	t2123 * V_0 = {0};
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
			m9135(__this, &m9135_MI);
			t1761 * L_0 = (__this->f9);
			if (L_0)
			{
				goto IL_001f;
			}
		}

IL_000e:
		{
			t1758  L_1 = (__this->f0);
			t1761 * L_2 = (t1761 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1761_TI));
			m9622(L_2, L_1, &m9622_MI);
			__this->f9 = L_2;
		}

IL_001f:
		{
			t1761 * L_3 = (__this->f9);
			t9 * L_4 = p0;
			t158* L_5 = p3;
			t9 * L_6 = (t9 *)VirtFuncInvoker2< t9 *, t9 *, t158* >::Invoke(&m4417_MI, L_3, L_4, L_5);
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
		if(il2cpp_codegen_class_is_assignable_from (&t2123_TI, e.ex->object.klass))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.MethodAccessException)
		V_0 = ((t2123 *)__exception_local);
		t2123 * L_7 = V_0;
		t1825 * L_8 = (t1825 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1825_TI));
		m9729(L_8, (t2*) &_stringLiteral1740, L_7, &m9729_MI);
		il2cpp_codegen_raise_exception(L_8);
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		t9 * L_9 = V_1;
		return L_9;
	}
}
extern MethodInfo m9142_MI;
extern "C" bool m9142 (t1760 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1346 * L_0 = (t1346 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1346_TI));
		m11668(L_0, &m11668_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9143_MI;
extern TypeInfo* t221_TI_var;
extern "C" t2* m9143 (t1760 * __this, MethodInfo* method)
{
	static bool m9143_init;
	if (!m9143_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9143_init = true;
	}
	t2* V_0 = {0};
	t928* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		V_0 = L_0;
		t928* L_1 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m9140_MI, __this);
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
		t2* L_4 = m610(NULL, L_3, (t2*) &_stringLiteral387, &m610_MI);
		V_0 = L_4;
	}

IL_0021:
	{
		t2* L_5 = V_0;
		t928* L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		t126 * L_9 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_6, L_8)));
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4391_MI, L_9);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = m610(NULL, L_5, L_10, &m610_MI);
		V_0 = L_11;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_13 = V_2;
		t928* L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((t121 *)L_14)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		t221* L_15 = ((t221*)SZArrayNew(t221_TI_var, 6));
		t126 * L_16 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9151_MI, __this);
		t2* L_17 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4391_MI, L_16);
		ArrayElementTypeCheck (L_15, L_17);
		*((t2**)(t2**)SZArrayLdElema(L_15, 0)) = (t2*)L_17;
		t221* L_18 = L_15;
		ArrayElementTypeCheck (L_18, (t2*) &_stringLiteral167);
		*((t2**)(t2**)SZArrayLdElema(L_18, 1)) = (t2*)(t2*) &_stringLiteral167;
		t221* L_19 = L_18;
		t2* L_20 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9149_MI, __this);
		ArrayElementTypeCheck (L_19, L_20);
		*((t2**)(t2**)SZArrayLdElema(L_19, 2)) = (t2*)L_20;
		t221* L_21 = L_19;
		ArrayElementTypeCheck (L_21, (t2*) &_stringLiteral386);
		*((t2**)(t2**)SZArrayLdElema(L_21, 3)) = (t2*)(t2*) &_stringLiteral386;
		t221* L_22 = L_21;
		t2* L_23 = V_0;
		ArrayElementTypeCheck (L_22, L_23);
		*((t2**)(t2**)SZArrayLdElema(L_22, 4)) = (t2*)L_23;
		t221* L_24 = L_22;
		ArrayElementTypeCheck (L_24, (t2*) &_stringLiteral147);
		*((t2**)(t2**)SZArrayLdElema(L_24, 5)) = (t2*)(t2*) &_stringLiteral147;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_25 = m4293(NULL, L_24, &m4293_MI);
		return L_25;
	}
}
extern MethodInfo m9144_MI;
extern "C" int32_t m9144 (t1760 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9145_MI;
extern "C" int32_t m9145 (t1760 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m9146_MI;
extern "C" t126 * m9146 (t1760 * __this, MethodInfo* method)
{
	{
		return (t126 *)NULL;
	}
}
extern MethodInfo m9147_MI;
extern "C" t1758  m9147 (t1760 * __this, MethodInfo* method)
{
	{
		t1758  L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9148_MI;
extern "C" t1568 * m9148 (t1760 * __this, MethodInfo* method)
{
	{
		t1568 * L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" t2* m9149 (t1760 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9150_MI;
extern "C" t126 * m9150 (t1760 * __this, MethodInfo* method)
{
	{
		return (t126 *)NULL;
	}
}
extern "C" t126 * m9151 (t1760 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f2);
		return L_0;
	}
}
#include "t1762.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1762_TI;
#include "t1762MD.h"

#include "t1571.h"
#include "t934.h"
#include "t1569.h"
#include "t830.h"
#include "t837.h"
extern TypeInfo t127_TI;
extern TypeInfo t925_TI;
extern TypeInfo t933_TI;
extern TypeInfo t1573_TI;
extern TypeInfo t935_TI;
extern TypeInfo t934_TI;
extern TypeInfo t926_TI;
extern TypeInfo t1569_TI;
extern TypeInfo t830_TI;
extern TypeInfo t930_TI;
extern TypeInfo t828_TI;
extern TypeInfo t1570_TI;
extern TypeInfo t929_TI;
extern TypeInfo t837_TI;
extern MethodInfo m9383_MI;
extern MethodInfo m9384_MI;
extern MethodInfo m9385_MI;
extern MethodInfo m9386_MI;
extern MethodInfo m9389_MI;
extern MethodInfo m9392_MI;
extern MethodInfo m9393_MI;
extern MethodInfo m9425_MI;
extern MethodInfo m7797_MI;
extern MethodInfo m9405_MI;
extern MethodInfo m9396_MI;
extern MethodInfo m9397_MI;
extern MethodInfo m9407_MI;
extern MethodInfo m9408_MI;
extern MethodInfo m9409_MI;
extern MethodInfo m9410_MI;
extern MethodInfo m9411_MI;
extern MethodInfo m7782_MI;
extern MethodInfo m7784_MI;
extern MethodInfo m9413_MI;
extern MethodInfo m9415_MI;
extern MethodInfo m9185_MI;
extern MethodInfo m7749_MI;
extern MethodInfo m9418_MI;
extern MethodInfo m9395_MI;


extern MethodInfo m9152_MI;
extern "C" t1345 * m9152 (t1762 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t1345 * L_1 = (t1345 *)VirtFuncInvoker0< t1345 * >::Invoke(&m9383_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9153_MI;
extern "C" t2* m9153 (t1762 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9384_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9154_MI;
extern "C" t126 * m9154 (t1762 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9385_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9155_MI;
extern "C" t126 * m9155 (t1762 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9386_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9156_MI;
extern "C" t2* m9156 (t1762 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9389_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9157_MI;
extern "C" t1568 * m9157 (t1762 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t1568 * L_1 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m9390_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9158_MI;
extern "C" t2* m9158 (t1762 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9391_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9159_MI;
extern "C" t2* m9159 (t1762 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9392_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9160_MI;
extern "C" t126 * m9160 (t1762 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9393_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9161_MI;
extern "C" t127  m9161 (t1762 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t127  L_1 = (t127 )VirtFuncInvoker0< t127  >::Invoke(&m9425_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9162_MI;
extern "C" t126 * m9162 (t1762 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m9163_MI;
extern "C" int32_t m9163 (t1762 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		int32_t L_1 = (L_0->f19);
		return L_1;
	}
}
extern MethodInfo m9164_MI;
extern "C" t826 * m9164 (t1762 * __this, int32_t p0, t933 * p1, int32_t p2, t152* p3, t935* p4, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t933 * L_2 = p1;
		int32_t L_3 = p2;
		t152* L_4 = p3;
		t935* L_5 = p4;
		t826 * L_6 = (t826 *)VirtFuncInvoker5< t826 *, int32_t, t933 *, int32_t, t152*, t935* >::Invoke(&m7797_MI, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
extern MethodInfo m9165_MI;
extern "C" t926* m9165 (t1762 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t926* L_2 = (t926*)VirtFuncInvoker1< t926*, int32_t >::Invoke(&m9405_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9166_MI;
extern "C" t158* m9166 (t1762 * __this, bool p0, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		bool L_1 = p0;
		t158* L_2 = (t158*)VirtFuncInvoker1< t158*, bool >::Invoke(&m9396_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9167_MI;
extern "C" t158* m9167 (t1762 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t126 * L_1 = p0;
		bool L_2 = p1;
		t158* L_3 = (t158*)VirtFuncInvoker2< t158*, t126 *, bool >::Invoke(&m9397_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9168_MI;
extern "C" t126 * m9168 (t1762 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9407_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9169_MI;
extern "C" t1569 * m9169 (t1762 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t1569 * L_3 = (t1569 *)VirtFuncInvoker2< t1569 *, t2*, int32_t >::Invoke(&m9408_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9170_MI;
extern "C" t830 * m9170 (t1762 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t830 * L_3 = (t830 *)VirtFuncInvoker2< t830 *, t2*, int32_t >::Invoke(&m9409_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9171_MI;
extern "C" t930* m9171 (t1762 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t930* L_2 = (t930*)VirtFuncInvoker1< t930*, int32_t >::Invoke(&m9410_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9172_MI;
extern "C" t152* m9172 (t1762 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t152* L_1 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9411_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9173_MI;
extern "C" t828 * m9173 (t1762 * __this, t2* p0, int32_t p1, t933 * p2, int32_t p3, t152* p4, t935* p5, MethodInfo* method)
{
	{
		t152* L_0 = p4;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		t1754 * L_1 = (__this->f8);
		t2* L_2 = p0;
		int32_t L_3 = p1;
		t828 * L_4 = (t828 *)VirtFuncInvoker2< t828 *, t2*, int32_t >::Invoke(&m7782_MI, L_1, L_2, L_3);
		return L_4;
	}

IL_0012:
	{
		t1754 * L_5 = (__this->f8);
		t2* L_6 = p0;
		int32_t L_7 = p1;
		t933 * L_8 = p2;
		int32_t L_9 = p3;
		t152* L_10 = p4;
		t935* L_11 = p5;
		t828 * L_12 = (t828 *)VirtFuncInvoker6< t828 *, t2*, int32_t, t933 *, int32_t, t152*, t935* >::Invoke(&m7784_MI, L_5, L_6, L_7, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
extern MethodInfo m9174_MI;
extern "C" t1570* m9174 (t1762 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t1570* L_2 = (t1570*)VirtFuncInvoker1< t1570*, int32_t >::Invoke(&m9413_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9175_MI;
extern "C" t929* m9175 (t1762 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t929* L_2 = (t929*)VirtFuncInvoker1< t929*, int32_t >::Invoke(&m9415_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9176_MI;
extern "C" t837 * m9176 (t1762 * __this, t2* p0, int32_t p1, t933 * p2, t126 * p3, t152* p4, t935* p5, MethodInfo* method)
{
	{
		t138 * L_0 = m9185(__this, &m9185_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9177_MI;
extern "C" bool m9177 (t1762 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7749_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9178_MI;
extern "C" t9 * m9178 (t1762 * __this, t2* p0, int32_t p1, t933 * p2, t9 * p3, t158* p4, t935* p5, t901 * p6, t221* p7, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t933 * L_3 = p2;
		t9 * L_4 = p3;
		t158* L_5 = p4;
		t935* L_6 = p5;
		t901 * L_7 = p6;
		t221* L_8 = p7;
		t9 * L_9 = (t9 *)VirtFuncInvoker8< t9 *, t2*, int32_t, t933 *, t9 *, t158*, t935*, t901 *, t221* >::Invoke(&m9418_MI, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
extern MethodInfo m9179_MI;
extern "C" bool m9179 (t1762 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9180_MI;
extern "C" bool m9180 (t1762 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9181_MI;
extern "C" bool m9181 (t1762 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9182_MI;
extern "C" bool m9182 (t1762 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9183_MI;
extern "C" bool m9183 (t1762 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m9184_MI;
extern "C" bool m9184 (t1762 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t126 * L_1 = p0;
		bool L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker2< bool, t126 *, bool >::Invoke(&m9395_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern "C" t138 * m9185 (t1762 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_0, (t2*) &_stringLiteral1724, &m5734_MI);
		return L_0;
	}
}
#include "t1763.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1763_TI;
#include "t1763MD.h"

#include "t1765.h"
#include "t1764.h"
extern MethodInfo m9199_MI;


extern MethodInfo m9186_MI;
extern "C" int32_t m9186 (t1763 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9187_MI;
extern "C" t126 * m9187 (t1763 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9188_MI;
extern "C" t313  m9188 (t1763 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9199(__this, &m9199_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9189_MI;
extern "C" t126 * m9189 (t1763 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9190_MI;
extern "C" t2* m9190 (t1763 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9191_MI;
extern "C" t126 * m9191 (t1763 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9192_MI;
extern "C" t158* m9192 (t1763 * __this, bool p0, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f3);
		bool L_1 = m9428(L_0, &m9428_MI);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_3 = m11605(NULL, __this, L_2, &m11605_MI);
		return L_3;
	}

IL_0015:
	{
		t138 * L_4 = m9199(__this, &m9199_MI);
		il2cpp_codegen_raise_exception(L_4);
	}
}
extern MethodInfo m9193_MI;
extern "C" t158* m9193 (t1763 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f3);
		bool L_1 = m9428(L_0, &m9428_MI);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t126 * L_2 = p0;
		bool L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_4 = m11604(NULL, __this, L_2, L_3, &m11604_MI);
		return L_4;
	}

IL_0016:
	{
		t138 * L_5 = m9199(__this, &m9199_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m9194_MI;
extern "C" t9 * m9194 (t1763 * __this, t9 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9199(__this, &m9199_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9195_MI;
extern "C" bool m9195 (t1763 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9199(__this, &m9199_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9196_MI;
extern "C" int32_t m9196 (t1763 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9197_MI;
extern "C" void m9197 (t1763 * __this, t9 * p0, t9 * p1, int32_t p2, t933 * p3, t901 * p4, MethodInfo* method)
{
	{
		t138 * L_0 = m9199(__this, &m9199_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9198_MI;
extern "C" t1764 * m9198 (t1763 * __this, MethodInfo* method)
{
	{
		t1764 * L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t138 * m9199 (t1763 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_0, (t2*) &_stringLiteral1724, &m5734_MI);
		return L_0;
	}
}
extern MethodInfo m9200_MI;
extern "C" t1568 * m9200 (t1763 * __this, MethodInfo* method)
{
	{
		t1568 * L_0 = m7812(__this, &m7812_MI);
		return L_0;
	}
}
#include "t1766.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1766_TI;
#include "t1766MD.h"

#include "t1767.h"
extern TypeInfo t1767_TI;
#include "t1767MD.h"
extern MethodInfo m9283_MI;
extern MethodInfo m9234_MI;
extern MethodInfo m9243_MI;
extern MethodInfo m9226_MI;
extern MethodInfo m7777_MI;
extern MethodInfo m7761_MI;
extern MethodInfo m5720_MI;
extern MethodInfo m561_MI;
extern MethodInfo m7765_MI;
extern MethodInfo m7780_MI;
extern MethodInfo m4471_MI;


extern MethodInfo m9201_MI;
extern "C" bool m9201 (t1766 * __this, t126 * p0, MethodInfo* method)
{
	int32_t G_B7_0 = 0;
	{
		t1754 * L_0 = (__this->f8);
		t1568 * L_1 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m9390_MI, L_0);
		t1744 * L_2 = (((t1749 *)Castclass(L_1, InitializedTypeInfo(&t1749_TI)))->f14);
		bool L_3 = m9101(L_2, &m9101_MI);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		t138 * L_4 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0023:
	{
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9226_MI, __this);
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
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9226_MI, __this);
		t126 * L_7 = p0;
		if ((((t9*)(t126 *)L_6) == ((t9*)(t126 *)L_7)))
		{
			goto IL_0044;
		}
	}
	{
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9226_MI, __this);
		t126 * L_9 = p0;
		bool L_10 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m7777_MI, L_8, L_9);
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
extern MethodInfo m9202_MI;
extern "C" int32_t m9202 (t1766 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t1568 * L_1 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m9390_MI, L_0);
		t1744 * L_2 = (((t1749 *)Castclass(L_1, InitializedTypeInfo(&t1749_TI)))->f14);
		bool L_3 = m9101(L_2, &m9101_MI);
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
		t138 * L_4 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_4);
	}
}
extern MethodInfo m9203_MI;
extern "C" t826 * m9203 (t1766 * __this, int32_t p0, t933 * p1, int32_t p2, t152* p3, t935* p4, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9204_MI;
extern "C" t926* m9204 (t1766 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9205_MI;
extern "C" t1569 * m9205 (t1766 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9206_MI;
extern "C" t830 * m9206 (t1766 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9207_MI;
extern "C" t930* m9207 (t1766 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9208_MI;
extern "C" t152* m9208 (t1766 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9209_MI;
extern "C" t1570* m9209 (t1766 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9210_MI;
extern "C" t828 * m9210 (t1766 * __this, t2* p0, int32_t p1, t933 * p2, int32_t p3, t152* p4, t935* p5, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9211_MI;
extern "C" t929* m9211 (t1766 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9212_MI;
extern "C" t837 * m9212 (t1766 * __this, t2* p0, int32_t p1, t933 * p2, t126 * p3, t152* p4, t935* p5, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9213_MI;
extern "C" bool m9213 (t1766 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9214_MI;
extern "C" bool m9214 (t1766 * __this, t126 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9215_MI;
extern "C" bool m9215 (t1766 * __this, t9 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9216_MI;
extern "C" bool m9216 (t1766 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9217_MI;
extern "C" bool m9217 (t1766 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9218_MI;
extern "C" bool m9218 (t1766 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9219_MI;
extern "C" bool m9219 (t1766 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9220_MI;
extern "C" bool m9220 (t1766 * __this, MethodInfo* method)
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
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7761_MI, L_1);
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
extern MethodInfo m9221_MI;
extern "C" t9 * m9221 (t1766 * __this, t2* p0, int32_t p1, t933 * p2, t9 * p3, t158* p4, t935* p5, t901 * p6, t221* p7, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9222_MI;
extern "C" t126 * m9222 (t1766 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9223_MI;
extern "C" t126 * m9223 (t1766 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m9224_MI;
extern "C" t1345 * m9224 (t1766 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t1345 * L_1 = (t1345 *)VirtFuncInvoker0< t1345 * >::Invoke(&m9383_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9225_MI;
extern "C" t2* m9225 (t1766 * __this, MethodInfo* method)
{
	{
		return (t2*)NULL;
	}
}
extern "C" t126 * m9226 (t1766 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m9227_MI;
extern "C" t2* m9227 (t1766 * __this, MethodInfo* method)
{
	{
		return (t2*)NULL;
	}
}
extern MethodInfo m9228_MI;
extern "C" bool m9228 (t1766 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9229_MI;
extern "C" t158* m9229 (t1766 * __this, bool p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9230_MI;
extern "C" t158* m9230 (t1766 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9231_MI;
extern "C" t2* m9231 (t1766 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m9232_MI;
extern "C" t2* m9232 (t1766 * __this, MethodInfo* method)
{
	{
		return (t2*)NULL;
	}
}
extern MethodInfo m9233_MI;
extern "C" t1568 * m9233 (t1766 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f8);
		t1568 * L_1 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m9390_MI, L_0);
		return L_1;
	}
}
extern "C" t126 * m9234 (t1766 * __this, MethodInfo* method)
{
	t126 * G_B3_0 = {0};
	{
		t1767 * L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t1767 * L_1 = (__this->f9);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9283_MI, L_1);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		t1754 * L_3 = (__this->f8);
		G_B3_0 = ((t126 *)(L_3));
	}

IL_001b:
	{
		return G_B3_0;
	}
}
extern MethodInfo m9235_MI;
extern "C" t126 * m9235 (t1766 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9234_MI, __this);
		return L_0;
	}
}
extern MethodInfo m9236_MI;
extern "C" t127  m9236 (t1766 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9243(__this, &m9243_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9237_MI;
extern "C" t152* m9237 (t1766 * __this, MethodInfo* method)
{
	{
		t1341 * L_0 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5720(L_0, &m5720_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9238_MI;
extern "C" t126 * m9238 (t1766 * __this, MethodInfo* method)
{
	{
		t1341 * L_0 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5720(L_0, &m5720_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9239_MI;
extern "C" bool m9239 (t1766 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m9240_MI;
extern "C" bool m9240 (t1766 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m9241_MI;
extern "C" bool m9241 (t1766 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9242_MI;
extern "C" bool m9242 (t1766 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t138 * m9243 (t1766 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		return L_0;
	}
}
extern MethodInfo m9244_MI;
extern "C" t2* m9244 (t1766 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m9245_MI;
extern "C" bool m9245 (t1766 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		bool L_1 = m7765(__this, L_0, &m7765_MI);
		return L_1;
	}
}
extern MethodInfo m9246_MI;
extern "C" int32_t m9246 (t1766 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m7780(__this, &m7780_MI);
		return L_0;
	}
}
extern MethodInfo m9247_MI;
extern "C" t126 * m9247 (t1766 * __this, t152* p0, MethodInfo* method)
{
	{
		t152* L_0 = p0;
		t126 * L_1 = m4471(__this, L_0, &m4471_MI);
		return L_1;
	}
}
#include "t1768.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1768_TI;
#include "t1768MD.h"



#include "t1769.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1769_TI;
#include "t1769MD.h"



#include "t1770.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1770_TI;
#include "t1770MD.h"



extern MethodInfo m9248_MI;
extern "C" void m9248 (t1770 * __this, int32_t p0, int32_t p1, MethodInfo* method)
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

#include "t1777.h"
#include "t1787.h"
#include "t1786.h"
#include "t1776.h"
#include "t1779.h"
#include "t309.h"
#include "t1778.h"
#include "t1789.h"
#include "t334.h"
extern TypeInfo t1772_TI;
extern TypeInfo t1777_TI;
extern TypeInfo t1776_TI;
extern TypeInfo t1779_TI;
extern TypeInfo t1771_TI;
extern TypeInfo t1773_TI;
extern TypeInfo t1778_TI;
extern TypeInfo t1775_TI;
extern TypeInfo t1774_TI;
extern TypeInfo t1789_TI;
#include "t1777MD.h"
#include "t1776MD.h"
#include "t1778MD.h"
#include "t1789MD.h"
#include "t828MD.h"
extern Il2CppType t1772_0_0_0;
extern Il2CppType t1771_0_0_0;
extern Il2CppType t1773_0_0_0;
extern Il2CppType t1774_0_0_0;
extern MethodInfo m5902_MI;
extern MethodInfo m9348_MI;
extern MethodInfo m9351_MI;
extern MethodInfo m9350_MI;
extern MethodInfo m9349_MI;
extern MethodInfo m9257_MI;
extern MethodInfo m7810_MI;
extern MethodInfo m9277_MI;
extern MethodInfo m9274_MI;
extern MethodInfo m9252_MI;
extern MethodInfo m9254_MI;
extern MethodInfo m12011_MI;
extern MethodInfo m4452_MI;
extern MethodInfo m11984_MI;
extern MethodInfo m9251_MI;
extern MethodInfo m9253_MI;
extern MethodInfo m9543_MI;
extern MethodInfo m9255_MI;
extern MethodInfo m9353_MI;
extern MethodInfo m9553_MI;
extern MethodInfo m12012_MI;
extern MethodInfo m9352_MI;
extern MethodInfo m9544_MI;
extern MethodInfo m12013_MI;
extern MethodInfo m9267_MI;
extern MethodInfo m9266_MI;


extern TypeInfo* t730_TI_var;
extern TypeInfo* t1772_TI_var;
extern "C" void m9249 (t1753 * __this, t1568 * p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	static bool m9249_init;
	if (!m9249_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		t1772_TI_var = il2cpp_codegen_class_from_type(&t1772_0_0_0);
		m9249_init = true;
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
		__this->f1 = ((t730*)SZArrayNew(t730_TI_var, L_1));
		__this->f7 = ((t1772*)SZArrayNew(t1772_TI_var, 8));
		t1568 * L_2 = p0;
		__this->f12 = L_2;
		t9 * L_3 = p1;
		__this->f13 = L_3;
		return;
	}
}
extern MethodInfo m9250_MI;
extern "C" void m9250 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_0 = m329(NULL, LoadTypeToken(&t122_0_0_0), &m329_MI);
		((t1753_SFs*)InitializedTypeInfo(&t1753_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern TypeInfo* t1772_TI_var;
extern "C" void m9251 (t1753 * __this, t560 * p0, MethodInfo* method)
{
	static bool m9251_init;
	if (!m9251_init)
	{
		t1772_TI_var = il2cpp_codegen_class_from_type(&t1772_0_0_0);
		m9251_init = true;
	}
	t1772* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f6);
		t1772* L_1 = (__this->f7);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = (__this->f6);
		V_0 = ((t1772*)SZArrayNew(t1772_TI_var, ((int32_t)((int32_t)L_2*(int32_t)2))));
		t1772* L_3 = (__this->f7);
		t1772* L_4 = V_0;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5902_MI, L_3, (t121 *)(t121 *)L_4, 0);
		t1772* L_5 = V_0;
		__this->f7 = L_5;
	}

IL_0032:
	{
		t1772* L_6 = (__this->f7);
		int32_t L_7 = (__this->f6);
		t560 * L_8 = p0;
		((t1768 *)(t1768 *)SZArrayLdElema(L_6, L_7))->f0 = L_8;
		t1772* L_9 = (__this->f7);
		int32_t L_10 = (__this->f6);
		int32_t L_11 = L_10;
		V_1 = L_11;
		__this->f6 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_1;
		int32_t L_13 = (__this->f2);
		((t1768 *)(t1768 *)SZArrayLdElema(L_9, L_12))->f1 = L_13;
		return;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" void m9252 (t1753 * __this, int32_t p0, MethodInfo* method)
{
	static bool m9252_init;
	if (!m9252_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m9252_init = true;
	}
	t730* V_0 = {0};
	{
		int32_t L_0 = (__this->f2);
		int32_t L_1 = p0;
		t730* L_2 = (__this->f1);
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
		V_0 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)L_4))*(int32_t)2))+(int32_t)((int32_t)128)))));
		t730* L_5 = (__this->f1);
		t730* L_6 = V_0;
		t730* L_7 = (__this->f1);
		m7710(NULL, (t121 *)(t121 *)L_5, 0, (t121 *)(t121 *)L_6, 0, (((int32_t)(((t121 *)L_7)->max_length))), &m7710_MI);
		t730* L_8 = V_0;
		__this->f1 = L_8;
		return;
	}
}
extern "C" void m9253 (t1753 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t730* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->f2 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_0;
		int32_t L_4 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_3)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)255)))));
		t730* L_5 = (__this->f1);
		int32_t L_6 = (__this->f2);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		int32_t L_9 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_8)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9>>(int32_t)8))&(int32_t)((int32_t)255)))));
		t730* L_10 = (__this->f1);
		int32_t L_11 = (__this->f2);
		int32_t L_12 = L_11;
		V_0 = L_12;
		__this->f2 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_0;
		int32_t L_14 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_13)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_14>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)255)))));
		t730* L_15 = (__this->f1);
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
extern "C" void m9254 (t1753 * __this, t1777  p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	{
		int32_t L_0 = m9348((&p0), &m9348_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0029;
		}
	}
	{
		t730* L_1 = (__this->f1);
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
		t730* L_6 = (__this->f1);
		int32_t L_7 = (__this->f2);
		int32_t L_8 = L_7;
		V_0 = L_8;
		__this->f2 = ((int32_t)((int32_t)L_8+(int32_t)1));
		int32_t L_9 = V_0;
		uint8_t L_10 = ((&p0)->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_9)) = (uint8_t)L_10;
		int32_t L_11 = m9351((&p0), &m9351_MI);
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
		int32_t L_18 = m9350((&p0), &m9350_MI);
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
extern "C" int32_t m9255 (t9 * __this , t1777  p0, MethodInfo* method)
{
	{
		int32_t L_0 = m9349((&p0), &m9349_MI);
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
extern MethodInfo m9256_MI;
extern "C" t1776 * m9256 (t1753 * __this, t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t1776 * L_1 = (t1776 *)VirtFuncInvoker2< t1776 *, t126 *, bool >::Invoke(&m9257_MI, __this, L_0, 0);
		return L_1;
	}
}
extern TypeInfo* t1771_TI_var;
extern "C" t1776 * m9257 (t1753 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	static bool m9257_init;
	if (!m9257_init)
	{
		t1771_TI_var = il2cpp_codegen_class_from_type(&t1771_0_0_0);
		m9257_init = true;
	}
	t1776 * V_0 = {0};
	t1771* V_1 = {0};
	{
		t126 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1741, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t126 * L_2 = p0;
		bool L_3 = m7810(L_2, &m7810_MI);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		t169 * L_4 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_4, (t2*) &_stringLiteral1742, &m5734_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t126 * L_5 = p0;
		t1776 * L_6 = (t1776 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1776_TI));
		m9277(L_6, L_5, __this, &m9277_MI);
		V_0 = L_6;
		t1776 * L_7 = V_0;
		bool L_8 = p1;
		L_7->f1 = L_8;
		t1771* L_9 = (__this->f5);
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		t1771* L_10 = (__this->f5);
		V_1 = ((t1771*)SZArrayNew(t1771_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_10)->max_length)))+(int32_t)1))));
		t1771* L_11 = (__this->f5);
		t1771* L_12 = V_1;
		t1771* L_13 = (__this->f5);
		m5940(NULL, (t121 *)(t121 *)L_11, (t121 *)(t121 *)L_12, (((int32_t)(((t121 *)L_13)->max_length))), &m5940_MI);
		t1771* L_14 = V_1;
		t1771* L_15 = (__this->f5);
		t1776 * L_16 = V_0;
		ArrayElementTypeCheck (L_14, L_16);
		*((t1776 **)(t1776 **)SZArrayLdElema(L_14, (((int32_t)(((t121 *)L_15)->max_length))))) = (t1776 *)L_16;
		t1771* L_17 = V_1;
		__this->f5 = L_17;
		goto IL_0085;
	}

IL_0070:
	{
		__this->f5 = ((t1771*)SZArrayNew(t1771_TI_var, 1));
		t1771* L_18 = (__this->f5);
		t1776 * L_19 = V_0;
		ArrayElementTypeCheck (L_18, L_19);
		*((t1776 **)(t1776 **)SZArrayLdElema(L_18, 0)) = (t1776 *)L_19;
	}

IL_0085:
	{
		t1776 * L_20 = V_0;
		t1771* L_21 = (__this->f5);
		L_20->f2 = (((uint16_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_21)->max_length)))-(int32_t)1))));
		t1776 * L_22 = V_0;
		return L_22;
	}
}
extern MethodInfo m9258_MI;
extern TypeInfo* t1773_TI_var;
extern "C" t1778  m9258 (t1753 * __this, MethodInfo* method)
{
	static bool m9258_init;
	if (!m9258_init)
	{
		t1773_TI_var = il2cpp_codegen_class_from_type(&t1773_0_0_0);
		m9258_init = true;
	}
	t1773* V_0 = {0};
	int32_t V_1 = 0;
	{
		t1773* L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		__this->f8 = ((t1773*)SZArrayNew(t1773_TI_var, 4));
		goto IL_0051;
	}

IL_0016:
	{
		int32_t L_1 = (__this->f9);
		t1773* L_2 = (__this->f8);
		if ((((int32_t)L_1) < ((int32_t)(((int32_t)(((t121 *)L_2)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		t1773* L_3 = (__this->f8);
		V_0 = ((t1773*)SZArrayNew(t1773_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_3)->max_length)))*(int32_t)2))));
		t1773* L_4 = (__this->f8);
		t1773* L_5 = V_0;
		t1773* L_6 = (__this->f8);
		m5940(NULL, (t121 *)(t121 *)L_4, (t121 *)(t121 *)L_5, (((int32_t)(((t121 *)L_6)->max_length))), &m5940_MI);
		t1773* L_7 = V_0;
		__this->f8 = L_7;
	}

IL_0051:
	{
		t1773* L_8 = (__this->f8);
		int32_t L_9 = (__this->f9);
		t1770  L_10 = {0};
		m9248(&L_10, (-1), 0, &m9248_MI);
		*((t1770 *)(t1770 *)SZArrayLdElema(L_8, L_9)) = L_10;
		int32_t L_11 = (__this->f9);
		int32_t L_12 = L_11;
		V_1 = L_12;
		__this->f9 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_1;
		t1778  L_14 = {0};
		m9274(&L_14, L_13, &m9274_MI);
		return L_14;
	}
}
extern MethodInfo m9259_MI;
extern "C" void m9259 (t1753 * __this, t1777  p0, MethodInfo* method)
{
	{
		m9252(__this, 2, &m9252_MI);
		t1777  L_0 = p0;
		m9254(__this, L_0, &m9254_MI);
		return;
	}
}
extern MethodInfo m9260_MI;
extern "C" void m9260 (t1753 * __this, t1777  p0, uint8_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m9252(__this, 3, &m9252_MI);
		t1777  L_0 = p0;
		m9254(__this, L_0, &m9254_MI);
		t730* L_1 = (__this->f1);
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
extern MethodInfo m9261_MI;
extern "C" void m9261 (t1753 * __this, t1777  p0, t826 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = (__this->f13);
		t826 * L_1 = p1;
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t560 * >::Invoke(&m12011_MI, L_0, L_1);
		V_0 = L_2;
		m9252(__this, 6, &m9252_MI);
		t1777  L_3 = p0;
		m9254(__this, L_3, &m9254_MI);
		t826 * L_4 = p1;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4452_MI, L_4);
		t1568 * L_6 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m11984_MI, L_5);
		t1568 * L_7 = (__this->f12);
		if ((!(((t9*)(t1568 *)L_6) == ((t9*)(t1568 *)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		t826 * L_8 = p1;
		m9251(__this, L_8, &m9251_MI);
	}

IL_0035:
	{
		int32_t L_9 = V_0;
		m9253(__this, L_9, &m9253_MI);
		int32_t L_10 = m9350((&p0), &m9350_MI);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_11 = (__this->f4);
		t826 * L_12 = p1;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9543_MI, L_12);
		__this->f4 = ((int32_t)((int32_t)L_11-(int32_t)L_13));
	}

IL_005a:
	{
		return;
	}
}
extern MethodInfo m9262_MI;
extern "C" void m9262 (t1753 * __this, t1777  p0, t830 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = (__this->f13);
		t830 * L_1 = p1;
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t560 * >::Invoke(&m12011_MI, L_0, L_1);
		V_0 = L_2;
		m9252(__this, 6, &m9252_MI);
		t1777  L_3 = p0;
		m9254(__this, L_3, &m9254_MI);
		t830 * L_4 = p1;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4452_MI, L_4);
		t1568 * L_6 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m11984_MI, L_5);
		t1568 * L_7 = (__this->f12);
		if ((!(((t9*)(t1568 *)L_6) == ((t9*)(t1568 *)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		t830 * L_8 = p1;
		m9251(__this, L_8, &m9251_MI);
	}

IL_0035:
	{
		int32_t L_9 = V_0;
		m9253(__this, L_9, &m9253_MI);
		return;
	}
}
extern MethodInfo m9263_MI;
extern "C" void m9263 (t1753 * __this, t1777  p0, int32_t p1, MethodInfo* method)
{
	{
		m9252(__this, 6, &m9252_MI);
		t1777  L_0 = p0;
		m9254(__this, L_0, &m9254_MI);
		int32_t L_1 = p1;
		m9253(__this, L_1, &m9253_MI);
		return;
	}
}
extern MethodInfo m9264_MI;
extern TypeInfo* t1774_TI_var;
extern "C" void m9264 (t1753 * __this, t1777  p0, t1778  p1, MethodInfo* method)
{
	static bool m9264_init;
	if (!m9264_init)
	{
		t1774_TI_var = il2cpp_codegen_class_from_type(&t1774_0_0_0);
		m9264_init = true;
	}
	int32_t V_0 = 0;
	t1774* V_1 = {0};
	{
		t1777  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1753_TI));
		int32_t L_1 = m9255(NULL, L_0, &m9255_MI);
		V_0 = L_1;
		m9252(__this, 6, &m9252_MI);
		t1777  L_2 = p0;
		m9254(__this, L_2, &m9254_MI);
		int32_t L_3 = (__this->f4);
		t1773* L_4 = (__this->f8);
		int32_t L_5 = ((&p1)->f0);
		int32_t L_6 = (((t1770 *)(t1770 *)SZArrayLdElema(L_4, L_5))->f1);
		if ((((int32_t)L_3) <= ((int32_t)L_6)))
		{
			goto IL_0051;
		}
	}
	{
		t1773* L_7 = (__this->f8);
		int32_t L_8 = ((&p1)->f0);
		int32_t L_9 = (__this->f4);
		((t1770 *)(t1770 *)SZArrayLdElema(L_7, L_8))->f1 = L_9;
	}

IL_0051:
	{
		t1774* L_10 = (__this->f10);
		if (L_10)
		{
			goto IL_0067;
		}
	}
	{
		__this->f10 = ((t1774*)SZArrayNew(t1774_TI_var, 4));
		goto IL_00a2;
	}

IL_0067:
	{
		int32_t L_11 = (__this->f11);
		t1774* L_12 = (__this->f10);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((t121 *)L_12)->max_length))))))
		{
			goto IL_00a2;
		}
	}
	{
		t1774* L_13 = (__this->f10);
		V_1 = ((t1774*)SZArrayNew(t1774_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_13)->max_length)))*(int32_t)2))));
		t1774* L_14 = (__this->f10);
		t1774* L_15 = V_1;
		t1774* L_16 = (__this->f10);
		m5940(NULL, (t121 *)(t121 *)L_14, (t121 *)(t121 *)L_15, (((int32_t)(((t121 *)L_16)->max_length))), &m5940_MI);
		t1774* L_17 = V_1;
		__this->f10 = L_17;
	}

IL_00a2:
	{
		t1774* L_18 = (__this->f10);
		int32_t L_19 = (__this->f11);
		int32_t L_20 = V_0;
		((t1769 *)(t1769 *)SZArrayLdElema(L_18, L_19))->f0 = L_20;
		t1774* L_21 = (__this->f10);
		int32_t L_22 = (__this->f11);
		int32_t L_23 = (__this->f2);
		((t1769 *)(t1769 *)SZArrayLdElema(L_21, L_22))->f1 = L_23;
		t1774* L_24 = (__this->f10);
		int32_t L_25 = (__this->f11);
		int32_t L_26 = ((&p1)->f0);
		((t1769 *)(t1769 *)SZArrayLdElema(L_24, L_25))->f2 = L_26;
		int32_t L_27 = (__this->f11);
		__this->f11 = ((int32_t)((int32_t)L_27+(int32_t)1));
		int32_t L_28 = (__this->f2);
		int32_t L_29 = V_0;
		__this->f2 = ((int32_t)((int32_t)L_28+(int32_t)L_29));
		return;
	}
}
extern MethodInfo m9265_MI;
extern "C" void m9265 (t1753 * __this, t1777  p0, t1776 * p1, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		t1776 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1743, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1776 * L_2 = p1;
		uint16_t L_3 = (L_2->f2);
		V_0 = L_3;
		V_1 = 0;
		V_2 = 0;
		m9252(__this, 6, &m9252_MI);
		t1776 * L_4 = p1;
		t1753 * L_5 = (L_4->f3);
		if ((((t9*)(t1753 *)L_5) == ((t9*)(t1753 *)__this)))
		{
			goto IL_0034;
		}
	}
	{
		t563 * L_6 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_6, (t2*) &_stringLiteral1744, &m2909_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0034:
	{
		int32_t L_7 = m9350((&p0), &m9350_MI);
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
		int32_t L_13 = m9351((&p0), &m9351_MI);
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
		t730* L_16 = (__this->f1);
		int32_t L_17 = (__this->f2);
		int32_t L_18 = L_17;
		V_3 = L_18;
		__this->f2 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_19)) = (uint8_t)((int32_t)18);
		t730* L_20 = (__this->f1);
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
		t730* L_25 = (__this->f1);
		int32_t L_26 = (__this->f2);
		int32_t L_27 = L_26;
		V_3 = L_27;
		__this->f2 = ((int32_t)((int32_t)L_27+(int32_t)1));
		int32_t L_28 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_25, L_28)) = (uint8_t)((int32_t)254);
		t730* L_29 = (__this->f1);
		int32_t L_30 = (__this->f2);
		int32_t L_31 = L_30;
		V_3 = L_31;
		__this->f2 = ((int32_t)((int32_t)L_31+(int32_t)1));
		int32_t L_32 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_29, L_32)) = (uint8_t)((int32_t)13);
		t730* L_33 = (__this->f1);
		int32_t L_34 = (__this->f2);
		int32_t L_35 = L_34;
		V_3 = L_35;
		__this->f2 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		uint32_t L_37 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_33, L_36)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_37&(int32_t)((int32_t)255)))));
		t730* L_38 = (__this->f1);
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
		t730* L_45 = (__this->f1);
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
		t730* L_51 = (__this->f1);
		int32_t L_52 = (__this->f2);
		int32_t L_53 = L_52;
		V_3 = L_53;
		__this->f2 = ((int32_t)((int32_t)L_53+(int32_t)1));
		int32_t L_54 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_51, L_54)) = (uint8_t)((int32_t)19);
		t730* L_55 = (__this->f1);
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
		t730* L_60 = (__this->f1);
		int32_t L_61 = (__this->f2);
		int32_t L_62 = L_61;
		V_3 = L_62;
		__this->f2 = ((int32_t)((int32_t)L_62+(int32_t)1));
		int32_t L_63 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_60, L_63)) = (uint8_t)((int32_t)254);
		t730* L_64 = (__this->f1);
		int32_t L_65 = (__this->f2);
		int32_t L_66 = L_65;
		V_3 = L_66;
		__this->f2 = ((int32_t)((int32_t)L_66+(int32_t)1));
		int32_t L_67 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_64, L_67)) = (uint8_t)((int32_t)14);
		t730* L_68 = (__this->f1);
		int32_t L_69 = (__this->f2);
		int32_t L_70 = L_69;
		V_3 = L_70;
		__this->f2 = ((int32_t)((int32_t)L_70+(int32_t)1));
		int32_t L_71 = V_3;
		uint32_t L_72 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_68, L_71)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_72&(int32_t)((int32_t)255)))));
		t730* L_73 = (__this->f1);
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
		t730* L_79 = (__this->f1);
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
		t730* L_85 = (__this->f1);
		int32_t L_86 = (__this->f2);
		int32_t L_87 = L_86;
		V_3 = L_87;
		__this->f2 = ((int32_t)((int32_t)L_87+(int32_t)1));
		int32_t L_88 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_85, L_88)) = (uint8_t)((int32_t)17);
		t730* L_89 = (__this->f1);
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
		t730* L_94 = (__this->f1);
		int32_t L_95 = (__this->f2);
		int32_t L_96 = L_95;
		V_3 = L_96;
		__this->f2 = ((int32_t)((int32_t)L_96+(int32_t)1));
		int32_t L_97 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_94, L_97)) = (uint8_t)((int32_t)254);
		t730* L_98 = (__this->f1);
		int32_t L_99 = (__this->f2);
		int32_t L_100 = L_99;
		V_3 = L_100;
		__this->f2 = ((int32_t)((int32_t)L_100+(int32_t)1));
		int32_t L_101 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_98, L_101)) = (uint8_t)((int32_t)12);
		t730* L_102 = (__this->f1);
		int32_t L_103 = (__this->f2);
		int32_t L_104 = L_103;
		V_3 = L_104;
		__this->f2 = ((int32_t)((int32_t)L_104+(int32_t)1));
		int32_t L_105 = V_3;
		uint32_t L_106 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_102, L_105)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_106&(int32_t)((int32_t)255)))));
		t730* L_107 = (__this->f1);
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
extern "C" void m9266 (t1753 * __this, t1777  p0, t828 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	t126 * V_1 = {0};
	{
		t828 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1745, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t828 * L_2 = p1;
		if (!((t1760 *)IsInst(L_2, InitializedTypeInfo(&t1760_TI))))
		{
			goto IL_0048;
		}
	}
	{
		t1777  L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1789_TI));
		t1777  L_4 = ((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f205;
		bool L_5 = m9353(NULL, L_3, L_4, &m9353_MI);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		t1777  L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1789_TI));
		t1777  L_7 = ((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f206;
		bool L_8 = m9353(NULL, L_6, L_7, &m9353_MI);
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		t1777  L_9 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1789_TI));
		t1777  L_10 = ((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f174;
		bool L_11 = m9353(NULL, L_9, L_10, &m9353_MI);
		if (!L_11)
		{
			goto IL_0048;
		}
	}

IL_003d:
	{
		t563 * L_12 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_12, (t2*) &_stringLiteral1746, &m2909_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0048:
	{
		t9 * L_13 = (__this->f13);
		t828 * L_14 = p1;
		int32_t L_15 = (int32_t)InterfaceFuncInvoker1< int32_t, t560 * >::Invoke(&m12011_MI, L_13, L_14);
		V_0 = L_15;
		m9252(__this, 6, &m9252_MI);
		t1777  L_16 = p0;
		m9254(__this, L_16, &m9254_MI);
		t828 * L_17 = p1;
		t126 * L_18 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4452_MI, L_17);
		V_1 = L_18;
		t126 * L_19 = V_1;
		if (!L_19)
		{
			goto IL_0082;
		}
	}
	{
		t126 * L_20 = V_1;
		t1568 * L_21 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m11984_MI, L_20);
		t1568 * L_22 = (__this->f12);
		if ((!(((t9*)(t1568 *)L_21) == ((t9*)(t1568 *)L_22))))
		{
			goto IL_0082;
		}
	}
	{
		t828 * L_23 = p1;
		m9251(__this, L_23, &m9251_MI);
	}

IL_0082:
	{
		int32_t L_24 = V_0;
		m9253(__this, L_24, &m9253_MI);
		t828 * L_25 = p1;
		t126 * L_26 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9553_MI, L_25);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1753_TI));
		t126 * L_27 = ((t1753_SFs*)InitializedTypeInfo(&t1753_TI)->static_fields)->f0;
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
		int32_t L_29 = m9350((&p0), &m9350_MI);
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_30 = (__this->f4);
		t828 * L_31 = p1;
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9543_MI, L_31);
		__this->f4 = ((int32_t)((int32_t)L_30-(int32_t)L_32));
	}

IL_00c2:
	{
		return;
	}
}
extern "C" void m9267 (t1753 * __this, t1777  p0, t828 * p1, int32_t p2, MethodInfo* method)
{
	t126 * V_0 = {0};
	{
		m9252(__this, 6, &m9252_MI);
		t1777  L_0 = p0;
		m9254(__this, L_0, &m9254_MI);
		t828 * L_1 = p1;
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4452_MI, L_1);
		V_0 = L_2;
		t126 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		t126 * L_4 = V_0;
		t1568 * L_5 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m11984_MI, L_4);
		t1568 * L_6 = (__this->f12);
		if ((!(((t9*)(t1568 *)L_5) == ((t9*)(t1568 *)L_6))))
		{
			goto IL_002d;
		}
	}
	{
		t828 * L_7 = p1;
		m9251(__this, L_7, &m9251_MI);
	}

IL_002d:
	{
		int32_t L_8 = p2;
		m9253(__this, L_8, &m9253_MI);
		t828 * L_9 = p1;
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9553_MI, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1753_TI));
		t126 * L_11 = ((t1753_SFs*)InitializedTypeInfo(&t1753_TI)->static_fields)->f0;
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
		int32_t L_13 = m9350((&p0), &m9350_MI);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_14 = (__this->f4);
		t828 * L_15 = p1;
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9543_MI, L_15);
		__this->f4 = ((int32_t)((int32_t)L_14-(int32_t)L_16));
	}

IL_006d:
	{
		return;
	}
}
extern MethodInfo m9268_MI;
extern "C" void m9268 (t1753 * __this, t1777  p0, t2* p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = (__this->f13);
		t2* L_1 = p1;
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t2* >::Invoke(&m12012_MI, L_0, L_1);
		V_0 = L_2;
		m9252(__this, 6, &m9252_MI);
		t1777  L_3 = p0;
		m9254(__this, L_3, &m9254_MI);
		int32_t L_4 = V_0;
		m9253(__this, L_4, &m9253_MI);
		return;
	}
}
extern MethodInfo m9269_MI;
extern "C" void m9269 (t1753 * __this, t1777  p0, t126 * p1, MethodInfo* method)
{
	{
		m9252(__this, 6, &m9252_MI);
		t1777  L_0 = p0;
		m9254(__this, L_0, &m9254_MI);
		t9 * L_1 = (__this->f13);
		t126 * L_2 = p1;
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t560 * >::Invoke(&m12011_MI, L_1, L_2);
		m9253(__this, L_3, &m9253_MI);
		return;
	}
}
extern MethodInfo m9270_MI;
extern "C" void m9270 (t1753 * __this, t1777  p0, t828 * p1, t152* p2, MethodInfo* method)
{
	int16_t V_0 = 0;
	int32_t V_1 = 0;
	t1777  V_2 = {0};
	t1777  V_3 = {0};
	{
		t828 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1747, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int16_t L_2 = m9352((&p0), &m9352_MI);
		V_0 = L_2;
		int16_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1789_TI));
		t1777  L_4 = ((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f39;
		V_2 = L_4;
		int16_t L_5 = m9352((&V_2), &m9352_MI);
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0041;
		}
	}
	{
		int16_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1789_TI));
		t1777  L_7 = ((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f110;
		V_3 = L_7;
		int16_t L_8 = m9352((&V_3), &m9352_MI);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		t169 * L_9 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_9, (t2*) &_stringLiteral1748, &m5734_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		t828 * L_10 = p1;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9544_MI, L_10);
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
		t828 * L_13 = p1;
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9544_MI, L_13);
		if (((int32_t)((int32_t)L_14&(int32_t)2)))
		{
			goto IL_0068;
		}
	}
	{
		t1341 * L_15 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_15, (t2*) &_stringLiteral1749, &m5713_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0068:
	{
		t9 * L_16 = (__this->f13);
		t828 * L_17 = p1;
		t152* L_18 = p2;
		int32_t L_19 = (int32_t)InterfaceFuncInvoker2< int32_t, t828 *, t152* >::Invoke(&m12013_MI, L_16, L_17, L_18);
		V_1 = L_19;
		t1777  L_20 = p0;
		t828 * L_21 = p1;
		int32_t L_22 = V_1;
		m9267(__this, L_20, L_21, L_22, &m9267_MI);
		return;
	}

IL_0080:
	{
		t1777  L_23 = p0;
		t828 * L_24 = p1;
		VirtActionInvoker2< t1777 , t828 * >::Invoke(&m9266_MI, __this, L_23, L_24);
		return;
	}
}
extern MethodInfo m9271_MI;
extern "C" void m9271 (t1753 * __this, t1778  p0, MethodInfo* method)
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
		t563 * L_3 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_3, (t2*) &_stringLiteral1750, &m2909_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0024:
	{
		t1773* L_4 = (__this->f8);
		int32_t L_5 = ((&p0)->f0);
		int32_t L_6 = (((t1770 *)(t1770 *)SZArrayLdElema(L_4, L_5))->f0);
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		t563 * L_7 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_7, (t2*) &_stringLiteral1751, &m2909_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0049:
	{
		t1773* L_8 = (__this->f8);
		int32_t L_9 = ((&p0)->f0);
		int32_t L_10 = (__this->f2);
		((t1770 *)(t1770 *)SZArrayLdElema(L_8, L_9))->f0 = L_10;
		t1773* L_11 = (__this->f8);
		int32_t L_12 = ((&p0)->f0);
		int32_t L_13 = (((t1770 *)(t1770 *)SZArrayLdElema(L_11, L_12))->f1);
		int32_t L_14 = (__this->f4);
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_00a2;
		}
	}
	{
		t1773* L_15 = (__this->f8);
		int32_t L_16 = ((&p0)->f0);
		int32_t L_17 = (((t1770 *)(t1770 *)SZArrayLdElema(L_15, L_16))->f1);
		__this->f4 = L_17;
	}

IL_00a2:
	{
		return;
	}
}
extern "C" void m9272 (t1753 * __this, MethodInfo* method)
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
		t1773* L_0 = (__this->f8);
		t1774* L_1 = (__this->f10);
		int32_t L_2 = V_0;
		int32_t L_3 = (((t1769 *)(t1769 *)SZArrayLdElema(L_1, L_2))->f2);
		int32_t L_4 = (((t1770 *)(t1770 *)SZArrayLdElema(L_0, L_3))->f0);
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		t563 * L_5 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_5, (t2*) &_stringLiteral1752, &m2909_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0036:
	{
		t1773* L_6 = (__this->f8);
		t1774* L_7 = (__this->f10);
		int32_t L_8 = V_0;
		int32_t L_9 = (((t1769 *)(t1769 *)SZArrayLdElema(L_7, L_8))->f2);
		int32_t L_10 = (((t1770 *)(t1770 *)SZArrayLdElema(L_6, L_9))->f0);
		t1774* L_11 = (__this->f10);
		int32_t L_12 = V_0;
		int32_t L_13 = (((t1769 *)(t1769 *)SZArrayLdElema(L_11, L_12))->f1);
		t1774* L_14 = (__this->f10);
		int32_t L_15 = V_0;
		int32_t L_16 = (((t1769 *)(t1769 *)SZArrayLdElema(L_14, L_15))->f0);
		V_1 = ((int32_t)((int32_t)L_10-(int32_t)((int32_t)((int32_t)L_13+(int32_t)L_16))));
		t1774* L_17 = (__this->f10);
		int32_t L_18 = V_0;
		int32_t L_19 = (((t1769 *)(t1769 *)SZArrayLdElema(L_17, L_18))->f0);
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00ad;
		}
	}
	{
		t730* L_20 = (__this->f1);
		t1774* L_21 = (__this->f10);
		int32_t L_22 = V_0;
		int32_t L_23 = (((t1769 *)(t1769 *)SZArrayLdElema(L_21, L_22))->f1);
		int32_t L_24 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_23)) = (uint8_t)(((uint8_t)(((int8_t)L_24))));
		goto IL_00d9;
	}

IL_00ad:
	{
		int32_t L_25 = (__this->f2);
		V_2 = L_25;
		t1774* L_26 = (__this->f10);
		int32_t L_27 = V_0;
		int32_t L_28 = (((t1769 *)(t1769 *)SZArrayLdElema(L_26, L_27))->f1);
		__this->f2 = L_28;
		int32_t L_29 = V_1;
		m9253(__this, L_29, &m9253_MI);
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
extern "C" int32_t m9273 (t9 * __this , t1753 * p0, MethodInfo* method)
{
	{
		t1753 * L_0 = p0;
		int32_t L_1 = (L_0->f2);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t125MD.h"
extern MethodInfo m4228_MI;


extern "C" void m9274 (t1778 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9275_MI;
extern "C" bool m9275 (t1778 * __this, t9 * p0, MethodInfo* method)
{
	bool V_0 = false;
	t1778  V_1 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((!(((t9*)(t9 *)((t9 *)IsInst(L_0, InitializedTypeInfo(&t1778_TI)))) <= ((t9*)(t9 *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		t9 * L_2 = p0;
		V_1 = ((*(t1778 *)((t1778 *)UnBox (L_2, InitializedTypeInfo(&t1778_TI)))));
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
extern MethodInfo m9276_MI;
extern "C" int32_t m9276 (t1778 * __this, MethodInfo* method)
{
	{
		int32_t* L_0 = &(__this->f0);
		int32_t L_1 = m4228(L_0, &m4228_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1779MD.h"
extern MethodInfo m9531_MI;


extern "C" void m9277 (t1776 * __this, t126 * p0, t1753 * p1, MethodInfo* method)
{
	{
		m9531(__this, &m9531_MI);
		t126 * L_0 = p0;
		__this->f0 = L_0;
		t1753 * L_1 = p1;
		__this->f3 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1781.h"
extern MethodInfo m9302_MI;
extern MethodInfo m9551_MI;
extern MethodInfo m9300_MI;
extern MethodInfo m9287_MI;
extern MethodInfo m9296_MI;
extern MethodInfo m671_MI;
extern MethodInfo m4231_MI;


extern MethodInfo m9278_MI;
extern TypeInfo* t152_TI_var;
extern "C" void m9278 (t1767 * __this, t1754 * p0, t2* p1, int32_t p2, int32_t p3, t126 * p4, t152* p5, t152* p6, t152* p7, t1756* p8, t1756* p9, MethodInfo* method)
{
	static bool m9278_init;
	if (!m9278_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9278_init = true;
	}
	int32_t V_0 = 0;
	t1759  V_1 = {0};
	{
		__this->f11 = 1;
		m9551(__this, &m9551_MI);
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
		t1756* L_6 = p8;
		__this->f15 = L_6;
		t1756* L_7 = p9;
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
		t563 * L_14 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_14, (t2*) &_stringLiteral1733, (t2*) &_stringLiteral1734, &m5719_MI);
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
		m5940(NULL, (t121 *)(t121 *)L_19, (t121 *)(t121 *)L_20, (((int32_t)(((t121 *)L_21)->max_length))), &m5940_MI);
	}

IL_00a9:
	{
		t1754 * L_22 = p0;
		__this->f7 = L_22;
		int32_t L_23 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, bool >::Invoke(&m9300_MI, __this, __this, 6, 1);
		__this->f5 = L_23;
		t1754 * L_24 = p0;
		t1568 * L_25 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m9390_MI, L_24);
		t1759  L_26 = m9287(__this, &m9287_MI);
		V_1 = L_26;
		int32_t L_27 = m9312((&V_1), &m9312_MI);
		m9335(((t1749 *)Castclass(L_25, InitializedTypeInfo(&t1749_TI))), __this, L_27, &m9335_MI);
		return;
	}
}
extern MethodInfo m9279_MI;
extern "C" bool m9279 (t1767 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9280_MI;
extern "C" t1758  m9280 (t1767 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9302(__this, &m9302_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9281_MI;
extern "C" t126 * m9281 (t1767 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9282_MI;
extern "C" t126 * m9282 (t1767 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" t126 * m9283 (t1767 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9284_MI;
extern "C" t2* m9284 (t1767 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9285_MI;
extern "C" int32_t m9285 (t1767 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9286_MI;
extern "C" int32_t m9286 (t1767 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern "C" t1759  m9287 (t1767 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		t1759  L_1 = {0};
		m9308(&L_1, ((int32_t)((int32_t)((int32_t)100663296)|(int32_t)L_0)), &m9308_MI);
		return L_1;
	}
}
extern MethodInfo m9288_MI;
extern "C" t828 * m9288 (t1767 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m9289_MI;
extern TypeInfo* t928_TI_var;
extern "C" t928* m9289 (t1767 * __this, MethodInfo* method)
{
	static bool m9289_init;
	if (!m9289_init)
	{
		t928_TI_var = il2cpp_codegen_class_from_type(&t928_0_0_0);
		m9289_init = true;
	}
	t928* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B7_0 = 0;
	t928* G_B7_1 = {0};
	int32_t G_B6_0 = 0;
	t928* G_B6_1 = {0};
	t1790 * G_B8_0 = {0};
	int32_t G_B8_1 = 0;
	t928* G_B8_2 = {0};
	{
		t1754 * L_0 = (__this->f7);
		bool L_1 = m9428(L_0, &m9428_MI);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		t138 * L_2 = m9302(__this, &m9302_MI);
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
		return (t928*)NULL;
	}

IL_001e:
	{
		t152* L_4 = (__this->f1);
		V_0 = ((t928*)SZArrayNew(t928_TI_var, (((int32_t)(((t121 *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_005d;
	}

IL_0030:
	{
		t928* L_5 = V_0;
		int32_t L_6 = V_1;
		t1755* L_7 = (__this->f8);
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
		G_B8_0 = ((t1790 *)(NULL));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0047;
	}

IL_003d:
	{
		t1755* L_8 = (__this->f8);
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)((int32_t)L_9+(int32_t)1));
		G_B8_0 = (*(t1790 **)(t1790 **)SZArrayLdElema(L_8, L_10));
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0047:
	{
		t152* L_11 = (__this->f1);
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		int32_t L_14 = V_1;
		t924 * L_15 = (t924 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t924_TI));
		m9697(L_15, G_B8_0, (*(t126 **)(t126 **)SZArrayLdElema(L_11, L_13)), __this, ((int32_t)((int32_t)L_14+(int32_t)1)), &m9697_MI);
		ArrayElementTypeCheck (G_B8_2, L_15);
		*((t924 **)(t924 **)SZArrayLdElema(G_B8_2, G_B8_1)) = (t924 *)L_15;
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
		t928* L_19 = V_0;
		return L_19;
	}
}
extern MethodInfo m9290_MI;
extern "C" int32_t m9290 (t1767 * __this, MethodInfo* method)
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
extern MethodInfo m9291_MI;
extern "C" t9 * m9291 (t1767 * __this, t9 * p0, int32_t p1, t933 * p2, t158* p3, t901 * p4, MethodInfo* method)
{
	{
		t138 * L_0 = m9302(__this, &m9302_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9292_MI;
extern "C" bool m9292 (t1767 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9302(__this, &m9302_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9293_MI;
extern "C" t158* m9293 (t1767 * __this, bool p0, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f7);
		bool L_1 = m9428(L_0, &m9428_MI);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_3 = m11605(NULL, __this, L_2, &m11605_MI);
		return L_3;
	}

IL_0015:
	{
		t138 * L_4 = m9302(__this, &m9302_MI);
		il2cpp_codegen_raise_exception(L_4);
	}
}
extern MethodInfo m9294_MI;
extern "C" t158* m9294 (t1767 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f7);
		bool L_1 = m9428(L_0, &m9428_MI);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t126 * L_2 = p0;
		bool L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_4 = m11604(NULL, __this, L_2, L_3, &m11604_MI);
		return L_4;
	}

IL_0016:
	{
		t138 * L_5 = m9302(__this, &m9302_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m9295_MI;
extern "C" t1753 * m9295 (t1767 * __this, MethodInfo* method)
{
	{
		t1753 * L_0 = m9296(__this, ((int32_t)64), &m9296_MI);
		return L_0;
	}
}
extern "C" t1753 * m9296 (t1767 * __this, int32_t p0, MethodInfo* method)
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
		t1341 * L_2 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_2, (t2*) &_stringLiteral1753, &m5713_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001f:
	{
		t1753 * L_3 = (__this->f6);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		t1753 * L_4 = (__this->f6);
		return L_4;
	}

IL_002e:
	{
		t1754 * L_5 = (__this->f7);
		t1568 * L_6 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m9390_MI, L_5);
		t1754 * L_7 = (__this->f7);
		t1568 * L_8 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m9390_MI, L_7);
		t9 * L_9 = m9336(((t1749 *)Castclass(L_8, InitializedTypeInfo(&t1749_TI))), &m9336_MI);
		int32_t L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1753_TI));
		t1753 * L_11 = (t1753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1753_TI));
		m9249(L_11, L_6, L_9, L_10, &m9249_MI);
		__this->f6 = L_11;
		t1753 * L_12 = (__this->f6);
		return L_12;
	}
}
extern MethodInfo m9297_MI;
extern TypeInfo* t221_TI_var;
extern "C" t2* m9297 (t1767 * __this, MethodInfo* method)
{
	static bool m9297_init;
	if (!m9297_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9297_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, 5));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral1754);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral1754;
		t221* L_1 = L_0;
		t1754 * L_2 = (__this->f7);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9391_MI, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)L_3;
		t221* L_4 = L_1;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral476);
		*((t2**)(t2**)SZArrayLdElema(L_4, 2)) = (t2*)(t2*) &_stringLiteral476;
		t221* L_5 = L_4;
		t2* L_6 = (__this->f4);
		ArrayElementTypeCheck (L_5, L_6);
		*((t2**)(t2**)SZArrayLdElema(L_5, 3)) = (t2*)L_6;
		t221* L_7 = L_5;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral344);
		*((t2**)(t2**)SZArrayLdElema(L_7, 4)) = (t2*)(t2*) &_stringLiteral344;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = m4293(NULL, L_7, &m4293_MI);
		return L_8;
	}
}
extern MethodInfo m9298_MI;
extern "C" bool m9298 (t1767 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		bool L_1 = m671(__this, L_0, &m671_MI);
		return L_1;
	}
}
extern MethodInfo m9299_MI;
extern "C" int32_t m9299 (t1767 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f4);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4231_MI, L_0);
		return L_1;
	}
}
extern "C" int32_t m9300 (t1767 * __this, t9 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f7);
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = p2;
		int32_t L_4 = m9426(L_0, L_1, L_2, L_3, &m9426_MI);
		return L_4;
	}
}
extern MethodInfo m9301_MI;
extern "C" void m9301 (t1767 * __this, t828 * p0, MethodInfo* method)
{
	{
		t828 * L_0 = p0;
		__this->f9 = L_0;
		return;
	}
}
extern "C" t138 * m9302 (t1767 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_0, (t2*) &_stringLiteral1724, &m5734_MI);
		return L_0;
	}
}
extern MethodInfo m9303_MI;
extern "C" t828 * m9303 (t1767 * __this, t152* p0, MethodInfo* method)
{
	typedef t828 * (*m9303_ftn) (t1767 *, t152*);
	static m9303_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9303_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m9304_MI;
extern "C" bool m9304 (t1767 * __this, MethodInfo* method)
{
	{
		t1780* L_0 = (__this->f12);
		return ((((int32_t)((((t9*)(t1780*)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9305_MI;
extern "C" bool m9305 (t1767 * __this, MethodInfo* method)
{
	{
		t1780* L_0 = (__this->f12);
		return ((((int32_t)((((t9*)(t1780*)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9306_MI;
extern TypeInfo* t152_TI_var;
extern "C" t152* m9306 (t1767 * __this, MethodInfo* method)
{
	static bool m9306_init;
	if (!m9306_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9306_init = true;
	}
	t152* V_0 = {0};
	int32_t V_1 = 0;
	{
		t1780* L_0 = (__this->f12);
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
		t1780* L_2 = (__this->f12);
		V_0 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_2)->max_length)))));
		V_1 = 0;
		goto IL_002f;
	}

IL_0020:
	{
		t152* L_3 = V_0;
		int32_t L_4 = V_1;
		t1780* L_5 = (__this->f12);
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		ArrayElementTypeCheck (L_3, (*(t1766 **)(t1766 **)SZArrayLdElema(L_5, L_7)));
		*((t126 **)(t126 **)SZArrayLdElema(L_3, L_4)) = (t126 *)(*(t1766 **)(t1766 **)SZArrayLdElema(L_5, L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_9 = V_1;
		t1780* L_10 = (__this->f12);
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
extern MethodInfo m9307_MI;
extern "C" t1568 * m9307 (t1767 * __this, MethodInfo* method)
{
	{
		t1568 * L_0 = m7812(__this, &m7812_MI);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9308 (t1759 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9309_MI;
extern "C" void m9309 (t9 * __this , MethodInfo* method)
{
	t1759  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&t1759_TI), (&V_0));
		t1759  L_0 = V_0;
		((t1759_SFs*)InitializedTypeInfo(&t1759_TI)->static_fields)->f1 = L_0;
		return;
	}
}
extern MethodInfo m9310_MI;
extern "C" bool m9310 (t1759 * __this, t9 * p0, MethodInfo* method)
{
	bool V_0 = false;
	t1759  V_1 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((!(((t9*)(t9 *)((t9 *)IsInst(L_0, InitializedTypeInfo(&t1759_TI)))) <= ((t9*)(t9 *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		t9 * L_2 = p0;
		V_1 = ((*(t1759 *)((t1759 *)UnBox (L_2, InitializedTypeInfo(&t1759_TI)))));
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
extern MethodInfo m9311_MI;
extern "C" int32_t m9311 (t1759 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" int32_t m9312 (t1759 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1158.h"
#include "t2119.h"
#include "t1785.h"
#include "t2110.h"
#include "t1783.h"
extern TypeInfo t1158_TI;
extern TypeInfo t918_TI;
extern TypeInfo t2119_TI;
extern TypeInfo t1784_TI;
extern TypeInfo t1782_TI;
extern TypeInfo t2110_TI;
extern TypeInfo t1095_TI;
extern TypeInfo t1783_TI;
#include "t1158MD.h"
#include "t918MD.h"
#include "t1401MD.h"
#include "t2119MD.h"
#include "t1347MD.h"
#include "t2110MD.h"
#include "t1783MD.h"
extern Il2CppType t1782_0_0_0;
extern Il2CppType t1095_0_0_0;
extern MethodInfo m5911_MI;
extern MethodInfo m9562_MI;
extern MethodInfo m11555_MI;
extern MethodInfo m9328_MI;
extern MethodInfo m9315_MI;
extern MethodInfo m9338_MI;
extern MethodInfo m9379_MI;
extern MethodInfo m6074_MI;
extern MethodInfo m9316_MI;
extern MethodInfo m9463_MI;
extern MethodInfo m11535_MI;
extern MethodInfo m5772_MI;
extern MethodInfo m11112_MI;
extern MethodInfo m12014_MI;
extern MethodInfo m9321_MI;
extern MethodInfo m5767_MI;
extern MethodInfo m9380_MI;
extern MethodInfo m9319_MI;
extern MethodInfo m5736_MI;
extern MethodInfo m9320_MI;
extern MethodInfo m9327_MI;
extern MethodInfo m2794_MI;
extern MethodInfo m9324_MI;
extern MethodInfo m9326_MI;
extern MethodInfo m11868_MI;
extern MethodInfo m5735_MI;
extern MethodInfo m9323_MI;
extern MethodInfo m9325_MI;
extern MethodInfo m5922_MI;
extern MethodInfo m9329_MI;
extern MethodInfo m5919_MI;
extern MethodInfo m9330_MI;
extern MethodInfo m9331_MI;
extern MethodInfo m9339_MI;


extern TypeInfo* t158_TI_var;
extern "C" void m9313 (t1749 * __this, t1744 * p0, t2* p1, t2* p2, bool p3, bool p4, MethodInfo* method)
{
	static bool m9313_init;
	if (!m9313_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9313_init = true;
	}
	t1754 * V_0 = {0};
	t126 * V_1 = {0};
	t1345 * V_2 = {0};
	t126 * V_3 = {0};
	t2* V_4 = {0};
	t2* V_5 = {0};
	t1744 * V_6 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		t1158 * L_0 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5911(L_0, &m5911_MI);
		__this->f17 = L_0;
		m9562(__this, &m9562_MI);
		t2* L_1 = p1;
		t2* L_2 = L_1;
		V_5 = L_2;
		__this->f7 = L_2;
		t2* L_3 = V_5;
		__this->f6 = L_3;
		t2* L_4 = p2;
		__this->f5 = L_4;
		t1744 * L_5 = p0;
		t1744 * L_6 = L_5;
		V_6 = L_6;
		__this->f14 = L_6;
		t1744 * L_7 = V_6;
		__this->f4 = L_7;
		bool L_8 = p4;
		__this->f19 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		t730* L_9 = m11555(NULL, &m11555_MI);
		__this->f12 = L_9;
		int32_t L_10 = m9328(__this, __this, 0, 1, &m9328_MI);
		__this->f13 = L_10;
		t1158 * L_11 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5911(L_11, &m5911_MI);
		__this->f16 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1749_TI));
		m9315(NULL, __this, &m9315_MI);
		m9338(__this, &m9338_MI);
		t1744 * L_12 = p0;
		bool L_13 = m9103(L_12, &m9103_MI);
		if (!L_13)
		{
			goto IL_009c;
		}
	}
	{
		t1754 * L_14 = (t1754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1754_TI));
		m9379(L_14, __this, ((int32_t)128), ((int32_t)16777215), &m9379_MI);
		V_0 = L_14;
		t1754 * L_15 = V_0;
		t126 * L_16 = m6074(NULL, L_15, &m6074_MI);
		V_1 = L_16;
		t126 * L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1749_TI));
		m9316(NULL, __this, L_17, &m9316_MI);
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
		t1345 * L_19 = m9463(NULL, (t2*) &_stringLiteral1755, &m9463_MI);
		V_2 = L_19;
		t1345 * L_20 = V_2;
		if (L_20)
		{
			goto IL_00bc;
		}
	}
	{
		t2119 * L_21 = (t2119 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2119_TI));
		m11535(L_21, (t2*) &_stringLiteral1756, &m11535_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_00bc:
	{
		t1345 * L_22 = V_2;
		t126 * L_23 = (t126 *)VirtFuncInvoker1< t126 *, t2* >::Invoke(&m5772_MI, L_22, (t2*) &_stringLiteral1757);
		V_3 = L_23;
		t126 * L_24 = V_3;
		if (L_24)
		{
			goto IL_00d6;
		}
	}
	{
		t2119 * L_25 = (t2119 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2119_TI));
		m11535(L_25, (t2*) &_stringLiteral1758, &m11535_MI);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_00d6:
	{
		t126 * L_26 = V_3;
		t158* L_27 = ((t158*)SZArrayNew(t158_TI_var, 1));
		ArrayElementTypeCheck (L_27, __this);
		*((t9 **)(t9 **)SZArrayLdElema(L_27, 0)) = (t9 *)__this;
		t9 * L_28 = m11112(NULL, L_26, L_27, &m11112_MI);
		__this->f21 = ((t9 *)Castclass(L_28, InitializedTypeInfo(&t1784_TI)));
		t2* L_29 = (__this->f5);
		V_4 = L_29;
		t1744 * L_30 = (__this->f14);
		t2* L_31 = m9104(L_30, &m9104_MI);
		if (!L_31)
		{
			goto IL_011a;
		}
	}
	{
		t1744 * L_32 = (__this->f14);
		t2* L_33 = m9104(L_32, &m9104_MI);
		t2* L_34 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_35 = m1091(NULL, L_33, L_34, &m1091_MI);
		V_4 = L_35;
	}

IL_011a:
	{
		t9 * L_36 = (__this->f21);
		t58 L_37 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		t2* L_38 = V_4;
		InterfaceActionInvoker3< t58, t2*, bool >::Invoke(&m12014_MI, L_36, L_37, L_38, 1);
	}

IL_012d:
	{
		return;
	}
}
extern MethodInfo m9314_MI;
extern TypeInfo* t312_TI_var;
extern "C" void m9314 (t9 * __this , MethodInfo* method)
{
	static bool m9314_init;
	if (!m9314_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m9314_init = true;
	}
	{
		t312* L_0 = ((t312*)SZArrayNew(t312_TI_var, 3));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)38);
		t312* L_1 = L_0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 1)) = (uint16_t)((int32_t)91);
		t312* L_2 = L_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 2)) = (uint16_t)((int32_t)42);
		((t1749_SFs*)InitializedTypeInfo(&t1749_TI)->static_fields)->f22 = L_2;
		return;
	}
}
extern "C" void m9315 (t9 * __this , t1749 * p0, MethodInfo* method)
{
	typedef void (*m9315_ftn) (t1749 *);
	static m9315_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9315_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::basic_init(System.Reflection.Emit.ModuleBuilder)");
	_il2cpp_icall_func(p0);
}
extern "C" void m9316 (t9 * __this , t1749 * p0, t126 * p1, MethodInfo* method)
{
	typedef void (*m9316_ftn) (t1749 *, t126 *);
	static m9316_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9316_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::set_wrappers_type(System.Reflection.Emit.ModuleBuilder,System.Type)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" bool m9317 (t1749 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f19);
		return L_0;
	}
}
extern MethodInfo m9318_MI;
extern "C" t1754 * m9318 (t1749 * __this, t2* p0, int32_t p1, t126 * p2, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		t126 * L_2 = p2;
		t1754 * L_3 = m9321(__this, L_0, L_1, L_2, (t152*)(t152*)NULL, &m9321_MI);
		return L_3;
	}
}
extern TypeInfo* t1782_TI_var;
extern "C" void m9319 (t1749 * __this, t1754 * p0, MethodInfo* method)
{
	static bool m9319_init;
	if (!m9319_init)
	{
		t1782_TI_var = il2cpp_codegen_class_from_type(&t1782_0_0_0);
		m9319_init = true;
	}
	t1782* V_0 = {0};
	{
		t1782* L_0 = (__this->f11);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		t1782* L_1 = (__this->f11);
		int32_t L_2 = (__this->f10);
		if ((!(((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))) == ((uint32_t)L_2))))
		{
			goto IL_0041;
		}
	}
	{
		t1782* L_3 = (__this->f11);
		V_0 = ((t1782*)SZArrayNew(t1782_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_3)->max_length)))*(int32_t)2))));
		t1782* L_4 = (__this->f11);
		t1782* L_5 = V_0;
		int32_t L_6 = (__this->f10);
		m5940(NULL, (t121 *)(t121 *)L_4, (t121 *)(t121 *)L_5, L_6, &m5940_MI);
		t1782* L_7 = V_0;
		__this->f11 = L_7;
	}

IL_0041:
	{
		goto IL_004f;
	}

IL_0043:
	{
		__this->f11 = ((t1782*)SZArrayNew(t1782_TI_var, 1));
	}

IL_004f:
	{
		t1782* L_8 = (__this->f11);
		int32_t L_9 = (__this->f10);
		t1754 * L_10 = p0;
		ArrayElementTypeCheck (L_8, L_10);
		*((t1754 **)(t1754 **)SZArrayLdElema(L_8, L_9)) = (t1754 *)L_10;
		int32_t L_11 = (__this->f10);
		__this->f10 = ((int32_t)((int32_t)L_11+(int32_t)1));
		return;
	}
}
extern "C" t1754 * m9320 (t1749 * __this, t2* p0, int32_t p1, t126 * p2, t152* p3, int32_t p4, int32_t p5, MethodInfo* method)
{
	t1754 * V_0 = {0};
	{
		t1158 * L_0 = (__this->f16);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m5767_MI, L_0, L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		t563 * L_3 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_3, (t2*) &_stringLiteral1759, &m2909_MI);
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
		t1754 * L_10 = (t1754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1754_TI));
		m9380(L_10, __this, L_4, L_5, L_6, L_7, L_8, L_9, (t126 *)NULL, &m9380_MI);
		V_0 = L_10;
		t1754 * L_11 = V_0;
		m9319(__this, L_11, &m9319_MI);
		t1158 * L_12 = (__this->f16);
		t2* L_13 = p0;
		t1754 * L_14 = V_0;
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5736_MI, L_12, L_13, L_14);
		t1754 * L_15 = V_0;
		return L_15;
	}
}
extern "C" t1754 * m9321 (t1749 * __this, t2* p0, int32_t p1, t126 * p2, t152* p3, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		t126 * L_2 = p2;
		t152* L_3 = p3;
		t1754 * L_4 = m9320(__this, L_0, L_1, L_2, L_3, 0, 0, &m9320_MI);
		return L_4;
	}
}
extern MethodInfo m9322_MI;
extern "C" t126 * m9322 (t1749 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t126 * L_1 = (t126 *)VirtFuncInvoker3< t126 *, t2*, bool, bool >::Invoke(&m9327_MI, __this, L_0, 0, 0);
		return L_1;
	}
}
extern "C" t1754 * m9323 (t1749 * __this, t1782* p0, int32_t p1, t2* p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		t2* L_0 = p2;
		t1782* L_1 = p0;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9389_MI, (*(t1754 **)(t1754 **)SZArrayLdElema(L_1, L_3)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_5 = m4358(NULL, &m4358_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_6 = m5769(NULL, L_0, L_4, 1, L_5, &m5769_MI);
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		t1782* L_7 = p0;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		return (*(t1754 **)(t1754 **)SZArrayLdElema(L_7, L_9));
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
		return (t1754 *)NULL;
	}
}
extern "C" t1754 * m9324 (t1749 * __this, t1782* p0, int32_t p1, t2* p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		t2* L_0 = p2;
		t1782* L_1 = p0;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9391_MI, (*(t1754 **)(t1754 **)SZArrayLdElema(L_1, L_3)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_5 = m4358(NULL, &m4358_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_6 = m5769(NULL, L_0, L_4, 1, L_5, &m5769_MI);
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		t1782* L_7 = p0;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		return (*(t1754 **)(t1754 **)SZArrayLdElema(L_7, L_9));
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
		return (t1754 *)NULL;
	}
}
extern "C" t126 * m9325 (t9 * __this , t1754 * p0, t2* p1, MethodInfo* method)
{
	typedef t126 * (*m9325_ftn) (t1754 *, t2*);
	static m9325_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9325_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::create_modified_type(System.Reflection.Emit.TypeBuilder,System.String)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" t1754 * m9326 (t1749 * __this, t1754 * p0, t2* p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	t2* V_1 = {0};
	t2* V_2 = {0};
	t1754 * V_3 = {0};
	{
		t2* L_0 = p1;
		int32_t L_1 = m2794(L_0, ((int32_t)43), &m2794_MI);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		t1754 * L_3 = p0;
		t1782* L_4 = (L_3->f18);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		t1754 * L_5 = p0;
		t1782* L_6 = (L_5->f18);
		t1754 * L_7 = p0;
		t1782* L_8 = (L_7->f18);
		t2* L_9 = p1;
		t1754 * L_10 = m9324(__this, L_6, (((int32_t)(((t121 *)L_8)->max_length))), L_9, &m9324_MI);
		return L_10;
	}

IL_002b:
	{
		return (t1754 *)NULL;
	}

IL_002d:
	{
		t1754 * L_11 = p0;
		t1782* L_12 = (L_11->f18);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		t2* L_13 = p1;
		int32_t L_14 = V_0;
		t2* L_15 = m2739(L_13, 0, L_14, &m2739_MI);
		V_1 = L_15;
		t2* L_16 = p1;
		int32_t L_17 = V_0;
		t2* L_18 = m2765(L_16, ((int32_t)((int32_t)L_17+(int32_t)1)), &m2765_MI);
		V_2 = L_18;
		t1754 * L_19 = p0;
		t1782* L_20 = (L_19->f18);
		t1754 * L_21 = p0;
		t1782* L_22 = (L_21->f18);
		t2* L_23 = V_1;
		t1754 * L_24 = m9324(__this, L_20, (((int32_t)(((t121 *)L_22)->max_length))), L_23, &m9324_MI);
		V_3 = L_24;
		t1754 * L_25 = V_3;
		if (!L_25)
		{
			goto IL_006a;
		}
	}
	{
		t1754 * L_26 = V_3;
		t2* L_27 = V_2;
		t1754 * L_28 = m9326(__this, L_26, L_27, &m9326_MI);
		return L_28;
	}

IL_006a:
	{
		return (t1754 *)NULL;
	}
}
extern "C" t126 * m9327 (t1749 * __this, t2* p0, bool p1, bool p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	t2* V_1 = {0};
	t2* V_2 = {0};
	t1754 * V_3 = {0};
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
		m339(L_1, (t2*) &_stringLiteral1760, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2723(L_2, &m2723_MI);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_4, (t2*) &_stringLiteral1760, &m2909_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t2* L_5 = p0;
		V_1 = L_5;
		V_3 = (t1754 *)NULL;
		t1782* L_6 = (__this->f11);
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
		t2110 * L_9 = (t2110 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2110_TI));
		m11868(L_9, L_8, &m11868_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0037:
	{
		t2* L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1749_TI));
		t312* L_11 = ((t1749_SFs*)InitializedTypeInfo(&t1749_TI)->static_fields)->f22;
		int32_t L_12 = m5980(L_10, L_11, &m5980_MI);
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
		t2* L_16 = m2765(L_14, L_15, &m2765_MI);
		V_2 = L_16;
		t2* L_17 = p0;
		int32_t L_18 = V_0;
		t2* L_19 = m2739(L_17, 0, L_18, &m2739_MI);
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
		t1158 * L_21 = (__this->f16);
		t2* L_22 = p0;
		t9 * L_23 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5735_MI, L_21, L_22);
		V_3 = ((t1754 *)IsInst(L_23, InitializedTypeInfo(&t1754_TI)));
		goto IL_00d8;
	}

IL_0076:
	{
		t2* L_24 = p0;
		int32_t L_25 = m2794(L_24, ((int32_t)43), &m2794_MI);
		V_0 = L_25;
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		t1782* L_27 = (__this->f11);
		if (!L_27)
		{
			goto IL_009f;
		}
	}
	{
		t1782* L_28 = (__this->f11);
		int32_t L_29 = (__this->f10);
		t2* L_30 = p0;
		t1754 * L_31 = m9323(__this, L_28, L_29, L_30, &m9323_MI);
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
		t2* L_34 = m2739(L_32, 0, L_33, &m2739_MI);
		V_4 = L_34;
		t2* L_35 = p0;
		int32_t L_36 = V_0;
		t2* L_37 = m2765(L_35, ((int32_t)((int32_t)L_36+(int32_t)1)), &m2765_MI);
		V_5 = L_37;
		t1782* L_38 = (__this->f11);
		int32_t L_39 = (__this->f10);
		t2* L_40 = V_4;
		t1754 * L_41 = m9323(__this, L_38, L_39, L_40, &m9323_MI);
		V_3 = L_41;
		t1754 * L_42 = V_3;
		if (!L_42)
		{
			goto IL_00d8;
		}
	}
	{
		t1754 * L_43 = V_3;
		t2* L_44 = V_5;
		t1754 * L_45 = m9326(__this, L_43, L_44, &m9326_MI);
		V_3 = L_45;
	}

IL_00d8:
	{
		t1754 * L_46 = V_3;
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
		t2110 * L_49 = (t2110 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2110_TI));
		m11868(L_49, L_48, &m11868_MI);
		il2cpp_codegen_raise_exception(L_49);
	}

IL_00e5:
	{
		t1754 * L_50 = V_3;
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
		t1754 * L_52 = V_3;
		t2* L_53 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1749_TI));
		t126 * L_54 = m9325(NULL, L_52, L_53, &m9325_MI);
		V_6 = L_54;
		t126 * L_55 = V_6;
		V_3 = ((t1754 *)IsInst(L_55, InitializedTypeInfo(&t1754_TI)));
		t1754 * L_56 = V_3;
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
		t1754 * L_58 = V_3;
		if (!L_58)
		{
			goto IL_0114;
		}
	}
	{
		t1754 * L_59 = V_3;
		bool L_60 = m9428(L_59, &m9428_MI);
		if (!L_60)
		{
			goto IL_0114;
		}
	}
	{
		t1754 * L_61 = V_3;
		t126 * L_62 = m6074(NULL, L_61, &m6074_MI);
		return L_62;
	}

IL_0114:
	{
		t1754 * L_63 = V_3;
		return L_63;
	}
}
extern TypeInfo* t1095_TI_var;
extern "C" int32_t m9328 (t1749 * __this, t9 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	static bool m9328_init;
	if (!m9328_init)
	{
		t1095_TI_var = il2cpp_codegen_class_from_type(&t1095_0_0_0);
		m9328_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t1095* L_0 = (__this->f18);
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		__this->f18 = ((t1095*)SZArrayNew(t1095_TI_var, ((int32_t)64)));
		V_0 = 0;
		goto IL_0026;
	}

IL_0019:
	{
		t1095* L_1 = (__this->f18);
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
		t1095* L_5 = (__this->f18);
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
		t1095* L_7 = (__this->f18);
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
		t1095* L_12 = (__this->f18);
		int32_t L_13 = p1;
		int32_t L_14 = L_13;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_12, L_14));
	}
}
extern "C" int32_t m9329 (t9 * __this , t1749 * p0, t2* p1, MethodInfo* method)
{
	typedef int32_t (*m9329_ftn) (t1749 *, t2*);
	static m9329_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9329_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::getUSIndex(System.Reflection.Emit.ModuleBuilder,System.String)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m9330 (t9 * __this , t1749 * p0, t9 * p1, MethodInfo* method)
{
	typedef int32_t (*m9330_ftn) (t1749 *, t9 *);
	static m9330_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9330_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::getToken(System.Reflection.Emit.ModuleBuilder,System.Object)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m9331 (t9 * __this , t1749 * p0, t828 * p1, t152* p2, MethodInfo* method)
{
	typedef int32_t (*m9331_ftn) (t1749 *, t828 *, t152*);
	static m9331_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9331_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::getMethodToken(System.Reflection.Emit.ModuleBuilder,System.Reflection.MethodInfo,System.Type[])");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m9332_MI;
extern "C" int32_t m9332 (t1749 * __this, t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t1158 * L_0 = (__this->f17);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m5922_MI, L_0, L_1);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		t1158 * L_3 = (__this->f17);
		t2* L_4 = p0;
		t9 * L_5 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5735_MI, L_3, L_4);
		return ((*(int32_t*)((int32_t*)UnBox (L_5, InitializedTypeInfo(&t125_TI)))));
	}

IL_0020:
	{
		t2* L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1749_TI));
		int32_t L_7 = m9329(NULL, __this, L_6, &m9329_MI);
		V_0 = L_7;
		t1158 * L_8 = (__this->f17);
		t2* L_9 = p0;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		t9 * L_12 = Box(InitializedTypeInfo(&t125_TI), &L_11);
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5919_MI, L_8, L_9, L_12);
		int32_t L_13 = V_0;
		return L_13;
	}
}
extern MethodInfo m9333_MI;
extern "C" int32_t m9333 (t1749 * __this, t560 * p0, MethodInfo* method)
{
	{
		t560 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1749_TI));
		int32_t L_1 = m9330(NULL, __this, L_0, &m9330_MI);
		return L_1;
	}
}
extern MethodInfo m9334_MI;
extern "C" int32_t m9334 (t1749 * __this, t828 * p0, t152* p1, MethodInfo* method)
{
	{
		t828 * L_0 = p0;
		t152* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1749_TI));
		int32_t L_2 = m9331(NULL, __this, L_0, L_1, &m9331_MI);
		return L_2;
	}
}
extern "C" void m9335 (t1749 * __this, t9 * p0, int32_t p1, MethodInfo* method)
{
	typedef void (*m9335_ftn) (t1749 *, t9 *, int32_t);
	static m9335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9335_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::RegisterToken(System.Object,System.Int32)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern "C" t9 * m9336 (t1749 * __this, MethodInfo* method)
{
	{
		t1783 * L_0 = (__this->f20);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t1783 * L_1 = (t1783 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1783_TI));
		m9339(L_1, __this, &m9339_MI);
		__this->f20 = L_1;
	}

IL_0014:
	{
		t1783 * L_2 = (__this->f20);
		return L_2;
	}
}
extern "C" t2* m9337 (t1749 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m9338 (t1749 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f15);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t1754 * L_1 = (t1754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1754_TI));
		m9379(L_1, __this, 0, 1, &m9379_MI);
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



extern "C" void m9339 (t1783 * __this, t1749 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1749 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9340_MI;
extern "C" int32_t m9340 (t1783 * __this, t2* p0, MethodInfo* method)
{
	{
		t1749 * L_0 = (__this->f0);
		t2* L_1 = p0;
		int32_t L_2 = m9332(L_0, L_1, &m9332_MI);
		return L_2;
	}
}
extern MethodInfo m9341_MI;
extern "C" int32_t m9341 (t1783 * __this, t560 * p0, MethodInfo* method)
{
	{
		t1749 * L_0 = (__this->f0);
		t560 * L_1 = p0;
		int32_t L_2 = m9333(L_0, L_1, &m9333_MI);
		return L_2;
	}
}
extern MethodInfo m9342_MI;
extern "C" int32_t m9342 (t1783 * __this, t828 * p0, t152* p1, MethodInfo* method)
{
	{
		t1749 * L_0 = (__this->f0);
		t828 * L_1 = p0;
		t152* L_2 = p1;
		int32_t L_3 = m9334(L_0, L_1, L_2, &m9334_MI);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1788.h"
extern TypeInfo t1788_TI;
#include "t1788MD.h"
extern MethodInfo m9347_MI;


extern MethodInfo m9343_MI;
extern "C" void m9343 (t1777 * __this, int32_t p0, int32_t p1, MethodInfo* method)
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
extern MethodInfo m9344_MI;
extern "C" int32_t m9344 (t1777 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m9347(__this, &m9347_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4231_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9345_MI;
extern "C" bool m9345 (t1777 * __this, t9 * p0, MethodInfo* method)
{
	t1777  V_0 = {0};
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
		if (((t9 *)IsInst(L_1, InitializedTypeInfo(&t1777_TI))))
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
		V_0 = ((*(t1777 *)((t1777 *)UnBox (L_2, InitializedTypeInfo(&t1777_TI)))));
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
extern MethodInfo m9346_MI;
extern "C" t2* m9346 (t1777 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m9347(__this, &m9347_MI);
		return L_0;
	}
}
extern "C" t2* m9347 (t1777 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f0);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1788_TI));
		t221* L_1 = ((t1788_SFs*)InitializedTypeInfo(&t1788_TI)->static_fields)->f0;
		uint8_t L_2 = (__this->f1);
		uint8_t L_3 = L_2;
		return (*(t2**)(t2**)SZArrayLdElema(L_1, L_3));
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1788_TI));
		t221* L_4 = ((t1788_SFs*)InitializedTypeInfo(&t1788_TI)->static_fields)->f0;
		uint8_t L_5 = (__this->f1);
		int32_t L_6 = ((int32_t)((int32_t)((int32_t)256)+(int32_t)L_5));
		return (*(t2**)(t2**)SZArrayLdElema(L_4, L_6));
	}
}
extern "C" int32_t m9348 (t1777 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" int32_t m9349 (t1777 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f6);
		return (int32_t)(L_0);
	}
}
extern "C" int32_t m9350 (t1777 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f3);
		return (int32_t)(L_0);
	}
}
extern "C" int32_t m9351 (t1777 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f2);
		return (int32_t)(L_0);
	}
}
extern "C" int16_t m9352 (t1777 * __this, MethodInfo* method)
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
extern "C" bool m9353 (t9 * __this , t1777  p0, t1777  p1, MethodInfo* method)
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



extern MethodInfo m9354_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m9354 (t9 * __this , MethodInfo* method)
{
	static bool m9354_init;
	if (!m9354_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9354_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)304)));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral1761);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral1761;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral1762);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral1762;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral1763);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral1763;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral1764);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral1764;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral1765);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral1765;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral1766);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral1766;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral1767);
		*((t2**)(t2**)SZArrayLdElema(L_6, 6)) = (t2*)(t2*) &_stringLiteral1767;
		t221* L_7 = L_6;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral1768);
		*((t2**)(t2**)SZArrayLdElema(L_7, 7)) = (t2*)(t2*) &_stringLiteral1768;
		t221* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral1769);
		*((t2**)(t2**)SZArrayLdElema(L_8, 8)) = (t2*)(t2*) &_stringLiteral1769;
		t221* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t2*) &_stringLiteral1770);
		*((t2**)(t2**)SZArrayLdElema(L_9, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral1770;
		t221* L_10 = L_9;
		ArrayElementTypeCheck (L_10, (t2*) &_stringLiteral1771);
		*((t2**)(t2**)SZArrayLdElema(L_10, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral1771;
		t221* L_11 = L_10;
		ArrayElementTypeCheck (L_11, (t2*) &_stringLiteral1772);
		*((t2**)(t2**)SZArrayLdElema(L_11, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral1772;
		t221* L_12 = L_11;
		ArrayElementTypeCheck (L_12, (t2*) &_stringLiteral1773);
		*((t2**)(t2**)SZArrayLdElema(L_12, ((int32_t)12))) = (t2*)(t2*) &_stringLiteral1773;
		t221* L_13 = L_12;
		ArrayElementTypeCheck (L_13, (t2*) &_stringLiteral1774);
		*((t2**)(t2**)SZArrayLdElema(L_13, ((int32_t)13))) = (t2*)(t2*) &_stringLiteral1774;
		t221* L_14 = L_13;
		ArrayElementTypeCheck (L_14, (t2*) &_stringLiteral1775);
		*((t2**)(t2**)SZArrayLdElema(L_14, ((int32_t)14))) = (t2*)(t2*) &_stringLiteral1775;
		t221* L_15 = L_14;
		ArrayElementTypeCheck (L_15, (t2*) &_stringLiteral1776);
		*((t2**)(t2**)SZArrayLdElema(L_15, ((int32_t)15))) = (t2*)(t2*) &_stringLiteral1776;
		t221* L_16 = L_15;
		ArrayElementTypeCheck (L_16, (t2*) &_stringLiteral1777);
		*((t2**)(t2**)SZArrayLdElema(L_16, ((int32_t)16))) = (t2*)(t2*) &_stringLiteral1777;
		t221* L_17 = L_16;
		ArrayElementTypeCheck (L_17, (t2*) &_stringLiteral1778);
		*((t2**)(t2**)SZArrayLdElema(L_17, ((int32_t)17))) = (t2*)(t2*) &_stringLiteral1778;
		t221* L_18 = L_17;
		ArrayElementTypeCheck (L_18, (t2*) &_stringLiteral1779);
		*((t2**)(t2**)SZArrayLdElema(L_18, ((int32_t)18))) = (t2*)(t2*) &_stringLiteral1779;
		t221* L_19 = L_18;
		ArrayElementTypeCheck (L_19, (t2*) &_stringLiteral1780);
		*((t2**)(t2**)SZArrayLdElema(L_19, ((int32_t)19))) = (t2*)(t2*) &_stringLiteral1780;
		t221* L_20 = L_19;
		ArrayElementTypeCheck (L_20, (t2*) &_stringLiteral1781);
		*((t2**)(t2**)SZArrayLdElema(L_20, ((int32_t)20))) = (t2*)(t2*) &_stringLiteral1781;
		t221* L_21 = L_20;
		ArrayElementTypeCheck (L_21, (t2*) &_stringLiteral1782);
		*((t2**)(t2**)SZArrayLdElema(L_21, ((int32_t)21))) = (t2*)(t2*) &_stringLiteral1782;
		t221* L_22 = L_21;
		ArrayElementTypeCheck (L_22, (t2*) &_stringLiteral1783);
		*((t2**)(t2**)SZArrayLdElema(L_22, ((int32_t)22))) = (t2*)(t2*) &_stringLiteral1783;
		t221* L_23 = L_22;
		ArrayElementTypeCheck (L_23, (t2*) &_stringLiteral1784);
		*((t2**)(t2**)SZArrayLdElema(L_23, ((int32_t)23))) = (t2*)(t2*) &_stringLiteral1784;
		t221* L_24 = L_23;
		ArrayElementTypeCheck (L_24, (t2*) &_stringLiteral1785);
		*((t2**)(t2**)SZArrayLdElema(L_24, ((int32_t)24))) = (t2*)(t2*) &_stringLiteral1785;
		t221* L_25 = L_24;
		ArrayElementTypeCheck (L_25, (t2*) &_stringLiteral1786);
		*((t2**)(t2**)SZArrayLdElema(L_25, ((int32_t)25))) = (t2*)(t2*) &_stringLiteral1786;
		t221* L_26 = L_25;
		ArrayElementTypeCheck (L_26, (t2*) &_stringLiteral1787);
		*((t2**)(t2**)SZArrayLdElema(L_26, ((int32_t)26))) = (t2*)(t2*) &_stringLiteral1787;
		t221* L_27 = L_26;
		ArrayElementTypeCheck (L_27, (t2*) &_stringLiteral1788);
		*((t2**)(t2**)SZArrayLdElema(L_27, ((int32_t)27))) = (t2*)(t2*) &_stringLiteral1788;
		t221* L_28 = L_27;
		ArrayElementTypeCheck (L_28, (t2*) &_stringLiteral1789);
		*((t2**)(t2**)SZArrayLdElema(L_28, ((int32_t)28))) = (t2*)(t2*) &_stringLiteral1789;
		t221* L_29 = L_28;
		ArrayElementTypeCheck (L_29, (t2*) &_stringLiteral1790);
		*((t2**)(t2**)SZArrayLdElema(L_29, ((int32_t)29))) = (t2*)(t2*) &_stringLiteral1790;
		t221* L_30 = L_29;
		ArrayElementTypeCheck (L_30, (t2*) &_stringLiteral1791);
		*((t2**)(t2**)SZArrayLdElema(L_30, ((int32_t)30))) = (t2*)(t2*) &_stringLiteral1791;
		t221* L_31 = L_30;
		ArrayElementTypeCheck (L_31, (t2*) &_stringLiteral1792);
		*((t2**)(t2**)SZArrayLdElema(L_31, ((int32_t)31))) = (t2*)(t2*) &_stringLiteral1792;
		t221* L_32 = L_31;
		ArrayElementTypeCheck (L_32, (t2*) &_stringLiteral1793);
		*((t2**)(t2**)SZArrayLdElema(L_32, ((int32_t)32))) = (t2*)(t2*) &_stringLiteral1793;
		t221* L_33 = L_32;
		ArrayElementTypeCheck (L_33, (t2*) &_stringLiteral1794);
		*((t2**)(t2**)SZArrayLdElema(L_33, ((int32_t)33))) = (t2*)(t2*) &_stringLiteral1794;
		t221* L_34 = L_33;
		ArrayElementTypeCheck (L_34, (t2*) &_stringLiteral1795);
		*((t2**)(t2**)SZArrayLdElema(L_34, ((int32_t)34))) = (t2*)(t2*) &_stringLiteral1795;
		t221* L_35 = L_34;
		ArrayElementTypeCheck (L_35, (t2*) &_stringLiteral1796);
		*((t2**)(t2**)SZArrayLdElema(L_35, ((int32_t)35))) = (t2*)(t2*) &_stringLiteral1796;
		t221* L_36 = L_35;
		ArrayElementTypeCheck (L_36, (t2*) &_stringLiteral1797);
		*((t2**)(t2**)SZArrayLdElema(L_36, ((int32_t)37))) = (t2*)(t2*) &_stringLiteral1797;
		t221* L_37 = L_36;
		ArrayElementTypeCheck (L_37, (t2*) &_stringLiteral1798);
		*((t2**)(t2**)SZArrayLdElema(L_37, ((int32_t)38))) = (t2*)(t2*) &_stringLiteral1798;
		t221* L_38 = L_37;
		ArrayElementTypeCheck (L_38, (t2*) &_stringLiteral1799);
		*((t2**)(t2**)SZArrayLdElema(L_38, ((int32_t)39))) = (t2*)(t2*) &_stringLiteral1799;
		t221* L_39 = L_38;
		ArrayElementTypeCheck (L_39, (t2*) &_stringLiteral1800);
		*((t2**)(t2**)SZArrayLdElema(L_39, ((int32_t)40))) = (t2*)(t2*) &_stringLiteral1800;
		t221* L_40 = L_39;
		ArrayElementTypeCheck (L_40, (t2*) &_stringLiteral1801);
		*((t2**)(t2**)SZArrayLdElema(L_40, ((int32_t)41))) = (t2*)(t2*) &_stringLiteral1801;
		t221* L_41 = L_40;
		ArrayElementTypeCheck (L_41, (t2*) &_stringLiteral1802);
		*((t2**)(t2**)SZArrayLdElema(L_41, ((int32_t)42))) = (t2*)(t2*) &_stringLiteral1802;
		t221* L_42 = L_41;
		ArrayElementTypeCheck (L_42, (t2*) &_stringLiteral1803);
		*((t2**)(t2**)SZArrayLdElema(L_42, ((int32_t)43))) = (t2*)(t2*) &_stringLiteral1803;
		t221* L_43 = L_42;
		ArrayElementTypeCheck (L_43, (t2*) &_stringLiteral1804);
		*((t2**)(t2**)SZArrayLdElema(L_43, ((int32_t)44))) = (t2*)(t2*) &_stringLiteral1804;
		t221* L_44 = L_43;
		ArrayElementTypeCheck (L_44, (t2*) &_stringLiteral1805);
		*((t2**)(t2**)SZArrayLdElema(L_44, ((int32_t)45))) = (t2*)(t2*) &_stringLiteral1805;
		t221* L_45 = L_44;
		ArrayElementTypeCheck (L_45, (t2*) &_stringLiteral1806);
		*((t2**)(t2**)SZArrayLdElema(L_45, ((int32_t)46))) = (t2*)(t2*) &_stringLiteral1806;
		t221* L_46 = L_45;
		ArrayElementTypeCheck (L_46, (t2*) &_stringLiteral1807);
		*((t2**)(t2**)SZArrayLdElema(L_46, ((int32_t)47))) = (t2*)(t2*) &_stringLiteral1807;
		t221* L_47 = L_46;
		ArrayElementTypeCheck (L_47, (t2*) &_stringLiteral1808);
		*((t2**)(t2**)SZArrayLdElema(L_47, ((int32_t)48))) = (t2*)(t2*) &_stringLiteral1808;
		t221* L_48 = L_47;
		ArrayElementTypeCheck (L_48, (t2*) &_stringLiteral1809);
		*((t2**)(t2**)SZArrayLdElema(L_48, ((int32_t)49))) = (t2*)(t2*) &_stringLiteral1809;
		t221* L_49 = L_48;
		ArrayElementTypeCheck (L_49, (t2*) &_stringLiteral1810);
		*((t2**)(t2**)SZArrayLdElema(L_49, ((int32_t)50))) = (t2*)(t2*) &_stringLiteral1810;
		t221* L_50 = L_49;
		ArrayElementTypeCheck (L_50, (t2*) &_stringLiteral1811);
		*((t2**)(t2**)SZArrayLdElema(L_50, ((int32_t)51))) = (t2*)(t2*) &_stringLiteral1811;
		t221* L_51 = L_50;
		ArrayElementTypeCheck (L_51, (t2*) &_stringLiteral1812);
		*((t2**)(t2**)SZArrayLdElema(L_51, ((int32_t)52))) = (t2*)(t2*) &_stringLiteral1812;
		t221* L_52 = L_51;
		ArrayElementTypeCheck (L_52, (t2*) &_stringLiteral1813);
		*((t2**)(t2**)SZArrayLdElema(L_52, ((int32_t)53))) = (t2*)(t2*) &_stringLiteral1813;
		t221* L_53 = L_52;
		ArrayElementTypeCheck (L_53, (t2*) &_stringLiteral1814);
		*((t2**)(t2**)SZArrayLdElema(L_53, ((int32_t)54))) = (t2*)(t2*) &_stringLiteral1814;
		t221* L_54 = L_53;
		ArrayElementTypeCheck (L_54, (t2*) &_stringLiteral1815);
		*((t2**)(t2**)SZArrayLdElema(L_54, ((int32_t)55))) = (t2*)(t2*) &_stringLiteral1815;
		t221* L_55 = L_54;
		ArrayElementTypeCheck (L_55, (t2*) &_stringLiteral1816);
		*((t2**)(t2**)SZArrayLdElema(L_55, ((int32_t)56))) = (t2*)(t2*) &_stringLiteral1816;
		t221* L_56 = L_55;
		ArrayElementTypeCheck (L_56, (t2*) &_stringLiteral1817);
		*((t2**)(t2**)SZArrayLdElema(L_56, ((int32_t)57))) = (t2*)(t2*) &_stringLiteral1817;
		t221* L_57 = L_56;
		ArrayElementTypeCheck (L_57, (t2*) &_stringLiteral1818);
		*((t2**)(t2**)SZArrayLdElema(L_57, ((int32_t)58))) = (t2*)(t2*) &_stringLiteral1818;
		t221* L_58 = L_57;
		ArrayElementTypeCheck (L_58, (t2*) &_stringLiteral1819);
		*((t2**)(t2**)SZArrayLdElema(L_58, ((int32_t)59))) = (t2*)(t2*) &_stringLiteral1819;
		t221* L_59 = L_58;
		ArrayElementTypeCheck (L_59, (t2*) &_stringLiteral1820);
		*((t2**)(t2**)SZArrayLdElema(L_59, ((int32_t)60))) = (t2*)(t2*) &_stringLiteral1820;
		t221* L_60 = L_59;
		ArrayElementTypeCheck (L_60, (t2*) &_stringLiteral1821);
		*((t2**)(t2**)SZArrayLdElema(L_60, ((int32_t)61))) = (t2*)(t2*) &_stringLiteral1821;
		t221* L_61 = L_60;
		ArrayElementTypeCheck (L_61, (t2*) &_stringLiteral1822);
		*((t2**)(t2**)SZArrayLdElema(L_61, ((int32_t)62))) = (t2*)(t2*) &_stringLiteral1822;
		t221* L_62 = L_61;
		ArrayElementTypeCheck (L_62, (t2*) &_stringLiteral1823);
		*((t2**)(t2**)SZArrayLdElema(L_62, ((int32_t)63))) = (t2*)(t2*) &_stringLiteral1823;
		t221* L_63 = L_62;
		ArrayElementTypeCheck (L_63, (t2*) &_stringLiteral1824);
		*((t2**)(t2**)SZArrayLdElema(L_63, ((int32_t)64))) = (t2*)(t2*) &_stringLiteral1824;
		t221* L_64 = L_63;
		ArrayElementTypeCheck (L_64, (t2*) &_stringLiteral1825);
		*((t2**)(t2**)SZArrayLdElema(L_64, ((int32_t)65))) = (t2*)(t2*) &_stringLiteral1825;
		t221* L_65 = L_64;
		ArrayElementTypeCheck (L_65, (t2*) &_stringLiteral1826);
		*((t2**)(t2**)SZArrayLdElema(L_65, ((int32_t)66))) = (t2*)(t2*) &_stringLiteral1826;
		t221* L_66 = L_65;
		ArrayElementTypeCheck (L_66, (t2*) &_stringLiteral1827);
		*((t2**)(t2**)SZArrayLdElema(L_66, ((int32_t)67))) = (t2*)(t2*) &_stringLiteral1827;
		t221* L_67 = L_66;
		ArrayElementTypeCheck (L_67, (t2*) &_stringLiteral1828);
		*((t2**)(t2**)SZArrayLdElema(L_67, ((int32_t)68))) = (t2*)(t2*) &_stringLiteral1828;
		t221* L_68 = L_67;
		ArrayElementTypeCheck (L_68, (t2*) &_stringLiteral1829);
		*((t2**)(t2**)SZArrayLdElema(L_68, ((int32_t)69))) = (t2*)(t2*) &_stringLiteral1829;
		t221* L_69 = L_68;
		ArrayElementTypeCheck (L_69, (t2*) &_stringLiteral1830);
		*((t2**)(t2**)SZArrayLdElema(L_69, ((int32_t)70))) = (t2*)(t2*) &_stringLiteral1830;
		t221* L_70 = L_69;
		ArrayElementTypeCheck (L_70, (t2*) &_stringLiteral1831);
		*((t2**)(t2**)SZArrayLdElema(L_70, ((int32_t)71))) = (t2*)(t2*) &_stringLiteral1831;
		t221* L_71 = L_70;
		ArrayElementTypeCheck (L_71, (t2*) &_stringLiteral1832);
		*((t2**)(t2**)SZArrayLdElema(L_71, ((int32_t)72))) = (t2*)(t2*) &_stringLiteral1832;
		t221* L_72 = L_71;
		ArrayElementTypeCheck (L_72, (t2*) &_stringLiteral1833);
		*((t2**)(t2**)SZArrayLdElema(L_72, ((int32_t)73))) = (t2*)(t2*) &_stringLiteral1833;
		t221* L_73 = L_72;
		ArrayElementTypeCheck (L_73, (t2*) &_stringLiteral1834);
		*((t2**)(t2**)SZArrayLdElema(L_73, ((int32_t)74))) = (t2*)(t2*) &_stringLiteral1834;
		t221* L_74 = L_73;
		ArrayElementTypeCheck (L_74, (t2*) &_stringLiteral1835);
		*((t2**)(t2**)SZArrayLdElema(L_74, ((int32_t)75))) = (t2*)(t2*) &_stringLiteral1835;
		t221* L_75 = L_74;
		ArrayElementTypeCheck (L_75, (t2*) &_stringLiteral1836);
		*((t2**)(t2**)SZArrayLdElema(L_75, ((int32_t)76))) = (t2*)(t2*) &_stringLiteral1836;
		t221* L_76 = L_75;
		ArrayElementTypeCheck (L_76, (t2*) &_stringLiteral1837);
		*((t2**)(t2**)SZArrayLdElema(L_76, ((int32_t)77))) = (t2*)(t2*) &_stringLiteral1837;
		t221* L_77 = L_76;
		ArrayElementTypeCheck (L_77, (t2*) &_stringLiteral1838);
		*((t2**)(t2**)SZArrayLdElema(L_77, ((int32_t)78))) = (t2*)(t2*) &_stringLiteral1838;
		t221* L_78 = L_77;
		ArrayElementTypeCheck (L_78, (t2*) &_stringLiteral1839);
		*((t2**)(t2**)SZArrayLdElema(L_78, ((int32_t)79))) = (t2*)(t2*) &_stringLiteral1839;
		t221* L_79 = L_78;
		ArrayElementTypeCheck (L_79, (t2*) &_stringLiteral1840);
		*((t2**)(t2**)SZArrayLdElema(L_79, ((int32_t)80))) = (t2*)(t2*) &_stringLiteral1840;
		t221* L_80 = L_79;
		ArrayElementTypeCheck (L_80, (t2*) &_stringLiteral1841);
		*((t2**)(t2**)SZArrayLdElema(L_80, ((int32_t)81))) = (t2*)(t2*) &_stringLiteral1841;
		t221* L_81 = L_80;
		ArrayElementTypeCheck (L_81, (t2*) &_stringLiteral1842);
		*((t2**)(t2**)SZArrayLdElema(L_81, ((int32_t)82))) = (t2*)(t2*) &_stringLiteral1842;
		t221* L_82 = L_81;
		ArrayElementTypeCheck (L_82, (t2*) &_stringLiteral1843);
		*((t2**)(t2**)SZArrayLdElema(L_82, ((int32_t)83))) = (t2*)(t2*) &_stringLiteral1843;
		t221* L_83 = L_82;
		ArrayElementTypeCheck (L_83, (t2*) &_stringLiteral1844);
		*((t2**)(t2**)SZArrayLdElema(L_83, ((int32_t)84))) = (t2*)(t2*) &_stringLiteral1844;
		t221* L_84 = L_83;
		ArrayElementTypeCheck (L_84, (t2*) &_stringLiteral1845);
		*((t2**)(t2**)SZArrayLdElema(L_84, ((int32_t)85))) = (t2*)(t2*) &_stringLiteral1845;
		t221* L_85 = L_84;
		ArrayElementTypeCheck (L_85, (t2*) &_stringLiteral1846);
		*((t2**)(t2**)SZArrayLdElema(L_85, ((int32_t)86))) = (t2*)(t2*) &_stringLiteral1846;
		t221* L_86 = L_85;
		ArrayElementTypeCheck (L_86, (t2*) &_stringLiteral1847);
		*((t2**)(t2**)SZArrayLdElema(L_86, ((int32_t)87))) = (t2*)(t2*) &_stringLiteral1847;
		t221* L_87 = L_86;
		ArrayElementTypeCheck (L_87, (t2*) &_stringLiteral1848);
		*((t2**)(t2**)SZArrayLdElema(L_87, ((int32_t)88))) = (t2*)(t2*) &_stringLiteral1848;
		t221* L_88 = L_87;
		ArrayElementTypeCheck (L_88, (t2*) &_stringLiteral1849);
		*((t2**)(t2**)SZArrayLdElema(L_88, ((int32_t)89))) = (t2*)(t2*) &_stringLiteral1849;
		t221* L_89 = L_88;
		ArrayElementTypeCheck (L_89, (t2*) &_stringLiteral1850);
		*((t2**)(t2**)SZArrayLdElema(L_89, ((int32_t)90))) = (t2*)(t2*) &_stringLiteral1850;
		t221* L_90 = L_89;
		ArrayElementTypeCheck (L_90, (t2*) &_stringLiteral1851);
		*((t2**)(t2**)SZArrayLdElema(L_90, ((int32_t)91))) = (t2*)(t2*) &_stringLiteral1851;
		t221* L_91 = L_90;
		ArrayElementTypeCheck (L_91, (t2*) &_stringLiteral1852);
		*((t2**)(t2**)SZArrayLdElema(L_91, ((int32_t)92))) = (t2*)(t2*) &_stringLiteral1852;
		t221* L_92 = L_91;
		ArrayElementTypeCheck (L_92, (t2*) &_stringLiteral1853);
		*((t2**)(t2**)SZArrayLdElema(L_92, ((int32_t)93))) = (t2*)(t2*) &_stringLiteral1853;
		t221* L_93 = L_92;
		ArrayElementTypeCheck (L_93, (t2*) &_stringLiteral1854);
		*((t2**)(t2**)SZArrayLdElema(L_93, ((int32_t)94))) = (t2*)(t2*) &_stringLiteral1854;
		t221* L_94 = L_93;
		ArrayElementTypeCheck (L_94, (t2*) &_stringLiteral1855);
		*((t2**)(t2**)SZArrayLdElema(L_94, ((int32_t)95))) = (t2*)(t2*) &_stringLiteral1855;
		t221* L_95 = L_94;
		ArrayElementTypeCheck (L_95, (t2*) &_stringLiteral1856);
		*((t2**)(t2**)SZArrayLdElema(L_95, ((int32_t)96))) = (t2*)(t2*) &_stringLiteral1856;
		t221* L_96 = L_95;
		ArrayElementTypeCheck (L_96, (t2*) &_stringLiteral1857);
		*((t2**)(t2**)SZArrayLdElema(L_96, ((int32_t)97))) = (t2*)(t2*) &_stringLiteral1857;
		t221* L_97 = L_96;
		ArrayElementTypeCheck (L_97, (t2*) &_stringLiteral1858);
		*((t2**)(t2**)SZArrayLdElema(L_97, ((int32_t)98))) = (t2*)(t2*) &_stringLiteral1858;
		t221* L_98 = L_97;
		ArrayElementTypeCheck (L_98, (t2*) &_stringLiteral1859);
		*((t2**)(t2**)SZArrayLdElema(L_98, ((int32_t)99))) = (t2*)(t2*) &_stringLiteral1859;
		t221* L_99 = L_98;
		ArrayElementTypeCheck (L_99, (t2*) &_stringLiteral1860);
		*((t2**)(t2**)SZArrayLdElema(L_99, ((int32_t)100))) = (t2*)(t2*) &_stringLiteral1860;
		t221* L_100 = L_99;
		ArrayElementTypeCheck (L_100, (t2*) &_stringLiteral1861);
		*((t2**)(t2**)SZArrayLdElema(L_100, ((int32_t)101))) = (t2*)(t2*) &_stringLiteral1861;
		t221* L_101 = L_100;
		ArrayElementTypeCheck (L_101, (t2*) &_stringLiteral1862);
		*((t2**)(t2**)SZArrayLdElema(L_101, ((int32_t)102))) = (t2*)(t2*) &_stringLiteral1862;
		t221* L_102 = L_101;
		ArrayElementTypeCheck (L_102, (t2*) &_stringLiteral1863);
		*((t2**)(t2**)SZArrayLdElema(L_102, ((int32_t)103))) = (t2*)(t2*) &_stringLiteral1863;
		t221* L_103 = L_102;
		ArrayElementTypeCheck (L_103, (t2*) &_stringLiteral1864);
		*((t2**)(t2**)SZArrayLdElema(L_103, ((int32_t)104))) = (t2*)(t2*) &_stringLiteral1864;
		t221* L_104 = L_103;
		ArrayElementTypeCheck (L_104, (t2*) &_stringLiteral1865);
		*((t2**)(t2**)SZArrayLdElema(L_104, ((int32_t)105))) = (t2*)(t2*) &_stringLiteral1865;
		t221* L_105 = L_104;
		ArrayElementTypeCheck (L_105, (t2*) &_stringLiteral1866);
		*((t2**)(t2**)SZArrayLdElema(L_105, ((int32_t)106))) = (t2*)(t2*) &_stringLiteral1866;
		t221* L_106 = L_105;
		ArrayElementTypeCheck (L_106, (t2*) &_stringLiteral1867);
		*((t2**)(t2**)SZArrayLdElema(L_106, ((int32_t)107))) = (t2*)(t2*) &_stringLiteral1867;
		t221* L_107 = L_106;
		ArrayElementTypeCheck (L_107, (t2*) &_stringLiteral1868);
		*((t2**)(t2**)SZArrayLdElema(L_107, ((int32_t)108))) = (t2*)(t2*) &_stringLiteral1868;
		t221* L_108 = L_107;
		ArrayElementTypeCheck (L_108, (t2*) &_stringLiteral1869);
		*((t2**)(t2**)SZArrayLdElema(L_108, ((int32_t)109))) = (t2*)(t2*) &_stringLiteral1869;
		t221* L_109 = L_108;
		ArrayElementTypeCheck (L_109, (t2*) &_stringLiteral1870);
		*((t2**)(t2**)SZArrayLdElema(L_109, ((int32_t)110))) = (t2*)(t2*) &_stringLiteral1870;
		t221* L_110 = L_109;
		ArrayElementTypeCheck (L_110, (t2*) &_stringLiteral1871);
		*((t2**)(t2**)SZArrayLdElema(L_110, ((int32_t)111))) = (t2*)(t2*) &_stringLiteral1871;
		t221* L_111 = L_110;
		ArrayElementTypeCheck (L_111, (t2*) &_stringLiteral1872);
		*((t2**)(t2**)SZArrayLdElema(L_111, ((int32_t)112))) = (t2*)(t2*) &_stringLiteral1872;
		t221* L_112 = L_111;
		ArrayElementTypeCheck (L_112, (t2*) &_stringLiteral1873);
		*((t2**)(t2**)SZArrayLdElema(L_112, ((int32_t)113))) = (t2*)(t2*) &_stringLiteral1873;
		t221* L_113 = L_112;
		ArrayElementTypeCheck (L_113, (t2*) &_stringLiteral1874);
		*((t2**)(t2**)SZArrayLdElema(L_113, ((int32_t)114))) = (t2*)(t2*) &_stringLiteral1874;
		t221* L_114 = L_113;
		ArrayElementTypeCheck (L_114, (t2*) &_stringLiteral1875);
		*((t2**)(t2**)SZArrayLdElema(L_114, ((int32_t)115))) = (t2*)(t2*) &_stringLiteral1875;
		t221* L_115 = L_114;
		ArrayElementTypeCheck (L_115, (t2*) &_stringLiteral1876);
		*((t2**)(t2**)SZArrayLdElema(L_115, ((int32_t)116))) = (t2*)(t2*) &_stringLiteral1876;
		t221* L_116 = L_115;
		ArrayElementTypeCheck (L_116, (t2*) &_stringLiteral1877);
		*((t2**)(t2**)SZArrayLdElema(L_116, ((int32_t)117))) = (t2*)(t2*) &_stringLiteral1877;
		t221* L_117 = L_116;
		ArrayElementTypeCheck (L_117, (t2*) &_stringLiteral1878);
		*((t2**)(t2**)SZArrayLdElema(L_117, ((int32_t)118))) = (t2*)(t2*) &_stringLiteral1878;
		t221* L_118 = L_117;
		ArrayElementTypeCheck (L_118, (t2*) &_stringLiteral1879);
		*((t2**)(t2**)SZArrayLdElema(L_118, ((int32_t)121))) = (t2*)(t2*) &_stringLiteral1879;
		t221* L_119 = L_118;
		ArrayElementTypeCheck (L_119, (t2*) &_stringLiteral1880);
		*((t2**)(t2**)SZArrayLdElema(L_119, ((int32_t)122))) = (t2*)(t2*) &_stringLiteral1880;
		t221* L_120 = L_119;
		ArrayElementTypeCheck (L_120, (t2*) &_stringLiteral1881);
		*((t2**)(t2**)SZArrayLdElema(L_120, ((int32_t)123))) = (t2*)(t2*) &_stringLiteral1881;
		t221* L_121 = L_120;
		ArrayElementTypeCheck (L_121, (t2*) &_stringLiteral1882);
		*((t2**)(t2**)SZArrayLdElema(L_121, ((int32_t)124))) = (t2*)(t2*) &_stringLiteral1882;
		t221* L_122 = L_121;
		ArrayElementTypeCheck (L_122, (t2*) &_stringLiteral1883);
		*((t2**)(t2**)SZArrayLdElema(L_122, ((int32_t)125))) = (t2*)(t2*) &_stringLiteral1883;
		t221* L_123 = L_122;
		ArrayElementTypeCheck (L_123, (t2*) &_stringLiteral1884);
		*((t2**)(t2**)SZArrayLdElema(L_123, ((int32_t)126))) = (t2*)(t2*) &_stringLiteral1884;
		t221* L_124 = L_123;
		ArrayElementTypeCheck (L_124, (t2*) &_stringLiteral1885);
		*((t2**)(t2**)SZArrayLdElema(L_124, ((int32_t)127))) = (t2*)(t2*) &_stringLiteral1885;
		t221* L_125 = L_124;
		ArrayElementTypeCheck (L_125, (t2*) &_stringLiteral1886);
		*((t2**)(t2**)SZArrayLdElema(L_125, ((int32_t)128))) = (t2*)(t2*) &_stringLiteral1886;
		t221* L_126 = L_125;
		ArrayElementTypeCheck (L_126, (t2*) &_stringLiteral1887);
		*((t2**)(t2**)SZArrayLdElema(L_126, ((int32_t)129))) = (t2*)(t2*) &_stringLiteral1887;
		t221* L_127 = L_126;
		ArrayElementTypeCheck (L_127, (t2*) &_stringLiteral1888);
		*((t2**)(t2**)SZArrayLdElema(L_127, ((int32_t)130))) = (t2*)(t2*) &_stringLiteral1888;
		t221* L_128 = L_127;
		ArrayElementTypeCheck (L_128, (t2*) &_stringLiteral1889);
		*((t2**)(t2**)SZArrayLdElema(L_128, ((int32_t)131))) = (t2*)(t2*) &_stringLiteral1889;
		t221* L_129 = L_128;
		ArrayElementTypeCheck (L_129, (t2*) &_stringLiteral1890);
		*((t2**)(t2**)SZArrayLdElema(L_129, ((int32_t)132))) = (t2*)(t2*) &_stringLiteral1890;
		t221* L_130 = L_129;
		ArrayElementTypeCheck (L_130, (t2*) &_stringLiteral1891);
		*((t2**)(t2**)SZArrayLdElema(L_130, ((int32_t)133))) = (t2*)(t2*) &_stringLiteral1891;
		t221* L_131 = L_130;
		ArrayElementTypeCheck (L_131, (t2*) &_stringLiteral1892);
		*((t2**)(t2**)SZArrayLdElema(L_131, ((int32_t)134))) = (t2*)(t2*) &_stringLiteral1892;
		t221* L_132 = L_131;
		ArrayElementTypeCheck (L_132, (t2*) &_stringLiteral1893);
		*((t2**)(t2**)SZArrayLdElema(L_132, ((int32_t)135))) = (t2*)(t2*) &_stringLiteral1893;
		t221* L_133 = L_132;
		ArrayElementTypeCheck (L_133, (t2*) &_stringLiteral1894);
		*((t2**)(t2**)SZArrayLdElema(L_133, ((int32_t)136))) = (t2*)(t2*) &_stringLiteral1894;
		t221* L_134 = L_133;
		ArrayElementTypeCheck (L_134, (t2*) &_stringLiteral1895);
		*((t2**)(t2**)SZArrayLdElema(L_134, ((int32_t)137))) = (t2*)(t2*) &_stringLiteral1895;
		t221* L_135 = L_134;
		ArrayElementTypeCheck (L_135, (t2*) &_stringLiteral1896);
		*((t2**)(t2**)SZArrayLdElema(L_135, ((int32_t)138))) = (t2*)(t2*) &_stringLiteral1896;
		t221* L_136 = L_135;
		ArrayElementTypeCheck (L_136, (t2*) &_stringLiteral1897);
		*((t2**)(t2**)SZArrayLdElema(L_136, ((int32_t)139))) = (t2*)(t2*) &_stringLiteral1897;
		t221* L_137 = L_136;
		ArrayElementTypeCheck (L_137, (t2*) &_stringLiteral180);
		*((t2**)(t2**)SZArrayLdElema(L_137, ((int32_t)140))) = (t2*)(t2*) &_stringLiteral180;
		t221* L_138 = L_137;
		ArrayElementTypeCheck (L_138, (t2*) &_stringLiteral1898);
		*((t2**)(t2**)SZArrayLdElema(L_138, ((int32_t)141))) = (t2*)(t2*) &_stringLiteral1898;
		t221* L_139 = L_138;
		ArrayElementTypeCheck (L_139, (t2*) &_stringLiteral1899);
		*((t2**)(t2**)SZArrayLdElema(L_139, ((int32_t)142))) = (t2*)(t2*) &_stringLiteral1899;
		t221* L_140 = L_139;
		ArrayElementTypeCheck (L_140, (t2*) &_stringLiteral1900);
		*((t2**)(t2**)SZArrayLdElema(L_140, ((int32_t)143))) = (t2*)(t2*) &_stringLiteral1900;
		t221* L_141 = L_140;
		ArrayElementTypeCheck (L_141, (t2*) &_stringLiteral1901);
		*((t2**)(t2**)SZArrayLdElema(L_141, ((int32_t)144))) = (t2*)(t2*) &_stringLiteral1901;
		t221* L_142 = L_141;
		ArrayElementTypeCheck (L_142, (t2*) &_stringLiteral1902);
		*((t2**)(t2**)SZArrayLdElema(L_142, ((int32_t)145))) = (t2*)(t2*) &_stringLiteral1902;
		t221* L_143 = L_142;
		ArrayElementTypeCheck (L_143, (t2*) &_stringLiteral1903);
		*((t2**)(t2**)SZArrayLdElema(L_143, ((int32_t)146))) = (t2*)(t2*) &_stringLiteral1903;
		t221* L_144 = L_143;
		ArrayElementTypeCheck (L_144, (t2*) &_stringLiteral1904);
		*((t2**)(t2**)SZArrayLdElema(L_144, ((int32_t)147))) = (t2*)(t2*) &_stringLiteral1904;
		t221* L_145 = L_144;
		ArrayElementTypeCheck (L_145, (t2*) &_stringLiteral1905);
		*((t2**)(t2**)SZArrayLdElema(L_145, ((int32_t)148))) = (t2*)(t2*) &_stringLiteral1905;
		t221* L_146 = L_145;
		ArrayElementTypeCheck (L_146, (t2*) &_stringLiteral1906);
		*((t2**)(t2**)SZArrayLdElema(L_146, ((int32_t)149))) = (t2*)(t2*) &_stringLiteral1906;
		t221* L_147 = L_146;
		ArrayElementTypeCheck (L_147, (t2*) &_stringLiteral1907);
		*((t2**)(t2**)SZArrayLdElema(L_147, ((int32_t)150))) = (t2*)(t2*) &_stringLiteral1907;
		t221* L_148 = L_147;
		ArrayElementTypeCheck (L_148, (t2*) &_stringLiteral1908);
		*((t2**)(t2**)SZArrayLdElema(L_148, ((int32_t)151))) = (t2*)(t2*) &_stringLiteral1908;
		t221* L_149 = L_148;
		ArrayElementTypeCheck (L_149, (t2*) &_stringLiteral1909);
		*((t2**)(t2**)SZArrayLdElema(L_149, ((int32_t)152))) = (t2*)(t2*) &_stringLiteral1909;
		t221* L_150 = L_149;
		ArrayElementTypeCheck (L_150, (t2*) &_stringLiteral1910);
		*((t2**)(t2**)SZArrayLdElema(L_150, ((int32_t)153))) = (t2*)(t2*) &_stringLiteral1910;
		t221* L_151 = L_150;
		ArrayElementTypeCheck (L_151, (t2*) &_stringLiteral1911);
		*((t2**)(t2**)SZArrayLdElema(L_151, ((int32_t)154))) = (t2*)(t2*) &_stringLiteral1911;
		t221* L_152 = L_151;
		ArrayElementTypeCheck (L_152, (t2*) &_stringLiteral1912);
		*((t2**)(t2**)SZArrayLdElema(L_152, ((int32_t)155))) = (t2*)(t2*) &_stringLiteral1912;
		t221* L_153 = L_152;
		ArrayElementTypeCheck (L_153, (t2*) &_stringLiteral1913);
		*((t2**)(t2**)SZArrayLdElema(L_153, ((int32_t)156))) = (t2*)(t2*) &_stringLiteral1913;
		t221* L_154 = L_153;
		ArrayElementTypeCheck (L_154, (t2*) &_stringLiteral1914);
		*((t2**)(t2**)SZArrayLdElema(L_154, ((int32_t)157))) = (t2*)(t2*) &_stringLiteral1914;
		t221* L_155 = L_154;
		ArrayElementTypeCheck (L_155, (t2*) &_stringLiteral1915);
		*((t2**)(t2**)SZArrayLdElema(L_155, ((int32_t)158))) = (t2*)(t2*) &_stringLiteral1915;
		t221* L_156 = L_155;
		ArrayElementTypeCheck (L_156, (t2*) &_stringLiteral1916);
		*((t2**)(t2**)SZArrayLdElema(L_156, ((int32_t)159))) = (t2*)(t2*) &_stringLiteral1916;
		t221* L_157 = L_156;
		ArrayElementTypeCheck (L_157, (t2*) &_stringLiteral1917);
		*((t2**)(t2**)SZArrayLdElema(L_157, ((int32_t)160))) = (t2*)(t2*) &_stringLiteral1917;
		t221* L_158 = L_157;
		ArrayElementTypeCheck (L_158, (t2*) &_stringLiteral1918);
		*((t2**)(t2**)SZArrayLdElema(L_158, ((int32_t)161))) = (t2*)(t2*) &_stringLiteral1918;
		t221* L_159 = L_158;
		ArrayElementTypeCheck (L_159, (t2*) &_stringLiteral1919);
		*((t2**)(t2**)SZArrayLdElema(L_159, ((int32_t)162))) = (t2*)(t2*) &_stringLiteral1919;
		t221* L_160 = L_159;
		ArrayElementTypeCheck (L_160, (t2*) &_stringLiteral1920);
		*((t2**)(t2**)SZArrayLdElema(L_160, ((int32_t)163))) = (t2*)(t2*) &_stringLiteral1920;
		t221* L_161 = L_160;
		ArrayElementTypeCheck (L_161, (t2*) &_stringLiteral1921);
		*((t2**)(t2**)SZArrayLdElema(L_161, ((int32_t)164))) = (t2*)(t2*) &_stringLiteral1921;
		t221* L_162 = L_161;
		ArrayElementTypeCheck (L_162, (t2*) &_stringLiteral1922);
		*((t2**)(t2**)SZArrayLdElema(L_162, ((int32_t)165))) = (t2*)(t2*) &_stringLiteral1922;
		t221* L_163 = L_162;
		ArrayElementTypeCheck (L_163, (t2*) &_stringLiteral1923);
		*((t2**)(t2**)SZArrayLdElema(L_163, ((int32_t)179))) = (t2*)(t2*) &_stringLiteral1923;
		t221* L_164 = L_163;
		ArrayElementTypeCheck (L_164, (t2*) &_stringLiteral1924);
		*((t2**)(t2**)SZArrayLdElema(L_164, ((int32_t)180))) = (t2*)(t2*) &_stringLiteral1924;
		t221* L_165 = L_164;
		ArrayElementTypeCheck (L_165, (t2*) &_stringLiteral1925);
		*((t2**)(t2**)SZArrayLdElema(L_165, ((int32_t)181))) = (t2*)(t2*) &_stringLiteral1925;
		t221* L_166 = L_165;
		ArrayElementTypeCheck (L_166, (t2*) &_stringLiteral1926);
		*((t2**)(t2**)SZArrayLdElema(L_166, ((int32_t)182))) = (t2*)(t2*) &_stringLiteral1926;
		t221* L_167 = L_166;
		ArrayElementTypeCheck (L_167, (t2*) &_stringLiteral1927);
		*((t2**)(t2**)SZArrayLdElema(L_167, ((int32_t)183))) = (t2*)(t2*) &_stringLiteral1927;
		t221* L_168 = L_167;
		ArrayElementTypeCheck (L_168, (t2*) &_stringLiteral1928);
		*((t2**)(t2**)SZArrayLdElema(L_168, ((int32_t)184))) = (t2*)(t2*) &_stringLiteral1928;
		t221* L_169 = L_168;
		ArrayElementTypeCheck (L_169, (t2*) &_stringLiteral1929);
		*((t2**)(t2**)SZArrayLdElema(L_169, ((int32_t)185))) = (t2*)(t2*) &_stringLiteral1929;
		t221* L_170 = L_169;
		ArrayElementTypeCheck (L_170, (t2*) &_stringLiteral1930);
		*((t2**)(t2**)SZArrayLdElema(L_170, ((int32_t)186))) = (t2*)(t2*) &_stringLiteral1930;
		t221* L_171 = L_170;
		ArrayElementTypeCheck (L_171, (t2*) &_stringLiteral1931);
		*((t2**)(t2**)SZArrayLdElema(L_171, ((int32_t)194))) = (t2*)(t2*) &_stringLiteral1931;
		t221* L_172 = L_171;
		ArrayElementTypeCheck (L_172, (t2*) &_stringLiteral1932);
		*((t2**)(t2**)SZArrayLdElema(L_172, ((int32_t)195))) = (t2*)(t2*) &_stringLiteral1932;
		t221* L_173 = L_172;
		ArrayElementTypeCheck (L_173, (t2*) &_stringLiteral1933);
		*((t2**)(t2**)SZArrayLdElema(L_173, ((int32_t)198))) = (t2*)(t2*) &_stringLiteral1933;
		t221* L_174 = L_173;
		ArrayElementTypeCheck (L_174, (t2*) &_stringLiteral1934);
		*((t2**)(t2**)SZArrayLdElema(L_174, ((int32_t)208))) = (t2*)(t2*) &_stringLiteral1934;
		t221* L_175 = L_174;
		ArrayElementTypeCheck (L_175, (t2*) &_stringLiteral1935);
		*((t2**)(t2**)SZArrayLdElema(L_175, ((int32_t)209))) = (t2*)(t2*) &_stringLiteral1935;
		t221* L_176 = L_175;
		ArrayElementTypeCheck (L_176, (t2*) &_stringLiteral1936);
		*((t2**)(t2**)SZArrayLdElema(L_176, ((int32_t)210))) = (t2*)(t2*) &_stringLiteral1936;
		t221* L_177 = L_176;
		ArrayElementTypeCheck (L_177, (t2*) &_stringLiteral1937);
		*((t2**)(t2**)SZArrayLdElema(L_177, ((int32_t)211))) = (t2*)(t2*) &_stringLiteral1937;
		t221* L_178 = L_177;
		ArrayElementTypeCheck (L_178, (t2*) &_stringLiteral1938);
		*((t2**)(t2**)SZArrayLdElema(L_178, ((int32_t)212))) = (t2*)(t2*) &_stringLiteral1938;
		t221* L_179 = L_178;
		ArrayElementTypeCheck (L_179, (t2*) &_stringLiteral1939);
		*((t2**)(t2**)SZArrayLdElema(L_179, ((int32_t)213))) = (t2*)(t2*) &_stringLiteral1939;
		t221* L_180 = L_179;
		ArrayElementTypeCheck (L_180, (t2*) &_stringLiteral1940);
		*((t2**)(t2**)SZArrayLdElema(L_180, ((int32_t)214))) = (t2*)(t2*) &_stringLiteral1940;
		t221* L_181 = L_180;
		ArrayElementTypeCheck (L_181, (t2*) &_stringLiteral1941);
		*((t2**)(t2**)SZArrayLdElema(L_181, ((int32_t)215))) = (t2*)(t2*) &_stringLiteral1941;
		t221* L_182 = L_181;
		ArrayElementTypeCheck (L_182, (t2*) &_stringLiteral1942);
		*((t2**)(t2**)SZArrayLdElema(L_182, ((int32_t)216))) = (t2*)(t2*) &_stringLiteral1942;
		t221* L_183 = L_182;
		ArrayElementTypeCheck (L_183, (t2*) &_stringLiteral1943);
		*((t2**)(t2**)SZArrayLdElema(L_183, ((int32_t)217))) = (t2*)(t2*) &_stringLiteral1943;
		t221* L_184 = L_183;
		ArrayElementTypeCheck (L_184, (t2*) &_stringLiteral1944);
		*((t2**)(t2**)SZArrayLdElema(L_184, ((int32_t)218))) = (t2*)(t2*) &_stringLiteral1944;
		t221* L_185 = L_184;
		ArrayElementTypeCheck (L_185, (t2*) &_stringLiteral1945);
		*((t2**)(t2**)SZArrayLdElema(L_185, ((int32_t)219))) = (t2*)(t2*) &_stringLiteral1945;
		t221* L_186 = L_185;
		ArrayElementTypeCheck (L_186, (t2*) &_stringLiteral1946);
		*((t2**)(t2**)SZArrayLdElema(L_186, ((int32_t)220))) = (t2*)(t2*) &_stringLiteral1946;
		t221* L_187 = L_186;
		ArrayElementTypeCheck (L_187, (t2*) &_stringLiteral1947);
		*((t2**)(t2**)SZArrayLdElema(L_187, ((int32_t)221))) = (t2*)(t2*) &_stringLiteral1947;
		t221* L_188 = L_187;
		ArrayElementTypeCheck (L_188, (t2*) &_stringLiteral1948);
		*((t2**)(t2**)SZArrayLdElema(L_188, ((int32_t)222))) = (t2*)(t2*) &_stringLiteral1948;
		t221* L_189 = L_188;
		ArrayElementTypeCheck (L_189, (t2*) &_stringLiteral1949);
		*((t2**)(t2**)SZArrayLdElema(L_189, ((int32_t)223))) = (t2*)(t2*) &_stringLiteral1949;
		t221* L_190 = L_189;
		ArrayElementTypeCheck (L_190, (t2*) &_stringLiteral1950);
		*((t2**)(t2**)SZArrayLdElema(L_190, ((int32_t)224))) = (t2*)(t2*) &_stringLiteral1950;
		t221* L_191 = L_190;
		ArrayElementTypeCheck (L_191, (t2*) &_stringLiteral1951);
		*((t2**)(t2**)SZArrayLdElema(L_191, ((int32_t)248))) = (t2*)(t2*) &_stringLiteral1951;
		t221* L_192 = L_191;
		ArrayElementTypeCheck (L_192, (t2*) &_stringLiteral1952);
		*((t2**)(t2**)SZArrayLdElema(L_192, ((int32_t)249))) = (t2*)(t2*) &_stringLiteral1952;
		t221* L_193 = L_192;
		ArrayElementTypeCheck (L_193, (t2*) &_stringLiteral1953);
		*((t2**)(t2**)SZArrayLdElema(L_193, ((int32_t)250))) = (t2*)(t2*) &_stringLiteral1953;
		t221* L_194 = L_193;
		ArrayElementTypeCheck (L_194, (t2*) &_stringLiteral1954);
		*((t2**)(t2**)SZArrayLdElema(L_194, ((int32_t)251))) = (t2*)(t2*) &_stringLiteral1954;
		t221* L_195 = L_194;
		ArrayElementTypeCheck (L_195, (t2*) &_stringLiteral1955);
		*((t2**)(t2**)SZArrayLdElema(L_195, ((int32_t)252))) = (t2*)(t2*) &_stringLiteral1955;
		t221* L_196 = L_195;
		ArrayElementTypeCheck (L_196, (t2*) &_stringLiteral1956);
		*((t2**)(t2**)SZArrayLdElema(L_196, ((int32_t)253))) = (t2*)(t2*) &_stringLiteral1956;
		t221* L_197 = L_196;
		ArrayElementTypeCheck (L_197, (t2*) &_stringLiteral1957);
		*((t2**)(t2**)SZArrayLdElema(L_197, ((int32_t)254))) = (t2*)(t2*) &_stringLiteral1957;
		t221* L_198 = L_197;
		ArrayElementTypeCheck (L_198, (t2*) &_stringLiteral1958);
		*((t2**)(t2**)SZArrayLdElema(L_198, ((int32_t)255))) = (t2*)(t2*) &_stringLiteral1958;
		t221* L_199 = L_198;
		ArrayElementTypeCheck (L_199, (t2*) &_stringLiteral1959);
		*((t2**)(t2**)SZArrayLdElema(L_199, ((int32_t)256))) = (t2*)(t2*) &_stringLiteral1959;
		t221* L_200 = L_199;
		ArrayElementTypeCheck (L_200, (t2*) &_stringLiteral1960);
		*((t2**)(t2**)SZArrayLdElema(L_200, ((int32_t)257))) = (t2*)(t2*) &_stringLiteral1960;
		t221* L_201 = L_200;
		ArrayElementTypeCheck (L_201, (t2*) &_stringLiteral1961);
		*((t2**)(t2**)SZArrayLdElema(L_201, ((int32_t)258))) = (t2*)(t2*) &_stringLiteral1961;
		t221* L_202 = L_201;
		ArrayElementTypeCheck (L_202, (t2*) &_stringLiteral1962);
		*((t2**)(t2**)SZArrayLdElema(L_202, ((int32_t)259))) = (t2*)(t2*) &_stringLiteral1962;
		t221* L_203 = L_202;
		ArrayElementTypeCheck (L_203, (t2*) &_stringLiteral1963);
		*((t2**)(t2**)SZArrayLdElema(L_203, ((int32_t)260))) = (t2*)(t2*) &_stringLiteral1963;
		t221* L_204 = L_203;
		ArrayElementTypeCheck (L_204, (t2*) &_stringLiteral1964);
		*((t2**)(t2**)SZArrayLdElema(L_204, ((int32_t)261))) = (t2*)(t2*) &_stringLiteral1964;
		t221* L_205 = L_204;
		ArrayElementTypeCheck (L_205, (t2*) &_stringLiteral1965);
		*((t2**)(t2**)SZArrayLdElema(L_205, ((int32_t)262))) = (t2*)(t2*) &_stringLiteral1965;
		t221* L_206 = L_205;
		ArrayElementTypeCheck (L_206, (t2*) &_stringLiteral1966);
		*((t2**)(t2**)SZArrayLdElema(L_206, ((int32_t)263))) = (t2*)(t2*) &_stringLiteral1966;
		t221* L_207 = L_206;
		ArrayElementTypeCheck (L_207, (t2*) &_stringLiteral1967);
		*((t2**)(t2**)SZArrayLdElema(L_207, ((int32_t)265))) = (t2*)(t2*) &_stringLiteral1967;
		t221* L_208 = L_207;
		ArrayElementTypeCheck (L_208, (t2*) &_stringLiteral1968);
		*((t2**)(t2**)SZArrayLdElema(L_208, ((int32_t)266))) = (t2*)(t2*) &_stringLiteral1968;
		t221* L_209 = L_208;
		ArrayElementTypeCheck (L_209, (t2*) &_stringLiteral1969);
		*((t2**)(t2**)SZArrayLdElema(L_209, ((int32_t)267))) = (t2*)(t2*) &_stringLiteral1969;
		t221* L_210 = L_209;
		ArrayElementTypeCheck (L_210, (t2*) &_stringLiteral1970);
		*((t2**)(t2**)SZArrayLdElema(L_210, ((int32_t)268))) = (t2*)(t2*) &_stringLiteral1970;
		t221* L_211 = L_210;
		ArrayElementTypeCheck (L_211, (t2*) &_stringLiteral1971);
		*((t2**)(t2**)SZArrayLdElema(L_211, ((int32_t)269))) = (t2*)(t2*) &_stringLiteral1971;
		t221* L_212 = L_211;
		ArrayElementTypeCheck (L_212, (t2*) &_stringLiteral1972);
		*((t2**)(t2**)SZArrayLdElema(L_212, ((int32_t)270))) = (t2*)(t2*) &_stringLiteral1972;
		t221* L_213 = L_212;
		ArrayElementTypeCheck (L_213, (t2*) &_stringLiteral1973);
		*((t2**)(t2**)SZArrayLdElema(L_213, ((int32_t)271))) = (t2*)(t2*) &_stringLiteral1973;
		t221* L_214 = L_213;
		ArrayElementTypeCheck (L_214, (t2*) &_stringLiteral1974);
		*((t2**)(t2**)SZArrayLdElema(L_214, ((int32_t)273))) = (t2*)(t2*) &_stringLiteral1974;
		t221* L_215 = L_214;
		ArrayElementTypeCheck (L_215, (t2*) &_stringLiteral1975);
		*((t2**)(t2**)SZArrayLdElema(L_215, ((int32_t)274))) = (t2*)(t2*) &_stringLiteral1975;
		t221* L_216 = L_215;
		ArrayElementTypeCheck (L_216, (t2*) &_stringLiteral1976);
		*((t2**)(t2**)SZArrayLdElema(L_216, ((int32_t)275))) = (t2*)(t2*) &_stringLiteral1976;
		t221* L_217 = L_216;
		ArrayElementTypeCheck (L_217, (t2*) &_stringLiteral1977);
		*((t2**)(t2**)SZArrayLdElema(L_217, ((int32_t)276))) = (t2*)(t2*) &_stringLiteral1977;
		t221* L_218 = L_217;
		ArrayElementTypeCheck (L_218, (t2*) &_stringLiteral1978);
		*((t2**)(t2**)SZArrayLdElema(L_218, ((int32_t)277))) = (t2*)(t2*) &_stringLiteral1978;
		t221* L_219 = L_218;
		ArrayElementTypeCheck (L_219, (t2*) &_stringLiteral1979);
		*((t2**)(t2**)SZArrayLdElema(L_219, ((int32_t)278))) = (t2*)(t2*) &_stringLiteral1979;
		t221* L_220 = L_219;
		ArrayElementTypeCheck (L_220, (t2*) &_stringLiteral1980);
		*((t2**)(t2**)SZArrayLdElema(L_220, ((int32_t)279))) = (t2*)(t2*) &_stringLiteral1980;
		t221* L_221 = L_220;
		ArrayElementTypeCheck (L_221, (t2*) &_stringLiteral1981);
		*((t2**)(t2**)SZArrayLdElema(L_221, ((int32_t)280))) = (t2*)(t2*) &_stringLiteral1981;
		t221* L_222 = L_221;
		ArrayElementTypeCheck (L_222, (t2*) &_stringLiteral1982);
		*((t2**)(t2**)SZArrayLdElema(L_222, ((int32_t)282))) = (t2*)(t2*) &_stringLiteral1982;
		t221* L_223 = L_222;
		ArrayElementTypeCheck (L_223, (t2*) &_stringLiteral1983);
		*((t2**)(t2**)SZArrayLdElema(L_223, ((int32_t)284))) = (t2*)(t2*) &_stringLiteral1983;
		t221* L_224 = L_223;
		ArrayElementTypeCheck (L_224, (t2*) &_stringLiteral1984);
		*((t2**)(t2**)SZArrayLdElema(L_224, ((int32_t)285))) = (t2*)(t2*) &_stringLiteral1984;
		t221* L_225 = L_224;
		ArrayElementTypeCheck (L_225, (t2*) &_stringLiteral1985);
		*((t2**)(t2**)SZArrayLdElema(L_225, ((int32_t)286))) = (t2*)(t2*) &_stringLiteral1985;
		((t1788_SFs*)InitializedTypeInfo(&t1788_TI)->static_fields)->f0 = L_225;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m9355_MI;
extern "C" void m9355 (t9 * __this , MethodInfo* method)
{
	{
		t1777  L_0 = {0};
		m9343(&L_0, ((int32_t)1179903), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f0 = L_0;
		t1777  L_1 = {0};
		m9343(&L_1, ((int32_t)1180159), ((int32_t)17106177), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f1 = L_1;
		t1777  L_2 = {0};
		m9343(&L_2, ((int32_t)1245951), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f2 = L_2;
		t1777  L_3 = {0};
		m9343(&L_3, ((int32_t)1246207), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f3 = L_3;
		t1777  L_4 = {0};
		m9343(&L_4, ((int32_t)1246463), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f4 = L_4;
		t1777  L_5 = {0};
		m9343(&L_5, ((int32_t)1246719), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f5 = L_5;
		t1777  L_6 = {0};
		m9343(&L_6, ((int32_t)1246975), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f6 = L_6;
		t1777  L_7 = {0};
		m9343(&L_7, ((int32_t)1247231), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f7 = L_7;
		t1777  L_8 = {0};
		m9343(&L_8, ((int32_t)1247487), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f8 = L_8;
		t1777  L_9 = {0};
		m9343(&L_9, ((int32_t)1247743), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f9 = L_9;
		t1777  L_10 = {0};
		m9343(&L_10, ((int32_t)17959679), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f10 = L_10;
		t1777  L_11 = {0};
		m9343(&L_11, ((int32_t)17959935), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f11 = L_11;
		t1777  L_12 = {0};
		m9343(&L_12, ((int32_t)17960191), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f12 = L_12;
		t1777  L_13 = {0};
		m9343(&L_13, ((int32_t)17960447), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f13 = L_13;
		t1777  L_14 = {0};
		m9343(&L_14, ((int32_t)1249023), ((int32_t)85065985), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f14 = L_14;
		t1777  L_15 = {0};
		m9343(&L_15, ((int32_t)1380351), ((int32_t)85065985), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f15 = L_15;
		t1777  L_16 = {0};
		m9343(&L_16, ((int32_t)17961215), ((int32_t)85065985), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f16 = L_16;
		t1777  L_17 = {0};
		m9343(&L_17, ((int32_t)1249791), ((int32_t)85065985), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f17 = L_17;
		t1777  L_18 = {0};
		m9343(&L_18, ((int32_t)1381119), ((int32_t)85065985), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f18 = L_18;
		t1777  L_19 = {0};
		m9343(&L_19, ((int32_t)17961983), ((int32_t)85065985), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f19 = L_19;
		t1777  L_20 = {0};
		m9343(&L_20, ((int32_t)1643775), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f20 = L_20;
		t1777  L_21 = {0};
		m9343(&L_21, ((int32_t)1381887), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f21 = L_21;
		t1777  L_22 = {0};
		m9343(&L_22, ((int32_t)1382143), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f22 = L_22;
		t1777  L_23 = {0};
		m9343(&L_23, ((int32_t)1382399), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f23 = L_23;
		t1777  L_24 = {0};
		m9343(&L_24, ((int32_t)1382655), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f24 = L_24;
		t1777  L_25 = {0};
		m9343(&L_25, ((int32_t)1382911), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f25 = L_25;
		t1777  L_26 = {0};
		m9343(&L_26, ((int32_t)1383167), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f26 = L_26;
		t1777  L_27 = {0};
		m9343(&L_27, ((int32_t)1383423), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f27 = L_27;
		t1777  L_28 = {0};
		m9343(&L_28, ((int32_t)1383679), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f28 = L_28;
		t1777  L_29 = {0};
		m9343(&L_29, ((int32_t)1383935), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f29 = L_29;
		t1777  L_30 = {0};
		m9343(&L_30, ((int32_t)1384191), ((int32_t)84214017), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f30 = L_30;
		t1777  L_31 = {0};
		m9343(&L_31, ((int32_t)1384447), ((int32_t)84934913), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f31 = L_31;
		t1777  L_32 = {0};
		m9343(&L_32, ((int32_t)1384703), ((int32_t)84018433), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f32 = L_32;
		t1777  L_33 = {0};
		m9343(&L_33, ((int32_t)1450495), ((int32_t)84083969), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f33 = L_33;
		t1777  L_34 = {0};
		m9343(&L_34, ((int32_t)1516287), ((int32_t)85001473), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f34 = L_34;
		t1777  L_35 = {0};
		m9343(&L_35, ((int32_t)1582079), ((int32_t)84346113), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f35 = L_35;
		t1777  L_36 = {0};
		m9343(&L_36, ((int32_t)18097663), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f36 = L_36;
		t1777  L_37 = {0};
		m9343(&L_37, ((int32_t)17966847), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f37 = L_37;
		t1777  L_38 = {0};
		m9343(&L_38, ((int32_t)1189887), ((int32_t)33817857), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f38 = L_38;
		t1777  L_39 = {0};
		m9343(&L_39, ((int32_t)437987583), ((int32_t)33817857), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f39 = L_39;
		t1777  L_40 = {0};
		m9343(&L_40, ((int32_t)437987839), ((int32_t)34145537), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f40 = L_40;
		t1777  L_41 = {0};
		m9343(&L_41, ((int32_t)437398271), ((int32_t)117769473), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f41 = L_41;
		t1777  L_42 = {0};
		m9343(&L_42, ((int32_t)1190911), ((int32_t)983297), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f42 = L_42;
		t1777  L_43 = {0};
		m9343(&L_43, ((int32_t)51522815), ((int32_t)51314945), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f43 = L_43;
		t1777  L_44 = {0};
		m9343(&L_44, ((int32_t)51523071), ((int32_t)51314945), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f44 = L_44;
		t1777  L_45 = {0};
		m9343(&L_45, ((int32_t)34746111), ((int32_t)51314945), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f45 = L_45;
		t1777  L_46 = {0};
		m9343(&L_46, ((int32_t)34746367), ((int32_t)51314945), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f46 = L_46;
		t1777  L_47 = {0};
		m9343(&L_47, ((int32_t)34746623), ((int32_t)51314945), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f47 = L_47;
		t1777  L_48 = {0};
		m9343(&L_48, ((int32_t)34746879), ((int32_t)51314945), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f48 = L_48;
		t1777  L_49 = {0};
		m9343(&L_49, ((int32_t)34747135), ((int32_t)51314945), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f49 = L_49;
		t1777  L_50 = {0};
		m9343(&L_50, ((int32_t)34747391), ((int32_t)51314945), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f50 = L_50;
		t1777  L_51 = {0};
		m9343(&L_51, ((int32_t)34747647), ((int32_t)51314945), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f51 = L_51;
		t1777  L_52 = {0};
		m9343(&L_52, ((int32_t)34747903), ((int32_t)51314945), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f52 = L_52;
		t1777  L_53 = {0};
		m9343(&L_53, ((int32_t)34748159), ((int32_t)51314945), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f53 = L_53;
		t1777  L_54 = {0};
		m9343(&L_54, ((int32_t)34748415), ((int32_t)51314945), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f54 = L_54;
		t1777  L_55 = {0};
		m9343(&L_55, ((int32_t)1194239), ((int32_t)1281), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f55 = L_55;
		t1777  L_56 = {0};
		m9343(&L_56, ((int32_t)51526143), ((int32_t)50332929), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f56 = L_56;
		t1777  L_57 = {0};
		m9343(&L_57, ((int32_t)51526399), ((int32_t)50332929), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f57 = L_57;
		t1777  L_58 = {0};
		m9343(&L_58, ((int32_t)34749439), ((int32_t)50331905), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f58 = L_58;
		t1777  L_59 = {0};
		m9343(&L_59, ((int32_t)34749695), ((int32_t)50331905), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f59 = L_59;
		t1777  L_60 = {0};
		m9343(&L_60, ((int32_t)34749951), ((int32_t)50331905), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f60 = L_60;
		t1777  L_61 = {0};
		m9343(&L_61, ((int32_t)34750207), ((int32_t)50331905), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f61 = L_61;
		t1777  L_62 = {0};
		m9343(&L_62, ((int32_t)34750463), ((int32_t)50331905), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f62 = L_62;
		t1777  L_63 = {0};
		m9343(&L_63, ((int32_t)34750719), ((int32_t)50331905), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f63 = L_63;
		t1777  L_64 = {0};
		m9343(&L_64, ((int32_t)34750975), ((int32_t)50331905), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f64 = L_64;
		t1777  L_65 = {0};
		m9343(&L_65, ((int32_t)34751231), ((int32_t)50331905), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f65 = L_65;
		t1777  L_66 = {0};
		m9343(&L_66, ((int32_t)34751487), ((int32_t)50331905), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f66 = L_66;
		t1777  L_67 = {0};
		m9343(&L_67, ((int32_t)34751743), ((int32_t)50331905), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f67 = L_67;
		t1777  L_68 = {0};
		m9343(&L_68, ((int32_t)51529215), ((int32_t)51053825), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f68 = L_68;
		t1777  L_69 = {0};
		m9343(&L_69, ((int32_t)51726079), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f69 = L_69;
		t1777  L_70 = {0};
		m9343(&L_70, ((int32_t)51726335), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f70 = L_70;
		t1777  L_71 = {0};
		m9343(&L_71, ((int32_t)51726591), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f71 = L_71;
		t1777  L_72 = {0};
		m9343(&L_72, ((int32_t)51726847), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f72 = L_72;
		t1777  L_73 = {0};
		m9343(&L_73, ((int32_t)51727103), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f73 = L_73;
		t1777  L_74 = {0};
		m9343(&L_74, ((int32_t)51727359), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f74 = L_74;
		t1777  L_75 = {0};
		m9343(&L_75, ((int32_t)51793151), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f75 = L_75;
		t1777  L_76 = {0};
		m9343(&L_76, ((int32_t)51727871), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f76 = L_76;
		t1777  L_77 = {0};
		m9343(&L_77, ((int32_t)51859199), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f77 = L_77;
		t1777  L_78 = {0};
		m9343(&L_78, ((int32_t)51924991), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f78 = L_78;
		t1777  L_79 = {0};
		m9343(&L_79, ((int32_t)51990783), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f79 = L_79;
		t1777  L_80 = {0};
		m9343(&L_80, ((int32_t)85086719), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f80 = L_80;
		t1777  L_81 = {0};
		m9343(&L_81, ((int32_t)85086975), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f81 = L_81;
		t1777  L_82 = {0};
		m9343(&L_82, ((int32_t)85087231), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f82 = L_82;
		t1777  L_83 = {0};
		m9343(&L_83, ((int32_t)85087487), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f83 = L_83;
		t1777  L_84 = {0};
		m9343(&L_84, ((int32_t)101864959), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f84 = L_84;
		t1777  L_85 = {0};
		m9343(&L_85, ((int32_t)135419647), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f85 = L_85;
		t1777  L_86 = {0};
		m9343(&L_86, ((int32_t)152197119), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f86 = L_86;
		t1777  L_87 = {0};
		m9343(&L_87, ((int32_t)34822399), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f87 = L_87;
		t1777  L_88 = {0};
		m9343(&L_88, ((int32_t)34822655), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f88 = L_88;
		t1777  L_89 = {0};
		m9343(&L_89, ((int32_t)34822911), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f89 = L_89;
		t1777  L_90 = {0};
		m9343(&L_90, ((int32_t)34823167), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f90 = L_90;
		t1777  L_91 = {0};
		m9343(&L_91, ((int32_t)34823423), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f91 = L_91;
		t1777  L_92 = {0};
		m9343(&L_92, ((int32_t)34823679), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f92 = L_92;
		t1777  L_93 = {0};
		m9343(&L_93, ((int32_t)34823935), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f93 = L_93;
		t1777  L_94 = {0};
		m9343(&L_94, ((int32_t)34824191), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f94 = L_94;
		t1777  L_95 = {0};
		m9343(&L_95, ((int32_t)34824447), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f95 = L_95;
		t1777  L_96 = {0};
		m9343(&L_96, ((int32_t)34824703), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f96 = L_96;
		t1777  L_97 = {0};
		m9343(&L_97, ((int32_t)34824959), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f97 = L_97;
		t1777  L_98 = {0};
		m9343(&L_98, ((int32_t)34825215), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f98 = L_98;
		t1777  L_99 = {0};
		m9343(&L_99, ((int32_t)34825471), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f99 = L_99;
		t1777  L_100 = {0};
		m9343(&L_100, ((int32_t)18048511), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f100 = L_100;
		t1777  L_101 = {0};
		m9343(&L_101, ((int32_t)18048767), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f101 = L_101;
		t1777  L_102 = {0};
		m9343(&L_102, ((int32_t)18180095), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f102 = L_102;
		t1777  L_103 = {0};
		m9343(&L_103, ((int32_t)18180351), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f103 = L_103;
		t1777  L_104 = {0};
		m9343(&L_104, ((int32_t)18180607), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f104 = L_104;
		t1777  L_105 = {0};
		m9343(&L_105, ((int32_t)18246399), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f105 = L_105;
		t1777  L_106 = {0};
		m9343(&L_106, ((int32_t)18312191), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f106 = L_106;
		t1777  L_107 = {0};
		m9343(&L_107, ((int32_t)18377983), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f107 = L_107;
		t1777  L_108 = {0};
		m9343(&L_108, ((int32_t)18181631), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f108 = L_108;
		t1777  L_109 = {0};
		m9343(&L_109, ((int32_t)18247423), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f109 = L_109;
		t1777  L_110 = {0};
		m9343(&L_110, ((int32_t)438005759), ((int32_t)33817345), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f110 = L_110;
		t1777  L_111 = {0};
		m9343(&L_111, ((int32_t)85094655), ((int32_t)84738817), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f111 = L_111;
		t1777  L_112 = {0};
		m9343(&L_112, ((int32_t)51606015), ((int32_t)84738817), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f112 = L_112;
		t1777  L_113 = {0};
		m9343(&L_113, ((int32_t)1667839), ((int32_t)84542209), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f113 = L_113;
		t1777  L_114 = {0};
		m9343(&L_114, ((int32_t)437875711), ((int32_t)33817345), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f114 = L_114;
		t1777  L_115 = {0};
		m9343(&L_115, ((int32_t)169440511), ((int32_t)84738817), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f115 = L_115;
		t1777  L_116 = {0};
		m9343(&L_116, ((int32_t)169178623), ((int32_t)84738817), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f116 = L_116;
		t1777  L_117 = {0};
		m9343(&L_117, ((int32_t)18380543), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f117 = L_117;
		t1777  L_118 = {0};
		m9343(&L_118, ((int32_t)169179647), ((int32_t)84739329), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f118 = L_118;
		t1777  L_119 = {0};
		m9343(&L_119, ((int32_t)168983295), ((int32_t)134546177), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f119 = L_119;
		t1777  L_120 = {0};
		m9343(&L_120, ((int32_t)169049087), ((int32_t)83952385), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f120 = L_120;
		t1777  L_121 = {0};
		m9343(&L_121, ((int32_t)169180415), ((int32_t)83952385), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f121 = L_121;
		t1777  L_122 = {0};
		m9343(&L_122, ((int32_t)185761279), ((int32_t)83952385), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f122 = L_122;
		t1777  L_123 = {0};
		m9343(&L_123, ((int32_t)1277695), ((int32_t)83952385), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f123 = L_123;
		t1777  L_124 = {0};
		m9343(&L_124, ((int32_t)1409023), ((int32_t)83952385), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f124 = L_124;
		t1777  L_125 = {0};
		m9343(&L_125, ((int32_t)17989887), ((int32_t)83952385), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f125 = L_125;
		t1777  L_126 = {0};
		m9343(&L_126, ((int32_t)68321791), ((int32_t)84739329), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f126 = L_126;
		t1777  L_127 = {0};
		m9343(&L_127, ((int32_t)18187007), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f127 = L_127;
		t1777  L_128 = {0};
		m9343(&L_128, ((int32_t)18187263), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f128 = L_128;
		t1777  L_129 = {0};
		m9343(&L_129, ((int32_t)18187519), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f129 = L_129;
		t1777  L_130 = {0};
		m9343(&L_130, ((int32_t)18253311), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f130 = L_130;
		t1777  L_131 = {0};
		m9343(&L_131, ((int32_t)18188031), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f131 = L_131;
		t1777  L_132 = {0};
		m9343(&L_132, ((int32_t)18188287), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f132 = L_132;
		t1777  L_133 = {0};
		m9343(&L_133, ((int32_t)18188543), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f133 = L_133;
		t1777  L_134 = {0};
		m9343(&L_134, ((int32_t)18254335), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f134 = L_134;
		t1777  L_135 = {0};
		m9343(&L_135, ((int32_t)18189055), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f135 = L_135;
		t1777  L_136 = {0};
		m9343(&L_136, ((int32_t)18189311), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f136 = L_136;
		t1777  L_137 = {0};
		m9343(&L_137, ((int32_t)18451711), ((int32_t)84739329), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f137 = L_137;
		t1777  L_138 = {0};
		m9343(&L_138, ((int32_t)52006399), ((int32_t)84738817), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f138 = L_138;
		t1777  L_139 = {0};
		m9343(&L_139, ((int32_t)169185023), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f139 = L_139;
		t1777  L_140 = {0};
		m9343(&L_140, ((int32_t)202739711), ((int32_t)84738817), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f140 = L_140;
		t1777  L_141 = {0};
		m9343(&L_141, ((int32_t)202739967), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f141 = L_141;
		t1777  L_142 = {0};
		m9343(&L_142, ((int32_t)202740223), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f142 = L_142;
		t1777  L_143 = {0};
		m9343(&L_143, ((int32_t)202740479), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f143 = L_143;
		t1777  L_144 = {0};
		m9343(&L_144, ((int32_t)202740735), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f144 = L_144;
		t1777  L_145 = {0};
		m9343(&L_145, ((int32_t)202740991), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f145 = L_145;
		t1777  L_146 = {0};
		m9343(&L_146, ((int32_t)202741247), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f146 = L_146;
		t1777  L_147 = {0};
		m9343(&L_147, ((int32_t)202807039), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f147 = L_147;
		t1777  L_148 = {0};
		m9343(&L_148, ((int32_t)202741759), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f148 = L_148;
		t1777  L_149 = {0};
		m9343(&L_149, ((int32_t)202873087), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f149 = L_149;
		t1777  L_150 = {0};
		m9343(&L_150, ((int32_t)202938879), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f150 = L_150;
		t1777  L_151 = {0};
		m9343(&L_151, ((int32_t)203004671), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f151 = L_151;
		t1777  L_152 = {0};
		m9343(&L_152, ((int32_t)219323391), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f152 = L_152;
		t1777  L_153 = {0};
		m9343(&L_153, ((int32_t)219323647), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f153 = L_153;
		t1777  L_154 = {0};
		m9343(&L_154, ((int32_t)219323903), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f154 = L_154;
		t1777  L_155 = {0};
		m9343(&L_155, ((int32_t)219324159), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f155 = L_155;
		t1777  L_156 = {0};
		m9343(&L_156, ((int32_t)236101631), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f156 = L_156;
		t1777  L_157 = {0};
		m9343(&L_157, ((int32_t)252879103), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f157 = L_157;
		t1777  L_158 = {0};
		m9343(&L_158, ((int32_t)269656575), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f158 = L_158;
		t1777  L_159 = {0};
		m9343(&L_159, ((int32_t)286434047), ((int32_t)84214529), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f159 = L_159;
		t1777  L_160 = {0};
		m9343(&L_160, ((int32_t)202613759), ((int32_t)84738817), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f160 = L_160;
		t1777  L_161 = {0};
		m9343(&L_161, ((int32_t)470983935), ((int32_t)84738817), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f161 = L_161;
		t1777  L_162 = {0};
		m9343(&L_162, ((int32_t)169059839), ((int32_t)84738817), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f162 = L_162;
		t1777  L_163 = {0};
		m9343(&L_163, ((int32_t)18199551), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f163 = L_163;
		t1777  L_164 = {0};
		m9343(&L_164, ((int32_t)18199807), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f164 = L_164;
		t1777  L_165 = {0};
		m9343(&L_165, ((int32_t)18200063), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f165 = L_165;
		t1777  L_166 = {0};
		m9343(&L_166, ((int32_t)18200319), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f166 = L_166;
		t1777  L_167 = {0};
		m9343(&L_167, ((int32_t)18200575), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f167 = L_167;
		t1777  L_168 = {0};
		m9343(&L_168, ((int32_t)18200831), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f168 = L_168;
		t1777  L_169 = {0};
		m9343(&L_169, ((int32_t)18266623), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f169 = L_169;
		t1777  L_170 = {0};
		m9343(&L_170, ((int32_t)18266879), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f170 = L_170;
		t1777  L_171 = {0};
		m9343(&L_171, ((int32_t)18203391), ((int32_t)84739329), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f171 = L_171;
		t1777  L_172 = {0};
		m9343(&L_172, ((int32_t)18400255), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f172 = L_172;
		t1777  L_173 = {0};
		m9343(&L_173, ((int32_t)51627775), ((int32_t)84739329), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f173 = L_173;
		t1777  L_174 = {0};
		m9343(&L_174, ((int32_t)1429759), ((int32_t)84673793), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f174 = L_174;
		t1777  L_175 = {0};
		m9343(&L_175, ((int32_t)18207231), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f175 = L_175;
		t1777  L_176 = {0};
		m9343(&L_176, ((int32_t)18207487), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f176 = L_176;
		t1777  L_177 = {0};
		m9343(&L_177, ((int32_t)18207743), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f177 = L_177;
		t1777  L_178 = {0};
		m9343(&L_178, ((int32_t)18207999), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f178 = L_178;
		t1777  L_179 = {0};
		m9343(&L_179, ((int32_t)18208255), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f179 = L_179;
		t1777  L_180 = {0};
		m9343(&L_180, ((int32_t)34854655), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f180 = L_180;
		t1777  L_181 = {0};
		m9343(&L_181, ((int32_t)34854911), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f181 = L_181;
		t1777  L_182 = {0};
		m9343(&L_182, ((int32_t)34855167), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f182 = L_182;
		t1777  L_183 = {0};
		m9343(&L_183, ((int32_t)34855423), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f183 = L_183;
		t1777  L_184 = {0};
		m9343(&L_184, ((int32_t)34855679), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f184 = L_184;
		t1777  L_185 = {0};
		m9343(&L_185, ((int32_t)34855935), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f185 = L_185;
		t1777  L_186 = {0};
		m9343(&L_186, ((int32_t)1236223), ((int32_t)117769473), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f186 = L_186;
		t1777  L_187 = {0};
		m9343(&L_187, ((int32_t)1236479), ((int32_t)1281), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f187 = L_187;
		t1777  L_188 = {0};
		m9343(&L_188, ((int32_t)1236735), ((int32_t)984321), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f188 = L_188;
		t1777  L_189 = {0};
		m9343(&L_189, ((int32_t)85123071), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f189 = L_189;
		t1777  L_190 = {0};
		m9343(&L_190, ((int32_t)18211071), ((int32_t)84215041), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f190 = L_190;
		t1777  L_191 = {0};
		m9343(&L_191, ((int32_t)1243391), ((int32_t)67437057), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f191 = L_191;
		t1777  L_192 = {0};
		m9343(&L_192, ((int32_t)1243647), ((int32_t)67437057), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f192 = L_192;
		t1777  L_193 = {0};
		m9343(&L_193, ((int32_t)1243903), ((int32_t)67437057), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f193 = L_193;
		t1777  L_194 = {0};
		m9343(&L_194, ((int32_t)1244159), ((int32_t)67437057), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f194 = L_194;
		t1777  L_195 = {0};
		m9343(&L_195, ((int32_t)1244415), ((int32_t)67437057), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f195 = L_195;
		t1777  L_196 = {0};
		m9343(&L_196, ((int32_t)1244671), ((int32_t)67437057), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f196 = L_196;
		t1777  L_197 = {0};
		m9343(&L_197, ((int32_t)1244927), ((int32_t)67437057), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f197 = L_197;
		t1777  L_198 = {0};
		m9343(&L_198, ((int32_t)1245183), ((int32_t)67437057), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f198 = L_198;
		t1777  L_199 = {0};
		m9343(&L_199, ((int32_t)1376510), ((int32_t)84215042), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f199 = L_199;
		t1777  L_200 = {0};
		m9343(&L_200, ((int32_t)34931198), ((int32_t)84215042), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f200 = L_200;
		t1777  L_201 = {0};
		m9343(&L_201, ((int32_t)34931454), ((int32_t)84215042), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f201 = L_201;
		t1777  L_202 = {0};
		m9343(&L_202, ((int32_t)34931710), ((int32_t)84215042), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f202 = L_202;
		t1777  L_203 = {0};
		m9343(&L_203, ((int32_t)34931966), ((int32_t)84215042), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f203 = L_203;
		t1777  L_204 = {0};
		m9343(&L_204, ((int32_t)34932222), ((int32_t)84215042), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f204 = L_204;
		t1777  L_205 = {0};
		m9343(&L_205, ((int32_t)1378046), ((int32_t)84149506), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f205 = L_205;
		t1777  L_206 = {0};
		m9343(&L_206, ((int32_t)169150462), ((int32_t)84149506), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f206 = L_206;
		t1777  L_207 = {0};
		m9343(&L_207, ((int32_t)1247742), ((int32_t)84804866), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f207 = L_207;
		t1777  L_208 = {0};
		m9343(&L_208, ((int32_t)1379070), ((int32_t)84804866), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f208 = L_208;
		t1777  L_209 = {0};
		m9343(&L_209, ((int32_t)17959934), ((int32_t)84804866), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f209 = L_209;
		t1777  L_210 = {0};
		m9343(&L_210, ((int32_t)1248510), ((int32_t)84804866), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f210 = L_210;
		t1777  L_211 = {0};
		m9343(&L_211, ((int32_t)1379838), ((int32_t)84804866), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f211 = L_211;
		t1777  L_212 = {0};
		m9343(&L_212, ((int32_t)17960702), ((int32_t)84804866), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f212 = L_212;
		t1777  L_213 = {0};
		m9343(&L_213, ((int32_t)51711998), ((int32_t)84215042), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f213 = L_213;
		t1777  L_214 = {0};
		m9343(&L_214, ((int32_t)51515902), ((int32_t)117769474), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f214 = L_214;
		t1777  L_215 = {0};
		m9343(&L_215, ((int32_t)1184510), ((int32_t)68158466), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f215 = L_215;
		t1777  L_216 = {0};
		m9343(&L_216, ((int32_t)1184766), ((int32_t)67437570), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f216 = L_216;
		t1777  L_217 = {0};
		m9343(&L_217, ((int32_t)1185022), ((int32_t)67437570), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f217 = L_217;
		t1777  L_218 = {0};
		m9343(&L_218, ((int32_t)51516926), ((int32_t)84738818), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f218 = L_218;
		t1777  L_219 = {0};
		m9343(&L_219, ((int32_t)1185534), ((int32_t)67961858), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f219 = L_219;
		t1777  L_220 = {0};
		m9343(&L_220, ((int32_t)118626302), ((int32_t)84215042), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f220 = L_220;
		t1777  L_221 = {0};
		m9343(&L_221, ((int32_t)118626558), ((int32_t)84215042), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f221 = L_221;
		t1777  L_222 = {0};
		m9343(&L_222, ((int32_t)1186558), ((int32_t)134546178), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f222 = L_222;
		t1777  L_223 = {0};
		m9343(&L_223, ((int32_t)1383678), ((int32_t)84739330), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f223 = L_223;
		t1777  L_224 = {0};
		m9343(&L_224, ((int32_t)18161150), ((int32_t)84215042), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f224 = L_224;
		t1777  L_225 = {0};
		m9343(&L_225, ((int32_t)1187582), ((int32_t)67437570), &m9343_MI);
		((t1789_SFs*)InitializedTypeInfo(&t1789_TI)->static_fields)->f225 = L_225;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1786_TI;
#include "t1786MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1747_TI;
#include "t1747MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1785_TI;
#include "t1785MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1790_TI;
#include "t1790MD.h"

#include "t1791.h"


extern MethodInfo m9356_MI;
extern "C" int32_t m9356 (t1790 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9357_MI;
extern "C" t2* m9357 (t1790 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9358_MI;
extern "C" int32_t m9358 (t1790 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
#include "t1792.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1792_TI;
#include "t1792MD.h"

#include "t1793.h"
extern MethodInfo m9378_MI;


extern MethodInfo m9359_MI;
extern "C" int32_t m9359 (t1792 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9360_MI;
extern "C" bool m9360 (t1792 * __this, MethodInfo* method)
{
	{
		t1767 * L_0 = (__this->f4);
		return ((((int32_t)((((t9*)(t1767 *)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9361_MI;
extern "C" bool m9361 (t1792 * __this, MethodInfo* method)
{
	{
		t1767 * L_0 = (__this->f3);
		return ((((int32_t)((((t9*)(t1767 *)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9362_MI;
extern "C" t126 * m9362 (t1792 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m9363_MI;
extern "C" t2* m9363 (t1792 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9364_MI;
extern "C" t126 * m9364 (t1792 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9365_MI;
extern "C" t126 * m9365 (t1792 * __this, MethodInfo* method)
{
	{
		t1754 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m9366_MI;
extern "C" t1570* m9366 (t1792 * __this, bool p0, MethodInfo* method)
{
	{
		return (t1570*)NULL;
	}
}
extern MethodInfo m9367_MI;
extern "C" t158* m9367 (t1792 * __this, bool p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9378(__this, &m9378_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9368_MI;
extern "C" t158* m9368 (t1792 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9378(__this, &m9378_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9369_MI;
extern "C" t828 * m9369 (t1792 * __this, bool p0, MethodInfo* method)
{
	{
		t1767 * L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9370_MI;
extern "C" t928* m9370 (t1792 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9378(__this, &m9378_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9371_MI;
extern "C" t828 * m9371 (t1792 * __this, bool p0, MethodInfo* method)
{
	{
		t1767 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9372_MI;
extern "C" t9 * m9372 (t1792 * __this, t9 * p0, t158* p1, MethodInfo* method)
{
	{
		return NULL;
	}
}
extern MethodInfo m9373_MI;
extern "C" t9 * m9373 (t1792 * __this, t9 * p0, int32_t p1, t933 * p2, t158* p3, t901 * p4, MethodInfo* method)
{
	{
		t138 * L_0 = m9378(__this, &m9378_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9374_MI;
extern "C" bool m9374 (t1792 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9378(__this, &m9378_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9375_MI;
extern "C" void m9375 (t1792 * __this, t9 * p0, t9 * p1, t158* p2, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9376_MI;
extern "C" void m9376 (t1792 * __this, t9 * p0, t9 * p1, int32_t p2, t933 * p3, t158* p4, t901 * p5, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9377_MI;
extern "C" t1568 * m9377 (t1792 * __this, MethodInfo* method)
{
	{
		t1568 * L_0 = m7812(__this, &m7812_MI);
		return L_0;
	}
}
extern "C" t138 * m9378 (t1792 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_0, (t2*) &_stringLiteral1724, &m5734_MI);
		return L_0;
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

#include "t1798.h"
#include "t1170.h"
extern TypeInfo t1798_TI;
extern TypeInfo t1806_TI;
extern TypeInfo t1795_TI;
extern TypeInfo t1794_TI;
extern TypeInfo t1170_TI;
extern TypeInfo t1757_TI;
extern TypeInfo t1765_TI;
#include "t1798MD.h"
#include "t933MD.h"
#include "t1170MD.h"
#include "t830MD.h"
#include "t837MD.h"
extern Il2CppType t1806_0_0_0;
extern Il2CppType t1795_0_0_0;
extern Il2CppType t1794_0_0_0;
extern Il2CppType t926_0_0_0;
extern Il2CppType t930_0_0_0;
extern Il2CppType t1570_0_0_0;
extern Il2CppType t929_0_0_0;
extern MethodInfo m9451_MI;
extern MethodInfo m11966_MI;
extern MethodInfo m7754_MI;
extern MethodInfo m9427_MI;
extern MethodInfo m9431_MI;
extern MethodInfo m7764_MI;
extern MethodInfo m9441_MI;
extern MethodInfo m7742_MI;
extern MethodInfo m9382_MI;
extern MethodInfo m9432_MI;
extern MethodInfo m9388_MI;
extern MethodInfo m4409_MI;
extern MethodInfo m9444_MI;
extern MethodInfo m9507_MI;
extern MethodInfo m12015_MI;
extern MethodInfo m11606_MI;
extern MethodInfo m12016_MI;
extern MethodInfo m4431_MI;
extern MethodInfo m9399_MI;
extern MethodInfo m9430_MI;
extern MethodInfo m9402_MI;
extern MethodInfo m9403_MI;
extern MethodInfo m7756_MI;
extern MethodInfo m9400_MI;
extern MethodInfo m11983_MI;
extern MethodInfo m9406_MI;
extern MethodInfo m5726_MI;
extern MethodInfo m5737_MI;
extern MethodInfo m5722_MI;
extern MethodInfo m5928_MI;
extern MethodInfo m12017_MI;
extern MethodInfo m12018_MI;
extern MethodInfo m11977_MI;
extern MethodInfo m4426_MI;
extern MethodInfo m12019_MI;
extern MethodInfo m12020_MI;
extern MethodInfo m5881_MI;
extern MethodInfo m11976_MI;
extern MethodInfo m4389_MI;
extern MethodInfo m5877_MI;
extern MethodInfo m7354_MI;
extern MethodInfo m9412_MI;
extern MethodInfo m9510_MI;
extern MethodInfo m4425_MI;
extern MethodInfo m4427_MI;
extern MethodInfo m4428_MI;
extern MethodInfo m9429_MI;
extern MethodInfo m4438_MI;
extern MethodInfo m7774_MI;
extern MethodInfo m4473_MI;


extern "C" void m9379 (t1754 * __this, t1749 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t2* V_0 = {0};
	t1754 * G_B2_0 = {0};
	t1754 * G_B2_1 = {0};
	t1754 * G_B1_0 = {0};
	t1754 * G_B1_1 = {0};
	t2* G_B3_0 = {0};
	t1754 * G_B3_1 = {0};
	t1754 * G_B3_2 = {0};
	{
		m7742(__this, &m7742_MI);
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
		G_B3_0 = (t2*) &_stringLiteral1987;
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
		t2* L_6 = m511(NULL, (t2*) &_stringLiteral1988, L_5, &m511_MI);
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
		t1749 * L_10 = p0;
		__this->f21 = L_10;
		m9382(__this, __this, &m9382_MI);
		return;
	}
}
extern TypeInfo* t152_TI_var;
extern "C" void m9380 (t1754 * __this, t1749 * p0, t2* p1, int32_t p2, t126 * p3, t152* p4, int32_t p5, int32_t p6, t126 * p7, MethodInfo* method)
{
	static bool m9380_init;
	if (!m9380_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9380_init = true;
	}
	int32_t V_0 = 0;
	{
		m7742(__this, &m7742_MI);
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
		m9432(__this, (t2*) &_stringLiteral1989, L_5, &m9432_MI);
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
		t1341 * L_9 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_9, (t2*) &_stringLiteral1990, &m5713_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0057:
	{
		t2* L_10 = p1;
		int32_t L_11 = m5749(L_10, ((int32_t)46), &m5749_MI);
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
		t2* L_15 = m2765(L_13, ((int32_t)((int32_t)L_14+(int32_t)1)), &m2765_MI);
		__this->f8 = L_15;
		t2* L_16 = p1;
		int32_t L_17 = V_0;
		t2* L_18 = m2739(L_16, 0, L_17, &m2739_MI);
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
		m5940(NULL, (t121 *)(t121 *)L_23, (t121 *)(t121 *)L_24, (((int32_t)(((t121 *)L_25)->max_length))), &m5940_MI);
	}

IL_00b9:
	{
		t1749 * L_26 = p0;
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
		bool L_29 = m9427(__this, &m9427_MI);
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
		t1749 * L_31 = p0;
		int32_t L_32 = m9328(L_31, __this, 2, 1, &m9328_MI);
		__this->f20 = L_32;
		m9382(__this, __this, &m9382_MI);
		t2* L_33 = m9388(__this, &m9388_MI);
		__this->f26 = L_33;
		return;
	}
}
extern MethodInfo m9381_MI;
extern "C" int32_t m9381 (t1754 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f19);
		return L_0;
	}
}
extern "C" void m9382 (t1754 * __this, t1754 * p0, MethodInfo* method)
{
	typedef void (*m9382_ftn) (t1754 *, t1754 *);
	static m9382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9382_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.TypeBuilder::setup_internal_class(System.Reflection.Emit.TypeBuilder)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t1345 * m9383 (t1754 * __this, MethodInfo* method)
{
	{
		t1749 * L_0 = (__this->f21);
		t1345 * L_1 = m9564(L_0, &m9564_MI);
		return L_1;
	}
}
extern "C" t2* m9384 (t1754 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f26);
		t1345 * L_1 = (t1345 *)VirtFuncInvoker0< t1345 * >::Invoke(&m9383_MI, __this);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9451_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m399(NULL, L_0, (t2*) &_stringLiteral387, L_2, &m399_MI);
		return L_3;
	}
}
extern "C" t126 * m9385 (t1754 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f10);
		return L_0;
	}
}
extern "C" t126 * m9386 (t1754 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m9387_MI;
extern "C" t126 * m9387 (t1754 * __this, MethodInfo* method)
{
	{
		bool L_0 = m9428(__this, &m9428_MI);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t126 * L_1 = (__this->f25);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11966_MI, L_1);
		return L_2;
	}

IL_0014:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, __this);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		bool L_4 = m9427(__this, &m9427_MI);
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
		t1341 * L_7 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_7, (t2*) &_stringLiteral1986, &m5713_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003e:
	{
		return __this;
	}
}
extern "C" t2* m9388 (t1754 * __this, MethodInfo* method)
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
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4409_MI, L_1);
		t2* L_3 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m399(NULL, L_2, (t2*) &_stringLiteral172, L_3, &m399_MI);
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
		int32_t L_7 = m2723(L_6, &m2723_MI);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		t2* L_8 = (__this->f9);
		t2* L_9 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m399(NULL, L_8, (t2*) &_stringLiteral139, L_9, &m399_MI);
		return L_10;
	}

IL_0051:
	{
		t2* L_11 = (__this->f8);
		return L_11;
	}
}
extern "C" t2* m9389 (t1754 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f26);
		return L_0;
	}
}
extern "C" t1568 * m9390 (t1754 * __this, MethodInfo* method)
{
	{
		t1749 * L_0 = (__this->f21);
		return L_0;
	}
}
extern "C" t2* m9391 (t1754 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f8);
		return L_0;
	}
}
extern "C" t2* m9392 (t1754 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f9);
		return L_0;
	}
}
extern "C" t126 * m9393 (t1754 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m9394_MI;
extern TypeInfo* t1806_TI_var;
extern "C" t826 * m9394 (t1754 * __this, int32_t p0, t933 * p1, int32_t p2, t152* p3, t935* p4, MethodInfo* method)
{
	static bool m9394_init;
	if (!m9394_init)
	{
		t1806_TI_var = il2cpp_codegen_class_from_type(&t1806_0_0_0);
		m9394_init = true;
	}
	t1752 * V_0 = {0};
	int32_t V_1 = 0;
	t1752 * V_2 = {0};
	t1795* V_3 = {0};
	int32_t V_4 = 0;
	t1806* V_5 = {0};
	t826 * V_6 = {0};
	t1795* V_7 = {0};
	int32_t V_8 = 0;
	{
		m9431(__this, &m9431_MI);
		t126 * L_0 = (__this->f25);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t126 *)L_1))))
		{
			goto IL_00e1;
		}
	}
	{
		t1795* L_2 = (__this->f15);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		return (t826 *)NULL;
	}

IL_0025:
	{
		V_0 = (t1752 *)NULL;
		V_1 = 0;
		t1795* L_3 = (__this->f15);
		V_3 = L_3;
		V_4 = 0;
		goto IL_0055;
	}

IL_0035:
	{
		t1795* L_4 = V_3;
		int32_t L_5 = V_4;
		int32_t L_6 = L_5;
		V_2 = (*(t1752 **)(t1752 **)SZArrayLdElema(L_4, L_6));
		int32_t L_7 = p2;
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_0049;
		}
	}
	{
		t1752 * L_8 = V_2;
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9109_MI, L_8);
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
		t1752 * L_11 = V_2;
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
		t1795* L_15 = V_3;
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
		return (t826 *)NULL;
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
		t1798 * L_19 = (t1798 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1798_TI));
		m9444(L_19, &m9444_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_006f:
	{
		t1752 * L_20 = V_0;
		return L_20;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		V_5 = ((t1806*)SZArrayNew(t1806_TI_var, L_21));
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		t1806* L_23 = V_5;
		t1752 * L_24 = V_0;
		ArrayElementTypeCheck (L_23, L_24);
		*((t914 **)(t914 **)SZArrayLdElema(L_23, 0)) = (t914 *)L_24;
		goto IL_00c2;
	}

IL_0084:
	{
		V_1 = 0;
		t1795* L_25 = (__this->f15);
		V_7 = L_25;
		V_8 = 0;
		goto IL_00ba;
	}

IL_0093:
	{
		t1795* L_26 = V_7;
		int32_t L_27 = V_8;
		int32_t L_28 = L_27;
		V_6 = (*(t1752 **)(t1752 **)SZArrayLdElema(L_26, L_28));
		int32_t L_29 = p2;
		if ((((int32_t)L_29) == ((int32_t)3)))
		{
			goto IL_00aa;
		}
	}
	{
		t826 * L_30 = V_6;
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9544_MI, L_30);
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
		t1806* L_33 = V_5;
		int32_t L_34 = V_1;
		int32_t L_35 = L_34;
		V_1 = ((int32_t)((int32_t)L_35+(int32_t)1));
		t826 * L_36 = V_6;
		ArrayElementTypeCheck (L_33, L_36);
		*((t914 **)(t914 **)SZArrayLdElema(L_33, L_35)) = (t914 *)L_36;
	}

IL_00b4:
	{
		int32_t L_37 = V_8;
		V_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_00ba:
	{
		int32_t L_38 = V_8;
		t1795* L_39 = V_7;
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)(((t121 *)L_39)->max_length))))))
		{
			goto IL_0093;
		}
	}

IL_00c2:
	{
		t933 * L_40 = p1;
		if (L_40)
		{
			goto IL_00ce;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		t933 * L_41 = m9507(NULL, &m9507_MI);
		p1 = L_41;
	}

IL_00ce:
	{
		t933 * L_42 = p1;
		int32_t L_43 = p0;
		t1806* L_44 = V_5;
		t152* L_45 = p3;
		t935* L_46 = p4;
		t914 * L_47 = (t914 *)VirtFuncInvoker4< t914 *, int32_t, t1806*, t152*, t935* >::Invoke(&m12015_MI, L_42, L_43, L_44, L_45, L_46);
		return ((t826 *)Castclass(L_47, InitializedTypeInfo(&t826_TI)));
	}

IL_00e1:
	{
		t126 * L_48 = (__this->f25);
		int32_t L_49 = p0;
		t933 * L_50 = p1;
		int32_t L_51 = p2;
		t152* L_52 = p3;
		t935* L_53 = p4;
		t826 * L_54 = (t826 *)VirtFuncInvoker5< t826 *, int32_t, t933 *, int32_t, t152*, t935* >::Invoke(&m7797_MI, L_48, L_49, L_50, L_51, L_52, L_53);
		return L_54;
	}
}
extern "C" bool m9395 (t1754 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		bool L_0 = m9428(__this, &m9428_MI);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = m9427(__this, &m9427_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		bool L_5 = m11606(NULL, __this, L_3, L_4, &m11606_MI);
		return L_5;
	}
}
extern "C" t158* m9396 (t1754 * __this, bool p0, MethodInfo* method)
{
	{
		m9431(__this, &m9431_MI);
		t126 * L_0 = (__this->f25);
		bool L_1 = p0;
		t158* L_2 = (t158*)VirtFuncInvoker1< t158*, bool >::Invoke(&m12016_MI, L_0, L_1);
		return L_2;
	}
}
extern "C" t158* m9397 (t1754 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		m9431(__this, &m9431_MI);
		t126 * L_0 = (__this->f25);
		t126 * L_1 = p0;
		bool L_2 = p1;
		t158* L_3 = (t158*)VirtFuncInvoker2< t158*, t126 *, bool >::Invoke(&m4431_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9398_MI;
extern "C" t1752 * m9398 (t1754 * __this, int32_t p0, int32_t p1, t152* p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		t152* L_2 = p2;
		t1752 * L_3 = m9399(__this, L_0, L_1, L_2, (t1756*)(t1756*)NULL, (t1756*)(t1756*)NULL, &m9399_MI);
		return L_3;
	}
}
extern TypeInfo* t1795_TI_var;
extern "C" t1752 * m9399 (t1754 * __this, int32_t p0, int32_t p1, t152* p2, t1756* p3, t1756* p4, MethodInfo* method)
{
	static bool m9399_init;
	if (!m9399_init)
	{
		t1795_TI_var = il2cpp_codegen_class_from_type(&t1795_0_0_0);
		m9399_init = true;
	}
	t1752 * V_0 = {0};
	t1795* V_1 = {0};
	{
		m9430(__this, &m9430_MI);
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		t152* L_2 = p2;
		t1756* L_3 = p3;
		t1756* L_4 = p4;
		t1752 * L_5 = (t1752 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1752_TI));
		m9108(L_5, __this, L_0, L_1, L_2, L_3, L_4, &m9108_MI);
		V_0 = L_5;
		t1795* L_6 = (__this->f15);
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		t1795* L_7 = (__this->f15);
		V_1 = ((t1795*)SZArrayNew(t1795_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))+(int32_t)1))));
		t1795* L_8 = (__this->f15);
		t1795* L_9 = V_1;
		t1795* L_10 = (__this->f15);
		m5940(NULL, (t121 *)(t121 *)L_8, (t121 *)(t121 *)L_9, (((int32_t)(((t121 *)L_10)->max_length))), &m5940_MI);
		t1795* L_11 = V_1;
		t1795* L_12 = (__this->f15);
		t1752 * L_13 = V_0;
		ArrayElementTypeCheck (L_11, L_13);
		*((t1752 **)(t1752 **)SZArrayLdElema(L_11, (((int32_t)(((t121 *)L_12)->max_length))))) = (t1752 *)L_13;
		t1795* L_14 = V_1;
		__this->f15 = L_14;
		goto IL_0069;
	}

IL_0054:
	{
		__this->f15 = ((t1795*)SZArrayNew(t1795_TI_var, 1));
		t1795* L_15 = (__this->f15);
		t1752 * L_16 = V_0;
		ArrayElementTypeCheck (L_15, L_16);
		*((t1752 **)(t1752 **)SZArrayLdElema(L_15, 0)) = (t1752 *)L_16;
	}

IL_0069:
	{
		t1752 * L_17 = V_0;
		return L_17;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" void m9400 (t1754 * __this, t1767 * p0, MethodInfo* method)
{
	static bool m9400_init;
	if (!m9400_init)
	{
		t1794_TI_var = il2cpp_codegen_class_from_type(&t1794_0_0_0);
		m9400_init = true;
	}
	t1794* V_0 = {0};
	{
		t1794* L_0 = (__this->f14);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		t1794* L_1 = (__this->f14);
		int32_t L_2 = (__this->f13);
		if ((!(((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))) == ((uint32_t)L_2))))
		{
			goto IL_0041;
		}
	}
	{
		t1794* L_3 = (__this->f14);
		V_0 = ((t1794*)SZArrayNew(t1794_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_3)->max_length)))*(int32_t)2))));
		t1794* L_4 = (__this->f14);
		t1794* L_5 = V_0;
		int32_t L_6 = (__this->f13);
		m5940(NULL, (t121 *)(t121 *)L_4, (t121 *)(t121 *)L_5, L_6, &m5940_MI);
		t1794* L_7 = V_0;
		__this->f14 = L_7;
	}

IL_0041:
	{
		goto IL_004f;
	}

IL_0043:
	{
		__this->f14 = ((t1794*)SZArrayNew(t1794_TI_var, 1));
	}

IL_004f:
	{
		t1794* L_8 = (__this->f14);
		int32_t L_9 = (__this->f13);
		t1767 * L_10 = p0;
		ArrayElementTypeCheck (L_8, L_10);
		*((t1767 **)(t1767 **)SZArrayLdElema(L_8, L_9)) = (t1767 *)L_10;
		int32_t L_11 = (__this->f13);
		__this->f13 = ((int32_t)((int32_t)L_11+(int32_t)1));
		return;
	}
}
extern MethodInfo m9401_MI;
extern "C" t1767 * m9401 (t1754 * __this, t2* p0, int32_t p1, t126 * p2, t152* p3, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		t126 * L_2 = p2;
		t152* L_3 = p3;
		t1767 * L_4 = m9402(__this, L_0, L_1, 1, L_2, L_3, &m9402_MI);
		return L_4;
	}
}
extern "C" t1767 * m9402 (t1754 * __this, t2* p0, int32_t p1, int32_t p2, t126 * p3, t152* p4, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		t126 * L_3 = p3;
		t152* L_4 = p4;
		t1767 * L_5 = m9403(__this, L_0, L_1, L_2, L_3, (t152*)(t152*)NULL, (t152*)(t152*)NULL, L_4, (t1756*)(t1756*)NULL, (t1756*)(t1756*)NULL, &m9403_MI);
		return L_5;
	}
}
extern "C" t1767 * m9403 (t1754 * __this, t2* p0, int32_t p1, int32_t p2, t126 * p3, t152* p4, t152* p5, t152* p6, t1756* p7, t1756* p8, MethodInfo* method)
{
	t1767 * V_0 = {0};
	{
		t2* L_0 = p0;
		m9432(__this, (t2*) &_stringLiteral2, L_0, &m9432_MI);
		m9430(__this, &m9430_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7756_MI, __this);
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
		t563 * L_5 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_5, (t2*) &_stringLiteral1991, &m2909_MI);
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
		t1749 * L_7 = (__this->f21);
		t1744 * L_8 = (L_7->f14);
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
		t1756* L_17 = p7;
		t1756* L_18 = p8;
		t1767 * L_19 = (t1767 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1767_TI));
		m9278(L_19, __this, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, &m9278_MI);
		V_0 = L_19;
		t1767 * L_20 = V_0;
		m9400(__this, L_20, &m9400_MI);
		t1767 * L_21 = V_0;
		return L_21;
	}
}
extern MethodInfo m9404_MI;
extern "C" void m9404 (t1754 * __this, t828 * p0, t828 * p1, MethodInfo* method)
{
	t1767 * V_0 = {0};
	{
		t828 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1992, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t828 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1993, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		m9430(__this, &m9430_MI);
		t828 * L_4 = p0;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4452_MI, L_4);
		if ((((t9*)(t126 *)L_5) == ((t9*)(t1754 *)__this)))
		{
			goto IL_0036;
		}
	}
	{
		t563 * L_6 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_6, (t2*) &_stringLiteral1994, &m2909_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0036:
	{
		t828 * L_7 = p0;
		if (!((t1767 *)IsInst(L_7, InitializedTypeInfo(&t1767_TI))))
		{
			goto IL_004c;
		}
	}
	{
		t828 * L_8 = p0;
		V_0 = ((t1767 *)Castclass(L_8, InitializedTypeInfo(&t1767_TI)));
		t1767 * L_9 = V_0;
		t828 * L_10 = p1;
		m9301(L_9, L_10, &m9301_MI);
	}

IL_004c:
	{
		return;
	}
}
extern "C" t926* m9405 (t1754 * __this, int32_t p0, MethodInfo* method)
{
	{
		bool L_0 = m9428(__this, &m9428_MI);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t126 * L_1 = (__this->f25);
		int32_t L_2 = p0;
		t926* L_3 = (t926*)VirtFuncInvoker1< t926*, int32_t >::Invoke(&m11983_MI, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		bool L_4 = m9427(__this, &m9427_MI);
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
		t926* L_7 = m9406(__this, L_6, &m9406_MI);
		return L_7;
	}
}
extern TypeInfo* t926_TI_var;
extern "C" t926* m9406 (t1754 * __this, int32_t p0, MethodInfo* method)
{
	static bool m9406_init;
	if (!m9406_init)
	{
		t926_TI_var = il2cpp_codegen_class_from_type(&t926_0_0_0);
		m9406_init = true;
	}
	t1170 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	t1752 * V_3 = {0};
	t1795* V_4 = {0};
	int32_t V_5 = 0;
	t926* V_6 = {0};
	{
		t1795* L_0 = (__this->f15);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((t926*)SZArrayNew(t926_TI_var, 0));
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_1 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5726(L_1, &m5726_MI);
		V_0 = L_1;
		t1795* L_2 = (__this->f15);
		V_4 = L_2;
		V_5 = 0;
		goto IL_0079;
	}

IL_0022:
	{
		t1795* L_3 = V_4;
		int32_t L_4 = V_5;
		int32_t L_5 = L_4;
		V_3 = (*(t1752 **)(t1752 **)SZArrayLdElema(L_3, L_5));
		V_1 = 0;
		t1752 * L_6 = V_3;
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9117_MI, L_6);
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
		t1170 * L_16 = V_0;
		t1752 * L_17 = V_3;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5737_MI, L_16, L_17);
	}

IL_0073:
	{
		int32_t L_18 = V_5;
		V_5 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_19 = V_5;
		t1795* L_20 = V_4;
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((t121 *)L_20)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		t1170 * L_21 = V_0;
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5722_MI, L_21);
		V_6 = ((t926*)SZArrayNew(t926_TI_var, L_22));
		t1170 * L_23 = V_0;
		t926* L_24 = V_6;
		VirtActionInvoker1< t121 * >::Invoke(&m5928_MI, L_23, (t121 *)(t121 *)L_24);
		t926* L_25 = V_6;
		return L_25;
	}
}
extern "C" t126 * m9407 (t1754 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" t1569 * m9408 (t1754 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		m9431(__this, &m9431_MI);
		t126 * L_0 = (__this->f25);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t1569 * L_3 = (t1569 *)VirtFuncInvoker2< t1569 *, t2*, int32_t >::Invoke(&m12017_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern "C" t830 * m9409 (t1754 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = {0};
	t830 * V_2 = {0};
	t1797* V_3 = {0};
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
		t830 * L_4 = (t830 *)VirtFuncInvoker2< t830 *, t2*, int32_t >::Invoke(&m12018_MI, L_1, L_2, L_3);
		return L_4;
	}

IL_0016:
	{
		t1797* L_5 = (__this->f17);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return (t830 *)NULL;
	}

IL_0020:
	{
		t1797* L_6 = (__this->f17);
		V_3 = L_6;
		V_4 = 0;
		goto IL_0094;
	}

IL_002f:
	{
		t1797* L_7 = V_3;
		int32_t L_8 = V_4;
		int32_t L_9 = L_8;
		V_2 = (*(t1763 **)(t1763 **)SZArrayLdElema(L_7, L_9));
		t830 * L_10 = V_2;
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
		t830 * L_11 = V_2;
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4391_MI, L_11);
		t2* L_13 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_14 = m2737(NULL, L_12, L_13, &m2737_MI);
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
		t830 * L_15 = V_2;
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11977_MI, L_15);
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
		t830 * L_25 = V_2;
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
		t1797* L_28 = V_3;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((t121 *)L_28)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (t830 *)NULL;
	}
}
extern TypeInfo* t930_TI_var;
extern "C" t930* m9410 (t1754 * __this, int32_t p0, MethodInfo* method)
{
	static bool m9410_init;
	if (!m9410_init)
	{
		t930_TI_var = il2cpp_codegen_class_from_type(&t930_0_0_0);
		m9410_init = true;
	}
	t1170 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	t830 * V_3 = {0};
	t1797* V_4 = {0};
	int32_t V_5 = 0;
	t930* V_6 = {0};
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
		t930* L_3 = (t930*)VirtFuncInvoker1< t930*, int32_t >::Invoke(&m4426_MI, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		t1797* L_4 = (__this->f17);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return ((t930*)SZArrayNew(t930_TI_var, 0));
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_5 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5726(L_5, &m5726_MI);
		V_0 = L_5;
		t1797* L_6 = (__this->f17);
		V_4 = L_6;
		V_5 = 0;
		goto IL_0096;
	}

IL_003a:
	{
		t1797* L_7 = V_4;
		int32_t L_8 = V_5;
		int32_t L_9 = L_8;
		V_3 = (*(t1763 **)(t1763 **)SZArrayLdElema(L_7, L_9));
		t830 * L_10 = V_3;
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
		t830 * L_11 = V_3;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11977_MI, L_11);
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
		t1170 * L_21 = V_0;
		t830 * L_22 = V_3;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5737_MI, L_21, L_22);
	}

IL_0090:
	{
		int32_t L_23 = V_5;
		V_5 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0096:
	{
		int32_t L_24 = V_5;
		t1797* L_25 = V_4;
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((t121 *)L_25)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		t1170 * L_26 = V_0;
		int32_t L_27 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5722_MI, L_26);
		V_6 = ((t930*)SZArrayNew(t930_TI_var, L_27));
		t1170 * L_28 = V_0;
		t930* L_29 = V_6;
		VirtActionInvoker1< t121 * >::Invoke(&m5928_MI, L_28, (t121 *)(t121 *)L_29);
		t930* L_30 = V_6;
		return L_30;
	}
}
extern TypeInfo* t152_TI_var;
extern "C" t152* m9411 (t1754 * __this, MethodInfo* method)
{
	static bool m9411_init;
	if (!m9411_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9411_init = true;
	}
	t152* V_0 = {0};
	{
		bool L_0 = m9428(__this, &m9428_MI);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t126 * L_1 = (__this->f25);
		t152* L_2 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m12019_MI, L_1);
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
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5902_MI, L_5, (t121 *)(t121 *)L_6, 0);
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
extern TypeInfo* t1570_TI_var;
extern "C" t1570* m9412 (t1754 * __this, t2* p0, int32_t p1, bool p2, t126 * p3, MethodInfo* method)
{
	static bool m9412_init;
	if (!m9412_init)
	{
		t1570_TI_var = il2cpp_codegen_class_from_type(&t1570_0_0_0);
		m9412_init = true;
	}
	t1570* V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	t1570* V_3 = {0};
	t1170 * V_4 = {0};
	bool V_5 = false;
	int32_t V_6 = 0;
	t828 * V_7 = {0};
	t1170 * V_8 = {0};
	t828 * V_9 = {0};
	t1570* V_10 = {0};
	int32_t V_11 = 0;
	t1570* V_12 = {0};
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
		t1570* L_4 = (t1570*)VirtFuncInvoker1< t1570*, int32_t >::Invoke(&m12020_MI, L_2, L_3);
		V_3 = L_4;
		t1570* L_5 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_6 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5881(L_6, (((int32_t)(((t121 *)L_5)->max_length))), &m5881_MI);
		V_4 = L_6;
		int32_t L_7 = p1;
		V_5 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_6 = 0;
		goto IL_00c1;
	}

IL_003e:
	{
		t1570* L_8 = V_3;
		int32_t L_9 = V_6;
		int32_t L_10 = L_9;
		V_7 = (*(t828 **)(t828 **)SZArrayLdElema(L_8, L_10));
		t828 * L_11 = V_7;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11976_MI, L_11);
		V_2 = L_12;
		t828 * L_13 = V_7;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4389_MI, L_13);
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
		t1170 * L_22 = V_4;
		t828 * L_23 = V_7;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5737_MI, L_22, L_23);
	}

IL_00bb:
	{
		int32_t L_24 = V_6;
		V_6 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00c1:
	{
		int32_t L_25 = V_6;
		t1570* L_26 = V_3;
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((t121 *)L_26)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		t1794* L_27 = (__this->f14);
		if (L_27)
		{
			goto IL_00ea;
		}
	}
	{
		t1170 * L_28 = V_4;
		int32_t L_29 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5722_MI, L_28);
		V_0 = ((t1570*)SZArrayNew(t1570_TI_var, L_29));
		t1170 * L_30 = V_4;
		t1570* L_31 = V_0;
		VirtActionInvoker1< t121 * >::Invoke(&m5928_MI, L_30, (t121 *)(t121 *)L_31);
		goto IL_011c;
	}

IL_00ea:
	{
		t1794* L_32 = (__this->f14);
		t1170 * L_33 = V_4;
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5722_MI, L_33);
		V_0 = ((t1570*)SZArrayNew(t1570_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_32)->max_length)))+(int32_t)L_34))));
		t1170 * L_35 = V_4;
		t1570* L_36 = V_0;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5877_MI, L_35, (t121 *)(t121 *)L_36, 0);
		t1794* L_37 = (__this->f14);
		t1570* L_38 = V_0;
		t1170 * L_39 = V_4;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5722_MI, L_39);
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5902_MI, L_37, (t121 *)(t121 *)L_38, L_40);
	}

IL_011c:
	{
		goto IL_0125;
	}

IL_011e:
	{
		t1794* L_41 = (__this->f14);
		V_0 = (t1570*)L_41;
	}

IL_0125:
	{
		t1570* L_42 = V_0;
		if (L_42)
		{
			goto IL_012f;
		}
	}
	{
		return ((t1570*)SZArrayNew(t1570_TI_var, 0));
	}

IL_012f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_43 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5726(L_43, &m5726_MI);
		V_8 = L_43;
		t1570* L_44 = V_0;
		V_10 = L_44;
		V_11 = 0;
		goto IL_01ba;
	}

IL_0141:
	{
		t1570* L_45 = V_10;
		int32_t L_46 = V_11;
		int32_t L_47 = L_46;
		V_9 = (*(t828 **)(t828 **)SZArrayLdElema(L_45, L_47));
		t828 * L_48 = V_9;
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
		t828 * L_50 = V_9;
		t2* L_51 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4391_MI, L_50);
		t2* L_52 = p0;
		bool L_53 = p2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_54 = m7354(NULL, L_51, L_52, L_53, &m7354_MI);
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
		t828 * L_55 = V_9;
		int32_t L_56 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11976_MI, L_55);
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
		t1170 * L_65 = V_8;
		t828 * L_66 = V_9;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5737_MI, L_65, L_66);
	}

IL_01b4:
	{
		int32_t L_67 = V_11;
		V_11 = ((int32_t)((int32_t)L_67+(int32_t)1));
	}

IL_01ba:
	{
		int32_t L_68 = V_11;
		t1570* L_69 = V_10;
		if ((((int32_t)L_68) < ((int32_t)(((int32_t)(((t121 *)L_69)->max_length))))))
		{
			goto IL_0141;
		}
	}
	{
		t1170 * L_70 = V_8;
		int32_t L_71 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5722_MI, L_70);
		V_12 = ((t1570*)SZArrayNew(t1570_TI_var, L_71));
		t1170 * L_72 = V_8;
		t1570* L_73 = V_12;
		VirtActionInvoker1< t121 * >::Invoke(&m5928_MI, L_72, (t121 *)(t121 *)L_73);
		t1570* L_74 = V_12;
		return L_74;
	}
}
extern "C" t1570* m9413 (t1754 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t1570* L_1 = m9412(__this, (t2*)NULL, L_0, 0, __this, &m9412_MI);
		return L_1;
	}
}
extern MethodInfo m9414_MI;
extern TypeInfo* t1806_TI_var;
extern "C" t828 * m9414 (t1754 * __this, t2* p0, int32_t p1, t933 * p2, int32_t p3, t152* p4, t935* p5, MethodInfo* method)
{
	static bool m9414_init;
	if (!m9414_init)
	{
		t1806_TI_var = il2cpp_codegen_class_from_type(&t1806_0_0_0);
		m9414_init = true;
	}
	bool V_0 = false;
	t1570* V_1 = {0};
	t828 * V_2 = {0};
	t1806* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	t828 * V_6 = {0};
	t1570* V_7 = {0};
	int32_t V_8 = 0;
	t828 * V_9 = {0};
	t1570* V_10 = {0};
	int32_t V_11 = 0;
	int32_t G_B3_0 = 0;
	{
		m9431(__this, &m9431_MI);
		int32_t L_0 = p1;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = V_0;
		t1570* L_4 = m9412(__this, L_1, L_2, L_3, __this, &m9412_MI);
		V_1 = L_4;
		V_2 = (t828 *)NULL;
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
		t1570* L_7 = V_1;
		V_7 = L_7;
		V_8 = 0;
		goto IL_0060;
	}

IL_0035:
	{
		t1570* L_8 = V_7;
		int32_t L_9 = V_8;
		int32_t L_10 = L_9;
		V_6 = (*(t828 **)(t828 **)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = p3;
		if ((((int32_t)L_11) == ((int32_t)3)))
		{
			goto IL_0051;
		}
	}
	{
		t828 * L_12 = V_6;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9544_MI, L_12);
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
		t828 * L_16 = V_6;
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
		t1570* L_20 = V_7;
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
		return (t828 *)NULL;
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
		t828 * L_24 = V_2;
		return L_24;
	}

IL_0079:
	{
		int32_t L_25 = V_5;
		V_3 = ((t1806*)SZArrayNew(t1806_TI_var, L_25));
		int32_t L_26 = V_5;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_008c;
		}
	}
	{
		t1806* L_27 = V_3;
		t828 * L_28 = V_2;
		ArrayElementTypeCheck (L_27, L_28);
		*((t914 **)(t914 **)SZArrayLdElema(L_27, 0)) = (t914 *)L_28;
		goto IL_00cc;
	}

IL_008c:
	{
		V_5 = 0;
		t1570* L_29 = V_1;
		V_10 = L_29;
		V_11 = 0;
		goto IL_00c4;
	}

IL_0097:
	{
		t1570* L_30 = V_10;
		int32_t L_31 = V_11;
		int32_t L_32 = L_31;
		V_9 = (*(t828 **)(t828 **)SZArrayLdElema(L_30, L_32));
		int32_t L_33 = p3;
		if ((((int32_t)L_33) == ((int32_t)3)))
		{
			goto IL_00b3;
		}
	}
	{
		t828 * L_34 = V_9;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9544_MI, L_34);
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
		t1806* L_38 = V_3;
		int32_t L_39 = V_5;
		int32_t L_40 = L_39;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
		t828 * L_41 = V_9;
		ArrayElementTypeCheck (L_38, L_41);
		*((t914 **)(t914 **)SZArrayLdElema(L_38, L_40)) = (t914 *)L_41;
	}

IL_00be:
	{
		int32_t L_42 = V_11;
		V_11 = ((int32_t)((int32_t)L_42+(int32_t)1));
	}

IL_00c4:
	{
		int32_t L_43 = V_11;
		t1570* L_44 = V_10;
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
		t1806* L_46 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		t914 * L_47 = m9510(NULL, L_46, &m9510_MI);
		return ((t828 *)Castclass(L_47, InitializedTypeInfo(&t828_TI)));
	}

IL_00dc:
	{
		t933 * L_48 = p2;
		if (L_48)
		{
			goto IL_00e8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		t933 * L_49 = m9507(NULL, &m9507_MI);
		p2 = L_49;
	}

IL_00e8:
	{
		t933 * L_50 = p2;
		int32_t L_51 = p1;
		t1806* L_52 = V_3;
		t152* L_53 = p4;
		t935* L_54 = p5;
		t914 * L_55 = (t914 *)VirtFuncInvoker4< t914 *, int32_t, t1806*, t152*, t935* >::Invoke(&m12015_MI, L_50, L_51, L_52, L_53, L_54);
		return ((t828 *)Castclass(L_55, InitializedTypeInfo(&t828_TI)));
	}
}
extern TypeInfo* t929_TI_var;
extern "C" t929* m9415 (t1754 * __this, int32_t p0, MethodInfo* method)
{
	static bool m9415_init;
	if (!m9415_init)
	{
		t929_TI_var = il2cpp_codegen_class_from_type(&t929_0_0_0);
		m9415_init = true;
	}
	t1170 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	t828 * V_3 = {0};
	t837 * V_4 = {0};
	t1796* V_5 = {0};
	int32_t V_6 = 0;
	t929* V_7 = {0};
	{
		bool L_0 = m9428(__this, &m9428_MI);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t126 * L_1 = (__this->f25);
		int32_t L_2 = p0;
		t929* L_3 = (t929*)VirtFuncInvoker1< t929*, int32_t >::Invoke(&m4425_MI, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		t1796* L_4 = (__this->f16);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return ((t929*)SZArrayNew(t929_TI_var, 0));
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_5 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5726(L_5, &m5726_MI);
		V_0 = L_5;
		t1796* L_6 = (__this->f16);
		V_5 = L_6;
		V_6 = 0;
		goto IL_00ad;
	}

IL_003a:
	{
		t1796* L_7 = V_5;
		int32_t L_8 = V_6;
		int32_t L_9 = L_8;
		V_4 = (*(t1792 **)(t1792 **)SZArrayLdElema(L_7, L_9));
		V_1 = 0;
		t837 * L_10 = V_4;
		t828 * L_11 = (t828 *)VirtFuncInvoker1< t828 *, bool >::Invoke(&m4427_MI, L_10, 1);
		V_3 = L_11;
		t828 * L_12 = V_3;
		if (L_12)
		{
			goto IL_0058;
		}
	}
	{
		t837 * L_13 = V_4;
		t828 * L_14 = (t828 *)VirtFuncInvoker1< t828 *, bool >::Invoke(&m4428_MI, L_13, 1);
		V_3 = L_14;
	}

IL_0058:
	{
		t828 * L_15 = V_3;
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
		t828 * L_16 = V_3;
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11976_MI, L_16);
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
		t1170 * L_26 = V_0;
		t837 * L_27 = V_4;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5737_MI, L_26, L_27);
	}

IL_00a7:
	{
		int32_t L_28 = V_6;
		V_6 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00ad:
	{
		int32_t L_29 = V_6;
		t1796* L_30 = V_5;
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)(((t121 *)L_30)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		t1170 * L_31 = V_0;
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5722_MI, L_31);
		V_7 = ((t929*)SZArrayNew(t929_TI_var, L_32));
		t1170 * L_33 = V_0;
		t929* L_34 = V_7;
		VirtActionInvoker1< t121 * >::Invoke(&m5928_MI, L_33, (t121 *)(t121 *)L_34);
		t929* L_35 = V_7;
		return L_35;
	}
}
extern MethodInfo m9416_MI;
extern "C" t837 * m9416 (t1754 * __this, t2* p0, int32_t p1, t933 * p2, t126 * p3, t152* p4, t935* p5, MethodInfo* method)
{
	{
		t138 * L_0 = m9429(__this, &m9429_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9417_MI;
extern "C" bool m9417 (t1754 * __this, MethodInfo* method)
{
	{
		bool L_0 = m9428(__this, &m9428_MI);
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
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7749_MI, L_1);
		return L_2;
	}
}
extern "C" t9 * m9418 (t1754 * __this, t2* p0, int32_t p1, t933 * p2, t9 * p3, t158* p4, t935* p5, t901 * p6, t221* p7, MethodInfo* method)
{
	{
		m9431(__this, &m9431_MI);
		t126 * L_0 = (__this->f25);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t933 * L_3 = p2;
		t9 * L_4 = p3;
		t158* L_5 = p4;
		t935* L_6 = p5;
		t901 * L_7 = p6;
		t221* L_8 = p7;
		t9 * L_9 = (t9 *)VirtFuncInvoker8< t9 *, t2*, int32_t, t933 *, t9 *, t158*, t935*, t901 *, t221* >::Invoke(&m4438_MI, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
extern MethodInfo m9419_MI;
extern "C" bool m9419 (t1754 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9420_MI;
extern "C" bool m9420 (t1754 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9421_MI;
extern "C" bool m9421 (t1754 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9422_MI;
extern "C" bool m9422 (t1754 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9423_MI;
extern "C" bool m9423 (t1754 * __this, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		t1749 * L_0 = (__this->f21);
		t1744 * L_1 = (L_0->f14);
		t126 * L_2 = (L_1->f22);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		bool L_3 = m7774(NULL, __this, L_2, 0, &m7774_MI);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_4 = m329(NULL, LoadTypeToken(&t117_0_0_0), &m329_MI);
		bool L_5 = m7774(NULL, __this, L_4, 0, &m7774_MI);
		if (!L_5)
		{
			goto IL_0057;
		}
	}

IL_002c:
	{
		t1749 * L_6 = (__this->f21);
		t1744 * L_7 = (L_6->f14);
		t126 * L_8 = (L_7->f22);
		if ((((t9*)(t1754 *)__this) == ((t9*)(t126 *)L_8)))
		{
			goto IL_0057;
		}
	}
	{
		t1749 * L_9 = (__this->f21);
		t1744 * L_10 = (L_9->f14);
		t126 * L_11 = (L_10->f23);
		G_B5_0 = ((((int32_t)((((t9*)(t1754 *)__this) == ((t9*)(t126 *)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
extern MethodInfo m9424_MI;
extern "C" t126 * m9424 (t1754 * __this, t152* p0, MethodInfo* method)
{
	{
		t152* L_0 = p0;
		t126 * L_1 = m4471(__this, L_0, &m4471_MI);
		return L_1;
	}
}
extern "C" t127  m9425 (t1754 * __this, MethodInfo* method)
{
	{
		m9431(__this, &m9431_MI);
		t126 * L_0 = (__this->f25);
		t127  L_1 = (t127 )VirtFuncInvoker0< t127  >::Invoke(&m7764_MI, L_0);
		return L_1;
	}
}
extern "C" int32_t m9426 (t1754 * __this, t9 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	{
		t1749 * L_0 = (__this->f21);
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = p2;
		int32_t L_4 = m9328(L_0, L_1, L_2, L_3, &m9328_MI);
		return L_4;
	}
}
extern "C" bool m9427 (t1754 * __this, MethodInfo* method)
{
	{
		t1749 * L_0 = (__this->f21);
		t1744 * L_1 = (L_0->f14);
		bool L_2 = m9101(L_1, &m9101_MI);
		return L_2;
	}
}
extern "C" bool m9428 (t1754 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f25);
		return ((((int32_t)((((t9*)(t126 *)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t138 * m9429 (t1754 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_0, (t2*) &_stringLiteral1724, &m5734_MI);
		return L_0;
	}
}
extern "C" void m9430 (t1754 * __this, MethodInfo* method)
{
	{
		bool L_0 = m9428(__this, &m9428_MI);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_1, (t2*) &_stringLiteral1995, &m5713_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
extern "C" void m9431 (t1754 * __this, MethodInfo* method)
{
	{
		bool L_0 = m9428(__this, &m9428_MI);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t138 * L_1 = m9429(__this, &m9429_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		return;
	}
}
extern "C" void m9432 (t1754 * __this, t2* p0, t2* p1, MethodInfo* method)
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
		int32_t L_4 = m2723(L_3, &m2723_MI);
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		t2* L_5 = p0;
		t563 * L_6 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_6, (t2*) &_stringLiteral1996, L_5, &m5719_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_001e:
	{
		t2* L_7 = p1;
		uint16_t L_8 = m2738(L_7, 0, &m2738_MI);
		if (L_8)
		{
			goto IL_0033;
		}
	}
	{
		t2* L_9 = p0;
		t563 * L_10 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_10, (t2*) &_stringLiteral1997, L_9, &m5719_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0033:
	{
		return;
	}
}
extern MethodInfo m9433_MI;
extern "C" t2* m9433 (t1754 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9389_MI, __this);
		return L_0;
	}
}
extern MethodInfo m9434_MI;
extern "C" bool m9434 (t1754 * __this, t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = m4473(__this, L_0, &m4473_MI);
		return L_1;
	}
}
extern MethodInfo m9435_MI;
extern "C" bool m9435 (t1754 * __this, t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = m7777(__this, L_0, &m7777_MI);
		return L_1;
	}
}
extern MethodInfo m9436_MI;
extern "C" bool m9436 (t1754 * __this, t126 * p0, MethodInfo* method)
{
	t126 * V_0 = {0};
	t152* V_1 = {0};
	int32_t V_2 = 0;
	{
		t126 * L_0 = p0;
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t1754 *)__this))))
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
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7756_MI, L_1);
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
		bool L_4 = m9428(__this, &m9428_MI);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		t126 * L_5 = p0;
		t126 * L_6 = (__this->f10);
		bool L_7 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4473_MI, L_5, L_6);
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
		bool L_15 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4473_MI, L_13, L_14);
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
		bool L_19 = m9428(__this, &m9428_MI);
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
		bool L_25 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4473_MI, L_23, L_24);
		return L_25;
	}
}
extern MethodInfo m9437_MI;
extern TypeInfo* t152_TI_var;
extern "C" t152* m9437 (t1754 * __this, MethodInfo* method)
{
	static bool m9437_init;
	if (!m9437_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9437_init = true;
	}
	t152* V_0 = {0};
	{
		t1780* L_0 = (__this->f24);
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
		t1780* L_1 = (__this->f24);
		V_0 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_1)->max_length)))));
		t1780* L_2 = (__this->f24);
		t152* L_3 = V_0;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5902_MI, L_2, (t121 *)(t121 *)L_3, 0);
		t152* L_4 = V_0;
		return L_4;
	}
}
extern MethodInfo m9438_MI;
extern "C" t126 * m9438 (t1754 * __this, MethodInfo* method)
{
	{
		t1780* L_0 = (__this->f24);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_1, (t2*) &_stringLiteral1998, &m5713_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return __this;
	}
}
extern MethodInfo m9439_MI;
extern "C" bool m9439 (t1754 * __this, MethodInfo* method)
{
	{
		t1780* L_0 = (__this->f24);
		return ((((int32_t)((((t9*)(t1780*)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9440_MI;
extern "C" bool m9440 (t1754 * __this, MethodInfo* method)
{
	typedef bool (*m9440_ftn) (t1754 *);
	static m9440_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9440_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m9441 (t1754 * __this, MethodInfo* method)
{
	{
		t1780* L_0 = (__this->f24);
		return ((((int32_t)((((t9*)(t1780*)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9442_MI;
extern "C" bool m9442 (t1754 * __this, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9441_MI, __this);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1764_TI;
#include "t1764MD.h"

#include "t1578.h"
#include "t1579.h"
extern TypeInfo t1578_TI;
#include "t1578MD.h"
extern MethodInfo m7828_MI;


extern MethodInfo m9443_MI;
extern "C" t1578 * m9443 (t1764 * __this, MethodInfo* method)
{
	t1578 * V_0 = {0};
	{
		int32_t L_0 = (__this->f1);
		t1578 * L_1 = (t1578 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1578_TI));
		m7828(L_1, L_0, &m7828_MI);
		V_0 = L_1;
		t1578 * L_2 = V_0;
		int32_t L_3 = (__this->f2);
		L_2->f1 = L_3;
		t1578 * L_4 = V_0;
		t2* L_5 = (__this->f4);
		L_4->f2 = L_5;
		t1578 * L_6 = V_0;
		t2* L_7 = (__this->f5);
		L_6->f3 = L_7;
		t1578 * L_8 = V_0;
		t126 * L_9 = (__this->f6);
		L_8->f4 = L_9;
		int32_t L_10 = (__this->f0);
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		t1578 * L_11 = V_0;
		L_11->f5 = 0;
		goto IL_005a;
	}

IL_004e:
	{
		t1578 * L_12 = V_0;
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
		t1578 * L_15 = V_0;
		L_15->f6 = 0;
		goto IL_0079;
	}

IL_006c:
	{
		t1578 * L_16 = V_0;
		int32_t L_17 = (__this->f7);
		L_16->f6 = (((int16_t)L_17));
	}

IL_0079:
	{
		t1578 * L_18 = V_0;
		return L_18;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9444 (t1798 * __this, MethodInfo* method)
{
	{
		m5900(__this, (t2*) &_stringLiteral1999, &m5900_MI);
		return;
	}
}
extern MethodInfo m9445_MI;
extern "C" void m9445 (t1798 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5900(__this, L_0, &m5900_MI);
		return;
	}
}
extern MethodInfo m9446_MI;
extern "C" void m9446 (t1798 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11808(__this, L_0, L_1, &m11808_MI);
		return;
	}
}
#include "t1799.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1799_TI;
#include "t1799MD.h"



extern MethodInfo m9447_MI;
extern "C" void m9447 (t1799 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2036.h"
#include "t1800.h"
#include "t878.h"
extern TypeInfo t878_TI;
#include "t2036MD.h"
#include "t878MD.h"
extern Il2CppType t1568_0_0_0;
extern MethodInfo m9461_MI;
extern MethodInfo m9450_MI;
extern MethodInfo m9458_MI;
extern MethodInfo m9457_MI;
extern MethodInfo m9471_MI;
extern MethodInfo m9459_MI;
extern MethodInfo m9449_MI;
extern MethodInfo m11120_MI;
extern MethodInfo m11124_MI;
extern MethodInfo m9465_MI;
extern MethodInfo m9466_MI;
extern MethodInfo m11671_MI;
extern MethodInfo m9464_MI;
extern MethodInfo m9469_MI;
extern MethodInfo m9566_MI;
extern MethodInfo m9468_MI;
extern MethodInfo m9572_MI;
extern MethodInfo m5857_MI;


extern "C" void m9448 (t1345 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1799 * L_0 = (t1799 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1799_TI));
		m9447(L_0, &m9447_MI);
		__this->f1 = L_0;
		return;
	}
}
extern "C" t2* m9449 (t1345 * __this, MethodInfo* method)
{
	typedef t2* (*m9449_ftn) (t1345 *);
	static m9449_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9449_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::get_fullname()");
	return _il2cpp_icall_func(__this);
}
extern "C" t2* m9450 (t1345 * __this, MethodInfo* method)
{
	typedef t2* (*m9450_ftn) (t1345 *);
	static m9450_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9450_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::get_location()");
	return _il2cpp_icall_func(__this);
}
extern "C" t2* m9451 (t1345 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9461_MI, __this);
		return L_0;
	}
}
extern MethodInfo m9452_MI;
extern "C" t2* m9452 (t1345 * __this, MethodInfo* method)
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
		t2* L_2 = m9450(__this, &m9450_MI);
		V_0 = L_2;
		t2* L_3 = V_0;
		return L_3;
	}
}
extern MethodInfo m9453_MI;
extern "C" bool m9453 (t1345 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		bool L_2 = m11606(NULL, __this, L_0, L_1, &m11606_MI);
		return L_2;
	}
}
extern MethodInfo m9454_MI;
extern "C" t158* m9454 (t1345 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_2 = m11604(NULL, __this, L_0, L_1, &m11604_MI);
		return L_2;
	}
}
extern MethodInfo m9455_MI;
extern "C" t58 m9455 (t1345 * __this, t2* p0, int32_t* p1, t1568 ** p2, MethodInfo* method)
{
	typedef t58 (*m9455_ftn) (t1345 *, t2*, int32_t*, t1568 **);
	static m9455_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9455_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m9456_MI;
extern "C" t126 * m9456 (t1345 * __this, t2* p0, bool p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		bool L_1 = p1;
		t126 * L_2 = (t126 *)VirtFuncInvoker3< t126 *, t2*, bool, bool >::Invoke(&m9458_MI, __this, L_0, L_1, 0);
		return L_2;
	}
}
extern "C" t126 * m5772 (t1345 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t126 * L_1 = (t126 *)VirtFuncInvoker3< t126 *, t2*, bool, bool >::Invoke(&m9458_MI, __this, L_0, 0, 0);
		return L_1;
	}
}
extern "C" t126 * m9457 (t1345 * __this, t1568 * p0, t2* p1, bool p2, bool p3, MethodInfo* method)
{
	typedef t126 * (*m9457_ftn) (t1345 *, t1568 *, t2*, bool, bool);
	static m9457_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9457_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3);
}
extern "C" t126 * m9458 (t1345 * __this, t2* p0, bool p1, bool p2, MethodInfo* method)
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
		int32_t L_4 = m2723(L_3, &m2723_MI);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		t563 * L_5 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_5, (t2*) &_stringLiteral2, (t2*) &_stringLiteral2000, &m5719_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0022:
	{
		t2* L_6 = p0;
		bool L_7 = p1;
		bool L_8 = p2;
		t126 * L_9 = m9457(__this, (t1568 *)NULL, L_6, L_7, L_8, &m9457_MI);
		return L_9;
	}
}
extern "C" void m9459 (t9 * __this , t1345 * p0, t1748 * p1, MethodInfo* method)
{
	typedef void (*m9459_ftn) (t1345 *, t1748 *);
	static m9459_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9459_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" t1748 * m9460 (t1345 * __this, MethodInfo* method)
{
	t1748 * V_0 = {0};
	{
		t1748 * L_0 = (t1748 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1748_TI));
		m9471(L_0, &m9471_MI);
		V_0 = L_0;
		t1748 * L_1 = V_0;
		m9459(NULL, __this, L_1, &m9459_MI);
		t1748 * L_2 = V_0;
		return L_2;
	}
}
extern "C" t2* m9461 (t1345 * __this, MethodInfo* method)
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
		t2* L_2 = m9449(__this, &m9449_MI);
		__this->f9 = L_2;
		t2* L_3 = (__this->f9);
		return L_3;
	}
}
extern MethodInfo m9462_MI;
extern "C" t1345 * m9462 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2036 * L_0 = m11120(NULL, &m11120_MI);
		t2* L_1 = p0;
		t1345 * L_2 = m11124(L_0, L_1, &m11124_MI);
		return L_2;
	}
}
extern "C" t1345 * m9463 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t1345 * L_1 = m9465(NULL, L_0, (t1800 *)NULL, &m9465_MI);
		return L_1;
	}
}
extern "C" t1345 * m9464 (t9 * __this , t2* p0, t1800 * p1, MethodInfo* method)
{
	typedef t1345 * (*m9464_ftn) (t2*, t1800 *);
	static m9464_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9464_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::load_with_partial_name(System.String,System.Security.Policy.Evidence)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" t1345 * m9465 (t9 * __this , t2* p0, t1800 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t1800 * L_1 = p1;
		t1345 * L_2 = m9466(NULL, L_0, L_1, 1, &m9466_MI);
		return L_2;
	}
}
extern "C" t1345 * m9466 (t9 * __this , t2* p0, t1800 * p1, bool p2, MethodInfo* method)
{
	{
		bool L_0 = p2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		t1346 * L_1 = (t1346 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1346_TI));
		m11668(L_1, &m11668_MI);
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
		t878 * L_3 = (t878 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t878_TI));
		m11671(L_3, &m11671_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0012:
	{
		t2* L_4 = p0;
		t1800 * L_5 = p1;
		t1345 * L_6 = m9464(NULL, L_4, L_5, &m9464_MI);
		return L_6;
	}
}
extern MethodInfo m9467_MI;
extern "C" t1568 * m9467 (t1345 * __this, t2* p0, MethodInfo* method)
{
	t1750* V_0 = {0};
	t1568 * V_1 = {0};
	t1750* V_2 = {0};
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
		int32_t L_3 = m2723(L_2, &m2723_MI);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_4, (t2*) &_stringLiteral2001, &m2909_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t1750* L_5 = (t1750*)VirtFuncInvoker1< t1750*, bool >::Invoke(&m9469_MI, __this, 1);
		V_0 = L_5;
		t1750* L_6 = V_0;
		V_2 = L_6;
		V_3 = 0;
		goto IL_0047;
	}

IL_002f:
	{
		t1750* L_7 = V_2;
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_1 = (*(t1568 **)(t1568 **)SZArrayLdElema(L_7, L_9));
		t1568 * L_10 = V_1;
		t2* L_11 = m9566(L_10, &m9566_MI);
		t2* L_12 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_13 = m331(NULL, L_11, L_12, &m331_MI);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		t1568 * L_14 = V_1;
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
		t1750* L_17 = V_2;
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((t121 *)L_17)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (t1568 *)NULL;
	}
}
extern "C" t1750* m9468 (t1345 * __this, MethodInfo* method)
{
	typedef t1750* (*m9468_ftn) (t1345 *);
	static m9468_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9468_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetModulesInternal()");
	return _il2cpp_icall_func(__this);
}
extern TypeInfo* t1750_TI_var;
extern "C" t1750* m9469 (t1345 * __this, bool p0, MethodInfo* method)
{
	static bool m9469_init;
	if (!m9469_init)
	{
		t1750_TI_var = il2cpp_codegen_class_from_type(&t1750_0_0_0);
		m9469_init = true;
	}
	t1750* V_0 = {0};
	t1170 * V_1 = {0};
	t1568 * V_2 = {0};
	t1750* V_3 = {0};
	int32_t V_4 = 0;
	{
		t1750* L_0 = (t1750*)VirtFuncInvoker0< t1750* >::Invoke(&m9468_MI, __this);
		V_0 = L_0;
		bool L_1 = p0;
		if (L_1)
		{
			goto IL_0052;
		}
	}
	{
		t1750* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_3 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5881(L_3, (((int32_t)(((t121 *)L_2)->max_length))), &m5881_MI);
		V_1 = L_3;
		t1750* L_4 = V_0;
		V_3 = L_4;
		V_4 = 0;
		goto IL_0035;
	}

IL_001a:
	{
		t1750* L_5 = V_3;
		int32_t L_6 = V_4;
		int32_t L_7 = L_6;
		V_2 = (*(t1568 **)(t1568 **)SZArrayLdElema(L_5, L_7));
		t1568 * L_8 = V_2;
		bool L_9 = m9572(L_8, &m9572_MI);
		if (L_9)
		{
			goto IL_002f;
		}
	}
	{
		t1170 * L_10 = V_1;
		t1568 * L_11 = V_2;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5737_MI, L_10, L_11);
	}

IL_002f:
	{
		int32_t L_12 = V_4;
		V_4 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_13 = V_4;
		t1750* L_14 = V_3;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((t121 *)L_14)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		t1170 * L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_16 = m329(NULL, LoadTypeToken(&t1568_0_0_0), &m329_MI);
		t121 * L_17 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5857_MI, L_15, L_16);
		return ((t1750*)Castclass(L_17, t1750_TI_var));
	}

IL_0052:
	{
		t1750* L_18 = V_0;
		return L_18;
	}
}
extern MethodInfo m9470_MI;
extern "C" t1345 * m9470 (t9 * __this , MethodInfo* method)
{
	typedef t1345 * (*m9470_ftn) ();
	static m9470_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9470_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetExecutingAssembly()");
	return _il2cpp_icall_func();
}
#include "t674.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t674_TI;
#include "t674MD.h"

#include "t725MD.h"
extern MethodInfo m4264_MI;


extern MethodInfo m3125_MI;
extern "C" void m3125 (t674 * __this, t2* p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t673.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t673_TI;
#include "t673MD.h"



extern MethodInfo m3124_MI;
extern "C" void m3124 (t673 * __this, t2* p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t676.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t676_TI;
#include "t676MD.h"



extern MethodInfo m3127_MI;
extern "C" void m3127 (t676 * __this, t2* p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1147.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1147_TI;
#include "t1147MD.h"



extern MethodInfo m4796_MI;
extern "C" void m4796 (t1147 * __this, t2* p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1151.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1151_TI;
#include "t1151MD.h"



extern MethodInfo m4800_MI;
extern "C" void m4800 (t1151 * __this, bool p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		bool L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t672.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t672_TI;
#include "t672MD.h"



extern MethodInfo m3123_MI;
extern "C" void m3123 (t672 * __this, t2* p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		t2* L_0 = p0;
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



extern MethodInfo m3130_MI;
extern "C" void m3130 (t679 * __this, t2* p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral470, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2* L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
#include "t1145.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1145_TI;
#include "t1145MD.h"



extern MethodInfo m4794_MI;
extern "C" void m4794 (t1145 * __this, t2* p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1150.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1150_TI;
#include "t1150MD.h"



extern MethodInfo m4799_MI;
extern "C" void m4799 (t1150 * __this, t2* p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1217.h"
#include "t1693.h"
#include "t1692.h"
#include "t2033.h"
#include "t1368.h"
#include "t1366.h"
extern TypeInfo t1353_TI;
extern TypeInfo t1802_TI;
extern TypeInfo t2033_TI;
extern TypeInfo t1692_TI;
extern TypeInfo t1693_TI;
extern TypeInfo t1803_TI;
#include "t1629MD.h"
#include "t2033MD.h"
#include "t1366MD.h"
#include "t1368MD.h"
extern Il2CppType t1196_0_0_0;
extern Il2CppType t1692_0_0_0;
extern Il2CppType t1802_0_0_0;
extern Il2CppType t1693_0_0_0;
extern Il2CppType t1803_0_0_0;
extern MethodInfo m1169_MI;
extern MethodInfo m8653_MI;
extern MethodInfo m9484_MI;
extern MethodInfo m11896_MI;
extern MethodInfo m11886_MI;
extern MethodInfo m11887_MI;
extern MethodInfo m11885_MI;
extern MethodInfo m11888_MI;
extern MethodInfo m8053_MI;
extern MethodInfo m8052_MI;
extern MethodInfo m5731_MI;
extern MethodInfo m5742_MI;
extern MethodInfo m8645_MI;
extern MethodInfo m9477_MI;
extern MethodInfo m673_MI;
extern MethodInfo m9483_MI;
extern MethodInfo m10736_MI;
extern MethodInfo m9485_MI;
extern MethodInfo m5895_MI;
extern MethodInfo m5896_MI;
extern MethodInfo m6935_MI;
extern MethodInfo m5743_MI;
extern MethodInfo m5730_MI;
extern MethodInfo m9480_MI;


extern "C" void m9471 (t1748 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		__this->f12 = 1;
		return;
	}
}
extern MethodInfo m9472_MI;
extern TypeInfo* t730_TI_var;
extern "C" void m9472 (t1748 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	static bool m9472_init;
	if (!m9472_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m9472_init = true;
	}
	int32_t V_0 = 0;
	{
		m336(__this, &m336_MI);
		t1100 * L_0 = p0;
		t2* L_1 = m5740(L_0, (t2*) &_stringLiteral2008, &m5740_MI);
		__this->f0 = L_1;
		t1100 * L_2 = p0;
		t2* L_3 = m5740(L_2, (t2*) &_stringLiteral2009, &m5740_MI);
		__this->f1 = L_3;
		t1100 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t1196_0_0_0), &m329_MI);
		t9 * L_6 = m5731(L_4, (t2*) &_stringLiteral2010, L_5, &m5731_MI);
		__this->f13 = ((t1196 *)Castclass(L_6, InitializedTypeInfo(&t1196_TI)));
		t1100 * L_7 = p0;
		t126 * L_8 = m329(NULL, LoadTypeToken(&t730_0_0_0), &m329_MI);
		t9 * L_9 = m5731(L_7, (t2*) &_stringLiteral2011, L_8, &m5731_MI);
		__this->f10 = ((t730*)Castclass(L_9, t730_TI_var));
		t1100 * L_10 = p0;
		t126 * L_11 = m329(NULL, LoadTypeToken(&t730_0_0_0), &m329_MI);
		t9 * L_12 = m5731(L_10, (t2*) &_stringLiteral2012, L_11, &m5731_MI);
		__this->f11 = ((t730*)Castclass(L_12, t730_TI_var));
		t1100 * L_13 = p0;
		t126 * L_14 = m329(NULL, LoadTypeToken(&t1692_0_0_0), &m329_MI);
		t9 * L_15 = m5731(L_13, (t2*) &_stringLiteral2013, L_14, &m5731_MI);
		__this->f8 = ((*(int32_t*)((int32_t*)UnBox (L_15, InitializedTypeInfo(&t125_TI)))));
		t1100 * L_16 = p0;
		t126 * L_17 = m329(NULL, LoadTypeToken(&t1802_0_0_0), &m329_MI);
		t9 * L_18 = m5731(L_16, (t2*) &_stringLiteral2014, L_17, &m5731_MI);
		__this->f9 = ((t1802 *)Castclass(L_18, InitializedTypeInfo(&t1802_TI)));
		t1100 * L_19 = p0;
		t126 * L_20 = m329(NULL, LoadTypeToken(&t1693_0_0_0), &m329_MI);
		t9 * L_21 = m5731(L_19, (t2*) &_stringLiteral2015, L_20, &m5731_MI);
		__this->f12 = ((*(int32_t*)((int32_t*)UnBox (L_21, InitializedTypeInfo(&t125_TI)))));
		t1100 * L_22 = p0;
		t126 * L_23 = m329(NULL, LoadTypeToken(&t1803_0_0_0), &m329_MI);
		t9 * L_24 = m5731(L_22, (t2*) &_stringLiteral2016, L_23, &m5731_MI);
		__this->f7 = ((*(int32_t*)((int32_t*)UnBox (L_24, InitializedTypeInfo(&t125_TI)))));
		t1100 * L_25 = p0;
		int32_t L_26 = m5742(L_25, (t2*) &_stringLiteral2017, &m5742_MI);
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)(-1))))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_28 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_29 = (t901 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t901_TI));
		m8645(L_29, L_28, &m8645_MI);
		__this->f6 = L_29;
	}

IL_0124:
	{
		return;
	}
}
extern "C" t2* m9473 (t1748 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9474_MI;
extern "C" void m9474 (t1748 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t901 * m9475 (t1748 * __this, MethodInfo* method)
{
	{
		t901 * L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" int32_t m9476 (t1748 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" t2* m9477 (t1748 * __this, MethodInfo* method)
{
	t322 * V_0 = {0};
	t730* V_1 = {0};
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
		t322 * L_2 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m1165(L_2, &m1165_MI);
		V_0 = L_2;
		t322 * L_3 = V_0;
		t2* L_4 = (__this->f0);
		m1169(L_3, L_4, &m1169_MI);
		t1196 * L_5 = m9479(__this, &m9479_MI);
		bool L_6 = m11897(NULL, L_5, (t1196 *)NULL, &m11897_MI);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		t322 * L_7 = V_0;
		m1169(L_7, (t2*) &_stringLiteral2002, &m1169_MI);
		t322 * L_8 = V_0;
		t1196 * L_9 = m9479(__this, &m9479_MI);
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11894_MI, L_9);
		m1169(L_8, L_10, &m1169_MI);
	}

IL_004d:
	{
		t901 * L_11 = (__this->f6);
		if (!L_11)
		{
			goto IL_0098;
		}
	}
	{
		t322 * L_12 = V_0;
		m1169(L_12, (t2*) &_stringLiteral2003, &m1169_MI);
		t901 * L_13 = (__this->f6);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8653_MI, L_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_15 = m4358(NULL, &m4358_MI);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8653_MI, L_15);
		if ((!(((uint32_t)L_14) == ((uint32_t)L_16))))
		{
			goto IL_0086;
		}
	}
	{
		t322 * L_17 = V_0;
		m1169(L_17, (t2*) &_stringLiteral2004, &m1169_MI);
		goto IL_0098;
	}

IL_0086:
	{
		t322 * L_18 = V_0;
		t901 * L_19 = (__this->f6);
		t2* L_20 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8654_MI, L_19);
		m1169(L_18, L_20, &m1169_MI);
	}

IL_0098:
	{
		t730* L_21 = m9484(__this, &m9484_MI);
		V_1 = L_21;
		t730* L_22 = V_1;
		if (!L_22)
		{
			goto IL_00e7;
		}
	}
	{
		t730* L_23 = V_1;
		if ((((int32_t)(((t121 *)L_23)->max_length))))
		{
			goto IL_00b5;
		}
	}
	{
		t322 * L_24 = V_0;
		m1169(L_24, (t2*) &_stringLiteral2005, &m1169_MI);
		goto IL_00e7;
	}

IL_00b5:
	{
		t322 * L_25 = V_0;
		m1169(L_25, (t2*) &_stringLiteral2006, &m1169_MI);
		V_2 = 0;
		goto IL_00e1;
	}

IL_00c5:
	{
		t322 * L_26 = V_0;
		t730* L_27 = V_1;
		int32_t L_28 = V_2;
		t2* L_29 = m5820(((uint8_t*)(uint8_t*)SZArrayLdElema(L_27, L_28)), (t2*) &_stringLiteral596, &m5820_MI);
		m1169(L_26, L_29, &m1169_MI);
		int32_t L_30 = V_2;
		V_2 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00e1:
	{
		int32_t L_31 = V_2;
		t730* L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((t121 *)L_32)->max_length))))))
		{
			goto IL_00c5;
		}
	}

IL_00e7:
	{
		int32_t L_33 = m9476(__this, &m9476_MI);
		if (!((int32_t)((int32_t)L_33&(int32_t)((int32_t)256))))
		{
			goto IL_0101;
		}
	}
	{
		t322 * L_34 = V_0;
		m1169(L_34, (t2*) &_stringLiteral2007, &m1169_MI);
	}

IL_0101:
	{
		t322 * L_35 = V_0;
		t2* L_36 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1171_MI, L_35);
		return L_36;
	}
}
extern "C" t1802 * m9478 (t1748 * __this, MethodInfo* method)
{
	{
		t1802 * L_0 = (__this->f9);
		return L_0;
	}
}
extern "C" t1196 * m9479 (t1748 * __this, MethodInfo* method)
{
	{
		t1196 * L_0 = (__this->f13);
		return L_0;
	}
}
extern "C" void m9480 (t1748 * __this, t1196 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t1196 * L_0 = p0;
		__this->f13 = L_0;
		t1196 * L_1 = p0;
		bool L_2 = m11896(NULL, L_1, (t1196 *)NULL, &m11896_MI);
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
		t1196 * L_9 = p0;
		int32_t L_10 = m11886(L_9, &m11886_MI);
		__this->f2 = L_10;
		t1196 * L_11 = p0;
		int32_t L_12 = m11887(L_11, &m11887_MI);
		__this->f3 = L_12;
		t1196 * L_13 = p0;
		int32_t L_14 = m11885(L_13, &m11885_MI);
		__this->f4 = L_14;
		t1196 * L_15 = p0;
		int32_t L_16 = m11888(L_15, &m11888_MI);
		__this->f5 = L_16;
	}

IL_0064:
	{
		return;
	}
}
extern MethodInfo m9481_MI;
extern "C" t2* m9481 (t1748 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* G_B3_0 = {0};
	{
		t2* L_0 = m9477(__this, &m9477_MI);
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
extern "C" t730* m9482 (t1748 * __this, MethodInfo* method)
{
	{
		t730* L_0 = (__this->f10);
		return L_0;
	}
}
extern "C" bool m9483 (t1748 * __this, MethodInfo* method)
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
		t730* L_0 = (__this->f10);
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
		t730* L_2 = (__this->f10);
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = L_4;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_5))));
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		t730* L_7 = (__this->f10);
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
		t730* L_9 = (__this->f10);
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
		t730* L_14 = (__this->f10);
		if ((((int32_t)(((int32_t)(((t121 *)L_14)->max_length)))) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0078;
		}
	}
	{
		t730* L_15 = (__this->f10);
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
			t730* L_17 = (__this->f10);
			m8053(NULL, L_17, ((int32_t)12), &m8053_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1353_TI, e.ex->object.klass))
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
			t730* L_18 = (__this->f10);
			m8052(NULL, L_18, &m8052_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1353_TI, e.ex->object.klass))
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
extern TypeInfo* t730_TI_var;
extern "C" t730* m9484 (t1748 * __this, MethodInfo* method)
{
	static bool m9484_init;
	if (!m9484_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m9484_init = true;
	}
	{
		t730* L_0 = (__this->f11);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t730* L_1 = (__this->f11);
		return L_1;
	}

IL_000f:
	{
		t730* L_2 = (__this->f10);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		return (t730*)NULL;
	}

IL_0019:
	{
		t730* L_3 = (__this->f10);
		if ((((int32_t)(((t121 *)L_3)->max_length))))
		{
			goto IL_002a;
		}
	}
	{
		return ((t730*)SZArrayNew(t730_TI_var, 0));
	}

IL_002a:
	{
		bool L_4 = m9483(__this, &m9483_MI);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		t2033 * L_5 = (t2033 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2033_TI));
		m10736(L_5, (t2*) &_stringLiteral2018, &m10736_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003d:
	{
		t730* L_6 = m9485(__this, &m9485_MI);
		return L_6;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" t730* m9485 (t1748 * __this, MethodInfo* method)
{
	static bool m9485_init;
	if (!m9485_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m9485_init = true;
	}
	t1368 * V_0 = {0};
	t730* V_1 = {0};
	t730* V_2 = {0};
	{
		t1366 * L_0 = m5895(NULL, &m5895_MI);
		V_0 = L_0;
		t1368 * L_1 = V_0;
		t730* L_2 = (__this->f10);
		t730* L_3 = m5896(L_1, L_2, &m5896_MI);
		V_1 = L_3;
		V_2 = ((t730*)SZArrayNew(t730_TI_var, 8));
		t730* L_4 = V_1;
		t730* L_5 = V_1;
		t730* L_6 = V_2;
		m7710(NULL, (t121 *)(t121 *)L_4, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_5)->max_length)))-(int32_t)8)), (t121 *)(t121 *)L_6, 0, 8, &m7710_MI);
		t730* L_7 = V_2;
		m6935(NULL, (t121 *)(t121 *)L_7, 0, 8, &m6935_MI);
		t730* L_8 = V_2;
		return L_8;
	}
}
extern "C" void m9486 (t1748 * __this, t730* p0, MethodInfo* method)
{
	{
		t730* L_0 = p0;
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
		t730* L_3 = p0;
		__this->f10 = L_3;
		return;
	}
}
extern "C" void m9487 (t1748 * __this, t730* p0, MethodInfo* method)
{
	{
		t730* L_0 = p0;
		__this->f11 = L_0;
		return;
	}
}
extern MethodInfo m9488_MI;
extern "C" void m9488 (t1748 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	t2* G_B4_0 = {0};
	t1100 * G_B4_1 = {0};
	t2* G_B3_0 = {0};
	t1100 * G_B3_1 = {0};
	int32_t G_B5_0 = 0;
	t2* G_B5_1 = {0};
	t1100 * G_B5_2 = {0};
	{
		t1100 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral417, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1100 * L_2 = p0;
		t2* L_3 = (__this->f0);
		m5743(L_2, (t2*) &_stringLiteral2008, L_3, &m5743_MI);
		t1100 * L_4 = p0;
		t730* L_5 = (__this->f10);
		m5743(L_4, (t2*) &_stringLiteral2011, (t9 *)(t9 *)L_5, &m5743_MI);
		t1100 * L_6 = p0;
		t730* L_7 = (__this->f11);
		m5743(L_6, (t2*) &_stringLiteral2012, (t9 *)(t9 *)L_7, &m5743_MI);
		t1100 * L_8 = p0;
		t901 * L_9 = (__this->f6);
		G_B3_0 = (t2*) &_stringLiteral2017;
		G_B3_1 = L_8;
		if (!L_9)
		{
			G_B4_0 = (t2*) &_stringLiteral2017;
			G_B4_1 = L_8;
			goto IL_005c;
		}
	}
	{
		t901 * L_10 = (__this->f6);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8653_MI, L_10);
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
		m5730(G_B5_2, G_B5_1, G_B5_0, &m5730_MI);
		t1100 * L_12 = p0;
		t2* L_13 = (__this->f1);
		m5743(L_12, (t2*) &_stringLiteral2009, L_13, &m5743_MI);
		t1100 * L_14 = p0;
		t1196 * L_15 = m9479(__this, &m9479_MI);
		m5743(L_14, (t2*) &_stringLiteral2010, L_15, &m5743_MI);
		t1100 * L_16 = p0;
		int32_t L_17 = (__this->f8);
		int32_t L_18 = L_17;
		t9 * L_19 = Box(InitializedTypeInfo(&t1692_TI), &L_18);
		m5743(L_16, (t2*) &_stringLiteral2013, L_19, &m5743_MI);
		t1100 * L_20 = p0;
		int32_t L_21 = 0;
		t9 * L_22 = Box(InitializedTypeInfo(&t1692_TI), &L_21);
		m5743(L_20, (t2*) &_stringLiteral2019, L_22, &m5743_MI);
		t1100 * L_23 = p0;
		t1802 * L_24 = (__this->f9);
		m5743(L_23, (t2*) &_stringLiteral2014, L_24, &m5743_MI);
		t1100 * L_25 = p0;
		int32_t L_26 = (__this->f12);
		int32_t L_27 = L_26;
		t9 * L_28 = Box(InitializedTypeInfo(&t1693_TI), &L_27);
		m5743(L_25, (t2*) &_stringLiteral2015, L_28, &m5743_MI);
		t1100 * L_29 = p0;
		int32_t L_30 = (__this->f7);
		int32_t L_31 = L_30;
		t9 * L_32 = Box(InitializedTypeInfo(&t1803_TI), &L_31);
		m5743(L_29, (t2*) &_stringLiteral2016, L_32, &m5743_MI);
		t1100 * L_33 = p0;
		m5743(L_33, (t2*) &_stringLiteral2020, NULL, &m5743_MI);
		return;
	}
}
extern MethodInfo m9489_MI;
extern "C" void m9489 (t1748 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1196 * L_0 = (__this->f13);
		m9480(__this, L_0, &m9480_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1803MD.h"



#include "t675.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t675_TI;
#include "t675MD.h"



extern MethodInfo m3126_MI;
extern "C" void m3126 (t675 * __this, t2* p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t678.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t678_TI;
#include "t678MD.h"



extern MethodInfo m3129_MI;
extern "C" void m3129 (t678 * __this, t2* p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
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



extern MethodInfo m3131_MI;
extern "C" void m3131 (t680 * __this, t2* p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1805.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1805_TI;
#include "t1805MD.h"

#include "t156.h"
#include "t123.h"
#include "t1556.h"
extern TypeInfo t156_TI;
extern TypeInfo t123_TI;
extern TypeInfo t891_TI;
#include "t891MD.h"
extern Il2CppType t303_0_0_0;
extern Il2CppType t156_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t58_0_0_0;
extern Il2CppType t2176_0_0_0;
extern Il2CppType t337_0_0_0;
extern MethodInfo m9505_MI;
extern MethodInfo m2510_MI;
extern MethodInfo m9499_MI;
extern MethodInfo m9492_MI;
extern MethodInfo m4423_MI;
extern MethodInfo m9706_MI;
extern MethodInfo m4384_MI;
extern MethodInfo m11967_MI;
extern MethodInfo m9493_MI;
extern MethodInfo m7751_MI;
extern MethodInfo m7778_MI;
extern MethodInfo m9496_MI;
extern MethodInfo m7639_MI;
extern MethodInfo m7758_MI;
extern MethodInfo m11375_MI;
extern MethodInfo m7631_MI;
extern MethodInfo m7805_MI;
extern MethodInfo m7804_MI;
extern MethodInfo m7800_MI;
extern MethodInfo m7772_MI;
extern MethodInfo m7067_MI;
extern MethodInfo m9497_MI;
extern MethodInfo m9500_MI;
extern MethodInfo m9549_MI;
extern MethodInfo m9501_MI;
extern MethodInfo m7807_MI;
extern MethodInfo m12021_MI;
extern MethodInfo m4399_MI;
extern MethodInfo m9503_MI;
extern MethodInfo m9509_MI;
extern MethodInfo m9504_MI;
struct t121;
struct t121;
extern "C" int32_t m12023_gshared (t9 * __this , t158* p0, t9 * p1, MethodInfo* method);
#define m12023(__this , p0, p1, method) (( int32_t (*) (t9 * , t158*, t9 *, MethodInfo*))m12023_gshared)(__this , p0, p1, method)
#define m12022(__this , p0, p1, method) (( int32_t (*) (t9 * , t152*, t126 *, MethodInfo*))m12023_gshared)(__this , p0, p1, method)
extern Il2CppGenericMethod m12022_GM;


extern MethodInfo m9490_MI;
extern "C" void m9490 (t1805 * __this, MethodInfo* method)
{
	{
		m9505(__this, &m9505_MI);
		return;
	}
}
extern MethodInfo m9491_MI;
extern TypeInfo* t152_TI_var;
extern "C" t914 * m9491 (t1805 * __this, int32_t p0, t1806* p1, t158** p2, t935* p3, t901 * p4, t221* p5, t9 ** p6, MethodInfo* method)
{
	static bool m9491_init;
	if (!m9491_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9491_init = true;
	}
	t152* V_0 = {0};
	int32_t V_1 = 0;
	t914 * V_2 = {0};
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
		t126 * L_11 = m2510((*(t9 **)(t9 **)SZArrayLdElema((*((t158**)L_8)), L_10)), &m2510_MI);
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
		t1806* L_16 = p1;
		t152* L_17 = V_0;
		t935* L_18 = p3;
		t914 * L_19 = m9499(__this, L_15, L_16, L_17, L_18, 1, &m9499_MI);
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
		t914 * L_24 = V_2;
		m9492(__this, L_22, L_23, L_24, &m9492_MI);
	}

IL_0056:
	{
		t914 * L_25 = V_2;
		return L_25;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m9492 (t1805 * __this, t221* p0, t158** p1, t914 * p2, MethodInfo* method)
{
	static bool m9492_init;
	if (!m9492_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9492_init = true;
	}
	t158* V_0 = {0};
	t928* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t158** L_0 = p1;
		V_0 = ((t158*)SZArrayNew(t158_TI_var, (((int32_t)(((t121 *)(*((t158**)L_0)))->max_length)))));
		t158** L_1 = p1;
		t158* L_2 = V_0;
		t158** L_3 = p1;
		m5940(NULL, (t121 *)(t121 *)(*((t158**)L_1)), (t121 *)(t121 *)L_2, (((int32_t)(((t121 *)(*((t158**)L_3)))->max_length))), &m5940_MI);
		t914 * L_4 = p2;
		t928* L_5 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4423_MI, L_4);
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
		t928* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9706_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_9, L_11)));
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
		t928* L_21 = V_1;
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
		m5940(NULL, (t121 *)(t121 *)L_25, (t121 *)(t121 *)(*((t158**)L_26)), (((int32_t)(((t121 *)(*((t158**)L_27)))->max_length))), &m5940_MI);
		return;
	}
}
extern "C" bool m9493 (t9 * __this , t126 * p0, t126 * p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4384_MI, L_0);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		t126 * L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4384_MI, L_2);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		t126 * L_4 = p0;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11967_MI, L_4);
		t126 * L_6 = p1;
		t126 * L_7 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11967_MI, L_6);
		bool L_8 = m9493(NULL, L_5, L_7, &m9493_MI);
		return L_8;
	}

IL_0022:
	{
		t126 * L_9 = p1;
		t126 * L_10 = p0;
		bool L_11 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4473_MI, L_9, L_10);
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
extern MethodInfo m9494_MI;
extern "C" t9 * m9494 (t1805 * __this, t9 * p0, t126 * p1, t901 * p2, MethodInfo* method)
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
		t126 * L_2 = m2510(L_1, &m2510_MI);
		V_0 = L_2;
		t126 * L_3 = p1;
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7751_MI, L_3);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		t126 * L_5 = p1;
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11967_MI, L_5);
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
		bool L_11 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m7778_MI, L_9, L_10);
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
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4384_MI, L_13);
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		t126 * L_15 = p1;
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4384_MI, L_15);
		if (!L_16)
		{
			goto IL_0052;
		}
	}
	{
		t126 * L_17 = V_0;
		t126 * L_18 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11967_MI, L_17);
		t126 * L_19 = p1;
		t126 * L_20 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11967_MI, L_19);
		bool L_21 = m9493(NULL, L_18, L_20, &m9493_MI);
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
		bool L_25 = m9496(NULL, L_23, L_24, &m9496_MI);
		if (!L_25)
		{
			goto IL_00ce;
		}
	}
	{
		t126 * L_26 = p1;
		bool L_27 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, L_26);
		if (!L_27)
		{
			goto IL_006e;
		}
	}
	{
		t126 * L_28 = p1;
		t9 * L_29 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t8_TI));
		t9 * L_30 = m7639(NULL, L_28, L_29, &m7639_MI);
		return L_30;
	}

IL_006e:
	{
		t126 * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_32 = m329(NULL, LoadTypeToken(&t303_0_0_0), &m329_MI);
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
		double L_36 = (((double)((*(uint16_t*)((uint16_t*)UnBox (L_35, InitializedTypeInfo(&t303_TI)))))));
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
		float L_41 = (((float)((*(uint16_t*)((uint16_t*)UnBox (L_40, InitializedTypeInfo(&t303_TI)))))));
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
		bool L_46 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7758_MI, L_45);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t9 * L_50 = m11375(NULL, L_48, L_49, &m11375_MI);
		return L_50;
	}

IL_00ce:
	{
		return NULL;
	}
}
extern MethodInfo m9495_MI;
extern "C" void m9495 (t1805 * __this, t158** p0, t9 * p1, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" bool m9496 (t9 * __this , t126 * p0, t126 * p1, MethodInfo* method)
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
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7751_MI, L_3);
		t126 * L_5 = p0;
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7751_MI, L_5);
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
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7756_MI, L_7);
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		t126 * L_9 = p1;
		t126 * L_10 = p0;
		bool L_11 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4473_MI, L_9, L_10);
		return L_11;
	}

IL_002b:
	{
		t126 * L_12 = p1;
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, L_12);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		t126 * L_14 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t8_TI));
		t126 * L_15 = m7631(NULL, L_14, &m7631_MI);
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
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7805_MI, L_18);
		if (!L_19)
		{
			goto IL_006a;
		}
	}
	{
		t126 * L_20 = p1;
		t126 * L_21 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m7804_MI, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_22 = m329(NULL, LoadTypeToken(&t2176_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_21) == ((t9*)(t126 *)L_22))))
		{
			goto IL_006a;
		}
	}
	{
		t126 * L_23 = p1;
		t152* L_24 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m7800_MI, L_23);
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
		int32_t L_28 = m7772(NULL, L_27, &m7772_MI);
		V_0 = L_28;
		t126 * L_29 = p1;
		int32_t L_30 = m7772(NULL, L_29, &m7772_MI);
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
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, L_41);
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
		bool L_50 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, L_49);
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
		bool L_58 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, L_57);
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
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, L_65);
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
		bool L_74 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, L_73);
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
		bool L_82 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, L_81);
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
		bool L_91 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, L_90);
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
		bool L_100 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7761_MI, L_99);
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
		bool L_102 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7758_MI, L_101);
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
		bool L_107 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4473_MI, L_105, L_106);
		return L_107;
	}
}
extern "C" bool m9497 (t9 * __this , t152* p0, t928* p1, bool p2, MethodInfo* method)
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
		t928* L_3 = p1;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_3, L_5)));
		bool L_7 = m9496(NULL, (*(t126 **)(t126 **)SZArrayLdElema(L_0, L_2)), L_6, &m9496_MI);
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
		t928* L_10 = p1;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t126 * L_13 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_10, L_12)));
		V_2 = L_13;
		t126 * L_14 = V_2;
		bool L_15 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7751_MI, L_14);
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
		t126 * L_20 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11967_MI, L_19);
		bool L_21 = m9496(NULL, (*(t126 **)(t126 **)SZArrayLdElema(L_16, L_18)), L_20, &m9496_MI);
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
extern MethodInfo m9498_MI;
extern "C" t914 * m9498 (t1805 * __this, int32_t p0, t1806* p1, t152* p2, t935* p3, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t1806* L_1 = p1;
		t152* L_2 = p2;
		t935* L_3 = p3;
		t914 * L_4 = m9499(__this, L_0, L_1, L_2, L_3, 0, &m9499_MI);
		return L_4;
	}
}
extern "C" t914 * m9499 (t1805 * __this, int32_t p0, t1806* p1, t152* p2, t935* p3, bool p4, MethodInfo* method)
{
	t914 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t928* V_3 = {0};
	bool V_4 = false;
	t126 * V_5 = {0};
	t928* V_6 = {0};
	t914 * V_7 = {0};
	t928* V_8 = {0};
	{
		t1806* L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1245, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		V_1 = 0;
		goto IL_0050;
	}

IL_0012:
	{
		t1806* L_2 = p1;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		V_0 = (*(t914 **)(t914 **)SZArrayLdElema(L_2, L_4));
		t914 * L_5 = V_0;
		t928* L_6 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4423_MI, L_5);
		V_3 = L_6;
		t928* L_7 = V_3;
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
		t928* L_12 = V_3;
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		t126 * L_15 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_12, L_14)));
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
		t914 * L_21 = V_0;
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
		t1806* L_24 = p1;
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
		t1806* L_25 = p1;
		int32_t L_26 = V_1;
		int32_t L_27 = L_26;
		V_0 = (*(t914 **)(t914 **)SZArrayLdElema(L_25, L_27));
		t914 * L_28 = V_0;
		t928* L_29 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4423_MI, L_28);
		V_6 = L_29;
		t928* L_30 = V_6;
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
		t928* L_32 = V_6;
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
		t928* L_33 = V_6;
		t928* L_34 = V_6;
		int32_t L_35 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_34)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_36 = m329(NULL, LoadTypeToken(&t337_0_0_0), &m329_MI);
		bool L_37 = m7067(NULL, (*(t924 **)(t924 **)SZArrayLdElema(L_33, L_35)), L_36, &m7067_MI);
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
		t928* L_39 = V_6;
		t928* L_40 = V_6;
		int32_t L_41 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_40)->max_length)))-(int32_t)1));
		t126 * L_42 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_39, L_41)));
		t126 * L_43 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11967_MI, L_42);
		V_5 = L_43;
		V_2 = 0;
		goto IL_00f0;
	}

IL_00c1:
	{
		int32_t L_44 = V_2;
		t928* L_45 = V_6;
		if ((((int32_t)L_44) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_45)->max_length)))-(int32_t)1)))))
		{
			goto IL_00da;
		}
	}
	{
		t152* L_46 = p2;
		int32_t L_47 = V_2;
		int32_t L_48 = L_47;
		t928* L_49 = V_6;
		int32_t L_50 = V_2;
		int32_t L_51 = L_50;
		t126 * L_52 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_49, L_51)));
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
		t928* L_54 = V_6;
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
		t914 * L_64 = V_0;
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
		t1806* L_67 = p1;
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
		return (t914 *)NULL;
	}

IL_0116:
	{
		V_7 = (t914 *)NULL;
		V_1 = 0;
		goto IL_015b;
	}

IL_011d:
	{
		t1806* L_69 = p1;
		int32_t L_70 = V_1;
		int32_t L_71 = L_70;
		V_0 = (*(t914 **)(t914 **)SZArrayLdElema(L_69, L_71));
		t914 * L_72 = V_0;
		t928* L_73 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4423_MI, L_72);
		V_8 = L_73;
		t928* L_74 = V_8;
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
		t928* L_77 = V_8;
		bool L_78 = p4;
		bool L_79 = m9497(NULL, L_76, L_77, L_78, &m9497_MI);
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
		t914 * L_80 = V_7;
		if (!L_80)
		{
			goto IL_0154;
		}
	}
	{
		t914 * L_81 = V_7;
		t914 * L_82 = V_0;
		t152* L_83 = p2;
		t914 * L_84 = m9500(__this, L_81, L_82, L_83, &m9500_MI);
		V_7 = L_84;
		goto IL_0157;
	}

IL_0154:
	{
		t914 * L_85 = V_0;
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
		t1806* L_88 = p1;
		if ((((int32_t)L_87) < ((int32_t)(((int32_t)(((t121 *)L_88)->max_length))))))
		{
			goto IL_011d;
		}
	}
	{
		t914 * L_89 = V_7;
		return L_89;
	}
}
extern "C" t914 * m9500 (t1805 * __this, t914 * p0, t914 * p1, t152* p2, MethodInfo* method)
{
	t928* V_0 = {0};
	t928* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t126 * V_5 = {0};
	t126 * V_6 = {0};
	bool V_7 = false;
	bool V_8 = false;
	t914 * G_B19_0 = {0};
	{
		t914 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9549_MI, L_0);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		t914 * L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9549_MI, L_2);
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		t914 * L_4 = p1;
		return L_4;
	}

IL_0012:
	{
		t914 * L_5 = p1;
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9549_MI, L_5);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		t914 * L_7 = p0;
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9549_MI, L_7);
		if (L_8)
		{
			goto IL_0024;
		}
	}
	{
		t914 * L_9 = p0;
		return L_9;
	}

IL_0024:
	{
		t914 * L_10 = p0;
		t928* L_11 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4423_MI, L_10);
		V_0 = L_11;
		t914 * L_12 = p1;
		t928* L_13 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4423_MI, L_12);
		V_1 = L_13;
		V_2 = 0;
		V_3 = 0;
		goto IL_006d;
	}

IL_0038:
	{
		t928* L_14 = V_0;
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		t126 * L_17 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_14, L_16)));
		t928* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		t126 * L_21 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_18, L_20)));
		int32_t L_22 = m9501(__this, L_17, L_21, &m9501_MI);
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
		t1798 * L_27 = (t1798 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1798_TI));
		m9444(L_27, &m9444_MI);
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
		t928* L_32 = V_0;
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
		t914 * L_35 = p1;
		G_B19_0 = L_35;
		goto IL_007e;
	}

IL_007d:
	{
		t914 * L_36 = p0;
		G_B19_0 = L_36;
	}

IL_007e:
	{
		return G_B19_0;
	}

IL_007f:
	{
		t914 * L_37 = p0;
		t126 * L_38 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4452_MI, L_37);
		V_5 = L_38;
		t914 * L_39 = p1;
		t126 * L_40 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4452_MI, L_39);
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
		bool L_45 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m7777_MI, L_43, L_44);
		if (!L_45)
		{
			goto IL_00a2;
		}
	}
	{
		t914 * L_46 = p0;
		return L_46;
	}

IL_00a2:
	{
		t126 * L_47 = V_6;
		t126 * L_48 = V_5;
		bool L_49 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m7777_MI, L_47, L_48);
		if (!L_49)
		{
			goto IL_00af;
		}
	}
	{
		t914 * L_50 = p1;
		return L_50;
	}

IL_00af:
	{
		t914 * L_51 = p0;
		int32_t L_52 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9544_MI, L_51);
		V_7 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_52&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t914 * L_53 = p1;
		int32_t L_54 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9544_MI, L_53);
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
		t914 * L_57 = p1;
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
		t914 * L_60 = p0;
		return L_60;
	}

IL_00e3:
	{
		t1798 * L_61 = (t1798 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1798_TI));
		m9444(L_61, &m9444_MI);
		il2cpp_codegen_raise_exception(L_61);
	}
}
extern MethodInfo* m12022_MI_var;
extern "C" int32_t m9501 (t1805 * __this, t126 * p0, t126 * p1, MethodInfo* method)
{
	static bool m9501_init;
	if (!m9501_init)
	{
		m12022_MI_var = il2cpp_codegen_genericmethod_get_method(&m12022_GM);
		m9501_init = true;
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
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7807_MI, L_2);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		t126 * L_4 = p1;
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7807_MI, L_4);
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
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7807_MI, L_6);
		if (L_7)
		{
			goto IL_002a;
		}
	}
	{
		t126 * L_8 = p1;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7807_MI, L_8);
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
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7749_MI, L_10);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		t126 * L_12 = p1;
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7749_MI, L_12);
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		t126 * L_14 = p0;
		t126 * L_15 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11967_MI, L_14);
		t126 * L_16 = p1;
		t126 * L_17 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11967_MI, L_16);
		int32_t L_18 = m9501(__this, L_15, L_17, &m9501_MI);
		return L_18;
	}

IL_004d:
	{
		t126 * L_19 = p0;
		t126 * L_20 = p1;
		bool L_21 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m7777_MI, L_19, L_20);
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
		bool L_24 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m7777_MI, L_22, L_23);
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
		bool L_26 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7756_MI, L_25);
		if (!L_26)
		{
			goto IL_007c;
		}
	}
	{
		t126 * L_27 = p1;
		t152* L_28 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m12019_MI, L_27);
		t126 * L_29 = p0;
		int32_t L_30 = m12022(NULL, L_28, L_29, m12022_MI_var);
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
		bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7756_MI, L_31);
		if (!L_32)
		{
			goto IL_0095;
		}
	}
	{
		t126 * L_33 = p0;
		t152* L_34 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m12019_MI, L_33);
		t126 * L_35 = p1;
		int32_t L_36 = m12022(NULL, L_34, L_35, m12022_MI_var);
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
extern MethodInfo m9502_MI;
extern "C" t837 * m9502 (t1805 * __this, int32_t p0, t929* p1, t126 * p2, t152* p3, t935* p4, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	t837 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t837 * V_7 = {0};
	t928* V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B6_0 = 0;
	{
		t929* L_0 = p1;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		t929* L_1 = p1;
		if ((((int32_t)(((t121 *)L_1)->max_length))))
		{
			goto IL_0018;
		}
	}

IL_0008:
	{
		t563 * L_2 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_2, (t2*) &_stringLiteral2021, (t2*) &_stringLiteral1245, &m5719_MI);
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
		V_2 = (t837 *)NULL;
		V_4 = ((int32_t)2147483646);
		V_5 = ((int32_t)2147483647);
		V_6 = 0;
		t929* L_6 = p1;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_6)->max_length)))-(int32_t)1));
		goto IL_00d6;
	}

IL_004a:
	{
		t929* L_7 = p1;
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_7 = (*(t837 **)(t837 **)SZArrayLdElema(L_7, L_9));
		t837 * L_10 = V_7;
		t928* L_11 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m12021_MI, L_10);
		V_8 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_13 = V_1;
		t928* L_14 = V_8;
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
		t837 * L_16 = V_7;
		t126 * L_17 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4399_MI, L_16);
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
		t928* L_21 = V_8;
		int32_t L_22 = m9503(NULL, L_20, L_21, &m9503_MI);
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
		t837 * L_24 = V_7;
		t126 * L_25 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4452_MI, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		int32_t L_26 = m9509(NULL, L_25, &m9509_MI);
		V_10 = L_26;
		t837 * L_27 = V_2;
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
		t837 * L_37 = V_7;
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
		t1798 * L_44 = (t1798 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1798_TI));
		m9444(L_44, &m9444_MI);
		il2cpp_codegen_raise_exception(L_44);
	}

IL_00e9:
	{
		t837 * L_45 = V_2;
		return L_45;
	}
}
extern "C" int32_t m9503 (t9 * __this , t152* p0, t928* p1, MethodInfo* method)
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
		t928* L_3 = p1;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_3, L_5)));
		int32_t L_7 = m9504(NULL, (*(t126 **)(t126 **)SZArrayLdElema(L_0, L_2)), L_6, &m9504_MI);
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
extern "C" int32_t m9504 (t9 * __this , t126 * p0, t126 * p1, MethodInfo* method)
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
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7761_MI, L_1);
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
		int32_t L_8 = m7772(NULL, L_7, &m7772_MI);
		V_0 = L_8;
		t126 * L_9 = p1;
		int32_t L_10 = m7772(NULL, L_9, &m7772_MI);
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
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, L_17);
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
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, L_23);
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
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, L_29);
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
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, L_35);
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
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, L_41);
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
		bool L_48 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, L_47);
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
		bool L_55 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7754_MI, L_54);
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
		bool L_61 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4473_MI, L_59, L_60);
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

#include "t1826.h"
extern TypeInfo t1826_TI;
#include "t1826MD.h"
extern MethodInfo m9731_MI;
extern MethodInfo m12024_MI;
extern MethodInfo m4430_MI;


extern "C" void m9505 (t933 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9506_MI;
extern "C" void m9506 (t9 * __this , MethodInfo* method)
{
	{
		t1805 * L_0 = (t1805 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1805_TI));
		m9490(L_0, &m9490_MI);
		((t933_SFs*)InitializedTypeInfo(&t933_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern "C" t933 * m9507 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		t933 * L_0 = ((t933_SFs*)InitializedTypeInfo(&t933_TI)->static_fields)->f0;
		return L_0;
	}
}
extern MethodInfo m9508_MI;
extern "C" bool m9508 (t9 * __this , t933 * p0, t158* p1, t928* p2, t901 * p3, MethodInfo* method)
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
		t928* L_1 = p2;
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
		t1826 * L_2 = (t1826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1826_TI));
		m9731(L_2, &m9731_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0010:
	{
		t928* L_3 = p2;
		t158* L_4 = p1;
		if ((((int32_t)(((int32_t)(((t121 *)L_3)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_4)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		t1826 * L_5 = (t1826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1826_TI));
		m9731(L_5, &m9731_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001e:
	{
		V_0 = 0;
		goto IL_0047;
	}

IL_0022:
	{
		t933 * L_6 = p0;
		t158* L_7 = p1;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t928* L_10 = p2;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t126 * L_13 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_10, L_12)));
		t901 * L_14 = p3;
		t9 * L_15 = (t9 *)VirtFuncInvoker3< t9 *, t9 *, t126 *, t901 * >::Invoke(&m12024_MI, L_6, (*(t9 **)(t9 **)SZArrayLdElema(L_7, L_9)), L_13, L_14);
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
extern "C" int32_t m9509 (t9 * __this , t126 * p0, MethodInfo* method)
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
		t126 * L_3 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4430_MI, L_2);
		V_0 = L_3;
	}

IL_0011:
	{
		t126 * L_4 = V_0;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4430_MI, L_4);
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
extern "C" t914 * m9510 (t9 * __this , t1806* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t914 * V_4 = {0};
	int32_t V_5 = 0;
	t928* V_6 = {0};
	t928* V_7 = {0};
	bool V_8 = false;
	int32_t V_9 = 0;
	{
		V_0 = 0;
		V_1 = (-1);
		t1806* L_0 = p0;
		V_2 = (((int32_t)(((t121 *)L_0)->max_length)));
		V_3 = 0;
		goto IL_009c;
	}

IL_000f:
	{
		t1806* L_1 = p0;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		V_4 = (*(t914 **)(t914 **)SZArrayLdElema(L_1, L_3));
		t914 * L_4 = V_4;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4452_MI, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		int32_t L_6 = m9509(NULL, L_5, &m9509_MI);
		V_5 = L_6;
		int32_t L_7 = V_5;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_002d;
		}
	}
	{
		t1798 * L_9 = (t1798 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1798_TI));
		m9444(L_9, &m9444_MI);
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
		t914 * L_11 = V_4;
		t928* L_12 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4423_MI, L_11);
		V_6 = L_12;
		t1806* L_13 = p0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		t928* L_16 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4423_MI, (*(t914 **)(t914 **)SZArrayLdElema(L_13, L_15)));
		V_7 = L_16;
		V_8 = 1;
		t928* L_17 = V_6;
		t928* L_18 = V_7;
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
		t928* L_19 = V_6;
		int32_t L_20 = V_9;
		int32_t L_21 = L_20;
		t126 * L_22 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_19, L_21)));
		t928* L_23 = V_7;
		int32_t L_24 = V_9;
		int32_t L_25 = L_24;
		t126 * L_26 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_23, L_25)));
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
		t928* L_29 = V_6;
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
		t1798 * L_31 = (t1798 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1798_TI));
		m9444(L_31, &m9444_MI);
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
		t1806* L_39 = p0;
		int32_t L_40 = V_1;
		int32_t L_41 = L_40;
		return (*(t914 **)(t914 **)SZArrayLdElema(L_39, L_41));
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t925MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t1573MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1572.h"
extern MethodInfo m9538_MI;
extern MethodInfo m12025_MI;


extern "C" void m9511 (t826 * __this, MethodInfo* method)
{
	{
		m9538(__this, &m9538_MI);
		return;
	}
}
extern MethodInfo m9512_MI;
extern "C" void m9512 (t9 * __this , MethodInfo* method)
{
	{
		((t826_SFs*)InitializedTypeInfo(&t826_TI)->static_fields)->f0 = (t2*) &_stringLiteral2022;
		((t826_SFs*)InitializedTypeInfo(&t826_TI)->static_fields)->f1 = (t2*) &_stringLiteral2023;
		return;
	}
}
extern MethodInfo m9513_MI;
extern "C" int32_t m9513 (t826 * __this, MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
extern MethodInfo m4416_MI;
extern TypeInfo* t158_TI_var;
extern "C" t9 * m4416 (t826 * __this, t158* p0, MethodInfo* method)
{
	static bool m4416_init;
	if (!m4416_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4416_init = true;
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
		t9 * L_2 = (t9 *)VirtFuncInvoker4< t9 *, int32_t, t933 *, t158*, t901 * >::Invoke(&m12025_MI, __this, ((int32_t)512), (t933 *)NULL, L_1, (t901 *)NULL);
		return L_2;
	}
}
#include "t1807.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1807_TI;
#include "t1807MD.h"



#include "t1808.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1808_TI;
#include "t1808MD.h"

#include "t293.h"


extern MethodInfo m9514_MI;
extern "C" void m9514 (t1808 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m9515_MI;
extern "C" void m9515 (t1808 * __this, t9 * p0, t293 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m9515((t1808 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t293 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, t293 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, t293 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1808(Il2CppObject* delegate, t9 * p0, t293 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m9516_MI;
extern "C" t9 * m9516 (t1808 * __this, t9 * p0, t293 * p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m9517_MI;
extern "C" void m9517 (t1808 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif
#include "t1569MD.h"

extern MethodInfo m12026_MI;
extern MethodInfo m7811_MI;


extern MethodInfo m9518_MI;
extern "C" void m9518 (t1569 * __this, MethodInfo* method)
{
	{
		m7811(__this, &m7811_MI);
		return;
	}
}
extern MethodInfo m9519_MI;
extern "C" t126 * m9519 (t1569 * __this, MethodInfo* method)
{
	t928* V_0 = {0};
	t828 * V_1 = {0};
	t126 * V_2 = {0};
	{
		t828 * L_0 = (t828 *)VirtFuncInvoker1< t828 *, bool >::Invoke(&m12026_MI, __this, 1);
		V_1 = L_0;
		t828 * L_1 = V_1;
		t928* L_2 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4423_MI, L_1);
		V_0 = L_2;
		t928* L_3 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_3)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		t928* L_4 = V_0;
		int32_t L_5 = 0;
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_4, L_5)));
		V_2 = L_6;
		t126 * L_7 = V_2;
		return L_7;
	}

IL_0020:
	{
		return (t126 *)NULL;
	}
}
extern MethodInfo m9520_MI;
extern "C" int32_t m9520 (t1569 * __this, MethodInfo* method)
{
	{
		return (int32_t)(2);
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1765MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1369.h"
#include "t2135.h"
#include "t1585.h"
extern TypeInfo t1369_TI;
extern TypeInfo t2135_TI;
extern TypeInfo t1585_TI;
#include "t313MD.h"
#include "t2135MD.h"
#include "t1585MD.h"
extern MethodInfo m9528_MI;
extern MethodInfo m12027_MI;
extern MethodInfo m7816_MI;
extern MethodInfo m9525_MI;
extern MethodInfo m9524_MI;
extern MethodInfo m7755_MI;
extern MethodInfo m9529_MI;
extern MethodInfo m11667_MI;
extern MethodInfo m9527_MI;
extern MethodInfo m7835_MI;


extern MethodInfo m9521_MI;
extern "C" void m9521 (t830 * __this, MethodInfo* method)
{
	{
		m7811(__this, &m7811_MI);
		return;
	}
}
extern MethodInfo m9522_MI;
extern "C" int32_t m9522 (t830 * __this, MethodInfo* method)
{
	{
		return (int32_t)(4);
	}
}
extern MethodInfo m9523_MI;
extern "C" bool m9523 (t830 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11977_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4395_MI;
extern "C" bool m4395 (t830 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11977_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4402_MI;
extern "C" bool m4402 (t830 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11977_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4396_MI;
extern "C" bool m4396 (t830 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11977_MI, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)6))? 1 : 0);
	}
}
extern "C" bool m9524 (t830 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11977_MI, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128)))? 1 : 0);
	}
}
extern MethodInfo m4419_MI;
extern "C" void m4419 (t830 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		VirtActionInvoker5< t9 *, t9 *, int32_t, t933 *, t901 * >::Invoke(&m12027_MI, __this, L_0, L_1, 0, (t933 *)NULL, (t901 *)NULL);
		return;
	}
}
extern "C" t830 * m9525 (t9 * __this , t58 p0, t58 p1, MethodInfo* method)
{
	typedef t830 * (*m9525_ftn) (t58, t58);
	static m9525_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9525_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m9526_MI;
extern "C" t830 * m9526 (t9 * __this , t313  p0, MethodInfo* method)
{
	{
		t58 L_0 = m7816((&p0), &m7816_MI);
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_2 = m4460(NULL, L_0, L_1, &m4460_MI);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		t563 * L_3 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_3, (t2*) &_stringLiteral2024, &m2909_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		t58 L_4 = m7816((&p0), &m7816_MI);
		t58 L_5 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		t830 * L_6 = m9525(NULL, L_4, L_5, &m9525_MI);
		return L_6;
	}
}
extern "C" int32_t m9527 (t830 * __this, MethodInfo* method)
{
	{
		t1369 * L_0 = (t1369 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1369_TI));
		m5900(L_0, (t2*) &_stringLiteral2025, &m5900_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" t1764 * m9528 (t830 * __this, MethodInfo* method)
{
	typedef t1764 * (*m9528_ftn) (t830 *);
	static m9528_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9528_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::GetUnmanagedMarshal()");
	return _il2cpp_icall_func(__this);
}
extern "C" t1764 * m9529 (t830 * __this, MethodInfo* method)
{
	{
		t1764 * L_0 = m9528(__this, &m9528_MI);
		return L_0;
	}
}
extern MethodInfo m9530_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m9530 (t830 * __this, MethodInfo* method)
{
	static bool m9530_init;
	if (!m9530_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9530_init = true;
	}
	int32_t V_0 = 0;
	t1764 * V_1 = {0};
	t158* V_2 = {0};
	{
		V_0 = 0;
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9524_MI, __this);
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
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4452_MI, __this);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7755_MI, L_2);
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
		t1764 * L_5 = (t1764 *)VirtFuncInvoker0< t1764 * >::Invoke(&m9529_MI, __this);
		V_1 = L_5;
		t1764 * L_6 = V_1;
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
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9524_MI, __this);
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
		t2135 * L_14 = (t2135 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2135_TI));
		m11667(L_14, &m11667_MI);
		ArrayElementTypeCheck (L_11, L_14);
		*((t9 **)(t9 **)SZArrayLdElema(L_11, L_13)) = (t9 *)L_14;
	}

IL_004f:
	{
		t126 * L_15 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4452_MI, __this);
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7755_MI, L_15);
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
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9527_MI, __this);
		t1585 * L_21 = (t1585 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1585_TI));
		m7835(L_21, L_20, &m7835_MI);
		ArrayElementTypeCheck (L_17, L_21);
		*((t9 **)(t9 **)SZArrayLdElema(L_17, L_19)) = (t9 *)L_21;
	}

IL_006e:
	{
		t1764 * L_22 = V_1;
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
		t1764 * L_26 = V_1;
		t1578 * L_27 = m9443(L_26, &m9443_MI);
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

extern TypeInfo t309_TI;


extern "C" void m9531 (t1779 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9532_MI;
extern "C" t2* m9532 (t1779 * __this, MethodInfo* method)
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
		t9 * L_4 = Box(InitializedTypeInfo(&t309_TI), &L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_5 = m1213(NULL, (t2*) &_stringLiteral2026, L_1, L_4, &m1213_MI);
		return L_5;
	}

IL_0024:
	{
		t126 * L_6 = (__this->f0);
		uint16_t L_7 = (__this->f2);
		uint16_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t309_TI), &L_8);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m1213(NULL, (t2*) &_stringLiteral2027, L_6, L_9, &m1213_MI);
		return L_10;
	}
}
#include "t1809.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1809_TI;
#include "t1809MD.h"

#include "t1342.h"
extern TypeInfo t1342_TI;
extern TypeInfo t1572_TI;
#include "t1342MD.h"
extern Il2CppType t1809_0_0_0;
extern MethodInfo m9535_MI;
extern MethodInfo m10326_MI;
extern MethodInfo m5880_MI;
extern MethodInfo m5732_MI;
extern MethodInfo m9556_MI;
extern MethodInfo m9555_MI;
extern MethodInfo m9554_MI;
extern MethodInfo m7787_MI;


extern MethodInfo m9533_MI;
extern "C" void m9533 (t1809 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t1345 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		m336(__this, &m336_MI);
		t1100 * L_0 = p0;
		t2* L_1 = m5740(L_0, (t2*) &_stringLiteral2028, &m5740_MI);
		V_0 = L_1;
		t1100 * L_2 = p0;
		t2* L_3 = m5740(L_2, (t2*) &_stringLiteral1269, &m5740_MI);
		V_1 = L_3;
		t1100 * L_4 = p0;
		t2* L_5 = m5740(L_4, (t2*) &_stringLiteral2029, &m5740_MI);
		__this->f0 = L_5;
		t1100 * L_6 = p0;
		t2* L_7 = m5740(L_6, (t2*) &_stringLiteral654, &m5740_MI);
		__this->f1 = L_7;
		t1100 * L_8 = p0;
		int32_t L_9 = m5742(L_8, (t2*) &_stringLiteral2030, &m5742_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1342_TI, e.ex->object.klass))
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
		t1345 * L_11 = m9462(NULL, L_10, &m9462_MI);
		V_2 = L_11;
		t1345 * L_12 = V_2;
		t2* L_13 = V_1;
		t126 * L_14 = (t126 *)VirtFuncInvoker3< t126 *, t2*, bool, bool >::Invoke(&m9458_MI, L_12, L_13, 1, 1);
		__this->f3 = L_14;
		return;
	}
}
extern MethodInfo m9534_MI;
extern "C" void m9534 (t9 * __this , t1100 * p0, t2* p1, t126 * p2, t2* p3, int32_t p4, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t2* L_1 = p1;
		t126 * L_2 = p2;
		t2* L_3 = p3;
		int32_t L_4 = p4;
		m9535(NULL, L_0, L_1, L_2, L_3, L_4, (t152*)(t152*)NULL, &m9535_MI);
		return;
	}
}
extern "C" void m9535 (t9 * __this , t1100 * p0, t2* p1, t126 * p2, t2* p3, int32_t p4, t152* p5, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t1809_0_0_0), &m329_MI);
		m10326(L_0, L_1, &m10326_MI);
		t1100 * L_2 = p0;
		t126 * L_3 = p2;
		t1568 * L_4 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m11984_MI, L_3);
		t1345 * L_5 = m9564(L_4, &m9564_MI);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9451_MI, L_5);
		t126 * L_7 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5728(L_2, (t2*) &_stringLiteral2028, L_6, L_7, &m5728_MI);
		t1100 * L_8 = p0;
		t126 * L_9 = p2;
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4409_MI, L_9);
		t126 * L_11 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5728(L_8, (t2*) &_stringLiteral1269, L_10, L_11, &m5728_MI);
		t1100 * L_12 = p0;
		t2* L_13 = p1;
		t126 * L_14 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5728(L_12, (t2*) &_stringLiteral2029, L_13, L_14, &m5728_MI);
		t1100 * L_15 = p0;
		t2* L_16 = p3;
		t126 * L_17 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5728(L_15, (t2*) &_stringLiteral654, L_16, L_17, &m5728_MI);
		t1100 * L_18 = p0;
		int32_t L_19 = p4;
		m5730(L_18, (t2*) &_stringLiteral2030, L_19, &m5730_MI);
		t1100 * L_20 = p0;
		t152* L_21 = p5;
		t126 * L_22 = m329(NULL, LoadTypeToken(&t152_0_0_0), &m329_MI);
		m5728(L_20, (t2*) &_stringLiteral2031, (t9 *)(t9 *)L_21, L_22, &m5728_MI);
		return;
	}
}
extern MethodInfo m9536_MI;
extern "C" void m9536 (t1809 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9537_MI;
extern "C" t9 * m9537 (t1809 * __this, t1101  p0, MethodInfo* method)
{
	t926* V_0 = {0};
	int32_t V_1 = 0;
	t1570* V_2 = {0};
	int32_t V_3 = 0;
	t828 * V_4 = {0};
	t830 * V_5 = {0};
	t837 * V_6 = {0};
	t1569 * V_7 = {0};
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
		t926* L_4 = (t926*)VirtFuncInvoker1< t926*, int32_t >::Invoke(&m11983_MI, L_3, ((int32_t)60));
		V_0 = L_4;
		V_1 = 0;
		goto IL_006e;
	}

IL_0051:
	{
		t926* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		t2* L_8 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, (*(t826 **)(t826 **)SZArrayLdElema(L_5, L_7)));
		t2* L_9 = (__this->f1);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(&m5880_MI, L_8, L_9);
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		t926* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		return (*(t826 **)(t826 **)SZArrayLdElema(L_11, L_13));
	}

IL_006a:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_15 = V_1;
		t926* L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t121 *)L_16)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		t2* L_17 = (__this->f1);
		t126 * L_18 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_19 = m1213(NULL, (t2*) &_stringLiteral2032, L_17, L_18, &m1213_MI);
		t1342 * L_20 = (t1342 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1342_TI));
		m5732(L_20, L_19, &m5732_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0090:
	{
		t126 * L_21 = (__this->f3);
		t1570* L_22 = (t1570*)VirtFuncInvoker1< t1570*, int32_t >::Invoke(&m12020_MI, L_21, ((int32_t)60));
		V_2 = L_22;
		V_3 = 0;
		goto IL_010c;
	}

IL_00a2:
	{
		t1570* L_23 = V_2;
		int32_t L_24 = V_3;
		int32_t L_25 = L_24;
		t2* L_26 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, (*(t828 **)(t828 **)SZArrayLdElema(L_23, L_25)));
		t2* L_27 = (__this->f1);
		bool L_28 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(&m5880_MI, L_26, L_27);
		if (!L_28)
		{
			goto IL_00bb;
		}
	}
	{
		t1570* L_29 = V_2;
		int32_t L_30 = V_3;
		int32_t L_31 = L_30;
		return (*(t828 **)(t828 **)SZArrayLdElema(L_29, L_31));
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
		t1570* L_33 = V_2;
		int32_t L_34 = V_3;
		int32_t L_35 = L_34;
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9556_MI, (*(t828 **)(t828 **)SZArrayLdElema(L_33, L_35)));
		if (!L_36)
		{
			goto IL_0108;
		}
	}
	{
		t1570* L_37 = V_2;
		int32_t L_38 = V_3;
		int32_t L_39 = L_38;
		t152* L_40 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9555_MI, (*(t828 **)(t828 **)SZArrayLdElema(L_37, L_39)));
		t152* L_41 = (__this->f4);
		if ((!(((uint32_t)(((int32_t)(((t121 *)L_40)->max_length)))) == ((uint32_t)(((int32_t)(((t121 *)L_41)->max_length)))))))
		{
			goto IL_0108;
		}
	}
	{
		t1570* L_42 = V_2;
		int32_t L_43 = V_3;
		int32_t L_44 = L_43;
		t152* L_45 = (__this->f4);
		t828 * L_46 = (t828 *)VirtFuncInvoker1< t828 *, t152* >::Invoke(&m9554_MI, (*(t828 **)(t828 **)SZArrayLdElema(L_42, L_44)), L_45);
		V_4 = L_46;
		t828 * L_47 = V_4;
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
		t828 * L_51 = V_4;
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
		t1570* L_54 = V_2;
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)(((t121 *)L_54)->max_length))))))
		{
			goto IL_00a2;
		}
	}
	{
		t2* L_55 = (__this->f1);
		t126 * L_56 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_57 = m1213(NULL, (t2*) &_stringLiteral2033, L_55, L_56, &m1213_MI);
		t1342 * L_58 = (t1342 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1342_TI));
		m5732(L_58, L_57, &m5732_MI);
		il2cpp_codegen_raise_exception(L_58);
	}

IL_012e:
	{
		t126 * L_59 = (__this->f3);
		t2* L_60 = (__this->f0);
		t830 * L_61 = (t830 *)VirtFuncInvoker2< t830 *, t2*, int32_t >::Invoke(&m12018_MI, L_59, L_60, ((int32_t)60));
		V_5 = L_61;
		t830 * L_62 = V_5;
		if (!L_62)
		{
			goto IL_014a;
		}
	}
	{
		t830 * L_63 = V_5;
		return L_63;
	}

IL_014a:
	{
		t2* L_64 = (__this->f0);
		t126 * L_65 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_66 = m1213(NULL, (t2*) &_stringLiteral2034, L_64, L_65, &m1213_MI);
		t1342 * L_67 = (t1342 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1342_TI));
		m5732(L_67, L_66, &m5732_MI);
		il2cpp_codegen_raise_exception(L_67);
	}

IL_0166:
	{
		t126 * L_68 = (__this->f3);
		t2* L_69 = (__this->f0);
		t837 * L_70 = (t837 *)VirtFuncInvoker2< t837 *, t2*, int32_t >::Invoke(&m7787_MI, L_68, L_69, ((int32_t)60));
		V_6 = L_70;
		t837 * L_71 = V_6;
		if (!L_71)
		{
			goto IL_0182;
		}
	}
	{
		t837 * L_72 = V_6;
		return L_72;
	}

IL_0182:
	{
		t2* L_73 = (__this->f0);
		t126 * L_74 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_75 = m1213(NULL, (t2*) &_stringLiteral2035, L_73, L_74, &m1213_MI);
		t1342 * L_76 = (t1342 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1342_TI));
		m5732(L_76, L_75, &m5732_MI);
		il2cpp_codegen_raise_exception(L_76);
	}

IL_019e:
	{
		t126 * L_77 = (__this->f3);
		t2* L_78 = (__this->f0);
		t1569 * L_79 = (t1569 *)VirtFuncInvoker2< t1569 *, t2*, int32_t >::Invoke(&m12017_MI, L_77, L_78, ((int32_t)60));
		V_7 = L_79;
		t1569 * L_80 = V_7;
		if (!L_80)
		{
			goto IL_01ba;
		}
	}
	{
		t1569 * L_81 = V_7;
		return L_81;
	}

IL_01ba:
	{
		t2* L_82 = (__this->f0);
		t126 * L_83 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_84 = m1213(NULL, (t2*) &_stringLiteral2036, L_82, L_83, &m1213_MI);
		t1342 * L_85 = (t1342 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1342_TI));
		m5732(L_85, L_84, &m5732_MI);
		il2cpp_codegen_raise_exception(L_85);
	}

IL_01d6:
	{
		int32_t L_86 = (__this->f2);
		int32_t L_87 = L_86;
		t9 * L_88 = Box(InitializedTypeInfo(&t1572_TI), &L_87);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_89 = m590(NULL, (t2*) &_stringLiteral2037, L_88, &m590_MI);
		t1342 * L_90 = (t1342 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1342_TI));
		m5732(L_90, L_89, &m5732_MI);
		il2cpp_codegen_raise_exception(L_90);
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1572MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t1757MD.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m9540_MI;
extern MethodInfo m9542_MI;
extern MethodInfo m7802_MI;
extern MethodInfo m12028_MI;
extern MethodInfo m379_MI;


extern "C" void m9538 (t914 * __this, MethodInfo* method)
{
	{
		m7811(__this, &m7811_MI);
		return;
	}
}
extern MethodInfo m9539_MI;
extern "C" t914 * m9539 (t9 * __this , t1758  p0, MethodInfo* method)
{
	{
		t58 L_0 = m11790((&p0), &m11790_MI);
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		t914 * L_2 = m9540(NULL, L_0, L_1, &m9540_MI);
		return L_2;
	}
}
extern "C" t914 * m9540 (t9 * __this , t58 p0, t58 p1, MethodInfo* method)
{
	t914 * V_0 = {0};
	{
		t58 L_0 = p0;
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_2 = m4460(NULL, L_0, L_1, &m4460_MI);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		t563 * L_3 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_3, (t2*) &_stringLiteral2024, &m2909_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		t58 L_4 = p0;
		t58 L_5 = p1;
		t914 * L_6 = m9542(NULL, L_4, L_5, &m9542_MI);
		V_0 = L_6;
		t914 * L_7 = V_0;
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		t563 * L_8 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_8, (t2*) &_stringLiteral2024, &m2909_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_002e:
	{
		t914 * L_9 = V_0;
		return L_9;
	}
}
extern MethodInfo m9541_MI;
extern "C" t914 * m9541 (t9 * __this , t1758  p0, MethodInfo* method)
{
	t914 * V_0 = {0};
	t126 * V_1 = {0};
	{
		t58 L_0 = m11790((&p0), &m11790_MI);
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		t914 * L_2 = m9540(NULL, L_0, L_1, &m9540_MI);
		V_0 = L_2;
		t914 * L_3 = V_0;
		t126 * L_4 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4452_MI, L_3);
		V_1 = L_4;
		t126 * L_5 = V_1;
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7805_MI, L_5);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		t126 * L_7 = V_1;
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7802_MI, L_7);
		if (!L_8)
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		t563 * L_9 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_9, (t2*) &_stringLiteral2038, &m2909_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0034:
	{
		t914 * L_10 = V_0;
		return L_10;
	}
}
extern "C" t914 * m9542 (t9 * __this , t58 p0, t58 p1, MethodInfo* method)
{
	typedef t914 * (*m9542_ftn) (t58, t58);
	static m9542_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9542_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m9543 (t914 * __this, MethodInfo* method)
{
	t928* V_0 = {0};
	{
		t928* L_0 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4423_MI, __this);
		V_0 = L_0;
		t928* L_1 = V_0;
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
		t928* L_2 = V_0;
		return (((int32_t)(((t121 *)L_2)->max_length)));
	}
}
extern "C" t9 * m4417 (t914 * __this, t9 * p0, t158* p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t158* L_1 = p1;
		t9 * L_2 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t933 *, t158*, t901 * >::Invoke(&m12028_MI, __this, L_0, 0, (t933 *)NULL, L_1, (t901 *)NULL);
		return L_2;
	}
}
extern "C" int32_t m9544 (t914 * __this, MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
extern MethodInfo m4390_MI;
extern "C" bool m4390 (t914 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11976_MI, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)6))? 1 : 0);
	}
}
extern "C" bool m4389 (t914 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11976_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9545_MI;
extern "C" bool m9545 (t914 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11976_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9546_MI;
extern "C" int32_t m9546 (t914 * __this, t9 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	t1767 * V_0 = {0};
	t1752 * V_1 = {0};
	{
		if (!((t1767 *)IsInst(__this, InitializedTypeInfo(&t1767_TI))))
		{
			goto IL_0019;
		}
	}
	{
		V_0 = ((t1767 *)Castclass(__this, InitializedTypeInfo(&t1767_TI)));
		t1767 * L_0 = V_0;
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = p2;
		int32_t L_4 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, bool >::Invoke(&m9300_MI, L_0, L_1, L_2, L_3);
		return L_4;
	}

IL_0019:
	{
		if (!((t1752 *)IsInst(__this, InitializedTypeInfo(&t1752_TI))))
		{
			goto IL_0032;
		}
	}
	{
		V_1 = ((t1752 *)Castclass(__this, InitializedTypeInfo(&t1752_TI)));
		t1752 * L_5 = V_1;
		t9 * L_6 = p0;
		int32_t L_7 = p1;
		bool L_8 = p2;
		int32_t L_9 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, bool >::Invoke(&m9129_MI, L_5, L_6, L_7, L_8);
		return L_9;
	}

IL_0032:
	{
		t138 * L_10 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_10, (t2*) &_stringLiteral2039, &m379_MI);
		il2cpp_codegen_raise_exception(L_10);
	}
}
extern MethodInfo m9547_MI;
extern "C" t152* m9547 (t914 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9548_MI;
extern "C" bool m9548 (t914 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m9549 (t914 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9550_MI;
extern "C" bool m9550 (t914 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1781_TI;
#include "t1781MD.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m7798_MI;


extern "C" void m9551 (t828 * __this, MethodInfo* method)
{
	{
		m9538(__this, &m9538_MI);
		return;
	}
}
extern MethodInfo m9552_MI;
extern "C" int32_t m9552 (t828 * __this, MethodInfo* method)
{
	{
		return (int32_t)(8);
	}
}
extern "C" t126 * m9553 (t828 * __this, MethodInfo* method)
{
	{
		return (t126 *)NULL;
	}
}
extern "C" t828 * m9554 (t828 * __this, t152* p0, MethodInfo* method)
{
	{
		t126 * L_0 = m2510(__this, &m2510_MI);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7798_MI, L_0);
		t169 * L_2 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_2, L_1, &m5734_MI);
		il2cpp_codegen_raise_exception(L_2);
	}
}
extern "C" t152* m9555 (t828 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_0 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		return L_0;
	}
}
extern "C" bool m9556 (t828 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9557_MI;
extern "C" bool m9557 (t828 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9558_MI;
extern "C" bool m9558 (t828 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
#include "t1810.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1810_TI;
#include "t1810MD.h"

extern MethodInfo m9559_MI;


extern "C" void m9559 (t1810 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9560_MI;
extern "C" void m9560 (t9 * __this , MethodInfo* method)
{
	{
		t1810 * L_0 = (t1810 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1810_TI));
		m9559(L_0, &m9559_MI);
		((t1810_SFs*)InitializedTypeInfo(&t1810_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m9561_MI;
extern "C" void m9561 (t1810 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1811.h"
extern TypeInfo t1811_TI;
#include "t1811MD.h"
#include "t2151MD.h"
extern MethodInfo m9574_MI;
extern MethodInfo m11915_MI;
extern MethodInfo m9575_MI;
extern MethodInfo m11878_MI;
extern MethodInfo m9570_MI;
extern MethodInfo m4279_MI;
extern MethodInfo m5931_MI;


extern "C" void m9562 (t1568 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9563_MI;
extern "C" void m9563 (t9 * __this , MethodInfo* method)
{
	{
		t58 L_0 = { &m9574_MI };
		t1811 * L_1 = (t1811 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1811_TI));
		m11915(L_1, NULL, L_0, &m11915_MI);
		((t1568_SFs*)InitializedTypeInfo(&t1568_TI)->static_fields)->f1 = L_1;
		t58 L_2 = { &m9575_MI };
		t1811 * L_3 = (t1811 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1811_TI));
		m11915(L_3, NULL, L_2, &m11915_MI);
		((t1568_SFs*)InitializedTypeInfo(&t1568_TI)->static_fields)->f2 = L_3;
		return;
	}
}
extern "C" t1345 * m9564 (t1568 * __this, MethodInfo* method)
{
	{
		t1345 * L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t2* m9565 (t1568 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" t2* m9566 (t1568 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9567_MI;
extern "C" t158* m9567 (t1568 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_2 = m11604(NULL, __this, L_0, L_1, &m11604_MI);
		return L_2;
	}
}
extern MethodInfo m9568_MI;
extern "C" void m9568 (t1568 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral417, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1100 * L_2 = p0;
		t1101  L_3 = p1;
		m11878(NULL, __this, L_2, L_3, &m11878_MI);
		return;
	}
}
extern MethodInfo m9569_MI;
extern "C" t126 * m9569 (t1568 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t126 * L_1 = (t126 *)VirtFuncInvoker3< t126 *, t2*, bool, bool >::Invoke(&m9570_MI, __this, L_0, 0, 0);
		return L_1;
	}
}
extern "C" t126 * m9570 (t1568 * __this, t2* p0, bool p1, bool p2, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1760, &m339_MI);
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
		t563 * L_5 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_5, (t2*) &_stringLiteral2040, &m2909_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0026:
	{
		t1345 * L_6 = (__this->f4);
		t2* L_7 = p0;
		bool L_8 = p1;
		bool L_9 = p2;
		t126 * L_10 = m9457(L_6, __this, L_7, L_8, L_9, &m9457_MI);
		return L_10;
	}
}
extern MethodInfo m9571_MI;
extern "C" bool m9571 (t1568 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		bool L_2 = m11606(NULL, __this, L_0, L_1, &m11606_MI);
		return L_2;
	}
}
extern "C" bool m9572 (t1568 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m9573_MI;
extern "C" t2* m9573 (t1568 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" bool m9574 (t9 * __this , t126 * p0, t9 * p1, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t9 * L_0 = p1;
		V_0 = ((t2*)Castclass(L_0, (&t2_TI)));
		t2* L_1 = V_0;
		bool L_2 = m4445(L_1, (t2*) &_stringLiteral725, &m4445_MI);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		t126 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4391_MI, L_3);
		t2* L_5 = V_0;
		t2* L_6 = V_0;
		int32_t L_7 = m2723(L_6, &m2723_MI);
		t2* L_8 = m2739(L_5, 0, ((int32_t)((int32_t)L_7-(int32_t)1)), &m2739_MI);
		bool L_9 = m4279(L_4, L_8, &m4279_MI);
		return L_9;
	}

IL_002f:
	{
		t126 * L_10 = p0;
		t2* L_11 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4391_MI, L_10);
		t2* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_13 = m331(NULL, L_11, L_12, &m331_MI);
		return L_13;
	}
}
extern "C" bool m9575 (t9 * __this , t126 * p0, t9 * p1, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t9 * L_0 = p1;
		V_0 = ((t2*)Castclass(L_0, (&t2_TI)));
		t2* L_1 = V_0;
		bool L_2 = m4445(L_1, (t2*) &_stringLiteral725, &m4445_MI);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		t126 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4391_MI, L_3);
		t2* L_5 = m5931(L_4, &m5931_MI);
		t2* L_6 = V_0;
		t2* L_7 = V_0;
		int32_t L_8 = m2723(L_7, &m2723_MI);
		t2* L_9 = m2739(L_6, 0, ((int32_t)((int32_t)L_8-(int32_t)1)), &m2739_MI);
		t2* L_10 = m5931(L_9, &m5931_MI);
		bool L_11 = m4279(L_5, L_10, &m4279_MI);
		return L_11;
	}

IL_0039:
	{
		t126 * L_12 = p0;
		t2* L_13 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4391_MI, L_12);
		t2* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_15 = m7354(NULL, L_13, L_14, 1, &m7354_MI);
		return ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
	}
}
#include "t1812.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1812_TI;
#include "t1812MD.h"

#include "t1813.h"
extern MethodInfo m9576_MI;


extern "C" void m9576 (t9 * __this , t1813 * p0, t1812 * p1, MethodInfo* method)
{
	typedef void (*m9576_ftn) (t1813 *, t1812 *);
	static m9576_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9576_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m9577_MI;
extern "C" t1812  m9577 (t9 * __this , t1813 * p0, MethodInfo* method)
{
	t1812  V_0 = {0};
	{
		t1813 * L_0 = p0;
		m9576(NULL, L_0, (&V_0), &m9576_MI);
		t1812  L_1 = V_0;
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1813_TI;
#include "t1813MD.h"

extern MethodInfo m9583_MI;
extern MethodInfo m2419_MI;
extern MethodInfo m9582_MI;
extern MethodInfo m9584_MI;


extern MethodInfo m9578_MI;
extern "C" void m9578 (t1813 * __this, MethodInfo* method)
{
	{
		m9518(__this, &m9518_MI);
		return;
	}
}
extern MethodInfo m9579_MI;
extern "C" int32_t m9579 (t1813 * __this, MethodInfo* method)
{
	t1812  V_0 = {0};
	{
		t1812  L_0 = m9577(NULL, __this, &m9577_MI);
		V_0 = L_0;
		int32_t L_1 = ((&V_0)->f6);
		return L_1;
	}
}
extern MethodInfo m9580_MI;
extern "C" t828 * m9580 (t1813 * __this, bool p0, MethodInfo* method)
{
	t1812  V_0 = {0};
	{
		t1812  L_0 = m9577(NULL, __this, &m9577_MI);
		V_0 = L_0;
		bool L_1 = p0;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		t828 * L_2 = ((&V_0)->f3);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		t828 * L_3 = ((&V_0)->f3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4390_MI, L_3);
		if (!L_4)
		{
			goto IL_0029;
		}
	}

IL_0021:
	{
		t828 * L_5 = ((&V_0)->f3);
		return L_5;
	}

IL_0029:
	{
		return (t828 *)NULL;
	}
}
extern MethodInfo m9581_MI;
extern "C" t126 * m9581 (t1813 * __this, MethodInfo* method)
{
	t1812  V_0 = {0};
	{
		t1812  L_0 = m9577(NULL, __this, &m9577_MI);
		V_0 = L_0;
		t126 * L_1 = ((&V_0)->f0);
		return L_1;
	}
}
extern "C" t126 * m9582 (t1813 * __this, MethodInfo* method)
{
	t1812  V_0 = {0};
	{
		t1812  L_0 = m9577(NULL, __this, &m9577_MI);
		V_0 = L_0;
		t126 * L_1 = ((&V_0)->f1);
		return L_1;
	}
}
extern "C" t2* m9583 (t1813 * __this, MethodInfo* method)
{
	t1812  V_0 = {0};
	{
		t1812  L_0 = m9577(NULL, __this, &m9577_MI);
		V_0 = L_0;
		t2* L_1 = ((&V_0)->f2);
		return L_1;
	}
}
extern "C" t2* m9584 (t1813 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9519_MI, __this);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9583_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2419(NULL, L_0, (t2*) &_stringLiteral167, L_1, &m2419_MI);
		return L_2;
	}
}
extern MethodInfo m9585_MI;
extern "C" bool m9585 (t1813 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		bool L_2 = m11606(NULL, __this, L_0, L_1, &m11606_MI);
		return L_2;
	}
}
extern MethodInfo m9586_MI;
extern "C" t158* m9586 (t1813 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_1 = m11605(NULL, __this, L_0, &m11605_MI);
		return L_1;
	}
}
extern MethodInfo m9587_MI;
extern "C" t158* m9587 (t1813 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_2 = m11604(NULL, __this, L_0, L_1, &m11604_MI);
		return L_2;
	}
}
extern MethodInfo m9588_MI;
extern "C" void m9588 (t1813 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9583_MI, __this);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9582_MI, __this);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9584_MI, __this);
		m9534(NULL, L_0, L_1, L_2, L_3, 2, &m9534_MI);
		return;
	}
}
#include "t1814.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1814_TI;
#include "t1814MD.h"

#include "t1824.h"
#include "t2120.h"
extern TypeInfo t1824_TI;
extern TypeInfo t2120_TI;
#include "t1824MD.h"
#include "t2120MD.h"
extern MethodInfo m9593_MI;
extern MethodInfo m9726_MI;
extern MethodInfo m9608_MI;
extern MethodInfo m9601_MI;
extern MethodInfo m11538_MI;
extern MethodInfo m9604_MI;
extern MethodInfo m9589_MI;
extern MethodInfo m9596_MI;
extern MethodInfo m9594_MI;
extern MethodInfo m9603_MI;
extern MethodInfo m9595_MI;
extern MethodInfo m7801_MI;


extern "C" void m9589 (t1814 * __this, MethodInfo* method)
{
	{
		m9521(__this, &m9521_MI);
		return;
	}
}
extern MethodInfo m9590_MI;
extern "C" int32_t m9590 (t1814 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9591_MI;
extern "C" t313  m9591 (t1814 * __this, MethodInfo* method)
{
	{
		t313  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9592_MI;
extern "C" t126 * m9592 (t1814 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" t126 * m9593 (t1814 * __this, bool p0, MethodInfo* method)
{
	typedef t126 * (*m9593_ftn) (t1814 *, bool);
	static m9593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9593_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetParentType(System.Boolean)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t126 * m9594 (t1814 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = m9593(__this, 0, &m9593_MI);
		return L_0;
	}
}
extern "C" t126 * m9595 (t1814 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = m9593(__this, 1, &m9593_MI);
		return L_0;
	}
}
extern "C" t2* m9596 (t1814 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9597_MI;
extern "C" bool m9597 (t1814 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		bool L_2 = m11606(NULL, __this, L_0, L_1, &m11606_MI);
		return L_2;
	}
}
extern MethodInfo m9598_MI;
extern "C" t158* m9598 (t1814 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_1 = m11605(NULL, __this, L_0, &m11605_MI);
		return L_1;
	}
}
extern MethodInfo m9599_MI;
extern "C" t158* m9599 (t1814 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_2 = m11604(NULL, __this, L_0, L_1, &m11604_MI);
		return L_2;
	}
}
extern MethodInfo m9600_MI;
extern "C" int32_t m9600 (t1814 * __this, MethodInfo* method)
{
	typedef int32_t (*m9600_ftn) (t1814 *);
	static m9600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9600_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetFieldOffset()");
	return _il2cpp_icall_func(__this);
}
extern "C" t9 * m9601 (t1814 * __this, t9 * p0, MethodInfo* method)
{
	typedef t9 * (*m9601_ftn) (t1814 *, t9 *);
	static m9601_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9601_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetValueInternal(System.Object)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m9602_MI;
extern "C" t9 * m9602 (t1814 * __this, t9 * p0, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4395_MI, __this);
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
		t1824 * L_2 = (t1824 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1824_TI));
		m9726(L_2, (t2*) &_stringLiteral2041, &m9726_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9523_MI, __this);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		m9608(__this, &m9608_MI);
	}

IL_0024:
	{
		t9 * L_4 = p0;
		t9 * L_5 = m9601(__this, L_4, &m9601_MI);
		return L_5;
	}
}
extern "C" t2* m9603 (t1814 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f3);
		t2* L_1 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m1213(NULL, (t2*) &_stringLiteral2042, L_0, L_1, &m1213_MI);
		return L_2;
	}
}
extern "C" void m9604 (t9 * __this , t830 * p0, t9 * p1, t9 * p2, MethodInfo* method)
{
	typedef void (*m9604_ftn) (t830 *, t9 *, t9 *);
	static m9604_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9604_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m9605_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m9605 (t1814 * __this, t9 * p0, t9 * p1, int32_t p2, t933 * p3, t901 * p4, MethodInfo* method)
{
	static bool m9605_init;
	if (!m9605_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9605_init = true;
	}
	t9 * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4395_MI, __this);
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
		t1824 * L_2 = (t1824 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1824_TI));
		m9726(L_2, (t2*) &_stringLiteral2041, &m9726_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9523_MI, __this);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		t2120 * L_4 = (t2120 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2120_TI));
		m11538(L_4, (t2*) &_stringLiteral2043, &m11538_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		t933 * L_5 = p3;
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		t933 * L_6 = m9507(NULL, &m9507_MI);
		p3 = L_6;
	}

IL_0036:
	{
		m9608(__this, &m9608_MI);
		t9 * L_7 = p1;
		if (!L_7)
		{
			goto IL_0090;
		}
	}
	{
		t933 * L_8 = p3;
		t9 * L_9 = p1;
		t126 * L_10 = (__this->f3);
		t901 * L_11 = p4;
		t9 * L_12 = (t9 *)VirtFuncInvoker3< t9 *, t9 *, t126 *, t901 * >::Invoke(&m12024_MI, L_8, L_9, L_10, L_11);
		V_0 = L_12;
		t9 * L_13 = V_0;
		if (L_13)
		{
			goto IL_008b;
		}
	}
	{
		t158* L_14 = ((t158*)SZArrayNew(t158_TI_var, 4));
		ArrayElementTypeCheck (L_14, (t2*) &_stringLiteral2044);
		*((t9 **)(t9 **)SZArrayLdElema(L_14, 0)) = (t9 *)(t2*) &_stringLiteral2044;
		t158* L_15 = L_14;
		t9 * L_16 = p1;
		t126 * L_17 = m2510(L_16, &m2510_MI);
		ArrayElementTypeCheck (L_15, L_17);
		*((t9 **)(t9 **)SZArrayLdElema(L_15, 1)) = (t9 *)L_17;
		t158* L_18 = L_15;
		ArrayElementTypeCheck (L_18, (t2*) &_stringLiteral2045);
		*((t9 **)(t9 **)SZArrayLdElema(L_18, 2)) = (t9 *)(t2*) &_stringLiteral2045;
		t158* L_19 = L_18;
		t126 * L_20 = (__this->f3);
		ArrayElementTypeCheck (L_19, L_20);
		*((t9 **)(t9 **)SZArrayLdElema(L_19, 3)) = (t9 *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_21 = m515(NULL, L_19, &m515_MI);
		t563 * L_22 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5719(L_22, L_21, (t2*) &_stringLiteral2046, &m5719_MI);
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
		m9604(NULL, __this, L_24, L_25, &m9604_MI);
		return;
	}
}
extern MethodInfo m9606_MI;
extern "C" t1814 * m9606 (t1814 * __this, t2* p0, MethodInfo* method)
{
	t1814 * V_0 = {0};
	{
		t1814 * L_0 = (t1814 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1814_TI));
		m9589(L_0, &m9589_MI);
		V_0 = L_0;
		t1814 * L_1 = V_0;
		t2* L_2 = p0;
		L_1->f2 = L_2;
		t1814 * L_3 = V_0;
		t126 * L_4 = (__this->f3);
		L_3->f3 = L_4;
		t1814 * L_5 = V_0;
		int32_t L_6 = (__this->f4);
		L_5->f4 = L_6;
		t1814 * L_7 = V_0;
		t58 L_8 = (__this->f0);
		L_7->f0 = L_8;
		t1814 * L_9 = V_0;
		t313  L_10 = (__this->f1);
		L_9->f1 = L_10;
		t1814 * L_11 = V_0;
		return L_11;
	}
}
extern MethodInfo m9607_MI;
extern "C" void m9607 (t1814 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9596_MI, __this);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9594_MI, __this);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9603_MI, __this);
		m9534(NULL, L_0, L_1, L_2, L_3, 4, &m9534_MI);
		return;
	}
}
extern "C" void m9608 (t1814 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9595_MI, __this);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7801_MI, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		t1341 * L_2 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_2, (t2*) &_stringLiteral2047, &m5713_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		return;
	}
}
#include "t1815.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1815_TI;
#include "t1815MD.h"

extern MethodInfo m9621_MI;


extern MethodInfo m9609_MI;
extern "C" void m9609 (t1815 * __this, MethodInfo* method)
{
	{
		m9621(__this, &m9621_MI);
		t1341 * L_0 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5720(L_0, &m5720_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9610_MI;
extern "C" t126 * m9610 (t1815 * __this, MethodInfo* method)
{
	typedef t126 * (*m9610_ftn) (t1815 *);
	static m9610_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9610_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
#include "t1816.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1816_TI;
#include "t1816MD.h"

#include "t1817MD.h"
extern MethodInfo m9650_MI;


extern MethodInfo m9611_MI;
extern "C" void m9611 (t1816 * __this, MethodInfo* method)
{
	{
		m9650(__this, &m9650_MI);
		t1341 * L_0 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5720(L_0, &m5720_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9612_MI;
extern "C" t126 * m9612 (t1816 * __this, MethodInfo* method)
{
	typedef t126 * (*m9612_ftn) (t1816 *);
	static m9612_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9612_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericCMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
#include "t1818.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1818_TI;
#include "t1818MD.h"

extern MethodInfo m9613_MI;
extern MethodInfo m9614_MI;
extern MethodInfo m9619_MI;


extern "C" void m9613 (t9 * __this , t58 p0, t1818 * p1, MethodInfo* method)
{
	typedef void (*m9613_ftn) (t58, t1818 *);
	static m9613_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9613_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" t1818  m9614 (t9 * __this , t58 p0, MethodInfo* method)
{
	t1818  V_0 = {0};
	{
		t58 L_0 = p0;
		m9613(NULL, L_0, (&V_0), &m9613_MI);
		t1818  L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m9615_MI;
extern "C" t126 * m9615 (t9 * __this , t58 p0, MethodInfo* method)
{
	t1818  V_0 = {0};
	{
		t58 L_0 = p0;
		t1818  L_1 = m9614(NULL, L_0, &m9614_MI);
		V_0 = L_1;
		t126 * L_2 = ((&V_0)->f0);
		return L_2;
	}
}
extern MethodInfo m9616_MI;
extern "C" t126 * m9616 (t9 * __this , t58 p0, MethodInfo* method)
{
	t1818  V_0 = {0};
	{
		t58 L_0 = p0;
		t1818  L_1 = m9614(NULL, L_0, &m9614_MI);
		V_0 = L_1;
		t126 * L_2 = ((&V_0)->f1);
		return L_2;
	}
}
extern MethodInfo m9617_MI;
extern "C" int32_t m9617 (t9 * __this , t58 p0, MethodInfo* method)
{
	t1818  V_0 = {0};
	{
		t58 L_0 = p0;
		t1818  L_1 = m9614(NULL, L_0, &m9614_MI);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->f2);
		return L_2;
	}
}
extern MethodInfo m9618_MI;
extern "C" int32_t m9618 (t9 * __this , t58 p0, MethodInfo* method)
{
	t1818  V_0 = {0};
	{
		t58 L_0 = p0;
		t1818  L_1 = m9614(NULL, L_0, &m9614_MI);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->f4);
		return L_2;
	}
}
extern "C" t928* m9619 (t9 * __this , t58 p0, t560 * p1, MethodInfo* method)
{
	typedef t928* (*m9619_ftn) (t58, t560 *);
	static m9619_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9619_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m9620_MI;
extern "C" t928* m9620 (t9 * __this , t58 p0, t560 * p1, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		t560 * L_1 = p1;
		t928* L_2 = m9619(NULL, L_0, L_1, &m9619_MI);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1575.h"
#include "t1848.h"
extern TypeInfo t1758_TI;
extern TypeInfo t2076_TI;
extern TypeInfo t1848_TI;
extern TypeInfo t1575_TI;
#include "t1848MD.h"
extern MethodInfo m11788_MI;
extern MethodInfo m9623_MI;
extern MethodInfo m9648_MI;
extern MethodInfo m9646_MI;
extern MethodInfo m9634_MI;
extern MethodInfo m9624_MI;
extern MethodInfo m9732_MI;
extern MethodInfo m9649_MI;
extern MethodInfo m9628_MI;
extern MethodInfo m9728_MI;
extern MethodInfo m9791_MI;
extern MethodInfo m9639_MI;
extern MethodInfo m7752_MI;
extern MethodInfo m4492_MI;
extern MethodInfo m7808_MI;
extern MethodInfo m9626_MI;
extern MethodInfo m9641_MI;
extern MethodInfo m9635_MI;
extern MethodInfo m9627_MI;
extern MethodInfo m9632_MI;
extern MethodInfo m9647_MI;
extern MethodInfo m9633_MI;
extern MethodInfo m9642_MI;
extern MethodInfo m11143_MI;
extern MethodInfo m9645_MI;


extern "C" void m9621 (t1761 * __this, MethodInfo* method)
{
	{
		m9551(__this, &m9551_MI);
		return;
	}
}
extern "C" void m9622 (t1761 * __this, t1758  p0, MethodInfo* method)
{
	{
		m9551(__this, &m9551_MI);
		t58 L_0 = m11790((&p0), &m11790_MI);
		__this->f0 = L_0;
		return;
	}
}
extern "C" t2* m9623 (t9 * __this , t914 * p0, MethodInfo* method)
{
	typedef t2* (*m9623_ftn) (t914 *);
	static m9623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9623_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)");
	return _il2cpp_icall_func(p0);
}
extern "C" t1761 * m9624 (t9 * __this , t1761 * p0, MethodInfo* method)
{
	typedef t1761 * (*m9624_ftn) (t1761 *);
	static m9624_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9624_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m9625_MI;
extern "C" t828 * m9625 (t1761 * __this, MethodInfo* method)
{
	{
		t1761 * L_0 = m9624(NULL, __this, &m9624_MI);
		return L_0;
	}
}
extern "C" t126 * m9626 (t1761 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		t126 * L_1 = m9616(NULL, L_0, &m9616_MI);
		return L_1;
	}
}
extern TypeInfo* t928_TI_var;
extern "C" t928* m9627 (t1761 * __this, MethodInfo* method)
{
	static bool m9627_init;
	if (!m9627_init)
	{
		t928_TI_var = il2cpp_codegen_class_from_type(&t928_0_0_0);
		m9627_init = true;
	}
	t928* V_0 = {0};
	t928* V_1 = {0};
	{
		t58 L_0 = (__this->f0);
		t928* L_1 = m9620(NULL, L_0, __this, &m9620_MI);
		V_0 = L_1;
		t928* L_2 = V_0;
		V_1 = ((t928*)SZArrayNew(t928_TI_var, (((int32_t)(((t121 *)L_2)->max_length)))));
		t928* L_3 = V_0;
		t928* L_4 = V_1;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5902_MI, L_3, (t121 *)(t121 *)L_4, 0);
		t928* L_5 = V_1;
		return L_5;
	}
}
extern "C" t9 * m9628 (t1761 * __this, t9 * p0, t158* p1, t138 ** p2, MethodInfo* method)
{
	typedef t9 * (*m9628_ftn) (t1761 *, t9 *, t158*, t138 **);
	static m9628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9628_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m9629_MI;
extern "C" t9 * m9629 (t1761 * __this, t9 * p0, int32_t p1, t933 * p2, t158* p3, t901 * p4, MethodInfo* method)
{
	t928* V_0 = {0};
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
		t933 * L_0 = p2;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		t933 * L_1 = m9507(NULL, &m9507_MI);
		p2 = L_1;
	}

IL_000c:
	{
		t58 L_2 = (__this->f0);
		t928* L_3 = m9620(NULL, L_2, __this, &m9620_MI);
		V_0 = L_3;
		t158* L_4 = p3;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		t928* L_5 = V_0;
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
		t928* L_8 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_8)->max_length))))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		t1826 * L_9 = (t1826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1826_TI));
		m9732(L_9, (t2*) &_stringLiteral2048, &m9732_MI);
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
		t933 * L_11 = p2;
		t158* L_12 = p3;
		t928* L_13 = V_0;
		t901 * L_14 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		bool L_15 = m9508(NULL, L_11, L_12, L_13, L_14, &m9508_MI);
		if (L_15)
		{
			goto IL_005b;
		}
	}
	{
		t563 * L_16 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_16, (t2*) &_stringLiteral2049, &m2909_MI);
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
		t126 * L_20 = m2510((*(t9 **)(t9 **)SZArrayLdElema(L_17, L_19)), &m2510_MI);
		t928* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		t126 * L_24 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_21, L_23)));
		if ((((t9*)(t126 *)L_20) == ((t9*)(t126 *)L_24)))
		{
			goto IL_007f;
		}
	}
	{
		t563 * L_25 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_25, (t2*) &_stringLiteral2048, &m2909_MI);
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
		t928* L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((t121 *)L_28)->max_length))))))
		{
			goto IL_0061;
		}
	}

IL_0089:
	{
		bool L_29 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9649_MI, __this);
		if (!L_29)
		{
			goto IL_009c;
		}
	}
	{
		t1341 * L_30 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_30, (t2*) &_stringLiteral2050, &m5713_MI);
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
		t9 * L_33 = m9628(__this, L_31, L_32, (&V_2), &m9628_MI);
		V_3 = L_33;
		goto IL_00c2;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t2076_TI, e.ex->object.klass))
			goto CATCH_00ac;
		if(il2cpp_codegen_class_is_assignable_from (&t2123_TI, e.ex->object.klass))
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
		t1825 * L_35 = (t1825 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1825_TI));
		m9728(L_35, L_34, &m9728_MI);
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
extern MethodInfo m9630_MI;
extern "C" t1758  m9630 (t1761 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		t1758  L_1 = {0};
		m11788(&L_1, L_0, &m11788_MI);
		return L_1;
	}
}
extern MethodInfo m9631_MI;
extern "C" int32_t m9631 (t1761 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		int32_t L_1 = m9617(NULL, L_0, &m9617_MI);
		return L_1;
	}
}
extern "C" int32_t m9632 (t1761 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		int32_t L_1 = m9618(NULL, L_0, &m9618_MI);
		return L_1;
	}
}
extern "C" t126 * m9633 (t1761 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" t126 * m9634 (t1761 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		t126 * L_1 = m9615(NULL, L_0, &m9615_MI);
		return L_1;
	}
}
extern "C" t2* m9635 (t1761 * __this, MethodInfo* method)
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
		t2* L_2 = m9623(NULL, __this, &m9623_MI);
		return L_2;
	}
}
extern MethodInfo m9636_MI;
extern "C" bool m9636 (t1761 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		bool L_2 = m11606(NULL, __this, L_0, L_1, &m11606_MI);
		return L_2;
	}
}
extern MethodInfo m9637_MI;
extern "C" t158* m9637 (t1761 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_1 = m11605(NULL, __this, L_0, &m11605_MI);
		return L_1;
	}
}
extern MethodInfo m9638_MI;
extern "C" t158* m9638 (t1761 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_2 = m11604(NULL, __this, L_0, L_1, &m11604_MI);
		return L_2;
	}
}
extern "C" t1575 * m9639 (t9 * __this , t58 p0, MethodInfo* method)
{
	typedef t1575 * (*m9639_ftn) (t58);
	static m9639_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9639_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m9640_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m9640 (t1761 * __this, MethodInfo* method)
{
	static bool m9640_init;
	if (!m9640_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9640_init = true;
	}
	int32_t V_0 = 0;
	t1818  V_1 = {0};
	t158* V_2 = {0};
	t1575 * V_3 = {0};
	{
		V_0 = 0;
		t58 L_0 = (__this->f0);
		t1818  L_1 = m9614(NULL, L_0, &m9614_MI);
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
		t1848 * L_12 = (t1848 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1848_TI));
		m9791(L_12, &m9791_MI);
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
		t1575 * L_15 = m9639(NULL, L_14, &m9639_MI);
		V_3 = L_15;
		int32_t L_16 = ((&V_1)->f3);
		if (!((int32_t)((int32_t)L_16&(int32_t)((int32_t)128))))
		{
			goto IL_008e;
		}
	}
	{
		t1575 * L_17 = V_3;
		L_17->f5 = 1;
	}

IL_008e:
	{
		t158* L_18 = V_2;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		t1575 * L_21 = V_3;
		ArrayElementTypeCheck (L_18, L_21);
		*((t9 **)(t9 **)SZArrayLdElema(L_18, L_20)) = (t9 *)L_21;
	}

IL_0096:
	{
		t158* L_22 = V_2;
		return L_22;
	}
}
extern "C" bool m9641 (t9 * __this , t126 * p0, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		t126 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7752_MI, L_0);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		t126 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7758_MI, L_2);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		t126 * L_4 = p0;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11967_MI, L_4);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4492_MI, L_5);
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		t126 * L_7 = p0;
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11967_MI, L_7);
		bool L_9 = m7808(L_8, &m7808_MI);
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
extern "C" t2* m9642 (t1761 * __this, MethodInfo* method)
{
	t322 * V_0 = {0};
	t126 * V_1 = {0};
	t152* V_2 = {0};
	int32_t V_3 = 0;
	t928* V_4 = {0};
	int32_t V_5 = 0;
	t126 * V_6 = {0};
	bool V_7 = false;
	{
		t322 * L_0 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m1165(L_0, &m1165_MI);
		V_0 = L_0;
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9626_MI, __this);
		V_1 = L_1;
		t126 * L_2 = V_1;
		bool L_3 = m9641(NULL, L_2, &m9641_MI);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		t322 * L_4 = V_0;
		t126 * L_5 = V_1;
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7798_MI, L_5);
		m1169(L_4, L_6, &m1169_MI);
		goto IL_0031;
	}

IL_0024:
	{
		t322 * L_7 = V_0;
		t126 * L_8 = V_1;
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4391_MI, L_8);
		m1169(L_7, L_9, &m1169_MI);
	}

IL_0031:
	{
		t322 * L_10 = V_0;
		m1169(L_10, (t2*) &_stringLiteral167, &m1169_MI);
		t322 * L_11 = V_0;
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9635_MI, __this);
		m1169(L_11, L_12, &m1169_MI);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9648_MI, __this);
		if (!L_13)
		{
			goto IL_009e;
		}
	}
	{
		t152* L_14 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9646_MI, __this);
		V_2 = L_14;
		t322 * L_15 = V_0;
		m1169(L_15, (t2*) &_stringLiteral343, &m1169_MI);
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
		t322 * L_17 = V_0;
		m1169(L_17, (t2*) &_stringLiteral341, &m1169_MI);
	}

IL_0079:
	{
		t322 * L_18 = V_0;
		t152* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = L_20;
		t2* L_22 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4391_MI, (*(t126 **)(t126 **)SZArrayLdElema(L_19, L_21)));
		m1169(L_18, L_22, &m1169_MI);
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
		t322 * L_26 = V_0;
		m1169(L_26, (t2*) &_stringLiteral344, &m1169_MI);
	}

IL_009e:
	{
		t322 * L_27 = V_0;
		m1169(L_27, (t2*) &_stringLiteral386, &m1169_MI);
		t928* L_28 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m9627_MI, __this);
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
		t322 * L_30 = V_0;
		m1169(L_30, (t2*) &_stringLiteral387, &m1169_MI);
	}

IL_00c8:
	{
		t928* L_31 = V_4;
		int32_t L_32 = V_5;
		int32_t L_33 = L_32;
		t126 * L_34 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_31, L_33)));
		V_6 = L_34;
		t126 * L_35 = V_6;
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7751_MI, L_35);
		V_7 = L_36;
		bool L_37 = V_7;
		if (!L_37)
		{
			goto IL_00ea;
		}
	}
	{
		t126 * L_38 = V_6;
		t126 * L_39 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11967_MI, L_38);
		V_6 = L_39;
	}

IL_00ea:
	{
		t126 * L_40 = V_6;
		bool L_41 = m9641(NULL, L_40, &m9641_MI);
		if (!L_41)
		{
			goto IL_0103;
		}
	}
	{
		t322 * L_42 = V_0;
		t126 * L_43 = V_6;
		t2* L_44 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7798_MI, L_43);
		m1169(L_42, L_44, &m1169_MI);
		goto IL_0111;
	}

IL_0103:
	{
		t322 * L_45 = V_0;
		t126 * L_46 = V_6;
		t2* L_47 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4391_MI, L_46);
		m1169(L_45, L_47, &m1169_MI);
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
		t322 * L_49 = V_0;
		m1169(L_49, (t2*) &_stringLiteral1458, &m1169_MI);
	}

IL_0121:
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)((int32_t)L_50+(int32_t)1));
	}

IL_0127:
	{
		int32_t L_51 = V_5;
		t928* L_52 = V_4;
		if ((((int32_t)L_51) < ((int32_t)(((int32_t)(((t121 *)L_52)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_53 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9632_MI, __this);
		if (!((int32_t)((int32_t)L_53&(int32_t)2)))
		{
			goto IL_0158;
		}
	}
	{
		t928* L_54 = V_4;
		if ((((int32_t)(((int32_t)(((t121 *)L_54)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_014c;
		}
	}
	{
		t322 * L_55 = V_0;
		m1169(L_55, (t2*) &_stringLiteral387, &m1169_MI);
	}

IL_014c:
	{
		t322 * L_56 = V_0;
		m1169(L_56, (t2*) &_stringLiteral2051, &m1169_MI);
	}

IL_0158:
	{
		t322 * L_57 = V_0;
		m1169(L_57, (t2*) &_stringLiteral147, &m1169_MI);
		t322 * L_58 = V_0;
		t2* L_59 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1171_MI, L_58);
		return L_59;
	}
}
extern MethodInfo m9643_MI;
extern "C" void m9643 (t1761 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	t152* V_0 = {0};
	t152* G_B4_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9648_MI, __this);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9647_MI, __this);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		t152* L_2 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9646_MI, __this);
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
		t1100 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9635_MI, __this);
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9633_MI, __this);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9642_MI, __this);
		t152* L_7 = V_0;
		m9535(NULL, L_3, L_4, L_5, L_6, 8, L_7, &m9535_MI);
		return;
	}
}
extern MethodInfo m9644_MI;
extern "C" t828 * m9644 (t1761 * __this, t152* p0, MethodInfo* method)
{
	t126 * V_0 = {0};
	t152* V_1 = {0};
	int32_t V_2 = 0;
	t828 * V_3 = {0};
	{
		t152* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2052, &m339_MI);
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
		m11143(L_7, &m11143_MI);
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
		t828 * L_12 = m9645(__this, L_11, &m9645_MI);
		V_3 = L_12;
		t828 * L_13 = V_3;
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		t152* L_14 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9646_MI, __this);
		int32_t L_15 = (((int32_t)(((t121 *)L_14)->max_length)));
		t9 * L_16 = Box(InitializedTypeInfo(&t125_TI), &L_15);
		t152* L_17 = p0;
		int32_t L_18 = (((int32_t)(((t121 *)L_17)->max_length)));
		t9 * L_19 = Box(InitializedTypeInfo(&t125_TI), &L_18);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_20 = m1213(NULL, (t2*) &_stringLiteral2053, L_16, L_19, &m1213_MI);
		t563 * L_21 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_21, L_20, &m2909_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_005b:
	{
		t828 * L_22 = V_3;
		return L_22;
	}
}
extern "C" t828 * m9645 (t1761 * __this, t152* p0, MethodInfo* method)
{
	typedef t828 * (*m9645_ftn) (t1761 *, t152*);
	static m9645_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9645_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t152* m9646 (t1761 * __this, MethodInfo* method)
{
	typedef t152* (*m9646_ftn) (t1761 *);
	static m9646_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9646_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetGenericArguments()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m9647 (t1761 * __this, MethodInfo* method)
{
	typedef bool (*m9647_ftn) (t1761 *);
	static m9647_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9647_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethodDefinition()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m9648 (t1761 * __this, MethodInfo* method)
{
	typedef bool (*m9648_ftn) (t1761 *);
	static m9648_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9648_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethod()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m9649 (t1761 * __this, MethodInfo* method)
{
	t126 * V_0 = {0};
	t152* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9648_MI, __this);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		t152* L_1 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9646_MI, __this);
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
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7801_MI, L_5);
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
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9634_MI, __this);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7801_MI, L_10);
		return L_11;
	}
}
#include "t1817.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1817_TI;

#include "t2121.h"
extern TypeInfo t2121_TI;
#include "t2121MD.h"
extern MethodInfo m9651_MI;
extern MethodInfo m9659_MI;
extern MethodInfo m11575_MI;
extern MethodInfo m7750_MI;
extern MethodInfo m9652_MI;
extern MethodInfo m9653_MI;
extern MethodInfo m9660_MI;
extern MethodInfo m9657_MI;
extern MethodInfo m9658_MI;
extern MethodInfo m9664_MI;


extern "C" void m9650 (t1817 * __this, MethodInfo* method)
{
	{
		m9511(__this, &m9511_MI);
		return;
	}
}
extern "C" t928* m9651 (t1817 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f2);
		t928* L_1 = m9620(NULL, L_0, __this, &m9620_MI);
		return L_1;
	}
}
extern "C" t9 * m9652 (t1817 * __this, t9 * p0, t158* p1, t138 ** p2, MethodInfo* method)
{
	typedef t9 * (*m9652_ftn) (t1817 *, t9 *, t158*, t138 **);
	static m9652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9652_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern "C" t9 * m9653 (t1817 * __this, t9 * p0, int32_t p1, t933 * p2, t158* p3, t901 * p4, MethodInfo* method)
{
	t928* V_0 = {0};
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
		t933 * L_0 = p2;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		t933 * L_1 = m9507(NULL, &m9507_MI);
		p2 = L_1;
	}

IL_000c:
	{
		t928* L_2 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m9651_MI, __this);
		V_0 = L_2;
		t158* L_3 = p3;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		t928* L_4 = V_0;
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
		t928* L_7 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_6)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_7)->max_length))))))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		t1826 * L_8 = (t1826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1826_TI));
		m9732(L_8, (t2*) &_stringLiteral2048, &m9732_MI);
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
		t933 * L_10 = p2;
		t158* L_11 = p3;
		t928* L_12 = V_0;
		t901 * L_13 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		bool L_14 = m9508(NULL, L_10, L_11, L_12, L_13, &m9508_MI);
		if (L_14)
		{
			goto IL_0055;
		}
	}
	{
		t563 * L_15 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_15, (t2*) &_stringLiteral2049, &m2909_MI);
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
		t126 * L_19 = m2510((*(t9 **)(t9 **)SZArrayLdElema(L_16, L_18)), &m2510_MI);
		t928* L_20 = V_0;
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		t126 * L_23 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_20, L_22)));
		if ((((t9*)(t126 *)L_19) == ((t9*)(t126 *)L_23)))
		{
			goto IL_0079;
		}
	}
	{
		t563 * L_24 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_24, (t2*) &_stringLiteral2048, &m2909_MI);
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
		t928* L_27 = V_0;
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
		t126 * L_29 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9659_MI, __this);
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7801_MI, L_29);
		if (!L_30)
		{
			goto IL_00ae;
		}
	}
	{
		t126 * L_31 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9659_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_32 = m2419(NULL, (t2*) &_stringLiteral2054, L_31, (t2*) &_stringLiteral2055, &m2419_MI);
		t2121 * L_33 = (t2121 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2121_TI));
		m11575(L_33, L_32, &m11575_MI);
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
		t126 * L_35 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9659_MI, __this);
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7750_MI, L_35);
		if (!L_36)
		{
			goto IL_00da;
		}
	}
	{
		t126 * L_37 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9659_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_38 = m590(NULL, (t2*) &_stringLiteral2056, L_37, &m590_MI);
		t2121 * L_39 = (t2121 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2121_TI));
		m11575(L_39, L_38, &m11575_MI);
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
		t9 * L_42 = m9652(__this, L_40, L_41, (&V_2), &m9652_MI);
		V_3 = L_42;
		goto IL_00fd;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t2123_TI, e.ex->object.klass))
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
		t1825 * L_44 = (t1825 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1825_TI));
		m9728(L_44, L_43, &m9728_MI);
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
extern MethodInfo m9654_MI;
extern "C" t9 * m9654 (t1817 * __this, int32_t p0, t933 * p1, t158* p2, t901 * p3, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t933 * L_1 = p1;
		t158* L_2 = p2;
		t901 * L_3 = p3;
		t9 * L_4 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t933 *, t158*, t901 * >::Invoke(&m9653_MI, __this, NULL, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
extern MethodInfo m9655_MI;
extern "C" t1758  m9655 (t1817 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f2);
		t1758  L_1 = {0};
		m11788(&L_1, L_0, &m11788_MI);
		return L_1;
	}
}
extern MethodInfo m9656_MI;
extern "C" int32_t m9656 (t1817 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f2);
		int32_t L_1 = m9617(NULL, L_0, &m9617_MI);
		return L_1;
	}
}
extern "C" int32_t m9657 (t1817 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f2);
		int32_t L_1 = m9618(NULL, L_0, &m9618_MI);
		return L_1;
	}
}
extern "C" t126 * m9658 (t1817 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t126 * m9659 (t1817 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f2);
		t126 * L_1 = m9615(NULL, L_0, &m9615_MI);
		return L_1;
	}
}
extern "C" t2* m9660 (t1817 * __this, MethodInfo* method)
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
		t2* L_2 = m9623(NULL, __this, &m9623_MI);
		return L_2;
	}
}
extern MethodInfo m9661_MI;
extern "C" bool m9661 (t1817 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		bool L_2 = m11606(NULL, __this, L_0, L_1, &m11606_MI);
		return L_2;
	}
}
extern MethodInfo m9662_MI;
extern "C" t158* m9662 (t1817 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_1 = m11605(NULL, __this, L_0, &m11605_MI);
		return L_1;
	}
}
extern MethodInfo m9663_MI;
extern "C" t158* m9663 (t1817 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_2 = m11604(NULL, __this, L_0, L_1, &m11604_MI);
		return L_2;
	}
}
extern "C" t2* m9664 (t1817 * __this, MethodInfo* method)
{
	t322 * V_0 = {0};
	t928* V_1 = {0};
	int32_t V_2 = 0;
	{
		t322 * L_0 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m1165(L_0, &m1165_MI);
		V_0 = L_0;
		t322 * L_1 = V_0;
		m1169(L_1, (t2*) &_stringLiteral2057, &m1169_MI);
		t322 * L_2 = V_0;
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9660_MI, __this);
		m1169(L_2, L_3, &m1169_MI);
		t322 * L_4 = V_0;
		m1169(L_4, (t2*) &_stringLiteral386, &m1169_MI);
		t928* L_5 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m9651_MI, __this);
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
		t322 * L_7 = V_0;
		m1169(L_7, (t2*) &_stringLiteral387, &m1169_MI);
	}

IL_0046:
	{
		t322 * L_8 = V_0;
		t928* L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		t126 * L_12 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_9, L_11)));
		t2* L_13 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4391_MI, L_12);
		m1169(L_8, L_13, &m1169_MI);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_15 = V_2;
		t928* L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t121 *)L_16)->max_length))))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9657_MI, __this);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_0079;
		}
	}
	{
		t322 * L_18 = V_0;
		m1169(L_18, (t2*) &_stringLiteral2058, &m1169_MI);
	}

IL_0079:
	{
		t322 * L_19 = V_0;
		m1169(L_19, (t2*) &_stringLiteral147, &m1169_MI);
		t322 * L_20 = V_0;
		t2* L_21 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1171_MI, L_20);
		return L_21;
	}
}
extern MethodInfo m9665_MI;
extern "C" void m9665 (t1817 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9660_MI, __this);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9658_MI, __this);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9664_MI, __this);
		m9534(NULL, L_0, L_1, L_2, L_3, 1, &m9534_MI);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
