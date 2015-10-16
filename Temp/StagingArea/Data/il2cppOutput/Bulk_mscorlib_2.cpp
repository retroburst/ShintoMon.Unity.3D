#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1716.h"
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
extern TypeInfo t1716_TI;
#include "t1716MD.h"

#include "t9.h"
#include "t1477.h"
#include "t1476.h"
#include "t124.h"
#include "t122.h"
#include "t463.h"
#include "t58.h"
extern TypeInfo t463_TI;
extern TypeInfo t1476_TI;
extern TypeInfo t462_TI;
extern TypeInfo t9_TI;
#include "t9MD.h"
#include "t463MD.h"
#include "t1476MD.h"
extern MethodInfo m336_MI;
extern MethodInfo m8870_MI;
extern MethodInfo m6958_MI;
extern MethodInfo m6954_MI;
extern MethodInfo m6956_MI;

#include "t121.h"

extern MethodInfo m8869_MI;
extern "C" void m8869 (t1716 * __this, t463 * p0, t9 * p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t9 * L_0 = p1;
		__this->f0 = L_0;
		t463 * L_1 = p0;
		__this->f7 = L_1;
		t463 * L_2 = (__this->f7);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		t58 L_3 = { &m8870_MI };
		t463 * L_4 = (t463 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t463_TI));
		m6958(L_4, NULL, L_3, &m6958_MI);
		__this->f3 = L_4;
	}

IL_002e:
	{
		t1476 * L_5 = (t1476 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1476_TI));
		m6954(L_5, 0, &m6954_MI);
		__this->f2 = L_5;
		return;
	}
}
extern "C" void m8870 (t9 * __this , t9 * p0, MethodInfo* method)
{
	t1716 * V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t1716 *)Castclass(L_0, InitializedTypeInfo(&t1716_TI)));
		t1716 * L_1 = V_0;
		t463 * L_2 = (L_1->f7);
		t9 * L_3 = p0;
		VirtFuncInvoker3< t9 *, t9 *, t463 *, t9 * >::Invoke(&m6956_MI, L_2, L_3, (t463 *)NULL, NULL);
		return;
	}
}
extern MethodInfo m8871_MI;
extern "C" t9 * m8871 (t1716 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8872_MI;
extern "C" t1477 * m8872 (t1716 * __this, MethodInfo* method)
{
	{
		t1476 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8873_MI;
extern "C" bool m8873 (t1716 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f1);
		return L_0;
	}
}
#include "t1707.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1707_TI;
#include "t1707MD.h"

#include "t2.h"
#include "t1093.h"
#include "t1094.h"
#include "t132.h"
#include "t126.h"
#include "t127.h"
#include "t1720.h"
#include "t1717.h"
#include "t125.h"
#include "t556.h"
#include "t293.h"
#include "mscorlib_ArrayTypes.h"
#include "t296.h"
extern TypeInfo t132_TI;
extern TypeInfo t126_TI;
extern TypeInfo t2_TI;
extern TypeInfo t1719_TI;
extern TypeInfo t122_TI;
extern TypeInfo t556_TI;
extern TypeInfo t293_TI;
#include "t1200MD.h"
#include "t132MD.h"
#include "t1093MD.h"
#include "t126MD.h"
#include "t1719MD.h"
#include "t2MD.h"
#include "t556MD.h"
#include "t293MD.h"
extern Il2CppType t2_0_0_0;
extern MethodInfo m5742_MI;
extern MethodInfo m339_MI;
extern MethodInfo m5712_MI;
extern MethodInfo m329_MI;
extern MethodInfo m5700_MI;
extern MethodInfo m8877_MI;
extern MethodInfo m8905_MI;
extern MethodInfo m8879_MI;
extern MethodInfo m2699_MI;
extern MethodInfo m2885_MI;
extern MethodInfo m5952_MI;


extern MethodInfo m8874_MI;
extern "C" void m8874 (t1707 * __this, MethodInfo* method)
{
	{
		m5742(__this, &m5742_MI);
		__this->f4 = 0;
		__this->f1 = (t2*)NULL;
		return;
	}
}
extern MethodInfo m8875_MI;
extern "C" void m8875 (t1707 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		m5742(__this, &m5742_MI);
		t1093 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral418, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t1093 * L_2 = p0;
		t2* L_3 = m5712(L_2, (t2*) &_stringLiteral1651, &m5712_MI);
		__this->f1 = L_3;
		t1093 * L_4 = p0;
		t2* L_5 = m5712(L_4, (t2*) &_stringLiteral1652, &m5712_MI);
		__this->f2 = L_5;
		return;
	}
}
extern MethodInfo m8876_MI;
extern "C" void m8876 (t1707 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t2* L_1 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_2 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5700(L_0, (t2*) &_stringLiteral1652, L_1, L_2, &m5700_MI);
		t1093 * L_3 = p0;
		t2* L_4 = (__this->f1);
		t126 * L_5 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5700(L_3, (t2*) &_stringLiteral1651, L_4, L_5, &m5700_MI);
		return;
	}
}
extern "C" t2* m8877 (t1707 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8878_MI;
extern "C" void m8878 (t1707 * __this, bool p0, MethodInfo* method)
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
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8877_MI, __this);
		t1717 * L_3 = &(__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		m8905(NULL, L_2, L_3, (&V_0), &m8905_MI);
		__this->f4 = 1;
		VirtActionInvoker0::Invoke(&m8879_MI, __this);
		return;
	}
}
extern "C" void m8879 (t1707 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8880_MI;
extern "C" void m8880 (t1707 * __this, t2* p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1588, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2699(L_2, &m2699_MI);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_4, (t2*) &_stringLiteral1653, &m2885_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t305* L_6 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f0;
		int32_t L_7 = m5952(L_5, L_6, &m5952_MI);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_003a;
		}
	}
	{
		t556 * L_8 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_8, (t2*) &_stringLiteral1654, &m2885_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003a:
	{
		return;
	}
}
#include "t1540.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1540_TI;
#include "t1540MD.h"

#include "t138.h"
#include "t1360MD.h"
#include "t138MD.h"
extern MethodInfo m5872_MI;
extern MethodInfo m11781_MI;
extern MethodInfo m11780_MI;
extern MethodInfo m4433_MI;


extern MethodInfo m8881_MI;
extern "C" void m8881 (t1540 * __this, MethodInfo* method)
{
	{
		m5872(__this, (t2*) &_stringLiteral1655, &m5872_MI);
		return;
	}
}
extern MethodInfo m8882_MI;
extern "C" void m8882 (t1540 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		return;
	}
}
extern MethodInfo m6976_MI;
extern "C" void m6976 (t1540 * __this, t2* p0, t138 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p1;
		m11781(__this, L_0, L_1, &m11781_MI);
		return;
	}
}
extern MethodInfo m8883_MI;
extern "C" void m8883 (t1540 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
extern MethodInfo m8884_MI;
extern "C" void m8884 (t1540 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		int32_t L_1 = p1;
		m4433(__this, L_1, &m4433_MI);
		return;
	}
}
#include "t881.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t881_TI;
#include "t881MD.h"

#include "t568.h"
#include "t169.h"
#include "t896.h"
#include "t292.h"
#include "t1521.h"
#include "t1490.h"
extern TypeInfo t169_TI;
extern TypeInfo t158_TI;
extern TypeInfo t125_TI;
extern TypeInfo t896_TI;
extern TypeInfo t723_TI;
extern TypeInfo t568_TI;
extern TypeInfo t1521_TI;
extern TypeInfo t292_TI;
#include "t169MD.h"
#include "t896MD.h"
#include "t1345MD.h"
#include "t291MD.h"
#include "t1521MD.h"
#include "t121MD.h"
#include "t1582MD.h"
extern Il2CppType t158_0_0_0;
extern Il2CppType t723_0_0_0;
extern MethodInfo m8886_MI;
extern MethodInfo m5706_MI;
extern MethodInfo m515_MI;
extern MethodInfo m4336_MI;
extern MethodInfo m5764_MI;
extern MethodInfo m4265_MI;
extern MethodInfo m6982_MI;
extern MethodInfo m5693_MI;
extern MethodInfo m8885_MI;
extern MethodInfo m5691_MI;
extern MethodInfo m6883_MI;
extern MethodInfo m511_MI;
extern MethodInfo m8892_MI;
extern MethodInfo m8889_MI;
extern MethodInfo m1146_MI;
extern MethodInfo m7818_MI;
extern MethodInfo m5870_MI;
extern MethodInfo m8893_MI;


extern MethodInfo m6981_MI;
extern "C" void m6981 (t881 * __this, MethodInfo* method)
{
	{
		m4265(__this, 0, &m4265_MI);
		return;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" void m4265 (t881 * __this, int32_t p0, MethodInfo* method)
{
	static bool m4265_init;
	if (!m4265_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m4265_init = true;
	}
	{
		m6982(__this, &m6982_MI);
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t896 * L_1 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_1, (t2*) &_stringLiteral400, &m5693_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		__this->f1 = 1;
		int32_t L_2 = p0;
		__this->f3 = L_2;
		int32_t L_3 = p0;
		__this->f5 = ((t723*)SZArrayNew(t723_TI_var, L_3));
		__this->f7 = 1;
		__this->f2 = 1;
		return;
	}
}
extern MethodInfo m7002_MI;
extern "C" void m7002 (t881 * __this, t723* p0, MethodInfo* method)
{
	{
		m6982(__this, &m6982_MI);
		t723* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1054, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t723* L_2 = p0;
		t723* L_3 = p0;
		m8885(__this, L_2, 0, (((int32_t)(((t121 *)L_3)->max_length))), 1, 0, &m8885_MI);
		return;
	}
}
extern "C" void m8885 (t881 * __this, t723* p0, int32_t p1, int32_t p2, bool p3, bool p4, MethodInfo* method)
{
	{
		t723* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1054, &m339_MI);
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
		t896 * L_4 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_4, (t2*) &_stringLiteral1660, &m5693_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t723* L_5 = p0;
		int32_t L_6 = p1;
		int32_t L_7 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_5)->max_length)))-(int32_t)L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0039;
		}
	}
	{
		t556 * L_8 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_8, (t2*) &_stringLiteral1661, (t2*) &_stringLiteral1662, &m5691_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0039:
	{
		bool L_9 = p3;
		__this->f1 = L_9;
		t723* L_10 = p0;
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
extern "C" void m8886 (t881 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f8);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_1, (t2*) &_stringLiteral1663, &m6883_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
extern MethodInfo m8887_MI;
extern "C" bool m8887 (t881 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f8);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m7001_MI;
extern "C" bool m7001 (t881 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f8);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8888_MI;
extern "C" bool m8888 (t881 * __this, MethodInfo* method)
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
extern TypeInfo* t723_TI_var;
extern "C" void m8889 (t881 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8889_init;
	if (!m8889_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8889_init = true;
	}
	t723* V_0 = {0};
	{
		m8886(__this, &m8886_MI);
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
		m5706(L_3, (t2*) &_stringLiteral1656, &m5706_MI);
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
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral1657);
		*((t9 **)(t9 **)SZArrayLdElema(L_7, 0)) = (t9 *)(t2*) &_stringLiteral1657;
		t158* L_8 = L_7;
		int32_t L_9 = p0;
		int32_t L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t125_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 1)) = (t9 *)L_11;
		t158* L_12 = L_8;
		ArrayElementTypeCheck (L_12, (t2*) &_stringLiteral168);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 2)) = (t9 *)(t2*) &_stringLiteral168;
		t158* L_13 = L_12;
		int32_t L_14 = (__this->f3);
		int32_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t125_TI), &L_15);
		ArrayElementTypeCheck (L_13, L_16);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 3)) = (t9 *)L_16;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_17 = m515(NULL, L_13, &m515_MI);
		t896 * L_18 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_18, (t2*) &_stringLiteral611, L_17, &m4336_MI);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_006d:
	{
		V_0 = (t723*)NULL;
		int32_t L_19 = p0;
		if (!L_19)
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_20 = p0;
		V_0 = ((t723*)SZArrayNew(t723_TI_var, L_20));
		t723* L_21 = (__this->f5);
		t723* L_22 = V_0;
		int32_t L_23 = (__this->f4);
		m5764(NULL, (t121 *)(t121 *)L_21, 0, (t121 *)(t121 *)L_22, 0, L_23, &m5764_MI);
	}

IL_008d:
	{
		__this->f10 = 0;
		t723* L_24 = V_0;
		__this->f5 = L_24;
		int32_t L_25 = p0;
		__this->f3 = L_25;
		return;
	}
}
extern MethodInfo m6990_MI;
extern "C" int64_t m6990 (t881 * __this, MethodInfo* method)
{
	{
		m8886(__this, &m8886_MI);
		int32_t L_0 = (__this->f4);
		int32_t L_1 = (__this->f6);
		return (((int64_t)((int32_t)((int32_t)L_0-(int32_t)L_1))));
	}
}
extern MethodInfo m6989_MI;
extern "C" int64_t m6989 (t881 * __this, MethodInfo* method)
{
	{
		m8886(__this, &m8886_MI);
		int32_t L_0 = (__this->f9);
		int32_t L_1 = (__this->f6);
		return (((int64_t)((int32_t)((int32_t)L_0-(int32_t)L_1))));
	}
}
extern MethodInfo m6992_MI;
extern "C" void m6992 (t881 * __this, int64_t p0, MethodInfo* method)
{
	{
		m8886(__this, &m8886_MI);
		int64_t L_0 = p0;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_001b;
		}
	}
	{
		t896 * L_1 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_1, (t2*) &_stringLiteral611, (t2*) &_stringLiteral1658, &m4336_MI);
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
		t896 * L_3 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_3, (t2*) &_stringLiteral611, (t2*) &_stringLiteral1659, &m4336_MI);
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
extern MethodInfo m8890_MI;
extern "C" void m8890 (t881 * __this, bool p0, MethodInfo* method)
{
	{
		__this->f8 = 1;
		__this->f7 = 0;
		return;
	}
}
extern MethodInfo m7003_MI;
extern "C" void m7003 (t881 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m6991_MI;
extern "C" int32_t m6991 (t881 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		m8886(__this, &m8886_MI);
		t723* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1054, &m339_MI);
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
		t896 * L_4 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_4, (t2*) &_stringLiteral1664, &m5693_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		t723* L_5 = p0;
		int32_t L_6 = p1;
		int32_t L_7 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_5)->max_length)))-(int32_t)L_6))) >= ((int32_t)L_7)))
		{
			goto IL_003f;
		}
	}
	{
		t556 * L_8 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_8, (t2*) &_stringLiteral1665, (t2*) &_stringLiteral1666, &m5691_MI);
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
		t723* L_17 = (__this->f5);
		int32_t L_18 = (__this->f9);
		t723* L_19 = p0;
		int32_t L_20 = p1;
		int32_t L_21 = p2;
		m5764(NULL, (t121 *)(t121 *)L_17, L_18, (t121 *)(t121 *)L_19, L_20, L_21, &m5764_MI);
		int32_t L_22 = (__this->f9);
		int32_t L_23 = p2;
		__this->f9 = ((int32_t)((int32_t)L_22+(int32_t)L_23));
		int32_t L_24 = p2;
		return L_24;
	}
}
extern MethodInfo m8891_MI;
extern "C" int32_t m8891 (t881 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m8886(__this, &m8886_MI);
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
		t723* L_2 = (__this->f5);
		int32_t L_3 = (__this->f9);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->f9 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_6));
	}
}
extern MethodInfo m6993_MI;
extern "C" int64_t m6993 (t881 * __this, int64_t p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	{
		m8886(__this, &m8886_MI);
		int64_t L_0 = p0;
		if ((((int64_t)L_0) <= ((int64_t)(((int64_t)((int32_t)2147483647))))))
		{
			goto IL_0025;
		}
	}
	{
		int64_t L_1 = p0;
		int64_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t292_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m511(NULL, (t2*) &_stringLiteral1667, L_3, &m511_MI);
		t896 * L_5 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_5, L_4, &m5693_MI);
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
		t1540 * L_9 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8882(L_9, (t2*) &_stringLiteral1668, &m8882_MI);
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
		t556 * L_13 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_13, (t2*) &_stringLiteral1669, (t2*) &_stringLiteral1646, &m5691_MI);
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
		t1540 * L_18 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8882(L_18, (t2*) &_stringLiteral1668, &m8882_MI);
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
extern "C" int32_t m8892 (t881 * __this, int32_t p0, MethodInfo* method)
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
extern "C" void m8893 (t881 * __this, int32_t p0, MethodInfo* method)
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
		int32_t L_3 = m8892(__this, L_2, &m8892_MI);
		VirtActionInvoker1< int32_t >::Invoke(&m8889_MI, __this, L_3);
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
		t723* L_5 = (__this->f5);
		int32_t L_6 = (__this->f4);
		int32_t L_7 = (__this->f10);
		m1146(NULL, (t121 *)(t121 *)L_5, L_6, L_7, &m1146_MI);
		__this->f10 = 0;
	}

IL_003f:
	{
		return;
	}
}
extern MethodInfo m6994_MI;
extern "C" void m6994 (t881 * __this, int64_t p0, MethodInfo* method)
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
		m5706(L_3, (t2*) &_stringLiteral1670, &m5706_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		m8886(__this, &m8886_MI);
		bool L_4 = (__this->f1);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		t2* L_5 = m7818(NULL, (t2*) &_stringLiteral1671, &m7818_MI);
		t169 * L_6 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_6, L_5, &m5706_MI);
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
		t896 * L_10 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5870(L_10, &m5870_MI);
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
		m8893(__this, L_15, &m8893_MI);
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
extern MethodInfo m4272_MI;
extern TypeInfo* t723_TI_var;
extern "C" t723* m4272 (t881 * __this, MethodInfo* method)
{
	static bool m4272_init;
	if (!m4272_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m4272_init = true;
	}
	int32_t V_0 = 0;
	t723* V_1 = {0};
	{
		int32_t L_0 = (__this->f4);
		int32_t L_1 = (__this->f6);
		V_0 = ((int32_t)((int32_t)L_0-(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = ((t723*)SZArrayNew(t723_TI_var, L_2));
		t723* L_3 = (__this->f5);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		t723* L_4 = (__this->f5);
		int32_t L_5 = (__this->f6);
		t723* L_6 = V_1;
		int32_t L_7 = V_0;
		m5764(NULL, (t121 *)(t121 *)L_4, L_5, (t121 *)(t121 *)L_6, 0, L_7, &m5764_MI);
	}

IL_0031:
	{
		t723* L_8 = V_1;
		return L_8;
	}
}
extern MethodInfo m4266_MI;
extern "C" void m4266 (t881 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		m8886(__this, &m8886_MI);
		bool L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_1, (t2*) &_stringLiteral1672, &m5706_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0019:
	{
		t723* L_2 = p0;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1054, &m339_MI);
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
		t896 * L_6 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5870(L_6, &m5870_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0035:
	{
		t723* L_7 = p0;
		int32_t L_8 = p1;
		int32_t L_9 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))-(int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_004d;
		}
	}
	{
		t556 * L_10 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_10, (t2*) &_stringLiteral1665, (t2*) &_stringLiteral1666, &m5691_MI);
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
		m8893(__this, ((int32_t)((int32_t)L_14+(int32_t)L_15)), &m8893_MI);
	}

IL_006b:
	{
		t723* L_16 = p0;
		int32_t L_17 = p1;
		t723* L_18 = (__this->f5);
		int32_t L_19 = (__this->f9);
		int32_t L_20 = p2;
		m5764(NULL, (t121 *)(t121 *)L_16, L_17, (t121 *)(t121 *)L_18, L_19, L_20, &m5764_MI);
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
extern MethodInfo m4277_MI;
extern "C" void m4277 (t881 * __this, uint8_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m8886(__this, &m8886_MI);
		bool L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_1, (t2*) &_stringLiteral1672, &m5706_MI);
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
		m8893(__this, ((int32_t)((int32_t)L_4+(int32_t)1)), &m8893_MI);
		int32_t L_5 = (__this->f9);
		__this->f4 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0043:
	{
		t723* L_6 = (__this->f5);
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
#include "t1718.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1718_TI;
#include "t1718MD.h"



#include "t1719.h"
#ifndef _MSC_VER
#else
#endif

#include "t1706.h"
#include "t2139.h"
#include "t1702.h"
#include "t1721.h"
#include "t290.h"
#include "t1178.h"
#include "t1713.h"
#include "t1712.h"
extern TypeInfo t2139_TI;
extern TypeInfo t1702_TI;
extern TypeInfo t1721_TI;
extern TypeInfo t1720_TI;
#include "t58MD.h"
#include "t2139MD.h"
#include "t1702MD.h"
#include "t1721MD.h"
extern MethodInfo m7552_MI;
extern MethodInfo m11845_MI;
extern MethodInfo m8896_MI;
extern MethodInfo m590_MI;
extern MethodInfo m8751_MI;
extern MethodInfo m8937_MI;
extern MethodInfo m2884_MI;
extern MethodInfo m1190_MI;
extern MethodInfo m8901_MI;


extern MethodInfo m8894_MI;
extern "C" void m8894 (t9 * __this , MethodInfo* method)
{
	{
		((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f0 = (-1);
		t58 L_0 = m7552(NULL, (((int64_t)(-1))), &m7552_MI);
		((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1 = L_0;
		return;
	}
}
extern MethodInfo m8895_MI;
extern "C" t138 * m8895 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11845(L_3, (t2*) &_stringLiteral1673, &m11845_MI);
		return L_3;
	}

IL_0018:
	{
		V_0 = (t2*) &_stringLiteral1674;
		t2* L_4 = V_0;
		int32_t L_5 = p0;
		t1540 * L_6 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8884(L_6, L_4, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_5)), &m8884_MI);
		return L_6;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		int32_t L_8 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_9 = m8896(NULL, L_7, L_8, &m8896_MI);
		return L_9;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t138 * m8896 (t9 * __this , t2* p0, int32_t p1, MethodInfo* method)
{
	static bool m8896_init;
	if (!m8896_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8896_init = true;
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
		t2* L_11 = m590(NULL, (t2*) &_stringLiteral1675, L_10, &m590_MI);
		V_0 = L_11;
		t2* L_12 = V_0;
		t1702 * L_13 = (t1702 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1702_TI));
		m8751(L_13, L_12, &m8751_MI);
		return L_13;
	}

IL_00ae:
	{
		int32_t L_14 = p1;
		t1540 * L_15 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8884(L_15, (t2*) &_stringLiteral1676, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_14)), &m8884_MI);
		return L_15;
	}

IL_00c0:
	{
		t2* L_16 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_17 = m590(NULL, (t2*) &_stringLiteral1677, L_16, &m590_MI);
		V_0 = L_17;
		t2* L_18 = V_0;
		t1702 * L_19 = (t1702 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1702_TI));
		m8751(L_19, L_18, &m8751_MI);
		return L_19;
	}

IL_00d3:
	{
		t2* L_20 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_21 = m590(NULL, (t2*) &_stringLiteral1678, L_20, &m590_MI);
		V_0 = L_21;
		t2* L_22 = V_0;
		t2139 * L_23 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11845(L_23, L_22, &m11845_MI);
		return L_23;
	}

IL_00e6:
	{
		t2* L_24 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_25 = m590(NULL, (t2*) &_stringLiteral1679, L_24, &m590_MI);
		V_0 = L_25;
		t2* L_26 = V_0;
		int32_t L_27 = p1;
		t1540 * L_28 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8884(L_28, L_26, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_27)), &m8884_MI);
		return L_28;
	}

IL_0100:
	{
		t2* L_29 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_30 = m590(NULL, (t2*) &_stringLiteral1680, L_29, &m590_MI);
		V_0 = L_30;
		t2* L_31 = V_0;
		int32_t L_32 = p1;
		t1540 * L_33 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8884(L_33, L_31, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_32)), &m8884_MI);
		return L_33;
	}

IL_011a:
	{
		t2* L_34 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_35 = m590(NULL, (t2*) &_stringLiteral1681, L_34, &m590_MI);
		V_0 = L_35;
		t2* L_36 = V_0;
		int32_t L_37 = p1;
		t1540 * L_38 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8884(L_38, L_36, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_37)), &m8884_MI);
		return L_38;
	}

IL_0134:
	{
		t2* L_39 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_40 = m590(NULL, (t2*) &_stringLiteral1682, L_39, &m590_MI);
		V_0 = L_40;
		t2* L_41 = V_0;
		t1721 * L_42 = (t1721 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1721_TI));
		m8937(L_42, L_41, &m8937_MI);
		return L_42;
	}

IL_0147:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_43 = m2884(NULL, (t2*) &_stringLiteral1683, ((t158*)SZArrayNew(t158_TI_var, 0)), &m2884_MI);
		V_0 = L_43;
		t2* L_44 = V_0;
		int32_t L_45 = p1;
		t1540 * L_46 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8884(L_46, L_44, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_45)), &m8884_MI);
		return L_46;
	}

IL_0166:
	{
		t2* L_47 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_48 = m590(NULL, (t2*) &_stringLiteral1684, L_47, &m590_MI);
		V_0 = L_48;
		t2* L_49 = V_0;
		int32_t L_50 = p1;
		t1540 * L_51 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8884(L_51, L_49, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_50)), &m8884_MI);
		return L_51;
	}

IL_0180:
	{
		t2* L_52 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_53 = m590(NULL, (t2*) &_stringLiteral1685, L_52, &m590_MI);
		V_0 = L_53;
		t2* L_54 = V_0;
		int32_t L_55 = p1;
		t1540 * L_56 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8884(L_56, L_54, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_55)), &m8884_MI);
		return L_56;
	}

IL_019a:
	{
		t2* L_57 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_58 = m590(NULL, (t2*) &_stringLiteral1686, L_57, &m590_MI);
		V_0 = L_58;
		t2* L_59 = V_0;
		int32_t L_60 = p1;
		t1540 * L_61 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8884(L_61, L_59, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_60)), &m8884_MI);
		return L_61;
	}

IL_01b4:
	{
		t2* L_62 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_63 = m590(NULL, (t2*) &_stringLiteral1687, L_62, &m590_MI);
		V_0 = L_63;
		t2* L_64 = V_0;
		int32_t L_65 = p1;
		t1540 * L_66 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8884(L_66, L_64, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_65)), &m8884_MI);
		return L_66;
	}

IL_01ce:
	{
		t2* L_67 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_68 = m590(NULL, (t2*) &_stringLiteral1688, L_67, &m590_MI);
		V_0 = L_68;
		t2* L_69 = V_0;
		int32_t L_70 = p1;
		t1540 * L_71 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8884(L_71, L_69, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_70)), &m8884_MI);
		return L_71;
	}

IL_01e8:
	{
		int32_t L_72 = p1;
		t1540 * L_73 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8884(L_73, (t2*) &_stringLiteral1689, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_72)), &m8884_MI);
		return L_73;
	}

IL_01fa:
	{
		t2* L_74 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_75 = m590(NULL, (t2*) &_stringLiteral1690, L_74, &m590_MI);
		V_0 = L_75;
		t2* L_76 = V_0;
		int32_t L_77 = p1;
		t1540 * L_78 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8884(L_78, L_76, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_77)), &m8884_MI);
		return L_78;
	}

IL_0214:
	{
		V_0 = (t2*) &_stringLiteral1691;
		t2* L_79 = V_0;
		int32_t L_80 = p1;
		t1540 * L_81 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8884(L_81, L_79, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_80)), &m8884_MI);
		return L_81;
	}

IL_0228:
	{
		int32_t L_82 = p1;
		int32_t L_83 = L_82;
		t9 * L_84 = Box(InitializedTypeInfo(&t1720_TI), &L_83);
		t2* L_85 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_86 = m1190(NULL, (t2*) &_stringLiteral1692, L_84, L_85, &m1190_MI);
		V_0 = L_86;
		t2* L_87 = V_0;
		int32_t L_88 = p1;
		t1540 * L_89 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8884(L_89, L_87, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_88)), &m8884_MI);
		return L_89;
	}
}
extern MethodInfo m8897_MI;
extern "C" bool m8897 (t9 * __this , t2* p0, int32_t* p1, MethodInfo* method)
{
	typedef bool (*m8897_ftn) (t2*, int32_t*);
	static m8897_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8897_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8898_MI;
extern "C" t221* m8898 (t9 * __this , t2* p0, t2* p1, int32_t p2, int32_t p3, int32_t* p4, MethodInfo* method)
{
	typedef t221* (*m8898_ftn) (t2*, t2*, int32_t, int32_t, int32_t*);
	static m8898_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8898_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern MethodInfo m8899_MI;
extern "C" t2* m8899 (t9 * __this , int32_t* p0, MethodInfo* method)
{
	typedef t2* (*m8899_ftn) (int32_t*);
	static m8899_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8899_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m8900_MI;
extern "C" bool m8900 (t9 * __this , t2* p0, int32_t* p1, MethodInfo* method)
{
	typedef bool (*m8900_ftn) (t2*, int32_t*);
	static m8900_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8900_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m8901 (t9 * __this , t2* p0, int32_t* p1, MethodInfo* method)
{
	typedef int32_t (*m8901_ftn) (t2*, int32_t*);
	static m8901_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8901_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8902_MI;
extern "C" int32_t m8902 (t9 * __this , t58 p0, int32_t* p1, MethodInfo* method)
{
	typedef int32_t (*m8902_ftn) (t58, int32_t*);
	static m8902_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8902_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8903_MI;
extern "C" bool m8903 (t9 * __this , t2* p0, int32_t* p1, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		t2* L_0 = p0;
		int32_t* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		int32_t L_2 = m8901(NULL, L_0, L_1, &m8901_MI);
		V_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f0;
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
extern MethodInfo m8904_MI;
extern "C" bool m8904 (t9 * __this , t2* p0, int32_t* p1, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		t2* L_0 = p0;
		int32_t* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		int32_t L_2 = m8901(NULL, L_0, L_1, &m8901_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		int32_t L_6 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f0;
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
extern "C" bool m8905 (t9 * __this , t2* p0, t1717 * p1, int32_t* p2, MethodInfo* method)
{
	typedef bool (*m8905_ftn) (t2*, t1717 *, int32_t*);
	static m8905_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8905_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m8906_MI;
extern "C" t58 m8906 (t9 * __this , t2* p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t* p5, MethodInfo* method)
{
	typedef t58 (*m8906_ftn) (t2*, int32_t, int32_t, int32_t, int32_t, int32_t*);
	static m8906_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8906_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5);
}
extern MethodInfo m8907_MI;
extern "C" bool m8907 (t9 * __this , t58 p0, int32_t* p1, MethodInfo* method)
{
	typedef bool (*m8907_ftn) (t58, int32_t*);
	static m8907_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8907_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8908_MI;
extern "C" int32_t m8908 (t9 * __this , t58 p0, t723* p1, int32_t p2, int32_t p3, int32_t* p4, MethodInfo* method)
{
	typedef int32_t (*m8908_ftn) (t58, t723*, int32_t, int32_t, int32_t*);
	static m8908_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8908_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern MethodInfo m8909_MI;
extern "C" int32_t m8909 (t9 * __this , t58 p0, t723* p1, int32_t p2, int32_t p3, int32_t* p4, MethodInfo* method)
{
	typedef int32_t (*m8909_ftn) (t58, t723*, int32_t, int32_t, int32_t*);
	static m8909_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8909_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern MethodInfo m8910_MI;
extern "C" int64_t m8910 (t9 * __this , t58 p0, int64_t p1, int32_t p2, int32_t* p3, MethodInfo* method)
{
	typedef int64_t (*m8910_ftn) (t58, int64_t, int32_t, int32_t*);
	static m8910_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8910_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m8911_MI;
extern "C" int64_t m8911 (t9 * __this , t58 p0, int32_t* p1, MethodInfo* method)
{
	typedef int64_t (*m8911_ftn) (t58, int32_t*);
	static m8911_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8911_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8912_MI;
extern "C" bool m8912 (t9 * __this , t58 p0, int64_t p1, int32_t* p2, MethodInfo* method)
{
	typedef bool (*m8912_ftn) (t58, int64_t, int32_t*);
	static m8912_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8912_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m8913_MI;
extern "C" t58 m8913 (t9 * __this , MethodInfo* method)
{
	typedef t58 (*m8913_ftn) ();
	static m8913_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8913_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleOutput()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8914_MI;
extern "C" t58 m8914 (t9 * __this , MethodInfo* method)
{
	typedef t58 (*m8914_ftn) ();
	static m8914_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8914_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleInput()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8915_MI;
extern "C" t58 m8915 (t9 * __this , MethodInfo* method)
{
	typedef t58 (*m8915_ftn) ();
	static m8915_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8915_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleError()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8916_MI;
extern "C" uint16_t m8916 (t9 * __this , MethodInfo* method)
{
	typedef uint16_t (*m8916_ftn) ();
	static m8916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8916_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_VolumeSeparatorChar()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8917_MI;
extern "C" uint16_t m8917 (t9 * __this , MethodInfo* method)
{
	typedef uint16_t (*m8917_ftn) ();
	static m8917_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8917_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_DirectorySeparatorChar()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8918_MI;
extern "C" uint16_t m8918 (t9 * __this , MethodInfo* method)
{
	typedef uint16_t (*m8918_ftn) ();
	static m8918_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8918_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_AltDirectorySeparatorChar()");
	return _il2cpp_icall_func();
}
extern MethodInfo m8919_MI;
extern "C" uint16_t m8919 (t9 * __this , MethodInfo* method)
{
	typedef uint16_t (*m8919_ftn) ();
	static m8919_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8919_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_PathSeparator()");
	return _il2cpp_icall_func();
}
#ifndef _MSC_VER
#else
#endif
#include "t1720MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1717_TI;
#include "t1717MD.h"



// Conversion methods for marshalling of: System.IO.MonoIOStat
void t1717_marshal(const t1717& unmarshaled, t1717_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
	marshaled.f5 = unmarshaled.f5;
}
void t1717_marshal_back(const t1717_marshaled& marshaled, t1717& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
	unmarshaled.f5 = marshaled.f5;
}
// Conversion method for clean up from marshalling of: System.IO.MonoIOStat
void t1717_marshal_cleanup(t1717_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
}
#ifndef _MSC_VER
#else
#endif

#include "t2163.h"
#include "t2154.h"
#include "t306.h"
#include "t894.h"
extern TypeInfo t296_TI;
extern TypeInfo t305_TI;
extern TypeInfo t2163_TI;
extern TypeInfo t894_TI;
extern TypeInfo t124_TI;
#include "t296MD.h"
#include "t1529MD.h"
#include "t886MD.h"
#include "t2163MD.h"
#include "t307MD.h"
#include "t894MD.h"
extern Il2CppType t305_0_0_0;
extern MethodInfo m8931_MI;
extern MethodInfo m2739_MI;
extern MethodInfo m8930_MI;
extern MethodInfo m2714_MI;
extern MethodInfo m399_MI;
extern MethodInfo m610_MI;
extern MethodInfo m1090_MI;
extern MethodInfo m331_MI;
extern MethodInfo m8929_MI;
extern MethodInfo m4246_MI;
extern MethodInfo m7338_MI;
extern MethodInfo m2715_MI;
extern MethodInfo m8921_MI;
extern MethodInfo m8932_MI;
extern MethodInfo m2741_MI;
extern MethodInfo m8927_MI;
extern MethodInfo m2765_MI;
extern MethodInfo m8804_MI;
extern MethodInfo m1076_MI;
extern MethodInfo m11502_MI;
extern MethodInfo m8926_MI;
extern MethodInfo m8928_MI;
extern MethodInfo m4245_MI;
extern MethodInfo m4424_MI;
extern MethodInfo m8935_MI;
extern MethodInfo m4257_MI;
extern MethodInfo m1107_MI;
extern MethodInfo m5721_MI;
extern MethodInfo m8933_MI;
extern MethodInfo m4334_MI;
extern MethodInfo m5741_MI;
extern MethodInfo m7287_MI;
extern MethodInfo m4420_MI;
extern MethodInfo m5777_MI;
extern MethodInfo m7353_MI;
extern MethodInfo m8934_MI;
extern MethodInfo m4421_MI;
extern FieldInfo t2163_f20_FieldInfo;


extern MethodInfo m8920_MI;
extern TypeInfo* t305_TI_var;
extern "C" void m8920 (t9 * __this , MethodInfo* method)
{
	static bool m8920_init;
	if (!m8920_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m8920_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		uint16_t L_0 = m8916(NULL, &m8916_MI);
		((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f5 = L_0;
		uint16_t L_1 = m8917(NULL, &m8917_MI);
		((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2 = L_1;
		uint16_t L_2 = m8918(NULL, &m8918_MI);
		((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f1 = L_2;
		uint16_t L_3 = m8919(NULL, &m8919_MI);
		((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f3 = L_3;
		t305* L_4 = m8931(NULL, &m8931_MI);
		((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f0 = L_4;
		t2* L_5 = m2739((&((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2), &m2739_MI);
		((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f4 = L_5;
		t305* L_6 = ((t305*)SZArrayNew(t305_TI_var, 3));
		uint16_t L_7 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_6, 0)) = (uint16_t)L_7;
		t305* L_8 = L_6;
		uint16_t L_9 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_8, 1)) = (uint16_t)L_9;
		t305* L_10 = L_8;
		uint16_t L_11 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f5;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 2)) = (uint16_t)L_11;
		((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f6 = L_10;
		uint16_t L_12 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		uint16_t L_13 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f5;
		((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f7 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		return;
	}
}
extern "C" t2* m1076 (t9 * __this , t2* p0, t2* p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1693, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral1694, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t2* L_4 = p0;
		int32_t L_5 = m2699(L_4, &m2699_MI);
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
		int32_t L_8 = m2699(L_7, &m2699_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t305* L_11 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f0;
		int32_t L_12 = m5952(L_10, L_11, &m5952_MI);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0049;
		}
	}
	{
		t556 * L_13 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_13, (t2*) &_stringLiteral1654, &m2885_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0049:
	{
		t2* L_14 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t305* L_15 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f0;
		int32_t L_16 = m5952(L_14, L_15, &m5952_MI);
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0062;
		}
	}
	{
		t556 * L_17 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_17, (t2*) &_stringLiteral1654, &m2885_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0062:
	{
		t2* L_18 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_19 = m8930(NULL, L_18, &m8930_MI);
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
		int32_t L_23 = m2699(L_22, &m2699_MI);
		uint16_t L_24 = m2714(L_21, ((int32_t)((int32_t)L_23-(int32_t)1)), &m2714_MI);
		V_0 = L_24;
		uint16_t L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_26 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00a0;
		}
	}
	{
		uint16_t L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_28 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f1;
		if ((((int32_t)L_27) == ((int32_t)L_28)))
		{
			goto IL_00a0;
		}
	}
	{
		uint16_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_30 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f5;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00a0;
		}
	}
	{
		t2* L_31 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_32 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f4;
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
extern TypeInfo* t305_TI_var;
extern "C" t2* m8921 (t9 * __this , t2* p0, MethodInfo* method)
{
	static bool m8921_init;
	if (!m8921_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m8921_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	t305* V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint16_t V_9 = 0x0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2699(L_0, &m2699_MI);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		t2* L_2 = p0;
		uint16_t L_3 = m2714(L_2, 0, &m2714_MI);
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
		uint16_t L_7 = m2714(L_6, 1, &m2714_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_10 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_003d;
		}
	}
	{
		uint16_t L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_12 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f1;
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
		uint16_t L_17 = m2714(L_15, L_16, &m2714_MI);
		V_5 = L_17;
		uint16_t L_18 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_19 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_0062;
		}
	}
	{
		uint16_t L_20 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_21 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f1;
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
		uint16_t L_27 = m2714(L_25, ((int32_t)((int32_t)L_26+(int32_t)1)), &m2714_MI);
		V_5 = L_27;
		uint16_t L_28 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_29 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		if ((((int32_t)L_28) == ((int32_t)L_29)))
		{
			goto IL_008d;
		}
	}
	{
		uint16_t L_30 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_31 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f1;
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
		V_6 = ((t305*)SZArrayNew(t305_TI_var, ((int32_t)((int32_t)L_38-(int32_t)L_39))));
		int32_t L_40 = V_2;
		if (!L_40)
		{
			goto IL_00ba;
		}
	}
	{
		t305* L_41 = V_6;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_41, 0)) = (uint16_t)((int32_t)92);
		t305* L_42 = V_6;
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
		uint16_t L_47 = m2714(L_45, L_46, &m2714_MI);
		V_9 = L_47;
		uint16_t L_48 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_49 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		if ((((int32_t)L_48) == ((int32_t)L_49)))
		{
			goto IL_00ef;
		}
	}
	{
		uint16_t L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_51 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f1;
		if ((((int32_t)L_50) == ((int32_t)L_51)))
		{
			goto IL_00ef;
		}
	}
	{
		t305* L_52 = V_6;
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
		t305* L_57 = V_6;
		if ((((int32_t)((int32_t)((int32_t)L_56+(int32_t)1))) == ((int32_t)(((int32_t)(((t121 *)L_57)->max_length))))))
		{
			goto IL_0137;
		}
	}
	{
		t305* L_58 = V_6;
		int32_t L_59 = V_8;
		int32_t L_60 = L_59;
		V_8 = ((int32_t)((int32_t)L_60+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_61 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_58, L_60)) = (uint16_t)L_61;
		goto IL_0130;
	}

IL_010a:
	{
		t2* L_62 = p0;
		int32_t L_63 = V_7;
		uint16_t L_64 = m2714(L_62, ((int32_t)((int32_t)L_63+(int32_t)1)), &m2714_MI);
		V_9 = L_64;
		uint16_t L_65 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_66 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_012a;
		}
	}
	{
		uint16_t L_67 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_68 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f1;
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
		t305* L_76 = V_6;
		if ((((int32_t)L_75) < ((int32_t)(((int32_t)(((t121 *)L_76)->max_length))))))
		{
			goto IL_00c5;
		}
	}

IL_014d:
	{
		t305* L_77 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_78 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_78 = m1102(L_78, L_77, &m1090_MI);
		return L_78;
	}
}
extern MethodInfo m8922_MI;
extern "C" t2* m8922 (t9 * __this , t2* p0, MethodInfo* method)
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
		t556 * L_3 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_3, (t2*) &_stringLiteral1695, &m2885_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_6 = m8929(NULL, L_5, &m8929_MI);
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
		t2* L_10 = m4246(L_9, &m4246_MI);
		int32_t L_11 = m2699(L_10, &m2699_MI);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		t556 * L_12 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_12, (t2*) &_stringLiteral1696, &m2885_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0043:
	{
		t2* L_13 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t305* L_14 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f0;
		int32_t L_15 = m5952(L_13, L_14, &m5952_MI);
		if ((((int32_t)L_15) <= ((int32_t)(-1))))
		{
			goto IL_005c;
		}
	}
	{
		t556 * L_16 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_16, (t2*) &_stringLiteral1596, &m2885_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_005c:
	{
		t2* L_17 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t305* L_18 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f6;
		int32_t L_19 = m7338(L_17, L_18, &m7338_MI);
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
		t2* L_25 = m2715(L_23, 0, L_24, &m2715_MI);
		V_1 = L_25;
		t2* L_26 = V_1;
		int32_t L_27 = m2699(L_26, &m2699_MI);
		V_2 = L_27;
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) < ((int32_t)2)))
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_29 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00b1;
		}
	}
	{
		t2* L_30 = V_1;
		int32_t L_31 = V_2;
		uint16_t L_32 = m2714(L_30, ((int32_t)((int32_t)L_31-(int32_t)1)), &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_33 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f5;
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_00b1;
		}
	}
	{
		t2* L_34 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_35 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		uint16_t L_36 = L_35;
		t9 * L_37 = Box(InitializedTypeInfo(&t296_TI), &L_36);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_38 = m511(NULL, L_34, L_37, &m511_MI);
		return L_38;
	}

IL_00b1:
	{
		t2* L_39 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_40 = m8921(NULL, L_39, &m8921_MI);
		return L_40;
	}

IL_00b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_41 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_41;
	}
}
extern MethodInfo m8923_MI;
extern "C" t2* m8923 (t9 * __this , t2* p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t305* L_2 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f0;
		int32_t L_3 = m5952(L_1, L_2, &m5952_MI);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_001e;
		}
	}
	{
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_4, (t2*) &_stringLiteral1654, &m2885_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001e:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		int32_t L_6 = m8932(NULL, L_5, &m8932_MI);
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
		int32_t L_10 = m2699(L_9, &m2699_MI);
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)((int32_t)L_10-(int32_t)1)))))
		{
			goto IL_003c;
		}
	}
	{
		t2* L_11 = p0;
		int32_t L_12 = V_0;
		t2* L_13 = m2741(L_11, L_12, &m2741_MI);
		return L_13;
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_14 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_14;
	}
}
extern MethodInfo m8924_MI;
extern "C" t2* m8924 (t9 * __this , t2* p0, MethodInfo* method)
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
		int32_t L_2 = m2699(L_1, &m2699_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t305* L_5 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f0;
		int32_t L_6 = m5952(L_4, L_5, &m5952_MI);
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		t556 * L_7 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_7, (t2*) &_stringLiteral1654, &m2885_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0026:
	{
		t2* L_8 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t305* L_9 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f6;
		int32_t L_10 = m7338(L_8, L_9, &m7338_MI);
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
		t2* L_14 = m2741(L_12, ((int32_t)((int32_t)L_13+(int32_t)1)), &m2741_MI);
		return L_14;
	}

IL_0040:
	{
		t2* L_15 = p0;
		return L_15;
	}
}
extern MethodInfo m8925_MI;
extern "C" t2* m8925 (t9 * __this , t2* p0, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_1 = m8927(NULL, L_0, &m8927_MI);
		V_0 = L_1;
		t2* L_2 = V_0;
		return L_2;
	}
}
extern "C" t2* m8926 (t9 * __this , t2* p0, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t2* L_0 = p0;
		int32_t L_1 = m2699(L_0, &m2699_MI);
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
		uint16_t L_4 = m2714(L_3, 1, &m2714_MI);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0024;
		}
	}
	{
		t2* L_5 = p0;
		uint16_t L_6 = m2714(L_5, 0, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_7 = m2765(NULL, L_6, &m2765_MI);
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
		t2* L_9 = m8804(NULL, &m8804_MI);
		V_0 = L_9;
		t2* L_10 = p0;
		int32_t L_11 = m2699(L_10, &m2699_MI);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_005f;
		}
	}
	{
		t2* L_12 = V_0;
		uint16_t L_13 = m2714(L_12, 0, &m2714_MI);
		t2* L_14 = p0;
		uint16_t L_15 = m2714(L_14, 0, &m2714_MI);
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
		t9 * L_19 = Box(InitializedTypeInfo(&t296_TI), &L_18);
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
		uint16_t L_22 = m2714(L_21, 2, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_23 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_00cb;
		}
	}
	{
		t2* L_24 = p0;
		uint16_t L_25 = m2714(L_24, 2, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_26 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f1;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00cb;
		}
	}
	{
		t2* L_27 = V_0;
		uint16_t L_28 = m2714(L_27, 0, &m2714_MI);
		t2* L_29 = p0;
		uint16_t L_30 = m2714(L_29, 0, &m2714_MI);
		if ((!(((uint32_t)L_28) == ((uint32_t)L_30))))
		{
			goto IL_00a6;
		}
	}
	{
		t2* L_31 = V_0;
		t2* L_32 = p0;
		t2* L_33 = p0;
		int32_t L_34 = m2699(L_33, &m2699_MI);
		t2* L_35 = m2715(L_32, 2, ((int32_t)((int32_t)L_34-(int32_t)2)), &m2715_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_36 = m1076(NULL, L_31, L_35, &m1076_MI);
		p0 = L_36;
		goto IL_00cb;
	}

IL_00a6:
	{
		t2* L_37 = p0;
		t2* L_38 = m2715(L_37, 0, 2, &m2715_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_39 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f4;
		t2* L_40 = p0;
		t2* L_41 = p0;
		int32_t L_42 = m2699(L_41, &m2699_MI);
		t2* L_43 = m2715(L_40, 2, ((int32_t)((int32_t)L_42-(int32_t)2)), &m2715_MI);
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
extern "C" t2* m8927 (t9 * __this , t2* p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1588, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		t2* L_3 = m4246(L_2, &m4246_MI);
		int32_t L_4 = m2699(L_3, &m2699_MI);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		t2* L_5 = m7818(NULL, (t2*) &_stringLiteral1697, &m7818_MI);
		V_0 = L_5;
		t2* L_6 = V_0;
		t556 * L_7 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_7, L_6, &m2885_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002d:
	{
		bool L_8 = m11502(NULL, &m11502_MI);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		t2* L_9 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_10 = m8926(NULL, L_9, &m8926_MI);
		p0 = L_10;
	}

IL_003e:
	{
		t2* L_11 = p0;
		t2* L_12 = p0;
		int32_t L_13 = m2699(L_12, &m2699_MI);
		uint16_t L_14 = m2714(L_11, ((int32_t)((int32_t)L_13-(int32_t)1)), &m2714_MI);
		V_1 = L_14;
		t2* L_15 = p0;
		int32_t L_16 = m2699(L_15, &m2699_MI);
		if ((((int32_t)L_16) < ((int32_t)2)))
		{
			goto IL_00cb;
		}
	}
	{
		t2* L_17 = p0;
		uint16_t L_18 = m2714(L_17, 0, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_19 = m8928(NULL, L_18, &m8928_MI);
		if (!L_19)
		{
			goto IL_00cb;
		}
	}
	{
		t2* L_20 = p0;
		uint16_t L_21 = m2714(L_20, 1, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_22 = m8928(NULL, L_21, &m8928_MI);
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		t2* L_23 = p0;
		int32_t L_24 = m2699(L_23, &m2699_MI);
		if ((((int32_t)L_24) == ((int32_t)2)))
		{
			goto IL_008f;
		}
	}
	{
		t2* L_25 = p0;
		t2* L_26 = p0;
		uint16_t L_27 = m2714(L_26, 0, &m2714_MI);
		int32_t L_28 = m4245(L_25, L_27, 2, &m4245_MI);
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_009a;
		}
	}

IL_008f:
	{
		t556 * L_29 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_29, (t2*) &_stringLiteral1698, &m2885_MI);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_009a:
	{
		t2* L_30 = p0;
		uint16_t L_31 = m2714(L_30, 0, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_32 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_00bc;
		}
	}
	{
		t2* L_33 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_34 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f1;
		uint16_t L_35 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		t2* L_36 = m4424(L_33, L_34, L_35, &m4424_MI);
		p0 = L_36;
	}

IL_00bc:
	{
		t2* L_37 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_38 = m8935(NULL, L_37, &m8935_MI);
		p0 = L_38;
		goto IL_016c;
	}

IL_00cb:
	{
		t2* L_39 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_40 = m8930(NULL, L_39, &m8930_MI);
		if (L_40)
		{
			goto IL_00ec;
		}
	}
	{
		t2* L_41 = m8804(NULL, &m8804_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_42 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f4;
		t2* L_43 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_44 = m399(NULL, L_41, L_42, L_43, &m399_MI);
		p0 = L_44;
		goto IL_0162;
	}

IL_00ec:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_45 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0162;
		}
	}
	{
		t2* L_46 = p0;
		int32_t L_47 = m2699(L_46, &m2699_MI);
		if ((((int32_t)L_47) < ((int32_t)2)))
		{
			goto IL_0162;
		}
	}
	{
		t2* L_48 = p0;
		uint16_t L_49 = m2714(L_48, 0, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_50 = m8928(NULL, L_49, &m8928_MI);
		if (!L_50)
		{
			goto IL_0162;
		}
	}
	{
		t2* L_51 = p0;
		uint16_t L_52 = m2714(L_51, 1, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_53 = m8928(NULL, L_52, &m8928_MI);
		if (L_53)
		{
			goto IL_0162;
		}
	}
	{
		t2* L_54 = m8804(NULL, &m8804_MI);
		V_2 = L_54;
		t2* L_55 = V_2;
		uint16_t L_56 = m2714(L_55, 1, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_57 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f5;
		if ((!(((uint32_t)L_56) == ((uint32_t)L_57))))
		{
			goto IL_0142;
		}
	}
	{
		t2* L_58 = V_2;
		t2* L_59 = m2715(L_58, 0, 2, &m2715_MI);
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
		int32_t L_65 = m4257(L_64, (t2*) &_stringLiteral347, &m4257_MI);
		int32_t L_66 = m4245(L_63, ((int32_t)92), ((int32_t)((int32_t)L_65+(int32_t)1)), &m4245_MI);
		t2* L_67 = m2715(L_62, 0, L_66, &m2715_MI);
		p0 = L_67;
	}

IL_0162:
	{
		t2* L_68 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_69 = m8935(NULL, L_68, &m8935_MI);
		p0 = L_69;
	}

IL_016c:
	{
		uint16_t L_70 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_71 = m8928(NULL, L_70, &m8928_MI);
		if (!L_71)
		{
			goto IL_019d;
		}
	}
	{
		t2* L_72 = p0;
		t2* L_73 = p0;
		int32_t L_74 = m2699(L_73, &m2699_MI);
		uint16_t L_75 = m2714(L_72, ((int32_t)((int32_t)L_74-(int32_t)1)), &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_76 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		if ((((int32_t)L_75) == ((int32_t)L_76)))
		{
			goto IL_019d;
		}
	}
	{
		t2* L_77 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_78 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		uint16_t L_79 = L_78;
		t9 * L_80 = Box(InitializedTypeInfo(&t296_TI), &L_79);
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
extern "C" bool m8928 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		uint16_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_1 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		uint16_t L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_3 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f1;
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
extern "C" t2* m8929 (t9 * __this , t2* p0, MethodInfo* method)
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
		t2* L_2 = m4246(L_1, &m4246_MI);
		int32_t L_3 = m2699(L_2, &m2699_MI);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_4, (t2*) &_stringLiteral1699, &m2885_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001d:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_6 = m8930(NULL, L_5, &m8930_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_8 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_004f;
		}
	}
	{
		t2* L_9 = p0;
		uint16_t L_10 = m2714(L_9, 0, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_11 = m8928(NULL, L_10, &m8928_MI);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_12 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f4;
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
		int32_t L_15 = m2699(L_14, &m2699_MI);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_006e;
		}
	}
	{
		t2* L_16 = p0;
		uint16_t L_17 = m2714(L_16, 0, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_18 = m8928(NULL, L_17, &m8928_MI);
		if (!L_18)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_19 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f4;
		return L_19;
	}

IL_006e:
	{
		t2* L_20 = p0;
		int32_t L_21 = m2699(L_20, &m2699_MI);
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
		uint16_t L_24 = m2714(L_23, 0, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_25 = m8928(NULL, L_24, &m8928_MI);
		if (!L_25)
		{
			goto IL_010f;
		}
	}
	{
		t2* L_26 = p0;
		uint16_t L_27 = m2714(L_26, 1, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_28 = m8928(NULL, L_27, &m8928_MI);
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
		int32_t L_32 = m2699(L_31, &m2699_MI);
		if ((((int32_t)L_30) >= ((int32_t)L_32)))
		{
			goto IL_00bc;
		}
	}
	{
		t2* L_33 = p0;
		int32_t L_34 = V_0;
		uint16_t L_35 = m2714(L_33, L_34, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_36 = m8928(NULL, L_35, &m8928_MI);
		if (!L_36)
		{
			goto IL_00a1;
		}
	}

IL_00bc:
	{
		int32_t L_37 = V_0;
		t2* L_38 = p0;
		int32_t L_39 = m2699(L_38, &m2699_MI);
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
		int32_t L_44 = m2699(L_43, &m2699_MI);
		if ((((int32_t)L_42) >= ((int32_t)L_44)))
		{
			goto IL_00e6;
		}
	}
	{
		t2* L_45 = p0;
		int32_t L_46 = V_0;
		uint16_t L_47 = m2714(L_45, L_46, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_48 = m8928(NULL, L_47, &m8928_MI);
		if (!L_48)
		{
			goto IL_00cb;
		}
	}

IL_00e6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_49 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f4;
		t2* L_50 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f4;
		t2* L_51 = p0;
		int32_t L_52 = V_0;
		t2* L_53 = m2715(L_51, 2, ((int32_t)((int32_t)L_52-(int32_t)2)), &m2715_MI);
		uint16_t L_54 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f1;
		uint16_t L_55 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		t2* L_56 = m4424(L_53, L_54, L_55, &m4424_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_57 = m399(NULL, L_49, L_50, L_56, &m399_MI);
		return L_57;
	}

IL_010f:
	{
		t2* L_58 = p0;
		uint16_t L_59 = m2714(L_58, 0, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_60 = m8928(NULL, L_59, &m8928_MI);
		if (!L_60)
		{
			goto IL_0123;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_61 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f4;
		return L_61;
	}

IL_0123:
	{
		t2* L_62 = p0;
		uint16_t L_63 = m2714(L_62, 1, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_64 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f5;
		if ((!(((uint32_t)L_63) == ((uint32_t)L_64))))
		{
			goto IL_014e;
		}
	}
	{
		t2* L_65 = p0;
		int32_t L_66 = m2699(L_65, &m2699_MI);
		if ((((int32_t)L_66) < ((int32_t)3)))
		{
			goto IL_014c;
		}
	}
	{
		t2* L_67 = p0;
		uint16_t L_68 = m2714(L_67, 2, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_69 = m8928(NULL, L_68, &m8928_MI);
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
		t2* L_71 = m8804(NULL, &m8804_MI);
		t2* L_72 = m2715(L_71, 0, 2, &m2715_MI);
		return L_72;
	}

IL_015b:
	{
		t2* L_73 = p0;
		int32_t L_74 = V_0;
		t2* L_75 = m2715(L_73, 0, L_74, &m2715_MI);
		return L_75;
	}
}
extern "C" bool m8930 (t9 * __this , t2* p0, MethodInfo* method)
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
		int32_t L_2 = m2699(L_1, &m2699_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t305* L_4 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f0;
		int32_t L_5 = m5952(L_3, L_4, &m5952_MI);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_6, (t2*) &_stringLiteral1654, &m2885_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0026:
	{
		t2* L_7 = p0;
		uint16_t L_8 = m2714(L_7, 0, &m2714_MI);
		V_0 = L_8;
		uint16_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_10 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0061;
		}
	}
	{
		uint16_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_12 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f1;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_13 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f7;
		if (L_13)
		{
			goto IL_005e;
		}
	}
	{
		t2* L_14 = p0;
		int32_t L_15 = m2699(L_14, &m2699_MI);
		if ((((int32_t)L_15) <= ((int32_t)1)))
		{
			goto IL_005e;
		}
	}
	{
		t2* L_16 = p0;
		uint16_t L_17 = m2714(L_16, 1, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_18 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f5;
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
extern TypeInfo* t305_TI_var;
extern "C" t305* m8931 (t9 * __this , MethodInfo* method)
{
	static bool m8931_init;
	if (!m8931_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m8931_init = true;
	}
	{
		bool L_0 = m11502(NULL, &m11502_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t305* L_1 = ((t305*)SZArrayNew(t305_TI_var, ((int32_t)36)));
		m1107(NULL, (t121 *)(t121 *)L_1, LoadFieldToken(&t2163_f20_FieldInfo), &m1107_MI);
		return L_1;
	}

IL_001a:
	{
		return ((t305*)SZArrayNew(t305_TI_var, 1));
	}
}
extern "C" int32_t m8932 (t9 * __this , t2* p0, MethodInfo* method)
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
		int32_t L_2 = m5721(L_1, ((int32_t)46), &m5721_MI);
		V_0 = L_2;
		t2* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t305* L_4 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f6;
		int32_t L_5 = m7338(L_3, L_4, &m7338_MI);
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
extern "C" t2* m8933 (t9 * __this , t2* p0, MethodInfo* method)
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
		int32_t L_3 = m2699(L_2, &m2699_MI);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}
	{
		t2* L_4 = p0;
		int32_t L_5 = V_0;
		uint16_t L_6 = m2714(L_4, L_5, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_7 = m8928(NULL, L_6, &m8928_MI);
		if (!L_7)
		{
			goto IL_0004;
		}
	}

IL_001f:
	{
		int32_t L_8 = V_0;
		t2* L_9 = p0;
		int32_t L_10 = m2699(L_9, &m2699_MI);
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
		int32_t L_15 = m2699(L_14, &m2699_MI);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_0049;
		}
	}
	{
		t2* L_16 = p0;
		int32_t L_17 = V_0;
		uint16_t L_18 = m2714(L_16, L_17, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_19 = m8928(NULL, L_18, &m8928_MI);
		if (!L_19)
		{
			goto IL_002e;
		}
	}

IL_0049:
	{
		t2* L_20 = p0;
		int32_t L_21 = V_0;
		t2* L_22 = m2715(L_20, 2, ((int32_t)((int32_t)L_21-(int32_t)2)), &m2715_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_23 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f1;
		uint16_t L_24 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		t2* L_25 = m4424(L_22, L_23, L_24, &m4424_MI);
		return L_25;
	}
}
extern "C" bool m8934 (t9 * __this , t2* p0, t2* p1, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	uint16_t V_2 = 0x0;
	int32_t G_B18_0 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2699(L_0, &m2699_MI);
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		t2* L_2 = p1;
		int32_t L_3 = m2699(L_2, &m2699_MI);
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
		uint16_t L_5 = m2714(L_4, 0, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_6 = m8928(NULL, L_5, &m8928_MI);
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		t2* L_7 = p0;
		uint16_t L_8 = m2714(L_7, 1, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_9 = m8928(NULL, L_8, &m8928_MI);
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		t2* L_10 = p1;
		uint16_t L_11 = m2714(L_10, 0, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_12 = m8928(NULL, L_11, &m8928_MI);
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		t2* L_13 = p1;
		uint16_t L_14 = m2714(L_13, 1, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_15 = m8928(NULL, L_14, &m8928_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_17 = m8933(NULL, L_16, &m8933_MI);
		V_0 = L_17;
		t2* L_18 = p1;
		t2* L_19 = m8933(NULL, L_18, &m8933_MI);
		V_1 = L_19;
		t2* L_20 = V_0;
		t2* L_21 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_22 = m4334(NULL, &m4334_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_23 = m5741(NULL, L_20, L_21, 1, L_22, &m5741_MI);
		return ((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		t2* L_24 = p0;
		uint16_t L_25 = m2714(L_24, 0, &m2714_MI);
		V_2 = L_25;
		t2* L_26 = p1;
		uint16_t L_27 = m2714(L_26, 0, &m2714_MI);
		bool L_28 = m7287((&V_2), L_27, &m7287_MI);
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
		uint16_t L_30 = m2714(L_29, 1, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_31 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f5;
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
		int32_t L_33 = m2699(L_32, &m2699_MI);
		if ((((int32_t)L_33) <= ((int32_t)2)))
		{
			goto IL_00c7;
		}
	}
	{
		t2* L_34 = p1;
		int32_t L_35 = m2699(L_34, &m2699_MI);
		if ((((int32_t)L_35) <= ((int32_t)2)))
		{
			goto IL_00c7;
		}
	}
	{
		t2* L_36 = p0;
		uint16_t L_37 = m2714(L_36, 2, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_38 = m8928(NULL, L_37, &m8928_MI);
		if (!L_38)
		{
			goto IL_00c5;
		}
	}
	{
		t2* L_39 = p1;
		uint16_t L_40 = m2714(L_39, 2, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_41 = m8928(NULL, L_40, &m8928_MI);
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
extern TypeInfo* t305_TI_var;
extern "C" t2* m8935 (t9 * __this , t2* p0, MethodInfo* method)
{
	static bool m8935_init;
	if (!m8935_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m8935_init = true;
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
		bool L_2 = m11502(NULL, &m11502_MI);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		t2* L_3 = p0;
		t2* L_4 = m4246(L_3, &m4246_MI);
		p0 = L_4;
	}

IL_0016:
	{
		t2* L_5 = p0;
		int32_t L_6 = m2699(L_5, &m2699_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_9 = m8929(NULL, L_8, &m8929_MI);
		V_0 = L_9;
		t2* L_10 = p0;
		t305* L_11 = ((t305*)SZArrayNew(t305_TI_var, 2));
		uint16_t L_12 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_11, 0)) = (uint16_t)L_12;
		t305* L_13 = L_11;
		uint16_t L_14 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 1)) = (uint16_t)L_14;
		t221* L_15 = m4420(L_10, L_13, &m4420_MI);
		V_1 = L_15;
		V_2 = 0;
		bool L_16 = m11502(NULL, &m11502_MI);
		if (!L_16)
		{
			goto IL_0072;
		}
	}
	{
		t2* L_17 = V_0;
		int32_t L_18 = m2699(L_17, &m2699_MI);
		if ((((int32_t)L_18) <= ((int32_t)2)))
		{
			goto IL_0072;
		}
	}
	{
		t2* L_19 = V_0;
		uint16_t L_20 = m2714(L_19, 0, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_21 = m8928(NULL, L_20, &m8928_MI);
		if (!L_21)
		{
			goto IL_0072;
		}
	}
	{
		t2* L_22 = V_0;
		uint16_t L_23 = m2714(L_22, 1, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_24 = m8928(NULL, L_23, &m8928_MI);
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
		bool L_26 = m11502(NULL, &m11502_MI);
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
		t2* L_32 = m5777((*(t2**)(t2**)SZArrayLdElema(L_29, L_31)), ((t305*)SZArrayNew(t305_TI_var, 0)), &m5777_MI);
		ArrayElementTypeCheck (L_27, L_32);
		*((t2**)(t2**)SZArrayLdElema(L_27, L_28)) = (t2*)L_32;
	}

IL_009c:
	{
		t221* L_33 = V_1;
		int32_t L_34 = V_5;
		int32_t L_35 = L_34;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_36 = m331(NULL, (*(t2**)(t2**)SZArrayLdElema(L_33, L_35)), (t2*) &_stringLiteral140, &m331_MI);
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
		int32_t L_41 = m2699((*(t2**)(t2**)SZArrayLdElema(L_38, L_40)), &m2699_MI);
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
		bool L_45 = m331(NULL, (*(t2**)(t2**)SZArrayLdElema(L_42, L_44)), (t2*) &_stringLiteral739, &m331_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_65 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f4;
		t221* L_66 = V_1;
		int32_t L_67 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_68 = m7353(NULL, L_65, L_66, 0, L_67, &m7353_MI);
		V_6 = L_68;
		bool L_69 = m11502(NULL, &m11502_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_71 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f4;
		t2* L_72 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_73 = m610(NULL, L_71, L_72, &m610_MI);
		V_6 = L_73;
	}

IL_0132:
	{
		t2* L_74 = V_0;
		t2* L_75 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_76 = m8934(NULL, L_74, L_75, &m8934_MI);
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
		uint16_t L_83 = m2714(L_82, 0, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_84 = m8928(NULL, L_83, &m8928_MI);
		if (L_84)
		{
			goto IL_0191;
		}
	}
	{
		t2* L_85 = V_0;
		t2* L_86 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_87 = m8934(NULL, L_85, L_86, &m8934_MI);
		if (!L_87)
		{
			goto IL_0191;
		}
	}
	{
		t2* L_88 = V_6;
		int32_t L_89 = m2699(L_88, &m2699_MI);
		if ((((int32_t)L_89) > ((int32_t)2)))
		{
			goto IL_018e;
		}
	}
	{
		t2* L_90 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_91 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f4;
		bool L_92 = m4421(L_90, L_91, &m4421_MI);
		if (L_92)
		{
			goto IL_018e;
		}
	}
	{
		t2* L_93 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_94 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		uint16_t L_95 = L_94;
		t9 * L_96 = Box(InitializedTypeInfo(&t296_TI), &L_95);
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
		t2* L_99 = m8804(NULL, &m8804_MI);
		V_7 = L_99;
		t2* L_100 = V_7;
		int32_t L_101 = m2699(L_100, &m2699_MI);
		if ((((int32_t)L_101) <= ((int32_t)1)))
		{
			goto IL_01ea;
		}
	}
	{
		t2* L_102 = V_7;
		uint16_t L_103 = m2714(L_102, 1, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_104 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f5;
		if ((!(((uint32_t)L_103) == ((uint32_t)L_104))))
		{
			goto IL_01ea;
		}
	}
	{
		t2* L_105 = V_6;
		int32_t L_106 = m2699(L_105, &m2699_MI);
		if (!L_106)
		{
			goto IL_01c9;
		}
	}
	{
		t2* L_107 = V_6;
		uint16_t L_108 = m2714(L_107, 0, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_109 = m8928(NULL, L_108, &m8928_MI);
		if (!L_109)
		{
			goto IL_01d9;
		}
	}

IL_01c9:
	{
		t2* L_110 = V_6;
		uint16_t L_111 = ((int32_t)92);
		t9 * L_112 = Box(InitializedTypeInfo(&t296_TI), &L_111);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_113 = m511(NULL, L_110, L_112, &m511_MI);
		V_6 = L_113;
	}

IL_01d9:
	{
		t2* L_114 = V_7;
		t2* L_115 = m2715(L_114, 0, 2, &m2715_MI);
		t2* L_116 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_117 = m610(NULL, L_115, L_116, &m610_MI);
		return L_117;
	}

IL_01ea:
	{
		t2* L_118 = V_7;
		t2* L_119 = V_7;
		int32_t L_120 = m2699(L_119, &m2699_MI);
		uint16_t L_121 = m2714(L_118, ((int32_t)((int32_t)L_120-(int32_t)1)), &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_122 = m8928(NULL, L_121, &m8928_MI);
		if (!L_122)
		{
			goto IL_0220;
		}
	}
	{
		t2* L_123 = V_6;
		uint16_t L_124 = m2714(L_123, 0, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		bool L_125 = m8928(NULL, L_124, &m8928_MI);
		if (!L_125)
		{
			goto IL_0220;
		}
	}
	{
		t2* L_126 = V_7;
		t2* L_127 = V_6;
		t2* L_128 = m2741(L_127, 1, &m2741_MI);
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



extern MethodInfo m8936_MI;
extern "C" void m8936 (t1721 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral1700, &m7818_MI);
		m8882(__this, L_0, &m8882_MI);
		return;
	}
}
extern "C" void m8937 (t1721 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m8882(__this, L_0, &m8882_MI);
		return;
	}
}
extern MethodInfo m8938_MI;
extern "C" void m8938 (t1721 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m8883(__this, L_0, L_1, &m8883_MI);
		return;
	}
}
#include "t1722.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1722_TI;
#include "t1722MD.h"



extern MethodInfo m8939_MI;
extern TypeInfo* t305_TI_var;
extern "C" void m8939 (t9 * __this , MethodInfo* method)
{
	static bool m8939_init;
	if (!m8939_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m8939_init = true;
	}
	{
		t305* L_0 = ((t305*)SZArrayNew(t305_TI_var, 2));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)42);
		t305* L_1 = L_0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 1)) = (uint16_t)((int32_t)63);
		((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f0 = L_1;
		t305* L_2 = ((t305*)SZArrayNew(t305_TI_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_3 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 0)) = (uint16_t)L_3;
		t305* L_4 = L_2;
		uint16_t L_5 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, 1)) = (uint16_t)L_5;
		((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f1 = L_4;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1490_TI;
#include "t1490MD.h"



#include "t291.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t291_TI;

#include "t1723.h"
#include "t1724.h"
#include "t1332.h"
extern TypeInfo t1723_TI;
extern TypeInfo t1724_TI;
extern TypeInfo t138_TI;
extern TypeInfo t1332_TI;
#include "t1723MD.h"
#include "t1724MD.h"
#include "t1332MD.h"
extern MethodInfo m8941_MI;
extern MethodInfo m1081_MI;
extern MethodInfo m6999_MI;
extern MethodInfo m6969_MI;
extern MethodInfo m6953_MI;
extern MethodInfo m6979_MI;
extern MethodInfo m8955_MI;
extern MethodInfo m8957_MI;
extern MethodInfo m7808_MI;
extern MethodInfo m6980_MI;
extern MethodInfo m8956_MI;
extern MethodInfo m8962_MI;
extern MethodInfo m8963_MI;
extern MethodInfo m5685_MI;
extern MethodInfo m8964_MI;
extern MethodInfo m8961_MI;


extern "C" void m6982 (t291 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8940_MI;
extern "C" void m8940 (t9 * __this , MethodInfo* method)
{
	{
		t1723 * L_0 = (t1723 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1723_TI));
		m8941(L_0, &m8941_MI);
		((t291_SFs*)InitializedTypeInfo(&t291_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m7028_MI;
extern "C" void m7028 (t291 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&m1081_MI, __this);
		return;
	}
}
extern "C" void m6999 (t291 * __this, bool p0, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m1081 (t291 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m6999_MI, __this, 1);
		return;
	}
}
extern MethodInfo m6967_MI;
extern TypeInfo* t723_TI_var;
extern "C" int32_t m6967 (t291 * __this, MethodInfo* method)
{
	static bool m6967_init;
	if (!m6967_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m6967_init = true;
	}
	t723* V_0 = {0};
	{
		V_0 = ((t723*)SZArrayNew(t723_TI_var, 1));
		t723* L_0 = V_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker3< int32_t, t723*, int32_t, int32_t >::Invoke(&m6969_MI, __this, L_0, 0, 1);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		t723* L_2 = V_0;
		int32_t L_3 = 0;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3));
	}

IL_0017:
	{
		return (-1);
	}
}
extern MethodInfo m6944_MI;
extern TypeInfo* t723_TI_var;
extern "C" void m6944 (t291 * __this, uint8_t p0, MethodInfo* method)
{
	static bool m6944_init;
	if (!m6944_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m6944_init = true;
	}
	t723* V_0 = {0};
	{
		V_0 = ((t723*)SZArrayNew(t723_TI_var, 1));
		t723* L_0 = V_0;
		uint8_t L_1 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)L_1;
		t723* L_2 = V_0;
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, __this, L_2, 0, 1);
		return;
	}
}
extern MethodInfo m6959_MI;
extern "C" t9 * m6959 (t291 * __this, t723* p0, int32_t p1, int32_t p2, t463 * p3, t9 * p4, MethodInfo* method)
{
	t1724 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6979_MI, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_1, (t2*) &_stringLiteral1637, &m5706_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t9 * L_2 = p4;
		t1724 * L_3 = (t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1724_TI));
		m8955(L_3, L_2, &m8955_MI);
		V_0 = L_3;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		t723* L_4 = p0;
		int32_t L_5 = p1;
		int32_t L_6 = p2;
		int32_t L_7 = (int32_t)VirtFuncInvoker3< int32_t, t723*, int32_t, int32_t >::Invoke(&m6969_MI, __this, L_4, L_5, L_6);
		V_1 = L_7;
		t1724 * L_8 = V_0;
		int32_t L_9 = V_1;
		m8957(L_8, (t138 *)NULL, L_9, &m8957_MI);
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
		t1724 * L_10 = V_0;
		t138 * L_11 = V_2;
		m8957(L_10, L_11, 0, &m8957_MI);
		goto IL_003a;
	} // end catch (depth: 1)

IL_003a:
	{
		t463 * L_12 = p3;
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		t463 * L_13 = p3;
		t1724 * L_14 = V_0;
		VirtActionInvoker1< t9 * >::Invoke(&m7808_MI, L_13, L_14);
	}

IL_0046:
	{
		t1724 * L_15 = V_0;
		return L_15;
	}
}
extern MethodInfo m6970_MI;
extern "C" t9 * m6970 (t291 * __this, t723* p0, int32_t p1, int32_t p2, t463 * p3, t9 * p4, MethodInfo* method)
{
	t1724 * V_0 = {0};
	t138 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6980_MI, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_1, (t2*) &_stringLiteral1643, &m5706_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t9 * L_2 = p4;
		t1724 * L_3 = (t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1724_TI));
		m8955(L_3, L_2, &m8955_MI);
		V_0 = L_3;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		t723* L_4 = p0;
		int32_t L_5 = p1;
		int32_t L_6 = p2;
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, __this, L_4, L_5, L_6);
		t1724 * L_7 = V_0;
		m8956(L_7, (t138 *)NULL, &m8956_MI);
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
		t1724 * L_8 = V_0;
		t138 * L_9 = V_1;
		m8956(L_8, L_9, &m8956_MI);
		goto IL_0037;
	} // end catch (depth: 1)

IL_0037:
	{
		t463 * L_10 = p3;
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		t463 * L_11 = p3;
		t1724 * L_12 = V_0;
		VirtFuncInvoker3< t9 *, t9 *, t463 *, t9 * >::Invoke(&m6956_MI, L_11, L_12, (t463 *)NULL, NULL);
	}

IL_0046:
	{
		t1724 * L_13 = V_0;
		return L_13;
	}
}
extern MethodInfo m6961_MI;
extern "C" int32_t m6961 (t291 * __this, t9 * p0, MethodInfo* method)
{
	t1724 * V_0 = {0};
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1641, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		V_0 = ((t1724 *)IsInst(L_2, InitializedTypeInfo(&t1724_TI)));
		t1724 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		t1724 * L_4 = V_0;
		int32_t L_5 = m8962(L_4, &m8962_MI);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}

IL_0021:
	{
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_6, (t2*) &_stringLiteral1642, (t2*) &_stringLiteral1641, &m5691_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		t1724 * L_7 = V_0;
		bool L_8 = m8963(L_7, &m8963_MI);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		t1332 * L_9 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_9, (t2*) &_stringLiteral1701, &m5685_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0044:
	{
		t1724 * L_10 = V_0;
		m8964(L_10, 1, &m8964_MI);
		t1724 * L_11 = V_0;
		t138 * L_12 = m8961(L_11, &m8961_MI);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		t1724 * L_13 = V_0;
		t138 * L_14 = m8961(L_13, &m8961_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		t1724 * L_15 = V_0;
		int32_t L_16 = m8962(L_15, &m8962_MI);
		return L_16;
	}
}
extern MethodInfo m6971_MI;
extern "C" void m6971 (t291 * __this, t9 * p0, MethodInfo* method)
{
	t1724 * V_0 = {0};
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1641, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		V_0 = ((t1724 *)IsInst(L_2, InitializedTypeInfo(&t1724_TI)));
		t1724 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		t1724 * L_4 = V_0;
		int32_t L_5 = m8962(L_4, &m8962_MI);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0031;
		}
	}

IL_0021:
	{
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_6, (t2*) &_stringLiteral1642, (t2*) &_stringLiteral1641, &m5691_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		t1724 * L_7 = V_0;
		bool L_8 = m8963(L_7, &m8963_MI);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		t1332 * L_9 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_9, (t2*) &_stringLiteral1702, &m5685_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0044:
	{
		t1724 * L_10 = V_0;
		m8964(L_10, 1, &m8964_MI);
		t1724 * L_11 = V_0;
		t138 * L_12 = m8961(L_11, &m8961_MI);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		t1724 * L_13 = V_0;
		t138 * L_14 = m8961(L_13, &m8961_MI);
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



extern "C" void m8941 (t1723 * __this, MethodInfo* method)
{
	{
		m6982(__this, &m6982_MI);
		return;
	}
}
extern MethodInfo m8942_MI;
extern "C" bool m8942 (t1723 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8943_MI;
extern "C" bool m8943 (t1723 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8944_MI;
extern "C" bool m8944 (t1723 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8945_MI;
extern "C" int64_t m8945 (t1723 * __this, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
extern MethodInfo m8946_MI;
extern "C" int64_t m8946 (t1723 * __this, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
extern MethodInfo m8947_MI;
extern "C" void m8947 (t1723 * __this, int64_t p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8948_MI;
extern "C" void m8948 (t1723 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8949_MI;
extern "C" int32_t m8949 (t1723 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m8950_MI;
extern "C" int32_t m8950 (t1723 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
extern MethodInfo m8951_MI;
extern "C" int64_t m8951 (t1723 * __this, int64_t p0, int32_t p1, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
extern MethodInfo m8952_MI;
extern "C" void m8952 (t1723 * __this, int64_t p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8953_MI;
extern "C" void m8953 (t1723 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8954_MI;
extern "C" void m8954 (t1723 * __this, uint8_t p0, MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t294MD.h"
#include "t1539MD.h"
extern MethodInfo m1067_MI;
extern MethodInfo m1069_MI;
extern MethodInfo m6955_MI;


extern "C" void m8955 (t1724 * __this, t9 * p0, MethodInfo* method)
{
	{
		__this->f4 = (-1);
		m336(__this, &m336_MI);
		t9 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" void m8956 (t1724 * __this, t138 * p0, MethodInfo* method)
{
	t1724 * V_0 = {0};
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
		t1724 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			t1476 * L_2 = (__this->f5);
			if (!L_2)
			{
				goto IL_002a;
			}
		}

IL_001e:
		{
			t1476 * L_3 = (__this->f5);
			m6955(L_3, &m6955_MI);
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
		t1724 * L_4 = V_0;
		m1069(NULL, L_4, &m1069_MI);
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
extern "C" void m8957 (t1724 * __this, t138 * p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p1;
		__this->f4 = L_0;
		t138 * L_1 = p0;
		m8956(__this, L_1, &m8956_MI);
		return;
	}
}
extern MethodInfo m8958_MI;
extern "C" t9 * m8958 (t1724 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8959_MI;
extern "C" t1477 * m8959 (t1724 * __this, MethodInfo* method)
{
	t1724 * V_0 = {0};
	t1477 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1724 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1476 * L_1 = (__this->f5);
			if (L_1)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_2 = (__this->f1);
			t1476 * L_3 = (t1476 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1476_TI));
			m6954(L_3, L_2, &m6954_MI);
			__this->f5 = L_3;
		}

IL_0021:
		{
			t1476 * L_4 = (__this->f5);
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
		t1724 * L_5 = V_0;
		m1069(NULL, L_5, &m1069_MI);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0033:
	{
		t1477 * L_6 = V_1;
		return L_6;
	}
}
extern MethodInfo m8960_MI;
extern "C" bool m8960 (t1724 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" t138 * m8961 (t1724 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" int32_t m8962 (t1724 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" bool m8963 (t1724 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m8964 (t1724 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
#include "t1725.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1725_TI;
#include "t1725MD.h"

#include "t1710MD.h"
extern MethodInfo m8971_MI;


extern MethodInfo m8965_MI;
extern "C" void m8965 (t1725 * __this, MethodInfo* method)
{
	{
		m8971(__this, &m8971_MI);
		return;
	}
}
extern MethodInfo m8966_MI;
extern "C" int32_t m8966 (t1725 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
extern MethodInfo m8967_MI;
extern "C" int32_t m8967 (t1725 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
extern MethodInfo m8968_MI;
extern "C" int32_t m8968 (t1725 * __this, t305* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m8969_MI;
extern "C" t2* m8969 (t1725 * __this, MethodInfo* method)
{
	{
		return (t2*)NULL;
	}
}
extern MethodInfo m8970_MI;
extern "C" t2* m8970 (t1725 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
#include "t1710.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1710_TI;

#include "t722.h"
#include "t289.h"
#include "t1704.h"
#include "t1656.h"
#include "t315.h"
extern TypeInfo t722_TI;
extern TypeInfo t1704_TI;
extern TypeInfo t1656_TI;
extern TypeInfo t315_TI;
#include "t1656MD.h"
#include "t722MD.h"
#include "t295MD.h"
#include "t1704MD.h"
#include "t160MD.h"
#include "t315MD.h"
extern MethodInfo m9012_MI;
extern MethodInfo m8973_MI;
extern MethodInfo m8977_MI;
extern MethodInfo m10834_MI;
extern MethodInfo m8975_MI;
extern MethodInfo m6917_MI;
extern MethodInfo m10826_MI;
extern MethodInfo m10830_MI;
extern MethodInfo m11980_MI;
extern MethodInfo m9015_MI;
extern MethodInfo m6890_MI;
extern MethodInfo m10836_MI;
extern MethodInfo m10838_MI;
extern MethodInfo m10837_MI;
extern MethodInfo m8979_MI;
extern MethodInfo m11978_MI;
extern MethodInfo m11743_MI;
extern MethodInfo m8980_MI;
extern MethodInfo m11543_MI;
extern MethodInfo m7682_MI;
extern MethodInfo m8984_MI;
extern MethodInfo m4333_MI;
extern MethodInfo m5856_MI;
extern MethodInfo m10864_MI;
extern MethodInfo m1150_MI;
extern MethodInfo m5961_MI;
extern MethodInfo m10869_MI;
extern MethodInfo m10860_MI;
extern MethodInfo m8983_MI;
extern MethodInfo m1156_MI;


extern "C" void m8971 (t1710 * __this, MethodInfo* method)
{
	{
		m9012(__this, &m9012_MI);
		return;
	}
}
extern MethodInfo m8972_MI;
extern "C" void m8972 (t1710 * __this, t291 * p0, t722 * p1, MethodInfo* method)
{
	{
		t291 * L_0 = p0;
		t722 * L_1 = p1;
		m8973(__this, L_0, L_1, 1, ((int32_t)1024), &m8973_MI);
		return;
	}
}
extern "C" void m8973 (t1710 * __this, t291 * p0, t722 * p1, bool p2, int32_t p3, MethodInfo* method)
{
	{
		m9012(__this, &m9012_MI);
		t291 * L_0 = p0;
		t722 * L_1 = p1;
		bool L_2 = p2;
		int32_t L_3 = p3;
		m8977(__this, L_0, L_1, L_2, L_3, &m8977_MI);
		return;
	}
}
extern MethodInfo m8974_MI;
extern "C" void m8974 (t1710 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_1 = m10834(NULL, &m10834_MI);
		m8975(__this, L_0, L_1, 1, ((int32_t)4096), &m8975_MI);
		return;
	}
}
extern "C" void m8975 (t1710 * __this, t2* p0, t722 * p1, bool p2, int32_t p3, MethodInfo* method)
{
	t291 * V_0 = {0};
	{
		m9012(__this, &m9012_MI);
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1588, &m339_MI);
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
		t556 * L_5 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_5, (t2*) &_stringLiteral1703, &m2885_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002c:
	{
		t2* L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t305* L_7 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f0;
		int32_t L_8 = m5952(L_6, L_7, &m5952_MI);
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_0045;
		}
	}
	{
		t556 * L_9 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_9, (t2*) &_stringLiteral1704, &m2885_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0045:
	{
		t722 * L_10 = p1;
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		t132 * L_11 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_11, (t2*) &_stringLiteral1583, &m339_MI);
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
		t896 * L_13 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_13, (t2*) &_stringLiteral1622, (t2*) &_stringLiteral1705, &m4336_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0068:
	{
		t2* L_14 = p0;
		t289 * L_15 = m6917(NULL, L_14, &m6917_MI);
		V_0 = L_15;
		t291 * L_16 = V_0;
		t722 * L_17 = p1;
		bool L_18 = p2;
		int32_t L_19 = p3;
		m8977(__this, L_16, L_17, L_18, L_19, &m8977_MI);
		return;
	}
}
extern MethodInfo m8976_MI;
extern "C" void m8976 (t9 * __this , MethodInfo* method)
{
	{
		t1725 * L_0 = (t1725 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1725_TI));
		m8965(L_0, &m8965_MI);
		((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f12 = L_0;
		return;
	}
}
extern TypeInfo* t723_TI_var;
extern TypeInfo* t305_TI_var;
extern "C" void m8977 (t1710 * __this, t291 * p0, t722 * p1, bool p2, int32_t p3, MethodInfo* method)
{
	static bool m8977_init;
	if (!m8977_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m8977_init = true;
	}
	t723* V_0 = {0};
	t1710 * G_B12_0 = {0};
	t1710 * G_B11_0 = {0};
	int32_t G_B13_0 = 0;
	t1710 * G_B13_1 = {0};
	int32_t G_B15_0 = 0;
	t1710 * G_B15_1 = {0};
	int32_t G_B14_0 = 0;
	t1710 * G_B14_1 = {0};
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	t1710 * G_B16_2 = {0};
	{
		t291 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1706, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t722 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1583, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t291 * L_4 = p0;
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6979_MI, L_4);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_6, (t2*) &_stringLiteral1707, &m2885_MI);
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
		t896 * L_8 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_8, (t2*) &_stringLiteral1622, (t2*) &_stringLiteral1705, &m4336_MI);
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
		t291 * L_10 = p0;
		__this->f9 = L_10;
		int32_t L_11 = p3;
		__this->f1 = ((t723*)SZArrayNew(t723_TI_var, L_11));
		int32_t L_12 = p3;
		__this->f5 = L_12;
		t722 * L_13 = p1;
		__this->f7 = L_13;
		t722 * L_14 = p1;
		t1704 * L_15 = (t1704 *)VirtFuncInvoker0< t1704 * >::Invoke(&m10826_MI, L_14);
		__this->f8 = L_15;
		t722 * L_16 = p1;
		t723* L_17 = (t723*)VirtFuncInvoker0< t723* >::Invoke(&m10830_MI, L_16);
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
		t723* L_20 = V_0;
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
		t722 * L_21 = p1;
		int32_t L_22 = p3;
		int32_t L_23 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m11980_MI, L_21, L_22);
		__this->f2 = ((t305*)SZArrayNew(t305_TI_var, ((int32_t)((int32_t)L_23+(int32_t)1))));
		__this->f3 = 0;
		__this->f4 = 0;
		return;
	}
}
extern MethodInfo m8978_MI;
extern "C" void m8978 (t1710 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t291 * L_1 = (__this->f9);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t291 * L_2 = (__this->f9);
		VirtActionInvoker0::Invoke(&m1081_MI, L_2);
	}

IL_0016:
	{
		__this->f1 = (t723*)NULL;
		__this->f2 = (t305*)NULL;
		__this->f7 = (t722 *)NULL;
		__this->f8 = (t1704 *)NULL;
		__this->f9 = (t291 *)NULL;
		bool L_3 = p0;
		m9015(__this, L_3, &m9015_MI);
		return;
	}
}
extern "C" int32_t m8979 (t1710 * __this, int32_t p0, MethodInfo* method)
{
	t723* V_0 = {0};
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
		t722 * L_1 = (__this->f7);
		t723* L_2 = (t723*)VirtFuncInvoker0< t723* >::Invoke(&m10830_MI, L_1);
		V_0 = L_2;
		t723* L_3 = V_0;
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
		t723* L_6 = (__this->f1);
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		t723* L_9 = V_0;
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
		t723* L_20 = (__this->f1);
		int32_t L_21 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_21))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_007f;
		}
	}
	{
		t723* L_22 = (__this->f1);
		int32_t L_23 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_22, L_23))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_24 = m6890(NULL, &m6890_MI);
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
		t723* L_26 = (__this->f1);
		int32_t L_27 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_27))) == ((uint32_t)((int32_t)239)))))
		{
			goto IL_00bf;
		}
	}
	{
		t723* L_28 = (__this->f1);
		int32_t L_29 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_28, L_29))) == ((uint32_t)((int32_t)187)))))
		{
			goto IL_00bf;
		}
	}
	{
		t723* L_30 = (__this->f1);
		int32_t L_31 = 2;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_31))) == ((uint32_t)((int32_t)191)))))
		{
			goto IL_00bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_32 = m10834(NULL, &m10834_MI);
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
		t723* L_34 = (__this->f1);
		int32_t L_35 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_34, L_35))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00f8;
		}
	}
	{
		t723* L_36 = (__this->f1);
		int32_t L_37 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_36, L_37))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_00f8;
		}
	}
	{
		t723* L_38 = (__this->f1);
		int32_t L_39 = 2;
		if (!(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_38, L_39)))
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_40 = m10836(NULL, &m10836_MI);
		__this->f7 = L_40;
		return 2;
	}

IL_00f8:
	{
		return 0;
	}

IL_00fa:
	{
		t723* L_41 = (__this->f1);
		int32_t L_42 = 0;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_41, L_42)))
		{
			goto IL_0139;
		}
	}
	{
		t723* L_43 = (__this->f1);
		int32_t L_44 = 1;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_43, L_44)))
		{
			goto IL_0139;
		}
	}
	{
		t723* L_45 = (__this->f1);
		int32_t L_46 = 2;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_45, L_46))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_0139;
		}
	}
	{
		t723* L_47 = (__this->f1);
		int32_t L_48 = 3;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_47, L_48))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0139;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_49 = m10838(NULL, &m10838_MI);
		__this->f7 = L_49;
		return 4;
	}

IL_0139:
	{
		t723* L_50 = (__this->f1);
		int32_t L_51 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_50, L_51))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0185;
		}
	}
	{
		t723* L_52 = (__this->f1);
		int32_t L_53 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_52, L_53))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_0185;
		}
	}
	{
		t723* L_54 = (__this->f1);
		int32_t L_55 = 2;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_54, L_55)))
		{
			goto IL_0178;
		}
	}
	{
		t723* L_56 = (__this->f1);
		int32_t L_57 = 3;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_56, L_57)))
		{
			goto IL_0178;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_58 = m10837(NULL, &m10837_MI);
		__this->f7 = L_58;
		return 4;
	}

IL_0178:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_59 = m10836(NULL, &m10836_MI);
		__this->f7 = L_59;
		return 2;
	}

IL_0185:
	{
		return 0;
	}
}
extern TypeInfo* t305_TI_var;
extern "C" int32_t m8980 (t1710 * __this, MethodInfo* method)
{
	static bool m8980_init;
	if (!m8980_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m8980_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t722 * V_2 = {0};
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
		t291 * L_0 = (__this->f9);
		t723* L_1 = (__this->f1);
		int32_t L_2 = (__this->f5);
		int32_t L_3 = (int32_t)VirtFuncInvoker3< int32_t, t723*, int32_t, int32_t >::Invoke(&m6969_MI, L_0, L_1, 0, L_2);
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
		t722 * L_8 = (__this->f7);
		V_2 = L_8;
		int32_t L_9 = V_0;
		int32_t L_10 = m8979(__this, L_9, &m8979_MI);
		V_1 = L_10;
		t722 * L_11 = V_2;
		t722 * L_12 = (__this->f7);
		if ((((t9*)(t722 *)L_11) == ((t9*)(t722 *)L_12)))
		{
			goto IL_00a8;
		}
	}
	{
		t722 * L_13 = V_2;
		int32_t L_14 = (__this->f5);
		int32_t L_15 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m11980_MI, L_13, L_14);
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
		t722 * L_16 = (__this->f7);
		int32_t L_17 = (__this->f5);
		int32_t L_18 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m11980_MI, L_16, L_17);
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
		__this->f2 = ((t305*)SZArrayNew(t305_TI_var, L_21));
	}

IL_0097:
	{
		t722 * L_22 = (__this->f7);
		t1704 * L_23 = (t1704 *)VirtFuncInvoker0< t1704 * >::Invoke(&m10826_MI, L_22);
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
		t1704 * L_27 = (__this->f8);
		t723* L_28 = (__this->f1);
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		t305* L_31 = (__this->f2);
		int32_t L_32 = (int32_t)VirtFuncInvoker5< int32_t, t723*, int32_t, int32_t, t305*, int32_t >::Invoke(&m11978_MI, L_27, L_28, L_29, L_30, L_31, 0);
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
extern MethodInfo m8981_MI;
extern "C" int32_t m8981 (t1710 * __this, MethodInfo* method)
{
	{
		t291 * L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1708, (t2*) &_stringLiteral1709, &m11743_MI);
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
		int32_t L_4 = m8980(__this, &m8980_MI);
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
		t305* L_5 = (__this->f2);
		int32_t L_6 = (__this->f4);
		int32_t L_7 = L_6;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_7));
	}
}
extern MethodInfo m8982_MI;
extern "C" int32_t m8982 (t1710 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t291 * L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1708, (t2*) &_stringLiteral1709, &m11743_MI);
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
		int32_t L_4 = m8980(__this, &m8980_MI);
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
		t305* L_5 = (__this->f2);
		int32_t L_6 = (__this->f4);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f4 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_9));
	}
}
extern "C" int32_t m8983 (t1710 * __this, t305* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B16_0 = 0;
	{
		t291 * L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1708, (t2*) &_stringLiteral1709, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t305* L_2 = p0;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1054, &m339_MI);
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
		t896 * L_5 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_5, (t2*) &_stringLiteral401, (t2*) &_stringLiteral812, &m4336_MI);
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
		t896 * L_7 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_7, (t2*) &_stringLiteral493, (t2*) &_stringLiteral812, &m4336_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004e:
	{
		int32_t L_8 = p1;
		t305* L_9 = p0;
		int32_t L_10 = p2;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_0061;
		}
	}
	{
		t556 * L_11 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_11, (t2*) &_stringLiteral1710, &m2885_MI);
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
		int32_t L_14 = m8980(__this, &m8980_MI);
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
		int32_t L_20 = m11543(NULL, ((int32_t)((int32_t)L_17-(int32_t)L_18)), L_19, &m11543_MI);
		V_1 = L_20;
		t305* L_21 = (__this->f2);
		int32_t L_22 = (__this->f4);
		t305* L_23 = p0;
		int32_t L_24 = p1;
		int32_t L_25 = V_1;
		m7682(NULL, (t121 *)(t121 *)L_21, L_22, (t121 *)(t121 *)L_23, L_24, L_25, &m7682_MI);
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
extern "C" int32_t m8984 (t1710 * __this, MethodInfo* method)
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
		t305* L_0 = (__this->f2);
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
extern MethodInfo m8985_MI;
extern "C" t2* m8985 (t1710 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t315 * V_2 = {0};
	t315 * V_3 = {0};
	{
		t291 * L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1708, (t2*) &_stringLiteral1709, &m11743_MI);
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
		int32_t L_4 = m8980(__this, &m8980_MI);
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
		int32_t L_6 = m8984(__this, &m8984_MI);
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
		t305* L_11 = (__this->f2);
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_15 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_15 = m4353(L_15, L_11, L_12, ((int32_t)((int32_t)L_13-(int32_t)L_14)), &m4333_MI);
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
		t315 * L_17 = (__this->f11);
		t315 * L_18 = (__this->f11);
		int32_t L_19 = m5856(L_18, &m5856_MI);
		t2* L_20 = m10864(L_17, 0, L_19, &m10864_MI);
		return L_20;
	}

IL_0078:
	{
		t315 * L_21 = (__this->f11);
		if (L_21)
		{
			goto IL_008d;
		}
	}
	{
		t315 * L_22 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m1150(L_22, &m1150_MI);
		__this->f11 = L_22;
		goto IL_0099;
	}

IL_008d:
	{
		t315 * L_23 = (__this->f11);
		m5961(L_23, 0, &m5961_MI);
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
		t315 * L_26 = (__this->f11);
		t305* L_27 = (__this->f2);
		int32_t L_28 = V_0;
		int32_t L_29 = (__this->f3);
		int32_t L_30 = V_0;
		m10869(L_26, L_27, L_28, ((int32_t)((int32_t)L_29-(int32_t)L_30)), &m10869_MI);
		int32_t L_31 = m8980(__this, &m8980_MI);
		if (L_31)
		{
			goto IL_0118;
		}
	}
	{
		t315 * L_32 = (__this->f11);
		int32_t L_33 = m10860(L_32, &m10860_MI);
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0100;
		}
	}
	{
		t315 * L_34 = (__this->f11);
		V_2 = L_34;
		__this->f11 = (t315 *)NULL;
		t315 * L_35 = V_2;
		t315 * L_36 = V_2;
		int32_t L_37 = m5856(L_36, &m5856_MI);
		t2* L_38 = m10864(L_35, 0, L_37, &m10864_MI);
		return L_38;
	}

IL_0100:
	{
		t315 * L_39 = (__this->f11);
		t315 * L_40 = (__this->f11);
		int32_t L_41 = m5856(L_40, &m5856_MI);
		t2* L_42 = m10864(L_39, 0, L_41, &m10864_MI);
		return L_42;
	}

IL_0118:
	{
		int32_t L_43 = (__this->f4);
		V_0 = L_43;
		int32_t L_44 = m8984(__this, &m8984_MI);
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
		t315 * L_49 = (__this->f11);
		t305* L_50 = (__this->f2);
		int32_t L_51 = V_0;
		int32_t L_52 = V_1;
		int32_t L_53 = V_0;
		m10869(L_49, L_50, L_51, ((int32_t)((int32_t)L_52-(int32_t)L_53)), &m10869_MI);
		t315 * L_54 = (__this->f11);
		int32_t L_55 = m10860(L_54, &m10860_MI);
		if ((((int32_t)L_55) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0177;
		}
	}
	{
		t315 * L_56 = (__this->f11);
		V_3 = L_56;
		__this->f11 = (t315 *)NULL;
		t315 * L_57 = V_3;
		t315 * L_58 = V_3;
		int32_t L_59 = m5856(L_58, &m5856_MI);
		t2* L_60 = m10864(L_57, 0, L_59, &m10864_MI);
		return L_60;
	}

IL_0177:
	{
		t315 * L_61 = (__this->f11);
		t315 * L_62 = (__this->f11);
		int32_t L_63 = m5856(L_62, &m5856_MI);
		t2* L_64 = m10864(L_61, 0, L_63, &m10864_MI);
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
		t315 * L_66 = (__this->f11);
		t315 * L_67 = (__this->f11);
		int32_t L_68 = m5856(L_67, &m5856_MI);
		t2* L_69 = m10864(L_66, 0, L_68, &m10864_MI);
		return L_69;
	}

IL_01ac:
	{
		goto IL_0099;
	}
}
extern MethodInfo m8986_MI;
extern TypeInfo* t305_TI_var;
extern "C" t2* m8986 (t1710 * __this, MethodInfo* method)
{
	static bool m8986_init;
	if (!m8986_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m8986_init = true;
	}
	t315 * V_0 = {0};
	int32_t V_1 = 0;
	t305* V_2 = {0};
	int32_t V_3 = 0;
	{
		t291 * L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1708, (t2*) &_stringLiteral1709, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t315 * L_2 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m1150(L_2, &m1150_MI);
		V_0 = L_2;
		t305* L_3 = (__this->f2);
		V_1 = (((int32_t)(((t121 *)L_3)->max_length)));
		int32_t L_4 = V_1;
		V_2 = ((t305*)SZArrayNew(t305_TI_var, L_4));
		goto IL_003a;
	}

IL_0030:
	{
		t315 * L_5 = V_0;
		t305* L_6 = V_2;
		int32_t L_7 = V_3;
		m10869(L_5, L_6, 0, L_7, &m10869_MI);
	}

IL_003a:
	{
		t305* L_8 = V_2;
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)VirtFuncInvoker3< int32_t, t305*, int32_t, int32_t >::Invoke(&m8983_MI, __this, L_8, 0, L_9);
		int32_t L_11 = L_10;
		V_3 = L_11;
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		t315 * L_12 = V_0;
		t2* L_13 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_12);
		return L_13;
	}
}
#include "t1726.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1726_TI;
#include "t1726MD.h"

#include "t1361MD.h"
extern MethodInfo m8993_MI;
extern MethodInfo m8988_MI;
extern MethodInfo m9032_MI;
extern MethodInfo m8990_MI;
extern MethodInfo m6875_MI;
extern MethodInfo m11979_MI;
extern MethodInfo m6962_MI;
extern MethodInfo m11981_MI;
extern MethodInfo m8995_MI;
extern MethodInfo m8994_MI;
extern MethodInfo m6998_MI;
extern MethodInfo m11982_MI;
extern MethodInfo m8997_MI;
extern MethodInfo m8998_MI;
extern MethodInfo m8992_MI;
extern MethodInfo m646_MI;


extern MethodInfo m8987_MI;
extern "C" void m8987 (t1726 * __this, t291 * p0, t722 * p1, MethodInfo* method)
{
	{
		t291 * L_0 = p0;
		t722 * L_1 = p1;
		m8988(__this, L_0, L_1, ((int32_t)1024), &m8988_MI);
		return;
	}
}
extern "C" void m8988 (t1726 * __this, t291 * p0, t722 * p1, int32_t p2, MethodInfo* method)
{
	{
		m9032(__this, &m9032_MI);
		t291 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1706, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t722 * L_2 = p1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1583, &m339_MI);
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
		t896 * L_5 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_5, (t2*) &_stringLiteral1622, &m5693_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0031:
	{
		t291 * L_6 = p0;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6980_MI, L_6);
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		t556 * L_8 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_8, (t2*) &_stringLiteral1711, &m2885_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0044:
	{
		t291 * L_9 = p0;
		__this->f3 = L_9;
		t722 * L_10 = p1;
		int32_t L_11 = p2;
		m8990(__this, L_10, L_11, &m8990_MI);
		return;
	}
}
extern MethodInfo m8989_MI;
extern "C" void m8989 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t291_TI));
		t291 * L_0 = ((t291_SFs*)InitializedTypeInfo(&t291_TI)->static_fields)->f0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_1 = m10834(NULL, &m10834_MI);
		t1726 * L_2 = (t1726 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1726_TI));
		m8988(L_2, L_0, L_1, 1, &m8988_MI);
		((t1726_SFs*)InitializedTypeInfo(&t1726_TI)->static_fields)->f11 = L_2;
		return;
	}
}
extern TypeInfo* t305_TI_var;
extern TypeInfo* t723_TI_var;
extern "C" void m8990 (t1726 * __this, t722 * p0, int32_t p1, MethodInfo* method)
{
	static bool m8990_init;
	if (!m8990_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8990_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t722 * L_0 = p0;
		__this->f2 = L_0;
		int32_t L_1 = 0;
		V_1 = L_1;
		__this->f6 = L_1;
		int32_t L_2 = V_1;
		__this->f8 = L_2;
		int32_t L_3 = p1;
		int32_t L_4 = m6875(NULL, L_3, ((int32_t)256), &m6875_MI);
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->f7 = ((t305*)SZArrayNew(t305_TI_var, L_5));
		t722 * L_6 = p0;
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m11979_MI, L_6, L_7);
		__this->f5 = ((t723*)SZArrayNew(t723_TI_var, L_8));
		t291 * L_9 = (__this->f3);
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6962_MI, L_9);
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		t291 * L_11 = (__this->f3);
		int64_t L_12 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m11981_MI, L_11);
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
extern MethodInfo m8991_MI;
extern "C" void m8991 (t1726 * __this, bool p0, MethodInfo* method)
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
		VirtActionInvoker0::Invoke(&m8993_MI, __this);
	}

IL_0015:
	{
		return;
	}
}
extern "C" void m8992 (t1726 * __this, bool p0, MethodInfo* method)
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
		t291 * L_2 = (__this->f3);
		if (!L_2)
		{
			goto IL_003e;
		}
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(&m8993_MI, __this);
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
		t291 * L_4 = (__this->f3);
		VirtActionInvoker0::Invoke(&m1081_MI, L_4);
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
		__this->f3 = (t291 *)NULL;
		__this->f5 = (t723*)NULL;
		__this->f2 = (t722 *)NULL;
		__this->f7 = (t305*)NULL;
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
extern "C" void m8993 (t1726 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_1, (t2*) &_stringLiteral1712, &m6883_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		m8995(__this, &m8995_MI);
		int32_t L_2 = (__this->f6);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		m8994(__this, &m8994_MI);
		t291 * L_3 = (__this->f3);
		VirtActionInvoker0::Invoke(&m6998_MI, L_3);
	}

IL_0033:
	{
		return;
	}
}
extern "C" void m8994 (t1726 * __this, MethodInfo* method)
{
	t723* V_0 = {0};
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
		t722 * L_2 = (__this->f2);
		t723* L_3 = (t723*)VirtFuncInvoker0< t723* >::Invoke(&m10830_MI, L_2);
		V_0 = L_3;
		t723* L_4 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_4)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		t291 * L_5 = (__this->f3);
		t723* L_6 = V_0;
		t723* L_7 = V_0;
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_5, L_6, 0, (((int32_t)(((t121 *)L_7)->max_length))));
	}

IL_0033:
	{
		__this->f10 = 1;
	}

IL_003a:
	{
		t291 * L_8 = (__this->f3);
		t723* L_9 = (__this->f5);
		int32_t L_10 = (__this->f6);
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_8, L_9, 0, L_10);
		__this->f6 = 0;
		return;
	}
}
extern "C" void m8995 (t1726 * __this, MethodInfo* method)
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
		m8994(__this, &m8994_MI);
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
		t722 * L_2 = (__this->f2);
		t305* L_3 = (__this->f7);
		int32_t L_4 = (__this->f8);
		t723* L_5 = (__this->f5);
		int32_t L_6 = (__this->f6);
		int32_t L_7 = (int32_t)VirtFuncInvoker5< int32_t, t305*, int32_t, int32_t, t723*, int32_t >::Invoke(&m11982_MI, L_2, L_3, 0, L_4, L_5, L_6);
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
extern MethodInfo m8996_MI;
extern "C" void m8996 (t1726 * __this, t305* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_1, (t2*) &_stringLiteral1712, &m6883_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t305* L_2 = p0;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1054, &m339_MI);
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
		t896 * L_5 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_5, (t2*) &_stringLiteral401, (t2*) &_stringLiteral812, &m4336_MI);
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
		t896 * L_7 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_7, (t2*) &_stringLiteral493, (t2*) &_stringLiteral812, &m4336_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0049:
	{
		int32_t L_8 = p1;
		t305* L_9 = p0;
		int32_t L_10 = p2;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_005c;
		}
	}
	{
		t556 * L_11 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_11, (t2*) &_stringLiteral1710, &m2885_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_005c:
	{
		t305* L_12 = p0;
		int32_t L_13 = p1;
		int32_t L_14 = p2;
		m8997(__this, L_12, L_13, L_14, &m8997_MI);
		bool L_15 = (__this->f4);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		VirtActionInvoker0::Invoke(&m8993_MI, __this);
	}

IL_0073:
	{
		return;
	}
}
extern "C" void m8997 (t1726 * __this, t305* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0060;
	}

IL_0002:
	{
		t305* L_0 = (__this->f7);
		int32_t L_1 = (__this->f8);
		V_0 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))-(int32_t)L_1));
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		m8995(__this, &m8995_MI);
		t305* L_3 = (__this->f7);
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
		t305* L_7 = p0;
		int32_t L_8 = p1;
		t305* L_9 = (__this->f7);
		int32_t L_10 = (__this->f8);
		int32_t L_11 = V_0;
		m5764(NULL, (t121 *)(t121 *)L_7, ((int32_t)((int32_t)L_8*(int32_t)2)), (t121 *)(t121 *)L_9, ((int32_t)((int32_t)L_10*(int32_t)2)), ((int32_t)((int32_t)L_11*(int32_t)2)), &m5764_MI);
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
extern "C" void m8998 (t1726 * __this, t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2699(L_0, &m2699_MI);
		V_0 = L_1;
		V_1 = 0;
		goto IL_006d;
	}

IL_000b:
	{
		t305* L_2 = (__this->f7);
		int32_t L_3 = (__this->f8);
		V_2 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_2)->max_length)))-(int32_t)L_3));
		int32_t L_4 = V_2;
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		m8995(__this, &m8995_MI);
		t305* L_5 = (__this->f7);
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
		t305* L_9 = (__this->f7);
		int32_t L_10 = V_3;
		int32_t L_11 = (__this->f8);
		t2* L_12 = p0;
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		uint16_t L_15 = m2714(L_12, ((int32_t)((int32_t)L_13+(int32_t)L_14)), &m2714_MI);
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
extern MethodInfo m8999_MI;
extern "C" void m8999 (t1726 * __this, uint16_t p0, MethodInfo* method)
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
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_1, (t2*) &_stringLiteral1712, &m6883_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		int32_t L_2 = (__this->f8);
		t305* L_3 = (__this->f7);
		if ((((int32_t)L_2) < ((int32_t)(((int32_t)(((t121 *)L_3)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		m8995(__this, &m8995_MI);
	}

IL_0029:
	{
		t305* L_4 = (__this->f7);
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
		VirtActionInvoker0::Invoke(&m8993_MI, __this);
	}

IL_0050:
	{
		return;
	}
}
extern MethodInfo m9000_MI;
extern "C" void m9000 (t1726 * __this, t305* p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_1, (t2*) &_stringLiteral1712, &m6883_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t305* L_2 = p0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		t305* L_3 = p0;
		t305* L_4 = p0;
		m8997(__this, L_3, 0, (((int32_t)(((t121 *)L_4)->max_length))), &m8997_MI);
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
		VirtActionInvoker0::Invoke(&m8993_MI, __this);
	}

IL_002f:
	{
		return;
	}
}
extern MethodInfo m9001_MI;
extern "C" void m9001 (t1726 * __this, t2* p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_1, (t2*) &_stringLiteral1712, &m6883_MI);
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
		m8998(__this, L_3, &m8998_MI);
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
		VirtActionInvoker0::Invoke(&m8993_MI, __this);
	}

IL_002b:
	{
		return;
	}
}
extern MethodInfo m9002_MI;
extern "C" void m9002 (t1726 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m8992_MI, __this, 1);
		return;
	}
}
extern MethodInfo m9003_MI;
extern "C" void m9003 (t1726 * __this, MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(&m8992_MI, __this, 0);
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
#include "t880.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t880_TI;
#include "t880MD.h"

extern MethodInfo m9009_MI;
extern MethodInfo m11109_MI;
extern MethodInfo m7317_MI;
extern MethodInfo m9008_MI;


extern MethodInfo m4253_MI;
extern "C" void m4253 (t880 * __this, t2* p0, MethodInfo* method)
{
	{
		m9012(__this, &m9012_MI);
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1081, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2* L_2 = p0;
		__this->f1 = L_2;
		__this->f2 = 0;
		t2* L_3 = p0;
		int32_t L_4 = m2699(L_3, &m2699_MI);
		__this->f3 = L_4;
		return;
	}
}
extern MethodInfo m9004_MI;
extern "C" void m9004 (t880 * __this, bool p0, MethodInfo* method)
{
	{
		__this->f1 = (t2*)NULL;
		bool L_0 = p0;
		m9015(__this, L_0, &m9015_MI);
		return;
	}
}
extern MethodInfo m9005_MI;
extern "C" int32_t m9005 (t880 * __this, MethodInfo* method)
{
	{
		m9009(__this, &m9009_MI);
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
		uint16_t L_4 = m2714(L_2, L_3, &m2714_MI);
		return L_4;
	}
}
extern MethodInfo m9006_MI;
extern "C" int32_t m9006 (t880 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m9009(__this, &m9009_MI);
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
		uint16_t L_6 = m2714(L_2, L_5, &m2714_MI);
		return L_6;
	}
}
extern MethodInfo m9007_MI;
extern "C" int32_t m9007 (t880 * __this, t305* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m9009(__this, &m9009_MI);
		t305* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1054, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t305* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_2)->max_length)))-(int32_t)L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0022;
		}
	}
	{
		t556 * L_5 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m11109(L_5, &m11109_MI);
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
		t896 * L_8 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5870(L_8, &m5870_MI);
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
		t305* L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = V_0;
		m7317(L_15, L_16, L_17, L_18, L_19, &m7317_MI);
		int32_t L_20 = (__this->f2);
		int32_t L_21 = V_0;
		__this->f2 = ((int32_t)((int32_t)L_20+(int32_t)L_21));
		int32_t L_22 = V_0;
		return L_22;
	}
}
extern MethodInfo m4254_MI;
extern "C" t2* m4254 (t880 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	t2* V_4 = {0};
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	t880 * G_B14_1 = {0};
	int32_t G_B13_0 = 0;
	t880 * G_B13_1 = {0};
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	t880 * G_B15_2 = {0};
	{
		m9009(__this, &m9009_MI);
		int32_t L_0 = (__this->f2);
		t2* L_1 = (__this->f1);
		int32_t L_2 = m2699(L_1, &m2699_MI);
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
		int32_t L_5 = m4245(L_3, ((int32_t)13), L_4, &m4245_MI);
		V_0 = L_5;
		t2* L_6 = (__this->f1);
		int32_t L_7 = (__this->f2);
		int32_t L_8 = m4245(L_6, ((int32_t)10), L_7, &m4245_MI);
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
		t2* L_11 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9008_MI, __this);
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
		t2* L_25 = m2715(L_21, L_22, ((int32_t)((int32_t)L_23-(int32_t)L_24)), &m2715_MI);
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
extern "C" t2* m9008 (t880 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		m9009(__this, &m9009_MI);
		t2* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		int32_t L_2 = (__this->f3);
		int32_t L_3 = (__this->f2);
		t2* L_4 = m2715(L_0, L_1, ((int32_t)((int32_t)L_2-(int32_t)L_3)), &m2715_MI);
		V_0 = L_4;
		int32_t L_5 = (__this->f3);
		__this->f2 = L_5;
		t2* L_6 = V_0;
		return L_6;
	}
}
extern "C" void m9009 (t880 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral1714, &m7818_MI);
		t1521 * L_2 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_2, (t2*) &_stringLiteral1713, L_1, &m11743_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		return;
	}
}
#include "t1727.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1727_TI;
#include "t1727MD.h"



extern MethodInfo m9010_MI;
extern "C" void m9010 (t1727 * __this, MethodInfo* method)
{
	{
		m9012(__this, &m9012_MI);
		return;
	}
}
extern MethodInfo m9011_MI;
extern "C" t2* m9011 (t1727 * __this, MethodInfo* method)
{
	{
		return (t2*)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1728.h"
extern TypeInfo t1728_TI;
#include "t1517MD.h"
#include "t1728MD.h"
extern MethodInfo m6867_MI;
extern MethodInfo m9017_MI;
extern MethodInfo m9022_MI;


extern "C" void m9012 (t1656 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9013_MI;
extern "C" void m9013 (t9 * __this , MethodInfo* method)
{
	{
		t1727 * L_0 = (t1727 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1727_TI));
		m9010(L_0, &m9010_MI);
		((t1656_SFs*)InitializedTypeInfo(&t1656_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m9014_MI;
extern "C" void m9014 (t1656 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m9015_MI, __this, 1);
		return;
	}
}
extern "C" void m9015 (t1656 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		m6867(NULL, __this, &m6867_MI);
	}

IL_0009:
	{
		return;
	}
}
extern MethodInfo m9016_MI;
extern "C" int32_t m9016 (t1656 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
extern "C" int32_t m9017 (t1656 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
extern MethodInfo m9018_MI;
extern "C" int32_t m9018 (t1656 * __this, t305* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_001c;
	}

IL_0004:
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9017_MI, __this);
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
		t305* L_3 = p0;
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
extern MethodInfo m9019_MI;
extern "C" t2* m9019 (t1656 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m9020_MI;
extern "C" t2* m9020 (t1656 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m9021_MI;
extern "C" t1656 * m9021 (t9 * __this , t1656 * p0, MethodInfo* method)
{
	{
		t1656 * L_0 = p0;
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
		t1656 * L_2 = p0;
		if (!((t1728 *)IsInst(L_2, InitializedTypeInfo(&t1728_TI))))
		{
			goto IL_0018;
		}
	}
	{
		t1656 * L_3 = p0;
		return L_3;
	}

IL_0018:
	{
		t1656 * L_4 = p0;
		t1728 * L_5 = (t1728 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1728_TI));
		m9022(L_5, L_4, &m9022_MI);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9022 (t1728 * __this, t1656 * p0, MethodInfo* method)
{
	{
		m9012(__this, &m9012_MI);
		t1656 * L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m9023_MI;
extern "C" int32_t m9023 (t1728 * __this, MethodInfo* method)
{
	t1728 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1728 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1656 * L_1 = (__this->f1);
			int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9016_MI, L_1);
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
		t1728 * L_3 = V_0;
		m1069(NULL, L_3, &m1069_MI);
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
extern MethodInfo m9024_MI;
extern "C" t2* m9024 (t1728 * __this, MethodInfo* method)
{
	t1728 * V_0 = {0};
	t2* V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1728 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1656 * L_1 = (__this->f1);
			t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9019_MI, L_1);
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
		t1728 * L_3 = V_0;
		m1069(NULL, L_3, &m1069_MI);
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
extern MethodInfo m9025_MI;
extern "C" t2* m9025 (t1728 * __this, MethodInfo* method)
{
	t1728 * V_0 = {0};
	t2* V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1728 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1656 * L_1 = (__this->f1);
			t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9020_MI, L_1);
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
		t1728 * L_3 = V_0;
		m1069(NULL, L_3, &m1069_MI);
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
extern MethodInfo m9026_MI;
extern "C" int32_t m9026 (t1728 * __this, MethodInfo* method)
{
	t1728 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1728 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1656 * L_1 = (__this->f1);
			int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9017_MI, L_1);
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
		t1728 * L_3 = V_0;
		m1069(NULL, L_3, &m1069_MI);
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
extern MethodInfo m9027_MI;
extern "C" int32_t m9027 (t1728 * __this, t305* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t1728 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1728 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1656 * L_1 = (__this->f1);
			t305* L_2 = p0;
			int32_t L_3 = p1;
			int32_t L_4 = p2;
			int32_t L_5 = (int32_t)VirtFuncInvoker3< int32_t, t305*, int32_t, int32_t >::Invoke(&m9018_MI, L_1, L_2, L_3, L_4);
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
		t1728 * L_6 = V_0;
		m1069(NULL, L_6, &m1069_MI);
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
#include "t1729.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1729_TI;
#include "t1729MD.h"



extern MethodInfo m9028_MI;
extern "C" void m9028 (t1729 * __this, MethodInfo* method)
{
	{
		m9032(__this, &m9032_MI);
		return;
	}
}
extern MethodInfo m9029_MI;
extern "C" void m9029 (t1729 * __this, t2* p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9030_MI;
extern "C" void m9030 (t1729 * __this, uint16_t p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9031_MI;
extern "C" void m9031 (t1729 * __this, t305* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		return;
	}
}
#include "t1361.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1361_TI;

#include "t1730.h"
extern TypeInfo t1730_TI;
#include "t1730MD.h"
extern MethodInfo m5775_MI;
extern MethodInfo m4329_MI;
extern MethodInfo m9035_MI;
extern MethodInfo m9044_MI;
extern MethodInfo m9042_MI;
extern MethodInfo m9040_MI;
extern MethodInfo m9039_MI;
extern MethodInfo m9041_MI;
extern MethodInfo m9043_MI;


extern "C" void m9032 (t1361 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2* L_0 = m5775(NULL, &m5775_MI);
		t305* L_1 = m4329(L_0, &m4329_MI);
		__this->f0 = L_1;
		return;
	}
}
extern MethodInfo m9033_MI;
extern "C" void m9033 (t9 * __this , MethodInfo* method)
{
	{
		t1729 * L_0 = (t1729 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1729_TI));
		m9028(L_0, &m9028_MI);
		((t1361_SFs*)InitializedTypeInfo(&t1361_TI)->static_fields)->f1 = L_0;
		return;
	}
}
extern MethodInfo m9034_MI;
extern "C" void m9034 (t1361 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m9035_MI, __this, 1);
		return;
	}
}
extern "C" void m9035 (t1361 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		m6867(NULL, __this, &m6867_MI);
	}

IL_0009:
	{
		return;
	}
}
extern MethodInfo m9036_MI;
extern "C" void m9036 (t1361 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m9035_MI, __this, 1);
		m6867(NULL, __this, &m6867_MI);
		return;
	}
}
extern MethodInfo m9037_MI;
extern "C" void m9037 (t1361 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9038_MI;
extern "C" t1361 * m9038 (t9 * __this , t1361 * p0, bool p1, MethodInfo* method)
{
	{
		t1361 * L_0 = p0;
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
		t1361 * L_2 = p0;
		if (!((t1730 *)IsInst(L_2, InitializedTypeInfo(&t1730_TI))))
		{
			goto IL_0018;
		}
	}
	{
		t1361 * L_3 = p0;
		return L_3;
	}

IL_0018:
	{
		t1361 * L_4 = p0;
		bool L_5 = p1;
		t1730 * L_6 = (t1730 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1730_TI));
		m9044(L_6, L_4, L_5, &m9044_MI);
		return L_6;
	}
}
extern "C" void m9039 (t1361 * __this, uint16_t p0, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m9040 (t1361 * __this, t305* p0, MethodInfo* method)
{
	{
		t305* L_0 = p0;
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
		t305* L_1 = p0;
		t305* L_2 = p0;
		VirtActionInvoker3< t305*, int32_t, int32_t >::Invoke(&m9042_MI, __this, L_1, 0, (((int32_t)(((t121 *)L_2)->max_length))));
		return;
	}
}
extern "C" void m9041 (t1361 * __this, t2* p0, MethodInfo* method)
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
		t305* L_2 = m4329(L_1, &m4329_MI);
		VirtActionInvoker1< t305* >::Invoke(&m9040_MI, __this, L_2);
	}

IL_000f:
	{
		return;
	}
}
extern "C" void m9042 (t1361 * __this, t305* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		t305* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1054, &m339_MI);
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
		t305* L_4 = p0;
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)(((t121 *)L_4)->max_length))))))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		t896 * L_5 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_5, (t2*) &_stringLiteral401, &m5693_MI);
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
		t305* L_8 = p0;
		int32_t L_9 = p2;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_8)->max_length)))-(int32_t)L_9)))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		t896 * L_10 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_10, (t2*) &_stringLiteral493, &m5693_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_003a:
	{
		goto IL_0053;
	}

IL_003c:
	{
		t305* L_11 = p0;
		int32_t L_12 = p1;
		int32_t L_13 = L_12;
		VirtActionInvoker1< uint16_t >::Invoke(&m9039_MI, __this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_13)));
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
extern "C" void m9043 (t1361 * __this, MethodInfo* method)
{
	{
		t305* L_0 = (__this->f0);
		VirtActionInvoker1< t305* >::Invoke(&m9040_MI, __this, L_0);
		return;
	}
}
extern MethodInfo m5920_MI;
extern "C" void m5920 (t1361 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m9041_MI, __this, L_0);
		VirtActionInvoker0::Invoke(&m9043_MI, __this);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9044 (t1730 * __this, t1361 * p0, bool p1, MethodInfo* method)
{
	{
		m9032(__this, &m9032_MI);
		t1361 * L_0 = p0;
		__this->f2 = L_0;
		bool L_1 = p1;
		__this->f3 = L_1;
		return;
	}
}
extern MethodInfo m9045_MI;
extern "C" void m9045 (t1730 * __this, MethodInfo* method)
{
	t1730 * V_0 = {0};
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
		t1730 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		t1361 * L_2 = (__this->f2);
		VirtActionInvoker0::Invoke(&m9034_MI, L_2);
		IL2CPP_LEAVE(0x25, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		t1730 * L_3 = V_0;
		m1069(NULL, L_3, &m1069_MI);
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
extern MethodInfo m9046_MI;
extern "C" void m9046 (t1730 * __this, MethodInfo* method)
{
	t1730 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1730 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1361 * L_1 = (__this->f2);
		VirtActionInvoker0::Invoke(&m9037_MI, L_1);
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		t1730 * L_2 = V_0;
		m1069(NULL, L_2, &m1069_MI);
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
extern MethodInfo m9047_MI;
extern "C" void m9047 (t1730 * __this, uint16_t p0, MethodInfo* method)
{
	t1730 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1730 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1361 * L_1 = (__this->f2);
		uint16_t L_2 = p0;
		VirtActionInvoker1< uint16_t >::Invoke(&m9039_MI, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		t1730 * L_3 = V_0;
		m1069(NULL, L_3, &m1069_MI);
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
extern MethodInfo m9048_MI;
extern "C" void m9048 (t1730 * __this, t305* p0, MethodInfo* method)
{
	t1730 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1730 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1361 * L_1 = (__this->f2);
		t305* L_2 = p0;
		VirtActionInvoker1< t305* >::Invoke(&m9040_MI, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		t1730 * L_3 = V_0;
		m1069(NULL, L_3, &m1069_MI);
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
extern MethodInfo m9049_MI;
extern "C" void m9049 (t1730 * __this, t2* p0, MethodInfo* method)
{
	t1730 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1730 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1361 * L_1 = (__this->f2);
		t2* L_2 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m9041_MI, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		t1730 * L_3 = V_0;
		m1069(NULL, L_3, &m1069_MI);
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
extern MethodInfo m9050_MI;
extern "C" void m9050 (t1730 * __this, t305* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t1730 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1730 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1361 * L_1 = (__this->f2);
		t305* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		VirtActionInvoker3< t305*, int32_t, int32_t >::Invoke(&m9042_MI, L_1, L_2, L_3, L_4);
		IL2CPP_LEAVE(0x1F, FINALLY_0018);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		t1730 * L_5 = V_0;
		m1069(NULL, L_5, &m1069_MI);
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
extern MethodInfo m9051_MI;
extern "C" void m9051 (t1730 * __this, MethodInfo* method)
{
	t1730 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1730 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1361 * L_1 = (__this->f2);
		VirtActionInvoker0::Invoke(&m9043_MI, L_1);
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		t1730 * L_2 = V_0;
		m1069(NULL, L_2, &m1069_MI);
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
extern MethodInfo m9052_MI;
extern "C" void m9052 (t1730 * __this, t2* p0, MethodInfo* method)
{
	t1730 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1730 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		t1361 * L_1 = (__this->f2);
		t2* L_2 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m5920_MI, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		t1730 * L_3 = V_0;
		m1069(NULL, L_3, &m1069_MI);
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
#include "t1731.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1731_TI;
#include "t1731MD.h"

extern TypeInfo t1197_TI;
extern Il2CppType t1197_0_0_0;
extern MethodInfo m9058_MI;


extern MethodInfo m9053_MI;
extern "C" void m9053 (t1731 * __this, t291 * p0, t722 * p1, MethodInfo* method)
{
	{
		t291 * L_0 = p0;
		t722 * L_1 = p1;
		m8972(__this, L_0, L_1, &m8972_MI);
		return;
	}
}
extern MethodInfo m9054_MI;
extern TypeInfo* t1197_TI_var;
extern "C" void m9054 (t9 * __this , MethodInfo* method)
{
	static bool m9054_init;
	if (!m9054_init)
	{
		t1197_TI_var = il2cpp_codegen_class_from_type(&t1197_0_0_0);
		m9054_init = true;
	}
	t2* V_0 = {0};
	{
		t2* L_0 = m5775(NULL, &m5775_MI);
		int32_t L_1 = m2699(L_0, &m2699_MI);
		((t1731_SFs*)InitializedTypeInfo(&t1731_TI)->static_fields)->f14 = ((t1197*)SZArrayNew(t1197_TI_var, L_1));
		t2* L_2 = m5775(NULL, &m5775_MI);
		V_0 = L_2;
		t2* L_3 = V_0;
		int32_t L_4 = m2699(L_3, &m2699_MI);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		t2* L_5 = V_0;
		uint16_t L_6 = m2714(L_5, 0, &m2714_MI);
		((t1731_SFs*)InitializedTypeInfo(&t1731_TI)->static_fields)->f15 = L_6;
	}

IL_002f:
	{
		return;
	}
}
extern MethodInfo m9055_MI;
extern "C" int32_t m9055 (t1731 * __this, MethodInfo* method)
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
			int32_t L_0 = m8981(__this, &m8981_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1540_TI, e.ex->object.klass))
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
extern MethodInfo m9056_MI;
extern "C" int32_t m9056 (t1731 * __this, MethodInfo* method)
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
			int32_t L_0 = m8982(__this, &m8982_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1540_TI, e.ex->object.klass))
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
extern MethodInfo m9057_MI;
extern "C" int32_t m9057 (t1731 * __this, t305* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		t305* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1717, &m339_MI);
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
		t896 * L_3 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_3, (t2*) &_stringLiteral401, (t2*) &_stringLiteral812, &m4336_MI);
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
		t896 * L_5 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_5, (t2*) &_stringLiteral493, (t2*) &_stringLiteral812, &m4336_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0036:
	{
		int32_t L_6 = p1;
		t305* L_7 = p0;
		int32_t L_8 = p2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))-(int32_t)L_8)))))
		{
			goto IL_0049;
		}
	}
	{
		t556 * L_9 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_9, (t2*) &_stringLiteral1718, &m2885_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0049:
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
		uint16_t L_10 = ((t1731_SFs*)InitializedTypeInfo(&t1731_TI)->static_fields)->f15;
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
			int32_t L_11 = m8982(__this, &m8982_MI);
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
			t305* L_15 = p0;
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
			bool L_23 = m9058(__this, (((uint16_t)L_22)), &m9058_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1540_TI, e.ex->object.klass))
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
extern "C" bool m9058 (t1731 * __this, uint16_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0036;
	}

IL_0004:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
		t1197* L_0 = ((t1731_SFs*)InitializedTypeInfo(&t1731_TI)->static_fields)->f14;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		if ((*(uint8_t*)(bool*)SZArrayLdElema(L_0, L_2)))
		{
			goto IL_0032;
		}
	}
	{
		uint16_t L_3 = p0;
		t2* L_4 = m5775(NULL, &m5775_MI);
		int32_t L_5 = V_0;
		uint16_t L_6 = m2714(L_4, L_5, &m2714_MI);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_6))))
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
		t1197* L_7 = ((t1731_SFs*)InitializedTypeInfo(&t1731_TI)->static_fields)->f14;
		int32_t L_8 = V_0;
		*((bool*)(bool*)SZArrayLdElema(L_7, L_8)) = (bool)1;
		int32_t L_9 = V_0;
		t1197* L_10 = ((t1731_SFs*)InitializedTypeInfo(&t1731_TI)->static_fields)->f14;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
		t1197* L_13 = ((t1731_SFs*)InitializedTypeInfo(&t1731_TI)->static_fields)->f14;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
		t1197* L_14 = ((t1731_SFs*)InitializedTypeInfo(&t1731_TI)->static_fields)->f14;
		int32_t L_15 = V_1;
		*((bool*)(bool*)SZArrayLdElema(L_14, L_15)) = (bool)0;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
		t1197* L_18 = ((t1731_SFs*)InitializedTypeInfo(&t1731_TI)->static_fields)->f14;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((t121 *)L_18)->max_length))))))
		{
			goto IL_0044;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m9059_MI;
extern "C" t2* m9059 (t1731 * __this, MethodInfo* method)
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
			t2* L_0 = m8985(__this, &m8985_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1540_TI, e.ex->object.klass))
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
extern MethodInfo m9060_MI;
extern "C" t2* m9060 (t1731 * __this, MethodInfo* method)
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
			t2* L_0 = m8986(__this, &m8986_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1540_TI, e.ex->object.klass))
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
#include "t1732.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1732_TI;
#include "t1732MD.h"



extern MethodInfo m9061_MI;
extern "C" void m9061 (t1732 * __this, t291 * p0, t722 * p1, MethodInfo* method)
{
	{
		t291 * L_0 = p0;
		t722 * L_1 = p1;
		m8987(__this, L_0, L_1, &m8987_MI);
		return;
	}
}
extern MethodInfo m9062_MI;
extern "C" void m9062 (t1732 * __this, MethodInfo* method)
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
		m8993(__this, &m8993_MI);
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
extern MethodInfo m9063_MI;
extern "C" void m9063 (t1732 * __this, t305* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		t305* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		m8996(__this, L_0, L_1, L_2, &m8996_MI);
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
extern MethodInfo m9064_MI;
extern "C" void m9064 (t1732 * __this, uint16_t p0, MethodInfo* method)
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
		m8999(__this, L_0, &m8999_MI);
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
extern MethodInfo m9065_MI;
extern "C" void m9065 (t1732 * __this, t305* p0, MethodInfo* method)
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
		t305* L_0 = p0;
		m9000(__this, L_0, &m9000_MI);
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
extern MethodInfo m9066_MI;
extern "C" void m9066 (t1732 * __this, t2* p0, MethodInfo* method)
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
		m9001(__this, L_0, &m9001_MI);
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
#include "t1733.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1733_TI;
#include "t1733MD.h"



#include "t1735.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1735_TI;
#include "t1735MD.h"

#include "t168.h"
#include "t1739.h"
#include "t1742.h"
#include "t1187.h"
#include "t1738.h"
#include "t1794.h"
#include "t1793.h"
#include "t1649.h"
#include "t1740.h"
#include "t1559.h"
#include "t1711.h"
#include "t1336.h"
extern TypeInfo t1742_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1187_TI;
extern TypeInfo t1649_TI;
extern TypeInfo t1740_TI;
extern TypeInfo t1736_TI;
extern TypeInfo t1741_TI;
extern TypeInfo t1559_TI;
extern TypeInfo t121_TI;
extern TypeInfo t1711_TI;
extern TypeInfo t1336_TI;
extern TypeInfo t1739_TI;
#include "t1336MD.h"
#include "t8MD.h"
#include "t1739MD.h"
#include "t1187MD.h"
#include "t1793MD.h"
#include "t1649MD.h"
#include "t568MD.h"
#include "t1740MD.h"
#include "t1711MD.h"
#include "t1559MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t117_0_0_0;
extern Il2CppType t8_0_0_0;
extern Il2CppType t122_0_0_0;
extern Il2CppType t1742_0_0_0;
extern Il2CppType t1736_0_0_0;
extern Il2CppType t1741_0_0_0;
extern MethodInfo m9077_MI;
extern MethodInfo m9420_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m6946_MI;
extern MethodInfo m9445_MI;
extern MethodInfo m9448_MI;
extern MethodInfo m9074_MI;
extern MethodInfo m9447_MI;
extern MethodInfo m8626_MI;
extern MethodInfo m9451_MI;
extern MethodInfo m11869_MI;
extern MethodInfo m11866_MI;
extern MethodInfo m9450_MI;
extern MethodInfo m9696_MI;
extern MethodInfo m9454_MI;
extern MethodInfo m8271_MI;
extern MethodInfo m8277_MI;
extern MethodInfo m5792_MI;
extern MethodInfo m9068_MI;
extern MethodInfo m9071_MI;
extern MethodInfo m9078_MI;
extern MethodInfo m9285_MI;
extern MethodInfo m5912_MI;
extern MethodInfo m5718_MI;
extern MethodInfo m2713_MI;
extern MethodInfo m1077_MI;
extern MethodInfo m8822_MI;
extern MethodInfo m9289_MI;
extern MethodInfo m9309_MI;
extern MethodInfo m9537_MI;
extern MethodInfo m9432_MI;
extern MethodInfo m8276_MI;
extern MethodInfo m9458_MI;
extern MethodInfo m9459_MI;


extern MethodInfo m9067_MI;
extern TypeInfo* t158_TI_var;
extern TypeInfo* t723_TI_var;
extern "C" void m9067 (t1735 * __this, t1739 * p0, t2* p1, int32_t p2, bool p3, MethodInfo* method)
{
	static bool m9067_init;
	if (!m9067_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m9067_init = true;
	}
	t1187 * V_0 = {0};
	t723* V_1 = {0};
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	t723* V_4 = {0};
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
		m9420(__this, &m9420_MI);
		int32_t L_4 = p2;
		__this->f28 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)2048)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_5 = p2;
		p2 = ((int32_t)((int32_t)L_5&(int32_t)((int32_t)-2049)));
		t126 * L_6 = m329(NULL, LoadTypeToken(&t1742_0_0_0), &m329_MI);
		int32_t L_7 = p2;
		int32_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t1742_TI), &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t8_TI));
		bool L_10 = m6966(NULL, L_6, L_9, &m6966_MI);
		if (L_10)
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_11 = m4334(NULL, &m4334_MI);
		t158* L_12 = ((t158*)SZArrayNew(t158_TI_var, 1));
		int32_t L_13 = p2;
		int32_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t125_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 0)) = (t9 *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = m6946(NULL, L_11, (t2*) &_stringLiteral1719, L_12, &m6946_MI);
		t556 * L_17 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_17, L_16, (t2*) &_stringLiteral1620, &m5691_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00ab:
	{
		t1739 * L_18 = p0;
		t2* L_19 = m9445(L_18, &m9445_MI);
		__this->f11 = L_19;
		int32_t L_20 = p2;
		__this->f18 = L_20;
		t1739 * L_21 = p0;
		int32_t L_22 = m9448(L_21, &m9448_MI);
		__this->f16 = L_22;
		bool L_23 = m9074(__this, &m9074_MI);
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
		int32_t L_26 = m2699(L_25, &m2699_MI);
		if (L_26)
		{
			goto IL_00ea;
		}
	}

IL_00dd:
	{
		t2* L_27 = m8804(NULL, &m8804_MI);
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
		t1739 * L_29 = p0;
		t894 * L_30 = m9447(L_29, &m9447_MI);
		if (!L_30)
		{
			goto IL_011b;
		}
	}
	{
		t1739 * L_31 = p0;
		t894 * L_32 = m9447(L_31, &m9447_MI);
		t2* L_33 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8626_MI, L_32);
		__this->f15 = L_33;
		t1739 * L_34 = p0;
		t894 * L_35 = m9447(L_34, &m9447_MI);
		t2* L_36 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8626_MI, L_35);
		__this->f29 = L_36;
	}

IL_011b:
	{
		t1739 * L_37 = p0;
		t1187 * L_38 = m9451(L_37, &m9451_MI);
		V_0 = L_38;
		t1187 * L_39 = V_0;
		bool L_40 = m11869(NULL, L_39, (t1187 *)NULL, &m11869_MI);
		if (!L_40)
		{
			goto IL_0137;
		}
	}
	{
		t1187 * L_41 = V_0;
		t2* L_42 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11866_MI, L_41);
		__this->f14 = L_42;
	}

IL_0137:
	{
		t1739 * L_43 = p0;
		t1793 * L_44 = m9450(L_43, &m9450_MI);
		if (!L_44)
		{
			goto IL_0152;
		}
	}
	{
		t1739 * L_45 = p0;
		t1793 * L_46 = m9450(L_45, &m9450_MI);
		t1649 * L_47 = m9696(L_46, &m9696_MI);
		__this->f27 = L_47;
		goto IL_016e;
	}

IL_0152:
	{
		t1739 * L_48 = p0;
		t723* L_49 = m9454(L_48, &m9454_MI);
		V_1 = L_49;
		t723* L_50 = V_1;
		if (!L_50)
		{
			goto IL_016e;
		}
	}
	{
		t723* L_51 = V_1;
		if ((((int32_t)(((int32_t)(((t121 *)L_51)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_016e;
		}
	}
	{
		t723* L_52 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t1649 * L_53 = (t1649 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1649_TI));
		m8271(L_53, L_52, &m8271_MI);
		__this->f27 = L_53;
	}

IL_016e:
	{
		t1649 * L_54 = (__this->f27);
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
		t1649 * L_57 = (__this->f27);
		if (!L_57)
		{
			goto IL_0211;
		}
	}
	{
		t1649 * L_58 = (__this->f27);
		t723* L_59 = m8277(L_58, &m8277_MI);
		__this->f20 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_59)->max_length)))*(int32_t)2))));
		V_2 = 0;
		t1649 * L_60 = (__this->f27);
		t723* L_61 = m8277(L_60, &m8277_MI);
		V_4 = L_61;
		V_5 = 0;
		goto IL_0209;
	}

IL_01c5:
	{
		t723* L_62 = V_4;
		int32_t L_63 = V_5;
		int32_t L_64 = L_63;
		V_3 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_62, L_64));
		t2* L_65 = m5792((&V_3), (t2*) &_stringLiteral597, &m5792_MI);
		V_6 = L_65;
		t723* L_66 = (__this->f20);
		int32_t L_67 = V_2;
		int32_t L_68 = L_67;
		V_2 = ((int32_t)((int32_t)L_68+(int32_t)1));
		t2* L_69 = V_6;
		uint16_t L_70 = m2714(L_69, 0, &m2714_MI);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_66, L_68)) = (uint8_t)(((uint8_t)L_70));
		t723* L_71 = (__this->f20);
		int32_t L_72 = V_2;
		int32_t L_73 = L_72;
		V_2 = ((int32_t)((int32_t)L_73+(int32_t)1));
		t2* L_74 = V_6;
		uint16_t L_75 = m2714(L_74, 1, &m2714_MI);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_71, L_73)) = (uint8_t)(((uint8_t)L_75));
		int32_t L_76 = V_5;
		V_5 = ((int32_t)((int32_t)L_76+(int32_t)1));
	}

IL_0209:
	{
		int32_t L_77 = V_5;
		t723* L_78 = V_4;
		if ((((int32_t)L_77) < ((int32_t)(((int32_t)(((t121 *)L_78)->max_length))))))
		{
			goto IL_01c5;
		}
	}

IL_0211:
	{
		m9068(NULL, __this, &m9068_MI);
		return;
	}
}
extern "C" void m9068 (t9 * __this , t1735 * p0, MethodInfo* method)
{
	typedef void (*m9068_ftn) (t1735 *);
	static m9068_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9068_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.AssemblyBuilder::basic_init(System.Reflection.Emit.AssemblyBuilder)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m9069_MI;
extern "C" t2* m9069 (t1735 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9077(__this, &m9077_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9070_MI;
extern "C" t1740 * m9070 (t1735 * __this, t2* p0, bool p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p0;
		bool L_2 = p1;
		t1740 * L_3 = m9071(__this, L_0, L_1, L_2, 1, &m9071_MI);
		return L_3;
	}
}
extern TypeInfo* t1736_TI_var;
extern "C" t1740 * m9071 (t1735 * __this, t2* p0, t2* p1, bool p2, bool p3, MethodInfo* method)
{
	static bool m9071_init;
	if (!m9071_init)
	{
		t1736_TI_var = il2cpp_codegen_class_from_type(&t1736_0_0_0);
		m9071_init = true;
	}
	t1740 * V_0 = {0};
	t1736* V_1 = {0};
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		m9078(__this, L_0, L_1, 0, &m9078_MI);
		bool L_2 = p3;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		t2* L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_4 = m8923(NULL, L_3, &m8923_MI);
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
		t2* L_8 = m399(NULL, (t2*) &_stringLiteral1720, L_7, (t2*) &_stringLiteral1721, &m399_MI);
		t556 * L_9 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_9, L_8, &m2885_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0035:
	{
		bool L_10 = m9074(__this, &m9074_MI);
		if (L_10)
		{
			goto IL_0048;
		}
	}
	{
		t169 * L_11 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_11, (t2*) &_stringLiteral1722, &m5706_MI);
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
		t1332 * L_13 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_13, (t2*) &_stringLiteral1723, &m5685_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_005b:
	{
		t2* L_14 = p0;
		t2* L_15 = p1;
		bool L_16 = p2;
		bool L_17 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1740_TI));
		t1740 * L_18 = (t1740 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1740_TI));
		m9285(L_18, __this, L_14, L_15, L_16, L_17, &m9285_MI);
		V_0 = L_18;
		t1736* L_19 = (__this->f10);
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
		t1332 * L_21 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_21, (t2*) &_stringLiteral1724, &m5685_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_0082:
	{
		t1736* L_22 = (__this->f10);
		if (!L_22)
		{
			goto IL_00b7;
		}
	}
	{
		t1736* L_23 = (__this->f10);
		V_1 = ((t1736*)SZArrayNew(t1736_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_23)->max_length)))+(int32_t)1))));
		t1736* L_24 = (__this->f10);
		t1736* L_25 = V_1;
		t1736* L_26 = (__this->f10);
		m5912(NULL, (t121 *)(t121 *)L_24, (t121 *)(t121 *)L_25, (((int32_t)(((t121 *)L_26)->max_length))), &m5912_MI);
		t1736* L_27 = V_1;
		__this->f10 = L_27;
		goto IL_00c3;
	}

IL_00b7:
	{
		__this->f10 = ((t1736*)SZArrayNew(t1736_TI_var, 1));
	}

IL_00c3:
	{
		t1736* L_28 = (__this->f10);
		t1736* L_29 = (__this->f10);
		t1740 * L_30 = V_0;
		ArrayElementTypeCheck (L_28, L_30);
		*((t1740 **)(t1740 **)SZArrayLdElema(L_28, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_29)->max_length)))-(int32_t)1)))) = (t1740 *)L_30;
		t1740 * L_31 = V_0;
		return L_31;
	}
}
extern MethodInfo m9072_MI;
extern TypeInfo* t1741_TI_var;
extern "C" t1741* m9072 (t1735 * __this, MethodInfo* method)
{
	static bool m9072_init;
	if (!m9072_init)
	{
		t1741_TI_var = il2cpp_codegen_class_from_type(&t1741_0_0_0);
		m9072_init = true;
	}
	{
		t1736* L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((t1741*)SZArrayNew(t1741_TI_var, 0));
	}

IL_000f:
	{
		t1736* L_1 = (__this->f10);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_1);
		return ((t1741*)Castclass(L_2, t1741_TI_var));
	}
}
extern MethodInfo m9073_MI;
extern "C" bool m9073 (t1735 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f28);
		return L_0;
	}
}
extern "C" bool m9074 (t1735 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->f18);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9075_MI;
extern "C" bool m9075 (t1735 * __this, MethodInfo* method)
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
extern MethodInfo m9076_MI;
extern "C" t2* m9076 (t1735 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f12);
		return L_0;
	}
}
extern "C" t138 * m9077 (t1735 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1725, &m5706_MI);
		return L_0;
	}
}
extern "C" void m9078 (t1735 * __this, t2* p0, t2* p1, bool p2, MethodInfo* method)
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
		m339(L_3, (t2*) &_stringLiteral1726, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t2* L_4 = p0;
		int32_t L_5 = m2699(L_4, &m2699_MI);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_6, (t2*) &_stringLiteral1727, (t2*) &_stringLiteral2, &m5691_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0034:
	{
		t2* L_7 = p1;
		int32_t L_8 = m2699(L_7, &m2699_MI);
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		t556 * L_9 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_9, (t2*) &_stringLiteral1728, (t2*) &_stringLiteral1726, &m5691_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_004c:
	{
		t2* L_10 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_11 = m8924(NULL, L_10, &m8924_MI);
		t2* L_12 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_13 = m2713(NULL, L_11, L_12, &m2713_MI);
		if (!L_13)
		{
			goto IL_0075;
		}
	}
	{
		t2* L_14 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_15 = m399(NULL, (t2*) &_stringLiteral1729, L_14, (t2*) &_stringLiteral1730, &m399_MI);
		t556 * L_16 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_16, L_15, (t2*) &_stringLiteral1726, &m5691_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_21 = m1076(NULL, L_19, L_20, &m1076_MI);
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
		bool L_24 = m1077(NULL, L_23, &m1077_MI);
		if (L_24)
		{
			goto IL_00ad;
		}
	}
	{
		t2* L_25 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_26 = m399(NULL, (t2*) &_stringLiteral1731, L_25, (t2*) &_stringLiteral141, &m399_MI);
		t1711 * L_27 = (t1711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1711_TI));
		m8822(L_27, L_26, &m8822_MI);
		il2cpp_codegen_raise_exception(L_27);
	}

IL_00ad:
	{
		t1737* L_28 = (__this->f13);
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
		t1737* L_29 = (__this->f13);
		int32_t L_30 = V_1;
		t2* L_31 = (((t1733 *)(t1733 *)SZArrayLdElema(L_29, L_30))->f2);
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
		t2* L_35 = m399(NULL, (t2*) &_stringLiteral1732, L_34, (t2*) &_stringLiteral141, &m399_MI);
		t556 * L_36 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_36, L_35, &m2885_MI);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_00e8:
	{
		t1737* L_37 = (__this->f13);
		int32_t L_38 = V_1;
		t2* L_39 = (((t1733 *)(t1733 *)SZArrayLdElema(L_37, L_38))->f1);
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
		t2* L_43 = m399(NULL, (t2*) &_stringLiteral1733, L_42, (t2*) &_stringLiteral141, &m399_MI);
		t556 * L_44 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_44, L_43, &m2885_MI);
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
		t1737* L_47 = (__this->f13);
		if ((((int32_t)L_46) < ((int32_t)(((int32_t)(((t121 *)L_47)->max_length))))))
		{
			goto IL_00b9;
		}
	}

IL_0126:
	{
		t1736* L_48 = (__this->f10);
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
		t1736* L_49 = (__this->f10);
		int32_t L_50 = V_2;
		int32_t L_51 = L_50;
		bool L_52 = m9289((*(t1740 **)(t1740 **)SZArrayLdElema(L_49, L_51)), &m9289_MI);
		if (L_52)
		{
			goto IL_016f;
		}
	}
	{
		t1736* L_53 = (__this->f10);
		int32_t L_54 = V_2;
		int32_t L_55 = L_54;
		t2* L_56 = m9309((*(t1740 **)(t1740 **)SZArrayLdElema(L_53, L_55)), &m9309_MI);
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
		t2* L_60 = m399(NULL, (t2*) &_stringLiteral1732, L_59, (t2*) &_stringLiteral141, &m399_MI);
		t556 * L_61 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_61, L_60, &m2885_MI);
		il2cpp_codegen_raise_exception(L_61);
	}

IL_016f:
	{
		t1736* L_62 = (__this->f10);
		int32_t L_63 = V_2;
		int32_t L_64 = L_63;
		t2* L_65 = m9537((*(t1740 **)(t1740 **)SZArrayLdElema(L_62, L_64)), &m9537_MI);
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
		t2* L_69 = m399(NULL, (t2*) &_stringLiteral1733, L_68, (t2*) &_stringLiteral141, &m399_MI);
		t556 * L_70 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_70, L_69, &m2885_MI);
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
		t1736* L_73 = (__this->f10);
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
extern MethodInfo m9079_MI;
extern "C" t1739 * m9079 (t1735 * __this, MethodInfo* method)
{
	t1739 * V_0 = {0};
	{
		t1739 * L_0 = m9432(__this, &m9432_MI);
		V_0 = L_0;
		t1649 * L_1 = (__this->f27);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		t1739 * L_2 = V_0;
		t1649 * L_3 = (__this->f27);
		t723* L_4 = m8276(L_3, &m8276_MI);
		m9458(L_2, L_4, &m9458_MI);
		t1739 * L_5 = V_0;
		t1649 * L_6 = (__this->f27);
		t723* L_7 = m8277(L_6, &m8277_MI);
		m9459(L_5, L_7, &m9459_MI);
	}

IL_0031:
	{
		t1739 * L_8 = V_0;
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1742MD.h"



#include "t1743.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1743_TI;
#include "t1743MD.h"

#include "t1564.h"
#include "t1745.h"
#include "t1749.h"
#include "t1748.h"
#include "t819.h"
#include "t553.h"
#include "t1750.h"
#include "t917.h"
#include "t1781.h"
#include "t918.h"
#include "t926.h"
#include "t1744.h"
extern TypeInfo t819_TI;
extern TypeInfo t553_TI;
extern TypeInfo t1745_TI;
extern TypeInfo t152_TI;
extern TypeInfo t921_TI;
extern TypeInfo t917_TI;
extern TypeInfo t2120_TI;
extern TypeInfo t1744_TI;
extern TypeInfo t1750_TI;
#include "t819MD.h"
#include "t553MD.h"
#include "t1745MD.h"
#include "t1750MD.h"
#include "t917MD.h"
#include "t2120MD.h"
#include "t1744MD.h"
extern Il2CppType t152_0_0_0;
extern Il2CppType t921_0_0_0;
extern MethodInfo m9103_MI;
extern MethodInfo m7784_MI;
extern MethodInfo m9082_MI;
extern MethodInfo m9362_MI;
extern MethodInfo m9536_MI;
extern MethodInfo m9483_MI;
extern MethodInfo m9101_MI;
extern MethodInfo m9098_MI;
extern MethodInfo m9284_MI;
extern MethodInfo m9307_MI;
extern MethodInfo m9400_MI;
extern MethodInfo m9102_MI;
extern MethodInfo m9104_MI;
extern MethodInfo m9084_MI;
extern MethodInfo m9669_MI;
extern MethodInfo m11577_MI;
extern MethodInfo m11576_MI;
extern MethodInfo m9097_MI;
extern MethodInfo m9308_MI;
extern MethodInfo m9221_MI;
extern MethodInfo m9280_MI;
extern MethodInfo m9363_MI;
extern MethodInfo m9398_MI;


extern MethodInfo m9080_MI;
extern TypeInfo* t152_TI_var;
extern "C" void m9080 (t1743 * __this, t1745 * p0, int32_t p1, int32_t p2, t152* p3, t1747* p4, t1747* p5, MethodInfo* method)
{
	static bool m9080_init;
	if (!m9080_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9080_init = true;
	}
	int32_t V_0 = 0;
	t1750  V_1 = {0};
	{
		__this->f9 = 1;
		m9483(__this, &m9483_MI);
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
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_6, (t2*) &_stringLiteral1734, (t2*) &_stringLiteral1735, &m5691_MI);
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
		m5912(NULL, (t121 *)(t121 *)L_11, (t121 *)(t121 *)L_12, (((int32_t)(((t121 *)L_13)->max_length))), &m5912_MI);
	}

IL_0070:
	{
		t1745 * L_14 = p0;
		__this->f7 = L_14;
		t1747* L_15 = p4;
		__this->f10 = L_15;
		t1747* L_16 = p5;
		__this->f11 = L_16;
		int32_t L_17 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, bool >::Invoke(&m9101_MI, __this, __this, 6, 1);
		__this->f5 = L_17;
		t1745 * L_18 = p0;
		t1559 * L_19 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m9362_MI, L_18);
		t1750  L_20 = m9098(__this, &m9098_MI);
		V_1 = L_20;
		int32_t L_21 = m9284((&V_1), &m9284_MI);
		m9307(((t1740 *)Castclass(L_19, InitializedTypeInfo(&t1740_TI))), __this, L_21, &m9307_MI);
		return;
	}
}
extern MethodInfo m9081_MI;
extern "C" int32_t m9081 (t1743 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" t1745 * m9082 (t1743 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9083_MI;
extern "C" t921* m9083 (t1743 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f7);
		bool L_1 = m9400(L_0, &m9400_MI);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = m9102(__this, &m9102_MI);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t138 * L_3 = m9104(__this, &m9104_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t921* L_4 = m9084(__this, &m9084_MI);
		return L_4;
	}
}
extern TypeInfo* t921_TI_var;
extern "C" t921* m9084 (t1743 * __this, MethodInfo* method)
{
	static bool m9084_init;
	if (!m9084_init)
	{
		t921_TI_var = il2cpp_codegen_class_from_type(&t921_0_0_0);
		m9084_init = true;
	}
	t921* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	t921* G_B5_1 = {0};
	int32_t G_B4_0 = 0;
	t921* G_B4_1 = {0};
	t1781 * G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t921* G_B6_2 = {0};
	{
		t152* L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((t921*)SZArrayNew(t921_TI_var, 0));
	}

IL_000f:
	{
		t152* L_1 = (__this->f3);
		V_0 = ((t921*)SZArrayNew(t921_TI_var, (((int32_t)(((t121 *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		t921* L_2 = V_0;
		int32_t L_3 = V_1;
		t1746* L_4 = (__this->f8);
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
		G_B6_0 = ((t1781 *)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0038;
	}

IL_002e:
	{
		t1746* L_5 = (__this->f8);
		int32_t L_6 = V_1;
		int32_t L_7 = ((int32_t)((int32_t)L_6+(int32_t)1));
		G_B6_0 = (*(t1781 **)(t1781 **)SZArrayLdElema(L_5, L_7));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0038:
	{
		t152* L_8 = (__this->f3);
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		int32_t L_11 = V_1;
		t917 * L_12 = (t917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t917_TI));
		m9669(L_12, G_B6_0, (*(t126 **)(t126 **)SZArrayLdElema(L_8, L_10)), __this, ((int32_t)((int32_t)L_11+(int32_t)1)), &m9669_MI);
		ArrayElementTypeCheck (G_B6_2, L_12);
		*((t917 **)(t917 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (t917 *)L_12;
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
		t921* L_16 = V_0;
		return L_16;
	}
}
extern MethodInfo m9085_MI;
extern "C" int32_t m9085 (t1743 * __this, MethodInfo* method)
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
extern MethodInfo m9086_MI;
extern "C" t9 * m9086 (t1743 * __this, t9 * p0, int32_t p1, t926 * p2, t158* p3, t894 * p4, MethodInfo* method)
{
	{
		t138 * L_0 = m9103(__this, &m9103_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9087_MI;
extern "C" t9 * m9087 (t1743 * __this, int32_t p0, t926 * p1, t158* p2, t894 * p3, MethodInfo* method)
{
	{
		t138 * L_0 = m9103(__this, &m9103_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9088_MI;
extern "C" t1749  m9088 (t1743 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9103(__this, &m9103_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9089_MI;
extern "C" int32_t m9089 (t1743 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9090_MI;
extern "C" t126 * m9090 (t1743 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9091_MI;
extern "C" t126 * m9091 (t1743 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9092_MI;
extern "C" t2* m9092 (t1743 * __this, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t819_TI));
		t2* L_1 = ((t819_SFs*)InitializedTypeInfo(&t819_TI)->static_fields)->f1;
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t819_TI));
		t2* L_2 = ((t819_SFs*)InitializedTypeInfo(&t819_TI)->static_fields)->f0;
		G_B3_0 = L_2;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
extern MethodInfo m9093_MI;
extern "C" bool m9093 (t1743 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9103(__this, &m9103_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9094_MI;
extern "C" t158* m9094 (t1743 * __this, bool p0, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f7);
		bool L_1 = m9400(L_0, &m9400_MI);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = m9102(__this, &m9102_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_4 = m11577(NULL, __this, L_3, &m11577_MI);
		return L_4;
	}

IL_001d:
	{
		t138 * L_5 = m9103(__this, &m9103_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m9095_MI;
extern "C" t158* m9095 (t1743 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f7);
		bool L_1 = m9400(L_0, &m9400_MI);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		bool L_2 = m9102(__this, &m9102_MI);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		t126 * L_3 = p0;
		bool L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_5 = m11576(NULL, __this, L_3, L_4, &m11576_MI);
		return L_5;
	}

IL_001e:
	{
		t138 * L_6 = m9103(__this, &m9103_MI);
		il2cpp_codegen_raise_exception(L_6);
	}
}
extern MethodInfo m9096_MI;
extern "C" t1744 * m9096 (t1743 * __this, MethodInfo* method)
{
	{
		t1744 * L_0 = m9097(__this, ((int32_t)64), &m9097_MI);
		return L_0;
	}
}
extern "C" t1744 * m9097 (t1743 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1744 * L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1744 * L_1 = (__this->f2);
		return L_1;
	}

IL_000f:
	{
		t1745 * L_2 = (__this->f7);
		t1559 * L_3 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m9362_MI, L_2);
		t1745 * L_4 = (__this->f7);
		t1559 * L_5 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m9362_MI, L_4);
		t9 * L_6 = m9308(((t1740 *)Castclass(L_5, InitializedTypeInfo(&t1740_TI))), &m9308_MI);
		int32_t L_7 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1744_TI));
		t1744 * L_8 = (t1744 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1744_TI));
		m9221(L_8, L_3, L_6, L_7, &m9221_MI);
		__this->f2 = L_8;
		t1744 * L_9 = (__this->f2);
		return L_9;
	}
}
extern "C" t1750  m9098 (t1743 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		t1750  L_1 = {0};
		m9280(&L_1, ((int32_t)((int32_t)((int32_t)100663296)|(int32_t)L_0)), &m9280_MI);
		return L_1;
	}
}
extern MethodInfo m9099_MI;
extern "C" t1559 * m9099 (t1743 * __this, MethodInfo* method)
{
	{
		t1559 * L_0 = m7784(__this, &m7784_MI);
		return L_0;
	}
}
extern MethodInfo m9100_MI;
extern "C" t2* m9100 (t1743 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f7);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9363_MI, L_0);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m399(NULL, (t2*) &_stringLiteral1736, L_1, (t2*) &_stringLiteral1737, &m399_MI);
		return L_2;
	}
}
extern "C" int32_t m9101 (t1743 * __this, t9 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f7);
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = p2;
		int32_t L_4 = m9398(L_0, L_1, L_2, L_3, &m9398_MI);
		return L_4;
	}
}
extern "C" bool m9102 (t1743 * __this, MethodInfo* method)
{
	t1740 * V_0 = {0};
	t1735 * V_1 = {0};
	{
		t1745 * L_0 = m9082(__this, &m9082_MI);
		t1559 * L_1 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m9362_MI, L_0);
		V_0 = ((t1740 *)Castclass(L_1, InitializedTypeInfo(&t1740_TI)));
		t1740 * L_2 = V_0;
		t1336 * L_3 = m9536(L_2, &m9536_MI);
		V_1 = ((t1735 *)Castclass(L_3, InitializedTypeInfo(&t1735_TI)));
		t1735 * L_4 = V_1;
		bool L_5 = m9073(L_4, &m9073_MI);
		return L_5;
	}
}
extern "C" t138 * m9103 (t1743 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1725, &m5706_MI);
		return L_0;
	}
}
extern "C" t138 * m9104 (t1743 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1738, &m5706_MI);
		return L_0;
	}
}
#include "t1751.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1751_TI;
#include "t1751MD.h"

#include "t821.h"
#include "t1337.h"
#include "t2114.h"
#include "t1752.h"
#include "t907.h"
#include "t1816.h"
extern TypeInfo t58_TI;
extern TypeInfo t1337_TI;
extern TypeInfo t1752_TI;
extern TypeInfo t907_TI;
extern TypeInfo t1816_TI;
extern TypeInfo t2114_TI;
extern TypeInfo t221_TI;
#include "t1749MD.h"
#include "t1337MD.h"
#include "t1752MD.h"
#include "t907MD.h"
#include "t1816MD.h"
extern Il2CppType t221_0_0_0;
extern MethodInfo m11762_MI;
extern MethodInfo m4436_MI;
extern MethodInfo m9245_MI;
extern MethodInfo m9244_MI;
extern MethodInfo m9107_MI;
extern MethodInfo m9105_MI;
extern MethodInfo m9106_MI;
extern MethodInfo m11640_MI;
extern MethodInfo m9594_MI;
extern MethodInfo m4393_MI;
extern MethodInfo m9701_MI;
extern MethodInfo m9112_MI;
extern MethodInfo m4400_MI;
extern MethodInfo m4367_MI;
extern MethodInfo m9123_MI;
extern MethodInfo m9121_MI;
extern MethodInfo m4269_MI;


extern "C" void m9105 (t1751 * __this, t1751 * p0, MethodInfo* method)
{
	typedef void (*m9105_ftn) (t1751 *, t1751 *);
	static m9105_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9105_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.DynamicMethod::create_dynamic_method(System.Reflection.Emit.DynamicMethod)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m9106 (t1751 * __this, t1751 * p0, MethodInfo* method)
{
	typedef void (*m9106_ftn) (t1751 *, t1751 *);
	static m9106_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9106_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.DynamicMethod::destroy_dynamic_method(System.Reflection.Emit.DynamicMethod)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m9107 (t1751 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	t1751 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1749 * L_0 = &(__this->f0);
		t58 L_1 = m11762(L_0, &m11762_MI);
		t58 L_2 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_3 = m4436(NULL, L_1, L_2, &m4436_MI);
		if (!L_3)
		{
			goto IL_00b3;
		}
	}
	{
		t1744 * L_4 = (__this->f7);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		t1744 * L_5 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1744_TI));
		int32_t L_6 = m9245(NULL, L_5, &m9245_MI);
		if (L_6)
		{
			goto IL_004a;
		}
	}

IL_002f:
	{
		t2* L_7 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = m399(NULL, (t2*) &_stringLiteral1739, L_7, (t2*) &_stringLiteral1740, &m399_MI);
		t1332 * L_9 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_9, L_8, &m5685_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_004a:
	{
		t1744 * L_10 = (__this->f7);
		m9244(L_10, &m9244_MI);
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
			if (!((t1751 *)IsInst((*(t9 **)(t9 **)SZArrayLdElema(L_12, L_14)), InitializedTypeInfo(&t1751_TI))))
			{
				goto IL_0093;
			}
		}

IL_0077:
		{
			t158* L_15 = (__this->f8);
			int32_t L_16 = V_0;
			int32_t L_17 = L_16;
			V_1 = ((t1751 *)Castclass((*(t9 **)(t9 **)SZArrayLdElema(L_15, L_17)), InitializedTypeInfo(&t1751_TI)));
			t1751 * L_18 = V_1;
			bool L_19 = (L_18->f11);
			if (L_19)
			{
				goto IL_0093;
			}
		}

IL_008d:
		{
			t1751 * L_20 = V_1;
			m9107(L_20, &m9107_MI);
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
		m9105(__this, __this, &m9105_MI);
	}

IL_00b3:
	{
		return;
	}
}
extern MethodInfo m9108_MI;
extern "C" void m9108 (t1751 * __this, MethodInfo* method)
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
		m9106(__this, __this, &m9106_MI);
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
extern MethodInfo m9109_MI;
extern "C" t821 * m9109 (t1751 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m9110_MI;
extern "C" t158* m9110 (t1751 * __this, bool p0, MethodInfo* method)
{
	{
		t1337 * L_0 = (t1337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1337_TI));
		m11640(L_0, &m11640_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9111_MI;
extern "C" t158* m9111 (t1751 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1337 * L_0 = (t1337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1337_TI));
		m11640(L_0, &m11640_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t921_TI_var;
extern "C" t921* m9112 (t1751 * __this, MethodInfo* method)
{
	static bool m9112_init;
	if (!m9112_init)
	{
		t921_TI_var = il2cpp_codegen_class_from_type(&t921_0_0_0);
		m9112_init = true;
	}
	t921* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	t921* G_B5_1 = {0};
	int32_t G_B4_0 = 0;
	t921* G_B4_1 = {0};
	t1781 * G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t921* G_B6_2 = {0};
	{
		t152* L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((t921*)SZArrayNew(t921_TI_var, 0));
	}

IL_000f:
	{
		t152* L_1 = (__this->f3);
		V_0 = ((t921*)SZArrayNew(t921_TI_var, (((int32_t)(((t121 *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		t921* L_2 = V_0;
		int32_t L_3 = V_1;
		t1746* L_4 = (__this->f10);
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
		G_B6_0 = ((t1781 *)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0038;
	}

IL_002e:
	{
		t1746* L_5 = (__this->f10);
		int32_t L_6 = V_1;
		int32_t L_7 = ((int32_t)((int32_t)L_6+(int32_t)1));
		G_B6_0 = (*(t1781 **)(t1781 **)SZArrayLdElema(L_5, L_7));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0038:
	{
		t152* L_8 = (__this->f3);
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		int32_t L_11 = V_1;
		t917 * L_12 = (t917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t917_TI));
		m9669(L_12, G_B6_0, (*(t126 **)(t126 **)SZArrayLdElema(L_8, L_10)), __this, ((int32_t)((int32_t)L_11+(int32_t)1)), &m9669_MI);
		ArrayElementTypeCheck (G_B6_2, L_12);
		*((t917 **)(t917 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (t917 *)L_12;
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
		t921* L_16 = V_0;
		return L_16;
	}
}
extern MethodInfo m9113_MI;
extern "C" t9 * m9113 (t1751 * __this, t9 * p0, int32_t p1, t926 * p2, t158* p3, t894 * p4, MethodInfo* method)
{
	t2114 * V_0 = {0};
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
			m9107(__this, &m9107_MI);
			t1752 * L_0 = (__this->f9);
			if (L_0)
			{
				goto IL_001f;
			}
		}

IL_000e:
		{
			t1749  L_1 = (__this->f0);
			t1752 * L_2 = (t1752 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1752_TI));
			m9594(L_2, L_1, &m9594_MI);
			__this->f9 = L_2;
		}

IL_001f:
		{
			t1752 * L_3 = (__this->f9);
			t9 * L_4 = p0;
			t158* L_5 = p3;
			t9 * L_6 = (t9 *)VirtFuncInvoker2< t9 *, t9 *, t158* >::Invoke(&m4393_MI, L_3, L_4, L_5);
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
		if(il2cpp_codegen_class_is_assignable_from (&t2114_TI, e.ex->object.klass))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.MethodAccessException)
		V_0 = ((t2114 *)__exception_local);
		t2114 * L_7 = V_0;
		t1816 * L_8 = (t1816 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1816_TI));
		m9701(L_8, (t2*) &_stringLiteral1741, L_7, &m9701_MI);
		il2cpp_codegen_raise_exception(L_8);
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		t9 * L_9 = V_1;
		return L_9;
	}
}
extern MethodInfo m9114_MI;
extern "C" bool m9114 (t1751 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1337 * L_0 = (t1337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1337_TI));
		m11640(L_0, &m11640_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9115_MI;
extern TypeInfo* t221_TI_var;
extern "C" t2* m9115 (t1751 * __this, MethodInfo* method)
{
	static bool m9115_init;
	if (!m9115_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9115_init = true;
	}
	t2* V_0 = {0};
	t921* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		V_0 = L_0;
		t921* L_1 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m9112_MI, __this);
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
		t2* L_4 = m610(NULL, L_3, (t2*) &_stringLiteral388, &m610_MI);
		V_0 = L_4;
	}

IL_0021:
	{
		t2* L_5 = V_0;
		t921* L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		t126 * L_9 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_6, L_8)));
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_9);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = m610(NULL, L_5, L_10, &m610_MI);
		V_0 = L_11;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_13 = V_2;
		t921* L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((t121 *)L_14)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		t221* L_15 = ((t221*)SZArrayNew(t221_TI_var, 6));
		t126 * L_16 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9123_MI, __this);
		t2* L_17 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_16);
		ArrayElementTypeCheck (L_15, L_17);
		*((t2**)(t2**)SZArrayLdElema(L_15, 0)) = (t2*)L_17;
		t221* L_18 = L_15;
		ArrayElementTypeCheck (L_18, (t2*) &_stringLiteral168);
		*((t2**)(t2**)SZArrayLdElema(L_18, 1)) = (t2*)(t2*) &_stringLiteral168;
		t221* L_19 = L_18;
		t2* L_20 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9121_MI, __this);
		ArrayElementTypeCheck (L_19, L_20);
		*((t2**)(t2**)SZArrayLdElema(L_19, 2)) = (t2*)L_20;
		t221* L_21 = L_19;
		ArrayElementTypeCheck (L_21, (t2*) &_stringLiteral387);
		*((t2**)(t2**)SZArrayLdElema(L_21, 3)) = (t2*)(t2*) &_stringLiteral387;
		t221* L_22 = L_21;
		t2* L_23 = V_0;
		ArrayElementTypeCheck (L_22, L_23);
		*((t2**)(t2**)SZArrayLdElema(L_22, 4)) = (t2*)L_23;
		t221* L_24 = L_22;
		ArrayElementTypeCheck (L_24, (t2*) &_stringLiteral148);
		*((t2**)(t2**)SZArrayLdElema(L_24, 5)) = (t2*)(t2*) &_stringLiteral148;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_25 = m4269(NULL, L_24, &m4269_MI);
		return L_25;
	}
}
extern MethodInfo m9116_MI;
extern "C" int32_t m9116 (t1751 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9117_MI;
extern "C" int32_t m9117 (t1751 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m9118_MI;
extern "C" t126 * m9118 (t1751 * __this, MethodInfo* method)
{
	{
		return (t126 *)NULL;
	}
}
extern MethodInfo m9119_MI;
extern "C" t1749  m9119 (t1751 * __this, MethodInfo* method)
{
	{
		t1749  L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9120_MI;
extern "C" t1559 * m9120 (t1751 * __this, MethodInfo* method)
{
	{
		t1559 * L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" t2* m9121 (t1751 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9122_MI;
extern "C" t126 * m9122 (t1751 * __this, MethodInfo* method)
{
	{
		return (t126 *)NULL;
	}
}
extern "C" t126 * m9123 (t1751 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f2);
		return L_0;
	}
}
#include "t1753.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1753_TI;
#include "t1753MD.h"

#include "t1562.h"
#include "t927.h"
#include "t1560.h"
#include "t823.h"
#include "t830.h"
extern TypeInfo t127_TI;
extern TypeInfo t918_TI;
extern TypeInfo t926_TI;
extern TypeInfo t1564_TI;
extern TypeInfo t928_TI;
extern TypeInfo t927_TI;
extern TypeInfo t919_TI;
extern TypeInfo t1560_TI;
extern TypeInfo t823_TI;
extern TypeInfo t923_TI;
extern TypeInfo t821_TI;
extern TypeInfo t1561_TI;
extern TypeInfo t922_TI;
extern TypeInfo t830_TI;
extern MethodInfo m9355_MI;
extern MethodInfo m9356_MI;
extern MethodInfo m9357_MI;
extern MethodInfo m9358_MI;
extern MethodInfo m9361_MI;
extern MethodInfo m9364_MI;
extern MethodInfo m9365_MI;
extern MethodInfo m9397_MI;
extern MethodInfo m7769_MI;
extern MethodInfo m9377_MI;
extern MethodInfo m9368_MI;
extern MethodInfo m9369_MI;
extern MethodInfo m9379_MI;
extern MethodInfo m9380_MI;
extern MethodInfo m9381_MI;
extern MethodInfo m9382_MI;
extern MethodInfo m9383_MI;
extern MethodInfo m7754_MI;
extern MethodInfo m7756_MI;
extern MethodInfo m9385_MI;
extern MethodInfo m9387_MI;
extern MethodInfo m9157_MI;
extern MethodInfo m7721_MI;
extern MethodInfo m9390_MI;
extern MethodInfo m9367_MI;


extern MethodInfo m9124_MI;
extern "C" t1336 * m9124 (t1753 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t1336 * L_1 = (t1336 *)VirtFuncInvoker0< t1336 * >::Invoke(&m9355_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9125_MI;
extern "C" t2* m9125 (t1753 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9356_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9126_MI;
extern "C" t126 * m9126 (t1753 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9357_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9127_MI;
extern "C" t126 * m9127 (t1753 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9358_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9128_MI;
extern "C" t2* m9128 (t1753 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9361_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9129_MI;
extern "C" t1559 * m9129 (t1753 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t1559 * L_1 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m9362_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9130_MI;
extern "C" t2* m9130 (t1753 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9363_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9131_MI;
extern "C" t2* m9131 (t1753 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9364_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9132_MI;
extern "C" t126 * m9132 (t1753 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9365_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9133_MI;
extern "C" t127  m9133 (t1753 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t127  L_1 = (t127 )VirtFuncInvoker0< t127  >::Invoke(&m9397_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9134_MI;
extern "C" t126 * m9134 (t1753 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m9135_MI;
extern "C" int32_t m9135 (t1753 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		int32_t L_1 = (L_0->f19);
		return L_1;
	}
}
extern MethodInfo m9136_MI;
extern "C" t819 * m9136 (t1753 * __this, int32_t p0, t926 * p1, int32_t p2, t152* p3, t928* p4, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t926 * L_2 = p1;
		int32_t L_3 = p2;
		t152* L_4 = p3;
		t928* L_5 = p4;
		t819 * L_6 = (t819 *)VirtFuncInvoker5< t819 *, int32_t, t926 *, int32_t, t152*, t928* >::Invoke(&m7769_MI, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
extern MethodInfo m9137_MI;
extern "C" t919* m9137 (t1753 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t919* L_2 = (t919*)VirtFuncInvoker1< t919*, int32_t >::Invoke(&m9377_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9138_MI;
extern "C" t158* m9138 (t1753 * __this, bool p0, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		bool L_1 = p0;
		t158* L_2 = (t158*)VirtFuncInvoker1< t158*, bool >::Invoke(&m9368_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9139_MI;
extern "C" t158* m9139 (t1753 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t126 * L_1 = p0;
		bool L_2 = p1;
		t158* L_3 = (t158*)VirtFuncInvoker2< t158*, t126 *, bool >::Invoke(&m9369_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9140_MI;
extern "C" t126 * m9140 (t1753 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9379_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9141_MI;
extern "C" t1560 * m9141 (t1753 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t1560 * L_3 = (t1560 *)VirtFuncInvoker2< t1560 *, t2*, int32_t >::Invoke(&m9380_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9142_MI;
extern "C" t823 * m9142 (t1753 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t823 * L_3 = (t823 *)VirtFuncInvoker2< t823 *, t2*, int32_t >::Invoke(&m9381_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9143_MI;
extern "C" t923* m9143 (t1753 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t923* L_2 = (t923*)VirtFuncInvoker1< t923*, int32_t >::Invoke(&m9382_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9144_MI;
extern "C" t152* m9144 (t1753 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t152* L_1 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9383_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9145_MI;
extern "C" t821 * m9145 (t1753 * __this, t2* p0, int32_t p1, t926 * p2, int32_t p3, t152* p4, t928* p5, MethodInfo* method)
{
	{
		t152* L_0 = p4;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		t1745 * L_1 = (__this->f8);
		t2* L_2 = p0;
		int32_t L_3 = p1;
		t821 * L_4 = (t821 *)VirtFuncInvoker2< t821 *, t2*, int32_t >::Invoke(&m7754_MI, L_1, L_2, L_3);
		return L_4;
	}

IL_0012:
	{
		t1745 * L_5 = (__this->f8);
		t2* L_6 = p0;
		int32_t L_7 = p1;
		t926 * L_8 = p2;
		int32_t L_9 = p3;
		t152* L_10 = p4;
		t928* L_11 = p5;
		t821 * L_12 = (t821 *)VirtFuncInvoker6< t821 *, t2*, int32_t, t926 *, int32_t, t152*, t928* >::Invoke(&m7756_MI, L_5, L_6, L_7, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
extern MethodInfo m9146_MI;
extern "C" t1561* m9146 (t1753 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t1561* L_2 = (t1561*)VirtFuncInvoker1< t1561*, int32_t >::Invoke(&m9385_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9147_MI;
extern "C" t922* m9147 (t1753 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t922* L_2 = (t922*)VirtFuncInvoker1< t922*, int32_t >::Invoke(&m9387_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9148_MI;
extern "C" t830 * m9148 (t1753 * __this, t2* p0, int32_t p1, t926 * p2, t126 * p3, t152* p4, t928* p5, MethodInfo* method)
{
	{
		t138 * L_0 = m9157(__this, &m9157_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9149_MI;
extern "C" bool m9149 (t1753 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7721_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9150_MI;
extern "C" t9 * m9150 (t1753 * __this, t2* p0, int32_t p1, t926 * p2, t9 * p3, t158* p4, t928* p5, t894 * p6, t221* p7, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t926 * L_3 = p2;
		t9 * L_4 = p3;
		t158* L_5 = p4;
		t928* L_6 = p5;
		t894 * L_7 = p6;
		t221* L_8 = p7;
		t9 * L_9 = (t9 *)VirtFuncInvoker8< t9 *, t2*, int32_t, t926 *, t9 *, t158*, t928*, t894 *, t221* >::Invoke(&m9390_MI, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
extern MethodInfo m9151_MI;
extern "C" bool m9151 (t1753 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9152_MI;
extern "C" bool m9152 (t1753 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9153_MI;
extern "C" bool m9153 (t1753 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9154_MI;
extern "C" bool m9154 (t1753 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9155_MI;
extern "C" bool m9155 (t1753 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m9156_MI;
extern "C" bool m9156 (t1753 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t126 * L_1 = p0;
		bool L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker2< bool, t126 *, bool >::Invoke(&m9367_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern "C" t138 * m9157 (t1753 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1725, &m5706_MI);
		return L_0;
	}
}
#include "t1754.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1754_TI;
#include "t1754MD.h"

#include "t1756.h"
#include "t1755.h"
extern MethodInfo m9171_MI;


extern MethodInfo m9158_MI;
extern "C" int32_t m9158 (t1754 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9159_MI;
extern "C" t126 * m9159 (t1754 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9160_MI;
extern "C" t306  m9160 (t1754 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9171(__this, &m9171_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9161_MI;
extern "C" t126 * m9161 (t1754 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9162_MI;
extern "C" t2* m9162 (t1754 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9163_MI;
extern "C" t126 * m9163 (t1754 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9164_MI;
extern "C" t158* m9164 (t1754 * __this, bool p0, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f3);
		bool L_1 = m9400(L_0, &m9400_MI);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_3 = m11577(NULL, __this, L_2, &m11577_MI);
		return L_3;
	}

IL_0015:
	{
		t138 * L_4 = m9171(__this, &m9171_MI);
		il2cpp_codegen_raise_exception(L_4);
	}
}
extern MethodInfo m9165_MI;
extern "C" t158* m9165 (t1754 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f3);
		bool L_1 = m9400(L_0, &m9400_MI);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t126 * L_2 = p0;
		bool L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_4 = m11576(NULL, __this, L_2, L_3, &m11576_MI);
		return L_4;
	}

IL_0016:
	{
		t138 * L_5 = m9171(__this, &m9171_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m9166_MI;
extern "C" t9 * m9166 (t1754 * __this, t9 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9171(__this, &m9171_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9167_MI;
extern "C" bool m9167 (t1754 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9171(__this, &m9171_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9168_MI;
extern "C" int32_t m9168 (t1754 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9169_MI;
extern "C" void m9169 (t1754 * __this, t9 * p0, t9 * p1, int32_t p2, t926 * p3, t894 * p4, MethodInfo* method)
{
	{
		t138 * L_0 = m9171(__this, &m9171_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9170_MI;
extern "C" t1755 * m9170 (t1754 * __this, MethodInfo* method)
{
	{
		t1755 * L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t138 * m9171 (t1754 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1725, &m5706_MI);
		return L_0;
	}
}
extern MethodInfo m9172_MI;
extern "C" t1559 * m9172 (t1754 * __this, MethodInfo* method)
{
	{
		t1559 * L_0 = m7784(__this, &m7784_MI);
		return L_0;
	}
}
#include "t1757.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1757_TI;
#include "t1757MD.h"

#include "t1758.h"
extern TypeInfo t1758_TI;
#include "t1758MD.h"
extern MethodInfo m9255_MI;
extern MethodInfo m9206_MI;
extern MethodInfo m9215_MI;
extern MethodInfo m9198_MI;
extern MethodInfo m7749_MI;
extern MethodInfo m7733_MI;
extern MethodInfo m5692_MI;
extern MethodInfo m561_MI;
extern MethodInfo m7737_MI;
extern MethodInfo m7752_MI;
extern MethodInfo m4447_MI;


extern MethodInfo m9173_MI;
extern "C" bool m9173 (t1757 * __this, t126 * p0, MethodInfo* method)
{
	int32_t G_B7_0 = 0;
	{
		t1745 * L_0 = (__this->f8);
		t1559 * L_1 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m9362_MI, L_0);
		t1735 * L_2 = (((t1740 *)Castclass(L_1, InitializedTypeInfo(&t1740_TI)))->f14);
		bool L_3 = m9073(L_2, &m9073_MI);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		t138 * L_4 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0023:
	{
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9198_MI, __this);
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
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9198_MI, __this);
		t126 * L_7 = p0;
		if ((((t9*)(t126 *)L_6) == ((t9*)(t126 *)L_7)))
		{
			goto IL_0044;
		}
	}
	{
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9198_MI, __this);
		t126 * L_9 = p0;
		bool L_10 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m7749_MI, L_8, L_9);
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
extern MethodInfo m9174_MI;
extern "C" int32_t m9174 (t1757 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t1559 * L_1 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m9362_MI, L_0);
		t1735 * L_2 = (((t1740 *)Castclass(L_1, InitializedTypeInfo(&t1740_TI)))->f14);
		bool L_3 = m9073(L_2, &m9073_MI);
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
		t138 * L_4 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_4);
	}
}
extern MethodInfo m9175_MI;
extern "C" t819 * m9175 (t1757 * __this, int32_t p0, t926 * p1, int32_t p2, t152* p3, t928* p4, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9176_MI;
extern "C" t919* m9176 (t1757 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9177_MI;
extern "C" t1560 * m9177 (t1757 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9178_MI;
extern "C" t823 * m9178 (t1757 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9179_MI;
extern "C" t923* m9179 (t1757 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9180_MI;
extern "C" t152* m9180 (t1757 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9181_MI;
extern "C" t1561* m9181 (t1757 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9182_MI;
extern "C" t821 * m9182 (t1757 * __this, t2* p0, int32_t p1, t926 * p2, int32_t p3, t152* p4, t928* p5, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9183_MI;
extern "C" t922* m9183 (t1757 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9184_MI;
extern "C" t830 * m9184 (t1757 * __this, t2* p0, int32_t p1, t926 * p2, t126 * p3, t152* p4, t928* p5, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9185_MI;
extern "C" bool m9185 (t1757 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9186_MI;
extern "C" bool m9186 (t1757 * __this, t126 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9187_MI;
extern "C" bool m9187 (t1757 * __this, t9 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9188_MI;
extern "C" bool m9188 (t1757 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9189_MI;
extern "C" bool m9189 (t1757 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9190_MI;
extern "C" bool m9190 (t1757 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9191_MI;
extern "C" bool m9191 (t1757 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9192_MI;
extern "C" bool m9192 (t1757 * __this, MethodInfo* method)
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
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7733_MI, L_1);
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
extern MethodInfo m9193_MI;
extern "C" t9 * m9193 (t1757 * __this, t2* p0, int32_t p1, t926 * p2, t9 * p3, t158* p4, t928* p5, t894 * p6, t221* p7, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9194_MI;
extern "C" t126 * m9194 (t1757 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9195_MI;
extern "C" t126 * m9195 (t1757 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m9196_MI;
extern "C" t1336 * m9196 (t1757 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t1336 * L_1 = (t1336 *)VirtFuncInvoker0< t1336 * >::Invoke(&m9355_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9197_MI;
extern "C" t2* m9197 (t1757 * __this, MethodInfo* method)
{
	{
		return (t2*)NULL;
	}
}
extern "C" t126 * m9198 (t1757 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m9199_MI;
extern "C" t2* m9199 (t1757 * __this, MethodInfo* method)
{
	{
		return (t2*)NULL;
	}
}
extern MethodInfo m9200_MI;
extern "C" bool m9200 (t1757 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9201_MI;
extern "C" t158* m9201 (t1757 * __this, bool p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9202_MI;
extern "C" t158* m9202 (t1757 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9203_MI;
extern "C" t2* m9203 (t1757 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m9204_MI;
extern "C" t2* m9204 (t1757 * __this, MethodInfo* method)
{
	{
		return (t2*)NULL;
	}
}
extern MethodInfo m9205_MI;
extern "C" t1559 * m9205 (t1757 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f8);
		t1559 * L_1 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m9362_MI, L_0);
		return L_1;
	}
}
extern "C" t126 * m9206 (t1757 * __this, MethodInfo* method)
{
	t126 * G_B3_0 = {0};
	{
		t1758 * L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t1758 * L_1 = (__this->f9);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9255_MI, L_1);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		t1745 * L_3 = (__this->f8);
		G_B3_0 = ((t126 *)(L_3));
	}

IL_001b:
	{
		return G_B3_0;
	}
}
extern MethodInfo m9207_MI;
extern "C" t126 * m9207 (t1757 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9206_MI, __this);
		return L_0;
	}
}
extern MethodInfo m9208_MI;
extern "C" t127  m9208 (t1757 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9215(__this, &m9215_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9209_MI;
extern "C" t152* m9209 (t1757 * __this, MethodInfo* method)
{
	{
		t1332 * L_0 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_0, &m5692_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9210_MI;
extern "C" t126 * m9210 (t1757 * __this, MethodInfo* method)
{
	{
		t1332 * L_0 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_0, &m5692_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9211_MI;
extern "C" bool m9211 (t1757 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m9212_MI;
extern "C" bool m9212 (t1757 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m9213_MI;
extern "C" bool m9213 (t1757 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9214_MI;
extern "C" bool m9214 (t1757 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t138 * m9215 (t1757 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		return L_0;
	}
}
extern MethodInfo m9216_MI;
extern "C" t2* m9216 (t1757 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m9217_MI;
extern "C" bool m9217 (t1757 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		bool L_1 = m7737(__this, L_0, &m7737_MI);
		return L_1;
	}
}
extern MethodInfo m9218_MI;
extern "C" int32_t m9218 (t1757 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m7752(__this, &m7752_MI);
		return L_0;
	}
}
extern MethodInfo m9219_MI;
extern "C" t126 * m9219 (t1757 * __this, t152* p0, MethodInfo* method)
{
	{
		t152* L_0 = p0;
		t126 * L_1 = m4447(__this, L_0, &m4447_MI);
		return L_1;
	}
}
#include "t1759.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1759_TI;
#include "t1759MD.h"



#include "t1760.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1760_TI;
#include "t1760MD.h"



#include "t1761.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1761_TI;
#include "t1761MD.h"



extern MethodInfo m9220_MI;
extern "C" void m9220 (t1761 * __this, int32_t p0, int32_t p1, MethodInfo* method)
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

#include "t1768.h"
#include "t1778.h"
#include "t1777.h"
#include "t1767.h"
#include "t1770.h"
#include "t302.h"
#include "t1769.h"
#include "t1780.h"
#include "t327.h"
extern TypeInfo t1763_TI;
extern TypeInfo t1768_TI;
extern TypeInfo t1767_TI;
extern TypeInfo t1770_TI;
extern TypeInfo t1762_TI;
extern TypeInfo t1764_TI;
extern TypeInfo t1769_TI;
extern TypeInfo t1766_TI;
extern TypeInfo t1765_TI;
extern TypeInfo t1780_TI;
#include "t1768MD.h"
#include "t1767MD.h"
#include "t1769MD.h"
#include "t1780MD.h"
#include "t821MD.h"
extern Il2CppType t1763_0_0_0;
extern Il2CppType t1762_0_0_0;
extern Il2CppType t1764_0_0_0;
extern Il2CppType t1765_0_0_0;
extern MethodInfo m5874_MI;
extern MethodInfo m9320_MI;
extern MethodInfo m9323_MI;
extern MethodInfo m9322_MI;
extern MethodInfo m9321_MI;
extern MethodInfo m9229_MI;
extern MethodInfo m7782_MI;
extern MethodInfo m9249_MI;
extern MethodInfo m9246_MI;
extern MethodInfo m9224_MI;
extern MethodInfo m9226_MI;
extern MethodInfo m11983_MI;
extern MethodInfo m4428_MI;
extern MethodInfo m11956_MI;
extern MethodInfo m9223_MI;
extern MethodInfo m9225_MI;
extern MethodInfo m9515_MI;
extern MethodInfo m9227_MI;
extern MethodInfo m9325_MI;
extern MethodInfo m9525_MI;
extern MethodInfo m11984_MI;
extern MethodInfo m9324_MI;
extern MethodInfo m9516_MI;
extern MethodInfo m11985_MI;
extern MethodInfo m9239_MI;
extern MethodInfo m9238_MI;


extern TypeInfo* t723_TI_var;
extern TypeInfo* t1763_TI_var;
extern "C" void m9221 (t1744 * __this, t1559 * p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	static bool m9221_init;
	if (!m9221_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		t1763_TI_var = il2cpp_codegen_class_from_type(&t1763_0_0_0);
		m9221_init = true;
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
		__this->f1 = ((t723*)SZArrayNew(t723_TI_var, L_1));
		__this->f7 = ((t1763*)SZArrayNew(t1763_TI_var, 8));
		t1559 * L_2 = p0;
		__this->f12 = L_2;
		t9 * L_3 = p1;
		__this->f13 = L_3;
		return;
	}
}
extern MethodInfo m9222_MI;
extern "C" void m9222 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_0 = m329(NULL, LoadTypeToken(&t122_0_0_0), &m329_MI);
		((t1744_SFs*)InitializedTypeInfo(&t1744_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern TypeInfo* t1763_TI_var;
extern "C" void m9223 (t1744 * __this, t553 * p0, MethodInfo* method)
{
	static bool m9223_init;
	if (!m9223_init)
	{
		t1763_TI_var = il2cpp_codegen_class_from_type(&t1763_0_0_0);
		m9223_init = true;
	}
	t1763* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f6);
		t1763* L_1 = (__this->f7);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = (__this->f6);
		V_0 = ((t1763*)SZArrayNew(t1763_TI_var, ((int32_t)((int32_t)L_2*(int32_t)2))));
		t1763* L_3 = (__this->f7);
		t1763* L_4 = V_0;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5874_MI, L_3, (t121 *)(t121 *)L_4, 0);
		t1763* L_5 = V_0;
		__this->f7 = L_5;
	}

IL_0032:
	{
		t1763* L_6 = (__this->f7);
		int32_t L_7 = (__this->f6);
		t553 * L_8 = p0;
		((t1759 *)(t1759 *)SZArrayLdElema(L_6, L_7))->f0 = L_8;
		t1763* L_9 = (__this->f7);
		int32_t L_10 = (__this->f6);
		int32_t L_11 = L_10;
		V_1 = L_11;
		__this->f6 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_1;
		int32_t L_13 = (__this->f2);
		((t1759 *)(t1759 *)SZArrayLdElema(L_9, L_12))->f1 = L_13;
		return;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" void m9224 (t1744 * __this, int32_t p0, MethodInfo* method)
{
	static bool m9224_init;
	if (!m9224_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m9224_init = true;
	}
	t723* V_0 = {0};
	{
		int32_t L_0 = (__this->f2);
		int32_t L_1 = p0;
		t723* L_2 = (__this->f1);
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
		V_0 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)L_4))*(int32_t)2))+(int32_t)((int32_t)128)))));
		t723* L_5 = (__this->f1);
		t723* L_6 = V_0;
		t723* L_7 = (__this->f1);
		m7682(NULL, (t121 *)(t121 *)L_5, 0, (t121 *)(t121 *)L_6, 0, (((int32_t)(((t121 *)L_7)->max_length))), &m7682_MI);
		t723* L_8 = V_0;
		__this->f1 = L_8;
		return;
	}
}
extern "C" void m9225 (t1744 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t723* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->f2 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_0;
		int32_t L_4 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_3)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)255)))));
		t723* L_5 = (__this->f1);
		int32_t L_6 = (__this->f2);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		int32_t L_9 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_8)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9>>(int32_t)8))&(int32_t)((int32_t)255)))));
		t723* L_10 = (__this->f1);
		int32_t L_11 = (__this->f2);
		int32_t L_12 = L_11;
		V_0 = L_12;
		__this->f2 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_0;
		int32_t L_14 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_13)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_14>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)255)))));
		t723* L_15 = (__this->f1);
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
extern "C" void m9226 (t1744 * __this, t1768  p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	{
		int32_t L_0 = m9320((&p0), &m9320_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0029;
		}
	}
	{
		t723* L_1 = (__this->f1);
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
		t723* L_6 = (__this->f1);
		int32_t L_7 = (__this->f2);
		int32_t L_8 = L_7;
		V_0 = L_8;
		__this->f2 = ((int32_t)((int32_t)L_8+(int32_t)1));
		int32_t L_9 = V_0;
		uint8_t L_10 = ((&p0)->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_9)) = (uint8_t)L_10;
		int32_t L_11 = m9323((&p0), &m9323_MI);
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
		int32_t L_18 = m9322((&p0), &m9322_MI);
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
extern "C" int32_t m9227 (t9 * __this , t1768  p0, MethodInfo* method)
{
	{
		int32_t L_0 = m9321((&p0), &m9321_MI);
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
extern MethodInfo m9228_MI;
extern "C" t1767 * m9228 (t1744 * __this, t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t1767 * L_1 = (t1767 *)VirtFuncInvoker2< t1767 *, t126 *, bool >::Invoke(&m9229_MI, __this, L_0, 0);
		return L_1;
	}
}
extern TypeInfo* t1762_TI_var;
extern "C" t1767 * m9229 (t1744 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	static bool m9229_init;
	if (!m9229_init)
	{
		t1762_TI_var = il2cpp_codegen_class_from_type(&t1762_0_0_0);
		m9229_init = true;
	}
	t1767 * V_0 = {0};
	t1762* V_1 = {0};
	{
		t126 * L_0 = p0;
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
		t126 * L_2 = p0;
		bool L_3 = m7782(L_2, &m7782_MI);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		t169 * L_4 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_4, (t2*) &_stringLiteral1743, &m5706_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t126 * L_5 = p0;
		t1767 * L_6 = (t1767 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1767_TI));
		m9249(L_6, L_5, __this, &m9249_MI);
		V_0 = L_6;
		t1767 * L_7 = V_0;
		bool L_8 = p1;
		L_7->f1 = L_8;
		t1762* L_9 = (__this->f5);
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		t1762* L_10 = (__this->f5);
		V_1 = ((t1762*)SZArrayNew(t1762_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_10)->max_length)))+(int32_t)1))));
		t1762* L_11 = (__this->f5);
		t1762* L_12 = V_1;
		t1762* L_13 = (__this->f5);
		m5912(NULL, (t121 *)(t121 *)L_11, (t121 *)(t121 *)L_12, (((int32_t)(((t121 *)L_13)->max_length))), &m5912_MI);
		t1762* L_14 = V_1;
		t1762* L_15 = (__this->f5);
		t1767 * L_16 = V_0;
		ArrayElementTypeCheck (L_14, L_16);
		*((t1767 **)(t1767 **)SZArrayLdElema(L_14, (((int32_t)(((t121 *)L_15)->max_length))))) = (t1767 *)L_16;
		t1762* L_17 = V_1;
		__this->f5 = L_17;
		goto IL_0085;
	}

IL_0070:
	{
		__this->f5 = ((t1762*)SZArrayNew(t1762_TI_var, 1));
		t1762* L_18 = (__this->f5);
		t1767 * L_19 = V_0;
		ArrayElementTypeCheck (L_18, L_19);
		*((t1767 **)(t1767 **)SZArrayLdElema(L_18, 0)) = (t1767 *)L_19;
	}

IL_0085:
	{
		t1767 * L_20 = V_0;
		t1762* L_21 = (__this->f5);
		L_20->f2 = (((uint16_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_21)->max_length)))-(int32_t)1))));
		t1767 * L_22 = V_0;
		return L_22;
	}
}
extern MethodInfo m9230_MI;
extern TypeInfo* t1764_TI_var;
extern "C" t1769  m9230 (t1744 * __this, MethodInfo* method)
{
	static bool m9230_init;
	if (!m9230_init)
	{
		t1764_TI_var = il2cpp_codegen_class_from_type(&t1764_0_0_0);
		m9230_init = true;
	}
	t1764* V_0 = {0};
	int32_t V_1 = 0;
	{
		t1764* L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		__this->f8 = ((t1764*)SZArrayNew(t1764_TI_var, 4));
		goto IL_0051;
	}

IL_0016:
	{
		int32_t L_1 = (__this->f9);
		t1764* L_2 = (__this->f8);
		if ((((int32_t)L_1) < ((int32_t)(((int32_t)(((t121 *)L_2)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		t1764* L_3 = (__this->f8);
		V_0 = ((t1764*)SZArrayNew(t1764_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_3)->max_length)))*(int32_t)2))));
		t1764* L_4 = (__this->f8);
		t1764* L_5 = V_0;
		t1764* L_6 = (__this->f8);
		m5912(NULL, (t121 *)(t121 *)L_4, (t121 *)(t121 *)L_5, (((int32_t)(((t121 *)L_6)->max_length))), &m5912_MI);
		t1764* L_7 = V_0;
		__this->f8 = L_7;
	}

IL_0051:
	{
		t1764* L_8 = (__this->f8);
		int32_t L_9 = (__this->f9);
		t1761  L_10 = {0};
		m9220(&L_10, (-1), 0, &m9220_MI);
		*((t1761 *)(t1761 *)SZArrayLdElema(L_8, L_9)) = L_10;
		int32_t L_11 = (__this->f9);
		int32_t L_12 = L_11;
		V_1 = L_12;
		__this->f9 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_1;
		t1769  L_14 = {0};
		m9246(&L_14, L_13, &m9246_MI);
		return L_14;
	}
}
extern MethodInfo m9231_MI;
extern "C" void m9231 (t1744 * __this, t1768  p0, MethodInfo* method)
{
	{
		m9224(__this, 2, &m9224_MI);
		t1768  L_0 = p0;
		m9226(__this, L_0, &m9226_MI);
		return;
	}
}
extern MethodInfo m9232_MI;
extern "C" void m9232 (t1744 * __this, t1768  p0, uint8_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m9224(__this, 3, &m9224_MI);
		t1768  L_0 = p0;
		m9226(__this, L_0, &m9226_MI);
		t723* L_1 = (__this->f1);
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
extern MethodInfo m9233_MI;
extern "C" void m9233 (t1744 * __this, t1768  p0, t819 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = (__this->f13);
		t819 * L_1 = p1;
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t553 * >::Invoke(&m11983_MI, L_0, L_1);
		V_0 = L_2;
		m9224(__this, 6, &m9224_MI);
		t1768  L_3 = p0;
		m9226(__this, L_3, &m9226_MI);
		t819 * L_4 = p1;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_4);
		t1559 * L_6 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m11956_MI, L_5);
		t1559 * L_7 = (__this->f12);
		if ((!(((t9*)(t1559 *)L_6) == ((t9*)(t1559 *)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		t819 * L_8 = p1;
		m9223(__this, L_8, &m9223_MI);
	}

IL_0035:
	{
		int32_t L_9 = V_0;
		m9225(__this, L_9, &m9225_MI);
		int32_t L_10 = m9322((&p0), &m9322_MI);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_11 = (__this->f4);
		t819 * L_12 = p1;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9515_MI, L_12);
		__this->f4 = ((int32_t)((int32_t)L_11-(int32_t)L_13));
	}

IL_005a:
	{
		return;
	}
}
extern MethodInfo m9234_MI;
extern "C" void m9234 (t1744 * __this, t1768  p0, t823 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = (__this->f13);
		t823 * L_1 = p1;
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t553 * >::Invoke(&m11983_MI, L_0, L_1);
		V_0 = L_2;
		m9224(__this, 6, &m9224_MI);
		t1768  L_3 = p0;
		m9226(__this, L_3, &m9226_MI);
		t823 * L_4 = p1;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_4);
		t1559 * L_6 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m11956_MI, L_5);
		t1559 * L_7 = (__this->f12);
		if ((!(((t9*)(t1559 *)L_6) == ((t9*)(t1559 *)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		t823 * L_8 = p1;
		m9223(__this, L_8, &m9223_MI);
	}

IL_0035:
	{
		int32_t L_9 = V_0;
		m9225(__this, L_9, &m9225_MI);
		return;
	}
}
extern MethodInfo m9235_MI;
extern "C" void m9235 (t1744 * __this, t1768  p0, int32_t p1, MethodInfo* method)
{
	{
		m9224(__this, 6, &m9224_MI);
		t1768  L_0 = p0;
		m9226(__this, L_0, &m9226_MI);
		int32_t L_1 = p1;
		m9225(__this, L_1, &m9225_MI);
		return;
	}
}
extern MethodInfo m9236_MI;
extern TypeInfo* t1765_TI_var;
extern "C" void m9236 (t1744 * __this, t1768  p0, t1769  p1, MethodInfo* method)
{
	static bool m9236_init;
	if (!m9236_init)
	{
		t1765_TI_var = il2cpp_codegen_class_from_type(&t1765_0_0_0);
		m9236_init = true;
	}
	int32_t V_0 = 0;
	t1765* V_1 = {0};
	{
		t1768  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1744_TI));
		int32_t L_1 = m9227(NULL, L_0, &m9227_MI);
		V_0 = L_1;
		m9224(__this, 6, &m9224_MI);
		t1768  L_2 = p0;
		m9226(__this, L_2, &m9226_MI);
		int32_t L_3 = (__this->f4);
		t1764* L_4 = (__this->f8);
		int32_t L_5 = ((&p1)->f0);
		int32_t L_6 = (((t1761 *)(t1761 *)SZArrayLdElema(L_4, L_5))->f1);
		if ((((int32_t)L_3) <= ((int32_t)L_6)))
		{
			goto IL_0051;
		}
	}
	{
		t1764* L_7 = (__this->f8);
		int32_t L_8 = ((&p1)->f0);
		int32_t L_9 = (__this->f4);
		((t1761 *)(t1761 *)SZArrayLdElema(L_7, L_8))->f1 = L_9;
	}

IL_0051:
	{
		t1765* L_10 = (__this->f10);
		if (L_10)
		{
			goto IL_0067;
		}
	}
	{
		__this->f10 = ((t1765*)SZArrayNew(t1765_TI_var, 4));
		goto IL_00a2;
	}

IL_0067:
	{
		int32_t L_11 = (__this->f11);
		t1765* L_12 = (__this->f10);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((t121 *)L_12)->max_length))))))
		{
			goto IL_00a2;
		}
	}
	{
		t1765* L_13 = (__this->f10);
		V_1 = ((t1765*)SZArrayNew(t1765_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_13)->max_length)))*(int32_t)2))));
		t1765* L_14 = (__this->f10);
		t1765* L_15 = V_1;
		t1765* L_16 = (__this->f10);
		m5912(NULL, (t121 *)(t121 *)L_14, (t121 *)(t121 *)L_15, (((int32_t)(((t121 *)L_16)->max_length))), &m5912_MI);
		t1765* L_17 = V_1;
		__this->f10 = L_17;
	}

IL_00a2:
	{
		t1765* L_18 = (__this->f10);
		int32_t L_19 = (__this->f11);
		int32_t L_20 = V_0;
		((t1760 *)(t1760 *)SZArrayLdElema(L_18, L_19))->f0 = L_20;
		t1765* L_21 = (__this->f10);
		int32_t L_22 = (__this->f11);
		int32_t L_23 = (__this->f2);
		((t1760 *)(t1760 *)SZArrayLdElema(L_21, L_22))->f1 = L_23;
		t1765* L_24 = (__this->f10);
		int32_t L_25 = (__this->f11);
		int32_t L_26 = ((&p1)->f0);
		((t1760 *)(t1760 *)SZArrayLdElema(L_24, L_25))->f2 = L_26;
		int32_t L_27 = (__this->f11);
		__this->f11 = ((int32_t)((int32_t)L_27+(int32_t)1));
		int32_t L_28 = (__this->f2);
		int32_t L_29 = V_0;
		__this->f2 = ((int32_t)((int32_t)L_28+(int32_t)L_29));
		return;
	}
}
extern MethodInfo m9237_MI;
extern "C" void m9237 (t1744 * __this, t1768  p0, t1767 * p1, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		t1767 * L_0 = p1;
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
		t1767 * L_2 = p1;
		uint16_t L_3 = (L_2->f2);
		V_0 = L_3;
		V_1 = 0;
		V_2 = 0;
		m9224(__this, 6, &m9224_MI);
		t1767 * L_4 = p1;
		t1744 * L_5 = (L_4->f3);
		if ((((t9*)(t1744 *)L_5) == ((t9*)(t1744 *)__this)))
		{
			goto IL_0034;
		}
	}
	{
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_6, (t2*) &_stringLiteral1745, &m2885_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0034:
	{
		int32_t L_7 = m9322((&p0), &m9322_MI);
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
		int32_t L_13 = m9323((&p0), &m9323_MI);
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
		t723* L_16 = (__this->f1);
		int32_t L_17 = (__this->f2);
		int32_t L_18 = L_17;
		V_3 = L_18;
		__this->f2 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_19)) = (uint8_t)((int32_t)18);
		t723* L_20 = (__this->f1);
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
		t723* L_25 = (__this->f1);
		int32_t L_26 = (__this->f2);
		int32_t L_27 = L_26;
		V_3 = L_27;
		__this->f2 = ((int32_t)((int32_t)L_27+(int32_t)1));
		int32_t L_28 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_25, L_28)) = (uint8_t)((int32_t)254);
		t723* L_29 = (__this->f1);
		int32_t L_30 = (__this->f2);
		int32_t L_31 = L_30;
		V_3 = L_31;
		__this->f2 = ((int32_t)((int32_t)L_31+(int32_t)1));
		int32_t L_32 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_29, L_32)) = (uint8_t)((int32_t)13);
		t723* L_33 = (__this->f1);
		int32_t L_34 = (__this->f2);
		int32_t L_35 = L_34;
		V_3 = L_35;
		__this->f2 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		uint32_t L_37 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_33, L_36)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_37&(int32_t)((int32_t)255)))));
		t723* L_38 = (__this->f1);
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
		t723* L_45 = (__this->f1);
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
		t723* L_51 = (__this->f1);
		int32_t L_52 = (__this->f2);
		int32_t L_53 = L_52;
		V_3 = L_53;
		__this->f2 = ((int32_t)((int32_t)L_53+(int32_t)1));
		int32_t L_54 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_51, L_54)) = (uint8_t)((int32_t)19);
		t723* L_55 = (__this->f1);
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
		t723* L_60 = (__this->f1);
		int32_t L_61 = (__this->f2);
		int32_t L_62 = L_61;
		V_3 = L_62;
		__this->f2 = ((int32_t)((int32_t)L_62+(int32_t)1));
		int32_t L_63 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_60, L_63)) = (uint8_t)((int32_t)254);
		t723* L_64 = (__this->f1);
		int32_t L_65 = (__this->f2);
		int32_t L_66 = L_65;
		V_3 = L_66;
		__this->f2 = ((int32_t)((int32_t)L_66+(int32_t)1));
		int32_t L_67 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_64, L_67)) = (uint8_t)((int32_t)14);
		t723* L_68 = (__this->f1);
		int32_t L_69 = (__this->f2);
		int32_t L_70 = L_69;
		V_3 = L_70;
		__this->f2 = ((int32_t)((int32_t)L_70+(int32_t)1));
		int32_t L_71 = V_3;
		uint32_t L_72 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_68, L_71)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_72&(int32_t)((int32_t)255)))));
		t723* L_73 = (__this->f1);
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
		t723* L_79 = (__this->f1);
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
		t723* L_85 = (__this->f1);
		int32_t L_86 = (__this->f2);
		int32_t L_87 = L_86;
		V_3 = L_87;
		__this->f2 = ((int32_t)((int32_t)L_87+(int32_t)1));
		int32_t L_88 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_85, L_88)) = (uint8_t)((int32_t)17);
		t723* L_89 = (__this->f1);
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
		t723* L_94 = (__this->f1);
		int32_t L_95 = (__this->f2);
		int32_t L_96 = L_95;
		V_3 = L_96;
		__this->f2 = ((int32_t)((int32_t)L_96+(int32_t)1));
		int32_t L_97 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_94, L_97)) = (uint8_t)((int32_t)254);
		t723* L_98 = (__this->f1);
		int32_t L_99 = (__this->f2);
		int32_t L_100 = L_99;
		V_3 = L_100;
		__this->f2 = ((int32_t)((int32_t)L_100+(int32_t)1));
		int32_t L_101 = V_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_98, L_101)) = (uint8_t)((int32_t)12);
		t723* L_102 = (__this->f1);
		int32_t L_103 = (__this->f2);
		int32_t L_104 = L_103;
		V_3 = L_104;
		__this->f2 = ((int32_t)((int32_t)L_104+(int32_t)1));
		int32_t L_105 = V_3;
		uint32_t L_106 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_102, L_105)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_106&(int32_t)((int32_t)255)))));
		t723* L_107 = (__this->f1);
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
extern "C" void m9238 (t1744 * __this, t1768  p0, t821 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	t126 * V_1 = {0};
	{
		t821 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1746, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t821 * L_2 = p1;
		if (!((t1751 *)IsInst(L_2, InitializedTypeInfo(&t1751_TI))))
		{
			goto IL_0048;
		}
	}
	{
		t1768  L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1780_TI));
		t1768  L_4 = ((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f205;
		bool L_5 = m9325(NULL, L_3, L_4, &m9325_MI);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		t1768  L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1780_TI));
		t1768  L_7 = ((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f206;
		bool L_8 = m9325(NULL, L_6, L_7, &m9325_MI);
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		t1768  L_9 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1780_TI));
		t1768  L_10 = ((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f174;
		bool L_11 = m9325(NULL, L_9, L_10, &m9325_MI);
		if (!L_11)
		{
			goto IL_0048;
		}
	}

IL_003d:
	{
		t556 * L_12 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_12, (t2*) &_stringLiteral1747, &m2885_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0048:
	{
		t9 * L_13 = (__this->f13);
		t821 * L_14 = p1;
		int32_t L_15 = (int32_t)InterfaceFuncInvoker1< int32_t, t553 * >::Invoke(&m11983_MI, L_13, L_14);
		V_0 = L_15;
		m9224(__this, 6, &m9224_MI);
		t1768  L_16 = p0;
		m9226(__this, L_16, &m9226_MI);
		t821 * L_17 = p1;
		t126 * L_18 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_17);
		V_1 = L_18;
		t126 * L_19 = V_1;
		if (!L_19)
		{
			goto IL_0082;
		}
	}
	{
		t126 * L_20 = V_1;
		t1559 * L_21 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m11956_MI, L_20);
		t1559 * L_22 = (__this->f12);
		if ((!(((t9*)(t1559 *)L_21) == ((t9*)(t1559 *)L_22))))
		{
			goto IL_0082;
		}
	}
	{
		t821 * L_23 = p1;
		m9223(__this, L_23, &m9223_MI);
	}

IL_0082:
	{
		int32_t L_24 = V_0;
		m9225(__this, L_24, &m9225_MI);
		t821 * L_25 = p1;
		t126 * L_26 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9525_MI, L_25);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1744_TI));
		t126 * L_27 = ((t1744_SFs*)InitializedTypeInfo(&t1744_TI)->static_fields)->f0;
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
		int32_t L_29 = m9322((&p0), &m9322_MI);
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_30 = (__this->f4);
		t821 * L_31 = p1;
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9515_MI, L_31);
		__this->f4 = ((int32_t)((int32_t)L_30-(int32_t)L_32));
	}

IL_00c2:
	{
		return;
	}
}
extern "C" void m9239 (t1744 * __this, t1768  p0, t821 * p1, int32_t p2, MethodInfo* method)
{
	t126 * V_0 = {0};
	{
		m9224(__this, 6, &m9224_MI);
		t1768  L_0 = p0;
		m9226(__this, L_0, &m9226_MI);
		t821 * L_1 = p1;
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_1);
		V_0 = L_2;
		t126 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		t126 * L_4 = V_0;
		t1559 * L_5 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m11956_MI, L_4);
		t1559 * L_6 = (__this->f12);
		if ((!(((t9*)(t1559 *)L_5) == ((t9*)(t1559 *)L_6))))
		{
			goto IL_002d;
		}
	}
	{
		t821 * L_7 = p1;
		m9223(__this, L_7, &m9223_MI);
	}

IL_002d:
	{
		int32_t L_8 = p2;
		m9225(__this, L_8, &m9225_MI);
		t821 * L_9 = p1;
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9525_MI, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1744_TI));
		t126 * L_11 = ((t1744_SFs*)InitializedTypeInfo(&t1744_TI)->static_fields)->f0;
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
		int32_t L_13 = m9322((&p0), &m9322_MI);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_14 = (__this->f4);
		t821 * L_15 = p1;
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9515_MI, L_15);
		__this->f4 = ((int32_t)((int32_t)L_14-(int32_t)L_16));
	}

IL_006d:
	{
		return;
	}
}
extern MethodInfo m9240_MI;
extern "C" void m9240 (t1744 * __this, t1768  p0, t2* p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = (__this->f13);
		t2* L_1 = p1;
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t2* >::Invoke(&m11984_MI, L_0, L_1);
		V_0 = L_2;
		m9224(__this, 6, &m9224_MI);
		t1768  L_3 = p0;
		m9226(__this, L_3, &m9226_MI);
		int32_t L_4 = V_0;
		m9225(__this, L_4, &m9225_MI);
		return;
	}
}
extern MethodInfo m9241_MI;
extern "C" void m9241 (t1744 * __this, t1768  p0, t126 * p1, MethodInfo* method)
{
	{
		m9224(__this, 6, &m9224_MI);
		t1768  L_0 = p0;
		m9226(__this, L_0, &m9226_MI);
		t9 * L_1 = (__this->f13);
		t126 * L_2 = p1;
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t553 * >::Invoke(&m11983_MI, L_1, L_2);
		m9225(__this, L_3, &m9225_MI);
		return;
	}
}
extern MethodInfo m9242_MI;
extern "C" void m9242 (t1744 * __this, t1768  p0, t821 * p1, t152* p2, MethodInfo* method)
{
	int16_t V_0 = 0;
	int32_t V_1 = 0;
	t1768  V_2 = {0};
	t1768  V_3 = {0};
	{
		t821 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1748, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int16_t L_2 = m9324((&p0), &m9324_MI);
		V_0 = L_2;
		int16_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1780_TI));
		t1768  L_4 = ((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f39;
		V_2 = L_4;
		int16_t L_5 = m9324((&V_2), &m9324_MI);
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0041;
		}
	}
	{
		int16_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1780_TI));
		t1768  L_7 = ((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f110;
		V_3 = L_7;
		int16_t L_8 = m9324((&V_3), &m9324_MI);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		t169 * L_9 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_9, (t2*) &_stringLiteral1749, &m5706_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		t821 * L_10 = p1;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9516_MI, L_10);
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
		t821 * L_13 = p1;
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9516_MI, L_13);
		if (((int32_t)((int32_t)L_14&(int32_t)2)))
		{
			goto IL_0068;
		}
	}
	{
		t1332 * L_15 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_15, (t2*) &_stringLiteral1750, &m5685_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0068:
	{
		t9 * L_16 = (__this->f13);
		t821 * L_17 = p1;
		t152* L_18 = p2;
		int32_t L_19 = (int32_t)InterfaceFuncInvoker2< int32_t, t821 *, t152* >::Invoke(&m11985_MI, L_16, L_17, L_18);
		V_1 = L_19;
		t1768  L_20 = p0;
		t821 * L_21 = p1;
		int32_t L_22 = V_1;
		m9239(__this, L_20, L_21, L_22, &m9239_MI);
		return;
	}

IL_0080:
	{
		t1768  L_23 = p0;
		t821 * L_24 = p1;
		VirtActionInvoker2< t1768 , t821 * >::Invoke(&m9238_MI, __this, L_23, L_24);
		return;
	}
}
extern MethodInfo m9243_MI;
extern "C" void m9243 (t1744 * __this, t1769  p0, MethodInfo* method)
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
		t556 * L_3 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_3, (t2*) &_stringLiteral1751, &m2885_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0024:
	{
		t1764* L_4 = (__this->f8);
		int32_t L_5 = ((&p0)->f0);
		int32_t L_6 = (((t1761 *)(t1761 *)SZArrayLdElema(L_4, L_5))->f0);
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		t556 * L_7 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_7, (t2*) &_stringLiteral1752, &m2885_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0049:
	{
		t1764* L_8 = (__this->f8);
		int32_t L_9 = ((&p0)->f0);
		int32_t L_10 = (__this->f2);
		((t1761 *)(t1761 *)SZArrayLdElema(L_8, L_9))->f0 = L_10;
		t1764* L_11 = (__this->f8);
		int32_t L_12 = ((&p0)->f0);
		int32_t L_13 = (((t1761 *)(t1761 *)SZArrayLdElema(L_11, L_12))->f1);
		int32_t L_14 = (__this->f4);
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_00a2;
		}
	}
	{
		t1764* L_15 = (__this->f8);
		int32_t L_16 = ((&p0)->f0);
		int32_t L_17 = (((t1761 *)(t1761 *)SZArrayLdElema(L_15, L_16))->f1);
		__this->f4 = L_17;
	}

IL_00a2:
	{
		return;
	}
}
extern "C" void m9244 (t1744 * __this, MethodInfo* method)
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
		t1764* L_0 = (__this->f8);
		t1765* L_1 = (__this->f10);
		int32_t L_2 = V_0;
		int32_t L_3 = (((t1760 *)(t1760 *)SZArrayLdElema(L_1, L_2))->f2);
		int32_t L_4 = (((t1761 *)(t1761 *)SZArrayLdElema(L_0, L_3))->f0);
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		t556 * L_5 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_5, (t2*) &_stringLiteral1753, &m2885_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0036:
	{
		t1764* L_6 = (__this->f8);
		t1765* L_7 = (__this->f10);
		int32_t L_8 = V_0;
		int32_t L_9 = (((t1760 *)(t1760 *)SZArrayLdElema(L_7, L_8))->f2);
		int32_t L_10 = (((t1761 *)(t1761 *)SZArrayLdElema(L_6, L_9))->f0);
		t1765* L_11 = (__this->f10);
		int32_t L_12 = V_0;
		int32_t L_13 = (((t1760 *)(t1760 *)SZArrayLdElema(L_11, L_12))->f1);
		t1765* L_14 = (__this->f10);
		int32_t L_15 = V_0;
		int32_t L_16 = (((t1760 *)(t1760 *)SZArrayLdElema(L_14, L_15))->f0);
		V_1 = ((int32_t)((int32_t)L_10-(int32_t)((int32_t)((int32_t)L_13+(int32_t)L_16))));
		t1765* L_17 = (__this->f10);
		int32_t L_18 = V_0;
		int32_t L_19 = (((t1760 *)(t1760 *)SZArrayLdElema(L_17, L_18))->f0);
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00ad;
		}
	}
	{
		t723* L_20 = (__this->f1);
		t1765* L_21 = (__this->f10);
		int32_t L_22 = V_0;
		int32_t L_23 = (((t1760 *)(t1760 *)SZArrayLdElema(L_21, L_22))->f1);
		int32_t L_24 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_23)) = (uint8_t)(((uint8_t)(((int8_t)L_24))));
		goto IL_00d9;
	}

IL_00ad:
	{
		int32_t L_25 = (__this->f2);
		V_2 = L_25;
		t1765* L_26 = (__this->f10);
		int32_t L_27 = V_0;
		int32_t L_28 = (((t1760 *)(t1760 *)SZArrayLdElema(L_26, L_27))->f1);
		__this->f2 = L_28;
		int32_t L_29 = V_1;
		m9225(__this, L_29, &m9225_MI);
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
extern "C" int32_t m9245 (t9 * __this , t1744 * p0, MethodInfo* method)
{
	{
		t1744 * L_0 = p0;
		int32_t L_1 = (L_0->f2);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t125MD.h"
extern MethodInfo m4204_MI;


extern "C" void m9246 (t1769 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9247_MI;
extern "C" bool m9247 (t1769 * __this, t9 * p0, MethodInfo* method)
{
	bool V_0 = false;
	t1769  V_1 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((!(((t9*)(t9 *)((t9 *)IsInst(L_0, InitializedTypeInfo(&t1769_TI)))) <= ((t9*)(t9 *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		t9 * L_2 = p0;
		V_1 = ((*(t1769 *)((t1769 *)UnBox (L_2, InitializedTypeInfo(&t1769_TI)))));
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
extern MethodInfo m9248_MI;
extern "C" int32_t m9248 (t1769 * __this, MethodInfo* method)
{
	{
		int32_t* L_0 = &(__this->f0);
		int32_t L_1 = m4204(L_0, &m4204_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1770MD.h"
extern MethodInfo m9503_MI;


extern "C" void m9249 (t1767 * __this, t126 * p0, t1744 * p1, MethodInfo* method)
{
	{
		m9503(__this, &m9503_MI);
		t126 * L_0 = p0;
		__this->f0 = L_0;
		t1744 * L_1 = p1;
		__this->f3 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1772.h"
extern MethodInfo m9274_MI;
extern MethodInfo m9523_MI;
extern MethodInfo m9272_MI;
extern MethodInfo m9259_MI;
extern MethodInfo m9268_MI;
extern MethodInfo m671_MI;
extern MethodInfo m4207_MI;


extern MethodInfo m9250_MI;
extern TypeInfo* t152_TI_var;
extern "C" void m9250 (t1758 * __this, t1745 * p0, t2* p1, int32_t p2, int32_t p3, t126 * p4, t152* p5, t152* p6, t152* p7, t1747* p8, t1747* p9, MethodInfo* method)
{
	static bool m9250_init;
	if (!m9250_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9250_init = true;
	}
	int32_t V_0 = 0;
	t1750  V_1 = {0};
	{
		__this->f11 = 1;
		m9523(__this, &m9523_MI);
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
		t1747* L_6 = p8;
		__this->f15 = L_6;
		t1747* L_7 = p9;
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
		t556 * L_14 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_14, (t2*) &_stringLiteral1734, (t2*) &_stringLiteral1735, &m5691_MI);
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
		m5912(NULL, (t121 *)(t121 *)L_19, (t121 *)(t121 *)L_20, (((int32_t)(((t121 *)L_21)->max_length))), &m5912_MI);
	}

IL_00a9:
	{
		t1745 * L_22 = p0;
		__this->f7 = L_22;
		int32_t L_23 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, bool >::Invoke(&m9272_MI, __this, __this, 6, 1);
		__this->f5 = L_23;
		t1745 * L_24 = p0;
		t1559 * L_25 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m9362_MI, L_24);
		t1750  L_26 = m9259(__this, &m9259_MI);
		V_1 = L_26;
		int32_t L_27 = m9284((&V_1), &m9284_MI);
		m9307(((t1740 *)Castclass(L_25, InitializedTypeInfo(&t1740_TI))), __this, L_27, &m9307_MI);
		return;
	}
}
extern MethodInfo m9251_MI;
extern "C" bool m9251 (t1758 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9252_MI;
extern "C" t1749  m9252 (t1758 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9274(__this, &m9274_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9253_MI;
extern "C" t126 * m9253 (t1758 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9254_MI;
extern "C" t126 * m9254 (t1758 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" t126 * m9255 (t1758 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9256_MI;
extern "C" t2* m9256 (t1758 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9257_MI;
extern "C" int32_t m9257 (t1758 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9258_MI;
extern "C" int32_t m9258 (t1758 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern "C" t1750  m9259 (t1758 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		t1750  L_1 = {0};
		m9280(&L_1, ((int32_t)((int32_t)((int32_t)100663296)|(int32_t)L_0)), &m9280_MI);
		return L_1;
	}
}
extern MethodInfo m9260_MI;
extern "C" t821 * m9260 (t1758 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m9261_MI;
extern TypeInfo* t921_TI_var;
extern "C" t921* m9261 (t1758 * __this, MethodInfo* method)
{
	static bool m9261_init;
	if (!m9261_init)
	{
		t921_TI_var = il2cpp_codegen_class_from_type(&t921_0_0_0);
		m9261_init = true;
	}
	t921* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B7_0 = 0;
	t921* G_B7_1 = {0};
	int32_t G_B6_0 = 0;
	t921* G_B6_1 = {0};
	t1781 * G_B8_0 = {0};
	int32_t G_B8_1 = 0;
	t921* G_B8_2 = {0};
	{
		t1745 * L_0 = (__this->f7);
		bool L_1 = m9400(L_0, &m9400_MI);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		t138 * L_2 = m9274(__this, &m9274_MI);
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
		return (t921*)NULL;
	}

IL_001e:
	{
		t152* L_4 = (__this->f1);
		V_0 = ((t921*)SZArrayNew(t921_TI_var, (((int32_t)(((t121 *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_005d;
	}

IL_0030:
	{
		t921* L_5 = V_0;
		int32_t L_6 = V_1;
		t1746* L_7 = (__this->f8);
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
		G_B8_0 = ((t1781 *)(NULL));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0047;
	}

IL_003d:
	{
		t1746* L_8 = (__this->f8);
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)((int32_t)L_9+(int32_t)1));
		G_B8_0 = (*(t1781 **)(t1781 **)SZArrayLdElema(L_8, L_10));
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0047:
	{
		t152* L_11 = (__this->f1);
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		int32_t L_14 = V_1;
		t917 * L_15 = (t917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t917_TI));
		m9669(L_15, G_B8_0, (*(t126 **)(t126 **)SZArrayLdElema(L_11, L_13)), __this, ((int32_t)((int32_t)L_14+(int32_t)1)), &m9669_MI);
		ArrayElementTypeCheck (G_B8_2, L_15);
		*((t917 **)(t917 **)SZArrayLdElema(G_B8_2, G_B8_1)) = (t917 *)L_15;
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
		t921* L_19 = V_0;
		return L_19;
	}
}
extern MethodInfo m9262_MI;
extern "C" int32_t m9262 (t1758 * __this, MethodInfo* method)
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
extern MethodInfo m9263_MI;
extern "C" t9 * m9263 (t1758 * __this, t9 * p0, int32_t p1, t926 * p2, t158* p3, t894 * p4, MethodInfo* method)
{
	{
		t138 * L_0 = m9274(__this, &m9274_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9264_MI;
extern "C" bool m9264 (t1758 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9274(__this, &m9274_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9265_MI;
extern "C" t158* m9265 (t1758 * __this, bool p0, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f7);
		bool L_1 = m9400(L_0, &m9400_MI);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_3 = m11577(NULL, __this, L_2, &m11577_MI);
		return L_3;
	}

IL_0015:
	{
		t138 * L_4 = m9274(__this, &m9274_MI);
		il2cpp_codegen_raise_exception(L_4);
	}
}
extern MethodInfo m9266_MI;
extern "C" t158* m9266 (t1758 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f7);
		bool L_1 = m9400(L_0, &m9400_MI);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t126 * L_2 = p0;
		bool L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_4 = m11576(NULL, __this, L_2, L_3, &m11576_MI);
		return L_4;
	}

IL_0016:
	{
		t138 * L_5 = m9274(__this, &m9274_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m9267_MI;
extern "C" t1744 * m9267 (t1758 * __this, MethodInfo* method)
{
	{
		t1744 * L_0 = m9268(__this, ((int32_t)64), &m9268_MI);
		return L_0;
	}
}
extern "C" t1744 * m9268 (t1758 * __this, int32_t p0, MethodInfo* method)
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
		t1332 * L_2 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_2, (t2*) &_stringLiteral1754, &m5685_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001f:
	{
		t1744 * L_3 = (__this->f6);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		t1744 * L_4 = (__this->f6);
		return L_4;
	}

IL_002e:
	{
		t1745 * L_5 = (__this->f7);
		t1559 * L_6 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m9362_MI, L_5);
		t1745 * L_7 = (__this->f7);
		t1559 * L_8 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m9362_MI, L_7);
		t9 * L_9 = m9308(((t1740 *)Castclass(L_8, InitializedTypeInfo(&t1740_TI))), &m9308_MI);
		int32_t L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1744_TI));
		t1744 * L_11 = (t1744 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1744_TI));
		m9221(L_11, L_6, L_9, L_10, &m9221_MI);
		__this->f6 = L_11;
		t1744 * L_12 = (__this->f6);
		return L_12;
	}
}
extern MethodInfo m9269_MI;
extern TypeInfo* t221_TI_var;
extern "C" t2* m9269 (t1758 * __this, MethodInfo* method)
{
	static bool m9269_init;
	if (!m9269_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9269_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, 5));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral1755);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral1755;
		t221* L_1 = L_0;
		t1745 * L_2 = (__this->f7);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9363_MI, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)L_3;
		t221* L_4 = L_1;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral477);
		*((t2**)(t2**)SZArrayLdElema(L_4, 2)) = (t2*)(t2*) &_stringLiteral477;
		t221* L_5 = L_4;
		t2* L_6 = (__this->f4);
		ArrayElementTypeCheck (L_5, L_6);
		*((t2**)(t2**)SZArrayLdElema(L_5, 3)) = (t2*)L_6;
		t221* L_7 = L_5;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral345);
		*((t2**)(t2**)SZArrayLdElema(L_7, 4)) = (t2*)(t2*) &_stringLiteral345;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = m4269(NULL, L_7, &m4269_MI);
		return L_8;
	}
}
extern MethodInfo m9270_MI;
extern "C" bool m9270 (t1758 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		bool L_1 = m671(__this, L_0, &m671_MI);
		return L_1;
	}
}
extern MethodInfo m9271_MI;
extern "C" int32_t m9271 (t1758 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f4);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4207_MI, L_0);
		return L_1;
	}
}
extern "C" int32_t m9272 (t1758 * __this, t9 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f7);
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = p2;
		int32_t L_4 = m9398(L_0, L_1, L_2, L_3, &m9398_MI);
		return L_4;
	}
}
extern MethodInfo m9273_MI;
extern "C" void m9273 (t1758 * __this, t821 * p0, MethodInfo* method)
{
	{
		t821 * L_0 = p0;
		__this->f9 = L_0;
		return;
	}
}
extern "C" t138 * m9274 (t1758 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1725, &m5706_MI);
		return L_0;
	}
}
extern MethodInfo m9275_MI;
extern "C" t821 * m9275 (t1758 * __this, t152* p0, MethodInfo* method)
{
	typedef t821 * (*m9275_ftn) (t1758 *, t152*);
	static m9275_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9275_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m9276_MI;
extern "C" bool m9276 (t1758 * __this, MethodInfo* method)
{
	{
		t1771* L_0 = (__this->f12);
		return ((((int32_t)((((t9*)(t1771*)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9277_MI;
extern "C" bool m9277 (t1758 * __this, MethodInfo* method)
{
	{
		t1771* L_0 = (__this->f12);
		return ((((int32_t)((((t9*)(t1771*)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9278_MI;
extern TypeInfo* t152_TI_var;
extern "C" t152* m9278 (t1758 * __this, MethodInfo* method)
{
	static bool m9278_init;
	if (!m9278_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9278_init = true;
	}
	t152* V_0 = {0};
	int32_t V_1 = 0;
	{
		t1771* L_0 = (__this->f12);
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
		t1771* L_2 = (__this->f12);
		V_0 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_2)->max_length)))));
		V_1 = 0;
		goto IL_002f;
	}

IL_0020:
	{
		t152* L_3 = V_0;
		int32_t L_4 = V_1;
		t1771* L_5 = (__this->f12);
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		ArrayElementTypeCheck (L_3, (*(t1757 **)(t1757 **)SZArrayLdElema(L_5, L_7)));
		*((t126 **)(t126 **)SZArrayLdElema(L_3, L_4)) = (t126 *)(*(t1757 **)(t1757 **)SZArrayLdElema(L_5, L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_9 = V_1;
		t1771* L_10 = (__this->f12);
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
extern MethodInfo m9279_MI;
extern "C" t1559 * m9279 (t1758 * __this, MethodInfo* method)
{
	{
		t1559 * L_0 = m7784(__this, &m7784_MI);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9280 (t1750 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9281_MI;
extern "C" void m9281 (t9 * __this , MethodInfo* method)
{
	t1750  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&t1750_TI), (&V_0));
		t1750  L_0 = V_0;
		((t1750_SFs*)InitializedTypeInfo(&t1750_TI)->static_fields)->f1 = L_0;
		return;
	}
}
extern MethodInfo m9282_MI;
extern "C" bool m9282 (t1750 * __this, t9 * p0, MethodInfo* method)
{
	bool V_0 = false;
	t1750  V_1 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((!(((t9*)(t9 *)((t9 *)IsInst(L_0, InitializedTypeInfo(&t1750_TI)))) <= ((t9*)(t9 *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		t9 * L_2 = p0;
		V_1 = ((*(t1750 *)((t1750 *)UnBox (L_2, InitializedTypeInfo(&t1750_TI)))));
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
extern MethodInfo m9283_MI;
extern "C" int32_t m9283 (t1750 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" int32_t m9284 (t1750 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1149.h"
#include "t2110.h"
#include "t1776.h"
#include "t2101.h"
#include "t1774.h"
extern TypeInfo t1149_TI;
extern TypeInfo t911_TI;
extern TypeInfo t2110_TI;
extern TypeInfo t1775_TI;
extern TypeInfo t1773_TI;
extern TypeInfo t2101_TI;
extern TypeInfo t1088_TI;
extern TypeInfo t1774_TI;
#include "t1149MD.h"
#include "t911MD.h"
#include "t1392MD.h"
#include "t2110MD.h"
#include "t1338MD.h"
#include "t2101MD.h"
#include "t1774MD.h"
extern Il2CppType t1773_0_0_0;
extern Il2CppType t1088_0_0_0;
extern MethodInfo m5883_MI;
extern MethodInfo m9534_MI;
extern MethodInfo m11527_MI;
extern MethodInfo m9300_MI;
extern MethodInfo m9287_MI;
extern MethodInfo m9310_MI;
extern MethodInfo m9351_MI;
extern MethodInfo m6046_MI;
extern MethodInfo m9288_MI;
extern MethodInfo m9435_MI;
extern MethodInfo m11507_MI;
extern MethodInfo m5744_MI;
extern MethodInfo m11084_MI;
extern MethodInfo m11986_MI;
extern MethodInfo m9293_MI;
extern MethodInfo m5739_MI;
extern MethodInfo m9352_MI;
extern MethodInfo m9291_MI;
extern MethodInfo m5708_MI;
extern MethodInfo m9292_MI;
extern MethodInfo m9299_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m9296_MI;
extern MethodInfo m9298_MI;
extern MethodInfo m11840_MI;
extern MethodInfo m5707_MI;
extern MethodInfo m9295_MI;
extern MethodInfo m9297_MI;
extern MethodInfo m5894_MI;
extern MethodInfo m9301_MI;
extern MethodInfo m5891_MI;
extern MethodInfo m9302_MI;
extern MethodInfo m9303_MI;
extern MethodInfo m9311_MI;


extern TypeInfo* t158_TI_var;
extern "C" void m9285 (t1740 * __this, t1735 * p0, t2* p1, t2* p2, bool p3, bool p4, MethodInfo* method)
{
	static bool m9285_init;
	if (!m9285_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9285_init = true;
	}
	t1745 * V_0 = {0};
	t126 * V_1 = {0};
	t1336 * V_2 = {0};
	t126 * V_3 = {0};
	t2* V_4 = {0};
	t2* V_5 = {0};
	t1735 * V_6 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		t1149 * L_0 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5883(L_0, &m5883_MI);
		__this->f17 = L_0;
		m9534(__this, &m9534_MI);
		t2* L_1 = p1;
		t2* L_2 = L_1;
		V_5 = L_2;
		__this->f7 = L_2;
		t2* L_3 = V_5;
		__this->f6 = L_3;
		t2* L_4 = p2;
		__this->f5 = L_4;
		t1735 * L_5 = p0;
		t1735 * L_6 = L_5;
		V_6 = L_6;
		__this->f14 = L_6;
		t1735 * L_7 = V_6;
		__this->f4 = L_7;
		bool L_8 = p4;
		__this->f19 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		t723* L_9 = m11527(NULL, &m11527_MI);
		__this->f12 = L_9;
		int32_t L_10 = m9300(__this, __this, 0, 1, &m9300_MI);
		__this->f13 = L_10;
		t1149 * L_11 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5883(L_11, &m5883_MI);
		__this->f16 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1740_TI));
		m9287(NULL, __this, &m9287_MI);
		m9310(__this, &m9310_MI);
		t1735 * L_12 = p0;
		bool L_13 = m9075(L_12, &m9075_MI);
		if (!L_13)
		{
			goto IL_009c;
		}
	}
	{
		t1745 * L_14 = (t1745 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1745_TI));
		m9351(L_14, __this, ((int32_t)128), ((int32_t)16777215), &m9351_MI);
		V_0 = L_14;
		t1745 * L_15 = V_0;
		t126 * L_16 = m6046(NULL, L_15, &m6046_MI);
		V_1 = L_16;
		t126 * L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1740_TI));
		m9288(NULL, __this, L_17, &m9288_MI);
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
		t1336 * L_19 = m9435(NULL, (t2*) &_stringLiteral1756, &m9435_MI);
		V_2 = L_19;
		t1336 * L_20 = V_2;
		if (L_20)
		{
			goto IL_00bc;
		}
	}
	{
		t2110 * L_21 = (t2110 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2110_TI));
		m11507(L_21, (t2*) &_stringLiteral1757, &m11507_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_00bc:
	{
		t1336 * L_22 = V_2;
		t126 * L_23 = (t126 *)VirtFuncInvoker1< t126 *, t2* >::Invoke(&m5744_MI, L_22, (t2*) &_stringLiteral1758);
		V_3 = L_23;
		t126 * L_24 = V_3;
		if (L_24)
		{
			goto IL_00d6;
		}
	}
	{
		t2110 * L_25 = (t2110 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2110_TI));
		m11507(L_25, (t2*) &_stringLiteral1759, &m11507_MI);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_00d6:
	{
		t126 * L_26 = V_3;
		t158* L_27 = ((t158*)SZArrayNew(t158_TI_var, 1));
		ArrayElementTypeCheck (L_27, __this);
		*((t9 **)(t9 **)SZArrayLdElema(L_27, 0)) = (t9 *)__this;
		t9 * L_28 = m11084(NULL, L_26, L_27, &m11084_MI);
		__this->f21 = ((t9 *)Castclass(L_28, InitializedTypeInfo(&t1775_TI)));
		t2* L_29 = (__this->f5);
		V_4 = L_29;
		t1735 * L_30 = (__this->f14);
		t2* L_31 = m9076(L_30, &m9076_MI);
		if (!L_31)
		{
			goto IL_011a;
		}
	}
	{
		t1735 * L_32 = (__this->f14);
		t2* L_33 = m9076(L_32, &m9076_MI);
		t2* L_34 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_35 = m1076(NULL, L_33, L_34, &m1076_MI);
		V_4 = L_35;
	}

IL_011a:
	{
		t9 * L_36 = (__this->f21);
		t58 L_37 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		t2* L_38 = V_4;
		InterfaceActionInvoker3< t58, t2*, bool >::Invoke(&m11986_MI, L_36, L_37, L_38, 1);
	}

IL_012d:
	{
		return;
	}
}
extern MethodInfo m9286_MI;
extern TypeInfo* t305_TI_var;
extern "C" void m9286 (t9 * __this , MethodInfo* method)
{
	static bool m9286_init;
	if (!m9286_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m9286_init = true;
	}
	{
		t305* L_0 = ((t305*)SZArrayNew(t305_TI_var, 3));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)38);
		t305* L_1 = L_0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 1)) = (uint16_t)((int32_t)91);
		t305* L_2 = L_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 2)) = (uint16_t)((int32_t)42);
		((t1740_SFs*)InitializedTypeInfo(&t1740_TI)->static_fields)->f22 = L_2;
		return;
	}
}
extern "C" void m9287 (t9 * __this , t1740 * p0, MethodInfo* method)
{
	typedef void (*m9287_ftn) (t1740 *);
	static m9287_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9287_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::basic_init(System.Reflection.Emit.ModuleBuilder)");
	_il2cpp_icall_func(p0);
}
extern "C" void m9288 (t9 * __this , t1740 * p0, t126 * p1, MethodInfo* method)
{
	typedef void (*m9288_ftn) (t1740 *, t126 *);
	static m9288_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9288_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::set_wrappers_type(System.Reflection.Emit.ModuleBuilder,System.Type)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" bool m9289 (t1740 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f19);
		return L_0;
	}
}
extern MethodInfo m9290_MI;
extern "C" t1745 * m9290 (t1740 * __this, t2* p0, int32_t p1, t126 * p2, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		t126 * L_2 = p2;
		t1745 * L_3 = m9293(__this, L_0, L_1, L_2, (t152*)(t152*)NULL, &m9293_MI);
		return L_3;
	}
}
extern TypeInfo* t1773_TI_var;
extern "C" void m9291 (t1740 * __this, t1745 * p0, MethodInfo* method)
{
	static bool m9291_init;
	if (!m9291_init)
	{
		t1773_TI_var = il2cpp_codegen_class_from_type(&t1773_0_0_0);
		m9291_init = true;
	}
	t1773* V_0 = {0};
	{
		t1773* L_0 = (__this->f11);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		t1773* L_1 = (__this->f11);
		int32_t L_2 = (__this->f10);
		if ((!(((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))) == ((uint32_t)L_2))))
		{
			goto IL_0041;
		}
	}
	{
		t1773* L_3 = (__this->f11);
		V_0 = ((t1773*)SZArrayNew(t1773_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_3)->max_length)))*(int32_t)2))));
		t1773* L_4 = (__this->f11);
		t1773* L_5 = V_0;
		int32_t L_6 = (__this->f10);
		m5912(NULL, (t121 *)(t121 *)L_4, (t121 *)(t121 *)L_5, L_6, &m5912_MI);
		t1773* L_7 = V_0;
		__this->f11 = L_7;
	}

IL_0041:
	{
		goto IL_004f;
	}

IL_0043:
	{
		__this->f11 = ((t1773*)SZArrayNew(t1773_TI_var, 1));
	}

IL_004f:
	{
		t1773* L_8 = (__this->f11);
		int32_t L_9 = (__this->f10);
		t1745 * L_10 = p0;
		ArrayElementTypeCheck (L_8, L_10);
		*((t1745 **)(t1745 **)SZArrayLdElema(L_8, L_9)) = (t1745 *)L_10;
		int32_t L_11 = (__this->f10);
		__this->f10 = ((int32_t)((int32_t)L_11+(int32_t)1));
		return;
	}
}
extern "C" t1745 * m9292 (t1740 * __this, t2* p0, int32_t p1, t126 * p2, t152* p3, int32_t p4, int32_t p5, MethodInfo* method)
{
	t1745 * V_0 = {0};
	{
		t1149 * L_0 = (__this->f16);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m5739_MI, L_0, L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		t556 * L_3 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_3, (t2*) &_stringLiteral1760, &m2885_MI);
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
		t1745 * L_10 = (t1745 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1745_TI));
		m9352(L_10, __this, L_4, L_5, L_6, L_7, L_8, L_9, (t126 *)NULL, &m9352_MI);
		V_0 = L_10;
		t1745 * L_11 = V_0;
		m9291(__this, L_11, &m9291_MI);
		t1149 * L_12 = (__this->f16);
		t2* L_13 = p0;
		t1745 * L_14 = V_0;
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5708_MI, L_12, L_13, L_14);
		t1745 * L_15 = V_0;
		return L_15;
	}
}
extern "C" t1745 * m9293 (t1740 * __this, t2* p0, int32_t p1, t126 * p2, t152* p3, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		t126 * L_2 = p2;
		t152* L_3 = p3;
		t1745 * L_4 = m9292(__this, L_0, L_1, L_2, L_3, 0, 0, &m9292_MI);
		return L_4;
	}
}
extern MethodInfo m9294_MI;
extern "C" t126 * m9294 (t1740 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t126 * L_1 = (t126 *)VirtFuncInvoker3< t126 *, t2*, bool, bool >::Invoke(&m9299_MI, __this, L_0, 0, 0);
		return L_1;
	}
}
extern "C" t1745 * m9295 (t1740 * __this, t1773* p0, int32_t p1, t2* p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		t2* L_0 = p2;
		t1773* L_1 = p0;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9361_MI, (*(t1745 **)(t1745 **)SZArrayLdElema(L_1, L_3)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_5 = m4334(NULL, &m4334_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_6 = m5741(NULL, L_0, L_4, 1, L_5, &m5741_MI);
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		t1773* L_7 = p0;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		return (*(t1745 **)(t1745 **)SZArrayLdElema(L_7, L_9));
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
		return (t1745 *)NULL;
	}
}
extern "C" t1745 * m9296 (t1740 * __this, t1773* p0, int32_t p1, t2* p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		t2* L_0 = p2;
		t1773* L_1 = p0;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9363_MI, (*(t1745 **)(t1745 **)SZArrayLdElema(L_1, L_3)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_5 = m4334(NULL, &m4334_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_6 = m5741(NULL, L_0, L_4, 1, L_5, &m5741_MI);
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		t1773* L_7 = p0;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		return (*(t1745 **)(t1745 **)SZArrayLdElema(L_7, L_9));
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
		return (t1745 *)NULL;
	}
}
extern "C" t126 * m9297 (t9 * __this , t1745 * p0, t2* p1, MethodInfo* method)
{
	typedef t126 * (*m9297_ftn) (t1745 *, t2*);
	static m9297_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9297_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::create_modified_type(System.Reflection.Emit.TypeBuilder,System.String)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" t1745 * m9298 (t1740 * __this, t1745 * p0, t2* p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	t2* V_1 = {0};
	t2* V_2 = {0};
	t1745 * V_3 = {0};
	{
		t2* L_0 = p1;
		int32_t L_1 = m2770(L_0, ((int32_t)43), &m2770_MI);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		t1745 * L_3 = p0;
		t1773* L_4 = (L_3->f18);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		t1745 * L_5 = p0;
		t1773* L_6 = (L_5->f18);
		t1745 * L_7 = p0;
		t1773* L_8 = (L_7->f18);
		t2* L_9 = p1;
		t1745 * L_10 = m9296(__this, L_6, (((int32_t)(((t121 *)L_8)->max_length))), L_9, &m9296_MI);
		return L_10;
	}

IL_002b:
	{
		return (t1745 *)NULL;
	}

IL_002d:
	{
		t1745 * L_11 = p0;
		t1773* L_12 = (L_11->f18);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		t2* L_13 = p1;
		int32_t L_14 = V_0;
		t2* L_15 = m2715(L_13, 0, L_14, &m2715_MI);
		V_1 = L_15;
		t2* L_16 = p1;
		int32_t L_17 = V_0;
		t2* L_18 = m2741(L_16, ((int32_t)((int32_t)L_17+(int32_t)1)), &m2741_MI);
		V_2 = L_18;
		t1745 * L_19 = p0;
		t1773* L_20 = (L_19->f18);
		t1745 * L_21 = p0;
		t1773* L_22 = (L_21->f18);
		t2* L_23 = V_1;
		t1745 * L_24 = m9296(__this, L_20, (((int32_t)(((t121 *)L_22)->max_length))), L_23, &m9296_MI);
		V_3 = L_24;
		t1745 * L_25 = V_3;
		if (!L_25)
		{
			goto IL_006a;
		}
	}
	{
		t1745 * L_26 = V_3;
		t2* L_27 = V_2;
		t1745 * L_28 = m9298(__this, L_26, L_27, &m9298_MI);
		return L_28;
	}

IL_006a:
	{
		return (t1745 *)NULL;
	}
}
extern "C" t126 * m9299 (t1740 * __this, t2* p0, bool p1, bool p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	t2* V_1 = {0};
	t2* V_2 = {0};
	t1745 * V_3 = {0};
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
		m339(L_1, (t2*) &_stringLiteral1761, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2699(L_2, &m2699_MI);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_4, (t2*) &_stringLiteral1761, &m2885_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t2* L_5 = p0;
		V_1 = L_5;
		V_3 = (t1745 *)NULL;
		t1773* L_6 = (__this->f11);
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
		t2101 * L_9 = (t2101 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2101_TI));
		m11840(L_9, L_8, &m11840_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0037:
	{
		t2* L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1740_TI));
		t305* L_11 = ((t1740_SFs*)InitializedTypeInfo(&t1740_TI)->static_fields)->f22;
		int32_t L_12 = m5952(L_10, L_11, &m5952_MI);
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
		t2* L_16 = m2741(L_14, L_15, &m2741_MI);
		V_2 = L_16;
		t2* L_17 = p0;
		int32_t L_18 = V_0;
		t2* L_19 = m2715(L_17, 0, L_18, &m2715_MI);
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
		t1149 * L_21 = (__this->f16);
		t2* L_22 = p0;
		t9 * L_23 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5707_MI, L_21, L_22);
		V_3 = ((t1745 *)IsInst(L_23, InitializedTypeInfo(&t1745_TI)));
		goto IL_00d8;
	}

IL_0076:
	{
		t2* L_24 = p0;
		int32_t L_25 = m2770(L_24, ((int32_t)43), &m2770_MI);
		V_0 = L_25;
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		t1773* L_27 = (__this->f11);
		if (!L_27)
		{
			goto IL_009f;
		}
	}
	{
		t1773* L_28 = (__this->f11);
		int32_t L_29 = (__this->f10);
		t2* L_30 = p0;
		t1745 * L_31 = m9295(__this, L_28, L_29, L_30, &m9295_MI);
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
		t2* L_34 = m2715(L_32, 0, L_33, &m2715_MI);
		V_4 = L_34;
		t2* L_35 = p0;
		int32_t L_36 = V_0;
		t2* L_37 = m2741(L_35, ((int32_t)((int32_t)L_36+(int32_t)1)), &m2741_MI);
		V_5 = L_37;
		t1773* L_38 = (__this->f11);
		int32_t L_39 = (__this->f10);
		t2* L_40 = V_4;
		t1745 * L_41 = m9295(__this, L_38, L_39, L_40, &m9295_MI);
		V_3 = L_41;
		t1745 * L_42 = V_3;
		if (!L_42)
		{
			goto IL_00d8;
		}
	}
	{
		t1745 * L_43 = V_3;
		t2* L_44 = V_5;
		t1745 * L_45 = m9298(__this, L_43, L_44, &m9298_MI);
		V_3 = L_45;
	}

IL_00d8:
	{
		t1745 * L_46 = V_3;
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
		t2101 * L_49 = (t2101 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2101_TI));
		m11840(L_49, L_48, &m11840_MI);
		il2cpp_codegen_raise_exception(L_49);
	}

IL_00e5:
	{
		t1745 * L_50 = V_3;
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
		t1745 * L_52 = V_3;
		t2* L_53 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1740_TI));
		t126 * L_54 = m9297(NULL, L_52, L_53, &m9297_MI);
		V_6 = L_54;
		t126 * L_55 = V_6;
		V_3 = ((t1745 *)IsInst(L_55, InitializedTypeInfo(&t1745_TI)));
		t1745 * L_56 = V_3;
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
		t1745 * L_58 = V_3;
		if (!L_58)
		{
			goto IL_0114;
		}
	}
	{
		t1745 * L_59 = V_3;
		bool L_60 = m9400(L_59, &m9400_MI);
		if (!L_60)
		{
			goto IL_0114;
		}
	}
	{
		t1745 * L_61 = V_3;
		t126 * L_62 = m6046(NULL, L_61, &m6046_MI);
		return L_62;
	}

IL_0114:
	{
		t1745 * L_63 = V_3;
		return L_63;
	}
}
extern TypeInfo* t1088_TI_var;
extern "C" int32_t m9300 (t1740 * __this, t9 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	static bool m9300_init;
	if (!m9300_init)
	{
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		m9300_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t1088* L_0 = (__this->f18);
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		__this->f18 = ((t1088*)SZArrayNew(t1088_TI_var, ((int32_t)64)));
		V_0 = 0;
		goto IL_0026;
	}

IL_0019:
	{
		t1088* L_1 = (__this->f18);
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
		t1088* L_5 = (__this->f18);
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
		t1088* L_7 = (__this->f18);
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
		t1088* L_12 = (__this->f18);
		int32_t L_13 = p1;
		int32_t L_14 = L_13;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_12, L_14));
	}
}
extern "C" int32_t m9301 (t9 * __this , t1740 * p0, t2* p1, MethodInfo* method)
{
	typedef int32_t (*m9301_ftn) (t1740 *, t2*);
	static m9301_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9301_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::getUSIndex(System.Reflection.Emit.ModuleBuilder,System.String)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m9302 (t9 * __this , t1740 * p0, t9 * p1, MethodInfo* method)
{
	typedef int32_t (*m9302_ftn) (t1740 *, t9 *);
	static m9302_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9302_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::getToken(System.Reflection.Emit.ModuleBuilder,System.Object)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m9303 (t9 * __this , t1740 * p0, t821 * p1, t152* p2, MethodInfo* method)
{
	typedef int32_t (*m9303_ftn) (t1740 *, t821 *, t152*);
	static m9303_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9303_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::getMethodToken(System.Reflection.Emit.ModuleBuilder,System.Reflection.MethodInfo,System.Type[])");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m9304_MI;
extern "C" int32_t m9304 (t1740 * __this, t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t1149 * L_0 = (__this->f17);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m5894_MI, L_0, L_1);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		t1149 * L_3 = (__this->f17);
		t2* L_4 = p0;
		t9 * L_5 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5707_MI, L_3, L_4);
		return ((*(int32_t*)((int32_t*)UnBox (L_5, InitializedTypeInfo(&t125_TI)))));
	}

IL_0020:
	{
		t2* L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1740_TI));
		int32_t L_7 = m9301(NULL, __this, L_6, &m9301_MI);
		V_0 = L_7;
		t1149 * L_8 = (__this->f17);
		t2* L_9 = p0;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		t9 * L_12 = Box(InitializedTypeInfo(&t125_TI), &L_11);
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5891_MI, L_8, L_9, L_12);
		int32_t L_13 = V_0;
		return L_13;
	}
}
extern MethodInfo m9305_MI;
extern "C" int32_t m9305 (t1740 * __this, t553 * p0, MethodInfo* method)
{
	{
		t553 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1740_TI));
		int32_t L_1 = m9302(NULL, __this, L_0, &m9302_MI);
		return L_1;
	}
}
extern MethodInfo m9306_MI;
extern "C" int32_t m9306 (t1740 * __this, t821 * p0, t152* p1, MethodInfo* method)
{
	{
		t821 * L_0 = p0;
		t152* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1740_TI));
		int32_t L_2 = m9303(NULL, __this, L_0, L_1, &m9303_MI);
		return L_2;
	}
}
extern "C" void m9307 (t1740 * __this, t9 * p0, int32_t p1, MethodInfo* method)
{
	typedef void (*m9307_ftn) (t1740 *, t9 *, int32_t);
	static m9307_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9307_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::RegisterToken(System.Object,System.Int32)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern "C" t9 * m9308 (t1740 * __this, MethodInfo* method)
{
	{
		t1774 * L_0 = (__this->f20);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t1774 * L_1 = (t1774 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1774_TI));
		m9311(L_1, __this, &m9311_MI);
		__this->f20 = L_1;
	}

IL_0014:
	{
		t1774 * L_2 = (__this->f20);
		return L_2;
	}
}
extern "C" t2* m9309 (t1740 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m9310 (t1740 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f15);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t1745 * L_1 = (t1745 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1745_TI));
		m9351(L_1, __this, 0, 1, &m9351_MI);
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



extern "C" void m9311 (t1774 * __this, t1740 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1740 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9312_MI;
extern "C" int32_t m9312 (t1774 * __this, t2* p0, MethodInfo* method)
{
	{
		t1740 * L_0 = (__this->f0);
		t2* L_1 = p0;
		int32_t L_2 = m9304(L_0, L_1, &m9304_MI);
		return L_2;
	}
}
extern MethodInfo m9313_MI;
extern "C" int32_t m9313 (t1774 * __this, t553 * p0, MethodInfo* method)
{
	{
		t1740 * L_0 = (__this->f0);
		t553 * L_1 = p0;
		int32_t L_2 = m9305(L_0, L_1, &m9305_MI);
		return L_2;
	}
}
extern MethodInfo m9314_MI;
extern "C" int32_t m9314 (t1774 * __this, t821 * p0, t152* p1, MethodInfo* method)
{
	{
		t1740 * L_0 = (__this->f0);
		t821 * L_1 = p0;
		t152* L_2 = p1;
		int32_t L_3 = m9306(L_0, L_1, L_2, &m9306_MI);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1779.h"
extern TypeInfo t1779_TI;
#include "t1779MD.h"
extern MethodInfo m9319_MI;


extern MethodInfo m9315_MI;
extern "C" void m9315 (t1768 * __this, int32_t p0, int32_t p1, MethodInfo* method)
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
extern MethodInfo m9316_MI;
extern "C" int32_t m9316 (t1768 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m9319(__this, &m9319_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4207_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9317_MI;
extern "C" bool m9317 (t1768 * __this, t9 * p0, MethodInfo* method)
{
	t1768  V_0 = {0};
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
		if (((t9 *)IsInst(L_1, InitializedTypeInfo(&t1768_TI))))
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
		V_0 = ((*(t1768 *)((t1768 *)UnBox (L_2, InitializedTypeInfo(&t1768_TI)))));
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
extern MethodInfo m9318_MI;
extern "C" t2* m9318 (t1768 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m9319(__this, &m9319_MI);
		return L_0;
	}
}
extern "C" t2* m9319 (t1768 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f0);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1779_TI));
		t221* L_1 = ((t1779_SFs*)InitializedTypeInfo(&t1779_TI)->static_fields)->f0;
		uint8_t L_2 = (__this->f1);
		uint8_t L_3 = L_2;
		return (*(t2**)(t2**)SZArrayLdElema(L_1, L_3));
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1779_TI));
		t221* L_4 = ((t1779_SFs*)InitializedTypeInfo(&t1779_TI)->static_fields)->f0;
		uint8_t L_5 = (__this->f1);
		int32_t L_6 = ((int32_t)((int32_t)((int32_t)256)+(int32_t)L_5));
		return (*(t2**)(t2**)SZArrayLdElema(L_4, L_6));
	}
}
extern "C" int32_t m9320 (t1768 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" int32_t m9321 (t1768 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f6);
		return (int32_t)(L_0);
	}
}
extern "C" int32_t m9322 (t1768 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f3);
		return (int32_t)(L_0);
	}
}
extern "C" int32_t m9323 (t1768 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f2);
		return (int32_t)(L_0);
	}
}
extern "C" int16_t m9324 (t1768 * __this, MethodInfo* method)
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
extern "C" bool m9325 (t9 * __this , t1768  p0, t1768  p1, MethodInfo* method)
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



extern MethodInfo m9326_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m9326 (t9 * __this , MethodInfo* method)
{
	static bool m9326_init;
	if (!m9326_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9326_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)304)));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral1762);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral1762;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral1763);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral1763;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral1764);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral1764;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral1765);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral1765;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral1766);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral1766;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral1767);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral1767;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral1768);
		*((t2**)(t2**)SZArrayLdElema(L_6, 6)) = (t2*)(t2*) &_stringLiteral1768;
		t221* L_7 = L_6;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral1769);
		*((t2**)(t2**)SZArrayLdElema(L_7, 7)) = (t2*)(t2*) &_stringLiteral1769;
		t221* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral1770);
		*((t2**)(t2**)SZArrayLdElema(L_8, 8)) = (t2*)(t2*) &_stringLiteral1770;
		t221* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t2*) &_stringLiteral1771);
		*((t2**)(t2**)SZArrayLdElema(L_9, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral1771;
		t221* L_10 = L_9;
		ArrayElementTypeCheck (L_10, (t2*) &_stringLiteral1772);
		*((t2**)(t2**)SZArrayLdElema(L_10, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral1772;
		t221* L_11 = L_10;
		ArrayElementTypeCheck (L_11, (t2*) &_stringLiteral1773);
		*((t2**)(t2**)SZArrayLdElema(L_11, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral1773;
		t221* L_12 = L_11;
		ArrayElementTypeCheck (L_12, (t2*) &_stringLiteral1774);
		*((t2**)(t2**)SZArrayLdElema(L_12, ((int32_t)12))) = (t2*)(t2*) &_stringLiteral1774;
		t221* L_13 = L_12;
		ArrayElementTypeCheck (L_13, (t2*) &_stringLiteral1775);
		*((t2**)(t2**)SZArrayLdElema(L_13, ((int32_t)13))) = (t2*)(t2*) &_stringLiteral1775;
		t221* L_14 = L_13;
		ArrayElementTypeCheck (L_14, (t2*) &_stringLiteral1776);
		*((t2**)(t2**)SZArrayLdElema(L_14, ((int32_t)14))) = (t2*)(t2*) &_stringLiteral1776;
		t221* L_15 = L_14;
		ArrayElementTypeCheck (L_15, (t2*) &_stringLiteral1777);
		*((t2**)(t2**)SZArrayLdElema(L_15, ((int32_t)15))) = (t2*)(t2*) &_stringLiteral1777;
		t221* L_16 = L_15;
		ArrayElementTypeCheck (L_16, (t2*) &_stringLiteral1778);
		*((t2**)(t2**)SZArrayLdElema(L_16, ((int32_t)16))) = (t2*)(t2*) &_stringLiteral1778;
		t221* L_17 = L_16;
		ArrayElementTypeCheck (L_17, (t2*) &_stringLiteral1779);
		*((t2**)(t2**)SZArrayLdElema(L_17, ((int32_t)17))) = (t2*)(t2*) &_stringLiteral1779;
		t221* L_18 = L_17;
		ArrayElementTypeCheck (L_18, (t2*) &_stringLiteral1780);
		*((t2**)(t2**)SZArrayLdElema(L_18, ((int32_t)18))) = (t2*)(t2*) &_stringLiteral1780;
		t221* L_19 = L_18;
		ArrayElementTypeCheck (L_19, (t2*) &_stringLiteral1781);
		*((t2**)(t2**)SZArrayLdElema(L_19, ((int32_t)19))) = (t2*)(t2*) &_stringLiteral1781;
		t221* L_20 = L_19;
		ArrayElementTypeCheck (L_20, (t2*) &_stringLiteral1782);
		*((t2**)(t2**)SZArrayLdElema(L_20, ((int32_t)20))) = (t2*)(t2*) &_stringLiteral1782;
		t221* L_21 = L_20;
		ArrayElementTypeCheck (L_21, (t2*) &_stringLiteral1783);
		*((t2**)(t2**)SZArrayLdElema(L_21, ((int32_t)21))) = (t2*)(t2*) &_stringLiteral1783;
		t221* L_22 = L_21;
		ArrayElementTypeCheck (L_22, (t2*) &_stringLiteral1784);
		*((t2**)(t2**)SZArrayLdElema(L_22, ((int32_t)22))) = (t2*)(t2*) &_stringLiteral1784;
		t221* L_23 = L_22;
		ArrayElementTypeCheck (L_23, (t2*) &_stringLiteral1785);
		*((t2**)(t2**)SZArrayLdElema(L_23, ((int32_t)23))) = (t2*)(t2*) &_stringLiteral1785;
		t221* L_24 = L_23;
		ArrayElementTypeCheck (L_24, (t2*) &_stringLiteral1786);
		*((t2**)(t2**)SZArrayLdElema(L_24, ((int32_t)24))) = (t2*)(t2*) &_stringLiteral1786;
		t221* L_25 = L_24;
		ArrayElementTypeCheck (L_25, (t2*) &_stringLiteral1787);
		*((t2**)(t2**)SZArrayLdElema(L_25, ((int32_t)25))) = (t2*)(t2*) &_stringLiteral1787;
		t221* L_26 = L_25;
		ArrayElementTypeCheck (L_26, (t2*) &_stringLiteral1788);
		*((t2**)(t2**)SZArrayLdElema(L_26, ((int32_t)26))) = (t2*)(t2*) &_stringLiteral1788;
		t221* L_27 = L_26;
		ArrayElementTypeCheck (L_27, (t2*) &_stringLiteral1789);
		*((t2**)(t2**)SZArrayLdElema(L_27, ((int32_t)27))) = (t2*)(t2*) &_stringLiteral1789;
		t221* L_28 = L_27;
		ArrayElementTypeCheck (L_28, (t2*) &_stringLiteral1790);
		*((t2**)(t2**)SZArrayLdElema(L_28, ((int32_t)28))) = (t2*)(t2*) &_stringLiteral1790;
		t221* L_29 = L_28;
		ArrayElementTypeCheck (L_29, (t2*) &_stringLiteral1791);
		*((t2**)(t2**)SZArrayLdElema(L_29, ((int32_t)29))) = (t2*)(t2*) &_stringLiteral1791;
		t221* L_30 = L_29;
		ArrayElementTypeCheck (L_30, (t2*) &_stringLiteral1792);
		*((t2**)(t2**)SZArrayLdElema(L_30, ((int32_t)30))) = (t2*)(t2*) &_stringLiteral1792;
		t221* L_31 = L_30;
		ArrayElementTypeCheck (L_31, (t2*) &_stringLiteral1793);
		*((t2**)(t2**)SZArrayLdElema(L_31, ((int32_t)31))) = (t2*)(t2*) &_stringLiteral1793;
		t221* L_32 = L_31;
		ArrayElementTypeCheck (L_32, (t2*) &_stringLiteral1794);
		*((t2**)(t2**)SZArrayLdElema(L_32, ((int32_t)32))) = (t2*)(t2*) &_stringLiteral1794;
		t221* L_33 = L_32;
		ArrayElementTypeCheck (L_33, (t2*) &_stringLiteral1795);
		*((t2**)(t2**)SZArrayLdElema(L_33, ((int32_t)33))) = (t2*)(t2*) &_stringLiteral1795;
		t221* L_34 = L_33;
		ArrayElementTypeCheck (L_34, (t2*) &_stringLiteral1796);
		*((t2**)(t2**)SZArrayLdElema(L_34, ((int32_t)34))) = (t2*)(t2*) &_stringLiteral1796;
		t221* L_35 = L_34;
		ArrayElementTypeCheck (L_35, (t2*) &_stringLiteral1797);
		*((t2**)(t2**)SZArrayLdElema(L_35, ((int32_t)35))) = (t2*)(t2*) &_stringLiteral1797;
		t221* L_36 = L_35;
		ArrayElementTypeCheck (L_36, (t2*) &_stringLiteral1798);
		*((t2**)(t2**)SZArrayLdElema(L_36, ((int32_t)37))) = (t2*)(t2*) &_stringLiteral1798;
		t221* L_37 = L_36;
		ArrayElementTypeCheck (L_37, (t2*) &_stringLiteral1799);
		*((t2**)(t2**)SZArrayLdElema(L_37, ((int32_t)38))) = (t2*)(t2*) &_stringLiteral1799;
		t221* L_38 = L_37;
		ArrayElementTypeCheck (L_38, (t2*) &_stringLiteral1800);
		*((t2**)(t2**)SZArrayLdElema(L_38, ((int32_t)39))) = (t2*)(t2*) &_stringLiteral1800;
		t221* L_39 = L_38;
		ArrayElementTypeCheck (L_39, (t2*) &_stringLiteral1801);
		*((t2**)(t2**)SZArrayLdElema(L_39, ((int32_t)40))) = (t2*)(t2*) &_stringLiteral1801;
		t221* L_40 = L_39;
		ArrayElementTypeCheck (L_40, (t2*) &_stringLiteral1802);
		*((t2**)(t2**)SZArrayLdElema(L_40, ((int32_t)41))) = (t2*)(t2*) &_stringLiteral1802;
		t221* L_41 = L_40;
		ArrayElementTypeCheck (L_41, (t2*) &_stringLiteral1803);
		*((t2**)(t2**)SZArrayLdElema(L_41, ((int32_t)42))) = (t2*)(t2*) &_stringLiteral1803;
		t221* L_42 = L_41;
		ArrayElementTypeCheck (L_42, (t2*) &_stringLiteral1804);
		*((t2**)(t2**)SZArrayLdElema(L_42, ((int32_t)43))) = (t2*)(t2*) &_stringLiteral1804;
		t221* L_43 = L_42;
		ArrayElementTypeCheck (L_43, (t2*) &_stringLiteral1805);
		*((t2**)(t2**)SZArrayLdElema(L_43, ((int32_t)44))) = (t2*)(t2*) &_stringLiteral1805;
		t221* L_44 = L_43;
		ArrayElementTypeCheck (L_44, (t2*) &_stringLiteral1806);
		*((t2**)(t2**)SZArrayLdElema(L_44, ((int32_t)45))) = (t2*)(t2*) &_stringLiteral1806;
		t221* L_45 = L_44;
		ArrayElementTypeCheck (L_45, (t2*) &_stringLiteral1807);
		*((t2**)(t2**)SZArrayLdElema(L_45, ((int32_t)46))) = (t2*)(t2*) &_stringLiteral1807;
		t221* L_46 = L_45;
		ArrayElementTypeCheck (L_46, (t2*) &_stringLiteral1808);
		*((t2**)(t2**)SZArrayLdElema(L_46, ((int32_t)47))) = (t2*)(t2*) &_stringLiteral1808;
		t221* L_47 = L_46;
		ArrayElementTypeCheck (L_47, (t2*) &_stringLiteral1809);
		*((t2**)(t2**)SZArrayLdElema(L_47, ((int32_t)48))) = (t2*)(t2*) &_stringLiteral1809;
		t221* L_48 = L_47;
		ArrayElementTypeCheck (L_48, (t2*) &_stringLiteral1810);
		*((t2**)(t2**)SZArrayLdElema(L_48, ((int32_t)49))) = (t2*)(t2*) &_stringLiteral1810;
		t221* L_49 = L_48;
		ArrayElementTypeCheck (L_49, (t2*) &_stringLiteral1811);
		*((t2**)(t2**)SZArrayLdElema(L_49, ((int32_t)50))) = (t2*)(t2*) &_stringLiteral1811;
		t221* L_50 = L_49;
		ArrayElementTypeCheck (L_50, (t2*) &_stringLiteral1812);
		*((t2**)(t2**)SZArrayLdElema(L_50, ((int32_t)51))) = (t2*)(t2*) &_stringLiteral1812;
		t221* L_51 = L_50;
		ArrayElementTypeCheck (L_51, (t2*) &_stringLiteral1813);
		*((t2**)(t2**)SZArrayLdElema(L_51, ((int32_t)52))) = (t2*)(t2*) &_stringLiteral1813;
		t221* L_52 = L_51;
		ArrayElementTypeCheck (L_52, (t2*) &_stringLiteral1814);
		*((t2**)(t2**)SZArrayLdElema(L_52, ((int32_t)53))) = (t2*)(t2*) &_stringLiteral1814;
		t221* L_53 = L_52;
		ArrayElementTypeCheck (L_53, (t2*) &_stringLiteral1815);
		*((t2**)(t2**)SZArrayLdElema(L_53, ((int32_t)54))) = (t2*)(t2*) &_stringLiteral1815;
		t221* L_54 = L_53;
		ArrayElementTypeCheck (L_54, (t2*) &_stringLiteral1816);
		*((t2**)(t2**)SZArrayLdElema(L_54, ((int32_t)55))) = (t2*)(t2*) &_stringLiteral1816;
		t221* L_55 = L_54;
		ArrayElementTypeCheck (L_55, (t2*) &_stringLiteral1817);
		*((t2**)(t2**)SZArrayLdElema(L_55, ((int32_t)56))) = (t2*)(t2*) &_stringLiteral1817;
		t221* L_56 = L_55;
		ArrayElementTypeCheck (L_56, (t2*) &_stringLiteral1818);
		*((t2**)(t2**)SZArrayLdElema(L_56, ((int32_t)57))) = (t2*)(t2*) &_stringLiteral1818;
		t221* L_57 = L_56;
		ArrayElementTypeCheck (L_57, (t2*) &_stringLiteral1819);
		*((t2**)(t2**)SZArrayLdElema(L_57, ((int32_t)58))) = (t2*)(t2*) &_stringLiteral1819;
		t221* L_58 = L_57;
		ArrayElementTypeCheck (L_58, (t2*) &_stringLiteral1820);
		*((t2**)(t2**)SZArrayLdElema(L_58, ((int32_t)59))) = (t2*)(t2*) &_stringLiteral1820;
		t221* L_59 = L_58;
		ArrayElementTypeCheck (L_59, (t2*) &_stringLiteral1821);
		*((t2**)(t2**)SZArrayLdElema(L_59, ((int32_t)60))) = (t2*)(t2*) &_stringLiteral1821;
		t221* L_60 = L_59;
		ArrayElementTypeCheck (L_60, (t2*) &_stringLiteral1822);
		*((t2**)(t2**)SZArrayLdElema(L_60, ((int32_t)61))) = (t2*)(t2*) &_stringLiteral1822;
		t221* L_61 = L_60;
		ArrayElementTypeCheck (L_61, (t2*) &_stringLiteral1823);
		*((t2**)(t2**)SZArrayLdElema(L_61, ((int32_t)62))) = (t2*)(t2*) &_stringLiteral1823;
		t221* L_62 = L_61;
		ArrayElementTypeCheck (L_62, (t2*) &_stringLiteral1824);
		*((t2**)(t2**)SZArrayLdElema(L_62, ((int32_t)63))) = (t2*)(t2*) &_stringLiteral1824;
		t221* L_63 = L_62;
		ArrayElementTypeCheck (L_63, (t2*) &_stringLiteral1825);
		*((t2**)(t2**)SZArrayLdElema(L_63, ((int32_t)64))) = (t2*)(t2*) &_stringLiteral1825;
		t221* L_64 = L_63;
		ArrayElementTypeCheck (L_64, (t2*) &_stringLiteral1826);
		*((t2**)(t2**)SZArrayLdElema(L_64, ((int32_t)65))) = (t2*)(t2*) &_stringLiteral1826;
		t221* L_65 = L_64;
		ArrayElementTypeCheck (L_65, (t2*) &_stringLiteral1827);
		*((t2**)(t2**)SZArrayLdElema(L_65, ((int32_t)66))) = (t2*)(t2*) &_stringLiteral1827;
		t221* L_66 = L_65;
		ArrayElementTypeCheck (L_66, (t2*) &_stringLiteral1828);
		*((t2**)(t2**)SZArrayLdElema(L_66, ((int32_t)67))) = (t2*)(t2*) &_stringLiteral1828;
		t221* L_67 = L_66;
		ArrayElementTypeCheck (L_67, (t2*) &_stringLiteral1829);
		*((t2**)(t2**)SZArrayLdElema(L_67, ((int32_t)68))) = (t2*)(t2*) &_stringLiteral1829;
		t221* L_68 = L_67;
		ArrayElementTypeCheck (L_68, (t2*) &_stringLiteral1830);
		*((t2**)(t2**)SZArrayLdElema(L_68, ((int32_t)69))) = (t2*)(t2*) &_stringLiteral1830;
		t221* L_69 = L_68;
		ArrayElementTypeCheck (L_69, (t2*) &_stringLiteral1831);
		*((t2**)(t2**)SZArrayLdElema(L_69, ((int32_t)70))) = (t2*)(t2*) &_stringLiteral1831;
		t221* L_70 = L_69;
		ArrayElementTypeCheck (L_70, (t2*) &_stringLiteral1832);
		*((t2**)(t2**)SZArrayLdElema(L_70, ((int32_t)71))) = (t2*)(t2*) &_stringLiteral1832;
		t221* L_71 = L_70;
		ArrayElementTypeCheck (L_71, (t2*) &_stringLiteral1833);
		*((t2**)(t2**)SZArrayLdElema(L_71, ((int32_t)72))) = (t2*)(t2*) &_stringLiteral1833;
		t221* L_72 = L_71;
		ArrayElementTypeCheck (L_72, (t2*) &_stringLiteral1834);
		*((t2**)(t2**)SZArrayLdElema(L_72, ((int32_t)73))) = (t2*)(t2*) &_stringLiteral1834;
		t221* L_73 = L_72;
		ArrayElementTypeCheck (L_73, (t2*) &_stringLiteral1835);
		*((t2**)(t2**)SZArrayLdElema(L_73, ((int32_t)74))) = (t2*)(t2*) &_stringLiteral1835;
		t221* L_74 = L_73;
		ArrayElementTypeCheck (L_74, (t2*) &_stringLiteral1836);
		*((t2**)(t2**)SZArrayLdElema(L_74, ((int32_t)75))) = (t2*)(t2*) &_stringLiteral1836;
		t221* L_75 = L_74;
		ArrayElementTypeCheck (L_75, (t2*) &_stringLiteral1837);
		*((t2**)(t2**)SZArrayLdElema(L_75, ((int32_t)76))) = (t2*)(t2*) &_stringLiteral1837;
		t221* L_76 = L_75;
		ArrayElementTypeCheck (L_76, (t2*) &_stringLiteral1838);
		*((t2**)(t2**)SZArrayLdElema(L_76, ((int32_t)77))) = (t2*)(t2*) &_stringLiteral1838;
		t221* L_77 = L_76;
		ArrayElementTypeCheck (L_77, (t2*) &_stringLiteral1839);
		*((t2**)(t2**)SZArrayLdElema(L_77, ((int32_t)78))) = (t2*)(t2*) &_stringLiteral1839;
		t221* L_78 = L_77;
		ArrayElementTypeCheck (L_78, (t2*) &_stringLiteral1840);
		*((t2**)(t2**)SZArrayLdElema(L_78, ((int32_t)79))) = (t2*)(t2*) &_stringLiteral1840;
		t221* L_79 = L_78;
		ArrayElementTypeCheck (L_79, (t2*) &_stringLiteral1841);
		*((t2**)(t2**)SZArrayLdElema(L_79, ((int32_t)80))) = (t2*)(t2*) &_stringLiteral1841;
		t221* L_80 = L_79;
		ArrayElementTypeCheck (L_80, (t2*) &_stringLiteral1842);
		*((t2**)(t2**)SZArrayLdElema(L_80, ((int32_t)81))) = (t2*)(t2*) &_stringLiteral1842;
		t221* L_81 = L_80;
		ArrayElementTypeCheck (L_81, (t2*) &_stringLiteral1843);
		*((t2**)(t2**)SZArrayLdElema(L_81, ((int32_t)82))) = (t2*)(t2*) &_stringLiteral1843;
		t221* L_82 = L_81;
		ArrayElementTypeCheck (L_82, (t2*) &_stringLiteral1844);
		*((t2**)(t2**)SZArrayLdElema(L_82, ((int32_t)83))) = (t2*)(t2*) &_stringLiteral1844;
		t221* L_83 = L_82;
		ArrayElementTypeCheck (L_83, (t2*) &_stringLiteral1845);
		*((t2**)(t2**)SZArrayLdElema(L_83, ((int32_t)84))) = (t2*)(t2*) &_stringLiteral1845;
		t221* L_84 = L_83;
		ArrayElementTypeCheck (L_84, (t2*) &_stringLiteral1846);
		*((t2**)(t2**)SZArrayLdElema(L_84, ((int32_t)85))) = (t2*)(t2*) &_stringLiteral1846;
		t221* L_85 = L_84;
		ArrayElementTypeCheck (L_85, (t2*) &_stringLiteral1847);
		*((t2**)(t2**)SZArrayLdElema(L_85, ((int32_t)86))) = (t2*)(t2*) &_stringLiteral1847;
		t221* L_86 = L_85;
		ArrayElementTypeCheck (L_86, (t2*) &_stringLiteral1848);
		*((t2**)(t2**)SZArrayLdElema(L_86, ((int32_t)87))) = (t2*)(t2*) &_stringLiteral1848;
		t221* L_87 = L_86;
		ArrayElementTypeCheck (L_87, (t2*) &_stringLiteral1849);
		*((t2**)(t2**)SZArrayLdElema(L_87, ((int32_t)88))) = (t2*)(t2*) &_stringLiteral1849;
		t221* L_88 = L_87;
		ArrayElementTypeCheck (L_88, (t2*) &_stringLiteral1850);
		*((t2**)(t2**)SZArrayLdElema(L_88, ((int32_t)89))) = (t2*)(t2*) &_stringLiteral1850;
		t221* L_89 = L_88;
		ArrayElementTypeCheck (L_89, (t2*) &_stringLiteral1851);
		*((t2**)(t2**)SZArrayLdElema(L_89, ((int32_t)90))) = (t2*)(t2*) &_stringLiteral1851;
		t221* L_90 = L_89;
		ArrayElementTypeCheck (L_90, (t2*) &_stringLiteral1852);
		*((t2**)(t2**)SZArrayLdElema(L_90, ((int32_t)91))) = (t2*)(t2*) &_stringLiteral1852;
		t221* L_91 = L_90;
		ArrayElementTypeCheck (L_91, (t2*) &_stringLiteral1853);
		*((t2**)(t2**)SZArrayLdElema(L_91, ((int32_t)92))) = (t2*)(t2*) &_stringLiteral1853;
		t221* L_92 = L_91;
		ArrayElementTypeCheck (L_92, (t2*) &_stringLiteral1854);
		*((t2**)(t2**)SZArrayLdElema(L_92, ((int32_t)93))) = (t2*)(t2*) &_stringLiteral1854;
		t221* L_93 = L_92;
		ArrayElementTypeCheck (L_93, (t2*) &_stringLiteral1855);
		*((t2**)(t2**)SZArrayLdElema(L_93, ((int32_t)94))) = (t2*)(t2*) &_stringLiteral1855;
		t221* L_94 = L_93;
		ArrayElementTypeCheck (L_94, (t2*) &_stringLiteral1856);
		*((t2**)(t2**)SZArrayLdElema(L_94, ((int32_t)95))) = (t2*)(t2*) &_stringLiteral1856;
		t221* L_95 = L_94;
		ArrayElementTypeCheck (L_95, (t2*) &_stringLiteral1857);
		*((t2**)(t2**)SZArrayLdElema(L_95, ((int32_t)96))) = (t2*)(t2*) &_stringLiteral1857;
		t221* L_96 = L_95;
		ArrayElementTypeCheck (L_96, (t2*) &_stringLiteral1858);
		*((t2**)(t2**)SZArrayLdElema(L_96, ((int32_t)97))) = (t2*)(t2*) &_stringLiteral1858;
		t221* L_97 = L_96;
		ArrayElementTypeCheck (L_97, (t2*) &_stringLiteral1859);
		*((t2**)(t2**)SZArrayLdElema(L_97, ((int32_t)98))) = (t2*)(t2*) &_stringLiteral1859;
		t221* L_98 = L_97;
		ArrayElementTypeCheck (L_98, (t2*) &_stringLiteral1860);
		*((t2**)(t2**)SZArrayLdElema(L_98, ((int32_t)99))) = (t2*)(t2*) &_stringLiteral1860;
		t221* L_99 = L_98;
		ArrayElementTypeCheck (L_99, (t2*) &_stringLiteral1861);
		*((t2**)(t2**)SZArrayLdElema(L_99, ((int32_t)100))) = (t2*)(t2*) &_stringLiteral1861;
		t221* L_100 = L_99;
		ArrayElementTypeCheck (L_100, (t2*) &_stringLiteral1862);
		*((t2**)(t2**)SZArrayLdElema(L_100, ((int32_t)101))) = (t2*)(t2*) &_stringLiteral1862;
		t221* L_101 = L_100;
		ArrayElementTypeCheck (L_101, (t2*) &_stringLiteral1863);
		*((t2**)(t2**)SZArrayLdElema(L_101, ((int32_t)102))) = (t2*)(t2*) &_stringLiteral1863;
		t221* L_102 = L_101;
		ArrayElementTypeCheck (L_102, (t2*) &_stringLiteral1864);
		*((t2**)(t2**)SZArrayLdElema(L_102, ((int32_t)103))) = (t2*)(t2*) &_stringLiteral1864;
		t221* L_103 = L_102;
		ArrayElementTypeCheck (L_103, (t2*) &_stringLiteral1865);
		*((t2**)(t2**)SZArrayLdElema(L_103, ((int32_t)104))) = (t2*)(t2*) &_stringLiteral1865;
		t221* L_104 = L_103;
		ArrayElementTypeCheck (L_104, (t2*) &_stringLiteral1866);
		*((t2**)(t2**)SZArrayLdElema(L_104, ((int32_t)105))) = (t2*)(t2*) &_stringLiteral1866;
		t221* L_105 = L_104;
		ArrayElementTypeCheck (L_105, (t2*) &_stringLiteral1867);
		*((t2**)(t2**)SZArrayLdElema(L_105, ((int32_t)106))) = (t2*)(t2*) &_stringLiteral1867;
		t221* L_106 = L_105;
		ArrayElementTypeCheck (L_106, (t2*) &_stringLiteral1868);
		*((t2**)(t2**)SZArrayLdElema(L_106, ((int32_t)107))) = (t2*)(t2*) &_stringLiteral1868;
		t221* L_107 = L_106;
		ArrayElementTypeCheck (L_107, (t2*) &_stringLiteral1869);
		*((t2**)(t2**)SZArrayLdElema(L_107, ((int32_t)108))) = (t2*)(t2*) &_stringLiteral1869;
		t221* L_108 = L_107;
		ArrayElementTypeCheck (L_108, (t2*) &_stringLiteral1870);
		*((t2**)(t2**)SZArrayLdElema(L_108, ((int32_t)109))) = (t2*)(t2*) &_stringLiteral1870;
		t221* L_109 = L_108;
		ArrayElementTypeCheck (L_109, (t2*) &_stringLiteral1871);
		*((t2**)(t2**)SZArrayLdElema(L_109, ((int32_t)110))) = (t2*)(t2*) &_stringLiteral1871;
		t221* L_110 = L_109;
		ArrayElementTypeCheck (L_110, (t2*) &_stringLiteral1872);
		*((t2**)(t2**)SZArrayLdElema(L_110, ((int32_t)111))) = (t2*)(t2*) &_stringLiteral1872;
		t221* L_111 = L_110;
		ArrayElementTypeCheck (L_111, (t2*) &_stringLiteral1873);
		*((t2**)(t2**)SZArrayLdElema(L_111, ((int32_t)112))) = (t2*)(t2*) &_stringLiteral1873;
		t221* L_112 = L_111;
		ArrayElementTypeCheck (L_112, (t2*) &_stringLiteral1874);
		*((t2**)(t2**)SZArrayLdElema(L_112, ((int32_t)113))) = (t2*)(t2*) &_stringLiteral1874;
		t221* L_113 = L_112;
		ArrayElementTypeCheck (L_113, (t2*) &_stringLiteral1875);
		*((t2**)(t2**)SZArrayLdElema(L_113, ((int32_t)114))) = (t2*)(t2*) &_stringLiteral1875;
		t221* L_114 = L_113;
		ArrayElementTypeCheck (L_114, (t2*) &_stringLiteral1876);
		*((t2**)(t2**)SZArrayLdElema(L_114, ((int32_t)115))) = (t2*)(t2*) &_stringLiteral1876;
		t221* L_115 = L_114;
		ArrayElementTypeCheck (L_115, (t2*) &_stringLiteral1877);
		*((t2**)(t2**)SZArrayLdElema(L_115, ((int32_t)116))) = (t2*)(t2*) &_stringLiteral1877;
		t221* L_116 = L_115;
		ArrayElementTypeCheck (L_116, (t2*) &_stringLiteral1878);
		*((t2**)(t2**)SZArrayLdElema(L_116, ((int32_t)117))) = (t2*)(t2*) &_stringLiteral1878;
		t221* L_117 = L_116;
		ArrayElementTypeCheck (L_117, (t2*) &_stringLiteral1879);
		*((t2**)(t2**)SZArrayLdElema(L_117, ((int32_t)118))) = (t2*)(t2*) &_stringLiteral1879;
		t221* L_118 = L_117;
		ArrayElementTypeCheck (L_118, (t2*) &_stringLiteral1880);
		*((t2**)(t2**)SZArrayLdElema(L_118, ((int32_t)121))) = (t2*)(t2*) &_stringLiteral1880;
		t221* L_119 = L_118;
		ArrayElementTypeCheck (L_119, (t2*) &_stringLiteral1881);
		*((t2**)(t2**)SZArrayLdElema(L_119, ((int32_t)122))) = (t2*)(t2*) &_stringLiteral1881;
		t221* L_120 = L_119;
		ArrayElementTypeCheck (L_120, (t2*) &_stringLiteral1882);
		*((t2**)(t2**)SZArrayLdElema(L_120, ((int32_t)123))) = (t2*)(t2*) &_stringLiteral1882;
		t221* L_121 = L_120;
		ArrayElementTypeCheck (L_121, (t2*) &_stringLiteral1883);
		*((t2**)(t2**)SZArrayLdElema(L_121, ((int32_t)124))) = (t2*)(t2*) &_stringLiteral1883;
		t221* L_122 = L_121;
		ArrayElementTypeCheck (L_122, (t2*) &_stringLiteral1884);
		*((t2**)(t2**)SZArrayLdElema(L_122, ((int32_t)125))) = (t2*)(t2*) &_stringLiteral1884;
		t221* L_123 = L_122;
		ArrayElementTypeCheck (L_123, (t2*) &_stringLiteral1885);
		*((t2**)(t2**)SZArrayLdElema(L_123, ((int32_t)126))) = (t2*)(t2*) &_stringLiteral1885;
		t221* L_124 = L_123;
		ArrayElementTypeCheck (L_124, (t2*) &_stringLiteral1886);
		*((t2**)(t2**)SZArrayLdElema(L_124, ((int32_t)127))) = (t2*)(t2*) &_stringLiteral1886;
		t221* L_125 = L_124;
		ArrayElementTypeCheck (L_125, (t2*) &_stringLiteral1887);
		*((t2**)(t2**)SZArrayLdElema(L_125, ((int32_t)128))) = (t2*)(t2*) &_stringLiteral1887;
		t221* L_126 = L_125;
		ArrayElementTypeCheck (L_126, (t2*) &_stringLiteral1888);
		*((t2**)(t2**)SZArrayLdElema(L_126, ((int32_t)129))) = (t2*)(t2*) &_stringLiteral1888;
		t221* L_127 = L_126;
		ArrayElementTypeCheck (L_127, (t2*) &_stringLiteral1889);
		*((t2**)(t2**)SZArrayLdElema(L_127, ((int32_t)130))) = (t2*)(t2*) &_stringLiteral1889;
		t221* L_128 = L_127;
		ArrayElementTypeCheck (L_128, (t2*) &_stringLiteral1890);
		*((t2**)(t2**)SZArrayLdElema(L_128, ((int32_t)131))) = (t2*)(t2*) &_stringLiteral1890;
		t221* L_129 = L_128;
		ArrayElementTypeCheck (L_129, (t2*) &_stringLiteral1891);
		*((t2**)(t2**)SZArrayLdElema(L_129, ((int32_t)132))) = (t2*)(t2*) &_stringLiteral1891;
		t221* L_130 = L_129;
		ArrayElementTypeCheck (L_130, (t2*) &_stringLiteral1892);
		*((t2**)(t2**)SZArrayLdElema(L_130, ((int32_t)133))) = (t2*)(t2*) &_stringLiteral1892;
		t221* L_131 = L_130;
		ArrayElementTypeCheck (L_131, (t2*) &_stringLiteral1893);
		*((t2**)(t2**)SZArrayLdElema(L_131, ((int32_t)134))) = (t2*)(t2*) &_stringLiteral1893;
		t221* L_132 = L_131;
		ArrayElementTypeCheck (L_132, (t2*) &_stringLiteral1894);
		*((t2**)(t2**)SZArrayLdElema(L_132, ((int32_t)135))) = (t2*)(t2*) &_stringLiteral1894;
		t221* L_133 = L_132;
		ArrayElementTypeCheck (L_133, (t2*) &_stringLiteral1895);
		*((t2**)(t2**)SZArrayLdElema(L_133, ((int32_t)136))) = (t2*)(t2*) &_stringLiteral1895;
		t221* L_134 = L_133;
		ArrayElementTypeCheck (L_134, (t2*) &_stringLiteral1896);
		*((t2**)(t2**)SZArrayLdElema(L_134, ((int32_t)137))) = (t2*)(t2*) &_stringLiteral1896;
		t221* L_135 = L_134;
		ArrayElementTypeCheck (L_135, (t2*) &_stringLiteral1897);
		*((t2**)(t2**)SZArrayLdElema(L_135, ((int32_t)138))) = (t2*)(t2*) &_stringLiteral1897;
		t221* L_136 = L_135;
		ArrayElementTypeCheck (L_136, (t2*) &_stringLiteral1898);
		*((t2**)(t2**)SZArrayLdElema(L_136, ((int32_t)139))) = (t2*)(t2*) &_stringLiteral1898;
		t221* L_137 = L_136;
		ArrayElementTypeCheck (L_137, (t2*) &_stringLiteral181);
		*((t2**)(t2**)SZArrayLdElema(L_137, ((int32_t)140))) = (t2*)(t2*) &_stringLiteral181;
		t221* L_138 = L_137;
		ArrayElementTypeCheck (L_138, (t2*) &_stringLiteral1899);
		*((t2**)(t2**)SZArrayLdElema(L_138, ((int32_t)141))) = (t2*)(t2*) &_stringLiteral1899;
		t221* L_139 = L_138;
		ArrayElementTypeCheck (L_139, (t2*) &_stringLiteral1900);
		*((t2**)(t2**)SZArrayLdElema(L_139, ((int32_t)142))) = (t2*)(t2*) &_stringLiteral1900;
		t221* L_140 = L_139;
		ArrayElementTypeCheck (L_140, (t2*) &_stringLiteral1901);
		*((t2**)(t2**)SZArrayLdElema(L_140, ((int32_t)143))) = (t2*)(t2*) &_stringLiteral1901;
		t221* L_141 = L_140;
		ArrayElementTypeCheck (L_141, (t2*) &_stringLiteral1902);
		*((t2**)(t2**)SZArrayLdElema(L_141, ((int32_t)144))) = (t2*)(t2*) &_stringLiteral1902;
		t221* L_142 = L_141;
		ArrayElementTypeCheck (L_142, (t2*) &_stringLiteral1903);
		*((t2**)(t2**)SZArrayLdElema(L_142, ((int32_t)145))) = (t2*)(t2*) &_stringLiteral1903;
		t221* L_143 = L_142;
		ArrayElementTypeCheck (L_143, (t2*) &_stringLiteral1904);
		*((t2**)(t2**)SZArrayLdElema(L_143, ((int32_t)146))) = (t2*)(t2*) &_stringLiteral1904;
		t221* L_144 = L_143;
		ArrayElementTypeCheck (L_144, (t2*) &_stringLiteral1905);
		*((t2**)(t2**)SZArrayLdElema(L_144, ((int32_t)147))) = (t2*)(t2*) &_stringLiteral1905;
		t221* L_145 = L_144;
		ArrayElementTypeCheck (L_145, (t2*) &_stringLiteral1906);
		*((t2**)(t2**)SZArrayLdElema(L_145, ((int32_t)148))) = (t2*)(t2*) &_stringLiteral1906;
		t221* L_146 = L_145;
		ArrayElementTypeCheck (L_146, (t2*) &_stringLiteral1907);
		*((t2**)(t2**)SZArrayLdElema(L_146, ((int32_t)149))) = (t2*)(t2*) &_stringLiteral1907;
		t221* L_147 = L_146;
		ArrayElementTypeCheck (L_147, (t2*) &_stringLiteral1908);
		*((t2**)(t2**)SZArrayLdElema(L_147, ((int32_t)150))) = (t2*)(t2*) &_stringLiteral1908;
		t221* L_148 = L_147;
		ArrayElementTypeCheck (L_148, (t2*) &_stringLiteral1909);
		*((t2**)(t2**)SZArrayLdElema(L_148, ((int32_t)151))) = (t2*)(t2*) &_stringLiteral1909;
		t221* L_149 = L_148;
		ArrayElementTypeCheck (L_149, (t2*) &_stringLiteral1910);
		*((t2**)(t2**)SZArrayLdElema(L_149, ((int32_t)152))) = (t2*)(t2*) &_stringLiteral1910;
		t221* L_150 = L_149;
		ArrayElementTypeCheck (L_150, (t2*) &_stringLiteral1911);
		*((t2**)(t2**)SZArrayLdElema(L_150, ((int32_t)153))) = (t2*)(t2*) &_stringLiteral1911;
		t221* L_151 = L_150;
		ArrayElementTypeCheck (L_151, (t2*) &_stringLiteral1912);
		*((t2**)(t2**)SZArrayLdElema(L_151, ((int32_t)154))) = (t2*)(t2*) &_stringLiteral1912;
		t221* L_152 = L_151;
		ArrayElementTypeCheck (L_152, (t2*) &_stringLiteral1913);
		*((t2**)(t2**)SZArrayLdElema(L_152, ((int32_t)155))) = (t2*)(t2*) &_stringLiteral1913;
		t221* L_153 = L_152;
		ArrayElementTypeCheck (L_153, (t2*) &_stringLiteral1914);
		*((t2**)(t2**)SZArrayLdElema(L_153, ((int32_t)156))) = (t2*)(t2*) &_stringLiteral1914;
		t221* L_154 = L_153;
		ArrayElementTypeCheck (L_154, (t2*) &_stringLiteral1915);
		*((t2**)(t2**)SZArrayLdElema(L_154, ((int32_t)157))) = (t2*)(t2*) &_stringLiteral1915;
		t221* L_155 = L_154;
		ArrayElementTypeCheck (L_155, (t2*) &_stringLiteral1916);
		*((t2**)(t2**)SZArrayLdElema(L_155, ((int32_t)158))) = (t2*)(t2*) &_stringLiteral1916;
		t221* L_156 = L_155;
		ArrayElementTypeCheck (L_156, (t2*) &_stringLiteral1917);
		*((t2**)(t2**)SZArrayLdElema(L_156, ((int32_t)159))) = (t2*)(t2*) &_stringLiteral1917;
		t221* L_157 = L_156;
		ArrayElementTypeCheck (L_157, (t2*) &_stringLiteral1918);
		*((t2**)(t2**)SZArrayLdElema(L_157, ((int32_t)160))) = (t2*)(t2*) &_stringLiteral1918;
		t221* L_158 = L_157;
		ArrayElementTypeCheck (L_158, (t2*) &_stringLiteral1919);
		*((t2**)(t2**)SZArrayLdElema(L_158, ((int32_t)161))) = (t2*)(t2*) &_stringLiteral1919;
		t221* L_159 = L_158;
		ArrayElementTypeCheck (L_159, (t2*) &_stringLiteral1920);
		*((t2**)(t2**)SZArrayLdElema(L_159, ((int32_t)162))) = (t2*)(t2*) &_stringLiteral1920;
		t221* L_160 = L_159;
		ArrayElementTypeCheck (L_160, (t2*) &_stringLiteral1921);
		*((t2**)(t2**)SZArrayLdElema(L_160, ((int32_t)163))) = (t2*)(t2*) &_stringLiteral1921;
		t221* L_161 = L_160;
		ArrayElementTypeCheck (L_161, (t2*) &_stringLiteral1922);
		*((t2**)(t2**)SZArrayLdElema(L_161, ((int32_t)164))) = (t2*)(t2*) &_stringLiteral1922;
		t221* L_162 = L_161;
		ArrayElementTypeCheck (L_162, (t2*) &_stringLiteral1923);
		*((t2**)(t2**)SZArrayLdElema(L_162, ((int32_t)165))) = (t2*)(t2*) &_stringLiteral1923;
		t221* L_163 = L_162;
		ArrayElementTypeCheck (L_163, (t2*) &_stringLiteral1924);
		*((t2**)(t2**)SZArrayLdElema(L_163, ((int32_t)179))) = (t2*)(t2*) &_stringLiteral1924;
		t221* L_164 = L_163;
		ArrayElementTypeCheck (L_164, (t2*) &_stringLiteral1925);
		*((t2**)(t2**)SZArrayLdElema(L_164, ((int32_t)180))) = (t2*)(t2*) &_stringLiteral1925;
		t221* L_165 = L_164;
		ArrayElementTypeCheck (L_165, (t2*) &_stringLiteral1926);
		*((t2**)(t2**)SZArrayLdElema(L_165, ((int32_t)181))) = (t2*)(t2*) &_stringLiteral1926;
		t221* L_166 = L_165;
		ArrayElementTypeCheck (L_166, (t2*) &_stringLiteral1927);
		*((t2**)(t2**)SZArrayLdElema(L_166, ((int32_t)182))) = (t2*)(t2*) &_stringLiteral1927;
		t221* L_167 = L_166;
		ArrayElementTypeCheck (L_167, (t2*) &_stringLiteral1928);
		*((t2**)(t2**)SZArrayLdElema(L_167, ((int32_t)183))) = (t2*)(t2*) &_stringLiteral1928;
		t221* L_168 = L_167;
		ArrayElementTypeCheck (L_168, (t2*) &_stringLiteral1929);
		*((t2**)(t2**)SZArrayLdElema(L_168, ((int32_t)184))) = (t2*)(t2*) &_stringLiteral1929;
		t221* L_169 = L_168;
		ArrayElementTypeCheck (L_169, (t2*) &_stringLiteral1930);
		*((t2**)(t2**)SZArrayLdElema(L_169, ((int32_t)185))) = (t2*)(t2*) &_stringLiteral1930;
		t221* L_170 = L_169;
		ArrayElementTypeCheck (L_170, (t2*) &_stringLiteral1931);
		*((t2**)(t2**)SZArrayLdElema(L_170, ((int32_t)186))) = (t2*)(t2*) &_stringLiteral1931;
		t221* L_171 = L_170;
		ArrayElementTypeCheck (L_171, (t2*) &_stringLiteral1932);
		*((t2**)(t2**)SZArrayLdElema(L_171, ((int32_t)194))) = (t2*)(t2*) &_stringLiteral1932;
		t221* L_172 = L_171;
		ArrayElementTypeCheck (L_172, (t2*) &_stringLiteral1933);
		*((t2**)(t2**)SZArrayLdElema(L_172, ((int32_t)195))) = (t2*)(t2*) &_stringLiteral1933;
		t221* L_173 = L_172;
		ArrayElementTypeCheck (L_173, (t2*) &_stringLiteral1934);
		*((t2**)(t2**)SZArrayLdElema(L_173, ((int32_t)198))) = (t2*)(t2*) &_stringLiteral1934;
		t221* L_174 = L_173;
		ArrayElementTypeCheck (L_174, (t2*) &_stringLiteral1935);
		*((t2**)(t2**)SZArrayLdElema(L_174, ((int32_t)208))) = (t2*)(t2*) &_stringLiteral1935;
		t221* L_175 = L_174;
		ArrayElementTypeCheck (L_175, (t2*) &_stringLiteral1936);
		*((t2**)(t2**)SZArrayLdElema(L_175, ((int32_t)209))) = (t2*)(t2*) &_stringLiteral1936;
		t221* L_176 = L_175;
		ArrayElementTypeCheck (L_176, (t2*) &_stringLiteral1937);
		*((t2**)(t2**)SZArrayLdElema(L_176, ((int32_t)210))) = (t2*)(t2*) &_stringLiteral1937;
		t221* L_177 = L_176;
		ArrayElementTypeCheck (L_177, (t2*) &_stringLiteral1938);
		*((t2**)(t2**)SZArrayLdElema(L_177, ((int32_t)211))) = (t2*)(t2*) &_stringLiteral1938;
		t221* L_178 = L_177;
		ArrayElementTypeCheck (L_178, (t2*) &_stringLiteral1939);
		*((t2**)(t2**)SZArrayLdElema(L_178, ((int32_t)212))) = (t2*)(t2*) &_stringLiteral1939;
		t221* L_179 = L_178;
		ArrayElementTypeCheck (L_179, (t2*) &_stringLiteral1940);
		*((t2**)(t2**)SZArrayLdElema(L_179, ((int32_t)213))) = (t2*)(t2*) &_stringLiteral1940;
		t221* L_180 = L_179;
		ArrayElementTypeCheck (L_180, (t2*) &_stringLiteral1941);
		*((t2**)(t2**)SZArrayLdElema(L_180, ((int32_t)214))) = (t2*)(t2*) &_stringLiteral1941;
		t221* L_181 = L_180;
		ArrayElementTypeCheck (L_181, (t2*) &_stringLiteral1942);
		*((t2**)(t2**)SZArrayLdElema(L_181, ((int32_t)215))) = (t2*)(t2*) &_stringLiteral1942;
		t221* L_182 = L_181;
		ArrayElementTypeCheck (L_182, (t2*) &_stringLiteral1943);
		*((t2**)(t2**)SZArrayLdElema(L_182, ((int32_t)216))) = (t2*)(t2*) &_stringLiteral1943;
		t221* L_183 = L_182;
		ArrayElementTypeCheck (L_183, (t2*) &_stringLiteral1944);
		*((t2**)(t2**)SZArrayLdElema(L_183, ((int32_t)217))) = (t2*)(t2*) &_stringLiteral1944;
		t221* L_184 = L_183;
		ArrayElementTypeCheck (L_184, (t2*) &_stringLiteral1945);
		*((t2**)(t2**)SZArrayLdElema(L_184, ((int32_t)218))) = (t2*)(t2*) &_stringLiteral1945;
		t221* L_185 = L_184;
		ArrayElementTypeCheck (L_185, (t2*) &_stringLiteral1946);
		*((t2**)(t2**)SZArrayLdElema(L_185, ((int32_t)219))) = (t2*)(t2*) &_stringLiteral1946;
		t221* L_186 = L_185;
		ArrayElementTypeCheck (L_186, (t2*) &_stringLiteral1947);
		*((t2**)(t2**)SZArrayLdElema(L_186, ((int32_t)220))) = (t2*)(t2*) &_stringLiteral1947;
		t221* L_187 = L_186;
		ArrayElementTypeCheck (L_187, (t2*) &_stringLiteral1948);
		*((t2**)(t2**)SZArrayLdElema(L_187, ((int32_t)221))) = (t2*)(t2*) &_stringLiteral1948;
		t221* L_188 = L_187;
		ArrayElementTypeCheck (L_188, (t2*) &_stringLiteral1949);
		*((t2**)(t2**)SZArrayLdElema(L_188, ((int32_t)222))) = (t2*)(t2*) &_stringLiteral1949;
		t221* L_189 = L_188;
		ArrayElementTypeCheck (L_189, (t2*) &_stringLiteral1950);
		*((t2**)(t2**)SZArrayLdElema(L_189, ((int32_t)223))) = (t2*)(t2*) &_stringLiteral1950;
		t221* L_190 = L_189;
		ArrayElementTypeCheck (L_190, (t2*) &_stringLiteral1951);
		*((t2**)(t2**)SZArrayLdElema(L_190, ((int32_t)224))) = (t2*)(t2*) &_stringLiteral1951;
		t221* L_191 = L_190;
		ArrayElementTypeCheck (L_191, (t2*) &_stringLiteral1952);
		*((t2**)(t2**)SZArrayLdElema(L_191, ((int32_t)248))) = (t2*)(t2*) &_stringLiteral1952;
		t221* L_192 = L_191;
		ArrayElementTypeCheck (L_192, (t2*) &_stringLiteral1953);
		*((t2**)(t2**)SZArrayLdElema(L_192, ((int32_t)249))) = (t2*)(t2*) &_stringLiteral1953;
		t221* L_193 = L_192;
		ArrayElementTypeCheck (L_193, (t2*) &_stringLiteral1954);
		*((t2**)(t2**)SZArrayLdElema(L_193, ((int32_t)250))) = (t2*)(t2*) &_stringLiteral1954;
		t221* L_194 = L_193;
		ArrayElementTypeCheck (L_194, (t2*) &_stringLiteral1955);
		*((t2**)(t2**)SZArrayLdElema(L_194, ((int32_t)251))) = (t2*)(t2*) &_stringLiteral1955;
		t221* L_195 = L_194;
		ArrayElementTypeCheck (L_195, (t2*) &_stringLiteral1956);
		*((t2**)(t2**)SZArrayLdElema(L_195, ((int32_t)252))) = (t2*)(t2*) &_stringLiteral1956;
		t221* L_196 = L_195;
		ArrayElementTypeCheck (L_196, (t2*) &_stringLiteral1957);
		*((t2**)(t2**)SZArrayLdElema(L_196, ((int32_t)253))) = (t2*)(t2*) &_stringLiteral1957;
		t221* L_197 = L_196;
		ArrayElementTypeCheck (L_197, (t2*) &_stringLiteral1958);
		*((t2**)(t2**)SZArrayLdElema(L_197, ((int32_t)254))) = (t2*)(t2*) &_stringLiteral1958;
		t221* L_198 = L_197;
		ArrayElementTypeCheck (L_198, (t2*) &_stringLiteral1959);
		*((t2**)(t2**)SZArrayLdElema(L_198, ((int32_t)255))) = (t2*)(t2*) &_stringLiteral1959;
		t221* L_199 = L_198;
		ArrayElementTypeCheck (L_199, (t2*) &_stringLiteral1960);
		*((t2**)(t2**)SZArrayLdElema(L_199, ((int32_t)256))) = (t2*)(t2*) &_stringLiteral1960;
		t221* L_200 = L_199;
		ArrayElementTypeCheck (L_200, (t2*) &_stringLiteral1961);
		*((t2**)(t2**)SZArrayLdElema(L_200, ((int32_t)257))) = (t2*)(t2*) &_stringLiteral1961;
		t221* L_201 = L_200;
		ArrayElementTypeCheck (L_201, (t2*) &_stringLiteral1962);
		*((t2**)(t2**)SZArrayLdElema(L_201, ((int32_t)258))) = (t2*)(t2*) &_stringLiteral1962;
		t221* L_202 = L_201;
		ArrayElementTypeCheck (L_202, (t2*) &_stringLiteral1963);
		*((t2**)(t2**)SZArrayLdElema(L_202, ((int32_t)259))) = (t2*)(t2*) &_stringLiteral1963;
		t221* L_203 = L_202;
		ArrayElementTypeCheck (L_203, (t2*) &_stringLiteral1964);
		*((t2**)(t2**)SZArrayLdElema(L_203, ((int32_t)260))) = (t2*)(t2*) &_stringLiteral1964;
		t221* L_204 = L_203;
		ArrayElementTypeCheck (L_204, (t2*) &_stringLiteral1965);
		*((t2**)(t2**)SZArrayLdElema(L_204, ((int32_t)261))) = (t2*)(t2*) &_stringLiteral1965;
		t221* L_205 = L_204;
		ArrayElementTypeCheck (L_205, (t2*) &_stringLiteral1966);
		*((t2**)(t2**)SZArrayLdElema(L_205, ((int32_t)262))) = (t2*)(t2*) &_stringLiteral1966;
		t221* L_206 = L_205;
		ArrayElementTypeCheck (L_206, (t2*) &_stringLiteral1967);
		*((t2**)(t2**)SZArrayLdElema(L_206, ((int32_t)263))) = (t2*)(t2*) &_stringLiteral1967;
		t221* L_207 = L_206;
		ArrayElementTypeCheck (L_207, (t2*) &_stringLiteral1968);
		*((t2**)(t2**)SZArrayLdElema(L_207, ((int32_t)265))) = (t2*)(t2*) &_stringLiteral1968;
		t221* L_208 = L_207;
		ArrayElementTypeCheck (L_208, (t2*) &_stringLiteral1969);
		*((t2**)(t2**)SZArrayLdElema(L_208, ((int32_t)266))) = (t2*)(t2*) &_stringLiteral1969;
		t221* L_209 = L_208;
		ArrayElementTypeCheck (L_209, (t2*) &_stringLiteral1970);
		*((t2**)(t2**)SZArrayLdElema(L_209, ((int32_t)267))) = (t2*)(t2*) &_stringLiteral1970;
		t221* L_210 = L_209;
		ArrayElementTypeCheck (L_210, (t2*) &_stringLiteral1971);
		*((t2**)(t2**)SZArrayLdElema(L_210, ((int32_t)268))) = (t2*)(t2*) &_stringLiteral1971;
		t221* L_211 = L_210;
		ArrayElementTypeCheck (L_211, (t2*) &_stringLiteral1972);
		*((t2**)(t2**)SZArrayLdElema(L_211, ((int32_t)269))) = (t2*)(t2*) &_stringLiteral1972;
		t221* L_212 = L_211;
		ArrayElementTypeCheck (L_212, (t2*) &_stringLiteral1973);
		*((t2**)(t2**)SZArrayLdElema(L_212, ((int32_t)270))) = (t2*)(t2*) &_stringLiteral1973;
		t221* L_213 = L_212;
		ArrayElementTypeCheck (L_213, (t2*) &_stringLiteral1974);
		*((t2**)(t2**)SZArrayLdElema(L_213, ((int32_t)271))) = (t2*)(t2*) &_stringLiteral1974;
		t221* L_214 = L_213;
		ArrayElementTypeCheck (L_214, (t2*) &_stringLiteral1975);
		*((t2**)(t2**)SZArrayLdElema(L_214, ((int32_t)273))) = (t2*)(t2*) &_stringLiteral1975;
		t221* L_215 = L_214;
		ArrayElementTypeCheck (L_215, (t2*) &_stringLiteral1976);
		*((t2**)(t2**)SZArrayLdElema(L_215, ((int32_t)274))) = (t2*)(t2*) &_stringLiteral1976;
		t221* L_216 = L_215;
		ArrayElementTypeCheck (L_216, (t2*) &_stringLiteral1977);
		*((t2**)(t2**)SZArrayLdElema(L_216, ((int32_t)275))) = (t2*)(t2*) &_stringLiteral1977;
		t221* L_217 = L_216;
		ArrayElementTypeCheck (L_217, (t2*) &_stringLiteral1978);
		*((t2**)(t2**)SZArrayLdElema(L_217, ((int32_t)276))) = (t2*)(t2*) &_stringLiteral1978;
		t221* L_218 = L_217;
		ArrayElementTypeCheck (L_218, (t2*) &_stringLiteral1979);
		*((t2**)(t2**)SZArrayLdElema(L_218, ((int32_t)277))) = (t2*)(t2*) &_stringLiteral1979;
		t221* L_219 = L_218;
		ArrayElementTypeCheck (L_219, (t2*) &_stringLiteral1980);
		*((t2**)(t2**)SZArrayLdElema(L_219, ((int32_t)278))) = (t2*)(t2*) &_stringLiteral1980;
		t221* L_220 = L_219;
		ArrayElementTypeCheck (L_220, (t2*) &_stringLiteral1981);
		*((t2**)(t2**)SZArrayLdElema(L_220, ((int32_t)279))) = (t2*)(t2*) &_stringLiteral1981;
		t221* L_221 = L_220;
		ArrayElementTypeCheck (L_221, (t2*) &_stringLiteral1982);
		*((t2**)(t2**)SZArrayLdElema(L_221, ((int32_t)280))) = (t2*)(t2*) &_stringLiteral1982;
		t221* L_222 = L_221;
		ArrayElementTypeCheck (L_222, (t2*) &_stringLiteral1983);
		*((t2**)(t2**)SZArrayLdElema(L_222, ((int32_t)282))) = (t2*)(t2*) &_stringLiteral1983;
		t221* L_223 = L_222;
		ArrayElementTypeCheck (L_223, (t2*) &_stringLiteral1984);
		*((t2**)(t2**)SZArrayLdElema(L_223, ((int32_t)284))) = (t2*)(t2*) &_stringLiteral1984;
		t221* L_224 = L_223;
		ArrayElementTypeCheck (L_224, (t2*) &_stringLiteral1985);
		*((t2**)(t2**)SZArrayLdElema(L_224, ((int32_t)285))) = (t2*)(t2*) &_stringLiteral1985;
		t221* L_225 = L_224;
		ArrayElementTypeCheck (L_225, (t2*) &_stringLiteral1986);
		*((t2**)(t2**)SZArrayLdElema(L_225, ((int32_t)286))) = (t2*)(t2*) &_stringLiteral1986;
		((t1779_SFs*)InitializedTypeInfo(&t1779_TI)->static_fields)->f0 = L_225;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m9327_MI;
extern "C" void m9327 (t9 * __this , MethodInfo* method)
{
	{
		t1768  L_0 = {0};
		m9315(&L_0, ((int32_t)1179903), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f0 = L_0;
		t1768  L_1 = {0};
		m9315(&L_1, ((int32_t)1180159), ((int32_t)17106177), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f1 = L_1;
		t1768  L_2 = {0};
		m9315(&L_2, ((int32_t)1245951), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f2 = L_2;
		t1768  L_3 = {0};
		m9315(&L_3, ((int32_t)1246207), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f3 = L_3;
		t1768  L_4 = {0};
		m9315(&L_4, ((int32_t)1246463), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f4 = L_4;
		t1768  L_5 = {0};
		m9315(&L_5, ((int32_t)1246719), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f5 = L_5;
		t1768  L_6 = {0};
		m9315(&L_6, ((int32_t)1246975), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f6 = L_6;
		t1768  L_7 = {0};
		m9315(&L_7, ((int32_t)1247231), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f7 = L_7;
		t1768  L_8 = {0};
		m9315(&L_8, ((int32_t)1247487), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f8 = L_8;
		t1768  L_9 = {0};
		m9315(&L_9, ((int32_t)1247743), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f9 = L_9;
		t1768  L_10 = {0};
		m9315(&L_10, ((int32_t)17959679), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f10 = L_10;
		t1768  L_11 = {0};
		m9315(&L_11, ((int32_t)17959935), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f11 = L_11;
		t1768  L_12 = {0};
		m9315(&L_12, ((int32_t)17960191), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f12 = L_12;
		t1768  L_13 = {0};
		m9315(&L_13, ((int32_t)17960447), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f13 = L_13;
		t1768  L_14 = {0};
		m9315(&L_14, ((int32_t)1249023), ((int32_t)85065985), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f14 = L_14;
		t1768  L_15 = {0};
		m9315(&L_15, ((int32_t)1380351), ((int32_t)85065985), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f15 = L_15;
		t1768  L_16 = {0};
		m9315(&L_16, ((int32_t)17961215), ((int32_t)85065985), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f16 = L_16;
		t1768  L_17 = {0};
		m9315(&L_17, ((int32_t)1249791), ((int32_t)85065985), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f17 = L_17;
		t1768  L_18 = {0};
		m9315(&L_18, ((int32_t)1381119), ((int32_t)85065985), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f18 = L_18;
		t1768  L_19 = {0};
		m9315(&L_19, ((int32_t)17961983), ((int32_t)85065985), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f19 = L_19;
		t1768  L_20 = {0};
		m9315(&L_20, ((int32_t)1643775), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f20 = L_20;
		t1768  L_21 = {0};
		m9315(&L_21, ((int32_t)1381887), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f21 = L_21;
		t1768  L_22 = {0};
		m9315(&L_22, ((int32_t)1382143), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f22 = L_22;
		t1768  L_23 = {0};
		m9315(&L_23, ((int32_t)1382399), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f23 = L_23;
		t1768  L_24 = {0};
		m9315(&L_24, ((int32_t)1382655), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f24 = L_24;
		t1768  L_25 = {0};
		m9315(&L_25, ((int32_t)1382911), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f25 = L_25;
		t1768  L_26 = {0};
		m9315(&L_26, ((int32_t)1383167), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f26 = L_26;
		t1768  L_27 = {0};
		m9315(&L_27, ((int32_t)1383423), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f27 = L_27;
		t1768  L_28 = {0};
		m9315(&L_28, ((int32_t)1383679), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f28 = L_28;
		t1768  L_29 = {0};
		m9315(&L_29, ((int32_t)1383935), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f29 = L_29;
		t1768  L_30 = {0};
		m9315(&L_30, ((int32_t)1384191), ((int32_t)84214017), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f30 = L_30;
		t1768  L_31 = {0};
		m9315(&L_31, ((int32_t)1384447), ((int32_t)84934913), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f31 = L_31;
		t1768  L_32 = {0};
		m9315(&L_32, ((int32_t)1384703), ((int32_t)84018433), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f32 = L_32;
		t1768  L_33 = {0};
		m9315(&L_33, ((int32_t)1450495), ((int32_t)84083969), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f33 = L_33;
		t1768  L_34 = {0};
		m9315(&L_34, ((int32_t)1516287), ((int32_t)85001473), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f34 = L_34;
		t1768  L_35 = {0};
		m9315(&L_35, ((int32_t)1582079), ((int32_t)84346113), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f35 = L_35;
		t1768  L_36 = {0};
		m9315(&L_36, ((int32_t)18097663), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f36 = L_36;
		t1768  L_37 = {0};
		m9315(&L_37, ((int32_t)17966847), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f37 = L_37;
		t1768  L_38 = {0};
		m9315(&L_38, ((int32_t)1189887), ((int32_t)33817857), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f38 = L_38;
		t1768  L_39 = {0};
		m9315(&L_39, ((int32_t)437987583), ((int32_t)33817857), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f39 = L_39;
		t1768  L_40 = {0};
		m9315(&L_40, ((int32_t)437987839), ((int32_t)34145537), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f40 = L_40;
		t1768  L_41 = {0};
		m9315(&L_41, ((int32_t)437398271), ((int32_t)117769473), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f41 = L_41;
		t1768  L_42 = {0};
		m9315(&L_42, ((int32_t)1190911), ((int32_t)983297), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f42 = L_42;
		t1768  L_43 = {0};
		m9315(&L_43, ((int32_t)51522815), ((int32_t)51314945), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f43 = L_43;
		t1768  L_44 = {0};
		m9315(&L_44, ((int32_t)51523071), ((int32_t)51314945), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f44 = L_44;
		t1768  L_45 = {0};
		m9315(&L_45, ((int32_t)34746111), ((int32_t)51314945), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f45 = L_45;
		t1768  L_46 = {0};
		m9315(&L_46, ((int32_t)34746367), ((int32_t)51314945), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f46 = L_46;
		t1768  L_47 = {0};
		m9315(&L_47, ((int32_t)34746623), ((int32_t)51314945), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f47 = L_47;
		t1768  L_48 = {0};
		m9315(&L_48, ((int32_t)34746879), ((int32_t)51314945), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f48 = L_48;
		t1768  L_49 = {0};
		m9315(&L_49, ((int32_t)34747135), ((int32_t)51314945), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f49 = L_49;
		t1768  L_50 = {0};
		m9315(&L_50, ((int32_t)34747391), ((int32_t)51314945), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f50 = L_50;
		t1768  L_51 = {0};
		m9315(&L_51, ((int32_t)34747647), ((int32_t)51314945), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f51 = L_51;
		t1768  L_52 = {0};
		m9315(&L_52, ((int32_t)34747903), ((int32_t)51314945), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f52 = L_52;
		t1768  L_53 = {0};
		m9315(&L_53, ((int32_t)34748159), ((int32_t)51314945), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f53 = L_53;
		t1768  L_54 = {0};
		m9315(&L_54, ((int32_t)34748415), ((int32_t)51314945), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f54 = L_54;
		t1768  L_55 = {0};
		m9315(&L_55, ((int32_t)1194239), ((int32_t)1281), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f55 = L_55;
		t1768  L_56 = {0};
		m9315(&L_56, ((int32_t)51526143), ((int32_t)50332929), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f56 = L_56;
		t1768  L_57 = {0};
		m9315(&L_57, ((int32_t)51526399), ((int32_t)50332929), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f57 = L_57;
		t1768  L_58 = {0};
		m9315(&L_58, ((int32_t)34749439), ((int32_t)50331905), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f58 = L_58;
		t1768  L_59 = {0};
		m9315(&L_59, ((int32_t)34749695), ((int32_t)50331905), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f59 = L_59;
		t1768  L_60 = {0};
		m9315(&L_60, ((int32_t)34749951), ((int32_t)50331905), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f60 = L_60;
		t1768  L_61 = {0};
		m9315(&L_61, ((int32_t)34750207), ((int32_t)50331905), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f61 = L_61;
		t1768  L_62 = {0};
		m9315(&L_62, ((int32_t)34750463), ((int32_t)50331905), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f62 = L_62;
		t1768  L_63 = {0};
		m9315(&L_63, ((int32_t)34750719), ((int32_t)50331905), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f63 = L_63;
		t1768  L_64 = {0};
		m9315(&L_64, ((int32_t)34750975), ((int32_t)50331905), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f64 = L_64;
		t1768  L_65 = {0};
		m9315(&L_65, ((int32_t)34751231), ((int32_t)50331905), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f65 = L_65;
		t1768  L_66 = {0};
		m9315(&L_66, ((int32_t)34751487), ((int32_t)50331905), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f66 = L_66;
		t1768  L_67 = {0};
		m9315(&L_67, ((int32_t)34751743), ((int32_t)50331905), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f67 = L_67;
		t1768  L_68 = {0};
		m9315(&L_68, ((int32_t)51529215), ((int32_t)51053825), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f68 = L_68;
		t1768  L_69 = {0};
		m9315(&L_69, ((int32_t)51726079), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f69 = L_69;
		t1768  L_70 = {0};
		m9315(&L_70, ((int32_t)51726335), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f70 = L_70;
		t1768  L_71 = {0};
		m9315(&L_71, ((int32_t)51726591), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f71 = L_71;
		t1768  L_72 = {0};
		m9315(&L_72, ((int32_t)51726847), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f72 = L_72;
		t1768  L_73 = {0};
		m9315(&L_73, ((int32_t)51727103), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f73 = L_73;
		t1768  L_74 = {0};
		m9315(&L_74, ((int32_t)51727359), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f74 = L_74;
		t1768  L_75 = {0};
		m9315(&L_75, ((int32_t)51793151), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f75 = L_75;
		t1768  L_76 = {0};
		m9315(&L_76, ((int32_t)51727871), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f76 = L_76;
		t1768  L_77 = {0};
		m9315(&L_77, ((int32_t)51859199), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f77 = L_77;
		t1768  L_78 = {0};
		m9315(&L_78, ((int32_t)51924991), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f78 = L_78;
		t1768  L_79 = {0};
		m9315(&L_79, ((int32_t)51990783), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f79 = L_79;
		t1768  L_80 = {0};
		m9315(&L_80, ((int32_t)85086719), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f80 = L_80;
		t1768  L_81 = {0};
		m9315(&L_81, ((int32_t)85086975), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f81 = L_81;
		t1768  L_82 = {0};
		m9315(&L_82, ((int32_t)85087231), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f82 = L_82;
		t1768  L_83 = {0};
		m9315(&L_83, ((int32_t)85087487), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f83 = L_83;
		t1768  L_84 = {0};
		m9315(&L_84, ((int32_t)101864959), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f84 = L_84;
		t1768  L_85 = {0};
		m9315(&L_85, ((int32_t)135419647), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f85 = L_85;
		t1768  L_86 = {0};
		m9315(&L_86, ((int32_t)152197119), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f86 = L_86;
		t1768  L_87 = {0};
		m9315(&L_87, ((int32_t)34822399), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f87 = L_87;
		t1768  L_88 = {0};
		m9315(&L_88, ((int32_t)34822655), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f88 = L_88;
		t1768  L_89 = {0};
		m9315(&L_89, ((int32_t)34822911), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f89 = L_89;
		t1768  L_90 = {0};
		m9315(&L_90, ((int32_t)34823167), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f90 = L_90;
		t1768  L_91 = {0};
		m9315(&L_91, ((int32_t)34823423), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f91 = L_91;
		t1768  L_92 = {0};
		m9315(&L_92, ((int32_t)34823679), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f92 = L_92;
		t1768  L_93 = {0};
		m9315(&L_93, ((int32_t)34823935), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f93 = L_93;
		t1768  L_94 = {0};
		m9315(&L_94, ((int32_t)34824191), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f94 = L_94;
		t1768  L_95 = {0};
		m9315(&L_95, ((int32_t)34824447), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f95 = L_95;
		t1768  L_96 = {0};
		m9315(&L_96, ((int32_t)34824703), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f96 = L_96;
		t1768  L_97 = {0};
		m9315(&L_97, ((int32_t)34824959), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f97 = L_97;
		t1768  L_98 = {0};
		m9315(&L_98, ((int32_t)34825215), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f98 = L_98;
		t1768  L_99 = {0};
		m9315(&L_99, ((int32_t)34825471), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f99 = L_99;
		t1768  L_100 = {0};
		m9315(&L_100, ((int32_t)18048511), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f100 = L_100;
		t1768  L_101 = {0};
		m9315(&L_101, ((int32_t)18048767), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f101 = L_101;
		t1768  L_102 = {0};
		m9315(&L_102, ((int32_t)18180095), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f102 = L_102;
		t1768  L_103 = {0};
		m9315(&L_103, ((int32_t)18180351), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f103 = L_103;
		t1768  L_104 = {0};
		m9315(&L_104, ((int32_t)18180607), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f104 = L_104;
		t1768  L_105 = {0};
		m9315(&L_105, ((int32_t)18246399), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f105 = L_105;
		t1768  L_106 = {0};
		m9315(&L_106, ((int32_t)18312191), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f106 = L_106;
		t1768  L_107 = {0};
		m9315(&L_107, ((int32_t)18377983), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f107 = L_107;
		t1768  L_108 = {0};
		m9315(&L_108, ((int32_t)18181631), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f108 = L_108;
		t1768  L_109 = {0};
		m9315(&L_109, ((int32_t)18247423), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f109 = L_109;
		t1768  L_110 = {0};
		m9315(&L_110, ((int32_t)438005759), ((int32_t)33817345), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f110 = L_110;
		t1768  L_111 = {0};
		m9315(&L_111, ((int32_t)85094655), ((int32_t)84738817), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f111 = L_111;
		t1768  L_112 = {0};
		m9315(&L_112, ((int32_t)51606015), ((int32_t)84738817), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f112 = L_112;
		t1768  L_113 = {0};
		m9315(&L_113, ((int32_t)1667839), ((int32_t)84542209), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f113 = L_113;
		t1768  L_114 = {0};
		m9315(&L_114, ((int32_t)437875711), ((int32_t)33817345), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f114 = L_114;
		t1768  L_115 = {0};
		m9315(&L_115, ((int32_t)169440511), ((int32_t)84738817), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f115 = L_115;
		t1768  L_116 = {0};
		m9315(&L_116, ((int32_t)169178623), ((int32_t)84738817), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f116 = L_116;
		t1768  L_117 = {0};
		m9315(&L_117, ((int32_t)18380543), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f117 = L_117;
		t1768  L_118 = {0};
		m9315(&L_118, ((int32_t)169179647), ((int32_t)84739329), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f118 = L_118;
		t1768  L_119 = {0};
		m9315(&L_119, ((int32_t)168983295), ((int32_t)134546177), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f119 = L_119;
		t1768  L_120 = {0};
		m9315(&L_120, ((int32_t)169049087), ((int32_t)83952385), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f120 = L_120;
		t1768  L_121 = {0};
		m9315(&L_121, ((int32_t)169180415), ((int32_t)83952385), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f121 = L_121;
		t1768  L_122 = {0};
		m9315(&L_122, ((int32_t)185761279), ((int32_t)83952385), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f122 = L_122;
		t1768  L_123 = {0};
		m9315(&L_123, ((int32_t)1277695), ((int32_t)83952385), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f123 = L_123;
		t1768  L_124 = {0};
		m9315(&L_124, ((int32_t)1409023), ((int32_t)83952385), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f124 = L_124;
		t1768  L_125 = {0};
		m9315(&L_125, ((int32_t)17989887), ((int32_t)83952385), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f125 = L_125;
		t1768  L_126 = {0};
		m9315(&L_126, ((int32_t)68321791), ((int32_t)84739329), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f126 = L_126;
		t1768  L_127 = {0};
		m9315(&L_127, ((int32_t)18187007), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f127 = L_127;
		t1768  L_128 = {0};
		m9315(&L_128, ((int32_t)18187263), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f128 = L_128;
		t1768  L_129 = {0};
		m9315(&L_129, ((int32_t)18187519), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f129 = L_129;
		t1768  L_130 = {0};
		m9315(&L_130, ((int32_t)18253311), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f130 = L_130;
		t1768  L_131 = {0};
		m9315(&L_131, ((int32_t)18188031), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f131 = L_131;
		t1768  L_132 = {0};
		m9315(&L_132, ((int32_t)18188287), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f132 = L_132;
		t1768  L_133 = {0};
		m9315(&L_133, ((int32_t)18188543), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f133 = L_133;
		t1768  L_134 = {0};
		m9315(&L_134, ((int32_t)18254335), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f134 = L_134;
		t1768  L_135 = {0};
		m9315(&L_135, ((int32_t)18189055), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f135 = L_135;
		t1768  L_136 = {0};
		m9315(&L_136, ((int32_t)18189311), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f136 = L_136;
		t1768  L_137 = {0};
		m9315(&L_137, ((int32_t)18451711), ((int32_t)84739329), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f137 = L_137;
		t1768  L_138 = {0};
		m9315(&L_138, ((int32_t)52006399), ((int32_t)84738817), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f138 = L_138;
		t1768  L_139 = {0};
		m9315(&L_139, ((int32_t)169185023), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f139 = L_139;
		t1768  L_140 = {0};
		m9315(&L_140, ((int32_t)202739711), ((int32_t)84738817), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f140 = L_140;
		t1768  L_141 = {0};
		m9315(&L_141, ((int32_t)202739967), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f141 = L_141;
		t1768  L_142 = {0};
		m9315(&L_142, ((int32_t)202740223), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f142 = L_142;
		t1768  L_143 = {0};
		m9315(&L_143, ((int32_t)202740479), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f143 = L_143;
		t1768  L_144 = {0};
		m9315(&L_144, ((int32_t)202740735), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f144 = L_144;
		t1768  L_145 = {0};
		m9315(&L_145, ((int32_t)202740991), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f145 = L_145;
		t1768  L_146 = {0};
		m9315(&L_146, ((int32_t)202741247), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f146 = L_146;
		t1768  L_147 = {0};
		m9315(&L_147, ((int32_t)202807039), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f147 = L_147;
		t1768  L_148 = {0};
		m9315(&L_148, ((int32_t)202741759), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f148 = L_148;
		t1768  L_149 = {0};
		m9315(&L_149, ((int32_t)202873087), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f149 = L_149;
		t1768  L_150 = {0};
		m9315(&L_150, ((int32_t)202938879), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f150 = L_150;
		t1768  L_151 = {0};
		m9315(&L_151, ((int32_t)203004671), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f151 = L_151;
		t1768  L_152 = {0};
		m9315(&L_152, ((int32_t)219323391), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f152 = L_152;
		t1768  L_153 = {0};
		m9315(&L_153, ((int32_t)219323647), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f153 = L_153;
		t1768  L_154 = {0};
		m9315(&L_154, ((int32_t)219323903), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f154 = L_154;
		t1768  L_155 = {0};
		m9315(&L_155, ((int32_t)219324159), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f155 = L_155;
		t1768  L_156 = {0};
		m9315(&L_156, ((int32_t)236101631), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f156 = L_156;
		t1768  L_157 = {0};
		m9315(&L_157, ((int32_t)252879103), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f157 = L_157;
		t1768  L_158 = {0};
		m9315(&L_158, ((int32_t)269656575), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f158 = L_158;
		t1768  L_159 = {0};
		m9315(&L_159, ((int32_t)286434047), ((int32_t)84214529), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f159 = L_159;
		t1768  L_160 = {0};
		m9315(&L_160, ((int32_t)202613759), ((int32_t)84738817), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f160 = L_160;
		t1768  L_161 = {0};
		m9315(&L_161, ((int32_t)470983935), ((int32_t)84738817), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f161 = L_161;
		t1768  L_162 = {0};
		m9315(&L_162, ((int32_t)169059839), ((int32_t)84738817), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f162 = L_162;
		t1768  L_163 = {0};
		m9315(&L_163, ((int32_t)18199551), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f163 = L_163;
		t1768  L_164 = {0};
		m9315(&L_164, ((int32_t)18199807), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f164 = L_164;
		t1768  L_165 = {0};
		m9315(&L_165, ((int32_t)18200063), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f165 = L_165;
		t1768  L_166 = {0};
		m9315(&L_166, ((int32_t)18200319), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f166 = L_166;
		t1768  L_167 = {0};
		m9315(&L_167, ((int32_t)18200575), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f167 = L_167;
		t1768  L_168 = {0};
		m9315(&L_168, ((int32_t)18200831), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f168 = L_168;
		t1768  L_169 = {0};
		m9315(&L_169, ((int32_t)18266623), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f169 = L_169;
		t1768  L_170 = {0};
		m9315(&L_170, ((int32_t)18266879), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f170 = L_170;
		t1768  L_171 = {0};
		m9315(&L_171, ((int32_t)18203391), ((int32_t)84739329), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f171 = L_171;
		t1768  L_172 = {0};
		m9315(&L_172, ((int32_t)18400255), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f172 = L_172;
		t1768  L_173 = {0};
		m9315(&L_173, ((int32_t)51627775), ((int32_t)84739329), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f173 = L_173;
		t1768  L_174 = {0};
		m9315(&L_174, ((int32_t)1429759), ((int32_t)84673793), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f174 = L_174;
		t1768  L_175 = {0};
		m9315(&L_175, ((int32_t)18207231), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f175 = L_175;
		t1768  L_176 = {0};
		m9315(&L_176, ((int32_t)18207487), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f176 = L_176;
		t1768  L_177 = {0};
		m9315(&L_177, ((int32_t)18207743), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f177 = L_177;
		t1768  L_178 = {0};
		m9315(&L_178, ((int32_t)18207999), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f178 = L_178;
		t1768  L_179 = {0};
		m9315(&L_179, ((int32_t)18208255), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f179 = L_179;
		t1768  L_180 = {0};
		m9315(&L_180, ((int32_t)34854655), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f180 = L_180;
		t1768  L_181 = {0};
		m9315(&L_181, ((int32_t)34854911), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f181 = L_181;
		t1768  L_182 = {0};
		m9315(&L_182, ((int32_t)34855167), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f182 = L_182;
		t1768  L_183 = {0};
		m9315(&L_183, ((int32_t)34855423), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f183 = L_183;
		t1768  L_184 = {0};
		m9315(&L_184, ((int32_t)34855679), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f184 = L_184;
		t1768  L_185 = {0};
		m9315(&L_185, ((int32_t)34855935), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f185 = L_185;
		t1768  L_186 = {0};
		m9315(&L_186, ((int32_t)1236223), ((int32_t)117769473), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f186 = L_186;
		t1768  L_187 = {0};
		m9315(&L_187, ((int32_t)1236479), ((int32_t)1281), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f187 = L_187;
		t1768  L_188 = {0};
		m9315(&L_188, ((int32_t)1236735), ((int32_t)984321), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f188 = L_188;
		t1768  L_189 = {0};
		m9315(&L_189, ((int32_t)85123071), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f189 = L_189;
		t1768  L_190 = {0};
		m9315(&L_190, ((int32_t)18211071), ((int32_t)84215041), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f190 = L_190;
		t1768  L_191 = {0};
		m9315(&L_191, ((int32_t)1243391), ((int32_t)67437057), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f191 = L_191;
		t1768  L_192 = {0};
		m9315(&L_192, ((int32_t)1243647), ((int32_t)67437057), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f192 = L_192;
		t1768  L_193 = {0};
		m9315(&L_193, ((int32_t)1243903), ((int32_t)67437057), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f193 = L_193;
		t1768  L_194 = {0};
		m9315(&L_194, ((int32_t)1244159), ((int32_t)67437057), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f194 = L_194;
		t1768  L_195 = {0};
		m9315(&L_195, ((int32_t)1244415), ((int32_t)67437057), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f195 = L_195;
		t1768  L_196 = {0};
		m9315(&L_196, ((int32_t)1244671), ((int32_t)67437057), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f196 = L_196;
		t1768  L_197 = {0};
		m9315(&L_197, ((int32_t)1244927), ((int32_t)67437057), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f197 = L_197;
		t1768  L_198 = {0};
		m9315(&L_198, ((int32_t)1245183), ((int32_t)67437057), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f198 = L_198;
		t1768  L_199 = {0};
		m9315(&L_199, ((int32_t)1376510), ((int32_t)84215042), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f199 = L_199;
		t1768  L_200 = {0};
		m9315(&L_200, ((int32_t)34931198), ((int32_t)84215042), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f200 = L_200;
		t1768  L_201 = {0};
		m9315(&L_201, ((int32_t)34931454), ((int32_t)84215042), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f201 = L_201;
		t1768  L_202 = {0};
		m9315(&L_202, ((int32_t)34931710), ((int32_t)84215042), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f202 = L_202;
		t1768  L_203 = {0};
		m9315(&L_203, ((int32_t)34931966), ((int32_t)84215042), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f203 = L_203;
		t1768  L_204 = {0};
		m9315(&L_204, ((int32_t)34932222), ((int32_t)84215042), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f204 = L_204;
		t1768  L_205 = {0};
		m9315(&L_205, ((int32_t)1378046), ((int32_t)84149506), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f205 = L_205;
		t1768  L_206 = {0};
		m9315(&L_206, ((int32_t)169150462), ((int32_t)84149506), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f206 = L_206;
		t1768  L_207 = {0};
		m9315(&L_207, ((int32_t)1247742), ((int32_t)84804866), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f207 = L_207;
		t1768  L_208 = {0};
		m9315(&L_208, ((int32_t)1379070), ((int32_t)84804866), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f208 = L_208;
		t1768  L_209 = {0};
		m9315(&L_209, ((int32_t)17959934), ((int32_t)84804866), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f209 = L_209;
		t1768  L_210 = {0};
		m9315(&L_210, ((int32_t)1248510), ((int32_t)84804866), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f210 = L_210;
		t1768  L_211 = {0};
		m9315(&L_211, ((int32_t)1379838), ((int32_t)84804866), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f211 = L_211;
		t1768  L_212 = {0};
		m9315(&L_212, ((int32_t)17960702), ((int32_t)84804866), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f212 = L_212;
		t1768  L_213 = {0};
		m9315(&L_213, ((int32_t)51711998), ((int32_t)84215042), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f213 = L_213;
		t1768  L_214 = {0};
		m9315(&L_214, ((int32_t)51515902), ((int32_t)117769474), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f214 = L_214;
		t1768  L_215 = {0};
		m9315(&L_215, ((int32_t)1184510), ((int32_t)68158466), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f215 = L_215;
		t1768  L_216 = {0};
		m9315(&L_216, ((int32_t)1184766), ((int32_t)67437570), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f216 = L_216;
		t1768  L_217 = {0};
		m9315(&L_217, ((int32_t)1185022), ((int32_t)67437570), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f217 = L_217;
		t1768  L_218 = {0};
		m9315(&L_218, ((int32_t)51516926), ((int32_t)84738818), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f218 = L_218;
		t1768  L_219 = {0};
		m9315(&L_219, ((int32_t)1185534), ((int32_t)67961858), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f219 = L_219;
		t1768  L_220 = {0};
		m9315(&L_220, ((int32_t)118626302), ((int32_t)84215042), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f220 = L_220;
		t1768  L_221 = {0};
		m9315(&L_221, ((int32_t)118626558), ((int32_t)84215042), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f221 = L_221;
		t1768  L_222 = {0};
		m9315(&L_222, ((int32_t)1186558), ((int32_t)134546178), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f222 = L_222;
		t1768  L_223 = {0};
		m9315(&L_223, ((int32_t)1383678), ((int32_t)84739330), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f223 = L_223;
		t1768  L_224 = {0};
		m9315(&L_224, ((int32_t)18161150), ((int32_t)84215042), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f224 = L_224;
		t1768  L_225 = {0};
		m9315(&L_225, ((int32_t)1187582), ((int32_t)67437570), &m9315_MI);
		((t1780_SFs*)InitializedTypeInfo(&t1780_TI)->static_fields)->f225 = L_225;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1777_TI;
#include "t1777MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1738_TI;
#include "t1738MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1776_TI;
#include "t1776MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1781_TI;
#include "t1781MD.h"

#include "t1782.h"


extern MethodInfo m9328_MI;
extern "C" int32_t m9328 (t1781 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9329_MI;
extern "C" t2* m9329 (t1781 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9330_MI;
extern "C" int32_t m9330 (t1781 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
#include "t1783.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1783_TI;
#include "t1783MD.h"

#include "t1784.h"
extern MethodInfo m9350_MI;


extern MethodInfo m9331_MI;
extern "C" int32_t m9331 (t1783 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9332_MI;
extern "C" bool m9332 (t1783 * __this, MethodInfo* method)
{
	{
		t1758 * L_0 = (__this->f4);
		return ((((int32_t)((((t9*)(t1758 *)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9333_MI;
extern "C" bool m9333 (t1783 * __this, MethodInfo* method)
{
	{
		t1758 * L_0 = (__this->f3);
		return ((((int32_t)((((t9*)(t1758 *)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9334_MI;
extern "C" t126 * m9334 (t1783 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m9335_MI;
extern "C" t2* m9335 (t1783 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9336_MI;
extern "C" t126 * m9336 (t1783 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9337_MI;
extern "C" t126 * m9337 (t1783 * __this, MethodInfo* method)
{
	{
		t1745 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m9338_MI;
extern "C" t1561* m9338 (t1783 * __this, bool p0, MethodInfo* method)
{
	{
		return (t1561*)NULL;
	}
}
extern MethodInfo m9339_MI;
extern "C" t158* m9339 (t1783 * __this, bool p0, MethodInfo* method)
{
	{
		t138 * L_0 = m9350(__this, &m9350_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9340_MI;
extern "C" t158* m9340 (t1783 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9350(__this, &m9350_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9341_MI;
extern "C" t821 * m9341 (t1783 * __this, bool p0, MethodInfo* method)
{
	{
		t1758 * L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9342_MI;
extern "C" t921* m9342 (t1783 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = m9350(__this, &m9350_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9343_MI;
extern "C" t821 * m9343 (t1783 * __this, bool p0, MethodInfo* method)
{
	{
		t1758 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9344_MI;
extern "C" t9 * m9344 (t1783 * __this, t9 * p0, t158* p1, MethodInfo* method)
{
	{
		return NULL;
	}
}
extern MethodInfo m9345_MI;
extern "C" t9 * m9345 (t1783 * __this, t9 * p0, int32_t p1, t926 * p2, t158* p3, t894 * p4, MethodInfo* method)
{
	{
		t138 * L_0 = m9350(__this, &m9350_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9346_MI;
extern "C" bool m9346 (t1783 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = m9350(__this, &m9350_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9347_MI;
extern "C" void m9347 (t1783 * __this, t9 * p0, t9 * p1, t158* p2, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9348_MI;
extern "C" void m9348 (t1783 * __this, t9 * p0, t9 * p1, int32_t p2, t926 * p3, t158* p4, t894 * p5, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9349_MI;
extern "C" t1559 * m9349 (t1783 * __this, MethodInfo* method)
{
	{
		t1559 * L_0 = m7784(__this, &m7784_MI);
		return L_0;
	}
}
extern "C" t138 * m9350 (t1783 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1725, &m5706_MI);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1778_TI;
#include "t1778MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1789.h"
#include "t1161.h"
extern TypeInfo t1789_TI;
extern TypeInfo t1797_TI;
extern TypeInfo t1786_TI;
extern TypeInfo t1785_TI;
extern TypeInfo t1161_TI;
extern TypeInfo t1748_TI;
extern TypeInfo t1756_TI;
#include "t1789MD.h"
#include "t926MD.h"
#include "t1161MD.h"
#include "t823MD.h"
#include "t830MD.h"
extern Il2CppType t1797_0_0_0;
extern Il2CppType t1786_0_0_0;
extern Il2CppType t1785_0_0_0;
extern Il2CppType t919_0_0_0;
extern Il2CppType t923_0_0_0;
extern Il2CppType t1561_0_0_0;
extern Il2CppType t922_0_0_0;
extern MethodInfo m9423_MI;
extern MethodInfo m11938_MI;
extern MethodInfo m7726_MI;
extern MethodInfo m9399_MI;
extern MethodInfo m9403_MI;
extern MethodInfo m7736_MI;
extern MethodInfo m9413_MI;
extern MethodInfo m7714_MI;
extern MethodInfo m9354_MI;
extern MethodInfo m9404_MI;
extern MethodInfo m9360_MI;
extern MethodInfo m4385_MI;
extern MethodInfo m9416_MI;
extern MethodInfo m9479_MI;
extern MethodInfo m11987_MI;
extern MethodInfo m11578_MI;
extern MethodInfo m11988_MI;
extern MethodInfo m4407_MI;
extern MethodInfo m9371_MI;
extern MethodInfo m9402_MI;
extern MethodInfo m9374_MI;
extern MethodInfo m9375_MI;
extern MethodInfo m7728_MI;
extern MethodInfo m9372_MI;
extern MethodInfo m11955_MI;
extern MethodInfo m9378_MI;
extern MethodInfo m5698_MI;
extern MethodInfo m5709_MI;
extern MethodInfo m5694_MI;
extern MethodInfo m5900_MI;
extern MethodInfo m11989_MI;
extern MethodInfo m11990_MI;
extern MethodInfo m11949_MI;
extern MethodInfo m4402_MI;
extern MethodInfo m11991_MI;
extern MethodInfo m11992_MI;
extern MethodInfo m5853_MI;
extern MethodInfo m11948_MI;
extern MethodInfo m4365_MI;
extern MethodInfo m5849_MI;
extern MethodInfo m7326_MI;
extern MethodInfo m9384_MI;
extern MethodInfo m9482_MI;
extern MethodInfo m4401_MI;
extern MethodInfo m4403_MI;
extern MethodInfo m4404_MI;
extern MethodInfo m9401_MI;
extern MethodInfo m4414_MI;
extern MethodInfo m7746_MI;
extern MethodInfo m4449_MI;


extern "C" void m9351 (t1745 * __this, t1740 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t2* V_0 = {0};
	t1745 * G_B2_0 = {0};
	t1745 * G_B2_1 = {0};
	t1745 * G_B1_0 = {0};
	t1745 * G_B1_1 = {0};
	t2* G_B3_0 = {0};
	t1745 * G_B3_1 = {0};
	t1745 * G_B3_2 = {0};
	{
		m7714(__this, &m7714_MI);
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
		G_B3_0 = (t2*) &_stringLiteral1988;
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
		t2* L_6 = m511(NULL, (t2*) &_stringLiteral1989, L_5, &m511_MI);
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
		t1740 * L_10 = p0;
		__this->f21 = L_10;
		m9354(__this, __this, &m9354_MI);
		return;
	}
}
extern TypeInfo* t152_TI_var;
extern "C" void m9352 (t1745 * __this, t1740 * p0, t2* p1, int32_t p2, t126 * p3, t152* p4, int32_t p5, int32_t p6, t126 * p7, MethodInfo* method)
{
	static bool m9352_init;
	if (!m9352_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9352_init = true;
	}
	int32_t V_0 = 0;
	{
		m7714(__this, &m7714_MI);
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
		m9404(__this, (t2*) &_stringLiteral1990, L_5, &m9404_MI);
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
		t1332 * L_9 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_9, (t2*) &_stringLiteral1991, &m5685_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0057:
	{
		t2* L_10 = p1;
		int32_t L_11 = m5721(L_10, ((int32_t)46), &m5721_MI);
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
		t2* L_15 = m2741(L_13, ((int32_t)((int32_t)L_14+(int32_t)1)), &m2741_MI);
		__this->f8 = L_15;
		t2* L_16 = p1;
		int32_t L_17 = V_0;
		t2* L_18 = m2715(L_16, 0, L_17, &m2715_MI);
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
		m5912(NULL, (t121 *)(t121 *)L_23, (t121 *)(t121 *)L_24, (((int32_t)(((t121 *)L_25)->max_length))), &m5912_MI);
	}

IL_00b9:
	{
		t1740 * L_26 = p0;
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
		bool L_29 = m9399(__this, &m9399_MI);
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
		t1740 * L_31 = p0;
		int32_t L_32 = m9300(L_31, __this, 2, 1, &m9300_MI);
		__this->f20 = L_32;
		m9354(__this, __this, &m9354_MI);
		t2* L_33 = m9360(__this, &m9360_MI);
		__this->f26 = L_33;
		return;
	}
}
extern MethodInfo m9353_MI;
extern "C" int32_t m9353 (t1745 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f19);
		return L_0;
	}
}
extern "C" void m9354 (t1745 * __this, t1745 * p0, MethodInfo* method)
{
	typedef void (*m9354_ftn) (t1745 *, t1745 *);
	static m9354_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9354_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.TypeBuilder::setup_internal_class(System.Reflection.Emit.TypeBuilder)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t1336 * m9355 (t1745 * __this, MethodInfo* method)
{
	{
		t1740 * L_0 = (__this->f21);
		t1336 * L_1 = m9536(L_0, &m9536_MI);
		return L_1;
	}
}
extern "C" t2* m9356 (t1745 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f26);
		t1336 * L_1 = (t1336 *)VirtFuncInvoker0< t1336 * >::Invoke(&m9355_MI, __this);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9423_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m399(NULL, L_0, (t2*) &_stringLiteral388, L_2, &m399_MI);
		return L_3;
	}
}
extern "C" t126 * m9357 (t1745 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f10);
		return L_0;
	}
}
extern "C" t126 * m9358 (t1745 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m9359_MI;
extern "C" t126 * m9359 (t1745 * __this, MethodInfo* method)
{
	{
		bool L_0 = m9400(__this, &m9400_MI);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t126 * L_1 = (__this->f25);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11938_MI, L_1);
		return L_2;
	}

IL_0014:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, __this);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		bool L_4 = m9399(__this, &m9399_MI);
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
		t1332 * L_7 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_7, (t2*) &_stringLiteral1987, &m5685_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003e:
	{
		return __this;
	}
}
extern "C" t2* m9360 (t1745 * __this, MethodInfo* method)
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
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_1);
		t2* L_3 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m399(NULL, L_2, (t2*) &_stringLiteral173, L_3, &m399_MI);
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
		int32_t L_7 = m2699(L_6, &m2699_MI);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		t2* L_8 = (__this->f9);
		t2* L_9 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m399(NULL, L_8, (t2*) &_stringLiteral140, L_9, &m399_MI);
		return L_10;
	}

IL_0051:
	{
		t2* L_11 = (__this->f8);
		return L_11;
	}
}
extern "C" t2* m9361 (t1745 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f26);
		return L_0;
	}
}
extern "C" t1559 * m9362 (t1745 * __this, MethodInfo* method)
{
	{
		t1740 * L_0 = (__this->f21);
		return L_0;
	}
}
extern "C" t2* m9363 (t1745 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f8);
		return L_0;
	}
}
extern "C" t2* m9364 (t1745 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f9);
		return L_0;
	}
}
extern "C" t126 * m9365 (t1745 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m9366_MI;
extern TypeInfo* t1797_TI_var;
extern "C" t819 * m9366 (t1745 * __this, int32_t p0, t926 * p1, int32_t p2, t152* p3, t928* p4, MethodInfo* method)
{
	static bool m9366_init;
	if (!m9366_init)
	{
		t1797_TI_var = il2cpp_codegen_class_from_type(&t1797_0_0_0);
		m9366_init = true;
	}
	t1743 * V_0 = {0};
	int32_t V_1 = 0;
	t1743 * V_2 = {0};
	t1786* V_3 = {0};
	int32_t V_4 = 0;
	t1797* V_5 = {0};
	t819 * V_6 = {0};
	t1786* V_7 = {0};
	int32_t V_8 = 0;
	{
		m9403(__this, &m9403_MI);
		t126 * L_0 = (__this->f25);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t126 *)L_1))))
		{
			goto IL_00e1;
		}
	}
	{
		t1786* L_2 = (__this->f15);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		return (t819 *)NULL;
	}

IL_0025:
	{
		V_0 = (t1743 *)NULL;
		V_1 = 0;
		t1786* L_3 = (__this->f15);
		V_3 = L_3;
		V_4 = 0;
		goto IL_0055;
	}

IL_0035:
	{
		t1786* L_4 = V_3;
		int32_t L_5 = V_4;
		int32_t L_6 = L_5;
		V_2 = (*(t1743 **)(t1743 **)SZArrayLdElema(L_4, L_6));
		int32_t L_7 = p2;
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_0049;
		}
	}
	{
		t1743 * L_8 = V_2;
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9081_MI, L_8);
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
		t1743 * L_11 = V_2;
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
		t1786* L_15 = V_3;
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
		return (t819 *)NULL;
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
		t1789 * L_19 = (t1789 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1789_TI));
		m9416(L_19, &m9416_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_006f:
	{
		t1743 * L_20 = V_0;
		return L_20;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		V_5 = ((t1797*)SZArrayNew(t1797_TI_var, L_21));
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		t1797* L_23 = V_5;
		t1743 * L_24 = V_0;
		ArrayElementTypeCheck (L_23, L_24);
		*((t907 **)(t907 **)SZArrayLdElema(L_23, 0)) = (t907 *)L_24;
		goto IL_00c2;
	}

IL_0084:
	{
		V_1 = 0;
		t1786* L_25 = (__this->f15);
		V_7 = L_25;
		V_8 = 0;
		goto IL_00ba;
	}

IL_0093:
	{
		t1786* L_26 = V_7;
		int32_t L_27 = V_8;
		int32_t L_28 = L_27;
		V_6 = (*(t1743 **)(t1743 **)SZArrayLdElema(L_26, L_28));
		int32_t L_29 = p2;
		if ((((int32_t)L_29) == ((int32_t)3)))
		{
			goto IL_00aa;
		}
	}
	{
		t819 * L_30 = V_6;
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9516_MI, L_30);
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
		t1797* L_33 = V_5;
		int32_t L_34 = V_1;
		int32_t L_35 = L_34;
		V_1 = ((int32_t)((int32_t)L_35+(int32_t)1));
		t819 * L_36 = V_6;
		ArrayElementTypeCheck (L_33, L_36);
		*((t907 **)(t907 **)SZArrayLdElema(L_33, L_35)) = (t907 *)L_36;
	}

IL_00b4:
	{
		int32_t L_37 = V_8;
		V_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_00ba:
	{
		int32_t L_38 = V_8;
		t1786* L_39 = V_7;
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)(((t121 *)L_39)->max_length))))))
		{
			goto IL_0093;
		}
	}

IL_00c2:
	{
		t926 * L_40 = p1;
		if (L_40)
		{
			goto IL_00ce;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		t926 * L_41 = m9479(NULL, &m9479_MI);
		p1 = L_41;
	}

IL_00ce:
	{
		t926 * L_42 = p1;
		int32_t L_43 = p0;
		t1797* L_44 = V_5;
		t152* L_45 = p3;
		t928* L_46 = p4;
		t907 * L_47 = (t907 *)VirtFuncInvoker4< t907 *, int32_t, t1797*, t152*, t928* >::Invoke(&m11987_MI, L_42, L_43, L_44, L_45, L_46);
		return ((t819 *)Castclass(L_47, InitializedTypeInfo(&t819_TI)));
	}

IL_00e1:
	{
		t126 * L_48 = (__this->f25);
		int32_t L_49 = p0;
		t926 * L_50 = p1;
		int32_t L_51 = p2;
		t152* L_52 = p3;
		t928* L_53 = p4;
		t819 * L_54 = (t819 *)VirtFuncInvoker5< t819 *, int32_t, t926 *, int32_t, t152*, t928* >::Invoke(&m7769_MI, L_48, L_49, L_50, L_51, L_52, L_53);
		return L_54;
	}
}
extern "C" bool m9367 (t1745 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		bool L_0 = m9400(__this, &m9400_MI);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = m9399(__this, &m9399_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		bool L_5 = m11578(NULL, __this, L_3, L_4, &m11578_MI);
		return L_5;
	}
}
extern "C" t158* m9368 (t1745 * __this, bool p0, MethodInfo* method)
{
	{
		m9403(__this, &m9403_MI);
		t126 * L_0 = (__this->f25);
		bool L_1 = p0;
		t158* L_2 = (t158*)VirtFuncInvoker1< t158*, bool >::Invoke(&m11988_MI, L_0, L_1);
		return L_2;
	}
}
extern "C" t158* m9369 (t1745 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		m9403(__this, &m9403_MI);
		t126 * L_0 = (__this->f25);
		t126 * L_1 = p0;
		bool L_2 = p1;
		t158* L_3 = (t158*)VirtFuncInvoker2< t158*, t126 *, bool >::Invoke(&m4407_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9370_MI;
extern "C" t1743 * m9370 (t1745 * __this, int32_t p0, int32_t p1, t152* p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		t152* L_2 = p2;
		t1743 * L_3 = m9371(__this, L_0, L_1, L_2, (t1747*)(t1747*)NULL, (t1747*)(t1747*)NULL, &m9371_MI);
		return L_3;
	}
}
extern TypeInfo* t1786_TI_var;
extern "C" t1743 * m9371 (t1745 * __this, int32_t p0, int32_t p1, t152* p2, t1747* p3, t1747* p4, MethodInfo* method)
{
	static bool m9371_init;
	if (!m9371_init)
	{
		t1786_TI_var = il2cpp_codegen_class_from_type(&t1786_0_0_0);
		m9371_init = true;
	}
	t1743 * V_0 = {0};
	t1786* V_1 = {0};
	{
		m9402(__this, &m9402_MI);
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		t152* L_2 = p2;
		t1747* L_3 = p3;
		t1747* L_4 = p4;
		t1743 * L_5 = (t1743 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1743_TI));
		m9080(L_5, __this, L_0, L_1, L_2, L_3, L_4, &m9080_MI);
		V_0 = L_5;
		t1786* L_6 = (__this->f15);
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		t1786* L_7 = (__this->f15);
		V_1 = ((t1786*)SZArrayNew(t1786_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))+(int32_t)1))));
		t1786* L_8 = (__this->f15);
		t1786* L_9 = V_1;
		t1786* L_10 = (__this->f15);
		m5912(NULL, (t121 *)(t121 *)L_8, (t121 *)(t121 *)L_9, (((int32_t)(((t121 *)L_10)->max_length))), &m5912_MI);
		t1786* L_11 = V_1;
		t1786* L_12 = (__this->f15);
		t1743 * L_13 = V_0;
		ArrayElementTypeCheck (L_11, L_13);
		*((t1743 **)(t1743 **)SZArrayLdElema(L_11, (((int32_t)(((t121 *)L_12)->max_length))))) = (t1743 *)L_13;
		t1786* L_14 = V_1;
		__this->f15 = L_14;
		goto IL_0069;
	}

IL_0054:
	{
		__this->f15 = ((t1786*)SZArrayNew(t1786_TI_var, 1));
		t1786* L_15 = (__this->f15);
		t1743 * L_16 = V_0;
		ArrayElementTypeCheck (L_15, L_16);
		*((t1743 **)(t1743 **)SZArrayLdElema(L_15, 0)) = (t1743 *)L_16;
	}

IL_0069:
	{
		t1743 * L_17 = V_0;
		return L_17;
	}
}
extern TypeInfo* t1785_TI_var;
extern "C" void m9372 (t1745 * __this, t1758 * p0, MethodInfo* method)
{
	static bool m9372_init;
	if (!m9372_init)
	{
		t1785_TI_var = il2cpp_codegen_class_from_type(&t1785_0_0_0);
		m9372_init = true;
	}
	t1785* V_0 = {0};
	{
		t1785* L_0 = (__this->f14);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		t1785* L_1 = (__this->f14);
		int32_t L_2 = (__this->f13);
		if ((!(((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))) == ((uint32_t)L_2))))
		{
			goto IL_0041;
		}
	}
	{
		t1785* L_3 = (__this->f14);
		V_0 = ((t1785*)SZArrayNew(t1785_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_3)->max_length)))*(int32_t)2))));
		t1785* L_4 = (__this->f14);
		t1785* L_5 = V_0;
		int32_t L_6 = (__this->f13);
		m5912(NULL, (t121 *)(t121 *)L_4, (t121 *)(t121 *)L_5, L_6, &m5912_MI);
		t1785* L_7 = V_0;
		__this->f14 = L_7;
	}

IL_0041:
	{
		goto IL_004f;
	}

IL_0043:
	{
		__this->f14 = ((t1785*)SZArrayNew(t1785_TI_var, 1));
	}

IL_004f:
	{
		t1785* L_8 = (__this->f14);
		int32_t L_9 = (__this->f13);
		t1758 * L_10 = p0;
		ArrayElementTypeCheck (L_8, L_10);
		*((t1758 **)(t1758 **)SZArrayLdElema(L_8, L_9)) = (t1758 *)L_10;
		int32_t L_11 = (__this->f13);
		__this->f13 = ((int32_t)((int32_t)L_11+(int32_t)1));
		return;
	}
}
extern MethodInfo m9373_MI;
extern "C" t1758 * m9373 (t1745 * __this, t2* p0, int32_t p1, t126 * p2, t152* p3, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		t126 * L_2 = p2;
		t152* L_3 = p3;
		t1758 * L_4 = m9374(__this, L_0, L_1, 1, L_2, L_3, &m9374_MI);
		return L_4;
	}
}
extern "C" t1758 * m9374 (t1745 * __this, t2* p0, int32_t p1, int32_t p2, t126 * p3, t152* p4, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		t126 * L_3 = p3;
		t152* L_4 = p4;
		t1758 * L_5 = m9375(__this, L_0, L_1, L_2, L_3, (t152*)(t152*)NULL, (t152*)(t152*)NULL, L_4, (t1747*)(t1747*)NULL, (t1747*)(t1747*)NULL, &m9375_MI);
		return L_5;
	}
}
extern "C" t1758 * m9375 (t1745 * __this, t2* p0, int32_t p1, int32_t p2, t126 * p3, t152* p4, t152* p5, t152* p6, t1747* p7, t1747* p8, MethodInfo* method)
{
	t1758 * V_0 = {0};
	{
		t2* L_0 = p0;
		m9404(__this, (t2*) &_stringLiteral2, L_0, &m9404_MI);
		m9402(__this, &m9402_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7728_MI, __this);
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
		t556 * L_5 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_5, (t2*) &_stringLiteral1992, &m2885_MI);
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
		t1740 * L_7 = (__this->f21);
		t1735 * L_8 = (L_7->f14);
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
		t1747* L_17 = p7;
		t1747* L_18 = p8;
		t1758 * L_19 = (t1758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1758_TI));
		m9250(L_19, __this, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, &m9250_MI);
		V_0 = L_19;
		t1758 * L_20 = V_0;
		m9372(__this, L_20, &m9372_MI);
		t1758 * L_21 = V_0;
		return L_21;
	}
}
extern MethodInfo m9376_MI;
extern "C" void m9376 (t1745 * __this, t821 * p0, t821 * p1, MethodInfo* method)
{
	t1758 * V_0 = {0};
	{
		t821 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1993, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t821 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1994, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		m9402(__this, &m9402_MI);
		t821 * L_4 = p0;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_4);
		if ((((t9*)(t126 *)L_5) == ((t9*)(t1745 *)__this)))
		{
			goto IL_0036;
		}
	}
	{
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_6, (t2*) &_stringLiteral1995, &m2885_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0036:
	{
		t821 * L_7 = p0;
		if (!((t1758 *)IsInst(L_7, InitializedTypeInfo(&t1758_TI))))
		{
			goto IL_004c;
		}
	}
	{
		t821 * L_8 = p0;
		V_0 = ((t1758 *)Castclass(L_8, InitializedTypeInfo(&t1758_TI)));
		t1758 * L_9 = V_0;
		t821 * L_10 = p1;
		m9273(L_9, L_10, &m9273_MI);
	}

IL_004c:
	{
		return;
	}
}
extern "C" t919* m9377 (t1745 * __this, int32_t p0, MethodInfo* method)
{
	{
		bool L_0 = m9400(__this, &m9400_MI);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t126 * L_1 = (__this->f25);
		int32_t L_2 = p0;
		t919* L_3 = (t919*)VirtFuncInvoker1< t919*, int32_t >::Invoke(&m11955_MI, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		bool L_4 = m9399(__this, &m9399_MI);
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
		t919* L_7 = m9378(__this, L_6, &m9378_MI);
		return L_7;
	}
}
extern TypeInfo* t919_TI_var;
extern "C" t919* m9378 (t1745 * __this, int32_t p0, MethodInfo* method)
{
	static bool m9378_init;
	if (!m9378_init)
	{
		t919_TI_var = il2cpp_codegen_class_from_type(&t919_0_0_0);
		m9378_init = true;
	}
	t1161 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	t1743 * V_3 = {0};
	t1786* V_4 = {0};
	int32_t V_5 = 0;
	t919* V_6 = {0};
	{
		t1786* L_0 = (__this->f15);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((t919*)SZArrayNew(t919_TI_var, 0));
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_1 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_1, &m5698_MI);
		V_0 = L_1;
		t1786* L_2 = (__this->f15);
		V_4 = L_2;
		V_5 = 0;
		goto IL_0079;
	}

IL_0022:
	{
		t1786* L_3 = V_4;
		int32_t L_4 = V_5;
		int32_t L_5 = L_4;
		V_3 = (*(t1743 **)(t1743 **)SZArrayLdElema(L_3, L_5));
		V_1 = 0;
		t1743 * L_6 = V_3;
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9089_MI, L_6);
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
		t1161 * L_16 = V_0;
		t1743 * L_17 = V_3;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_16, L_17);
	}

IL_0073:
	{
		int32_t L_18 = V_5;
		V_5 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_19 = V_5;
		t1786* L_20 = V_4;
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((t121 *)L_20)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		t1161 * L_21 = V_0;
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_21);
		V_6 = ((t919*)SZArrayNew(t919_TI_var, L_22));
		t1161 * L_23 = V_0;
		t919* L_24 = V_6;
		VirtActionInvoker1< t121 * >::Invoke(&m5900_MI, L_23, (t121 *)(t121 *)L_24);
		t919* L_25 = V_6;
		return L_25;
	}
}
extern "C" t126 * m9379 (t1745 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" t1560 * m9380 (t1745 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		m9403(__this, &m9403_MI);
		t126 * L_0 = (__this->f25);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t1560 * L_3 = (t1560 *)VirtFuncInvoker2< t1560 *, t2*, int32_t >::Invoke(&m11989_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern "C" t823 * m9381 (t1745 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = {0};
	t823 * V_2 = {0};
	t1788* V_3 = {0};
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
		t823 * L_4 = (t823 *)VirtFuncInvoker2< t823 *, t2*, int32_t >::Invoke(&m11990_MI, L_1, L_2, L_3);
		return L_4;
	}

IL_0016:
	{
		t1788* L_5 = (__this->f17);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return (t823 *)NULL;
	}

IL_0020:
	{
		t1788* L_6 = (__this->f17);
		V_3 = L_6;
		V_4 = 0;
		goto IL_0094;
	}

IL_002f:
	{
		t1788* L_7 = V_3;
		int32_t L_8 = V_4;
		int32_t L_9 = L_8;
		V_2 = (*(t1754 **)(t1754 **)SZArrayLdElema(L_7, L_9));
		t823 * L_10 = V_2;
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
		t823 * L_11 = V_2;
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_11);
		t2* L_13 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_14 = m2713(NULL, L_12, L_13, &m2713_MI);
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
		t823 * L_15 = V_2;
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11949_MI, L_15);
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
		t823 * L_25 = V_2;
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
		t1788* L_28 = V_3;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((t121 *)L_28)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (t823 *)NULL;
	}
}
extern TypeInfo* t923_TI_var;
extern "C" t923* m9382 (t1745 * __this, int32_t p0, MethodInfo* method)
{
	static bool m9382_init;
	if (!m9382_init)
	{
		t923_TI_var = il2cpp_codegen_class_from_type(&t923_0_0_0);
		m9382_init = true;
	}
	t1161 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	t823 * V_3 = {0};
	t1788* V_4 = {0};
	int32_t V_5 = 0;
	t923* V_6 = {0};
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
		t923* L_3 = (t923*)VirtFuncInvoker1< t923*, int32_t >::Invoke(&m4402_MI, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		t1788* L_4 = (__this->f17);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return ((t923*)SZArrayNew(t923_TI_var, 0));
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_5 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_5, &m5698_MI);
		V_0 = L_5;
		t1788* L_6 = (__this->f17);
		V_4 = L_6;
		V_5 = 0;
		goto IL_0096;
	}

IL_003a:
	{
		t1788* L_7 = V_4;
		int32_t L_8 = V_5;
		int32_t L_9 = L_8;
		V_3 = (*(t1754 **)(t1754 **)SZArrayLdElema(L_7, L_9));
		t823 * L_10 = V_3;
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
		t823 * L_11 = V_3;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11949_MI, L_11);
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
		t1161 * L_21 = V_0;
		t823 * L_22 = V_3;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_21, L_22);
	}

IL_0090:
	{
		int32_t L_23 = V_5;
		V_5 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0096:
	{
		int32_t L_24 = V_5;
		t1788* L_25 = V_4;
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((t121 *)L_25)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		t1161 * L_26 = V_0;
		int32_t L_27 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_26);
		V_6 = ((t923*)SZArrayNew(t923_TI_var, L_27));
		t1161 * L_28 = V_0;
		t923* L_29 = V_6;
		VirtActionInvoker1< t121 * >::Invoke(&m5900_MI, L_28, (t121 *)(t121 *)L_29);
		t923* L_30 = V_6;
		return L_30;
	}
}
extern TypeInfo* t152_TI_var;
extern "C" t152* m9383 (t1745 * __this, MethodInfo* method)
{
	static bool m9383_init;
	if (!m9383_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9383_init = true;
	}
	t152* V_0 = {0};
	{
		bool L_0 = m9400(__this, &m9400_MI);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t126 * L_1 = (__this->f25);
		t152* L_2 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m11991_MI, L_1);
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
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5874_MI, L_5, (t121 *)(t121 *)L_6, 0);
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
extern TypeInfo* t1561_TI_var;
extern "C" t1561* m9384 (t1745 * __this, t2* p0, int32_t p1, bool p2, t126 * p3, MethodInfo* method)
{
	static bool m9384_init;
	if (!m9384_init)
	{
		t1561_TI_var = il2cpp_codegen_class_from_type(&t1561_0_0_0);
		m9384_init = true;
	}
	t1561* V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	t1561* V_3 = {0};
	t1161 * V_4 = {0};
	bool V_5 = false;
	int32_t V_6 = 0;
	t821 * V_7 = {0};
	t1161 * V_8 = {0};
	t821 * V_9 = {0};
	t1561* V_10 = {0};
	int32_t V_11 = 0;
	t1561* V_12 = {0};
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
		t1561* L_4 = (t1561*)VirtFuncInvoker1< t1561*, int32_t >::Invoke(&m11992_MI, L_2, L_3);
		V_3 = L_4;
		t1561* L_5 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_6 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5853(L_6, (((int32_t)(((t121 *)L_5)->max_length))), &m5853_MI);
		V_4 = L_6;
		int32_t L_7 = p1;
		V_5 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_6 = 0;
		goto IL_00c1;
	}

IL_003e:
	{
		t1561* L_8 = V_3;
		int32_t L_9 = V_6;
		int32_t L_10 = L_9;
		V_7 = (*(t821 **)(t821 **)SZArrayLdElema(L_8, L_10));
		t821 * L_11 = V_7;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11948_MI, L_11);
		V_2 = L_12;
		t821 * L_13 = V_7;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4365_MI, L_13);
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
		t1161 * L_22 = V_4;
		t821 * L_23 = V_7;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_22, L_23);
	}

IL_00bb:
	{
		int32_t L_24 = V_6;
		V_6 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00c1:
	{
		int32_t L_25 = V_6;
		t1561* L_26 = V_3;
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((t121 *)L_26)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		t1785* L_27 = (__this->f14);
		if (L_27)
		{
			goto IL_00ea;
		}
	}
	{
		t1161 * L_28 = V_4;
		int32_t L_29 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_28);
		V_0 = ((t1561*)SZArrayNew(t1561_TI_var, L_29));
		t1161 * L_30 = V_4;
		t1561* L_31 = V_0;
		VirtActionInvoker1< t121 * >::Invoke(&m5900_MI, L_30, (t121 *)(t121 *)L_31);
		goto IL_011c;
	}

IL_00ea:
	{
		t1785* L_32 = (__this->f14);
		t1161 * L_33 = V_4;
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_33);
		V_0 = ((t1561*)SZArrayNew(t1561_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_32)->max_length)))+(int32_t)L_34))));
		t1161 * L_35 = V_4;
		t1561* L_36 = V_0;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5849_MI, L_35, (t121 *)(t121 *)L_36, 0);
		t1785* L_37 = (__this->f14);
		t1561* L_38 = V_0;
		t1161 * L_39 = V_4;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_39);
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5874_MI, L_37, (t121 *)(t121 *)L_38, L_40);
	}

IL_011c:
	{
		goto IL_0125;
	}

IL_011e:
	{
		t1785* L_41 = (__this->f14);
		V_0 = (t1561*)L_41;
	}

IL_0125:
	{
		t1561* L_42 = V_0;
		if (L_42)
		{
			goto IL_012f;
		}
	}
	{
		return ((t1561*)SZArrayNew(t1561_TI_var, 0));
	}

IL_012f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_43 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_43, &m5698_MI);
		V_8 = L_43;
		t1561* L_44 = V_0;
		V_10 = L_44;
		V_11 = 0;
		goto IL_01ba;
	}

IL_0141:
	{
		t1561* L_45 = V_10;
		int32_t L_46 = V_11;
		int32_t L_47 = L_46;
		V_9 = (*(t821 **)(t821 **)SZArrayLdElema(L_45, L_47));
		t821 * L_48 = V_9;
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
		t821 * L_50 = V_9;
		t2* L_51 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_50);
		t2* L_52 = p0;
		bool L_53 = p2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_54 = m7326(NULL, L_51, L_52, L_53, &m7326_MI);
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
		t821 * L_55 = V_9;
		int32_t L_56 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11948_MI, L_55);
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
		t1161 * L_65 = V_8;
		t821 * L_66 = V_9;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_65, L_66);
	}

IL_01b4:
	{
		int32_t L_67 = V_11;
		V_11 = ((int32_t)((int32_t)L_67+(int32_t)1));
	}

IL_01ba:
	{
		int32_t L_68 = V_11;
		t1561* L_69 = V_10;
		if ((((int32_t)L_68) < ((int32_t)(((int32_t)(((t121 *)L_69)->max_length))))))
		{
			goto IL_0141;
		}
	}
	{
		t1161 * L_70 = V_8;
		int32_t L_71 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_70);
		V_12 = ((t1561*)SZArrayNew(t1561_TI_var, L_71));
		t1161 * L_72 = V_8;
		t1561* L_73 = V_12;
		VirtActionInvoker1< t121 * >::Invoke(&m5900_MI, L_72, (t121 *)(t121 *)L_73);
		t1561* L_74 = V_12;
		return L_74;
	}
}
extern "C" t1561* m9385 (t1745 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t1561* L_1 = m9384(__this, (t2*)NULL, L_0, 0, __this, &m9384_MI);
		return L_1;
	}
}
extern MethodInfo m9386_MI;
extern TypeInfo* t1797_TI_var;
extern "C" t821 * m9386 (t1745 * __this, t2* p0, int32_t p1, t926 * p2, int32_t p3, t152* p4, t928* p5, MethodInfo* method)
{
	static bool m9386_init;
	if (!m9386_init)
	{
		t1797_TI_var = il2cpp_codegen_class_from_type(&t1797_0_0_0);
		m9386_init = true;
	}
	bool V_0 = false;
	t1561* V_1 = {0};
	t821 * V_2 = {0};
	t1797* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	t821 * V_6 = {0};
	t1561* V_7 = {0};
	int32_t V_8 = 0;
	t821 * V_9 = {0};
	t1561* V_10 = {0};
	int32_t V_11 = 0;
	int32_t G_B3_0 = 0;
	{
		m9403(__this, &m9403_MI);
		int32_t L_0 = p1;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = V_0;
		t1561* L_4 = m9384(__this, L_1, L_2, L_3, __this, &m9384_MI);
		V_1 = L_4;
		V_2 = (t821 *)NULL;
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
		t1561* L_7 = V_1;
		V_7 = L_7;
		V_8 = 0;
		goto IL_0060;
	}

IL_0035:
	{
		t1561* L_8 = V_7;
		int32_t L_9 = V_8;
		int32_t L_10 = L_9;
		V_6 = (*(t821 **)(t821 **)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = p3;
		if ((((int32_t)L_11) == ((int32_t)3)))
		{
			goto IL_0051;
		}
	}
	{
		t821 * L_12 = V_6;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9516_MI, L_12);
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
		t821 * L_16 = V_6;
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
		t1561* L_20 = V_7;
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
		return (t821 *)NULL;
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
		t821 * L_24 = V_2;
		return L_24;
	}

IL_0079:
	{
		int32_t L_25 = V_5;
		V_3 = ((t1797*)SZArrayNew(t1797_TI_var, L_25));
		int32_t L_26 = V_5;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_008c;
		}
	}
	{
		t1797* L_27 = V_3;
		t821 * L_28 = V_2;
		ArrayElementTypeCheck (L_27, L_28);
		*((t907 **)(t907 **)SZArrayLdElema(L_27, 0)) = (t907 *)L_28;
		goto IL_00cc;
	}

IL_008c:
	{
		V_5 = 0;
		t1561* L_29 = V_1;
		V_10 = L_29;
		V_11 = 0;
		goto IL_00c4;
	}

IL_0097:
	{
		t1561* L_30 = V_10;
		int32_t L_31 = V_11;
		int32_t L_32 = L_31;
		V_9 = (*(t821 **)(t821 **)SZArrayLdElema(L_30, L_32));
		int32_t L_33 = p3;
		if ((((int32_t)L_33) == ((int32_t)3)))
		{
			goto IL_00b3;
		}
	}
	{
		t821 * L_34 = V_9;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9516_MI, L_34);
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
		t1797* L_38 = V_3;
		int32_t L_39 = V_5;
		int32_t L_40 = L_39;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
		t821 * L_41 = V_9;
		ArrayElementTypeCheck (L_38, L_41);
		*((t907 **)(t907 **)SZArrayLdElema(L_38, L_40)) = (t907 *)L_41;
	}

IL_00be:
	{
		int32_t L_42 = V_11;
		V_11 = ((int32_t)((int32_t)L_42+(int32_t)1));
	}

IL_00c4:
	{
		int32_t L_43 = V_11;
		t1561* L_44 = V_10;
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
		t1797* L_46 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		t907 * L_47 = m9482(NULL, L_46, &m9482_MI);
		return ((t821 *)Castclass(L_47, InitializedTypeInfo(&t821_TI)));
	}

IL_00dc:
	{
		t926 * L_48 = p2;
		if (L_48)
		{
			goto IL_00e8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		t926 * L_49 = m9479(NULL, &m9479_MI);
		p2 = L_49;
	}

IL_00e8:
	{
		t926 * L_50 = p2;
		int32_t L_51 = p1;
		t1797* L_52 = V_3;
		t152* L_53 = p4;
		t928* L_54 = p5;
		t907 * L_55 = (t907 *)VirtFuncInvoker4< t907 *, int32_t, t1797*, t152*, t928* >::Invoke(&m11987_MI, L_50, L_51, L_52, L_53, L_54);
		return ((t821 *)Castclass(L_55, InitializedTypeInfo(&t821_TI)));
	}
}
extern TypeInfo* t922_TI_var;
extern "C" t922* m9387 (t1745 * __this, int32_t p0, MethodInfo* method)
{
	static bool m9387_init;
	if (!m9387_init)
	{
		t922_TI_var = il2cpp_codegen_class_from_type(&t922_0_0_0);
		m9387_init = true;
	}
	t1161 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	t821 * V_3 = {0};
	t830 * V_4 = {0};
	t1787* V_5 = {0};
	int32_t V_6 = 0;
	t922* V_7 = {0};
	{
		bool L_0 = m9400(__this, &m9400_MI);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t126 * L_1 = (__this->f25);
		int32_t L_2 = p0;
		t922* L_3 = (t922*)VirtFuncInvoker1< t922*, int32_t >::Invoke(&m4401_MI, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		t1787* L_4 = (__this->f16);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return ((t922*)SZArrayNew(t922_TI_var, 0));
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_5 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_5, &m5698_MI);
		V_0 = L_5;
		t1787* L_6 = (__this->f16);
		V_5 = L_6;
		V_6 = 0;
		goto IL_00ad;
	}

IL_003a:
	{
		t1787* L_7 = V_5;
		int32_t L_8 = V_6;
		int32_t L_9 = L_8;
		V_4 = (*(t1783 **)(t1783 **)SZArrayLdElema(L_7, L_9));
		V_1 = 0;
		t830 * L_10 = V_4;
		t821 * L_11 = (t821 *)VirtFuncInvoker1< t821 *, bool >::Invoke(&m4403_MI, L_10, 1);
		V_3 = L_11;
		t821 * L_12 = V_3;
		if (L_12)
		{
			goto IL_0058;
		}
	}
	{
		t830 * L_13 = V_4;
		t821 * L_14 = (t821 *)VirtFuncInvoker1< t821 *, bool >::Invoke(&m4404_MI, L_13, 1);
		V_3 = L_14;
	}

IL_0058:
	{
		t821 * L_15 = V_3;
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
		t821 * L_16 = V_3;
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11948_MI, L_16);
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
		t1161 * L_26 = V_0;
		t830 * L_27 = V_4;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_26, L_27);
	}

IL_00a7:
	{
		int32_t L_28 = V_6;
		V_6 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00ad:
	{
		int32_t L_29 = V_6;
		t1787* L_30 = V_5;
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)(((t121 *)L_30)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		t1161 * L_31 = V_0;
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_31);
		V_7 = ((t922*)SZArrayNew(t922_TI_var, L_32));
		t1161 * L_33 = V_0;
		t922* L_34 = V_7;
		VirtActionInvoker1< t121 * >::Invoke(&m5900_MI, L_33, (t121 *)(t121 *)L_34);
		t922* L_35 = V_7;
		return L_35;
	}
}
extern MethodInfo m9388_MI;
extern "C" t830 * m9388 (t1745 * __this, t2* p0, int32_t p1, t926 * p2, t126 * p3, t152* p4, t928* p5, MethodInfo* method)
{
	{
		t138 * L_0 = m9401(__this, &m9401_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9389_MI;
extern "C" bool m9389 (t1745 * __this, MethodInfo* method)
{
	{
		bool L_0 = m9400(__this, &m9400_MI);
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
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7721_MI, L_1);
		return L_2;
	}
}
extern "C" t9 * m9390 (t1745 * __this, t2* p0, int32_t p1, t926 * p2, t9 * p3, t158* p4, t928* p5, t894 * p6, t221* p7, MethodInfo* method)
{
	{
		m9403(__this, &m9403_MI);
		t126 * L_0 = (__this->f25);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t926 * L_3 = p2;
		t9 * L_4 = p3;
		t158* L_5 = p4;
		t928* L_6 = p5;
		t894 * L_7 = p6;
		t221* L_8 = p7;
		t9 * L_9 = (t9 *)VirtFuncInvoker8< t9 *, t2*, int32_t, t926 *, t9 *, t158*, t928*, t894 *, t221* >::Invoke(&m4414_MI, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
extern MethodInfo m9391_MI;
extern "C" bool m9391 (t1745 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9392_MI;
extern "C" bool m9392 (t1745 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9393_MI;
extern "C" bool m9393 (t1745 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9394_MI;
extern "C" bool m9394 (t1745 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9395_MI;
extern "C" bool m9395 (t1745 * __this, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		t1740 * L_0 = (__this->f21);
		t1735 * L_1 = (L_0->f14);
		t126 * L_2 = (L_1->f22);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		bool L_3 = m7746(NULL, __this, L_2, 0, &m7746_MI);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_4 = m329(NULL, LoadTypeToken(&t117_0_0_0), &m329_MI);
		bool L_5 = m7746(NULL, __this, L_4, 0, &m7746_MI);
		if (!L_5)
		{
			goto IL_0057;
		}
	}

IL_002c:
	{
		t1740 * L_6 = (__this->f21);
		t1735 * L_7 = (L_6->f14);
		t126 * L_8 = (L_7->f22);
		if ((((t9*)(t1745 *)__this) == ((t9*)(t126 *)L_8)))
		{
			goto IL_0057;
		}
	}
	{
		t1740 * L_9 = (__this->f21);
		t1735 * L_10 = (L_9->f14);
		t126 * L_11 = (L_10->f23);
		G_B5_0 = ((((int32_t)((((t9*)(t1745 *)__this) == ((t9*)(t126 *)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
extern MethodInfo m9396_MI;
extern "C" t126 * m9396 (t1745 * __this, t152* p0, MethodInfo* method)
{
	{
		t152* L_0 = p0;
		t126 * L_1 = m4447(__this, L_0, &m4447_MI);
		return L_1;
	}
}
extern "C" t127  m9397 (t1745 * __this, MethodInfo* method)
{
	{
		m9403(__this, &m9403_MI);
		t126 * L_0 = (__this->f25);
		t127  L_1 = (t127 )VirtFuncInvoker0< t127  >::Invoke(&m7736_MI, L_0);
		return L_1;
	}
}
extern "C" int32_t m9398 (t1745 * __this, t9 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	{
		t1740 * L_0 = (__this->f21);
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = p2;
		int32_t L_4 = m9300(L_0, L_1, L_2, L_3, &m9300_MI);
		return L_4;
	}
}
extern "C" bool m9399 (t1745 * __this, MethodInfo* method)
{
	{
		t1740 * L_0 = (__this->f21);
		t1735 * L_1 = (L_0->f14);
		bool L_2 = m9073(L_1, &m9073_MI);
		return L_2;
	}
}
extern "C" bool m9400 (t1745 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f25);
		return ((((int32_t)((((t9*)(t126 *)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t138 * m9401 (t1745 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1725, &m5706_MI);
		return L_0;
	}
}
extern "C" void m9402 (t1745 * __this, MethodInfo* method)
{
	{
		bool L_0 = m9400(__this, &m9400_MI);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_1, (t2*) &_stringLiteral1996, &m5685_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
extern "C" void m9403 (t1745 * __this, MethodInfo* method)
{
	{
		bool L_0 = m9400(__this, &m9400_MI);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t138 * L_1 = m9401(__this, &m9401_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		return;
	}
}
extern "C" void m9404 (t1745 * __this, t2* p0, t2* p1, MethodInfo* method)
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
		int32_t L_4 = m2699(L_3, &m2699_MI);
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		t2* L_5 = p0;
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_6, (t2*) &_stringLiteral1997, L_5, &m5691_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_001e:
	{
		t2* L_7 = p1;
		uint16_t L_8 = m2714(L_7, 0, &m2714_MI);
		if (L_8)
		{
			goto IL_0033;
		}
	}
	{
		t2* L_9 = p0;
		t556 * L_10 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_10, (t2*) &_stringLiteral1998, L_9, &m5691_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0033:
	{
		return;
	}
}
extern MethodInfo m9405_MI;
extern "C" t2* m9405 (t1745 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9361_MI, __this);
		return L_0;
	}
}
extern MethodInfo m9406_MI;
extern "C" bool m9406 (t1745 * __this, t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = m4449(__this, L_0, &m4449_MI);
		return L_1;
	}
}
extern MethodInfo m9407_MI;
extern "C" bool m9407 (t1745 * __this, t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = m7749(__this, L_0, &m7749_MI);
		return L_1;
	}
}
extern MethodInfo m9408_MI;
extern "C" bool m9408 (t1745 * __this, t126 * p0, MethodInfo* method)
{
	t126 * V_0 = {0};
	t152* V_1 = {0};
	int32_t V_2 = 0;
	{
		t126 * L_0 = p0;
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t1745 *)__this))))
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
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7728_MI, L_1);
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
		bool L_4 = m9400(__this, &m9400_MI);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		t126 * L_5 = p0;
		t126 * L_6 = (__this->f10);
		bool L_7 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4449_MI, L_5, L_6);
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
		bool L_15 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4449_MI, L_13, L_14);
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
		bool L_19 = m9400(__this, &m9400_MI);
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
		bool L_25 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4449_MI, L_23, L_24);
		return L_25;
	}
}
extern MethodInfo m9409_MI;
extern TypeInfo* t152_TI_var;
extern "C" t152* m9409 (t1745 * __this, MethodInfo* method)
{
	static bool m9409_init;
	if (!m9409_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9409_init = true;
	}
	t152* V_0 = {0};
	{
		t1771* L_0 = (__this->f24);
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
		t1771* L_1 = (__this->f24);
		V_0 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_1)->max_length)))));
		t1771* L_2 = (__this->f24);
		t152* L_3 = V_0;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5874_MI, L_2, (t121 *)(t121 *)L_3, 0);
		t152* L_4 = V_0;
		return L_4;
	}
}
extern MethodInfo m9410_MI;
extern "C" t126 * m9410 (t1745 * __this, MethodInfo* method)
{
	{
		t1771* L_0 = (__this->f24);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_1, (t2*) &_stringLiteral1999, &m5685_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return __this;
	}
}
extern MethodInfo m9411_MI;
extern "C" bool m9411 (t1745 * __this, MethodInfo* method)
{
	{
		t1771* L_0 = (__this->f24);
		return ((((int32_t)((((t9*)(t1771*)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9412_MI;
extern "C" bool m9412 (t1745 * __this, MethodInfo* method)
{
	typedef bool (*m9412_ftn) (t1745 *);
	static m9412_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9412_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m9413 (t1745 * __this, MethodInfo* method)
{
	{
		t1771* L_0 = (__this->f24);
		return ((((int32_t)((((t9*)(t1771*)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9414_MI;
extern "C" bool m9414 (t1745 * __this, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9413_MI, __this);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1755_TI;
#include "t1755MD.h"

#include "t1569.h"
#include "t1570.h"
extern TypeInfo t1569_TI;
#include "t1569MD.h"
extern MethodInfo m7800_MI;


extern MethodInfo m9415_MI;
extern "C" t1569 * m9415 (t1755 * __this, MethodInfo* method)
{
	t1569 * V_0 = {0};
	{
		int32_t L_0 = (__this->f1);
		t1569 * L_1 = (t1569 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1569_TI));
		m7800(L_1, L_0, &m7800_MI);
		V_0 = L_1;
		t1569 * L_2 = V_0;
		int32_t L_3 = (__this->f2);
		L_2->f1 = L_3;
		t1569 * L_4 = V_0;
		t2* L_5 = (__this->f4);
		L_4->f2 = L_5;
		t1569 * L_6 = V_0;
		t2* L_7 = (__this->f5);
		L_6->f3 = L_7;
		t1569 * L_8 = V_0;
		t126 * L_9 = (__this->f6);
		L_8->f4 = L_9;
		int32_t L_10 = (__this->f0);
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		t1569 * L_11 = V_0;
		L_11->f5 = 0;
		goto IL_005a;
	}

IL_004e:
	{
		t1569 * L_12 = V_0;
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
		t1569 * L_15 = V_0;
		L_15->f6 = 0;
		goto IL_0079;
	}

IL_006c:
	{
		t1569 * L_16 = V_0;
		int32_t L_17 = (__this->f7);
		L_16->f6 = (((int16_t)L_17));
	}

IL_0079:
	{
		t1569 * L_18 = V_0;
		return L_18;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9416 (t1789 * __this, MethodInfo* method)
{
	{
		m5872(__this, (t2*) &_stringLiteral2000, &m5872_MI);
		return;
	}
}
extern MethodInfo m9417_MI;
extern "C" void m9417 (t1789 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		return;
	}
}
extern MethodInfo m9418_MI;
extern "C" void m9418 (t1789 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#include "t1790.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1790_TI;
#include "t1790MD.h"



extern MethodInfo m9419_MI;
extern "C" void m9419 (t1790 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2027.h"
#include "t1791.h"
#include "t871.h"
extern TypeInfo t871_TI;
#include "t2027MD.h"
#include "t871MD.h"
extern Il2CppType t1559_0_0_0;
extern MethodInfo m9433_MI;
extern MethodInfo m9422_MI;
extern MethodInfo m9430_MI;
extern MethodInfo m9429_MI;
extern MethodInfo m9443_MI;
extern MethodInfo m9431_MI;
extern MethodInfo m9421_MI;
extern MethodInfo m11092_MI;
extern MethodInfo m11096_MI;
extern MethodInfo m9437_MI;
extern MethodInfo m9438_MI;
extern MethodInfo m11643_MI;
extern MethodInfo m9436_MI;
extern MethodInfo m9441_MI;
extern MethodInfo m9538_MI;
extern MethodInfo m9440_MI;
extern MethodInfo m9544_MI;
extern MethodInfo m5829_MI;


extern "C" void m9420 (t1336 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1790 * L_0 = (t1790 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1790_TI));
		m9419(L_0, &m9419_MI);
		__this->f1 = L_0;
		return;
	}
}
extern "C" t2* m9421 (t1336 * __this, MethodInfo* method)
{
	typedef t2* (*m9421_ftn) (t1336 *);
	static m9421_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9421_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::get_fullname()");
	return _il2cpp_icall_func(__this);
}
extern "C" t2* m9422 (t1336 * __this, MethodInfo* method)
{
	typedef t2* (*m9422_ftn) (t1336 *);
	static m9422_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9422_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::get_location()");
	return _il2cpp_icall_func(__this);
}
extern "C" t2* m9423 (t1336 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9433_MI, __this);
		return L_0;
	}
}
extern MethodInfo m9424_MI;
extern "C" t2* m9424 (t1336 * __this, MethodInfo* method)
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
		t2* L_2 = m9422(__this, &m9422_MI);
		V_0 = L_2;
		t2* L_3 = V_0;
		return L_3;
	}
}
extern MethodInfo m9425_MI;
extern "C" bool m9425 (t1336 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		bool L_2 = m11578(NULL, __this, L_0, L_1, &m11578_MI);
		return L_2;
	}
}
extern MethodInfo m9426_MI;
extern "C" t158* m9426 (t1336 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_2 = m11576(NULL, __this, L_0, L_1, &m11576_MI);
		return L_2;
	}
}
extern MethodInfo m9427_MI;
extern "C" t58 m9427 (t1336 * __this, t2* p0, int32_t* p1, t1559 ** p2, MethodInfo* method)
{
	typedef t58 (*m9427_ftn) (t1336 *, t2*, int32_t*, t1559 **);
	static m9427_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9427_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m9428_MI;
extern "C" t126 * m9428 (t1336 * __this, t2* p0, bool p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		bool L_1 = p1;
		t126 * L_2 = (t126 *)VirtFuncInvoker3< t126 *, t2*, bool, bool >::Invoke(&m9430_MI, __this, L_0, L_1, 0);
		return L_2;
	}
}
extern "C" t126 * m5744 (t1336 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t126 * L_1 = (t126 *)VirtFuncInvoker3< t126 *, t2*, bool, bool >::Invoke(&m9430_MI, __this, L_0, 0, 0);
		return L_1;
	}
}
extern "C" t126 * m9429 (t1336 * __this, t1559 * p0, t2* p1, bool p2, bool p3, MethodInfo* method)
{
	typedef t126 * (*m9429_ftn) (t1336 *, t1559 *, t2*, bool, bool);
	static m9429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9429_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3);
}
extern "C" t126 * m9430 (t1336 * __this, t2* p0, bool p1, bool p2, MethodInfo* method)
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
		int32_t L_4 = m2699(L_3, &m2699_MI);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		t556 * L_5 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_5, (t2*) &_stringLiteral2, (t2*) &_stringLiteral2001, &m5691_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0022:
	{
		t2* L_6 = p0;
		bool L_7 = p1;
		bool L_8 = p2;
		t126 * L_9 = m9429(__this, (t1559 *)NULL, L_6, L_7, L_8, &m9429_MI);
		return L_9;
	}
}
extern "C" void m9431 (t9 * __this , t1336 * p0, t1739 * p1, MethodInfo* method)
{
	typedef void (*m9431_ftn) (t1336 *, t1739 *);
	static m9431_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9431_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" t1739 * m9432 (t1336 * __this, MethodInfo* method)
{
	t1739 * V_0 = {0};
	{
		t1739 * L_0 = (t1739 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1739_TI));
		m9443(L_0, &m9443_MI);
		V_0 = L_0;
		t1739 * L_1 = V_0;
		m9431(NULL, __this, L_1, &m9431_MI);
		t1739 * L_2 = V_0;
		return L_2;
	}
}
extern "C" t2* m9433 (t1336 * __this, MethodInfo* method)
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
		t2* L_2 = m9421(__this, &m9421_MI);
		__this->f9 = L_2;
		t2* L_3 = (__this->f9);
		return L_3;
	}
}
extern MethodInfo m9434_MI;
extern "C" t1336 * m9434 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2027 * L_0 = m11092(NULL, &m11092_MI);
		t2* L_1 = p0;
		t1336 * L_2 = m11096(L_0, L_1, &m11096_MI);
		return L_2;
	}
}
extern "C" t1336 * m9435 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t1336 * L_1 = m9437(NULL, L_0, (t1791 *)NULL, &m9437_MI);
		return L_1;
	}
}
extern "C" t1336 * m9436 (t9 * __this , t2* p0, t1791 * p1, MethodInfo* method)
{
	typedef t1336 * (*m9436_ftn) (t2*, t1791 *);
	static m9436_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9436_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::load_with_partial_name(System.String,System.Security.Policy.Evidence)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" t1336 * m9437 (t9 * __this , t2* p0, t1791 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t1791 * L_1 = p1;
		t1336 * L_2 = m9438(NULL, L_0, L_1, 1, &m9438_MI);
		return L_2;
	}
}
extern "C" t1336 * m9438 (t9 * __this , t2* p0, t1791 * p1, bool p2, MethodInfo* method)
{
	{
		bool L_0 = p2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		t1337 * L_1 = (t1337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1337_TI));
		m11640(L_1, &m11640_MI);
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
		t871 * L_3 = (t871 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t871_TI));
		m11643(L_3, &m11643_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0012:
	{
		t2* L_4 = p0;
		t1791 * L_5 = p1;
		t1336 * L_6 = m9436(NULL, L_4, L_5, &m9436_MI);
		return L_6;
	}
}
extern MethodInfo m9439_MI;
extern "C" t1559 * m9439 (t1336 * __this, t2* p0, MethodInfo* method)
{
	t1741* V_0 = {0};
	t1559 * V_1 = {0};
	t1741* V_2 = {0};
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
		int32_t L_3 = m2699(L_2, &m2699_MI);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_4, (t2*) &_stringLiteral2002, &m2885_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t1741* L_5 = (t1741*)VirtFuncInvoker1< t1741*, bool >::Invoke(&m9441_MI, __this, 1);
		V_0 = L_5;
		t1741* L_6 = V_0;
		V_2 = L_6;
		V_3 = 0;
		goto IL_0047;
	}

IL_002f:
	{
		t1741* L_7 = V_2;
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_1 = (*(t1559 **)(t1559 **)SZArrayLdElema(L_7, L_9));
		t1559 * L_10 = V_1;
		t2* L_11 = m9538(L_10, &m9538_MI);
		t2* L_12 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_13 = m331(NULL, L_11, L_12, &m331_MI);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		t1559 * L_14 = V_1;
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
		t1741* L_17 = V_2;
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((t121 *)L_17)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (t1559 *)NULL;
	}
}
extern "C" t1741* m9440 (t1336 * __this, MethodInfo* method)
{
	typedef t1741* (*m9440_ftn) (t1336 *);
	static m9440_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9440_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetModulesInternal()");
	return _il2cpp_icall_func(__this);
}
extern TypeInfo* t1741_TI_var;
extern "C" t1741* m9441 (t1336 * __this, bool p0, MethodInfo* method)
{
	static bool m9441_init;
	if (!m9441_init)
	{
		t1741_TI_var = il2cpp_codegen_class_from_type(&t1741_0_0_0);
		m9441_init = true;
	}
	t1741* V_0 = {0};
	t1161 * V_1 = {0};
	t1559 * V_2 = {0};
	t1741* V_3 = {0};
	int32_t V_4 = 0;
	{
		t1741* L_0 = (t1741*)VirtFuncInvoker0< t1741* >::Invoke(&m9440_MI, __this);
		V_0 = L_0;
		bool L_1 = p0;
		if (L_1)
		{
			goto IL_0052;
		}
	}
	{
		t1741* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_3 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5853(L_3, (((int32_t)(((t121 *)L_2)->max_length))), &m5853_MI);
		V_1 = L_3;
		t1741* L_4 = V_0;
		V_3 = L_4;
		V_4 = 0;
		goto IL_0035;
	}

IL_001a:
	{
		t1741* L_5 = V_3;
		int32_t L_6 = V_4;
		int32_t L_7 = L_6;
		V_2 = (*(t1559 **)(t1559 **)SZArrayLdElema(L_5, L_7));
		t1559 * L_8 = V_2;
		bool L_9 = m9544(L_8, &m9544_MI);
		if (L_9)
		{
			goto IL_002f;
		}
	}
	{
		t1161 * L_10 = V_1;
		t1559 * L_11 = V_2;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_10, L_11);
	}

IL_002f:
	{
		int32_t L_12 = V_4;
		V_4 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_13 = V_4;
		t1741* L_14 = V_3;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((t121 *)L_14)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		t1161 * L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_16 = m329(NULL, LoadTypeToken(&t1559_0_0_0), &m329_MI);
		t121 * L_17 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5829_MI, L_15, L_16);
		return ((t1741*)Castclass(L_17, t1741_TI_var));
	}

IL_0052:
	{
		t1741* L_18 = V_0;
		return L_18;
	}
}
extern MethodInfo m9442_MI;
extern "C" t1336 * m9442 (t9 * __this , MethodInfo* method)
{
	typedef t1336 * (*m9442_ftn) ();
	static m9442_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9442_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetExecutingAssembly()");
	return _il2cpp_icall_func();
}
#include "t667.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t667_TI;
#include "t667MD.h"

#include "t718MD.h"
extern MethodInfo m4240_MI;


extern MethodInfo m3101_MI;
extern "C" void m3101 (t667 * __this, t2* p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t666.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t666_TI;
#include "t666MD.h"



extern MethodInfo m3100_MI;
extern "C" void m3100 (t666 * __this, t2* p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t669.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t669_TI;
#include "t669MD.h"



extern MethodInfo m3103_MI;
extern "C" void m3103 (t669 * __this, t2* p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1138.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1138_TI;
#include "t1138MD.h"



extern MethodInfo m4768_MI;
extern "C" void m4768 (t1138 * __this, t2* p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1142.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1142_TI;
#include "t1142MD.h"



extern MethodInfo m4772_MI;
extern "C" void m4772 (t1142 * __this, bool p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		bool L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t665.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t665_TI;
#include "t665MD.h"



extern MethodInfo m3099_MI;
extern "C" void m3099 (t665 * __this, t2* p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t2* L_0 = p0;
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



extern MethodInfo m3106_MI;
extern "C" void m3106 (t672 * __this, t2* p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral471, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2* L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
#include "t1136.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1136_TI;
#include "t1136MD.h"



extern MethodInfo m4766_MI;
extern "C" void m4766 (t1136 * __this, t2* p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1141.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1141_TI;
#include "t1141MD.h"



extern MethodInfo m4771_MI;
extern "C" void m4771 (t1141 * __this, t2* p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1208.h"
#include "t1684.h"
#include "t1683.h"
#include "t2024.h"
#include "t1359.h"
#include "t1357.h"
extern TypeInfo t1344_TI;
extern TypeInfo t1793_TI;
extern TypeInfo t2024_TI;
extern TypeInfo t1683_TI;
extern TypeInfo t1684_TI;
extern TypeInfo t1794_TI;
#include "t1620MD.h"
#include "t2024MD.h"
#include "t1357MD.h"
#include "t1359MD.h"
extern Il2CppType t1187_0_0_0;
extern Il2CppType t1683_0_0_0;
extern Il2CppType t1793_0_0_0;
extern Il2CppType t1684_0_0_0;
extern Il2CppType t1794_0_0_0;
extern MethodInfo m1154_MI;
extern MethodInfo m8625_MI;
extern MethodInfo m9456_MI;
extern MethodInfo m11868_MI;
extern MethodInfo m11858_MI;
extern MethodInfo m11859_MI;
extern MethodInfo m11857_MI;
extern MethodInfo m11860_MI;
extern MethodInfo m8025_MI;
extern MethodInfo m8024_MI;
extern MethodInfo m5703_MI;
extern MethodInfo m5714_MI;
extern MethodInfo m8617_MI;
extern MethodInfo m9449_MI;
extern MethodInfo m673_MI;
extern MethodInfo m9455_MI;
extern MethodInfo m10708_MI;
extern MethodInfo m9457_MI;
extern MethodInfo m5867_MI;
extern MethodInfo m5868_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m5715_MI;
extern MethodInfo m5702_MI;
extern MethodInfo m9452_MI;


extern "C" void m9443 (t1739 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		__this->f12 = 1;
		return;
	}
}
extern MethodInfo m9444_MI;
extern TypeInfo* t723_TI_var;
extern "C" void m9444 (t1739 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	static bool m9444_init;
	if (!m9444_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m9444_init = true;
	}
	int32_t V_0 = 0;
	{
		m336(__this, &m336_MI);
		t1093 * L_0 = p0;
		t2* L_1 = m5712(L_0, (t2*) &_stringLiteral2009, &m5712_MI);
		__this->f0 = L_1;
		t1093 * L_2 = p0;
		t2* L_3 = m5712(L_2, (t2*) &_stringLiteral2010, &m5712_MI);
		__this->f1 = L_3;
		t1093 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t1187_0_0_0), &m329_MI);
		t9 * L_6 = m5703(L_4, (t2*) &_stringLiteral2011, L_5, &m5703_MI);
		__this->f13 = ((t1187 *)Castclass(L_6, InitializedTypeInfo(&t1187_TI)));
		t1093 * L_7 = p0;
		t126 * L_8 = m329(NULL, LoadTypeToken(&t723_0_0_0), &m329_MI);
		t9 * L_9 = m5703(L_7, (t2*) &_stringLiteral2012, L_8, &m5703_MI);
		__this->f10 = ((t723*)Castclass(L_9, t723_TI_var));
		t1093 * L_10 = p0;
		t126 * L_11 = m329(NULL, LoadTypeToken(&t723_0_0_0), &m329_MI);
		t9 * L_12 = m5703(L_10, (t2*) &_stringLiteral2013, L_11, &m5703_MI);
		__this->f11 = ((t723*)Castclass(L_12, t723_TI_var));
		t1093 * L_13 = p0;
		t126 * L_14 = m329(NULL, LoadTypeToken(&t1683_0_0_0), &m329_MI);
		t9 * L_15 = m5703(L_13, (t2*) &_stringLiteral2014, L_14, &m5703_MI);
		__this->f8 = ((*(int32_t*)((int32_t*)UnBox (L_15, InitializedTypeInfo(&t125_TI)))));
		t1093 * L_16 = p0;
		t126 * L_17 = m329(NULL, LoadTypeToken(&t1793_0_0_0), &m329_MI);
		t9 * L_18 = m5703(L_16, (t2*) &_stringLiteral2015, L_17, &m5703_MI);
		__this->f9 = ((t1793 *)Castclass(L_18, InitializedTypeInfo(&t1793_TI)));
		t1093 * L_19 = p0;
		t126 * L_20 = m329(NULL, LoadTypeToken(&t1684_0_0_0), &m329_MI);
		t9 * L_21 = m5703(L_19, (t2*) &_stringLiteral2016, L_20, &m5703_MI);
		__this->f12 = ((*(int32_t*)((int32_t*)UnBox (L_21, InitializedTypeInfo(&t125_TI)))));
		t1093 * L_22 = p0;
		t126 * L_23 = m329(NULL, LoadTypeToken(&t1794_0_0_0), &m329_MI);
		t9 * L_24 = m5703(L_22, (t2*) &_stringLiteral2017, L_23, &m5703_MI);
		__this->f7 = ((*(int32_t*)((int32_t*)UnBox (L_24, InitializedTypeInfo(&t125_TI)))));
		t1093 * L_25 = p0;
		int32_t L_26 = m5714(L_25, (t2*) &_stringLiteral2018, &m5714_MI);
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)(-1))))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_28 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_29 = (t894 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t894_TI));
		m8617(L_29, L_28, &m8617_MI);
		__this->f6 = L_29;
	}

IL_0124:
	{
		return;
	}
}
extern "C" t2* m9445 (t1739 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9446_MI;
extern "C" void m9446 (t1739 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t894 * m9447 (t1739 * __this, MethodInfo* method)
{
	{
		t894 * L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" int32_t m9448 (t1739 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" t2* m9449 (t1739 * __this, MethodInfo* method)
{
	t315 * V_0 = {0};
	t723* V_1 = {0};
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
		t315 * L_2 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m1150(L_2, &m1150_MI);
		V_0 = L_2;
		t315 * L_3 = V_0;
		t2* L_4 = (__this->f0);
		m1154(L_3, L_4, &m1154_MI);
		t1187 * L_5 = m9451(__this, &m9451_MI);
		bool L_6 = m11869(NULL, L_5, (t1187 *)NULL, &m11869_MI);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		t315 * L_7 = V_0;
		m1154(L_7, (t2*) &_stringLiteral2003, &m1154_MI);
		t315 * L_8 = V_0;
		t1187 * L_9 = m9451(__this, &m9451_MI);
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11866_MI, L_9);
		m1154(L_8, L_10, &m1154_MI);
	}

IL_004d:
	{
		t894 * L_11 = (__this->f6);
		if (!L_11)
		{
			goto IL_0098;
		}
	}
	{
		t315 * L_12 = V_0;
		m1154(L_12, (t2*) &_stringLiteral2004, &m1154_MI);
		t894 * L_13 = (__this->f6);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8625_MI, L_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_15 = m4334(NULL, &m4334_MI);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8625_MI, L_15);
		if ((!(((uint32_t)L_14) == ((uint32_t)L_16))))
		{
			goto IL_0086;
		}
	}
	{
		t315 * L_17 = V_0;
		m1154(L_17, (t2*) &_stringLiteral2005, &m1154_MI);
		goto IL_0098;
	}

IL_0086:
	{
		t315 * L_18 = V_0;
		t894 * L_19 = (__this->f6);
		t2* L_20 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8626_MI, L_19);
		m1154(L_18, L_20, &m1154_MI);
	}

IL_0098:
	{
		t723* L_21 = m9456(__this, &m9456_MI);
		V_1 = L_21;
		t723* L_22 = V_1;
		if (!L_22)
		{
			goto IL_00e7;
		}
	}
	{
		t723* L_23 = V_1;
		if ((((int32_t)(((t121 *)L_23)->max_length))))
		{
			goto IL_00b5;
		}
	}
	{
		t315 * L_24 = V_0;
		m1154(L_24, (t2*) &_stringLiteral2006, &m1154_MI);
		goto IL_00e7;
	}

IL_00b5:
	{
		t315 * L_25 = V_0;
		m1154(L_25, (t2*) &_stringLiteral2007, &m1154_MI);
		V_2 = 0;
		goto IL_00e1;
	}

IL_00c5:
	{
		t315 * L_26 = V_0;
		t723* L_27 = V_1;
		int32_t L_28 = V_2;
		t2* L_29 = m5792(((uint8_t*)(uint8_t*)SZArrayLdElema(L_27, L_28)), (t2*) &_stringLiteral597, &m5792_MI);
		m1154(L_26, L_29, &m1154_MI);
		int32_t L_30 = V_2;
		V_2 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00e1:
	{
		int32_t L_31 = V_2;
		t723* L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((t121 *)L_32)->max_length))))))
		{
			goto IL_00c5;
		}
	}

IL_00e7:
	{
		int32_t L_33 = m9448(__this, &m9448_MI);
		if (!((int32_t)((int32_t)L_33&(int32_t)((int32_t)256))))
		{
			goto IL_0101;
		}
	}
	{
		t315 * L_34 = V_0;
		m1154(L_34, (t2*) &_stringLiteral2008, &m1154_MI);
	}

IL_0101:
	{
		t315 * L_35 = V_0;
		t2* L_36 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_35);
		return L_36;
	}
}
extern "C" t1793 * m9450 (t1739 * __this, MethodInfo* method)
{
	{
		t1793 * L_0 = (__this->f9);
		return L_0;
	}
}
extern "C" t1187 * m9451 (t1739 * __this, MethodInfo* method)
{
	{
		t1187 * L_0 = (__this->f13);
		return L_0;
	}
}
extern "C" void m9452 (t1739 * __this, t1187 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t1187 * L_0 = p0;
		__this->f13 = L_0;
		t1187 * L_1 = p0;
		bool L_2 = m11868(NULL, L_1, (t1187 *)NULL, &m11868_MI);
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
		t1187 * L_9 = p0;
		int32_t L_10 = m11858(L_9, &m11858_MI);
		__this->f2 = L_10;
		t1187 * L_11 = p0;
		int32_t L_12 = m11859(L_11, &m11859_MI);
		__this->f3 = L_12;
		t1187 * L_13 = p0;
		int32_t L_14 = m11857(L_13, &m11857_MI);
		__this->f4 = L_14;
		t1187 * L_15 = p0;
		int32_t L_16 = m11860(L_15, &m11860_MI);
		__this->f5 = L_16;
	}

IL_0064:
	{
		return;
	}
}
extern MethodInfo m9453_MI;
extern "C" t2* m9453 (t1739 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* G_B3_0 = {0};
	{
		t2* L_0 = m9449(__this, &m9449_MI);
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
extern "C" t723* m9454 (t1739 * __this, MethodInfo* method)
{
	{
		t723* L_0 = (__this->f10);
		return L_0;
	}
}
extern "C" bool m9455 (t1739 * __this, MethodInfo* method)
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
		t723* L_0 = (__this->f10);
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
		t723* L_2 = (__this->f10);
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = L_4;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_5))));
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		t723* L_7 = (__this->f10);
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
		t723* L_9 = (__this->f10);
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
		t723* L_14 = (__this->f10);
		if ((((int32_t)(((int32_t)(((t121 *)L_14)->max_length)))) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0078;
		}
	}
	{
		t723* L_15 = (__this->f10);
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
			t723* L_17 = (__this->f10);
			m8025(NULL, L_17, ((int32_t)12), &m8025_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1344_TI, e.ex->object.klass))
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
			t723* L_18 = (__this->f10);
			m8024(NULL, L_18, &m8024_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1344_TI, e.ex->object.klass))
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
extern TypeInfo* t723_TI_var;
extern "C" t723* m9456 (t1739 * __this, MethodInfo* method)
{
	static bool m9456_init;
	if (!m9456_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m9456_init = true;
	}
	{
		t723* L_0 = (__this->f11);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t723* L_1 = (__this->f11);
		return L_1;
	}

IL_000f:
	{
		t723* L_2 = (__this->f10);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		return (t723*)NULL;
	}

IL_0019:
	{
		t723* L_3 = (__this->f10);
		if ((((int32_t)(((t121 *)L_3)->max_length))))
		{
			goto IL_002a;
		}
	}
	{
		return ((t723*)SZArrayNew(t723_TI_var, 0));
	}

IL_002a:
	{
		bool L_4 = m9455(__this, &m9455_MI);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		t2024 * L_5 = (t2024 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2024_TI));
		m10708(L_5, (t2*) &_stringLiteral2019, &m10708_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003d:
	{
		t723* L_6 = m9457(__this, &m9457_MI);
		return L_6;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" t723* m9457 (t1739 * __this, MethodInfo* method)
{
	static bool m9457_init;
	if (!m9457_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m9457_init = true;
	}
	t1359 * V_0 = {0};
	t723* V_1 = {0};
	t723* V_2 = {0};
	{
		t1357 * L_0 = m5867(NULL, &m5867_MI);
		V_0 = L_0;
		t1359 * L_1 = V_0;
		t723* L_2 = (__this->f10);
		t723* L_3 = m5868(L_1, L_2, &m5868_MI);
		V_1 = L_3;
		V_2 = ((t723*)SZArrayNew(t723_TI_var, 8));
		t723* L_4 = V_1;
		t723* L_5 = V_1;
		t723* L_6 = V_2;
		m7682(NULL, (t121 *)(t121 *)L_4, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_5)->max_length)))-(int32_t)8)), (t121 *)(t121 *)L_6, 0, 8, &m7682_MI);
		t723* L_7 = V_2;
		m6907(NULL, (t121 *)(t121 *)L_7, 0, 8, &m6907_MI);
		t723* L_8 = V_2;
		return L_8;
	}
}
extern "C" void m9458 (t1739 * __this, t723* p0, MethodInfo* method)
{
	{
		t723* L_0 = p0;
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
		t723* L_3 = p0;
		__this->f10 = L_3;
		return;
	}
}
extern "C" void m9459 (t1739 * __this, t723* p0, MethodInfo* method)
{
	{
		t723* L_0 = p0;
		__this->f11 = L_0;
		return;
	}
}
extern MethodInfo m9460_MI;
extern "C" void m9460 (t1739 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	t2* G_B4_0 = {0};
	t1093 * G_B4_1 = {0};
	t2* G_B3_0 = {0};
	t1093 * G_B3_1 = {0};
	int32_t G_B5_0 = 0;
	t2* G_B5_1 = {0};
	t1093 * G_B5_2 = {0};
	{
		t1093 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral418, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1093 * L_2 = p0;
		t2* L_3 = (__this->f0);
		m5715(L_2, (t2*) &_stringLiteral2009, L_3, &m5715_MI);
		t1093 * L_4 = p0;
		t723* L_5 = (__this->f10);
		m5715(L_4, (t2*) &_stringLiteral2012, (t9 *)(t9 *)L_5, &m5715_MI);
		t1093 * L_6 = p0;
		t723* L_7 = (__this->f11);
		m5715(L_6, (t2*) &_stringLiteral2013, (t9 *)(t9 *)L_7, &m5715_MI);
		t1093 * L_8 = p0;
		t894 * L_9 = (__this->f6);
		G_B3_0 = (t2*) &_stringLiteral2018;
		G_B3_1 = L_8;
		if (!L_9)
		{
			G_B4_0 = (t2*) &_stringLiteral2018;
			G_B4_1 = L_8;
			goto IL_005c;
		}
	}
	{
		t894 * L_10 = (__this->f6);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8625_MI, L_10);
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
		m5702(G_B5_2, G_B5_1, G_B5_0, &m5702_MI);
		t1093 * L_12 = p0;
		t2* L_13 = (__this->f1);
		m5715(L_12, (t2*) &_stringLiteral2010, L_13, &m5715_MI);
		t1093 * L_14 = p0;
		t1187 * L_15 = m9451(__this, &m9451_MI);
		m5715(L_14, (t2*) &_stringLiteral2011, L_15, &m5715_MI);
		t1093 * L_16 = p0;
		int32_t L_17 = (__this->f8);
		int32_t L_18 = L_17;
		t9 * L_19 = Box(InitializedTypeInfo(&t1683_TI), &L_18);
		m5715(L_16, (t2*) &_stringLiteral2014, L_19, &m5715_MI);
		t1093 * L_20 = p0;
		int32_t L_21 = 0;
		t9 * L_22 = Box(InitializedTypeInfo(&t1683_TI), &L_21);
		m5715(L_20, (t2*) &_stringLiteral2020, L_22, &m5715_MI);
		t1093 * L_23 = p0;
		t1793 * L_24 = (__this->f9);
		m5715(L_23, (t2*) &_stringLiteral2015, L_24, &m5715_MI);
		t1093 * L_25 = p0;
		int32_t L_26 = (__this->f12);
		int32_t L_27 = L_26;
		t9 * L_28 = Box(InitializedTypeInfo(&t1684_TI), &L_27);
		m5715(L_25, (t2*) &_stringLiteral2016, L_28, &m5715_MI);
		t1093 * L_29 = p0;
		int32_t L_30 = (__this->f7);
		int32_t L_31 = L_30;
		t9 * L_32 = Box(InitializedTypeInfo(&t1794_TI), &L_31);
		m5715(L_29, (t2*) &_stringLiteral2017, L_32, &m5715_MI);
		t1093 * L_33 = p0;
		m5715(L_33, (t2*) &_stringLiteral2021, NULL, &m5715_MI);
		return;
	}
}
extern MethodInfo m9461_MI;
extern "C" void m9461 (t1739 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1187 * L_0 = (__this->f13);
		m9452(__this, L_0, &m9452_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1794MD.h"



#include "t668.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t668_TI;
#include "t668MD.h"



extern MethodInfo m3102_MI;
extern "C" void m3102 (t668 * __this, t2* p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t671.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t671_TI;
#include "t671MD.h"



extern MethodInfo m3105_MI;
extern "C" void m3105 (t671 * __this, t2* p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
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



extern MethodInfo m3107_MI;
extern "C" void m3107 (t673 * __this, t2* p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1796.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1796_TI;
#include "t1796MD.h"

#include "t156.h"
#include "t123.h"
#include "t1547.h"
extern TypeInfo t156_TI;
extern TypeInfo t123_TI;
extern TypeInfo t884_TI;
#include "t884MD.h"
extern Il2CppType t296_0_0_0;
extern Il2CppType t156_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t58_0_0_0;
extern Il2CppType t2167_0_0_0;
extern Il2CppType t330_0_0_0;
extern MethodInfo m9477_MI;
extern MethodInfo m2486_MI;
extern MethodInfo m9471_MI;
extern MethodInfo m9464_MI;
extern MethodInfo m4399_MI;
extern MethodInfo m9678_MI;
extern MethodInfo m4360_MI;
extern MethodInfo m11939_MI;
extern MethodInfo m9465_MI;
extern MethodInfo m7723_MI;
extern MethodInfo m7750_MI;
extern MethodInfo m9468_MI;
extern MethodInfo m7611_MI;
extern MethodInfo m7730_MI;
extern MethodInfo m11347_MI;
extern MethodInfo m7603_MI;
extern MethodInfo m7777_MI;
extern MethodInfo m7776_MI;
extern MethodInfo m7772_MI;
extern MethodInfo m7744_MI;
extern MethodInfo m7039_MI;
extern MethodInfo m9469_MI;
extern MethodInfo m9472_MI;
extern MethodInfo m9521_MI;
extern MethodInfo m9473_MI;
extern MethodInfo m7779_MI;
extern MethodInfo m11993_MI;
extern MethodInfo m4375_MI;
extern MethodInfo m9475_MI;
extern MethodInfo m9481_MI;
extern MethodInfo m9476_MI;
struct t121;
struct t121;
extern "C" int32_t m11995_gshared (t9 * __this , t158* p0, t9 * p1, MethodInfo* method);
#define m11995(__this , p0, p1, method) (( int32_t (*) (t9 * , t158*, t9 *, MethodInfo*))m11995_gshared)(__this , p0, p1, method)
#define m11994(__this , p0, p1, method) (( int32_t (*) (t9 * , t152*, t126 *, MethodInfo*))m11995_gshared)(__this , p0, p1, method)
extern Il2CppGenericMethod m11994_GM;


extern MethodInfo m9462_MI;
extern "C" void m9462 (t1796 * __this, MethodInfo* method)
{
	{
		m9477(__this, &m9477_MI);
		return;
	}
}
extern MethodInfo m9463_MI;
extern TypeInfo* t152_TI_var;
extern "C" t907 * m9463 (t1796 * __this, int32_t p0, t1797* p1, t158** p2, t928* p3, t894 * p4, t221* p5, t9 ** p6, MethodInfo* method)
{
	static bool m9463_init;
	if (!m9463_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9463_init = true;
	}
	t152* V_0 = {0};
	int32_t V_1 = 0;
	t907 * V_2 = {0};
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
		t126 * L_11 = m2486((*(t9 **)(t9 **)SZArrayLdElema((*((t158**)L_8)), L_10)), &m2486_MI);
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
		t1797* L_16 = p1;
		t152* L_17 = V_0;
		t928* L_18 = p3;
		t907 * L_19 = m9471(__this, L_15, L_16, L_17, L_18, 1, &m9471_MI);
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
		t907 * L_24 = V_2;
		m9464(__this, L_22, L_23, L_24, &m9464_MI);
	}

IL_0056:
	{
		t907 * L_25 = V_2;
		return L_25;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m9464 (t1796 * __this, t221* p0, t158** p1, t907 * p2, MethodInfo* method)
{
	static bool m9464_init;
	if (!m9464_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9464_init = true;
	}
	t158* V_0 = {0};
	t921* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t158** L_0 = p1;
		V_0 = ((t158*)SZArrayNew(t158_TI_var, (((int32_t)(((t121 *)(*((t158**)L_0)))->max_length)))));
		t158** L_1 = p1;
		t158* L_2 = V_0;
		t158** L_3 = p1;
		m5912(NULL, (t121 *)(t121 *)(*((t158**)L_1)), (t121 *)(t121 *)L_2, (((int32_t)(((t121 *)(*((t158**)L_3)))->max_length))), &m5912_MI);
		t907 * L_4 = p2;
		t921* L_5 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_4);
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
		t921* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9678_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_9, L_11)));
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
		t921* L_21 = V_1;
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
		m5912(NULL, (t121 *)(t121 *)L_25, (t121 *)(t121 *)(*((t158**)L_26)), (((int32_t)(((t121 *)(*((t158**)L_27)))->max_length))), &m5912_MI);
		return;
	}
}
extern "C" bool m9465 (t9 * __this , t126 * p0, t126 * p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4360_MI, L_0);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		t126 * L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4360_MI, L_2);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		t126 * L_4 = p0;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11939_MI, L_4);
		t126 * L_6 = p1;
		t126 * L_7 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11939_MI, L_6);
		bool L_8 = m9465(NULL, L_5, L_7, &m9465_MI);
		return L_8;
	}

IL_0022:
	{
		t126 * L_9 = p1;
		t126 * L_10 = p0;
		bool L_11 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4449_MI, L_9, L_10);
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
extern MethodInfo m9466_MI;
extern "C" t9 * m9466 (t1796 * __this, t9 * p0, t126 * p1, t894 * p2, MethodInfo* method)
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
		t126 * L_2 = m2486(L_1, &m2486_MI);
		V_0 = L_2;
		t126 * L_3 = p1;
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7723_MI, L_3);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		t126 * L_5 = p1;
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11939_MI, L_5);
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
		bool L_11 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m7750_MI, L_9, L_10);
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
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4360_MI, L_13);
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		t126 * L_15 = p1;
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4360_MI, L_15);
		if (!L_16)
		{
			goto IL_0052;
		}
	}
	{
		t126 * L_17 = V_0;
		t126 * L_18 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11939_MI, L_17);
		t126 * L_19 = p1;
		t126 * L_20 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11939_MI, L_19);
		bool L_21 = m9465(NULL, L_18, L_20, &m9465_MI);
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
		bool L_25 = m9468(NULL, L_23, L_24, &m9468_MI);
		if (!L_25)
		{
			goto IL_00ce;
		}
	}
	{
		t126 * L_26 = p1;
		bool L_27 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, L_26);
		if (!L_27)
		{
			goto IL_006e;
		}
	}
	{
		t126 * L_28 = p1;
		t9 * L_29 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t8_TI));
		t9 * L_30 = m7611(NULL, L_28, L_29, &m7611_MI);
		return L_30;
	}

IL_006e:
	{
		t126 * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_32 = m329(NULL, LoadTypeToken(&t296_0_0_0), &m329_MI);
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
		double L_36 = (((double)((*(uint16_t*)((uint16_t*)UnBox (L_35, InitializedTypeInfo(&t296_TI)))))));
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
		float L_41 = (((float)((*(uint16_t*)((uint16_t*)UnBox (L_40, InitializedTypeInfo(&t296_TI)))))));
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
		bool L_46 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7730_MI, L_45);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t9 * L_50 = m11347(NULL, L_48, L_49, &m11347_MI);
		return L_50;
	}

IL_00ce:
	{
		return NULL;
	}
}
extern MethodInfo m9467_MI;
extern "C" void m9467 (t1796 * __this, t158** p0, t9 * p1, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" bool m9468 (t9 * __this , t126 * p0, t126 * p1, MethodInfo* method)
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
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7723_MI, L_3);
		t126 * L_5 = p0;
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7723_MI, L_5);
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
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7728_MI, L_7);
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		t126 * L_9 = p1;
		t126 * L_10 = p0;
		bool L_11 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4449_MI, L_9, L_10);
		return L_11;
	}

IL_002b:
	{
		t126 * L_12 = p1;
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, L_12);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		t126 * L_14 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t8_TI));
		t126 * L_15 = m7603(NULL, L_14, &m7603_MI);
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
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7777_MI, L_18);
		if (!L_19)
		{
			goto IL_006a;
		}
	}
	{
		t126 * L_20 = p1;
		t126 * L_21 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m7776_MI, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_22 = m329(NULL, LoadTypeToken(&t2167_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_21) == ((t9*)(t126 *)L_22))))
		{
			goto IL_006a;
		}
	}
	{
		t126 * L_23 = p1;
		t152* L_24 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m7772_MI, L_23);
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
		int32_t L_28 = m7744(NULL, L_27, &m7744_MI);
		V_0 = L_28;
		t126 * L_29 = p1;
		int32_t L_30 = m7744(NULL, L_29, &m7744_MI);
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
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, L_41);
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
		bool L_50 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, L_49);
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
		bool L_58 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, L_57);
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
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, L_65);
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
		bool L_74 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, L_73);
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
		bool L_82 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, L_81);
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
		bool L_91 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, L_90);
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
		bool L_100 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7733_MI, L_99);
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
		bool L_102 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7730_MI, L_101);
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
		bool L_107 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4449_MI, L_105, L_106);
		return L_107;
	}
}
extern "C" bool m9469 (t9 * __this , t152* p0, t921* p1, bool p2, MethodInfo* method)
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
		t921* L_3 = p1;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_3, L_5)));
		bool L_7 = m9468(NULL, (*(t126 **)(t126 **)SZArrayLdElema(L_0, L_2)), L_6, &m9468_MI);
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
		t921* L_10 = p1;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t126 * L_13 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_10, L_12)));
		V_2 = L_13;
		t126 * L_14 = V_2;
		bool L_15 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7723_MI, L_14);
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
		t126 * L_20 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11939_MI, L_19);
		bool L_21 = m9468(NULL, (*(t126 **)(t126 **)SZArrayLdElema(L_16, L_18)), L_20, &m9468_MI);
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
extern MethodInfo m9470_MI;
extern "C" t907 * m9470 (t1796 * __this, int32_t p0, t1797* p1, t152* p2, t928* p3, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t1797* L_1 = p1;
		t152* L_2 = p2;
		t928* L_3 = p3;
		t907 * L_4 = m9471(__this, L_0, L_1, L_2, L_3, 0, &m9471_MI);
		return L_4;
	}
}
extern "C" t907 * m9471 (t1796 * __this, int32_t p0, t1797* p1, t152* p2, t928* p3, bool p4, MethodInfo* method)
{
	t907 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t921* V_3 = {0};
	bool V_4 = false;
	t126 * V_5 = {0};
	t921* V_6 = {0};
	t907 * V_7 = {0};
	t921* V_8 = {0};
	{
		t1797* L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1246, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		V_1 = 0;
		goto IL_0050;
	}

IL_0012:
	{
		t1797* L_2 = p1;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		V_0 = (*(t907 **)(t907 **)SZArrayLdElema(L_2, L_4));
		t907 * L_5 = V_0;
		t921* L_6 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_5);
		V_3 = L_6;
		t921* L_7 = V_3;
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
		t921* L_12 = V_3;
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		t126 * L_15 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_12, L_14)));
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
		t907 * L_21 = V_0;
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
		t1797* L_24 = p1;
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
		t1797* L_25 = p1;
		int32_t L_26 = V_1;
		int32_t L_27 = L_26;
		V_0 = (*(t907 **)(t907 **)SZArrayLdElema(L_25, L_27));
		t907 * L_28 = V_0;
		t921* L_29 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_28);
		V_6 = L_29;
		t921* L_30 = V_6;
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
		t921* L_32 = V_6;
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
		t921* L_33 = V_6;
		t921* L_34 = V_6;
		int32_t L_35 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_34)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_36 = m329(NULL, LoadTypeToken(&t330_0_0_0), &m329_MI);
		bool L_37 = m7039(NULL, (*(t917 **)(t917 **)SZArrayLdElema(L_33, L_35)), L_36, &m7039_MI);
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
		t921* L_39 = V_6;
		t921* L_40 = V_6;
		int32_t L_41 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_40)->max_length)))-(int32_t)1));
		t126 * L_42 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_39, L_41)));
		t126 * L_43 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11939_MI, L_42);
		V_5 = L_43;
		V_2 = 0;
		goto IL_00f0;
	}

IL_00c1:
	{
		int32_t L_44 = V_2;
		t921* L_45 = V_6;
		if ((((int32_t)L_44) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_45)->max_length)))-(int32_t)1)))))
		{
			goto IL_00da;
		}
	}
	{
		t152* L_46 = p2;
		int32_t L_47 = V_2;
		int32_t L_48 = L_47;
		t921* L_49 = V_6;
		int32_t L_50 = V_2;
		int32_t L_51 = L_50;
		t126 * L_52 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_49, L_51)));
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
		t921* L_54 = V_6;
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
		t907 * L_64 = V_0;
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
		t1797* L_67 = p1;
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
		return (t907 *)NULL;
	}

IL_0116:
	{
		V_7 = (t907 *)NULL;
		V_1 = 0;
		goto IL_015b;
	}

IL_011d:
	{
		t1797* L_69 = p1;
		int32_t L_70 = V_1;
		int32_t L_71 = L_70;
		V_0 = (*(t907 **)(t907 **)SZArrayLdElema(L_69, L_71));
		t907 * L_72 = V_0;
		t921* L_73 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_72);
		V_8 = L_73;
		t921* L_74 = V_8;
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
		t921* L_77 = V_8;
		bool L_78 = p4;
		bool L_79 = m9469(NULL, L_76, L_77, L_78, &m9469_MI);
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
		t907 * L_80 = V_7;
		if (!L_80)
		{
			goto IL_0154;
		}
	}
	{
		t907 * L_81 = V_7;
		t907 * L_82 = V_0;
		t152* L_83 = p2;
		t907 * L_84 = m9472(__this, L_81, L_82, L_83, &m9472_MI);
		V_7 = L_84;
		goto IL_0157;
	}

IL_0154:
	{
		t907 * L_85 = V_0;
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
		t1797* L_88 = p1;
		if ((((int32_t)L_87) < ((int32_t)(((int32_t)(((t121 *)L_88)->max_length))))))
		{
			goto IL_011d;
		}
	}
	{
		t907 * L_89 = V_7;
		return L_89;
	}
}
extern "C" t907 * m9472 (t1796 * __this, t907 * p0, t907 * p1, t152* p2, MethodInfo* method)
{
	t921* V_0 = {0};
	t921* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t126 * V_5 = {0};
	t126 * V_6 = {0};
	bool V_7 = false;
	bool V_8 = false;
	t907 * G_B19_0 = {0};
	{
		t907 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9521_MI, L_0);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		t907 * L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9521_MI, L_2);
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		t907 * L_4 = p1;
		return L_4;
	}

IL_0012:
	{
		t907 * L_5 = p1;
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9521_MI, L_5);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		t907 * L_7 = p0;
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9521_MI, L_7);
		if (L_8)
		{
			goto IL_0024;
		}
	}
	{
		t907 * L_9 = p0;
		return L_9;
	}

IL_0024:
	{
		t907 * L_10 = p0;
		t921* L_11 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_10);
		V_0 = L_11;
		t907 * L_12 = p1;
		t921* L_13 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_12);
		V_1 = L_13;
		V_2 = 0;
		V_3 = 0;
		goto IL_006d;
	}

IL_0038:
	{
		t921* L_14 = V_0;
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		t126 * L_17 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_14, L_16)));
		t921* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		t126 * L_21 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_18, L_20)));
		int32_t L_22 = m9473(__this, L_17, L_21, &m9473_MI);
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
		t1789 * L_27 = (t1789 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1789_TI));
		m9416(L_27, &m9416_MI);
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
		t921* L_32 = V_0;
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
		t907 * L_35 = p1;
		G_B19_0 = L_35;
		goto IL_007e;
	}

IL_007d:
	{
		t907 * L_36 = p0;
		G_B19_0 = L_36;
	}

IL_007e:
	{
		return G_B19_0;
	}

IL_007f:
	{
		t907 * L_37 = p0;
		t126 * L_38 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_37);
		V_5 = L_38;
		t907 * L_39 = p1;
		t126 * L_40 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_39);
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
		bool L_45 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m7749_MI, L_43, L_44);
		if (!L_45)
		{
			goto IL_00a2;
		}
	}
	{
		t907 * L_46 = p0;
		return L_46;
	}

IL_00a2:
	{
		t126 * L_47 = V_6;
		t126 * L_48 = V_5;
		bool L_49 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m7749_MI, L_47, L_48);
		if (!L_49)
		{
			goto IL_00af;
		}
	}
	{
		t907 * L_50 = p1;
		return L_50;
	}

IL_00af:
	{
		t907 * L_51 = p0;
		int32_t L_52 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9516_MI, L_51);
		V_7 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_52&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t907 * L_53 = p1;
		int32_t L_54 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9516_MI, L_53);
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
		t907 * L_57 = p1;
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
		t907 * L_60 = p0;
		return L_60;
	}

IL_00e3:
	{
		t1789 * L_61 = (t1789 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1789_TI));
		m9416(L_61, &m9416_MI);
		il2cpp_codegen_raise_exception(L_61);
	}
}
extern MethodInfo* m11994_MI_var;
extern "C" int32_t m9473 (t1796 * __this, t126 * p0, t126 * p1, MethodInfo* method)
{
	static bool m9473_init;
	if (!m9473_init)
	{
		m11994_MI_var = il2cpp_codegen_genericmethod_get_method(&m11994_GM);
		m9473_init = true;
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
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7779_MI, L_2);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		t126 * L_4 = p1;
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7779_MI, L_4);
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
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7779_MI, L_6);
		if (L_7)
		{
			goto IL_002a;
		}
	}
	{
		t126 * L_8 = p1;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7779_MI, L_8);
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
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7721_MI, L_10);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		t126 * L_12 = p1;
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7721_MI, L_12);
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		t126 * L_14 = p0;
		t126 * L_15 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11939_MI, L_14);
		t126 * L_16 = p1;
		t126 * L_17 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11939_MI, L_16);
		int32_t L_18 = m9473(__this, L_15, L_17, &m9473_MI);
		return L_18;
	}

IL_004d:
	{
		t126 * L_19 = p0;
		t126 * L_20 = p1;
		bool L_21 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m7749_MI, L_19, L_20);
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
		bool L_24 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m7749_MI, L_22, L_23);
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
		bool L_26 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7728_MI, L_25);
		if (!L_26)
		{
			goto IL_007c;
		}
	}
	{
		t126 * L_27 = p1;
		t152* L_28 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m11991_MI, L_27);
		t126 * L_29 = p0;
		int32_t L_30 = m11994(NULL, L_28, L_29, m11994_MI_var);
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
		bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7728_MI, L_31);
		if (!L_32)
		{
			goto IL_0095;
		}
	}
	{
		t126 * L_33 = p0;
		t152* L_34 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m11991_MI, L_33);
		t126 * L_35 = p1;
		int32_t L_36 = m11994(NULL, L_34, L_35, m11994_MI_var);
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
extern MethodInfo m9474_MI;
extern "C" t830 * m9474 (t1796 * __this, int32_t p0, t922* p1, t126 * p2, t152* p3, t928* p4, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	t830 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t830 * V_7 = {0};
	t921* V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B6_0 = 0;
	{
		t922* L_0 = p1;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		t922* L_1 = p1;
		if ((((int32_t)(((t121 *)L_1)->max_length))))
		{
			goto IL_0018;
		}
	}

IL_0008:
	{
		t556 * L_2 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_2, (t2*) &_stringLiteral2022, (t2*) &_stringLiteral1246, &m5691_MI);
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
		V_2 = (t830 *)NULL;
		V_4 = ((int32_t)2147483646);
		V_5 = ((int32_t)2147483647);
		V_6 = 0;
		t922* L_6 = p1;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_6)->max_length)))-(int32_t)1));
		goto IL_00d6;
	}

IL_004a:
	{
		t922* L_7 = p1;
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		V_7 = (*(t830 **)(t830 **)SZArrayLdElema(L_7, L_9));
		t830 * L_10 = V_7;
		t921* L_11 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m11993_MI, L_10);
		V_8 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_13 = V_1;
		t921* L_14 = V_8;
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
		t830 * L_16 = V_7;
		t126 * L_17 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4375_MI, L_16);
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
		t921* L_21 = V_8;
		int32_t L_22 = m9475(NULL, L_20, L_21, &m9475_MI);
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
		t830 * L_24 = V_7;
		t126 * L_25 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		int32_t L_26 = m9481(NULL, L_25, &m9481_MI);
		V_10 = L_26;
		t830 * L_27 = V_2;
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
		t830 * L_37 = V_7;
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
		t1789 * L_44 = (t1789 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1789_TI));
		m9416(L_44, &m9416_MI);
		il2cpp_codegen_raise_exception(L_44);
	}

IL_00e9:
	{
		t830 * L_45 = V_2;
		return L_45;
	}
}
extern "C" int32_t m9475 (t9 * __this , t152* p0, t921* p1, MethodInfo* method)
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
		t921* L_3 = p1;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_3, L_5)));
		int32_t L_7 = m9476(NULL, (*(t126 **)(t126 **)SZArrayLdElema(L_0, L_2)), L_6, &m9476_MI);
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
extern "C" int32_t m9476 (t9 * __this , t126 * p0, t126 * p1, MethodInfo* method)
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
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7733_MI, L_1);
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
		int32_t L_8 = m7744(NULL, L_7, &m7744_MI);
		V_0 = L_8;
		t126 * L_9 = p1;
		int32_t L_10 = m7744(NULL, L_9, &m7744_MI);
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
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, L_17);
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
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, L_23);
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
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, L_29);
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
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, L_35);
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
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, L_41);
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
		bool L_48 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, L_47);
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
		bool L_55 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7726_MI, L_54);
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
		bool L_61 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4449_MI, L_59, L_60);
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

#include "t1817.h"
extern TypeInfo t1817_TI;
#include "t1817MD.h"
extern MethodInfo m9703_MI;
extern MethodInfo m11996_MI;
extern MethodInfo m4406_MI;


extern "C" void m9477 (t926 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9478_MI;
extern "C" void m9478 (t9 * __this , MethodInfo* method)
{
	{
		t1796 * L_0 = (t1796 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1796_TI));
		m9462(L_0, &m9462_MI);
		((t926_SFs*)InitializedTypeInfo(&t926_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern "C" t926 * m9479 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		t926 * L_0 = ((t926_SFs*)InitializedTypeInfo(&t926_TI)->static_fields)->f0;
		return L_0;
	}
}
extern MethodInfo m9480_MI;
extern "C" bool m9480 (t9 * __this , t926 * p0, t158* p1, t921* p2, t894 * p3, MethodInfo* method)
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
		t921* L_1 = p2;
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
		t1817 * L_2 = (t1817 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1817_TI));
		m9703(L_2, &m9703_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0010:
	{
		t921* L_3 = p2;
		t158* L_4 = p1;
		if ((((int32_t)(((int32_t)(((t121 *)L_3)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_4)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		t1817 * L_5 = (t1817 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1817_TI));
		m9703(L_5, &m9703_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001e:
	{
		V_0 = 0;
		goto IL_0047;
	}

IL_0022:
	{
		t926 * L_6 = p0;
		t158* L_7 = p1;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t921* L_10 = p2;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t126 * L_13 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_10, L_12)));
		t894 * L_14 = p3;
		t9 * L_15 = (t9 *)VirtFuncInvoker3< t9 *, t9 *, t126 *, t894 * >::Invoke(&m11996_MI, L_6, (*(t9 **)(t9 **)SZArrayLdElema(L_7, L_9)), L_13, L_14);
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
extern "C" int32_t m9481 (t9 * __this , t126 * p0, MethodInfo* method)
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
		t126 * L_3 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4406_MI, L_2);
		V_0 = L_3;
	}

IL_0011:
	{
		t126 * L_4 = V_0;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4406_MI, L_4);
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
extern "C" t907 * m9482 (t9 * __this , t1797* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t907 * V_4 = {0};
	int32_t V_5 = 0;
	t921* V_6 = {0};
	t921* V_7 = {0};
	bool V_8 = false;
	int32_t V_9 = 0;
	{
		V_0 = 0;
		V_1 = (-1);
		t1797* L_0 = p0;
		V_2 = (((int32_t)(((t121 *)L_0)->max_length)));
		V_3 = 0;
		goto IL_009c;
	}

IL_000f:
	{
		t1797* L_1 = p0;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		V_4 = (*(t907 **)(t907 **)SZArrayLdElema(L_1, L_3));
		t907 * L_4 = V_4;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		int32_t L_6 = m9481(NULL, L_5, &m9481_MI);
		V_5 = L_6;
		int32_t L_7 = V_5;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_002d;
		}
	}
	{
		t1789 * L_9 = (t1789 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1789_TI));
		m9416(L_9, &m9416_MI);
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
		t907 * L_11 = V_4;
		t921* L_12 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_11);
		V_6 = L_12;
		t1797* L_13 = p0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		t921* L_16 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, (*(t907 **)(t907 **)SZArrayLdElema(L_13, L_15)));
		V_7 = L_16;
		V_8 = 1;
		t921* L_17 = V_6;
		t921* L_18 = V_7;
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
		t921* L_19 = V_6;
		int32_t L_20 = V_9;
		int32_t L_21 = L_20;
		t126 * L_22 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_19, L_21)));
		t921* L_23 = V_7;
		int32_t L_24 = V_9;
		int32_t L_25 = L_24;
		t126 * L_26 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_23, L_25)));
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
		t921* L_29 = V_6;
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
		t1789 * L_31 = (t1789 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1789_TI));
		m9416(L_31, &m9416_MI);
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
		t1797* L_39 = p0;
		int32_t L_40 = V_1;
		int32_t L_41 = L_40;
		return (*(t907 **)(t907 **)SZArrayLdElema(L_39, L_41));
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t918MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t1564MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1563.h"
extern MethodInfo m9510_MI;
extern MethodInfo m11997_MI;


extern "C" void m9483 (t819 * __this, MethodInfo* method)
{
	{
		m9510(__this, &m9510_MI);
		return;
	}
}
extern MethodInfo m9484_MI;
extern "C" void m9484 (t9 * __this , MethodInfo* method)
{
	{
		((t819_SFs*)InitializedTypeInfo(&t819_TI)->static_fields)->f0 = (t2*) &_stringLiteral2023;
		((t819_SFs*)InitializedTypeInfo(&t819_TI)->static_fields)->f1 = (t2*) &_stringLiteral2024;
		return;
	}
}
extern MethodInfo m9485_MI;
extern "C" int32_t m9485 (t819 * __this, MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
extern MethodInfo m4392_MI;
extern TypeInfo* t158_TI_var;
extern "C" t9 * m4392 (t819 * __this, t158* p0, MethodInfo* method)
{
	static bool m4392_init;
	if (!m4392_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4392_init = true;
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
		t9 * L_2 = (t9 *)VirtFuncInvoker4< t9 *, int32_t, t926 *, t158*, t894 * >::Invoke(&m11997_MI, __this, ((int32_t)512), (t926 *)NULL, L_1, (t894 *)NULL);
		return L_2;
	}
}
#include "t1798.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1798_TI;
#include "t1798MD.h"



#include "t1799.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1799_TI;
#include "t1799MD.h"

#include "t286.h"


extern MethodInfo m9486_MI;
extern "C" void m9486 (t1799 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m9487_MI;
extern "C" void m9487 (t1799 * __this, t9 * p0, t286 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m9487((t1799 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t286 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, t286 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, t286 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1799(Il2CppObject* delegate, t9 * p0, t286 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m9488_MI;
extern "C" t9 * m9488 (t1799 * __this, t9 * p0, t286 * p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m9489_MI;
extern "C" void m9489 (t1799 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif
#include "t1560MD.h"

extern MethodInfo m11998_MI;
extern MethodInfo m7783_MI;


extern MethodInfo m9490_MI;
extern "C" void m9490 (t1560 * __this, MethodInfo* method)
{
	{
		m7783(__this, &m7783_MI);
		return;
	}
}
extern MethodInfo m9491_MI;
extern "C" t126 * m9491 (t1560 * __this, MethodInfo* method)
{
	t921* V_0 = {0};
	t821 * V_1 = {0};
	t126 * V_2 = {0};
	{
		t821 * L_0 = (t821 *)VirtFuncInvoker1< t821 *, bool >::Invoke(&m11998_MI, __this, 1);
		V_1 = L_0;
		t821 * L_1 = V_1;
		t921* L_2 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_1);
		V_0 = L_2;
		t921* L_3 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_3)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		t921* L_4 = V_0;
		int32_t L_5 = 0;
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_4, L_5)));
		V_2 = L_6;
		t126 * L_7 = V_2;
		return L_7;
	}

IL_0020:
	{
		return (t126 *)NULL;
	}
}
extern MethodInfo m9492_MI;
extern "C" int32_t m9492 (t1560 * __this, MethodInfo* method)
{
	{
		return (int32_t)(2);
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1756MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1360.h"
#include "t2126.h"
#include "t1576.h"
extern TypeInfo t1360_TI;
extern TypeInfo t2126_TI;
extern TypeInfo t1576_TI;
#include "t306MD.h"
#include "t2126MD.h"
#include "t1576MD.h"
extern MethodInfo m9500_MI;
extern MethodInfo m11999_MI;
extern MethodInfo m7788_MI;
extern MethodInfo m9497_MI;
extern MethodInfo m9496_MI;
extern MethodInfo m7727_MI;
extern MethodInfo m9501_MI;
extern MethodInfo m11639_MI;
extern MethodInfo m9499_MI;
extern MethodInfo m7807_MI;


extern MethodInfo m9493_MI;
extern "C" void m9493 (t823 * __this, MethodInfo* method)
{
	{
		m7783(__this, &m7783_MI);
		return;
	}
}
extern MethodInfo m9494_MI;
extern "C" int32_t m9494 (t823 * __this, MethodInfo* method)
{
	{
		return (int32_t)(4);
	}
}
extern MethodInfo m9495_MI;
extern "C" bool m9495 (t823 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11949_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4371_MI;
extern "C" bool m4371 (t823 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11949_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4378_MI;
extern "C" bool m4378 (t823 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11949_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4372_MI;
extern "C" bool m4372 (t823 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11949_MI, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)6))? 1 : 0);
	}
}
extern "C" bool m9496 (t823 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11949_MI, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128)))? 1 : 0);
	}
}
extern MethodInfo m4395_MI;
extern "C" void m4395 (t823 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		VirtActionInvoker5< t9 *, t9 *, int32_t, t926 *, t894 * >::Invoke(&m11999_MI, __this, L_0, L_1, 0, (t926 *)NULL, (t894 *)NULL);
		return;
	}
}
extern "C" t823 * m9497 (t9 * __this , t58 p0, t58 p1, MethodInfo* method)
{
	typedef t823 * (*m9497_ftn) (t58, t58);
	static m9497_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9497_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m9498_MI;
extern "C" t823 * m9498 (t9 * __this , t306  p0, MethodInfo* method)
{
	{
		t58 L_0 = m7788((&p0), &m7788_MI);
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_2 = m4436(NULL, L_0, L_1, &m4436_MI);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		t556 * L_3 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_3, (t2*) &_stringLiteral2025, &m2885_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		t58 L_4 = m7788((&p0), &m7788_MI);
		t58 L_5 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		t823 * L_6 = m9497(NULL, L_4, L_5, &m9497_MI);
		return L_6;
	}
}
extern "C" int32_t m9499 (t823 * __this, MethodInfo* method)
{
	{
		t1360 * L_0 = (t1360 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1360_TI));
		m5872(L_0, (t2*) &_stringLiteral2026, &m5872_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" t1755 * m9500 (t823 * __this, MethodInfo* method)
{
	typedef t1755 * (*m9500_ftn) (t823 *);
	static m9500_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9500_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::GetUnmanagedMarshal()");
	return _il2cpp_icall_func(__this);
}
extern "C" t1755 * m9501 (t823 * __this, MethodInfo* method)
{
	{
		t1755 * L_0 = m9500(__this, &m9500_MI);
		return L_0;
	}
}
extern MethodInfo m9502_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m9502 (t823 * __this, MethodInfo* method)
{
	static bool m9502_init;
	if (!m9502_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9502_init = true;
	}
	int32_t V_0 = 0;
	t1755 * V_1 = {0};
	t158* V_2 = {0};
	{
		V_0 = 0;
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9496_MI, __this);
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
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, __this);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7727_MI, L_2);
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
		t1755 * L_5 = (t1755 *)VirtFuncInvoker0< t1755 * >::Invoke(&m9501_MI, __this);
		V_1 = L_5;
		t1755 * L_6 = V_1;
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
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9496_MI, __this);
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
		t2126 * L_14 = (t2126 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2126_TI));
		m11639(L_14, &m11639_MI);
		ArrayElementTypeCheck (L_11, L_14);
		*((t9 **)(t9 **)SZArrayLdElema(L_11, L_13)) = (t9 *)L_14;
	}

IL_004f:
	{
		t126 * L_15 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, __this);
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7727_MI, L_15);
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
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9499_MI, __this);
		t1576 * L_21 = (t1576 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1576_TI));
		m7807(L_21, L_20, &m7807_MI);
		ArrayElementTypeCheck (L_17, L_21);
		*((t9 **)(t9 **)SZArrayLdElema(L_17, L_19)) = (t9 *)L_21;
	}

IL_006e:
	{
		t1755 * L_22 = V_1;
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
		t1755 * L_26 = V_1;
		t1569 * L_27 = m9415(L_26, &m9415_MI);
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

extern TypeInfo t302_TI;


extern "C" void m9503 (t1770 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9504_MI;
extern "C" t2* m9504 (t1770 * __this, MethodInfo* method)
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
		t9 * L_4 = Box(InitializedTypeInfo(&t302_TI), &L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_5 = m1190(NULL, (t2*) &_stringLiteral2027, L_1, L_4, &m1190_MI);
		return L_5;
	}

IL_0024:
	{
		t126 * L_6 = (__this->f0);
		uint16_t L_7 = (__this->f2);
		uint16_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t302_TI), &L_8);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m1190(NULL, (t2*) &_stringLiteral2028, L_6, L_9, &m1190_MI);
		return L_10;
	}
}
#include "t1800.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1800_TI;
#include "t1800MD.h"

#include "t1333.h"
extern TypeInfo t1333_TI;
extern TypeInfo t1563_TI;
#include "t1333MD.h"
extern Il2CppType t1800_0_0_0;
extern MethodInfo m9507_MI;
extern MethodInfo m10298_MI;
extern MethodInfo m5852_MI;
extern MethodInfo m5704_MI;
extern MethodInfo m9528_MI;
extern MethodInfo m9527_MI;
extern MethodInfo m9526_MI;
extern MethodInfo m7759_MI;


extern MethodInfo m9505_MI;
extern "C" void m9505 (t1800 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t1336 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		m336(__this, &m336_MI);
		t1093 * L_0 = p0;
		t2* L_1 = m5712(L_0, (t2*) &_stringLiteral2029, &m5712_MI);
		V_0 = L_1;
		t1093 * L_2 = p0;
		t2* L_3 = m5712(L_2, (t2*) &_stringLiteral1270, &m5712_MI);
		V_1 = L_3;
		t1093 * L_4 = p0;
		t2* L_5 = m5712(L_4, (t2*) &_stringLiteral2030, &m5712_MI);
		__this->f0 = L_5;
		t1093 * L_6 = p0;
		t2* L_7 = m5712(L_6, (t2*) &_stringLiteral655, &m5712_MI);
		__this->f1 = L_7;
		t1093 * L_8 = p0;
		int32_t L_9 = m5714(L_8, (t2*) &_stringLiteral2031, &m5714_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1333_TI, e.ex->object.klass))
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
		t1336 * L_11 = m9434(NULL, L_10, &m9434_MI);
		V_2 = L_11;
		t1336 * L_12 = V_2;
		t2* L_13 = V_1;
		t126 * L_14 = (t126 *)VirtFuncInvoker3< t126 *, t2*, bool, bool >::Invoke(&m9430_MI, L_12, L_13, 1, 1);
		__this->f3 = L_14;
		return;
	}
}
extern MethodInfo m9506_MI;
extern "C" void m9506 (t9 * __this , t1093 * p0, t2* p1, t126 * p2, t2* p3, int32_t p4, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t2* L_1 = p1;
		t126 * L_2 = p2;
		t2* L_3 = p3;
		int32_t L_4 = p4;
		m9507(NULL, L_0, L_1, L_2, L_3, L_4, (t152*)(t152*)NULL, &m9507_MI);
		return;
	}
}
extern "C" void m9507 (t9 * __this , t1093 * p0, t2* p1, t126 * p2, t2* p3, int32_t p4, t152* p5, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t1800_0_0_0), &m329_MI);
		m10298(L_0, L_1, &m10298_MI);
		t1093 * L_2 = p0;
		t126 * L_3 = p2;
		t1559 * L_4 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m11956_MI, L_3);
		t1336 * L_5 = m9536(L_4, &m9536_MI);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9423_MI, L_5);
		t126 * L_7 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5700(L_2, (t2*) &_stringLiteral2029, L_6, L_7, &m5700_MI);
		t1093 * L_8 = p0;
		t126 * L_9 = p2;
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_9);
		t126 * L_11 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5700(L_8, (t2*) &_stringLiteral1270, L_10, L_11, &m5700_MI);
		t1093 * L_12 = p0;
		t2* L_13 = p1;
		t126 * L_14 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5700(L_12, (t2*) &_stringLiteral2030, L_13, L_14, &m5700_MI);
		t1093 * L_15 = p0;
		t2* L_16 = p3;
		t126 * L_17 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5700(L_15, (t2*) &_stringLiteral655, L_16, L_17, &m5700_MI);
		t1093 * L_18 = p0;
		int32_t L_19 = p4;
		m5702(L_18, (t2*) &_stringLiteral2031, L_19, &m5702_MI);
		t1093 * L_20 = p0;
		t152* L_21 = p5;
		t126 * L_22 = m329(NULL, LoadTypeToken(&t152_0_0_0), &m329_MI);
		m5700(L_20, (t2*) &_stringLiteral2032, (t9 *)(t9 *)L_21, L_22, &m5700_MI);
		return;
	}
}
extern MethodInfo m9508_MI;
extern "C" void m9508 (t1800 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9509_MI;
extern "C" t9 * m9509 (t1800 * __this, t1094  p0, MethodInfo* method)
{
	t919* V_0 = {0};
	int32_t V_1 = 0;
	t1561* V_2 = {0};
	int32_t V_3 = 0;
	t821 * V_4 = {0};
	t823 * V_5 = {0};
	t830 * V_6 = {0};
	t1560 * V_7 = {0};
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
		t919* L_4 = (t919*)VirtFuncInvoker1< t919*, int32_t >::Invoke(&m11955_MI, L_3, ((int32_t)60));
		V_0 = L_4;
		V_1 = 0;
		goto IL_006e;
	}

IL_0051:
	{
		t919* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		t2* L_8 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, (*(t819 **)(t819 **)SZArrayLdElema(L_5, L_7)));
		t2* L_9 = (__this->f1);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(&m5852_MI, L_8, L_9);
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		t919* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		return (*(t819 **)(t819 **)SZArrayLdElema(L_11, L_13));
	}

IL_006a:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_15 = V_1;
		t919* L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t121 *)L_16)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		t2* L_17 = (__this->f1);
		t126 * L_18 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_19 = m1190(NULL, (t2*) &_stringLiteral2033, L_17, L_18, &m1190_MI);
		t1333 * L_20 = (t1333 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1333_TI));
		m5704(L_20, L_19, &m5704_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0090:
	{
		t126 * L_21 = (__this->f3);
		t1561* L_22 = (t1561*)VirtFuncInvoker1< t1561*, int32_t >::Invoke(&m11992_MI, L_21, ((int32_t)60));
		V_2 = L_22;
		V_3 = 0;
		goto IL_010c;
	}

IL_00a2:
	{
		t1561* L_23 = V_2;
		int32_t L_24 = V_3;
		int32_t L_25 = L_24;
		t2* L_26 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, (*(t821 **)(t821 **)SZArrayLdElema(L_23, L_25)));
		t2* L_27 = (__this->f1);
		bool L_28 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(&m5852_MI, L_26, L_27);
		if (!L_28)
		{
			goto IL_00bb;
		}
	}
	{
		t1561* L_29 = V_2;
		int32_t L_30 = V_3;
		int32_t L_31 = L_30;
		return (*(t821 **)(t821 **)SZArrayLdElema(L_29, L_31));
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
		t1561* L_33 = V_2;
		int32_t L_34 = V_3;
		int32_t L_35 = L_34;
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9528_MI, (*(t821 **)(t821 **)SZArrayLdElema(L_33, L_35)));
		if (!L_36)
		{
			goto IL_0108;
		}
	}
	{
		t1561* L_37 = V_2;
		int32_t L_38 = V_3;
		int32_t L_39 = L_38;
		t152* L_40 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9527_MI, (*(t821 **)(t821 **)SZArrayLdElema(L_37, L_39)));
		t152* L_41 = (__this->f4);
		if ((!(((uint32_t)(((int32_t)(((t121 *)L_40)->max_length)))) == ((uint32_t)(((int32_t)(((t121 *)L_41)->max_length)))))))
		{
			goto IL_0108;
		}
	}
	{
		t1561* L_42 = V_2;
		int32_t L_43 = V_3;
		int32_t L_44 = L_43;
		t152* L_45 = (__this->f4);
		t821 * L_46 = (t821 *)VirtFuncInvoker1< t821 *, t152* >::Invoke(&m9526_MI, (*(t821 **)(t821 **)SZArrayLdElema(L_42, L_44)), L_45);
		V_4 = L_46;
		t821 * L_47 = V_4;
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
		t821 * L_51 = V_4;
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
		t1561* L_54 = V_2;
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)(((t121 *)L_54)->max_length))))))
		{
			goto IL_00a2;
		}
	}
	{
		t2* L_55 = (__this->f1);
		t126 * L_56 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_57 = m1190(NULL, (t2*) &_stringLiteral2034, L_55, L_56, &m1190_MI);
		t1333 * L_58 = (t1333 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1333_TI));
		m5704(L_58, L_57, &m5704_MI);
		il2cpp_codegen_raise_exception(L_58);
	}

IL_012e:
	{
		t126 * L_59 = (__this->f3);
		t2* L_60 = (__this->f0);
		t823 * L_61 = (t823 *)VirtFuncInvoker2< t823 *, t2*, int32_t >::Invoke(&m11990_MI, L_59, L_60, ((int32_t)60));
		V_5 = L_61;
		t823 * L_62 = V_5;
		if (!L_62)
		{
			goto IL_014a;
		}
	}
	{
		t823 * L_63 = V_5;
		return L_63;
	}

IL_014a:
	{
		t2* L_64 = (__this->f0);
		t126 * L_65 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_66 = m1190(NULL, (t2*) &_stringLiteral2035, L_64, L_65, &m1190_MI);
		t1333 * L_67 = (t1333 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1333_TI));
		m5704(L_67, L_66, &m5704_MI);
		il2cpp_codegen_raise_exception(L_67);
	}

IL_0166:
	{
		t126 * L_68 = (__this->f3);
		t2* L_69 = (__this->f0);
		t830 * L_70 = (t830 *)VirtFuncInvoker2< t830 *, t2*, int32_t >::Invoke(&m7759_MI, L_68, L_69, ((int32_t)60));
		V_6 = L_70;
		t830 * L_71 = V_6;
		if (!L_71)
		{
			goto IL_0182;
		}
	}
	{
		t830 * L_72 = V_6;
		return L_72;
	}

IL_0182:
	{
		t2* L_73 = (__this->f0);
		t126 * L_74 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_75 = m1190(NULL, (t2*) &_stringLiteral2036, L_73, L_74, &m1190_MI);
		t1333 * L_76 = (t1333 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1333_TI));
		m5704(L_76, L_75, &m5704_MI);
		il2cpp_codegen_raise_exception(L_76);
	}

IL_019e:
	{
		t126 * L_77 = (__this->f3);
		t2* L_78 = (__this->f0);
		t1560 * L_79 = (t1560 *)VirtFuncInvoker2< t1560 *, t2*, int32_t >::Invoke(&m11989_MI, L_77, L_78, ((int32_t)60));
		V_7 = L_79;
		t1560 * L_80 = V_7;
		if (!L_80)
		{
			goto IL_01ba;
		}
	}
	{
		t1560 * L_81 = V_7;
		return L_81;
	}

IL_01ba:
	{
		t2* L_82 = (__this->f0);
		t126 * L_83 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_84 = m1190(NULL, (t2*) &_stringLiteral2037, L_82, L_83, &m1190_MI);
		t1333 * L_85 = (t1333 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1333_TI));
		m5704(L_85, L_84, &m5704_MI);
		il2cpp_codegen_raise_exception(L_85);
	}

IL_01d6:
	{
		int32_t L_86 = (__this->f2);
		int32_t L_87 = L_86;
		t9 * L_88 = Box(InitializedTypeInfo(&t1563_TI), &L_87);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_89 = m590(NULL, (t2*) &_stringLiteral2038, L_88, &m590_MI);
		t1333 * L_90 = (t1333 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1333_TI));
		m5704(L_90, L_89, &m5704_MI);
		il2cpp_codegen_raise_exception(L_90);
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1563MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t1748MD.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m9512_MI;
extern MethodInfo m9514_MI;
extern MethodInfo m7774_MI;
extern MethodInfo m12000_MI;
extern MethodInfo m379_MI;


extern "C" void m9510 (t907 * __this, MethodInfo* method)
{
	{
		m7783(__this, &m7783_MI);
		return;
	}
}
extern MethodInfo m9511_MI;
extern "C" t907 * m9511 (t9 * __this , t1749  p0, MethodInfo* method)
{
	{
		t58 L_0 = m11762((&p0), &m11762_MI);
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		t907 * L_2 = m9512(NULL, L_0, L_1, &m9512_MI);
		return L_2;
	}
}
extern "C" t907 * m9512 (t9 * __this , t58 p0, t58 p1, MethodInfo* method)
{
	t907 * V_0 = {0};
	{
		t58 L_0 = p0;
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_2 = m4436(NULL, L_0, L_1, &m4436_MI);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		t556 * L_3 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_3, (t2*) &_stringLiteral2025, &m2885_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		t58 L_4 = p0;
		t58 L_5 = p1;
		t907 * L_6 = m9514(NULL, L_4, L_5, &m9514_MI);
		V_0 = L_6;
		t907 * L_7 = V_0;
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		t556 * L_8 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_8, (t2*) &_stringLiteral2025, &m2885_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_002e:
	{
		t907 * L_9 = V_0;
		return L_9;
	}
}
extern MethodInfo m9513_MI;
extern "C" t907 * m9513 (t9 * __this , t1749  p0, MethodInfo* method)
{
	t907 * V_0 = {0};
	t126 * V_1 = {0};
	{
		t58 L_0 = m11762((&p0), &m11762_MI);
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		t907 * L_2 = m9512(NULL, L_0, L_1, &m9512_MI);
		V_0 = L_2;
		t907 * L_3 = V_0;
		t126 * L_4 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_3);
		V_1 = L_4;
		t126 * L_5 = V_1;
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7777_MI, L_5);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		t126 * L_7 = V_1;
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7774_MI, L_7);
		if (!L_8)
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		t556 * L_9 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_9, (t2*) &_stringLiteral2039, &m2885_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0034:
	{
		t907 * L_10 = V_0;
		return L_10;
	}
}
extern "C" t907 * m9514 (t9 * __this , t58 p0, t58 p1, MethodInfo* method)
{
	typedef t907 * (*m9514_ftn) (t58, t58);
	static m9514_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9514_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m9515 (t907 * __this, MethodInfo* method)
{
	t921* V_0 = {0};
	{
		t921* L_0 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, __this);
		V_0 = L_0;
		t921* L_1 = V_0;
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
		t921* L_2 = V_0;
		return (((int32_t)(((t121 *)L_2)->max_length)));
	}
}
extern "C" t9 * m4393 (t907 * __this, t9 * p0, t158* p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t158* L_1 = p1;
		t9 * L_2 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t926 *, t158*, t894 * >::Invoke(&m12000_MI, __this, L_0, 0, (t926 *)NULL, L_1, (t894 *)NULL);
		return L_2;
	}
}
extern "C" int32_t m9516 (t907 * __this, MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
extern MethodInfo m4366_MI;
extern "C" bool m4366 (t907 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11948_MI, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)6))? 1 : 0);
	}
}
extern "C" bool m4365 (t907 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11948_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9517_MI;
extern "C" bool m9517 (t907 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11948_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9518_MI;
extern "C" int32_t m9518 (t907 * __this, t9 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	t1758 * V_0 = {0};
	t1743 * V_1 = {0};
	{
		if (!((t1758 *)IsInst(__this, InitializedTypeInfo(&t1758_TI))))
		{
			goto IL_0019;
		}
	}
	{
		V_0 = ((t1758 *)Castclass(__this, InitializedTypeInfo(&t1758_TI)));
		t1758 * L_0 = V_0;
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = p2;
		int32_t L_4 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, bool >::Invoke(&m9272_MI, L_0, L_1, L_2, L_3);
		return L_4;
	}

IL_0019:
	{
		if (!((t1743 *)IsInst(__this, InitializedTypeInfo(&t1743_TI))))
		{
			goto IL_0032;
		}
	}
	{
		V_1 = ((t1743 *)Castclass(__this, InitializedTypeInfo(&t1743_TI)));
		t1743 * L_5 = V_1;
		t9 * L_6 = p0;
		int32_t L_7 = p1;
		bool L_8 = p2;
		int32_t L_9 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, bool >::Invoke(&m9101_MI, L_5, L_6, L_7, L_8);
		return L_9;
	}

IL_0032:
	{
		t138 * L_10 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_10, (t2*) &_stringLiteral2040, &m379_MI);
		il2cpp_codegen_raise_exception(L_10);
	}
}
extern MethodInfo m9519_MI;
extern "C" t152* m9519 (t907 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9520_MI;
extern "C" bool m9520 (t907 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m9521 (t907 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9522_MI;
extern "C" bool m9522 (t907 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1772_TI;
#include "t1772MD.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m7770_MI;


extern "C" void m9523 (t821 * __this, MethodInfo* method)
{
	{
		m9510(__this, &m9510_MI);
		return;
	}
}
extern MethodInfo m9524_MI;
extern "C" int32_t m9524 (t821 * __this, MethodInfo* method)
{
	{
		return (int32_t)(8);
	}
}
extern "C" t126 * m9525 (t821 * __this, MethodInfo* method)
{
	{
		return (t126 *)NULL;
	}
}
extern "C" t821 * m9526 (t821 * __this, t152* p0, MethodInfo* method)
{
	{
		t126 * L_0 = m2486(__this, &m2486_MI);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7770_MI, L_0);
		t169 * L_2 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_2, L_1, &m5706_MI);
		il2cpp_codegen_raise_exception(L_2);
	}
}
extern "C" t152* m9527 (t821 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_0 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		return L_0;
	}
}
extern "C" bool m9528 (t821 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9529_MI;
extern "C" bool m9529 (t821 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9530_MI;
extern "C" bool m9530 (t821 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
#include "t1801.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1801_TI;
#include "t1801MD.h"

extern MethodInfo m9531_MI;


extern "C" void m9531 (t1801 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9532_MI;
extern "C" void m9532 (t9 * __this , MethodInfo* method)
{
	{
		t1801 * L_0 = (t1801 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1801_TI));
		m9531(L_0, &m9531_MI);
		((t1801_SFs*)InitializedTypeInfo(&t1801_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m9533_MI;
extern "C" void m9533 (t1801 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1802.h"
extern TypeInfo t1802_TI;
#include "t1802MD.h"
#include "t2142MD.h"
extern MethodInfo m9546_MI;
extern MethodInfo m11887_MI;
extern MethodInfo m9547_MI;
extern MethodInfo m11850_MI;
extern MethodInfo m9542_MI;
extern MethodInfo m4255_MI;
extern MethodInfo m5903_MI;


extern "C" void m9534 (t1559 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9535_MI;
extern "C" void m9535 (t9 * __this , MethodInfo* method)
{
	{
		t58 L_0 = { &m9546_MI };
		t1802 * L_1 = (t1802 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1802_TI));
		m11887(L_1, NULL, L_0, &m11887_MI);
		((t1559_SFs*)InitializedTypeInfo(&t1559_TI)->static_fields)->f1 = L_1;
		t58 L_2 = { &m9547_MI };
		t1802 * L_3 = (t1802 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1802_TI));
		m11887(L_3, NULL, L_2, &m11887_MI);
		((t1559_SFs*)InitializedTypeInfo(&t1559_TI)->static_fields)->f2 = L_3;
		return;
	}
}
extern "C" t1336 * m9536 (t1559 * __this, MethodInfo* method)
{
	{
		t1336 * L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t2* m9537 (t1559 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" t2* m9538 (t1559 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9539_MI;
extern "C" t158* m9539 (t1559 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_2 = m11576(NULL, __this, L_0, L_1, &m11576_MI);
		return L_2;
	}
}
extern MethodInfo m9540_MI;
extern "C" void m9540 (t1559 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral418, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1093 * L_2 = p0;
		t1094  L_3 = p1;
		m11850(NULL, __this, L_2, L_3, &m11850_MI);
		return;
	}
}
extern MethodInfo m9541_MI;
extern "C" t126 * m9541 (t1559 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t126 * L_1 = (t126 *)VirtFuncInvoker3< t126 *, t2*, bool, bool >::Invoke(&m9542_MI, __this, L_0, 0, 0);
		return L_1;
	}
}
extern "C" t126 * m9542 (t1559 * __this, t2* p0, bool p1, bool p2, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1761, &m339_MI);
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
		t556 * L_5 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_5, (t2*) &_stringLiteral2041, &m2885_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0026:
	{
		t1336 * L_6 = (__this->f4);
		t2* L_7 = p0;
		bool L_8 = p1;
		bool L_9 = p2;
		t126 * L_10 = m9429(L_6, __this, L_7, L_8, L_9, &m9429_MI);
		return L_10;
	}
}
extern MethodInfo m9543_MI;
extern "C" bool m9543 (t1559 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		bool L_2 = m11578(NULL, __this, L_0, L_1, &m11578_MI);
		return L_2;
	}
}
extern "C" bool m9544 (t1559 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m9545_MI;
extern "C" t2* m9545 (t1559 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" bool m9546 (t9 * __this , t126 * p0, t9 * p1, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t9 * L_0 = p1;
		V_0 = ((t2*)Castclass(L_0, (&t2_TI)));
		t2* L_1 = V_0;
		bool L_2 = m4421(L_1, (t2*) &_stringLiteral726, &m4421_MI);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		t126 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_3);
		t2* L_5 = V_0;
		t2* L_6 = V_0;
		int32_t L_7 = m2699(L_6, &m2699_MI);
		t2* L_8 = m2715(L_5, 0, ((int32_t)((int32_t)L_7-(int32_t)1)), &m2715_MI);
		bool L_9 = m4255(L_4, L_8, &m4255_MI);
		return L_9;
	}

IL_002f:
	{
		t126 * L_10 = p0;
		t2* L_11 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_10);
		t2* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_13 = m331(NULL, L_11, L_12, &m331_MI);
		return L_13;
	}
}
extern "C" bool m9547 (t9 * __this , t126 * p0, t9 * p1, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t9 * L_0 = p1;
		V_0 = ((t2*)Castclass(L_0, (&t2_TI)));
		t2* L_1 = V_0;
		bool L_2 = m4421(L_1, (t2*) &_stringLiteral726, &m4421_MI);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		t126 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_3);
		t2* L_5 = m5903(L_4, &m5903_MI);
		t2* L_6 = V_0;
		t2* L_7 = V_0;
		int32_t L_8 = m2699(L_7, &m2699_MI);
		t2* L_9 = m2715(L_6, 0, ((int32_t)((int32_t)L_8-(int32_t)1)), &m2715_MI);
		t2* L_10 = m5903(L_9, &m5903_MI);
		bool L_11 = m4255(L_5, L_10, &m4255_MI);
		return L_11;
	}

IL_0039:
	{
		t126 * L_12 = p0;
		t2* L_13 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_12);
		t2* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_15 = m7326(NULL, L_13, L_14, 1, &m7326_MI);
		return ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
	}
}
#include "t1803.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1803_TI;
#include "t1803MD.h"

#include "t1804.h"
extern MethodInfo m9548_MI;


extern "C" void m9548 (t9 * __this , t1804 * p0, t1803 * p1, MethodInfo* method)
{
	typedef void (*m9548_ftn) (t1804 *, t1803 *);
	static m9548_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9548_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m9549_MI;
extern "C" t1803  m9549 (t9 * __this , t1804 * p0, MethodInfo* method)
{
	t1803  V_0 = {0};
	{
		t1804 * L_0 = p0;
		m9548(NULL, L_0, (&V_0), &m9548_MI);
		t1803  L_1 = V_0;
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1804_TI;
#include "t1804MD.h"

extern MethodInfo m9555_MI;
extern MethodInfo m2395_MI;
extern MethodInfo m9554_MI;
extern MethodInfo m9556_MI;


extern MethodInfo m9550_MI;
extern "C" void m9550 (t1804 * __this, MethodInfo* method)
{
	{
		m9490(__this, &m9490_MI);
		return;
	}
}
extern MethodInfo m9551_MI;
extern "C" int32_t m9551 (t1804 * __this, MethodInfo* method)
{
	t1803  V_0 = {0};
	{
		t1803  L_0 = m9549(NULL, __this, &m9549_MI);
		V_0 = L_0;
		int32_t L_1 = ((&V_0)->f6);
		return L_1;
	}
}
extern MethodInfo m9552_MI;
extern "C" t821 * m9552 (t1804 * __this, bool p0, MethodInfo* method)
{
	t1803  V_0 = {0};
	{
		t1803  L_0 = m9549(NULL, __this, &m9549_MI);
		V_0 = L_0;
		bool L_1 = p0;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		t821 * L_2 = ((&V_0)->f3);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		t821 * L_3 = ((&V_0)->f3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4366_MI, L_3);
		if (!L_4)
		{
			goto IL_0029;
		}
	}

IL_0021:
	{
		t821 * L_5 = ((&V_0)->f3);
		return L_5;
	}

IL_0029:
	{
		return (t821 *)NULL;
	}
}
extern MethodInfo m9553_MI;
extern "C" t126 * m9553 (t1804 * __this, MethodInfo* method)
{
	t1803  V_0 = {0};
	{
		t1803  L_0 = m9549(NULL, __this, &m9549_MI);
		V_0 = L_0;
		t126 * L_1 = ((&V_0)->f0);
		return L_1;
	}
}
extern "C" t126 * m9554 (t1804 * __this, MethodInfo* method)
{
	t1803  V_0 = {0};
	{
		t1803  L_0 = m9549(NULL, __this, &m9549_MI);
		V_0 = L_0;
		t126 * L_1 = ((&V_0)->f1);
		return L_1;
	}
}
extern "C" t2* m9555 (t1804 * __this, MethodInfo* method)
{
	t1803  V_0 = {0};
	{
		t1803  L_0 = m9549(NULL, __this, &m9549_MI);
		V_0 = L_0;
		t2* L_1 = ((&V_0)->f2);
		return L_1;
	}
}
extern "C" t2* m9556 (t1804 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9491_MI, __this);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9555_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2395(NULL, L_0, (t2*) &_stringLiteral168, L_1, &m2395_MI);
		return L_2;
	}
}
extern MethodInfo m9557_MI;
extern "C" bool m9557 (t1804 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		bool L_2 = m11578(NULL, __this, L_0, L_1, &m11578_MI);
		return L_2;
	}
}
extern MethodInfo m9558_MI;
extern "C" t158* m9558 (t1804 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_1 = m11577(NULL, __this, L_0, &m11577_MI);
		return L_1;
	}
}
extern MethodInfo m9559_MI;
extern "C" t158* m9559 (t1804 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_2 = m11576(NULL, __this, L_0, L_1, &m11576_MI);
		return L_2;
	}
}
extern MethodInfo m9560_MI;
extern "C" void m9560 (t1804 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9555_MI, __this);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9554_MI, __this);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9556_MI, __this);
		m9506(NULL, L_0, L_1, L_2, L_3, 2, &m9506_MI);
		return;
	}
}
#include "t1805.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1805_TI;
#include "t1805MD.h"

#include "t1815.h"
#include "t2111.h"
extern TypeInfo t1815_TI;
extern TypeInfo t2111_TI;
#include "t1815MD.h"
#include "t2111MD.h"
extern MethodInfo m9565_MI;
extern MethodInfo m9698_MI;
extern MethodInfo m9580_MI;
extern MethodInfo m9573_MI;
extern MethodInfo m11510_MI;
extern MethodInfo m9576_MI;
extern MethodInfo m9561_MI;
extern MethodInfo m9568_MI;
extern MethodInfo m9566_MI;
extern MethodInfo m9575_MI;
extern MethodInfo m9567_MI;
extern MethodInfo m7773_MI;


extern "C" void m9561 (t1805 * __this, MethodInfo* method)
{
	{
		m9493(__this, &m9493_MI);
		return;
	}
}
extern MethodInfo m9562_MI;
extern "C" int32_t m9562 (t1805 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9563_MI;
extern "C" t306  m9563 (t1805 * __this, MethodInfo* method)
{
	{
		t306  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9564_MI;
extern "C" t126 * m9564 (t1805 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" t126 * m9565 (t1805 * __this, bool p0, MethodInfo* method)
{
	typedef t126 * (*m9565_ftn) (t1805 *, bool);
	static m9565_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9565_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetParentType(System.Boolean)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t126 * m9566 (t1805 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = m9565(__this, 0, &m9565_MI);
		return L_0;
	}
}
extern "C" t126 * m9567 (t1805 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = m9565(__this, 1, &m9565_MI);
		return L_0;
	}
}
extern "C" t2* m9568 (t1805 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9569_MI;
extern "C" bool m9569 (t1805 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		bool L_2 = m11578(NULL, __this, L_0, L_1, &m11578_MI);
		return L_2;
	}
}
extern MethodInfo m9570_MI;
extern "C" t158* m9570 (t1805 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_1 = m11577(NULL, __this, L_0, &m11577_MI);
		return L_1;
	}
}
extern MethodInfo m9571_MI;
extern "C" t158* m9571 (t1805 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_2 = m11576(NULL, __this, L_0, L_1, &m11576_MI);
		return L_2;
	}
}
extern MethodInfo m9572_MI;
extern "C" int32_t m9572 (t1805 * __this, MethodInfo* method)
{
	typedef int32_t (*m9572_ftn) (t1805 *);
	static m9572_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9572_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetFieldOffset()");
	return _il2cpp_icall_func(__this);
}
extern "C" t9 * m9573 (t1805 * __this, t9 * p0, MethodInfo* method)
{
	typedef t9 * (*m9573_ftn) (t1805 *, t9 *);
	static m9573_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9573_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetValueInternal(System.Object)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m9574_MI;
extern "C" t9 * m9574 (t1805 * __this, t9 * p0, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4371_MI, __this);
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
		t1815 * L_2 = (t1815 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1815_TI));
		m9698(L_2, (t2*) &_stringLiteral2042, &m9698_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9495_MI, __this);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		m9580(__this, &m9580_MI);
	}

IL_0024:
	{
		t9 * L_4 = p0;
		t9 * L_5 = m9573(__this, L_4, &m9573_MI);
		return L_5;
	}
}
extern "C" t2* m9575 (t1805 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f3);
		t2* L_1 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m1190(NULL, (t2*) &_stringLiteral2043, L_0, L_1, &m1190_MI);
		return L_2;
	}
}
extern "C" void m9576 (t9 * __this , t823 * p0, t9 * p1, t9 * p2, MethodInfo* method)
{
	typedef void (*m9576_ftn) (t823 *, t9 *, t9 *);
	static m9576_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9576_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m9577_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m9577 (t1805 * __this, t9 * p0, t9 * p1, int32_t p2, t926 * p3, t894 * p4, MethodInfo* method)
{
	static bool m9577_init;
	if (!m9577_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9577_init = true;
	}
	t9 * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4371_MI, __this);
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
		t1815 * L_2 = (t1815 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1815_TI));
		m9698(L_2, (t2*) &_stringLiteral2042, &m9698_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9495_MI, __this);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		t2111 * L_4 = (t2111 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2111_TI));
		m11510(L_4, (t2*) &_stringLiteral2044, &m11510_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		t926 * L_5 = p3;
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		t926 * L_6 = m9479(NULL, &m9479_MI);
		p3 = L_6;
	}

IL_0036:
	{
		m9580(__this, &m9580_MI);
		t9 * L_7 = p1;
		if (!L_7)
		{
			goto IL_0090;
		}
	}
	{
		t926 * L_8 = p3;
		t9 * L_9 = p1;
		t126 * L_10 = (__this->f3);
		t894 * L_11 = p4;
		t9 * L_12 = (t9 *)VirtFuncInvoker3< t9 *, t9 *, t126 *, t894 * >::Invoke(&m11996_MI, L_8, L_9, L_10, L_11);
		V_0 = L_12;
		t9 * L_13 = V_0;
		if (L_13)
		{
			goto IL_008b;
		}
	}
	{
		t158* L_14 = ((t158*)SZArrayNew(t158_TI_var, 4));
		ArrayElementTypeCheck (L_14, (t2*) &_stringLiteral2045);
		*((t9 **)(t9 **)SZArrayLdElema(L_14, 0)) = (t9 *)(t2*) &_stringLiteral2045;
		t158* L_15 = L_14;
		t9 * L_16 = p1;
		t126 * L_17 = m2486(L_16, &m2486_MI);
		ArrayElementTypeCheck (L_15, L_17);
		*((t9 **)(t9 **)SZArrayLdElema(L_15, 1)) = (t9 *)L_17;
		t158* L_18 = L_15;
		ArrayElementTypeCheck (L_18, (t2*) &_stringLiteral2046);
		*((t9 **)(t9 **)SZArrayLdElema(L_18, 2)) = (t9 *)(t2*) &_stringLiteral2046;
		t158* L_19 = L_18;
		t126 * L_20 = (__this->f3);
		ArrayElementTypeCheck (L_19, L_20);
		*((t9 **)(t9 **)SZArrayLdElema(L_19, 3)) = (t9 *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_21 = m515(NULL, L_19, &m515_MI);
		t556 * L_22 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_22, L_21, (t2*) &_stringLiteral2047, &m5691_MI);
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
		m9576(NULL, __this, L_24, L_25, &m9576_MI);
		return;
	}
}
extern MethodInfo m9578_MI;
extern "C" t1805 * m9578 (t1805 * __this, t2* p0, MethodInfo* method)
{
	t1805 * V_0 = {0};
	{
		t1805 * L_0 = (t1805 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1805_TI));
		m9561(L_0, &m9561_MI);
		V_0 = L_0;
		t1805 * L_1 = V_0;
		t2* L_2 = p0;
		L_1->f2 = L_2;
		t1805 * L_3 = V_0;
		t126 * L_4 = (__this->f3);
		L_3->f3 = L_4;
		t1805 * L_5 = V_0;
		int32_t L_6 = (__this->f4);
		L_5->f4 = L_6;
		t1805 * L_7 = V_0;
		t58 L_8 = (__this->f0);
		L_7->f0 = L_8;
		t1805 * L_9 = V_0;
		t306  L_10 = (__this->f1);
		L_9->f1 = L_10;
		t1805 * L_11 = V_0;
		return L_11;
	}
}
extern MethodInfo m9579_MI;
extern "C" void m9579 (t1805 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9568_MI, __this);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9566_MI, __this);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9575_MI, __this);
		m9506(NULL, L_0, L_1, L_2, L_3, 4, &m9506_MI);
		return;
	}
}
extern "C" void m9580 (t1805 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9567_MI, __this);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7773_MI, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		t1332 * L_2 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_2, (t2*) &_stringLiteral2048, &m5685_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		return;
	}
}
#include "t1806.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1806_TI;
#include "t1806MD.h"

extern MethodInfo m9593_MI;


extern MethodInfo m9581_MI;
extern "C" void m9581 (t1806 * __this, MethodInfo* method)
{
	{
		m9593(__this, &m9593_MI);
		t1332 * L_0 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_0, &m5692_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9582_MI;
extern "C" t126 * m9582 (t1806 * __this, MethodInfo* method)
{
	typedef t126 * (*m9582_ftn) (t1806 *);
	static m9582_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9582_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
#include "t1807.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1807_TI;
#include "t1807MD.h"

#include "t1808MD.h"
extern MethodInfo m9622_MI;


extern MethodInfo m9583_MI;
extern "C" void m9583 (t1807 * __this, MethodInfo* method)
{
	{
		m9622(__this, &m9622_MI);
		t1332 * L_0 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_0, &m5692_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9584_MI;
extern "C" t126 * m9584 (t1807 * __this, MethodInfo* method)
{
	typedef t126 * (*m9584_ftn) (t1807 *);
	static m9584_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9584_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericCMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
#include "t1809.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1809_TI;
#include "t1809MD.h"

extern MethodInfo m9585_MI;
extern MethodInfo m9586_MI;
extern MethodInfo m9591_MI;


extern "C" void m9585 (t9 * __this , t58 p0, t1809 * p1, MethodInfo* method)
{
	typedef void (*m9585_ftn) (t58, t1809 *);
	static m9585_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9585_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" t1809  m9586 (t9 * __this , t58 p0, MethodInfo* method)
{
	t1809  V_0 = {0};
	{
		t58 L_0 = p0;
		m9585(NULL, L_0, (&V_0), &m9585_MI);
		t1809  L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m9587_MI;
extern "C" t126 * m9587 (t9 * __this , t58 p0, MethodInfo* method)
{
	t1809  V_0 = {0};
	{
		t58 L_0 = p0;
		t1809  L_1 = m9586(NULL, L_0, &m9586_MI);
		V_0 = L_1;
		t126 * L_2 = ((&V_0)->f0);
		return L_2;
	}
}
extern MethodInfo m9588_MI;
extern "C" t126 * m9588 (t9 * __this , t58 p0, MethodInfo* method)
{
	t1809  V_0 = {0};
	{
		t58 L_0 = p0;
		t1809  L_1 = m9586(NULL, L_0, &m9586_MI);
		V_0 = L_1;
		t126 * L_2 = ((&V_0)->f1);
		return L_2;
	}
}
extern MethodInfo m9589_MI;
extern "C" int32_t m9589 (t9 * __this , t58 p0, MethodInfo* method)
{
	t1809  V_0 = {0};
	{
		t58 L_0 = p0;
		t1809  L_1 = m9586(NULL, L_0, &m9586_MI);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->f2);
		return L_2;
	}
}
extern MethodInfo m9590_MI;
extern "C" int32_t m9590 (t9 * __this , t58 p0, MethodInfo* method)
{
	t1809  V_0 = {0};
	{
		t58 L_0 = p0;
		t1809  L_1 = m9586(NULL, L_0, &m9586_MI);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->f4);
		return L_2;
	}
}
extern "C" t921* m9591 (t9 * __this , t58 p0, t553 * p1, MethodInfo* method)
{
	typedef t921* (*m9591_ftn) (t58, t553 *);
	static m9591_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9591_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m9592_MI;
extern "C" t921* m9592 (t9 * __this , t58 p0, t553 * p1, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		t553 * L_1 = p1;
		t921* L_2 = m9591(NULL, L_0, L_1, &m9591_MI);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1566.h"
#include "t1839.h"
extern TypeInfo t1749_TI;
extern TypeInfo t2067_TI;
extern TypeInfo t1839_TI;
extern TypeInfo t1566_TI;
#include "t1839MD.h"
extern MethodInfo m11760_MI;
extern MethodInfo m9595_MI;
extern MethodInfo m9620_MI;
extern MethodInfo m9618_MI;
extern MethodInfo m9606_MI;
extern MethodInfo m9596_MI;
extern MethodInfo m9704_MI;
extern MethodInfo m9621_MI;
extern MethodInfo m9600_MI;
extern MethodInfo m9700_MI;
extern MethodInfo m9763_MI;
extern MethodInfo m9611_MI;
extern MethodInfo m7724_MI;
extern MethodInfo m4468_MI;
extern MethodInfo m7780_MI;
extern MethodInfo m9598_MI;
extern MethodInfo m9613_MI;
extern MethodInfo m9607_MI;
extern MethodInfo m9599_MI;
extern MethodInfo m9604_MI;
extern MethodInfo m9619_MI;
extern MethodInfo m9605_MI;
extern MethodInfo m9614_MI;
extern MethodInfo m11115_MI;
extern MethodInfo m9617_MI;


extern "C" void m9593 (t1752 * __this, MethodInfo* method)
{
	{
		m9523(__this, &m9523_MI);
		return;
	}
}
extern "C" void m9594 (t1752 * __this, t1749  p0, MethodInfo* method)
{
	{
		m9523(__this, &m9523_MI);
		t58 L_0 = m11762((&p0), &m11762_MI);
		__this->f0 = L_0;
		return;
	}
}
extern "C" t2* m9595 (t9 * __this , t907 * p0, MethodInfo* method)
{
	typedef t2* (*m9595_ftn) (t907 *);
	static m9595_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9595_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)");
	return _il2cpp_icall_func(p0);
}
extern "C" t1752 * m9596 (t9 * __this , t1752 * p0, MethodInfo* method)
{
	typedef t1752 * (*m9596_ftn) (t1752 *);
	static m9596_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9596_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m9597_MI;
extern "C" t821 * m9597 (t1752 * __this, MethodInfo* method)
{
	{
		t1752 * L_0 = m9596(NULL, __this, &m9596_MI);
		return L_0;
	}
}
extern "C" t126 * m9598 (t1752 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		t126 * L_1 = m9588(NULL, L_0, &m9588_MI);
		return L_1;
	}
}
extern TypeInfo* t921_TI_var;
extern "C" t921* m9599 (t1752 * __this, MethodInfo* method)
{
	static bool m9599_init;
	if (!m9599_init)
	{
		t921_TI_var = il2cpp_codegen_class_from_type(&t921_0_0_0);
		m9599_init = true;
	}
	t921* V_0 = {0};
	t921* V_1 = {0};
	{
		t58 L_0 = (__this->f0);
		t921* L_1 = m9592(NULL, L_0, __this, &m9592_MI);
		V_0 = L_1;
		t921* L_2 = V_0;
		V_1 = ((t921*)SZArrayNew(t921_TI_var, (((int32_t)(((t121 *)L_2)->max_length)))));
		t921* L_3 = V_0;
		t921* L_4 = V_1;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5874_MI, L_3, (t121 *)(t121 *)L_4, 0);
		t921* L_5 = V_1;
		return L_5;
	}
}
extern "C" t9 * m9600 (t1752 * __this, t9 * p0, t158* p1, t138 ** p2, MethodInfo* method)
{
	typedef t9 * (*m9600_ftn) (t1752 *, t9 *, t158*, t138 **);
	static m9600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9600_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m9601_MI;
extern "C" t9 * m9601 (t1752 * __this, t9 * p0, int32_t p1, t926 * p2, t158* p3, t894 * p4, MethodInfo* method)
{
	t921* V_0 = {0};
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
		t926 * L_0 = p2;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		t926 * L_1 = m9479(NULL, &m9479_MI);
		p2 = L_1;
	}

IL_000c:
	{
		t58 L_2 = (__this->f0);
		t921* L_3 = m9592(NULL, L_2, __this, &m9592_MI);
		V_0 = L_3;
		t158* L_4 = p3;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		t921* L_5 = V_0;
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
		t921* L_8 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_8)->max_length))))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		t1817 * L_9 = (t1817 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1817_TI));
		m9704(L_9, (t2*) &_stringLiteral2049, &m9704_MI);
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
		t926 * L_11 = p2;
		t158* L_12 = p3;
		t921* L_13 = V_0;
		t894 * L_14 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		bool L_15 = m9480(NULL, L_11, L_12, L_13, L_14, &m9480_MI);
		if (L_15)
		{
			goto IL_005b;
		}
	}
	{
		t556 * L_16 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_16, (t2*) &_stringLiteral2050, &m2885_MI);
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
		t126 * L_20 = m2486((*(t9 **)(t9 **)SZArrayLdElema(L_17, L_19)), &m2486_MI);
		t921* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		t126 * L_24 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_21, L_23)));
		if ((((t9*)(t126 *)L_20) == ((t9*)(t126 *)L_24)))
		{
			goto IL_007f;
		}
	}
	{
		t556 * L_25 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_25, (t2*) &_stringLiteral2049, &m2885_MI);
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
		t921* L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((t121 *)L_28)->max_length))))))
		{
			goto IL_0061;
		}
	}

IL_0089:
	{
		bool L_29 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9621_MI, __this);
		if (!L_29)
		{
			goto IL_009c;
		}
	}
	{
		t1332 * L_30 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_30, (t2*) &_stringLiteral2051, &m5685_MI);
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
		t9 * L_33 = m9600(__this, L_31, L_32, (&V_2), &m9600_MI);
		V_3 = L_33;
		goto IL_00c2;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t2067_TI, e.ex->object.klass))
			goto CATCH_00ac;
		if(il2cpp_codegen_class_is_assignable_from (&t2114_TI, e.ex->object.klass))
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
		t1816 * L_35 = (t1816 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1816_TI));
		m9700(L_35, L_34, &m9700_MI);
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
extern MethodInfo m9602_MI;
extern "C" t1749  m9602 (t1752 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		t1749  L_1 = {0};
		m11760(&L_1, L_0, &m11760_MI);
		return L_1;
	}
}
extern MethodInfo m9603_MI;
extern "C" int32_t m9603 (t1752 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		int32_t L_1 = m9589(NULL, L_0, &m9589_MI);
		return L_1;
	}
}
extern "C" int32_t m9604 (t1752 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		int32_t L_1 = m9590(NULL, L_0, &m9590_MI);
		return L_1;
	}
}
extern "C" t126 * m9605 (t1752 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" t126 * m9606 (t1752 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		t126 * L_1 = m9587(NULL, L_0, &m9587_MI);
		return L_1;
	}
}
extern "C" t2* m9607 (t1752 * __this, MethodInfo* method)
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
		t2* L_2 = m9595(NULL, __this, &m9595_MI);
		return L_2;
	}
}
extern MethodInfo m9608_MI;
extern "C" bool m9608 (t1752 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		bool L_2 = m11578(NULL, __this, L_0, L_1, &m11578_MI);
		return L_2;
	}
}
extern MethodInfo m9609_MI;
extern "C" t158* m9609 (t1752 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_1 = m11577(NULL, __this, L_0, &m11577_MI);
		return L_1;
	}
}
extern MethodInfo m9610_MI;
extern "C" t158* m9610 (t1752 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_2 = m11576(NULL, __this, L_0, L_1, &m11576_MI);
		return L_2;
	}
}
extern "C" t1566 * m9611 (t9 * __this , t58 p0, MethodInfo* method)
{
	typedef t1566 * (*m9611_ftn) (t58);
	static m9611_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9611_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m9612_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m9612 (t1752 * __this, MethodInfo* method)
{
	static bool m9612_init;
	if (!m9612_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9612_init = true;
	}
	int32_t V_0 = 0;
	t1809  V_1 = {0};
	t158* V_2 = {0};
	t1566 * V_3 = {0};
	{
		V_0 = 0;
		t58 L_0 = (__this->f0);
		t1809  L_1 = m9586(NULL, L_0, &m9586_MI);
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
		t1839 * L_12 = (t1839 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1839_TI));
		m9763(L_12, &m9763_MI);
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
		t1566 * L_15 = m9611(NULL, L_14, &m9611_MI);
		V_3 = L_15;
		int32_t L_16 = ((&V_1)->f3);
		if (!((int32_t)((int32_t)L_16&(int32_t)((int32_t)128))))
		{
			goto IL_008e;
		}
	}
	{
		t1566 * L_17 = V_3;
		L_17->f5 = 1;
	}

IL_008e:
	{
		t158* L_18 = V_2;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		t1566 * L_21 = V_3;
		ArrayElementTypeCheck (L_18, L_21);
		*((t9 **)(t9 **)SZArrayLdElema(L_18, L_20)) = (t9 *)L_21;
	}

IL_0096:
	{
		t158* L_22 = V_2;
		return L_22;
	}
}
extern "C" bool m9613 (t9 * __this , t126 * p0, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		t126 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7724_MI, L_0);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		t126 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7730_MI, L_2);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		t126 * L_4 = p0;
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11939_MI, L_4);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4468_MI, L_5);
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		t126 * L_7 = p0;
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11939_MI, L_7);
		bool L_9 = m7780(L_8, &m7780_MI);
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
extern "C" t2* m9614 (t1752 * __this, MethodInfo* method)
{
	t315 * V_0 = {0};
	t126 * V_1 = {0};
	t152* V_2 = {0};
	int32_t V_3 = 0;
	t921* V_4 = {0};
	int32_t V_5 = 0;
	t126 * V_6 = {0};
	bool V_7 = false;
	{
		t315 * L_0 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m1150(L_0, &m1150_MI);
		V_0 = L_0;
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9598_MI, __this);
		V_1 = L_1;
		t126 * L_2 = V_1;
		bool L_3 = m9613(NULL, L_2, &m9613_MI);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		t315 * L_4 = V_0;
		t126 * L_5 = V_1;
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7770_MI, L_5);
		m1154(L_4, L_6, &m1154_MI);
		goto IL_0031;
	}

IL_0024:
	{
		t315 * L_7 = V_0;
		t126 * L_8 = V_1;
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_8);
		m1154(L_7, L_9, &m1154_MI);
	}

IL_0031:
	{
		t315 * L_10 = V_0;
		m1154(L_10, (t2*) &_stringLiteral168, &m1154_MI);
		t315 * L_11 = V_0;
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9607_MI, __this);
		m1154(L_11, L_12, &m1154_MI);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9620_MI, __this);
		if (!L_13)
		{
			goto IL_009e;
		}
	}
	{
		t152* L_14 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9618_MI, __this);
		V_2 = L_14;
		t315 * L_15 = V_0;
		m1154(L_15, (t2*) &_stringLiteral344, &m1154_MI);
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
		t315 * L_17 = V_0;
		m1154(L_17, (t2*) &_stringLiteral342, &m1154_MI);
	}

IL_0079:
	{
		t315 * L_18 = V_0;
		t152* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = L_20;
		t2* L_22 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, (*(t126 **)(t126 **)SZArrayLdElema(L_19, L_21)));
		m1154(L_18, L_22, &m1154_MI);
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
		t315 * L_26 = V_0;
		m1154(L_26, (t2*) &_stringLiteral345, &m1154_MI);
	}

IL_009e:
	{
		t315 * L_27 = V_0;
		m1154(L_27, (t2*) &_stringLiteral387, &m1154_MI);
		t921* L_28 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m9599_MI, __this);
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
		t315 * L_30 = V_0;
		m1154(L_30, (t2*) &_stringLiteral388, &m1154_MI);
	}

IL_00c8:
	{
		t921* L_31 = V_4;
		int32_t L_32 = V_5;
		int32_t L_33 = L_32;
		t126 * L_34 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_31, L_33)));
		V_6 = L_34;
		t126 * L_35 = V_6;
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7723_MI, L_35);
		V_7 = L_36;
		bool L_37 = V_7;
		if (!L_37)
		{
			goto IL_00ea;
		}
	}
	{
		t126 * L_38 = V_6;
		t126 * L_39 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11939_MI, L_38);
		V_6 = L_39;
	}

IL_00ea:
	{
		t126 * L_40 = V_6;
		bool L_41 = m9613(NULL, L_40, &m9613_MI);
		if (!L_41)
		{
			goto IL_0103;
		}
	}
	{
		t315 * L_42 = V_0;
		t126 * L_43 = V_6;
		t2* L_44 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7770_MI, L_43);
		m1154(L_42, L_44, &m1154_MI);
		goto IL_0111;
	}

IL_0103:
	{
		t315 * L_45 = V_0;
		t126 * L_46 = V_6;
		t2* L_47 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_46);
		m1154(L_45, L_47, &m1154_MI);
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
		t315 * L_49 = V_0;
		m1154(L_49, (t2*) &_stringLiteral1459, &m1154_MI);
	}

IL_0121:
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)((int32_t)L_50+(int32_t)1));
	}

IL_0127:
	{
		int32_t L_51 = V_5;
		t921* L_52 = V_4;
		if ((((int32_t)L_51) < ((int32_t)(((int32_t)(((t121 *)L_52)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_53 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9604_MI, __this);
		if (!((int32_t)((int32_t)L_53&(int32_t)2)))
		{
			goto IL_0158;
		}
	}
	{
		t921* L_54 = V_4;
		if ((((int32_t)(((int32_t)(((t121 *)L_54)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_014c;
		}
	}
	{
		t315 * L_55 = V_0;
		m1154(L_55, (t2*) &_stringLiteral388, &m1154_MI);
	}

IL_014c:
	{
		t315 * L_56 = V_0;
		m1154(L_56, (t2*) &_stringLiteral2052, &m1154_MI);
	}

IL_0158:
	{
		t315 * L_57 = V_0;
		m1154(L_57, (t2*) &_stringLiteral148, &m1154_MI);
		t315 * L_58 = V_0;
		t2* L_59 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_58);
		return L_59;
	}
}
extern MethodInfo m9615_MI;
extern "C" void m9615 (t1752 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	t152* V_0 = {0};
	t152* G_B4_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9620_MI, __this);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9619_MI, __this);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		t152* L_2 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9618_MI, __this);
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
		t1093 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9607_MI, __this);
		t126 * L_5 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9605_MI, __this);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9614_MI, __this);
		t152* L_7 = V_0;
		m9507(NULL, L_3, L_4, L_5, L_6, 8, L_7, &m9507_MI);
		return;
	}
}
extern MethodInfo m9616_MI;
extern "C" t821 * m9616 (t1752 * __this, t152* p0, MethodInfo* method)
{
	t126 * V_0 = {0};
	t152* V_1 = {0};
	int32_t V_2 = 0;
	t821 * V_3 = {0};
	{
		t152* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2053, &m339_MI);
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
		m11115(L_7, &m11115_MI);
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
		t821 * L_12 = m9617(__this, L_11, &m9617_MI);
		V_3 = L_12;
		t821 * L_13 = V_3;
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		t152* L_14 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9618_MI, __this);
		int32_t L_15 = (((int32_t)(((t121 *)L_14)->max_length)));
		t9 * L_16 = Box(InitializedTypeInfo(&t125_TI), &L_15);
		t152* L_17 = p0;
		int32_t L_18 = (((int32_t)(((t121 *)L_17)->max_length)));
		t9 * L_19 = Box(InitializedTypeInfo(&t125_TI), &L_18);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_20 = m1190(NULL, (t2*) &_stringLiteral2054, L_16, L_19, &m1190_MI);
		t556 * L_21 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_21, L_20, &m2885_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_005b:
	{
		t821 * L_22 = V_3;
		return L_22;
	}
}
extern "C" t821 * m9617 (t1752 * __this, t152* p0, MethodInfo* method)
{
	typedef t821 * (*m9617_ftn) (t1752 *, t152*);
	static m9617_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9617_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t152* m9618 (t1752 * __this, MethodInfo* method)
{
	typedef t152* (*m9618_ftn) (t1752 *);
	static m9618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9618_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetGenericArguments()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m9619 (t1752 * __this, MethodInfo* method)
{
	typedef bool (*m9619_ftn) (t1752 *);
	static m9619_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9619_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethodDefinition()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m9620 (t1752 * __this, MethodInfo* method)
{
	typedef bool (*m9620_ftn) (t1752 *);
	static m9620_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9620_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethod()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m9621 (t1752 * __this, MethodInfo* method)
{
	t126 * V_0 = {0};
	t152* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9620_MI, __this);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		t152* L_1 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9618_MI, __this);
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
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7773_MI, L_5);
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
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9606_MI, __this);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7773_MI, L_10);
		return L_11;
	}
}
#include "t1808.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1808_TI;

#include "t2112.h"
extern TypeInfo t2112_TI;
#include "t2112MD.h"
extern MethodInfo m9623_MI;
extern MethodInfo m9631_MI;
extern MethodInfo m11547_MI;
extern MethodInfo m7722_MI;
extern MethodInfo m9624_MI;
extern MethodInfo m9625_MI;
extern MethodInfo m9632_MI;
extern MethodInfo m9629_MI;
extern MethodInfo m9630_MI;
extern MethodInfo m9636_MI;


extern "C" void m9622 (t1808 * __this, MethodInfo* method)
{
	{
		m9483(__this, &m9483_MI);
		return;
	}
}
extern "C" t921* m9623 (t1808 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f2);
		t921* L_1 = m9592(NULL, L_0, __this, &m9592_MI);
		return L_1;
	}
}
extern "C" t9 * m9624 (t1808 * __this, t9 * p0, t158* p1, t138 ** p2, MethodInfo* method)
{
	typedef t9 * (*m9624_ftn) (t1808 *, t9 *, t158*, t138 **);
	static m9624_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9624_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern "C" t9 * m9625 (t1808 * __this, t9 * p0, int32_t p1, t926 * p2, t158* p3, t894 * p4, MethodInfo* method)
{
	t921* V_0 = {0};
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
		t926 * L_0 = p2;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		t926 * L_1 = m9479(NULL, &m9479_MI);
		p2 = L_1;
	}

IL_000c:
	{
		t921* L_2 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m9623_MI, __this);
		V_0 = L_2;
		t158* L_3 = p3;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		t921* L_4 = V_0;
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
		t921* L_7 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_6)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_7)->max_length))))))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		t1817 * L_8 = (t1817 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1817_TI));
		m9704(L_8, (t2*) &_stringLiteral2049, &m9704_MI);
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
		t926 * L_10 = p2;
		t158* L_11 = p3;
		t921* L_12 = V_0;
		t894 * L_13 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		bool L_14 = m9480(NULL, L_10, L_11, L_12, L_13, &m9480_MI);
		if (L_14)
		{
			goto IL_0055;
		}
	}
	{
		t556 * L_15 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_15, (t2*) &_stringLiteral2050, &m2885_MI);
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
		t126 * L_19 = m2486((*(t9 **)(t9 **)SZArrayLdElema(L_16, L_18)), &m2486_MI);
		t921* L_20 = V_0;
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		t126 * L_23 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_20, L_22)));
		if ((((t9*)(t126 *)L_19) == ((t9*)(t126 *)L_23)))
		{
			goto IL_0079;
		}
	}
	{
		t556 * L_24 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_24, (t2*) &_stringLiteral2049, &m2885_MI);
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
		t921* L_27 = V_0;
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
		t126 * L_29 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9631_MI, __this);
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7773_MI, L_29);
		if (!L_30)
		{
			goto IL_00ae;
		}
	}
	{
		t126 * L_31 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9631_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_32 = m2395(NULL, (t2*) &_stringLiteral2055, L_31, (t2*) &_stringLiteral2056, &m2395_MI);
		t2112 * L_33 = (t2112 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2112_TI));
		m11547(L_33, L_32, &m11547_MI);
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
		t126 * L_35 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9631_MI, __this);
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7722_MI, L_35);
		if (!L_36)
		{
			goto IL_00da;
		}
	}
	{
		t126 * L_37 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9631_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_38 = m590(NULL, (t2*) &_stringLiteral2057, L_37, &m590_MI);
		t2112 * L_39 = (t2112 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2112_TI));
		m11547(L_39, L_38, &m11547_MI);
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
		t9 * L_42 = m9624(__this, L_40, L_41, (&V_2), &m9624_MI);
		V_3 = L_42;
		goto IL_00fd;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t2114_TI, e.ex->object.klass))
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
		t1816 * L_44 = (t1816 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1816_TI));
		m9700(L_44, L_43, &m9700_MI);
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
extern MethodInfo m9626_MI;
extern "C" t9 * m9626 (t1808 * __this, int32_t p0, t926 * p1, t158* p2, t894 * p3, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t926 * L_1 = p1;
		t158* L_2 = p2;
		t894 * L_3 = p3;
		t9 * L_4 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t926 *, t158*, t894 * >::Invoke(&m9625_MI, __this, NULL, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
extern MethodInfo m9627_MI;
extern "C" t1749  m9627 (t1808 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f2);
		t1749  L_1 = {0};
		m11760(&L_1, L_0, &m11760_MI);
		return L_1;
	}
}
extern MethodInfo m9628_MI;
extern "C" int32_t m9628 (t1808 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f2);
		int32_t L_1 = m9589(NULL, L_0, &m9589_MI);
		return L_1;
	}
}
extern "C" int32_t m9629 (t1808 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f2);
		int32_t L_1 = m9590(NULL, L_0, &m9590_MI);
		return L_1;
	}
}
extern "C" t126 * m9630 (t1808 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t126 * m9631 (t1808 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f2);
		t126 * L_1 = m9587(NULL, L_0, &m9587_MI);
		return L_1;
	}
}
extern "C" t2* m9632 (t1808 * __this, MethodInfo* method)
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
		t2* L_2 = m9595(NULL, __this, &m9595_MI);
		return L_2;
	}
}
extern MethodInfo m9633_MI;
extern "C" bool m9633 (t1808 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		bool L_2 = m11578(NULL, __this, L_0, L_1, &m11578_MI);
		return L_2;
	}
}
extern MethodInfo m9634_MI;
extern "C" t158* m9634 (t1808 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_1 = m11577(NULL, __this, L_0, &m11577_MI);
		return L_1;
	}
}
extern MethodInfo m9635_MI;
extern "C" t158* m9635 (t1808 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_2 = m11576(NULL, __this, L_0, L_1, &m11576_MI);
		return L_2;
	}
}
extern "C" t2* m9636 (t1808 * __this, MethodInfo* method)
{
	t315 * V_0 = {0};
	t921* V_1 = {0};
	int32_t V_2 = 0;
	{
		t315 * L_0 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m1150(L_0, &m1150_MI);
		V_0 = L_0;
		t315 * L_1 = V_0;
		m1154(L_1, (t2*) &_stringLiteral2058, &m1154_MI);
		t315 * L_2 = V_0;
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9632_MI, __this);
		m1154(L_2, L_3, &m1154_MI);
		t315 * L_4 = V_0;
		m1154(L_4, (t2*) &_stringLiteral387, &m1154_MI);
		t921* L_5 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m9623_MI, __this);
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
		t315 * L_7 = V_0;
		m1154(L_7, (t2*) &_stringLiteral388, &m1154_MI);
	}

IL_0046:
	{
		t315 * L_8 = V_0;
		t921* L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		t126 * L_12 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_9, L_11)));
		t2* L_13 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_12);
		m1154(L_8, L_13, &m1154_MI);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_15 = V_2;
		t921* L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t121 *)L_16)->max_length))))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9629_MI, __this);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_0079;
		}
	}
	{
		t315 * L_18 = V_0;
		m1154(L_18, (t2*) &_stringLiteral2059, &m1154_MI);
	}

IL_0079:
	{
		t315 * L_19 = V_0;
		m1154(L_19, (t2*) &_stringLiteral148, &m1154_MI);
		t315 * L_20 = V_0;
		t2* L_21 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_20);
		return L_21;
	}
}
extern MethodInfo m9637_MI;
extern "C" void m9637 (t1808 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9632_MI, __this);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9630_MI, __this);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9636_MI, __this);
		m9506(NULL, L_0, L_1, L_2, L_3, 1, &m9506_MI);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
