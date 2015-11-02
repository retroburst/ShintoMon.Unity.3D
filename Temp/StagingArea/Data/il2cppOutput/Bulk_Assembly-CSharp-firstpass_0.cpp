#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t0.h"
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
extern TypeInfo t0_TI;
#include "t0MD.h"


#include "t121.h"

#include "t1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1_TI;
#include "t1MD.h"

#include "t122.h"
#include "t2.h"
#include "t123.h"
#include "t124.h"
#include "t3.h"
#include "Assembly-CSharp-firstpass_ArrayTypes.h"
#include "t125.h"
#include "t126.h"
#include "t127.h"
#include "UnityEngine_ArrayTypes.h"
#include "t57.h"
#include "t5.h"
extern TypeInfo t11_TI;
extern TypeInfo t3_TI;
extern TypeInfo t126_TI;
extern TypeInfo t128_TI;
extern TypeInfo t2_TI;
extern TypeInfo t129_TI;
#include "t4MD.h"
#include "t11MD.h"
#include "t3MD.h"
#include "t126MD.h"
#include "t57MD.h"
#include "t2MD.h"
#include "t130MD.h"
#include "t129MD.h"
extern Il2CppType t1_0_0_0;
extern Il2CppType t128_0_0_0;
extern MethodInfo m328_MI;
extern MethodInfo m38_MI;
extern MethodInfo m14_MI;
extern MethodInfo m40_MI;
extern MethodInfo m44_MI;
extern MethodInfo m2_MI;
extern MethodInfo m329_MI;
extern MethodInfo m330_MI;
extern MethodInfo m331_MI;
extern MethodInfo m332_MI;
extern MethodInfo m20_MI;
extern MethodInfo m333_MI;
extern MethodInfo m22_MI;
extern MethodInfo m334_MI;
extern MethodInfo m335_MI;
extern MethodInfo m21_MI;


extern MethodInfo m0_MI;
extern "C" void m0 (t1 * __this, MethodInfo* method)
{
	{
		__this->f2 = (t2*) &_stringLiteral1;
		__this->f3 = (1.0f);
		__this->f4 = (3.0f);
		__this->f5 = (3.0f);
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m1_MI;
extern "C" void m1 (t1 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		bool L_1 = m38(NULL, L_0, &m38_MI);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		t2* L_2 = (__this->f2);
		t3 * L_3 = (t3 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t3_TI));
		m14(L_3, L_2, &m14_MI);
		__this->f7 = L_3;
		t3 * L_4 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m40(NULL, L_4, &m40_MI);
		goto IL_0042;
	}

IL_0031:
	{
		t2* L_5 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t3 * L_6 = m44(NULL, L_5, &m44_MI);
		__this->f7 = L_6;
	}

IL_0042:
	{
		m2(__this, &m2_MI);
		return;
	}
}
extern TypeInfo* t128_TI_var;
extern "C" void m2 (t1 * __this, MethodInfo* method)
{
	static bool m2_init;
	if (!m2_init)
	{
		t128_TI_var = il2cpp_codegen_class_from_type(&t128_0_0_0);
		m2_init = true;
	}
	t128* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_0 = m329(NULL, LoadTypeToken(&t1_0_0_0), &m329_MI);
		t131* L_1 = m330(NULL, L_0, &m330_MI);
		V_0 = ((t128*)IsInst(L_1, t128_TI_var));
		t128* L_2 = V_0;
		if (!L_2)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = 0;
		goto IL_0055;
	}

IL_0022:
	{
		t128* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		t2* L_6 = ((*(t1 **)(t1 **)SZArrayLdElema(L_3, L_5))->f2);
		t2* L_7 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_8 = m331(NULL, L_6, L_7, &m331_MI);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		t128* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		bool L_12 = m332(NULL, (*(t1 **)(t1 **)SZArrayLdElema(L_9, L_11)), __this, &m332_MI);
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		t128* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		__this->f6 = (*(t1 **)(t1 **)SZArrayLdElema(L_13, L_15));
	}

IL_0051:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0055:
	{
		int32_t L_17 = V_1;
		t128* L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((t121 *)L_18)->max_length))))))
		{
			goto IL_0022;
		}
	}

IL_005e:
	{
		return;
	}
}
extern MethodInfo m3_MI;
extern "C" void m3 (t1 * __this, MethodInfo* method)
{
	{
		t3 * L_0 = (__this->f7);
		m20(L_0, &m20_MI);
		return;
	}
}
extern MethodInfo m4_MI;
extern "C" void m4 (t1 * __this, t5 * p0, MethodInfo* method)
{
	{
		t1 * L_0 = (__this->f6);
		bool L_1 = m333(NULL, L_0, (t57 *)NULL, &m333_MI);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		m2(__this, &m2_MI);
	}

IL_0017:
	{
		t3 * L_2 = (__this->f7);
		t3 * L_3 = (__this->f7);
		float L_4 = m22(L_3, &m22_MI);
		float L_5 = (__this->f3);
		float L_6 = (__this->f4);
		float L_7 = m334(NULL, &m334_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_8 = m335(NULL, L_4, L_5, ((float)((float)L_6*(float)L_7)), &m335_MI);
		m21(L_2, L_8, &m21_MI);
		return;
	}
}
extern MethodInfo m5_MI;
extern "C" void m5 (t1 * __this, t5 * p0, MethodInfo* method)
{
	{
		t3 * L_0 = (__this->f7);
		t3 * L_1 = (__this->f7);
		float L_2 = m22(L_1, &m22_MI);
		float L_3 = (__this->f4);
		float L_4 = m334(NULL, &m334_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_5 = m335(NULL, L_2, (0.0f), ((float)((float)L_3*(float)L_4)), &m335_MI);
		m21(L_0, L_5, &m21_MI);
		return;
	}
}
#include "t6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6_TI;
#include "t6MD.h"

extern MethodInfo m51_MI;
extern MethodInfo m52_MI;
extern MethodInfo m53_MI;
extern MethodInfo m55_MI;
extern MethodInfo m54_MI;


extern MethodInfo m6_MI;
extern "C" void m6 (t6 * __this, MethodInfo* method)
{
	{
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m7_MI;
extern "C" void m7 (t6 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8_MI;
extern "C" void m8 (t6 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m51(NULL, L_0, &m51_MI);
		return;
	}
}
extern MethodInfo m9_MI;
extern "C" void m9 (t6 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m52(NULL, L_0, &m52_MI);
		return;
	}
}
extern MethodInfo m10_MI;
extern "C" void m10 (t6 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m53(NULL, L_0, &m53_MI);
		return;
	}
}
extern MethodInfo m11_MI;
extern "C" void m11 (t6 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m55(NULL, L_0, &m55_MI);
		return;
	}
}
extern MethodInfo m12_MI;
extern "C" void m12 (t6 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m54(NULL, L_0, &m54_MI);
		return;
	}
}
extern MethodInfo m13_MI;
extern "C" void m13 (t6 * __this, MethodInfo* method)
{
	{
		return;
	}
}
#include "t7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7_TI;
#include "t7MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t9MD.h"
extern MethodInfo m15_MI;
extern MethodInfo m336_MI;
extern MethodInfo m17_MI;
extern MethodInfo m19_MI;
extern MethodInfo m16_MI;
extern MethodInfo m42_MI;


extern "C" void m14 (t3 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m15(__this, L_0, 1, &m15_MI);
		return;
	}
}
extern "C" void m15 (t3 * __this, t2* p0, bool p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2* L_0 = p0;
		m17(__this, L_0, &m17_MI);
		bool L_1 = p1;
		m19(__this, L_1, &m19_MI);
		return;
	}
}
extern "C" t2* m16 (t3 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m17 (t3 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m18_MI;
extern "C" bool m18 (t3 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m19 (t3 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" void m20 (t3 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m16(__this, &m16_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m42(NULL, L_0, &m42_MI);
		return;
	}
}
extern "C" void m21 (t3 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" float m22 (t3 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m23_MI;
extern "C" float m23 (t3 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
#include "t10.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t10_TI;
#include "t10MD.h"

extern MethodInfo m337_MI;
extern MethodInfo m25_MI;
extern MethodInfo m27_MI;
extern MethodInfo m29_MI;
extern MethodInfo m26_MI;
extern MethodInfo m43_MI;


extern MethodInfo m24_MI;
extern "C" void m24 (t10 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m25(__this, L_0, 1, &m25_MI);
		return;
	}
}
extern "C" void m25 (t10 * __this, t2* p0, bool p1, MethodInfo* method)
{
	{
		__this->f0 = ((int32_t)-5);
		__this->f1 = ((int32_t)-5);
		m336(__this, &m336_MI);
		t2* L_0 = p0;
		m27(__this, L_0, &m27_MI);
		bool L_1 = p1;
		m29(__this, L_1, &m29_MI);
		return;
	}
}
extern "C" t2* m26 (t10 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m27 (t10 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern MethodInfo m28_MI;
extern "C" bool m28 (t10 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m29 (t10 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m30_MI;
extern "C" void m30 (t10 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->f2 = 1;
		int32_t L_1 = m337(NULL, &m337_MI);
		__this->f0 = L_1;
		return;
	}
}
extern MethodInfo m31_MI;
extern "C" void m31 (t10 * __this, MethodInfo* method)
{
	{
		__this->f2 = 0;
		int32_t L_0 = m337(NULL, &m337_MI);
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m32_MI;
extern "C" void m32 (t10 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m26(__this, &m26_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m43(NULL, L_0, &m43_MI);
		return;
	}
}
extern MethodInfo m33_MI;
extern "C" bool m33 (t10 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m34_MI;
extern "C" bool m34 (t10 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = m337(NULL, &m337_MI);
		return ((((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))) == ((int32_t)(-1)))? 1 : 0);
	}
}
extern MethodInfo m35_MI;
extern "C" bool m35 (t10 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		int32_t L_1 = m337(NULL, &m337_MI);
		return ((((int32_t)L_0) == ((int32_t)((int32_t)((int32_t)L_1-(int32_t)1))))? 1 : 0);
	}
}
#include "t11.h"
#ifndef _MSC_VER
#else
#endif

#include "t13.h"
#include "t12.h"
#include "t18.h"
#include "t19.h"
#include "t132.h"
extern TypeInfo t12_TI;
extern TypeInfo t13_TI;
extern TypeInfo t18_TI;
extern TypeInfo t19_TI;
extern TypeInfo t132_TI;
extern TypeInfo t123_TI;
extern TypeInfo t124_TI;
extern TypeInfo t122_TI;
#include "t12MD.h"
#include "t18MD.h"
#include "t19MD.h"
#include "t132MD.h"
extern MethodInfo m338_MI;
extern MethodInfo m78_MI;
extern MethodInfo m92_MI;
extern MethodInfo m121_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m124_MI;
extern MethodInfo m339_MI;
extern MethodInfo m125_MI;
extern MethodInfo m126_MI;
extern MethodInfo m127_MI;
extern MethodInfo m47_MI;
extern MethodInfo m340_MI;
extern MethodInfo m341_MI;
extern MethodInfo m342_MI;
extern MethodInfo m343_MI;
extern MethodInfo m344_MI;
extern MethodInfo m345_MI;
extern MethodInfo m346_MI;
extern MethodInfo m347_MI;
extern MethodInfo m348_MI;
extern MethodInfo m349_MI;
extern MethodInfo m128_MI;
extern MethodInfo m129_MI;
extern MethodInfo m130_MI;


extern MethodInfo m36_MI;
extern "C" void m36 (t9 * __this , MethodInfo* method)
{
	{
		t18 * L_0 = (t18 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t18_TI));
		m78(L_0, &m78_MI);
		((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f1 = L_0;
		t19 * L_1 = (t19 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t19_TI));
		m92(L_1, &m92_MI);
		((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f2 = L_1;
		t12 * L_2 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f2;
		((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0 = L_2;
		return;
	}
}
extern MethodInfo m37_MI;
extern "C" void m37 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0032;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_3 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f2;
		((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0 = L_3;
		goto IL_0032;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_4 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f1;
		((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0 = L_4;
		goto IL_0032;
	}

IL_0032:
	{
		return;
	}
}
extern "C" bool m38 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t2* L_1 = p0;
		bool L_2 = m121(L_0, L_1, &m121_MI);
		return L_2;
	}
}
extern MethodInfo m39_MI;
extern "C" bool m39 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t2* L_1 = p0;
		bool L_2 = m122(L_0, L_1, &m122_MI);
		return L_2;
	}
}
extern "C" void m40 (t9 * __this , t3 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t3 * L_1 = p0;
		m123(L_0, L_1, &m123_MI);
		return;
	}
}
extern MethodInfo m41_MI;
extern "C" void m41 (t9 * __this , t10 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t10 * L_1 = p0;
		m124(L_0, L_1, &m124_MI);
		return;
	}
}
extern "C" void m42 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_2 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t2* L_3 = p0;
		m125(L_2, L_3, &m125_MI);
		return;
	}
}
extern "C" void m43 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t2* L_1 = p0;
		m126(L_0, L_1, &m126_MI);
		return;
	}
}
extern "C" t3 * m44 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t2* L_1 = p0;
		t3 * L_2 = m127(L_0, L_1, &m127_MI);
		return L_2;
	}
}
extern MethodInfo m45_MI;
extern "C" float m45 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		float L_1 = m47(NULL, L_0, 0, &m47_MI);
		return L_1;
	}
}
extern MethodInfo m46_MI;
extern "C" float m46 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		float L_1 = m47(NULL, L_0, 1, &m47_MI);
		return L_1;
	}
}
extern "C" float m47 (t9 * __this , t2* p0, bool p1, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t2* L_1 = p0;
		bool L_2 = p1;
		float L_3 = (float)VirtFuncInvoker2< float, t2*, bool >::Invoke(&m340_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m48_MI;
extern "C" bool m48 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(&m341_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m49_MI;
extern "C" bool m49 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(&m342_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m50_MI;
extern "C" bool m50 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(&m343_MI, L_0, L_1);
		return L_2;
	}
}
extern "C" void m51 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t2* L_1 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m344_MI, L_0, L_1);
		return;
	}
}
extern "C" void m52 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t2* L_1 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m345_MI, L_0, L_1);
		return;
	}
}
extern "C" void m53 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t2* L_1 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m346_MI, L_0, L_1);
		return;
	}
}
extern "C" void m54 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t2* L_1 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m347_MI, L_0, L_1);
		return;
	}
}
extern "C" void m55 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t2* L_1 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m348_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m56_MI;
extern "C" void m56 (t9 * __this , t2* p0, float p1, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t2* L_1 = p0;
		float L_2 = p1;
		VirtActionInvoker2< t2*, float >::Invoke(&m349_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m57_MI;
extern "C" t13  m57 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		t13  L_1 = (t13 )VirtFuncInvoker0< t13  >::Invoke(&m338_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m58_MI;
extern "C" void m58 (t9 * __this , float p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		float L_1 = p0;
		m128(L_0, L_1, &m128_MI);
		return;
	}
}
extern MethodInfo m59_MI;
extern "C" void m59 (t9 * __this , float p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		float L_1 = p0;
		m129(L_0, L_1, &m129_MI);
		return;
	}
}
extern MethodInfo m60_MI;
extern "C" void m60 (t9 * __this , float p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		t12 * L_0 = ((t11_SFs*)InitializedTypeInfo(&t11_TI)->static_fields)->f0;
		float L_1 = p0;
		m130(L_0, L_1, &m130_MI);
		return;
	}
}
#include "t14.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t14_TI;
#include "t14MD.h"



extern MethodInfo m61_MI;
extern "C" void m61 (t14 * __this, MethodInfo* method)
{
	{
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m62_MI;
extern "C" void m62 (t14 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m63_MI;
extern "C" void m63 (t14 * __this, float p0, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		float L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m56(NULL, L_0, ((float)((float)((float)((float)L_1*(float)(2.0f)))-(float)(1.0f))), &m56_MI);
		return;
	}
}
#include "t15.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t15_TI;
#include "t15MD.h"



#include "t16.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t16_TI;
#include "t16MD.h"

#include "t45.h"
#include "t28.h"
extern TypeInfo t28_TI;
#include "t133MD.h"
#include "t45MD.h"
#include "t13MD.h"
#include "t5MD.h"
extern MethodInfo m68_MI;
extern MethodInfo m350_MI;
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
extern MethodInfo m355_MI;
extern MethodInfo m356_MI;
extern MethodInfo m357_MI;
extern MethodInfo m358_MI;
extern MethodInfo m67_MI;


extern MethodInfo m64_MI;
extern "C" void m64 (t16 * __this, MethodInfo* method)
{
	{
		__this->f2 = ((int32_t)100);
		__this->f4 = (t2*) &_stringLiteral1;
		__this->f5 = (t2*) &_stringLiteral3;
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m65_MI;
extern "C" void m65 (t16 * __this, MethodInfo* method)
{
	{
		m68(__this, &m68_MI);
		return;
	}
}
extern MethodInfo m66_MI;
extern "C" void m66 (t16 * __this, MethodInfo* method)
{
	{
		t45 * L_0 = m350(__this, &m350_MI);
		t13  L_1 = m351(L_0, &m351_MI);
		__this->f6 = L_1;
		return;
	}
}
extern "C" void m67 (t16 * __this, t13  p0, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		t13  L_0 = (__this->f6);
		t13  L_1 = p0;
		t13  L_2 = m352(NULL, L_0, L_1, &m352_MI);
		V_0 = L_2;
		float L_3 = ((&V_0)->f2);
		(&V_0)->f2 = ((-L_3));
		t13  L_4 = V_0;
		int32_t L_5 = (__this->f2);
		t13  L_6 = m353(NULL, L_4, (((float)L_5)), &m353_MI);
		V_0 = L_6;
		bool L_7 = (__this->f7);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		t3 * L_8 = (__this->f9);
		float L_9 = ((&V_0)->f1);
		m21(L_8, ((-L_9)), &m21_MI);
	}

IL_0048:
	{
		bool L_10 = (__this->f8);
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		t3 * L_11 = (__this->f10);
		float L_12 = ((&V_0)->f2);
		m21(L_11, L_12, &m21_MI);
	}

IL_0065:
	{
		return;
	}
}
extern "C" void m68 (t16 * __this, MethodInfo* method)
{
	t16 * G_B2_0 = {0};
	t16 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t16 * G_B3_1 = {0};
	t16 * G_B5_0 = {0};
	t16 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	t16 * G_B6_1 = {0};
	{
		int32_t L_0 = (__this->f3);
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = (__this->f3);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		G_B3_1->f7 = G_B3_0;
		int32_t L_2 = (__this->f3);
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = (__this->f3);
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0035:
	{
		G_B6_1->f8 = G_B6_0;
		bool L_4 = (__this->f7);
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		t2* L_5 = (__this->f4);
		t3 * L_6 = (t3 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t3_TI));
		m14(L_6, L_5, &m14_MI);
		__this->f9 = L_6;
		t3 * L_7 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m40(NULL, L_7, &m40_MI);
	}

IL_0061:
	{
		bool L_8 = (__this->f8);
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		t2* L_9 = (__this->f5);
		t3 * L_10 = (t3 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t3_TI));
		m14(L_10, L_9, &m14_MI);
		__this->f10 = L_10;
		t3 * L_11 = (__this->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m40(NULL, L_11, &m40_MI);
	}

IL_0088:
	{
		return;
	}
}
extern MethodInfo m69_MI;
extern "C" void m69 (t16 * __this, t5 * p0, MethodInfo* method)
{
	t13  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t28  V_3 = {0};
	t28  V_4 = {0};
	{
		t13  L_0 = m354(NULL, &m354_MI);
		V_0 = L_0;
		bool L_1 = (__this->f7);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		t5 * L_2 = p0;
		t28  L_3 = m355(L_2, &m355_MI);
		V_3 = L_3;
		float L_4 = ((&V_3)->f1);
		t13 * L_5 = &(__this->f6);
		float L_6 = (L_5->f1);
		V_1 = (((int32_t)((float)((float)L_4-(float)L_6))));
		int32_t L_7 = V_1;
		int32_t L_8 = (__this->f2);
		int32_t L_9 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		int32_t L_10 = m356(NULL, L_7, ((-L_8)), L_9, &m356_MI);
		V_1 = L_10;
		int32_t L_11 = V_1;
		(&V_0)->f1 = (((float)L_11));
	}

IL_004a:
	{
		bool L_12 = (__this->f8);
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		t5 * L_13 = p0;
		t28  L_14 = m355(L_13, &m355_MI);
		V_4 = L_14;
		float L_15 = ((&V_4)->f2);
		t13 * L_16 = &(__this->f6);
		float L_17 = (L_16->f2);
		V_2 = (((int32_t)((float)((float)L_15-(float)L_17))));
		int32_t L_18 = V_2;
		int32_t L_19 = (__this->f2);
		int32_t L_20 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		int32_t L_21 = m356(NULL, L_18, ((-L_19)), L_20, &m356_MI);
		V_2 = L_21;
		int32_t L_22 = V_2;
		(&V_0)->f2 = (((float)L_22));
	}

IL_008f:
	{
		t45 * L_23 = m350(__this, &m350_MI);
		t13 * L_24 = &(__this->f6);
		float L_25 = (L_24->f1);
		float L_26 = ((&V_0)->f1);
		t13 * L_27 = &(__this->f6);
		float L_28 = (L_27->f2);
		float L_29 = ((&V_0)->f2);
		t13 * L_30 = &(__this->f6);
		float L_31 = (L_30->f3);
		float L_32 = ((&V_0)->f3);
		t13  L_33 = {0};
		m357(&L_33, ((float)((float)L_25+(float)L_26)), ((float)((float)L_28+(float)L_29)), ((float)((float)L_31+(float)L_32)), &m357_MI);
		m358(L_23, L_33, &m358_MI);
		t45 * L_34 = m350(__this, &m350_MI);
		t13  L_35 = m351(L_34, &m351_MI);
		m67(__this, L_35, &m67_MI);
		return;
	}
}
extern MethodInfo m70_MI;
extern "C" void m70 (t16 * __this, t5 * p0, MethodInfo* method)
{
	{
		t45 * L_0 = m350(__this, &m350_MI);
		t13  L_1 = (__this->f6);
		m358(L_0, L_1, &m358_MI);
		t13  L_2 = (__this->f6);
		m67(__this, L_2, &m67_MI);
		return;
	}
}
extern MethodInfo m71_MI;
extern "C" void m71 (t16 * __this, t5 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m72_MI;
extern "C" void m72 (t16 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t3 * L_1 = (__this->f9);
		m20(L_1, &m20_MI);
	}

IL_0016:
	{
		bool L_2 = (__this->f8);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		t3 * L_3 = (__this->f10);
		m20(L_3, &m20_MI);
	}

IL_002c:
	{
		return;
	}
}
#include "t17.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t17_TI;
#include "t17MD.h"

#include "t134.h"
#include "t59.h"
#include "t135.h"
#include "t136.h"
#include "t9.h"
extern TypeInfo t59_TI;
extern TypeInfo t45_TI;
extern TypeInfo t76_TI;
extern TypeInfo t9_TI;
extern TypeInfo t137_TI;
#include "t59MD.h"
extern MethodInfo m76_MI;
extern MethodInfo m359_MI;
extern MethodInfo m77_MI;
extern MethodInfo m360_MI;
extern MethodInfo m361_MI;
extern MethodInfo m362_MI;
extern MethodInfo m363_MI;
extern MethodInfo m364_MI;
extern MethodInfo m365_MI;
struct t57;
extern "C" t134 * m366 (t9 * __this , MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t59;
#include "t133.h"
extern "C" t134 * m367 (t59 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t59;
extern "C" t135 * m368 (t59 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t59;
extern "C" t136 * m369 (t59 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m366_GM;
extern Il2CppGenericMethod m367_GM;
extern Il2CppGenericMethod m368_GM;
extern Il2CppGenericMethod m369_GM;


extern MethodInfo m73_MI;
extern "C" void m73 (t17 * __this, MethodInfo* method)
{
	{
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m74_MI;
extern "C" void m74 (t17 * __this, MethodInfo* method)
{
	{
		m76(__this, &m76_MI);
		return;
	}
}
extern MethodInfo m75_MI;
extern MethodInfo* m366_MI_var;
extern MethodInfo* m367_MI_var;
extern MethodInfo* m368_MI_var;
extern MethodInfo* m369_MI_var;
extern "C" void m75 (t17 * __this, MethodInfo* method)
{
	static bool m75_init;
	if (!m75_init)
	{
		m366_MI_var = il2cpp_codegen_genericmethod_get_method(&m366_GM);
		m367_MI_var = il2cpp_codegen_genericmethod_get_method(&m367_GM);
		m368_MI_var = il2cpp_codegen_genericmethod_get_method(&m368_GM);
		m369_MI_var = il2cpp_codegen_genericmethod_get_method(&m369_GM);
		m75_init = true;
	}
	t134 * V_0 = {0};
	t59 * V_1 = {0};
	{
		t134 * L_0 = m366(NULL, m366_MI_var);
		V_0 = L_0;
		t134 * L_1 = V_0;
		bool L_2 = m333(NULL, L_1, (t57 *)NULL, &m333_MI);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		t59 * L_3 = (t59 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t59_TI));
		m359(L_3, (t2*) &_stringLiteral4, &m359_MI);
		V_1 = L_3;
		t59 * L_4 = V_1;
		m367(L_4, m367_MI_var);
		t59 * L_5 = V_1;
		m368(L_5, m368_MI_var);
		t59 * L_6 = V_1;
		m369(L_6, m369_MI_var);
	}

IL_0032:
	{
		return;
	}
}
extern "C" void m76 (t17 * __this, MethodInfo* method)
{
	{
		m77(__this, 0, &m77_MI);
		return;
	}
}
extern "C" void m77 (t17 * __this, bool p0, MethodInfo* method)
{
	t45 * V_0 = {0};
	t9 * V_1 = {0};
	t9 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t45 * L_0 = m350(__this, &m350_MI);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m360_MI, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_0011:
		{
			t9 * L_2 = V_1;
			t9 * L_3 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_2);
			V_0 = ((t45 *)Castclass(L_3, InitializedTypeInfo(&t45_TI)));
			t45 * L_4 = V_0;
			t59 * L_5 = m362(L_4, &m362_MI);
			bool L_6 = p0;
			m363(L_5, L_6, &m363_MI);
		}

IL_0029:
		{
			t9 * L_7 = V_1;
			bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_7);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		{
			t9 * L_9 = V_1;
			V_2 = ((t9 *)IsInst(L_9, InitializedTypeInfo(&t137_TI)));
			t9 * L_10 = V_2;
			if (L_10)
			{
				goto IL_0044;
			}
		}

IL_0043:
		{
			IL2CPP_END_FINALLY(57)
		}

IL_0044:
		{
			t9 * L_11 = V_2;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_11);
			IL2CPP_END_FINALLY(57)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_004b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t29.h"
#include "t30.h"
extern TypeInfo t29_TI;
extern TypeInfo t30_TI;
#include "t29MD.h"
#include "t30MD.h"
extern Il2CppType t29_0_0_0;
extern Il2CppType t30_0_0_0;
extern MethodInfo m118_MI;
extern MethodInfo m370_MI;
extern MethodInfo m80_MI;
extern MethodInfo m371_MI;
extern MethodInfo m372_MI;
extern MethodInfo m79_MI;
extern MethodInfo m373_MI;
extern MethodInfo m119_MI;
extern Il2CppGenericMethod m370_GM;
extern Il2CppGenericMethod m371_GM;
extern Il2CppGenericMethod m372_GM;
extern Il2CppGenericMethod m373_GM;


extern "C" void m78 (t18 * __this, MethodInfo* method)
{
	{
		m118(__this, &m118_MI);
		return;
	}
}
extern "C" void m79 (t18 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t10 * L_1 = (t10 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t10_TI));
		m24(L_1, L_0, &m24_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m41(NULL, L_1, &m41_MI);
		return;
	}
}
extern "C" void m80 (t18 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t3 * L_1 = (t3 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t3_TI));
		m14(L_1, L_0, &m14_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m40(NULL, L_1, &m40_MI);
		return;
	}
}
extern MethodInfo m81_MI;
extern MethodInfo* m370_MI_var;
extern MethodInfo* m371_MI_var;
extern "C" float m81 (t18 * __this, t2* p0, bool p1, MethodInfo* method)
{
	static bool m81_init;
	if (!m81_init)
	{
		m370_MI_var = il2cpp_codegen_genericmethod_get_method(&m370_GM);
		m371_MI_var = il2cpp_codegen_genericmethod_get_method(&m371_GM);
		m81_init = true;
	}
	{
		t29 * L_0 = (__this->f0);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m370_MI_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		t2* L_3 = p0;
		m80(__this, L_3, &m80_MI);
	}

IL_0018:
	{
		t29 * L_4 = (__this->f0);
		t2* L_5 = p0;
		t3 * L_6 = (t3 *)VirtFuncInvoker1< t3 *, t2* >::Invoke(m371_MI_var, L_4, L_5);
		float L_7 = m22(L_6, &m22_MI);
		return L_7;
	}
}
extern MethodInfo m82_MI;
extern MethodInfo* m372_MI_var;
extern MethodInfo* m373_MI_var;
extern "C" void m82 (t18 * __this, t2* p0, MethodInfo* method)
{
	static bool m82_init;
	if (!m82_init)
	{
		m372_MI_var = il2cpp_codegen_genericmethod_get_method(&m372_GM);
		m373_MI_var = il2cpp_codegen_genericmethod_get_method(&m373_GM);
		m82_init = true;
	}
	{
		t30 * L_0 = (__this->f1);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m372_MI_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		t2* L_3 = p0;
		m79(__this, L_3, &m79_MI);
	}

IL_0018:
	{
		t30 * L_4 = (__this->f1);
		t2* L_5 = p0;
		t10 * L_6 = (t10 *)VirtFuncInvoker1< t10 *, t2* >::Invoke(m373_MI_var, L_4, L_5);
		m30(L_6, &m30_MI);
		return;
	}
}
extern MethodInfo m83_MI;
extern MethodInfo* m372_MI_var;
extern MethodInfo* m373_MI_var;
extern "C" void m83 (t18 * __this, t2* p0, MethodInfo* method)
{
	static bool m83_init;
	if (!m83_init)
	{
		m372_MI_var = il2cpp_codegen_genericmethod_get_method(&m372_GM);
		m373_MI_var = il2cpp_codegen_genericmethod_get_method(&m373_GM);
		m83_init = true;
	}
	{
		t30 * L_0 = (__this->f1);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m372_MI_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		t2* L_3 = p0;
		m79(__this, L_3, &m79_MI);
	}

IL_0018:
	{
		t30 * L_4 = (__this->f1);
		t2* L_5 = p0;
		t10 * L_6 = (t10 *)VirtFuncInvoker1< t10 *, t2* >::Invoke(m373_MI_var, L_4, L_5);
		m31(L_6, &m31_MI);
		return;
	}
}
extern MethodInfo m84_MI;
extern MethodInfo* m370_MI_var;
extern MethodInfo* m371_MI_var;
extern "C" void m84 (t18 * __this, t2* p0, MethodInfo* method)
{
	static bool m84_init;
	if (!m84_init)
	{
		m370_MI_var = il2cpp_codegen_genericmethod_get_method(&m370_GM);
		m371_MI_var = il2cpp_codegen_genericmethod_get_method(&m371_GM);
		m84_init = true;
	}
	{
		t29 * L_0 = (__this->f0);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m370_MI_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		t2* L_3 = p0;
		m80(__this, L_3, &m80_MI);
	}

IL_0018:
	{
		t29 * L_4 = (__this->f0);
		t2* L_5 = p0;
		t3 * L_6 = (t3 *)VirtFuncInvoker1< t3 *, t2* >::Invoke(m371_MI_var, L_4, L_5);
		m21(L_6, (1.0f), &m21_MI);
		return;
	}
}
extern MethodInfo m85_MI;
extern MethodInfo* m370_MI_var;
extern MethodInfo* m371_MI_var;
extern "C" void m85 (t18 * __this, t2* p0, MethodInfo* method)
{
	static bool m85_init;
	if (!m85_init)
	{
		m370_MI_var = il2cpp_codegen_genericmethod_get_method(&m370_GM);
		m371_MI_var = il2cpp_codegen_genericmethod_get_method(&m371_GM);
		m85_init = true;
	}
	{
		t29 * L_0 = (__this->f0);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m370_MI_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		t2* L_3 = p0;
		m80(__this, L_3, &m80_MI);
	}

IL_0018:
	{
		t29 * L_4 = (__this->f0);
		t2* L_5 = p0;
		t3 * L_6 = (t3 *)VirtFuncInvoker1< t3 *, t2* >::Invoke(m371_MI_var, L_4, L_5);
		m21(L_6, (-1.0f), &m21_MI);
		return;
	}
}
extern MethodInfo m86_MI;
extern MethodInfo* m370_MI_var;
extern MethodInfo* m371_MI_var;
extern "C" void m86 (t18 * __this, t2* p0, MethodInfo* method)
{
	static bool m86_init;
	if (!m86_init)
	{
		m370_MI_var = il2cpp_codegen_genericmethod_get_method(&m370_GM);
		m371_MI_var = il2cpp_codegen_genericmethod_get_method(&m371_GM);
		m86_init = true;
	}
	{
		t29 * L_0 = (__this->f0);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m370_MI_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		t2* L_3 = p0;
		m80(__this, L_3, &m80_MI);
	}

IL_0018:
	{
		t29 * L_4 = (__this->f0);
		t2* L_5 = p0;
		t3 * L_6 = (t3 *)VirtFuncInvoker1< t3 *, t2* >::Invoke(m371_MI_var, L_4, L_5);
		m21(L_6, (0.0f), &m21_MI);
		return;
	}
}
extern MethodInfo m87_MI;
extern MethodInfo* m370_MI_var;
extern MethodInfo* m371_MI_var;
extern "C" void m87 (t18 * __this, t2* p0, float p1, MethodInfo* method)
{
	static bool m87_init;
	if (!m87_init)
	{
		m370_MI_var = il2cpp_codegen_genericmethod_get_method(&m370_GM);
		m371_MI_var = il2cpp_codegen_genericmethod_get_method(&m371_GM);
		m87_init = true;
	}
	{
		t29 * L_0 = (__this->f0);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m370_MI_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		t2* L_3 = p0;
		m80(__this, L_3, &m80_MI);
	}

IL_0018:
	{
		t29 * L_4 = (__this->f0);
		t2* L_5 = p0;
		t3 * L_6 = (t3 *)VirtFuncInvoker1< t3 *, t2* >::Invoke(m371_MI_var, L_4, L_5);
		float L_7 = p1;
		m21(L_6, L_7, &m21_MI);
		return;
	}
}
extern MethodInfo m88_MI;
extern MethodInfo* m372_MI_var;
extern MethodInfo* m373_MI_var;
extern "C" bool m88 (t18 * __this, t2* p0, MethodInfo* method)
{
	static bool m88_init;
	if (!m88_init)
	{
		m372_MI_var = il2cpp_codegen_genericmethod_get_method(&m372_GM);
		m373_MI_var = il2cpp_codegen_genericmethod_get_method(&m373_GM);
		m88_init = true;
	}
	{
		t30 * L_0 = (__this->f1);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m372_MI_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		t30 * L_3 = (__this->f1);
		t2* L_4 = p0;
		t10 * L_5 = (t10 *)VirtFuncInvoker1< t10 *, t2* >::Invoke(m373_MI_var, L_3, L_4);
		bool L_6 = m34(L_5, &m34_MI);
		return L_6;
	}

IL_0023:
	{
		t2* L_7 = p0;
		m79(__this, L_7, &m79_MI);
		t30 * L_8 = (__this->f1);
		t2* L_9 = p0;
		t10 * L_10 = (t10 *)VirtFuncInvoker1< t10 *, t2* >::Invoke(m373_MI_var, L_8, L_9);
		bool L_11 = m34(L_10, &m34_MI);
		return L_11;
	}
}
extern MethodInfo m89_MI;
extern MethodInfo* m372_MI_var;
extern MethodInfo* m373_MI_var;
extern "C" bool m89 (t18 * __this, t2* p0, MethodInfo* method)
{
	static bool m89_init;
	if (!m89_init)
	{
		m372_MI_var = il2cpp_codegen_genericmethod_get_method(&m372_GM);
		m373_MI_var = il2cpp_codegen_genericmethod_get_method(&m373_GM);
		m89_init = true;
	}
	{
		t30 * L_0 = (__this->f1);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m372_MI_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		t30 * L_3 = (__this->f1);
		t2* L_4 = p0;
		t10 * L_5 = (t10 *)VirtFuncInvoker1< t10 *, t2* >::Invoke(m373_MI_var, L_3, L_4);
		bool L_6 = m35(L_5, &m35_MI);
		return L_6;
	}

IL_0023:
	{
		t2* L_7 = p0;
		m79(__this, L_7, &m79_MI);
		t30 * L_8 = (__this->f1);
		t2* L_9 = p0;
		t10 * L_10 = (t10 *)VirtFuncInvoker1< t10 *, t2* >::Invoke(m373_MI_var, L_8, L_9);
		bool L_11 = m35(L_10, &m35_MI);
		return L_11;
	}
}
extern MethodInfo m90_MI;
extern MethodInfo* m372_MI_var;
extern MethodInfo* m373_MI_var;
extern "C" bool m90 (t18 * __this, t2* p0, MethodInfo* method)
{
	static bool m90_init;
	if (!m90_init)
	{
		m372_MI_var = il2cpp_codegen_genericmethod_get_method(&m372_GM);
		m373_MI_var = il2cpp_codegen_genericmethod_get_method(&m373_GM);
		m90_init = true;
	}
	{
		t30 * L_0 = (__this->f1);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m372_MI_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		t30 * L_3 = (__this->f1);
		t2* L_4 = p0;
		t10 * L_5 = (t10 *)VirtFuncInvoker1< t10 *, t2* >::Invoke(m373_MI_var, L_3, L_4);
		bool L_6 = m33(L_5, &m33_MI);
		return L_6;
	}

IL_0023:
	{
		t2* L_7 = p0;
		m79(__this, L_7, &m79_MI);
		t30 * L_8 = (__this->f1);
		t2* L_9 = p0;
		t10 * L_10 = (t10 *)VirtFuncInvoker1< t10 *, t2* >::Invoke(m373_MI_var, L_8, L_9);
		bool L_11 = m33(L_10, &m33_MI);
		return L_11;
	}
}
extern MethodInfo m91_MI;
extern "C" t13  m91 (t18 * __this, MethodInfo* method)
{
	{
		t13  L_0 = m119(__this, &m119_MI);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t138.h"
extern TypeInfo t139_TI;
extern TypeInfo t138_TI;
#include "t139MD.h"
#include "t138MD.h"
extern MethodInfo m374_MI;
extern MethodInfo m375_MI;
extern MethodInfo m376_MI;
extern MethodInfo m377_MI;
extern MethodInfo m378_MI;
extern MethodInfo m379_MI;
extern MethodInfo m380_MI;


extern "C" void m92 (t19 * __this, MethodInfo* method)
{
	{
		m118(__this, &m118_MI);
		return;
	}
}
extern MethodInfo m93_MI;
extern "C" float m93 (t19 * __this, t2* p0, bool p1, MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		bool L_0 = p1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		t2* L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		float L_2 = m374(NULL, L_1, &m374_MI);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0011:
	{
		t2* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		float L_4 = m375(NULL, L_3, &m375_MI);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
extern MethodInfo m94_MI;
extern "C" bool m94 (t19 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		bool L_1 = m376(NULL, L_0, &m376_MI);
		return L_1;
	}
}
extern MethodInfo m95_MI;
extern "C" bool m95 (t19 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		bool L_1 = m377(NULL, L_0, &m377_MI);
		return L_1;
	}
}
extern MethodInfo m96_MI;
extern "C" bool m96 (t19 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		bool L_1 = m378(NULL, L_0, &m378_MI);
		return L_1;
	}
}
extern MethodInfo m97_MI;
extern "C" void m97 (t19 * __this, t2* p0, MethodInfo* method)
{
	{
		t138 * L_0 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_0, (t2*) &_stringLiteral5, &m379_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m98_MI;
extern "C" void m98 (t19 * __this, t2* p0, MethodInfo* method)
{
	{
		t138 * L_0 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_0, (t2*) &_stringLiteral5, &m379_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m99_MI;
extern "C" void m99 (t19 * __this, t2* p0, MethodInfo* method)
{
	{
		t138 * L_0 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_0, (t2*) &_stringLiteral5, &m379_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m100_MI;
extern "C" void m100 (t19 * __this, t2* p0, MethodInfo* method)
{
	{
		t138 * L_0 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_0, (t2*) &_stringLiteral5, &m379_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m101_MI;
extern "C" void m101 (t19 * __this, t2* p0, MethodInfo* method)
{
	{
		t138 * L_0 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_0, (t2*) &_stringLiteral5, &m379_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m102_MI;
extern "C" void m102 (t19 * __this, t2* p0, float p1, MethodInfo* method)
{
	{
		t138 * L_0 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_0, (t2*) &_stringLiteral5, &m379_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m103_MI;
extern "C" t13  m103 (t19 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		t13  L_0 = m380(NULL, &m380_MI);
		return L_0;
	}
}
#include "t20.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t20_TI;
#include "t20MD.h"



#include "t21.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t21_TI;
#include "t21MD.h"



#include "t22.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t22_TI;
#include "t22MD.h"



extern MethodInfo m104_MI;
extern "C" void m104 (t22 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#include "t23.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t23_TI;
#include "t23MD.h"

#include "t140MD.h"
extern MethodInfo m381_MI;
extern MethodInfo m382_MI;
extern MethodInfo m383_MI;
extern MethodInfo m384_MI;
extern MethodInfo m385_MI;


extern MethodInfo m105_MI;
extern "C" void m105 (t23 * __this, MethodInfo* method)
{
	{
		__this->f4 = (25.0f);
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m106_MI;
extern "C" void m106 (t23 * __this, MethodInfo* method)
{
	{
		t22 * L_0 = (__this->f2);
		int32_t L_1 = (L_0->f0);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		t22 * L_2 = (__this->f2);
		t2* L_3 = (L_2->f1);
		t3 * L_4 = (t3 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t3_TI));
		m14(L_4, L_3, &m14_MI);
		__this->f6 = L_4;
		t3 * L_5 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m40(NULL, L_5, &m40_MI);
	}

IL_0031:
	{
		return;
	}
}
extern MethodInfo m107_MI;
extern "C" void m107 (t23 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = {0};
	t13  V_3 = {0};
	t13  V_4 = {0};
	t13  V_5 = {0};
	t13  V_6 = {0};
	int32_t V_7 = {0};
	{
		V_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		t13  L_0 = m381(NULL, &m381_MI);
		t13  L_1 = m354(NULL, &m354_MI);
		bool L_2 = m382(NULL, L_0, L_1, &m382_MI);
		if (!L_2)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_3 = (__this->f3);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0067;
		}
	}
	{
		goto IL_009c;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		t13  L_6 = m381(NULL, &m381_MI);
		V_3 = L_6;
		float L_7 = ((&V_3)->f1);
		t13  L_8 = m381(NULL, &m381_MI);
		V_4 = L_8;
		float L_9 = ((&V_4)->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_10 = atan2f(L_7, ((-L_9)));
		float L_11 = (__this->f5);
		V_0 = ((float)((float)((float)((float)L_10*(float)(57.29578f)))+(float)L_11));
		goto IL_009c;
	}

IL_0067:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		t13  L_12 = m381(NULL, &m381_MI);
		V_5 = L_12;
		float L_13 = ((&V_5)->f3);
		t13  L_14 = m381(NULL, &m381_MI);
		V_6 = L_14;
		float L_15 = ((&V_6)->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_16 = atan2f(L_13, ((-L_15)));
		float L_17 = (__this->f5);
		V_0 = ((float)((float)((float)((float)L_16*(float)(57.29578f)))+(float)L_17));
		goto IL_009c;
	}

IL_009c:
	{
		float L_18 = (__this->f4);
		float L_19 = (__this->f4);
		float L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_21 = m384(NULL, ((-L_18)), L_19, L_20, &m384_MI);
		V_1 = ((float)((float)((float)((float)L_21*(float)(2.0f)))-(float)(1.0f)));
		t22 * L_22 = (__this->f2);
		int32_t L_23 = (L_22->f0);
		V_7 = L_23;
		int32_t L_24 = V_7;
		if (L_24 == 0)
		{
			goto IL_00e5;
		}
		if (L_24 == 1)
		{
			goto IL_00f6;
		}
		if (L_24 == 2)
		{
			goto IL_0108;
		}
		if (L_24 == 3)
		{
			goto IL_011a;
		}
	}
	{
		goto IL_012c;
	}

IL_00e5:
	{
		t3 * L_25 = (__this->f6);
		float L_26 = V_1;
		m21(L_25, L_26, &m21_MI);
		goto IL_012c;
	}

IL_00f6:
	{
		float L_27 = V_1;
		int32_t L_28 = m385(NULL, &m385_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m58(NULL, ((float)((float)L_27*(float)(((float)L_28)))), &m58_MI);
		goto IL_012c;
	}

IL_0108:
	{
		float L_29 = V_1;
		int32_t L_30 = m385(NULL, &m385_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m59(NULL, ((float)((float)L_29*(float)(((float)L_30)))), &m59_MI);
		goto IL_012c;
	}

IL_011a:
	{
		float L_31 = V_1;
		int32_t L_32 = m385(NULL, &m385_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m60(NULL, ((float)((float)L_31*(float)(((float)L_32)))), &m60_MI);
		goto IL_012c;
	}

IL_012c:
	{
		return;
	}
}
extern MethodInfo m108_MI;
extern "C" void m108 (t23 * __this, MethodInfo* method)
{
	{
		t3 * L_0 = (__this->f6);
		m20(L_0, &m20_MI);
		return;
	}
}
#include "t24.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t24_TI;
#include "t24MD.h"



#include "t25.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t25_TI;
#include "t25MD.h"



#include "t26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t26_TI;
#include "t26MD.h"

#include "t27.h"
#include "t141.h"
#include "t28MD.h"
#include "t141MD.h"
extern MethodInfo m112_MI;
extern MethodInfo m386_MI;
extern MethodInfo m387_MI;
extern MethodInfo m388_MI;
extern MethodInfo m389_MI;
extern MethodInfo m390_MI;
extern MethodInfo m391_MI;
extern MethodInfo m392_MI;
extern MethodInfo m393_MI;
extern MethodInfo m113_MI;
struct t133;
struct t133;
extern "C" t9 * m395_gshared (t133 * __this, MethodInfo* method);
#define m395(__this, method) (( t9 * (*) (t133 *, MethodInfo*))m395_gshared)(__this, method)
#define m394(__this, method) (( t27 * (*) (t133 *, MethodInfo*))m395_gshared)(__this, method)
extern Il2CppGenericMethod m394_GM;


extern MethodInfo m109_MI;
extern "C" void m109 (t26 * __this, MethodInfo* method)
{
	{
		__this->f4 = (t2*) &_stringLiteral1;
		__this->f5 = (t2*) &_stringLiteral3;
		__this->f6 = (1.0f);
		__this->f7 = (1.0f);
		__this->f16 = (-1);
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m110_MI;
extern "C" void m110 (t26 * __this, MethodInfo* method)
{
	{
		m112(__this, &m112_MI);
		return;
	}
}
extern MethodInfo m111_MI;
extern MethodInfo* m394_MI_var;
extern "C" void m111 (t26 * __this, MethodInfo* method)
{
	static bool m111_init;
	if (!m111_init)
	{
		m394_MI_var = il2cpp_codegen_genericmethod_get_method(&m394_GM);
		m111_init = true;
	}
	{
		t27 * L_0 = m394(__this, m394_MI_var);
		__this->f19 = L_0;
		t27 * L_1 = (__this->f19);
		t45 * L_2 = m350(L_1, &m350_MI);
		t13  L_3 = m351(L_2, &m351_MI);
		__this->f18 = L_3;
		return;
	}
}
extern "C" void m112 (t26 * __this, MethodInfo* method)
{
	t26 * G_B2_0 = {0};
	t26 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t26 * G_B3_1 = {0};
	t26 * G_B5_0 = {0};
	t26 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	t26 * G_B6_1 = {0};
	{
		int32_t L_0 = (__this->f2);
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		G_B3_1->f11 = G_B3_0;
		int32_t L_2 = (__this->f2);
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = (__this->f2);
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0035:
	{
		G_B6_1->f12 = G_B6_0;
		bool L_4 = (__this->f11);
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		t2* L_5 = (__this->f4);
		t3 * L_6 = (t3 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t3_TI));
		m14(L_6, L_5, &m14_MI);
		__this->f13 = L_6;
		t3 * L_7 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m40(NULL, L_7, &m40_MI);
	}

IL_0061:
	{
		bool L_8 = (__this->f12);
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		t2* L_9 = (__this->f5);
		t3 * L_10 = (t3 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t3_TI));
		m14(L_10, L_9, &m14_MI);
		__this->f14 = L_10;
		t3 * L_11 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m40(NULL, L_11, &m40_MI);
	}

IL_0088:
	{
		return;
	}
}
extern "C" void m113 (t26 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m386((&p0), &m386_MI);
		p0 = L_0;
		bool L_1 = (__this->f11);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		t3 * L_2 = (__this->f13);
		float L_3 = ((&p0)->f1);
		m21(L_2, L_3, &m21_MI);
	}

IL_0026:
	{
		bool L_4 = (__this->f12);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		t3 * L_5 = (__this->f14);
		float L_6 = ((&p0)->f2);
		m21(L_5, L_6, &m21_MI);
	}

IL_0043:
	{
		return;
	}
}
extern MethodInfo m114_MI;
extern "C" void m114 (t26 * __this, t5 * p0, MethodInfo* method)
{
	{
		__this->f15 = 1;
		t5 * L_0 = p0;
		int32_t L_1 = m387(L_0, &m387_MI);
		__this->f16 = L_1;
		int32_t L_2 = (__this->f3);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		t5 * L_3 = p0;
		t28  L_4 = m355(L_3, &m355_MI);
		t13  L_5 = m388(NULL, L_4, &m388_MI);
		__this->f18 = L_5;
	}

IL_002f:
	{
		return;
	}
}
extern MethodInfo m115_MI;
extern "C" void m115 (t26 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	t28  V_1 = {0};
	t28  V_2 = {0};
	t28  V_3 = {0};
	{
		bool L_0 = (__this->f15);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		int32_t L_1 = m389(NULL, &m389_MI);
		int32_t L_2 = (__this->f16);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)L_2+(int32_t)1)))))
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_3 = (__this->f16);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_4 = (__this->f3);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0062;
		}
	}
	{
		t28  L_5 = (__this->f17);
		t13  L_6 = m388(NULL, L_5, &m388_MI);
		__this->f18 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		t142* L_7 = m390(NULL, &m390_MI);
		int32_t L_8 = (__this->f16);
		t28  L_9 = m391(((t141 *)(t141 *)SZArrayLdElema(L_7, L_8)), &m391_MI);
		__this->f17 = L_9;
	}

IL_0062:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		t142* L_10 = m390(NULL, &m390_MI);
		int32_t L_11 = (__this->f16);
		t28  L_12 = m391(((t141 *)(t141 *)SZArrayLdElema(L_10, L_11)), &m391_MI);
		V_2 = L_12;
		float L_13 = ((&V_2)->f1);
		t13 * L_14 = &(__this->f18);
		float L_15 = (L_14->f1);
		t142* L_16 = m390(NULL, &m390_MI);
		int32_t L_17 = (__this->f16);
		t28  L_18 = m391(((t141 *)(t141 *)SZArrayLdElema(L_16, L_17)), &m391_MI);
		V_3 = L_18;
		float L_19 = ((&V_3)->f2);
		t13 * L_20 = &(__this->f18);
		float L_21 = (L_20->f2);
		m392((&V_1), ((float)((float)L_13-(float)L_15)), ((float)((float)L_19-(float)L_21)), &m392_MI);
		t28  L_22 = m393((&V_1), &m393_MI);
		V_0 = L_22;
		t28 * L_23 = (&V_0);
		float L_24 = (L_23->f1);
		float L_25 = (__this->f6);
		L_23->f1 = ((float)((float)L_24*(float)L_25));
		t28 * L_26 = (&V_0);
		float L_27 = (L_26->f2);
		float L_28 = (__this->f7);
		L_26->f2 = ((float)((float)L_27*(float)L_28));
		float L_29 = ((&V_0)->f1);
		float L_30 = ((&V_0)->f2);
		t13  L_31 = {0};
		m357(&L_31, L_29, L_30, (0.0f), &m357_MI);
		m113(__this, L_31, &m113_MI);
	}

IL_0109:
	{
		return;
	}
}
extern MethodInfo m116_MI;
extern "C" void m116 (t26 * __this, t5 * p0, MethodInfo* method)
{
	{
		__this->f15 = 0;
		__this->f16 = (-1);
		t13  L_0 = m354(NULL, &m354_MI);
		m113(__this, L_0, &m113_MI);
		return;
	}
}
extern MethodInfo m117_MI;
extern "C" void m117 (t26 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		bool L_1 = m38(NULL, L_0, &m38_MI);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		t2* L_2 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m42(NULL, L_2, &m42_MI);
	}

IL_001b:
	{
		t2* L_3 = (__this->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		bool L_4 = m38(NULL, L_3, &m38_MI);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		t2* L_5 = (__this->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		m42(NULL, L_5, &m42_MI);
	}

IL_0036:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t31.h"
extern TypeInfo t31_TI;
#include "t31MD.h"
#include "t143MD.h"
extern Il2CppType t31_0_0_0;
extern MethodInfo m396_MI;
extern MethodInfo m397_MI;
extern MethodInfo m398_MI;
extern MethodInfo m399_MI;
extern MethodInfo m400_MI;
extern MethodInfo m401_MI;
extern MethodInfo m402_MI;
extern MethodInfo m403_MI;
extern MethodInfo m404_MI;
extern MethodInfo m405_MI;
extern MethodInfo m120_MI;
extern Il2CppGenericMethod m396_GM;
extern Il2CppGenericMethod m397_GM;
extern Il2CppGenericMethod m398_GM;
extern Il2CppGenericMethod m401_GM;
extern Il2CppGenericMethod m402_GM;
extern Il2CppGenericMethod m403_GM;
extern Il2CppGenericMethod m404_GM;
extern Il2CppGenericMethod m405_GM;


extern TypeInfo* t29_TI_var;
extern TypeInfo* t30_TI_var;
extern TypeInfo* t31_TI_var;
extern MethodInfo* m396_MI_var;
extern MethodInfo* m397_MI_var;
extern MethodInfo* m398_MI_var;
extern "C" void m118 (t12 * __this, MethodInfo* method)
{
	static bool m118_init;
	if (!m118_init)
	{
		t29_TI_var = il2cpp_codegen_class_from_type(&t29_0_0_0);
		t30_TI_var = il2cpp_codegen_class_from_type(&t30_0_0_0);
		t31_TI_var = il2cpp_codegen_class_from_type(&t31_0_0_0);
		m396_MI_var = il2cpp_codegen_genericmethod_get_method(&m396_GM);
		m397_MI_var = il2cpp_codegen_genericmethod_get_method(&m397_GM);
		m398_MI_var = il2cpp_codegen_genericmethod_get_method(&m398_GM);
		m118_init = true;
	}
	{
		t29 * L_0 = (t29 *)il2cpp_codegen_object_new (t29_TI_var);
		m396(L_0, m396_MI_var);
		__this->f0 = L_0;
		t30 * L_1 = (t30 *)il2cpp_codegen_object_new (t30_TI_var);
		m397(L_1, m397_MI_var);
		__this->f1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(t31_TI_var);
		t31 * L_2 = (t31 *)il2cpp_codegen_object_new (t31_TI_var);
		m398(L_2, m398_MI_var);
		__this->f2 = L_2;
		m336(__this, &m336_MI);
		return;
	}
}
extern "C" t13  m119 (t12 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m120 (t12 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern MethodInfo* m370_MI_var;
extern "C" bool m121 (t12 * __this, t2* p0, MethodInfo* method)
{
	static bool m121_init;
	if (!m121_init)
	{
		m370_MI_var = il2cpp_codegen_genericmethod_get_method(&m370_GM);
		m121_init = true;
	}
	{
		t29 * L_0 = (__this->f0);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m370_MI_var, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo* m372_MI_var;
extern "C" bool m122 (t12 * __this, t2* p0, MethodInfo* method)
{
	static bool m122_init;
	if (!m122_init)
	{
		m372_MI_var = il2cpp_codegen_genericmethod_get_method(&m372_GM);
		m122_init = true;
	}
	{
		t30 * L_0 = (__this->f1);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m372_MI_var, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo* m370_MI_var;
extern MethodInfo* m401_MI_var;
extern MethodInfo* m402_MI_var;
extern "C" void m123 (t12 * __this, t3 * p0, MethodInfo* method)
{
	static bool m123_init;
	if (!m123_init)
	{
		m370_MI_var = il2cpp_codegen_genericmethod_get_method(&m370_GM);
		m401_MI_var = il2cpp_codegen_genericmethod_get_method(&m401_GM);
		m402_MI_var = il2cpp_codegen_genericmethod_get_method(&m402_GM);
		m123_init = true;
	}
	{
		t29 * L_0 = (__this->f0);
		t3 * L_1 = p0;
		t2* L_2 = m16(L_1, &m16_MI);
		bool L_3 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m370_MI_var, L_0, L_2);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		t3 * L_4 = p0;
		t2* L_5 = m16(L_4, &m16_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m399(NULL, (t2*) &_stringLiteral6, L_5, (t2*) &_stringLiteral7, &m399_MI);
		m400(NULL, L_6, &m400_MI);
		goto IL_0063;
	}

IL_0035:
	{
		t29 * L_7 = (__this->f0);
		t3 * L_8 = p0;
		t2* L_9 = m16(L_8, &m16_MI);
		t3 * L_10 = p0;
		VirtActionInvoker2< t2*, t3 * >::Invoke(m401_MI_var, L_7, L_9, L_10);
		t3 * L_11 = p0;
		bool L_12 = m18(L_11, &m18_MI);
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		t31 * L_13 = (__this->f2);
		t3 * L_14 = p0;
		t2* L_15 = m16(L_14, &m16_MI);
		VirtActionInvoker1< t2* >::Invoke(m402_MI_var, L_13, L_15);
	}

IL_0063:
	{
		return;
	}
}
extern MethodInfo* m372_MI_var;
extern MethodInfo* m403_MI_var;
extern MethodInfo* m402_MI_var;
extern "C" void m124 (t12 * __this, t10 * p0, MethodInfo* method)
{
	static bool m124_init;
	if (!m124_init)
	{
		m372_MI_var = il2cpp_codegen_genericmethod_get_method(&m372_GM);
		m403_MI_var = il2cpp_codegen_genericmethod_get_method(&m403_GM);
		m402_MI_var = il2cpp_codegen_genericmethod_get_method(&m402_GM);
		m124_init = true;
	}
	{
		t30 * L_0 = (__this->f1);
		t10 * L_1 = p0;
		t2* L_2 = m26(L_1, &m26_MI);
		bool L_3 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m372_MI_var, L_0, L_2);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		t10 * L_4 = p0;
		t2* L_5 = m26(L_4, &m26_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m399(NULL, (t2*) &_stringLiteral8, L_5, (t2*) &_stringLiteral7, &m399_MI);
		m400(NULL, L_6, &m400_MI);
		goto IL_0063;
	}

IL_0035:
	{
		t30 * L_7 = (__this->f1);
		t10 * L_8 = p0;
		t2* L_9 = m26(L_8, &m26_MI);
		t10 * L_10 = p0;
		VirtActionInvoker2< t2*, t10 * >::Invoke(m403_MI_var, L_7, L_9, L_10);
		t10 * L_11 = p0;
		bool L_12 = m28(L_11, &m28_MI);
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		t31 * L_13 = (__this->f2);
		t10 * L_14 = p0;
		t2* L_15 = m26(L_14, &m26_MI);
		VirtActionInvoker1< t2* >::Invoke(m402_MI_var, L_13, L_15);
	}

IL_0063:
	{
		return;
	}
}
extern MethodInfo* m370_MI_var;
extern MethodInfo* m404_MI_var;
extern "C" void m125 (t12 * __this, t2* p0, MethodInfo* method)
{
	static bool m125_init;
	if (!m125_init)
	{
		m370_MI_var = il2cpp_codegen_genericmethod_get_method(&m370_GM);
		m404_MI_var = il2cpp_codegen_genericmethod_get_method(&m404_GM);
		m125_init = true;
	}
	{
		t29 * L_0 = (__this->f0);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m370_MI_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		t29 * L_3 = (__this->f0);
		t2* L_4 = p0;
		VirtFuncInvoker1< bool, t2* >::Invoke(m404_MI_var, L_3, L_4);
	}

IL_001e:
	{
		return;
	}
}
extern MethodInfo* m372_MI_var;
extern MethodInfo* m405_MI_var;
extern "C" void m126 (t12 * __this, t2* p0, MethodInfo* method)
{
	static bool m126_init;
	if (!m126_init)
	{
		m372_MI_var = il2cpp_codegen_genericmethod_get_method(&m372_GM);
		m405_MI_var = il2cpp_codegen_genericmethod_get_method(&m405_GM);
		m126_init = true;
	}
	{
		t30 * L_0 = (__this->f1);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m372_MI_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		t30 * L_3 = (__this->f1);
		t2* L_4 = p0;
		VirtFuncInvoker1< bool, t2* >::Invoke(m405_MI_var, L_3, L_4);
	}

IL_001e:
	{
		return;
	}
}
extern MethodInfo* m370_MI_var;
extern MethodInfo* m371_MI_var;
extern "C" t3 * m127 (t12 * __this, t2* p0, MethodInfo* method)
{
	static bool m127_init;
	if (!m127_init)
	{
		m370_MI_var = il2cpp_codegen_genericmethod_get_method(&m370_GM);
		m371_MI_var = il2cpp_codegen_genericmethod_get_method(&m371_GM);
		m127_init = true;
	}
	t3 * G_B3_0 = {0};
	{
		t29 * L_0 = (__this->f0);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m370_MI_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		t29 * L_3 = (__this->f0);
		t2* L_4 = p0;
		t3 * L_5 = (t3 *)VirtFuncInvoker1< t3 *, t2* >::Invoke(m371_MI_var, L_3, L_4);
		G_B3_0 = L_5;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = ((t3 *)(NULL));
	}

IL_0023:
	{
		return G_B3_0;
	}
}
extern "C" void m128 (t12 * __this, float p0, MethodInfo* method)
{
	t13  V_0 = {0};
	t13  V_1 = {0};
	{
		float L_0 = p0;
		t13  L_1 = m119(__this, &m119_MI);
		V_0 = L_1;
		float L_2 = ((&V_0)->f2);
		t13  L_3 = m119(__this, &m119_MI);
		V_1 = L_3;
		float L_4 = ((&V_1)->f3);
		t13  L_5 = {0};
		m357(&L_5, L_0, L_2, L_4, &m357_MI);
		m120(__this, L_5, &m120_MI);
		return;
	}
}
extern "C" void m129 (t12 * __this, float p0, MethodInfo* method)
{
	t13  V_0 = {0};
	t13  V_1 = {0};
	{
		t13  L_0 = m119(__this, &m119_MI);
		V_0 = L_0;
		float L_1 = ((&V_0)->f1);
		float L_2 = p0;
		t13  L_3 = m119(__this, &m119_MI);
		V_1 = L_3;
		float L_4 = ((&V_1)->f3);
		t13  L_5 = {0};
		m357(&L_5, L_1, L_2, L_4, &m357_MI);
		m120(__this, L_5, &m120_MI);
		return;
	}
}
extern "C" void m130 (t12 * __this, float p0, MethodInfo* method)
{
	t13  V_0 = {0};
	t13  V_1 = {0};
	{
		t13  L_0 = m119(__this, &m119_MI);
		V_0 = L_0;
		float L_1 = ((&V_0)->f1);
		t13  L_2 = m119(__this, &m119_MI);
		V_1 = L_2;
		float L_3 = ((&V_1)->f2);
		float L_4 = p0;
		t13  L_5 = {0};
		m357(&L_5, L_1, L_3, L_4, &m357_MI);
		m120(__this, L_5, &m120_MI);
		return;
	}
}
#include "t32.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t32_TI;
#include "t32MD.h"

#include "t144.h"
#include "t40.h"
#include "t47.h"
extern TypeInfo t47_TI;
#include "t144MD.h"
#include "t40MD.h"
#include "t47MD.h"
extern MethodInfo m406_MI;
extern MethodInfo m407_MI;
extern MethodInfo m408_MI;
extern MethodInfo m409_MI;
extern MethodInfo m410_MI;
extern MethodInfo m411_MI;
extern MethodInfo m412_MI;
extern MethodInfo m413_MI;
extern MethodInfo m414_MI;
struct t133;
#define m415(__this, method) (( t144 * (*) (t133 *, MethodInfo*))m395_gshared)(__this, method)
extern Il2CppGenericMethod m415_GM;


extern MethodInfo m131_MI;
extern "C" void m131 (t32 * __this, MethodInfo* method)
{
	{
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m132_MI;
extern MethodInfo* m415_MI_var;
extern "C" void m132 (t32 * __this, MethodInfo* method)
{
	static bool m132_init;
	if (!m132_init)
	{
		m415_MI_var = il2cpp_codegen_genericmethod_get_method(&m415_GM);
		m132_init = true;
	}
	t144 * V_0 = {0};
	t40 * V_1 = {0};
	t47  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	t47  V_5 = {0};
	t47  V_6 = {0};
	{
		t144 * L_0 = m415(__this, m415_MI_var);
		V_0 = L_0;
		t144 * L_1 = V_0;
		bool L_2 = m406(NULL, L_1, &m406_MI);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		t144 * L_3 = V_0;
		t40 * L_4 = m407(L_3, &m407_MI);
		V_1 = L_4;
		t40 * L_5 = V_1;
		bool L_6 = m406(NULL, L_5, &m406_MI);
		if (L_6)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		t40 * L_7 = V_1;
		t47  L_8 = m408(L_7, (t2*) &_stringLiteral9, &m408_MI);
		V_2 = L_8;
		t40 * L_9 = V_1;
		float L_10 = m409(L_9, (t2*) &_stringLiteral10, &m409_MI);
		V_3 = L_10;
		float L_11 = m410(NULL, &m410_MI);
		V_4 = ((float)((float)L_11/(float)(20.0f)));
		t47  L_12 = V_2;
		float L_13 = V_4;
		float L_14 = V_3;
		t47  L_15 = m411(NULL, L_12, ((float)((float)L_13*(float)L_14)), &m411_MI);
		V_5 = L_15;
		float L_16 = ((&V_5)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_17 = m412(NULL, L_16, (1.0f), &m412_MI);
		float L_18 = ((&V_5)->f2);
		float L_19 = m412(NULL, L_18, (1.0f), &m412_MI);
		float L_20 = ((&V_5)->f3);
		float L_21 = m412(NULL, L_20, (1.0f), &m412_MI);
		float L_22 = ((&V_5)->f4);
		float L_23 = m412(NULL, L_22, (1.0f), &m412_MI);
		m413((&V_6), L_17, L_19, L_21, L_23, &m413_MI);
		t40 * L_24 = V_1;
		t47  L_25 = V_6;
		m414(L_24, (t2*) &_stringLiteral11, L_25, &m414_MI);
		return;
	}
}
#include "t33.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t33_TI;
#include "t33MD.h"

#include "t145MD.h"
#include "t62MD.h"
extern MethodInfo m416_MI;
extern MethodInfo m135_MI;
extern MethodInfo m136_MI;
extern MethodInfo m417_MI;
extern MethodInfo m418_MI;


extern MethodInfo m133_MI;
extern "C" void m133 (t33 * __this, MethodInfo* method)
{
	{
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m134_MI;
extern "C" void m134 (t33 * __this, MethodInfo* method)
{
	{
		bool L_0 = m416(__this, &m416_MI);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		m135(__this, &m135_MI);
		goto IL_001c;
	}

IL_0016:
	{
		m136(__this, &m136_MI);
	}

IL_001c:
	{
		return;
	}
}
extern "C" void m135 (t33 * __this, MethodInfo* method)
{
	{
		m417(NULL, (t2*) &_stringLiteral12, &m417_MI);
		m418(NULL, (t2*) &_stringLiteral13, &m418_MI);
		return;
	}
}
extern "C" void m136 (t33 * __this, MethodInfo* method)
{
	{
		m417(NULL, (t2*) &_stringLiteral13, &m417_MI);
		m418(NULL, (t2*) &_stringLiteral12, &m418_MI);
		return;
	}
}
#include "t34.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t34_TI;
#include "t34MD.h"



extern MethodInfo m137_MI;
extern "C" void m137 (t34 * __this, MethodInfo* method)
{
	{
		m133(__this, &m133_MI);
		return;
	}
}
#include "t35.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t35_TI;
#include "t35MD.h"

#include "t36.h"
#include "t36MD.h"
extern MethodInfo m419_MI;
extern MethodInfo m420_MI;
extern MethodInfo m421_MI;
extern MethodInfo m422_MI;


extern MethodInfo m138_MI;
extern "C" void m138 (t35 * __this, t36 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t36 * L_0 = p0;
		__this->f0 = L_0;
		t36 * L_1 = p0;
		t37* L_2 = m419(L_1, &m419_MI);
		__this->f1 = L_2;
		t36 * L_3 = p0;
		t37* L_4 = m420(L_3, &m420_MI);
		__this->f2 = L_4;
		return;
	}
}
extern MethodInfo m139_MI;
extern "C" void m139 (t35 * __this, MethodInfo* method)
{
	{
		t36 * L_0 = (__this->f0);
		t37* L_1 = (__this->f1);
		m421(L_0, L_1, &m421_MI);
		t36 * L_2 = (__this->f0);
		t37* L_3 = (__this->f2);
		m422(L_2, L_3, &m422_MI);
		return;
	}
}
#include "t38.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t38_TI;
#include "t38MD.h"

#include "t43.h"
#include "t49.h"
#include "t39.h"
#include "mscorlib_ArrayTypes.h"
#include "t146.h"
#include "t42.h"
#include "t44.h"
#include "t147.h"
#include "t41.h"
#include "t148.h"
#include "t149.h"
#include "t46.h"
#include "t150.h"
#include "t151.h"
extern TypeInfo t49_TI;
extern TypeInfo t152_TI;
extern TypeInfo t44_TI;
extern TypeInfo t41_TI;
extern TypeInfo t39_TI;
extern TypeInfo t149_TI;
extern TypeInfo t46_TI;
#include "t43MD.h"
#include "t39MD.h"
#include "t42MD.h"
#include "t44MD.h"
#include "t41MD.h"
#include "t149MD.h"
#include "t153MD.h"
#include "t46MD.h"
extern Il2CppType t49_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t39_0_0_0;
extern Il2CppType t41_0_0_0;
extern Il2CppType t149_0_0_0;
extern MethodInfo m423_MI;
extern MethodInfo m424_MI;
extern MethodInfo m425_MI;
extern MethodInfo m426_MI;
extern MethodInfo m427_MI;
extern MethodInfo m428_MI;
extern MethodInfo m429_MI;
extern MethodInfo m430_MI;
extern MethodInfo m143_MI;
extern MethodInfo m431_MI;
extern MethodInfo m144_MI;
extern MethodInfo m432_MI;
extern MethodInfo m433_MI;
extern MethodInfo m434_MI;
extern MethodInfo m435_MI;
extern MethodInfo m436_MI;
extern MethodInfo m437_MI;
extern MethodInfo m438_MI;
extern MethodInfo m439_MI;
extern MethodInfo m440_MI;
extern MethodInfo m441_MI;
extern MethodInfo m442_MI;
extern MethodInfo m443_MI;
extern MethodInfo m444_MI;
extern MethodInfo m445_MI;
extern MethodInfo m446_MI;
extern MethodInfo m142_MI;
extern MethodInfo m150_MI;
extern MethodInfo m447_MI;
extern MethodInfo m448_MI;
extern MethodInfo m145_MI;
extern MethodInfo m449_MI;
extern MethodInfo m450_MI;
extern MethodInfo m151_MI;
extern MethodInfo m451_MI;
extern MethodInfo m452_MI;
extern MethodInfo m453_MI;
extern MethodInfo m454_MI;
extern MethodInfo m455_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m458_MI;
extern MethodInfo m459_MI;
extern MethodInfo m153_MI;
extern MethodInfo m460_MI;
extern MethodInfo m461_MI;
extern MethodInfo m462_MI;
extern MethodInfo m463_MI;
extern MethodInfo m155_MI;
extern MethodInfo m464_MI;
extern MethodInfo m152_MI;
extern MethodInfo m465_MI;
extern MethodInfo m466_MI;
extern MethodInfo m467_MI;
extern MethodInfo m468_MI;
extern MethodInfo m469_MI;
extern MethodInfo m154_MI;
extern MethodInfo m470_MI;
extern MethodInfo m471_MI;
extern MethodInfo m472_MI;
extern MethodInfo m473_MI;
extern MethodInfo m474_MI;
extern MethodInfo m475_MI;
extern MethodInfo m476_MI;
extern MethodInfo m477_MI;
struct t59;
struct t59;
extern "C" t9 * m479_gshared (t59 * __this, MethodInfo* method);
#define m479(__this, method) (( t9 * (*) (t59 *, MethodInfo*))m479_gshared)(__this, method)
#define m478(__this, method) (( t39 * (*) (t59 *, MethodInfo*))m479_gshared)(__this, method)
extern Il2CppGenericMethod m478_GM;
extern Il2CppGenericMethod m443_GM;
extern Il2CppGenericMethod m444_GM;
extern Il2CppGenericMethod m445_GM;
extern Il2CppGenericMethod m446_GM;
extern Il2CppGenericMethod m447_GM;
extern Il2CppGenericMethod m448_GM;


extern MethodInfo m140_MI;
extern "C" void m140 (t38 * __this, MethodInfo* method)
{
	{
		t43  L_0 = m423(NULL, &m423_MI);
		__this->f4 = L_0;
		__this->f5 = (t2*) &_stringLiteral14;
		__this->f6 = (0.07f);
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m141_MI;
extern "C" void m141 (t38 * __this, MethodInfo* method)
{
	{
		t59 * L_0 = m362(__this, &m362_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t49_0_0_0), &m329_MI);
		t133 * L_2 = m424(L_0, L_1, &m424_MI);
		t40 * L_3 = (((t49 *)Castclass(L_2, InitializedTypeInfo(&t49_TI)))->f2);
		__this->f9 = L_3;
		return;
	}
}
extern TypeInfo* t152_TI_var;
extern MethodInfo* m478_MI_var;
extern "C" t39 * m142 (t38 * __this, t39 * p0, MethodInfo* method)
{
	static bool m142_init;
	if (!m142_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m478_MI_var = il2cpp_codegen_genericmethod_get_method(&m478_GM);
		m142_init = true;
	}
	t2* V_0 = {0};
	t59 * V_1 = {0};
	t39 * V_2 = {0};
	t39 * G_B6_0 = {0};
	t39 * G_B5_0 = {0};
	int32_t G_B7_0 = 0;
	t39 * G_B7_1 = {0};
	{
		t59 * L_0 = m362(__this, &m362_MI);
		t2* L_1 = m425(L_0, &m425_MI);
		t39 * L_2 = p0;
		t2* L_3 = m425(L_2, &m425_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m399(NULL, L_1, (t2*) &_stringLiteral15, L_3, &m399_MI);
		V_0 = L_4;
		t2* L_5 = V_0;
		t59 * L_6 = m426(NULL, L_5, &m426_MI);
		V_1 = L_6;
		t59 * L_7 = V_1;
		bool L_8 = m406(NULL, L_7, &m406_MI);
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		t2* L_9 = V_0;
		t152* L_10 = ((t152*)SZArrayNew(t152_TI_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_11 = m329(NULL, LoadTypeToken(&t39_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_10, L_11);
		*((t126 **)(t126 **)SZArrayLdElema(L_10, 0)) = (t126 *)L_11;
		t59 * L_12 = (t59 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t59_TI));
		m427(L_12, L_9, L_10, &m427_MI);
		V_1 = L_12;
	}

IL_0048:
	{
		t59 * L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_14 = m329(NULL, LoadTypeToken(&t39_0_0_0), &m329_MI);
		t133 * L_15 = m424(L_13, L_14, &m424_MI);
		bool L_16 = m406(NULL, L_15, &m406_MI);
		if (L_16)
		{
			goto IL_0073;
		}
	}
	{
		t59 * L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_18 = m329(NULL, LoadTypeToken(&t39_0_0_0), &m329_MI);
		m428(L_17, L_18, &m428_MI);
	}

IL_0073:
	{
		t59 * L_19 = V_1;
		t39 * L_20 = m478(L_19, m478_MI_var);
		V_2 = L_20;
		t39 * L_21 = V_2;
		t43  L_22 = (__this->f4);
		m429(L_21, L_22, &m429_MI);
		t39 * L_23 = V_2;
		bool L_24 = (__this->f3);
		G_B5_0 = L_23;
		if (!L_24)
		{
			G_B6_0 = L_23;
			goto IL_0098;
		}
	}
	{
		G_B7_0 = 1;
		G_B7_1 = G_B5_0;
		goto IL_0099;
	}

IL_0098:
	{
		G_B7_0 = 2;
		G_B7_1 = G_B6_0;
	}

IL_0099:
	{
		m430(G_B7_1, G_B7_0, &m430_MI);
		t39 * L_25 = V_2;
		t42  L_26 = (__this->f2);
		m143(__this, L_25, L_26, &m143_MI);
		t39 * L_27 = V_2;
		t44 * L_28 = m431(L_27, &m431_MI);
		bool L_29 = m406(NULL, L_28, &m406_MI);
		if (L_29)
		{
			goto IL_00c8;
		}
	}
	{
		t39 * L_30 = V_2;
		t39 * L_31 = p0;
		t44 * L_32 = m144(__this, L_31, &m144_MI);
		m432(L_30, L_32, &m432_MI);
	}

IL_00c8:
	{
		t39 * L_33 = V_2;
		return L_33;
	}
}
extern "C" void m143 (t38 * __this, t39 * p0, t42  p1, MethodInfo* method)
{
	{
		t39 * L_0 = p0;
		t42  L_1 = p1;
		int32_t L_2 = m433(NULL, L_1, &m433_MI);
		int32_t L_3 = m434(NULL, (t2*) &_stringLiteral16, &m434_MI);
		m435(L_0, ((int32_t)((int32_t)L_2&(int32_t)((~((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31))))))))), &m435_MI);
		t39 * L_4 = p0;
		t43  L_5 = m436(NULL, &m436_MI);
		m429(L_4, L_5, &m429_MI);
		t39 * L_6 = p0;
		m437(L_6, 0, &m437_MI);
		return;
	}
}
extern "C" t44 * m144 (t38 * __this, t39 * p0, MethodInfo* method)
{
	t44 * V_0 = {0};
	{
		t39 * L_0 = p0;
		int32_t L_1 = m438(L_0, &m438_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		int32_t L_2 = m439(NULL, ((float)((float)(((float)L_1))*(float)(0.5f))), &m439_MI);
		t39 * L_3 = p0;
		int32_t L_4 = m440(L_3, &m440_MI);
		int32_t L_5 = m439(NULL, ((float)((float)(((float)L_4))*(float)(0.5f))), &m439_MI);
		t44 * L_6 = (t44 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t44_TI));
		m441(L_6, L_2, L_5, ((int32_t)24), &m441_MI);
		V_0 = L_6;
		t44 * L_7 = V_0;
		m442(L_7, ((int32_t)52), &m442_MI);
		t44 * L_8 = V_0;
		return L_8;
	}
}
extern TypeInfo* t41_TI_var;
extern MethodInfo* m443_MI_var;
extern MethodInfo* m444_MI_var;
extern MethodInfo* m445_MI_var;
extern MethodInfo* m446_MI_var;
extern MethodInfo* m447_MI_var;
extern "C" void m145 (t38 * __this, t39 * p0, MethodInfo* method)
{
	static bool m145_init;
	if (!m145_init)
	{
		t41_TI_var = il2cpp_codegen_class_from_type(&t41_0_0_0);
		m443_MI_var = il2cpp_codegen_genericmethod_get_method(&m443_GM);
		m444_MI_var = il2cpp_codegen_genericmethod_get_method(&m444_GM);
		m445_MI_var = il2cpp_codegen_genericmethod_get_method(&m445_GM);
		m446_MI_var = il2cpp_codegen_genericmethod_get_method(&m446_GM);
		m447_MI_var = il2cpp_codegen_genericmethod_get_method(&m447_GM);
		m145_init = true;
	}
	{
		t41 * L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t41 * L_1 = (t41 *)il2cpp_codegen_object_new (t41_TI_var);
		m443(L_1, m443_MI_var);
		__this->f10 = L_1;
	}

IL_0016:
	{
		t41 * L_2 = (__this->f10);
		t39 * L_3 = p0;
		bool L_4 = (bool)VirtFuncInvoker1< bool, t39 * >::Invoke(m444_MI_var, L_2, L_3);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		t41 * L_5 = (__this->f10);
		t39 * L_6 = p0;
		VirtActionInvoker2< t39 *, bool >::Invoke(m445_MI_var, L_5, L_6, 0);
	}

IL_0034:
	{
		t41 * L_7 = (__this->f10);
		t39 * L_8 = p0;
		bool L_9 = (bool)VirtFuncInvoker1< bool, t39 * >::Invoke(m446_MI_var, L_7, L_8);
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		return;
	}

IL_0046:
	{
		t39 * L_10 = (__this->f8);
		bool L_11 = m406(NULL, L_10, &m406_MI);
		if (L_11)
		{
			goto IL_0063;
		}
	}
	{
		t39 * L_12 = p0;
		t39 * L_13 = m142(__this, L_12, &m142_MI);
		__this->f8 = L_13;
	}

IL_0063:
	{
		t39 * L_14 = p0;
		t39 * L_15 = (__this->f8);
		m150(__this, L_14, L_15, &m150_MI);
		t41 * L_16 = (__this->f10);
		t39 * L_17 = p0;
		VirtActionInvoker2< t39 *, bool >::Invoke(m447_MI_var, L_16, L_17, 1);
		return;
	}
}
extern MethodInfo m146_MI;
extern MethodInfo* m448_MI_var;
extern "C" void m146 (t38 * __this, MethodInfo* method)
{
	static bool m146_init;
	if (!m146_init)
	{
		m448_MI_var = il2cpp_codegen_genericmethod_get_method(&m448_GM);
		m146_init = true;
	}
	{
		t41 * L_0 = (__this->f10);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t41 * L_1 = (__this->f10);
		VirtActionInvoker0::Invoke(m448_MI_var, L_1);
	}

IL_0016:
	{
		return;
	}
}
extern MethodInfo m147_MI;
extern "C" void m147 (t38 * __this, t45 * p0, t39 * p1, MethodInfo* method)
{
	{
		t39 * L_0 = p1;
		m145(__this, L_0, &m145_MI);
		t39 * L_1 = (__this->f8);
		bool L_2 = m406(NULL, L_1, &m406_MI);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		t40 * L_3 = (__this->f9);
		bool L_4 = m406(NULL, L_3, &m406_MI);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		t40 * L_5 = (__this->f9);
		t2* L_6 = (__this->f5);
		t39 * L_7 = (__this->f8);
		t44 * L_8 = m431(L_7, &m431_MI);
		m449(L_5, L_6, L_8, &m449_MI);
	}

IL_0043:
	{
		return;
	}
}
extern MethodInfo m148_MI;
extern "C" void m148 (t38 * __this, MethodInfo* method)
{
	{
		m417(NULL, (t2*) &_stringLiteral17, &m417_MI);
		m418(NULL, (t2*) &_stringLiteral18, &m418_MI);
		return;
	}
}
extern MethodInfo m149_MI;
extern "C" void m149 (t38 * __this, MethodInfo* method)
{
	{
		m417(NULL, (t2*) &_stringLiteral18, &m417_MI);
		m418(NULL, (t2*) &_stringLiteral17, &m418_MI);
		return;
	}
}
extern "C" void m150 (t38 * __this, t39 * p0, t39 * p1, MethodInfo* method)
{
	t149 * V_0 = {0};
	t45 * V_1 = {0};
	t13  V_2 = {0};
	t13  V_3 = {0};
	t13  V_4 = {0};
	float V_5 = 0.0f;
	t47  V_6 = {0};
	t46  V_7 = {0};
	t13  V_8 = {0};
	t47  V_9 = {0};
	t46  V_10 = {0};
	t13  V_11 = {0};
	t13  V_12 = {0};
	t39 * G_B7_0 = {0};
	t39 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	t39 * G_B8_1 = {0};
	{
		t39 * L_0 = p1;
		bool L_1 = m406(NULL, L_0, &m406_MI);
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
		t40 * L_2 = (__this->f9);
		bool L_3 = m406(NULL, L_2, &m406_MI);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		t40 * L_4 = (__this->f9);
		t2* L_5 = (__this->f5);
		bool L_6 = m450(L_4, L_5, &m450_MI);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		return;
	}

IL_0033:
	{
		t39 * L_7 = p1;
		t42  L_8 = (__this->f2);
		int32_t L_9 = m433(NULL, L_8, &m433_MI);
		int32_t L_10 = m434(NULL, (t2*) &_stringLiteral16, &m434_MI);
		m435(L_7, ((int32_t)((int32_t)L_9&(int32_t)((~((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)31))))))))), &m435_MI);
		t39 * L_11 = p1;
		m151(__this, L_11, &m151_MI);
		t39 * L_12 = p1;
		t43  L_13 = (__this->f4);
		m429(L_12, L_13, &m429_MI);
		t39 * L_14 = p1;
		bool L_15 = (__this->f3);
		G_B6_0 = L_14;
		if (!L_15)
		{
			G_B7_0 = L_14;
			goto IL_007a;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_007b;
	}

IL_007a:
	{
		G_B8_0 = 2;
		G_B8_1 = G_B7_0;
	}

IL_007b:
	{
		m430(G_B8_1, G_B8_0, &m430_MI);
		bool L_16 = (__this->f3);
		if (!L_16)
		{
			goto IL_010b;
		}
	}
	{
		t39 * L_17 = p0;
		t59 * L_18 = m362(L_17, &m362_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_19 = m329(NULL, LoadTypeToken(&t149_0_0_0), &m329_MI);
		t133 * L_20 = m424(L_18, L_19, &m424_MI);
		bool L_21 = m406(NULL, L_20, &m406_MI);
		if (!L_21)
		{
			goto IL_010b;
		}
	}
	{
		t39 * L_22 = p1;
		t59 * L_23 = m362(L_22, &m362_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_24 = m329(NULL, LoadTypeToken(&t149_0_0_0), &m329_MI);
		t133 * L_25 = m424(L_23, L_24, &m424_MI);
		V_0 = ((t149 *)Castclass(L_25, InitializedTypeInfo(&t149_TI)));
		t149 * L_26 = V_0;
		bool L_27 = m406(NULL, L_26, &m406_MI);
		if (L_27)
		{
			goto IL_00eb;
		}
	}
	{
		t39 * L_28 = p1;
		t59 * L_29 = m362(L_28, &m362_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_30 = m329(NULL, LoadTypeToken(&t149_0_0_0), &m329_MI);
		t133 * L_31 = m428(L_29, L_30, &m428_MI);
		V_0 = ((t149 *)Castclass(L_31, InitializedTypeInfo(&t149_TI)));
	}

IL_00eb:
	{
		t149 * L_32 = V_0;
		t39 * L_33 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_34 = m329(NULL, LoadTypeToken(&t149_0_0_0), &m329_MI);
		t133 * L_35 = m451(L_33, L_34, &m451_MI);
		t40 * L_36 = m452(((t149 *)Castclass(L_35, InitializedTypeInfo(&t149_TI))), &m452_MI);
		m453(L_32, L_36, &m453_MI);
	}

IL_010b:
	{
		m454(NULL, 1, &m454_MI);
		t45 * L_37 = m350(__this, &m350_MI);
		V_1 = L_37;
		t39 * L_38 = p0;
		t45 * L_39 = m350(L_38, &m350_MI);
		t13  L_40 = m455(L_39, &m455_MI);
		V_2 = L_40;
		t39 * L_41 = p1;
		t45 * L_42 = m350(L_41, &m350_MI);
		float L_43 = ((&V_2)->f1);
		float L_44 = ((&V_2)->f2);
		float L_45 = ((&V_2)->f3);
		t13  L_46 = {0};
		m357(&L_46, ((-L_43)), L_44, L_45, &m357_MI);
		m456(L_42, L_46, &m456_MI);
		t39 * L_47 = p1;
		t45 * L_48 = m350(L_47, &m350_MI);
		t39 * L_49 = p0;
		t45 * L_50 = m350(L_49, &m350_MI);
		t13  L_51 = m351(L_50, &m351_MI);
		m358(L_48, L_51, &m358_MI);
		t45 * L_52 = V_1;
		t45 * L_53 = m350(L_52, &m350_MI);
		t13  L_54 = m351(L_53, &m351_MI);
		V_3 = L_54;
		t45 * L_55 = V_1;
		t13  L_56 = m351(L_55, &m351_MI);
		V_12 = L_56;
		float L_57 = ((&V_12)->f2);
		(&V_3)->f2 = L_57;
		t45 * L_58 = V_1;
		t45 * L_59 = m350(L_58, &m350_MI);
		t13  L_60 = m457(L_59, &m457_MI);
		V_4 = L_60;
		t13  L_61 = V_4;
		t13  L_62 = V_3;
		float L_63 = m458(NULL, L_61, L_62, &m458_MI);
		float L_64 = (__this->f6);
		V_5 = ((float)((float)((-L_63))-(float)L_64));
		float L_65 = ((&V_4)->f1);
		float L_66 = ((&V_4)->f2);
		float L_67 = ((&V_4)->f3);
		float L_68 = V_5;
		m413((&V_6), L_65, L_66, L_67, L_68, &m413_MI);
		t46  L_69 = m459(NULL, &m459_MI);
		V_7 = L_69;
		t46  L_70 = V_7;
		t47  L_71 = V_6;
		t46  L_72 = m153(NULL, L_70, L_71, &m153_MI);
		V_7 = L_72;
		t39 * L_73 = p0;
		t45 * L_74 = m350(L_73, &m350_MI);
		t13  L_75 = m351(L_74, &m351_MI);
		__this->f7 = L_75;
		t13  L_76 = (__this->f7);
		t13  L_77 = m460((&V_7), L_76, &m460_MI);
		V_8 = L_77;
		t39 * L_78 = p1;
		t39 * L_79 = p0;
		t46  L_80 = m461(L_79, &m461_MI);
		t46  L_81 = V_7;
		t46  L_82 = m462(NULL, L_80, L_81, &m462_MI);
		m463(L_78, L_82, &m463_MI);
		t39 * L_83 = p1;
		t13  L_84 = V_3;
		t13  L_85 = V_4;
		t47  L_86 = m155(__this, L_83, L_84, L_85, (1.0f), &m155_MI);
		V_9 = L_86;
		t39 * L_87 = p0;
		t46  L_88 = m464(L_87, &m464_MI);
		V_10 = L_88;
		t46  L_89 = V_10;
		t47  L_90 = V_9;
		t46  L_91 = m152(NULL, L_89, L_90, &m152_MI);
		V_10 = L_91;
		t39 * L_92 = p1;
		t46  L_93 = V_10;
		m465(L_92, L_93, &m465_MI);
		t39 * L_94 = p1;
		t45 * L_95 = m350(L_94, &m350_MI);
		t13  L_96 = V_8;
		m358(L_95, L_96, &m358_MI);
		t39 * L_97 = p0;
		t45 * L_98 = m350(L_97, &m350_MI);
		t13  L_99 = m455(L_98, &m455_MI);
		V_11 = L_99;
		t39 * L_100 = p1;
		t45 * L_101 = m350(L_100, &m350_MI);
		float L_102 = ((&V_11)->f1);
		float L_103 = ((&V_11)->f2);
		float L_104 = ((&V_11)->f3);
		t13  L_105 = {0};
		m357(&L_105, ((-L_102)), L_103, L_104, &m357_MI);
		m456(L_101, L_105, &m456_MI);
		t39 * L_106 = p1;
		m466(L_106, &m466_MI);
		m454(NULL, 0, &m454_MI);
		return;
	}
}
extern "C" void m151 (t38 * __this, t39 * p0, MethodInfo* method)
{
	{
		t39 * L_0 = p0;
		m467(L_0, 0, &m467_MI);
		t39 * L_1 = p0;
		t43  L_2 = m436(NULL, &m436_MI);
		m429(L_1, L_2, &m429_MI);
		t39 * L_3 = p0;
		m430(L_3, 2, &m430_MI);
		t39 * L_4 = p0;
		m468(L_4, 1, &m468_MI);
		return;
	}
}
extern "C" t46  m152 (t9 * __this , t46  p0, t47  p1, MethodInfo* method)
{
	t47  V_0 = {0};
	t47  V_1 = {0};
	{
		t46  L_0 = m469((&p0), &m469_MI);
		float L_1 = ((&p1)->f1);
		float L_2 = m154(NULL, L_1, &m154_MI);
		float L_3 = ((&p1)->f2);
		float L_4 = m154(NULL, L_3, &m154_MI);
		t47  L_5 = {0};
		m413(&L_5, L_2, L_4, (1.0f), (1.0f), &m413_MI);
		t47  L_6 = m470(NULL, L_0, L_5, &m470_MI);
		V_0 = L_6;
		t47  L_7 = p1;
		t47  L_8 = p1;
		t47  L_9 = V_0;
		float L_10 = m471(NULL, L_8, L_9, &m471_MI);
		t47  L_11 = m411(NULL, L_7, ((float)((float)(2.0f)/(float)L_10)), &m411_MI);
		V_1 = L_11;
		float L_12 = ((&V_1)->f1);
		float L_13 = m472((&p0), 3, &m472_MI);
		m473((&p0), 2, ((float)((float)L_12-(float)L_13)), &m473_MI);
		float L_14 = ((&V_1)->f2);
		float L_15 = m472((&p0), 7, &m472_MI);
		m473((&p0), 6, ((float)((float)L_14-(float)L_15)), &m473_MI);
		float L_16 = ((&V_1)->f3);
		float L_17 = m472((&p0), ((int32_t)11), &m472_MI);
		m473((&p0), ((int32_t)10), ((float)((float)L_16-(float)L_17)), &m473_MI);
		float L_18 = ((&V_1)->f4);
		float L_19 = m472((&p0), ((int32_t)15), &m472_MI);
		m473((&p0), ((int32_t)14), ((float)((float)L_18-(float)L_19)), &m473_MI);
		t46  L_20 = p0;
		return L_20;
	}
}
extern "C" t46  m153 (t9 * __this , t46  p0, t47  p1, MethodInfo* method)
{
	{
		float L_0 = m474((&p1), 0, &m474_MI);
		float L_1 = m474((&p1), 0, &m474_MI);
		(&p0)->f0 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(2.0f)*(float)L_0))*(float)L_1))));
		float L_2 = m474((&p1), 0, &m474_MI);
		float L_3 = m474((&p1), 1, &m474_MI);
		(&p0)->f4 = ((float)((float)((float)((float)(-2.0f)*(float)L_2))*(float)L_3));
		float L_4 = m474((&p1), 0, &m474_MI);
		float L_5 = m474((&p1), 2, &m474_MI);
		(&p0)->f8 = ((float)((float)((float)((float)(-2.0f)*(float)L_4))*(float)L_5));
		float L_6 = m474((&p1), 3, &m474_MI);
		float L_7 = m474((&p1), 0, &m474_MI);
		(&p0)->f12 = ((float)((float)((float)((float)(-2.0f)*(float)L_6))*(float)L_7));
		float L_8 = m474((&p1), 1, &m474_MI);
		float L_9 = m474((&p1), 0, &m474_MI);
		(&p0)->f1 = ((float)((float)((float)((float)(-2.0f)*(float)L_8))*(float)L_9));
		float L_10 = m474((&p1), 1, &m474_MI);
		float L_11 = m474((&p1), 1, &m474_MI);
		(&p0)->f5 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(2.0f)*(float)L_10))*(float)L_11))));
		float L_12 = m474((&p1), 1, &m474_MI);
		float L_13 = m474((&p1), 2, &m474_MI);
		(&p0)->f9 = ((float)((float)((float)((float)(-2.0f)*(float)L_12))*(float)L_13));
		float L_14 = m474((&p1), 3, &m474_MI);
		float L_15 = m474((&p1), 1, &m474_MI);
		(&p0)->f13 = ((float)((float)((float)((float)(-2.0f)*(float)L_14))*(float)L_15));
		float L_16 = m474((&p1), 2, &m474_MI);
		float L_17 = m474((&p1), 0, &m474_MI);
		(&p0)->f2 = ((float)((float)((float)((float)(-2.0f)*(float)L_16))*(float)L_17));
		float L_18 = m474((&p1), 2, &m474_MI);
		float L_19 = m474((&p1), 1, &m474_MI);
		(&p0)->f6 = ((float)((float)((float)((float)(-2.0f)*(float)L_18))*(float)L_19));
		float L_20 = m474((&p1), 2, &m474_MI);
		float L_21 = m474((&p1), 2, &m474_MI);
		(&p0)->f10 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(2.0f)*(float)L_20))*(float)L_21))));
		float L_22 = m474((&p1), 3, &m474_MI);
		float L_23 = m474((&p1), 2, &m474_MI);
		(&p0)->f14 = ((float)((float)((float)((float)(-2.0f)*(float)L_22))*(float)L_23));
		(&p0)->f3 = (0.0f);
		(&p0)->f7 = (0.0f);
		(&p0)->f11 = (0.0f);
		(&p0)->f15 = (1.0f);
		t46  L_24 = p0;
		return L_24;
	}
}
extern "C" float m154 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		return (1.0f);
	}

IL_0011:
	{
		float L_1 = p0;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		return (-1.0f);
	}

IL_0022:
	{
		return (0.0f);
	}
}
extern "C" t47  m155 (t38 * __this, t39 * p0, t13  p1, t13  p2, float p3, MethodInfo* method)
{
	t13  V_0 = {0};
	t46  V_1 = {0};
	t13  V_2 = {0};
	t13  V_3 = {0};
	t13  V_4 = {0};
	{
		t13  L_0 = p1;
		t13  L_1 = p2;
		float L_2 = (__this->f6);
		t13  L_3 = m475(NULL, L_1, L_2, &m475_MI);
		t13  L_4 = m476(NULL, L_0, L_3, &m476_MI);
		V_0 = L_4;
		t39 * L_5 = p0;
		t46  L_6 = m461(L_5, &m461_MI);
		V_1 = L_6;
		t13  L_7 = V_0;
		t13  L_8 = m460((&V_1), L_7, &m460_MI);
		V_2 = L_8;
		t13  L_9 = p2;
		t13  L_10 = m477((&V_1), L_9, &m477_MI);
		V_4 = L_10;
		t13  L_11 = m386((&V_4), &m386_MI);
		float L_12 = p3;
		t13  L_13 = m475(NULL, L_11, L_12, &m475_MI);
		V_3 = L_13;
		float L_14 = ((&V_3)->f1);
		float L_15 = ((&V_3)->f2);
		float L_16 = ((&V_3)->f3);
		t13  L_17 = V_2;
		t13  L_18 = V_3;
		float L_19 = m458(NULL, L_17, L_18, &m458_MI);
		t47  L_20 = {0};
		m413(&L_20, L_14, L_15, L_16, ((-L_19)), &m413_MI);
		return L_20;
	}
}
#include "t48.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t48_TI;
#include "t48MD.h"

extern MethodInfo m480_MI;
extern MethodInfo m481_MI;


extern MethodInfo m156_MI;
extern "C" void m156 (t48 * __this, MethodInfo* method)
{
	{
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m157_MI;
extern "C" void m157 (t48 * __this, MethodInfo* method)
{
	{
		t59 * L_0 = m362(__this, &m362_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t49_0_0_0), &m329_MI);
		t133 * L_2 = m424(L_0, L_1, &m424_MI);
		__this->f3 = ((t49 *)Castclass(L_2, InitializedTypeInfo(&t49_TI)));
		return;
	}
}
extern MethodInfo m158_MI;
extern "C" void m158 (t48 * __this, MethodInfo* method)
{
	{
		t49 * L_0 = (__this->f3);
		bool L_1 = m406(NULL, L_0, &m406_MI);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		t59 * L_2 = m362(__this, &m362_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m329(NULL, LoadTypeToken(&t49_0_0_0), &m329_MI);
		t133 * L_4 = m424(L_2, L_3, &m424_MI);
		__this->f3 = ((t49 *)Castclass(L_4, InitializedTypeInfo(&t49_TI)));
	}

IL_0030:
	{
		t45 * L_5 = (__this->f2);
		bool L_6 = m406(NULL, L_5, &m406_MI);
		if (!L_6)
		{
			goto IL_007f;
		}
	}
	{
		t49 * L_7 = (__this->f3);
		t40 * L_8 = (L_7->f2);
		bool L_9 = m406(NULL, L_8, &m406_MI);
		if (!L_9)
		{
			goto IL_007f;
		}
	}
	{
		t49 * L_10 = (__this->f3);
		t40 * L_11 = (L_10->f2);
		t45 * L_12 = (__this->f2);
		t45 * L_13 = m350(L_12, &m350_MI);
		t13  L_14 = m480(L_13, &m480_MI);
		t47  L_15 = m481(NULL, L_14, &m481_MI);
		m414(L_11, (t2*) &_stringLiteral19, L_15, &m414_MI);
	}

IL_007f:
	{
		return;
	}
}
#include "t50.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t50_TI;
#include "t50MD.h"



#include "t51.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t51_TI;
#include "t51MD.h"

#include "t52.h"
#include "t93.h"
#include "t154.h"
#include "t155.h"
#include "t156.h"
#include "t157.h"
extern TypeInfo t52_TI;
extern TypeInfo t155_TI;
extern TypeInfo t154_TI;
extern TypeInfo t125_TI;
extern TypeInfo t158_TI;
#include "t52MD.h"
#include "t159MD.h"
#include "t155MD.h"
#include "t154MD.h"
#include "t160MD.h"
#include "t161MD.h"
extern Il2CppType t52_0_0_0;
extern Il2CppType t155_0_0_0;
extern Il2CppType t158_0_0_0;
extern MethodInfo m482_MI;
extern MethodInfo m483_MI;
extern MethodInfo m484_MI;
extern MethodInfo m485_MI;
extern MethodInfo m166_MI;
extern MethodInfo m165_MI;
extern MethodInfo m164_MI;
extern MethodInfo m486_MI;
extern MethodInfo m487_MI;
extern MethodInfo m163_MI;
extern MethodInfo m168_MI;
extern MethodInfo m167_MI;
extern MethodInfo m488_MI;
extern MethodInfo m489_MI;
extern MethodInfo m490_MI;
extern MethodInfo m491_MI;
extern MethodInfo m492_MI;
extern MethodInfo m493_MI;
extern MethodInfo m494_MI;
extern MethodInfo m495_MI;
extern MethodInfo m496_MI;
extern MethodInfo m497_MI;
extern MethodInfo m498_MI;
extern MethodInfo m499_MI;
extern MethodInfo m500_MI;
extern MethodInfo m501_MI;
extern MethodInfo m502_MI;
extern MethodInfo m503_MI;
extern MethodInfo m504_MI;
extern MethodInfo m505_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;
extern MethodInfo m508_MI;
extern MethodInfo m509_MI;
extern MethodInfo m510_MI;
extern MethodInfo m511_MI;
extern MethodInfo m512_MI;
extern MethodInfo m513_MI;
extern MethodInfo m514_MI;
extern MethodInfo m515_MI;
extern MethodInfo m516_MI;
extern MethodInfo m517_MI;
extern MethodInfo m518_MI;
struct t133;
#define m519(__this, method) (( t149 * (*) (t133 *, MethodInfo*))m395_gshared)(__this, method)
struct t59;
extern "C" t157 * m520 (t59 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m483_GM;
extern Il2CppGenericMethod m521_GM;
extern Il2CppGenericMethod m522_GM;
extern Il2CppGenericMethod m523_GM;
extern Il2CppGenericMethod m524_GM;
extern Il2CppGenericMethod m493_GM;
extern Il2CppGenericMethod m519_GM;
extern Il2CppGenericMethod m514_GM;
extern Il2CppGenericMethod m520_GM;
extern Il2CppGenericMethod m516_GM;


extern MethodInfo m159_MI;
extern TypeInfo* t52_TI_var;
extern MethodInfo* m483_MI_var;
extern "C" void m159 (t51 * __this, MethodInfo* method)
{
	static bool m159_init;
	if (!m159_init)
	{
		t52_TI_var = il2cpp_codegen_class_from_type(&t52_0_0_0);
		m483_MI_var = il2cpp_codegen_genericmethod_get_method(&m483_GM);
		m159_init = true;
	}
	{
		__this->f2 = 2;
		__this->f3 = 1;
		__this->f4 = ((int32_t)256);
		__this->f5 = (0.07f);
		t42  L_0 = m482(NULL, (-1), &m482_MI);
		__this->f6 = L_0;
		t42  L_1 = m482(NULL, (-1), &m482_MI);
		__this->f7 = L_1;
		t52 * L_2 = (t52 *)il2cpp_codegen_object_new (t52_TI_var);
		m483(L_2, m483_MI_var);
		__this->f8 = L_2;
		t52 * L_3 = (t52 *)il2cpp_codegen_object_new (t52_TI_var);
		m483(L_3, m483_MI_var);
		__this->f9 = L_3;
		__this->f12 = 2;
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m160_MI;
extern MethodInfo* m415_MI_var;
extern "C" void m160 (t51 * __this, MethodInfo* method)
{
	static bool m160_init;
	if (!m160_init)
	{
		m415_MI_var = il2cpp_codegen_genericmethod_get_method(&m415_GM);
		m160_init = true;
	}
	t39 * V_0 = {0};
	int32_t V_1 = {0};
	t39 * V_2 = {0};
	t39 * V_3 = {0};
	t13  V_4 = {0};
	t13  V_5 = {0};
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	t47  V_8 = {0};
	t46  V_9 = {0};
	t13  V_10 = {0};
	t13  V_11 = {0};
	t47  V_12 = {0};
	t13  V_13 = {0};
	t47  V_14 = {0};
	int32_t V_15 = {0};
	{
		bool L_0 = m416(__this, &m416_MI);
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		t144 * L_1 = m415(__this, m415_MI_var);
		bool L_2 = m406(NULL, L_1, &m406_MI);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		t144 * L_3 = m415(__this, m415_MI_var);
		t40 * L_4 = m407(L_3, &m407_MI);
		bool L_5 = m406(NULL, L_4, &m406_MI);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		t144 * L_6 = m415(__this, m415_MI_var);
		bool L_7 = m484(L_6, &m484_MI);
		if (L_7)
		{
			goto IL_0041;
		}
	}

IL_0040:
	{
		return;
	}

IL_0041:
	{
		t39 * L_8 = m485(NULL, &m485_MI);
		V_0 = L_8;
		t39 * L_9 = V_0;
		bool L_10 = m406(NULL, L_9, &m406_MI);
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		return;
	}

IL_0053:
	{
		bool L_11 = ((t51_SFs*)InitializedTypeInfo(&t51_TI)->static_fields)->f15;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		return;
	}

IL_005e:
	{
		((t51_SFs*)InitializedTypeInfo(&t51_TI)->static_fields)->f15 = 1;
		int32_t L_12 = m166(__this, &m166_MI);
		__this->f12 = L_12;
		int32_t L_13 = m165(__this, &m165_MI);
		V_1 = L_13;
		t39 * L_14 = V_0;
		m164(__this, L_14, (&V_2), (&V_3), &m164_MI);
		t45 * L_15 = m350(__this, &m350_MI);
		t13  L_16 = m351(L_15, &m351_MI);
		V_4 = L_16;
		t45 * L_17 = m350(__this, &m350_MI);
		t13  L_18 = m457(L_17, &m457_MI);
		V_5 = L_18;
		int32_t L_19 = m486(NULL, &m486_MI);
		V_6 = L_19;
		bool L_20 = (__this->f3);
		if (!L_20)
		{
			goto IL_00b4;
		}
	}
	{
		m487(NULL, 0, &m487_MI);
	}

IL_00b4:
	{
		t39 * L_21 = V_0;
		t39 * L_22 = V_2;
		m163(__this, L_21, L_22, &m163_MI);
		t39 * L_23 = V_0;
		t39 * L_24 = V_3;
		m163(__this, L_23, L_24, &m163_MI);
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) < ((int32_t)1)))
		{
			goto IL_01f1;
		}
	}
	{
		t13  L_26 = V_5;
		t13  L_27 = V_4;
		float L_28 = m458(NULL, L_26, L_27, &m458_MI);
		float L_29 = (__this->f5);
		V_7 = ((float)((float)((-L_28))-(float)L_29));
		float L_30 = ((&V_5)->f1);
		float L_31 = ((&V_5)->f2);
		float L_32 = ((&V_5)->f3);
		float L_33 = V_7;
		m413((&V_8), L_30, L_31, L_32, L_33, &m413_MI);
		t46  L_34 = m459(NULL, &m459_MI);
		V_9 = L_34;
		t47  L_35 = V_8;
		m168(NULL, (&V_9), L_35, &m168_MI);
		t39 * L_36 = V_0;
		t45 * L_37 = m350(L_36, &m350_MI);
		t13  L_38 = m351(L_37, &m351_MI);
		V_10 = L_38;
		t13  L_39 = V_10;
		t13  L_40 = m460((&V_9), L_39, &m460_MI);
		V_11 = L_40;
		t39 * L_41 = V_2;
		t39 * L_42 = V_0;
		t46  L_43 = m461(L_42, &m461_MI);
		t46  L_44 = V_9;
		t46  L_45 = m462(NULL, L_43, L_44, &m462_MI);
		m463(L_41, L_45, &m463_MI);
		t39 * L_46 = V_2;
		t13  L_47 = V_4;
		t13  L_48 = V_5;
		t47  L_49 = m167(__this, L_46, L_47, L_48, (1.0f), &m167_MI);
		V_12 = L_49;
		t39 * L_50 = V_2;
		t39 * L_51 = V_0;
		t47  L_52 = V_12;
		t46  L_53 = m488(L_51, L_52, &m488_MI);
		m465(L_50, L_53, &m465_MI);
		t39 * L_54 = V_2;
		t42 * L_55 = &(__this->f6);
		int32_t L_56 = m489(L_55, &m489_MI);
		m435(L_54, ((int32_t)((int32_t)((int32_t)-17)&(int32_t)L_56)), &m435_MI);
		t39 * L_57 = V_2;
		t44 * L_58 = (__this->f10);
		m432(L_57, L_58, &m432_MI);
		m454(NULL, 1, &m454_MI);
		t39 * L_59 = V_2;
		t45 * L_60 = m350(L_59, &m350_MI);
		t13  L_61 = V_11;
		m358(L_60, L_61, &m358_MI);
		t39 * L_62 = V_0;
		t45 * L_63 = m350(L_62, &m350_MI);
		t13  L_64 = m455(L_63, &m455_MI);
		V_13 = L_64;
		t39 * L_65 = V_2;
		t45 * L_66 = m350(L_65, &m350_MI);
		float L_67 = ((&V_13)->f1);
		float L_68 = ((&V_13)->f2);
		float L_69 = ((&V_13)->f3);
		t13  L_70 = {0};
		m357(&L_70, ((-L_67)), L_68, L_69, &m357_MI);
		m456(L_66, L_70, &m456_MI);
		t39 * L_71 = V_2;
		m466(L_71, &m466_MI);
		t39 * L_72 = V_2;
		t45 * L_73 = m350(L_72, &m350_MI);
		t13  L_74 = V_10;
		m358(L_73, L_74, &m358_MI);
		m454(NULL, 0, &m454_MI);
		t144 * L_75 = m415(__this, m415_MI_var);
		t40 * L_76 = m407(L_75, &m407_MI);
		t44 * L_77 = (__this->f10);
		m449(L_76, (t2*) &_stringLiteral14, L_77, &m449_MI);
	}

IL_01f1:
	{
		int32_t L_78 = V_1;
		if ((((int32_t)L_78) < ((int32_t)2)))
		{
			goto IL_0291;
		}
	}
	{
		t39 * L_79 = V_3;
		t39 * L_80 = V_0;
		t46  L_81 = m461(L_80, &m461_MI);
		m463(L_79, L_81, &m463_MI);
		t39 * L_82 = V_3;
		t13  L_83 = V_4;
		t13  L_84 = V_5;
		t47  L_85 = m167(__this, L_82, L_83, L_84, (-1.0f), &m167_MI);
		V_14 = L_85;
		t39 * L_86 = V_3;
		t39 * L_87 = V_0;
		t47  L_88 = V_14;
		t46  L_89 = m488(L_87, L_88, &m488_MI);
		m465(L_86, L_89, &m465_MI);
		t39 * L_90 = V_3;
		t42 * L_91 = &(__this->f7);
		int32_t L_92 = m489(L_91, &m489_MI);
		m435(L_90, ((int32_t)((int32_t)((int32_t)-17)&(int32_t)L_92)), &m435_MI);
		t39 * L_93 = V_3;
		t44 * L_94 = (__this->f11);
		m432(L_93, L_94, &m432_MI);
		t39 * L_95 = V_3;
		t45 * L_96 = m350(L_95, &m350_MI);
		t39 * L_97 = V_0;
		t45 * L_98 = m350(L_97, &m350_MI);
		t13  L_99 = m351(L_98, &m351_MI);
		m358(L_96, L_99, &m358_MI);
		t39 * L_100 = V_3;
		t45 * L_101 = m350(L_100, &m350_MI);
		t39 * L_102 = V_0;
		t45 * L_103 = m350(L_102, &m350_MI);
		t93  L_104 = m490(L_103, &m490_MI);
		m491(L_101, L_104, &m491_MI);
		t39 * L_105 = V_3;
		m466(L_105, &m466_MI);
		t144 * L_106 = m415(__this, m415_MI_var);
		t40 * L_107 = m407(L_106, &m407_MI);
		t44 * L_108 = (__this->f11);
		m449(L_107, (t2*) &_stringLiteral20, L_108, &m449_MI);
	}

IL_0291:
	{
		bool L_109 = (__this->f3);
		if (!L_109)
		{
			goto IL_02a3;
		}
	}
	{
		int32_t L_110 = V_6;
		m487(NULL, L_110, &m487_MI);
	}

IL_02a3:
	{
		int32_t L_111 = V_1;
		V_15 = L_111;
		int32_t L_112 = V_15;
		if (L_112 == 0)
		{
			goto IL_02be;
		}
		if (L_112 == 1)
		{
			goto IL_02e1;
		}
		if (L_112 == 2)
		{
			goto IL_0304;
		}
	}
	{
		goto IL_0327;
	}

IL_02be:
	{
		m417(NULL, (t2*) &_stringLiteral18, &m417_MI);
		m418(NULL, (t2*) &_stringLiteral17, &m418_MI);
		m418(NULL, (t2*) &_stringLiteral21, &m418_MI);
		goto IL_0327;
	}

IL_02e1:
	{
		m418(NULL, (t2*) &_stringLiteral18, &m418_MI);
		m417(NULL, (t2*) &_stringLiteral17, &m417_MI);
		m418(NULL, (t2*) &_stringLiteral21, &m418_MI);
		goto IL_0327;
	}

IL_0304:
	{
		m418(NULL, (t2*) &_stringLiteral18, &m418_MI);
		m418(NULL, (t2*) &_stringLiteral17, &m418_MI);
		m417(NULL, (t2*) &_stringLiteral21, &m417_MI);
		goto IL_0327;
	}

IL_0327:
	{
		((t51_SFs*)InitializedTypeInfo(&t51_TI)->static_fields)->f15 = 0;
		return;
	}
}
extern MethodInfo m161_MI;
extern TypeInfo* t155_TI_var;
extern MethodInfo* m521_MI_var;
extern MethodInfo* m522_MI_var;
extern MethodInfo* m523_MI_var;
extern MethodInfo* m524_MI_var;
extern MethodInfo* m493_MI_var;
extern "C" void m161 (t51 * __this, MethodInfo* method)
{
	static bool m161_init;
	if (!m161_init)
	{
		t155_TI_var = il2cpp_codegen_class_from_type(&t155_0_0_0);
		m521_MI_var = il2cpp_codegen_genericmethod_get_method(&m521_GM);
		m522_MI_var = il2cpp_codegen_genericmethod_get_method(&m522_GM);
		m523_MI_var = il2cpp_codegen_genericmethod_get_method(&m523_GM);
		m524_MI_var = il2cpp_codegen_genericmethod_get_method(&m524_GM);
		m493_MI_var = il2cpp_codegen_genericmethod_get_method(&m493_GM);
		m161_init = true;
	}
	t154  V_0 = {0};
	t155  V_1 = {0};
	t154  V_2 = {0};
	t155  V_3 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t44 * L_0 = (__this->f10);
		bool L_1 = m406(NULL, L_0, &m406_MI);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		t44 * L_2 = (__this->f10);
		m492(NULL, L_2, &m492_MI);
		__this->f10 = (t44 *)NULL;
	}

IL_0022:
	{
		t44 * L_3 = (__this->f11);
		bool L_4 = m406(NULL, L_3, &m406_MI);
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		t44 * L_5 = (__this->f11);
		m492(NULL, L_5, &m492_MI);
		__this->f11 = (t44 *)NULL;
	}

IL_0044:
	{
		t52 * L_6 = (__this->f8);
		t155  L_7 = m521(L_6, m521_MI_var);
		V_1 = L_7;
	}

IL_0050:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0055:
		{
			t154  L_8 = m522((&V_1), m522_MI_var);
			V_0 = L_8;
			t39 * L_9 = m523((&V_0), m523_MI_var);
			t59 * L_10 = m362(L_9, &m362_MI);
			m492(NULL, L_10, &m492_MI);
		}

IL_006e:
		{
			bool L_11 = m524((&V_1), m524_MI_var);
			if (L_11)
			{
				goto IL_0055;
			}
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_007f;
	}

FINALLY_007f:
	{ // begin finally (depth: 1)
		t155  L_12 = V_1;
		t155  L_13 = L_12;
		t9 * L_14 = Box(t155_TI_var, &L_13);
		InterfaceActionInvoker0::Invoke(&m365_MI, L_14);
		IL2CPP_END_FINALLY(127)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(127)
	{
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_008b:
	{
		t52 * L_15 = (__this->f8);
		VirtActionInvoker0::Invoke(m493_MI_var, L_15);
		t52 * L_16 = (__this->f9);
		t155  L_17 = m521(L_16, m521_MI_var);
		V_3 = L_17;
	}

IL_00a2:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c0;
		}

IL_00a7:
		{
			t154  L_18 = m522((&V_3), m522_MI_var);
			V_2 = L_18;
			t39 * L_19 = m523((&V_2), m523_MI_var);
			t59 * L_20 = m362(L_19, &m362_MI);
			m492(NULL, L_20, &m492_MI);
		}

IL_00c0:
		{
			bool L_21 = m524((&V_3), m524_MI_var);
			if (L_21)
			{
				goto IL_00a7;
			}
		}

IL_00cc:
		{
			IL2CPP_LEAVE(0xDD, FINALLY_00d1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_00d1;
	}

FINALLY_00d1:
	{ // begin finally (depth: 1)
		t155  L_22 = V_3;
		t155  L_23 = L_22;
		t9 * L_24 = Box(t155_TI_var, &L_23);
		InterfaceActionInvoker0::Invoke(&m365_MI, L_24);
		IL2CPP_END_FINALLY(209)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(209)
	{
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_00dd:
	{
		t52 * L_25 = (__this->f9);
		VirtActionInvoker0::Invoke(m493_MI_var, L_25);
		return;
	}
}
extern MethodInfo m162_MI;
extern MethodInfo* m415_MI_var;
extern "C" void m162 (t51 * __this, MethodInfo* method)
{
	static bool m162_init;
	if (!m162_init)
	{
		m415_MI_var = il2cpp_codegen_genericmethod_get_method(&m415_GM);
		m162_init = true;
	}
	t40 * V_0 = {0};
	t47  V_1 = {0};
	float V_2 = 0.0f;
	t47  V_3 = {0};
	double V_4 = 0.0;
	t47  V_5 = {0};
	{
		t144 * L_0 = m415(__this, m415_MI_var);
		bool L_1 = m406(NULL, L_0, &m406_MI);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		t144 * L_2 = m415(__this, m415_MI_var);
		t40 * L_3 = m407(L_2, &m407_MI);
		V_0 = L_3;
		t40 * L_4 = V_0;
		bool L_5 = m406(NULL, L_4, &m406_MI);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		t40 * L_6 = V_0;
		t47  L_7 = m408(L_6, (t2*) &_stringLiteral9, &m408_MI);
		V_1 = L_7;
		t40 * L_8 = V_0;
		float L_9 = m409(L_8, (t2*) &_stringLiteral10, &m409_MI);
		V_2 = L_9;
		float L_10 = V_2;
		float L_11 = V_2;
		float L_12 = V_2;
		float L_13 = V_2;
		m413((&V_3), L_10, L_11, ((float)((float)L_12*(float)(0.4f))), ((float)((float)L_13*(float)(0.45f))), &m413_MI);
		float L_14 = m494(NULL, &m494_MI);
		V_4 = ((double)((double)(((double)L_14))/(double)(20.0)));
		float L_15 = ((&V_1)->f1);
		float L_16 = ((&V_3)->f1);
		double L_17 = V_4;
		double L_18 = m495(NULL, ((double)((double)(((double)((float)((float)L_15*(float)L_16))))*(double)L_17)), (1.0), &m495_MI);
		float L_19 = ((&V_1)->f2);
		float L_20 = ((&V_3)->f2);
		double L_21 = V_4;
		double L_22 = m495(NULL, ((double)((double)(((double)((float)((float)L_19*(float)L_20))))*(double)L_21)), (1.0), &m495_MI);
		float L_23 = ((&V_1)->f3);
		float L_24 = ((&V_3)->f3);
		double L_25 = V_4;
		double L_26 = m495(NULL, ((double)((double)(((double)((float)((float)L_23*(float)L_24))))*(double)L_25)), (1.0), &m495_MI);
		float L_27 = ((&V_1)->f4);
		float L_28 = ((&V_3)->f4);
		double L_29 = V_4;
		double L_30 = m495(NULL, ((double)((double)(((double)((float)((float)L_27*(float)L_28))))*(double)L_29)), (1.0), &m495_MI);
		m413((&V_5), (((float)L_18)), (((float)L_22)), (((float)L_26)), (((float)L_30)), &m413_MI);
		t40 * L_31 = V_0;
		t47  L_32 = V_5;
		m414(L_31, (t2*) &_stringLiteral11, L_32, &m414_MI);
		t40 * L_33 = V_0;
		t47  L_34 = V_3;
		m414(L_33, (t2*) &_stringLiteral22, L_34, &m414_MI);
		return;
	}
}
extern MethodInfo* m519_MI_var;
extern "C" void m163 (t51 * __this, t39 * p0, t39 * p1, MethodInfo* method)
{
	static bool m163_init;
	if (!m163_init)
	{
		m519_MI_var = il2cpp_codegen_genericmethod_get_method(&m519_GM);
		m163_init = true;
	}
	t149 * V_0 = {0};
	t149 * V_1 = {0};
	{
		t39 * L_0 = p1;
		bool L_1 = m333(NULL, L_0, (t57 *)NULL, &m333_MI);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		t39 * L_2 = p1;
		t39 * L_3 = p0;
		int32_t L_4 = m496(L_3, &m496_MI);
		m430(L_2, L_4, &m430_MI);
		t39 * L_5 = p1;
		t39 * L_6 = p0;
		t43  L_7 = m497(L_6, &m497_MI);
		m429(L_5, L_7, &m429_MI);
		t39 * L_8 = p0;
		int32_t L_9 = m496(L_8, &m496_MI);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		t39 * L_10 = p0;
		t149 * L_11 = m519(L_10, m519_MI_var);
		V_0 = L_11;
		t39 * L_12 = p1;
		t149 * L_13 = m519(L_12, m519_MI_var);
		V_1 = L_13;
		t149 * L_14 = V_0;
		bool L_15 = m406(NULL, L_14, &m406_MI);
		if (!L_15)
		{
			goto IL_005a;
		}
	}
	{
		t149 * L_16 = V_0;
		t40 * L_17 = m452(L_16, &m452_MI);
		bool L_18 = m406(NULL, L_17, &m406_MI);
		if (L_18)
		{
			goto IL_0066;
		}
	}

IL_005a:
	{
		t149 * L_19 = V_1;
		m437(L_19, 0, &m437_MI);
		goto IL_0079;
	}

IL_0066:
	{
		t149 * L_20 = V_1;
		m437(L_20, 1, &m437_MI);
		t149 * L_21 = V_1;
		t149 * L_22 = V_0;
		t40 * L_23 = m452(L_22, &m452_MI);
		m453(L_21, L_23, &m453_MI);
	}

IL_0079:
	{
		t39 * L_24 = p1;
		t39 * L_25 = p0;
		float L_26 = m498(L_25, &m498_MI);
		m499(L_24, L_26, &m499_MI);
		t39 * L_27 = p1;
		t39 * L_28 = p0;
		float L_29 = m500(L_28, &m500_MI);
		m501(L_27, L_29, &m501_MI);
		t39 * L_30 = p1;
		t39 * L_31 = p0;
		bool L_32 = m502(L_31, &m502_MI);
		m503(L_30, L_32, &m503_MI);
		t39 * L_33 = p1;
		t39 * L_34 = p0;
		float L_35 = m504(L_34, &m504_MI);
		m505(L_33, L_35, &m505_MI);
		t39 * L_36 = p1;
		t39 * L_37 = p0;
		float L_38 = m506(L_37, &m506_MI);
		m507(L_36, L_38, &m507_MI);
		t39 * L_39 = p1;
		t39 * L_40 = p0;
		float L_41 = m508(L_40, &m508_MI);
		m509(L_39, L_41, &m509_MI);
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern TypeInfo* t152_TI_var;
extern MethodInfo* m514_MI_var;
extern MethodInfo* m478_MI_var;
extern MethodInfo* m520_MI_var;
extern MethodInfo* m516_MI_var;
extern "C" void m164 (t51 * __this, t39 * p0, t39 ** p1, t39 ** p2, MethodInfo* method)
{
	static bool m164_init;
	if (!m164_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m514_MI_var = il2cpp_codegen_genericmethod_get_method(&m514_GM);
		m478_MI_var = il2cpp_codegen_genericmethod_get_method(&m478_GM);
		m520_MI_var = il2cpp_codegen_genericmethod_get_method(&m520_GM);
		m516_MI_var = il2cpp_codegen_genericmethod_get_method(&m516_GM);
		m164_init = true;
	}
	int32_t V_0 = {0};
	t59 * V_1 = {0};
	t59 * V_2 = {0};
	{
		int32_t L_0 = m165(__this, &m165_MI);
		V_0 = L_0;
		t39 ** L_1 = p1;
		*((t9 **)(L_1)) = (t9 *)NULL;
		t39 ** L_2 = p2;
		*((t9 **)(L_2)) = (t9 *)NULL;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)1)))
		{
			goto IL_0186;
		}
	}
	{
		t44 * L_4 = (__this->f10);
		bool L_5 = m406(NULL, L_4, &m406_MI);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_6 = (__this->f13);
		int32_t L_7 = (__this->f4);
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_00ae;
		}
	}

IL_0035:
	{
		t44 * L_8 = (__this->f10);
		bool L_9 = m406(NULL, L_8, &m406_MI);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		t44 * L_10 = (__this->f10);
		m492(NULL, L_10, &m492_MI);
	}

IL_0050:
	{
		int32_t L_11 = (__this->f4);
		int32_t L_12 = (__this->f4);
		t44 * L_13 = (t44 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t44_TI));
		m441(L_13, L_11, L_12, ((int32_t)16), &m441_MI);
		__this->f10 = L_13;
		t44 * L_14 = (__this->f10);
		int32_t L_15 = m510(__this, &m510_MI);
		int32_t L_16 = L_15;
		t9 * L_17 = Box(InitializedTypeInfo(&t125_TI), &L_16);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_18 = m511(NULL, (t2*) &_stringLiteral23, L_17, &m511_MI);
		m512(L_14, L_18, &m512_MI);
		t44 * L_19 = (__this->f10);
		m513(L_19, 1, &m513_MI);
		t44 * L_20 = (__this->f10);
		m442(L_20, ((int32_t)52), &m442_MI);
		int32_t L_21 = (__this->f4);
		__this->f13 = L_21;
	}

IL_00ae:
	{
		t52 * L_22 = (__this->f8);
		t39 * L_23 = p0;
		t39 ** L_24 = p1;
		VirtFuncInvoker2< bool, t39 *, t39 ** >::Invoke(m514_MI_var, L_22, L_23, L_24);
		t39 ** L_25 = p1;
		bool L_26 = m406(NULL, (*((t39 **)L_25)), &m406_MI);
		if (L_26)
		{
			goto IL_0186;
		}
	}
	{
		t158* L_27 = ((t158*)SZArrayNew(t158_TI_var, 4));
		ArrayElementTypeCheck (L_27, (t2*) &_stringLiteral24);
		*((t9 **)(t9 **)SZArrayLdElema(L_27, 0)) = (t9 *)(t2*) &_stringLiteral24;
		t158* L_28 = L_27;
		int32_t L_29 = m510(__this, &m510_MI);
		int32_t L_30 = L_29;
		t9 * L_31 = Box(InitializedTypeInfo(&t125_TI), &L_30);
		ArrayElementTypeCheck (L_28, L_31);
		*((t9 **)(t9 **)SZArrayLdElema(L_28, 1)) = (t9 *)L_31;
		t158* L_32 = L_28;
		ArrayElementTypeCheck (L_32, (t2*) &_stringLiteral25);
		*((t9 **)(t9 **)SZArrayLdElema(L_32, 2)) = (t9 *)(t2*) &_stringLiteral25;
		t158* L_33 = L_32;
		t39 * L_34 = p0;
		int32_t L_35 = m510(L_34, &m510_MI);
		int32_t L_36 = L_35;
		t9 * L_37 = Box(InitializedTypeInfo(&t125_TI), &L_36);
		ArrayElementTypeCheck (L_33, L_37);
		*((t9 **)(t9 **)SZArrayLdElema(L_33, 3)) = (t9 *)L_37;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_38 = m515(NULL, L_33, &m515_MI);
		t152* L_39 = ((t152*)SZArrayNew(t152_TI_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_40 = m329(NULL, LoadTypeToken(&t39_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_39, L_40);
		*((t126 **)(t126 **)SZArrayLdElema(L_39, 0)) = (t126 *)L_40;
		t152* L_41 = L_39;
		t126 * L_42 = m329(NULL, LoadTypeToken(&t149_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_41, L_42);
		*((t126 **)(t126 **)SZArrayLdElema(L_41, 1)) = (t126 *)L_42;
		t59 * L_43 = (t59 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t59_TI));
		m427(L_43, L_38, L_41, &m427_MI);
		V_1 = L_43;
		t39 ** L_44 = p1;
		t59 * L_45 = V_1;
		t39 * L_46 = m478(L_45, m478_MI_var);
		*((t9 **)(L_44)) = (t9 *)L_46;
		t39 ** L_47 = p1;
		m437((*((t39 **)L_47)), 0, &m437_MI);
		t39 ** L_48 = p1;
		t45 * L_49 = m350((*((t39 **)L_48)), &m350_MI);
		t45 * L_50 = m350(__this, &m350_MI);
		t13  L_51 = m351(L_50, &m351_MI);
		m358(L_49, L_51, &m358_MI);
		t39 ** L_52 = p1;
		t45 * L_53 = m350((*((t39 **)L_52)), &m350_MI);
		t45 * L_54 = m350(__this, &m350_MI);
		t93  L_55 = m490(L_54, &m490_MI);
		m491(L_53, L_55, &m491_MI);
		t39 ** L_56 = p1;
		t59 * L_57 = m362((*((t39 **)L_56)), &m362_MI);
		m520(L_57, m520_MI_var);
		t59 * L_58 = V_1;
		m442(L_58, ((int32_t)61), &m442_MI);
		t52 * L_59 = (__this->f8);
		t39 * L_60 = p0;
		t39 ** L_61 = p1;
		VirtActionInvoker2< t39 *, t39 * >::Invoke(m516_MI_var, L_59, L_60, (*((t39 **)L_61)));
	}

IL_0186:
	{
		int32_t L_62 = V_0;
		if ((((int32_t)L_62) < ((int32_t)2)))
		{
			goto IL_02ff;
		}
	}
	{
		t44 * L_63 = (__this->f11);
		bool L_64 = m406(NULL, L_63, &m406_MI);
		if (!L_64)
		{
			goto IL_01ae;
		}
	}
	{
		int32_t L_65 = (__this->f14);
		int32_t L_66 = (__this->f4);
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_0227;
		}
	}

IL_01ae:
	{
		t44 * L_67 = (__this->f11);
		bool L_68 = m406(NULL, L_67, &m406_MI);
		if (!L_68)
		{
			goto IL_01c9;
		}
	}
	{
		t44 * L_69 = (__this->f11);
		m492(NULL, L_69, &m492_MI);
	}

IL_01c9:
	{
		int32_t L_70 = (__this->f4);
		int32_t L_71 = (__this->f4);
		t44 * L_72 = (t44 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t44_TI));
		m441(L_72, L_70, L_71, ((int32_t)16), &m441_MI);
		__this->f11 = L_72;
		t44 * L_73 = (__this->f11);
		int32_t L_74 = m510(__this, &m510_MI);
		int32_t L_75 = L_74;
		t9 * L_76 = Box(InitializedTypeInfo(&t125_TI), &L_75);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_77 = m511(NULL, (t2*) &_stringLiteral26, L_76, &m511_MI);
		m512(L_73, L_77, &m512_MI);
		t44 * L_78 = (__this->f11);
		m513(L_78, 1, &m513_MI);
		t44 * L_79 = (__this->f11);
		m442(L_79, ((int32_t)52), &m442_MI);
		int32_t L_80 = (__this->f4);
		__this->f14 = L_80;
	}

IL_0227:
	{
		t52 * L_81 = (__this->f9);
		t39 * L_82 = p0;
		t39 ** L_83 = p2;
		VirtFuncInvoker2< bool, t39 *, t39 ** >::Invoke(m514_MI_var, L_81, L_82, L_83);
		t39 ** L_84 = p2;
		bool L_85 = m406(NULL, (*((t39 **)L_84)), &m406_MI);
		if (L_85)
		{
			goto IL_02ff;
		}
	}
	{
		t158* L_86 = ((t158*)SZArrayNew(t158_TI_var, 4));
		ArrayElementTypeCheck (L_86, (t2*) &_stringLiteral27);
		*((t9 **)(t9 **)SZArrayLdElema(L_86, 0)) = (t9 *)(t2*) &_stringLiteral27;
		t158* L_87 = L_86;
		int32_t L_88 = m510(__this, &m510_MI);
		int32_t L_89 = L_88;
		t9 * L_90 = Box(InitializedTypeInfo(&t125_TI), &L_89);
		ArrayElementTypeCheck (L_87, L_90);
		*((t9 **)(t9 **)SZArrayLdElema(L_87, 1)) = (t9 *)L_90;
		t158* L_91 = L_87;
		ArrayElementTypeCheck (L_91, (t2*) &_stringLiteral25);
		*((t9 **)(t9 **)SZArrayLdElema(L_91, 2)) = (t9 *)(t2*) &_stringLiteral25;
		t158* L_92 = L_91;
		t39 * L_93 = p0;
		int32_t L_94 = m510(L_93, &m510_MI);
		int32_t L_95 = L_94;
		t9 * L_96 = Box(InitializedTypeInfo(&t125_TI), &L_95);
		ArrayElementTypeCheck (L_92, L_96);
		*((t9 **)(t9 **)SZArrayLdElema(L_92, 3)) = (t9 *)L_96;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_97 = m515(NULL, L_92, &m515_MI);
		t152* L_98 = ((t152*)SZArrayNew(t152_TI_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_99 = m329(NULL, LoadTypeToken(&t39_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_98, L_99);
		*((t126 **)(t126 **)SZArrayLdElema(L_98, 0)) = (t126 *)L_99;
		t152* L_100 = L_98;
		t126 * L_101 = m329(NULL, LoadTypeToken(&t149_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_100, L_101);
		*((t126 **)(t126 **)SZArrayLdElema(L_100, 1)) = (t126 *)L_101;
		t59 * L_102 = (t59 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t59_TI));
		m427(L_102, L_97, L_100, &m427_MI);
		V_2 = L_102;
		t39 ** L_103 = p2;
		t59 * L_104 = V_2;
		t39 * L_105 = m478(L_104, m478_MI_var);
		*((t9 **)(L_103)) = (t9 *)L_105;
		t39 ** L_106 = p2;
		m437((*((t39 **)L_106)), 0, &m437_MI);
		t39 ** L_107 = p2;
		t45 * L_108 = m350((*((t39 **)L_107)), &m350_MI);
		t45 * L_109 = m350(__this, &m350_MI);
		t13  L_110 = m351(L_109, &m351_MI);
		m358(L_108, L_110, &m358_MI);
		t39 ** L_111 = p2;
		t45 * L_112 = m350((*((t39 **)L_111)), &m350_MI);
		t45 * L_113 = m350(__this, &m350_MI);
		t93  L_114 = m490(L_113, &m490_MI);
		m491(L_112, L_114, &m491_MI);
		t39 ** L_115 = p2;
		t59 * L_116 = m362((*((t39 **)L_115)), &m362_MI);
		m520(L_116, m520_MI_var);
		t59 * L_117 = V_2;
		m442(L_117, ((int32_t)61), &m442_MI);
		t52 * L_118 = (__this->f9);
		t39 * L_119 = p0;
		t39 ** L_120 = p2;
		VirtActionInvoker2< t39 *, t39 * >::Invoke(m516_MI_var, L_118, L_119, (*((t39 **)L_120)));
	}

IL_02ff:
	{
		return;
	}
}
extern "C" int32_t m165 (t51 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f12);
		int32_t L_1 = (__this->f2);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = (__this->f12);
		return L_2;
	}

IL_0018:
	{
		int32_t L_3 = (__this->f2);
		return L_3;
	}
}
extern MethodInfo* m415_MI_var;
extern "C" int32_t m166 (t51 * __this, MethodInfo* method)
{
	static bool m166_init;
	if (!m166_init)
	{
		m415_MI_var = il2cpp_codegen_genericmethod_get_method(&m415_GM);
		m166_init = true;
	}
	t40 * V_0 = {0};
	t2* V_1 = {0};
	{
		bool L_0 = m517(NULL, &m517_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t144 * L_1 = m415(__this, m415_MI_var);
		bool L_2 = m406(NULL, L_1, &m406_MI);
		if (L_2)
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (int32_t)(0);
	}

IL_001c:
	{
		t144 * L_3 = m415(__this, m415_MI_var);
		t40 * L_4 = m407(L_3, &m407_MI);
		V_0 = L_4;
		t40 * L_5 = V_0;
		bool L_6 = m406(NULL, L_5, &m406_MI);
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0035:
	{
		t40 * L_7 = V_0;
		t2* L_8 = m518(L_7, (t2*) &_stringLiteral28, 0, &m518_MI);
		V_1 = L_8;
		t2* L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_10 = m331(NULL, L_9, (t2*) &_stringLiteral29, &m331_MI);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0054:
	{
		t2* L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_12 = m331(NULL, L_11, (t2*) &_stringLiteral30, &m331_MI);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0066:
	{
		return (int32_t)(0);
	}
}
extern "C" t47  m167 (t51 * __this, t39 * p0, t13  p1, t13  p2, float p3, MethodInfo* method)
{
	t13  V_0 = {0};
	t46  V_1 = {0};
	t13  V_2 = {0};
	t13  V_3 = {0};
	t13  V_4 = {0};
	{
		t13  L_0 = p1;
		t13  L_1 = p2;
		float L_2 = (__this->f5);
		t13  L_3 = m475(NULL, L_1, L_2, &m475_MI);
		t13  L_4 = m476(NULL, L_0, L_3, &m476_MI);
		V_0 = L_4;
		t39 * L_5 = p0;
		t46  L_6 = m461(L_5, &m461_MI);
		V_1 = L_6;
		t13  L_7 = V_0;
		t13  L_8 = m460((&V_1), L_7, &m460_MI);
		V_2 = L_8;
		t13  L_9 = p2;
		t13  L_10 = m477((&V_1), L_9, &m477_MI);
		V_4 = L_10;
		t13  L_11 = m386((&V_4), &m386_MI);
		float L_12 = p3;
		t13  L_13 = m475(NULL, L_11, L_12, &m475_MI);
		V_3 = L_13;
		float L_14 = ((&V_3)->f1);
		float L_15 = ((&V_3)->f2);
		float L_16 = ((&V_3)->f3);
		t13  L_17 = V_2;
		t13  L_18 = V_3;
		float L_19 = m458(NULL, L_17, L_18, &m458_MI);
		t47  L_20 = {0};
		m413(&L_20, L_14, L_15, L_16, ((-L_19)), &m413_MI);
		return L_20;
	}
}
extern "C" void m168 (t9 * __this , t46 * p0, t47  p1, MethodInfo* method)
{
	{
		t46 * L_0 = p0;
		float L_1 = m474((&p1), 0, &m474_MI);
		float L_2 = m474((&p1), 0, &m474_MI);
		L_0->f0 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(2.0f)*(float)L_1))*(float)L_2))));
		t46 * L_3 = p0;
		float L_4 = m474((&p1), 0, &m474_MI);
		float L_5 = m474((&p1), 1, &m474_MI);
		L_3->f4 = ((float)((float)((float)((float)(-2.0f)*(float)L_4))*(float)L_5));
		t46 * L_6 = p0;
		float L_7 = m474((&p1), 0, &m474_MI);
		float L_8 = m474((&p1), 2, &m474_MI);
		L_6->f8 = ((float)((float)((float)((float)(-2.0f)*(float)L_7))*(float)L_8));
		t46 * L_9 = p0;
		float L_10 = m474((&p1), 3, &m474_MI);
		float L_11 = m474((&p1), 0, &m474_MI);
		L_9->f12 = ((float)((float)((float)((float)(-2.0f)*(float)L_10))*(float)L_11));
		t46 * L_12 = p0;
		float L_13 = m474((&p1), 1, &m474_MI);
		float L_14 = m474((&p1), 0, &m474_MI);
		L_12->f1 = ((float)((float)((float)((float)(-2.0f)*(float)L_13))*(float)L_14));
		t46 * L_15 = p0;
		float L_16 = m474((&p1), 1, &m474_MI);
		float L_17 = m474((&p1), 1, &m474_MI);
		L_15->f5 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(2.0f)*(float)L_16))*(float)L_17))));
		t46 * L_18 = p0;
		float L_19 = m474((&p1), 1, &m474_MI);
		float L_20 = m474((&p1), 2, &m474_MI);
		L_18->f9 = ((float)((float)((float)((float)(-2.0f)*(float)L_19))*(float)L_20));
		t46 * L_21 = p0;
		float L_22 = m474((&p1), 3, &m474_MI);
		float L_23 = m474((&p1), 1, &m474_MI);
		L_21->f13 = ((float)((float)((float)((float)(-2.0f)*(float)L_22))*(float)L_23));
		t46 * L_24 = p0;
		float L_25 = m474((&p1), 2, &m474_MI);
		float L_26 = m474((&p1), 0, &m474_MI);
		L_24->f2 = ((float)((float)((float)((float)(-2.0f)*(float)L_25))*(float)L_26));
		t46 * L_27 = p0;
		float L_28 = m474((&p1), 2, &m474_MI);
		float L_29 = m474((&p1), 1, &m474_MI);
		L_27->f6 = ((float)((float)((float)((float)(-2.0f)*(float)L_28))*(float)L_29));
		t46 * L_30 = p0;
		float L_31 = m474((&p1), 2, &m474_MI);
		float L_32 = m474((&p1), 2, &m474_MI);
		L_30->f10 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(2.0f)*(float)L_31))*(float)L_32))));
		t46 * L_33 = p0;
		float L_34 = m474((&p1), 3, &m474_MI);
		float L_35 = m474((&p1), 2, &m474_MI);
		L_33->f14 = ((float)((float)((float)((float)(-2.0f)*(float)L_34))*(float)L_35));
		t46 * L_36 = p0;
		L_36->f3 = (0.0f);
		t46 * L_37 = p0;
		L_37->f7 = (0.0f);
		t46 * L_38 = p0;
		L_38->f11 = (0.0f);
		t46 * L_39 = p0;
		L_39->f15 = (1.0f);
		return;
	}
}
#include "t53.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t53_TI;
#include "t53MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t49MD.h"

#include "t62.h"
#include "t162.h"
extern MethodInfo m525_MI;
extern MethodInfo m526_MI;
extern MethodInfo m527_MI;
extern MethodInfo m528_MI;
extern MethodInfo m529_MI;
extern MethodInfo m170_MI;


extern MethodInfo m169_MI;
extern "C" void m169 (t49 * __this, MethodInfo* method)
{
	{
		__this->f3 = 2;
		__this->f4 = 1;
		m328(__this, &m328_MI);
		return;
	}
}
extern "C" void m170 (t49 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		t40 * L_1 = (__this->f2);
		t62 * L_2 = m525(L_1, &m525_MI);
		m526(L_2, ((int32_t)501), &m526_MI);
		goto IL_0061;
	}

IL_0026:
	{
		int32_t L_3 = (__this->f3);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		t40 * L_4 = (__this->f2);
		t62 * L_5 = m525(L_4, &m525_MI);
		m526(L_5, ((int32_t)301), &m526_MI);
		goto IL_0061;
	}

IL_004c:
	{
		t40 * L_6 = (__this->f2);
		t62 * L_7 = m525(L_6, &m525_MI);
		m526(L_7, ((int32_t)201), &m526_MI);
	}

IL_0061:
	{
		bool L_8 = m527(NULL, 1, &m527_MI);
		if (L_8)
		{
			goto IL_0073;
		}
	}
	{
		__this->f4 = 0;
	}

IL_0073:
	{
		bool L_9 = (__this->f4);
		if (!L_9)
		{
			goto IL_00b8;
		}
	}
	{
		m417(NULL, (t2*) &_stringLiteral31, &m417_MI);
		m418(NULL, (t2*) &_stringLiteral32, &m418_MI);
		t39 * L_10 = m528(NULL, &m528_MI);
		bool L_11 = m406(NULL, L_10, &m406_MI);
		if (!L_11)
		{
			goto IL_00b3;
		}
	}
	{
		t39 * L_12 = m528(NULL, &m528_MI);
		t39 * L_13 = L_12;
		int32_t L_14 = m529(L_13, &m529_MI);
		m467(L_13, ((int32_t)((int32_t)L_14|(int32_t)1)), &m467_MI);
	}

IL_00b3:
	{
		goto IL_00cc;
	}

IL_00b8:
	{
		m417(NULL, (t2*) &_stringLiteral32, &m417_MI);
		m418(NULL, (t2*) &_stringLiteral31, &m418_MI);
	}

IL_00cc:
	{
		return;
	}
}
extern MethodInfo m171_MI;
extern "C" void m171 (t49 * __this, t45 * p0, t39 * p1, MethodInfo* method)
{
	{
		t39 * L_0 = p1;
		bool L_1 = m406(NULL, L_0, &m406_MI);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2 = (__this->f4);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		t39 * L_3 = p1;
		t39 * L_4 = L_3;
		int32_t L_5 = m529(L_4, &m529_MI);
		m467(L_4, ((int32_t)((int32_t)L_5|(int32_t)1)), &m467_MI);
	}

IL_0024:
	{
		return;
	}
}
extern MethodInfo m172_MI;
extern "C" void m172 (t49 * __this, MethodInfo* method)
{
	{
		t40 * L_0 = (__this->f2);
		bool L_1 = m406(NULL, L_0, &m406_MI);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		m170(__this, &m170_MI);
	}

IL_0016:
	{
		return;
	}
}
#include "t54.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t54_TI;
#include "t54MD.h"

extern MethodInfo m175_MI;
extern MethodInfo m530_MI;
struct t133;
#define m531(__this, method) (( t38 * (*) (t133 *, MethodInfo*))m395_gshared)(__this, method)
struct t133;
#define m532(__this, method) (( t49 * (*) (t133 *, MethodInfo*))m395_gshared)(__this, method)
extern Il2CppGenericMethod m531_GM;
extern Il2CppGenericMethod m532_GM;


extern MethodInfo m173_MI;
extern "C" void m173 (t54 * __this, MethodInfo* method)
{
	{
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m174_MI;
extern "C" void m174 (t54 * __this, MethodInfo* method)
{
	{
		m175(__this, &m175_MI);
		return;
	}
}
extern MethodInfo* m531_MI_var;
extern MethodInfo* m532_MI_var;
extern "C" void m175 (t54 * __this, MethodInfo* method)
{
	static bool m175_init;
	if (!m175_init)
	{
		m531_MI_var = il2cpp_codegen_genericmethod_get_method(&m531_GM);
		m532_MI_var = il2cpp_codegen_genericmethod_get_method(&m532_GM);
		m175_init = true;
	}
	{
		t38 * L_0 = (__this->f2);
		bool L_1 = m406(NULL, L_0, &m406_MI);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		t45 * L_2 = m350(__this, &m350_MI);
		t45 * L_3 = m530(L_2, &m530_MI);
		bool L_4 = m406(NULL, L_3, &m406_MI);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		t45 * L_5 = m350(__this, &m350_MI);
		t45 * L_6 = m530(L_5, &m530_MI);
		t38 * L_7 = m531(L_6, m531_MI_var);
		__this->f2 = L_7;
		goto IL_0051;
	}

IL_0040:
	{
		t45 * L_8 = m350(__this, &m350_MI);
		t38 * L_9 = m531(L_8, m531_MI_var);
		__this->f2 = L_9;
	}

IL_0051:
	{
		t49 * L_10 = (__this->f3);
		bool L_11 = m406(NULL, L_10, &m406_MI);
		if (L_11)
		{
			goto IL_00a2;
		}
	}
	{
		t45 * L_12 = m350(__this, &m350_MI);
		t45 * L_13 = m530(L_12, &m530_MI);
		bool L_14 = m406(NULL, L_13, &m406_MI);
		if (!L_14)
		{
			goto IL_0091;
		}
	}
	{
		t45 * L_15 = m350(__this, &m350_MI);
		t45 * L_16 = m530(L_15, &m530_MI);
		t49 * L_17 = m532(L_16, m532_MI_var);
		__this->f3 = L_17;
		goto IL_00a2;
	}

IL_0091:
	{
		t45 * L_18 = m350(__this, &m350_MI);
		t49 * L_19 = m532(L_18, m532_MI_var);
		__this->f3 = L_19;
	}

IL_00a2:
	{
		return;
	}
}
extern MethodInfo m176_MI;
extern "C" void m176 (t54 * __this, MethodInfo* method)
{
	{
		t38 * L_0 = (__this->f2);
		bool L_1 = m406(NULL, L_0, &m406_MI);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		t38 * L_2 = (__this->f2);
		t45 * L_3 = m350(__this, &m350_MI);
		t39 * L_4 = m485(NULL, &m485_MI);
		m147(L_2, L_3, L_4, &m147_MI);
	}

IL_0026:
	{
		t49 * L_5 = (__this->f3);
		bool L_6 = m406(NULL, L_5, &m406_MI);
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		t49 * L_7 = (__this->f3);
		t45 * L_8 = m350(__this, &m350_MI);
		t39 * L_9 = m485(NULL, &m485_MI);
		m171(L_7, L_8, L_9, &m171_MI);
	}

IL_004c:
	{
		return;
	}
}
#include "t55.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t55_TI;
#include "t55MD.h"



#include "t56.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t56_TI;
#include "t56MD.h"

#include "t145.h"
#include "t163.h"
#include "t60.h"
extern TypeInfo t145_TI;
#include "t163MD.h"
extern MethodInfo m533_MI;
extern MethodInfo m534_MI;
extern MethodInfo m535_MI;
extern MethodInfo m536_MI;
extern MethodInfo m537_MI;
extern MethodInfo m178_MI;
struct t59;
#define m538(__this, method) (( t163 * (*) (t59 *, MethodInfo*))m479_gshared)(__this, method)
extern Il2CppGenericMethod m538_GM;


extern MethodInfo m177_MI;
extern "C" void m177 (t56 * __this, MethodInfo* method)
{
	{
		__this->f2 = 2;
		__this->f5 = 1;
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo* m538_MI_var;
extern "C" void m178 (t56 * __this, MethodInfo* method)
{
	static bool m178_init;
	if (!m178_init)
	{
		m538_MI_var = il2cpp_codegen_genericmethod_get_method(&m538_GM);
		m178_init = true;
	}
	t57 * V_0 = {0};
	t145 * V_1 = {0};
	t59 * V_2 = {0};
	int32_t V_3 = {0};
	t57 * G_B4_0 = {0};
	t57 * G_B3_0 = {0};
	{
		int32_t L_0 = (__this->f5);
		__this->f5 = ((int32_t)((int32_t)L_0-(int32_t)1));
		int32_t L_1 = (__this->f5);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2 = (__this->f6);
		if (!L_2)
		{
			goto IL_014e;
		}
	}

IL_0024:
	{
		t57 * L_3 = (__this->f3);
		t57 * L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0037;
		}
	}
	{
		t59 * L_5 = m362(__this, &m362_MI);
		G_B4_0 = ((t57 *)(L_5));
	}

IL_0037:
	{
		V_0 = G_B4_0;
		t57 * L_6 = V_0;
		V_1 = ((t145 *)IsInst(L_6, InitializedTypeInfo(&t145_TI)));
		t57 * L_7 = V_0;
		V_2 = ((t59 *)IsInst(L_7, InitializedTypeInfo(&t59_TI)));
		t145 * L_8 = V_1;
		bool L_9 = m332(NULL, L_8, (t57 *)NULL, &m332_MI);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		t145 * L_10 = V_1;
		t59 * L_11 = m362(L_10, &m362_MI);
		V_2 = L_11;
	}

IL_0059:
	{
		int32_t L_12 = (__this->f2);
		V_3 = L_12;
		int32_t L_13 = V_3;
		if (L_13 == 0)
		{
			goto IL_0083;
		}
		if (L_13 == 1)
		{
			goto IL_009f;
		}
		if (L_13 == 2)
		{
			goto IL_00e9;
		}
		if (L_13 == 3)
		{
			goto IL_0101;
		}
		if (L_13 == 4)
		{
			goto IL_0119;
		}
		if (L_13 == 5)
		{
			goto IL_0136;
		}
	}
	{
		goto IL_014e;
	}

IL_0083:
	{
		t59 * L_14 = V_2;
		bool L_15 = m332(NULL, L_14, (t57 *)NULL, &m332_MI);
		if (!L_15)
		{
			goto IL_009a;
		}
	}
	{
		t59 * L_16 = V_2;
		m533(L_16, (t2*) &_stringLiteral33, &m533_MI);
	}

IL_009a:
	{
		goto IL_014e;
	}

IL_009f:
	{
		t59 * L_17 = (__this->f4);
		bool L_18 = m332(NULL, L_17, (t57 *)NULL, &m332_MI);
		if (!L_18)
		{
			goto IL_00e4;
		}
	}
	{
		t59 * L_19 = V_2;
		bool L_20 = m332(NULL, L_19, (t57 *)NULL, &m332_MI);
		if (!L_20)
		{
			goto IL_00e4;
		}
	}
	{
		t59 * L_21 = (__this->f4);
		t59 * L_22 = V_2;
		t45 * L_23 = m534(L_22, &m534_MI);
		t13  L_24 = m351(L_23, &m351_MI);
		t59 * L_25 = V_2;
		t45 * L_26 = m534(L_25, &m534_MI);
		t93  L_27 = m490(L_26, &m490_MI);
		m535(NULL, L_21, L_24, L_27, &m535_MI);
		t59 * L_28 = V_2;
		m536(NULL, L_28, &m536_MI);
	}

IL_00e4:
	{
		goto IL_014e;
	}

IL_00e9:
	{
		t59 * L_29 = V_2;
		bool L_30 = m332(NULL, L_29, (t57 *)NULL, &m332_MI);
		if (!L_30)
		{
			goto IL_00fc;
		}
	}
	{
		t59 * L_31 = V_2;
		m363(L_31, 1, &m363_MI);
	}

IL_00fc:
	{
		goto IL_014e;
	}

IL_0101:
	{
		t145 * L_32 = V_1;
		bool L_33 = m332(NULL, L_32, (t57 *)NULL, &m332_MI);
		if (!L_33)
		{
			goto IL_0114;
		}
	}
	{
		t145 * L_34 = V_1;
		m437(L_34, 1, &m437_MI);
	}

IL_0114:
	{
		goto IL_014e;
	}

IL_0119:
	{
		t59 * L_35 = V_2;
		bool L_36 = m332(NULL, L_35, (t57 *)NULL, &m332_MI);
		if (!L_36)
		{
			goto IL_0131;
		}
	}
	{
		t59 * L_37 = V_2;
		t163 * L_38 = m538(L_37, m538_MI_var);
		m537(L_38, &m537_MI);
	}

IL_0131:
	{
		goto IL_014e;
	}

IL_0136:
	{
		t59 * L_39 = V_2;
		bool L_40 = m332(NULL, L_39, (t57 *)NULL, &m332_MI);
		if (!L_40)
		{
			goto IL_0149;
		}
	}
	{
		t59 * L_41 = V_2;
		m363(L_41, 0, &m363_MI);
	}

IL_0149:
	{
		goto IL_014e;
	}

IL_014e:
	{
		return;
	}
}
extern MethodInfo m179_MI;
extern "C" void m179 (t56 * __this, t60 * p0, MethodInfo* method)
{
	{
		m178(__this, &m178_MI);
		return;
	}
}
#include "t61.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t61_TI;
#include "t61MD.h"



extern MethodInfo m180_MI;
extern "C" void m180 (t61 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#include "t63.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t63_TI;
#include "t63MD.h"

extern TypeInfo t64_TI;
extern Il2CppType t64_0_0_0;


extern MethodInfo m181_MI;
extern TypeInfo* t64_TI_var;
extern "C" void m181 (t63 * __this, MethodInfo* method)
{
	static bool m181_init;
	if (!m181_init)
	{
		t64_TI_var = il2cpp_codegen_class_from_type(&t64_0_0_0);
		m181_init = true;
	}
	{
		__this->f0 = ((t64*)SZArrayNew(t64_TI_var, 0));
		m336(__this, &m336_MI);
		return;
	}
}
#include "t65.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t65_TI;
#include "t65MD.h"



extern MethodInfo m182_MI;
extern "C" void m182 (t65 * __this, MethodInfo* method)
{
	{
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m183_MI;
extern "C" void m183 (t65 * __this, MethodInfo* method)
{
	{
		return;
	}
}
#include "t66.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t66_TI;
#include "t66MD.h"

#include "t67.h"


extern MethodInfo m184_MI;
extern "C" void m184 (t66 * __this, MethodInfo* method)
{
	{
		__this->f1 = 1;
		m336(__this, &m336_MI);
		return;
	}
}
#include "t68.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t68_TI;
#include "t68MD.h"

extern MethodInfo m539_MI;
extern MethodInfo m540_MI;
extern MethodInfo m541_MI;


extern MethodInfo m185_MI;
extern "C" void m185 (t68 * __this, MethodInfo* method)
{
	{
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m186_MI;
extern "C" void m186 (t68 * __this, MethodInfo* method)
{
	{
		float L_0 = m539(NULL, &m539_MI);
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m187_MI;
extern "C" void m187 (t68 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = m334(NULL, &m334_MI);
		V_0 = L_0;
		bool L_1 = (__this->f4);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		float L_2 = m539(NULL, &m539_MI);
		float L_3 = (__this->f5);
		V_0 = ((float)((float)L_2-(float)L_3));
		float L_4 = m539(NULL, &m539_MI);
		__this->f5 = L_4;
	}

IL_0029:
	{
		t45 * L_5 = m350(__this, &m350_MI);
		t66 * L_6 = (__this->f2);
		t13  L_7 = (L_6->f0);
		float L_8 = V_0;
		t13  L_9 = m475(NULL, L_7, L_8, &m475_MI);
		t66 * L_10 = (__this->f2);
		int32_t L_11 = (L_10->f1);
		m540(L_5, L_9, L_11, &m540_MI);
		t45 * L_12 = m350(__this, &m350_MI);
		t66 * L_13 = (__this->f3);
		t13  L_14 = (L_13->f0);
		float L_15 = V_0;
		t13  L_16 = m475(NULL, L_14, L_15, &m475_MI);
		t66 * L_17 = (__this->f2);
		int32_t L_18 = (L_17->f1);
		m541(L_12, L_16, L_18, &m541_MI);
		return;
	}
}
#include "t69.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t69_TI;
#include "t69MD.h"

#include "t164.h"
#include "t165MD.h"
#include "t164MD.h"
extern MethodInfo m542_MI;
extern MethodInfo m543_MI;
extern MethodInfo m544_MI;


extern MethodInfo m188_MI;
extern "C" void m188 (t69 * __this, t39 * p0, t45 * p1, t13  p2, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t13  L_0 = p2;
		__this->f3 = L_0;
		t39 * L_1 = p0;
		__this->f0 = L_1;
		t45 * L_2 = p1;
		__this->f2 = L_2;
		return;
	}
}
extern MethodInfo m189_MI;
extern "C" void m189 (t69 * __this, t39 * p0, MethodInfo* method)
{
	{
		t39 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m190_MI;
extern "C" void m190 (t69 * __this, t45 * p0, MethodInfo* method)
{
	{
		t45 * L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m191_MI;
extern "C" void m191 (t69 * __this, MethodInfo* method)
{
	t164  V_0 = {0};
	{
		t45 * L_0 = (__this->f2);
		t45 * L_1 = m350(L_0, &m350_MI);
		t13  L_2 = m351(L_1, &m351_MI);
		t13  L_3 = (__this->f3);
		t13  L_4 = m476(NULL, L_2, L_3, &m476_MI);
		t45 * L_5 = (__this->f2);
		t45 * L_6 = m350(L_5, &m350_MI);
		t13  L_7 = m480(L_6, &m480_MI);
		bool L_8 = m542(NULL, L_4, L_7, (&V_0), (100.0f), &m542_MI);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		t13  L_9 = m543((&V_0), &m543_MI);
		__this->f1 = L_9;
		__this->f4 = 1;
		return;
	}

IL_0051:
	{
		__this->f4 = 0;
		return;
	}
}
extern MethodInfo m192_MI;
extern "C" void m192 (t69 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		t39 * L_1 = (__this->f0);
		t45 * L_2 = m350(L_1, &m350_MI);
		t13  L_3 = (__this->f1);
		m544(L_2, L_3, &m544_MI);
	}

IL_0021:
	{
		return;
	}
}
#include "t70.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t70_TI;
#include "t70MD.h"

#include "t166.h"
#include "t71.h"
extern TypeInfo t167_TI;
extern TypeInfo t166_TI;
extern TypeInfo t71_TI;
#include "t166MD.h"
#include "t71MD.h"
extern Il2CppType t167_0_0_0;
extern MethodInfo m545_MI;
extern MethodInfo m546_MI;
extern MethodInfo m547_MI;
extern MethodInfo m548_MI;
extern MethodInfo m549_MI;
extern MethodInfo m550_MI;
extern MethodInfo m551_MI;


extern MethodInfo m193_MI;
extern TypeInfo* t167_TI_var;
extern "C" void m193 (t70 * __this, MethodInfo* method)
{
	static bool m193_init;
	if (!m193_init)
	{
		t167_TI_var = il2cpp_codegen_class_from_type(&t167_0_0_0);
		m193_init = true;
	}
	{
		__this->f0 = (0.33f);
		__this->f1 = (0.33f);
		t167* L_0 = ((t167*)SZArrayNew(t167_TI_var, 5));
		t166  L_1 = {0};
		m545(&L_1, (0.0f), (0.0f), &m545_MI);
		*((t166 *)(t166 *)SZArrayLdElema(L_0, 0)) = L_1;
		t167* L_2 = L_0;
		t166  L_3 = {0};
		m545(&L_3, (0.5f), (1.0f), &m545_MI);
		*((t166 *)(t166 *)SZArrayLdElema(L_2, 1)) = L_3;
		t167* L_4 = L_2;
		t166  L_5 = {0};
		m545(&L_5, (1.0f), (0.0f), &m545_MI);
		*((t166 *)(t166 *)SZArrayLdElema(L_4, 2)) = L_5;
		t167* L_6 = L_4;
		t166  L_7 = {0};
		m545(&L_7, (1.5f), (-1.0f), &m545_MI);
		*((t166 *)(t166 *)SZArrayLdElema(L_6, 3)) = L_7;
		t167* L_8 = L_6;
		t166  L_9 = {0};
		m545(&L_9, (2.0f), (0.0f), &m545_MI);
		*((t166 *)(t166 *)SZArrayLdElema(L_8, 4)) = L_9;
		t71 * L_10 = (t71 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t71_TI));
		m546(L_10, L_8, &m546_MI);
		__this->f2 = L_10;
		__this->f3 = (1.0f);
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m194_MI;
extern "C" void m194 (t70 * __this, t39 * p0, float p1, MethodInfo* method)
{
	t166  V_0 = {0};
	{
		float L_0 = p1;
		__this->f6 = L_0;
		t39 * L_1 = p0;
		t45 * L_2 = m350(L_1, &m350_MI);
		t13  L_3 = m547(L_2, &m547_MI);
		__this->f7 = L_3;
		t71 * L_4 = (__this->f2);
		t71 * L_5 = (__this->f2);
		int32_t L_6 = m548(L_5, &m548_MI);
		t166  L_7 = m549(L_4, ((int32_t)((int32_t)L_6-(int32_t)1)), &m549_MI);
		V_0 = L_7;
		float L_8 = m550((&V_0), &m550_MI);
		__this->f8 = L_8;
		return;
	}
}
extern MethodInfo m195_MI;
extern "C" t13  m195 (t70 * __this, float p0, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		t13 * L_0 = &(__this->f7);
		float L_1 = (L_0->f1);
		t71 * L_2 = (__this->f2);
		float L_3 = (__this->f4);
		float L_4 = m551(L_2, L_3, &m551_MI);
		float L_5 = (__this->f0);
		V_0 = ((float)((float)L_1+(float)((float)((float)L_4*(float)L_5))));
		t13 * L_6 = &(__this->f7);
		float L_7 = (L_6->f2);
		t71 * L_8 = (__this->f2);
		float L_9 = (__this->f5);
		float L_10 = m551(L_8, L_9, &m551_MI);
		float L_11 = (__this->f1);
		V_1 = ((float)((float)L_7+(float)((float)((float)L_10*(float)L_11))));
		float L_12 = (__this->f4);
		float L_13 = p0;
		float L_14 = m334(NULL, &m334_MI);
		float L_15 = (__this->f6);
		__this->f4 = ((float)((float)L_12+(float)((float)((float)((float)((float)L_13*(float)L_14))/(float)L_15))));
		float L_16 = (__this->f5);
		float L_17 = p0;
		float L_18 = m334(NULL, &m334_MI);
		float L_19 = (__this->f6);
		float L_20 = (__this->f3);
		__this->f5 = ((float)((float)L_16+(float)((float)((float)((float)((float)((float)((float)L_17*(float)L_18))/(float)L_19))*(float)L_20))));
		float L_21 = (__this->f4);
		float L_22 = (__this->f8);
		if ((!(((float)L_21) > ((float)L_22))))
		{
			goto IL_00ab;
		}
	}
	{
		float L_23 = (__this->f4);
		float L_24 = (__this->f8);
		__this->f4 = ((float)((float)L_23-(float)L_24));
	}

IL_00ab:
	{
		float L_25 = (__this->f5);
		float L_26 = (__this->f8);
		if ((!(((float)L_25) > ((float)L_26))))
		{
			goto IL_00cf;
		}
	}
	{
		float L_27 = (__this->f5);
		float L_28 = (__this->f8);
		__this->f5 = ((float)((float)L_27-(float)L_28));
	}

IL_00cf:
	{
		float L_29 = V_0;
		float L_30 = V_1;
		t13  L_31 = {0};
		m357(&L_31, L_29, L_30, (0.0f), &m357_MI);
		return L_31;
	}
}
#include "t72.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t72_TI;
#include "t72MD.h"

#include "t168.h"
#include "t73.h"
#include "t75.h"
#include "t92.h"
#include "t74.h"
#include "t169.h"
extern TypeInfo t73_TI;
extern TypeInfo t169_TI;
#include "t170MD.h"
#include "t92MD.h"
#include "t73MD.h"
#include "t74MD.h"
#include "t169MD.h"
extern MethodInfo m552_MI;
extern MethodInfo m553_MI;
extern MethodInfo m554_MI;
extern MethodInfo m555_MI;
extern MethodInfo m556_MI;
extern MethodInfo m205_MI;
extern MethodInfo m557_MI;
extern MethodInfo m558_MI;
extern MethodInfo m559_MI;
extern MethodInfo m560_MI;
extern MethodInfo m561_MI;


extern MethodInfo m196_MI;
extern "C" void m196 (t72 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m197_MI;
extern "C" t9 * m197 (t72 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m198_MI;
extern "C" t9 * m198 (t72 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m199_MI;
extern "C" bool m199 (t72 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f5);
		V_0 = L_0;
		__this->f5 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00f0;
		}
	}
	{
		goto IL_0163;
	}

IL_0021:
	{
		t73 * L_2 = (__this->f8);
		t75 * L_3 = (L_2->f8);
		t92 * L_4 = m552(L_3, &m552_MI);
		float L_5 = m553(L_4, &m553_MI);
		__this->f0 = L_5;
		t73 * L_6 = (__this->f8);
		t75 * L_7 = (L_6->f8);
		t92 * L_8 = m552(L_7, &m552_MI);
		float L_9 = m554(L_8, &m554_MI);
		__this->f1 = L_9;
		t73 * L_10 = (__this->f8);
		t75 * L_11 = (L_10->f8);
		t92 * L_12 = m552(L_11, &m552_MI);
		m555(L_12, (10.0f), &m555_MI);
		t73 * L_13 = (__this->f8);
		t75 * L_14 = (L_13->f8);
		t92 * L_15 = m552(L_14, &m552_MI);
		m556(L_15, (5.0f), &m556_MI);
		t73 * L_16 = (__this->f8);
		t39 * L_17 = m205(L_16, &m205_MI);
		__this->f2 = L_17;
		goto IL_00f0;
	}

IL_00a1:
	{
		t39 * L_18 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		t13  L_19 = m380(NULL, &m380_MI);
		t74  L_20 = m557(L_18, L_19, &m557_MI);
		__this->f3 = L_20;
		t73 * L_21 = (__this->f8);
		t75 * L_22 = (L_21->f8);
		t45 * L_23 = m350(L_22, &m350_MI);
		t74 * L_24 = &(__this->f3);
		float L_25 = (__this->f4);
		t13  L_26 = m558(L_24, L_25, &m558_MI);
		m358(L_23, L_26, &m358_MI);
		__this->f6 = NULL;
		__this->f5 = 1;
		goto IL_0165;
	}

IL_00f0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		bool L_27 = m559(NULL, 0, &m559_MI);
		if (L_27)
		{
			goto IL_00a1;
		}
	}
	{
		t73 * L_28 = (__this->f8);
		t75 * L_29 = (L_28->f8);
		t92 * L_30 = m552(L_29, &m552_MI);
		bool L_31 = m406(NULL, L_30, &m406_MI);
		if (!L_31)
		{
			goto IL_015c;
		}
	}
	{
		t73 * L_32 = (__this->f8);
		t75 * L_33 = (L_32->f8);
		t92 * L_34 = m552(L_33, &m552_MI);
		float L_35 = (__this->f0);
		m555(L_34, L_35, &m555_MI);
		t73 * L_36 = (__this->f8);
		t75 * L_37 = (L_36->f8);
		t92 * L_38 = m552(L_37, &m552_MI);
		float L_39 = (__this->f1);
		m556(L_38, L_39, &m556_MI);
		t73 * L_40 = (__this->f8);
		t75 * L_41 = (L_40->f8);
		m560(L_41, (t92 *)NULL, &m560_MI);
	}

IL_015c:
	{
		__this->f5 = (-1);
	}

IL_0163:
	{
		return 0;
	}

IL_0165:
	{
		return 1;
	}
	// Dead block : IL_0167: ldloc.1
}
extern MethodInfo m200_MI;
extern "C" void m200 (t72 * __this, MethodInfo* method)
{
	{
		__this->f5 = (-1);
		return;
	}
}
extern MethodInfo m201_MI;
extern "C" void m201 (t72 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t171.h"
extern TypeInfo t164_TI;
#include "t75MD.h"
extern MethodInfo m562_MI;
extern MethodInfo m563_MI;
extern MethodInfo m564_MI;
extern MethodInfo m565_MI;
extern MethodInfo m566_MI;
extern MethodInfo m567_MI;
extern MethodInfo m568_MI;
extern MethodInfo m569_MI;
extern MethodInfo m570_MI;
extern MethodInfo m571_MI;
extern MethodInfo m572_MI;
extern MethodInfo m573_MI;
extern MethodInfo m574_MI;
struct t59;
extern "C" t92 * m575 (t59 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t59;
extern "C" t75 * m576 (t59 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t133;
#define m577(__this, method) (( t39 * (*) (t133 *, MethodInfo*))m395_gshared)(__this, method)
extern Il2CppGenericMethod m575_GM;
extern Il2CppGenericMethod m576_GM;
extern Il2CppGenericMethod m577_GM;


extern MethodInfo m202_MI;
extern "C" void m202 (t73 * __this, MethodInfo* method)
{
	{
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m203_MI;
extern MethodInfo* m575_MI_var;
extern MethodInfo* m576_MI_var;
extern "C" void m203 (t73 * __this, MethodInfo* method)
{
	static bool m203_init;
	if (!m203_init)
	{
		m575_MI_var = il2cpp_codegen_genericmethod_get_method(&m575_GM);
		m576_MI_var = il2cpp_codegen_genericmethod_get_method(&m576_GM);
		m203_init = true;
	}
	t39 * V_0 = {0};
	t164  V_1 = {0};
	t59 * V_2 = {0};
	t92 * V_3 = {0};
	t74  V_4 = {0};
	t74  V_5 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		bool L_0 = m562(NULL, 0, &m562_MI);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		t39 * L_1 = m205(__this, &m205_MI);
		V_0 = L_1;
		Initobj (InitializedTypeInfo(&t164_TI), (&V_1));
		t39 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		t13  L_3 = m380(NULL, &m380_MI);
		t74  L_4 = m557(L_2, L_3, &m557_MI);
		V_4 = L_4;
		t13  L_5 = m563((&V_4), &m563_MI);
		t39 * L_6 = V_0;
		t13  L_7 = m380(NULL, &m380_MI);
		t74  L_8 = m557(L_6, L_7, &m557_MI);
		V_5 = L_8;
		t13  L_9 = m564((&V_5), &m564_MI);
		bool L_10 = m565(NULL, L_5, L_9, (&V_1), (100.0f), ((int32_t)-5), &m565_MI);
		if (L_10)
		{
			goto IL_0057;
		}
	}
	{
		return;
	}

IL_0057:
	{
		t92 * L_11 = m566((&V_1), &m566_MI);
		bool L_12 = m406(NULL, L_11, &m406_MI);
		if (!L_12)
		{
			goto IL_0079;
		}
	}
	{
		t92 * L_13 = m566((&V_1), &m566_MI);
		bool L_14 = m567(L_13, &m567_MI);
		if (!L_14)
		{
			goto IL_007a;
		}
	}

IL_0079:
	{
		return;
	}

IL_007a:
	{
		t75 * L_15 = (__this->f8);
		bool L_16 = m406(NULL, L_15, &m406_MI);
		if (L_16)
		{
			goto IL_00af;
		}
	}
	{
		t59 * L_17 = (t59 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t59_TI));
		m359(L_17, (t2*) &_stringLiteral34, &m359_MI);
		V_2 = L_17;
		t59 * L_18 = V_2;
		t92 * L_19 = m575(L_18, m575_MI_var);
		V_3 = L_19;
		t59 * L_20 = V_2;
		t75 * L_21 = m576(L_20, m576_MI_var);
		__this->f8 = L_21;
		t92 * L_22 = V_3;
		m568(L_22, 1, &m568_MI);
	}

IL_00af:
	{
		t75 * L_23 = (__this->f8);
		t45 * L_24 = m350(L_23, &m350_MI);
		t13  L_25 = m543((&V_1), &m543_MI);
		m358(L_24, L_25, &m358_MI);
		t75 * L_26 = (__this->f8);
		t13  L_27 = m354(NULL, &m354_MI);
		m569(L_26, L_27, &m569_MI);
		t75 * L_28 = (__this->f8);
		m570(L_28, (50.0f), &m570_MI);
		t75 * L_29 = (__this->f8);
		m571(L_29, (5.0f), &m571_MI);
		t75 * L_30 = (__this->f8);
		m572(L_30, (0.2f), &m572_MI);
		t75 * L_31 = (__this->f8);
		t92 * L_32 = m566((&V_1), &m566_MI);
		m560(L_31, L_32, &m560_MI);
		float L_33 = m573((&V_1), &m573_MI);
		float L_34 = L_33;
		t9 * L_35 = Box(InitializedTypeInfo(&t123_TI), &L_34);
		m574(__this, (t2*) &_stringLiteral35, L_35, &m574_MI);
		return;
	}
}
extern MethodInfo m204_MI;
extern "C" t9 * m204 (t73 * __this, float p0, MethodInfo* method)
{
	t72 * V_0 = {0};
	{
		t72 * L_0 = (t72 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t72_TI));
		m196(L_0, &m196_MI);
		V_0 = L_0;
		t72 * L_1 = V_0;
		float L_2 = p0;
		L_1->f4 = L_2;
		t72 * L_3 = V_0;
		float L_4 = p0;
		L_3->f7 = L_4;
		t72 * L_5 = V_0;
		L_5->f8 = __this;
		t72 * L_6 = V_0;
		return L_6;
	}
}
extern MethodInfo* m577_MI_var;
extern "C" t39 * m205 (t73 * __this, MethodInfo* method)
{
	static bool m205_init;
	if (!m205_init)
	{
		m577_MI_var = il2cpp_codegen_genericmethod_get_method(&m577_GM);
		m205_init = true;
	}
	{
		t39 * L_0 = m577(__this, m577_MI_var);
		bool L_1 = m406(NULL, L_0, &m406_MI);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		t39 * L_2 = m577(__this, m577_MI_var);
		return L_2;
	}

IL_0017:
	{
		t39 * L_3 = m528(NULL, &m528_MI);
		return L_3;
	}
}
#include "t77.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t77_TI;
#include "t77MD.h"

#include "t78.h"
#include "t78MD.h"
extern MethodInfo m578_MI;
extern MethodInfo m579_MI;
extern MethodInfo m580_MI;
extern MethodInfo m581_MI;
extern MethodInfo m582_MI;
extern MethodInfo m583_MI;
extern MethodInfo m584_MI;
extern MethodInfo m585_MI;
extern MethodInfo m586_MI;
extern MethodInfo m587_MI;
extern MethodInfo m588_MI;


extern MethodInfo m206_MI;
extern "C" void m206 (t77 * __this, MethodInfo* method)
{
	{
		__this->f3 = (10.0f);
		__this->f4 = (80.0f);
		__this->f5 = (1.0f);
		__this->f6 = (1000.0f);
		__this->f7 = (10000.0f);
		__this->f8 = (0.1f);
		__this->f9 = (1.0f);
		__this->f12 = (1.0f);
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m207_MI;
extern "C" void m207 (t77 * __this, MethodInfo* method)
{
	{
		t78 * L_0 = (__this->f2);
		float L_1 = m578(L_0, &m578_MI);
		__this->f12 = L_1;
		return;
	}
}
extern MethodInfo m208_MI;
extern "C" void m208 (t77 * __this, MethodInfo* method)
{
	t74  V_0 = {0};
	t164  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	t13  V_4 = {0};
	{
		t39 * L_0 = m528(NULL, &m528_MI);
		t45 * L_1 = m350(L_0, &m350_MI);
		t13  L_2 = m351(L_1, &m351_MI);
		t13  L_3 = m579(NULL, &m579_MI);
		t13  L_4 = m580(NULL, L_3, &m580_MI);
		m581((&V_0), L_2, L_4, &m581_MI);
		t45 * L_5 = m350(__this, &m350_MI);
		t13  L_6 = m351(L_5, &m351_MI);
		V_4 = L_6;
		float L_7 = ((&V_4)->f2);
		V_2 = L_7;
		t74  L_8 = V_0;
		bool L_9 = m582(NULL, L_8, (&V_1), &m582_MI);
		if (!L_9)
		{
			goto IL_004a;
		}
	}
	{
		float L_10 = m573((&V_1), &m573_MI);
		V_2 = L_10;
	}

IL_004a:
	{
		float L_11 = V_2;
		float L_12 = (__this->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_13 = fabsf(((float)((float)L_11-(float)L_12)));
		if ((!(((float)L_13) > ((float)(1.0f)))))
		{
			goto IL_007f;
		}
	}
	{
		float L_14 = (__this->f10);
		float L_15 = V_2;
		float* L_16 = &(__this->f11);
		float L_17 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_18 = m584(NULL, L_14, L_15, L_16, L_17, &m584_MI);
		__this->f10 = L_18;
	}

IL_007f:
	{
		float L_19 = (__this->f3);
		float L_20 = (__this->f6);
		float L_21 = (__this->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_22 = m384(NULL, L_19, L_20, L_21, &m384_MI);
		V_3 = L_22;
		float L_23 = (__this->f4);
		float L_24 = (__this->f7);
		float L_25 = V_3;
		float L_26 = m585(NULL, L_23, L_24, L_25, &m585_MI);
		m586(NULL, L_26, &m586_MI);
		t78 * L_27 = (__this->f2);
		float L_28 = (__this->f5);
		float L_29 = (__this->f8);
		float L_30 = V_3;
		float L_31 = V_3;
		float L_32 = m585(NULL, L_28, L_29, ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(1.0f)-(float)L_30))*(float)((float)((float)(1.0f)-(float)L_31)))))), &m585_MI);
		m587(L_27, L_32, &m587_MI);
		t78 * L_33 = (__this->f2);
		float L_34 = (__this->f12);
		float L_35 = V_3;
		float L_36 = m585(NULL, L_34, (0.0f), L_35, &m585_MI);
		m588(L_33, L_36, &m588_MI);
		return;
	}
}
#include "t79.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t79_TI;
#include "t79MD.h"

#include "t80.h"
#include "t172.h"
extern TypeInfo t80_TI;
extern TypeInfo t172_TI;
#include "t172MD.h"
extern MethodInfo m589_MI;


extern MethodInfo m209_MI;
extern "C" void m209 (t79 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m210_MI;
extern "C" t9 * m210 (t79 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m211_MI;
extern "C" t9 * m211 (t79 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m212_MI;
extern "C" bool m212 (t79 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_00e9;
	}

IL_0021:
	{
		t80 * L_2 = (__this->f3);
		t39 * L_3 = (L_2->f0);
		float L_4 = m504(L_3, &m504_MI);
		t80 * L_5 = (__this->f3);
		float L_6 = (L_5->f1);
		t80 * L_7 = (__this->f3);
		float L_8 = (L_7->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_9 = fabsf(((float)((float)((float)((float)L_4-(float)L_6))/(float)L_8)));
		__this->f0 = L_9;
		goto IL_00cc;
	}

IL_0059:
	{
		t80 * L_10 = (__this->f3);
		t39 * L_11 = (L_10->f0);
		t80 * L_12 = (__this->f3);
		float L_13 = (L_12->f1);
		t80 * L_14 = (__this->f3);
		t71 * L_15 = (L_14->f5);
		float L_16 = (__this->f0);
		t80 * L_17 = (__this->f3);
		float L_18 = (L_17->f3);
		float L_19 = m551(L_15, ((float)((float)L_16/(float)L_18)), &m551_MI);
		t80 * L_20 = (__this->f3);
		float L_21 = (L_20->f2);
		m505(L_11, ((float)((float)L_13+(float)((float)((float)L_19*(float)L_21)))), &m505_MI);
		float L_22 = (__this->f0);
		float L_23 = m334(NULL, &m334_MI);
		__this->f0 = ((float)((float)L_22+(float)L_23));
		t172 * L_24 = (t172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t172_TI));
		m589(L_24, &m589_MI);
		__this->f2 = L_24;
		__this->f1 = 1;
		goto IL_00eb;
	}

IL_00cc:
	{
		float L_25 = (__this->f0);
		t80 * L_26 = (__this->f3);
		float L_27 = (L_26->f3);
		if ((((float)L_25) < ((float)L_27)))
		{
			goto IL_0059;
		}
	}
	{
		__this->f1 = (-1);
	}

IL_00e9:
	{
		return 0;
	}

IL_00eb:
	{
		return 1;
	}
	// Dead block : IL_00ed: ldloc.1
}
extern MethodInfo m213_MI;
extern "C" void m213 (t79 * __this, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		return;
	}
}
extern MethodInfo m214_MI;
extern "C" void m214 (t79 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#include "t81.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t81_TI;
#include "t81MD.h"



extern MethodInfo m215_MI;
extern "C" void m215 (t81 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m216_MI;
extern "C" t9 * m216 (t81 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m217_MI;
extern "C" t9 * m217 (t81 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m218_MI;
extern "C" bool m218 (t81 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_00fe;
	}

IL_0021:
	{
		t80 * L_2 = (__this->f3);
		t39 * L_3 = (L_2->f0);
		float L_4 = m504(L_3, &m504_MI);
		t80 * L_5 = (__this->f3);
		float L_6 = (L_5->f1);
		t80 * L_7 = (__this->f3);
		float L_8 = (L_7->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_9 = fabsf(((float)((float)((float)((float)L_4-(float)L_6))/(float)L_8)));
		__this->f0 = L_9;
		goto IL_00cc;
	}

IL_0059:
	{
		t80 * L_10 = (__this->f3);
		t39 * L_11 = (L_10->f0);
		t80 * L_12 = (__this->f3);
		float L_13 = (L_12->f1);
		t80 * L_14 = (__this->f3);
		t71 * L_15 = (L_14->f5);
		float L_16 = (__this->f0);
		t80 * L_17 = (__this->f3);
		float L_18 = (L_17->f4);
		float L_19 = m551(L_15, ((float)((float)L_16/(float)L_18)), &m551_MI);
		t80 * L_20 = (__this->f3);
		float L_21 = (L_20->f2);
		m505(L_11, ((float)((float)L_13+(float)((float)((float)L_19*(float)L_21)))), &m505_MI);
		float L_22 = (__this->f0);
		float L_23 = m334(NULL, &m334_MI);
		__this->f0 = ((float)((float)L_22-(float)L_23));
		t172 * L_24 = (t172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t172_TI));
		m589(L_24, &m589_MI);
		__this->f2 = L_24;
		__this->f1 = 1;
		goto IL_0100;
	}

IL_00cc:
	{
		float L_25 = (__this->f0);
		if ((((float)L_25) > ((float)(0.0f))))
		{
			goto IL_0059;
		}
	}
	{
		t80 * L_26 = (__this->f3);
		t39 * L_27 = (L_26->f0);
		t80 * L_28 = (__this->f3);
		float L_29 = (L_28->f1);
		m505(L_27, L_29, &m505_MI);
		__this->f1 = (-1);
	}

IL_00fe:
	{
		return 0;
	}

IL_0100:
	{
		return 1;
	}
	// Dead block : IL_0102: ldloc.1
}
extern MethodInfo m219_MI;
extern "C" void m219 (t81 * __this, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		return;
	}
}
extern MethodInfo m220_MI;
extern "C" void m220 (t81 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t80MD.h"

extern MethodInfo m223_MI;


extern MethodInfo m221_MI;
extern "C" void m221 (t80 * __this, MethodInfo* method)
{
	{
		__this->f2 = (3.0f);
		__this->f3 = (1.0f);
		__this->f4 = (1.0f);
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m222_MI;
extern "C" void m222 (t80 * __this, t39 * p0, MethodInfo* method)
{
	{
		t39 * L_0 = p0;
		m223(__this, L_0, &m223_MI);
		t39 * L_1 = p0;
		__this->f0 = L_1;
		t39 * L_2 = p0;
		float L_3 = m504(L_2, &m504_MI);
		__this->f1 = L_3;
		return;
	}
}
extern "C" void m223 (t80 * __this, t39 * p0, MethodInfo* method)
{
	{
		t39 * L_0 = p0;
		bool L_1 = m333(NULL, L_0, (t57 *)NULL, &m333_MI);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		t138 * L_2 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_2, (t2*) &_stringLiteral36, &m379_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0017:
	{
		t71 * L_3 = (__this->f5);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		t138 * L_4 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_4, (t2*) &_stringLiteral37, &m379_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m224_MI;
extern "C" void m224 (t80 * __this, t39 * p0, MethodInfo* method)
{
	{
		t39 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m225_MI;
extern "C" t9 * m225 (t80 * __this, MethodInfo* method)
{
	t79 * V_0 = {0};
	{
		t79 * L_0 = (t79 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t79_TI));
		m209(L_0, &m209_MI);
		V_0 = L_0;
		t79 * L_1 = V_0;
		L_1->f3 = __this;
		t79 * L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m226_MI;
extern "C" t9 * m226 (t80 * __this, MethodInfo* method)
{
	t81 * V_0 = {0};
	{
		t81 * L_0 = (t81 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t81_TI));
		m215(L_0, &m215_MI);
		V_0 = L_0;
		t81 * L_1 = V_0;
		L_1->f3 = __this;
		t81 * L_2 = V_0;
		return L_2;
	}
}
#include "t82.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t82_TI;
#include "t82MD.h"

#include "t83.h"
#include "t83MD.h"
extern MethodInfo m590_MI;
extern MethodInfo m591_MI;
struct t133;
#define m592(__this, method) (( t83 * (*) (t133 *, MethodInfo*))m395_gshared)(__this, method)
extern Il2CppGenericMethod m592_GM;


extern MethodInfo m227_MI;
extern "C" void m227 (t82 * __this, MethodInfo* method)
{
	{
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m228_MI;
extern MethodInfo* m592_MI_var;
extern "C" void m228 (t82 * __this, MethodInfo* method)
{
	static bool m228_init;
	if (!m228_init)
	{
		m592_MI_var = il2cpp_codegen_genericmethod_get_method(&m592_GM);
		m228_init = true;
	}
	{
		float L_0 = m539(NULL, &m539_MI);
		__this->f5 = ((float)((float)L_0+(float)(0.5f)));
		t83 * L_1 = m592(__this, m592_MI_var);
		__this->f7 = L_1;
		return;
	}
}
extern MethodInfo m229_MI;
extern "C" void m229 (t82 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		__this->f4 = ((int32_t)((int32_t)L_0+(int32_t)1));
		float L_1 = m539(NULL, &m539_MI);
		float L_2 = (__this->f5);
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_3 = (__this->f4);
		__this->f6 = (((int32_t)((float)((float)(((float)L_3))/(float)(0.5f)))));
		__this->f4 = 0;
		float L_4 = (__this->f5);
		__this->f5 = ((float)((float)L_4+(float)(0.5f)));
		t83 * L_5 = (__this->f7);
		int32_t L_6 = (__this->f6);
		int32_t L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t125_TI), &L_7);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_9 = m590(NULL, (t2*) &_stringLiteral38, L_8, &m590_MI);
		m591(L_5, L_9, &m591_MI);
	}

IL_006b:
	{
		return;
	}
}
#include "t84.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t84_TI;
#include "t84MD.h"



extern MethodInfo m230_MI;
extern "C" void m230 (t84 * __this, MethodInfo* method)
{
	{
		t13  L_0 = {0};
		m357(&L_0, (0.0f), (7.5f), (0.0f), &m357_MI);
		__this->f3 = L_0;
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m231_MI;
extern "C" void m231 (t84 * __this, MethodInfo* method)
{
	{
		t45 * L_0 = m350(__this, &m350_MI);
		t45 * L_1 = (__this->f2);
		t13  L_2 = m351(L_1, &m351_MI);
		t13  L_3 = (__this->f3);
		t13  L_4 = m476(NULL, L_2, L_3, &m476_MI);
		m358(L_0, L_4, &m358_MI);
		return;
	}
}
#include "t85.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t85_TI;
#include "t85MD.h"

#include "t173.h"
#include "t174MD.h"
extern MethodInfo m593_MI;
extern MethodInfo m594_MI;


extern MethodInfo m232_MI;
extern "C" void m232 (t85 * __this, MethodInfo* method)
{
	{
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m233_MI;
extern "C" void m233 (t85 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		bool L_0 = m49(NULL, (t2*) &_stringLiteral39, &m49_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t2* L_1 = m593(NULL, &m593_MI);
		m594(NULL, L_1, &m594_MI);
	}

IL_001a:
	{
		return;
	}
}
#include "t86.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t86_TI;
#include "t86MD.h"

#include "t87.h"
#include "t175.h"
extern TypeInfo t87_TI;
extern TypeInfo t175_TI;
#include "t175MD.h"
extern MethodInfo m595_MI;


extern MethodInfo m234_MI;
extern "C" void m234 (t86 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m235_MI;
extern "C" t9 * m235 (t86 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m236_MI;
extern "C" t9 * m236 (t86 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m237_MI;
extern "C" bool m237 (t86 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_0090;
		}
		if (L_1 == 2)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_013e;
	}

IL_0025:
	{
		__this->f0 = (0.0f);
		goto IL_0090;
	}

IL_0035:
	{
		t87 * L_2 = (__this->f3);
		t87 * L_3 = (__this->f3);
		float L_4 = (L_3->f1);
		float L_5 = (__this->f0);
		t87 * L_6 = (__this->f3);
		float L_7 = (L_6->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_8 = m585(NULL, (0.0f), L_4, ((float)((float)L_5/(float)L_7)), &m585_MI);
		L_2->f2 = L_8;
		float L_9 = (__this->f0);
		float L_10 = m334(NULL, &m334_MI);
		__this->f0 = ((float)((float)L_9+(float)L_10));
		t175 * L_11 = (t175 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t175_TI));
		m595(L_11, &m595_MI);
		__this->f2 = L_11;
		__this->f1 = 1;
		goto IL_0140;
	}

IL_0090:
	{
		float L_12 = (__this->f0);
		t87 * L_13 = (__this->f3);
		float L_14 = (L_13->f0);
		if ((((float)L_12) < ((float)L_14)))
		{
			goto IL_0035;
		}
	}
	{
		__this->f0 = (0.0f);
		goto IL_0111;
	}

IL_00b6:
	{
		t87 * L_15 = (__this->f3);
		t87 * L_16 = (__this->f3);
		float L_17 = (L_16->f1);
		float L_18 = (__this->f0);
		t87 * L_19 = (__this->f3);
		float L_20 = (L_19->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_21 = m585(NULL, L_17, (0.0f), ((float)((float)L_18/(float)L_20)), &m585_MI);
		L_15->f2 = L_21;
		float L_22 = (__this->f0);
		float L_23 = m334(NULL, &m334_MI);
		__this->f0 = ((float)((float)L_22+(float)L_23));
		t175 * L_24 = (t175 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t175_TI));
		m595(L_24, &m595_MI);
		__this->f2 = L_24;
		__this->f1 = 2;
		goto IL_0140;
	}

IL_0111:
	{
		float L_25 = (__this->f0);
		t87 * L_26 = (__this->f3);
		float L_27 = (L_26->f0);
		if ((((float)L_25) < ((float)L_27)))
		{
			goto IL_00b6;
		}
	}
	{
		t87 * L_28 = (__this->f3);
		L_28->f2 = (0.0f);
		__this->f1 = (-1);
	}

IL_013e:
	{
		return 0;
	}

IL_0140:
	{
		return 1;
	}
	// Dead block : IL_0142: ldloc.1
}
extern MethodInfo m238_MI;
extern "C" void m238 (t86 * __this, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		return;
	}
}
extern MethodInfo m239_MI;
extern "C" void m239 (t86 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t87MD.h"



extern MethodInfo m240_MI;
extern "C" void m240 (t87 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m241_MI;
extern "C" float m241 (t87 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m242_MI;
extern "C" t9 * m242 (t87 * __this, MethodInfo* method)
{
	t86 * V_0 = {0};
	{
		t86 * L_0 = (t86 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t86_TI));
		m234(L_0, &m234_MI);
		V_0 = L_0;
		t86 * L_1 = V_0;
		L_1->f3 = __this;
		t86 * L_2 = V_0;
		return L_2;
	}
}
#include "t88.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t88_TI;
#include "t88MD.h"

#include "t176.h"
#include "t90.h"
#include "t91.h"
extern TypeInfo t176_TI;
extern TypeInfo t90_TI;
extern TypeInfo t91_TI;
#include "t176MD.h"
#include "t91MD.h"
extern Il2CppType t91_0_0_0;
extern MethodInfo m596_MI;
extern MethodInfo m597_MI;
extern MethodInfo m598_MI;
extern MethodInfo m599_MI;
extern MethodInfo m600_MI;
extern MethodInfo m601_MI;
struct t133;
struct t133;
extern "C" t158* m603_gshared (t133 * __this, MethodInfo* method);
#define m603(__this, method) (( t158* (*) (t133 *, MethodInfo*))m603_gshared)(__this, method)
#define m602(__this, method) (( t89* (*) (t133 *, MethodInfo*))m603_gshared)(__this, method)
extern Il2CppGenericMethod m602_GM;
extern Il2CppGenericMethod m597_GM;


extern MethodInfo m243_MI;
extern "C" void m243 (t88 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m244_MI;
extern "C" t9 * m244 (t88 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m245_MI;
extern "C" t9 * m245 (t88 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m246_MI;
extern MethodInfo* m602_MI_var;
extern MethodInfo* m597_MI_var;
extern "C" bool m246 (t88 * __this, MethodInfo* method)
{
	static bool m246_init;
	if (!m246_init)
	{
		m602_MI_var = il2cpp_codegen_genericmethod_get_method(&m602_GM);
		m597_MI_var = il2cpp_codegen_genericmethod_get_method(&m597_GM);
		m246_init = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f4);
		V_0 = L_0;
		__this->f4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0142;
	}

IL_0021:
	{
		float L_2 = (__this->f0);
		t176 * L_3 = (t176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t176_TI));
		m596(L_3, L_2, &m596_MI);
		__this->f5 = L_3;
		__this->f4 = 1;
		goto IL_0144;
	}

IL_003e:
	{
		t90 * L_4 = (__this->f7);
		t89* L_5 = m602(L_4, m602_MI_var);
		__this->f1 = L_5;
		__this->f2 = 0;
		goto IL_00a3;
	}

IL_005b:
	{
		t89* L_6 = (__this->f1);
		int32_t L_7 = (__this->f2);
		int32_t L_8 = L_7;
		__this->f3 = (*(t45 **)(t45 **)SZArrayLdElema(L_6, L_8));
		t90 * L_9 = (__this->f7);
		t91 * L_10 = (L_9->f4);
		t45 * L_11 = (__this->f3);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t45 * >::Invoke(m597_MI_var, L_10, L_11);
		if (L_12)
		{
			goto IL_0095;
		}
	}
	{
		t45 * L_13 = (__this->f3);
		m598(L_13, (t45 *)NULL, &m598_MI);
	}

IL_0095:
	{
		int32_t L_14 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_00a3:
	{
		int32_t L_15 = (__this->f2);
		t89* L_16 = (__this->f1);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t121 *)L_16)->max_length))))))
		{
			goto IL_005b;
		}
	}
	{
		t90 * L_17 = (__this->f7);
		t45 * L_18 = m350(L_17, &m350_MI);
		t90 * L_19 = (__this->f7);
		t13  L_20 = (L_19->f2);
		m358(L_18, L_20, &m358_MI);
		t90 * L_21 = (__this->f7);
		t45 * L_22 = m350(L_21, &m350_MI);
		t90 * L_23 = (__this->f7);
		t93  L_24 = (L_23->f3);
		m491(L_22, L_24, &m491_MI);
		t90 * L_25 = (__this->f7);
		t92 * L_26 = (L_25->f5);
		bool L_27 = m406(NULL, L_26, &m406_MI);
		if (!L_27)
		{
			goto IL_012b;
		}
	}
	{
		t90 * L_28 = (__this->f7);
		t92 * L_29 = (L_28->f5);
		t13  L_30 = m354(NULL, &m354_MI);
		m599(L_29, L_30, &m599_MI);
		t90 * L_31 = (__this->f7);
		t92 * L_32 = (L_31->f5);
		t13  L_33 = m354(NULL, &m354_MI);
		m600(L_32, L_33, &m600_MI);
	}

IL_012b:
	{
		t90 * L_34 = (__this->f7);
		m601(L_34, (t2*) &_stringLiteral40, &m601_MI);
		__this->f4 = (-1);
	}

IL_0142:
	{
		return 0;
	}

IL_0144:
	{
		return 1;
	}
	// Dead block : IL_0146: ldloc.1
}
extern MethodInfo m247_MI;
extern "C" void m247 (t88 * __this, MethodInfo* method)
{
	{
		__this->f4 = (-1);
		return;
	}
}
extern MethodInfo m248_MI;
extern "C" void m248 (t88 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t90MD.h"

extern MethodInfo m604_MI;
extern MethodInfo m252_MI;
extern MethodInfo m605_MI;
struct t133;
#define m606(__this, method) (( t92 * (*) (t133 *, MethodInfo*))m395_gshared)(__this, method)
extern Il2CppGenericMethod m604_GM;
extern Il2CppGenericMethod m606_GM;


extern MethodInfo m249_MI;
extern "C" void m249 (t90 * __this, MethodInfo* method)
{
	{
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m250_MI;
extern TypeInfo* t91_TI_var;
extern MethodInfo* m602_MI_var;
extern MethodInfo* m604_MI_var;
extern MethodInfo* m606_MI_var;
extern "C" void m250 (t90 * __this, MethodInfo* method)
{
	static bool m250_init;
	if (!m250_init)
	{
		t91_TI_var = il2cpp_codegen_class_from_type(&t91_0_0_0);
		m602_MI_var = il2cpp_codegen_genericmethod_get_method(&m602_GM);
		m604_MI_var = il2cpp_codegen_genericmethod_get_method(&m604_GM);
		m606_MI_var = il2cpp_codegen_genericmethod_get_method(&m606_GM);
		m250_init = true;
	}
	{
		t89* L_0 = m602(__this, m602_MI_var);
		IL2CPP_RUNTIME_CLASS_INIT(t91_TI_var);
		t91 * L_1 = (t91 *)il2cpp_codegen_object_new (t91_TI_var);
		m604(L_1, (t9*)(t9*)L_0, m604_MI_var);
		__this->f4 = L_1;
		t45 * L_2 = m350(__this, &m350_MI);
		t13  L_3 = m351(L_2, &m351_MI);
		__this->f2 = L_3;
		t45 * L_4 = m350(__this, &m350_MI);
		t93  L_5 = m490(L_4, &m490_MI);
		__this->f3 = L_5;
		t92 * L_6 = m606(__this, m606_MI_var);
		__this->f5 = L_6;
		return;
	}
}
extern MethodInfo m251_MI;
extern "C" void m251 (t90 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		t9 * L_1 = m252(__this, L_0, &m252_MI);
		m605(__this, L_1, &m605_MI);
		return;
	}
}
extern "C" t9 * m252 (t90 * __this, float p0, MethodInfo* method)
{
	t88 * V_0 = {0};
	{
		t88 * L_0 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m243(L_0, &m243_MI);
		V_0 = L_0;
		t88 * L_1 = V_0;
		float L_2 = p0;
		L_1->f0 = L_2;
		t88 * L_3 = V_0;
		float L_4 = p0;
		L_3->f6 = L_4;
		t88 * L_5 = V_0;
		L_5->f7 = __this;
		t88 * L_6 = V_0;
		return L_6;
	}
}
#include "t94.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t94_TI;
#include "t94MD.h"

#include "t97.h"
#include "t96.h"
#include "t177.h"
extern TypeInfo t97_TI;
#include "t96MD.h"
#include "t178MD.h"
extern MethodInfo m607_MI;
extern MethodInfo m608_MI;
extern MethodInfo m609_MI;
extern MethodInfo m610_MI;
extern MethodInfo m611_MI;
extern MethodInfo m612_MI;
extern MethodInfo m613_MI;
extern MethodInfo m614_MI;
struct t133;
#define m615(__this, method) (( t95* (*) (t133 *, MethodInfo*))m603_gshared)(__this, method)
extern Il2CppGenericMethod m615_GM;


extern MethodInfo m253_MI;
extern "C" void m253 (t94 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m254_MI;
extern "C" t9 * m254 (t94 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m255_MI;
extern "C" t9 * m255 (t94 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m256_MI;
extern MethodInfo* m615_MI_var;
extern "C" bool m256 (t94 * __this, MethodInfo* method)
{
	static bool m256_init;
	if (!m256_init)
	{
		m615_MI_var = il2cpp_codegen_genericmethod_get_method(&m615_GM);
		m256_init = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f8);
		V_0 = L_0;
		__this->f8 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_00e7;
		}
		if (L_1 == 2)
		{
			goto IL_01ac;
		}
	}
	{
		goto IL_01c3;
	}

IL_0025:
	{
		t97 * L_2 = (__this->f10);
		t95* L_3 = m615(L_2, m615_MI_var);
		__this->f0 = L_3;
		t95* L_4 = (__this->f0);
		__this->f1 = L_4;
		__this->f2 = 0;
		goto IL_0095;
	}

IL_004e:
	{
		t95* L_5 = (__this->f1);
		int32_t L_6 = (__this->f2);
		int32_t L_7 = L_6;
		__this->f3 = (*(t96 **)(t96 **)SZArrayLdElema(L_5, L_7));
		t97 * L_8 = (__this->f10);
		t96 * L_9 = (__this->f3);
		float L_10 = m607(L_9, &m607_MI);
		t97 * L_11 = (__this->f10);
		float L_12 = (L_11->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_13 = m608(NULL, L_10, L_12, &m608_MI);
		L_8->f4 = L_13;
		int32_t L_14 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0095:
	{
		int32_t L_15 = (__this->f2);
		t95* L_16 = (__this->f1);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t121 *)L_16)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		float L_17 = m410(NULL, &m410_MI);
		t97 * L_18 = (__this->f10);
		float L_19 = (L_18->f2);
		t97 * L_20 = (__this->f10);
		float L_21 = (L_20->f3);
		float L_22 = m609(NULL, L_19, L_21, &m609_MI);
		__this->f4 = ((float)((float)L_17+(float)L_22));
		goto IL_00e7;
	}

IL_00d4:
	{
		__this->f9 = NULL;
		__this->f8 = 1;
		goto IL_01c5;
	}

IL_00e7:
	{
		float L_23 = m410(NULL, &m410_MI);
		float L_24 = (__this->f4);
		if ((((float)L_23) < ((float)L_24)))
		{
			goto IL_00d4;
		}
	}
	{
		t97 * L_25 = (__this->f10);
		bool L_26 = (L_25->f5);
		if (L_26)
		{
			goto IL_00d4;
		}
	}
	{
		t97 * L_27 = (__this->f10);
		t2* L_28 = m425(L_27, &m425_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_29 = m610(NULL, (t2*) &_stringLiteral41, L_28, &m610_MI);
		m611(NULL, L_29, &m611_MI);
		t95* L_30 = (__this->f0);
		__this->f5 = L_30;
		__this->f6 = 0;
		goto IL_0166;
	}

IL_0139:
	{
		t95* L_31 = (__this->f5);
		int32_t L_32 = (__this->f6);
		int32_t L_33 = L_32;
		__this->f7 = (*(t96 **)(t96 **)SZArrayLdElema(L_31, L_33));
		t96 * L_34 = (__this->f7);
		m612(L_34, 0, &m612_MI);
		int32_t L_35 = (__this->f6);
		__this->f6 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_0166:
	{
		int32_t L_36 = (__this->f6);
		t95* L_37 = (__this->f5);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)(((t121 *)L_37)->max_length))))))
		{
			goto IL_0139;
		}
	}
	{
		t97 * L_38 = (__this->f10);
		m613(L_38, (t2*) &_stringLiteral42, 1, &m613_MI);
		t97 * L_39 = (__this->f10);
		float L_40 = (L_39->f4);
		t176 * L_41 = (t176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t176_TI));
		m596(L_41, L_40, &m596_MI);
		__this->f9 = L_41;
		__this->f8 = 2;
		goto IL_01c5;
	}

IL_01ac:
	{
		t97 * L_42 = (__this->f10);
		t59 * L_43 = m362(L_42, &m362_MI);
		m614(NULL, L_43, &m614_MI);
		__this->f8 = (-1);
	}

IL_01c3:
	{
		return 0;
	}

IL_01c5:
	{
		return 1;
	}
	// Dead block : IL_01c7: ldloc.1
}
extern MethodInfo m257_MI;
extern "C" void m257 (t94 * __this, MethodInfo* method)
{
	{
		__this->f8 = (-1);
		return;
	}
}
extern MethodInfo m258_MI;
extern "C" void m258 (t94 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t97MD.h"



extern MethodInfo m259_MI;
extern "C" void m259 (t97 * __this, MethodInfo* method)
{
	{
		__this->f2 = (8.0f);
		__this->f3 = (10.0f);
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m260_MI;
extern "C" t9 * m260 (t97 * __this, MethodInfo* method)
{
	t94 * V_0 = {0};
	{
		t94 * L_0 = (t94 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t94_TI));
		m253(L_0, &m253_MI);
		V_0 = L_0;
		t94 * L_1 = V_0;
		L_1->f10 = __this;
		t94 * L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m261_MI;
extern "C" void m261 (t97 * __this, MethodInfo* method)
{
	{
		__this->f5 = 1;
		return;
	}
}
#include "t98.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t98_TI;
#include "t98MD.h"



#include "t99.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t99_TI;
#include "t99MD.h"

#include "t4.h"
extern TypeInfo t100_TI;
extern TypeInfo t101_TI;
extern TypeInfo t4_TI;
extern Il2CppType t100_0_0_0;
extern Il2CppType t101_0_0_0;
extern MethodInfo m264_MI;
extern MethodInfo m265_MI;


extern MethodInfo m262_MI;
extern TypeInfo* t100_TI_var;
extern TypeInfo* t101_TI_var;
extern "C" void m262 (t99 * __this, MethodInfo* method)
{
	static bool m262_init;
	if (!m262_init)
	{
		t100_TI_var = il2cpp_codegen_class_from_type(&t100_0_0_0);
		t101_TI_var = il2cpp_codegen_class_from_type(&t101_0_0_0);
		m262_init = true;
	}
	{
		__this->f3 = ((t100*)SZArrayNew(t100_TI_var, 0));
		__this->f4 = ((t101*)SZArrayNew(t101_TI_var, 0));
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m263_MI;
extern "C" void m263 (t99 * __this, MethodInfo* method)
{
	{
		m264(__this, &m264_MI);
		return;
	}
}
extern "C" void m264 (t99 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		m265(__this, 0, &m265_MI);
		goto IL_001f;
	}

IL_0018:
	{
		m265(__this, 1, &m265_MI);
	}

IL_001f:
	{
		return;
	}
}
extern "C" void m265 (t99 * __this, bool p0, MethodInfo* method)
{
	t59 * V_0 = {0};
	t100* V_1 = {0};
	int32_t V_2 = 0;
	t45 * V_3 = {0};
	t9 * V_4 = {0};
	t4 * V_5 = {0};
	t101* V_6 = {0};
	int32_t V_7 = 0;
	t9 * V_8 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t100* L_0 = (__this->f3);
		if ((((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		t100* L_1 = (__this->f3);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0037;
	}

IL_001c:
	{
		t100* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_0 = (*(t59 **)(t59 **)SZArrayLdElema(L_2, L_4));
		t59 * L_5 = V_0;
		bool L_6 = m332(NULL, L_5, (t57 *)NULL, &m332_MI);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		t59 * L_7 = V_0;
		bool L_8 = p0;
		m363(L_7, L_8, &m363_MI);
	}

IL_0033:
	{
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_10 = V_2;
		t100* L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((t121 *)L_11)->max_length))))))
		{
			goto IL_001c;
		}
	}

IL_0040:
	{
		bool L_12 = (__this->f5);
		if (!L_12)
		{
			goto IL_009d;
		}
	}
	{
		t45 * L_13 = m350(__this, &m350_MI);
		t9 * L_14 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m360_MI, L_13);
		V_4 = L_14;
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0076;
		}

IL_005d:
		{
			t9 * L_15 = V_4;
			t9 * L_16 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_15);
			V_3 = ((t45 *)Castclass(L_16, InitializedTypeInfo(&t45_TI)));
			t45 * L_17 = V_3;
			t59 * L_18 = m362(L_17, &m362_MI);
			bool L_19 = p0;
			m363(L_18, L_19, &m363_MI);
		}

IL_0076:
		{
			t9 * L_20 = V_4;
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_20);
			if (L_21)
			{
				goto IL_005d;
			}
		}

IL_0082:
		{
			IL2CPP_LEAVE(0x9D, FINALLY_0087);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0087;
	}

FINALLY_0087:
	{ // begin finally (depth: 1)
		{
			t9 * L_22 = V_4;
			V_8 = ((t9 *)IsInst(L_22, InitializedTypeInfo(&t137_TI)));
			t9 * L_23 = V_8;
			if (L_23)
			{
				goto IL_0095;
			}
		}

IL_0094:
		{
			IL2CPP_END_FINALLY(135)
		}

IL_0095:
		{
			t9 * L_24 = V_8;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_24);
			IL2CPP_END_FINALLY(135)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(135)
	{
		IL2CPP_JUMP_TBL(0x9D, IL_009d)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_009d:
	{
		t101* L_25 = (__this->f4);
		if ((((int32_t)(((int32_t)(((t121 *)L_25)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00db;
		}
	}
	{
		t101* L_26 = (__this->f4);
		V_6 = L_26;
		V_7 = 0;
		goto IL_00d0;
	}

IL_00bb:
	{
		t101* L_27 = V_6;
		int32_t L_28 = V_7;
		int32_t L_29 = L_28;
		V_5 = (*(t4 **)(t4 **)SZArrayLdElema(L_27, L_29));
		t4 * L_30 = V_5;
		bool L_31 = p0;
		m437(L_30, L_31, &m437_MI);
		int32_t L_32 = V_7;
		V_7 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00d0:
	{
		int32_t L_33 = V_7;
		t101* L_34 = V_6;
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((t121 *)L_34)->max_length))))))
		{
			goto IL_00bb;
		}
	}

IL_00db:
	{
		return;
	}
}
#include "t102.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t102_TI;
#include "t102MD.h"



extern MethodInfo m266_MI;
extern "C" void m266 (t102 * __this, MethodInfo* method)
{
	{
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m267_MI;
extern "C" void m267 (t102 * __this, MethodInfo* method)
{
	{
		__this->f4 = 0;
		t83 * L_0 = (__this->f2);
		t100* L_1 = (__this->f3);
		int32_t L_2 = (__this->f4);
		int32_t L_3 = L_2;
		t2* L_4 = m425((*(t59 **)(t59 **)SZArrayLdElema(L_1, L_3)), &m425_MI);
		m591(L_0, L_4, &m591_MI);
		return;
	}
}
extern MethodInfo m268_MI;
extern "C" void m268 (t102 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f4);
		t100* L_1 = (__this->f3);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))) < ((int32_t)(((int32_t)(((t121 *)L_1)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0023;
	}

IL_001b:
	{
		int32_t L_2 = (__this->f4);
		G_B3_0 = ((int32_t)((int32_t)L_2+(int32_t)1));
	}

IL_0023:
	{
		V_0 = G_B3_0;
		V_1 = 0;
		goto IL_0040;
	}

IL_002b:
	{
		t100* L_3 = (__this->f3);
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		m363((*(t59 **)(t59 **)SZArrayLdElema(L_3, L_5)), ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0), &m363_MI);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_9 = V_1;
		t100* L_10 = (__this->f3);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((t121 *)L_10)->max_length))))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_11 = V_0;
		__this->f4 = L_11;
		t83 * L_12 = (__this->f2);
		t100* L_13 = (__this->f3);
		int32_t L_14 = (__this->f4);
		int32_t L_15 = L_14;
		t2* L_16 = m425((*(t59 **)(t59 **)SZArrayLdElema(L_13, L_15)), &m425_MI);
		m591(L_12, L_16, &m591_MI);
		return;
	}
}
#include "t103.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t103_TI;
#include "t103MD.h"

#include "t93MD.h"
extern MethodInfo m616_MI;
extern MethodInfo m617_MI;
extern MethodInfo m618_MI;
extern MethodInfo m619_MI;
extern MethodInfo m620_MI;
extern MethodInfo m621_MI;
extern MethodInfo m622_MI;
extern MethodInfo m623_MI;
extern MethodInfo m624_MI;


extern MethodInfo m269_MI;
extern "C" void m269 (t103 * __this, MethodInfo* method)
{
	{
		t13  L_0 = {0};
		m616(&L_0, (70.0f), (70.0f), &m616_MI);
		t28  L_1 = m617(NULL, L_0, &m617_MI);
		__this->f2 = L_1;
		__this->f3 = (10.0f);
		__this->f4 = (0.2f);
		__this->f5 = 1;
		__this->f7 = 1;
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m270_MI;
extern "C" void m270 (t103 * __this, MethodInfo* method)
{
	{
		t45 * L_0 = m350(__this, &m350_MI);
		t93  L_1 = m618(L_0, &m618_MI);
		__this->f11 = L_1;
		return;
	}
}
extern MethodInfo m271_MI;
extern "C" void m271 (t103 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	t13  V_2 = {0};
	t13  V_3 = {0};
	{
		t45 * L_0 = m350(__this, &m350_MI);
		t93  L_1 = (__this->f11);
		m619(L_0, L_1, &m619_MI);
		bool L_2 = (__this->f7);
		if (!L_2)
		{
			goto IL_01f3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t11_TI));
		float L_3 = m45(NULL, (t2*) &_stringLiteral43, &m45_MI);
		V_0 = L_3;
		float L_4 = m45(NULL, (t2*) &_stringLiteral44, &m45_MI);
		V_1 = L_4;
		t13 * L_5 = &(__this->f8);
		float L_6 = (L_5->f2);
		if ((!(((float)L_6) > ((float)(180.0f)))))
		{
			goto IL_0075;
		}
	}
	{
		t13 * L_7 = &(__this->f8);
		t13 * L_8 = L_7;
		float L_9 = (L_8->f2);
		L_8->f2 = ((float)((float)L_9-(float)(360.0f)));
		t13 * L_10 = &(__this->f9);
		t13 * L_11 = L_10;
		float L_12 = (L_11->f2);
		L_11->f2 = ((float)((float)L_12-(float)(360.0f)));
	}

IL_0075:
	{
		t13 * L_13 = &(__this->f8);
		float L_14 = (L_13->f1);
		if ((!(((float)L_14) > ((float)(180.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		t13 * L_15 = &(__this->f8);
		t13 * L_16 = L_15;
		float L_17 = (L_16->f1);
		L_16->f1 = ((float)((float)L_17-(float)(360.0f)));
		t13 * L_18 = &(__this->f9);
		t13 * L_19 = L_18;
		float L_20 = (L_19->f1);
		L_19->f1 = ((float)((float)L_20-(float)(360.0f)));
	}

IL_00b8:
	{
		t13 * L_21 = &(__this->f8);
		float L_22 = (L_21->f2);
		if ((!(((float)L_22) < ((float)(-180.0f)))))
		{
			goto IL_00fb;
		}
	}
	{
		t13 * L_23 = &(__this->f8);
		t13 * L_24 = L_23;
		float L_25 = (L_24->f2);
		L_24->f2 = ((float)((float)L_25+(float)(360.0f)));
		t13 * L_26 = &(__this->f9);
		t13 * L_27 = L_26;
		float L_28 = (L_27->f2);
		L_27->f2 = ((float)((float)L_28+(float)(360.0f)));
	}

IL_00fb:
	{
		t13 * L_29 = &(__this->f8);
		float L_30 = (L_29->f1);
		if ((!(((float)L_30) < ((float)(-180.0f)))))
		{
			goto IL_013e;
		}
	}
	{
		t13 * L_31 = &(__this->f8);
		t13 * L_32 = L_31;
		float L_33 = (L_32->f1);
		L_32->f1 = ((float)((float)L_33+(float)(360.0f)));
		t13 * L_34 = &(__this->f9);
		t13 * L_35 = L_34;
		float L_36 = (L_35->f1);
		L_35->f1 = ((float)((float)L_36+(float)(360.0f)));
	}

IL_013e:
	{
		t13 * L_37 = &(__this->f8);
		t13 * L_38 = L_37;
		float L_39 = (L_38->f2);
		float L_40 = V_0;
		float L_41 = (__this->f3);
		L_38->f2 = ((float)((float)L_39+(float)((float)((float)L_40*(float)L_41))));
		t13 * L_42 = &(__this->f8);
		t13 * L_43 = L_42;
		float L_44 = (L_43->f1);
		float L_45 = V_1;
		float L_46 = (__this->f3);
		L_43->f1 = ((float)((float)L_44+(float)((float)((float)L_45*(float)L_46))));
		t13 * L_47 = &(__this->f8);
		t13 * L_48 = &(__this->f8);
		float L_49 = (L_48->f2);
		t28 * L_50 = &(__this->f2);
		float L_51 = (L_50->f2);
		t28 * L_52 = &(__this->f2);
		float L_53 = (L_52->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_54 = m620(NULL, L_49, ((float)((float)((-L_51))*(float)(0.5f))), ((float)((float)L_53*(float)(0.5f))), &m620_MI);
		L_47->f2 = L_54;
		t13 * L_55 = &(__this->f8);
		t13 * L_56 = &(__this->f8);
		float L_57 = (L_56->f1);
		t28 * L_58 = &(__this->f2);
		float L_59 = (L_58->f1);
		t28 * L_60 = &(__this->f2);
		float L_61 = (L_60->f1);
		float L_62 = m620(NULL, L_57, ((float)((float)((-L_59))*(float)(0.5f))), ((float)((float)L_61*(float)(0.5f))), &m620_MI);
		L_55->f1 = L_62;
		goto IL_0285;
	}

IL_01f3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		t13  L_63 = m380(NULL, &m380_MI);
		V_2 = L_63;
		float L_64 = ((&V_2)->f1);
		V_0 = L_64;
		t13  L_65 = m380(NULL, &m380_MI);
		V_3 = L_65;
		float L_66 = ((&V_3)->f2);
		V_1 = L_66;
		t13 * L_67 = &(__this->f8);
		t28 * L_68 = &(__this->f2);
		float L_69 = (L_68->f2);
		t28 * L_70 = &(__this->f2);
		float L_71 = (L_70->f2);
		float L_72 = V_0;
		int32_t L_73 = m385(NULL, &m385_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_74 = m585(NULL, ((float)((float)((-L_69))*(float)(0.5f))), ((float)((float)L_71*(float)(0.5f))), ((float)((float)L_72/(float)(((float)L_73)))), &m585_MI);
		L_67->f2 = L_74;
		t13 * L_75 = &(__this->f8);
		t28 * L_76 = &(__this->f2);
		float L_77 = (L_76->f1);
		t28 * L_78 = &(__this->f2);
		float L_79 = (L_78->f1);
		float L_80 = V_1;
		int32_t L_81 = m621(NULL, &m621_MI);
		float L_82 = m585(NULL, ((float)((float)((-L_77))*(float)(0.5f))), ((float)((float)L_79*(float)(0.5f))), ((float)((float)L_80/(float)(((float)L_81)))), &m585_MI);
		L_75->f1 = L_82;
	}

IL_0285:
	{
		t13  L_83 = (__this->f9);
		t13  L_84 = (__this->f8);
		t13 * L_85 = &(__this->f10);
		float L_86 = (__this->f4);
		t13  L_87 = m622(NULL, L_83, L_84, L_85, L_86, &m622_MI);
		__this->f9 = L_87;
		t45 * L_88 = m350(__this, &m350_MI);
		t93  L_89 = (__this->f11);
		t13 * L_90 = &(__this->f9);
		float L_91 = (L_90->f1);
		t13 * L_92 = &(__this->f9);
		float L_93 = (L_92->f2);
		t93  L_94 = m623(NULL, ((-L_91)), L_93, (0.0f), &m623_MI);
		t93  L_95 = m624(NULL, L_89, L_94, &m624_MI);
		m619(L_88, L_95, &m619_MI);
		return;
	}
}
#include "t104.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t104_TI;
#include "t104MD.h"

extern MethodInfo m625_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m628_MI;


extern MethodInfo m272_MI;
extern "C" void m272 (t104 * __this, MethodInfo* method)
{
	{
		__this->f3 = (10.0f);
		__this->f4 = (5.0f);
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m273_MI;
extern "C" void m273 (t104 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m274_MI;
extern "C" void m274 (t104 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	t93  V_4 = {0};
	t13  V_5 = {0};
	t13  V_6 = {0};
	t13  V_7 = {0};
	t13  V_8 = {0};
	t13  V_9 = {0};
	t13  V_10 = {0};
	{
		t45 * L_0 = (__this->f2);
		bool L_1 = m406(NULL, L_0, &m406_MI);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		t45 * L_2 = (__this->f2);
		t13  L_3 = m455(L_2, &m455_MI);
		V_5 = L_3;
		float L_4 = ((&V_5)->f2);
		V_0 = L_4;
		t45 * L_5 = (__this->f2);
		t13  L_6 = m351(L_5, &m351_MI);
		V_6 = L_6;
		float L_7 = ((&V_6)->f2);
		float L_8 = (__this->f4);
		V_1 = ((float)((float)L_7+(float)L_8));
		t45 * L_9 = m350(__this, &m350_MI);
		t13  L_10 = m455(L_9, &m455_MI);
		V_7 = L_10;
		float L_11 = ((&V_7)->f2);
		V_2 = L_11;
		t45 * L_12 = m350(__this, &m350_MI);
		t13  L_13 = m351(L_12, &m351_MI);
		V_8 = L_13;
		float L_14 = ((&V_8)->f2);
		V_3 = L_14;
		float L_15 = V_2;
		float L_16 = V_0;
		float L_17 = (__this->f5);
		float L_18 = m334(NULL, &m334_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_19 = m625(NULL, L_15, L_16, ((float)((float)L_17*(float)L_18)), &m625_MI);
		V_2 = L_19;
		float L_20 = V_3;
		float L_21 = V_1;
		float L_22 = (__this->f6);
		float L_23 = m334(NULL, &m334_MI);
		float L_24 = m585(NULL, L_20, L_21, ((float)((float)L_22*(float)L_23)), &m585_MI);
		V_3 = L_24;
		float L_25 = V_2;
		t93  L_26 = m623(NULL, (0.0f), L_25, (0.0f), &m623_MI);
		V_4 = L_26;
		t45 * L_27 = m350(__this, &m350_MI);
		t45 * L_28 = (__this->f2);
		t13  L_29 = m351(L_28, &m351_MI);
		m358(L_27, L_29, &m358_MI);
		t45 * L_30 = m350(__this, &m350_MI);
		t45 * L_31 = L_30;
		t13  L_32 = m351(L_31, &m351_MI);
		t93  L_33 = V_4;
		t13  L_34 = m626(NULL, &m626_MI);
		t13  L_35 = m627(NULL, L_33, L_34, &m627_MI);
		float L_36 = (__this->f3);
		t13  L_37 = m475(NULL, L_35, L_36, &m475_MI);
		t13  L_38 = m352(NULL, L_32, L_37, &m352_MI);
		m358(L_31, L_38, &m358_MI);
		t45 * L_39 = m350(__this, &m350_MI);
		t45 * L_40 = m350(__this, &m350_MI);
		t13  L_41 = m351(L_40, &m351_MI);
		V_9 = L_41;
		float L_42 = ((&V_9)->f1);
		float L_43 = V_3;
		t45 * L_44 = m350(__this, &m350_MI);
		t13  L_45 = m351(L_44, &m351_MI);
		V_10 = L_45;
		float L_46 = ((&V_10)->f3);
		t13  L_47 = {0};
		m357(&L_47, L_42, L_43, L_46, &m357_MI);
		m358(L_39, L_47, &m358_MI);
		t45 * L_48 = m350(__this, &m350_MI);
		t45 * L_49 = (__this->f2);
		m628(L_48, L_49, &m628_MI);
		return;
	}
}
#include "t105.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t105_TI;
#include "t105MD.h"



#include "t106.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t106_TI;
#include "t106MD.h"



extern MethodInfo m275_MI;
extern "C" void m275 (t106 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#include "t107.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t107_TI;
#include "t107MD.h"



extern MethodInfo m276_MI;
extern "C" void m276 (t107 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#include "t109.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t109_TI;
#include "t109MD.h"



extern MethodInfo m277_MI;
extern "C" void m277 (t109 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m278_MI;
extern "C" t9 * m278 (t109 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m279_MI;
extern "C" t9 * m279 (t109 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m280_MI;
extern "C" bool m280 (t109 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_005b;
	}

IL_0021:
	{
		t106 * L_2 = (__this->f0);
		float L_3 = (L_2->f2);
		t176 * L_4 = (t176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t176_TI));
		m596(L_4, L_3, &m596_MI);
		__this->f2 = L_4;
		__this->f1 = 1;
		goto IL_005d;
	}

IL_0043:
	{
		t106 * L_5 = (__this->f0);
		t59 * L_6 = (L_5->f0);
		m363(L_6, 1, &m363_MI);
		__this->f1 = (-1);
	}

IL_005b:
	{
		return 0;
	}

IL_005d:
	{
		return 1;
	}
	// Dead block : IL_005f: ldloc.1
}
extern MethodInfo m281_MI;
extern "C" void m281 (t109 * __this, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		return;
	}
}
extern MethodInfo m282_MI;
extern "C" void m282 (t109 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#include "t110.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t110_TI;
#include "t110MD.h"



extern MethodInfo m283_MI;
extern "C" void m283 (t110 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m284_MI;
extern "C" t9 * m284 (t110 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m285_MI;
extern "C" t9 * m285 (t110 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m286_MI;
extern "C" bool m286 (t110 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_005b;
	}

IL_0021:
	{
		t106 * L_2 = (__this->f0);
		float L_3 = (L_2->f2);
		t176 * L_4 = (t176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t176_TI));
		m596(L_4, L_3, &m596_MI);
		__this->f2 = L_4;
		__this->f1 = 1;
		goto IL_005d;
	}

IL_0043:
	{
		t106 * L_5 = (__this->f0);
		t59 * L_6 = (L_5->f0);
		m363(L_6, 0, &m363_MI);
		__this->f1 = (-1);
	}

IL_005b:
	{
		return 0;
	}

IL_005d:
	{
		return 1;
	}
	// Dead block : IL_005f: ldloc.1
}
extern MethodInfo m287_MI;
extern "C" void m287 (t110 * __this, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		return;
	}
}
extern MethodInfo m288_MI;
extern "C" void m288 (t110 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#include "t111.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t111_TI;
#include "t111MD.h"

extern MethodInfo m629_MI;
extern MethodInfo m630_MI;


extern MethodInfo m289_MI;
extern "C" void m289 (t111 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m290_MI;
extern "C" t9 * m290 (t111 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m291_MI;
extern "C" t9 * m291 (t111 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m292_MI;
extern "C" bool m292 (t111 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0054;
	}

IL_0021:
	{
		t106 * L_2 = (__this->f0);
		float L_3 = (L_2->f2);
		t176 * L_4 = (t176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t176_TI));
		m596(L_4, L_3, &m596_MI);
		__this->f2 = L_4;
		__this->f1 = 1;
		goto IL_0056;
	}

IL_0043:
	{
		int32_t L_5 = m629(NULL, &m629_MI);
		m630(NULL, L_5, &m630_MI);
		__this->f1 = (-1);
	}

IL_0054:
	{
		return 0;
	}

IL_0056:
	{
		return 1;
	}
	// Dead block : IL_0058: ldloc.1
}
extern MethodInfo m293_MI;
extern "C" void m293 (t111 * __this, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		return;
	}
}
extern MethodInfo m294_MI;
extern "C" void m294 (t111 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#include "t112.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t112_TI;
#include "t112MD.h"

extern MethodInfo m297_MI;
extern MethodInfo m298_MI;
extern MethodInfo m631_MI;
extern MethodInfo m299_MI;


extern MethodInfo m295_MI;
extern "C" void m295 (t112 * __this, MethodInfo* method)
{
	{
		t107 * L_0 = (t107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t107_TI));
		m276(L_0, &m276_MI);
		__this->f2 = L_0;
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m296_MI;
extern "C" void m296 (t112 * __this, MethodInfo* method)
{
	t106 * V_0 = {0};
	t108* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		t107 * L_0 = (__this->f2);
		t108* L_1 = (L_0->f0);
		V_1 = L_1;
		V_2 = 0;
		goto IL_008c;
	}

IL_0013:
	{
		t108* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_0 = (*(t106 **)(t106 **)SZArrayLdElema(L_2, L_4));
		t106 * L_5 = V_0;
		int32_t L_6 = (L_5->f1);
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7 == 0)
		{
			goto IL_0039;
		}
		if (L_7 == 1)
		{
			goto IL_004c;
		}
		if (L_7 == 2)
		{
			goto IL_005f;
		}
		if (L_7 == 3)
		{
			goto IL_0075;
		}
	}
	{
		goto IL_0088;
	}

IL_0039:
	{
		t106 * L_8 = V_0;
		t9 * L_9 = m297(__this, L_8, &m297_MI);
		m605(__this, L_9, &m605_MI);
		goto IL_0088;
	}

IL_004c:
	{
		t106 * L_10 = V_0;
		t9 * L_11 = m298(__this, L_10, &m298_MI);
		m605(__this, L_11, &m605_MI);
		goto IL_0088;
	}

IL_005f:
	{
		t106 * L_12 = V_0;
		t59 * L_13 = (L_12->f0);
		t106 * L_14 = V_0;
		float L_15 = (L_14->f2);
		m631(NULL, L_13, L_15, &m631_MI);
		goto IL_0088;
	}

IL_0075:
	{
		t106 * L_16 = V_0;
		t9 * L_17 = m299(__this, L_16, &m299_MI);
		m605(__this, L_17, &m605_MI);
		goto IL_0088;
	}

IL_0088:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_008c:
	{
		int32_t L_19 = V_2;
		t108* L_20 = V_1;
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((t121 *)L_20)->max_length))))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
extern "C" t9 * m297 (t112 * __this, t106 * p0, MethodInfo* method)
{
	t109 * V_0 = {0};
	{
		t109 * L_0 = (t109 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t109_TI));
		m277(L_0, &m277_MI);
		V_0 = L_0;
		t109 * L_1 = V_0;
		t106 * L_2 = p0;
		L_1->f0 = L_2;
		t109 * L_3 = V_0;
		t106 * L_4 = p0;
		L_3->f3 = L_4;
		t109 * L_5 = V_0;
		return L_5;
	}
}
extern "C" t9 * m298 (t112 * __this, t106 * p0, MethodInfo* method)
{
	t110 * V_0 = {0};
	{
		t110 * L_0 = (t110 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t110_TI));
		m283(L_0, &m283_MI);
		V_0 = L_0;
		t110 * L_1 = V_0;
		t106 * L_2 = p0;
		L_1->f0 = L_2;
		t110 * L_3 = V_0;
		t106 * L_4 = p0;
		L_3->f3 = L_4;
		t110 * L_5 = V_0;
		return L_5;
	}
}
extern "C" t9 * m299 (t112 * __this, t106 * p0, MethodInfo* method)
{
	t111 * V_0 = {0};
	{
		t111 * L_0 = (t111 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t111_TI));
		m289(L_0, &m289_MI);
		V_0 = L_0;
		t111 * L_1 = V_0;
		t106 * L_2 = p0;
		L_1->f0 = L_2;
		t111 * L_3 = V_0;
		t106 * L_4 = p0;
		L_3->f3 = L_4;
		t111 * L_5 = V_0;
		return L_5;
	}
}
#include "t113.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t113_TI;
#include "t113MD.h"

extern MethodInfo m632_MI;
extern MethodInfo m633_MI;


extern MethodInfo m300_MI;
extern "C" void m300 (t113 * __this, MethodInfo* method)
{
	{
		__this->f2 = (1.0f);
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m301_MI;
extern "C" void m301 (t113 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		m632(__this, (t2*) &_stringLiteral45, L_0, &m632_MI);
		return;
	}
}
extern MethodInfo m302_MI;
extern "C" void m302 (t113 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t45 * L_1 = m350(__this, &m350_MI);
		m633(L_1, &m633_MI);
	}

IL_0016:
	{
		t59 * L_2 = m362(__this, &m362_MI);
		m536(NULL, L_2, &m536_MI);
		return;
	}
}
#include "t114.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t114_TI;
#include "t114MD.h"

extern TypeInfo t89_TI;
extern Il2CppType t89_0_0_0;


extern MethodInfo m303_MI;
extern TypeInfo* t89_TI_var;
extern "C" void m303 (t114 * __this, MethodInfo* method)
{
	static bool m303_init;
	if (!m303_init)
	{
		t89_TI_var = il2cpp_codegen_class_from_type(&t89_0_0_0);
		m303_init = true;
	}
	{
		__this->f1 = ((t89*)SZArrayNew(t89_TI_var, 0));
		m336(__this, &m336_MI);
		return;
	}
}
#include "t116.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t116_TI;
#include "t116MD.h"



extern MethodInfo m304_MI;
extern "C" void m304 (t116 * __this, t13  p0, t13  p1, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		__this->f0 = L_0;
		t13  L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t115.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t115_TI;
#include "t115MD.h"

extern TypeInfo t37_TI;
extern TypeInfo t118_TI;
extern TypeInfo t43_TI;
#include "t179MD.h"
extern Il2CppType t37_0_0_0;
extern Il2CppType t118_0_0_0;
extern MethodInfo m308_MI;
extern MethodInfo m313_MI;
extern MethodInfo m311_MI;
extern MethodInfo m306_MI;
extern MethodInfo m307_MI;
extern MethodInfo m312_MI;
extern MethodInfo m634_MI;
extern MethodInfo m635_MI;
extern MethodInfo m636_MI;
extern MethodInfo m316_MI;
extern MethodInfo m637_MI;
extern MethodInfo m638_MI;
extern MethodInfo m639_MI;
extern MethodInfo m640_MI;


extern MethodInfo m305_MI;
extern "C" void m305 (t115 * __this, MethodInfo* method)
{
	{
		t114 * L_0 = (t114 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t114_TI));
		m303(L_0, &m303_MI);
		__this->f2 = L_0;
		__this->f3 = 1;
		__this->f7 = (100.0f);
		m328(__this, &m328_MI);
		return;
	}
}
extern "C" float m306 (t115 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f17);
		return L_0;
	}
}
extern "C" void m307 (t115 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f17 = L_0;
		return;
	}
}
extern "C" t89* m308 (t115 * __this, MethodInfo* method)
{
	{
		t114 * L_0 = (__this->f2);
		t89* L_1 = (L_0->f1);
		return L_1;
	}
}
extern MethodInfo m309_MI;
extern "C" void m309 (t115 * __this, MethodInfo* method)
{
	{
		t89* L_0 = m308(__this, &m308_MI);
		if ((((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		m313(__this, &m313_MI);
	}

IL_0014:
	{
		t89* L_1 = m308(__this, &m308_MI);
		__this->f4 = (((int32_t)(((t121 *)L_1)->max_length)));
		return;
	}
}
extern MethodInfo m310_MI;
extern "C" t116  m310 (t115 * __this, float p0, MethodInfo* method)
{
	t13  V_0 = {0};
	t13  V_1 = {0};
	t13  V_2 = {0};
	{
		float L_0 = p0;
		t13  L_1 = m311(__this, L_0, &m311_MI);
		V_0 = L_1;
		float L_2 = p0;
		t13  L_3 = m311(__this, ((float)((float)L_2+(float)(0.1f))), &m311_MI);
		V_1 = L_3;
		t13  L_4 = V_1;
		t13  L_5 = V_0;
		t13  L_6 = m352(NULL, L_4, L_5, &m352_MI);
		V_2 = L_6;
		t13  L_7 = V_0;
		t13  L_8 = m386((&V_2), &m386_MI);
		t116  L_9 = {0};
		m304(&L_9, L_7, L_8, &m304_MI);
		return L_9;
	}
}
extern "C" t13  m311 (t115 * __this, float p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		float L_0 = m306(__this, &m306_MI);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		t118* L_1 = (__this->f6);
		t118* L_2 = (__this->f6);
		int32_t L_3 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_2)->max_length)))-(int32_t)1));
		m307(__this, (*(float*)(float*)SZArrayLdElema(L_1, L_3)), &m307_MI);
	}

IL_0029:
	{
		float L_4 = p0;
		float L_5 = m306(__this, &m306_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_6 = m412(NULL, L_4, L_5, &m412_MI);
		p0 = L_6;
		goto IL_0040;
	}

IL_003c:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0040:
	{
		t118* L_8 = (__this->f6);
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		float L_11 = p0;
		if ((((float)(*(float*)(float*)SZArrayLdElema(L_8, L_10))) < ((float)L_11)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_12 = V_0;
		int32_t L_13 = (__this->f4);
		int32_t L_14 = (__this->f4);
		__this->f9 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_12-(int32_t)1))+(int32_t)L_13))%(int32_t)L_14));
		int32_t L_15 = V_0;
		__this->f10 = L_15;
		t118* L_16 = (__this->f6);
		int32_t L_17 = (__this->f9);
		int32_t L_18 = L_17;
		t118* L_19 = (__this->f6);
		int32_t L_20 = (__this->f10);
		int32_t L_21 = L_20;
		float L_22 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_23 = m384(NULL, (*(float*)(float*)SZArrayLdElema(L_16, L_18)), (*(float*)(float*)SZArrayLdElema(L_19, L_21)), L_22, &m384_MI);
		__this->f12 = L_23;
		bool L_24 = (__this->f3);
		if (!L_24)
		{
			goto IL_016c;
		}
	}
	{
		int32_t L_25 = V_0;
		int32_t L_26 = (__this->f4);
		int32_t L_27 = (__this->f4);
		__this->f8 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_25-(int32_t)2))+(int32_t)L_26))%(int32_t)L_27));
		int32_t L_28 = V_0;
		int32_t L_29 = (__this->f4);
		__this->f11 = ((int32_t)((int32_t)((int32_t)((int32_t)L_28+(int32_t)1))%(int32_t)L_29));
		int32_t L_30 = (__this->f10);
		int32_t L_31 = (__this->f4);
		__this->f10 = ((int32_t)((int32_t)L_30%(int32_t)L_31));
		t37* L_32 = (__this->f5);
		int32_t L_33 = (__this->f8);
		__this->f13 = (*(t13 *)((t13 *)(t13 *)SZArrayLdElema(L_32, L_33)));
		t37* L_34 = (__this->f5);
		int32_t L_35 = (__this->f9);
		__this->f14 = (*(t13 *)((t13 *)(t13 *)SZArrayLdElema(L_34, L_35)));
		t37* L_36 = (__this->f5);
		int32_t L_37 = (__this->f10);
		__this->f15 = (*(t13 *)((t13 *)(t13 *)SZArrayLdElema(L_36, L_37)));
		t37* L_38 = (__this->f5);
		int32_t L_39 = (__this->f11);
		__this->f16 = (*(t13 *)((t13 *)(t13 *)SZArrayLdElema(L_38, L_39)));
		t13  L_40 = (__this->f13);
		t13  L_41 = (__this->f14);
		t13  L_42 = (__this->f15);
		t13  L_43 = (__this->f16);
		float L_44 = (__this->f12);
		t13  L_45 = m312(__this, L_40, L_41, L_42, L_43, L_44, &m312_MI);
		return L_45;
	}

IL_016c:
	{
		int32_t L_46 = V_0;
		int32_t L_47 = (__this->f4);
		int32_t L_48 = (__this->f4);
		__this->f9 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_46-(int32_t)1))+(int32_t)L_47))%(int32_t)L_48));
		int32_t L_49 = V_0;
		__this->f10 = L_49;
		t37* L_50 = (__this->f5);
		int32_t L_51 = (__this->f9);
		t37* L_52 = (__this->f5);
		int32_t L_53 = (__this->f10);
		float L_54 = (__this->f12);
		t13  L_55 = m634(NULL, (*(t13 *)((t13 *)(t13 *)SZArrayLdElema(L_50, L_51))), (*(t13 *)((t13 *)(t13 *)SZArrayLdElema(L_52, L_53))), L_54, &m634_MI);
		return L_55;
	}
}
extern "C" t13  m312 (t115 * __this, t13  p0, t13  p1, t13  p2, t13  p3, float p4, MethodInfo* method)
{
	{
		t13  L_0 = p1;
		t13  L_1 = m635(NULL, (2.0f), L_0, &m635_MI);
		t13  L_2 = p0;
		t13  L_3 = m580(NULL, L_2, &m580_MI);
		t13  L_4 = p2;
		t13  L_5 = m476(NULL, L_3, L_4, &m476_MI);
		float L_6 = p4;
		t13  L_7 = m475(NULL, L_5, L_6, &m475_MI);
		t13  L_8 = m476(NULL, L_1, L_7, &m476_MI);
		t13  L_9 = p0;
		t13  L_10 = m635(NULL, (2.0f), L_9, &m635_MI);
		t13  L_11 = p1;
		t13  L_12 = m635(NULL, (5.0f), L_11, &m635_MI);
		t13  L_13 = m352(NULL, L_10, L_12, &m352_MI);
		t13  L_14 = p2;
		t13  L_15 = m635(NULL, (4.0f), L_14, &m635_MI);
		t13  L_16 = m476(NULL, L_13, L_15, &m476_MI);
		t13  L_17 = p3;
		t13  L_18 = m352(NULL, L_16, L_17, &m352_MI);
		float L_19 = p4;
		t13  L_20 = m475(NULL, L_18, L_19, &m475_MI);
		float L_21 = p4;
		t13  L_22 = m475(NULL, L_20, L_21, &m475_MI);
		t13  L_23 = m476(NULL, L_8, L_22, &m476_MI);
		t13  L_24 = p0;
		t13  L_25 = m580(NULL, L_24, &m580_MI);
		t13  L_26 = p1;
		t13  L_27 = m635(NULL, (3.0f), L_26, &m635_MI);
		t13  L_28 = m476(NULL, L_25, L_27, &m476_MI);
		t13  L_29 = p2;
		t13  L_30 = m635(NULL, (3.0f), L_29, &m635_MI);
		t13  L_31 = m352(NULL, L_28, L_30, &m352_MI);
		t13  L_32 = p3;
		t13  L_33 = m476(NULL, L_31, L_32, &m476_MI);
		float L_34 = p4;
		t13  L_35 = m475(NULL, L_33, L_34, &m475_MI);
		float L_36 = p4;
		t13  L_37 = m475(NULL, L_35, L_36, &m475_MI);
		float L_38 = p4;
		t13  L_39 = m475(NULL, L_37, L_38, &m475_MI);
		t13  L_40 = m476(NULL, L_23, L_39, &m476_MI);
		t13  L_41 = m635(NULL, (0.5f), L_40, &m635_MI);
		return L_41;
	}
}
extern TypeInfo* t37_TI_var;
extern TypeInfo* t118_TI_var;
extern "C" void m313 (t115 * __this, MethodInfo* method)
{
	static bool m313_init;
	if (!m313_init)
	{
		t37_TI_var = il2cpp_codegen_class_from_type(&t37_0_0_0);
		t118_TI_var = il2cpp_codegen_class_from_type(&t118_0_0_0);
		m313_init = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	t45 * V_2 = {0};
	t45 * V_3 = {0};
	t13  V_4 = {0};
	t13  V_5 = {0};
	t13  V_6 = {0};
	{
		t89* L_0 = m308(__this, &m308_MI);
		__this->f5 = ((t37*)SZArrayNew(t37_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))+(int32_t)1))));
		t89* L_1 = m308(__this, &m308_MI);
		__this->f6 = ((t118*)SZArrayNew(t118_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_1)->max_length)))+(int32_t)1))));
		V_0 = (0.0f);
		V_1 = 0;
		goto IL_00ce;
	}

IL_0037:
	{
		t89* L_2 = m308(__this, &m308_MI);
		int32_t L_3 = V_1;
		t89* L_4 = m308(__this, &m308_MI);
		int32_t L_5 = ((int32_t)((int32_t)L_3%(int32_t)(((int32_t)(((t121 *)L_4)->max_length)))));
		V_2 = (*(t45 **)(t45 **)SZArrayLdElema(L_2, L_5));
		t89* L_6 = m308(__this, &m308_MI);
		int32_t L_7 = V_1;
		t89* L_8 = m308(__this, &m308_MI);
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7+(int32_t)1))%(int32_t)(((int32_t)(((t121 *)L_8)->max_length)))));
		V_3 = (*(t45 **)(t45 **)SZArrayLdElema(L_6, L_9));
		t45 * L_10 = V_2;
		bool L_11 = m332(NULL, L_10, (t57 *)NULL, &m332_MI);
		if (!L_11)
		{
			goto IL_00ca;
		}
	}
	{
		t45 * L_12 = V_3;
		bool L_13 = m332(NULL, L_12, (t57 *)NULL, &m332_MI);
		if (!L_13)
		{
			goto IL_00ca;
		}
	}
	{
		t45 * L_14 = V_2;
		t13  L_15 = m351(L_14, &m351_MI);
		V_4 = L_15;
		t45 * L_16 = V_3;
		t13  L_17 = m351(L_16, &m351_MI);
		V_5 = L_17;
		t37* L_18 = (__this->f5);
		int32_t L_19 = V_1;
		t89* L_20 = m308(__this, &m308_MI);
		int32_t L_21 = V_1;
		t89* L_22 = m308(__this, &m308_MI);
		int32_t L_23 = ((int32_t)((int32_t)L_21%(int32_t)(((int32_t)(((t121 *)L_22)->max_length)))));
		t13  L_24 = m351((*(t45 **)(t45 **)SZArrayLdElema(L_20, L_23)), &m351_MI);
		*((t13 *)(t13 *)SZArrayLdElema(L_18, L_19)) = L_24;
		t118* L_25 = (__this->f6);
		int32_t L_26 = V_1;
		float L_27 = V_0;
		*((float*)(float*)SZArrayLdElema(L_25, L_26)) = (float)L_27;
		float L_28 = V_0;
		t13  L_29 = V_4;
		t13  L_30 = V_5;
		t13  L_31 = m352(NULL, L_29, L_30, &m352_MI);
		V_6 = L_31;
		float L_32 = m636((&V_6), &m636_MI);
		V_0 = ((float)((float)L_28+(float)L_32));
	}

IL_00ca:
	{
		int32_t L_33 = V_1;
		V_1 = ((int32_t)((int32_t)L_33+(int32_t)1));
	}

IL_00ce:
	{
		int32_t L_34 = V_1;
		t37* L_35 = (__this->f5);
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)(((t121 *)L_35)->max_length))))))
		{
			goto IL_0037;
		}
	}
	{
		return;
	}
}
extern MethodInfo m314_MI;
extern "C" void m314 (t115 * __this, MethodInfo* method)
{
	{
		m316(__this, 0, &m316_MI);
		return;
	}
}
extern MethodInfo m315_MI;
extern "C" void m315 (t115 * __this, MethodInfo* method)
{
	{
		m316(__this, 1, &m316_MI);
		return;
	}
}
extern "C" void m316 (t115 * __this, bool p0, MethodInfo* method)
{
	t13  V_0 = {0};
	float V_1 = 0.0f;
	t13  V_2 = {0};
	int32_t V_3 = 0;
	t13  V_4 = {0};
	t43  G_B4_0 = {0};
	{
		t114 * L_0 = (__this->f2);
		L_0->f0 = __this;
		t89* L_1 = m308(__this, &m308_MI);
		if ((((int32_t)(((int32_t)(((t121 *)L_1)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0120;
		}
	}
	{
		t89* L_2 = m308(__this, &m308_MI);
		__this->f4 = (((int32_t)(((t121 *)L_2)->max_length)));
		m313(__this, &m313_MI);
		t118* L_3 = (__this->f6);
		t118* L_4 = (__this->f6);
		int32_t L_5 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_4)->max_length)))-(int32_t)1));
		m307(__this, (*(float*)(float*)SZArrayLdElema(L_3, L_5)), &m307_MI);
		bool L_6 = p0;
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		t43  L_7 = m637(NULL, &m637_MI);
		G_B4_0 = L_7;
		goto IL_006e;
	}

IL_0055:
	{
		t43  L_8 = {0};
		m638(&L_8, (1.0f), (1.0f), (0.0f), (0.5f), &m638_MI);
		G_B4_0 = L_8;
	}

IL_006e:
	{
		m639(NULL, G_B4_0, &m639_MI);
		t89* L_9 = m308(__this, &m308_MI);
		int32_t L_10 = 0;
		t13  L_11 = m351((*(t45 **)(t45 **)SZArrayLdElema(L_9, L_10)), &m351_MI);
		V_0 = L_11;
		bool L_12 = (__this->f3);
		if (!L_12)
		{
			goto IL_00e2;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_00be;
	}

IL_0097:
	{
		float L_13 = V_1;
		t13  L_14 = m311(__this, ((float)((float)L_13+(float)(1.0f))), &m311_MI);
		V_2 = L_14;
		t13  L_15 = V_0;
		t13  L_16 = V_2;
		m640(NULL, L_15, L_16, &m640_MI);
		t13  L_17 = V_2;
		V_0 = L_17;
		float L_18 = V_1;
		float L_19 = m306(__this, &m306_MI);
		float L_20 = (__this->f7);
		V_1 = ((float)((float)L_18+(float)((float)((float)L_19/(float)L_20))));
	}

IL_00be:
	{
		float L_21 = V_1;
		float L_22 = m306(__this, &m306_MI);
		if ((((float)L_21) < ((float)L_22)))
		{
			goto IL_0097;
		}
	}
	{
		t13  L_23 = V_0;
		t89* L_24 = m308(__this, &m308_MI);
		int32_t L_25 = 0;
		t13  L_26 = m351((*(t45 **)(t45 **)SZArrayLdElema(L_24, L_25)), &m351_MI);
		m640(NULL, L_23, L_26, &m640_MI);
		goto IL_0120;
	}

IL_00e2:
	{
		V_3 = 0;
		goto IL_0112;
	}

IL_00e9:
	{
		t89* L_27 = m308(__this, &m308_MI);
		int32_t L_28 = V_3;
		t89* L_29 = m308(__this, &m308_MI);
		int32_t L_30 = ((int32_t)((int32_t)((int32_t)((int32_t)L_28+(int32_t)1))%(int32_t)(((int32_t)(((t121 *)L_29)->max_length)))));
		t13  L_31 = m351((*(t45 **)(t45 **)SZArrayLdElema(L_27, L_30)), &m351_MI);
		V_4 = L_31;
		t13  L_32 = V_0;
		t13  L_33 = V_4;
		m640(NULL, L_32, L_33, &m640_MI);
		t13  L_34 = V_4;
		V_0 = L_34;
		int32_t L_35 = V_3;
		V_3 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_0112:
	{
		int32_t L_36 = V_3;
		t89* L_37 = m308(__this, &m308_MI);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)(((t121 *)L_37)->max_length))))))
		{
			goto IL_00e9;
		}
	}

IL_0120:
	{
		return;
	}
}
#include "t119.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t119_TI;
#include "t119MD.h"



#include "t120.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t120_TI;
#include "t120MD.h"

extern MethodInfo m325_MI;
extern MethodInfo m641_MI;
extern MethodInfo m323_MI;
extern MethodInfo m322_MI;
extern MethodInfo m642_MI;
extern MethodInfo m643_MI;
extern MethodInfo m644_MI;


extern MethodInfo m317_MI;
extern "C" void m317 (t120 * __this, MethodInfo* method)
{
	{
		__this->f3 = (5.0f);
		__this->f4 = (0.1f);
		__this->f5 = (10.0f);
		__this->f6 = (0.2f);
		__this->f8 = (4.0f);
		m328(__this, &m328_MI);
		return;
	}
}
extern MethodInfo m318_MI;
extern "C" t116  m318 (t120 * __this, MethodInfo* method)
{
	{
		t116  L_0 = (__this->f14);
		return L_0;
	}
}
extern MethodInfo m319_MI;
extern "C" void m319 (t120 * __this, t116  p0, MethodInfo* method)
{
	{
		t116  L_0 = p0;
		__this->f14 = L_0;
		return;
	}
}
extern MethodInfo m320_MI;
extern "C" t116  m320 (t120 * __this, MethodInfo* method)
{
	{
		t116  L_0 = (__this->f15);
		return L_0;
	}
}
extern MethodInfo m321_MI;
extern "C" void m321 (t120 * __this, t116  p0, MethodInfo* method)
{
	{
		t116  L_0 = p0;
		__this->f15 = L_0;
		return;
	}
}
extern "C" t116  m322 (t120 * __this, MethodInfo* method)
{
	{
		t116  L_0 = (__this->f16);
		return L_0;
	}
}
extern "C" void m323 (t120 * __this, t116  p0, MethodInfo* method)
{
	{
		t116  L_0 = p0;
		__this->f16 = L_0;
		return;
	}
}
extern MethodInfo m324_MI;
extern "C" void m324 (t120 * __this, MethodInfo* method)
{
	{
		t45 * L_0 = (__this->f9);
		bool L_1 = m333(NULL, L_0, (t57 *)NULL, &m333_MI);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		t2* L_2 = m425(__this, &m425_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m610(NULL, L_2, (t2*) &_stringLiteral46, &m610_MI);
		t59 * L_4 = (t59 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t59_TI));
		m359(L_4, L_3, &m359_MI);
		t45 * L_5 = m534(L_4, &m534_MI);
		__this->f9 = L_5;
	}

IL_0031:
	{
		m325(__this, &m325_MI);
		return;
	}
}
extern "C" void m325 (t120 * __this, MethodInfo* method)
{
	{
		__this->f10 = (0.0f);
		__this->f11 = 0;
		int32_t L_0 = (__this->f7);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0062;
		}
	}
	{
		t45 * L_1 = (__this->f9);
		t115 * L_2 = (__this->f2);
		t89* L_3 = m308(L_2, &m308_MI);
		int32_t L_4 = (__this->f11);
		int32_t L_5 = L_4;
		t13  L_6 = m351((*(t45 **)(t45 **)SZArrayLdElema(L_3, L_5)), &m351_MI);
		m358(L_1, L_6, &m358_MI);
		t45 * L_7 = (__this->f9);
		t115 * L_8 = (__this->f2);
		t89* L_9 = m308(L_8, &m308_MI);
		int32_t L_10 = (__this->f11);
		int32_t L_11 = L_10;
		t93  L_12 = m490((*(t45 **)(t45 **)SZArrayLdElema(L_9, L_11)), &m490_MI);
		m491(L_7, L_12, &m491_MI);
	}

IL_0062:
	{
		return;
	}
}
extern MethodInfo m326_MI;
extern "C" void m326 (t120 * __this, MethodInfo* method)
{
	t13  V_0 = {0};
	t13  V_1 = {0};
	t13  V_2 = {0};
	t13  V_3 = {0};
	t116  V_4 = {0};
	t116  V_5 = {0};
	t116  V_6 = {0};
	t116  V_7 = {0};
	t116  V_8 = {0};
	t116  V_9 = {0};
	{
		int32_t L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_0153;
		}
	}
	{
		float L_1 = m334(NULL, &m334_MI);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		float L_2 = (__this->f13);
		t13  L_3 = (__this->f12);
		t45 * L_4 = m350(__this, &m350_MI);
		t13  L_5 = m351(L_4, &m351_MI);
		t13  L_6 = m352(NULL, L_3, L_5, &m352_MI);
		V_3 = L_6;
		float L_7 = m636((&V_3), &m636_MI);
		float L_8 = m334(NULL, &m334_MI);
		float L_9 = m334(NULL, &m334_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_10 = m585(NULL, L_2, ((float)((float)L_7/(float)L_8)), L_9, &m585_MI);
		__this->f13 = L_10;
	}

IL_0054:
	{
		t45 * L_11 = (__this->f9);
		t115 * L_12 = (__this->f2);
		float L_13 = (__this->f10);
		float L_14 = (__this->f3);
		float L_15 = (__this->f4);
		float L_16 = (__this->f13);
		t116  L_17 = m310(L_12, ((float)((float)((float)((float)L_13+(float)L_14))+(float)((float)((float)L_15*(float)L_16)))), &m310_MI);
		V_4 = L_17;
		t13  L_18 = ((&V_4)->f0);
		m358(L_11, L_18, &m358_MI);
		t45 * L_19 = (__this->f9);
		t115 * L_20 = (__this->f2);
		float L_21 = (__this->f10);
		float L_22 = (__this->f5);
		float L_23 = (__this->f6);
		float L_24 = (__this->f13);
		t116  L_25 = m310(L_20, ((float)((float)((float)((float)L_21+(float)L_22))+(float)((float)((float)L_23*(float)L_24)))), &m310_MI);
		V_5 = L_25;
		t13  L_26 = ((&V_5)->f1);
		t93  L_27 = m641(NULL, L_26, &m641_MI);
		m491(L_19, L_27, &m491_MI);
		t115 * L_28 = (__this->f2);
		float L_29 = (__this->f10);
		t116  L_30 = m310(L_28, L_29, &m310_MI);
		m323(__this, L_30, &m323_MI);
		t116  L_31 = m322(__this, &m322_MI);
		V_6 = L_31;
		t13  L_32 = ((&V_6)->f0);
		t45 * L_33 = m350(__this, &m350_MI);
		t13  L_34 = m351(L_33, &m351_MI);
		t13  L_35 = m352(NULL, L_32, L_34, &m352_MI);
		V_0 = L_35;
		t13  L_36 = V_0;
		t116  L_37 = m322(__this, &m322_MI);
		V_7 = L_37;
		t13  L_38 = ((&V_7)->f1);
		float L_39 = m458(NULL, L_36, L_38, &m458_MI);
		if ((!(((float)L_39) < ((float)(0.0f)))))
		{
			goto IL_013d;
		}
	}
	{
		float L_40 = (__this->f10);
		float L_41 = m636((&V_0), &m636_MI);
		__this->f10 = ((float)((float)L_40+(float)((float)((float)L_41*(float)(0.5f)))));
	}

IL_013d:
	{
		t45 * L_42 = m350(__this, &m350_MI);
		t13  L_43 = m351(L_42, &m351_MI);
		__this->f12 = L_43;
		goto IL_025c;
	}

IL_0153:
	{
		t45 * L_44 = (__this->f9);
		t13  L_45 = m351(L_44, &m351_MI);
		t45 * L_46 = m350(__this, &m350_MI);
		t13  L_47 = m351(L_46, &m351_MI);
		t13  L_48 = m352(NULL, L_45, L_47, &m352_MI);
		V_1 = L_48;
		float L_49 = m636((&V_1), &m636_MI);
		float L_50 = (__this->f8);
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_019d;
		}
	}
	{
		int32_t L_51 = (__this->f11);
		t115 * L_52 = (__this->f2);
		t89* L_53 = m308(L_52, &m308_MI);
		__this->f11 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51+(int32_t)1))%(int32_t)(((int32_t)(((t121 *)L_53)->max_length)))));
	}

IL_019d:
	{
		t45 * L_54 = (__this->f9);
		t115 * L_55 = (__this->f2);
		t89* L_56 = m308(L_55, &m308_MI);
		int32_t L_57 = (__this->f11);
		int32_t L_58 = L_57;
		t13  L_59 = m351((*(t45 **)(t45 **)SZArrayLdElema(L_56, L_58)), &m351_MI);
		m358(L_54, L_59, &m358_MI);
		t45 * L_60 = (__this->f9);
		t115 * L_61 = (__this->f2);
		t89* L_62 = m308(L_61, &m308_MI);
		int32_t L_63 = (__this->f11);
		int32_t L_64 = L_63;
		t93  L_65 = m490((*(t45 **)(t45 **)SZArrayLdElema(L_62, L_64)), &m490_MI);
		m491(L_60, L_65, &m491_MI);
		t115 * L_66 = (__this->f2);
		float L_67 = (__this->f10);
		t116  L_68 = m310(L_66, L_67, &m310_MI);
		m323(__this, L_68, &m323_MI);
		t116  L_69 = m322(__this, &m322_MI);
		V_8 = L_69;
		t13  L_70 = ((&V_8)->f0);
		t45 * L_71 = m350(__this, &m350_MI);
		t13  L_72 = m351(L_71, &m351_MI);
		t13  L_73 = m352(NULL, L_70, L_72, &m352_MI);
		V_2 = L_73;
		t13  L_74 = V_2;
		t116  L_75 = m322(__this, &m322_MI);
		V_9 = L_75;
		t13  L_76 = ((&V_9)->f1);
		float L_77 = m458(NULL, L_74, L_76, &m458_MI);
		if ((!(((float)L_77) < ((float)(0.0f)))))
		{
			goto IL_024b;
		}
	}
	{
		float L_78 = (__this->f10);
		float L_79 = m636((&V_2), &m636_MI);
		__this->f10 = ((float)((float)L_78+(float)L_79));
	}

IL_024b:
	{
		t45 * L_80 = m350(__this, &m350_MI);
		t13  L_81 = m351(L_80, &m351_MI);
		__this->f12 = L_81;
	}

IL_025c:
	{
		return;
	}
}
extern MethodInfo m327_MI;
extern "C" void m327 (t120 * __this, MethodInfo* method)
{
	{
		bool L_0 = m642(NULL, &m642_MI);
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		t43  L_1 = m643(NULL, &m643_MI);
		m639(NULL, L_1, &m639_MI);
		t45 * L_2 = m350(__this, &m350_MI);
		t13  L_3 = m351(L_2, &m351_MI);
		t45 * L_4 = (__this->f9);
		t13  L_5 = m351(L_4, &m351_MI);
		m640(NULL, L_3, L_5, &m640_MI);
		t115 * L_6 = (__this->f2);
		float L_7 = (__this->f10);
		t13  L_8 = m311(L_6, L_7, &m311_MI);
		m644(NULL, L_8, (1.0f), &m644_MI);
		t43  L_9 = m637(NULL, &m637_MI);
		m639(NULL, L_9, &m639_MI);
		t45 * L_10 = (__this->f9);
		t13  L_11 = m351(L_10, &m351_MI);
		t45 * L_12 = (__this->f9);
		t13  L_13 = m351(L_12, &m351_MI);
		t45 * L_14 = (__this->f9);
		t13  L_15 = m480(L_14, &m480_MI);
		t13  L_16 = m476(NULL, L_13, L_15, &m476_MI);
		m640(NULL, L_11, L_16, &m640_MI);
	}

IL_007f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
